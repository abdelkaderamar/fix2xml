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
  multiset<string> CollateralAssignment_0;
  FIX::Account Account_2("STRING_563632094");
  msg.set(Account_2);
  CollateralAssignment_0.insert(Account_2.getString());
  FIX::AccountType AccountType_1(8);
  msg.set(AccountType_1);
  CollateralAssignment_0.insert(AccountType_1.getString());
  FIX::AccruedInterestAmt AccruedInterestAmt_3;
  AccruedInterestAmt_3.setString("9118657");
  msg.set(AccruedInterestAmt_3);
  CollateralAssignment_0.insert(AccruedInterestAmt_3.getString());
  FIX::CashOutstanding CashOutstanding_0;
  CashOutstanding_0.setString("1150026");
  msg.set(CashOutstanding_0);
  CollateralAssignment_0.insert(CashOutstanding_0.getString());
  FIX::ClOrdID ClOrdID_7("STRING_1134068921");
  msg.set(ClOrdID_7);
  CollateralAssignment_0.insert(ClOrdID_7.getString());
  FIX::ClearingBusinessDate ClearingBusinessDate_6("LOCALMKTDATE_266117470");
  msg.set(ClearingBusinessDate_6);
  CollateralAssignment_0.insert(ClearingBusinessDate_6.getString());
  FIX::CollAsgnID CollAsgnID_0("STRING_670139370");
  msg.set(CollAsgnID_0);
  CollateralAssignment_0.insert(CollAsgnID_0.getString());
  FIX::CollAsgnReason CollAsgnReason_0(4);
  msg.set(CollAsgnReason_0);
  CollateralAssignment_0.insert(CollAsgnReason_0.getString());
  FIX::CollAsgnRefID CollAsgnRefID_0("STRING_1449561664");
  msg.set(CollAsgnRefID_0);
  CollateralAssignment_0.insert(CollAsgnRefID_0.getString());
  FIX::CollAsgnTransType CollAsgnTransType_0(2);
  msg.set(CollAsgnTransType_0);
  CollateralAssignment_0.insert(CollAsgnTransType_0.getString());
  FIX::CollReqID CollReqID_0("STRING_955660867");
  msg.set(CollReqID_0);
  CollateralAssignment_0.insert(CollReqID_0.getString());
  FIX::Currency Currency_6("CAN");
  msg.set(Currency_6);
  CollateralAssignment_0.insert(Currency_6.getString());
  FIX::EncodedText EncodedText_13("DATA_1876414860");
  msg.set(EncodedText_13);
  CollateralAssignment_0.insert(EncodedText_13.getString());
  FIX::EncodedTextLen EncodedTextLen_13(1608479810);
  msg.set(EncodedTextLen_13);
  CollateralAssignment_0.insert(EncodedTextLen_13.getString());
  FIX::EndAccruedInterestAmt EndAccruedInterestAmt_3;
  EndAccruedInterestAmt_3.setString("19835391");
  msg.set(EndAccruedInterestAmt_3);
  CollateralAssignment_0.insert(EndAccruedInterestAmt_3.getString());
  FIX::EndCash EndCash_3;
  EndCash_3.setString("16030745");
  msg.set(EndCash_3);
  CollateralAssignment_0.insert(EndCash_3.getString());
  FIX::ExpireTime ExpireTime_0(FIX::UTCTIMESTAMP(7, 36, 22, 9, 8, 2000));
  msg.set(ExpireTime_0);
  CollateralAssignment_0.insert(ExpireTime_0.getString());
  FIX::MarginExcess MarginExcess_0;
  MarginExcess_0.setString("12616295");
  msg.set(MarginExcess_0);
  CollateralAssignment_0.insert(MarginExcess_0.getString());
  FIX::OrderID OrderID_7("STRING_1658910938");
  msg.set(OrderID_7);
  CollateralAssignment_0.insert(OrderID_7.getString());
  FIX::Price Price_2;
  Price_2.setString("18755081");
  msg.set(Price_2);
  CollateralAssignment_0.insert(Price_2.getString());
  FIX::PriceType PriceType_4(11);
  msg.set(PriceType_4);
  CollateralAssignment_0.insert(PriceType_4.getString());
  FIX::QtyType QtyType_4(0);
  msg.set(QtyType_4);
  CollateralAssignment_0.insert(QtyType_4.getString());
  FIX::Quantity Quantity_5;
  Quantity_5.setString("20544568");
  msg.set(Quantity_5);
  CollateralAssignment_0.insert(Quantity_5.getString());
  FIX::SecondaryClOrdID SecondaryClOrdID_7("STRING_161472403");
  msg.set(SecondaryClOrdID_7);
  CollateralAssignment_0.insert(SecondaryClOrdID_7.getString());
  FIX::SecondaryOrderID SecondaryOrderID_7("STRING_86178528");
  msg.set(SecondaryOrderID_7);
  CollateralAssignment_0.insert(SecondaryOrderID_7.getString());
  FIX::SettlDate SettlDate_5("LOCALMKTDATE_2082959888");
  msg.set(SettlDate_5);
  CollateralAssignment_0.insert(SettlDate_5.getString());
  FIX::SettlSessID SettlSessID_2("STRING_RTH");
  msg.set(SettlSessID_2);
  CollateralAssignment_0.insert(SettlSessID_2.getString());
  FIX::SettlSessSubID SettlSessSubID_1("STRING_201181193");
  msg.set(SettlSessSubID_1);
  CollateralAssignment_0.insert(SettlSessSubID_1.getString());
  FIX::Side Side_5('A');
  msg.set(Side_5);
  CollateralAssignment_0.insert(Side_5.getString());
  FIX::StartCash StartCash_3;
  StartCash_3.setString("13394556");
  msg.set(StartCash_3);
  CollateralAssignment_0.insert(StartCash_3.getString());
  FIX::Text Text_13("STRING_871320564");
  msg.set(Text_13);
  CollateralAssignment_0.insert(Text_13.getString());
  FIX::TotalNetValue TotalNetValue_0;
  TotalNetValue_0.setString("19034757");
  msg.set(TotalNetValue_0);
  CollateralAssignment_0.insert(TotalNetValue_0.getString());
  FIX::TradingSessionID TradingSessionID_6("STRING_2");
  msg.set(TradingSessionID_6);
  CollateralAssignment_0.insert(TradingSessionID_6.getString());
  FIX::TradingSessionSubID TradingSessionSubID_6("STRING_6");
  msg.set(TradingSessionSubID_6);
  CollateralAssignment_0.insert(TradingSessionSubID_6.getString());
  FIX::TransactTime TransactTime_6(FIX::UTCTIMESTAMP(19, 22, 57, 6, 7, 2002));
  msg.set(TransactTime_6);
  CollateralAssignment_0.insert(TransactTime_6.getString());
  all_values.push_back(CollateralAssignment_0);

  // ExecCollGrp
  // Group ExecCollGrp.NoExecs
  {
    FIX50SP2::CollateralAssignment::NoExecs noExecs_0_0;
    // ExecCollGrp.NoExecs
    multiset<string> ExecCollGrp_NoExecs_0;
    FIX::ExecID ExecID_6("STRING_823309433");
    noExecs_0_0.set(ExecID_6);
    ExecCollGrp_NoExecs_0.insert(ExecID_6.getString());
    all_values.push_back(ExecCollGrp_NoExecs_0);

    msg.addGroup(noExecs_0_0);
  }
  // FinancingDetails
  multiset<string> FinancingDetails_3;
  FIX::AgreementCurrency AgreementCurrency_3("GBP");
  msg.set(AgreementCurrency_3);
  FinancingDetails_3.insert(AgreementCurrency_3.getString());
  FIX::AgreementDate AgreementDate_3("LOCALMKTDATE_1766107606");
  msg.set(AgreementDate_3);
  FinancingDetails_3.insert(AgreementDate_3.getString());
  FIX::AgreementDesc AgreementDesc_3("STRING_632720052");
  msg.set(AgreementDesc_3);
  FinancingDetails_3.insert(AgreementDesc_3.getString());
  FIX::AgreementID AgreementID_3("STRING_568605038");
  msg.set(AgreementID_3);
  FinancingDetails_3.insert(AgreementID_3.getString());
  FIX::DeliveryType DeliveryType_3(3);
  msg.set(DeliveryType_3);
  FinancingDetails_3.insert(DeliveryType_3.getString());
  FIX::EndDate EndDate_3("LOCALMKTDATE_144147343");
  msg.set(EndDate_3);
  FinancingDetails_3.insert(EndDate_3.getString());
  FIX::MarginRatio MarginRatio_3;
  MarginRatio_3.setString("95.430000");
  msg.set(MarginRatio_3);
  FinancingDetails_3.insert(MarginRatio_3.getString());
  FIX::StartDate StartDate_3("LOCALMKTDATE_629278561");
  msg.set(StartDate_3);
  FinancingDetails_3.insert(StartDate_3.getString());
  FIX::TerminationType TerminationType_3(2);
  msg.set(TerminationType_3);
  FinancingDetails_3.insert(TerminationType_3.getString());
  all_values.push_back(FinancingDetails_3);

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::CollateralAssignment::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_10;
    FIX::EncodedLegIssuer EncodedLegIssuer_10("DATA_790750964");
    noLegs_0_0.set(EncodedLegIssuer_10);
    InstrumentLeg_10.insert(EncodedLegIssuer_10.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_10(1900355953);
    noLegs_0_0.set(EncodedLegIssuerLen_10);
    InstrumentLeg_10.insert(EncodedLegIssuerLen_10.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_10("DATA_139078941");
    noLegs_0_0.set(EncodedLegSecurityDesc_10);
    InstrumentLeg_10.insert(EncodedLegSecurityDesc_10.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_10(1864089165);
    noLegs_0_0.set(EncodedLegSecurityDescLen_10);
    InstrumentLeg_10.insert(EncodedLegSecurityDescLen_10.getString());
    FIX::LegCFICode LegCFICode_10("STRING_2101537146");
    noLegs_0_0.set(LegCFICode_10);
    InstrumentLeg_10.insert(LegCFICode_10.getString());
    FIX::LegContractMultiplier LegContractMultiplier_10;
    LegContractMultiplier_10.setString("12086241");
    noLegs_0_0.set(LegContractMultiplier_10);
    InstrumentLeg_10.insert(LegContractMultiplier_10.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_10(1056061188);
    noLegs_0_0.set(LegContractMultiplierUnit_10);
    InstrumentLeg_10.insert(LegContractMultiplierUnit_10.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_10("MONTHYEAR_825374062");
    noLegs_0_0.set(LegContractSettlMonth_10);
    InstrumentLeg_10.insert(LegContractSettlMonth_10.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_10("COUNTRY_964616220");
    noLegs_0_0.set(LegCountryOfIssue_10);
    InstrumentLeg_10.insert(LegCountryOfIssue_10.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_10("LOCALMKTDATE_1697594875");
    noLegs_0_0.set(LegCouponPaymentDate_10);
    InstrumentLeg_10.insert(LegCouponPaymentDate_10.getString());
    FIX::LegCouponRate LegCouponRate_10;
    LegCouponRate_10.setString("61.510000");
    noLegs_0_0.set(LegCouponRate_10);
    InstrumentLeg_10.insert(LegCouponRate_10.getString());
    FIX::LegCreditRating LegCreditRating_10("STRING_1676269205");
    noLegs_0_0.set(LegCreditRating_10);
    InstrumentLeg_10.insert(LegCreditRating_10.getString());
    FIX::LegCurrency LegCurrency_10("CAN");
    noLegs_0_0.set(LegCurrency_10);
    InstrumentLeg_10.insert(LegCurrency_10.getString());
    FIX::LegDatedDate LegDatedDate_10("LOCALMKTDATE_2116853402");
    noLegs_0_0.set(LegDatedDate_10);
    InstrumentLeg_10.insert(LegDatedDate_10.getString());
    FIX::LegExerciseStyle LegExerciseStyle_10(252453861);
    noLegs_0_0.set(LegExerciseStyle_10);
    InstrumentLeg_10.insert(LegExerciseStyle_10.getString());
    FIX::LegFactor LegFactor_10;
    LegFactor_10.setString("4200560");
    noLegs_0_0.set(LegFactor_10);
    InstrumentLeg_10.insert(LegFactor_10.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_10(2013028503);
    noLegs_0_0.set(LegFlowScheduleType_10);
    InstrumentLeg_10.insert(LegFlowScheduleType_10.getString());
    FIX::LegInstrRegistry LegInstrRegistry_10("STRING_1049819277");
    noLegs_0_0.set(LegInstrRegistry_10);
    InstrumentLeg_10.insert(LegInstrRegistry_10.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_10("LOCALMKTDATE_1243365452");
    noLegs_0_0.set(LegInterestAccrualDate_10);
    InstrumentLeg_10.insert(LegInterestAccrualDate_10.getString());
    FIX::LegIssueDate LegIssueDate_10("LOCALMKTDATE_652035152");
    noLegs_0_0.set(LegIssueDate_10);
    InstrumentLeg_10.insert(LegIssueDate_10.getString());
    FIX::LegIssuer LegIssuer_10("STRING_1358594747");
    noLegs_0_0.set(LegIssuer_10);
    InstrumentLeg_10.insert(LegIssuer_10.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_10("STRING_861989410");
    noLegs_0_0.set(LegLocaleOfIssue_10);
    InstrumentLeg_10.insert(LegLocaleOfIssue_10.getString());
    FIX::LegMaturityDate LegMaturityDate_10("LOCALMKTDATE_1284755204");
    noLegs_0_0.set(LegMaturityDate_10);
    InstrumentLeg_10.insert(LegMaturityDate_10.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_10("MONTHYEAR_1927199785");
    noLegs_0_0.set(LegMaturityMonthYear_10);
    InstrumentLeg_10.insert(LegMaturityMonthYear_10.getString());
    FIX::LegMaturityTime LegMaturityTime_10("TZTIMEONLY_1742242881");
    noLegs_0_0.set(LegMaturityTime_10);
    InstrumentLeg_10.insert(LegMaturityTime_10.getString());
    FIX::LegOptAttribute LegOptAttribute_10('1');
    noLegs_0_0.set(LegOptAttribute_10);
    InstrumentLeg_10.insert(LegOptAttribute_10.getString());
    FIX::LegOptionRatio LegOptionRatio_10;
    LegOptionRatio_10.setString("763456");
    noLegs_0_0.set(LegOptionRatio_10);
    InstrumentLeg_10.insert(LegOptionRatio_10.getString());
    FIX::LegPool LegPool_10("STRING_224037794");
    noLegs_0_0.set(LegPool_10);
    InstrumentLeg_10.insert(LegPool_10.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_10("STRING_1095596324");
    noLegs_0_0.set(LegPriceUnitOfMeasure_10);
    InstrumentLeg_10.insert(LegPriceUnitOfMeasure_10.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_10;
    LegPriceUnitOfMeasureQty_10.setString("2799483");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_10);
    InstrumentLeg_10.insert(LegPriceUnitOfMeasureQty_10.getString());
    FIX::LegProduct LegProduct_10(1014788759);
    noLegs_0_0.set(LegProduct_10);
    InstrumentLeg_10.insert(LegProduct_10.getString());
    FIX::LegPutOrCall LegPutOrCall_10(848468629);
    noLegs_0_0.set(LegPutOrCall_10);
    InstrumentLeg_10.insert(LegPutOrCall_10.getString());
    FIX::LegRatioQty LegRatioQty_10;
    LegRatioQty_10.setString("4190273");
    noLegs_0_0.set(LegRatioQty_10);
    InstrumentLeg_10.insert(LegRatioQty_10.getString());
    FIX::LegRedemptionDate LegRedemptionDate_10("LOCALMKTDATE_731394276");
    noLegs_0_0.set(LegRedemptionDate_10);
    InstrumentLeg_10.insert(LegRedemptionDate_10.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_10("STRING_802522128");
    noLegs_0_0.set(LegRepoCollateralSecurityType_10);
    InstrumentLeg_10.insert(LegRepoCollateralSecurityType_10.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_10;
    LegRepurchaseRate_10.setString("14.270000");
    noLegs_0_0.set(LegRepurchaseRate_10);
    InstrumentLeg_10.insert(LegRepurchaseRate_10.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_10(1787455465);
    noLegs_0_0.set(LegRepurchaseTerm_10);
    InstrumentLeg_10.insert(LegRepurchaseTerm_10.getString());
    FIX::LegSecurityDesc LegSecurityDesc_10("STRING_1627896190");
    noLegs_0_0.set(LegSecurityDesc_10);
    InstrumentLeg_10.insert(LegSecurityDesc_10.getString());
    FIX::LegSecurityExchange LegSecurityExchange_10("EXCHANGE_444783999");
    noLegs_0_0.set(LegSecurityExchange_10);
    InstrumentLeg_10.insert(LegSecurityExchange_10.getString());
    FIX::LegSecurityID LegSecurityID_10("STRING_1337566692");
    noLegs_0_0.set(LegSecurityID_10);
    InstrumentLeg_10.insert(LegSecurityID_10.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_10("STRING_999548693");
    noLegs_0_0.set(LegSecurityIDSource_10);
    InstrumentLeg_10.insert(LegSecurityIDSource_10.getString());
    FIX::LegSecuritySubType LegSecuritySubType_10("STRING_2121053205");
    noLegs_0_0.set(LegSecuritySubType_10);
    InstrumentLeg_10.insert(LegSecuritySubType_10.getString());
    FIX::LegSecurityType LegSecurityType_10("STRING_1508351155");
    noLegs_0_0.set(LegSecurityType_10);
    InstrumentLeg_10.insert(LegSecurityType_10.getString());
    FIX::LegSide LegSide_10('2');
    noLegs_0_0.set(LegSide_10);
    InstrumentLeg_10.insert(LegSide_10.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_10("STRING_2090422959");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_10);
    InstrumentLeg_10.insert(LegStateOrProvinceOfIssue_10.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_10("CAN");
    noLegs_0_0.set(LegStrikeCurrency_10);
    InstrumentLeg_10.insert(LegStrikeCurrency_10.getString());
    FIX::LegStrikePrice LegStrikePrice_10;
    LegStrikePrice_10.setString("19559678");
    noLegs_0_0.set(LegStrikePrice_10);
    InstrumentLeg_10.insert(LegStrikePrice_10.getString());
    FIX::LegSymbol LegSymbol_10("STRING_663140645");
    noLegs_0_0.set(LegSymbol_10);
    InstrumentLeg_10.insert(LegSymbol_10.getString());
    FIX::LegSymbolSfx LegSymbolSfx_10("STRING_1567054861");
    noLegs_0_0.set(LegSymbolSfx_10);
    InstrumentLeg_10.insert(LegSymbolSfx_10.getString());
    FIX::LegTimeUnit LegTimeUnit_10("STRING_460519318");
    noLegs_0_0.set(LegTimeUnit_10);
    InstrumentLeg_10.insert(LegTimeUnit_10.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_10("STRING_2021735392");
    noLegs_0_0.set(LegUnitOfMeasure_10);
    InstrumentLeg_10.insert(LegUnitOfMeasure_10.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_10;
    LegUnitOfMeasureQty_10.setString("2815606");
    noLegs_0_0.set(LegUnitOfMeasureQty_10);
    InstrumentLeg_10.insert(LegUnitOfMeasureQty_10.getString());
    all_values.push_back(InstrumentLeg_10);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::CollateralAssignment::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_16;
      FIX::LegSecurityAltID LegSecurityAltID_16("STRING_1801451530");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_16);
      LegSecAltIDGrp_NoLegSecurityAltID_16.insert(LegSecurityAltID_16.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_16("STRING_2023803504");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_16);
      LegSecAltIDGrp_NoLegSecurityAltID_16.insert(LegSecurityAltIDSource_16.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_16);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::CollateralAssignment::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_17;
      FIX::LegSecurityAltID LegSecurityAltID_17("STRING_1026693422");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_17);
      LegSecAltIDGrp_NoLegSecurityAltID_17.insert(LegSecurityAltID_17.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_17("STRING_1877797211");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_17);
      LegSecAltIDGrp_NoLegSecurityAltID_17.insert(LegSecurityAltIDSource_17.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_17);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    msg.addGroup(noLegs_0_0);
  }
  // Instrument
  multiset<string> Instrument_8;
  FIX::AttachmentPoint AttachmentPoint_8;
  AttachmentPoint_8.setString("76.510000");
  msg.set(AttachmentPoint_8);
  Instrument_8.insert(AttachmentPoint_8.getString());
  FIX::CFICode CFICode_8("STRING_2122289747");
  msg.set(CFICode_8);
  Instrument_8.insert(CFICode_8.getString());
  FIX::CPProgram CPProgram_8(2);
  msg.set(CPProgram_8);
  Instrument_8.insert(CPProgram_8.getString());
  FIX::CPRegType CPRegType_8("STRING_1115146410");
  msg.set(CPRegType_8);
  Instrument_8.insert(CPRegType_8.getString());
  FIX::CapPrice CapPrice_8;
  CapPrice_8.setString("8232747");
  msg.set(CapPrice_8);
  Instrument_8.insert(CapPrice_8.getString());
  FIX::ContractMultiplier ContractMultiplier_8;
  ContractMultiplier_8.setString("4292892");
  msg.set(ContractMultiplier_8);
  Instrument_8.insert(ContractMultiplier_8.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_8(0);
  msg.set(ContractMultiplierUnit_8);
  Instrument_8.insert(ContractMultiplierUnit_8.getString());
  FIX::ContractSettlMonth ContractSettlMonth_8("MONTHYEAR_1625796856");
  msg.set(ContractSettlMonth_8);
  Instrument_8.insert(ContractSettlMonth_8.getString());
  FIX::CountryOfIssue CountryOfIssue_8("COUNTRY_2056940696");
  msg.set(CountryOfIssue_8);
  Instrument_8.insert(CountryOfIssue_8.getString());
  FIX::CouponPaymentDate CouponPaymentDate_8("LOCALMKTDATE_1486512503");
  msg.set(CouponPaymentDate_8);
  Instrument_8.insert(CouponPaymentDate_8.getString());
  FIX::CouponRate CouponRate_8;
  CouponRate_8.setString("93.990000");
  msg.set(CouponRate_8);
  Instrument_8.insert(CouponRate_8.getString());
  FIX::CreditRating CreditRating_8("STRING_354241048");
  msg.set(CreditRating_8);
  Instrument_8.insert(CreditRating_8.getString());
  FIX::DatedDate DatedDate_8("LOCALMKTDATE_676595548");
  msg.set(DatedDate_8);
  Instrument_8.insert(DatedDate_8.getString());
  FIX::DetachmentPoint DetachmentPoint_8;
  DetachmentPoint_8.setString("80.920000");
  msg.set(DetachmentPoint_8);
  Instrument_8.insert(DetachmentPoint_8.getString());
  FIX::EncodedIssuer EncodedIssuer_8("DATA_327810605");
  msg.set(EncodedIssuer_8);
  Instrument_8.insert(EncodedIssuer_8.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_8(37463055);
  msg.set(EncodedIssuerLen_8);
  Instrument_8.insert(EncodedIssuerLen_8.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_8("DATA_2009391483");
  msg.set(EncodedSecurityDesc_8);
  Instrument_8.insert(EncodedSecurityDesc_8.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_8(270749916);
  msg.set(EncodedSecurityDescLen_8);
  Instrument_8.insert(EncodedSecurityDescLen_8.getString());
  FIX::ExerciseStyle ExerciseStyle_8(2);
  msg.set(ExerciseStyle_8);
  Instrument_8.insert(ExerciseStyle_8.getString());
  FIX::Factor Factor_8;
  Factor_8.setString("1855972");
  msg.set(Factor_8);
  Instrument_8.insert(Factor_8.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_8(false);
  msg.set(FlexProductEligibilityIndicator_8);
  Instrument_8.insert(FlexProductEligibilityIndicator_8.getString());
  FIX::FlexibleIndicator FlexibleIndicator_8(false);
  msg.set(FlexibleIndicator_8);
  Instrument_8.insert(FlexibleIndicator_8.getString());
  FIX::FloorPrice FloorPrice_8;
  FloorPrice_8.setString("17526521");
  msg.set(FloorPrice_8);
  Instrument_8.insert(FloorPrice_8.getString());
  FIX::FlowScheduleType FlowScheduleType_8(1);
  msg.set(FlowScheduleType_8);
  Instrument_8.insert(FlowScheduleType_8.getString());
  FIX::InstrRegistry InstrRegistry_8("STRING_188176814");
  msg.set(InstrRegistry_8);
  Instrument_8.insert(InstrRegistry_8.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_8('2');
  msg.set(InstrmtAssignmentMethod_8);
  Instrument_8.insert(InstrmtAssignmentMethod_8.getString());
  FIX::InterestAccrualDate InterestAccrualDate_8("LOCALMKTDATE_137544276");
  msg.set(InterestAccrualDate_8);
  Instrument_8.insert(InterestAccrualDate_8.getString());
  FIX::IssueDate IssueDate_8("LOCALMKTDATE_1989628344");
  msg.set(IssueDate_8);
  Instrument_8.insert(IssueDate_8.getString());
  FIX::Issuer Issuer_8("STRING_1910532586");
  msg.set(Issuer_8);
  Instrument_8.insert(Issuer_8.getString());
  FIX::ListMethod ListMethod_8(1);
  msg.set(ListMethod_8);
  Instrument_8.insert(ListMethod_8.getString());
  FIX::LocaleOfIssue LocaleOfIssue_8("STRING_1719941907");
  msg.set(LocaleOfIssue_8);
  Instrument_8.insert(LocaleOfIssue_8.getString());
  FIX::MaturityDate MaturityDate_8("LOCALMKTDATE_2010890237");
  msg.set(MaturityDate_8);
  Instrument_8.insert(MaturityDate_8.getString());
  FIX::MaturityMonthYear MaturityMonthYear_8("MONTHYEAR_1139043798");
  msg.set(MaturityMonthYear_8);
  Instrument_8.insert(MaturityMonthYear_8.getString());
  FIX::MaturityTime MaturityTime_8("TZTIMEONLY_1730203852");
  msg.set(MaturityTime_8);
  Instrument_8.insert(MaturityTime_8.getString());
  FIX::MinPriceIncrement MinPriceIncrement_8;
  MinPriceIncrement_8.setString("9785529");
  msg.set(MinPriceIncrement_8);
  Instrument_8.insert(MinPriceIncrement_8.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_8;
  MinPriceIncrementAmount_8.setString("19623185");
  msg.set(MinPriceIncrementAmount_8);
  Instrument_8.insert(MinPriceIncrementAmount_8.getString());
  FIX::NTPositionLimit NTPositionLimit_8(12009474);
  msg.set(NTPositionLimit_8);
  Instrument_8.insert(NTPositionLimit_8.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_8;
  NotionalPercentageOutstanding_8.setString("0.370000");
  msg.set(NotionalPercentageOutstanding_8);
  Instrument_8.insert(NotionalPercentageOutstanding_8.getString());
  FIX::OptAttribute OptAttribute_8('1');
  msg.set(OptAttribute_8);
  Instrument_8.insert(OptAttribute_8.getString());
  FIX::OptPayoutAmount OptPayoutAmount_8;
  OptPayoutAmount_8.setString("20689501");
  msg.set(OptPayoutAmount_8);
  Instrument_8.insert(OptPayoutAmount_8.getString());
  FIX::OptPayoutType OptPayoutType_8(3);
  msg.set(OptPayoutType_8);
  Instrument_8.insert(OptPayoutType_8.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_8;
  OriginalNotionalPercentageOutstanding_8.setString("74.860000");
  msg.set(OriginalNotionalPercentageOutstanding_8);
  Instrument_8.insert(OriginalNotionalPercentageOutstanding_8.getString());
  FIX::Pool Pool_8("STRING_275707570");
  msg.set(Pool_8);
  Instrument_8.insert(Pool_8.getString());
  FIX::PositionLimit PositionLimit_8(693234441);
  msg.set(PositionLimit_8);
  Instrument_8.insert(PositionLimit_8.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_8("STRING_INT");
  msg.set(PriceQuoteMethod_8);
  Instrument_8.insert(PriceQuoteMethod_8.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_8("STRING_603518175");
  msg.set(PriceUnitOfMeasure_8);
  Instrument_8.insert(PriceUnitOfMeasure_8.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_8;
  PriceUnitOfMeasureQty_8.setString("7306974");
  msg.set(PriceUnitOfMeasureQty_8);
  Instrument_8.insert(PriceUnitOfMeasureQty_8.getString());
  FIX::Product Product_10(4);
  msg.set(Product_10);
  Instrument_8.insert(Product_10.getString());
  FIX::ProductComplex ProductComplex_8("STRING_874268092");
  msg.set(ProductComplex_8);
  Instrument_8.insert(ProductComplex_8.getString());
  FIX::PutOrCall PutOrCall_8(0);
  msg.set(PutOrCall_8);
  Instrument_8.insert(PutOrCall_8.getString());
  FIX::RedemptionDate RedemptionDate_8("LOCALMKTDATE_405137010");
  msg.set(RedemptionDate_8);
  Instrument_8.insert(RedemptionDate_8.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_8("STRING_953502175");
  msg.set(RepoCollateralSecurityType_8);
  Instrument_8.insert(RepoCollateralSecurityType_8.getString());
  FIX::RepurchaseRate RepurchaseRate_8;
  RepurchaseRate_8.setString("69.900000");
  msg.set(RepurchaseRate_8);
  Instrument_8.insert(RepurchaseRate_8.getString());
  FIX::RepurchaseTerm RepurchaseTerm_8(10305468);
  msg.set(RepurchaseTerm_8);
  Instrument_8.insert(RepurchaseTerm_8.getString());
  FIX::RestructuringType RestructuringType_8("STRING_FR");
  msg.set(RestructuringType_8);
  Instrument_8.insert(RestructuringType_8.getString());
  FIX::SecurityDesc SecurityDesc_8("STRING_883583804");
  msg.set(SecurityDesc_8);
  Instrument_8.insert(SecurityDesc_8.getString());
  FIX::SecurityExchange SecurityExchange_8("EXCHANGE_2044518197");
  msg.set(SecurityExchange_8);
  Instrument_8.insert(SecurityExchange_8.getString());
  FIX::SecurityGroup SecurityGroup_8("STRING_1630799853");
  msg.set(SecurityGroup_8);
  Instrument_8.insert(SecurityGroup_8.getString());
  FIX::SecurityID SecurityID_8("STRING_725728500");
  msg.set(SecurityID_8);
  Instrument_8.insert(SecurityID_8.getString());
  FIX::SecurityIDSource SecurityIDSource_8("STRING_C");
  msg.set(SecurityIDSource_8);
  Instrument_8.insert(SecurityIDSource_8.getString());
  FIX::SecurityStatus SecurityStatus_8("STRING_1");
  msg.set(SecurityStatus_8);
  Instrument_8.insert(SecurityStatus_8.getString());
  FIX::SecuritySubType SecuritySubType_8("STRING_298186759");
  msg.set(SecuritySubType_8);
  Instrument_8.insert(SecuritySubType_8.getString());
  FIX::SecurityType SecurityType_10("STRING_BRADY");
  msg.set(SecurityType_10);
  Instrument_8.insert(SecurityType_10.getString());
  FIX::Seniority Seniority_8("STRING_SR");
  msg.set(Seniority_8);
  Instrument_8.insert(Seniority_8.getString());
  FIX::SettlMethod SettlMethod_8('P');
  msg.set(SettlMethod_8);
  Instrument_8.insert(SettlMethod_8.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_8("STRING_502043075");
  msg.set(SettleOnOpenFlag_8);
  Instrument_8.insert(SettleOnOpenFlag_8.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_8("STRING_1601432580");
  msg.set(StateOrProvinceOfIssue_8);
  Instrument_8.insert(StateOrProvinceOfIssue_8.getString());
  FIX::StrikeCurrency StrikeCurrency_8("EUR");
  msg.set(StrikeCurrency_8);
  Instrument_8.insert(StrikeCurrency_8.getString());
  FIX::StrikeMultiplier StrikeMultiplier_8;
  StrikeMultiplier_8.setString("8945806");
  msg.set(StrikeMultiplier_8);
  Instrument_8.insert(StrikeMultiplier_8.getString());
  FIX::StrikePrice StrikePrice_8;
  StrikePrice_8.setString("19618666");
  msg.set(StrikePrice_8);
  Instrument_8.insert(StrikePrice_8.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_8(2);
  msg.set(StrikePriceBoundaryMethod_8);
  Instrument_8.insert(StrikePriceBoundaryMethod_8.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_8;
  StrikePriceBoundaryPrecision_8.setString("81.530000");
  msg.set(StrikePriceBoundaryPrecision_8);
  Instrument_8.insert(StrikePriceBoundaryPrecision_8.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_8(3);
  msg.set(StrikePriceDeterminationMethod_8);
  Instrument_8.insert(StrikePriceDeterminationMethod_8.getString());
  FIX::StrikeValue StrikeValue_8;
  StrikeValue_8.setString("18895264");
  msg.set(StrikeValue_8);
  Instrument_8.insert(StrikeValue_8.getString());
  FIX::Symbol Symbol_8("STRING_1651570084");
  msg.set(Symbol_8);
  Instrument_8.insert(Symbol_8.getString());
  FIX::SymbolSfx SymbolSfx_8("STRING_CD");
  msg.set(SymbolSfx_8);
  Instrument_8.insert(SymbolSfx_8.getString());
  FIX::TimeUnit TimeUnit_8("STRING_Yr");
  msg.set(TimeUnit_8);
  Instrument_8.insert(TimeUnit_8.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_8(2);
  msg.set(UnderlyingPriceDeterminationMethod_8);
  Instrument_8.insert(UnderlyingPriceDeterminationMethod_8.getString());
  FIX::UnitOfMeasure UnitOfMeasure_8("STRING_Gal");
  msg.set(UnitOfMeasure_8);
  Instrument_8.insert(UnitOfMeasure_8.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_8;
  UnitOfMeasureQty_8.setString("8542222");
  msg.set(UnitOfMeasureQty_8);
  Instrument_8.insert(UnitOfMeasureQty_8.getString());
  FIX::ValuationMethod ValuationMethod_8("STRING_FUT");
  msg.set(ValuationMethod_8);
  Instrument_8.insert(ValuationMethod_8.getString());
  all_values.push_back(Instrument_8);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::CollateralAssignment::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_16;
    FIX::ComplexEventCondition ComplexEventCondition_16(1);
    noComplexEvents_0_0.set(ComplexEventCondition_16);
    ComplexEvents_NoComplexEvents_16.insert(ComplexEventCondition_16.getString());
    FIX::ComplexEventPrice ComplexEventPrice_16;
    ComplexEventPrice_16.setString("1390686");
    noComplexEvents_0_0.set(ComplexEventPrice_16);
    ComplexEvents_NoComplexEvents_16.insert(ComplexEventPrice_16.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_16(2);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_16);
    ComplexEvents_NoComplexEvents_16.insert(ComplexEventPriceBoundaryMethod_16.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_16;
    ComplexEventPriceBoundaryPrecision_16.setString("93.620000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_16);
    ComplexEvents_NoComplexEvents_16.insert(ComplexEventPriceBoundaryPrecision_16.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_16(3);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_16);
    ComplexEvents_NoComplexEvents_16.insert(ComplexEventPriceTimeType_16.getString());
    FIX::ComplexEventType ComplexEventType_16(7);
    noComplexEvents_0_0.set(ComplexEventType_16);
    ComplexEvents_NoComplexEvents_16.insert(ComplexEventType_16.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_16;
    ComplexOptPayoutAmount_16.setString("10114578");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_16);
    ComplexEvents_NoComplexEvents_16.insert(ComplexOptPayoutAmount_16.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_16);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CollateralAssignment::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_26;
      FIX::ComplexEventEndDate ComplexEventEndDate_26(FIX::UTCTIMESTAMP(21, 21, 24, 12, 9, 2011));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_26);
      ComplexEventDates_NoComplexEventDates_26.insert(ComplexEventEndDate_26.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_26(FIX::UTCTIMESTAMP(13, 4, 2, 19, 3, 2010));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_26);
      ComplexEventDates_NoComplexEventDates_26.insert(ComplexEventStartDate_26.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_26);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralAssignment::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_49;
        FIX::ComplexEventEndTime ComplexEventEndTime_49(FIX::UTCTIMEONLY(10, 14, 47));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_49);
        ComplexEventTimes_NoComplexEventTimes_49.insert(ComplexEventEndTime_49.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_49(FIX::UTCTIMEONLY(10, 19, 33));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_49);
        ComplexEventTimes_NoComplexEventTimes_49.insert(ComplexEventStartTime_49.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_49);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::CollateralAssignment::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_50;
        FIX::ComplexEventEndTime ComplexEventEndTime_50(FIX::UTCTIMEONLY(2, 7, 30));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_50);
        ComplexEventTimes_NoComplexEventTimes_50.insert(ComplexEventEndTime_50.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_50(FIX::UTCTIMEONLY(5, 32, 24));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_50);
        ComplexEventTimes_NoComplexEventTimes_50.insert(ComplexEventStartTime_50.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_50);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::CollateralAssignment::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_51;
        FIX::ComplexEventEndTime ComplexEventEndTime_51(FIX::UTCTIMEONLY(21, 45, 32));
        noComplexEventTimes_0_0_2_2.set(ComplexEventEndTime_51);
        ComplexEventTimes_NoComplexEventTimes_51.insert(ComplexEventEndTime_51.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_51(FIX::UTCTIMEONLY(9, 41, 23));
        noComplexEventTimes_0_0_2_2.set(ComplexEventStartTime_51);
        ComplexEventTimes_NoComplexEventTimes_51.insert(ComplexEventStartTime_51.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_51);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::CollateralAssignment::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_16;
    FIX::EventDate EventDate_16("LOCALMKTDATE_667943198");
    noEvents_0_0.set(EventDate_16);
    EvntGrp_NoEvents_16.insert(EventDate_16.getString());
    FIX::EventPx EventPx_16;
    EventPx_16.setString("19050673");
    noEvents_0_0.set(EventPx_16);
    EvntGrp_NoEvents_16.insert(EventPx_16.getString());
    FIX::EventText EventText_16("STRING_152904626");
    noEvents_0_0.set(EventText_16);
    EvntGrp_NoEvents_16.insert(EventText_16.getString());
    FIX::EventTime EventTime_16(FIX::UTCTIMESTAMP(10, 53, 6, 20, 12, 2011));
    noEvents_0_0.set(EventTime_16);
    EvntGrp_NoEvents_16.insert(EventTime_16.getString());
    FIX::EventType EventType_16(10);
    noEvents_0_0.set(EventType_16);
    EvntGrp_NoEvents_16.insert(EventType_16.getString());
    all_values.push_back(EvntGrp_NoEvents_16);

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::CollateralAssignment::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_17;
    FIX::InstrumentPartyID InstrumentPartyID_17("STRING_1137211152");
    noInstrumentParties_0_0.set(InstrumentPartyID_17);
    InstrumentParties_NoInstrumentParties_17.insert(InstrumentPartyID_17.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_17('7');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_17);
    InstrumentParties_NoInstrumentParties_17.insert(InstrumentPartyIDSource_17.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_17(1450612057);
    noInstrumentParties_0_0.set(InstrumentPartyRole_17);
    InstrumentParties_NoInstrumentParties_17.insert(InstrumentPartyRole_17.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_17);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CollateralAssignment::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_32;
      FIX::InstrumentPartySubID InstrumentPartySubID_32("STRING_1905396141");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_32);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_32.insert(InstrumentPartySubID_32.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_32(10189979);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_32);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_32.insert(InstrumentPartySubIDType_32.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_32);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::CollateralAssignment::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_16;
    FIX::SecurityAltID SecurityAltID_16("STRING_156401899");
    noSecurityAltID_0_0.set(SecurityAltID_16);
    SecAltIDGrp_NoSecurityAltID_16.insert(SecurityAltID_16.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_16("STRING_1728709411");
    noSecurityAltID_0_0.set(SecurityAltIDSource_16);
    SecAltIDGrp_NoSecurityAltID_16.insert(SecurityAltIDSource_16.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_16);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::CollateralAssignment::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_17;
    FIX::SecurityAltID SecurityAltID_17("STRING_641111774");
    noSecurityAltID_0_1.set(SecurityAltID_17);
    SecAltIDGrp_NoSecurityAltID_17.insert(SecurityAltID_17.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_17("STRING_405428667");
    noSecurityAltID_0_1.set(SecurityAltIDSource_17);
    SecAltIDGrp_NoSecurityAltID_17.insert(SecurityAltIDSource_17.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_17);

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::CollateralAssignment::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_18;
    FIX::SecurityAltID SecurityAltID_18("STRING_461906168");
    noSecurityAltID_0_2.set(SecurityAltID_18);
    SecAltIDGrp_NoSecurityAltID_18.insert(SecurityAltID_18.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_18("STRING_220742211");
    noSecurityAltID_0_2.set(SecurityAltIDSource_18);
    SecAltIDGrp_NoSecurityAltID_18.insert(SecurityAltIDSource_18.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_18);

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_16;
  FIX::SecurityXML SecurityXML_17("XMLDATA_144106851");
  msg.set(SecurityXML_17);
  FIX::SecurityXMLLen SecurityXMLLen_8(385654509);
  msg.set(SecurityXMLLen_8);
  FIX::SecurityXMLSchema SecurityXMLSchema_8("STRING_1669576165");
  msg.set(SecurityXMLSchema_8);
  SecurityXML_16.insert(SecurityXMLSchema_8.getString());
  all_values.push_back(SecurityXML_16);

  // MiscFeesGrp
  // Group MiscFeesGrp.NoMiscFees
  {
    FIX50SP2::CollateralAssignment::NoMiscFees noMiscFees_0_0;
    // MiscFeesGrp.NoMiscFees
    multiset<string> MiscFeesGrp_NoMiscFees_14;
    FIX::MiscFeeAmt MiscFeeAmt_14;
    MiscFeeAmt_14.setString("13928708");
    noMiscFees_0_0.set(MiscFeeAmt_14);
    MiscFeesGrp_NoMiscFees_14.insert(MiscFeeAmt_14.getString());
    FIX::MiscFeeBasis MiscFeeBasis_14(1);
    noMiscFees_0_0.set(MiscFeeBasis_14);
    MiscFeesGrp_NoMiscFees_14.insert(MiscFeeBasis_14.getString());
    FIX::MiscFeeCurr MiscFeeCurr_14("GBP");
    noMiscFees_0_0.set(MiscFeeCurr_14);
    MiscFeesGrp_NoMiscFees_14.insert(MiscFeeCurr_14.getString());
    FIX::MiscFeeType MiscFeeType_14("STRING_3");
    noMiscFees_0_0.set(MiscFeeType_14);
    MiscFeesGrp_NoMiscFees_14.insert(MiscFeeType_14.getString());
    all_values.push_back(MiscFeesGrp_NoMiscFees_14);

    msg.addGroup(noMiscFees_0_0);
  }
  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::CollateralAssignment::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_19;
    FIX::PartyID PartyID_19("STRING_1895979780");
    noPartyIDs_0_0.set(PartyID_19);
    Parties_NoPartyIDs_19.insert(PartyID_19.getString());
    FIX::PartyIDSource PartyIDSource_19('9');
    noPartyIDs_0_0.set(PartyIDSource_19);
    Parties_NoPartyIDs_19.insert(PartyIDSource_19.getString());
    FIX::PartyRole PartyRole_19(63);
    noPartyIDs_0_0.set(PartyRole_19);
    Parties_NoPartyIDs_19.insert(PartyRole_19.getString());
    all_values.push_back(Parties_NoPartyIDs_19);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::CollateralAssignment::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_36;
      FIX::PartySubID PartySubID_36("STRING_1880426042");
      noPartySubIDs_0_1_0.set(PartySubID_36);
      PtysSubGrp_NoPartySubIDs_36.insert(PartySubID_36.getString());
      FIX::PartySubIDType PartySubIDType_36(23);
      noPartySubIDs_0_1_0.set(PartySubIDType_36);
      PtysSubGrp_NoPartySubIDs_36.insert(PartySubIDType_36.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_36);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::CollateralAssignment::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_37;
      FIX::PartySubID PartySubID_37("STRING_1409623062");
      noPartySubIDs_0_1_1.set(PartySubID_37);
      PtysSubGrp_NoPartySubIDs_37.insert(PartySubID_37.getString());
      FIX::PartySubIDType PartySubIDType_37(25);
      noPartySubIDs_0_1_1.set(PartySubIDType_37);
      PtysSubGrp_NoPartySubIDs_37.insert(PartySubIDType_37.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_37);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::CollateralAssignment::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_38;
      FIX::PartySubID PartySubID_38("STRING_1221518915");
      noPartySubIDs_0_1_2.set(PartySubID_38);
      PtysSubGrp_NoPartySubIDs_38.insert(PartySubID_38.getString());
      FIX::PartySubIDType PartySubIDType_38(15);
      noPartySubIDs_0_1_2.set(PartySubIDType_38);
      PtysSubGrp_NoPartySubIDs_38.insert(PartySubIDType_38.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_38);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::CollateralAssignment::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_20;
    FIX::PartyID PartyID_20("STRING_65350652");
    noPartyIDs_0_1.set(PartyID_20);
    Parties_NoPartyIDs_20.insert(PartyID_20.getString());
    FIX::PartyIDSource PartyIDSource_20('C');
    noPartyIDs_0_1.set(PartyIDSource_20);
    Parties_NoPartyIDs_20.insert(PartyIDSource_20.getString());
    FIX::PartyRole PartyRole_20(48);
    noPartyIDs_0_1.set(PartyRole_20);
    Parties_NoPartyIDs_20.insert(PartyRole_20.getString());
    all_values.push_back(Parties_NoPartyIDs_20);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::CollateralAssignment::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_39;
      FIX::PartySubID PartySubID_39("STRING_1120068248");
      noPartySubIDs_1_1_0.set(PartySubID_39);
      PtysSubGrp_NoPartySubIDs_39.insert(PartySubID_39.getString());
      FIX::PartySubIDType PartySubIDType_39(30);
      noPartySubIDs_1_1_0.set(PartySubIDType_39);
      PtysSubGrp_NoPartySubIDs_39.insert(PartySubIDType_39.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_39);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::CollateralAssignment::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_40;
      FIX::PartySubID PartySubID_40("STRING_1804250042");
      noPartySubIDs_1_1_1.set(PartySubID_40);
      PtysSubGrp_NoPartySubIDs_40.insert(PartySubID_40.getString());
      FIX::PartySubIDType PartySubIDType_40(21);
      noPartySubIDs_1_1_1.set(PartySubIDType_40);
      PtysSubGrp_NoPartySubIDs_40.insert(PartySubIDType_40.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_40);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  // SettlInstructionsData
  multiset<string> SettlInstructionsData_6;
  FIX::SettlDeliveryType SettlDeliveryType_6(0);
  msg.set(SettlDeliveryType_6);
  SettlInstructionsData_6.insert(SettlDeliveryType_6.getString());
  FIX::StandInstDbID StandInstDbID_6("STRING_118672562");
  msg.set(StandInstDbID_6);
  SettlInstructionsData_6.insert(StandInstDbID_6.getString());
  FIX::StandInstDbName StandInstDbName_6("STRING_1981922234");
  msg.set(StandInstDbName_6);
  SettlInstructionsData_6.insert(StandInstDbName_6.getString());
  FIX::StandInstDbType StandInstDbType_6(4);
  msg.set(StandInstDbType_6);
  SettlInstructionsData_6.insert(StandInstDbType_6.getString());
  all_values.push_back(SettlInstructionsData_6);

  // DlvyInstGrp
  // Group DlvyInstGrp.NoDlvyInst
  {
    FIX50SP2::CollateralAssignment::NoDlvyInst noDlvyInst_0_0;
    // DlvyInstGrp.NoDlvyInst
    multiset<string> DlvyInstGrp_NoDlvyInst_12;
    FIX::DlvyInstType DlvyInstType_12('S');
    noDlvyInst_0_0.set(DlvyInstType_12);
    DlvyInstGrp_NoDlvyInst_12.insert(DlvyInstType_12.getString());
    FIX::SettlInstSource SettlInstSource_12('1');
    noDlvyInst_0_0.set(SettlInstSource_12);
    DlvyInstGrp_NoDlvyInst_12.insert(SettlInstSource_12.getString());
    all_values.push_back(DlvyInstGrp_NoDlvyInst_12);

    // SettlParties
    // Group SettlParties.NoSettlPartyIDs
    {
      FIX50SP2::CollateralAssignment::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_1_0;
      // SettlParties.NoSettlPartyIDs
      multiset<string> SettlParties_NoSettlPartyIDs_26;
      FIX::SettlPartyID SettlPartyID_26("STRING_1228830555");
      noSettlPartyIDs_0_1_0.set(SettlPartyID_26);
      SettlParties_NoSettlPartyIDs_26.insert(SettlPartyID_26.getString());
      FIX::SettlPartyIDSource SettlPartyIDSource_26('9');
      noSettlPartyIDs_0_1_0.set(SettlPartyIDSource_26);
      SettlParties_NoSettlPartyIDs_26.insert(SettlPartyIDSource_26.getString());
      FIX::SettlPartyRole SettlPartyRole_26(900168867);
      noSettlPartyIDs_0_1_0.set(SettlPartyRole_26);
      SettlParties_NoSettlPartyIDs_26.insert(SettlPartyRole_26.getString());
      all_values.push_back(SettlParties_NoSettlPartyIDs_26);

      // SettlPtysSubGrp
      // Group SettlPtysSubGrp.NoSettlPartySubIDs
      {
        FIX50SP2::CollateralAssignment::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_2_0;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_55;
        FIX::SettlPartySubID SettlPartySubID_55("STRING_50984438");
        noSettlPartySubIDs_0_0_2_0.set(SettlPartySubID_55);
        SettlPtysSubGrp_NoSettlPartySubIDs_55.insert(SettlPartySubID_55.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_55(648665000);
        noSettlPartySubIDs_0_0_2_0.set(SettlPartySubIDType_55);
        SettlPtysSubGrp_NoSettlPartySubIDs_55.insert(SettlPartySubIDType_55.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_55);

        noSettlPartyIDs_0_1_0.addGroup(noSettlPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::CollateralAssignment::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_2_1;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_56;
        FIX::SettlPartySubID SettlPartySubID_56("STRING_829400181");
        noSettlPartySubIDs_0_0_2_1.set(SettlPartySubID_56);
        SettlPtysSubGrp_NoSettlPartySubIDs_56.insert(SettlPartySubID_56.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_56(1634159715);
        noSettlPartySubIDs_0_0_2_1.set(SettlPartySubIDType_56);
        SettlPtysSubGrp_NoSettlPartySubIDs_56.insert(SettlPartySubIDType_56.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_56);

        noSettlPartyIDs_0_1_0.addGroup(noSettlPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::CollateralAssignment::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_2_2;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_57;
        FIX::SettlPartySubID SettlPartySubID_57("STRING_676752913");
        noSettlPartySubIDs_0_0_2_2.set(SettlPartySubID_57);
        SettlPtysSubGrp_NoSettlPartySubIDs_57.insert(SettlPartySubID_57.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_57(562342576);
        noSettlPartySubIDs_0_0_2_2.set(SettlPartySubIDType_57);
        SettlPtysSubGrp_NoSettlPartySubIDs_57.insert(SettlPartySubIDType_57.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_57);

        noSettlPartyIDs_0_1_0.addGroup(noSettlPartySubIDs_0_0_2_2);
      }
      noDlvyInst_0_0.addGroup(noSettlPartyIDs_0_1_0);
    }
    msg.addGroup(noDlvyInst_0_0);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_3;
  FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_3("EUR");
  msg.set(BenchmarkCurveCurrency_3);
  SpreadOrBenchmarkCurveData_3.insert(BenchmarkCurveCurrency_3.getString());
  FIX::BenchmarkCurveName BenchmarkCurveName_3("STRING_OTHER");
  msg.set(BenchmarkCurveName_3);
  SpreadOrBenchmarkCurveData_3.insert(BenchmarkCurveName_3.getString());
  FIX::BenchmarkCurvePoint BenchmarkCurvePoint_3("STRING_792502745");
  msg.set(BenchmarkCurvePoint_3);
  SpreadOrBenchmarkCurveData_3.insert(BenchmarkCurvePoint_3.getString());
  FIX::BenchmarkPrice BenchmarkPrice_3;
  BenchmarkPrice_3.setString("20584055");
  msg.set(BenchmarkPrice_3);
  SpreadOrBenchmarkCurveData_3.insert(BenchmarkPrice_3.getString());
  FIX::BenchmarkPriceType BenchmarkPriceType_3(1389915472);
  msg.set(BenchmarkPriceType_3);
  SpreadOrBenchmarkCurveData_3.insert(BenchmarkPriceType_3.getString());
  FIX::BenchmarkSecurityID BenchmarkSecurityID_3("STRING_1631412863");
  msg.set(BenchmarkSecurityID_3);
  SpreadOrBenchmarkCurveData_3.insert(BenchmarkSecurityID_3.getString());
  FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_3("STRING_1788347685");
  msg.set(BenchmarkSecurityIDSource_3);
  SpreadOrBenchmarkCurveData_3.insert(BenchmarkSecurityIDSource_3.getString());
  FIX::Spread Spread_3;
  Spread_3.setString("14654561");
  msg.set(Spread_3);
  SpreadOrBenchmarkCurveData_3.insert(Spread_3.getString());
  all_values.push_back(SpreadOrBenchmarkCurveData_3);

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::CollateralAssignment::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_5;
    FIX::StipulationType StipulationType_5("STRING_CUSTOMDATE");
    noStipulations_0_0.set(StipulationType_5);
    Stipulations_NoStipulations_5.insert(StipulationType_5.getString());
    FIX::StipulationValue StipulationValue_5("STRING_1122222498");
    noStipulations_0_0.set(StipulationValue_5);
    Stipulations_NoStipulations_5.insert(StipulationValue_5.getString());
    all_values.push_back(Stipulations_NoStipulations_5);

    msg.addGroup(noStipulations_0_0);
  }
  {
    FIX50SP2::CollateralAssignment::NoStipulations noStipulations_0_1;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_6;
    FIX::StipulationType StipulationType_6("STRING_PSA");
    noStipulations_0_1.set(StipulationType_6);
    Stipulations_NoStipulations_6.insert(StipulationType_6.getString());
    FIX::StipulationValue StipulationValue_6("STRING_1966464354");
    noStipulations_0_1.set(StipulationValue_6);
    Stipulations_NoStipulations_6.insert(StipulationValue_6.getString());
    all_values.push_back(Stipulations_NoStipulations_6);

    msg.addGroup(noStipulations_0_1);
  }
  {
    FIX50SP2::CollateralAssignment::NoStipulations noStipulations_0_2;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_7;
    FIX::StipulationType StipulationType_7("STRING_MININCR");
    noStipulations_0_2.set(StipulationType_7);
    Stipulations_NoStipulations_7.insert(StipulationType_7.getString());
    FIX::StipulationValue StipulationValue_7("STRING_52132425");
    noStipulations_0_2.set(StipulationValue_7);
    Stipulations_NoStipulations_7.insert(StipulationValue_7.getString());
    all_values.push_back(Stipulations_NoStipulations_7);

    msg.addGroup(noStipulations_0_2);
  }
  // TrdCollGrp
  // Group TrdCollGrp.NoTrades
  {
    FIX50SP2::CollateralAssignment::NoTrades noTrades_0_0;
    // TrdCollGrp.NoTrades
    multiset<string> TrdCollGrp_NoTrades_0;
    FIX::SecondaryTradeReportID SecondaryTradeReportID_0("STRING_1745222132");
    noTrades_0_0.set(SecondaryTradeReportID_0);
    TrdCollGrp_NoTrades_0.insert(SecondaryTradeReportID_0.getString());
    FIX::TradeReportID TradeReportID_0("STRING_1556147176");
    noTrades_0_0.set(TradeReportID_0);
    TrdCollGrp_NoTrades_0.insert(TradeReportID_0.getString());
    all_values.push_back(TrdCollGrp_NoTrades_0);

    msg.addGroup(noTrades_0_0);
  }
  {
    FIX50SP2::CollateralAssignment::NoTrades noTrades_0_1;
    // TrdCollGrp.NoTrades
    multiset<string> TrdCollGrp_NoTrades_1;
    FIX::SecondaryTradeReportID SecondaryTradeReportID_1("STRING_1664608778");
    noTrades_0_1.set(SecondaryTradeReportID_1);
    TrdCollGrp_NoTrades_1.insert(SecondaryTradeReportID_1.getString());
    FIX::TradeReportID TradeReportID_1("STRING_1494936429");
    noTrades_0_1.set(TradeReportID_1);
    TrdCollGrp_NoTrades_1.insert(TradeReportID_1.getString());
    all_values.push_back(TrdCollGrp_NoTrades_1);

    msg.addGroup(noTrades_0_1);
  }
  {
    FIX50SP2::CollateralAssignment::NoTrades noTrades_0_2;
    // TrdCollGrp.NoTrades
    multiset<string> TrdCollGrp_NoTrades_2;
    FIX::SecondaryTradeReportID SecondaryTradeReportID_2("STRING_637494084");
    noTrades_0_2.set(SecondaryTradeReportID_2);
    TrdCollGrp_NoTrades_2.insert(SecondaryTradeReportID_2.getString());
    FIX::TradeReportID TradeReportID_2("STRING_421202266");
    noTrades_0_2.set(TradeReportID_2);
    TrdCollGrp_NoTrades_2.insert(TradeReportID_2.getString());
    all_values.push_back(TrdCollGrp_NoTrades_2);

    msg.addGroup(noTrades_0_2);
  }
  // TrdRegTimestamps
  // Group TrdRegTimestamps.NoTrdRegTimestamps
  {
    FIX50SP2::CollateralAssignment::NoTrdRegTimestamps noTrdRegTimestamps_0_0;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_0;
    FIX::DeskOrderHandlingInst DeskOrderHandlingInst_0("MULTIPLESTRINGVALUE_MQT");
    noTrdRegTimestamps_0_0.set(DeskOrderHandlingInst_0);
    TrdRegTimestamps_NoTrdRegTimestamps_0.insert(DeskOrderHandlingInst_0.getString());
    FIX::DeskType DeskType_0("STRING_A");
    noTrdRegTimestamps_0_0.set(DeskType_0);
    TrdRegTimestamps_NoTrdRegTimestamps_0.insert(DeskType_0.getString());
    FIX::DeskTypeSource DeskTypeSource_0(1);
    noTrdRegTimestamps_0_0.set(DeskTypeSource_0);
    TrdRegTimestamps_NoTrdRegTimestamps_0.insert(DeskTypeSource_0.getString());
    FIX::TrdRegTimestamp TrdRegTimestamp_0(FIX::UTCTIMESTAMP(4, 2, 19, 22, 2, 2001));
    noTrdRegTimestamps_0_0.set(TrdRegTimestamp_0);
    TrdRegTimestamps_NoTrdRegTimestamps_0.insert(TrdRegTimestamp_0.getString());
    FIX::TrdRegTimestampOrigin TrdRegTimestampOrigin_0("STRING_322349347");
    noTrdRegTimestamps_0_0.set(TrdRegTimestampOrigin_0);
    TrdRegTimestamps_NoTrdRegTimestamps_0.insert(TrdRegTimestampOrigin_0.getString());
    FIX::TrdRegTimestampType TrdRegTimestampType_0(1);
    noTrdRegTimestamps_0_0.set(TrdRegTimestampType_0);
    TrdRegTimestamps_NoTrdRegTimestamps_0.insert(TrdRegTimestampType_0.getString());
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_0);

    msg.addGroup(noTrdRegTimestamps_0_0);
  }
  {
    FIX50SP2::CollateralAssignment::NoTrdRegTimestamps noTrdRegTimestamps_0_1;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_1;
    FIX::DeskOrderHandlingInst DeskOrderHandlingInst_1("MULTIPLESTRINGVALUE_WRK");
    noTrdRegTimestamps_0_1.set(DeskOrderHandlingInst_1);
    TrdRegTimestamps_NoTrdRegTimestamps_1.insert(DeskOrderHandlingInst_1.getString());
    FIX::DeskType DeskType_1("STRING_IS");
    noTrdRegTimestamps_0_1.set(DeskType_1);
    TrdRegTimestamps_NoTrdRegTimestamps_1.insert(DeskType_1.getString());
    FIX::DeskTypeSource DeskTypeSource_1(1);
    noTrdRegTimestamps_0_1.set(DeskTypeSource_1);
    TrdRegTimestamps_NoTrdRegTimestamps_1.insert(DeskTypeSource_1.getString());
    FIX::TrdRegTimestamp TrdRegTimestamp_1(FIX::UTCTIMESTAMP(9, 0, 56, 4, 12, 2015));
    noTrdRegTimestamps_0_1.set(TrdRegTimestamp_1);
    TrdRegTimestamps_NoTrdRegTimestamps_1.insert(TrdRegTimestamp_1.getString());
    FIX::TrdRegTimestampOrigin TrdRegTimestampOrigin_1("STRING_680102289");
    noTrdRegTimestamps_0_1.set(TrdRegTimestampOrigin_1);
    TrdRegTimestamps_NoTrdRegTimestamps_1.insert(TrdRegTimestampOrigin_1.getString());
    FIX::TrdRegTimestampType TrdRegTimestampType_1(4);
    noTrdRegTimestamps_0_1.set(TrdRegTimestampType_1);
    TrdRegTimestamps_NoTrdRegTimestamps_1.insert(TrdRegTimestampType_1.getString());
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_1);

    msg.addGroup(noTrdRegTimestamps_0_1);
  }
  {
    FIX50SP2::CollateralAssignment::NoTrdRegTimestamps noTrdRegTimestamps_0_2;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_2;
    FIX::DeskOrderHandlingInst DeskOrderHandlingInst_2("MULTIPLESTRINGVALUE_LOC");
    noTrdRegTimestamps_0_2.set(DeskOrderHandlingInst_2);
    TrdRegTimestamps_NoTrdRegTimestamps_2.insert(DeskOrderHandlingInst_2.getString());
    FIX::DeskType DeskType_2("STRING_PT");
    noTrdRegTimestamps_0_2.set(DeskType_2);
    TrdRegTimestamps_NoTrdRegTimestamps_2.insert(DeskType_2.getString());
    FIX::DeskTypeSource DeskTypeSource_2(1);
    noTrdRegTimestamps_0_2.set(DeskTypeSource_2);
    TrdRegTimestamps_NoTrdRegTimestamps_2.insert(DeskTypeSource_2.getString());
    FIX::TrdRegTimestamp TrdRegTimestamp_2(FIX::UTCTIMESTAMP(5, 29, 4, 27, 7, 2011));
    noTrdRegTimestamps_0_2.set(TrdRegTimestamp_2);
    TrdRegTimestamps_NoTrdRegTimestamps_2.insert(TrdRegTimestamp_2.getString());
    FIX::TrdRegTimestampOrigin TrdRegTimestampOrigin_2("STRING_748782927");
    noTrdRegTimestamps_0_2.set(TrdRegTimestampOrigin_2);
    TrdRegTimestamps_NoTrdRegTimestamps_2.insert(TrdRegTimestampOrigin_2.getString());
    FIX::TrdRegTimestampType TrdRegTimestampType_2(2);
    noTrdRegTimestamps_0_2.set(TrdRegTimestampType_2);
    TrdRegTimestamps_NoTrdRegTimestamps_2.insert(TrdRegTimestampType_2.getString());
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_2);

    msg.addGroup(noTrdRegTimestamps_0_2);
  }
  // UndInstrmtCollGrp
  // Group UndInstrmtCollGrp.NoUnderlyings
  {
    FIX50SP2::CollateralAssignment::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtCollGrp.NoUnderlyings
    multiset<string> UndInstrmtCollGrp_NoUnderlyings_0;
    FIX::CollAction CollAction_0(1);
    noUnderlyings_0_0.set(CollAction_0);
    UndInstrmtCollGrp_NoUnderlyings_0.insert(CollAction_0.getString());
    all_values.push_back(UndInstrmtCollGrp_NoUnderlyings_0);

    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_12;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_12("DATA_563990308");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_12);
    UnderlyingInstrument_12.insert(EncodedUnderlyingIssuer_12.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_12(2115494556);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_12);
    UnderlyingInstrument_12.insert(EncodedUnderlyingIssuerLen_12.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_12("DATA_1902472457");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_12);
    UnderlyingInstrument_12.insert(EncodedUnderlyingSecurityDesc_12.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_12(886339655);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_12);
    UnderlyingInstrument_12.insert(EncodedUnderlyingSecurityDescLen_12.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_12;
    UnderlyingAdjustedQuantity_12.setString("13908647");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_12);
    UnderlyingInstrument_12.insert(UnderlyingAdjustedQuantity_12.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_12;
    UnderlyingAllocationPercent_12.setString("96.320000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_12);
    UnderlyingInstrument_12.insert(UnderlyingAllocationPercent_12.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_12;
    UnderlyingAttachmentPoint_12.setString("82.170000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_12);
    UnderlyingInstrument_12.insert(UnderlyingAttachmentPoint_12.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_12("STRING_307098946");
    noUnderlyings_0_0.set(UnderlyingCFICode_12);
    UnderlyingInstrument_12.insert(UnderlyingCFICode_12.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_12("STRING_36079263");
    noUnderlyings_0_0.set(UnderlyingCPProgram_12);
    UnderlyingInstrument_12.insert(UnderlyingCPProgram_12.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_12("STRING_1102894242");
    noUnderlyings_0_0.set(UnderlyingCPRegType_12);
    UnderlyingInstrument_12.insert(UnderlyingCPRegType_12.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_12;
    UnderlyingCapValue_12.setString("8980248");
    noUnderlyings_0_0.set(UnderlyingCapValue_12);
    UnderlyingInstrument_12.insert(UnderlyingCapValue_12.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_12;
    UnderlyingCashAmount_12.setString("20315750");
    noUnderlyings_0_0.set(UnderlyingCashAmount_12);
    UnderlyingInstrument_12.insert(UnderlyingCashAmount_12.getString());
    FIX::UnderlyingCashType UnderlyingCashType_12("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_12);
    UnderlyingInstrument_12.insert(UnderlyingCashType_12.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_12;
    UnderlyingContractMultiplier_12.setString("13079314");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_12);
    UnderlyingInstrument_12.insert(UnderlyingContractMultiplier_12.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_12(972998580);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_12);
    UnderlyingInstrument_12.insert(UnderlyingContractMultiplierUnit_12.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_12("COUNTRY_263482747");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_12);
    UnderlyingInstrument_12.insert(UnderlyingCountryOfIssue_12.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_12("LOCALMKTDATE_1972698287");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_12);
    UnderlyingInstrument_12.insert(UnderlyingCouponPaymentDate_12.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_12;
    UnderlyingCouponRate_12.setString("42.540000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_12);
    UnderlyingInstrument_12.insert(UnderlyingCouponRate_12.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_12("STRING_352248565");
    noUnderlyings_0_0.set(UnderlyingCreditRating_12);
    UnderlyingInstrument_12.insert(UnderlyingCreditRating_12.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_12("CHF");
    noUnderlyings_0_0.set(UnderlyingCurrency_12);
    UnderlyingInstrument_12.insert(UnderlyingCurrency_12.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_12;
    UnderlyingCurrentValue_12.setString("10785084");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_12);
    UnderlyingInstrument_12.insert(UnderlyingCurrentValue_12.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_12;
    UnderlyingDetachmentPoint_12.setString("8.320000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_12);
    UnderlyingInstrument_12.insert(UnderlyingDetachmentPoint_12.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_12;
    UnderlyingDirtyPrice_12.setString("19754628");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_12);
    UnderlyingInstrument_12.insert(UnderlyingDirtyPrice_12.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_12;
    UnderlyingEndPrice_12.setString("14013297");
    noUnderlyings_0_0.set(UnderlyingEndPrice_12);
    UnderlyingInstrument_12.insert(UnderlyingEndPrice_12.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_12;
    UnderlyingEndValue_12.setString("16854817");
    noUnderlyings_0_0.set(UnderlyingEndValue_12);
    UnderlyingInstrument_12.insert(UnderlyingEndValue_12.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_12(1005985918);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_12);
    UnderlyingInstrument_12.insert(UnderlyingExerciseStyle_12.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_12;
    UnderlyingFXRate_12.setString("26290");
    noUnderlyings_0_0.set(UnderlyingFXRate_12);
    UnderlyingInstrument_12.insert(UnderlyingFXRate_12.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_12('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_12);
    UnderlyingInstrument_12.insert(UnderlyingFXRateCalc_12.getString());
    FIX::UnderlyingFactor UnderlyingFactor_12;
    UnderlyingFactor_12.setString("16095485");
    noUnderlyings_0_0.set(UnderlyingFactor_12);
    UnderlyingInstrument_12.insert(UnderlyingFactor_12.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_12(1739716175);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_12);
    UnderlyingInstrument_12.insert(UnderlyingFlowScheduleType_12.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_12("STRING_1136132132");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_12);
    UnderlyingInstrument_12.insert(UnderlyingInstrRegistry_12.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_12("LOCALMKTDATE_1577559493");
    noUnderlyings_0_0.set(UnderlyingIssueDate_12);
    UnderlyingInstrument_12.insert(UnderlyingIssueDate_12.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_12("STRING_1494704985");
    noUnderlyings_0_0.set(UnderlyingIssuer_12);
    UnderlyingInstrument_12.insert(UnderlyingIssuer_12.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_12("STRING_2022471787");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_12);
    UnderlyingInstrument_12.insert(UnderlyingLocaleOfIssue_12.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_12("LOCALMKTDATE_820940577");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_12);
    UnderlyingInstrument_12.insert(UnderlyingMaturityDate_12.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_12("MONTHYEAR_657510969");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_12);
    UnderlyingInstrument_12.insert(UnderlyingMaturityMonthYear_12.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_12("TZTIMEONLY_567606356");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_12);
    UnderlyingInstrument_12.insert(UnderlyingMaturityTime_12.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_12;
    UnderlyingNotionalPercentageOutstanding_12.setString("95.240000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_12);
    UnderlyingInstrument_12.insert(UnderlyingNotionalPercentageOutstanding_12.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_12('6');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_12);
    UnderlyingInstrument_12.insert(UnderlyingOptAttribute_12.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_12;
    UnderlyingOriginalNotionalPercentageOutstanding_12.setString("5.980000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_12);
    UnderlyingInstrument_12.insert(UnderlyingOriginalNotionalPercentageOutstanding_12.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_12("STRING_2026064371");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_12);
    UnderlyingInstrument_12.insert(UnderlyingPriceUnitOfMeasure_12.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_12;
    UnderlyingPriceUnitOfMeasureQty_12.setString("5776816");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_12);
    UnderlyingInstrument_12.insert(UnderlyingPriceUnitOfMeasureQty_12.getString());
    FIX::UnderlyingProduct UnderlyingProduct_12(1253881057);
    noUnderlyings_0_0.set(UnderlyingProduct_12);
    UnderlyingInstrument_12.insert(UnderlyingProduct_12.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_12(1186512177);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_12);
    UnderlyingInstrument_12.insert(UnderlyingPutOrCall_12.getString());
    FIX::UnderlyingPx UnderlyingPx_12;
    UnderlyingPx_12.setString("15506802");
    noUnderlyings_0_0.set(UnderlyingPx_12);
    UnderlyingInstrument_12.insert(UnderlyingPx_12.getString());
    FIX::UnderlyingQty UnderlyingQty_12;
    UnderlyingQty_12.setString("15173638");
    noUnderlyings_0_0.set(UnderlyingQty_12);
    UnderlyingInstrument_12.insert(UnderlyingQty_12.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_12("LOCALMKTDATE_1011726816");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_12);
    UnderlyingInstrument_12.insert(UnderlyingRedemptionDate_12.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_12("STRING_1062840810");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_12);
    UnderlyingInstrument_12.insert(UnderlyingRepoCollateralSecurityType_12.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_12;
    UnderlyingRepurchaseRate_12.setString("23.690000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_12);
    UnderlyingInstrument_12.insert(UnderlyingRepurchaseRate_12.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_12(1018833418);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_12);
    UnderlyingInstrument_12.insert(UnderlyingRepurchaseTerm_12.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_12("STRING_609099871");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_12);
    UnderlyingInstrument_12.insert(UnderlyingRestructuringType_12.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_12("STRING_800637188");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_12);
    UnderlyingInstrument_12.insert(UnderlyingSecurityDesc_12.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_12("EXCHANGE_1629034250");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_12);
    UnderlyingInstrument_12.insert(UnderlyingSecurityExchange_12.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_12("STRING_437079036");
    noUnderlyings_0_0.set(UnderlyingSecurityID_12);
    UnderlyingInstrument_12.insert(UnderlyingSecurityID_12.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_12("STRING_54483330");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_12);
    UnderlyingInstrument_12.insert(UnderlyingSecurityIDSource_12.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_12("STRING_1167032368");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_12);
    UnderlyingInstrument_12.insert(UnderlyingSecuritySubType_12.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_12("STRING_1443064954");
    noUnderlyings_0_0.set(UnderlyingSecurityType_12);
    UnderlyingInstrument_12.insert(UnderlyingSecurityType_12.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_12("STRING_57112399");
    noUnderlyings_0_0.set(UnderlyingSeniority_12);
    UnderlyingInstrument_12.insert(UnderlyingSeniority_12.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_12("STRING_1739174192");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_12);
    UnderlyingInstrument_12.insert(UnderlyingSettlMethod_12.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_12(5);
    noUnderlyings_0_0.set(UnderlyingSettlementType_12);
    UnderlyingInstrument_12.insert(UnderlyingSettlementType_12.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_12;
    UnderlyingStartValue_12.setString("17968285");
    noUnderlyings_0_0.set(UnderlyingStartValue_12);
    UnderlyingInstrument_12.insert(UnderlyingStartValue_12.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_12("STRING_727822676");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_12);
    UnderlyingInstrument_12.insert(UnderlyingStateOrProvinceOfIssue_12.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_12("EUR");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_12);
    UnderlyingInstrument_12.insert(UnderlyingStrikeCurrency_12.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_12;
    UnderlyingStrikePrice_12.setString("6028108");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_12);
    UnderlyingInstrument_12.insert(UnderlyingStrikePrice_12.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_12("STRING_1156146314");
    noUnderlyings_0_0.set(UnderlyingSymbol_12);
    UnderlyingInstrument_12.insert(UnderlyingSymbol_12.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_12("STRING_1801560881");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_12);
    UnderlyingInstrument_12.insert(UnderlyingSymbolSfx_12.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_12("STRING_1170417171");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_12);
    UnderlyingInstrument_12.insert(UnderlyingTimeUnit_12.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_12("STRING_136702190");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_12);
    UnderlyingInstrument_12.insert(UnderlyingUnitOfMeasure_12.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_12;
    UnderlyingUnitOfMeasureQty_12.setString("3476674");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_12);
    UnderlyingInstrument_12.insert(UnderlyingUnitOfMeasureQty_12.getString());
    all_values.push_back(UnderlyingInstrument_12);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::CollateralAssignment::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_24;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_24("STRING_15282913");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_24);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_24.insert(UnderlyingSecurityAltID_24.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_24("STRING_925349089");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_24);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_24.insert(UnderlyingSecurityAltIDSource_24.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_24);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::CollateralAssignment::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_25;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_25("STRING_1947315179");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_25);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_25.insert(UnderlyingSecurityAltID_25.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_25("STRING_1201795090");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_25);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_25.insert(UnderlyingSecurityAltIDSource_25.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_25);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::CollateralAssignment::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_23;
      FIX::UnderlyingStipType UnderlyingStipType_23("STRING_1317195335");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_23);
      UnderlyingStipulations_NoUnderlyingStips_23.insert(UnderlyingStipType_23.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_23("STRING_66038258");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_23);
      UnderlyingStipulations_NoUnderlyingStips_23.insert(UnderlyingStipValue_23.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_23);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::CollateralAssignment::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_24;
      FIX::UnderlyingStipType UnderlyingStipType_24("STRING_1391386456");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_24);
      UnderlyingStipulations_NoUnderlyingStips_24.insert(UnderlyingStipType_24.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_24("STRING_1039324057");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_24);
      UnderlyingStipulations_NoUnderlyingStips_24.insert(UnderlyingStipValue_24.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_24);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::CollateralAssignment::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_24;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_24("STRING_2000486328");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_24);
      UndlyInstrumentParties_NoUndlyInstrumentParties_24.insert(UnderlyingInstrumentPartyID_24.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_24('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_24);
      UndlyInstrumentParties_NoUndlyInstrumentParties_24.insert(UnderlyingInstrumentPartyIDSource_24.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_24(566422279);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_24);
      UndlyInstrumentParties_NoUndlyInstrumentParties_24.insert(UnderlyingInstrumentPartyRole_24.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_24);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralAssignment::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_43;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_43("STRING_1894444575");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_43);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_43.insert(UnderlyingInstrumentPartySubID_43.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_43(1733454647);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_43);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_43.insert(UnderlyingInstrumentPartySubIDType_43.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_43);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::CollateralAssignment::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_44;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_44("STRING_1733146671");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_44);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_44.insert(UnderlyingInstrumentPartySubID_44.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_44(1951556974);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_44);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_44.insert(UnderlyingInstrumentPartySubIDType_44.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_44);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::CollateralAssignment::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtCollGrp.NoUnderlyings
    multiset<string> UndInstrmtCollGrp_NoUnderlyings_1;
    FIX::CollAction CollAction_1(0);
    noUnderlyings_0_1.set(CollAction_1);
    UndInstrmtCollGrp_NoUnderlyings_1.insert(CollAction_1.getString());
    all_values.push_back(UndInstrmtCollGrp_NoUnderlyings_1);

    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_13;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_13("DATA_490792914");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_13);
    UnderlyingInstrument_13.insert(EncodedUnderlyingIssuer_13.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_13(1600901900);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_13);
    UnderlyingInstrument_13.insert(EncodedUnderlyingIssuerLen_13.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_13("DATA_2052967868");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_13);
    UnderlyingInstrument_13.insert(EncodedUnderlyingSecurityDesc_13.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_13(825998651);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_13);
    UnderlyingInstrument_13.insert(EncodedUnderlyingSecurityDescLen_13.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_13;
    UnderlyingAdjustedQuantity_13.setString("5974681");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_13);
    UnderlyingInstrument_13.insert(UnderlyingAdjustedQuantity_13.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_13;
    UnderlyingAllocationPercent_13.setString("50.360000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_13);
    UnderlyingInstrument_13.insert(UnderlyingAllocationPercent_13.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_13;
    UnderlyingAttachmentPoint_13.setString("49.650000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_13);
    UnderlyingInstrument_13.insert(UnderlyingAttachmentPoint_13.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_13("STRING_251545397");
    noUnderlyings_0_1.set(UnderlyingCFICode_13);
    UnderlyingInstrument_13.insert(UnderlyingCFICode_13.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_13("STRING_1678712207");
    noUnderlyings_0_1.set(UnderlyingCPProgram_13);
    UnderlyingInstrument_13.insert(UnderlyingCPProgram_13.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_13("STRING_2118847155");
    noUnderlyings_0_1.set(UnderlyingCPRegType_13);
    UnderlyingInstrument_13.insert(UnderlyingCPRegType_13.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_13;
    UnderlyingCapValue_13.setString("5992128");
    noUnderlyings_0_1.set(UnderlyingCapValue_13);
    UnderlyingInstrument_13.insert(UnderlyingCapValue_13.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_13;
    UnderlyingCashAmount_13.setString("2246626");
    noUnderlyings_0_1.set(UnderlyingCashAmount_13);
    UnderlyingInstrument_13.insert(UnderlyingCashAmount_13.getString());
    FIX::UnderlyingCashType UnderlyingCashType_13("STRING_FIXED");
    noUnderlyings_0_1.set(UnderlyingCashType_13);
    UnderlyingInstrument_13.insert(UnderlyingCashType_13.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_13;
    UnderlyingContractMultiplier_13.setString("15245619");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_13);
    UnderlyingInstrument_13.insert(UnderlyingContractMultiplier_13.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_13(24494212);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_13);
    UnderlyingInstrument_13.insert(UnderlyingContractMultiplierUnit_13.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_13("COUNTRY_1188441510");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_13);
    UnderlyingInstrument_13.insert(UnderlyingCountryOfIssue_13.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_13("LOCALMKTDATE_1853107598");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_13);
    UnderlyingInstrument_13.insert(UnderlyingCouponPaymentDate_13.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_13;
    UnderlyingCouponRate_13.setString("95.480000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_13);
    UnderlyingInstrument_13.insert(UnderlyingCouponRate_13.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_13("STRING_1254479768");
    noUnderlyings_0_1.set(UnderlyingCreditRating_13);
    UnderlyingInstrument_13.insert(UnderlyingCreditRating_13.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_13("CHF");
    noUnderlyings_0_1.set(UnderlyingCurrency_13);
    UnderlyingInstrument_13.insert(UnderlyingCurrency_13.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_13;
    UnderlyingCurrentValue_13.setString("1918677");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_13);
    UnderlyingInstrument_13.insert(UnderlyingCurrentValue_13.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_13;
    UnderlyingDetachmentPoint_13.setString("30.860000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_13);
    UnderlyingInstrument_13.insert(UnderlyingDetachmentPoint_13.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_13;
    UnderlyingDirtyPrice_13.setString("20734912");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_13);
    UnderlyingInstrument_13.insert(UnderlyingDirtyPrice_13.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_13;
    UnderlyingEndPrice_13.setString("7582900");
    noUnderlyings_0_1.set(UnderlyingEndPrice_13);
    UnderlyingInstrument_13.insert(UnderlyingEndPrice_13.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_13;
    UnderlyingEndValue_13.setString("12400948");
    noUnderlyings_0_1.set(UnderlyingEndValue_13);
    UnderlyingInstrument_13.insert(UnderlyingEndValue_13.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_13(1820452129);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_13);
    UnderlyingInstrument_13.insert(UnderlyingExerciseStyle_13.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_13;
    UnderlyingFXRate_13.setString("3442610");
    noUnderlyings_0_1.set(UnderlyingFXRate_13);
    UnderlyingInstrument_13.insert(UnderlyingFXRate_13.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_13('D');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_13);
    UnderlyingInstrument_13.insert(UnderlyingFXRateCalc_13.getString());
    FIX::UnderlyingFactor UnderlyingFactor_13;
    UnderlyingFactor_13.setString("16245254");
    noUnderlyings_0_1.set(UnderlyingFactor_13);
    UnderlyingInstrument_13.insert(UnderlyingFactor_13.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_13(1669406267);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_13);
    UnderlyingInstrument_13.insert(UnderlyingFlowScheduleType_13.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_13("STRING_1316550740");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_13);
    UnderlyingInstrument_13.insert(UnderlyingInstrRegistry_13.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_13("LOCALMKTDATE_1077943707");
    noUnderlyings_0_1.set(UnderlyingIssueDate_13);
    UnderlyingInstrument_13.insert(UnderlyingIssueDate_13.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_13("STRING_1574890487");
    noUnderlyings_0_1.set(UnderlyingIssuer_13);
    UnderlyingInstrument_13.insert(UnderlyingIssuer_13.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_13("STRING_2142549391");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_13);
    UnderlyingInstrument_13.insert(UnderlyingLocaleOfIssue_13.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_13("LOCALMKTDATE_1675411871");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_13);
    UnderlyingInstrument_13.insert(UnderlyingMaturityDate_13.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_13("MONTHYEAR_2083185523");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_13);
    UnderlyingInstrument_13.insert(UnderlyingMaturityMonthYear_13.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_13("TZTIMEONLY_1977210708");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_13);
    UnderlyingInstrument_13.insert(UnderlyingMaturityTime_13.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_13;
    UnderlyingNotionalPercentageOutstanding_13.setString("72.680000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_13);
    UnderlyingInstrument_13.insert(UnderlyingNotionalPercentageOutstanding_13.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_13('1');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_13);
    UnderlyingInstrument_13.insert(UnderlyingOptAttribute_13.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_13;
    UnderlyingOriginalNotionalPercentageOutstanding_13.setString("42.150000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_13);
    UnderlyingInstrument_13.insert(UnderlyingOriginalNotionalPercentageOutstanding_13.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_13("STRING_378686483");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_13);
    UnderlyingInstrument_13.insert(UnderlyingPriceUnitOfMeasure_13.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_13;
    UnderlyingPriceUnitOfMeasureQty_13.setString("18390767");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_13);
    UnderlyingInstrument_13.insert(UnderlyingPriceUnitOfMeasureQty_13.getString());
    FIX::UnderlyingProduct UnderlyingProduct_13(1935220635);
    noUnderlyings_0_1.set(UnderlyingProduct_13);
    UnderlyingInstrument_13.insert(UnderlyingProduct_13.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_13(1903248435);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_13);
    UnderlyingInstrument_13.insert(UnderlyingPutOrCall_13.getString());
    FIX::UnderlyingPx UnderlyingPx_13;
    UnderlyingPx_13.setString("18635709");
    noUnderlyings_0_1.set(UnderlyingPx_13);
    UnderlyingInstrument_13.insert(UnderlyingPx_13.getString());
    FIX::UnderlyingQty UnderlyingQty_13;
    UnderlyingQty_13.setString("9761784");
    noUnderlyings_0_1.set(UnderlyingQty_13);
    UnderlyingInstrument_13.insert(UnderlyingQty_13.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_13("LOCALMKTDATE_1608872385");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_13);
    UnderlyingInstrument_13.insert(UnderlyingRedemptionDate_13.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_13("STRING_1057776877");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_13);
    UnderlyingInstrument_13.insert(UnderlyingRepoCollateralSecurityType_13.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_13;
    UnderlyingRepurchaseRate_13.setString("46.170000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_13);
    UnderlyingInstrument_13.insert(UnderlyingRepurchaseRate_13.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_13(558399143);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_13);
    UnderlyingInstrument_13.insert(UnderlyingRepurchaseTerm_13.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_13("STRING_1291306834");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_13);
    UnderlyingInstrument_13.insert(UnderlyingRestructuringType_13.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_13("STRING_275042414");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_13);
    UnderlyingInstrument_13.insert(UnderlyingSecurityDesc_13.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_13("EXCHANGE_1508412230");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_13);
    UnderlyingInstrument_13.insert(UnderlyingSecurityExchange_13.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_13("STRING_1217314388");
    noUnderlyings_0_1.set(UnderlyingSecurityID_13);
    UnderlyingInstrument_13.insert(UnderlyingSecurityID_13.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_13("STRING_1033332489");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_13);
    UnderlyingInstrument_13.insert(UnderlyingSecurityIDSource_13.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_13("STRING_601023385");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_13);
    UnderlyingInstrument_13.insert(UnderlyingSecuritySubType_13.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_13("STRING_890282869");
    noUnderlyings_0_1.set(UnderlyingSecurityType_13);
    UnderlyingInstrument_13.insert(UnderlyingSecurityType_13.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_13("STRING_1377593564");
    noUnderlyings_0_1.set(UnderlyingSeniority_13);
    UnderlyingInstrument_13.insert(UnderlyingSeniority_13.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_13("STRING_1426781211");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_13);
    UnderlyingInstrument_13.insert(UnderlyingSettlMethod_13.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_13(5);
    noUnderlyings_0_1.set(UnderlyingSettlementType_13);
    UnderlyingInstrument_13.insert(UnderlyingSettlementType_13.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_13;
    UnderlyingStartValue_13.setString("8995161");
    noUnderlyings_0_1.set(UnderlyingStartValue_13);
    UnderlyingInstrument_13.insert(UnderlyingStartValue_13.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_13("STRING_595848303");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_13);
    UnderlyingInstrument_13.insert(UnderlyingStateOrProvinceOfIssue_13.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_13("CHF");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_13);
    UnderlyingInstrument_13.insert(UnderlyingStrikeCurrency_13.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_13;
    UnderlyingStrikePrice_13.setString("5909140");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_13);
    UnderlyingInstrument_13.insert(UnderlyingStrikePrice_13.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_13("STRING_973196607");
    noUnderlyings_0_1.set(UnderlyingSymbol_13);
    UnderlyingInstrument_13.insert(UnderlyingSymbol_13.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_13("STRING_262624898");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_13);
    UnderlyingInstrument_13.insert(UnderlyingSymbolSfx_13.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_13("STRING_420641107");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_13);
    UnderlyingInstrument_13.insert(UnderlyingTimeUnit_13.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_13("STRING_752670227");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_13);
    UnderlyingInstrument_13.insert(UnderlyingUnitOfMeasure_13.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_13;
    UnderlyingUnitOfMeasureQty_13.setString("18770389");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_13);
    UnderlyingInstrument_13.insert(UnderlyingUnitOfMeasureQty_13.getString());
    all_values.push_back(UnderlyingInstrument_13);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::CollateralAssignment::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_26;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_26("STRING_1131356710");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_26);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_26.insert(UnderlyingSecurityAltID_26.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_26("STRING_1568632098");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_26);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_26.insert(UnderlyingSecurityAltIDSource_26.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_26);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::CollateralAssignment::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_27;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_27("STRING_9468662");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_27);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_27.insert(UnderlyingSecurityAltID_27.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_27("STRING_887121497");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_27);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_27.insert(UnderlyingSecurityAltIDSource_27.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_27);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::CollateralAssignment::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_25;
      FIX::UnderlyingStipType UnderlyingStipType_25("STRING_985647160");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_25);
      UnderlyingStipulations_NoUnderlyingStips_25.insert(UnderlyingStipType_25.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_25("STRING_348510234");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_25);
      UnderlyingStipulations_NoUnderlyingStips_25.insert(UnderlyingStipValue_25.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_25);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::CollateralAssignment::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_25;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_25("STRING_1068821777");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_25);
      UndlyInstrumentParties_NoUndlyInstrumentParties_25.insert(UnderlyingInstrumentPartyID_25.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_25('9');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_25);
      UndlyInstrumentParties_NoUndlyInstrumentParties_25.insert(UnderlyingInstrumentPartyIDSource_25.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_25(1486319490);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_25);
      UndlyInstrumentParties_NoUndlyInstrumentParties_25.insert(UnderlyingInstrumentPartyRole_25.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_25);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralAssignment::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_45;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_45("STRING_267837960");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_45);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_45.insert(UnderlyingInstrumentPartySubID_45.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_45(556150230);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_45);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_45.insert(UnderlyingInstrumentPartySubIDType_45.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_45);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::CollateralAssignment::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_46;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_46("STRING_229713033");
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubID_46);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_46.insert(UnderlyingInstrumentPartySubID_46.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_46(868861345);
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubIDType_46);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_46.insert(UnderlyingInstrumentPartySubIDType_46.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_46);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::CollateralAssignment::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_26;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_26("STRING_1446433099");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_26);
      UndlyInstrumentParties_NoUndlyInstrumentParties_26.insert(UnderlyingInstrumentPartyID_26.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_26('1');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_26);
      UndlyInstrumentParties_NoUndlyInstrumentParties_26.insert(UnderlyingInstrumentPartyIDSource_26.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_26(148158908);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_26);
      UndlyInstrumentParties_NoUndlyInstrumentParties_26.insert(UnderlyingInstrumentPartyRole_26.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_26);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralAssignment::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_47;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_47("STRING_359339133");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_47);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_47.insert(UnderlyingInstrumentPartySubID_47.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_47(744007211);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_47);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_47.insert(UnderlyingInstrumentPartySubIDType_47.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_47);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    {
      FIX50SP2::CollateralAssignment::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_27;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_27("STRING_1111542510");
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyID_27);
      UndlyInstrumentParties_NoUndlyInstrumentParties_27.insert(UnderlyingInstrumentPartyID_27.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_27('6');
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyIDSource_27);
      UndlyInstrumentParties_NoUndlyInstrumentParties_27.insert(UnderlyingInstrumentPartyIDSource_27.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_27(1334921258);
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyRole_27);
      UndlyInstrumentParties_NoUndlyInstrumentParties_27.insert(UnderlyingInstrumentPartyRole_27.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_27);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralAssignment::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_48;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_48("STRING_948887054");
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubID_48);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_48.insert(UnderlyingInstrumentPartySubID_48.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_48(1755562366);
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubIDType_48);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_48.insert(UnderlyingInstrumentPartySubIDType_48.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_48);

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_2);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  {
    FIX50SP2::CollateralAssignment::NoUnderlyings noUnderlyings_0_2;
    // UndInstrmtCollGrp.NoUnderlyings
    multiset<string> UndInstrmtCollGrp_NoUnderlyings_2;
    FIX::CollAction CollAction_2(1);
    noUnderlyings_0_2.set(CollAction_2);
    UndInstrmtCollGrp_NoUnderlyings_2.insert(CollAction_2.getString());
    all_values.push_back(UndInstrmtCollGrp_NoUnderlyings_2);

    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_14;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_14("DATA_678442388");
    noUnderlyings_0_2.set(EncodedUnderlyingIssuer_14);
    UnderlyingInstrument_14.insert(EncodedUnderlyingIssuer_14.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_14(1977294041);
    noUnderlyings_0_2.set(EncodedUnderlyingIssuerLen_14);
    UnderlyingInstrument_14.insert(EncodedUnderlyingIssuerLen_14.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_14("DATA_1821282407");
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDesc_14);
    UnderlyingInstrument_14.insert(EncodedUnderlyingSecurityDesc_14.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_14(99590838);
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDescLen_14);
    UnderlyingInstrument_14.insert(EncodedUnderlyingSecurityDescLen_14.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_14;
    UnderlyingAdjustedQuantity_14.setString("19867627");
    noUnderlyings_0_2.set(UnderlyingAdjustedQuantity_14);
    UnderlyingInstrument_14.insert(UnderlyingAdjustedQuantity_14.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_14;
    UnderlyingAllocationPercent_14.setString("2.570000");
    noUnderlyings_0_2.set(UnderlyingAllocationPercent_14);
    UnderlyingInstrument_14.insert(UnderlyingAllocationPercent_14.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_14;
    UnderlyingAttachmentPoint_14.setString("2.650000");
    noUnderlyings_0_2.set(UnderlyingAttachmentPoint_14);
    UnderlyingInstrument_14.insert(UnderlyingAttachmentPoint_14.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_14("STRING_824926215");
    noUnderlyings_0_2.set(UnderlyingCFICode_14);
    UnderlyingInstrument_14.insert(UnderlyingCFICode_14.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_14("STRING_909430491");
    noUnderlyings_0_2.set(UnderlyingCPProgram_14);
    UnderlyingInstrument_14.insert(UnderlyingCPProgram_14.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_14("STRING_1579322921");
    noUnderlyings_0_2.set(UnderlyingCPRegType_14);
    UnderlyingInstrument_14.insert(UnderlyingCPRegType_14.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_14;
    UnderlyingCapValue_14.setString("18937479");
    noUnderlyings_0_2.set(UnderlyingCapValue_14);
    UnderlyingInstrument_14.insert(UnderlyingCapValue_14.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_14;
    UnderlyingCashAmount_14.setString("18163398");
    noUnderlyings_0_2.set(UnderlyingCashAmount_14);
    UnderlyingInstrument_14.insert(UnderlyingCashAmount_14.getString());
    FIX::UnderlyingCashType UnderlyingCashType_14("STRING_DIFF");
    noUnderlyings_0_2.set(UnderlyingCashType_14);
    UnderlyingInstrument_14.insert(UnderlyingCashType_14.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_14;
    UnderlyingContractMultiplier_14.setString("10901285");
    noUnderlyings_0_2.set(UnderlyingContractMultiplier_14);
    UnderlyingInstrument_14.insert(UnderlyingContractMultiplier_14.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_14(2084177829);
    noUnderlyings_0_2.set(UnderlyingContractMultiplierUnit_14);
    UnderlyingInstrument_14.insert(UnderlyingContractMultiplierUnit_14.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_14("COUNTRY_1474308993");
    noUnderlyings_0_2.set(UnderlyingCountryOfIssue_14);
    UnderlyingInstrument_14.insert(UnderlyingCountryOfIssue_14.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_14("LOCALMKTDATE_1319841569");
    noUnderlyings_0_2.set(UnderlyingCouponPaymentDate_14);
    UnderlyingInstrument_14.insert(UnderlyingCouponPaymentDate_14.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_14;
    UnderlyingCouponRate_14.setString("55.260000");
    noUnderlyings_0_2.set(UnderlyingCouponRate_14);
    UnderlyingInstrument_14.insert(UnderlyingCouponRate_14.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_14("STRING_773258444");
    noUnderlyings_0_2.set(UnderlyingCreditRating_14);
    UnderlyingInstrument_14.insert(UnderlyingCreditRating_14.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_14("JPY");
    noUnderlyings_0_2.set(UnderlyingCurrency_14);
    UnderlyingInstrument_14.insert(UnderlyingCurrency_14.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_14;
    UnderlyingCurrentValue_14.setString("4395325");
    noUnderlyings_0_2.set(UnderlyingCurrentValue_14);
    UnderlyingInstrument_14.insert(UnderlyingCurrentValue_14.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_14;
    UnderlyingDetachmentPoint_14.setString("36.520000");
    noUnderlyings_0_2.set(UnderlyingDetachmentPoint_14);
    UnderlyingInstrument_14.insert(UnderlyingDetachmentPoint_14.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_14;
    UnderlyingDirtyPrice_14.setString("16977216");
    noUnderlyings_0_2.set(UnderlyingDirtyPrice_14);
    UnderlyingInstrument_14.insert(UnderlyingDirtyPrice_14.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_14;
    UnderlyingEndPrice_14.setString("15510750");
    noUnderlyings_0_2.set(UnderlyingEndPrice_14);
    UnderlyingInstrument_14.insert(UnderlyingEndPrice_14.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_14;
    UnderlyingEndValue_14.setString("18252658");
    noUnderlyings_0_2.set(UnderlyingEndValue_14);
    UnderlyingInstrument_14.insert(UnderlyingEndValue_14.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_14(885159256);
    noUnderlyings_0_2.set(UnderlyingExerciseStyle_14);
    UnderlyingInstrument_14.insert(UnderlyingExerciseStyle_14.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_14;
    UnderlyingFXRate_14.setString("14883305");
    noUnderlyings_0_2.set(UnderlyingFXRate_14);
    UnderlyingInstrument_14.insert(UnderlyingFXRate_14.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_14('D');
    noUnderlyings_0_2.set(UnderlyingFXRateCalc_14);
    UnderlyingInstrument_14.insert(UnderlyingFXRateCalc_14.getString());
    FIX::UnderlyingFactor UnderlyingFactor_14;
    UnderlyingFactor_14.setString("4932379");
    noUnderlyings_0_2.set(UnderlyingFactor_14);
    UnderlyingInstrument_14.insert(UnderlyingFactor_14.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_14(30772600);
    noUnderlyings_0_2.set(UnderlyingFlowScheduleType_14);
    UnderlyingInstrument_14.insert(UnderlyingFlowScheduleType_14.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_14("STRING_1305111602");
    noUnderlyings_0_2.set(UnderlyingInstrRegistry_14);
    UnderlyingInstrument_14.insert(UnderlyingInstrRegistry_14.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_14("LOCALMKTDATE_323048367");
    noUnderlyings_0_2.set(UnderlyingIssueDate_14);
    UnderlyingInstrument_14.insert(UnderlyingIssueDate_14.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_14("STRING_1852055007");
    noUnderlyings_0_2.set(UnderlyingIssuer_14);
    UnderlyingInstrument_14.insert(UnderlyingIssuer_14.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_14("STRING_1404702440");
    noUnderlyings_0_2.set(UnderlyingLocaleOfIssue_14);
    UnderlyingInstrument_14.insert(UnderlyingLocaleOfIssue_14.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_14("LOCALMKTDATE_162327423");
    noUnderlyings_0_2.set(UnderlyingMaturityDate_14);
    UnderlyingInstrument_14.insert(UnderlyingMaturityDate_14.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_14("MONTHYEAR_265491616");
    noUnderlyings_0_2.set(UnderlyingMaturityMonthYear_14);
    UnderlyingInstrument_14.insert(UnderlyingMaturityMonthYear_14.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_14("TZTIMEONLY_641529057");
    noUnderlyings_0_2.set(UnderlyingMaturityTime_14);
    UnderlyingInstrument_14.insert(UnderlyingMaturityTime_14.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_14;
    UnderlyingNotionalPercentageOutstanding_14.setString("36.380000");
    noUnderlyings_0_2.set(UnderlyingNotionalPercentageOutstanding_14);
    UnderlyingInstrument_14.insert(UnderlyingNotionalPercentageOutstanding_14.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_14('1');
    noUnderlyings_0_2.set(UnderlyingOptAttribute_14);
    UnderlyingInstrument_14.insert(UnderlyingOptAttribute_14.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_14;
    UnderlyingOriginalNotionalPercentageOutstanding_14.setString("83.300000");
    noUnderlyings_0_2.set(UnderlyingOriginalNotionalPercentageOutstanding_14);
    UnderlyingInstrument_14.insert(UnderlyingOriginalNotionalPercentageOutstanding_14.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_14("STRING_733517983");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasure_14);
    UnderlyingInstrument_14.insert(UnderlyingPriceUnitOfMeasure_14.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_14;
    UnderlyingPriceUnitOfMeasureQty_14.setString("8437783");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasureQty_14);
    UnderlyingInstrument_14.insert(UnderlyingPriceUnitOfMeasureQty_14.getString());
    FIX::UnderlyingProduct UnderlyingProduct_14(991527093);
    noUnderlyings_0_2.set(UnderlyingProduct_14);
    UnderlyingInstrument_14.insert(UnderlyingProduct_14.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_14(1823646520);
    noUnderlyings_0_2.set(UnderlyingPutOrCall_14);
    UnderlyingInstrument_14.insert(UnderlyingPutOrCall_14.getString());
    FIX::UnderlyingPx UnderlyingPx_14;
    UnderlyingPx_14.setString("7804725");
    noUnderlyings_0_2.set(UnderlyingPx_14);
    UnderlyingInstrument_14.insert(UnderlyingPx_14.getString());
    FIX::UnderlyingQty UnderlyingQty_14;
    UnderlyingQty_14.setString("3183524");
    noUnderlyings_0_2.set(UnderlyingQty_14);
    UnderlyingInstrument_14.insert(UnderlyingQty_14.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_14("LOCALMKTDATE_996004441");
    noUnderlyings_0_2.set(UnderlyingRedemptionDate_14);
    UnderlyingInstrument_14.insert(UnderlyingRedemptionDate_14.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_14("STRING_1586028037");
    noUnderlyings_0_2.set(UnderlyingRepoCollateralSecurityType_14);
    UnderlyingInstrument_14.insert(UnderlyingRepoCollateralSecurityType_14.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_14;
    UnderlyingRepurchaseRate_14.setString("8.820000");
    noUnderlyings_0_2.set(UnderlyingRepurchaseRate_14);
    UnderlyingInstrument_14.insert(UnderlyingRepurchaseRate_14.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_14(1775668960);
    noUnderlyings_0_2.set(UnderlyingRepurchaseTerm_14);
    UnderlyingInstrument_14.insert(UnderlyingRepurchaseTerm_14.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_14("STRING_392258824");
    noUnderlyings_0_2.set(UnderlyingRestructuringType_14);
    UnderlyingInstrument_14.insert(UnderlyingRestructuringType_14.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_14("STRING_1531143453");
    noUnderlyings_0_2.set(UnderlyingSecurityDesc_14);
    UnderlyingInstrument_14.insert(UnderlyingSecurityDesc_14.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_14("EXCHANGE_767188964");
    noUnderlyings_0_2.set(UnderlyingSecurityExchange_14);
    UnderlyingInstrument_14.insert(UnderlyingSecurityExchange_14.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_14("STRING_2089980470");
    noUnderlyings_0_2.set(UnderlyingSecurityID_14);
    UnderlyingInstrument_14.insert(UnderlyingSecurityID_14.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_14("STRING_934734887");
    noUnderlyings_0_2.set(UnderlyingSecurityIDSource_14);
    UnderlyingInstrument_14.insert(UnderlyingSecurityIDSource_14.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_14("STRING_444971124");
    noUnderlyings_0_2.set(UnderlyingSecuritySubType_14);
    UnderlyingInstrument_14.insert(UnderlyingSecuritySubType_14.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_14("STRING_827656078");
    noUnderlyings_0_2.set(UnderlyingSecurityType_14);
    UnderlyingInstrument_14.insert(UnderlyingSecurityType_14.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_14("STRING_275581790");
    noUnderlyings_0_2.set(UnderlyingSeniority_14);
    UnderlyingInstrument_14.insert(UnderlyingSeniority_14.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_14("STRING_1071640339");
    noUnderlyings_0_2.set(UnderlyingSettlMethod_14);
    UnderlyingInstrument_14.insert(UnderlyingSettlMethod_14.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_14(5);
    noUnderlyings_0_2.set(UnderlyingSettlementType_14);
    UnderlyingInstrument_14.insert(UnderlyingSettlementType_14.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_14;
    UnderlyingStartValue_14.setString("3063543");
    noUnderlyings_0_2.set(UnderlyingStartValue_14);
    UnderlyingInstrument_14.insert(UnderlyingStartValue_14.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_14("STRING_229268293");
    noUnderlyings_0_2.set(UnderlyingStateOrProvinceOfIssue_14);
    UnderlyingInstrument_14.insert(UnderlyingStateOrProvinceOfIssue_14.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_14("EUR");
    noUnderlyings_0_2.set(UnderlyingStrikeCurrency_14);
    UnderlyingInstrument_14.insert(UnderlyingStrikeCurrency_14.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_14;
    UnderlyingStrikePrice_14.setString("16339707");
    noUnderlyings_0_2.set(UnderlyingStrikePrice_14);
    UnderlyingInstrument_14.insert(UnderlyingStrikePrice_14.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_14("STRING_1806269843");
    noUnderlyings_0_2.set(UnderlyingSymbol_14);
    UnderlyingInstrument_14.insert(UnderlyingSymbol_14.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_14("STRING_276417366");
    noUnderlyings_0_2.set(UnderlyingSymbolSfx_14);
    UnderlyingInstrument_14.insert(UnderlyingSymbolSfx_14.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_14("STRING_128016143");
    noUnderlyings_0_2.set(UnderlyingTimeUnit_14);
    UnderlyingInstrument_14.insert(UnderlyingTimeUnit_14.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_14("STRING_646039834");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasure_14);
    UnderlyingInstrument_14.insert(UnderlyingUnitOfMeasure_14.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_14;
    UnderlyingUnitOfMeasureQty_14.setString("14513394");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasureQty_14);
    UnderlyingInstrument_14.insert(UnderlyingUnitOfMeasureQty_14.getString());
    all_values.push_back(UnderlyingInstrument_14);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::CollateralAssignment::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_28;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_28("STRING_1379557817");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltID_28);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_28.insert(UnderlyingSecurityAltID_28.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_28("STRING_147634155");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltIDSource_28);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_28.insert(UnderlyingSecurityAltIDSource_28.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_28);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::CollateralAssignment::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_26;
      FIX::UnderlyingStipType UnderlyingStipType_26("STRING_1055720689");
      noUnderlyingStips_2_1_0.set(UnderlyingStipType_26);
      UnderlyingStipulations_NoUnderlyingStips_26.insert(UnderlyingStipType_26.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_26("STRING_928106666");
      noUnderlyingStips_2_1_0.set(UnderlyingStipValue_26);
      UnderlyingStipulations_NoUnderlyingStips_26.insert(UnderlyingStipValue_26.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_26);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::CollateralAssignment::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_28;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_28("STRING_2051725131");
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyID_28);
      UndlyInstrumentParties_NoUndlyInstrumentParties_28.insert(UnderlyingInstrumentPartyID_28.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_28('3');
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyIDSource_28);
      UndlyInstrumentParties_NoUndlyInstrumentParties_28.insert(UnderlyingInstrumentPartyIDSource_28.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_28(455391240);
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyRole_28);
      UndlyInstrumentParties_NoUndlyInstrumentParties_28.insert(UnderlyingInstrumentPartyRole_28.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_28);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralAssignment::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_49;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_49("STRING_758909880");
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubID_49);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_49.insert(UnderlyingInstrumentPartySubID_49.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_49(1986534694);
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubIDType_49);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_49.insert(UnderlyingInstrumentPartySubIDType_49.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_49);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::CollateralAssignment::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_50;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_50("STRING_299615760");
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubID_50);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_50.insert(UnderlyingInstrumentPartySubID_50.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_50(701406702);
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubIDType_50);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_50.insert(UnderlyingInstrumentPartySubIDType_50.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_50);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_1);
      }
      {
        FIX50SP2::CollateralAssignment::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_51;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_51("STRING_773785933");
        noUndlyInstrumentPartySubIDs_2_0_2_2.set(UnderlyingInstrumentPartySubID_51);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_51.insert(UnderlyingInstrumentPartySubID_51.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_51(744586884);
        noUndlyInstrumentPartySubIDs_2_0_2_2.set(UnderlyingInstrumentPartySubIDType_51);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_51.insert(UnderlyingInstrumentPartySubIDType_51.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_51);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_2);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_0);
    }
    {
      FIX50SP2::CollateralAssignment::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_29;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_29("STRING_1529062780");
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyID_29);
      UndlyInstrumentParties_NoUndlyInstrumentParties_29.insert(UnderlyingInstrumentPartyID_29.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_29('1');
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyIDSource_29);
      UndlyInstrumentParties_NoUndlyInstrumentParties_29.insert(UnderlyingInstrumentPartyIDSource_29.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_29(1816227223);
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyRole_29);
      UndlyInstrumentParties_NoUndlyInstrumentParties_29.insert(UnderlyingInstrumentPartyRole_29.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_29);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralAssignment::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_52;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_52("STRING_1355722113");
        noUndlyInstrumentPartySubIDs_2_1_2_0.set(UnderlyingInstrumentPartySubID_52);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_52.insert(UnderlyingInstrumentPartySubID_52.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_52(2045495517);
        noUndlyInstrumentPartySubIDs_2_1_2_0.set(UnderlyingInstrumentPartySubIDType_52);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_52.insert(UnderlyingInstrumentPartySubIDType_52.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_52);

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::CollateralAssignment::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_53;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_53("STRING_198931958");
        noUndlyInstrumentPartySubIDs_2_1_2_1.set(UnderlyingInstrumentPartySubID_53);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_53.insert(UnderlyingInstrumentPartySubID_53.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_53(1366647862);
        noUndlyInstrumentPartySubIDs_2_1_2_1.set(UnderlyingInstrumentPartySubIDType_53);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_53.insert(UnderlyingInstrumentPartySubIDType_53.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_53);

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_1);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_1);
    }
    {
      FIX50SP2::CollateralAssignment::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_30;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_30("STRING_1531982603");
      noUndlyInstrumentParties_2_1_2.set(UnderlyingInstrumentPartyID_30);
      UndlyInstrumentParties_NoUndlyInstrumentParties_30.insert(UnderlyingInstrumentPartyID_30.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_30('2');
      noUndlyInstrumentParties_2_1_2.set(UnderlyingInstrumentPartyIDSource_30);
      UndlyInstrumentParties_NoUndlyInstrumentParties_30.insert(UnderlyingInstrumentPartyIDSource_30.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_30(1643065228);
      noUndlyInstrumentParties_2_1_2.set(UnderlyingInstrumentPartyRole_30);
      UndlyInstrumentParties_NoUndlyInstrumentParties_30.insert(UnderlyingInstrumentPartyRole_30.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_30);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralAssignment::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_54;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_54("STRING_503757987");
        noUndlyInstrumentPartySubIDs_2_2_2_0.set(UnderlyingInstrumentPartySubID_54);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_54.insert(UnderlyingInstrumentPartySubID_54.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_54(946921054);
        noUndlyInstrumentPartySubIDs_2_2_2_0.set(UnderlyingInstrumentPartySubIDType_54);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_54.insert(UnderlyingInstrumentPartySubIDType_54.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_54);

        noUndlyInstrumentParties_2_1_2.addGroup(noUndlyInstrumentPartySubIDs_2_2_2_0);
      }
      {
        FIX50SP2::CollateralAssignment::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_55;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_55("STRING_1861383220");
        noUndlyInstrumentPartySubIDs_2_2_2_1.set(UnderlyingInstrumentPartySubID_55);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_55.insert(UnderlyingInstrumentPartySubID_55.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_55(1883315805);
        noUndlyInstrumentPartySubIDs_2_2_2_1.set(UnderlyingInstrumentPartySubIDType_55);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_55.insert(UnderlyingInstrumentPartySubIDType_55.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_55);

        noUndlyInstrumentParties_2_1_2.addGroup(noUndlyInstrumentPartySubIDs_2_2_2_1);
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
