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
  multiset<string> all_compo_names;
  multiset<string> CollateralResponse_0;
  FIX::Account Account_9("STRING_993610580");
  msg.set(Account_9);
  CollateralResponse_0.insert(Account_9.getString());
  FIX::AccountType AccountType_6(7);
  msg.set(AccountType_6);
  CollateralResponse_0.insert(AccountType_6.getString());
  FIX::AccruedInterestAmt AccruedInterestAmt_7;
  AccruedInterestAmt_7.setString("10144669");
  msg.set(AccruedInterestAmt_7);
  CollateralResponse_0.insert(AccruedInterestAmt_7.getString());
  FIX::CashOutstanding CashOutstanding_4;
  CashOutstanding_4.setString("12404447");
  msg.set(CashOutstanding_4);
  CollateralResponse_0.insert(CashOutstanding_4.getString());
  FIX::ClOrdID ClOrdID_11("STRING_516306619");
  msg.set(ClOrdID_11);
  CollateralResponse_0.insert(ClOrdID_11.getString());
  FIX::ClearingBusinessDate ClearingBusinessDate_11("LOCALMKTDATE_518378243");
  msg.set(ClearingBusinessDate_11);
  CollateralResponse_0.insert(ClearingBusinessDate_11.getString());
  FIX::CollApplType CollApplType_1(1);
  msg.set(CollApplType_1);
  CollateralResponse_0.insert(CollApplType_1.getString());
  FIX::CollAsgnID CollAsgnID_1("STRING_112185110");
  msg.set(CollAsgnID_1);
  CollateralResponse_0.insert(CollAsgnID_1.getString());
  FIX::CollAsgnReason CollAsgnReason_2(2);
  msg.set(CollAsgnReason_2);
  CollateralResponse_0.insert(CollAsgnReason_2.getString());
  FIX::CollAsgnRejectReason CollAsgnRejectReason_0(4);
  msg.set(CollAsgnRejectReason_0);
  CollateralResponse_0.insert(CollAsgnRejectReason_0.getString());
  FIX::CollAsgnRespType CollAsgnRespType_0(3);
  msg.set(CollAsgnRespType_0);
  CollateralResponse_0.insert(CollAsgnRespType_0.getString());
  FIX::CollAsgnTransType CollAsgnTransType_1(1);
  msg.set(CollAsgnTransType_1);
  CollateralResponse_0.insert(CollAsgnTransType_1.getString());
  FIX::CollReqID CollReqID_2("STRING_174729762");
  msg.set(CollReqID_2);
  CollateralResponse_0.insert(CollReqID_2.getString());
  FIX::CollRespID CollRespID_0("STRING_1292851211");
  msg.set(CollRespID_0);
  CollateralResponse_0.insert(CollRespID_0.getString());
  FIX::Currency Currency_11("GBP");
  msg.set(Currency_11);
  CollateralResponse_0.insert(Currency_11.getString());
  FIX::EncodedText EncodedText_20("DATA_1996104047");
  msg.set(EncodedText_20);
  CollateralResponse_0.insert(EncodedText_20.getString());
  FIX::EncodedTextLen EncodedTextLen_20(1884750461);
  msg.set(EncodedTextLen_20);
  CollateralResponse_0.insert(EncodedTextLen_20.getString());
  FIX::EndAccruedInterestAmt EndAccruedInterestAmt_7;
  EndAccruedInterestAmt_7.setString("15633082");
  msg.set(EndAccruedInterestAmt_7);
  CollateralResponse_0.insert(EndAccruedInterestAmt_7.getString());
  FIX::EndCash EndCash_7;
  EndCash_7.setString("15355791");
  msg.set(EndCash_7);
  CollateralResponse_0.insert(EndCash_7.getString());
  FIX::FinancialStatus FinancialStatus_1("MULTIPLECHARVALUE_1");
  msg.set(FinancialStatus_1);
  CollateralResponse_0.insert(FinancialStatus_1.getString());
  FIX::MarginExcess MarginExcess_4;
  MarginExcess_4.setString("17827289");
  msg.set(MarginExcess_4);
  CollateralResponse_0.insert(MarginExcess_4.getString());
  FIX::OrderID OrderID_11("STRING_513695368");
  msg.set(OrderID_11);
  CollateralResponse_0.insert(OrderID_11.getString());
  FIX::Price Price_8;
  Price_8.setString("4169432");
  msg.set(Price_8);
  CollateralResponse_0.insert(Price_8.getString());
  FIX::PriceType PriceType_10(5);
  msg.set(PriceType_10);
  CollateralResponse_0.insert(PriceType_10.getString());
  FIX::QtyType QtyType_9(0);
  msg.set(QtyType_9);
  CollateralResponse_0.insert(QtyType_9.getString());
  FIX::Quantity Quantity_10;
  Quantity_10.setString("12091275");
  msg.set(Quantity_10);
  CollateralResponse_0.insert(Quantity_10.getString());
  FIX::SecondaryClOrdID SecondaryClOrdID_11("STRING_140643483");
  msg.set(SecondaryClOrdID_11);
  CollateralResponse_0.insert(SecondaryClOrdID_11.getString());
  FIX::SecondaryOrderID SecondaryOrderID_11("STRING_284287447");
  msg.set(SecondaryOrderID_11);
  CollateralResponse_0.insert(SecondaryOrderID_11.getString());
  FIX::SettlDate SettlDate_14("LOCALMKTDATE_1451456127");
  msg.set(SettlDate_14);
  CollateralResponse_0.insert(SettlDate_14.getString());
  FIX::Side Side_13('D');
  msg.set(Side_13);
  CollateralResponse_0.insert(Side_13.getString());
  FIX::StartCash StartCash_7;
  StartCash_7.setString("12778980");
  msg.set(StartCash_7);
  CollateralResponse_0.insert(StartCash_7.getString());
  FIX::Text Text_20("STRING_1071685942");
  msg.set(Text_20);
  CollateralResponse_0.insert(Text_20.getString());
  FIX::TotalNetValue TotalNetValue_4;
  TotalNetValue_4.setString("17126652");
  msg.set(TotalNetValue_4);
  CollateralResponse_0.insert(TotalNetValue_4.getString());
  FIX::TransactTime TransactTime_9(FIX::UTCTIMESTAMP(18, 50, 19, 4, 1, 2011));
  msg.set(TransactTime_9);
  CollateralResponse_0.insert(TransactTime_9.getString());
  all_values.push_back(CollateralResponse_0);

  all_compo_names.insert("CollateralResponse");

  // ExecCollGrp
  // Group ExecCollGrp.NoExecs
  {
    FIX50SP2::CollateralResponse::NoExecs noExecs_0_0;
    // ExecCollGrp.NoExecs
    multiset<string> ExecCollGrp_NoExecs_13;
    FIX::ExecID ExecID_19("STRING_1834341153");
    noExecs_0_0.set(ExecID_19);
    ExecCollGrp_NoExecs_13.insert(ExecID_19.getString());
    all_values.push_back(ExecCollGrp_NoExecs_13);
    all_compo_names.insert("ExecCollGrp.NoExecs");

    msg.addGroup(noExecs_0_0);
  }
  {
    FIX50SP2::CollateralResponse::NoExecs noExecs_0_1;
    // ExecCollGrp.NoExecs
    multiset<string> ExecCollGrp_NoExecs_14;
    FIX::ExecID ExecID_20("STRING_1926522695");
    noExecs_0_1.set(ExecID_20);
    ExecCollGrp_NoExecs_14.insert(ExecID_20.getString());
    all_values.push_back(ExecCollGrp_NoExecs_14);
    all_compo_names.insert("ExecCollGrp.NoExecs");

    msg.addGroup(noExecs_0_1);
  }
  // FinancingDetails
  multiset<string> FinancingDetails_8;
  FIX::AgreementCurrency AgreementCurrency_8("CAN");
  msg.set(AgreementCurrency_8);
  FinancingDetails_8.insert(AgreementCurrency_8.getString());
  FIX::AgreementDate AgreementDate_8("LOCALMKTDATE_1550535953");
  msg.set(AgreementDate_8);
  FinancingDetails_8.insert(AgreementDate_8.getString());
  FIX::AgreementDesc AgreementDesc_8("STRING_1618214673");
  msg.set(AgreementDesc_8);
  FinancingDetails_8.insert(AgreementDesc_8.getString());
  FIX::AgreementID AgreementID_8("STRING_832199486");
  msg.set(AgreementID_8);
  FinancingDetails_8.insert(AgreementID_8.getString());
  FIX::DeliveryType DeliveryType_8(3);
  msg.set(DeliveryType_8);
  FinancingDetails_8.insert(DeliveryType_8.getString());
  FIX::EndDate EndDate_8("LOCALMKTDATE_1006310139");
  msg.set(EndDate_8);
  FinancingDetails_8.insert(EndDate_8.getString());
  FIX::MarginRatio MarginRatio_8;
  MarginRatio_8.setString("37.890000");
  msg.set(MarginRatio_8);
  FinancingDetails_8.insert(MarginRatio_8.getString());
  FIX::StartDate StartDate_8("LOCALMKTDATE_601605823");
  msg.set(StartDate_8);
  FinancingDetails_8.insert(StartDate_8.getString());
  FIX::TerminationType TerminationType_8(4);
  msg.set(TerminationType_8);
  FinancingDetails_8.insert(TerminationType_8.getString());
  all_values.push_back(FinancingDetails_8);
  all_compo_names.insert("FinancingDetails");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::CollateralResponse::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_23;
    FIX::EncodedLegIssuer EncodedLegIssuer_23("DATA_2095298747");
    noLegs_0_0.set(EncodedLegIssuer_23);
    InstrumentLeg_23.insert(EncodedLegIssuer_23.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_23(1963726024);
    noLegs_0_0.set(EncodedLegIssuerLen_23);
    InstrumentLeg_23.insert(EncodedLegIssuerLen_23.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_23("DATA_730660964");
    noLegs_0_0.set(EncodedLegSecurityDesc_23);
    InstrumentLeg_23.insert(EncodedLegSecurityDesc_23.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_23(88458583);
    noLegs_0_0.set(EncodedLegSecurityDescLen_23);
    InstrumentLeg_23.insert(EncodedLegSecurityDescLen_23.getString());
    FIX::LegCFICode LegCFICode_23("STRING_100529824");
    noLegs_0_0.set(LegCFICode_23);
    InstrumentLeg_23.insert(LegCFICode_23.getString());
    FIX::LegContractMultiplier LegContractMultiplier_23;
    LegContractMultiplier_23.setString("346334");
    noLegs_0_0.set(LegContractMultiplier_23);
    InstrumentLeg_23.insert(LegContractMultiplier_23.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_23(786656915);
    noLegs_0_0.set(LegContractMultiplierUnit_23);
    InstrumentLeg_23.insert(LegContractMultiplierUnit_23.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_23("MONTHYEAR_1378427851");
    noLegs_0_0.set(LegContractSettlMonth_23);
    InstrumentLeg_23.insert(LegContractSettlMonth_23.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_23("COUNTRY_1106319385");
    noLegs_0_0.set(LegCountryOfIssue_23);
    InstrumentLeg_23.insert(LegCountryOfIssue_23.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_23("LOCALMKTDATE_351838501");
    noLegs_0_0.set(LegCouponPaymentDate_23);
    InstrumentLeg_23.insert(LegCouponPaymentDate_23.getString());
    FIX::LegCouponRate LegCouponRate_23;
    LegCouponRate_23.setString("70.220000");
    noLegs_0_0.set(LegCouponRate_23);
    InstrumentLeg_23.insert(LegCouponRate_23.getString());
    FIX::LegCreditRating LegCreditRating_23("STRING_546828299");
    noLegs_0_0.set(LegCreditRating_23);
    InstrumentLeg_23.insert(LegCreditRating_23.getString());
    FIX::LegCurrency LegCurrency_23("CAN");
    noLegs_0_0.set(LegCurrency_23);
    InstrumentLeg_23.insert(LegCurrency_23.getString());
    FIX::LegDatedDate LegDatedDate_23("LOCALMKTDATE_99522323");
    noLegs_0_0.set(LegDatedDate_23);
    InstrumentLeg_23.insert(LegDatedDate_23.getString());
    FIX::LegExerciseStyle LegExerciseStyle_23(774612604);
    noLegs_0_0.set(LegExerciseStyle_23);
    InstrumentLeg_23.insert(LegExerciseStyle_23.getString());
    FIX::LegFactor LegFactor_23;
    LegFactor_23.setString("4876599");
    noLegs_0_0.set(LegFactor_23);
    InstrumentLeg_23.insert(LegFactor_23.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_23(576265386);
    noLegs_0_0.set(LegFlowScheduleType_23);
    InstrumentLeg_23.insert(LegFlowScheduleType_23.getString());
    FIX::LegInstrRegistry LegInstrRegistry_23("STRING_461470109");
    noLegs_0_0.set(LegInstrRegistry_23);
    InstrumentLeg_23.insert(LegInstrRegistry_23.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_23("LOCALMKTDATE_266698986");
    noLegs_0_0.set(LegInterestAccrualDate_23);
    InstrumentLeg_23.insert(LegInterestAccrualDate_23.getString());
    FIX::LegIssueDate LegIssueDate_23("LOCALMKTDATE_198376012");
    noLegs_0_0.set(LegIssueDate_23);
    InstrumentLeg_23.insert(LegIssueDate_23.getString());
    FIX::LegIssuer LegIssuer_23("STRING_1556402782");
    noLegs_0_0.set(LegIssuer_23);
    InstrumentLeg_23.insert(LegIssuer_23.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_23("STRING_1817234940");
    noLegs_0_0.set(LegLocaleOfIssue_23);
    InstrumentLeg_23.insert(LegLocaleOfIssue_23.getString());
    FIX::LegMaturityDate LegMaturityDate_23("LOCALMKTDATE_1816590686");
    noLegs_0_0.set(LegMaturityDate_23);
    InstrumentLeg_23.insert(LegMaturityDate_23.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_23("MONTHYEAR_241118620");
    noLegs_0_0.set(LegMaturityMonthYear_23);
    InstrumentLeg_23.insert(LegMaturityMonthYear_23.getString());
    FIX::LegMaturityTime LegMaturityTime_23("TZTIMEONLY_636111807");
    noLegs_0_0.set(LegMaturityTime_23);
    InstrumentLeg_23.insert(LegMaturityTime_23.getString());
    FIX::LegOptAttribute LegOptAttribute_23('6');
    noLegs_0_0.set(LegOptAttribute_23);
    InstrumentLeg_23.insert(LegOptAttribute_23.getString());
    FIX::LegOptionRatio LegOptionRatio_23;
    LegOptionRatio_23.setString("14931924");
    noLegs_0_0.set(LegOptionRatio_23);
    InstrumentLeg_23.insert(LegOptionRatio_23.getString());
    FIX::LegPool LegPool_23("STRING_1237717630");
    noLegs_0_0.set(LegPool_23);
    InstrumentLeg_23.insert(LegPool_23.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_23("STRING_47939037");
    noLegs_0_0.set(LegPriceUnitOfMeasure_23);
    InstrumentLeg_23.insert(LegPriceUnitOfMeasure_23.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_23;
    LegPriceUnitOfMeasureQty_23.setString("10147258");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_23);
    InstrumentLeg_23.insert(LegPriceUnitOfMeasureQty_23.getString());
    FIX::LegProduct LegProduct_23(1185532730);
    noLegs_0_0.set(LegProduct_23);
    InstrumentLeg_23.insert(LegProduct_23.getString());
    FIX::LegPutOrCall LegPutOrCall_23(2011665061);
    noLegs_0_0.set(LegPutOrCall_23);
    InstrumentLeg_23.insert(LegPutOrCall_23.getString());
    FIX::LegRatioQty LegRatioQty_23;
    LegRatioQty_23.setString("17453868");
    noLegs_0_0.set(LegRatioQty_23);
    InstrumentLeg_23.insert(LegRatioQty_23.getString());
    FIX::LegRedemptionDate LegRedemptionDate_23("LOCALMKTDATE_1273991313");
    noLegs_0_0.set(LegRedemptionDate_23);
    InstrumentLeg_23.insert(LegRedemptionDate_23.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_23("STRING_2112194885");
    noLegs_0_0.set(LegRepoCollateralSecurityType_23);
    InstrumentLeg_23.insert(LegRepoCollateralSecurityType_23.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_23;
    LegRepurchaseRate_23.setString("2.500000");
    noLegs_0_0.set(LegRepurchaseRate_23);
    InstrumentLeg_23.insert(LegRepurchaseRate_23.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_23(2060648228);
    noLegs_0_0.set(LegRepurchaseTerm_23);
    InstrumentLeg_23.insert(LegRepurchaseTerm_23.getString());
    FIX::LegSecurityDesc LegSecurityDesc_23("STRING_1343139089");
    noLegs_0_0.set(LegSecurityDesc_23);
    InstrumentLeg_23.insert(LegSecurityDesc_23.getString());
    FIX::LegSecurityExchange LegSecurityExchange_23("EXCHANGE_738855988");
    noLegs_0_0.set(LegSecurityExchange_23);
    InstrumentLeg_23.insert(LegSecurityExchange_23.getString());
    FIX::LegSecurityID LegSecurityID_23("STRING_265003081");
    noLegs_0_0.set(LegSecurityID_23);
    InstrumentLeg_23.insert(LegSecurityID_23.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_23("STRING_944942463");
    noLegs_0_0.set(LegSecurityIDSource_23);
    InstrumentLeg_23.insert(LegSecurityIDSource_23.getString());
    FIX::LegSecuritySubType LegSecuritySubType_23("STRING_1285684287");
    noLegs_0_0.set(LegSecuritySubType_23);
    InstrumentLeg_23.insert(LegSecuritySubType_23.getString());
    FIX::LegSecurityType LegSecurityType_23("STRING_700401413");
    noLegs_0_0.set(LegSecurityType_23);
    InstrumentLeg_23.insert(LegSecurityType_23.getString());
    FIX::LegSide LegSide_23('1');
    noLegs_0_0.set(LegSide_23);
    InstrumentLeg_23.insert(LegSide_23.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_23("STRING_1385206611");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_23);
    InstrumentLeg_23.insert(LegStateOrProvinceOfIssue_23.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_23("CHF");
    noLegs_0_0.set(LegStrikeCurrency_23);
    InstrumentLeg_23.insert(LegStrikeCurrency_23.getString());
    FIX::LegStrikePrice LegStrikePrice_23;
    LegStrikePrice_23.setString("19614719");
    noLegs_0_0.set(LegStrikePrice_23);
    InstrumentLeg_23.insert(LegStrikePrice_23.getString());
    FIX::LegSymbol LegSymbol_23("STRING_1936484126");
    noLegs_0_0.set(LegSymbol_23);
    InstrumentLeg_23.insert(LegSymbol_23.getString());
    FIX::LegSymbolSfx LegSymbolSfx_23("STRING_435168394");
    noLegs_0_0.set(LegSymbolSfx_23);
    InstrumentLeg_23.insert(LegSymbolSfx_23.getString());
    FIX::LegTimeUnit LegTimeUnit_23("STRING_12364362");
    noLegs_0_0.set(LegTimeUnit_23);
    InstrumentLeg_23.insert(LegTimeUnit_23.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_23("STRING_1345403261");
    noLegs_0_0.set(LegUnitOfMeasure_23);
    InstrumentLeg_23.insert(LegUnitOfMeasure_23.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_23;
    LegUnitOfMeasureQty_23.setString("1049196");
    noLegs_0_0.set(LegUnitOfMeasureQty_23);
    InstrumentLeg_23.insert(LegUnitOfMeasureQty_23.getString());
    all_values.push_back(InstrumentLeg_23);
    all_compo_names.insert("InstrumentLeg");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::CollateralResponse::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_44;
      FIX::LegSecurityAltID LegSecurityAltID_44("STRING_1586521881");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_44);
      LegSecAltIDGrp_NoLegSecurityAltID_44.insert(LegSecurityAltID_44.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_44("STRING_741031493");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_44);
      LegSecAltIDGrp_NoLegSecurityAltID_44.insert(LegSecurityAltIDSource_44.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_44);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::CollateralResponse::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_45;
      FIX::LegSecurityAltID LegSecurityAltID_45("STRING_356888577");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_45);
      LegSecAltIDGrp_NoLegSecurityAltID_45.insert(LegSecurityAltID_45.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_45("STRING_932230643");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_45);
      LegSecAltIDGrp_NoLegSecurityAltID_45.insert(LegSecurityAltIDSource_45.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_45);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::CollateralResponse::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_46;
      FIX::LegSecurityAltID LegSecurityAltID_46("STRING_1978749124");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltID_46);
      LegSecAltIDGrp_NoLegSecurityAltID_46.insert(LegSecurityAltID_46.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_46("STRING_404827614");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltIDSource_46);
      LegSecAltIDGrp_NoLegSecurityAltID_46.insert(LegSecurityAltIDSource_46.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_46);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_2);
    }
    msg.addGroup(noLegs_0_0);
  }
  // Instrument
  multiset<string> Instrument_11;
  FIX::AttachmentPoint AttachmentPoint_11;
  AttachmentPoint_11.setString("64.870000");
  msg.set(AttachmentPoint_11);
  Instrument_11.insert(AttachmentPoint_11.getString());
  FIX::CFICode CFICode_11("STRING_1016798206");
  msg.set(CFICode_11);
  Instrument_11.insert(CFICode_11.getString());
  FIX::CPProgram CPProgram_11(1);
  msg.set(CPProgram_11);
  Instrument_11.insert(CPProgram_11.getString());
  FIX::CPRegType CPRegType_11("STRING_1544859646");
  msg.set(CPRegType_11);
  Instrument_11.insert(CPRegType_11.getString());
  FIX::CapPrice CapPrice_11;
  CapPrice_11.setString("1433058");
  msg.set(CapPrice_11);
  Instrument_11.insert(CapPrice_11.getString());
  FIX::ContractMultiplier ContractMultiplier_11;
  ContractMultiplier_11.setString("2337202");
  msg.set(ContractMultiplier_11);
  Instrument_11.insert(ContractMultiplier_11.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_11(1);
  msg.set(ContractMultiplierUnit_11);
  Instrument_11.insert(ContractMultiplierUnit_11.getString());
  FIX::ContractSettlMonth ContractSettlMonth_11("MONTHYEAR_56470451");
  msg.set(ContractSettlMonth_11);
  Instrument_11.insert(ContractSettlMonth_11.getString());
  FIX::CountryOfIssue CountryOfIssue_11("COUNTRY_1576859354");
  msg.set(CountryOfIssue_11);
  Instrument_11.insert(CountryOfIssue_11.getString());
  FIX::CouponPaymentDate CouponPaymentDate_11("LOCALMKTDATE_1916252237");
  msg.set(CouponPaymentDate_11);
  Instrument_11.insert(CouponPaymentDate_11.getString());
  FIX::CouponRate CouponRate_11;
  CouponRate_11.setString("35.320000");
  msg.set(CouponRate_11);
  Instrument_11.insert(CouponRate_11.getString());
  FIX::CreditRating CreditRating_11("STRING_374318169");
  msg.set(CreditRating_11);
  Instrument_11.insert(CreditRating_11.getString());
  FIX::DatedDate DatedDate_11("LOCALMKTDATE_1054452876");
  msg.set(DatedDate_11);
  Instrument_11.insert(DatedDate_11.getString());
  FIX::DetachmentPoint DetachmentPoint_11;
  DetachmentPoint_11.setString("49.450000");
  msg.set(DetachmentPoint_11);
  Instrument_11.insert(DetachmentPoint_11.getString());
  FIX::EncodedIssuer EncodedIssuer_11("DATA_55127638");
  msg.set(EncodedIssuer_11);
  Instrument_11.insert(EncodedIssuer_11.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_11(292175839);
  msg.set(EncodedIssuerLen_11);
  Instrument_11.insert(EncodedIssuerLen_11.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_11("DATA_349405314");
  msg.set(EncodedSecurityDesc_11);
  Instrument_11.insert(EncodedSecurityDesc_11.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_11(223597045);
  msg.set(EncodedSecurityDescLen_11);
  Instrument_11.insert(EncodedSecurityDescLen_11.getString());
  FIX::ExerciseStyle ExerciseStyle_11(0);
  msg.set(ExerciseStyle_11);
  Instrument_11.insert(ExerciseStyle_11.getString());
  FIX::Factor Factor_11;
  Factor_11.setString("1384057");
  msg.set(Factor_11);
  Instrument_11.insert(Factor_11.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_11(false);
  msg.set(FlexProductEligibilityIndicator_11);
  Instrument_11.insert(FlexProductEligibilityIndicator_11.getString());
  FIX::FlexibleIndicator FlexibleIndicator_11(false);
  msg.set(FlexibleIndicator_11);
  Instrument_11.insert(FlexibleIndicator_11.getString());
  FIX::FloorPrice FloorPrice_11;
  FloorPrice_11.setString("14838090");
  msg.set(FloorPrice_11);
  Instrument_11.insert(FloorPrice_11.getString());
  FIX::FlowScheduleType FlowScheduleType_11(0);
  msg.set(FlowScheduleType_11);
  Instrument_11.insert(FlowScheduleType_11.getString());
  FIX::InstrRegistry InstrRegistry_11("STRING_1947483599");
  msg.set(InstrRegistry_11);
  Instrument_11.insert(InstrRegistry_11.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_11('9');
  msg.set(InstrmtAssignmentMethod_11);
  Instrument_11.insert(InstrmtAssignmentMethod_11.getString());
  FIX::InterestAccrualDate InterestAccrualDate_11("LOCALMKTDATE_1504716619");
  msg.set(InterestAccrualDate_11);
  Instrument_11.insert(InterestAccrualDate_11.getString());
  FIX::IssueDate IssueDate_11("LOCALMKTDATE_156888528");
  msg.set(IssueDate_11);
  Instrument_11.insert(IssueDate_11.getString());
  FIX::Issuer Issuer_11("STRING_1855077931");
  msg.set(Issuer_11);
  Instrument_11.insert(Issuer_11.getString());
  FIX::ListMethod ListMethod_11(1);
  msg.set(ListMethod_11);
  Instrument_11.insert(ListMethod_11.getString());
  FIX::LocaleOfIssue LocaleOfIssue_11("STRING_561716143");
  msg.set(LocaleOfIssue_11);
  Instrument_11.insert(LocaleOfIssue_11.getString());
  FIX::MaturityDate MaturityDate_11("LOCALMKTDATE_1654550770");
  msg.set(MaturityDate_11);
  Instrument_11.insert(MaturityDate_11.getString());
  FIX::MaturityMonthYear MaturityMonthYear_11("MONTHYEAR_205296653");
  msg.set(MaturityMonthYear_11);
  Instrument_11.insert(MaturityMonthYear_11.getString());
  FIX::MaturityTime MaturityTime_11("TZTIMEONLY_830725171");
  msg.set(MaturityTime_11);
  Instrument_11.insert(MaturityTime_11.getString());
  FIX::MinPriceIncrement MinPriceIncrement_11;
  MinPriceIncrement_11.setString("10519267");
  msg.set(MinPriceIncrement_11);
  Instrument_11.insert(MinPriceIncrement_11.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_11;
  MinPriceIncrementAmount_11.setString("3486025");
  msg.set(MinPriceIncrementAmount_11);
  Instrument_11.insert(MinPriceIncrementAmount_11.getString());
  FIX::NTPositionLimit NTPositionLimit_11(1064445436);
  msg.set(NTPositionLimit_11);
  Instrument_11.insert(NTPositionLimit_11.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_11;
  NotionalPercentageOutstanding_11.setString("93.690000");
  msg.set(NotionalPercentageOutstanding_11);
  Instrument_11.insert(NotionalPercentageOutstanding_11.getString());
  FIX::OptAttribute OptAttribute_11('4');
  msg.set(OptAttribute_11);
  Instrument_11.insert(OptAttribute_11.getString());
  FIX::OptPayoutAmount OptPayoutAmount_11;
  OptPayoutAmount_11.setString("4938211");
  msg.set(OptPayoutAmount_11);
  Instrument_11.insert(OptPayoutAmount_11.getString());
  FIX::OptPayoutType OptPayoutType_11(2);
  msg.set(OptPayoutType_11);
  Instrument_11.insert(OptPayoutType_11.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_11;
  OriginalNotionalPercentageOutstanding_11.setString("65.070000");
  msg.set(OriginalNotionalPercentageOutstanding_11);
  Instrument_11.insert(OriginalNotionalPercentageOutstanding_11.getString());
  FIX::Pool Pool_11("STRING_868139312");
  msg.set(Pool_11);
  Instrument_11.insert(Pool_11.getString());
  FIX::PositionLimit PositionLimit_11(905060835);
  msg.set(PositionLimit_11);
  Instrument_11.insert(PositionLimit_11.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_11("STRING_INX");
  msg.set(PriceQuoteMethod_11);
  Instrument_11.insert(PriceQuoteMethod_11.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_11("STRING_923266950");
  msg.set(PriceUnitOfMeasure_11);
  Instrument_11.insert(PriceUnitOfMeasure_11.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_11;
  PriceUnitOfMeasureQty_11.setString("11972366");
  msg.set(PriceUnitOfMeasureQty_11);
  Instrument_11.insert(PriceUnitOfMeasureQty_11.getString());
  FIX::Product Product_13(11);
  msg.set(Product_13);
  Instrument_11.insert(Product_13.getString());
  FIX::ProductComplex ProductComplex_11("STRING_1146863996");
  msg.set(ProductComplex_11);
  Instrument_11.insert(ProductComplex_11.getString());
  FIX::PutOrCall PutOrCall_11(1);
  msg.set(PutOrCall_11);
  Instrument_11.insert(PutOrCall_11.getString());
  FIX::RedemptionDate RedemptionDate_11("LOCALMKTDATE_88748912");
  msg.set(RedemptionDate_11);
  Instrument_11.insert(RedemptionDate_11.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_11("STRING_1805629435");
  msg.set(RepoCollateralSecurityType_11);
  Instrument_11.insert(RepoCollateralSecurityType_11.getString());
  FIX::RepurchaseRate RepurchaseRate_11;
  RepurchaseRate_11.setString("94.140000");
  msg.set(RepurchaseRate_11);
  Instrument_11.insert(RepurchaseRate_11.getString());
  FIX::RepurchaseTerm RepurchaseTerm_11(1572557966);
  msg.set(RepurchaseTerm_11);
  Instrument_11.insert(RepurchaseTerm_11.getString());
  FIX::RestructuringType RestructuringType_11("STRING_MR");
  msg.set(RestructuringType_11);
  Instrument_11.insert(RestructuringType_11.getString());
  FIX::SecurityDesc SecurityDesc_11("STRING_1221929365");
  msg.set(SecurityDesc_11);
  Instrument_11.insert(SecurityDesc_11.getString());
  FIX::SecurityExchange SecurityExchange_11("EXCHANGE_347921606");
  msg.set(SecurityExchange_11);
  Instrument_11.insert(SecurityExchange_11.getString());
  FIX::SecurityGroup SecurityGroup_11("STRING_1926547532");
  msg.set(SecurityGroup_11);
  Instrument_11.insert(SecurityGroup_11.getString());
  FIX::SecurityID SecurityID_11("STRING_1378817894");
  msg.set(SecurityID_11);
  Instrument_11.insert(SecurityID_11.getString());
  FIX::SecurityIDSource SecurityIDSource_11("STRING_C");
  msg.set(SecurityIDSource_11);
  Instrument_11.insert(SecurityIDSource_11.getString());
  FIX::SecurityStatus SecurityStatus_11("STRING_2");
  msg.set(SecurityStatus_11);
  Instrument_11.insert(SecurityStatus_11.getString());
  FIX::SecuritySubType SecuritySubType_11("STRING_1940534037");
  msg.set(SecuritySubType_11);
  Instrument_11.insert(SecuritySubType_11.getString());
  FIX::SecurityType SecurityType_13("STRING_TINT");
  msg.set(SecurityType_13);
  Instrument_11.insert(SecurityType_13.getString());
  FIX::Seniority Seniority_11("STRING_SB");
  msg.set(Seniority_11);
  Instrument_11.insert(Seniority_11.getString());
  FIX::SettlMethod SettlMethod_11('C');
  msg.set(SettlMethod_11);
  Instrument_11.insert(SettlMethod_11.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_11("STRING_614509779");
  msg.set(SettleOnOpenFlag_11);
  Instrument_11.insert(SettleOnOpenFlag_11.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_11("STRING_1668945156");
  msg.set(StateOrProvinceOfIssue_11);
  Instrument_11.insert(StateOrProvinceOfIssue_11.getString());
  FIX::StrikeCurrency StrikeCurrency_11("CHF");
  msg.set(StrikeCurrency_11);
  Instrument_11.insert(StrikeCurrency_11.getString());
  FIX::StrikeMultiplier StrikeMultiplier_11;
  StrikeMultiplier_11.setString("20740181");
  msg.set(StrikeMultiplier_11);
  Instrument_11.insert(StrikeMultiplier_11.getString());
  FIX::StrikePrice StrikePrice_11;
  StrikePrice_11.setString("345584");
  msg.set(StrikePrice_11);
  Instrument_11.insert(StrikePrice_11.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_11(3);
  msg.set(StrikePriceBoundaryMethod_11);
  Instrument_11.insert(StrikePriceBoundaryMethod_11.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_11;
  StrikePriceBoundaryPrecision_11.setString("9.900000");
  msg.set(StrikePriceBoundaryPrecision_11);
  Instrument_11.insert(StrikePriceBoundaryPrecision_11.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_11(1);
  msg.set(StrikePriceDeterminationMethod_11);
  Instrument_11.insert(StrikePriceDeterminationMethod_11.getString());
  FIX::StrikeValue StrikeValue_11;
  StrikeValue_11.setString("14520179");
  msg.set(StrikeValue_11);
  Instrument_11.insert(StrikeValue_11.getString());
  FIX::Symbol Symbol_11("STRING_254018795");
  msg.set(Symbol_11);
  Instrument_11.insert(Symbol_11.getString());
  FIX::SymbolSfx SymbolSfx_11("STRING_CD");
  msg.set(SymbolSfx_11);
  Instrument_11.insert(SymbolSfx_11.getString());
  FIX::TimeUnit TimeUnit_11("STRING_H");
  msg.set(TimeUnit_11);
  Instrument_11.insert(TimeUnit_11.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_11(4);
  msg.set(UnderlyingPriceDeterminationMethod_11);
  Instrument_11.insert(UnderlyingPriceDeterminationMethod_11.getString());
  FIX::UnitOfMeasure UnitOfMeasure_11("STRING_tn");
  msg.set(UnitOfMeasure_11);
  Instrument_11.insert(UnitOfMeasure_11.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_11;
  UnitOfMeasureQty_11.setString("18051718");
  msg.set(UnitOfMeasureQty_11);
  Instrument_11.insert(UnitOfMeasureQty_11.getString());
  FIX::ValuationMethod ValuationMethod_11("STRING_FUTDA");
  msg.set(ValuationMethod_11);
  Instrument_11.insert(ValuationMethod_11.getString());
  all_values.push_back(Instrument_11);
  all_compo_names.insert("Instrument");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::CollateralResponse::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_23;
    FIX::ComplexEventCondition ComplexEventCondition_23(2);
    noComplexEvents_0_0.set(ComplexEventCondition_23);
    ComplexEvents_NoComplexEvents_23.insert(ComplexEventCondition_23.getString());
    FIX::ComplexEventPrice ComplexEventPrice_23;
    ComplexEventPrice_23.setString("18656687");
    noComplexEvents_0_0.set(ComplexEventPrice_23);
    ComplexEvents_NoComplexEvents_23.insert(ComplexEventPrice_23.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_23(4);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_23);
    ComplexEvents_NoComplexEvents_23.insert(ComplexEventPriceBoundaryMethod_23.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_23;
    ComplexEventPriceBoundaryPrecision_23.setString("33.160000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_23);
    ComplexEvents_NoComplexEvents_23.insert(ComplexEventPriceBoundaryPrecision_23.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_23(1);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_23);
    ComplexEvents_NoComplexEvents_23.insert(ComplexEventPriceTimeType_23.getString());
    FIX::ComplexEventType ComplexEventType_23(2);
    noComplexEvents_0_0.set(ComplexEventType_23);
    ComplexEvents_NoComplexEvents_23.insert(ComplexEventType_23.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_23;
    ComplexOptPayoutAmount_23.setString("15328812");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_23);
    ComplexEvents_NoComplexEvents_23.insert(ComplexOptPayoutAmount_23.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_23);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CollateralResponse::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_56;
      FIX::ComplexEventEndDate ComplexEventEndDate_56(FIX::UTCTIMESTAMP(23, 0, 10, 15, 8, 2008));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_56);
      ComplexEventDates_NoComplexEventDates_56.insert(ComplexEventEndDate_56.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_56(FIX::UTCTIMESTAMP(4, 21, 39, 4, 8, 2013));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_56);
      ComplexEventDates_NoComplexEventDates_56.insert(ComplexEventStartDate_56.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_56);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_110;
        FIX::ComplexEventEndTime ComplexEventEndTime_110(FIX::UTCTIMEONLY(14, 51, 2));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_110);
        ComplexEventTimes_NoComplexEventTimes_110.insert(ComplexEventEndTime_110.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_110(FIX::UTCTIMEONLY(8, 29, 54));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_110);
        ComplexEventTimes_NoComplexEventTimes_110.insert(ComplexEventStartTime_110.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_110);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::CollateralResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_111;
        FIX::ComplexEventEndTime ComplexEventEndTime_111(FIX::UTCTIMEONLY(3, 29, 23));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_111);
        ComplexEventTimes_NoComplexEventTimes_111.insert(ComplexEventEndTime_111.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_111(FIX::UTCTIMEONLY(0, 34, 28));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_111);
        ComplexEventTimes_NoComplexEventTimes_111.insert(ComplexEventStartTime_111.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_111);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::CollateralResponse::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_57;
      FIX::ComplexEventEndDate ComplexEventEndDate_57(FIX::UTCTIMESTAMP(13, 20, 24, 1, 5, 2014));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_57);
      ComplexEventDates_NoComplexEventDates_57.insert(ComplexEventEndDate_57.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_57(FIX::UTCTIMESTAMP(12, 15, 56, 20, 12, 2010));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_57);
      ComplexEventDates_NoComplexEventDates_57.insert(ComplexEventStartDate_57.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_57);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_112;
        FIX::ComplexEventEndTime ComplexEventEndTime_112(FIX::UTCTIMEONLY(10, 50, 48));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_112);
        ComplexEventTimes_NoComplexEventTimes_112.insert(ComplexEventEndTime_112.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_112(FIX::UTCTIMEONLY(10, 9, 45));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_112);
        ComplexEventTimes_NoComplexEventTimes_112.insert(ComplexEventStartTime_112.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_112);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::CollateralResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_113;
        FIX::ComplexEventEndTime ComplexEventEndTime_113(FIX::UTCTIMEONLY(17, 14, 37));
        noComplexEventTimes_0_1_2_1.set(ComplexEventEndTime_113);
        ComplexEventTimes_NoComplexEventTimes_113.insert(ComplexEventEndTime_113.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_113(FIX::UTCTIMEONLY(7, 3, 57));
        noComplexEventTimes_0_1_2_1.set(ComplexEventStartTime_113);
        ComplexEventTimes_NoComplexEventTimes_113.insert(ComplexEventStartTime_113.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_113);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
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
    multiset<string> EvntGrp_NoEvents_22;
    FIX::EventDate EventDate_22("LOCALMKTDATE_1320741208");
    noEvents_0_0.set(EventDate_22);
    EvntGrp_NoEvents_22.insert(EventDate_22.getString());
    FIX::EventPx EventPx_22;
    EventPx_22.setString("14184436");
    noEvents_0_0.set(EventPx_22);
    EvntGrp_NoEvents_22.insert(EventPx_22.getString());
    FIX::EventText EventText_22("STRING_1900088062");
    noEvents_0_0.set(EventText_22);
    EvntGrp_NoEvents_22.insert(EventText_22.getString());
    FIX::EventTime EventTime_22(FIX::UTCTIMESTAMP(1, 16, 22, 26, 9, 2011));
    noEvents_0_0.set(EventTime_22);
    EvntGrp_NoEvents_22.insert(EventTime_22.getString());
    FIX::EventType EventType_22(11);
    noEvents_0_0.set(EventType_22);
    EvntGrp_NoEvents_22.insert(EventType_22.getString());
    all_values.push_back(EvntGrp_NoEvents_22);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::CollateralResponse::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_20;
    FIX::InstrumentPartyID InstrumentPartyID_20("STRING_807939955");
    noInstrumentParties_0_0.set(InstrumentPartyID_20);
    InstrumentParties_NoInstrumentParties_20.insert(InstrumentPartyID_20.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_20('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_20);
    InstrumentParties_NoInstrumentParties_20.insert(InstrumentPartyIDSource_20.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_20(1061163477);
    noInstrumentParties_0_0.set(InstrumentPartyRole_20);
    InstrumentParties_NoInstrumentParties_20.insert(InstrumentPartyRole_20.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_20);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CollateralResponse::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_38;
      FIX::InstrumentPartySubID InstrumentPartySubID_38("STRING_159843480");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_38);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_38.insert(InstrumentPartySubID_38.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_38(799250497);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_38);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_38.insert(InstrumentPartySubIDType_38.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_38);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::CollateralResponse::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_21;
    FIX::InstrumentPartyID InstrumentPartyID_21("STRING_722304731");
    noInstrumentParties_0_1.set(InstrumentPartyID_21);
    InstrumentParties_NoInstrumentParties_21.insert(InstrumentPartyID_21.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_21('1');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_21);
    InstrumentParties_NoInstrumentParties_21.insert(InstrumentPartyIDSource_21.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_21(214713038);
    noInstrumentParties_0_1.set(InstrumentPartyRole_21);
    InstrumentParties_NoInstrumentParties_21.insert(InstrumentPartyRole_21.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_21);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CollateralResponse::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_39;
      FIX::InstrumentPartySubID InstrumentPartySubID_39("STRING_2116448940");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_39);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_39.insert(InstrumentPartySubID_39.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_39(1173219895);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_39);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_39.insert(InstrumentPartySubIDType_39.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_39);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::CollateralResponse::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_22;
    FIX::InstrumentPartyID InstrumentPartyID_22("STRING_1833670143");
    noInstrumentParties_0_2.set(InstrumentPartyID_22);
    InstrumentParties_NoInstrumentParties_22.insert(InstrumentPartyID_22.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_22('1');
    noInstrumentParties_0_2.set(InstrumentPartyIDSource_22);
    InstrumentParties_NoInstrumentParties_22.insert(InstrumentPartyIDSource_22.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_22(1593394172);
    noInstrumentParties_0_2.set(InstrumentPartyRole_22);
    InstrumentParties_NoInstrumentParties_22.insert(InstrumentPartyRole_22.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_22);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CollateralResponse::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_40;
      FIX::InstrumentPartySubID InstrumentPartySubID_40("STRING_1525754612");
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubID_40);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_40.insert(InstrumentPartySubID_40.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_40(1596858509);
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubIDType_40);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_40.insert(InstrumentPartySubIDType_40.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_40);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::CollateralResponse::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_41;
      FIX::InstrumentPartySubID InstrumentPartySubID_41("STRING_456662975");
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubID_41);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_41.insert(InstrumentPartySubID_41.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_41(699012172);
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubIDType_41);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_41.insert(InstrumentPartySubIDType_41.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_41);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_1);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::CollateralResponse::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_20;
    FIX::SecurityAltID SecurityAltID_20("STRING_209267389");
    noSecurityAltID_0_0.set(SecurityAltID_20);
    SecAltIDGrp_NoSecurityAltID_20.insert(SecurityAltID_20.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_20("STRING_478034810");
    noSecurityAltID_0_0.set(SecurityAltIDSource_20);
    SecAltIDGrp_NoSecurityAltID_20.insert(SecurityAltIDSource_20.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_20);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::CollateralResponse::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_21;
    FIX::SecurityAltID SecurityAltID_21("STRING_1852473400");
    noSecurityAltID_0_1.set(SecurityAltID_21);
    SecAltIDGrp_NoSecurityAltID_21.insert(SecurityAltID_21.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_21("STRING_1789620726");
    noSecurityAltID_0_1.set(SecurityAltIDSource_21);
    SecAltIDGrp_NoSecurityAltID_21.insert(SecurityAltIDSource_21.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_21);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::CollateralResponse::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_22;
    FIX::SecurityAltID SecurityAltID_22("STRING_205783384");
    noSecurityAltID_0_2.set(SecurityAltID_22);
    SecAltIDGrp_NoSecurityAltID_22.insert(SecurityAltID_22.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_22("STRING_1250920318");
    noSecurityAltID_0_2.set(SecurityAltIDSource_22);
    SecAltIDGrp_NoSecurityAltID_22.insert(SecurityAltIDSource_22.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_22);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_22;
  FIX::SecurityXML SecurityXML_23("XMLDATA_1323042330");
  msg.set(SecurityXML_23);
  FIX::SecurityXMLLen SecurityXMLLen_11(1407260895);
  msg.set(SecurityXMLLen_11);
  FIX::SecurityXMLSchema SecurityXMLSchema_11("STRING_605181000");
  msg.set(SecurityXMLSchema_11);
  SecurityXML_22.insert(SecurityXMLSchema_11.getString());
  all_values.push_back(SecurityXML_22);
  all_compo_names.insert("SecurityXML");

  // MiscFeesGrp
  // Group MiscFeesGrp.NoMiscFees
  {
    FIX50SP2::CollateralResponse::NoMiscFees noMiscFees_0_0;
    // MiscFeesGrp.NoMiscFees
    multiset<string> MiscFeesGrp_NoMiscFees_14;
    FIX::MiscFeeAmt MiscFeeAmt_14;
    MiscFeeAmt_14.setString("677172");
    noMiscFees_0_0.set(MiscFeeAmt_14);
    MiscFeesGrp_NoMiscFees_14.insert(MiscFeeAmt_14.getString());
    FIX::MiscFeeBasis MiscFeeBasis_14(1);
    noMiscFees_0_0.set(MiscFeeBasis_14);
    MiscFeesGrp_NoMiscFees_14.insert(MiscFeeBasis_14.getString());
    FIX::MiscFeeCurr MiscFeeCurr_14("CAN");
    noMiscFees_0_0.set(MiscFeeCurr_14);
    MiscFeesGrp_NoMiscFees_14.insert(MiscFeeCurr_14.getString());
    FIX::MiscFeeType MiscFeeType_14("STRING_9");
    noMiscFees_0_0.set(MiscFeeType_14);
    MiscFeesGrp_NoMiscFees_14.insert(MiscFeeType_14.getString());
    all_values.push_back(MiscFeesGrp_NoMiscFees_14);
    all_compo_names.insert("MiscFeesGrp.NoMiscFees");

    msg.addGroup(noMiscFees_0_0);
  }
  {
    FIX50SP2::CollateralResponse::NoMiscFees noMiscFees_0_1;
    // MiscFeesGrp.NoMiscFees
    multiset<string> MiscFeesGrp_NoMiscFees_15;
    FIX::MiscFeeAmt MiscFeeAmt_15;
    MiscFeeAmt_15.setString("17433138");
    noMiscFees_0_1.set(MiscFeeAmt_15);
    MiscFeesGrp_NoMiscFees_15.insert(MiscFeeAmt_15.getString());
    FIX::MiscFeeBasis MiscFeeBasis_15(2);
    noMiscFees_0_1.set(MiscFeeBasis_15);
    MiscFeesGrp_NoMiscFees_15.insert(MiscFeeBasis_15.getString());
    FIX::MiscFeeCurr MiscFeeCurr_15("CHF");
    noMiscFees_0_1.set(MiscFeeCurr_15);
    MiscFeesGrp_NoMiscFees_15.insert(MiscFeeCurr_15.getString());
    FIX::MiscFeeType MiscFeeType_15("STRING_4");
    noMiscFees_0_1.set(MiscFeeType_15);
    MiscFeesGrp_NoMiscFees_15.insert(MiscFeeType_15.getString());
    all_values.push_back(MiscFeesGrp_NoMiscFees_15);
    all_compo_names.insert("MiscFeesGrp.NoMiscFees");

    msg.addGroup(noMiscFees_0_1);
  }
  {
    FIX50SP2::CollateralResponse::NoMiscFees noMiscFees_0_2;
    // MiscFeesGrp.NoMiscFees
    multiset<string> MiscFeesGrp_NoMiscFees_16;
    FIX::MiscFeeAmt MiscFeeAmt_16;
    MiscFeeAmt_16.setString("20596918");
    noMiscFees_0_2.set(MiscFeeAmt_16);
    MiscFeesGrp_NoMiscFees_16.insert(MiscFeeAmt_16.getString());
    FIX::MiscFeeBasis MiscFeeBasis_16(0);
    noMiscFees_0_2.set(MiscFeeBasis_16);
    MiscFeesGrp_NoMiscFees_16.insert(MiscFeeBasis_16.getString());
    FIX::MiscFeeCurr MiscFeeCurr_16("CHF");
    noMiscFees_0_2.set(MiscFeeCurr_16);
    MiscFeesGrp_NoMiscFees_16.insert(MiscFeeCurr_16.getString());
    FIX::MiscFeeType MiscFeeType_16("STRING_10");
    noMiscFees_0_2.set(MiscFeeType_16);
    MiscFeesGrp_NoMiscFees_16.insert(MiscFeeType_16.getString());
    all_values.push_back(MiscFeesGrp_NoMiscFees_16);
    all_compo_names.insert("MiscFeesGrp.NoMiscFees");

    msg.addGroup(noMiscFees_0_2);
  }
  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::CollateralResponse::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_27;
    FIX::PartyID PartyID_27("STRING_299034153");
    noPartyIDs_0_0.set(PartyID_27);
    Parties_NoPartyIDs_27.insert(PartyID_27.getString());
    FIX::PartyIDSource PartyIDSource_27('8');
    noPartyIDs_0_0.set(PartyIDSource_27);
    Parties_NoPartyIDs_27.insert(PartyIDSource_27.getString());
    FIX::PartyRole PartyRole_27(46);
    noPartyIDs_0_0.set(PartyRole_27);
    Parties_NoPartyIDs_27.insert(PartyRole_27.getString());
    all_values.push_back(Parties_NoPartyIDs_27);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::CollateralResponse::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_62;
      FIX::PartySubID PartySubID_62("STRING_746867036");
      noPartySubIDs_0_1_0.set(PartySubID_62);
      PtysSubGrp_NoPartySubIDs_62.insert(PartySubID_62.getString());
      FIX::PartySubIDType PartySubIDType_62(31);
      noPartySubIDs_0_1_0.set(PartySubIDType_62);
      PtysSubGrp_NoPartySubIDs_62.insert(PartySubIDType_62.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_62);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::CollateralResponse::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_63;
      FIX::PartySubID PartySubID_63("STRING_1476081136");
      noPartySubIDs_0_1_1.set(PartySubID_63);
      PtysSubGrp_NoPartySubIDs_63.insert(PartySubID_63.getString());
      FIX::PartySubIDType PartySubIDType_63(32);
      noPartySubIDs_0_1_1.set(PartySubIDType_63);
      PtysSubGrp_NoPartySubIDs_63.insert(PartySubIDType_63.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_63);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::CollateralResponse::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_64;
      FIX::PartySubID PartySubID_64("STRING_1239507619");
      noPartySubIDs_0_1_2.set(PartySubID_64);
      PtysSubGrp_NoPartySubIDs_64.insert(PartySubID_64.getString());
      FIX::PartySubIDType PartySubIDType_64(18);
      noPartySubIDs_0_1_2.set(PartySubIDType_64);
      PtysSubGrp_NoPartySubIDs_64.insert(PartySubIDType_64.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_64);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::CollateralResponse::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_28;
    FIX::PartyID PartyID_28("STRING_1702777106");
    noPartyIDs_0_1.set(PartyID_28);
    Parties_NoPartyIDs_28.insert(PartyID_28.getString());
    FIX::PartyIDSource PartyIDSource_28('H');
    noPartyIDs_0_1.set(PartyIDSource_28);
    Parties_NoPartyIDs_28.insert(PartyIDSource_28.getString());
    FIX::PartyRole PartyRole_28(5);
    noPartyIDs_0_1.set(PartyRole_28);
    Parties_NoPartyIDs_28.insert(PartyRole_28.getString());
    all_values.push_back(Parties_NoPartyIDs_28);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::CollateralResponse::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_65;
      FIX::PartySubID PartySubID_65("STRING_297966134");
      noPartySubIDs_1_1_0.set(PartySubID_65);
      PtysSubGrp_NoPartySubIDs_65.insert(PartySubID_65.getString());
      FIX::PartySubIDType PartySubIDType_65(16);
      noPartySubIDs_1_1_0.set(PartySubIDType_65);
      PtysSubGrp_NoPartySubIDs_65.insert(PartySubIDType_65.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_65);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::CollateralResponse::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_66;
      FIX::PartySubID PartySubID_66("STRING_922285889");
      noPartySubIDs_1_1_1.set(PartySubID_66);
      PtysSubGrp_NoPartySubIDs_66.insert(PartySubID_66.getString());
      FIX::PartySubIDType PartySubIDType_66(30);
      noPartySubIDs_1_1_1.set(PartySubIDType_66);
      PtysSubGrp_NoPartySubIDs_66.insert(PartySubIDType_66.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_66);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::CollateralResponse::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_29;
    FIX::PartyID PartyID_29("STRING_1450176834");
    noPartyIDs_0_2.set(PartyID_29);
    Parties_NoPartyIDs_29.insert(PartyID_29.getString());
    FIX::PartyIDSource PartyIDSource_29('5');
    noPartyIDs_0_2.set(PartyIDSource_29);
    Parties_NoPartyIDs_29.insert(PartyIDSource_29.getString());
    FIX::PartyRole PartyRole_29(8);
    noPartyIDs_0_2.set(PartyRole_29);
    Parties_NoPartyIDs_29.insert(PartyRole_29.getString());
    all_values.push_back(Parties_NoPartyIDs_29);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::CollateralResponse::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_67;
      FIX::PartySubID PartySubID_67("STRING_1787183727");
      noPartySubIDs_2_1_0.set(PartySubID_67);
      PtysSubGrp_NoPartySubIDs_67.insert(PartySubID_67.getString());
      FIX::PartySubIDType PartySubIDType_67(25);
      noPartySubIDs_2_1_0.set(PartySubIDType_67);
      PtysSubGrp_NoPartySubIDs_67.insert(PartySubIDType_67.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_67);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    msg.addGroup(noPartyIDs_0_2);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_7;
  FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_7("GBP");
  msg.set(BenchmarkCurveCurrency_7);
  SpreadOrBenchmarkCurveData_7.insert(BenchmarkCurveCurrency_7.getString());
  FIX::BenchmarkCurveName BenchmarkCurveName_7("STRING_MuniAAA");
  msg.set(BenchmarkCurveName_7);
  SpreadOrBenchmarkCurveData_7.insert(BenchmarkCurveName_7.getString());
  FIX::BenchmarkCurvePoint BenchmarkCurvePoint_7("STRING_713882635");
  msg.set(BenchmarkCurvePoint_7);
  SpreadOrBenchmarkCurveData_7.insert(BenchmarkCurvePoint_7.getString());
  FIX::BenchmarkPrice BenchmarkPrice_7;
  BenchmarkPrice_7.setString("4726714");
  msg.set(BenchmarkPrice_7);
  SpreadOrBenchmarkCurveData_7.insert(BenchmarkPrice_7.getString());
  FIX::BenchmarkPriceType BenchmarkPriceType_7(2061839511);
  msg.set(BenchmarkPriceType_7);
  SpreadOrBenchmarkCurveData_7.insert(BenchmarkPriceType_7.getString());
  FIX::BenchmarkSecurityID BenchmarkSecurityID_7("STRING_1645322811");
  msg.set(BenchmarkSecurityID_7);
  SpreadOrBenchmarkCurveData_7.insert(BenchmarkSecurityID_7.getString());
  FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_7("STRING_771705643");
  msg.set(BenchmarkSecurityIDSource_7);
  SpreadOrBenchmarkCurveData_7.insert(BenchmarkSecurityIDSource_7.getString());
  FIX::Spread Spread_7;
  Spread_7.setString("19408879");
  msg.set(Spread_7);
  SpreadOrBenchmarkCurveData_7.insert(Spread_7.getString());
  all_values.push_back(SpreadOrBenchmarkCurveData_7);
  all_compo_names.insert("SpreadOrBenchmarkCurveData");

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::CollateralResponse::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_14;
    FIX::StipulationType StipulationType_14("STRING_YIELD");
    noStipulations_0_0.set(StipulationType_14);
    Stipulations_NoStipulations_14.insert(StipulationType_14.getString());
    FIX::StipulationValue StipulationValue_14("STRING_540271377");
    noStipulations_0_0.set(StipulationValue_14);
    Stipulations_NoStipulations_14.insert(StipulationValue_14.getString());
    all_values.push_back(Stipulations_NoStipulations_14);
    all_compo_names.insert("Stipulations.NoStipulations");

    msg.addGroup(noStipulations_0_0);
  }
  // TrdCollGrp
  // Group TrdCollGrp.NoTrades
  {
    FIX50SP2::CollateralResponse::NoTrades noTrades_0_0;
    // TrdCollGrp.NoTrades
    multiset<string> TrdCollGrp_NoTrades_11;
    FIX::SecondaryTradeReportID SecondaryTradeReportID_11("STRING_1098349457");
    noTrades_0_0.set(SecondaryTradeReportID_11);
    TrdCollGrp_NoTrades_11.insert(SecondaryTradeReportID_11.getString());
    FIX::TradeReportID TradeReportID_11("STRING_992128166");
    noTrades_0_0.set(TradeReportID_11);
    TrdCollGrp_NoTrades_11.insert(TradeReportID_11.getString());
    all_values.push_back(TrdCollGrp_NoTrades_11);
    all_compo_names.insert("TrdCollGrp.NoTrades");

    msg.addGroup(noTrades_0_0);
  }
  {
    FIX50SP2::CollateralResponse::NoTrades noTrades_0_1;
    // TrdCollGrp.NoTrades
    multiset<string> TrdCollGrp_NoTrades_12;
    FIX::SecondaryTradeReportID SecondaryTradeReportID_12("STRING_1575336828");
    noTrades_0_1.set(SecondaryTradeReportID_12);
    TrdCollGrp_NoTrades_12.insert(SecondaryTradeReportID_12.getString());
    FIX::TradeReportID TradeReportID_12("STRING_632730329");
    noTrades_0_1.set(TradeReportID_12);
    TrdCollGrp_NoTrades_12.insert(TradeReportID_12.getString());
    all_values.push_back(TrdCollGrp_NoTrades_12);
    all_compo_names.insert("TrdCollGrp.NoTrades");

    msg.addGroup(noTrades_0_1);
  }
  {
    FIX50SP2::CollateralResponse::NoTrades noTrades_0_2;
    // TrdCollGrp.NoTrades
    multiset<string> TrdCollGrp_NoTrades_13;
    FIX::SecondaryTradeReportID SecondaryTradeReportID_13("STRING_547421624");
    noTrades_0_2.set(SecondaryTradeReportID_13);
    TrdCollGrp_NoTrades_13.insert(SecondaryTradeReportID_13.getString());
    FIX::TradeReportID TradeReportID_13("STRING_1990403130");
    noTrades_0_2.set(TradeReportID_13);
    TrdCollGrp_NoTrades_13.insert(TradeReportID_13.getString());
    all_values.push_back(TrdCollGrp_NoTrades_13);
    all_compo_names.insert("TrdCollGrp.NoTrades");

    msg.addGroup(noTrades_0_2);
  }
  // TrdRegTimestamps
  // Group TrdRegTimestamps.NoTrdRegTimestamps
  {
    FIX50SP2::CollateralResponse::NoTrdRegTimestamps noTrdRegTimestamps_0_0;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_8;
    FIX::DeskOrderHandlingInst DeskOrderHandlingInst_8("MULTIPLESTRINGVALUE_DIR");
    noTrdRegTimestamps_0_0.set(DeskOrderHandlingInst_8);
    TrdRegTimestamps_NoTrdRegTimestamps_8.insert(DeskOrderHandlingInst_8.getString());
    FIX::DeskType DeskType_8("STRING_IN");
    noTrdRegTimestamps_0_0.set(DeskType_8);
    TrdRegTimestamps_NoTrdRegTimestamps_8.insert(DeskType_8.getString());
    FIX::DeskTypeSource DeskTypeSource_8(1);
    noTrdRegTimestamps_0_0.set(DeskTypeSource_8);
    TrdRegTimestamps_NoTrdRegTimestamps_8.insert(DeskTypeSource_8.getString());
    FIX::TrdRegTimestamp TrdRegTimestamp_8(FIX::UTCTIMESTAMP(21, 14, 3, 8, 4, 2005));
    noTrdRegTimestamps_0_0.set(TrdRegTimestamp_8);
    TrdRegTimestamps_NoTrdRegTimestamps_8.insert(TrdRegTimestamp_8.getString());
    FIX::TrdRegTimestampOrigin TrdRegTimestampOrigin_8("STRING_721693817");
    noTrdRegTimestamps_0_0.set(TrdRegTimestampOrigin_8);
    TrdRegTimestamps_NoTrdRegTimestamps_8.insert(TrdRegTimestampOrigin_8.getString());
    FIX::TrdRegTimestampType TrdRegTimestampType_8(4);
    noTrdRegTimestamps_0_0.set(TrdRegTimestampType_8);
    TrdRegTimestamps_NoTrdRegTimestamps_8.insert(TrdRegTimestampType_8.getString());
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_8);
    all_compo_names.insert("TrdRegTimestamps.NoTrdRegTimestamps");

    msg.addGroup(noTrdRegTimestamps_0_0);
  }
  // UndInstrmtCollGrp
  // Group UndInstrmtCollGrp.NoUnderlyings
  {
    FIX50SP2::CollateralResponse::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtCollGrp.NoUnderlyings
    multiset<string> UndInstrmtCollGrp_NoUnderlyings_3;
    FIX::CollAction CollAction_3(0);
    noUnderlyings_0_0.set(CollAction_3);
    UndInstrmtCollGrp_NoUnderlyings_3.insert(CollAction_3.getString());
    all_values.push_back(UndInstrmtCollGrp_NoUnderlyings_3);
    all_compo_names.insert("UndInstrmtCollGrp.NoUnderlyings");

    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_18;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_18("DATA_591653158");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_18);
    UnderlyingInstrument_18.insert(EncodedUnderlyingIssuer_18.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_18(990918992);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_18);
    UnderlyingInstrument_18.insert(EncodedUnderlyingIssuerLen_18.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_18("DATA_120731926");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_18);
    UnderlyingInstrument_18.insert(EncodedUnderlyingSecurityDesc_18.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_18(89492322);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_18);
    UnderlyingInstrument_18.insert(EncodedUnderlyingSecurityDescLen_18.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_18;
    UnderlyingAdjustedQuantity_18.setString("17626246");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_18);
    UnderlyingInstrument_18.insert(UnderlyingAdjustedQuantity_18.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_18;
    UnderlyingAllocationPercent_18.setString("99.150000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_18);
    UnderlyingInstrument_18.insert(UnderlyingAllocationPercent_18.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_18;
    UnderlyingAttachmentPoint_18.setString("46.370000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_18);
    UnderlyingInstrument_18.insert(UnderlyingAttachmentPoint_18.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_18("STRING_1384892956");
    noUnderlyings_0_0.set(UnderlyingCFICode_18);
    UnderlyingInstrument_18.insert(UnderlyingCFICode_18.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_18("STRING_454407645");
    noUnderlyings_0_0.set(UnderlyingCPProgram_18);
    UnderlyingInstrument_18.insert(UnderlyingCPProgram_18.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_18("STRING_1311263846");
    noUnderlyings_0_0.set(UnderlyingCPRegType_18);
    UnderlyingInstrument_18.insert(UnderlyingCPRegType_18.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_18;
    UnderlyingCapValue_18.setString("3357587");
    noUnderlyings_0_0.set(UnderlyingCapValue_18);
    UnderlyingInstrument_18.insert(UnderlyingCapValue_18.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_18;
    UnderlyingCashAmount_18.setString("14465358");
    noUnderlyings_0_0.set(UnderlyingCashAmount_18);
    UnderlyingInstrument_18.insert(UnderlyingCashAmount_18.getString());
    FIX::UnderlyingCashType UnderlyingCashType_18("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_18);
    UnderlyingInstrument_18.insert(UnderlyingCashType_18.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_18;
    UnderlyingContractMultiplier_18.setString("9684890");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_18);
    UnderlyingInstrument_18.insert(UnderlyingContractMultiplier_18.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_18(1993957435);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_18);
    UnderlyingInstrument_18.insert(UnderlyingContractMultiplierUnit_18.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_18("COUNTRY_582036509");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_18);
    UnderlyingInstrument_18.insert(UnderlyingCountryOfIssue_18.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_18("LOCALMKTDATE_395377544");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_18);
    UnderlyingInstrument_18.insert(UnderlyingCouponPaymentDate_18.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_18;
    UnderlyingCouponRate_18.setString("98.710000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_18);
    UnderlyingInstrument_18.insert(UnderlyingCouponRate_18.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_18("STRING_722922125");
    noUnderlyings_0_0.set(UnderlyingCreditRating_18);
    UnderlyingInstrument_18.insert(UnderlyingCreditRating_18.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_18("CHF");
    noUnderlyings_0_0.set(UnderlyingCurrency_18);
    UnderlyingInstrument_18.insert(UnderlyingCurrency_18.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_18;
    UnderlyingCurrentValue_18.setString("21058371");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_18);
    UnderlyingInstrument_18.insert(UnderlyingCurrentValue_18.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_18;
    UnderlyingDetachmentPoint_18.setString("55.700000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_18);
    UnderlyingInstrument_18.insert(UnderlyingDetachmentPoint_18.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_18;
    UnderlyingDirtyPrice_18.setString("13637073");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_18);
    UnderlyingInstrument_18.insert(UnderlyingDirtyPrice_18.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_18;
    UnderlyingEndPrice_18.setString("316445");
    noUnderlyings_0_0.set(UnderlyingEndPrice_18);
    UnderlyingInstrument_18.insert(UnderlyingEndPrice_18.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_18;
    UnderlyingEndValue_18.setString("7753219");
    noUnderlyings_0_0.set(UnderlyingEndValue_18);
    UnderlyingInstrument_18.insert(UnderlyingEndValue_18.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_18(182562874);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_18);
    UnderlyingInstrument_18.insert(UnderlyingExerciseStyle_18.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_18;
    UnderlyingFXRate_18.setString("7533383");
    noUnderlyings_0_0.set(UnderlyingFXRate_18);
    UnderlyingInstrument_18.insert(UnderlyingFXRate_18.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_18('M');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_18);
    UnderlyingInstrument_18.insert(UnderlyingFXRateCalc_18.getString());
    FIX::UnderlyingFactor UnderlyingFactor_18;
    UnderlyingFactor_18.setString("7008103");
    noUnderlyings_0_0.set(UnderlyingFactor_18);
    UnderlyingInstrument_18.insert(UnderlyingFactor_18.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_18(959714436);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_18);
    UnderlyingInstrument_18.insert(UnderlyingFlowScheduleType_18.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_18("STRING_1244745639");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_18);
    UnderlyingInstrument_18.insert(UnderlyingInstrRegistry_18.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_18("LOCALMKTDATE_1691729369");
    noUnderlyings_0_0.set(UnderlyingIssueDate_18);
    UnderlyingInstrument_18.insert(UnderlyingIssueDate_18.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_18("STRING_1080446362");
    noUnderlyings_0_0.set(UnderlyingIssuer_18);
    UnderlyingInstrument_18.insert(UnderlyingIssuer_18.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_18("STRING_1334237961");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_18);
    UnderlyingInstrument_18.insert(UnderlyingLocaleOfIssue_18.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_18("LOCALMKTDATE_1306870357");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_18);
    UnderlyingInstrument_18.insert(UnderlyingMaturityDate_18.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_18("MONTHYEAR_994582630");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_18);
    UnderlyingInstrument_18.insert(UnderlyingMaturityMonthYear_18.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_18("TZTIMEONLY_162188951");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_18);
    UnderlyingInstrument_18.insert(UnderlyingMaturityTime_18.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_18;
    UnderlyingNotionalPercentageOutstanding_18.setString("96.650000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_18);
    UnderlyingInstrument_18.insert(UnderlyingNotionalPercentageOutstanding_18.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_18('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_18);
    UnderlyingInstrument_18.insert(UnderlyingOptAttribute_18.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_18;
    UnderlyingOriginalNotionalPercentageOutstanding_18.setString("27.970000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_18);
    UnderlyingInstrument_18.insert(UnderlyingOriginalNotionalPercentageOutstanding_18.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_18("STRING_880038431");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_18);
    UnderlyingInstrument_18.insert(UnderlyingPriceUnitOfMeasure_18.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_18;
    UnderlyingPriceUnitOfMeasureQty_18.setString("7480424");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_18);
    UnderlyingInstrument_18.insert(UnderlyingPriceUnitOfMeasureQty_18.getString());
    FIX::UnderlyingProduct UnderlyingProduct_18(65086176);
    noUnderlyings_0_0.set(UnderlyingProduct_18);
    UnderlyingInstrument_18.insert(UnderlyingProduct_18.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_18(1848527526);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_18);
    UnderlyingInstrument_18.insert(UnderlyingPutOrCall_18.getString());
    FIX::UnderlyingPx UnderlyingPx_18;
    UnderlyingPx_18.setString("5945162");
    noUnderlyings_0_0.set(UnderlyingPx_18);
    UnderlyingInstrument_18.insert(UnderlyingPx_18.getString());
    FIX::UnderlyingQty UnderlyingQty_18;
    UnderlyingQty_18.setString("6471226");
    noUnderlyings_0_0.set(UnderlyingQty_18);
    UnderlyingInstrument_18.insert(UnderlyingQty_18.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_18("LOCALMKTDATE_96421422");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_18);
    UnderlyingInstrument_18.insert(UnderlyingRedemptionDate_18.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_18("STRING_1148886096");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_18);
    UnderlyingInstrument_18.insert(UnderlyingRepoCollateralSecurityType_18.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_18;
    UnderlyingRepurchaseRate_18.setString("48.110000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_18);
    UnderlyingInstrument_18.insert(UnderlyingRepurchaseRate_18.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_18(928046387);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_18);
    UnderlyingInstrument_18.insert(UnderlyingRepurchaseTerm_18.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_18("STRING_1185954292");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_18);
    UnderlyingInstrument_18.insert(UnderlyingRestructuringType_18.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_18("STRING_1328398349");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_18);
    UnderlyingInstrument_18.insert(UnderlyingSecurityDesc_18.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_18("EXCHANGE_1498611957");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_18);
    UnderlyingInstrument_18.insert(UnderlyingSecurityExchange_18.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_18("STRING_402177963");
    noUnderlyings_0_0.set(UnderlyingSecurityID_18);
    UnderlyingInstrument_18.insert(UnderlyingSecurityID_18.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_18("STRING_1360042904");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_18);
    UnderlyingInstrument_18.insert(UnderlyingSecurityIDSource_18.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_18("STRING_126450267");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_18);
    UnderlyingInstrument_18.insert(UnderlyingSecuritySubType_18.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_18("STRING_584740837");
    noUnderlyings_0_0.set(UnderlyingSecurityType_18);
    UnderlyingInstrument_18.insert(UnderlyingSecurityType_18.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_18("STRING_2113381277");
    noUnderlyings_0_0.set(UnderlyingSeniority_18);
    UnderlyingInstrument_18.insert(UnderlyingSeniority_18.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_18("STRING_779542748");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_18);
    UnderlyingInstrument_18.insert(UnderlyingSettlMethod_18.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_18(4);
    noUnderlyings_0_0.set(UnderlyingSettlementType_18);
    UnderlyingInstrument_18.insert(UnderlyingSettlementType_18.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_18;
    UnderlyingStartValue_18.setString("9256120");
    noUnderlyings_0_0.set(UnderlyingStartValue_18);
    UnderlyingInstrument_18.insert(UnderlyingStartValue_18.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_18("STRING_2024288387");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_18);
    UnderlyingInstrument_18.insert(UnderlyingStateOrProvinceOfIssue_18.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_18("EUR");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_18);
    UnderlyingInstrument_18.insert(UnderlyingStrikeCurrency_18.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_18;
    UnderlyingStrikePrice_18.setString("12110427");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_18);
    UnderlyingInstrument_18.insert(UnderlyingStrikePrice_18.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_18("STRING_2136667292");
    noUnderlyings_0_0.set(UnderlyingSymbol_18);
    UnderlyingInstrument_18.insert(UnderlyingSymbol_18.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_18("STRING_853157409");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_18);
    UnderlyingInstrument_18.insert(UnderlyingSymbolSfx_18.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_18("STRING_1373231652");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_18);
    UnderlyingInstrument_18.insert(UnderlyingTimeUnit_18.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_18("STRING_533463310");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_18);
    UnderlyingInstrument_18.insert(UnderlyingUnitOfMeasure_18.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_18;
    UnderlyingUnitOfMeasureQty_18.setString("1546640");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_18);
    UnderlyingInstrument_18.insert(UnderlyingUnitOfMeasureQty_18.getString());
    all_values.push_back(UnderlyingInstrument_18);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::CollateralResponse::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_40;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_40("STRING_1413501741");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_40);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_40.insert(UnderlyingSecurityAltID_40.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_40("STRING_902706474");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_40);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_40.insert(UnderlyingSecurityAltIDSource_40.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_40);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::CollateralResponse::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_41;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_41("STRING_764286978");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_41);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_41.insert(UnderlyingSecurityAltID_41.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_41("STRING_1114545619");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_41);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_41.insert(UnderlyingSecurityAltIDSource_41.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_41);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::CollateralResponse::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_42;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_42("STRING_1497222700");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltID_42);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_42.insert(UnderlyingSecurityAltID_42.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_42("STRING_1411409663");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltIDSource_42);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_42.insert(UnderlyingSecurityAltIDSource_42.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_42);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::CollateralResponse::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_30;
      FIX::UnderlyingStipType UnderlyingStipType_30("STRING_498625148");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_30);
      UnderlyingStipulations_NoUnderlyingStips_30.insert(UnderlyingStipType_30.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_30("STRING_633970826");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_30);
      UnderlyingStipulations_NoUnderlyingStips_30.insert(UnderlyingStipValue_30.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_30);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::CollateralResponse::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_31;
      FIX::UnderlyingStipType UnderlyingStipType_31("STRING_2139013428");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_31);
      UnderlyingStipulations_NoUnderlyingStips_31.insert(UnderlyingStipType_31.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_31("STRING_1684579440");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_31);
      UnderlyingStipulations_NoUnderlyingStips_31.insert(UnderlyingStipValue_31.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_31);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::CollateralResponse::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_35;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_35("STRING_1490141738");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_35);
      UndlyInstrumentParties_NoUndlyInstrumentParties_35.insert(UnderlyingInstrumentPartyID_35.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_35('2');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_35);
      UndlyInstrumentParties_NoUndlyInstrumentParties_35.insert(UnderlyingInstrumentPartyIDSource_35.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_35(1174928432);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_35);
      UndlyInstrumentParties_NoUndlyInstrumentParties_35.insert(UnderlyingInstrumentPartyRole_35.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_35);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_66;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_66("STRING_524014592");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_66);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_66.insert(UnderlyingInstrumentPartySubID_66.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_66(1140826061);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_66);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_66.insert(UnderlyingInstrumentPartySubIDType_66.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_66);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::CollateralResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_67;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_67("STRING_248651105");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_67);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_67.insert(UnderlyingInstrumentPartySubID_67.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_67(1809565806);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_67);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_67.insert(UnderlyingInstrumentPartySubIDType_67.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_67);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::CollateralResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_68;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_68("STRING_2066438126");
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubID_68);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_68.insert(UnderlyingInstrumentPartySubID_68.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_68(125455844);
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubIDType_68);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_68.insert(UnderlyingInstrumentPartySubIDType_68.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_68);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::CollateralResponse::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_36;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_36("STRING_491879094");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_36);
      UndlyInstrumentParties_NoUndlyInstrumentParties_36.insert(UnderlyingInstrumentPartyID_36.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_36('1');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_36);
      UndlyInstrumentParties_NoUndlyInstrumentParties_36.insert(UnderlyingInstrumentPartyIDSource_36.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_36(1336498545);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_36);
      UndlyInstrumentParties_NoUndlyInstrumentParties_36.insert(UnderlyingInstrumentPartyRole_36.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_36);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_69;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_69("STRING_630686667");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_69);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_69.insert(UnderlyingInstrumentPartySubID_69.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_69(562246549);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_69);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_69.insert(UnderlyingInstrumentPartySubIDType_69.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_69);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::CollateralResponse::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_37;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_37("STRING_1014526048");
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyID_37);
      UndlyInstrumentParties_NoUndlyInstrumentParties_37.insert(UnderlyingInstrumentPartyID_37.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_37('7');
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyIDSource_37);
      UndlyInstrumentParties_NoUndlyInstrumentParties_37.insert(UnderlyingInstrumentPartyIDSource_37.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_37(1261447351);
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyRole_37);
      UndlyInstrumentParties_NoUndlyInstrumentParties_37.insert(UnderlyingInstrumentPartyRole_37.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_37);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_70;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_70("STRING_1688057178");
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubID_70);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_70.insert(UnderlyingInstrumentPartySubID_70.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_70(2025734329);
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubIDType_70);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_70.insert(UnderlyingInstrumentPartySubIDType_70.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_70);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::CollateralResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_71;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_71("STRING_1395089760");
        noUndlyInstrumentPartySubIDs_0_2_2_1.set(UnderlyingInstrumentPartySubID_71);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_71.insert(UnderlyingInstrumentPartySubID_71.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_71(1037796230);
        noUndlyInstrumentPartySubIDs_0_2_2_1.set(UnderlyingInstrumentPartySubIDType_71);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_71.insert(UnderlyingInstrumentPartySubIDType_71.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_71);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_1);
      }
      {
        FIX50SP2::CollateralResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_72;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_72("STRING_1289660344");
        noUndlyInstrumentPartySubIDs_0_2_2_2.set(UnderlyingInstrumentPartySubID_72);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_72.insert(UnderlyingInstrumentPartySubID_72.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_72(458573154);
        noUndlyInstrumentPartySubIDs_0_2_2_2.set(UnderlyingInstrumentPartySubIDType_72);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_72.insert(UnderlyingInstrumentPartySubIDType_72.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_72);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::CollateralResponse::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtCollGrp.NoUnderlyings
    multiset<string> UndInstrmtCollGrp_NoUnderlyings_4;
    FIX::CollAction CollAction_4(2);
    noUnderlyings_0_1.set(CollAction_4);
    UndInstrmtCollGrp_NoUnderlyings_4.insert(CollAction_4.getString());
    all_values.push_back(UndInstrmtCollGrp_NoUnderlyings_4);
    all_compo_names.insert("UndInstrmtCollGrp.NoUnderlyings");

    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_19;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_19("DATA_1923631171");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_19);
    UnderlyingInstrument_19.insert(EncodedUnderlyingIssuer_19.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_19(450102934);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_19);
    UnderlyingInstrument_19.insert(EncodedUnderlyingIssuerLen_19.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_19("DATA_1073517171");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_19);
    UnderlyingInstrument_19.insert(EncodedUnderlyingSecurityDesc_19.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_19(1738516699);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_19);
    UnderlyingInstrument_19.insert(EncodedUnderlyingSecurityDescLen_19.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_19;
    UnderlyingAdjustedQuantity_19.setString("19402446");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_19);
    UnderlyingInstrument_19.insert(UnderlyingAdjustedQuantity_19.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_19;
    UnderlyingAllocationPercent_19.setString("9.270000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_19);
    UnderlyingInstrument_19.insert(UnderlyingAllocationPercent_19.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_19;
    UnderlyingAttachmentPoint_19.setString("14.830000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_19);
    UnderlyingInstrument_19.insert(UnderlyingAttachmentPoint_19.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_19("STRING_1409353029");
    noUnderlyings_0_1.set(UnderlyingCFICode_19);
    UnderlyingInstrument_19.insert(UnderlyingCFICode_19.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_19("STRING_1536805519");
    noUnderlyings_0_1.set(UnderlyingCPProgram_19);
    UnderlyingInstrument_19.insert(UnderlyingCPProgram_19.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_19("STRING_1906787545");
    noUnderlyings_0_1.set(UnderlyingCPRegType_19);
    UnderlyingInstrument_19.insert(UnderlyingCPRegType_19.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_19;
    UnderlyingCapValue_19.setString("16580041");
    noUnderlyings_0_1.set(UnderlyingCapValue_19);
    UnderlyingInstrument_19.insert(UnderlyingCapValue_19.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_19;
    UnderlyingCashAmount_19.setString("11988876");
    noUnderlyings_0_1.set(UnderlyingCashAmount_19);
    UnderlyingInstrument_19.insert(UnderlyingCashAmount_19.getString());
    FIX::UnderlyingCashType UnderlyingCashType_19("STRING_DIFF");
    noUnderlyings_0_1.set(UnderlyingCashType_19);
    UnderlyingInstrument_19.insert(UnderlyingCashType_19.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_19;
    UnderlyingContractMultiplier_19.setString("17834599");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_19);
    UnderlyingInstrument_19.insert(UnderlyingContractMultiplier_19.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_19(1690766772);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_19);
    UnderlyingInstrument_19.insert(UnderlyingContractMultiplierUnit_19.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_19("COUNTRY_1603271281");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_19);
    UnderlyingInstrument_19.insert(UnderlyingCountryOfIssue_19.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_19("LOCALMKTDATE_972474876");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_19);
    UnderlyingInstrument_19.insert(UnderlyingCouponPaymentDate_19.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_19;
    UnderlyingCouponRate_19.setString("58.620000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_19);
    UnderlyingInstrument_19.insert(UnderlyingCouponRate_19.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_19("STRING_86474301");
    noUnderlyings_0_1.set(UnderlyingCreditRating_19);
    UnderlyingInstrument_19.insert(UnderlyingCreditRating_19.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_19("CHF");
    noUnderlyings_0_1.set(UnderlyingCurrency_19);
    UnderlyingInstrument_19.insert(UnderlyingCurrency_19.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_19;
    UnderlyingCurrentValue_19.setString("8718250");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_19);
    UnderlyingInstrument_19.insert(UnderlyingCurrentValue_19.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_19;
    UnderlyingDetachmentPoint_19.setString("51.290000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_19);
    UnderlyingInstrument_19.insert(UnderlyingDetachmentPoint_19.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_19;
    UnderlyingDirtyPrice_19.setString("13194160");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_19);
    UnderlyingInstrument_19.insert(UnderlyingDirtyPrice_19.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_19;
    UnderlyingEndPrice_19.setString("4123985");
    noUnderlyings_0_1.set(UnderlyingEndPrice_19);
    UnderlyingInstrument_19.insert(UnderlyingEndPrice_19.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_19;
    UnderlyingEndValue_19.setString("5269358");
    noUnderlyings_0_1.set(UnderlyingEndValue_19);
    UnderlyingInstrument_19.insert(UnderlyingEndValue_19.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_19(567022165);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_19);
    UnderlyingInstrument_19.insert(UnderlyingExerciseStyle_19.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_19;
    UnderlyingFXRate_19.setString("14501947");
    noUnderlyings_0_1.set(UnderlyingFXRate_19);
    UnderlyingInstrument_19.insert(UnderlyingFXRate_19.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_19('D');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_19);
    UnderlyingInstrument_19.insert(UnderlyingFXRateCalc_19.getString());
    FIX::UnderlyingFactor UnderlyingFactor_19;
    UnderlyingFactor_19.setString("10255953");
    noUnderlyings_0_1.set(UnderlyingFactor_19);
    UnderlyingInstrument_19.insert(UnderlyingFactor_19.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_19(839132497);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_19);
    UnderlyingInstrument_19.insert(UnderlyingFlowScheduleType_19.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_19("STRING_1592743677");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_19);
    UnderlyingInstrument_19.insert(UnderlyingInstrRegistry_19.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_19("LOCALMKTDATE_1475698253");
    noUnderlyings_0_1.set(UnderlyingIssueDate_19);
    UnderlyingInstrument_19.insert(UnderlyingIssueDate_19.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_19("STRING_1912649668");
    noUnderlyings_0_1.set(UnderlyingIssuer_19);
    UnderlyingInstrument_19.insert(UnderlyingIssuer_19.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_19("STRING_1183776728");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_19);
    UnderlyingInstrument_19.insert(UnderlyingLocaleOfIssue_19.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_19("LOCALMKTDATE_1268459278");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_19);
    UnderlyingInstrument_19.insert(UnderlyingMaturityDate_19.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_19("MONTHYEAR_777956947");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_19);
    UnderlyingInstrument_19.insert(UnderlyingMaturityMonthYear_19.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_19("TZTIMEONLY_1949738212");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_19);
    UnderlyingInstrument_19.insert(UnderlyingMaturityTime_19.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_19;
    UnderlyingNotionalPercentageOutstanding_19.setString("86.590000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_19);
    UnderlyingInstrument_19.insert(UnderlyingNotionalPercentageOutstanding_19.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_19('1');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_19);
    UnderlyingInstrument_19.insert(UnderlyingOptAttribute_19.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_19;
    UnderlyingOriginalNotionalPercentageOutstanding_19.setString("21.090000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_19);
    UnderlyingInstrument_19.insert(UnderlyingOriginalNotionalPercentageOutstanding_19.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_19("STRING_40849146");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_19);
    UnderlyingInstrument_19.insert(UnderlyingPriceUnitOfMeasure_19.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_19;
    UnderlyingPriceUnitOfMeasureQty_19.setString("13661664");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_19);
    UnderlyingInstrument_19.insert(UnderlyingPriceUnitOfMeasureQty_19.getString());
    FIX::UnderlyingProduct UnderlyingProduct_19(1387300484);
    noUnderlyings_0_1.set(UnderlyingProduct_19);
    UnderlyingInstrument_19.insert(UnderlyingProduct_19.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_19(1824309125);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_19);
    UnderlyingInstrument_19.insert(UnderlyingPutOrCall_19.getString());
    FIX::UnderlyingPx UnderlyingPx_19;
    UnderlyingPx_19.setString("9094496");
    noUnderlyings_0_1.set(UnderlyingPx_19);
    UnderlyingInstrument_19.insert(UnderlyingPx_19.getString());
    FIX::UnderlyingQty UnderlyingQty_19;
    UnderlyingQty_19.setString("8430881");
    noUnderlyings_0_1.set(UnderlyingQty_19);
    UnderlyingInstrument_19.insert(UnderlyingQty_19.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_19("LOCALMKTDATE_649300353");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_19);
    UnderlyingInstrument_19.insert(UnderlyingRedemptionDate_19.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_19("STRING_933795483");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_19);
    UnderlyingInstrument_19.insert(UnderlyingRepoCollateralSecurityType_19.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_19;
    UnderlyingRepurchaseRate_19.setString("24.190000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_19);
    UnderlyingInstrument_19.insert(UnderlyingRepurchaseRate_19.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_19(36538131);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_19);
    UnderlyingInstrument_19.insert(UnderlyingRepurchaseTerm_19.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_19("STRING_1972667394");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_19);
    UnderlyingInstrument_19.insert(UnderlyingRestructuringType_19.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_19("STRING_1801387424");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_19);
    UnderlyingInstrument_19.insert(UnderlyingSecurityDesc_19.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_19("EXCHANGE_685223260");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_19);
    UnderlyingInstrument_19.insert(UnderlyingSecurityExchange_19.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_19("STRING_1144599799");
    noUnderlyings_0_1.set(UnderlyingSecurityID_19);
    UnderlyingInstrument_19.insert(UnderlyingSecurityID_19.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_19("STRING_66302311");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_19);
    UnderlyingInstrument_19.insert(UnderlyingSecurityIDSource_19.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_19("STRING_1212159070");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_19);
    UnderlyingInstrument_19.insert(UnderlyingSecuritySubType_19.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_19("STRING_1711621964");
    noUnderlyings_0_1.set(UnderlyingSecurityType_19);
    UnderlyingInstrument_19.insert(UnderlyingSecurityType_19.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_19("STRING_1516497077");
    noUnderlyings_0_1.set(UnderlyingSeniority_19);
    UnderlyingInstrument_19.insert(UnderlyingSeniority_19.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_19("STRING_881271577");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_19);
    UnderlyingInstrument_19.insert(UnderlyingSettlMethod_19.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_19(4);
    noUnderlyings_0_1.set(UnderlyingSettlementType_19);
    UnderlyingInstrument_19.insert(UnderlyingSettlementType_19.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_19;
    UnderlyingStartValue_19.setString("2081459");
    noUnderlyings_0_1.set(UnderlyingStartValue_19);
    UnderlyingInstrument_19.insert(UnderlyingStartValue_19.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_19("STRING_326531606");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_19);
    UnderlyingInstrument_19.insert(UnderlyingStateOrProvinceOfIssue_19.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_19("CHF");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_19);
    UnderlyingInstrument_19.insert(UnderlyingStrikeCurrency_19.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_19;
    UnderlyingStrikePrice_19.setString("15103083");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_19);
    UnderlyingInstrument_19.insert(UnderlyingStrikePrice_19.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_19("STRING_1186407518");
    noUnderlyings_0_1.set(UnderlyingSymbol_19);
    UnderlyingInstrument_19.insert(UnderlyingSymbol_19.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_19("STRING_751268894");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_19);
    UnderlyingInstrument_19.insert(UnderlyingSymbolSfx_19.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_19("STRING_1312562899");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_19);
    UnderlyingInstrument_19.insert(UnderlyingTimeUnit_19.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_19("STRING_1716736178");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_19);
    UnderlyingInstrument_19.insert(UnderlyingUnitOfMeasure_19.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_19;
    UnderlyingUnitOfMeasureQty_19.setString("9185477");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_19);
    UnderlyingInstrument_19.insert(UnderlyingUnitOfMeasureQty_19.getString());
    all_values.push_back(UnderlyingInstrument_19);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::CollateralResponse::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_43;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_43("STRING_1757585324");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_43);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_43.insert(UnderlyingSecurityAltID_43.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_43("STRING_137230562");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_43);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_43.insert(UnderlyingSecurityAltIDSource_43.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_43);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::CollateralResponse::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_44;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_44("STRING_113938196");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_44);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_44.insert(UnderlyingSecurityAltID_44.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_44("STRING_1434410801");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_44);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_44.insert(UnderlyingSecurityAltIDSource_44.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_44);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::CollateralResponse::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_45;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_45("STRING_1046680183");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltID_45);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_45.insert(UnderlyingSecurityAltID_45.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_45("STRING_957026314");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltIDSource_45);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_45.insert(UnderlyingSecurityAltIDSource_45.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_45);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::CollateralResponse::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_32;
      FIX::UnderlyingStipType UnderlyingStipType_32("STRING_1980475667");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_32);
      UnderlyingStipulations_NoUnderlyingStips_32.insert(UnderlyingStipType_32.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_32("STRING_1886588733");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_32);
      UnderlyingStipulations_NoUnderlyingStips_32.insert(UnderlyingStipValue_32.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_32);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::CollateralResponse::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_33;
      FIX::UnderlyingStipType UnderlyingStipType_33("STRING_2120249286");
      noUnderlyingStips_1_1_1.set(UnderlyingStipType_33);
      UnderlyingStipulations_NoUnderlyingStips_33.insert(UnderlyingStipType_33.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_33("STRING_1805659413");
      noUnderlyingStips_1_1_1.set(UnderlyingStipValue_33);
      UnderlyingStipulations_NoUnderlyingStips_33.insert(UnderlyingStipValue_33.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_33);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    {
      FIX50SP2::CollateralResponse::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_34;
      FIX::UnderlyingStipType UnderlyingStipType_34("STRING_1540492509");
      noUnderlyingStips_1_1_2.set(UnderlyingStipType_34);
      UnderlyingStipulations_NoUnderlyingStips_34.insert(UnderlyingStipType_34.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_34("STRING_657988898");
      noUnderlyingStips_1_1_2.set(UnderlyingStipValue_34);
      UnderlyingStipulations_NoUnderlyingStips_34.insert(UnderlyingStipValue_34.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_34);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::CollateralResponse::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_38;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_38("STRING_1606794821");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_38);
      UndlyInstrumentParties_NoUndlyInstrumentParties_38.insert(UnderlyingInstrumentPartyID_38.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_38('1');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_38);
      UndlyInstrumentParties_NoUndlyInstrumentParties_38.insert(UnderlyingInstrumentPartyIDSource_38.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_38(366913880);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_38);
      UndlyInstrumentParties_NoUndlyInstrumentParties_38.insert(UnderlyingInstrumentPartyRole_38.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_38);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_73;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_73("STRING_603935898");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_73);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_73.insert(UnderlyingInstrumentPartySubID_73.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_73(956647515);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_73);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_73.insert(UnderlyingInstrumentPartySubIDType_73.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_73);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::CollateralResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_74;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_74("STRING_1183954177");
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubID_74);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_74.insert(UnderlyingInstrumentPartySubID_74.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_74(930467504);
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubIDType_74);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_74.insert(UnderlyingInstrumentPartySubIDType_74.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_74);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::CollateralResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_75;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_75("STRING_874595756");
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubID_75);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_75.insert(UnderlyingInstrumentPartySubID_75.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_75(1157266124);
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubIDType_75);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_75.insert(UnderlyingInstrumentPartySubIDType_75.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_75);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::CollateralResponse::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_39;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_39("STRING_293292191");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_39);
      UndlyInstrumentParties_NoUndlyInstrumentParties_39.insert(UnderlyingInstrumentPartyID_39.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_39('2');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_39);
      UndlyInstrumentParties_NoUndlyInstrumentParties_39.insert(UnderlyingInstrumentPartyIDSource_39.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_39(1908535018);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_39);
      UndlyInstrumentParties_NoUndlyInstrumentParties_39.insert(UnderlyingInstrumentPartyRole_39.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_39);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_76;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_76("STRING_1630255804");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_76);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_76.insert(UnderlyingInstrumentPartySubID_76.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_76(679599084);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_76);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_76.insert(UnderlyingInstrumentPartySubIDType_76.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_76);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    {
      FIX50SP2::CollateralResponse::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_40;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_40("STRING_332492802");
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyID_40);
      UndlyInstrumentParties_NoUndlyInstrumentParties_40.insert(UnderlyingInstrumentPartyID_40.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_40('1');
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyIDSource_40);
      UndlyInstrumentParties_NoUndlyInstrumentParties_40.insert(UnderlyingInstrumentPartyIDSource_40.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_40(816829646);
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyRole_40);
      UndlyInstrumentParties_NoUndlyInstrumentParties_40.insert(UnderlyingInstrumentPartyRole_40.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_40);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_77;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_77("STRING_527284633");
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubID_77);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_77.insert(UnderlyingInstrumentPartySubID_77.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_77(1863509830);
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubIDType_77);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_77.insert(UnderlyingInstrumentPartySubIDType_77.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_77);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_2);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  {
    FIX50SP2::CollateralResponse::NoUnderlyings noUnderlyings_0_2;
    // UndInstrmtCollGrp.NoUnderlyings
    multiset<string> UndInstrmtCollGrp_NoUnderlyings_5;
    FIX::CollAction CollAction_5(1);
    noUnderlyings_0_2.set(CollAction_5);
    UndInstrmtCollGrp_NoUnderlyings_5.insert(CollAction_5.getString());
    all_values.push_back(UndInstrmtCollGrp_NoUnderlyings_5);
    all_compo_names.insert("UndInstrmtCollGrp.NoUnderlyings");

    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_20;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_20("DATA_463512140");
    noUnderlyings_0_2.set(EncodedUnderlyingIssuer_20);
    UnderlyingInstrument_20.insert(EncodedUnderlyingIssuer_20.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_20(1696501849);
    noUnderlyings_0_2.set(EncodedUnderlyingIssuerLen_20);
    UnderlyingInstrument_20.insert(EncodedUnderlyingIssuerLen_20.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_20("DATA_1142562399");
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDesc_20);
    UnderlyingInstrument_20.insert(EncodedUnderlyingSecurityDesc_20.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_20(436277778);
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDescLen_20);
    UnderlyingInstrument_20.insert(EncodedUnderlyingSecurityDescLen_20.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_20;
    UnderlyingAdjustedQuantity_20.setString("13546776");
    noUnderlyings_0_2.set(UnderlyingAdjustedQuantity_20);
    UnderlyingInstrument_20.insert(UnderlyingAdjustedQuantity_20.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_20;
    UnderlyingAllocationPercent_20.setString("12.600000");
    noUnderlyings_0_2.set(UnderlyingAllocationPercent_20);
    UnderlyingInstrument_20.insert(UnderlyingAllocationPercent_20.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_20;
    UnderlyingAttachmentPoint_20.setString("66.760000");
    noUnderlyings_0_2.set(UnderlyingAttachmentPoint_20);
    UnderlyingInstrument_20.insert(UnderlyingAttachmentPoint_20.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_20("STRING_9969531");
    noUnderlyings_0_2.set(UnderlyingCFICode_20);
    UnderlyingInstrument_20.insert(UnderlyingCFICode_20.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_20("STRING_2142366081");
    noUnderlyings_0_2.set(UnderlyingCPProgram_20);
    UnderlyingInstrument_20.insert(UnderlyingCPProgram_20.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_20("STRING_816930997");
    noUnderlyings_0_2.set(UnderlyingCPRegType_20);
    UnderlyingInstrument_20.insert(UnderlyingCPRegType_20.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_20;
    UnderlyingCapValue_20.setString("3768834");
    noUnderlyings_0_2.set(UnderlyingCapValue_20);
    UnderlyingInstrument_20.insert(UnderlyingCapValue_20.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_20;
    UnderlyingCashAmount_20.setString("9706906");
    noUnderlyings_0_2.set(UnderlyingCashAmount_20);
    UnderlyingInstrument_20.insert(UnderlyingCashAmount_20.getString());
    FIX::UnderlyingCashType UnderlyingCashType_20("STRING_DIFF");
    noUnderlyings_0_2.set(UnderlyingCashType_20);
    UnderlyingInstrument_20.insert(UnderlyingCashType_20.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_20;
    UnderlyingContractMultiplier_20.setString("13335309");
    noUnderlyings_0_2.set(UnderlyingContractMultiplier_20);
    UnderlyingInstrument_20.insert(UnderlyingContractMultiplier_20.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_20(7161213);
    noUnderlyings_0_2.set(UnderlyingContractMultiplierUnit_20);
    UnderlyingInstrument_20.insert(UnderlyingContractMultiplierUnit_20.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_20("COUNTRY_203850752");
    noUnderlyings_0_2.set(UnderlyingCountryOfIssue_20);
    UnderlyingInstrument_20.insert(UnderlyingCountryOfIssue_20.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_20("LOCALMKTDATE_60643035");
    noUnderlyings_0_2.set(UnderlyingCouponPaymentDate_20);
    UnderlyingInstrument_20.insert(UnderlyingCouponPaymentDate_20.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_20;
    UnderlyingCouponRate_20.setString("73.370000");
    noUnderlyings_0_2.set(UnderlyingCouponRate_20);
    UnderlyingInstrument_20.insert(UnderlyingCouponRate_20.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_20("STRING_497142943");
    noUnderlyings_0_2.set(UnderlyingCreditRating_20);
    UnderlyingInstrument_20.insert(UnderlyingCreditRating_20.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_20("EUR");
    noUnderlyings_0_2.set(UnderlyingCurrency_20);
    UnderlyingInstrument_20.insert(UnderlyingCurrency_20.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_20;
    UnderlyingCurrentValue_20.setString("21029980");
    noUnderlyings_0_2.set(UnderlyingCurrentValue_20);
    UnderlyingInstrument_20.insert(UnderlyingCurrentValue_20.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_20;
    UnderlyingDetachmentPoint_20.setString("84.660000");
    noUnderlyings_0_2.set(UnderlyingDetachmentPoint_20);
    UnderlyingInstrument_20.insert(UnderlyingDetachmentPoint_20.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_20;
    UnderlyingDirtyPrice_20.setString("16050777");
    noUnderlyings_0_2.set(UnderlyingDirtyPrice_20);
    UnderlyingInstrument_20.insert(UnderlyingDirtyPrice_20.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_20;
    UnderlyingEndPrice_20.setString("2880071");
    noUnderlyings_0_2.set(UnderlyingEndPrice_20);
    UnderlyingInstrument_20.insert(UnderlyingEndPrice_20.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_20;
    UnderlyingEndValue_20.setString("6972922");
    noUnderlyings_0_2.set(UnderlyingEndValue_20);
    UnderlyingInstrument_20.insert(UnderlyingEndValue_20.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_20(274423790);
    noUnderlyings_0_2.set(UnderlyingExerciseStyle_20);
    UnderlyingInstrument_20.insert(UnderlyingExerciseStyle_20.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_20;
    UnderlyingFXRate_20.setString("7344381");
    noUnderlyings_0_2.set(UnderlyingFXRate_20);
    UnderlyingInstrument_20.insert(UnderlyingFXRate_20.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_20('D');
    noUnderlyings_0_2.set(UnderlyingFXRateCalc_20);
    UnderlyingInstrument_20.insert(UnderlyingFXRateCalc_20.getString());
    FIX::UnderlyingFactor UnderlyingFactor_20;
    UnderlyingFactor_20.setString("21379336");
    noUnderlyings_0_2.set(UnderlyingFactor_20);
    UnderlyingInstrument_20.insert(UnderlyingFactor_20.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_20(2137895501);
    noUnderlyings_0_2.set(UnderlyingFlowScheduleType_20);
    UnderlyingInstrument_20.insert(UnderlyingFlowScheduleType_20.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_20("STRING_1688089072");
    noUnderlyings_0_2.set(UnderlyingInstrRegistry_20);
    UnderlyingInstrument_20.insert(UnderlyingInstrRegistry_20.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_20("LOCALMKTDATE_1686951821");
    noUnderlyings_0_2.set(UnderlyingIssueDate_20);
    UnderlyingInstrument_20.insert(UnderlyingIssueDate_20.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_20("STRING_1132974252");
    noUnderlyings_0_2.set(UnderlyingIssuer_20);
    UnderlyingInstrument_20.insert(UnderlyingIssuer_20.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_20("STRING_2124366850");
    noUnderlyings_0_2.set(UnderlyingLocaleOfIssue_20);
    UnderlyingInstrument_20.insert(UnderlyingLocaleOfIssue_20.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_20("LOCALMKTDATE_894145787");
    noUnderlyings_0_2.set(UnderlyingMaturityDate_20);
    UnderlyingInstrument_20.insert(UnderlyingMaturityDate_20.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_20("MONTHYEAR_1668545512");
    noUnderlyings_0_2.set(UnderlyingMaturityMonthYear_20);
    UnderlyingInstrument_20.insert(UnderlyingMaturityMonthYear_20.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_20("TZTIMEONLY_1071149878");
    noUnderlyings_0_2.set(UnderlyingMaturityTime_20);
    UnderlyingInstrument_20.insert(UnderlyingMaturityTime_20.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_20;
    UnderlyingNotionalPercentageOutstanding_20.setString("53.180000");
    noUnderlyings_0_2.set(UnderlyingNotionalPercentageOutstanding_20);
    UnderlyingInstrument_20.insert(UnderlyingNotionalPercentageOutstanding_20.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_20('1');
    noUnderlyings_0_2.set(UnderlyingOptAttribute_20);
    UnderlyingInstrument_20.insert(UnderlyingOptAttribute_20.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_20;
    UnderlyingOriginalNotionalPercentageOutstanding_20.setString("8.760000");
    noUnderlyings_0_2.set(UnderlyingOriginalNotionalPercentageOutstanding_20);
    UnderlyingInstrument_20.insert(UnderlyingOriginalNotionalPercentageOutstanding_20.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_20("STRING_1280998730");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasure_20);
    UnderlyingInstrument_20.insert(UnderlyingPriceUnitOfMeasure_20.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_20;
    UnderlyingPriceUnitOfMeasureQty_20.setString("4866349");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasureQty_20);
    UnderlyingInstrument_20.insert(UnderlyingPriceUnitOfMeasureQty_20.getString());
    FIX::UnderlyingProduct UnderlyingProduct_20(1161464123);
    noUnderlyings_0_2.set(UnderlyingProduct_20);
    UnderlyingInstrument_20.insert(UnderlyingProduct_20.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_20(467046009);
    noUnderlyings_0_2.set(UnderlyingPutOrCall_20);
    UnderlyingInstrument_20.insert(UnderlyingPutOrCall_20.getString());
    FIX::UnderlyingPx UnderlyingPx_20;
    UnderlyingPx_20.setString("4937961");
    noUnderlyings_0_2.set(UnderlyingPx_20);
    UnderlyingInstrument_20.insert(UnderlyingPx_20.getString());
    FIX::UnderlyingQty UnderlyingQty_20;
    UnderlyingQty_20.setString("13653148");
    noUnderlyings_0_2.set(UnderlyingQty_20);
    UnderlyingInstrument_20.insert(UnderlyingQty_20.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_20("LOCALMKTDATE_527689044");
    noUnderlyings_0_2.set(UnderlyingRedemptionDate_20);
    UnderlyingInstrument_20.insert(UnderlyingRedemptionDate_20.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_20("STRING_1658223532");
    noUnderlyings_0_2.set(UnderlyingRepoCollateralSecurityType_20);
    UnderlyingInstrument_20.insert(UnderlyingRepoCollateralSecurityType_20.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_20;
    UnderlyingRepurchaseRate_20.setString("78.190000");
    noUnderlyings_0_2.set(UnderlyingRepurchaseRate_20);
    UnderlyingInstrument_20.insert(UnderlyingRepurchaseRate_20.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_20(501851705);
    noUnderlyings_0_2.set(UnderlyingRepurchaseTerm_20);
    UnderlyingInstrument_20.insert(UnderlyingRepurchaseTerm_20.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_20("STRING_436218591");
    noUnderlyings_0_2.set(UnderlyingRestructuringType_20);
    UnderlyingInstrument_20.insert(UnderlyingRestructuringType_20.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_20("STRING_1817972205");
    noUnderlyings_0_2.set(UnderlyingSecurityDesc_20);
    UnderlyingInstrument_20.insert(UnderlyingSecurityDesc_20.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_20("EXCHANGE_2106270171");
    noUnderlyings_0_2.set(UnderlyingSecurityExchange_20);
    UnderlyingInstrument_20.insert(UnderlyingSecurityExchange_20.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_20("STRING_2041296383");
    noUnderlyings_0_2.set(UnderlyingSecurityID_20);
    UnderlyingInstrument_20.insert(UnderlyingSecurityID_20.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_20("STRING_2105979393");
    noUnderlyings_0_2.set(UnderlyingSecurityIDSource_20);
    UnderlyingInstrument_20.insert(UnderlyingSecurityIDSource_20.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_20("STRING_656078822");
    noUnderlyings_0_2.set(UnderlyingSecuritySubType_20);
    UnderlyingInstrument_20.insert(UnderlyingSecuritySubType_20.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_20("STRING_168236525");
    noUnderlyings_0_2.set(UnderlyingSecurityType_20);
    UnderlyingInstrument_20.insert(UnderlyingSecurityType_20.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_20("STRING_692933933");
    noUnderlyings_0_2.set(UnderlyingSeniority_20);
    UnderlyingInstrument_20.insert(UnderlyingSeniority_20.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_20("STRING_1880655754");
    noUnderlyings_0_2.set(UnderlyingSettlMethod_20);
    UnderlyingInstrument_20.insert(UnderlyingSettlMethod_20.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_20(2);
    noUnderlyings_0_2.set(UnderlyingSettlementType_20);
    UnderlyingInstrument_20.insert(UnderlyingSettlementType_20.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_20;
    UnderlyingStartValue_20.setString("6833457");
    noUnderlyings_0_2.set(UnderlyingStartValue_20);
    UnderlyingInstrument_20.insert(UnderlyingStartValue_20.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_20("STRING_1421261178");
    noUnderlyings_0_2.set(UnderlyingStateOrProvinceOfIssue_20);
    UnderlyingInstrument_20.insert(UnderlyingStateOrProvinceOfIssue_20.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_20("GBP");
    noUnderlyings_0_2.set(UnderlyingStrikeCurrency_20);
    UnderlyingInstrument_20.insert(UnderlyingStrikeCurrency_20.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_20;
    UnderlyingStrikePrice_20.setString("13981443");
    noUnderlyings_0_2.set(UnderlyingStrikePrice_20);
    UnderlyingInstrument_20.insert(UnderlyingStrikePrice_20.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_20("STRING_592300457");
    noUnderlyings_0_2.set(UnderlyingSymbol_20);
    UnderlyingInstrument_20.insert(UnderlyingSymbol_20.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_20("STRING_1337381902");
    noUnderlyings_0_2.set(UnderlyingSymbolSfx_20);
    UnderlyingInstrument_20.insert(UnderlyingSymbolSfx_20.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_20("STRING_321810610");
    noUnderlyings_0_2.set(UnderlyingTimeUnit_20);
    UnderlyingInstrument_20.insert(UnderlyingTimeUnit_20.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_20("STRING_1496415776");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasure_20);
    UnderlyingInstrument_20.insert(UnderlyingUnitOfMeasure_20.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_20;
    UnderlyingUnitOfMeasureQty_20.setString("8533262");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasureQty_20);
    UnderlyingInstrument_20.insert(UnderlyingUnitOfMeasureQty_20.getString());
    all_values.push_back(UnderlyingInstrument_20);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::CollateralResponse::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_46;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_46("STRING_629930858");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltID_46);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_46.insert(UnderlyingSecurityAltID_46.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_46("STRING_1339961182");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltIDSource_46);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_46.insert(UnderlyingSecurityAltIDSource_46.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_46);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::CollateralResponse::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_47;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_47("STRING_1223871962");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltID_47);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_47.insert(UnderlyingSecurityAltID_47.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_47("STRING_1096976867");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltIDSource_47);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_47.insert(UnderlyingSecurityAltIDSource_47.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_47);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_1);
    }
    {
      FIX50SP2::CollateralResponse::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_48;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_48("STRING_1833757377");
      noUnderlyingSecurityAltID_2_1_2.set(UnderlyingSecurityAltID_48);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_48.insert(UnderlyingSecurityAltID_48.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_48("STRING_441703189");
      noUnderlyingSecurityAltID_2_1_2.set(UnderlyingSecurityAltIDSource_48);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_48.insert(UnderlyingSecurityAltIDSource_48.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_48);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::CollateralResponse::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_35;
      FIX::UnderlyingStipType UnderlyingStipType_35("STRING_1344497261");
      noUnderlyingStips_2_1_0.set(UnderlyingStipType_35);
      UnderlyingStipulations_NoUnderlyingStips_35.insert(UnderlyingStipType_35.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_35("STRING_156677360");
      noUnderlyingStips_2_1_0.set(UnderlyingStipValue_35);
      UnderlyingStipulations_NoUnderlyingStips_35.insert(UnderlyingStipValue_35.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_35);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    {
      FIX50SP2::CollateralResponse::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_36;
      FIX::UnderlyingStipType UnderlyingStipType_36("STRING_2126517616");
      noUnderlyingStips_2_1_1.set(UnderlyingStipType_36);
      UnderlyingStipulations_NoUnderlyingStips_36.insert(UnderlyingStipType_36.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_36("STRING_1780715853");
      noUnderlyingStips_2_1_1.set(UnderlyingStipValue_36);
      UnderlyingStipulations_NoUnderlyingStips_36.insert(UnderlyingStipValue_36.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_36);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_1);
    }
    {
      FIX50SP2::CollateralResponse::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_37;
      FIX::UnderlyingStipType UnderlyingStipType_37("STRING_1974649565");
      noUnderlyingStips_2_1_2.set(UnderlyingStipType_37);
      UnderlyingStipulations_NoUnderlyingStips_37.insert(UnderlyingStipType_37.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_37("STRING_2085304140");
      noUnderlyingStips_2_1_2.set(UnderlyingStipValue_37);
      UnderlyingStipulations_NoUnderlyingStips_37.insert(UnderlyingStipValue_37.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_37);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::CollateralResponse::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_41;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_41("STRING_1933145311");
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyID_41);
      UndlyInstrumentParties_NoUndlyInstrumentParties_41.insert(UnderlyingInstrumentPartyID_41.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_41('5');
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyIDSource_41);
      UndlyInstrumentParties_NoUndlyInstrumentParties_41.insert(UnderlyingInstrumentPartyIDSource_41.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_41(1842765113);
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyRole_41);
      UndlyInstrumentParties_NoUndlyInstrumentParties_41.insert(UnderlyingInstrumentPartyRole_41.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_41);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_78;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_78("STRING_327071420");
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubID_78);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_78.insert(UnderlyingInstrumentPartySubID_78.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_78(2001451610);
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubIDType_78);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_78.insert(UnderlyingInstrumentPartySubIDType_78.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_78);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::CollateralResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_79;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_79("STRING_1161941382");
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubID_79);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_79.insert(UnderlyingInstrumentPartySubID_79.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_79(1748332598);
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubIDType_79);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_79.insert(UnderlyingInstrumentPartySubIDType_79.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_79);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

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
