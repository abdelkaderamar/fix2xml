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
  AccruedInterestAmt_8.setString("3743623");
  msg.set(AccruedInterestAmt_8);
  Confirmation_0.insert(AccruedInterestAmt_8.getString());
  FIX::AccruedInterestRate AccruedInterestRate_3;
  AccruedInterestRate_3.setString("32.480000");
  msg.set(AccruedInterestRate_3);
  Confirmation_0.insert(AccruedInterestRate_3.getString());
  FIX::AllocAccount AllocAccount_8("STRING_391499883");
  msg.set(AllocAccount_8);
  Confirmation_0.insert(AllocAccount_8.getString());
  FIX::AllocAccountType AllocAccountType_0(6);
  msg.set(AllocAccountType_0);
  Confirmation_0.insert(AllocAccountType_0.getString());
  FIX::AllocAcctIDSource AllocAcctIDSource_8(1018284575);
  msg.set(AllocAcctIDSource_8);
  Confirmation_0.insert(AllocAcctIDSource_8.getString());
  FIX::AllocID AllocID_5("STRING_1881799747");
  msg.set(AllocID_5);
  Confirmation_0.insert(AllocID_5.getString());
  FIX::AllocQty AllocQty_8;
  AllocQty_8.setString("13508470");
  msg.set(AllocQty_8);
  Confirmation_0.insert(AllocQty_8.getString());
  FIX::AvgParPx AvgParPx_3;
  AvgParPx_3.setString("15322247");
  msg.set(AvgParPx_3);
  Confirmation_0.insert(AvgParPx_3.getString());
  FIX::AvgPx AvgPx_3;
  AvgPx_3.setString("10150308");
  msg.set(AvgPx_3);
  Confirmation_0.insert(AvgPx_3.getString());
  FIX::AvgPxPrecision AvgPxPrecision_3(2008435662);
  msg.set(AvgPxPrecision_3);
  Confirmation_0.insert(AvgPxPrecision_3.getString());
  FIX::Concession Concession_3;
  Concession_3.setString("6288332");
  msg.set(Concession_3);
  Confirmation_0.insert(Concession_3.getString());
  FIX::ConfirmID ConfirmID_0("STRING_1871982446");
  msg.set(ConfirmID_0);
  Confirmation_0.insert(ConfirmID_0.getString());
  FIX::ConfirmRefID ConfirmRefID_0("STRING_1522312745");
  msg.set(ConfirmRefID_0);
  Confirmation_0.insert(ConfirmRefID_0.getString());
  FIX::ConfirmReqID ConfirmReqID_0("STRING_200738600");
  msg.set(ConfirmReqID_0);
  Confirmation_0.insert(ConfirmReqID_0.getString());
  FIX::ConfirmStatus ConfirmStatus_0(1);
  msg.set(ConfirmStatus_0);
  Confirmation_0.insert(ConfirmStatus_0.getString());
  FIX::ConfirmTransType ConfirmTransType_0(1);
  msg.set(ConfirmTransType_0);
  Confirmation_0.insert(ConfirmTransType_0.getString());
  FIX::ConfirmType ConfirmType_0(3);
  msg.set(ConfirmType_0);
  Confirmation_0.insert(ConfirmType_0.getString());
  FIX::CopyMsgIndicator CopyMsgIndicator_0(false);
  msg.set(CopyMsgIndicator_0);
  Confirmation_0.insert(CopyMsgIndicator_0.getString());
  FIX::Currency Currency_12("USD");
  msg.set(Currency_12);
  Confirmation_0.insert(Currency_12.getString());
  FIX::EncodedText EncodedText_19("DATA_1646793242");
  msg.set(EncodedText_19);
  Confirmation_0.insert(EncodedText_19.getString());
  FIX::EncodedTextLen EncodedTextLen_19(989435886);
  msg.set(EncodedTextLen_19);
  Confirmation_0.insert(EncodedTextLen_19.getString());
  FIX::EndAccruedInterestAmt EndAccruedInterestAmt_8;
  EndAccruedInterestAmt_8.setString("5488826");
  msg.set(EndAccruedInterestAmt_8);
  Confirmation_0.insert(EndAccruedInterestAmt_8.getString());
  FIX::EndCash EndCash_8;
  EndCash_8.setString("8573572");
  msg.set(EndCash_8);
  Confirmation_0.insert(EndCash_8.getString());
  FIX::ExDate ExDate_0("LOCALMKTDATE_241866723");
  msg.set(ExDate_0);
  Confirmation_0.insert(ExDate_0.getString());
  FIX::GrossTradeAmt GrossTradeAmt_3;
  GrossTradeAmt_3.setString("5526599");
  msg.set(GrossTradeAmt_3);
  Confirmation_0.insert(GrossTradeAmt_3.getString());
  FIX::IndividualAllocID IndividualAllocID_8("STRING_50732866");
  msg.set(IndividualAllocID_8);
  Confirmation_0.insert(IndividualAllocID_8.getString());
  FIX::InterestAtMaturity InterestAtMaturity_3;
  InterestAtMaturity_3.setString("16755361");
  msg.set(InterestAtMaturity_3);
  Confirmation_0.insert(InterestAtMaturity_3.getString());
  FIX::LastMkt LastMkt_4("EXCHANGE_568796337");
  msg.set(LastMkt_4);
  Confirmation_0.insert(LastMkt_4.getString());
  FIX::LegalConfirm LegalConfirm_3(true);
  msg.set(LegalConfirm_3);
  Confirmation_0.insert(LegalConfirm_3.getString());
  FIX::MaturityNetMoney MaturityNetMoney_0;
  MaturityNetMoney_0.setString("4410081");
  msg.set(MaturityNetMoney_0);
  Confirmation_0.insert(MaturityNetMoney_0.getString());
  FIX::NetMoney NetMoney_3;
  NetMoney_3.setString("9431586");
  msg.set(NetMoney_3);
  Confirmation_0.insert(NetMoney_3.getString());
  FIX::NumDaysInterest NumDaysInterest_3(1760370479);
  msg.set(NumDaysInterest_3);
  Confirmation_0.insert(NumDaysInterest_3.getString());
  FIX::PriceType PriceType_9(13);
  msg.set(PriceType_9);
  Confirmation_0.insert(PriceType_9.getString());
  FIX::ProcessCode ProcessCode_5('1');
  msg.set(ProcessCode_5);
  Confirmation_0.insert(ProcessCode_5.getString());
  FIX::QtyType QtyType_10(2);
  msg.set(QtyType_10);
  Confirmation_0.insert(QtyType_10.getString());
  FIX::ReportedPx ReportedPx_0;
  ReportedPx_0.setString("5668241");
  msg.set(ReportedPx_0);
  Confirmation_0.insert(ReportedPx_0.getString());
  FIX::SecondaryAllocID SecondaryAllocID_5("STRING_384623943");
  msg.set(SecondaryAllocID_5);
  Confirmation_0.insert(SecondaryAllocID_5.getString());
  FIX::SettlCurrAmt SettlCurrAmt_5;
  SettlCurrAmt_5.setString("159124");
  msg.set(SettlCurrAmt_5);
  Confirmation_0.insert(SettlCurrAmt_5.getString());
  FIX::SettlCurrFxRate SettlCurrFxRate_5;
  SettlCurrFxRate_5.setString("15818549");
  msg.set(SettlCurrFxRate_5);
  Confirmation_0.insert(SettlCurrFxRate_5.getString());
  FIX::SettlCurrFxRateCalc SettlCurrFxRateCalc_5('D');
  msg.set(SettlCurrFxRateCalc_5);
  Confirmation_0.insert(SettlCurrFxRateCalc_5.getString());
  FIX::SettlCurrency SettlCurrency_5("JPY");
  msg.set(SettlCurrency_5);
  Confirmation_0.insert(SettlCurrency_5.getString());
  FIX::SettlDate SettlDate_12("LOCALMKTDATE_1767888702");
  msg.set(SettlDate_12);
  Confirmation_0.insert(SettlDate_12.getString());
  FIX::SettlType SettlType_6("STRING_9");
  msg.set(SettlType_6);
  Confirmation_0.insert(SettlType_6.getString());
  FIX::SharedCommission SharedCommission_0;
  SharedCommission_0.setString("17882320");
  msg.set(SharedCommission_0);
  Confirmation_0.insert(SharedCommission_0.getString());
  FIX::Side Side_11('A');
  msg.set(Side_11);
  Confirmation_0.insert(Side_11.getString());
  FIX::StartCash StartCash_8;
  StartCash_8.setString("6646835");
  msg.set(StartCash_8);
  Confirmation_0.insert(StartCash_8.getString());
  FIX::Text Text_19("STRING_1478129481");
  msg.set(Text_19);
  Confirmation_0.insert(Text_19.getString());
  FIX::TotalTakedown TotalTakedown_3;
  TotalTakedown_3.setString("9390008");
  msg.set(TotalTakedown_3);
  Confirmation_0.insert(TotalTakedown_3.getString());
  FIX::TradeDate TradeDate_7("LOCALMKTDATE_451118371");
  msg.set(TradeDate_7);
  Confirmation_0.insert(TradeDate_7.getString());
  FIX::TransactTime TransactTime_10(FIX::UTCTIMESTAMP(16, 27, 24, 15, 102016));
  msg.set(TransactTime_10);
  Confirmation_0.insert(TransactTime_10.getString());
  all_values.push_back(Confirmation_0);

  // CommissionData
  multiset<string> CommissionData_6;
  FIX::CommCurrency CommCurrency_6("USD");
  msg.set(CommCurrency_6);
  CommissionData_6.insert(CommCurrency_6.getString());
  FIX::CommType CommType_6('4');
  msg.set(CommType_6);
  CommissionData_6.insert(CommType_6.getString());
  FIX::Commission Commission_6;
  Commission_6.setString("21393640");
  msg.set(Commission_6);
  CommissionData_6.insert(Commission_6.getString());
  FIX::FundRenewWaiv FundRenewWaiv_6('Y');
  msg.set(FundRenewWaiv_6);
  CommissionData_6.insert(FundRenewWaiv_6.getString());
  all_values.push_back(CommissionData_6);

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
    OrderCapacityQty_0.setString("20983928");
    noCapacities_0_0.set(OrderCapacityQty_0);
    CpctyConfGrp_NoCapacities_0.insert(OrderCapacityQty_0.getString());
    FIX::OrderRestrictions OrderRestrictions_0("MULTIPLECHARVALUE_6");
    noCapacities_0_0.set(OrderRestrictions_0);
    CpctyConfGrp_NoCapacities_0.insert(OrderRestrictions_0.getString());
    all_values.push_back(CpctyConfGrp_NoCapacities_0);

    msg.addGroup(noCapacities_0_0);
  }
  {
    FIX50SP2::Confirmation::NoCapacities noCapacities_0_1;
    // CpctyConfGrp.NoCapacities
    multiset<string> CpctyConfGrp_NoCapacities_1;
    FIX::OrderCapacity OrderCapacity_1('P');
    noCapacities_0_1.set(OrderCapacity_1);
    CpctyConfGrp_NoCapacities_1.insert(OrderCapacity_1.getString());
    FIX::OrderCapacityQty OrderCapacityQty_1;
    OrderCapacityQty_1.setString("3355331");
    noCapacities_0_1.set(OrderCapacityQty_1);
    CpctyConfGrp_NoCapacities_1.insert(OrderCapacityQty_1.getString());
    FIX::OrderRestrictions OrderRestrictions_1("MULTIPLECHARVALUE_6");
    noCapacities_0_1.set(OrderRestrictions_1);
    CpctyConfGrp_NoCapacities_1.insert(OrderRestrictions_1.getString());
    all_values.push_back(CpctyConfGrp_NoCapacities_1);

    msg.addGroup(noCapacities_0_1);
  }
  {
    FIX50SP2::Confirmation::NoCapacities noCapacities_0_2;
    // CpctyConfGrp.NoCapacities
    multiset<string> CpctyConfGrp_NoCapacities_2;
    FIX::OrderCapacity OrderCapacity_2('W');
    noCapacities_0_2.set(OrderCapacity_2);
    CpctyConfGrp_NoCapacities_2.insert(OrderCapacity_2.getString());
    FIX::OrderCapacityQty OrderCapacityQty_2;
    OrderCapacityQty_2.setString("5811091");
    noCapacities_0_2.set(OrderCapacityQty_2);
    CpctyConfGrp_NoCapacities_2.insert(OrderCapacityQty_2.getString());
    FIX::OrderRestrictions OrderRestrictions_2("MULTIPLECHARVALUE_4");
    noCapacities_0_2.set(OrderRestrictions_2);
    CpctyConfGrp_NoCapacities_2.insert(OrderRestrictions_2.getString());
    all_values.push_back(CpctyConfGrp_NoCapacities_2);

    msg.addGroup(noCapacities_0_2);
  }
  // FinancingDetails
  multiset<string> FinancingDetails_9;
  FIX::AgreementCurrency AgreementCurrency_9("CHF");
  msg.set(AgreementCurrency_9);
  FinancingDetails_9.insert(AgreementCurrency_9.getString());
  FIX::AgreementDate AgreementDate_9("LOCALMKTDATE_1980853596");
  msg.set(AgreementDate_9);
  FinancingDetails_9.insert(AgreementDate_9.getString());
  FIX::AgreementDesc AgreementDesc_9("STRING_1772686045");
  msg.set(AgreementDesc_9);
  FinancingDetails_9.insert(AgreementDesc_9.getString());
  FIX::AgreementID AgreementID_9("STRING_940858947");
  msg.set(AgreementID_9);
  FinancingDetails_9.insert(AgreementID_9.getString());
  FIX::DeliveryType DeliveryType_9(1);
  msg.set(DeliveryType_9);
  FinancingDetails_9.insert(DeliveryType_9.getString());
  FIX::EndDate EndDate_9("LOCALMKTDATE_1103331878");
  msg.set(EndDate_9);
  FinancingDetails_9.insert(EndDate_9.getString());
  FIX::MarginRatio MarginRatio_9;
  MarginRatio_9.setString("97.490000");
  msg.set(MarginRatio_9);
  FinancingDetails_9.insert(MarginRatio_9.getString());
  FIX::StartDate StartDate_9("LOCALMKTDATE_949171905");
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
    multiset<string> InstrumentLeg_20;
    FIX::EncodedLegIssuer EncodedLegIssuer_20("DATA_1949172972");
    noLegs_0_0.set(EncodedLegIssuer_20);
    InstrumentLeg_20.insert(EncodedLegIssuer_20.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_20(1768083670);
    noLegs_0_0.set(EncodedLegIssuerLen_20);
    InstrumentLeg_20.insert(EncodedLegIssuerLen_20.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_20("DATA_1683632553");
    noLegs_0_0.set(EncodedLegSecurityDesc_20);
    InstrumentLeg_20.insert(EncodedLegSecurityDesc_20.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_20(1354350325);
    noLegs_0_0.set(EncodedLegSecurityDescLen_20);
    InstrumentLeg_20.insert(EncodedLegSecurityDescLen_20.getString());
    FIX::LegCFICode LegCFICode_20("STRING_1506129253");
    noLegs_0_0.set(LegCFICode_20);
    InstrumentLeg_20.insert(LegCFICode_20.getString());
    FIX::LegContractMultiplier LegContractMultiplier_20;
    LegContractMultiplier_20.setString("12345048");
    noLegs_0_0.set(LegContractMultiplier_20);
    InstrumentLeg_20.insert(LegContractMultiplier_20.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_20(1328324015);
    noLegs_0_0.set(LegContractMultiplierUnit_20);
    InstrumentLeg_20.insert(LegContractMultiplierUnit_20.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_20("MONTHYEAR_1736782066");
    noLegs_0_0.set(LegContractSettlMonth_20);
    InstrumentLeg_20.insert(LegContractSettlMonth_20.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_20("COUNTRY_1226385247");
    noLegs_0_0.set(LegCountryOfIssue_20);
    InstrumentLeg_20.insert(LegCountryOfIssue_20.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_20("LOCALMKTDATE_97972711");
    noLegs_0_0.set(LegCouponPaymentDate_20);
    InstrumentLeg_20.insert(LegCouponPaymentDate_20.getString());
    FIX::LegCouponRate LegCouponRate_20;
    LegCouponRate_20.setString("17.100000");
    noLegs_0_0.set(LegCouponRate_20);
    InstrumentLeg_20.insert(LegCouponRate_20.getString());
    FIX::LegCreditRating LegCreditRating_20("STRING_2050773684");
    noLegs_0_0.set(LegCreditRating_20);
    InstrumentLeg_20.insert(LegCreditRating_20.getString());
    FIX::LegCurrency LegCurrency_20("USD");
    noLegs_0_0.set(LegCurrency_20);
    InstrumentLeg_20.insert(LegCurrency_20.getString());
    FIX::LegDatedDate LegDatedDate_20("LOCALMKTDATE_1294502593");
    noLegs_0_0.set(LegDatedDate_20);
    InstrumentLeg_20.insert(LegDatedDate_20.getString());
    FIX::LegExerciseStyle LegExerciseStyle_20(384415117);
    noLegs_0_0.set(LegExerciseStyle_20);
    InstrumentLeg_20.insert(LegExerciseStyle_20.getString());
    FIX::LegFactor LegFactor_20;
    LegFactor_20.setString("3981726");
    noLegs_0_0.set(LegFactor_20);
    InstrumentLeg_20.insert(LegFactor_20.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_20(2120086488);
    noLegs_0_0.set(LegFlowScheduleType_20);
    InstrumentLeg_20.insert(LegFlowScheduleType_20.getString());
    FIX::LegInstrRegistry LegInstrRegistry_20("STRING_965524248");
    noLegs_0_0.set(LegInstrRegistry_20);
    InstrumentLeg_20.insert(LegInstrRegistry_20.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_20("LOCALMKTDATE_1533541905");
    noLegs_0_0.set(LegInterestAccrualDate_20);
    InstrumentLeg_20.insert(LegInterestAccrualDate_20.getString());
    FIX::LegIssueDate LegIssueDate_20("LOCALMKTDATE_2104540519");
    noLegs_0_0.set(LegIssueDate_20);
    InstrumentLeg_20.insert(LegIssueDate_20.getString());
    FIX::LegIssuer LegIssuer_20("STRING_1167038434");
    noLegs_0_0.set(LegIssuer_20);
    InstrumentLeg_20.insert(LegIssuer_20.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_20("STRING_1366911853");
    noLegs_0_0.set(LegLocaleOfIssue_20);
    InstrumentLeg_20.insert(LegLocaleOfIssue_20.getString());
    FIX::LegMaturityDate LegMaturityDate_20("LOCALMKTDATE_1729742916");
    noLegs_0_0.set(LegMaturityDate_20);
    InstrumentLeg_20.insert(LegMaturityDate_20.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_20("MONTHYEAR_2107897381");
    noLegs_0_0.set(LegMaturityMonthYear_20);
    InstrumentLeg_20.insert(LegMaturityMonthYear_20.getString());
    FIX::LegMaturityTime LegMaturityTime_20("TZTIMEONLY_1864965387");
    noLegs_0_0.set(LegMaturityTime_20);
    InstrumentLeg_20.insert(LegMaturityTime_20.getString());
    FIX::LegOptAttribute LegOptAttribute_20('6');
    noLegs_0_0.set(LegOptAttribute_20);
    InstrumentLeg_20.insert(LegOptAttribute_20.getString());
    FIX::LegOptionRatio LegOptionRatio_20;
    LegOptionRatio_20.setString("18402734");
    noLegs_0_0.set(LegOptionRatio_20);
    InstrumentLeg_20.insert(LegOptionRatio_20.getString());
    FIX::LegPool LegPool_20("STRING_666653644");
    noLegs_0_0.set(LegPool_20);
    InstrumentLeg_20.insert(LegPool_20.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_20("STRING_618878453");
    noLegs_0_0.set(LegPriceUnitOfMeasure_20);
    InstrumentLeg_20.insert(LegPriceUnitOfMeasure_20.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_20;
    LegPriceUnitOfMeasureQty_20.setString("13536026");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_20);
    InstrumentLeg_20.insert(LegPriceUnitOfMeasureQty_20.getString());
    FIX::LegProduct LegProduct_20(468342968);
    noLegs_0_0.set(LegProduct_20);
    InstrumentLeg_20.insert(LegProduct_20.getString());
    FIX::LegPutOrCall LegPutOrCall_20(239478476);
    noLegs_0_0.set(LegPutOrCall_20);
    InstrumentLeg_20.insert(LegPutOrCall_20.getString());
    FIX::LegRatioQty LegRatioQty_20;
    LegRatioQty_20.setString("8897515");
    noLegs_0_0.set(LegRatioQty_20);
    InstrumentLeg_20.insert(LegRatioQty_20.getString());
    FIX::LegRedemptionDate LegRedemptionDate_20("LOCALMKTDATE_1822693294");
    noLegs_0_0.set(LegRedemptionDate_20);
    InstrumentLeg_20.insert(LegRedemptionDate_20.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_20("STRING_1745607729");
    noLegs_0_0.set(LegRepoCollateralSecurityType_20);
    InstrumentLeg_20.insert(LegRepoCollateralSecurityType_20.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_20;
    LegRepurchaseRate_20.setString("63.590000");
    noLegs_0_0.set(LegRepurchaseRate_20);
    InstrumentLeg_20.insert(LegRepurchaseRate_20.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_20(1003533661);
    noLegs_0_0.set(LegRepurchaseTerm_20);
    InstrumentLeg_20.insert(LegRepurchaseTerm_20.getString());
    FIX::LegSecurityDesc LegSecurityDesc_20("STRING_1334906147");
    noLegs_0_0.set(LegSecurityDesc_20);
    InstrumentLeg_20.insert(LegSecurityDesc_20.getString());
    FIX::LegSecurityExchange LegSecurityExchange_20("EXCHANGE_1203157958");
    noLegs_0_0.set(LegSecurityExchange_20);
    InstrumentLeg_20.insert(LegSecurityExchange_20.getString());
    FIX::LegSecurityID LegSecurityID_20("STRING_1101506372");
    noLegs_0_0.set(LegSecurityID_20);
    InstrumentLeg_20.insert(LegSecurityID_20.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_20("STRING_767744209");
    noLegs_0_0.set(LegSecurityIDSource_20);
    InstrumentLeg_20.insert(LegSecurityIDSource_20.getString());
    FIX::LegSecuritySubType LegSecuritySubType_20("STRING_1106447994");
    noLegs_0_0.set(LegSecuritySubType_20);
    InstrumentLeg_20.insert(LegSecuritySubType_20.getString());
    FIX::LegSecurityType LegSecurityType_20("STRING_1150388315");
    noLegs_0_0.set(LegSecurityType_20);
    InstrumentLeg_20.insert(LegSecurityType_20.getString());
    FIX::LegSide LegSide_20('6');
    noLegs_0_0.set(LegSide_20);
    InstrumentLeg_20.insert(LegSide_20.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_20("STRING_253466940");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_20);
    InstrumentLeg_20.insert(LegStateOrProvinceOfIssue_20.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_20("USD");
    noLegs_0_0.set(LegStrikeCurrency_20);
    InstrumentLeg_20.insert(LegStrikeCurrency_20.getString());
    FIX::LegStrikePrice LegStrikePrice_20;
    LegStrikePrice_20.setString("2260697");
    noLegs_0_0.set(LegStrikePrice_20);
    InstrumentLeg_20.insert(LegStrikePrice_20.getString());
    FIX::LegSymbol LegSymbol_20("STRING_352844032");
    noLegs_0_0.set(LegSymbol_20);
    InstrumentLeg_20.insert(LegSymbol_20.getString());
    FIX::LegSymbolSfx LegSymbolSfx_20("STRING_459524221");
    noLegs_0_0.set(LegSymbolSfx_20);
    InstrumentLeg_20.insert(LegSymbolSfx_20.getString());
    FIX::LegTimeUnit LegTimeUnit_20("STRING_183126652");
    noLegs_0_0.set(LegTimeUnit_20);
    InstrumentLeg_20.insert(LegTimeUnit_20.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_20("STRING_1519882466");
    noLegs_0_0.set(LegUnitOfMeasure_20);
    InstrumentLeg_20.insert(LegUnitOfMeasure_20.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_20;
    LegUnitOfMeasureQty_20.setString("18264360");
    noLegs_0_0.set(LegUnitOfMeasureQty_20);
    InstrumentLeg_20.insert(LegUnitOfMeasureQty_20.getString());
    all_values.push_back(InstrumentLeg_20);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::Confirmation::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_32;
      FIX::LegSecurityAltID LegSecurityAltID_32("STRING_1480296199");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_32);
      LegSecAltIDGrp_NoLegSecurityAltID_32.insert(LegSecurityAltID_32.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_32("STRING_1543917814");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_32);
      LegSecAltIDGrp_NoLegSecurityAltID_32.insert(LegSecurityAltIDSource_32.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_32);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::Confirmation::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_33;
      FIX::LegSecurityAltID LegSecurityAltID_33("STRING_450977067");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_33);
      LegSecAltIDGrp_NoLegSecurityAltID_33.insert(LegSecurityAltID_33.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_33("STRING_1173086033");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_33);
      LegSecAltIDGrp_NoLegSecurityAltID_33.insert(LegSecurityAltIDSource_33.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_33);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    msg.addGroup(noLegs_0_0);
  }
  // Instrument
  multiset<string> Instrument_13;
  FIX::AttachmentPoint AttachmentPoint_13;
  AttachmentPoint_13.setString("78.100000");
  msg.set(AttachmentPoint_13);
  Instrument_13.insert(AttachmentPoint_13.getString());
  FIX::CFICode CFICode_13("STRING_1069855521");
  msg.set(CFICode_13);
  Instrument_13.insert(CFICode_13.getString());
  FIX::CPProgram CPProgram_13(99);
  msg.set(CPProgram_13);
  Instrument_13.insert(CPProgram_13.getString());
  FIX::CPRegType CPRegType_13("STRING_531430778");
  msg.set(CPRegType_13);
  Instrument_13.insert(CPRegType_13.getString());
  FIX::CapPrice CapPrice_13;
  CapPrice_13.setString("13093339");
  msg.set(CapPrice_13);
  Instrument_13.insert(CapPrice_13.getString());
  FIX::ContractMultiplier ContractMultiplier_13;
  ContractMultiplier_13.setString("12689565");
  msg.set(ContractMultiplier_13);
  Instrument_13.insert(ContractMultiplier_13.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_13(1);
  msg.set(ContractMultiplierUnit_13);
  Instrument_13.insert(ContractMultiplierUnit_13.getString());
  FIX::ContractSettlMonth ContractSettlMonth_13("MONTHYEAR_907458078");
  msg.set(ContractSettlMonth_13);
  Instrument_13.insert(ContractSettlMonth_13.getString());
  FIX::CountryOfIssue CountryOfIssue_13("COUNTRY_1245729249");
  msg.set(CountryOfIssue_13);
  Instrument_13.insert(CountryOfIssue_13.getString());
  FIX::CouponPaymentDate CouponPaymentDate_13("LOCALMKTDATE_1210174086");
  msg.set(CouponPaymentDate_13);
  Instrument_13.insert(CouponPaymentDate_13.getString());
  FIX::CouponRate CouponRate_13;
  CouponRate_13.setString("5.770000");
  msg.set(CouponRate_13);
  Instrument_13.insert(CouponRate_13.getString());
  FIX::CreditRating CreditRating_13("STRING_301403559");
  msg.set(CreditRating_13);
  Instrument_13.insert(CreditRating_13.getString());
  FIX::DatedDate DatedDate_13("LOCALMKTDATE_164196810");
  msg.set(DatedDate_13);
  Instrument_13.insert(DatedDate_13.getString());
  FIX::DetachmentPoint DetachmentPoint_13;
  DetachmentPoint_13.setString("47.860000");
  msg.set(DetachmentPoint_13);
  Instrument_13.insert(DetachmentPoint_13.getString());
  FIX::EncodedIssuer EncodedIssuer_13("DATA_1407851554");
  msg.set(EncodedIssuer_13);
  Instrument_13.insert(EncodedIssuer_13.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_13(1314585125);
  msg.set(EncodedIssuerLen_13);
  Instrument_13.insert(EncodedIssuerLen_13.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_13("DATA_1537918107");
  msg.set(EncodedSecurityDesc_13);
  Instrument_13.insert(EncodedSecurityDesc_13.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_13(1661318494);
  msg.set(EncodedSecurityDescLen_13);
  Instrument_13.insert(EncodedSecurityDescLen_13.getString());
  FIX::ExerciseStyle ExerciseStyle_13(0);
  msg.set(ExerciseStyle_13);
  Instrument_13.insert(ExerciseStyle_13.getString());
  FIX::Factor Factor_13;
  Factor_13.setString("4639004");
  msg.set(Factor_13);
  Instrument_13.insert(Factor_13.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_13(true);
  msg.set(FlexProductEligibilityIndicator_13);
  Instrument_13.insert(FlexProductEligibilityIndicator_13.getString());
  FIX::FlexibleIndicator FlexibleIndicator_13(true);
  msg.set(FlexibleIndicator_13);
  Instrument_13.insert(FlexibleIndicator_13.getString());
  FIX::FloorPrice FloorPrice_13;
  FloorPrice_13.setString("9234246");
  msg.set(FloorPrice_13);
  Instrument_13.insert(FloorPrice_13.getString());
  FIX::FlowScheduleType FlowScheduleType_13(1);
  msg.set(FlowScheduleType_13);
  Instrument_13.insert(FlowScheduleType_13.getString());
  FIX::InstrRegistry InstrRegistry_13("STRING_427147760");
  msg.set(InstrRegistry_13);
  Instrument_13.insert(InstrRegistry_13.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_13('6');
  msg.set(InstrmtAssignmentMethod_13);
  Instrument_13.insert(InstrmtAssignmentMethod_13.getString());
  FIX::InterestAccrualDate InterestAccrualDate_13("LOCALMKTDATE_1835900847");
  msg.set(InterestAccrualDate_13);
  Instrument_13.insert(InterestAccrualDate_13.getString());
  FIX::IssueDate IssueDate_13("LOCALMKTDATE_1907443960");
  msg.set(IssueDate_13);
  Instrument_13.insert(IssueDate_13.getString());
  FIX::Issuer Issuer_13("STRING_2146294886");
  msg.set(Issuer_13);
  Instrument_13.insert(Issuer_13.getString());
  FIX::ListMethod ListMethod_13(0);
  msg.set(ListMethod_13);
  Instrument_13.insert(ListMethod_13.getString());
  FIX::LocaleOfIssue LocaleOfIssue_13("STRING_933046345");
  msg.set(LocaleOfIssue_13);
  Instrument_13.insert(LocaleOfIssue_13.getString());
  FIX::MaturityDate MaturityDate_13("LOCALMKTDATE_61899048");
  msg.set(MaturityDate_13);
  Instrument_13.insert(MaturityDate_13.getString());
  FIX::MaturityMonthYear MaturityMonthYear_13("MONTHYEAR_1209249787");
  msg.set(MaturityMonthYear_13);
  Instrument_13.insert(MaturityMonthYear_13.getString());
  FIX::MaturityTime MaturityTime_13("TZTIMEONLY_1312251354");
  msg.set(MaturityTime_13);
  Instrument_13.insert(MaturityTime_13.getString());
  FIX::MinPriceIncrement MinPriceIncrement_13;
  MinPriceIncrement_13.setString("5933298");
  msg.set(MinPriceIncrement_13);
  Instrument_13.insert(MinPriceIncrement_13.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_13;
  MinPriceIncrementAmount_13.setString("3711001");
  msg.set(MinPriceIncrementAmount_13);
  Instrument_13.insert(MinPriceIncrementAmount_13.getString());
  FIX::NTPositionLimit NTPositionLimit_13(433724244);
  msg.set(NTPositionLimit_13);
  Instrument_13.insert(NTPositionLimit_13.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_13;
  NotionalPercentageOutstanding_13.setString("2.510000");
  msg.set(NotionalPercentageOutstanding_13);
  Instrument_13.insert(NotionalPercentageOutstanding_13.getString());
  FIX::OptAttribute OptAttribute_13('1');
  msg.set(OptAttribute_13);
  Instrument_13.insert(OptAttribute_13.getString());
  FIX::OptPayoutAmount OptPayoutAmount_13;
  OptPayoutAmount_13.setString("16794534");
  msg.set(OptPayoutAmount_13);
  Instrument_13.insert(OptPayoutAmount_13.getString());
  FIX::OptPayoutType OptPayoutType_13(2);
  msg.set(OptPayoutType_13);
  Instrument_13.insert(OptPayoutType_13.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_13;
  OriginalNotionalPercentageOutstanding_13.setString("87.910000");
  msg.set(OriginalNotionalPercentageOutstanding_13);
  Instrument_13.insert(OriginalNotionalPercentageOutstanding_13.getString());
  FIX::Pool Pool_13("STRING_1980857052");
  msg.set(Pool_13);
  Instrument_13.insert(Pool_13.getString());
  FIX::PositionLimit PositionLimit_13(26857499);
  msg.set(PositionLimit_13);
  Instrument_13.insert(PositionLimit_13.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_13("STRING_INX");
  msg.set(PriceQuoteMethod_13);
  Instrument_13.insert(PriceQuoteMethod_13.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_13("STRING_1241224958");
  msg.set(PriceUnitOfMeasure_13);
  Instrument_13.insert(PriceUnitOfMeasure_13.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_13;
  PriceUnitOfMeasureQty_13.setString("13414426");
  msg.set(PriceUnitOfMeasureQty_13);
  Instrument_13.insert(PriceUnitOfMeasureQty_13.getString());
  FIX::Product Product_15(9);
  msg.set(Product_15);
  Instrument_13.insert(Product_15.getString());
  FIX::ProductComplex ProductComplex_13("STRING_755059804");
  msg.set(ProductComplex_13);
  Instrument_13.insert(ProductComplex_13.getString());
  FIX::PutOrCall PutOrCall_13(0);
  msg.set(PutOrCall_13);
  Instrument_13.insert(PutOrCall_13.getString());
  FIX::RedemptionDate RedemptionDate_13("LOCALMKTDATE_2090398460");
  msg.set(RedemptionDate_13);
  Instrument_13.insert(RedemptionDate_13.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_13("STRING_494964431");
  msg.set(RepoCollateralSecurityType_13);
  Instrument_13.insert(RepoCollateralSecurityType_13.getString());
  FIX::RepurchaseRate RepurchaseRate_13;
  RepurchaseRate_13.setString("28.280000");
  msg.set(RepurchaseRate_13);
  Instrument_13.insert(RepurchaseRate_13.getString());
  FIX::RepurchaseTerm RepurchaseTerm_13(866339457);
  msg.set(RepurchaseTerm_13);
  Instrument_13.insert(RepurchaseTerm_13.getString());
  FIX::RestructuringType RestructuringType_13("STRING_MR");
  msg.set(RestructuringType_13);
  Instrument_13.insert(RestructuringType_13.getString());
  FIX::SecurityDesc SecurityDesc_13("STRING_1377760589");
  msg.set(SecurityDesc_13);
  Instrument_13.insert(SecurityDesc_13.getString());
  FIX::SecurityExchange SecurityExchange_13("EXCHANGE_1468716529");
  msg.set(SecurityExchange_13);
  Instrument_13.insert(SecurityExchange_13.getString());
  FIX::SecurityGroup SecurityGroup_13("STRING_106412908");
  msg.set(SecurityGroup_13);
  Instrument_13.insert(SecurityGroup_13.getString());
  FIX::SecurityID SecurityID_13("STRING_1137720901");
  msg.set(SecurityID_13);
  Instrument_13.insert(SecurityID_13.getString());
  FIX::SecurityIDSource SecurityIDSource_13("STRING_E");
  msg.set(SecurityIDSource_13);
  Instrument_13.insert(SecurityIDSource_13.getString());
  FIX::SecurityStatus SecurityStatus_13("STRING_2");
  msg.set(SecurityStatus_13);
  Instrument_13.insert(SecurityStatus_13.getString());
  FIX::SecuritySubType SecuritySubType_13("STRING_2070767246");
  msg.set(SecuritySubType_13);
  Instrument_13.insert(SecuritySubType_13.getString());
  FIX::SecurityType SecurityType_15("STRING_IRS");
  msg.set(SecurityType_15);
  Instrument_13.insert(SecurityType_15.getString());
  FIX::Seniority Seniority_13("STRING_SR");
  msg.set(Seniority_13);
  Instrument_13.insert(Seniority_13.getString());
  FIX::SettlMethod SettlMethod_13('P');
  msg.set(SettlMethod_13);
  Instrument_13.insert(SettlMethod_13.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_13("STRING_2122756642");
  msg.set(SettleOnOpenFlag_13);
  Instrument_13.insert(SettleOnOpenFlag_13.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_13("STRING_1826157099");
  msg.set(StateOrProvinceOfIssue_13);
  Instrument_13.insert(StateOrProvinceOfIssue_13.getString());
  FIX::StrikeCurrency StrikeCurrency_13("CHF");
  msg.set(StrikeCurrency_13);
  Instrument_13.insert(StrikeCurrency_13.getString());
  FIX::StrikeMultiplier StrikeMultiplier_13;
  StrikeMultiplier_13.setString("9572316");
  msg.set(StrikeMultiplier_13);
  Instrument_13.insert(StrikeMultiplier_13.getString());
  FIX::StrikePrice StrikePrice_13;
  StrikePrice_13.setString("12012290");
  msg.set(StrikePrice_13);
  Instrument_13.insert(StrikePrice_13.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_13(5);
  msg.set(StrikePriceBoundaryMethod_13);
  Instrument_13.insert(StrikePriceBoundaryMethod_13.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_13;
  StrikePriceBoundaryPrecision_13.setString("68.090000");
  msg.set(StrikePriceBoundaryPrecision_13);
  Instrument_13.insert(StrikePriceBoundaryPrecision_13.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_13(3);
  msg.set(StrikePriceDeterminationMethod_13);
  Instrument_13.insert(StrikePriceDeterminationMethod_13.getString());
  FIX::StrikeValue StrikeValue_13;
  StrikeValue_13.setString("6647614");
  msg.set(StrikeValue_13);
  Instrument_13.insert(StrikeValue_13.getString());
  FIX::Symbol Symbol_13("STRING_271766738");
  msg.set(Symbol_13);
  Instrument_13.insert(Symbol_13.getString());
  FIX::SymbolSfx SymbolSfx_13("STRING_WI");
  msg.set(SymbolSfx_13);
  Instrument_13.insert(SymbolSfx_13.getString());
  FIX::TimeUnit TimeUnit_13("STRING_Mo");
  msg.set(TimeUnit_13);
  Instrument_13.insert(TimeUnit_13.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_13(4);
  msg.set(UnderlyingPriceDeterminationMethod_13);
  Instrument_13.insert(UnderlyingPriceDeterminationMethod_13.getString());
  FIX::UnitOfMeasure UnitOfMeasure_13("STRING_MMbbl");
  msg.set(UnitOfMeasure_13);
  Instrument_13.insert(UnitOfMeasure_13.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_13;
  UnitOfMeasureQty_13.setString("19020679");
  msg.set(UnitOfMeasureQty_13);
  Instrument_13.insert(UnitOfMeasureQty_13.getString());
  FIX::ValuationMethod ValuationMethod_13("STRING_CDS");
  msg.set(ValuationMethod_13);
  Instrument_13.insert(ValuationMethod_13.getString());
  all_values.push_back(Instrument_13);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::Confirmation::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_29;
    FIX::ComplexEventCondition ComplexEventCondition_29(2);
    noComplexEvents_0_0.set(ComplexEventCondition_29);
    ComplexEvents_NoComplexEvents_29.insert(ComplexEventCondition_29.getString());
    FIX::ComplexEventPrice ComplexEventPrice_29;
    ComplexEventPrice_29.setString("5600353");
    noComplexEvents_0_0.set(ComplexEventPrice_29);
    ComplexEvents_NoComplexEvents_29.insert(ComplexEventPrice_29.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_29(3);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_29);
    ComplexEvents_NoComplexEvents_29.insert(ComplexEventPriceBoundaryMethod_29.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_29;
    ComplexEventPriceBoundaryPrecision_29.setString("77.140000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_29);
    ComplexEvents_NoComplexEvents_29.insert(ComplexEventPriceBoundaryPrecision_29.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_29(2);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_29);
    ComplexEvents_NoComplexEvents_29.insert(ComplexEventPriceTimeType_29.getString());
    FIX::ComplexEventType ComplexEventType_29(4);
    noComplexEvents_0_0.set(ComplexEventType_29);
    ComplexEvents_NoComplexEvents_29.insert(ComplexEventType_29.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_29;
    ComplexOptPayoutAmount_29.setString("10731949");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_29);
    ComplexEvents_NoComplexEvents_29.insert(ComplexOptPayoutAmount_29.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_29);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::Confirmation::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_59;
      FIX::ComplexEventEndDate ComplexEventEndDate_59(FIX::UTCTIMESTAMP(6, 54, 0, 27, 92013));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_59);
      ComplexEventDates_NoComplexEventDates_59.insert(ComplexEventEndDate_59.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_59(FIX::UTCTIMESTAMP(5, 36, 42, 23, 102006));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_59);
      ComplexEventDates_NoComplexEventDates_59.insert(ComplexEventStartDate_59.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_59);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::Confirmation::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_115;
        FIX::ComplexEventEndTime ComplexEventEndTime_115(FIX::UTCTIMEONLY(1, 23, 43));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_115);
        ComplexEventTimes_NoComplexEventTimes_115.insert(ComplexEventEndTime_115.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_115(FIX::UTCTIMEONLY(16, 11, 51));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_115);
        ComplexEventTimes_NoComplexEventTimes_115.insert(ComplexEventStartTime_115.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_115);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::Confirmation::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_30;
    FIX::ComplexEventCondition ComplexEventCondition_30(2);
    noComplexEvents_0_1.set(ComplexEventCondition_30);
    ComplexEvents_NoComplexEvents_30.insert(ComplexEventCondition_30.getString());
    FIX::ComplexEventPrice ComplexEventPrice_30;
    ComplexEventPrice_30.setString("4040445");
    noComplexEvents_0_1.set(ComplexEventPrice_30);
    ComplexEvents_NoComplexEvents_30.insert(ComplexEventPrice_30.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_30(1);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_30);
    ComplexEvents_NoComplexEvents_30.insert(ComplexEventPriceBoundaryMethod_30.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_30;
    ComplexEventPriceBoundaryPrecision_30.setString("30.720000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_30);
    ComplexEvents_NoComplexEvents_30.insert(ComplexEventPriceBoundaryPrecision_30.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_30(3);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_30);
    ComplexEvents_NoComplexEvents_30.insert(ComplexEventPriceTimeType_30.getString());
    FIX::ComplexEventType ComplexEventType_30(3);
    noComplexEvents_0_1.set(ComplexEventType_30);
    ComplexEvents_NoComplexEvents_30.insert(ComplexEventType_30.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_30;
    ComplexOptPayoutAmount_30.setString("19636080");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_30);
    ComplexEvents_NoComplexEvents_30.insert(ComplexOptPayoutAmount_30.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_30);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::Confirmation::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_60;
      FIX::ComplexEventEndDate ComplexEventEndDate_60(FIX::UTCTIMESTAMP(13, 12, 37, 4, 92002));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_60);
      ComplexEventDates_NoComplexEventDates_60.insert(ComplexEventEndDate_60.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_60(FIX::UTCTIMESTAMP(5, 37, 10, 20, 112009));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_60);
      ComplexEventDates_NoComplexEventDates_60.insert(ComplexEventStartDate_60.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_60);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::Confirmation::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_116;
        FIX::ComplexEventEndTime ComplexEventEndTime_116(FIX::UTCTIMEONLY(20, 40, 46));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_116);
        ComplexEventTimes_NoComplexEventTimes_116.insert(ComplexEventEndTime_116.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_116(FIX::UTCTIMEONLY(20, 49, 51));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_116);
        ComplexEventTimes_NoComplexEventTimes_116.insert(ComplexEventStartTime_116.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_116);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::Confirmation::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_117;
        FIX::ComplexEventEndTime ComplexEventEndTime_117(FIX::UTCTIMEONLY(22, 28, 9));
        noComplexEventTimes_1_0_2_1.set(ComplexEventEndTime_117);
        ComplexEventTimes_NoComplexEventTimes_117.insert(ComplexEventEndTime_117.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_117(FIX::UTCTIMEONLY(16, 41, 49));
        noComplexEventTimes_1_0_2_1.set(ComplexEventStartTime_117);
        ComplexEventTimes_NoComplexEventTimes_117.insert(ComplexEventStartTime_117.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_117);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      {
        FIX50SP2::Confirmation::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_118;
        FIX::ComplexEventEndTime ComplexEventEndTime_118(FIX::UTCTIMEONLY(6, 1, 43));
        noComplexEventTimes_1_0_2_2.set(ComplexEventEndTime_118);
        ComplexEventTimes_NoComplexEventTimes_118.insert(ComplexEventEndTime_118.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_118(FIX::UTCTIMEONLY(22, 44, 27));
        noComplexEventTimes_1_0_2_2.set(ComplexEventStartTime_118);
        ComplexEventTimes_NoComplexEventTimes_118.insert(ComplexEventStartTime_118.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_118);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::Confirmation::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_61;
      FIX::ComplexEventEndDate ComplexEventEndDate_61(FIX::UTCTIMESTAMP(1, 30, 32, 3, 102011));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_61);
      ComplexEventDates_NoComplexEventDates_61.insert(ComplexEventEndDate_61.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_61(FIX::UTCTIMESTAMP(9, 21, 28, 13, 102017));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_61);
      ComplexEventDates_NoComplexEventDates_61.insert(ComplexEventStartDate_61.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_61);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::Confirmation::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_119;
        FIX::ComplexEventEndTime ComplexEventEndTime_119(FIX::UTCTIMEONLY(4, 40, 52));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_119);
        ComplexEventTimes_NoComplexEventTimes_119.insert(ComplexEventEndTime_119.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_119(FIX::UTCTIMEONLY(1, 25, 39));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_119);
        ComplexEventTimes_NoComplexEventTimes_119.insert(ComplexEventStartTime_119.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_119);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    {
      FIX50SP2::Confirmation::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_62;
      FIX::ComplexEventEndDate ComplexEventEndDate_62(FIX::UTCTIMESTAMP(19, 41, 50, 2, 82004));
      noComplexEventDates_1_1_2.set(ComplexEventEndDate_62);
      ComplexEventDates_NoComplexEventDates_62.insert(ComplexEventEndDate_62.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_62(FIX::UTCTIMESTAMP(2, 47, 24, 2, 42009));
      noComplexEventDates_1_1_2.set(ComplexEventStartDate_62);
      ComplexEventDates_NoComplexEventDates_62.insert(ComplexEventStartDate_62.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_62);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::Confirmation::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_120;
        FIX::ComplexEventEndTime ComplexEventEndTime_120(FIX::UTCTIMEONLY(18, 32, 37));
        noComplexEventTimes_1_2_2_0.set(ComplexEventEndTime_120);
        ComplexEventTimes_NoComplexEventTimes_120.insert(ComplexEventEndTime_120.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_120(FIX::UTCTIMEONLY(21, 46, 39));
        noComplexEventTimes_1_2_2_0.set(ComplexEventStartTime_120);
        ComplexEventTimes_NoComplexEventTimes_120.insert(ComplexEventStartTime_120.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_120);

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_0);
      }
      {
        FIX50SP2::Confirmation::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_121;
        FIX::ComplexEventEndTime ComplexEventEndTime_121(FIX::UTCTIMEONLY(2, 12, 32));
        noComplexEventTimes_1_2_2_1.set(ComplexEventEndTime_121);
        ComplexEventTimes_NoComplexEventTimes_121.insert(ComplexEventEndTime_121.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_121(FIX::UTCTIMEONLY(1, 57, 36));
        noComplexEventTimes_1_2_2_1.set(ComplexEventStartTime_121);
        ComplexEventTimes_NoComplexEventTimes_121.insert(ComplexEventStartTime_121.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_121);

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_2);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::Confirmation::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_27;
    FIX::EventDate EventDate_27("LOCALMKTDATE_1703985572");
    noEvents_0_0.set(EventDate_27);
    EvntGrp_NoEvents_27.insert(EventDate_27.getString());
    FIX::EventPx EventPx_27;
    EventPx_27.setString("19413725");
    noEvents_0_0.set(EventPx_27);
    EvntGrp_NoEvents_27.insert(EventPx_27.getString());
    FIX::EventText EventText_27("STRING_70918982");
    noEvents_0_0.set(EventText_27);
    EvntGrp_NoEvents_27.insert(EventText_27.getString());
    FIX::EventTime EventTime_27(FIX::UTCTIMESTAMP(4, 37, 1, 23, 12007));
    noEvents_0_0.set(EventTime_27);
    EvntGrp_NoEvents_27.insert(EventTime_27.getString());
    FIX::EventType EventType_27(18);
    noEvents_0_0.set(EventType_27);
    EvntGrp_NoEvents_27.insert(EventType_27.getString());
    all_values.push_back(EvntGrp_NoEvents_27);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::Confirmation::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_28;
    FIX::EventDate EventDate_28("LOCALMKTDATE_421050463");
    noEvents_0_1.set(EventDate_28);
    EvntGrp_NoEvents_28.insert(EventDate_28.getString());
    FIX::EventPx EventPx_28;
    EventPx_28.setString("12545756");
    noEvents_0_1.set(EventPx_28);
    EvntGrp_NoEvents_28.insert(EventPx_28.getString());
    FIX::EventText EventText_28("STRING_392254149");
    noEvents_0_1.set(EventText_28);
    EvntGrp_NoEvents_28.insert(EventText_28.getString());
    FIX::EventTime EventTime_28(FIX::UTCTIMESTAMP(12, 41, 21, 16, 42008));
    noEvents_0_1.set(EventTime_28);
    EvntGrp_NoEvents_28.insert(EventTime_28.getString());
    FIX::EventType EventType_28(99);
    noEvents_0_1.set(EventType_28);
    EvntGrp_NoEvents_28.insert(EventType_28.getString());
    all_values.push_back(EvntGrp_NoEvents_28);

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::Confirmation::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_29;
    FIX::EventDate EventDate_29("LOCALMKTDATE_382676951");
    noEvents_0_2.set(EventDate_29);
    EvntGrp_NoEvents_29.insert(EventDate_29.getString());
    FIX::EventPx EventPx_29;
    EventPx_29.setString("6204258");
    noEvents_0_2.set(EventPx_29);
    EvntGrp_NoEvents_29.insert(EventPx_29.getString());
    FIX::EventText EventText_29("STRING_390241623");
    noEvents_0_2.set(EventText_29);
    EvntGrp_NoEvents_29.insert(EventText_29.getString());
    FIX::EventTime EventTime_29(FIX::UTCTIMESTAMP(23, 8, 32, 16, 52014));
    noEvents_0_2.set(EventTime_29);
    EvntGrp_NoEvents_29.insert(EventTime_29.getString());
    FIX::EventType EventType_29(18);
    noEvents_0_2.set(EventType_29);
    EvntGrp_NoEvents_29.insert(EventType_29.getString());
    all_values.push_back(EvntGrp_NoEvents_29);

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::Confirmation::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_23;
    FIX::InstrumentPartyID InstrumentPartyID_23("STRING_1351975195");
    noInstrumentParties_0_0.set(InstrumentPartyID_23);
    InstrumentParties_NoInstrumentParties_23.insert(InstrumentPartyID_23.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_23('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_23);
    InstrumentParties_NoInstrumentParties_23.insert(InstrumentPartyIDSource_23.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_23(553264500);
    noInstrumentParties_0_0.set(InstrumentPartyRole_23);
    InstrumentParties_NoInstrumentParties_23.insert(InstrumentPartyRole_23.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_23);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::Confirmation::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_42;
      FIX::InstrumentPartySubID InstrumentPartySubID_42("STRING_326113333");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_42);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_42.insert(InstrumentPartySubID_42.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_42(178265176);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_42);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_42.insert(InstrumentPartySubIDType_42.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_42);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::Confirmation::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_24;
    FIX::InstrumentPartyID InstrumentPartyID_24("STRING_1077102305");
    noInstrumentParties_0_1.set(InstrumentPartyID_24);
    InstrumentParties_NoInstrumentParties_24.insert(InstrumentPartyID_24.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_24('1');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_24);
    InstrumentParties_NoInstrumentParties_24.insert(InstrumentPartyIDSource_24.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_24(599315640);
    noInstrumentParties_0_1.set(InstrumentPartyRole_24);
    InstrumentParties_NoInstrumentParties_24.insert(InstrumentPartyRole_24.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_24);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::Confirmation::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_43;
      FIX::InstrumentPartySubID InstrumentPartySubID_43("STRING_2118692839");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_43);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_43.insert(InstrumentPartySubID_43.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_43(1990667452);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_43);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_43.insert(InstrumentPartySubIDType_43.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_43);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::Confirmation::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_44;
      FIX::InstrumentPartySubID InstrumentPartySubID_44("STRING_712379160");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_44);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_44.insert(InstrumentPartySubID_44.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_44(1488545993);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_44);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_44.insert(InstrumentPartySubIDType_44.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_44);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::Confirmation::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_45;
      FIX::InstrumentPartySubID InstrumentPartySubID_45("STRING_639856266");
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubID_45);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_45.insert(InstrumentPartySubID_45.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_45(2089295248);
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubIDType_45);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_45.insert(InstrumentPartySubIDType_45.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_45);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_2);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::Confirmation::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_29;
    FIX::SecurityAltID SecurityAltID_29("STRING_1676612894");
    noSecurityAltID_0_0.set(SecurityAltID_29);
    SecAltIDGrp_NoSecurityAltID_29.insert(SecurityAltID_29.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_29("STRING_919922119");
    noSecurityAltID_0_0.set(SecurityAltIDSource_29);
    SecAltIDGrp_NoSecurityAltID_29.insert(SecurityAltIDSource_29.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_29);

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_26;
  FIX::SecurityXML SecurityXML_27("XMLDATA_1814506175");
  msg.set(SecurityXML_27);
  FIX::SecurityXMLLen SecurityXMLLen_13(149555060);
  msg.set(SecurityXMLLen_13);
  FIX::SecurityXMLSchema SecurityXMLSchema_13("STRING_1310163743");
  msg.set(SecurityXMLSchema_13);
  SecurityXML_26.insert(SecurityXMLSchema_13.getString());
  all_values.push_back(SecurityXML_26);

  // InstrumentExtension
  multiset<string> InstrumentExtension_3;
  FIX::DeliveryForm DeliveryForm_3(1);
  msg.set(DeliveryForm_3);
  InstrumentExtension_3.insert(DeliveryForm_3.getString());
  FIX::PctAtRisk PctAtRisk_3;
  PctAtRisk_3.setString("30.920000");
  msg.set(PctAtRisk_3);
  InstrumentExtension_3.insert(PctAtRisk_3.getString());
  all_values.push_back(InstrumentExtension_3);

  // AttrbGrp
  // Group AttrbGrp.NoInstrAttrib
  {
    FIX50SP2::Confirmation::NoInstrAttrib noInstrAttrib_0_0;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_6;
    FIX::InstrAttribType InstrAttribType_6(5);
    noInstrAttrib_0_0.set(InstrAttribType_6);
    AttrbGrp_NoInstrAttrib_6.insert(InstrAttribType_6.getString());
    FIX::InstrAttribValue InstrAttribValue_6("STRING_1710469640");
    noInstrAttrib_0_0.set(InstrAttribValue_6);
    AttrbGrp_NoInstrAttrib_6.insert(InstrAttribValue_6.getString());
    all_values.push_back(AttrbGrp_NoInstrAttrib_6);

    msg.addGroup(noInstrAttrib_0_0);
  }
  {
    FIX50SP2::Confirmation::NoInstrAttrib noInstrAttrib_0_1;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_7;
    FIX::InstrAttribType InstrAttribType_7(23);
    noInstrAttrib_0_1.set(InstrAttribType_7);
    AttrbGrp_NoInstrAttrib_7.insert(InstrAttribType_7.getString());
    FIX::InstrAttribValue InstrAttribValue_7("STRING_149879902");
    noInstrAttrib_0_1.set(InstrAttribValue_7);
    AttrbGrp_NoInstrAttrib_7.insert(InstrAttribValue_7.getString());
    all_values.push_back(AttrbGrp_NoInstrAttrib_7);

    msg.addGroup(noInstrAttrib_0_1);
  }
  // MiscFeesGrp
  // Group MiscFeesGrp.NoMiscFees
  {
    FIX50SP2::Confirmation::NoMiscFees noMiscFees_0_0;
    // MiscFeesGrp.NoMiscFees
    multiset<string> MiscFeesGrp_NoMiscFees_16;
    FIX::MiscFeeAmt MiscFeeAmt_16;
    MiscFeeAmt_16.setString("5735186");
    noMiscFees_0_0.set(MiscFeeAmt_16);
    MiscFeesGrp_NoMiscFees_16.insert(MiscFeeAmt_16.getString());
    FIX::MiscFeeBasis MiscFeeBasis_16(0);
    noMiscFees_0_0.set(MiscFeeBasis_16);
    MiscFeesGrp_NoMiscFees_16.insert(MiscFeeBasis_16.getString());
    FIX::MiscFeeCurr MiscFeeCurr_16("CHF");
    noMiscFees_0_0.set(MiscFeeCurr_16);
    MiscFeesGrp_NoMiscFees_16.insert(MiscFeeCurr_16.getString());
    FIX::MiscFeeType MiscFeeType_16("STRING_1");
    noMiscFees_0_0.set(MiscFeeType_16);
    MiscFeesGrp_NoMiscFees_16.insert(MiscFeeType_16.getString());
    all_values.push_back(MiscFeesGrp_NoMiscFees_16);

    msg.addGroup(noMiscFees_0_0);
  }
  // OrdAllocGrp
  // Group OrdAllocGrp.NoOrders
  {
    FIX50SP2::Confirmation::NoOrders noOrders_0_0;
    // OrdAllocGrp.NoOrders
    multiset<string> OrdAllocGrp_NoOrders_5;
    FIX::ClOrdID ClOrdID_11("STRING_1305048331");
    noOrders_0_0.set(ClOrdID_11);
    OrdAllocGrp_NoOrders_5.insert(ClOrdID_11.getString());
    FIX::ListID ListID_8("STRING_1634994844");
    noOrders_0_0.set(ListID_8);
    OrdAllocGrp_NoOrders_5.insert(ListID_8.getString());
    FIX::OrderAvgPx OrderAvgPx_5;
    OrderAvgPx_5.setString("17735090");
    noOrders_0_0.set(OrderAvgPx_5);
    OrdAllocGrp_NoOrders_5.insert(OrderAvgPx_5.getString());
    FIX::OrderBookingQty OrderBookingQty_5;
    OrderBookingQty_5.setString("19043639");
    noOrders_0_0.set(OrderBookingQty_5);
    OrdAllocGrp_NoOrders_5.insert(OrderBookingQty_5.getString());
    FIX::OrderID OrderID_11("STRING_1819189143");
    noOrders_0_0.set(OrderID_11);
    OrdAllocGrp_NoOrders_5.insert(OrderID_11.getString());
    FIX::OrderQty OrderQty_5;
    OrderQty_5.setString("17447181");
    noOrders_0_0.set(OrderQty_5);
    OrdAllocGrp_NoOrders_5.insert(OrderQty_5.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_11("STRING_1747547776");
    noOrders_0_0.set(SecondaryClOrdID_11);
    OrdAllocGrp_NoOrders_5.insert(SecondaryClOrdID_11.getString());
    FIX::SecondaryOrderID SecondaryOrderID_11("STRING_384084655");
    noOrders_0_0.set(SecondaryOrderID_11);
    OrdAllocGrp_NoOrders_5.insert(SecondaryOrderID_11.getString());
    all_values.push_back(OrdAllocGrp_NoOrders_5);

    // NestedParties2
    // Group NestedParties2.NoNested2PartyIDs
    {
      FIX50SP2::Confirmation::NoOrders::NoNested2PartyIDs noNested2PartyIDs_0_1_0;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_11;
      FIX::Nested2PartyID Nested2PartyID_11("STRING_239920394");
      noNested2PartyIDs_0_1_0.set(Nested2PartyID_11);
      NestedParties2_NoNested2PartyIDs_11.insert(Nested2PartyID_11.getString());
      FIX::Nested2PartyIDSource Nested2PartyIDSource_11('3');
      noNested2PartyIDs_0_1_0.set(Nested2PartyIDSource_11);
      NestedParties2_NoNested2PartyIDs_11.insert(Nested2PartyIDSource_11.getString());
      FIX::Nested2PartyRole Nested2PartyRole_11(370126119);
      noNested2PartyIDs_0_1_0.set(Nested2PartyRole_11);
      NestedParties2_NoNested2PartyIDs_11.insert(Nested2PartyRole_11.getString());
      all_values.push_back(NestedParties2_NoNested2PartyIDs_11);

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::Confirmation::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_22;
        FIX::Nested2PartySubID Nested2PartySubID_22("STRING_1245818375");
        noNested2PartySubIDs_0_0_2_0.set(Nested2PartySubID_22);
        NstdPtys2SubGrp_NoNested2PartySubIDs_22.insert(Nested2PartySubID_22.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_22(37148646);
        noNested2PartySubIDs_0_0_2_0.set(Nested2PartySubIDType_22);
        NstdPtys2SubGrp_NoNested2PartySubIDs_22.insert(Nested2PartySubIDType_22.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_22);

        noNested2PartyIDs_0_1_0.addGroup(noNested2PartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::Confirmation::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_2_1;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_23;
        FIX::Nested2PartySubID Nested2PartySubID_23("STRING_2066088348");
        noNested2PartySubIDs_0_0_2_1.set(Nested2PartySubID_23);
        NstdPtys2SubGrp_NoNested2PartySubIDs_23.insert(Nested2PartySubID_23.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_23(408498470);
        noNested2PartySubIDs_0_0_2_1.set(Nested2PartySubIDType_23);
        NstdPtys2SubGrp_NoNested2PartySubIDs_23.insert(Nested2PartySubIDType_23.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_23);

        noNested2PartyIDs_0_1_0.addGroup(noNested2PartySubIDs_0_0_2_1);
      }
      noOrders_0_0.addGroup(noNested2PartyIDs_0_1_0);
    }
    {
      FIX50SP2::Confirmation::NoOrders::NoNested2PartyIDs noNested2PartyIDs_0_1_1;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_12;
      FIX::Nested2PartyID Nested2PartyID_12("STRING_1700234776");
      noNested2PartyIDs_0_1_1.set(Nested2PartyID_12);
      NestedParties2_NoNested2PartyIDs_12.insert(Nested2PartyID_12.getString());
      FIX::Nested2PartyIDSource Nested2PartyIDSource_12('5');
      noNested2PartyIDs_0_1_1.set(Nested2PartyIDSource_12);
      NestedParties2_NoNested2PartyIDs_12.insert(Nested2PartyIDSource_12.getString());
      FIX::Nested2PartyRole Nested2PartyRole_12(1731903021);
      noNested2PartyIDs_0_1_1.set(Nested2PartyRole_12);
      NestedParties2_NoNested2PartyIDs_12.insert(Nested2PartyRole_12.getString());
      all_values.push_back(NestedParties2_NoNested2PartyIDs_12);

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::Confirmation::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_24;
        FIX::Nested2PartySubID Nested2PartySubID_24("STRING_120443784");
        noNested2PartySubIDs_0_1_2_0.set(Nested2PartySubID_24);
        NstdPtys2SubGrp_NoNested2PartySubIDs_24.insert(Nested2PartySubID_24.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_24(497421485);
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
      multiset<string> NestedParties2_NoNested2PartyIDs_13;
      FIX::Nested2PartyID Nested2PartyID_13("STRING_830863085");
      noNested2PartyIDs_0_1_2.set(Nested2PartyID_13);
      NestedParties2_NoNested2PartyIDs_13.insert(Nested2PartyID_13.getString());
      FIX::Nested2PartyIDSource Nested2PartyIDSource_13('5');
      noNested2PartyIDs_0_1_2.set(Nested2PartyIDSource_13);
      NestedParties2_NoNested2PartyIDs_13.insert(Nested2PartyIDSource_13.getString());
      FIX::Nested2PartyRole Nested2PartyRole_13(1070940140);
      noNested2PartyIDs_0_1_2.set(Nested2PartyRole_13);
      NestedParties2_NoNested2PartyIDs_13.insert(Nested2PartyRole_13.getString());
      all_values.push_back(NestedParties2_NoNested2PartyIDs_13);

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::Confirmation::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_2_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_25;
        FIX::Nested2PartySubID Nested2PartySubID_25("STRING_269892217");
        noNested2PartySubIDs_0_2_2_0.set(Nested2PartySubID_25);
        NstdPtys2SubGrp_NoNested2PartySubIDs_25.insert(Nested2PartySubID_25.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_25(50239647);
        noNested2PartySubIDs_0_2_2_0.set(Nested2PartySubIDType_25);
        NstdPtys2SubGrp_NoNested2PartySubIDs_25.insert(Nested2PartySubIDType_25.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_25);

        noNested2PartyIDs_0_1_2.addGroup(noNested2PartySubIDs_0_2_2_0);
      }
      noOrders_0_0.addGroup(noNested2PartyIDs_0_1_2);
    }
    msg.addGroup(noOrders_0_0);
  }
  {
    FIX50SP2::Confirmation::NoOrders noOrders_0_1;
    // OrdAllocGrp.NoOrders
    multiset<string> OrdAllocGrp_NoOrders_6;
    FIX::ClOrdID ClOrdID_12("STRING_743127073");
    noOrders_0_1.set(ClOrdID_12);
    OrdAllocGrp_NoOrders_6.insert(ClOrdID_12.getString());
    FIX::ListID ListID_9("STRING_316962534");
    noOrders_0_1.set(ListID_9);
    OrdAllocGrp_NoOrders_6.insert(ListID_9.getString());
    FIX::OrderAvgPx OrderAvgPx_6;
    OrderAvgPx_6.setString("13552879");
    noOrders_0_1.set(OrderAvgPx_6);
    OrdAllocGrp_NoOrders_6.insert(OrderAvgPx_6.getString());
    FIX::OrderBookingQty OrderBookingQty_6;
    OrderBookingQty_6.setString("2306382");
    noOrders_0_1.set(OrderBookingQty_6);
    OrdAllocGrp_NoOrders_6.insert(OrderBookingQty_6.getString());
    FIX::OrderID OrderID_12("STRING_2090471541");
    noOrders_0_1.set(OrderID_12);
    OrdAllocGrp_NoOrders_6.insert(OrderID_12.getString());
    FIX::OrderQty OrderQty_6;
    OrderQty_6.setString("11121683");
    noOrders_0_1.set(OrderQty_6);
    OrdAllocGrp_NoOrders_6.insert(OrderQty_6.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_12("STRING_2049827413");
    noOrders_0_1.set(SecondaryClOrdID_12);
    OrdAllocGrp_NoOrders_6.insert(SecondaryClOrdID_12.getString());
    FIX::SecondaryOrderID SecondaryOrderID_12("STRING_1687706091");
    noOrders_0_1.set(SecondaryOrderID_12);
    OrdAllocGrp_NoOrders_6.insert(SecondaryOrderID_12.getString());
    all_values.push_back(OrdAllocGrp_NoOrders_6);

    // NestedParties2
    // Group NestedParties2.NoNested2PartyIDs
    {
      FIX50SP2::Confirmation::NoOrders::NoNested2PartyIDs noNested2PartyIDs_1_1_0;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_14;
      FIX::Nested2PartyID Nested2PartyID_14("STRING_286428420");
      noNested2PartyIDs_1_1_0.set(Nested2PartyID_14);
      NestedParties2_NoNested2PartyIDs_14.insert(Nested2PartyID_14.getString());
      FIX::Nested2PartyIDSource Nested2PartyIDSource_14('6');
      noNested2PartyIDs_1_1_0.set(Nested2PartyIDSource_14);
      NestedParties2_NoNested2PartyIDs_14.insert(Nested2PartyIDSource_14.getString());
      FIX::Nested2PartyRole Nested2PartyRole_14(952152824);
      noNested2PartyIDs_1_1_0.set(Nested2PartyRole_14);
      NestedParties2_NoNested2PartyIDs_14.insert(Nested2PartyRole_14.getString());
      all_values.push_back(NestedParties2_NoNested2PartyIDs_14);

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::Confirmation::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_26;
        FIX::Nested2PartySubID Nested2PartySubID_26("STRING_996129106");
        noNested2PartySubIDs_1_0_2_0.set(Nested2PartySubID_26);
        NstdPtys2SubGrp_NoNested2PartySubIDs_26.insert(Nested2PartySubID_26.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_26(721202464);
        noNested2PartySubIDs_1_0_2_0.set(Nested2PartySubIDType_26);
        NstdPtys2SubGrp_NoNested2PartySubIDs_26.insert(Nested2PartySubIDType_26.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_26);

        noNested2PartyIDs_1_1_0.addGroup(noNested2PartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::Confirmation::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_2_1;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_27;
        FIX::Nested2PartySubID Nested2PartySubID_27("STRING_1858143051");
        noNested2PartySubIDs_1_0_2_1.set(Nested2PartySubID_27);
        NstdPtys2SubGrp_NoNested2PartySubIDs_27.insert(Nested2PartySubID_27.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_27(1033277753);
        noNested2PartySubIDs_1_0_2_1.set(Nested2PartySubIDType_27);
        NstdPtys2SubGrp_NoNested2PartySubIDs_27.insert(Nested2PartySubIDType_27.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_27);

        noNested2PartyIDs_1_1_0.addGroup(noNested2PartySubIDs_1_0_2_1);
      }
      noOrders_0_1.addGroup(noNested2PartyIDs_1_1_0);
    }
    msg.addGroup(noOrders_0_1);
  }
  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::Confirmation::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_30;
    FIX::PartyID PartyID_30("STRING_119157873");
    noPartyIDs_0_0.set(PartyID_30);
    Parties_NoPartyIDs_30.insert(PartyID_30.getString());
    FIX::PartyIDSource PartyIDSource_30('7');
    noPartyIDs_0_0.set(PartyIDSource_30);
    Parties_NoPartyIDs_30.insert(PartyIDSource_30.getString());
    FIX::PartyRole PartyRole_30(22);
    noPartyIDs_0_0.set(PartyRole_30);
    Parties_NoPartyIDs_30.insert(PartyRole_30.getString());
    all_values.push_back(Parties_NoPartyIDs_30);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::Confirmation::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_64;
      FIX::PartySubID PartySubID_64("STRING_1267012064");
      noPartySubIDs_0_1_0.set(PartySubID_64);
      PtysSubGrp_NoPartySubIDs_64.insert(PartySubID_64.getString());
      FIX::PartySubIDType PartySubIDType_64(32);
      noPartySubIDs_0_1_0.set(PartySubIDType_64);
      PtysSubGrp_NoPartySubIDs_64.insert(PartySubIDType_64.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_64);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  // SettlInstructionsData
  multiset<string> SettlInstructionsData_8;
  FIX::SettlDeliveryType SettlDeliveryType_8(0);
  msg.set(SettlDeliveryType_8);
  SettlInstructionsData_8.insert(SettlDeliveryType_8.getString());
  FIX::StandInstDbID StandInstDbID_8("STRING_2097875149");
  msg.set(StandInstDbID_8);
  SettlInstructionsData_8.insert(StandInstDbID_8.getString());
  FIX::StandInstDbName StandInstDbName_8("STRING_1866643976");
  msg.set(StandInstDbName_8);
  SettlInstructionsData_8.insert(StandInstDbName_8.getString());
  FIX::StandInstDbType StandInstDbType_8(2);
  msg.set(StandInstDbType_8);
  SettlInstructionsData_8.insert(StandInstDbType_8.getString());
  all_values.push_back(SettlInstructionsData_8);

  // DlvyInstGrp
  // Group DlvyInstGrp.NoDlvyInst
  {
    FIX50SP2::Confirmation::NoDlvyInst noDlvyInst_0_0;
    // DlvyInstGrp.NoDlvyInst
    multiset<string> DlvyInstGrp_NoDlvyInst_13;
    FIX::DlvyInstType DlvyInstType_13('S');
    noDlvyInst_0_0.set(DlvyInstType_13);
    DlvyInstGrp_NoDlvyInst_13.insert(DlvyInstType_13.getString());
    FIX::SettlInstSource SettlInstSource_13('2');
    noDlvyInst_0_0.set(SettlInstSource_13);
    DlvyInstGrp_NoDlvyInst_13.insert(SettlInstSource_13.getString());
    all_values.push_back(DlvyInstGrp_NoDlvyInst_13);

    // SettlParties
    // Group SettlParties.NoSettlPartyIDs
    {
      FIX50SP2::Confirmation::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_1_0;
      // SettlParties.NoSettlPartyIDs
      multiset<string> SettlParties_NoSettlPartyIDs_25;
      FIX::SettlPartyID SettlPartyID_25("STRING_306015079");
      noSettlPartyIDs_0_1_0.set(SettlPartyID_25);
      SettlParties_NoSettlPartyIDs_25.insert(SettlPartyID_25.getString());
      FIX::SettlPartyIDSource SettlPartyIDSource_25('5');
      noSettlPartyIDs_0_1_0.set(SettlPartyIDSource_25);
      SettlParties_NoSettlPartyIDs_25.insert(SettlPartyIDSource_25.getString());
      FIX::SettlPartyRole SettlPartyRole_25(1109391379);
      noSettlPartyIDs_0_1_0.set(SettlPartyRole_25);
      SettlParties_NoSettlPartyIDs_25.insert(SettlPartyRole_25.getString());
      all_values.push_back(SettlParties_NoSettlPartyIDs_25);

      // SettlPtysSubGrp
      // Group SettlPtysSubGrp.NoSettlPartySubIDs
      {
        FIX50SP2::Confirmation::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_2_0;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_52;
        FIX::SettlPartySubID SettlPartySubID_52("STRING_1642151153");
        noSettlPartySubIDs_0_0_2_0.set(SettlPartySubID_52);
        SettlPtysSubGrp_NoSettlPartySubIDs_52.insert(SettlPartySubID_52.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_52(1011735144);
        noSettlPartySubIDs_0_0_2_0.set(SettlPartySubIDType_52);
        SettlPtysSubGrp_NoSettlPartySubIDs_52.insert(SettlPartySubIDType_52.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_52);

        noSettlPartyIDs_0_1_0.addGroup(noSettlPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::Confirmation::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_2_1;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_53;
        FIX::SettlPartySubID SettlPartySubID_53("STRING_1936709064");
        noSettlPartySubIDs_0_0_2_1.set(SettlPartySubID_53);
        SettlPtysSubGrp_NoSettlPartySubIDs_53.insert(SettlPartySubID_53.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_53(206899936);
        noSettlPartySubIDs_0_0_2_1.set(SettlPartySubIDType_53);
        SettlPtysSubGrp_NoSettlPartySubIDs_53.insert(SettlPartySubIDType_53.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_53);

        noSettlPartyIDs_0_1_0.addGroup(noSettlPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::Confirmation::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_2_2;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_54;
        FIX::SettlPartySubID SettlPartySubID_54("STRING_1298163564");
        noSettlPartySubIDs_0_0_2_2.set(SettlPartySubID_54);
        SettlPtysSubGrp_NoSettlPartySubIDs_54.insert(SettlPartySubID_54.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_54(415228403);
        noSettlPartySubIDs_0_0_2_2.set(SettlPartySubIDType_54);
        SettlPtysSubGrp_NoSettlPartySubIDs_54.insert(SettlPartySubIDType_54.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_54);

        noSettlPartyIDs_0_1_0.addGroup(noSettlPartySubIDs_0_0_2_2);
      }
      noDlvyInst_0_0.addGroup(noSettlPartyIDs_0_1_0);
    }
    msg.addGroup(noDlvyInst_0_0);
  }
  {
    FIX50SP2::Confirmation::NoDlvyInst noDlvyInst_0_1;
    // DlvyInstGrp.NoDlvyInst
    multiset<string> DlvyInstGrp_NoDlvyInst_14;
    FIX::DlvyInstType DlvyInstType_14('C');
    noDlvyInst_0_1.set(DlvyInstType_14);
    DlvyInstGrp_NoDlvyInst_14.insert(DlvyInstType_14.getString());
    FIX::SettlInstSource SettlInstSource_14('2');
    noDlvyInst_0_1.set(SettlInstSource_14);
    DlvyInstGrp_NoDlvyInst_14.insert(SettlInstSource_14.getString());
    all_values.push_back(DlvyInstGrp_NoDlvyInst_14);

    // SettlParties
    // Group SettlParties.NoSettlPartyIDs
    {
      FIX50SP2::Confirmation::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_1_1_0;
      // SettlParties.NoSettlPartyIDs
      multiset<string> SettlParties_NoSettlPartyIDs_26;
      FIX::SettlPartyID SettlPartyID_26("STRING_1880255225");
      noSettlPartyIDs_1_1_0.set(SettlPartyID_26);
      SettlParties_NoSettlPartyIDs_26.insert(SettlPartyID_26.getString());
      FIX::SettlPartyIDSource SettlPartyIDSource_26('1');
      noSettlPartyIDs_1_1_0.set(SettlPartyIDSource_26);
      SettlParties_NoSettlPartyIDs_26.insert(SettlPartyIDSource_26.getString());
      FIX::SettlPartyRole SettlPartyRole_26(297151614);
      noSettlPartyIDs_1_1_0.set(SettlPartyRole_26);
      SettlParties_NoSettlPartyIDs_26.insert(SettlPartyRole_26.getString());
      all_values.push_back(SettlParties_NoSettlPartyIDs_26);

      // SettlPtysSubGrp
      // Group SettlPtysSubGrp.NoSettlPartySubIDs
      {
        FIX50SP2::Confirmation::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_2_0;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_55;
        FIX::SettlPartySubID SettlPartySubID_55("STRING_1740305516");
        noSettlPartySubIDs_1_0_2_0.set(SettlPartySubID_55);
        SettlPtysSubGrp_NoSettlPartySubIDs_55.insert(SettlPartySubID_55.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_55(883180496);
        noSettlPartySubIDs_1_0_2_0.set(SettlPartySubIDType_55);
        SettlPtysSubGrp_NoSettlPartySubIDs_55.insert(SettlPartySubIDType_55.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_55);

        noSettlPartyIDs_1_1_0.addGroup(noSettlPartySubIDs_1_0_2_0);
      }
      noDlvyInst_0_1.addGroup(noSettlPartyIDs_1_1_0);
    }
    msg.addGroup(noDlvyInst_0_1);
  }
  {
    FIX50SP2::Confirmation::NoDlvyInst noDlvyInst_0_2;
    // DlvyInstGrp.NoDlvyInst
    multiset<string> DlvyInstGrp_NoDlvyInst_15;
    FIX::DlvyInstType DlvyInstType_15('S');
    noDlvyInst_0_2.set(DlvyInstType_15);
    DlvyInstGrp_NoDlvyInst_15.insert(DlvyInstType_15.getString());
    FIX::SettlInstSource SettlInstSource_15('2');
    noDlvyInst_0_2.set(SettlInstSource_15);
    DlvyInstGrp_NoDlvyInst_15.insert(SettlInstSource_15.getString());
    all_values.push_back(DlvyInstGrp_NoDlvyInst_15);

    // SettlParties
    // Group SettlParties.NoSettlPartyIDs
    {
      FIX50SP2::Confirmation::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_2_1_0;
      // SettlParties.NoSettlPartyIDs
      multiset<string> SettlParties_NoSettlPartyIDs_27;
      FIX::SettlPartyID SettlPartyID_27("STRING_740068793");
      noSettlPartyIDs_2_1_0.set(SettlPartyID_27);
      SettlParties_NoSettlPartyIDs_27.insert(SettlPartyID_27.getString());
      FIX::SettlPartyIDSource SettlPartyIDSource_27('1');
      noSettlPartyIDs_2_1_0.set(SettlPartyIDSource_27);
      SettlParties_NoSettlPartyIDs_27.insert(SettlPartyIDSource_27.getString());
      FIX::SettlPartyRole SettlPartyRole_27(2100584061);
      noSettlPartyIDs_2_1_0.set(SettlPartyRole_27);
      SettlParties_NoSettlPartyIDs_27.insert(SettlPartyRole_27.getString());
      all_values.push_back(SettlParties_NoSettlPartyIDs_27);

      // SettlPtysSubGrp
      // Group SettlPtysSubGrp.NoSettlPartySubIDs
      {
        FIX50SP2::Confirmation::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_0_2_0;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_56;
        FIX::SettlPartySubID SettlPartySubID_56("STRING_769336719");
        noSettlPartySubIDs_2_0_2_0.set(SettlPartySubID_56);
        SettlPtysSubGrp_NoSettlPartySubIDs_56.insert(SettlPartySubID_56.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_56(88726449);
        noSettlPartySubIDs_2_0_2_0.set(SettlPartySubIDType_56);
        SettlPtysSubGrp_NoSettlPartySubIDs_56.insert(SettlPartySubIDType_56.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_56);

        noSettlPartyIDs_2_1_0.addGroup(noSettlPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::Confirmation::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_0_2_1;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_57;
        FIX::SettlPartySubID SettlPartySubID_57("STRING_448281667");
        noSettlPartySubIDs_2_0_2_1.set(SettlPartySubID_57);
        SettlPtysSubGrp_NoSettlPartySubIDs_57.insert(SettlPartySubID_57.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_57(2091515239);
        noSettlPartySubIDs_2_0_2_1.set(SettlPartySubIDType_57);
        SettlPtysSubGrp_NoSettlPartySubIDs_57.insert(SettlPartySubIDType_57.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_57);

        noSettlPartyIDs_2_1_0.addGroup(noSettlPartySubIDs_2_0_2_1);
      }
      {
        FIX50SP2::Confirmation::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_0_2_2;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_58;
        FIX::SettlPartySubID SettlPartySubID_58("STRING_967479558");
        noSettlPartySubIDs_2_0_2_2.set(SettlPartySubID_58);
        SettlPtysSubGrp_NoSettlPartySubIDs_58.insert(SettlPartySubID_58.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_58(754296746);
        noSettlPartySubIDs_2_0_2_2.set(SettlPartySubIDType_58);
        SettlPtysSubGrp_NoSettlPartySubIDs_58.insert(SettlPartySubIDType_58.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_58);

        noSettlPartyIDs_2_1_0.addGroup(noSettlPartySubIDs_2_0_2_2);
      }
      noDlvyInst_0_2.addGroup(noSettlPartyIDs_2_1_0);
    }
    {
      FIX50SP2::Confirmation::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_2_1_1;
      // SettlParties.NoSettlPartyIDs
      multiset<string> SettlParties_NoSettlPartyIDs_28;
      FIX::SettlPartyID SettlPartyID_28("STRING_474014442");
      noSettlPartyIDs_2_1_1.set(SettlPartyID_28);
      SettlParties_NoSettlPartyIDs_28.insert(SettlPartyID_28.getString());
      FIX::SettlPartyIDSource SettlPartyIDSource_28('2');
      noSettlPartyIDs_2_1_1.set(SettlPartyIDSource_28);
      SettlParties_NoSettlPartyIDs_28.insert(SettlPartyIDSource_28.getString());
      FIX::SettlPartyRole SettlPartyRole_28(1003299719);
      noSettlPartyIDs_2_1_1.set(SettlPartyRole_28);
      SettlParties_NoSettlPartyIDs_28.insert(SettlPartyRole_28.getString());
      all_values.push_back(SettlParties_NoSettlPartyIDs_28);

      // SettlPtysSubGrp
      // Group SettlPtysSubGrp.NoSettlPartySubIDs
      {
        FIX50SP2::Confirmation::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_1_2_0;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_59;
        FIX::SettlPartySubID SettlPartySubID_59("STRING_941122433");
        noSettlPartySubIDs_2_1_2_0.set(SettlPartySubID_59);
        SettlPtysSubGrp_NoSettlPartySubIDs_59.insert(SettlPartySubID_59.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_59(792525135);
        noSettlPartySubIDs_2_1_2_0.set(SettlPartySubIDType_59);
        SettlPtysSubGrp_NoSettlPartySubIDs_59.insert(SettlPartySubIDType_59.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_59);

        noSettlPartyIDs_2_1_1.addGroup(noSettlPartySubIDs_2_1_2_0);
      }
      noDlvyInst_0_2.addGroup(noSettlPartyIDs_2_1_1);
    }
    {
      FIX50SP2::Confirmation::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_2_1_2;
      // SettlParties.NoSettlPartyIDs
      multiset<string> SettlParties_NoSettlPartyIDs_29;
      FIX::SettlPartyID SettlPartyID_29("STRING_175581884");
      noSettlPartyIDs_2_1_2.set(SettlPartyID_29);
      SettlParties_NoSettlPartyIDs_29.insert(SettlPartyID_29.getString());
      FIX::SettlPartyIDSource SettlPartyIDSource_29('9');
      noSettlPartyIDs_2_1_2.set(SettlPartyIDSource_29);
      SettlParties_NoSettlPartyIDs_29.insert(SettlPartyIDSource_29.getString());
      FIX::SettlPartyRole SettlPartyRole_29(1207753538);
      noSettlPartyIDs_2_1_2.set(SettlPartyRole_29);
      SettlParties_NoSettlPartyIDs_29.insert(SettlPartyRole_29.getString());
      all_values.push_back(SettlParties_NoSettlPartyIDs_29);

      // SettlPtysSubGrp
      // Group SettlPtysSubGrp.NoSettlPartySubIDs
      {
        FIX50SP2::Confirmation::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_2_2_0;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_60;
        FIX::SettlPartySubID SettlPartySubID_60("STRING_2002290590");
        noSettlPartySubIDs_2_2_2_0.set(SettlPartySubID_60);
        SettlPtysSubGrp_NoSettlPartySubIDs_60.insert(SettlPartySubID_60.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_60(471627399);
        noSettlPartySubIDs_2_2_2_0.set(SettlPartySubIDType_60);
        SettlPtysSubGrp_NoSettlPartySubIDs_60.insert(SettlPartySubIDType_60.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_60);

        noSettlPartyIDs_2_1_2.addGroup(noSettlPartySubIDs_2_2_2_0);
      }
      {
        FIX50SP2::Confirmation::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_2_2_1;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_61;
        FIX::SettlPartySubID SettlPartySubID_61("STRING_1067406221");
        noSettlPartySubIDs_2_2_2_1.set(SettlPartySubID_61);
        SettlPtysSubGrp_NoSettlPartySubIDs_61.insert(SettlPartySubID_61.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_61(1475954586);
        noSettlPartySubIDs_2_2_2_1.set(SettlPartySubIDType_61);
        SettlPtysSubGrp_NoSettlPartySubIDs_61.insert(SettlPartySubIDType_61.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_61);

        noSettlPartyIDs_2_1_2.addGroup(noSettlPartySubIDs_2_2_2_1);
      }
      {
        FIX50SP2::Confirmation::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_2_2_2;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_62;
        FIX::SettlPartySubID SettlPartySubID_62("STRING_768779014");
        noSettlPartySubIDs_2_2_2_2.set(SettlPartySubID_62);
        SettlPtysSubGrp_NoSettlPartySubIDs_62.insert(SettlPartySubID_62.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_62(1439984963);
        noSettlPartySubIDs_2_2_2_2.set(SettlPartySubIDType_62);
        SettlPtysSubGrp_NoSettlPartySubIDs_62.insert(SettlPartySubIDType_62.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_62);

        noSettlPartyIDs_2_1_2.addGroup(noSettlPartySubIDs_2_2_2_2);
      }
      noDlvyInst_0_2.addGroup(noSettlPartyIDs_2_1_2);
    }
    msg.addGroup(noDlvyInst_0_2);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_8;
  FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_8("USD");
  msg.set(BenchmarkCurveCurrency_8);
  SpreadOrBenchmarkCurveData_8.insert(BenchmarkCurveCurrency_8.getString());
  FIX::BenchmarkCurveName BenchmarkCurveName_8("STRING_OTHER");
  msg.set(BenchmarkCurveName_8);
  SpreadOrBenchmarkCurveData_8.insert(BenchmarkCurveName_8.getString());
  FIX::BenchmarkCurvePoint BenchmarkCurvePoint_8("STRING_365175569");
  msg.set(BenchmarkCurvePoint_8);
  SpreadOrBenchmarkCurveData_8.insert(BenchmarkCurvePoint_8.getString());
  FIX::BenchmarkPrice BenchmarkPrice_8;
  BenchmarkPrice_8.setString("16546684");
  msg.set(BenchmarkPrice_8);
  SpreadOrBenchmarkCurveData_8.insert(BenchmarkPrice_8.getString());
  FIX::BenchmarkPriceType BenchmarkPriceType_8(1602413808);
  msg.set(BenchmarkPriceType_8);
  SpreadOrBenchmarkCurveData_8.insert(BenchmarkPriceType_8.getString());
  FIX::BenchmarkSecurityID BenchmarkSecurityID_8("STRING_2010057064");
  msg.set(BenchmarkSecurityID_8);
  SpreadOrBenchmarkCurveData_8.insert(BenchmarkSecurityID_8.getString());
  FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_8("STRING_1607768835");
  msg.set(BenchmarkSecurityIDSource_8);
  SpreadOrBenchmarkCurveData_8.insert(BenchmarkSecurityIDSource_8.getString());
  FIX::Spread Spread_8;
  Spread_8.setString("20616429");
  msg.set(Spread_8);
  SpreadOrBenchmarkCurveData_8.insert(Spread_8.getString());
  all_values.push_back(SpreadOrBenchmarkCurveData_8);

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::Confirmation::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_16;
    FIX::StipulationType StipulationType_16("STRING_COUPON");
    noStipulations_0_0.set(StipulationType_16);
    Stipulations_NoStipulations_16.insert(StipulationType_16.getString());
    FIX::StipulationValue StipulationValue_16("STRING_362440949");
    noStipulations_0_0.set(StipulationValue_16);
    Stipulations_NoStipulations_16.insert(StipulationValue_16.getString());
    all_values.push_back(Stipulations_NoStipulations_16);

    msg.addGroup(noStipulations_0_0);
  }
  // TrdRegTimestamps
  // Group TrdRegTimestamps.NoTrdRegTimestamps
  {
    FIX50SP2::Confirmation::NoTrdRegTimestamps noTrdRegTimestamps_0_0;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_9;
    FIX::DeskOrderHandlingInst DeskOrderHandlingInst_9("MULTIPLESTRINGVALUE_MAO");
    noTrdRegTimestamps_0_0.set(DeskOrderHandlingInst_9);
    TrdRegTimestamps_NoTrdRegTimestamps_9.insert(DeskOrderHandlingInst_9.getString());
    FIX::DeskType DeskType_9("STRING_PR");
    noTrdRegTimestamps_0_0.set(DeskType_9);
    TrdRegTimestamps_NoTrdRegTimestamps_9.insert(DeskType_9.getString());
    FIX::DeskTypeSource DeskTypeSource_9(1);
    noTrdRegTimestamps_0_0.set(DeskTypeSource_9);
    TrdRegTimestamps_NoTrdRegTimestamps_9.insert(DeskTypeSource_9.getString());
    FIX::TrdRegTimestamp TrdRegTimestamp_9(FIX::UTCTIMESTAMP(6, 58, 57, 13, 72001));
    noTrdRegTimestamps_0_0.set(TrdRegTimestamp_9);
    TrdRegTimestamps_NoTrdRegTimestamps_9.insert(TrdRegTimestamp_9.getString());
    FIX::TrdRegTimestampOrigin TrdRegTimestampOrigin_9("STRING_1972832439");
    noTrdRegTimestamps_0_0.set(TrdRegTimestampOrigin_9);
    TrdRegTimestamps_NoTrdRegTimestamps_9.insert(TrdRegTimestampOrigin_9.getString());
    FIX::TrdRegTimestampType TrdRegTimestampType_9(2);
    noTrdRegTimestamps_0_0.set(TrdRegTimestampType_9);
    TrdRegTimestamps_NoTrdRegTimestamps_9.insert(TrdRegTimestampType_9.getString());
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_9);

    msg.addGroup(noTrdRegTimestamps_0_0);
  }
  {
    FIX50SP2::Confirmation::NoTrdRegTimestamps noTrdRegTimestamps_0_1;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_10;
    FIX::DeskOrderHandlingInst DeskOrderHandlingInst_10("MULTIPLESTRINGVALUE_CNH");
    noTrdRegTimestamps_0_1.set(DeskOrderHandlingInst_10);
    TrdRegTimestamps_NoTrdRegTimestamps_10.insert(DeskOrderHandlingInst_10.getString());
    FIX::DeskType DeskType_10("STRING_PF");
    noTrdRegTimestamps_0_1.set(DeskType_10);
    TrdRegTimestamps_NoTrdRegTimestamps_10.insert(DeskType_10.getString());
    FIX::DeskTypeSource DeskTypeSource_10(1);
    noTrdRegTimestamps_0_1.set(DeskTypeSource_10);
    TrdRegTimestamps_NoTrdRegTimestamps_10.insert(DeskTypeSource_10.getString());
    FIX::TrdRegTimestamp TrdRegTimestamp_10(FIX::UTCTIMESTAMP(21, 15, 42, 7, 112006));
    noTrdRegTimestamps_0_1.set(TrdRegTimestamp_10);
    TrdRegTimestamps_NoTrdRegTimestamps_10.insert(TrdRegTimestamp_10.getString());
    FIX::TrdRegTimestampOrigin TrdRegTimestampOrigin_10("STRING_77415841");
    noTrdRegTimestamps_0_1.set(TrdRegTimestampOrigin_10);
    TrdRegTimestamps_NoTrdRegTimestamps_10.insert(TrdRegTimestampOrigin_10.getString());
    FIX::TrdRegTimestampType TrdRegTimestampType_10(6);
    noTrdRegTimestamps_0_1.set(TrdRegTimestampType_10);
    TrdRegTimestamps_NoTrdRegTimestamps_10.insert(TrdRegTimestampType_10.getString());
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_10);

    msg.addGroup(noTrdRegTimestamps_0_1);
  }
  {
    FIX50SP2::Confirmation::NoTrdRegTimestamps noTrdRegTimestamps_0_2;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_11;
    FIX::DeskOrderHandlingInst DeskOrderHandlingInst_11("MULTIPLESTRINGVALUE_SCL");
    noTrdRegTimestamps_0_2.set(DeskOrderHandlingInst_11);
    TrdRegTimestamps_NoTrdRegTimestamps_11.insert(DeskOrderHandlingInst_11.getString());
    FIX::DeskType DeskType_11("STRING_T");
    noTrdRegTimestamps_0_2.set(DeskType_11);
    TrdRegTimestamps_NoTrdRegTimestamps_11.insert(DeskType_11.getString());
    FIX::DeskTypeSource DeskTypeSource_11(1);
    noTrdRegTimestamps_0_2.set(DeskTypeSource_11);
    TrdRegTimestamps_NoTrdRegTimestamps_11.insert(DeskTypeSource_11.getString());
    FIX::TrdRegTimestamp TrdRegTimestamp_11(FIX::UTCTIMESTAMP(8, 42, 24, 22, 62012));
    noTrdRegTimestamps_0_2.set(TrdRegTimestamp_11);
    TrdRegTimestamps_NoTrdRegTimestamps_11.insert(TrdRegTimestamp_11.getString());
    FIX::TrdRegTimestampOrigin TrdRegTimestampOrigin_11("STRING_49082342");
    noTrdRegTimestamps_0_2.set(TrdRegTimestampOrigin_11);
    TrdRegTimestamps_NoTrdRegTimestamps_11.insert(TrdRegTimestampOrigin_11.getString());
    FIX::TrdRegTimestampType TrdRegTimestampType_11(2);
    noTrdRegTimestamps_0_2.set(TrdRegTimestampType_11);
    TrdRegTimestamps_NoTrdRegTimestamps_11.insert(TrdRegTimestampType_11.getString());
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_11);

    msg.addGroup(noTrdRegTimestamps_0_2);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::Confirmation::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_17;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_17("DATA_1436083260");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_17);
    UnderlyingInstrument_17.insert(EncodedUnderlyingIssuer_17.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_17(1042040657);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_17);
    UnderlyingInstrument_17.insert(EncodedUnderlyingIssuerLen_17.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_17("DATA_2134305446");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_17);
    UnderlyingInstrument_17.insert(EncodedUnderlyingSecurityDesc_17.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_17(767402879);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_17);
    UnderlyingInstrument_17.insert(EncodedUnderlyingSecurityDescLen_17.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_17;
    UnderlyingAdjustedQuantity_17.setString("8673894");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_17);
    UnderlyingInstrument_17.insert(UnderlyingAdjustedQuantity_17.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_17;
    UnderlyingAllocationPercent_17.setString("27.960000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_17);
    UnderlyingInstrument_17.insert(UnderlyingAllocationPercent_17.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_17;
    UnderlyingAttachmentPoint_17.setString("30.890000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_17);
    UnderlyingInstrument_17.insert(UnderlyingAttachmentPoint_17.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_17("STRING_1164365640");
    noUnderlyings_0_0.set(UnderlyingCFICode_17);
    UnderlyingInstrument_17.insert(UnderlyingCFICode_17.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_17("STRING_1816970016");
    noUnderlyings_0_0.set(UnderlyingCPProgram_17);
    UnderlyingInstrument_17.insert(UnderlyingCPProgram_17.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_17("STRING_615610589");
    noUnderlyings_0_0.set(UnderlyingCPRegType_17);
    UnderlyingInstrument_17.insert(UnderlyingCPRegType_17.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_17;
    UnderlyingCapValue_17.setString("826371");
    noUnderlyings_0_0.set(UnderlyingCapValue_17);
    UnderlyingInstrument_17.insert(UnderlyingCapValue_17.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_17;
    UnderlyingCashAmount_17.setString("4107649");
    noUnderlyings_0_0.set(UnderlyingCashAmount_17);
    UnderlyingInstrument_17.insert(UnderlyingCashAmount_17.getString());
    FIX::UnderlyingCashType UnderlyingCashType_17("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_17);
    UnderlyingInstrument_17.insert(UnderlyingCashType_17.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_17;
    UnderlyingContractMultiplier_17.setString("6528682");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_17);
    UnderlyingInstrument_17.insert(UnderlyingContractMultiplier_17.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_17(2014388454);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_17);
    UnderlyingInstrument_17.insert(UnderlyingContractMultiplierUnit_17.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_17("COUNTRY_147534068");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_17);
    UnderlyingInstrument_17.insert(UnderlyingCountryOfIssue_17.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_17("LOCALMKTDATE_730284105");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_17);
    UnderlyingInstrument_17.insert(UnderlyingCouponPaymentDate_17.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_17;
    UnderlyingCouponRate_17.setString("85.170000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_17);
    UnderlyingInstrument_17.insert(UnderlyingCouponRate_17.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_17("STRING_2106140656");
    noUnderlyings_0_0.set(UnderlyingCreditRating_17);
    UnderlyingInstrument_17.insert(UnderlyingCreditRating_17.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_17("GBP");
    noUnderlyings_0_0.set(UnderlyingCurrency_17);
    UnderlyingInstrument_17.insert(UnderlyingCurrency_17.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_17;
    UnderlyingCurrentValue_17.setString("4016900");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_17);
    UnderlyingInstrument_17.insert(UnderlyingCurrentValue_17.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_17;
    UnderlyingDetachmentPoint_17.setString("14.450000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_17);
    UnderlyingInstrument_17.insert(UnderlyingDetachmentPoint_17.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_17;
    UnderlyingDirtyPrice_17.setString("10858418");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_17);
    UnderlyingInstrument_17.insert(UnderlyingDirtyPrice_17.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_17;
    UnderlyingEndPrice_17.setString("14206648");
    noUnderlyings_0_0.set(UnderlyingEndPrice_17);
    UnderlyingInstrument_17.insert(UnderlyingEndPrice_17.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_17;
    UnderlyingEndValue_17.setString("11053853");
    noUnderlyings_0_0.set(UnderlyingEndValue_17);
    UnderlyingInstrument_17.insert(UnderlyingEndValue_17.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_17(1390249794);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_17);
    UnderlyingInstrument_17.insert(UnderlyingExerciseStyle_17.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_17;
    UnderlyingFXRate_17.setString("13421122");
    noUnderlyings_0_0.set(UnderlyingFXRate_17);
    UnderlyingInstrument_17.insert(UnderlyingFXRate_17.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_17('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_17);
    UnderlyingInstrument_17.insert(UnderlyingFXRateCalc_17.getString());
    FIX::UnderlyingFactor UnderlyingFactor_17;
    UnderlyingFactor_17.setString("16672115");
    noUnderlyings_0_0.set(UnderlyingFactor_17);
    UnderlyingInstrument_17.insert(UnderlyingFactor_17.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_17(134714011);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_17);
    UnderlyingInstrument_17.insert(UnderlyingFlowScheduleType_17.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_17("STRING_443067258");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_17);
    UnderlyingInstrument_17.insert(UnderlyingInstrRegistry_17.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_17("LOCALMKTDATE_561768559");
    noUnderlyings_0_0.set(UnderlyingIssueDate_17);
    UnderlyingInstrument_17.insert(UnderlyingIssueDate_17.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_17("STRING_121535809");
    noUnderlyings_0_0.set(UnderlyingIssuer_17);
    UnderlyingInstrument_17.insert(UnderlyingIssuer_17.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_17("STRING_1210470137");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_17);
    UnderlyingInstrument_17.insert(UnderlyingLocaleOfIssue_17.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_17("LOCALMKTDATE_1429158008");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_17);
    UnderlyingInstrument_17.insert(UnderlyingMaturityDate_17.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_17("MONTHYEAR_489728605");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_17);
    UnderlyingInstrument_17.insert(UnderlyingMaturityMonthYear_17.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_17("TZTIMEONLY_1163999579");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_17);
    UnderlyingInstrument_17.insert(UnderlyingMaturityTime_17.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_17;
    UnderlyingNotionalPercentageOutstanding_17.setString("0.000000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_17);
    UnderlyingInstrument_17.insert(UnderlyingNotionalPercentageOutstanding_17.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_17('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_17);
    UnderlyingInstrument_17.insert(UnderlyingOptAttribute_17.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_17;
    UnderlyingOriginalNotionalPercentageOutstanding_17.setString("1.680000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_17);
    UnderlyingInstrument_17.insert(UnderlyingOriginalNotionalPercentageOutstanding_17.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_17("STRING_528677197");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_17);
    UnderlyingInstrument_17.insert(UnderlyingPriceUnitOfMeasure_17.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_17;
    UnderlyingPriceUnitOfMeasureQty_17.setString("5699798");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_17);
    UnderlyingInstrument_17.insert(UnderlyingPriceUnitOfMeasureQty_17.getString());
    FIX::UnderlyingProduct UnderlyingProduct_17(1978594712);
    noUnderlyings_0_0.set(UnderlyingProduct_17);
    UnderlyingInstrument_17.insert(UnderlyingProduct_17.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_17(1181545461);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_17);
    UnderlyingInstrument_17.insert(UnderlyingPutOrCall_17.getString());
    FIX::UnderlyingPx UnderlyingPx_17;
    UnderlyingPx_17.setString("4368846");
    noUnderlyings_0_0.set(UnderlyingPx_17);
    UnderlyingInstrument_17.insert(UnderlyingPx_17.getString());
    FIX::UnderlyingQty UnderlyingQty_17;
    UnderlyingQty_17.setString("21261287");
    noUnderlyings_0_0.set(UnderlyingQty_17);
    UnderlyingInstrument_17.insert(UnderlyingQty_17.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_17("LOCALMKTDATE_1911829566");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_17);
    UnderlyingInstrument_17.insert(UnderlyingRedemptionDate_17.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_17("STRING_1362343202");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_17);
    UnderlyingInstrument_17.insert(UnderlyingRepoCollateralSecurityType_17.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_17;
    UnderlyingRepurchaseRate_17.setString("57.890000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_17);
    UnderlyingInstrument_17.insert(UnderlyingRepurchaseRate_17.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_17(32331051);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_17);
    UnderlyingInstrument_17.insert(UnderlyingRepurchaseTerm_17.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_17("STRING_1113031064");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_17);
    UnderlyingInstrument_17.insert(UnderlyingRestructuringType_17.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_17("STRING_338992226");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_17);
    UnderlyingInstrument_17.insert(UnderlyingSecurityDesc_17.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_17("EXCHANGE_1534512496");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_17);
    UnderlyingInstrument_17.insert(UnderlyingSecurityExchange_17.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_17("STRING_51389221");
    noUnderlyings_0_0.set(UnderlyingSecurityID_17);
    UnderlyingInstrument_17.insert(UnderlyingSecurityID_17.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_17("STRING_1759657115");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_17);
    UnderlyingInstrument_17.insert(UnderlyingSecurityIDSource_17.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_17("STRING_492414152");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_17);
    UnderlyingInstrument_17.insert(UnderlyingSecuritySubType_17.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_17("STRING_1441639015");
    noUnderlyings_0_0.set(UnderlyingSecurityType_17);
    UnderlyingInstrument_17.insert(UnderlyingSecurityType_17.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_17("STRING_954285682");
    noUnderlyings_0_0.set(UnderlyingSeniority_17);
    UnderlyingInstrument_17.insert(UnderlyingSeniority_17.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_17("STRING_1646881798");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_17);
    UnderlyingInstrument_17.insert(UnderlyingSettlMethod_17.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_17(2);
    noUnderlyings_0_0.set(UnderlyingSettlementType_17);
    UnderlyingInstrument_17.insert(UnderlyingSettlementType_17.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_17;
    UnderlyingStartValue_17.setString("10889996");
    noUnderlyings_0_0.set(UnderlyingStartValue_17);
    UnderlyingInstrument_17.insert(UnderlyingStartValue_17.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_17("STRING_2089949056");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_17);
    UnderlyingInstrument_17.insert(UnderlyingStateOrProvinceOfIssue_17.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_17("USD");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_17);
    UnderlyingInstrument_17.insert(UnderlyingStrikeCurrency_17.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_17;
    UnderlyingStrikePrice_17.setString("11529355");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_17);
    UnderlyingInstrument_17.insert(UnderlyingStrikePrice_17.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_17("STRING_804809837");
    noUnderlyings_0_0.set(UnderlyingSymbol_17);
    UnderlyingInstrument_17.insert(UnderlyingSymbol_17.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_17("STRING_1700264107");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_17);
    UnderlyingInstrument_17.insert(UnderlyingSymbolSfx_17.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_17("STRING_169451476");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_17);
    UnderlyingInstrument_17.insert(UnderlyingTimeUnit_17.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_17("STRING_1250849837");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_17);
    UnderlyingInstrument_17.insert(UnderlyingUnitOfMeasure_17.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_17;
    UnderlyingUnitOfMeasureQty_17.setString("18594790");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_17);
    UnderlyingInstrument_17.insert(UnderlyingUnitOfMeasureQty_17.getString());
    all_values.push_back(UnderlyingInstrument_17);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::Confirmation::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_30;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_30("STRING_1779527035");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_30);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_30.insert(UnderlyingSecurityAltID_30.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_30("STRING_281975311");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_30);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_30.insert(UnderlyingSecurityAltIDSource_30.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_30);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::Confirmation::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_30;
      FIX::UnderlyingStipType UnderlyingStipType_30("STRING_813588848");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_30);
      UnderlyingStipulations_NoUnderlyingStips_30.insert(UnderlyingStipType_30.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_30("STRING_718859996");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_30);
      UnderlyingStipulations_NoUnderlyingStips_30.insert(UnderlyingStipValue_30.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_30);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::Confirmation::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_31;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_31("STRING_577934767");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_31);
      UndlyInstrumentParties_NoUndlyInstrumentParties_31.insert(UnderlyingInstrumentPartyID_31.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_31('2');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_31);
      UndlyInstrumentParties_NoUndlyInstrumentParties_31.insert(UnderlyingInstrumentPartyIDSource_31.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_31(1696119983);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_31);
      UndlyInstrumentParties_NoUndlyInstrumentParties_31.insert(UnderlyingInstrumentPartyRole_31.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_31);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Confirmation::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_58;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_58("STRING_1046750614");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_58);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_58.insert(UnderlyingInstrumentPartySubID_58.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_58(2035112209);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_58);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_58.insert(UnderlyingInstrumentPartySubIDType_58.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_58);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::Confirmation::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_59;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_59("STRING_2144778315");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_59);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_59.insert(UnderlyingInstrumentPartySubID_59.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_59(1098139835);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_59);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_59.insert(UnderlyingInstrumentPartySubIDType_59.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_59);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::Confirmation::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_18;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_18("DATA_1647285676");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_18);
    UnderlyingInstrument_18.insert(EncodedUnderlyingIssuer_18.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_18(489708819);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_18);
    UnderlyingInstrument_18.insert(EncodedUnderlyingIssuerLen_18.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_18("DATA_392295202");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_18);
    UnderlyingInstrument_18.insert(EncodedUnderlyingSecurityDesc_18.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_18(454087710);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_18);
    UnderlyingInstrument_18.insert(EncodedUnderlyingSecurityDescLen_18.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_18;
    UnderlyingAdjustedQuantity_18.setString("21365906");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_18);
    UnderlyingInstrument_18.insert(UnderlyingAdjustedQuantity_18.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_18;
    UnderlyingAllocationPercent_18.setString("21.190000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_18);
    UnderlyingInstrument_18.insert(UnderlyingAllocationPercent_18.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_18;
    UnderlyingAttachmentPoint_18.setString("74.030000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_18);
    UnderlyingInstrument_18.insert(UnderlyingAttachmentPoint_18.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_18("STRING_2079056025");
    noUnderlyings_0_1.set(UnderlyingCFICode_18);
    UnderlyingInstrument_18.insert(UnderlyingCFICode_18.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_18("STRING_729313948");
    noUnderlyings_0_1.set(UnderlyingCPProgram_18);
    UnderlyingInstrument_18.insert(UnderlyingCPProgram_18.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_18("STRING_606139257");
    noUnderlyings_0_1.set(UnderlyingCPRegType_18);
    UnderlyingInstrument_18.insert(UnderlyingCPRegType_18.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_18;
    UnderlyingCapValue_18.setString("10845079");
    noUnderlyings_0_1.set(UnderlyingCapValue_18);
    UnderlyingInstrument_18.insert(UnderlyingCapValue_18.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_18;
    UnderlyingCashAmount_18.setString("15341237");
    noUnderlyings_0_1.set(UnderlyingCashAmount_18);
    UnderlyingInstrument_18.insert(UnderlyingCashAmount_18.getString());
    FIX::UnderlyingCashType UnderlyingCashType_18("STRING_FIXED");
    noUnderlyings_0_1.set(UnderlyingCashType_18);
    UnderlyingInstrument_18.insert(UnderlyingCashType_18.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_18;
    UnderlyingContractMultiplier_18.setString("12539593");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_18);
    UnderlyingInstrument_18.insert(UnderlyingContractMultiplier_18.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_18(637489974);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_18);
    UnderlyingInstrument_18.insert(UnderlyingContractMultiplierUnit_18.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_18("COUNTRY_2018398798");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_18);
    UnderlyingInstrument_18.insert(UnderlyingCountryOfIssue_18.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_18("LOCALMKTDATE_1055537396");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_18);
    UnderlyingInstrument_18.insert(UnderlyingCouponPaymentDate_18.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_18;
    UnderlyingCouponRate_18.setString("33.610000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_18);
    UnderlyingInstrument_18.insert(UnderlyingCouponRate_18.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_18("STRING_152890461");
    noUnderlyings_0_1.set(UnderlyingCreditRating_18);
    UnderlyingInstrument_18.insert(UnderlyingCreditRating_18.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_18("GBP");
    noUnderlyings_0_1.set(UnderlyingCurrency_18);
    UnderlyingInstrument_18.insert(UnderlyingCurrency_18.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_18;
    UnderlyingCurrentValue_18.setString("8717504");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_18);
    UnderlyingInstrument_18.insert(UnderlyingCurrentValue_18.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_18;
    UnderlyingDetachmentPoint_18.setString("6.510000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_18);
    UnderlyingInstrument_18.insert(UnderlyingDetachmentPoint_18.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_18;
    UnderlyingDirtyPrice_18.setString("16610569");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_18);
    UnderlyingInstrument_18.insert(UnderlyingDirtyPrice_18.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_18;
    UnderlyingEndPrice_18.setString("8054700");
    noUnderlyings_0_1.set(UnderlyingEndPrice_18);
    UnderlyingInstrument_18.insert(UnderlyingEndPrice_18.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_18;
    UnderlyingEndValue_18.setString("19956806");
    noUnderlyings_0_1.set(UnderlyingEndValue_18);
    UnderlyingInstrument_18.insert(UnderlyingEndValue_18.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_18(123839147);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_18);
    UnderlyingInstrument_18.insert(UnderlyingExerciseStyle_18.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_18;
    UnderlyingFXRate_18.setString("18522206");
    noUnderlyings_0_1.set(UnderlyingFXRate_18);
    UnderlyingInstrument_18.insert(UnderlyingFXRate_18.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_18('M');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_18);
    UnderlyingInstrument_18.insert(UnderlyingFXRateCalc_18.getString());
    FIX::UnderlyingFactor UnderlyingFactor_18;
    UnderlyingFactor_18.setString("1211338");
    noUnderlyings_0_1.set(UnderlyingFactor_18);
    UnderlyingInstrument_18.insert(UnderlyingFactor_18.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_18(802876809);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_18);
    UnderlyingInstrument_18.insert(UnderlyingFlowScheduleType_18.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_18("STRING_1383111223");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_18);
    UnderlyingInstrument_18.insert(UnderlyingInstrRegistry_18.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_18("LOCALMKTDATE_610842633");
    noUnderlyings_0_1.set(UnderlyingIssueDate_18);
    UnderlyingInstrument_18.insert(UnderlyingIssueDate_18.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_18("STRING_1195172012");
    noUnderlyings_0_1.set(UnderlyingIssuer_18);
    UnderlyingInstrument_18.insert(UnderlyingIssuer_18.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_18("STRING_1837198933");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_18);
    UnderlyingInstrument_18.insert(UnderlyingLocaleOfIssue_18.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_18("LOCALMKTDATE_599949602");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_18);
    UnderlyingInstrument_18.insert(UnderlyingMaturityDate_18.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_18("MONTHYEAR_401350483");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_18);
    UnderlyingInstrument_18.insert(UnderlyingMaturityMonthYear_18.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_18("TZTIMEONLY_1232802688");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_18);
    UnderlyingInstrument_18.insert(UnderlyingMaturityTime_18.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_18;
    UnderlyingNotionalPercentageOutstanding_18.setString("19.790000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_18);
    UnderlyingInstrument_18.insert(UnderlyingNotionalPercentageOutstanding_18.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_18('1');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_18);
    UnderlyingInstrument_18.insert(UnderlyingOptAttribute_18.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_18;
    UnderlyingOriginalNotionalPercentageOutstanding_18.setString("19.450000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_18);
    UnderlyingInstrument_18.insert(UnderlyingOriginalNotionalPercentageOutstanding_18.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_18("STRING_1616029902");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_18);
    UnderlyingInstrument_18.insert(UnderlyingPriceUnitOfMeasure_18.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_18;
    UnderlyingPriceUnitOfMeasureQty_18.setString("5173045");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_18);
    UnderlyingInstrument_18.insert(UnderlyingPriceUnitOfMeasureQty_18.getString());
    FIX::UnderlyingProduct UnderlyingProduct_18(1997861662);
    noUnderlyings_0_1.set(UnderlyingProduct_18);
    UnderlyingInstrument_18.insert(UnderlyingProduct_18.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_18(722505653);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_18);
    UnderlyingInstrument_18.insert(UnderlyingPutOrCall_18.getString());
    FIX::UnderlyingPx UnderlyingPx_18;
    UnderlyingPx_18.setString("11547945");
    noUnderlyings_0_1.set(UnderlyingPx_18);
    UnderlyingInstrument_18.insert(UnderlyingPx_18.getString());
    FIX::UnderlyingQty UnderlyingQty_18;
    UnderlyingQty_18.setString("18687768");
    noUnderlyings_0_1.set(UnderlyingQty_18);
    UnderlyingInstrument_18.insert(UnderlyingQty_18.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_18("LOCALMKTDATE_1778043049");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_18);
    UnderlyingInstrument_18.insert(UnderlyingRedemptionDate_18.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_18("STRING_1424327904");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_18);
    UnderlyingInstrument_18.insert(UnderlyingRepoCollateralSecurityType_18.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_18;
    UnderlyingRepurchaseRate_18.setString("72.730000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_18);
    UnderlyingInstrument_18.insert(UnderlyingRepurchaseRate_18.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_18(318785858);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_18);
    UnderlyingInstrument_18.insert(UnderlyingRepurchaseTerm_18.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_18("STRING_359966466");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_18);
    UnderlyingInstrument_18.insert(UnderlyingRestructuringType_18.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_18("STRING_745934083");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_18);
    UnderlyingInstrument_18.insert(UnderlyingSecurityDesc_18.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_18("EXCHANGE_618346510");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_18);
    UnderlyingInstrument_18.insert(UnderlyingSecurityExchange_18.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_18("STRING_2021023443");
    noUnderlyings_0_1.set(UnderlyingSecurityID_18);
    UnderlyingInstrument_18.insert(UnderlyingSecurityID_18.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_18("STRING_1551404090");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_18);
    UnderlyingInstrument_18.insert(UnderlyingSecurityIDSource_18.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_18("STRING_466543496");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_18);
    UnderlyingInstrument_18.insert(UnderlyingSecuritySubType_18.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_18("STRING_2144862591");
    noUnderlyings_0_1.set(UnderlyingSecurityType_18);
    UnderlyingInstrument_18.insert(UnderlyingSecurityType_18.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_18("STRING_1256141064");
    noUnderlyings_0_1.set(UnderlyingSeniority_18);
    UnderlyingInstrument_18.insert(UnderlyingSeniority_18.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_18("STRING_202369044");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_18);
    UnderlyingInstrument_18.insert(UnderlyingSettlMethod_18.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_18(4);
    noUnderlyings_0_1.set(UnderlyingSettlementType_18);
    UnderlyingInstrument_18.insert(UnderlyingSettlementType_18.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_18;
    UnderlyingStartValue_18.setString("20590178");
    noUnderlyings_0_1.set(UnderlyingStartValue_18);
    UnderlyingInstrument_18.insert(UnderlyingStartValue_18.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_18("STRING_1585480267");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_18);
    UnderlyingInstrument_18.insert(UnderlyingStateOrProvinceOfIssue_18.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_18("JPY");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_18);
    UnderlyingInstrument_18.insert(UnderlyingStrikeCurrency_18.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_18;
    UnderlyingStrikePrice_18.setString("12751955");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_18);
    UnderlyingInstrument_18.insert(UnderlyingStrikePrice_18.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_18("STRING_1329304993");
    noUnderlyings_0_1.set(UnderlyingSymbol_18);
    UnderlyingInstrument_18.insert(UnderlyingSymbol_18.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_18("STRING_1508056721");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_18);
    UnderlyingInstrument_18.insert(UnderlyingSymbolSfx_18.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_18("STRING_360514593");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_18);
    UnderlyingInstrument_18.insert(UnderlyingTimeUnit_18.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_18("STRING_1860826973");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_18);
    UnderlyingInstrument_18.insert(UnderlyingUnitOfMeasure_18.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_18;
    UnderlyingUnitOfMeasureQty_18.setString("4912375");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_18);
    UnderlyingInstrument_18.insert(UnderlyingUnitOfMeasureQty_18.getString());
    all_values.push_back(UnderlyingInstrument_18);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::Confirmation::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_31;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_31("STRING_1329373227");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_31);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_31.insert(UnderlyingSecurityAltID_31.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_31("STRING_1008542073");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_31);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_31.insert(UnderlyingSecurityAltIDSource_31.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_31);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::Confirmation::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_31;
      FIX::UnderlyingStipType UnderlyingStipType_31("STRING_2051878880");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_31);
      UnderlyingStipulations_NoUnderlyingStips_31.insert(UnderlyingStipType_31.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_31("STRING_15852968");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_31);
      UnderlyingStipulations_NoUnderlyingStips_31.insert(UnderlyingStipValue_31.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_31);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::Confirmation::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_32;
      FIX::UnderlyingStipType UnderlyingStipType_32("STRING_1771127717");
      noUnderlyingStips_1_1_1.set(UnderlyingStipType_32);
      UnderlyingStipulations_NoUnderlyingStips_32.insert(UnderlyingStipType_32.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_32("STRING_1682438281");
      noUnderlyingStips_1_1_1.set(UnderlyingStipValue_32);
      UnderlyingStipulations_NoUnderlyingStips_32.insert(UnderlyingStipValue_32.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_32);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::Confirmation::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_32;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_32("STRING_1645311342");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_32);
      UndlyInstrumentParties_NoUndlyInstrumentParties_32.insert(UnderlyingInstrumentPartyID_32.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_32('2');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_32);
      UndlyInstrumentParties_NoUndlyInstrumentParties_32.insert(UnderlyingInstrumentPartyIDSource_32.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_32(1800147339);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_32);
      UndlyInstrumentParties_NoUndlyInstrumentParties_32.insert(UnderlyingInstrumentPartyRole_32.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_32);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Confirmation::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_60;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_60("STRING_472087001");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_60);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_60.insert(UnderlyingInstrumentPartySubID_60.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_60(1673687135);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_60);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_60.insert(UnderlyingInstrumentPartySubIDType_60.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_60);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::Confirmation::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_61;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_61("STRING_1795165868");
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubID_61);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_61.insert(UnderlyingInstrumentPartySubID_61.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_61(938630498);
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubIDType_61);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_61.insert(UnderlyingInstrumentPartySubIDType_61.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_61);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::Confirmation::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_62;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_62("STRING_1671066078");
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubID_62);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_62.insert(UnderlyingInstrumentPartySubID_62.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_62(903823284);
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubIDType_62);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_62.insert(UnderlyingInstrumentPartySubIDType_62.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_62);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  {
    FIX50SP2::Confirmation::NoUnderlyings noUnderlyings_0_2;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_19;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_19("DATA_1140999542");
    noUnderlyings_0_2.set(EncodedUnderlyingIssuer_19);
    UnderlyingInstrument_19.insert(EncodedUnderlyingIssuer_19.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_19(1789578835);
    noUnderlyings_0_2.set(EncodedUnderlyingIssuerLen_19);
    UnderlyingInstrument_19.insert(EncodedUnderlyingIssuerLen_19.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_19("DATA_815357510");
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDesc_19);
    UnderlyingInstrument_19.insert(EncodedUnderlyingSecurityDesc_19.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_19(578996161);
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDescLen_19);
    UnderlyingInstrument_19.insert(EncodedUnderlyingSecurityDescLen_19.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_19;
    UnderlyingAdjustedQuantity_19.setString("3714505");
    noUnderlyings_0_2.set(UnderlyingAdjustedQuantity_19);
    UnderlyingInstrument_19.insert(UnderlyingAdjustedQuantity_19.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_19;
    UnderlyingAllocationPercent_19.setString("37.480000");
    noUnderlyings_0_2.set(UnderlyingAllocationPercent_19);
    UnderlyingInstrument_19.insert(UnderlyingAllocationPercent_19.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_19;
    UnderlyingAttachmentPoint_19.setString("17.140000");
    noUnderlyings_0_2.set(UnderlyingAttachmentPoint_19);
    UnderlyingInstrument_19.insert(UnderlyingAttachmentPoint_19.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_19("STRING_1700755572");
    noUnderlyings_0_2.set(UnderlyingCFICode_19);
    UnderlyingInstrument_19.insert(UnderlyingCFICode_19.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_19("STRING_1282636822");
    noUnderlyings_0_2.set(UnderlyingCPProgram_19);
    UnderlyingInstrument_19.insert(UnderlyingCPProgram_19.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_19("STRING_67222660");
    noUnderlyings_0_2.set(UnderlyingCPRegType_19);
    UnderlyingInstrument_19.insert(UnderlyingCPRegType_19.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_19;
    UnderlyingCapValue_19.setString("14140988");
    noUnderlyings_0_2.set(UnderlyingCapValue_19);
    UnderlyingInstrument_19.insert(UnderlyingCapValue_19.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_19;
    UnderlyingCashAmount_19.setString("17738743");
    noUnderlyings_0_2.set(UnderlyingCashAmount_19);
    UnderlyingInstrument_19.insert(UnderlyingCashAmount_19.getString());
    FIX::UnderlyingCashType UnderlyingCashType_19("STRING_DIFF");
    noUnderlyings_0_2.set(UnderlyingCashType_19);
    UnderlyingInstrument_19.insert(UnderlyingCashType_19.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_19;
    UnderlyingContractMultiplier_19.setString("5959884");
    noUnderlyings_0_2.set(UnderlyingContractMultiplier_19);
    UnderlyingInstrument_19.insert(UnderlyingContractMultiplier_19.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_19(634932752);
    noUnderlyings_0_2.set(UnderlyingContractMultiplierUnit_19);
    UnderlyingInstrument_19.insert(UnderlyingContractMultiplierUnit_19.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_19("COUNTRY_21546456");
    noUnderlyings_0_2.set(UnderlyingCountryOfIssue_19);
    UnderlyingInstrument_19.insert(UnderlyingCountryOfIssue_19.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_19("LOCALMKTDATE_500383708");
    noUnderlyings_0_2.set(UnderlyingCouponPaymentDate_19);
    UnderlyingInstrument_19.insert(UnderlyingCouponPaymentDate_19.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_19;
    UnderlyingCouponRate_19.setString("57.210000");
    noUnderlyings_0_2.set(UnderlyingCouponRate_19);
    UnderlyingInstrument_19.insert(UnderlyingCouponRate_19.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_19("STRING_1792674173");
    noUnderlyings_0_2.set(UnderlyingCreditRating_19);
    UnderlyingInstrument_19.insert(UnderlyingCreditRating_19.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_19("GBP");
    noUnderlyings_0_2.set(UnderlyingCurrency_19);
    UnderlyingInstrument_19.insert(UnderlyingCurrency_19.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_19;
    UnderlyingCurrentValue_19.setString("12905018");
    noUnderlyings_0_2.set(UnderlyingCurrentValue_19);
    UnderlyingInstrument_19.insert(UnderlyingCurrentValue_19.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_19;
    UnderlyingDetachmentPoint_19.setString("24.800000");
    noUnderlyings_0_2.set(UnderlyingDetachmentPoint_19);
    UnderlyingInstrument_19.insert(UnderlyingDetachmentPoint_19.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_19;
    UnderlyingDirtyPrice_19.setString("17436302");
    noUnderlyings_0_2.set(UnderlyingDirtyPrice_19);
    UnderlyingInstrument_19.insert(UnderlyingDirtyPrice_19.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_19;
    UnderlyingEndPrice_19.setString("15342636");
    noUnderlyings_0_2.set(UnderlyingEndPrice_19);
    UnderlyingInstrument_19.insert(UnderlyingEndPrice_19.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_19;
    UnderlyingEndValue_19.setString("3611658");
    noUnderlyings_0_2.set(UnderlyingEndValue_19);
    UnderlyingInstrument_19.insert(UnderlyingEndValue_19.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_19(1269833772);
    noUnderlyings_0_2.set(UnderlyingExerciseStyle_19);
    UnderlyingInstrument_19.insert(UnderlyingExerciseStyle_19.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_19;
    UnderlyingFXRate_19.setString("11819458");
    noUnderlyings_0_2.set(UnderlyingFXRate_19);
    UnderlyingInstrument_19.insert(UnderlyingFXRate_19.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_19('D');
    noUnderlyings_0_2.set(UnderlyingFXRateCalc_19);
    UnderlyingInstrument_19.insert(UnderlyingFXRateCalc_19.getString());
    FIX::UnderlyingFactor UnderlyingFactor_19;
    UnderlyingFactor_19.setString("7934162");
    noUnderlyings_0_2.set(UnderlyingFactor_19);
    UnderlyingInstrument_19.insert(UnderlyingFactor_19.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_19(2085769149);
    noUnderlyings_0_2.set(UnderlyingFlowScheduleType_19);
    UnderlyingInstrument_19.insert(UnderlyingFlowScheduleType_19.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_19("STRING_293312226");
    noUnderlyings_0_2.set(UnderlyingInstrRegistry_19);
    UnderlyingInstrument_19.insert(UnderlyingInstrRegistry_19.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_19("LOCALMKTDATE_435511390");
    noUnderlyings_0_2.set(UnderlyingIssueDate_19);
    UnderlyingInstrument_19.insert(UnderlyingIssueDate_19.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_19("STRING_753643012");
    noUnderlyings_0_2.set(UnderlyingIssuer_19);
    UnderlyingInstrument_19.insert(UnderlyingIssuer_19.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_19("STRING_872308387");
    noUnderlyings_0_2.set(UnderlyingLocaleOfIssue_19);
    UnderlyingInstrument_19.insert(UnderlyingLocaleOfIssue_19.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_19("LOCALMKTDATE_806961968");
    noUnderlyings_0_2.set(UnderlyingMaturityDate_19);
    UnderlyingInstrument_19.insert(UnderlyingMaturityDate_19.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_19("MONTHYEAR_528223112");
    noUnderlyings_0_2.set(UnderlyingMaturityMonthYear_19);
    UnderlyingInstrument_19.insert(UnderlyingMaturityMonthYear_19.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_19("TZTIMEONLY_579016454");
    noUnderlyings_0_2.set(UnderlyingMaturityTime_19);
    UnderlyingInstrument_19.insert(UnderlyingMaturityTime_19.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_19;
    UnderlyingNotionalPercentageOutstanding_19.setString("38.920000");
    noUnderlyings_0_2.set(UnderlyingNotionalPercentageOutstanding_19);
    UnderlyingInstrument_19.insert(UnderlyingNotionalPercentageOutstanding_19.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_19('1');
    noUnderlyings_0_2.set(UnderlyingOptAttribute_19);
    UnderlyingInstrument_19.insert(UnderlyingOptAttribute_19.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_19;
    UnderlyingOriginalNotionalPercentageOutstanding_19.setString("91.140000");
    noUnderlyings_0_2.set(UnderlyingOriginalNotionalPercentageOutstanding_19);
    UnderlyingInstrument_19.insert(UnderlyingOriginalNotionalPercentageOutstanding_19.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_19("STRING_1774332789");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasure_19);
    UnderlyingInstrument_19.insert(UnderlyingPriceUnitOfMeasure_19.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_19;
    UnderlyingPriceUnitOfMeasureQty_19.setString("14372506");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasureQty_19);
    UnderlyingInstrument_19.insert(UnderlyingPriceUnitOfMeasureQty_19.getString());
    FIX::UnderlyingProduct UnderlyingProduct_19(765434665);
    noUnderlyings_0_2.set(UnderlyingProduct_19);
    UnderlyingInstrument_19.insert(UnderlyingProduct_19.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_19(222837617);
    noUnderlyings_0_2.set(UnderlyingPutOrCall_19);
    UnderlyingInstrument_19.insert(UnderlyingPutOrCall_19.getString());
    FIX::UnderlyingPx UnderlyingPx_19;
    UnderlyingPx_19.setString("20721833");
    noUnderlyings_0_2.set(UnderlyingPx_19);
    UnderlyingInstrument_19.insert(UnderlyingPx_19.getString());
    FIX::UnderlyingQty UnderlyingQty_19;
    UnderlyingQty_19.setString("7869811");
    noUnderlyings_0_2.set(UnderlyingQty_19);
    UnderlyingInstrument_19.insert(UnderlyingQty_19.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_19("LOCALMKTDATE_723221325");
    noUnderlyings_0_2.set(UnderlyingRedemptionDate_19);
    UnderlyingInstrument_19.insert(UnderlyingRedemptionDate_19.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_19("STRING_575485439");
    noUnderlyings_0_2.set(UnderlyingRepoCollateralSecurityType_19);
    UnderlyingInstrument_19.insert(UnderlyingRepoCollateralSecurityType_19.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_19;
    UnderlyingRepurchaseRate_19.setString("16.460000");
    noUnderlyings_0_2.set(UnderlyingRepurchaseRate_19);
    UnderlyingInstrument_19.insert(UnderlyingRepurchaseRate_19.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_19(758559666);
    noUnderlyings_0_2.set(UnderlyingRepurchaseTerm_19);
    UnderlyingInstrument_19.insert(UnderlyingRepurchaseTerm_19.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_19("STRING_518968385");
    noUnderlyings_0_2.set(UnderlyingRestructuringType_19);
    UnderlyingInstrument_19.insert(UnderlyingRestructuringType_19.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_19("STRING_1722673513");
    noUnderlyings_0_2.set(UnderlyingSecurityDesc_19);
    UnderlyingInstrument_19.insert(UnderlyingSecurityDesc_19.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_19("EXCHANGE_647638499");
    noUnderlyings_0_2.set(UnderlyingSecurityExchange_19);
    UnderlyingInstrument_19.insert(UnderlyingSecurityExchange_19.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_19("STRING_115115022");
    noUnderlyings_0_2.set(UnderlyingSecurityID_19);
    UnderlyingInstrument_19.insert(UnderlyingSecurityID_19.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_19("STRING_1109453510");
    noUnderlyings_0_2.set(UnderlyingSecurityIDSource_19);
    UnderlyingInstrument_19.insert(UnderlyingSecurityIDSource_19.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_19("STRING_1008804333");
    noUnderlyings_0_2.set(UnderlyingSecuritySubType_19);
    UnderlyingInstrument_19.insert(UnderlyingSecuritySubType_19.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_19("STRING_1384948795");
    noUnderlyings_0_2.set(UnderlyingSecurityType_19);
    UnderlyingInstrument_19.insert(UnderlyingSecurityType_19.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_19("STRING_143915727");
    noUnderlyings_0_2.set(UnderlyingSeniority_19);
    UnderlyingInstrument_19.insert(UnderlyingSeniority_19.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_19("STRING_161117017");
    noUnderlyings_0_2.set(UnderlyingSettlMethod_19);
    UnderlyingInstrument_19.insert(UnderlyingSettlMethod_19.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_19(2);
    noUnderlyings_0_2.set(UnderlyingSettlementType_19);
    UnderlyingInstrument_19.insert(UnderlyingSettlementType_19.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_19;
    UnderlyingStartValue_19.setString("822012");
    noUnderlyings_0_2.set(UnderlyingStartValue_19);
    UnderlyingInstrument_19.insert(UnderlyingStartValue_19.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_19("STRING_454429243");
    noUnderlyings_0_2.set(UnderlyingStateOrProvinceOfIssue_19);
    UnderlyingInstrument_19.insert(UnderlyingStateOrProvinceOfIssue_19.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_19("CHF");
    noUnderlyings_0_2.set(UnderlyingStrikeCurrency_19);
    UnderlyingInstrument_19.insert(UnderlyingStrikeCurrency_19.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_19;
    UnderlyingStrikePrice_19.setString("13267376");
    noUnderlyings_0_2.set(UnderlyingStrikePrice_19);
    UnderlyingInstrument_19.insert(UnderlyingStrikePrice_19.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_19("STRING_1273354708");
    noUnderlyings_0_2.set(UnderlyingSymbol_19);
    UnderlyingInstrument_19.insert(UnderlyingSymbol_19.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_19("STRING_1364067353");
    noUnderlyings_0_2.set(UnderlyingSymbolSfx_19);
    UnderlyingInstrument_19.insert(UnderlyingSymbolSfx_19.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_19("STRING_1905754084");
    noUnderlyings_0_2.set(UnderlyingTimeUnit_19);
    UnderlyingInstrument_19.insert(UnderlyingTimeUnit_19.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_19("STRING_1633588600");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasure_19);
    UnderlyingInstrument_19.insert(UnderlyingUnitOfMeasure_19.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_19;
    UnderlyingUnitOfMeasureQty_19.setString("10274436");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasureQty_19);
    UnderlyingInstrument_19.insert(UnderlyingUnitOfMeasureQty_19.getString());
    all_values.push_back(UnderlyingInstrument_19);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::Confirmation::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_32;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_32("STRING_1260437742");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltID_32);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_32.insert(UnderlyingSecurityAltID_32.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_32("STRING_317210605");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltIDSource_32);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_32.insert(UnderlyingSecurityAltIDSource_32.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_32);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::Confirmation::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_33;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_33("STRING_1169944215");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltID_33);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_33.insert(UnderlyingSecurityAltID_33.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_33("STRING_1483275359");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltIDSource_33);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_33.insert(UnderlyingSecurityAltIDSource_33.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_33);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_1);
    }
    {
      FIX50SP2::Confirmation::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_34;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_34("STRING_241910323");
      noUnderlyingSecurityAltID_2_1_2.set(UnderlyingSecurityAltID_34);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_34.insert(UnderlyingSecurityAltID_34.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_34("STRING_1956925336");
      noUnderlyingSecurityAltID_2_1_2.set(UnderlyingSecurityAltIDSource_34);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_34.insert(UnderlyingSecurityAltIDSource_34.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_34);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::Confirmation::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_33;
      FIX::UnderlyingStipType UnderlyingStipType_33("STRING_817395762");
      noUnderlyingStips_2_1_0.set(UnderlyingStipType_33);
      UnderlyingStipulations_NoUnderlyingStips_33.insert(UnderlyingStipType_33.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_33("STRING_241613334");
      noUnderlyingStips_2_1_0.set(UnderlyingStipValue_33);
      UnderlyingStipulations_NoUnderlyingStips_33.insert(UnderlyingStipValue_33.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_33);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    {
      FIX50SP2::Confirmation::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_34;
      FIX::UnderlyingStipType UnderlyingStipType_34("STRING_817572703");
      noUnderlyingStips_2_1_1.set(UnderlyingStipType_34);
      UnderlyingStipulations_NoUnderlyingStips_34.insert(UnderlyingStipType_34.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_34("STRING_1336364147");
      noUnderlyingStips_2_1_1.set(UnderlyingStipValue_34);
      UnderlyingStipulations_NoUnderlyingStips_34.insert(UnderlyingStipValue_34.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_34);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::Confirmation::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_33;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_33("STRING_1465211202");
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyID_33);
      UndlyInstrumentParties_NoUndlyInstrumentParties_33.insert(UnderlyingInstrumentPartyID_33.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_33('1');
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyIDSource_33);
      UndlyInstrumentParties_NoUndlyInstrumentParties_33.insert(UnderlyingInstrumentPartyIDSource_33.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_33(926256710);
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyRole_33);
      UndlyInstrumentParties_NoUndlyInstrumentParties_33.insert(UnderlyingInstrumentPartyRole_33.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_33);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Confirmation::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_63;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_63("STRING_688944317");
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubID_63);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_63.insert(UnderlyingInstrumentPartySubID_63.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_63(1070172438);
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubIDType_63);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_63.insert(UnderlyingInstrumentPartySubIDType_63.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_63);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::Confirmation::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_64;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_64("STRING_487648904");
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubID_64);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_64.insert(UnderlyingInstrumentPartySubID_64.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_64(719825666);
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubIDType_64);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_64.insert(UnderlyingInstrumentPartySubIDType_64.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_64);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_1);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_0);
    }
    {
      FIX50SP2::Confirmation::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_34;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_34("STRING_1152373667");
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyID_34);
      UndlyInstrumentParties_NoUndlyInstrumentParties_34.insert(UnderlyingInstrumentPartyID_34.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_34('9');
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyIDSource_34);
      UndlyInstrumentParties_NoUndlyInstrumentParties_34.insert(UnderlyingInstrumentPartyIDSource_34.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_34(1186218406);
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyRole_34);
      UndlyInstrumentParties_NoUndlyInstrumentParties_34.insert(UnderlyingInstrumentPartyRole_34.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_34);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Confirmation::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_65;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_65("STRING_121332130");
        noUndlyInstrumentPartySubIDs_2_1_2_0.set(UnderlyingInstrumentPartySubID_65);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_65.insert(UnderlyingInstrumentPartySubID_65.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_65(312089466);
        noUndlyInstrumentPartySubIDs_2_1_2_0.set(UnderlyingInstrumentPartySubIDType_65);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_65.insert(UnderlyingInstrumentPartySubIDType_65.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_65);

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::Confirmation::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_66;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_66("STRING_1204801613");
        noUndlyInstrumentPartySubIDs_2_1_2_1.set(UnderlyingInstrumentPartySubID_66);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_66.insert(UnderlyingInstrumentPartySubID_66.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_66(2027086214);
        noUndlyInstrumentPartySubIDs_2_1_2_1.set(UnderlyingInstrumentPartySubIDType_66);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_66.insert(UnderlyingInstrumentPartySubIDType_66.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_66);

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_1);
      }
      {
        FIX50SP2::Confirmation::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_67;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_67("STRING_1945678066");
        noUndlyInstrumentPartySubIDs_2_1_2_2.set(UnderlyingInstrumentPartySubID_67);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_67.insert(UnderlyingInstrumentPartySubID_67.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_67(84761605);
        noUndlyInstrumentPartySubIDs_2_1_2_2.set(UnderlyingInstrumentPartySubIDType_67);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_67.insert(UnderlyingInstrumentPartySubIDType_67.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_67);

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_2);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_1);
    }
    {
      FIX50SP2::Confirmation::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_35;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_35("STRING_284112117");
      noUndlyInstrumentParties_2_1_2.set(UnderlyingInstrumentPartyID_35);
      UndlyInstrumentParties_NoUndlyInstrumentParties_35.insert(UnderlyingInstrumentPartyID_35.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_35('1');
      noUndlyInstrumentParties_2_1_2.set(UnderlyingInstrumentPartyIDSource_35);
      UndlyInstrumentParties_NoUndlyInstrumentParties_35.insert(UnderlyingInstrumentPartyIDSource_35.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_35(401972211);
      noUndlyInstrumentParties_2_1_2.set(UnderlyingInstrumentPartyRole_35);
      UndlyInstrumentParties_NoUndlyInstrumentParties_35.insert(UnderlyingInstrumentPartyRole_35.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_35);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Confirmation::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_68;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_68("STRING_394423872");
        noUndlyInstrumentPartySubIDs_2_2_2_0.set(UnderlyingInstrumentPartySubID_68);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_68.insert(UnderlyingInstrumentPartySubID_68.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_68(643882534);
        noUndlyInstrumentPartySubIDs_2_2_2_0.set(UnderlyingInstrumentPartySubIDType_68);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_68.insert(UnderlyingInstrumentPartySubIDType_68.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_68);

        noUndlyInstrumentParties_2_1_2.addGroup(noUndlyInstrumentPartySubIDs_2_2_2_0);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_2);
    }
    msg.addGroup(noUnderlyings_0_2);
  }
  // YieldData
  multiset<string> YieldData_3;
  FIX::Yield Yield_3;
  Yield_3.setString("80.210000");
  msg.set(Yield_3);
  YieldData_3.insert(Yield_3.getString());
  FIX::YieldCalcDate YieldCalcDate_3("LOCALMKTDATE_453436909");
  msg.set(YieldCalcDate_3);
  YieldData_3.insert(YieldCalcDate_3.getString());
  FIX::YieldRedemptionDate YieldRedemptionDate_3("LOCALMKTDATE_1461278297");
  msg.set(YieldRedemptionDate_3);
  YieldData_3.insert(YieldRedemptionDate_3.getString());
  FIX::YieldRedemptionPrice YieldRedemptionPrice_3;
  YieldRedemptionPrice_3.setString("15051113");
  msg.set(YieldRedemptionPrice_3);
  YieldData_3.insert(YieldRedemptionPrice_3.getString());
  FIX::YieldRedemptionPriceType YieldRedemptionPriceType_3(1271009612);
  msg.set(YieldRedemptionPriceType_3);
  YieldData_3.insert(YieldRedemptionPriceType_3.getString());
  FIX::YieldType YieldType_3("STRING_LONGAVGLIFE");
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
