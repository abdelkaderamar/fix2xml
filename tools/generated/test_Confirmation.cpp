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

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::Confirmation msg;

  list<multiset<string>> all_values;
  multiset<string> Confirmation_0;
  FIX::AccruedInterestAmt AccruedInterestAmt_8;
  AccruedInterestAmt_8.setString("9563103");
  msg.set(AccruedInterestAmt_8);
  Confirmation_0.insert(AccruedInterestAmt_8.getString());
  FIX::AccruedInterestRate AccruedInterestRate_3;
  AccruedInterestRate_3.setString("19.700000");
  msg.set(AccruedInterestRate_3);
  Confirmation_0.insert(AccruedInterestRate_3.getString());
  FIX::AllocAccount AllocAccount_10("STRING_552401622");
  msg.set(AllocAccount_10);
  Confirmation_0.insert(AllocAccount_10.getString());
  FIX::AllocAccountType AllocAccountType_0(8);
  msg.set(AllocAccountType_0);
  Confirmation_0.insert(AllocAccountType_0.getString());
  FIX::AllocAcctIDSource AllocAcctIDSource_10(414642416);
  msg.set(AllocAcctIDSource_10);
  Confirmation_0.insert(AllocAcctIDSource_10.getString());
  FIX::AllocID AllocID_5("STRING_1826103739");
  msg.set(AllocID_5);
  Confirmation_0.insert(AllocID_5.getString());
  FIX::AllocQty AllocQty_10;
  AllocQty_10.setString("2926984");
  msg.set(AllocQty_10);
  Confirmation_0.insert(AllocQty_10.getString());
  FIX::AvgParPx AvgParPx_3;
  AvgParPx_3.setString("20243529");
  msg.set(AvgParPx_3);
  Confirmation_0.insert(AvgParPx_3.getString());
  FIX::AvgPx AvgPx_3;
  AvgPx_3.setString("12549026");
  msg.set(AvgPx_3);
  Confirmation_0.insert(AvgPx_3.getString());
  FIX::AvgPxPrecision AvgPxPrecision_3(1456345825);
  msg.set(AvgPxPrecision_3);
  Confirmation_0.insert(AvgPxPrecision_3.getString());
  FIX::Concession Concession_3;
  Concession_3.setString("7257085");
  msg.set(Concession_3);
  Confirmation_0.insert(Concession_3.getString());
  FIX::ConfirmID ConfirmID_0("STRING_920359494");
  msg.set(ConfirmID_0);
  Confirmation_0.insert(ConfirmID_0.getString());
  FIX::ConfirmRefID ConfirmRefID_0("STRING_1007411001");
  msg.set(ConfirmRefID_0);
  Confirmation_0.insert(ConfirmRefID_0.getString());
  FIX::ConfirmReqID ConfirmReqID_0("STRING_1430135177");
  msg.set(ConfirmReqID_0);
  Confirmation_0.insert(ConfirmReqID_0.getString());
  FIX::ConfirmStatus ConfirmStatus_0(1);
  msg.set(ConfirmStatus_0);
  Confirmation_0.insert(ConfirmStatus_0.getString());
  FIX::ConfirmTransType ConfirmTransType_0(0);
  msg.set(ConfirmTransType_0);
  Confirmation_0.insert(ConfirmTransType_0.getString());
  FIX::ConfirmType ConfirmType_0(3);
  msg.set(ConfirmType_0);
  Confirmation_0.insert(ConfirmType_0.getString());
  FIX::CopyMsgIndicator CopyMsgIndicator_0(false);
  msg.set(CopyMsgIndicator_0);
  Confirmation_0.insert(CopyMsgIndicator_0.getString());
  FIX::Currency Currency_12("CHF");
  msg.set(Currency_12);
  Confirmation_0.insert(Currency_12.getString());
  FIX::EncodedText EncodedText_19("DATA_483861940");
  msg.set(EncodedText_19);
  Confirmation_0.insert(EncodedText_19.getString());
  FIX::EncodedTextLen EncodedTextLen_19(168741436);
  msg.set(EncodedTextLen_19);
  Confirmation_0.insert(EncodedTextLen_19.getString());
  FIX::EndAccruedInterestAmt EndAccruedInterestAmt_8;
  EndAccruedInterestAmt_8.setString("14036895");
  msg.set(EndAccruedInterestAmt_8);
  Confirmation_0.insert(EndAccruedInterestAmt_8.getString());
  FIX::EndCash EndCash_8;
  EndCash_8.setString("19510717");
  msg.set(EndCash_8);
  Confirmation_0.insert(EndCash_8.getString());
  FIX::ExDate ExDate_0("LOCALMKTDATE_184035595");
  msg.set(ExDate_0);
  Confirmation_0.insert(ExDate_0.getString());
  FIX::GrossTradeAmt GrossTradeAmt_3;
  GrossTradeAmt_3.setString("5989519");
  msg.set(GrossTradeAmt_3);
  Confirmation_0.insert(GrossTradeAmt_3.getString());
  FIX::IndividualAllocID IndividualAllocID_10("STRING_550266249");
  msg.set(IndividualAllocID_10);
  Confirmation_0.insert(IndividualAllocID_10.getString());
  FIX::InterestAtMaturity InterestAtMaturity_3;
  InterestAtMaturity_3.setString("3246895");
  msg.set(InterestAtMaturity_3);
  Confirmation_0.insert(InterestAtMaturity_3.getString());
  FIX::LastMkt LastMkt_4("EXCHANGE_386661300");
  msg.set(LastMkt_4);
  Confirmation_0.insert(LastMkt_4.getString());
  FIX::LegalConfirm LegalConfirm_3(true);
  msg.set(LegalConfirm_3);
  Confirmation_0.insert(LegalConfirm_3.getString());
  FIX::MaturityNetMoney MaturityNetMoney_0;
  MaturityNetMoney_0.setString("17829146");
  msg.set(MaturityNetMoney_0);
  Confirmation_0.insert(MaturityNetMoney_0.getString());
  FIX::NetMoney NetMoney_3;
  NetMoney_3.setString("13429716");
  msg.set(NetMoney_3);
  Confirmation_0.insert(NetMoney_3.getString());
  FIX::NumDaysInterest NumDaysInterest_3(291858588);
  msg.set(NumDaysInterest_3);
  Confirmation_0.insert(NumDaysInterest_3.getString());
  FIX::PriceType PriceType_9(7);
  msg.set(PriceType_9);
  Confirmation_0.insert(PriceType_9.getString());
  FIX::ProcessCode ProcessCode_6('4');
  msg.set(ProcessCode_6);
  Confirmation_0.insert(ProcessCode_6.getString());
  FIX::QtyType QtyType_10(2);
  msg.set(QtyType_10);
  Confirmation_0.insert(QtyType_10.getString());
  FIX::ReportedPx ReportedPx_0;
  ReportedPx_0.setString("20139364");
  msg.set(ReportedPx_0);
  Confirmation_0.insert(ReportedPx_0.getString());
  FIX::SecondaryAllocID SecondaryAllocID_5("STRING_1687928093");
  msg.set(SecondaryAllocID_5);
  Confirmation_0.insert(SecondaryAllocID_5.getString());
  FIX::SettlCurrAmt SettlCurrAmt_6;
  SettlCurrAmt_6.setString("5833703");
  msg.set(SettlCurrAmt_6);
  Confirmation_0.insert(SettlCurrAmt_6.getString());
  FIX::SettlCurrFxRate SettlCurrFxRate_6;
  SettlCurrFxRate_6.setString("11213553");
  msg.set(SettlCurrFxRate_6);
  Confirmation_0.insert(SettlCurrFxRate_6.getString());
  FIX::SettlCurrFxRateCalc SettlCurrFxRateCalc_6('M');
  msg.set(SettlCurrFxRateCalc_6);
  Confirmation_0.insert(SettlCurrFxRateCalc_6.getString());
  FIX::SettlCurrency SettlCurrency_6("CHF");
  msg.set(SettlCurrency_6);
  Confirmation_0.insert(SettlCurrency_6.getString());
  FIX::SettlDate SettlDate_11("LOCALMKTDATE_2004201272");
  msg.set(SettlDate_11);
  Confirmation_0.insert(SettlDate_11.getString());
  FIX::SettlType SettlType_5("STRING_B");
  msg.set(SettlType_5);
  Confirmation_0.insert(SettlType_5.getString());
  FIX::SharedCommission SharedCommission_0;
  SharedCommission_0.setString("18529204");
  msg.set(SharedCommission_0);
  Confirmation_0.insert(SharedCommission_0.getString());
  FIX::Side Side_10('C');
  msg.set(Side_10);
  Confirmation_0.insert(Side_10.getString());
  FIX::StartCash StartCash_8;
  StartCash_8.setString("15059632");
  msg.set(StartCash_8);
  Confirmation_0.insert(StartCash_8.getString());
  FIX::Text Text_19("STRING_1321022279");
  msg.set(Text_19);
  Confirmation_0.insert(Text_19.getString());
  FIX::TotalTakedown TotalTakedown_3;
  TotalTakedown_3.setString("14873062");
  msg.set(TotalTakedown_3);
  Confirmation_0.insert(TotalTakedown_3.getString());
  FIX::TradeDate TradeDate_7("LOCALMKTDATE_518874392");
  msg.set(TradeDate_7);
  Confirmation_0.insert(TradeDate_7.getString());
  FIX::TransactTime TransactTime_10(FIX::UTCTIMESTAMP(12, 14, 11, 16, 7, 2013));
  msg.set(TransactTime_10);
  Confirmation_0.insert(TransactTime_10.getString());
  all_values.push_back(Confirmation_0);

  // CommissionData
  multiset<string> CommissionData_7;
  FIX::CommCurrency CommCurrency_7("USD");
  msg.set(CommCurrency_7);
  CommissionData_7.insert(CommCurrency_7.getString());
  FIX::CommType CommType_7('6');
  msg.set(CommType_7);
  CommissionData_7.insert(CommType_7.getString());
  FIX::Commission Commission_7;
  Commission_7.setString("18002039");
  msg.set(Commission_7);
  CommissionData_7.insert(Commission_7.getString());
  FIX::FundRenewWaiv FundRenewWaiv_7('N');
  msg.set(FundRenewWaiv_7);
  CommissionData_7.insert(FundRenewWaiv_7.getString());
  all_values.push_back(CommissionData_7);

  // CpctyConfGrp
  // Group CpctyConfGrp.NoCapacities
  {
    FIX50SP2::Confirmation::NoCapacities noCapacities_0_0;
    // CpctyConfGrp.NoCapacities
    multiset<string> CpctyConfGrp_NoCapacities_0;
    FIX::OrderCapacity OrderCapacity_0('R');
    noCapacities_0_0.set(OrderCapacity_0);
    CpctyConfGrp_NoCapacities_0.insert(OrderCapacity_0.getString());
    FIX::OrderCapacityQty OrderCapacityQty_0;
    OrderCapacityQty_0.setString("13514111");
    noCapacities_0_0.set(OrderCapacityQty_0);
    CpctyConfGrp_NoCapacities_0.insert(OrderCapacityQty_0.getString());
    FIX::OrderRestrictions OrderRestrictions_0("MULTIPLECHARVALUE_3");
    noCapacities_0_0.set(OrderRestrictions_0);
    CpctyConfGrp_NoCapacities_0.insert(OrderRestrictions_0.getString());
    all_values.push_back(CpctyConfGrp_NoCapacities_0);

    msg.addGroup(noCapacities_0_0);
  }
  {
    FIX50SP2::Confirmation::NoCapacities noCapacities_0_1;
    // CpctyConfGrp.NoCapacities
    multiset<string> CpctyConfGrp_NoCapacities_1;
    FIX::OrderCapacity OrderCapacity_1('R');
    noCapacities_0_1.set(OrderCapacity_1);
    CpctyConfGrp_NoCapacities_1.insert(OrderCapacity_1.getString());
    FIX::OrderCapacityQty OrderCapacityQty_1;
    OrderCapacityQty_1.setString("8918555");
    noCapacities_0_1.set(OrderCapacityQty_1);
    CpctyConfGrp_NoCapacities_1.insert(OrderCapacityQty_1.getString());
    FIX::OrderRestrictions OrderRestrictions_1("MULTIPLECHARVALUE_E");
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
    OrderCapacityQty_2.setString("18886458");
    noCapacities_0_2.set(OrderCapacityQty_2);
    CpctyConfGrp_NoCapacities_2.insert(OrderCapacityQty_2.getString());
    FIX::OrderRestrictions OrderRestrictions_2("MULTIPLECHARVALUE_6");
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
  FIX::AgreementDate AgreementDate_9("LOCALMKTDATE_84356954");
  msg.set(AgreementDate_9);
  FinancingDetails_9.insert(AgreementDate_9.getString());
  FIX::AgreementDesc AgreementDesc_9("STRING_428029141");
  msg.set(AgreementDesc_9);
  FinancingDetails_9.insert(AgreementDesc_9.getString());
  FIX::AgreementID AgreementID_9("STRING_1910625900");
  msg.set(AgreementID_9);
  FinancingDetails_9.insert(AgreementID_9.getString());
  FIX::DeliveryType DeliveryType_9(1);
  msg.set(DeliveryType_9);
  FinancingDetails_9.insert(DeliveryType_9.getString());
  FIX::EndDate EndDate_9("LOCALMKTDATE_1749051420");
  msg.set(EndDate_9);
  FinancingDetails_9.insert(EndDate_9.getString());
  FIX::MarginRatio MarginRatio_9;
  MarginRatio_9.setString("85.170000");
  msg.set(MarginRatio_9);
  FinancingDetails_9.insert(MarginRatio_9.getString());
  FIX::StartDate StartDate_9("LOCALMKTDATE_2109194573");
  msg.set(StartDate_9);
  FinancingDetails_9.insert(StartDate_9.getString());
  FIX::TerminationType TerminationType_9(4);
  msg.set(TerminationType_9);
  FinancingDetails_9.insert(TerminationType_9.getString());
  all_values.push_back(FinancingDetails_9);

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::Confirmation::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_19;
    FIX::EncodedLegIssuer EncodedLegIssuer_19("DATA_1884274860");
    noLegs_0_0.set(EncodedLegIssuer_19);
    InstrumentLeg_19.insert(EncodedLegIssuer_19.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_19(867440614);
    noLegs_0_0.set(EncodedLegIssuerLen_19);
    InstrumentLeg_19.insert(EncodedLegIssuerLen_19.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_19("DATA_451612217");
    noLegs_0_0.set(EncodedLegSecurityDesc_19);
    InstrumentLeg_19.insert(EncodedLegSecurityDesc_19.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_19(110823406);
    noLegs_0_0.set(EncodedLegSecurityDescLen_19);
    InstrumentLeg_19.insert(EncodedLegSecurityDescLen_19.getString());
    FIX::LegCFICode LegCFICode_19("STRING_878695487");
    noLegs_0_0.set(LegCFICode_19);
    InstrumentLeg_19.insert(LegCFICode_19.getString());
    FIX::LegContractMultiplier LegContractMultiplier_19;
    LegContractMultiplier_19.setString("4689014");
    noLegs_0_0.set(LegContractMultiplier_19);
    InstrumentLeg_19.insert(LegContractMultiplier_19.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_19(871516900);
    noLegs_0_0.set(LegContractMultiplierUnit_19);
    InstrumentLeg_19.insert(LegContractMultiplierUnit_19.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_19("MONTHYEAR_1775480626");
    noLegs_0_0.set(LegContractSettlMonth_19);
    InstrumentLeg_19.insert(LegContractSettlMonth_19.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_19("COUNTRY_121621689");
    noLegs_0_0.set(LegCountryOfIssue_19);
    InstrumentLeg_19.insert(LegCountryOfIssue_19.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_19("LOCALMKTDATE_827698422");
    noLegs_0_0.set(LegCouponPaymentDate_19);
    InstrumentLeg_19.insert(LegCouponPaymentDate_19.getString());
    FIX::LegCouponRate LegCouponRate_19;
    LegCouponRate_19.setString("7.060000");
    noLegs_0_0.set(LegCouponRate_19);
    InstrumentLeg_19.insert(LegCouponRate_19.getString());
    FIX::LegCreditRating LegCreditRating_19("STRING_2109658267");
    noLegs_0_0.set(LegCreditRating_19);
    InstrumentLeg_19.insert(LegCreditRating_19.getString());
    FIX::LegCurrency LegCurrency_19("GBP");
    noLegs_0_0.set(LegCurrency_19);
    InstrumentLeg_19.insert(LegCurrency_19.getString());
    FIX::LegDatedDate LegDatedDate_19("LOCALMKTDATE_1816663960");
    noLegs_0_0.set(LegDatedDate_19);
    InstrumentLeg_19.insert(LegDatedDate_19.getString());
    FIX::LegExerciseStyle LegExerciseStyle_19(923481454);
    noLegs_0_0.set(LegExerciseStyle_19);
    InstrumentLeg_19.insert(LegExerciseStyle_19.getString());
    FIX::LegFactor LegFactor_19;
    LegFactor_19.setString("8953331");
    noLegs_0_0.set(LegFactor_19);
    InstrumentLeg_19.insert(LegFactor_19.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_19(497541385);
    noLegs_0_0.set(LegFlowScheduleType_19);
    InstrumentLeg_19.insert(LegFlowScheduleType_19.getString());
    FIX::LegInstrRegistry LegInstrRegistry_19("STRING_664643639");
    noLegs_0_0.set(LegInstrRegistry_19);
    InstrumentLeg_19.insert(LegInstrRegistry_19.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_19("LOCALMKTDATE_387959775");
    noLegs_0_0.set(LegInterestAccrualDate_19);
    InstrumentLeg_19.insert(LegInterestAccrualDate_19.getString());
    FIX::LegIssueDate LegIssueDate_19("LOCALMKTDATE_1220133686");
    noLegs_0_0.set(LegIssueDate_19);
    InstrumentLeg_19.insert(LegIssueDate_19.getString());
    FIX::LegIssuer LegIssuer_19("STRING_262523448");
    noLegs_0_0.set(LegIssuer_19);
    InstrumentLeg_19.insert(LegIssuer_19.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_19("STRING_472316729");
    noLegs_0_0.set(LegLocaleOfIssue_19);
    InstrumentLeg_19.insert(LegLocaleOfIssue_19.getString());
    FIX::LegMaturityDate LegMaturityDate_19("LOCALMKTDATE_1648162827");
    noLegs_0_0.set(LegMaturityDate_19);
    InstrumentLeg_19.insert(LegMaturityDate_19.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_19("MONTHYEAR_25665701");
    noLegs_0_0.set(LegMaturityMonthYear_19);
    InstrumentLeg_19.insert(LegMaturityMonthYear_19.getString());
    FIX::LegMaturityTime LegMaturityTime_19("TZTIMEONLY_2062636910");
    noLegs_0_0.set(LegMaturityTime_19);
    InstrumentLeg_19.insert(LegMaturityTime_19.getString());
    FIX::LegOptAttribute LegOptAttribute_19('1');
    noLegs_0_0.set(LegOptAttribute_19);
    InstrumentLeg_19.insert(LegOptAttribute_19.getString());
    FIX::LegOptionRatio LegOptionRatio_19;
    LegOptionRatio_19.setString("12761142");
    noLegs_0_0.set(LegOptionRatio_19);
    InstrumentLeg_19.insert(LegOptionRatio_19.getString());
    FIX::LegPool LegPool_19("STRING_2024347836");
    noLegs_0_0.set(LegPool_19);
    InstrumentLeg_19.insert(LegPool_19.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_19("STRING_508698942");
    noLegs_0_0.set(LegPriceUnitOfMeasure_19);
    InstrumentLeg_19.insert(LegPriceUnitOfMeasure_19.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_19;
    LegPriceUnitOfMeasureQty_19.setString("20351267");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_19);
    InstrumentLeg_19.insert(LegPriceUnitOfMeasureQty_19.getString());
    FIX::LegProduct LegProduct_19(1761139048);
    noLegs_0_0.set(LegProduct_19);
    InstrumentLeg_19.insert(LegProduct_19.getString());
    FIX::LegPutOrCall LegPutOrCall_19(1376139557);
    noLegs_0_0.set(LegPutOrCall_19);
    InstrumentLeg_19.insert(LegPutOrCall_19.getString());
    FIX::LegRatioQty LegRatioQty_19;
    LegRatioQty_19.setString("3392553");
    noLegs_0_0.set(LegRatioQty_19);
    InstrumentLeg_19.insert(LegRatioQty_19.getString());
    FIX::LegRedemptionDate LegRedemptionDate_19("LOCALMKTDATE_1871962454");
    noLegs_0_0.set(LegRedemptionDate_19);
    InstrumentLeg_19.insert(LegRedemptionDate_19.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_19("STRING_107351396");
    noLegs_0_0.set(LegRepoCollateralSecurityType_19);
    InstrumentLeg_19.insert(LegRepoCollateralSecurityType_19.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_19;
    LegRepurchaseRate_19.setString("67.860000");
    noLegs_0_0.set(LegRepurchaseRate_19);
    InstrumentLeg_19.insert(LegRepurchaseRate_19.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_19(595995706);
    noLegs_0_0.set(LegRepurchaseTerm_19);
    InstrumentLeg_19.insert(LegRepurchaseTerm_19.getString());
    FIX::LegSecurityDesc LegSecurityDesc_19("STRING_1882832023");
    noLegs_0_0.set(LegSecurityDesc_19);
    InstrumentLeg_19.insert(LegSecurityDesc_19.getString());
    FIX::LegSecurityExchange LegSecurityExchange_19("EXCHANGE_929778475");
    noLegs_0_0.set(LegSecurityExchange_19);
    InstrumentLeg_19.insert(LegSecurityExchange_19.getString());
    FIX::LegSecurityID LegSecurityID_19("STRING_1423694128");
    noLegs_0_0.set(LegSecurityID_19);
    InstrumentLeg_19.insert(LegSecurityID_19.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_19("STRING_551989081");
    noLegs_0_0.set(LegSecurityIDSource_19);
    InstrumentLeg_19.insert(LegSecurityIDSource_19.getString());
    FIX::LegSecuritySubType LegSecuritySubType_19("STRING_891953094");
    noLegs_0_0.set(LegSecuritySubType_19);
    InstrumentLeg_19.insert(LegSecuritySubType_19.getString());
    FIX::LegSecurityType LegSecurityType_19("STRING_1455320020");
    noLegs_0_0.set(LegSecurityType_19);
    InstrumentLeg_19.insert(LegSecurityType_19.getString());
    FIX::LegSide LegSide_19('1');
    noLegs_0_0.set(LegSide_19);
    InstrumentLeg_19.insert(LegSide_19.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_19("STRING_561133406");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_19);
    InstrumentLeg_19.insert(LegStateOrProvinceOfIssue_19.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_19("CHF");
    noLegs_0_0.set(LegStrikeCurrency_19);
    InstrumentLeg_19.insert(LegStrikeCurrency_19.getString());
    FIX::LegStrikePrice LegStrikePrice_19;
    LegStrikePrice_19.setString("10586747");
    noLegs_0_0.set(LegStrikePrice_19);
    InstrumentLeg_19.insert(LegStrikePrice_19.getString());
    FIX::LegSymbol LegSymbol_19("STRING_895961466");
    noLegs_0_0.set(LegSymbol_19);
    InstrumentLeg_19.insert(LegSymbol_19.getString());
    FIX::LegSymbolSfx LegSymbolSfx_19("STRING_252100186");
    noLegs_0_0.set(LegSymbolSfx_19);
    InstrumentLeg_19.insert(LegSymbolSfx_19.getString());
    FIX::LegTimeUnit LegTimeUnit_19("STRING_131324830");
    noLegs_0_0.set(LegTimeUnit_19);
    InstrumentLeg_19.insert(LegTimeUnit_19.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_19("STRING_1158484915");
    noLegs_0_0.set(LegUnitOfMeasure_19);
    InstrumentLeg_19.insert(LegUnitOfMeasure_19.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_19;
    LegUnitOfMeasureQty_19.setString("7244169");
    noLegs_0_0.set(LegUnitOfMeasureQty_19);
    InstrumentLeg_19.insert(LegUnitOfMeasureQty_19.getString());
    all_values.push_back(InstrumentLeg_19);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::Confirmation::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_34;
      FIX::LegSecurityAltID LegSecurityAltID_34("STRING_1184150616");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_34);
      LegSecAltIDGrp_NoLegSecurityAltID_34.insert(LegSecurityAltID_34.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_34("STRING_639570178");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_34);
      LegSecAltIDGrp_NoLegSecurityAltID_34.insert(LegSecurityAltIDSource_34.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_34);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::Confirmation::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_35;
      FIX::LegSecurityAltID LegSecurityAltID_35("STRING_881734609");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_35);
      LegSecAltIDGrp_NoLegSecurityAltID_35.insert(LegSecurityAltID_35.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_35("STRING_312781186");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_35);
      LegSecAltIDGrp_NoLegSecurityAltID_35.insert(LegSecurityAltIDSource_35.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_35);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::Confirmation::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_36;
      FIX::LegSecurityAltID LegSecurityAltID_36("STRING_516434366");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltID_36);
      LegSecAltIDGrp_NoLegSecurityAltID_36.insert(LegSecurityAltID_36.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_36("STRING_1390433552");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltIDSource_36);
      LegSecAltIDGrp_NoLegSecurityAltID_36.insert(LegSecurityAltIDSource_36.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_36);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_2);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::Confirmation::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_20;
    FIX::EncodedLegIssuer EncodedLegIssuer_20("DATA_200424325");
    noLegs_0_1.set(EncodedLegIssuer_20);
    InstrumentLeg_20.insert(EncodedLegIssuer_20.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_20(130089766);
    noLegs_0_1.set(EncodedLegIssuerLen_20);
    InstrumentLeg_20.insert(EncodedLegIssuerLen_20.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_20("DATA_619089461");
    noLegs_0_1.set(EncodedLegSecurityDesc_20);
    InstrumentLeg_20.insert(EncodedLegSecurityDesc_20.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_20(539679682);
    noLegs_0_1.set(EncodedLegSecurityDescLen_20);
    InstrumentLeg_20.insert(EncodedLegSecurityDescLen_20.getString());
    FIX::LegCFICode LegCFICode_20("STRING_2002052220");
    noLegs_0_1.set(LegCFICode_20);
    InstrumentLeg_20.insert(LegCFICode_20.getString());
    FIX::LegContractMultiplier LegContractMultiplier_20;
    LegContractMultiplier_20.setString("7264408");
    noLegs_0_1.set(LegContractMultiplier_20);
    InstrumentLeg_20.insert(LegContractMultiplier_20.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_20(1347836468);
    noLegs_0_1.set(LegContractMultiplierUnit_20);
    InstrumentLeg_20.insert(LegContractMultiplierUnit_20.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_20("MONTHYEAR_450564278");
    noLegs_0_1.set(LegContractSettlMonth_20);
    InstrumentLeg_20.insert(LegContractSettlMonth_20.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_20("COUNTRY_461789232");
    noLegs_0_1.set(LegCountryOfIssue_20);
    InstrumentLeg_20.insert(LegCountryOfIssue_20.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_20("LOCALMKTDATE_130131295");
    noLegs_0_1.set(LegCouponPaymentDate_20);
    InstrumentLeg_20.insert(LegCouponPaymentDate_20.getString());
    FIX::LegCouponRate LegCouponRate_20;
    LegCouponRate_20.setString("84.070000");
    noLegs_0_1.set(LegCouponRate_20);
    InstrumentLeg_20.insert(LegCouponRate_20.getString());
    FIX::LegCreditRating LegCreditRating_20("STRING_1013778313");
    noLegs_0_1.set(LegCreditRating_20);
    InstrumentLeg_20.insert(LegCreditRating_20.getString());
    FIX::LegCurrency LegCurrency_20("CHF");
    noLegs_0_1.set(LegCurrency_20);
    InstrumentLeg_20.insert(LegCurrency_20.getString());
    FIX::LegDatedDate LegDatedDate_20("LOCALMKTDATE_2130069184");
    noLegs_0_1.set(LegDatedDate_20);
    InstrumentLeg_20.insert(LegDatedDate_20.getString());
    FIX::LegExerciseStyle LegExerciseStyle_20(1583217796);
    noLegs_0_1.set(LegExerciseStyle_20);
    InstrumentLeg_20.insert(LegExerciseStyle_20.getString());
    FIX::LegFactor LegFactor_20;
    LegFactor_20.setString("14134126");
    noLegs_0_1.set(LegFactor_20);
    InstrumentLeg_20.insert(LegFactor_20.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_20(1994209595);
    noLegs_0_1.set(LegFlowScheduleType_20);
    InstrumentLeg_20.insert(LegFlowScheduleType_20.getString());
    FIX::LegInstrRegistry LegInstrRegistry_20("STRING_494408940");
    noLegs_0_1.set(LegInstrRegistry_20);
    InstrumentLeg_20.insert(LegInstrRegistry_20.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_20("LOCALMKTDATE_161890425");
    noLegs_0_1.set(LegInterestAccrualDate_20);
    InstrumentLeg_20.insert(LegInterestAccrualDate_20.getString());
    FIX::LegIssueDate LegIssueDate_20("LOCALMKTDATE_98826134");
    noLegs_0_1.set(LegIssueDate_20);
    InstrumentLeg_20.insert(LegIssueDate_20.getString());
    FIX::LegIssuer LegIssuer_20("STRING_625733771");
    noLegs_0_1.set(LegIssuer_20);
    InstrumentLeg_20.insert(LegIssuer_20.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_20("STRING_1320375340");
    noLegs_0_1.set(LegLocaleOfIssue_20);
    InstrumentLeg_20.insert(LegLocaleOfIssue_20.getString());
    FIX::LegMaturityDate LegMaturityDate_20("LOCALMKTDATE_823243050");
    noLegs_0_1.set(LegMaturityDate_20);
    InstrumentLeg_20.insert(LegMaturityDate_20.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_20("MONTHYEAR_257737781");
    noLegs_0_1.set(LegMaturityMonthYear_20);
    InstrumentLeg_20.insert(LegMaturityMonthYear_20.getString());
    FIX::LegMaturityTime LegMaturityTime_20("TZTIMEONLY_357042308");
    noLegs_0_1.set(LegMaturityTime_20);
    InstrumentLeg_20.insert(LegMaturityTime_20.getString());
    FIX::LegOptAttribute LegOptAttribute_20('1');
    noLegs_0_1.set(LegOptAttribute_20);
    InstrumentLeg_20.insert(LegOptAttribute_20.getString());
    FIX::LegOptionRatio LegOptionRatio_20;
    LegOptionRatio_20.setString("11394723");
    noLegs_0_1.set(LegOptionRatio_20);
    InstrumentLeg_20.insert(LegOptionRatio_20.getString());
    FIX::LegPool LegPool_20("STRING_669823494");
    noLegs_0_1.set(LegPool_20);
    InstrumentLeg_20.insert(LegPool_20.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_20("STRING_1979247595");
    noLegs_0_1.set(LegPriceUnitOfMeasure_20);
    InstrumentLeg_20.insert(LegPriceUnitOfMeasure_20.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_20;
    LegPriceUnitOfMeasureQty_20.setString("3824222");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_20);
    InstrumentLeg_20.insert(LegPriceUnitOfMeasureQty_20.getString());
    FIX::LegProduct LegProduct_20(870247819);
    noLegs_0_1.set(LegProduct_20);
    InstrumentLeg_20.insert(LegProduct_20.getString());
    FIX::LegPutOrCall LegPutOrCall_20(2109337361);
    noLegs_0_1.set(LegPutOrCall_20);
    InstrumentLeg_20.insert(LegPutOrCall_20.getString());
    FIX::LegRatioQty LegRatioQty_20;
    LegRatioQty_20.setString("10015117");
    noLegs_0_1.set(LegRatioQty_20);
    InstrumentLeg_20.insert(LegRatioQty_20.getString());
    FIX::LegRedemptionDate LegRedemptionDate_20("LOCALMKTDATE_1409927502");
    noLegs_0_1.set(LegRedemptionDate_20);
    InstrumentLeg_20.insert(LegRedemptionDate_20.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_20("STRING_1963905934");
    noLegs_0_1.set(LegRepoCollateralSecurityType_20);
    InstrumentLeg_20.insert(LegRepoCollateralSecurityType_20.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_20;
    LegRepurchaseRate_20.setString("26.130000");
    noLegs_0_1.set(LegRepurchaseRate_20);
    InstrumentLeg_20.insert(LegRepurchaseRate_20.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_20(610280322);
    noLegs_0_1.set(LegRepurchaseTerm_20);
    InstrumentLeg_20.insert(LegRepurchaseTerm_20.getString());
    FIX::LegSecurityDesc LegSecurityDesc_20("STRING_266986564");
    noLegs_0_1.set(LegSecurityDesc_20);
    InstrumentLeg_20.insert(LegSecurityDesc_20.getString());
    FIX::LegSecurityExchange LegSecurityExchange_20("EXCHANGE_42258197");
    noLegs_0_1.set(LegSecurityExchange_20);
    InstrumentLeg_20.insert(LegSecurityExchange_20.getString());
    FIX::LegSecurityID LegSecurityID_20("STRING_740411618");
    noLegs_0_1.set(LegSecurityID_20);
    InstrumentLeg_20.insert(LegSecurityID_20.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_20("STRING_2141244971");
    noLegs_0_1.set(LegSecurityIDSource_20);
    InstrumentLeg_20.insert(LegSecurityIDSource_20.getString());
    FIX::LegSecuritySubType LegSecuritySubType_20("STRING_1056036511");
    noLegs_0_1.set(LegSecuritySubType_20);
    InstrumentLeg_20.insert(LegSecuritySubType_20.getString());
    FIX::LegSecurityType LegSecurityType_20("STRING_1762496008");
    noLegs_0_1.set(LegSecurityType_20);
    InstrumentLeg_20.insert(LegSecurityType_20.getString());
    FIX::LegSide LegSide_20('1');
    noLegs_0_1.set(LegSide_20);
    InstrumentLeg_20.insert(LegSide_20.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_20("STRING_1038622047");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_20);
    InstrumentLeg_20.insert(LegStateOrProvinceOfIssue_20.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_20("CHF");
    noLegs_0_1.set(LegStrikeCurrency_20);
    InstrumentLeg_20.insert(LegStrikeCurrency_20.getString());
    FIX::LegStrikePrice LegStrikePrice_20;
    LegStrikePrice_20.setString("8853479");
    noLegs_0_1.set(LegStrikePrice_20);
    InstrumentLeg_20.insert(LegStrikePrice_20.getString());
    FIX::LegSymbol LegSymbol_20("STRING_1692639097");
    noLegs_0_1.set(LegSymbol_20);
    InstrumentLeg_20.insert(LegSymbol_20.getString());
    FIX::LegSymbolSfx LegSymbolSfx_20("STRING_603675486");
    noLegs_0_1.set(LegSymbolSfx_20);
    InstrumentLeg_20.insert(LegSymbolSfx_20.getString());
    FIX::LegTimeUnit LegTimeUnit_20("STRING_984174129");
    noLegs_0_1.set(LegTimeUnit_20);
    InstrumentLeg_20.insert(LegTimeUnit_20.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_20("STRING_170889220");
    noLegs_0_1.set(LegUnitOfMeasure_20);
    InstrumentLeg_20.insert(LegUnitOfMeasure_20.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_20;
    LegUnitOfMeasureQty_20.setString("19240508");
    noLegs_0_1.set(LegUnitOfMeasureQty_20);
    InstrumentLeg_20.insert(LegUnitOfMeasureQty_20.getString());
    all_values.push_back(InstrumentLeg_20);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::Confirmation::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_37;
      FIX::LegSecurityAltID LegSecurityAltID_37("STRING_428627001");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_37);
      LegSecAltIDGrp_NoLegSecurityAltID_37.insert(LegSecurityAltID_37.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_37("STRING_133609486");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_37);
      LegSecAltIDGrp_NoLegSecurityAltID_37.insert(LegSecurityAltIDSource_37.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_37);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    msg.addGroup(noLegs_0_1);
  }
  {
    FIX50SP2::Confirmation::NoLegs noLegs_0_2;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_21;
    FIX::EncodedLegIssuer EncodedLegIssuer_21("DATA_1122746759");
    noLegs_0_2.set(EncodedLegIssuer_21);
    InstrumentLeg_21.insert(EncodedLegIssuer_21.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_21(1568099391);
    noLegs_0_2.set(EncodedLegIssuerLen_21);
    InstrumentLeg_21.insert(EncodedLegIssuerLen_21.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_21("DATA_803432980");
    noLegs_0_2.set(EncodedLegSecurityDesc_21);
    InstrumentLeg_21.insert(EncodedLegSecurityDesc_21.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_21(954510706);
    noLegs_0_2.set(EncodedLegSecurityDescLen_21);
    InstrumentLeg_21.insert(EncodedLegSecurityDescLen_21.getString());
    FIX::LegCFICode LegCFICode_21("STRING_1950521686");
    noLegs_0_2.set(LegCFICode_21);
    InstrumentLeg_21.insert(LegCFICode_21.getString());
    FIX::LegContractMultiplier LegContractMultiplier_21;
    LegContractMultiplier_21.setString("16736808");
    noLegs_0_2.set(LegContractMultiplier_21);
    InstrumentLeg_21.insert(LegContractMultiplier_21.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_21(916364420);
    noLegs_0_2.set(LegContractMultiplierUnit_21);
    InstrumentLeg_21.insert(LegContractMultiplierUnit_21.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_21("MONTHYEAR_804549793");
    noLegs_0_2.set(LegContractSettlMonth_21);
    InstrumentLeg_21.insert(LegContractSettlMonth_21.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_21("COUNTRY_936124654");
    noLegs_0_2.set(LegCountryOfIssue_21);
    InstrumentLeg_21.insert(LegCountryOfIssue_21.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_21("LOCALMKTDATE_732786706");
    noLegs_0_2.set(LegCouponPaymentDate_21);
    InstrumentLeg_21.insert(LegCouponPaymentDate_21.getString());
    FIX::LegCouponRate LegCouponRate_21;
    LegCouponRate_21.setString("87.580000");
    noLegs_0_2.set(LegCouponRate_21);
    InstrumentLeg_21.insert(LegCouponRate_21.getString());
    FIX::LegCreditRating LegCreditRating_21("STRING_1546404976");
    noLegs_0_2.set(LegCreditRating_21);
    InstrumentLeg_21.insert(LegCreditRating_21.getString());
    FIX::LegCurrency LegCurrency_21("USD");
    noLegs_0_2.set(LegCurrency_21);
    InstrumentLeg_21.insert(LegCurrency_21.getString());
    FIX::LegDatedDate LegDatedDate_21("LOCALMKTDATE_139332946");
    noLegs_0_2.set(LegDatedDate_21);
    InstrumentLeg_21.insert(LegDatedDate_21.getString());
    FIX::LegExerciseStyle LegExerciseStyle_21(993534594);
    noLegs_0_2.set(LegExerciseStyle_21);
    InstrumentLeg_21.insert(LegExerciseStyle_21.getString());
    FIX::LegFactor LegFactor_21;
    LegFactor_21.setString("14833134");
    noLegs_0_2.set(LegFactor_21);
    InstrumentLeg_21.insert(LegFactor_21.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_21(1901828954);
    noLegs_0_2.set(LegFlowScheduleType_21);
    InstrumentLeg_21.insert(LegFlowScheduleType_21.getString());
    FIX::LegInstrRegistry LegInstrRegistry_21("STRING_21907049");
    noLegs_0_2.set(LegInstrRegistry_21);
    InstrumentLeg_21.insert(LegInstrRegistry_21.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_21("LOCALMKTDATE_374451866");
    noLegs_0_2.set(LegInterestAccrualDate_21);
    InstrumentLeg_21.insert(LegInterestAccrualDate_21.getString());
    FIX::LegIssueDate LegIssueDate_21("LOCALMKTDATE_952575463");
    noLegs_0_2.set(LegIssueDate_21);
    InstrumentLeg_21.insert(LegIssueDate_21.getString());
    FIX::LegIssuer LegIssuer_21("STRING_463692110");
    noLegs_0_2.set(LegIssuer_21);
    InstrumentLeg_21.insert(LegIssuer_21.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_21("STRING_1259799861");
    noLegs_0_2.set(LegLocaleOfIssue_21);
    InstrumentLeg_21.insert(LegLocaleOfIssue_21.getString());
    FIX::LegMaturityDate LegMaturityDate_21("LOCALMKTDATE_497730912");
    noLegs_0_2.set(LegMaturityDate_21);
    InstrumentLeg_21.insert(LegMaturityDate_21.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_21("MONTHYEAR_1067367597");
    noLegs_0_2.set(LegMaturityMonthYear_21);
    InstrumentLeg_21.insert(LegMaturityMonthYear_21.getString());
    FIX::LegMaturityTime LegMaturityTime_21("TZTIMEONLY_96490342");
    noLegs_0_2.set(LegMaturityTime_21);
    InstrumentLeg_21.insert(LegMaturityTime_21.getString());
    FIX::LegOptAttribute LegOptAttribute_21('6');
    noLegs_0_2.set(LegOptAttribute_21);
    InstrumentLeg_21.insert(LegOptAttribute_21.getString());
    FIX::LegOptionRatio LegOptionRatio_21;
    LegOptionRatio_21.setString("8439347");
    noLegs_0_2.set(LegOptionRatio_21);
    InstrumentLeg_21.insert(LegOptionRatio_21.getString());
    FIX::LegPool LegPool_21("STRING_1903907521");
    noLegs_0_2.set(LegPool_21);
    InstrumentLeg_21.insert(LegPool_21.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_21("STRING_1097247133");
    noLegs_0_2.set(LegPriceUnitOfMeasure_21);
    InstrumentLeg_21.insert(LegPriceUnitOfMeasure_21.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_21;
    LegPriceUnitOfMeasureQty_21.setString("9775442");
    noLegs_0_2.set(LegPriceUnitOfMeasureQty_21);
    InstrumentLeg_21.insert(LegPriceUnitOfMeasureQty_21.getString());
    FIX::LegProduct LegProduct_21(879170633);
    noLegs_0_2.set(LegProduct_21);
    InstrumentLeg_21.insert(LegProduct_21.getString());
    FIX::LegPutOrCall LegPutOrCall_21(517862876);
    noLegs_0_2.set(LegPutOrCall_21);
    InstrumentLeg_21.insert(LegPutOrCall_21.getString());
    FIX::LegRatioQty LegRatioQty_21;
    LegRatioQty_21.setString("17809772");
    noLegs_0_2.set(LegRatioQty_21);
    InstrumentLeg_21.insert(LegRatioQty_21.getString());
    FIX::LegRedemptionDate LegRedemptionDate_21("LOCALMKTDATE_1833681339");
    noLegs_0_2.set(LegRedemptionDate_21);
    InstrumentLeg_21.insert(LegRedemptionDate_21.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_21("STRING_320900914");
    noLegs_0_2.set(LegRepoCollateralSecurityType_21);
    InstrumentLeg_21.insert(LegRepoCollateralSecurityType_21.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_21;
    LegRepurchaseRate_21.setString("43.940000");
    noLegs_0_2.set(LegRepurchaseRate_21);
    InstrumentLeg_21.insert(LegRepurchaseRate_21.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_21(602562111);
    noLegs_0_2.set(LegRepurchaseTerm_21);
    InstrumentLeg_21.insert(LegRepurchaseTerm_21.getString());
    FIX::LegSecurityDesc LegSecurityDesc_21("STRING_1125450708");
    noLegs_0_2.set(LegSecurityDesc_21);
    InstrumentLeg_21.insert(LegSecurityDesc_21.getString());
    FIX::LegSecurityExchange LegSecurityExchange_21("EXCHANGE_95815400");
    noLegs_0_2.set(LegSecurityExchange_21);
    InstrumentLeg_21.insert(LegSecurityExchange_21.getString());
    FIX::LegSecurityID LegSecurityID_21("STRING_1335348817");
    noLegs_0_2.set(LegSecurityID_21);
    InstrumentLeg_21.insert(LegSecurityID_21.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_21("STRING_1510469466");
    noLegs_0_2.set(LegSecurityIDSource_21);
    InstrumentLeg_21.insert(LegSecurityIDSource_21.getString());
    FIX::LegSecuritySubType LegSecuritySubType_21("STRING_1642220377");
    noLegs_0_2.set(LegSecuritySubType_21);
    InstrumentLeg_21.insert(LegSecuritySubType_21.getString());
    FIX::LegSecurityType LegSecurityType_21("STRING_187638440");
    noLegs_0_2.set(LegSecurityType_21);
    InstrumentLeg_21.insert(LegSecurityType_21.getString());
    FIX::LegSide LegSide_21('1');
    noLegs_0_2.set(LegSide_21);
    InstrumentLeg_21.insert(LegSide_21.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_21("STRING_1781553323");
    noLegs_0_2.set(LegStateOrProvinceOfIssue_21);
    InstrumentLeg_21.insert(LegStateOrProvinceOfIssue_21.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_21("CAN");
    noLegs_0_2.set(LegStrikeCurrency_21);
    InstrumentLeg_21.insert(LegStrikeCurrency_21.getString());
    FIX::LegStrikePrice LegStrikePrice_21;
    LegStrikePrice_21.setString("15358986");
    noLegs_0_2.set(LegStrikePrice_21);
    InstrumentLeg_21.insert(LegStrikePrice_21.getString());
    FIX::LegSymbol LegSymbol_21("STRING_1203080083");
    noLegs_0_2.set(LegSymbol_21);
    InstrumentLeg_21.insert(LegSymbol_21.getString());
    FIX::LegSymbolSfx LegSymbolSfx_21("STRING_1648028108");
    noLegs_0_2.set(LegSymbolSfx_21);
    InstrumentLeg_21.insert(LegSymbolSfx_21.getString());
    FIX::LegTimeUnit LegTimeUnit_21("STRING_340990445");
    noLegs_0_2.set(LegTimeUnit_21);
    InstrumentLeg_21.insert(LegTimeUnit_21.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_21("STRING_1666772193");
    noLegs_0_2.set(LegUnitOfMeasure_21);
    InstrumentLeg_21.insert(LegUnitOfMeasure_21.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_21;
    LegUnitOfMeasureQty_21.setString("7603443");
    noLegs_0_2.set(LegUnitOfMeasureQty_21);
    InstrumentLeg_21.insert(LegUnitOfMeasureQty_21.getString());
    all_values.push_back(InstrumentLeg_21);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::Confirmation::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_38;
      FIX::LegSecurityAltID LegSecurityAltID_38("STRING_586656142");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltID_38);
      LegSecAltIDGrp_NoLegSecurityAltID_38.insert(LegSecurityAltID_38.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_38("STRING_856834664");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltIDSource_38);
      LegSecAltIDGrp_NoLegSecurityAltID_38.insert(LegSecurityAltIDSource_38.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_38);

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::Confirmation::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_39;
      FIX::LegSecurityAltID LegSecurityAltID_39("STRING_1507341489");
      noLegSecurityAltID_2_1_1.set(LegSecurityAltID_39);
      LegSecAltIDGrp_NoLegSecurityAltID_39.insert(LegSecurityAltID_39.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_39("STRING_1430590918");
      noLegSecurityAltID_2_1_1.set(LegSecurityAltIDSource_39);
      LegSecAltIDGrp_NoLegSecurityAltID_39.insert(LegSecurityAltIDSource_39.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_39);

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_1);
    }
    {
      FIX50SP2::Confirmation::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_40;
      FIX::LegSecurityAltID LegSecurityAltID_40("STRING_613258537");
      noLegSecurityAltID_2_1_2.set(LegSecurityAltID_40);
      LegSecAltIDGrp_NoLegSecurityAltID_40.insert(LegSecurityAltID_40.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_40("STRING_457104974");
      noLegSecurityAltID_2_1_2.set(LegSecurityAltIDSource_40);
      LegSecAltIDGrp_NoLegSecurityAltID_40.insert(LegSecurityAltIDSource_40.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_40);

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_2);
    }
    msg.addGroup(noLegs_0_2);
  }
  // Instrument
  multiset<string> Instrument_14;
  FIX::AttachmentPoint AttachmentPoint_14;
  AttachmentPoint_14.setString("15.320000");
  msg.set(AttachmentPoint_14);
  Instrument_14.insert(AttachmentPoint_14.getString());
  FIX::CFICode CFICode_14("STRING_1492429170");
  msg.set(CFICode_14);
  Instrument_14.insert(CFICode_14.getString());
  FIX::CPProgram CPProgram_14(2);
  msg.set(CPProgram_14);
  Instrument_14.insert(CPProgram_14.getString());
  FIX::CPRegType CPRegType_14("STRING_2041628774");
  msg.set(CPRegType_14);
  Instrument_14.insert(CPRegType_14.getString());
  FIX::CapPrice CapPrice_14;
  CapPrice_14.setString("11786268");
  msg.set(CapPrice_14);
  Instrument_14.insert(CapPrice_14.getString());
  FIX::ContractMultiplier ContractMultiplier_14;
  ContractMultiplier_14.setString("12958687");
  msg.set(ContractMultiplier_14);
  Instrument_14.insert(ContractMultiplier_14.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_14(1);
  msg.set(ContractMultiplierUnit_14);
  Instrument_14.insert(ContractMultiplierUnit_14.getString());
  FIX::ContractSettlMonth ContractSettlMonth_14("MONTHYEAR_1781188973");
  msg.set(ContractSettlMonth_14);
  Instrument_14.insert(ContractSettlMonth_14.getString());
  FIX::CountryOfIssue CountryOfIssue_14("COUNTRY_273835825");
  msg.set(CountryOfIssue_14);
  Instrument_14.insert(CountryOfIssue_14.getString());
  FIX::CouponPaymentDate CouponPaymentDate_14("LOCALMKTDATE_1297134921");
  msg.set(CouponPaymentDate_14);
  Instrument_14.insert(CouponPaymentDate_14.getString());
  FIX::CouponRate CouponRate_14;
  CouponRate_14.setString("41.430000");
  msg.set(CouponRate_14);
  Instrument_14.insert(CouponRate_14.getString());
  FIX::CreditRating CreditRating_14("STRING_1784305291");
  msg.set(CreditRating_14);
  Instrument_14.insert(CreditRating_14.getString());
  FIX::DatedDate DatedDate_14("LOCALMKTDATE_791871650");
  msg.set(DatedDate_14);
  Instrument_14.insert(DatedDate_14.getString());
  FIX::DetachmentPoint DetachmentPoint_14;
  DetachmentPoint_14.setString("25.830000");
  msg.set(DetachmentPoint_14);
  Instrument_14.insert(DetachmentPoint_14.getString());
  FIX::EncodedIssuer EncodedIssuer_14("DATA_1574568066");
  msg.set(EncodedIssuer_14);
  Instrument_14.insert(EncodedIssuer_14.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_14(425941326);
  msg.set(EncodedIssuerLen_14);
  Instrument_14.insert(EncodedIssuerLen_14.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_14("DATA_190381969");
  msg.set(EncodedSecurityDesc_14);
  Instrument_14.insert(EncodedSecurityDesc_14.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_14(700660659);
  msg.set(EncodedSecurityDescLen_14);
  Instrument_14.insert(EncodedSecurityDescLen_14.getString());
  FIX::ExerciseStyle ExerciseStyle_14(0);
  msg.set(ExerciseStyle_14);
  Instrument_14.insert(ExerciseStyle_14.getString());
  FIX::Factor Factor_14;
  Factor_14.setString("13934620");
  msg.set(Factor_14);
  Instrument_14.insert(Factor_14.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_14(false);
  msg.set(FlexProductEligibilityIndicator_14);
  Instrument_14.insert(FlexProductEligibilityIndicator_14.getString());
  FIX::FlexibleIndicator FlexibleIndicator_14(false);
  msg.set(FlexibleIndicator_14);
  Instrument_14.insert(FlexibleIndicator_14.getString());
  FIX::FloorPrice FloorPrice_14;
  FloorPrice_14.setString("9127505");
  msg.set(FloorPrice_14);
  Instrument_14.insert(FloorPrice_14.getString());
  FIX::FlowScheduleType FlowScheduleType_14(1);
  msg.set(FlowScheduleType_14);
  Instrument_14.insert(FlowScheduleType_14.getString());
  FIX::InstrRegistry InstrRegistry_14("STRING_994068110");
  msg.set(InstrRegistry_14);
  Instrument_14.insert(InstrRegistry_14.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_14('1');
  msg.set(InstrmtAssignmentMethod_14);
  Instrument_14.insert(InstrmtAssignmentMethod_14.getString());
  FIX::InterestAccrualDate InterestAccrualDate_14("LOCALMKTDATE_1818384105");
  msg.set(InterestAccrualDate_14);
  Instrument_14.insert(InterestAccrualDate_14.getString());
  FIX::IssueDate IssueDate_14("LOCALMKTDATE_353925951");
  msg.set(IssueDate_14);
  Instrument_14.insert(IssueDate_14.getString());
  FIX::Issuer Issuer_14("STRING_782514010");
  msg.set(Issuer_14);
  Instrument_14.insert(Issuer_14.getString());
  FIX::ListMethod ListMethod_14(0);
  msg.set(ListMethod_14);
  Instrument_14.insert(ListMethod_14.getString());
  FIX::LocaleOfIssue LocaleOfIssue_14("STRING_811030925");
  msg.set(LocaleOfIssue_14);
  Instrument_14.insert(LocaleOfIssue_14.getString());
  FIX::MaturityDate MaturityDate_14("LOCALMKTDATE_1043165542");
  msg.set(MaturityDate_14);
  Instrument_14.insert(MaturityDate_14.getString());
  FIX::MaturityMonthYear MaturityMonthYear_14("MONTHYEAR_1776588165");
  msg.set(MaturityMonthYear_14);
  Instrument_14.insert(MaturityMonthYear_14.getString());
  FIX::MaturityTime MaturityTime_14("TZTIMEONLY_1785998775");
  msg.set(MaturityTime_14);
  Instrument_14.insert(MaturityTime_14.getString());
  FIX::MinPriceIncrement MinPriceIncrement_14;
  MinPriceIncrement_14.setString("9373106");
  msg.set(MinPriceIncrement_14);
  Instrument_14.insert(MinPriceIncrement_14.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_14;
  MinPriceIncrementAmount_14.setString("8077313");
  msg.set(MinPriceIncrementAmount_14);
  Instrument_14.insert(MinPriceIncrementAmount_14.getString());
  FIX::NTPositionLimit NTPositionLimit_14(934383892);
  msg.set(NTPositionLimit_14);
  Instrument_14.insert(NTPositionLimit_14.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_14;
  NotionalPercentageOutstanding_14.setString("1.890000");
  msg.set(NotionalPercentageOutstanding_14);
  Instrument_14.insert(NotionalPercentageOutstanding_14.getString());
  FIX::OptAttribute OptAttribute_14('4');
  msg.set(OptAttribute_14);
  Instrument_14.insert(OptAttribute_14.getString());
  FIX::OptPayoutAmount OptPayoutAmount_14;
  OptPayoutAmount_14.setString("12082197");
  msg.set(OptPayoutAmount_14);
  Instrument_14.insert(OptPayoutAmount_14.getString());
  FIX::OptPayoutType OptPayoutType_14(2);
  msg.set(OptPayoutType_14);
  Instrument_14.insert(OptPayoutType_14.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_14;
  OriginalNotionalPercentageOutstanding_14.setString("8.470000");
  msg.set(OriginalNotionalPercentageOutstanding_14);
  Instrument_14.insert(OriginalNotionalPercentageOutstanding_14.getString());
  FIX::Pool Pool_14("STRING_845041361");
  msg.set(Pool_14);
  Instrument_14.insert(Pool_14.getString());
  FIX::PositionLimit PositionLimit_14(2080153113);
  msg.set(PositionLimit_14);
  Instrument_14.insert(PositionLimit_14.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_14("STRING_INT");
  msg.set(PriceQuoteMethod_14);
  Instrument_14.insert(PriceQuoteMethod_14.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_14("STRING_272125779");
  msg.set(PriceUnitOfMeasure_14);
  Instrument_14.insert(PriceUnitOfMeasure_14.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_14;
  PriceUnitOfMeasureQty_14.setString("3586107");
  msg.set(PriceUnitOfMeasureQty_14);
  Instrument_14.insert(PriceUnitOfMeasureQty_14.getString());
  FIX::Product Product_16(7);
  msg.set(Product_16);
  Instrument_14.insert(Product_16.getString());
  FIX::ProductComplex ProductComplex_14("STRING_972786438");
  msg.set(ProductComplex_14);
  Instrument_14.insert(ProductComplex_14.getString());
  FIX::PutOrCall PutOrCall_14(1);
  msg.set(PutOrCall_14);
  Instrument_14.insert(PutOrCall_14.getString());
  FIX::RedemptionDate RedemptionDate_14("LOCALMKTDATE_2003543803");
  msg.set(RedemptionDate_14);
  Instrument_14.insert(RedemptionDate_14.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_14("STRING_1173991558");
  msg.set(RepoCollateralSecurityType_14);
  Instrument_14.insert(RepoCollateralSecurityType_14.getString());
  FIX::RepurchaseRate RepurchaseRate_14;
  RepurchaseRate_14.setString("38.520000");
  msg.set(RepurchaseRate_14);
  Instrument_14.insert(RepurchaseRate_14.getString());
  FIX::RepurchaseTerm RepurchaseTerm_14(768810753);
  msg.set(RepurchaseTerm_14);
  Instrument_14.insert(RepurchaseTerm_14.getString());
  FIX::RestructuringType RestructuringType_14("STRING_XR");
  msg.set(RestructuringType_14);
  Instrument_14.insert(RestructuringType_14.getString());
  FIX::SecurityDesc SecurityDesc_14("STRING_1322381962");
  msg.set(SecurityDesc_14);
  Instrument_14.insert(SecurityDesc_14.getString());
  FIX::SecurityExchange SecurityExchange_14("EXCHANGE_120733845");
  msg.set(SecurityExchange_14);
  Instrument_14.insert(SecurityExchange_14.getString());
  FIX::SecurityGroup SecurityGroup_14("STRING_1806441456");
  msg.set(SecurityGroup_14);
  Instrument_14.insert(SecurityGroup_14.getString());
  FIX::SecurityID SecurityID_14("STRING_1676307913");
  msg.set(SecurityID_14);
  Instrument_14.insert(SecurityID_14.getString());
  FIX::SecurityIDSource SecurityIDSource_14("STRING_G");
  msg.set(SecurityIDSource_14);
  Instrument_14.insert(SecurityIDSource_14.getString());
  FIX::SecurityStatus SecurityStatus_14("STRING_1");
  msg.set(SecurityStatus_14);
  Instrument_14.insert(SecurityStatus_14.getString());
  FIX::SecuritySubType SecuritySubType_14("STRING_339855190");
  msg.set(SecuritySubType_14);
  Instrument_14.insert(SecuritySubType_14.getString());
  FIX::SecurityType SecurityType_16("STRING_COFO");
  msg.set(SecurityType_16);
  Instrument_14.insert(SecurityType_16.getString());
  FIX::Seniority Seniority_14("STRING_SD");
  msg.set(Seniority_14);
  Instrument_14.insert(Seniority_14.getString());
  FIX::SettlMethod SettlMethod_14('C');
  msg.set(SettlMethod_14);
  Instrument_14.insert(SettlMethod_14.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_14("STRING_736240417");
  msg.set(SettleOnOpenFlag_14);
  Instrument_14.insert(SettleOnOpenFlag_14.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_14("STRING_379952698");
  msg.set(StateOrProvinceOfIssue_14);
  Instrument_14.insert(StateOrProvinceOfIssue_14.getString());
  FIX::StrikeCurrency StrikeCurrency_14("CAN");
  msg.set(StrikeCurrency_14);
  Instrument_14.insert(StrikeCurrency_14.getString());
  FIX::StrikeMultiplier StrikeMultiplier_14;
  StrikeMultiplier_14.setString("8213894");
  msg.set(StrikeMultiplier_14);
  Instrument_14.insert(StrikeMultiplier_14.getString());
  FIX::StrikePrice StrikePrice_14;
  StrikePrice_14.setString("21209739");
  msg.set(StrikePrice_14);
  Instrument_14.insert(StrikePrice_14.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_14(3);
  msg.set(StrikePriceBoundaryMethod_14);
  Instrument_14.insert(StrikePriceBoundaryMethod_14.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_14;
  StrikePriceBoundaryPrecision_14.setString("66.020000");
  msg.set(StrikePriceBoundaryPrecision_14);
  Instrument_14.insert(StrikePriceBoundaryPrecision_14.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_14(2);
  msg.set(StrikePriceDeterminationMethod_14);
  Instrument_14.insert(StrikePriceDeterminationMethod_14.getString());
  FIX::StrikeValue StrikeValue_14;
  StrikeValue_14.setString("19483378");
  msg.set(StrikeValue_14);
  Instrument_14.insert(StrikeValue_14.getString());
  FIX::Symbol Symbol_14("STRING_504096385");
  msg.set(Symbol_14);
  Instrument_14.insert(Symbol_14.getString());
  FIX::SymbolSfx SymbolSfx_14("STRING_CD");
  msg.set(SymbolSfx_14);
  Instrument_14.insert(SymbolSfx_14.getString());
  FIX::TimeUnit TimeUnit_14("STRING_Mo");
  msg.set(TimeUnit_14);
  Instrument_14.insert(TimeUnit_14.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_14(1);
  msg.set(UnderlyingPriceDeterminationMethod_14);
  Instrument_14.insert(UnderlyingPriceDeterminationMethod_14.getString());
  FIX::UnitOfMeasure UnitOfMeasure_14("STRING_oz_tr");
  msg.set(UnitOfMeasure_14);
  Instrument_14.insert(UnitOfMeasure_14.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_14;
  UnitOfMeasureQty_14.setString("3324321");
  msg.set(UnitOfMeasureQty_14);
  Instrument_14.insert(UnitOfMeasureQty_14.getString());
  FIX::ValuationMethod ValuationMethod_14("STRING_FUTDA");
  msg.set(ValuationMethod_14);
  Instrument_14.insert(ValuationMethod_14.getString());
  all_values.push_back(Instrument_14);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::Confirmation::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_24;
    FIX::ComplexEventCondition ComplexEventCondition_24(2);
    noComplexEvents_0_0.set(ComplexEventCondition_24);
    ComplexEvents_NoComplexEvents_24.insert(ComplexEventCondition_24.getString());
    FIX::ComplexEventPrice ComplexEventPrice_24;
    ComplexEventPrice_24.setString("17390490");
    noComplexEvents_0_0.set(ComplexEventPrice_24);
    ComplexEvents_NoComplexEvents_24.insert(ComplexEventPrice_24.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_24(5);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_24);
    ComplexEvents_NoComplexEvents_24.insert(ComplexEventPriceBoundaryMethod_24.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_24;
    ComplexEventPriceBoundaryPrecision_24.setString("79.450000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_24);
    ComplexEvents_NoComplexEvents_24.insert(ComplexEventPriceBoundaryPrecision_24.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_24(1);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_24);
    ComplexEvents_NoComplexEvents_24.insert(ComplexEventPriceTimeType_24.getString());
    FIX::ComplexEventType ComplexEventType_24(2);
    noComplexEvents_0_0.set(ComplexEventType_24);
    ComplexEvents_NoComplexEvents_24.insert(ComplexEventType_24.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_24;
    ComplexOptPayoutAmount_24.setString("15119522");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_24);
    ComplexEvents_NoComplexEvents_24.insert(ComplexOptPayoutAmount_24.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_24);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::Confirmation::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_44;
      FIX::ComplexEventEndDate ComplexEventEndDate_44(FIX::UTCTIMESTAMP(17, 26, 9, 27, 4, 2008));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_44);
      ComplexEventDates_NoComplexEventDates_44.insert(ComplexEventEndDate_44.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_44(FIX::UTCTIMESTAMP(14, 31, 22, 4, 10, 2017));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_44);
      ComplexEventDates_NoComplexEventDates_44.insert(ComplexEventStartDate_44.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_44);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::Confirmation::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_89;
        FIX::ComplexEventEndTime ComplexEventEndTime_89(FIX::UTCTIMEONLY(7, 7, 27));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_89);
        ComplexEventTimes_NoComplexEventTimes_89.insert(ComplexEventEndTime_89.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_89(FIX::UTCTIMEONLY(13, 39, 34));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_89);
        ComplexEventTimes_NoComplexEventTimes_89.insert(ComplexEventStartTime_89.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_89);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::Confirmation::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_45;
      FIX::ComplexEventEndDate ComplexEventEndDate_45(FIX::UTCTIMESTAMP(4, 5, 50, 14, 2, 2015));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_45);
      ComplexEventDates_NoComplexEventDates_45.insert(ComplexEventEndDate_45.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_45(FIX::UTCTIMESTAMP(3, 54, 13, 0, 11, 2016));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_45);
      ComplexEventDates_NoComplexEventDates_45.insert(ComplexEventStartDate_45.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_45);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::Confirmation::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_90;
        FIX::ComplexEventEndTime ComplexEventEndTime_90(FIX::UTCTIMEONLY(11, 43, 2));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_90);
        ComplexEventTimes_NoComplexEventTimes_90.insert(ComplexEventEndTime_90.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_90(FIX::UTCTIMEONLY(9, 25, 7));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_90);
        ComplexEventTimes_NoComplexEventTimes_90.insert(ComplexEventStartTime_90.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_90);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::Confirmation::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_46;
      FIX::ComplexEventEndDate ComplexEventEndDate_46(FIX::UTCTIMESTAMP(8, 14, 18, 1, 9, 2009));
      noComplexEventDates_0_1_2.set(ComplexEventEndDate_46);
      ComplexEventDates_NoComplexEventDates_46.insert(ComplexEventEndDate_46.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_46(FIX::UTCTIMESTAMP(8, 5, 37, 10, 12, 2000));
      noComplexEventDates_0_1_2.set(ComplexEventStartDate_46);
      ComplexEventDates_NoComplexEventDates_46.insert(ComplexEventStartDate_46.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_46);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::Confirmation::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_91;
        FIX::ComplexEventEndTime ComplexEventEndTime_91(FIX::UTCTIMEONLY(1, 6, 35));
        noComplexEventTimes_0_2_2_0.set(ComplexEventEndTime_91);
        ComplexEventTimes_NoComplexEventTimes_91.insert(ComplexEventEndTime_91.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_91(FIX::UTCTIMEONLY(20, 52, 54));
        noComplexEventTimes_0_2_2_0.set(ComplexEventStartTime_91);
        ComplexEventTimes_NoComplexEventTimes_91.insert(ComplexEventStartTime_91.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_91);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      {
        FIX50SP2::Confirmation::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_92;
        FIX::ComplexEventEndTime ComplexEventEndTime_92(FIX::UTCTIMEONLY(19, 29, 26));
        noComplexEventTimes_0_2_2_1.set(ComplexEventEndTime_92);
        ComplexEventTimes_NoComplexEventTimes_92.insert(ComplexEventEndTime_92.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_92(FIX::UTCTIMEONLY(14, 43, 42));
        noComplexEventTimes_0_2_2_1.set(ComplexEventStartTime_92);
        ComplexEventTimes_NoComplexEventTimes_92.insert(ComplexEventStartTime_92.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_92);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_1);
      }
      {
        FIX50SP2::Confirmation::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_93;
        FIX::ComplexEventEndTime ComplexEventEndTime_93(FIX::UTCTIMEONLY(7, 48, 48));
        noComplexEventTimes_0_2_2_2.set(ComplexEventEndTime_93);
        ComplexEventTimes_NoComplexEventTimes_93.insert(ComplexEventEndTime_93.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_93(FIX::UTCTIMEONLY(0, 38, 24));
        noComplexEventTimes_0_2_2_2.set(ComplexEventStartTime_93);
        ComplexEventTimes_NoComplexEventTimes_93.insert(ComplexEventStartTime_93.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_93);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::Confirmation::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_26;
    FIX::EventDate EventDate_26("LOCALMKTDATE_1631549503");
    noEvents_0_0.set(EventDate_26);
    EvntGrp_NoEvents_26.insert(EventDate_26.getString());
    FIX::EventPx EventPx_26;
    EventPx_26.setString("15451179");
    noEvents_0_0.set(EventPx_26);
    EvntGrp_NoEvents_26.insert(EventPx_26.getString());
    FIX::EventText EventText_26("STRING_966858871");
    noEvents_0_0.set(EventText_26);
    EvntGrp_NoEvents_26.insert(EventText_26.getString());
    FIX::EventTime EventTime_26(FIX::UTCTIMESTAMP(23, 43, 33, 24, 6, 2003));
    noEvents_0_0.set(EventTime_26);
    EvntGrp_NoEvents_26.insert(EventTime_26.getString());
    FIX::EventType EventType_26(6);
    noEvents_0_0.set(EventType_26);
    EvntGrp_NoEvents_26.insert(EventType_26.getString());
    all_values.push_back(EvntGrp_NoEvents_26);

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::Confirmation::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_28;
    FIX::InstrumentPartyID InstrumentPartyID_28("STRING_473165873");
    noInstrumentParties_0_0.set(InstrumentPartyID_28);
    InstrumentParties_NoInstrumentParties_28.insert(InstrumentPartyID_28.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_28('3');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_28);
    InstrumentParties_NoInstrumentParties_28.insert(InstrumentPartyIDSource_28.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_28(252818501);
    noInstrumentParties_0_0.set(InstrumentPartyRole_28);
    InstrumentParties_NoInstrumentParties_28.insert(InstrumentPartyRole_28.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_28);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::Confirmation::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_56;
      FIX::InstrumentPartySubID InstrumentPartySubID_56("STRING_387171009");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_56);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_56.insert(InstrumentPartySubID_56.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_56(1223804227);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_56);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_56.insert(InstrumentPartySubIDType_56.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_56);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::Confirmation::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_29;
    FIX::InstrumentPartyID InstrumentPartyID_29("STRING_353530214");
    noInstrumentParties_0_1.set(InstrumentPartyID_29);
    InstrumentParties_NoInstrumentParties_29.insert(InstrumentPartyID_29.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_29('1');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_29);
    InstrumentParties_NoInstrumentParties_29.insert(InstrumentPartyIDSource_29.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_29(1738596770);
    noInstrumentParties_0_1.set(InstrumentPartyRole_29);
    InstrumentParties_NoInstrumentParties_29.insert(InstrumentPartyRole_29.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_29);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::Confirmation::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_57;
      FIX::InstrumentPartySubID InstrumentPartySubID_57("STRING_2041489217");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_57);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_57.insert(InstrumentPartySubID_57.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_57(2127840105);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_57);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_57.insert(InstrumentPartySubIDType_57.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_57);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::Confirmation::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_58;
      FIX::InstrumentPartySubID InstrumentPartySubID_58("STRING_574482097");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_58);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_58.insert(InstrumentPartySubID_58.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_58(248886298);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_58);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_58.insert(InstrumentPartySubIDType_58.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_58);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::Confirmation::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_59;
      FIX::InstrumentPartySubID InstrumentPartySubID_59("STRING_490654769");
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubID_59);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_59.insert(InstrumentPartySubID_59.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_59(1056864481);
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubIDType_59);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_59.insert(InstrumentPartySubIDType_59.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_59);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_2);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::Confirmation::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_31;
    FIX::SecurityAltID SecurityAltID_31("STRING_311080365");
    noSecurityAltID_0_0.set(SecurityAltID_31);
    SecAltIDGrp_NoSecurityAltID_31.insert(SecurityAltID_31.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_31("STRING_1587511594");
    noSecurityAltID_0_0.set(SecurityAltIDSource_31);
    SecAltIDGrp_NoSecurityAltID_31.insert(SecurityAltIDSource_31.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_31);

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_28;
  FIX::SecurityXML SecurityXML_29("XMLDATA_2088331759");
  msg.set(SecurityXML_29);
  FIX::SecurityXMLLen SecurityXMLLen_14(1856198318);
  msg.set(SecurityXMLLen_14);
  FIX::SecurityXMLSchema SecurityXMLSchema_14("STRING_406886818");
  msg.set(SecurityXMLSchema_14);
  SecurityXML_28.insert(SecurityXMLSchema_14.getString());
  all_values.push_back(SecurityXML_28);

  // InstrumentExtension
  multiset<string> InstrumentExtension_3;
  FIX::DeliveryForm DeliveryForm_3(1);
  msg.set(DeliveryForm_3);
  InstrumentExtension_3.insert(DeliveryForm_3.getString());
  FIX::PctAtRisk PctAtRisk_3;
  PctAtRisk_3.setString("96.850000");
  msg.set(PctAtRisk_3);
  InstrumentExtension_3.insert(PctAtRisk_3.getString());
  all_values.push_back(InstrumentExtension_3);

  // AttrbGrp
  // Group AttrbGrp.NoInstrAttrib
  {
    FIX50SP2::Confirmation::NoInstrAttrib noInstrAttrib_0_0;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_7;
    FIX::InstrAttribType InstrAttribType_7(27);
    noInstrAttrib_0_0.set(InstrAttribType_7);
    AttrbGrp_NoInstrAttrib_7.insert(InstrAttribType_7.getString());
    FIX::InstrAttribValue InstrAttribValue_7("STRING_1931886549");
    noInstrAttrib_0_0.set(InstrAttribValue_7);
    AttrbGrp_NoInstrAttrib_7.insert(InstrAttribValue_7.getString());
    all_values.push_back(AttrbGrp_NoInstrAttrib_7);

    msg.addGroup(noInstrAttrib_0_0);
  }
  {
    FIX50SP2::Confirmation::NoInstrAttrib noInstrAttrib_0_1;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_8;
    FIX::InstrAttribType InstrAttribType_8(15);
    noInstrAttrib_0_1.set(InstrAttribType_8);
    AttrbGrp_NoInstrAttrib_8.insert(InstrAttribType_8.getString());
    FIX::InstrAttribValue InstrAttribValue_8("STRING_1166171285");
    noInstrAttrib_0_1.set(InstrAttribValue_8);
    AttrbGrp_NoInstrAttrib_8.insert(InstrAttribValue_8.getString());
    all_values.push_back(AttrbGrp_NoInstrAttrib_8);

    msg.addGroup(noInstrAttrib_0_1);
  }
  {
    FIX50SP2::Confirmation::NoInstrAttrib noInstrAttrib_0_2;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_9;
    FIX::InstrAttribType InstrAttribType_9(26);
    noInstrAttrib_0_2.set(InstrAttribType_9);
    AttrbGrp_NoInstrAttrib_9.insert(InstrAttribType_9.getString());
    FIX::InstrAttribValue InstrAttribValue_9("STRING_1948878999");
    noInstrAttrib_0_2.set(InstrAttribValue_9);
    AttrbGrp_NoInstrAttrib_9.insert(InstrAttribValue_9.getString());
    all_values.push_back(AttrbGrp_NoInstrAttrib_9);

    msg.addGroup(noInstrAttrib_0_2);
  }
  // MiscFeesGrp
  // Group MiscFeesGrp.NoMiscFees
  {
    FIX50SP2::Confirmation::NoMiscFees noMiscFees_0_0;
    // MiscFeesGrp.NoMiscFees
    multiset<string> MiscFeesGrp_NoMiscFees_19;
    FIX::MiscFeeAmt MiscFeeAmt_19;
    MiscFeeAmt_19.setString("1197848");
    noMiscFees_0_0.set(MiscFeeAmt_19);
    MiscFeesGrp_NoMiscFees_19.insert(MiscFeeAmt_19.getString());
    FIX::MiscFeeBasis MiscFeeBasis_19(0);
    noMiscFees_0_0.set(MiscFeeBasis_19);
    MiscFeesGrp_NoMiscFees_19.insert(MiscFeeBasis_19.getString());
    FIX::MiscFeeCurr MiscFeeCurr_19("CAN");
    noMiscFees_0_0.set(MiscFeeCurr_19);
    MiscFeesGrp_NoMiscFees_19.insert(MiscFeeCurr_19.getString());
    FIX::MiscFeeType MiscFeeType_19("STRING_10");
    noMiscFees_0_0.set(MiscFeeType_19);
    MiscFeesGrp_NoMiscFees_19.insert(MiscFeeType_19.getString());
    all_values.push_back(MiscFeesGrp_NoMiscFees_19);

    msg.addGroup(noMiscFees_0_0);
  }
  {
    FIX50SP2::Confirmation::NoMiscFees noMiscFees_0_1;
    // MiscFeesGrp.NoMiscFees
    multiset<string> MiscFeesGrp_NoMiscFees_20;
    FIX::MiscFeeAmt MiscFeeAmt_20;
    MiscFeeAmt_20.setString("10096630");
    noMiscFees_0_1.set(MiscFeeAmt_20);
    MiscFeesGrp_NoMiscFees_20.insert(MiscFeeAmt_20.getString());
    FIX::MiscFeeBasis MiscFeeBasis_20(0);
    noMiscFees_0_1.set(MiscFeeBasis_20);
    MiscFeesGrp_NoMiscFees_20.insert(MiscFeeBasis_20.getString());
    FIX::MiscFeeCurr MiscFeeCurr_20("CAN");
    noMiscFees_0_1.set(MiscFeeCurr_20);
    MiscFeesGrp_NoMiscFees_20.insert(MiscFeeCurr_20.getString());
    FIX::MiscFeeType MiscFeeType_20("STRING_7");
    noMiscFees_0_1.set(MiscFeeType_20);
    MiscFeesGrp_NoMiscFees_20.insert(MiscFeeType_20.getString());
    all_values.push_back(MiscFeesGrp_NoMiscFees_20);

    msg.addGroup(noMiscFees_0_1);
  }
  // OrdAllocGrp
  // Group OrdAllocGrp.NoOrders
  {
    FIX50SP2::Confirmation::NoOrders noOrders_0_0;
    // OrdAllocGrp.NoOrders
    multiset<string> OrdAllocGrp_NoOrders_7;
    FIX::ClOrdID ClOrdID_13("STRING_1172206878");
    noOrders_0_0.set(ClOrdID_13);
    OrdAllocGrp_NoOrders_7.insert(ClOrdID_13.getString());
    FIX::ListID ListID_9("STRING_210398482");
    noOrders_0_0.set(ListID_9);
    OrdAllocGrp_NoOrders_7.insert(ListID_9.getString());
    FIX::OrderAvgPx OrderAvgPx_7;
    OrderAvgPx_7.setString("13401424");
    noOrders_0_0.set(OrderAvgPx_7);
    OrdAllocGrp_NoOrders_7.insert(OrderAvgPx_7.getString());
    FIX::OrderBookingQty OrderBookingQty_7;
    OrderBookingQty_7.setString("815877");
    noOrders_0_0.set(OrderBookingQty_7);
    OrdAllocGrp_NoOrders_7.insert(OrderBookingQty_7.getString());
    FIX::OrderID OrderID_13("STRING_667180738");
    noOrders_0_0.set(OrderID_13);
    OrdAllocGrp_NoOrders_7.insert(OrderID_13.getString());
    FIX::OrderQty OrderQty_7;
    OrderQty_7.setString("16512227");
    noOrders_0_0.set(OrderQty_7);
    OrdAllocGrp_NoOrders_7.insert(OrderQty_7.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_13("STRING_1669099306");
    noOrders_0_0.set(SecondaryClOrdID_13);
    OrdAllocGrp_NoOrders_7.insert(SecondaryClOrdID_13.getString());
    FIX::SecondaryOrderID SecondaryOrderID_13("STRING_608028850");
    noOrders_0_0.set(SecondaryOrderID_13);
    OrdAllocGrp_NoOrders_7.insert(SecondaryOrderID_13.getString());
    all_values.push_back(OrdAllocGrp_NoOrders_7);

    // NestedParties2
    // Group NestedParties2.NoNested2PartyIDs
    {
      FIX50SP2::Confirmation::NoOrders::NoNested2PartyIDs noNested2PartyIDs_0_1_0;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_14;
      FIX::Nested2PartyID Nested2PartyID_14("STRING_2075986124");
      noNested2PartyIDs_0_1_0.set(Nested2PartyID_14);
      NestedParties2_NoNested2PartyIDs_14.insert(Nested2PartyID_14.getString());
      FIX::Nested2PartyIDSource Nested2PartyIDSource_14('5');
      noNested2PartyIDs_0_1_0.set(Nested2PartyIDSource_14);
      NestedParties2_NoNested2PartyIDs_14.insert(Nested2PartyIDSource_14.getString());
      FIX::Nested2PartyRole Nested2PartyRole_14(1047543501);
      noNested2PartyIDs_0_1_0.set(Nested2PartyRole_14);
      NestedParties2_NoNested2PartyIDs_14.insert(Nested2PartyRole_14.getString());
      all_values.push_back(NestedParties2_NoNested2PartyIDs_14);

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::Confirmation::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_30;
        FIX::Nested2PartySubID Nested2PartySubID_30("STRING_929353468");
        noNested2PartySubIDs_0_0_2_0.set(Nested2PartySubID_30);
        NstdPtys2SubGrp_NoNested2PartySubIDs_30.insert(Nested2PartySubID_30.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_30(831946402);
        noNested2PartySubIDs_0_0_2_0.set(Nested2PartySubIDType_30);
        NstdPtys2SubGrp_NoNested2PartySubIDs_30.insert(Nested2PartySubIDType_30.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_30);

        noNested2PartyIDs_0_1_0.addGroup(noNested2PartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::Confirmation::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_2_1;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_31;
        FIX::Nested2PartySubID Nested2PartySubID_31("STRING_1706617831");
        noNested2PartySubIDs_0_0_2_1.set(Nested2PartySubID_31);
        NstdPtys2SubGrp_NoNested2PartySubIDs_31.insert(Nested2PartySubID_31.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_31(2095524753);
        noNested2PartySubIDs_0_0_2_1.set(Nested2PartySubIDType_31);
        NstdPtys2SubGrp_NoNested2PartySubIDs_31.insert(Nested2PartySubIDType_31.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_31);

        noNested2PartyIDs_0_1_0.addGroup(noNested2PartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::Confirmation::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_2_2;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_32;
        FIX::Nested2PartySubID Nested2PartySubID_32("STRING_620005149");
        noNested2PartySubIDs_0_0_2_2.set(Nested2PartySubID_32);
        NstdPtys2SubGrp_NoNested2PartySubIDs_32.insert(Nested2PartySubID_32.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_32(1508013182);
        noNested2PartySubIDs_0_0_2_2.set(Nested2PartySubIDType_32);
        NstdPtys2SubGrp_NoNested2PartySubIDs_32.insert(Nested2PartySubIDType_32.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_32);

        noNested2PartyIDs_0_1_0.addGroup(noNested2PartySubIDs_0_0_2_2);
      }
      noOrders_0_0.addGroup(noNested2PartyIDs_0_1_0);
    }
    {
      FIX50SP2::Confirmation::NoOrders::NoNested2PartyIDs noNested2PartyIDs_0_1_1;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_15;
      FIX::Nested2PartyID Nested2PartyID_15("STRING_1587378263");
      noNested2PartyIDs_0_1_1.set(Nested2PartyID_15);
      NestedParties2_NoNested2PartyIDs_15.insert(Nested2PartyID_15.getString());
      FIX::Nested2PartyIDSource Nested2PartyIDSource_15('7');
      noNested2PartyIDs_0_1_1.set(Nested2PartyIDSource_15);
      NestedParties2_NoNested2PartyIDs_15.insert(Nested2PartyIDSource_15.getString());
      FIX::Nested2PartyRole Nested2PartyRole_15(1562227034);
      noNested2PartyIDs_0_1_1.set(Nested2PartyRole_15);
      NestedParties2_NoNested2PartyIDs_15.insert(Nested2PartyRole_15.getString());
      all_values.push_back(NestedParties2_NoNested2PartyIDs_15);

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::Confirmation::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_33;
        FIX::Nested2PartySubID Nested2PartySubID_33("STRING_1246745771");
        noNested2PartySubIDs_0_1_2_0.set(Nested2PartySubID_33);
        NstdPtys2SubGrp_NoNested2PartySubIDs_33.insert(Nested2PartySubID_33.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_33(692761465);
        noNested2PartySubIDs_0_1_2_0.set(Nested2PartySubIDType_33);
        NstdPtys2SubGrp_NoNested2PartySubIDs_33.insert(Nested2PartySubIDType_33.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_33);

        noNested2PartyIDs_0_1_1.addGroup(noNested2PartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::Confirmation::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_2_1;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_34;
        FIX::Nested2PartySubID Nested2PartySubID_34("STRING_1105690546");
        noNested2PartySubIDs_0_1_2_1.set(Nested2PartySubID_34);
        NstdPtys2SubGrp_NoNested2PartySubIDs_34.insert(Nested2PartySubID_34.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_34(1314252386);
        noNested2PartySubIDs_0_1_2_1.set(Nested2PartySubIDType_34);
        NstdPtys2SubGrp_NoNested2PartySubIDs_34.insert(Nested2PartySubIDType_34.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_34);

        noNested2PartyIDs_0_1_1.addGroup(noNested2PartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::Confirmation::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_2_2;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_35;
        FIX::Nested2PartySubID Nested2PartySubID_35("STRING_1561892666");
        noNested2PartySubIDs_0_1_2_2.set(Nested2PartySubID_35);
        NstdPtys2SubGrp_NoNested2PartySubIDs_35.insert(Nested2PartySubID_35.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_35(1703415327);
        noNested2PartySubIDs_0_1_2_2.set(Nested2PartySubIDType_35);
        NstdPtys2SubGrp_NoNested2PartySubIDs_35.insert(Nested2PartySubIDType_35.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_35);

        noNested2PartyIDs_0_1_1.addGroup(noNested2PartySubIDs_0_1_2_2);
      }
      noOrders_0_0.addGroup(noNested2PartyIDs_0_1_1);
    }
    {
      FIX50SP2::Confirmation::NoOrders::NoNested2PartyIDs noNested2PartyIDs_0_1_2;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_16;
      FIX::Nested2PartyID Nested2PartyID_16("STRING_1275764571");
      noNested2PartyIDs_0_1_2.set(Nested2PartyID_16);
      NestedParties2_NoNested2PartyIDs_16.insert(Nested2PartyID_16.getString());
      FIX::Nested2PartyIDSource Nested2PartyIDSource_16('2');
      noNested2PartyIDs_0_1_2.set(Nested2PartyIDSource_16);
      NestedParties2_NoNested2PartyIDs_16.insert(Nested2PartyIDSource_16.getString());
      FIX::Nested2PartyRole Nested2PartyRole_16(728138557);
      noNested2PartyIDs_0_1_2.set(Nested2PartyRole_16);
      NestedParties2_NoNested2PartyIDs_16.insert(Nested2PartyRole_16.getString());
      all_values.push_back(NestedParties2_NoNested2PartyIDs_16);

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::Confirmation::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_2_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_36;
        FIX::Nested2PartySubID Nested2PartySubID_36("STRING_1604039103");
        noNested2PartySubIDs_0_2_2_0.set(Nested2PartySubID_36);
        NstdPtys2SubGrp_NoNested2PartySubIDs_36.insert(Nested2PartySubID_36.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_36(809726268);
        noNested2PartySubIDs_0_2_2_0.set(Nested2PartySubIDType_36);
        NstdPtys2SubGrp_NoNested2PartySubIDs_36.insert(Nested2PartySubIDType_36.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_36);

        noNested2PartyIDs_0_1_2.addGroup(noNested2PartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::Confirmation::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_2_2_1;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_37;
        FIX::Nested2PartySubID Nested2PartySubID_37("STRING_5860144");
        noNested2PartySubIDs_0_2_2_1.set(Nested2PartySubID_37);
        NstdPtys2SubGrp_NoNested2PartySubIDs_37.insert(Nested2PartySubID_37.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_37(1107778248);
        noNested2PartySubIDs_0_2_2_1.set(Nested2PartySubIDType_37);
        NstdPtys2SubGrp_NoNested2PartySubIDs_37.insert(Nested2PartySubIDType_37.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_37);

        noNested2PartyIDs_0_1_2.addGroup(noNested2PartySubIDs_0_2_2_1);
      }
      noOrders_0_0.addGroup(noNested2PartyIDs_0_1_2);
    }
    msg.addGroup(noOrders_0_0);
  }
  {
    FIX50SP2::Confirmation::NoOrders noOrders_0_1;
    // OrdAllocGrp.NoOrders
    multiset<string> OrdAllocGrp_NoOrders_8;
    FIX::ClOrdID ClOrdID_14("STRING_331341926");
    noOrders_0_1.set(ClOrdID_14);
    OrdAllocGrp_NoOrders_8.insert(ClOrdID_14.getString());
    FIX::ListID ListID_10("STRING_613888994");
    noOrders_0_1.set(ListID_10);
    OrdAllocGrp_NoOrders_8.insert(ListID_10.getString());
    FIX::OrderAvgPx OrderAvgPx_8;
    OrderAvgPx_8.setString("3202320");
    noOrders_0_1.set(OrderAvgPx_8);
    OrdAllocGrp_NoOrders_8.insert(OrderAvgPx_8.getString());
    FIX::OrderBookingQty OrderBookingQty_8;
    OrderBookingQty_8.setString("2598444");
    noOrders_0_1.set(OrderBookingQty_8);
    OrdAllocGrp_NoOrders_8.insert(OrderBookingQty_8.getString());
    FIX::OrderID OrderID_14("STRING_1205939266");
    noOrders_0_1.set(OrderID_14);
    OrdAllocGrp_NoOrders_8.insert(OrderID_14.getString());
    FIX::OrderQty OrderQty_8;
    OrderQty_8.setString("13677755");
    noOrders_0_1.set(OrderQty_8);
    OrdAllocGrp_NoOrders_8.insert(OrderQty_8.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_14("STRING_1750719919");
    noOrders_0_1.set(SecondaryClOrdID_14);
    OrdAllocGrp_NoOrders_8.insert(SecondaryClOrdID_14.getString());
    FIX::SecondaryOrderID SecondaryOrderID_14("STRING_2135292735");
    noOrders_0_1.set(SecondaryOrderID_14);
    OrdAllocGrp_NoOrders_8.insert(SecondaryOrderID_14.getString());
    all_values.push_back(OrdAllocGrp_NoOrders_8);

    // NestedParties2
    // Group NestedParties2.NoNested2PartyIDs
    {
      FIX50SP2::Confirmation::NoOrders::NoNested2PartyIDs noNested2PartyIDs_1_1_0;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_17;
      FIX::Nested2PartyID Nested2PartyID_17("STRING_1309854102");
      noNested2PartyIDs_1_1_0.set(Nested2PartyID_17);
      NestedParties2_NoNested2PartyIDs_17.insert(Nested2PartyID_17.getString());
      FIX::Nested2PartyIDSource Nested2PartyIDSource_17('2');
      noNested2PartyIDs_1_1_0.set(Nested2PartyIDSource_17);
      NestedParties2_NoNested2PartyIDs_17.insert(Nested2PartyIDSource_17.getString());
      FIX::Nested2PartyRole Nested2PartyRole_17(672243469);
      noNested2PartyIDs_1_1_0.set(Nested2PartyRole_17);
      NestedParties2_NoNested2PartyIDs_17.insert(Nested2PartyRole_17.getString());
      all_values.push_back(NestedParties2_NoNested2PartyIDs_17);

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::Confirmation::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_38;
        FIX::Nested2PartySubID Nested2PartySubID_38("STRING_1523228456");
        noNested2PartySubIDs_1_0_2_0.set(Nested2PartySubID_38);
        NstdPtys2SubGrp_NoNested2PartySubIDs_38.insert(Nested2PartySubID_38.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_38(1412033425);
        noNested2PartySubIDs_1_0_2_0.set(Nested2PartySubIDType_38);
        NstdPtys2SubGrp_NoNested2PartySubIDs_38.insert(Nested2PartySubIDType_38.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_38);

        noNested2PartyIDs_1_1_0.addGroup(noNested2PartySubIDs_1_0_2_0);
      }
      noOrders_0_1.addGroup(noNested2PartyIDs_1_1_0);
    }
    msg.addGroup(noOrders_0_1);
  }
  {
    FIX50SP2::Confirmation::NoOrders noOrders_0_2;
    // OrdAllocGrp.NoOrders
    multiset<string> OrdAllocGrp_NoOrders_9;
    FIX::ClOrdID ClOrdID_15("STRING_85127022");
    noOrders_0_2.set(ClOrdID_15);
    OrdAllocGrp_NoOrders_9.insert(ClOrdID_15.getString());
    FIX::ListID ListID_11("STRING_1619255929");
    noOrders_0_2.set(ListID_11);
    OrdAllocGrp_NoOrders_9.insert(ListID_11.getString());
    FIX::OrderAvgPx OrderAvgPx_9;
    OrderAvgPx_9.setString("5112955");
    noOrders_0_2.set(OrderAvgPx_9);
    OrdAllocGrp_NoOrders_9.insert(OrderAvgPx_9.getString());
    FIX::OrderBookingQty OrderBookingQty_9;
    OrderBookingQty_9.setString("7778884");
    noOrders_0_2.set(OrderBookingQty_9);
    OrdAllocGrp_NoOrders_9.insert(OrderBookingQty_9.getString());
    FIX::OrderID OrderID_15("STRING_577462827");
    noOrders_0_2.set(OrderID_15);
    OrdAllocGrp_NoOrders_9.insert(OrderID_15.getString());
    FIX::OrderQty OrderQty_9;
    OrderQty_9.setString("18255479");
    noOrders_0_2.set(OrderQty_9);
    OrdAllocGrp_NoOrders_9.insert(OrderQty_9.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_15("STRING_192297505");
    noOrders_0_2.set(SecondaryClOrdID_15);
    OrdAllocGrp_NoOrders_9.insert(SecondaryClOrdID_15.getString());
    FIX::SecondaryOrderID SecondaryOrderID_15("STRING_133394506");
    noOrders_0_2.set(SecondaryOrderID_15);
    OrdAllocGrp_NoOrders_9.insert(SecondaryOrderID_15.getString());
    all_values.push_back(OrdAllocGrp_NoOrders_9);

    // NestedParties2
    // Group NestedParties2.NoNested2PartyIDs
    {
      FIX50SP2::Confirmation::NoOrders::NoNested2PartyIDs noNested2PartyIDs_2_1_0;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_18;
      FIX::Nested2PartyID Nested2PartyID_18("STRING_456194181");
      noNested2PartyIDs_2_1_0.set(Nested2PartyID_18);
      NestedParties2_NoNested2PartyIDs_18.insert(Nested2PartyID_18.getString());
      FIX::Nested2PartyIDSource Nested2PartyIDSource_18('8');
      noNested2PartyIDs_2_1_0.set(Nested2PartyIDSource_18);
      NestedParties2_NoNested2PartyIDs_18.insert(Nested2PartyIDSource_18.getString());
      FIX::Nested2PartyRole Nested2PartyRole_18(292508263);
      noNested2PartyIDs_2_1_0.set(Nested2PartyRole_18);
      NestedParties2_NoNested2PartyIDs_18.insert(Nested2PartyRole_18.getString());
      all_values.push_back(NestedParties2_NoNested2PartyIDs_18);

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::Confirmation::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_0_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_39;
        FIX::Nested2PartySubID Nested2PartySubID_39("STRING_1671259332");
        noNested2PartySubIDs_2_0_2_0.set(Nested2PartySubID_39);
        NstdPtys2SubGrp_NoNested2PartySubIDs_39.insert(Nested2PartySubID_39.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_39(298368407);
        noNested2PartySubIDs_2_0_2_0.set(Nested2PartySubIDType_39);
        NstdPtys2SubGrp_NoNested2PartySubIDs_39.insert(Nested2PartySubIDType_39.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_39);

        noNested2PartyIDs_2_1_0.addGroup(noNested2PartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::Confirmation::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_0_2_1;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_40;
        FIX::Nested2PartySubID Nested2PartySubID_40("STRING_1020527885");
        noNested2PartySubIDs_2_0_2_1.set(Nested2PartySubID_40);
        NstdPtys2SubGrp_NoNested2PartySubIDs_40.insert(Nested2PartySubID_40.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_40(2002601258);
        noNested2PartySubIDs_2_0_2_1.set(Nested2PartySubIDType_40);
        NstdPtys2SubGrp_NoNested2PartySubIDs_40.insert(Nested2PartySubIDType_40.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_40);

        noNested2PartyIDs_2_1_0.addGroup(noNested2PartySubIDs_2_0_2_1);
      }
      noOrders_0_2.addGroup(noNested2PartyIDs_2_1_0);
    }
    {
      FIX50SP2::Confirmation::NoOrders::NoNested2PartyIDs noNested2PartyIDs_2_1_1;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_19;
      FIX::Nested2PartyID Nested2PartyID_19("STRING_912257401");
      noNested2PartyIDs_2_1_1.set(Nested2PartyID_19);
      NestedParties2_NoNested2PartyIDs_19.insert(Nested2PartyID_19.getString());
      FIX::Nested2PartyIDSource Nested2PartyIDSource_19('1');
      noNested2PartyIDs_2_1_1.set(Nested2PartyIDSource_19);
      NestedParties2_NoNested2PartyIDs_19.insert(Nested2PartyIDSource_19.getString());
      FIX::Nested2PartyRole Nested2PartyRole_19(114962013);
      noNested2PartyIDs_2_1_1.set(Nested2PartyRole_19);
      NestedParties2_NoNested2PartyIDs_19.insert(Nested2PartyRole_19.getString());
      all_values.push_back(NestedParties2_NoNested2PartyIDs_19);

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::Confirmation::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_1_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_41;
        FIX::Nested2PartySubID Nested2PartySubID_41("STRING_561051866");
        noNested2PartySubIDs_2_1_2_0.set(Nested2PartySubID_41);
        NstdPtys2SubGrp_NoNested2PartySubIDs_41.insert(Nested2PartySubID_41.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_41(1865681932);
        noNested2PartySubIDs_2_1_2_0.set(Nested2PartySubIDType_41);
        NstdPtys2SubGrp_NoNested2PartySubIDs_41.insert(Nested2PartySubIDType_41.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_41);

        noNested2PartyIDs_2_1_1.addGroup(noNested2PartySubIDs_2_1_2_0);
      }
      noOrders_0_2.addGroup(noNested2PartyIDs_2_1_1);
    }
    {
      FIX50SP2::Confirmation::NoOrders::NoNested2PartyIDs noNested2PartyIDs_2_1_2;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_20;
      FIX::Nested2PartyID Nested2PartyID_20("STRING_2106005755");
      noNested2PartyIDs_2_1_2.set(Nested2PartyID_20);
      NestedParties2_NoNested2PartyIDs_20.insert(Nested2PartyID_20.getString());
      FIX::Nested2PartyIDSource Nested2PartyIDSource_20('6');
      noNested2PartyIDs_2_1_2.set(Nested2PartyIDSource_20);
      NestedParties2_NoNested2PartyIDs_20.insert(Nested2PartyIDSource_20.getString());
      FIX::Nested2PartyRole Nested2PartyRole_20(1028052387);
      noNested2PartyIDs_2_1_2.set(Nested2PartyRole_20);
      NestedParties2_NoNested2PartyIDs_20.insert(Nested2PartyRole_20.getString());
      all_values.push_back(NestedParties2_NoNested2PartyIDs_20);

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::Confirmation::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_2_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_42;
        FIX::Nested2PartySubID Nested2PartySubID_42("STRING_1285533655");
        noNested2PartySubIDs_2_2_2_0.set(Nested2PartySubID_42);
        NstdPtys2SubGrp_NoNested2PartySubIDs_42.insert(Nested2PartySubID_42.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_42(1698436023);
        noNested2PartySubIDs_2_2_2_0.set(Nested2PartySubIDType_42);
        NstdPtys2SubGrp_NoNested2PartySubIDs_42.insert(Nested2PartySubIDType_42.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_42);

        noNested2PartyIDs_2_1_2.addGroup(noNested2PartySubIDs_2_2_2_0);
      }
      noOrders_0_2.addGroup(noNested2PartyIDs_2_1_2);
    }
    msg.addGroup(noOrders_0_2);
  }
  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::Confirmation::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_32;
    FIX::PartyID PartyID_32("STRING_550083432");
    noPartyIDs_0_0.set(PartyID_32);
    Parties_NoPartyIDs_32.insert(PartyID_32.getString());
    FIX::PartyIDSource PartyIDSource_32('G');
    noPartyIDs_0_0.set(PartyIDSource_32);
    Parties_NoPartyIDs_32.insert(PartyIDSource_32.getString());
    FIX::PartyRole PartyRole_32(22);
    noPartyIDs_0_0.set(PartyRole_32);
    Parties_NoPartyIDs_32.insert(PartyRole_32.getString());
    all_values.push_back(Parties_NoPartyIDs_32);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::Confirmation::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_63;
      FIX::PartySubID PartySubID_63("STRING_413967885");
      noPartySubIDs_0_1_0.set(PartySubID_63);
      PtysSubGrp_NoPartySubIDs_63.insert(PartySubID_63.getString());
      FIX::PartySubIDType PartySubIDType_63(22);
      noPartySubIDs_0_1_0.set(PartySubIDType_63);
      PtysSubGrp_NoPartySubIDs_63.insert(PartySubIDType_63.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_63);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::Confirmation::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_64;
      FIX::PartySubID PartySubID_64("STRING_739443267");
      noPartySubIDs_0_1_1.set(PartySubID_64);
      PtysSubGrp_NoPartySubIDs_64.insert(PartySubID_64.getString());
      FIX::PartySubIDType PartySubIDType_64(18);
      noPartySubIDs_0_1_1.set(PartySubIDType_64);
      PtysSubGrp_NoPartySubIDs_64.insert(PartySubIDType_64.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_64);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  // SettlInstructionsData
  multiset<string> SettlInstructionsData_9;
  FIX::SettlDeliveryType SettlDeliveryType_9(3);
  msg.set(SettlDeliveryType_9);
  SettlInstructionsData_9.insert(SettlDeliveryType_9.getString());
  FIX::StandInstDbID StandInstDbID_9("STRING_1693272125");
  msg.set(StandInstDbID_9);
  SettlInstructionsData_9.insert(StandInstDbID_9.getString());
  FIX::StandInstDbName StandInstDbName_9("STRING_1062459572");
  msg.set(StandInstDbName_9);
  SettlInstructionsData_9.insert(StandInstDbName_9.getString());
  FIX::StandInstDbType StandInstDbType_9(1);
  msg.set(StandInstDbType_9);
  SettlInstructionsData_9.insert(StandInstDbType_9.getString());
  all_values.push_back(SettlInstructionsData_9);

  // DlvyInstGrp
  // Group DlvyInstGrp.NoDlvyInst
  {
    FIX50SP2::Confirmation::NoDlvyInst noDlvyInst_0_0;
    // DlvyInstGrp.NoDlvyInst
    multiset<string> DlvyInstGrp_NoDlvyInst_16;
    FIX::DlvyInstType DlvyInstType_16('S');
    noDlvyInst_0_0.set(DlvyInstType_16);
    DlvyInstGrp_NoDlvyInst_16.insert(DlvyInstType_16.getString());
    FIX::SettlInstSource SettlInstSource_16('3');
    noDlvyInst_0_0.set(SettlInstSource_16);
    DlvyInstGrp_NoDlvyInst_16.insert(SettlInstSource_16.getString());
    all_values.push_back(DlvyInstGrp_NoDlvyInst_16);

    // SettlParties
    // Group SettlParties.NoSettlPartyIDs
    {
      FIX50SP2::Confirmation::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_1_0;
      // SettlParties.NoSettlPartyIDs
      multiset<string> SettlParties_NoSettlPartyIDs_31;
      FIX::SettlPartyID SettlPartyID_31("STRING_1995737095");
      noSettlPartyIDs_0_1_0.set(SettlPartyID_31);
      SettlParties_NoSettlPartyIDs_31.insert(SettlPartyID_31.getString());
      FIX::SettlPartyIDSource SettlPartyIDSource_31('1');
      noSettlPartyIDs_0_1_0.set(SettlPartyIDSource_31);
      SettlParties_NoSettlPartyIDs_31.insert(SettlPartyIDSource_31.getString());
      FIX::SettlPartyRole SettlPartyRole_31(1048922550);
      noSettlPartyIDs_0_1_0.set(SettlPartyRole_31);
      SettlParties_NoSettlPartyIDs_31.insert(SettlPartyRole_31.getString());
      all_values.push_back(SettlParties_NoSettlPartyIDs_31);

      // SettlPtysSubGrp
      // Group SettlPtysSubGrp.NoSettlPartySubIDs
      {
        FIX50SP2::Confirmation::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_2_0;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_68;
        FIX::SettlPartySubID SettlPartySubID_68("STRING_1955618742");
        noSettlPartySubIDs_0_0_2_0.set(SettlPartySubID_68);
        SettlPtysSubGrp_NoSettlPartySubIDs_68.insert(SettlPartySubID_68.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_68(1019635570);
        noSettlPartySubIDs_0_0_2_0.set(SettlPartySubIDType_68);
        SettlPtysSubGrp_NoSettlPartySubIDs_68.insert(SettlPartySubIDType_68.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_68);

        noSettlPartyIDs_0_1_0.addGroup(noSettlPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::Confirmation::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_2_1;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_69;
        FIX::SettlPartySubID SettlPartySubID_69("STRING_1750065263");
        noSettlPartySubIDs_0_0_2_1.set(SettlPartySubID_69);
        SettlPtysSubGrp_NoSettlPartySubIDs_69.insert(SettlPartySubID_69.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_69(1673817026);
        noSettlPartySubIDs_0_0_2_1.set(SettlPartySubIDType_69);
        SettlPtysSubGrp_NoSettlPartySubIDs_69.insert(SettlPartySubIDType_69.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_69);

        noSettlPartyIDs_0_1_0.addGroup(noSettlPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::Confirmation::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_2_2;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_70;
        FIX::SettlPartySubID SettlPartySubID_70("STRING_978157677");
        noSettlPartySubIDs_0_0_2_2.set(SettlPartySubID_70);
        SettlPtysSubGrp_NoSettlPartySubIDs_70.insert(SettlPartySubID_70.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_70(215871801);
        noSettlPartySubIDs_0_0_2_2.set(SettlPartySubIDType_70);
        SettlPtysSubGrp_NoSettlPartySubIDs_70.insert(SettlPartySubIDType_70.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_70);

        noSettlPartyIDs_0_1_0.addGroup(noSettlPartySubIDs_0_0_2_2);
      }
      noDlvyInst_0_0.addGroup(noSettlPartyIDs_0_1_0);
    }
    {
      FIX50SP2::Confirmation::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_1_1;
      // SettlParties.NoSettlPartyIDs
      multiset<string> SettlParties_NoSettlPartyIDs_32;
      FIX::SettlPartyID SettlPartyID_32("STRING_554385765");
      noSettlPartyIDs_0_1_1.set(SettlPartyID_32);
      SettlParties_NoSettlPartyIDs_32.insert(SettlPartyID_32.getString());
      FIX::SettlPartyIDSource SettlPartyIDSource_32('8');
      noSettlPartyIDs_0_1_1.set(SettlPartyIDSource_32);
      SettlParties_NoSettlPartyIDs_32.insert(SettlPartyIDSource_32.getString());
      FIX::SettlPartyRole SettlPartyRole_32(1501405456);
      noSettlPartyIDs_0_1_1.set(SettlPartyRole_32);
      SettlParties_NoSettlPartyIDs_32.insert(SettlPartyRole_32.getString());
      all_values.push_back(SettlParties_NoSettlPartyIDs_32);

      // SettlPtysSubGrp
      // Group SettlPtysSubGrp.NoSettlPartySubIDs
      {
        FIX50SP2::Confirmation::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_2_0;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_71;
        FIX::SettlPartySubID SettlPartySubID_71("STRING_142647084");
        noSettlPartySubIDs_0_1_2_0.set(SettlPartySubID_71);
        SettlPtysSubGrp_NoSettlPartySubIDs_71.insert(SettlPartySubID_71.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_71(2051488888);
        noSettlPartySubIDs_0_1_2_0.set(SettlPartySubIDType_71);
        SettlPtysSubGrp_NoSettlPartySubIDs_71.insert(SettlPartySubIDType_71.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_71);

        noSettlPartyIDs_0_1_1.addGroup(noSettlPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::Confirmation::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_2_1;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_72;
        FIX::SettlPartySubID SettlPartySubID_72("STRING_1888901187");
        noSettlPartySubIDs_0_1_2_1.set(SettlPartySubID_72);
        SettlPtysSubGrp_NoSettlPartySubIDs_72.insert(SettlPartySubID_72.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_72(1032020121);
        noSettlPartySubIDs_0_1_2_1.set(SettlPartySubIDType_72);
        SettlPtysSubGrp_NoSettlPartySubIDs_72.insert(SettlPartySubIDType_72.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_72);

        noSettlPartyIDs_0_1_1.addGroup(noSettlPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::Confirmation::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_2_2;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_73;
        FIX::SettlPartySubID SettlPartySubID_73("STRING_965384220");
        noSettlPartySubIDs_0_1_2_2.set(SettlPartySubID_73);
        SettlPtysSubGrp_NoSettlPartySubIDs_73.insert(SettlPartySubID_73.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_73(155385424);
        noSettlPartySubIDs_0_1_2_2.set(SettlPartySubIDType_73);
        SettlPtysSubGrp_NoSettlPartySubIDs_73.insert(SettlPartySubIDType_73.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_73);

        noSettlPartyIDs_0_1_1.addGroup(noSettlPartySubIDs_0_1_2_2);
      }
      noDlvyInst_0_0.addGroup(noSettlPartyIDs_0_1_1);
    }
    msg.addGroup(noDlvyInst_0_0);
  }
  {
    FIX50SP2::Confirmation::NoDlvyInst noDlvyInst_0_1;
    // DlvyInstGrp.NoDlvyInst
    multiset<string> DlvyInstGrp_NoDlvyInst_17;
    FIX::DlvyInstType DlvyInstType_17('S');
    noDlvyInst_0_1.set(DlvyInstType_17);
    DlvyInstGrp_NoDlvyInst_17.insert(DlvyInstType_17.getString());
    FIX::SettlInstSource SettlInstSource_17('2');
    noDlvyInst_0_1.set(SettlInstSource_17);
    DlvyInstGrp_NoDlvyInst_17.insert(SettlInstSource_17.getString());
    all_values.push_back(DlvyInstGrp_NoDlvyInst_17);

    // SettlParties
    // Group SettlParties.NoSettlPartyIDs
    {
      FIX50SP2::Confirmation::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_1_1_0;
      // SettlParties.NoSettlPartyIDs
      multiset<string> SettlParties_NoSettlPartyIDs_33;
      FIX::SettlPartyID SettlPartyID_33("STRING_1951602708");
      noSettlPartyIDs_1_1_0.set(SettlPartyID_33);
      SettlParties_NoSettlPartyIDs_33.insert(SettlPartyID_33.getString());
      FIX::SettlPartyIDSource SettlPartyIDSource_33('1');
      noSettlPartyIDs_1_1_0.set(SettlPartyIDSource_33);
      SettlParties_NoSettlPartyIDs_33.insert(SettlPartyIDSource_33.getString());
      FIX::SettlPartyRole SettlPartyRole_33(1824110388);
      noSettlPartyIDs_1_1_0.set(SettlPartyRole_33);
      SettlParties_NoSettlPartyIDs_33.insert(SettlPartyRole_33.getString());
      all_values.push_back(SettlParties_NoSettlPartyIDs_33);

      // SettlPtysSubGrp
      // Group SettlPtysSubGrp.NoSettlPartySubIDs
      {
        FIX50SP2::Confirmation::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_2_0;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_74;
        FIX::SettlPartySubID SettlPartySubID_74("STRING_1088912706");
        noSettlPartySubIDs_1_0_2_0.set(SettlPartySubID_74);
        SettlPtysSubGrp_NoSettlPartySubIDs_74.insert(SettlPartySubID_74.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_74(651835949);
        noSettlPartySubIDs_1_0_2_0.set(SettlPartySubIDType_74);
        SettlPtysSubGrp_NoSettlPartySubIDs_74.insert(SettlPartySubIDType_74.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_74);

        noSettlPartyIDs_1_1_0.addGroup(noSettlPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::Confirmation::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_2_1;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_75;
        FIX::SettlPartySubID SettlPartySubID_75("STRING_2103937965");
        noSettlPartySubIDs_1_0_2_1.set(SettlPartySubID_75);
        SettlPtysSubGrp_NoSettlPartySubIDs_75.insert(SettlPartySubID_75.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_75(1225577855);
        noSettlPartySubIDs_1_0_2_1.set(SettlPartySubIDType_75);
        SettlPtysSubGrp_NoSettlPartySubIDs_75.insert(SettlPartySubIDType_75.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_75);

        noSettlPartyIDs_1_1_0.addGroup(noSettlPartySubIDs_1_0_2_1);
      }
      noDlvyInst_0_1.addGroup(noSettlPartyIDs_1_1_0);
    }
    msg.addGroup(noDlvyInst_0_1);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_8;
  FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_8("JPY");
  msg.set(BenchmarkCurveCurrency_8);
  SpreadOrBenchmarkCurveData_8.insert(BenchmarkCurveCurrency_8.getString());
  FIX::BenchmarkCurveName BenchmarkCurveName_8("STRING_SONIA");
  msg.set(BenchmarkCurveName_8);
  SpreadOrBenchmarkCurveData_8.insert(BenchmarkCurveName_8.getString());
  FIX::BenchmarkCurvePoint BenchmarkCurvePoint_8("STRING_1689102793");
  msg.set(BenchmarkCurvePoint_8);
  SpreadOrBenchmarkCurveData_8.insert(BenchmarkCurvePoint_8.getString());
  FIX::BenchmarkPrice BenchmarkPrice_8;
  BenchmarkPrice_8.setString("16052461");
  msg.set(BenchmarkPrice_8);
  SpreadOrBenchmarkCurveData_8.insert(BenchmarkPrice_8.getString());
  FIX::BenchmarkPriceType BenchmarkPriceType_8(1146652327);
  msg.set(BenchmarkPriceType_8);
  SpreadOrBenchmarkCurveData_8.insert(BenchmarkPriceType_8.getString());
  FIX::BenchmarkSecurityID BenchmarkSecurityID_8("STRING_1291684408");
  msg.set(BenchmarkSecurityID_8);
  SpreadOrBenchmarkCurveData_8.insert(BenchmarkSecurityID_8.getString());
  FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_8("STRING_1131579519");
  msg.set(BenchmarkSecurityIDSource_8);
  SpreadOrBenchmarkCurveData_8.insert(BenchmarkSecurityIDSource_8.getString());
  FIX::Spread Spread_8;
  Spread_8.setString("21248100");
  msg.set(Spread_8);
  SpreadOrBenchmarkCurveData_8.insert(Spread_8.getString());
  all_values.push_back(SpreadOrBenchmarkCurveData_8);

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::Confirmation::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_14;
    FIX::StipulationType StipulationType_14("STRING_COUPON");
    noStipulations_0_0.set(StipulationType_14);
    Stipulations_NoStipulations_14.insert(StipulationType_14.getString());
    FIX::StipulationValue StipulationValue_14("STRING_849856332");
    noStipulations_0_0.set(StipulationValue_14);
    Stipulations_NoStipulations_14.insert(StipulationValue_14.getString());
    all_values.push_back(Stipulations_NoStipulations_14);

    msg.addGroup(noStipulations_0_0);
  }
  {
    FIX50SP2::Confirmation::NoStipulations noStipulations_0_1;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_15;
    FIX::StipulationType StipulationType_15("STRING_MATURITY");
    noStipulations_0_1.set(StipulationType_15);
    Stipulations_NoStipulations_15.insert(StipulationType_15.getString());
    FIX::StipulationValue StipulationValue_15("STRING_1791303425");
    noStipulations_0_1.set(StipulationValue_15);
    Stipulations_NoStipulations_15.insert(StipulationValue_15.getString());
    all_values.push_back(Stipulations_NoStipulations_15);

    msg.addGroup(noStipulations_0_1);
  }
  // TrdRegTimestamps
  // Group TrdRegTimestamps.NoTrdRegTimestamps
  {
    FIX50SP2::Confirmation::NoTrdRegTimestamps noTrdRegTimestamps_0_0;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_9;
    FIX::DeskOrderHandlingInst DeskOrderHandlingInst_9("MULTIPLESTRINGVALUE_PEG");
    noTrdRegTimestamps_0_0.set(DeskOrderHandlingInst_9);
    TrdRegTimestamps_NoTrdRegTimestamps_9.insert(DeskOrderHandlingInst_9.getString());
    FIX::DeskType DeskType_9("STRING_O");
    noTrdRegTimestamps_0_0.set(DeskType_9);
    TrdRegTimestamps_NoTrdRegTimestamps_9.insert(DeskType_9.getString());
    FIX::DeskTypeSource DeskTypeSource_9(1);
    noTrdRegTimestamps_0_0.set(DeskTypeSource_9);
    TrdRegTimestamps_NoTrdRegTimestamps_9.insert(DeskTypeSource_9.getString());
    FIX::TrdRegTimestamp TrdRegTimestamp_9(FIX::UTCTIMESTAMP(5, 27, 37, 4, 8, 2001));
    noTrdRegTimestamps_0_0.set(TrdRegTimestamp_9);
    TrdRegTimestamps_NoTrdRegTimestamps_9.insert(TrdRegTimestamp_9.getString());
    FIX::TrdRegTimestampOrigin TrdRegTimestampOrigin_9("STRING_2126383944");
    noTrdRegTimestamps_0_0.set(TrdRegTimestampOrigin_9);
    TrdRegTimestamps_NoTrdRegTimestamps_9.insert(TrdRegTimestampOrigin_9.getString());
    FIX::TrdRegTimestampType TrdRegTimestampType_9(6);
    noTrdRegTimestamps_0_0.set(TrdRegTimestampType_9);
    TrdRegTimestamps_NoTrdRegTimestamps_9.insert(TrdRegTimestampType_9.getString());
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_9);

    msg.addGroup(noTrdRegTimestamps_0_0);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::Confirmation::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_25;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_25("DATA_630736246");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_25);
    UnderlyingInstrument_25.insert(EncodedUnderlyingIssuer_25.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_25(107384452);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_25);
    UnderlyingInstrument_25.insert(EncodedUnderlyingIssuerLen_25.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_25("DATA_558350548");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_25);
    UnderlyingInstrument_25.insert(EncodedUnderlyingSecurityDesc_25.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_25(1130825642);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_25);
    UnderlyingInstrument_25.insert(EncodedUnderlyingSecurityDescLen_25.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_25;
    UnderlyingAdjustedQuantity_25.setString("19044954");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_25);
    UnderlyingInstrument_25.insert(UnderlyingAdjustedQuantity_25.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_25;
    UnderlyingAllocationPercent_25.setString("73.050000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_25);
    UnderlyingInstrument_25.insert(UnderlyingAllocationPercent_25.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_25;
    UnderlyingAttachmentPoint_25.setString("47.870000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_25);
    UnderlyingInstrument_25.insert(UnderlyingAttachmentPoint_25.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_25("STRING_1362257991");
    noUnderlyings_0_0.set(UnderlyingCFICode_25);
    UnderlyingInstrument_25.insert(UnderlyingCFICode_25.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_25("STRING_1832019632");
    noUnderlyings_0_0.set(UnderlyingCPProgram_25);
    UnderlyingInstrument_25.insert(UnderlyingCPProgram_25.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_25("STRING_1964129195");
    noUnderlyings_0_0.set(UnderlyingCPRegType_25);
    UnderlyingInstrument_25.insert(UnderlyingCPRegType_25.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_25;
    UnderlyingCapValue_25.setString("3463538");
    noUnderlyings_0_0.set(UnderlyingCapValue_25);
    UnderlyingInstrument_25.insert(UnderlyingCapValue_25.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_25;
    UnderlyingCashAmount_25.setString("18093459");
    noUnderlyings_0_0.set(UnderlyingCashAmount_25);
    UnderlyingInstrument_25.insert(UnderlyingCashAmount_25.getString());
    FIX::UnderlyingCashType UnderlyingCashType_25("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_25);
    UnderlyingInstrument_25.insert(UnderlyingCashType_25.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_25;
    UnderlyingContractMultiplier_25.setString("20323191");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_25);
    UnderlyingInstrument_25.insert(UnderlyingContractMultiplier_25.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_25(511718673);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_25);
    UnderlyingInstrument_25.insert(UnderlyingContractMultiplierUnit_25.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_25("COUNTRY_38196125");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_25);
    UnderlyingInstrument_25.insert(UnderlyingCountryOfIssue_25.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_25("LOCALMKTDATE_1676138924");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_25);
    UnderlyingInstrument_25.insert(UnderlyingCouponPaymentDate_25.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_25;
    UnderlyingCouponRate_25.setString("20.890000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_25);
    UnderlyingInstrument_25.insert(UnderlyingCouponRate_25.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_25("STRING_803679382");
    noUnderlyings_0_0.set(UnderlyingCreditRating_25);
    UnderlyingInstrument_25.insert(UnderlyingCreditRating_25.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_25("CAN");
    noUnderlyings_0_0.set(UnderlyingCurrency_25);
    UnderlyingInstrument_25.insert(UnderlyingCurrency_25.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_25;
    UnderlyingCurrentValue_25.setString("3870632");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_25);
    UnderlyingInstrument_25.insert(UnderlyingCurrentValue_25.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_25;
    UnderlyingDetachmentPoint_25.setString("89.810000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_25);
    UnderlyingInstrument_25.insert(UnderlyingDetachmentPoint_25.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_25;
    UnderlyingDirtyPrice_25.setString("16096742");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_25);
    UnderlyingInstrument_25.insert(UnderlyingDirtyPrice_25.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_25;
    UnderlyingEndPrice_25.setString("16752745");
    noUnderlyings_0_0.set(UnderlyingEndPrice_25);
    UnderlyingInstrument_25.insert(UnderlyingEndPrice_25.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_25;
    UnderlyingEndValue_25.setString("9042725");
    noUnderlyings_0_0.set(UnderlyingEndValue_25);
    UnderlyingInstrument_25.insert(UnderlyingEndValue_25.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_25(1642205493);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_25);
    UnderlyingInstrument_25.insert(UnderlyingExerciseStyle_25.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_25;
    UnderlyingFXRate_25.setString("20666181");
    noUnderlyings_0_0.set(UnderlyingFXRate_25);
    UnderlyingInstrument_25.insert(UnderlyingFXRate_25.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_25('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_25);
    UnderlyingInstrument_25.insert(UnderlyingFXRateCalc_25.getString());
    FIX::UnderlyingFactor UnderlyingFactor_25;
    UnderlyingFactor_25.setString("17931356");
    noUnderlyings_0_0.set(UnderlyingFactor_25);
    UnderlyingInstrument_25.insert(UnderlyingFactor_25.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_25(1399390858);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_25);
    UnderlyingInstrument_25.insert(UnderlyingFlowScheduleType_25.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_25("STRING_1513909080");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_25);
    UnderlyingInstrument_25.insert(UnderlyingInstrRegistry_25.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_25("LOCALMKTDATE_1900520080");
    noUnderlyings_0_0.set(UnderlyingIssueDate_25);
    UnderlyingInstrument_25.insert(UnderlyingIssueDate_25.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_25("STRING_1957741406");
    noUnderlyings_0_0.set(UnderlyingIssuer_25);
    UnderlyingInstrument_25.insert(UnderlyingIssuer_25.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_25("STRING_497251075");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_25);
    UnderlyingInstrument_25.insert(UnderlyingLocaleOfIssue_25.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_25("LOCALMKTDATE_1657531930");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_25);
    UnderlyingInstrument_25.insert(UnderlyingMaturityDate_25.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_25("MONTHYEAR_495625064");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_25);
    UnderlyingInstrument_25.insert(UnderlyingMaturityMonthYear_25.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_25("TZTIMEONLY_1169695862");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_25);
    UnderlyingInstrument_25.insert(UnderlyingMaturityTime_25.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_25;
    UnderlyingNotionalPercentageOutstanding_25.setString("62.730000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_25);
    UnderlyingInstrument_25.insert(UnderlyingNotionalPercentageOutstanding_25.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_25('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_25);
    UnderlyingInstrument_25.insert(UnderlyingOptAttribute_25.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_25;
    UnderlyingOriginalNotionalPercentageOutstanding_25.setString("14.100000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_25);
    UnderlyingInstrument_25.insert(UnderlyingOriginalNotionalPercentageOutstanding_25.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_25("STRING_1218660135");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_25);
    UnderlyingInstrument_25.insert(UnderlyingPriceUnitOfMeasure_25.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_25;
    UnderlyingPriceUnitOfMeasureQty_25.setString("19895070");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_25);
    UnderlyingInstrument_25.insert(UnderlyingPriceUnitOfMeasureQty_25.getString());
    FIX::UnderlyingProduct UnderlyingProduct_25(163059518);
    noUnderlyings_0_0.set(UnderlyingProduct_25);
    UnderlyingInstrument_25.insert(UnderlyingProduct_25.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_25(1103495634);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_25);
    UnderlyingInstrument_25.insert(UnderlyingPutOrCall_25.getString());
    FIX::UnderlyingPx UnderlyingPx_25;
    UnderlyingPx_25.setString("3537420");
    noUnderlyings_0_0.set(UnderlyingPx_25);
    UnderlyingInstrument_25.insert(UnderlyingPx_25.getString());
    FIX::UnderlyingQty UnderlyingQty_25;
    UnderlyingQty_25.setString("2012556");
    noUnderlyings_0_0.set(UnderlyingQty_25);
    UnderlyingInstrument_25.insert(UnderlyingQty_25.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_25("LOCALMKTDATE_632150910");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_25);
    UnderlyingInstrument_25.insert(UnderlyingRedemptionDate_25.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_25("STRING_1857964151");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_25);
    UnderlyingInstrument_25.insert(UnderlyingRepoCollateralSecurityType_25.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_25;
    UnderlyingRepurchaseRate_25.setString("50.260000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_25);
    UnderlyingInstrument_25.insert(UnderlyingRepurchaseRate_25.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_25(1693527150);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_25);
    UnderlyingInstrument_25.insert(UnderlyingRepurchaseTerm_25.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_25("STRING_1091742482");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_25);
    UnderlyingInstrument_25.insert(UnderlyingRestructuringType_25.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_25("STRING_1391998238");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_25);
    UnderlyingInstrument_25.insert(UnderlyingSecurityDesc_25.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_25("EXCHANGE_148042484");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_25);
    UnderlyingInstrument_25.insert(UnderlyingSecurityExchange_25.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_25("STRING_553933040");
    noUnderlyings_0_0.set(UnderlyingSecurityID_25);
    UnderlyingInstrument_25.insert(UnderlyingSecurityID_25.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_25("STRING_919789120");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_25);
    UnderlyingInstrument_25.insert(UnderlyingSecurityIDSource_25.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_25("STRING_1052315022");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_25);
    UnderlyingInstrument_25.insert(UnderlyingSecuritySubType_25.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_25("STRING_48654886");
    noUnderlyings_0_0.set(UnderlyingSecurityType_25);
    UnderlyingInstrument_25.insert(UnderlyingSecurityType_25.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_25("STRING_838923636");
    noUnderlyings_0_0.set(UnderlyingSeniority_25);
    UnderlyingInstrument_25.insert(UnderlyingSeniority_25.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_25("STRING_1935487856");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_25);
    UnderlyingInstrument_25.insert(UnderlyingSettlMethod_25.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_25(4);
    noUnderlyings_0_0.set(UnderlyingSettlementType_25);
    UnderlyingInstrument_25.insert(UnderlyingSettlementType_25.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_25;
    UnderlyingStartValue_25.setString("908308");
    noUnderlyings_0_0.set(UnderlyingStartValue_25);
    UnderlyingInstrument_25.insert(UnderlyingStartValue_25.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_25("STRING_1301913289");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_25);
    UnderlyingInstrument_25.insert(UnderlyingStateOrProvinceOfIssue_25.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_25("CAN");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_25);
    UnderlyingInstrument_25.insert(UnderlyingStrikeCurrency_25.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_25;
    UnderlyingStrikePrice_25.setString("17991643");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_25);
    UnderlyingInstrument_25.insert(UnderlyingStrikePrice_25.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_25("STRING_1104875228");
    noUnderlyings_0_0.set(UnderlyingSymbol_25);
    UnderlyingInstrument_25.insert(UnderlyingSymbol_25.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_25("STRING_396713669");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_25);
    UnderlyingInstrument_25.insert(UnderlyingSymbolSfx_25.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_25("STRING_821376578");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_25);
    UnderlyingInstrument_25.insert(UnderlyingTimeUnit_25.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_25("STRING_1977181502");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_25);
    UnderlyingInstrument_25.insert(UnderlyingUnitOfMeasure_25.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_25;
    UnderlyingUnitOfMeasureQty_25.setString("5768747");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_25);
    UnderlyingInstrument_25.insert(UnderlyingUnitOfMeasureQty_25.getString());
    all_values.push_back(UnderlyingInstrument_25);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::Confirmation::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_51;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_51("STRING_1048357989");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_51);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_51.insert(UnderlyingSecurityAltID_51.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_51("STRING_418898106");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_51);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_51.insert(UnderlyingSecurityAltIDSource_51.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_51);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::Confirmation::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_52;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_52("STRING_1970777507");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_52);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_52.insert(UnderlyingSecurityAltID_52.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_52("STRING_4369975");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_52);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_52.insert(UnderlyingSecurityAltIDSource_52.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_52);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::Confirmation::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_53;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_53("STRING_772640168");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltID_53);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_53.insert(UnderlyingSecurityAltID_53.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_53("STRING_24549503");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltIDSource_53);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_53.insert(UnderlyingSecurityAltIDSource_53.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_53);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::Confirmation::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_46;
      FIX::UnderlyingStipType UnderlyingStipType_46("STRING_483120672");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_46);
      UnderlyingStipulations_NoUnderlyingStips_46.insert(UnderlyingStipType_46.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_46("STRING_1029484529");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_46);
      UnderlyingStipulations_NoUnderlyingStips_46.insert(UnderlyingStipValue_46.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_46);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::Confirmation::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_47;
      FIX::UnderlyingStipType UnderlyingStipType_47("STRING_182564388");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_47);
      UnderlyingStipulations_NoUnderlyingStips_47.insert(UnderlyingStipType_47.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_47("STRING_1574863154");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_47);
      UnderlyingStipulations_NoUnderlyingStips_47.insert(UnderlyingStipValue_47.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_47);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::Confirmation::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_53;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_53("STRING_330606872");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_53);
      UndlyInstrumentParties_NoUndlyInstrumentParties_53.insert(UnderlyingInstrumentPartyID_53.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_53('2');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_53);
      UndlyInstrumentParties_NoUndlyInstrumentParties_53.insert(UnderlyingInstrumentPartyIDSource_53.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_53(1193788240);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_53);
      UndlyInstrumentParties_NoUndlyInstrumentParties_53.insert(UnderlyingInstrumentPartyRole_53.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_53);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Confirmation::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_112;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_112("STRING_29967433");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_112);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_112.insert(UnderlyingInstrumentPartySubID_112.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_112(2032711876);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_112);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_112.insert(UnderlyingInstrumentPartySubIDType_112.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_112);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::Confirmation::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_113;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_113("STRING_1170926102");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_113);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_113.insert(UnderlyingInstrumentPartySubID_113.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_113(1871757947);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_113);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_113.insert(UnderlyingInstrumentPartySubIDType_113.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_113);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::Confirmation::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_114;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_114("STRING_2123542723");
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubID_114);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_114.insert(UnderlyingInstrumentPartySubID_114.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_114(325355743);
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubIDType_114);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_114.insert(UnderlyingInstrumentPartySubIDType_114.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_114);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::Confirmation::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_26;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_26("DATA_1319101245");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_26);
    UnderlyingInstrument_26.insert(EncodedUnderlyingIssuer_26.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_26(2024631328);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_26);
    UnderlyingInstrument_26.insert(EncodedUnderlyingIssuerLen_26.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_26("DATA_2124520107");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_26);
    UnderlyingInstrument_26.insert(EncodedUnderlyingSecurityDesc_26.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_26(276492825);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_26);
    UnderlyingInstrument_26.insert(EncodedUnderlyingSecurityDescLen_26.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_26;
    UnderlyingAdjustedQuantity_26.setString("2738613");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_26);
    UnderlyingInstrument_26.insert(UnderlyingAdjustedQuantity_26.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_26;
    UnderlyingAllocationPercent_26.setString("30.380000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_26);
    UnderlyingInstrument_26.insert(UnderlyingAllocationPercent_26.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_26;
    UnderlyingAttachmentPoint_26.setString("6.790000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_26);
    UnderlyingInstrument_26.insert(UnderlyingAttachmentPoint_26.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_26("STRING_850736066");
    noUnderlyings_0_1.set(UnderlyingCFICode_26);
    UnderlyingInstrument_26.insert(UnderlyingCFICode_26.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_26("STRING_458647378");
    noUnderlyings_0_1.set(UnderlyingCPProgram_26);
    UnderlyingInstrument_26.insert(UnderlyingCPProgram_26.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_26("STRING_1154548669");
    noUnderlyings_0_1.set(UnderlyingCPRegType_26);
    UnderlyingInstrument_26.insert(UnderlyingCPRegType_26.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_26;
    UnderlyingCapValue_26.setString("12696341");
    noUnderlyings_0_1.set(UnderlyingCapValue_26);
    UnderlyingInstrument_26.insert(UnderlyingCapValue_26.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_26;
    UnderlyingCashAmount_26.setString("2819412");
    noUnderlyings_0_1.set(UnderlyingCashAmount_26);
    UnderlyingInstrument_26.insert(UnderlyingCashAmount_26.getString());
    FIX::UnderlyingCashType UnderlyingCashType_26("STRING_FIXED");
    noUnderlyings_0_1.set(UnderlyingCashType_26);
    UnderlyingInstrument_26.insert(UnderlyingCashType_26.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_26;
    UnderlyingContractMultiplier_26.setString("20422743");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_26);
    UnderlyingInstrument_26.insert(UnderlyingContractMultiplier_26.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_26(306490740);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_26);
    UnderlyingInstrument_26.insert(UnderlyingContractMultiplierUnit_26.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_26("COUNTRY_1795439530");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_26);
    UnderlyingInstrument_26.insert(UnderlyingCountryOfIssue_26.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_26("LOCALMKTDATE_377911365");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_26);
    UnderlyingInstrument_26.insert(UnderlyingCouponPaymentDate_26.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_26;
    UnderlyingCouponRate_26.setString("52.700000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_26);
    UnderlyingInstrument_26.insert(UnderlyingCouponRate_26.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_26("STRING_1978003918");
    noUnderlyings_0_1.set(UnderlyingCreditRating_26);
    UnderlyingInstrument_26.insert(UnderlyingCreditRating_26.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_26("USD");
    noUnderlyings_0_1.set(UnderlyingCurrency_26);
    UnderlyingInstrument_26.insert(UnderlyingCurrency_26.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_26;
    UnderlyingCurrentValue_26.setString("1611271");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_26);
    UnderlyingInstrument_26.insert(UnderlyingCurrentValue_26.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_26;
    UnderlyingDetachmentPoint_26.setString("70.670000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_26);
    UnderlyingInstrument_26.insert(UnderlyingDetachmentPoint_26.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_26;
    UnderlyingDirtyPrice_26.setString("6562789");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_26);
    UnderlyingInstrument_26.insert(UnderlyingDirtyPrice_26.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_26;
    UnderlyingEndPrice_26.setString("15440490");
    noUnderlyings_0_1.set(UnderlyingEndPrice_26);
    UnderlyingInstrument_26.insert(UnderlyingEndPrice_26.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_26;
    UnderlyingEndValue_26.setString("19640545");
    noUnderlyings_0_1.set(UnderlyingEndValue_26);
    UnderlyingInstrument_26.insert(UnderlyingEndValue_26.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_26(541507210);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_26);
    UnderlyingInstrument_26.insert(UnderlyingExerciseStyle_26.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_26;
    UnderlyingFXRate_26.setString("5674914");
    noUnderlyings_0_1.set(UnderlyingFXRate_26);
    UnderlyingInstrument_26.insert(UnderlyingFXRate_26.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_26('M');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_26);
    UnderlyingInstrument_26.insert(UnderlyingFXRateCalc_26.getString());
    FIX::UnderlyingFactor UnderlyingFactor_26;
    UnderlyingFactor_26.setString("5175662");
    noUnderlyings_0_1.set(UnderlyingFactor_26);
    UnderlyingInstrument_26.insert(UnderlyingFactor_26.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_26(892847234);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_26);
    UnderlyingInstrument_26.insert(UnderlyingFlowScheduleType_26.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_26("STRING_859946396");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_26);
    UnderlyingInstrument_26.insert(UnderlyingInstrRegistry_26.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_26("LOCALMKTDATE_394713965");
    noUnderlyings_0_1.set(UnderlyingIssueDate_26);
    UnderlyingInstrument_26.insert(UnderlyingIssueDate_26.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_26("STRING_869883693");
    noUnderlyings_0_1.set(UnderlyingIssuer_26);
    UnderlyingInstrument_26.insert(UnderlyingIssuer_26.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_26("STRING_1136439221");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_26);
    UnderlyingInstrument_26.insert(UnderlyingLocaleOfIssue_26.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_26("LOCALMKTDATE_668575314");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_26);
    UnderlyingInstrument_26.insert(UnderlyingMaturityDate_26.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_26("MONTHYEAR_1668296731");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_26);
    UnderlyingInstrument_26.insert(UnderlyingMaturityMonthYear_26.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_26("TZTIMEONLY_1242629901");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_26);
    UnderlyingInstrument_26.insert(UnderlyingMaturityTime_26.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_26;
    UnderlyingNotionalPercentageOutstanding_26.setString("13.810000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_26);
    UnderlyingInstrument_26.insert(UnderlyingNotionalPercentageOutstanding_26.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_26('2');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_26);
    UnderlyingInstrument_26.insert(UnderlyingOptAttribute_26.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_26;
    UnderlyingOriginalNotionalPercentageOutstanding_26.setString("49.220000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_26);
    UnderlyingInstrument_26.insert(UnderlyingOriginalNotionalPercentageOutstanding_26.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_26("STRING_641461906");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_26);
    UnderlyingInstrument_26.insert(UnderlyingPriceUnitOfMeasure_26.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_26;
    UnderlyingPriceUnitOfMeasureQty_26.setString("2614016");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_26);
    UnderlyingInstrument_26.insert(UnderlyingPriceUnitOfMeasureQty_26.getString());
    FIX::UnderlyingProduct UnderlyingProduct_26(1408613566);
    noUnderlyings_0_1.set(UnderlyingProduct_26);
    UnderlyingInstrument_26.insert(UnderlyingProduct_26.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_26(536252599);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_26);
    UnderlyingInstrument_26.insert(UnderlyingPutOrCall_26.getString());
    FIX::UnderlyingPx UnderlyingPx_26;
    UnderlyingPx_26.setString("5678924");
    noUnderlyings_0_1.set(UnderlyingPx_26);
    UnderlyingInstrument_26.insert(UnderlyingPx_26.getString());
    FIX::UnderlyingQty UnderlyingQty_26;
    UnderlyingQty_26.setString("10565694");
    noUnderlyings_0_1.set(UnderlyingQty_26);
    UnderlyingInstrument_26.insert(UnderlyingQty_26.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_26("LOCALMKTDATE_914163965");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_26);
    UnderlyingInstrument_26.insert(UnderlyingRedemptionDate_26.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_26("STRING_1903867710");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_26);
    UnderlyingInstrument_26.insert(UnderlyingRepoCollateralSecurityType_26.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_26;
    UnderlyingRepurchaseRate_26.setString("97.180000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_26);
    UnderlyingInstrument_26.insert(UnderlyingRepurchaseRate_26.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_26(719454837);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_26);
    UnderlyingInstrument_26.insert(UnderlyingRepurchaseTerm_26.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_26("STRING_1366358452");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_26);
    UnderlyingInstrument_26.insert(UnderlyingRestructuringType_26.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_26("STRING_1048216860");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_26);
    UnderlyingInstrument_26.insert(UnderlyingSecurityDesc_26.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_26("EXCHANGE_506058256");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_26);
    UnderlyingInstrument_26.insert(UnderlyingSecurityExchange_26.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_26("STRING_2022637434");
    noUnderlyings_0_1.set(UnderlyingSecurityID_26);
    UnderlyingInstrument_26.insert(UnderlyingSecurityID_26.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_26("STRING_444782248");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_26);
    UnderlyingInstrument_26.insert(UnderlyingSecurityIDSource_26.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_26("STRING_322629108");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_26);
    UnderlyingInstrument_26.insert(UnderlyingSecuritySubType_26.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_26("STRING_416660996");
    noUnderlyings_0_1.set(UnderlyingSecurityType_26);
    UnderlyingInstrument_26.insert(UnderlyingSecurityType_26.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_26("STRING_1012273739");
    noUnderlyings_0_1.set(UnderlyingSeniority_26);
    UnderlyingInstrument_26.insert(UnderlyingSeniority_26.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_26("STRING_2010957907");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_26);
    UnderlyingInstrument_26.insert(UnderlyingSettlMethod_26.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_26(2);
    noUnderlyings_0_1.set(UnderlyingSettlementType_26);
    UnderlyingInstrument_26.insert(UnderlyingSettlementType_26.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_26;
    UnderlyingStartValue_26.setString("19051209");
    noUnderlyings_0_1.set(UnderlyingStartValue_26);
    UnderlyingInstrument_26.insert(UnderlyingStartValue_26.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_26("STRING_723420655");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_26);
    UnderlyingInstrument_26.insert(UnderlyingStateOrProvinceOfIssue_26.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_26("GBP");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_26);
    UnderlyingInstrument_26.insert(UnderlyingStrikeCurrency_26.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_26;
    UnderlyingStrikePrice_26.setString("18598598");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_26);
    UnderlyingInstrument_26.insert(UnderlyingStrikePrice_26.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_26("STRING_1997516562");
    noUnderlyings_0_1.set(UnderlyingSymbol_26);
    UnderlyingInstrument_26.insert(UnderlyingSymbol_26.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_26("STRING_148334102");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_26);
    UnderlyingInstrument_26.insert(UnderlyingSymbolSfx_26.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_26("STRING_955006129");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_26);
    UnderlyingInstrument_26.insert(UnderlyingTimeUnit_26.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_26("STRING_1369344295");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_26);
    UnderlyingInstrument_26.insert(UnderlyingUnitOfMeasure_26.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_26;
    UnderlyingUnitOfMeasureQty_26.setString("1277945");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_26);
    UnderlyingInstrument_26.insert(UnderlyingUnitOfMeasureQty_26.getString());
    all_values.push_back(UnderlyingInstrument_26);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::Confirmation::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_54;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_54("STRING_2010806201");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_54);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_54.insert(UnderlyingSecurityAltID_54.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_54("STRING_389196263");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_54);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_54.insert(UnderlyingSecurityAltIDSource_54.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_54);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::Confirmation::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_48;
      FIX::UnderlyingStipType UnderlyingStipType_48("STRING_399575152");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_48);
      UnderlyingStipulations_NoUnderlyingStips_48.insert(UnderlyingStipType_48.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_48("STRING_957088703");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_48);
      UnderlyingStipulations_NoUnderlyingStips_48.insert(UnderlyingStipValue_48.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_48);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::Confirmation::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_54;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_54("STRING_1313739117");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_54);
      UndlyInstrumentParties_NoUndlyInstrumentParties_54.insert(UnderlyingInstrumentPartyID_54.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_54('7');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_54);
      UndlyInstrumentParties_NoUndlyInstrumentParties_54.insert(UnderlyingInstrumentPartyIDSource_54.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_54(262006489);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_54);
      UndlyInstrumentParties_NoUndlyInstrumentParties_54.insert(UnderlyingInstrumentPartyRole_54.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_54);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Confirmation::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_115;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_115("STRING_2079831217");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_115);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_115.insert(UnderlyingInstrumentPartySubID_115.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_115(1310223349);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_115);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_115.insert(UnderlyingInstrumentPartySubIDType_115.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_115);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  // YieldData
  multiset<string> YieldData_3;
  FIX::Yield Yield_3;
  Yield_3.setString("85.620000");
  msg.set(Yield_3);
  YieldData_3.insert(Yield_3.getString());
  FIX::YieldCalcDate YieldCalcDate_3("LOCALMKTDATE_1954985003");
  msg.set(YieldCalcDate_3);
  YieldData_3.insert(YieldCalcDate_3.getString());
  FIX::YieldRedemptionDate YieldRedemptionDate_3("LOCALMKTDATE_1755005598");
  msg.set(YieldRedemptionDate_3);
  YieldData_3.insert(YieldRedemptionDate_3.getString());
  FIX::YieldRedemptionPrice YieldRedemptionPrice_3;
  YieldRedemptionPrice_3.setString("7143976");
  msg.set(YieldRedemptionPrice_3);
  YieldData_3.insert(YieldRedemptionPrice_3.getString());
  FIX::YieldRedemptionPriceType YieldRedemptionPriceType_3(224162352);
  msg.set(YieldRedemptionPriceType_3);
  YieldData_3.insert(YieldRedemptionPriceType_3.getString());
  FIX::YieldType YieldType_3("STRING_WORST");
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
    EXPECT_TRUE(found);
    if ( ! found) {
      cout << "#### NOT FOUND ###" << endl;
      copy(xml_l.begin(), xml_l.end(), ostream_iterator<string>(cout, " "));      cout << endl;
    } // end if ! found
  } // end for elt_lists
}
