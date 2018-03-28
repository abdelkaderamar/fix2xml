#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/Confirmation.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( Confirmation, set_fields)
{

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::Confirmation msg;

  list<multiset<string>> all_values;
  multiset<string> Confirmation_0;
  FIX::AccruedInterestAmt AccruedInterestAmt_8;
  AccruedInterestAmt_8.setString("5682806");
  msg.set(AccruedInterestAmt_8);
  Confirmation_0.insert(AccruedInterestAmt_8.getString());
  FIX::AccruedInterestRate AccruedInterestRate_3;
  AccruedInterestRate_3.setString("53.110000");
  msg.set(AccruedInterestRate_3);
  Confirmation_0.insert(AccruedInterestRate_3.getString());
  FIX::AllocAccount AllocAccount_8("STRING_1015072548");
  msg.set(AllocAccount_8);
  Confirmation_0.insert(AllocAccount_8.getString());
  FIX::AllocAccountType AllocAccountType_0(1);
  msg.set(AllocAccountType_0);
  Confirmation_0.insert(AllocAccountType_0.getString());
  FIX::AllocAcctIDSource AllocAcctIDSource_8(1098817377);
  msg.set(AllocAcctIDSource_8);
  Confirmation_0.insert(AllocAcctIDSource_8.getString());
  FIX::AllocID AllocID_5("STRING_2063979622");
  msg.set(AllocID_5);
  Confirmation_0.insert(AllocID_5.getString());
  FIX::AllocQty AllocQty_8;
  AllocQty_8.setString("10556529");
  msg.set(AllocQty_8);
  Confirmation_0.insert(AllocQty_8.getString());
  FIX::AvgParPx AvgParPx_3;
  AvgParPx_3.setString("17660417");
  msg.set(AvgParPx_3);
  Confirmation_0.insert(AvgParPx_3.getString());
  FIX::AvgPx AvgPx_3;
  AvgPx_3.setString("4786957");
  msg.set(AvgPx_3);
  Confirmation_0.insert(AvgPx_3.getString());
  FIX::AvgPxPrecision AvgPxPrecision_3(841069290);
  msg.set(AvgPxPrecision_3);
  Confirmation_0.insert(AvgPxPrecision_3.getString());
  FIX::Concession Concession_3;
  Concession_3.setString("30243");
  msg.set(Concession_3);
  Confirmation_0.insert(Concession_3.getString());
  FIX::ConfirmID ConfirmID_0("STRING_1558931033");
  msg.set(ConfirmID_0);
  Confirmation_0.insert(ConfirmID_0.getString());
  FIX::ConfirmRefID ConfirmRefID_0("STRING_2014679969");
  msg.set(ConfirmRefID_0);
  Confirmation_0.insert(ConfirmRefID_0.getString());
  FIX::ConfirmReqID ConfirmReqID_0("STRING_1753680521");
  msg.set(ConfirmReqID_0);
  Confirmation_0.insert(ConfirmReqID_0.getString());
  FIX::ConfirmStatus ConfirmStatus_0(3);
  msg.set(ConfirmStatus_0);
  Confirmation_0.insert(ConfirmStatus_0.getString());
  FIX::ConfirmTransType ConfirmTransType_0(1);
  msg.set(ConfirmTransType_0);
  Confirmation_0.insert(ConfirmTransType_0.getString());
  FIX::ConfirmType ConfirmType_0(1);
  msg.set(ConfirmType_0);
  Confirmation_0.insert(ConfirmType_0.getString());
  FIX::CopyMsgIndicator CopyMsgIndicator_0(true);
  msg.set(CopyMsgIndicator_0);
  Confirmation_0.insert(CopyMsgIndicator_0.getString());
  FIX::Currency Currency_12("JPY");
  msg.set(Currency_12);
  Confirmation_0.insert(Currency_12.getString());
  FIX::EncodedText EncodedText_21("DATA_62424525");
  msg.set(EncodedText_21);
  Confirmation_0.insert(EncodedText_21.getString());
  FIX::EncodedTextLen EncodedTextLen_21(1785023037);
  msg.set(EncodedTextLen_21);
  Confirmation_0.insert(EncodedTextLen_21.getString());
  FIX::EndAccruedInterestAmt EndAccruedInterestAmt_8;
  EndAccruedInterestAmt_8.setString("17725858");
  msg.set(EndAccruedInterestAmt_8);
  Confirmation_0.insert(EndAccruedInterestAmt_8.getString());
  FIX::EndCash EndCash_8;
  EndCash_8.setString("4554659");
  msg.set(EndCash_8);
  Confirmation_0.insert(EndCash_8.getString());
  FIX::ExDate ExDate_0("LOCALMKTDATE_1045598092");
  msg.set(ExDate_0);
  Confirmation_0.insert(ExDate_0.getString());
  FIX::GrossTradeAmt GrossTradeAmt_3;
  GrossTradeAmt_3.setString("16091334");
  msg.set(GrossTradeAmt_3);
  Confirmation_0.insert(GrossTradeAmt_3.getString());
  FIX::IndividualAllocID IndividualAllocID_8("STRING_450501714");
  msg.set(IndividualAllocID_8);
  Confirmation_0.insert(IndividualAllocID_8.getString());
  FIX::InterestAtMaturity InterestAtMaturity_3;
  InterestAtMaturity_3.setString("1624298");
  msg.set(InterestAtMaturity_3);
  Confirmation_0.insert(InterestAtMaturity_3.getString());
  FIX::LastMkt LastMkt_4("EXCHANGE_1451877624");
  msg.set(LastMkt_4);
  Confirmation_0.insert(LastMkt_4.getString());
  FIX::LegalConfirm LegalConfirm_3(false);
  msg.set(LegalConfirm_3);
  Confirmation_0.insert(LegalConfirm_3.getString());
  FIX::MaturityNetMoney MaturityNetMoney_0;
  MaturityNetMoney_0.setString("16629081");
  msg.set(MaturityNetMoney_0);
  Confirmation_0.insert(MaturityNetMoney_0.getString());
  FIX::NetMoney NetMoney_3;
  NetMoney_3.setString("20201583");
  msg.set(NetMoney_3);
  Confirmation_0.insert(NetMoney_3.getString());
  FIX::NumDaysInterest NumDaysInterest_3(1117656219);
  msg.set(NumDaysInterest_3);
  Confirmation_0.insert(NumDaysInterest_3.getString());
  FIX::PriceType PriceType_11(2);
  msg.set(PriceType_11);
  Confirmation_0.insert(PriceType_11.getString());
  FIX::ProcessCode ProcessCode_5('3');
  msg.set(ProcessCode_5);
  Confirmation_0.insert(ProcessCode_5.getString());
  FIX::QtyType QtyType_10(1);
  msg.set(QtyType_10);
  Confirmation_0.insert(QtyType_10.getString());
  FIX::ReportedPx ReportedPx_0;
  ReportedPx_0.setString("4469930");
  msg.set(ReportedPx_0);
  Confirmation_0.insert(ReportedPx_0.getString());
  FIX::SecondaryAllocID SecondaryAllocID_5("STRING_1169463200");
  msg.set(SecondaryAllocID_5);
  Confirmation_0.insert(SecondaryAllocID_5.getString());
  FIX::SettlCurrAmt SettlCurrAmt_5;
  SettlCurrAmt_5.setString("18350317");
  msg.set(SettlCurrAmt_5);
  Confirmation_0.insert(SettlCurrAmt_5.getString());
  FIX::SettlCurrFxRate SettlCurrFxRate_5;
  SettlCurrFxRate_5.setString("9256888");
  msg.set(SettlCurrFxRate_5);
  Confirmation_0.insert(SettlCurrFxRate_5.getString());
  FIX::SettlCurrFxRateCalc SettlCurrFxRateCalc_5('M');
  msg.set(SettlCurrFxRateCalc_5);
  Confirmation_0.insert(SettlCurrFxRateCalc_5.getString());
  FIX::SettlCurrency SettlCurrency_5("GBP");
  msg.set(SettlCurrency_5);
  Confirmation_0.insert(SettlCurrency_5.getString());
  FIX::SettlDate SettlDate_15("LOCALMKTDATE_1877728811");
  msg.set(SettlDate_15);
  Confirmation_0.insert(SettlDate_15.getString());
  FIX::SettlType SettlType_9("STRING_6");
  msg.set(SettlType_9);
  Confirmation_0.insert(SettlType_9.getString());
  FIX::SharedCommission SharedCommission_0;
  SharedCommission_0.setString("10836286");
  msg.set(SharedCommission_0);
  Confirmation_0.insert(SharedCommission_0.getString());
  FIX::Side Side_14('F');
  msg.set(Side_14);
  Confirmation_0.insert(Side_14.getString());
  FIX::StartCash StartCash_8;
  StartCash_8.setString("2537815");
  msg.set(StartCash_8);
  Confirmation_0.insert(StartCash_8.getString());
  FIX::Text Text_21("STRING_1202745351");
  msg.set(Text_21);
  Confirmation_0.insert(Text_21.getString());
  FIX::TotalTakedown TotalTakedown_3;
  TotalTakedown_3.setString("15873548");
  msg.set(TotalTakedown_3);
  Confirmation_0.insert(TotalTakedown_3.getString());
  FIX::TradeDate TradeDate_7("LOCALMKTDATE_1015555352");
  msg.set(TradeDate_7);
  Confirmation_0.insert(TradeDate_7.getString());
  FIX::TransactTime TransactTime_10(FIX::UTCTIMESTAMP(2, 44, 52, 14, 1, 2008));
  msg.set(TransactTime_10);
  Confirmation_0.insert(TransactTime_10.getString());
  all_values.push_back(Confirmation_0);

  // CommissionData
  multiset<string> CommissionData_8;
  FIX::CommCurrency CommCurrency_8("USD");
  msg.set(CommCurrency_8);
  CommissionData_8.insert(CommCurrency_8.getString());
  FIX::CommType CommType_8('3');
  msg.set(CommType_8);
  CommissionData_8.insert(CommType_8.getString());
  FIX::Commission Commission_8;
  Commission_8.setString("19483466");
  msg.set(Commission_8);
  CommissionData_8.insert(Commission_8.getString());
  FIX::FundRenewWaiv FundRenewWaiv_8('Y');
  msg.set(FundRenewWaiv_8);
  CommissionData_8.insert(FundRenewWaiv_8.getString());
  all_values.push_back(CommissionData_8);

  // CpctyConfGrp
  // Group CpctyConfGrp.NoCapacities
  {
    FIX50SP2::Confirmation::NoCapacities noCapacities_0_0;
    // CpctyConfGrp.NoCapacities
    multiset<string> CpctyConfGrp_NoCapacities_0;
    FIX::OrderCapacity OrderCapacity_0('W');
    noCapacities_0_0.set(OrderCapacity_0);
    CpctyConfGrp_NoCapacities_0.insert(OrderCapacity_0.getString());
    FIX::OrderCapacityQty OrderCapacityQty_0;
    OrderCapacityQty_0.setString("15406698");
    noCapacities_0_0.set(OrderCapacityQty_0);
    CpctyConfGrp_NoCapacities_0.insert(OrderCapacityQty_0.getString());
    FIX::OrderRestrictions OrderRestrictions_0("MULTIPLECHARVALUE_E");
    noCapacities_0_0.set(OrderRestrictions_0);
    CpctyConfGrp_NoCapacities_0.insert(OrderRestrictions_0.getString());
    all_values.push_back(CpctyConfGrp_NoCapacities_0);

    msg.addGroup(noCapacities_0_0);
  }
  // FinancingDetails
  multiset<string> FinancingDetails_9;
  FIX::AgreementCurrency AgreementCurrency_9("CHF");
  msg.set(AgreementCurrency_9);
  FinancingDetails_9.insert(AgreementCurrency_9.getString());
  FIX::AgreementDate AgreementDate_9("LOCALMKTDATE_2114722711");
  msg.set(AgreementDate_9);
  FinancingDetails_9.insert(AgreementDate_9.getString());
  FIX::AgreementDesc AgreementDesc_9("STRING_1704041995");
  msg.set(AgreementDesc_9);
  FinancingDetails_9.insert(AgreementDesc_9.getString());
  FIX::AgreementID AgreementID_9("STRING_425698239");
  msg.set(AgreementID_9);
  FinancingDetails_9.insert(AgreementID_9.getString());
  FIX::DeliveryType DeliveryType_9(1);
  msg.set(DeliveryType_9);
  FinancingDetails_9.insert(DeliveryType_9.getString());
  FIX::EndDate EndDate_9("LOCALMKTDATE_2041178206");
  msg.set(EndDate_9);
  FinancingDetails_9.insert(EndDate_9.getString());
  FIX::MarginRatio MarginRatio_9;
  MarginRatio_9.setString("34.030000");
  msg.set(MarginRatio_9);
  FinancingDetails_9.insert(MarginRatio_9.getString());
  FIX::StartDate StartDate_9("LOCALMKTDATE_1102064395");
  msg.set(StartDate_9);
  FinancingDetails_9.insert(StartDate_9.getString());
  FIX::TerminationType TerminationType_9(3);
  msg.set(TerminationType_9);
  FinancingDetails_9.insert(TerminationType_9.getString());
  all_values.push_back(FinancingDetails_9);

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::Confirmation::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_18;
    FIX::EncodedLegIssuer EncodedLegIssuer_18("DATA_1355845932");
    noLegs_0_0.set(EncodedLegIssuer_18);
    InstrumentLeg_18.insert(EncodedLegIssuer_18.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_18(32584873);
    noLegs_0_0.set(EncodedLegIssuerLen_18);
    InstrumentLeg_18.insert(EncodedLegIssuerLen_18.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_18("DATA_1948160886");
    noLegs_0_0.set(EncodedLegSecurityDesc_18);
    InstrumentLeg_18.insert(EncodedLegSecurityDesc_18.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_18(223917636);
    noLegs_0_0.set(EncodedLegSecurityDescLen_18);
    InstrumentLeg_18.insert(EncodedLegSecurityDescLen_18.getString());
    FIX::LegCFICode LegCFICode_18("STRING_1297754750");
    noLegs_0_0.set(LegCFICode_18);
    InstrumentLeg_18.insert(LegCFICode_18.getString());
    FIX::LegContractMultiplier LegContractMultiplier_18;
    LegContractMultiplier_18.setString("10255714");
    noLegs_0_0.set(LegContractMultiplier_18);
    InstrumentLeg_18.insert(LegContractMultiplier_18.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_18(864575180);
    noLegs_0_0.set(LegContractMultiplierUnit_18);
    InstrumentLeg_18.insert(LegContractMultiplierUnit_18.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_18("MONTHYEAR_870906934");
    noLegs_0_0.set(LegContractSettlMonth_18);
    InstrumentLeg_18.insert(LegContractSettlMonth_18.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_18("COUNTRY_1148580118");
    noLegs_0_0.set(LegCountryOfIssue_18);
    InstrumentLeg_18.insert(LegCountryOfIssue_18.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_18("LOCALMKTDATE_966882477");
    noLegs_0_0.set(LegCouponPaymentDate_18);
    InstrumentLeg_18.insert(LegCouponPaymentDate_18.getString());
    FIX::LegCouponRate LegCouponRate_18;
    LegCouponRate_18.setString("8.330000");
    noLegs_0_0.set(LegCouponRate_18);
    InstrumentLeg_18.insert(LegCouponRate_18.getString());
    FIX::LegCreditRating LegCreditRating_18("STRING_1434018619");
    noLegs_0_0.set(LegCreditRating_18);
    InstrumentLeg_18.insert(LegCreditRating_18.getString());
    FIX::LegCurrency LegCurrency_18("CHF");
    noLegs_0_0.set(LegCurrency_18);
    InstrumentLeg_18.insert(LegCurrency_18.getString());
    FIX::LegDatedDate LegDatedDate_18("LOCALMKTDATE_1234881653");
    noLegs_0_0.set(LegDatedDate_18);
    InstrumentLeg_18.insert(LegDatedDate_18.getString());
    FIX::LegExerciseStyle LegExerciseStyle_18(1800443328);
    noLegs_0_0.set(LegExerciseStyle_18);
    InstrumentLeg_18.insert(LegExerciseStyle_18.getString());
    FIX::LegFactor LegFactor_18;
    LegFactor_18.setString("1983066");
    noLegs_0_0.set(LegFactor_18);
    InstrumentLeg_18.insert(LegFactor_18.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_18(1566241768);
    noLegs_0_0.set(LegFlowScheduleType_18);
    InstrumentLeg_18.insert(LegFlowScheduleType_18.getString());
    FIX::LegInstrRegistry LegInstrRegistry_18("STRING_1193629526");
    noLegs_0_0.set(LegInstrRegistry_18);
    InstrumentLeg_18.insert(LegInstrRegistry_18.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_18("LOCALMKTDATE_477997637");
    noLegs_0_0.set(LegInterestAccrualDate_18);
    InstrumentLeg_18.insert(LegInterestAccrualDate_18.getString());
    FIX::LegIssueDate LegIssueDate_18("LOCALMKTDATE_197111290");
    noLegs_0_0.set(LegIssueDate_18);
    InstrumentLeg_18.insert(LegIssueDate_18.getString());
    FIX::LegIssuer LegIssuer_18("STRING_1756278923");
    noLegs_0_0.set(LegIssuer_18);
    InstrumentLeg_18.insert(LegIssuer_18.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_18("STRING_445236701");
    noLegs_0_0.set(LegLocaleOfIssue_18);
    InstrumentLeg_18.insert(LegLocaleOfIssue_18.getString());
    FIX::LegMaturityDate LegMaturityDate_18("LOCALMKTDATE_1901153286");
    noLegs_0_0.set(LegMaturityDate_18);
    InstrumentLeg_18.insert(LegMaturityDate_18.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_18("MONTHYEAR_34493515");
    noLegs_0_0.set(LegMaturityMonthYear_18);
    InstrumentLeg_18.insert(LegMaturityMonthYear_18.getString());
    FIX::LegMaturityTime LegMaturityTime_18("TZTIMEONLY_103048170");
    noLegs_0_0.set(LegMaturityTime_18);
    InstrumentLeg_18.insert(LegMaturityTime_18.getString());
    FIX::LegOptAttribute LegOptAttribute_18('1');
    noLegs_0_0.set(LegOptAttribute_18);
    InstrumentLeg_18.insert(LegOptAttribute_18.getString());
    FIX::LegOptionRatio LegOptionRatio_18;
    LegOptionRatio_18.setString("1904369");
    noLegs_0_0.set(LegOptionRatio_18);
    InstrumentLeg_18.insert(LegOptionRatio_18.getString());
    FIX::LegPool LegPool_18("STRING_1205112565");
    noLegs_0_0.set(LegPool_18);
    InstrumentLeg_18.insert(LegPool_18.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_18("STRING_624687366");
    noLegs_0_0.set(LegPriceUnitOfMeasure_18);
    InstrumentLeg_18.insert(LegPriceUnitOfMeasure_18.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_18;
    LegPriceUnitOfMeasureQty_18.setString("5512429");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_18);
    InstrumentLeg_18.insert(LegPriceUnitOfMeasureQty_18.getString());
    FIX::LegProduct LegProduct_18(413474849);
    noLegs_0_0.set(LegProduct_18);
    InstrumentLeg_18.insert(LegProduct_18.getString());
    FIX::LegPutOrCall LegPutOrCall_18(657272240);
    noLegs_0_0.set(LegPutOrCall_18);
    InstrumentLeg_18.insert(LegPutOrCall_18.getString());
    FIX::LegRatioQty LegRatioQty_18;
    LegRatioQty_18.setString("3519202");
    noLegs_0_0.set(LegRatioQty_18);
    InstrumentLeg_18.insert(LegRatioQty_18.getString());
    FIX::LegRedemptionDate LegRedemptionDate_18("LOCALMKTDATE_637392486");
    noLegs_0_0.set(LegRedemptionDate_18);
    InstrumentLeg_18.insert(LegRedemptionDate_18.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_18("STRING_1955026990");
    noLegs_0_0.set(LegRepoCollateralSecurityType_18);
    InstrumentLeg_18.insert(LegRepoCollateralSecurityType_18.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_18;
    LegRepurchaseRate_18.setString("16.690000");
    noLegs_0_0.set(LegRepurchaseRate_18);
    InstrumentLeg_18.insert(LegRepurchaseRate_18.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_18(1501967666);
    noLegs_0_0.set(LegRepurchaseTerm_18);
    InstrumentLeg_18.insert(LegRepurchaseTerm_18.getString());
    FIX::LegSecurityDesc LegSecurityDesc_18("STRING_678450276");
    noLegs_0_0.set(LegSecurityDesc_18);
    InstrumentLeg_18.insert(LegSecurityDesc_18.getString());
    FIX::LegSecurityExchange LegSecurityExchange_18("EXCHANGE_378588139");
    noLegs_0_0.set(LegSecurityExchange_18);
    InstrumentLeg_18.insert(LegSecurityExchange_18.getString());
    FIX::LegSecurityID LegSecurityID_18("STRING_321366495");
    noLegs_0_0.set(LegSecurityID_18);
    InstrumentLeg_18.insert(LegSecurityID_18.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_18("STRING_1573011109");
    noLegs_0_0.set(LegSecurityIDSource_18);
    InstrumentLeg_18.insert(LegSecurityIDSource_18.getString());
    FIX::LegSecuritySubType LegSecuritySubType_18("STRING_1812606759");
    noLegs_0_0.set(LegSecuritySubType_18);
    InstrumentLeg_18.insert(LegSecuritySubType_18.getString());
    FIX::LegSecurityType LegSecurityType_18("STRING_694950245");
    noLegs_0_0.set(LegSecurityType_18);
    InstrumentLeg_18.insert(LegSecurityType_18.getString());
    FIX::LegSide LegSide_18('1');
    noLegs_0_0.set(LegSide_18);
    InstrumentLeg_18.insert(LegSide_18.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_18("STRING_900004764");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_18);
    InstrumentLeg_18.insert(LegStateOrProvinceOfIssue_18.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_18("USD");
    noLegs_0_0.set(LegStrikeCurrency_18);
    InstrumentLeg_18.insert(LegStrikeCurrency_18.getString());
    FIX::LegStrikePrice LegStrikePrice_18;
    LegStrikePrice_18.setString("3187628");
    noLegs_0_0.set(LegStrikePrice_18);
    InstrumentLeg_18.insert(LegStrikePrice_18.getString());
    FIX::LegSymbol LegSymbol_18("STRING_1541539451");
    noLegs_0_0.set(LegSymbol_18);
    InstrumentLeg_18.insert(LegSymbol_18.getString());
    FIX::LegSymbolSfx LegSymbolSfx_18("STRING_89437402");
    noLegs_0_0.set(LegSymbolSfx_18);
    InstrumentLeg_18.insert(LegSymbolSfx_18.getString());
    FIX::LegTimeUnit LegTimeUnit_18("STRING_515874175");
    noLegs_0_0.set(LegTimeUnit_18);
    InstrumentLeg_18.insert(LegTimeUnit_18.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_18("STRING_1150334727");
    noLegs_0_0.set(LegUnitOfMeasure_18);
    InstrumentLeg_18.insert(LegUnitOfMeasure_18.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_18;
    LegUnitOfMeasureQty_18.setString("5346741");
    noLegs_0_0.set(LegUnitOfMeasureQty_18);
    InstrumentLeg_18.insert(LegUnitOfMeasureQty_18.getString());
    all_values.push_back(InstrumentLeg_18);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::Confirmation::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_41;
      FIX::LegSecurityAltID LegSecurityAltID_41("STRING_1184828242");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_41);
      LegSecAltIDGrp_NoLegSecurityAltID_41.insert(LegSecurityAltID_41.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_41("STRING_637722273");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_41);
      LegSecAltIDGrp_NoLegSecurityAltID_41.insert(LegSecurityAltIDSource_41.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_41);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::Confirmation::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_42;
      FIX::LegSecurityAltID LegSecurityAltID_42("STRING_2064391657");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_42);
      LegSecAltIDGrp_NoLegSecurityAltID_42.insert(LegSecurityAltID_42.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_42("STRING_1375265160");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_42);
      LegSecAltIDGrp_NoLegSecurityAltID_42.insert(LegSecurityAltIDSource_42.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_42);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::Confirmation::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_43;
      FIX::LegSecurityAltID LegSecurityAltID_43("STRING_1842834838");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltID_43);
      LegSecAltIDGrp_NoLegSecurityAltID_43.insert(LegSecurityAltID_43.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_43("STRING_541595376");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltIDSource_43);
      LegSecAltIDGrp_NoLegSecurityAltID_43.insert(LegSecurityAltIDSource_43.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_43);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_2);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::Confirmation::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_19;
    FIX::EncodedLegIssuer EncodedLegIssuer_19("DATA_1926508135");
    noLegs_0_1.set(EncodedLegIssuer_19);
    InstrumentLeg_19.insert(EncodedLegIssuer_19.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_19(108826040);
    noLegs_0_1.set(EncodedLegIssuerLen_19);
    InstrumentLeg_19.insert(EncodedLegIssuerLen_19.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_19("DATA_1198867616");
    noLegs_0_1.set(EncodedLegSecurityDesc_19);
    InstrumentLeg_19.insert(EncodedLegSecurityDesc_19.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_19(130944701);
    noLegs_0_1.set(EncodedLegSecurityDescLen_19);
    InstrumentLeg_19.insert(EncodedLegSecurityDescLen_19.getString());
    FIX::LegCFICode LegCFICode_19("STRING_746218526");
    noLegs_0_1.set(LegCFICode_19);
    InstrumentLeg_19.insert(LegCFICode_19.getString());
    FIX::LegContractMultiplier LegContractMultiplier_19;
    LegContractMultiplier_19.setString("10064109");
    noLegs_0_1.set(LegContractMultiplier_19);
    InstrumentLeg_19.insert(LegContractMultiplier_19.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_19(1508436370);
    noLegs_0_1.set(LegContractMultiplierUnit_19);
    InstrumentLeg_19.insert(LegContractMultiplierUnit_19.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_19("MONTHYEAR_100702544");
    noLegs_0_1.set(LegContractSettlMonth_19);
    InstrumentLeg_19.insert(LegContractSettlMonth_19.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_19("COUNTRY_1684861234");
    noLegs_0_1.set(LegCountryOfIssue_19);
    InstrumentLeg_19.insert(LegCountryOfIssue_19.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_19("LOCALMKTDATE_1887024510");
    noLegs_0_1.set(LegCouponPaymentDate_19);
    InstrumentLeg_19.insert(LegCouponPaymentDate_19.getString());
    FIX::LegCouponRate LegCouponRate_19;
    LegCouponRate_19.setString("90.400000");
    noLegs_0_1.set(LegCouponRate_19);
    InstrumentLeg_19.insert(LegCouponRate_19.getString());
    FIX::LegCreditRating LegCreditRating_19("STRING_1110388696");
    noLegs_0_1.set(LegCreditRating_19);
    InstrumentLeg_19.insert(LegCreditRating_19.getString());
    FIX::LegCurrency LegCurrency_19("CAN");
    noLegs_0_1.set(LegCurrency_19);
    InstrumentLeg_19.insert(LegCurrency_19.getString());
    FIX::LegDatedDate LegDatedDate_19("LOCALMKTDATE_523521796");
    noLegs_0_1.set(LegDatedDate_19);
    InstrumentLeg_19.insert(LegDatedDate_19.getString());
    FIX::LegExerciseStyle LegExerciseStyle_19(304668737);
    noLegs_0_1.set(LegExerciseStyle_19);
    InstrumentLeg_19.insert(LegExerciseStyle_19.getString());
    FIX::LegFactor LegFactor_19;
    LegFactor_19.setString("14649292");
    noLegs_0_1.set(LegFactor_19);
    InstrumentLeg_19.insert(LegFactor_19.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_19(134961561);
    noLegs_0_1.set(LegFlowScheduleType_19);
    InstrumentLeg_19.insert(LegFlowScheduleType_19.getString());
    FIX::LegInstrRegistry LegInstrRegistry_19("STRING_623431622");
    noLegs_0_1.set(LegInstrRegistry_19);
    InstrumentLeg_19.insert(LegInstrRegistry_19.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_19("LOCALMKTDATE_858985014");
    noLegs_0_1.set(LegInterestAccrualDate_19);
    InstrumentLeg_19.insert(LegInterestAccrualDate_19.getString());
    FIX::LegIssueDate LegIssueDate_19("LOCALMKTDATE_224398963");
    noLegs_0_1.set(LegIssueDate_19);
    InstrumentLeg_19.insert(LegIssueDate_19.getString());
    FIX::LegIssuer LegIssuer_19("STRING_1139305798");
    noLegs_0_1.set(LegIssuer_19);
    InstrumentLeg_19.insert(LegIssuer_19.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_19("STRING_2009319741");
    noLegs_0_1.set(LegLocaleOfIssue_19);
    InstrumentLeg_19.insert(LegLocaleOfIssue_19.getString());
    FIX::LegMaturityDate LegMaturityDate_19("LOCALMKTDATE_759073066");
    noLegs_0_1.set(LegMaturityDate_19);
    InstrumentLeg_19.insert(LegMaturityDate_19.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_19("MONTHYEAR_1408849611");
    noLegs_0_1.set(LegMaturityMonthYear_19);
    InstrumentLeg_19.insert(LegMaturityMonthYear_19.getString());
    FIX::LegMaturityTime LegMaturityTime_19("TZTIMEONLY_1046664335");
    noLegs_0_1.set(LegMaturityTime_19);
    InstrumentLeg_19.insert(LegMaturityTime_19.getString());
    FIX::LegOptAttribute LegOptAttribute_19('1');
    noLegs_0_1.set(LegOptAttribute_19);
    InstrumentLeg_19.insert(LegOptAttribute_19.getString());
    FIX::LegOptionRatio LegOptionRatio_19;
    LegOptionRatio_19.setString("13257576");
    noLegs_0_1.set(LegOptionRatio_19);
    InstrumentLeg_19.insert(LegOptionRatio_19.getString());
    FIX::LegPool LegPool_19("STRING_274445847");
    noLegs_0_1.set(LegPool_19);
    InstrumentLeg_19.insert(LegPool_19.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_19("STRING_1092146529");
    noLegs_0_1.set(LegPriceUnitOfMeasure_19);
    InstrumentLeg_19.insert(LegPriceUnitOfMeasure_19.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_19;
    LegPriceUnitOfMeasureQty_19.setString("18673529");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_19);
    InstrumentLeg_19.insert(LegPriceUnitOfMeasureQty_19.getString());
    FIX::LegProduct LegProduct_19(53470334);
    noLegs_0_1.set(LegProduct_19);
    InstrumentLeg_19.insert(LegProduct_19.getString());
    FIX::LegPutOrCall LegPutOrCall_19(1200972569);
    noLegs_0_1.set(LegPutOrCall_19);
    InstrumentLeg_19.insert(LegPutOrCall_19.getString());
    FIX::LegRatioQty LegRatioQty_19;
    LegRatioQty_19.setString("9187369");
    noLegs_0_1.set(LegRatioQty_19);
    InstrumentLeg_19.insert(LegRatioQty_19.getString());
    FIX::LegRedemptionDate LegRedemptionDate_19("LOCALMKTDATE_184415035");
    noLegs_0_1.set(LegRedemptionDate_19);
    InstrumentLeg_19.insert(LegRedemptionDate_19.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_19("STRING_1947191095");
    noLegs_0_1.set(LegRepoCollateralSecurityType_19);
    InstrumentLeg_19.insert(LegRepoCollateralSecurityType_19.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_19;
    LegRepurchaseRate_19.setString("79.230000");
    noLegs_0_1.set(LegRepurchaseRate_19);
    InstrumentLeg_19.insert(LegRepurchaseRate_19.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_19(1692851406);
    noLegs_0_1.set(LegRepurchaseTerm_19);
    InstrumentLeg_19.insert(LegRepurchaseTerm_19.getString());
    FIX::LegSecurityDesc LegSecurityDesc_19("STRING_2047893640");
    noLegs_0_1.set(LegSecurityDesc_19);
    InstrumentLeg_19.insert(LegSecurityDesc_19.getString());
    FIX::LegSecurityExchange LegSecurityExchange_19("EXCHANGE_1462525509");
    noLegs_0_1.set(LegSecurityExchange_19);
    InstrumentLeg_19.insert(LegSecurityExchange_19.getString());
    FIX::LegSecurityID LegSecurityID_19("STRING_1432392268");
    noLegs_0_1.set(LegSecurityID_19);
    InstrumentLeg_19.insert(LegSecurityID_19.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_19("STRING_322479032");
    noLegs_0_1.set(LegSecurityIDSource_19);
    InstrumentLeg_19.insert(LegSecurityIDSource_19.getString());
    FIX::LegSecuritySubType LegSecuritySubType_19("STRING_425430557");
    noLegs_0_1.set(LegSecuritySubType_19);
    InstrumentLeg_19.insert(LegSecuritySubType_19.getString());
    FIX::LegSecurityType LegSecurityType_19("STRING_837056241");
    noLegs_0_1.set(LegSecurityType_19);
    InstrumentLeg_19.insert(LegSecurityType_19.getString());
    FIX::LegSide LegSide_19('1');
    noLegs_0_1.set(LegSide_19);
    InstrumentLeg_19.insert(LegSide_19.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_19("STRING_948952354");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_19);
    InstrumentLeg_19.insert(LegStateOrProvinceOfIssue_19.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_19("EUR");
    noLegs_0_1.set(LegStrikeCurrency_19);
    InstrumentLeg_19.insert(LegStrikeCurrency_19.getString());
    FIX::LegStrikePrice LegStrikePrice_19;
    LegStrikePrice_19.setString("10839139");
    noLegs_0_1.set(LegStrikePrice_19);
    InstrumentLeg_19.insert(LegStrikePrice_19.getString());
    FIX::LegSymbol LegSymbol_19("STRING_1765156601");
    noLegs_0_1.set(LegSymbol_19);
    InstrumentLeg_19.insert(LegSymbol_19.getString());
    FIX::LegSymbolSfx LegSymbolSfx_19("STRING_1615928893");
    noLegs_0_1.set(LegSymbolSfx_19);
    InstrumentLeg_19.insert(LegSymbolSfx_19.getString());
    FIX::LegTimeUnit LegTimeUnit_19("STRING_1308312878");
    noLegs_0_1.set(LegTimeUnit_19);
    InstrumentLeg_19.insert(LegTimeUnit_19.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_19("STRING_756978751");
    noLegs_0_1.set(LegUnitOfMeasure_19);
    InstrumentLeg_19.insert(LegUnitOfMeasure_19.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_19;
    LegUnitOfMeasureQty_19.setString("14777649");
    noLegs_0_1.set(LegUnitOfMeasureQty_19);
    InstrumentLeg_19.insert(LegUnitOfMeasureQty_19.getString());
    all_values.push_back(InstrumentLeg_19);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::Confirmation::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_44;
      FIX::LegSecurityAltID LegSecurityAltID_44("STRING_18344714");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_44);
      LegSecAltIDGrp_NoLegSecurityAltID_44.insert(LegSecurityAltID_44.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_44("STRING_376945673");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_44);
      LegSecAltIDGrp_NoLegSecurityAltID_44.insert(LegSecurityAltIDSource_44.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_44);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    msg.addGroup(noLegs_0_1);
  }
  {
    FIX50SP2::Confirmation::NoLegs noLegs_0_2;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_20;
    FIX::EncodedLegIssuer EncodedLegIssuer_20("DATA_1316697635");
    noLegs_0_2.set(EncodedLegIssuer_20);
    InstrumentLeg_20.insert(EncodedLegIssuer_20.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_20(1344102335);
    noLegs_0_2.set(EncodedLegIssuerLen_20);
    InstrumentLeg_20.insert(EncodedLegIssuerLen_20.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_20("DATA_651391520");
    noLegs_0_2.set(EncodedLegSecurityDesc_20);
    InstrumentLeg_20.insert(EncodedLegSecurityDesc_20.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_20(261360516);
    noLegs_0_2.set(EncodedLegSecurityDescLen_20);
    InstrumentLeg_20.insert(EncodedLegSecurityDescLen_20.getString());
    FIX::LegCFICode LegCFICode_20("STRING_1063971684");
    noLegs_0_2.set(LegCFICode_20);
    InstrumentLeg_20.insert(LegCFICode_20.getString());
    FIX::LegContractMultiplier LegContractMultiplier_20;
    LegContractMultiplier_20.setString("7048618");
    noLegs_0_2.set(LegContractMultiplier_20);
    InstrumentLeg_20.insert(LegContractMultiplier_20.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_20(1462333086);
    noLegs_0_2.set(LegContractMultiplierUnit_20);
    InstrumentLeg_20.insert(LegContractMultiplierUnit_20.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_20("MONTHYEAR_1982708649");
    noLegs_0_2.set(LegContractSettlMonth_20);
    InstrumentLeg_20.insert(LegContractSettlMonth_20.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_20("COUNTRY_889276890");
    noLegs_0_2.set(LegCountryOfIssue_20);
    InstrumentLeg_20.insert(LegCountryOfIssue_20.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_20("LOCALMKTDATE_1262040533");
    noLegs_0_2.set(LegCouponPaymentDate_20);
    InstrumentLeg_20.insert(LegCouponPaymentDate_20.getString());
    FIX::LegCouponRate LegCouponRate_20;
    LegCouponRate_20.setString("29.240000");
    noLegs_0_2.set(LegCouponRate_20);
    InstrumentLeg_20.insert(LegCouponRate_20.getString());
    FIX::LegCreditRating LegCreditRating_20("STRING_434644648");
    noLegs_0_2.set(LegCreditRating_20);
    InstrumentLeg_20.insert(LegCreditRating_20.getString());
    FIX::LegCurrency LegCurrency_20("JPY");
    noLegs_0_2.set(LegCurrency_20);
    InstrumentLeg_20.insert(LegCurrency_20.getString());
    FIX::LegDatedDate LegDatedDate_20("LOCALMKTDATE_1867036916");
    noLegs_0_2.set(LegDatedDate_20);
    InstrumentLeg_20.insert(LegDatedDate_20.getString());
    FIX::LegExerciseStyle LegExerciseStyle_20(1484929557);
    noLegs_0_2.set(LegExerciseStyle_20);
    InstrumentLeg_20.insert(LegExerciseStyle_20.getString());
    FIX::LegFactor LegFactor_20;
    LegFactor_20.setString("15008453");
    noLegs_0_2.set(LegFactor_20);
    InstrumentLeg_20.insert(LegFactor_20.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_20(556609509);
    noLegs_0_2.set(LegFlowScheduleType_20);
    InstrumentLeg_20.insert(LegFlowScheduleType_20.getString());
    FIX::LegInstrRegistry LegInstrRegistry_20("STRING_776944226");
    noLegs_0_2.set(LegInstrRegistry_20);
    InstrumentLeg_20.insert(LegInstrRegistry_20.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_20("LOCALMKTDATE_302314049");
    noLegs_0_2.set(LegInterestAccrualDate_20);
    InstrumentLeg_20.insert(LegInterestAccrualDate_20.getString());
    FIX::LegIssueDate LegIssueDate_20("LOCALMKTDATE_1698334488");
    noLegs_0_2.set(LegIssueDate_20);
    InstrumentLeg_20.insert(LegIssueDate_20.getString());
    FIX::LegIssuer LegIssuer_20("STRING_1533888106");
    noLegs_0_2.set(LegIssuer_20);
    InstrumentLeg_20.insert(LegIssuer_20.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_20("STRING_1386227964");
    noLegs_0_2.set(LegLocaleOfIssue_20);
    InstrumentLeg_20.insert(LegLocaleOfIssue_20.getString());
    FIX::LegMaturityDate LegMaturityDate_20("LOCALMKTDATE_1316007441");
    noLegs_0_2.set(LegMaturityDate_20);
    InstrumentLeg_20.insert(LegMaturityDate_20.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_20("MONTHYEAR_1002333351");
    noLegs_0_2.set(LegMaturityMonthYear_20);
    InstrumentLeg_20.insert(LegMaturityMonthYear_20.getString());
    FIX::LegMaturityTime LegMaturityTime_20("TZTIMEONLY_547057194");
    noLegs_0_2.set(LegMaturityTime_20);
    InstrumentLeg_20.insert(LegMaturityTime_20.getString());
    FIX::LegOptAttribute LegOptAttribute_20('2');
    noLegs_0_2.set(LegOptAttribute_20);
    InstrumentLeg_20.insert(LegOptAttribute_20.getString());
    FIX::LegOptionRatio LegOptionRatio_20;
    LegOptionRatio_20.setString("3326146");
    noLegs_0_2.set(LegOptionRatio_20);
    InstrumentLeg_20.insert(LegOptionRatio_20.getString());
    FIX::LegPool LegPool_20("STRING_466959490");
    noLegs_0_2.set(LegPool_20);
    InstrumentLeg_20.insert(LegPool_20.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_20("STRING_2091330906");
    noLegs_0_2.set(LegPriceUnitOfMeasure_20);
    InstrumentLeg_20.insert(LegPriceUnitOfMeasure_20.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_20;
    LegPriceUnitOfMeasureQty_20.setString("7095603");
    noLegs_0_2.set(LegPriceUnitOfMeasureQty_20);
    InstrumentLeg_20.insert(LegPriceUnitOfMeasureQty_20.getString());
    FIX::LegProduct LegProduct_20(1783657125);
    noLegs_0_2.set(LegProduct_20);
    InstrumentLeg_20.insert(LegProduct_20.getString());
    FIX::LegPutOrCall LegPutOrCall_20(1287949594);
    noLegs_0_2.set(LegPutOrCall_20);
    InstrumentLeg_20.insert(LegPutOrCall_20.getString());
    FIX::LegRatioQty LegRatioQty_20;
    LegRatioQty_20.setString("13609518");
    noLegs_0_2.set(LegRatioQty_20);
    InstrumentLeg_20.insert(LegRatioQty_20.getString());
    FIX::LegRedemptionDate LegRedemptionDate_20("LOCALMKTDATE_2045017642");
    noLegs_0_2.set(LegRedemptionDate_20);
    InstrumentLeg_20.insert(LegRedemptionDate_20.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_20("STRING_204437630");
    noLegs_0_2.set(LegRepoCollateralSecurityType_20);
    InstrumentLeg_20.insert(LegRepoCollateralSecurityType_20.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_20;
    LegRepurchaseRate_20.setString("37.390000");
    noLegs_0_2.set(LegRepurchaseRate_20);
    InstrumentLeg_20.insert(LegRepurchaseRate_20.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_20(1359867080);
    noLegs_0_2.set(LegRepurchaseTerm_20);
    InstrumentLeg_20.insert(LegRepurchaseTerm_20.getString());
    FIX::LegSecurityDesc LegSecurityDesc_20("STRING_39662632");
    noLegs_0_2.set(LegSecurityDesc_20);
    InstrumentLeg_20.insert(LegSecurityDesc_20.getString());
    FIX::LegSecurityExchange LegSecurityExchange_20("EXCHANGE_807606981");
    noLegs_0_2.set(LegSecurityExchange_20);
    InstrumentLeg_20.insert(LegSecurityExchange_20.getString());
    FIX::LegSecurityID LegSecurityID_20("STRING_474423965");
    noLegs_0_2.set(LegSecurityID_20);
    InstrumentLeg_20.insert(LegSecurityID_20.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_20("STRING_1800035556");
    noLegs_0_2.set(LegSecurityIDSource_20);
    InstrumentLeg_20.insert(LegSecurityIDSource_20.getString());
    FIX::LegSecuritySubType LegSecuritySubType_20("STRING_1242251630");
    noLegs_0_2.set(LegSecuritySubType_20);
    InstrumentLeg_20.insert(LegSecuritySubType_20.getString());
    FIX::LegSecurityType LegSecurityType_20("STRING_1636874491");
    noLegs_0_2.set(LegSecurityType_20);
    InstrumentLeg_20.insert(LegSecurityType_20.getString());
    FIX::LegSide LegSide_20('7');
    noLegs_0_2.set(LegSide_20);
    InstrumentLeg_20.insert(LegSide_20.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_20("STRING_961804898");
    noLegs_0_2.set(LegStateOrProvinceOfIssue_20);
    InstrumentLeg_20.insert(LegStateOrProvinceOfIssue_20.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_20("JPY");
    noLegs_0_2.set(LegStrikeCurrency_20);
    InstrumentLeg_20.insert(LegStrikeCurrency_20.getString());
    FIX::LegStrikePrice LegStrikePrice_20;
    LegStrikePrice_20.setString("15184144");
    noLegs_0_2.set(LegStrikePrice_20);
    InstrumentLeg_20.insert(LegStrikePrice_20.getString());
    FIX::LegSymbol LegSymbol_20("STRING_1751264627");
    noLegs_0_2.set(LegSymbol_20);
    InstrumentLeg_20.insert(LegSymbol_20.getString());
    FIX::LegSymbolSfx LegSymbolSfx_20("STRING_383642439");
    noLegs_0_2.set(LegSymbolSfx_20);
    InstrumentLeg_20.insert(LegSymbolSfx_20.getString());
    FIX::LegTimeUnit LegTimeUnit_20("STRING_1069265248");
    noLegs_0_2.set(LegTimeUnit_20);
    InstrumentLeg_20.insert(LegTimeUnit_20.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_20("STRING_1137669085");
    noLegs_0_2.set(LegUnitOfMeasure_20);
    InstrumentLeg_20.insert(LegUnitOfMeasure_20.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_20;
    LegUnitOfMeasureQty_20.setString("17698704");
    noLegs_0_2.set(LegUnitOfMeasureQty_20);
    InstrumentLeg_20.insert(LegUnitOfMeasureQty_20.getString());
    all_values.push_back(InstrumentLeg_20);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::Confirmation::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_45;
      FIX::LegSecurityAltID LegSecurityAltID_45("STRING_2140002436");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltID_45);
      LegSecAltIDGrp_NoLegSecurityAltID_45.insert(LegSecurityAltID_45.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_45("STRING_169443950");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltIDSource_45);
      LegSecAltIDGrp_NoLegSecurityAltID_45.insert(LegSecurityAltIDSource_45.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_45);

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::Confirmation::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_46;
      FIX::LegSecurityAltID LegSecurityAltID_46("STRING_163291585");
      noLegSecurityAltID_2_1_1.set(LegSecurityAltID_46);
      LegSecAltIDGrp_NoLegSecurityAltID_46.insert(LegSecurityAltID_46.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_46("STRING_325133478");
      noLegSecurityAltID_2_1_1.set(LegSecurityAltIDSource_46);
      LegSecAltIDGrp_NoLegSecurityAltID_46.insert(LegSecurityAltIDSource_46.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_46);

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_1);
    }
    {
      FIX50SP2::Confirmation::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_47;
      FIX::LegSecurityAltID LegSecurityAltID_47("STRING_636403441");
      noLegSecurityAltID_2_1_2.set(LegSecurityAltID_47);
      LegSecAltIDGrp_NoLegSecurityAltID_47.insert(LegSecurityAltID_47.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_47("STRING_107138843");
      noLegSecurityAltID_2_1_2.set(LegSecurityAltIDSource_47);
      LegSecAltIDGrp_NoLegSecurityAltID_47.insert(LegSecurityAltIDSource_47.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_47);

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_2);
    }
    msg.addGroup(noLegs_0_2);
  }
  // Instrument
  multiset<string> Instrument_13;
  FIX::AttachmentPoint AttachmentPoint_13;
  AttachmentPoint_13.setString("38.420000");
  msg.set(AttachmentPoint_13);
  Instrument_13.insert(AttachmentPoint_13.getString());
  FIX::CFICode CFICode_13("STRING_272576918");
  msg.set(CFICode_13);
  Instrument_13.insert(CFICode_13.getString());
  FIX::CPProgram CPProgram_13(1);
  msg.set(CPProgram_13);
  Instrument_13.insert(CPProgram_13.getString());
  FIX::CPRegType CPRegType_13("STRING_248162078");
  msg.set(CPRegType_13);
  Instrument_13.insert(CPRegType_13.getString());
  FIX::CapPrice CapPrice_13;
  CapPrice_13.setString("1701109");
  msg.set(CapPrice_13);
  Instrument_13.insert(CapPrice_13.getString());
  FIX::ContractMultiplier ContractMultiplier_13;
  ContractMultiplier_13.setString("15995260");
  msg.set(ContractMultiplier_13);
  Instrument_13.insert(ContractMultiplier_13.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_13(2);
  msg.set(ContractMultiplierUnit_13);
  Instrument_13.insert(ContractMultiplierUnit_13.getString());
  FIX::ContractSettlMonth ContractSettlMonth_13("MONTHYEAR_1529977992");
  msg.set(ContractSettlMonth_13);
  Instrument_13.insert(ContractSettlMonth_13.getString());
  FIX::CountryOfIssue CountryOfIssue_13("COUNTRY_1639188700");
  msg.set(CountryOfIssue_13);
  Instrument_13.insert(CountryOfIssue_13.getString());
  FIX::CouponPaymentDate CouponPaymentDate_13("LOCALMKTDATE_974099150");
  msg.set(CouponPaymentDate_13);
  Instrument_13.insert(CouponPaymentDate_13.getString());
  FIX::CouponRate CouponRate_13;
  CouponRate_13.setString("19.580000");
  msg.set(CouponRate_13);
  Instrument_13.insert(CouponRate_13.getString());
  FIX::CreditRating CreditRating_13("STRING_1291740608");
  msg.set(CreditRating_13);
  Instrument_13.insert(CreditRating_13.getString());
  FIX::DatedDate DatedDate_13("LOCALMKTDATE_68867132");
  msg.set(DatedDate_13);
  Instrument_13.insert(DatedDate_13.getString());
  FIX::DetachmentPoint DetachmentPoint_13;
  DetachmentPoint_13.setString("28.010000");
  msg.set(DetachmentPoint_13);
  Instrument_13.insert(DetachmentPoint_13.getString());
  FIX::EncodedIssuer EncodedIssuer_13("DATA_2019707303");
  msg.set(EncodedIssuer_13);
  Instrument_13.insert(EncodedIssuer_13.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_13(1030672031);
  msg.set(EncodedIssuerLen_13);
  Instrument_13.insert(EncodedIssuerLen_13.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_13("DATA_320629553");
  msg.set(EncodedSecurityDesc_13);
  Instrument_13.insert(EncodedSecurityDesc_13.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_13(2101035693);
  msg.set(EncodedSecurityDescLen_13);
  Instrument_13.insert(EncodedSecurityDescLen_13.getString());
  FIX::ExerciseStyle ExerciseStyle_13(0);
  msg.set(ExerciseStyle_13);
  Instrument_13.insert(ExerciseStyle_13.getString());
  FIX::Factor Factor_13;
  Factor_13.setString("20718941");
  msg.set(Factor_13);
  Instrument_13.insert(Factor_13.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_13(true);
  msg.set(FlexProductEligibilityIndicator_13);
  Instrument_13.insert(FlexProductEligibilityIndicator_13.getString());
  FIX::FlexibleIndicator FlexibleIndicator_13(false);
  msg.set(FlexibleIndicator_13);
  Instrument_13.insert(FlexibleIndicator_13.getString());
  FIX::FloorPrice FloorPrice_13;
  FloorPrice_13.setString("10620796");
  msg.set(FloorPrice_13);
  Instrument_13.insert(FloorPrice_13.getString());
  FIX::FlowScheduleType FlowScheduleType_13(3);
  msg.set(FlowScheduleType_13);
  Instrument_13.insert(FlowScheduleType_13.getString());
  FIX::InstrRegistry InstrRegistry_13("STRING_1708657080");
  msg.set(InstrRegistry_13);
  Instrument_13.insert(InstrRegistry_13.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_13('1');
  msg.set(InstrmtAssignmentMethod_13);
  Instrument_13.insert(InstrmtAssignmentMethod_13.getString());
  FIX::InterestAccrualDate InterestAccrualDate_13("LOCALMKTDATE_129025191");
  msg.set(InterestAccrualDate_13);
  Instrument_13.insert(InterestAccrualDate_13.getString());
  FIX::IssueDate IssueDate_13("LOCALMKTDATE_1871948665");
  msg.set(IssueDate_13);
  Instrument_13.insert(IssueDate_13.getString());
  FIX::Issuer Issuer_13("STRING_1379731884");
  msg.set(Issuer_13);
  Instrument_13.insert(Issuer_13.getString());
  FIX::ListMethod ListMethod_13(0);
  msg.set(ListMethod_13);
  Instrument_13.insert(ListMethod_13.getString());
  FIX::LocaleOfIssue LocaleOfIssue_13("STRING_1979087508");
  msg.set(LocaleOfIssue_13);
  Instrument_13.insert(LocaleOfIssue_13.getString());
  FIX::MaturityDate MaturityDate_13("LOCALMKTDATE_266942078");
  msg.set(MaturityDate_13);
  Instrument_13.insert(MaturityDate_13.getString());
  FIX::MaturityMonthYear MaturityMonthYear_13("MONTHYEAR_1038005550");
  msg.set(MaturityMonthYear_13);
  Instrument_13.insert(MaturityMonthYear_13.getString());
  FIX::MaturityTime MaturityTime_13("TZTIMEONLY_1226692298");
  msg.set(MaturityTime_13);
  Instrument_13.insert(MaturityTime_13.getString());
  FIX::MinPriceIncrement MinPriceIncrement_13;
  MinPriceIncrement_13.setString("5151041");
  msg.set(MinPriceIncrement_13);
  Instrument_13.insert(MinPriceIncrement_13.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_13;
  MinPriceIncrementAmount_13.setString("12081164");
  msg.set(MinPriceIncrementAmount_13);
  Instrument_13.insert(MinPriceIncrementAmount_13.getString());
  FIX::NTPositionLimit NTPositionLimit_13(678734718);
  msg.set(NTPositionLimit_13);
  Instrument_13.insert(NTPositionLimit_13.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_13;
  NotionalPercentageOutstanding_13.setString("63.250000");
  msg.set(NotionalPercentageOutstanding_13);
  Instrument_13.insert(NotionalPercentageOutstanding_13.getString());
  FIX::OptAttribute OptAttribute_13('5');
  msg.set(OptAttribute_13);
  Instrument_13.insert(OptAttribute_13.getString());
  FIX::OptPayoutAmount OptPayoutAmount_13;
  OptPayoutAmount_13.setString("1704397");
  msg.set(OptPayoutAmount_13);
  Instrument_13.insert(OptPayoutAmount_13.getString());
  FIX::OptPayoutType OptPayoutType_13(1);
  msg.set(OptPayoutType_13);
  Instrument_13.insert(OptPayoutType_13.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_13;
  OriginalNotionalPercentageOutstanding_13.setString("91.170000");
  msg.set(OriginalNotionalPercentageOutstanding_13);
  Instrument_13.insert(OriginalNotionalPercentageOutstanding_13.getString());
  FIX::Pool Pool_13("STRING_1462180378");
  msg.set(Pool_13);
  Instrument_13.insert(Pool_13.getString());
  FIX::PositionLimit PositionLimit_13(1724562608);
  msg.set(PositionLimit_13);
  Instrument_13.insert(PositionLimit_13.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_13("STRING_INT");
  msg.set(PriceQuoteMethod_13);
  Instrument_13.insert(PriceQuoteMethod_13.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_13("STRING_1334404033");
  msg.set(PriceUnitOfMeasure_13);
  Instrument_13.insert(PriceUnitOfMeasure_13.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_13;
  PriceUnitOfMeasureQty_13.setString("6077509");
  msg.set(PriceUnitOfMeasureQty_13);
  Instrument_13.insert(PriceUnitOfMeasureQty_13.getString());
  FIX::Product Product_15(4);
  msg.set(Product_15);
  Instrument_13.insert(Product_15.getString());
  FIX::ProductComplex ProductComplex_13("STRING_1287956078");
  msg.set(ProductComplex_13);
  Instrument_13.insert(ProductComplex_13.getString());
  FIX::PutOrCall PutOrCall_13(0);
  msg.set(PutOrCall_13);
  Instrument_13.insert(PutOrCall_13.getString());
  FIX::RedemptionDate RedemptionDate_13("LOCALMKTDATE_38878356");
  msg.set(RedemptionDate_13);
  Instrument_13.insert(RedemptionDate_13.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_13("STRING_1625150563");
  msg.set(RepoCollateralSecurityType_13);
  Instrument_13.insert(RepoCollateralSecurityType_13.getString());
  FIX::RepurchaseRate RepurchaseRate_13;
  RepurchaseRate_13.setString("81.730000");
  msg.set(RepurchaseRate_13);
  Instrument_13.insert(RepurchaseRate_13.getString());
  FIX::RepurchaseTerm RepurchaseTerm_13(1100957974);
  msg.set(RepurchaseTerm_13);
  Instrument_13.insert(RepurchaseTerm_13.getString());
  FIX::RestructuringType RestructuringType_13("STRING_XR");
  msg.set(RestructuringType_13);
  Instrument_13.insert(RestructuringType_13.getString());
  FIX::SecurityDesc SecurityDesc_13("STRING_2041395253");
  msg.set(SecurityDesc_13);
  Instrument_13.insert(SecurityDesc_13.getString());
  FIX::SecurityExchange SecurityExchange_13("EXCHANGE_8072732");
  msg.set(SecurityExchange_13);
  Instrument_13.insert(SecurityExchange_13.getString());
  FIX::SecurityGroup SecurityGroup_13("STRING_1713756994");
  msg.set(SecurityGroup_13);
  Instrument_13.insert(SecurityGroup_13.getString());
  FIX::SecurityID SecurityID_13("STRING_1765860270");
  msg.set(SecurityID_13);
  Instrument_13.insert(SecurityID_13.getString());
  FIX::SecurityIDSource SecurityIDSource_13("STRING_1");
  msg.set(SecurityIDSource_13);
  Instrument_13.insert(SecurityIDSource_13.getString());
  FIX::SecurityStatus SecurityStatus_13("STRING_1");
  msg.set(SecurityStatus_13);
  Instrument_13.insert(SecurityStatus_13.getString());
  FIX::SecuritySubType SecuritySubType_13("STRING_1597464131");
  msg.set(SecuritySubType_13);
  Instrument_13.insert(SecuritySubType_13.getString());
  FIX::SecurityType SecurityType_15("STRING_CB");
  msg.set(SecurityType_15);
  Instrument_13.insert(SecurityType_15.getString());
  FIX::Seniority Seniority_13("STRING_SR");
  msg.set(Seniority_13);
  Instrument_13.insert(Seniority_13.getString());
  FIX::SettlMethod SettlMethod_13('P');
  msg.set(SettlMethod_13);
  Instrument_13.insert(SettlMethod_13.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_13("STRING_22367203");
  msg.set(SettleOnOpenFlag_13);
  Instrument_13.insert(SettleOnOpenFlag_13.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_13("STRING_430340344");
  msg.set(StateOrProvinceOfIssue_13);
  Instrument_13.insert(StateOrProvinceOfIssue_13.getString());
  FIX::StrikeCurrency StrikeCurrency_13("CAN");
  msg.set(StrikeCurrency_13);
  Instrument_13.insert(StrikeCurrency_13.getString());
  FIX::StrikeMultiplier StrikeMultiplier_13;
  StrikeMultiplier_13.setString("10209511");
  msg.set(StrikeMultiplier_13);
  Instrument_13.insert(StrikeMultiplier_13.getString());
  FIX::StrikePrice StrikePrice_13;
  StrikePrice_13.setString("15258472");
  msg.set(StrikePrice_13);
  Instrument_13.insert(StrikePrice_13.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_13(3);
  msg.set(StrikePriceBoundaryMethod_13);
  Instrument_13.insert(StrikePriceBoundaryMethod_13.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_13;
  StrikePriceBoundaryPrecision_13.setString("2.690000");
  msg.set(StrikePriceBoundaryPrecision_13);
  Instrument_13.insert(StrikePriceBoundaryPrecision_13.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_13(4);
  msg.set(StrikePriceDeterminationMethod_13);
  Instrument_13.insert(StrikePriceDeterminationMethod_13.getString());
  FIX::StrikeValue StrikeValue_13;
  StrikeValue_13.setString("19367379");
  msg.set(StrikeValue_13);
  Instrument_13.insert(StrikeValue_13.getString());
  FIX::Symbol Symbol_13("STRING_1262318539");
  msg.set(Symbol_13);
  Instrument_13.insert(Symbol_13.getString());
  FIX::SymbolSfx SymbolSfx_13("STRING_WI");
  msg.set(SymbolSfx_13);
  Instrument_13.insert(SymbolSfx_13.getString());
  FIX::TimeUnit TimeUnit_13("STRING_Min");
  msg.set(TimeUnit_13);
  Instrument_13.insert(TimeUnit_13.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_13(4);
  msg.set(UnderlyingPriceDeterminationMethod_13);
  Instrument_13.insert(UnderlyingPriceDeterminationMethod_13.getString());
  FIX::UnitOfMeasure UnitOfMeasure_13("STRING_lbs");
  msg.set(UnitOfMeasure_13);
  Instrument_13.insert(UnitOfMeasure_13.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_13;
  UnitOfMeasureQty_13.setString("14063590");
  msg.set(UnitOfMeasureQty_13);
  Instrument_13.insert(UnitOfMeasureQty_13.getString());
  FIX::ValuationMethod ValuationMethod_13("STRING_EQTY");
  msg.set(ValuationMethod_13);
  Instrument_13.insert(ValuationMethod_13.getString());
  all_values.push_back(Instrument_13);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::Confirmation::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_31;
    FIX::ComplexEventCondition ComplexEventCondition_31(2);
    noComplexEvents_0_0.set(ComplexEventCondition_31);
    ComplexEvents_NoComplexEvents_31.insert(ComplexEventCondition_31.getString());
    FIX::ComplexEventPrice ComplexEventPrice_31;
    ComplexEventPrice_31.setString("3691390");
    noComplexEvents_0_0.set(ComplexEventPrice_31);
    ComplexEvents_NoComplexEvents_31.insert(ComplexEventPrice_31.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_31(5);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_31);
    ComplexEvents_NoComplexEvents_31.insert(ComplexEventPriceBoundaryMethod_31.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_31;
    ComplexEventPriceBoundaryPrecision_31.setString("88.700000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_31);
    ComplexEvents_NoComplexEvents_31.insert(ComplexEventPriceBoundaryPrecision_31.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_31(2);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_31);
    ComplexEvents_NoComplexEvents_31.insert(ComplexEventPriceTimeType_31.getString());
    FIX::ComplexEventType ComplexEventType_31(9);
    noComplexEvents_0_0.set(ComplexEventType_31);
    ComplexEvents_NoComplexEvents_31.insert(ComplexEventType_31.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_31;
    ComplexOptPayoutAmount_31.setString("12513854");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_31);
    ComplexEvents_NoComplexEvents_31.insert(ComplexOptPayoutAmount_31.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_31);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::Confirmation::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_65;
      FIX::ComplexEventEndDate ComplexEventEndDate_65(FIX::UTCTIMESTAMP(8, 21, 8, 25, 6, 2012));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_65);
      ComplexEventDates_NoComplexEventDates_65.insert(ComplexEventEndDate_65.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_65(FIX::UTCTIMESTAMP(22, 35, 17, 15, 1, 2012));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_65);
      ComplexEventDates_NoComplexEventDates_65.insert(ComplexEventStartDate_65.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_65);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::Confirmation::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_137;
        FIX::ComplexEventEndTime ComplexEventEndTime_137(FIX::UTCTIMEONLY(21, 29, 11));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_137);
        ComplexEventTimes_NoComplexEventTimes_137.insert(ComplexEventEndTime_137.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_137(FIX::UTCTIMEONLY(17, 11, 47));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_137);
        ComplexEventTimes_NoComplexEventTimes_137.insert(ComplexEventStartTime_137.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_137);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::Confirmation::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_138;
        FIX::ComplexEventEndTime ComplexEventEndTime_138(FIX::UTCTIMEONLY(5, 21, 20));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_138);
        ComplexEventTimes_NoComplexEventTimes_138.insert(ComplexEventEndTime_138.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_138(FIX::UTCTIMEONLY(22, 13, 14));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_138);
        ComplexEventTimes_NoComplexEventTimes_138.insert(ComplexEventStartTime_138.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_138);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::Confirmation::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_32;
    FIX::ComplexEventCondition ComplexEventCondition_32(2);
    noComplexEvents_0_1.set(ComplexEventCondition_32);
    ComplexEvents_NoComplexEvents_32.insert(ComplexEventCondition_32.getString());
    FIX::ComplexEventPrice ComplexEventPrice_32;
    ComplexEventPrice_32.setString("5383272");
    noComplexEvents_0_1.set(ComplexEventPrice_32);
    ComplexEvents_NoComplexEvents_32.insert(ComplexEventPrice_32.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_32(1);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_32);
    ComplexEvents_NoComplexEvents_32.insert(ComplexEventPriceBoundaryMethod_32.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_32;
    ComplexEventPriceBoundaryPrecision_32.setString("88.210000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_32);
    ComplexEvents_NoComplexEvents_32.insert(ComplexEventPriceBoundaryPrecision_32.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_32(3);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_32);
    ComplexEvents_NoComplexEvents_32.insert(ComplexEventPriceTimeType_32.getString());
    FIX::ComplexEventType ComplexEventType_32(9);
    noComplexEvents_0_1.set(ComplexEventType_32);
    ComplexEvents_NoComplexEvents_32.insert(ComplexEventType_32.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_32;
    ComplexOptPayoutAmount_32.setString("800239");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_32);
    ComplexEvents_NoComplexEvents_32.insert(ComplexOptPayoutAmount_32.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_32);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::Confirmation::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_66;
      FIX::ComplexEventEndDate ComplexEventEndDate_66(FIX::UTCTIMESTAMP(20, 7, 21, 13, 9, 2000));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_66);
      ComplexEventDates_NoComplexEventDates_66.insert(ComplexEventEndDate_66.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_66(FIX::UTCTIMESTAMP(17, 11, 56, 2, 9, 2000));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_66);
      ComplexEventDates_NoComplexEventDates_66.insert(ComplexEventStartDate_66.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_66);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::Confirmation::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_139;
        FIX::ComplexEventEndTime ComplexEventEndTime_139(FIX::UTCTIMEONLY(5, 19, 55));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_139);
        ComplexEventTimes_NoComplexEventTimes_139.insert(ComplexEventEndTime_139.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_139(FIX::UTCTIMEONLY(9, 8, 11));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_139);
        ComplexEventTimes_NoComplexEventTimes_139.insert(ComplexEventStartTime_139.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_139);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::Confirmation::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_140;
        FIX::ComplexEventEndTime ComplexEventEndTime_140(FIX::UTCTIMEONLY(14, 38, 55));
        noComplexEventTimes_1_0_2_1.set(ComplexEventEndTime_140);
        ComplexEventTimes_NoComplexEventTimes_140.insert(ComplexEventEndTime_140.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_140(FIX::UTCTIMEONLY(11, 40, 31));
        noComplexEventTimes_1_0_2_1.set(ComplexEventStartTime_140);
        ComplexEventTimes_NoComplexEventTimes_140.insert(ComplexEventStartTime_140.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_140);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::Confirmation::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_67;
      FIX::ComplexEventEndDate ComplexEventEndDate_67(FIX::UTCTIMESTAMP(5, 38, 23, 2, 11, 2005));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_67);
      ComplexEventDates_NoComplexEventDates_67.insert(ComplexEventEndDate_67.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_67(FIX::UTCTIMESTAMP(8, 16, 23, 6, 6, 2011));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_67);
      ComplexEventDates_NoComplexEventDates_67.insert(ComplexEventStartDate_67.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_67);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::Confirmation::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_141;
        FIX::ComplexEventEndTime ComplexEventEndTime_141(FIX::UTCTIMEONLY(17, 16, 30));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_141);
        ComplexEventTimes_NoComplexEventTimes_141.insert(ComplexEventEndTime_141.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_141(FIX::UTCTIMEONLY(1, 31, 45));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_141);
        ComplexEventTimes_NoComplexEventTimes_141.insert(ComplexEventStartTime_141.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_141);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::Confirmation::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_142;
        FIX::ComplexEventEndTime ComplexEventEndTime_142(FIX::UTCTIMEONLY(9, 15, 43));
        noComplexEventTimes_1_1_2_1.set(ComplexEventEndTime_142);
        ComplexEventTimes_NoComplexEventTimes_142.insert(ComplexEventEndTime_142.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_142(FIX::UTCTIMEONLY(18, 24, 28));
        noComplexEventTimes_1_1_2_1.set(ComplexEventStartTime_142);
        ComplexEventTimes_NoComplexEventTimes_142.insert(ComplexEventStartTime_142.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_142);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      {
        FIX50SP2::Confirmation::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_143;
        FIX::ComplexEventEndTime ComplexEventEndTime_143(FIX::UTCTIMEONLY(9, 7, 43));
        noComplexEventTimes_1_1_2_2.set(ComplexEventEndTime_143);
        ComplexEventTimes_NoComplexEventTimes_143.insert(ComplexEventEndTime_143.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_143(FIX::UTCTIMEONLY(21, 40, 26));
        noComplexEventTimes_1_1_2_2.set(ComplexEventStartTime_143);
        ComplexEventTimes_NoComplexEventTimes_143.insert(ComplexEventStartTime_143.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_143);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::Confirmation::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_24;
    FIX::EventDate EventDate_24("LOCALMKTDATE_175297968");
    noEvents_0_0.set(EventDate_24);
    EvntGrp_NoEvents_24.insert(EventDate_24.getString());
    FIX::EventPx EventPx_24;
    EventPx_24.setString("14486915");
    noEvents_0_0.set(EventPx_24);
    EvntGrp_NoEvents_24.insert(EventPx_24.getString());
    FIX::EventText EventText_24("STRING_4952540");
    noEvents_0_0.set(EventText_24);
    EvntGrp_NoEvents_24.insert(EventText_24.getString());
    FIX::EventTime EventTime_24(FIX::UTCTIMESTAMP(5, 16, 17, 14, 9, 2003));
    noEvents_0_0.set(EventTime_24);
    EvntGrp_NoEvents_24.insert(EventTime_24.getString());
    FIX::EventType EventType_24(13);
    noEvents_0_0.set(EventType_24);
    EvntGrp_NoEvents_24.insert(EventType_24.getString());
    all_values.push_back(EvntGrp_NoEvents_24);

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::Confirmation::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_22;
    FIX::InstrumentPartyID InstrumentPartyID_22("STRING_155878922");
    noInstrumentParties_0_0.set(InstrumentPartyID_22);
    InstrumentParties_NoInstrumentParties_22.insert(InstrumentPartyID_22.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_22('8');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_22);
    InstrumentParties_NoInstrumentParties_22.insert(InstrumentPartyIDSource_22.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_22(444348422);
    noInstrumentParties_0_0.set(InstrumentPartyRole_22);
    InstrumentParties_NoInstrumentParties_22.insert(InstrumentPartyRole_22.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_22);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::Confirmation::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_51;
      FIX::InstrumentPartySubID InstrumentPartySubID_51("STRING_1202092464");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_51);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_51.insert(InstrumentPartySubID_51.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_51(908452785);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_51);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_51.insert(InstrumentPartySubIDType_51.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_51);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::Confirmation::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_52;
      FIX::InstrumentPartySubID InstrumentPartySubID_52("STRING_1647837093");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_52);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_52.insert(InstrumentPartySubID_52.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_52(1288854643);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_52);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_52.insert(InstrumentPartySubIDType_52.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_52);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::Confirmation::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_53;
      FIX::InstrumentPartySubID InstrumentPartySubID_53("STRING_851896861");
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubID_53);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_53.insert(InstrumentPartySubID_53.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_53(1927242121);
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubIDType_53);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_53.insert(InstrumentPartySubIDType_53.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_53);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::Confirmation::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_23;
    FIX::InstrumentPartyID InstrumentPartyID_23("STRING_1649115663");
    noInstrumentParties_0_1.set(InstrumentPartyID_23);
    InstrumentParties_NoInstrumentParties_23.insert(InstrumentPartyID_23.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_23('1');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_23);
    InstrumentParties_NoInstrumentParties_23.insert(InstrumentPartyIDSource_23.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_23(901394880);
    noInstrumentParties_0_1.set(InstrumentPartyRole_23);
    InstrumentParties_NoInstrumentParties_23.insert(InstrumentPartyRole_23.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_23);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::Confirmation::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_54;
      FIX::InstrumentPartySubID InstrumentPartySubID_54("STRING_679543921");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_54);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_54.insert(InstrumentPartySubID_54.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_54(1841820454);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_54);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_54.insert(InstrumentPartySubIDType_54.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_54);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::Confirmation::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_55;
      FIX::InstrumentPartySubID InstrumentPartySubID_55("STRING_1069241538");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_55);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_55.insert(InstrumentPartySubID_55.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_55(1810750647);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_55);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_55.insert(InstrumentPartySubIDType_55.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_55);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::Confirmation::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_56;
      FIX::InstrumentPartySubID InstrumentPartySubID_56("STRING_262443947");
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubID_56);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_56.insert(InstrumentPartySubID_56.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_56(1244539506);
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubIDType_56);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_56.insert(InstrumentPartySubIDType_56.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_56);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_2);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::Confirmation::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_24;
    FIX::InstrumentPartyID InstrumentPartyID_24("STRING_1111958529");
    noInstrumentParties_0_2.set(InstrumentPartyID_24);
    InstrumentParties_NoInstrumentParties_24.insert(InstrumentPartyID_24.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_24('2');
    noInstrumentParties_0_2.set(InstrumentPartyIDSource_24);
    InstrumentParties_NoInstrumentParties_24.insert(InstrumentPartyIDSource_24.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_24(1432599648);
    noInstrumentParties_0_2.set(InstrumentPartyRole_24);
    InstrumentParties_NoInstrumentParties_24.insert(InstrumentPartyRole_24.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_24);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::Confirmation::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_57;
      FIX::InstrumentPartySubID InstrumentPartySubID_57("STRING_311717064");
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubID_57);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_57.insert(InstrumentPartySubID_57.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_57(924406797);
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubIDType_57);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_57.insert(InstrumentPartySubIDType_57.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_57);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::Confirmation::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_58;
      FIX::InstrumentPartySubID InstrumentPartySubID_58("STRING_1728709444");
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubID_58);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_58.insert(InstrumentPartySubID_58.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_58(2021622656);
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubIDType_58);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_58.insert(InstrumentPartySubIDType_58.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_58);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_1);
    }
    {
      FIX50SP2::Confirmation::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_59;
      FIX::InstrumentPartySubID InstrumentPartySubID_59("STRING_1891488876");
      noInstrumentPartySubIDs_2_1_2.set(InstrumentPartySubID_59);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_59.insert(InstrumentPartySubID_59.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_59(1360589728);
      noInstrumentPartySubIDs_2_1_2.set(InstrumentPartySubIDType_59);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_59.insert(InstrumentPartySubIDType_59.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_59);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_2);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::Confirmation::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_27;
    FIX::SecurityAltID SecurityAltID_27("STRING_2047367799");
    noSecurityAltID_0_0.set(SecurityAltID_27);
    SecAltIDGrp_NoSecurityAltID_27.insert(SecurityAltID_27.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_27("STRING_84857489");
    noSecurityAltID_0_0.set(SecurityAltIDSource_27);
    SecAltIDGrp_NoSecurityAltID_27.insert(SecurityAltIDSource_27.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_27);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::Confirmation::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_28;
    FIX::SecurityAltID SecurityAltID_28("STRING_1845530944");
    noSecurityAltID_0_1.set(SecurityAltID_28);
    SecAltIDGrp_NoSecurityAltID_28.insert(SecurityAltID_28.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_28("STRING_1791376386");
    noSecurityAltID_0_1.set(SecurityAltIDSource_28);
    SecAltIDGrp_NoSecurityAltID_28.insert(SecurityAltIDSource_28.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_28);

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::Confirmation::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_29;
    FIX::SecurityAltID SecurityAltID_29("STRING_1286949953");
    noSecurityAltID_0_2.set(SecurityAltID_29);
    SecAltIDGrp_NoSecurityAltID_29.insert(SecurityAltID_29.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_29("STRING_606500082");
    noSecurityAltID_0_2.set(SecurityAltIDSource_29);
    SecAltIDGrp_NoSecurityAltID_29.insert(SecurityAltIDSource_29.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_29);

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_26;
  FIX::SecurityXML SecurityXML_27("XMLDATA_1291729831");
  msg.set(SecurityXML_27);
  FIX::SecurityXMLLen SecurityXMLLen_13(428320948);
  msg.set(SecurityXMLLen_13);
  FIX::SecurityXMLSchema SecurityXMLSchema_13("STRING_1458396943");
  msg.set(SecurityXMLSchema_13);
  SecurityXML_26.insert(SecurityXMLSchema_13.getString());
  all_values.push_back(SecurityXML_26);

  // InstrumentExtension
  multiset<string> InstrumentExtension_3;
  FIX::DeliveryForm DeliveryForm_3(2);
  msg.set(DeliveryForm_3);
  InstrumentExtension_3.insert(DeliveryForm_3.getString());
  FIX::PctAtRisk PctAtRisk_3;
  PctAtRisk_3.setString("66.110000");
  msg.set(PctAtRisk_3);
  InstrumentExtension_3.insert(PctAtRisk_3.getString());
  all_values.push_back(InstrumentExtension_3);

  // AttrbGrp
  // Group AttrbGrp.NoInstrAttrib
  {
    FIX50SP2::Confirmation::NoInstrAttrib noInstrAttrib_0_0;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_5;
    FIX::InstrAttribType InstrAttribType_5(26);
    noInstrAttrib_0_0.set(InstrAttribType_5);
    AttrbGrp_NoInstrAttrib_5.insert(InstrAttribType_5.getString());
    FIX::InstrAttribValue InstrAttribValue_5("STRING_645724441");
    noInstrAttrib_0_0.set(InstrAttribValue_5);
    AttrbGrp_NoInstrAttrib_5.insert(InstrAttribValue_5.getString());
    all_values.push_back(AttrbGrp_NoInstrAttrib_5);

    msg.addGroup(noInstrAttrib_0_0);
  }
  {
    FIX50SP2::Confirmation::NoInstrAttrib noInstrAttrib_0_1;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_6;
    FIX::InstrAttribType InstrAttribType_6(18);
    noInstrAttrib_0_1.set(InstrAttribType_6);
    AttrbGrp_NoInstrAttrib_6.insert(InstrAttribType_6.getString());
    FIX::InstrAttribValue InstrAttribValue_6("STRING_1667219991");
    noInstrAttrib_0_1.set(InstrAttribValue_6);
    AttrbGrp_NoInstrAttrib_6.insert(InstrAttribValue_6.getString());
    all_values.push_back(AttrbGrp_NoInstrAttrib_6);

    msg.addGroup(noInstrAttrib_0_1);
  }
  // MiscFeesGrp
  // Group MiscFeesGrp.NoMiscFees
  {
    FIX50SP2::Confirmation::NoMiscFees noMiscFees_0_0;
    // MiscFeesGrp.NoMiscFees
    multiset<string> MiscFeesGrp_NoMiscFees_18;
    FIX::MiscFeeAmt MiscFeeAmt_18;
    MiscFeeAmt_18.setString("8102550");
    noMiscFees_0_0.set(MiscFeeAmt_18);
    MiscFeesGrp_NoMiscFees_18.insert(MiscFeeAmt_18.getString());
    FIX::MiscFeeBasis MiscFeeBasis_18(0);
    noMiscFees_0_0.set(MiscFeeBasis_18);
    MiscFeesGrp_NoMiscFees_18.insert(MiscFeeBasis_18.getString());
    FIX::MiscFeeCurr MiscFeeCurr_18("JPY");
    noMiscFees_0_0.set(MiscFeeCurr_18);
    MiscFeesGrp_NoMiscFees_18.insert(MiscFeeCurr_18.getString());
    FIX::MiscFeeType MiscFeeType_18("STRING_7");
    noMiscFees_0_0.set(MiscFeeType_18);
    MiscFeesGrp_NoMiscFees_18.insert(MiscFeeType_18.getString());
    all_values.push_back(MiscFeesGrp_NoMiscFees_18);

    msg.addGroup(noMiscFees_0_0);
  }
  {
    FIX50SP2::Confirmation::NoMiscFees noMiscFees_0_1;
    // MiscFeesGrp.NoMiscFees
    multiset<string> MiscFeesGrp_NoMiscFees_19;
    FIX::MiscFeeAmt MiscFeeAmt_19;
    MiscFeeAmt_19.setString("971378");
    noMiscFees_0_1.set(MiscFeeAmt_19);
    MiscFeesGrp_NoMiscFees_19.insert(MiscFeeAmt_19.getString());
    FIX::MiscFeeBasis MiscFeeBasis_19(1);
    noMiscFees_0_1.set(MiscFeeBasis_19);
    MiscFeesGrp_NoMiscFees_19.insert(MiscFeeBasis_19.getString());
    FIX::MiscFeeCurr MiscFeeCurr_19("EUR");
    noMiscFees_0_1.set(MiscFeeCurr_19);
    MiscFeesGrp_NoMiscFees_19.insert(MiscFeeCurr_19.getString());
    FIX::MiscFeeType MiscFeeType_19("STRING_9");
    noMiscFees_0_1.set(MiscFeeType_19);
    MiscFeesGrp_NoMiscFees_19.insert(MiscFeeType_19.getString());
    all_values.push_back(MiscFeesGrp_NoMiscFees_19);

    msg.addGroup(noMiscFees_0_1);
  }
  // OrdAllocGrp
  // Group OrdAllocGrp.NoOrders
  {
    FIX50SP2::Confirmation::NoOrders noOrders_0_0;
    // OrdAllocGrp.NoOrders
    multiset<string> OrdAllocGrp_NoOrders_6;
    FIX::ClOrdID ClOrdID_12("STRING_765549863");
    noOrders_0_0.set(ClOrdID_12);
    OrdAllocGrp_NoOrders_6.insert(ClOrdID_12.getString());
    FIX::ListID ListID_12("STRING_39113018");
    noOrders_0_0.set(ListID_12);
    OrdAllocGrp_NoOrders_6.insert(ListID_12.getString());
    FIX::OrderAvgPx OrderAvgPx_6;
    OrderAvgPx_6.setString("16366153");
    noOrders_0_0.set(OrderAvgPx_6);
    OrdAllocGrp_NoOrders_6.insert(OrderAvgPx_6.getString());
    FIX::OrderBookingQty OrderBookingQty_6;
    OrderBookingQty_6.setString("6654340");
    noOrders_0_0.set(OrderBookingQty_6);
    OrdAllocGrp_NoOrders_6.insert(OrderBookingQty_6.getString());
    FIX::OrderID OrderID_12("STRING_123970507");
    noOrders_0_0.set(OrderID_12);
    OrdAllocGrp_NoOrders_6.insert(OrderID_12.getString());
    FIX::OrderQty OrderQty_6;
    OrderQty_6.setString("13346626");
    noOrders_0_0.set(OrderQty_6);
    OrdAllocGrp_NoOrders_6.insert(OrderQty_6.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_12("STRING_309326753");
    noOrders_0_0.set(SecondaryClOrdID_12);
    OrdAllocGrp_NoOrders_6.insert(SecondaryClOrdID_12.getString());
    FIX::SecondaryOrderID SecondaryOrderID_12("STRING_1410920460");
    noOrders_0_0.set(SecondaryOrderID_12);
    OrdAllocGrp_NoOrders_6.insert(SecondaryOrderID_12.getString());
    all_values.push_back(OrdAllocGrp_NoOrders_6);

    // NestedParties2
    // Group NestedParties2.NoNested2PartyIDs
    {
      FIX50SP2::Confirmation::NoOrders::NoNested2PartyIDs noNested2PartyIDs_0_1_0;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_9;
      FIX::Nested2PartyID Nested2PartyID_9("STRING_1601056584");
      noNested2PartyIDs_0_1_0.set(Nested2PartyID_9);
      NestedParties2_NoNested2PartyIDs_9.insert(Nested2PartyID_9.getString());
      FIX::Nested2PartyIDSource Nested2PartyIDSource_9('1');
      noNested2PartyIDs_0_1_0.set(Nested2PartyIDSource_9);
      NestedParties2_NoNested2PartyIDs_9.insert(Nested2PartyIDSource_9.getString());
      FIX::Nested2PartyRole Nested2PartyRole_9(1252076047);
      noNested2PartyIDs_0_1_0.set(Nested2PartyRole_9);
      NestedParties2_NoNested2PartyIDs_9.insert(Nested2PartyRole_9.getString());
      all_values.push_back(NestedParties2_NoNested2PartyIDs_9);

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::Confirmation::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_21;
        FIX::Nested2PartySubID Nested2PartySubID_21("STRING_1769194372");
        noNested2PartySubIDs_0_0_2_0.set(Nested2PartySubID_21);
        NstdPtys2SubGrp_NoNested2PartySubIDs_21.insert(Nested2PartySubID_21.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_21(1719520133);
        noNested2PartySubIDs_0_0_2_0.set(Nested2PartySubIDType_21);
        NstdPtys2SubGrp_NoNested2PartySubIDs_21.insert(Nested2PartySubIDType_21.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_21);

        noNested2PartyIDs_0_1_0.addGroup(noNested2PartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::Confirmation::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_2_1;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_22;
        FIX::Nested2PartySubID Nested2PartySubID_22("STRING_350460779");
        noNested2PartySubIDs_0_0_2_1.set(Nested2PartySubID_22);
        NstdPtys2SubGrp_NoNested2PartySubIDs_22.insert(Nested2PartySubID_22.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_22(267435166);
        noNested2PartySubIDs_0_0_2_1.set(Nested2PartySubIDType_22);
        NstdPtys2SubGrp_NoNested2PartySubIDs_22.insert(Nested2PartySubIDType_22.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_22);

        noNested2PartyIDs_0_1_0.addGroup(noNested2PartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::Confirmation::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_2_2;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_23;
        FIX::Nested2PartySubID Nested2PartySubID_23("STRING_719024493");
        noNested2PartySubIDs_0_0_2_2.set(Nested2PartySubID_23);
        NstdPtys2SubGrp_NoNested2PartySubIDs_23.insert(Nested2PartySubID_23.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_23(2017680770);
        noNested2PartySubIDs_0_0_2_2.set(Nested2PartySubIDType_23);
        NstdPtys2SubGrp_NoNested2PartySubIDs_23.insert(Nested2PartySubIDType_23.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_23);

        noNested2PartyIDs_0_1_0.addGroup(noNested2PartySubIDs_0_0_2_2);
      }
      noOrders_0_0.addGroup(noNested2PartyIDs_0_1_0);
    }
    {
      FIX50SP2::Confirmation::NoOrders::NoNested2PartyIDs noNested2PartyIDs_0_1_1;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_10;
      FIX::Nested2PartyID Nested2PartyID_10("STRING_1982401145");
      noNested2PartyIDs_0_1_1.set(Nested2PartyID_10);
      NestedParties2_NoNested2PartyIDs_10.insert(Nested2PartyID_10.getString());
      FIX::Nested2PartyIDSource Nested2PartyIDSource_10('1');
      noNested2PartyIDs_0_1_1.set(Nested2PartyIDSource_10);
      NestedParties2_NoNested2PartyIDs_10.insert(Nested2PartyIDSource_10.getString());
      FIX::Nested2PartyRole Nested2PartyRole_10(1799861061);
      noNested2PartyIDs_0_1_1.set(Nested2PartyRole_10);
      NestedParties2_NoNested2PartyIDs_10.insert(Nested2PartyRole_10.getString());
      all_values.push_back(NestedParties2_NoNested2PartyIDs_10);

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::Confirmation::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_24;
        FIX::Nested2PartySubID Nested2PartySubID_24("STRING_1304009388");
        noNested2PartySubIDs_0_1_2_0.set(Nested2PartySubID_24);
        NstdPtys2SubGrp_NoNested2PartySubIDs_24.insert(Nested2PartySubID_24.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_24(1849437840);
        noNested2PartySubIDs_0_1_2_0.set(Nested2PartySubIDType_24);
        NstdPtys2SubGrp_NoNested2PartySubIDs_24.insert(Nested2PartySubIDType_24.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_24);

        noNested2PartyIDs_0_1_1.addGroup(noNested2PartySubIDs_0_1_2_0);
      }
      noOrders_0_0.addGroup(noNested2PartyIDs_0_1_1);
    }
    {
      FIX50SP2::Confirmation::NoOrders::NoNested2PartyIDs noNested2PartyIDs_0_1_2;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_11;
      FIX::Nested2PartyID Nested2PartyID_11("STRING_744077173");
      noNested2PartyIDs_0_1_2.set(Nested2PartyID_11);
      NestedParties2_NoNested2PartyIDs_11.insert(Nested2PartyID_11.getString());
      FIX::Nested2PartyIDSource Nested2PartyIDSource_11('4');
      noNested2PartyIDs_0_1_2.set(Nested2PartyIDSource_11);
      NestedParties2_NoNested2PartyIDs_11.insert(Nested2PartyIDSource_11.getString());
      FIX::Nested2PartyRole Nested2PartyRole_11(63248034);
      noNested2PartyIDs_0_1_2.set(Nested2PartyRole_11);
      NestedParties2_NoNested2PartyIDs_11.insert(Nested2PartyRole_11.getString());
      all_values.push_back(NestedParties2_NoNested2PartyIDs_11);

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::Confirmation::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_2_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_25;
        FIX::Nested2PartySubID Nested2PartySubID_25("STRING_1227313820");
        noNested2PartySubIDs_0_2_2_0.set(Nested2PartySubID_25);
        NstdPtys2SubGrp_NoNested2PartySubIDs_25.insert(Nested2PartySubID_25.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_25(298680885);
        noNested2PartySubIDs_0_2_2_0.set(Nested2PartySubIDType_25);
        NstdPtys2SubGrp_NoNested2PartySubIDs_25.insert(Nested2PartySubIDType_25.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_25);

        noNested2PartyIDs_0_1_2.addGroup(noNested2PartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::Confirmation::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_2_2_1;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_26;
        FIX::Nested2PartySubID Nested2PartySubID_26("STRING_383688024");
        noNested2PartySubIDs_0_2_2_1.set(Nested2PartySubID_26);
        NstdPtys2SubGrp_NoNested2PartySubIDs_26.insert(Nested2PartySubID_26.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_26(1266426838);
        noNested2PartySubIDs_0_2_2_1.set(Nested2PartySubIDType_26);
        NstdPtys2SubGrp_NoNested2PartySubIDs_26.insert(Nested2PartySubIDType_26.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_26);

        noNested2PartyIDs_0_1_2.addGroup(noNested2PartySubIDs_0_2_2_1);
      }
      {
        FIX50SP2::Confirmation::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_2_2_2;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_27;
        FIX::Nested2PartySubID Nested2PartySubID_27("STRING_1935296259");
        noNested2PartySubIDs_0_2_2_2.set(Nested2PartySubID_27);
        NstdPtys2SubGrp_NoNested2PartySubIDs_27.insert(Nested2PartySubID_27.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_27(1049122038);
        noNested2PartySubIDs_0_2_2_2.set(Nested2PartySubIDType_27);
        NstdPtys2SubGrp_NoNested2PartySubIDs_27.insert(Nested2PartySubIDType_27.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_27);

        noNested2PartyIDs_0_1_2.addGroup(noNested2PartySubIDs_0_2_2_2);
      }
      noOrders_0_0.addGroup(noNested2PartyIDs_0_1_2);
    }
    msg.addGroup(noOrders_0_0);
  }
  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::Confirmation::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_33;
    FIX::PartyID PartyID_33("STRING_1122475281");
    noPartyIDs_0_0.set(PartyID_33);
    Parties_NoPartyIDs_33.insert(PartyID_33.getString());
    FIX::PartyIDSource PartyIDSource_33('1');
    noPartyIDs_0_0.set(PartyIDSource_33);
    Parties_NoPartyIDs_33.insert(PartyIDSource_33.getString());
    FIX::PartyRole PartyRole_33(83);
    noPartyIDs_0_0.set(PartyRole_33);
    Parties_NoPartyIDs_33.insert(PartyRole_33.getString());
    all_values.push_back(Parties_NoPartyIDs_33);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::Confirmation::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_68;
      FIX::PartySubID PartySubID_68("STRING_812021728");
      noPartySubIDs_0_1_0.set(PartySubID_68);
      PtysSubGrp_NoPartySubIDs_68.insert(PartySubID_68.getString());
      FIX::PartySubIDType PartySubIDType_68(13);
      noPartySubIDs_0_1_0.set(PartySubIDType_68);
      PtysSubGrp_NoPartySubIDs_68.insert(PartySubIDType_68.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_68);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::Confirmation::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_34;
    FIX::PartyID PartyID_34("STRING_20746784");
    noPartyIDs_0_1.set(PartyID_34);
    Parties_NoPartyIDs_34.insert(PartyID_34.getString());
    FIX::PartyIDSource PartyIDSource_34('9');
    noPartyIDs_0_1.set(PartyIDSource_34);
    Parties_NoPartyIDs_34.insert(PartyIDSource_34.getString());
    FIX::PartyRole PartyRole_34(25);
    noPartyIDs_0_1.set(PartyRole_34);
    Parties_NoPartyIDs_34.insert(PartyRole_34.getString());
    all_values.push_back(Parties_NoPartyIDs_34);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::Confirmation::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_69;
      FIX::PartySubID PartySubID_69("STRING_1687543748");
      noPartySubIDs_1_1_0.set(PartySubID_69);
      PtysSubGrp_NoPartySubIDs_69.insert(PartySubID_69.getString());
      FIX::PartySubIDType PartySubIDType_69(32);
      noPartySubIDs_1_1_0.set(PartySubIDType_69);
      PtysSubGrp_NoPartySubIDs_69.insert(PartySubIDType_69.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_69);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::Confirmation::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_70;
      FIX::PartySubID PartySubID_70("STRING_311807763");
      noPartySubIDs_1_1_1.set(PartySubID_70);
      PtysSubGrp_NoPartySubIDs_70.insert(PartySubID_70.getString());
      FIX::PartySubIDType PartySubIDType_70(28);
      noPartySubIDs_1_1_1.set(PartySubIDType_70);
      PtysSubGrp_NoPartySubIDs_70.insert(PartySubIDType_70.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_70);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::Confirmation::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_71;
      FIX::PartySubID PartySubID_71("STRING_69655306");
      noPartySubIDs_1_1_2.set(PartySubID_71);
      PtysSubGrp_NoPartySubIDs_71.insert(PartySubID_71.getString());
      FIX::PartySubIDType PartySubIDType_71(5);
      noPartySubIDs_1_1_2.set(PartySubIDType_71);
      PtysSubGrp_NoPartySubIDs_71.insert(PartySubIDType_71.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_71);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_2);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::Confirmation::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_35;
    FIX::PartyID PartyID_35("STRING_1210118284");
    noPartyIDs_0_2.set(PartyID_35);
    Parties_NoPartyIDs_35.insert(PartyID_35.getString());
    FIX::PartyIDSource PartyIDSource_35('4');
    noPartyIDs_0_2.set(PartyIDSource_35);
    Parties_NoPartyIDs_35.insert(PartyIDSource_35.getString());
    FIX::PartyRole PartyRole_35(25);
    noPartyIDs_0_2.set(PartyRole_35);
    Parties_NoPartyIDs_35.insert(PartyRole_35.getString());
    all_values.push_back(Parties_NoPartyIDs_35);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::Confirmation::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_72;
      FIX::PartySubID PartySubID_72("STRING_1460671815");
      noPartySubIDs_2_1_0.set(PartySubID_72);
      PtysSubGrp_NoPartySubIDs_72.insert(PartySubID_72.getString());
      FIX::PartySubIDType PartySubIDType_72(23);
      noPartySubIDs_2_1_0.set(PartySubIDType_72);
      PtysSubGrp_NoPartySubIDs_72.insert(PartySubIDType_72.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_72);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::Confirmation::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_73;
      FIX::PartySubID PartySubID_73("STRING_975320511");
      noPartySubIDs_2_1_1.set(PartySubID_73);
      PtysSubGrp_NoPartySubIDs_73.insert(PartySubID_73.getString());
      FIX::PartySubIDType PartySubIDType_73(14);
      noPartySubIDs_2_1_1.set(PartySubIDType_73);
      PtysSubGrp_NoPartySubIDs_73.insert(PartySubIDType_73.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_73);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_1);
    }
    {
      FIX50SP2::Confirmation::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_74;
      FIX::PartySubID PartySubID_74("STRING_478750057");
      noPartySubIDs_2_1_2.set(PartySubID_74);
      PtysSubGrp_NoPartySubIDs_74.insert(PartySubID_74.getString());
      FIX::PartySubIDType PartySubIDType_74(31);
      noPartySubIDs_2_1_2.set(PartySubIDType_74);
      PtysSubGrp_NoPartySubIDs_74.insert(PartySubIDType_74.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_74);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_2);
    }
    msg.addGroup(noPartyIDs_0_2);
  }
  // SettlInstructionsData
  multiset<string> SettlInstructionsData_8;
  FIX::SettlDeliveryType SettlDeliveryType_8(0);
  msg.set(SettlDeliveryType_8);
  SettlInstructionsData_8.insert(SettlDeliveryType_8.getString());
  FIX::StandInstDbID StandInstDbID_8("STRING_1745176895");
  msg.set(StandInstDbID_8);
  SettlInstructionsData_8.insert(StandInstDbID_8.getString());
  FIX::StandInstDbName StandInstDbName_8("STRING_1061814007");
  msg.set(StandInstDbName_8);
  SettlInstructionsData_8.insert(StandInstDbName_8.getString());
  FIX::StandInstDbType StandInstDbType_8(0);
  msg.set(StandInstDbType_8);
  SettlInstructionsData_8.insert(StandInstDbType_8.getString());
  all_values.push_back(SettlInstructionsData_8);

  // DlvyInstGrp
  // Group DlvyInstGrp.NoDlvyInst
  {
    FIX50SP2::Confirmation::NoDlvyInst noDlvyInst_0_0;
    // DlvyInstGrp.NoDlvyInst
    multiset<string> DlvyInstGrp_NoDlvyInst_14;
    FIX::DlvyInstType DlvyInstType_14('C');
    noDlvyInst_0_0.set(DlvyInstType_14);
    DlvyInstGrp_NoDlvyInst_14.insert(DlvyInstType_14.getString());
    FIX::SettlInstSource SettlInstSource_14('3');
    noDlvyInst_0_0.set(SettlInstSource_14);
    DlvyInstGrp_NoDlvyInst_14.insert(SettlInstSource_14.getString());
    all_values.push_back(DlvyInstGrp_NoDlvyInst_14);

    // SettlParties
    // Group SettlParties.NoSettlPartyIDs
    {
      FIX50SP2::Confirmation::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_1_0;
      // SettlParties.NoSettlPartyIDs
      multiset<string> SettlParties_NoSettlPartyIDs_32;
      FIX::SettlPartyID SettlPartyID_32("STRING_952960025");
      noSettlPartyIDs_0_1_0.set(SettlPartyID_32);
      SettlParties_NoSettlPartyIDs_32.insert(SettlPartyID_32.getString());
      FIX::SettlPartyIDSource SettlPartyIDSource_32('3');
      noSettlPartyIDs_0_1_0.set(SettlPartyIDSource_32);
      SettlParties_NoSettlPartyIDs_32.insert(SettlPartyIDSource_32.getString());
      FIX::SettlPartyRole SettlPartyRole_32(1987516668);
      noSettlPartyIDs_0_1_0.set(SettlPartyRole_32);
      SettlParties_NoSettlPartyIDs_32.insert(SettlPartyRole_32.getString());
      all_values.push_back(SettlParties_NoSettlPartyIDs_32);

      // SettlPtysSubGrp
      // Group SettlPtysSubGrp.NoSettlPartySubIDs
      {
        FIX50SP2::Confirmation::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_2_0;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_73;
        FIX::SettlPartySubID SettlPartySubID_73("STRING_1724206231");
        noSettlPartySubIDs_0_0_2_0.set(SettlPartySubID_73);
        SettlPtysSubGrp_NoSettlPartySubIDs_73.insert(SettlPartySubID_73.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_73(1954819311);
        noSettlPartySubIDs_0_0_2_0.set(SettlPartySubIDType_73);
        SettlPtysSubGrp_NoSettlPartySubIDs_73.insert(SettlPartySubIDType_73.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_73);

        noSettlPartyIDs_0_1_0.addGroup(noSettlPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::Confirmation::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_2_1;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_74;
        FIX::SettlPartySubID SettlPartySubID_74("STRING_566490080");
        noSettlPartySubIDs_0_0_2_1.set(SettlPartySubID_74);
        SettlPtysSubGrp_NoSettlPartySubIDs_74.insert(SettlPartySubID_74.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_74(1264266332);
        noSettlPartySubIDs_0_0_2_1.set(SettlPartySubIDType_74);
        SettlPtysSubGrp_NoSettlPartySubIDs_74.insert(SettlPartySubIDType_74.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_74);

        noSettlPartyIDs_0_1_0.addGroup(noSettlPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::Confirmation::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_2_2;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_75;
        FIX::SettlPartySubID SettlPartySubID_75("STRING_42073472");
        noSettlPartySubIDs_0_0_2_2.set(SettlPartySubID_75);
        SettlPtysSubGrp_NoSettlPartySubIDs_75.insert(SettlPartySubID_75.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_75(878297843);
        noSettlPartySubIDs_0_0_2_2.set(SettlPartySubIDType_75);
        SettlPtysSubGrp_NoSettlPartySubIDs_75.insert(SettlPartySubIDType_75.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_75);

        noSettlPartyIDs_0_1_0.addGroup(noSettlPartySubIDs_0_0_2_2);
      }
      noDlvyInst_0_0.addGroup(noSettlPartyIDs_0_1_0);
    }
    {
      FIX50SP2::Confirmation::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_1_1;
      // SettlParties.NoSettlPartyIDs
      multiset<string> SettlParties_NoSettlPartyIDs_33;
      FIX::SettlPartyID SettlPartyID_33("STRING_674523555");
      noSettlPartyIDs_0_1_1.set(SettlPartyID_33);
      SettlParties_NoSettlPartyIDs_33.insert(SettlPartyID_33.getString());
      FIX::SettlPartyIDSource SettlPartyIDSource_33('1');
      noSettlPartyIDs_0_1_1.set(SettlPartyIDSource_33);
      SettlParties_NoSettlPartyIDs_33.insert(SettlPartyIDSource_33.getString());
      FIX::SettlPartyRole SettlPartyRole_33(571901458);
      noSettlPartyIDs_0_1_1.set(SettlPartyRole_33);
      SettlParties_NoSettlPartyIDs_33.insert(SettlPartyRole_33.getString());
      all_values.push_back(SettlParties_NoSettlPartyIDs_33);

      // SettlPtysSubGrp
      // Group SettlPtysSubGrp.NoSettlPartySubIDs
      {
        FIX50SP2::Confirmation::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_2_0;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_76;
        FIX::SettlPartySubID SettlPartySubID_76("STRING_828323420");
        noSettlPartySubIDs_0_1_2_0.set(SettlPartySubID_76);
        SettlPtysSubGrp_NoSettlPartySubIDs_76.insert(SettlPartySubID_76.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_76(1569514461);
        noSettlPartySubIDs_0_1_2_0.set(SettlPartySubIDType_76);
        SettlPtysSubGrp_NoSettlPartySubIDs_76.insert(SettlPartySubIDType_76.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_76);

        noSettlPartyIDs_0_1_1.addGroup(noSettlPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::Confirmation::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_2_1;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_77;
        FIX::SettlPartySubID SettlPartySubID_77("STRING_649230668");
        noSettlPartySubIDs_0_1_2_1.set(SettlPartySubID_77);
        SettlPtysSubGrp_NoSettlPartySubIDs_77.insert(SettlPartySubID_77.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_77(141511588);
        noSettlPartySubIDs_0_1_2_1.set(SettlPartySubIDType_77);
        SettlPtysSubGrp_NoSettlPartySubIDs_77.insert(SettlPartySubIDType_77.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_77);

        noSettlPartyIDs_0_1_1.addGroup(noSettlPartySubIDs_0_1_2_1);
      }
      noDlvyInst_0_0.addGroup(noSettlPartyIDs_0_1_1);
    }
    {
      FIX50SP2::Confirmation::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_1_2;
      // SettlParties.NoSettlPartyIDs
      multiset<string> SettlParties_NoSettlPartyIDs_34;
      FIX::SettlPartyID SettlPartyID_34("STRING_820950698");
      noSettlPartyIDs_0_1_2.set(SettlPartyID_34);
      SettlParties_NoSettlPartyIDs_34.insert(SettlPartyID_34.getString());
      FIX::SettlPartyIDSource SettlPartyIDSource_34('1');
      noSettlPartyIDs_0_1_2.set(SettlPartyIDSource_34);
      SettlParties_NoSettlPartyIDs_34.insert(SettlPartyIDSource_34.getString());
      FIX::SettlPartyRole SettlPartyRole_34(1220321564);
      noSettlPartyIDs_0_1_2.set(SettlPartyRole_34);
      SettlParties_NoSettlPartyIDs_34.insert(SettlPartyRole_34.getString());
      all_values.push_back(SettlParties_NoSettlPartyIDs_34);

      // SettlPtysSubGrp
      // Group SettlPtysSubGrp.NoSettlPartySubIDs
      {
        FIX50SP2::Confirmation::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_2_2_0;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_78;
        FIX::SettlPartySubID SettlPartySubID_78("STRING_751068927");
        noSettlPartySubIDs_0_2_2_0.set(SettlPartySubID_78);
        SettlPtysSubGrp_NoSettlPartySubIDs_78.insert(SettlPartySubID_78.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_78(535335916);
        noSettlPartySubIDs_0_2_2_0.set(SettlPartySubIDType_78);
        SettlPtysSubGrp_NoSettlPartySubIDs_78.insert(SettlPartySubIDType_78.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_78);

        noSettlPartyIDs_0_1_2.addGroup(noSettlPartySubIDs_0_2_2_0);
      }
      noDlvyInst_0_0.addGroup(noSettlPartyIDs_0_1_2);
    }
    msg.addGroup(noDlvyInst_0_0);
  }
  {
    FIX50SP2::Confirmation::NoDlvyInst noDlvyInst_0_1;
    // DlvyInstGrp.NoDlvyInst
    multiset<string> DlvyInstGrp_NoDlvyInst_15;
    FIX::DlvyInstType DlvyInstType_15('C');
    noDlvyInst_0_1.set(DlvyInstType_15);
    DlvyInstGrp_NoDlvyInst_15.insert(DlvyInstType_15.getString());
    FIX::SettlInstSource SettlInstSource_15('3');
    noDlvyInst_0_1.set(SettlInstSource_15);
    DlvyInstGrp_NoDlvyInst_15.insert(SettlInstSource_15.getString());
    all_values.push_back(DlvyInstGrp_NoDlvyInst_15);

    // SettlParties
    // Group SettlParties.NoSettlPartyIDs
    {
      FIX50SP2::Confirmation::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_1_1_0;
      // SettlParties.NoSettlPartyIDs
      multiset<string> SettlParties_NoSettlPartyIDs_35;
      FIX::SettlPartyID SettlPartyID_35("STRING_1885484594");
      noSettlPartyIDs_1_1_0.set(SettlPartyID_35);
      SettlParties_NoSettlPartyIDs_35.insert(SettlPartyID_35.getString());
      FIX::SettlPartyIDSource SettlPartyIDSource_35('1');
      noSettlPartyIDs_1_1_0.set(SettlPartyIDSource_35);
      SettlParties_NoSettlPartyIDs_35.insert(SettlPartyIDSource_35.getString());
      FIX::SettlPartyRole SettlPartyRole_35(474573840);
      noSettlPartyIDs_1_1_0.set(SettlPartyRole_35);
      SettlParties_NoSettlPartyIDs_35.insert(SettlPartyRole_35.getString());
      all_values.push_back(SettlParties_NoSettlPartyIDs_35);

      // SettlPtysSubGrp
      // Group SettlPtysSubGrp.NoSettlPartySubIDs
      {
        FIX50SP2::Confirmation::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_2_0;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_79;
        FIX::SettlPartySubID SettlPartySubID_79("STRING_655164953");
        noSettlPartySubIDs_1_0_2_0.set(SettlPartySubID_79);
        SettlPtysSubGrp_NoSettlPartySubIDs_79.insert(SettlPartySubID_79.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_79(861697102);
        noSettlPartySubIDs_1_0_2_0.set(SettlPartySubIDType_79);
        SettlPtysSubGrp_NoSettlPartySubIDs_79.insert(SettlPartySubIDType_79.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_79);

        noSettlPartyIDs_1_1_0.addGroup(noSettlPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::Confirmation::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_2_1;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_80;
        FIX::SettlPartySubID SettlPartySubID_80("STRING_1219958715");
        noSettlPartySubIDs_1_0_2_1.set(SettlPartySubID_80);
        SettlPtysSubGrp_NoSettlPartySubIDs_80.insert(SettlPartySubID_80.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_80(1628871763);
        noSettlPartySubIDs_1_0_2_1.set(SettlPartySubIDType_80);
        SettlPtysSubGrp_NoSettlPartySubIDs_80.insert(SettlPartySubIDType_80.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_80);

        noSettlPartyIDs_1_1_0.addGroup(noSettlPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::Confirmation::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_2_2;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_81;
        FIX::SettlPartySubID SettlPartySubID_81("STRING_438419686");
        noSettlPartySubIDs_1_0_2_2.set(SettlPartySubID_81);
        SettlPtysSubGrp_NoSettlPartySubIDs_81.insert(SettlPartySubID_81.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_81(1027294378);
        noSettlPartySubIDs_1_0_2_2.set(SettlPartySubIDType_81);
        SettlPtysSubGrp_NoSettlPartySubIDs_81.insert(SettlPartySubIDType_81.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_81);

        noSettlPartyIDs_1_1_0.addGroup(noSettlPartySubIDs_1_0_2_2);
      }
      noDlvyInst_0_1.addGroup(noSettlPartyIDs_1_1_0);
    }
    msg.addGroup(noDlvyInst_0_1);
  }
  {
    FIX50SP2::Confirmation::NoDlvyInst noDlvyInst_0_2;
    // DlvyInstGrp.NoDlvyInst
    multiset<string> DlvyInstGrp_NoDlvyInst_16;
    FIX::DlvyInstType DlvyInstType_16('S');
    noDlvyInst_0_2.set(DlvyInstType_16);
    DlvyInstGrp_NoDlvyInst_16.insert(DlvyInstType_16.getString());
    FIX::SettlInstSource SettlInstSource_16('1');
    noDlvyInst_0_2.set(SettlInstSource_16);
    DlvyInstGrp_NoDlvyInst_16.insert(SettlInstSource_16.getString());
    all_values.push_back(DlvyInstGrp_NoDlvyInst_16);

    // SettlParties
    // Group SettlParties.NoSettlPartyIDs
    {
      FIX50SP2::Confirmation::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_2_1_0;
      // SettlParties.NoSettlPartyIDs
      multiset<string> SettlParties_NoSettlPartyIDs_36;
      FIX::SettlPartyID SettlPartyID_36("STRING_926176038");
      noSettlPartyIDs_2_1_0.set(SettlPartyID_36);
      SettlParties_NoSettlPartyIDs_36.insert(SettlPartyID_36.getString());
      FIX::SettlPartyIDSource SettlPartyIDSource_36('2');
      noSettlPartyIDs_2_1_0.set(SettlPartyIDSource_36);
      SettlParties_NoSettlPartyIDs_36.insert(SettlPartyIDSource_36.getString());
      FIX::SettlPartyRole SettlPartyRole_36(1181096629);
      noSettlPartyIDs_2_1_0.set(SettlPartyRole_36);
      SettlParties_NoSettlPartyIDs_36.insert(SettlPartyRole_36.getString());
      all_values.push_back(SettlParties_NoSettlPartyIDs_36);

      // SettlPtysSubGrp
      // Group SettlPtysSubGrp.NoSettlPartySubIDs
      {
        FIX50SP2::Confirmation::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_0_2_0;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_82;
        FIX::SettlPartySubID SettlPartySubID_82("STRING_2114367764");
        noSettlPartySubIDs_2_0_2_0.set(SettlPartySubID_82);
        SettlPtysSubGrp_NoSettlPartySubIDs_82.insert(SettlPartySubID_82.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_82(2009420049);
        noSettlPartySubIDs_2_0_2_0.set(SettlPartySubIDType_82);
        SettlPtysSubGrp_NoSettlPartySubIDs_82.insert(SettlPartySubIDType_82.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_82);

        noSettlPartyIDs_2_1_0.addGroup(noSettlPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::Confirmation::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_0_2_1;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_83;
        FIX::SettlPartySubID SettlPartySubID_83("STRING_920108309");
        noSettlPartySubIDs_2_0_2_1.set(SettlPartySubID_83);
        SettlPtysSubGrp_NoSettlPartySubIDs_83.insert(SettlPartySubID_83.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_83(616114784);
        noSettlPartySubIDs_2_0_2_1.set(SettlPartySubIDType_83);
        SettlPtysSubGrp_NoSettlPartySubIDs_83.insert(SettlPartySubIDType_83.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_83);

        noSettlPartyIDs_2_1_0.addGroup(noSettlPartySubIDs_2_0_2_1);
      }
      noDlvyInst_0_2.addGroup(noSettlPartyIDs_2_1_0);
    }
    msg.addGroup(noDlvyInst_0_2);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_8;
  FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_8("EUR");
  msg.set(BenchmarkCurveCurrency_8);
  SpreadOrBenchmarkCurveData_8.insert(BenchmarkCurveCurrency_8.getString());
  FIX::BenchmarkCurveName BenchmarkCurveName_8("STRING_Treasury");
  msg.set(BenchmarkCurveName_8);
  SpreadOrBenchmarkCurveData_8.insert(BenchmarkCurveName_8.getString());
  FIX::BenchmarkCurvePoint BenchmarkCurvePoint_8("STRING_1223769553");
  msg.set(BenchmarkCurvePoint_8);
  SpreadOrBenchmarkCurveData_8.insert(BenchmarkCurvePoint_8.getString());
  FIX::BenchmarkPrice BenchmarkPrice_8;
  BenchmarkPrice_8.setString("8932761");
  msg.set(BenchmarkPrice_8);
  SpreadOrBenchmarkCurveData_8.insert(BenchmarkPrice_8.getString());
  FIX::BenchmarkPriceType BenchmarkPriceType_8(844251243);
  msg.set(BenchmarkPriceType_8);
  SpreadOrBenchmarkCurveData_8.insert(BenchmarkPriceType_8.getString());
  FIX::BenchmarkSecurityID BenchmarkSecurityID_8("STRING_1759105469");
  msg.set(BenchmarkSecurityID_8);
  SpreadOrBenchmarkCurveData_8.insert(BenchmarkSecurityID_8.getString());
  FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_8("STRING_1790670116");
  msg.set(BenchmarkSecurityIDSource_8);
  SpreadOrBenchmarkCurveData_8.insert(BenchmarkSecurityIDSource_8.getString());
  FIX::Spread Spread_8;
  Spread_8.setString("5096505");
  msg.set(Spread_8);
  SpreadOrBenchmarkCurveData_8.insert(Spread_8.getString());
  all_values.push_back(SpreadOrBenchmarkCurveData_8);

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::Confirmation::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_15;
    FIX::StipulationType StipulationType_15("STRING_PAYFREQ");
    noStipulations_0_0.set(StipulationType_15);
    Stipulations_NoStipulations_15.insert(StipulationType_15.getString());
    FIX::StipulationValue StipulationValue_15("STRING_211855457");
    noStipulations_0_0.set(StipulationValue_15);
    Stipulations_NoStipulations_15.insert(StipulationValue_15.getString());
    all_values.push_back(Stipulations_NoStipulations_15);

    msg.addGroup(noStipulations_0_0);
  }
  {
    FIX50SP2::Confirmation::NoStipulations noStipulations_0_1;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_16;
    FIX::StipulationType StipulationType_16("STRING_WHOLE");
    noStipulations_0_1.set(StipulationType_16);
    Stipulations_NoStipulations_16.insert(StipulationType_16.getString());
    FIX::StipulationValue StipulationValue_16("STRING_761113109");
    noStipulations_0_1.set(StipulationValue_16);
    Stipulations_NoStipulations_16.insert(StipulationValue_16.getString());
    all_values.push_back(Stipulations_NoStipulations_16);

    msg.addGroup(noStipulations_0_1);
  }
  // TrdRegTimestamps
  // Group TrdRegTimestamps.NoTrdRegTimestamps
  {
    FIX50SP2::Confirmation::NoTrdRegTimestamps noTrdRegTimestamps_0_0;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_11;
    FIX::DeskOrderHandlingInst DeskOrderHandlingInst_11("MULTIPLESTRINGVALUE_NH");
    noTrdRegTimestamps_0_0.set(DeskOrderHandlingInst_11);
    TrdRegTimestamps_NoTrdRegTimestamps_11.insert(DeskOrderHandlingInst_11.getString());
    FIX::DeskType DeskType_11("STRING_PR");
    noTrdRegTimestamps_0_0.set(DeskType_11);
    TrdRegTimestamps_NoTrdRegTimestamps_11.insert(DeskType_11.getString());
    FIX::DeskTypeSource DeskTypeSource_11(1);
    noTrdRegTimestamps_0_0.set(DeskTypeSource_11);
    TrdRegTimestamps_NoTrdRegTimestamps_11.insert(DeskTypeSource_11.getString());
    FIX::TrdRegTimestamp TrdRegTimestamp_11(FIX::UTCTIMESTAMP(11, 40, 47, 14, 11, 2000));
    noTrdRegTimestamps_0_0.set(TrdRegTimestamp_11);
    TrdRegTimestamps_NoTrdRegTimestamps_11.insert(TrdRegTimestamp_11.getString());
    FIX::TrdRegTimestampOrigin TrdRegTimestampOrigin_11("STRING_963863387");
    noTrdRegTimestamps_0_0.set(TrdRegTimestampOrigin_11);
    TrdRegTimestamps_NoTrdRegTimestamps_11.insert(TrdRegTimestampOrigin_11.getString());
    FIX::TrdRegTimestampType TrdRegTimestampType_11(6);
    noTrdRegTimestamps_0_0.set(TrdRegTimestampType_11);
    TrdRegTimestamps_NoTrdRegTimestamps_11.insert(TrdRegTimestampType_11.getString());
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_11);

    msg.addGroup(noTrdRegTimestamps_0_0);
  }
  {
    FIX50SP2::Confirmation::NoTrdRegTimestamps noTrdRegTimestamps_0_1;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_12;
    FIX::DeskOrderHandlingInst DeskOrderHandlingInst_12("MULTIPLESTRINGVALUE_ADD");
    noTrdRegTimestamps_0_1.set(DeskOrderHandlingInst_12);
    TrdRegTimestamps_NoTrdRegTimestamps_12.insert(DeskOrderHandlingInst_12.getString());
    FIX::DeskType DeskType_12("STRING_A");
    noTrdRegTimestamps_0_1.set(DeskType_12);
    TrdRegTimestamps_NoTrdRegTimestamps_12.insert(DeskType_12.getString());
    FIX::DeskTypeSource DeskTypeSource_12(1);
    noTrdRegTimestamps_0_1.set(DeskTypeSource_12);
    TrdRegTimestamps_NoTrdRegTimestamps_12.insert(DeskTypeSource_12.getString());
    FIX::TrdRegTimestamp TrdRegTimestamp_12(FIX::UTCTIMESTAMP(18, 34, 0, 15, 1, 2015));
    noTrdRegTimestamps_0_1.set(TrdRegTimestamp_12);
    TrdRegTimestamps_NoTrdRegTimestamps_12.insert(TrdRegTimestamp_12.getString());
    FIX::TrdRegTimestampOrigin TrdRegTimestampOrigin_12("STRING_1664639153");
    noTrdRegTimestamps_0_1.set(TrdRegTimestampOrigin_12);
    TrdRegTimestamps_NoTrdRegTimestamps_12.insert(TrdRegTimestampOrigin_12.getString());
    FIX::TrdRegTimestampType TrdRegTimestampType_12(5);
    noTrdRegTimestamps_0_1.set(TrdRegTimestampType_12);
    TrdRegTimestamps_NoTrdRegTimestamps_12.insert(TrdRegTimestampType_12.getString());
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_12);

    msg.addGroup(noTrdRegTimestamps_0_1);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::Confirmation::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_24;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_24("DATA_28249633");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_24);
    UnderlyingInstrument_24.insert(EncodedUnderlyingIssuer_24.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_24(1104390270);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_24);
    UnderlyingInstrument_24.insert(EncodedUnderlyingIssuerLen_24.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_24("DATA_17684203");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_24);
    UnderlyingInstrument_24.insert(EncodedUnderlyingSecurityDesc_24.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_24(1013917601);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_24);
    UnderlyingInstrument_24.insert(EncodedUnderlyingSecurityDescLen_24.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_24;
    UnderlyingAdjustedQuantity_24.setString("18655033");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_24);
    UnderlyingInstrument_24.insert(UnderlyingAdjustedQuantity_24.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_24;
    UnderlyingAllocationPercent_24.setString("46.130000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_24);
    UnderlyingInstrument_24.insert(UnderlyingAllocationPercent_24.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_24;
    UnderlyingAttachmentPoint_24.setString("90.240000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_24);
    UnderlyingInstrument_24.insert(UnderlyingAttachmentPoint_24.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_24("STRING_1699091557");
    noUnderlyings_0_0.set(UnderlyingCFICode_24);
    UnderlyingInstrument_24.insert(UnderlyingCFICode_24.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_24("STRING_1233113139");
    noUnderlyings_0_0.set(UnderlyingCPProgram_24);
    UnderlyingInstrument_24.insert(UnderlyingCPProgram_24.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_24("STRING_852100133");
    noUnderlyings_0_0.set(UnderlyingCPRegType_24);
    UnderlyingInstrument_24.insert(UnderlyingCPRegType_24.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_24;
    UnderlyingCapValue_24.setString("4124904");
    noUnderlyings_0_0.set(UnderlyingCapValue_24);
    UnderlyingInstrument_24.insert(UnderlyingCapValue_24.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_24;
    UnderlyingCashAmount_24.setString("16293998");
    noUnderlyings_0_0.set(UnderlyingCashAmount_24);
    UnderlyingInstrument_24.insert(UnderlyingCashAmount_24.getString());
    FIX::UnderlyingCashType UnderlyingCashType_24("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_24);
    UnderlyingInstrument_24.insert(UnderlyingCashType_24.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_24;
    UnderlyingContractMultiplier_24.setString("1952572");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_24);
    UnderlyingInstrument_24.insert(UnderlyingContractMultiplier_24.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_24(804378970);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_24);
    UnderlyingInstrument_24.insert(UnderlyingContractMultiplierUnit_24.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_24("COUNTRY_468833016");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_24);
    UnderlyingInstrument_24.insert(UnderlyingCountryOfIssue_24.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_24("LOCALMKTDATE_1159120609");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_24);
    UnderlyingInstrument_24.insert(UnderlyingCouponPaymentDate_24.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_24;
    UnderlyingCouponRate_24.setString("55.760000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_24);
    UnderlyingInstrument_24.insert(UnderlyingCouponRate_24.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_24("STRING_358946537");
    noUnderlyings_0_0.set(UnderlyingCreditRating_24);
    UnderlyingInstrument_24.insert(UnderlyingCreditRating_24.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_24("GBP");
    noUnderlyings_0_0.set(UnderlyingCurrency_24);
    UnderlyingInstrument_24.insert(UnderlyingCurrency_24.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_24;
    UnderlyingCurrentValue_24.setString("8651748");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_24);
    UnderlyingInstrument_24.insert(UnderlyingCurrentValue_24.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_24;
    UnderlyingDetachmentPoint_24.setString("45.280000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_24);
    UnderlyingInstrument_24.insert(UnderlyingDetachmentPoint_24.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_24;
    UnderlyingDirtyPrice_24.setString("21098571");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_24);
    UnderlyingInstrument_24.insert(UnderlyingDirtyPrice_24.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_24;
    UnderlyingEndPrice_24.setString("14645854");
    noUnderlyings_0_0.set(UnderlyingEndPrice_24);
    UnderlyingInstrument_24.insert(UnderlyingEndPrice_24.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_24;
    UnderlyingEndValue_24.setString("5722182");
    noUnderlyings_0_0.set(UnderlyingEndValue_24);
    UnderlyingInstrument_24.insert(UnderlyingEndValue_24.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_24(2042389859);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_24);
    UnderlyingInstrument_24.insert(UnderlyingExerciseStyle_24.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_24;
    UnderlyingFXRate_24.setString("7607636");
    noUnderlyings_0_0.set(UnderlyingFXRate_24);
    UnderlyingInstrument_24.insert(UnderlyingFXRate_24.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_24('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_24);
    UnderlyingInstrument_24.insert(UnderlyingFXRateCalc_24.getString());
    FIX::UnderlyingFactor UnderlyingFactor_24;
    UnderlyingFactor_24.setString("16181090");
    noUnderlyings_0_0.set(UnderlyingFactor_24);
    UnderlyingInstrument_24.insert(UnderlyingFactor_24.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_24(566592423);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_24);
    UnderlyingInstrument_24.insert(UnderlyingFlowScheduleType_24.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_24("STRING_117623349");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_24);
    UnderlyingInstrument_24.insert(UnderlyingInstrRegistry_24.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_24("LOCALMKTDATE_575015690");
    noUnderlyings_0_0.set(UnderlyingIssueDate_24);
    UnderlyingInstrument_24.insert(UnderlyingIssueDate_24.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_24("STRING_584276626");
    noUnderlyings_0_0.set(UnderlyingIssuer_24);
    UnderlyingInstrument_24.insert(UnderlyingIssuer_24.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_24("STRING_1131540951");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_24);
    UnderlyingInstrument_24.insert(UnderlyingLocaleOfIssue_24.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_24("LOCALMKTDATE_293035422");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_24);
    UnderlyingInstrument_24.insert(UnderlyingMaturityDate_24.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_24("MONTHYEAR_1468981240");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_24);
    UnderlyingInstrument_24.insert(UnderlyingMaturityMonthYear_24.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_24("TZTIMEONLY_1845339975");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_24);
    UnderlyingInstrument_24.insert(UnderlyingMaturityTime_24.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_24;
    UnderlyingNotionalPercentageOutstanding_24.setString("69.790000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_24);
    UnderlyingInstrument_24.insert(UnderlyingNotionalPercentageOutstanding_24.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_24('5');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_24);
    UnderlyingInstrument_24.insert(UnderlyingOptAttribute_24.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_24;
    UnderlyingOriginalNotionalPercentageOutstanding_24.setString("64.610000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_24);
    UnderlyingInstrument_24.insert(UnderlyingOriginalNotionalPercentageOutstanding_24.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_24("STRING_257133795");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_24);
    UnderlyingInstrument_24.insert(UnderlyingPriceUnitOfMeasure_24.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_24;
    UnderlyingPriceUnitOfMeasureQty_24.setString("365269");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_24);
    UnderlyingInstrument_24.insert(UnderlyingPriceUnitOfMeasureQty_24.getString());
    FIX::UnderlyingProduct UnderlyingProduct_24(1095560073);
    noUnderlyings_0_0.set(UnderlyingProduct_24);
    UnderlyingInstrument_24.insert(UnderlyingProduct_24.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_24(452391018);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_24);
    UnderlyingInstrument_24.insert(UnderlyingPutOrCall_24.getString());
    FIX::UnderlyingPx UnderlyingPx_24;
    UnderlyingPx_24.setString("8409059");
    noUnderlyings_0_0.set(UnderlyingPx_24);
    UnderlyingInstrument_24.insert(UnderlyingPx_24.getString());
    FIX::UnderlyingQty UnderlyingQty_24;
    UnderlyingQty_24.setString("15643930");
    noUnderlyings_0_0.set(UnderlyingQty_24);
    UnderlyingInstrument_24.insert(UnderlyingQty_24.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_24("LOCALMKTDATE_1611511627");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_24);
    UnderlyingInstrument_24.insert(UnderlyingRedemptionDate_24.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_24("STRING_170857841");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_24);
    UnderlyingInstrument_24.insert(UnderlyingRepoCollateralSecurityType_24.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_24;
    UnderlyingRepurchaseRate_24.setString("96.270000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_24);
    UnderlyingInstrument_24.insert(UnderlyingRepurchaseRate_24.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_24(1448948377);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_24);
    UnderlyingInstrument_24.insert(UnderlyingRepurchaseTerm_24.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_24("STRING_1093974685");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_24);
    UnderlyingInstrument_24.insert(UnderlyingRestructuringType_24.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_24("STRING_641030821");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_24);
    UnderlyingInstrument_24.insert(UnderlyingSecurityDesc_24.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_24("EXCHANGE_2115632905");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_24);
    UnderlyingInstrument_24.insert(UnderlyingSecurityExchange_24.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_24("STRING_1056348155");
    noUnderlyings_0_0.set(UnderlyingSecurityID_24);
    UnderlyingInstrument_24.insert(UnderlyingSecurityID_24.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_24("STRING_2105616283");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_24);
    UnderlyingInstrument_24.insert(UnderlyingSecurityIDSource_24.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_24("STRING_540367469");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_24);
    UnderlyingInstrument_24.insert(UnderlyingSecuritySubType_24.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_24("STRING_951254366");
    noUnderlyings_0_0.set(UnderlyingSecurityType_24);
    UnderlyingInstrument_24.insert(UnderlyingSecurityType_24.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_24("STRING_718896313");
    noUnderlyings_0_0.set(UnderlyingSeniority_24);
    UnderlyingInstrument_24.insert(UnderlyingSeniority_24.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_24("STRING_629741185");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_24);
    UnderlyingInstrument_24.insert(UnderlyingSettlMethod_24.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_24(4);
    noUnderlyings_0_0.set(UnderlyingSettlementType_24);
    UnderlyingInstrument_24.insert(UnderlyingSettlementType_24.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_24;
    UnderlyingStartValue_24.setString("12854887");
    noUnderlyings_0_0.set(UnderlyingStartValue_24);
    UnderlyingInstrument_24.insert(UnderlyingStartValue_24.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_24("STRING_747364535");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_24);
    UnderlyingInstrument_24.insert(UnderlyingStateOrProvinceOfIssue_24.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_24("CHF");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_24);
    UnderlyingInstrument_24.insert(UnderlyingStrikeCurrency_24.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_24;
    UnderlyingStrikePrice_24.setString("18789054");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_24);
    UnderlyingInstrument_24.insert(UnderlyingStrikePrice_24.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_24("STRING_1289930898");
    noUnderlyings_0_0.set(UnderlyingSymbol_24);
    UnderlyingInstrument_24.insert(UnderlyingSymbol_24.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_24("STRING_1191262955");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_24);
    UnderlyingInstrument_24.insert(UnderlyingSymbolSfx_24.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_24("STRING_1576761813");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_24);
    UnderlyingInstrument_24.insert(UnderlyingTimeUnit_24.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_24("STRING_1134574229");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_24);
    UnderlyingInstrument_24.insert(UnderlyingUnitOfMeasure_24.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_24;
    UnderlyingUnitOfMeasureQty_24.setString("17458736");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_24);
    UnderlyingInstrument_24.insert(UnderlyingUnitOfMeasureQty_24.getString());
    all_values.push_back(UnderlyingInstrument_24);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::Confirmation::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_51;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_51("STRING_1391708024");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_51);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_51.insert(UnderlyingSecurityAltID_51.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_51("STRING_1782400629");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_51);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_51.insert(UnderlyingSecurityAltIDSource_51.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_51);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::Confirmation::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_52;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_52("STRING_1074794700");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_52);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_52.insert(UnderlyingSecurityAltID_52.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_52("STRING_1844099042");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_52);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_52.insert(UnderlyingSecurityAltIDSource_52.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_52);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::Confirmation::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_45;
      FIX::UnderlyingStipType UnderlyingStipType_45("STRING_491704142");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_45);
      UnderlyingStipulations_NoUnderlyingStips_45.insert(UnderlyingStipType_45.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_45("STRING_1308127022");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_45);
      UnderlyingStipulations_NoUnderlyingStips_45.insert(UnderlyingStipValue_45.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_45);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::Confirmation::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_47;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_47("STRING_267560121");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_47);
      UndlyInstrumentParties_NoUndlyInstrumentParties_47.insert(UnderlyingInstrumentPartyID_47.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_47('6');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_47);
      UndlyInstrumentParties_NoUndlyInstrumentParties_47.insert(UnderlyingInstrumentPartyIDSource_47.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_47(1740655419);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_47);
      UndlyInstrumentParties_NoUndlyInstrumentParties_47.insert(UnderlyingInstrumentPartyRole_47.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_47);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Confirmation::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_104;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_104("STRING_577741009");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_104);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_104.insert(UnderlyingInstrumentPartySubID_104.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_104(649519927);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_104);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_104.insert(UnderlyingInstrumentPartySubIDType_104.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_104);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::Confirmation::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_105;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_105("STRING_866723577");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_105);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_105.insert(UnderlyingInstrumentPartySubID_105.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_105(1118108478);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_105);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_105.insert(UnderlyingInstrumentPartySubIDType_105.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_105);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::Confirmation::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_48;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_48("STRING_1600774293");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_48);
      UndlyInstrumentParties_NoUndlyInstrumentParties_48.insert(UnderlyingInstrumentPartyID_48.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_48('1');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_48);
      UndlyInstrumentParties_NoUndlyInstrumentParties_48.insert(UnderlyingInstrumentPartyIDSource_48.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_48(1747849663);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_48);
      UndlyInstrumentParties_NoUndlyInstrumentParties_48.insert(UnderlyingInstrumentPartyRole_48.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_48);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Confirmation::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_106;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_106("STRING_723624980");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_106);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_106.insert(UnderlyingInstrumentPartySubID_106.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_106(347730550);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_106);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_106.insert(UnderlyingInstrumentPartySubIDType_106.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_106);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::Confirmation::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_107;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_107("STRING_872065907");
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubID_107);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_107.insert(UnderlyingInstrumentPartySubID_107.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_107(445906695);
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubIDType_107);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_107.insert(UnderlyingInstrumentPartySubIDType_107.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_107);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::Confirmation::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_49;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_49("STRING_79152388");
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyID_49);
      UndlyInstrumentParties_NoUndlyInstrumentParties_49.insert(UnderlyingInstrumentPartyID_49.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_49('1');
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyIDSource_49);
      UndlyInstrumentParties_NoUndlyInstrumentParties_49.insert(UnderlyingInstrumentPartyIDSource_49.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_49(1637169651);
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyRole_49);
      UndlyInstrumentParties_NoUndlyInstrumentParties_49.insert(UnderlyingInstrumentPartyRole_49.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_49);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Confirmation::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_108;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_108("STRING_1149087386");
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubID_108);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_108.insert(UnderlyingInstrumentPartySubID_108.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_108(1235559689);
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubIDType_108);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_108.insert(UnderlyingInstrumentPartySubIDType_108.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_108);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::Confirmation::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_109;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_109("STRING_1635148828");
        noUndlyInstrumentPartySubIDs_0_2_2_1.set(UnderlyingInstrumentPartySubID_109);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_109.insert(UnderlyingInstrumentPartySubID_109.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_109(393311763);
        noUndlyInstrumentPartySubIDs_0_2_2_1.set(UnderlyingInstrumentPartySubIDType_109);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_109.insert(UnderlyingInstrumentPartySubIDType_109.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_109);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_1);
      }
      {
        FIX50SP2::Confirmation::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_110;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_110("STRING_870476670");
        noUndlyInstrumentPartySubIDs_0_2_2_2.set(UnderlyingInstrumentPartySubID_110);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_110.insert(UnderlyingInstrumentPartySubID_110.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_110(562459880);
        noUndlyInstrumentPartySubIDs_0_2_2_2.set(UnderlyingInstrumentPartySubIDType_110);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_110.insert(UnderlyingInstrumentPartySubIDType_110.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_110);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  // YieldData
  multiset<string> YieldData_3;
  FIX::Yield Yield_3;
  Yield_3.setString("71.570000");
  msg.set(Yield_3);
  YieldData_3.insert(Yield_3.getString());
  FIX::YieldCalcDate YieldCalcDate_3("LOCALMKTDATE_1346299564");
  msg.set(YieldCalcDate_3);
  YieldData_3.insert(YieldCalcDate_3.getString());
  FIX::YieldRedemptionDate YieldRedemptionDate_3("LOCALMKTDATE_1054164022");
  msg.set(YieldRedemptionDate_3);
  YieldData_3.insert(YieldRedemptionDate_3.getString());
  FIX::YieldRedemptionPrice YieldRedemptionPrice_3;
  YieldRedemptionPrice_3.setString("13980541");
  msg.set(YieldRedemptionPrice_3);
  YieldData_3.insert(YieldRedemptionPrice_3.getString());
  FIX::YieldRedemptionPriceType YieldRedemptionPriceType_3(1992980298);
  msg.set(YieldRedemptionPriceType_3);
  YieldData_3.insert(YieldRedemptionPriceType_3.getString());
  FIX::YieldType YieldType_3("STRING_LASTYEAR");
  msg.set(YieldType_3);
  YieldData_3.insert(YieldType_3.getString());
  all_values.push_back(YieldData_3);


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
