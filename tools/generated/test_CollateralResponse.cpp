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

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::CollateralResponse msg;

  list<multiset<string>> all_values;
  multiset<string> CollateralResponse_0;
  FIX::Account Account_7("STRING_255968687");
  msg.set(Account_7);
  CollateralResponse_0.insert(Account_7.getString());
  FIX::AccountType AccountType_6(7);
  msg.set(AccountType_6);
  CollateralResponse_0.insert(AccountType_6.getString());
  FIX::AccruedInterestAmt AccruedInterestAmt_7;
  AccruedInterestAmt_7.setString("7480882");
  msg.set(AccruedInterestAmt_7);
  CollateralResponse_0.insert(AccruedInterestAmt_7.getString());
  FIX::CashOutstanding CashOutstanding_4;
  CashOutstanding_4.setString("19737828");
  msg.set(CashOutstanding_4);
  CollateralResponse_0.insert(CashOutstanding_4.getString());
  FIX::ClOrdID ClOrdID_12("STRING_1757927221");
  msg.set(ClOrdID_12);
  CollateralResponse_0.insert(ClOrdID_12.getString());
  FIX::ClearingBusinessDate ClearingBusinessDate_11("LOCALMKTDATE_752924980");
  msg.set(ClearingBusinessDate_11);
  CollateralResponse_0.insert(ClearingBusinessDate_11.getString());
  FIX::CollApplType CollApplType_1(1);
  msg.set(CollApplType_1);
  CollateralResponse_0.insert(CollApplType_1.getString());
  FIX::CollAsgnID CollAsgnID_1("STRING_1092625472");
  msg.set(CollAsgnID_1);
  CollateralResponse_0.insert(CollAsgnID_1.getString());
  FIX::CollAsgnReason CollAsgnReason_2(3);
  msg.set(CollAsgnReason_2);
  CollateralResponse_0.insert(CollAsgnReason_2.getString());
  FIX::CollAsgnRejectReason CollAsgnRejectReason_0(4);
  msg.set(CollAsgnRejectReason_0);
  CollateralResponse_0.insert(CollAsgnRejectReason_0.getString());
  FIX::CollAsgnRespType CollAsgnRespType_0(0);
  msg.set(CollAsgnRespType_0);
  CollateralResponse_0.insert(CollAsgnRespType_0.getString());
  FIX::CollAsgnTransType CollAsgnTransType_1(3);
  msg.set(CollAsgnTransType_1);
  CollateralResponse_0.insert(CollAsgnTransType_1.getString());
  FIX::CollReqID CollReqID_2("STRING_706932952");
  msg.set(CollReqID_2);
  CollateralResponse_0.insert(CollReqID_2.getString());
  FIX::CollRespID CollRespID_0("STRING_1953799000");
  msg.set(CollRespID_0);
  CollateralResponse_0.insert(CollRespID_0.getString());
  FIX::Currency Currency_11("EUR");
  msg.set(Currency_11);
  CollateralResponse_0.insert(Currency_11.getString());
  FIX::EncodedText EncodedText_18("DATA_1987321451");
  msg.set(EncodedText_18);
  CollateralResponse_0.insert(EncodedText_18.getString());
  FIX::EncodedTextLen EncodedTextLen_18(189014515);
  msg.set(EncodedTextLen_18);
  CollateralResponse_0.insert(EncodedTextLen_18.getString());
  FIX::EndAccruedInterestAmt EndAccruedInterestAmt_7;
  EndAccruedInterestAmt_7.setString("3620312");
  msg.set(EndAccruedInterestAmt_7);
  CollateralResponse_0.insert(EndAccruedInterestAmt_7.getString());
  FIX::EndCash EndCash_7;
  EndCash_7.setString("19925554");
  msg.set(EndCash_7);
  CollateralResponse_0.insert(EndCash_7.getString());
  FIX::FinancialStatus FinancialStatus_1("MULTIPLECHARVALUE_3");
  msg.set(FinancialStatus_1);
  CollateralResponse_0.insert(FinancialStatus_1.getString());
  FIX::MarginExcess MarginExcess_4;
  MarginExcess_4.setString("10067521");
  msg.set(MarginExcess_4);
  CollateralResponse_0.insert(MarginExcess_4.getString());
  FIX::OrderID OrderID_12("STRING_841350250");
  msg.set(OrderID_12);
  CollateralResponse_0.insert(OrderID_12.getString());
  FIX::Price Price_6;
  Price_6.setString("11238225");
  msg.set(Price_6);
  CollateralResponse_0.insert(Price_6.getString());
  FIX::PriceType PriceType_8(9);
  msg.set(PriceType_8);
  CollateralResponse_0.insert(PriceType_8.getString());
  FIX::QtyType QtyType_9(1);
  msg.set(QtyType_9);
  CollateralResponse_0.insert(QtyType_9.getString());
  FIX::Quantity Quantity_10;
  Quantity_10.setString("19299769");
  msg.set(Quantity_10);
  CollateralResponse_0.insert(Quantity_10.getString());
  FIX::SecondaryClOrdID SecondaryClOrdID_12("STRING_936236281");
  msg.set(SecondaryClOrdID_12);
  CollateralResponse_0.insert(SecondaryClOrdID_12.getString());
  FIX::SecondaryOrderID SecondaryOrderID_12("STRING_1382174134");
  msg.set(SecondaryOrderID_12);
  CollateralResponse_0.insert(SecondaryOrderID_12.getString());
  FIX::SettlDate SettlDate_10("LOCALMKTDATE_1721979654");
  msg.set(SettlDate_10);
  CollateralResponse_0.insert(SettlDate_10.getString());
  FIX::Side Side_9('8');
  msg.set(Side_9);
  CollateralResponse_0.insert(Side_9.getString());
  FIX::StartCash StartCash_7;
  StartCash_7.setString("16381428");
  msg.set(StartCash_7);
  CollateralResponse_0.insert(StartCash_7.getString());
  FIX::Text Text_18("STRING_1070155085");
  msg.set(Text_18);
  CollateralResponse_0.insert(Text_18.getString());
  FIX::TotalNetValue TotalNetValue_4;
  TotalNetValue_4.setString("12669843");
  msg.set(TotalNetValue_4);
  CollateralResponse_0.insert(TotalNetValue_4.getString());
  FIX::TransactTime TransactTime_9(FIX::UTCTIMESTAMP(10, 56, 56, 6, 9, 2000));
  msg.set(TransactTime_9);
  CollateralResponse_0.insert(TransactTime_9.getString());
  all_values.push_back(CollateralResponse_0);

  // ExecCollGrp
  // Group ExecCollGrp.NoExecs
  {
    FIX50SP2::CollateralResponse::NoExecs noExecs_0_0;
    // ExecCollGrp.NoExecs
    multiset<string> ExecCollGrp_NoExecs_7;
    FIX::ExecID ExecID_13("STRING_400026510");
    noExecs_0_0.set(ExecID_13);
    ExecCollGrp_NoExecs_7.insert(ExecID_13.getString());
    all_values.push_back(ExecCollGrp_NoExecs_7);

    msg.addGroup(noExecs_0_0);
  }
  {
    FIX50SP2::CollateralResponse::NoExecs noExecs_0_1;
    // ExecCollGrp.NoExecs
    multiset<string> ExecCollGrp_NoExecs_8;
    FIX::ExecID ExecID_14("STRING_211632926");
    noExecs_0_1.set(ExecID_14);
    ExecCollGrp_NoExecs_8.insert(ExecID_14.getString());
    all_values.push_back(ExecCollGrp_NoExecs_8);

    msg.addGroup(noExecs_0_1);
  }
  // FinancingDetails
  multiset<string> FinancingDetails_8;
  FIX::AgreementCurrency AgreementCurrency_8("CAN");
  msg.set(AgreementCurrency_8);
  FinancingDetails_8.insert(AgreementCurrency_8.getString());
  FIX::AgreementDate AgreementDate_8("LOCALMKTDATE_817031686");
  msg.set(AgreementDate_8);
  FinancingDetails_8.insert(AgreementDate_8.getString());
  FIX::AgreementDesc AgreementDesc_8("STRING_302149578");
  msg.set(AgreementDesc_8);
  FinancingDetails_8.insert(AgreementDesc_8.getString());
  FIX::AgreementID AgreementID_8("STRING_1930226280");
  msg.set(AgreementID_8);
  FinancingDetails_8.insert(AgreementID_8.getString());
  FIX::DeliveryType DeliveryType_8(0);
  msg.set(DeliveryType_8);
  FinancingDetails_8.insert(DeliveryType_8.getString());
  FIX::EndDate EndDate_8("LOCALMKTDATE_147221374");
  msg.set(EndDate_8);
  FinancingDetails_8.insert(EndDate_8.getString());
  FIX::MarginRatio MarginRatio_8;
  MarginRatio_8.setString("28.920000");
  msg.set(MarginRatio_8);
  FinancingDetails_8.insert(MarginRatio_8.getString());
  FIX::StartDate StartDate_8("LOCALMKTDATE_38331448");
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
    multiset<string> InstrumentLeg_16;
    FIX::EncodedLegIssuer EncodedLegIssuer_16("DATA_1480657416");
    noLegs_0_0.set(EncodedLegIssuer_16);
    InstrumentLeg_16.insert(EncodedLegIssuer_16.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_16(1376347359);
    noLegs_0_0.set(EncodedLegIssuerLen_16);
    InstrumentLeg_16.insert(EncodedLegIssuerLen_16.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_16("DATA_67405141");
    noLegs_0_0.set(EncodedLegSecurityDesc_16);
    InstrumentLeg_16.insert(EncodedLegSecurityDesc_16.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_16(269410049);
    noLegs_0_0.set(EncodedLegSecurityDescLen_16);
    InstrumentLeg_16.insert(EncodedLegSecurityDescLen_16.getString());
    FIX::LegCFICode LegCFICode_16("STRING_611037846");
    noLegs_0_0.set(LegCFICode_16);
    InstrumentLeg_16.insert(LegCFICode_16.getString());
    FIX::LegContractMultiplier LegContractMultiplier_16;
    LegContractMultiplier_16.setString("17893847");
    noLegs_0_0.set(LegContractMultiplier_16);
    InstrumentLeg_16.insert(LegContractMultiplier_16.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_16(788306200);
    noLegs_0_0.set(LegContractMultiplierUnit_16);
    InstrumentLeg_16.insert(LegContractMultiplierUnit_16.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_16("MONTHYEAR_101697019");
    noLegs_0_0.set(LegContractSettlMonth_16);
    InstrumentLeg_16.insert(LegContractSettlMonth_16.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_16("COUNTRY_712056232");
    noLegs_0_0.set(LegCountryOfIssue_16);
    InstrumentLeg_16.insert(LegCountryOfIssue_16.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_16("LOCALMKTDATE_2055290577");
    noLegs_0_0.set(LegCouponPaymentDate_16);
    InstrumentLeg_16.insert(LegCouponPaymentDate_16.getString());
    FIX::LegCouponRate LegCouponRate_16;
    LegCouponRate_16.setString("90.060000");
    noLegs_0_0.set(LegCouponRate_16);
    InstrumentLeg_16.insert(LegCouponRate_16.getString());
    FIX::LegCreditRating LegCreditRating_16("STRING_1392654890");
    noLegs_0_0.set(LegCreditRating_16);
    InstrumentLeg_16.insert(LegCreditRating_16.getString());
    FIX::LegCurrency LegCurrency_16("JPY");
    noLegs_0_0.set(LegCurrency_16);
    InstrumentLeg_16.insert(LegCurrency_16.getString());
    FIX::LegDatedDate LegDatedDate_16("LOCALMKTDATE_1018395373");
    noLegs_0_0.set(LegDatedDate_16);
    InstrumentLeg_16.insert(LegDatedDate_16.getString());
    FIX::LegExerciseStyle LegExerciseStyle_16(763587717);
    noLegs_0_0.set(LegExerciseStyle_16);
    InstrumentLeg_16.insert(LegExerciseStyle_16.getString());
    FIX::LegFactor LegFactor_16;
    LegFactor_16.setString("1258419");
    noLegs_0_0.set(LegFactor_16);
    InstrumentLeg_16.insert(LegFactor_16.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_16(1674391796);
    noLegs_0_0.set(LegFlowScheduleType_16);
    InstrumentLeg_16.insert(LegFlowScheduleType_16.getString());
    FIX::LegInstrRegistry LegInstrRegistry_16("STRING_1163614228");
    noLegs_0_0.set(LegInstrRegistry_16);
    InstrumentLeg_16.insert(LegInstrRegistry_16.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_16("LOCALMKTDATE_337474895");
    noLegs_0_0.set(LegInterestAccrualDate_16);
    InstrumentLeg_16.insert(LegInterestAccrualDate_16.getString());
    FIX::LegIssueDate LegIssueDate_16("LOCALMKTDATE_2136703571");
    noLegs_0_0.set(LegIssueDate_16);
    InstrumentLeg_16.insert(LegIssueDate_16.getString());
    FIX::LegIssuer LegIssuer_16("STRING_757342345");
    noLegs_0_0.set(LegIssuer_16);
    InstrumentLeg_16.insert(LegIssuer_16.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_16("STRING_1154506581");
    noLegs_0_0.set(LegLocaleOfIssue_16);
    InstrumentLeg_16.insert(LegLocaleOfIssue_16.getString());
    FIX::LegMaturityDate LegMaturityDate_16("LOCALMKTDATE_291369502");
    noLegs_0_0.set(LegMaturityDate_16);
    InstrumentLeg_16.insert(LegMaturityDate_16.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_16("MONTHYEAR_540084977");
    noLegs_0_0.set(LegMaturityMonthYear_16);
    InstrumentLeg_16.insert(LegMaturityMonthYear_16.getString());
    FIX::LegMaturityTime LegMaturityTime_16("TZTIMEONLY_186085917");
    noLegs_0_0.set(LegMaturityTime_16);
    InstrumentLeg_16.insert(LegMaturityTime_16.getString());
    FIX::LegOptAttribute LegOptAttribute_16('4');
    noLegs_0_0.set(LegOptAttribute_16);
    InstrumentLeg_16.insert(LegOptAttribute_16.getString());
    FIX::LegOptionRatio LegOptionRatio_16;
    LegOptionRatio_16.setString("18486578");
    noLegs_0_0.set(LegOptionRatio_16);
    InstrumentLeg_16.insert(LegOptionRatio_16.getString());
    FIX::LegPool LegPool_16("STRING_224417365");
    noLegs_0_0.set(LegPool_16);
    InstrumentLeg_16.insert(LegPool_16.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_16("STRING_1427162501");
    noLegs_0_0.set(LegPriceUnitOfMeasure_16);
    InstrumentLeg_16.insert(LegPriceUnitOfMeasure_16.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_16;
    LegPriceUnitOfMeasureQty_16.setString("21335697");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_16);
    InstrumentLeg_16.insert(LegPriceUnitOfMeasureQty_16.getString());
    FIX::LegProduct LegProduct_16(1705074782);
    noLegs_0_0.set(LegProduct_16);
    InstrumentLeg_16.insert(LegProduct_16.getString());
    FIX::LegPutOrCall LegPutOrCall_16(656026212);
    noLegs_0_0.set(LegPutOrCall_16);
    InstrumentLeg_16.insert(LegPutOrCall_16.getString());
    FIX::LegRatioQty LegRatioQty_16;
    LegRatioQty_16.setString("534912");
    noLegs_0_0.set(LegRatioQty_16);
    InstrumentLeg_16.insert(LegRatioQty_16.getString());
    FIX::LegRedemptionDate LegRedemptionDate_16("LOCALMKTDATE_1974484831");
    noLegs_0_0.set(LegRedemptionDate_16);
    InstrumentLeg_16.insert(LegRedemptionDate_16.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_16("STRING_1267064058");
    noLegs_0_0.set(LegRepoCollateralSecurityType_16);
    InstrumentLeg_16.insert(LegRepoCollateralSecurityType_16.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_16;
    LegRepurchaseRate_16.setString("60.000000");
    noLegs_0_0.set(LegRepurchaseRate_16);
    InstrumentLeg_16.insert(LegRepurchaseRate_16.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_16(615307384);
    noLegs_0_0.set(LegRepurchaseTerm_16);
    InstrumentLeg_16.insert(LegRepurchaseTerm_16.getString());
    FIX::LegSecurityDesc LegSecurityDesc_16("STRING_1368761078");
    noLegs_0_0.set(LegSecurityDesc_16);
    InstrumentLeg_16.insert(LegSecurityDesc_16.getString());
    FIX::LegSecurityExchange LegSecurityExchange_16("EXCHANGE_407448584");
    noLegs_0_0.set(LegSecurityExchange_16);
    InstrumentLeg_16.insert(LegSecurityExchange_16.getString());
    FIX::LegSecurityID LegSecurityID_16("STRING_523114313");
    noLegs_0_0.set(LegSecurityID_16);
    InstrumentLeg_16.insert(LegSecurityID_16.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_16("STRING_787416436");
    noLegs_0_0.set(LegSecurityIDSource_16);
    InstrumentLeg_16.insert(LegSecurityIDSource_16.getString());
    FIX::LegSecuritySubType LegSecuritySubType_16("STRING_1800103475");
    noLegs_0_0.set(LegSecuritySubType_16);
    InstrumentLeg_16.insert(LegSecuritySubType_16.getString());
    FIX::LegSecurityType LegSecurityType_16("STRING_303346950");
    noLegs_0_0.set(LegSecurityType_16);
    InstrumentLeg_16.insert(LegSecurityType_16.getString());
    FIX::LegSide LegSide_16('1');
    noLegs_0_0.set(LegSide_16);
    InstrumentLeg_16.insert(LegSide_16.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_16("STRING_671015200");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_16);
    InstrumentLeg_16.insert(LegStateOrProvinceOfIssue_16.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_16("JPY");
    noLegs_0_0.set(LegStrikeCurrency_16);
    InstrumentLeg_16.insert(LegStrikeCurrency_16.getString());
    FIX::LegStrikePrice LegStrikePrice_16;
    LegStrikePrice_16.setString("1979233");
    noLegs_0_0.set(LegStrikePrice_16);
    InstrumentLeg_16.insert(LegStrikePrice_16.getString());
    FIX::LegSymbol LegSymbol_16("STRING_83065248");
    noLegs_0_0.set(LegSymbol_16);
    InstrumentLeg_16.insert(LegSymbol_16.getString());
    FIX::LegSymbolSfx LegSymbolSfx_16("STRING_1871875293");
    noLegs_0_0.set(LegSymbolSfx_16);
    InstrumentLeg_16.insert(LegSymbolSfx_16.getString());
    FIX::LegTimeUnit LegTimeUnit_16("STRING_187143271");
    noLegs_0_0.set(LegTimeUnit_16);
    InstrumentLeg_16.insert(LegTimeUnit_16.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_16("STRING_840407593");
    noLegs_0_0.set(LegUnitOfMeasure_16);
    InstrumentLeg_16.insert(LegUnitOfMeasure_16.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_16;
    LegUnitOfMeasureQty_16.setString("8788982");
    noLegs_0_0.set(LegUnitOfMeasureQty_16);
    InstrumentLeg_16.insert(LegUnitOfMeasureQty_16.getString());
    all_values.push_back(InstrumentLeg_16);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::CollateralResponse::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_27;
      FIX::LegSecurityAltID LegSecurityAltID_27("STRING_1380492570");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_27);
      LegSecAltIDGrp_NoLegSecurityAltID_27.insert(LegSecurityAltID_27.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_27("STRING_1064984143");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_27);
      LegSecAltIDGrp_NoLegSecurityAltID_27.insert(LegSecurityAltIDSource_27.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_27);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::CollateralResponse::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_28;
      FIX::LegSecurityAltID LegSecurityAltID_28("STRING_917103650");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_28);
      LegSecAltIDGrp_NoLegSecurityAltID_28.insert(LegSecurityAltID_28.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_28("STRING_1081666791");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_28);
      LegSecAltIDGrp_NoLegSecurityAltID_28.insert(LegSecurityAltIDSource_28.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_28);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::CollateralResponse::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_29;
      FIX::LegSecurityAltID LegSecurityAltID_29("STRING_1289401509");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltID_29);
      LegSecAltIDGrp_NoLegSecurityAltID_29.insert(LegSecurityAltID_29.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_29("STRING_196782503");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltIDSource_29);
      LegSecAltIDGrp_NoLegSecurityAltID_29.insert(LegSecurityAltIDSource_29.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_29);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_2);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::CollateralResponse::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_17;
    FIX::EncodedLegIssuer EncodedLegIssuer_17("DATA_1067752854");
    noLegs_0_1.set(EncodedLegIssuer_17);
    InstrumentLeg_17.insert(EncodedLegIssuer_17.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_17(846992643);
    noLegs_0_1.set(EncodedLegIssuerLen_17);
    InstrumentLeg_17.insert(EncodedLegIssuerLen_17.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_17("DATA_852808715");
    noLegs_0_1.set(EncodedLegSecurityDesc_17);
    InstrumentLeg_17.insert(EncodedLegSecurityDesc_17.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_17(1121244059);
    noLegs_0_1.set(EncodedLegSecurityDescLen_17);
    InstrumentLeg_17.insert(EncodedLegSecurityDescLen_17.getString());
    FIX::LegCFICode LegCFICode_17("STRING_673993826");
    noLegs_0_1.set(LegCFICode_17);
    InstrumentLeg_17.insert(LegCFICode_17.getString());
    FIX::LegContractMultiplier LegContractMultiplier_17;
    LegContractMultiplier_17.setString("21198727");
    noLegs_0_1.set(LegContractMultiplier_17);
    InstrumentLeg_17.insert(LegContractMultiplier_17.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_17(816636411);
    noLegs_0_1.set(LegContractMultiplierUnit_17);
    InstrumentLeg_17.insert(LegContractMultiplierUnit_17.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_17("MONTHYEAR_1289301210");
    noLegs_0_1.set(LegContractSettlMonth_17);
    InstrumentLeg_17.insert(LegContractSettlMonth_17.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_17("COUNTRY_1341150204");
    noLegs_0_1.set(LegCountryOfIssue_17);
    InstrumentLeg_17.insert(LegCountryOfIssue_17.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_17("LOCALMKTDATE_1224084995");
    noLegs_0_1.set(LegCouponPaymentDate_17);
    InstrumentLeg_17.insert(LegCouponPaymentDate_17.getString());
    FIX::LegCouponRate LegCouponRate_17;
    LegCouponRate_17.setString("55.230000");
    noLegs_0_1.set(LegCouponRate_17);
    InstrumentLeg_17.insert(LegCouponRate_17.getString());
    FIX::LegCreditRating LegCreditRating_17("STRING_2128566640");
    noLegs_0_1.set(LegCreditRating_17);
    InstrumentLeg_17.insert(LegCreditRating_17.getString());
    FIX::LegCurrency LegCurrency_17("USD");
    noLegs_0_1.set(LegCurrency_17);
    InstrumentLeg_17.insert(LegCurrency_17.getString());
    FIX::LegDatedDate LegDatedDate_17("LOCALMKTDATE_1389641422");
    noLegs_0_1.set(LegDatedDate_17);
    InstrumentLeg_17.insert(LegDatedDate_17.getString());
    FIX::LegExerciseStyle LegExerciseStyle_17(1547720022);
    noLegs_0_1.set(LegExerciseStyle_17);
    InstrumentLeg_17.insert(LegExerciseStyle_17.getString());
    FIX::LegFactor LegFactor_17;
    LegFactor_17.setString("10352134");
    noLegs_0_1.set(LegFactor_17);
    InstrumentLeg_17.insert(LegFactor_17.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_17(776558172);
    noLegs_0_1.set(LegFlowScheduleType_17);
    InstrumentLeg_17.insert(LegFlowScheduleType_17.getString());
    FIX::LegInstrRegistry LegInstrRegistry_17("STRING_1745643370");
    noLegs_0_1.set(LegInstrRegistry_17);
    InstrumentLeg_17.insert(LegInstrRegistry_17.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_17("LOCALMKTDATE_1118278742");
    noLegs_0_1.set(LegInterestAccrualDate_17);
    InstrumentLeg_17.insert(LegInterestAccrualDate_17.getString());
    FIX::LegIssueDate LegIssueDate_17("LOCALMKTDATE_500949818");
    noLegs_0_1.set(LegIssueDate_17);
    InstrumentLeg_17.insert(LegIssueDate_17.getString());
    FIX::LegIssuer LegIssuer_17("STRING_1932786642");
    noLegs_0_1.set(LegIssuer_17);
    InstrumentLeg_17.insert(LegIssuer_17.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_17("STRING_1958686335");
    noLegs_0_1.set(LegLocaleOfIssue_17);
    InstrumentLeg_17.insert(LegLocaleOfIssue_17.getString());
    FIX::LegMaturityDate LegMaturityDate_17("LOCALMKTDATE_1379848044");
    noLegs_0_1.set(LegMaturityDate_17);
    InstrumentLeg_17.insert(LegMaturityDate_17.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_17("MONTHYEAR_263815767");
    noLegs_0_1.set(LegMaturityMonthYear_17);
    InstrumentLeg_17.insert(LegMaturityMonthYear_17.getString());
    FIX::LegMaturityTime LegMaturityTime_17("TZTIMEONLY_1191695257");
    noLegs_0_1.set(LegMaturityTime_17);
    InstrumentLeg_17.insert(LegMaturityTime_17.getString());
    FIX::LegOptAttribute LegOptAttribute_17('2');
    noLegs_0_1.set(LegOptAttribute_17);
    InstrumentLeg_17.insert(LegOptAttribute_17.getString());
    FIX::LegOptionRatio LegOptionRatio_17;
    LegOptionRatio_17.setString("11809194");
    noLegs_0_1.set(LegOptionRatio_17);
    InstrumentLeg_17.insert(LegOptionRatio_17.getString());
    FIX::LegPool LegPool_17("STRING_125878400");
    noLegs_0_1.set(LegPool_17);
    InstrumentLeg_17.insert(LegPool_17.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_17("STRING_1586750049");
    noLegs_0_1.set(LegPriceUnitOfMeasure_17);
    InstrumentLeg_17.insert(LegPriceUnitOfMeasure_17.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_17;
    LegPriceUnitOfMeasureQty_17.setString("13777019");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_17);
    InstrumentLeg_17.insert(LegPriceUnitOfMeasureQty_17.getString());
    FIX::LegProduct LegProduct_17(1193631255);
    noLegs_0_1.set(LegProduct_17);
    InstrumentLeg_17.insert(LegProduct_17.getString());
    FIX::LegPutOrCall LegPutOrCall_17(286259044);
    noLegs_0_1.set(LegPutOrCall_17);
    InstrumentLeg_17.insert(LegPutOrCall_17.getString());
    FIX::LegRatioQty LegRatioQty_17;
    LegRatioQty_17.setString("830269");
    noLegs_0_1.set(LegRatioQty_17);
    InstrumentLeg_17.insert(LegRatioQty_17.getString());
    FIX::LegRedemptionDate LegRedemptionDate_17("LOCALMKTDATE_167391666");
    noLegs_0_1.set(LegRedemptionDate_17);
    InstrumentLeg_17.insert(LegRedemptionDate_17.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_17("STRING_960252870");
    noLegs_0_1.set(LegRepoCollateralSecurityType_17);
    InstrumentLeg_17.insert(LegRepoCollateralSecurityType_17.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_17;
    LegRepurchaseRate_17.setString("61.140000");
    noLegs_0_1.set(LegRepurchaseRate_17);
    InstrumentLeg_17.insert(LegRepurchaseRate_17.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_17(984028077);
    noLegs_0_1.set(LegRepurchaseTerm_17);
    InstrumentLeg_17.insert(LegRepurchaseTerm_17.getString());
    FIX::LegSecurityDesc LegSecurityDesc_17("STRING_102070433");
    noLegs_0_1.set(LegSecurityDesc_17);
    InstrumentLeg_17.insert(LegSecurityDesc_17.getString());
    FIX::LegSecurityExchange LegSecurityExchange_17("EXCHANGE_1396566318");
    noLegs_0_1.set(LegSecurityExchange_17);
    InstrumentLeg_17.insert(LegSecurityExchange_17.getString());
    FIX::LegSecurityID LegSecurityID_17("STRING_60629424");
    noLegs_0_1.set(LegSecurityID_17);
    InstrumentLeg_17.insert(LegSecurityID_17.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_17("STRING_1914485956");
    noLegs_0_1.set(LegSecurityIDSource_17);
    InstrumentLeg_17.insert(LegSecurityIDSource_17.getString());
    FIX::LegSecuritySubType LegSecuritySubType_17("STRING_1377649310");
    noLegs_0_1.set(LegSecuritySubType_17);
    InstrumentLeg_17.insert(LegSecuritySubType_17.getString());
    FIX::LegSecurityType LegSecurityType_17("STRING_937334247");
    noLegs_0_1.set(LegSecurityType_17);
    InstrumentLeg_17.insert(LegSecurityType_17.getString());
    FIX::LegSide LegSide_17('1');
    noLegs_0_1.set(LegSide_17);
    InstrumentLeg_17.insert(LegSide_17.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_17("STRING_619807084");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_17);
    InstrumentLeg_17.insert(LegStateOrProvinceOfIssue_17.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_17("GBP");
    noLegs_0_1.set(LegStrikeCurrency_17);
    InstrumentLeg_17.insert(LegStrikeCurrency_17.getString());
    FIX::LegStrikePrice LegStrikePrice_17;
    LegStrikePrice_17.setString("13963652");
    noLegs_0_1.set(LegStrikePrice_17);
    InstrumentLeg_17.insert(LegStrikePrice_17.getString());
    FIX::LegSymbol LegSymbol_17("STRING_2083213992");
    noLegs_0_1.set(LegSymbol_17);
    InstrumentLeg_17.insert(LegSymbol_17.getString());
    FIX::LegSymbolSfx LegSymbolSfx_17("STRING_1888773370");
    noLegs_0_1.set(LegSymbolSfx_17);
    InstrumentLeg_17.insert(LegSymbolSfx_17.getString());
    FIX::LegTimeUnit LegTimeUnit_17("STRING_1897315074");
    noLegs_0_1.set(LegTimeUnit_17);
    InstrumentLeg_17.insert(LegTimeUnit_17.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_17("STRING_1868516986");
    noLegs_0_1.set(LegUnitOfMeasure_17);
    InstrumentLeg_17.insert(LegUnitOfMeasure_17.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_17;
    LegUnitOfMeasureQty_17.setString("16999760");
    noLegs_0_1.set(LegUnitOfMeasureQty_17);
    InstrumentLeg_17.insert(LegUnitOfMeasureQty_17.getString());
    all_values.push_back(InstrumentLeg_17);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::CollateralResponse::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_30;
      FIX::LegSecurityAltID LegSecurityAltID_30("STRING_2132332753");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_30);
      LegSecAltIDGrp_NoLegSecurityAltID_30.insert(LegSecurityAltID_30.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_30("STRING_744187666");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_30);
      LegSecAltIDGrp_NoLegSecurityAltID_30.insert(LegSecurityAltIDSource_30.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_30);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::CollateralResponse::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_31;
      FIX::LegSecurityAltID LegSecurityAltID_31("STRING_1427028011");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltID_31);
      LegSecAltIDGrp_NoLegSecurityAltID_31.insert(LegSecurityAltID_31.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_31("STRING_1165768523");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltIDSource_31);
      LegSecAltIDGrp_NoLegSecurityAltID_31.insert(LegSecurityAltIDSource_31.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_31);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::CollateralResponse::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_32;
      FIX::LegSecurityAltID LegSecurityAltID_32("STRING_870066067");
      noLegSecurityAltID_1_1_2.set(LegSecurityAltID_32);
      LegSecAltIDGrp_NoLegSecurityAltID_32.insert(LegSecurityAltID_32.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_32("STRING_866294412");
      noLegSecurityAltID_1_1_2.set(LegSecurityAltIDSource_32);
      LegSecAltIDGrp_NoLegSecurityAltID_32.insert(LegSecurityAltIDSource_32.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_32);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_2);
    }
    msg.addGroup(noLegs_0_1);
  }
  {
    FIX50SP2::CollateralResponse::NoLegs noLegs_0_2;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_18;
    FIX::EncodedLegIssuer EncodedLegIssuer_18("DATA_395986795");
    noLegs_0_2.set(EncodedLegIssuer_18);
    InstrumentLeg_18.insert(EncodedLegIssuer_18.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_18(2063697322);
    noLegs_0_2.set(EncodedLegIssuerLen_18);
    InstrumentLeg_18.insert(EncodedLegIssuerLen_18.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_18("DATA_1152553456");
    noLegs_0_2.set(EncodedLegSecurityDesc_18);
    InstrumentLeg_18.insert(EncodedLegSecurityDesc_18.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_18(479013783);
    noLegs_0_2.set(EncodedLegSecurityDescLen_18);
    InstrumentLeg_18.insert(EncodedLegSecurityDescLen_18.getString());
    FIX::LegCFICode LegCFICode_18("STRING_83605340");
    noLegs_0_2.set(LegCFICode_18);
    InstrumentLeg_18.insert(LegCFICode_18.getString());
    FIX::LegContractMultiplier LegContractMultiplier_18;
    LegContractMultiplier_18.setString("21128063");
    noLegs_0_2.set(LegContractMultiplier_18);
    InstrumentLeg_18.insert(LegContractMultiplier_18.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_18(534429897);
    noLegs_0_2.set(LegContractMultiplierUnit_18);
    InstrumentLeg_18.insert(LegContractMultiplierUnit_18.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_18("MONTHYEAR_1067633417");
    noLegs_0_2.set(LegContractSettlMonth_18);
    InstrumentLeg_18.insert(LegContractSettlMonth_18.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_18("COUNTRY_67393111");
    noLegs_0_2.set(LegCountryOfIssue_18);
    InstrumentLeg_18.insert(LegCountryOfIssue_18.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_18("LOCALMKTDATE_1930996215");
    noLegs_0_2.set(LegCouponPaymentDate_18);
    InstrumentLeg_18.insert(LegCouponPaymentDate_18.getString());
    FIX::LegCouponRate LegCouponRate_18;
    LegCouponRate_18.setString("28.410000");
    noLegs_0_2.set(LegCouponRate_18);
    InstrumentLeg_18.insert(LegCouponRate_18.getString());
    FIX::LegCreditRating LegCreditRating_18("STRING_1981879068");
    noLegs_0_2.set(LegCreditRating_18);
    InstrumentLeg_18.insert(LegCreditRating_18.getString());
    FIX::LegCurrency LegCurrency_18("GBP");
    noLegs_0_2.set(LegCurrency_18);
    InstrumentLeg_18.insert(LegCurrency_18.getString());
    FIX::LegDatedDate LegDatedDate_18("LOCALMKTDATE_1717160202");
    noLegs_0_2.set(LegDatedDate_18);
    InstrumentLeg_18.insert(LegDatedDate_18.getString());
    FIX::LegExerciseStyle LegExerciseStyle_18(1780968961);
    noLegs_0_2.set(LegExerciseStyle_18);
    InstrumentLeg_18.insert(LegExerciseStyle_18.getString());
    FIX::LegFactor LegFactor_18;
    LegFactor_18.setString("2556840");
    noLegs_0_2.set(LegFactor_18);
    InstrumentLeg_18.insert(LegFactor_18.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_18(340171183);
    noLegs_0_2.set(LegFlowScheduleType_18);
    InstrumentLeg_18.insert(LegFlowScheduleType_18.getString());
    FIX::LegInstrRegistry LegInstrRegistry_18("STRING_1029850570");
    noLegs_0_2.set(LegInstrRegistry_18);
    InstrumentLeg_18.insert(LegInstrRegistry_18.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_18("LOCALMKTDATE_191414406");
    noLegs_0_2.set(LegInterestAccrualDate_18);
    InstrumentLeg_18.insert(LegInterestAccrualDate_18.getString());
    FIX::LegIssueDate LegIssueDate_18("LOCALMKTDATE_81460905");
    noLegs_0_2.set(LegIssueDate_18);
    InstrumentLeg_18.insert(LegIssueDate_18.getString());
    FIX::LegIssuer LegIssuer_18("STRING_779681996");
    noLegs_0_2.set(LegIssuer_18);
    InstrumentLeg_18.insert(LegIssuer_18.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_18("STRING_2059931392");
    noLegs_0_2.set(LegLocaleOfIssue_18);
    InstrumentLeg_18.insert(LegLocaleOfIssue_18.getString());
    FIX::LegMaturityDate LegMaturityDate_18("LOCALMKTDATE_1781436963");
    noLegs_0_2.set(LegMaturityDate_18);
    InstrumentLeg_18.insert(LegMaturityDate_18.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_18("MONTHYEAR_1909361467");
    noLegs_0_2.set(LegMaturityMonthYear_18);
    InstrumentLeg_18.insert(LegMaturityMonthYear_18.getString());
    FIX::LegMaturityTime LegMaturityTime_18("TZTIMEONLY_2044780497");
    noLegs_0_2.set(LegMaturityTime_18);
    InstrumentLeg_18.insert(LegMaturityTime_18.getString());
    FIX::LegOptAttribute LegOptAttribute_18('3');
    noLegs_0_2.set(LegOptAttribute_18);
    InstrumentLeg_18.insert(LegOptAttribute_18.getString());
    FIX::LegOptionRatio LegOptionRatio_18;
    LegOptionRatio_18.setString("11889058");
    noLegs_0_2.set(LegOptionRatio_18);
    InstrumentLeg_18.insert(LegOptionRatio_18.getString());
    FIX::LegPool LegPool_18("STRING_1063065372");
    noLegs_0_2.set(LegPool_18);
    InstrumentLeg_18.insert(LegPool_18.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_18("STRING_1248207048");
    noLegs_0_2.set(LegPriceUnitOfMeasure_18);
    InstrumentLeg_18.insert(LegPriceUnitOfMeasure_18.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_18;
    LegPriceUnitOfMeasureQty_18.setString("20552002");
    noLegs_0_2.set(LegPriceUnitOfMeasureQty_18);
    InstrumentLeg_18.insert(LegPriceUnitOfMeasureQty_18.getString());
    FIX::LegProduct LegProduct_18(1459052168);
    noLegs_0_2.set(LegProduct_18);
    InstrumentLeg_18.insert(LegProduct_18.getString());
    FIX::LegPutOrCall LegPutOrCall_18(1164420722);
    noLegs_0_2.set(LegPutOrCall_18);
    InstrumentLeg_18.insert(LegPutOrCall_18.getString());
    FIX::LegRatioQty LegRatioQty_18;
    LegRatioQty_18.setString("10602700");
    noLegs_0_2.set(LegRatioQty_18);
    InstrumentLeg_18.insert(LegRatioQty_18.getString());
    FIX::LegRedemptionDate LegRedemptionDate_18("LOCALMKTDATE_1938065951");
    noLegs_0_2.set(LegRedemptionDate_18);
    InstrumentLeg_18.insert(LegRedemptionDate_18.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_18("STRING_1248026062");
    noLegs_0_2.set(LegRepoCollateralSecurityType_18);
    InstrumentLeg_18.insert(LegRepoCollateralSecurityType_18.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_18;
    LegRepurchaseRate_18.setString("27.290000");
    noLegs_0_2.set(LegRepurchaseRate_18);
    InstrumentLeg_18.insert(LegRepurchaseRate_18.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_18(325012201);
    noLegs_0_2.set(LegRepurchaseTerm_18);
    InstrumentLeg_18.insert(LegRepurchaseTerm_18.getString());
    FIX::LegSecurityDesc LegSecurityDesc_18("STRING_168175831");
    noLegs_0_2.set(LegSecurityDesc_18);
    InstrumentLeg_18.insert(LegSecurityDesc_18.getString());
    FIX::LegSecurityExchange LegSecurityExchange_18("EXCHANGE_1092985840");
    noLegs_0_2.set(LegSecurityExchange_18);
    InstrumentLeg_18.insert(LegSecurityExchange_18.getString());
    FIX::LegSecurityID LegSecurityID_18("STRING_108524768");
    noLegs_0_2.set(LegSecurityID_18);
    InstrumentLeg_18.insert(LegSecurityID_18.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_18("STRING_1296438673");
    noLegs_0_2.set(LegSecurityIDSource_18);
    InstrumentLeg_18.insert(LegSecurityIDSource_18.getString());
    FIX::LegSecuritySubType LegSecuritySubType_18("STRING_927381260");
    noLegs_0_2.set(LegSecuritySubType_18);
    InstrumentLeg_18.insert(LegSecuritySubType_18.getString());
    FIX::LegSecurityType LegSecurityType_18("STRING_1269686646");
    noLegs_0_2.set(LegSecurityType_18);
    InstrumentLeg_18.insert(LegSecurityType_18.getString());
    FIX::LegSide LegSide_18('1');
    noLegs_0_2.set(LegSide_18);
    InstrumentLeg_18.insert(LegSide_18.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_18("STRING_497057815");
    noLegs_0_2.set(LegStateOrProvinceOfIssue_18);
    InstrumentLeg_18.insert(LegStateOrProvinceOfIssue_18.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_18("CHF");
    noLegs_0_2.set(LegStrikeCurrency_18);
    InstrumentLeg_18.insert(LegStrikeCurrency_18.getString());
    FIX::LegStrikePrice LegStrikePrice_18;
    LegStrikePrice_18.setString("8372289");
    noLegs_0_2.set(LegStrikePrice_18);
    InstrumentLeg_18.insert(LegStrikePrice_18.getString());
    FIX::LegSymbol LegSymbol_18("STRING_1933022529");
    noLegs_0_2.set(LegSymbol_18);
    InstrumentLeg_18.insert(LegSymbol_18.getString());
    FIX::LegSymbolSfx LegSymbolSfx_18("STRING_1661650581");
    noLegs_0_2.set(LegSymbolSfx_18);
    InstrumentLeg_18.insert(LegSymbolSfx_18.getString());
    FIX::LegTimeUnit LegTimeUnit_18("STRING_918689903");
    noLegs_0_2.set(LegTimeUnit_18);
    InstrumentLeg_18.insert(LegTimeUnit_18.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_18("STRING_565220878");
    noLegs_0_2.set(LegUnitOfMeasure_18);
    InstrumentLeg_18.insert(LegUnitOfMeasure_18.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_18;
    LegUnitOfMeasureQty_18.setString("15740983");
    noLegs_0_2.set(LegUnitOfMeasureQty_18);
    InstrumentLeg_18.insert(LegUnitOfMeasureQty_18.getString());
    all_values.push_back(InstrumentLeg_18);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::CollateralResponse::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_33;
      FIX::LegSecurityAltID LegSecurityAltID_33("STRING_327098697");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltID_33);
      LegSecAltIDGrp_NoLegSecurityAltID_33.insert(LegSecurityAltID_33.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_33("STRING_1471395175");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltIDSource_33);
      LegSecAltIDGrp_NoLegSecurityAltID_33.insert(LegSecurityAltIDSource_33.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_33);

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_0);
    }
    msg.addGroup(noLegs_0_2);
  }
  // Instrument
  multiset<string> Instrument_13;
  FIX::AttachmentPoint AttachmentPoint_13;
  AttachmentPoint_13.setString("42.000000");
  msg.set(AttachmentPoint_13);
  Instrument_13.insert(AttachmentPoint_13.getString());
  FIX::CFICode CFICode_13("STRING_1516004528");
  msg.set(CFICode_13);
  Instrument_13.insert(CFICode_13.getString());
  FIX::CPProgram CPProgram_13(99);
  msg.set(CPProgram_13);
  Instrument_13.insert(CPProgram_13.getString());
  FIX::CPRegType CPRegType_13("STRING_31507600");
  msg.set(CPRegType_13);
  Instrument_13.insert(CPRegType_13.getString());
  FIX::CapPrice CapPrice_13;
  CapPrice_13.setString("14237211");
  msg.set(CapPrice_13);
  Instrument_13.insert(CapPrice_13.getString());
  FIX::ContractMultiplier ContractMultiplier_13;
  ContractMultiplier_13.setString("18460290");
  msg.set(ContractMultiplier_13);
  Instrument_13.insert(ContractMultiplier_13.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_13(1);
  msg.set(ContractMultiplierUnit_13);
  Instrument_13.insert(ContractMultiplierUnit_13.getString());
  FIX::ContractSettlMonth ContractSettlMonth_13("MONTHYEAR_336507525");
  msg.set(ContractSettlMonth_13);
  Instrument_13.insert(ContractSettlMonth_13.getString());
  FIX::CountryOfIssue CountryOfIssue_13("COUNTRY_1636611371");
  msg.set(CountryOfIssue_13);
  Instrument_13.insert(CountryOfIssue_13.getString());
  FIX::CouponPaymentDate CouponPaymentDate_13("LOCALMKTDATE_296470737");
  msg.set(CouponPaymentDate_13);
  Instrument_13.insert(CouponPaymentDate_13.getString());
  FIX::CouponRate CouponRate_13;
  CouponRate_13.setString("2.540000");
  msg.set(CouponRate_13);
  Instrument_13.insert(CouponRate_13.getString());
  FIX::CreditRating CreditRating_13("STRING_1961623572");
  msg.set(CreditRating_13);
  Instrument_13.insert(CreditRating_13.getString());
  FIX::DatedDate DatedDate_13("LOCALMKTDATE_464646569");
  msg.set(DatedDate_13);
  Instrument_13.insert(DatedDate_13.getString());
  FIX::DetachmentPoint DetachmentPoint_13;
  DetachmentPoint_13.setString("24.460000");
  msg.set(DetachmentPoint_13);
  Instrument_13.insert(DetachmentPoint_13.getString());
  FIX::EncodedIssuer EncodedIssuer_13("DATA_2070148340");
  msg.set(EncodedIssuer_13);
  Instrument_13.insert(EncodedIssuer_13.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_13(1761085242);
  msg.set(EncodedIssuerLen_13);
  Instrument_13.insert(EncodedIssuerLen_13.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_13("DATA_1234983707");
  msg.set(EncodedSecurityDesc_13);
  Instrument_13.insert(EncodedSecurityDesc_13.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_13(1192351338);
  msg.set(EncodedSecurityDescLen_13);
  Instrument_13.insert(EncodedSecurityDescLen_13.getString());
  FIX::ExerciseStyle ExerciseStyle_13(2);
  msg.set(ExerciseStyle_13);
  Instrument_13.insert(ExerciseStyle_13.getString());
  FIX::Factor Factor_13;
  Factor_13.setString("17320415");
  msg.set(Factor_13);
  Instrument_13.insert(Factor_13.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_13(true);
  msg.set(FlexProductEligibilityIndicator_13);
  Instrument_13.insert(FlexProductEligibilityIndicator_13.getString());
  FIX::FlexibleIndicator FlexibleIndicator_13(false);
  msg.set(FlexibleIndicator_13);
  Instrument_13.insert(FlexibleIndicator_13.getString());
  FIX::FloorPrice FloorPrice_13;
  FloorPrice_13.setString("4217868");
  msg.set(FloorPrice_13);
  Instrument_13.insert(FloorPrice_13.getString());
  FIX::FlowScheduleType FlowScheduleType_13(4);
  msg.set(FlowScheduleType_13);
  Instrument_13.insert(FlowScheduleType_13.getString());
  FIX::InstrRegistry InstrRegistry_13("STRING_1812556816");
  msg.set(InstrRegistry_13);
  Instrument_13.insert(InstrRegistry_13.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_13('1');
  msg.set(InstrmtAssignmentMethod_13);
  Instrument_13.insert(InstrmtAssignmentMethod_13.getString());
  FIX::InterestAccrualDate InterestAccrualDate_13("LOCALMKTDATE_298799409");
  msg.set(InterestAccrualDate_13);
  Instrument_13.insert(InterestAccrualDate_13.getString());
  FIX::IssueDate IssueDate_13("LOCALMKTDATE_1239171494");
  msg.set(IssueDate_13);
  Instrument_13.insert(IssueDate_13.getString());
  FIX::Issuer Issuer_13("STRING_1893119994");
  msg.set(Issuer_13);
  Instrument_13.insert(Issuer_13.getString());
  FIX::ListMethod ListMethod_13(1);
  msg.set(ListMethod_13);
  Instrument_13.insert(ListMethod_13.getString());
  FIX::LocaleOfIssue LocaleOfIssue_13("STRING_563083021");
  msg.set(LocaleOfIssue_13);
  Instrument_13.insert(LocaleOfIssue_13.getString());
  FIX::MaturityDate MaturityDate_13("LOCALMKTDATE_676420546");
  msg.set(MaturityDate_13);
  Instrument_13.insert(MaturityDate_13.getString());
  FIX::MaturityMonthYear MaturityMonthYear_13("MONTHYEAR_2141902635");
  msg.set(MaturityMonthYear_13);
  Instrument_13.insert(MaturityMonthYear_13.getString());
  FIX::MaturityTime MaturityTime_13("TZTIMEONLY_950059920");
  msg.set(MaturityTime_13);
  Instrument_13.insert(MaturityTime_13.getString());
  FIX::MinPriceIncrement MinPriceIncrement_13;
  MinPriceIncrement_13.setString("7079281");
  msg.set(MinPriceIncrement_13);
  Instrument_13.insert(MinPriceIncrement_13.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_13;
  MinPriceIncrementAmount_13.setString("14181401");
  msg.set(MinPriceIncrementAmount_13);
  Instrument_13.insert(MinPriceIncrementAmount_13.getString());
  FIX::NTPositionLimit NTPositionLimit_13(648605340);
  msg.set(NTPositionLimit_13);
  Instrument_13.insert(NTPositionLimit_13.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_13;
  NotionalPercentageOutstanding_13.setString("64.690000");
  msg.set(NotionalPercentageOutstanding_13);
  Instrument_13.insert(NotionalPercentageOutstanding_13.getString());
  FIX::OptAttribute OptAttribute_13('1');
  msg.set(OptAttribute_13);
  Instrument_13.insert(OptAttribute_13.getString());
  FIX::OptPayoutAmount OptPayoutAmount_13;
  OptPayoutAmount_13.setString("1377330");
  msg.set(OptPayoutAmount_13);
  Instrument_13.insert(OptPayoutAmount_13.getString());
  FIX::OptPayoutType OptPayoutType_13(3);
  msg.set(OptPayoutType_13);
  Instrument_13.insert(OptPayoutType_13.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_13;
  OriginalNotionalPercentageOutstanding_13.setString("42.400000");
  msg.set(OriginalNotionalPercentageOutstanding_13);
  Instrument_13.insert(OriginalNotionalPercentageOutstanding_13.getString());
  FIX::Pool Pool_13("STRING_2099356635");
  msg.set(Pool_13);
  Instrument_13.insert(Pool_13.getString());
  FIX::PositionLimit PositionLimit_13(517490128);
  msg.set(PositionLimit_13);
  Instrument_13.insert(PositionLimit_13.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_13("STRING_PCTPAR");
  msg.set(PriceQuoteMethod_13);
  Instrument_13.insert(PriceQuoteMethod_13.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_13("STRING_2022021327");
  msg.set(PriceUnitOfMeasure_13);
  Instrument_13.insert(PriceUnitOfMeasure_13.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_13;
  PriceUnitOfMeasureQty_13.setString("1310917");
  msg.set(PriceUnitOfMeasureQty_13);
  Instrument_13.insert(PriceUnitOfMeasureQty_13.getString());
  FIX::Product Product_15(4);
  msg.set(Product_15);
  Instrument_13.insert(Product_15.getString());
  FIX::ProductComplex ProductComplex_13("STRING_1066889018");
  msg.set(ProductComplex_13);
  Instrument_13.insert(ProductComplex_13.getString());
  FIX::PutOrCall PutOrCall_13(1);
  msg.set(PutOrCall_13);
  Instrument_13.insert(PutOrCall_13.getString());
  FIX::RedemptionDate RedemptionDate_13("LOCALMKTDATE_2096408268");
  msg.set(RedemptionDate_13);
  Instrument_13.insert(RedemptionDate_13.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_13("STRING_1014928668");
  msg.set(RepoCollateralSecurityType_13);
  Instrument_13.insert(RepoCollateralSecurityType_13.getString());
  FIX::RepurchaseRate RepurchaseRate_13;
  RepurchaseRate_13.setString("16.640000");
  msg.set(RepurchaseRate_13);
  Instrument_13.insert(RepurchaseRate_13.getString());
  FIX::RepurchaseTerm RepurchaseTerm_13(370711492);
  msg.set(RepurchaseTerm_13);
  Instrument_13.insert(RepurchaseTerm_13.getString());
  FIX::RestructuringType RestructuringType_13("STRING_XR");
  msg.set(RestructuringType_13);
  Instrument_13.insert(RestructuringType_13.getString());
  FIX::SecurityDesc SecurityDesc_13("STRING_775224833");
  msg.set(SecurityDesc_13);
  Instrument_13.insert(SecurityDesc_13.getString());
  FIX::SecurityExchange SecurityExchange_13("EXCHANGE_1711188267");
  msg.set(SecurityExchange_13);
  Instrument_13.insert(SecurityExchange_13.getString());
  FIX::SecurityGroup SecurityGroup_13("STRING_1047306609");
  msg.set(SecurityGroup_13);
  Instrument_13.insert(SecurityGroup_13.getString());
  FIX::SecurityID SecurityID_13("STRING_2014396327");
  msg.set(SecurityID_13);
  Instrument_13.insert(SecurityID_13.getString());
  FIX::SecurityIDSource SecurityIDSource_13("STRING_E");
  msg.set(SecurityIDSource_13);
  Instrument_13.insert(SecurityIDSource_13.getString());
  FIX::SecurityStatus SecurityStatus_13("STRING_1");
  msg.set(SecurityStatus_13);
  Instrument_13.insert(SecurityStatus_13.getString());
  FIX::SecuritySubType SecuritySubType_13("STRING_429995700");
  msg.set(SecuritySubType_13);
  Instrument_13.insert(SecuritySubType_13.getString());
  FIX::SecurityType SecurityType_15("STRING_GO");
  msg.set(SecurityType_15);
  Instrument_13.insert(SecurityType_15.getString());
  FIX::Seniority Seniority_13("STRING_SB");
  msg.set(Seniority_13);
  Instrument_13.insert(Seniority_13.getString());
  FIX::SettlMethod SettlMethod_13('C');
  msg.set(SettlMethod_13);
  Instrument_13.insert(SettlMethod_13.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_13("STRING_693689658");
  msg.set(SettleOnOpenFlag_13);
  Instrument_13.insert(SettleOnOpenFlag_13.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_13("STRING_938280164");
  msg.set(StateOrProvinceOfIssue_13);
  Instrument_13.insert(StateOrProvinceOfIssue_13.getString());
  FIX::StrikeCurrency StrikeCurrency_13("EUR");
  msg.set(StrikeCurrency_13);
  Instrument_13.insert(StrikeCurrency_13.getString());
  FIX::StrikeMultiplier StrikeMultiplier_13;
  StrikeMultiplier_13.setString("5454441");
  msg.set(StrikeMultiplier_13);
  Instrument_13.insert(StrikeMultiplier_13.getString());
  FIX::StrikePrice StrikePrice_13;
  StrikePrice_13.setString("189103");
  msg.set(StrikePrice_13);
  Instrument_13.insert(StrikePrice_13.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_13(4);
  msg.set(StrikePriceBoundaryMethod_13);
  Instrument_13.insert(StrikePriceBoundaryMethod_13.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_13;
  StrikePriceBoundaryPrecision_13.setString("83.910000");
  msg.set(StrikePriceBoundaryPrecision_13);
  Instrument_13.insert(StrikePriceBoundaryPrecision_13.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_13(3);
  msg.set(StrikePriceDeterminationMethod_13);
  Instrument_13.insert(StrikePriceDeterminationMethod_13.getString());
  FIX::StrikeValue StrikeValue_13;
  StrikeValue_13.setString("10203961");
  msg.set(StrikeValue_13);
  Instrument_13.insert(StrikeValue_13.getString());
  FIX::Symbol Symbol_13("STRING_644091430");
  msg.set(Symbol_13);
  Instrument_13.insert(Symbol_13.getString());
  FIX::SymbolSfx SymbolSfx_13("STRING_CD");
  msg.set(SymbolSfx_13);
  Instrument_13.insert(SymbolSfx_13.getString());
  FIX::TimeUnit TimeUnit_13("STRING_Mo");
  msg.set(TimeUnit_13);
  Instrument_13.insert(TimeUnit_13.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_13(1);
  msg.set(UnderlyingPriceDeterminationMethod_13);
  Instrument_13.insert(UnderlyingPriceDeterminationMethod_13.getString());
  FIX::UnitOfMeasure UnitOfMeasure_13("STRING_oz_tr");
  msg.set(UnitOfMeasure_13);
  Instrument_13.insert(UnitOfMeasure_13.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_13;
  UnitOfMeasureQty_13.setString("21107333");
  msg.set(UnitOfMeasureQty_13);
  Instrument_13.insert(UnitOfMeasureQty_13.getString());
  FIX::ValuationMethod ValuationMethod_13("STRING_FUT");
  msg.set(ValuationMethod_13);
  Instrument_13.insert(ValuationMethod_13.getString());
  all_values.push_back(Instrument_13);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::CollateralResponse::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_23;
    FIX::ComplexEventCondition ComplexEventCondition_23(1);
    noComplexEvents_0_0.set(ComplexEventCondition_23);
    ComplexEvents_NoComplexEvents_23.insert(ComplexEventCondition_23.getString());
    FIX::ComplexEventPrice ComplexEventPrice_23;
    ComplexEventPrice_23.setString("13280942");
    noComplexEvents_0_0.set(ComplexEventPrice_23);
    ComplexEvents_NoComplexEvents_23.insert(ComplexEventPrice_23.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_23(5);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_23);
    ComplexEvents_NoComplexEvents_23.insert(ComplexEventPriceBoundaryMethod_23.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_23;
    ComplexEventPriceBoundaryPrecision_23.setString("61.670000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_23);
    ComplexEvents_NoComplexEvents_23.insert(ComplexEventPriceBoundaryPrecision_23.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_23(3);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_23);
    ComplexEvents_NoComplexEvents_23.insert(ComplexEventPriceTimeType_23.getString());
    FIX::ComplexEventType ComplexEventType_23(7);
    noComplexEvents_0_0.set(ComplexEventType_23);
    ComplexEvents_NoComplexEvents_23.insert(ComplexEventType_23.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_23;
    ComplexOptPayoutAmount_23.setString("17155388");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_23);
    ComplexEvents_NoComplexEvents_23.insert(ComplexOptPayoutAmount_23.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_23);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CollateralResponse::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_42;
      FIX::ComplexEventEndDate ComplexEventEndDate_42(FIX::UTCTIMESTAMP(18, 5, 11, 27, 12, 2014));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_42);
      ComplexEventDates_NoComplexEventDates_42.insert(ComplexEventEndDate_42.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_42(FIX::UTCTIMESTAMP(18, 47, 47, 1, 7, 2013));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_42);
      ComplexEventDates_NoComplexEventDates_42.insert(ComplexEventStartDate_42.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_42);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_85;
        FIX::ComplexEventEndTime ComplexEventEndTime_85(FIX::UTCTIMEONLY(11, 28, 49));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_85);
        ComplexEventTimes_NoComplexEventTimes_85.insert(ComplexEventEndTime_85.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_85(FIX::UTCTIMEONLY(22, 46, 51));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_85);
        ComplexEventTimes_NoComplexEventTimes_85.insert(ComplexEventStartTime_85.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_85);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::CollateralResponse::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_43;
      FIX::ComplexEventEndDate ComplexEventEndDate_43(FIX::UTCTIMESTAMP(2, 23, 4, 18, 12, 2014));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_43);
      ComplexEventDates_NoComplexEventDates_43.insert(ComplexEventEndDate_43.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_43(FIX::UTCTIMESTAMP(12, 1, 45, 7, 1, 2002));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_43);
      ComplexEventDates_NoComplexEventDates_43.insert(ComplexEventStartDate_43.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_43);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_86;
        FIX::ComplexEventEndTime ComplexEventEndTime_86(FIX::UTCTIMEONLY(6, 38, 30));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_86);
        ComplexEventTimes_NoComplexEventTimes_86.insert(ComplexEventEndTime_86.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_86(FIX::UTCTIMEONLY(13, 12, 15));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_86);
        ComplexEventTimes_NoComplexEventTimes_86.insert(ComplexEventStartTime_86.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_86);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::CollateralResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_87;
        FIX::ComplexEventEndTime ComplexEventEndTime_87(FIX::UTCTIMEONLY(23, 35, 23));
        noComplexEventTimes_0_1_2_1.set(ComplexEventEndTime_87);
        ComplexEventTimes_NoComplexEventTimes_87.insert(ComplexEventEndTime_87.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_87(FIX::UTCTIMEONLY(13, 1, 10));
        noComplexEventTimes_0_1_2_1.set(ComplexEventStartTime_87);
        ComplexEventTimes_NoComplexEventTimes_87.insert(ComplexEventStartTime_87.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_87);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      {
        FIX50SP2::CollateralResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_88;
        FIX::ComplexEventEndTime ComplexEventEndTime_88(FIX::UTCTIMEONLY(4, 33, 33));
        noComplexEventTimes_0_1_2_2.set(ComplexEventEndTime_88);
        ComplexEventTimes_NoComplexEventTimes_88.insert(ComplexEventEndTime_88.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_88(FIX::UTCTIMEONLY(13, 36, 34));
        noComplexEventTimes_0_1_2_2.set(ComplexEventStartTime_88);
        ComplexEventTimes_NoComplexEventTimes_88.insert(ComplexEventStartTime_88.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_88);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::CollateralResponse::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_24;
    FIX::EventDate EventDate_24("LOCALMKTDATE_1314304357");
    noEvents_0_0.set(EventDate_24);
    EvntGrp_NoEvents_24.insert(EventDate_24.getString());
    FIX::EventPx EventPx_24;
    EventPx_24.setString("20287970");
    noEvents_0_0.set(EventPx_24);
    EvntGrp_NoEvents_24.insert(EventPx_24.getString());
    FIX::EventText EventText_24("STRING_1103526040");
    noEvents_0_0.set(EventText_24);
    EvntGrp_NoEvents_24.insert(EventText_24.getString());
    FIX::EventTime EventTime_24(FIX::UTCTIMESTAMP(7, 40, 12, 26, 11, 2005));
    noEvents_0_0.set(EventTime_24);
    EvntGrp_NoEvents_24.insert(EventTime_24.getString());
    FIX::EventType EventType_24(18);
    noEvents_0_0.set(EventType_24);
    EvntGrp_NoEvents_24.insert(EventType_24.getString());
    all_values.push_back(EvntGrp_NoEvents_24);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::CollateralResponse::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_25;
    FIX::EventDate EventDate_25("LOCALMKTDATE_384401531");
    noEvents_0_1.set(EventDate_25);
    EvntGrp_NoEvents_25.insert(EventDate_25.getString());
    FIX::EventPx EventPx_25;
    EventPx_25.setString("15825497");
    noEvents_0_1.set(EventPx_25);
    EvntGrp_NoEvents_25.insert(EventPx_25.getString());
    FIX::EventText EventText_25("STRING_2022591052");
    noEvents_0_1.set(EventText_25);
    EvntGrp_NoEvents_25.insert(EventText_25.getString());
    FIX::EventTime EventTime_25(FIX::UTCTIMESTAMP(2, 19, 9, 13, 9, 2010));
    noEvents_0_1.set(EventTime_25);
    EvntGrp_NoEvents_25.insert(EventTime_25.getString());
    FIX::EventType EventType_25(5);
    noEvents_0_1.set(EventType_25);
    EvntGrp_NoEvents_25.insert(EventType_25.getString());
    all_values.push_back(EvntGrp_NoEvents_25);

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::CollateralResponse::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_25;
    FIX::InstrumentPartyID InstrumentPartyID_25("STRING_1781688090");
    noInstrumentParties_0_0.set(InstrumentPartyID_25);
    InstrumentParties_NoInstrumentParties_25.insert(InstrumentPartyID_25.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_25('2');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_25);
    InstrumentParties_NoInstrumentParties_25.insert(InstrumentPartyIDSource_25.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_25(349247079);
    noInstrumentParties_0_0.set(InstrumentPartyRole_25);
    InstrumentParties_NoInstrumentParties_25.insert(InstrumentPartyRole_25.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_25);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CollateralResponse::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_48;
      FIX::InstrumentPartySubID InstrumentPartySubID_48("STRING_1164614906");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_48);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_48.insert(InstrumentPartySubID_48.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_48(1649175495);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_48);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_48.insert(InstrumentPartySubIDType_48.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_48);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::CollateralResponse::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_49;
      FIX::InstrumentPartySubID InstrumentPartySubID_49("STRING_988131343");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_49);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_49.insert(InstrumentPartySubID_49.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_49(950793355);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_49);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_49.insert(InstrumentPartySubIDType_49.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_49);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::CollateralResponse::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_50;
      FIX::InstrumentPartySubID InstrumentPartySubID_50("STRING_815996204");
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubID_50);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_50.insert(InstrumentPartySubID_50.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_50(869444755);
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubIDType_50);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_50.insert(InstrumentPartySubIDType_50.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_50);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::CollateralResponse::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_26;
    FIX::InstrumentPartyID InstrumentPartyID_26("STRING_2054319396");
    noInstrumentParties_0_1.set(InstrumentPartyID_26);
    InstrumentParties_NoInstrumentParties_26.insert(InstrumentPartyID_26.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_26('1');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_26);
    InstrumentParties_NoInstrumentParties_26.insert(InstrumentPartyIDSource_26.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_26(1879044194);
    noInstrumentParties_0_1.set(InstrumentPartyRole_26);
    InstrumentParties_NoInstrumentParties_26.insert(InstrumentPartyRole_26.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_26);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CollateralResponse::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_51;
      FIX::InstrumentPartySubID InstrumentPartySubID_51("STRING_291401538");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_51);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_51.insert(InstrumentPartySubID_51.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_51(1052615888);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_51);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_51.insert(InstrumentPartySubIDType_51.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_51);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::CollateralResponse::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_52;
      FIX::InstrumentPartySubID InstrumentPartySubID_52("STRING_2112397218");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_52);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_52.insert(InstrumentPartySubID_52.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_52(989980553);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_52);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_52.insert(InstrumentPartySubIDType_52.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_52);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::CollateralResponse::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_53;
      FIX::InstrumentPartySubID InstrumentPartySubID_53("STRING_223719398");
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubID_53);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_53.insert(InstrumentPartySubID_53.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_53(349315102);
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubIDType_53);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_53.insert(InstrumentPartySubIDType_53.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_53);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_2);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::CollateralResponse::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_27;
    FIX::InstrumentPartyID InstrumentPartyID_27("STRING_425046692");
    noInstrumentParties_0_2.set(InstrumentPartyID_27);
    InstrumentParties_NoInstrumentParties_27.insert(InstrumentPartyID_27.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_27('9');
    noInstrumentParties_0_2.set(InstrumentPartyIDSource_27);
    InstrumentParties_NoInstrumentParties_27.insert(InstrumentPartyIDSource_27.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_27(714443707);
    noInstrumentParties_0_2.set(InstrumentPartyRole_27);
    InstrumentParties_NoInstrumentParties_27.insert(InstrumentPartyRole_27.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_27);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CollateralResponse::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_54;
      FIX::InstrumentPartySubID InstrumentPartySubID_54("STRING_388414422");
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubID_54);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_54.insert(InstrumentPartySubID_54.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_54(2037644416);
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubIDType_54);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_54.insert(InstrumentPartySubIDType_54.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_54);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::CollateralResponse::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_55;
      FIX::InstrumentPartySubID InstrumentPartySubID_55("STRING_794044848");
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubID_55);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_55.insert(InstrumentPartySubID_55.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_55(766208246);
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubIDType_55);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_55.insert(InstrumentPartySubIDType_55.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_55);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_1);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::CollateralResponse::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_29;
    FIX::SecurityAltID SecurityAltID_29("STRING_1225681992");
    noSecurityAltID_0_0.set(SecurityAltID_29);
    SecAltIDGrp_NoSecurityAltID_29.insert(SecurityAltID_29.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_29("STRING_1979335600");
    noSecurityAltID_0_0.set(SecurityAltIDSource_29);
    SecAltIDGrp_NoSecurityAltID_29.insert(SecurityAltIDSource_29.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_29);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::CollateralResponse::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_30;
    FIX::SecurityAltID SecurityAltID_30("STRING_1592882201");
    noSecurityAltID_0_1.set(SecurityAltID_30);
    SecAltIDGrp_NoSecurityAltID_30.insert(SecurityAltID_30.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_30("STRING_1152652381");
    noSecurityAltID_0_1.set(SecurityAltIDSource_30);
    SecAltIDGrp_NoSecurityAltID_30.insert(SecurityAltIDSource_30.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_30);

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_26;
  FIX::SecurityXML SecurityXML_27("XMLDATA_181099032");
  msg.set(SecurityXML_27);
  FIX::SecurityXMLLen SecurityXMLLen_13(799911470);
  msg.set(SecurityXMLLen_13);
  FIX::SecurityXMLSchema SecurityXMLSchema_13("STRING_169783640");
  msg.set(SecurityXMLSchema_13);
  SecurityXML_26.insert(SecurityXMLSchema_13.getString());
  all_values.push_back(SecurityXML_26);

  // MiscFeesGrp
  // Group MiscFeesGrp.NoMiscFees
  {
    FIX50SP2::CollateralResponse::NoMiscFees noMiscFees_0_0;
    // MiscFeesGrp.NoMiscFees
    multiset<string> MiscFeesGrp_NoMiscFees_18;
    FIX::MiscFeeAmt MiscFeeAmt_18;
    MiscFeeAmt_18.setString("17880428");
    noMiscFees_0_0.set(MiscFeeAmt_18);
    MiscFeesGrp_NoMiscFees_18.insert(MiscFeeAmt_18.getString());
    FIX::MiscFeeBasis MiscFeeBasis_18(0);
    noMiscFees_0_0.set(MiscFeeBasis_18);
    MiscFeesGrp_NoMiscFees_18.insert(MiscFeeBasis_18.getString());
    FIX::MiscFeeCurr MiscFeeCurr_18("CHF");
    noMiscFees_0_0.set(MiscFeeCurr_18);
    MiscFeesGrp_NoMiscFees_18.insert(MiscFeeCurr_18.getString());
    FIX::MiscFeeType MiscFeeType_18("STRING_8");
    noMiscFees_0_0.set(MiscFeeType_18);
    MiscFeesGrp_NoMiscFees_18.insert(MiscFeeType_18.getString());
    all_values.push_back(MiscFeesGrp_NoMiscFees_18);

    msg.addGroup(noMiscFees_0_0);
  }
  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::CollateralResponse::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_29;
    FIX::PartyID PartyID_29("STRING_241564467");
    noPartyIDs_0_0.set(PartyID_29);
    Parties_NoPartyIDs_29.insert(PartyID_29.getString());
    FIX::PartyIDSource PartyIDSource_29('7');
    noPartyIDs_0_0.set(PartyIDSource_29);
    Parties_NoPartyIDs_29.insert(PartyIDSource_29.getString());
    FIX::PartyRole PartyRole_29(41);
    noPartyIDs_0_0.set(PartyRole_29);
    Parties_NoPartyIDs_29.insert(PartyRole_29.getString());
    all_values.push_back(Parties_NoPartyIDs_29);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::CollateralResponse::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_59;
      FIX::PartySubID PartySubID_59("STRING_584678574");
      noPartySubIDs_0_1_0.set(PartySubID_59);
      PtysSubGrp_NoPartySubIDs_59.insert(PartySubID_59.getString());
      FIX::PartySubIDType PartySubIDType_59(33);
      noPartySubIDs_0_1_0.set(PartySubIDType_59);
      PtysSubGrp_NoPartySubIDs_59.insert(PartySubIDType_59.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_59);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::CollateralResponse::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_30;
    FIX::PartyID PartyID_30("STRING_1517899754");
    noPartyIDs_0_1.set(PartyID_30);
    Parties_NoPartyIDs_30.insert(PartyID_30.getString());
    FIX::PartyIDSource PartyIDSource_30('I');
    noPartyIDs_0_1.set(PartyIDSource_30);
    Parties_NoPartyIDs_30.insert(PartyIDSource_30.getString());
    FIX::PartyRole PartyRole_30(78);
    noPartyIDs_0_1.set(PartyRole_30);
    Parties_NoPartyIDs_30.insert(PartyRole_30.getString());
    all_values.push_back(Parties_NoPartyIDs_30);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::CollateralResponse::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_60;
      FIX::PartySubID PartySubID_60("STRING_1648437383");
      noPartySubIDs_1_1_0.set(PartySubID_60);
      PtysSubGrp_NoPartySubIDs_60.insert(PartySubID_60.getString());
      FIX::PartySubIDType PartySubIDType_60(23);
      noPartySubIDs_1_1_0.set(PartySubIDType_60);
      PtysSubGrp_NoPartySubIDs_60.insert(PartySubIDType_60.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_60);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::CollateralResponse::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_31;
    FIX::PartyID PartyID_31("STRING_2005140978");
    noPartyIDs_0_2.set(PartyID_31);
    Parties_NoPartyIDs_31.insert(PartyID_31.getString());
    FIX::PartyIDSource PartyIDSource_31('8');
    noPartyIDs_0_2.set(PartyIDSource_31);
    Parties_NoPartyIDs_31.insert(PartyIDSource_31.getString());
    FIX::PartyRole PartyRole_31(69);
    noPartyIDs_0_2.set(PartyRole_31);
    Parties_NoPartyIDs_31.insert(PartyRole_31.getString());
    all_values.push_back(Parties_NoPartyIDs_31);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::CollateralResponse::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_61;
      FIX::PartySubID PartySubID_61("STRING_1349792263");
      noPartySubIDs_2_1_0.set(PartySubID_61);
      PtysSubGrp_NoPartySubIDs_61.insert(PartySubID_61.getString());
      FIX::PartySubIDType PartySubIDType_61(9);
      noPartySubIDs_2_1_0.set(PartySubIDType_61);
      PtysSubGrp_NoPartySubIDs_61.insert(PartySubIDType_61.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_61);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::CollateralResponse::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_62;
      FIX::PartySubID PartySubID_62("STRING_455717529");
      noPartySubIDs_2_1_1.set(PartySubID_62);
      PtysSubGrp_NoPartySubIDs_62.insert(PartySubID_62.getString());
      FIX::PartySubIDType PartySubIDType_62(14);
      noPartySubIDs_2_1_1.set(PartySubIDType_62);
      PtysSubGrp_NoPartySubIDs_62.insert(PartySubIDType_62.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_62);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_1);
    }
    msg.addGroup(noPartyIDs_0_2);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_7;
  FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_7("CHF");
  msg.set(BenchmarkCurveCurrency_7);
  SpreadOrBenchmarkCurveData_7.insert(BenchmarkCurveCurrency_7.getString());
  FIX::BenchmarkCurveName BenchmarkCurveName_7("STRING_OTHER");
  msg.set(BenchmarkCurveName_7);
  SpreadOrBenchmarkCurveData_7.insert(BenchmarkCurveName_7.getString());
  FIX::BenchmarkCurvePoint BenchmarkCurvePoint_7("STRING_171125724");
  msg.set(BenchmarkCurvePoint_7);
  SpreadOrBenchmarkCurveData_7.insert(BenchmarkCurvePoint_7.getString());
  FIX::BenchmarkPrice BenchmarkPrice_7;
  BenchmarkPrice_7.setString("3196074");
  msg.set(BenchmarkPrice_7);
  SpreadOrBenchmarkCurveData_7.insert(BenchmarkPrice_7.getString());
  FIX::BenchmarkPriceType BenchmarkPriceType_7(1235661453);
  msg.set(BenchmarkPriceType_7);
  SpreadOrBenchmarkCurveData_7.insert(BenchmarkPriceType_7.getString());
  FIX::BenchmarkSecurityID BenchmarkSecurityID_7("STRING_1291702720");
  msg.set(BenchmarkSecurityID_7);
  SpreadOrBenchmarkCurveData_7.insert(BenchmarkSecurityID_7.getString());
  FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_7("STRING_818394525");
  msg.set(BenchmarkSecurityIDSource_7);
  SpreadOrBenchmarkCurveData_7.insert(BenchmarkSecurityIDSource_7.getString());
  FIX::Spread Spread_7;
  Spread_7.setString("17456653");
  msg.set(Spread_7);
  SpreadOrBenchmarkCurveData_7.insert(Spread_7.getString());
  all_values.push_back(SpreadOrBenchmarkCurveData_7);

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::CollateralResponse::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_13;
    FIX::StipulationType StipulationType_13("STRING_ROLLTYPE");
    noStipulations_0_0.set(StipulationType_13);
    Stipulations_NoStipulations_13.insert(StipulationType_13.getString());
    FIX::StipulationValue StipulationValue_13("STRING_1987229841");
    noStipulations_0_0.set(StipulationValue_13);
    Stipulations_NoStipulations_13.insert(StipulationValue_13.getString());
    all_values.push_back(Stipulations_NoStipulations_13);

    msg.addGroup(noStipulations_0_0);
  }
  // TrdCollGrp
  // Group TrdCollGrp.NoTrades
  {
    FIX50SP2::CollateralResponse::NoTrades noTrades_0_0;
    // TrdCollGrp.NoTrades
    multiset<string> TrdCollGrp_NoTrades_10;
    FIX::SecondaryTradeReportID SecondaryTradeReportID_10("STRING_563001682");
    noTrades_0_0.set(SecondaryTradeReportID_10);
    TrdCollGrp_NoTrades_10.insert(SecondaryTradeReportID_10.getString());
    FIX::TradeReportID TradeReportID_10("STRING_1133926549");
    noTrades_0_0.set(TradeReportID_10);
    TrdCollGrp_NoTrades_10.insert(TradeReportID_10.getString());
    all_values.push_back(TrdCollGrp_NoTrades_10);

    msg.addGroup(noTrades_0_0);
  }
  {
    FIX50SP2::CollateralResponse::NoTrades noTrades_0_1;
    // TrdCollGrp.NoTrades
    multiset<string> TrdCollGrp_NoTrades_11;
    FIX::SecondaryTradeReportID SecondaryTradeReportID_11("STRING_1376075393");
    noTrades_0_1.set(SecondaryTradeReportID_11);
    TrdCollGrp_NoTrades_11.insert(SecondaryTradeReportID_11.getString());
    FIX::TradeReportID TradeReportID_11("STRING_1570986582");
    noTrades_0_1.set(TradeReportID_11);
    TrdCollGrp_NoTrades_11.insert(TradeReportID_11.getString());
    all_values.push_back(TrdCollGrp_NoTrades_11);

    msg.addGroup(noTrades_0_1);
  }
  {
    FIX50SP2::CollateralResponse::NoTrades noTrades_0_2;
    // TrdCollGrp.NoTrades
    multiset<string> TrdCollGrp_NoTrades_12;
    FIX::SecondaryTradeReportID SecondaryTradeReportID_12("STRING_504342655");
    noTrades_0_2.set(SecondaryTradeReportID_12);
    TrdCollGrp_NoTrades_12.insert(SecondaryTradeReportID_12.getString());
    FIX::TradeReportID TradeReportID_12("STRING_162585421");
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
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_8;
    FIX::DeskOrderHandlingInst DeskOrderHandlingInst_8("MULTIPLESTRINGVALUE_SCL");
    noTrdRegTimestamps_0_0.set(DeskOrderHandlingInst_8);
    TrdRegTimestamps_NoTrdRegTimestamps_8.insert(DeskOrderHandlingInst_8.getString());
    FIX::DeskType DeskType_8("STRING_PT");
    noTrdRegTimestamps_0_0.set(DeskType_8);
    TrdRegTimestamps_NoTrdRegTimestamps_8.insert(DeskType_8.getString());
    FIX::DeskTypeSource DeskTypeSource_8(1);
    noTrdRegTimestamps_0_0.set(DeskTypeSource_8);
    TrdRegTimestamps_NoTrdRegTimestamps_8.insert(DeskTypeSource_8.getString());
    FIX::TrdRegTimestamp TrdRegTimestamp_8(FIX::UTCTIMESTAMP(12, 45, 11, 7, 1, 2009));
    noTrdRegTimestamps_0_0.set(TrdRegTimestamp_8);
    TrdRegTimestamps_NoTrdRegTimestamps_8.insert(TrdRegTimestamp_8.getString());
    FIX::TrdRegTimestampOrigin TrdRegTimestampOrigin_8("STRING_1199636740");
    noTrdRegTimestamps_0_0.set(TrdRegTimestampOrigin_8);
    TrdRegTimestamps_NoTrdRegTimestamps_8.insert(TrdRegTimestampOrigin_8.getString());
    FIX::TrdRegTimestampType TrdRegTimestampType_8(5);
    noTrdRegTimestamps_0_0.set(TrdRegTimestampType_8);
    TrdRegTimestamps_NoTrdRegTimestamps_8.insert(TrdRegTimestampType_8.getString());
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_8);

    msg.addGroup(noTrdRegTimestamps_0_0);
  }
  // UndInstrmtCollGrp
  // Group UndInstrmtCollGrp.NoUnderlyings
  {
    FIX50SP2::CollateralResponse::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtCollGrp.NoUnderlyings
    multiset<string> UndInstrmtCollGrp_NoUnderlyings_6;
    FIX::CollAction CollAction_6(0);
    noUnderlyings_0_0.set(CollAction_6);
    UndInstrmtCollGrp_NoUnderlyings_6.insert(CollAction_6.getString());
    all_values.push_back(UndInstrmtCollGrp_NoUnderlyings_6);

    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_24;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_24("DATA_772113557");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_24);
    UnderlyingInstrument_24.insert(EncodedUnderlyingIssuer_24.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_24(1867250003);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_24);
    UnderlyingInstrument_24.insert(EncodedUnderlyingIssuerLen_24.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_24("DATA_1882916832");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_24);
    UnderlyingInstrument_24.insert(EncodedUnderlyingSecurityDesc_24.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_24(2063816277);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_24);
    UnderlyingInstrument_24.insert(EncodedUnderlyingSecurityDescLen_24.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_24;
    UnderlyingAdjustedQuantity_24.setString("5381608");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_24);
    UnderlyingInstrument_24.insert(UnderlyingAdjustedQuantity_24.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_24;
    UnderlyingAllocationPercent_24.setString("85.580000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_24);
    UnderlyingInstrument_24.insert(UnderlyingAllocationPercent_24.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_24;
    UnderlyingAttachmentPoint_24.setString("44.440000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_24);
    UnderlyingInstrument_24.insert(UnderlyingAttachmentPoint_24.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_24("STRING_1083158215");
    noUnderlyings_0_0.set(UnderlyingCFICode_24);
    UnderlyingInstrument_24.insert(UnderlyingCFICode_24.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_24("STRING_1320844751");
    noUnderlyings_0_0.set(UnderlyingCPProgram_24);
    UnderlyingInstrument_24.insert(UnderlyingCPProgram_24.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_24("STRING_879361263");
    noUnderlyings_0_0.set(UnderlyingCPRegType_24);
    UnderlyingInstrument_24.insert(UnderlyingCPRegType_24.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_24;
    UnderlyingCapValue_24.setString("16461598");
    noUnderlyings_0_0.set(UnderlyingCapValue_24);
    UnderlyingInstrument_24.insert(UnderlyingCapValue_24.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_24;
    UnderlyingCashAmount_24.setString("3072876");
    noUnderlyings_0_0.set(UnderlyingCashAmount_24);
    UnderlyingInstrument_24.insert(UnderlyingCashAmount_24.getString());
    FIX::UnderlyingCashType UnderlyingCashType_24("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_24);
    UnderlyingInstrument_24.insert(UnderlyingCashType_24.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_24;
    UnderlyingContractMultiplier_24.setString("10696628");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_24);
    UnderlyingInstrument_24.insert(UnderlyingContractMultiplier_24.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_24(811630308);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_24);
    UnderlyingInstrument_24.insert(UnderlyingContractMultiplierUnit_24.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_24("COUNTRY_270538429");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_24);
    UnderlyingInstrument_24.insert(UnderlyingCountryOfIssue_24.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_24("LOCALMKTDATE_1926197358");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_24);
    UnderlyingInstrument_24.insert(UnderlyingCouponPaymentDate_24.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_24;
    UnderlyingCouponRate_24.setString("58.720000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_24);
    UnderlyingInstrument_24.insert(UnderlyingCouponRate_24.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_24("STRING_2081561234");
    noUnderlyings_0_0.set(UnderlyingCreditRating_24);
    UnderlyingInstrument_24.insert(UnderlyingCreditRating_24.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_24("CAN");
    noUnderlyings_0_0.set(UnderlyingCurrency_24);
    UnderlyingInstrument_24.insert(UnderlyingCurrency_24.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_24;
    UnderlyingCurrentValue_24.setString("11362148");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_24);
    UnderlyingInstrument_24.insert(UnderlyingCurrentValue_24.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_24;
    UnderlyingDetachmentPoint_24.setString("7.930000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_24);
    UnderlyingInstrument_24.insert(UnderlyingDetachmentPoint_24.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_24;
    UnderlyingDirtyPrice_24.setString("10715672");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_24);
    UnderlyingInstrument_24.insert(UnderlyingDirtyPrice_24.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_24;
    UnderlyingEndPrice_24.setString("15406608");
    noUnderlyings_0_0.set(UnderlyingEndPrice_24);
    UnderlyingInstrument_24.insert(UnderlyingEndPrice_24.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_24;
    UnderlyingEndValue_24.setString("19622965");
    noUnderlyings_0_0.set(UnderlyingEndValue_24);
    UnderlyingInstrument_24.insert(UnderlyingEndValue_24.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_24(1982393239);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_24);
    UnderlyingInstrument_24.insert(UnderlyingExerciseStyle_24.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_24;
    UnderlyingFXRate_24.setString("5928139");
    noUnderlyings_0_0.set(UnderlyingFXRate_24);
    UnderlyingInstrument_24.insert(UnderlyingFXRate_24.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_24('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_24);
    UnderlyingInstrument_24.insert(UnderlyingFXRateCalc_24.getString());
    FIX::UnderlyingFactor UnderlyingFactor_24;
    UnderlyingFactor_24.setString("13825521");
    noUnderlyings_0_0.set(UnderlyingFactor_24);
    UnderlyingInstrument_24.insert(UnderlyingFactor_24.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_24(1240069289);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_24);
    UnderlyingInstrument_24.insert(UnderlyingFlowScheduleType_24.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_24("STRING_1187914283");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_24);
    UnderlyingInstrument_24.insert(UnderlyingInstrRegistry_24.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_24("LOCALMKTDATE_1102318509");
    noUnderlyings_0_0.set(UnderlyingIssueDate_24);
    UnderlyingInstrument_24.insert(UnderlyingIssueDate_24.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_24("STRING_975502473");
    noUnderlyings_0_0.set(UnderlyingIssuer_24);
    UnderlyingInstrument_24.insert(UnderlyingIssuer_24.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_24("STRING_1104246912");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_24);
    UnderlyingInstrument_24.insert(UnderlyingLocaleOfIssue_24.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_24("LOCALMKTDATE_1640479390");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_24);
    UnderlyingInstrument_24.insert(UnderlyingMaturityDate_24.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_24("MONTHYEAR_309117383");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_24);
    UnderlyingInstrument_24.insert(UnderlyingMaturityMonthYear_24.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_24("TZTIMEONLY_1192211356");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_24);
    UnderlyingInstrument_24.insert(UnderlyingMaturityTime_24.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_24;
    UnderlyingNotionalPercentageOutstanding_24.setString("39.570000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_24);
    UnderlyingInstrument_24.insert(UnderlyingNotionalPercentageOutstanding_24.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_24('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_24);
    UnderlyingInstrument_24.insert(UnderlyingOptAttribute_24.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_24;
    UnderlyingOriginalNotionalPercentageOutstanding_24.setString("26.200000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_24);
    UnderlyingInstrument_24.insert(UnderlyingOriginalNotionalPercentageOutstanding_24.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_24("STRING_74830206");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_24);
    UnderlyingInstrument_24.insert(UnderlyingPriceUnitOfMeasure_24.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_24;
    UnderlyingPriceUnitOfMeasureQty_24.setString("19372497");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_24);
    UnderlyingInstrument_24.insert(UnderlyingPriceUnitOfMeasureQty_24.getString());
    FIX::UnderlyingProduct UnderlyingProduct_24(32041980);
    noUnderlyings_0_0.set(UnderlyingProduct_24);
    UnderlyingInstrument_24.insert(UnderlyingProduct_24.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_24(1144493037);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_24);
    UnderlyingInstrument_24.insert(UnderlyingPutOrCall_24.getString());
    FIX::UnderlyingPx UnderlyingPx_24;
    UnderlyingPx_24.setString("6013964");
    noUnderlyings_0_0.set(UnderlyingPx_24);
    UnderlyingInstrument_24.insert(UnderlyingPx_24.getString());
    FIX::UnderlyingQty UnderlyingQty_24;
    UnderlyingQty_24.setString("3025804");
    noUnderlyings_0_0.set(UnderlyingQty_24);
    UnderlyingInstrument_24.insert(UnderlyingQty_24.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_24("LOCALMKTDATE_923206748");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_24);
    UnderlyingInstrument_24.insert(UnderlyingRedemptionDate_24.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_24("STRING_1386612320");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_24);
    UnderlyingInstrument_24.insert(UnderlyingRepoCollateralSecurityType_24.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_24;
    UnderlyingRepurchaseRate_24.setString("79.960000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_24);
    UnderlyingInstrument_24.insert(UnderlyingRepurchaseRate_24.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_24(534901496);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_24);
    UnderlyingInstrument_24.insert(UnderlyingRepurchaseTerm_24.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_24("STRING_2003071087");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_24);
    UnderlyingInstrument_24.insert(UnderlyingRestructuringType_24.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_24("STRING_1372872890");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_24);
    UnderlyingInstrument_24.insert(UnderlyingSecurityDesc_24.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_24("EXCHANGE_1897552290");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_24);
    UnderlyingInstrument_24.insert(UnderlyingSecurityExchange_24.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_24("STRING_927154678");
    noUnderlyings_0_0.set(UnderlyingSecurityID_24);
    UnderlyingInstrument_24.insert(UnderlyingSecurityID_24.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_24("STRING_766050060");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_24);
    UnderlyingInstrument_24.insert(UnderlyingSecurityIDSource_24.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_24("STRING_1712365183");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_24);
    UnderlyingInstrument_24.insert(UnderlyingSecuritySubType_24.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_24("STRING_762064269");
    noUnderlyings_0_0.set(UnderlyingSecurityType_24);
    UnderlyingInstrument_24.insert(UnderlyingSecurityType_24.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_24("STRING_1358863970");
    noUnderlyings_0_0.set(UnderlyingSeniority_24);
    UnderlyingInstrument_24.insert(UnderlyingSeniority_24.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_24("STRING_2128165909");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_24);
    UnderlyingInstrument_24.insert(UnderlyingSettlMethod_24.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_24(2);
    noUnderlyings_0_0.set(UnderlyingSettlementType_24);
    UnderlyingInstrument_24.insert(UnderlyingSettlementType_24.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_24;
    UnderlyingStartValue_24.setString("4514496");
    noUnderlyings_0_0.set(UnderlyingStartValue_24);
    UnderlyingInstrument_24.insert(UnderlyingStartValue_24.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_24("STRING_1168596544");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_24);
    UnderlyingInstrument_24.insert(UnderlyingStateOrProvinceOfIssue_24.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_24("GBP");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_24);
    UnderlyingInstrument_24.insert(UnderlyingStrikeCurrency_24.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_24;
    UnderlyingStrikePrice_24.setString("1253598");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_24);
    UnderlyingInstrument_24.insert(UnderlyingStrikePrice_24.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_24("STRING_592447027");
    noUnderlyings_0_0.set(UnderlyingSymbol_24);
    UnderlyingInstrument_24.insert(UnderlyingSymbol_24.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_24("STRING_1736069467");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_24);
    UnderlyingInstrument_24.insert(UnderlyingSymbolSfx_24.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_24("STRING_1317571165");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_24);
    UnderlyingInstrument_24.insert(UnderlyingTimeUnit_24.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_24("STRING_1168600984");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_24);
    UnderlyingInstrument_24.insert(UnderlyingUnitOfMeasure_24.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_24;
    UnderlyingUnitOfMeasureQty_24.setString("12185479");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_24);
    UnderlyingInstrument_24.insert(UnderlyingUnitOfMeasureQty_24.getString());
    all_values.push_back(UnderlyingInstrument_24);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::CollateralResponse::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_49;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_49("STRING_1243431190");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_49);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_49.insert(UnderlyingSecurityAltID_49.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_49("STRING_1008314093");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_49);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_49.insert(UnderlyingSecurityAltIDSource_49.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_49);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::CollateralResponse::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_50;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_50("STRING_1273702117");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_50);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_50.insert(UnderlyingSecurityAltID_50.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_50("STRING_240440579");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_50);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_50.insert(UnderlyingSecurityAltIDSource_50.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_50);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::CollateralResponse::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_44;
      FIX::UnderlyingStipType UnderlyingStipType_44("STRING_1576282527");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_44);
      UnderlyingStipulations_NoUnderlyingStips_44.insert(UnderlyingStipType_44.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_44("STRING_1163647327");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_44);
      UnderlyingStipulations_NoUnderlyingStips_44.insert(UnderlyingStipValue_44.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_44);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::CollateralResponse::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_45;
      FIX::UnderlyingStipType UnderlyingStipType_45("STRING_848839214");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_45);
      UnderlyingStipulations_NoUnderlyingStips_45.insert(UnderlyingStipType_45.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_45("STRING_1812940523");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_45);
      UnderlyingStipulations_NoUnderlyingStips_45.insert(UnderlyingStipValue_45.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_45);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::CollateralResponse::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_51;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_51("STRING_704426653");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_51);
      UndlyInstrumentParties_NoUndlyInstrumentParties_51.insert(UnderlyingInstrumentPartyID_51.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_51('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_51);
      UndlyInstrumentParties_NoUndlyInstrumentParties_51.insert(UnderlyingInstrumentPartyIDSource_51.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_51(1448617466);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_51);
      UndlyInstrumentParties_NoUndlyInstrumentParties_51.insert(UnderlyingInstrumentPartyRole_51.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_51);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_107;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_107("STRING_1804379826");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_107);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_107.insert(UnderlyingInstrumentPartySubID_107.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_107(1013499001);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_107);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_107.insert(UnderlyingInstrumentPartySubIDType_107.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_107);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::CollateralResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_108;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_108("STRING_246161953");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_108);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_108.insert(UnderlyingInstrumentPartySubID_108.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_108(1015760149);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_108);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_108.insert(UnderlyingInstrumentPartySubIDType_108.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_108);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::CollateralResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_109;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_109("STRING_994181263");
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubID_109);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_109.insert(UnderlyingInstrumentPartySubID_109.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_109(243294728);
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubIDType_109);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_109.insert(UnderlyingInstrumentPartySubIDType_109.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_109);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::CollateralResponse::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_52;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_52("STRING_1467209760");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_52);
      UndlyInstrumentParties_NoUndlyInstrumentParties_52.insert(UnderlyingInstrumentPartyID_52.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_52('1');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_52);
      UndlyInstrumentParties_NoUndlyInstrumentParties_52.insert(UnderlyingInstrumentPartyIDSource_52.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_52(1342746013);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_52);
      UndlyInstrumentParties_NoUndlyInstrumentParties_52.insert(UnderlyingInstrumentPartyRole_52.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_52);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_110;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_110("STRING_140653968");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_110);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_110.insert(UnderlyingInstrumentPartySubID_110.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_110(1935193040);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_110);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_110.insert(UnderlyingInstrumentPartySubIDType_110.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_110);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::CollateralResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_111;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_111("STRING_335264016");
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubID_111);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_111.insert(UnderlyingInstrumentPartySubID_111.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_111(1458225133);
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubIDType_111);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_111.insert(UnderlyingInstrumentPartySubIDType_111.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_111);

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
    EXPECT_TRUE(found);
    if ( ! found) {
      cout << "#### NOT FOUND ###" << endl;
      copy(xml_l.begin(), xml_l.end(), ostream_iterator<string>(cout, " "));      cout << endl;
    } // end if ! found
  } // end for elt_lists
}
