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
  multiset<string> all_compo_names;
  multiset<string> Confirmation_0;
  FIX::AccruedInterestAmt AccruedInterestAmt_8;
  AccruedInterestAmt_8.setString("16996062");
  msg.set(AccruedInterestAmt_8);
  Confirmation_0.insert(AccruedInterestAmt_8.getString());
  FIX::AccruedInterestRate AccruedInterestRate_3;
  AccruedInterestRate_3.setString("77.720000");
  msg.set(AccruedInterestRate_3);
  Confirmation_0.insert(AccruedInterestRate_3.getString());
  FIX::AllocAccount AllocAccount_7("STRING_998993330");
  msg.set(AllocAccount_7);
  Confirmation_0.insert(AllocAccount_7.getString());
  FIX::AllocAccountType AllocAccountType_0(8);
  msg.set(AllocAccountType_0);
  Confirmation_0.insert(AllocAccountType_0.getString());
  FIX::AllocAcctIDSource AllocAcctIDSource_7(20676026);
  msg.set(AllocAcctIDSource_7);
  Confirmation_0.insert(AllocAcctIDSource_7.getString());
  FIX::AllocID AllocID_5("STRING_1320803940");
  msg.set(AllocID_5);
  Confirmation_0.insert(AllocID_5.getString());
  FIX::AllocQty AllocQty_7;
  AllocQty_7.setString("16408388");
  msg.set(AllocQty_7);
  Confirmation_0.insert(AllocQty_7.getString());
  FIX::AvgParPx AvgParPx_3;
  AvgParPx_3.setString("8740022");
  msg.set(AvgParPx_3);
  Confirmation_0.insert(AvgParPx_3.getString());
  FIX::AvgPx AvgPx_3;
  AvgPx_3.setString("13832117");
  msg.set(AvgPx_3);
  Confirmation_0.insert(AvgPx_3.getString());
  FIX::AvgPxPrecision AvgPxPrecision_3(123286075);
  msg.set(AvgPxPrecision_3);
  Confirmation_0.insert(AvgPxPrecision_3.getString());
  FIX::Concession Concession_3;
  Concession_3.setString("664797");
  msg.set(Concession_3);
  Confirmation_0.insert(Concession_3.getString());
  FIX::ConfirmID ConfirmID_0("STRING_459600093");
  msg.set(ConfirmID_0);
  Confirmation_0.insert(ConfirmID_0.getString());
  FIX::ConfirmRefID ConfirmRefID_0("STRING_1220262942");
  msg.set(ConfirmRefID_0);
  Confirmation_0.insert(ConfirmRefID_0.getString());
  FIX::ConfirmReqID ConfirmReqID_0("STRING_1900237139");
  msg.set(ConfirmReqID_0);
  Confirmation_0.insert(ConfirmReqID_0.getString());
  FIX::ConfirmStatus ConfirmStatus_0(3);
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
  FIX::EncodedText EncodedText_21("DATA_885146560");
  msg.set(EncodedText_21);
  Confirmation_0.insert(EncodedText_21.getString());
  FIX::EncodedTextLen EncodedTextLen_21(614299666);
  msg.set(EncodedTextLen_21);
  Confirmation_0.insert(EncodedTextLen_21.getString());
  FIX::EndAccruedInterestAmt EndAccruedInterestAmt_8;
  EndAccruedInterestAmt_8.setString("2575278");
  msg.set(EndAccruedInterestAmt_8);
  Confirmation_0.insert(EndAccruedInterestAmt_8.getString());
  FIX::EndCash EndCash_8;
  EndCash_8.setString("6708082");
  msg.set(EndCash_8);
  Confirmation_0.insert(EndCash_8.getString());
  FIX::ExDate ExDate_0("LOCALMKTDATE_1208198980");
  msg.set(ExDate_0);
  Confirmation_0.insert(ExDate_0.getString());
  FIX::GrossTradeAmt GrossTradeAmt_3;
  GrossTradeAmt_3.setString("21002930");
  msg.set(GrossTradeAmt_3);
  Confirmation_0.insert(GrossTradeAmt_3.getString());
  FIX::IndividualAllocID IndividualAllocID_7("STRING_1149403819");
  msg.set(IndividualAllocID_7);
  Confirmation_0.insert(IndividualAllocID_7.getString());
  FIX::InterestAtMaturity InterestAtMaturity_3;
  InterestAtMaturity_3.setString("15352704");
  msg.set(InterestAtMaturity_3);
  Confirmation_0.insert(InterestAtMaturity_3.getString());
  FIX::LastMkt LastMkt_4("EXCHANGE_1954260972");
  msg.set(LastMkt_4);
  Confirmation_0.insert(LastMkt_4.getString());
  FIX::LegalConfirm LegalConfirm_3(false);
  msg.set(LegalConfirm_3);
  Confirmation_0.insert(LegalConfirm_3.getString());
  FIX::MaturityNetMoney MaturityNetMoney_0;
  MaturityNetMoney_0.setString("11361193");
  msg.set(MaturityNetMoney_0);
  Confirmation_0.insert(MaturityNetMoney_0.getString());
  FIX::NetMoney NetMoney_3;
  NetMoney_3.setString("15063836");
  msg.set(NetMoney_3);
  Confirmation_0.insert(NetMoney_3.getString());
  FIX::NumDaysInterest NumDaysInterest_3(994639325);
  msg.set(NumDaysInterest_3);
  Confirmation_0.insert(NumDaysInterest_3.getString());
  FIX::PriceType PriceType_11(3);
  msg.set(PriceType_11);
  Confirmation_0.insert(PriceType_11.getString());
  FIX::ProcessCode ProcessCode_4('5');
  msg.set(ProcessCode_4);
  Confirmation_0.insert(ProcessCode_4.getString());
  FIX::QtyType QtyType_10(2);
  msg.set(QtyType_10);
  Confirmation_0.insert(QtyType_10.getString());
  FIX::ReportedPx ReportedPx_0;
  ReportedPx_0.setString("13084329");
  msg.set(ReportedPx_0);
  Confirmation_0.insert(ReportedPx_0.getString());
  FIX::SecondaryAllocID SecondaryAllocID_5("STRING_1144161911");
  msg.set(SecondaryAllocID_5);
  Confirmation_0.insert(SecondaryAllocID_5.getString());
  FIX::SettlCurrAmt SettlCurrAmt_4;
  SettlCurrAmt_4.setString("18893175");
  msg.set(SettlCurrAmt_4);
  Confirmation_0.insert(SettlCurrAmt_4.getString());
  FIX::SettlCurrFxRate SettlCurrFxRate_4;
  SettlCurrFxRate_4.setString("5441611");
  msg.set(SettlCurrFxRate_4);
  Confirmation_0.insert(SettlCurrFxRate_4.getString());
  FIX::SettlCurrFxRateCalc SettlCurrFxRateCalc_4('D');
  msg.set(SettlCurrFxRateCalc_4);
  Confirmation_0.insert(SettlCurrFxRateCalc_4.getString());
  FIX::SettlCurrency SettlCurrency_4("JPY");
  msg.set(SettlCurrency_4);
  Confirmation_0.insert(SettlCurrency_4.getString());
  FIX::SettlDate SettlDate_15("LOCALMKTDATE_340227281");
  msg.set(SettlDate_15);
  Confirmation_0.insert(SettlDate_15.getString());
  FIX::SettlType SettlType_9("STRING_C");
  msg.set(SettlType_9);
  Confirmation_0.insert(SettlType_9.getString());
  FIX::SharedCommission SharedCommission_0;
  SharedCommission_0.setString("19050644");
  msg.set(SharedCommission_0);
  Confirmation_0.insert(SharedCommission_0.getString());
  FIX::Side Side_14('8');
  msg.set(Side_14);
  Confirmation_0.insert(Side_14.getString());
  FIX::StartCash StartCash_8;
  StartCash_8.setString("6583179");
  msg.set(StartCash_8);
  Confirmation_0.insert(StartCash_8.getString());
  FIX::Text Text_21("STRING_815561474");
  msg.set(Text_21);
  Confirmation_0.insert(Text_21.getString());
  FIX::TotalTakedown TotalTakedown_3;
  TotalTakedown_3.setString("17141516");
  msg.set(TotalTakedown_3);
  Confirmation_0.insert(TotalTakedown_3.getString());
  FIX::TradeDate TradeDate_7("LOCALMKTDATE_1388800893");
  msg.set(TradeDate_7);
  Confirmation_0.insert(TradeDate_7.getString());
  FIX::TransactTime TransactTime_10(FIX::UTCTIMESTAMP(23, 11, 50, 27, 10, 2015));
  msg.set(TransactTime_10);
  Confirmation_0.insert(TransactTime_10.getString());
  all_values.push_back(Confirmation_0);

  all_compo_names.insert("Confirmation");

  // CommissionData
  multiset<string> CommissionData_7;
  FIX::CommCurrency CommCurrency_7("GBP");
  msg.set(CommCurrency_7);
  CommissionData_7.insert(CommCurrency_7.getString());
  FIX::CommType CommType_7('4');
  msg.set(CommType_7);
  CommissionData_7.insert(CommType_7.getString());
  FIX::Commission Commission_7;
  Commission_7.setString("19130727");
  msg.set(Commission_7);
  CommissionData_7.insert(Commission_7.getString());
  FIX::FundRenewWaiv FundRenewWaiv_7('N');
  msg.set(FundRenewWaiv_7);
  CommissionData_7.insert(FundRenewWaiv_7.getString());
  all_values.push_back(CommissionData_7);
  all_compo_names.insert("CommissionData");

  // CpctyConfGrp
  // Group CpctyConfGrp.NoCapacities
  {
    FIX50SP2::Confirmation::NoCapacities noCapacities_0_0;
    // CpctyConfGrp.NoCapacities
    multiset<string> CpctyConfGrp_NoCapacities_0;
    FIX::OrderCapacity OrderCapacity_0('G');
    noCapacities_0_0.set(OrderCapacity_0);
    CpctyConfGrp_NoCapacities_0.insert(OrderCapacity_0.getString());
    FIX::OrderCapacityQty OrderCapacityQty_0;
    OrderCapacityQty_0.setString("2681384");
    noCapacities_0_0.set(OrderCapacityQty_0);
    CpctyConfGrp_NoCapacities_0.insert(OrderCapacityQty_0.getString());
    FIX::OrderRestrictions OrderRestrictions_0("MULTIPLECHARVALUE_3");
    noCapacities_0_0.set(OrderRestrictions_0);
    CpctyConfGrp_NoCapacities_0.insert(OrderRestrictions_0.getString());
    all_values.push_back(CpctyConfGrp_NoCapacities_0);
    all_compo_names.insert("CpctyConfGrp.NoCapacities");

    msg.addGroup(noCapacities_0_0);
  }
  // FinancingDetails
  multiset<string> FinancingDetails_9;
  FIX::AgreementCurrency AgreementCurrency_9("JPY");
  msg.set(AgreementCurrency_9);
  FinancingDetails_9.insert(AgreementCurrency_9.getString());
  FIX::AgreementDate AgreementDate_9("LOCALMKTDATE_1141602943");
  msg.set(AgreementDate_9);
  FinancingDetails_9.insert(AgreementDate_9.getString());
  FIX::AgreementDesc AgreementDesc_9("STRING_1605812221");
  msg.set(AgreementDesc_9);
  FinancingDetails_9.insert(AgreementDesc_9.getString());
  FIX::AgreementID AgreementID_9("STRING_532264731");
  msg.set(AgreementID_9);
  FinancingDetails_9.insert(AgreementID_9.getString());
  FIX::DeliveryType DeliveryType_9(0);
  msg.set(DeliveryType_9);
  FinancingDetails_9.insert(DeliveryType_9.getString());
  FIX::EndDate EndDate_9("LOCALMKTDATE_462089769");
  msg.set(EndDate_9);
  FinancingDetails_9.insert(EndDate_9.getString());
  FIX::MarginRatio MarginRatio_9;
  MarginRatio_9.setString("20.120000");
  msg.set(MarginRatio_9);
  FinancingDetails_9.insert(MarginRatio_9.getString());
  FIX::StartDate StartDate_9("LOCALMKTDATE_510983819");
  msg.set(StartDate_9);
  FinancingDetails_9.insert(StartDate_9.getString());
  FIX::TerminationType TerminationType_9(1);
  msg.set(TerminationType_9);
  FinancingDetails_9.insert(TerminationType_9.getString());
  all_values.push_back(FinancingDetails_9);
  all_compo_names.insert("FinancingDetails");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::Confirmation::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_24;
    FIX::EncodedLegIssuer EncodedLegIssuer_24("DATA_1169301755");
    noLegs_0_0.set(EncodedLegIssuer_24);
    InstrumentLeg_24.insert(EncodedLegIssuer_24.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_24(1035232074);
    noLegs_0_0.set(EncodedLegIssuerLen_24);
    InstrumentLeg_24.insert(EncodedLegIssuerLen_24.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_24("DATA_1476832512");
    noLegs_0_0.set(EncodedLegSecurityDesc_24);
    InstrumentLeg_24.insert(EncodedLegSecurityDesc_24.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_24(410619001);
    noLegs_0_0.set(EncodedLegSecurityDescLen_24);
    InstrumentLeg_24.insert(EncodedLegSecurityDescLen_24.getString());
    FIX::LegCFICode LegCFICode_24("STRING_588456461");
    noLegs_0_0.set(LegCFICode_24);
    InstrumentLeg_24.insert(LegCFICode_24.getString());
    FIX::LegContractMultiplier LegContractMultiplier_24;
    LegContractMultiplier_24.setString("16578001");
    noLegs_0_0.set(LegContractMultiplier_24);
    InstrumentLeg_24.insert(LegContractMultiplier_24.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_24(2056947792);
    noLegs_0_0.set(LegContractMultiplierUnit_24);
    InstrumentLeg_24.insert(LegContractMultiplierUnit_24.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_24("MONTHYEAR_812489071");
    noLegs_0_0.set(LegContractSettlMonth_24);
    InstrumentLeg_24.insert(LegContractSettlMonth_24.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_24("COUNTRY_899483202");
    noLegs_0_0.set(LegCountryOfIssue_24);
    InstrumentLeg_24.insert(LegCountryOfIssue_24.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_24("LOCALMKTDATE_1508602297");
    noLegs_0_0.set(LegCouponPaymentDate_24);
    InstrumentLeg_24.insert(LegCouponPaymentDate_24.getString());
    FIX::LegCouponRate LegCouponRate_24;
    LegCouponRate_24.setString("18.520000");
    noLegs_0_0.set(LegCouponRate_24);
    InstrumentLeg_24.insert(LegCouponRate_24.getString());
    FIX::LegCreditRating LegCreditRating_24("STRING_1676436613");
    noLegs_0_0.set(LegCreditRating_24);
    InstrumentLeg_24.insert(LegCreditRating_24.getString());
    FIX::LegCurrency LegCurrency_24("CAN");
    noLegs_0_0.set(LegCurrency_24);
    InstrumentLeg_24.insert(LegCurrency_24.getString());
    FIX::LegDatedDate LegDatedDate_24("LOCALMKTDATE_1442025726");
    noLegs_0_0.set(LegDatedDate_24);
    InstrumentLeg_24.insert(LegDatedDate_24.getString());
    FIX::LegExerciseStyle LegExerciseStyle_24(1531849562);
    noLegs_0_0.set(LegExerciseStyle_24);
    InstrumentLeg_24.insert(LegExerciseStyle_24.getString());
    FIX::LegFactor LegFactor_24;
    LegFactor_24.setString("19601934");
    noLegs_0_0.set(LegFactor_24);
    InstrumentLeg_24.insert(LegFactor_24.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_24(1195243871);
    noLegs_0_0.set(LegFlowScheduleType_24);
    InstrumentLeg_24.insert(LegFlowScheduleType_24.getString());
    FIX::LegInstrRegistry LegInstrRegistry_24("STRING_1799988042");
    noLegs_0_0.set(LegInstrRegistry_24);
    InstrumentLeg_24.insert(LegInstrRegistry_24.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_24("LOCALMKTDATE_1212478860");
    noLegs_0_0.set(LegInterestAccrualDate_24);
    InstrumentLeg_24.insert(LegInterestAccrualDate_24.getString());
    FIX::LegIssueDate LegIssueDate_24("LOCALMKTDATE_109411341");
    noLegs_0_0.set(LegIssueDate_24);
    InstrumentLeg_24.insert(LegIssueDate_24.getString());
    FIX::LegIssuer LegIssuer_24("STRING_1064804786");
    noLegs_0_0.set(LegIssuer_24);
    InstrumentLeg_24.insert(LegIssuer_24.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_24("STRING_206598156");
    noLegs_0_0.set(LegLocaleOfIssue_24);
    InstrumentLeg_24.insert(LegLocaleOfIssue_24.getString());
    FIX::LegMaturityDate LegMaturityDate_24("LOCALMKTDATE_1715223562");
    noLegs_0_0.set(LegMaturityDate_24);
    InstrumentLeg_24.insert(LegMaturityDate_24.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_24("MONTHYEAR_1597069517");
    noLegs_0_0.set(LegMaturityMonthYear_24);
    InstrumentLeg_24.insert(LegMaturityMonthYear_24.getString());
    FIX::LegMaturityTime LegMaturityTime_24("TZTIMEONLY_1156514792");
    noLegs_0_0.set(LegMaturityTime_24);
    InstrumentLeg_24.insert(LegMaturityTime_24.getString());
    FIX::LegOptAttribute LegOptAttribute_24('2');
    noLegs_0_0.set(LegOptAttribute_24);
    InstrumentLeg_24.insert(LegOptAttribute_24.getString());
    FIX::LegOptionRatio LegOptionRatio_24;
    LegOptionRatio_24.setString("3220778");
    noLegs_0_0.set(LegOptionRatio_24);
    InstrumentLeg_24.insert(LegOptionRatio_24.getString());
    FIX::LegPool LegPool_24("STRING_1667498611");
    noLegs_0_0.set(LegPool_24);
    InstrumentLeg_24.insert(LegPool_24.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_24("STRING_249500284");
    noLegs_0_0.set(LegPriceUnitOfMeasure_24);
    InstrumentLeg_24.insert(LegPriceUnitOfMeasure_24.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_24;
    LegPriceUnitOfMeasureQty_24.setString("847587");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_24);
    InstrumentLeg_24.insert(LegPriceUnitOfMeasureQty_24.getString());
    FIX::LegProduct LegProduct_24(689316719);
    noLegs_0_0.set(LegProduct_24);
    InstrumentLeg_24.insert(LegProduct_24.getString());
    FIX::LegPutOrCall LegPutOrCall_24(1284732358);
    noLegs_0_0.set(LegPutOrCall_24);
    InstrumentLeg_24.insert(LegPutOrCall_24.getString());
    FIX::LegRatioQty LegRatioQty_24;
    LegRatioQty_24.setString("15615912");
    noLegs_0_0.set(LegRatioQty_24);
    InstrumentLeg_24.insert(LegRatioQty_24.getString());
    FIX::LegRedemptionDate LegRedemptionDate_24("LOCALMKTDATE_1099935720");
    noLegs_0_0.set(LegRedemptionDate_24);
    InstrumentLeg_24.insert(LegRedemptionDate_24.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_24("STRING_1873188819");
    noLegs_0_0.set(LegRepoCollateralSecurityType_24);
    InstrumentLeg_24.insert(LegRepoCollateralSecurityType_24.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_24;
    LegRepurchaseRate_24.setString("77.890000");
    noLegs_0_0.set(LegRepurchaseRate_24);
    InstrumentLeg_24.insert(LegRepurchaseRate_24.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_24(1009399864);
    noLegs_0_0.set(LegRepurchaseTerm_24);
    InstrumentLeg_24.insert(LegRepurchaseTerm_24.getString());
    FIX::LegSecurityDesc LegSecurityDesc_24("STRING_538194242");
    noLegs_0_0.set(LegSecurityDesc_24);
    InstrumentLeg_24.insert(LegSecurityDesc_24.getString());
    FIX::LegSecurityExchange LegSecurityExchange_24("EXCHANGE_1971390992");
    noLegs_0_0.set(LegSecurityExchange_24);
    InstrumentLeg_24.insert(LegSecurityExchange_24.getString());
    FIX::LegSecurityID LegSecurityID_24("STRING_370518513");
    noLegs_0_0.set(LegSecurityID_24);
    InstrumentLeg_24.insert(LegSecurityID_24.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_24("STRING_576636095");
    noLegs_0_0.set(LegSecurityIDSource_24);
    InstrumentLeg_24.insert(LegSecurityIDSource_24.getString());
    FIX::LegSecuritySubType LegSecuritySubType_24("STRING_1500343957");
    noLegs_0_0.set(LegSecuritySubType_24);
    InstrumentLeg_24.insert(LegSecuritySubType_24.getString());
    FIX::LegSecurityType LegSecurityType_24("STRING_1137552641");
    noLegs_0_0.set(LegSecurityType_24);
    InstrumentLeg_24.insert(LegSecurityType_24.getString());
    FIX::LegSide LegSide_24('4');
    noLegs_0_0.set(LegSide_24);
    InstrumentLeg_24.insert(LegSide_24.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_24("STRING_794886036");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_24);
    InstrumentLeg_24.insert(LegStateOrProvinceOfIssue_24.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_24("GBP");
    noLegs_0_0.set(LegStrikeCurrency_24);
    InstrumentLeg_24.insert(LegStrikeCurrency_24.getString());
    FIX::LegStrikePrice LegStrikePrice_24;
    LegStrikePrice_24.setString("19901299");
    noLegs_0_0.set(LegStrikePrice_24);
    InstrumentLeg_24.insert(LegStrikePrice_24.getString());
    FIX::LegSymbol LegSymbol_24("STRING_174422949");
    noLegs_0_0.set(LegSymbol_24);
    InstrumentLeg_24.insert(LegSymbol_24.getString());
    FIX::LegSymbolSfx LegSymbolSfx_24("STRING_1030080991");
    noLegs_0_0.set(LegSymbolSfx_24);
    InstrumentLeg_24.insert(LegSymbolSfx_24.getString());
    FIX::LegTimeUnit LegTimeUnit_24("STRING_2099541248");
    noLegs_0_0.set(LegTimeUnit_24);
    InstrumentLeg_24.insert(LegTimeUnit_24.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_24("STRING_1239227736");
    noLegs_0_0.set(LegUnitOfMeasure_24);
    InstrumentLeg_24.insert(LegUnitOfMeasure_24.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_24;
    LegUnitOfMeasureQty_24.setString("12366791");
    noLegs_0_0.set(LegUnitOfMeasureQty_24);
    InstrumentLeg_24.insert(LegUnitOfMeasureQty_24.getString());
    all_values.push_back(InstrumentLeg_24);
    all_compo_names.insert("InstrumentLeg");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::Confirmation::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_47;
      FIX::LegSecurityAltID LegSecurityAltID_47("STRING_688813605");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_47);
      LegSecAltIDGrp_NoLegSecurityAltID_47.insert(LegSecurityAltID_47.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_47("STRING_245710291");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_47);
      LegSecAltIDGrp_NoLegSecurityAltID_47.insert(LegSecurityAltIDSource_47.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_47);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::Confirmation::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_48;
      FIX::LegSecurityAltID LegSecurityAltID_48("STRING_1697110846");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_48);
      LegSecAltIDGrp_NoLegSecurityAltID_48.insert(LegSecurityAltID_48.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_48("STRING_1010891487");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_48);
      LegSecAltIDGrp_NoLegSecurityAltID_48.insert(LegSecurityAltIDSource_48.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_48);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::Confirmation::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_25;
    FIX::EncodedLegIssuer EncodedLegIssuer_25("DATA_1913208902");
    noLegs_0_1.set(EncodedLegIssuer_25);
    InstrumentLeg_25.insert(EncodedLegIssuer_25.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_25(1946611130);
    noLegs_0_1.set(EncodedLegIssuerLen_25);
    InstrumentLeg_25.insert(EncodedLegIssuerLen_25.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_25("DATA_1095650221");
    noLegs_0_1.set(EncodedLegSecurityDesc_25);
    InstrumentLeg_25.insert(EncodedLegSecurityDesc_25.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_25(455041973);
    noLegs_0_1.set(EncodedLegSecurityDescLen_25);
    InstrumentLeg_25.insert(EncodedLegSecurityDescLen_25.getString());
    FIX::LegCFICode LegCFICode_25("STRING_1083859840");
    noLegs_0_1.set(LegCFICode_25);
    InstrumentLeg_25.insert(LegCFICode_25.getString());
    FIX::LegContractMultiplier LegContractMultiplier_25;
    LegContractMultiplier_25.setString("5097578");
    noLegs_0_1.set(LegContractMultiplier_25);
    InstrumentLeg_25.insert(LegContractMultiplier_25.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_25(1554977693);
    noLegs_0_1.set(LegContractMultiplierUnit_25);
    InstrumentLeg_25.insert(LegContractMultiplierUnit_25.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_25("MONTHYEAR_809565012");
    noLegs_0_1.set(LegContractSettlMonth_25);
    InstrumentLeg_25.insert(LegContractSettlMonth_25.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_25("COUNTRY_1581665608");
    noLegs_0_1.set(LegCountryOfIssue_25);
    InstrumentLeg_25.insert(LegCountryOfIssue_25.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_25("LOCALMKTDATE_416893909");
    noLegs_0_1.set(LegCouponPaymentDate_25);
    InstrumentLeg_25.insert(LegCouponPaymentDate_25.getString());
    FIX::LegCouponRate LegCouponRate_25;
    LegCouponRate_25.setString("92.540000");
    noLegs_0_1.set(LegCouponRate_25);
    InstrumentLeg_25.insert(LegCouponRate_25.getString());
    FIX::LegCreditRating LegCreditRating_25("STRING_1405572952");
    noLegs_0_1.set(LegCreditRating_25);
    InstrumentLeg_25.insert(LegCreditRating_25.getString());
    FIX::LegCurrency LegCurrency_25("EUR");
    noLegs_0_1.set(LegCurrency_25);
    InstrumentLeg_25.insert(LegCurrency_25.getString());
    FIX::LegDatedDate LegDatedDate_25("LOCALMKTDATE_758433262");
    noLegs_0_1.set(LegDatedDate_25);
    InstrumentLeg_25.insert(LegDatedDate_25.getString());
    FIX::LegExerciseStyle LegExerciseStyle_25(1924965064);
    noLegs_0_1.set(LegExerciseStyle_25);
    InstrumentLeg_25.insert(LegExerciseStyle_25.getString());
    FIX::LegFactor LegFactor_25;
    LegFactor_25.setString("19292876");
    noLegs_0_1.set(LegFactor_25);
    InstrumentLeg_25.insert(LegFactor_25.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_25(1553319298);
    noLegs_0_1.set(LegFlowScheduleType_25);
    InstrumentLeg_25.insert(LegFlowScheduleType_25.getString());
    FIX::LegInstrRegistry LegInstrRegistry_25("STRING_299399971");
    noLegs_0_1.set(LegInstrRegistry_25);
    InstrumentLeg_25.insert(LegInstrRegistry_25.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_25("LOCALMKTDATE_1746889762");
    noLegs_0_1.set(LegInterestAccrualDate_25);
    InstrumentLeg_25.insert(LegInterestAccrualDate_25.getString());
    FIX::LegIssueDate LegIssueDate_25("LOCALMKTDATE_1395965557");
    noLegs_0_1.set(LegIssueDate_25);
    InstrumentLeg_25.insert(LegIssueDate_25.getString());
    FIX::LegIssuer LegIssuer_25("STRING_473822920");
    noLegs_0_1.set(LegIssuer_25);
    InstrumentLeg_25.insert(LegIssuer_25.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_25("STRING_629487105");
    noLegs_0_1.set(LegLocaleOfIssue_25);
    InstrumentLeg_25.insert(LegLocaleOfIssue_25.getString());
    FIX::LegMaturityDate LegMaturityDate_25("LOCALMKTDATE_1348023158");
    noLegs_0_1.set(LegMaturityDate_25);
    InstrumentLeg_25.insert(LegMaturityDate_25.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_25("MONTHYEAR_1713050656");
    noLegs_0_1.set(LegMaturityMonthYear_25);
    InstrumentLeg_25.insert(LegMaturityMonthYear_25.getString());
    FIX::LegMaturityTime LegMaturityTime_25("TZTIMEONLY_1866166252");
    noLegs_0_1.set(LegMaturityTime_25);
    InstrumentLeg_25.insert(LegMaturityTime_25.getString());
    FIX::LegOptAttribute LegOptAttribute_25('8');
    noLegs_0_1.set(LegOptAttribute_25);
    InstrumentLeg_25.insert(LegOptAttribute_25.getString());
    FIX::LegOptionRatio LegOptionRatio_25;
    LegOptionRatio_25.setString("2543806");
    noLegs_0_1.set(LegOptionRatio_25);
    InstrumentLeg_25.insert(LegOptionRatio_25.getString());
    FIX::LegPool LegPool_25("STRING_2111876543");
    noLegs_0_1.set(LegPool_25);
    InstrumentLeg_25.insert(LegPool_25.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_25("STRING_417447870");
    noLegs_0_1.set(LegPriceUnitOfMeasure_25);
    InstrumentLeg_25.insert(LegPriceUnitOfMeasure_25.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_25;
    LegPriceUnitOfMeasureQty_25.setString("12652721");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_25);
    InstrumentLeg_25.insert(LegPriceUnitOfMeasureQty_25.getString());
    FIX::LegProduct LegProduct_25(1877601798);
    noLegs_0_1.set(LegProduct_25);
    InstrumentLeg_25.insert(LegProduct_25.getString());
    FIX::LegPutOrCall LegPutOrCall_25(216575352);
    noLegs_0_1.set(LegPutOrCall_25);
    InstrumentLeg_25.insert(LegPutOrCall_25.getString());
    FIX::LegRatioQty LegRatioQty_25;
    LegRatioQty_25.setString("2134386");
    noLegs_0_1.set(LegRatioQty_25);
    InstrumentLeg_25.insert(LegRatioQty_25.getString());
    FIX::LegRedemptionDate LegRedemptionDate_25("LOCALMKTDATE_185160123");
    noLegs_0_1.set(LegRedemptionDate_25);
    InstrumentLeg_25.insert(LegRedemptionDate_25.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_25("STRING_1300435193");
    noLegs_0_1.set(LegRepoCollateralSecurityType_25);
    InstrumentLeg_25.insert(LegRepoCollateralSecurityType_25.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_25;
    LegRepurchaseRate_25.setString("64.930000");
    noLegs_0_1.set(LegRepurchaseRate_25);
    InstrumentLeg_25.insert(LegRepurchaseRate_25.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_25(1740137817);
    noLegs_0_1.set(LegRepurchaseTerm_25);
    InstrumentLeg_25.insert(LegRepurchaseTerm_25.getString());
    FIX::LegSecurityDesc LegSecurityDesc_25("STRING_2110000205");
    noLegs_0_1.set(LegSecurityDesc_25);
    InstrumentLeg_25.insert(LegSecurityDesc_25.getString());
    FIX::LegSecurityExchange LegSecurityExchange_25("EXCHANGE_157378454");
    noLegs_0_1.set(LegSecurityExchange_25);
    InstrumentLeg_25.insert(LegSecurityExchange_25.getString());
    FIX::LegSecurityID LegSecurityID_25("STRING_9548078");
    noLegs_0_1.set(LegSecurityID_25);
    InstrumentLeg_25.insert(LegSecurityID_25.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_25("STRING_1310275811");
    noLegs_0_1.set(LegSecurityIDSource_25);
    InstrumentLeg_25.insert(LegSecurityIDSource_25.getString());
    FIX::LegSecuritySubType LegSecuritySubType_25("STRING_1562951406");
    noLegs_0_1.set(LegSecuritySubType_25);
    InstrumentLeg_25.insert(LegSecuritySubType_25.getString());
    FIX::LegSecurityType LegSecurityType_25("STRING_796960501");
    noLegs_0_1.set(LegSecurityType_25);
    InstrumentLeg_25.insert(LegSecurityType_25.getString());
    FIX::LegSide LegSide_25('1');
    noLegs_0_1.set(LegSide_25);
    InstrumentLeg_25.insert(LegSide_25.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_25("STRING_173901020");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_25);
    InstrumentLeg_25.insert(LegStateOrProvinceOfIssue_25.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_25("EUR");
    noLegs_0_1.set(LegStrikeCurrency_25);
    InstrumentLeg_25.insert(LegStrikeCurrency_25.getString());
    FIX::LegStrikePrice LegStrikePrice_25;
    LegStrikePrice_25.setString("17272203");
    noLegs_0_1.set(LegStrikePrice_25);
    InstrumentLeg_25.insert(LegStrikePrice_25.getString());
    FIX::LegSymbol LegSymbol_25("STRING_873841888");
    noLegs_0_1.set(LegSymbol_25);
    InstrumentLeg_25.insert(LegSymbol_25.getString());
    FIX::LegSymbolSfx LegSymbolSfx_25("STRING_468397611");
    noLegs_0_1.set(LegSymbolSfx_25);
    InstrumentLeg_25.insert(LegSymbolSfx_25.getString());
    FIX::LegTimeUnit LegTimeUnit_25("STRING_975702228");
    noLegs_0_1.set(LegTimeUnit_25);
    InstrumentLeg_25.insert(LegTimeUnit_25.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_25("STRING_1347664809");
    noLegs_0_1.set(LegUnitOfMeasure_25);
    InstrumentLeg_25.insert(LegUnitOfMeasure_25.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_25;
    LegUnitOfMeasureQty_25.setString("10978847");
    noLegs_0_1.set(LegUnitOfMeasureQty_25);
    InstrumentLeg_25.insert(LegUnitOfMeasureQty_25.getString());
    all_values.push_back(InstrumentLeg_25);
    all_compo_names.insert("InstrumentLeg");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::Confirmation::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_49;
      FIX::LegSecurityAltID LegSecurityAltID_49("STRING_913231817");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_49);
      LegSecAltIDGrp_NoLegSecurityAltID_49.insert(LegSecurityAltID_49.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_49("STRING_816567321");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_49);
      LegSecAltIDGrp_NoLegSecurityAltID_49.insert(LegSecurityAltIDSource_49.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_49);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    msg.addGroup(noLegs_0_1);
  }
  {
    FIX50SP2::Confirmation::NoLegs noLegs_0_2;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_26;
    FIX::EncodedLegIssuer EncodedLegIssuer_26("DATA_1044062410");
    noLegs_0_2.set(EncodedLegIssuer_26);
    InstrumentLeg_26.insert(EncodedLegIssuer_26.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_26(1167612431);
    noLegs_0_2.set(EncodedLegIssuerLen_26);
    InstrumentLeg_26.insert(EncodedLegIssuerLen_26.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_26("DATA_780960217");
    noLegs_0_2.set(EncodedLegSecurityDesc_26);
    InstrumentLeg_26.insert(EncodedLegSecurityDesc_26.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_26(1461510281);
    noLegs_0_2.set(EncodedLegSecurityDescLen_26);
    InstrumentLeg_26.insert(EncodedLegSecurityDescLen_26.getString());
    FIX::LegCFICode LegCFICode_26("STRING_285400885");
    noLegs_0_2.set(LegCFICode_26);
    InstrumentLeg_26.insert(LegCFICode_26.getString());
    FIX::LegContractMultiplier LegContractMultiplier_26;
    LegContractMultiplier_26.setString("5110783");
    noLegs_0_2.set(LegContractMultiplier_26);
    InstrumentLeg_26.insert(LegContractMultiplier_26.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_26(1678085633);
    noLegs_0_2.set(LegContractMultiplierUnit_26);
    InstrumentLeg_26.insert(LegContractMultiplierUnit_26.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_26("MONTHYEAR_498839559");
    noLegs_0_2.set(LegContractSettlMonth_26);
    InstrumentLeg_26.insert(LegContractSettlMonth_26.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_26("COUNTRY_696238490");
    noLegs_0_2.set(LegCountryOfIssue_26);
    InstrumentLeg_26.insert(LegCountryOfIssue_26.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_26("LOCALMKTDATE_831037178");
    noLegs_0_2.set(LegCouponPaymentDate_26);
    InstrumentLeg_26.insert(LegCouponPaymentDate_26.getString());
    FIX::LegCouponRate LegCouponRate_26;
    LegCouponRate_26.setString("60.530000");
    noLegs_0_2.set(LegCouponRate_26);
    InstrumentLeg_26.insert(LegCouponRate_26.getString());
    FIX::LegCreditRating LegCreditRating_26("STRING_288892659");
    noLegs_0_2.set(LegCreditRating_26);
    InstrumentLeg_26.insert(LegCreditRating_26.getString());
    FIX::LegCurrency LegCurrency_26("CAN");
    noLegs_0_2.set(LegCurrency_26);
    InstrumentLeg_26.insert(LegCurrency_26.getString());
    FIX::LegDatedDate LegDatedDate_26("LOCALMKTDATE_298440738");
    noLegs_0_2.set(LegDatedDate_26);
    InstrumentLeg_26.insert(LegDatedDate_26.getString());
    FIX::LegExerciseStyle LegExerciseStyle_26(2103829547);
    noLegs_0_2.set(LegExerciseStyle_26);
    InstrumentLeg_26.insert(LegExerciseStyle_26.getString());
    FIX::LegFactor LegFactor_26;
    LegFactor_26.setString("7948822");
    noLegs_0_2.set(LegFactor_26);
    InstrumentLeg_26.insert(LegFactor_26.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_26(1095401239);
    noLegs_0_2.set(LegFlowScheduleType_26);
    InstrumentLeg_26.insert(LegFlowScheduleType_26.getString());
    FIX::LegInstrRegistry LegInstrRegistry_26("STRING_1043533412");
    noLegs_0_2.set(LegInstrRegistry_26);
    InstrumentLeg_26.insert(LegInstrRegistry_26.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_26("LOCALMKTDATE_968783286");
    noLegs_0_2.set(LegInterestAccrualDate_26);
    InstrumentLeg_26.insert(LegInterestAccrualDate_26.getString());
    FIX::LegIssueDate LegIssueDate_26("LOCALMKTDATE_1669843157");
    noLegs_0_2.set(LegIssueDate_26);
    InstrumentLeg_26.insert(LegIssueDate_26.getString());
    FIX::LegIssuer LegIssuer_26("STRING_1912524909");
    noLegs_0_2.set(LegIssuer_26);
    InstrumentLeg_26.insert(LegIssuer_26.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_26("STRING_548519956");
    noLegs_0_2.set(LegLocaleOfIssue_26);
    InstrumentLeg_26.insert(LegLocaleOfIssue_26.getString());
    FIX::LegMaturityDate LegMaturityDate_26("LOCALMKTDATE_396201397");
    noLegs_0_2.set(LegMaturityDate_26);
    InstrumentLeg_26.insert(LegMaturityDate_26.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_26("MONTHYEAR_233438872");
    noLegs_0_2.set(LegMaturityMonthYear_26);
    InstrumentLeg_26.insert(LegMaturityMonthYear_26.getString());
    FIX::LegMaturityTime LegMaturityTime_26("TZTIMEONLY_1524222184");
    noLegs_0_2.set(LegMaturityTime_26);
    InstrumentLeg_26.insert(LegMaturityTime_26.getString());
    FIX::LegOptAttribute LegOptAttribute_26('1');
    noLegs_0_2.set(LegOptAttribute_26);
    InstrumentLeg_26.insert(LegOptAttribute_26.getString());
    FIX::LegOptionRatio LegOptionRatio_26;
    LegOptionRatio_26.setString("13313235");
    noLegs_0_2.set(LegOptionRatio_26);
    InstrumentLeg_26.insert(LegOptionRatio_26.getString());
    FIX::LegPool LegPool_26("STRING_1700463922");
    noLegs_0_2.set(LegPool_26);
    InstrumentLeg_26.insert(LegPool_26.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_26("STRING_509614376");
    noLegs_0_2.set(LegPriceUnitOfMeasure_26);
    InstrumentLeg_26.insert(LegPriceUnitOfMeasure_26.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_26;
    LegPriceUnitOfMeasureQty_26.setString("4072");
    noLegs_0_2.set(LegPriceUnitOfMeasureQty_26);
    InstrumentLeg_26.insert(LegPriceUnitOfMeasureQty_26.getString());
    FIX::LegProduct LegProduct_26(597042685);
    noLegs_0_2.set(LegProduct_26);
    InstrumentLeg_26.insert(LegProduct_26.getString());
    FIX::LegPutOrCall LegPutOrCall_26(1677226807);
    noLegs_0_2.set(LegPutOrCall_26);
    InstrumentLeg_26.insert(LegPutOrCall_26.getString());
    FIX::LegRatioQty LegRatioQty_26;
    LegRatioQty_26.setString("7813674");
    noLegs_0_2.set(LegRatioQty_26);
    InstrumentLeg_26.insert(LegRatioQty_26.getString());
    FIX::LegRedemptionDate LegRedemptionDate_26("LOCALMKTDATE_2058552966");
    noLegs_0_2.set(LegRedemptionDate_26);
    InstrumentLeg_26.insert(LegRedemptionDate_26.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_26("STRING_1962627692");
    noLegs_0_2.set(LegRepoCollateralSecurityType_26);
    InstrumentLeg_26.insert(LegRepoCollateralSecurityType_26.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_26;
    LegRepurchaseRate_26.setString("58.470000");
    noLegs_0_2.set(LegRepurchaseRate_26);
    InstrumentLeg_26.insert(LegRepurchaseRate_26.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_26(1589154951);
    noLegs_0_2.set(LegRepurchaseTerm_26);
    InstrumentLeg_26.insert(LegRepurchaseTerm_26.getString());
    FIX::LegSecurityDesc LegSecurityDesc_26("STRING_313983604");
    noLegs_0_2.set(LegSecurityDesc_26);
    InstrumentLeg_26.insert(LegSecurityDesc_26.getString());
    FIX::LegSecurityExchange LegSecurityExchange_26("EXCHANGE_1988684337");
    noLegs_0_2.set(LegSecurityExchange_26);
    InstrumentLeg_26.insert(LegSecurityExchange_26.getString());
    FIX::LegSecurityID LegSecurityID_26("STRING_272708482");
    noLegs_0_2.set(LegSecurityID_26);
    InstrumentLeg_26.insert(LegSecurityID_26.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_26("STRING_1536019657");
    noLegs_0_2.set(LegSecurityIDSource_26);
    InstrumentLeg_26.insert(LegSecurityIDSource_26.getString());
    FIX::LegSecuritySubType LegSecuritySubType_26("STRING_130093349");
    noLegs_0_2.set(LegSecuritySubType_26);
    InstrumentLeg_26.insert(LegSecuritySubType_26.getString());
    FIX::LegSecurityType LegSecurityType_26("STRING_1066262217");
    noLegs_0_2.set(LegSecurityType_26);
    InstrumentLeg_26.insert(LegSecurityType_26.getString());
    FIX::LegSide LegSide_26('7');
    noLegs_0_2.set(LegSide_26);
    InstrumentLeg_26.insert(LegSide_26.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_26("STRING_428534087");
    noLegs_0_2.set(LegStateOrProvinceOfIssue_26);
    InstrumentLeg_26.insert(LegStateOrProvinceOfIssue_26.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_26("EUR");
    noLegs_0_2.set(LegStrikeCurrency_26);
    InstrumentLeg_26.insert(LegStrikeCurrency_26.getString());
    FIX::LegStrikePrice LegStrikePrice_26;
    LegStrikePrice_26.setString("15239353");
    noLegs_0_2.set(LegStrikePrice_26);
    InstrumentLeg_26.insert(LegStrikePrice_26.getString());
    FIX::LegSymbol LegSymbol_26("STRING_2066141528");
    noLegs_0_2.set(LegSymbol_26);
    InstrumentLeg_26.insert(LegSymbol_26.getString());
    FIX::LegSymbolSfx LegSymbolSfx_26("STRING_384132419");
    noLegs_0_2.set(LegSymbolSfx_26);
    InstrumentLeg_26.insert(LegSymbolSfx_26.getString());
    FIX::LegTimeUnit LegTimeUnit_26("STRING_1046294835");
    noLegs_0_2.set(LegTimeUnit_26);
    InstrumentLeg_26.insert(LegTimeUnit_26.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_26("STRING_1831182789");
    noLegs_0_2.set(LegUnitOfMeasure_26);
    InstrumentLeg_26.insert(LegUnitOfMeasure_26.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_26;
    LegUnitOfMeasureQty_26.setString("9326523");
    noLegs_0_2.set(LegUnitOfMeasureQty_26);
    InstrumentLeg_26.insert(LegUnitOfMeasureQty_26.getString());
    all_values.push_back(InstrumentLeg_26);
    all_compo_names.insert("InstrumentLeg");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::Confirmation::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_50;
      FIX::LegSecurityAltID LegSecurityAltID_50("STRING_2064621662");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltID_50);
      LegSecAltIDGrp_NoLegSecurityAltID_50.insert(LegSecurityAltID_50.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_50("STRING_309390912");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltIDSource_50);
      LegSecAltIDGrp_NoLegSecurityAltID_50.insert(LegSecurityAltIDSource_50.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_50);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::Confirmation::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_51;
      FIX::LegSecurityAltID LegSecurityAltID_51("STRING_1038878791");
      noLegSecurityAltID_2_1_1.set(LegSecurityAltID_51);
      LegSecAltIDGrp_NoLegSecurityAltID_51.insert(LegSecurityAltID_51.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_51("STRING_1248461603");
      noLegSecurityAltID_2_1_1.set(LegSecurityAltIDSource_51);
      LegSecAltIDGrp_NoLegSecurityAltID_51.insert(LegSecurityAltIDSource_51.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_51);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_1);
    }
    {
      FIX50SP2::Confirmation::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_52;
      FIX::LegSecurityAltID LegSecurityAltID_52("STRING_2009854835");
      noLegSecurityAltID_2_1_2.set(LegSecurityAltID_52);
      LegSecAltIDGrp_NoLegSecurityAltID_52.insert(LegSecurityAltID_52.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_52("STRING_1548493167");
      noLegSecurityAltID_2_1_2.set(LegSecurityAltIDSource_52);
      LegSecAltIDGrp_NoLegSecurityAltID_52.insert(LegSecurityAltIDSource_52.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_52);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_2);
    }
    msg.addGroup(noLegs_0_2);
  }
  // Instrument
  multiset<string> Instrument_12;
  FIX::AttachmentPoint AttachmentPoint_12;
  AttachmentPoint_12.setString("88.660000");
  msg.set(AttachmentPoint_12);
  Instrument_12.insert(AttachmentPoint_12.getString());
  FIX::CFICode CFICode_12("STRING_459413872");
  msg.set(CFICode_12);
  Instrument_12.insert(CFICode_12.getString());
  FIX::CPProgram CPProgram_12(1);
  msg.set(CPProgram_12);
  Instrument_12.insert(CPProgram_12.getString());
  FIX::CPRegType CPRegType_12("STRING_2030236346");
  msg.set(CPRegType_12);
  Instrument_12.insert(CPRegType_12.getString());
  FIX::CapPrice CapPrice_12;
  CapPrice_12.setString("3704831");
  msg.set(CapPrice_12);
  Instrument_12.insert(CapPrice_12.getString());
  FIX::ContractMultiplier ContractMultiplier_12;
  ContractMultiplier_12.setString("8933803");
  msg.set(ContractMultiplier_12);
  Instrument_12.insert(ContractMultiplier_12.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_12(1);
  msg.set(ContractMultiplierUnit_12);
  Instrument_12.insert(ContractMultiplierUnit_12.getString());
  FIX::ContractSettlMonth ContractSettlMonth_12("MONTHYEAR_1959638141");
  msg.set(ContractSettlMonth_12);
  Instrument_12.insert(ContractSettlMonth_12.getString());
  FIX::CountryOfIssue CountryOfIssue_12("COUNTRY_1207363975");
  msg.set(CountryOfIssue_12);
  Instrument_12.insert(CountryOfIssue_12.getString());
  FIX::CouponPaymentDate CouponPaymentDate_12("LOCALMKTDATE_1016399235");
  msg.set(CouponPaymentDate_12);
  Instrument_12.insert(CouponPaymentDate_12.getString());
  FIX::CouponRate CouponRate_12;
  CouponRate_12.setString("29.750000");
  msg.set(CouponRate_12);
  Instrument_12.insert(CouponRate_12.getString());
  FIX::CreditRating CreditRating_12("STRING_595899984");
  msg.set(CreditRating_12);
  Instrument_12.insert(CreditRating_12.getString());
  FIX::DatedDate DatedDate_12("LOCALMKTDATE_1146492584");
  msg.set(DatedDate_12);
  Instrument_12.insert(DatedDate_12.getString());
  FIX::DetachmentPoint DetachmentPoint_12;
  DetachmentPoint_12.setString("51.930000");
  msg.set(DetachmentPoint_12);
  Instrument_12.insert(DetachmentPoint_12.getString());
  FIX::EncodedIssuer EncodedIssuer_12("DATA_1363850500");
  msg.set(EncodedIssuer_12);
  Instrument_12.insert(EncodedIssuer_12.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_12(1575026671);
  msg.set(EncodedIssuerLen_12);
  Instrument_12.insert(EncodedIssuerLen_12.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_12("DATA_26249661");
  msg.set(EncodedSecurityDesc_12);
  Instrument_12.insert(EncodedSecurityDesc_12.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_12(779199634);
  msg.set(EncodedSecurityDescLen_12);
  Instrument_12.insert(EncodedSecurityDescLen_12.getString());
  FIX::ExerciseStyle ExerciseStyle_12(2);
  msg.set(ExerciseStyle_12);
  Instrument_12.insert(ExerciseStyle_12.getString());
  FIX::Factor Factor_12;
  Factor_12.setString("20923911");
  msg.set(Factor_12);
  Instrument_12.insert(Factor_12.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_12(false);
  msg.set(FlexProductEligibilityIndicator_12);
  Instrument_12.insert(FlexProductEligibilityIndicator_12.getString());
  FIX::FlexibleIndicator FlexibleIndicator_12(false);
  msg.set(FlexibleIndicator_12);
  Instrument_12.insert(FlexibleIndicator_12.getString());
  FIX::FloorPrice FloorPrice_12;
  FloorPrice_12.setString("17760903");
  msg.set(FloorPrice_12);
  Instrument_12.insert(FloorPrice_12.getString());
  FIX::FlowScheduleType FlowScheduleType_12(4);
  msg.set(FlowScheduleType_12);
  Instrument_12.insert(FlowScheduleType_12.getString());
  FIX::InstrRegistry InstrRegistry_12("STRING_1292785770");
  msg.set(InstrRegistry_12);
  Instrument_12.insert(InstrRegistry_12.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_12('1');
  msg.set(InstrmtAssignmentMethod_12);
  Instrument_12.insert(InstrmtAssignmentMethod_12.getString());
  FIX::InterestAccrualDate InterestAccrualDate_12("LOCALMKTDATE_257891694");
  msg.set(InterestAccrualDate_12);
  Instrument_12.insert(InterestAccrualDate_12.getString());
  FIX::IssueDate IssueDate_12("LOCALMKTDATE_184180913");
  msg.set(IssueDate_12);
  Instrument_12.insert(IssueDate_12.getString());
  FIX::Issuer Issuer_12("STRING_794206301");
  msg.set(Issuer_12);
  Instrument_12.insert(Issuer_12.getString());
  FIX::ListMethod ListMethod_12(1);
  msg.set(ListMethod_12);
  Instrument_12.insert(ListMethod_12.getString());
  FIX::LocaleOfIssue LocaleOfIssue_12("STRING_1732674081");
  msg.set(LocaleOfIssue_12);
  Instrument_12.insert(LocaleOfIssue_12.getString());
  FIX::MaturityDate MaturityDate_12("LOCALMKTDATE_2043075167");
  msg.set(MaturityDate_12);
  Instrument_12.insert(MaturityDate_12.getString());
  FIX::MaturityMonthYear MaturityMonthYear_12("MONTHYEAR_579676753");
  msg.set(MaturityMonthYear_12);
  Instrument_12.insert(MaturityMonthYear_12.getString());
  FIX::MaturityTime MaturityTime_12("TZTIMEONLY_663426760");
  msg.set(MaturityTime_12);
  Instrument_12.insert(MaturityTime_12.getString());
  FIX::MinPriceIncrement MinPriceIncrement_12;
  MinPriceIncrement_12.setString("19258278");
  msg.set(MinPriceIncrement_12);
  Instrument_12.insert(MinPriceIncrement_12.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_12;
  MinPriceIncrementAmount_12.setString("9501599");
  msg.set(MinPriceIncrementAmount_12);
  Instrument_12.insert(MinPriceIncrementAmount_12.getString());
  FIX::NTPositionLimit NTPositionLimit_12(1556807131);
  msg.set(NTPositionLimit_12);
  Instrument_12.insert(NTPositionLimit_12.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_12;
  NotionalPercentageOutstanding_12.setString("27.630000");
  msg.set(NotionalPercentageOutstanding_12);
  Instrument_12.insert(NotionalPercentageOutstanding_12.getString());
  FIX::OptAttribute OptAttribute_12('7');
  msg.set(OptAttribute_12);
  Instrument_12.insert(OptAttribute_12.getString());
  FIX::OptPayoutAmount OptPayoutAmount_12;
  OptPayoutAmount_12.setString("6166874");
  msg.set(OptPayoutAmount_12);
  Instrument_12.insert(OptPayoutAmount_12.getString());
  FIX::OptPayoutType OptPayoutType_12(3);
  msg.set(OptPayoutType_12);
  Instrument_12.insert(OptPayoutType_12.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_12;
  OriginalNotionalPercentageOutstanding_12.setString("74.120000");
  msg.set(OriginalNotionalPercentageOutstanding_12);
  Instrument_12.insert(OriginalNotionalPercentageOutstanding_12.getString());
  FIX::Pool Pool_12("STRING_1212587443");
  msg.set(Pool_12);
  Instrument_12.insert(Pool_12.getString());
  FIX::PositionLimit PositionLimit_12(968950934);
  msg.set(PositionLimit_12);
  Instrument_12.insert(PositionLimit_12.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_12("STRING_INX");
  msg.set(PriceQuoteMethod_12);
  Instrument_12.insert(PriceQuoteMethod_12.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_12("STRING_428954296");
  msg.set(PriceUnitOfMeasure_12);
  Instrument_12.insert(PriceUnitOfMeasure_12.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_12;
  PriceUnitOfMeasureQty_12.setString("3964939");
  msg.set(PriceUnitOfMeasureQty_12);
  Instrument_12.insert(PriceUnitOfMeasureQty_12.getString());
  FIX::Product Product_14(10);
  msg.set(Product_14);
  Instrument_12.insert(Product_14.getString());
  FIX::ProductComplex ProductComplex_12("STRING_1208153930");
  msg.set(ProductComplex_12);
  Instrument_12.insert(ProductComplex_12.getString());
  FIX::PutOrCall PutOrCall_12(1);
  msg.set(PutOrCall_12);
  Instrument_12.insert(PutOrCall_12.getString());
  FIX::RedemptionDate RedemptionDate_12("LOCALMKTDATE_1969459808");
  msg.set(RedemptionDate_12);
  Instrument_12.insert(RedemptionDate_12.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_12("STRING_224002335");
  msg.set(RepoCollateralSecurityType_12);
  Instrument_12.insert(RepoCollateralSecurityType_12.getString());
  FIX::RepurchaseRate RepurchaseRate_12;
  RepurchaseRate_12.setString("18.440000");
  msg.set(RepurchaseRate_12);
  Instrument_12.insert(RepurchaseRate_12.getString());
  FIX::RepurchaseTerm RepurchaseTerm_12(1598066492);
  msg.set(RepurchaseTerm_12);
  Instrument_12.insert(RepurchaseTerm_12.getString());
  FIX::RestructuringType RestructuringType_12("STRING_MR");
  msg.set(RestructuringType_12);
  Instrument_12.insert(RestructuringType_12.getString());
  FIX::SecurityDesc SecurityDesc_12("STRING_343563966");
  msg.set(SecurityDesc_12);
  Instrument_12.insert(SecurityDesc_12.getString());
  FIX::SecurityExchange SecurityExchange_12("EXCHANGE_1143811189");
  msg.set(SecurityExchange_12);
  Instrument_12.insert(SecurityExchange_12.getString());
  FIX::SecurityGroup SecurityGroup_12("STRING_430394811");
  msg.set(SecurityGroup_12);
  Instrument_12.insert(SecurityGroup_12.getString());
  FIX::SecurityID SecurityID_12("STRING_527744879");
  msg.set(SecurityID_12);
  Instrument_12.insert(SecurityID_12.getString());
  FIX::SecurityIDSource SecurityIDSource_12("STRING_3");
  msg.set(SecurityIDSource_12);
  Instrument_12.insert(SecurityIDSource_12.getString());
  FIX::SecurityStatus SecurityStatus_12("STRING_1");
  msg.set(SecurityStatus_12);
  Instrument_12.insert(SecurityStatus_12.getString());
  FIX::SecuritySubType SecuritySubType_12("STRING_112935312");
  msg.set(SecuritySubType_12);
  Instrument_12.insert(SecuritySubType_12.getString());
  FIX::SecurityType SecurityType_14("STRING_BRIDGE");
  msg.set(SecurityType_14);
  Instrument_12.insert(SecurityType_14.getString());
  FIX::Seniority Seniority_12("STRING_SR");
  msg.set(Seniority_12);
  Instrument_12.insert(Seniority_12.getString());
  FIX::SettlMethod SettlMethod_12('C');
  msg.set(SettlMethod_12);
  Instrument_12.insert(SettlMethod_12.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_12("STRING_1611953228");
  msg.set(SettleOnOpenFlag_12);
  Instrument_12.insert(SettleOnOpenFlag_12.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_12("STRING_2080494388");
  msg.set(StateOrProvinceOfIssue_12);
  Instrument_12.insert(StateOrProvinceOfIssue_12.getString());
  FIX::StrikeCurrency StrikeCurrency_12("CAN");
  msg.set(StrikeCurrency_12);
  Instrument_12.insert(StrikeCurrency_12.getString());
  FIX::StrikeMultiplier StrikeMultiplier_12;
  StrikeMultiplier_12.setString("6953251");
  msg.set(StrikeMultiplier_12);
  Instrument_12.insert(StrikeMultiplier_12.getString());
  FIX::StrikePrice StrikePrice_12;
  StrikePrice_12.setString("8023730");
  msg.set(StrikePrice_12);
  Instrument_12.insert(StrikePrice_12.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_12(5);
  msg.set(StrikePriceBoundaryMethod_12);
  Instrument_12.insert(StrikePriceBoundaryMethod_12.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_12;
  StrikePriceBoundaryPrecision_12.setString("25.880000");
  msg.set(StrikePriceBoundaryPrecision_12);
  Instrument_12.insert(StrikePriceBoundaryPrecision_12.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_12(3);
  msg.set(StrikePriceDeterminationMethod_12);
  Instrument_12.insert(StrikePriceDeterminationMethod_12.getString());
  FIX::StrikeValue StrikeValue_12;
  StrikeValue_12.setString("12094216");
  msg.set(StrikeValue_12);
  Instrument_12.insert(StrikeValue_12.getString());
  FIX::Symbol Symbol_12("STRING_1393321545");
  msg.set(Symbol_12);
  Instrument_12.insert(Symbol_12.getString());
  FIX::SymbolSfx SymbolSfx_12("STRING_CD");
  msg.set(SymbolSfx_12);
  Instrument_12.insert(SymbolSfx_12.getString());
  FIX::TimeUnit TimeUnit_12("STRING_S");
  msg.set(TimeUnit_12);
  Instrument_12.insert(TimeUnit_12.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_12(1);
  msg.set(UnderlyingPriceDeterminationMethod_12);
  Instrument_12.insert(UnderlyingPriceDeterminationMethod_12.getString());
  FIX::UnitOfMeasure UnitOfMeasure_12("STRING_lbs");
  msg.set(UnitOfMeasure_12);
  Instrument_12.insert(UnitOfMeasure_12.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_12;
  UnitOfMeasureQty_12.setString("8064042");
  msg.set(UnitOfMeasureQty_12);
  Instrument_12.insert(UnitOfMeasureQty_12.getString());
  FIX::ValuationMethod ValuationMethod_12("STRING_CDSD");
  msg.set(ValuationMethod_12);
  Instrument_12.insert(ValuationMethod_12.getString());
  all_values.push_back(Instrument_12);
  all_compo_names.insert("Instrument");

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
    ComplexEventPrice_24.setString("5429491");
    noComplexEvents_0_0.set(ComplexEventPrice_24);
    ComplexEvents_NoComplexEvents_24.insert(ComplexEventPrice_24.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_24(5);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_24);
    ComplexEvents_NoComplexEvents_24.insert(ComplexEventPriceBoundaryMethod_24.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_24;
    ComplexEventPriceBoundaryPrecision_24.setString("64.070000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_24);
    ComplexEvents_NoComplexEvents_24.insert(ComplexEventPriceBoundaryPrecision_24.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_24(3);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_24);
    ComplexEvents_NoComplexEvents_24.insert(ComplexEventPriceTimeType_24.getString());
    FIX::ComplexEventType ComplexEventType_24(1);
    noComplexEvents_0_0.set(ComplexEventType_24);
    ComplexEvents_NoComplexEvents_24.insert(ComplexEventType_24.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_24;
    ComplexOptPayoutAmount_24.setString("7284912");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_24);
    ComplexEvents_NoComplexEvents_24.insert(ComplexOptPayoutAmount_24.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_24);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::Confirmation::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_58;
      FIX::ComplexEventEndDate ComplexEventEndDate_58(FIX::UTCTIMESTAMP(15, 2, 49, 23, 3, 2009));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_58);
      ComplexEventDates_NoComplexEventDates_58.insert(ComplexEventEndDate_58.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_58(FIX::UTCTIMESTAMP(14, 57, 14, 16, 3, 2013));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_58);
      ComplexEventDates_NoComplexEventDates_58.insert(ComplexEventStartDate_58.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_58);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::Confirmation::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_114;
        FIX::ComplexEventEndTime ComplexEventEndTime_114(FIX::UTCTIMEONLY(15, 6, 19));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_114);
        ComplexEventTimes_NoComplexEventTimes_114.insert(ComplexEventEndTime_114.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_114(FIX::UTCTIMEONLY(7, 44, 32));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_114);
        ComplexEventTimes_NoComplexEventTimes_114.insert(ComplexEventStartTime_114.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_114);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::Confirmation::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_115;
        FIX::ComplexEventEndTime ComplexEventEndTime_115(FIX::UTCTIMEONLY(8, 53, 31));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_115);
        ComplexEventTimes_NoComplexEventTimes_115.insert(ComplexEventEndTime_115.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_115(FIX::UTCTIMEONLY(5, 58, 55));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_115);
        ComplexEventTimes_NoComplexEventTimes_115.insert(ComplexEventStartTime_115.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_115);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::Confirmation::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_116;
        FIX::ComplexEventEndTime ComplexEventEndTime_116(FIX::UTCTIMEONLY(5, 57, 10));
        noComplexEventTimes_0_0_2_2.set(ComplexEventEndTime_116);
        ComplexEventTimes_NoComplexEventTimes_116.insert(ComplexEventEndTime_116.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_116(FIX::UTCTIMEONLY(16, 11, 40));
        noComplexEventTimes_0_0_2_2.set(ComplexEventStartTime_116);
        ComplexEventTimes_NoComplexEventTimes_116.insert(ComplexEventStartTime_116.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_116);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::Confirmation::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_25;
    FIX::ComplexEventCondition ComplexEventCondition_25(1);
    noComplexEvents_0_1.set(ComplexEventCondition_25);
    ComplexEvents_NoComplexEvents_25.insert(ComplexEventCondition_25.getString());
    FIX::ComplexEventPrice ComplexEventPrice_25;
    ComplexEventPrice_25.setString("20941051");
    noComplexEvents_0_1.set(ComplexEventPrice_25);
    ComplexEvents_NoComplexEvents_25.insert(ComplexEventPrice_25.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_25(5);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_25);
    ComplexEvents_NoComplexEvents_25.insert(ComplexEventPriceBoundaryMethod_25.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_25;
    ComplexEventPriceBoundaryPrecision_25.setString("8.900000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_25);
    ComplexEvents_NoComplexEvents_25.insert(ComplexEventPriceBoundaryPrecision_25.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_25(3);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_25);
    ComplexEvents_NoComplexEvents_25.insert(ComplexEventPriceTimeType_25.getString());
    FIX::ComplexEventType ComplexEventType_25(9);
    noComplexEvents_0_1.set(ComplexEventType_25);
    ComplexEvents_NoComplexEvents_25.insert(ComplexEventType_25.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_25;
    ComplexOptPayoutAmount_25.setString("9384210");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_25);
    ComplexEvents_NoComplexEvents_25.insert(ComplexOptPayoutAmount_25.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_25);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::Confirmation::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_59;
      FIX::ComplexEventEndDate ComplexEventEndDate_59(FIX::UTCTIMESTAMP(13, 41, 3, 8, 6, 2003));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_59);
      ComplexEventDates_NoComplexEventDates_59.insert(ComplexEventEndDate_59.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_59(FIX::UTCTIMESTAMP(6, 20, 0, 8, 6, 2010));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_59);
      ComplexEventDates_NoComplexEventDates_59.insert(ComplexEventStartDate_59.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_59);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::Confirmation::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_117;
        FIX::ComplexEventEndTime ComplexEventEndTime_117(FIX::UTCTIMEONLY(15, 29, 40));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_117);
        ComplexEventTimes_NoComplexEventTimes_117.insert(ComplexEventEndTime_117.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_117(FIX::UTCTIMEONLY(13, 43, 52));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_117);
        ComplexEventTimes_NoComplexEventTimes_117.insert(ComplexEventStartTime_117.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_117);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::Confirmation::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_118;
        FIX::ComplexEventEndTime ComplexEventEndTime_118(FIX::UTCTIMEONLY(7, 38, 53));
        noComplexEventTimes_1_0_2_1.set(ComplexEventEndTime_118);
        ComplexEventTimes_NoComplexEventTimes_118.insert(ComplexEventEndTime_118.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_118(FIX::UTCTIMEONLY(14, 43, 24));
        noComplexEventTimes_1_0_2_1.set(ComplexEventStartTime_118);
        ComplexEventTimes_NoComplexEventTimes_118.insert(ComplexEventStartTime_118.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_118);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::Confirmation::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_60;
      FIX::ComplexEventEndDate ComplexEventEndDate_60(FIX::UTCTIMESTAMP(20, 57, 56, 17, 4, 2017));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_60);
      ComplexEventDates_NoComplexEventDates_60.insert(ComplexEventEndDate_60.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_60(FIX::UTCTIMESTAMP(21, 35, 26, 25, 9, 2005));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_60);
      ComplexEventDates_NoComplexEventDates_60.insert(ComplexEventStartDate_60.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_60);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::Confirmation::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_119;
        FIX::ComplexEventEndTime ComplexEventEndTime_119(FIX::UTCTIMEONLY(12, 34, 54));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_119);
        ComplexEventTimes_NoComplexEventTimes_119.insert(ComplexEventEndTime_119.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_119(FIX::UTCTIMEONLY(15, 37, 40));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_119);
        ComplexEventTimes_NoComplexEventTimes_119.insert(ComplexEventStartTime_119.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_119);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::Confirmation::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_120;
        FIX::ComplexEventEndTime ComplexEventEndTime_120(FIX::UTCTIMEONLY(0, 19, 3));
        noComplexEventTimes_1_1_2_1.set(ComplexEventEndTime_120);
        ComplexEventTimes_NoComplexEventTimes_120.insert(ComplexEventEndTime_120.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_120(FIX::UTCTIMEONLY(9, 38, 30));
        noComplexEventTimes_1_1_2_1.set(ComplexEventStartTime_120);
        ComplexEventTimes_NoComplexEventTimes_120.insert(ComplexEventStartTime_120.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_120);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::Confirmation::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_26;
    FIX::ComplexEventCondition ComplexEventCondition_26(1);
    noComplexEvents_0_2.set(ComplexEventCondition_26);
    ComplexEvents_NoComplexEvents_26.insert(ComplexEventCondition_26.getString());
    FIX::ComplexEventPrice ComplexEventPrice_26;
    ComplexEventPrice_26.setString("5634508");
    noComplexEvents_0_2.set(ComplexEventPrice_26);
    ComplexEvents_NoComplexEvents_26.insert(ComplexEventPrice_26.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_26(4);
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryMethod_26);
    ComplexEvents_NoComplexEvents_26.insert(ComplexEventPriceBoundaryMethod_26.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_26;
    ComplexEventPriceBoundaryPrecision_26.setString("7.100000");
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryPrecision_26);
    ComplexEvents_NoComplexEvents_26.insert(ComplexEventPriceBoundaryPrecision_26.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_26(1);
    noComplexEvents_0_2.set(ComplexEventPriceTimeType_26);
    ComplexEvents_NoComplexEvents_26.insert(ComplexEventPriceTimeType_26.getString());
    FIX::ComplexEventType ComplexEventType_26(8);
    noComplexEvents_0_2.set(ComplexEventType_26);
    ComplexEvents_NoComplexEvents_26.insert(ComplexEventType_26.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_26;
    ComplexOptPayoutAmount_26.setString("7812739");
    noComplexEvents_0_2.set(ComplexOptPayoutAmount_26);
    ComplexEvents_NoComplexEvents_26.insert(ComplexOptPayoutAmount_26.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_26);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::Confirmation::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_61;
      FIX::ComplexEventEndDate ComplexEventEndDate_61(FIX::UTCTIMESTAMP(16, 44, 13, 4, 2, 2000));
      noComplexEventDates_2_1_0.set(ComplexEventEndDate_61);
      ComplexEventDates_NoComplexEventDates_61.insert(ComplexEventEndDate_61.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_61(FIX::UTCTIMESTAMP(6, 44, 24, 2, 12, 2001));
      noComplexEventDates_2_1_0.set(ComplexEventStartDate_61);
      ComplexEventDates_NoComplexEventDates_61.insert(ComplexEventStartDate_61.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_61);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::Confirmation::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_121;
        FIX::ComplexEventEndTime ComplexEventEndTime_121(FIX::UTCTIMEONLY(13, 18, 20));
        noComplexEventTimes_2_0_2_0.set(ComplexEventEndTime_121);
        ComplexEventTimes_NoComplexEventTimes_121.insert(ComplexEventEndTime_121.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_121(FIX::UTCTIMEONLY(15, 59, 50));
        noComplexEventTimes_2_0_2_0.set(ComplexEventStartTime_121);
        ComplexEventTimes_NoComplexEventTimes_121.insert(ComplexEventStartTime_121.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_121);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      {
        FIX50SP2::Confirmation::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_122;
        FIX::ComplexEventEndTime ComplexEventEndTime_122(FIX::UTCTIMEONLY(6, 18, 3));
        noComplexEventTimes_2_0_2_1.set(ComplexEventEndTime_122);
        ComplexEventTimes_NoComplexEventTimes_122.insert(ComplexEventEndTime_122.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_122(FIX::UTCTIMEONLY(13, 8, 12));
        noComplexEventTimes_2_0_2_1.set(ComplexEventStartTime_122);
        ComplexEventTimes_NoComplexEventTimes_122.insert(ComplexEventStartTime_122.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_122);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_1);
      }
      {
        FIX50SP2::Confirmation::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_123;
        FIX::ComplexEventEndTime ComplexEventEndTime_123(FIX::UTCTIMEONLY(4, 48, 39));
        noComplexEventTimes_2_0_2_2.set(ComplexEventEndTime_123);
        ComplexEventTimes_NoComplexEventTimes_123.insert(ComplexEventEndTime_123.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_123(FIX::UTCTIMEONLY(18, 49, 26));
        noComplexEventTimes_2_0_2_2.set(ComplexEventStartTime_123);
        ComplexEventTimes_NoComplexEventTimes_123.insert(ComplexEventStartTime_123.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_123);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_2);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_0);
    }
    msg.addGroup(noComplexEvents_0_2);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::Confirmation::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_23;
    FIX::EventDate EventDate_23("LOCALMKTDATE_1309223134");
    noEvents_0_0.set(EventDate_23);
    EvntGrp_NoEvents_23.insert(EventDate_23.getString());
    FIX::EventPx EventPx_23;
    EventPx_23.setString("3089194");
    noEvents_0_0.set(EventPx_23);
    EvntGrp_NoEvents_23.insert(EventPx_23.getString());
    FIX::EventText EventText_23("STRING_758910030");
    noEvents_0_0.set(EventText_23);
    EvntGrp_NoEvents_23.insert(EventText_23.getString());
    FIX::EventTime EventTime_23(FIX::UTCTIMESTAMP(3, 29, 15, 4, 12, 2015));
    noEvents_0_0.set(EventTime_23);
    EvntGrp_NoEvents_23.insert(EventTime_23.getString());
    FIX::EventType EventType_23(9);
    noEvents_0_0.set(EventType_23);
    EvntGrp_NoEvents_23.insert(EventType_23.getString());
    all_values.push_back(EvntGrp_NoEvents_23);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::Confirmation::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_23;
    FIX::InstrumentPartyID InstrumentPartyID_23("STRING_1861434806");
    noInstrumentParties_0_0.set(InstrumentPartyID_23);
    InstrumentParties_NoInstrumentParties_23.insert(InstrumentPartyID_23.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_23('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_23);
    InstrumentParties_NoInstrumentParties_23.insert(InstrumentPartyIDSource_23.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_23(2092385187);
    noInstrumentParties_0_0.set(InstrumentPartyRole_23);
    InstrumentParties_NoInstrumentParties_23.insert(InstrumentPartyRole_23.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_23);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::Confirmation::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_42;
      FIX::InstrumentPartySubID InstrumentPartySubID_42("STRING_2111906357");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_42);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_42.insert(InstrumentPartySubID_42.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_42(231878542);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_42);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_42.insert(InstrumentPartySubIDType_42.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_42);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::Confirmation::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_43;
      FIX::InstrumentPartySubID InstrumentPartySubID_43("STRING_1509889806");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_43);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_43.insert(InstrumentPartySubID_43.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_43(1998677051);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_43);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_43.insert(InstrumentPartySubIDType_43.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_43);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::Confirmation::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_44;
      FIX::InstrumentPartySubID InstrumentPartySubID_44("STRING_1300129530");
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubID_44);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_44.insert(InstrumentPartySubID_44.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_44(1245163930);
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubIDType_44);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_44.insert(InstrumentPartySubIDType_44.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_44);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::Confirmation::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_23;
    FIX::SecurityAltID SecurityAltID_23("STRING_44067662");
    noSecurityAltID_0_0.set(SecurityAltID_23);
    SecAltIDGrp_NoSecurityAltID_23.insert(SecurityAltID_23.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_23("STRING_90590091");
    noSecurityAltID_0_0.set(SecurityAltIDSource_23);
    SecAltIDGrp_NoSecurityAltID_23.insert(SecurityAltIDSource_23.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_23);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_24;
  FIX::SecurityXML SecurityXML_25("XMLDATA_2023008075");
  msg.set(SecurityXML_25);
  FIX::SecurityXMLLen SecurityXMLLen_12(926339338);
  msg.set(SecurityXMLLen_12);
  FIX::SecurityXMLSchema SecurityXMLSchema_12("STRING_873725493");
  msg.set(SecurityXMLSchema_12);
  SecurityXML_24.insert(SecurityXMLSchema_12.getString());
  all_values.push_back(SecurityXML_24);
  all_compo_names.insert("SecurityXML");

  // InstrumentExtension
  multiset<string> InstrumentExtension_3;
  FIX::DeliveryForm DeliveryForm_3(2);
  msg.set(DeliveryForm_3);
  InstrumentExtension_3.insert(DeliveryForm_3.getString());
  FIX::PctAtRisk PctAtRisk_3;
  PctAtRisk_3.setString("31.240000");
  msg.set(PctAtRisk_3);
  InstrumentExtension_3.insert(PctAtRisk_3.getString());
  all_values.push_back(InstrumentExtension_3);
  all_compo_names.insert("InstrumentExtension");

  // AttrbGrp
  // Group AttrbGrp.NoInstrAttrib
  {
    FIX50SP2::Confirmation::NoInstrAttrib noInstrAttrib_0_0;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_5;
    FIX::InstrAttribType InstrAttribType_5(2);
    noInstrAttrib_0_0.set(InstrAttribType_5);
    AttrbGrp_NoInstrAttrib_5.insert(InstrAttribType_5.getString());
    FIX::InstrAttribValue InstrAttribValue_5("STRING_1487102594");
    noInstrAttrib_0_0.set(InstrAttribValue_5);
    AttrbGrp_NoInstrAttrib_5.insert(InstrAttribValue_5.getString());
    all_values.push_back(AttrbGrp_NoInstrAttrib_5);
    all_compo_names.insert("AttrbGrp.NoInstrAttrib");

    msg.addGroup(noInstrAttrib_0_0);
  }
  // MiscFeesGrp
  // Group MiscFeesGrp.NoMiscFees
  {
    FIX50SP2::Confirmation::NoMiscFees noMiscFees_0_0;
    // MiscFeesGrp.NoMiscFees
    multiset<string> MiscFeesGrp_NoMiscFees_17;
    FIX::MiscFeeAmt MiscFeeAmt_17;
    MiscFeeAmt_17.setString("17428847");
    noMiscFees_0_0.set(MiscFeeAmt_17);
    MiscFeesGrp_NoMiscFees_17.insert(MiscFeeAmt_17.getString());
    FIX::MiscFeeBasis MiscFeeBasis_17(0);
    noMiscFees_0_0.set(MiscFeeBasis_17);
    MiscFeesGrp_NoMiscFees_17.insert(MiscFeeBasis_17.getString());
    FIX::MiscFeeCurr MiscFeeCurr_17("CHF");
    noMiscFees_0_0.set(MiscFeeCurr_17);
    MiscFeesGrp_NoMiscFees_17.insert(MiscFeeCurr_17.getString());
    FIX::MiscFeeType MiscFeeType_17("STRING_1");
    noMiscFees_0_0.set(MiscFeeType_17);
    MiscFeesGrp_NoMiscFees_17.insert(MiscFeeType_17.getString());
    all_values.push_back(MiscFeesGrp_NoMiscFees_17);
    all_compo_names.insert("MiscFeesGrp.NoMiscFees");

    msg.addGroup(noMiscFees_0_0);
  }
  {
    FIX50SP2::Confirmation::NoMiscFees noMiscFees_0_1;
    // MiscFeesGrp.NoMiscFees
    multiset<string> MiscFeesGrp_NoMiscFees_18;
    FIX::MiscFeeAmt MiscFeeAmt_18;
    MiscFeeAmt_18.setString("6106284");
    noMiscFees_0_1.set(MiscFeeAmt_18);
    MiscFeesGrp_NoMiscFees_18.insert(MiscFeeAmt_18.getString());
    FIX::MiscFeeBasis MiscFeeBasis_18(1);
    noMiscFees_0_1.set(MiscFeeBasis_18);
    MiscFeesGrp_NoMiscFees_18.insert(MiscFeeBasis_18.getString());
    FIX::MiscFeeCurr MiscFeeCurr_18("CAN");
    noMiscFees_0_1.set(MiscFeeCurr_18);
    MiscFeesGrp_NoMiscFees_18.insert(MiscFeeCurr_18.getString());
    FIX::MiscFeeType MiscFeeType_18("STRING_2");
    noMiscFees_0_1.set(MiscFeeType_18);
    MiscFeesGrp_NoMiscFees_18.insert(MiscFeeType_18.getString());
    all_values.push_back(MiscFeesGrp_NoMiscFees_18);
    all_compo_names.insert("MiscFeesGrp.NoMiscFees");

    msg.addGroup(noMiscFees_0_1);
  }
  // OrdAllocGrp
  // Group OrdAllocGrp.NoOrders
  {
    FIX50SP2::Confirmation::NoOrders noOrders_0_0;
    // OrdAllocGrp.NoOrders
    multiset<string> OrdAllocGrp_NoOrders_6;
    FIX::ClOrdID ClOrdID_12("STRING_1433045262");
    noOrders_0_0.set(ClOrdID_12);
    OrdAllocGrp_NoOrders_6.insert(ClOrdID_12.getString());
    FIX::ListID ListID_12("STRING_830830946");
    noOrders_0_0.set(ListID_12);
    OrdAllocGrp_NoOrders_6.insert(ListID_12.getString());
    FIX::OrderAvgPx OrderAvgPx_6;
    OrderAvgPx_6.setString("563096");
    noOrders_0_0.set(OrderAvgPx_6);
    OrdAllocGrp_NoOrders_6.insert(OrderAvgPx_6.getString());
    FIX::OrderBookingQty OrderBookingQty_6;
    OrderBookingQty_6.setString("16649238");
    noOrders_0_0.set(OrderBookingQty_6);
    OrdAllocGrp_NoOrders_6.insert(OrderBookingQty_6.getString());
    FIX::OrderID OrderID_12("STRING_193237104");
    noOrders_0_0.set(OrderID_12);
    OrdAllocGrp_NoOrders_6.insert(OrderID_12.getString());
    FIX::OrderQty OrderQty_6;
    OrderQty_6.setString("20549866");
    noOrders_0_0.set(OrderQty_6);
    OrdAllocGrp_NoOrders_6.insert(OrderQty_6.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_12("STRING_817569687");
    noOrders_0_0.set(SecondaryClOrdID_12);
    OrdAllocGrp_NoOrders_6.insert(SecondaryClOrdID_12.getString());
    FIX::SecondaryOrderID SecondaryOrderID_12("STRING_1438401035");
    noOrders_0_0.set(SecondaryOrderID_12);
    OrdAllocGrp_NoOrders_6.insert(SecondaryOrderID_12.getString());
    all_values.push_back(OrdAllocGrp_NoOrders_6);
    all_compo_names.insert("OrdAllocGrp.NoOrders");

    // NestedParties2
    // Group NestedParties2.NoNested2PartyIDs
    {
      FIX50SP2::Confirmation::NoOrders::NoNested2PartyIDs noNested2PartyIDs_0_1_0;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_13;
      FIX::Nested2PartyID Nested2PartyID_13("STRING_861637350");
      noNested2PartyIDs_0_1_0.set(Nested2PartyID_13);
      NestedParties2_NoNested2PartyIDs_13.insert(Nested2PartyID_13.getString());
      FIX::Nested2PartyIDSource Nested2PartyIDSource_13('1');
      noNested2PartyIDs_0_1_0.set(Nested2PartyIDSource_13);
      NestedParties2_NoNested2PartyIDs_13.insert(Nested2PartyIDSource_13.getString());
      FIX::Nested2PartyRole Nested2PartyRole_13(1065278022);
      noNested2PartyIDs_0_1_0.set(Nested2PartyRole_13);
      NestedParties2_NoNested2PartyIDs_13.insert(Nested2PartyRole_13.getString());
      all_values.push_back(NestedParties2_NoNested2PartyIDs_13);
      all_compo_names.insert("NestedParties2.NoNested2PartyIDs");

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::Confirmation::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_27;
        FIX::Nested2PartySubID Nested2PartySubID_27("STRING_255232971");
        noNested2PartySubIDs_0_0_2_0.set(Nested2PartySubID_27);
        NstdPtys2SubGrp_NoNested2PartySubIDs_27.insert(Nested2PartySubID_27.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_27(975522099);
        noNested2PartySubIDs_0_0_2_0.set(Nested2PartySubIDType_27);
        NstdPtys2SubGrp_NoNested2PartySubIDs_27.insert(Nested2PartySubIDType_27.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_27);
        all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

        noNested2PartyIDs_0_1_0.addGroup(noNested2PartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::Confirmation::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_2_1;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_28;
        FIX::Nested2PartySubID Nested2PartySubID_28("STRING_818676165");
        noNested2PartySubIDs_0_0_2_1.set(Nested2PartySubID_28);
        NstdPtys2SubGrp_NoNested2PartySubIDs_28.insert(Nested2PartySubID_28.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_28(2080215096);
        noNested2PartySubIDs_0_0_2_1.set(Nested2PartySubIDType_28);
        NstdPtys2SubGrp_NoNested2PartySubIDs_28.insert(Nested2PartySubIDType_28.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_28);
        all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

        noNested2PartyIDs_0_1_0.addGroup(noNested2PartySubIDs_0_0_2_1);
      }
      noOrders_0_0.addGroup(noNested2PartyIDs_0_1_0);
    }
    {
      FIX50SP2::Confirmation::NoOrders::NoNested2PartyIDs noNested2PartyIDs_0_1_1;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_14;
      FIX::Nested2PartyID Nested2PartyID_14("STRING_47505662");
      noNested2PartyIDs_0_1_1.set(Nested2PartyID_14);
      NestedParties2_NoNested2PartyIDs_14.insert(Nested2PartyID_14.getString());
      FIX::Nested2PartyIDSource Nested2PartyIDSource_14('1');
      noNested2PartyIDs_0_1_1.set(Nested2PartyIDSource_14);
      NestedParties2_NoNested2PartyIDs_14.insert(Nested2PartyIDSource_14.getString());
      FIX::Nested2PartyRole Nested2PartyRole_14(369139955);
      noNested2PartyIDs_0_1_1.set(Nested2PartyRole_14);
      NestedParties2_NoNested2PartyIDs_14.insert(Nested2PartyRole_14.getString());
      all_values.push_back(NestedParties2_NoNested2PartyIDs_14);
      all_compo_names.insert("NestedParties2.NoNested2PartyIDs");

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::Confirmation::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_29;
        FIX::Nested2PartySubID Nested2PartySubID_29("STRING_1460969629");
        noNested2PartySubIDs_0_1_2_0.set(Nested2PartySubID_29);
        NstdPtys2SubGrp_NoNested2PartySubIDs_29.insert(Nested2PartySubID_29.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_29(1640569272);
        noNested2PartySubIDs_0_1_2_0.set(Nested2PartySubIDType_29);
        NstdPtys2SubGrp_NoNested2PartySubIDs_29.insert(Nested2PartySubIDType_29.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_29);
        all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

        noNested2PartyIDs_0_1_1.addGroup(noNested2PartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::Confirmation::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_2_1;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_30;
        FIX::Nested2PartySubID Nested2PartySubID_30("STRING_768433302");
        noNested2PartySubIDs_0_1_2_1.set(Nested2PartySubID_30);
        NstdPtys2SubGrp_NoNested2PartySubIDs_30.insert(Nested2PartySubID_30.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_30(244140027);
        noNested2PartySubIDs_0_1_2_1.set(Nested2PartySubIDType_30);
        NstdPtys2SubGrp_NoNested2PartySubIDs_30.insert(Nested2PartySubIDType_30.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_30);
        all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

        noNested2PartyIDs_0_1_1.addGroup(noNested2PartySubIDs_0_1_2_1);
      }
      noOrders_0_0.addGroup(noNested2PartyIDs_0_1_1);
    }
    msg.addGroup(noOrders_0_0);
  }
  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::Confirmation::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_30;
    FIX::PartyID PartyID_30("STRING_2076306277");
    noPartyIDs_0_0.set(PartyID_30);
    Parties_NoPartyIDs_30.insert(PartyID_30.getString());
    FIX::PartyIDSource PartyIDSource_30('F');
    noPartyIDs_0_0.set(PartyIDSource_30);
    Parties_NoPartyIDs_30.insert(PartyIDSource_30.getString());
    FIX::PartyRole PartyRole_30(34);
    noPartyIDs_0_0.set(PartyRole_30);
    Parties_NoPartyIDs_30.insert(PartyRole_30.getString());
    all_values.push_back(Parties_NoPartyIDs_30);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::Confirmation::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_68;
      FIX::PartySubID PartySubID_68("STRING_1556488207");
      noPartySubIDs_0_1_0.set(PartySubID_68);
      PtysSubGrp_NoPartySubIDs_68.insert(PartySubID_68.getString());
      FIX::PartySubIDType PartySubIDType_68(28);
      noPartySubIDs_0_1_0.set(PartySubIDType_68);
      PtysSubGrp_NoPartySubIDs_68.insert(PartySubIDType_68.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_68);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  // SettlInstructionsData
  multiset<string> SettlInstructionsData_7;
  FIX::SettlDeliveryType SettlDeliveryType_7(0);
  msg.set(SettlDeliveryType_7);
  SettlInstructionsData_7.insert(SettlDeliveryType_7.getString());
  FIX::StandInstDbID StandInstDbID_7("STRING_1612797842");
  msg.set(StandInstDbID_7);
  SettlInstructionsData_7.insert(StandInstDbID_7.getString());
  FIX::StandInstDbName StandInstDbName_7("STRING_394859595");
  msg.set(StandInstDbName_7);
  SettlInstructionsData_7.insert(StandInstDbName_7.getString());
  FIX::StandInstDbType StandInstDbType_7(3);
  msg.set(StandInstDbType_7);
  SettlInstructionsData_7.insert(StandInstDbType_7.getString());
  all_values.push_back(SettlInstructionsData_7);
  all_compo_names.insert("SettlInstructionsData");

  // DlvyInstGrp
  // Group DlvyInstGrp.NoDlvyInst
  {
    FIX50SP2::Confirmation::NoDlvyInst noDlvyInst_0_0;
    // DlvyInstGrp.NoDlvyInst
    multiset<string> DlvyInstGrp_NoDlvyInst_11;
    FIX::DlvyInstType DlvyInstType_11('S');
    noDlvyInst_0_0.set(DlvyInstType_11);
    DlvyInstGrp_NoDlvyInst_11.insert(DlvyInstType_11.getString());
    FIX::SettlInstSource SettlInstSource_11('1');
    noDlvyInst_0_0.set(SettlInstSource_11);
    DlvyInstGrp_NoDlvyInst_11.insert(SettlInstSource_11.getString());
    all_values.push_back(DlvyInstGrp_NoDlvyInst_11);
    all_compo_names.insert("DlvyInstGrp.NoDlvyInst");

    // SettlParties
    // Group SettlParties.NoSettlPartyIDs
    {
      FIX50SP2::Confirmation::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_1_0;
      // SettlParties.NoSettlPartyIDs
      multiset<string> SettlParties_NoSettlPartyIDs_19;
      FIX::SettlPartyID SettlPartyID_19("STRING_2074066633");
      noSettlPartyIDs_0_1_0.set(SettlPartyID_19);
      SettlParties_NoSettlPartyIDs_19.insert(SettlPartyID_19.getString());
      FIX::SettlPartyIDSource SettlPartyIDSource_19('6');
      noSettlPartyIDs_0_1_0.set(SettlPartyIDSource_19);
      SettlParties_NoSettlPartyIDs_19.insert(SettlPartyIDSource_19.getString());
      FIX::SettlPartyRole SettlPartyRole_19(1627848848);
      noSettlPartyIDs_0_1_0.set(SettlPartyRole_19);
      SettlParties_NoSettlPartyIDs_19.insert(SettlPartyRole_19.getString());
      all_values.push_back(SettlParties_NoSettlPartyIDs_19);
      all_compo_names.insert("SettlParties.NoSettlPartyIDs");

      // SettlPtysSubGrp
      // Group SettlPtysSubGrp.NoSettlPartySubIDs
      {
        FIX50SP2::Confirmation::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_2_0;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_35;
        FIX::SettlPartySubID SettlPartySubID_35("STRING_902372649");
        noSettlPartySubIDs_0_0_2_0.set(SettlPartySubID_35);
        SettlPtysSubGrp_NoSettlPartySubIDs_35.insert(SettlPartySubID_35.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_35(455887299);
        noSettlPartySubIDs_0_0_2_0.set(SettlPartySubIDType_35);
        SettlPtysSubGrp_NoSettlPartySubIDs_35.insert(SettlPartySubIDType_35.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_35);
        all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

        noSettlPartyIDs_0_1_0.addGroup(noSettlPartySubIDs_0_0_2_0);
      }
      noDlvyInst_0_0.addGroup(noSettlPartyIDs_0_1_0);
    }
    {
      FIX50SP2::Confirmation::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_1_1;
      // SettlParties.NoSettlPartyIDs
      multiset<string> SettlParties_NoSettlPartyIDs_20;
      FIX::SettlPartyID SettlPartyID_20("STRING_385752190");
      noSettlPartyIDs_0_1_1.set(SettlPartyID_20);
      SettlParties_NoSettlPartyIDs_20.insert(SettlPartyID_20.getString());
      FIX::SettlPartyIDSource SettlPartyIDSource_20('8');
      noSettlPartyIDs_0_1_1.set(SettlPartyIDSource_20);
      SettlParties_NoSettlPartyIDs_20.insert(SettlPartyIDSource_20.getString());
      FIX::SettlPartyRole SettlPartyRole_20(503392961);
      noSettlPartyIDs_0_1_1.set(SettlPartyRole_20);
      SettlParties_NoSettlPartyIDs_20.insert(SettlPartyRole_20.getString());
      all_values.push_back(SettlParties_NoSettlPartyIDs_20);
      all_compo_names.insert("SettlParties.NoSettlPartyIDs");

      // SettlPtysSubGrp
      // Group SettlPtysSubGrp.NoSettlPartySubIDs
      {
        FIX50SP2::Confirmation::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_2_0;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_36;
        FIX::SettlPartySubID SettlPartySubID_36("STRING_1204244052");
        noSettlPartySubIDs_0_1_2_0.set(SettlPartySubID_36);
        SettlPtysSubGrp_NoSettlPartySubIDs_36.insert(SettlPartySubID_36.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_36(146299676);
        noSettlPartySubIDs_0_1_2_0.set(SettlPartySubIDType_36);
        SettlPtysSubGrp_NoSettlPartySubIDs_36.insert(SettlPartySubIDType_36.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_36);
        all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

        noSettlPartyIDs_0_1_1.addGroup(noSettlPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::Confirmation::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_2_1;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_37;
        FIX::SettlPartySubID SettlPartySubID_37("STRING_2005016931");
        noSettlPartySubIDs_0_1_2_1.set(SettlPartySubID_37);
        SettlPtysSubGrp_NoSettlPartySubIDs_37.insert(SettlPartySubID_37.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_37(697329677);
        noSettlPartySubIDs_0_1_2_1.set(SettlPartySubIDType_37);
        SettlPtysSubGrp_NoSettlPartySubIDs_37.insert(SettlPartySubIDType_37.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_37);
        all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

        noSettlPartyIDs_0_1_1.addGroup(noSettlPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::Confirmation::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_2_2;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_38;
        FIX::SettlPartySubID SettlPartySubID_38("STRING_914732978");
        noSettlPartySubIDs_0_1_2_2.set(SettlPartySubID_38);
        SettlPtysSubGrp_NoSettlPartySubIDs_38.insert(SettlPartySubID_38.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_38(101673310);
        noSettlPartySubIDs_0_1_2_2.set(SettlPartySubIDType_38);
        SettlPtysSubGrp_NoSettlPartySubIDs_38.insert(SettlPartySubIDType_38.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_38);
        all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

        noSettlPartyIDs_0_1_1.addGroup(noSettlPartySubIDs_0_1_2_2);
      }
      noDlvyInst_0_0.addGroup(noSettlPartyIDs_0_1_1);
    }
    {
      FIX50SP2::Confirmation::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_1_2;
      // SettlParties.NoSettlPartyIDs
      multiset<string> SettlParties_NoSettlPartyIDs_21;
      FIX::SettlPartyID SettlPartyID_21("STRING_801043778");
      noSettlPartyIDs_0_1_2.set(SettlPartyID_21);
      SettlParties_NoSettlPartyIDs_21.insert(SettlPartyID_21.getString());
      FIX::SettlPartyIDSource SettlPartyIDSource_21('8');
      noSettlPartyIDs_0_1_2.set(SettlPartyIDSource_21);
      SettlParties_NoSettlPartyIDs_21.insert(SettlPartyIDSource_21.getString());
      FIX::SettlPartyRole SettlPartyRole_21(1566274591);
      noSettlPartyIDs_0_1_2.set(SettlPartyRole_21);
      SettlParties_NoSettlPartyIDs_21.insert(SettlPartyRole_21.getString());
      all_values.push_back(SettlParties_NoSettlPartyIDs_21);
      all_compo_names.insert("SettlParties.NoSettlPartyIDs");

      // SettlPtysSubGrp
      // Group SettlPtysSubGrp.NoSettlPartySubIDs
      {
        FIX50SP2::Confirmation::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_2_2_0;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_39;
        FIX::SettlPartySubID SettlPartySubID_39("STRING_1794202369");
        noSettlPartySubIDs_0_2_2_0.set(SettlPartySubID_39);
        SettlPtysSubGrp_NoSettlPartySubIDs_39.insert(SettlPartySubID_39.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_39(975279150);
        noSettlPartySubIDs_0_2_2_0.set(SettlPartySubIDType_39);
        SettlPtysSubGrp_NoSettlPartySubIDs_39.insert(SettlPartySubIDType_39.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_39);
        all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

        noSettlPartyIDs_0_1_2.addGroup(noSettlPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::Confirmation::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_2_2_1;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_40;
        FIX::SettlPartySubID SettlPartySubID_40("STRING_1122837392");
        noSettlPartySubIDs_0_2_2_1.set(SettlPartySubID_40);
        SettlPtysSubGrp_NoSettlPartySubIDs_40.insert(SettlPartySubID_40.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_40(1428196430);
        noSettlPartySubIDs_0_2_2_1.set(SettlPartySubIDType_40);
        SettlPtysSubGrp_NoSettlPartySubIDs_40.insert(SettlPartySubIDType_40.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_40);
        all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

        noSettlPartyIDs_0_1_2.addGroup(noSettlPartySubIDs_0_2_2_1);
      }
      {
        FIX50SP2::Confirmation::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_2_2_2;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_41;
        FIX::SettlPartySubID SettlPartySubID_41("STRING_440593344");
        noSettlPartySubIDs_0_2_2_2.set(SettlPartySubID_41);
        SettlPtysSubGrp_NoSettlPartySubIDs_41.insert(SettlPartySubID_41.getString());
        FIX::SettlPartySubIDType SettlPartySubIDType_41(1517696988);
        noSettlPartySubIDs_0_2_2_2.set(SettlPartySubIDType_41);
        SettlPtysSubGrp_NoSettlPartySubIDs_41.insert(SettlPartySubIDType_41.getString());
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_41);
        all_compo_names.insert("SettlPtysSubGrp.NoSettlPartySubIDs");

        noSettlPartyIDs_0_1_2.addGroup(noSettlPartySubIDs_0_2_2_2);
      }
      noDlvyInst_0_0.addGroup(noSettlPartyIDs_0_1_2);
    }
    msg.addGroup(noDlvyInst_0_0);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_8;
  FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_8("USD");
  msg.set(BenchmarkCurveCurrency_8);
  SpreadOrBenchmarkCurveData_8.insert(BenchmarkCurveCurrency_8.getString());
  FIX::BenchmarkCurveName BenchmarkCurveName_8("STRING_Treasury");
  msg.set(BenchmarkCurveName_8);
  SpreadOrBenchmarkCurveData_8.insert(BenchmarkCurveName_8.getString());
  FIX::BenchmarkCurvePoint BenchmarkCurvePoint_8("STRING_373576147");
  msg.set(BenchmarkCurvePoint_8);
  SpreadOrBenchmarkCurveData_8.insert(BenchmarkCurvePoint_8.getString());
  FIX::BenchmarkPrice BenchmarkPrice_8;
  BenchmarkPrice_8.setString("3759814");
  msg.set(BenchmarkPrice_8);
  SpreadOrBenchmarkCurveData_8.insert(BenchmarkPrice_8.getString());
  FIX::BenchmarkPriceType BenchmarkPriceType_8(509225608);
  msg.set(BenchmarkPriceType_8);
  SpreadOrBenchmarkCurveData_8.insert(BenchmarkPriceType_8.getString());
  FIX::BenchmarkSecurityID BenchmarkSecurityID_8("STRING_1020715825");
  msg.set(BenchmarkSecurityID_8);
  SpreadOrBenchmarkCurveData_8.insert(BenchmarkSecurityID_8.getString());
  FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_8("STRING_2003830251");
  msg.set(BenchmarkSecurityIDSource_8);
  SpreadOrBenchmarkCurveData_8.insert(BenchmarkSecurityIDSource_8.getString());
  FIX::Spread Spread_8;
  Spread_8.setString("763016");
  msg.set(Spread_8);
  SpreadOrBenchmarkCurveData_8.insert(Spread_8.getString());
  all_values.push_back(SpreadOrBenchmarkCurveData_8);
  all_compo_names.insert("SpreadOrBenchmarkCurveData");

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::Confirmation::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_15;
    FIX::StipulationType StipulationType_15("STRING_MAXORDQTY");
    noStipulations_0_0.set(StipulationType_15);
    Stipulations_NoStipulations_15.insert(StipulationType_15.getString());
    FIX::StipulationValue StipulationValue_15("STRING_462053824");
    noStipulations_0_0.set(StipulationValue_15);
    Stipulations_NoStipulations_15.insert(StipulationValue_15.getString());
    all_values.push_back(Stipulations_NoStipulations_15);
    all_compo_names.insert("Stipulations.NoStipulations");

    msg.addGroup(noStipulations_0_0);
  }
  {
    FIX50SP2::Confirmation::NoStipulations noStipulations_0_1;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_16;
    FIX::StipulationType StipulationType_16("STRING_TRDVAR");
    noStipulations_0_1.set(StipulationType_16);
    Stipulations_NoStipulations_16.insert(StipulationType_16.getString());
    FIX::StipulationValue StipulationValue_16("STRING_815626864");
    noStipulations_0_1.set(StipulationValue_16);
    Stipulations_NoStipulations_16.insert(StipulationValue_16.getString());
    all_values.push_back(Stipulations_NoStipulations_16);
    all_compo_names.insert("Stipulations.NoStipulations");

    msg.addGroup(noStipulations_0_1);
  }
  // TrdRegTimestamps
  // Group TrdRegTimestamps.NoTrdRegTimestamps
  {
    FIX50SP2::Confirmation::NoTrdRegTimestamps noTrdRegTimestamps_0_0;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_9;
    FIX::DeskOrderHandlingInst DeskOrderHandlingInst_9("MULTIPLESTRINGVALUE_NH");
    noTrdRegTimestamps_0_0.set(DeskOrderHandlingInst_9);
    TrdRegTimestamps_NoTrdRegTimestamps_9.insert(DeskOrderHandlingInst_9.getString());
    FIX::DeskType DeskType_9("STRING_IN");
    noTrdRegTimestamps_0_0.set(DeskType_9);
    TrdRegTimestamps_NoTrdRegTimestamps_9.insert(DeskType_9.getString());
    FIX::DeskTypeSource DeskTypeSource_9(1);
    noTrdRegTimestamps_0_0.set(DeskTypeSource_9);
    TrdRegTimestamps_NoTrdRegTimestamps_9.insert(DeskTypeSource_9.getString());
    FIX::TrdRegTimestamp TrdRegTimestamp_9(FIX::UTCTIMESTAMP(14, 59, 2, 17, 11, 2004));
    noTrdRegTimestamps_0_0.set(TrdRegTimestamp_9);
    TrdRegTimestamps_NoTrdRegTimestamps_9.insert(TrdRegTimestamp_9.getString());
    FIX::TrdRegTimestampOrigin TrdRegTimestampOrigin_9("STRING_219450199");
    noTrdRegTimestamps_0_0.set(TrdRegTimestampOrigin_9);
    TrdRegTimestamps_NoTrdRegTimestamps_9.insert(TrdRegTimestampOrigin_9.getString());
    FIX::TrdRegTimestampType TrdRegTimestampType_9(4);
    noTrdRegTimestamps_0_0.set(TrdRegTimestampType_9);
    TrdRegTimestamps_NoTrdRegTimestamps_9.insert(TrdRegTimestampType_9.getString());
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_9);
    all_compo_names.insert("TrdRegTimestamps.NoTrdRegTimestamps");

    msg.addGroup(noTrdRegTimestamps_0_0);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::Confirmation::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_21;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_21("DATA_1647646629");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_21);
    UnderlyingInstrument_21.insert(EncodedUnderlyingIssuer_21.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_21(1799971157);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_21);
    UnderlyingInstrument_21.insert(EncodedUnderlyingIssuerLen_21.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_21("DATA_1904311469");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_21);
    UnderlyingInstrument_21.insert(EncodedUnderlyingSecurityDesc_21.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_21(755590576);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_21);
    UnderlyingInstrument_21.insert(EncodedUnderlyingSecurityDescLen_21.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_21;
    UnderlyingAdjustedQuantity_21.setString("16133817");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_21);
    UnderlyingInstrument_21.insert(UnderlyingAdjustedQuantity_21.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_21;
    UnderlyingAllocationPercent_21.setString("4.440000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_21);
    UnderlyingInstrument_21.insert(UnderlyingAllocationPercent_21.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_21;
    UnderlyingAttachmentPoint_21.setString("67.230000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_21);
    UnderlyingInstrument_21.insert(UnderlyingAttachmentPoint_21.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_21("STRING_1989363137");
    noUnderlyings_0_0.set(UnderlyingCFICode_21);
    UnderlyingInstrument_21.insert(UnderlyingCFICode_21.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_21("STRING_848696052");
    noUnderlyings_0_0.set(UnderlyingCPProgram_21);
    UnderlyingInstrument_21.insert(UnderlyingCPProgram_21.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_21("STRING_2398900");
    noUnderlyings_0_0.set(UnderlyingCPRegType_21);
    UnderlyingInstrument_21.insert(UnderlyingCPRegType_21.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_21;
    UnderlyingCapValue_21.setString("18457097");
    noUnderlyings_0_0.set(UnderlyingCapValue_21);
    UnderlyingInstrument_21.insert(UnderlyingCapValue_21.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_21;
    UnderlyingCashAmount_21.setString("9249976");
    noUnderlyings_0_0.set(UnderlyingCashAmount_21);
    UnderlyingInstrument_21.insert(UnderlyingCashAmount_21.getString());
    FIX::UnderlyingCashType UnderlyingCashType_21("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_21);
    UnderlyingInstrument_21.insert(UnderlyingCashType_21.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_21;
    UnderlyingContractMultiplier_21.setString("104599");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_21);
    UnderlyingInstrument_21.insert(UnderlyingContractMultiplier_21.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_21(1387051509);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_21);
    UnderlyingInstrument_21.insert(UnderlyingContractMultiplierUnit_21.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_21("COUNTRY_388712649");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_21);
    UnderlyingInstrument_21.insert(UnderlyingCountryOfIssue_21.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_21("LOCALMKTDATE_826086860");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_21);
    UnderlyingInstrument_21.insert(UnderlyingCouponPaymentDate_21.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_21;
    UnderlyingCouponRate_21.setString("89.870000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_21);
    UnderlyingInstrument_21.insert(UnderlyingCouponRate_21.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_21("STRING_56181976");
    noUnderlyings_0_0.set(UnderlyingCreditRating_21);
    UnderlyingInstrument_21.insert(UnderlyingCreditRating_21.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_21("GBP");
    noUnderlyings_0_0.set(UnderlyingCurrency_21);
    UnderlyingInstrument_21.insert(UnderlyingCurrency_21.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_21;
    UnderlyingCurrentValue_21.setString("4209809");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_21);
    UnderlyingInstrument_21.insert(UnderlyingCurrentValue_21.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_21;
    UnderlyingDetachmentPoint_21.setString("92.710000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_21);
    UnderlyingInstrument_21.insert(UnderlyingDetachmentPoint_21.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_21;
    UnderlyingDirtyPrice_21.setString("20746111");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_21);
    UnderlyingInstrument_21.insert(UnderlyingDirtyPrice_21.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_21;
    UnderlyingEndPrice_21.setString("15868237");
    noUnderlyings_0_0.set(UnderlyingEndPrice_21);
    UnderlyingInstrument_21.insert(UnderlyingEndPrice_21.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_21;
    UnderlyingEndValue_21.setString("20899207");
    noUnderlyings_0_0.set(UnderlyingEndValue_21);
    UnderlyingInstrument_21.insert(UnderlyingEndValue_21.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_21(311226130);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_21);
    UnderlyingInstrument_21.insert(UnderlyingExerciseStyle_21.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_21;
    UnderlyingFXRate_21.setString("8506008");
    noUnderlyings_0_0.set(UnderlyingFXRate_21);
    UnderlyingInstrument_21.insert(UnderlyingFXRate_21.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_21('M');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_21);
    UnderlyingInstrument_21.insert(UnderlyingFXRateCalc_21.getString());
    FIX::UnderlyingFactor UnderlyingFactor_21;
    UnderlyingFactor_21.setString("16706039");
    noUnderlyings_0_0.set(UnderlyingFactor_21);
    UnderlyingInstrument_21.insert(UnderlyingFactor_21.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_21(1237215333);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_21);
    UnderlyingInstrument_21.insert(UnderlyingFlowScheduleType_21.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_21("STRING_1809533928");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_21);
    UnderlyingInstrument_21.insert(UnderlyingInstrRegistry_21.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_21("LOCALMKTDATE_1323091452");
    noUnderlyings_0_0.set(UnderlyingIssueDate_21);
    UnderlyingInstrument_21.insert(UnderlyingIssueDate_21.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_21("STRING_994043154");
    noUnderlyings_0_0.set(UnderlyingIssuer_21);
    UnderlyingInstrument_21.insert(UnderlyingIssuer_21.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_21("STRING_417640856");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_21);
    UnderlyingInstrument_21.insert(UnderlyingLocaleOfIssue_21.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_21("LOCALMKTDATE_788989538");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_21);
    UnderlyingInstrument_21.insert(UnderlyingMaturityDate_21.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_21("MONTHYEAR_1333513598");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_21);
    UnderlyingInstrument_21.insert(UnderlyingMaturityMonthYear_21.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_21("TZTIMEONLY_1546807579");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_21);
    UnderlyingInstrument_21.insert(UnderlyingMaturityTime_21.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_21;
    UnderlyingNotionalPercentageOutstanding_21.setString("90.270000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_21);
    UnderlyingInstrument_21.insert(UnderlyingNotionalPercentageOutstanding_21.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_21('3');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_21);
    UnderlyingInstrument_21.insert(UnderlyingOptAttribute_21.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_21;
    UnderlyingOriginalNotionalPercentageOutstanding_21.setString("64.790000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_21);
    UnderlyingInstrument_21.insert(UnderlyingOriginalNotionalPercentageOutstanding_21.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_21("STRING_329095120");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_21);
    UnderlyingInstrument_21.insert(UnderlyingPriceUnitOfMeasure_21.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_21;
    UnderlyingPriceUnitOfMeasureQty_21.setString("9597236");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_21);
    UnderlyingInstrument_21.insert(UnderlyingPriceUnitOfMeasureQty_21.getString());
    FIX::UnderlyingProduct UnderlyingProduct_21(1327210205);
    noUnderlyings_0_0.set(UnderlyingProduct_21);
    UnderlyingInstrument_21.insert(UnderlyingProduct_21.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_21(339555115);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_21);
    UnderlyingInstrument_21.insert(UnderlyingPutOrCall_21.getString());
    FIX::UnderlyingPx UnderlyingPx_21;
    UnderlyingPx_21.setString("1992915");
    noUnderlyings_0_0.set(UnderlyingPx_21);
    UnderlyingInstrument_21.insert(UnderlyingPx_21.getString());
    FIX::UnderlyingQty UnderlyingQty_21;
    UnderlyingQty_21.setString("17159228");
    noUnderlyings_0_0.set(UnderlyingQty_21);
    UnderlyingInstrument_21.insert(UnderlyingQty_21.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_21("LOCALMKTDATE_1165641975");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_21);
    UnderlyingInstrument_21.insert(UnderlyingRedemptionDate_21.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_21("STRING_444960536");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_21);
    UnderlyingInstrument_21.insert(UnderlyingRepoCollateralSecurityType_21.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_21;
    UnderlyingRepurchaseRate_21.setString("48.310000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_21);
    UnderlyingInstrument_21.insert(UnderlyingRepurchaseRate_21.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_21(806171728);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_21);
    UnderlyingInstrument_21.insert(UnderlyingRepurchaseTerm_21.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_21("STRING_1554263933");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_21);
    UnderlyingInstrument_21.insert(UnderlyingRestructuringType_21.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_21("STRING_45602164");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_21);
    UnderlyingInstrument_21.insert(UnderlyingSecurityDesc_21.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_21("EXCHANGE_175877351");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_21);
    UnderlyingInstrument_21.insert(UnderlyingSecurityExchange_21.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_21("STRING_1481391400");
    noUnderlyings_0_0.set(UnderlyingSecurityID_21);
    UnderlyingInstrument_21.insert(UnderlyingSecurityID_21.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_21("STRING_1632425927");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_21);
    UnderlyingInstrument_21.insert(UnderlyingSecurityIDSource_21.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_21("STRING_118314451");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_21);
    UnderlyingInstrument_21.insert(UnderlyingSecuritySubType_21.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_21("STRING_1792617530");
    noUnderlyings_0_0.set(UnderlyingSecurityType_21);
    UnderlyingInstrument_21.insert(UnderlyingSecurityType_21.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_21("STRING_335543131");
    noUnderlyings_0_0.set(UnderlyingSeniority_21);
    UnderlyingInstrument_21.insert(UnderlyingSeniority_21.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_21("STRING_280201751");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_21);
    UnderlyingInstrument_21.insert(UnderlyingSettlMethod_21.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_21(2);
    noUnderlyings_0_0.set(UnderlyingSettlementType_21);
    UnderlyingInstrument_21.insert(UnderlyingSettlementType_21.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_21;
    UnderlyingStartValue_21.setString("15727584");
    noUnderlyings_0_0.set(UnderlyingStartValue_21);
    UnderlyingInstrument_21.insert(UnderlyingStartValue_21.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_21("STRING_2089735679");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_21);
    UnderlyingInstrument_21.insert(UnderlyingStateOrProvinceOfIssue_21.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_21("GBP");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_21);
    UnderlyingInstrument_21.insert(UnderlyingStrikeCurrency_21.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_21;
    UnderlyingStrikePrice_21.setString("3598928");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_21);
    UnderlyingInstrument_21.insert(UnderlyingStrikePrice_21.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_21("STRING_1280335168");
    noUnderlyings_0_0.set(UnderlyingSymbol_21);
    UnderlyingInstrument_21.insert(UnderlyingSymbol_21.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_21("STRING_1752831568");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_21);
    UnderlyingInstrument_21.insert(UnderlyingSymbolSfx_21.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_21("STRING_1906700467");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_21);
    UnderlyingInstrument_21.insert(UnderlyingTimeUnit_21.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_21("STRING_1911204196");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_21);
    UnderlyingInstrument_21.insert(UnderlyingUnitOfMeasure_21.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_21;
    UnderlyingUnitOfMeasureQty_21.setString("17875575");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_21);
    UnderlyingInstrument_21.insert(UnderlyingUnitOfMeasureQty_21.getString());
    all_values.push_back(UnderlyingInstrument_21);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::Confirmation::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_49;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_49("STRING_92815668");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_49);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_49.insert(UnderlyingSecurityAltID_49.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_49("STRING_599797610");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_49);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_49.insert(UnderlyingSecurityAltIDSource_49.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_49);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::Confirmation::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_50;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_50("STRING_488149856");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_50);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_50.insert(UnderlyingSecurityAltID_50.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_50("STRING_432370783");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_50);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_50.insert(UnderlyingSecurityAltIDSource_50.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_50);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::Confirmation::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_51;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_51("STRING_799089159");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltID_51);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_51.insert(UnderlyingSecurityAltID_51.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_51("STRING_56589063");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltIDSource_51);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_51.insert(UnderlyingSecurityAltIDSource_51.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_51);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::Confirmation::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_38;
      FIX::UnderlyingStipType UnderlyingStipType_38("STRING_1244049695");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_38);
      UnderlyingStipulations_NoUnderlyingStips_38.insert(UnderlyingStipType_38.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_38("STRING_1828693894");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_38);
      UnderlyingStipulations_NoUnderlyingStips_38.insert(UnderlyingStipValue_38.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_38);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::Confirmation::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_39;
      FIX::UnderlyingStipType UnderlyingStipType_39("STRING_256700839");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_39);
      UnderlyingStipulations_NoUnderlyingStips_39.insert(UnderlyingStipType_39.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_39("STRING_650829980");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_39);
      UnderlyingStipulations_NoUnderlyingStips_39.insert(UnderlyingStipValue_39.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_39);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    {
      FIX50SP2::Confirmation::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_40;
      FIX::UnderlyingStipType UnderlyingStipType_40("STRING_1874296058");
      noUnderlyingStips_0_1_2.set(UnderlyingStipType_40);
      UnderlyingStipulations_NoUnderlyingStips_40.insert(UnderlyingStipType_40.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_40("STRING_432578190");
      noUnderlyingStips_0_1_2.set(UnderlyingStipValue_40);
      UnderlyingStipulations_NoUnderlyingStips_40.insert(UnderlyingStipValue_40.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_40);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::Confirmation::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_42;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_42("STRING_1359238337");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_42);
      UndlyInstrumentParties_NoUndlyInstrumentParties_42.insert(UnderlyingInstrumentPartyID_42.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_42('5');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_42);
      UndlyInstrumentParties_NoUndlyInstrumentParties_42.insert(UnderlyingInstrumentPartyIDSource_42.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_42(1777355263);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_42);
      UndlyInstrumentParties_NoUndlyInstrumentParties_42.insert(UnderlyingInstrumentPartyRole_42.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_42);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Confirmation::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_80;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_80("STRING_831094392");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_80);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_80.insert(UnderlyingInstrumentPartySubID_80.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_80(945609441);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_80);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_80.insert(UnderlyingInstrumentPartySubIDType_80.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_80);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::Confirmation::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_81;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_81("STRING_1120056285");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_81);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_81.insert(UnderlyingInstrumentPartySubID_81.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_81(773346424);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_81);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_81.insert(UnderlyingInstrumentPartySubIDType_81.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_81);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::Confirmation::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_43;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_43("STRING_1436955071");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_43);
      UndlyInstrumentParties_NoUndlyInstrumentParties_43.insert(UnderlyingInstrumentPartyID_43.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_43('1');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_43);
      UndlyInstrumentParties_NoUndlyInstrumentParties_43.insert(UnderlyingInstrumentPartyIDSource_43.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_43(1133239312);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_43);
      UndlyInstrumentParties_NoUndlyInstrumentParties_43.insert(UnderlyingInstrumentPartyRole_43.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_43);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Confirmation::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_82;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_82("STRING_1144722176");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_82);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_82.insert(UnderlyingInstrumentPartySubID_82.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_82(892456131);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_82);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_82.insert(UnderlyingInstrumentPartySubIDType_82.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_82);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::Confirmation::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_83;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_83("STRING_333527139");
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubID_83);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_83.insert(UnderlyingInstrumentPartySubID_83.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_83(784796099);
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubIDType_83);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_83.insert(UnderlyingInstrumentPartySubIDType_83.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_83);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::Confirmation::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_22;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_22("DATA_53395782");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_22);
    UnderlyingInstrument_22.insert(EncodedUnderlyingIssuer_22.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_22(426342807);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_22);
    UnderlyingInstrument_22.insert(EncodedUnderlyingIssuerLen_22.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_22("DATA_1384593709");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_22);
    UnderlyingInstrument_22.insert(EncodedUnderlyingSecurityDesc_22.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_22(541545639);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_22);
    UnderlyingInstrument_22.insert(EncodedUnderlyingSecurityDescLen_22.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_22;
    UnderlyingAdjustedQuantity_22.setString("8587135");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_22);
    UnderlyingInstrument_22.insert(UnderlyingAdjustedQuantity_22.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_22;
    UnderlyingAllocationPercent_22.setString("92.200000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_22);
    UnderlyingInstrument_22.insert(UnderlyingAllocationPercent_22.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_22;
    UnderlyingAttachmentPoint_22.setString("47.020000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_22);
    UnderlyingInstrument_22.insert(UnderlyingAttachmentPoint_22.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_22("STRING_309242702");
    noUnderlyings_0_1.set(UnderlyingCFICode_22);
    UnderlyingInstrument_22.insert(UnderlyingCFICode_22.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_22("STRING_1280248915");
    noUnderlyings_0_1.set(UnderlyingCPProgram_22);
    UnderlyingInstrument_22.insert(UnderlyingCPProgram_22.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_22("STRING_279344948");
    noUnderlyings_0_1.set(UnderlyingCPRegType_22);
    UnderlyingInstrument_22.insert(UnderlyingCPRegType_22.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_22;
    UnderlyingCapValue_22.setString("5659435");
    noUnderlyings_0_1.set(UnderlyingCapValue_22);
    UnderlyingInstrument_22.insert(UnderlyingCapValue_22.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_22;
    UnderlyingCashAmount_22.setString("19310788");
    noUnderlyings_0_1.set(UnderlyingCashAmount_22);
    UnderlyingInstrument_22.insert(UnderlyingCashAmount_22.getString());
    FIX::UnderlyingCashType UnderlyingCashType_22("STRING_FIXED");
    noUnderlyings_0_1.set(UnderlyingCashType_22);
    UnderlyingInstrument_22.insert(UnderlyingCashType_22.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_22;
    UnderlyingContractMultiplier_22.setString("9985217");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_22);
    UnderlyingInstrument_22.insert(UnderlyingContractMultiplier_22.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_22(1915816629);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_22);
    UnderlyingInstrument_22.insert(UnderlyingContractMultiplierUnit_22.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_22("COUNTRY_1365395695");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_22);
    UnderlyingInstrument_22.insert(UnderlyingCountryOfIssue_22.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_22("LOCALMKTDATE_1549414372");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_22);
    UnderlyingInstrument_22.insert(UnderlyingCouponPaymentDate_22.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_22;
    UnderlyingCouponRate_22.setString("82.440000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_22);
    UnderlyingInstrument_22.insert(UnderlyingCouponRate_22.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_22("STRING_912693516");
    noUnderlyings_0_1.set(UnderlyingCreditRating_22);
    UnderlyingInstrument_22.insert(UnderlyingCreditRating_22.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_22("CHF");
    noUnderlyings_0_1.set(UnderlyingCurrency_22);
    UnderlyingInstrument_22.insert(UnderlyingCurrency_22.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_22;
    UnderlyingCurrentValue_22.setString("20327498");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_22);
    UnderlyingInstrument_22.insert(UnderlyingCurrentValue_22.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_22;
    UnderlyingDetachmentPoint_22.setString("15.410000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_22);
    UnderlyingInstrument_22.insert(UnderlyingDetachmentPoint_22.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_22;
    UnderlyingDirtyPrice_22.setString("17807691");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_22);
    UnderlyingInstrument_22.insert(UnderlyingDirtyPrice_22.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_22;
    UnderlyingEndPrice_22.setString("14246404");
    noUnderlyings_0_1.set(UnderlyingEndPrice_22);
    UnderlyingInstrument_22.insert(UnderlyingEndPrice_22.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_22;
    UnderlyingEndValue_22.setString("21396108");
    noUnderlyings_0_1.set(UnderlyingEndValue_22);
    UnderlyingInstrument_22.insert(UnderlyingEndValue_22.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_22(203092052);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_22);
    UnderlyingInstrument_22.insert(UnderlyingExerciseStyle_22.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_22;
    UnderlyingFXRate_22.setString("4218789");
    noUnderlyings_0_1.set(UnderlyingFXRate_22);
    UnderlyingInstrument_22.insert(UnderlyingFXRate_22.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_22('D');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_22);
    UnderlyingInstrument_22.insert(UnderlyingFXRateCalc_22.getString());
    FIX::UnderlyingFactor UnderlyingFactor_22;
    UnderlyingFactor_22.setString("5366191");
    noUnderlyings_0_1.set(UnderlyingFactor_22);
    UnderlyingInstrument_22.insert(UnderlyingFactor_22.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_22(1206675037);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_22);
    UnderlyingInstrument_22.insert(UnderlyingFlowScheduleType_22.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_22("STRING_937979119");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_22);
    UnderlyingInstrument_22.insert(UnderlyingInstrRegistry_22.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_22("LOCALMKTDATE_962961999");
    noUnderlyings_0_1.set(UnderlyingIssueDate_22);
    UnderlyingInstrument_22.insert(UnderlyingIssueDate_22.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_22("STRING_443785098");
    noUnderlyings_0_1.set(UnderlyingIssuer_22);
    UnderlyingInstrument_22.insert(UnderlyingIssuer_22.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_22("STRING_1479524758");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_22);
    UnderlyingInstrument_22.insert(UnderlyingLocaleOfIssue_22.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_22("LOCALMKTDATE_1821675590");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_22);
    UnderlyingInstrument_22.insert(UnderlyingMaturityDate_22.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_22("MONTHYEAR_479984318");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_22);
    UnderlyingInstrument_22.insert(UnderlyingMaturityMonthYear_22.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_22("TZTIMEONLY_2077659460");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_22);
    UnderlyingInstrument_22.insert(UnderlyingMaturityTime_22.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_22;
    UnderlyingNotionalPercentageOutstanding_22.setString("82.920000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_22);
    UnderlyingInstrument_22.insert(UnderlyingNotionalPercentageOutstanding_22.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_22('1');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_22);
    UnderlyingInstrument_22.insert(UnderlyingOptAttribute_22.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_22;
    UnderlyingOriginalNotionalPercentageOutstanding_22.setString("7.600000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_22);
    UnderlyingInstrument_22.insert(UnderlyingOriginalNotionalPercentageOutstanding_22.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_22("STRING_549378185");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_22);
    UnderlyingInstrument_22.insert(UnderlyingPriceUnitOfMeasure_22.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_22;
    UnderlyingPriceUnitOfMeasureQty_22.setString("15438284");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_22);
    UnderlyingInstrument_22.insert(UnderlyingPriceUnitOfMeasureQty_22.getString());
    FIX::UnderlyingProduct UnderlyingProduct_22(215678118);
    noUnderlyings_0_1.set(UnderlyingProduct_22);
    UnderlyingInstrument_22.insert(UnderlyingProduct_22.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_22(1547899916);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_22);
    UnderlyingInstrument_22.insert(UnderlyingPutOrCall_22.getString());
    FIX::UnderlyingPx UnderlyingPx_22;
    UnderlyingPx_22.setString("13121614");
    noUnderlyings_0_1.set(UnderlyingPx_22);
    UnderlyingInstrument_22.insert(UnderlyingPx_22.getString());
    FIX::UnderlyingQty UnderlyingQty_22;
    UnderlyingQty_22.setString("15810738");
    noUnderlyings_0_1.set(UnderlyingQty_22);
    UnderlyingInstrument_22.insert(UnderlyingQty_22.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_22("LOCALMKTDATE_949830640");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_22);
    UnderlyingInstrument_22.insert(UnderlyingRedemptionDate_22.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_22("STRING_710366059");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_22);
    UnderlyingInstrument_22.insert(UnderlyingRepoCollateralSecurityType_22.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_22;
    UnderlyingRepurchaseRate_22.setString("36.820000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_22);
    UnderlyingInstrument_22.insert(UnderlyingRepurchaseRate_22.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_22(1182855757);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_22);
    UnderlyingInstrument_22.insert(UnderlyingRepurchaseTerm_22.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_22("STRING_1054180097");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_22);
    UnderlyingInstrument_22.insert(UnderlyingRestructuringType_22.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_22("STRING_231549836");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_22);
    UnderlyingInstrument_22.insert(UnderlyingSecurityDesc_22.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_22("EXCHANGE_41743650");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_22);
    UnderlyingInstrument_22.insert(UnderlyingSecurityExchange_22.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_22("STRING_687465557");
    noUnderlyings_0_1.set(UnderlyingSecurityID_22);
    UnderlyingInstrument_22.insert(UnderlyingSecurityID_22.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_22("STRING_1656190246");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_22);
    UnderlyingInstrument_22.insert(UnderlyingSecurityIDSource_22.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_22("STRING_33870855");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_22);
    UnderlyingInstrument_22.insert(UnderlyingSecuritySubType_22.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_22("STRING_890557609");
    noUnderlyings_0_1.set(UnderlyingSecurityType_22);
    UnderlyingInstrument_22.insert(UnderlyingSecurityType_22.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_22("STRING_2078069184");
    noUnderlyings_0_1.set(UnderlyingSeniority_22);
    UnderlyingInstrument_22.insert(UnderlyingSeniority_22.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_22("STRING_918454192");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_22);
    UnderlyingInstrument_22.insert(UnderlyingSettlMethod_22.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_22(4);
    noUnderlyings_0_1.set(UnderlyingSettlementType_22);
    UnderlyingInstrument_22.insert(UnderlyingSettlementType_22.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_22;
    UnderlyingStartValue_22.setString("11372605");
    noUnderlyings_0_1.set(UnderlyingStartValue_22);
    UnderlyingInstrument_22.insert(UnderlyingStartValue_22.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_22("STRING_1856433311");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_22);
    UnderlyingInstrument_22.insert(UnderlyingStateOrProvinceOfIssue_22.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_22("USD");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_22);
    UnderlyingInstrument_22.insert(UnderlyingStrikeCurrency_22.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_22;
    UnderlyingStrikePrice_22.setString("11884744");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_22);
    UnderlyingInstrument_22.insert(UnderlyingStrikePrice_22.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_22("STRING_2064330742");
    noUnderlyings_0_1.set(UnderlyingSymbol_22);
    UnderlyingInstrument_22.insert(UnderlyingSymbol_22.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_22("STRING_2061029991");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_22);
    UnderlyingInstrument_22.insert(UnderlyingSymbolSfx_22.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_22("STRING_1118650233");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_22);
    UnderlyingInstrument_22.insert(UnderlyingTimeUnit_22.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_22("STRING_2047765386");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_22);
    UnderlyingInstrument_22.insert(UnderlyingUnitOfMeasure_22.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_22;
    UnderlyingUnitOfMeasureQty_22.setString("16737795");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_22);
    UnderlyingInstrument_22.insert(UnderlyingUnitOfMeasureQty_22.getString());
    all_values.push_back(UnderlyingInstrument_22);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::Confirmation::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_52;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_52("STRING_449659923");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_52);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_52.insert(UnderlyingSecurityAltID_52.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_52("STRING_1070124411");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_52);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_52.insert(UnderlyingSecurityAltIDSource_52.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_52);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::Confirmation::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_53;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_53("STRING_1543849111");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_53);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_53.insert(UnderlyingSecurityAltID_53.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_53("STRING_1997559839");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_53);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_53.insert(UnderlyingSecurityAltIDSource_53.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_53);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::Confirmation::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_41;
      FIX::UnderlyingStipType UnderlyingStipType_41("STRING_977439276");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_41);
      UnderlyingStipulations_NoUnderlyingStips_41.insert(UnderlyingStipType_41.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_41("STRING_799906831");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_41);
      UnderlyingStipulations_NoUnderlyingStips_41.insert(UnderlyingStipValue_41.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_41);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::Confirmation::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_42;
      FIX::UnderlyingStipType UnderlyingStipType_42("STRING_945168285");
      noUnderlyingStips_1_1_1.set(UnderlyingStipType_42);
      UnderlyingStipulations_NoUnderlyingStips_42.insert(UnderlyingStipType_42.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_42("STRING_1323722958");
      noUnderlyingStips_1_1_1.set(UnderlyingStipValue_42);
      UnderlyingStipulations_NoUnderlyingStips_42.insert(UnderlyingStipValue_42.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_42);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    {
      FIX50SP2::Confirmation::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_43;
      FIX::UnderlyingStipType UnderlyingStipType_43("STRING_1982762589");
      noUnderlyingStips_1_1_2.set(UnderlyingStipType_43);
      UnderlyingStipulations_NoUnderlyingStips_43.insert(UnderlyingStipType_43.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_43("STRING_1999348382");
      noUnderlyingStips_1_1_2.set(UnderlyingStipValue_43);
      UnderlyingStipulations_NoUnderlyingStips_43.insert(UnderlyingStipValue_43.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_43);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::Confirmation::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_44;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_44("STRING_2024506239");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_44);
      UndlyInstrumentParties_NoUndlyInstrumentParties_44.insert(UnderlyingInstrumentPartyID_44.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_44('5');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_44);
      UndlyInstrumentParties_NoUndlyInstrumentParties_44.insert(UnderlyingInstrumentPartyIDSource_44.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_44(1063979392);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_44);
      UndlyInstrumentParties_NoUndlyInstrumentParties_44.insert(UnderlyingInstrumentPartyRole_44.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_44);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Confirmation::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_84;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_84("STRING_1429887901");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_84);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_84.insert(UnderlyingInstrumentPartySubID_84.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_84(994564929);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_84);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_84.insert(UnderlyingInstrumentPartySubIDType_84.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_84);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::Confirmation::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_85;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_85("STRING_829347639");
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubID_85);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_85.insert(UnderlyingInstrumentPartySubID_85.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_85(709581054);
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubIDType_85);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_85.insert(UnderlyingInstrumentPartySubIDType_85.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_85);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::Confirmation::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_45;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_45("STRING_2131825503");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_45);
      UndlyInstrumentParties_NoUndlyInstrumentParties_45.insert(UnderlyingInstrumentPartyID_45.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_45('5');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_45);
      UndlyInstrumentParties_NoUndlyInstrumentParties_45.insert(UnderlyingInstrumentPartyIDSource_45.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_45(952236206);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_45);
      UndlyInstrumentParties_NoUndlyInstrumentParties_45.insert(UnderlyingInstrumentPartyRole_45.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_45);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Confirmation::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_86;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_86("STRING_1726771723");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_86);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_86.insert(UnderlyingInstrumentPartySubID_86.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_86(869083300);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_86);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_86.insert(UnderlyingInstrumentPartySubIDType_86.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_86);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::Confirmation::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_87;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_87("STRING_1478933870");
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubID_87);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_87.insert(UnderlyingInstrumentPartySubID_87.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_87(697938308);
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubIDType_87);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_87.insert(UnderlyingInstrumentPartySubIDType_87.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_87);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    {
      FIX50SP2::Confirmation::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_46;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_46("STRING_769365038");
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyID_46);
      UndlyInstrumentParties_NoUndlyInstrumentParties_46.insert(UnderlyingInstrumentPartyID_46.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_46('1');
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyIDSource_46);
      UndlyInstrumentParties_NoUndlyInstrumentParties_46.insert(UnderlyingInstrumentPartyIDSource_46.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_46(2026109301);
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyRole_46);
      UndlyInstrumentParties_NoUndlyInstrumentParties_46.insert(UnderlyingInstrumentPartyRole_46.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_46);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Confirmation::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_88;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_88("STRING_2075354210");
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubID_88);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_88.insert(UnderlyingInstrumentPartySubID_88.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_88(1422474764);
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubIDType_88);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_88.insert(UnderlyingInstrumentPartySubIDType_88.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_88);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::Confirmation::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_89;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_89("STRING_1069101152");
        noUndlyInstrumentPartySubIDs_1_2_2_1.set(UnderlyingInstrumentPartySubID_89);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_89.insert(UnderlyingInstrumentPartySubID_89.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_89(162672788);
        noUndlyInstrumentPartySubIDs_1_2_2_1.set(UnderlyingInstrumentPartySubIDType_89);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_89.insert(UnderlyingInstrumentPartySubIDType_89.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_89);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_1);
      }
      {
        FIX50SP2::Confirmation::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_90;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_90("STRING_252430392");
        noUndlyInstrumentPartySubIDs_1_2_2_2.set(UnderlyingInstrumentPartySubID_90);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_90.insert(UnderlyingInstrumentPartySubID_90.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_90(1869007984);
        noUndlyInstrumentPartySubIDs_1_2_2_2.set(UnderlyingInstrumentPartySubIDType_90);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_90.insert(UnderlyingInstrumentPartySubIDType_90.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_90);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_2);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  {
    FIX50SP2::Confirmation::NoUnderlyings noUnderlyings_0_2;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_23;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_23("DATA_1107841074");
    noUnderlyings_0_2.set(EncodedUnderlyingIssuer_23);
    UnderlyingInstrument_23.insert(EncodedUnderlyingIssuer_23.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_23(1576153351);
    noUnderlyings_0_2.set(EncodedUnderlyingIssuerLen_23);
    UnderlyingInstrument_23.insert(EncodedUnderlyingIssuerLen_23.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_23("DATA_1704286925");
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDesc_23);
    UnderlyingInstrument_23.insert(EncodedUnderlyingSecurityDesc_23.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_23(959705808);
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDescLen_23);
    UnderlyingInstrument_23.insert(EncodedUnderlyingSecurityDescLen_23.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_23;
    UnderlyingAdjustedQuantity_23.setString("9839424");
    noUnderlyings_0_2.set(UnderlyingAdjustedQuantity_23);
    UnderlyingInstrument_23.insert(UnderlyingAdjustedQuantity_23.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_23;
    UnderlyingAllocationPercent_23.setString("95.160000");
    noUnderlyings_0_2.set(UnderlyingAllocationPercent_23);
    UnderlyingInstrument_23.insert(UnderlyingAllocationPercent_23.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_23;
    UnderlyingAttachmentPoint_23.setString("61.000000");
    noUnderlyings_0_2.set(UnderlyingAttachmentPoint_23);
    UnderlyingInstrument_23.insert(UnderlyingAttachmentPoint_23.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_23("STRING_2047921890");
    noUnderlyings_0_2.set(UnderlyingCFICode_23);
    UnderlyingInstrument_23.insert(UnderlyingCFICode_23.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_23("STRING_1492202963");
    noUnderlyings_0_2.set(UnderlyingCPProgram_23);
    UnderlyingInstrument_23.insert(UnderlyingCPProgram_23.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_23("STRING_781440354");
    noUnderlyings_0_2.set(UnderlyingCPRegType_23);
    UnderlyingInstrument_23.insert(UnderlyingCPRegType_23.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_23;
    UnderlyingCapValue_23.setString("8950031");
    noUnderlyings_0_2.set(UnderlyingCapValue_23);
    UnderlyingInstrument_23.insert(UnderlyingCapValue_23.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_23;
    UnderlyingCashAmount_23.setString("1740669");
    noUnderlyings_0_2.set(UnderlyingCashAmount_23);
    UnderlyingInstrument_23.insert(UnderlyingCashAmount_23.getString());
    FIX::UnderlyingCashType UnderlyingCashType_23("STRING_FIXED");
    noUnderlyings_0_2.set(UnderlyingCashType_23);
    UnderlyingInstrument_23.insert(UnderlyingCashType_23.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_23;
    UnderlyingContractMultiplier_23.setString("8793450");
    noUnderlyings_0_2.set(UnderlyingContractMultiplier_23);
    UnderlyingInstrument_23.insert(UnderlyingContractMultiplier_23.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_23(712364256);
    noUnderlyings_0_2.set(UnderlyingContractMultiplierUnit_23);
    UnderlyingInstrument_23.insert(UnderlyingContractMultiplierUnit_23.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_23("COUNTRY_295773967");
    noUnderlyings_0_2.set(UnderlyingCountryOfIssue_23);
    UnderlyingInstrument_23.insert(UnderlyingCountryOfIssue_23.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_23("LOCALMKTDATE_297248905");
    noUnderlyings_0_2.set(UnderlyingCouponPaymentDate_23);
    UnderlyingInstrument_23.insert(UnderlyingCouponPaymentDate_23.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_23;
    UnderlyingCouponRate_23.setString("23.310000");
    noUnderlyings_0_2.set(UnderlyingCouponRate_23);
    UnderlyingInstrument_23.insert(UnderlyingCouponRate_23.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_23("STRING_1164857267");
    noUnderlyings_0_2.set(UnderlyingCreditRating_23);
    UnderlyingInstrument_23.insert(UnderlyingCreditRating_23.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_23("EUR");
    noUnderlyings_0_2.set(UnderlyingCurrency_23);
    UnderlyingInstrument_23.insert(UnderlyingCurrency_23.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_23;
    UnderlyingCurrentValue_23.setString("19342223");
    noUnderlyings_0_2.set(UnderlyingCurrentValue_23);
    UnderlyingInstrument_23.insert(UnderlyingCurrentValue_23.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_23;
    UnderlyingDetachmentPoint_23.setString("89.270000");
    noUnderlyings_0_2.set(UnderlyingDetachmentPoint_23);
    UnderlyingInstrument_23.insert(UnderlyingDetachmentPoint_23.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_23;
    UnderlyingDirtyPrice_23.setString("8682162");
    noUnderlyings_0_2.set(UnderlyingDirtyPrice_23);
    UnderlyingInstrument_23.insert(UnderlyingDirtyPrice_23.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_23;
    UnderlyingEndPrice_23.setString("10057636");
    noUnderlyings_0_2.set(UnderlyingEndPrice_23);
    UnderlyingInstrument_23.insert(UnderlyingEndPrice_23.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_23;
    UnderlyingEndValue_23.setString("5617994");
    noUnderlyings_0_2.set(UnderlyingEndValue_23);
    UnderlyingInstrument_23.insert(UnderlyingEndValue_23.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_23(143207408);
    noUnderlyings_0_2.set(UnderlyingExerciseStyle_23);
    UnderlyingInstrument_23.insert(UnderlyingExerciseStyle_23.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_23;
    UnderlyingFXRate_23.setString("20748647");
    noUnderlyings_0_2.set(UnderlyingFXRate_23);
    UnderlyingInstrument_23.insert(UnderlyingFXRate_23.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_23('D');
    noUnderlyings_0_2.set(UnderlyingFXRateCalc_23);
    UnderlyingInstrument_23.insert(UnderlyingFXRateCalc_23.getString());
    FIX::UnderlyingFactor UnderlyingFactor_23;
    UnderlyingFactor_23.setString("3956378");
    noUnderlyings_0_2.set(UnderlyingFactor_23);
    UnderlyingInstrument_23.insert(UnderlyingFactor_23.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_23(1796389108);
    noUnderlyings_0_2.set(UnderlyingFlowScheduleType_23);
    UnderlyingInstrument_23.insert(UnderlyingFlowScheduleType_23.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_23("STRING_1832313352");
    noUnderlyings_0_2.set(UnderlyingInstrRegistry_23);
    UnderlyingInstrument_23.insert(UnderlyingInstrRegistry_23.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_23("LOCALMKTDATE_1971791152");
    noUnderlyings_0_2.set(UnderlyingIssueDate_23);
    UnderlyingInstrument_23.insert(UnderlyingIssueDate_23.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_23("STRING_1353192385");
    noUnderlyings_0_2.set(UnderlyingIssuer_23);
    UnderlyingInstrument_23.insert(UnderlyingIssuer_23.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_23("STRING_644535513");
    noUnderlyings_0_2.set(UnderlyingLocaleOfIssue_23);
    UnderlyingInstrument_23.insert(UnderlyingLocaleOfIssue_23.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_23("LOCALMKTDATE_808250001");
    noUnderlyings_0_2.set(UnderlyingMaturityDate_23);
    UnderlyingInstrument_23.insert(UnderlyingMaturityDate_23.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_23("MONTHYEAR_787018253");
    noUnderlyings_0_2.set(UnderlyingMaturityMonthYear_23);
    UnderlyingInstrument_23.insert(UnderlyingMaturityMonthYear_23.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_23("TZTIMEONLY_2143571613");
    noUnderlyings_0_2.set(UnderlyingMaturityTime_23);
    UnderlyingInstrument_23.insert(UnderlyingMaturityTime_23.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_23;
    UnderlyingNotionalPercentageOutstanding_23.setString("82.430000");
    noUnderlyings_0_2.set(UnderlyingNotionalPercentageOutstanding_23);
    UnderlyingInstrument_23.insert(UnderlyingNotionalPercentageOutstanding_23.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_23('1');
    noUnderlyings_0_2.set(UnderlyingOptAttribute_23);
    UnderlyingInstrument_23.insert(UnderlyingOptAttribute_23.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_23;
    UnderlyingOriginalNotionalPercentageOutstanding_23.setString("83.190000");
    noUnderlyings_0_2.set(UnderlyingOriginalNotionalPercentageOutstanding_23);
    UnderlyingInstrument_23.insert(UnderlyingOriginalNotionalPercentageOutstanding_23.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_23("STRING_1603691414");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasure_23);
    UnderlyingInstrument_23.insert(UnderlyingPriceUnitOfMeasure_23.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_23;
    UnderlyingPriceUnitOfMeasureQty_23.setString("3058045");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasureQty_23);
    UnderlyingInstrument_23.insert(UnderlyingPriceUnitOfMeasureQty_23.getString());
    FIX::UnderlyingProduct UnderlyingProduct_23(121066080);
    noUnderlyings_0_2.set(UnderlyingProduct_23);
    UnderlyingInstrument_23.insert(UnderlyingProduct_23.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_23(335552792);
    noUnderlyings_0_2.set(UnderlyingPutOrCall_23);
    UnderlyingInstrument_23.insert(UnderlyingPutOrCall_23.getString());
    FIX::UnderlyingPx UnderlyingPx_23;
    UnderlyingPx_23.setString("10181687");
    noUnderlyings_0_2.set(UnderlyingPx_23);
    UnderlyingInstrument_23.insert(UnderlyingPx_23.getString());
    FIX::UnderlyingQty UnderlyingQty_23;
    UnderlyingQty_23.setString("4168400");
    noUnderlyings_0_2.set(UnderlyingQty_23);
    UnderlyingInstrument_23.insert(UnderlyingQty_23.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_23("LOCALMKTDATE_632801698");
    noUnderlyings_0_2.set(UnderlyingRedemptionDate_23);
    UnderlyingInstrument_23.insert(UnderlyingRedemptionDate_23.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_23("STRING_1309821111");
    noUnderlyings_0_2.set(UnderlyingRepoCollateralSecurityType_23);
    UnderlyingInstrument_23.insert(UnderlyingRepoCollateralSecurityType_23.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_23;
    UnderlyingRepurchaseRate_23.setString("73.140000");
    noUnderlyings_0_2.set(UnderlyingRepurchaseRate_23);
    UnderlyingInstrument_23.insert(UnderlyingRepurchaseRate_23.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_23(261500826);
    noUnderlyings_0_2.set(UnderlyingRepurchaseTerm_23);
    UnderlyingInstrument_23.insert(UnderlyingRepurchaseTerm_23.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_23("STRING_151928103");
    noUnderlyings_0_2.set(UnderlyingRestructuringType_23);
    UnderlyingInstrument_23.insert(UnderlyingRestructuringType_23.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_23("STRING_1368435972");
    noUnderlyings_0_2.set(UnderlyingSecurityDesc_23);
    UnderlyingInstrument_23.insert(UnderlyingSecurityDesc_23.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_23("EXCHANGE_895429753");
    noUnderlyings_0_2.set(UnderlyingSecurityExchange_23);
    UnderlyingInstrument_23.insert(UnderlyingSecurityExchange_23.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_23("STRING_1020144395");
    noUnderlyings_0_2.set(UnderlyingSecurityID_23);
    UnderlyingInstrument_23.insert(UnderlyingSecurityID_23.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_23("STRING_226715944");
    noUnderlyings_0_2.set(UnderlyingSecurityIDSource_23);
    UnderlyingInstrument_23.insert(UnderlyingSecurityIDSource_23.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_23("STRING_1457229243");
    noUnderlyings_0_2.set(UnderlyingSecuritySubType_23);
    UnderlyingInstrument_23.insert(UnderlyingSecuritySubType_23.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_23("STRING_1163351804");
    noUnderlyings_0_2.set(UnderlyingSecurityType_23);
    UnderlyingInstrument_23.insert(UnderlyingSecurityType_23.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_23("STRING_154097068");
    noUnderlyings_0_2.set(UnderlyingSeniority_23);
    UnderlyingInstrument_23.insert(UnderlyingSeniority_23.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_23("STRING_34217874");
    noUnderlyings_0_2.set(UnderlyingSettlMethod_23);
    UnderlyingInstrument_23.insert(UnderlyingSettlMethod_23.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_23(5);
    noUnderlyings_0_2.set(UnderlyingSettlementType_23);
    UnderlyingInstrument_23.insert(UnderlyingSettlementType_23.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_23;
    UnderlyingStartValue_23.setString("19504861");
    noUnderlyings_0_2.set(UnderlyingStartValue_23);
    UnderlyingInstrument_23.insert(UnderlyingStartValue_23.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_23("STRING_1866531226");
    noUnderlyings_0_2.set(UnderlyingStateOrProvinceOfIssue_23);
    UnderlyingInstrument_23.insert(UnderlyingStateOrProvinceOfIssue_23.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_23("EUR");
    noUnderlyings_0_2.set(UnderlyingStrikeCurrency_23);
    UnderlyingInstrument_23.insert(UnderlyingStrikeCurrency_23.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_23;
    UnderlyingStrikePrice_23.setString("3635830");
    noUnderlyings_0_2.set(UnderlyingStrikePrice_23);
    UnderlyingInstrument_23.insert(UnderlyingStrikePrice_23.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_23("STRING_44063462");
    noUnderlyings_0_2.set(UnderlyingSymbol_23);
    UnderlyingInstrument_23.insert(UnderlyingSymbol_23.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_23("STRING_1943213166");
    noUnderlyings_0_2.set(UnderlyingSymbolSfx_23);
    UnderlyingInstrument_23.insert(UnderlyingSymbolSfx_23.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_23("STRING_359671057");
    noUnderlyings_0_2.set(UnderlyingTimeUnit_23);
    UnderlyingInstrument_23.insert(UnderlyingTimeUnit_23.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_23("STRING_752751706");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasure_23);
    UnderlyingInstrument_23.insert(UnderlyingUnitOfMeasure_23.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_23;
    UnderlyingUnitOfMeasureQty_23.setString("20749507");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasureQty_23);
    UnderlyingInstrument_23.insert(UnderlyingUnitOfMeasureQty_23.getString());
    all_values.push_back(UnderlyingInstrument_23);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::Confirmation::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_54;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_54("STRING_208959472");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltID_54);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_54.insert(UnderlyingSecurityAltID_54.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_54("STRING_233271611");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltIDSource_54);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_54.insert(UnderlyingSecurityAltIDSource_54.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_54);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::Confirmation::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_55;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_55("STRING_1258265456");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltID_55);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_55.insert(UnderlyingSecurityAltID_55.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_55("STRING_544512265");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltIDSource_55);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_55.insert(UnderlyingSecurityAltIDSource_55.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_55);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_1);
    }
    {
      FIX50SP2::Confirmation::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_56;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_56("STRING_1251440391");
      noUnderlyingSecurityAltID_2_1_2.set(UnderlyingSecurityAltID_56);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_56.insert(UnderlyingSecurityAltID_56.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_56("STRING_1675105503");
      noUnderlyingSecurityAltID_2_1_2.set(UnderlyingSecurityAltIDSource_56);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_56.insert(UnderlyingSecurityAltIDSource_56.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_56);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::Confirmation::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_44;
      FIX::UnderlyingStipType UnderlyingStipType_44("STRING_413777854");
      noUnderlyingStips_2_1_0.set(UnderlyingStipType_44);
      UnderlyingStipulations_NoUnderlyingStips_44.insert(UnderlyingStipType_44.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_44("STRING_1109319170");
      noUnderlyingStips_2_1_0.set(UnderlyingStipValue_44);
      UnderlyingStipulations_NoUnderlyingStips_44.insert(UnderlyingStipValue_44.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_44);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    {
      FIX50SP2::Confirmation::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_45;
      FIX::UnderlyingStipType UnderlyingStipType_45("STRING_1438814789");
      noUnderlyingStips_2_1_1.set(UnderlyingStipType_45);
      UnderlyingStipulations_NoUnderlyingStips_45.insert(UnderlyingStipType_45.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_45("STRING_565705957");
      noUnderlyingStips_2_1_1.set(UnderlyingStipValue_45);
      UnderlyingStipulations_NoUnderlyingStips_45.insert(UnderlyingStipValue_45.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_45);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_1);
    }
    {
      FIX50SP2::Confirmation::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_46;
      FIX::UnderlyingStipType UnderlyingStipType_46("STRING_330271494");
      noUnderlyingStips_2_1_2.set(UnderlyingStipType_46);
      UnderlyingStipulations_NoUnderlyingStips_46.insert(UnderlyingStipType_46.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_46("STRING_186760894");
      noUnderlyingStips_2_1_2.set(UnderlyingStipValue_46);
      UnderlyingStipulations_NoUnderlyingStips_46.insert(UnderlyingStipValue_46.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_46);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::Confirmation::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_47;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_47("STRING_556987438");
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyID_47);
      UndlyInstrumentParties_NoUndlyInstrumentParties_47.insert(UnderlyingInstrumentPartyID_47.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_47('1');
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyIDSource_47);
      UndlyInstrumentParties_NoUndlyInstrumentParties_47.insert(UnderlyingInstrumentPartyIDSource_47.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_47(601718509);
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyRole_47);
      UndlyInstrumentParties_NoUndlyInstrumentParties_47.insert(UnderlyingInstrumentPartyRole_47.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_47);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Confirmation::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_91;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_91("STRING_1678208012");
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubID_91);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_91.insert(UnderlyingInstrumentPartySubID_91.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_91(13224466);
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubIDType_91);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_91.insert(UnderlyingInstrumentPartySubIDType_91.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_91);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::Confirmation::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_92;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_92("STRING_514087034");
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubID_92);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_92.insert(UnderlyingInstrumentPartySubID_92.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_92(1397255590);
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubIDType_92);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_92.insert(UnderlyingInstrumentPartySubIDType_92.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_92);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_1);
      }
      {
        FIX50SP2::Confirmation::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_93;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_93("STRING_1396521575");
        noUndlyInstrumentPartySubIDs_2_0_2_2.set(UnderlyingInstrumentPartySubID_93);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_93.insert(UnderlyingInstrumentPartySubID_93.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_93(1670281947);
        noUndlyInstrumentPartySubIDs_2_0_2_2.set(UnderlyingInstrumentPartySubIDType_93);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_93.insert(UnderlyingInstrumentPartySubIDType_93.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_93);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_2);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_0);
    }
    {
      FIX50SP2::Confirmation::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_48;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_48("STRING_1760838682");
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyID_48);
      UndlyInstrumentParties_NoUndlyInstrumentParties_48.insert(UnderlyingInstrumentPartyID_48.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_48('1');
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyIDSource_48);
      UndlyInstrumentParties_NoUndlyInstrumentParties_48.insert(UnderlyingInstrumentPartyIDSource_48.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_48(1466011466);
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyRole_48);
      UndlyInstrumentParties_NoUndlyInstrumentParties_48.insert(UnderlyingInstrumentPartyRole_48.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_48);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Confirmation::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_94;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_94("STRING_45853095");
        noUndlyInstrumentPartySubIDs_2_1_2_0.set(UnderlyingInstrumentPartySubID_94);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_94.insert(UnderlyingInstrumentPartySubID_94.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_94(1393478553);
        noUndlyInstrumentPartySubIDs_2_1_2_0.set(UnderlyingInstrumentPartySubIDType_94);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_94.insert(UnderlyingInstrumentPartySubIDType_94.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_94);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::Confirmation::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_95;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_95("STRING_1110225467");
        noUndlyInstrumentPartySubIDs_2_1_2_1.set(UnderlyingInstrumentPartySubID_95);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_95.insert(UnderlyingInstrumentPartySubID_95.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_95(254812568);
        noUndlyInstrumentPartySubIDs_2_1_2_1.set(UnderlyingInstrumentPartySubIDType_95);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_95.insert(UnderlyingInstrumentPartySubIDType_95.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_95);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_1);
      }
      {
        FIX50SP2::Confirmation::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_96;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_96("STRING_1626750164");
        noUndlyInstrumentPartySubIDs_2_1_2_2.set(UnderlyingInstrumentPartySubID_96);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_96.insert(UnderlyingInstrumentPartySubID_96.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_96(221007276);
        noUndlyInstrumentPartySubIDs_2_1_2_2.set(UnderlyingInstrumentPartySubIDType_96);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_96.insert(UnderlyingInstrumentPartySubIDType_96.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_96);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_2);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_1);
    }
    msg.addGroup(noUnderlyings_0_2);
  }
  // YieldData
  multiset<string> YieldData_3;
  FIX::Yield Yield_3;
  Yield_3.setString("48.330000");
  msg.set(Yield_3);
  YieldData_3.insert(Yield_3.getString());
  FIX::YieldCalcDate YieldCalcDate_3("LOCALMKTDATE_730706907");
  msg.set(YieldCalcDate_3);
  YieldData_3.insert(YieldCalcDate_3.getString());
  FIX::YieldRedemptionDate YieldRedemptionDate_3("LOCALMKTDATE_1896112779");
  msg.set(YieldRedemptionDate_3);
  YieldData_3.insert(YieldRedemptionDate_3.getString());
  FIX::YieldRedemptionPrice YieldRedemptionPrice_3;
  YieldRedemptionPrice_3.setString("19766387");
  msg.set(YieldRedemptionPrice_3);
  YieldData_3.insert(YieldRedemptionPrice_3.getString());
  FIX::YieldRedemptionPriceType YieldRedemptionPriceType_3(1144484762);
  msg.set(YieldRedemptionPriceType_3);
  YieldData_3.insert(YieldRedemptionPriceType_3.getString());
  FIX::YieldType YieldType_3("STRING_MARK");
  msg.set(YieldType_3);
  YieldData_3.insert(YieldType_3.getString());
  all_values.push_back(YieldData_3);
  all_compo_names.insert("YieldData");


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
