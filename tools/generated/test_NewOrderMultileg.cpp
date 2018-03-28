#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/NewOrderMultileg.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( NewOrderMultileg, set_fields)
{

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::NewOrderMultileg msg;

  list<multiset<string>> all_values;
  multiset<string> NewOrderMultileg_0;
  FIX::Account Account_20("STRING_380045656");
  msg.set(Account_20);
  NewOrderMultileg_0.insert(Account_20.getString());
  FIX::AccountType AccountType_17(6);
  msg.set(AccountType_17);
  NewOrderMultileg_0.insert(AccountType_17.getString());
  FIX::AcctIDSource AcctIDSource_13(99);
  msg.set(AcctIDSource_13);
  NewOrderMultileg_0.insert(AcctIDSource_13.getString());
  FIX::AllocID AllocID_15("STRING_505404168");
  msg.set(AllocID_15);
  NewOrderMultileg_0.insert(AllocID_15.getString());
  FIX::BookingType BookingType_18(0);
  msg.set(BookingType_18);
  NewOrderMultileg_0.insert(BookingType_18.getString());
  FIX::BookingUnit BookingUnit_8('0');
  msg.set(BookingUnit_8);
  NewOrderMultileg_0.insert(BookingUnit_8.getString());
  FIX::CancellationRights CancellationRights_5('N');
  msg.set(CancellationRights_5);
  NewOrderMultileg_0.insert(CancellationRights_5.getString());
  FIX::CashMargin CashMargin_8('3');
  msg.set(CashMargin_8);
  NewOrderMultileg_0.insert(CashMargin_8.getString());
  FIX::ClOrdID ClOrdID_32("STRING_756650511");
  msg.set(ClOrdID_32);
  NewOrderMultileg_0.insert(ClOrdID_32.getString());
  FIX::ClOrdLinkID ClOrdLinkID_11("STRING_949826521");
  msg.set(ClOrdLinkID_11);
  NewOrderMultileg_0.insert(ClOrdLinkID_11.getString());
  FIX::ClearingFeeIndicator ClearingFeeIndicator_13("STRING_L");
  msg.set(ClearingFeeIndicator_13);
  NewOrderMultileg_0.insert(ClearingFeeIndicator_13.getString());
  FIX::ComplianceID ComplianceID_8("STRING_1395166451");
  msg.set(ComplianceID_8);
  NewOrderMultileg_0.insert(ComplianceID_8.getString());
  FIX::CoveredOrUncovered CoveredOrUncovered_7(0);
  msg.set(CoveredOrUncovered_7);
  NewOrderMultileg_0.insert(CoveredOrUncovered_7.getString());
  FIX::Currency Currency_43("EUR");
  msg.set(Currency_43);
  NewOrderMultileg_0.insert(Currency_43.getString());
  FIX::CustOrderCapacity CustOrderCapacity_11(3);
  msg.set(CustOrderCapacity_11);
  NewOrderMultileg_0.insert(CustOrderCapacity_11.getString());
  FIX::DayBookingInst DayBookingInst_8('2');
  msg.set(DayBookingInst_8);
  NewOrderMultileg_0.insert(DayBookingInst_8.getString());
  FIX::Designation Designation_5("STRING_517517510");
  msg.set(Designation_5);
  NewOrderMultileg_0.insert(Designation_5.getString());
  FIX::EffectiveTime EffectiveTime_5(FIX::UTCTIMESTAMP(16, 38, 36, 0, 5, 2012));
  msg.set(EffectiveTime_5);
  NewOrderMultileg_0.insert(EffectiveTime_5.getString());
  FIX::EncodedText EncodedText_65("DATA_877809857");
  msg.set(EncodedText_65);
  NewOrderMultileg_0.insert(EncodedText_65.getString());
  FIX::EncodedTextLen EncodedTextLen_65(341242076);
  msg.set(EncodedTextLen_65);
  NewOrderMultileg_0.insert(EncodedTextLen_65.getString());
  FIX::ExDestination ExDestination_4("EXCHANGE_778962869");
  msg.set(ExDestination_4);
  NewOrderMultileg_0.insert(ExDestination_4.getString());
  FIX::ExDestinationIDSource ExDestinationIDSource_4('D');
  msg.set(ExDestinationIDSource_4);
  NewOrderMultileg_0.insert(ExDestinationIDSource_4.getString());
  FIX::ExecInst ExecInst_10("MULTIPLECHARVALUE_A");
  msg.set(ExecInst_10);
  NewOrderMultileg_0.insert(ExecInst_10.getString());
  FIX::ExpireDate ExpireDate_11("LOCALMKTDATE_2135747410");
  msg.set(ExpireDate_11);
  NewOrderMultileg_0.insert(ExpireDate_11.getString());
  FIX::ExpireTime ExpireTime_12(FIX::UTCTIMESTAMP(7, 19, 56, 2, 2, 2007));
  msg.set(ExpireTime_12);
  NewOrderMultileg_0.insert(ExpireTime_12.getString());
  FIX::ForexReq ForexReq_8(true);
  msg.set(ForexReq_8);
  NewOrderMultileg_0.insert(ForexReq_8.getString());
  FIX::GTBookingInst GTBookingInst_5(0);
  msg.set(GTBookingInst_5);
  NewOrderMultileg_0.insert(GTBookingInst_5.getString());
  FIX::HandlInst HandlInst_5('2');
  msg.set(HandlInst_5);
  NewOrderMultileg_0.insert(HandlInst_5.getString());
  FIX::IOIID IOIID_5("STRING_1843335390");
  msg.set(IOIID_5);
  NewOrderMultileg_0.insert(IOIID_5.getString());
  FIX::LocateReqd LocateReqd_4(true);
  msg.set(LocateReqd_4);
  NewOrderMultileg_0.insert(LocateReqd_4.getString());
  FIX::MatchIncrement MatchIncrement_5;
  MatchIncrement_5.setString("16298066");
  msg.set(MatchIncrement_5);
  NewOrderMultileg_0.insert(MatchIncrement_5.getString());
  FIX::MaxFloor MaxFloor_5;
  MaxFloor_5.setString("2541156");
  msg.set(MaxFloor_5);
  NewOrderMultileg_0.insert(MaxFloor_5.getString());
  FIX::MaxPriceLevels MaxPriceLevels_5(463943701);
  msg.set(MaxPriceLevels_5);
  NewOrderMultileg_0.insert(MaxPriceLevels_5.getString());
  FIX::MaxShow MaxShow_5;
  MaxShow_5.setString("36255");
  msg.set(MaxShow_5);
  NewOrderMultileg_0.insert(MaxShow_5.getString());
  FIX::MinQty MinQty_10;
  MinQty_10.setString("2256273");
  msg.set(MinQty_10);
  NewOrderMultileg_0.insert(MinQty_10.getString());
  FIX::MoneyLaunderingStatus MoneyLaunderingStatus_5('N');
  msg.set(MoneyLaunderingStatus_5);
  NewOrderMultileg_0.insert(MoneyLaunderingStatus_5.getString());
  FIX::MultiLegRptTypeReq MultiLegRptTypeReq_1(2);
  msg.set(MultiLegRptTypeReq_1);
  NewOrderMultileg_0.insert(MultiLegRptTypeReq_1.getString());
  FIX::MultilegModel MultilegModel_8(0);
  msg.set(MultilegModel_8);
  NewOrderMultileg_0.insert(MultilegModel_8.getString());
  FIX::MultilegPriceMethod MultilegPriceMethod_8(5);
  msg.set(MultilegPriceMethod_8);
  NewOrderMultileg_0.insert(MultilegPriceMethod_8.getString());
  FIX::OrdType OrdType_43('Q');
  msg.set(OrdType_43);
  NewOrderMultileg_0.insert(OrdType_43.getString());
  FIX::OrderCapacity OrderCapacity_21('W');
  msg.set(OrderCapacity_21);
  NewOrderMultileg_0.insert(OrderCapacity_21.getString());
  FIX::OrderRestrictions OrderRestrictions_16("MULTIPLECHARVALUE_B");
  msg.set(OrderRestrictions_16);
  NewOrderMultileg_0.insert(OrderRestrictions_16.getString());
  FIX::ParticipationRate ParticipationRate_5;
  ParticipationRate_5.setString("5.590000");
  msg.set(ParticipationRate_5);
  NewOrderMultileg_0.insert(ParticipationRate_5.getString());
  FIX::PositionEffect PositionEffect_11('N');
  msg.set(PositionEffect_11);
  NewOrderMultileg_0.insert(PositionEffect_11.getString());
  FIX::PreTradeAnonymity PreTradeAnonymity_8(true);
  msg.set(PreTradeAnonymity_8);
  NewOrderMultileg_0.insert(PreTradeAnonymity_8.getString());
  FIX::PreallocMethod PreallocMethod_8('1');
  msg.set(PreallocMethod_8);
  NewOrderMultileg_0.insert(PreallocMethod_8.getString());
  FIX::PrevClosePx PrevClosePx_6;
  PrevClosePx_6.setString("7791329");
  msg.set(PrevClosePx_6);
  NewOrderMultileg_0.insert(PrevClosePx_6.getString());
  FIX::Price Price_17;
  Price_17.setString("17731552");
  msg.set(Price_17);
  NewOrderMultileg_0.insert(Price_17.getString());
  FIX::PriceProtectionScope PriceProtectionScope_5('3');
  msg.set(PriceProtectionScope_5);
  NewOrderMultileg_0.insert(PriceProtectionScope_5.getString());
  FIX::PriceType PriceType_31(14);
  msg.set(PriceType_31);
  NewOrderMultileg_0.insert(PriceType_31.getString());
  FIX::ProcessCode ProcessCode_10('0');
  msg.set(ProcessCode_10);
  NewOrderMultileg_0.insert(ProcessCode_10.getString());
  FIX::QtyType QtyType_20(2);
  msg.set(QtyType_20);
  NewOrderMultileg_0.insert(QtyType_20.getString());
  FIX::QuoteID QuoteID_6("STRING_1964882487");
  msg.set(QuoteID_6);
  NewOrderMultileg_0.insert(QuoteID_6.getString());
  FIX::RefOrderID RefOrderID_1("STRING_1461877769");
  msg.set(RefOrderID_1);
  NewOrderMultileg_0.insert(RefOrderID_1.getString());
  FIX::RefOrderIDSource RefOrderIDSource_1('1');
  msg.set(RefOrderIDSource_1);
  NewOrderMultileg_0.insert(RefOrderIDSource_1.getString());
  FIX::RegistID RegistID_5("STRING_1866954788");
  msg.set(RegistID_5);
  NewOrderMultileg_0.insert(RegistID_5.getString());
  FIX::RiskFreeRate RiskFreeRate_2;
  RiskFreeRate_2.setString("1139945");
  msg.set(RiskFreeRate_2);
  NewOrderMultileg_0.insert(RiskFreeRate_2.getString());
  FIX::SecondaryClOrdID SecondaryClOrdID_30("STRING_2042417273");
  msg.set(SecondaryClOrdID_30);
  NewOrderMultileg_0.insert(SecondaryClOrdID_30.getString());
  FIX::SettlCurrency SettlCurrency_19("EUR");
  msg.set(SettlCurrency_19);
  NewOrderMultileg_0.insert(SettlCurrency_19.getString());
  FIX::SettlDate SettlDate_35("LOCALMKTDATE_1625200313");
  msg.set(SettlDate_35);
  NewOrderMultileg_0.insert(SettlDate_35.getString());
  FIX::SettlType SettlType_22("STRING_4");
  msg.set(SettlType_22);
  NewOrderMultileg_0.insert(SettlType_22.getString());
  FIX::Side Side_31('1');
  msg.set(Side_31);
  NewOrderMultileg_0.insert(Side_31.getString());
  FIX::SolicitedFlag SolicitedFlag_8(true);
  msg.set(SolicitedFlag_8);
  NewOrderMultileg_0.insert(SolicitedFlag_8.getString());
  FIX::StopPx StopPx_5;
  StopPx_5.setString("573185");
  msg.set(StopPx_5);
  NewOrderMultileg_0.insert(StopPx_5.getString());
  FIX::SwapPoints SwapPoints_1;
  SwapPoints_1.setString("2895892");
  msg.set(SwapPoints_1);
  NewOrderMultileg_0.insert(SwapPoints_1.getString());
  FIX::TargetStrategy TargetStrategy_5(2);
  msg.set(TargetStrategy_5);
  NewOrderMultileg_0.insert(TargetStrategy_5.getString());
  FIX::TargetStrategyParameters TargetStrategyParameters_5("STRING_125440978");
  msg.set(TargetStrategyParameters_5);
  NewOrderMultileg_0.insert(TargetStrategyParameters_5.getString());
  FIX::Text Text_65("STRING_1441503954");
  msg.set(Text_65);
  NewOrderMultileg_0.insert(Text_65.getString());
  FIX::TimeInForce TimeInForce_33('9');
  msg.set(TimeInForce_33);
  NewOrderMultileg_0.insert(TimeInForce_33.getString());
  FIX::TradeDate TradeDate_23("LOCALMKTDATE_406045690");
  msg.set(TradeDate_23);
  NewOrderMultileg_0.insert(TradeDate_23.getString());
  FIX::TradeOriginationDate TradeOriginationDate_15("LOCALMKTDATE_308958135");
  msg.set(TradeOriginationDate_15);
  NewOrderMultileg_0.insert(TradeOriginationDate_15.getString());
  FIX::TransactTime TransactTime_37(FIX::UTCTIMESTAMP(9, 54, 38, 2, 1, 2008));
  msg.set(TransactTime_37);
  NewOrderMultileg_0.insert(TransactTime_37.getString());
  all_values.push_back(NewOrderMultileg_0);

  // CommissionData
  multiset<string> CommissionData_17;
  FIX::CommCurrency CommCurrency_17("EUR");
  msg.set(CommCurrency_17);
  CommissionData_17.insert(CommCurrency_17.getString());
  FIX::CommType CommType_17('4');
  msg.set(CommType_17);
  CommissionData_17.insert(CommType_17.getString());
  FIX::Commission Commission_17;
  Commission_17.setString("16376468");
  msg.set(Commission_17);
  CommissionData_17.insert(Commission_17.getString());
  FIX::FundRenewWaiv FundRenewWaiv_17('N');
  msg.set(FundRenewWaiv_17);
  CommissionData_17.insert(FundRenewWaiv_17.getString());
  all_values.push_back(CommissionData_17);

  // DiscretionInstructions
  multiset<string> DiscretionInstructions_5;
  FIX::DiscretionInst DiscretionInst_5('2');
  msg.set(DiscretionInst_5);
  DiscretionInstructions_5.insert(DiscretionInst_5.getString());
  FIX::DiscretionLimitType DiscretionLimitType_5(2);
  msg.set(DiscretionLimitType_5);
  DiscretionInstructions_5.insert(DiscretionLimitType_5.getString());
  FIX::DiscretionMoveType DiscretionMoveType_5(0);
  msg.set(DiscretionMoveType_5);
  DiscretionInstructions_5.insert(DiscretionMoveType_5.getString());
  FIX::DiscretionOffsetType DiscretionOffsetType_5(3);
  msg.set(DiscretionOffsetType_5);
  DiscretionInstructions_5.insert(DiscretionOffsetType_5.getString());
  FIX::DiscretionOffsetValue DiscretionOffsetValue_5;
  DiscretionOffsetValue_5.setString("10924138");
  msg.set(DiscretionOffsetValue_5);
  DiscretionInstructions_5.insert(DiscretionOffsetValue_5.getString());
  FIX::DiscretionRoundDirection DiscretionRoundDirection_5(1);
  msg.set(DiscretionRoundDirection_5);
  DiscretionInstructions_5.insert(DiscretionRoundDirection_5.getString());
  FIX::DiscretionScope DiscretionScope_5(4);
  msg.set(DiscretionScope_5);
  DiscretionInstructions_5.insert(DiscretionScope_5.getString());
  all_values.push_back(DiscretionInstructions_5);

  // DisplayInstruction
  multiset<string> DisplayInstruction_5;
  FIX::DisplayHighQty DisplayHighQty_5;
  DisplayHighQty_5.setString("5701305");
  msg.set(DisplayHighQty_5);
  DisplayInstruction_5.insert(DisplayHighQty_5.getString());
  FIX::DisplayLowQty DisplayLowQty_5;
  DisplayLowQty_5.setString("10408517");
  msg.set(DisplayLowQty_5);
  DisplayInstruction_5.insert(DisplayLowQty_5.getString());
  FIX::DisplayMethod DisplayMethod_5('4');
  msg.set(DisplayMethod_5);
  DisplayInstruction_5.insert(DisplayMethod_5.getString());
  FIX::DisplayMinIncr DisplayMinIncr_5;
  DisplayMinIncr_5.setString("5117909");
  msg.set(DisplayMinIncr_5);
  DisplayInstruction_5.insert(DisplayMinIncr_5.getString());
  FIX::DisplayQty DisplayQty_5;
  DisplayQty_5.setString("10981702");
  msg.set(DisplayQty_5);
  DisplayInstruction_5.insert(DisplayQty_5.getString());
  FIX::DisplayWhen DisplayWhen_5('2');
  msg.set(DisplayWhen_5);
  DisplayInstruction_5.insert(DisplayWhen_5.getString());
  FIX::RefreshQty RefreshQty_5;
  RefreshQty_5.setString("14349125");
  msg.set(RefreshQty_5);
  DisplayInstruction_5.insert(RefreshQty_5.getString());
  FIX::SecondaryDisplayQty SecondaryDisplayQty_5;
  SecondaryDisplayQty_5.setString("12236112");
  msg.set(SecondaryDisplayQty_5);
  DisplayInstruction_5.insert(SecondaryDisplayQty_5.getString());
  all_values.push_back(DisplayInstruction_5);

  // Instrument
  multiset<string> Instrument_46;
  FIX::AttachmentPoint AttachmentPoint_46;
  AttachmentPoint_46.setString("59.750000");
  msg.set(AttachmentPoint_46);
  Instrument_46.insert(AttachmentPoint_46.getString());
  FIX::CFICode CFICode_46("STRING_2051089044");
  msg.set(CFICode_46);
  Instrument_46.insert(CFICode_46.getString());
  FIX::CPProgram CPProgram_46(2);
  msg.set(CPProgram_46);
  Instrument_46.insert(CPProgram_46.getString());
  FIX::CPRegType CPRegType_46("STRING_89770463");
  msg.set(CPRegType_46);
  Instrument_46.insert(CPRegType_46.getString());
  FIX::CapPrice CapPrice_46;
  CapPrice_46.setString("16210712");
  msg.set(CapPrice_46);
  Instrument_46.insert(CapPrice_46.getString());
  FIX::ContractMultiplier ContractMultiplier_46;
  ContractMultiplier_46.setString("5053895");
  msg.set(ContractMultiplier_46);
  Instrument_46.insert(ContractMultiplier_46.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_46(2);
  msg.set(ContractMultiplierUnit_46);
  Instrument_46.insert(ContractMultiplierUnit_46.getString());
  FIX::ContractSettlMonth ContractSettlMonth_46("MONTHYEAR_486101111");
  msg.set(ContractSettlMonth_46);
  Instrument_46.insert(ContractSettlMonth_46.getString());
  FIX::CountryOfIssue CountryOfIssue_46("COUNTRY_777255558");
  msg.set(CountryOfIssue_46);
  Instrument_46.insert(CountryOfIssue_46.getString());
  FIX::CouponPaymentDate CouponPaymentDate_46("LOCALMKTDATE_977347721");
  msg.set(CouponPaymentDate_46);
  Instrument_46.insert(CouponPaymentDate_46.getString());
  FIX::CouponRate CouponRate_46;
  CouponRate_46.setString("62.060000");
  msg.set(CouponRate_46);
  Instrument_46.insert(CouponRate_46.getString());
  FIX::CreditRating CreditRating_46("STRING_286035132");
  msg.set(CreditRating_46);
  Instrument_46.insert(CreditRating_46.getString());
  FIX::DatedDate DatedDate_46("LOCALMKTDATE_1856266596");
  msg.set(DatedDate_46);
  Instrument_46.insert(DatedDate_46.getString());
  FIX::DetachmentPoint DetachmentPoint_46;
  DetachmentPoint_46.setString("21.510000");
  msg.set(DetachmentPoint_46);
  Instrument_46.insert(DetachmentPoint_46.getString());
  FIX::EncodedIssuer EncodedIssuer_46("DATA_1923682016");
  msg.set(EncodedIssuer_46);
  Instrument_46.insert(EncodedIssuer_46.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_46(405100662);
  msg.set(EncodedIssuerLen_46);
  Instrument_46.insert(EncodedIssuerLen_46.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_46("DATA_81208570");
  msg.set(EncodedSecurityDesc_46);
  Instrument_46.insert(EncodedSecurityDesc_46.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_46(973678640);
  msg.set(EncodedSecurityDescLen_46);
  Instrument_46.insert(EncodedSecurityDescLen_46.getString());
  FIX::ExerciseStyle ExerciseStyle_46(0);
  msg.set(ExerciseStyle_46);
  Instrument_46.insert(ExerciseStyle_46.getString());
  FIX::Factor Factor_46;
  Factor_46.setString("4046031");
  msg.set(Factor_46);
  Instrument_46.insert(Factor_46.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_46(false);
  msg.set(FlexProductEligibilityIndicator_46);
  Instrument_46.insert(FlexProductEligibilityIndicator_46.getString());
  FIX::FlexibleIndicator FlexibleIndicator_46(false);
  msg.set(FlexibleIndicator_46);
  Instrument_46.insert(FlexibleIndicator_46.getString());
  FIX::FloorPrice FloorPrice_46;
  FloorPrice_46.setString("5378440");
  msg.set(FloorPrice_46);
  Instrument_46.insert(FloorPrice_46.getString());
  FIX::FlowScheduleType FlowScheduleType_46(1);
  msg.set(FlowScheduleType_46);
  Instrument_46.insert(FlowScheduleType_46.getString());
  FIX::InstrRegistry InstrRegistry_46("STRING_701416441");
  msg.set(InstrRegistry_46);
  Instrument_46.insert(InstrRegistry_46.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_46('7');
  msg.set(InstrmtAssignmentMethod_46);
  Instrument_46.insert(InstrmtAssignmentMethod_46.getString());
  FIX::InterestAccrualDate InterestAccrualDate_46("LOCALMKTDATE_1000530379");
  msg.set(InterestAccrualDate_46);
  Instrument_46.insert(InterestAccrualDate_46.getString());
  FIX::IssueDate IssueDate_46("LOCALMKTDATE_1799586699");
  msg.set(IssueDate_46);
  Instrument_46.insert(IssueDate_46.getString());
  FIX::Issuer Issuer_46("STRING_1221838869");
  msg.set(Issuer_46);
  Instrument_46.insert(Issuer_46.getString());
  FIX::ListMethod ListMethod_46(0);
  msg.set(ListMethod_46);
  Instrument_46.insert(ListMethod_46.getString());
  FIX::LocaleOfIssue LocaleOfIssue_46("STRING_875714288");
  msg.set(LocaleOfIssue_46);
  Instrument_46.insert(LocaleOfIssue_46.getString());
  FIX::MaturityDate MaturityDate_46("LOCALMKTDATE_1002651196");
  msg.set(MaturityDate_46);
  Instrument_46.insert(MaturityDate_46.getString());
  FIX::MaturityMonthYear MaturityMonthYear_46("MONTHYEAR_191564633");
  msg.set(MaturityMonthYear_46);
  Instrument_46.insert(MaturityMonthYear_46.getString());
  FIX::MaturityTime MaturityTime_46("TZTIMEONLY_357887566");
  msg.set(MaturityTime_46);
  Instrument_46.insert(MaturityTime_46.getString());
  FIX::MinPriceIncrement MinPriceIncrement_46;
  MinPriceIncrement_46.setString("10924216");
  msg.set(MinPriceIncrement_46);
  Instrument_46.insert(MinPriceIncrement_46.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_46;
  MinPriceIncrementAmount_46.setString("18126358");
  msg.set(MinPriceIncrementAmount_46);
  Instrument_46.insert(MinPriceIncrementAmount_46.getString());
  FIX::NTPositionLimit NTPositionLimit_46(863277094);
  msg.set(NTPositionLimit_46);
  Instrument_46.insert(NTPositionLimit_46.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_46;
  NotionalPercentageOutstanding_46.setString("42.960000");
  msg.set(NotionalPercentageOutstanding_46);
  Instrument_46.insert(NotionalPercentageOutstanding_46.getString());
  FIX::OptAttribute OptAttribute_46('1');
  msg.set(OptAttribute_46);
  Instrument_46.insert(OptAttribute_46.getString());
  FIX::OptPayoutAmount OptPayoutAmount_46;
  OptPayoutAmount_46.setString("16405326");
  msg.set(OptPayoutAmount_46);
  Instrument_46.insert(OptPayoutAmount_46.getString());
  FIX::OptPayoutType OptPayoutType_46(1);
  msg.set(OptPayoutType_46);
  Instrument_46.insert(OptPayoutType_46.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_46;
  OriginalNotionalPercentageOutstanding_46.setString("95.230000");
  msg.set(OriginalNotionalPercentageOutstanding_46);
  Instrument_46.insert(OriginalNotionalPercentageOutstanding_46.getString());
  FIX::Pool Pool_46("STRING_1926567785");
  msg.set(Pool_46);
  Instrument_46.insert(Pool_46.getString());
  FIX::PositionLimit PositionLimit_46(1922544966);
  msg.set(PositionLimit_46);
  Instrument_46.insert(PositionLimit_46.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_46("STRING_PCTPAR");
  msg.set(PriceQuoteMethod_46);
  Instrument_46.insert(PriceQuoteMethod_46.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_46("STRING_1702766153");
  msg.set(PriceUnitOfMeasure_46);
  Instrument_46.insert(PriceUnitOfMeasure_46.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_46;
  PriceUnitOfMeasureQty_46.setString("1801619");
  msg.set(PriceUnitOfMeasureQty_46);
  Instrument_46.insert(PriceUnitOfMeasureQty_46.getString());
  FIX::Product Product_48(9);
  msg.set(Product_48);
  Instrument_46.insert(Product_48.getString());
  FIX::ProductComplex ProductComplex_46("STRING_528961145");
  msg.set(ProductComplex_46);
  Instrument_46.insert(ProductComplex_46.getString());
  FIX::PutOrCall PutOrCall_46(0);
  msg.set(PutOrCall_46);
  Instrument_46.insert(PutOrCall_46.getString());
  FIX::RedemptionDate RedemptionDate_46("LOCALMKTDATE_1633159774");
  msg.set(RedemptionDate_46);
  Instrument_46.insert(RedemptionDate_46.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_46("STRING_447570034");
  msg.set(RepoCollateralSecurityType_46);
  Instrument_46.insert(RepoCollateralSecurityType_46.getString());
  FIX::RepurchaseRate RepurchaseRate_46;
  RepurchaseRate_46.setString("61.850000");
  msg.set(RepurchaseRate_46);
  Instrument_46.insert(RepurchaseRate_46.getString());
  FIX::RepurchaseTerm RepurchaseTerm_46(23520195);
  msg.set(RepurchaseTerm_46);
  Instrument_46.insert(RepurchaseTerm_46.getString());
  FIX::RestructuringType RestructuringType_46("STRING_MR");
  msg.set(RestructuringType_46);
  Instrument_46.insert(RestructuringType_46.getString());
  FIX::SecurityDesc SecurityDesc_46("STRING_1363032626");
  msg.set(SecurityDesc_46);
  Instrument_46.insert(SecurityDesc_46.getString());
  FIX::SecurityExchange SecurityExchange_46("EXCHANGE_758567043");
  msg.set(SecurityExchange_46);
  Instrument_46.insert(SecurityExchange_46.getString());
  FIX::SecurityGroup SecurityGroup_46("STRING_1936839864");
  msg.set(SecurityGroup_46);
  Instrument_46.insert(SecurityGroup_46.getString());
  FIX::SecurityID SecurityID_46("STRING_1015135678");
  msg.set(SecurityID_46);
  Instrument_46.insert(SecurityID_46.getString());
  FIX::SecurityIDSource SecurityIDSource_46("STRING_D");
  msg.set(SecurityIDSource_46);
  Instrument_46.insert(SecurityIDSource_46.getString());
  FIX::SecurityStatus SecurityStatus_46("STRING_1");
  msg.set(SecurityStatus_46);
  Instrument_46.insert(SecurityStatus_46.getString());
  FIX::SecuritySubType SecuritySubType_47("STRING_1890849966");
  msg.set(SecuritySubType_47);
  Instrument_46.insert(SecuritySubType_47.getString());
  FIX::SecurityType SecurityType_48("STRING_EUSUPRA");
  msg.set(SecurityType_48);
  Instrument_46.insert(SecurityType_48.getString());
  FIX::Seniority Seniority_46("STRING_SD");
  msg.set(Seniority_46);
  Instrument_46.insert(Seniority_46.getString());
  FIX::SettlMethod SettlMethod_46('C');
  msg.set(SettlMethod_46);
  Instrument_46.insert(SettlMethod_46.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_46("STRING_1927995120");
  msg.set(SettleOnOpenFlag_46);
  Instrument_46.insert(SettleOnOpenFlag_46.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_46("STRING_2081515939");
  msg.set(StateOrProvinceOfIssue_46);
  Instrument_46.insert(StateOrProvinceOfIssue_46.getString());
  FIX::StrikeCurrency StrikeCurrency_46("USD");
  msg.set(StrikeCurrency_46);
  Instrument_46.insert(StrikeCurrency_46.getString());
  FIX::StrikeMultiplier StrikeMultiplier_46;
  StrikeMultiplier_46.setString("852856");
  msg.set(StrikeMultiplier_46);
  Instrument_46.insert(StrikeMultiplier_46.getString());
  FIX::StrikePrice StrikePrice_46;
  StrikePrice_46.setString("4575799");
  msg.set(StrikePrice_46);
  Instrument_46.insert(StrikePrice_46.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_46(4);
  msg.set(StrikePriceBoundaryMethod_46);
  Instrument_46.insert(StrikePriceBoundaryMethod_46.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_46;
  StrikePriceBoundaryPrecision_46.setString("51.320000");
  msg.set(StrikePriceBoundaryPrecision_46);
  Instrument_46.insert(StrikePriceBoundaryPrecision_46.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_46(2);
  msg.set(StrikePriceDeterminationMethod_46);
  Instrument_46.insert(StrikePriceDeterminationMethod_46.getString());
  FIX::StrikeValue StrikeValue_46;
  StrikeValue_46.setString("8582654");
  msg.set(StrikeValue_46);
  Instrument_46.insert(StrikeValue_46.getString());
  FIX::Symbol Symbol_46("STRING_360689511");
  msg.set(Symbol_46);
  Instrument_46.insert(Symbol_46.getString());
  FIX::SymbolSfx SymbolSfx_46("STRING_CD");
  msg.set(SymbolSfx_46);
  Instrument_46.insert(SymbolSfx_46.getString());
  FIX::TimeUnit TimeUnit_46("STRING_Yr");
  msg.set(TimeUnit_46);
  Instrument_46.insert(TimeUnit_46.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_46(1);
  msg.set(UnderlyingPriceDeterminationMethod_46);
  Instrument_46.insert(UnderlyingPriceDeterminationMethod_46.getString());
  FIX::UnitOfMeasure UnitOfMeasure_46("STRING_MMBtu");
  msg.set(UnitOfMeasure_46);
  Instrument_46.insert(UnitOfMeasure_46.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_46;
  UnitOfMeasureQty_46.setString("20394789");
  msg.set(UnitOfMeasureQty_46);
  Instrument_46.insert(UnitOfMeasureQty_46.getString());
  FIX::ValuationMethod ValuationMethod_46("STRING_EQTY");
  msg.set(ValuationMethod_46);
  Instrument_46.insert(ValuationMethod_46.getString());
  all_values.push_back(Instrument_46);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::NewOrderMultileg::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_91;
    FIX::ComplexEventCondition ComplexEventCondition_91(2);
    noComplexEvents_0_0.set(ComplexEventCondition_91);
    ComplexEvents_NoComplexEvents_91.insert(ComplexEventCondition_91.getString());
    FIX::ComplexEventPrice ComplexEventPrice_91;
    ComplexEventPrice_91.setString("10984424");
    noComplexEvents_0_0.set(ComplexEventPrice_91);
    ComplexEvents_NoComplexEvents_91.insert(ComplexEventPrice_91.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_91(1);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_91);
    ComplexEvents_NoComplexEvents_91.insert(ComplexEventPriceBoundaryMethod_91.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_91;
    ComplexEventPriceBoundaryPrecision_91.setString("40.990000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_91);
    ComplexEvents_NoComplexEvents_91.insert(ComplexEventPriceBoundaryPrecision_91.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_91(3);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_91);
    ComplexEvents_NoComplexEvents_91.insert(ComplexEventPriceTimeType_91.getString());
    FIX::ComplexEventType ComplexEventType_91(2);
    noComplexEvents_0_0.set(ComplexEventType_91);
    ComplexEvents_NoComplexEvents_91.insert(ComplexEventType_91.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_91;
    ComplexOptPayoutAmount_91.setString("7842961");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_91);
    ComplexEvents_NoComplexEvents_91.insert(ComplexOptPayoutAmount_91.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_91);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::NewOrderMultileg::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_187;
      FIX::ComplexEventEndDate ComplexEventEndDate_187(FIX::UTCTIMESTAMP(7, 9, 24, 16, 2, 2005));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_187);
      ComplexEventDates_NoComplexEventDates_187.insert(ComplexEventEndDate_187.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_187(FIX::UTCTIMESTAMP(14, 24, 15, 16, 10, 2008));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_187);
      ComplexEventDates_NoComplexEventDates_187.insert(ComplexEventStartDate_187.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_187);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::NewOrderMultileg::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_384;
        FIX::ComplexEventEndTime ComplexEventEndTime_384(FIX::UTCTIMEONLY(2, 15, 1));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_384);
        ComplexEventTimes_NoComplexEventTimes_384.insert(ComplexEventEndTime_384.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_384(FIX::UTCTIMEONLY(7, 36, 10));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_384);
        ComplexEventTimes_NoComplexEventTimes_384.insert(ComplexEventStartTime_384.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_384);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::NewOrderMultileg::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_385;
        FIX::ComplexEventEndTime ComplexEventEndTime_385(FIX::UTCTIMEONLY(18, 32, 40));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_385);
        ComplexEventTimes_NoComplexEventTimes_385.insert(ComplexEventEndTime_385.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_385(FIX::UTCTIMEONLY(6, 49, 52));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_385);
        ComplexEventTimes_NoComplexEventTimes_385.insert(ComplexEventStartTime_385.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_385);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::NewOrderMultileg::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_386;
        FIX::ComplexEventEndTime ComplexEventEndTime_386(FIX::UTCTIMEONLY(21, 1, 4));
        noComplexEventTimes_0_0_2_2.set(ComplexEventEndTime_386);
        ComplexEventTimes_NoComplexEventTimes_386.insert(ComplexEventEndTime_386.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_386(FIX::UTCTIMEONLY(15, 32, 52));
        noComplexEventTimes_0_0_2_2.set(ComplexEventStartTime_386);
        ComplexEventTimes_NoComplexEventTimes_386.insert(ComplexEventStartTime_386.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_386);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::NewOrderMultileg::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_92;
    FIX::ComplexEventCondition ComplexEventCondition_92(2);
    noComplexEvents_0_1.set(ComplexEventCondition_92);
    ComplexEvents_NoComplexEvents_92.insert(ComplexEventCondition_92.getString());
    FIX::ComplexEventPrice ComplexEventPrice_92;
    ComplexEventPrice_92.setString("5288788");
    noComplexEvents_0_1.set(ComplexEventPrice_92);
    ComplexEvents_NoComplexEvents_92.insert(ComplexEventPrice_92.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_92(5);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_92);
    ComplexEvents_NoComplexEvents_92.insert(ComplexEventPriceBoundaryMethod_92.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_92;
    ComplexEventPriceBoundaryPrecision_92.setString("79.730000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_92);
    ComplexEvents_NoComplexEvents_92.insert(ComplexEventPriceBoundaryPrecision_92.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_92(1);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_92);
    ComplexEvents_NoComplexEvents_92.insert(ComplexEventPriceTimeType_92.getString());
    FIX::ComplexEventType ComplexEventType_92(8);
    noComplexEvents_0_1.set(ComplexEventType_92);
    ComplexEvents_NoComplexEvents_92.insert(ComplexEventType_92.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_92;
    ComplexOptPayoutAmount_92.setString("7984590");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_92);
    ComplexEvents_NoComplexEvents_92.insert(ComplexOptPayoutAmount_92.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_92);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::NewOrderMultileg::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_188;
      FIX::ComplexEventEndDate ComplexEventEndDate_188(FIX::UTCTIMESTAMP(22, 51, 46, 26, 8, 2012));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_188);
      ComplexEventDates_NoComplexEventDates_188.insert(ComplexEventEndDate_188.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_188(FIX::UTCTIMESTAMP(17, 20, 54, 16, 7, 2008));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_188);
      ComplexEventDates_NoComplexEventDates_188.insert(ComplexEventStartDate_188.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_188);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::NewOrderMultileg::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_387;
        FIX::ComplexEventEndTime ComplexEventEndTime_387(FIX::UTCTIMEONLY(21, 25, 15));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_387);
        ComplexEventTimes_NoComplexEventTimes_387.insert(ComplexEventEndTime_387.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_387(FIX::UTCTIMEONLY(8, 39, 58));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_387);
        ComplexEventTimes_NoComplexEventTimes_387.insert(ComplexEventStartTime_387.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_387);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_189;
      FIX::ComplexEventEndDate ComplexEventEndDate_189(FIX::UTCTIMESTAMP(15, 57, 59, 25, 9, 2006));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_189);
      ComplexEventDates_NoComplexEventDates_189.insert(ComplexEventEndDate_189.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_189(FIX::UTCTIMESTAMP(13, 4, 50, 15, 3, 2013));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_189);
      ComplexEventDates_NoComplexEventDates_189.insert(ComplexEventStartDate_189.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_189);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::NewOrderMultileg::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_388;
        FIX::ComplexEventEndTime ComplexEventEndTime_388(FIX::UTCTIMEONLY(18, 35, 51));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_388);
        ComplexEventTimes_NoComplexEventTimes_388.insert(ComplexEventEndTime_388.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_388(FIX::UTCTIMEONLY(9, 27, 18));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_388);
        ComplexEventTimes_NoComplexEventTimes_388.insert(ComplexEventStartTime_388.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_388);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    {
      FIX50SP2::NewOrderMultileg::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_190;
      FIX::ComplexEventEndDate ComplexEventEndDate_190(FIX::UTCTIMESTAMP(12, 43, 14, 18, 5, 2017));
      noComplexEventDates_1_1_2.set(ComplexEventEndDate_190);
      ComplexEventDates_NoComplexEventDates_190.insert(ComplexEventEndDate_190.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_190(FIX::UTCTIMESTAMP(21, 21, 1, 24, 3, 2007));
      noComplexEventDates_1_1_2.set(ComplexEventStartDate_190);
      ComplexEventDates_NoComplexEventDates_190.insert(ComplexEventStartDate_190.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_190);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::NewOrderMultileg::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_389;
        FIX::ComplexEventEndTime ComplexEventEndTime_389(FIX::UTCTIMEONLY(14, 51, 27));
        noComplexEventTimes_1_2_2_0.set(ComplexEventEndTime_389);
        ComplexEventTimes_NoComplexEventTimes_389.insert(ComplexEventEndTime_389.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_389(FIX::UTCTIMEONLY(9, 28, 20));
        noComplexEventTimes_1_2_2_0.set(ComplexEventStartTime_389);
        ComplexEventTimes_NoComplexEventTimes_389.insert(ComplexEventStartTime_389.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_389);

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_0);
      }
      {
        FIX50SP2::NewOrderMultileg::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_390;
        FIX::ComplexEventEndTime ComplexEventEndTime_390(FIX::UTCTIMEONLY(22, 55, 22));
        noComplexEventTimes_1_2_2_1.set(ComplexEventEndTime_390);
        ComplexEventTimes_NoComplexEventTimes_390.insert(ComplexEventEndTime_390.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_390(FIX::UTCTIMEONLY(4, 41, 10));
        noComplexEventTimes_1_2_2_1.set(ComplexEventStartTime_390);
        ComplexEventTimes_NoComplexEventTimes_390.insert(ComplexEventStartTime_390.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_390);

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_2);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::NewOrderMultileg::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_86;
    FIX::EventDate EventDate_86("LOCALMKTDATE_1374588882");
    noEvents_0_0.set(EventDate_86);
    EvntGrp_NoEvents_86.insert(EventDate_86.getString());
    FIX::EventPx EventPx_86;
    EventPx_86.setString("14461051");
    noEvents_0_0.set(EventPx_86);
    EvntGrp_NoEvents_86.insert(EventPx_86.getString());
    FIX::EventText EventText_86("STRING_309031386");
    noEvents_0_0.set(EventText_86);
    EvntGrp_NoEvents_86.insert(EventText_86.getString());
    FIX::EventTime EventTime_86(FIX::UTCTIMESTAMP(17, 0, 53, 27, 10, 2010));
    noEvents_0_0.set(EventTime_86);
    EvntGrp_NoEvents_86.insert(EventTime_86.getString());
    FIX::EventType EventType_86(16);
    noEvents_0_0.set(EventType_86);
    EvntGrp_NoEvents_86.insert(EventType_86.getString());
    all_values.push_back(EvntGrp_NoEvents_86);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::NewOrderMultileg::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_87;
    FIX::EventDate EventDate_87("LOCALMKTDATE_1298894031");
    noEvents_0_1.set(EventDate_87);
    EvntGrp_NoEvents_87.insert(EventDate_87.getString());
    FIX::EventPx EventPx_87;
    EventPx_87.setString("7575984");
    noEvents_0_1.set(EventPx_87);
    EvntGrp_NoEvents_87.insert(EventPx_87.getString());
    FIX::EventText EventText_87("STRING_983322922");
    noEvents_0_1.set(EventText_87);
    EvntGrp_NoEvents_87.insert(EventText_87.getString());
    FIX::EventTime EventTime_87(FIX::UTCTIMESTAMP(2, 5, 47, 20, 3, 2001));
    noEvents_0_1.set(EventTime_87);
    EvntGrp_NoEvents_87.insert(EventTime_87.getString());
    FIX::EventType EventType_87(1);
    noEvents_0_1.set(EventType_87);
    EvntGrp_NoEvents_87.insert(EventType_87.getString());
    all_values.push_back(EvntGrp_NoEvents_87);

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::NewOrderMultileg::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_85;
    FIX::InstrumentPartyID InstrumentPartyID_85("STRING_2134973045");
    noInstrumentParties_0_0.set(InstrumentPartyID_85);
    InstrumentParties_NoInstrumentParties_85.insert(InstrumentPartyID_85.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_85('3');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_85);
    InstrumentParties_NoInstrumentParties_85.insert(InstrumentPartyIDSource_85.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_85(1171292243);
    noInstrumentParties_0_0.set(InstrumentPartyRole_85);
    InstrumentParties_NoInstrumentParties_85.insert(InstrumentPartyRole_85.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_85);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::NewOrderMultileg::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_189;
      FIX::InstrumentPartySubID InstrumentPartySubID_189("STRING_1666636400");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_189);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_189.insert(InstrumentPartySubID_189.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_189(1214418184);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_189);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_189.insert(InstrumentPartySubIDType_189.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_189);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_190;
      FIX::InstrumentPartySubID InstrumentPartySubID_190("STRING_677969331");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_190);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_190.insert(InstrumentPartySubID_190.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_190(1832664012);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_190);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_190.insert(InstrumentPartySubIDType_190.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_190);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::NewOrderMultileg::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_99;
    FIX::SecurityAltID SecurityAltID_99("STRING_2124074436");
    noSecurityAltID_0_0.set(SecurityAltID_99);
    SecAltIDGrp_NoSecurityAltID_99.insert(SecurityAltID_99.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_99("STRING_2141695399");
    noSecurityAltID_0_0.set(SecurityAltIDSource_99);
    SecAltIDGrp_NoSecurityAltID_99.insert(SecurityAltIDSource_99.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_99);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::NewOrderMultileg::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_100;
    FIX::SecurityAltID SecurityAltID_100("STRING_1760103567");
    noSecurityAltID_0_1.set(SecurityAltID_100);
    SecAltIDGrp_NoSecurityAltID_100.insert(SecurityAltID_100.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_100("STRING_1421670670");
    noSecurityAltID_0_1.set(SecurityAltIDSource_100);
    SecAltIDGrp_NoSecurityAltID_100.insert(SecurityAltIDSource_100.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_100);

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::NewOrderMultileg::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_101;
    FIX::SecurityAltID SecurityAltID_101("STRING_724131071");
    noSecurityAltID_0_2.set(SecurityAltID_101);
    SecAltIDGrp_NoSecurityAltID_101.insert(SecurityAltID_101.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_101("STRING_949713972");
    noSecurityAltID_0_2.set(SecurityAltIDSource_101);
    SecAltIDGrp_NoSecurityAltID_101.insert(SecurityAltIDSource_101.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_101);

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_92;
  FIX::SecurityXML SecurityXML_93("XMLDATA_594211125");
  msg.set(SecurityXML_93);
  FIX::SecurityXMLLen SecurityXMLLen_46(534217644);
  msg.set(SecurityXMLLen_46);
  FIX::SecurityXMLSchema SecurityXMLSchema_46("STRING_1597898878");
  msg.set(SecurityXMLSchema_46);
  SecurityXML_92.insert(SecurityXMLSchema_46.getString());
  all_values.push_back(SecurityXML_92);

  // LegOrdGrp
  // Group LegOrdGrp.NoLegs
  {
    FIX50SP2::NewOrderMultileg::NoLegs noLegs_0_0;
    // LegOrdGrp.NoLegs
    multiset<string> LegOrdGrp_NoLegs_2;
    FIX::LegAllocID LegAllocID_5("STRING_1833111675");
    noLegs_0_0.set(LegAllocID_5);
    LegOrdGrp_NoLegs_2.insert(LegAllocID_5.getString());
    FIX::LegCoveredOrUncovered LegCoveredOrUncovered_5(208013666);
    noLegs_0_0.set(LegCoveredOrUncovered_5);
    LegOrdGrp_NoLegs_2.insert(LegCoveredOrUncovered_5.getString());
    FIX::LegCurrencyRatio LegCurrencyRatio_5;
    LegCurrencyRatio_5.setString("3300024");
    noLegs_0_0.set(LegCurrencyRatio_5);
    LegOrdGrp_NoLegs_2.insert(LegCurrencyRatio_5.getString());
    FIX::LegDividendYield LegDividendYield_5;
    LegDividendYield_5.setString("39.550000");
    noLegs_0_0.set(LegDividendYield_5);
    LegOrdGrp_NoLegs_2.insert(LegDividendYield_5.getString());
    FIX::LegExecInst LegExecInst_5("MULTIPLECHARVALUE_1163764781");
    noLegs_0_0.set(LegExecInst_5);
    LegOrdGrp_NoLegs_2.insert(LegExecInst_5.getString());
    FIX::LegOrderQty LegOrderQty_5;
    LegOrderQty_5.setString("4115030");
    noLegs_0_0.set(LegOrderQty_5);
    LegOrdGrp_NoLegs_2.insert(LegOrderQty_5.getString());
    FIX::LegPositionEffect LegPositionEffect_5('2');
    noLegs_0_0.set(LegPositionEffect_5);
    LegOrdGrp_NoLegs_2.insert(LegPositionEffect_5.getString());
    FIX::LegQty LegQty_5;
    LegQty_5.setString("19498863");
    noLegs_0_0.set(LegQty_5);
    LegOrdGrp_NoLegs_2.insert(LegQty_5.getString());
    FIX::LegRefID LegRefID_5("STRING_1164702978");
    noLegs_0_0.set(LegRefID_5);
    LegOrdGrp_NoLegs_2.insert(LegRefID_5.getString());
    FIX::LegSettlCurrency LegSettlCurrency_5("CHF");
    noLegs_0_0.set(LegSettlCurrency_5);
    LegOrdGrp_NoLegs_2.insert(LegSettlCurrency_5.getString());
    FIX::LegSettlDate LegSettlDate_5("LOCALMKTDATE_585383599");
    noLegs_0_0.set(LegSettlDate_5);
    LegOrdGrp_NoLegs_2.insert(LegSettlDate_5.getString());
    FIX::LegSettlType LegSettlType_5('4');
    noLegs_0_0.set(LegSettlType_5);
    LegOrdGrp_NoLegs_2.insert(LegSettlType_5.getString());
    FIX::LegSwapType LegSwapType_5(2);
    noLegs_0_0.set(LegSwapType_5);
    LegOrdGrp_NoLegs_2.insert(LegSwapType_5.getString());
    FIX::LegVolatility LegVolatility_5;
    LegVolatility_5.setString("17566758");
    noLegs_0_0.set(LegVolatility_5);
    LegOrdGrp_NoLegs_2.insert(LegVolatility_5.getString());
    all_values.push_back(LegOrdGrp_NoLegs_2);

    // InstrumentLeg
    multiset<string> InstrumentLeg_76;
    FIX::EncodedLegIssuer EncodedLegIssuer_76("DATA_1623507307");
    noLegs_0_0.set(EncodedLegIssuer_76);
    InstrumentLeg_76.insert(EncodedLegIssuer_76.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_76(170234174);
    noLegs_0_0.set(EncodedLegIssuerLen_76);
    InstrumentLeg_76.insert(EncodedLegIssuerLen_76.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_76("DATA_823610378");
    noLegs_0_0.set(EncodedLegSecurityDesc_76);
    InstrumentLeg_76.insert(EncodedLegSecurityDesc_76.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_76(153992990);
    noLegs_0_0.set(EncodedLegSecurityDescLen_76);
    InstrumentLeg_76.insert(EncodedLegSecurityDescLen_76.getString());
    FIX::LegCFICode LegCFICode_76("STRING_2002898186");
    noLegs_0_0.set(LegCFICode_76);
    InstrumentLeg_76.insert(LegCFICode_76.getString());
    FIX::LegContractMultiplier LegContractMultiplier_76;
    LegContractMultiplier_76.setString("12651337");
    noLegs_0_0.set(LegContractMultiplier_76);
    InstrumentLeg_76.insert(LegContractMultiplier_76.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_76(130583778);
    noLegs_0_0.set(LegContractMultiplierUnit_76);
    InstrumentLeg_76.insert(LegContractMultiplierUnit_76.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_76("MONTHYEAR_1997109937");
    noLegs_0_0.set(LegContractSettlMonth_76);
    InstrumentLeg_76.insert(LegContractSettlMonth_76.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_76("COUNTRY_877753716");
    noLegs_0_0.set(LegCountryOfIssue_76);
    InstrumentLeg_76.insert(LegCountryOfIssue_76.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_76("LOCALMKTDATE_1552254448");
    noLegs_0_0.set(LegCouponPaymentDate_76);
    InstrumentLeg_76.insert(LegCouponPaymentDate_76.getString());
    FIX::LegCouponRate LegCouponRate_76;
    LegCouponRate_76.setString("73.600000");
    noLegs_0_0.set(LegCouponRate_76);
    InstrumentLeg_76.insert(LegCouponRate_76.getString());
    FIX::LegCreditRating LegCreditRating_76("STRING_1827467688");
    noLegs_0_0.set(LegCreditRating_76);
    InstrumentLeg_76.insert(LegCreditRating_76.getString());
    FIX::LegCurrency LegCurrency_76("JPY");
    noLegs_0_0.set(LegCurrency_76);
    InstrumentLeg_76.insert(LegCurrency_76.getString());
    FIX::LegDatedDate LegDatedDate_76("LOCALMKTDATE_1277882918");
    noLegs_0_0.set(LegDatedDate_76);
    InstrumentLeg_76.insert(LegDatedDate_76.getString());
    FIX::LegExerciseStyle LegExerciseStyle_76(1493145146);
    noLegs_0_0.set(LegExerciseStyle_76);
    InstrumentLeg_76.insert(LegExerciseStyle_76.getString());
    FIX::LegFactor LegFactor_76;
    LegFactor_76.setString("7936030");
    noLegs_0_0.set(LegFactor_76);
    InstrumentLeg_76.insert(LegFactor_76.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_76(1485896585);
    noLegs_0_0.set(LegFlowScheduleType_76);
    InstrumentLeg_76.insert(LegFlowScheduleType_76.getString());
    FIX::LegInstrRegistry LegInstrRegistry_76("STRING_1823147640");
    noLegs_0_0.set(LegInstrRegistry_76);
    InstrumentLeg_76.insert(LegInstrRegistry_76.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_76("LOCALMKTDATE_121203338");
    noLegs_0_0.set(LegInterestAccrualDate_76);
    InstrumentLeg_76.insert(LegInterestAccrualDate_76.getString());
    FIX::LegIssueDate LegIssueDate_76("LOCALMKTDATE_502177718");
    noLegs_0_0.set(LegIssueDate_76);
    InstrumentLeg_76.insert(LegIssueDate_76.getString());
    FIX::LegIssuer LegIssuer_76("STRING_87167012");
    noLegs_0_0.set(LegIssuer_76);
    InstrumentLeg_76.insert(LegIssuer_76.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_76("STRING_346624192");
    noLegs_0_0.set(LegLocaleOfIssue_76);
    InstrumentLeg_76.insert(LegLocaleOfIssue_76.getString());
    FIX::LegMaturityDate LegMaturityDate_76("LOCALMKTDATE_304580431");
    noLegs_0_0.set(LegMaturityDate_76);
    InstrumentLeg_76.insert(LegMaturityDate_76.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_76("MONTHYEAR_1251869990");
    noLegs_0_0.set(LegMaturityMonthYear_76);
    InstrumentLeg_76.insert(LegMaturityMonthYear_76.getString());
    FIX::LegMaturityTime LegMaturityTime_76("TZTIMEONLY_762453853");
    noLegs_0_0.set(LegMaturityTime_76);
    InstrumentLeg_76.insert(LegMaturityTime_76.getString());
    FIX::LegOptAttribute LegOptAttribute_76('9');
    noLegs_0_0.set(LegOptAttribute_76);
    InstrumentLeg_76.insert(LegOptAttribute_76.getString());
    FIX::LegOptionRatio LegOptionRatio_76;
    LegOptionRatio_76.setString("18372535");
    noLegs_0_0.set(LegOptionRatio_76);
    InstrumentLeg_76.insert(LegOptionRatio_76.getString());
    FIX::LegPool LegPool_76("STRING_1165772911");
    noLegs_0_0.set(LegPool_76);
    InstrumentLeg_76.insert(LegPool_76.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_76("STRING_1571793006");
    noLegs_0_0.set(LegPriceUnitOfMeasure_76);
    InstrumentLeg_76.insert(LegPriceUnitOfMeasure_76.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_76;
    LegPriceUnitOfMeasureQty_76.setString("14464457");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_76);
    InstrumentLeg_76.insert(LegPriceUnitOfMeasureQty_76.getString());
    FIX::LegProduct LegProduct_76(641796570);
    noLegs_0_0.set(LegProduct_76);
    InstrumentLeg_76.insert(LegProduct_76.getString());
    FIX::LegPutOrCall LegPutOrCall_76(1742027180);
    noLegs_0_0.set(LegPutOrCall_76);
    InstrumentLeg_76.insert(LegPutOrCall_76.getString());
    FIX::LegRatioQty LegRatioQty_76;
    LegRatioQty_76.setString("1225725");
    noLegs_0_0.set(LegRatioQty_76);
    InstrumentLeg_76.insert(LegRatioQty_76.getString());
    FIX::LegRedemptionDate LegRedemptionDate_76("LOCALMKTDATE_795789560");
    noLegs_0_0.set(LegRedemptionDate_76);
    InstrumentLeg_76.insert(LegRedemptionDate_76.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_76("STRING_1597441718");
    noLegs_0_0.set(LegRepoCollateralSecurityType_76);
    InstrumentLeg_76.insert(LegRepoCollateralSecurityType_76.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_76;
    LegRepurchaseRate_76.setString("63.100000");
    noLegs_0_0.set(LegRepurchaseRate_76);
    InstrumentLeg_76.insert(LegRepurchaseRate_76.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_76(926373339);
    noLegs_0_0.set(LegRepurchaseTerm_76);
    InstrumentLeg_76.insert(LegRepurchaseTerm_76.getString());
    FIX::LegSecurityDesc LegSecurityDesc_76("STRING_1447068008");
    noLegs_0_0.set(LegSecurityDesc_76);
    InstrumentLeg_76.insert(LegSecurityDesc_76.getString());
    FIX::LegSecurityExchange LegSecurityExchange_76("EXCHANGE_117976378");
    noLegs_0_0.set(LegSecurityExchange_76);
    InstrumentLeg_76.insert(LegSecurityExchange_76.getString());
    FIX::LegSecurityID LegSecurityID_76("STRING_331144139");
    noLegs_0_0.set(LegSecurityID_76);
    InstrumentLeg_76.insert(LegSecurityID_76.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_76("STRING_2020825368");
    noLegs_0_0.set(LegSecurityIDSource_76);
    InstrumentLeg_76.insert(LegSecurityIDSource_76.getString());
    FIX::LegSecuritySubType LegSecuritySubType_76("STRING_1945444066");
    noLegs_0_0.set(LegSecuritySubType_76);
    InstrumentLeg_76.insert(LegSecuritySubType_76.getString());
    FIX::LegSecurityType LegSecurityType_76("STRING_330126065");
    noLegs_0_0.set(LegSecurityType_76);
    InstrumentLeg_76.insert(LegSecurityType_76.getString());
    FIX::LegSide LegSide_76('9');
    noLegs_0_0.set(LegSide_76);
    InstrumentLeg_76.insert(LegSide_76.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_76("STRING_1075843337");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_76);
    InstrumentLeg_76.insert(LegStateOrProvinceOfIssue_76.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_76("GBP");
    noLegs_0_0.set(LegStrikeCurrency_76);
    InstrumentLeg_76.insert(LegStrikeCurrency_76.getString());
    FIX::LegStrikePrice LegStrikePrice_76;
    LegStrikePrice_76.setString("4142562");
    noLegs_0_0.set(LegStrikePrice_76);
    InstrumentLeg_76.insert(LegStrikePrice_76.getString());
    FIX::LegSymbol LegSymbol_76("STRING_1498935203");
    noLegs_0_0.set(LegSymbol_76);
    InstrumentLeg_76.insert(LegSymbol_76.getString());
    FIX::LegSymbolSfx LegSymbolSfx_76("STRING_1896123095");
    noLegs_0_0.set(LegSymbolSfx_76);
    InstrumentLeg_76.insert(LegSymbolSfx_76.getString());
    FIX::LegTimeUnit LegTimeUnit_76("STRING_916433992");
    noLegs_0_0.set(LegTimeUnit_76);
    InstrumentLeg_76.insert(LegTimeUnit_76.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_76("STRING_1586102215");
    noLegs_0_0.set(LegUnitOfMeasure_76);
    InstrumentLeg_76.insert(LegUnitOfMeasure_76.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_76;
    LegUnitOfMeasureQty_76.setString("952636");
    noLegs_0_0.set(LegUnitOfMeasureQty_76);
    InstrumentLeg_76.insert(LegUnitOfMeasureQty_76.getString());
    all_values.push_back(InstrumentLeg_76);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_155;
      FIX::LegSecurityAltID LegSecurityAltID_155("STRING_690488557");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_155);
      LegSecAltIDGrp_NoLegSecurityAltID_155.insert(LegSecurityAltID_155.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_155("STRING_857717493");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_155);
      LegSecAltIDGrp_NoLegSecurityAltID_155.insert(LegSecurityAltIDSource_155.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_155);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_156;
      FIX::LegSecurityAltID LegSecurityAltID_156("STRING_2141726007");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_156);
      LegSecAltIDGrp_NoLegSecurityAltID_156.insert(LegSecurityAltID_156.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_156("STRING_380258498");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_156);
      LegSecAltIDGrp_NoLegSecurityAltID_156.insert(LegSecurityAltIDSource_156.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_156);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_157;
      FIX::LegSecurityAltID LegSecurityAltID_157("STRING_2023490404");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltID_157);
      LegSecAltIDGrp_NoLegSecurityAltID_157.insert(LegSecurityAltID_157.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_157("STRING_1566035365");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltIDSource_157);
      LegSecAltIDGrp_NoLegSecurityAltID_157.insert(LegSecurityAltIDSource_157.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_157);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_2);
    }
    // LegPreAllocGrp
    // Group LegPreAllocGrp.NoLegAllocs
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs noLegAllocs_0_1_0;
      // LegPreAllocGrp.NoLegAllocs
      multiset<string> LegPreAllocGrp_NoLegAllocs_7;
      FIX::LegAllocAccount LegAllocAccount_7("STRING_517803327");
      noLegAllocs_0_1_0.set(LegAllocAccount_7);
      LegPreAllocGrp_NoLegAllocs_7.insert(LegAllocAccount_7.getString());
      FIX::LegAllocAcctIDSource LegAllocAcctIDSource_7("STRING_1160578897");
      noLegAllocs_0_1_0.set(LegAllocAcctIDSource_7);
      LegPreAllocGrp_NoLegAllocs_7.insert(LegAllocAcctIDSource_7.getString());
      FIX::LegAllocQty LegAllocQty_7;
      LegAllocQty_7.setString("19492767");
      noLegAllocs_0_1_0.set(LegAllocQty_7);
      LegPreAllocGrp_NoLegAllocs_7.insert(LegAllocQty_7.getString());
      FIX::LegAllocSettlCurrency LegAllocSettlCurrency_7("GBP");
      noLegAllocs_0_1_0.set(LegAllocSettlCurrency_7);
      LegPreAllocGrp_NoLegAllocs_7.insert(LegAllocSettlCurrency_7.getString());
      FIX::LegIndividualAllocID LegIndividualAllocID_7("STRING_1189499457");
      noLegAllocs_0_1_0.set(LegIndividualAllocID_7);
      LegPreAllocGrp_NoLegAllocs_7.insert(LegIndividualAllocID_7.getString());
      all_values.push_back(LegPreAllocGrp_NoLegAllocs_7);

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_0_0_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_25;
        FIX::Nested2PartyID Nested2PartyID_25("STRING_2057604976");
        noNested2PartyIDs_0_0_2_0.set(Nested2PartyID_25);
        NestedParties2_NoNested2PartyIDs_25.insert(Nested2PartyID_25.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_25('1');
        noNested2PartyIDs_0_0_2_0.set(Nested2PartyIDSource_25);
        NestedParties2_NoNested2PartyIDs_25.insert(Nested2PartyIDSource_25.getString());
        FIX::Nested2PartyRole Nested2PartyRole_25(423626718);
        noNested2PartyIDs_0_0_2_0.set(Nested2PartyRole_25);
        NestedParties2_NoNested2PartyIDs_25.insert(Nested2PartyRole_25.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_25);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_54;
          FIX::Nested2PartySubID Nested2PartySubID_54("STRING_1105436254");
          noNested2PartySubIDs_0_0_0_3_0.set(Nested2PartySubID_54);
          NstdPtys2SubGrp_NoNested2PartySubIDs_54.insert(Nested2PartySubID_54.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_54(753752783);
          noNested2PartySubIDs_0_0_0_3_0.set(Nested2PartySubIDType_54);
          NstdPtys2SubGrp_NoNested2PartySubIDs_54.insert(Nested2PartySubIDType_54.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_54);

          noNested2PartyIDs_0_0_2_0.addGroup(noNested2PartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_0_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_55;
          FIX::Nested2PartySubID Nested2PartySubID_55("STRING_764779773");
          noNested2PartySubIDs_0_0_0_3_1.set(Nested2PartySubID_55);
          NstdPtys2SubGrp_NoNested2PartySubIDs_55.insert(Nested2PartySubID_55.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_55(33795943);
          noNested2PartySubIDs_0_0_0_3_1.set(Nested2PartySubIDType_55);
          NstdPtys2SubGrp_NoNested2PartySubIDs_55.insert(Nested2PartySubIDType_55.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_55);

          noNested2PartyIDs_0_0_2_0.addGroup(noNested2PartySubIDs_0_0_0_3_1);
        }
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_0_3_2;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_56;
          FIX::Nested2PartySubID Nested2PartySubID_56("STRING_429540346");
          noNested2PartySubIDs_0_0_0_3_2.set(Nested2PartySubID_56);
          NstdPtys2SubGrp_NoNested2PartySubIDs_56.insert(Nested2PartySubID_56.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_56(392215882);
          noNested2PartySubIDs_0_0_0_3_2.set(Nested2PartySubIDType_56);
          NstdPtys2SubGrp_NoNested2PartySubIDs_56.insert(Nested2PartySubIDType_56.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_56);

          noNested2PartyIDs_0_0_2_0.addGroup(noNested2PartySubIDs_0_0_0_3_2);
        }
        noLegAllocs_0_1_0.addGroup(noNested2PartyIDs_0_0_2_0);
      }
      noLegs_0_0.addGroup(noLegAllocs_0_1_0);
    }
    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoLegStipulations noLegStipulations_0_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_12;
      FIX::LegStipulationType LegStipulationType_12("STRING_1928475549");
      noLegStipulations_0_1_0.set(LegStipulationType_12);
      LegStipulations_NoLegStipulations_12.insert(LegStipulationType_12.getString());
      FIX::LegStipulationValue LegStipulationValue_12("STRING_140855329");
      noLegStipulations_0_1_0.set(LegStipulationValue_12);
      LegStipulations_NoLegStipulations_12.insert(LegStipulationValue_12.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_12);

      noLegs_0_0.addGroup(noLegStipulations_0_1_0);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_70;
      FIX::NestedPartyID NestedPartyID_70("STRING_1367094117");
      noNestedPartyIDs_0_1_0.set(NestedPartyID_70);
      NestedParties_NoNestedPartyIDs_70.insert(NestedPartyID_70.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_70('2');
      noNestedPartyIDs_0_1_0.set(NestedPartyIDSource_70);
      NestedParties_NoNestedPartyIDs_70.insert(NestedPartyIDSource_70.getString());
      FIX::NestedPartyRole NestedPartyRole_70(438016984);
      noNestedPartyIDs_0_1_0.set(NestedPartyRole_70);
      NestedParties_NoNestedPartyIDs_70.insert(NestedPartyRole_70.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_70);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_143;
        FIX::NestedPartySubID NestedPartySubID_143("STRING_1093836461");
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubID_143);
        NstdPtysSubGrp_NoNestedPartySubIDs_143.insert(NestedPartySubID_143.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_143(432259344);
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubIDType_143);
        NstdPtysSubGrp_NoNestedPartySubIDs_143.insert(NestedPartySubIDType_143.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_143);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_144;
        FIX::NestedPartySubID NestedPartySubID_144("STRING_290357525");
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubID_144);
        NstdPtysSubGrp_NoNestedPartySubIDs_144.insert(NestedPartySubID_144.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_144(969843218);
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubIDType_144);
        NstdPtysSubGrp_NoNestedPartySubIDs_144.insert(NestedPartySubIDType_144.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_144);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_1);
      }
      noLegs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_71;
      FIX::NestedPartyID NestedPartyID_71("STRING_1998294709");
      noNestedPartyIDs_0_1_1.set(NestedPartyID_71);
      NestedParties_NoNestedPartyIDs_71.insert(NestedPartyID_71.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_71('2');
      noNestedPartyIDs_0_1_1.set(NestedPartyIDSource_71);
      NestedParties_NoNestedPartyIDs_71.insert(NestedPartyIDSource_71.getString());
      FIX::NestedPartyRole NestedPartyRole_71(1487646545);
      noNestedPartyIDs_0_1_1.set(NestedPartyRole_71);
      NestedParties_NoNestedPartyIDs_71.insert(NestedPartyRole_71.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_71);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_145;
        FIX::NestedPartySubID NestedPartySubID_145("STRING_1918854953");
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubID_145);
        NstdPtysSubGrp_NoNestedPartySubIDs_145.insert(NestedPartySubID_145.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_145(653755784);
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubIDType_145);
        NstdPtysSubGrp_NoNestedPartySubIDs_145.insert(NestedPartySubIDType_145.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_145);

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_146;
        FIX::NestedPartySubID NestedPartySubID_146("STRING_1621926927");
        noNestedPartySubIDs_0_1_2_1.set(NestedPartySubID_146);
        NstdPtysSubGrp_NoNestedPartySubIDs_146.insert(NestedPartySubID_146.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_146(960870763);
        noNestedPartySubIDs_0_1_2_1.set(NestedPartySubIDType_146);
        NstdPtysSubGrp_NoNestedPartySubIDs_146.insert(NestedPartySubIDType_146.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_146);

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_1);
      }
      noLegs_0_0.addGroup(noNestedPartyIDs_0_1_1);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::NewOrderMultileg::NoLegs noLegs_0_1;
    // LegOrdGrp.NoLegs
    multiset<string> LegOrdGrp_NoLegs_3;
    FIX::LegAllocID LegAllocID_6("STRING_746238363");
    noLegs_0_1.set(LegAllocID_6);
    LegOrdGrp_NoLegs_3.insert(LegAllocID_6.getString());
    FIX::LegCoveredOrUncovered LegCoveredOrUncovered_6(1532048255);
    noLegs_0_1.set(LegCoveredOrUncovered_6);
    LegOrdGrp_NoLegs_3.insert(LegCoveredOrUncovered_6.getString());
    FIX::LegCurrencyRatio LegCurrencyRatio_6;
    LegCurrencyRatio_6.setString("1208629");
    noLegs_0_1.set(LegCurrencyRatio_6);
    LegOrdGrp_NoLegs_3.insert(LegCurrencyRatio_6.getString());
    FIX::LegDividendYield LegDividendYield_6;
    LegDividendYield_6.setString("50.810000");
    noLegs_0_1.set(LegDividendYield_6);
    LegOrdGrp_NoLegs_3.insert(LegDividendYield_6.getString());
    FIX::LegExecInst LegExecInst_6("MULTIPLECHARVALUE_1315511303");
    noLegs_0_1.set(LegExecInst_6);
    LegOrdGrp_NoLegs_3.insert(LegExecInst_6.getString());
    FIX::LegOrderQty LegOrderQty_6;
    LegOrderQty_6.setString("12262992");
    noLegs_0_1.set(LegOrderQty_6);
    LegOrdGrp_NoLegs_3.insert(LegOrderQty_6.getString());
    FIX::LegPositionEffect LegPositionEffect_6('1');
    noLegs_0_1.set(LegPositionEffect_6);
    LegOrdGrp_NoLegs_3.insert(LegPositionEffect_6.getString());
    FIX::LegQty LegQty_6;
    LegQty_6.setString("20802910");
    noLegs_0_1.set(LegQty_6);
    LegOrdGrp_NoLegs_3.insert(LegQty_6.getString());
    FIX::LegRefID LegRefID_6("STRING_1260095149");
    noLegs_0_1.set(LegRefID_6);
    LegOrdGrp_NoLegs_3.insert(LegRefID_6.getString());
    FIX::LegSettlCurrency LegSettlCurrency_6("CAN");
    noLegs_0_1.set(LegSettlCurrency_6);
    LegOrdGrp_NoLegs_3.insert(LegSettlCurrency_6.getString());
    FIX::LegSettlDate LegSettlDate_6("LOCALMKTDATE_1708147366");
    noLegs_0_1.set(LegSettlDate_6);
    LegOrdGrp_NoLegs_3.insert(LegSettlDate_6.getString());
    FIX::LegSettlType LegSettlType_6('2');
    noLegs_0_1.set(LegSettlType_6);
    LegOrdGrp_NoLegs_3.insert(LegSettlType_6.getString());
    FIX::LegSwapType LegSwapType_6(1);
    noLegs_0_1.set(LegSwapType_6);
    LegOrdGrp_NoLegs_3.insert(LegSwapType_6.getString());
    FIX::LegVolatility LegVolatility_6;
    LegVolatility_6.setString("9251499");
    noLegs_0_1.set(LegVolatility_6);
    LegOrdGrp_NoLegs_3.insert(LegVolatility_6.getString());
    all_values.push_back(LegOrdGrp_NoLegs_3);

    // InstrumentLeg
    multiset<string> InstrumentLeg_77;
    FIX::EncodedLegIssuer EncodedLegIssuer_77("DATA_1353760580");
    noLegs_0_1.set(EncodedLegIssuer_77);
    InstrumentLeg_77.insert(EncodedLegIssuer_77.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_77(701997608);
    noLegs_0_1.set(EncodedLegIssuerLen_77);
    InstrumentLeg_77.insert(EncodedLegIssuerLen_77.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_77("DATA_1363166912");
    noLegs_0_1.set(EncodedLegSecurityDesc_77);
    InstrumentLeg_77.insert(EncodedLegSecurityDesc_77.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_77(1263859607);
    noLegs_0_1.set(EncodedLegSecurityDescLen_77);
    InstrumentLeg_77.insert(EncodedLegSecurityDescLen_77.getString());
    FIX::LegCFICode LegCFICode_77("STRING_1795834070");
    noLegs_0_1.set(LegCFICode_77);
    InstrumentLeg_77.insert(LegCFICode_77.getString());
    FIX::LegContractMultiplier LegContractMultiplier_77;
    LegContractMultiplier_77.setString("17954262");
    noLegs_0_1.set(LegContractMultiplier_77);
    InstrumentLeg_77.insert(LegContractMultiplier_77.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_77(1554217132);
    noLegs_0_1.set(LegContractMultiplierUnit_77);
    InstrumentLeg_77.insert(LegContractMultiplierUnit_77.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_77("MONTHYEAR_618193640");
    noLegs_0_1.set(LegContractSettlMonth_77);
    InstrumentLeg_77.insert(LegContractSettlMonth_77.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_77("COUNTRY_1646237318");
    noLegs_0_1.set(LegCountryOfIssue_77);
    InstrumentLeg_77.insert(LegCountryOfIssue_77.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_77("LOCALMKTDATE_1523795290");
    noLegs_0_1.set(LegCouponPaymentDate_77);
    InstrumentLeg_77.insert(LegCouponPaymentDate_77.getString());
    FIX::LegCouponRate LegCouponRate_77;
    LegCouponRate_77.setString("1.850000");
    noLegs_0_1.set(LegCouponRate_77);
    InstrumentLeg_77.insert(LegCouponRate_77.getString());
    FIX::LegCreditRating LegCreditRating_77("STRING_510143629");
    noLegs_0_1.set(LegCreditRating_77);
    InstrumentLeg_77.insert(LegCreditRating_77.getString());
    FIX::LegCurrency LegCurrency_77("EUR");
    noLegs_0_1.set(LegCurrency_77);
    InstrumentLeg_77.insert(LegCurrency_77.getString());
    FIX::LegDatedDate LegDatedDate_77("LOCALMKTDATE_2132070556");
    noLegs_0_1.set(LegDatedDate_77);
    InstrumentLeg_77.insert(LegDatedDate_77.getString());
    FIX::LegExerciseStyle LegExerciseStyle_77(108553711);
    noLegs_0_1.set(LegExerciseStyle_77);
    InstrumentLeg_77.insert(LegExerciseStyle_77.getString());
    FIX::LegFactor LegFactor_77;
    LegFactor_77.setString("13583506");
    noLegs_0_1.set(LegFactor_77);
    InstrumentLeg_77.insert(LegFactor_77.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_77(1516635163);
    noLegs_0_1.set(LegFlowScheduleType_77);
    InstrumentLeg_77.insert(LegFlowScheduleType_77.getString());
    FIX::LegInstrRegistry LegInstrRegistry_77("STRING_229416662");
    noLegs_0_1.set(LegInstrRegistry_77);
    InstrumentLeg_77.insert(LegInstrRegistry_77.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_77("LOCALMKTDATE_380732117");
    noLegs_0_1.set(LegInterestAccrualDate_77);
    InstrumentLeg_77.insert(LegInterestAccrualDate_77.getString());
    FIX::LegIssueDate LegIssueDate_77("LOCALMKTDATE_684662818");
    noLegs_0_1.set(LegIssueDate_77);
    InstrumentLeg_77.insert(LegIssueDate_77.getString());
    FIX::LegIssuer LegIssuer_77("STRING_1455715867");
    noLegs_0_1.set(LegIssuer_77);
    InstrumentLeg_77.insert(LegIssuer_77.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_77("STRING_156866333");
    noLegs_0_1.set(LegLocaleOfIssue_77);
    InstrumentLeg_77.insert(LegLocaleOfIssue_77.getString());
    FIX::LegMaturityDate LegMaturityDate_77("LOCALMKTDATE_617470247");
    noLegs_0_1.set(LegMaturityDate_77);
    InstrumentLeg_77.insert(LegMaturityDate_77.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_77("MONTHYEAR_568327368");
    noLegs_0_1.set(LegMaturityMonthYear_77);
    InstrumentLeg_77.insert(LegMaturityMonthYear_77.getString());
    FIX::LegMaturityTime LegMaturityTime_77("TZTIMEONLY_362540895");
    noLegs_0_1.set(LegMaturityTime_77);
    InstrumentLeg_77.insert(LegMaturityTime_77.getString());
    FIX::LegOptAttribute LegOptAttribute_77('9');
    noLegs_0_1.set(LegOptAttribute_77);
    InstrumentLeg_77.insert(LegOptAttribute_77.getString());
    FIX::LegOptionRatio LegOptionRatio_77;
    LegOptionRatio_77.setString("1289910");
    noLegs_0_1.set(LegOptionRatio_77);
    InstrumentLeg_77.insert(LegOptionRatio_77.getString());
    FIX::LegPool LegPool_77("STRING_349207359");
    noLegs_0_1.set(LegPool_77);
    InstrumentLeg_77.insert(LegPool_77.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_77("STRING_1408372198");
    noLegs_0_1.set(LegPriceUnitOfMeasure_77);
    InstrumentLeg_77.insert(LegPriceUnitOfMeasure_77.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_77;
    LegPriceUnitOfMeasureQty_77.setString("10541410");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_77);
    InstrumentLeg_77.insert(LegPriceUnitOfMeasureQty_77.getString());
    FIX::LegProduct LegProduct_77(1702967939);
    noLegs_0_1.set(LegProduct_77);
    InstrumentLeg_77.insert(LegProduct_77.getString());
    FIX::LegPutOrCall LegPutOrCall_77(2110369807);
    noLegs_0_1.set(LegPutOrCall_77);
    InstrumentLeg_77.insert(LegPutOrCall_77.getString());
    FIX::LegRatioQty LegRatioQty_77;
    LegRatioQty_77.setString("2698242");
    noLegs_0_1.set(LegRatioQty_77);
    InstrumentLeg_77.insert(LegRatioQty_77.getString());
    FIX::LegRedemptionDate LegRedemptionDate_77("LOCALMKTDATE_819343898");
    noLegs_0_1.set(LegRedemptionDate_77);
    InstrumentLeg_77.insert(LegRedemptionDate_77.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_77("STRING_1758720229");
    noLegs_0_1.set(LegRepoCollateralSecurityType_77);
    InstrumentLeg_77.insert(LegRepoCollateralSecurityType_77.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_77;
    LegRepurchaseRate_77.setString("5.360000");
    noLegs_0_1.set(LegRepurchaseRate_77);
    InstrumentLeg_77.insert(LegRepurchaseRate_77.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_77(226077382);
    noLegs_0_1.set(LegRepurchaseTerm_77);
    InstrumentLeg_77.insert(LegRepurchaseTerm_77.getString());
    FIX::LegSecurityDesc LegSecurityDesc_77("STRING_229430221");
    noLegs_0_1.set(LegSecurityDesc_77);
    InstrumentLeg_77.insert(LegSecurityDesc_77.getString());
    FIX::LegSecurityExchange LegSecurityExchange_77("EXCHANGE_1564004206");
    noLegs_0_1.set(LegSecurityExchange_77);
    InstrumentLeg_77.insert(LegSecurityExchange_77.getString());
    FIX::LegSecurityID LegSecurityID_77("STRING_1749872673");
    noLegs_0_1.set(LegSecurityID_77);
    InstrumentLeg_77.insert(LegSecurityID_77.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_77("STRING_187786758");
    noLegs_0_1.set(LegSecurityIDSource_77);
    InstrumentLeg_77.insert(LegSecurityIDSource_77.getString());
    FIX::LegSecuritySubType LegSecuritySubType_77("STRING_2074147835");
    noLegs_0_1.set(LegSecuritySubType_77);
    InstrumentLeg_77.insert(LegSecuritySubType_77.getString());
    FIX::LegSecurityType LegSecurityType_77("STRING_897555621");
    noLegs_0_1.set(LegSecurityType_77);
    InstrumentLeg_77.insert(LegSecurityType_77.getString());
    FIX::LegSide LegSide_77('7');
    noLegs_0_1.set(LegSide_77);
    InstrumentLeg_77.insert(LegSide_77.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_77("STRING_2058734743");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_77);
    InstrumentLeg_77.insert(LegStateOrProvinceOfIssue_77.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_77("JPY");
    noLegs_0_1.set(LegStrikeCurrency_77);
    InstrumentLeg_77.insert(LegStrikeCurrency_77.getString());
    FIX::LegStrikePrice LegStrikePrice_77;
    LegStrikePrice_77.setString("14278862");
    noLegs_0_1.set(LegStrikePrice_77);
    InstrumentLeg_77.insert(LegStrikePrice_77.getString());
    FIX::LegSymbol LegSymbol_77("STRING_1235525994");
    noLegs_0_1.set(LegSymbol_77);
    InstrumentLeg_77.insert(LegSymbol_77.getString());
    FIX::LegSymbolSfx LegSymbolSfx_77("STRING_391498233");
    noLegs_0_1.set(LegSymbolSfx_77);
    InstrumentLeg_77.insert(LegSymbolSfx_77.getString());
    FIX::LegTimeUnit LegTimeUnit_77("STRING_2112549076");
    noLegs_0_1.set(LegTimeUnit_77);
    InstrumentLeg_77.insert(LegTimeUnit_77.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_77("STRING_543758213");
    noLegs_0_1.set(LegUnitOfMeasure_77);
    InstrumentLeg_77.insert(LegUnitOfMeasure_77.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_77;
    LegUnitOfMeasureQty_77.setString("5483645");
    noLegs_0_1.set(LegUnitOfMeasureQty_77);
    InstrumentLeg_77.insert(LegUnitOfMeasureQty_77.getString());
    all_values.push_back(InstrumentLeg_77);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_158;
      FIX::LegSecurityAltID LegSecurityAltID_158("STRING_1112085582");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_158);
      LegSecAltIDGrp_NoLegSecurityAltID_158.insert(LegSecurityAltID_158.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_158("STRING_910905462");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_158);
      LegSecAltIDGrp_NoLegSecurityAltID_158.insert(LegSecurityAltIDSource_158.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_158);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_159;
      FIX::LegSecurityAltID LegSecurityAltID_159("STRING_1525029234");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltID_159);
      LegSecAltIDGrp_NoLegSecurityAltID_159.insert(LegSecurityAltID_159.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_159("STRING_1241076669");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltIDSource_159);
      LegSecAltIDGrp_NoLegSecurityAltID_159.insert(LegSecurityAltIDSource_159.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_159);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_160;
      FIX::LegSecurityAltID LegSecurityAltID_160("STRING_1260112821");
      noLegSecurityAltID_1_1_2.set(LegSecurityAltID_160);
      LegSecAltIDGrp_NoLegSecurityAltID_160.insert(LegSecurityAltID_160.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_160("STRING_785917785");
      noLegSecurityAltID_1_1_2.set(LegSecurityAltIDSource_160);
      LegSecAltIDGrp_NoLegSecurityAltID_160.insert(LegSecurityAltIDSource_160.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_160);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_2);
    }
    // LegPreAllocGrp
    // Group LegPreAllocGrp.NoLegAllocs
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs noLegAllocs_1_1_0;
      // LegPreAllocGrp.NoLegAllocs
      multiset<string> LegPreAllocGrp_NoLegAllocs_8;
      FIX::LegAllocAccount LegAllocAccount_8("STRING_815597113");
      noLegAllocs_1_1_0.set(LegAllocAccount_8);
      LegPreAllocGrp_NoLegAllocs_8.insert(LegAllocAccount_8.getString());
      FIX::LegAllocAcctIDSource LegAllocAcctIDSource_8("STRING_748803944");
      noLegAllocs_1_1_0.set(LegAllocAcctIDSource_8);
      LegPreAllocGrp_NoLegAllocs_8.insert(LegAllocAcctIDSource_8.getString());
      FIX::LegAllocQty LegAllocQty_8;
      LegAllocQty_8.setString("4175583");
      noLegAllocs_1_1_0.set(LegAllocQty_8);
      LegPreAllocGrp_NoLegAllocs_8.insert(LegAllocQty_8.getString());
      FIX::LegAllocSettlCurrency LegAllocSettlCurrency_8("EUR");
      noLegAllocs_1_1_0.set(LegAllocSettlCurrency_8);
      LegPreAllocGrp_NoLegAllocs_8.insert(LegAllocSettlCurrency_8.getString());
      FIX::LegIndividualAllocID LegIndividualAllocID_8("STRING_335325203");
      noLegAllocs_1_1_0.set(LegIndividualAllocID_8);
      LegPreAllocGrp_NoLegAllocs_8.insert(LegIndividualAllocID_8.getString());
      all_values.push_back(LegPreAllocGrp_NoLegAllocs_8);

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_1_0_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_26;
        FIX::Nested2PartyID Nested2PartyID_26("STRING_589470746");
        noNested2PartyIDs_1_0_2_0.set(Nested2PartyID_26);
        NestedParties2_NoNested2PartyIDs_26.insert(Nested2PartyID_26.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_26('1');
        noNested2PartyIDs_1_0_2_0.set(Nested2PartyIDSource_26);
        NestedParties2_NoNested2PartyIDs_26.insert(Nested2PartyIDSource_26.getString());
        FIX::Nested2PartyRole Nested2PartyRole_26(1463407419);
        noNested2PartyIDs_1_0_2_0.set(Nested2PartyRole_26);
        NestedParties2_NoNested2PartyIDs_26.insert(Nested2PartyRole_26.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_26);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_57;
          FIX::Nested2PartySubID Nested2PartySubID_57("STRING_1825993596");
          noNested2PartySubIDs_1_0_0_3_0.set(Nested2PartySubID_57);
          NstdPtys2SubGrp_NoNested2PartySubIDs_57.insert(Nested2PartySubID_57.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_57(213479392);
          noNested2PartySubIDs_1_0_0_3_0.set(Nested2PartySubIDType_57);
          NstdPtys2SubGrp_NoNested2PartySubIDs_57.insert(Nested2PartySubIDType_57.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_57);

          noNested2PartyIDs_1_0_2_0.addGroup(noNested2PartySubIDs_1_0_0_3_0);
        }
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_0_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_58;
          FIX::Nested2PartySubID Nested2PartySubID_58("STRING_1577156583");
          noNested2PartySubIDs_1_0_0_3_1.set(Nested2PartySubID_58);
          NstdPtys2SubGrp_NoNested2PartySubIDs_58.insert(Nested2PartySubID_58.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_58(1737244691);
          noNested2PartySubIDs_1_0_0_3_1.set(Nested2PartySubIDType_58);
          NstdPtys2SubGrp_NoNested2PartySubIDs_58.insert(Nested2PartySubIDType_58.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_58);

          noNested2PartyIDs_1_0_2_0.addGroup(noNested2PartySubIDs_1_0_0_3_1);
        }
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_0_3_2;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_59;
          FIX::Nested2PartySubID Nested2PartySubID_59("STRING_1219588724");
          noNested2PartySubIDs_1_0_0_3_2.set(Nested2PartySubID_59);
          NstdPtys2SubGrp_NoNested2PartySubIDs_59.insert(Nested2PartySubID_59.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_59(1587922699);
          noNested2PartySubIDs_1_0_0_3_2.set(Nested2PartySubIDType_59);
          NstdPtys2SubGrp_NoNested2PartySubIDs_59.insert(Nested2PartySubIDType_59.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_59);

          noNested2PartyIDs_1_0_2_0.addGroup(noNested2PartySubIDs_1_0_0_3_2);
        }
        noLegAllocs_1_1_0.addGroup(noNested2PartyIDs_1_0_2_0);
      }
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_1_0_2_1;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_27;
        FIX::Nested2PartyID Nested2PartyID_27("STRING_1017647301");
        noNested2PartyIDs_1_0_2_1.set(Nested2PartyID_27);
        NestedParties2_NoNested2PartyIDs_27.insert(Nested2PartyID_27.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_27('3');
        noNested2PartyIDs_1_0_2_1.set(Nested2PartyIDSource_27);
        NestedParties2_NoNested2PartyIDs_27.insert(Nested2PartyIDSource_27.getString());
        FIX::Nested2PartyRole Nested2PartyRole_27(1979420933);
        noNested2PartyIDs_1_0_2_1.set(Nested2PartyRole_27);
        NestedParties2_NoNested2PartyIDs_27.insert(Nested2PartyRole_27.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_27);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_1_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_60;
          FIX::Nested2PartySubID Nested2PartySubID_60("STRING_851389283");
          noNested2PartySubIDs_1_0_1_3_0.set(Nested2PartySubID_60);
          NstdPtys2SubGrp_NoNested2PartySubIDs_60.insert(Nested2PartySubID_60.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_60(380301852);
          noNested2PartySubIDs_1_0_1_3_0.set(Nested2PartySubIDType_60);
          NstdPtys2SubGrp_NoNested2PartySubIDs_60.insert(Nested2PartySubIDType_60.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_60);

          noNested2PartyIDs_1_0_2_1.addGroup(noNested2PartySubIDs_1_0_1_3_0);
        }
        noLegAllocs_1_1_0.addGroup(noNested2PartyIDs_1_0_2_1);
      }
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_1_0_2_2;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_28;
        FIX::Nested2PartyID Nested2PartyID_28("STRING_1565248406");
        noNested2PartyIDs_1_0_2_2.set(Nested2PartyID_28);
        NestedParties2_NoNested2PartyIDs_28.insert(Nested2PartyID_28.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_28('1');
        noNested2PartyIDs_1_0_2_2.set(Nested2PartyIDSource_28);
        NestedParties2_NoNested2PartyIDs_28.insert(Nested2PartyIDSource_28.getString());
        FIX::Nested2PartyRole Nested2PartyRole_28(1291207314);
        noNested2PartyIDs_1_0_2_2.set(Nested2PartyRole_28);
        NestedParties2_NoNested2PartyIDs_28.insert(Nested2PartyRole_28.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_28);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_2_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_61;
          FIX::Nested2PartySubID Nested2PartySubID_61("STRING_1057067886");
          noNested2PartySubIDs_1_0_2_3_0.set(Nested2PartySubID_61);
          NstdPtys2SubGrp_NoNested2PartySubIDs_61.insert(Nested2PartySubID_61.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_61(403836488);
          noNested2PartySubIDs_1_0_2_3_0.set(Nested2PartySubIDType_61);
          NstdPtys2SubGrp_NoNested2PartySubIDs_61.insert(Nested2PartySubIDType_61.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_61);

          noNested2PartyIDs_1_0_2_2.addGroup(noNested2PartySubIDs_1_0_2_3_0);
        }
        noLegAllocs_1_1_0.addGroup(noNested2PartyIDs_1_0_2_2);
      }
      noLegs_0_1.addGroup(noLegAllocs_1_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs noLegAllocs_1_1_1;
      // LegPreAllocGrp.NoLegAllocs
      multiset<string> LegPreAllocGrp_NoLegAllocs_9;
      FIX::LegAllocAccount LegAllocAccount_9("STRING_1728711777");
      noLegAllocs_1_1_1.set(LegAllocAccount_9);
      LegPreAllocGrp_NoLegAllocs_9.insert(LegAllocAccount_9.getString());
      FIX::LegAllocAcctIDSource LegAllocAcctIDSource_9("STRING_1204801922");
      noLegAllocs_1_1_1.set(LegAllocAcctIDSource_9);
      LegPreAllocGrp_NoLegAllocs_9.insert(LegAllocAcctIDSource_9.getString());
      FIX::LegAllocQty LegAllocQty_9;
      LegAllocQty_9.setString("12194336");
      noLegAllocs_1_1_1.set(LegAllocQty_9);
      LegPreAllocGrp_NoLegAllocs_9.insert(LegAllocQty_9.getString());
      FIX::LegAllocSettlCurrency LegAllocSettlCurrency_9("USD");
      noLegAllocs_1_1_1.set(LegAllocSettlCurrency_9);
      LegPreAllocGrp_NoLegAllocs_9.insert(LegAllocSettlCurrency_9.getString());
      FIX::LegIndividualAllocID LegIndividualAllocID_9("STRING_706890964");
      noLegAllocs_1_1_1.set(LegIndividualAllocID_9);
      LegPreAllocGrp_NoLegAllocs_9.insert(LegIndividualAllocID_9.getString());
      all_values.push_back(LegPreAllocGrp_NoLegAllocs_9);

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_1_1_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_29;
        FIX::Nested2PartyID Nested2PartyID_29("STRING_1957685441");
        noNested2PartyIDs_1_1_2_0.set(Nested2PartyID_29);
        NestedParties2_NoNested2PartyIDs_29.insert(Nested2PartyID_29.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_29('4');
        noNested2PartyIDs_1_1_2_0.set(Nested2PartyIDSource_29);
        NestedParties2_NoNested2PartyIDs_29.insert(Nested2PartyIDSource_29.getString());
        FIX::Nested2PartyRole Nested2PartyRole_29(1279543344);
        noNested2PartyIDs_1_1_2_0.set(Nested2PartyRole_29);
        NestedParties2_NoNested2PartyIDs_29.insert(Nested2PartyRole_29.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_29);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_1_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_62;
          FIX::Nested2PartySubID Nested2PartySubID_62("STRING_1883833129");
          noNested2PartySubIDs_1_1_0_3_0.set(Nested2PartySubID_62);
          NstdPtys2SubGrp_NoNested2PartySubIDs_62.insert(Nested2PartySubID_62.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_62(2056800848);
          noNested2PartySubIDs_1_1_0_3_0.set(Nested2PartySubIDType_62);
          NstdPtys2SubGrp_NoNested2PartySubIDs_62.insert(Nested2PartySubIDType_62.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_62);

          noNested2PartyIDs_1_1_2_0.addGroup(noNested2PartySubIDs_1_1_0_3_0);
        }
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_1_0_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_63;
          FIX::Nested2PartySubID Nested2PartySubID_63("STRING_1388041151");
          noNested2PartySubIDs_1_1_0_3_1.set(Nested2PartySubID_63);
          NstdPtys2SubGrp_NoNested2PartySubIDs_63.insert(Nested2PartySubID_63.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_63(2097312521);
          noNested2PartySubIDs_1_1_0_3_1.set(Nested2PartySubIDType_63);
          NstdPtys2SubGrp_NoNested2PartySubIDs_63.insert(Nested2PartySubIDType_63.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_63);

          noNested2PartyIDs_1_1_2_0.addGroup(noNested2PartySubIDs_1_1_0_3_1);
        }
        noLegAllocs_1_1_1.addGroup(noNested2PartyIDs_1_1_2_0);
      }
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_1_1_2_1;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_30;
        FIX::Nested2PartyID Nested2PartyID_30("STRING_1486473784");
        noNested2PartyIDs_1_1_2_1.set(Nested2PartyID_30);
        NestedParties2_NoNested2PartyIDs_30.insert(Nested2PartyID_30.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_30('9');
        noNested2PartyIDs_1_1_2_1.set(Nested2PartyIDSource_30);
        NestedParties2_NoNested2PartyIDs_30.insert(Nested2PartyIDSource_30.getString());
        FIX::Nested2PartyRole Nested2PartyRole_30(1169417597);
        noNested2PartyIDs_1_1_2_1.set(Nested2PartyRole_30);
        NestedParties2_NoNested2PartyIDs_30.insert(Nested2PartyRole_30.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_30);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_1_1_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_64;
          FIX::Nested2PartySubID Nested2PartySubID_64("STRING_1995449496");
          noNested2PartySubIDs_1_1_1_3_0.set(Nested2PartySubID_64);
          NstdPtys2SubGrp_NoNested2PartySubIDs_64.insert(Nested2PartySubID_64.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_64(1477048667);
          noNested2PartySubIDs_1_1_1_3_0.set(Nested2PartySubIDType_64);
          NstdPtys2SubGrp_NoNested2PartySubIDs_64.insert(Nested2PartySubIDType_64.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_64);

          noNested2PartyIDs_1_1_2_1.addGroup(noNested2PartySubIDs_1_1_1_3_0);
        }
        noLegAllocs_1_1_1.addGroup(noNested2PartyIDs_1_1_2_1);
      }
      noLegs_0_1.addGroup(noLegAllocs_1_1_1);
    }
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs noLegAllocs_1_1_2;
      // LegPreAllocGrp.NoLegAllocs
      multiset<string> LegPreAllocGrp_NoLegAllocs_10;
      FIX::LegAllocAccount LegAllocAccount_10("STRING_758850120");
      noLegAllocs_1_1_2.set(LegAllocAccount_10);
      LegPreAllocGrp_NoLegAllocs_10.insert(LegAllocAccount_10.getString());
      FIX::LegAllocAcctIDSource LegAllocAcctIDSource_10("STRING_830678578");
      noLegAllocs_1_1_2.set(LegAllocAcctIDSource_10);
      LegPreAllocGrp_NoLegAllocs_10.insert(LegAllocAcctIDSource_10.getString());
      FIX::LegAllocQty LegAllocQty_10;
      LegAllocQty_10.setString("1809543");
      noLegAllocs_1_1_2.set(LegAllocQty_10);
      LegPreAllocGrp_NoLegAllocs_10.insert(LegAllocQty_10.getString());
      FIX::LegAllocSettlCurrency LegAllocSettlCurrency_10("JPY");
      noLegAllocs_1_1_2.set(LegAllocSettlCurrency_10);
      LegPreAllocGrp_NoLegAllocs_10.insert(LegAllocSettlCurrency_10.getString());
      FIX::LegIndividualAllocID LegIndividualAllocID_10("STRING_2144429168");
      noLegAllocs_1_1_2.set(LegIndividualAllocID_10);
      LegPreAllocGrp_NoLegAllocs_10.insert(LegIndividualAllocID_10.getString());
      all_values.push_back(LegPreAllocGrp_NoLegAllocs_10);

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_1_2_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_31;
        FIX::Nested2PartyID Nested2PartyID_31("STRING_1191237329");
        noNested2PartyIDs_1_2_2_0.set(Nested2PartyID_31);
        NestedParties2_NoNested2PartyIDs_31.insert(Nested2PartyID_31.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_31('1');
        noNested2PartyIDs_1_2_2_0.set(Nested2PartyIDSource_31);
        NestedParties2_NoNested2PartyIDs_31.insert(Nested2PartyIDSource_31.getString());
        FIX::Nested2PartyRole Nested2PartyRole_31(686712127);
        noNested2PartyIDs_1_2_2_0.set(Nested2PartyRole_31);
        NestedParties2_NoNested2PartyIDs_31.insert(Nested2PartyRole_31.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_31);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_2_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_65;
          FIX::Nested2PartySubID Nested2PartySubID_65("STRING_111331681");
          noNested2PartySubIDs_1_2_0_3_0.set(Nested2PartySubID_65);
          NstdPtys2SubGrp_NoNested2PartySubIDs_65.insert(Nested2PartySubID_65.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_65(1906145728);
          noNested2PartySubIDs_1_2_0_3_0.set(Nested2PartySubIDType_65);
          NstdPtys2SubGrp_NoNested2PartySubIDs_65.insert(Nested2PartySubIDType_65.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_65);

          noNested2PartyIDs_1_2_2_0.addGroup(noNested2PartySubIDs_1_2_0_3_0);
        }
        noLegAllocs_1_1_2.addGroup(noNested2PartyIDs_1_2_2_0);
      }
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_1_2_2_1;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_32;
        FIX::Nested2PartyID Nested2PartyID_32("STRING_1102497532");
        noNested2PartyIDs_1_2_2_1.set(Nested2PartyID_32);
        NestedParties2_NoNested2PartyIDs_32.insert(Nested2PartyID_32.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_32('1');
        noNested2PartyIDs_1_2_2_1.set(Nested2PartyIDSource_32);
        NestedParties2_NoNested2PartyIDs_32.insert(Nested2PartyIDSource_32.getString());
        FIX::Nested2PartyRole Nested2PartyRole_32(465553044);
        noNested2PartyIDs_1_2_2_1.set(Nested2PartyRole_32);
        NestedParties2_NoNested2PartyIDs_32.insert(Nested2PartyRole_32.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_32);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_2_1_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_66;
          FIX::Nested2PartySubID Nested2PartySubID_66("STRING_1543893713");
          noNested2PartySubIDs_1_2_1_3_0.set(Nested2PartySubID_66);
          NstdPtys2SubGrp_NoNested2PartySubIDs_66.insert(Nested2PartySubID_66.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_66(885978755);
          noNested2PartySubIDs_1_2_1_3_0.set(Nested2PartySubIDType_66);
          NstdPtys2SubGrp_NoNested2PartySubIDs_66.insert(Nested2PartySubIDType_66.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_66);

          noNested2PartyIDs_1_2_2_1.addGroup(noNested2PartySubIDs_1_2_1_3_0);
        }
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_2_1_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_67;
          FIX::Nested2PartySubID Nested2PartySubID_67("STRING_924629827");
          noNested2PartySubIDs_1_2_1_3_1.set(Nested2PartySubID_67);
          NstdPtys2SubGrp_NoNested2PartySubIDs_67.insert(Nested2PartySubID_67.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_67(1105941268);
          noNested2PartySubIDs_1_2_1_3_1.set(Nested2PartySubIDType_67);
          NstdPtys2SubGrp_NoNested2PartySubIDs_67.insert(Nested2PartySubIDType_67.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_67);

          noNested2PartyIDs_1_2_2_1.addGroup(noNested2PartySubIDs_1_2_1_3_1);
        }
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_2_1_3_2;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_68;
          FIX::Nested2PartySubID Nested2PartySubID_68("STRING_622328236");
          noNested2PartySubIDs_1_2_1_3_2.set(Nested2PartySubID_68);
          NstdPtys2SubGrp_NoNested2PartySubIDs_68.insert(Nested2PartySubID_68.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_68(833947027);
          noNested2PartySubIDs_1_2_1_3_2.set(Nested2PartySubIDType_68);
          NstdPtys2SubGrp_NoNested2PartySubIDs_68.insert(Nested2PartySubIDType_68.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_68);

          noNested2PartyIDs_1_2_2_1.addGroup(noNested2PartySubIDs_1_2_1_3_2);
        }
        noLegAllocs_1_1_2.addGroup(noNested2PartyIDs_1_2_2_1);
      }
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_1_2_2_2;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_33;
        FIX::Nested2PartyID Nested2PartyID_33("STRING_346498771");
        noNested2PartyIDs_1_2_2_2.set(Nested2PartyID_33);
        NestedParties2_NoNested2PartyIDs_33.insert(Nested2PartyID_33.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_33('5');
        noNested2PartyIDs_1_2_2_2.set(Nested2PartyIDSource_33);
        NestedParties2_NoNested2PartyIDs_33.insert(Nested2PartyIDSource_33.getString());
        FIX::Nested2PartyRole Nested2PartyRole_33(172937163);
        noNested2PartyIDs_1_2_2_2.set(Nested2PartyRole_33);
        NestedParties2_NoNested2PartyIDs_33.insert(Nested2PartyRole_33.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_33);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_2_2_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_69;
          FIX::Nested2PartySubID Nested2PartySubID_69("STRING_1741574707");
          noNested2PartySubIDs_1_2_2_3_0.set(Nested2PartySubID_69);
          NstdPtys2SubGrp_NoNested2PartySubIDs_69.insert(Nested2PartySubID_69.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_69(1099849999);
          noNested2PartySubIDs_1_2_2_3_0.set(Nested2PartySubIDType_69);
          NstdPtys2SubGrp_NoNested2PartySubIDs_69.insert(Nested2PartySubIDType_69.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_69);

          noNested2PartyIDs_1_2_2_2.addGroup(noNested2PartySubIDs_1_2_2_3_0);
        }
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_2_2_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_70;
          FIX::Nested2PartySubID Nested2PartySubID_70("STRING_1172266815");
          noNested2PartySubIDs_1_2_2_3_1.set(Nested2PartySubID_70);
          NstdPtys2SubGrp_NoNested2PartySubIDs_70.insert(Nested2PartySubID_70.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_70(1071139727);
          noNested2PartySubIDs_1_2_2_3_1.set(Nested2PartySubIDType_70);
          NstdPtys2SubGrp_NoNested2PartySubIDs_70.insert(Nested2PartySubIDType_70.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_70);

          noNested2PartyIDs_1_2_2_2.addGroup(noNested2PartySubIDs_1_2_2_3_1);
        }
        noLegAllocs_1_1_2.addGroup(noNested2PartyIDs_1_2_2_2);
      }
      noLegs_0_1.addGroup(noLegAllocs_1_1_2);
    }
    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoLegStipulations noLegStipulations_1_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_13;
      FIX::LegStipulationType LegStipulationType_13("STRING_2002945393");
      noLegStipulations_1_1_0.set(LegStipulationType_13);
      LegStipulations_NoLegStipulations_13.insert(LegStipulationType_13.getString());
      FIX::LegStipulationValue LegStipulationValue_13("STRING_1252094030");
      noLegStipulations_1_1_0.set(LegStipulationValue_13);
      LegStipulations_NoLegStipulations_13.insert(LegStipulationValue_13.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_13);

      noLegs_0_1.addGroup(noLegStipulations_1_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoLegStipulations noLegStipulations_1_1_1;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_14;
      FIX::LegStipulationType LegStipulationType_14("STRING_850368444");
      noLegStipulations_1_1_1.set(LegStipulationType_14);
      LegStipulations_NoLegStipulations_14.insert(LegStipulationType_14.getString());
      FIX::LegStipulationValue LegStipulationValue_14("STRING_103905082");
      noLegStipulations_1_1_1.set(LegStipulationValue_14);
      LegStipulations_NoLegStipulations_14.insert(LegStipulationValue_14.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_14);

      noLegs_0_1.addGroup(noLegStipulations_1_1_1);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoNestedPartyIDs noNestedPartyIDs_1_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_72;
      FIX::NestedPartyID NestedPartyID_72("STRING_1133244083");
      noNestedPartyIDs_1_1_0.set(NestedPartyID_72);
      NestedParties_NoNestedPartyIDs_72.insert(NestedPartyID_72.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_72('1');
      noNestedPartyIDs_1_1_0.set(NestedPartyIDSource_72);
      NestedParties_NoNestedPartyIDs_72.insert(NestedPartyIDSource_72.getString());
      FIX::NestedPartyRole NestedPartyRole_72(155569309);
      noNestedPartyIDs_1_1_0.set(NestedPartyRole_72);
      NestedParties_NoNestedPartyIDs_72.insert(NestedPartyRole_72.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_72);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_147;
        FIX::NestedPartySubID NestedPartySubID_147("STRING_2067607869");
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubID_147);
        NstdPtysSubGrp_NoNestedPartySubIDs_147.insert(NestedPartySubID_147.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_147(266900991);
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubIDType_147);
        NstdPtysSubGrp_NoNestedPartySubIDs_147.insert(NestedPartySubIDType_147.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_147);

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_0);
      }
      noLegs_0_1.addGroup(noNestedPartyIDs_1_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoNestedPartyIDs noNestedPartyIDs_1_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_73;
      FIX::NestedPartyID NestedPartyID_73("STRING_1578618290");
      noNestedPartyIDs_1_1_1.set(NestedPartyID_73);
      NestedParties_NoNestedPartyIDs_73.insert(NestedPartyID_73.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_73('1');
      noNestedPartyIDs_1_1_1.set(NestedPartyIDSource_73);
      NestedParties_NoNestedPartyIDs_73.insert(NestedPartyIDSource_73.getString());
      FIX::NestedPartyRole NestedPartyRole_73(2000592910);
      noNestedPartyIDs_1_1_1.set(NestedPartyRole_73);
      NestedParties_NoNestedPartyIDs_73.insert(NestedPartyRole_73.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_73);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_148;
        FIX::NestedPartySubID NestedPartySubID_148("STRING_667708236");
        noNestedPartySubIDs_1_1_2_0.set(NestedPartySubID_148);
        NstdPtysSubGrp_NoNestedPartySubIDs_148.insert(NestedPartySubID_148.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_148(1397002975);
        noNestedPartySubIDs_1_1_2_0.set(NestedPartySubIDType_148);
        NstdPtysSubGrp_NoNestedPartySubIDs_148.insert(NestedPartySubIDType_148.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_148);

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_149;
        FIX::NestedPartySubID NestedPartySubID_149("STRING_782666441");
        noNestedPartySubIDs_1_1_2_1.set(NestedPartySubID_149);
        NstdPtysSubGrp_NoNestedPartySubIDs_149.insert(NestedPartySubID_149.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_149(1592338063);
        noNestedPartySubIDs_1_1_2_1.set(NestedPartySubIDType_149);
        NstdPtysSubGrp_NoNestedPartySubIDs_149.insert(NestedPartySubIDType_149.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_149);

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_150;
        FIX::NestedPartySubID NestedPartySubID_150("STRING_355460595");
        noNestedPartySubIDs_1_1_2_2.set(NestedPartySubID_150);
        NstdPtysSubGrp_NoNestedPartySubIDs_150.insert(NestedPartySubID_150.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_150(1404994678);
        noNestedPartySubIDs_1_1_2_2.set(NestedPartySubIDType_150);
        NstdPtysSubGrp_NoNestedPartySubIDs_150.insert(NestedPartySubIDType_150.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_150);

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_2);
      }
      noLegs_0_1.addGroup(noNestedPartyIDs_1_1_1);
    }
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoNestedPartyIDs noNestedPartyIDs_1_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_74;
      FIX::NestedPartyID NestedPartyID_74("STRING_278801442");
      noNestedPartyIDs_1_1_2.set(NestedPartyID_74);
      NestedParties_NoNestedPartyIDs_74.insert(NestedPartyID_74.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_74('7');
      noNestedPartyIDs_1_1_2.set(NestedPartyIDSource_74);
      NestedParties_NoNestedPartyIDs_74.insert(NestedPartyIDSource_74.getString());
      FIX::NestedPartyRole NestedPartyRole_74(1977151788);
      noNestedPartyIDs_1_1_2.set(NestedPartyRole_74);
      NestedParties_NoNestedPartyIDs_74.insert(NestedPartyRole_74.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_74);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_151;
        FIX::NestedPartySubID NestedPartySubID_151("STRING_2026260333");
        noNestedPartySubIDs_1_2_2_0.set(NestedPartySubID_151);
        NstdPtysSubGrp_NoNestedPartySubIDs_151.insert(NestedPartySubID_151.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_151(1571242847);
        noNestedPartySubIDs_1_2_2_0.set(NestedPartySubIDType_151);
        NstdPtysSubGrp_NoNestedPartySubIDs_151.insert(NestedPartySubIDType_151.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_151);

        noNestedPartyIDs_1_1_2.addGroup(noNestedPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_152;
        FIX::NestedPartySubID NestedPartySubID_152("STRING_1551588605");
        noNestedPartySubIDs_1_2_2_1.set(NestedPartySubID_152);
        NstdPtysSubGrp_NoNestedPartySubIDs_152.insert(NestedPartySubID_152.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_152(1051043500);
        noNestedPartySubIDs_1_2_2_1.set(NestedPartySubIDType_152);
        NstdPtysSubGrp_NoNestedPartySubIDs_152.insert(NestedPartySubIDType_152.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_152);

        noNestedPartyIDs_1_1_2.addGroup(noNestedPartySubIDs_1_2_2_1);
      }
      noLegs_0_1.addGroup(noNestedPartyIDs_1_1_2);
    }
    msg.addGroup(noLegs_0_1);
  }
  {
    FIX50SP2::NewOrderMultileg::NoLegs noLegs_0_2;
    // LegOrdGrp.NoLegs
    multiset<string> LegOrdGrp_NoLegs_4;
    FIX::LegAllocID LegAllocID_7("STRING_494898926");
    noLegs_0_2.set(LegAllocID_7);
    LegOrdGrp_NoLegs_4.insert(LegAllocID_7.getString());
    FIX::LegCoveredOrUncovered LegCoveredOrUncovered_7(1262805076);
    noLegs_0_2.set(LegCoveredOrUncovered_7);
    LegOrdGrp_NoLegs_4.insert(LegCoveredOrUncovered_7.getString());
    FIX::LegCurrencyRatio LegCurrencyRatio_7;
    LegCurrencyRatio_7.setString("9065052");
    noLegs_0_2.set(LegCurrencyRatio_7);
    LegOrdGrp_NoLegs_4.insert(LegCurrencyRatio_7.getString());
    FIX::LegDividendYield LegDividendYield_7;
    LegDividendYield_7.setString("29.560000");
    noLegs_0_2.set(LegDividendYield_7);
    LegOrdGrp_NoLegs_4.insert(LegDividendYield_7.getString());
    FIX::LegExecInst LegExecInst_7("MULTIPLECHARVALUE_2113173520");
    noLegs_0_2.set(LegExecInst_7);
    LegOrdGrp_NoLegs_4.insert(LegExecInst_7.getString());
    FIX::LegOrderQty LegOrderQty_7;
    LegOrderQty_7.setString("10104103");
    noLegs_0_2.set(LegOrderQty_7);
    LegOrdGrp_NoLegs_4.insert(LegOrderQty_7.getString());
    FIX::LegPositionEffect LegPositionEffect_7('8');
    noLegs_0_2.set(LegPositionEffect_7);
    LegOrdGrp_NoLegs_4.insert(LegPositionEffect_7.getString());
    FIX::LegQty LegQty_7;
    LegQty_7.setString("10989339");
    noLegs_0_2.set(LegQty_7);
    LegOrdGrp_NoLegs_4.insert(LegQty_7.getString());
    FIX::LegRefID LegRefID_7("STRING_158069091");
    noLegs_0_2.set(LegRefID_7);
    LegOrdGrp_NoLegs_4.insert(LegRefID_7.getString());
    FIX::LegSettlCurrency LegSettlCurrency_7("CAN");
    noLegs_0_2.set(LegSettlCurrency_7);
    LegOrdGrp_NoLegs_4.insert(LegSettlCurrency_7.getString());
    FIX::LegSettlDate LegSettlDate_7("LOCALMKTDATE_78193312");
    noLegs_0_2.set(LegSettlDate_7);
    LegOrdGrp_NoLegs_4.insert(LegSettlDate_7.getString());
    FIX::LegSettlType LegSettlType_7('1');
    noLegs_0_2.set(LegSettlType_7);
    LegOrdGrp_NoLegs_4.insert(LegSettlType_7.getString());
    FIX::LegSwapType LegSwapType_7(5);
    noLegs_0_2.set(LegSwapType_7);
    LegOrdGrp_NoLegs_4.insert(LegSwapType_7.getString());
    FIX::LegVolatility LegVolatility_7;
    LegVolatility_7.setString("11008150");
    noLegs_0_2.set(LegVolatility_7);
    LegOrdGrp_NoLegs_4.insert(LegVolatility_7.getString());
    all_values.push_back(LegOrdGrp_NoLegs_4);

    // InstrumentLeg
    multiset<string> InstrumentLeg_78;
    FIX::EncodedLegIssuer EncodedLegIssuer_78("DATA_1124128422");
    noLegs_0_2.set(EncodedLegIssuer_78);
    InstrumentLeg_78.insert(EncodedLegIssuer_78.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_78(99228846);
    noLegs_0_2.set(EncodedLegIssuerLen_78);
    InstrumentLeg_78.insert(EncodedLegIssuerLen_78.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_78("DATA_1768523302");
    noLegs_0_2.set(EncodedLegSecurityDesc_78);
    InstrumentLeg_78.insert(EncodedLegSecurityDesc_78.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_78(373647749);
    noLegs_0_2.set(EncodedLegSecurityDescLen_78);
    InstrumentLeg_78.insert(EncodedLegSecurityDescLen_78.getString());
    FIX::LegCFICode LegCFICode_78("STRING_881895287");
    noLegs_0_2.set(LegCFICode_78);
    InstrumentLeg_78.insert(LegCFICode_78.getString());
    FIX::LegContractMultiplier LegContractMultiplier_78;
    LegContractMultiplier_78.setString("12133777");
    noLegs_0_2.set(LegContractMultiplier_78);
    InstrumentLeg_78.insert(LegContractMultiplier_78.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_78(729108345);
    noLegs_0_2.set(LegContractMultiplierUnit_78);
    InstrumentLeg_78.insert(LegContractMultiplierUnit_78.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_78("MONTHYEAR_139406317");
    noLegs_0_2.set(LegContractSettlMonth_78);
    InstrumentLeg_78.insert(LegContractSettlMonth_78.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_78("COUNTRY_1492179159");
    noLegs_0_2.set(LegCountryOfIssue_78);
    InstrumentLeg_78.insert(LegCountryOfIssue_78.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_78("LOCALMKTDATE_1431067712");
    noLegs_0_2.set(LegCouponPaymentDate_78);
    InstrumentLeg_78.insert(LegCouponPaymentDate_78.getString());
    FIX::LegCouponRate LegCouponRate_78;
    LegCouponRate_78.setString("81.050000");
    noLegs_0_2.set(LegCouponRate_78);
    InstrumentLeg_78.insert(LegCouponRate_78.getString());
    FIX::LegCreditRating LegCreditRating_78("STRING_1943917765");
    noLegs_0_2.set(LegCreditRating_78);
    InstrumentLeg_78.insert(LegCreditRating_78.getString());
    FIX::LegCurrency LegCurrency_78("CAN");
    noLegs_0_2.set(LegCurrency_78);
    InstrumentLeg_78.insert(LegCurrency_78.getString());
    FIX::LegDatedDate LegDatedDate_78("LOCALMKTDATE_1348022722");
    noLegs_0_2.set(LegDatedDate_78);
    InstrumentLeg_78.insert(LegDatedDate_78.getString());
    FIX::LegExerciseStyle LegExerciseStyle_78(213404250);
    noLegs_0_2.set(LegExerciseStyle_78);
    InstrumentLeg_78.insert(LegExerciseStyle_78.getString());
    FIX::LegFactor LegFactor_78;
    LegFactor_78.setString("20352162");
    noLegs_0_2.set(LegFactor_78);
    InstrumentLeg_78.insert(LegFactor_78.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_78(463344151);
    noLegs_0_2.set(LegFlowScheduleType_78);
    InstrumentLeg_78.insert(LegFlowScheduleType_78.getString());
    FIX::LegInstrRegistry LegInstrRegistry_78("STRING_1119909496");
    noLegs_0_2.set(LegInstrRegistry_78);
    InstrumentLeg_78.insert(LegInstrRegistry_78.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_78("LOCALMKTDATE_1634725540");
    noLegs_0_2.set(LegInterestAccrualDate_78);
    InstrumentLeg_78.insert(LegInterestAccrualDate_78.getString());
    FIX::LegIssueDate LegIssueDate_78("LOCALMKTDATE_429034023");
    noLegs_0_2.set(LegIssueDate_78);
    InstrumentLeg_78.insert(LegIssueDate_78.getString());
    FIX::LegIssuer LegIssuer_78("STRING_2130319824");
    noLegs_0_2.set(LegIssuer_78);
    InstrumentLeg_78.insert(LegIssuer_78.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_78("STRING_335790751");
    noLegs_0_2.set(LegLocaleOfIssue_78);
    InstrumentLeg_78.insert(LegLocaleOfIssue_78.getString());
    FIX::LegMaturityDate LegMaturityDate_78("LOCALMKTDATE_1527967979");
    noLegs_0_2.set(LegMaturityDate_78);
    InstrumentLeg_78.insert(LegMaturityDate_78.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_78("MONTHYEAR_140905267");
    noLegs_0_2.set(LegMaturityMonthYear_78);
    InstrumentLeg_78.insert(LegMaturityMonthYear_78.getString());
    FIX::LegMaturityTime LegMaturityTime_78("TZTIMEONLY_1339908919");
    noLegs_0_2.set(LegMaturityTime_78);
    InstrumentLeg_78.insert(LegMaturityTime_78.getString());
    FIX::LegOptAttribute LegOptAttribute_78('1');
    noLegs_0_2.set(LegOptAttribute_78);
    InstrumentLeg_78.insert(LegOptAttribute_78.getString());
    FIX::LegOptionRatio LegOptionRatio_78;
    LegOptionRatio_78.setString("2190985");
    noLegs_0_2.set(LegOptionRatio_78);
    InstrumentLeg_78.insert(LegOptionRatio_78.getString());
    FIX::LegPool LegPool_78("STRING_463444431");
    noLegs_0_2.set(LegPool_78);
    InstrumentLeg_78.insert(LegPool_78.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_78("STRING_354432008");
    noLegs_0_2.set(LegPriceUnitOfMeasure_78);
    InstrumentLeg_78.insert(LegPriceUnitOfMeasure_78.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_78;
    LegPriceUnitOfMeasureQty_78.setString("13199136");
    noLegs_0_2.set(LegPriceUnitOfMeasureQty_78);
    InstrumentLeg_78.insert(LegPriceUnitOfMeasureQty_78.getString());
    FIX::LegProduct LegProduct_78(1587572853);
    noLegs_0_2.set(LegProduct_78);
    InstrumentLeg_78.insert(LegProduct_78.getString());
    FIX::LegPutOrCall LegPutOrCall_78(453660854);
    noLegs_0_2.set(LegPutOrCall_78);
    InstrumentLeg_78.insert(LegPutOrCall_78.getString());
    FIX::LegRatioQty LegRatioQty_78;
    LegRatioQty_78.setString("9409532");
    noLegs_0_2.set(LegRatioQty_78);
    InstrumentLeg_78.insert(LegRatioQty_78.getString());
    FIX::LegRedemptionDate LegRedemptionDate_78("LOCALMKTDATE_1961220602");
    noLegs_0_2.set(LegRedemptionDate_78);
    InstrumentLeg_78.insert(LegRedemptionDate_78.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_78("STRING_1335556141");
    noLegs_0_2.set(LegRepoCollateralSecurityType_78);
    InstrumentLeg_78.insert(LegRepoCollateralSecurityType_78.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_78;
    LegRepurchaseRate_78.setString("73.680000");
    noLegs_0_2.set(LegRepurchaseRate_78);
    InstrumentLeg_78.insert(LegRepurchaseRate_78.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_78(542845299);
    noLegs_0_2.set(LegRepurchaseTerm_78);
    InstrumentLeg_78.insert(LegRepurchaseTerm_78.getString());
    FIX::LegSecurityDesc LegSecurityDesc_78("STRING_1474962459");
    noLegs_0_2.set(LegSecurityDesc_78);
    InstrumentLeg_78.insert(LegSecurityDesc_78.getString());
    FIX::LegSecurityExchange LegSecurityExchange_78("EXCHANGE_1499026528");
    noLegs_0_2.set(LegSecurityExchange_78);
    InstrumentLeg_78.insert(LegSecurityExchange_78.getString());
    FIX::LegSecurityID LegSecurityID_78("STRING_1973913011");
    noLegs_0_2.set(LegSecurityID_78);
    InstrumentLeg_78.insert(LegSecurityID_78.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_78("STRING_1444036916");
    noLegs_0_2.set(LegSecurityIDSource_78);
    InstrumentLeg_78.insert(LegSecurityIDSource_78.getString());
    FIX::LegSecuritySubType LegSecuritySubType_78("STRING_1295460645");
    noLegs_0_2.set(LegSecuritySubType_78);
    InstrumentLeg_78.insert(LegSecuritySubType_78.getString());
    FIX::LegSecurityType LegSecurityType_78("STRING_1136273761");
    noLegs_0_2.set(LegSecurityType_78);
    InstrumentLeg_78.insert(LegSecurityType_78.getString());
    FIX::LegSide LegSide_78('8');
    noLegs_0_2.set(LegSide_78);
    InstrumentLeg_78.insert(LegSide_78.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_78("STRING_495999720");
    noLegs_0_2.set(LegStateOrProvinceOfIssue_78);
    InstrumentLeg_78.insert(LegStateOrProvinceOfIssue_78.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_78("CAN");
    noLegs_0_2.set(LegStrikeCurrency_78);
    InstrumentLeg_78.insert(LegStrikeCurrency_78.getString());
    FIX::LegStrikePrice LegStrikePrice_78;
    LegStrikePrice_78.setString("9593438");
    noLegs_0_2.set(LegStrikePrice_78);
    InstrumentLeg_78.insert(LegStrikePrice_78.getString());
    FIX::LegSymbol LegSymbol_78("STRING_322103859");
    noLegs_0_2.set(LegSymbol_78);
    InstrumentLeg_78.insert(LegSymbol_78.getString());
    FIX::LegSymbolSfx LegSymbolSfx_78("STRING_211845049");
    noLegs_0_2.set(LegSymbolSfx_78);
    InstrumentLeg_78.insert(LegSymbolSfx_78.getString());
    FIX::LegTimeUnit LegTimeUnit_78("STRING_1388377894");
    noLegs_0_2.set(LegTimeUnit_78);
    InstrumentLeg_78.insert(LegTimeUnit_78.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_78("STRING_304940035");
    noLegs_0_2.set(LegUnitOfMeasure_78);
    InstrumentLeg_78.insert(LegUnitOfMeasure_78.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_78;
    LegUnitOfMeasureQty_78.setString("5476358");
    noLegs_0_2.set(LegUnitOfMeasureQty_78);
    InstrumentLeg_78.insert(LegUnitOfMeasureQty_78.getString());
    all_values.push_back(InstrumentLeg_78);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_161;
      FIX::LegSecurityAltID LegSecurityAltID_161("STRING_445845302");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltID_161);
      LegSecAltIDGrp_NoLegSecurityAltID_161.insert(LegSecurityAltID_161.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_161("STRING_1887544719");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltIDSource_161);
      LegSecAltIDGrp_NoLegSecurityAltID_161.insert(LegSecurityAltIDSource_161.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_161);

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_162;
      FIX::LegSecurityAltID LegSecurityAltID_162("STRING_920753074");
      noLegSecurityAltID_2_1_1.set(LegSecurityAltID_162);
      LegSecAltIDGrp_NoLegSecurityAltID_162.insert(LegSecurityAltID_162.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_162("STRING_664943881");
      noLegSecurityAltID_2_1_1.set(LegSecurityAltIDSource_162);
      LegSecAltIDGrp_NoLegSecurityAltID_162.insert(LegSecurityAltIDSource_162.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_162);

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_1);
    }
    // LegPreAllocGrp
    // Group LegPreAllocGrp.NoLegAllocs
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs noLegAllocs_2_1_0;
      // LegPreAllocGrp.NoLegAllocs
      multiset<string> LegPreAllocGrp_NoLegAllocs_11;
      FIX::LegAllocAccount LegAllocAccount_11("STRING_1275185082");
      noLegAllocs_2_1_0.set(LegAllocAccount_11);
      LegPreAllocGrp_NoLegAllocs_11.insert(LegAllocAccount_11.getString());
      FIX::LegAllocAcctIDSource LegAllocAcctIDSource_11("STRING_1984857527");
      noLegAllocs_2_1_0.set(LegAllocAcctIDSource_11);
      LegPreAllocGrp_NoLegAllocs_11.insert(LegAllocAcctIDSource_11.getString());
      FIX::LegAllocQty LegAllocQty_11;
      LegAllocQty_11.setString("17910783");
      noLegAllocs_2_1_0.set(LegAllocQty_11);
      LegPreAllocGrp_NoLegAllocs_11.insert(LegAllocQty_11.getString());
      FIX::LegAllocSettlCurrency LegAllocSettlCurrency_11("GBP");
      noLegAllocs_2_1_0.set(LegAllocSettlCurrency_11);
      LegPreAllocGrp_NoLegAllocs_11.insert(LegAllocSettlCurrency_11.getString());
      FIX::LegIndividualAllocID LegIndividualAllocID_11("STRING_1604815310");
      noLegAllocs_2_1_0.set(LegIndividualAllocID_11);
      LegPreAllocGrp_NoLegAllocs_11.insert(LegIndividualAllocID_11.getString());
      all_values.push_back(LegPreAllocGrp_NoLegAllocs_11);

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_2_0_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_34;
        FIX::Nested2PartyID Nested2PartyID_34("STRING_785174547");
        noNested2PartyIDs_2_0_2_0.set(Nested2PartyID_34);
        NestedParties2_NoNested2PartyIDs_34.insert(Nested2PartyID_34.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_34('1');
        noNested2PartyIDs_2_0_2_0.set(Nested2PartyIDSource_34);
        NestedParties2_NoNested2PartyIDs_34.insert(Nested2PartyIDSource_34.getString());
        FIX::Nested2PartyRole Nested2PartyRole_34(244397240);
        noNested2PartyIDs_2_0_2_0.set(Nested2PartyRole_34);
        NestedParties2_NoNested2PartyIDs_34.insert(Nested2PartyRole_34.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_34);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_0_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_71;
          FIX::Nested2PartySubID Nested2PartySubID_71("STRING_1974089973");
          noNested2PartySubIDs_2_0_0_3_0.set(Nested2PartySubID_71);
          NstdPtys2SubGrp_NoNested2PartySubIDs_71.insert(Nested2PartySubID_71.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_71(1688434157);
          noNested2PartySubIDs_2_0_0_3_0.set(Nested2PartySubIDType_71);
          NstdPtys2SubGrp_NoNested2PartySubIDs_71.insert(Nested2PartySubIDType_71.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_71);

          noNested2PartyIDs_2_0_2_0.addGroup(noNested2PartySubIDs_2_0_0_3_0);
        }
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_0_0_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_72;
          FIX::Nested2PartySubID Nested2PartySubID_72("STRING_1432178072");
          noNested2PartySubIDs_2_0_0_3_1.set(Nested2PartySubID_72);
          NstdPtys2SubGrp_NoNested2PartySubIDs_72.insert(Nested2PartySubID_72.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_72(962880086);
          noNested2PartySubIDs_2_0_0_3_1.set(Nested2PartySubIDType_72);
          NstdPtys2SubGrp_NoNested2PartySubIDs_72.insert(Nested2PartySubIDType_72.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_72);

          noNested2PartyIDs_2_0_2_0.addGroup(noNested2PartySubIDs_2_0_0_3_1);
        }
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_0_0_3_2;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_73;
          FIX::Nested2PartySubID Nested2PartySubID_73("STRING_377821082");
          noNested2PartySubIDs_2_0_0_3_2.set(Nested2PartySubID_73);
          NstdPtys2SubGrp_NoNested2PartySubIDs_73.insert(Nested2PartySubID_73.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_73(1928177792);
          noNested2PartySubIDs_2_0_0_3_2.set(Nested2PartySubIDType_73);
          NstdPtys2SubGrp_NoNested2PartySubIDs_73.insert(Nested2PartySubIDType_73.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_73);

          noNested2PartyIDs_2_0_2_0.addGroup(noNested2PartySubIDs_2_0_0_3_2);
        }
        noLegAllocs_2_1_0.addGroup(noNested2PartyIDs_2_0_2_0);
      }
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_2_0_2_1;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_35;
        FIX::Nested2PartyID Nested2PartyID_35("STRING_165074449");
        noNested2PartyIDs_2_0_2_1.set(Nested2PartyID_35);
        NestedParties2_NoNested2PartyIDs_35.insert(Nested2PartyID_35.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_35('1');
        noNested2PartyIDs_2_0_2_1.set(Nested2PartyIDSource_35);
        NestedParties2_NoNested2PartyIDs_35.insert(Nested2PartyIDSource_35.getString());
        FIX::Nested2PartyRole Nested2PartyRole_35(740038015);
        noNested2PartyIDs_2_0_2_1.set(Nested2PartyRole_35);
        NestedParties2_NoNested2PartyIDs_35.insert(Nested2PartyRole_35.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_35);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_0_1_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_74;
          FIX::Nested2PartySubID Nested2PartySubID_74("STRING_1314269288");
          noNested2PartySubIDs_2_0_1_3_0.set(Nested2PartySubID_74);
          NstdPtys2SubGrp_NoNested2PartySubIDs_74.insert(Nested2PartySubID_74.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_74(2128415910);
          noNested2PartySubIDs_2_0_1_3_0.set(Nested2PartySubIDType_74);
          NstdPtys2SubGrp_NoNested2PartySubIDs_74.insert(Nested2PartySubIDType_74.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_74);

          noNested2PartyIDs_2_0_2_1.addGroup(noNested2PartySubIDs_2_0_1_3_0);
        }
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_0_1_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_75;
          FIX::Nested2PartySubID Nested2PartySubID_75("STRING_792118343");
          noNested2PartySubIDs_2_0_1_3_1.set(Nested2PartySubID_75);
          NstdPtys2SubGrp_NoNested2PartySubIDs_75.insert(Nested2PartySubID_75.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_75(1861905088);
          noNested2PartySubIDs_2_0_1_3_1.set(Nested2PartySubIDType_75);
          NstdPtys2SubGrp_NoNested2PartySubIDs_75.insert(Nested2PartySubIDType_75.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_75);

          noNested2PartyIDs_2_0_2_1.addGroup(noNested2PartySubIDs_2_0_1_3_1);
        }
        noLegAllocs_2_1_0.addGroup(noNested2PartyIDs_2_0_2_1);
      }
      noLegs_0_2.addGroup(noLegAllocs_2_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs noLegAllocs_2_1_1;
      // LegPreAllocGrp.NoLegAllocs
      multiset<string> LegPreAllocGrp_NoLegAllocs_12;
      FIX::LegAllocAccount LegAllocAccount_12("STRING_749794487");
      noLegAllocs_2_1_1.set(LegAllocAccount_12);
      LegPreAllocGrp_NoLegAllocs_12.insert(LegAllocAccount_12.getString());
      FIX::LegAllocAcctIDSource LegAllocAcctIDSource_12("STRING_1237963645");
      noLegAllocs_2_1_1.set(LegAllocAcctIDSource_12);
      LegPreAllocGrp_NoLegAllocs_12.insert(LegAllocAcctIDSource_12.getString());
      FIX::LegAllocQty LegAllocQty_12;
      LegAllocQty_12.setString("16019661");
      noLegAllocs_2_1_1.set(LegAllocQty_12);
      LegPreAllocGrp_NoLegAllocs_12.insert(LegAllocQty_12.getString());
      FIX::LegAllocSettlCurrency LegAllocSettlCurrency_12("GBP");
      noLegAllocs_2_1_1.set(LegAllocSettlCurrency_12);
      LegPreAllocGrp_NoLegAllocs_12.insert(LegAllocSettlCurrency_12.getString());
      FIX::LegIndividualAllocID LegIndividualAllocID_12("STRING_1805471662");
      noLegAllocs_2_1_1.set(LegIndividualAllocID_12);
      LegPreAllocGrp_NoLegAllocs_12.insert(LegIndividualAllocID_12.getString());
      all_values.push_back(LegPreAllocGrp_NoLegAllocs_12);

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_2_1_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_36;
        FIX::Nested2PartyID Nested2PartyID_36("STRING_1740281405");
        noNested2PartyIDs_2_1_2_0.set(Nested2PartyID_36);
        NestedParties2_NoNested2PartyIDs_36.insert(Nested2PartyID_36.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_36('1');
        noNested2PartyIDs_2_1_2_0.set(Nested2PartyIDSource_36);
        NestedParties2_NoNested2PartyIDs_36.insert(Nested2PartyIDSource_36.getString());
        FIX::Nested2PartyRole Nested2PartyRole_36(379611283);
        noNested2PartyIDs_2_1_2_0.set(Nested2PartyRole_36);
        NestedParties2_NoNested2PartyIDs_36.insert(Nested2PartyRole_36.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_36);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_1_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_76;
          FIX::Nested2PartySubID Nested2PartySubID_76("STRING_906398032");
          noNested2PartySubIDs_2_1_0_3_0.set(Nested2PartySubID_76);
          NstdPtys2SubGrp_NoNested2PartySubIDs_76.insert(Nested2PartySubID_76.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_76(1296529713);
          noNested2PartySubIDs_2_1_0_3_0.set(Nested2PartySubIDType_76);
          NstdPtys2SubGrp_NoNested2PartySubIDs_76.insert(Nested2PartySubIDType_76.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_76);

          noNested2PartyIDs_2_1_2_0.addGroup(noNested2PartySubIDs_2_1_0_3_0);
        }
        noLegAllocs_2_1_1.addGroup(noNested2PartyIDs_2_1_2_0);
      }
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_2_1_2_1;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_37;
        FIX::Nested2PartyID Nested2PartyID_37("STRING_1156299483");
        noNested2PartyIDs_2_1_2_1.set(Nested2PartyID_37);
        NestedParties2_NoNested2PartyIDs_37.insert(Nested2PartyID_37.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_37('9');
        noNested2PartyIDs_2_1_2_1.set(Nested2PartyIDSource_37);
        NestedParties2_NoNested2PartyIDs_37.insert(Nested2PartyIDSource_37.getString());
        FIX::Nested2PartyRole Nested2PartyRole_37(1540926953);
        noNested2PartyIDs_2_1_2_1.set(Nested2PartyRole_37);
        NestedParties2_NoNested2PartyIDs_37.insert(Nested2PartyRole_37.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_37);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_1_1_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_77;
          FIX::Nested2PartySubID Nested2PartySubID_77("STRING_733181318");
          noNested2PartySubIDs_2_1_1_3_0.set(Nested2PartySubID_77);
          NstdPtys2SubGrp_NoNested2PartySubIDs_77.insert(Nested2PartySubID_77.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_77(1081877462);
          noNested2PartySubIDs_2_1_1_3_0.set(Nested2PartySubIDType_77);
          NstdPtys2SubGrp_NoNested2PartySubIDs_77.insert(Nested2PartySubIDType_77.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_77);

          noNested2PartyIDs_2_1_2_1.addGroup(noNested2PartySubIDs_2_1_1_3_0);
        }
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_1_1_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_78;
          FIX::Nested2PartySubID Nested2PartySubID_78("STRING_577711334");
          noNested2PartySubIDs_2_1_1_3_1.set(Nested2PartySubID_78);
          NstdPtys2SubGrp_NoNested2PartySubIDs_78.insert(Nested2PartySubID_78.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_78(1696061404);
          noNested2PartySubIDs_2_1_1_3_1.set(Nested2PartySubIDType_78);
          NstdPtys2SubGrp_NoNested2PartySubIDs_78.insert(Nested2PartySubIDType_78.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_78);

          noNested2PartyIDs_2_1_2_1.addGroup(noNested2PartySubIDs_2_1_1_3_1);
        }
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_1_1_3_2;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_79;
          FIX::Nested2PartySubID Nested2PartySubID_79("STRING_1459698545");
          noNested2PartySubIDs_2_1_1_3_2.set(Nested2PartySubID_79);
          NstdPtys2SubGrp_NoNested2PartySubIDs_79.insert(Nested2PartySubID_79.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_79(358405479);
          noNested2PartySubIDs_2_1_1_3_2.set(Nested2PartySubIDType_79);
          NstdPtys2SubGrp_NoNested2PartySubIDs_79.insert(Nested2PartySubIDType_79.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_79);

          noNested2PartyIDs_2_1_2_1.addGroup(noNested2PartySubIDs_2_1_1_3_2);
        }
        noLegAllocs_2_1_1.addGroup(noNested2PartyIDs_2_1_2_1);
      }
      noLegs_0_2.addGroup(noLegAllocs_2_1_1);
    }
    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoLegStipulations noLegStipulations_2_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_15;
      FIX::LegStipulationType LegStipulationType_15("STRING_414639136");
      noLegStipulations_2_1_0.set(LegStipulationType_15);
      LegStipulations_NoLegStipulations_15.insert(LegStipulationType_15.getString());
      FIX::LegStipulationValue LegStipulationValue_15("STRING_1098443494");
      noLegStipulations_2_1_0.set(LegStipulationValue_15);
      LegStipulations_NoLegStipulations_15.insert(LegStipulationValue_15.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_15);

      noLegs_0_2.addGroup(noLegStipulations_2_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoLegStipulations noLegStipulations_2_1_1;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_16;
      FIX::LegStipulationType LegStipulationType_16("STRING_200830513");
      noLegStipulations_2_1_1.set(LegStipulationType_16);
      LegStipulations_NoLegStipulations_16.insert(LegStipulationType_16.getString());
      FIX::LegStipulationValue LegStipulationValue_16("STRING_1728908425");
      noLegStipulations_2_1_1.set(LegStipulationValue_16);
      LegStipulations_NoLegStipulations_16.insert(LegStipulationValue_16.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_16);

      noLegs_0_2.addGroup(noLegStipulations_2_1_1);
    }
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoLegStipulations noLegStipulations_2_1_2;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_17;
      FIX::LegStipulationType LegStipulationType_17("STRING_1079375756");
      noLegStipulations_2_1_2.set(LegStipulationType_17);
      LegStipulations_NoLegStipulations_17.insert(LegStipulationType_17.getString());
      FIX::LegStipulationValue LegStipulationValue_17("STRING_992948856");
      noLegStipulations_2_1_2.set(LegStipulationValue_17);
      LegStipulations_NoLegStipulations_17.insert(LegStipulationValue_17.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_17);

      noLegs_0_2.addGroup(noLegStipulations_2_1_2);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoNestedPartyIDs noNestedPartyIDs_2_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_75;
      FIX::NestedPartyID NestedPartyID_75("STRING_1829170244");
      noNestedPartyIDs_2_1_0.set(NestedPartyID_75);
      NestedParties_NoNestedPartyIDs_75.insert(NestedPartyID_75.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_75('8');
      noNestedPartyIDs_2_1_0.set(NestedPartyIDSource_75);
      NestedParties_NoNestedPartyIDs_75.insert(NestedPartyIDSource_75.getString());
      FIX::NestedPartyRole NestedPartyRole_75(897812377);
      noNestedPartyIDs_2_1_0.set(NestedPartyRole_75);
      NestedParties_NoNestedPartyIDs_75.insert(NestedPartyRole_75.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_75);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_153;
        FIX::NestedPartySubID NestedPartySubID_153("STRING_1986336380");
        noNestedPartySubIDs_2_0_2_0.set(NestedPartySubID_153);
        NstdPtysSubGrp_NoNestedPartySubIDs_153.insert(NestedPartySubID_153.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_153(555800392);
        noNestedPartySubIDs_2_0_2_0.set(NestedPartySubIDType_153);
        NstdPtysSubGrp_NoNestedPartySubIDs_153.insert(NestedPartySubIDType_153.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_153);

        noNestedPartyIDs_2_1_0.addGroup(noNestedPartySubIDs_2_0_2_0);
      }
      noLegs_0_2.addGroup(noNestedPartyIDs_2_1_0);
    }
    msg.addGroup(noLegs_0_2);
  }
  // OrderQtyData
  multiset<string> OrderQtyData_14;
  FIX::CashOrderQty CashOrderQty_14;
  CashOrderQty_14.setString("29995");
  msg.set(CashOrderQty_14);
  OrderQtyData_14.insert(CashOrderQty_14.getString());
  FIX::OrderPercent OrderPercent_14;
  OrderPercent_14.setString("41.370000");
  msg.set(OrderPercent_14);
  OrderQtyData_14.insert(OrderPercent_14.getString());
  FIX::OrderQty OrderQty_22;
  OrderQty_22.setString("20048667");
  msg.set(OrderQty_22);
  OrderQtyData_14.insert(OrderQty_22.getString());
  FIX::RoundingDirection RoundingDirection_14('1');
  msg.set(RoundingDirection_14);
  OrderQtyData_14.insert(RoundingDirection_14.getString());
  FIX::RoundingModulus RoundingModulus_14;
  RoundingModulus_14.setString("19502590");
  msg.set(RoundingModulus_14);
  OrderQtyData_14.insert(RoundingModulus_14.getString());
  all_values.push_back(OrderQtyData_14);

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::NewOrderMultileg::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_79;
    FIX::PartyID PartyID_79("STRING_1679140501");
    noPartyIDs_0_0.set(PartyID_79);
    Parties_NoPartyIDs_79.insert(PartyID_79.getString());
    FIX::PartyIDSource PartyIDSource_79('2');
    noPartyIDs_0_0.set(PartyIDSource_79);
    Parties_NoPartyIDs_79.insert(PartyIDSource_79.getString());
    FIX::PartyRole PartyRole_79(12);
    noPartyIDs_0_0.set(PartyRole_79);
    Parties_NoPartyIDs_79.insert(PartyRole_79.getString());
    all_values.push_back(Parties_NoPartyIDs_79);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::NewOrderMultileg::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_161;
      FIX::PartySubID PartySubID_161("STRING_104608170");
      noPartySubIDs_0_1_0.set(PartySubID_161);
      PtysSubGrp_NoPartySubIDs_161.insert(PartySubID_161.getString());
      FIX::PartySubIDType PartySubIDType_161(13);
      noPartySubIDs_0_1_0.set(PartySubIDType_161);
      PtysSubGrp_NoPartySubIDs_161.insert(PartySubIDType_161.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_161);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_162;
      FIX::PartySubID PartySubID_162("STRING_6977621");
      noPartySubIDs_0_1_1.set(PartySubID_162);
      PtysSubGrp_NoPartySubIDs_162.insert(PartySubID_162.getString());
      FIX::PartySubIDType PartySubIDType_162(22);
      noPartySubIDs_0_1_1.set(PartySubIDType_162);
      PtysSubGrp_NoPartySubIDs_162.insert(PartySubIDType_162.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_162);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::NewOrderMultileg::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_163;
      FIX::PartySubID PartySubID_163("STRING_1952115214");
      noPartySubIDs_0_1_2.set(PartySubID_163);
      PtysSubGrp_NoPartySubIDs_163.insert(PartySubID_163.getString());
      FIX::PartySubIDType PartySubIDType_163(11);
      noPartySubIDs_0_1_2.set(PartySubIDType_163);
      PtysSubGrp_NoPartySubIDs_163.insert(PartySubIDType_163.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_163);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::NewOrderMultileg::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_80;
    FIX::PartyID PartyID_80("STRING_1040724984");
    noPartyIDs_0_1.set(PartyID_80);
    Parties_NoPartyIDs_80.insert(PartyID_80.getString());
    FIX::PartyIDSource PartyIDSource_80('4');
    noPartyIDs_0_1.set(PartyIDSource_80);
    Parties_NoPartyIDs_80.insert(PartyIDSource_80.getString());
    FIX::PartyRole PartyRole_80(65);
    noPartyIDs_0_1.set(PartyRole_80);
    Parties_NoPartyIDs_80.insert(PartyRole_80.getString());
    all_values.push_back(Parties_NoPartyIDs_80);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::NewOrderMultileg::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_164;
      FIX::PartySubID PartySubID_164("STRING_1866597933");
      noPartySubIDs_1_1_0.set(PartySubID_164);
      PtysSubGrp_NoPartySubIDs_164.insert(PartySubID_164.getString());
      FIX::PartySubIDType PartySubIDType_164(33);
      noPartySubIDs_1_1_0.set(PartySubIDType_164);
      PtysSubGrp_NoPartySubIDs_164.insert(PartySubIDType_164.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_164);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_165;
      FIX::PartySubID PartySubID_165("STRING_1071060587");
      noPartySubIDs_1_1_1.set(PartySubID_165);
      PtysSubGrp_NoPartySubIDs_165.insert(PartySubID_165.getString());
      FIX::PartySubIDType PartySubIDType_165(33);
      noPartySubIDs_1_1_1.set(PartySubIDType_165);
      PtysSubGrp_NoPartySubIDs_165.insert(PartySubIDType_165.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_165);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  // PegInstructions
  multiset<string> PegInstructions_5;
  FIX::PegLimitType PegLimitType_5(0);
  msg.set(PegLimitType_5);
  PegInstructions_5.insert(PegLimitType_5.getString());
  FIX::PegMoveType PegMoveType_5(1);
  msg.set(PegMoveType_5);
  PegInstructions_5.insert(PegMoveType_5.getString());
  FIX::PegOffsetType PegOffsetType_5(3);
  msg.set(PegOffsetType_5);
  PegInstructions_5.insert(PegOffsetType_5.getString());
  FIX::PegOffsetValue PegOffsetValue_5;
  PegOffsetValue_5.setString("16563986");
  msg.set(PegOffsetValue_5);
  PegInstructions_5.insert(PegOffsetValue_5.getString());
  FIX::PegPriceType PegPriceType_5(5);
  msg.set(PegPriceType_5);
  PegInstructions_5.insert(PegPriceType_5.getString());
  FIX::PegRoundDirection PegRoundDirection_5(2);
  msg.set(PegRoundDirection_5);
  PegInstructions_5.insert(PegRoundDirection_5.getString());
  FIX::PegScope PegScope_5(4);
  msg.set(PegScope_5);
  PegInstructions_5.insert(PegScope_5.getString());
  FIX::PegSecurityDesc PegSecurityDesc_5("STRING_2107980845");
  msg.set(PegSecurityDesc_5);
  PegInstructions_5.insert(PegSecurityDesc_5.getString());
  FIX::PegSecurityID PegSecurityID_5("STRING_65995217");
  msg.set(PegSecurityID_5);
  PegInstructions_5.insert(PegSecurityID_5.getString());
  FIX::PegSecurityIDSource PegSecurityIDSource_5("STRING_2069582181");
  msg.set(PegSecurityIDSource_5);
  PegInstructions_5.insert(PegSecurityIDSource_5.getString());
  FIX::PegSymbol PegSymbol_5("STRING_343107986");
  msg.set(PegSymbol_5);
  PegInstructions_5.insert(PegSymbol_5.getString());
  all_values.push_back(PegInstructions_5);

  // PreAllocMlegGrp
  // Group PreAllocMlegGrp.NoAllocs
  {
    FIX50SP2::NewOrderMultileg::NoAllocs noAllocs_0_0;
    // PreAllocMlegGrp.NoAllocs
    multiset<string> PreAllocMlegGrp_NoAllocs_2;
    FIX::AllocAccount AllocAccount_27("STRING_685879679");
    noAllocs_0_0.set(AllocAccount_27);
    PreAllocMlegGrp_NoAllocs_2.insert(AllocAccount_27.getString());
    FIX::AllocAcctIDSource AllocAcctIDSource_27(2022248487);
    noAllocs_0_0.set(AllocAcctIDSource_27);
    PreAllocMlegGrp_NoAllocs_2.insert(AllocAcctIDSource_27.getString());
    FIX::AllocQty AllocQty_26;
    AllocQty_26.setString("8278455");
    noAllocs_0_0.set(AllocQty_26);
    PreAllocMlegGrp_NoAllocs_2.insert(AllocQty_26.getString());
    FIX::AllocSettlCurrency AllocSettlCurrency_22("USD");
    noAllocs_0_0.set(AllocSettlCurrency_22);
    PreAllocMlegGrp_NoAllocs_2.insert(AllocSettlCurrency_22.getString());
    FIX::IndividualAllocID IndividualAllocID_27("STRING_932453721");
    noAllocs_0_0.set(IndividualAllocID_27);
    PreAllocMlegGrp_NoAllocs_2.insert(IndividualAllocID_27.getString());
    all_values.push_back(PreAllocMlegGrp_NoAllocs_2);

    // NestedParties3
    // Group NestedParties3.NoNested3PartyIDs
    {
      FIX50SP2::NewOrderMultileg::NoAllocs::NoNested3PartyIDs noNested3PartyIDs_0_1_0;
      // NestedParties3.NoNested3PartyIDs
      multiset<string> NestedParties3_NoNested3PartyIDs_8;
      FIX::Nested3PartyID Nested3PartyID_8("STRING_954326268");
      noNested3PartyIDs_0_1_0.set(Nested3PartyID_8);
      NestedParties3_NoNested3PartyIDs_8.insert(Nested3PartyID_8.getString());
      FIX::Nested3PartyIDSource Nested3PartyIDSource_8('1');
      noNested3PartyIDs_0_1_0.set(Nested3PartyIDSource_8);
      NestedParties3_NoNested3PartyIDs_8.insert(Nested3PartyIDSource_8.getString());
      FIX::Nested3PartyRole Nested3PartyRole_8(269437547);
      noNested3PartyIDs_0_1_0.set(Nested3PartyRole_8);
      NestedParties3_NoNested3PartyIDs_8.insert(Nested3PartyRole_8.getString());
      all_values.push_back(NestedParties3_NoNested3PartyIDs_8);

      // NstdPtys3SubGrp
      // Group NstdPtys3SubGrp.NoNested3PartySubIDs
      {
        FIX50SP2::NewOrderMultileg::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_0_0_2_0;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_16;
        FIX::Nested3PartySubID Nested3PartySubID_16("STRING_508014562");
        noNested3PartySubIDs_0_0_2_0.set(Nested3PartySubID_16);
        NstdPtys3SubGrp_NoNested3PartySubIDs_16.insert(Nested3PartySubID_16.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_16(1935204967);
        noNested3PartySubIDs_0_0_2_0.set(Nested3PartySubIDType_16);
        NstdPtys3SubGrp_NoNested3PartySubIDs_16.insert(Nested3PartySubIDType_16.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_16);

        noNested3PartyIDs_0_1_0.addGroup(noNested3PartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::NewOrderMultileg::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_0_0_2_1;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_17;
        FIX::Nested3PartySubID Nested3PartySubID_17("STRING_7350441");
        noNested3PartySubIDs_0_0_2_1.set(Nested3PartySubID_17);
        NstdPtys3SubGrp_NoNested3PartySubIDs_17.insert(Nested3PartySubID_17.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_17(499699393);
        noNested3PartySubIDs_0_0_2_1.set(Nested3PartySubIDType_17);
        NstdPtys3SubGrp_NoNested3PartySubIDs_17.insert(Nested3PartySubIDType_17.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_17);

        noNested3PartyIDs_0_1_0.addGroup(noNested3PartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::NewOrderMultileg::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_0_0_2_2;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_18;
        FIX::Nested3PartySubID Nested3PartySubID_18("STRING_1654319252");
        noNested3PartySubIDs_0_0_2_2.set(Nested3PartySubID_18);
        NstdPtys3SubGrp_NoNested3PartySubIDs_18.insert(Nested3PartySubID_18.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_18(1470090521);
        noNested3PartySubIDs_0_0_2_2.set(Nested3PartySubIDType_18);
        NstdPtys3SubGrp_NoNested3PartySubIDs_18.insert(Nested3PartySubIDType_18.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_18);

        noNested3PartyIDs_0_1_0.addGroup(noNested3PartySubIDs_0_0_2_2);
      }
      noAllocs_0_0.addGroup(noNested3PartyIDs_0_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoAllocs::NoNested3PartyIDs noNested3PartyIDs_0_1_1;
      // NestedParties3.NoNested3PartyIDs
      multiset<string> NestedParties3_NoNested3PartyIDs_9;
      FIX::Nested3PartyID Nested3PartyID_9("STRING_1570759980");
      noNested3PartyIDs_0_1_1.set(Nested3PartyID_9);
      NestedParties3_NoNested3PartyIDs_9.insert(Nested3PartyID_9.getString());
      FIX::Nested3PartyIDSource Nested3PartyIDSource_9('2');
      noNested3PartyIDs_0_1_1.set(Nested3PartyIDSource_9);
      NestedParties3_NoNested3PartyIDs_9.insert(Nested3PartyIDSource_9.getString());
      FIX::Nested3PartyRole Nested3PartyRole_9(81193171);
      noNested3PartyIDs_0_1_1.set(Nested3PartyRole_9);
      NestedParties3_NoNested3PartyIDs_9.insert(Nested3PartyRole_9.getString());
      all_values.push_back(NestedParties3_NoNested3PartyIDs_9);

      // NstdPtys3SubGrp
      // Group NstdPtys3SubGrp.NoNested3PartySubIDs
      {
        FIX50SP2::NewOrderMultileg::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_0_1_2_0;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_19;
        FIX::Nested3PartySubID Nested3PartySubID_19("STRING_1014390742");
        noNested3PartySubIDs_0_1_2_0.set(Nested3PartySubID_19);
        NstdPtys3SubGrp_NoNested3PartySubIDs_19.insert(Nested3PartySubID_19.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_19(1737591846);
        noNested3PartySubIDs_0_1_2_0.set(Nested3PartySubIDType_19);
        NstdPtys3SubGrp_NoNested3PartySubIDs_19.insert(Nested3PartySubIDType_19.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_19);

        noNested3PartyIDs_0_1_1.addGroup(noNested3PartySubIDs_0_1_2_0);
      }
      noAllocs_0_0.addGroup(noNested3PartyIDs_0_1_1);
    }
    {
      FIX50SP2::NewOrderMultileg::NoAllocs::NoNested3PartyIDs noNested3PartyIDs_0_1_2;
      // NestedParties3.NoNested3PartyIDs
      multiset<string> NestedParties3_NoNested3PartyIDs_10;
      FIX::Nested3PartyID Nested3PartyID_10("STRING_133521207");
      noNested3PartyIDs_0_1_2.set(Nested3PartyID_10);
      NestedParties3_NoNested3PartyIDs_10.insert(Nested3PartyID_10.getString());
      FIX::Nested3PartyIDSource Nested3PartyIDSource_10('1');
      noNested3PartyIDs_0_1_2.set(Nested3PartyIDSource_10);
      NestedParties3_NoNested3PartyIDs_10.insert(Nested3PartyIDSource_10.getString());
      FIX::Nested3PartyRole Nested3PartyRole_10(1802307265);
      noNested3PartyIDs_0_1_2.set(Nested3PartyRole_10);
      NestedParties3_NoNested3PartyIDs_10.insert(Nested3PartyRole_10.getString());
      all_values.push_back(NestedParties3_NoNested3PartyIDs_10);

      // NstdPtys3SubGrp
      // Group NstdPtys3SubGrp.NoNested3PartySubIDs
      {
        FIX50SP2::NewOrderMultileg::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_0_2_2_0;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_20;
        FIX::Nested3PartySubID Nested3PartySubID_20("STRING_1714730686");
        noNested3PartySubIDs_0_2_2_0.set(Nested3PartySubID_20);
        NstdPtys3SubGrp_NoNested3PartySubIDs_20.insert(Nested3PartySubID_20.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_20(1724405798);
        noNested3PartySubIDs_0_2_2_0.set(Nested3PartySubIDType_20);
        NstdPtys3SubGrp_NoNested3PartySubIDs_20.insert(Nested3PartySubIDType_20.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_20);

        noNested3PartyIDs_0_1_2.addGroup(noNested3PartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::NewOrderMultileg::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_0_2_2_1;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_21;
        FIX::Nested3PartySubID Nested3PartySubID_21("STRING_437126391");
        noNested3PartySubIDs_0_2_2_1.set(Nested3PartySubID_21);
        NstdPtys3SubGrp_NoNested3PartySubIDs_21.insert(Nested3PartySubID_21.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_21(1583501329);
        noNested3PartySubIDs_0_2_2_1.set(Nested3PartySubIDType_21);
        NstdPtys3SubGrp_NoNested3PartySubIDs_21.insert(Nested3PartySubIDType_21.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_21);

        noNested3PartyIDs_0_1_2.addGroup(noNested3PartySubIDs_0_2_2_1);
      }
      noAllocs_0_0.addGroup(noNested3PartyIDs_0_1_2);
    }
    msg.addGroup(noAllocs_0_0);
  }
  {
    FIX50SP2::NewOrderMultileg::NoAllocs noAllocs_0_1;
    // PreAllocMlegGrp.NoAllocs
    multiset<string> PreAllocMlegGrp_NoAllocs_3;
    FIX::AllocAccount AllocAccount_28("STRING_262801829");
    noAllocs_0_1.set(AllocAccount_28);
    PreAllocMlegGrp_NoAllocs_3.insert(AllocAccount_28.getString());
    FIX::AllocAcctIDSource AllocAcctIDSource_28(311891230);
    noAllocs_0_1.set(AllocAcctIDSource_28);
    PreAllocMlegGrp_NoAllocs_3.insert(AllocAcctIDSource_28.getString());
    FIX::AllocQty AllocQty_27;
    AllocQty_27.setString("2638632");
    noAllocs_0_1.set(AllocQty_27);
    PreAllocMlegGrp_NoAllocs_3.insert(AllocQty_27.getString());
    FIX::AllocSettlCurrency AllocSettlCurrency_23("CAN");
    noAllocs_0_1.set(AllocSettlCurrency_23);
    PreAllocMlegGrp_NoAllocs_3.insert(AllocSettlCurrency_23.getString());
    FIX::IndividualAllocID IndividualAllocID_28("STRING_1196316953");
    noAllocs_0_1.set(IndividualAllocID_28);
    PreAllocMlegGrp_NoAllocs_3.insert(IndividualAllocID_28.getString());
    all_values.push_back(PreAllocMlegGrp_NoAllocs_3);

    // NestedParties3
    // Group NestedParties3.NoNested3PartyIDs
    {
      FIX50SP2::NewOrderMultileg::NoAllocs::NoNested3PartyIDs noNested3PartyIDs_1_1_0;
      // NestedParties3.NoNested3PartyIDs
      multiset<string> NestedParties3_NoNested3PartyIDs_11;
      FIX::Nested3PartyID Nested3PartyID_11("STRING_66082497");
      noNested3PartyIDs_1_1_0.set(Nested3PartyID_11);
      NestedParties3_NoNested3PartyIDs_11.insert(Nested3PartyID_11.getString());
      FIX::Nested3PartyIDSource Nested3PartyIDSource_11('6');
      noNested3PartyIDs_1_1_0.set(Nested3PartyIDSource_11);
      NestedParties3_NoNested3PartyIDs_11.insert(Nested3PartyIDSource_11.getString());
      FIX::Nested3PartyRole Nested3PartyRole_11(1205797527);
      noNested3PartyIDs_1_1_0.set(Nested3PartyRole_11);
      NestedParties3_NoNested3PartyIDs_11.insert(Nested3PartyRole_11.getString());
      all_values.push_back(NestedParties3_NoNested3PartyIDs_11);

      // NstdPtys3SubGrp
      // Group NstdPtys3SubGrp.NoNested3PartySubIDs
      {
        FIX50SP2::NewOrderMultileg::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_1_0_2_0;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_22;
        FIX::Nested3PartySubID Nested3PartySubID_22("STRING_1171621094");
        noNested3PartySubIDs_1_0_2_0.set(Nested3PartySubID_22);
        NstdPtys3SubGrp_NoNested3PartySubIDs_22.insert(Nested3PartySubID_22.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_22(993518846);
        noNested3PartySubIDs_1_0_2_0.set(Nested3PartySubIDType_22);
        NstdPtys3SubGrp_NoNested3PartySubIDs_22.insert(Nested3PartySubIDType_22.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_22);

        noNested3PartyIDs_1_1_0.addGroup(noNested3PartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::NewOrderMultileg::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_1_0_2_1;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_23;
        FIX::Nested3PartySubID Nested3PartySubID_23("STRING_346951725");
        noNested3PartySubIDs_1_0_2_1.set(Nested3PartySubID_23);
        NstdPtys3SubGrp_NoNested3PartySubIDs_23.insert(Nested3PartySubID_23.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_23(1671320487);
        noNested3PartySubIDs_1_0_2_1.set(Nested3PartySubIDType_23);
        NstdPtys3SubGrp_NoNested3PartySubIDs_23.insert(Nested3PartySubIDType_23.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_23);

        noNested3PartyIDs_1_1_0.addGroup(noNested3PartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::NewOrderMultileg::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_1_0_2_2;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_24;
        FIX::Nested3PartySubID Nested3PartySubID_24("STRING_500354450");
        noNested3PartySubIDs_1_0_2_2.set(Nested3PartySubID_24);
        NstdPtys3SubGrp_NoNested3PartySubIDs_24.insert(Nested3PartySubID_24.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_24(1817042246);
        noNested3PartySubIDs_1_0_2_2.set(Nested3PartySubIDType_24);
        NstdPtys3SubGrp_NoNested3PartySubIDs_24.insert(Nested3PartySubIDType_24.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_24);

        noNested3PartyIDs_1_1_0.addGroup(noNested3PartySubIDs_1_0_2_2);
      }
      noAllocs_0_1.addGroup(noNested3PartyIDs_1_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoAllocs::NoNested3PartyIDs noNested3PartyIDs_1_1_1;
      // NestedParties3.NoNested3PartyIDs
      multiset<string> NestedParties3_NoNested3PartyIDs_12;
      FIX::Nested3PartyID Nested3PartyID_12("STRING_1094596819");
      noNested3PartyIDs_1_1_1.set(Nested3PartyID_12);
      NestedParties3_NoNested3PartyIDs_12.insert(Nested3PartyID_12.getString());
      FIX::Nested3PartyIDSource Nested3PartyIDSource_12('7');
      noNested3PartyIDs_1_1_1.set(Nested3PartyIDSource_12);
      NestedParties3_NoNested3PartyIDs_12.insert(Nested3PartyIDSource_12.getString());
      FIX::Nested3PartyRole Nested3PartyRole_12(1898235417);
      noNested3PartyIDs_1_1_1.set(Nested3PartyRole_12);
      NestedParties3_NoNested3PartyIDs_12.insert(Nested3PartyRole_12.getString());
      all_values.push_back(NestedParties3_NoNested3PartyIDs_12);

      // NstdPtys3SubGrp
      // Group NstdPtys3SubGrp.NoNested3PartySubIDs
      {
        FIX50SP2::NewOrderMultileg::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_1_1_2_0;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_25;
        FIX::Nested3PartySubID Nested3PartySubID_25("STRING_1733643939");
        noNested3PartySubIDs_1_1_2_0.set(Nested3PartySubID_25);
        NstdPtys3SubGrp_NoNested3PartySubIDs_25.insert(Nested3PartySubID_25.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_25(1488343615);
        noNested3PartySubIDs_1_1_2_0.set(Nested3PartySubIDType_25);
        NstdPtys3SubGrp_NoNested3PartySubIDs_25.insert(Nested3PartySubIDType_25.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_25);

        noNested3PartyIDs_1_1_1.addGroup(noNested3PartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::NewOrderMultileg::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_1_1_2_1;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_26;
        FIX::Nested3PartySubID Nested3PartySubID_26("STRING_1404141542");
        noNested3PartySubIDs_1_1_2_1.set(Nested3PartySubID_26);
        NstdPtys3SubGrp_NoNested3PartySubIDs_26.insert(Nested3PartySubID_26.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_26(1234895760);
        noNested3PartySubIDs_1_1_2_1.set(Nested3PartySubIDType_26);
        NstdPtys3SubGrp_NoNested3PartySubIDs_26.insert(Nested3PartySubIDType_26.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_26);

        noNested3PartyIDs_1_1_1.addGroup(noNested3PartySubIDs_1_1_2_1);
      }
      noAllocs_0_1.addGroup(noNested3PartyIDs_1_1_1);
    }
    msg.addGroup(noAllocs_0_1);
  }
  // StrategyParametersGrp
  // Group StrategyParametersGrp.NoStrategyParameters
  {
    FIX50SP2::NewOrderMultileg::NoStrategyParameters noStrategyParameters_0_0;
    // StrategyParametersGrp.NoStrategyParameters
    multiset<string> StrategyParametersGrp_NoStrategyParameters_13;
    FIX::StrategyParameterName StrategyParameterName_13("STRING_1498159947");
    noStrategyParameters_0_0.set(StrategyParameterName_13);
    StrategyParametersGrp_NoStrategyParameters_13.insert(StrategyParameterName_13.getString());
    FIX::StrategyParameterType StrategyParameterType_13(16);
    noStrategyParameters_0_0.set(StrategyParameterType_13);
    StrategyParametersGrp_NoStrategyParameters_13.insert(StrategyParameterType_13.getString());
    FIX::StrategyParameterValue StrategyParameterValue_13("STRING_720089382");
    noStrategyParameters_0_0.set(StrategyParameterValue_13);
    StrategyParametersGrp_NoStrategyParameters_13.insert(StrategyParameterValue_13.getString());
    all_values.push_back(StrategyParametersGrp_NoStrategyParameters_13);

    msg.addGroup(noStrategyParameters_0_0);
  }
  // TrdgSesGrp
  // Group TrdgSesGrp.NoTradingSessions
  {
    FIX50SP2::NewOrderMultileg::NoTradingSessions noTradingSessions_0_0;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_11;
    FIX::TradingSessionID TradingSessionID_49("STRING_3");
    noTradingSessions_0_0.set(TradingSessionID_49);
    TrdgSesGrp_NoTradingSessions_11.insert(TradingSessionID_49.getString());
    FIX::TradingSessionSubID TradingSessionSubID_49("STRING_2");
    noTradingSessions_0_0.set(TradingSessionSubID_49);
    TrdgSesGrp_NoTradingSessions_11.insert(TradingSessionSubID_49.getString());
    all_values.push_back(TrdgSesGrp_NoTradingSessions_11);

    msg.addGroup(noTradingSessions_0_0);
  }
  // TriggeringInstruction
  multiset<string> TriggeringInstruction_5;
  FIX::TriggerAction TriggerAction_5('3');
  msg.set(TriggerAction_5);
  TriggeringInstruction_5.insert(TriggerAction_5.getString());
  FIX::TriggerNewPrice TriggerNewPrice_5;
  TriggerNewPrice_5.setString("5020237");
  msg.set(TriggerNewPrice_5);
  TriggeringInstruction_5.insert(TriggerNewPrice_5.getString());
  FIX::TriggerNewQty TriggerNewQty_5;
  TriggerNewQty_5.setString("14544452");
  msg.set(TriggerNewQty_5);
  TriggeringInstruction_5.insert(TriggerNewQty_5.getString());
  FIX::TriggerOrderType TriggerOrderType_5('2');
  msg.set(TriggerOrderType_5);
  TriggeringInstruction_5.insert(TriggerOrderType_5.getString());
  FIX::TriggerPrice TriggerPrice_5;
  TriggerPrice_5.setString("16983406");
  msg.set(TriggerPrice_5);
  TriggeringInstruction_5.insert(TriggerPrice_5.getString());
  FIX::TriggerPriceDirection TriggerPriceDirection_5('D');
  msg.set(TriggerPriceDirection_5);
  TriggeringInstruction_5.insert(TriggerPriceDirection_5.getString());
  FIX::TriggerPriceType TriggerPriceType_5('5');
  msg.set(TriggerPriceType_5);
  TriggeringInstruction_5.insert(TriggerPriceType_5.getString());
  FIX::TriggerPriceTypeScope TriggerPriceTypeScope_5('1');
  msg.set(TriggerPriceTypeScope_5);
  TriggeringInstruction_5.insert(TriggerPriceTypeScope_5.getString());
  FIX::TriggerSecurityDesc TriggerSecurityDesc_5("STRING_1449119070");
  msg.set(TriggerSecurityDesc_5);
  TriggeringInstruction_5.insert(TriggerSecurityDesc_5.getString());
  FIX::TriggerSecurityID TriggerSecurityID_5("STRING_1764617578");
  msg.set(TriggerSecurityID_5);
  TriggeringInstruction_5.insert(TriggerSecurityID_5.getString());
  FIX::TriggerSecurityIDSource TriggerSecurityIDSource_5("STRING_1386084644");
  msg.set(TriggerSecurityIDSource_5);
  TriggeringInstruction_5.insert(TriggerSecurityIDSource_5.getString());
  FIX::TriggerSymbol TriggerSymbol_5("STRING_295154268");
  msg.set(TriggerSymbol_5);
  TriggeringInstruction_5.insert(TriggerSymbol_5.getString());
  FIX::TriggerTradingSessionID TriggerTradingSessionID_5("STRING_2111569303");
  msg.set(TriggerTradingSessionID_5);
  TriggeringInstruction_5.insert(TriggerTradingSessionID_5.getString());
  FIX::TriggerTradingSessionSubID TriggerTradingSessionSubID_5("STRING_909921483");
  msg.set(TriggerTradingSessionSubID_5);
  TriggeringInstruction_5.insert(TriggerTradingSessionSubID_5.getString());
  FIX::TriggerType TriggerType_5('3');
  msg.set(TriggerType_5);
  TriggeringInstruction_5.insert(TriggerType_5.getString());
  all_values.push_back(TriggeringInstruction_5);

  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::NewOrderMultileg::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_62;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_62("DATA_2004518303");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_62);
    UnderlyingInstrument_62.insert(EncodedUnderlyingIssuer_62.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_62(1514761915);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_62);
    UnderlyingInstrument_62.insert(EncodedUnderlyingIssuerLen_62.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_62("DATA_1531879671");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_62);
    UnderlyingInstrument_62.insert(EncodedUnderlyingSecurityDesc_62.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_62(1127654989);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_62);
    UnderlyingInstrument_62.insert(EncodedUnderlyingSecurityDescLen_62.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_62;
    UnderlyingAdjustedQuantity_62.setString("11009222");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_62);
    UnderlyingInstrument_62.insert(UnderlyingAdjustedQuantity_62.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_62;
    UnderlyingAllocationPercent_62.setString("96.380000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_62);
    UnderlyingInstrument_62.insert(UnderlyingAllocationPercent_62.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_62;
    UnderlyingAttachmentPoint_62.setString("28.830000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_62);
    UnderlyingInstrument_62.insert(UnderlyingAttachmentPoint_62.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_62("STRING_188334319");
    noUnderlyings_0_0.set(UnderlyingCFICode_62);
    UnderlyingInstrument_62.insert(UnderlyingCFICode_62.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_62("STRING_2015906871");
    noUnderlyings_0_0.set(UnderlyingCPProgram_62);
    UnderlyingInstrument_62.insert(UnderlyingCPProgram_62.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_62("STRING_1882472830");
    noUnderlyings_0_0.set(UnderlyingCPRegType_62);
    UnderlyingInstrument_62.insert(UnderlyingCPRegType_62.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_62;
    UnderlyingCapValue_62.setString("9904771");
    noUnderlyings_0_0.set(UnderlyingCapValue_62);
    UnderlyingInstrument_62.insert(UnderlyingCapValue_62.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_62;
    UnderlyingCashAmount_62.setString("5885126");
    noUnderlyings_0_0.set(UnderlyingCashAmount_62);
    UnderlyingInstrument_62.insert(UnderlyingCashAmount_62.getString());
    FIX::UnderlyingCashType UnderlyingCashType_62("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_62);
    UnderlyingInstrument_62.insert(UnderlyingCashType_62.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_62;
    UnderlyingContractMultiplier_62.setString("12286375");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_62);
    UnderlyingInstrument_62.insert(UnderlyingContractMultiplier_62.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_62(1571403817);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_62);
    UnderlyingInstrument_62.insert(UnderlyingContractMultiplierUnit_62.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_62("COUNTRY_1769969441");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_62);
    UnderlyingInstrument_62.insert(UnderlyingCountryOfIssue_62.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_62("LOCALMKTDATE_1730661310");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_62);
    UnderlyingInstrument_62.insert(UnderlyingCouponPaymentDate_62.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_62;
    UnderlyingCouponRate_62.setString("53.800000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_62);
    UnderlyingInstrument_62.insert(UnderlyingCouponRate_62.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_62("STRING_981419590");
    noUnderlyings_0_0.set(UnderlyingCreditRating_62);
    UnderlyingInstrument_62.insert(UnderlyingCreditRating_62.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_62("CHF");
    noUnderlyings_0_0.set(UnderlyingCurrency_62);
    UnderlyingInstrument_62.insert(UnderlyingCurrency_62.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_62;
    UnderlyingCurrentValue_62.setString("2589522");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_62);
    UnderlyingInstrument_62.insert(UnderlyingCurrentValue_62.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_62;
    UnderlyingDetachmentPoint_62.setString("18.770000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_62);
    UnderlyingInstrument_62.insert(UnderlyingDetachmentPoint_62.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_62;
    UnderlyingDirtyPrice_62.setString("4233223");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_62);
    UnderlyingInstrument_62.insert(UnderlyingDirtyPrice_62.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_62;
    UnderlyingEndPrice_62.setString("20235698");
    noUnderlyings_0_0.set(UnderlyingEndPrice_62);
    UnderlyingInstrument_62.insert(UnderlyingEndPrice_62.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_62;
    UnderlyingEndValue_62.setString("7345828");
    noUnderlyings_0_0.set(UnderlyingEndValue_62);
    UnderlyingInstrument_62.insert(UnderlyingEndValue_62.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_62(718476613);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_62);
    UnderlyingInstrument_62.insert(UnderlyingExerciseStyle_62.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_62;
    UnderlyingFXRate_62.setString("19876554");
    noUnderlyings_0_0.set(UnderlyingFXRate_62);
    UnderlyingInstrument_62.insert(UnderlyingFXRate_62.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_62('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_62);
    UnderlyingInstrument_62.insert(UnderlyingFXRateCalc_62.getString());
    FIX::UnderlyingFactor UnderlyingFactor_62;
    UnderlyingFactor_62.setString("15139853");
    noUnderlyings_0_0.set(UnderlyingFactor_62);
    UnderlyingInstrument_62.insert(UnderlyingFactor_62.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_62(1621299723);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_62);
    UnderlyingInstrument_62.insert(UnderlyingFlowScheduleType_62.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_62("STRING_1501539011");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_62);
    UnderlyingInstrument_62.insert(UnderlyingInstrRegistry_62.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_62("LOCALMKTDATE_881263599");
    noUnderlyings_0_0.set(UnderlyingIssueDate_62);
    UnderlyingInstrument_62.insert(UnderlyingIssueDate_62.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_62("STRING_1005695746");
    noUnderlyings_0_0.set(UnderlyingIssuer_62);
    UnderlyingInstrument_62.insert(UnderlyingIssuer_62.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_62("STRING_481710353");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_62);
    UnderlyingInstrument_62.insert(UnderlyingLocaleOfIssue_62.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_62("LOCALMKTDATE_1982185805");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_62);
    UnderlyingInstrument_62.insert(UnderlyingMaturityDate_62.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_62("MONTHYEAR_1878435385");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_62);
    UnderlyingInstrument_62.insert(UnderlyingMaturityMonthYear_62.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_62("TZTIMEONLY_866023236");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_62);
    UnderlyingInstrument_62.insert(UnderlyingMaturityTime_62.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_62;
    UnderlyingNotionalPercentageOutstanding_62.setString("64.760000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_62);
    UnderlyingInstrument_62.insert(UnderlyingNotionalPercentageOutstanding_62.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_62('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_62);
    UnderlyingInstrument_62.insert(UnderlyingOptAttribute_62.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_62;
    UnderlyingOriginalNotionalPercentageOutstanding_62.setString("24.190000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_62);
    UnderlyingInstrument_62.insert(UnderlyingOriginalNotionalPercentageOutstanding_62.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_62("STRING_1013513594");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_62);
    UnderlyingInstrument_62.insert(UnderlyingPriceUnitOfMeasure_62.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_62;
    UnderlyingPriceUnitOfMeasureQty_62.setString("1878875");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_62);
    UnderlyingInstrument_62.insert(UnderlyingPriceUnitOfMeasureQty_62.getString());
    FIX::UnderlyingProduct UnderlyingProduct_62(123804291);
    noUnderlyings_0_0.set(UnderlyingProduct_62);
    UnderlyingInstrument_62.insert(UnderlyingProduct_62.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_62(94667544);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_62);
    UnderlyingInstrument_62.insert(UnderlyingPutOrCall_62.getString());
    FIX::UnderlyingPx UnderlyingPx_62;
    UnderlyingPx_62.setString("17592913");
    noUnderlyings_0_0.set(UnderlyingPx_62);
    UnderlyingInstrument_62.insert(UnderlyingPx_62.getString());
    FIX::UnderlyingQty UnderlyingQty_62;
    UnderlyingQty_62.setString("18937737");
    noUnderlyings_0_0.set(UnderlyingQty_62);
    UnderlyingInstrument_62.insert(UnderlyingQty_62.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_62("LOCALMKTDATE_1825328854");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_62);
    UnderlyingInstrument_62.insert(UnderlyingRedemptionDate_62.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_62("STRING_490173114");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_62);
    UnderlyingInstrument_62.insert(UnderlyingRepoCollateralSecurityType_62.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_62;
    UnderlyingRepurchaseRate_62.setString("96.750000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_62);
    UnderlyingInstrument_62.insert(UnderlyingRepurchaseRate_62.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_62(959363534);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_62);
    UnderlyingInstrument_62.insert(UnderlyingRepurchaseTerm_62.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_62("STRING_1611860037");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_62);
    UnderlyingInstrument_62.insert(UnderlyingRestructuringType_62.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_62("STRING_986661912");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_62);
    UnderlyingInstrument_62.insert(UnderlyingSecurityDesc_62.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_62("EXCHANGE_307861763");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_62);
    UnderlyingInstrument_62.insert(UnderlyingSecurityExchange_62.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_62("STRING_2035182382");
    noUnderlyings_0_0.set(UnderlyingSecurityID_62);
    UnderlyingInstrument_62.insert(UnderlyingSecurityID_62.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_62("STRING_862748079");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_62);
    UnderlyingInstrument_62.insert(UnderlyingSecurityIDSource_62.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_62("STRING_1042444636");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_62);
    UnderlyingInstrument_62.insert(UnderlyingSecuritySubType_62.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_62("STRING_606175347");
    noUnderlyings_0_0.set(UnderlyingSecurityType_62);
    UnderlyingInstrument_62.insert(UnderlyingSecurityType_62.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_62("STRING_702919901");
    noUnderlyings_0_0.set(UnderlyingSeniority_62);
    UnderlyingInstrument_62.insert(UnderlyingSeniority_62.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_62("STRING_539465344");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_62);
    UnderlyingInstrument_62.insert(UnderlyingSettlMethod_62.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_62(4);
    noUnderlyings_0_0.set(UnderlyingSettlementType_62);
    UnderlyingInstrument_62.insert(UnderlyingSettlementType_62.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_62;
    UnderlyingStartValue_62.setString("1767359");
    noUnderlyings_0_0.set(UnderlyingStartValue_62);
    UnderlyingInstrument_62.insert(UnderlyingStartValue_62.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_62("STRING_2041004356");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_62);
    UnderlyingInstrument_62.insert(UnderlyingStateOrProvinceOfIssue_62.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_62("CAN");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_62);
    UnderlyingInstrument_62.insert(UnderlyingStrikeCurrency_62.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_62;
    UnderlyingStrikePrice_62.setString("3752310");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_62);
    UnderlyingInstrument_62.insert(UnderlyingStrikePrice_62.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_62("STRING_688642787");
    noUnderlyings_0_0.set(UnderlyingSymbol_62);
    UnderlyingInstrument_62.insert(UnderlyingSymbol_62.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_62("STRING_913383460");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_62);
    UnderlyingInstrument_62.insert(UnderlyingSymbolSfx_62.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_62("STRING_1241254297");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_62);
    UnderlyingInstrument_62.insert(UnderlyingTimeUnit_62.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_62("STRING_711679264");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_62);
    UnderlyingInstrument_62.insert(UnderlyingUnitOfMeasure_62.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_62;
    UnderlyingUnitOfMeasureQty_62.setString("5127584");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_62);
    UnderlyingInstrument_62.insert(UnderlyingUnitOfMeasureQty_62.getString());
    all_values.push_back(UnderlyingInstrument_62);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_130;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_130("STRING_1725192858");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_130);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_130.insert(UnderlyingSecurityAltID_130.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_130("STRING_700645985");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_130);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_130.insert(UnderlyingSecurityAltIDSource_130.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_130);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_131;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_131("STRING_1966071008");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_131);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_131.insert(UnderlyingSecurityAltID_131.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_131("STRING_1819860403");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_131);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_131.insert(UnderlyingSecurityAltIDSource_131.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_131);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_119;
      FIX::UnderlyingStipType UnderlyingStipType_119("STRING_1712361092");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_119);
      UnderlyingStipulations_NoUnderlyingStips_119.insert(UnderlyingStipType_119.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_119("STRING_1497705609");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_119);
      UnderlyingStipulations_NoUnderlyingStips_119.insert(UnderlyingStipValue_119.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_119);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_132;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_132("STRING_292587119");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_132);
      UndlyInstrumentParties_NoUndlyInstrumentParties_132.insert(UnderlyingInstrumentPartyID_132.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_132('3');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_132);
      UndlyInstrumentParties_NoUndlyInstrumentParties_132.insert(UnderlyingInstrumentPartyIDSource_132.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_132(267003224);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_132);
      UndlyInstrumentParties_NoUndlyInstrumentParties_132.insert(UnderlyingInstrumentPartyRole_132.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_132);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_268;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_268("STRING_617447258");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_268);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_268.insert(UnderlyingInstrumentPartySubID_268.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_268(154701958);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_268);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_268.insert(UnderlyingInstrumentPartySubIDType_268.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_268);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_269;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_269("STRING_2141997110");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_269);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_269.insert(UnderlyingInstrumentPartySubID_269.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_269(1659891894);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_269);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_269.insert(UnderlyingInstrumentPartySubIDType_269.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_269);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_270;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_270("STRING_760877306");
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubID_270);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_270.insert(UnderlyingInstrumentPartySubID_270.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_270(697433363);
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubIDType_270);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_270.insert(UnderlyingInstrumentPartySubIDType_270.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_270);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::NewOrderMultileg::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_63;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_63("DATA_51873591");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_63);
    UnderlyingInstrument_63.insert(EncodedUnderlyingIssuer_63.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_63(733554337);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_63);
    UnderlyingInstrument_63.insert(EncodedUnderlyingIssuerLen_63.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_63("DATA_874169340");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_63);
    UnderlyingInstrument_63.insert(EncodedUnderlyingSecurityDesc_63.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_63(2092877947);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_63);
    UnderlyingInstrument_63.insert(EncodedUnderlyingSecurityDescLen_63.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_63;
    UnderlyingAdjustedQuantity_63.setString("15874949");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_63);
    UnderlyingInstrument_63.insert(UnderlyingAdjustedQuantity_63.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_63;
    UnderlyingAllocationPercent_63.setString("10.630000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_63);
    UnderlyingInstrument_63.insert(UnderlyingAllocationPercent_63.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_63;
    UnderlyingAttachmentPoint_63.setString("53.600000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_63);
    UnderlyingInstrument_63.insert(UnderlyingAttachmentPoint_63.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_63("STRING_128654106");
    noUnderlyings_0_1.set(UnderlyingCFICode_63);
    UnderlyingInstrument_63.insert(UnderlyingCFICode_63.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_63("STRING_822500875");
    noUnderlyings_0_1.set(UnderlyingCPProgram_63);
    UnderlyingInstrument_63.insert(UnderlyingCPProgram_63.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_63("STRING_1561879657");
    noUnderlyings_0_1.set(UnderlyingCPRegType_63);
    UnderlyingInstrument_63.insert(UnderlyingCPRegType_63.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_63;
    UnderlyingCapValue_63.setString("8403333");
    noUnderlyings_0_1.set(UnderlyingCapValue_63);
    UnderlyingInstrument_63.insert(UnderlyingCapValue_63.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_63;
    UnderlyingCashAmount_63.setString("13352592");
    noUnderlyings_0_1.set(UnderlyingCashAmount_63);
    UnderlyingInstrument_63.insert(UnderlyingCashAmount_63.getString());
    FIX::UnderlyingCashType UnderlyingCashType_63("STRING_FIXED");
    noUnderlyings_0_1.set(UnderlyingCashType_63);
    UnderlyingInstrument_63.insert(UnderlyingCashType_63.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_63;
    UnderlyingContractMultiplier_63.setString("4180425");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_63);
    UnderlyingInstrument_63.insert(UnderlyingContractMultiplier_63.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_63(2035905280);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_63);
    UnderlyingInstrument_63.insert(UnderlyingContractMultiplierUnit_63.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_63("COUNTRY_1075250086");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_63);
    UnderlyingInstrument_63.insert(UnderlyingCountryOfIssue_63.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_63("LOCALMKTDATE_90419336");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_63);
    UnderlyingInstrument_63.insert(UnderlyingCouponPaymentDate_63.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_63;
    UnderlyingCouponRate_63.setString("53.520000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_63);
    UnderlyingInstrument_63.insert(UnderlyingCouponRate_63.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_63("STRING_640127530");
    noUnderlyings_0_1.set(UnderlyingCreditRating_63);
    UnderlyingInstrument_63.insert(UnderlyingCreditRating_63.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_63("CHF");
    noUnderlyings_0_1.set(UnderlyingCurrency_63);
    UnderlyingInstrument_63.insert(UnderlyingCurrency_63.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_63;
    UnderlyingCurrentValue_63.setString("9327146");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_63);
    UnderlyingInstrument_63.insert(UnderlyingCurrentValue_63.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_63;
    UnderlyingDetachmentPoint_63.setString("4.410000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_63);
    UnderlyingInstrument_63.insert(UnderlyingDetachmentPoint_63.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_63;
    UnderlyingDirtyPrice_63.setString("12705054");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_63);
    UnderlyingInstrument_63.insert(UnderlyingDirtyPrice_63.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_63;
    UnderlyingEndPrice_63.setString("644800");
    noUnderlyings_0_1.set(UnderlyingEndPrice_63);
    UnderlyingInstrument_63.insert(UnderlyingEndPrice_63.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_63;
    UnderlyingEndValue_63.setString("3676740");
    noUnderlyings_0_1.set(UnderlyingEndValue_63);
    UnderlyingInstrument_63.insert(UnderlyingEndValue_63.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_63(1425207369);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_63);
    UnderlyingInstrument_63.insert(UnderlyingExerciseStyle_63.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_63;
    UnderlyingFXRate_63.setString("589934");
    noUnderlyings_0_1.set(UnderlyingFXRate_63);
    UnderlyingInstrument_63.insert(UnderlyingFXRate_63.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_63('D');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_63);
    UnderlyingInstrument_63.insert(UnderlyingFXRateCalc_63.getString());
    FIX::UnderlyingFactor UnderlyingFactor_63;
    UnderlyingFactor_63.setString("386010");
    noUnderlyings_0_1.set(UnderlyingFactor_63);
    UnderlyingInstrument_63.insert(UnderlyingFactor_63.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_63(756426859);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_63);
    UnderlyingInstrument_63.insert(UnderlyingFlowScheduleType_63.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_63("STRING_2079439537");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_63);
    UnderlyingInstrument_63.insert(UnderlyingInstrRegistry_63.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_63("LOCALMKTDATE_772155364");
    noUnderlyings_0_1.set(UnderlyingIssueDate_63);
    UnderlyingInstrument_63.insert(UnderlyingIssueDate_63.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_63("STRING_1630596199");
    noUnderlyings_0_1.set(UnderlyingIssuer_63);
    UnderlyingInstrument_63.insert(UnderlyingIssuer_63.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_63("STRING_2024833836");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_63);
    UnderlyingInstrument_63.insert(UnderlyingLocaleOfIssue_63.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_63("LOCALMKTDATE_212166683");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_63);
    UnderlyingInstrument_63.insert(UnderlyingMaturityDate_63.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_63("MONTHYEAR_1539713614");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_63);
    UnderlyingInstrument_63.insert(UnderlyingMaturityMonthYear_63.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_63("TZTIMEONLY_197975548");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_63);
    UnderlyingInstrument_63.insert(UnderlyingMaturityTime_63.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_63;
    UnderlyingNotionalPercentageOutstanding_63.setString("7.900000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_63);
    UnderlyingInstrument_63.insert(UnderlyingNotionalPercentageOutstanding_63.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_63('2');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_63);
    UnderlyingInstrument_63.insert(UnderlyingOptAttribute_63.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_63;
    UnderlyingOriginalNotionalPercentageOutstanding_63.setString("52.050000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_63);
    UnderlyingInstrument_63.insert(UnderlyingOriginalNotionalPercentageOutstanding_63.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_63("STRING_1181154160");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_63);
    UnderlyingInstrument_63.insert(UnderlyingPriceUnitOfMeasure_63.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_63;
    UnderlyingPriceUnitOfMeasureQty_63.setString("15499901");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_63);
    UnderlyingInstrument_63.insert(UnderlyingPriceUnitOfMeasureQty_63.getString());
    FIX::UnderlyingProduct UnderlyingProduct_63(869034283);
    noUnderlyings_0_1.set(UnderlyingProduct_63);
    UnderlyingInstrument_63.insert(UnderlyingProduct_63.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_63(1599196741);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_63);
    UnderlyingInstrument_63.insert(UnderlyingPutOrCall_63.getString());
    FIX::UnderlyingPx UnderlyingPx_63;
    UnderlyingPx_63.setString("14384117");
    noUnderlyings_0_1.set(UnderlyingPx_63);
    UnderlyingInstrument_63.insert(UnderlyingPx_63.getString());
    FIX::UnderlyingQty UnderlyingQty_63;
    UnderlyingQty_63.setString("19442843");
    noUnderlyings_0_1.set(UnderlyingQty_63);
    UnderlyingInstrument_63.insert(UnderlyingQty_63.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_63("LOCALMKTDATE_1689616077");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_63);
    UnderlyingInstrument_63.insert(UnderlyingRedemptionDate_63.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_63("STRING_1639287121");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_63);
    UnderlyingInstrument_63.insert(UnderlyingRepoCollateralSecurityType_63.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_63;
    UnderlyingRepurchaseRate_63.setString("82.520000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_63);
    UnderlyingInstrument_63.insert(UnderlyingRepurchaseRate_63.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_63(1130257375);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_63);
    UnderlyingInstrument_63.insert(UnderlyingRepurchaseTerm_63.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_63("STRING_495305660");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_63);
    UnderlyingInstrument_63.insert(UnderlyingRestructuringType_63.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_63("STRING_1369642902");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_63);
    UnderlyingInstrument_63.insert(UnderlyingSecurityDesc_63.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_63("EXCHANGE_880484168");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_63);
    UnderlyingInstrument_63.insert(UnderlyingSecurityExchange_63.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_63("STRING_1765811071");
    noUnderlyings_0_1.set(UnderlyingSecurityID_63);
    UnderlyingInstrument_63.insert(UnderlyingSecurityID_63.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_63("STRING_1434122935");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_63);
    UnderlyingInstrument_63.insert(UnderlyingSecurityIDSource_63.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_63("STRING_1248158219");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_63);
    UnderlyingInstrument_63.insert(UnderlyingSecuritySubType_63.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_63("STRING_1043534793");
    noUnderlyings_0_1.set(UnderlyingSecurityType_63);
    UnderlyingInstrument_63.insert(UnderlyingSecurityType_63.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_63("STRING_1493116431");
    noUnderlyings_0_1.set(UnderlyingSeniority_63);
    UnderlyingInstrument_63.insert(UnderlyingSeniority_63.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_63("STRING_1128240517");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_63);
    UnderlyingInstrument_63.insert(UnderlyingSettlMethod_63.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_63(2);
    noUnderlyings_0_1.set(UnderlyingSettlementType_63);
    UnderlyingInstrument_63.insert(UnderlyingSettlementType_63.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_63;
    UnderlyingStartValue_63.setString("1020596");
    noUnderlyings_0_1.set(UnderlyingStartValue_63);
    UnderlyingInstrument_63.insert(UnderlyingStartValue_63.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_63("STRING_1060196406");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_63);
    UnderlyingInstrument_63.insert(UnderlyingStateOrProvinceOfIssue_63.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_63("JPY");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_63);
    UnderlyingInstrument_63.insert(UnderlyingStrikeCurrency_63.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_63;
    UnderlyingStrikePrice_63.setString("9375465");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_63);
    UnderlyingInstrument_63.insert(UnderlyingStrikePrice_63.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_63("STRING_2066457868");
    noUnderlyings_0_1.set(UnderlyingSymbol_63);
    UnderlyingInstrument_63.insert(UnderlyingSymbol_63.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_63("STRING_1124885809");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_63);
    UnderlyingInstrument_63.insert(UnderlyingSymbolSfx_63.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_63("STRING_1135522142");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_63);
    UnderlyingInstrument_63.insert(UnderlyingTimeUnit_63.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_63("STRING_259795010");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_63);
    UnderlyingInstrument_63.insert(UnderlyingUnitOfMeasure_63.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_63;
    UnderlyingUnitOfMeasureQty_63.setString("13396166");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_63);
    UnderlyingInstrument_63.insert(UnderlyingUnitOfMeasureQty_63.getString());
    all_values.push_back(UnderlyingInstrument_63);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_132;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_132("STRING_1440949171");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_132);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_132.insert(UnderlyingSecurityAltID_132.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_132("STRING_742123139");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_132);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_132.insert(UnderlyingSecurityAltIDSource_132.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_132);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_120;
      FIX::UnderlyingStipType UnderlyingStipType_120("STRING_892662264");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_120);
      UnderlyingStipulations_NoUnderlyingStips_120.insert(UnderlyingStipType_120.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_120("STRING_33051260");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_120);
      UnderlyingStipulations_NoUnderlyingStips_120.insert(UnderlyingStipValue_120.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_120);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_121;
      FIX::UnderlyingStipType UnderlyingStipType_121("STRING_1413728705");
      noUnderlyingStips_1_1_1.set(UnderlyingStipType_121);
      UnderlyingStipulations_NoUnderlyingStips_121.insert(UnderlyingStipType_121.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_121("STRING_434794694");
      noUnderlyingStips_1_1_1.set(UnderlyingStipValue_121);
      UnderlyingStipulations_NoUnderlyingStips_121.insert(UnderlyingStipValue_121.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_121);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_133;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_133("STRING_1850656957");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_133);
      UndlyInstrumentParties_NoUndlyInstrumentParties_133.insert(UnderlyingInstrumentPartyID_133.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_133('1');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_133);
      UndlyInstrumentParties_NoUndlyInstrumentParties_133.insert(UnderlyingInstrumentPartyIDSource_133.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_133(20160394);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_133);
      UndlyInstrumentParties_NoUndlyInstrumentParties_133.insert(UnderlyingInstrumentPartyRole_133.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_133);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_271;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_271("STRING_298052589");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_271);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_271.insert(UnderlyingInstrumentPartySubID_271.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_271(1785971465);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_271);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_271.insert(UnderlyingInstrumentPartySubIDType_271.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_271);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_272;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_272("STRING_359455498");
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubID_272);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_272.insert(UnderlyingInstrumentPartySubID_272.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_272(1546210808);
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubIDType_272);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_272.insert(UnderlyingInstrumentPartySubIDType_272.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_272);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_273;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_273("STRING_682022610");
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubID_273);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_273.insert(UnderlyingInstrumentPartySubID_273.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_273(1852571930);
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubIDType_273);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_273.insert(UnderlyingInstrumentPartySubIDType_273.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_273);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_2);
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
