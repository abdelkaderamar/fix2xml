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

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::CollateralResponse msg;

  list<multiset<string>> all_values;
  multiset<string> CollateralResponse_0;
  FIX::Account Account_9("STRING_1763568436");
  msg.set(Account_9);
  CollateralResponse_0.insert(Account_9.getString());
  FIX::AccountType AccountType_6(7);
  msg.set(AccountType_6);
  CollateralResponse_0.insert(AccountType_6.getString());
  FIX::AccruedInterestAmt AccruedInterestAmt_7;
  AccruedInterestAmt_7.setString("15973746");
  msg.set(AccruedInterestAmt_7);
  CollateralResponse_0.insert(AccruedInterestAmt_7.getString());
  FIX::CashOutstanding CashOutstanding_4;
  CashOutstanding_4.setString("18167720");
  msg.set(CashOutstanding_4);
  CollateralResponse_0.insert(CashOutstanding_4.getString());
  FIX::ClOrdID ClOrdID_11("STRING_1237813568");
  msg.set(ClOrdID_11);
  CollateralResponse_0.insert(ClOrdID_11.getString());
  FIX::ClearingBusinessDate ClearingBusinessDate_11("LOCALMKTDATE_904294452");
  msg.set(ClearingBusinessDate_11);
  CollateralResponse_0.insert(ClearingBusinessDate_11.getString());
  FIX::CollApplType CollApplType_1(0);
  msg.set(CollApplType_1);
  CollateralResponse_0.insert(CollApplType_1.getString());
  FIX::CollAsgnID CollAsgnID_1("STRING_46894154");
  msg.set(CollAsgnID_1);
  CollateralResponse_0.insert(CollAsgnID_1.getString());
  FIX::CollAsgnReason CollAsgnReason_2(5);
  msg.set(CollAsgnReason_2);
  CollateralResponse_0.insert(CollAsgnReason_2.getString());
  FIX::CollAsgnRejectReason CollAsgnRejectReason_0(0);
  msg.set(CollAsgnRejectReason_0);
  CollateralResponse_0.insert(CollAsgnRejectReason_0.getString());
  FIX::CollAsgnRespType CollAsgnRespType_0(2);
  msg.set(CollAsgnRespType_0);
  CollateralResponse_0.insert(CollAsgnRespType_0.getString());
  FIX::CollAsgnTransType CollAsgnTransType_1(1);
  msg.set(CollAsgnTransType_1);
  CollateralResponse_0.insert(CollAsgnTransType_1.getString());
  FIX::CollReqID CollReqID_2("STRING_970596162");
  msg.set(CollReqID_2);
  CollateralResponse_0.insert(CollReqID_2.getString());
  FIX::CollRespID CollRespID_0("STRING_61229702");
  msg.set(CollRespID_0);
  CollateralResponse_0.insert(CollRespID_0.getString());
  FIX::Currency Currency_11("JPY");
  msg.set(Currency_11);
  CollateralResponse_0.insert(Currency_11.getString());
  FIX::EncodedText EncodedText_20("DATA_794378908");
  msg.set(EncodedText_20);
  CollateralResponse_0.insert(EncodedText_20.getString());
  FIX::EncodedTextLen EncodedTextLen_20(198207112);
  msg.set(EncodedTextLen_20);
  CollateralResponse_0.insert(EncodedTextLen_20.getString());
  FIX::EndAccruedInterestAmt EndAccruedInterestAmt_7;
  EndAccruedInterestAmt_7.setString("15669145");
  msg.set(EndAccruedInterestAmt_7);
  CollateralResponse_0.insert(EndAccruedInterestAmt_7.getString());
  FIX::EndCash EndCash_7;
  EndCash_7.setString("10906891");
  msg.set(EndCash_7);
  CollateralResponse_0.insert(EndCash_7.getString());
  FIX::FinancialStatus FinancialStatus_1("MULTIPLECHARVALUE_2");
  msg.set(FinancialStatus_1);
  CollateralResponse_0.insert(FinancialStatus_1.getString());
  FIX::MarginExcess MarginExcess_4;
  MarginExcess_4.setString("11564709");
  msg.set(MarginExcess_4);
  CollateralResponse_0.insert(MarginExcess_4.getString());
  FIX::OrderID OrderID_11("STRING_1507959219");
  msg.set(OrderID_11);
  CollateralResponse_0.insert(OrderID_11.getString());
  FIX::Price Price_8;
  Price_8.setString("17594215");
  msg.set(Price_8);
  CollateralResponse_0.insert(Price_8.getString());
  FIX::PriceType PriceType_10(15);
  msg.set(PriceType_10);
  CollateralResponse_0.insert(PriceType_10.getString());
  FIX::QtyType QtyType_9(0);
  msg.set(QtyType_9);
  CollateralResponse_0.insert(QtyType_9.getString());
  FIX::Quantity Quantity_10;
  Quantity_10.setString("313364");
  msg.set(Quantity_10);
  CollateralResponse_0.insert(Quantity_10.getString());
  FIX::SecondaryClOrdID SecondaryClOrdID_11("STRING_871129774");
  msg.set(SecondaryClOrdID_11);
  CollateralResponse_0.insert(SecondaryClOrdID_11.getString());
  FIX::SecondaryOrderID SecondaryOrderID_11("STRING_853037631");
  msg.set(SecondaryOrderID_11);
  CollateralResponse_0.insert(SecondaryOrderID_11.getString());
  FIX::SettlDate SettlDate_14("LOCALMKTDATE_2031954560");
  msg.set(SettlDate_14);
  CollateralResponse_0.insert(SettlDate_14.getString());
  FIX::Side Side_13('7');
  msg.set(Side_13);
  CollateralResponse_0.insert(Side_13.getString());
  FIX::StartCash StartCash_7;
  StartCash_7.setString("4691224");
  msg.set(StartCash_7);
  CollateralResponse_0.insert(StartCash_7.getString());
  FIX::Text Text_20("STRING_303800646");
  msg.set(Text_20);
  CollateralResponse_0.insert(Text_20.getString());
  FIX::TotalNetValue TotalNetValue_4;
  TotalNetValue_4.setString("17922515");
  msg.set(TotalNetValue_4);
  CollateralResponse_0.insert(TotalNetValue_4.getString());
  FIX::TransactTime TransactTime_9(FIX::UTCTIMESTAMP(14, 36, 41, 20, 6, 2013));
  msg.set(TransactTime_9);
  CollateralResponse_0.insert(TransactTime_9.getString());
  all_values.push_back(CollateralResponse_0);

  // ExecCollGrp
  // Group ExecCollGrp.NoExecs
  {
    FIX50SP2::CollateralResponse::NoExecs noExecs_0_0;
    // ExecCollGrp.NoExecs
    multiset<string> ExecCollGrp_NoExecs_10;
    FIX::ExecID ExecID_17("STRING_1206639764");
    noExecs_0_0.set(ExecID_17);
    ExecCollGrp_NoExecs_10.insert(ExecID_17.getString());
    all_values.push_back(ExecCollGrp_NoExecs_10);

    msg.addGroup(noExecs_0_0);
  }
  {
    FIX50SP2::CollateralResponse::NoExecs noExecs_0_1;
    // ExecCollGrp.NoExecs
    multiset<string> ExecCollGrp_NoExecs_11;
    FIX::ExecID ExecID_18("STRING_138700181");
    noExecs_0_1.set(ExecID_18);
    ExecCollGrp_NoExecs_11.insert(ExecID_18.getString());
    all_values.push_back(ExecCollGrp_NoExecs_11);

    msg.addGroup(noExecs_0_1);
  }
  {
    FIX50SP2::CollateralResponse::NoExecs noExecs_0_2;
    // ExecCollGrp.NoExecs
    multiset<string> ExecCollGrp_NoExecs_12;
    FIX::ExecID ExecID_19("STRING_1633441477");
    noExecs_0_2.set(ExecID_19);
    ExecCollGrp_NoExecs_12.insert(ExecID_19.getString());
    all_values.push_back(ExecCollGrp_NoExecs_12);

    msg.addGroup(noExecs_0_2);
  }
  // FinancingDetails
  multiset<string> FinancingDetails_8;
  FIX::AgreementCurrency AgreementCurrency_8("CHF");
  msg.set(AgreementCurrency_8);
  FinancingDetails_8.insert(AgreementCurrency_8.getString());
  FIX::AgreementDate AgreementDate_8("LOCALMKTDATE_280336737");
  msg.set(AgreementDate_8);
  FinancingDetails_8.insert(AgreementDate_8.getString());
  FIX::AgreementDesc AgreementDesc_8("STRING_1301162507");
  msg.set(AgreementDesc_8);
  FinancingDetails_8.insert(AgreementDesc_8.getString());
  FIX::AgreementID AgreementID_8("STRING_81353429");
  msg.set(AgreementID_8);
  FinancingDetails_8.insert(AgreementID_8.getString());
  FIX::DeliveryType DeliveryType_8(1);
  msg.set(DeliveryType_8);
  FinancingDetails_8.insert(DeliveryType_8.getString());
  FIX::EndDate EndDate_8("LOCALMKTDATE_380362777");
  msg.set(EndDate_8);
  FinancingDetails_8.insert(EndDate_8.getString());
  FIX::MarginRatio MarginRatio_8;
  MarginRatio_8.setString("43.970000");
  msg.set(MarginRatio_8);
  FinancingDetails_8.insert(MarginRatio_8.getString());
  FIX::StartDate StartDate_8("LOCALMKTDATE_731501424");
  msg.set(StartDate_8);
  FinancingDetails_8.insert(StartDate_8.getString());
  FIX::TerminationType TerminationType_8(4);
  msg.set(TerminationType_8);
  FinancingDetails_8.insert(TerminationType_8.getString());
  all_values.push_back(FinancingDetails_8);

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::CollateralResponse::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_17;
    FIX::EncodedLegIssuer EncodedLegIssuer_17("DATA_691091860");
    noLegs_0_0.set(EncodedLegIssuer_17);
    InstrumentLeg_17.insert(EncodedLegIssuer_17.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_17(23637188);
    noLegs_0_0.set(EncodedLegIssuerLen_17);
    InstrumentLeg_17.insert(EncodedLegIssuerLen_17.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_17("DATA_1895881000");
    noLegs_0_0.set(EncodedLegSecurityDesc_17);
    InstrumentLeg_17.insert(EncodedLegSecurityDesc_17.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_17(1544129491);
    noLegs_0_0.set(EncodedLegSecurityDescLen_17);
    InstrumentLeg_17.insert(EncodedLegSecurityDescLen_17.getString());
    FIX::LegCFICode LegCFICode_17("STRING_2055591748");
    noLegs_0_0.set(LegCFICode_17);
    InstrumentLeg_17.insert(LegCFICode_17.getString());
    FIX::LegContractMultiplier LegContractMultiplier_17;
    LegContractMultiplier_17.setString("20907578");
    noLegs_0_0.set(LegContractMultiplier_17);
    InstrumentLeg_17.insert(LegContractMultiplier_17.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_17(2013251910);
    noLegs_0_0.set(LegContractMultiplierUnit_17);
    InstrumentLeg_17.insert(LegContractMultiplierUnit_17.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_17("MONTHYEAR_211908746");
    noLegs_0_0.set(LegContractSettlMonth_17);
    InstrumentLeg_17.insert(LegContractSettlMonth_17.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_17("COUNTRY_1735525686");
    noLegs_0_0.set(LegCountryOfIssue_17);
    InstrumentLeg_17.insert(LegCountryOfIssue_17.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_17("LOCALMKTDATE_4179131");
    noLegs_0_0.set(LegCouponPaymentDate_17);
    InstrumentLeg_17.insert(LegCouponPaymentDate_17.getString());
    FIX::LegCouponRate LegCouponRate_17;
    LegCouponRate_17.setString("29.610000");
    noLegs_0_0.set(LegCouponRate_17);
    InstrumentLeg_17.insert(LegCouponRate_17.getString());
    FIX::LegCreditRating LegCreditRating_17("STRING_137104354");
    noLegs_0_0.set(LegCreditRating_17);
    InstrumentLeg_17.insert(LegCreditRating_17.getString());
    FIX::LegCurrency LegCurrency_17("EUR");
    noLegs_0_0.set(LegCurrency_17);
    InstrumentLeg_17.insert(LegCurrency_17.getString());
    FIX::LegDatedDate LegDatedDate_17("LOCALMKTDATE_2134956580");
    noLegs_0_0.set(LegDatedDate_17);
    InstrumentLeg_17.insert(LegDatedDate_17.getString());
    FIX::LegExerciseStyle LegExerciseStyle_17(1899381360);
    noLegs_0_0.set(LegExerciseStyle_17);
    InstrumentLeg_17.insert(LegExerciseStyle_17.getString());
    FIX::LegFactor LegFactor_17;
    LegFactor_17.setString("6192758");
    noLegs_0_0.set(LegFactor_17);
    InstrumentLeg_17.insert(LegFactor_17.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_17(1194112696);
    noLegs_0_0.set(LegFlowScheduleType_17);
    InstrumentLeg_17.insert(LegFlowScheduleType_17.getString());
    FIX::LegInstrRegistry LegInstrRegistry_17("STRING_2038081541");
    noLegs_0_0.set(LegInstrRegistry_17);
    InstrumentLeg_17.insert(LegInstrRegistry_17.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_17("LOCALMKTDATE_105233638");
    noLegs_0_0.set(LegInterestAccrualDate_17);
    InstrumentLeg_17.insert(LegInterestAccrualDate_17.getString());
    FIX::LegIssueDate LegIssueDate_17("LOCALMKTDATE_149584443");
    noLegs_0_0.set(LegIssueDate_17);
    InstrumentLeg_17.insert(LegIssueDate_17.getString());
    FIX::LegIssuer LegIssuer_17("STRING_552520452");
    noLegs_0_0.set(LegIssuer_17);
    InstrumentLeg_17.insert(LegIssuer_17.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_17("STRING_385570375");
    noLegs_0_0.set(LegLocaleOfIssue_17);
    InstrumentLeg_17.insert(LegLocaleOfIssue_17.getString());
    FIX::LegMaturityDate LegMaturityDate_17("LOCALMKTDATE_1450746950");
    noLegs_0_0.set(LegMaturityDate_17);
    InstrumentLeg_17.insert(LegMaturityDate_17.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_17("MONTHYEAR_633873881");
    noLegs_0_0.set(LegMaturityMonthYear_17);
    InstrumentLeg_17.insert(LegMaturityMonthYear_17.getString());
    FIX::LegMaturityTime LegMaturityTime_17("TZTIMEONLY_1756596228");
    noLegs_0_0.set(LegMaturityTime_17);
    InstrumentLeg_17.insert(LegMaturityTime_17.getString());
    FIX::LegOptAttribute LegOptAttribute_17('1');
    noLegs_0_0.set(LegOptAttribute_17);
    InstrumentLeg_17.insert(LegOptAttribute_17.getString());
    FIX::LegOptionRatio LegOptionRatio_17;
    LegOptionRatio_17.setString("18716982");
    noLegs_0_0.set(LegOptionRatio_17);
    InstrumentLeg_17.insert(LegOptionRatio_17.getString());
    FIX::LegPool LegPool_17("STRING_340614004");
    noLegs_0_0.set(LegPool_17);
    InstrumentLeg_17.insert(LegPool_17.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_17("STRING_1823410447");
    noLegs_0_0.set(LegPriceUnitOfMeasure_17);
    InstrumentLeg_17.insert(LegPriceUnitOfMeasure_17.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_17;
    LegPriceUnitOfMeasureQty_17.setString("7489658");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_17);
    InstrumentLeg_17.insert(LegPriceUnitOfMeasureQty_17.getString());
    FIX::LegProduct LegProduct_17(1031705864);
    noLegs_0_0.set(LegProduct_17);
    InstrumentLeg_17.insert(LegProduct_17.getString());
    FIX::LegPutOrCall LegPutOrCall_17(1847047636);
    noLegs_0_0.set(LegPutOrCall_17);
    InstrumentLeg_17.insert(LegPutOrCall_17.getString());
    FIX::LegRatioQty LegRatioQty_17;
    LegRatioQty_17.setString("4973632");
    noLegs_0_0.set(LegRatioQty_17);
    InstrumentLeg_17.insert(LegRatioQty_17.getString());
    FIX::LegRedemptionDate LegRedemptionDate_17("LOCALMKTDATE_428351707");
    noLegs_0_0.set(LegRedemptionDate_17);
    InstrumentLeg_17.insert(LegRedemptionDate_17.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_17("STRING_1755155736");
    noLegs_0_0.set(LegRepoCollateralSecurityType_17);
    InstrumentLeg_17.insert(LegRepoCollateralSecurityType_17.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_17;
    LegRepurchaseRate_17.setString("73.820000");
    noLegs_0_0.set(LegRepurchaseRate_17);
    InstrumentLeg_17.insert(LegRepurchaseRate_17.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_17(294119969);
    noLegs_0_0.set(LegRepurchaseTerm_17);
    InstrumentLeg_17.insert(LegRepurchaseTerm_17.getString());
    FIX::LegSecurityDesc LegSecurityDesc_17("STRING_1967064483");
    noLegs_0_0.set(LegSecurityDesc_17);
    InstrumentLeg_17.insert(LegSecurityDesc_17.getString());
    FIX::LegSecurityExchange LegSecurityExchange_17("EXCHANGE_28679421");
    noLegs_0_0.set(LegSecurityExchange_17);
    InstrumentLeg_17.insert(LegSecurityExchange_17.getString());
    FIX::LegSecurityID LegSecurityID_17("STRING_298299101");
    noLegs_0_0.set(LegSecurityID_17);
    InstrumentLeg_17.insert(LegSecurityID_17.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_17("STRING_1573103796");
    noLegs_0_0.set(LegSecurityIDSource_17);
    InstrumentLeg_17.insert(LegSecurityIDSource_17.getString());
    FIX::LegSecuritySubType LegSecuritySubType_17("STRING_165783775");
    noLegs_0_0.set(LegSecuritySubType_17);
    InstrumentLeg_17.insert(LegSecuritySubType_17.getString());
    FIX::LegSecurityType LegSecurityType_17("STRING_882092794");
    noLegs_0_0.set(LegSecurityType_17);
    InstrumentLeg_17.insert(LegSecurityType_17.getString());
    FIX::LegSide LegSide_17('6');
    noLegs_0_0.set(LegSide_17);
    InstrumentLeg_17.insert(LegSide_17.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_17("STRING_153256707");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_17);
    InstrumentLeg_17.insert(LegStateOrProvinceOfIssue_17.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_17("JPY");
    noLegs_0_0.set(LegStrikeCurrency_17);
    InstrumentLeg_17.insert(LegStrikeCurrency_17.getString());
    FIX::LegStrikePrice LegStrikePrice_17;
    LegStrikePrice_17.setString("13473694");
    noLegs_0_0.set(LegStrikePrice_17);
    InstrumentLeg_17.insert(LegStrikePrice_17.getString());
    FIX::LegSymbol LegSymbol_17("STRING_524588399");
    noLegs_0_0.set(LegSymbol_17);
    InstrumentLeg_17.insert(LegSymbol_17.getString());
    FIX::LegSymbolSfx LegSymbolSfx_17("STRING_1344677276");
    noLegs_0_0.set(LegSymbolSfx_17);
    InstrumentLeg_17.insert(LegSymbolSfx_17.getString());
    FIX::LegTimeUnit LegTimeUnit_17("STRING_1496953846");
    noLegs_0_0.set(LegTimeUnit_17);
    InstrumentLeg_17.insert(LegTimeUnit_17.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_17("STRING_1077108851");
    noLegs_0_0.set(LegUnitOfMeasure_17);
    InstrumentLeg_17.insert(LegUnitOfMeasure_17.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_17;
    LegUnitOfMeasureQty_17.setString("17302476");
    noLegs_0_0.set(LegUnitOfMeasureQty_17);
    InstrumentLeg_17.insert(LegUnitOfMeasureQty_17.getString());
    all_values.push_back(InstrumentLeg_17);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::CollateralResponse::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_38;
      FIX::LegSecurityAltID LegSecurityAltID_38("STRING_1710982732");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_38);
      LegSecAltIDGrp_NoLegSecurityAltID_38.insert(LegSecurityAltID_38.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_38("STRING_1339360232");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_38);
      LegSecAltIDGrp_NoLegSecurityAltID_38.insert(LegSecurityAltIDSource_38.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_38);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::CollateralResponse::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_39;
      FIX::LegSecurityAltID LegSecurityAltID_39("STRING_483843229");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_39);
      LegSecAltIDGrp_NoLegSecurityAltID_39.insert(LegSecurityAltID_39.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_39("STRING_1435197362");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_39);
      LegSecAltIDGrp_NoLegSecurityAltID_39.insert(LegSecurityAltIDSource_39.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_39);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::CollateralResponse::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_40;
      FIX::LegSecurityAltID LegSecurityAltID_40("STRING_1679974236");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltID_40);
      LegSecAltIDGrp_NoLegSecurityAltID_40.insert(LegSecurityAltID_40.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_40("STRING_159770028");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltIDSource_40);
      LegSecAltIDGrp_NoLegSecurityAltID_40.insert(LegSecurityAltIDSource_40.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_40);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_2);
    }
    msg.addGroup(noLegs_0_0);
  }
  // Instrument
  multiset<string> Instrument_12;
  FIX::AttachmentPoint AttachmentPoint_12;
  AttachmentPoint_12.setString("95.700000");
  msg.set(AttachmentPoint_12);
  Instrument_12.insert(AttachmentPoint_12.getString());
  FIX::CFICode CFICode_12("STRING_564196453");
  msg.set(CFICode_12);
  Instrument_12.insert(CFICode_12.getString());
  FIX::CPProgram CPProgram_12(2);
  msg.set(CPProgram_12);
  Instrument_12.insert(CPProgram_12.getString());
  FIX::CPRegType CPRegType_12("STRING_534042778");
  msg.set(CPRegType_12);
  Instrument_12.insert(CPRegType_12.getString());
  FIX::CapPrice CapPrice_12;
  CapPrice_12.setString("9925481");
  msg.set(CapPrice_12);
  Instrument_12.insert(CapPrice_12.getString());
  FIX::ContractMultiplier ContractMultiplier_12;
  ContractMultiplier_12.setString("16144897");
  msg.set(ContractMultiplier_12);
  Instrument_12.insert(ContractMultiplier_12.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_12(2);
  msg.set(ContractMultiplierUnit_12);
  Instrument_12.insert(ContractMultiplierUnit_12.getString());
  FIX::ContractSettlMonth ContractSettlMonth_12("MONTHYEAR_1286668130");
  msg.set(ContractSettlMonth_12);
  Instrument_12.insert(ContractSettlMonth_12.getString());
  FIX::CountryOfIssue CountryOfIssue_12("COUNTRY_1434070588");
  msg.set(CountryOfIssue_12);
  Instrument_12.insert(CountryOfIssue_12.getString());
  FIX::CouponPaymentDate CouponPaymentDate_12("LOCALMKTDATE_1003359581");
  msg.set(CouponPaymentDate_12);
  Instrument_12.insert(CouponPaymentDate_12.getString());
  FIX::CouponRate CouponRate_12;
  CouponRate_12.setString("72.310000");
  msg.set(CouponRate_12);
  Instrument_12.insert(CouponRate_12.getString());
  FIX::CreditRating CreditRating_12("STRING_859690736");
  msg.set(CreditRating_12);
  Instrument_12.insert(CreditRating_12.getString());
  FIX::DatedDate DatedDate_12("LOCALMKTDATE_1169143357");
  msg.set(DatedDate_12);
  Instrument_12.insert(DatedDate_12.getString());
  FIX::DetachmentPoint DetachmentPoint_12;
  DetachmentPoint_12.setString("63.770000");
  msg.set(DetachmentPoint_12);
  Instrument_12.insert(DetachmentPoint_12.getString());
  FIX::EncodedIssuer EncodedIssuer_12("DATA_1479858565");
  msg.set(EncodedIssuer_12);
  Instrument_12.insert(EncodedIssuer_12.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_12(1322400064);
  msg.set(EncodedIssuerLen_12);
  Instrument_12.insert(EncodedIssuerLen_12.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_12("DATA_953566883");
  msg.set(EncodedSecurityDesc_12);
  Instrument_12.insert(EncodedSecurityDesc_12.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_12(571818555);
  msg.set(EncodedSecurityDescLen_12);
  Instrument_12.insert(EncodedSecurityDescLen_12.getString());
  FIX::ExerciseStyle ExerciseStyle_12(1);
  msg.set(ExerciseStyle_12);
  Instrument_12.insert(ExerciseStyle_12.getString());
  FIX::Factor Factor_12;
  Factor_12.setString("14781552");
  msg.set(Factor_12);
  Instrument_12.insert(Factor_12.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_12(false);
  msg.set(FlexProductEligibilityIndicator_12);
  Instrument_12.insert(FlexProductEligibilityIndicator_12.getString());
  FIX::FlexibleIndicator FlexibleIndicator_12(true);
  msg.set(FlexibleIndicator_12);
  Instrument_12.insert(FlexibleIndicator_12.getString());
  FIX::FloorPrice FloorPrice_12;
  FloorPrice_12.setString("4077804");
  msg.set(FloorPrice_12);
  Instrument_12.insert(FloorPrice_12.getString());
  FIX::FlowScheduleType FlowScheduleType_12(0);
  msg.set(FlowScheduleType_12);
  Instrument_12.insert(FlowScheduleType_12.getString());
  FIX::InstrRegistry InstrRegistry_12("STRING_671973167");
  msg.set(InstrRegistry_12);
  Instrument_12.insert(InstrRegistry_12.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_12('2');
  msg.set(InstrmtAssignmentMethod_12);
  Instrument_12.insert(InstrmtAssignmentMethod_12.getString());
  FIX::InterestAccrualDate InterestAccrualDate_12("LOCALMKTDATE_691136419");
  msg.set(InterestAccrualDate_12);
  Instrument_12.insert(InterestAccrualDate_12.getString());
  FIX::IssueDate IssueDate_12("LOCALMKTDATE_1155816396");
  msg.set(IssueDate_12);
  Instrument_12.insert(IssueDate_12.getString());
  FIX::Issuer Issuer_12("STRING_1406476931");
  msg.set(Issuer_12);
  Instrument_12.insert(Issuer_12.getString());
  FIX::ListMethod ListMethod_12(1);
  msg.set(ListMethod_12);
  Instrument_12.insert(ListMethod_12.getString());
  FIX::LocaleOfIssue LocaleOfIssue_12("STRING_1315586425");
  msg.set(LocaleOfIssue_12);
  Instrument_12.insert(LocaleOfIssue_12.getString());
  FIX::MaturityDate MaturityDate_12("LOCALMKTDATE_1443156501");
  msg.set(MaturityDate_12);
  Instrument_12.insert(MaturityDate_12.getString());
  FIX::MaturityMonthYear MaturityMonthYear_12("MONTHYEAR_787823460");
  msg.set(MaturityMonthYear_12);
  Instrument_12.insert(MaturityMonthYear_12.getString());
  FIX::MaturityTime MaturityTime_12("TZTIMEONLY_1174920441");
  msg.set(MaturityTime_12);
  Instrument_12.insert(MaturityTime_12.getString());
  FIX::MinPriceIncrement MinPriceIncrement_12;
  MinPriceIncrement_12.setString("19771992");
  msg.set(MinPriceIncrement_12);
  Instrument_12.insert(MinPriceIncrement_12.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_12;
  MinPriceIncrementAmount_12.setString("17803716");
  msg.set(MinPriceIncrementAmount_12);
  Instrument_12.insert(MinPriceIncrementAmount_12.getString());
  FIX::NTPositionLimit NTPositionLimit_12(641926546);
  msg.set(NTPositionLimit_12);
  Instrument_12.insert(NTPositionLimit_12.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_12;
  NotionalPercentageOutstanding_12.setString("57.910000");
  msg.set(NotionalPercentageOutstanding_12);
  Instrument_12.insert(NotionalPercentageOutstanding_12.getString());
  FIX::OptAttribute OptAttribute_12('9');
  msg.set(OptAttribute_12);
  Instrument_12.insert(OptAttribute_12.getString());
  FIX::OptPayoutAmount OptPayoutAmount_12;
  OptPayoutAmount_12.setString("20759971");
  msg.set(OptPayoutAmount_12);
  Instrument_12.insert(OptPayoutAmount_12.getString());
  FIX::OptPayoutType OptPayoutType_12(2);
  msg.set(OptPayoutType_12);
  Instrument_12.insert(OptPayoutType_12.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_12;
  OriginalNotionalPercentageOutstanding_12.setString("96.860000");
  msg.set(OriginalNotionalPercentageOutstanding_12);
  Instrument_12.insert(OriginalNotionalPercentageOutstanding_12.getString());
  FIX::Pool Pool_12("STRING_788204222");
  msg.set(Pool_12);
  Instrument_12.insert(Pool_12.getString());
  FIX::PositionLimit PositionLimit_12(829415082);
  msg.set(PositionLimit_12);
  Instrument_12.insert(PositionLimit_12.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_12("STRING_PCTPAR");
  msg.set(PriceQuoteMethod_12);
  Instrument_12.insert(PriceQuoteMethod_12.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_12("STRING_120579140");
  msg.set(PriceUnitOfMeasure_12);
  Instrument_12.insert(PriceUnitOfMeasure_12.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_12;
  PriceUnitOfMeasureQty_12.setString("43314");
  msg.set(PriceUnitOfMeasureQty_12);
  Instrument_12.insert(PriceUnitOfMeasureQty_12.getString());
  FIX::Product Product_14(3);
  msg.set(Product_14);
  Instrument_12.insert(Product_14.getString());
  FIX::ProductComplex ProductComplex_12("STRING_692397695");
  msg.set(ProductComplex_12);
  Instrument_12.insert(ProductComplex_12.getString());
  FIX::PutOrCall PutOrCall_12(0);
  msg.set(PutOrCall_12);
  Instrument_12.insert(PutOrCall_12.getString());
  FIX::RedemptionDate RedemptionDate_12("LOCALMKTDATE_960854580");
  msg.set(RedemptionDate_12);
  Instrument_12.insert(RedemptionDate_12.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_12("STRING_461409879");
  msg.set(RepoCollateralSecurityType_12);
  Instrument_12.insert(RepoCollateralSecurityType_12.getString());
  FIX::RepurchaseRate RepurchaseRate_12;
  RepurchaseRate_12.setString("33.370000");
  msg.set(RepurchaseRate_12);
  Instrument_12.insert(RepurchaseRate_12.getString());
  FIX::RepurchaseTerm RepurchaseTerm_12(1368635065);
  msg.set(RepurchaseTerm_12);
  Instrument_12.insert(RepurchaseTerm_12.getString());
  FIX::RestructuringType RestructuringType_12("STRING_MM");
  msg.set(RestructuringType_12);
  Instrument_12.insert(RestructuringType_12.getString());
  FIX::SecurityDesc SecurityDesc_12("STRING_1070346504");
  msg.set(SecurityDesc_12);
  Instrument_12.insert(SecurityDesc_12.getString());
  FIX::SecurityExchange SecurityExchange_12("EXCHANGE_1339914634");
  msg.set(SecurityExchange_12);
  Instrument_12.insert(SecurityExchange_12.getString());
  FIX::SecurityGroup SecurityGroup_12("STRING_504322485");
  msg.set(SecurityGroup_12);
  Instrument_12.insert(SecurityGroup_12.getString());
  FIX::SecurityID SecurityID_12("STRING_78679253");
  msg.set(SecurityID_12);
  Instrument_12.insert(SecurityID_12.getString());
  FIX::SecurityIDSource SecurityIDSource_12("STRING_4");
  msg.set(SecurityIDSource_12);
  Instrument_12.insert(SecurityIDSource_12.getString());
  FIX::SecurityStatus SecurityStatus_12("STRING_1");
  msg.set(SecurityStatus_12);
  Instrument_12.insert(SecurityStatus_12.getString());
  FIX::SecuritySubType SecuritySubType_12("STRING_1394265678");
  msg.set(SecuritySubType_12);
  Instrument_12.insert(SecuritySubType_12.getString());
  FIX::SecurityType SecurityType_14("STRING_XCN");
  msg.set(SecurityType_14);
  Instrument_12.insert(SecurityType_14.getString());
  FIX::Seniority Seniority_12("STRING_SD");
  msg.set(Seniority_12);
  Instrument_12.insert(Seniority_12.getString());
  FIX::SettlMethod SettlMethod_12('P');
  msg.set(SettlMethod_12);
  Instrument_12.insert(SettlMethod_12.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_12("STRING_1871780049");
  msg.set(SettleOnOpenFlag_12);
  Instrument_12.insert(SettleOnOpenFlag_12.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_12("STRING_1148660926");
  msg.set(StateOrProvinceOfIssue_12);
  Instrument_12.insert(StateOrProvinceOfIssue_12.getString());
  FIX::StrikeCurrency StrikeCurrency_12("GBP");
  msg.set(StrikeCurrency_12);
  Instrument_12.insert(StrikeCurrency_12.getString());
  FIX::StrikeMultiplier StrikeMultiplier_12;
  StrikeMultiplier_12.setString("20682170");
  msg.set(StrikeMultiplier_12);
  Instrument_12.insert(StrikeMultiplier_12.getString());
  FIX::StrikePrice StrikePrice_12;
  StrikePrice_12.setString("9921425");
  msg.set(StrikePrice_12);
  Instrument_12.insert(StrikePrice_12.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_12(3);
  msg.set(StrikePriceBoundaryMethod_12);
  Instrument_12.insert(StrikePriceBoundaryMethod_12.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_12;
  StrikePriceBoundaryPrecision_12.setString("30.670000");
  msg.set(StrikePriceBoundaryPrecision_12);
  Instrument_12.insert(StrikePriceBoundaryPrecision_12.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_12(4);
  msg.set(StrikePriceDeterminationMethod_12);
  Instrument_12.insert(StrikePriceDeterminationMethod_12.getString());
  FIX::StrikeValue StrikeValue_12;
  StrikeValue_12.setString("10183789");
  msg.set(StrikeValue_12);
  Instrument_12.insert(StrikeValue_12.getString());
  FIX::Symbol Symbol_12("STRING_954389130");
  msg.set(Symbol_12);
  Instrument_12.insert(Symbol_12.getString());
  FIX::SymbolSfx SymbolSfx_12("STRING_WI");
  msg.set(SymbolSfx_12);
  Instrument_12.insert(SymbolSfx_12.getString());
  FIX::TimeUnit TimeUnit_12("STRING_Mo");
  msg.set(TimeUnit_12);
  Instrument_12.insert(TimeUnit_12.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_12(1);
  msg.set(UnderlyingPriceDeterminationMethod_12);
  Instrument_12.insert(UnderlyingPriceDeterminationMethod_12.getString());
  FIX::UnitOfMeasure UnitOfMeasure_12("STRING_Bcf");
  msg.set(UnitOfMeasure_12);
  Instrument_12.insert(UnitOfMeasure_12.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_12;
  UnitOfMeasureQty_12.setString("15493278");
  msg.set(UnitOfMeasureQty_12);
  Instrument_12.insert(UnitOfMeasureQty_12.getString());
  FIX::ValuationMethod ValuationMethod_12("STRING_CDS");
  msg.set(ValuationMethod_12);
  Instrument_12.insert(ValuationMethod_12.getString());
  all_values.push_back(Instrument_12);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::CollateralResponse::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_28;
    FIX::ComplexEventCondition ComplexEventCondition_28(2);
    noComplexEvents_0_0.set(ComplexEventCondition_28);
    ComplexEvents_NoComplexEvents_28.insert(ComplexEventCondition_28.getString());
    FIX::ComplexEventPrice ComplexEventPrice_28;
    ComplexEventPrice_28.setString("6190944");
    noComplexEvents_0_0.set(ComplexEventPrice_28);
    ComplexEvents_NoComplexEvents_28.insert(ComplexEventPrice_28.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_28(5);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_28);
    ComplexEvents_NoComplexEvents_28.insert(ComplexEventPriceBoundaryMethod_28.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_28;
    ComplexEventPriceBoundaryPrecision_28.setString("40.100000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_28);
    ComplexEvents_NoComplexEvents_28.insert(ComplexEventPriceBoundaryPrecision_28.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_28(3);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_28);
    ComplexEvents_NoComplexEvents_28.insert(ComplexEventPriceTimeType_28.getString());
    FIX::ComplexEventType ComplexEventType_28(5);
    noComplexEvents_0_0.set(ComplexEventType_28);
    ComplexEvents_NoComplexEvents_28.insert(ComplexEventType_28.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_28;
    ComplexOptPayoutAmount_28.setString("9492432");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_28);
    ComplexEvents_NoComplexEvents_28.insert(ComplexOptPayoutAmount_28.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_28);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CollateralResponse::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_60;
      FIX::ComplexEventEndDate ComplexEventEndDate_60(FIX::UTCTIMESTAMP(13, 18, 2, 24, 8, 2016));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_60);
      ComplexEventDates_NoComplexEventDates_60.insert(ComplexEventEndDate_60.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_60(FIX::UTCTIMESTAMP(3, 21, 19, 25, 5, 2008));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_60);
      ComplexEventDates_NoComplexEventDates_60.insert(ComplexEventStartDate_60.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_60);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_127;
        FIX::ComplexEventEndTime ComplexEventEndTime_127(FIX::UTCTIMEONLY(1, 38, 6));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_127);
        ComplexEventTimes_NoComplexEventTimes_127.insert(ComplexEventEndTime_127.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_127(FIX::UTCTIMEONLY(11, 6, 25));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_127);
        ComplexEventTimes_NoComplexEventTimes_127.insert(ComplexEventStartTime_127.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_127);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::CollateralResponse::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_61;
      FIX::ComplexEventEndDate ComplexEventEndDate_61(FIX::UTCTIMESTAMP(19, 44, 42, 18, 6, 2015));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_61);
      ComplexEventDates_NoComplexEventDates_61.insert(ComplexEventEndDate_61.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_61(FIX::UTCTIMESTAMP(22, 58, 0, 4, 12, 2007));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_61);
      ComplexEventDates_NoComplexEventDates_61.insert(ComplexEventStartDate_61.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_61);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_128;
        FIX::ComplexEventEndTime ComplexEventEndTime_128(FIX::UTCTIMEONLY(22, 5, 48));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_128);
        ComplexEventTimes_NoComplexEventTimes_128.insert(ComplexEventEndTime_128.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_128(FIX::UTCTIMEONLY(21, 26, 20));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_128);
        ComplexEventTimes_NoComplexEventTimes_128.insert(ComplexEventStartTime_128.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_128);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::CollateralResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_129;
        FIX::ComplexEventEndTime ComplexEventEndTime_129(FIX::UTCTIMEONLY(19, 58, 21));
        noComplexEventTimes_0_1_2_1.set(ComplexEventEndTime_129);
        ComplexEventTimes_NoComplexEventTimes_129.insert(ComplexEventEndTime_129.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_129(FIX::UTCTIMEONLY(21, 27, 40));
        noComplexEventTimes_0_1_2_1.set(ComplexEventStartTime_129);
        ComplexEventTimes_NoComplexEventTimes_129.insert(ComplexEventStartTime_129.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_129);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      {
        FIX50SP2::CollateralResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_130;
        FIX::ComplexEventEndTime ComplexEventEndTime_130(FIX::UTCTIMEONLY(2, 16, 52));
        noComplexEventTimes_0_1_2_2.set(ComplexEventEndTime_130);
        ComplexEventTimes_NoComplexEventTimes_130.insert(ComplexEventEndTime_130.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_130(FIX::UTCTIMEONLY(13, 38, 46));
        noComplexEventTimes_0_1_2_2.set(ComplexEventStartTime_130);
        ComplexEventTimes_NoComplexEventTimes_130.insert(ComplexEventStartTime_130.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_130);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::CollateralResponse::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_29;
    FIX::ComplexEventCondition ComplexEventCondition_29(2);
    noComplexEvents_0_1.set(ComplexEventCondition_29);
    ComplexEvents_NoComplexEvents_29.insert(ComplexEventCondition_29.getString());
    FIX::ComplexEventPrice ComplexEventPrice_29;
    ComplexEventPrice_29.setString("15781053");
    noComplexEvents_0_1.set(ComplexEventPrice_29);
    ComplexEvents_NoComplexEvents_29.insert(ComplexEventPrice_29.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_29(2);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_29);
    ComplexEvents_NoComplexEvents_29.insert(ComplexEventPriceBoundaryMethod_29.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_29;
    ComplexEventPriceBoundaryPrecision_29.setString("54.230000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_29);
    ComplexEvents_NoComplexEvents_29.insert(ComplexEventPriceBoundaryPrecision_29.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_29(1);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_29);
    ComplexEvents_NoComplexEvents_29.insert(ComplexEventPriceTimeType_29.getString());
    FIX::ComplexEventType ComplexEventType_29(9);
    noComplexEvents_0_1.set(ComplexEventType_29);
    ComplexEvents_NoComplexEvents_29.insert(ComplexEventType_29.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_29;
    ComplexOptPayoutAmount_29.setString("21116087");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_29);
    ComplexEvents_NoComplexEvents_29.insert(ComplexOptPayoutAmount_29.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_29);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CollateralResponse::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_62;
      FIX::ComplexEventEndDate ComplexEventEndDate_62(FIX::UTCTIMESTAMP(8, 13, 47, 5, 5, 2007));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_62);
      ComplexEventDates_NoComplexEventDates_62.insert(ComplexEventEndDate_62.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_62(FIX::UTCTIMESTAMP(23, 57, 53, 10, 12, 2002));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_62);
      ComplexEventDates_NoComplexEventDates_62.insert(ComplexEventStartDate_62.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_62);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_131;
        FIX::ComplexEventEndTime ComplexEventEndTime_131(FIX::UTCTIMEONLY(14, 19, 37));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_131);
        ComplexEventTimes_NoComplexEventTimes_131.insert(ComplexEventEndTime_131.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_131(FIX::UTCTIMEONLY(12, 7, 52));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_131);
        ComplexEventTimes_NoComplexEventTimes_131.insert(ComplexEventStartTime_131.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_131);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::CollateralResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_132;
        FIX::ComplexEventEndTime ComplexEventEndTime_132(FIX::UTCTIMEONLY(0, 38, 55));
        noComplexEventTimes_1_0_2_1.set(ComplexEventEndTime_132);
        ComplexEventTimes_NoComplexEventTimes_132.insert(ComplexEventEndTime_132.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_132(FIX::UTCTIMEONLY(11, 35, 56));
        noComplexEventTimes_1_0_2_1.set(ComplexEventStartTime_132);
        ComplexEventTimes_NoComplexEventTimes_132.insert(ComplexEventStartTime_132.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_132);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::CollateralResponse::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_30;
    FIX::ComplexEventCondition ComplexEventCondition_30(2);
    noComplexEvents_0_2.set(ComplexEventCondition_30);
    ComplexEvents_NoComplexEvents_30.insert(ComplexEventCondition_30.getString());
    FIX::ComplexEventPrice ComplexEventPrice_30;
    ComplexEventPrice_30.setString("20767777");
    noComplexEvents_0_2.set(ComplexEventPrice_30);
    ComplexEvents_NoComplexEvents_30.insert(ComplexEventPrice_30.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_30(1);
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryMethod_30);
    ComplexEvents_NoComplexEvents_30.insert(ComplexEventPriceBoundaryMethod_30.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_30;
    ComplexEventPriceBoundaryPrecision_30.setString("4.100000");
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryPrecision_30);
    ComplexEvents_NoComplexEvents_30.insert(ComplexEventPriceBoundaryPrecision_30.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_30(3);
    noComplexEvents_0_2.set(ComplexEventPriceTimeType_30);
    ComplexEvents_NoComplexEvents_30.insert(ComplexEventPriceTimeType_30.getString());
    FIX::ComplexEventType ComplexEventType_30(3);
    noComplexEvents_0_2.set(ComplexEventType_30);
    ComplexEvents_NoComplexEvents_30.insert(ComplexEventType_30.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_30;
    ComplexOptPayoutAmount_30.setString("330360");
    noComplexEvents_0_2.set(ComplexOptPayoutAmount_30);
    ComplexEvents_NoComplexEvents_30.insert(ComplexOptPayoutAmount_30.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_30);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CollateralResponse::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_63;
      FIX::ComplexEventEndDate ComplexEventEndDate_63(FIX::UTCTIMESTAMP(2, 55, 36, 5, 8, 2008));
      noComplexEventDates_2_1_0.set(ComplexEventEndDate_63);
      ComplexEventDates_NoComplexEventDates_63.insert(ComplexEventEndDate_63.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_63(FIX::UTCTIMESTAMP(22, 57, 16, 16, 11, 2009));
      noComplexEventDates_2_1_0.set(ComplexEventStartDate_63);
      ComplexEventDates_NoComplexEventDates_63.insert(ComplexEventStartDate_63.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_63);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_133;
        FIX::ComplexEventEndTime ComplexEventEndTime_133(FIX::UTCTIMEONLY(19, 31, 37));
        noComplexEventTimes_2_0_2_0.set(ComplexEventEndTime_133);
        ComplexEventTimes_NoComplexEventTimes_133.insert(ComplexEventEndTime_133.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_133(FIX::UTCTIMEONLY(7, 4, 3));
        noComplexEventTimes_2_0_2_0.set(ComplexEventStartTime_133);
        ComplexEventTimes_NoComplexEventTimes_133.insert(ComplexEventStartTime_133.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_133);

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      {
        FIX50SP2::CollateralResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_134;
        FIX::ComplexEventEndTime ComplexEventEndTime_134(FIX::UTCTIMEONLY(4, 5, 20));
        noComplexEventTimes_2_0_2_1.set(ComplexEventEndTime_134);
        ComplexEventTimes_NoComplexEventTimes_134.insert(ComplexEventEndTime_134.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_134(FIX::UTCTIMEONLY(23, 49, 38));
        noComplexEventTimes_2_0_2_1.set(ComplexEventStartTime_134);
        ComplexEventTimes_NoComplexEventTimes_134.insert(ComplexEventStartTime_134.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_134);

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_1);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_0);
    }
    {
      FIX50SP2::CollateralResponse::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_64;
      FIX::ComplexEventEndDate ComplexEventEndDate_64(FIX::UTCTIMESTAMP(7, 25, 21, 1, 2, 2011));
      noComplexEventDates_2_1_1.set(ComplexEventEndDate_64);
      ComplexEventDates_NoComplexEventDates_64.insert(ComplexEventEndDate_64.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_64(FIX::UTCTIMESTAMP(15, 49, 39, 23, 4, 2007));
      noComplexEventDates_2_1_1.set(ComplexEventStartDate_64);
      ComplexEventDates_NoComplexEventDates_64.insert(ComplexEventStartDate_64.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_64);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_135;
        FIX::ComplexEventEndTime ComplexEventEndTime_135(FIX::UTCTIMEONLY(14, 0, 58));
        noComplexEventTimes_2_1_2_0.set(ComplexEventEndTime_135);
        ComplexEventTimes_NoComplexEventTimes_135.insert(ComplexEventEndTime_135.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_135(FIX::UTCTIMEONLY(23, 3, 41));
        noComplexEventTimes_2_1_2_0.set(ComplexEventStartTime_135);
        ComplexEventTimes_NoComplexEventTimes_135.insert(ComplexEventStartTime_135.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_135);

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_0);
      }
      {
        FIX50SP2::CollateralResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_136;
        FIX::ComplexEventEndTime ComplexEventEndTime_136(FIX::UTCTIMEONLY(23, 46, 1));
        noComplexEventTimes_2_1_2_1.set(ComplexEventEndTime_136);
        ComplexEventTimes_NoComplexEventTimes_136.insert(ComplexEventEndTime_136.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_136(FIX::UTCTIMEONLY(14, 42, 26));
        noComplexEventTimes_2_1_2_1.set(ComplexEventStartTime_136);
        ComplexEventTimes_NoComplexEventTimes_136.insert(ComplexEventStartTime_136.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_136);

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_1);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_1);
    }
    msg.addGroup(noComplexEvents_0_2);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::CollateralResponse::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_22;
    FIX::EventDate EventDate_22("LOCALMKTDATE_328119281");
    noEvents_0_0.set(EventDate_22);
    EvntGrp_NoEvents_22.insert(EventDate_22.getString());
    FIX::EventPx EventPx_22;
    EventPx_22.setString("8849242");
    noEvents_0_0.set(EventPx_22);
    EvntGrp_NoEvents_22.insert(EventPx_22.getString());
    FIX::EventText EventText_22("STRING_332279792");
    noEvents_0_0.set(EventText_22);
    EvntGrp_NoEvents_22.insert(EventText_22.getString());
    FIX::EventTime EventTime_22(FIX::UTCTIMESTAMP(9, 31, 6, 24, 9, 2015));
    noEvents_0_0.set(EventTime_22);
    EvntGrp_NoEvents_22.insert(EventTime_22.getString());
    FIX::EventType EventType_22(4);
    noEvents_0_0.set(EventType_22);
    EvntGrp_NoEvents_22.insert(EventType_22.getString());
    all_values.push_back(EvntGrp_NoEvents_22);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::CollateralResponse::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_23;
    FIX::EventDate EventDate_23("LOCALMKTDATE_1382891699");
    noEvents_0_1.set(EventDate_23);
    EvntGrp_NoEvents_23.insert(EventDate_23.getString());
    FIX::EventPx EventPx_23;
    EventPx_23.setString("9606186");
    noEvents_0_1.set(EventPx_23);
    EvntGrp_NoEvents_23.insert(EventPx_23.getString());
    FIX::EventText EventText_23("STRING_673514192");
    noEvents_0_1.set(EventText_23);
    EvntGrp_NoEvents_23.insert(EventText_23.getString());
    FIX::EventTime EventTime_23(FIX::UTCTIMESTAMP(7, 24, 11, 0, 12, 2008));
    noEvents_0_1.set(EventTime_23);
    EvntGrp_NoEvents_23.insert(EventTime_23.getString());
    FIX::EventType EventType_23(18);
    noEvents_0_1.set(EventType_23);
    EvntGrp_NoEvents_23.insert(EventType_23.getString());
    all_values.push_back(EvntGrp_NoEvents_23);

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::CollateralResponse::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_19;
    FIX::InstrumentPartyID InstrumentPartyID_19("STRING_1913505805");
    noInstrumentParties_0_0.set(InstrumentPartyID_19);
    InstrumentParties_NoInstrumentParties_19.insert(InstrumentPartyID_19.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_19('7');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_19);
    InstrumentParties_NoInstrumentParties_19.insert(InstrumentPartyIDSource_19.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_19(293829229);
    noInstrumentParties_0_0.set(InstrumentPartyRole_19);
    InstrumentParties_NoInstrumentParties_19.insert(InstrumentPartyRole_19.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_19);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CollateralResponse::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_43;
      FIX::InstrumentPartySubID InstrumentPartySubID_43("STRING_1033476462");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_43);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_43.insert(InstrumentPartySubID_43.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_43(1824667111);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_43);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_43.insert(InstrumentPartySubIDType_43.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_43);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::CollateralResponse::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_44;
      FIX::InstrumentPartySubID InstrumentPartySubID_44("STRING_1502054971");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_44);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_44.insert(InstrumentPartySubID_44.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_44(1016399813);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_44);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_44.insert(InstrumentPartySubIDType_44.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_44);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::CollateralResponse::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_20;
    FIX::InstrumentPartyID InstrumentPartyID_20("STRING_5302744");
    noInstrumentParties_0_1.set(InstrumentPartyID_20);
    InstrumentParties_NoInstrumentParties_20.insert(InstrumentPartyID_20.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_20('2');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_20);
    InstrumentParties_NoInstrumentParties_20.insert(InstrumentPartyIDSource_20.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_20(1348679605);
    noInstrumentParties_0_1.set(InstrumentPartyRole_20);
    InstrumentParties_NoInstrumentParties_20.insert(InstrumentPartyRole_20.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_20);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CollateralResponse::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_45;
      FIX::InstrumentPartySubID InstrumentPartySubID_45("STRING_1646270596");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_45);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_45.insert(InstrumentPartySubID_45.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_45(144756048);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_45);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_45.insert(InstrumentPartySubIDType_45.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_45);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::CollateralResponse::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_46;
      FIX::InstrumentPartySubID InstrumentPartySubID_46("STRING_1858846313");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_46);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_46.insert(InstrumentPartySubID_46.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_46(1079975924);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_46);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_46.insert(InstrumentPartySubIDType_46.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_46);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::CollateralResponse::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_47;
      FIX::InstrumentPartySubID InstrumentPartySubID_47("STRING_1359927369");
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubID_47);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_47.insert(InstrumentPartySubID_47.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_47(42995670);
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubIDType_47);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_47.insert(InstrumentPartySubIDType_47.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_47);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_2);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::CollateralResponse::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_21;
    FIX::InstrumentPartyID InstrumentPartyID_21("STRING_1281184488");
    noInstrumentParties_0_2.set(InstrumentPartyID_21);
    InstrumentParties_NoInstrumentParties_21.insert(InstrumentPartyID_21.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_21('5');
    noInstrumentParties_0_2.set(InstrumentPartyIDSource_21);
    InstrumentParties_NoInstrumentParties_21.insert(InstrumentPartyIDSource_21.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_21(1003614311);
    noInstrumentParties_0_2.set(InstrumentPartyRole_21);
    InstrumentParties_NoInstrumentParties_21.insert(InstrumentPartyRole_21.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_21);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CollateralResponse::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_48;
      FIX::InstrumentPartySubID InstrumentPartySubID_48("STRING_1836067761");
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubID_48);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_48.insert(InstrumentPartySubID_48.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_48(797946982);
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubIDType_48);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_48.insert(InstrumentPartySubIDType_48.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_48);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::CollateralResponse::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_49;
      FIX::InstrumentPartySubID InstrumentPartySubID_49("STRING_249422496");
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubID_49);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_49.insert(InstrumentPartySubID_49.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_49(2018863892);
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubIDType_49);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_49.insert(InstrumentPartySubIDType_49.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_49);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_1);
    }
    {
      FIX50SP2::CollateralResponse::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_50;
      FIX::InstrumentPartySubID InstrumentPartySubID_50("STRING_1666965678");
      noInstrumentPartySubIDs_2_1_2.set(InstrumentPartySubID_50);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_50.insert(InstrumentPartySubID_50.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_50(18680151);
      noInstrumentPartySubIDs_2_1_2.set(InstrumentPartySubIDType_50);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_50.insert(InstrumentPartySubIDType_50.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_50);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_2);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::CollateralResponse::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_24;
    FIX::SecurityAltID SecurityAltID_24("STRING_919867848");
    noSecurityAltID_0_0.set(SecurityAltID_24);
    SecAltIDGrp_NoSecurityAltID_24.insert(SecurityAltID_24.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_24("STRING_354212807");
    noSecurityAltID_0_0.set(SecurityAltIDSource_24);
    SecAltIDGrp_NoSecurityAltID_24.insert(SecurityAltIDSource_24.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_24);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::CollateralResponse::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_25;
    FIX::SecurityAltID SecurityAltID_25("STRING_1499680735");
    noSecurityAltID_0_1.set(SecurityAltID_25);
    SecAltIDGrp_NoSecurityAltID_25.insert(SecurityAltID_25.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_25("STRING_1682010664");
    noSecurityAltID_0_1.set(SecurityAltIDSource_25);
    SecAltIDGrp_NoSecurityAltID_25.insert(SecurityAltIDSource_25.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_25);

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::CollateralResponse::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_26;
    FIX::SecurityAltID SecurityAltID_26("STRING_648042036");
    noSecurityAltID_0_2.set(SecurityAltID_26);
    SecAltIDGrp_NoSecurityAltID_26.insert(SecurityAltID_26.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_26("STRING_1316657940");
    noSecurityAltID_0_2.set(SecurityAltIDSource_26);
    SecAltIDGrp_NoSecurityAltID_26.insert(SecurityAltIDSource_26.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_26);

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_24;
  FIX::SecurityXML SecurityXML_25("XMLDATA_568003478");
  msg.set(SecurityXML_25);
  FIX::SecurityXMLLen SecurityXMLLen_12(325225499);
  msg.set(SecurityXMLLen_12);
  FIX::SecurityXMLSchema SecurityXMLSchema_12("STRING_671229263");
  msg.set(SecurityXMLSchema_12);
  SecurityXML_24.insert(SecurityXMLSchema_12.getString());
  all_values.push_back(SecurityXML_24);

  // MiscFeesGrp
  // Group MiscFeesGrp.NoMiscFees
  {
    FIX50SP2::CollateralResponse::NoMiscFees noMiscFees_0_0;
    // MiscFeesGrp.NoMiscFees
    multiset<string> MiscFeesGrp_NoMiscFees_16;
    FIX::MiscFeeAmt MiscFeeAmt_16;
    MiscFeeAmt_16.setString("3305282");
    noMiscFees_0_0.set(MiscFeeAmt_16);
    MiscFeesGrp_NoMiscFees_16.insert(MiscFeeAmt_16.getString());
    FIX::MiscFeeBasis MiscFeeBasis_16(1);
    noMiscFees_0_0.set(MiscFeeBasis_16);
    MiscFeesGrp_NoMiscFees_16.insert(MiscFeeBasis_16.getString());
    FIX::MiscFeeCurr MiscFeeCurr_16("GBP");
    noMiscFees_0_0.set(MiscFeeCurr_16);
    MiscFeesGrp_NoMiscFees_16.insert(MiscFeeCurr_16.getString());
    FIX::MiscFeeType MiscFeeType_16("STRING_12");
    noMiscFees_0_0.set(MiscFeeType_16);
    MiscFeesGrp_NoMiscFees_16.insert(MiscFeeType_16.getString());
    all_values.push_back(MiscFeesGrp_NoMiscFees_16);

    msg.addGroup(noMiscFees_0_0);
  }
  {
    FIX50SP2::CollateralResponse::NoMiscFees noMiscFees_0_1;
    // MiscFeesGrp.NoMiscFees
    multiset<string> MiscFeesGrp_NoMiscFees_17;
    FIX::MiscFeeAmt MiscFeeAmt_17;
    MiscFeeAmt_17.setString("9303552");
    noMiscFees_0_1.set(MiscFeeAmt_17);
    MiscFeesGrp_NoMiscFees_17.insert(MiscFeeAmt_17.getString());
    FIX::MiscFeeBasis MiscFeeBasis_17(2);
    noMiscFees_0_1.set(MiscFeeBasis_17);
    MiscFeesGrp_NoMiscFees_17.insert(MiscFeeBasis_17.getString());
    FIX::MiscFeeCurr MiscFeeCurr_17("EUR");
    noMiscFees_0_1.set(MiscFeeCurr_17);
    MiscFeesGrp_NoMiscFees_17.insert(MiscFeeCurr_17.getString());
    FIX::MiscFeeType MiscFeeType_17("STRING_3");
    noMiscFees_0_1.set(MiscFeeType_17);
    MiscFeesGrp_NoMiscFees_17.insert(MiscFeeType_17.getString());
    all_values.push_back(MiscFeesGrp_NoMiscFees_17);

    msg.addGroup(noMiscFees_0_1);
  }
  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::CollateralResponse::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_31;
    FIX::PartyID PartyID_31("STRING_738134438");
    noPartyIDs_0_0.set(PartyID_31);
    Parties_NoPartyIDs_31.insert(PartyID_31.getString());
    FIX::PartyIDSource PartyIDSource_31('9');
    noPartyIDs_0_0.set(PartyIDSource_31);
    Parties_NoPartyIDs_31.insert(PartyIDSource_31.getString());
    FIX::PartyRole PartyRole_31(30);
    noPartyIDs_0_0.set(PartyRole_31);
    Parties_NoPartyIDs_31.insert(PartyRole_31.getString());
    all_values.push_back(Parties_NoPartyIDs_31);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::CollateralResponse::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_64;
      FIX::PartySubID PartySubID_64("STRING_1524894931");
      noPartySubIDs_0_1_0.set(PartySubID_64);
      PtysSubGrp_NoPartySubIDs_64.insert(PartySubID_64.getString());
      FIX::PartySubIDType PartySubIDType_64(23);
      noPartySubIDs_0_1_0.set(PartySubIDType_64);
      PtysSubGrp_NoPartySubIDs_64.insert(PartySubIDType_64.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_64);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::CollateralResponse::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_32;
    FIX::PartyID PartyID_32("STRING_298098795");
    noPartyIDs_0_1.set(PartyID_32);
    Parties_NoPartyIDs_32.insert(PartyID_32.getString());
    FIX::PartyIDSource PartyIDSource_32('1');
    noPartyIDs_0_1.set(PartyIDSource_32);
    Parties_NoPartyIDs_32.insert(PartyIDSource_32.getString());
    FIX::PartyRole PartyRole_32(45);
    noPartyIDs_0_1.set(PartyRole_32);
    Parties_NoPartyIDs_32.insert(PartyRole_32.getString());
    all_values.push_back(Parties_NoPartyIDs_32);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::CollateralResponse::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_65;
      FIX::PartySubID PartySubID_65("STRING_1964244809");
      noPartySubIDs_1_1_0.set(PartySubID_65);
      PtysSubGrp_NoPartySubIDs_65.insert(PartySubID_65.getString());
      FIX::PartySubIDType PartySubIDType_65(10);
      noPartySubIDs_1_1_0.set(PartySubIDType_65);
      PtysSubGrp_NoPartySubIDs_65.insert(PartySubIDType_65.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_65);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::CollateralResponse::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_66;
      FIX::PartySubID PartySubID_66("STRING_1383954460");
      noPartySubIDs_1_1_1.set(PartySubID_66);
      PtysSubGrp_NoPartySubIDs_66.insert(PartySubID_66.getString());
      FIX::PartySubIDType PartySubIDType_66(2);
      noPartySubIDs_1_1_1.set(PartySubIDType_66);
      PtysSubGrp_NoPartySubIDs_66.insert(PartySubIDType_66.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_66);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::CollateralResponse::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_67;
      FIX::PartySubID PartySubID_67("STRING_1700761086");
      noPartySubIDs_1_1_2.set(PartySubID_67);
      PtysSubGrp_NoPartySubIDs_67.insert(PartySubID_67.getString());
      FIX::PartySubIDType PartySubIDType_67(12);
      noPartySubIDs_1_1_2.set(PartySubIDType_67);
      PtysSubGrp_NoPartySubIDs_67.insert(PartySubIDType_67.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_67);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_2);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_7;
  FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_7("CAN");
  msg.set(BenchmarkCurveCurrency_7);
  SpreadOrBenchmarkCurveData_7.insert(BenchmarkCurveCurrency_7.getString());
  FIX::BenchmarkCurveName BenchmarkCurveName_7("STRING_OTHER");
  msg.set(BenchmarkCurveName_7);
  SpreadOrBenchmarkCurveData_7.insert(BenchmarkCurveName_7.getString());
  FIX::BenchmarkCurvePoint BenchmarkCurvePoint_7("STRING_1503694946");
  msg.set(BenchmarkCurvePoint_7);
  SpreadOrBenchmarkCurveData_7.insert(BenchmarkCurvePoint_7.getString());
  FIX::BenchmarkPrice BenchmarkPrice_7;
  BenchmarkPrice_7.setString("2090311");
  msg.set(BenchmarkPrice_7);
  SpreadOrBenchmarkCurveData_7.insert(BenchmarkPrice_7.getString());
  FIX::BenchmarkPriceType BenchmarkPriceType_7(2135082866);
  msg.set(BenchmarkPriceType_7);
  SpreadOrBenchmarkCurveData_7.insert(BenchmarkPriceType_7.getString());
  FIX::BenchmarkSecurityID BenchmarkSecurityID_7("STRING_141810546");
  msg.set(BenchmarkSecurityID_7);
  SpreadOrBenchmarkCurveData_7.insert(BenchmarkSecurityID_7.getString());
  FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_7("STRING_178006483");
  msg.set(BenchmarkSecurityIDSource_7);
  SpreadOrBenchmarkCurveData_7.insert(BenchmarkSecurityIDSource_7.getString());
  FIX::Spread Spread_7;
  Spread_7.setString("3971110");
  msg.set(Spread_7);
  SpreadOrBenchmarkCurveData_7.insert(Spread_7.getString());
  all_values.push_back(SpreadOrBenchmarkCurveData_7);

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::CollateralResponse::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_13;
    FIX::StipulationType StipulationType_13("STRING_MAXSUBS");
    noStipulations_0_0.set(StipulationType_13);
    Stipulations_NoStipulations_13.insert(StipulationType_13.getString());
    FIX::StipulationValue StipulationValue_13("STRING_1886598742");
    noStipulations_0_0.set(StipulationValue_13);
    Stipulations_NoStipulations_13.insert(StipulationValue_13.getString());
    all_values.push_back(Stipulations_NoStipulations_13);

    msg.addGroup(noStipulations_0_0);
  }
  {
    FIX50SP2::CollateralResponse::NoStipulations noStipulations_0_1;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_14;
    FIX::StipulationType StipulationType_14("STRING_INTERNALPX");
    noStipulations_0_1.set(StipulationType_14);
    Stipulations_NoStipulations_14.insert(StipulationType_14.getString());
    FIX::StipulationValue StipulationValue_14("STRING_1729161736");
    noStipulations_0_1.set(StipulationValue_14);
    Stipulations_NoStipulations_14.insert(StipulationValue_14.getString());
    all_values.push_back(Stipulations_NoStipulations_14);

    msg.addGroup(noStipulations_0_1);
  }
  // TrdCollGrp
  // Group TrdCollGrp.NoTrades
  {
    FIX50SP2::CollateralResponse::NoTrades noTrades_0_0;
    // TrdCollGrp.NoTrades
    multiset<string> TrdCollGrp_NoTrades_9;
    FIX::SecondaryTradeReportID SecondaryTradeReportID_9("STRING_1953099298");
    noTrades_0_0.set(SecondaryTradeReportID_9);
    TrdCollGrp_NoTrades_9.insert(SecondaryTradeReportID_9.getString());
    FIX::TradeReportID TradeReportID_9("STRING_308626037");
    noTrades_0_0.set(TradeReportID_9);
    TrdCollGrp_NoTrades_9.insert(TradeReportID_9.getString());
    all_values.push_back(TrdCollGrp_NoTrades_9);

    msg.addGroup(noTrades_0_0);
  }
  // TrdRegTimestamps
  // Group TrdRegTimestamps.NoTrdRegTimestamps
  {
    FIX50SP2::CollateralResponse::NoTrdRegTimestamps noTrdRegTimestamps_0_0;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_9;
    FIX::DeskOrderHandlingInst DeskOrderHandlingInst_9("MULTIPLESTRINGVALUE_PEG");
    noTrdRegTimestamps_0_0.set(DeskOrderHandlingInst_9);
    TrdRegTimestamps_NoTrdRegTimestamps_9.insert(DeskOrderHandlingInst_9.getString());
    FIX::DeskType DeskType_9("STRING_IS");
    noTrdRegTimestamps_0_0.set(DeskType_9);
    TrdRegTimestamps_NoTrdRegTimestamps_9.insert(DeskType_9.getString());
    FIX::DeskTypeSource DeskTypeSource_9(1);
    noTrdRegTimestamps_0_0.set(DeskTypeSource_9);
    TrdRegTimestamps_NoTrdRegTimestamps_9.insert(DeskTypeSource_9.getString());
    FIX::TrdRegTimestamp TrdRegTimestamp_9(FIX::UTCTIMESTAMP(10, 1, 41, 3, 8, 2003));
    noTrdRegTimestamps_0_0.set(TrdRegTimestamp_9);
    TrdRegTimestamps_NoTrdRegTimestamps_9.insert(TrdRegTimestamp_9.getString());
    FIX::TrdRegTimestampOrigin TrdRegTimestampOrigin_9("STRING_2045947269");
    noTrdRegTimestamps_0_0.set(TrdRegTimestampOrigin_9);
    TrdRegTimestamps_NoTrdRegTimestamps_9.insert(TrdRegTimestampOrigin_9.getString());
    FIX::TrdRegTimestampType TrdRegTimestampType_9(3);
    noTrdRegTimestamps_0_0.set(TrdRegTimestampType_9);
    TrdRegTimestamps_NoTrdRegTimestamps_9.insert(TrdRegTimestampType_9.getString());
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_9);

    msg.addGroup(noTrdRegTimestamps_0_0);
  }
  {
    FIX50SP2::CollateralResponse::NoTrdRegTimestamps noTrdRegTimestamps_0_1;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_10;
    FIX::DeskOrderHandlingInst DeskOrderHandlingInst_10("MULTIPLESTRINGVALUE_TMO");
    noTrdRegTimestamps_0_1.set(DeskOrderHandlingInst_10);
    TrdRegTimestamps_NoTrdRegTimestamps_10.insert(DeskOrderHandlingInst_10.getString());
    FIX::DeskType DeskType_10("STRING_A");
    noTrdRegTimestamps_0_1.set(DeskType_10);
    TrdRegTimestamps_NoTrdRegTimestamps_10.insert(DeskType_10.getString());
    FIX::DeskTypeSource DeskTypeSource_10(1);
    noTrdRegTimestamps_0_1.set(DeskTypeSource_10);
    TrdRegTimestamps_NoTrdRegTimestamps_10.insert(DeskTypeSource_10.getString());
    FIX::TrdRegTimestamp TrdRegTimestamp_10(FIX::UTCTIMESTAMP(23, 26, 59, 5, 10, 2015));
    noTrdRegTimestamps_0_1.set(TrdRegTimestamp_10);
    TrdRegTimestamps_NoTrdRegTimestamps_10.insert(TrdRegTimestamp_10.getString());
    FIX::TrdRegTimestampOrigin TrdRegTimestampOrigin_10("STRING_387942964");
    noTrdRegTimestamps_0_1.set(TrdRegTimestampOrigin_10);
    TrdRegTimestamps_NoTrdRegTimestamps_10.insert(TrdRegTimestampOrigin_10.getString());
    FIX::TrdRegTimestampType TrdRegTimestampType_10(6);
    noTrdRegTimestamps_0_1.set(TrdRegTimestampType_10);
    TrdRegTimestamps_NoTrdRegTimestamps_10.insert(TrdRegTimestampType_10.getString());
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_10);

    msg.addGroup(noTrdRegTimestamps_0_1);
  }
  // UndInstrmtCollGrp
  // Group UndInstrmtCollGrp.NoUnderlyings
  {
    FIX50SP2::CollateralResponse::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtCollGrp.NoUnderlyings
    multiset<string> UndInstrmtCollGrp_NoUnderlyings_4;
    FIX::CollAction CollAction_4(1);
    noUnderlyings_0_0.set(CollAction_4);
    UndInstrmtCollGrp_NoUnderlyings_4.insert(CollAction_4.getString());
    all_values.push_back(UndInstrmtCollGrp_NoUnderlyings_4);

    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_21;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_21("DATA_335115568");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_21);
    UnderlyingInstrument_21.insert(EncodedUnderlyingIssuer_21.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_21(1914793289);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_21);
    UnderlyingInstrument_21.insert(EncodedUnderlyingIssuerLen_21.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_21("DATA_1408523475");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_21);
    UnderlyingInstrument_21.insert(EncodedUnderlyingSecurityDesc_21.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_21(643741606);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_21);
    UnderlyingInstrument_21.insert(EncodedUnderlyingSecurityDescLen_21.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_21;
    UnderlyingAdjustedQuantity_21.setString("5600168");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_21);
    UnderlyingInstrument_21.insert(UnderlyingAdjustedQuantity_21.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_21;
    UnderlyingAllocationPercent_21.setString("76.770000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_21);
    UnderlyingInstrument_21.insert(UnderlyingAllocationPercent_21.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_21;
    UnderlyingAttachmentPoint_21.setString("89.260000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_21);
    UnderlyingInstrument_21.insert(UnderlyingAttachmentPoint_21.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_21("STRING_2032550241");
    noUnderlyings_0_0.set(UnderlyingCFICode_21);
    UnderlyingInstrument_21.insert(UnderlyingCFICode_21.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_21("STRING_23807025");
    noUnderlyings_0_0.set(UnderlyingCPProgram_21);
    UnderlyingInstrument_21.insert(UnderlyingCPProgram_21.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_21("STRING_1060193208");
    noUnderlyings_0_0.set(UnderlyingCPRegType_21);
    UnderlyingInstrument_21.insert(UnderlyingCPRegType_21.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_21;
    UnderlyingCapValue_21.setString("20561061");
    noUnderlyings_0_0.set(UnderlyingCapValue_21);
    UnderlyingInstrument_21.insert(UnderlyingCapValue_21.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_21;
    UnderlyingCashAmount_21.setString("4385137");
    noUnderlyings_0_0.set(UnderlyingCashAmount_21);
    UnderlyingInstrument_21.insert(UnderlyingCashAmount_21.getString());
    FIX::UnderlyingCashType UnderlyingCashType_21("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_21);
    UnderlyingInstrument_21.insert(UnderlyingCashType_21.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_21;
    UnderlyingContractMultiplier_21.setString("9848975");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_21);
    UnderlyingInstrument_21.insert(UnderlyingContractMultiplier_21.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_21(89691280);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_21);
    UnderlyingInstrument_21.insert(UnderlyingContractMultiplierUnit_21.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_21("COUNTRY_1505832273");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_21);
    UnderlyingInstrument_21.insert(UnderlyingCountryOfIssue_21.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_21("LOCALMKTDATE_1614449954");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_21);
    UnderlyingInstrument_21.insert(UnderlyingCouponPaymentDate_21.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_21;
    UnderlyingCouponRate_21.setString("75.660000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_21);
    UnderlyingInstrument_21.insert(UnderlyingCouponRate_21.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_21("STRING_1323587549");
    noUnderlyings_0_0.set(UnderlyingCreditRating_21);
    UnderlyingInstrument_21.insert(UnderlyingCreditRating_21.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_21("EUR");
    noUnderlyings_0_0.set(UnderlyingCurrency_21);
    UnderlyingInstrument_21.insert(UnderlyingCurrency_21.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_21;
    UnderlyingCurrentValue_21.setString("4975541");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_21);
    UnderlyingInstrument_21.insert(UnderlyingCurrentValue_21.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_21;
    UnderlyingDetachmentPoint_21.setString("82.190000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_21);
    UnderlyingInstrument_21.insert(UnderlyingDetachmentPoint_21.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_21;
    UnderlyingDirtyPrice_21.setString("9914417");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_21);
    UnderlyingInstrument_21.insert(UnderlyingDirtyPrice_21.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_21;
    UnderlyingEndPrice_21.setString("19608148");
    noUnderlyings_0_0.set(UnderlyingEndPrice_21);
    UnderlyingInstrument_21.insert(UnderlyingEndPrice_21.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_21;
    UnderlyingEndValue_21.setString("15872012");
    noUnderlyings_0_0.set(UnderlyingEndValue_21);
    UnderlyingInstrument_21.insert(UnderlyingEndValue_21.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_21(657332628);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_21);
    UnderlyingInstrument_21.insert(UnderlyingExerciseStyle_21.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_21;
    UnderlyingFXRate_21.setString("2012742");
    noUnderlyings_0_0.set(UnderlyingFXRate_21);
    UnderlyingInstrument_21.insert(UnderlyingFXRate_21.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_21('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_21);
    UnderlyingInstrument_21.insert(UnderlyingFXRateCalc_21.getString());
    FIX::UnderlyingFactor UnderlyingFactor_21;
    UnderlyingFactor_21.setString("623386");
    noUnderlyings_0_0.set(UnderlyingFactor_21);
    UnderlyingInstrument_21.insert(UnderlyingFactor_21.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_21(1804182035);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_21);
    UnderlyingInstrument_21.insert(UnderlyingFlowScheduleType_21.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_21("STRING_528270649");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_21);
    UnderlyingInstrument_21.insert(UnderlyingInstrRegistry_21.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_21("LOCALMKTDATE_1977131901");
    noUnderlyings_0_0.set(UnderlyingIssueDate_21);
    UnderlyingInstrument_21.insert(UnderlyingIssueDate_21.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_21("STRING_1065221863");
    noUnderlyings_0_0.set(UnderlyingIssuer_21);
    UnderlyingInstrument_21.insert(UnderlyingIssuer_21.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_21("STRING_1172012255");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_21);
    UnderlyingInstrument_21.insert(UnderlyingLocaleOfIssue_21.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_21("LOCALMKTDATE_389665148");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_21);
    UnderlyingInstrument_21.insert(UnderlyingMaturityDate_21.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_21("MONTHYEAR_558595892");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_21);
    UnderlyingInstrument_21.insert(UnderlyingMaturityMonthYear_21.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_21("TZTIMEONLY_1501791181");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_21);
    UnderlyingInstrument_21.insert(UnderlyingMaturityTime_21.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_21;
    UnderlyingNotionalPercentageOutstanding_21.setString("17.420000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_21);
    UnderlyingInstrument_21.insert(UnderlyingNotionalPercentageOutstanding_21.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_21('5');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_21);
    UnderlyingInstrument_21.insert(UnderlyingOptAttribute_21.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_21;
    UnderlyingOriginalNotionalPercentageOutstanding_21.setString("7.420000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_21);
    UnderlyingInstrument_21.insert(UnderlyingOriginalNotionalPercentageOutstanding_21.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_21("STRING_183354276");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_21);
    UnderlyingInstrument_21.insert(UnderlyingPriceUnitOfMeasure_21.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_21;
    UnderlyingPriceUnitOfMeasureQty_21.setString("10209166");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_21);
    UnderlyingInstrument_21.insert(UnderlyingPriceUnitOfMeasureQty_21.getString());
    FIX::UnderlyingProduct UnderlyingProduct_21(2021869394);
    noUnderlyings_0_0.set(UnderlyingProduct_21);
    UnderlyingInstrument_21.insert(UnderlyingProduct_21.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_21(1168251802);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_21);
    UnderlyingInstrument_21.insert(UnderlyingPutOrCall_21.getString());
    FIX::UnderlyingPx UnderlyingPx_21;
    UnderlyingPx_21.setString("11106079");
    noUnderlyings_0_0.set(UnderlyingPx_21);
    UnderlyingInstrument_21.insert(UnderlyingPx_21.getString());
    FIX::UnderlyingQty UnderlyingQty_21;
    UnderlyingQty_21.setString("13802180");
    noUnderlyings_0_0.set(UnderlyingQty_21);
    UnderlyingInstrument_21.insert(UnderlyingQty_21.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_21("LOCALMKTDATE_635218108");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_21);
    UnderlyingInstrument_21.insert(UnderlyingRedemptionDate_21.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_21("STRING_1404605511");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_21);
    UnderlyingInstrument_21.insert(UnderlyingRepoCollateralSecurityType_21.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_21;
    UnderlyingRepurchaseRate_21.setString("19.200000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_21);
    UnderlyingInstrument_21.insert(UnderlyingRepurchaseRate_21.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_21(610239781);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_21);
    UnderlyingInstrument_21.insert(UnderlyingRepurchaseTerm_21.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_21("STRING_979783730");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_21);
    UnderlyingInstrument_21.insert(UnderlyingRestructuringType_21.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_21("STRING_1053876045");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_21);
    UnderlyingInstrument_21.insert(UnderlyingSecurityDesc_21.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_21("EXCHANGE_1302348000");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_21);
    UnderlyingInstrument_21.insert(UnderlyingSecurityExchange_21.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_21("STRING_1971225468");
    noUnderlyings_0_0.set(UnderlyingSecurityID_21);
    UnderlyingInstrument_21.insert(UnderlyingSecurityID_21.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_21("STRING_867207291");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_21);
    UnderlyingInstrument_21.insert(UnderlyingSecurityIDSource_21.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_21("STRING_742065600");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_21);
    UnderlyingInstrument_21.insert(UnderlyingSecuritySubType_21.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_21("STRING_481074448");
    noUnderlyings_0_0.set(UnderlyingSecurityType_21);
    UnderlyingInstrument_21.insert(UnderlyingSecurityType_21.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_21("STRING_1068481501");
    noUnderlyings_0_0.set(UnderlyingSeniority_21);
    UnderlyingInstrument_21.insert(UnderlyingSeniority_21.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_21("STRING_935220681");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_21);
    UnderlyingInstrument_21.insert(UnderlyingSettlMethod_21.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_21(5);
    noUnderlyings_0_0.set(UnderlyingSettlementType_21);
    UnderlyingInstrument_21.insert(UnderlyingSettlementType_21.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_21;
    UnderlyingStartValue_21.setString("7251798");
    noUnderlyings_0_0.set(UnderlyingStartValue_21);
    UnderlyingInstrument_21.insert(UnderlyingStartValue_21.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_21("STRING_1463491330");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_21);
    UnderlyingInstrument_21.insert(UnderlyingStateOrProvinceOfIssue_21.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_21("USD");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_21);
    UnderlyingInstrument_21.insert(UnderlyingStrikeCurrency_21.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_21;
    UnderlyingStrikePrice_21.setString("4880199");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_21);
    UnderlyingInstrument_21.insert(UnderlyingStrikePrice_21.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_21("STRING_762726461");
    noUnderlyings_0_0.set(UnderlyingSymbol_21);
    UnderlyingInstrument_21.insert(UnderlyingSymbol_21.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_21("STRING_201513996");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_21);
    UnderlyingInstrument_21.insert(UnderlyingSymbolSfx_21.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_21("STRING_1989811118");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_21);
    UnderlyingInstrument_21.insert(UnderlyingTimeUnit_21.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_21("STRING_1037458203");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_21);
    UnderlyingInstrument_21.insert(UnderlyingUnitOfMeasure_21.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_21;
    UnderlyingUnitOfMeasureQty_21.setString("7839169");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_21);
    UnderlyingInstrument_21.insert(UnderlyingUnitOfMeasureQty_21.getString());
    all_values.push_back(UnderlyingInstrument_21);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::CollateralResponse::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_44;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_44("STRING_1220812480");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_44);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_44.insert(UnderlyingSecurityAltID_44.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_44("STRING_1804833578");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_44);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_44.insert(UnderlyingSecurityAltIDSource_44.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_44);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::CollateralResponse::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_40;
      FIX::UnderlyingStipType UnderlyingStipType_40("STRING_241580634");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_40);
      UnderlyingStipulations_NoUnderlyingStips_40.insert(UnderlyingStipType_40.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_40("STRING_767957875");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_40);
      UnderlyingStipulations_NoUnderlyingStips_40.insert(UnderlyingStipValue_40.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_40);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::CollateralResponse::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_42;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_42("STRING_876798742");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_42);
      UndlyInstrumentParties_NoUndlyInstrumentParties_42.insert(UnderlyingInstrumentPartyID_42.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_42('2');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_42);
      UndlyInstrumentParties_NoUndlyInstrumentParties_42.insert(UnderlyingInstrumentPartyIDSource_42.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_42(2067753898);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_42);
      UndlyInstrumentParties_NoUndlyInstrumentParties_42.insert(UnderlyingInstrumentPartyRole_42.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_42);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_93;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_93("STRING_1004863468");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_93);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_93.insert(UnderlyingInstrumentPartySubID_93.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_93(974146295);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_93);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_93.insert(UnderlyingInstrumentPartySubIDType_93.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_93);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::CollateralResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_94;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_94("STRING_641902875");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_94);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_94.insert(UnderlyingInstrumentPartySubID_94.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_94(828605288);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_94);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_94.insert(UnderlyingInstrumentPartySubIDType_94.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_94);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::CollateralResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_95;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_95("STRING_1841353586");
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubID_95);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_95.insert(UnderlyingInstrumentPartySubID_95.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_95(1383968476);
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubIDType_95);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_95.insert(UnderlyingInstrumentPartySubIDType_95.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_95);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::CollateralResponse::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtCollGrp.NoUnderlyings
    multiset<string> UndInstrmtCollGrp_NoUnderlyings_5;
    FIX::CollAction CollAction_5(1);
    noUnderlyings_0_1.set(CollAction_5);
    UndInstrmtCollGrp_NoUnderlyings_5.insert(CollAction_5.getString());
    all_values.push_back(UndInstrmtCollGrp_NoUnderlyings_5);

    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_22;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_22("DATA_762351439");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_22);
    UnderlyingInstrument_22.insert(EncodedUnderlyingIssuer_22.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_22(171705509);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_22);
    UnderlyingInstrument_22.insert(EncodedUnderlyingIssuerLen_22.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_22("DATA_1853092797");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_22);
    UnderlyingInstrument_22.insert(EncodedUnderlyingSecurityDesc_22.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_22(1487531328);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_22);
    UnderlyingInstrument_22.insert(EncodedUnderlyingSecurityDescLen_22.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_22;
    UnderlyingAdjustedQuantity_22.setString("16351968");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_22);
    UnderlyingInstrument_22.insert(UnderlyingAdjustedQuantity_22.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_22;
    UnderlyingAllocationPercent_22.setString("4.620000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_22);
    UnderlyingInstrument_22.insert(UnderlyingAllocationPercent_22.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_22;
    UnderlyingAttachmentPoint_22.setString("94.320000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_22);
    UnderlyingInstrument_22.insert(UnderlyingAttachmentPoint_22.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_22("STRING_2123216776");
    noUnderlyings_0_1.set(UnderlyingCFICode_22);
    UnderlyingInstrument_22.insert(UnderlyingCFICode_22.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_22("STRING_841396923");
    noUnderlyings_0_1.set(UnderlyingCPProgram_22);
    UnderlyingInstrument_22.insert(UnderlyingCPProgram_22.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_22("STRING_1331963428");
    noUnderlyings_0_1.set(UnderlyingCPRegType_22);
    UnderlyingInstrument_22.insert(UnderlyingCPRegType_22.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_22;
    UnderlyingCapValue_22.setString("19655442");
    noUnderlyings_0_1.set(UnderlyingCapValue_22);
    UnderlyingInstrument_22.insert(UnderlyingCapValue_22.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_22;
    UnderlyingCashAmount_22.setString("18788551");
    noUnderlyings_0_1.set(UnderlyingCashAmount_22);
    UnderlyingInstrument_22.insert(UnderlyingCashAmount_22.getString());
    FIX::UnderlyingCashType UnderlyingCashType_22("STRING_FIXED");
    noUnderlyings_0_1.set(UnderlyingCashType_22);
    UnderlyingInstrument_22.insert(UnderlyingCashType_22.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_22;
    UnderlyingContractMultiplier_22.setString("748888");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_22);
    UnderlyingInstrument_22.insert(UnderlyingContractMultiplier_22.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_22(952183959);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_22);
    UnderlyingInstrument_22.insert(UnderlyingContractMultiplierUnit_22.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_22("COUNTRY_1773230272");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_22);
    UnderlyingInstrument_22.insert(UnderlyingCountryOfIssue_22.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_22("LOCALMKTDATE_206102769");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_22);
    UnderlyingInstrument_22.insert(UnderlyingCouponPaymentDate_22.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_22;
    UnderlyingCouponRate_22.setString("45.930000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_22);
    UnderlyingInstrument_22.insert(UnderlyingCouponRate_22.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_22("STRING_393704499");
    noUnderlyings_0_1.set(UnderlyingCreditRating_22);
    UnderlyingInstrument_22.insert(UnderlyingCreditRating_22.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_22("EUR");
    noUnderlyings_0_1.set(UnderlyingCurrency_22);
    UnderlyingInstrument_22.insert(UnderlyingCurrency_22.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_22;
    UnderlyingCurrentValue_22.setString("4187842");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_22);
    UnderlyingInstrument_22.insert(UnderlyingCurrentValue_22.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_22;
    UnderlyingDetachmentPoint_22.setString("49.970000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_22);
    UnderlyingInstrument_22.insert(UnderlyingDetachmentPoint_22.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_22;
    UnderlyingDirtyPrice_22.setString("14101182");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_22);
    UnderlyingInstrument_22.insert(UnderlyingDirtyPrice_22.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_22;
    UnderlyingEndPrice_22.setString("14236477");
    noUnderlyings_0_1.set(UnderlyingEndPrice_22);
    UnderlyingInstrument_22.insert(UnderlyingEndPrice_22.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_22;
    UnderlyingEndValue_22.setString("4644676");
    noUnderlyings_0_1.set(UnderlyingEndValue_22);
    UnderlyingInstrument_22.insert(UnderlyingEndValue_22.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_22(2052021086);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_22);
    UnderlyingInstrument_22.insert(UnderlyingExerciseStyle_22.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_22;
    UnderlyingFXRate_22.setString("1047693");
    noUnderlyings_0_1.set(UnderlyingFXRate_22);
    UnderlyingInstrument_22.insert(UnderlyingFXRate_22.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_22('D');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_22);
    UnderlyingInstrument_22.insert(UnderlyingFXRateCalc_22.getString());
    FIX::UnderlyingFactor UnderlyingFactor_22;
    UnderlyingFactor_22.setString("12885059");
    noUnderlyings_0_1.set(UnderlyingFactor_22);
    UnderlyingInstrument_22.insert(UnderlyingFactor_22.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_22(1414449082);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_22);
    UnderlyingInstrument_22.insert(UnderlyingFlowScheduleType_22.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_22("STRING_920689021");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_22);
    UnderlyingInstrument_22.insert(UnderlyingInstrRegistry_22.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_22("LOCALMKTDATE_1460211423");
    noUnderlyings_0_1.set(UnderlyingIssueDate_22);
    UnderlyingInstrument_22.insert(UnderlyingIssueDate_22.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_22("STRING_1120058231");
    noUnderlyings_0_1.set(UnderlyingIssuer_22);
    UnderlyingInstrument_22.insert(UnderlyingIssuer_22.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_22("STRING_260736702");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_22);
    UnderlyingInstrument_22.insert(UnderlyingLocaleOfIssue_22.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_22("LOCALMKTDATE_947924614");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_22);
    UnderlyingInstrument_22.insert(UnderlyingMaturityDate_22.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_22("MONTHYEAR_1198728693");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_22);
    UnderlyingInstrument_22.insert(UnderlyingMaturityMonthYear_22.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_22("TZTIMEONLY_1391186134");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_22);
    UnderlyingInstrument_22.insert(UnderlyingMaturityTime_22.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_22;
    UnderlyingNotionalPercentageOutstanding_22.setString("77.420000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_22);
    UnderlyingInstrument_22.insert(UnderlyingNotionalPercentageOutstanding_22.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_22('2');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_22);
    UnderlyingInstrument_22.insert(UnderlyingOptAttribute_22.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_22;
    UnderlyingOriginalNotionalPercentageOutstanding_22.setString("59.150000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_22);
    UnderlyingInstrument_22.insert(UnderlyingOriginalNotionalPercentageOutstanding_22.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_22("STRING_741718341");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_22);
    UnderlyingInstrument_22.insert(UnderlyingPriceUnitOfMeasure_22.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_22;
    UnderlyingPriceUnitOfMeasureQty_22.setString("17714970");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_22);
    UnderlyingInstrument_22.insert(UnderlyingPriceUnitOfMeasureQty_22.getString());
    FIX::UnderlyingProduct UnderlyingProduct_22(544062609);
    noUnderlyings_0_1.set(UnderlyingProduct_22);
    UnderlyingInstrument_22.insert(UnderlyingProduct_22.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_22(816607152);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_22);
    UnderlyingInstrument_22.insert(UnderlyingPutOrCall_22.getString());
    FIX::UnderlyingPx UnderlyingPx_22;
    UnderlyingPx_22.setString("5761974");
    noUnderlyings_0_1.set(UnderlyingPx_22);
    UnderlyingInstrument_22.insert(UnderlyingPx_22.getString());
    FIX::UnderlyingQty UnderlyingQty_22;
    UnderlyingQty_22.setString("1698092");
    noUnderlyings_0_1.set(UnderlyingQty_22);
    UnderlyingInstrument_22.insert(UnderlyingQty_22.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_22("LOCALMKTDATE_1022709921");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_22);
    UnderlyingInstrument_22.insert(UnderlyingRedemptionDate_22.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_22("STRING_1769962000");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_22);
    UnderlyingInstrument_22.insert(UnderlyingRepoCollateralSecurityType_22.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_22;
    UnderlyingRepurchaseRate_22.setString("37.320000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_22);
    UnderlyingInstrument_22.insert(UnderlyingRepurchaseRate_22.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_22(592761020);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_22);
    UnderlyingInstrument_22.insert(UnderlyingRepurchaseTerm_22.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_22("STRING_1693041687");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_22);
    UnderlyingInstrument_22.insert(UnderlyingRestructuringType_22.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_22("STRING_982297969");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_22);
    UnderlyingInstrument_22.insert(UnderlyingSecurityDesc_22.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_22("EXCHANGE_83082369");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_22);
    UnderlyingInstrument_22.insert(UnderlyingSecurityExchange_22.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_22("STRING_955676250");
    noUnderlyings_0_1.set(UnderlyingSecurityID_22);
    UnderlyingInstrument_22.insert(UnderlyingSecurityID_22.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_22("STRING_258462026");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_22);
    UnderlyingInstrument_22.insert(UnderlyingSecurityIDSource_22.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_22("STRING_547550013");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_22);
    UnderlyingInstrument_22.insert(UnderlyingSecuritySubType_22.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_22("STRING_860213689");
    noUnderlyings_0_1.set(UnderlyingSecurityType_22);
    UnderlyingInstrument_22.insert(UnderlyingSecurityType_22.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_22("STRING_363231371");
    noUnderlyings_0_1.set(UnderlyingSeniority_22);
    UnderlyingInstrument_22.insert(UnderlyingSeniority_22.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_22("STRING_705887595");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_22);
    UnderlyingInstrument_22.insert(UnderlyingSettlMethod_22.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_22(2);
    noUnderlyings_0_1.set(UnderlyingSettlementType_22);
    UnderlyingInstrument_22.insert(UnderlyingSettlementType_22.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_22;
    UnderlyingStartValue_22.setString("17776804");
    noUnderlyings_0_1.set(UnderlyingStartValue_22);
    UnderlyingInstrument_22.insert(UnderlyingStartValue_22.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_22("STRING_1626576617");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_22);
    UnderlyingInstrument_22.insert(UnderlyingStateOrProvinceOfIssue_22.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_22("EUR");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_22);
    UnderlyingInstrument_22.insert(UnderlyingStrikeCurrency_22.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_22;
    UnderlyingStrikePrice_22.setString("18873133");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_22);
    UnderlyingInstrument_22.insert(UnderlyingStrikePrice_22.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_22("STRING_261888345");
    noUnderlyings_0_1.set(UnderlyingSymbol_22);
    UnderlyingInstrument_22.insert(UnderlyingSymbol_22.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_22("STRING_1948983731");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_22);
    UnderlyingInstrument_22.insert(UnderlyingSymbolSfx_22.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_22("STRING_1131015805");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_22);
    UnderlyingInstrument_22.insert(UnderlyingTimeUnit_22.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_22("STRING_1185546088");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_22);
    UnderlyingInstrument_22.insert(UnderlyingUnitOfMeasure_22.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_22;
    UnderlyingUnitOfMeasureQty_22.setString("18416257");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_22);
    UnderlyingInstrument_22.insert(UnderlyingUnitOfMeasureQty_22.getString());
    all_values.push_back(UnderlyingInstrument_22);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::CollateralResponse::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_45;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_45("STRING_1927264429");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_45);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_45.insert(UnderlyingSecurityAltID_45.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_45("STRING_1465639148");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_45);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_45.insert(UnderlyingSecurityAltIDSource_45.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_45);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::CollateralResponse::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_46;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_46("STRING_103260681");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_46);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_46.insert(UnderlyingSecurityAltID_46.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_46("STRING_596387933");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_46);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_46.insert(UnderlyingSecurityAltIDSource_46.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_46);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::CollateralResponse::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_47;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_47("STRING_2041836555");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltID_47);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_47.insert(UnderlyingSecurityAltID_47.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_47("STRING_273069914");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltIDSource_47);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_47.insert(UnderlyingSecurityAltIDSource_47.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_47);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::CollateralResponse::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_41;
      FIX::UnderlyingStipType UnderlyingStipType_41("STRING_1664314907");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_41);
      UnderlyingStipulations_NoUnderlyingStips_41.insert(UnderlyingStipType_41.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_41("STRING_836583646");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_41);
      UnderlyingStipulations_NoUnderlyingStips_41.insert(UnderlyingStipValue_41.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_41);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::CollateralResponse::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_42;
      FIX::UnderlyingStipType UnderlyingStipType_42("STRING_64375227");
      noUnderlyingStips_1_1_1.set(UnderlyingStipType_42);
      UnderlyingStipulations_NoUnderlyingStips_42.insert(UnderlyingStipType_42.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_42("STRING_1209872946");
      noUnderlyingStips_1_1_1.set(UnderlyingStipValue_42);
      UnderlyingStipulations_NoUnderlyingStips_42.insert(UnderlyingStipValue_42.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_42);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    {
      FIX50SP2::CollateralResponse::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_43;
      FIX::UnderlyingStipType UnderlyingStipType_43("STRING_1818881615");
      noUnderlyingStips_1_1_2.set(UnderlyingStipType_43);
      UnderlyingStipulations_NoUnderlyingStips_43.insert(UnderlyingStipType_43.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_43("STRING_147457596");
      noUnderlyingStips_1_1_2.set(UnderlyingStipValue_43);
      UnderlyingStipulations_NoUnderlyingStips_43.insert(UnderlyingStipValue_43.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_43);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::CollateralResponse::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_43;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_43("STRING_2077343641");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_43);
      UndlyInstrumentParties_NoUndlyInstrumentParties_43.insert(UnderlyingInstrumentPartyID_43.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_43('6');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_43);
      UndlyInstrumentParties_NoUndlyInstrumentParties_43.insert(UnderlyingInstrumentPartyIDSource_43.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_43(878279238);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_43);
      UndlyInstrumentParties_NoUndlyInstrumentParties_43.insert(UnderlyingInstrumentPartyRole_43.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_43);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_96;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_96("STRING_1400895205");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_96);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_96.insert(UnderlyingInstrumentPartySubID_96.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_96(879515193);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_96);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_96.insert(UnderlyingInstrumentPartySubIDType_96.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_96);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::CollateralResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_97;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_97("STRING_2070771819");
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubID_97);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_97.insert(UnderlyingInstrumentPartySubID_97.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_97(879988174);
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubIDType_97);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_97.insert(UnderlyingInstrumentPartySubIDType_97.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_97);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::CollateralResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_98;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_98("STRING_193478924");
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubID_98);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_98.insert(UnderlyingInstrumentPartySubID_98.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_98(673543208);
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubIDType_98);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_98.insert(UnderlyingInstrumentPartySubIDType_98.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_98);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::CollateralResponse::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_44;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_44("STRING_619817845");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_44);
      UndlyInstrumentParties_NoUndlyInstrumentParties_44.insert(UnderlyingInstrumentPartyID_44.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_44('4');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_44);
      UndlyInstrumentParties_NoUndlyInstrumentParties_44.insert(UnderlyingInstrumentPartyIDSource_44.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_44(475043291);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_44);
      UndlyInstrumentParties_NoUndlyInstrumentParties_44.insert(UnderlyingInstrumentPartyRole_44.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_44);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_99;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_99("STRING_1640913358");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_99);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_99.insert(UnderlyingInstrumentPartySubID_99.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_99(169185343);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_99);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_99.insert(UnderlyingInstrumentPartySubIDType_99.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_99);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    {
      FIX50SP2::CollateralResponse::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_45;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_45("STRING_1310031723");
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyID_45);
      UndlyInstrumentParties_NoUndlyInstrumentParties_45.insert(UnderlyingInstrumentPartyID_45.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_45('1');
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyIDSource_45);
      UndlyInstrumentParties_NoUndlyInstrumentParties_45.insert(UnderlyingInstrumentPartyIDSource_45.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_45(1634824491);
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyRole_45);
      UndlyInstrumentParties_NoUndlyInstrumentParties_45.insert(UnderlyingInstrumentPartyRole_45.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_45);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_100;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_100("STRING_2017082072");
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubID_100);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_100.insert(UnderlyingInstrumentPartySubID_100.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_100(1529177398);
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubIDType_100);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_100.insert(UnderlyingInstrumentPartySubIDType_100.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_100);

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::CollateralResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_101;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_101("STRING_1686362319");
        noUndlyInstrumentPartySubIDs_1_2_2_1.set(UnderlyingInstrumentPartySubID_101);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_101.insert(UnderlyingInstrumentPartySubID_101.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_101(1488696278);
        noUndlyInstrumentPartySubIDs_1_2_2_1.set(UnderlyingInstrumentPartySubIDType_101);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_101.insert(UnderlyingInstrumentPartySubIDType_101.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_101);

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_2);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  {
    FIX50SP2::CollateralResponse::NoUnderlyings noUnderlyings_0_2;
    // UndInstrmtCollGrp.NoUnderlyings
    multiset<string> UndInstrmtCollGrp_NoUnderlyings_6;
    FIX::CollAction CollAction_6(1);
    noUnderlyings_0_2.set(CollAction_6);
    UndInstrmtCollGrp_NoUnderlyings_6.insert(CollAction_6.getString());
    all_values.push_back(UndInstrmtCollGrp_NoUnderlyings_6);

    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_23;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_23("DATA_375462318");
    noUnderlyings_0_2.set(EncodedUnderlyingIssuer_23);
    UnderlyingInstrument_23.insert(EncodedUnderlyingIssuer_23.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_23(1553071505);
    noUnderlyings_0_2.set(EncodedUnderlyingIssuerLen_23);
    UnderlyingInstrument_23.insert(EncodedUnderlyingIssuerLen_23.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_23("DATA_108397956");
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDesc_23);
    UnderlyingInstrument_23.insert(EncodedUnderlyingSecurityDesc_23.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_23(46860285);
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDescLen_23);
    UnderlyingInstrument_23.insert(EncodedUnderlyingSecurityDescLen_23.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_23;
    UnderlyingAdjustedQuantity_23.setString("17005291");
    noUnderlyings_0_2.set(UnderlyingAdjustedQuantity_23);
    UnderlyingInstrument_23.insert(UnderlyingAdjustedQuantity_23.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_23;
    UnderlyingAllocationPercent_23.setString("35.050000");
    noUnderlyings_0_2.set(UnderlyingAllocationPercent_23);
    UnderlyingInstrument_23.insert(UnderlyingAllocationPercent_23.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_23;
    UnderlyingAttachmentPoint_23.setString("39.270000");
    noUnderlyings_0_2.set(UnderlyingAttachmentPoint_23);
    UnderlyingInstrument_23.insert(UnderlyingAttachmentPoint_23.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_23("STRING_248053064");
    noUnderlyings_0_2.set(UnderlyingCFICode_23);
    UnderlyingInstrument_23.insert(UnderlyingCFICode_23.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_23("STRING_1004742743");
    noUnderlyings_0_2.set(UnderlyingCPProgram_23);
    UnderlyingInstrument_23.insert(UnderlyingCPProgram_23.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_23("STRING_269811644");
    noUnderlyings_0_2.set(UnderlyingCPRegType_23);
    UnderlyingInstrument_23.insert(UnderlyingCPRegType_23.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_23;
    UnderlyingCapValue_23.setString("16489482");
    noUnderlyings_0_2.set(UnderlyingCapValue_23);
    UnderlyingInstrument_23.insert(UnderlyingCapValue_23.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_23;
    UnderlyingCashAmount_23.setString("18842579");
    noUnderlyings_0_2.set(UnderlyingCashAmount_23);
    UnderlyingInstrument_23.insert(UnderlyingCashAmount_23.getString());
    FIX::UnderlyingCashType UnderlyingCashType_23("STRING_DIFF");
    noUnderlyings_0_2.set(UnderlyingCashType_23);
    UnderlyingInstrument_23.insert(UnderlyingCashType_23.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_23;
    UnderlyingContractMultiplier_23.setString("3814527");
    noUnderlyings_0_2.set(UnderlyingContractMultiplier_23);
    UnderlyingInstrument_23.insert(UnderlyingContractMultiplier_23.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_23(2077736861);
    noUnderlyings_0_2.set(UnderlyingContractMultiplierUnit_23);
    UnderlyingInstrument_23.insert(UnderlyingContractMultiplierUnit_23.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_23("COUNTRY_866643023");
    noUnderlyings_0_2.set(UnderlyingCountryOfIssue_23);
    UnderlyingInstrument_23.insert(UnderlyingCountryOfIssue_23.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_23("LOCALMKTDATE_1001270641");
    noUnderlyings_0_2.set(UnderlyingCouponPaymentDate_23);
    UnderlyingInstrument_23.insert(UnderlyingCouponPaymentDate_23.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_23;
    UnderlyingCouponRate_23.setString("4.830000");
    noUnderlyings_0_2.set(UnderlyingCouponRate_23);
    UnderlyingInstrument_23.insert(UnderlyingCouponRate_23.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_23("STRING_1341686315");
    noUnderlyings_0_2.set(UnderlyingCreditRating_23);
    UnderlyingInstrument_23.insert(UnderlyingCreditRating_23.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_23("EUR");
    noUnderlyings_0_2.set(UnderlyingCurrency_23);
    UnderlyingInstrument_23.insert(UnderlyingCurrency_23.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_23;
    UnderlyingCurrentValue_23.setString("15108716");
    noUnderlyings_0_2.set(UnderlyingCurrentValue_23);
    UnderlyingInstrument_23.insert(UnderlyingCurrentValue_23.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_23;
    UnderlyingDetachmentPoint_23.setString("23.680000");
    noUnderlyings_0_2.set(UnderlyingDetachmentPoint_23);
    UnderlyingInstrument_23.insert(UnderlyingDetachmentPoint_23.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_23;
    UnderlyingDirtyPrice_23.setString("12997443");
    noUnderlyings_0_2.set(UnderlyingDirtyPrice_23);
    UnderlyingInstrument_23.insert(UnderlyingDirtyPrice_23.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_23;
    UnderlyingEndPrice_23.setString("9982125");
    noUnderlyings_0_2.set(UnderlyingEndPrice_23);
    UnderlyingInstrument_23.insert(UnderlyingEndPrice_23.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_23;
    UnderlyingEndValue_23.setString("11804611");
    noUnderlyings_0_2.set(UnderlyingEndValue_23);
    UnderlyingInstrument_23.insert(UnderlyingEndValue_23.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_23(1169342756);
    noUnderlyings_0_2.set(UnderlyingExerciseStyle_23);
    UnderlyingInstrument_23.insert(UnderlyingExerciseStyle_23.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_23;
    UnderlyingFXRate_23.setString("3799062");
    noUnderlyings_0_2.set(UnderlyingFXRate_23);
    UnderlyingInstrument_23.insert(UnderlyingFXRate_23.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_23('D');
    noUnderlyings_0_2.set(UnderlyingFXRateCalc_23);
    UnderlyingInstrument_23.insert(UnderlyingFXRateCalc_23.getString());
    FIX::UnderlyingFactor UnderlyingFactor_23;
    UnderlyingFactor_23.setString("5105553");
    noUnderlyings_0_2.set(UnderlyingFactor_23);
    UnderlyingInstrument_23.insert(UnderlyingFactor_23.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_23(1425914910);
    noUnderlyings_0_2.set(UnderlyingFlowScheduleType_23);
    UnderlyingInstrument_23.insert(UnderlyingFlowScheduleType_23.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_23("STRING_1094802114");
    noUnderlyings_0_2.set(UnderlyingInstrRegistry_23);
    UnderlyingInstrument_23.insert(UnderlyingInstrRegistry_23.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_23("LOCALMKTDATE_2063626892");
    noUnderlyings_0_2.set(UnderlyingIssueDate_23);
    UnderlyingInstrument_23.insert(UnderlyingIssueDate_23.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_23("STRING_1534312866");
    noUnderlyings_0_2.set(UnderlyingIssuer_23);
    UnderlyingInstrument_23.insert(UnderlyingIssuer_23.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_23("STRING_1141662400");
    noUnderlyings_0_2.set(UnderlyingLocaleOfIssue_23);
    UnderlyingInstrument_23.insert(UnderlyingLocaleOfIssue_23.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_23("LOCALMKTDATE_1616672346");
    noUnderlyings_0_2.set(UnderlyingMaturityDate_23);
    UnderlyingInstrument_23.insert(UnderlyingMaturityDate_23.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_23("MONTHYEAR_1660776371");
    noUnderlyings_0_2.set(UnderlyingMaturityMonthYear_23);
    UnderlyingInstrument_23.insert(UnderlyingMaturityMonthYear_23.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_23("TZTIMEONLY_1118382679");
    noUnderlyings_0_2.set(UnderlyingMaturityTime_23);
    UnderlyingInstrument_23.insert(UnderlyingMaturityTime_23.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_23;
    UnderlyingNotionalPercentageOutstanding_23.setString("54.100000");
    noUnderlyings_0_2.set(UnderlyingNotionalPercentageOutstanding_23);
    UnderlyingInstrument_23.insert(UnderlyingNotionalPercentageOutstanding_23.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_23('5');
    noUnderlyings_0_2.set(UnderlyingOptAttribute_23);
    UnderlyingInstrument_23.insert(UnderlyingOptAttribute_23.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_23;
    UnderlyingOriginalNotionalPercentageOutstanding_23.setString("43.230000");
    noUnderlyings_0_2.set(UnderlyingOriginalNotionalPercentageOutstanding_23);
    UnderlyingInstrument_23.insert(UnderlyingOriginalNotionalPercentageOutstanding_23.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_23("STRING_1366190031");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasure_23);
    UnderlyingInstrument_23.insert(UnderlyingPriceUnitOfMeasure_23.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_23;
    UnderlyingPriceUnitOfMeasureQty_23.setString("2548097");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasureQty_23);
    UnderlyingInstrument_23.insert(UnderlyingPriceUnitOfMeasureQty_23.getString());
    FIX::UnderlyingProduct UnderlyingProduct_23(1581294138);
    noUnderlyings_0_2.set(UnderlyingProduct_23);
    UnderlyingInstrument_23.insert(UnderlyingProduct_23.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_23(1747642827);
    noUnderlyings_0_2.set(UnderlyingPutOrCall_23);
    UnderlyingInstrument_23.insert(UnderlyingPutOrCall_23.getString());
    FIX::UnderlyingPx UnderlyingPx_23;
    UnderlyingPx_23.setString("1850629");
    noUnderlyings_0_2.set(UnderlyingPx_23);
    UnderlyingInstrument_23.insert(UnderlyingPx_23.getString());
    FIX::UnderlyingQty UnderlyingQty_23;
    UnderlyingQty_23.setString("3004535");
    noUnderlyings_0_2.set(UnderlyingQty_23);
    UnderlyingInstrument_23.insert(UnderlyingQty_23.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_23("LOCALMKTDATE_601429821");
    noUnderlyings_0_2.set(UnderlyingRedemptionDate_23);
    UnderlyingInstrument_23.insert(UnderlyingRedemptionDate_23.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_23("STRING_570683450");
    noUnderlyings_0_2.set(UnderlyingRepoCollateralSecurityType_23);
    UnderlyingInstrument_23.insert(UnderlyingRepoCollateralSecurityType_23.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_23;
    UnderlyingRepurchaseRate_23.setString("98.280000");
    noUnderlyings_0_2.set(UnderlyingRepurchaseRate_23);
    UnderlyingInstrument_23.insert(UnderlyingRepurchaseRate_23.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_23(1206050465);
    noUnderlyings_0_2.set(UnderlyingRepurchaseTerm_23);
    UnderlyingInstrument_23.insert(UnderlyingRepurchaseTerm_23.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_23("STRING_449733643");
    noUnderlyings_0_2.set(UnderlyingRestructuringType_23);
    UnderlyingInstrument_23.insert(UnderlyingRestructuringType_23.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_23("STRING_1005527839");
    noUnderlyings_0_2.set(UnderlyingSecurityDesc_23);
    UnderlyingInstrument_23.insert(UnderlyingSecurityDesc_23.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_23("EXCHANGE_973219185");
    noUnderlyings_0_2.set(UnderlyingSecurityExchange_23);
    UnderlyingInstrument_23.insert(UnderlyingSecurityExchange_23.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_23("STRING_1749477975");
    noUnderlyings_0_2.set(UnderlyingSecurityID_23);
    UnderlyingInstrument_23.insert(UnderlyingSecurityID_23.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_23("STRING_2003740341");
    noUnderlyings_0_2.set(UnderlyingSecurityIDSource_23);
    UnderlyingInstrument_23.insert(UnderlyingSecurityIDSource_23.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_23("STRING_6196662");
    noUnderlyings_0_2.set(UnderlyingSecuritySubType_23);
    UnderlyingInstrument_23.insert(UnderlyingSecuritySubType_23.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_23("STRING_771337083");
    noUnderlyings_0_2.set(UnderlyingSecurityType_23);
    UnderlyingInstrument_23.insert(UnderlyingSecurityType_23.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_23("STRING_236162945");
    noUnderlyings_0_2.set(UnderlyingSeniority_23);
    UnderlyingInstrument_23.insert(UnderlyingSeniority_23.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_23("STRING_725536459");
    noUnderlyings_0_2.set(UnderlyingSettlMethod_23);
    UnderlyingInstrument_23.insert(UnderlyingSettlMethod_23.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_23(2);
    noUnderlyings_0_2.set(UnderlyingSettlementType_23);
    UnderlyingInstrument_23.insert(UnderlyingSettlementType_23.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_23;
    UnderlyingStartValue_23.setString("16620778");
    noUnderlyings_0_2.set(UnderlyingStartValue_23);
    UnderlyingInstrument_23.insert(UnderlyingStartValue_23.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_23("STRING_1820338573");
    noUnderlyings_0_2.set(UnderlyingStateOrProvinceOfIssue_23);
    UnderlyingInstrument_23.insert(UnderlyingStateOrProvinceOfIssue_23.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_23("CHF");
    noUnderlyings_0_2.set(UnderlyingStrikeCurrency_23);
    UnderlyingInstrument_23.insert(UnderlyingStrikeCurrency_23.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_23;
    UnderlyingStrikePrice_23.setString("8145173");
    noUnderlyings_0_2.set(UnderlyingStrikePrice_23);
    UnderlyingInstrument_23.insert(UnderlyingStrikePrice_23.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_23("STRING_667224412");
    noUnderlyings_0_2.set(UnderlyingSymbol_23);
    UnderlyingInstrument_23.insert(UnderlyingSymbol_23.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_23("STRING_562199796");
    noUnderlyings_0_2.set(UnderlyingSymbolSfx_23);
    UnderlyingInstrument_23.insert(UnderlyingSymbolSfx_23.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_23("STRING_1932900004");
    noUnderlyings_0_2.set(UnderlyingTimeUnit_23);
    UnderlyingInstrument_23.insert(UnderlyingTimeUnit_23.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_23("STRING_384466174");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasure_23);
    UnderlyingInstrument_23.insert(UnderlyingUnitOfMeasure_23.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_23;
    UnderlyingUnitOfMeasureQty_23.setString("10802352");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasureQty_23);
    UnderlyingInstrument_23.insert(UnderlyingUnitOfMeasureQty_23.getString());
    all_values.push_back(UnderlyingInstrument_23);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::CollateralResponse::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_48;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_48("STRING_1750656205");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltID_48);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_48.insert(UnderlyingSecurityAltID_48.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_48("STRING_1335045017");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltIDSource_48);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_48.insert(UnderlyingSecurityAltIDSource_48.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_48);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::CollateralResponse::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_49;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_49("STRING_607421169");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltID_49);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_49.insert(UnderlyingSecurityAltID_49.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_49("STRING_1350815385");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltIDSource_49);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_49.insert(UnderlyingSecurityAltIDSource_49.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_49);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_1);
    }
    {
      FIX50SP2::CollateralResponse::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_50;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_50("STRING_1520107984");
      noUnderlyingSecurityAltID_2_1_2.set(UnderlyingSecurityAltID_50);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_50.insert(UnderlyingSecurityAltID_50.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_50("STRING_907874683");
      noUnderlyingSecurityAltID_2_1_2.set(UnderlyingSecurityAltIDSource_50);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_50.insert(UnderlyingSecurityAltIDSource_50.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_50);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::CollateralResponse::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_44;
      FIX::UnderlyingStipType UnderlyingStipType_44("STRING_2090791435");
      noUnderlyingStips_2_1_0.set(UnderlyingStipType_44);
      UnderlyingStipulations_NoUnderlyingStips_44.insert(UnderlyingStipType_44.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_44("STRING_402530863");
      noUnderlyingStips_2_1_0.set(UnderlyingStipValue_44);
      UnderlyingStipulations_NoUnderlyingStips_44.insert(UnderlyingStipValue_44.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_44);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::CollateralResponse::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_46;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_46("STRING_393041430");
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyID_46);
      UndlyInstrumentParties_NoUndlyInstrumentParties_46.insert(UnderlyingInstrumentPartyID_46.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_46('1');
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyIDSource_46);
      UndlyInstrumentParties_NoUndlyInstrumentParties_46.insert(UnderlyingInstrumentPartyIDSource_46.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_46(1984031209);
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyRole_46);
      UndlyInstrumentParties_NoUndlyInstrumentParties_46.insert(UnderlyingInstrumentPartyRole_46.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_46);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_102;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_102("STRING_1264315395");
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubID_102);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_102.insert(UnderlyingInstrumentPartySubID_102.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_102(1990227871);
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubIDType_102);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_102.insert(UnderlyingInstrumentPartySubIDType_102.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_102);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::CollateralResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_103;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_103("STRING_766372841");
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubID_103);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_103.insert(UnderlyingInstrumentPartySubID_103.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_103(1500478341);
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubIDType_103);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_103.insert(UnderlyingInstrumentPartySubIDType_103.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_103);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_1);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_0);
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
