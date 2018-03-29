#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/CollateralRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( CollateralRequest, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::CollateralRequest msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> CollateralRequest_0;
  FIX::Account Account_8("STRING_1397930459");
  msg.set(Account_8);
  CollateralRequest_0.insert(Account_8.getString());
  FIX::AccountType AccountType_5(1);
  msg.set(AccountType_5);
  CollateralRequest_0.insert(AccountType_5.getString());
  FIX::AccruedInterestAmt AccruedInterestAmt_6;
  AccruedInterestAmt_6.setString("15088037");
  msg.set(AccruedInterestAmt_6);
  CollateralRequest_0.insert(AccruedInterestAmt_6.getString());
  FIX::CashOutstanding CashOutstanding_3;
  CashOutstanding_3.setString("17864073");
  msg.set(CashOutstanding_3);
  CollateralRequest_0.insert(CashOutstanding_3.getString());
  FIX::ClOrdID ClOrdID_10("STRING_1995347823");
  msg.set(ClOrdID_10);
  CollateralRequest_0.insert(ClOrdID_10.getString());
  FIX::ClearingBusinessDate ClearingBusinessDate_10("LOCALMKTDATE_1241102805");
  msg.set(ClearingBusinessDate_10);
  CollateralRequest_0.insert(ClearingBusinessDate_10.getString());
  FIX::CollAsgnReason CollAsgnReason_1(2);
  msg.set(CollAsgnReason_1);
  CollateralRequest_0.insert(CollAsgnReason_1.getString());
  FIX::CollReqID CollReqID_1("STRING_1672091616");
  msg.set(CollReqID_1);
  CollateralRequest_0.insert(CollReqID_1.getString());
  FIX::Currency Currency_10("USD");
  msg.set(Currency_10);
  CollateralRequest_0.insert(Currency_10.getString());
  FIX::EncodedText EncodedText_19("DATA_2146881458");
  msg.set(EncodedText_19);
  CollateralRequest_0.insert(EncodedText_19.getString());
  FIX::EncodedTextLen EncodedTextLen_19(1927023410);
  msg.set(EncodedTextLen_19);
  CollateralRequest_0.insert(EncodedTextLen_19.getString());
  FIX::EndAccruedInterestAmt EndAccruedInterestAmt_6;
  EndAccruedInterestAmt_6.setString("11770669");
  msg.set(EndAccruedInterestAmt_6);
  CollateralRequest_0.insert(EndAccruedInterestAmt_6.getString());
  FIX::EndCash EndCash_6;
  EndCash_6.setString("2827802");
  msg.set(EndCash_6);
  CollateralRequest_0.insert(EndCash_6.getString());
  FIX::ExpireTime ExpireTime_1(FIX::UTCTIMESTAMP(22, 9, 32, 27, 2, 2007));
  msg.set(ExpireTime_1);
  CollateralRequest_0.insert(ExpireTime_1.getString());
  FIX::MarginExcess MarginExcess_3;
  MarginExcess_3.setString("20280463");
  msg.set(MarginExcess_3);
  CollateralRequest_0.insert(MarginExcess_3.getString());
  FIX::OrderID OrderID_10("STRING_805918252");
  msg.set(OrderID_10);
  CollateralRequest_0.insert(OrderID_10.getString());
  FIX::Price Price_7;
  Price_7.setString("5251211");
  msg.set(Price_7);
  CollateralRequest_0.insert(Price_7.getString());
  FIX::PriceType PriceType_9(8);
  msg.set(PriceType_9);
  CollateralRequest_0.insert(PriceType_9.getString());
  FIX::QtyType QtyType_8(1);
  msg.set(QtyType_8);
  CollateralRequest_0.insert(QtyType_8.getString());
  FIX::Quantity Quantity_9;
  Quantity_9.setString("19257104");
  msg.set(Quantity_9);
  CollateralRequest_0.insert(Quantity_9.getString());
  FIX::SecondaryClOrdID SecondaryClOrdID_10("STRING_968797204");
  msg.set(SecondaryClOrdID_10);
  CollateralRequest_0.insert(SecondaryClOrdID_10.getString());
  FIX::SecondaryOrderID SecondaryOrderID_10("STRING_1395471445");
  msg.set(SecondaryOrderID_10);
  CollateralRequest_0.insert(SecondaryOrderID_10.getString());
  FIX::SettlDate SettlDate_13("LOCALMKTDATE_1115871344");
  msg.set(SettlDate_13);
  CollateralRequest_0.insert(SettlDate_13.getString());
  FIX::SettlSessID SettlSessID_6("STRING_EOD");
  msg.set(SettlSessID_6);
  CollateralRequest_0.insert(SettlSessID_6.getString());
  FIX::SettlSessSubID SettlSessSubID_5("STRING_645918257");
  msg.set(SettlSessSubID_5);
  CollateralRequest_0.insert(SettlSessSubID_5.getString());
  FIX::Side Side_12('F');
  msg.set(Side_12);
  CollateralRequest_0.insert(Side_12.getString());
  FIX::StartCash StartCash_6;
  StartCash_6.setString("9498404");
  msg.set(StartCash_6);
  CollateralRequest_0.insert(StartCash_6.getString());
  FIX::Text Text_19("STRING_284841911");
  msg.set(Text_19);
  CollateralRequest_0.insert(Text_19.getString());
  FIX::TotalNetValue TotalNetValue_3;
  TotalNetValue_3.setString("10902556");
  msg.set(TotalNetValue_3);
  CollateralRequest_0.insert(TotalNetValue_3.getString());
  FIX::TradingSessionID TradingSessionID_14("STRING_2");
  msg.set(TradingSessionID_14);
  CollateralRequest_0.insert(TradingSessionID_14.getString());
  FIX::TradingSessionSubID TradingSessionSubID_14("STRING_1");
  msg.set(TradingSessionSubID_14);
  CollateralRequest_0.insert(TradingSessionSubID_14.getString());
  FIX::TransactTime TransactTime_8(FIX::UTCTIMESTAMP(0, 47, 40, 6, 11, 2006));
  msg.set(TransactTime_8);
  CollateralRequest_0.insert(TransactTime_8.getString());
  all_values.push_back(CollateralRequest_0);

  all_compo_names.insert("CollateralRequest");

  // ExecCollGrp
  // Group ExecCollGrp.NoExecs
  {
    FIX50SP2::CollateralRequest::NoExecs noExecs_0_0;
    // ExecCollGrp.NoExecs
    multiset<string> ExecCollGrp_NoExecs_10;
    FIX::ExecID ExecID_16("STRING_1981560584");
    noExecs_0_0.set(ExecID_16);
    ExecCollGrp_NoExecs_10.insert(ExecID_16.getString());
    all_values.push_back(ExecCollGrp_NoExecs_10);
    all_compo_names.insert("ExecCollGrp.NoExecs");

    msg.addGroup(noExecs_0_0);
  }
  {
    FIX50SP2::CollateralRequest::NoExecs noExecs_0_1;
    // ExecCollGrp.NoExecs
    multiset<string> ExecCollGrp_NoExecs_11;
    FIX::ExecID ExecID_17("STRING_243955993");
    noExecs_0_1.set(ExecID_17);
    ExecCollGrp_NoExecs_11.insert(ExecID_17.getString());
    all_values.push_back(ExecCollGrp_NoExecs_11);
    all_compo_names.insert("ExecCollGrp.NoExecs");

    msg.addGroup(noExecs_0_1);
  }
  {
    FIX50SP2::CollateralRequest::NoExecs noExecs_0_2;
    // ExecCollGrp.NoExecs
    multiset<string> ExecCollGrp_NoExecs_12;
    FIX::ExecID ExecID_18("STRING_623108408");
    noExecs_0_2.set(ExecID_18);
    ExecCollGrp_NoExecs_12.insert(ExecID_18.getString());
    all_values.push_back(ExecCollGrp_NoExecs_12);
    all_compo_names.insert("ExecCollGrp.NoExecs");

    msg.addGroup(noExecs_0_2);
  }
  // FinancingDetails
  multiset<string> FinancingDetails_7;
  FIX::AgreementCurrency AgreementCurrency_7("GBP");
  msg.set(AgreementCurrency_7);
  FinancingDetails_7.insert(AgreementCurrency_7.getString());
  FIX::AgreementDate AgreementDate_7("LOCALMKTDATE_1400245582");
  msg.set(AgreementDate_7);
  FinancingDetails_7.insert(AgreementDate_7.getString());
  FIX::AgreementDesc AgreementDesc_7("STRING_1878774942");
  msg.set(AgreementDesc_7);
  FinancingDetails_7.insert(AgreementDesc_7.getString());
  FIX::AgreementID AgreementID_7("STRING_92987566");
  msg.set(AgreementID_7);
  FinancingDetails_7.insert(AgreementID_7.getString());
  FIX::DeliveryType DeliveryType_7(1);
  msg.set(DeliveryType_7);
  FinancingDetails_7.insert(DeliveryType_7.getString());
  FIX::EndDate EndDate_7("LOCALMKTDATE_1648694249");
  msg.set(EndDate_7);
  FinancingDetails_7.insert(EndDate_7.getString());
  FIX::MarginRatio MarginRatio_7;
  MarginRatio_7.setString("79.520000");
  msg.set(MarginRatio_7);
  FinancingDetails_7.insert(MarginRatio_7.getString());
  FIX::StartDate StartDate_7("LOCALMKTDATE_1703593621");
  msg.set(StartDate_7);
  FinancingDetails_7.insert(StartDate_7.getString());
  FIX::TerminationType TerminationType_7(3);
  msg.set(TerminationType_7);
  FinancingDetails_7.insert(TerminationType_7.getString());
  all_values.push_back(FinancingDetails_7);
  all_compo_names.insert("FinancingDetails");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::CollateralRequest::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_21;
    FIX::EncodedLegIssuer EncodedLegIssuer_21("DATA_671981317");
    noLegs_0_0.set(EncodedLegIssuer_21);
    InstrumentLeg_21.insert(EncodedLegIssuer_21.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_21(2058528145);
    noLegs_0_0.set(EncodedLegIssuerLen_21);
    InstrumentLeg_21.insert(EncodedLegIssuerLen_21.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_21("DATA_633034006");
    noLegs_0_0.set(EncodedLegSecurityDesc_21);
    InstrumentLeg_21.insert(EncodedLegSecurityDesc_21.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_21(1914372803);
    noLegs_0_0.set(EncodedLegSecurityDescLen_21);
    InstrumentLeg_21.insert(EncodedLegSecurityDescLen_21.getString());
    FIX::LegCFICode LegCFICode_21("STRING_860884973");
    noLegs_0_0.set(LegCFICode_21);
    InstrumentLeg_21.insert(LegCFICode_21.getString());
    FIX::LegContractMultiplier LegContractMultiplier_21;
    LegContractMultiplier_21.setString("9178759");
    noLegs_0_0.set(LegContractMultiplier_21);
    InstrumentLeg_21.insert(LegContractMultiplier_21.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_21(857144817);
    noLegs_0_0.set(LegContractMultiplierUnit_21);
    InstrumentLeg_21.insert(LegContractMultiplierUnit_21.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_21("MONTHYEAR_904344606");
    noLegs_0_0.set(LegContractSettlMonth_21);
    InstrumentLeg_21.insert(LegContractSettlMonth_21.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_21("COUNTRY_680799111");
    noLegs_0_0.set(LegCountryOfIssue_21);
    InstrumentLeg_21.insert(LegCountryOfIssue_21.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_21("LOCALMKTDATE_1472008447");
    noLegs_0_0.set(LegCouponPaymentDate_21);
    InstrumentLeg_21.insert(LegCouponPaymentDate_21.getString());
    FIX::LegCouponRate LegCouponRate_21;
    LegCouponRate_21.setString("38.220000");
    noLegs_0_0.set(LegCouponRate_21);
    InstrumentLeg_21.insert(LegCouponRate_21.getString());
    FIX::LegCreditRating LegCreditRating_21("STRING_815407958");
    noLegs_0_0.set(LegCreditRating_21);
    InstrumentLeg_21.insert(LegCreditRating_21.getString());
    FIX::LegCurrency LegCurrency_21("JPY");
    noLegs_0_0.set(LegCurrency_21);
    InstrumentLeg_21.insert(LegCurrency_21.getString());
    FIX::LegDatedDate LegDatedDate_21("LOCALMKTDATE_2127083713");
    noLegs_0_0.set(LegDatedDate_21);
    InstrumentLeg_21.insert(LegDatedDate_21.getString());
    FIX::LegExerciseStyle LegExerciseStyle_21(835827891);
    noLegs_0_0.set(LegExerciseStyle_21);
    InstrumentLeg_21.insert(LegExerciseStyle_21.getString());
    FIX::LegFactor LegFactor_21;
    LegFactor_21.setString("4401252");
    noLegs_0_0.set(LegFactor_21);
    InstrumentLeg_21.insert(LegFactor_21.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_21(1961160649);
    noLegs_0_0.set(LegFlowScheduleType_21);
    InstrumentLeg_21.insert(LegFlowScheduleType_21.getString());
    FIX::LegInstrRegistry LegInstrRegistry_21("STRING_1079783885");
    noLegs_0_0.set(LegInstrRegistry_21);
    InstrumentLeg_21.insert(LegInstrRegistry_21.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_21("LOCALMKTDATE_1063233637");
    noLegs_0_0.set(LegInterestAccrualDate_21);
    InstrumentLeg_21.insert(LegInterestAccrualDate_21.getString());
    FIX::LegIssueDate LegIssueDate_21("LOCALMKTDATE_1811889241");
    noLegs_0_0.set(LegIssueDate_21);
    InstrumentLeg_21.insert(LegIssueDate_21.getString());
    FIX::LegIssuer LegIssuer_21("STRING_366853199");
    noLegs_0_0.set(LegIssuer_21);
    InstrumentLeg_21.insert(LegIssuer_21.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_21("STRING_315995571");
    noLegs_0_0.set(LegLocaleOfIssue_21);
    InstrumentLeg_21.insert(LegLocaleOfIssue_21.getString());
    FIX::LegMaturityDate LegMaturityDate_21("LOCALMKTDATE_1543180535");
    noLegs_0_0.set(LegMaturityDate_21);
    InstrumentLeg_21.insert(LegMaturityDate_21.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_21("MONTHYEAR_459840766");
    noLegs_0_0.set(LegMaturityMonthYear_21);
    InstrumentLeg_21.insert(LegMaturityMonthYear_21.getString());
    FIX::LegMaturityTime LegMaturityTime_21("TZTIMEONLY_93878700");
    noLegs_0_0.set(LegMaturityTime_21);
    InstrumentLeg_21.insert(LegMaturityTime_21.getString());
    FIX::LegOptAttribute LegOptAttribute_21('1');
    noLegs_0_0.set(LegOptAttribute_21);
    InstrumentLeg_21.insert(LegOptAttribute_21.getString());
    FIX::LegOptionRatio LegOptionRatio_21;
    LegOptionRatio_21.setString("11989687");
    noLegs_0_0.set(LegOptionRatio_21);
    InstrumentLeg_21.insert(LegOptionRatio_21.getString());
    FIX::LegPool LegPool_21("STRING_1797472321");
    noLegs_0_0.set(LegPool_21);
    InstrumentLeg_21.insert(LegPool_21.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_21("STRING_1514398943");
    noLegs_0_0.set(LegPriceUnitOfMeasure_21);
    InstrumentLeg_21.insert(LegPriceUnitOfMeasure_21.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_21;
    LegPriceUnitOfMeasureQty_21.setString("11860844");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_21);
    InstrumentLeg_21.insert(LegPriceUnitOfMeasureQty_21.getString());
    FIX::LegProduct LegProduct_21(321969991);
    noLegs_0_0.set(LegProduct_21);
    InstrumentLeg_21.insert(LegProduct_21.getString());
    FIX::LegPutOrCall LegPutOrCall_21(1425443440);
    noLegs_0_0.set(LegPutOrCall_21);
    InstrumentLeg_21.insert(LegPutOrCall_21.getString());
    FIX::LegRatioQty LegRatioQty_21;
    LegRatioQty_21.setString("18191184");
    noLegs_0_0.set(LegRatioQty_21);
    InstrumentLeg_21.insert(LegRatioQty_21.getString());
    FIX::LegRedemptionDate LegRedemptionDate_21("LOCALMKTDATE_88859146");
    noLegs_0_0.set(LegRedemptionDate_21);
    InstrumentLeg_21.insert(LegRedemptionDate_21.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_21("STRING_138844765");
    noLegs_0_0.set(LegRepoCollateralSecurityType_21);
    InstrumentLeg_21.insert(LegRepoCollateralSecurityType_21.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_21;
    LegRepurchaseRate_21.setString("7.430000");
    noLegs_0_0.set(LegRepurchaseRate_21);
    InstrumentLeg_21.insert(LegRepurchaseRate_21.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_21(946003963);
    noLegs_0_0.set(LegRepurchaseTerm_21);
    InstrumentLeg_21.insert(LegRepurchaseTerm_21.getString());
    FIX::LegSecurityDesc LegSecurityDesc_21("STRING_1043189371");
    noLegs_0_0.set(LegSecurityDesc_21);
    InstrumentLeg_21.insert(LegSecurityDesc_21.getString());
    FIX::LegSecurityExchange LegSecurityExchange_21("EXCHANGE_1270309854");
    noLegs_0_0.set(LegSecurityExchange_21);
    InstrumentLeg_21.insert(LegSecurityExchange_21.getString());
    FIX::LegSecurityID LegSecurityID_21("STRING_270528762");
    noLegs_0_0.set(LegSecurityID_21);
    InstrumentLeg_21.insert(LegSecurityID_21.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_21("STRING_939099545");
    noLegs_0_0.set(LegSecurityIDSource_21);
    InstrumentLeg_21.insert(LegSecurityIDSource_21.getString());
    FIX::LegSecuritySubType LegSecuritySubType_21("STRING_2085717813");
    noLegs_0_0.set(LegSecuritySubType_21);
    InstrumentLeg_21.insert(LegSecuritySubType_21.getString());
    FIX::LegSecurityType LegSecurityType_21("STRING_209315001");
    noLegs_0_0.set(LegSecurityType_21);
    InstrumentLeg_21.insert(LegSecurityType_21.getString());
    FIX::LegSide LegSide_21('1');
    noLegs_0_0.set(LegSide_21);
    InstrumentLeg_21.insert(LegSide_21.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_21("STRING_2065317878");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_21);
    InstrumentLeg_21.insert(LegStateOrProvinceOfIssue_21.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_21("USD");
    noLegs_0_0.set(LegStrikeCurrency_21);
    InstrumentLeg_21.insert(LegStrikeCurrency_21.getString());
    FIX::LegStrikePrice LegStrikePrice_21;
    LegStrikePrice_21.setString("18789948");
    noLegs_0_0.set(LegStrikePrice_21);
    InstrumentLeg_21.insert(LegStrikePrice_21.getString());
    FIX::LegSymbol LegSymbol_21("STRING_2124926778");
    noLegs_0_0.set(LegSymbol_21);
    InstrumentLeg_21.insert(LegSymbol_21.getString());
    FIX::LegSymbolSfx LegSymbolSfx_21("STRING_1109473915");
    noLegs_0_0.set(LegSymbolSfx_21);
    InstrumentLeg_21.insert(LegSymbolSfx_21.getString());
    FIX::LegTimeUnit LegTimeUnit_21("STRING_1543400472");
    noLegs_0_0.set(LegTimeUnit_21);
    InstrumentLeg_21.insert(LegTimeUnit_21.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_21("STRING_344296329");
    noLegs_0_0.set(LegUnitOfMeasure_21);
    InstrumentLeg_21.insert(LegUnitOfMeasure_21.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_21;
    LegUnitOfMeasureQty_21.setString("14254694");
    noLegs_0_0.set(LegUnitOfMeasureQty_21);
    InstrumentLeg_21.insert(LegUnitOfMeasureQty_21.getString());
    all_values.push_back(InstrumentLeg_21);
    all_compo_names.insert("InstrumentLeg");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::CollateralRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_41;
      FIX::LegSecurityAltID LegSecurityAltID_41("STRING_804137095");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_41);
      LegSecAltIDGrp_NoLegSecurityAltID_41.insert(LegSecurityAltID_41.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_41("STRING_1519348186");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_41);
      LegSecAltIDGrp_NoLegSecurityAltID_41.insert(LegSecurityAltIDSource_41.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_41);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::CollateralRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_42;
      FIX::LegSecurityAltID LegSecurityAltID_42("STRING_1983488497");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_42);
      LegSecAltIDGrp_NoLegSecurityAltID_42.insert(LegSecurityAltID_42.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_42("STRING_2003105813");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_42);
      LegSecAltIDGrp_NoLegSecurityAltID_42.insert(LegSecurityAltIDSource_42.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_42);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::CollateralRequest::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_22;
    FIX::EncodedLegIssuer EncodedLegIssuer_22("DATA_1169336859");
    noLegs_0_1.set(EncodedLegIssuer_22);
    InstrumentLeg_22.insert(EncodedLegIssuer_22.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_22(1350403792);
    noLegs_0_1.set(EncodedLegIssuerLen_22);
    InstrumentLeg_22.insert(EncodedLegIssuerLen_22.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_22("DATA_1041706633");
    noLegs_0_1.set(EncodedLegSecurityDesc_22);
    InstrumentLeg_22.insert(EncodedLegSecurityDesc_22.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_22(1491306850);
    noLegs_0_1.set(EncodedLegSecurityDescLen_22);
    InstrumentLeg_22.insert(EncodedLegSecurityDescLen_22.getString());
    FIX::LegCFICode LegCFICode_22("STRING_628363584");
    noLegs_0_1.set(LegCFICode_22);
    InstrumentLeg_22.insert(LegCFICode_22.getString());
    FIX::LegContractMultiplier LegContractMultiplier_22;
    LegContractMultiplier_22.setString("7133414");
    noLegs_0_1.set(LegContractMultiplier_22);
    InstrumentLeg_22.insert(LegContractMultiplier_22.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_22(1580165997);
    noLegs_0_1.set(LegContractMultiplierUnit_22);
    InstrumentLeg_22.insert(LegContractMultiplierUnit_22.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_22("MONTHYEAR_767208349");
    noLegs_0_1.set(LegContractSettlMonth_22);
    InstrumentLeg_22.insert(LegContractSettlMonth_22.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_22("COUNTRY_1302852202");
    noLegs_0_1.set(LegCountryOfIssue_22);
    InstrumentLeg_22.insert(LegCountryOfIssue_22.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_22("LOCALMKTDATE_378686312");
    noLegs_0_1.set(LegCouponPaymentDate_22);
    InstrumentLeg_22.insert(LegCouponPaymentDate_22.getString());
    FIX::LegCouponRate LegCouponRate_22;
    LegCouponRate_22.setString("77.200000");
    noLegs_0_1.set(LegCouponRate_22);
    InstrumentLeg_22.insert(LegCouponRate_22.getString());
    FIX::LegCreditRating LegCreditRating_22("STRING_425678409");
    noLegs_0_1.set(LegCreditRating_22);
    InstrumentLeg_22.insert(LegCreditRating_22.getString());
    FIX::LegCurrency LegCurrency_22("CAN");
    noLegs_0_1.set(LegCurrency_22);
    InstrumentLeg_22.insert(LegCurrency_22.getString());
    FIX::LegDatedDate LegDatedDate_22("LOCALMKTDATE_363912574");
    noLegs_0_1.set(LegDatedDate_22);
    InstrumentLeg_22.insert(LegDatedDate_22.getString());
    FIX::LegExerciseStyle LegExerciseStyle_22(858530076);
    noLegs_0_1.set(LegExerciseStyle_22);
    InstrumentLeg_22.insert(LegExerciseStyle_22.getString());
    FIX::LegFactor LegFactor_22;
    LegFactor_22.setString("2081286");
    noLegs_0_1.set(LegFactor_22);
    InstrumentLeg_22.insert(LegFactor_22.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_22(281746804);
    noLegs_0_1.set(LegFlowScheduleType_22);
    InstrumentLeg_22.insert(LegFlowScheduleType_22.getString());
    FIX::LegInstrRegistry LegInstrRegistry_22("STRING_1903672969");
    noLegs_0_1.set(LegInstrRegistry_22);
    InstrumentLeg_22.insert(LegInstrRegistry_22.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_22("LOCALMKTDATE_254368944");
    noLegs_0_1.set(LegInterestAccrualDate_22);
    InstrumentLeg_22.insert(LegInterestAccrualDate_22.getString());
    FIX::LegIssueDate LegIssueDate_22("LOCALMKTDATE_13258035");
    noLegs_0_1.set(LegIssueDate_22);
    InstrumentLeg_22.insert(LegIssueDate_22.getString());
    FIX::LegIssuer LegIssuer_22("STRING_1881116099");
    noLegs_0_1.set(LegIssuer_22);
    InstrumentLeg_22.insert(LegIssuer_22.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_22("STRING_1363842859");
    noLegs_0_1.set(LegLocaleOfIssue_22);
    InstrumentLeg_22.insert(LegLocaleOfIssue_22.getString());
    FIX::LegMaturityDate LegMaturityDate_22("LOCALMKTDATE_1556658508");
    noLegs_0_1.set(LegMaturityDate_22);
    InstrumentLeg_22.insert(LegMaturityDate_22.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_22("MONTHYEAR_77928781");
    noLegs_0_1.set(LegMaturityMonthYear_22);
    InstrumentLeg_22.insert(LegMaturityMonthYear_22.getString());
    FIX::LegMaturityTime LegMaturityTime_22("TZTIMEONLY_641828697");
    noLegs_0_1.set(LegMaturityTime_22);
    InstrumentLeg_22.insert(LegMaturityTime_22.getString());
    FIX::LegOptAttribute LegOptAttribute_22('3');
    noLegs_0_1.set(LegOptAttribute_22);
    InstrumentLeg_22.insert(LegOptAttribute_22.getString());
    FIX::LegOptionRatio LegOptionRatio_22;
    LegOptionRatio_22.setString("8820658");
    noLegs_0_1.set(LegOptionRatio_22);
    InstrumentLeg_22.insert(LegOptionRatio_22.getString());
    FIX::LegPool LegPool_22("STRING_13693235");
    noLegs_0_1.set(LegPool_22);
    InstrumentLeg_22.insert(LegPool_22.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_22("STRING_184277069");
    noLegs_0_1.set(LegPriceUnitOfMeasure_22);
    InstrumentLeg_22.insert(LegPriceUnitOfMeasure_22.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_22;
    LegPriceUnitOfMeasureQty_22.setString("7376880");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_22);
    InstrumentLeg_22.insert(LegPriceUnitOfMeasureQty_22.getString());
    FIX::LegProduct LegProduct_22(1183030095);
    noLegs_0_1.set(LegProduct_22);
    InstrumentLeg_22.insert(LegProduct_22.getString());
    FIX::LegPutOrCall LegPutOrCall_22(1534680861);
    noLegs_0_1.set(LegPutOrCall_22);
    InstrumentLeg_22.insert(LegPutOrCall_22.getString());
    FIX::LegRatioQty LegRatioQty_22;
    LegRatioQty_22.setString("17793946");
    noLegs_0_1.set(LegRatioQty_22);
    InstrumentLeg_22.insert(LegRatioQty_22.getString());
    FIX::LegRedemptionDate LegRedemptionDate_22("LOCALMKTDATE_526853297");
    noLegs_0_1.set(LegRedemptionDate_22);
    InstrumentLeg_22.insert(LegRedemptionDate_22.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_22("STRING_15560797");
    noLegs_0_1.set(LegRepoCollateralSecurityType_22);
    InstrumentLeg_22.insert(LegRepoCollateralSecurityType_22.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_22;
    LegRepurchaseRate_22.setString("24.860000");
    noLegs_0_1.set(LegRepurchaseRate_22);
    InstrumentLeg_22.insert(LegRepurchaseRate_22.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_22(2107019294);
    noLegs_0_1.set(LegRepurchaseTerm_22);
    InstrumentLeg_22.insert(LegRepurchaseTerm_22.getString());
    FIX::LegSecurityDesc LegSecurityDesc_22("STRING_782769146");
    noLegs_0_1.set(LegSecurityDesc_22);
    InstrumentLeg_22.insert(LegSecurityDesc_22.getString());
    FIX::LegSecurityExchange LegSecurityExchange_22("EXCHANGE_1648104688");
    noLegs_0_1.set(LegSecurityExchange_22);
    InstrumentLeg_22.insert(LegSecurityExchange_22.getString());
    FIX::LegSecurityID LegSecurityID_22("STRING_338221959");
    noLegs_0_1.set(LegSecurityID_22);
    InstrumentLeg_22.insert(LegSecurityID_22.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_22("STRING_445683218");
    noLegs_0_1.set(LegSecurityIDSource_22);
    InstrumentLeg_22.insert(LegSecurityIDSource_22.getString());
    FIX::LegSecuritySubType LegSecuritySubType_22("STRING_2073783097");
    noLegs_0_1.set(LegSecuritySubType_22);
    InstrumentLeg_22.insert(LegSecuritySubType_22.getString());
    FIX::LegSecurityType LegSecurityType_22("STRING_987437034");
    noLegs_0_1.set(LegSecurityType_22);
    InstrumentLeg_22.insert(LegSecurityType_22.getString());
    FIX::LegSide LegSide_22('1');
    noLegs_0_1.set(LegSide_22);
    InstrumentLeg_22.insert(LegSide_22.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_22("STRING_290212023");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_22);
    InstrumentLeg_22.insert(LegStateOrProvinceOfIssue_22.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_22("EUR");
    noLegs_0_1.set(LegStrikeCurrency_22);
    InstrumentLeg_22.insert(LegStrikeCurrency_22.getString());
    FIX::LegStrikePrice LegStrikePrice_22;
    LegStrikePrice_22.setString("5719588");
    noLegs_0_1.set(LegStrikePrice_22);
    InstrumentLeg_22.insert(LegStrikePrice_22.getString());
    FIX::LegSymbol LegSymbol_22("STRING_1602156432");
    noLegs_0_1.set(LegSymbol_22);
    InstrumentLeg_22.insert(LegSymbol_22.getString());
    FIX::LegSymbolSfx LegSymbolSfx_22("STRING_1510194446");
    noLegs_0_1.set(LegSymbolSfx_22);
    InstrumentLeg_22.insert(LegSymbolSfx_22.getString());
    FIX::LegTimeUnit LegTimeUnit_22("STRING_585216863");
    noLegs_0_1.set(LegTimeUnit_22);
    InstrumentLeg_22.insert(LegTimeUnit_22.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_22("STRING_1335788883");
    noLegs_0_1.set(LegUnitOfMeasure_22);
    InstrumentLeg_22.insert(LegUnitOfMeasure_22.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_22;
    LegUnitOfMeasureQty_22.setString("7265536");
    noLegs_0_1.set(LegUnitOfMeasureQty_22);
    InstrumentLeg_22.insert(LegUnitOfMeasureQty_22.getString());
    all_values.push_back(InstrumentLeg_22);
    all_compo_names.insert("InstrumentLeg");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::CollateralRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_43;
      FIX::LegSecurityAltID LegSecurityAltID_43("STRING_1413717664");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_43);
      LegSecAltIDGrp_NoLegSecurityAltID_43.insert(LegSecurityAltID_43.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_43("STRING_1368382355");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_43);
      LegSecAltIDGrp_NoLegSecurityAltID_43.insert(LegSecurityAltIDSource_43.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_43);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    msg.addGroup(noLegs_0_1);
  }
  // Instrument
  multiset<string> Instrument_10;
  FIX::AttachmentPoint AttachmentPoint_10;
  AttachmentPoint_10.setString("39.430000");
  msg.set(AttachmentPoint_10);
  Instrument_10.insert(AttachmentPoint_10.getString());
  FIX::CFICode CFICode_10("STRING_148299893");
  msg.set(CFICode_10);
  Instrument_10.insert(CFICode_10.getString());
  FIX::CPProgram CPProgram_10(2);
  msg.set(CPProgram_10);
  Instrument_10.insert(CPProgram_10.getString());
  FIX::CPRegType CPRegType_10("STRING_526941012");
  msg.set(CPRegType_10);
  Instrument_10.insert(CPRegType_10.getString());
  FIX::CapPrice CapPrice_10;
  CapPrice_10.setString("8859879");
  msg.set(CapPrice_10);
  Instrument_10.insert(CapPrice_10.getString());
  FIX::ContractMultiplier ContractMultiplier_10;
  ContractMultiplier_10.setString("4176220");
  msg.set(ContractMultiplier_10);
  Instrument_10.insert(ContractMultiplier_10.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_10(0);
  msg.set(ContractMultiplierUnit_10);
  Instrument_10.insert(ContractMultiplierUnit_10.getString());
  FIX::ContractSettlMonth ContractSettlMonth_10("MONTHYEAR_517898962");
  msg.set(ContractSettlMonth_10);
  Instrument_10.insert(ContractSettlMonth_10.getString());
  FIX::CountryOfIssue CountryOfIssue_10("COUNTRY_944475335");
  msg.set(CountryOfIssue_10);
  Instrument_10.insert(CountryOfIssue_10.getString());
  FIX::CouponPaymentDate CouponPaymentDate_10("LOCALMKTDATE_2077182670");
  msg.set(CouponPaymentDate_10);
  Instrument_10.insert(CouponPaymentDate_10.getString());
  FIX::CouponRate CouponRate_10;
  CouponRate_10.setString("14.480000");
  msg.set(CouponRate_10);
  Instrument_10.insert(CouponRate_10.getString());
  FIX::CreditRating CreditRating_10("STRING_904010981");
  msg.set(CreditRating_10);
  Instrument_10.insert(CreditRating_10.getString());
  FIX::DatedDate DatedDate_10("LOCALMKTDATE_712468168");
  msg.set(DatedDate_10);
  Instrument_10.insert(DatedDate_10.getString());
  FIX::DetachmentPoint DetachmentPoint_10;
  DetachmentPoint_10.setString("24.880000");
  msg.set(DetachmentPoint_10);
  Instrument_10.insert(DetachmentPoint_10.getString());
  FIX::EncodedIssuer EncodedIssuer_10("DATA_1242232940");
  msg.set(EncodedIssuer_10);
  Instrument_10.insert(EncodedIssuer_10.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_10(1158151386);
  msg.set(EncodedIssuerLen_10);
  Instrument_10.insert(EncodedIssuerLen_10.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_10("DATA_290071938");
  msg.set(EncodedSecurityDesc_10);
  Instrument_10.insert(EncodedSecurityDesc_10.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_10(82186326);
  msg.set(EncodedSecurityDescLen_10);
  Instrument_10.insert(EncodedSecurityDescLen_10.getString());
  FIX::ExerciseStyle ExerciseStyle_10(2);
  msg.set(ExerciseStyle_10);
  Instrument_10.insert(ExerciseStyle_10.getString());
  FIX::Factor Factor_10;
  Factor_10.setString("5802839");
  msg.set(Factor_10);
  Instrument_10.insert(Factor_10.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_10(false);
  msg.set(FlexProductEligibilityIndicator_10);
  Instrument_10.insert(FlexProductEligibilityIndicator_10.getString());
  FIX::FlexibleIndicator FlexibleIndicator_10(true);
  msg.set(FlexibleIndicator_10);
  Instrument_10.insert(FlexibleIndicator_10.getString());
  FIX::FloorPrice FloorPrice_10;
  FloorPrice_10.setString("11522427");
  msg.set(FloorPrice_10);
  Instrument_10.insert(FloorPrice_10.getString());
  FIX::FlowScheduleType FlowScheduleType_10(1);
  msg.set(FlowScheduleType_10);
  Instrument_10.insert(FlowScheduleType_10.getString());
  FIX::InstrRegistry InstrRegistry_10("STRING_676900872");
  msg.set(InstrRegistry_10);
  Instrument_10.insert(InstrRegistry_10.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_10('1');
  msg.set(InstrmtAssignmentMethod_10);
  Instrument_10.insert(InstrmtAssignmentMethod_10.getString());
  FIX::InterestAccrualDate InterestAccrualDate_10("LOCALMKTDATE_571131456");
  msg.set(InterestAccrualDate_10);
  Instrument_10.insert(InterestAccrualDate_10.getString());
  FIX::IssueDate IssueDate_10("LOCALMKTDATE_1403454530");
  msg.set(IssueDate_10);
  Instrument_10.insert(IssueDate_10.getString());
  FIX::Issuer Issuer_10("STRING_1731851375");
  msg.set(Issuer_10);
  Instrument_10.insert(Issuer_10.getString());
  FIX::ListMethod ListMethod_10(1);
  msg.set(ListMethod_10);
  Instrument_10.insert(ListMethod_10.getString());
  FIX::LocaleOfIssue LocaleOfIssue_10("STRING_624353237");
  msg.set(LocaleOfIssue_10);
  Instrument_10.insert(LocaleOfIssue_10.getString());
  FIX::MaturityDate MaturityDate_10("LOCALMKTDATE_2074515318");
  msg.set(MaturityDate_10);
  Instrument_10.insert(MaturityDate_10.getString());
  FIX::MaturityMonthYear MaturityMonthYear_10("MONTHYEAR_2133149014");
  msg.set(MaturityMonthYear_10);
  Instrument_10.insert(MaturityMonthYear_10.getString());
  FIX::MaturityTime MaturityTime_10("TZTIMEONLY_2006428827");
  msg.set(MaturityTime_10);
  Instrument_10.insert(MaturityTime_10.getString());
  FIX::MinPriceIncrement MinPriceIncrement_10;
  MinPriceIncrement_10.setString("4539726");
  msg.set(MinPriceIncrement_10);
  Instrument_10.insert(MinPriceIncrement_10.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_10;
  MinPriceIncrementAmount_10.setString("8716533");
  msg.set(MinPriceIncrementAmount_10);
  Instrument_10.insert(MinPriceIncrementAmount_10.getString());
  FIX::NTPositionLimit NTPositionLimit_10(276567217);
  msg.set(NTPositionLimit_10);
  Instrument_10.insert(NTPositionLimit_10.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_10;
  NotionalPercentageOutstanding_10.setString("9.070000");
  msg.set(NotionalPercentageOutstanding_10);
  Instrument_10.insert(NotionalPercentageOutstanding_10.getString());
  FIX::OptAttribute OptAttribute_10('1');
  msg.set(OptAttribute_10);
  Instrument_10.insert(OptAttribute_10.getString());
  FIX::OptPayoutAmount OptPayoutAmount_10;
  OptPayoutAmount_10.setString("12210425");
  msg.set(OptPayoutAmount_10);
  Instrument_10.insert(OptPayoutAmount_10.getString());
  FIX::OptPayoutType OptPayoutType_10(2);
  msg.set(OptPayoutType_10);
  Instrument_10.insert(OptPayoutType_10.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_10;
  OriginalNotionalPercentageOutstanding_10.setString("0.630000");
  msg.set(OriginalNotionalPercentageOutstanding_10);
  Instrument_10.insert(OriginalNotionalPercentageOutstanding_10.getString());
  FIX::Pool Pool_10("STRING_2125053533");
  msg.set(Pool_10);
  Instrument_10.insert(Pool_10.getString());
  FIX::PositionLimit PositionLimit_10(1010278097);
  msg.set(PositionLimit_10);
  Instrument_10.insert(PositionLimit_10.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_10("STRING_PCTPAR");
  msg.set(PriceQuoteMethod_10);
  Instrument_10.insert(PriceQuoteMethod_10.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_10("STRING_1219802826");
  msg.set(PriceUnitOfMeasure_10);
  Instrument_10.insert(PriceUnitOfMeasure_10.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_10;
  PriceUnitOfMeasureQty_10.setString("209458");
  msg.set(PriceUnitOfMeasureQty_10);
  Instrument_10.insert(PriceUnitOfMeasureQty_10.getString());
  FIX::Product Product_12(2);
  msg.set(Product_12);
  Instrument_10.insert(Product_12.getString());
  FIX::ProductComplex ProductComplex_10("STRING_1301989152");
  msg.set(ProductComplex_10);
  Instrument_10.insert(ProductComplex_10.getString());
  FIX::PutOrCall PutOrCall_10(0);
  msg.set(PutOrCall_10);
  Instrument_10.insert(PutOrCall_10.getString());
  FIX::RedemptionDate RedemptionDate_10("LOCALMKTDATE_1339348451");
  msg.set(RedemptionDate_10);
  Instrument_10.insert(RedemptionDate_10.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_10("STRING_1082658941");
  msg.set(RepoCollateralSecurityType_10);
  Instrument_10.insert(RepoCollateralSecurityType_10.getString());
  FIX::RepurchaseRate RepurchaseRate_10;
  RepurchaseRate_10.setString("4.820000");
  msg.set(RepurchaseRate_10);
  Instrument_10.insert(RepurchaseRate_10.getString());
  FIX::RepurchaseTerm RepurchaseTerm_10(344107592);
  msg.set(RepurchaseTerm_10);
  Instrument_10.insert(RepurchaseTerm_10.getString());
  FIX::RestructuringType RestructuringType_10("STRING_MM");
  msg.set(RestructuringType_10);
  Instrument_10.insert(RestructuringType_10.getString());
  FIX::SecurityDesc SecurityDesc_10("STRING_2070401355");
  msg.set(SecurityDesc_10);
  Instrument_10.insert(SecurityDesc_10.getString());
  FIX::SecurityExchange SecurityExchange_10("EXCHANGE_2081567244");
  msg.set(SecurityExchange_10);
  Instrument_10.insert(SecurityExchange_10.getString());
  FIX::SecurityGroup SecurityGroup_10("STRING_889132971");
  msg.set(SecurityGroup_10);
  Instrument_10.insert(SecurityGroup_10.getString());
  FIX::SecurityID SecurityID_10("STRING_1326372237");
  msg.set(SecurityID_10);
  Instrument_10.insert(SecurityID_10.getString());
  FIX::SecurityIDSource SecurityIDSource_10("STRING_K");
  msg.set(SecurityIDSource_10);
  Instrument_10.insert(SecurityIDSource_10.getString());
  FIX::SecurityStatus SecurityStatus_10("STRING_1");
  msg.set(SecurityStatus_10);
  Instrument_10.insert(SecurityStatus_10.getString());
  FIX::SecuritySubType SecuritySubType_10("STRING_1950725474");
  msg.set(SecuritySubType_10);
  Instrument_10.insert(SecuritySubType_10.getString());
  FIX::SecurityType SecurityType_12("STRING_EUSOV");
  msg.set(SecurityType_12);
  Instrument_10.insert(SecurityType_12.getString());
  FIX::Seniority Seniority_10("STRING_SB");
  msg.set(Seniority_10);
  Instrument_10.insert(Seniority_10.getString());
  FIX::SettlMethod SettlMethod_10('P');
  msg.set(SettlMethod_10);
  Instrument_10.insert(SettlMethod_10.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_10("STRING_2046939323");
  msg.set(SettleOnOpenFlag_10);
  Instrument_10.insert(SettleOnOpenFlag_10.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_10("STRING_1583817111");
  msg.set(StateOrProvinceOfIssue_10);
  Instrument_10.insert(StateOrProvinceOfIssue_10.getString());
  FIX::StrikeCurrency StrikeCurrency_10("GBP");
  msg.set(StrikeCurrency_10);
  Instrument_10.insert(StrikeCurrency_10.getString());
  FIX::StrikeMultiplier StrikeMultiplier_10;
  StrikeMultiplier_10.setString("8258857");
  msg.set(StrikeMultiplier_10);
  Instrument_10.insert(StrikeMultiplier_10.getString());
  FIX::StrikePrice StrikePrice_10;
  StrikePrice_10.setString("11597967");
  msg.set(StrikePrice_10);
  Instrument_10.insert(StrikePrice_10.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_10(2);
  msg.set(StrikePriceBoundaryMethod_10);
  Instrument_10.insert(StrikePriceBoundaryMethod_10.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_10;
  StrikePriceBoundaryPrecision_10.setString("57.890000");
  msg.set(StrikePriceBoundaryPrecision_10);
  Instrument_10.insert(StrikePriceBoundaryPrecision_10.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_10(1);
  msg.set(StrikePriceDeterminationMethod_10);
  Instrument_10.insert(StrikePriceDeterminationMethod_10.getString());
  FIX::StrikeValue StrikeValue_10;
  StrikeValue_10.setString("15756546");
  msg.set(StrikeValue_10);
  Instrument_10.insert(StrikeValue_10.getString());
  FIX::Symbol Symbol_10("STRING_1400098340");
  msg.set(Symbol_10);
  Instrument_10.insert(Symbol_10.getString());
  FIX::SymbolSfx SymbolSfx_10("STRING_CD");
  msg.set(SymbolSfx_10);
  Instrument_10.insert(SymbolSfx_10.getString());
  FIX::TimeUnit TimeUnit_10("STRING_Wk");
  msg.set(TimeUnit_10);
  Instrument_10.insert(TimeUnit_10.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_10(3);
  msg.set(UnderlyingPriceDeterminationMethod_10);
  Instrument_10.insert(UnderlyingPriceDeterminationMethod_10.getString());
  FIX::UnitOfMeasure UnitOfMeasure_10("STRING_Gal");
  msg.set(UnitOfMeasure_10);
  Instrument_10.insert(UnitOfMeasure_10.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_10;
  UnitOfMeasureQty_10.setString("16759108");
  msg.set(UnitOfMeasureQty_10);
  Instrument_10.insert(UnitOfMeasureQty_10.getString());
  FIX::ValuationMethod ValuationMethod_10("STRING_CDS");
  msg.set(ValuationMethod_10);
  Instrument_10.insert(ValuationMethod_10.getString());
  all_values.push_back(Instrument_10);
  all_compo_names.insert("Instrument");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::CollateralRequest::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_20;
    FIX::ComplexEventCondition ComplexEventCondition_20(2);
    noComplexEvents_0_0.set(ComplexEventCondition_20);
    ComplexEvents_NoComplexEvents_20.insert(ComplexEventCondition_20.getString());
    FIX::ComplexEventPrice ComplexEventPrice_20;
    ComplexEventPrice_20.setString("16951352");
    noComplexEvents_0_0.set(ComplexEventPrice_20);
    ComplexEvents_NoComplexEvents_20.insert(ComplexEventPrice_20.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_20(4);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_20);
    ComplexEvents_NoComplexEvents_20.insert(ComplexEventPriceBoundaryMethod_20.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_20;
    ComplexEventPriceBoundaryPrecision_20.setString("53.920000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_20);
    ComplexEvents_NoComplexEvents_20.insert(ComplexEventPriceBoundaryPrecision_20.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_20(2);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_20);
    ComplexEvents_NoComplexEvents_20.insert(ComplexEventPriceTimeType_20.getString());
    FIX::ComplexEventType ComplexEventType_20(5);
    noComplexEvents_0_0.set(ComplexEventType_20);
    ComplexEvents_NoComplexEvents_20.insert(ComplexEventType_20.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_20;
    ComplexOptPayoutAmount_20.setString("237339");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_20);
    ComplexEvents_NoComplexEvents_20.insert(ComplexOptPayoutAmount_20.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_20);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_49;
      FIX::ComplexEventEndDate ComplexEventEndDate_49(FIX::UTCTIMESTAMP(23, 37, 55, 9, 5, 2014));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_49);
      ComplexEventDates_NoComplexEventDates_49.insert(ComplexEventEndDate_49.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_49(FIX::UTCTIMESTAMP(18, 44, 10, 13, 10, 2016));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_49);
      ComplexEventDates_NoComplexEventDates_49.insert(ComplexEventStartDate_49.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_49);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_101;
        FIX::ComplexEventEndTime ComplexEventEndTime_101(FIX::UTCTIMEONLY(20, 0, 48));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_101);
        ComplexEventTimes_NoComplexEventTimes_101.insert(ComplexEventEndTime_101.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_101(FIX::UTCTIMEONLY(7, 53, 54));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_101);
        ComplexEventTimes_NoComplexEventTimes_101.insert(ComplexEventStartTime_101.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_101);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_50;
      FIX::ComplexEventEndDate ComplexEventEndDate_50(FIX::UTCTIMESTAMP(6, 45, 21, 7, 11, 2012));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_50);
      ComplexEventDates_NoComplexEventDates_50.insert(ComplexEventEndDate_50.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_50(FIX::UTCTIMESTAMP(20, 10, 44, 11, 4, 2000));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_50);
      ComplexEventDates_NoComplexEventDates_50.insert(ComplexEventStartDate_50.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_50);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_102;
        FIX::ComplexEventEndTime ComplexEventEndTime_102(FIX::UTCTIMEONLY(10, 42, 8));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_102);
        ComplexEventTimes_NoComplexEventTimes_102.insert(ComplexEventEndTime_102.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_102(FIX::UTCTIMEONLY(8, 10, 44));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_102);
        ComplexEventTimes_NoComplexEventTimes_102.insert(ComplexEventStartTime_102.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_102);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_51;
      FIX::ComplexEventEndDate ComplexEventEndDate_51(FIX::UTCTIMESTAMP(22, 44, 34, 13, 8, 2015));
      noComplexEventDates_0_1_2.set(ComplexEventEndDate_51);
      ComplexEventDates_NoComplexEventDates_51.insert(ComplexEventEndDate_51.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_51(FIX::UTCTIMESTAMP(19, 57, 52, 0, 9, 2007));
      noComplexEventDates_0_1_2.set(ComplexEventStartDate_51);
      ComplexEventDates_NoComplexEventDates_51.insert(ComplexEventStartDate_51.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_51);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_103;
        FIX::ComplexEventEndTime ComplexEventEndTime_103(FIX::UTCTIMEONLY(15, 53, 3));
        noComplexEventTimes_0_2_2_0.set(ComplexEventEndTime_103);
        ComplexEventTimes_NoComplexEventTimes_103.insert(ComplexEventEndTime_103.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_103(FIX::UTCTIMEONLY(20, 31, 16));
        noComplexEventTimes_0_2_2_0.set(ComplexEventStartTime_103);
        ComplexEventTimes_NoComplexEventTimes_103.insert(ComplexEventStartTime_103.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_103);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::CollateralRequest::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_21;
    FIX::ComplexEventCondition ComplexEventCondition_21(1);
    noComplexEvents_0_1.set(ComplexEventCondition_21);
    ComplexEvents_NoComplexEvents_21.insert(ComplexEventCondition_21.getString());
    FIX::ComplexEventPrice ComplexEventPrice_21;
    ComplexEventPrice_21.setString("17385931");
    noComplexEvents_0_1.set(ComplexEventPrice_21);
    ComplexEvents_NoComplexEvents_21.insert(ComplexEventPrice_21.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_21(2);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_21);
    ComplexEvents_NoComplexEvents_21.insert(ComplexEventPriceBoundaryMethod_21.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_21;
    ComplexEventPriceBoundaryPrecision_21.setString("71.550000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_21);
    ComplexEvents_NoComplexEvents_21.insert(ComplexEventPriceBoundaryPrecision_21.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_21(2);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_21);
    ComplexEvents_NoComplexEvents_21.insert(ComplexEventPriceTimeType_21.getString());
    FIX::ComplexEventType ComplexEventType_21(6);
    noComplexEvents_0_1.set(ComplexEventType_21);
    ComplexEvents_NoComplexEvents_21.insert(ComplexEventType_21.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_21;
    ComplexOptPayoutAmount_21.setString("13154673");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_21);
    ComplexEvents_NoComplexEvents_21.insert(ComplexOptPayoutAmount_21.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_21);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_52;
      FIX::ComplexEventEndDate ComplexEventEndDate_52(FIX::UTCTIMESTAMP(4, 12, 19, 1, 8, 2008));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_52);
      ComplexEventDates_NoComplexEventDates_52.insert(ComplexEventEndDate_52.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_52(FIX::UTCTIMESTAMP(2, 27, 21, 15, 4, 2002));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_52);
      ComplexEventDates_NoComplexEventDates_52.insert(ComplexEventStartDate_52.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_52);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_104;
        FIX::ComplexEventEndTime ComplexEventEndTime_104(FIX::UTCTIMEONLY(11, 51, 1));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_104);
        ComplexEventTimes_NoComplexEventTimes_104.insert(ComplexEventEndTime_104.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_104(FIX::UTCTIMEONLY(15, 24, 42));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_104);
        ComplexEventTimes_NoComplexEventTimes_104.insert(ComplexEventStartTime_104.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_104);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::CollateralRequest::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_22;
    FIX::ComplexEventCondition ComplexEventCondition_22(2);
    noComplexEvents_0_2.set(ComplexEventCondition_22);
    ComplexEvents_NoComplexEvents_22.insert(ComplexEventCondition_22.getString());
    FIX::ComplexEventPrice ComplexEventPrice_22;
    ComplexEventPrice_22.setString("5475820");
    noComplexEvents_0_2.set(ComplexEventPrice_22);
    ComplexEvents_NoComplexEvents_22.insert(ComplexEventPrice_22.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_22(4);
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryMethod_22);
    ComplexEvents_NoComplexEvents_22.insert(ComplexEventPriceBoundaryMethod_22.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_22;
    ComplexEventPriceBoundaryPrecision_22.setString("10.800000");
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryPrecision_22);
    ComplexEvents_NoComplexEvents_22.insert(ComplexEventPriceBoundaryPrecision_22.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_22(2);
    noComplexEvents_0_2.set(ComplexEventPriceTimeType_22);
    ComplexEvents_NoComplexEvents_22.insert(ComplexEventPriceTimeType_22.getString());
    FIX::ComplexEventType ComplexEventType_22(7);
    noComplexEvents_0_2.set(ComplexEventType_22);
    ComplexEvents_NoComplexEvents_22.insert(ComplexEventType_22.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_22;
    ComplexOptPayoutAmount_22.setString("4821247");
    noComplexEvents_0_2.set(ComplexOptPayoutAmount_22);
    ComplexEvents_NoComplexEvents_22.insert(ComplexOptPayoutAmount_22.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_22);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_53;
      FIX::ComplexEventEndDate ComplexEventEndDate_53(FIX::UTCTIMESTAMP(10, 41, 20, 11, 5, 2016));
      noComplexEventDates_2_1_0.set(ComplexEventEndDate_53);
      ComplexEventDates_NoComplexEventDates_53.insert(ComplexEventEndDate_53.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_53(FIX::UTCTIMESTAMP(6, 25, 44, 9, 9, 2002));
      noComplexEventDates_2_1_0.set(ComplexEventStartDate_53);
      ComplexEventDates_NoComplexEventDates_53.insert(ComplexEventStartDate_53.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_53);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_105;
        FIX::ComplexEventEndTime ComplexEventEndTime_105(FIX::UTCTIMEONLY(11, 10, 47));
        noComplexEventTimes_2_0_2_0.set(ComplexEventEndTime_105);
        ComplexEventTimes_NoComplexEventTimes_105.insert(ComplexEventEndTime_105.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_105(FIX::UTCTIMEONLY(17, 11, 23));
        noComplexEventTimes_2_0_2_0.set(ComplexEventStartTime_105);
        ComplexEventTimes_NoComplexEventTimes_105.insert(ComplexEventStartTime_105.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_105);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      {
        FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_106;
        FIX::ComplexEventEndTime ComplexEventEndTime_106(FIX::UTCTIMEONLY(8, 48, 27));
        noComplexEventTimes_2_0_2_1.set(ComplexEventEndTime_106);
        ComplexEventTimes_NoComplexEventTimes_106.insert(ComplexEventEndTime_106.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_106(FIX::UTCTIMEONLY(0, 37, 34));
        noComplexEventTimes_2_0_2_1.set(ComplexEventStartTime_106);
        ComplexEventTimes_NoComplexEventTimes_106.insert(ComplexEventStartTime_106.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_106);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_1);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_0);
    }
    {
      FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_54;
      FIX::ComplexEventEndDate ComplexEventEndDate_54(FIX::UTCTIMESTAMP(15, 7, 41, 18, 12, 2001));
      noComplexEventDates_2_1_1.set(ComplexEventEndDate_54);
      ComplexEventDates_NoComplexEventDates_54.insert(ComplexEventEndDate_54.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_54(FIX::UTCTIMESTAMP(9, 48, 58, 7, 9, 2001));
      noComplexEventDates_2_1_1.set(ComplexEventStartDate_54);
      ComplexEventDates_NoComplexEventDates_54.insert(ComplexEventStartDate_54.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_54);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_107;
        FIX::ComplexEventEndTime ComplexEventEndTime_107(FIX::UTCTIMEONLY(10, 33, 25));
        noComplexEventTimes_2_1_2_0.set(ComplexEventEndTime_107);
        ComplexEventTimes_NoComplexEventTimes_107.insert(ComplexEventEndTime_107.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_107(FIX::UTCTIMEONLY(14, 28, 34));
        noComplexEventTimes_2_1_2_0.set(ComplexEventStartTime_107);
        ComplexEventTimes_NoComplexEventTimes_107.insert(ComplexEventStartTime_107.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_107);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_0);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_1);
    }
    {
      FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_55;
      FIX::ComplexEventEndDate ComplexEventEndDate_55(FIX::UTCTIMESTAMP(0, 22, 33, 17, 11, 2004));
      noComplexEventDates_2_1_2.set(ComplexEventEndDate_55);
      ComplexEventDates_NoComplexEventDates_55.insert(ComplexEventEndDate_55.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_55(FIX::UTCTIMESTAMP(23, 14, 26, 8, 1, 2001));
      noComplexEventDates_2_1_2.set(ComplexEventStartDate_55);
      ComplexEventDates_NoComplexEventDates_55.insert(ComplexEventStartDate_55.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_55);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_108;
        FIX::ComplexEventEndTime ComplexEventEndTime_108(FIX::UTCTIMEONLY(10, 31, 17));
        noComplexEventTimes_2_2_2_0.set(ComplexEventEndTime_108);
        ComplexEventTimes_NoComplexEventTimes_108.insert(ComplexEventEndTime_108.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_108(FIX::UTCTIMEONLY(3, 16, 56));
        noComplexEventTimes_2_2_2_0.set(ComplexEventStartTime_108);
        ComplexEventTimes_NoComplexEventTimes_108.insert(ComplexEventStartTime_108.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_108);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_2_1_2.addGroup(noComplexEventTimes_2_2_2_0);
      }
      {
        FIX50SP2::CollateralRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_109;
        FIX::ComplexEventEndTime ComplexEventEndTime_109(FIX::UTCTIMEONLY(2, 21, 2));
        noComplexEventTimes_2_2_2_1.set(ComplexEventEndTime_109);
        ComplexEventTimes_NoComplexEventTimes_109.insert(ComplexEventEndTime_109.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_109(FIX::UTCTIMEONLY(3, 30, 24));
        noComplexEventTimes_2_2_2_1.set(ComplexEventStartTime_109);
        ComplexEventTimes_NoComplexEventTimes_109.insert(ComplexEventStartTime_109.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_109);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_2_1_2.addGroup(noComplexEventTimes_2_2_2_1);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_2);
    }
    msg.addGroup(noComplexEvents_0_2);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::CollateralRequest::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_19;
    FIX::EventDate EventDate_19("LOCALMKTDATE_1884346158");
    noEvents_0_0.set(EventDate_19);
    EvntGrp_NoEvents_19.insert(EventDate_19.getString());
    FIX::EventPx EventPx_19;
    EventPx_19.setString("7655027");
    noEvents_0_0.set(EventPx_19);
    EvntGrp_NoEvents_19.insert(EventPx_19.getString());
    FIX::EventText EventText_19("STRING_285032886");
    noEvents_0_0.set(EventText_19);
    EvntGrp_NoEvents_19.insert(EventText_19.getString());
    FIX::EventTime EventTime_19(FIX::UTCTIMESTAMP(17, 16, 22, 21, 11, 2012));
    noEvents_0_0.set(EventTime_19);
    EvntGrp_NoEvents_19.insert(EventTime_19.getString());
    FIX::EventType EventType_19(6);
    noEvents_0_0.set(EventType_19);
    EvntGrp_NoEvents_19.insert(EventType_19.getString());
    all_values.push_back(EvntGrp_NoEvents_19);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::CollateralRequest::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_20;
    FIX::EventDate EventDate_20("LOCALMKTDATE_2076943475");
    noEvents_0_1.set(EventDate_20);
    EvntGrp_NoEvents_20.insert(EventDate_20.getString());
    FIX::EventPx EventPx_20;
    EventPx_20.setString("10891096");
    noEvents_0_1.set(EventPx_20);
    EvntGrp_NoEvents_20.insert(EventPx_20.getString());
    FIX::EventText EventText_20("STRING_1101188269");
    noEvents_0_1.set(EventText_20);
    EvntGrp_NoEvents_20.insert(EventText_20.getString());
    FIX::EventTime EventTime_20(FIX::UTCTIMESTAMP(4, 20, 2, 13, 5, 2006));
    noEvents_0_1.set(EventTime_20);
    EvntGrp_NoEvents_20.insert(EventTime_20.getString());
    FIX::EventType EventType_20(2);
    noEvents_0_1.set(EventType_20);
    EvntGrp_NoEvents_20.insert(EventType_20.getString());
    all_values.push_back(EvntGrp_NoEvents_20);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::CollateralRequest::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_21;
    FIX::EventDate EventDate_21("LOCALMKTDATE_647668445");
    noEvents_0_2.set(EventDate_21);
    EvntGrp_NoEvents_21.insert(EventDate_21.getString());
    FIX::EventPx EventPx_21;
    EventPx_21.setString("15331260");
    noEvents_0_2.set(EventPx_21);
    EvntGrp_NoEvents_21.insert(EventPx_21.getString());
    FIX::EventText EventText_21("STRING_1989911102");
    noEvents_0_2.set(EventText_21);
    EvntGrp_NoEvents_21.insert(EventText_21.getString());
    FIX::EventTime EventTime_21(FIX::UTCTIMESTAMP(15, 22, 38, 27, 8, 2007));
    noEvents_0_2.set(EventTime_21);
    EvntGrp_NoEvents_21.insert(EventTime_21.getString());
    FIX::EventType EventType_21(15);
    noEvents_0_2.set(EventType_21);
    EvntGrp_NoEvents_21.insert(EventType_21.getString());
    all_values.push_back(EvntGrp_NoEvents_21);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::CollateralRequest::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_18;
    FIX::InstrumentPartyID InstrumentPartyID_18("STRING_1302745132");
    noInstrumentParties_0_0.set(InstrumentPartyID_18);
    InstrumentParties_NoInstrumentParties_18.insert(InstrumentPartyID_18.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_18('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_18);
    InstrumentParties_NoInstrumentParties_18.insert(InstrumentPartyIDSource_18.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_18(289182009);
    noInstrumentParties_0_0.set(InstrumentPartyRole_18);
    InstrumentParties_NoInstrumentParties_18.insert(InstrumentPartyRole_18.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_18);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CollateralRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_36;
      FIX::InstrumentPartySubID InstrumentPartySubID_36("STRING_1263747145");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_36);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_36.insert(InstrumentPartySubID_36.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_36(309072212);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_36);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_36.insert(InstrumentPartySubIDType_36.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_36);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::CollateralRequest::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_19;
    FIX::InstrumentPartyID InstrumentPartyID_19("STRING_1513493943");
    noInstrumentParties_0_1.set(InstrumentPartyID_19);
    InstrumentParties_NoInstrumentParties_19.insert(InstrumentPartyID_19.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_19('1');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_19);
    InstrumentParties_NoInstrumentParties_19.insert(InstrumentPartyIDSource_19.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_19(238532039);
    noInstrumentParties_0_1.set(InstrumentPartyRole_19);
    InstrumentParties_NoInstrumentParties_19.insert(InstrumentPartyRole_19.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_19);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CollateralRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_37;
      FIX::InstrumentPartySubID InstrumentPartySubID_37("STRING_1225907171");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_37);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_37.insert(InstrumentPartySubID_37.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_37(1723249612);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_37);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_37.insert(InstrumentPartySubIDType_37.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_37);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::CollateralRequest::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_18;
    FIX::SecurityAltID SecurityAltID_18("STRING_1157172144");
    noSecurityAltID_0_0.set(SecurityAltID_18);
    SecAltIDGrp_NoSecurityAltID_18.insert(SecurityAltID_18.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_18("STRING_1961678035");
    noSecurityAltID_0_0.set(SecurityAltIDSource_18);
    SecAltIDGrp_NoSecurityAltID_18.insert(SecurityAltIDSource_18.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_18);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::CollateralRequest::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_19;
    FIX::SecurityAltID SecurityAltID_19("STRING_1857901110");
    noSecurityAltID_0_1.set(SecurityAltID_19);
    SecAltIDGrp_NoSecurityAltID_19.insert(SecurityAltID_19.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_19("STRING_825756944");
    noSecurityAltID_0_1.set(SecurityAltIDSource_19);
    SecAltIDGrp_NoSecurityAltID_19.insert(SecurityAltIDSource_19.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_19);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_20;
  FIX::SecurityXML SecurityXML_21("XMLDATA_699449945");
  msg.set(SecurityXML_21);
  FIX::SecurityXMLLen SecurityXMLLen_10(197722144);
  msg.set(SecurityXMLLen_10);
  FIX::SecurityXMLSchema SecurityXMLSchema_10("STRING_1473425389");
  msg.set(SecurityXMLSchema_10);
  SecurityXML_20.insert(SecurityXMLSchema_10.getString());
  all_values.push_back(SecurityXML_20);
  all_compo_names.insert("SecurityXML");

  // MiscFeesGrp
  // Group MiscFeesGrp.NoMiscFees
  {
    FIX50SP2::CollateralRequest::NoMiscFees noMiscFees_0_0;
    // MiscFeesGrp.NoMiscFees
    multiset<string> MiscFeesGrp_NoMiscFees_13;
    FIX::MiscFeeAmt MiscFeeAmt_13;
    MiscFeeAmt_13.setString("401495");
    noMiscFees_0_0.set(MiscFeeAmt_13);
    MiscFeesGrp_NoMiscFees_13.insert(MiscFeeAmt_13.getString());
    FIX::MiscFeeBasis MiscFeeBasis_13(1);
    noMiscFees_0_0.set(MiscFeeBasis_13);
    MiscFeesGrp_NoMiscFees_13.insert(MiscFeeBasis_13.getString());
    FIX::MiscFeeCurr MiscFeeCurr_13("GBP");
    noMiscFees_0_0.set(MiscFeeCurr_13);
    MiscFeesGrp_NoMiscFees_13.insert(MiscFeeCurr_13.getString());
    FIX::MiscFeeType MiscFeeType_13("STRING_13");
    noMiscFees_0_0.set(MiscFeeType_13);
    MiscFeesGrp_NoMiscFees_13.insert(MiscFeeType_13.getString());
    all_values.push_back(MiscFeesGrp_NoMiscFees_13);
    all_compo_names.insert("MiscFeesGrp.NoMiscFees");

    msg.addGroup(noMiscFees_0_0);
  }
  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::CollateralRequest::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_24;
    FIX::PartyID PartyID_24("STRING_153672307");
    noPartyIDs_0_0.set(PartyID_24);
    Parties_NoPartyIDs_24.insert(PartyID_24.getString());
    FIX::PartyIDSource PartyIDSource_24('H');
    noPartyIDs_0_0.set(PartyIDSource_24);
    Parties_NoPartyIDs_24.insert(PartyIDSource_24.getString());
    FIX::PartyRole PartyRole_24(77);
    noPartyIDs_0_0.set(PartyRole_24);
    Parties_NoPartyIDs_24.insert(PartyRole_24.getString());
    all_values.push_back(Parties_NoPartyIDs_24);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::CollateralRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_57;
      FIX::PartySubID PartySubID_57("STRING_937528801");
      noPartySubIDs_0_1_0.set(PartySubID_57);
      PtysSubGrp_NoPartySubIDs_57.insert(PartySubID_57.getString());
      FIX::PartySubIDType PartySubIDType_57(24);
      noPartySubIDs_0_1_0.set(PartySubIDType_57);
      PtysSubGrp_NoPartySubIDs_57.insert(PartySubIDType_57.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_57);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::CollateralRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_58;
      FIX::PartySubID PartySubID_58("STRING_1767838038");
      noPartySubIDs_0_1_1.set(PartySubID_58);
      PtysSubGrp_NoPartySubIDs_58.insert(PartySubID_58.getString());
      FIX::PartySubIDType PartySubIDType_58(24);
      noPartySubIDs_0_1_1.set(PartySubIDType_58);
      PtysSubGrp_NoPartySubIDs_58.insert(PartySubIDType_58.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_58);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::CollateralRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_59;
      FIX::PartySubID PartySubID_59("STRING_253495132");
      noPartySubIDs_0_1_2.set(PartySubID_59);
      PtysSubGrp_NoPartySubIDs_59.insert(PartySubID_59.getString());
      FIX::PartySubIDType PartySubIDType_59(9);
      noPartySubIDs_0_1_2.set(PartySubIDType_59);
      PtysSubGrp_NoPartySubIDs_59.insert(PartySubIDType_59.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_59);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::CollateralRequest::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_25;
    FIX::PartyID PartyID_25("STRING_1689636912");
    noPartyIDs_0_1.set(PartyID_25);
    Parties_NoPartyIDs_25.insert(PartyID_25.getString());
    FIX::PartyIDSource PartyIDSource_25('F');
    noPartyIDs_0_1.set(PartyIDSource_25);
    Parties_NoPartyIDs_25.insert(PartyIDSource_25.getString());
    FIX::PartyRole PartyRole_25(55);
    noPartyIDs_0_1.set(PartyRole_25);
    Parties_NoPartyIDs_25.insert(PartyRole_25.getString());
    all_values.push_back(Parties_NoPartyIDs_25);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::CollateralRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_60;
      FIX::PartySubID PartySubID_60("STRING_1604121206");
      noPartySubIDs_1_1_0.set(PartySubID_60);
      PtysSubGrp_NoPartySubIDs_60.insert(PartySubID_60.getString());
      FIX::PartySubIDType PartySubIDType_60(1);
      noPartySubIDs_1_1_0.set(PartySubIDType_60);
      PtysSubGrp_NoPartySubIDs_60.insert(PartySubIDType_60.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_60);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::CollateralRequest::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_26;
    FIX::PartyID PartyID_26("STRING_1128886070");
    noPartyIDs_0_2.set(PartyID_26);
    Parties_NoPartyIDs_26.insert(PartyID_26.getString());
    FIX::PartyIDSource PartyIDSource_26('6');
    noPartyIDs_0_2.set(PartyIDSource_26);
    Parties_NoPartyIDs_26.insert(PartyIDSource_26.getString());
    FIX::PartyRole PartyRole_26(34);
    noPartyIDs_0_2.set(PartyRole_26);
    Parties_NoPartyIDs_26.insert(PartyRole_26.getString());
    all_values.push_back(Parties_NoPartyIDs_26);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::CollateralRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_61;
      FIX::PartySubID PartySubID_61("STRING_1439566646");
      noPartySubIDs_2_1_0.set(PartySubID_61);
      PtysSubGrp_NoPartySubIDs_61.insert(PartySubID_61.getString());
      FIX::PartySubIDType PartySubIDType_61(25);
      noPartySubIDs_2_1_0.set(PartySubIDType_61);
      PtysSubGrp_NoPartySubIDs_61.insert(PartySubIDType_61.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_61);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    msg.addGroup(noPartyIDs_0_2);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_6;
  FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_6("GBP");
  msg.set(BenchmarkCurveCurrency_6);
  SpreadOrBenchmarkCurveData_6.insert(BenchmarkCurveCurrency_6.getString());
  FIX::BenchmarkCurveName BenchmarkCurveName_6("STRING_EONIA");
  msg.set(BenchmarkCurveName_6);
  SpreadOrBenchmarkCurveData_6.insert(BenchmarkCurveName_6.getString());
  FIX::BenchmarkCurvePoint BenchmarkCurvePoint_6("STRING_1077175275");
  msg.set(BenchmarkCurvePoint_6);
  SpreadOrBenchmarkCurveData_6.insert(BenchmarkCurvePoint_6.getString());
  FIX::BenchmarkPrice BenchmarkPrice_6;
  BenchmarkPrice_6.setString("8467193");
  msg.set(BenchmarkPrice_6);
  SpreadOrBenchmarkCurveData_6.insert(BenchmarkPrice_6.getString());
  FIX::BenchmarkPriceType BenchmarkPriceType_6(924826846);
  msg.set(BenchmarkPriceType_6);
  SpreadOrBenchmarkCurveData_6.insert(BenchmarkPriceType_6.getString());
  FIX::BenchmarkSecurityID BenchmarkSecurityID_6("STRING_190896747");
  msg.set(BenchmarkSecurityID_6);
  SpreadOrBenchmarkCurveData_6.insert(BenchmarkSecurityID_6.getString());
  FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_6("STRING_1910027305");
  msg.set(BenchmarkSecurityIDSource_6);
  SpreadOrBenchmarkCurveData_6.insert(BenchmarkSecurityIDSource_6.getString());
  FIX::Spread Spread_6;
  Spread_6.setString("17358408");
  msg.set(Spread_6);
  SpreadOrBenchmarkCurveData_6.insert(Spread_6.getString());
  all_values.push_back(SpreadOrBenchmarkCurveData_6);
  all_compo_names.insert("SpreadOrBenchmarkCurveData");

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::CollateralRequest::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_11;
    FIX::StipulationType StipulationType_11("STRING_LOT");
    noStipulations_0_0.set(StipulationType_11);
    Stipulations_NoStipulations_11.insert(StipulationType_11.getString());
    FIX::StipulationValue StipulationValue_11("STRING_1393522510");
    noStipulations_0_0.set(StipulationValue_11);
    Stipulations_NoStipulations_11.insert(StipulationValue_11.getString());
    all_values.push_back(Stipulations_NoStipulations_11);
    all_compo_names.insert("Stipulations.NoStipulations");

    msg.addGroup(noStipulations_0_0);
  }
  {
    FIX50SP2::CollateralRequest::NoStipulations noStipulations_0_1;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_12;
    FIX::StipulationType StipulationType_12("STRING_TRDVAR");
    noStipulations_0_1.set(StipulationType_12);
    Stipulations_NoStipulations_12.insert(StipulationType_12.getString());
    FIX::StipulationValue StipulationValue_12("STRING_334856128");
    noStipulations_0_1.set(StipulationValue_12);
    Stipulations_NoStipulations_12.insert(StipulationValue_12.getString());
    all_values.push_back(Stipulations_NoStipulations_12);
    all_compo_names.insert("Stipulations.NoStipulations");

    msg.addGroup(noStipulations_0_1);
  }
  {
    FIX50SP2::CollateralRequest::NoStipulations noStipulations_0_2;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_13;
    FIX::StipulationType StipulationType_13("STRING_MAXSUBS");
    noStipulations_0_2.set(StipulationType_13);
    Stipulations_NoStipulations_13.insert(StipulationType_13.getString());
    FIX::StipulationValue StipulationValue_13("STRING_1443579473");
    noStipulations_0_2.set(StipulationValue_13);
    Stipulations_NoStipulations_13.insert(StipulationValue_13.getString());
    all_values.push_back(Stipulations_NoStipulations_13);
    all_compo_names.insert("Stipulations.NoStipulations");

    msg.addGroup(noStipulations_0_2);
  }
  // TrdCollGrp
  // Group TrdCollGrp.NoTrades
  {
    FIX50SP2::CollateralRequest::NoTrades noTrades_0_0;
    // TrdCollGrp.NoTrades
    multiset<string> TrdCollGrp_NoTrades_10;
    FIX::SecondaryTradeReportID SecondaryTradeReportID_10("STRING_636765630");
    noTrades_0_0.set(SecondaryTradeReportID_10);
    TrdCollGrp_NoTrades_10.insert(SecondaryTradeReportID_10.getString());
    FIX::TradeReportID TradeReportID_10("STRING_1373006075");
    noTrades_0_0.set(TradeReportID_10);
    TrdCollGrp_NoTrades_10.insert(TradeReportID_10.getString());
    all_values.push_back(TrdCollGrp_NoTrades_10);
    all_compo_names.insert("TrdCollGrp.NoTrades");

    msg.addGroup(noTrades_0_0);
  }
  // TrdRegTimestamps
  // Group TrdRegTimestamps.NoTrdRegTimestamps
  {
    FIX50SP2::CollateralRequest::NoTrdRegTimestamps noTrdRegTimestamps_0_0;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_6;
    FIX::DeskOrderHandlingInst DeskOrderHandlingInst_6("MULTIPLESTRINGVALUE_LOC");
    noTrdRegTimestamps_0_0.set(DeskOrderHandlingInst_6);
    TrdRegTimestamps_NoTrdRegTimestamps_6.insert(DeskOrderHandlingInst_6.getString());
    FIX::DeskType DeskType_6("STRING_O");
    noTrdRegTimestamps_0_0.set(DeskType_6);
    TrdRegTimestamps_NoTrdRegTimestamps_6.insert(DeskType_6.getString());
    FIX::DeskTypeSource DeskTypeSource_6(1);
    noTrdRegTimestamps_0_0.set(DeskTypeSource_6);
    TrdRegTimestamps_NoTrdRegTimestamps_6.insert(DeskTypeSource_6.getString());
    FIX::TrdRegTimestamp TrdRegTimestamp_6(FIX::UTCTIMESTAMP(18, 43, 46, 2, 9, 2011));
    noTrdRegTimestamps_0_0.set(TrdRegTimestamp_6);
    TrdRegTimestamps_NoTrdRegTimestamps_6.insert(TrdRegTimestamp_6.getString());
    FIX::TrdRegTimestampOrigin TrdRegTimestampOrigin_6("STRING_1099977252");
    noTrdRegTimestamps_0_0.set(TrdRegTimestampOrigin_6);
    TrdRegTimestamps_NoTrdRegTimestamps_6.insert(TrdRegTimestampOrigin_6.getString());
    FIX::TrdRegTimestampType TrdRegTimestampType_6(5);
    noTrdRegTimestamps_0_0.set(TrdRegTimestampType_6);
    TrdRegTimestamps_NoTrdRegTimestamps_6.insert(TrdRegTimestampType_6.getString());
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_6);
    all_compo_names.insert("TrdRegTimestamps.NoTrdRegTimestamps");

    msg.addGroup(noTrdRegTimestamps_0_0);
  }
  {
    FIX50SP2::CollateralRequest::NoTrdRegTimestamps noTrdRegTimestamps_0_1;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_7;
    FIX::DeskOrderHandlingInst DeskOrderHandlingInst_7("MULTIPLESTRINGVALUE_AON");
    noTrdRegTimestamps_0_1.set(DeskOrderHandlingInst_7);
    TrdRegTimestamps_NoTrdRegTimestamps_7.insert(DeskOrderHandlingInst_7.getString());
    FIX::DeskType DeskType_7("STRING_S");
    noTrdRegTimestamps_0_1.set(DeskType_7);
    TrdRegTimestamps_NoTrdRegTimestamps_7.insert(DeskType_7.getString());
    FIX::DeskTypeSource DeskTypeSource_7(1);
    noTrdRegTimestamps_0_1.set(DeskTypeSource_7);
    TrdRegTimestamps_NoTrdRegTimestamps_7.insert(DeskTypeSource_7.getString());
    FIX::TrdRegTimestamp TrdRegTimestamp_7(FIX::UTCTIMESTAMP(15, 39, 28, 26, 3, 2012));
    noTrdRegTimestamps_0_1.set(TrdRegTimestamp_7);
    TrdRegTimestamps_NoTrdRegTimestamps_7.insert(TrdRegTimestamp_7.getString());
    FIX::TrdRegTimestampOrigin TrdRegTimestampOrigin_7("STRING_1201661480");
    noTrdRegTimestamps_0_1.set(TrdRegTimestampOrigin_7);
    TrdRegTimestamps_NoTrdRegTimestamps_7.insert(TrdRegTimestampOrigin_7.getString());
    FIX::TrdRegTimestampType TrdRegTimestampType_7(1);
    noTrdRegTimestamps_0_1.set(TrdRegTimestampType_7);
    TrdRegTimestamps_NoTrdRegTimestamps_7.insert(TrdRegTimestampType_7.getString());
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_7);
    all_compo_names.insert("TrdRegTimestamps.NoTrdRegTimestamps");

    msg.addGroup(noTrdRegTimestamps_0_1);
  }
  // UndInstrmtCollGrp
  // Group UndInstrmtCollGrp.NoUnderlyings
  {
    FIX50SP2::CollateralRequest::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtCollGrp.NoUnderlyings
    multiset<string> UndInstrmtCollGrp_NoUnderlyings_1;
    FIX::CollAction CollAction_1(1);
    noUnderlyings_0_0.set(CollAction_1);
    UndInstrmtCollGrp_NoUnderlyings_1.insert(CollAction_1.getString());
    all_values.push_back(UndInstrmtCollGrp_NoUnderlyings_1);
    all_compo_names.insert("UndInstrmtCollGrp.NoUnderlyings");

    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_16;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_16("DATA_1492635523");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_16);
    UnderlyingInstrument_16.insert(EncodedUnderlyingIssuer_16.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_16(1995463919);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_16);
    UnderlyingInstrument_16.insert(EncodedUnderlyingIssuerLen_16.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_16("DATA_74213961");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_16);
    UnderlyingInstrument_16.insert(EncodedUnderlyingSecurityDesc_16.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_16(718157950);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_16);
    UnderlyingInstrument_16.insert(EncodedUnderlyingSecurityDescLen_16.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_16;
    UnderlyingAdjustedQuantity_16.setString("20486162");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_16);
    UnderlyingInstrument_16.insert(UnderlyingAdjustedQuantity_16.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_16;
    UnderlyingAllocationPercent_16.setString("36.260000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_16);
    UnderlyingInstrument_16.insert(UnderlyingAllocationPercent_16.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_16;
    UnderlyingAttachmentPoint_16.setString("90.190000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_16);
    UnderlyingInstrument_16.insert(UnderlyingAttachmentPoint_16.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_16("STRING_2099041833");
    noUnderlyings_0_0.set(UnderlyingCFICode_16);
    UnderlyingInstrument_16.insert(UnderlyingCFICode_16.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_16("STRING_1560810850");
    noUnderlyings_0_0.set(UnderlyingCPProgram_16);
    UnderlyingInstrument_16.insert(UnderlyingCPProgram_16.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_16("STRING_1396328341");
    noUnderlyings_0_0.set(UnderlyingCPRegType_16);
    UnderlyingInstrument_16.insert(UnderlyingCPRegType_16.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_16;
    UnderlyingCapValue_16.setString("11308698");
    noUnderlyings_0_0.set(UnderlyingCapValue_16);
    UnderlyingInstrument_16.insert(UnderlyingCapValue_16.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_16;
    UnderlyingCashAmount_16.setString("4987541");
    noUnderlyings_0_0.set(UnderlyingCashAmount_16);
    UnderlyingInstrument_16.insert(UnderlyingCashAmount_16.getString());
    FIX::UnderlyingCashType UnderlyingCashType_16("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_16);
    UnderlyingInstrument_16.insert(UnderlyingCashType_16.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_16;
    UnderlyingContractMultiplier_16.setString("10020013");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_16);
    UnderlyingInstrument_16.insert(UnderlyingContractMultiplier_16.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_16(876264054);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_16);
    UnderlyingInstrument_16.insert(UnderlyingContractMultiplierUnit_16.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_16("COUNTRY_1191430260");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_16);
    UnderlyingInstrument_16.insert(UnderlyingCountryOfIssue_16.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_16("LOCALMKTDATE_1910158501");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_16);
    UnderlyingInstrument_16.insert(UnderlyingCouponPaymentDate_16.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_16;
    UnderlyingCouponRate_16.setString("23.670000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_16);
    UnderlyingInstrument_16.insert(UnderlyingCouponRate_16.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_16("STRING_486385157");
    noUnderlyings_0_0.set(UnderlyingCreditRating_16);
    UnderlyingInstrument_16.insert(UnderlyingCreditRating_16.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_16("CHF");
    noUnderlyings_0_0.set(UnderlyingCurrency_16);
    UnderlyingInstrument_16.insert(UnderlyingCurrency_16.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_16;
    UnderlyingCurrentValue_16.setString("7061669");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_16);
    UnderlyingInstrument_16.insert(UnderlyingCurrentValue_16.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_16;
    UnderlyingDetachmentPoint_16.setString("28.710000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_16);
    UnderlyingInstrument_16.insert(UnderlyingDetachmentPoint_16.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_16;
    UnderlyingDirtyPrice_16.setString("14663341");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_16);
    UnderlyingInstrument_16.insert(UnderlyingDirtyPrice_16.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_16;
    UnderlyingEndPrice_16.setString("5143058");
    noUnderlyings_0_0.set(UnderlyingEndPrice_16);
    UnderlyingInstrument_16.insert(UnderlyingEndPrice_16.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_16;
    UnderlyingEndValue_16.setString("25838");
    noUnderlyings_0_0.set(UnderlyingEndValue_16);
    UnderlyingInstrument_16.insert(UnderlyingEndValue_16.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_16(468459196);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_16);
    UnderlyingInstrument_16.insert(UnderlyingExerciseStyle_16.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_16;
    UnderlyingFXRate_16.setString("17159673");
    noUnderlyings_0_0.set(UnderlyingFXRate_16);
    UnderlyingInstrument_16.insert(UnderlyingFXRate_16.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_16('M');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_16);
    UnderlyingInstrument_16.insert(UnderlyingFXRateCalc_16.getString());
    FIX::UnderlyingFactor UnderlyingFactor_16;
    UnderlyingFactor_16.setString("19529240");
    noUnderlyings_0_0.set(UnderlyingFactor_16);
    UnderlyingInstrument_16.insert(UnderlyingFactor_16.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_16(1153415681);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_16);
    UnderlyingInstrument_16.insert(UnderlyingFlowScheduleType_16.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_16("STRING_1544275410");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_16);
    UnderlyingInstrument_16.insert(UnderlyingInstrRegistry_16.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_16("LOCALMKTDATE_1800904289");
    noUnderlyings_0_0.set(UnderlyingIssueDate_16);
    UnderlyingInstrument_16.insert(UnderlyingIssueDate_16.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_16("STRING_1227629642");
    noUnderlyings_0_0.set(UnderlyingIssuer_16);
    UnderlyingInstrument_16.insert(UnderlyingIssuer_16.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_16("STRING_114949712");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_16);
    UnderlyingInstrument_16.insert(UnderlyingLocaleOfIssue_16.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_16("LOCALMKTDATE_1702036921");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_16);
    UnderlyingInstrument_16.insert(UnderlyingMaturityDate_16.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_16("MONTHYEAR_169339620");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_16);
    UnderlyingInstrument_16.insert(UnderlyingMaturityMonthYear_16.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_16("TZTIMEONLY_226588731");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_16);
    UnderlyingInstrument_16.insert(UnderlyingMaturityTime_16.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_16;
    UnderlyingNotionalPercentageOutstanding_16.setString("51.060000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_16);
    UnderlyingInstrument_16.insert(UnderlyingNotionalPercentageOutstanding_16.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_16('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_16);
    UnderlyingInstrument_16.insert(UnderlyingOptAttribute_16.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_16;
    UnderlyingOriginalNotionalPercentageOutstanding_16.setString("70.720000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_16);
    UnderlyingInstrument_16.insert(UnderlyingOriginalNotionalPercentageOutstanding_16.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_16("STRING_636981266");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_16);
    UnderlyingInstrument_16.insert(UnderlyingPriceUnitOfMeasure_16.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_16;
    UnderlyingPriceUnitOfMeasureQty_16.setString("814209");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_16);
    UnderlyingInstrument_16.insert(UnderlyingPriceUnitOfMeasureQty_16.getString());
    FIX::UnderlyingProduct UnderlyingProduct_16(1714370080);
    noUnderlyings_0_0.set(UnderlyingProduct_16);
    UnderlyingInstrument_16.insert(UnderlyingProduct_16.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_16(1638982583);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_16);
    UnderlyingInstrument_16.insert(UnderlyingPutOrCall_16.getString());
    FIX::UnderlyingPx UnderlyingPx_16;
    UnderlyingPx_16.setString("9576850");
    noUnderlyings_0_0.set(UnderlyingPx_16);
    UnderlyingInstrument_16.insert(UnderlyingPx_16.getString());
    FIX::UnderlyingQty UnderlyingQty_16;
    UnderlyingQty_16.setString("7583166");
    noUnderlyings_0_0.set(UnderlyingQty_16);
    UnderlyingInstrument_16.insert(UnderlyingQty_16.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_16("LOCALMKTDATE_1401657436");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_16);
    UnderlyingInstrument_16.insert(UnderlyingRedemptionDate_16.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_16("STRING_829483725");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_16);
    UnderlyingInstrument_16.insert(UnderlyingRepoCollateralSecurityType_16.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_16;
    UnderlyingRepurchaseRate_16.setString("18.490000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_16);
    UnderlyingInstrument_16.insert(UnderlyingRepurchaseRate_16.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_16(1002181100);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_16);
    UnderlyingInstrument_16.insert(UnderlyingRepurchaseTerm_16.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_16("STRING_543536506");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_16);
    UnderlyingInstrument_16.insert(UnderlyingRestructuringType_16.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_16("STRING_1950868749");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_16);
    UnderlyingInstrument_16.insert(UnderlyingSecurityDesc_16.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_16("EXCHANGE_631450324");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_16);
    UnderlyingInstrument_16.insert(UnderlyingSecurityExchange_16.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_16("STRING_2009870656");
    noUnderlyings_0_0.set(UnderlyingSecurityID_16);
    UnderlyingInstrument_16.insert(UnderlyingSecurityID_16.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_16("STRING_317690971");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_16);
    UnderlyingInstrument_16.insert(UnderlyingSecurityIDSource_16.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_16("STRING_634034161");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_16);
    UnderlyingInstrument_16.insert(UnderlyingSecuritySubType_16.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_16("STRING_330846204");
    noUnderlyings_0_0.set(UnderlyingSecurityType_16);
    UnderlyingInstrument_16.insert(UnderlyingSecurityType_16.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_16("STRING_2033658321");
    noUnderlyings_0_0.set(UnderlyingSeniority_16);
    UnderlyingInstrument_16.insert(UnderlyingSeniority_16.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_16("STRING_685674048");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_16);
    UnderlyingInstrument_16.insert(UnderlyingSettlMethod_16.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_16(2);
    noUnderlyings_0_0.set(UnderlyingSettlementType_16);
    UnderlyingInstrument_16.insert(UnderlyingSettlementType_16.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_16;
    UnderlyingStartValue_16.setString("10395903");
    noUnderlyings_0_0.set(UnderlyingStartValue_16);
    UnderlyingInstrument_16.insert(UnderlyingStartValue_16.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_16("STRING_82465810");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_16);
    UnderlyingInstrument_16.insert(UnderlyingStateOrProvinceOfIssue_16.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_16("USD");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_16);
    UnderlyingInstrument_16.insert(UnderlyingStrikeCurrency_16.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_16;
    UnderlyingStrikePrice_16.setString("1974155");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_16);
    UnderlyingInstrument_16.insert(UnderlyingStrikePrice_16.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_16("STRING_1491744137");
    noUnderlyings_0_0.set(UnderlyingSymbol_16);
    UnderlyingInstrument_16.insert(UnderlyingSymbol_16.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_16("STRING_289075969");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_16);
    UnderlyingInstrument_16.insert(UnderlyingSymbolSfx_16.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_16("STRING_424004254");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_16);
    UnderlyingInstrument_16.insert(UnderlyingTimeUnit_16.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_16("STRING_997855595");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_16);
    UnderlyingInstrument_16.insert(UnderlyingUnitOfMeasure_16.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_16;
    UnderlyingUnitOfMeasureQty_16.setString("20192264");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_16);
    UnderlyingInstrument_16.insert(UnderlyingUnitOfMeasureQty_16.getString());
    all_values.push_back(UnderlyingInstrument_16);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::CollateralRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_38;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_38("STRING_1634836861");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_38);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_38.insert(UnderlyingSecurityAltID_38.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_38("STRING_2100647392");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_38);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_38.insert(UnderlyingSecurityAltIDSource_38.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_38);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::CollateralRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_25;
      FIX::UnderlyingStipType UnderlyingStipType_25("STRING_1126335796");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_25);
      UnderlyingStipulations_NoUnderlyingStips_25.insert(UnderlyingStipType_25.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_25("STRING_910848750");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_25);
      UnderlyingStipulations_NoUnderlyingStips_25.insert(UnderlyingStipValue_25.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_25);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::CollateralRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_26;
      FIX::UnderlyingStipType UnderlyingStipType_26("STRING_224640803");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_26);
      UnderlyingStipulations_NoUnderlyingStips_26.insert(UnderlyingStipType_26.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_26("STRING_380509584");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_26);
      UnderlyingStipulations_NoUnderlyingStips_26.insert(UnderlyingStipValue_26.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_26);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    {
      FIX50SP2::CollateralRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_27;
      FIX::UnderlyingStipType UnderlyingStipType_27("STRING_1740332475");
      noUnderlyingStips_0_1_2.set(UnderlyingStipType_27);
      UnderlyingStipulations_NoUnderlyingStips_27.insert(UnderlyingStipType_27.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_27("STRING_1469342652");
      noUnderlyingStips_0_1_2.set(UnderlyingStipValue_27);
      UnderlyingStipulations_NoUnderlyingStips_27.insert(UnderlyingStipValue_27.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_27);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::CollateralRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_33;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_33("STRING_136385333");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_33);
      UndlyInstrumentParties_NoUndlyInstrumentParties_33.insert(UnderlyingInstrumentPartyID_33.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_33('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_33);
      UndlyInstrumentParties_NoUndlyInstrumentParties_33.insert(UnderlyingInstrumentPartyIDSource_33.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_33(2014141009);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_33);
      UndlyInstrumentParties_NoUndlyInstrumentParties_33.insert(UnderlyingInstrumentPartyRole_33.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_33);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_64;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_64("STRING_1590418724");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_64);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_64.insert(UnderlyingInstrumentPartySubID_64.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_64(500691522);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_64);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_64.insert(UnderlyingInstrumentPartySubIDType_64.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_64);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::CollateralRequest::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtCollGrp.NoUnderlyings
    multiset<string> UndInstrmtCollGrp_NoUnderlyings_2;
    FIX::CollAction CollAction_2(1);
    noUnderlyings_0_1.set(CollAction_2);
    UndInstrmtCollGrp_NoUnderlyings_2.insert(CollAction_2.getString());
    all_values.push_back(UndInstrmtCollGrp_NoUnderlyings_2);
    all_compo_names.insert("UndInstrmtCollGrp.NoUnderlyings");

    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_17;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_17("DATA_1476593397");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_17);
    UnderlyingInstrument_17.insert(EncodedUnderlyingIssuer_17.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_17(1186365571);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_17);
    UnderlyingInstrument_17.insert(EncodedUnderlyingIssuerLen_17.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_17("DATA_465905120");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_17);
    UnderlyingInstrument_17.insert(EncodedUnderlyingSecurityDesc_17.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_17(368700104);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_17);
    UnderlyingInstrument_17.insert(EncodedUnderlyingSecurityDescLen_17.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_17;
    UnderlyingAdjustedQuantity_17.setString("12688313");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_17);
    UnderlyingInstrument_17.insert(UnderlyingAdjustedQuantity_17.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_17;
    UnderlyingAllocationPercent_17.setString("23.360000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_17);
    UnderlyingInstrument_17.insert(UnderlyingAllocationPercent_17.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_17;
    UnderlyingAttachmentPoint_17.setString("64.520000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_17);
    UnderlyingInstrument_17.insert(UnderlyingAttachmentPoint_17.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_17("STRING_1466246904");
    noUnderlyings_0_1.set(UnderlyingCFICode_17);
    UnderlyingInstrument_17.insert(UnderlyingCFICode_17.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_17("STRING_1747356473");
    noUnderlyings_0_1.set(UnderlyingCPProgram_17);
    UnderlyingInstrument_17.insert(UnderlyingCPProgram_17.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_17("STRING_777512421");
    noUnderlyings_0_1.set(UnderlyingCPRegType_17);
    UnderlyingInstrument_17.insert(UnderlyingCPRegType_17.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_17;
    UnderlyingCapValue_17.setString("18902511");
    noUnderlyings_0_1.set(UnderlyingCapValue_17);
    UnderlyingInstrument_17.insert(UnderlyingCapValue_17.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_17;
    UnderlyingCashAmount_17.setString("5977284");
    noUnderlyings_0_1.set(UnderlyingCashAmount_17);
    UnderlyingInstrument_17.insert(UnderlyingCashAmount_17.getString());
    FIX::UnderlyingCashType UnderlyingCashType_17("STRING_DIFF");
    noUnderlyings_0_1.set(UnderlyingCashType_17);
    UnderlyingInstrument_17.insert(UnderlyingCashType_17.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_17;
    UnderlyingContractMultiplier_17.setString("17896888");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_17);
    UnderlyingInstrument_17.insert(UnderlyingContractMultiplier_17.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_17(85081633);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_17);
    UnderlyingInstrument_17.insert(UnderlyingContractMultiplierUnit_17.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_17("COUNTRY_602418957");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_17);
    UnderlyingInstrument_17.insert(UnderlyingCountryOfIssue_17.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_17("LOCALMKTDATE_1256012949");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_17);
    UnderlyingInstrument_17.insert(UnderlyingCouponPaymentDate_17.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_17;
    UnderlyingCouponRate_17.setString("74.300000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_17);
    UnderlyingInstrument_17.insert(UnderlyingCouponRate_17.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_17("STRING_1513267707");
    noUnderlyings_0_1.set(UnderlyingCreditRating_17);
    UnderlyingInstrument_17.insert(UnderlyingCreditRating_17.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_17("USD");
    noUnderlyings_0_1.set(UnderlyingCurrency_17);
    UnderlyingInstrument_17.insert(UnderlyingCurrency_17.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_17;
    UnderlyingCurrentValue_17.setString("11061165");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_17);
    UnderlyingInstrument_17.insert(UnderlyingCurrentValue_17.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_17;
    UnderlyingDetachmentPoint_17.setString("27.560000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_17);
    UnderlyingInstrument_17.insert(UnderlyingDetachmentPoint_17.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_17;
    UnderlyingDirtyPrice_17.setString("8271340");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_17);
    UnderlyingInstrument_17.insert(UnderlyingDirtyPrice_17.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_17;
    UnderlyingEndPrice_17.setString("12425018");
    noUnderlyings_0_1.set(UnderlyingEndPrice_17);
    UnderlyingInstrument_17.insert(UnderlyingEndPrice_17.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_17;
    UnderlyingEndValue_17.setString("20752405");
    noUnderlyings_0_1.set(UnderlyingEndValue_17);
    UnderlyingInstrument_17.insert(UnderlyingEndValue_17.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_17(693791412);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_17);
    UnderlyingInstrument_17.insert(UnderlyingExerciseStyle_17.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_17;
    UnderlyingFXRate_17.setString("12412742");
    noUnderlyings_0_1.set(UnderlyingFXRate_17);
    UnderlyingInstrument_17.insert(UnderlyingFXRate_17.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_17('M');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_17);
    UnderlyingInstrument_17.insert(UnderlyingFXRateCalc_17.getString());
    FIX::UnderlyingFactor UnderlyingFactor_17;
    UnderlyingFactor_17.setString("11944829");
    noUnderlyings_0_1.set(UnderlyingFactor_17);
    UnderlyingInstrument_17.insert(UnderlyingFactor_17.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_17(1570892755);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_17);
    UnderlyingInstrument_17.insert(UnderlyingFlowScheduleType_17.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_17("STRING_847285334");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_17);
    UnderlyingInstrument_17.insert(UnderlyingInstrRegistry_17.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_17("LOCALMKTDATE_233364858");
    noUnderlyings_0_1.set(UnderlyingIssueDate_17);
    UnderlyingInstrument_17.insert(UnderlyingIssueDate_17.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_17("STRING_2036797875");
    noUnderlyings_0_1.set(UnderlyingIssuer_17);
    UnderlyingInstrument_17.insert(UnderlyingIssuer_17.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_17("STRING_1215985438");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_17);
    UnderlyingInstrument_17.insert(UnderlyingLocaleOfIssue_17.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_17("LOCALMKTDATE_1502196239");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_17);
    UnderlyingInstrument_17.insert(UnderlyingMaturityDate_17.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_17("MONTHYEAR_144926563");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_17);
    UnderlyingInstrument_17.insert(UnderlyingMaturityMonthYear_17.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_17("TZTIMEONLY_1704421891");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_17);
    UnderlyingInstrument_17.insert(UnderlyingMaturityTime_17.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_17;
    UnderlyingNotionalPercentageOutstanding_17.setString("94.960000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_17);
    UnderlyingInstrument_17.insert(UnderlyingNotionalPercentageOutstanding_17.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_17('1');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_17);
    UnderlyingInstrument_17.insert(UnderlyingOptAttribute_17.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_17;
    UnderlyingOriginalNotionalPercentageOutstanding_17.setString("6.640000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_17);
    UnderlyingInstrument_17.insert(UnderlyingOriginalNotionalPercentageOutstanding_17.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_17("STRING_563727007");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_17);
    UnderlyingInstrument_17.insert(UnderlyingPriceUnitOfMeasure_17.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_17;
    UnderlyingPriceUnitOfMeasureQty_17.setString("3425278");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_17);
    UnderlyingInstrument_17.insert(UnderlyingPriceUnitOfMeasureQty_17.getString());
    FIX::UnderlyingProduct UnderlyingProduct_17(983705878);
    noUnderlyings_0_1.set(UnderlyingProduct_17);
    UnderlyingInstrument_17.insert(UnderlyingProduct_17.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_17(205932197);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_17);
    UnderlyingInstrument_17.insert(UnderlyingPutOrCall_17.getString());
    FIX::UnderlyingPx UnderlyingPx_17;
    UnderlyingPx_17.setString("4276094");
    noUnderlyings_0_1.set(UnderlyingPx_17);
    UnderlyingInstrument_17.insert(UnderlyingPx_17.getString());
    FIX::UnderlyingQty UnderlyingQty_17;
    UnderlyingQty_17.setString("15861248");
    noUnderlyings_0_1.set(UnderlyingQty_17);
    UnderlyingInstrument_17.insert(UnderlyingQty_17.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_17("LOCALMKTDATE_1461945146");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_17);
    UnderlyingInstrument_17.insert(UnderlyingRedemptionDate_17.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_17("STRING_1639026871");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_17);
    UnderlyingInstrument_17.insert(UnderlyingRepoCollateralSecurityType_17.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_17;
    UnderlyingRepurchaseRate_17.setString("88.950000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_17);
    UnderlyingInstrument_17.insert(UnderlyingRepurchaseRate_17.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_17(795115250);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_17);
    UnderlyingInstrument_17.insert(UnderlyingRepurchaseTerm_17.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_17("STRING_1083470238");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_17);
    UnderlyingInstrument_17.insert(UnderlyingRestructuringType_17.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_17("STRING_2058025429");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_17);
    UnderlyingInstrument_17.insert(UnderlyingSecurityDesc_17.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_17("EXCHANGE_1597628006");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_17);
    UnderlyingInstrument_17.insert(UnderlyingSecurityExchange_17.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_17("STRING_1910604289");
    noUnderlyings_0_1.set(UnderlyingSecurityID_17);
    UnderlyingInstrument_17.insert(UnderlyingSecurityID_17.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_17("STRING_1153043649");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_17);
    UnderlyingInstrument_17.insert(UnderlyingSecurityIDSource_17.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_17("STRING_1525384867");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_17);
    UnderlyingInstrument_17.insert(UnderlyingSecuritySubType_17.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_17("STRING_456912054");
    noUnderlyings_0_1.set(UnderlyingSecurityType_17);
    UnderlyingInstrument_17.insert(UnderlyingSecurityType_17.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_17("STRING_246834211");
    noUnderlyings_0_1.set(UnderlyingSeniority_17);
    UnderlyingInstrument_17.insert(UnderlyingSeniority_17.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_17("STRING_896076804");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_17);
    UnderlyingInstrument_17.insert(UnderlyingSettlMethod_17.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_17(4);
    noUnderlyings_0_1.set(UnderlyingSettlementType_17);
    UnderlyingInstrument_17.insert(UnderlyingSettlementType_17.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_17;
    UnderlyingStartValue_17.setString("18177269");
    noUnderlyings_0_1.set(UnderlyingStartValue_17);
    UnderlyingInstrument_17.insert(UnderlyingStartValue_17.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_17("STRING_1743362138");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_17);
    UnderlyingInstrument_17.insert(UnderlyingStateOrProvinceOfIssue_17.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_17("CHF");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_17);
    UnderlyingInstrument_17.insert(UnderlyingStrikeCurrency_17.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_17;
    UnderlyingStrikePrice_17.setString("8118639");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_17);
    UnderlyingInstrument_17.insert(UnderlyingStrikePrice_17.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_17("STRING_1239472438");
    noUnderlyings_0_1.set(UnderlyingSymbol_17);
    UnderlyingInstrument_17.insert(UnderlyingSymbol_17.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_17("STRING_1851967756");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_17);
    UnderlyingInstrument_17.insert(UnderlyingSymbolSfx_17.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_17("STRING_368802172");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_17);
    UnderlyingInstrument_17.insert(UnderlyingTimeUnit_17.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_17("STRING_2060431934");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_17);
    UnderlyingInstrument_17.insert(UnderlyingUnitOfMeasure_17.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_17;
    UnderlyingUnitOfMeasureQty_17.setString("15967671");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_17);
    UnderlyingInstrument_17.insert(UnderlyingUnitOfMeasureQty_17.getString());
    all_values.push_back(UnderlyingInstrument_17);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::CollateralRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_39;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_39("STRING_476675293");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_39);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_39.insert(UnderlyingSecurityAltID_39.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_39("STRING_1939294952");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_39);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_39.insert(UnderlyingSecurityAltIDSource_39.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_39);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::CollateralRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_28;
      FIX::UnderlyingStipType UnderlyingStipType_28("STRING_682607490");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_28);
      UnderlyingStipulations_NoUnderlyingStips_28.insert(UnderlyingStipType_28.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_28("STRING_219420745");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_28);
      UnderlyingStipulations_NoUnderlyingStips_28.insert(UnderlyingStipValue_28.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_28);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::CollateralRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_29;
      FIX::UnderlyingStipType UnderlyingStipType_29("STRING_1125599902");
      noUnderlyingStips_1_1_1.set(UnderlyingStipType_29);
      UnderlyingStipulations_NoUnderlyingStips_29.insert(UnderlyingStipType_29.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_29("STRING_2144552636");
      noUnderlyingStips_1_1_1.set(UnderlyingStipValue_29);
      UnderlyingStipulations_NoUnderlyingStips_29.insert(UnderlyingStipValue_29.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_29);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::CollateralRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_34;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_34("STRING_2077508797");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_34);
      UndlyInstrumentParties_NoUndlyInstrumentParties_34.insert(UnderlyingInstrumentPartyID_34.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_34('7');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_34);
      UndlyInstrumentParties_NoUndlyInstrumentParties_34.insert(UnderlyingInstrumentPartyIDSource_34.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_34(794434207);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_34);
      UndlyInstrumentParties_NoUndlyInstrumentParties_34.insert(UnderlyingInstrumentPartyRole_34.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_34);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_65;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_65("STRING_242328596");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_65);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_65.insert(UnderlyingInstrumentPartySubID_65.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_65(557554848);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_65);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_65.insert(UnderlyingInstrumentPartySubIDType_65.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_65);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    msg.addGroup(noUnderlyings_0_1);
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
