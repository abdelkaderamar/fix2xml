#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/MultilegOrderCancelReplace.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( MultilegOrderCancelReplace, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::MultilegOrderCancelReplace msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> MultilegOrderCancelReplace_0;
  FIX::Account Account_16("STRING_971610358");
  msg.set(Account_16);
  MultilegOrderCancelReplace_0.insert(Account_16.getString());
  FIX::AccountType AccountType_13(3);
  msg.set(AccountType_13);
  MultilegOrderCancelReplace_0.insert(AccountType_13.getString());
  FIX::AcctIDSource AcctIDSource_9(99);
  msg.set(AcctIDSource_9);
  MultilegOrderCancelReplace_0.insert(AcctIDSource_9.getString());
  FIX::AllocID AllocID_11("STRING_1829888834");
  msg.set(AllocID_11);
  MultilegOrderCancelReplace_0.insert(AllocID_11.getString());
  FIX::BookingType BookingType_21(1);
  msg.set(BookingType_21);
  MultilegOrderCancelReplace_0.insert(BookingType_21.getString());
  FIX::BookingUnit BookingUnit_4('1');
  msg.set(BookingUnit_4);
  MultilegOrderCancelReplace_0.insert(BookingUnit_4.getString());
  FIX::CancellationRights CancellationRights_2('N');
  msg.set(CancellationRights_2);
  MultilegOrderCancelReplace_0.insert(CancellationRights_2.getString());
  FIX::CashMargin CashMargin_4('3');
  msg.set(CashMargin_4);
  MultilegOrderCancelReplace_0.insert(CashMargin_4.getString());
  FIX::ClOrdID ClOrdID_25("STRING_1793018060");
  msg.set(ClOrdID_25);
  MultilegOrderCancelReplace_0.insert(ClOrdID_25.getString());
  FIX::ClOrdLinkID ClOrdLinkID_5("STRING_1717614634");
  msg.set(ClOrdLinkID_5);
  MultilegOrderCancelReplace_0.insert(ClOrdLinkID_5.getString());
  FIX::ClearingFeeIndicator ClearingFeeIndicator_8("STRING_3");
  msg.set(ClearingFeeIndicator_8);
  MultilegOrderCancelReplace_0.insert(ClearingFeeIndicator_8.getString());
  FIX::ComplianceID ComplianceID_3("STRING_1122488723");
  msg.set(ComplianceID_3);
  MultilegOrderCancelReplace_0.insert(ComplianceID_3.getString());
  FIX::CoveredOrUncovered CoveredOrUncovered_3(1);
  msg.set(CoveredOrUncovered_3);
  MultilegOrderCancelReplace_0.insert(CoveredOrUncovered_3.getString());
  FIX::Currency Currency_44("CAN");
  msg.set(Currency_44);
  MultilegOrderCancelReplace_0.insert(Currency_44.getString());
  FIX::CustOrderCapacity CustOrderCapacity_7(2);
  msg.set(CustOrderCapacity_7);
  MultilegOrderCancelReplace_0.insert(CustOrderCapacity_7.getString());
  FIX::DayBookingInst DayBookingInst_4('1');
  msg.set(DayBookingInst_4);
  MultilegOrderCancelReplace_0.insert(DayBookingInst_4.getString());
  FIX::Designation Designation_2("STRING_1023377027");
  msg.set(Designation_2);
  MultilegOrderCancelReplace_0.insert(Designation_2.getString());
  FIX::EffectiveTime EffectiveTime_2(FIX::UTCTIMESTAMP(18, 46, 2, 15, 8, 2005));
  msg.set(EffectiveTime_2);
  MultilegOrderCancelReplace_0.insert(EffectiveTime_2.getString());
  FIX::EncodedText EncodedText_53("DATA_1649323430");
  msg.set(EncodedText_53);
  MultilegOrderCancelReplace_0.insert(EncodedText_53.getString());
  FIX::EncodedTextLen EncodedTextLen_53(597520930);
  msg.set(EncodedTextLen_53);
  MultilegOrderCancelReplace_0.insert(EncodedTextLen_53.getString());
  FIX::ExDestination ExDestination_1("EXCHANGE_499389647");
  msg.set(ExDestination_1);
  MultilegOrderCancelReplace_0.insert(ExDestination_1.getString());
  FIX::ExDestinationIDSource ExDestinationIDSource_1('G');
  msg.set(ExDestinationIDSource_1);
  MultilegOrderCancelReplace_0.insert(ExDestinationIDSource_1.getString());
  FIX::ExecInst ExecInst_5("MULTIPLECHARVALUE_n");
  msg.set(ExecInst_5);
  MultilegOrderCancelReplace_0.insert(ExecInst_5.getString());
  FIX::ExpireDate ExpireDate_6("LOCALMKTDATE_406150005");
  msg.set(ExpireDate_6);
  MultilegOrderCancelReplace_0.insert(ExpireDate_6.getString());
  FIX::ExpireTime ExpireTime_7(FIX::UTCTIMESTAMP(22, 51, 40, 1, 12, 2005));
  msg.set(ExpireTime_7);
  MultilegOrderCancelReplace_0.insert(ExpireTime_7.getString());
  FIX::ForexReq ForexReq_4(true);
  msg.set(ForexReq_4);
  MultilegOrderCancelReplace_0.insert(ForexReq_4.getString());
  FIX::GTBookingInst GTBookingInst_2(2);
  msg.set(GTBookingInst_2);
  MultilegOrderCancelReplace_0.insert(GTBookingInst_2.getString());
  FIX::HandlInst HandlInst_2('2');
  msg.set(HandlInst_2);
  MultilegOrderCancelReplace_0.insert(HandlInst_2.getString());
  FIX::IOIID IOIID_2("STRING_1385888370");
  msg.set(IOIID_2);
  MultilegOrderCancelReplace_0.insert(IOIID_2.getString());
  FIX::LocateReqd LocateReqd_1(true);
  msg.set(LocateReqd_1);
  MultilegOrderCancelReplace_0.insert(LocateReqd_1.getString());
  FIX::MatchIncrement MatchIncrement_2;
  MatchIncrement_2.setString("9544052");
  msg.set(MatchIncrement_2);
  MultilegOrderCancelReplace_0.insert(MatchIncrement_2.getString());
  FIX::MaxFloor MaxFloor_2;
  MaxFloor_2.setString("15001196");
  msg.set(MaxFloor_2);
  MultilegOrderCancelReplace_0.insert(MaxFloor_2.getString());
  FIX::MaxPriceLevels MaxPriceLevels_2(164868950);
  msg.set(MaxPriceLevels_2);
  MultilegOrderCancelReplace_0.insert(MaxPriceLevels_2.getString());
  FIX::MaxShow MaxShow_2;
  MaxShow_2.setString("10478030");
  msg.set(MaxShow_2);
  MultilegOrderCancelReplace_0.insert(MaxShow_2.getString());
  FIX::MinQty MinQty_5;
  MinQty_5.setString("4499328");
  msg.set(MinQty_5);
  MultilegOrderCancelReplace_0.insert(MinQty_5.getString());
  FIX::MoneyLaunderingStatus MoneyLaunderingStatus_2('1');
  msg.set(MoneyLaunderingStatus_2);
  MultilegOrderCancelReplace_0.insert(MoneyLaunderingStatus_2.getString());
  FIX::MultiLegRptTypeReq MultiLegRptTypeReq_0(2);
  msg.set(MultiLegRptTypeReq_0);
  MultilegOrderCancelReplace_0.insert(MultiLegRptTypeReq_0.getString());
  FIX::MultilegModel MultilegModel_8(0);
  msg.set(MultilegModel_8);
  MultilegOrderCancelReplace_0.insert(MultilegModel_8.getString());
  FIX::MultilegPriceMethod MultilegPriceMethod_8(4);
  msg.set(MultilegPriceMethod_8);
  MultilegOrderCancelReplace_0.insert(MultilegPriceMethod_8.getString());
  FIX::OrdType OrdType_47('H');
  msg.set(OrdType_47);
  MultilegOrderCancelReplace_0.insert(OrdType_47.getString());
  FIX::OrderCapacity OrderCapacity_22('R');
  msg.set(OrderCapacity_22);
  MultilegOrderCancelReplace_0.insert(OrderCapacity_22.getString());
  FIX::OrderID OrderID_26("STRING_696480207");
  msg.set(OrderID_26);
  MultilegOrderCancelReplace_0.insert(OrderID_26.getString());
  FIX::OrderRestrictions OrderRestrictions_19("MULTIPLECHARVALUE_5");
  msg.set(OrderRestrictions_19);
  MultilegOrderCancelReplace_0.insert(OrderRestrictions_19.getString());
  FIX::OrigClOrdID OrigClOrdID_5("STRING_738890512");
  msg.set(OrigClOrdID_5);
  MultilegOrderCancelReplace_0.insert(OrigClOrdID_5.getString());
  FIX::OrigOrdModTime OrigOrdModTime_1(FIX::UTCTIMESTAMP(6, 28, 34, 0, 3, 2012));
  msg.set(OrigOrdModTime_1);
  MultilegOrderCancelReplace_0.insert(OrigOrdModTime_1.getString());
  FIX::ParticipationRate ParticipationRate_2;
  ParticipationRate_2.setString("42.750000");
  msg.set(ParticipationRate_2);
  MultilegOrderCancelReplace_0.insert(ParticipationRate_2.getString());
  FIX::PositionEffect PositionEffect_7('C');
  msg.set(PositionEffect_7);
  MultilegOrderCancelReplace_0.insert(PositionEffect_7.getString());
  FIX::PreTradeAnonymity PreTradeAnonymity_4(false);
  msg.set(PreTradeAnonymity_4);
  MultilegOrderCancelReplace_0.insert(PreTradeAnonymity_4.getString());
  FIX::PreallocMethod PreallocMethod_4('0');
  msg.set(PreallocMethod_4);
  MultilegOrderCancelReplace_0.insert(PreallocMethod_4.getString());
  FIX::PrevClosePx PrevClosePx_2;
  PrevClosePx_2.setString("10747421");
  msg.set(PrevClosePx_2);
  MultilegOrderCancelReplace_0.insert(PrevClosePx_2.getString());
  FIX::Price Price_13;
  Price_13.setString("20996617");
  msg.set(Price_13);
  MultilegOrderCancelReplace_0.insert(Price_13.getString());
  FIX::PriceProtectionScope PriceProtectionScope_2('1');
  msg.set(PriceProtectionScope_2);
  MultilegOrderCancelReplace_0.insert(PriceProtectionScope_2.getString());
  FIX::PriceType PriceType_27(9);
  msg.set(PriceType_27);
  MultilegOrderCancelReplace_0.insert(PriceType_27.getString());
  FIX::ProcessCode ProcessCode_6('2');
  msg.set(ProcessCode_6);
  MultilegOrderCancelReplace_0.insert(ProcessCode_6.getString());
  FIX::QtyType QtyType_16(2);
  msg.set(QtyType_16);
  MultilegOrderCancelReplace_0.insert(QtyType_16.getString());
  FIX::QuoteID QuoteID_3("STRING_1503275140");
  msg.set(QuoteID_3);
  MultilegOrderCancelReplace_0.insert(QuoteID_3.getString());
  FIX::RegistID RegistID_2("STRING_690702420");
  msg.set(RegistID_2);
  MultilegOrderCancelReplace_0.insert(RegistID_2.getString());
  FIX::RiskFreeRate RiskFreeRate_1;
  RiskFreeRate_1.setString("7279576");
  msg.set(RiskFreeRate_1);
  MultilegOrderCancelReplace_0.insert(RiskFreeRate_1.getString());
  FIX::SecondaryClOrdID SecondaryClOrdID_23("STRING_403594499");
  msg.set(SecondaryClOrdID_23);
  MultilegOrderCancelReplace_0.insert(SecondaryClOrdID_23.getString());
  FIX::SettlCurrency SettlCurrency_12("CHF");
  msg.set(SettlCurrency_12);
  MultilegOrderCancelReplace_0.insert(SettlCurrency_12.getString());
  FIX::SettlDate SettlDate_37("LOCALMKTDATE_1242246014");
  msg.set(SettlDate_37);
  MultilegOrderCancelReplace_0.insert(SettlDate_37.getString());
  FIX::SettlType SettlType_17("STRING_5");
  msg.set(SettlType_17);
  MultilegOrderCancelReplace_0.insert(SettlType_17.getString());
  FIX::Side Side_24('G');
  msg.set(Side_24);
  MultilegOrderCancelReplace_0.insert(Side_24.getString());
  FIX::SolicitedFlag SolicitedFlag_4(true);
  msg.set(SolicitedFlag_4);
  MultilegOrderCancelReplace_0.insert(SolicitedFlag_4.getString());
  FIX::StopPx StopPx_2;
  StopPx_2.setString("21304159");
  msg.set(StopPx_2);
  MultilegOrderCancelReplace_0.insert(StopPx_2.getString());
  FIX::SwapPoints SwapPoints_0;
  SwapPoints_0.setString("13948252");
  msg.set(SwapPoints_0);
  MultilegOrderCancelReplace_0.insert(SwapPoints_0.getString());
  FIX::TargetStrategy TargetStrategy_2(1);
  msg.set(TargetStrategy_2);
  MultilegOrderCancelReplace_0.insert(TargetStrategy_2.getString());
  FIX::TargetStrategyParameters TargetStrategyParameters_2("STRING_721822860");
  msg.set(TargetStrategyParameters_2);
  MultilegOrderCancelReplace_0.insert(TargetStrategyParameters_2.getString());
  FIX::Text Text_53("STRING_541342783");
  msg.set(Text_53);
  MultilegOrderCancelReplace_0.insert(Text_53.getString());
  FIX::TimeInForce TimeInForce_31('0');
  msg.set(TimeInForce_31);
  MultilegOrderCancelReplace_0.insert(TimeInForce_31.getString());
  FIX::TradeDate TradeDate_17("LOCALMKTDATE_1062789688");
  msg.set(TradeDate_17);
  MultilegOrderCancelReplace_0.insert(TradeDate_17.getString());
  FIX::TradeOriginationDate TradeOriginationDate_9("LOCALMKTDATE_1557328817");
  msg.set(TradeOriginationDate_9);
  MultilegOrderCancelReplace_0.insert(TradeOriginationDate_9.getString());
  FIX::TransactTime TransactTime_40(FIX::UTCTIMESTAMP(7, 22, 59, 25, 8, 2001));
  msg.set(TransactTime_40);
  MultilegOrderCancelReplace_0.insert(TransactTime_40.getString());
  all_values.push_back(MultilegOrderCancelReplace_0);

  all_compo_names.insert("MultilegOrderCancelReplace");

  // CommissionData
  multiset<string> CommissionData_12;
  FIX::CommCurrency CommCurrency_12("CAN");
  msg.set(CommCurrency_12);
  CommissionData_12.insert(CommCurrency_12.getString());
  FIX::CommType CommType_12('5');
  msg.set(CommType_12);
  CommissionData_12.insert(CommType_12.getString());
  FIX::Commission Commission_12;
  Commission_12.setString("4768332");
  msg.set(Commission_12);
  CommissionData_12.insert(Commission_12.getString());
  FIX::FundRenewWaiv FundRenewWaiv_12('N');
  msg.set(FundRenewWaiv_12);
  CommissionData_12.insert(FundRenewWaiv_12.getString());
  all_values.push_back(CommissionData_12);
  all_compo_names.insert("CommissionData");

  // DiscretionInstructions
  multiset<string> DiscretionInstructions_2;
  FIX::DiscretionInst DiscretionInst_2('6');
  msg.set(DiscretionInst_2);
  DiscretionInstructions_2.insert(DiscretionInst_2.getString());
  FIX::DiscretionLimitType DiscretionLimitType_2(2);
  msg.set(DiscretionLimitType_2);
  DiscretionInstructions_2.insert(DiscretionLimitType_2.getString());
  FIX::DiscretionMoveType DiscretionMoveType_2(0);
  msg.set(DiscretionMoveType_2);
  DiscretionInstructions_2.insert(DiscretionMoveType_2.getString());
  FIX::DiscretionOffsetType DiscretionOffsetType_2(3);
  msg.set(DiscretionOffsetType_2);
  DiscretionInstructions_2.insert(DiscretionOffsetType_2.getString());
  FIX::DiscretionOffsetValue DiscretionOffsetValue_2;
  DiscretionOffsetValue_2.setString("2362192");
  msg.set(DiscretionOffsetValue_2);
  DiscretionInstructions_2.insert(DiscretionOffsetValue_2.getString());
  FIX::DiscretionRoundDirection DiscretionRoundDirection_2(1);
  msg.set(DiscretionRoundDirection_2);
  DiscretionInstructions_2.insert(DiscretionRoundDirection_2.getString());
  FIX::DiscretionScope DiscretionScope_2(3);
  msg.set(DiscretionScope_2);
  DiscretionInstructions_2.insert(DiscretionScope_2.getString());
  all_values.push_back(DiscretionInstructions_2);
  all_compo_names.insert("DiscretionInstructions");

  // DisplayInstruction
  multiset<string> DisplayInstruction_2;
  FIX::DisplayHighQty DisplayHighQty_2;
  DisplayHighQty_2.setString("14784652");
  msg.set(DisplayHighQty_2);
  DisplayInstruction_2.insert(DisplayHighQty_2.getString());
  FIX::DisplayLowQty DisplayLowQty_2;
  DisplayLowQty_2.setString("1511602");
  msg.set(DisplayLowQty_2);
  DisplayInstruction_2.insert(DisplayLowQty_2.getString());
  FIX::DisplayMethod DisplayMethod_2('2');
  msg.set(DisplayMethod_2);
  DisplayInstruction_2.insert(DisplayMethod_2.getString());
  FIX::DisplayMinIncr DisplayMinIncr_2;
  DisplayMinIncr_2.setString("19502268");
  msg.set(DisplayMinIncr_2);
  DisplayInstruction_2.insert(DisplayMinIncr_2.getString());
  FIX::DisplayQty DisplayQty_2;
  DisplayQty_2.setString("1340925");
  msg.set(DisplayQty_2);
  DisplayInstruction_2.insert(DisplayQty_2.getString());
  FIX::DisplayWhen DisplayWhen_2('2');
  msg.set(DisplayWhen_2);
  DisplayInstruction_2.insert(DisplayWhen_2.getString());
  FIX::RefreshQty RefreshQty_2;
  RefreshQty_2.setString("12863773");
  msg.set(RefreshQty_2);
  DisplayInstruction_2.insert(RefreshQty_2.getString());
  FIX::SecondaryDisplayQty SecondaryDisplayQty_2;
  SecondaryDisplayQty_2.setString("8559154");
  msg.set(SecondaryDisplayQty_2);
  DisplayInstruction_2.insert(SecondaryDisplayQty_2.getString());
  all_values.push_back(DisplayInstruction_2);
  all_compo_names.insert("DisplayInstruction");

  // Instrument
  multiset<string> Instrument_46;
  FIX::AttachmentPoint AttachmentPoint_46;
  AttachmentPoint_46.setString("75.420000");
  msg.set(AttachmentPoint_46);
  Instrument_46.insert(AttachmentPoint_46.getString());
  FIX::CFICode CFICode_46("STRING_2133790058");
  msg.set(CFICode_46);
  Instrument_46.insert(CFICode_46.getString());
  FIX::CPProgram CPProgram_46(1);
  msg.set(CPProgram_46);
  Instrument_46.insert(CPProgram_46.getString());
  FIX::CPRegType CPRegType_46("STRING_488032712");
  msg.set(CPRegType_46);
  Instrument_46.insert(CPRegType_46.getString());
  FIX::CapPrice CapPrice_46;
  CapPrice_46.setString("6036477");
  msg.set(CapPrice_46);
  Instrument_46.insert(CapPrice_46.getString());
  FIX::ContractMultiplier ContractMultiplier_46;
  ContractMultiplier_46.setString("17486646");
  msg.set(ContractMultiplier_46);
  Instrument_46.insert(ContractMultiplier_46.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_46(0);
  msg.set(ContractMultiplierUnit_46);
  Instrument_46.insert(ContractMultiplierUnit_46.getString());
  FIX::ContractSettlMonth ContractSettlMonth_46("MONTHYEAR_1854223374");
  msg.set(ContractSettlMonth_46);
  Instrument_46.insert(ContractSettlMonth_46.getString());
  FIX::CountryOfIssue CountryOfIssue_46("COUNTRY_601885937");
  msg.set(CountryOfIssue_46);
  Instrument_46.insert(CountryOfIssue_46.getString());
  FIX::CouponPaymentDate CouponPaymentDate_46("LOCALMKTDATE_968223757");
  msg.set(CouponPaymentDate_46);
  Instrument_46.insert(CouponPaymentDate_46.getString());
  FIX::CouponRate CouponRate_46;
  CouponRate_46.setString("31.200000");
  msg.set(CouponRate_46);
  Instrument_46.insert(CouponRate_46.getString());
  FIX::CreditRating CreditRating_46("STRING_529849326");
  msg.set(CreditRating_46);
  Instrument_46.insert(CreditRating_46.getString());
  FIX::DatedDate DatedDate_46("LOCALMKTDATE_1351581895");
  msg.set(DatedDate_46);
  Instrument_46.insert(DatedDate_46.getString());
  FIX::DetachmentPoint DetachmentPoint_46;
  DetachmentPoint_46.setString("49.020000");
  msg.set(DetachmentPoint_46);
  Instrument_46.insert(DetachmentPoint_46.getString());
  FIX::EncodedIssuer EncodedIssuer_46("DATA_1006682602");
  msg.set(EncodedIssuer_46);
  Instrument_46.insert(EncodedIssuer_46.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_46(925522809);
  msg.set(EncodedIssuerLen_46);
  Instrument_46.insert(EncodedIssuerLen_46.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_46("DATA_1771015356");
  msg.set(EncodedSecurityDesc_46);
  Instrument_46.insert(EncodedSecurityDesc_46.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_46(839307370);
  msg.set(EncodedSecurityDescLen_46);
  Instrument_46.insert(EncodedSecurityDescLen_46.getString());
  FIX::ExerciseStyle ExerciseStyle_46(2);
  msg.set(ExerciseStyle_46);
  Instrument_46.insert(ExerciseStyle_46.getString());
  FIX::Factor Factor_46;
  Factor_46.setString("4459697");
  msg.set(Factor_46);
  Instrument_46.insert(Factor_46.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_46(false);
  msg.set(FlexProductEligibilityIndicator_46);
  Instrument_46.insert(FlexProductEligibilityIndicator_46.getString());
  FIX::FlexibleIndicator FlexibleIndicator_46(false);
  msg.set(FlexibleIndicator_46);
  Instrument_46.insert(FlexibleIndicator_46.getString());
  FIX::FloorPrice FloorPrice_46;
  FloorPrice_46.setString("10371278");
  msg.set(FloorPrice_46);
  Instrument_46.insert(FloorPrice_46.getString());
  FIX::FlowScheduleType FlowScheduleType_46(1);
  msg.set(FlowScheduleType_46);
  Instrument_46.insert(FlowScheduleType_46.getString());
  FIX::InstrRegistry InstrRegistry_46("STRING_599121360");
  msg.set(InstrRegistry_46);
  Instrument_46.insert(InstrRegistry_46.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_46('1');
  msg.set(InstrmtAssignmentMethod_46);
  Instrument_46.insert(InstrmtAssignmentMethod_46.getString());
  FIX::InterestAccrualDate InterestAccrualDate_46("LOCALMKTDATE_209251447");
  msg.set(InterestAccrualDate_46);
  Instrument_46.insert(InterestAccrualDate_46.getString());
  FIX::IssueDate IssueDate_46("LOCALMKTDATE_733213949");
  msg.set(IssueDate_46);
  Instrument_46.insert(IssueDate_46.getString());
  FIX::Issuer Issuer_46("STRING_715992035");
  msg.set(Issuer_46);
  Instrument_46.insert(Issuer_46.getString());
  FIX::ListMethod ListMethod_46(1);
  msg.set(ListMethod_46);
  Instrument_46.insert(ListMethod_46.getString());
  FIX::LocaleOfIssue LocaleOfIssue_46("STRING_1589129397");
  msg.set(LocaleOfIssue_46);
  Instrument_46.insert(LocaleOfIssue_46.getString());
  FIX::MaturityDate MaturityDate_46("LOCALMKTDATE_1794179578");
  msg.set(MaturityDate_46);
  Instrument_46.insert(MaturityDate_46.getString());
  FIX::MaturityMonthYear MaturityMonthYear_46("MONTHYEAR_1481935175");
  msg.set(MaturityMonthYear_46);
  Instrument_46.insert(MaturityMonthYear_46.getString());
  FIX::MaturityTime MaturityTime_46("TZTIMEONLY_1360350886");
  msg.set(MaturityTime_46);
  Instrument_46.insert(MaturityTime_46.getString());
  FIX::MinPriceIncrement MinPriceIncrement_46;
  MinPriceIncrement_46.setString("1347286");
  msg.set(MinPriceIncrement_46);
  Instrument_46.insert(MinPriceIncrement_46.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_46;
  MinPriceIncrementAmount_46.setString("20855829");
  msg.set(MinPriceIncrementAmount_46);
  Instrument_46.insert(MinPriceIncrementAmount_46.getString());
  FIX::NTPositionLimit NTPositionLimit_46(961531918);
  msg.set(NTPositionLimit_46);
  Instrument_46.insert(NTPositionLimit_46.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_46;
  NotionalPercentageOutstanding_46.setString("23.160000");
  msg.set(NotionalPercentageOutstanding_46);
  Instrument_46.insert(NotionalPercentageOutstanding_46.getString());
  FIX::OptAttribute OptAttribute_46('1');
  msg.set(OptAttribute_46);
  Instrument_46.insert(OptAttribute_46.getString());
  FIX::OptPayoutAmount OptPayoutAmount_46;
  OptPayoutAmount_46.setString("15634178");
  msg.set(OptPayoutAmount_46);
  Instrument_46.insert(OptPayoutAmount_46.getString());
  FIX::OptPayoutType OptPayoutType_46(3);
  msg.set(OptPayoutType_46);
  Instrument_46.insert(OptPayoutType_46.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_46;
  OriginalNotionalPercentageOutstanding_46.setString("21.290000");
  msg.set(OriginalNotionalPercentageOutstanding_46);
  Instrument_46.insert(OriginalNotionalPercentageOutstanding_46.getString());
  FIX::Pool Pool_46("STRING_2093267182");
  msg.set(Pool_46);
  Instrument_46.insert(Pool_46.getString());
  FIX::PositionLimit PositionLimit_46(844094320);
  msg.set(PositionLimit_46);
  Instrument_46.insert(PositionLimit_46.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_46("STRING_PCTPAR");
  msg.set(PriceQuoteMethod_46);
  Instrument_46.insert(PriceQuoteMethod_46.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_46("STRING_952466136");
  msg.set(PriceUnitOfMeasure_46);
  Instrument_46.insert(PriceUnitOfMeasure_46.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_46;
  PriceUnitOfMeasureQty_46.setString("17696171");
  msg.set(PriceUnitOfMeasureQty_46);
  Instrument_46.insert(PriceUnitOfMeasureQty_46.getString());
  FIX::Product Product_48(2);
  msg.set(Product_48);
  Instrument_46.insert(Product_48.getString());
  FIX::ProductComplex ProductComplex_46("STRING_1791773506");
  msg.set(ProductComplex_46);
  Instrument_46.insert(ProductComplex_46.getString());
  FIX::PutOrCall PutOrCall_46(1);
  msg.set(PutOrCall_46);
  Instrument_46.insert(PutOrCall_46.getString());
  FIX::RedemptionDate RedemptionDate_46("LOCALMKTDATE_1388534876");
  msg.set(RedemptionDate_46);
  Instrument_46.insert(RedemptionDate_46.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_46("STRING_719816496");
  msg.set(RepoCollateralSecurityType_46);
  Instrument_46.insert(RepoCollateralSecurityType_46.getString());
  FIX::RepurchaseRate RepurchaseRate_46;
  RepurchaseRate_46.setString("7.440000");
  msg.set(RepurchaseRate_46);
  Instrument_46.insert(RepurchaseRate_46.getString());
  FIX::RepurchaseTerm RepurchaseTerm_46(278179038);
  msg.set(RepurchaseTerm_46);
  Instrument_46.insert(RepurchaseTerm_46.getString());
  FIX::RestructuringType RestructuringType_46("STRING_XR");
  msg.set(RestructuringType_46);
  Instrument_46.insert(RestructuringType_46.getString());
  FIX::SecurityDesc SecurityDesc_46("STRING_1859382105");
  msg.set(SecurityDesc_46);
  Instrument_46.insert(SecurityDesc_46.getString());
  FIX::SecurityExchange SecurityExchange_46("EXCHANGE_457326314");
  msg.set(SecurityExchange_46);
  Instrument_46.insert(SecurityExchange_46.getString());
  FIX::SecurityGroup SecurityGroup_46("STRING_1335576214");
  msg.set(SecurityGroup_46);
  Instrument_46.insert(SecurityGroup_46.getString());
  FIX::SecurityID SecurityID_46("STRING_445112406");
  msg.set(SecurityID_46);
  Instrument_46.insert(SecurityID_46.getString());
  FIX::SecurityIDSource SecurityIDSource_46("STRING_7");
  msg.set(SecurityIDSource_46);
  Instrument_46.insert(SecurityIDSource_46.getString());
  FIX::SecurityStatus SecurityStatus_46("STRING_2");
  msg.set(SecurityStatus_46);
  Instrument_46.insert(SecurityStatus_46.getString());
  FIX::SecuritySubType SecuritySubType_47("STRING_2034241803");
  msg.set(SecuritySubType_47);
  Instrument_46.insert(SecuritySubType_47.getString());
  FIX::SecurityType SecurityType_48("STRING_DN");
  msg.set(SecurityType_48);
  Instrument_46.insert(SecurityType_48.getString());
  FIX::Seniority Seniority_46("STRING_SR");
  msg.set(Seniority_46);
  Instrument_46.insert(Seniority_46.getString());
  FIX::SettlMethod SettlMethod_46('C');
  msg.set(SettlMethod_46);
  Instrument_46.insert(SettlMethod_46.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_46("STRING_954742922");
  msg.set(SettleOnOpenFlag_46);
  Instrument_46.insert(SettleOnOpenFlag_46.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_46("STRING_2103755789");
  msg.set(StateOrProvinceOfIssue_46);
  Instrument_46.insert(StateOrProvinceOfIssue_46.getString());
  FIX::StrikeCurrency StrikeCurrency_46("USD");
  msg.set(StrikeCurrency_46);
  Instrument_46.insert(StrikeCurrency_46.getString());
  FIX::StrikeMultiplier StrikeMultiplier_46;
  StrikeMultiplier_46.setString("17485947");
  msg.set(StrikeMultiplier_46);
  Instrument_46.insert(StrikeMultiplier_46.getString());
  FIX::StrikePrice StrikePrice_46;
  StrikePrice_46.setString("16245751");
  msg.set(StrikePrice_46);
  Instrument_46.insert(StrikePrice_46.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_46(4);
  msg.set(StrikePriceBoundaryMethod_46);
  Instrument_46.insert(StrikePriceBoundaryMethod_46.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_46;
  StrikePriceBoundaryPrecision_46.setString("32.790000");
  msg.set(StrikePriceBoundaryPrecision_46);
  Instrument_46.insert(StrikePriceBoundaryPrecision_46.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_46(4);
  msg.set(StrikePriceDeterminationMethod_46);
  Instrument_46.insert(StrikePriceDeterminationMethod_46.getString());
  FIX::StrikeValue StrikeValue_46;
  StrikeValue_46.setString("19631219");
  msg.set(StrikeValue_46);
  Instrument_46.insert(StrikeValue_46.getString());
  FIX::Symbol Symbol_46("STRING_562643014");
  msg.set(Symbol_46);
  Instrument_46.insert(Symbol_46.getString());
  FIX::SymbolSfx SymbolSfx_46("STRING_WI");
  msg.set(SymbolSfx_46);
  Instrument_46.insert(SymbolSfx_46.getString());
  FIX::TimeUnit TimeUnit_46("STRING_D");
  msg.set(TimeUnit_46);
  Instrument_46.insert(TimeUnit_46.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_46(3);
  msg.set(UnderlyingPriceDeterminationMethod_46);
  Instrument_46.insert(UnderlyingPriceDeterminationMethod_46.getString());
  FIX::UnitOfMeasure UnitOfMeasure_46("STRING_tn");
  msg.set(UnitOfMeasure_46);
  Instrument_46.insert(UnitOfMeasure_46.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_46;
  UnitOfMeasureQty_46.setString("2500714");
  msg.set(UnitOfMeasureQty_46);
  Instrument_46.insert(UnitOfMeasureQty_46.getString());
  FIX::ValuationMethod ValuationMethod_46("STRING_CDSD");
  msg.set(ValuationMethod_46);
  Instrument_46.insert(ValuationMethod_46.getString());
  all_values.push_back(Instrument_46);
  all_compo_names.insert("Instrument");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::MultilegOrderCancelReplace::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_92;
    FIX::ComplexEventCondition ComplexEventCondition_92(2);
    noComplexEvents_0_0.set(ComplexEventCondition_92);
    ComplexEvents_NoComplexEvents_92.insert(ComplexEventCondition_92.getString());
    FIX::ComplexEventPrice ComplexEventPrice_92;
    ComplexEventPrice_92.setString("10244383");
    noComplexEvents_0_0.set(ComplexEventPrice_92);
    ComplexEvents_NoComplexEvents_92.insert(ComplexEventPrice_92.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_92(4);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_92);
    ComplexEvents_NoComplexEvents_92.insert(ComplexEventPriceBoundaryMethod_92.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_92;
    ComplexEventPriceBoundaryPrecision_92.setString("6.440000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_92);
    ComplexEvents_NoComplexEvents_92.insert(ComplexEventPriceBoundaryPrecision_92.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_92(2);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_92);
    ComplexEvents_NoComplexEvents_92.insert(ComplexEventPriceTimeType_92.getString());
    FIX::ComplexEventType ComplexEventType_92(7);
    noComplexEvents_0_0.set(ComplexEventType_92);
    ComplexEvents_NoComplexEvents_92.insert(ComplexEventType_92.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_92;
    ComplexOptPayoutAmount_92.setString("16673430");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_92);
    ComplexEvents_NoComplexEvents_92.insert(ComplexOptPayoutAmount_92.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_92);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::MultilegOrderCancelReplace::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_191;
      FIX::ComplexEventEndDate ComplexEventEndDate_191(FIX::UTCTIMESTAMP(21, 29, 8, 15, 12, 2017));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_191);
      ComplexEventDates_NoComplexEventDates_191.insert(ComplexEventEndDate_191.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_191(FIX::UTCTIMESTAMP(5, 59, 32, 25, 3, 2017));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_191);
      ComplexEventDates_NoComplexEventDates_191.insert(ComplexEventStartDate_191.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_191);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::MultilegOrderCancelReplace::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_386;
        FIX::ComplexEventEndTime ComplexEventEndTime_386(FIX::UTCTIMEONLY(7, 38, 3));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_386);
        ComplexEventTimes_NoComplexEventTimes_386.insert(ComplexEventEndTime_386.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_386(FIX::UTCTIMEONLY(17, 38, 55));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_386);
        ComplexEventTimes_NoComplexEventTimes_386.insert(ComplexEventStartTime_386.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_386);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_387;
        FIX::ComplexEventEndTime ComplexEventEndTime_387(FIX::UTCTIMEONLY(11, 0, 36));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_387);
        ComplexEventTimes_NoComplexEventTimes_387.insert(ComplexEventEndTime_387.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_387(FIX::UTCTIMEONLY(3, 18, 20));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_387);
        ComplexEventTimes_NoComplexEventTimes_387.insert(ComplexEventStartTime_387.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_387);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_192;
      FIX::ComplexEventEndDate ComplexEventEndDate_192(FIX::UTCTIMESTAMP(15, 41, 41, 23, 6, 2015));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_192);
      ComplexEventDates_NoComplexEventDates_192.insert(ComplexEventEndDate_192.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_192(FIX::UTCTIMESTAMP(2, 2, 39, 11, 10, 2013));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_192);
      ComplexEventDates_NoComplexEventDates_192.insert(ComplexEventStartDate_192.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_192);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::MultilegOrderCancelReplace::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_388;
        FIX::ComplexEventEndTime ComplexEventEndTime_388(FIX::UTCTIMEONLY(6, 51, 13));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_388);
        ComplexEventTimes_NoComplexEventTimes_388.insert(ComplexEventEndTime_388.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_388(FIX::UTCTIMEONLY(20, 43, 10));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_388);
        ComplexEventTimes_NoComplexEventTimes_388.insert(ComplexEventStartTime_388.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_388);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_389;
        FIX::ComplexEventEndTime ComplexEventEndTime_389(FIX::UTCTIMEONLY(6, 10, 12));
        noComplexEventTimes_0_1_2_1.set(ComplexEventEndTime_389);
        ComplexEventTimes_NoComplexEventTimes_389.insert(ComplexEventEndTime_389.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_389(FIX::UTCTIMEONLY(17, 30, 41));
        noComplexEventTimes_0_1_2_1.set(ComplexEventStartTime_389);
        ComplexEventTimes_NoComplexEventTimes_389.insert(ComplexEventStartTime_389.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_389);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_390;
        FIX::ComplexEventEndTime ComplexEventEndTime_390(FIX::UTCTIMEONLY(1, 22, 55));
        noComplexEventTimes_0_1_2_2.set(ComplexEventEndTime_390);
        ComplexEventTimes_NoComplexEventTimes_390.insert(ComplexEventEndTime_390.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_390(FIX::UTCTIMEONLY(19, 58, 39));
        noComplexEventTimes_0_1_2_2.set(ComplexEventStartTime_390);
        ComplexEventTimes_NoComplexEventTimes_390.insert(ComplexEventStartTime_390.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_390);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::MultilegOrderCancelReplace::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_93;
    FIX::ComplexEventCondition ComplexEventCondition_93(1);
    noComplexEvents_0_1.set(ComplexEventCondition_93);
    ComplexEvents_NoComplexEvents_93.insert(ComplexEventCondition_93.getString());
    FIX::ComplexEventPrice ComplexEventPrice_93;
    ComplexEventPrice_93.setString("9323921");
    noComplexEvents_0_1.set(ComplexEventPrice_93);
    ComplexEvents_NoComplexEvents_93.insert(ComplexEventPrice_93.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_93(5);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_93);
    ComplexEvents_NoComplexEvents_93.insert(ComplexEventPriceBoundaryMethod_93.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_93;
    ComplexEventPriceBoundaryPrecision_93.setString("50.050000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_93);
    ComplexEvents_NoComplexEvents_93.insert(ComplexEventPriceBoundaryPrecision_93.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_93(3);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_93);
    ComplexEvents_NoComplexEvents_93.insert(ComplexEventPriceTimeType_93.getString());
    FIX::ComplexEventType ComplexEventType_93(4);
    noComplexEvents_0_1.set(ComplexEventType_93);
    ComplexEvents_NoComplexEvents_93.insert(ComplexEventType_93.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_93;
    ComplexOptPayoutAmount_93.setString("14586591");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_93);
    ComplexEvents_NoComplexEvents_93.insert(ComplexOptPayoutAmount_93.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_93);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::MultilegOrderCancelReplace::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_193;
      FIX::ComplexEventEndDate ComplexEventEndDate_193(FIX::UTCTIMESTAMP(5, 53, 31, 13, 6, 2005));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_193);
      ComplexEventDates_NoComplexEventDates_193.insert(ComplexEventEndDate_193.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_193(FIX::UTCTIMESTAMP(11, 43, 41, 0, 5, 2017));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_193);
      ComplexEventDates_NoComplexEventDates_193.insert(ComplexEventStartDate_193.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_193);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::MultilegOrderCancelReplace::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_391;
        FIX::ComplexEventEndTime ComplexEventEndTime_391(FIX::UTCTIMEONLY(4, 0, 17));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_391);
        ComplexEventTimes_NoComplexEventTimes_391.insert(ComplexEventEndTime_391.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_391(FIX::UTCTIMEONLY(7, 16, 48));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_391);
        ComplexEventTimes_NoComplexEventTimes_391.insert(ComplexEventStartTime_391.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_391);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::MultilegOrderCancelReplace::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_84;
    FIX::EventDate EventDate_84("LOCALMKTDATE_858505441");
    noEvents_0_0.set(EventDate_84);
    EvntGrp_NoEvents_84.insert(EventDate_84.getString());
    FIX::EventPx EventPx_84;
    EventPx_84.setString("14324922");
    noEvents_0_0.set(EventPx_84);
    EvntGrp_NoEvents_84.insert(EventPx_84.getString());
    FIX::EventText EventText_84("STRING_2025321555");
    noEvents_0_0.set(EventText_84);
    EvntGrp_NoEvents_84.insert(EventText_84.getString());
    FIX::EventTime EventTime_84(FIX::UTCTIMESTAMP(17, 33, 19, 9, 7, 2004));
    noEvents_0_0.set(EventTime_84);
    EvntGrp_NoEvents_84.insert(EventTime_84.getString());
    FIX::EventType EventType_84(5);
    noEvents_0_0.set(EventType_84);
    EvntGrp_NoEvents_84.insert(EventType_84.getString());
    all_values.push_back(EvntGrp_NoEvents_84);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::MultilegOrderCancelReplace::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_91;
    FIX::InstrumentPartyID InstrumentPartyID_91("STRING_1141879953");
    noInstrumentParties_0_0.set(InstrumentPartyID_91);
    InstrumentParties_NoInstrumentParties_91.insert(InstrumentPartyID_91.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_91('4');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_91);
    InstrumentParties_NoInstrumentParties_91.insert(InstrumentPartyIDSource_91.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_91(412326604);
    noInstrumentParties_0_0.set(InstrumentPartyRole_91);
    InstrumentParties_NoInstrumentParties_91.insert(InstrumentPartyRole_91.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_91);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::MultilegOrderCancelReplace::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_176;
      FIX::InstrumentPartySubID InstrumentPartySubID_176("STRING_14042712");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_176);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_176.insert(InstrumentPartySubID_176.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_176(1008627285);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_176);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_176.insert(InstrumentPartySubIDType_176.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_176);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::MultilegOrderCancelReplace::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_92;
    FIX::InstrumentPartyID InstrumentPartyID_92("STRING_873088865");
    noInstrumentParties_0_1.set(InstrumentPartyID_92);
    InstrumentParties_NoInstrumentParties_92.insert(InstrumentPartyID_92.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_92('1');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_92);
    InstrumentParties_NoInstrumentParties_92.insert(InstrumentPartyIDSource_92.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_92(594932328);
    noInstrumentParties_0_1.set(InstrumentPartyRole_92);
    InstrumentParties_NoInstrumentParties_92.insert(InstrumentPartyRole_92.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_92);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::MultilegOrderCancelReplace::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_177;
      FIX::InstrumentPartySubID InstrumentPartySubID_177("STRING_469649870");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_177);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_177.insert(InstrumentPartySubID_177.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_177(1066695316);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_177);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_177.insert(InstrumentPartySubIDType_177.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_177);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::MultilegOrderCancelReplace::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_93;
    FIX::InstrumentPartyID InstrumentPartyID_93("STRING_409754683");
    noInstrumentParties_0_2.set(InstrumentPartyID_93);
    InstrumentParties_NoInstrumentParties_93.insert(InstrumentPartyID_93.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_93('1');
    noInstrumentParties_0_2.set(InstrumentPartyIDSource_93);
    InstrumentParties_NoInstrumentParties_93.insert(InstrumentPartyIDSource_93.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_93(678129137);
    noInstrumentParties_0_2.set(InstrumentPartyRole_93);
    InstrumentParties_NoInstrumentParties_93.insert(InstrumentPartyRole_93.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_93);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::MultilegOrderCancelReplace::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_178;
      FIX::InstrumentPartySubID InstrumentPartySubID_178("STRING_986976076");
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubID_178);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_178.insert(InstrumentPartySubID_178.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_178(545814238);
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubIDType_178);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_178.insert(InstrumentPartySubIDType_178.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_178);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_179;
      FIX::InstrumentPartySubID InstrumentPartySubID_179("STRING_146346424");
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubID_179);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_179.insert(InstrumentPartySubID_179.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_179(1845481517);
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubIDType_179);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_179.insert(InstrumentPartySubIDType_179.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_179);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_1);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_180;
      FIX::InstrumentPartySubID InstrumentPartySubID_180("STRING_1978306497");
      noInstrumentPartySubIDs_2_1_2.set(InstrumentPartySubID_180);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_180.insert(InstrumentPartySubID_180.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_180(24184331);
      noInstrumentPartySubIDs_2_1_2.set(InstrumentPartySubIDType_180);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_180.insert(InstrumentPartySubIDType_180.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_180);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_2);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::MultilegOrderCancelReplace::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_86;
    FIX::SecurityAltID SecurityAltID_86("STRING_1604044987");
    noSecurityAltID_0_0.set(SecurityAltID_86);
    SecAltIDGrp_NoSecurityAltID_86.insert(SecurityAltID_86.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_86("STRING_1360681424");
    noSecurityAltID_0_0.set(SecurityAltIDSource_86);
    SecAltIDGrp_NoSecurityAltID_86.insert(SecurityAltIDSource_86.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_86);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_92;
  FIX::SecurityXML SecurityXML_93("XMLDATA_1063653119");
  msg.set(SecurityXML_93);
  FIX::SecurityXMLLen SecurityXMLLen_46(336627752);
  msg.set(SecurityXMLLen_46);
  FIX::SecurityXMLSchema SecurityXMLSchema_46("STRING_2147320586");
  msg.set(SecurityXMLSchema_46);
  SecurityXML_92.insert(SecurityXMLSchema_46.getString());
  all_values.push_back(SecurityXML_92);
  all_compo_names.insert("SecurityXML");

  // LegOrdGrp
  // Group LegOrdGrp.NoLegs
  {
    FIX50SP2::MultilegOrderCancelReplace::NoLegs noLegs_0_0;
    // LegOrdGrp.NoLegs
    multiset<string> LegOrdGrp_NoLegs_0;
    FIX::LegAllocID LegAllocID_1("STRING_1246959217");
    noLegs_0_0.set(LegAllocID_1);
    LegOrdGrp_NoLegs_0.insert(LegAllocID_1.getString());
    FIX::LegCoveredOrUncovered LegCoveredOrUncovered_1(611998493);
    noLegs_0_0.set(LegCoveredOrUncovered_1);
    LegOrdGrp_NoLegs_0.insert(LegCoveredOrUncovered_1.getString());
    FIX::LegCurrencyRatio LegCurrencyRatio_1;
    LegCurrencyRatio_1.setString("11471451");
    noLegs_0_0.set(LegCurrencyRatio_1);
    LegOrdGrp_NoLegs_0.insert(LegCurrencyRatio_1.getString());
    FIX::LegDividendYield LegDividendYield_1;
    LegDividendYield_1.setString("31.340000");
    noLegs_0_0.set(LegDividendYield_1);
    LegOrdGrp_NoLegs_0.insert(LegDividendYield_1.getString());
    FIX::LegExecInst LegExecInst_1("MULTIPLECHARVALUE_1024325097");
    noLegs_0_0.set(LegExecInst_1);
    LegOrdGrp_NoLegs_0.insert(LegExecInst_1.getString());
    FIX::LegOrderQty LegOrderQty_1;
    LegOrderQty_1.setString("9738288");
    noLegs_0_0.set(LegOrderQty_1);
    LegOrdGrp_NoLegs_0.insert(LegOrderQty_1.getString());
    FIX::LegPositionEffect LegPositionEffect_1('1');
    noLegs_0_0.set(LegPositionEffect_1);
    LegOrdGrp_NoLegs_0.insert(LegPositionEffect_1.getString());
    FIX::LegQty LegQty_1;
    LegQty_1.setString("20329523");
    noLegs_0_0.set(LegQty_1);
    LegOrdGrp_NoLegs_0.insert(LegQty_1.getString());
    FIX::LegRefID LegRefID_1("STRING_1846917755");
    noLegs_0_0.set(LegRefID_1);
    LegOrdGrp_NoLegs_0.insert(LegRefID_1.getString());
    FIX::LegSettlCurrency LegSettlCurrency_1("JPY");
    noLegs_0_0.set(LegSettlCurrency_1);
    LegOrdGrp_NoLegs_0.insert(LegSettlCurrency_1.getString());
    FIX::LegSettlDate LegSettlDate_1("LOCALMKTDATE_1775259858");
    noLegs_0_0.set(LegSettlDate_1);
    LegOrdGrp_NoLegs_0.insert(LegSettlDate_1.getString());
    FIX::LegSettlType LegSettlType_1('1');
    noLegs_0_0.set(LegSettlType_1);
    LegOrdGrp_NoLegs_0.insert(LegSettlType_1.getString());
    FIX::LegSwapType LegSwapType_1(4);
    noLegs_0_0.set(LegSwapType_1);
    LegOrdGrp_NoLegs_0.insert(LegSwapType_1.getString());
    FIX::LegVolatility LegVolatility_1;
    LegVolatility_1.setString("375308");
    noLegs_0_0.set(LegVolatility_1);
    LegOrdGrp_NoLegs_0.insert(LegVolatility_1.getString());
    all_values.push_back(LegOrdGrp_NoLegs_0);
    all_compo_names.insert("LegOrdGrp.NoLegs");

    // InstrumentLeg
    multiset<string> InstrumentLeg_87;
    FIX::EncodedLegIssuer EncodedLegIssuer_87("DATA_38822858");
    noLegs_0_0.set(EncodedLegIssuer_87);
    InstrumentLeg_87.insert(EncodedLegIssuer_87.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_87(77741868);
    noLegs_0_0.set(EncodedLegIssuerLen_87);
    InstrumentLeg_87.insert(EncodedLegIssuerLen_87.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_87("DATA_1612074416");
    noLegs_0_0.set(EncodedLegSecurityDesc_87);
    InstrumentLeg_87.insert(EncodedLegSecurityDesc_87.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_87(1025798934);
    noLegs_0_0.set(EncodedLegSecurityDescLen_87);
    InstrumentLeg_87.insert(EncodedLegSecurityDescLen_87.getString());
    FIX::LegCFICode LegCFICode_87("STRING_623556106");
    noLegs_0_0.set(LegCFICode_87);
    InstrumentLeg_87.insert(LegCFICode_87.getString());
    FIX::LegContractMultiplier LegContractMultiplier_87;
    LegContractMultiplier_87.setString("17584208");
    noLegs_0_0.set(LegContractMultiplier_87);
    InstrumentLeg_87.insert(LegContractMultiplier_87.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_87(723796803);
    noLegs_0_0.set(LegContractMultiplierUnit_87);
    InstrumentLeg_87.insert(LegContractMultiplierUnit_87.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_87("MONTHYEAR_454378955");
    noLegs_0_0.set(LegContractSettlMonth_87);
    InstrumentLeg_87.insert(LegContractSettlMonth_87.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_87("COUNTRY_1782605171");
    noLegs_0_0.set(LegCountryOfIssue_87);
    InstrumentLeg_87.insert(LegCountryOfIssue_87.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_87("LOCALMKTDATE_71968663");
    noLegs_0_0.set(LegCouponPaymentDate_87);
    InstrumentLeg_87.insert(LegCouponPaymentDate_87.getString());
    FIX::LegCouponRate LegCouponRate_87;
    LegCouponRate_87.setString("39.420000");
    noLegs_0_0.set(LegCouponRate_87);
    InstrumentLeg_87.insert(LegCouponRate_87.getString());
    FIX::LegCreditRating LegCreditRating_87("STRING_995802947");
    noLegs_0_0.set(LegCreditRating_87);
    InstrumentLeg_87.insert(LegCreditRating_87.getString());
    FIX::LegCurrency LegCurrency_87("EUR");
    noLegs_0_0.set(LegCurrency_87);
    InstrumentLeg_87.insert(LegCurrency_87.getString());
    FIX::LegDatedDate LegDatedDate_87("LOCALMKTDATE_995639885");
    noLegs_0_0.set(LegDatedDate_87);
    InstrumentLeg_87.insert(LegDatedDate_87.getString());
    FIX::LegExerciseStyle LegExerciseStyle_87(1140887017);
    noLegs_0_0.set(LegExerciseStyle_87);
    InstrumentLeg_87.insert(LegExerciseStyle_87.getString());
    FIX::LegFactor LegFactor_87;
    LegFactor_87.setString("14945272");
    noLegs_0_0.set(LegFactor_87);
    InstrumentLeg_87.insert(LegFactor_87.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_87(1607638378);
    noLegs_0_0.set(LegFlowScheduleType_87);
    InstrumentLeg_87.insert(LegFlowScheduleType_87.getString());
    FIX::LegInstrRegistry LegInstrRegistry_87("STRING_140548558");
    noLegs_0_0.set(LegInstrRegistry_87);
    InstrumentLeg_87.insert(LegInstrRegistry_87.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_87("LOCALMKTDATE_1059806750");
    noLegs_0_0.set(LegInterestAccrualDate_87);
    InstrumentLeg_87.insert(LegInterestAccrualDate_87.getString());
    FIX::LegIssueDate LegIssueDate_87("LOCALMKTDATE_484479827");
    noLegs_0_0.set(LegIssueDate_87);
    InstrumentLeg_87.insert(LegIssueDate_87.getString());
    FIX::LegIssuer LegIssuer_87("STRING_1114377448");
    noLegs_0_0.set(LegIssuer_87);
    InstrumentLeg_87.insert(LegIssuer_87.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_87("STRING_639128949");
    noLegs_0_0.set(LegLocaleOfIssue_87);
    InstrumentLeg_87.insert(LegLocaleOfIssue_87.getString());
    FIX::LegMaturityDate LegMaturityDate_87("LOCALMKTDATE_369948561");
    noLegs_0_0.set(LegMaturityDate_87);
    InstrumentLeg_87.insert(LegMaturityDate_87.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_87("MONTHYEAR_813811556");
    noLegs_0_0.set(LegMaturityMonthYear_87);
    InstrumentLeg_87.insert(LegMaturityMonthYear_87.getString());
    FIX::LegMaturityTime LegMaturityTime_87("TZTIMEONLY_1294922817");
    noLegs_0_0.set(LegMaturityTime_87);
    InstrumentLeg_87.insert(LegMaturityTime_87.getString());
    FIX::LegOptAttribute LegOptAttribute_87('8');
    noLegs_0_0.set(LegOptAttribute_87);
    InstrumentLeg_87.insert(LegOptAttribute_87.getString());
    FIX::LegOptionRatio LegOptionRatio_87;
    LegOptionRatio_87.setString("4415877");
    noLegs_0_0.set(LegOptionRatio_87);
    InstrumentLeg_87.insert(LegOptionRatio_87.getString());
    FIX::LegPool LegPool_87("STRING_272882907");
    noLegs_0_0.set(LegPool_87);
    InstrumentLeg_87.insert(LegPool_87.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_87("STRING_249962353");
    noLegs_0_0.set(LegPriceUnitOfMeasure_87);
    InstrumentLeg_87.insert(LegPriceUnitOfMeasure_87.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_87;
    LegPriceUnitOfMeasureQty_87.setString("4791186");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_87);
    InstrumentLeg_87.insert(LegPriceUnitOfMeasureQty_87.getString());
    FIX::LegProduct LegProduct_87(311705765);
    noLegs_0_0.set(LegProduct_87);
    InstrumentLeg_87.insert(LegProduct_87.getString());
    FIX::LegPutOrCall LegPutOrCall_87(327704221);
    noLegs_0_0.set(LegPutOrCall_87);
    InstrumentLeg_87.insert(LegPutOrCall_87.getString());
    FIX::LegRatioQty LegRatioQty_87;
    LegRatioQty_87.setString("20911930");
    noLegs_0_0.set(LegRatioQty_87);
    InstrumentLeg_87.insert(LegRatioQty_87.getString());
    FIX::LegRedemptionDate LegRedemptionDate_87("LOCALMKTDATE_1337504699");
    noLegs_0_0.set(LegRedemptionDate_87);
    InstrumentLeg_87.insert(LegRedemptionDate_87.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_87("STRING_951260327");
    noLegs_0_0.set(LegRepoCollateralSecurityType_87);
    InstrumentLeg_87.insert(LegRepoCollateralSecurityType_87.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_87;
    LegRepurchaseRate_87.setString("2.680000");
    noLegs_0_0.set(LegRepurchaseRate_87);
    InstrumentLeg_87.insert(LegRepurchaseRate_87.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_87(2061301502);
    noLegs_0_0.set(LegRepurchaseTerm_87);
    InstrumentLeg_87.insert(LegRepurchaseTerm_87.getString());
    FIX::LegSecurityDesc LegSecurityDesc_87("STRING_1405639283");
    noLegs_0_0.set(LegSecurityDesc_87);
    InstrumentLeg_87.insert(LegSecurityDesc_87.getString());
    FIX::LegSecurityExchange LegSecurityExchange_87("EXCHANGE_1337251791");
    noLegs_0_0.set(LegSecurityExchange_87);
    InstrumentLeg_87.insert(LegSecurityExchange_87.getString());
    FIX::LegSecurityID LegSecurityID_87("STRING_2133270165");
    noLegs_0_0.set(LegSecurityID_87);
    InstrumentLeg_87.insert(LegSecurityID_87.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_87("STRING_1316579577");
    noLegs_0_0.set(LegSecurityIDSource_87);
    InstrumentLeg_87.insert(LegSecurityIDSource_87.getString());
    FIX::LegSecuritySubType LegSecuritySubType_87("STRING_185571090");
    noLegs_0_0.set(LegSecuritySubType_87);
    InstrumentLeg_87.insert(LegSecuritySubType_87.getString());
    FIX::LegSecurityType LegSecurityType_87("STRING_1121408299");
    noLegs_0_0.set(LegSecurityType_87);
    InstrumentLeg_87.insert(LegSecurityType_87.getString());
    FIX::LegSide LegSide_87('1');
    noLegs_0_0.set(LegSide_87);
    InstrumentLeg_87.insert(LegSide_87.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_87("STRING_1181210975");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_87);
    InstrumentLeg_87.insert(LegStateOrProvinceOfIssue_87.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_87("JPY");
    noLegs_0_0.set(LegStrikeCurrency_87);
    InstrumentLeg_87.insert(LegStrikeCurrency_87.getString());
    FIX::LegStrikePrice LegStrikePrice_87;
    LegStrikePrice_87.setString("6413657");
    noLegs_0_0.set(LegStrikePrice_87);
    InstrumentLeg_87.insert(LegStrikePrice_87.getString());
    FIX::LegSymbol LegSymbol_87("STRING_255360227");
    noLegs_0_0.set(LegSymbol_87);
    InstrumentLeg_87.insert(LegSymbol_87.getString());
    FIX::LegSymbolSfx LegSymbolSfx_87("STRING_1970997991");
    noLegs_0_0.set(LegSymbolSfx_87);
    InstrumentLeg_87.insert(LegSymbolSfx_87.getString());
    FIX::LegTimeUnit LegTimeUnit_87("STRING_1125845532");
    noLegs_0_0.set(LegTimeUnit_87);
    InstrumentLeg_87.insert(LegTimeUnit_87.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_87("STRING_1369737675");
    noLegs_0_0.set(LegUnitOfMeasure_87);
    InstrumentLeg_87.insert(LegUnitOfMeasure_87.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_87;
    LegUnitOfMeasureQty_87.setString("4626432");
    noLegs_0_0.set(LegUnitOfMeasureQty_87);
    InstrumentLeg_87.insert(LegUnitOfMeasureQty_87.getString());
    all_values.push_back(InstrumentLeg_87);
    all_compo_names.insert("InstrumentLeg");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_176;
      FIX::LegSecurityAltID LegSecurityAltID_176("STRING_36065583");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_176);
      LegSecAltIDGrp_NoLegSecurityAltID_176.insert(LegSecurityAltID_176.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_176("STRING_1757566109");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_176);
      LegSecAltIDGrp_NoLegSecurityAltID_176.insert(LegSecurityAltIDSource_176.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_176);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    // LegPreAllocGrp
    // Group LegPreAllocGrp.NoLegAllocs
    {
      FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs noLegAllocs_0_1_0;
      // LegPreAllocGrp.NoLegAllocs
      multiset<string> LegPreAllocGrp_NoLegAllocs_1;
      FIX::LegAllocAccount LegAllocAccount_1("STRING_477653350");
      noLegAllocs_0_1_0.set(LegAllocAccount_1);
      LegPreAllocGrp_NoLegAllocs_1.insert(LegAllocAccount_1.getString());
      FIX::LegAllocAcctIDSource LegAllocAcctIDSource_1("STRING_2030449016");
      noLegAllocs_0_1_0.set(LegAllocAcctIDSource_1);
      LegPreAllocGrp_NoLegAllocs_1.insert(LegAllocAcctIDSource_1.getString());
      FIX::LegAllocQty LegAllocQty_1;
      LegAllocQty_1.setString("4486224");
      noLegAllocs_0_1_0.set(LegAllocQty_1);
      LegPreAllocGrp_NoLegAllocs_1.insert(LegAllocQty_1.getString());
      FIX::LegAllocSettlCurrency LegAllocSettlCurrency_1("CAN");
      noLegAllocs_0_1_0.set(LegAllocSettlCurrency_1);
      LegPreAllocGrp_NoLegAllocs_1.insert(LegAllocSettlCurrency_1.getString());
      FIX::LegIndividualAllocID LegIndividualAllocID_1("STRING_776326643");
      noLegAllocs_0_1_0.set(LegIndividualAllocID_1);
      LegPreAllocGrp_NoLegAllocs_1.insert(LegIndividualAllocID_1.getString());
      all_values.push_back(LegPreAllocGrp_NoLegAllocs_1);
      all_compo_names.insert("LegPreAllocGrp.NoLegAllocs");

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_0_0_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_25;
        FIX::Nested2PartyID Nested2PartyID_25("STRING_1532175832");
        noNested2PartyIDs_0_0_2_0.set(Nested2PartyID_25);
        NestedParties2_NoNested2PartyIDs_25.insert(Nested2PartyID_25.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_25('1');
        noNested2PartyIDs_0_0_2_0.set(Nested2PartyIDSource_25);
        NestedParties2_NoNested2PartyIDs_25.insert(Nested2PartyIDSource_25.getString());
        FIX::Nested2PartyRole Nested2PartyRole_25(455128058);
        noNested2PartyIDs_0_0_2_0.set(Nested2PartyRole_25);
        NestedParties2_NoNested2PartyIDs_25.insert(Nested2PartyRole_25.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_25);
        all_compo_names.insert("NestedParties2.NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_55;
          FIX::Nested2PartySubID Nested2PartySubID_55("STRING_985742605");
          noNested2PartySubIDs_0_0_0_3_0.set(Nested2PartySubID_55);
          NstdPtys2SubGrp_NoNested2PartySubIDs_55.insert(Nested2PartySubID_55.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_55(1792379849);
          noNested2PartySubIDs_0_0_0_3_0.set(Nested2PartySubIDType_55);
          NstdPtys2SubGrp_NoNested2PartySubIDs_55.insert(Nested2PartySubIDType_55.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_55);
          all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

          noNested2PartyIDs_0_0_2_0.addGroup(noNested2PartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_0_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_56;
          FIX::Nested2PartySubID Nested2PartySubID_56("STRING_1431780203");
          noNested2PartySubIDs_0_0_0_3_1.set(Nested2PartySubID_56);
          NstdPtys2SubGrp_NoNested2PartySubIDs_56.insert(Nested2PartySubID_56.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_56(154838535);
          noNested2PartySubIDs_0_0_0_3_1.set(Nested2PartySubIDType_56);
          NstdPtys2SubGrp_NoNested2PartySubIDs_56.insert(Nested2PartySubIDType_56.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_56);
          all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

          noNested2PartyIDs_0_0_2_0.addGroup(noNested2PartySubIDs_0_0_0_3_1);
        }
        noLegAllocs_0_1_0.addGroup(noNested2PartyIDs_0_0_2_0);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_0_0_2_1;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_26;
        FIX::Nested2PartyID Nested2PartyID_26("STRING_1977950939");
        noNested2PartyIDs_0_0_2_1.set(Nested2PartyID_26);
        NestedParties2_NoNested2PartyIDs_26.insert(Nested2PartyID_26.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_26('4');
        noNested2PartyIDs_0_0_2_1.set(Nested2PartyIDSource_26);
        NestedParties2_NoNested2PartyIDs_26.insert(Nested2PartyIDSource_26.getString());
        FIX::Nested2PartyRole Nested2PartyRole_26(1718986159);
        noNested2PartyIDs_0_0_2_1.set(Nested2PartyRole_26);
        NestedParties2_NoNested2PartyIDs_26.insert(Nested2PartyRole_26.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_26);
        all_compo_names.insert("NestedParties2.NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_1_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_57;
          FIX::Nested2PartySubID Nested2PartySubID_57("STRING_520516523");
          noNested2PartySubIDs_0_0_1_3_0.set(Nested2PartySubID_57);
          NstdPtys2SubGrp_NoNested2PartySubIDs_57.insert(Nested2PartySubID_57.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_57(482693752);
          noNested2PartySubIDs_0_0_1_3_0.set(Nested2PartySubIDType_57);
          NstdPtys2SubGrp_NoNested2PartySubIDs_57.insert(Nested2PartySubIDType_57.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_57);
          all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

          noNested2PartyIDs_0_0_2_1.addGroup(noNested2PartySubIDs_0_0_1_3_0);
        }
        {
          FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_1_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_58;
          FIX::Nested2PartySubID Nested2PartySubID_58("STRING_1653043971");
          noNested2PartySubIDs_0_0_1_3_1.set(Nested2PartySubID_58);
          NstdPtys2SubGrp_NoNested2PartySubIDs_58.insert(Nested2PartySubID_58.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_58(775876750);
          noNested2PartySubIDs_0_0_1_3_1.set(Nested2PartySubIDType_58);
          NstdPtys2SubGrp_NoNested2PartySubIDs_58.insert(Nested2PartySubIDType_58.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_58);
          all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

          noNested2PartyIDs_0_0_2_1.addGroup(noNested2PartySubIDs_0_0_1_3_1);
        }
        {
          FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_1_3_2;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_59;
          FIX::Nested2PartySubID Nested2PartySubID_59("STRING_306208095");
          noNested2PartySubIDs_0_0_1_3_2.set(Nested2PartySubID_59);
          NstdPtys2SubGrp_NoNested2PartySubIDs_59.insert(Nested2PartySubID_59.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_59(631405855);
          noNested2PartySubIDs_0_0_1_3_2.set(Nested2PartySubIDType_59);
          NstdPtys2SubGrp_NoNested2PartySubIDs_59.insert(Nested2PartySubIDType_59.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_59);
          all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

          noNested2PartyIDs_0_0_2_1.addGroup(noNested2PartySubIDs_0_0_1_3_2);
        }
        noLegAllocs_0_1_0.addGroup(noNested2PartyIDs_0_0_2_1);
      }
      noLegs_0_0.addGroup(noLegAllocs_0_1_0);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs noLegAllocs_0_1_1;
      // LegPreAllocGrp.NoLegAllocs
      multiset<string> LegPreAllocGrp_NoLegAllocs_2;
      FIX::LegAllocAccount LegAllocAccount_2("STRING_2145614425");
      noLegAllocs_0_1_1.set(LegAllocAccount_2);
      LegPreAllocGrp_NoLegAllocs_2.insert(LegAllocAccount_2.getString());
      FIX::LegAllocAcctIDSource LegAllocAcctIDSource_2("STRING_768851387");
      noLegAllocs_0_1_1.set(LegAllocAcctIDSource_2);
      LegPreAllocGrp_NoLegAllocs_2.insert(LegAllocAcctIDSource_2.getString());
      FIX::LegAllocQty LegAllocQty_2;
      LegAllocQty_2.setString("21271999");
      noLegAllocs_0_1_1.set(LegAllocQty_2);
      LegPreAllocGrp_NoLegAllocs_2.insert(LegAllocQty_2.getString());
      FIX::LegAllocSettlCurrency LegAllocSettlCurrency_2("CHF");
      noLegAllocs_0_1_1.set(LegAllocSettlCurrency_2);
      LegPreAllocGrp_NoLegAllocs_2.insert(LegAllocSettlCurrency_2.getString());
      FIX::LegIndividualAllocID LegIndividualAllocID_2("STRING_178376368");
      noLegAllocs_0_1_1.set(LegIndividualAllocID_2);
      LegPreAllocGrp_NoLegAllocs_2.insert(LegIndividualAllocID_2.getString());
      all_values.push_back(LegPreAllocGrp_NoLegAllocs_2);
      all_compo_names.insert("LegPreAllocGrp.NoLegAllocs");

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_0_1_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_27;
        FIX::Nested2PartyID Nested2PartyID_27("STRING_261899217");
        noNested2PartyIDs_0_1_2_0.set(Nested2PartyID_27);
        NestedParties2_NoNested2PartyIDs_27.insert(Nested2PartyID_27.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_27('6');
        noNested2PartyIDs_0_1_2_0.set(Nested2PartyIDSource_27);
        NestedParties2_NoNested2PartyIDs_27.insert(Nested2PartyIDSource_27.getString());
        FIX::Nested2PartyRole Nested2PartyRole_27(1468621721);
        noNested2PartyIDs_0_1_2_0.set(Nested2PartyRole_27);
        NestedParties2_NoNested2PartyIDs_27.insert(Nested2PartyRole_27.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_27);
        all_compo_names.insert("NestedParties2.NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_60;
          FIX::Nested2PartySubID Nested2PartySubID_60("STRING_1403325432");
          noNested2PartySubIDs_0_1_0_3_0.set(Nested2PartySubID_60);
          NstdPtys2SubGrp_NoNested2PartySubIDs_60.insert(Nested2PartySubID_60.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_60(221619511);
          noNested2PartySubIDs_0_1_0_3_0.set(Nested2PartySubIDType_60);
          NstdPtys2SubGrp_NoNested2PartySubIDs_60.insert(Nested2PartySubIDType_60.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_60);
          all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

          noNested2PartyIDs_0_1_2_0.addGroup(noNested2PartySubIDs_0_1_0_3_0);
        }
        noLegAllocs_0_1_1.addGroup(noNested2PartyIDs_0_1_2_0);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_0_1_2_1;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_28;
        FIX::Nested2PartyID Nested2PartyID_28("STRING_1988746183");
        noNested2PartyIDs_0_1_2_1.set(Nested2PartyID_28);
        NestedParties2_NoNested2PartyIDs_28.insert(Nested2PartyID_28.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_28('9');
        noNested2PartyIDs_0_1_2_1.set(Nested2PartyIDSource_28);
        NestedParties2_NoNested2PartyIDs_28.insert(Nested2PartyIDSource_28.getString());
        FIX::Nested2PartyRole Nested2PartyRole_28(676747569);
        noNested2PartyIDs_0_1_2_1.set(Nested2PartyRole_28);
        NestedParties2_NoNested2PartyIDs_28.insert(Nested2PartyRole_28.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_28);
        all_compo_names.insert("NestedParties2.NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_1_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_61;
          FIX::Nested2PartySubID Nested2PartySubID_61("STRING_1969171360");
          noNested2PartySubIDs_0_1_1_3_0.set(Nested2PartySubID_61);
          NstdPtys2SubGrp_NoNested2PartySubIDs_61.insert(Nested2PartySubID_61.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_61(321643770);
          noNested2PartySubIDs_0_1_1_3_0.set(Nested2PartySubIDType_61);
          NstdPtys2SubGrp_NoNested2PartySubIDs_61.insert(Nested2PartySubIDType_61.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_61);
          all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

          noNested2PartyIDs_0_1_2_1.addGroup(noNested2PartySubIDs_0_1_1_3_0);
        }
        {
          FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_1_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_62;
          FIX::Nested2PartySubID Nested2PartySubID_62("STRING_571552777");
          noNested2PartySubIDs_0_1_1_3_1.set(Nested2PartySubID_62);
          NstdPtys2SubGrp_NoNested2PartySubIDs_62.insert(Nested2PartySubID_62.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_62(2124009895);
          noNested2PartySubIDs_0_1_1_3_1.set(Nested2PartySubIDType_62);
          NstdPtys2SubGrp_NoNested2PartySubIDs_62.insert(Nested2PartySubIDType_62.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_62);
          all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

          noNested2PartyIDs_0_1_2_1.addGroup(noNested2PartySubIDs_0_1_1_3_1);
        }
        noLegAllocs_0_1_1.addGroup(noNested2PartyIDs_0_1_2_1);
      }
      noLegs_0_0.addGroup(noLegAllocs_0_1_1);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs noLegAllocs_0_1_2;
      // LegPreAllocGrp.NoLegAllocs
      multiset<string> LegPreAllocGrp_NoLegAllocs_3;
      FIX::LegAllocAccount LegAllocAccount_3("STRING_152111061");
      noLegAllocs_0_1_2.set(LegAllocAccount_3);
      LegPreAllocGrp_NoLegAllocs_3.insert(LegAllocAccount_3.getString());
      FIX::LegAllocAcctIDSource LegAllocAcctIDSource_3("STRING_977257632");
      noLegAllocs_0_1_2.set(LegAllocAcctIDSource_3);
      LegPreAllocGrp_NoLegAllocs_3.insert(LegAllocAcctIDSource_3.getString());
      FIX::LegAllocQty LegAllocQty_3;
      LegAllocQty_3.setString("16955124");
      noLegAllocs_0_1_2.set(LegAllocQty_3);
      LegPreAllocGrp_NoLegAllocs_3.insert(LegAllocQty_3.getString());
      FIX::LegAllocSettlCurrency LegAllocSettlCurrency_3("CAN");
      noLegAllocs_0_1_2.set(LegAllocSettlCurrency_3);
      LegPreAllocGrp_NoLegAllocs_3.insert(LegAllocSettlCurrency_3.getString());
      FIX::LegIndividualAllocID LegIndividualAllocID_3("STRING_30722511");
      noLegAllocs_0_1_2.set(LegIndividualAllocID_3);
      LegPreAllocGrp_NoLegAllocs_3.insert(LegIndividualAllocID_3.getString());
      all_values.push_back(LegPreAllocGrp_NoLegAllocs_3);
      all_compo_names.insert("LegPreAllocGrp.NoLegAllocs");

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_0_2_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_29;
        FIX::Nested2PartyID Nested2PartyID_29("STRING_126167257");
        noNested2PartyIDs_0_2_2_0.set(Nested2PartyID_29);
        NestedParties2_NoNested2PartyIDs_29.insert(Nested2PartyID_29.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_29('3');
        noNested2PartyIDs_0_2_2_0.set(Nested2PartyIDSource_29);
        NestedParties2_NoNested2PartyIDs_29.insert(Nested2PartyIDSource_29.getString());
        FIX::Nested2PartyRole Nested2PartyRole_29(1300755505);
        noNested2PartyIDs_0_2_2_0.set(Nested2PartyRole_29);
        NestedParties2_NoNested2PartyIDs_29.insert(Nested2PartyRole_29.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_29);
        all_compo_names.insert("NestedParties2.NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_2_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_63;
          FIX::Nested2PartySubID Nested2PartySubID_63("STRING_1105781993");
          noNested2PartySubIDs_0_2_0_3_0.set(Nested2PartySubID_63);
          NstdPtys2SubGrp_NoNested2PartySubIDs_63.insert(Nested2PartySubID_63.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_63(1280471805);
          noNested2PartySubIDs_0_2_0_3_0.set(Nested2PartySubIDType_63);
          NstdPtys2SubGrp_NoNested2PartySubIDs_63.insert(Nested2PartySubIDType_63.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_63);
          all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

          noNested2PartyIDs_0_2_2_0.addGroup(noNested2PartySubIDs_0_2_0_3_0);
        }
        noLegAllocs_0_1_2.addGroup(noNested2PartyIDs_0_2_2_0);
      }
      noLegs_0_0.addGroup(noLegAllocs_0_1_2);
    }
    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegStipulations noLegStipulations_0_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_7;
      FIX::LegStipulationType LegStipulationType_7("STRING_1484715842");
      noLegStipulations_0_1_0.set(LegStipulationType_7);
      LegStipulations_NoLegStipulations_7.insert(LegStipulationType_7.getString());
      FIX::LegStipulationValue LegStipulationValue_7("STRING_1458848173");
      noLegStipulations_0_1_0.set(LegStipulationValue_7);
      LegStipulations_NoLegStipulations_7.insert(LegStipulationValue_7.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_7);
      all_compo_names.insert("LegStipulations.NoLegStipulations");

      noLegs_0_0.addGroup(noLegStipulations_0_1_0);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_43;
      FIX::NestedPartyID NestedPartyID_43("STRING_1746615060");
      noNestedPartyIDs_0_1_0.set(NestedPartyID_43);
      NestedParties_NoNestedPartyIDs_43.insert(NestedPartyID_43.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_43('2');
      noNestedPartyIDs_0_1_0.set(NestedPartyIDSource_43);
      NestedParties_NoNestedPartyIDs_43.insert(NestedPartyIDSource_43.getString());
      FIX::NestedPartyRole NestedPartyRole_43(2138965827);
      noNestedPartyIDs_0_1_0.set(NestedPartyRole_43);
      NestedParties_NoNestedPartyIDs_43.insert(NestedPartyRole_43.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_43);
      all_compo_names.insert("NestedParties.NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_90;
        FIX::NestedPartySubID NestedPartySubID_90("STRING_1341688747");
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubID_90);
        NstdPtysSubGrp_NoNestedPartySubIDs_90.insert(NestedPartySubID_90.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_90(213101690);
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubIDType_90);
        NstdPtysSubGrp_NoNestedPartySubIDs_90.insert(NestedPartySubIDType_90.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_90);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_91;
        FIX::NestedPartySubID NestedPartySubID_91("STRING_2044447946");
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubID_91);
        NstdPtysSubGrp_NoNestedPartySubIDs_91.insert(NestedPartySubID_91.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_91(177633854);
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubIDType_91);
        NstdPtysSubGrp_NoNestedPartySubIDs_91.insert(NestedPartySubIDType_91.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_91);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_1);
      }
      noLegs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_44;
      FIX::NestedPartyID NestedPartyID_44("STRING_889849259");
      noNestedPartyIDs_0_1_1.set(NestedPartyID_44);
      NestedParties_NoNestedPartyIDs_44.insert(NestedPartyID_44.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_44('1');
      noNestedPartyIDs_0_1_1.set(NestedPartyIDSource_44);
      NestedParties_NoNestedPartyIDs_44.insert(NestedPartyIDSource_44.getString());
      FIX::NestedPartyRole NestedPartyRole_44(2146805214);
      noNestedPartyIDs_0_1_1.set(NestedPartyRole_44);
      NestedParties_NoNestedPartyIDs_44.insert(NestedPartyRole_44.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_44);
      all_compo_names.insert("NestedParties.NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_92;
        FIX::NestedPartySubID NestedPartySubID_92("STRING_1755773298");
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubID_92);
        NstdPtysSubGrp_NoNestedPartySubIDs_92.insert(NestedPartySubID_92.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_92(2123331462);
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubIDType_92);
        NstdPtysSubGrp_NoNestedPartySubIDs_92.insert(NestedPartySubIDType_92.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_92);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_93;
        FIX::NestedPartySubID NestedPartySubID_93("STRING_1363604090");
        noNestedPartySubIDs_0_1_2_1.set(NestedPartySubID_93);
        NstdPtysSubGrp_NoNestedPartySubIDs_93.insert(NestedPartySubID_93.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_93(585547282);
        noNestedPartySubIDs_0_1_2_1.set(NestedPartySubIDType_93);
        NstdPtysSubGrp_NoNestedPartySubIDs_93.insert(NestedPartySubIDType_93.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_93);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_94;
        FIX::NestedPartySubID NestedPartySubID_94("STRING_1671360221");
        noNestedPartySubIDs_0_1_2_2.set(NestedPartySubID_94);
        NstdPtysSubGrp_NoNestedPartySubIDs_94.insert(NestedPartySubID_94.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_94(379909769);
        noNestedPartySubIDs_0_1_2_2.set(NestedPartySubIDType_94);
        NstdPtysSubGrp_NoNestedPartySubIDs_94.insert(NestedPartySubIDType_94.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_94);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_2);
      }
      noLegs_0_0.addGroup(noNestedPartyIDs_0_1_1);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::MultilegOrderCancelReplace::NoLegs noLegs_0_1;
    // LegOrdGrp.NoLegs
    multiset<string> LegOrdGrp_NoLegs_1;
    FIX::LegAllocID LegAllocID_2("STRING_2083321437");
    noLegs_0_1.set(LegAllocID_2);
    LegOrdGrp_NoLegs_1.insert(LegAllocID_2.getString());
    FIX::LegCoveredOrUncovered LegCoveredOrUncovered_2(1702082732);
    noLegs_0_1.set(LegCoveredOrUncovered_2);
    LegOrdGrp_NoLegs_1.insert(LegCoveredOrUncovered_2.getString());
    FIX::LegCurrencyRatio LegCurrencyRatio_2;
    LegCurrencyRatio_2.setString("10492594");
    noLegs_0_1.set(LegCurrencyRatio_2);
    LegOrdGrp_NoLegs_1.insert(LegCurrencyRatio_2.getString());
    FIX::LegDividendYield LegDividendYield_2;
    LegDividendYield_2.setString("50.460000");
    noLegs_0_1.set(LegDividendYield_2);
    LegOrdGrp_NoLegs_1.insert(LegDividendYield_2.getString());
    FIX::LegExecInst LegExecInst_2("MULTIPLECHARVALUE_2039013338");
    noLegs_0_1.set(LegExecInst_2);
    LegOrdGrp_NoLegs_1.insert(LegExecInst_2.getString());
    FIX::LegOrderQty LegOrderQty_2;
    LegOrderQty_2.setString("2025312");
    noLegs_0_1.set(LegOrderQty_2);
    LegOrdGrp_NoLegs_1.insert(LegOrderQty_2.getString());
    FIX::LegPositionEffect LegPositionEffect_2('1');
    noLegs_0_1.set(LegPositionEffect_2);
    LegOrdGrp_NoLegs_1.insert(LegPositionEffect_2.getString());
    FIX::LegQty LegQty_2;
    LegQty_2.setString("9973116");
    noLegs_0_1.set(LegQty_2);
    LegOrdGrp_NoLegs_1.insert(LegQty_2.getString());
    FIX::LegRefID LegRefID_2("STRING_1483003081");
    noLegs_0_1.set(LegRefID_2);
    LegOrdGrp_NoLegs_1.insert(LegRefID_2.getString());
    FIX::LegSettlCurrency LegSettlCurrency_2("USD");
    noLegs_0_1.set(LegSettlCurrency_2);
    LegOrdGrp_NoLegs_1.insert(LegSettlCurrency_2.getString());
    FIX::LegSettlDate LegSettlDate_2("LOCALMKTDATE_794367606");
    noLegs_0_1.set(LegSettlDate_2);
    LegOrdGrp_NoLegs_1.insert(LegSettlDate_2.getString());
    FIX::LegSettlType LegSettlType_2('1');
    noLegs_0_1.set(LegSettlType_2);
    LegOrdGrp_NoLegs_1.insert(LegSettlType_2.getString());
    FIX::LegSwapType LegSwapType_2(4);
    noLegs_0_1.set(LegSwapType_2);
    LegOrdGrp_NoLegs_1.insert(LegSwapType_2.getString());
    FIX::LegVolatility LegVolatility_2;
    LegVolatility_2.setString("7327309");
    noLegs_0_1.set(LegVolatility_2);
    LegOrdGrp_NoLegs_1.insert(LegVolatility_2.getString());
    all_values.push_back(LegOrdGrp_NoLegs_1);
    all_compo_names.insert("LegOrdGrp.NoLegs");

    // InstrumentLeg
    multiset<string> InstrumentLeg_88;
    FIX::EncodedLegIssuer EncodedLegIssuer_88("DATA_1006623762");
    noLegs_0_1.set(EncodedLegIssuer_88);
    InstrumentLeg_88.insert(EncodedLegIssuer_88.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_88(2136860701);
    noLegs_0_1.set(EncodedLegIssuerLen_88);
    InstrumentLeg_88.insert(EncodedLegIssuerLen_88.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_88("DATA_2074419668");
    noLegs_0_1.set(EncodedLegSecurityDesc_88);
    InstrumentLeg_88.insert(EncodedLegSecurityDesc_88.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_88(1219725452);
    noLegs_0_1.set(EncodedLegSecurityDescLen_88);
    InstrumentLeg_88.insert(EncodedLegSecurityDescLen_88.getString());
    FIX::LegCFICode LegCFICode_88("STRING_2033824999");
    noLegs_0_1.set(LegCFICode_88);
    InstrumentLeg_88.insert(LegCFICode_88.getString());
    FIX::LegContractMultiplier LegContractMultiplier_88;
    LegContractMultiplier_88.setString("1045698");
    noLegs_0_1.set(LegContractMultiplier_88);
    InstrumentLeg_88.insert(LegContractMultiplier_88.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_88(2109574712);
    noLegs_0_1.set(LegContractMultiplierUnit_88);
    InstrumentLeg_88.insert(LegContractMultiplierUnit_88.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_88("MONTHYEAR_1070561872");
    noLegs_0_1.set(LegContractSettlMonth_88);
    InstrumentLeg_88.insert(LegContractSettlMonth_88.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_88("COUNTRY_103891440");
    noLegs_0_1.set(LegCountryOfIssue_88);
    InstrumentLeg_88.insert(LegCountryOfIssue_88.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_88("LOCALMKTDATE_1173584093");
    noLegs_0_1.set(LegCouponPaymentDate_88);
    InstrumentLeg_88.insert(LegCouponPaymentDate_88.getString());
    FIX::LegCouponRate LegCouponRate_88;
    LegCouponRate_88.setString("15.220000");
    noLegs_0_1.set(LegCouponRate_88);
    InstrumentLeg_88.insert(LegCouponRate_88.getString());
    FIX::LegCreditRating LegCreditRating_88("STRING_79739254");
    noLegs_0_1.set(LegCreditRating_88);
    InstrumentLeg_88.insert(LegCreditRating_88.getString());
    FIX::LegCurrency LegCurrency_88("USD");
    noLegs_0_1.set(LegCurrency_88);
    InstrumentLeg_88.insert(LegCurrency_88.getString());
    FIX::LegDatedDate LegDatedDate_88("LOCALMKTDATE_1751099475");
    noLegs_0_1.set(LegDatedDate_88);
    InstrumentLeg_88.insert(LegDatedDate_88.getString());
    FIX::LegExerciseStyle LegExerciseStyle_88(769614305);
    noLegs_0_1.set(LegExerciseStyle_88);
    InstrumentLeg_88.insert(LegExerciseStyle_88.getString());
    FIX::LegFactor LegFactor_88;
    LegFactor_88.setString("12002365");
    noLegs_0_1.set(LegFactor_88);
    InstrumentLeg_88.insert(LegFactor_88.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_88(1305698559);
    noLegs_0_1.set(LegFlowScheduleType_88);
    InstrumentLeg_88.insert(LegFlowScheduleType_88.getString());
    FIX::LegInstrRegistry LegInstrRegistry_88("STRING_1818873725");
    noLegs_0_1.set(LegInstrRegistry_88);
    InstrumentLeg_88.insert(LegInstrRegistry_88.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_88("LOCALMKTDATE_1262241639");
    noLegs_0_1.set(LegInterestAccrualDate_88);
    InstrumentLeg_88.insert(LegInterestAccrualDate_88.getString());
    FIX::LegIssueDate LegIssueDate_88("LOCALMKTDATE_1197228249");
    noLegs_0_1.set(LegIssueDate_88);
    InstrumentLeg_88.insert(LegIssueDate_88.getString());
    FIX::LegIssuer LegIssuer_88("STRING_2021405001");
    noLegs_0_1.set(LegIssuer_88);
    InstrumentLeg_88.insert(LegIssuer_88.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_88("STRING_1448544719");
    noLegs_0_1.set(LegLocaleOfIssue_88);
    InstrumentLeg_88.insert(LegLocaleOfIssue_88.getString());
    FIX::LegMaturityDate LegMaturityDate_88("LOCALMKTDATE_47056285");
    noLegs_0_1.set(LegMaturityDate_88);
    InstrumentLeg_88.insert(LegMaturityDate_88.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_88("MONTHYEAR_1356924435");
    noLegs_0_1.set(LegMaturityMonthYear_88);
    InstrumentLeg_88.insert(LegMaturityMonthYear_88.getString());
    FIX::LegMaturityTime LegMaturityTime_88("TZTIMEONLY_1793342195");
    noLegs_0_1.set(LegMaturityTime_88);
    InstrumentLeg_88.insert(LegMaturityTime_88.getString());
    FIX::LegOptAttribute LegOptAttribute_88('3');
    noLegs_0_1.set(LegOptAttribute_88);
    InstrumentLeg_88.insert(LegOptAttribute_88.getString());
    FIX::LegOptionRatio LegOptionRatio_88;
    LegOptionRatio_88.setString("38083");
    noLegs_0_1.set(LegOptionRatio_88);
    InstrumentLeg_88.insert(LegOptionRatio_88.getString());
    FIX::LegPool LegPool_88("STRING_661000130");
    noLegs_0_1.set(LegPool_88);
    InstrumentLeg_88.insert(LegPool_88.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_88("STRING_315275453");
    noLegs_0_1.set(LegPriceUnitOfMeasure_88);
    InstrumentLeg_88.insert(LegPriceUnitOfMeasure_88.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_88;
    LegPriceUnitOfMeasureQty_88.setString("7365393");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_88);
    InstrumentLeg_88.insert(LegPriceUnitOfMeasureQty_88.getString());
    FIX::LegProduct LegProduct_88(1667623892);
    noLegs_0_1.set(LegProduct_88);
    InstrumentLeg_88.insert(LegProduct_88.getString());
    FIX::LegPutOrCall LegPutOrCall_88(304652506);
    noLegs_0_1.set(LegPutOrCall_88);
    InstrumentLeg_88.insert(LegPutOrCall_88.getString());
    FIX::LegRatioQty LegRatioQty_88;
    LegRatioQty_88.setString("6634753");
    noLegs_0_1.set(LegRatioQty_88);
    InstrumentLeg_88.insert(LegRatioQty_88.getString());
    FIX::LegRedemptionDate LegRedemptionDate_88("LOCALMKTDATE_739865696");
    noLegs_0_1.set(LegRedemptionDate_88);
    InstrumentLeg_88.insert(LegRedemptionDate_88.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_88("STRING_190993857");
    noLegs_0_1.set(LegRepoCollateralSecurityType_88);
    InstrumentLeg_88.insert(LegRepoCollateralSecurityType_88.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_88;
    LegRepurchaseRate_88.setString("52.080000");
    noLegs_0_1.set(LegRepurchaseRate_88);
    InstrumentLeg_88.insert(LegRepurchaseRate_88.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_88(701956760);
    noLegs_0_1.set(LegRepurchaseTerm_88);
    InstrumentLeg_88.insert(LegRepurchaseTerm_88.getString());
    FIX::LegSecurityDesc LegSecurityDesc_88("STRING_1261555729");
    noLegs_0_1.set(LegSecurityDesc_88);
    InstrumentLeg_88.insert(LegSecurityDesc_88.getString());
    FIX::LegSecurityExchange LegSecurityExchange_88("EXCHANGE_871936649");
    noLegs_0_1.set(LegSecurityExchange_88);
    InstrumentLeg_88.insert(LegSecurityExchange_88.getString());
    FIX::LegSecurityID LegSecurityID_88("STRING_1875540854");
    noLegs_0_1.set(LegSecurityID_88);
    InstrumentLeg_88.insert(LegSecurityID_88.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_88("STRING_1940407251");
    noLegs_0_1.set(LegSecurityIDSource_88);
    InstrumentLeg_88.insert(LegSecurityIDSource_88.getString());
    FIX::LegSecuritySubType LegSecuritySubType_88("STRING_951675903");
    noLegs_0_1.set(LegSecuritySubType_88);
    InstrumentLeg_88.insert(LegSecuritySubType_88.getString());
    FIX::LegSecurityType LegSecurityType_88("STRING_117761742");
    noLegs_0_1.set(LegSecurityType_88);
    InstrumentLeg_88.insert(LegSecurityType_88.getString());
    FIX::LegSide LegSide_88('1');
    noLegs_0_1.set(LegSide_88);
    InstrumentLeg_88.insert(LegSide_88.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_88("STRING_555291731");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_88);
    InstrumentLeg_88.insert(LegStateOrProvinceOfIssue_88.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_88("USD");
    noLegs_0_1.set(LegStrikeCurrency_88);
    InstrumentLeg_88.insert(LegStrikeCurrency_88.getString());
    FIX::LegStrikePrice LegStrikePrice_88;
    LegStrikePrice_88.setString("18609902");
    noLegs_0_1.set(LegStrikePrice_88);
    InstrumentLeg_88.insert(LegStrikePrice_88.getString());
    FIX::LegSymbol LegSymbol_88("STRING_558766124");
    noLegs_0_1.set(LegSymbol_88);
    InstrumentLeg_88.insert(LegSymbol_88.getString());
    FIX::LegSymbolSfx LegSymbolSfx_88("STRING_1372316991");
    noLegs_0_1.set(LegSymbolSfx_88);
    InstrumentLeg_88.insert(LegSymbolSfx_88.getString());
    FIX::LegTimeUnit LegTimeUnit_88("STRING_910734892");
    noLegs_0_1.set(LegTimeUnit_88);
    InstrumentLeg_88.insert(LegTimeUnit_88.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_88("STRING_432687478");
    noLegs_0_1.set(LegUnitOfMeasure_88);
    InstrumentLeg_88.insert(LegUnitOfMeasure_88.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_88;
    LegUnitOfMeasureQty_88.setString("6733780");
    noLegs_0_1.set(LegUnitOfMeasureQty_88);
    InstrumentLeg_88.insert(LegUnitOfMeasureQty_88.getString());
    all_values.push_back(InstrumentLeg_88);
    all_compo_names.insert("InstrumentLeg");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_177;
      FIX::LegSecurityAltID LegSecurityAltID_177("STRING_1789611913");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_177);
      LegSecAltIDGrp_NoLegSecurityAltID_177.insert(LegSecurityAltID_177.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_177("STRING_319236610");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_177);
      LegSecAltIDGrp_NoLegSecurityAltID_177.insert(LegSecurityAltIDSource_177.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_177);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_178;
      FIX::LegSecurityAltID LegSecurityAltID_178("STRING_1339391340");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltID_178);
      LegSecAltIDGrp_NoLegSecurityAltID_178.insert(LegSecurityAltID_178.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_178("STRING_1793420306");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltIDSource_178);
      LegSecAltIDGrp_NoLegSecurityAltID_178.insert(LegSecurityAltIDSource_178.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_178);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_179;
      FIX::LegSecurityAltID LegSecurityAltID_179("STRING_980236740");
      noLegSecurityAltID_1_1_2.set(LegSecurityAltID_179);
      LegSecAltIDGrp_NoLegSecurityAltID_179.insert(LegSecurityAltID_179.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_179("STRING_1654666793");
      noLegSecurityAltID_1_1_2.set(LegSecurityAltIDSource_179);
      LegSecAltIDGrp_NoLegSecurityAltID_179.insert(LegSecurityAltIDSource_179.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_179);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_2);
    }
    // LegPreAllocGrp
    // Group LegPreAllocGrp.NoLegAllocs
    {
      FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs noLegAllocs_1_1_0;
      // LegPreAllocGrp.NoLegAllocs
      multiset<string> LegPreAllocGrp_NoLegAllocs_4;
      FIX::LegAllocAccount LegAllocAccount_4("STRING_500376984");
      noLegAllocs_1_1_0.set(LegAllocAccount_4);
      LegPreAllocGrp_NoLegAllocs_4.insert(LegAllocAccount_4.getString());
      FIX::LegAllocAcctIDSource LegAllocAcctIDSource_4("STRING_1959319299");
      noLegAllocs_1_1_0.set(LegAllocAcctIDSource_4);
      LegPreAllocGrp_NoLegAllocs_4.insert(LegAllocAcctIDSource_4.getString());
      FIX::LegAllocQty LegAllocQty_4;
      LegAllocQty_4.setString("10459513");
      noLegAllocs_1_1_0.set(LegAllocQty_4);
      LegPreAllocGrp_NoLegAllocs_4.insert(LegAllocQty_4.getString());
      FIX::LegAllocSettlCurrency LegAllocSettlCurrency_4("JPY");
      noLegAllocs_1_1_0.set(LegAllocSettlCurrency_4);
      LegPreAllocGrp_NoLegAllocs_4.insert(LegAllocSettlCurrency_4.getString());
      FIX::LegIndividualAllocID LegIndividualAllocID_4("STRING_1813996516");
      noLegAllocs_1_1_0.set(LegIndividualAllocID_4);
      LegPreAllocGrp_NoLegAllocs_4.insert(LegIndividualAllocID_4.getString());
      all_values.push_back(LegPreAllocGrp_NoLegAllocs_4);
      all_compo_names.insert("LegPreAllocGrp.NoLegAllocs");

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_1_0_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_30;
        FIX::Nested2PartyID Nested2PartyID_30("STRING_1264385238");
        noNested2PartyIDs_1_0_2_0.set(Nested2PartyID_30);
        NestedParties2_NoNested2PartyIDs_30.insert(Nested2PartyID_30.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_30('5');
        noNested2PartyIDs_1_0_2_0.set(Nested2PartyIDSource_30);
        NestedParties2_NoNested2PartyIDs_30.insert(Nested2PartyIDSource_30.getString());
        FIX::Nested2PartyRole Nested2PartyRole_30(1670256647);
        noNested2PartyIDs_1_0_2_0.set(Nested2PartyRole_30);
        NestedParties2_NoNested2PartyIDs_30.insert(Nested2PartyRole_30.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_30);
        all_compo_names.insert("NestedParties2.NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_64;
          FIX::Nested2PartySubID Nested2PartySubID_64("STRING_1490125420");
          noNested2PartySubIDs_1_0_0_3_0.set(Nested2PartySubID_64);
          NstdPtys2SubGrp_NoNested2PartySubIDs_64.insert(Nested2PartySubID_64.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_64(1788018389);
          noNested2PartySubIDs_1_0_0_3_0.set(Nested2PartySubIDType_64);
          NstdPtys2SubGrp_NoNested2PartySubIDs_64.insert(Nested2PartySubIDType_64.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_64);
          all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

          noNested2PartyIDs_1_0_2_0.addGroup(noNested2PartySubIDs_1_0_0_3_0);
        }
        {
          FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_0_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_65;
          FIX::Nested2PartySubID Nested2PartySubID_65("STRING_2114631249");
          noNested2PartySubIDs_1_0_0_3_1.set(Nested2PartySubID_65);
          NstdPtys2SubGrp_NoNested2PartySubIDs_65.insert(Nested2PartySubID_65.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_65(2045417151);
          noNested2PartySubIDs_1_0_0_3_1.set(Nested2PartySubIDType_65);
          NstdPtys2SubGrp_NoNested2PartySubIDs_65.insert(Nested2PartySubIDType_65.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_65);
          all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

          noNested2PartyIDs_1_0_2_0.addGroup(noNested2PartySubIDs_1_0_0_3_1);
        }
        noLegAllocs_1_1_0.addGroup(noNested2PartyIDs_1_0_2_0);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_1_0_2_1;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_31;
        FIX::Nested2PartyID Nested2PartyID_31("STRING_527910789");
        noNested2PartyIDs_1_0_2_1.set(Nested2PartyID_31);
        NestedParties2_NoNested2PartyIDs_31.insert(Nested2PartyID_31.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_31('7');
        noNested2PartyIDs_1_0_2_1.set(Nested2PartyIDSource_31);
        NestedParties2_NoNested2PartyIDs_31.insert(Nested2PartyIDSource_31.getString());
        FIX::Nested2PartyRole Nested2PartyRole_31(1758923794);
        noNested2PartyIDs_1_0_2_1.set(Nested2PartyRole_31);
        NestedParties2_NoNested2PartyIDs_31.insert(Nested2PartyRole_31.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_31);
        all_compo_names.insert("NestedParties2.NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_1_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_66;
          FIX::Nested2PartySubID Nested2PartySubID_66("STRING_1449539945");
          noNested2PartySubIDs_1_0_1_3_0.set(Nested2PartySubID_66);
          NstdPtys2SubGrp_NoNested2PartySubIDs_66.insert(Nested2PartySubID_66.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_66(522175038);
          noNested2PartySubIDs_1_0_1_3_0.set(Nested2PartySubIDType_66);
          NstdPtys2SubGrp_NoNested2PartySubIDs_66.insert(Nested2PartySubIDType_66.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_66);
          all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

          noNested2PartyIDs_1_0_2_1.addGroup(noNested2PartySubIDs_1_0_1_3_0);
        }
        {
          FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_1_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_67;
          FIX::Nested2PartySubID Nested2PartySubID_67("STRING_1519364391");
          noNested2PartySubIDs_1_0_1_3_1.set(Nested2PartySubID_67);
          NstdPtys2SubGrp_NoNested2PartySubIDs_67.insert(Nested2PartySubID_67.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_67(2122918008);
          noNested2PartySubIDs_1_0_1_3_1.set(Nested2PartySubIDType_67);
          NstdPtys2SubGrp_NoNested2PartySubIDs_67.insert(Nested2PartySubIDType_67.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_67);
          all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

          noNested2PartyIDs_1_0_2_1.addGroup(noNested2PartySubIDs_1_0_1_3_1);
        }
        {
          FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_1_3_2;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_68;
          FIX::Nested2PartySubID Nested2PartySubID_68("STRING_1479966215");
          noNested2PartySubIDs_1_0_1_3_2.set(Nested2PartySubID_68);
          NstdPtys2SubGrp_NoNested2PartySubIDs_68.insert(Nested2PartySubID_68.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_68(1161492656);
          noNested2PartySubIDs_1_0_1_3_2.set(Nested2PartySubIDType_68);
          NstdPtys2SubGrp_NoNested2PartySubIDs_68.insert(Nested2PartySubIDType_68.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_68);
          all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

          noNested2PartyIDs_1_0_2_1.addGroup(noNested2PartySubIDs_1_0_1_3_2);
        }
        noLegAllocs_1_1_0.addGroup(noNested2PartyIDs_1_0_2_1);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_1_0_2_2;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_32;
        FIX::Nested2PartyID Nested2PartyID_32("STRING_294670970");
        noNested2PartyIDs_1_0_2_2.set(Nested2PartyID_32);
        NestedParties2_NoNested2PartyIDs_32.insert(Nested2PartyID_32.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_32('6');
        noNested2PartyIDs_1_0_2_2.set(Nested2PartyIDSource_32);
        NestedParties2_NoNested2PartyIDs_32.insert(Nested2PartyIDSource_32.getString());
        FIX::Nested2PartyRole Nested2PartyRole_32(807429315);
        noNested2PartyIDs_1_0_2_2.set(Nested2PartyRole_32);
        NestedParties2_NoNested2PartyIDs_32.insert(Nested2PartyRole_32.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_32);
        all_compo_names.insert("NestedParties2.NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_2_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_69;
          FIX::Nested2PartySubID Nested2PartySubID_69("STRING_179057052");
          noNested2PartySubIDs_1_0_2_3_0.set(Nested2PartySubID_69);
          NstdPtys2SubGrp_NoNested2PartySubIDs_69.insert(Nested2PartySubID_69.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_69(1189905288);
          noNested2PartySubIDs_1_0_2_3_0.set(Nested2PartySubIDType_69);
          NstdPtys2SubGrp_NoNested2PartySubIDs_69.insert(Nested2PartySubIDType_69.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_69);
          all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

          noNested2PartyIDs_1_0_2_2.addGroup(noNested2PartySubIDs_1_0_2_3_0);
        }
        noLegAllocs_1_1_0.addGroup(noNested2PartyIDs_1_0_2_2);
      }
      noLegs_0_1.addGroup(noLegAllocs_1_1_0);
    }
    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegStipulations noLegStipulations_1_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_8;
      FIX::LegStipulationType LegStipulationType_8("STRING_2138376351");
      noLegStipulations_1_1_0.set(LegStipulationType_8);
      LegStipulations_NoLegStipulations_8.insert(LegStipulationType_8.getString());
      FIX::LegStipulationValue LegStipulationValue_8("STRING_88372947");
      noLegStipulations_1_1_0.set(LegStipulationValue_8);
      LegStipulations_NoLegStipulations_8.insert(LegStipulationValue_8.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_8);
      all_compo_names.insert("LegStipulations.NoLegStipulations");

      noLegs_0_1.addGroup(noLegStipulations_1_1_0);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoNestedPartyIDs noNestedPartyIDs_1_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_45;
      FIX::NestedPartyID NestedPartyID_45("STRING_2141205859");
      noNestedPartyIDs_1_1_0.set(NestedPartyID_45);
      NestedParties_NoNestedPartyIDs_45.insert(NestedPartyID_45.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_45('1');
      noNestedPartyIDs_1_1_0.set(NestedPartyIDSource_45);
      NestedParties_NoNestedPartyIDs_45.insert(NestedPartyIDSource_45.getString());
      FIX::NestedPartyRole NestedPartyRole_45(662759522);
      noNestedPartyIDs_1_1_0.set(NestedPartyRole_45);
      NestedParties_NoNestedPartyIDs_45.insert(NestedPartyRole_45.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_45);
      all_compo_names.insert("NestedParties.NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_95;
        FIX::NestedPartySubID NestedPartySubID_95("STRING_293335332");
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubID_95);
        NstdPtysSubGrp_NoNestedPartySubIDs_95.insert(NestedPartySubID_95.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_95(185532521);
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubIDType_95);
        NstdPtysSubGrp_NoNestedPartySubIDs_95.insert(NestedPartySubIDType_95.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_95);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_96;
        FIX::NestedPartySubID NestedPartySubID_96("STRING_167932643");
        noNestedPartySubIDs_1_0_2_1.set(NestedPartySubID_96);
        NstdPtysSubGrp_NoNestedPartySubIDs_96.insert(NestedPartySubID_96.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_96(1783460753);
        noNestedPartySubIDs_1_0_2_1.set(NestedPartySubIDType_96);
        NstdPtysSubGrp_NoNestedPartySubIDs_96.insert(NestedPartySubIDType_96.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_96);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_97;
        FIX::NestedPartySubID NestedPartySubID_97("STRING_1973550911");
        noNestedPartySubIDs_1_0_2_2.set(NestedPartySubID_97);
        NstdPtysSubGrp_NoNestedPartySubIDs_97.insert(NestedPartySubID_97.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_97(135080244);
        noNestedPartySubIDs_1_0_2_2.set(NestedPartySubIDType_97);
        NstdPtysSubGrp_NoNestedPartySubIDs_97.insert(NestedPartySubIDType_97.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_97);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_2);
      }
      noLegs_0_1.addGroup(noNestedPartyIDs_1_1_0);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoNestedPartyIDs noNestedPartyIDs_1_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_46;
      FIX::NestedPartyID NestedPartyID_46("STRING_1681394256");
      noNestedPartyIDs_1_1_1.set(NestedPartyID_46);
      NestedParties_NoNestedPartyIDs_46.insert(NestedPartyID_46.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_46('3');
      noNestedPartyIDs_1_1_1.set(NestedPartyIDSource_46);
      NestedParties_NoNestedPartyIDs_46.insert(NestedPartyIDSource_46.getString());
      FIX::NestedPartyRole NestedPartyRole_46(212303197);
      noNestedPartyIDs_1_1_1.set(NestedPartyRole_46);
      NestedParties_NoNestedPartyIDs_46.insert(NestedPartyRole_46.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_46);
      all_compo_names.insert("NestedParties.NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_98;
        FIX::NestedPartySubID NestedPartySubID_98("STRING_1440654965");
        noNestedPartySubIDs_1_1_2_0.set(NestedPartySubID_98);
        NstdPtysSubGrp_NoNestedPartySubIDs_98.insert(NestedPartySubID_98.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_98(1661843142);
        noNestedPartySubIDs_1_1_2_0.set(NestedPartySubIDType_98);
        NstdPtysSubGrp_NoNestedPartySubIDs_98.insert(NestedPartySubIDType_98.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_98);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_99;
        FIX::NestedPartySubID NestedPartySubID_99("STRING_1815009440");
        noNestedPartySubIDs_1_1_2_1.set(NestedPartySubID_99);
        NstdPtysSubGrp_NoNestedPartySubIDs_99.insert(NestedPartySubID_99.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_99(812535709);
        noNestedPartySubIDs_1_1_2_1.set(NestedPartySubIDType_99);
        NstdPtysSubGrp_NoNestedPartySubIDs_99.insert(NestedPartySubIDType_99.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_99);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_100;
        FIX::NestedPartySubID NestedPartySubID_100("STRING_1637277502");
        noNestedPartySubIDs_1_1_2_2.set(NestedPartySubID_100);
        NstdPtysSubGrp_NoNestedPartySubIDs_100.insert(NestedPartySubID_100.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_100(1147492007);
        noNestedPartySubIDs_1_1_2_2.set(NestedPartySubIDType_100);
        NstdPtysSubGrp_NoNestedPartySubIDs_100.insert(NestedPartySubIDType_100.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_100);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_2);
      }
      noLegs_0_1.addGroup(noNestedPartyIDs_1_1_1);
    }
    msg.addGroup(noLegs_0_1);
  }
  // OrderQtyData
  multiset<string> OrderQtyData_8;
  FIX::CashOrderQty CashOrderQty_8;
  CashOrderQty_8.setString("19740283");
  msg.set(CashOrderQty_8);
  OrderQtyData_8.insert(CashOrderQty_8.getString());
  FIX::OrderPercent OrderPercent_8;
  OrderPercent_8.setString("84.730000");
  msg.set(OrderPercent_8);
  OrderQtyData_8.insert(OrderPercent_8.getString());
  FIX::OrderQty OrderQty_18;
  OrderQty_18.setString("18193659");
  msg.set(OrderQty_18);
  OrderQtyData_8.insert(OrderQty_18.getString());
  FIX::RoundingDirection RoundingDirection_8('1');
  msg.set(RoundingDirection_8);
  OrderQtyData_8.insert(RoundingDirection_8.getString());
  FIX::RoundingModulus RoundingModulus_8;
  RoundingModulus_8.setString("10593725");
  msg.set(RoundingModulus_8);
  OrderQtyData_8.insert(RoundingModulus_8.getString());
  all_values.push_back(OrderQtyData_8);
  all_compo_names.insert("OrderQtyData");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::MultilegOrderCancelReplace::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_56;
    FIX::PartyID PartyID_56("STRING_1823879320");
    noPartyIDs_0_0.set(PartyID_56);
    Parties_NoPartyIDs_56.insert(PartyID_56.getString());
    FIX::PartyIDSource PartyIDSource_56('9');
    noPartyIDs_0_0.set(PartyIDSource_56);
    Parties_NoPartyIDs_56.insert(PartyIDSource_56.getString());
    FIX::PartyRole PartyRole_56(35);
    noPartyIDs_0_0.set(PartyRole_56);
    Parties_NoPartyIDs_56.insert(PartyRole_56.getString());
    all_values.push_back(Parties_NoPartyIDs_56);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::MultilegOrderCancelReplace::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_123;
      FIX::PartySubID PartySubID_123("STRING_1555217312");
      noPartySubIDs_0_1_0.set(PartySubID_123);
      PtysSubGrp_NoPartySubIDs_123.insert(PartySubID_123.getString());
      FIX::PartySubIDType PartySubIDType_123(1);
      noPartySubIDs_0_1_0.set(PartySubIDType_123);
      PtysSubGrp_NoPartySubIDs_123.insert(PartySubIDType_123.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_123);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_124;
      FIX::PartySubID PartySubID_124("STRING_1667138083");
      noPartySubIDs_0_1_1.set(PartySubID_124);
      PtysSubGrp_NoPartySubIDs_124.insert(PartySubID_124.getString());
      FIX::PartySubIDType PartySubIDType_124(6);
      noPartySubIDs_0_1_1.set(PartySubIDType_124);
      PtysSubGrp_NoPartySubIDs_124.insert(PartySubIDType_124.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_124);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_125;
      FIX::PartySubID PartySubID_125("STRING_1093661682");
      noPartySubIDs_0_1_2.set(PartySubID_125);
      PtysSubGrp_NoPartySubIDs_125.insert(PartySubID_125.getString());
      FIX::PartySubIDType PartySubIDType_125(12);
      noPartySubIDs_0_1_2.set(PartySubIDType_125);
      PtysSubGrp_NoPartySubIDs_125.insert(PartySubIDType_125.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_125);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::MultilegOrderCancelReplace::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_57;
    FIX::PartyID PartyID_57("STRING_256025707");
    noPartyIDs_0_1.set(PartyID_57);
    Parties_NoPartyIDs_57.insert(PartyID_57.getString());
    FIX::PartyIDSource PartyIDSource_57('B');
    noPartyIDs_0_1.set(PartyIDSource_57);
    Parties_NoPartyIDs_57.insert(PartyIDSource_57.getString());
    FIX::PartyRole PartyRole_57(31);
    noPartyIDs_0_1.set(PartyRole_57);
    Parties_NoPartyIDs_57.insert(PartyRole_57.getString());
    all_values.push_back(Parties_NoPartyIDs_57);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::MultilegOrderCancelReplace::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_126;
      FIX::PartySubID PartySubID_126("STRING_1396674569");
      noPartySubIDs_1_1_0.set(PartySubID_126);
      PtysSubGrp_NoPartySubIDs_126.insert(PartySubID_126.getString());
      FIX::PartySubIDType PartySubIDType_126(19);
      noPartySubIDs_1_1_0.set(PartySubIDType_126);
      PtysSubGrp_NoPartySubIDs_126.insert(PartySubIDType_126.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_126);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_127;
      FIX::PartySubID PartySubID_127("STRING_436071022");
      noPartySubIDs_1_1_1.set(PartySubID_127);
      PtysSubGrp_NoPartySubIDs_127.insert(PartySubID_127.getString());
      FIX::PartySubIDType PartySubIDType_127(2);
      noPartySubIDs_1_1_1.set(PartySubIDType_127);
      PtysSubGrp_NoPartySubIDs_127.insert(PartySubIDType_127.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_127);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::MultilegOrderCancelReplace::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_58;
    FIX::PartyID PartyID_58("STRING_275711884");
    noPartyIDs_0_2.set(PartyID_58);
    Parties_NoPartyIDs_58.insert(PartyID_58.getString());
    FIX::PartyIDSource PartyIDSource_58('G');
    noPartyIDs_0_2.set(PartyIDSource_58);
    Parties_NoPartyIDs_58.insert(PartyIDSource_58.getString());
    FIX::PartyRole PartyRole_58(55);
    noPartyIDs_0_2.set(PartyRole_58);
    Parties_NoPartyIDs_58.insert(PartyRole_58.getString());
    all_values.push_back(Parties_NoPartyIDs_58);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::MultilegOrderCancelReplace::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_128;
      FIX::PartySubID PartySubID_128("STRING_541778049");
      noPartySubIDs_2_1_0.set(PartySubID_128);
      PtysSubGrp_NoPartySubIDs_128.insert(PartySubID_128.getString());
      FIX::PartySubIDType PartySubIDType_128(27);
      noPartySubIDs_2_1_0.set(PartySubIDType_128);
      PtysSubGrp_NoPartySubIDs_128.insert(PartySubIDType_128.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_128);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    msg.addGroup(noPartyIDs_0_2);
  }
  // PegInstructions
  multiset<string> PegInstructions_2;
  FIX::PegLimitType PegLimitType_2(1);
  msg.set(PegLimitType_2);
  PegInstructions_2.insert(PegLimitType_2.getString());
  FIX::PegMoveType PegMoveType_2(0);
  msg.set(PegMoveType_2);
  PegInstructions_2.insert(PegMoveType_2.getString());
  FIX::PegOffsetType PegOffsetType_2(1);
  msg.set(PegOffsetType_2);
  PegInstructions_2.insert(PegOffsetType_2.getString());
  FIX::PegOffsetValue PegOffsetValue_2;
  PegOffsetValue_2.setString("7626119");
  msg.set(PegOffsetValue_2);
  PegInstructions_2.insert(PegOffsetValue_2.getString());
  FIX::PegPriceType PegPriceType_2(9);
  msg.set(PegPriceType_2);
  PegInstructions_2.insert(PegPriceType_2.getString());
  FIX::PegRoundDirection PegRoundDirection_2(2);
  msg.set(PegRoundDirection_2);
  PegInstructions_2.insert(PegRoundDirection_2.getString());
  FIX::PegScope PegScope_2(2);
  msg.set(PegScope_2);
  PegInstructions_2.insert(PegScope_2.getString());
  FIX::PegSecurityDesc PegSecurityDesc_2("STRING_678692471");
  msg.set(PegSecurityDesc_2);
  PegInstructions_2.insert(PegSecurityDesc_2.getString());
  FIX::PegSecurityID PegSecurityID_2("STRING_2144142060");
  msg.set(PegSecurityID_2);
  PegInstructions_2.insert(PegSecurityID_2.getString());
  FIX::PegSecurityIDSource PegSecurityIDSource_2("STRING_455383290");
  msg.set(PegSecurityIDSource_2);
  PegInstructions_2.insert(PegSecurityIDSource_2.getString());
  FIX::PegSymbol PegSymbol_2("STRING_443461091");
  msg.set(PegSymbol_2);
  PegInstructions_2.insert(PegSymbol_2.getString());
  all_values.push_back(PegInstructions_2);
  all_compo_names.insert("PegInstructions");

  // PreAllocMlegGrp
  // Group PreAllocMlegGrp.NoAllocs
  {
    FIX50SP2::MultilegOrderCancelReplace::NoAllocs noAllocs_0_0;
    // PreAllocMlegGrp.NoAllocs
    multiset<string> PreAllocMlegGrp_NoAllocs_0;
    FIX::AllocAccount AllocAccount_17("STRING_290937523");
    noAllocs_0_0.set(AllocAccount_17);
    PreAllocMlegGrp_NoAllocs_0.insert(AllocAccount_17.getString());
    FIX::AllocAcctIDSource AllocAcctIDSource_17(2110599175);
    noAllocs_0_0.set(AllocAcctIDSource_17);
    PreAllocMlegGrp_NoAllocs_0.insert(AllocAcctIDSource_17.getString());
    FIX::AllocQty AllocQty_16;
    AllocQty_16.setString("16223689");
    noAllocs_0_0.set(AllocQty_16);
    PreAllocMlegGrp_NoAllocs_0.insert(AllocQty_16.getString());
    FIX::AllocSettlCurrency AllocSettlCurrency_12("EUR");
    noAllocs_0_0.set(AllocSettlCurrency_12);
    PreAllocMlegGrp_NoAllocs_0.insert(AllocSettlCurrency_12.getString());
    FIX::IndividualAllocID IndividualAllocID_17("STRING_1878394618");
    noAllocs_0_0.set(IndividualAllocID_17);
    PreAllocMlegGrp_NoAllocs_0.insert(IndividualAllocID_17.getString());
    all_values.push_back(PreAllocMlegGrp_NoAllocs_0);
    all_compo_names.insert("PreAllocMlegGrp.NoAllocs");

    // NestedParties3
    // Group NestedParties3.NoNested3PartyIDs
    {
      FIX50SP2::MultilegOrderCancelReplace::NoAllocs::NoNested3PartyIDs noNested3PartyIDs_0_1_0;
      // NestedParties3.NoNested3PartyIDs
      multiset<string> NestedParties3_NoNested3PartyIDs_3;
      FIX::Nested3PartyID Nested3PartyID_3("STRING_1372555816");
      noNested3PartyIDs_0_1_0.set(Nested3PartyID_3);
      NestedParties3_NoNested3PartyIDs_3.insert(Nested3PartyID_3.getString());
      FIX::Nested3PartyIDSource Nested3PartyIDSource_3('1');
      noNested3PartyIDs_0_1_0.set(Nested3PartyIDSource_3);
      NestedParties3_NoNested3PartyIDs_3.insert(Nested3PartyIDSource_3.getString());
      FIX::Nested3PartyRole Nested3PartyRole_3(1895384453);
      noNested3PartyIDs_0_1_0.set(Nested3PartyRole_3);
      NestedParties3_NoNested3PartyIDs_3.insert(Nested3PartyRole_3.getString());
      all_values.push_back(NestedParties3_NoNested3PartyIDs_3);
      all_compo_names.insert("NestedParties3.NoNested3PartyIDs");

      // NstdPtys3SubGrp
      // Group NstdPtys3SubGrp.NoNested3PartySubIDs
      {
        FIX50SP2::MultilegOrderCancelReplace::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_0_0_2_0;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_4;
        FIX::Nested3PartySubID Nested3PartySubID_4("STRING_249074963");
        noNested3PartySubIDs_0_0_2_0.set(Nested3PartySubID_4);
        NstdPtys3SubGrp_NoNested3PartySubIDs_4.insert(Nested3PartySubID_4.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_4(1356878572);
        noNested3PartySubIDs_0_0_2_0.set(Nested3PartySubIDType_4);
        NstdPtys3SubGrp_NoNested3PartySubIDs_4.insert(Nested3PartySubIDType_4.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_4);
        all_compo_names.insert("NstdPtys3SubGrp.NoNested3PartySubIDs");

        noNested3PartyIDs_0_1_0.addGroup(noNested3PartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_0_0_2_1;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_5;
        FIX::Nested3PartySubID Nested3PartySubID_5("STRING_631145181");
        noNested3PartySubIDs_0_0_2_1.set(Nested3PartySubID_5);
        NstdPtys3SubGrp_NoNested3PartySubIDs_5.insert(Nested3PartySubID_5.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_5(2125800951);
        noNested3PartySubIDs_0_0_2_1.set(Nested3PartySubIDType_5);
        NstdPtys3SubGrp_NoNested3PartySubIDs_5.insert(Nested3PartySubIDType_5.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_5);
        all_compo_names.insert("NstdPtys3SubGrp.NoNested3PartySubIDs");

        noNested3PartyIDs_0_1_0.addGroup(noNested3PartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_0_0_2_2;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_6;
        FIX::Nested3PartySubID Nested3PartySubID_6("STRING_332732185");
        noNested3PartySubIDs_0_0_2_2.set(Nested3PartySubID_6);
        NstdPtys3SubGrp_NoNested3PartySubIDs_6.insert(Nested3PartySubID_6.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_6(574382858);
        noNested3PartySubIDs_0_0_2_2.set(Nested3PartySubIDType_6);
        NstdPtys3SubGrp_NoNested3PartySubIDs_6.insert(Nested3PartySubIDType_6.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_6);
        all_compo_names.insert("NstdPtys3SubGrp.NoNested3PartySubIDs");

        noNested3PartyIDs_0_1_0.addGroup(noNested3PartySubIDs_0_0_2_2);
      }
      noAllocs_0_0.addGroup(noNested3PartyIDs_0_1_0);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoAllocs::NoNested3PartyIDs noNested3PartyIDs_0_1_1;
      // NestedParties3.NoNested3PartyIDs
      multiset<string> NestedParties3_NoNested3PartyIDs_4;
      FIX::Nested3PartyID Nested3PartyID_4("STRING_520095352");
      noNested3PartyIDs_0_1_1.set(Nested3PartyID_4);
      NestedParties3_NoNested3PartyIDs_4.insert(Nested3PartyID_4.getString());
      FIX::Nested3PartyIDSource Nested3PartyIDSource_4('9');
      noNested3PartyIDs_0_1_1.set(Nested3PartyIDSource_4);
      NestedParties3_NoNested3PartyIDs_4.insert(Nested3PartyIDSource_4.getString());
      FIX::Nested3PartyRole Nested3PartyRole_4(1665112542);
      noNested3PartyIDs_0_1_1.set(Nested3PartyRole_4);
      NestedParties3_NoNested3PartyIDs_4.insert(Nested3PartyRole_4.getString());
      all_values.push_back(NestedParties3_NoNested3PartyIDs_4);
      all_compo_names.insert("NestedParties3.NoNested3PartyIDs");

      // NstdPtys3SubGrp
      // Group NstdPtys3SubGrp.NoNested3PartySubIDs
      {
        FIX50SP2::MultilegOrderCancelReplace::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_0_1_2_0;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_7;
        FIX::Nested3PartySubID Nested3PartySubID_7("STRING_1343459242");
        noNested3PartySubIDs_0_1_2_0.set(Nested3PartySubID_7);
        NstdPtys3SubGrp_NoNested3PartySubIDs_7.insert(Nested3PartySubID_7.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_7(280240844);
        noNested3PartySubIDs_0_1_2_0.set(Nested3PartySubIDType_7);
        NstdPtys3SubGrp_NoNested3PartySubIDs_7.insert(Nested3PartySubIDType_7.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_7);
        all_compo_names.insert("NstdPtys3SubGrp.NoNested3PartySubIDs");

        noNested3PartyIDs_0_1_1.addGroup(noNested3PartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_0_1_2_1;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_8;
        FIX::Nested3PartySubID Nested3PartySubID_8("STRING_1890714917");
        noNested3PartySubIDs_0_1_2_1.set(Nested3PartySubID_8);
        NstdPtys3SubGrp_NoNested3PartySubIDs_8.insert(Nested3PartySubID_8.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_8(652944071);
        noNested3PartySubIDs_0_1_2_1.set(Nested3PartySubIDType_8);
        NstdPtys3SubGrp_NoNested3PartySubIDs_8.insert(Nested3PartySubIDType_8.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_8);
        all_compo_names.insert("NstdPtys3SubGrp.NoNested3PartySubIDs");

        noNested3PartyIDs_0_1_1.addGroup(noNested3PartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_0_1_2_2;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_9;
        FIX::Nested3PartySubID Nested3PartySubID_9("STRING_893792113");
        noNested3PartySubIDs_0_1_2_2.set(Nested3PartySubID_9);
        NstdPtys3SubGrp_NoNested3PartySubIDs_9.insert(Nested3PartySubID_9.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_9(421923741);
        noNested3PartySubIDs_0_1_2_2.set(Nested3PartySubIDType_9);
        NstdPtys3SubGrp_NoNested3PartySubIDs_9.insert(Nested3PartySubIDType_9.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_9);
        all_compo_names.insert("NstdPtys3SubGrp.NoNested3PartySubIDs");

        noNested3PartyIDs_0_1_1.addGroup(noNested3PartySubIDs_0_1_2_2);
      }
      noAllocs_0_0.addGroup(noNested3PartyIDs_0_1_1);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoAllocs::NoNested3PartyIDs noNested3PartyIDs_0_1_2;
      // NestedParties3.NoNested3PartyIDs
      multiset<string> NestedParties3_NoNested3PartyIDs_5;
      FIX::Nested3PartyID Nested3PartyID_5("STRING_649602484");
      noNested3PartyIDs_0_1_2.set(Nested3PartyID_5);
      NestedParties3_NoNested3PartyIDs_5.insert(Nested3PartyID_5.getString());
      FIX::Nested3PartyIDSource Nested3PartyIDSource_5('1');
      noNested3PartyIDs_0_1_2.set(Nested3PartyIDSource_5);
      NestedParties3_NoNested3PartyIDs_5.insert(Nested3PartyIDSource_5.getString());
      FIX::Nested3PartyRole Nested3PartyRole_5(865384832);
      noNested3PartyIDs_0_1_2.set(Nested3PartyRole_5);
      NestedParties3_NoNested3PartyIDs_5.insert(Nested3PartyRole_5.getString());
      all_values.push_back(NestedParties3_NoNested3PartyIDs_5);
      all_compo_names.insert("NestedParties3.NoNested3PartyIDs");

      // NstdPtys3SubGrp
      // Group NstdPtys3SubGrp.NoNested3PartySubIDs
      {
        FIX50SP2::MultilegOrderCancelReplace::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_0_2_2_0;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_10;
        FIX::Nested3PartySubID Nested3PartySubID_10("STRING_1640112927");
        noNested3PartySubIDs_0_2_2_0.set(Nested3PartySubID_10);
        NstdPtys3SubGrp_NoNested3PartySubIDs_10.insert(Nested3PartySubID_10.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_10(828500359);
        noNested3PartySubIDs_0_2_2_0.set(Nested3PartySubIDType_10);
        NstdPtys3SubGrp_NoNested3PartySubIDs_10.insert(Nested3PartySubIDType_10.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_10);
        all_compo_names.insert("NstdPtys3SubGrp.NoNested3PartySubIDs");

        noNested3PartyIDs_0_1_2.addGroup(noNested3PartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_0_2_2_1;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_11;
        FIX::Nested3PartySubID Nested3PartySubID_11("STRING_1676363471");
        noNested3PartySubIDs_0_2_2_1.set(Nested3PartySubID_11);
        NstdPtys3SubGrp_NoNested3PartySubIDs_11.insert(Nested3PartySubID_11.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_11(877228485);
        noNested3PartySubIDs_0_2_2_1.set(Nested3PartySubIDType_11);
        NstdPtys3SubGrp_NoNested3PartySubIDs_11.insert(Nested3PartySubIDType_11.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_11);
        all_compo_names.insert("NstdPtys3SubGrp.NoNested3PartySubIDs");

        noNested3PartyIDs_0_1_2.addGroup(noNested3PartySubIDs_0_2_2_1);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_0_2_2_2;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_12;
        FIX::Nested3PartySubID Nested3PartySubID_12("STRING_604605654");
        noNested3PartySubIDs_0_2_2_2.set(Nested3PartySubID_12);
        NstdPtys3SubGrp_NoNested3PartySubIDs_12.insert(Nested3PartySubID_12.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_12(1407274441);
        noNested3PartySubIDs_0_2_2_2.set(Nested3PartySubIDType_12);
        NstdPtys3SubGrp_NoNested3PartySubIDs_12.insert(Nested3PartySubIDType_12.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_12);
        all_compo_names.insert("NstdPtys3SubGrp.NoNested3PartySubIDs");

        noNested3PartyIDs_0_1_2.addGroup(noNested3PartySubIDs_0_2_2_2);
      }
      noAllocs_0_0.addGroup(noNested3PartyIDs_0_1_2);
    }
    msg.addGroup(noAllocs_0_0);
  }
  // StrategyParametersGrp
  // Group StrategyParametersGrp.NoStrategyParameters
  {
    FIX50SP2::MultilegOrderCancelReplace::NoStrategyParameters noStrategyParameters_0_0;
    // StrategyParametersGrp.NoStrategyParameters
    multiset<string> StrategyParametersGrp_NoStrategyParameters_4;
    FIX::StrategyParameterName StrategyParameterName_4("STRING_1977161470");
    noStrategyParameters_0_0.set(StrategyParameterName_4);
    StrategyParametersGrp_NoStrategyParameters_4.insert(StrategyParameterName_4.getString());
    FIX::StrategyParameterType StrategyParameterType_4(26);
    noStrategyParameters_0_0.set(StrategyParameterType_4);
    StrategyParametersGrp_NoStrategyParameters_4.insert(StrategyParameterType_4.getString());
    FIX::StrategyParameterValue StrategyParameterValue_4("STRING_1123839174");
    noStrategyParameters_0_0.set(StrategyParameterValue_4);
    StrategyParametersGrp_NoStrategyParameters_4.insert(StrategyParameterValue_4.getString());
    all_values.push_back(StrategyParametersGrp_NoStrategyParameters_4);
    all_compo_names.insert("StrategyParametersGrp.NoStrategyParameters");

    msg.addGroup(noStrategyParameters_0_0);
  }
  // TrdgSesGrp
  // Group TrdgSesGrp.NoTradingSessions
  {
    FIX50SP2::MultilegOrderCancelReplace::NoTradingSessions noTradingSessions_0_0;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_3;
    FIX::TradingSessionID TradingSessionID_50("STRING_1");
    noTradingSessions_0_0.set(TradingSessionID_50);
    TrdgSesGrp_NoTradingSessions_3.insert(TradingSessionID_50.getString());
    FIX::TradingSessionSubID TradingSessionSubID_50("STRING_2");
    noTradingSessions_0_0.set(TradingSessionSubID_50);
    TrdgSesGrp_NoTradingSessions_3.insert(TradingSessionSubID_50.getString());
    all_values.push_back(TrdgSesGrp_NoTradingSessions_3);
    all_compo_names.insert("TrdgSesGrp.NoTradingSessions");

    msg.addGroup(noTradingSessions_0_0);
  }
  {
    FIX50SP2::MultilegOrderCancelReplace::NoTradingSessions noTradingSessions_0_1;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_4;
    FIX::TradingSessionID TradingSessionID_51("STRING_6");
    noTradingSessions_0_1.set(TradingSessionID_51);
    TrdgSesGrp_NoTradingSessions_4.insert(TradingSessionID_51.getString());
    FIX::TradingSessionSubID TradingSessionSubID_51("STRING_4");
    noTradingSessions_0_1.set(TradingSessionSubID_51);
    TrdgSesGrp_NoTradingSessions_4.insert(TradingSessionSubID_51.getString());
    all_values.push_back(TrdgSesGrp_NoTradingSessions_4);
    all_compo_names.insert("TrdgSesGrp.NoTradingSessions");

    msg.addGroup(noTradingSessions_0_1);
  }
  {
    FIX50SP2::MultilegOrderCancelReplace::NoTradingSessions noTradingSessions_0_2;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_5;
    FIX::TradingSessionID TradingSessionID_52("STRING_4");
    noTradingSessions_0_2.set(TradingSessionID_52);
    TrdgSesGrp_NoTradingSessions_5.insert(TradingSessionID_52.getString());
    FIX::TradingSessionSubID TradingSessionSubID_52("STRING_1");
    noTradingSessions_0_2.set(TradingSessionSubID_52);
    TrdgSesGrp_NoTradingSessions_5.insert(TradingSessionSubID_52.getString());
    all_values.push_back(TrdgSesGrp_NoTradingSessions_5);
    all_compo_names.insert("TrdgSesGrp.NoTradingSessions");

    msg.addGroup(noTradingSessions_0_2);
  }
  // TriggeringInstruction
  multiset<string> TriggeringInstruction_2;
  FIX::TriggerAction TriggerAction_2('3');
  msg.set(TriggerAction_2);
  TriggeringInstruction_2.insert(TriggerAction_2.getString());
  FIX::TriggerNewPrice TriggerNewPrice_2;
  TriggerNewPrice_2.setString("16118295");
  msg.set(TriggerNewPrice_2);
  TriggeringInstruction_2.insert(TriggerNewPrice_2.getString());
  FIX::TriggerNewQty TriggerNewQty_2;
  TriggerNewQty_2.setString("9082680");
  msg.set(TriggerNewQty_2);
  TriggeringInstruction_2.insert(TriggerNewQty_2.getString());
  FIX::TriggerOrderType TriggerOrderType_2('1');
  msg.set(TriggerOrderType_2);
  TriggeringInstruction_2.insert(TriggerOrderType_2.getString());
  FIX::TriggerPrice TriggerPrice_2;
  TriggerPrice_2.setString("8078051");
  msg.set(TriggerPrice_2);
  TriggeringInstruction_2.insert(TriggerPrice_2.getString());
  FIX::TriggerPriceDirection TriggerPriceDirection_2('U');
  msg.set(TriggerPriceDirection_2);
  TriggeringInstruction_2.insert(TriggerPriceDirection_2.getString());
  FIX::TriggerPriceType TriggerPriceType_2('4');
  msg.set(TriggerPriceType_2);
  TriggeringInstruction_2.insert(TriggerPriceType_2.getString());
  FIX::TriggerPriceTypeScope TriggerPriceTypeScope_2('3');
  msg.set(TriggerPriceTypeScope_2);
  TriggeringInstruction_2.insert(TriggerPriceTypeScope_2.getString());
  FIX::TriggerSecurityDesc TriggerSecurityDesc_2("STRING_2082301011");
  msg.set(TriggerSecurityDesc_2);
  TriggeringInstruction_2.insert(TriggerSecurityDesc_2.getString());
  FIX::TriggerSecurityID TriggerSecurityID_2("STRING_873855480");
  msg.set(TriggerSecurityID_2);
  TriggeringInstruction_2.insert(TriggerSecurityID_2.getString());
  FIX::TriggerSecurityIDSource TriggerSecurityIDSource_2("STRING_2110351735");
  msg.set(TriggerSecurityIDSource_2);
  TriggeringInstruction_2.insert(TriggerSecurityIDSource_2.getString());
  FIX::TriggerSymbol TriggerSymbol_2("STRING_1283992767");
  msg.set(TriggerSymbol_2);
  TriggeringInstruction_2.insert(TriggerSymbol_2.getString());
  FIX::TriggerTradingSessionID TriggerTradingSessionID_2("STRING_1739240313");
  msg.set(TriggerTradingSessionID_2);
  TriggeringInstruction_2.insert(TriggerTradingSessionID_2.getString());
  FIX::TriggerTradingSessionSubID TriggerTradingSessionSubID_2("STRING_16862647");
  msg.set(TriggerTradingSessionSubID_2);
  TriggeringInstruction_2.insert(TriggerTradingSessionSubID_2.getString());
  FIX::TriggerType TriggerType_2('4');
  msg.set(TriggerType_2);
  TriggeringInstruction_2.insert(TriggerType_2.getString());
  all_values.push_back(TriggeringInstruction_2);
  all_compo_names.insert("TriggeringInstruction");

  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_59;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_59("DATA_1693226118");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_59);
    UnderlyingInstrument_59.insert(EncodedUnderlyingIssuer_59.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_59(1653850532);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_59);
    UnderlyingInstrument_59.insert(EncodedUnderlyingIssuerLen_59.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_59("DATA_1024862679");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_59);
    UnderlyingInstrument_59.insert(EncodedUnderlyingSecurityDesc_59.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_59(953016911);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_59);
    UnderlyingInstrument_59.insert(EncodedUnderlyingSecurityDescLen_59.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_59;
    UnderlyingAdjustedQuantity_59.setString("8823052");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_59);
    UnderlyingInstrument_59.insert(UnderlyingAdjustedQuantity_59.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_59;
    UnderlyingAllocationPercent_59.setString("5.010000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_59);
    UnderlyingInstrument_59.insert(UnderlyingAllocationPercent_59.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_59;
    UnderlyingAttachmentPoint_59.setString("16.450000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_59);
    UnderlyingInstrument_59.insert(UnderlyingAttachmentPoint_59.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_59("STRING_2006144427");
    noUnderlyings_0_0.set(UnderlyingCFICode_59);
    UnderlyingInstrument_59.insert(UnderlyingCFICode_59.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_59("STRING_1039651621");
    noUnderlyings_0_0.set(UnderlyingCPProgram_59);
    UnderlyingInstrument_59.insert(UnderlyingCPProgram_59.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_59("STRING_1495164989");
    noUnderlyings_0_0.set(UnderlyingCPRegType_59);
    UnderlyingInstrument_59.insert(UnderlyingCPRegType_59.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_59;
    UnderlyingCapValue_59.setString("1918948");
    noUnderlyings_0_0.set(UnderlyingCapValue_59);
    UnderlyingInstrument_59.insert(UnderlyingCapValue_59.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_59;
    UnderlyingCashAmount_59.setString("18559079");
    noUnderlyings_0_0.set(UnderlyingCashAmount_59);
    UnderlyingInstrument_59.insert(UnderlyingCashAmount_59.getString());
    FIX::UnderlyingCashType UnderlyingCashType_59("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_59);
    UnderlyingInstrument_59.insert(UnderlyingCashType_59.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_59;
    UnderlyingContractMultiplier_59.setString("8578611");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_59);
    UnderlyingInstrument_59.insert(UnderlyingContractMultiplier_59.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_59(1099063434);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_59);
    UnderlyingInstrument_59.insert(UnderlyingContractMultiplierUnit_59.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_59("COUNTRY_615634340");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_59);
    UnderlyingInstrument_59.insert(UnderlyingCountryOfIssue_59.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_59("LOCALMKTDATE_322207098");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_59);
    UnderlyingInstrument_59.insert(UnderlyingCouponPaymentDate_59.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_59;
    UnderlyingCouponRate_59.setString("14.880000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_59);
    UnderlyingInstrument_59.insert(UnderlyingCouponRate_59.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_59("STRING_1324334810");
    noUnderlyings_0_0.set(UnderlyingCreditRating_59);
    UnderlyingInstrument_59.insert(UnderlyingCreditRating_59.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_59("USD");
    noUnderlyings_0_0.set(UnderlyingCurrency_59);
    UnderlyingInstrument_59.insert(UnderlyingCurrency_59.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_59;
    UnderlyingCurrentValue_59.setString("17762665");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_59);
    UnderlyingInstrument_59.insert(UnderlyingCurrentValue_59.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_59;
    UnderlyingDetachmentPoint_59.setString("78.800000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_59);
    UnderlyingInstrument_59.insert(UnderlyingDetachmentPoint_59.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_59;
    UnderlyingDirtyPrice_59.setString("9831741");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_59);
    UnderlyingInstrument_59.insert(UnderlyingDirtyPrice_59.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_59;
    UnderlyingEndPrice_59.setString("5026383");
    noUnderlyings_0_0.set(UnderlyingEndPrice_59);
    UnderlyingInstrument_59.insert(UnderlyingEndPrice_59.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_59;
    UnderlyingEndValue_59.setString("4061459");
    noUnderlyings_0_0.set(UnderlyingEndValue_59);
    UnderlyingInstrument_59.insert(UnderlyingEndValue_59.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_59(119683221);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_59);
    UnderlyingInstrument_59.insert(UnderlyingExerciseStyle_59.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_59;
    UnderlyingFXRate_59.setString("943950");
    noUnderlyings_0_0.set(UnderlyingFXRate_59);
    UnderlyingInstrument_59.insert(UnderlyingFXRate_59.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_59('M');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_59);
    UnderlyingInstrument_59.insert(UnderlyingFXRateCalc_59.getString());
    FIX::UnderlyingFactor UnderlyingFactor_59;
    UnderlyingFactor_59.setString("8963052");
    noUnderlyings_0_0.set(UnderlyingFactor_59);
    UnderlyingInstrument_59.insert(UnderlyingFactor_59.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_59(514652072);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_59);
    UnderlyingInstrument_59.insert(UnderlyingFlowScheduleType_59.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_59("STRING_2116234733");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_59);
    UnderlyingInstrument_59.insert(UnderlyingInstrRegistry_59.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_59("LOCALMKTDATE_402672152");
    noUnderlyings_0_0.set(UnderlyingIssueDate_59);
    UnderlyingInstrument_59.insert(UnderlyingIssueDate_59.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_59("STRING_1539514751");
    noUnderlyings_0_0.set(UnderlyingIssuer_59);
    UnderlyingInstrument_59.insert(UnderlyingIssuer_59.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_59("STRING_921767997");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_59);
    UnderlyingInstrument_59.insert(UnderlyingLocaleOfIssue_59.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_59("LOCALMKTDATE_1284977406");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_59);
    UnderlyingInstrument_59.insert(UnderlyingMaturityDate_59.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_59("MONTHYEAR_246571604");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_59);
    UnderlyingInstrument_59.insert(UnderlyingMaturityMonthYear_59.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_59("TZTIMEONLY_947579642");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_59);
    UnderlyingInstrument_59.insert(UnderlyingMaturityTime_59.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_59;
    UnderlyingNotionalPercentageOutstanding_59.setString("81.850000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_59);
    UnderlyingInstrument_59.insert(UnderlyingNotionalPercentageOutstanding_59.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_59('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_59);
    UnderlyingInstrument_59.insert(UnderlyingOptAttribute_59.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_59;
    UnderlyingOriginalNotionalPercentageOutstanding_59.setString("9.830000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_59);
    UnderlyingInstrument_59.insert(UnderlyingOriginalNotionalPercentageOutstanding_59.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_59("STRING_1335533063");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_59);
    UnderlyingInstrument_59.insert(UnderlyingPriceUnitOfMeasure_59.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_59;
    UnderlyingPriceUnitOfMeasureQty_59.setString("9946475");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_59);
    UnderlyingInstrument_59.insert(UnderlyingPriceUnitOfMeasureQty_59.getString());
    FIX::UnderlyingProduct UnderlyingProduct_59(1090612972);
    noUnderlyings_0_0.set(UnderlyingProduct_59);
    UnderlyingInstrument_59.insert(UnderlyingProduct_59.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_59(45910576);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_59);
    UnderlyingInstrument_59.insert(UnderlyingPutOrCall_59.getString());
    FIX::UnderlyingPx UnderlyingPx_59;
    UnderlyingPx_59.setString("20937109");
    noUnderlyings_0_0.set(UnderlyingPx_59);
    UnderlyingInstrument_59.insert(UnderlyingPx_59.getString());
    FIX::UnderlyingQty UnderlyingQty_59;
    UnderlyingQty_59.setString("17062473");
    noUnderlyings_0_0.set(UnderlyingQty_59);
    UnderlyingInstrument_59.insert(UnderlyingQty_59.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_59("LOCALMKTDATE_368117674");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_59);
    UnderlyingInstrument_59.insert(UnderlyingRedemptionDate_59.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_59("STRING_1953558775");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_59);
    UnderlyingInstrument_59.insert(UnderlyingRepoCollateralSecurityType_59.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_59;
    UnderlyingRepurchaseRate_59.setString("84.750000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_59);
    UnderlyingInstrument_59.insert(UnderlyingRepurchaseRate_59.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_59(1498129951);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_59);
    UnderlyingInstrument_59.insert(UnderlyingRepurchaseTerm_59.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_59("STRING_854431865");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_59);
    UnderlyingInstrument_59.insert(UnderlyingRestructuringType_59.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_59("STRING_511881377");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_59);
    UnderlyingInstrument_59.insert(UnderlyingSecurityDesc_59.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_59("EXCHANGE_1941407832");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_59);
    UnderlyingInstrument_59.insert(UnderlyingSecurityExchange_59.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_59("STRING_1837605967");
    noUnderlyings_0_0.set(UnderlyingSecurityID_59);
    UnderlyingInstrument_59.insert(UnderlyingSecurityID_59.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_59("STRING_1014519760");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_59);
    UnderlyingInstrument_59.insert(UnderlyingSecurityIDSource_59.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_59("STRING_200070151");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_59);
    UnderlyingInstrument_59.insert(UnderlyingSecuritySubType_59.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_59("STRING_1957289188");
    noUnderlyings_0_0.set(UnderlyingSecurityType_59);
    UnderlyingInstrument_59.insert(UnderlyingSecurityType_59.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_59("STRING_1108914807");
    noUnderlyings_0_0.set(UnderlyingSeniority_59);
    UnderlyingInstrument_59.insert(UnderlyingSeniority_59.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_59("STRING_623078766");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_59);
    UnderlyingInstrument_59.insert(UnderlyingSettlMethod_59.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_59(4);
    noUnderlyings_0_0.set(UnderlyingSettlementType_59);
    UnderlyingInstrument_59.insert(UnderlyingSettlementType_59.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_59;
    UnderlyingStartValue_59.setString("16235668");
    noUnderlyings_0_0.set(UnderlyingStartValue_59);
    UnderlyingInstrument_59.insert(UnderlyingStartValue_59.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_59("STRING_591829852");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_59);
    UnderlyingInstrument_59.insert(UnderlyingStateOrProvinceOfIssue_59.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_59("GBP");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_59);
    UnderlyingInstrument_59.insert(UnderlyingStrikeCurrency_59.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_59;
    UnderlyingStrikePrice_59.setString("15135978");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_59);
    UnderlyingInstrument_59.insert(UnderlyingStrikePrice_59.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_59("STRING_246276718");
    noUnderlyings_0_0.set(UnderlyingSymbol_59);
    UnderlyingInstrument_59.insert(UnderlyingSymbol_59.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_59("STRING_1262169587");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_59);
    UnderlyingInstrument_59.insert(UnderlyingSymbolSfx_59.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_59("STRING_313693843");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_59);
    UnderlyingInstrument_59.insert(UnderlyingTimeUnit_59.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_59("STRING_1389914904");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_59);
    UnderlyingInstrument_59.insert(UnderlyingUnitOfMeasure_59.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_59;
    UnderlyingUnitOfMeasureQty_59.setString("4009091");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_59);
    UnderlyingInstrument_59.insert(UnderlyingUnitOfMeasureQty_59.getString());
    all_values.push_back(UnderlyingInstrument_59);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_122;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_122("STRING_577964319");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_122);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_122.insert(UnderlyingSecurityAltID_122.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_122("STRING_1395556666");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_122);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_122.insert(UnderlyingSecurityAltIDSource_122.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_122);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_118;
      FIX::UnderlyingStipType UnderlyingStipType_118("STRING_623874895");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_118);
      UnderlyingStipulations_NoUnderlyingStips_118.insert(UnderlyingStipType_118.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_118("STRING_1341783953");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_118);
      UnderlyingStipulations_NoUnderlyingStips_118.insert(UnderlyingStipValue_118.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_118);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_119;
      FIX::UnderlyingStipType UnderlyingStipType_119("STRING_1258331464");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_119);
      UnderlyingStipulations_NoUnderlyingStips_119.insert(UnderlyingStipType_119.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_119("STRING_991992569");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_119);
      UnderlyingStipulations_NoUnderlyingStips_119.insert(UnderlyingStipValue_119.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_119);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_120;
      FIX::UnderlyingStipType UnderlyingStipType_120("STRING_1147859081");
      noUnderlyingStips_0_1_2.set(UnderlyingStipType_120);
      UnderlyingStipulations_NoUnderlyingStips_120.insert(UnderlyingStipType_120.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_120("STRING_2141429939");
      noUnderlyingStips_0_1_2.set(UnderlyingStipValue_120);
      UnderlyingStipulations_NoUnderlyingStips_120.insert(UnderlyingStipValue_120.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_120);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_112;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_112("STRING_2002290946");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_112);
      UndlyInstrumentParties_NoUndlyInstrumentParties_112.insert(UnderlyingInstrumentPartyID_112.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_112('5');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_112);
      UndlyInstrumentParties_NoUndlyInstrumentParties_112.insert(UnderlyingInstrumentPartyIDSource_112.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_112(136563056);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_112);
      UndlyInstrumentParties_NoUndlyInstrumentParties_112.insert(UnderlyingInstrumentPartyRole_112.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_112);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_222;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_222("STRING_1520347429");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_222);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_222.insert(UnderlyingInstrumentPartySubID_222.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_222(336633208);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_222);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_222.insert(UnderlyingInstrumentPartySubIDType_222.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_222);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_113;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_113("STRING_1502218805");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_113);
      UndlyInstrumentParties_NoUndlyInstrumentParties_113.insert(UnderlyingInstrumentPartyID_113.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_113('4');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_113);
      UndlyInstrumentParties_NoUndlyInstrumentParties_113.insert(UnderlyingInstrumentPartyIDSource_113.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_113(959711974);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_113);
      UndlyInstrumentParties_NoUndlyInstrumentParties_113.insert(UnderlyingInstrumentPartyRole_113.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_113);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_223;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_223("STRING_2105345468");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_223);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_223.insert(UnderlyingInstrumentPartySubID_223.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_223(1551541826);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_223);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_223.insert(UnderlyingInstrumentPartySubIDType_223.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_223);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_224;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_224("STRING_1169628926");
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubID_224);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_224.insert(UnderlyingInstrumentPartySubID_224.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_224(973459802);
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubIDType_224);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_224.insert(UnderlyingInstrumentPartySubIDType_224.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_224);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_60;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_60("DATA_917656027");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_60);
    UnderlyingInstrument_60.insert(EncodedUnderlyingIssuer_60.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_60(1415905644);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_60);
    UnderlyingInstrument_60.insert(EncodedUnderlyingIssuerLen_60.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_60("DATA_88145741");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_60);
    UnderlyingInstrument_60.insert(EncodedUnderlyingSecurityDesc_60.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_60(1231349870);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_60);
    UnderlyingInstrument_60.insert(EncodedUnderlyingSecurityDescLen_60.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_60;
    UnderlyingAdjustedQuantity_60.setString("6583369");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_60);
    UnderlyingInstrument_60.insert(UnderlyingAdjustedQuantity_60.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_60;
    UnderlyingAllocationPercent_60.setString("49.060000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_60);
    UnderlyingInstrument_60.insert(UnderlyingAllocationPercent_60.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_60;
    UnderlyingAttachmentPoint_60.setString("46.970000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_60);
    UnderlyingInstrument_60.insert(UnderlyingAttachmentPoint_60.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_60("STRING_1236301219");
    noUnderlyings_0_1.set(UnderlyingCFICode_60);
    UnderlyingInstrument_60.insert(UnderlyingCFICode_60.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_60("STRING_1884611572");
    noUnderlyings_0_1.set(UnderlyingCPProgram_60);
    UnderlyingInstrument_60.insert(UnderlyingCPProgram_60.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_60("STRING_1392388848");
    noUnderlyings_0_1.set(UnderlyingCPRegType_60);
    UnderlyingInstrument_60.insert(UnderlyingCPRegType_60.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_60;
    UnderlyingCapValue_60.setString("18601761");
    noUnderlyings_0_1.set(UnderlyingCapValue_60);
    UnderlyingInstrument_60.insert(UnderlyingCapValue_60.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_60;
    UnderlyingCashAmount_60.setString("10789118");
    noUnderlyings_0_1.set(UnderlyingCashAmount_60);
    UnderlyingInstrument_60.insert(UnderlyingCashAmount_60.getString());
    FIX::UnderlyingCashType UnderlyingCashType_60("STRING_FIXED");
    noUnderlyings_0_1.set(UnderlyingCashType_60);
    UnderlyingInstrument_60.insert(UnderlyingCashType_60.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_60;
    UnderlyingContractMultiplier_60.setString("7046850");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_60);
    UnderlyingInstrument_60.insert(UnderlyingContractMultiplier_60.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_60(79287311);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_60);
    UnderlyingInstrument_60.insert(UnderlyingContractMultiplierUnit_60.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_60("COUNTRY_497182955");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_60);
    UnderlyingInstrument_60.insert(UnderlyingCountryOfIssue_60.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_60("LOCALMKTDATE_1047323908");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_60);
    UnderlyingInstrument_60.insert(UnderlyingCouponPaymentDate_60.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_60;
    UnderlyingCouponRate_60.setString("82.570000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_60);
    UnderlyingInstrument_60.insert(UnderlyingCouponRate_60.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_60("STRING_1003010624");
    noUnderlyings_0_1.set(UnderlyingCreditRating_60);
    UnderlyingInstrument_60.insert(UnderlyingCreditRating_60.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_60("CAN");
    noUnderlyings_0_1.set(UnderlyingCurrency_60);
    UnderlyingInstrument_60.insert(UnderlyingCurrency_60.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_60;
    UnderlyingCurrentValue_60.setString("3758744");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_60);
    UnderlyingInstrument_60.insert(UnderlyingCurrentValue_60.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_60;
    UnderlyingDetachmentPoint_60.setString("1.720000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_60);
    UnderlyingInstrument_60.insert(UnderlyingDetachmentPoint_60.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_60;
    UnderlyingDirtyPrice_60.setString("9812430");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_60);
    UnderlyingInstrument_60.insert(UnderlyingDirtyPrice_60.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_60;
    UnderlyingEndPrice_60.setString("8576529");
    noUnderlyings_0_1.set(UnderlyingEndPrice_60);
    UnderlyingInstrument_60.insert(UnderlyingEndPrice_60.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_60;
    UnderlyingEndValue_60.setString("3327484");
    noUnderlyings_0_1.set(UnderlyingEndValue_60);
    UnderlyingInstrument_60.insert(UnderlyingEndValue_60.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_60(1042088998);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_60);
    UnderlyingInstrument_60.insert(UnderlyingExerciseStyle_60.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_60;
    UnderlyingFXRate_60.setString("8155148");
    noUnderlyings_0_1.set(UnderlyingFXRate_60);
    UnderlyingInstrument_60.insert(UnderlyingFXRate_60.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_60('M');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_60);
    UnderlyingInstrument_60.insert(UnderlyingFXRateCalc_60.getString());
    FIX::UnderlyingFactor UnderlyingFactor_60;
    UnderlyingFactor_60.setString("642342");
    noUnderlyings_0_1.set(UnderlyingFactor_60);
    UnderlyingInstrument_60.insert(UnderlyingFactor_60.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_60(1788974616);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_60);
    UnderlyingInstrument_60.insert(UnderlyingFlowScheduleType_60.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_60("STRING_654462705");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_60);
    UnderlyingInstrument_60.insert(UnderlyingInstrRegistry_60.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_60("LOCALMKTDATE_1480139920");
    noUnderlyings_0_1.set(UnderlyingIssueDate_60);
    UnderlyingInstrument_60.insert(UnderlyingIssueDate_60.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_60("STRING_1877120358");
    noUnderlyings_0_1.set(UnderlyingIssuer_60);
    UnderlyingInstrument_60.insert(UnderlyingIssuer_60.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_60("STRING_1885812575");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_60);
    UnderlyingInstrument_60.insert(UnderlyingLocaleOfIssue_60.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_60("LOCALMKTDATE_2138476821");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_60);
    UnderlyingInstrument_60.insert(UnderlyingMaturityDate_60.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_60("MONTHYEAR_218691616");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_60);
    UnderlyingInstrument_60.insert(UnderlyingMaturityMonthYear_60.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_60("TZTIMEONLY_1578633624");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_60);
    UnderlyingInstrument_60.insert(UnderlyingMaturityTime_60.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_60;
    UnderlyingNotionalPercentageOutstanding_60.setString("43.920000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_60);
    UnderlyingInstrument_60.insert(UnderlyingNotionalPercentageOutstanding_60.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_60('2');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_60);
    UnderlyingInstrument_60.insert(UnderlyingOptAttribute_60.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_60;
    UnderlyingOriginalNotionalPercentageOutstanding_60.setString("88.240000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_60);
    UnderlyingInstrument_60.insert(UnderlyingOriginalNotionalPercentageOutstanding_60.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_60("STRING_939986859");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_60);
    UnderlyingInstrument_60.insert(UnderlyingPriceUnitOfMeasure_60.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_60;
    UnderlyingPriceUnitOfMeasureQty_60.setString("10347314");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_60);
    UnderlyingInstrument_60.insert(UnderlyingPriceUnitOfMeasureQty_60.getString());
    FIX::UnderlyingProduct UnderlyingProduct_60(1326775488);
    noUnderlyings_0_1.set(UnderlyingProduct_60);
    UnderlyingInstrument_60.insert(UnderlyingProduct_60.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_60(1644671894);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_60);
    UnderlyingInstrument_60.insert(UnderlyingPutOrCall_60.getString());
    FIX::UnderlyingPx UnderlyingPx_60;
    UnderlyingPx_60.setString("11140187");
    noUnderlyings_0_1.set(UnderlyingPx_60);
    UnderlyingInstrument_60.insert(UnderlyingPx_60.getString());
    FIX::UnderlyingQty UnderlyingQty_60;
    UnderlyingQty_60.setString("18239584");
    noUnderlyings_0_1.set(UnderlyingQty_60);
    UnderlyingInstrument_60.insert(UnderlyingQty_60.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_60("LOCALMKTDATE_544512154");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_60);
    UnderlyingInstrument_60.insert(UnderlyingRedemptionDate_60.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_60("STRING_1048113339");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_60);
    UnderlyingInstrument_60.insert(UnderlyingRepoCollateralSecurityType_60.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_60;
    UnderlyingRepurchaseRate_60.setString("54.200000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_60);
    UnderlyingInstrument_60.insert(UnderlyingRepurchaseRate_60.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_60(1728399119);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_60);
    UnderlyingInstrument_60.insert(UnderlyingRepurchaseTerm_60.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_60("STRING_527137566");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_60);
    UnderlyingInstrument_60.insert(UnderlyingRestructuringType_60.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_60("STRING_1055359826");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_60);
    UnderlyingInstrument_60.insert(UnderlyingSecurityDesc_60.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_60("EXCHANGE_1101435643");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_60);
    UnderlyingInstrument_60.insert(UnderlyingSecurityExchange_60.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_60("STRING_1508380599");
    noUnderlyings_0_1.set(UnderlyingSecurityID_60);
    UnderlyingInstrument_60.insert(UnderlyingSecurityID_60.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_60("STRING_1913012820");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_60);
    UnderlyingInstrument_60.insert(UnderlyingSecurityIDSource_60.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_60("STRING_1434184142");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_60);
    UnderlyingInstrument_60.insert(UnderlyingSecuritySubType_60.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_60("STRING_402985949");
    noUnderlyings_0_1.set(UnderlyingSecurityType_60);
    UnderlyingInstrument_60.insert(UnderlyingSecurityType_60.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_60("STRING_581043986");
    noUnderlyings_0_1.set(UnderlyingSeniority_60);
    UnderlyingInstrument_60.insert(UnderlyingSeniority_60.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_60("STRING_1170990820");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_60);
    UnderlyingInstrument_60.insert(UnderlyingSettlMethod_60.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_60(2);
    noUnderlyings_0_1.set(UnderlyingSettlementType_60);
    UnderlyingInstrument_60.insert(UnderlyingSettlementType_60.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_60;
    UnderlyingStartValue_60.setString("2225349");
    noUnderlyings_0_1.set(UnderlyingStartValue_60);
    UnderlyingInstrument_60.insert(UnderlyingStartValue_60.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_60("STRING_1825453525");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_60);
    UnderlyingInstrument_60.insert(UnderlyingStateOrProvinceOfIssue_60.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_60("USD");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_60);
    UnderlyingInstrument_60.insert(UnderlyingStrikeCurrency_60.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_60;
    UnderlyingStrikePrice_60.setString("15637824");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_60);
    UnderlyingInstrument_60.insert(UnderlyingStrikePrice_60.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_60("STRING_1938353318");
    noUnderlyings_0_1.set(UnderlyingSymbol_60);
    UnderlyingInstrument_60.insert(UnderlyingSymbol_60.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_60("STRING_170863281");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_60);
    UnderlyingInstrument_60.insert(UnderlyingSymbolSfx_60.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_60("STRING_994932429");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_60);
    UnderlyingInstrument_60.insert(UnderlyingTimeUnit_60.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_60("STRING_1018164063");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_60);
    UnderlyingInstrument_60.insert(UnderlyingUnitOfMeasure_60.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_60;
    UnderlyingUnitOfMeasureQty_60.setString("1266828");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_60);
    UnderlyingInstrument_60.insert(UnderlyingUnitOfMeasureQty_60.getString());
    all_values.push_back(UnderlyingInstrument_60);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_123;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_123("STRING_1958150922");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_123);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_123.insert(UnderlyingSecurityAltID_123.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_123("STRING_1161414241");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_123);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_123.insert(UnderlyingSecurityAltIDSource_123.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_123);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_124;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_124("STRING_997763094");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_124);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_124.insert(UnderlyingSecurityAltID_124.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_124("STRING_1455339168");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_124);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_124.insert(UnderlyingSecurityAltIDSource_124.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_124);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_121;
      FIX::UnderlyingStipType UnderlyingStipType_121("STRING_674237890");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_121);
      UnderlyingStipulations_NoUnderlyingStips_121.insert(UnderlyingStipType_121.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_121("STRING_1999851323");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_121);
      UnderlyingStipulations_NoUnderlyingStips_121.insert(UnderlyingStipValue_121.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_121);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_122;
      FIX::UnderlyingStipType UnderlyingStipType_122("STRING_1176062662");
      noUnderlyingStips_1_1_1.set(UnderlyingStipType_122);
      UnderlyingStipulations_NoUnderlyingStips_122.insert(UnderlyingStipType_122.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_122("STRING_1353723310");
      noUnderlyingStips_1_1_1.set(UnderlyingStipValue_122);
      UnderlyingStipulations_NoUnderlyingStips_122.insert(UnderlyingStipValue_122.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_122);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_114;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_114("STRING_1703200229");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_114);
      UndlyInstrumentParties_NoUndlyInstrumentParties_114.insert(UnderlyingInstrumentPartyID_114.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_114('2');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_114);
      UndlyInstrumentParties_NoUndlyInstrumentParties_114.insert(UnderlyingInstrumentPartyIDSource_114.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_114(534718789);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_114);
      UndlyInstrumentParties_NoUndlyInstrumentParties_114.insert(UnderlyingInstrumentPartyRole_114.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_114);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_225;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_225("STRING_27128660");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_225);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_225.insert(UnderlyingInstrumentPartySubID_225.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_225(1968902932);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_225);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_225.insert(UnderlyingInstrumentPartySubIDType_225.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_225);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_115;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_115("STRING_1467083129");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_115);
      UndlyInstrumentParties_NoUndlyInstrumentParties_115.insert(UnderlyingInstrumentPartyID_115.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_115('6');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_115);
      UndlyInstrumentParties_NoUndlyInstrumentParties_115.insert(UnderlyingInstrumentPartyIDSource_115.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_115(992410104);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_115);
      UndlyInstrumentParties_NoUndlyInstrumentParties_115.insert(UnderlyingInstrumentPartyRole_115.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_115);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_226;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_226("STRING_830707601");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_226);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_226.insert(UnderlyingInstrumentPartySubID_226.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_226(670379981);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_226);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_226.insert(UnderlyingInstrumentPartySubIDType_226.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_226);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_227;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_227("STRING_1734179851");
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubID_227);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_227.insert(UnderlyingInstrumentPartySubID_227.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_227(782879265);
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubIDType_227);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_227.insert(UnderlyingInstrumentPartySubIDType_227.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_227);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_228;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_228("STRING_86678785");
        noUndlyInstrumentPartySubIDs_1_1_2_2.set(UnderlyingInstrumentPartySubID_228);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_228.insert(UnderlyingInstrumentPartySubID_228.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_228(1525049522);
        noUndlyInstrumentPartySubIDs_1_1_2_2.set(UnderlyingInstrumentPartySubIDType_228);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_228.insert(UnderlyingInstrumentPartySubIDType_228.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_228);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_116;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_116("STRING_953742546");
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyID_116);
      UndlyInstrumentParties_NoUndlyInstrumentParties_116.insert(UnderlyingInstrumentPartyID_116.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_116('1');
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyIDSource_116);
      UndlyInstrumentParties_NoUndlyInstrumentParties_116.insert(UnderlyingInstrumentPartyIDSource_116.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_116(395729937);
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyRole_116);
      UndlyInstrumentParties_NoUndlyInstrumentParties_116.insert(UnderlyingInstrumentPartyRole_116.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_116);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_229;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_229("STRING_752598820");
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubID_229);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_229.insert(UnderlyingInstrumentPartySubID_229.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_229(206397211);
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubIDType_229);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_229.insert(UnderlyingInstrumentPartySubIDType_229.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_229);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_230;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_230("STRING_94355961");
        noUndlyInstrumentPartySubIDs_1_2_2_1.set(UnderlyingInstrumentPartySubID_230);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_230.insert(UnderlyingInstrumentPartySubID_230.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_230(1750361914);
        noUndlyInstrumentPartySubIDs_1_2_2_1.set(UnderlyingInstrumentPartySubIDType_230);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_230.insert(UnderlyingInstrumentPartySubIDType_230.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_230);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_2);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  {
    FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings noUnderlyings_0_2;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_61;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_61("DATA_1661736379");
    noUnderlyings_0_2.set(EncodedUnderlyingIssuer_61);
    UnderlyingInstrument_61.insert(EncodedUnderlyingIssuer_61.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_61(222305284);
    noUnderlyings_0_2.set(EncodedUnderlyingIssuerLen_61);
    UnderlyingInstrument_61.insert(EncodedUnderlyingIssuerLen_61.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_61("DATA_277116156");
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDesc_61);
    UnderlyingInstrument_61.insert(EncodedUnderlyingSecurityDesc_61.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_61(1514104054);
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDescLen_61);
    UnderlyingInstrument_61.insert(EncodedUnderlyingSecurityDescLen_61.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_61;
    UnderlyingAdjustedQuantity_61.setString("13983679");
    noUnderlyings_0_2.set(UnderlyingAdjustedQuantity_61);
    UnderlyingInstrument_61.insert(UnderlyingAdjustedQuantity_61.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_61;
    UnderlyingAllocationPercent_61.setString("94.660000");
    noUnderlyings_0_2.set(UnderlyingAllocationPercent_61);
    UnderlyingInstrument_61.insert(UnderlyingAllocationPercent_61.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_61;
    UnderlyingAttachmentPoint_61.setString("72.000000");
    noUnderlyings_0_2.set(UnderlyingAttachmentPoint_61);
    UnderlyingInstrument_61.insert(UnderlyingAttachmentPoint_61.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_61("STRING_954084528");
    noUnderlyings_0_2.set(UnderlyingCFICode_61);
    UnderlyingInstrument_61.insert(UnderlyingCFICode_61.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_61("STRING_1892438955");
    noUnderlyings_0_2.set(UnderlyingCPProgram_61);
    UnderlyingInstrument_61.insert(UnderlyingCPProgram_61.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_61("STRING_1482105990");
    noUnderlyings_0_2.set(UnderlyingCPRegType_61);
    UnderlyingInstrument_61.insert(UnderlyingCPRegType_61.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_61;
    UnderlyingCapValue_61.setString("20181817");
    noUnderlyings_0_2.set(UnderlyingCapValue_61);
    UnderlyingInstrument_61.insert(UnderlyingCapValue_61.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_61;
    UnderlyingCashAmount_61.setString("19195676");
    noUnderlyings_0_2.set(UnderlyingCashAmount_61);
    UnderlyingInstrument_61.insert(UnderlyingCashAmount_61.getString());
    FIX::UnderlyingCashType UnderlyingCashType_61("STRING_FIXED");
    noUnderlyings_0_2.set(UnderlyingCashType_61);
    UnderlyingInstrument_61.insert(UnderlyingCashType_61.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_61;
    UnderlyingContractMultiplier_61.setString("13377811");
    noUnderlyings_0_2.set(UnderlyingContractMultiplier_61);
    UnderlyingInstrument_61.insert(UnderlyingContractMultiplier_61.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_61(380256614);
    noUnderlyings_0_2.set(UnderlyingContractMultiplierUnit_61);
    UnderlyingInstrument_61.insert(UnderlyingContractMultiplierUnit_61.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_61("COUNTRY_148451730");
    noUnderlyings_0_2.set(UnderlyingCountryOfIssue_61);
    UnderlyingInstrument_61.insert(UnderlyingCountryOfIssue_61.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_61("LOCALMKTDATE_1124600895");
    noUnderlyings_0_2.set(UnderlyingCouponPaymentDate_61);
    UnderlyingInstrument_61.insert(UnderlyingCouponPaymentDate_61.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_61;
    UnderlyingCouponRate_61.setString("42.150000");
    noUnderlyings_0_2.set(UnderlyingCouponRate_61);
    UnderlyingInstrument_61.insert(UnderlyingCouponRate_61.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_61("STRING_818831711");
    noUnderlyings_0_2.set(UnderlyingCreditRating_61);
    UnderlyingInstrument_61.insert(UnderlyingCreditRating_61.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_61("JPY");
    noUnderlyings_0_2.set(UnderlyingCurrency_61);
    UnderlyingInstrument_61.insert(UnderlyingCurrency_61.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_61;
    UnderlyingCurrentValue_61.setString("9055104");
    noUnderlyings_0_2.set(UnderlyingCurrentValue_61);
    UnderlyingInstrument_61.insert(UnderlyingCurrentValue_61.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_61;
    UnderlyingDetachmentPoint_61.setString("29.720000");
    noUnderlyings_0_2.set(UnderlyingDetachmentPoint_61);
    UnderlyingInstrument_61.insert(UnderlyingDetachmentPoint_61.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_61;
    UnderlyingDirtyPrice_61.setString("8001023");
    noUnderlyings_0_2.set(UnderlyingDirtyPrice_61);
    UnderlyingInstrument_61.insert(UnderlyingDirtyPrice_61.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_61;
    UnderlyingEndPrice_61.setString("19871217");
    noUnderlyings_0_2.set(UnderlyingEndPrice_61);
    UnderlyingInstrument_61.insert(UnderlyingEndPrice_61.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_61;
    UnderlyingEndValue_61.setString("4845929");
    noUnderlyings_0_2.set(UnderlyingEndValue_61);
    UnderlyingInstrument_61.insert(UnderlyingEndValue_61.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_61(1880527747);
    noUnderlyings_0_2.set(UnderlyingExerciseStyle_61);
    UnderlyingInstrument_61.insert(UnderlyingExerciseStyle_61.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_61;
    UnderlyingFXRate_61.setString("5922368");
    noUnderlyings_0_2.set(UnderlyingFXRate_61);
    UnderlyingInstrument_61.insert(UnderlyingFXRate_61.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_61('D');
    noUnderlyings_0_2.set(UnderlyingFXRateCalc_61);
    UnderlyingInstrument_61.insert(UnderlyingFXRateCalc_61.getString());
    FIX::UnderlyingFactor UnderlyingFactor_61;
    UnderlyingFactor_61.setString("19748837");
    noUnderlyings_0_2.set(UnderlyingFactor_61);
    UnderlyingInstrument_61.insert(UnderlyingFactor_61.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_61(195115149);
    noUnderlyings_0_2.set(UnderlyingFlowScheduleType_61);
    UnderlyingInstrument_61.insert(UnderlyingFlowScheduleType_61.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_61("STRING_205242852");
    noUnderlyings_0_2.set(UnderlyingInstrRegistry_61);
    UnderlyingInstrument_61.insert(UnderlyingInstrRegistry_61.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_61("LOCALMKTDATE_49705345");
    noUnderlyings_0_2.set(UnderlyingIssueDate_61);
    UnderlyingInstrument_61.insert(UnderlyingIssueDate_61.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_61("STRING_472231305");
    noUnderlyings_0_2.set(UnderlyingIssuer_61);
    UnderlyingInstrument_61.insert(UnderlyingIssuer_61.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_61("STRING_1719346906");
    noUnderlyings_0_2.set(UnderlyingLocaleOfIssue_61);
    UnderlyingInstrument_61.insert(UnderlyingLocaleOfIssue_61.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_61("LOCALMKTDATE_1448073292");
    noUnderlyings_0_2.set(UnderlyingMaturityDate_61);
    UnderlyingInstrument_61.insert(UnderlyingMaturityDate_61.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_61("MONTHYEAR_2103070771");
    noUnderlyings_0_2.set(UnderlyingMaturityMonthYear_61);
    UnderlyingInstrument_61.insert(UnderlyingMaturityMonthYear_61.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_61("TZTIMEONLY_519250459");
    noUnderlyings_0_2.set(UnderlyingMaturityTime_61);
    UnderlyingInstrument_61.insert(UnderlyingMaturityTime_61.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_61;
    UnderlyingNotionalPercentageOutstanding_61.setString("41.720000");
    noUnderlyings_0_2.set(UnderlyingNotionalPercentageOutstanding_61);
    UnderlyingInstrument_61.insert(UnderlyingNotionalPercentageOutstanding_61.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_61('1');
    noUnderlyings_0_2.set(UnderlyingOptAttribute_61);
    UnderlyingInstrument_61.insert(UnderlyingOptAttribute_61.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_61;
    UnderlyingOriginalNotionalPercentageOutstanding_61.setString("64.490000");
    noUnderlyings_0_2.set(UnderlyingOriginalNotionalPercentageOutstanding_61);
    UnderlyingInstrument_61.insert(UnderlyingOriginalNotionalPercentageOutstanding_61.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_61("STRING_125372232");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasure_61);
    UnderlyingInstrument_61.insert(UnderlyingPriceUnitOfMeasure_61.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_61;
    UnderlyingPriceUnitOfMeasureQty_61.setString("16201100");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasureQty_61);
    UnderlyingInstrument_61.insert(UnderlyingPriceUnitOfMeasureQty_61.getString());
    FIX::UnderlyingProduct UnderlyingProduct_61(1157398075);
    noUnderlyings_0_2.set(UnderlyingProduct_61);
    UnderlyingInstrument_61.insert(UnderlyingProduct_61.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_61(1463153421);
    noUnderlyings_0_2.set(UnderlyingPutOrCall_61);
    UnderlyingInstrument_61.insert(UnderlyingPutOrCall_61.getString());
    FIX::UnderlyingPx UnderlyingPx_61;
    UnderlyingPx_61.setString("20003666");
    noUnderlyings_0_2.set(UnderlyingPx_61);
    UnderlyingInstrument_61.insert(UnderlyingPx_61.getString());
    FIX::UnderlyingQty UnderlyingQty_61;
    UnderlyingQty_61.setString("13058498");
    noUnderlyings_0_2.set(UnderlyingQty_61);
    UnderlyingInstrument_61.insert(UnderlyingQty_61.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_61("LOCALMKTDATE_440270668");
    noUnderlyings_0_2.set(UnderlyingRedemptionDate_61);
    UnderlyingInstrument_61.insert(UnderlyingRedemptionDate_61.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_61("STRING_1063847227");
    noUnderlyings_0_2.set(UnderlyingRepoCollateralSecurityType_61);
    UnderlyingInstrument_61.insert(UnderlyingRepoCollateralSecurityType_61.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_61;
    UnderlyingRepurchaseRate_61.setString("15.160000");
    noUnderlyings_0_2.set(UnderlyingRepurchaseRate_61);
    UnderlyingInstrument_61.insert(UnderlyingRepurchaseRate_61.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_61(1151567767);
    noUnderlyings_0_2.set(UnderlyingRepurchaseTerm_61);
    UnderlyingInstrument_61.insert(UnderlyingRepurchaseTerm_61.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_61("STRING_910207059");
    noUnderlyings_0_2.set(UnderlyingRestructuringType_61);
    UnderlyingInstrument_61.insert(UnderlyingRestructuringType_61.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_61("STRING_882708364");
    noUnderlyings_0_2.set(UnderlyingSecurityDesc_61);
    UnderlyingInstrument_61.insert(UnderlyingSecurityDesc_61.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_61("EXCHANGE_1240430739");
    noUnderlyings_0_2.set(UnderlyingSecurityExchange_61);
    UnderlyingInstrument_61.insert(UnderlyingSecurityExchange_61.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_61("STRING_1710309438");
    noUnderlyings_0_2.set(UnderlyingSecurityID_61);
    UnderlyingInstrument_61.insert(UnderlyingSecurityID_61.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_61("STRING_722346427");
    noUnderlyings_0_2.set(UnderlyingSecurityIDSource_61);
    UnderlyingInstrument_61.insert(UnderlyingSecurityIDSource_61.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_61("STRING_1725023649");
    noUnderlyings_0_2.set(UnderlyingSecuritySubType_61);
    UnderlyingInstrument_61.insert(UnderlyingSecuritySubType_61.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_61("STRING_1443353538");
    noUnderlyings_0_2.set(UnderlyingSecurityType_61);
    UnderlyingInstrument_61.insert(UnderlyingSecurityType_61.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_61("STRING_1314583310");
    noUnderlyings_0_2.set(UnderlyingSeniority_61);
    UnderlyingInstrument_61.insert(UnderlyingSeniority_61.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_61("STRING_268530121");
    noUnderlyings_0_2.set(UnderlyingSettlMethod_61);
    UnderlyingInstrument_61.insert(UnderlyingSettlMethod_61.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_61(2);
    noUnderlyings_0_2.set(UnderlyingSettlementType_61);
    UnderlyingInstrument_61.insert(UnderlyingSettlementType_61.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_61;
    UnderlyingStartValue_61.setString("15096984");
    noUnderlyings_0_2.set(UnderlyingStartValue_61);
    UnderlyingInstrument_61.insert(UnderlyingStartValue_61.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_61("STRING_473772973");
    noUnderlyings_0_2.set(UnderlyingStateOrProvinceOfIssue_61);
    UnderlyingInstrument_61.insert(UnderlyingStateOrProvinceOfIssue_61.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_61("GBP");
    noUnderlyings_0_2.set(UnderlyingStrikeCurrency_61);
    UnderlyingInstrument_61.insert(UnderlyingStrikeCurrency_61.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_61;
    UnderlyingStrikePrice_61.setString("456362");
    noUnderlyings_0_2.set(UnderlyingStrikePrice_61);
    UnderlyingInstrument_61.insert(UnderlyingStrikePrice_61.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_61("STRING_621048589");
    noUnderlyings_0_2.set(UnderlyingSymbol_61);
    UnderlyingInstrument_61.insert(UnderlyingSymbol_61.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_61("STRING_1937516888");
    noUnderlyings_0_2.set(UnderlyingSymbolSfx_61);
    UnderlyingInstrument_61.insert(UnderlyingSymbolSfx_61.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_61("STRING_564886691");
    noUnderlyings_0_2.set(UnderlyingTimeUnit_61);
    UnderlyingInstrument_61.insert(UnderlyingTimeUnit_61.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_61("STRING_875722761");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasure_61);
    UnderlyingInstrument_61.insert(UnderlyingUnitOfMeasure_61.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_61;
    UnderlyingUnitOfMeasureQty_61.setString("16380593");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasureQty_61);
    UnderlyingInstrument_61.insert(UnderlyingUnitOfMeasureQty_61.getString());
    all_values.push_back(UnderlyingInstrument_61);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_125;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_125("STRING_1001094994");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltID_125);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_125.insert(UnderlyingSecurityAltID_125.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_125("STRING_1110685716");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltIDSource_125);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_125.insert(UnderlyingSecurityAltIDSource_125.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_125);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_126;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_126("STRING_1576157567");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltID_126);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_126.insert(UnderlyingSecurityAltID_126.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_126("STRING_316764767");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltIDSource_126);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_126.insert(UnderlyingSecurityAltIDSource_126.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_126);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_123;
      FIX::UnderlyingStipType UnderlyingStipType_123("STRING_734523724");
      noUnderlyingStips_2_1_0.set(UnderlyingStipType_123);
      UnderlyingStipulations_NoUnderlyingStips_123.insert(UnderlyingStipType_123.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_123("STRING_757035436");
      noUnderlyingStips_2_1_0.set(UnderlyingStipValue_123);
      UnderlyingStipulations_NoUnderlyingStips_123.insert(UnderlyingStipValue_123.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_123);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_117;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_117("STRING_711721592");
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyID_117);
      UndlyInstrumentParties_NoUndlyInstrumentParties_117.insert(UnderlyingInstrumentPartyID_117.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_117('1');
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyIDSource_117);
      UndlyInstrumentParties_NoUndlyInstrumentParties_117.insert(UnderlyingInstrumentPartyIDSource_117.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_117(790139367);
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyRole_117);
      UndlyInstrumentParties_NoUndlyInstrumentParties_117.insert(UnderlyingInstrumentPartyRole_117.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_117);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_231;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_231("STRING_1001550294");
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubID_231);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_231.insert(UnderlyingInstrumentPartySubID_231.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_231(352965157);
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubIDType_231);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_231.insert(UnderlyingInstrumentPartySubIDType_231.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_231);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_0);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_118;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_118("STRING_169292736");
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyID_118);
      UndlyInstrumentParties_NoUndlyInstrumentParties_118.insert(UnderlyingInstrumentPartyID_118.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_118('5');
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyIDSource_118);
      UndlyInstrumentParties_NoUndlyInstrumentParties_118.insert(UnderlyingInstrumentPartyIDSource_118.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_118(1796318695);
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyRole_118);
      UndlyInstrumentParties_NoUndlyInstrumentParties_118.insert(UnderlyingInstrumentPartyRole_118.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_118);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_232;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_232("STRING_847620417");
        noUndlyInstrumentPartySubIDs_2_1_2_0.set(UnderlyingInstrumentPartySubID_232);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_232.insert(UnderlyingInstrumentPartySubID_232.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_232(919588646);
        noUndlyInstrumentPartySubIDs_2_1_2_0.set(UnderlyingInstrumentPartySubIDType_232);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_232.insert(UnderlyingInstrumentPartySubIDType_232.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_232);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_233;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_233("STRING_846090858");
        noUndlyInstrumentPartySubIDs_2_1_2_1.set(UnderlyingInstrumentPartySubID_233);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_233.insert(UnderlyingInstrumentPartySubID_233.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_233(1321393390);
        noUndlyInstrumentPartySubIDs_2_1_2_1.set(UnderlyingInstrumentPartySubIDType_233);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_233.insert(UnderlyingInstrumentPartySubIDType_233.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_233);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_1);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_234;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_234("STRING_92563943");
        noUndlyInstrumentPartySubIDs_2_1_2_2.set(UnderlyingInstrumentPartySubID_234);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_234.insert(UnderlyingInstrumentPartySubID_234.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_234(680536974);
        noUndlyInstrumentPartySubIDs_2_1_2_2.set(UnderlyingInstrumentPartySubIDType_234);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_234.insert(UnderlyingInstrumentPartySubIDType_234.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_234);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_2);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_1);
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
