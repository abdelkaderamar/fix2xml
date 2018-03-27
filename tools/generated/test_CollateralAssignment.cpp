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

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::CollateralAssignment msg;

  list<multiset<string>> all_values;
  multiset<string> CollateralAssignment_0;
  FIX::Account Account_3("STRING_415466180");
  msg.set(Account_3);
  CollateralAssignment_0.insert(Account_3.getString());
  FIX::AccountType AccountType_1(1);
  msg.set(AccountType_1);
  CollateralAssignment_0.insert(AccountType_1.getString());
  FIX::AccruedInterestAmt AccruedInterestAmt_3;
  AccruedInterestAmt_3.setString("2835871");
  msg.set(AccruedInterestAmt_3);
  CollateralAssignment_0.insert(AccruedInterestAmt_3.getString());
  FIX::CashOutstanding CashOutstanding_0;
  CashOutstanding_0.setString("17608134");
  msg.set(CashOutstanding_0);
  CollateralAssignment_0.insert(CashOutstanding_0.getString());
  FIX::ClOrdID ClOrdID_5("STRING_176853279");
  msg.set(ClOrdID_5);
  CollateralAssignment_0.insert(ClOrdID_5.getString());
  FIX::ClearingBusinessDate ClearingBusinessDate_6("LOCALMKTDATE_486006038");
  msg.set(ClearingBusinessDate_6);
  CollateralAssignment_0.insert(ClearingBusinessDate_6.getString());
  FIX::CollAsgnID CollAsgnID_0("STRING_1767844517");
  msg.set(CollAsgnID_0);
  CollateralAssignment_0.insert(CollAsgnID_0.getString());
  FIX::CollAsgnReason CollAsgnReason_0(4);
  msg.set(CollAsgnReason_0);
  CollateralAssignment_0.insert(CollAsgnReason_0.getString());
  FIX::CollAsgnRefID CollAsgnRefID_0("STRING_420954337");
  msg.set(CollAsgnRefID_0);
  CollateralAssignment_0.insert(CollAsgnRefID_0.getString());
  FIX::CollAsgnTransType CollAsgnTransType_0(1);
  msg.set(CollAsgnTransType_0);
  CollateralAssignment_0.insert(CollAsgnTransType_0.getString());
  FIX::CollReqID CollReqID_0("STRING_1988185543");
  msg.set(CollReqID_0);
  CollateralAssignment_0.insert(CollReqID_0.getString());
  FIX::Currency Currency_6("USD");
  msg.set(Currency_6);
  CollateralAssignment_0.insert(Currency_6.getString());
  FIX::EncodedText EncodedText_13("DATA_2035910045");
  msg.set(EncodedText_13);
  CollateralAssignment_0.insert(EncodedText_13.getString());
  FIX::EncodedTextLen EncodedTextLen_13(1644032793);
  msg.set(EncodedTextLen_13);
  CollateralAssignment_0.insert(EncodedTextLen_13.getString());
  FIX::EndAccruedInterestAmt EndAccruedInterestAmt_3;
  EndAccruedInterestAmt_3.setString("2416612");
  msg.set(EndAccruedInterestAmt_3);
  CollateralAssignment_0.insert(EndAccruedInterestAmt_3.getString());
  FIX::EndCash EndCash_3;
  EndCash_3.setString("18190569");
  msg.set(EndCash_3);
  CollateralAssignment_0.insert(EndCash_3.getString());
  FIX::ExpireTime ExpireTime_0(FIX::UTCTIMESTAMP(13, 50, 23, 16, 112012));
  msg.set(ExpireTime_0);
  CollateralAssignment_0.insert(ExpireTime_0.getString());
  FIX::MarginExcess MarginExcess_0;
  MarginExcess_0.setString("18812251");
  msg.set(MarginExcess_0);
  CollateralAssignment_0.insert(MarginExcess_0.getString());
  FIX::OrderID OrderID_5("STRING_41172009");
  msg.set(OrderID_5);
  CollateralAssignment_0.insert(OrderID_5.getString());
  FIX::Price Price_2;
  Price_2.setString("1064914");
  msg.set(Price_2);
  CollateralAssignment_0.insert(Price_2.getString());
  FIX::PriceType PriceType_4(8);
  msg.set(PriceType_4);
  CollateralAssignment_0.insert(PriceType_4.getString());
  FIX::QtyType QtyType_4(2);
  msg.set(QtyType_4);
  CollateralAssignment_0.insert(QtyType_4.getString());
  FIX::Quantity Quantity_5;
  Quantity_5.setString("8144041");
  msg.set(Quantity_5);
  CollateralAssignment_0.insert(Quantity_5.getString());
  FIX::SecondaryClOrdID SecondaryClOrdID_5("STRING_1024706100");
  msg.set(SecondaryClOrdID_5);
  CollateralAssignment_0.insert(SecondaryClOrdID_5.getString());
  FIX::SecondaryOrderID SecondaryOrderID_5("STRING_1112647480");
  msg.set(SecondaryOrderID_5);
  CollateralAssignment_0.insert(SecondaryOrderID_5.getString());
  FIX::SettlDate SettlDate_6("LOCALMKTDATE_1741404270");
  msg.set(SettlDate_6);
  CollateralAssignment_0.insert(SettlDate_6.getString());
  FIX::SettlSessID SettlSessID_2("STRING_ETH");
  msg.set(SettlSessID_2);
  CollateralAssignment_0.insert(SettlSessID_2.getString());
  FIX::SettlSessSubID SettlSessSubID_1("STRING_725977317");
  msg.set(SettlSessSubID_1);
  CollateralAssignment_0.insert(SettlSessSubID_1.getString());
  FIX::Side Side_6('F');
  msg.set(Side_6);
  CollateralAssignment_0.insert(Side_6.getString());
  FIX::StartCash StartCash_3;
  StartCash_3.setString("17942992");
  msg.set(StartCash_3);
  CollateralAssignment_0.insert(StartCash_3.getString());
  FIX::Text Text_13("STRING_346338186");
  msg.set(Text_13);
  CollateralAssignment_0.insert(Text_13.getString());
  FIX::TotalNetValue TotalNetValue_0;
  TotalNetValue_0.setString("5131271");
  msg.set(TotalNetValue_0);
  CollateralAssignment_0.insert(TotalNetValue_0.getString());
  FIX::TradingSessionID TradingSessionID_7("STRING_6");
  msg.set(TradingSessionID_7);
  CollateralAssignment_0.insert(TradingSessionID_7.getString());
  FIX::TradingSessionSubID TradingSessionSubID_7("STRING_2");
  msg.set(TradingSessionSubID_7);
  CollateralAssignment_0.insert(TradingSessionSubID_7.getString());
  FIX::TransactTime TransactTime_6(FIX::UTCTIMESTAMP(16, 19, 38, 13, 112001));
  msg.set(TransactTime_6);
  CollateralAssignment_0.insert(TransactTime_6.getString());
  all_values.push_back(CollateralAssignment_0);

  // ExecCollGrp
  // Group ExecCollGrp.NoExecs
  {
    FIX50SP2::CollateralAssignment::NoExecs noExecs_0_0;
    // ExecCollGrp.NoExecs
    multiset<string> ExecCollGrp_NoExecs_0;
    FIX::ExecID ExecID_8("STRING_1365422616");
    noExecs_0_0.set(ExecID_8);
    ExecCollGrp_NoExecs_0.insert(ExecID_8.getString());
    all_values.push_back(ExecCollGrp_NoExecs_0);

    msg.addGroup(noExecs_0_0);
  }
  {
    FIX50SP2::CollateralAssignment::NoExecs noExecs_0_1;
    // ExecCollGrp.NoExecs
    multiset<string> ExecCollGrp_NoExecs_1;
    FIX::ExecID ExecID_9("STRING_1285359518");
    noExecs_0_1.set(ExecID_9);
    ExecCollGrp_NoExecs_1.insert(ExecID_9.getString());
    all_values.push_back(ExecCollGrp_NoExecs_1);

    msg.addGroup(noExecs_0_1);
  }
  // FinancingDetails
  multiset<string> FinancingDetails_3;
  FIX::AgreementCurrency AgreementCurrency_3("USD");
  msg.set(AgreementCurrency_3);
  FinancingDetails_3.insert(AgreementCurrency_3.getString());
  FIX::AgreementDate AgreementDate_3("LOCALMKTDATE_1637919168");
  msg.set(AgreementDate_3);
  FinancingDetails_3.insert(AgreementDate_3.getString());
  FIX::AgreementDesc AgreementDesc_3("STRING_1903189327");
  msg.set(AgreementDesc_3);
  FinancingDetails_3.insert(AgreementDesc_3.getString());
  FIX::AgreementID AgreementID_3("STRING_1313372229");
  msg.set(AgreementID_3);
  FinancingDetails_3.insert(AgreementID_3.getString());
  FIX::DeliveryType DeliveryType_3(1);
  msg.set(DeliveryType_3);
  FinancingDetails_3.insert(DeliveryType_3.getString());
  FIX::EndDate EndDate_3("LOCALMKTDATE_2009680745");
  msg.set(EndDate_3);
  FinancingDetails_3.insert(EndDate_3.getString());
  FIX::MarginRatio MarginRatio_3;
  MarginRatio_3.setString("44.640000");
  msg.set(MarginRatio_3);
  FinancingDetails_3.insert(MarginRatio_3.getString());
  FIX::StartDate StartDate_3("LOCALMKTDATE_228788829");
  msg.set(StartDate_3);
  FinancingDetails_3.insert(StartDate_3.getString());
  FIX::TerminationType TerminationType_3(3);
  msg.set(TerminationType_3);
  FinancingDetails_3.insert(TerminationType_3.getString());
  all_values.push_back(FinancingDetails_3);

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::CollateralAssignment::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_11;
    FIX::EncodedLegIssuer EncodedLegIssuer_11("DATA_1341436309");
    noLegs_0_0.set(EncodedLegIssuer_11);
    InstrumentLeg_11.insert(EncodedLegIssuer_11.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_11(270521880);
    noLegs_0_0.set(EncodedLegIssuerLen_11);
    InstrumentLeg_11.insert(EncodedLegIssuerLen_11.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_11("DATA_1330610170");
    noLegs_0_0.set(EncodedLegSecurityDesc_11);
    InstrumentLeg_11.insert(EncodedLegSecurityDesc_11.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_11(2067413627);
    noLegs_0_0.set(EncodedLegSecurityDescLen_11);
    InstrumentLeg_11.insert(EncodedLegSecurityDescLen_11.getString());
    FIX::LegCFICode LegCFICode_11("STRING_41295782");
    noLegs_0_0.set(LegCFICode_11);
    InstrumentLeg_11.insert(LegCFICode_11.getString());
    FIX::LegContractMultiplier LegContractMultiplier_11;
    LegContractMultiplier_11.setString("9774258");
    noLegs_0_0.set(LegContractMultiplier_11);
    InstrumentLeg_11.insert(LegContractMultiplier_11.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_11(266268165);
    noLegs_0_0.set(LegContractMultiplierUnit_11);
    InstrumentLeg_11.insert(LegContractMultiplierUnit_11.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_11("MONTHYEAR_554422928");
    noLegs_0_0.set(LegContractSettlMonth_11);
    InstrumentLeg_11.insert(LegContractSettlMonth_11.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_11("COUNTRY_1045195795");
    noLegs_0_0.set(LegCountryOfIssue_11);
    InstrumentLeg_11.insert(LegCountryOfIssue_11.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_11("LOCALMKTDATE_1178658498");
    noLegs_0_0.set(LegCouponPaymentDate_11);
    InstrumentLeg_11.insert(LegCouponPaymentDate_11.getString());
    FIX::LegCouponRate LegCouponRate_11;
    LegCouponRate_11.setString("19.700000");
    noLegs_0_0.set(LegCouponRate_11);
    InstrumentLeg_11.insert(LegCouponRate_11.getString());
    FIX::LegCreditRating LegCreditRating_11("STRING_2109229091");
    noLegs_0_0.set(LegCreditRating_11);
    InstrumentLeg_11.insert(LegCreditRating_11.getString());
    FIX::LegCurrency LegCurrency_11("JPY");
    noLegs_0_0.set(LegCurrency_11);
    InstrumentLeg_11.insert(LegCurrency_11.getString());
    FIX::LegDatedDate LegDatedDate_11("LOCALMKTDATE_522327884");
    noLegs_0_0.set(LegDatedDate_11);
    InstrumentLeg_11.insert(LegDatedDate_11.getString());
    FIX::LegExerciseStyle LegExerciseStyle_11(1078149496);
    noLegs_0_0.set(LegExerciseStyle_11);
    InstrumentLeg_11.insert(LegExerciseStyle_11.getString());
    FIX::LegFactor LegFactor_11;
    LegFactor_11.setString("10643361");
    noLegs_0_0.set(LegFactor_11);
    InstrumentLeg_11.insert(LegFactor_11.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_11(1669266792);
    noLegs_0_0.set(LegFlowScheduleType_11);
    InstrumentLeg_11.insert(LegFlowScheduleType_11.getString());
    FIX::LegInstrRegistry LegInstrRegistry_11("STRING_296088464");
    noLegs_0_0.set(LegInstrRegistry_11);
    InstrumentLeg_11.insert(LegInstrRegistry_11.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_11("LOCALMKTDATE_202211986");
    noLegs_0_0.set(LegInterestAccrualDate_11);
    InstrumentLeg_11.insert(LegInterestAccrualDate_11.getString());
    FIX::LegIssueDate LegIssueDate_11("LOCALMKTDATE_2014990555");
    noLegs_0_0.set(LegIssueDate_11);
    InstrumentLeg_11.insert(LegIssueDate_11.getString());
    FIX::LegIssuer LegIssuer_11("STRING_1875719216");
    noLegs_0_0.set(LegIssuer_11);
    InstrumentLeg_11.insert(LegIssuer_11.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_11("STRING_1840131154");
    noLegs_0_0.set(LegLocaleOfIssue_11);
    InstrumentLeg_11.insert(LegLocaleOfIssue_11.getString());
    FIX::LegMaturityDate LegMaturityDate_11("LOCALMKTDATE_1770696235");
    noLegs_0_0.set(LegMaturityDate_11);
    InstrumentLeg_11.insert(LegMaturityDate_11.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_11("MONTHYEAR_1041607798");
    noLegs_0_0.set(LegMaturityMonthYear_11);
    InstrumentLeg_11.insert(LegMaturityMonthYear_11.getString());
    FIX::LegMaturityTime LegMaturityTime_11("TZTIMEONLY_1371738683");
    noLegs_0_0.set(LegMaturityTime_11);
    InstrumentLeg_11.insert(LegMaturityTime_11.getString());
    FIX::LegOptAttribute LegOptAttribute_11('1');
    noLegs_0_0.set(LegOptAttribute_11);
    InstrumentLeg_11.insert(LegOptAttribute_11.getString());
    FIX::LegOptionRatio LegOptionRatio_11;
    LegOptionRatio_11.setString("392186");
    noLegs_0_0.set(LegOptionRatio_11);
    InstrumentLeg_11.insert(LegOptionRatio_11.getString());
    FIX::LegPool LegPool_11("STRING_1600527512");
    noLegs_0_0.set(LegPool_11);
    InstrumentLeg_11.insert(LegPool_11.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_11("STRING_162010942");
    noLegs_0_0.set(LegPriceUnitOfMeasure_11);
    InstrumentLeg_11.insert(LegPriceUnitOfMeasure_11.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_11;
    LegPriceUnitOfMeasureQty_11.setString("615355");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_11);
    InstrumentLeg_11.insert(LegPriceUnitOfMeasureQty_11.getString());
    FIX::LegProduct LegProduct_11(794480173);
    noLegs_0_0.set(LegProduct_11);
    InstrumentLeg_11.insert(LegProduct_11.getString());
    FIX::LegPutOrCall LegPutOrCall_11(432532822);
    noLegs_0_0.set(LegPutOrCall_11);
    InstrumentLeg_11.insert(LegPutOrCall_11.getString());
    FIX::LegRatioQty LegRatioQty_11;
    LegRatioQty_11.setString("13921457");
    noLegs_0_0.set(LegRatioQty_11);
    InstrumentLeg_11.insert(LegRatioQty_11.getString());
    FIX::LegRedemptionDate LegRedemptionDate_11("LOCALMKTDATE_714410152");
    noLegs_0_0.set(LegRedemptionDate_11);
    InstrumentLeg_11.insert(LegRedemptionDate_11.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_11("STRING_473828605");
    noLegs_0_0.set(LegRepoCollateralSecurityType_11);
    InstrumentLeg_11.insert(LegRepoCollateralSecurityType_11.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_11;
    LegRepurchaseRate_11.setString("78.680000");
    noLegs_0_0.set(LegRepurchaseRate_11);
    InstrumentLeg_11.insert(LegRepurchaseRate_11.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_11(980678318);
    noLegs_0_0.set(LegRepurchaseTerm_11);
    InstrumentLeg_11.insert(LegRepurchaseTerm_11.getString());
    FIX::LegSecurityDesc LegSecurityDesc_11("STRING_1028251533");
    noLegs_0_0.set(LegSecurityDesc_11);
    InstrumentLeg_11.insert(LegSecurityDesc_11.getString());
    FIX::LegSecurityExchange LegSecurityExchange_11("EXCHANGE_1267283663");
    noLegs_0_0.set(LegSecurityExchange_11);
    InstrumentLeg_11.insert(LegSecurityExchange_11.getString());
    FIX::LegSecurityID LegSecurityID_11("STRING_11853168");
    noLegs_0_0.set(LegSecurityID_11);
    InstrumentLeg_11.insert(LegSecurityID_11.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_11("STRING_1936503503");
    noLegs_0_0.set(LegSecurityIDSource_11);
    InstrumentLeg_11.insert(LegSecurityIDSource_11.getString());
    FIX::LegSecuritySubType LegSecuritySubType_11("STRING_1229029107");
    noLegs_0_0.set(LegSecuritySubType_11);
    InstrumentLeg_11.insert(LegSecuritySubType_11.getString());
    FIX::LegSecurityType LegSecurityType_11("STRING_2093168366");
    noLegs_0_0.set(LegSecurityType_11);
    InstrumentLeg_11.insert(LegSecurityType_11.getString());
    FIX::LegSide LegSide_11('9');
    noLegs_0_0.set(LegSide_11);
    InstrumentLeg_11.insert(LegSide_11.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_11("STRING_1751356991");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_11);
    InstrumentLeg_11.insert(LegStateOrProvinceOfIssue_11.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_11("USD");
    noLegs_0_0.set(LegStrikeCurrency_11);
    InstrumentLeg_11.insert(LegStrikeCurrency_11.getString());
    FIX::LegStrikePrice LegStrikePrice_11;
    LegStrikePrice_11.setString("12731401");
    noLegs_0_0.set(LegStrikePrice_11);
    InstrumentLeg_11.insert(LegStrikePrice_11.getString());
    FIX::LegSymbol LegSymbol_11("STRING_1319922678");
    noLegs_0_0.set(LegSymbol_11);
    InstrumentLeg_11.insert(LegSymbol_11.getString());
    FIX::LegSymbolSfx LegSymbolSfx_11("STRING_58591718");
    noLegs_0_0.set(LegSymbolSfx_11);
    InstrumentLeg_11.insert(LegSymbolSfx_11.getString());
    FIX::LegTimeUnit LegTimeUnit_11("STRING_1140647043");
    noLegs_0_0.set(LegTimeUnit_11);
    InstrumentLeg_11.insert(LegTimeUnit_11.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_11("STRING_1048158246");
    noLegs_0_0.set(LegUnitOfMeasure_11);
    InstrumentLeg_11.insert(LegUnitOfMeasure_11.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_11;
    LegUnitOfMeasureQty_11.setString("18987228");
    noLegs_0_0.set(LegUnitOfMeasureQty_11);
    InstrumentLeg_11.insert(LegUnitOfMeasureQty_11.getString());
    all_values.push_back(InstrumentLeg_11);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::CollateralAssignment::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_17;
      FIX::LegSecurityAltID LegSecurityAltID_17("STRING_2089766044");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_17);
      LegSecAltIDGrp_NoLegSecurityAltID_17.insert(LegSecurityAltID_17.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_17("STRING_1122977907");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_17);
      LegSecAltIDGrp_NoLegSecurityAltID_17.insert(LegSecurityAltIDSource_17.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_17);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::CollateralAssignment::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_18;
      FIX::LegSecurityAltID LegSecurityAltID_18("STRING_249269314");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_18);
      LegSecAltIDGrp_NoLegSecurityAltID_18.insert(LegSecurityAltID_18.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_18("STRING_2128984659");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_18);
      LegSecAltIDGrp_NoLegSecurityAltID_18.insert(LegSecurityAltIDSource_18.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_18);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::CollateralAssignment::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_19;
      FIX::LegSecurityAltID LegSecurityAltID_19("STRING_576021771");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltID_19);
      LegSecAltIDGrp_NoLegSecurityAltID_19.insert(LegSecurityAltID_19.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_19("STRING_411280256");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltIDSource_19);
      LegSecAltIDGrp_NoLegSecurityAltID_19.insert(LegSecurityAltIDSource_19.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_19);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_2);
    }
    msg.addGroup(noLegs_0_0);
  }
  // Instrument
  multiset<string> Instrument_7;
  FIX::AttachmentPoint AttachmentPoint_7;
  AttachmentPoint_7.setString("65.420000");
  msg.set(AttachmentPoint_7);
  Instrument_7.insert(AttachmentPoint_7.getString());
  FIX::CFICode CFICode_7("STRING_1370501944");
  msg.set(CFICode_7);
  Instrument_7.insert(CFICode_7.getString());
  FIX::CPProgram CPProgram_7(2);
  msg.set(CPProgram_7);
  Instrument_7.insert(CPProgram_7.getString());
  FIX::CPRegType CPRegType_7("STRING_1435182243");
  msg.set(CPRegType_7);
  Instrument_7.insert(CPRegType_7.getString());
  FIX::CapPrice CapPrice_7;
  CapPrice_7.setString("20849120");
  msg.set(CapPrice_7);
  Instrument_7.insert(CapPrice_7.getString());
  FIX::ContractMultiplier ContractMultiplier_7;
  ContractMultiplier_7.setString("13176416");
  msg.set(ContractMultiplier_7);
  Instrument_7.insert(ContractMultiplier_7.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_7(1);
  msg.set(ContractMultiplierUnit_7);
  Instrument_7.insert(ContractMultiplierUnit_7.getString());
  FIX::ContractSettlMonth ContractSettlMonth_7("MONTHYEAR_918106767");
  msg.set(ContractSettlMonth_7);
  Instrument_7.insert(ContractSettlMonth_7.getString());
  FIX::CountryOfIssue CountryOfIssue_7("COUNTRY_198409569");
  msg.set(CountryOfIssue_7);
  Instrument_7.insert(CountryOfIssue_7.getString());
  FIX::CouponPaymentDate CouponPaymentDate_7("LOCALMKTDATE_777070127");
  msg.set(CouponPaymentDate_7);
  Instrument_7.insert(CouponPaymentDate_7.getString());
  FIX::CouponRate CouponRate_7;
  CouponRate_7.setString("99.350000");
  msg.set(CouponRate_7);
  Instrument_7.insert(CouponRate_7.getString());
  FIX::CreditRating CreditRating_7("STRING_2134913073");
  msg.set(CreditRating_7);
  Instrument_7.insert(CreditRating_7.getString());
  FIX::DatedDate DatedDate_7("LOCALMKTDATE_2006099234");
  msg.set(DatedDate_7);
  Instrument_7.insert(DatedDate_7.getString());
  FIX::DetachmentPoint DetachmentPoint_7;
  DetachmentPoint_7.setString("46.530000");
  msg.set(DetachmentPoint_7);
  Instrument_7.insert(DetachmentPoint_7.getString());
  FIX::EncodedIssuer EncodedIssuer_7("DATA_926956689");
  msg.set(EncodedIssuer_7);
  Instrument_7.insert(EncodedIssuer_7.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_7(1609972577);
  msg.set(EncodedIssuerLen_7);
  Instrument_7.insert(EncodedIssuerLen_7.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_7("DATA_1899478867");
  msg.set(EncodedSecurityDesc_7);
  Instrument_7.insert(EncodedSecurityDesc_7.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_7(783336421);
  msg.set(EncodedSecurityDescLen_7);
  Instrument_7.insert(EncodedSecurityDescLen_7.getString());
  FIX::ExerciseStyle ExerciseStyle_7(1);
  msg.set(ExerciseStyle_7);
  Instrument_7.insert(ExerciseStyle_7.getString());
  FIX::Factor Factor_7;
  Factor_7.setString("10719178");
  msg.set(Factor_7);
  Instrument_7.insert(Factor_7.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_7(false);
  msg.set(FlexProductEligibilityIndicator_7);
  Instrument_7.insert(FlexProductEligibilityIndicator_7.getString());
  FIX::FlexibleIndicator FlexibleIndicator_7(false);
  msg.set(FlexibleIndicator_7);
  Instrument_7.insert(FlexibleIndicator_7.getString());
  FIX::FloorPrice FloorPrice_7;
  FloorPrice_7.setString("21200761");
  msg.set(FloorPrice_7);
  Instrument_7.insert(FloorPrice_7.getString());
  FIX::FlowScheduleType FlowScheduleType_7(3);
  msg.set(FlowScheduleType_7);
  Instrument_7.insert(FlowScheduleType_7.getString());
  FIX::InstrRegistry InstrRegistry_7("STRING_492652091");
  msg.set(InstrRegistry_7);
  Instrument_7.insert(InstrRegistry_7.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_7('2');
  msg.set(InstrmtAssignmentMethod_7);
  Instrument_7.insert(InstrmtAssignmentMethod_7.getString());
  FIX::InterestAccrualDate InterestAccrualDate_7("LOCALMKTDATE_1716145270");
  msg.set(InterestAccrualDate_7);
  Instrument_7.insert(InterestAccrualDate_7.getString());
  FIX::IssueDate IssueDate_7("LOCALMKTDATE_741921406");
  msg.set(IssueDate_7);
  Instrument_7.insert(IssueDate_7.getString());
  FIX::Issuer Issuer_7("STRING_2043859551");
  msg.set(Issuer_7);
  Instrument_7.insert(Issuer_7.getString());
  FIX::ListMethod ListMethod_7(1);
  msg.set(ListMethod_7);
  Instrument_7.insert(ListMethod_7.getString());
  FIX::LocaleOfIssue LocaleOfIssue_7("STRING_1153201662");
  msg.set(LocaleOfIssue_7);
  Instrument_7.insert(LocaleOfIssue_7.getString());
  FIX::MaturityDate MaturityDate_7("LOCALMKTDATE_2086896093");
  msg.set(MaturityDate_7);
  Instrument_7.insert(MaturityDate_7.getString());
  FIX::MaturityMonthYear MaturityMonthYear_7("MONTHYEAR_1515185337");
  msg.set(MaturityMonthYear_7);
  Instrument_7.insert(MaturityMonthYear_7.getString());
  FIX::MaturityTime MaturityTime_7("TZTIMEONLY_1997014741");
  msg.set(MaturityTime_7);
  Instrument_7.insert(MaturityTime_7.getString());
  FIX::MinPriceIncrement MinPriceIncrement_7;
  MinPriceIncrement_7.setString("13745946");
  msg.set(MinPriceIncrement_7);
  Instrument_7.insert(MinPriceIncrement_7.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_7;
  MinPriceIncrementAmount_7.setString("14526137");
  msg.set(MinPriceIncrementAmount_7);
  Instrument_7.insert(MinPriceIncrementAmount_7.getString());
  FIX::NTPositionLimit NTPositionLimit_7(1167172777);
  msg.set(NTPositionLimit_7);
  Instrument_7.insert(NTPositionLimit_7.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_7;
  NotionalPercentageOutstanding_7.setString("11.520000");
  msg.set(NotionalPercentageOutstanding_7);
  Instrument_7.insert(NotionalPercentageOutstanding_7.getString());
  FIX::OptAttribute OptAttribute_7('2');
  msg.set(OptAttribute_7);
  Instrument_7.insert(OptAttribute_7.getString());
  FIX::OptPayoutAmount OptPayoutAmount_7;
  OptPayoutAmount_7.setString("13655823");
  msg.set(OptPayoutAmount_7);
  Instrument_7.insert(OptPayoutAmount_7.getString());
  FIX::OptPayoutType OptPayoutType_7(1);
  msg.set(OptPayoutType_7);
  Instrument_7.insert(OptPayoutType_7.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_7;
  OriginalNotionalPercentageOutstanding_7.setString("68.410000");
  msg.set(OriginalNotionalPercentageOutstanding_7);
  Instrument_7.insert(OriginalNotionalPercentageOutstanding_7.getString());
  FIX::Pool Pool_7("STRING_1353011772");
  msg.set(Pool_7);
  Instrument_7.insert(Pool_7.getString());
  FIX::PositionLimit PositionLimit_7(1520066865);
  msg.set(PositionLimit_7);
  Instrument_7.insert(PositionLimit_7.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_7("STRING_INT");
  msg.set(PriceQuoteMethod_7);
  Instrument_7.insert(PriceQuoteMethod_7.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_7("STRING_132484813");
  msg.set(PriceUnitOfMeasure_7);
  Instrument_7.insert(PriceUnitOfMeasure_7.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_7;
  PriceUnitOfMeasureQty_7.setString("9825557");
  msg.set(PriceUnitOfMeasureQty_7);
  Instrument_7.insert(PriceUnitOfMeasureQty_7.getString());
  FIX::Product Product_9(8);
  msg.set(Product_9);
  Instrument_7.insert(Product_9.getString());
  FIX::ProductComplex ProductComplex_7("STRING_915821234");
  msg.set(ProductComplex_7);
  Instrument_7.insert(ProductComplex_7.getString());
  FIX::PutOrCall PutOrCall_7(0);
  msg.set(PutOrCall_7);
  Instrument_7.insert(PutOrCall_7.getString());
  FIX::RedemptionDate RedemptionDate_7("LOCALMKTDATE_705270963");
  msg.set(RedemptionDate_7);
  Instrument_7.insert(RedemptionDate_7.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_7("STRING_1757749373");
  msg.set(RepoCollateralSecurityType_7);
  Instrument_7.insert(RepoCollateralSecurityType_7.getString());
  FIX::RepurchaseRate RepurchaseRate_7;
  RepurchaseRate_7.setString("73.210000");
  msg.set(RepurchaseRate_7);
  Instrument_7.insert(RepurchaseRate_7.getString());
  FIX::RepurchaseTerm RepurchaseTerm_7(677863459);
  msg.set(RepurchaseTerm_7);
  Instrument_7.insert(RepurchaseTerm_7.getString());
  FIX::RestructuringType RestructuringType_7("STRING_FR");
  msg.set(RestructuringType_7);
  Instrument_7.insert(RestructuringType_7.getString());
  FIX::SecurityDesc SecurityDesc_7("STRING_1939629413");
  msg.set(SecurityDesc_7);
  Instrument_7.insert(SecurityDesc_7.getString());
  FIX::SecurityExchange SecurityExchange_7("EXCHANGE_592738352");
  msg.set(SecurityExchange_7);
  Instrument_7.insert(SecurityExchange_7.getString());
  FIX::SecurityGroup SecurityGroup_7("STRING_1919578358");
  msg.set(SecurityGroup_7);
  Instrument_7.insert(SecurityGroup_7.getString());
  FIX::SecurityID SecurityID_7("STRING_534067171");
  msg.set(SecurityID_7);
  Instrument_7.insert(SecurityID_7.getString());
  FIX::SecurityIDSource SecurityIDSource_7("STRING_4");
  msg.set(SecurityIDSource_7);
  Instrument_7.insert(SecurityIDSource_7.getString());
  FIX::SecurityStatus SecurityStatus_7("STRING_2");
  msg.set(SecurityStatus_7);
  Instrument_7.insert(SecurityStatus_7.getString());
  FIX::SecuritySubType SecuritySubType_7("STRING_1687268833");
  msg.set(SecuritySubType_7);
  Instrument_7.insert(SecuritySubType_7.getString());
  FIX::SecurityType SecurityType_9("STRING_CS");
  msg.set(SecurityType_9);
  Instrument_7.insert(SecurityType_9.getString());
  FIX::Seniority Seniority_7("STRING_SB");
  msg.set(Seniority_7);
  Instrument_7.insert(Seniority_7.getString());
  FIX::SettlMethod SettlMethod_7('P');
  msg.set(SettlMethod_7);
  Instrument_7.insert(SettlMethod_7.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_7("STRING_1803121390");
  msg.set(SettleOnOpenFlag_7);
  Instrument_7.insert(SettleOnOpenFlag_7.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_7("STRING_737093579");
  msg.set(StateOrProvinceOfIssue_7);
  Instrument_7.insert(StateOrProvinceOfIssue_7.getString());
  FIX::StrikeCurrency StrikeCurrency_7("USD");
  msg.set(StrikeCurrency_7);
  Instrument_7.insert(StrikeCurrency_7.getString());
  FIX::StrikeMultiplier StrikeMultiplier_7;
  StrikeMultiplier_7.setString("9603304");
  msg.set(StrikeMultiplier_7);
  Instrument_7.insert(StrikeMultiplier_7.getString());
  FIX::StrikePrice StrikePrice_7;
  StrikePrice_7.setString("19220714");
  msg.set(StrikePrice_7);
  Instrument_7.insert(StrikePrice_7.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_7(2);
  msg.set(StrikePriceBoundaryMethod_7);
  Instrument_7.insert(StrikePriceBoundaryMethod_7.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_7;
  StrikePriceBoundaryPrecision_7.setString("73.250000");
  msg.set(StrikePriceBoundaryPrecision_7);
  Instrument_7.insert(StrikePriceBoundaryPrecision_7.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_7(4);
  msg.set(StrikePriceDeterminationMethod_7);
  Instrument_7.insert(StrikePriceDeterminationMethod_7.getString());
  FIX::StrikeValue StrikeValue_7;
  StrikeValue_7.setString("15740533");
  msg.set(StrikeValue_7);
  Instrument_7.insert(StrikeValue_7.getString());
  FIX::Symbol Symbol_7("STRING_1994885172");
  msg.set(Symbol_7);
  Instrument_7.insert(Symbol_7.getString());
  FIX::SymbolSfx SymbolSfx_7("STRING_CD");
  msg.set(SymbolSfx_7);
  Instrument_7.insert(SymbolSfx_7.getString());
  FIX::TimeUnit TimeUnit_7("STRING_D");
  msg.set(TimeUnit_7);
  Instrument_7.insert(TimeUnit_7.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_7(3);
  msg.set(UnderlyingPriceDeterminationMethod_7);
  Instrument_7.insert(UnderlyingPriceDeterminationMethod_7.getString());
  FIX::UnitOfMeasure UnitOfMeasure_7("STRING_Bcf");
  msg.set(UnitOfMeasure_7);
  Instrument_7.insert(UnitOfMeasure_7.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_7;
  UnitOfMeasureQty_7.setString("21273103");
  msg.set(UnitOfMeasureQty_7);
  Instrument_7.insert(UnitOfMeasureQty_7.getString());
  FIX::ValuationMethod ValuationMethod_7("STRING_CDS");
  msg.set(ValuationMethod_7);
  Instrument_7.insert(ValuationMethod_7.getString());
  all_values.push_back(Instrument_7);

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
    ComplexEventPrice_16.setString("8638890");
    noComplexEvents_0_0.set(ComplexEventPrice_16);
    ComplexEvents_NoComplexEvents_16.insert(ComplexEventPrice_16.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_16(3);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_16);
    ComplexEvents_NoComplexEvents_16.insert(ComplexEventPriceBoundaryMethod_16.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_16;
    ComplexEventPriceBoundaryPrecision_16.setString("98.370000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_16);
    ComplexEvents_NoComplexEvents_16.insert(ComplexEventPriceBoundaryPrecision_16.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_16(1);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_16);
    ComplexEvents_NoComplexEvents_16.insert(ComplexEventPriceTimeType_16.getString());
    FIX::ComplexEventType ComplexEventType_16(2);
    noComplexEvents_0_0.set(ComplexEventType_16);
    ComplexEvents_NoComplexEvents_16.insert(ComplexEventType_16.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_16;
    ComplexOptPayoutAmount_16.setString("17530170");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_16);
    ComplexEvents_NoComplexEvents_16.insert(ComplexOptPayoutAmount_16.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_16);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CollateralAssignment::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_34;
      FIX::ComplexEventEndDate ComplexEventEndDate_34(FIX::UTCTIMESTAMP(2, 33, 13, 1, 82000));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_34);
      ComplexEventDates_NoComplexEventDates_34.insert(ComplexEventEndDate_34.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_34(FIX::UTCTIMESTAMP(6, 8, 5, 24, 32002));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_34);
      ComplexEventDates_NoComplexEventDates_34.insert(ComplexEventStartDate_34.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_34);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralAssignment::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_66;
        FIX::ComplexEventEndTime ComplexEventEndTime_66(FIX::UTCTIMEONLY(17, 58, 28));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_66);
        ComplexEventTimes_NoComplexEventTimes_66.insert(ComplexEventEndTime_66.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_66(FIX::UTCTIMEONLY(21, 21, 23));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_66);
        ComplexEventTimes_NoComplexEventTimes_66.insert(ComplexEventStartTime_66.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_66);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::CollateralAssignment::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_67;
        FIX::ComplexEventEndTime ComplexEventEndTime_67(FIX::UTCTIMEONLY(14, 22, 31));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_67);
        ComplexEventTimes_NoComplexEventTimes_67.insert(ComplexEventEndTime_67.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_67(FIX::UTCTIMEONLY(16, 31, 4));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_67);
        ComplexEventTimes_NoComplexEventTimes_67.insert(ComplexEventStartTime_67.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_67);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
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
    multiset<string> EvntGrp_NoEvents_13;
    FIX::EventDate EventDate_13("LOCALMKTDATE_1688555685");
    noEvents_0_0.set(EventDate_13);
    EvntGrp_NoEvents_13.insert(EventDate_13.getString());
    FIX::EventPx EventPx_13;
    EventPx_13.setString("1911981");
    noEvents_0_0.set(EventPx_13);
    EvntGrp_NoEvents_13.insert(EventPx_13.getString());
    FIX::EventText EventText_13("STRING_870791817");
    noEvents_0_0.set(EventText_13);
    EvntGrp_NoEvents_13.insert(EventText_13.getString());
    FIX::EventTime EventTime_13(FIX::UTCTIMESTAMP(17, 1, 40, 23, 112001));
    noEvents_0_0.set(EventTime_13);
    EvntGrp_NoEvents_13.insert(EventTime_13.getString());
    FIX::EventType EventType_13(12);
    noEvents_0_0.set(EventType_13);
    EvntGrp_NoEvents_13.insert(EventType_13.getString());
    all_values.push_back(EvntGrp_NoEvents_13);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::CollateralAssignment::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_14;
    FIX::EventDate EventDate_14("LOCALMKTDATE_1415197236");
    noEvents_0_1.set(EventDate_14);
    EvntGrp_NoEvents_14.insert(EventDate_14.getString());
    FIX::EventPx EventPx_14;
    EventPx_14.setString("3208208");
    noEvents_0_1.set(EventPx_14);
    EvntGrp_NoEvents_14.insert(EventPx_14.getString());
    FIX::EventText EventText_14("STRING_875487270");
    noEvents_0_1.set(EventText_14);
    EvntGrp_NoEvents_14.insert(EventText_14.getString());
    FIX::EventTime EventTime_14(FIX::UTCTIMESTAMP(18, 28, 26, 22, 22003));
    noEvents_0_1.set(EventTime_14);
    EvntGrp_NoEvents_14.insert(EventTime_14.getString());
    FIX::EventType EventType_14(14);
    noEvents_0_1.set(EventType_14);
    EvntGrp_NoEvents_14.insert(EventType_14.getString());
    all_values.push_back(EvntGrp_NoEvents_14);

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::CollateralAssignment::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_12;
    FIX::InstrumentPartyID InstrumentPartyID_12("STRING_251287918");
    noInstrumentParties_0_0.set(InstrumentPartyID_12);
    InstrumentParties_NoInstrumentParties_12.insert(InstrumentPartyID_12.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_12('2');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_12);
    InstrumentParties_NoInstrumentParties_12.insert(InstrumentPartyIDSource_12.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_12(1841050682);
    noInstrumentParties_0_0.set(InstrumentPartyRole_12);
    InstrumentParties_NoInstrumentParties_12.insert(InstrumentPartyRole_12.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_12);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CollateralAssignment::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_20;
      FIX::InstrumentPartySubID InstrumentPartySubID_20("STRING_621038659");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_20);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_20.insert(InstrumentPartySubID_20.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_20(89320525);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_20);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_20.insert(InstrumentPartySubIDType_20.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_20);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::CollateralAssignment::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_21;
      FIX::InstrumentPartySubID InstrumentPartySubID_21("STRING_381856857");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_21);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_21.insert(InstrumentPartySubID_21.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_21(528873484);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_21);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_21.insert(InstrumentPartySubIDType_21.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_21);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::CollateralAssignment::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_13;
    FIX::InstrumentPartyID InstrumentPartyID_13("STRING_1777876211");
    noInstrumentParties_0_1.set(InstrumentPartyID_13);
    InstrumentParties_NoInstrumentParties_13.insert(InstrumentPartyID_13.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_13('5');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_13);
    InstrumentParties_NoInstrumentParties_13.insert(InstrumentPartyIDSource_13.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_13(1399665301);
    noInstrumentParties_0_1.set(InstrumentPartyRole_13);
    InstrumentParties_NoInstrumentParties_13.insert(InstrumentPartyRole_13.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_13);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CollateralAssignment::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_22;
      FIX::InstrumentPartySubID InstrumentPartySubID_22("STRING_646675532");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_22);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_22.insert(InstrumentPartySubID_22.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_22(1823024043);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_22);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_22.insert(InstrumentPartySubIDType_22.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_22);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::CollateralAssignment::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_23;
      FIX::InstrumentPartySubID InstrumentPartySubID_23("STRING_1315381113");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_23);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_23.insert(InstrumentPartySubID_23.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_23(1142737387);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_23);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_23.insert(InstrumentPartySubIDType_23.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_23);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::CollateralAssignment::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_16;
    FIX::SecurityAltID SecurityAltID_16("STRING_1642890790");
    noSecurityAltID_0_0.set(SecurityAltID_16);
    SecAltIDGrp_NoSecurityAltID_16.insert(SecurityAltID_16.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_16("STRING_2115227078");
    noSecurityAltID_0_0.set(SecurityAltIDSource_16);
    SecAltIDGrp_NoSecurityAltID_16.insert(SecurityAltIDSource_16.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_16);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::CollateralAssignment::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_17;
    FIX::SecurityAltID SecurityAltID_17("STRING_2026993781");
    noSecurityAltID_0_1.set(SecurityAltID_17);
    SecAltIDGrp_NoSecurityAltID_17.insert(SecurityAltID_17.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_17("STRING_1963711632");
    noSecurityAltID_0_1.set(SecurityAltIDSource_17);
    SecAltIDGrp_NoSecurityAltID_17.insert(SecurityAltIDSource_17.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_17);

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::CollateralAssignment::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_18;
    FIX::SecurityAltID SecurityAltID_18("STRING_843230700");
    noSecurityAltID_0_2.set(SecurityAltID_18);
    SecAltIDGrp_NoSecurityAltID_18.insert(SecurityAltID_18.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_18("STRING_1621049979");
    noSecurityAltID_0_2.set(SecurityAltIDSource_18);
    SecAltIDGrp_NoSecurityAltID_18.insert(SecurityAltIDSource_18.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_18);

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_14;
  FIX::SecurityXML SecurityXML_15("XMLDATA_1390444330");
  msg.set(SecurityXML_15);
  FIX::SecurityXMLLen SecurityXMLLen_7(2030841089);
  msg.set(SecurityXMLLen_7);
  FIX::SecurityXMLSchema SecurityXMLSchema_7("STRING_1022203377");
  msg.set(SecurityXMLSchema_7);
  SecurityXML_14.insert(SecurityXMLSchema_7.getString());
  all_values.push_back(SecurityXML_14);

  // MiscFeesGrp
  // Group MiscFeesGrp.NoMiscFees
  {
    FIX50SP2::CollateralAssignment::NoMiscFees noMiscFees_0_0;
    // MiscFeesGrp.NoMiscFees
    multiset<string> MiscFeesGrp_NoMiscFees_10;
    FIX::MiscFeeAmt MiscFeeAmt_10;
    MiscFeeAmt_10.setString("13629176");
    noMiscFees_0_0.set(MiscFeeAmt_10);
    MiscFeesGrp_NoMiscFees_10.insert(MiscFeeAmt_10.getString());
    FIX::MiscFeeBasis MiscFeeBasis_10(1);
    noMiscFees_0_0.set(MiscFeeBasis_10);
    MiscFeesGrp_NoMiscFees_10.insert(MiscFeeBasis_10.getString());
    FIX::MiscFeeCurr MiscFeeCurr_10("CHF");
    noMiscFees_0_0.set(MiscFeeCurr_10);
    MiscFeesGrp_NoMiscFees_10.insert(MiscFeeCurr_10.getString());
    FIX::MiscFeeType MiscFeeType_10("STRING_11");
    noMiscFees_0_0.set(MiscFeeType_10);
    MiscFeesGrp_NoMiscFees_10.insert(MiscFeeType_10.getString());
    all_values.push_back(MiscFeesGrp_NoMiscFees_10);

    msg.addGroup(noMiscFees_0_0);
  }
  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::CollateralAssignment::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_22;
    FIX::PartyID PartyID_22("STRING_2107315283");
    noPartyIDs_0_0.set(PartyID_22);
    Parties_NoPartyIDs_22.insert(PartyID_22.getString());
    FIX::PartyIDSource PartyIDSource_22('I');
    noPartyIDs_0_0.set(PartyIDSource_22);
    Parties_NoPartyIDs_22.insert(PartyIDSource_22.getString());
    FIX::PartyRole PartyRole_22(70);
    noPartyIDs_0_0.set(PartyRole_22);
    Parties_NoPartyIDs_22.insert(PartyRole_22.getString());
    all_values.push_back(Parties_NoPartyIDs_22);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::CollateralAssignment::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_48;
      FIX::PartySubID PartySubID_48("STRING_1467067705");
      noPartySubIDs_0_1_0.set(PartySubID_48);
      PtysSubGrp_NoPartySubIDs_48.insert(PartySubID_48.getString());
      FIX::PartySubIDType PartySubIDType_48(16);
      noPartySubIDs_0_1_0.set(PartySubIDType_48);
      PtysSubGrp_NoPartySubIDs_48.insert(PartySubIDType_48.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_48);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::CollateralAssignment::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_49;
      FIX::PartySubID PartySubID_49("STRING_1827028372");
      noPartySubIDs_0_1_1.set(PartySubID_49);
      PtysSubGrp_NoPartySubIDs_49.insert(PartySubID_49.getString());
      FIX::PartySubIDType PartySubIDType_49(26);
      noPartySubIDs_0_1_1.set(PartySubIDType_49);
      PtysSubGrp_NoPartySubIDs_49.insert(PartySubIDType_49.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_49);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::CollateralAssignment::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_50;
      FIX::PartySubID PartySubID_50("STRING_79373562");
      noPartySubIDs_0_1_2.set(PartySubID_50);
      PtysSubGrp_NoPartySubIDs_50.insert(PartySubID_50.getString());
      FIX::PartySubIDType PartySubIDType_50(19);
      noPartySubIDs_0_1_2.set(PartySubIDType_50);
      PtysSubGrp_NoPartySubIDs_50.insert(PartySubIDType_50.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_50);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  // SettlInstructionsData
  multiset<string> SettlInstructionsData_5;
  FIX::SettlDeliveryType SettlDeliveryType_5(0);
  msg.set(SettlDeliveryType_5);
  SettlInstructionsData_5.insert(SettlDeliveryType_5.getString());
  FIX::StandInstDbID StandInstDbID_5("STRING_1902397605");
  msg.set(StandInstDbID_5);
  SettlInstructionsData_5.insert(StandInstDbID_5.getString());
  FIX::StandInstDbName StandInstDbName_5("STRING_848508911");
  msg.set(StandInstDbName_5);
  SettlInstructionsData_5.insert(StandInstDbName_5.getString());
  FIX::StandInstDbType StandInstDbType_5(3);
  msg.set(StandInstDbType_5);
  SettlInstructionsData_5.insert(StandInstDbType_5.getString());
  all_values.push_back(SettlInstructionsData_5);

  // DlvyInstGrp
  // Group DlvyInstGrp.NoDlvyInst
  {
    FIX50SP2::CollateralAssignment::NoDlvyInst noDlvyInst_0_0;
    // DlvyInstGrp.NoDlvyInst
    multiset<string> DlvyInstGrp_NoDlvyInst_10;
    FIX::DlvyInstType DlvyInstType_10('S');
    noDlvyInst_0_0.set(DlvyInstType_10);
    DlvyInstGrp_NoDlvyInst_10.insert(DlvyInstType_10.getString());
    FIX::SettlInstSource SettlInstSource_10('3');
    noDlvyInst_0_0.set(SettlInstSource_10);
    DlvyInstGrp_NoDlvyInst_10.insert(SettlInstSource_10.getString());
    all_values.push_back(DlvyInstGrp_NoDlvyInst_10);

    // SettlParties
    // Group SettlParties.NoSettlPartyIDs
    {
      FIX50SP2::CollateralAssignment::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_1_0;
      // SettlParties.NoSettlPartyIDs
      multiset<string> SettlParties_NoSettlPartyIDs_19;
      FIX::SettlPartyID SettlPartyID_19("STRING_160144037");
      noSettlPartyIDs_0_1_0.set(SettlPartyID_19);
      SettlParties_NoSettlPartyIDs_19.insert(SettlPartyID_19.getString());
      FIX::SettlPartyIDSource SettlPartyIDSource_19('3');
      noSettlPartyIDs_0_1_0.set(SettlPartyIDSource_19);
      SettlParties_NoSettlPartyIDs_19.insert(SettlPartyIDSource_19.getString());
      FIX::SettlPartyRole SettlPartyRole_19(1867270614);
      noSettlPartyIDs_0_1_0.set(SettlPartyRole_19);
      SettlParties_NoSettlPartyIDs_19.insert(SettlPartyRole_19.getString());
      all_values.push_back(SettlParties_NoSettlPartyIDs_19);

      // SettlPtysSubGrp
      // Group SettlPtysSubGrp.NoSettlPartySubIDs
      {
        FIX50SP2::CollateralAssignment::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_2_0;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_37;
        FIX::SettlPartySubID SettlPartySubID_37("STRING_228899887");
        noSettlPartySubIDs_0_0_2_0.set(SettlPartySubID_37);
        SettlPtysSubGrp_NoSettlPartySubIDs_37.insert(SettlPartySubID_37.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_37(741990343);
        noSettlPartySubIDs_0_0_2_0.set(SettlPartySubIDType_37);
        SettlPtysSubGrp_NoSettlPartySubIDs_37.insert(SettlPartySubIDType_37.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_37);

        noSettlPartyIDs_0_1_0.addGroup(noSettlPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::CollateralAssignment::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_2_1;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_38;
        FIX::SettlPartySubID SettlPartySubID_38("STRING_1502099180");
        noSettlPartySubIDs_0_0_2_1.set(SettlPartySubID_38);
        SettlPtysSubGrp_NoSettlPartySubIDs_38.insert(SettlPartySubID_38.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_38(1591817585);
        noSettlPartySubIDs_0_0_2_1.set(SettlPartySubIDType_38);
        SettlPtysSubGrp_NoSettlPartySubIDs_38.insert(SettlPartySubIDType_38.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_38);

        noSettlPartyIDs_0_1_0.addGroup(noSettlPartySubIDs_0_0_2_1);
      }
      noDlvyInst_0_0.addGroup(noSettlPartyIDs_0_1_0);
    }
    msg.addGroup(noDlvyInst_0_0);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_3;
  FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_3("USD");
  msg.set(BenchmarkCurveCurrency_3);
  SpreadOrBenchmarkCurveData_3.insert(BenchmarkCurveCurrency_3.getString());
  FIX::BenchmarkCurveName BenchmarkCurveName_3("STRING_FutureSWAP");
  msg.set(BenchmarkCurveName_3);
  SpreadOrBenchmarkCurveData_3.insert(BenchmarkCurveName_3.getString());
  FIX::BenchmarkCurvePoint BenchmarkCurvePoint_3("STRING_1826237318");
  msg.set(BenchmarkCurvePoint_3);
  SpreadOrBenchmarkCurveData_3.insert(BenchmarkCurvePoint_3.getString());
  FIX::BenchmarkPrice BenchmarkPrice_3;
  BenchmarkPrice_3.setString("6124613");
  msg.set(BenchmarkPrice_3);
  SpreadOrBenchmarkCurveData_3.insert(BenchmarkPrice_3.getString());
  FIX::BenchmarkPriceType BenchmarkPriceType_3(1817913822);
  msg.set(BenchmarkPriceType_3);
  SpreadOrBenchmarkCurveData_3.insert(BenchmarkPriceType_3.getString());
  FIX::BenchmarkSecurityID BenchmarkSecurityID_3("STRING_763964518");
  msg.set(BenchmarkSecurityID_3);
  SpreadOrBenchmarkCurveData_3.insert(BenchmarkSecurityID_3.getString());
  FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_3("STRING_910779747");
  msg.set(BenchmarkSecurityIDSource_3);
  SpreadOrBenchmarkCurveData_3.insert(BenchmarkSecurityIDSource_3.getString());
  FIX::Spread Spread_3;
  Spread_3.setString("18670659");
  msg.set(Spread_3);
  SpreadOrBenchmarkCurveData_3.insert(Spread_3.getString());
  all_values.push_back(SpreadOrBenchmarkCurveData_3);

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::CollateralAssignment::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_5;
    FIX::StipulationType StipulationType_5("STRING_REFPRIN");
    noStipulations_0_0.set(StipulationType_5);
    Stipulations_NoStipulations_5.insert(StipulationType_5.getString());
    FIX::StipulationValue StipulationValue_5("STRING_1546610707");
    noStipulations_0_0.set(StipulationValue_5);
    Stipulations_NoStipulations_5.insert(StipulationValue_5.getString());
    all_values.push_back(Stipulations_NoStipulations_5);

    msg.addGroup(noStipulations_0_0);
  }
  // TrdCollGrp
  // Group TrdCollGrp.NoTrades
  {
    FIX50SP2::CollateralAssignment::NoTrades noTrades_0_0;
    // TrdCollGrp.NoTrades
    multiset<string> TrdCollGrp_NoTrades_0;
    FIX::SecondaryTradeReportID SecondaryTradeReportID_0("STRING_1817345218");
    noTrades_0_0.set(SecondaryTradeReportID_0);
    TrdCollGrp_NoTrades_0.insert(SecondaryTradeReportID_0.getString());
    FIX::TradeReportID TradeReportID_0("STRING_1079738505");
    noTrades_0_0.set(TradeReportID_0);
    TrdCollGrp_NoTrades_0.insert(TradeReportID_0.getString());
    all_values.push_back(TrdCollGrp_NoTrades_0);

    msg.addGroup(noTrades_0_0);
  }
  {
    FIX50SP2::CollateralAssignment::NoTrades noTrades_0_1;
    // TrdCollGrp.NoTrades
    multiset<string> TrdCollGrp_NoTrades_1;
    FIX::SecondaryTradeReportID SecondaryTradeReportID_1("STRING_515502196");
    noTrades_0_1.set(SecondaryTradeReportID_1);
    TrdCollGrp_NoTrades_1.insert(SecondaryTradeReportID_1.getString());
    FIX::TradeReportID TradeReportID_1("STRING_1572259175");
    noTrades_0_1.set(TradeReportID_1);
    TrdCollGrp_NoTrades_1.insert(TradeReportID_1.getString());
    all_values.push_back(TrdCollGrp_NoTrades_1);

    msg.addGroup(noTrades_0_1);
  }
  {
    FIX50SP2::CollateralAssignment::NoTrades noTrades_0_2;
    // TrdCollGrp.NoTrades
    multiset<string> TrdCollGrp_NoTrades_2;
    FIX::SecondaryTradeReportID SecondaryTradeReportID_2("STRING_1928247416");
    noTrades_0_2.set(SecondaryTradeReportID_2);
    TrdCollGrp_NoTrades_2.insert(SecondaryTradeReportID_2.getString());
    FIX::TradeReportID TradeReportID_2("STRING_50070512");
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
    FIX::DeskOrderHandlingInst DeskOrderHandlingInst_0("MULTIPLESTRINGVALUE_MOC");
    noTrdRegTimestamps_0_0.set(DeskOrderHandlingInst_0);
    TrdRegTimestamps_NoTrdRegTimestamps_0.insert(DeskOrderHandlingInst_0.getString());
    FIX::DeskType DeskType_0("STRING_AR");
    noTrdRegTimestamps_0_0.set(DeskType_0);
    TrdRegTimestamps_NoTrdRegTimestamps_0.insert(DeskType_0.getString());
    FIX::DeskTypeSource DeskTypeSource_0(1);
    noTrdRegTimestamps_0_0.set(DeskTypeSource_0);
    TrdRegTimestamps_NoTrdRegTimestamps_0.insert(DeskTypeSource_0.getString());
    FIX::TrdRegTimestamp TrdRegTimestamp_0(FIX::UTCTIMESTAMP(23, 18, 47, 18, 62005));
    noTrdRegTimestamps_0_0.set(TrdRegTimestamp_0);
    TrdRegTimestamps_NoTrdRegTimestamps_0.insert(TrdRegTimestamp_0.getString());
    FIX::TrdRegTimestampOrigin TrdRegTimestampOrigin_0("STRING_1718642176");
    noTrdRegTimestamps_0_0.set(TrdRegTimestampOrigin_0);
    TrdRegTimestamps_NoTrdRegTimestamps_0.insert(TrdRegTimestampOrigin_0.getString());
    FIX::TrdRegTimestampType TrdRegTimestampType_0(2);
    noTrdRegTimestamps_0_0.set(TrdRegTimestampType_0);
    TrdRegTimestamps_NoTrdRegTimestamps_0.insert(TrdRegTimestampType_0.getString());
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_0);

    msg.addGroup(noTrdRegTimestamps_0_0);
  }
  {
    FIX50SP2::CollateralAssignment::NoTrdRegTimestamps noTrdRegTimestamps_0_1;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_1;
    FIX::DeskOrderHandlingInst DeskOrderHandlingInst_1("MULTIPLESTRINGVALUE_FOK");
    noTrdRegTimestamps_0_1.set(DeskOrderHandlingInst_1);
    TrdRegTimestamps_NoTrdRegTimestamps_1.insert(DeskOrderHandlingInst_1.getString());
    FIX::DeskType DeskType_1("STRING_AR");
    noTrdRegTimestamps_0_1.set(DeskType_1);
    TrdRegTimestamps_NoTrdRegTimestamps_1.insert(DeskType_1.getString());
    FIX::DeskTypeSource DeskTypeSource_1(1);
    noTrdRegTimestamps_0_1.set(DeskTypeSource_1);
    TrdRegTimestamps_NoTrdRegTimestamps_1.insert(DeskTypeSource_1.getString());
    FIX::TrdRegTimestamp TrdRegTimestamp_1(FIX::UTCTIMESTAMP(9, 32, 20, 21, 52016));
    noTrdRegTimestamps_0_1.set(TrdRegTimestamp_1);
    TrdRegTimestamps_NoTrdRegTimestamps_1.insert(TrdRegTimestamp_1.getString());
    FIX::TrdRegTimestampOrigin TrdRegTimestampOrigin_1("STRING_218380284");
    noTrdRegTimestamps_0_1.set(TrdRegTimestampOrigin_1);
    TrdRegTimestamps_NoTrdRegTimestamps_1.insert(TrdRegTimestampOrigin_1.getString());
    FIX::TrdRegTimestampType TrdRegTimestampType_1(5);
    noTrdRegTimestamps_0_1.set(TrdRegTimestampType_1);
    TrdRegTimestamps_NoTrdRegTimestamps_1.insert(TrdRegTimestampType_1.getString());
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_1);

    msg.addGroup(noTrdRegTimestamps_0_1);
  }
  {
    FIX50SP2::CollateralAssignment::NoTrdRegTimestamps noTrdRegTimestamps_0_2;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_2;
    FIX::DeskOrderHandlingInst DeskOrderHandlingInst_2("MULTIPLESTRINGVALUE_IO");
    noTrdRegTimestamps_0_2.set(DeskOrderHandlingInst_2);
    TrdRegTimestamps_NoTrdRegTimestamps_2.insert(DeskOrderHandlingInst_2.getString());
    FIX::DeskType DeskType_2("STRING_A");
    noTrdRegTimestamps_0_2.set(DeskType_2);
    TrdRegTimestamps_NoTrdRegTimestamps_2.insert(DeskType_2.getString());
    FIX::DeskTypeSource DeskTypeSource_2(1);
    noTrdRegTimestamps_0_2.set(DeskTypeSource_2);
    TrdRegTimestamps_NoTrdRegTimestamps_2.insert(DeskTypeSource_2.getString());
    FIX::TrdRegTimestamp TrdRegTimestamp_2(FIX::UTCTIMESTAMP(21, 28, 2, 19, 112000));
    noTrdRegTimestamps_0_2.set(TrdRegTimestamp_2);
    TrdRegTimestamps_NoTrdRegTimestamps_2.insert(TrdRegTimestamp_2.getString());
    FIX::TrdRegTimestampOrigin TrdRegTimestampOrigin_2("STRING_1488386238");
    noTrdRegTimestamps_0_2.set(TrdRegTimestampOrigin_2);
    TrdRegTimestamps_NoTrdRegTimestamps_2.insert(TrdRegTimestampOrigin_2.getString());
    FIX::TrdRegTimestampType TrdRegTimestampType_2(6);
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
    FIX::CollAction CollAction_0(0);
    noUnderlyings_0_0.set(CollAction_0);
    UndInstrmtCollGrp_NoUnderlyings_0.insert(CollAction_0.getString());
    all_values.push_back(UndInstrmtCollGrp_NoUnderlyings_0);

    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_8;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_8("DATA_155628840");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_8);
    UnderlyingInstrument_8.insert(EncodedUnderlyingIssuer_8.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_8(272262141);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_8);
    UnderlyingInstrument_8.insert(EncodedUnderlyingIssuerLen_8.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_8("DATA_218858928");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_8);
    UnderlyingInstrument_8.insert(EncodedUnderlyingSecurityDesc_8.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_8(1874271016);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_8);
    UnderlyingInstrument_8.insert(EncodedUnderlyingSecurityDescLen_8.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_8;
    UnderlyingAdjustedQuantity_8.setString("19302159");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_8);
    UnderlyingInstrument_8.insert(UnderlyingAdjustedQuantity_8.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_8;
    UnderlyingAllocationPercent_8.setString("45.980000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_8);
    UnderlyingInstrument_8.insert(UnderlyingAllocationPercent_8.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_8;
    UnderlyingAttachmentPoint_8.setString("80.830000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_8);
    UnderlyingInstrument_8.insert(UnderlyingAttachmentPoint_8.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_8("STRING_1119439852");
    noUnderlyings_0_0.set(UnderlyingCFICode_8);
    UnderlyingInstrument_8.insert(UnderlyingCFICode_8.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_8("STRING_786771590");
    noUnderlyings_0_0.set(UnderlyingCPProgram_8);
    UnderlyingInstrument_8.insert(UnderlyingCPProgram_8.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_8("STRING_108215324");
    noUnderlyings_0_0.set(UnderlyingCPRegType_8);
    UnderlyingInstrument_8.insert(UnderlyingCPRegType_8.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_8;
    UnderlyingCapValue_8.setString("10726282");
    noUnderlyings_0_0.set(UnderlyingCapValue_8);
    UnderlyingInstrument_8.insert(UnderlyingCapValue_8.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_8;
    UnderlyingCashAmount_8.setString("1402546");
    noUnderlyings_0_0.set(UnderlyingCashAmount_8);
    UnderlyingInstrument_8.insert(UnderlyingCashAmount_8.getString());
    FIX::UnderlyingCashType UnderlyingCashType_8("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_8);
    UnderlyingInstrument_8.insert(UnderlyingCashType_8.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_8;
    UnderlyingContractMultiplier_8.setString("11093651");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_8);
    UnderlyingInstrument_8.insert(UnderlyingContractMultiplier_8.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_8(1231709430);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_8);
    UnderlyingInstrument_8.insert(UnderlyingContractMultiplierUnit_8.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_8("COUNTRY_1145848834");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_8);
    UnderlyingInstrument_8.insert(UnderlyingCountryOfIssue_8.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_8("LOCALMKTDATE_1122289776");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_8);
    UnderlyingInstrument_8.insert(UnderlyingCouponPaymentDate_8.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_8;
    UnderlyingCouponRate_8.setString("57.480000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_8);
    UnderlyingInstrument_8.insert(UnderlyingCouponRate_8.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_8("STRING_296483975");
    noUnderlyings_0_0.set(UnderlyingCreditRating_8);
    UnderlyingInstrument_8.insert(UnderlyingCreditRating_8.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_8("EUR");
    noUnderlyings_0_0.set(UnderlyingCurrency_8);
    UnderlyingInstrument_8.insert(UnderlyingCurrency_8.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_8;
    UnderlyingCurrentValue_8.setString("13753665");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_8);
    UnderlyingInstrument_8.insert(UnderlyingCurrentValue_8.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_8;
    UnderlyingDetachmentPoint_8.setString("1.930000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_8);
    UnderlyingInstrument_8.insert(UnderlyingDetachmentPoint_8.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_8;
    UnderlyingDirtyPrice_8.setString("92118");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_8);
    UnderlyingInstrument_8.insert(UnderlyingDirtyPrice_8.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_8;
    UnderlyingEndPrice_8.setString("4314452");
    noUnderlyings_0_0.set(UnderlyingEndPrice_8);
    UnderlyingInstrument_8.insert(UnderlyingEndPrice_8.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_8;
    UnderlyingEndValue_8.setString("2126097");
    noUnderlyings_0_0.set(UnderlyingEndValue_8);
    UnderlyingInstrument_8.insert(UnderlyingEndValue_8.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_8(24496357);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_8);
    UnderlyingInstrument_8.insert(UnderlyingExerciseStyle_8.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_8;
    UnderlyingFXRate_8.setString("19198315");
    noUnderlyings_0_0.set(UnderlyingFXRate_8);
    UnderlyingInstrument_8.insert(UnderlyingFXRate_8.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_8('M');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_8);
    UnderlyingInstrument_8.insert(UnderlyingFXRateCalc_8.getString());
    FIX::UnderlyingFactor UnderlyingFactor_8;
    UnderlyingFactor_8.setString("19447581");
    noUnderlyings_0_0.set(UnderlyingFactor_8);
    UnderlyingInstrument_8.insert(UnderlyingFactor_8.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_8(948662671);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_8);
    UnderlyingInstrument_8.insert(UnderlyingFlowScheduleType_8.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_8("STRING_397042829");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_8);
    UnderlyingInstrument_8.insert(UnderlyingInstrRegistry_8.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_8("LOCALMKTDATE_69536666");
    noUnderlyings_0_0.set(UnderlyingIssueDate_8);
    UnderlyingInstrument_8.insert(UnderlyingIssueDate_8.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_8("STRING_1167521599");
    noUnderlyings_0_0.set(UnderlyingIssuer_8);
    UnderlyingInstrument_8.insert(UnderlyingIssuer_8.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_8("STRING_123830197");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_8);
    UnderlyingInstrument_8.insert(UnderlyingLocaleOfIssue_8.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_8("LOCALMKTDATE_1999752652");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_8);
    UnderlyingInstrument_8.insert(UnderlyingMaturityDate_8.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_8("MONTHYEAR_1364106197");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_8);
    UnderlyingInstrument_8.insert(UnderlyingMaturityMonthYear_8.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_8("TZTIMEONLY_1279858280");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_8);
    UnderlyingInstrument_8.insert(UnderlyingMaturityTime_8.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_8;
    UnderlyingNotionalPercentageOutstanding_8.setString("88.560000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_8);
    UnderlyingInstrument_8.insert(UnderlyingNotionalPercentageOutstanding_8.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_8('3');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_8);
    UnderlyingInstrument_8.insert(UnderlyingOptAttribute_8.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_8;
    UnderlyingOriginalNotionalPercentageOutstanding_8.setString("36.040000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_8);
    UnderlyingInstrument_8.insert(UnderlyingOriginalNotionalPercentageOutstanding_8.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_8("STRING_2044337092");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_8);
    UnderlyingInstrument_8.insert(UnderlyingPriceUnitOfMeasure_8.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_8;
    UnderlyingPriceUnitOfMeasureQty_8.setString("1436488");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_8);
    UnderlyingInstrument_8.insert(UnderlyingPriceUnitOfMeasureQty_8.getString());
    FIX::UnderlyingProduct UnderlyingProduct_8(168058506);
    noUnderlyings_0_0.set(UnderlyingProduct_8);
    UnderlyingInstrument_8.insert(UnderlyingProduct_8.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_8(1006218641);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_8);
    UnderlyingInstrument_8.insert(UnderlyingPutOrCall_8.getString());
    FIX::UnderlyingPx UnderlyingPx_8;
    UnderlyingPx_8.setString("13753582");
    noUnderlyings_0_0.set(UnderlyingPx_8);
    UnderlyingInstrument_8.insert(UnderlyingPx_8.getString());
    FIX::UnderlyingQty UnderlyingQty_8;
    UnderlyingQty_8.setString("13139073");
    noUnderlyings_0_0.set(UnderlyingQty_8);
    UnderlyingInstrument_8.insert(UnderlyingQty_8.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_8("LOCALMKTDATE_2128508417");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_8);
    UnderlyingInstrument_8.insert(UnderlyingRedemptionDate_8.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_8("STRING_1220900353");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_8);
    UnderlyingInstrument_8.insert(UnderlyingRepoCollateralSecurityType_8.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_8;
    UnderlyingRepurchaseRate_8.setString("13.150000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_8);
    UnderlyingInstrument_8.insert(UnderlyingRepurchaseRate_8.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_8(1631741322);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_8);
    UnderlyingInstrument_8.insert(UnderlyingRepurchaseTerm_8.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_8("STRING_1252534299");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_8);
    UnderlyingInstrument_8.insert(UnderlyingRestructuringType_8.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_8("STRING_838274200");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_8);
    UnderlyingInstrument_8.insert(UnderlyingSecurityDesc_8.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_8("EXCHANGE_1713471516");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_8);
    UnderlyingInstrument_8.insert(UnderlyingSecurityExchange_8.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_8("STRING_1261746118");
    noUnderlyings_0_0.set(UnderlyingSecurityID_8);
    UnderlyingInstrument_8.insert(UnderlyingSecurityID_8.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_8("STRING_1269719464");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_8);
    UnderlyingInstrument_8.insert(UnderlyingSecurityIDSource_8.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_8("STRING_1926081255");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_8);
    UnderlyingInstrument_8.insert(UnderlyingSecuritySubType_8.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_8("STRING_1286242476");
    noUnderlyings_0_0.set(UnderlyingSecurityType_8);
    UnderlyingInstrument_8.insert(UnderlyingSecurityType_8.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_8("STRING_1042067318");
    noUnderlyings_0_0.set(UnderlyingSeniority_8);
    UnderlyingInstrument_8.insert(UnderlyingSeniority_8.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_8("STRING_20011596");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_8);
    UnderlyingInstrument_8.insert(UnderlyingSettlMethod_8.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_8(5);
    noUnderlyings_0_0.set(UnderlyingSettlementType_8);
    UnderlyingInstrument_8.insert(UnderlyingSettlementType_8.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_8;
    UnderlyingStartValue_8.setString("19907299");
    noUnderlyings_0_0.set(UnderlyingStartValue_8);
    UnderlyingInstrument_8.insert(UnderlyingStartValue_8.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_8("STRING_417054425");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_8);
    UnderlyingInstrument_8.insert(UnderlyingStateOrProvinceOfIssue_8.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_8("CHF");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_8);
    UnderlyingInstrument_8.insert(UnderlyingStrikeCurrency_8.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_8;
    UnderlyingStrikePrice_8.setString("5408846");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_8);
    UnderlyingInstrument_8.insert(UnderlyingStrikePrice_8.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_8("STRING_1005322672");
    noUnderlyings_0_0.set(UnderlyingSymbol_8);
    UnderlyingInstrument_8.insert(UnderlyingSymbol_8.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_8("STRING_227390490");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_8);
    UnderlyingInstrument_8.insert(UnderlyingSymbolSfx_8.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_8("STRING_1820742902");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_8);
    UnderlyingInstrument_8.insert(UnderlyingTimeUnit_8.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_8("STRING_1977031528");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_8);
    UnderlyingInstrument_8.insert(UnderlyingUnitOfMeasure_8.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_8;
    UnderlyingUnitOfMeasureQty_8.setString("2307846");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_8);
    UnderlyingInstrument_8.insert(UnderlyingUnitOfMeasureQty_8.getString());
    all_values.push_back(UnderlyingInstrument_8);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::CollateralAssignment::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_15;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_15("STRING_1873884972");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_15);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_15.insert(UnderlyingSecurityAltID_15.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_15("STRING_374433453");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_15);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_15.insert(UnderlyingSecurityAltIDSource_15.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_15);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::CollateralAssignment::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_16;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_16("STRING_1229391365");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_16);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_16.insert(UnderlyingSecurityAltID_16.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_16("STRING_732619965");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_16);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_16.insert(UnderlyingSecurityAltIDSource_16.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_16);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::CollateralAssignment::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_17;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_17("STRING_1749791706");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltID_17);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_17.insert(UnderlyingSecurityAltID_17.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_17("STRING_395815057");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltIDSource_17);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_17.insert(UnderlyingSecurityAltIDSource_17.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_17);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::CollateralAssignment::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_12;
      FIX::UnderlyingStipType UnderlyingStipType_12("STRING_823208411");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_12);
      UnderlyingStipulations_NoUnderlyingStips_12.insert(UnderlyingStipType_12.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_12("STRING_2006206372");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_12);
      UnderlyingStipulations_NoUnderlyingStips_12.insert(UnderlyingStipValue_12.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_12);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::CollateralAssignment::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_13;
      FIX::UnderlyingStipType UnderlyingStipType_13("STRING_197902409");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_13);
      UnderlyingStipulations_NoUnderlyingStips_13.insert(UnderlyingStipType_13.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_13("STRING_2075742710");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_13);
      UnderlyingStipulations_NoUnderlyingStips_13.insert(UnderlyingStipValue_13.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_13);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::CollateralAssignment::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_15;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_15("STRING_1911373925");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_15);
      UndlyInstrumentParties_NoUndlyInstrumentParties_15.insert(UnderlyingInstrumentPartyID_15.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_15('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_15);
      UndlyInstrumentParties_NoUndlyInstrumentParties_15.insert(UnderlyingInstrumentPartyIDSource_15.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_15(1966716389);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_15);
      UndlyInstrumentParties_NoUndlyInstrumentParties_15.insert(UnderlyingInstrumentPartyRole_15.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_15);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralAssignment::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_29;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_29("STRING_328764009");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_29);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_29.insert(UnderlyingInstrumentPartySubID_29.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_29(861300060);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_29);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_29.insert(UnderlyingInstrumentPartySubIDType_29.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_29);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::CollateralAssignment::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_30;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_30("STRING_1709983129");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_30);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_30.insert(UnderlyingInstrumentPartySubID_30.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_30(1412281010);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_30);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_30.insert(UnderlyingInstrumentPartySubIDType_30.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_30);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::CollateralAssignment::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_16;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_16("STRING_704546401");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_16);
      UndlyInstrumentParties_NoUndlyInstrumentParties_16.insert(UnderlyingInstrumentPartyID_16.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_16('2');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_16);
      UndlyInstrumentParties_NoUndlyInstrumentParties_16.insert(UnderlyingInstrumentPartyIDSource_16.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_16(417851030);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_16);
      UndlyInstrumentParties_NoUndlyInstrumentParties_16.insert(UnderlyingInstrumentPartyRole_16.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_16);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralAssignment::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_31;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_31("STRING_520438529");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_31);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_31.insert(UnderlyingInstrumentPartySubID_31.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_31(1423173702);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_31);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_31.insert(UnderlyingInstrumentPartySubIDType_31.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_31);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::CollateralAssignment::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_32;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_32("STRING_1942704833");
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubID_32);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_32.insert(UnderlyingInstrumentPartySubID_32.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_32(193697784);
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubIDType_32);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_32.insert(UnderlyingInstrumentPartySubIDType_32.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_32);

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
