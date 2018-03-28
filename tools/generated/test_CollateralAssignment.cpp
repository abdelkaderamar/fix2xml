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
  FIX::Account Account_4("STRING_596514755");
  msg.set(Account_4);
  CollateralAssignment_0.insert(Account_4.getString());
  FIX::AccountType AccountType_1(3);
  msg.set(AccountType_1);
  CollateralAssignment_0.insert(AccountType_1.getString());
  FIX::AccruedInterestAmt AccruedInterestAmt_3;
  AccruedInterestAmt_3.setString("20399486");
  msg.set(AccruedInterestAmt_3);
  CollateralAssignment_0.insert(AccruedInterestAmt_3.getString());
  FIX::CashOutstanding CashOutstanding_0;
  CashOutstanding_0.setString("13734611");
  msg.set(CashOutstanding_0);
  CollateralAssignment_0.insert(CashOutstanding_0.getString());
  FIX::ClOrdID ClOrdID_6("STRING_1877146159");
  msg.set(ClOrdID_6);
  CollateralAssignment_0.insert(ClOrdID_6.getString());
  FIX::ClearingBusinessDate ClearingBusinessDate_6("LOCALMKTDATE_1573962676");
  msg.set(ClearingBusinessDate_6);
  CollateralAssignment_0.insert(ClearingBusinessDate_6.getString());
  FIX::CollAsgnID CollAsgnID_0("STRING_1215246335");
  msg.set(CollAsgnID_0);
  CollateralAssignment_0.insert(CollAsgnID_0.getString());
  FIX::CollAsgnReason CollAsgnReason_0(5);
  msg.set(CollAsgnReason_0);
  CollateralAssignment_0.insert(CollAsgnReason_0.getString());
  FIX::CollAsgnRefID CollAsgnRefID_0("STRING_1321101266");
  msg.set(CollAsgnRefID_0);
  CollateralAssignment_0.insert(CollAsgnRefID_0.getString());
  FIX::CollAsgnTransType CollAsgnTransType_0(2);
  msg.set(CollAsgnTransType_0);
  CollateralAssignment_0.insert(CollAsgnTransType_0.getString());
  FIX::CollReqID CollReqID_0("STRING_882494727");
  msg.set(CollReqID_0);
  CollateralAssignment_0.insert(CollReqID_0.getString());
  FIX::Currency Currency_6("JPY");
  msg.set(Currency_6);
  CollateralAssignment_0.insert(Currency_6.getString());
  FIX::EncodedText EncodedText_15("DATA_113676496");
  msg.set(EncodedText_15);
  CollateralAssignment_0.insert(EncodedText_15.getString());
  FIX::EncodedTextLen EncodedTextLen_15(1630038764);
  msg.set(EncodedTextLen_15);
  CollateralAssignment_0.insert(EncodedTextLen_15.getString());
  FIX::EndAccruedInterestAmt EndAccruedInterestAmt_3;
  EndAccruedInterestAmt_3.setString("7092582");
  msg.set(EndAccruedInterestAmt_3);
  CollateralAssignment_0.insert(EndAccruedInterestAmt_3.getString());
  FIX::EndCash EndCash_3;
  EndCash_3.setString("4729820");
  msg.set(EndCash_3);
  CollateralAssignment_0.insert(EndCash_3.getString());
  FIX::ExpireTime ExpireTime_0(FIX::UTCTIMESTAMP(13, 26, 0, 0, 4, 2017));
  msg.set(ExpireTime_0);
  CollateralAssignment_0.insert(ExpireTime_0.getString());
  FIX::MarginExcess MarginExcess_0;
  MarginExcess_0.setString("20887414");
  msg.set(MarginExcess_0);
  CollateralAssignment_0.insert(MarginExcess_0.getString());
  FIX::OrderID OrderID_6("STRING_991670266");
  msg.set(OrderID_6);
  CollateralAssignment_0.insert(OrderID_6.getString());
  FIX::Price Price_4;
  Price_4.setString("125728");
  msg.set(Price_4);
  CollateralAssignment_0.insert(Price_4.getString());
  FIX::PriceType PriceType_6(5);
  msg.set(PriceType_6);
  CollateralAssignment_0.insert(PriceType_6.getString());
  FIX::QtyType QtyType_4(1);
  msg.set(QtyType_4);
  CollateralAssignment_0.insert(QtyType_4.getString());
  FIX::Quantity Quantity_5;
  Quantity_5.setString("664413");
  msg.set(Quantity_5);
  CollateralAssignment_0.insert(Quantity_5.getString());
  FIX::SecondaryClOrdID SecondaryClOrdID_6("STRING_784437919");
  msg.set(SecondaryClOrdID_6);
  CollateralAssignment_0.insert(SecondaryClOrdID_6.getString());
  FIX::SecondaryOrderID SecondaryOrderID_6("STRING_1485059274");
  msg.set(SecondaryOrderID_6);
  CollateralAssignment_0.insert(SecondaryOrderID_6.getString());
  FIX::SettlDate SettlDate_9("LOCALMKTDATE_388369881");
  msg.set(SettlDate_9);
  CollateralAssignment_0.insert(SettlDate_9.getString());
  FIX::SettlSessID SettlSessID_2("STRING_EOD");
  msg.set(SettlSessID_2);
  CollateralAssignment_0.insert(SettlSessID_2.getString());
  FIX::SettlSessSubID SettlSessSubID_1("STRING_711036803");
  msg.set(SettlSessSubID_1);
  CollateralAssignment_0.insert(SettlSessSubID_1.getString());
  FIX::Side Side_9('9');
  msg.set(Side_9);
  CollateralAssignment_0.insert(Side_9.getString());
  FIX::StartCash StartCash_3;
  StartCash_3.setString("1033819");
  msg.set(StartCash_3);
  CollateralAssignment_0.insert(StartCash_3.getString());
  FIX::Text Text_15("STRING_1926283138");
  msg.set(Text_15);
  CollateralAssignment_0.insert(Text_15.getString());
  FIX::TotalNetValue TotalNetValue_0;
  TotalNetValue_0.setString("14224287");
  msg.set(TotalNetValue_0);
  CollateralAssignment_0.insert(TotalNetValue_0.getString());
  FIX::TradingSessionID TradingSessionID_10("STRING_3");
  msg.set(TradingSessionID_10);
  CollateralAssignment_0.insert(TradingSessionID_10.getString());
  FIX::TradingSessionSubID TradingSessionSubID_10("STRING_7");
  msg.set(TradingSessionSubID_10);
  CollateralAssignment_0.insert(TradingSessionSubID_10.getString());
  FIX::TransactTime TransactTime_6(FIX::UTCTIMESTAMP(19, 46, 36, 7, 2, 2014));
  msg.set(TransactTime_6);
  CollateralAssignment_0.insert(TransactTime_6.getString());
  all_values.push_back(CollateralAssignment_0);

  // ExecCollGrp
  // Group ExecCollGrp.NoExecs
  {
    FIX50SP2::CollateralAssignment::NoExecs noExecs_0_0;
    // ExecCollGrp.NoExecs
    multiset<string> ExecCollGrp_NoExecs_0;
    FIX::ExecID ExecID_7("STRING_2045642370");
    noExecs_0_0.set(ExecID_7);
    ExecCollGrp_NoExecs_0.insert(ExecID_7.getString());
    all_values.push_back(ExecCollGrp_NoExecs_0);

    msg.addGroup(noExecs_0_0);
  }
  {
    FIX50SP2::CollateralAssignment::NoExecs noExecs_0_1;
    // ExecCollGrp.NoExecs
    multiset<string> ExecCollGrp_NoExecs_1;
    FIX::ExecID ExecID_8("STRING_1162433026");
    noExecs_0_1.set(ExecID_8);
    ExecCollGrp_NoExecs_1.insert(ExecID_8.getString());
    all_values.push_back(ExecCollGrp_NoExecs_1);

    msg.addGroup(noExecs_0_1);
  }
  // FinancingDetails
  multiset<string> FinancingDetails_3;
  FIX::AgreementCurrency AgreementCurrency_3("CAN");
  msg.set(AgreementCurrency_3);
  FinancingDetails_3.insert(AgreementCurrency_3.getString());
  FIX::AgreementDate AgreementDate_3("LOCALMKTDATE_529344101");
  msg.set(AgreementDate_3);
  FinancingDetails_3.insert(AgreementDate_3.getString());
  FIX::AgreementDesc AgreementDesc_3("STRING_453407183");
  msg.set(AgreementDesc_3);
  FinancingDetails_3.insert(AgreementDesc_3.getString());
  FIX::AgreementID AgreementID_3("STRING_512517809");
  msg.set(AgreementID_3);
  FinancingDetails_3.insert(AgreementID_3.getString());
  FIX::DeliveryType DeliveryType_3(3);
  msg.set(DeliveryType_3);
  FinancingDetails_3.insert(DeliveryType_3.getString());
  FIX::EndDate EndDate_3("LOCALMKTDATE_465979991");
  msg.set(EndDate_3);
  FinancingDetails_3.insert(EndDate_3.getString());
  FIX::MarginRatio MarginRatio_3;
  MarginRatio_3.setString("3.430000");
  msg.set(MarginRatio_3);
  FinancingDetails_3.insert(MarginRatio_3.getString());
  FIX::StartDate StartDate_3("LOCALMKTDATE_262075238");
  msg.set(StartDate_3);
  FinancingDetails_3.insert(StartDate_3.getString());
  FIX::TerminationType TerminationType_3(4);
  msg.set(TerminationType_3);
  FinancingDetails_3.insert(TerminationType_3.getString());
  all_values.push_back(FinancingDetails_3);

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::CollateralAssignment::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_8;
    FIX::EncodedLegIssuer EncodedLegIssuer_8("DATA_1747134512");
    noLegs_0_0.set(EncodedLegIssuer_8);
    InstrumentLeg_8.insert(EncodedLegIssuer_8.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_8(920791248);
    noLegs_0_0.set(EncodedLegIssuerLen_8);
    InstrumentLeg_8.insert(EncodedLegIssuerLen_8.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_8("DATA_279427530");
    noLegs_0_0.set(EncodedLegSecurityDesc_8);
    InstrumentLeg_8.insert(EncodedLegSecurityDesc_8.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_8(310687668);
    noLegs_0_0.set(EncodedLegSecurityDescLen_8);
    InstrumentLeg_8.insert(EncodedLegSecurityDescLen_8.getString());
    FIX::LegCFICode LegCFICode_8("STRING_1038823640");
    noLegs_0_0.set(LegCFICode_8);
    InstrumentLeg_8.insert(LegCFICode_8.getString());
    FIX::LegContractMultiplier LegContractMultiplier_8;
    LegContractMultiplier_8.setString("3828094");
    noLegs_0_0.set(LegContractMultiplier_8);
    InstrumentLeg_8.insert(LegContractMultiplier_8.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_8(89487158);
    noLegs_0_0.set(LegContractMultiplierUnit_8);
    InstrumentLeg_8.insert(LegContractMultiplierUnit_8.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_8("MONTHYEAR_313768693");
    noLegs_0_0.set(LegContractSettlMonth_8);
    InstrumentLeg_8.insert(LegContractSettlMonth_8.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_8("COUNTRY_1807292685");
    noLegs_0_0.set(LegCountryOfIssue_8);
    InstrumentLeg_8.insert(LegCountryOfIssue_8.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_8("LOCALMKTDATE_104400056");
    noLegs_0_0.set(LegCouponPaymentDate_8);
    InstrumentLeg_8.insert(LegCouponPaymentDate_8.getString());
    FIX::LegCouponRate LegCouponRate_8;
    LegCouponRate_8.setString("84.730000");
    noLegs_0_0.set(LegCouponRate_8);
    InstrumentLeg_8.insert(LegCouponRate_8.getString());
    FIX::LegCreditRating LegCreditRating_8("STRING_1376145440");
    noLegs_0_0.set(LegCreditRating_8);
    InstrumentLeg_8.insert(LegCreditRating_8.getString());
    FIX::LegCurrency LegCurrency_8("JPY");
    noLegs_0_0.set(LegCurrency_8);
    InstrumentLeg_8.insert(LegCurrency_8.getString());
    FIX::LegDatedDate LegDatedDate_8("LOCALMKTDATE_427553311");
    noLegs_0_0.set(LegDatedDate_8);
    InstrumentLeg_8.insert(LegDatedDate_8.getString());
    FIX::LegExerciseStyle LegExerciseStyle_8(1524841751);
    noLegs_0_0.set(LegExerciseStyle_8);
    InstrumentLeg_8.insert(LegExerciseStyle_8.getString());
    FIX::LegFactor LegFactor_8;
    LegFactor_8.setString("14864231");
    noLegs_0_0.set(LegFactor_8);
    InstrumentLeg_8.insert(LegFactor_8.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_8(1690337841);
    noLegs_0_0.set(LegFlowScheduleType_8);
    InstrumentLeg_8.insert(LegFlowScheduleType_8.getString());
    FIX::LegInstrRegistry LegInstrRegistry_8("STRING_1423000474");
    noLegs_0_0.set(LegInstrRegistry_8);
    InstrumentLeg_8.insert(LegInstrRegistry_8.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_8("LOCALMKTDATE_501372488");
    noLegs_0_0.set(LegInterestAccrualDate_8);
    InstrumentLeg_8.insert(LegInterestAccrualDate_8.getString());
    FIX::LegIssueDate LegIssueDate_8("LOCALMKTDATE_1910806863");
    noLegs_0_0.set(LegIssueDate_8);
    InstrumentLeg_8.insert(LegIssueDate_8.getString());
    FIX::LegIssuer LegIssuer_8("STRING_1994260521");
    noLegs_0_0.set(LegIssuer_8);
    InstrumentLeg_8.insert(LegIssuer_8.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_8("STRING_1030716590");
    noLegs_0_0.set(LegLocaleOfIssue_8);
    InstrumentLeg_8.insert(LegLocaleOfIssue_8.getString());
    FIX::LegMaturityDate LegMaturityDate_8("LOCALMKTDATE_216730398");
    noLegs_0_0.set(LegMaturityDate_8);
    InstrumentLeg_8.insert(LegMaturityDate_8.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_8("MONTHYEAR_359294682");
    noLegs_0_0.set(LegMaturityMonthYear_8);
    InstrumentLeg_8.insert(LegMaturityMonthYear_8.getString());
    FIX::LegMaturityTime LegMaturityTime_8("TZTIMEONLY_404247309");
    noLegs_0_0.set(LegMaturityTime_8);
    InstrumentLeg_8.insert(LegMaturityTime_8.getString());
    FIX::LegOptAttribute LegOptAttribute_8('6');
    noLegs_0_0.set(LegOptAttribute_8);
    InstrumentLeg_8.insert(LegOptAttribute_8.getString());
    FIX::LegOptionRatio LegOptionRatio_8;
    LegOptionRatio_8.setString("13248650");
    noLegs_0_0.set(LegOptionRatio_8);
    InstrumentLeg_8.insert(LegOptionRatio_8.getString());
    FIX::LegPool LegPool_8("STRING_666322548");
    noLegs_0_0.set(LegPool_8);
    InstrumentLeg_8.insert(LegPool_8.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_8("STRING_1215131756");
    noLegs_0_0.set(LegPriceUnitOfMeasure_8);
    InstrumentLeg_8.insert(LegPriceUnitOfMeasure_8.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_8;
    LegPriceUnitOfMeasureQty_8.setString("9273896");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_8);
    InstrumentLeg_8.insert(LegPriceUnitOfMeasureQty_8.getString());
    FIX::LegProduct LegProduct_8(265973412);
    noLegs_0_0.set(LegProduct_8);
    InstrumentLeg_8.insert(LegProduct_8.getString());
    FIX::LegPutOrCall LegPutOrCall_8(2135923005);
    noLegs_0_0.set(LegPutOrCall_8);
    InstrumentLeg_8.insert(LegPutOrCall_8.getString());
    FIX::LegRatioQty LegRatioQty_8;
    LegRatioQty_8.setString("12068171");
    noLegs_0_0.set(LegRatioQty_8);
    InstrumentLeg_8.insert(LegRatioQty_8.getString());
    FIX::LegRedemptionDate LegRedemptionDate_8("LOCALMKTDATE_576661080");
    noLegs_0_0.set(LegRedemptionDate_8);
    InstrumentLeg_8.insert(LegRedemptionDate_8.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_8("STRING_1027262997");
    noLegs_0_0.set(LegRepoCollateralSecurityType_8);
    InstrumentLeg_8.insert(LegRepoCollateralSecurityType_8.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_8;
    LegRepurchaseRate_8.setString("66.450000");
    noLegs_0_0.set(LegRepurchaseRate_8);
    InstrumentLeg_8.insert(LegRepurchaseRate_8.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_8(666148239);
    noLegs_0_0.set(LegRepurchaseTerm_8);
    InstrumentLeg_8.insert(LegRepurchaseTerm_8.getString());
    FIX::LegSecurityDesc LegSecurityDesc_8("STRING_1341031691");
    noLegs_0_0.set(LegSecurityDesc_8);
    InstrumentLeg_8.insert(LegSecurityDesc_8.getString());
    FIX::LegSecurityExchange LegSecurityExchange_8("EXCHANGE_1249435682");
    noLegs_0_0.set(LegSecurityExchange_8);
    InstrumentLeg_8.insert(LegSecurityExchange_8.getString());
    FIX::LegSecurityID LegSecurityID_8("STRING_770548295");
    noLegs_0_0.set(LegSecurityID_8);
    InstrumentLeg_8.insert(LegSecurityID_8.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_8("STRING_1812240164");
    noLegs_0_0.set(LegSecurityIDSource_8);
    InstrumentLeg_8.insert(LegSecurityIDSource_8.getString());
    FIX::LegSecuritySubType LegSecuritySubType_8("STRING_478097474");
    noLegs_0_0.set(LegSecuritySubType_8);
    InstrumentLeg_8.insert(LegSecuritySubType_8.getString());
    FIX::LegSecurityType LegSecurityType_8("STRING_156798249");
    noLegs_0_0.set(LegSecurityType_8);
    InstrumentLeg_8.insert(LegSecurityType_8.getString());
    FIX::LegSide LegSide_8('4');
    noLegs_0_0.set(LegSide_8);
    InstrumentLeg_8.insert(LegSide_8.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_8("STRING_905650786");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_8);
    InstrumentLeg_8.insert(LegStateOrProvinceOfIssue_8.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_8("JPY");
    noLegs_0_0.set(LegStrikeCurrency_8);
    InstrumentLeg_8.insert(LegStrikeCurrency_8.getString());
    FIX::LegStrikePrice LegStrikePrice_8;
    LegStrikePrice_8.setString("4485049");
    noLegs_0_0.set(LegStrikePrice_8);
    InstrumentLeg_8.insert(LegStrikePrice_8.getString());
    FIX::LegSymbol LegSymbol_8("STRING_957156826");
    noLegs_0_0.set(LegSymbol_8);
    InstrumentLeg_8.insert(LegSymbol_8.getString());
    FIX::LegSymbolSfx LegSymbolSfx_8("STRING_247393217");
    noLegs_0_0.set(LegSymbolSfx_8);
    InstrumentLeg_8.insert(LegSymbolSfx_8.getString());
    FIX::LegTimeUnit LegTimeUnit_8("STRING_211828194");
    noLegs_0_0.set(LegTimeUnit_8);
    InstrumentLeg_8.insert(LegTimeUnit_8.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_8("STRING_803933699");
    noLegs_0_0.set(LegUnitOfMeasure_8);
    InstrumentLeg_8.insert(LegUnitOfMeasure_8.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_8;
    LegUnitOfMeasureQty_8.setString("12781098");
    noLegs_0_0.set(LegUnitOfMeasureQty_8);
    InstrumentLeg_8.insert(LegUnitOfMeasureQty_8.getString());
    all_values.push_back(InstrumentLeg_8);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::CollateralAssignment::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_18;
      FIX::LegSecurityAltID LegSecurityAltID_18("STRING_1163228381");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_18);
      LegSecAltIDGrp_NoLegSecurityAltID_18.insert(LegSecurityAltID_18.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_18("STRING_1682357116");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_18);
      LegSecAltIDGrp_NoLegSecurityAltID_18.insert(LegSecurityAltIDSource_18.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_18);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::CollateralAssignment::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_9;
    FIX::EncodedLegIssuer EncodedLegIssuer_9("DATA_1111268981");
    noLegs_0_1.set(EncodedLegIssuer_9);
    InstrumentLeg_9.insert(EncodedLegIssuer_9.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_9(340609759);
    noLegs_0_1.set(EncodedLegIssuerLen_9);
    InstrumentLeg_9.insert(EncodedLegIssuerLen_9.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_9("DATA_201196016");
    noLegs_0_1.set(EncodedLegSecurityDesc_9);
    InstrumentLeg_9.insert(EncodedLegSecurityDesc_9.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_9(178917089);
    noLegs_0_1.set(EncodedLegSecurityDescLen_9);
    InstrumentLeg_9.insert(EncodedLegSecurityDescLen_9.getString());
    FIX::LegCFICode LegCFICode_9("STRING_1267999399");
    noLegs_0_1.set(LegCFICode_9);
    InstrumentLeg_9.insert(LegCFICode_9.getString());
    FIX::LegContractMultiplier LegContractMultiplier_9;
    LegContractMultiplier_9.setString("4671694");
    noLegs_0_1.set(LegContractMultiplier_9);
    InstrumentLeg_9.insert(LegContractMultiplier_9.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_9(167356446);
    noLegs_0_1.set(LegContractMultiplierUnit_9);
    InstrumentLeg_9.insert(LegContractMultiplierUnit_9.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_9("MONTHYEAR_327332922");
    noLegs_0_1.set(LegContractSettlMonth_9);
    InstrumentLeg_9.insert(LegContractSettlMonth_9.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_9("COUNTRY_1043830509");
    noLegs_0_1.set(LegCountryOfIssue_9);
    InstrumentLeg_9.insert(LegCountryOfIssue_9.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_9("LOCALMKTDATE_1194619444");
    noLegs_0_1.set(LegCouponPaymentDate_9);
    InstrumentLeg_9.insert(LegCouponPaymentDate_9.getString());
    FIX::LegCouponRate LegCouponRate_9;
    LegCouponRate_9.setString("95.680000");
    noLegs_0_1.set(LegCouponRate_9);
    InstrumentLeg_9.insert(LegCouponRate_9.getString());
    FIX::LegCreditRating LegCreditRating_9("STRING_1709978748");
    noLegs_0_1.set(LegCreditRating_9);
    InstrumentLeg_9.insert(LegCreditRating_9.getString());
    FIX::LegCurrency LegCurrency_9("GBP");
    noLegs_0_1.set(LegCurrency_9);
    InstrumentLeg_9.insert(LegCurrency_9.getString());
    FIX::LegDatedDate LegDatedDate_9("LOCALMKTDATE_333043395");
    noLegs_0_1.set(LegDatedDate_9);
    InstrumentLeg_9.insert(LegDatedDate_9.getString());
    FIX::LegExerciseStyle LegExerciseStyle_9(52924003);
    noLegs_0_1.set(LegExerciseStyle_9);
    InstrumentLeg_9.insert(LegExerciseStyle_9.getString());
    FIX::LegFactor LegFactor_9;
    LegFactor_9.setString("14970090");
    noLegs_0_1.set(LegFactor_9);
    InstrumentLeg_9.insert(LegFactor_9.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_9(489841644);
    noLegs_0_1.set(LegFlowScheduleType_9);
    InstrumentLeg_9.insert(LegFlowScheduleType_9.getString());
    FIX::LegInstrRegistry LegInstrRegistry_9("STRING_460005270");
    noLegs_0_1.set(LegInstrRegistry_9);
    InstrumentLeg_9.insert(LegInstrRegistry_9.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_9("LOCALMKTDATE_255176215");
    noLegs_0_1.set(LegInterestAccrualDate_9);
    InstrumentLeg_9.insert(LegInterestAccrualDate_9.getString());
    FIX::LegIssueDate LegIssueDate_9("LOCALMKTDATE_23997997");
    noLegs_0_1.set(LegIssueDate_9);
    InstrumentLeg_9.insert(LegIssueDate_9.getString());
    FIX::LegIssuer LegIssuer_9("STRING_206025998");
    noLegs_0_1.set(LegIssuer_9);
    InstrumentLeg_9.insert(LegIssuer_9.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_9("STRING_703681194");
    noLegs_0_1.set(LegLocaleOfIssue_9);
    InstrumentLeg_9.insert(LegLocaleOfIssue_9.getString());
    FIX::LegMaturityDate LegMaturityDate_9("LOCALMKTDATE_981154823");
    noLegs_0_1.set(LegMaturityDate_9);
    InstrumentLeg_9.insert(LegMaturityDate_9.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_9("MONTHYEAR_453419215");
    noLegs_0_1.set(LegMaturityMonthYear_9);
    InstrumentLeg_9.insert(LegMaturityMonthYear_9.getString());
    FIX::LegMaturityTime LegMaturityTime_9("TZTIMEONLY_915509388");
    noLegs_0_1.set(LegMaturityTime_9);
    InstrumentLeg_9.insert(LegMaturityTime_9.getString());
    FIX::LegOptAttribute LegOptAttribute_9('1');
    noLegs_0_1.set(LegOptAttribute_9);
    InstrumentLeg_9.insert(LegOptAttribute_9.getString());
    FIX::LegOptionRatio LegOptionRatio_9;
    LegOptionRatio_9.setString("17315290");
    noLegs_0_1.set(LegOptionRatio_9);
    InstrumentLeg_9.insert(LegOptionRatio_9.getString());
    FIX::LegPool LegPool_9("STRING_1344067980");
    noLegs_0_1.set(LegPool_9);
    InstrumentLeg_9.insert(LegPool_9.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_9("STRING_800833256");
    noLegs_0_1.set(LegPriceUnitOfMeasure_9);
    InstrumentLeg_9.insert(LegPriceUnitOfMeasure_9.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_9;
    LegPriceUnitOfMeasureQty_9.setString("12664024");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_9);
    InstrumentLeg_9.insert(LegPriceUnitOfMeasureQty_9.getString());
    FIX::LegProduct LegProduct_9(307853313);
    noLegs_0_1.set(LegProduct_9);
    InstrumentLeg_9.insert(LegProduct_9.getString());
    FIX::LegPutOrCall LegPutOrCall_9(1141443015);
    noLegs_0_1.set(LegPutOrCall_9);
    InstrumentLeg_9.insert(LegPutOrCall_9.getString());
    FIX::LegRatioQty LegRatioQty_9;
    LegRatioQty_9.setString("14675985");
    noLegs_0_1.set(LegRatioQty_9);
    InstrumentLeg_9.insert(LegRatioQty_9.getString());
    FIX::LegRedemptionDate LegRedemptionDate_9("LOCALMKTDATE_486770402");
    noLegs_0_1.set(LegRedemptionDate_9);
    InstrumentLeg_9.insert(LegRedemptionDate_9.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_9("STRING_261958767");
    noLegs_0_1.set(LegRepoCollateralSecurityType_9);
    InstrumentLeg_9.insert(LegRepoCollateralSecurityType_9.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_9;
    LegRepurchaseRate_9.setString("79.360000");
    noLegs_0_1.set(LegRepurchaseRate_9);
    InstrumentLeg_9.insert(LegRepurchaseRate_9.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_9(654126849);
    noLegs_0_1.set(LegRepurchaseTerm_9);
    InstrumentLeg_9.insert(LegRepurchaseTerm_9.getString());
    FIX::LegSecurityDesc LegSecurityDesc_9("STRING_589291689");
    noLegs_0_1.set(LegSecurityDesc_9);
    InstrumentLeg_9.insert(LegSecurityDesc_9.getString());
    FIX::LegSecurityExchange LegSecurityExchange_9("EXCHANGE_831114798");
    noLegs_0_1.set(LegSecurityExchange_9);
    InstrumentLeg_9.insert(LegSecurityExchange_9.getString());
    FIX::LegSecurityID LegSecurityID_9("STRING_1848746293");
    noLegs_0_1.set(LegSecurityID_9);
    InstrumentLeg_9.insert(LegSecurityID_9.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_9("STRING_358767609");
    noLegs_0_1.set(LegSecurityIDSource_9);
    InstrumentLeg_9.insert(LegSecurityIDSource_9.getString());
    FIX::LegSecuritySubType LegSecuritySubType_9("STRING_393609898");
    noLegs_0_1.set(LegSecuritySubType_9);
    InstrumentLeg_9.insert(LegSecuritySubType_9.getString());
    FIX::LegSecurityType LegSecurityType_9("STRING_89430132");
    noLegs_0_1.set(LegSecurityType_9);
    InstrumentLeg_9.insert(LegSecurityType_9.getString());
    FIX::LegSide LegSide_9('1');
    noLegs_0_1.set(LegSide_9);
    InstrumentLeg_9.insert(LegSide_9.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_9("STRING_726653294");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_9);
    InstrumentLeg_9.insert(LegStateOrProvinceOfIssue_9.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_9("CHF");
    noLegs_0_1.set(LegStrikeCurrency_9);
    InstrumentLeg_9.insert(LegStrikeCurrency_9.getString());
    FIX::LegStrikePrice LegStrikePrice_9;
    LegStrikePrice_9.setString("12164949");
    noLegs_0_1.set(LegStrikePrice_9);
    InstrumentLeg_9.insert(LegStrikePrice_9.getString());
    FIX::LegSymbol LegSymbol_9("STRING_602359405");
    noLegs_0_1.set(LegSymbol_9);
    InstrumentLeg_9.insert(LegSymbol_9.getString());
    FIX::LegSymbolSfx LegSymbolSfx_9("STRING_982380856");
    noLegs_0_1.set(LegSymbolSfx_9);
    InstrumentLeg_9.insert(LegSymbolSfx_9.getString());
    FIX::LegTimeUnit LegTimeUnit_9("STRING_1240492935");
    noLegs_0_1.set(LegTimeUnit_9);
    InstrumentLeg_9.insert(LegTimeUnit_9.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_9("STRING_808385404");
    noLegs_0_1.set(LegUnitOfMeasure_9);
    InstrumentLeg_9.insert(LegUnitOfMeasure_9.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_9;
    LegUnitOfMeasureQty_9.setString("16860620");
    noLegs_0_1.set(LegUnitOfMeasureQty_9);
    InstrumentLeg_9.insert(LegUnitOfMeasureQty_9.getString());
    all_values.push_back(InstrumentLeg_9);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::CollateralAssignment::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_19;
      FIX::LegSecurityAltID LegSecurityAltID_19("STRING_1261804619");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_19);
      LegSecAltIDGrp_NoLegSecurityAltID_19.insert(LegSecurityAltID_19.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_19("STRING_454087790");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_19);
      LegSecAltIDGrp_NoLegSecurityAltID_19.insert(LegSecurityAltIDSource_19.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_19);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::CollateralAssignment::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_20;
      FIX::LegSecurityAltID LegSecurityAltID_20("STRING_1859252634");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltID_20);
      LegSecAltIDGrp_NoLegSecurityAltID_20.insert(LegSecurityAltID_20.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_20("STRING_845849994");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltIDSource_20);
      LegSecAltIDGrp_NoLegSecurityAltID_20.insert(LegSecurityAltIDSource_20.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_20);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    msg.addGroup(noLegs_0_1);
  }
  {
    FIX50SP2::CollateralAssignment::NoLegs noLegs_0_2;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_10;
    FIX::EncodedLegIssuer EncodedLegIssuer_10("DATA_1798155770");
    noLegs_0_2.set(EncodedLegIssuer_10);
    InstrumentLeg_10.insert(EncodedLegIssuer_10.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_10(512602242);
    noLegs_0_2.set(EncodedLegIssuerLen_10);
    InstrumentLeg_10.insert(EncodedLegIssuerLen_10.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_10("DATA_2112252485");
    noLegs_0_2.set(EncodedLegSecurityDesc_10);
    InstrumentLeg_10.insert(EncodedLegSecurityDesc_10.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_10(2106009083);
    noLegs_0_2.set(EncodedLegSecurityDescLen_10);
    InstrumentLeg_10.insert(EncodedLegSecurityDescLen_10.getString());
    FIX::LegCFICode LegCFICode_10("STRING_1654045258");
    noLegs_0_2.set(LegCFICode_10);
    InstrumentLeg_10.insert(LegCFICode_10.getString());
    FIX::LegContractMultiplier LegContractMultiplier_10;
    LegContractMultiplier_10.setString("14323673");
    noLegs_0_2.set(LegContractMultiplier_10);
    InstrumentLeg_10.insert(LegContractMultiplier_10.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_10(445295837);
    noLegs_0_2.set(LegContractMultiplierUnit_10);
    InstrumentLeg_10.insert(LegContractMultiplierUnit_10.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_10("MONTHYEAR_1916004025");
    noLegs_0_2.set(LegContractSettlMonth_10);
    InstrumentLeg_10.insert(LegContractSettlMonth_10.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_10("COUNTRY_1219651633");
    noLegs_0_2.set(LegCountryOfIssue_10);
    InstrumentLeg_10.insert(LegCountryOfIssue_10.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_10("LOCALMKTDATE_1099422686");
    noLegs_0_2.set(LegCouponPaymentDate_10);
    InstrumentLeg_10.insert(LegCouponPaymentDate_10.getString());
    FIX::LegCouponRate LegCouponRate_10;
    LegCouponRate_10.setString("20.660000");
    noLegs_0_2.set(LegCouponRate_10);
    InstrumentLeg_10.insert(LegCouponRate_10.getString());
    FIX::LegCreditRating LegCreditRating_10("STRING_2050766431");
    noLegs_0_2.set(LegCreditRating_10);
    InstrumentLeg_10.insert(LegCreditRating_10.getString());
    FIX::LegCurrency LegCurrency_10("USD");
    noLegs_0_2.set(LegCurrency_10);
    InstrumentLeg_10.insert(LegCurrency_10.getString());
    FIX::LegDatedDate LegDatedDate_10("LOCALMKTDATE_296892681");
    noLegs_0_2.set(LegDatedDate_10);
    InstrumentLeg_10.insert(LegDatedDate_10.getString());
    FIX::LegExerciseStyle LegExerciseStyle_10(890115463);
    noLegs_0_2.set(LegExerciseStyle_10);
    InstrumentLeg_10.insert(LegExerciseStyle_10.getString());
    FIX::LegFactor LegFactor_10;
    LegFactor_10.setString("20942588");
    noLegs_0_2.set(LegFactor_10);
    InstrumentLeg_10.insert(LegFactor_10.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_10(1023545975);
    noLegs_0_2.set(LegFlowScheduleType_10);
    InstrumentLeg_10.insert(LegFlowScheduleType_10.getString());
    FIX::LegInstrRegistry LegInstrRegistry_10("STRING_1032469599");
    noLegs_0_2.set(LegInstrRegistry_10);
    InstrumentLeg_10.insert(LegInstrRegistry_10.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_10("LOCALMKTDATE_673979881");
    noLegs_0_2.set(LegInterestAccrualDate_10);
    InstrumentLeg_10.insert(LegInterestAccrualDate_10.getString());
    FIX::LegIssueDate LegIssueDate_10("LOCALMKTDATE_92557266");
    noLegs_0_2.set(LegIssueDate_10);
    InstrumentLeg_10.insert(LegIssueDate_10.getString());
    FIX::LegIssuer LegIssuer_10("STRING_1634829004");
    noLegs_0_2.set(LegIssuer_10);
    InstrumentLeg_10.insert(LegIssuer_10.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_10("STRING_1656360737");
    noLegs_0_2.set(LegLocaleOfIssue_10);
    InstrumentLeg_10.insert(LegLocaleOfIssue_10.getString());
    FIX::LegMaturityDate LegMaturityDate_10("LOCALMKTDATE_1333050201");
    noLegs_0_2.set(LegMaturityDate_10);
    InstrumentLeg_10.insert(LegMaturityDate_10.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_10("MONTHYEAR_295730760");
    noLegs_0_2.set(LegMaturityMonthYear_10);
    InstrumentLeg_10.insert(LegMaturityMonthYear_10.getString());
    FIX::LegMaturityTime LegMaturityTime_10("TZTIMEONLY_1194939139");
    noLegs_0_2.set(LegMaturityTime_10);
    InstrumentLeg_10.insert(LegMaturityTime_10.getString());
    FIX::LegOptAttribute LegOptAttribute_10('1');
    noLegs_0_2.set(LegOptAttribute_10);
    InstrumentLeg_10.insert(LegOptAttribute_10.getString());
    FIX::LegOptionRatio LegOptionRatio_10;
    LegOptionRatio_10.setString("15575353");
    noLegs_0_2.set(LegOptionRatio_10);
    InstrumentLeg_10.insert(LegOptionRatio_10.getString());
    FIX::LegPool LegPool_10("STRING_1649026929");
    noLegs_0_2.set(LegPool_10);
    InstrumentLeg_10.insert(LegPool_10.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_10("STRING_1118983298");
    noLegs_0_2.set(LegPriceUnitOfMeasure_10);
    InstrumentLeg_10.insert(LegPriceUnitOfMeasure_10.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_10;
    LegPriceUnitOfMeasureQty_10.setString("2559017");
    noLegs_0_2.set(LegPriceUnitOfMeasureQty_10);
    InstrumentLeg_10.insert(LegPriceUnitOfMeasureQty_10.getString());
    FIX::LegProduct LegProduct_10(1299699051);
    noLegs_0_2.set(LegProduct_10);
    InstrumentLeg_10.insert(LegProduct_10.getString());
    FIX::LegPutOrCall LegPutOrCall_10(1631585541);
    noLegs_0_2.set(LegPutOrCall_10);
    InstrumentLeg_10.insert(LegPutOrCall_10.getString());
    FIX::LegRatioQty LegRatioQty_10;
    LegRatioQty_10.setString("2206705");
    noLegs_0_2.set(LegRatioQty_10);
    InstrumentLeg_10.insert(LegRatioQty_10.getString());
    FIX::LegRedemptionDate LegRedemptionDate_10("LOCALMKTDATE_1258224486");
    noLegs_0_2.set(LegRedemptionDate_10);
    InstrumentLeg_10.insert(LegRedemptionDate_10.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_10("STRING_1138147151");
    noLegs_0_2.set(LegRepoCollateralSecurityType_10);
    InstrumentLeg_10.insert(LegRepoCollateralSecurityType_10.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_10;
    LegRepurchaseRate_10.setString("79.070000");
    noLegs_0_2.set(LegRepurchaseRate_10);
    InstrumentLeg_10.insert(LegRepurchaseRate_10.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_10(1703520323);
    noLegs_0_2.set(LegRepurchaseTerm_10);
    InstrumentLeg_10.insert(LegRepurchaseTerm_10.getString());
    FIX::LegSecurityDesc LegSecurityDesc_10("STRING_906667528");
    noLegs_0_2.set(LegSecurityDesc_10);
    InstrumentLeg_10.insert(LegSecurityDesc_10.getString());
    FIX::LegSecurityExchange LegSecurityExchange_10("EXCHANGE_725205892");
    noLegs_0_2.set(LegSecurityExchange_10);
    InstrumentLeg_10.insert(LegSecurityExchange_10.getString());
    FIX::LegSecurityID LegSecurityID_10("STRING_655459362");
    noLegs_0_2.set(LegSecurityID_10);
    InstrumentLeg_10.insert(LegSecurityID_10.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_10("STRING_1264479594");
    noLegs_0_2.set(LegSecurityIDSource_10);
    InstrumentLeg_10.insert(LegSecurityIDSource_10.getString());
    FIX::LegSecuritySubType LegSecuritySubType_10("STRING_628488675");
    noLegs_0_2.set(LegSecuritySubType_10);
    InstrumentLeg_10.insert(LegSecuritySubType_10.getString());
    FIX::LegSecurityType LegSecurityType_10("STRING_1456144693");
    noLegs_0_2.set(LegSecurityType_10);
    InstrumentLeg_10.insert(LegSecurityType_10.getString());
    FIX::LegSide LegSide_10('1');
    noLegs_0_2.set(LegSide_10);
    InstrumentLeg_10.insert(LegSide_10.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_10("STRING_925381357");
    noLegs_0_2.set(LegStateOrProvinceOfIssue_10);
    InstrumentLeg_10.insert(LegStateOrProvinceOfIssue_10.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_10("JPY");
    noLegs_0_2.set(LegStrikeCurrency_10);
    InstrumentLeg_10.insert(LegStrikeCurrency_10.getString());
    FIX::LegStrikePrice LegStrikePrice_10;
    LegStrikePrice_10.setString("19489273");
    noLegs_0_2.set(LegStrikePrice_10);
    InstrumentLeg_10.insert(LegStrikePrice_10.getString());
    FIX::LegSymbol LegSymbol_10("STRING_1231246108");
    noLegs_0_2.set(LegSymbol_10);
    InstrumentLeg_10.insert(LegSymbol_10.getString());
    FIX::LegSymbolSfx LegSymbolSfx_10("STRING_454330743");
    noLegs_0_2.set(LegSymbolSfx_10);
    InstrumentLeg_10.insert(LegSymbolSfx_10.getString());
    FIX::LegTimeUnit LegTimeUnit_10("STRING_2041484598");
    noLegs_0_2.set(LegTimeUnit_10);
    InstrumentLeg_10.insert(LegTimeUnit_10.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_10("STRING_718591464");
    noLegs_0_2.set(LegUnitOfMeasure_10);
    InstrumentLeg_10.insert(LegUnitOfMeasure_10.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_10;
    LegUnitOfMeasureQty_10.setString("21106914");
    noLegs_0_2.set(LegUnitOfMeasureQty_10);
    InstrumentLeg_10.insert(LegUnitOfMeasureQty_10.getString());
    all_values.push_back(InstrumentLeg_10);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::CollateralAssignment::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_21;
      FIX::LegSecurityAltID LegSecurityAltID_21("STRING_1014322225");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltID_21);
      LegSecAltIDGrp_NoLegSecurityAltID_21.insert(LegSecurityAltID_21.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_21("STRING_1158146971");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltIDSource_21);
      LegSecAltIDGrp_NoLegSecurityAltID_21.insert(LegSecurityAltIDSource_21.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_21);

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::CollateralAssignment::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_22;
      FIX::LegSecurityAltID LegSecurityAltID_22("STRING_486781816");
      noLegSecurityAltID_2_1_1.set(LegSecurityAltID_22);
      LegSecAltIDGrp_NoLegSecurityAltID_22.insert(LegSecurityAltID_22.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_22("STRING_424373957");
      noLegSecurityAltID_2_1_1.set(LegSecurityAltIDSource_22);
      LegSecAltIDGrp_NoLegSecurityAltID_22.insert(LegSecurityAltIDSource_22.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_22);

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_1);
    }
    {
      FIX50SP2::CollateralAssignment::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_23;
      FIX::LegSecurityAltID LegSecurityAltID_23("STRING_659690252");
      noLegSecurityAltID_2_1_2.set(LegSecurityAltID_23);
      LegSecAltIDGrp_NoLegSecurityAltID_23.insert(LegSecurityAltID_23.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_23("STRING_1605765115");
      noLegSecurityAltID_2_1_2.set(LegSecurityAltIDSource_23);
      LegSecAltIDGrp_NoLegSecurityAltID_23.insert(LegSecurityAltIDSource_23.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_23);

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_2);
    }
    msg.addGroup(noLegs_0_2);
  }
  // Instrument
  multiset<string> Instrument_7;
  FIX::AttachmentPoint AttachmentPoint_7;
  AttachmentPoint_7.setString("56.830000");
  msg.set(AttachmentPoint_7);
  Instrument_7.insert(AttachmentPoint_7.getString());
  FIX::CFICode CFICode_7("STRING_1959389303");
  msg.set(CFICode_7);
  Instrument_7.insert(CFICode_7.getString());
  FIX::CPProgram CPProgram_7(99);
  msg.set(CPProgram_7);
  Instrument_7.insert(CPProgram_7.getString());
  FIX::CPRegType CPRegType_7("STRING_900946246");
  msg.set(CPRegType_7);
  Instrument_7.insert(CPRegType_7.getString());
  FIX::CapPrice CapPrice_7;
  CapPrice_7.setString("10701301");
  msg.set(CapPrice_7);
  Instrument_7.insert(CapPrice_7.getString());
  FIX::ContractMultiplier ContractMultiplier_7;
  ContractMultiplier_7.setString("805305");
  msg.set(ContractMultiplier_7);
  Instrument_7.insert(ContractMultiplier_7.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_7(1);
  msg.set(ContractMultiplierUnit_7);
  Instrument_7.insert(ContractMultiplierUnit_7.getString());
  FIX::ContractSettlMonth ContractSettlMonth_7("MONTHYEAR_626166817");
  msg.set(ContractSettlMonth_7);
  Instrument_7.insert(ContractSettlMonth_7.getString());
  FIX::CountryOfIssue CountryOfIssue_7("COUNTRY_987198039");
  msg.set(CountryOfIssue_7);
  Instrument_7.insert(CountryOfIssue_7.getString());
  FIX::CouponPaymentDate CouponPaymentDate_7("LOCALMKTDATE_1131706398");
  msg.set(CouponPaymentDate_7);
  Instrument_7.insert(CouponPaymentDate_7.getString());
  FIX::CouponRate CouponRate_7;
  CouponRate_7.setString("61.790000");
  msg.set(CouponRate_7);
  Instrument_7.insert(CouponRate_7.getString());
  FIX::CreditRating CreditRating_7("STRING_104193985");
  msg.set(CreditRating_7);
  Instrument_7.insert(CreditRating_7.getString());
  FIX::DatedDate DatedDate_7("LOCALMKTDATE_1760195073");
  msg.set(DatedDate_7);
  Instrument_7.insert(DatedDate_7.getString());
  FIX::DetachmentPoint DetachmentPoint_7;
  DetachmentPoint_7.setString("72.240000");
  msg.set(DetachmentPoint_7);
  Instrument_7.insert(DetachmentPoint_7.getString());
  FIX::EncodedIssuer EncodedIssuer_7("DATA_2085253256");
  msg.set(EncodedIssuer_7);
  Instrument_7.insert(EncodedIssuer_7.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_7(538092782);
  msg.set(EncodedIssuerLen_7);
  Instrument_7.insert(EncodedIssuerLen_7.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_7("DATA_789063733");
  msg.set(EncodedSecurityDesc_7);
  Instrument_7.insert(EncodedSecurityDesc_7.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_7(1865604118);
  msg.set(EncodedSecurityDescLen_7);
  Instrument_7.insert(EncodedSecurityDescLen_7.getString());
  FIX::ExerciseStyle ExerciseStyle_7(1);
  msg.set(ExerciseStyle_7);
  Instrument_7.insert(ExerciseStyle_7.getString());
  FIX::Factor Factor_7;
  Factor_7.setString("20203098");
  msg.set(Factor_7);
  Instrument_7.insert(Factor_7.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_7(true);
  msg.set(FlexProductEligibilityIndicator_7);
  Instrument_7.insert(FlexProductEligibilityIndicator_7.getString());
  FIX::FlexibleIndicator FlexibleIndicator_7(false);
  msg.set(FlexibleIndicator_7);
  Instrument_7.insert(FlexibleIndicator_7.getString());
  FIX::FloorPrice FloorPrice_7;
  FloorPrice_7.setString("5914176");
  msg.set(FloorPrice_7);
  Instrument_7.insert(FloorPrice_7.getString());
  FIX::FlowScheduleType FlowScheduleType_7(1);
  msg.set(FlowScheduleType_7);
  Instrument_7.insert(FlowScheduleType_7.getString());
  FIX::InstrRegistry InstrRegistry_7("STRING_1460588569");
  msg.set(InstrRegistry_7);
  Instrument_7.insert(InstrRegistry_7.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_7('1');
  msg.set(InstrmtAssignmentMethod_7);
  Instrument_7.insert(InstrmtAssignmentMethod_7.getString());
  FIX::InterestAccrualDate InterestAccrualDate_7("LOCALMKTDATE_1293806018");
  msg.set(InterestAccrualDate_7);
  Instrument_7.insert(InterestAccrualDate_7.getString());
  FIX::IssueDate IssueDate_7("LOCALMKTDATE_1947370386");
  msg.set(IssueDate_7);
  Instrument_7.insert(IssueDate_7.getString());
  FIX::Issuer Issuer_7("STRING_2030113840");
  msg.set(Issuer_7);
  Instrument_7.insert(Issuer_7.getString());
  FIX::ListMethod ListMethod_7(0);
  msg.set(ListMethod_7);
  Instrument_7.insert(ListMethod_7.getString());
  FIX::LocaleOfIssue LocaleOfIssue_7("STRING_1405651853");
  msg.set(LocaleOfIssue_7);
  Instrument_7.insert(LocaleOfIssue_7.getString());
  FIX::MaturityDate MaturityDate_7("LOCALMKTDATE_562905875");
  msg.set(MaturityDate_7);
  Instrument_7.insert(MaturityDate_7.getString());
  FIX::MaturityMonthYear MaturityMonthYear_7("MONTHYEAR_1765401926");
  msg.set(MaturityMonthYear_7);
  Instrument_7.insert(MaturityMonthYear_7.getString());
  FIX::MaturityTime MaturityTime_7("TZTIMEONLY_348035213");
  msg.set(MaturityTime_7);
  Instrument_7.insert(MaturityTime_7.getString());
  FIX::MinPriceIncrement MinPriceIncrement_7;
  MinPriceIncrement_7.setString("14638521");
  msg.set(MinPriceIncrement_7);
  Instrument_7.insert(MinPriceIncrement_7.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_7;
  MinPriceIncrementAmount_7.setString("6880484");
  msg.set(MinPriceIncrementAmount_7);
  Instrument_7.insert(MinPriceIncrementAmount_7.getString());
  FIX::NTPositionLimit NTPositionLimit_7(428565724);
  msg.set(NTPositionLimit_7);
  Instrument_7.insert(NTPositionLimit_7.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_7;
  NotionalPercentageOutstanding_7.setString("26.260000");
  msg.set(NotionalPercentageOutstanding_7);
  Instrument_7.insert(NotionalPercentageOutstanding_7.getString());
  FIX::OptAttribute OptAttribute_7('1');
  msg.set(OptAttribute_7);
  Instrument_7.insert(OptAttribute_7.getString());
  FIX::OptPayoutAmount OptPayoutAmount_7;
  OptPayoutAmount_7.setString("14157637");
  msg.set(OptPayoutAmount_7);
  Instrument_7.insert(OptPayoutAmount_7.getString());
  FIX::OptPayoutType OptPayoutType_7(3);
  msg.set(OptPayoutType_7);
  Instrument_7.insert(OptPayoutType_7.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_7;
  OriginalNotionalPercentageOutstanding_7.setString("77.670000");
  msg.set(OriginalNotionalPercentageOutstanding_7);
  Instrument_7.insert(OriginalNotionalPercentageOutstanding_7.getString());
  FIX::Pool Pool_7("STRING_1519957748");
  msg.set(Pool_7);
  Instrument_7.insert(Pool_7.getString());
  FIX::PositionLimit PositionLimit_7(467286802);
  msg.set(PositionLimit_7);
  Instrument_7.insert(PositionLimit_7.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_7("STRING_STD");
  msg.set(PriceQuoteMethod_7);
  Instrument_7.insert(PriceQuoteMethod_7.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_7("STRING_1457727356");
  msg.set(PriceUnitOfMeasure_7);
  Instrument_7.insert(PriceUnitOfMeasure_7.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_7;
  PriceUnitOfMeasureQty_7.setString("10053795");
  msg.set(PriceUnitOfMeasureQty_7);
  Instrument_7.insert(PriceUnitOfMeasureQty_7.getString());
  FIX::Product Product_9(12);
  msg.set(Product_9);
  Instrument_7.insert(Product_9.getString());
  FIX::ProductComplex ProductComplex_7("STRING_1175847827");
  msg.set(ProductComplex_7);
  Instrument_7.insert(ProductComplex_7.getString());
  FIX::PutOrCall PutOrCall_7(1);
  msg.set(PutOrCall_7);
  Instrument_7.insert(PutOrCall_7.getString());
  FIX::RedemptionDate RedemptionDate_7("LOCALMKTDATE_1700534919");
  msg.set(RedemptionDate_7);
  Instrument_7.insert(RedemptionDate_7.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_7("STRING_1348299041");
  msg.set(RepoCollateralSecurityType_7);
  Instrument_7.insert(RepoCollateralSecurityType_7.getString());
  FIX::RepurchaseRate RepurchaseRate_7;
  RepurchaseRate_7.setString("34.690000");
  msg.set(RepurchaseRate_7);
  Instrument_7.insert(RepurchaseRate_7.getString());
  FIX::RepurchaseTerm RepurchaseTerm_7(144468929);
  msg.set(RepurchaseTerm_7);
  Instrument_7.insert(RepurchaseTerm_7.getString());
  FIX::RestructuringType RestructuringType_7("STRING_XR");
  msg.set(RestructuringType_7);
  Instrument_7.insert(RestructuringType_7.getString());
  FIX::SecurityDesc SecurityDesc_7("STRING_891558390");
  msg.set(SecurityDesc_7);
  Instrument_7.insert(SecurityDesc_7.getString());
  FIX::SecurityExchange SecurityExchange_7("EXCHANGE_1750208812");
  msg.set(SecurityExchange_7);
  Instrument_7.insert(SecurityExchange_7.getString());
  FIX::SecurityGroup SecurityGroup_7("STRING_630280457");
  msg.set(SecurityGroup_7);
  Instrument_7.insert(SecurityGroup_7.getString());
  FIX::SecurityID SecurityID_7("STRING_691445128");
  msg.set(SecurityID_7);
  Instrument_7.insert(SecurityID_7.getString());
  FIX::SecurityIDSource SecurityIDSource_7("STRING_H");
  msg.set(SecurityIDSource_7);
  Instrument_7.insert(SecurityIDSource_7.getString());
  FIX::SecurityStatus SecurityStatus_7("STRING_1");
  msg.set(SecurityStatus_7);
  Instrument_7.insert(SecurityStatus_7.getString());
  FIX::SecuritySubType SecuritySubType_7("STRING_2097096981");
  msg.set(SecuritySubType_7);
  Instrument_7.insert(SecuritySubType_7.getString());
  FIX::SecurityType SecurityType_9("STRING_RETIRED");
  msg.set(SecurityType_9);
  Instrument_7.insert(SecurityType_9.getString());
  FIX::Seniority Seniority_7("STRING_SB");
  msg.set(Seniority_7);
  Instrument_7.insert(Seniority_7.getString());
  FIX::SettlMethod SettlMethod_7('C');
  msg.set(SettlMethod_7);
  Instrument_7.insert(SettlMethod_7.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_7("STRING_1512113352");
  msg.set(SettleOnOpenFlag_7);
  Instrument_7.insert(SettleOnOpenFlag_7.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_7("STRING_742259777");
  msg.set(StateOrProvinceOfIssue_7);
  Instrument_7.insert(StateOrProvinceOfIssue_7.getString());
  FIX::StrikeCurrency StrikeCurrency_7("GBP");
  msg.set(StrikeCurrency_7);
  Instrument_7.insert(StrikeCurrency_7.getString());
  FIX::StrikeMultiplier StrikeMultiplier_7;
  StrikeMultiplier_7.setString("20564750");
  msg.set(StrikeMultiplier_7);
  Instrument_7.insert(StrikeMultiplier_7.getString());
  FIX::StrikePrice StrikePrice_7;
  StrikePrice_7.setString("21419780");
  msg.set(StrikePrice_7);
  Instrument_7.insert(StrikePrice_7.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_7(3);
  msg.set(StrikePriceBoundaryMethod_7);
  Instrument_7.insert(StrikePriceBoundaryMethod_7.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_7;
  StrikePriceBoundaryPrecision_7.setString("91.330000");
  msg.set(StrikePriceBoundaryPrecision_7);
  Instrument_7.insert(StrikePriceBoundaryPrecision_7.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_7(3);
  msg.set(StrikePriceDeterminationMethod_7);
  Instrument_7.insert(StrikePriceDeterminationMethod_7.getString());
  FIX::StrikeValue StrikeValue_7;
  StrikeValue_7.setString("4093608");
  msg.set(StrikeValue_7);
  Instrument_7.insert(StrikeValue_7.getString());
  FIX::Symbol Symbol_7("STRING_1395994125");
  msg.set(Symbol_7);
  Instrument_7.insert(Symbol_7.getString());
  FIX::SymbolSfx SymbolSfx_7("STRING_CD");
  msg.set(SymbolSfx_7);
  Instrument_7.insert(SymbolSfx_7.getString());
  FIX::TimeUnit TimeUnit_7("STRING_Yr");
  msg.set(TimeUnit_7);
  Instrument_7.insert(TimeUnit_7.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_7(4);
  msg.set(UnderlyingPriceDeterminationMethod_7);
  Instrument_7.insert(UnderlyingPriceDeterminationMethod_7.getString());
  FIX::UnitOfMeasure UnitOfMeasure_7("STRING_Gal");
  msg.set(UnitOfMeasure_7);
  Instrument_7.insert(UnitOfMeasure_7.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_7;
  UnitOfMeasureQty_7.setString("6121728");
  msg.set(UnitOfMeasureQty_7);
  Instrument_7.insert(UnitOfMeasureQty_7.getString());
  FIX::ValuationMethod ValuationMethod_7("STRING_CDSD");
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
    ComplexEventPrice_16.setString("7737394");
    noComplexEvents_0_0.set(ComplexEventPrice_16);
    ComplexEvents_NoComplexEvents_16.insert(ComplexEventPrice_16.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_16(3);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_16);
    ComplexEvents_NoComplexEvents_16.insert(ComplexEventPriceBoundaryMethod_16.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_16;
    ComplexEventPriceBoundaryPrecision_16.setString("10.600000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_16);
    ComplexEvents_NoComplexEvents_16.insert(ComplexEventPriceBoundaryPrecision_16.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_16(1);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_16);
    ComplexEvents_NoComplexEvents_16.insert(ComplexEventPriceTimeType_16.getString());
    FIX::ComplexEventType ComplexEventType_16(9);
    noComplexEvents_0_0.set(ComplexEventType_16);
    ComplexEvents_NoComplexEvents_16.insert(ComplexEventType_16.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_16;
    ComplexOptPayoutAmount_16.setString("16261461");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_16);
    ComplexEvents_NoComplexEvents_16.insert(ComplexOptPayoutAmount_16.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_16);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CollateralAssignment::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_36;
      FIX::ComplexEventEndDate ComplexEventEndDate_36(FIX::UTCTIMESTAMP(18, 42, 57, 1, 11, 2013));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_36);
      ComplexEventDates_NoComplexEventDates_36.insert(ComplexEventEndDate_36.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_36(FIX::UTCTIMESTAMP(4, 33, 37, 15, 3, 2007));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_36);
      ComplexEventDates_NoComplexEventDates_36.insert(ComplexEventStartDate_36.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_36);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralAssignment::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_75;
        FIX::ComplexEventEndTime ComplexEventEndTime_75(FIX::UTCTIMEONLY(5, 26, 47));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_75);
        ComplexEventTimes_NoComplexEventTimes_75.insert(ComplexEventEndTime_75.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_75(FIX::UTCTIMEONLY(3, 1, 29));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_75);
        ComplexEventTimes_NoComplexEventTimes_75.insert(ComplexEventStartTime_75.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_75);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::CollateralAssignment::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_76;
        FIX::ComplexEventEndTime ComplexEventEndTime_76(FIX::UTCTIMEONLY(0, 3, 45));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_76);
        ComplexEventTimes_NoComplexEventTimes_76.insert(ComplexEventEndTime_76.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_76(FIX::UTCTIMEONLY(15, 6, 46));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_76);
        ComplexEventTimes_NoComplexEventTimes_76.insert(ComplexEventStartTime_76.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_76);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::CollateralAssignment::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_77;
        FIX::ComplexEventEndTime ComplexEventEndTime_77(FIX::UTCTIMEONLY(5, 20, 4));
        noComplexEventTimes_0_0_2_2.set(ComplexEventEndTime_77);
        ComplexEventTimes_NoComplexEventTimes_77.insert(ComplexEventEndTime_77.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_77(FIX::UTCTIMEONLY(6, 11, 13));
        noComplexEventTimes_0_0_2_2.set(ComplexEventStartTime_77);
        ComplexEventTimes_NoComplexEventTimes_77.insert(ComplexEventStartTime_77.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_77);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::CollateralAssignment::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_17;
    FIX::ComplexEventCondition ComplexEventCondition_17(1);
    noComplexEvents_0_1.set(ComplexEventCondition_17);
    ComplexEvents_NoComplexEvents_17.insert(ComplexEventCondition_17.getString());
    FIX::ComplexEventPrice ComplexEventPrice_17;
    ComplexEventPrice_17.setString("6350188");
    noComplexEvents_0_1.set(ComplexEventPrice_17);
    ComplexEvents_NoComplexEvents_17.insert(ComplexEventPrice_17.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_17(1);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_17);
    ComplexEvents_NoComplexEvents_17.insert(ComplexEventPriceBoundaryMethod_17.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_17;
    ComplexEventPriceBoundaryPrecision_17.setString("78.740000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_17);
    ComplexEvents_NoComplexEvents_17.insert(ComplexEventPriceBoundaryPrecision_17.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_17(2);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_17);
    ComplexEvents_NoComplexEvents_17.insert(ComplexEventPriceTimeType_17.getString());
    FIX::ComplexEventType ComplexEventType_17(5);
    noComplexEvents_0_1.set(ComplexEventType_17);
    ComplexEvents_NoComplexEvents_17.insert(ComplexEventType_17.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_17;
    ComplexOptPayoutAmount_17.setString("13456559");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_17);
    ComplexEvents_NoComplexEvents_17.insert(ComplexOptPayoutAmount_17.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_17);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CollateralAssignment::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_37;
      FIX::ComplexEventEndDate ComplexEventEndDate_37(FIX::UTCTIMESTAMP(8, 1, 38, 3, 7, 2007));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_37);
      ComplexEventDates_NoComplexEventDates_37.insert(ComplexEventEndDate_37.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_37(FIX::UTCTIMESTAMP(18, 11, 38, 13, 7, 2008));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_37);
      ComplexEventDates_NoComplexEventDates_37.insert(ComplexEventStartDate_37.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_37);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralAssignment::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_78;
        FIX::ComplexEventEndTime ComplexEventEndTime_78(FIX::UTCTIMEONLY(17, 31, 24));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_78);
        ComplexEventTimes_NoComplexEventTimes_78.insert(ComplexEventEndTime_78.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_78(FIX::UTCTIMEONLY(13, 27, 53));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_78);
        ComplexEventTimes_NoComplexEventTimes_78.insert(ComplexEventStartTime_78.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_78);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::CollateralAssignment::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_79;
        FIX::ComplexEventEndTime ComplexEventEndTime_79(FIX::UTCTIMEONLY(11, 35, 30));
        noComplexEventTimes_1_0_2_1.set(ComplexEventEndTime_79);
        ComplexEventTimes_NoComplexEventTimes_79.insert(ComplexEventEndTime_79.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_79(FIX::UTCTIMEONLY(1, 12, 28));
        noComplexEventTimes_1_0_2_1.set(ComplexEventStartTime_79);
        ComplexEventTimes_NoComplexEventTimes_79.insert(ComplexEventStartTime_79.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_79);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::CollateralAssignment::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_38;
      FIX::ComplexEventEndDate ComplexEventEndDate_38(FIX::UTCTIMESTAMP(1, 22, 38, 20, 5, 2013));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_38);
      ComplexEventDates_NoComplexEventDates_38.insert(ComplexEventEndDate_38.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_38(FIX::UTCTIMESTAMP(3, 40, 59, 0, 11, 2007));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_38);
      ComplexEventDates_NoComplexEventDates_38.insert(ComplexEventStartDate_38.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_38);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralAssignment::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_80;
        FIX::ComplexEventEndTime ComplexEventEndTime_80(FIX::UTCTIMEONLY(1, 55, 15));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_80);
        ComplexEventTimes_NoComplexEventTimes_80.insert(ComplexEventEndTime_80.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_80(FIX::UTCTIMEONLY(13, 43, 25));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_80);
        ComplexEventTimes_NoComplexEventTimes_80.insert(ComplexEventStartTime_80.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_80);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    {
      FIX50SP2::CollateralAssignment::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_39;
      FIX::ComplexEventEndDate ComplexEventEndDate_39(FIX::UTCTIMESTAMP(18, 1, 51, 16, 7, 2001));
      noComplexEventDates_1_1_2.set(ComplexEventEndDate_39);
      ComplexEventDates_NoComplexEventDates_39.insert(ComplexEventEndDate_39.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_39(FIX::UTCTIMESTAMP(6, 8, 51, 16, 6, 2013));
      noComplexEventDates_1_1_2.set(ComplexEventStartDate_39);
      ComplexEventDates_NoComplexEventDates_39.insert(ComplexEventStartDate_39.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_39);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralAssignment::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_81;
        FIX::ComplexEventEndTime ComplexEventEndTime_81(FIX::UTCTIMEONLY(10, 30, 49));
        noComplexEventTimes_1_2_2_0.set(ComplexEventEndTime_81);
        ComplexEventTimes_NoComplexEventTimes_81.insert(ComplexEventEndTime_81.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_81(FIX::UTCTIMEONLY(8, 32, 7));
        noComplexEventTimes_1_2_2_0.set(ComplexEventStartTime_81);
        ComplexEventTimes_NoComplexEventTimes_81.insert(ComplexEventStartTime_81.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_81);

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_0);
      }
      {
        FIX50SP2::CollateralAssignment::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_82;
        FIX::ComplexEventEndTime ComplexEventEndTime_82(FIX::UTCTIMEONLY(1, 54, 23));
        noComplexEventTimes_1_2_2_1.set(ComplexEventEndTime_82);
        ComplexEventTimes_NoComplexEventTimes_82.insert(ComplexEventEndTime_82.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_82(FIX::UTCTIMEONLY(11, 58, 15));
        noComplexEventTimes_1_2_2_1.set(ComplexEventStartTime_82);
        ComplexEventTimes_NoComplexEventTimes_82.insert(ComplexEventStartTime_82.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_82);

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_2);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::CollateralAssignment::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_18;
    FIX::ComplexEventCondition ComplexEventCondition_18(1);
    noComplexEvents_0_2.set(ComplexEventCondition_18);
    ComplexEvents_NoComplexEvents_18.insert(ComplexEventCondition_18.getString());
    FIX::ComplexEventPrice ComplexEventPrice_18;
    ComplexEventPrice_18.setString("16126610");
    noComplexEvents_0_2.set(ComplexEventPrice_18);
    ComplexEvents_NoComplexEvents_18.insert(ComplexEventPrice_18.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_18(2);
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryMethod_18);
    ComplexEvents_NoComplexEvents_18.insert(ComplexEventPriceBoundaryMethod_18.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_18;
    ComplexEventPriceBoundaryPrecision_18.setString("91.270000");
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryPrecision_18);
    ComplexEvents_NoComplexEvents_18.insert(ComplexEventPriceBoundaryPrecision_18.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_18(3);
    noComplexEvents_0_2.set(ComplexEventPriceTimeType_18);
    ComplexEvents_NoComplexEvents_18.insert(ComplexEventPriceTimeType_18.getString());
    FIX::ComplexEventType ComplexEventType_18(3);
    noComplexEvents_0_2.set(ComplexEventType_18);
    ComplexEvents_NoComplexEvents_18.insert(ComplexEventType_18.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_18;
    ComplexOptPayoutAmount_18.setString("13398142");
    noComplexEvents_0_2.set(ComplexOptPayoutAmount_18);
    ComplexEvents_NoComplexEvents_18.insert(ComplexOptPayoutAmount_18.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_18);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CollateralAssignment::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_40;
      FIX::ComplexEventEndDate ComplexEventEndDate_40(FIX::UTCTIMESTAMP(15, 13, 36, 0, 1, 2006));
      noComplexEventDates_2_1_0.set(ComplexEventEndDate_40);
      ComplexEventDates_NoComplexEventDates_40.insert(ComplexEventEndDate_40.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_40(FIX::UTCTIMESTAMP(3, 40, 11, 22, 1, 2000));
      noComplexEventDates_2_1_0.set(ComplexEventStartDate_40);
      ComplexEventDates_NoComplexEventDates_40.insert(ComplexEventStartDate_40.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_40);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralAssignment::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_83;
        FIX::ComplexEventEndTime ComplexEventEndTime_83(FIX::UTCTIMEONLY(5, 27, 11));
        noComplexEventTimes_2_0_2_0.set(ComplexEventEndTime_83);
        ComplexEventTimes_NoComplexEventTimes_83.insert(ComplexEventEndTime_83.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_83(FIX::UTCTIMEONLY(19, 9, 59));
        noComplexEventTimes_2_0_2_0.set(ComplexEventStartTime_83);
        ComplexEventTimes_NoComplexEventTimes_83.insert(ComplexEventStartTime_83.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_83);

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_0);
    }
    {
      FIX50SP2::CollateralAssignment::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_41;
      FIX::ComplexEventEndDate ComplexEventEndDate_41(FIX::UTCTIMESTAMP(17, 7, 55, 18, 11, 2016));
      noComplexEventDates_2_1_1.set(ComplexEventEndDate_41);
      ComplexEventDates_NoComplexEventDates_41.insert(ComplexEventEndDate_41.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_41(FIX::UTCTIMESTAMP(22, 53, 13, 15, 7, 2002));
      noComplexEventDates_2_1_1.set(ComplexEventStartDate_41);
      ComplexEventDates_NoComplexEventDates_41.insert(ComplexEventStartDate_41.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_41);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralAssignment::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_84;
        FIX::ComplexEventEndTime ComplexEventEndTime_84(FIX::UTCTIMEONLY(17, 49, 44));
        noComplexEventTimes_2_1_2_0.set(ComplexEventEndTime_84);
        ComplexEventTimes_NoComplexEventTimes_84.insert(ComplexEventEndTime_84.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_84(FIX::UTCTIMEONLY(17, 12, 24));
        noComplexEventTimes_2_1_2_0.set(ComplexEventStartTime_84);
        ComplexEventTimes_NoComplexEventTimes_84.insert(ComplexEventStartTime_84.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_84);

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_0);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_1);
    }
    msg.addGroup(noComplexEvents_0_2);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::CollateralAssignment::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_15;
    FIX::EventDate EventDate_15("LOCALMKTDATE_812261045");
    noEvents_0_0.set(EventDate_15);
    EvntGrp_NoEvents_15.insert(EventDate_15.getString());
    FIX::EventPx EventPx_15;
    EventPx_15.setString("13947736");
    noEvents_0_0.set(EventPx_15);
    EvntGrp_NoEvents_15.insert(EventPx_15.getString());
    FIX::EventText EventText_15("STRING_1823370448");
    noEvents_0_0.set(EventText_15);
    EvntGrp_NoEvents_15.insert(EventText_15.getString());
    FIX::EventTime EventTime_15(FIX::UTCTIMESTAMP(6, 29, 48, 10, 4, 2001));
    noEvents_0_0.set(EventTime_15);
    EvntGrp_NoEvents_15.insert(EventTime_15.getString());
    FIX::EventType EventType_15(10);
    noEvents_0_0.set(EventType_15);
    EvntGrp_NoEvents_15.insert(EventType_15.getString());
    all_values.push_back(EvntGrp_NoEvents_15);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::CollateralAssignment::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_16;
    FIX::EventDate EventDate_16("LOCALMKTDATE_1045093253");
    noEvents_0_1.set(EventDate_16);
    EvntGrp_NoEvents_16.insert(EventDate_16.getString());
    FIX::EventPx EventPx_16;
    EventPx_16.setString("16276730");
    noEvents_0_1.set(EventPx_16);
    EvntGrp_NoEvents_16.insert(EventPx_16.getString());
    FIX::EventText EventText_16("STRING_1919509599");
    noEvents_0_1.set(EventText_16);
    EvntGrp_NoEvents_16.insert(EventText_16.getString());
    FIX::EventTime EventTime_16(FIX::UTCTIMESTAMP(20, 24, 59, 19, 7, 2001));
    noEvents_0_1.set(EventTime_16);
    EvntGrp_NoEvents_16.insert(EventTime_16.getString());
    FIX::EventType EventType_16(1);
    noEvents_0_1.set(EventType_16);
    EvntGrp_NoEvents_16.insert(EventType_16.getString());
    all_values.push_back(EvntGrp_NoEvents_16);

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::CollateralAssignment::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_17;
    FIX::EventDate EventDate_17("LOCALMKTDATE_542139735");
    noEvents_0_2.set(EventDate_17);
    EvntGrp_NoEvents_17.insert(EventDate_17.getString());
    FIX::EventPx EventPx_17;
    EventPx_17.setString("10309812");
    noEvents_0_2.set(EventPx_17);
    EvntGrp_NoEvents_17.insert(EventPx_17.getString());
    FIX::EventText EventText_17("STRING_328168601");
    noEvents_0_2.set(EventText_17);
    EvntGrp_NoEvents_17.insert(EventText_17.getString());
    FIX::EventTime EventTime_17(FIX::UTCTIMESTAMP(17, 10, 3, 17, 5, 2014));
    noEvents_0_2.set(EventTime_17);
    EvntGrp_NoEvents_17.insert(EventTime_17.getString());
    FIX::EventType EventType_17(18);
    noEvents_0_2.set(EventType_17);
    EvntGrp_NoEvents_17.insert(EventType_17.getString());
    all_values.push_back(EvntGrp_NoEvents_17);

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::CollateralAssignment::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_10;
    FIX::InstrumentPartyID InstrumentPartyID_10("STRING_1320289857");
    noInstrumentParties_0_0.set(InstrumentPartyID_10);
    InstrumentParties_NoInstrumentParties_10.insert(InstrumentPartyID_10.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_10('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_10);
    InstrumentParties_NoInstrumentParties_10.insert(InstrumentPartyIDSource_10.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_10(1749241938);
    noInstrumentParties_0_0.set(InstrumentPartyRole_10);
    InstrumentParties_NoInstrumentParties_10.insert(InstrumentPartyRole_10.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_10);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CollateralAssignment::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_25;
      FIX::InstrumentPartySubID InstrumentPartySubID_25("STRING_961702329");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_25);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_25.insert(InstrumentPartySubID_25.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_25(634492045);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_25);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_25.insert(InstrumentPartySubIDType_25.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_25);

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
    FIX::SecurityAltID SecurityAltID_16("STRING_768040190");
    noSecurityAltID_0_0.set(SecurityAltID_16);
    SecAltIDGrp_NoSecurityAltID_16.insert(SecurityAltID_16.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_16("STRING_1679585298");
    noSecurityAltID_0_0.set(SecurityAltIDSource_16);
    SecAltIDGrp_NoSecurityAltID_16.insert(SecurityAltIDSource_16.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_16);

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_14;
  FIX::SecurityXML SecurityXML_15("XMLDATA_2017880546");
  msg.set(SecurityXML_15);
  FIX::SecurityXMLLen SecurityXMLLen_7(540066141);
  msg.set(SecurityXMLLen_7);
  FIX::SecurityXMLSchema SecurityXMLSchema_7("STRING_1070139964");
  msg.set(SecurityXMLSchema_7);
  SecurityXML_14.insert(SecurityXMLSchema_7.getString());
  all_values.push_back(SecurityXML_14);

  // MiscFeesGrp
  // Group MiscFeesGrp.NoMiscFees
  {
    FIX50SP2::CollateralAssignment::NoMiscFees noMiscFees_0_0;
    // MiscFeesGrp.NoMiscFees
    multiset<string> MiscFeesGrp_NoMiscFees_9;
    FIX::MiscFeeAmt MiscFeeAmt_9;
    MiscFeeAmt_9.setString("12304254");
    noMiscFees_0_0.set(MiscFeeAmt_9);
    MiscFeesGrp_NoMiscFees_9.insert(MiscFeeAmt_9.getString());
    FIX::MiscFeeBasis MiscFeeBasis_9(1);
    noMiscFees_0_0.set(MiscFeeBasis_9);
    MiscFeesGrp_NoMiscFees_9.insert(MiscFeeBasis_9.getString());
    FIX::MiscFeeCurr MiscFeeCurr_9("JPY");
    noMiscFees_0_0.set(MiscFeeCurr_9);
    MiscFeesGrp_NoMiscFees_9.insert(MiscFeeCurr_9.getString());
    FIX::MiscFeeType MiscFeeType_9("STRING_8");
    noMiscFees_0_0.set(MiscFeeType_9);
    MiscFeesGrp_NoMiscFees_9.insert(MiscFeeType_9.getString());
    all_values.push_back(MiscFeesGrp_NoMiscFees_9);

    msg.addGroup(noMiscFees_0_0);
  }
  {
    FIX50SP2::CollateralAssignment::NoMiscFees noMiscFees_0_1;
    // MiscFeesGrp.NoMiscFees
    multiset<string> MiscFeesGrp_NoMiscFees_10;
    FIX::MiscFeeAmt MiscFeeAmt_10;
    MiscFeeAmt_10.setString("17000139");
    noMiscFees_0_1.set(MiscFeeAmt_10);
    MiscFeesGrp_NoMiscFees_10.insert(MiscFeeAmt_10.getString());
    FIX::MiscFeeBasis MiscFeeBasis_10(2);
    noMiscFees_0_1.set(MiscFeeBasis_10);
    MiscFeesGrp_NoMiscFees_10.insert(MiscFeeBasis_10.getString());
    FIX::MiscFeeCurr MiscFeeCurr_10("JPY");
    noMiscFees_0_1.set(MiscFeeCurr_10);
    MiscFeesGrp_NoMiscFees_10.insert(MiscFeeCurr_10.getString());
    FIX::MiscFeeType MiscFeeType_10("STRING_11");
    noMiscFees_0_1.set(MiscFeeType_10);
    MiscFeesGrp_NoMiscFees_10.insert(MiscFeeType_10.getString());
    all_values.push_back(MiscFeesGrp_NoMiscFees_10);

    msg.addGroup(noMiscFees_0_1);
  }
  {
    FIX50SP2::CollateralAssignment::NoMiscFees noMiscFees_0_2;
    // MiscFeesGrp.NoMiscFees
    multiset<string> MiscFeesGrp_NoMiscFees_11;
    FIX::MiscFeeAmt MiscFeeAmt_11;
    MiscFeeAmt_11.setString("5149956");
    noMiscFees_0_2.set(MiscFeeAmt_11);
    MiscFeesGrp_NoMiscFees_11.insert(MiscFeeAmt_11.getString());
    FIX::MiscFeeBasis MiscFeeBasis_11(1);
    noMiscFees_0_2.set(MiscFeeBasis_11);
    MiscFeesGrp_NoMiscFees_11.insert(MiscFeeBasis_11.getString());
    FIX::MiscFeeCurr MiscFeeCurr_11("CHF");
    noMiscFees_0_2.set(MiscFeeCurr_11);
    MiscFeesGrp_NoMiscFees_11.insert(MiscFeeCurr_11.getString());
    FIX::MiscFeeType MiscFeeType_11("STRING_6");
    noMiscFees_0_2.set(MiscFeeType_11);
    MiscFeesGrp_NoMiscFees_11.insert(MiscFeeType_11.getString());
    all_values.push_back(MiscFeesGrp_NoMiscFees_11);

    msg.addGroup(noMiscFees_0_2);
  }
  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::CollateralAssignment::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_18;
    FIX::PartyID PartyID_18("STRING_1360694816");
    noPartyIDs_0_0.set(PartyID_18);
    Parties_NoPartyIDs_18.insert(PartyID_18.getString());
    FIX::PartyIDSource PartyIDSource_18('H');
    noPartyIDs_0_0.set(PartyIDSource_18);
    Parties_NoPartyIDs_18.insert(PartyIDSource_18.getString());
    FIX::PartyRole PartyRole_18(41);
    noPartyIDs_0_0.set(PartyRole_18);
    Parties_NoPartyIDs_18.insert(PartyRole_18.getString());
    all_values.push_back(Parties_NoPartyIDs_18);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::CollateralAssignment::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_34;
      FIX::PartySubID PartySubID_34("STRING_265407147");
      noPartySubIDs_0_1_0.set(PartySubID_34);
      PtysSubGrp_NoPartySubIDs_34.insert(PartySubID_34.getString());
      FIX::PartySubIDType PartySubIDType_34(18);
      noPartySubIDs_0_1_0.set(PartySubIDType_34);
      PtysSubGrp_NoPartySubIDs_34.insert(PartySubIDType_34.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_34);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::CollateralAssignment::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_35;
      FIX::PartySubID PartySubID_35("STRING_2103635481");
      noPartySubIDs_0_1_1.set(PartySubID_35);
      PtysSubGrp_NoPartySubIDs_35.insert(PartySubID_35.getString());
      FIX::PartySubIDType PartySubIDType_35(17);
      noPartySubIDs_0_1_1.set(PartySubIDType_35);
      PtysSubGrp_NoPartySubIDs_35.insert(PartySubIDType_35.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_35);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::CollateralAssignment::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_36;
      FIX::PartySubID PartySubID_36("STRING_457411178");
      noPartySubIDs_0_1_2.set(PartySubID_36);
      PtysSubGrp_NoPartySubIDs_36.insert(PartySubID_36.getString());
      FIX::PartySubIDType PartySubIDType_36(28);
      noPartySubIDs_0_1_2.set(PartySubIDType_36);
      PtysSubGrp_NoPartySubIDs_36.insert(PartySubIDType_36.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_36);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::CollateralAssignment::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_19;
    FIX::PartyID PartyID_19("STRING_432000843");
    noPartyIDs_0_1.set(PartyID_19);
    Parties_NoPartyIDs_19.insert(PartyID_19.getString());
    FIX::PartyIDSource PartyIDSource_19('E');
    noPartyIDs_0_1.set(PartyIDSource_19);
    Parties_NoPartyIDs_19.insert(PartyIDSource_19.getString());
    FIX::PartyRole PartyRole_19(39);
    noPartyIDs_0_1.set(PartyRole_19);
    Parties_NoPartyIDs_19.insert(PartyRole_19.getString());
    all_values.push_back(Parties_NoPartyIDs_19);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::CollateralAssignment::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_37;
      FIX::PartySubID PartySubID_37("STRING_1260211883");
      noPartySubIDs_1_1_0.set(PartySubID_37);
      PtysSubGrp_NoPartySubIDs_37.insert(PartySubID_37.getString());
      FIX::PartySubIDType PartySubIDType_37(1);
      noPartySubIDs_1_1_0.set(PartySubIDType_37);
      PtysSubGrp_NoPartySubIDs_37.insert(PartySubIDType_37.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_37);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::CollateralAssignment::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_38;
      FIX::PartySubID PartySubID_38("STRING_957427563");
      noPartySubIDs_1_1_1.set(PartySubID_38);
      PtysSubGrp_NoPartySubIDs_38.insert(PartySubID_38.getString());
      FIX::PartySubIDType PartySubIDType_38(32);
      noPartySubIDs_1_1_1.set(PartySubIDType_38);
      PtysSubGrp_NoPartySubIDs_38.insert(PartySubIDType_38.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_38);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::CollateralAssignment::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_20;
    FIX::PartyID PartyID_20("STRING_345821663");
    noPartyIDs_0_2.set(PartyID_20);
    Parties_NoPartyIDs_20.insert(PartyID_20.getString());
    FIX::PartyIDSource PartyIDSource_20('1');
    noPartyIDs_0_2.set(PartyIDSource_20);
    Parties_NoPartyIDs_20.insert(PartyIDSource_20.getString());
    FIX::PartyRole PartyRole_20(15);
    noPartyIDs_0_2.set(PartyRole_20);
    Parties_NoPartyIDs_20.insert(PartyRole_20.getString());
    all_values.push_back(Parties_NoPartyIDs_20);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::CollateralAssignment::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_39;
      FIX::PartySubID PartySubID_39("STRING_207340685");
      noPartySubIDs_2_1_0.set(PartySubID_39);
      PtysSubGrp_NoPartySubIDs_39.insert(PartySubID_39.getString());
      FIX::PartySubIDType PartySubIDType_39(14);
      noPartySubIDs_2_1_0.set(PartySubIDType_39);
      PtysSubGrp_NoPartySubIDs_39.insert(PartySubIDType_39.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_39);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::CollateralAssignment::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_40;
      FIX::PartySubID PartySubID_40("STRING_1105294945");
      noPartySubIDs_2_1_1.set(PartySubID_40);
      PtysSubGrp_NoPartySubIDs_40.insert(PartySubID_40.getString());
      FIX::PartySubIDType PartySubIDType_40(11);
      noPartySubIDs_2_1_1.set(PartySubIDType_40);
      PtysSubGrp_NoPartySubIDs_40.insert(PartySubIDType_40.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_40);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_1);
    }
    {
      FIX50SP2::CollateralAssignment::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_41;
      FIX::PartySubID PartySubID_41("STRING_1563384701");
      noPartySubIDs_2_1_2.set(PartySubID_41);
      PtysSubGrp_NoPartySubIDs_41.insert(PartySubID_41.getString());
      FIX::PartySubIDType PartySubIDType_41(29);
      noPartySubIDs_2_1_2.set(PartySubIDType_41);
      PtysSubGrp_NoPartySubIDs_41.insert(PartySubIDType_41.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_41);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_2);
    }
    msg.addGroup(noPartyIDs_0_2);
  }
  // SettlInstructionsData
  multiset<string> SettlInstructionsData_5;
  FIX::SettlDeliveryType SettlDeliveryType_5(1);
  msg.set(SettlDeliveryType_5);
  SettlInstructionsData_5.insert(SettlDeliveryType_5.getString());
  FIX::StandInstDbID StandInstDbID_5("STRING_25771382");
  msg.set(StandInstDbID_5);
  SettlInstructionsData_5.insert(StandInstDbID_5.getString());
  FIX::StandInstDbName StandInstDbName_5("STRING_400037365");
  msg.set(StandInstDbName_5);
  SettlInstructionsData_5.insert(StandInstDbName_5.getString());
  FIX::StandInstDbType StandInstDbType_5(2);
  msg.set(StandInstDbType_5);
  SettlInstructionsData_5.insert(StandInstDbType_5.getString());
  all_values.push_back(SettlInstructionsData_5);

  // DlvyInstGrp
  // Group DlvyInstGrp.NoDlvyInst
  {
    FIX50SP2::CollateralAssignment::NoDlvyInst noDlvyInst_0_0;
    // DlvyInstGrp.NoDlvyInst
    multiset<string> DlvyInstGrp_NoDlvyInst_7;
    FIX::DlvyInstType DlvyInstType_7('C');
    noDlvyInst_0_0.set(DlvyInstType_7);
    DlvyInstGrp_NoDlvyInst_7.insert(DlvyInstType_7.getString());
    FIX::SettlInstSource SettlInstSource_7('2');
    noDlvyInst_0_0.set(SettlInstSource_7);
    DlvyInstGrp_NoDlvyInst_7.insert(SettlInstSource_7.getString());
    all_values.push_back(DlvyInstGrp_NoDlvyInst_7);

    // SettlParties
    // Group SettlParties.NoSettlPartyIDs
    {
      FIX50SP2::CollateralAssignment::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_1_0;
      // SettlParties.NoSettlPartyIDs
      multiset<string> SettlParties_NoSettlPartyIDs_13;
      FIX::SettlPartyID SettlPartyID_13("STRING_799381077");
      noSettlPartyIDs_0_1_0.set(SettlPartyID_13);
      SettlParties_NoSettlPartyIDs_13.insert(SettlPartyID_13.getString());
      FIX::SettlPartyIDSource SettlPartyIDSource_13('1');
      noSettlPartyIDs_0_1_0.set(SettlPartyIDSource_13);
      SettlParties_NoSettlPartyIDs_13.insert(SettlPartyIDSource_13.getString());
      FIX::SettlPartyRole SettlPartyRole_13(1854726580);
      noSettlPartyIDs_0_1_0.set(SettlPartyRole_13);
      SettlParties_NoSettlPartyIDs_13.insert(SettlPartyRole_13.getString());
      all_values.push_back(SettlParties_NoSettlPartyIDs_13);

      // SettlPtysSubGrp
      // Group SettlPtysSubGrp.NoSettlPartySubIDs
      {
        FIX50SP2::CollateralAssignment::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_2_0;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_31;
        FIX::SettlPartySubID SettlPartySubID_31("STRING_1998282965");
        noSettlPartySubIDs_0_0_2_0.set(SettlPartySubID_31);
        SettlPtysSubGrp_NoSettlPartySubIDs_31.insert(SettlPartySubID_31.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_31(139243775);
        noSettlPartySubIDs_0_0_2_0.set(SettlPartySubIDType_31);
        SettlPtysSubGrp_NoSettlPartySubIDs_31.insert(SettlPartySubIDType_31.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_31);

        noSettlPartyIDs_0_1_0.addGroup(noSettlPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::CollateralAssignment::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_2_1;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_32;
        FIX::SettlPartySubID SettlPartySubID_32("STRING_1584600332");
        noSettlPartySubIDs_0_0_2_1.set(SettlPartySubID_32);
        SettlPtysSubGrp_NoSettlPartySubIDs_32.insert(SettlPartySubID_32.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_32(1115057482);
        noSettlPartySubIDs_0_0_2_1.set(SettlPartySubIDType_32);
        SettlPtysSubGrp_NoSettlPartySubIDs_32.insert(SettlPartySubIDType_32.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_32);

        noSettlPartyIDs_0_1_0.addGroup(noSettlPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::CollateralAssignment::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_2_2;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_33;
        FIX::SettlPartySubID SettlPartySubID_33("STRING_1641384582");
        noSettlPartySubIDs_0_0_2_2.set(SettlPartySubID_33);
        SettlPtysSubGrp_NoSettlPartySubIDs_33.insert(SettlPartySubID_33.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_33(697328567);
        noSettlPartySubIDs_0_0_2_2.set(SettlPartySubIDType_33);
        SettlPtysSubGrp_NoSettlPartySubIDs_33.insert(SettlPartySubIDType_33.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_33);

        noSettlPartyIDs_0_1_0.addGroup(noSettlPartySubIDs_0_0_2_2);
      }
      noDlvyInst_0_0.addGroup(noSettlPartyIDs_0_1_0);
    }
    {
      FIX50SP2::CollateralAssignment::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_1_1;
      // SettlParties.NoSettlPartyIDs
      multiset<string> SettlParties_NoSettlPartyIDs_14;
      FIX::SettlPartyID SettlPartyID_14("STRING_1462257445");
      noSettlPartyIDs_0_1_1.set(SettlPartyID_14);
      SettlParties_NoSettlPartyIDs_14.insert(SettlPartyID_14.getString());
      FIX::SettlPartyIDSource SettlPartyIDSource_14('4');
      noSettlPartyIDs_0_1_1.set(SettlPartyIDSource_14);
      SettlParties_NoSettlPartyIDs_14.insert(SettlPartyIDSource_14.getString());
      FIX::SettlPartyRole SettlPartyRole_14(448021879);
      noSettlPartyIDs_0_1_1.set(SettlPartyRole_14);
      SettlParties_NoSettlPartyIDs_14.insert(SettlPartyRole_14.getString());
      all_values.push_back(SettlParties_NoSettlPartyIDs_14);

      // SettlPtysSubGrp
      // Group SettlPtysSubGrp.NoSettlPartySubIDs
      {
        FIX50SP2::CollateralAssignment::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_2_0;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_34;
        FIX::SettlPartySubID SettlPartySubID_34("STRING_518221975");
        noSettlPartySubIDs_0_1_2_0.set(SettlPartySubID_34);
        SettlPtysSubGrp_NoSettlPartySubIDs_34.insert(SettlPartySubID_34.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_34(1898729109);
        noSettlPartySubIDs_0_1_2_0.set(SettlPartySubIDType_34);
        SettlPtysSubGrp_NoSettlPartySubIDs_34.insert(SettlPartySubIDType_34.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_34);

        noSettlPartyIDs_0_1_1.addGroup(noSettlPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::CollateralAssignment::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_2_1;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_35;
        FIX::SettlPartySubID SettlPartySubID_35("STRING_547178560");
        noSettlPartySubIDs_0_1_2_1.set(SettlPartySubID_35);
        SettlPtysSubGrp_NoSettlPartySubIDs_35.insert(SettlPartySubID_35.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_35(725562660);
        noSettlPartySubIDs_0_1_2_1.set(SettlPartySubIDType_35);
        SettlPtysSubGrp_NoSettlPartySubIDs_35.insert(SettlPartySubIDType_35.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_35);

        noSettlPartyIDs_0_1_1.addGroup(noSettlPartySubIDs_0_1_2_1);
      }
      noDlvyInst_0_0.addGroup(noSettlPartyIDs_0_1_1);
    }
    {
      FIX50SP2::CollateralAssignment::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_1_2;
      // SettlParties.NoSettlPartyIDs
      multiset<string> SettlParties_NoSettlPartyIDs_15;
      FIX::SettlPartyID SettlPartyID_15("STRING_1082651562");
      noSettlPartyIDs_0_1_2.set(SettlPartyID_15);
      SettlParties_NoSettlPartyIDs_15.insert(SettlPartyID_15.getString());
      FIX::SettlPartyIDSource SettlPartyIDSource_15('1');
      noSettlPartyIDs_0_1_2.set(SettlPartyIDSource_15);
      SettlParties_NoSettlPartyIDs_15.insert(SettlPartyIDSource_15.getString());
      FIX::SettlPartyRole SettlPartyRole_15(1447899010);
      noSettlPartyIDs_0_1_2.set(SettlPartyRole_15);
      SettlParties_NoSettlPartyIDs_15.insert(SettlPartyRole_15.getString());
      all_values.push_back(SettlParties_NoSettlPartyIDs_15);

      // SettlPtysSubGrp
      // Group SettlPtysSubGrp.NoSettlPartySubIDs
      {
        FIX50SP2::CollateralAssignment::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_2_2_0;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_36;
        FIX::SettlPartySubID SettlPartySubID_36("STRING_893177092");
        noSettlPartySubIDs_0_2_2_0.set(SettlPartySubID_36);
        SettlPtysSubGrp_NoSettlPartySubIDs_36.insert(SettlPartySubID_36.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_36(263210152);
        noSettlPartySubIDs_0_2_2_0.set(SettlPartySubIDType_36);
        SettlPtysSubGrp_NoSettlPartySubIDs_36.insert(SettlPartySubIDType_36.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_36);

        noSettlPartyIDs_0_1_2.addGroup(noSettlPartySubIDs_0_2_2_0);
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
    FIX::SettlInstSource SettlInstSource_8('3');
    noDlvyInst_0_1.set(SettlInstSource_8);
    DlvyInstGrp_NoDlvyInst_8.insert(SettlInstSource_8.getString());
    all_values.push_back(DlvyInstGrp_NoDlvyInst_8);

    // SettlParties
    // Group SettlParties.NoSettlPartyIDs
    {
      FIX50SP2::CollateralAssignment::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_1_1_0;
      // SettlParties.NoSettlPartyIDs
      multiset<string> SettlParties_NoSettlPartyIDs_16;
      FIX::SettlPartyID SettlPartyID_16("STRING_1213744238");
      noSettlPartyIDs_1_1_0.set(SettlPartyID_16);
      SettlParties_NoSettlPartyIDs_16.insert(SettlPartyID_16.getString());
      FIX::SettlPartyIDSource SettlPartyIDSource_16('2');
      noSettlPartyIDs_1_1_0.set(SettlPartyIDSource_16);
      SettlParties_NoSettlPartyIDs_16.insert(SettlPartyIDSource_16.getString());
      FIX::SettlPartyRole SettlPartyRole_16(1757155218);
      noSettlPartyIDs_1_1_0.set(SettlPartyRole_16);
      SettlParties_NoSettlPartyIDs_16.insert(SettlPartyRole_16.getString());
      all_values.push_back(SettlParties_NoSettlPartyIDs_16);

      // SettlPtysSubGrp
      // Group SettlPtysSubGrp.NoSettlPartySubIDs
      {
        FIX50SP2::CollateralAssignment::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_2_0;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_37;
        FIX::SettlPartySubID SettlPartySubID_37("STRING_677289239");
        noSettlPartySubIDs_1_0_2_0.set(SettlPartySubID_37);
        SettlPtysSubGrp_NoSettlPartySubIDs_37.insert(SettlPartySubID_37.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_37(883762512);
        noSettlPartySubIDs_1_0_2_0.set(SettlPartySubIDType_37);
        SettlPtysSubGrp_NoSettlPartySubIDs_37.insert(SettlPartySubIDType_37.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_37);

        noSettlPartyIDs_1_1_0.addGroup(noSettlPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::CollateralAssignment::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_2_1;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_38;
        FIX::SettlPartySubID SettlPartySubID_38("STRING_1875814557");
        noSettlPartySubIDs_1_0_2_1.set(SettlPartySubID_38);
        SettlPtysSubGrp_NoSettlPartySubIDs_38.insert(SettlPartySubID_38.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_38(1934081495);
        noSettlPartySubIDs_1_0_2_1.set(SettlPartySubIDType_38);
        SettlPtysSubGrp_NoSettlPartySubIDs_38.insert(SettlPartySubIDType_38.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_38);

        noSettlPartyIDs_1_1_0.addGroup(noSettlPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::CollateralAssignment::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_2_2;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_39;
        FIX::SettlPartySubID SettlPartySubID_39("STRING_734561830");
        noSettlPartySubIDs_1_0_2_2.set(SettlPartySubID_39);
        SettlPtysSubGrp_NoSettlPartySubIDs_39.insert(SettlPartySubID_39.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_39(2015058332);
        noSettlPartySubIDs_1_0_2_2.set(SettlPartySubIDType_39);
        SettlPtysSubGrp_NoSettlPartySubIDs_39.insert(SettlPartySubIDType_39.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_39);

        noSettlPartyIDs_1_1_0.addGroup(noSettlPartySubIDs_1_0_2_2);
      }
      noDlvyInst_0_1.addGroup(noSettlPartyIDs_1_1_0);
    }
    {
      FIX50SP2::CollateralAssignment::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_1_1_1;
      // SettlParties.NoSettlPartyIDs
      multiset<string> SettlParties_NoSettlPartyIDs_17;
      FIX::SettlPartyID SettlPartyID_17("STRING_1371198179");
      noSettlPartyIDs_1_1_1.set(SettlPartyID_17);
      SettlParties_NoSettlPartyIDs_17.insert(SettlPartyID_17.getString());
      FIX::SettlPartyIDSource SettlPartyIDSource_17('1');
      noSettlPartyIDs_1_1_1.set(SettlPartyIDSource_17);
      SettlParties_NoSettlPartyIDs_17.insert(SettlPartyIDSource_17.getString());
      FIX::SettlPartyRole SettlPartyRole_17(1508959267);
      noSettlPartyIDs_1_1_1.set(SettlPartyRole_17);
      SettlParties_NoSettlPartyIDs_17.insert(SettlPartyRole_17.getString());
      all_values.push_back(SettlParties_NoSettlPartyIDs_17);

      // SettlPtysSubGrp
      // Group SettlPtysSubGrp.NoSettlPartySubIDs
      {
        FIX50SP2::CollateralAssignment::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_1_2_0;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_40;
        FIX::SettlPartySubID SettlPartySubID_40("STRING_1164393110");
        noSettlPartySubIDs_1_1_2_0.set(SettlPartySubID_40);
        SettlPtysSubGrp_NoSettlPartySubIDs_40.insert(SettlPartySubID_40.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_40(1960287765);
        noSettlPartySubIDs_1_1_2_0.set(SettlPartySubIDType_40);
        SettlPtysSubGrp_NoSettlPartySubIDs_40.insert(SettlPartySubIDType_40.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_40);

        noSettlPartyIDs_1_1_1.addGroup(noSettlPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::CollateralAssignment::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_1_2_1;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_41;
        FIX::SettlPartySubID SettlPartySubID_41("STRING_369064977");
        noSettlPartySubIDs_1_1_2_1.set(SettlPartySubID_41);
        SettlPtysSubGrp_NoSettlPartySubIDs_41.insert(SettlPartySubID_41.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_41(824988571);
        noSettlPartySubIDs_1_1_2_1.set(SettlPartySubIDType_41);
        SettlPtysSubGrp_NoSettlPartySubIDs_41.insert(SettlPartySubIDType_41.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_41);

        noSettlPartyIDs_1_1_1.addGroup(noSettlPartySubIDs_1_1_2_1);
      }
      noDlvyInst_0_1.addGroup(noSettlPartyIDs_1_1_1);
    }
    {
      FIX50SP2::CollateralAssignment::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_1_1_2;
      // SettlParties.NoSettlPartyIDs
      multiset<string> SettlParties_NoSettlPartyIDs_18;
      FIX::SettlPartyID SettlPartyID_18("STRING_331026092");
      noSettlPartyIDs_1_1_2.set(SettlPartyID_18);
      SettlParties_NoSettlPartyIDs_18.insert(SettlPartyID_18.getString());
      FIX::SettlPartyIDSource SettlPartyIDSource_18('1');
      noSettlPartyIDs_1_1_2.set(SettlPartyIDSource_18);
      SettlParties_NoSettlPartyIDs_18.insert(SettlPartyIDSource_18.getString());
      FIX::SettlPartyRole SettlPartyRole_18(1372167131);
      noSettlPartyIDs_1_1_2.set(SettlPartyRole_18);
      SettlParties_NoSettlPartyIDs_18.insert(SettlPartyRole_18.getString());
      all_values.push_back(SettlParties_NoSettlPartyIDs_18);

      // SettlPtysSubGrp
      // Group SettlPtysSubGrp.NoSettlPartySubIDs
      {
        FIX50SP2::CollateralAssignment::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_2_2_0;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_42;
        FIX::SettlPartySubID SettlPartySubID_42("STRING_1202962001");
        noSettlPartySubIDs_1_2_2_0.set(SettlPartySubID_42);
        SettlPtysSubGrp_NoSettlPartySubIDs_42.insert(SettlPartySubID_42.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_42(877156988);
        noSettlPartySubIDs_1_2_2_0.set(SettlPartySubIDType_42);
        SettlPtysSubGrp_NoSettlPartySubIDs_42.insert(SettlPartySubIDType_42.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_42);

        noSettlPartyIDs_1_1_2.addGroup(noSettlPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::CollateralAssignment::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_2_2_1;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_43;
        FIX::SettlPartySubID SettlPartySubID_43("STRING_357004114");
        noSettlPartySubIDs_1_2_2_1.set(SettlPartySubID_43);
        SettlPtysSubGrp_NoSettlPartySubIDs_43.insert(SettlPartySubID_43.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_43(1701514616);
        noSettlPartySubIDs_1_2_2_1.set(SettlPartySubIDType_43);
        SettlPtysSubGrp_NoSettlPartySubIDs_43.insert(SettlPartySubIDType_43.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_43);

        noSettlPartyIDs_1_1_2.addGroup(noSettlPartySubIDs_1_2_2_1);
      }
      {
        FIX50SP2::CollateralAssignment::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_2_2_2;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_44;
        FIX::SettlPartySubID SettlPartySubID_44("STRING_1770334081");
        noSettlPartySubIDs_1_2_2_2.set(SettlPartySubID_44);
        SettlPtysSubGrp_NoSettlPartySubIDs_44.insert(SettlPartySubID_44.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_44(620214266);
        noSettlPartySubIDs_1_2_2_2.set(SettlPartySubIDType_44);
        SettlPtysSubGrp_NoSettlPartySubIDs_44.insert(SettlPartySubIDType_44.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_44);

        noSettlPartyIDs_1_1_2.addGroup(noSettlPartySubIDs_1_2_2_2);
      }
      noDlvyInst_0_1.addGroup(noSettlPartyIDs_1_1_2);
    }
    msg.addGroup(noDlvyInst_0_1);
  }
  {
    FIX50SP2::CollateralAssignment::NoDlvyInst noDlvyInst_0_2;
    // DlvyInstGrp.NoDlvyInst
    multiset<string> DlvyInstGrp_NoDlvyInst_9;
    FIX::DlvyInstType DlvyInstType_9('C');
    noDlvyInst_0_2.set(DlvyInstType_9);
    DlvyInstGrp_NoDlvyInst_9.insert(DlvyInstType_9.getString());
    FIX::SettlInstSource SettlInstSource_9('2');
    noDlvyInst_0_2.set(SettlInstSource_9);
    DlvyInstGrp_NoDlvyInst_9.insert(SettlInstSource_9.getString());
    all_values.push_back(DlvyInstGrp_NoDlvyInst_9);

    // SettlParties
    // Group SettlParties.NoSettlPartyIDs
    {
      FIX50SP2::CollateralAssignment::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_2_1_0;
      // SettlParties.NoSettlPartyIDs
      multiset<string> SettlParties_NoSettlPartyIDs_19;
      FIX::SettlPartyID SettlPartyID_19("STRING_1292099204");
      noSettlPartyIDs_2_1_0.set(SettlPartyID_19);
      SettlParties_NoSettlPartyIDs_19.insert(SettlPartyID_19.getString());
      FIX::SettlPartyIDSource SettlPartyIDSource_19('7');
      noSettlPartyIDs_2_1_0.set(SettlPartyIDSource_19);
      SettlParties_NoSettlPartyIDs_19.insert(SettlPartyIDSource_19.getString());
      FIX::SettlPartyRole SettlPartyRole_19(669101946);
      noSettlPartyIDs_2_1_0.set(SettlPartyRole_19);
      SettlParties_NoSettlPartyIDs_19.insert(SettlPartyRole_19.getString());
      all_values.push_back(SettlParties_NoSettlPartyIDs_19);

      // SettlPtysSubGrp
      // Group SettlPtysSubGrp.NoSettlPartySubIDs
      {
        FIX50SP2::CollateralAssignment::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_0_2_0;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_45;
        FIX::SettlPartySubID SettlPartySubID_45("STRING_1471262292");
        noSettlPartySubIDs_2_0_2_0.set(SettlPartySubID_45);
        SettlPtysSubGrp_NoSettlPartySubIDs_45.insert(SettlPartySubID_45.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_45(1552864459);
        noSettlPartySubIDs_2_0_2_0.set(SettlPartySubIDType_45);
        SettlPtysSubGrp_NoSettlPartySubIDs_45.insert(SettlPartySubIDType_45.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_45);

        noSettlPartyIDs_2_1_0.addGroup(noSettlPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::CollateralAssignment::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_0_2_1;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_46;
        FIX::SettlPartySubID SettlPartySubID_46("STRING_1041518091");
        noSettlPartySubIDs_2_0_2_1.set(SettlPartySubID_46);
        SettlPtysSubGrp_NoSettlPartySubIDs_46.insert(SettlPartySubID_46.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_46(1257860139);
        noSettlPartySubIDs_2_0_2_1.set(SettlPartySubIDType_46);
        SettlPtysSubGrp_NoSettlPartySubIDs_46.insert(SettlPartySubIDType_46.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_46);

        noSettlPartyIDs_2_1_0.addGroup(noSettlPartySubIDs_2_0_2_1);
      }
      {
        FIX50SP2::CollateralAssignment::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_0_2_2;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_47;
        FIX::SettlPartySubID SettlPartySubID_47("STRING_139942641");
        noSettlPartySubIDs_2_0_2_2.set(SettlPartySubID_47);
        SettlPtysSubGrp_NoSettlPartySubIDs_47.insert(SettlPartySubID_47.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_47(909092776);
        noSettlPartySubIDs_2_0_2_2.set(SettlPartySubIDType_47);
        SettlPtysSubGrp_NoSettlPartySubIDs_47.insert(SettlPartySubIDType_47.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_47);

        noSettlPartyIDs_2_1_0.addGroup(noSettlPartySubIDs_2_0_2_2);
      }
      noDlvyInst_0_2.addGroup(noSettlPartyIDs_2_1_0);
    }
    {
      FIX50SP2::CollateralAssignment::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_2_1_1;
      // SettlParties.NoSettlPartyIDs
      multiset<string> SettlParties_NoSettlPartyIDs_20;
      FIX::SettlPartyID SettlPartyID_20("STRING_481574670");
      noSettlPartyIDs_2_1_1.set(SettlPartyID_20);
      SettlParties_NoSettlPartyIDs_20.insert(SettlPartyID_20.getString());
      FIX::SettlPartyIDSource SettlPartyIDSource_20('1');
      noSettlPartyIDs_2_1_1.set(SettlPartyIDSource_20);
      SettlParties_NoSettlPartyIDs_20.insert(SettlPartyIDSource_20.getString());
      FIX::SettlPartyRole SettlPartyRole_20(270568395);
      noSettlPartyIDs_2_1_1.set(SettlPartyRole_20);
      SettlParties_NoSettlPartyIDs_20.insert(SettlPartyRole_20.getString());
      all_values.push_back(SettlParties_NoSettlPartyIDs_20);

      // SettlPtysSubGrp
      // Group SettlPtysSubGrp.NoSettlPartySubIDs
      {
        FIX50SP2::CollateralAssignment::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_1_2_0;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_48;
        FIX::SettlPartySubID SettlPartySubID_48("STRING_1006471415");
        noSettlPartySubIDs_2_1_2_0.set(SettlPartySubID_48);
        SettlPtysSubGrp_NoSettlPartySubIDs_48.insert(SettlPartySubID_48.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_48(83372512);
        noSettlPartySubIDs_2_1_2_0.set(SettlPartySubIDType_48);
        SettlPtysSubGrp_NoSettlPartySubIDs_48.insert(SettlPartySubIDType_48.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_48);

        noSettlPartyIDs_2_1_1.addGroup(noSettlPartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::CollateralAssignment::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_1_2_1;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_49;
        FIX::SettlPartySubID SettlPartySubID_49("STRING_771682745");
        noSettlPartySubIDs_2_1_2_1.set(SettlPartySubID_49);
        SettlPtysSubGrp_NoSettlPartySubIDs_49.insert(SettlPartySubID_49.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_49(1831459986);
        noSettlPartySubIDs_2_1_2_1.set(SettlPartySubIDType_49);
        SettlPtysSubGrp_NoSettlPartySubIDs_49.insert(SettlPartySubIDType_49.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_49);

        noSettlPartyIDs_2_1_1.addGroup(noSettlPartySubIDs_2_1_2_1);
      }
      {
        FIX50SP2::CollateralAssignment::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_1_2_2;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_50;
        FIX::SettlPartySubID SettlPartySubID_50("STRING_414398604");
        noSettlPartySubIDs_2_1_2_2.set(SettlPartySubID_50);
        SettlPtysSubGrp_NoSettlPartySubIDs_50.insert(SettlPartySubID_50.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_50(891993184);
        noSettlPartySubIDs_2_1_2_2.set(SettlPartySubIDType_50);
        SettlPtysSubGrp_NoSettlPartySubIDs_50.insert(SettlPartySubIDType_50.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_50);

        noSettlPartyIDs_2_1_1.addGroup(noSettlPartySubIDs_2_1_2_2);
      }
      noDlvyInst_0_2.addGroup(noSettlPartyIDs_2_1_1);
    }
    {
      FIX50SP2::CollateralAssignment::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_2_1_2;
      // SettlParties.NoSettlPartyIDs
      multiset<string> SettlParties_NoSettlPartyIDs_21;
      FIX::SettlPartyID SettlPartyID_21("STRING_1056143469");
      noSettlPartyIDs_2_1_2.set(SettlPartyID_21);
      SettlParties_NoSettlPartyIDs_21.insert(SettlPartyID_21.getString());
      FIX::SettlPartyIDSource SettlPartyIDSource_21('1');
      noSettlPartyIDs_2_1_2.set(SettlPartyIDSource_21);
      SettlParties_NoSettlPartyIDs_21.insert(SettlPartyIDSource_21.getString());
      FIX::SettlPartyRole SettlPartyRole_21(2094955185);
      noSettlPartyIDs_2_1_2.set(SettlPartyRole_21);
      SettlParties_NoSettlPartyIDs_21.insert(SettlPartyRole_21.getString());
      all_values.push_back(SettlParties_NoSettlPartyIDs_21);

      // SettlPtysSubGrp
      // Group SettlPtysSubGrp.NoSettlPartySubIDs
      {
        FIX50SP2::CollateralAssignment::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_2_2_0;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_51;
        FIX::SettlPartySubID SettlPartySubID_51("STRING_1827991470");
        noSettlPartySubIDs_2_2_2_0.set(SettlPartySubID_51);
        SettlPtysSubGrp_NoSettlPartySubIDs_51.insert(SettlPartySubID_51.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_51(1648986154);
        noSettlPartySubIDs_2_2_2_0.set(SettlPartySubIDType_51);
        SettlPtysSubGrp_NoSettlPartySubIDs_51.insert(SettlPartySubIDType_51.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_51);

        noSettlPartyIDs_2_1_2.addGroup(noSettlPartySubIDs_2_2_2_0);
      }
      noDlvyInst_0_2.addGroup(noSettlPartyIDs_2_1_2);
    }
    msg.addGroup(noDlvyInst_0_2);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_3;
  FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_3("EUR");
  msg.set(BenchmarkCurveCurrency_3);
  SpreadOrBenchmarkCurveData_3.insert(BenchmarkCurveCurrency_3.getString());
  FIX::BenchmarkCurveName BenchmarkCurveName_3("STRING_LIBID");
  msg.set(BenchmarkCurveName_3);
  SpreadOrBenchmarkCurveData_3.insert(BenchmarkCurveName_3.getString());
  FIX::BenchmarkCurvePoint BenchmarkCurvePoint_3("STRING_324732133");
  msg.set(BenchmarkCurvePoint_3);
  SpreadOrBenchmarkCurveData_3.insert(BenchmarkCurvePoint_3.getString());
  FIX::BenchmarkPrice BenchmarkPrice_3;
  BenchmarkPrice_3.setString("13601524");
  msg.set(BenchmarkPrice_3);
  SpreadOrBenchmarkCurveData_3.insert(BenchmarkPrice_3.getString());
  FIX::BenchmarkPriceType BenchmarkPriceType_3(871956677);
  msg.set(BenchmarkPriceType_3);
  SpreadOrBenchmarkCurveData_3.insert(BenchmarkPriceType_3.getString());
  FIX::BenchmarkSecurityID BenchmarkSecurityID_3("STRING_1118705186");
  msg.set(BenchmarkSecurityID_3);
  SpreadOrBenchmarkCurveData_3.insert(BenchmarkSecurityID_3.getString());
  FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_3("STRING_2029254411");
  msg.set(BenchmarkSecurityIDSource_3);
  SpreadOrBenchmarkCurveData_3.insert(BenchmarkSecurityIDSource_3.getString());
  FIX::Spread Spread_3;
  Spread_3.setString("376602");
  msg.set(Spread_3);
  SpreadOrBenchmarkCurveData_3.insert(Spread_3.getString());
  all_values.push_back(SpreadOrBenchmarkCurveData_3);

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::CollateralAssignment::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_6;
    FIX::StipulationType StipulationType_6("STRING_PAYFREQ");
    noStipulations_0_0.set(StipulationType_6);
    Stipulations_NoStipulations_6.insert(StipulationType_6.getString());
    FIX::StipulationValue StipulationValue_6("STRING_1079178302");
    noStipulations_0_0.set(StipulationValue_6);
    Stipulations_NoStipulations_6.insert(StipulationValue_6.getString());
    all_values.push_back(Stipulations_NoStipulations_6);

    msg.addGroup(noStipulations_0_0);
  }
  // TrdCollGrp
  // Group TrdCollGrp.NoTrades
  {
    FIX50SP2::CollateralAssignment::NoTrades noTrades_0_0;
    // TrdCollGrp.NoTrades
    multiset<string> TrdCollGrp_NoTrades_0;
    FIX::SecondaryTradeReportID SecondaryTradeReportID_0("STRING_1574577863");
    noTrades_0_0.set(SecondaryTradeReportID_0);
    TrdCollGrp_NoTrades_0.insert(SecondaryTradeReportID_0.getString());
    FIX::TradeReportID TradeReportID_0("STRING_1988271078");
    noTrades_0_0.set(TradeReportID_0);
    TrdCollGrp_NoTrades_0.insert(TradeReportID_0.getString());
    all_values.push_back(TrdCollGrp_NoTrades_0);

    msg.addGroup(noTrades_0_0);
  }
  // TrdRegTimestamps
  // Group TrdRegTimestamps.NoTrdRegTimestamps
  {
    FIX50SP2::CollateralAssignment::NoTrdRegTimestamps noTrdRegTimestamps_0_0;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_0;
    FIX::DeskOrderHandlingInst DeskOrderHandlingInst_0("MULTIPLESTRINGVALUE_LOC");
    noTrdRegTimestamps_0_0.set(DeskOrderHandlingInst_0);
    TrdRegTimestamps_NoTrdRegTimestamps_0.insert(DeskOrderHandlingInst_0.getString());
    FIX::DeskType DeskType_0("STRING_S");
    noTrdRegTimestamps_0_0.set(DeskType_0);
    TrdRegTimestamps_NoTrdRegTimestamps_0.insert(DeskType_0.getString());
    FIX::DeskTypeSource DeskTypeSource_0(1);
    noTrdRegTimestamps_0_0.set(DeskTypeSource_0);
    TrdRegTimestamps_NoTrdRegTimestamps_0.insert(DeskTypeSource_0.getString());
    FIX::TrdRegTimestamp TrdRegTimestamp_0(FIX::UTCTIMESTAMP(17, 44, 43, 17, 2, 2002));
    noTrdRegTimestamps_0_0.set(TrdRegTimestamp_0);
    TrdRegTimestamps_NoTrdRegTimestamps_0.insert(TrdRegTimestamp_0.getString());
    FIX::TrdRegTimestampOrigin TrdRegTimestampOrigin_0("STRING_2080114297");
    noTrdRegTimestamps_0_0.set(TrdRegTimestampOrigin_0);
    TrdRegTimestamps_NoTrdRegTimestamps_0.insert(TrdRegTimestampOrigin_0.getString());
    FIX::TrdRegTimestampType TrdRegTimestampType_0(3);
    noTrdRegTimestamps_0_0.set(TrdRegTimestampType_0);
    TrdRegTimestamps_NoTrdRegTimestamps_0.insert(TrdRegTimestampType_0.getString());
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_0);

    msg.addGroup(noTrdRegTimestamps_0_0);
  }
  {
    FIX50SP2::CollateralAssignment::NoTrdRegTimestamps noTrdRegTimestamps_0_1;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_1;
    FIX::DeskOrderHandlingInst DeskOrderHandlingInst_1("MULTIPLESTRINGVALUE_RSV");
    noTrdRegTimestamps_0_1.set(DeskOrderHandlingInst_1);
    TrdRegTimestamps_NoTrdRegTimestamps_1.insert(DeskOrderHandlingInst_1.getString());
    FIX::DeskType DeskType_1("STRING_IS");
    noTrdRegTimestamps_0_1.set(DeskType_1);
    TrdRegTimestamps_NoTrdRegTimestamps_1.insert(DeskType_1.getString());
    FIX::DeskTypeSource DeskTypeSource_1(1);
    noTrdRegTimestamps_0_1.set(DeskTypeSource_1);
    TrdRegTimestamps_NoTrdRegTimestamps_1.insert(DeskTypeSource_1.getString());
    FIX::TrdRegTimestamp TrdRegTimestamp_1(FIX::UTCTIMESTAMP(1, 25, 11, 6, 7, 2007));
    noTrdRegTimestamps_0_1.set(TrdRegTimestamp_1);
    TrdRegTimestamps_NoTrdRegTimestamps_1.insert(TrdRegTimestamp_1.getString());
    FIX::TrdRegTimestampOrigin TrdRegTimestampOrigin_1("STRING_1155783789");
    noTrdRegTimestamps_0_1.set(TrdRegTimestampOrigin_1);
    TrdRegTimestamps_NoTrdRegTimestamps_1.insert(TrdRegTimestampOrigin_1.getString());
    FIX::TrdRegTimestampType TrdRegTimestampType_1(3);
    noTrdRegTimestamps_0_1.set(TrdRegTimestampType_1);
    TrdRegTimestamps_NoTrdRegTimestamps_1.insert(TrdRegTimestampType_1.getString());
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_1);

    msg.addGroup(noTrdRegTimestamps_0_1);
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
    multiset<string> UnderlyingInstrument_11;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_11("DATA_970871747");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_11);
    UnderlyingInstrument_11.insert(EncodedUnderlyingIssuer_11.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_11(1649029268);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_11);
    UnderlyingInstrument_11.insert(EncodedUnderlyingIssuerLen_11.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_11("DATA_2017513227");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_11);
    UnderlyingInstrument_11.insert(EncodedUnderlyingSecurityDesc_11.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_11(811659178);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_11);
    UnderlyingInstrument_11.insert(EncodedUnderlyingSecurityDescLen_11.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_11;
    UnderlyingAdjustedQuantity_11.setString("16834642");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_11);
    UnderlyingInstrument_11.insert(UnderlyingAdjustedQuantity_11.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_11;
    UnderlyingAllocationPercent_11.setString("57.480000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_11);
    UnderlyingInstrument_11.insert(UnderlyingAllocationPercent_11.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_11;
    UnderlyingAttachmentPoint_11.setString("50.030000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_11);
    UnderlyingInstrument_11.insert(UnderlyingAttachmentPoint_11.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_11("STRING_2120517018");
    noUnderlyings_0_0.set(UnderlyingCFICode_11);
    UnderlyingInstrument_11.insert(UnderlyingCFICode_11.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_11("STRING_1562329685");
    noUnderlyings_0_0.set(UnderlyingCPProgram_11);
    UnderlyingInstrument_11.insert(UnderlyingCPProgram_11.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_11("STRING_1117743341");
    noUnderlyings_0_0.set(UnderlyingCPRegType_11);
    UnderlyingInstrument_11.insert(UnderlyingCPRegType_11.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_11;
    UnderlyingCapValue_11.setString("11817688");
    noUnderlyings_0_0.set(UnderlyingCapValue_11);
    UnderlyingInstrument_11.insert(UnderlyingCapValue_11.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_11;
    UnderlyingCashAmount_11.setString("15219499");
    noUnderlyings_0_0.set(UnderlyingCashAmount_11);
    UnderlyingInstrument_11.insert(UnderlyingCashAmount_11.getString());
    FIX::UnderlyingCashType UnderlyingCashType_11("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_11);
    UnderlyingInstrument_11.insert(UnderlyingCashType_11.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_11;
    UnderlyingContractMultiplier_11.setString("11350139");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_11);
    UnderlyingInstrument_11.insert(UnderlyingContractMultiplier_11.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_11(390230056);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_11);
    UnderlyingInstrument_11.insert(UnderlyingContractMultiplierUnit_11.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_11("COUNTRY_1659500932");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_11);
    UnderlyingInstrument_11.insert(UnderlyingCountryOfIssue_11.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_11("LOCALMKTDATE_1035730494");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_11);
    UnderlyingInstrument_11.insert(UnderlyingCouponPaymentDate_11.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_11;
    UnderlyingCouponRate_11.setString("6.110000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_11);
    UnderlyingInstrument_11.insert(UnderlyingCouponRate_11.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_11("STRING_1272639404");
    noUnderlyings_0_0.set(UnderlyingCreditRating_11);
    UnderlyingInstrument_11.insert(UnderlyingCreditRating_11.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_11("GBP");
    noUnderlyings_0_0.set(UnderlyingCurrency_11);
    UnderlyingInstrument_11.insert(UnderlyingCurrency_11.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_11;
    UnderlyingCurrentValue_11.setString("11864999");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_11);
    UnderlyingInstrument_11.insert(UnderlyingCurrentValue_11.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_11;
    UnderlyingDetachmentPoint_11.setString("97.830000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_11);
    UnderlyingInstrument_11.insert(UnderlyingDetachmentPoint_11.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_11;
    UnderlyingDirtyPrice_11.setString("19370383");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_11);
    UnderlyingInstrument_11.insert(UnderlyingDirtyPrice_11.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_11;
    UnderlyingEndPrice_11.setString("3130293");
    noUnderlyings_0_0.set(UnderlyingEndPrice_11);
    UnderlyingInstrument_11.insert(UnderlyingEndPrice_11.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_11;
    UnderlyingEndValue_11.setString("14215430");
    noUnderlyings_0_0.set(UnderlyingEndValue_11);
    UnderlyingInstrument_11.insert(UnderlyingEndValue_11.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_11(1443239808);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_11);
    UnderlyingInstrument_11.insert(UnderlyingExerciseStyle_11.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_11;
    UnderlyingFXRate_11.setString("14688131");
    noUnderlyings_0_0.set(UnderlyingFXRate_11);
    UnderlyingInstrument_11.insert(UnderlyingFXRate_11.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_11('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_11);
    UnderlyingInstrument_11.insert(UnderlyingFXRateCalc_11.getString());
    FIX::UnderlyingFactor UnderlyingFactor_11;
    UnderlyingFactor_11.setString("13919251");
    noUnderlyings_0_0.set(UnderlyingFactor_11);
    UnderlyingInstrument_11.insert(UnderlyingFactor_11.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_11(1911748496);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_11);
    UnderlyingInstrument_11.insert(UnderlyingFlowScheduleType_11.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_11("STRING_136624562");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_11);
    UnderlyingInstrument_11.insert(UnderlyingInstrRegistry_11.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_11("LOCALMKTDATE_893470727");
    noUnderlyings_0_0.set(UnderlyingIssueDate_11);
    UnderlyingInstrument_11.insert(UnderlyingIssueDate_11.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_11("STRING_1781778076");
    noUnderlyings_0_0.set(UnderlyingIssuer_11);
    UnderlyingInstrument_11.insert(UnderlyingIssuer_11.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_11("STRING_948283740");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_11);
    UnderlyingInstrument_11.insert(UnderlyingLocaleOfIssue_11.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_11("LOCALMKTDATE_429451338");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_11);
    UnderlyingInstrument_11.insert(UnderlyingMaturityDate_11.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_11("MONTHYEAR_920980176");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_11);
    UnderlyingInstrument_11.insert(UnderlyingMaturityMonthYear_11.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_11("TZTIMEONLY_1871298743");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_11);
    UnderlyingInstrument_11.insert(UnderlyingMaturityTime_11.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_11;
    UnderlyingNotionalPercentageOutstanding_11.setString("47.080000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_11);
    UnderlyingInstrument_11.insert(UnderlyingNotionalPercentageOutstanding_11.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_11('3');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_11);
    UnderlyingInstrument_11.insert(UnderlyingOptAttribute_11.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_11;
    UnderlyingOriginalNotionalPercentageOutstanding_11.setString("84.360000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_11);
    UnderlyingInstrument_11.insert(UnderlyingOriginalNotionalPercentageOutstanding_11.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_11("STRING_1584253583");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_11);
    UnderlyingInstrument_11.insert(UnderlyingPriceUnitOfMeasure_11.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_11;
    UnderlyingPriceUnitOfMeasureQty_11.setString("18577761");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_11);
    UnderlyingInstrument_11.insert(UnderlyingPriceUnitOfMeasureQty_11.getString());
    FIX::UnderlyingProduct UnderlyingProduct_11(420945071);
    noUnderlyings_0_0.set(UnderlyingProduct_11);
    UnderlyingInstrument_11.insert(UnderlyingProduct_11.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_11(571783850);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_11);
    UnderlyingInstrument_11.insert(UnderlyingPutOrCall_11.getString());
    FIX::UnderlyingPx UnderlyingPx_11;
    UnderlyingPx_11.setString("1005225");
    noUnderlyings_0_0.set(UnderlyingPx_11);
    UnderlyingInstrument_11.insert(UnderlyingPx_11.getString());
    FIX::UnderlyingQty UnderlyingQty_11;
    UnderlyingQty_11.setString("20804460");
    noUnderlyings_0_0.set(UnderlyingQty_11);
    UnderlyingInstrument_11.insert(UnderlyingQty_11.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_11("LOCALMKTDATE_1607514344");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_11);
    UnderlyingInstrument_11.insert(UnderlyingRedemptionDate_11.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_11("STRING_1292333193");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_11);
    UnderlyingInstrument_11.insert(UnderlyingRepoCollateralSecurityType_11.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_11;
    UnderlyingRepurchaseRate_11.setString("17.590000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_11);
    UnderlyingInstrument_11.insert(UnderlyingRepurchaseRate_11.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_11(2045463923);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_11);
    UnderlyingInstrument_11.insert(UnderlyingRepurchaseTerm_11.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_11("STRING_546907953");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_11);
    UnderlyingInstrument_11.insert(UnderlyingRestructuringType_11.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_11("STRING_244618076");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_11);
    UnderlyingInstrument_11.insert(UnderlyingSecurityDesc_11.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_11("EXCHANGE_1465490058");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_11);
    UnderlyingInstrument_11.insert(UnderlyingSecurityExchange_11.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_11("STRING_336462645");
    noUnderlyings_0_0.set(UnderlyingSecurityID_11);
    UnderlyingInstrument_11.insert(UnderlyingSecurityID_11.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_11("STRING_557647419");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_11);
    UnderlyingInstrument_11.insert(UnderlyingSecurityIDSource_11.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_11("STRING_739549428");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_11);
    UnderlyingInstrument_11.insert(UnderlyingSecuritySubType_11.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_11("STRING_1779702453");
    noUnderlyings_0_0.set(UnderlyingSecurityType_11);
    UnderlyingInstrument_11.insert(UnderlyingSecurityType_11.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_11("STRING_2026460551");
    noUnderlyings_0_0.set(UnderlyingSeniority_11);
    UnderlyingInstrument_11.insert(UnderlyingSeniority_11.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_11("STRING_2052785890");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_11);
    UnderlyingInstrument_11.insert(UnderlyingSettlMethod_11.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_11(4);
    noUnderlyings_0_0.set(UnderlyingSettlementType_11);
    UnderlyingInstrument_11.insert(UnderlyingSettlementType_11.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_11;
    UnderlyingStartValue_11.setString("17907254");
    noUnderlyings_0_0.set(UnderlyingStartValue_11);
    UnderlyingInstrument_11.insert(UnderlyingStartValue_11.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_11("STRING_41926804");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_11);
    UnderlyingInstrument_11.insert(UnderlyingStateOrProvinceOfIssue_11.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_11("JPY");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_11);
    UnderlyingInstrument_11.insert(UnderlyingStrikeCurrency_11.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_11;
    UnderlyingStrikePrice_11.setString("9902105");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_11);
    UnderlyingInstrument_11.insert(UnderlyingStrikePrice_11.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_11("STRING_199582331");
    noUnderlyings_0_0.set(UnderlyingSymbol_11);
    UnderlyingInstrument_11.insert(UnderlyingSymbol_11.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_11("STRING_198516356");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_11);
    UnderlyingInstrument_11.insert(UnderlyingSymbolSfx_11.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_11("STRING_714025640");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_11);
    UnderlyingInstrument_11.insert(UnderlyingTimeUnit_11.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_11("STRING_602067039");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_11);
    UnderlyingInstrument_11.insert(UnderlyingUnitOfMeasure_11.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_11;
    UnderlyingUnitOfMeasureQty_11.setString("5343425");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_11);
    UnderlyingInstrument_11.insert(UnderlyingUnitOfMeasureQty_11.getString());
    all_values.push_back(UnderlyingInstrument_11);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::CollateralAssignment::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_24;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_24("STRING_38836974");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_24);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_24.insert(UnderlyingSecurityAltID_24.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_24("STRING_244635095");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_24);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_24.insert(UnderlyingSecurityAltIDSource_24.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_24);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::CollateralAssignment::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_25;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_25("STRING_1976529147");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_25);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_25.insert(UnderlyingSecurityAltID_25.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_25("STRING_610620825");
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
      FIX::UnderlyingStipType UnderlyingStipType_23("STRING_1909491502");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_23);
      UnderlyingStipulations_NoUnderlyingStips_23.insert(UnderlyingStipType_23.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_23("STRING_70651521");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_23);
      UnderlyingStipulations_NoUnderlyingStips_23.insert(UnderlyingStipValue_23.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_23);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::CollateralAssignment::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_21;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_21("STRING_967609613");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_21);
      UndlyInstrumentParties_NoUndlyInstrumentParties_21.insert(UnderlyingInstrumentPartyID_21.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_21('2');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_21);
      UndlyInstrumentParties_NoUndlyInstrumentParties_21.insert(UnderlyingInstrumentPartyIDSource_21.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_21(36915176);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_21);
      UndlyInstrumentParties_NoUndlyInstrumentParties_21.insert(UnderlyingInstrumentPartyRole_21.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_21);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralAssignment::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_44;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_44("STRING_1434121855");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_44);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_44.insert(UnderlyingInstrumentPartySubID_44.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_44(373377821);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_44);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_44.insert(UnderlyingInstrumentPartySubIDType_44.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_44);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::CollateralAssignment::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_45;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_45("STRING_1769875108");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_45);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_45.insert(UnderlyingInstrumentPartySubID_45.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_45(26187635);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_45);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_45.insert(UnderlyingInstrumentPartySubIDType_45.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_45);

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
    multiset<string> UnderlyingInstrument_12;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_12("DATA_1648852012");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_12);
    UnderlyingInstrument_12.insert(EncodedUnderlyingIssuer_12.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_12(2078973525);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_12);
    UnderlyingInstrument_12.insert(EncodedUnderlyingIssuerLen_12.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_12("DATA_1029740539");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_12);
    UnderlyingInstrument_12.insert(EncodedUnderlyingSecurityDesc_12.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_12(1292093764);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_12);
    UnderlyingInstrument_12.insert(EncodedUnderlyingSecurityDescLen_12.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_12;
    UnderlyingAdjustedQuantity_12.setString("21209003");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_12);
    UnderlyingInstrument_12.insert(UnderlyingAdjustedQuantity_12.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_12;
    UnderlyingAllocationPercent_12.setString("15.320000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_12);
    UnderlyingInstrument_12.insert(UnderlyingAllocationPercent_12.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_12;
    UnderlyingAttachmentPoint_12.setString("99.440000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_12);
    UnderlyingInstrument_12.insert(UnderlyingAttachmentPoint_12.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_12("STRING_963627226");
    noUnderlyings_0_1.set(UnderlyingCFICode_12);
    UnderlyingInstrument_12.insert(UnderlyingCFICode_12.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_12("STRING_999453863");
    noUnderlyings_0_1.set(UnderlyingCPProgram_12);
    UnderlyingInstrument_12.insert(UnderlyingCPProgram_12.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_12("STRING_768146300");
    noUnderlyings_0_1.set(UnderlyingCPRegType_12);
    UnderlyingInstrument_12.insert(UnderlyingCPRegType_12.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_12;
    UnderlyingCapValue_12.setString("16776528");
    noUnderlyings_0_1.set(UnderlyingCapValue_12);
    UnderlyingInstrument_12.insert(UnderlyingCapValue_12.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_12;
    UnderlyingCashAmount_12.setString("16015209");
    noUnderlyings_0_1.set(UnderlyingCashAmount_12);
    UnderlyingInstrument_12.insert(UnderlyingCashAmount_12.getString());
    FIX::UnderlyingCashType UnderlyingCashType_12("STRING_FIXED");
    noUnderlyings_0_1.set(UnderlyingCashType_12);
    UnderlyingInstrument_12.insert(UnderlyingCashType_12.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_12;
    UnderlyingContractMultiplier_12.setString("10857532");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_12);
    UnderlyingInstrument_12.insert(UnderlyingContractMultiplier_12.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_12(1640357877);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_12);
    UnderlyingInstrument_12.insert(UnderlyingContractMultiplierUnit_12.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_12("COUNTRY_1547123966");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_12);
    UnderlyingInstrument_12.insert(UnderlyingCountryOfIssue_12.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_12("LOCALMKTDATE_914798794");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_12);
    UnderlyingInstrument_12.insert(UnderlyingCouponPaymentDate_12.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_12;
    UnderlyingCouponRate_12.setString("50.540000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_12);
    UnderlyingInstrument_12.insert(UnderlyingCouponRate_12.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_12("STRING_1892281643");
    noUnderlyings_0_1.set(UnderlyingCreditRating_12);
    UnderlyingInstrument_12.insert(UnderlyingCreditRating_12.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_12("EUR");
    noUnderlyings_0_1.set(UnderlyingCurrency_12);
    UnderlyingInstrument_12.insert(UnderlyingCurrency_12.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_12;
    UnderlyingCurrentValue_12.setString("13822888");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_12);
    UnderlyingInstrument_12.insert(UnderlyingCurrentValue_12.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_12;
    UnderlyingDetachmentPoint_12.setString("62.620000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_12);
    UnderlyingInstrument_12.insert(UnderlyingDetachmentPoint_12.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_12;
    UnderlyingDirtyPrice_12.setString("1427783");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_12);
    UnderlyingInstrument_12.insert(UnderlyingDirtyPrice_12.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_12;
    UnderlyingEndPrice_12.setString("14192040");
    noUnderlyings_0_1.set(UnderlyingEndPrice_12);
    UnderlyingInstrument_12.insert(UnderlyingEndPrice_12.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_12;
    UnderlyingEndValue_12.setString("7091603");
    noUnderlyings_0_1.set(UnderlyingEndValue_12);
    UnderlyingInstrument_12.insert(UnderlyingEndValue_12.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_12(1576900227);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_12);
    UnderlyingInstrument_12.insert(UnderlyingExerciseStyle_12.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_12;
    UnderlyingFXRate_12.setString("17925818");
    noUnderlyings_0_1.set(UnderlyingFXRate_12);
    UnderlyingInstrument_12.insert(UnderlyingFXRate_12.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_12('D');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_12);
    UnderlyingInstrument_12.insert(UnderlyingFXRateCalc_12.getString());
    FIX::UnderlyingFactor UnderlyingFactor_12;
    UnderlyingFactor_12.setString("16030878");
    noUnderlyings_0_1.set(UnderlyingFactor_12);
    UnderlyingInstrument_12.insert(UnderlyingFactor_12.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_12(1798178489);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_12);
    UnderlyingInstrument_12.insert(UnderlyingFlowScheduleType_12.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_12("STRING_1980403776");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_12);
    UnderlyingInstrument_12.insert(UnderlyingInstrRegistry_12.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_12("LOCALMKTDATE_1534577739");
    noUnderlyings_0_1.set(UnderlyingIssueDate_12);
    UnderlyingInstrument_12.insert(UnderlyingIssueDate_12.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_12("STRING_680435381");
    noUnderlyings_0_1.set(UnderlyingIssuer_12);
    UnderlyingInstrument_12.insert(UnderlyingIssuer_12.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_12("STRING_1125013892");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_12);
    UnderlyingInstrument_12.insert(UnderlyingLocaleOfIssue_12.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_12("LOCALMKTDATE_1507994421");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_12);
    UnderlyingInstrument_12.insert(UnderlyingMaturityDate_12.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_12("MONTHYEAR_1480306913");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_12);
    UnderlyingInstrument_12.insert(UnderlyingMaturityMonthYear_12.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_12("TZTIMEONLY_1694643836");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_12);
    UnderlyingInstrument_12.insert(UnderlyingMaturityTime_12.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_12;
    UnderlyingNotionalPercentageOutstanding_12.setString("80.000000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_12);
    UnderlyingInstrument_12.insert(UnderlyingNotionalPercentageOutstanding_12.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_12('3');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_12);
    UnderlyingInstrument_12.insert(UnderlyingOptAttribute_12.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_12;
    UnderlyingOriginalNotionalPercentageOutstanding_12.setString("64.890000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_12);
    UnderlyingInstrument_12.insert(UnderlyingOriginalNotionalPercentageOutstanding_12.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_12("STRING_2001790866");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_12);
    UnderlyingInstrument_12.insert(UnderlyingPriceUnitOfMeasure_12.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_12;
    UnderlyingPriceUnitOfMeasureQty_12.setString("19337980");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_12);
    UnderlyingInstrument_12.insert(UnderlyingPriceUnitOfMeasureQty_12.getString());
    FIX::UnderlyingProduct UnderlyingProduct_12(1617795359);
    noUnderlyings_0_1.set(UnderlyingProduct_12);
    UnderlyingInstrument_12.insert(UnderlyingProduct_12.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_12(940060513);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_12);
    UnderlyingInstrument_12.insert(UnderlyingPutOrCall_12.getString());
    FIX::UnderlyingPx UnderlyingPx_12;
    UnderlyingPx_12.setString("14266722");
    noUnderlyings_0_1.set(UnderlyingPx_12);
    UnderlyingInstrument_12.insert(UnderlyingPx_12.getString());
    FIX::UnderlyingQty UnderlyingQty_12;
    UnderlyingQty_12.setString("10174356");
    noUnderlyings_0_1.set(UnderlyingQty_12);
    UnderlyingInstrument_12.insert(UnderlyingQty_12.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_12("LOCALMKTDATE_1854859308");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_12);
    UnderlyingInstrument_12.insert(UnderlyingRedemptionDate_12.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_12("STRING_1530167313");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_12);
    UnderlyingInstrument_12.insert(UnderlyingRepoCollateralSecurityType_12.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_12;
    UnderlyingRepurchaseRate_12.setString("36.730000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_12);
    UnderlyingInstrument_12.insert(UnderlyingRepurchaseRate_12.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_12(384182309);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_12);
    UnderlyingInstrument_12.insert(UnderlyingRepurchaseTerm_12.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_12("STRING_1704313889");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_12);
    UnderlyingInstrument_12.insert(UnderlyingRestructuringType_12.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_12("STRING_2144522539");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_12);
    UnderlyingInstrument_12.insert(UnderlyingSecurityDesc_12.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_12("EXCHANGE_2028598571");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_12);
    UnderlyingInstrument_12.insert(UnderlyingSecurityExchange_12.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_12("STRING_1847092261");
    noUnderlyings_0_1.set(UnderlyingSecurityID_12);
    UnderlyingInstrument_12.insert(UnderlyingSecurityID_12.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_12("STRING_1416242933");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_12);
    UnderlyingInstrument_12.insert(UnderlyingSecurityIDSource_12.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_12("STRING_590275227");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_12);
    UnderlyingInstrument_12.insert(UnderlyingSecuritySubType_12.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_12("STRING_1276508840");
    noUnderlyings_0_1.set(UnderlyingSecurityType_12);
    UnderlyingInstrument_12.insert(UnderlyingSecurityType_12.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_12("STRING_1061341148");
    noUnderlyings_0_1.set(UnderlyingSeniority_12);
    UnderlyingInstrument_12.insert(UnderlyingSeniority_12.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_12("STRING_921826992");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_12);
    UnderlyingInstrument_12.insert(UnderlyingSettlMethod_12.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_12(5);
    noUnderlyings_0_1.set(UnderlyingSettlementType_12);
    UnderlyingInstrument_12.insert(UnderlyingSettlementType_12.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_12;
    UnderlyingStartValue_12.setString("7120359");
    noUnderlyings_0_1.set(UnderlyingStartValue_12);
    UnderlyingInstrument_12.insert(UnderlyingStartValue_12.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_12("STRING_754747120");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_12);
    UnderlyingInstrument_12.insert(UnderlyingStateOrProvinceOfIssue_12.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_12("JPY");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_12);
    UnderlyingInstrument_12.insert(UnderlyingStrikeCurrency_12.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_12;
    UnderlyingStrikePrice_12.setString("18797610");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_12);
    UnderlyingInstrument_12.insert(UnderlyingStrikePrice_12.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_12("STRING_1627201567");
    noUnderlyings_0_1.set(UnderlyingSymbol_12);
    UnderlyingInstrument_12.insert(UnderlyingSymbol_12.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_12("STRING_725294635");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_12);
    UnderlyingInstrument_12.insert(UnderlyingSymbolSfx_12.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_12("STRING_1426921201");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_12);
    UnderlyingInstrument_12.insert(UnderlyingTimeUnit_12.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_12("STRING_1951339567");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_12);
    UnderlyingInstrument_12.insert(UnderlyingUnitOfMeasure_12.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_12;
    UnderlyingUnitOfMeasureQty_12.setString("10575717");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_12);
    UnderlyingInstrument_12.insert(UnderlyingUnitOfMeasureQty_12.getString());
    all_values.push_back(UnderlyingInstrument_12);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::CollateralAssignment::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_26;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_26("STRING_1805646785");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_26);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_26.insert(UnderlyingSecurityAltID_26.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_26("STRING_843886146");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_26);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_26.insert(UnderlyingSecurityAltIDSource_26.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_26);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::CollateralAssignment::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_27;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_27("STRING_1212539402");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_27);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_27.insert(UnderlyingSecurityAltID_27.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_27("STRING_598223651");
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
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_24;
      FIX::UnderlyingStipType UnderlyingStipType_24("STRING_82491431");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_24);
      UnderlyingStipulations_NoUnderlyingStips_24.insert(UnderlyingStipType_24.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_24("STRING_305599311");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_24);
      UnderlyingStipulations_NoUnderlyingStips_24.insert(UnderlyingStipValue_24.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_24);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::CollateralAssignment::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_22;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_22("STRING_844725104");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_22);
      UndlyInstrumentParties_NoUndlyInstrumentParties_22.insert(UnderlyingInstrumentPartyID_22.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_22('6');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_22);
      UndlyInstrumentParties_NoUndlyInstrumentParties_22.insert(UnderlyingInstrumentPartyIDSource_22.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_22(1210072312);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_22);
      UndlyInstrumentParties_NoUndlyInstrumentParties_22.insert(UnderlyingInstrumentPartyRole_22.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_22);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralAssignment::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_46;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_46("STRING_570896543");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_46);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_46.insert(UnderlyingInstrumentPartySubID_46.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_46(909680925);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_46);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_46.insert(UnderlyingInstrumentPartySubIDType_46.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_46);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::CollateralAssignment::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_47;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_47("STRING_110523280");
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubID_47);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_47.insert(UnderlyingInstrumentPartySubID_47.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_47(1161171771);
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubIDType_47);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_47.insert(UnderlyingInstrumentPartySubIDType_47.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_47);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::CollateralAssignment::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_23;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_23("STRING_38706117");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_23);
      UndlyInstrumentParties_NoUndlyInstrumentParties_23.insert(UnderlyingInstrumentPartyID_23.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_23('1');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_23);
      UndlyInstrumentParties_NoUndlyInstrumentParties_23.insert(UnderlyingInstrumentPartyIDSource_23.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_23(2082998763);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_23);
      UndlyInstrumentParties_NoUndlyInstrumentParties_23.insert(UnderlyingInstrumentPartyRole_23.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_23);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralAssignment::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_48;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_48("STRING_1883900418");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_48);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_48.insert(UnderlyingInstrumentPartySubID_48.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_48(690262235);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_48);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_48.insert(UnderlyingInstrumentPartySubIDType_48.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_48);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::CollateralAssignment::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_49;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_49("STRING_890026316");
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubID_49);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_49.insert(UnderlyingInstrumentPartySubID_49.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_49(1128888140);
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubIDType_49);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_49.insert(UnderlyingInstrumentPartySubIDType_49.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_49);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::CollateralAssignment::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_50;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_50("STRING_422539600");
        noUndlyInstrumentPartySubIDs_1_1_2_2.set(UnderlyingInstrumentPartySubID_50);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_50.insert(UnderlyingInstrumentPartySubID_50.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_50(369744235);
        noUndlyInstrumentPartySubIDs_1_1_2_2.set(UnderlyingInstrumentPartySubIDType_50);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_50.insert(UnderlyingInstrumentPartySubIDType_50.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_50);

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
