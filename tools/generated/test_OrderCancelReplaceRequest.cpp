#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/OrderCancelReplaceRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( OrderCancelReplaceRequest, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::OrderCancelReplaceRequest msg;

  list<multiset<string>> all_values;
  multiset<string> OrderCancelReplaceRequest_0;
  FIX::Account Account_20("STRING_1148960174");
  msg.set(Account_20);
  OrderCancelReplaceRequest_0.insert(Account_20.getString());
  FIX::AccountType AccountType_19(1);
  msg.set(AccountType_19);
  OrderCancelReplaceRequest_0.insert(AccountType_19.getString());
  FIX::AcctIDSource AcctIDSource_13(1);
  msg.set(AcctIDSource_13);
  OrderCancelReplaceRequest_0.insert(AcctIDSource_13.getString());
  FIX::AllocID AllocID_16("STRING_972877908");
  msg.set(AllocID_16);
  OrderCancelReplaceRequest_0.insert(AllocID_16.getString());
  FIX::BookingType BookingType_23(1);
  msg.set(BookingType_23);
  OrderCancelReplaceRequest_0.insert(BookingType_23.getString());
  FIX::BookingUnit BookingUnit_9('2');
  msg.set(BookingUnit_9);
  OrderCancelReplaceRequest_0.insert(BookingUnit_9.getString());
  FIX::CancellationRights CancellationRights_7('M');
  msg.set(CancellationRights_7);
  OrderCancelReplaceRequest_0.insert(CancellationRights_7.getString());
  FIX::CashMargin CashMargin_9('1');
  msg.set(CashMargin_9);
  OrderCancelReplaceRequest_0.insert(CashMargin_9.getString());
  FIX::ClOrdID ClOrdID_34("STRING_1957772609");
  msg.set(ClOrdID_34);
  OrderCancelReplaceRequest_0.insert(ClOrdID_34.getString());
  FIX::ClOrdLinkID ClOrdLinkID_12("STRING_328924025");
  msg.set(ClOrdLinkID_12);
  OrderCancelReplaceRequest_0.insert(ClOrdLinkID_12.getString());
  FIX::ClearingFeeIndicator ClearingFeeIndicator_15("STRING_4");
  msg.set(ClearingFeeIndicator_15);
  OrderCancelReplaceRequest_0.insert(ClearingFeeIndicator_15.getString());
  FIX::ComplianceID ComplianceID_10("STRING_544746871");
  msg.set(ComplianceID_10);
  OrderCancelReplaceRequest_0.insert(ComplianceID_10.getString());
  FIX::CoveredOrUncovered CoveredOrUncovered_8(1);
  msg.set(CoveredOrUncovered_8);
  OrderCancelReplaceRequest_0.insert(CoveredOrUncovered_8.getString());
  FIX::Currency Currency_46("CHF");
  msg.set(Currency_46);
  OrderCancelReplaceRequest_0.insert(Currency_46.getString());
  FIX::CustDirectedOrder CustDirectedOrder_2(true);
  msg.set(CustDirectedOrder_2);
  OrderCancelReplaceRequest_0.insert(CustDirectedOrder_2.getString());
  FIX::CustOrderCapacity CustOrderCapacity_12(1);
  msg.set(CustOrderCapacity_12);
  OrderCancelReplaceRequest_0.insert(CustOrderCapacity_12.getString());
  FIX::CustOrderHandlingInst CustOrderHandlingInst_2("MULTIPLESTRINGVALUE_DIR");
  msg.set(CustOrderHandlingInst_2);
  OrderCancelReplaceRequest_0.insert(CustOrderHandlingInst_2.getString());
  FIX::DayBookingInst DayBookingInst_9('2');
  msg.set(DayBookingInst_9);
  OrderCancelReplaceRequest_0.insert(DayBookingInst_9.getString());
  FIX::Designation Designation_8("STRING_1832730195");
  msg.set(Designation_8);
  OrderCancelReplaceRequest_0.insert(Designation_8.getString());
  FIX::EffectiveTime EffectiveTime_8(FIX::UTCTIMESTAMP(6, 36, 5, 23, 2, 2000));
  msg.set(EffectiveTime_8);
  OrderCancelReplaceRequest_0.insert(EffectiveTime_8.getString());
  FIX::EncodedText EncodedText_59("DATA_1633172398");
  msg.set(EncodedText_59);
  OrderCancelReplaceRequest_0.insert(EncodedText_59.getString());
  FIX::EncodedTextLen EncodedTextLen_59(2122273584);
  msg.set(EncodedTextLen_59);
  OrderCancelReplaceRequest_0.insert(EncodedTextLen_59.getString());
  FIX::ExDestination ExDestination_7("EXCHANGE_1209732376");
  msg.set(ExDestination_7);
  OrderCancelReplaceRequest_0.insert(ExDestination_7.getString());
  FIX::ExDestinationIDSource ExDestinationIDSource_7('E');
  msg.set(ExDestinationIDSource_7);
  OrderCancelReplaceRequest_0.insert(ExDestinationIDSource_7.getString());
  FIX::ExecInst ExecInst_10("MULTIPLECHARVALUE_E");
  msg.set(ExecInst_10);
  OrderCancelReplaceRequest_0.insert(ExecInst_10.getString());
  FIX::ExpireDate ExpireDate_11("LOCALMKTDATE_1056057986");
  msg.set(ExpireDate_11);
  OrderCancelReplaceRequest_0.insert(ExpireDate_11.getString());
  FIX::ExpireTime ExpireTime_12(FIX::UTCTIMESTAMP(18, 35, 18, 24, 4, 2010));
  msg.set(ExpireTime_12);
  OrderCancelReplaceRequest_0.insert(ExpireTime_12.getString());
  FIX::ForexReq ForexReq_9(true);
  msg.set(ForexReq_9);
  OrderCancelReplaceRequest_0.insert(ForexReq_9.getString());
  FIX::GTBookingInst GTBookingInst_8(2);
  msg.set(GTBookingInst_8);
  OrderCancelReplaceRequest_0.insert(GTBookingInst_8.getString());
  FIX::HandlInst HandlInst_8('1');
  msg.set(HandlInst_8);
  OrderCancelReplaceRequest_0.insert(HandlInst_8.getString());
  FIX::ListID ListID_21("STRING_704689283");
  msg.set(ListID_21);
  OrderCancelReplaceRequest_0.insert(ListID_21.getString());
  FIX::LocateReqd LocateReqd_7(false);
  msg.set(LocateReqd_7);
  OrderCancelReplaceRequest_0.insert(LocateReqd_7.getString());
  FIX::ManualOrderIndicator ManualOrderIndicator_2(true);
  msg.set(ManualOrderIndicator_2);
  OrderCancelReplaceRequest_0.insert(ManualOrderIndicator_2.getString());
  FIX::MatchIncrement MatchIncrement_8;
  MatchIncrement_8.setString("9217971");
  msg.set(MatchIncrement_8);
  OrderCancelReplaceRequest_0.insert(MatchIncrement_8.getString());
  FIX::MaxFloor MaxFloor_8;
  MaxFloor_8.setString("9122786");
  msg.set(MaxFloor_8);
  OrderCancelReplaceRequest_0.insert(MaxFloor_8.getString());
  FIX::MaxPriceLevels MaxPriceLevels_8(1541943525);
  msg.set(MaxPriceLevels_8);
  OrderCancelReplaceRequest_0.insert(MaxPriceLevels_8.getString());
  FIX::MaxShow MaxShow_8;
  MaxShow_8.setString("17340225");
  msg.set(MaxShow_8);
  OrderCancelReplaceRequest_0.insert(MaxShow_8.getString());
  FIX::MinQty MinQty_10;
  MinQty_10.setString("5975252");
  msg.set(MinQty_10);
  OrderCancelReplaceRequest_0.insert(MinQty_10.getString());
  FIX::MoneyLaunderingStatus MoneyLaunderingStatus_7('2');
  msg.set(MoneyLaunderingStatus_7);
  OrderCancelReplaceRequest_0.insert(MoneyLaunderingStatus_7.getString());
  FIX::OrdType OrdType_37('3');
  msg.set(OrdType_37);
  OrderCancelReplaceRequest_0.insert(OrdType_37.getString());
  FIX::OrderCapacity OrderCapacity_25('I');
  msg.set(OrderCapacity_25);
  OrderCancelReplaceRequest_0.insert(OrderCapacity_25.getString());
  FIX::OrderHandlingInstSource OrderHandlingInstSource_2(1);
  msg.set(OrderHandlingInstSource_2);
  OrderCancelReplaceRequest_0.insert(OrderHandlingInstSource_2.getString());
  FIX::OrderID OrderID_29("STRING_532749357");
  msg.set(OrderID_29);
  OrderCancelReplaceRequest_0.insert(OrderID_29.getString());
  FIX::OrderQty2 OrderQty2_15;
  OrderQty2_15.setString("3975834");
  msg.set(OrderQty2_15);
  OrderCancelReplaceRequest_0.insert(OrderQty2_15.getString());
  FIX::OrderRestrictions OrderRestrictions_23("MULTIPLECHARVALUE_3");
  msg.set(OrderRestrictions_23);
  OrderCancelReplaceRequest_0.insert(OrderRestrictions_23.getString());
  FIX::OrigClOrdID OrigClOrdID_8("STRING_18438107");
  msg.set(OrigClOrdID_8);
  OrderCancelReplaceRequest_0.insert(OrigClOrdID_8.getString());
  FIX::OrigOrdModTime OrigOrdModTime_4(FIX::UTCTIMESTAMP(1, 21, 0, 0, 6, 2004));
  msg.set(OrigOrdModTime_4);
  OrderCancelReplaceRequest_0.insert(OrigOrdModTime_4.getString());
  FIX::ParticipationRate ParticipationRate_8;
  ParticipationRate_8.setString("12.390000");
  msg.set(ParticipationRate_8);
  OrderCancelReplaceRequest_0.insert(ParticipationRate_8.getString());
  FIX::PositionEffect PositionEffect_12('R');
  msg.set(PositionEffect_12);
  OrderCancelReplaceRequest_0.insert(PositionEffect_12.getString());
  FIX::PreTradeAnonymity PreTradeAnonymity_9(false);
  msg.set(PreTradeAnonymity_9);
  OrderCancelReplaceRequest_0.insert(PreTradeAnonymity_9.getString());
  FIX::PreallocMethod PreallocMethod_9('0');
  msg.set(PreallocMethod_9);
  OrderCancelReplaceRequest_0.insert(PreallocMethod_9.getString());
  FIX::Price Price_17;
  Price_17.setString("20446389");
  msg.set(Price_17);
  OrderCancelReplaceRequest_0.insert(Price_17.getString());
  FIX::Price2 Price2_3;
  Price2_3.setString("12233027");
  msg.set(Price2_3);
  OrderCancelReplaceRequest_0.insert(Price2_3.getString());
  FIX::PriceProtectionScope PriceProtectionScope_8('1');
  msg.set(PriceProtectionScope_8);
  OrderCancelReplaceRequest_0.insert(PriceProtectionScope_8.getString());
  FIX::PriceType PriceType_27(4);
  msg.set(PriceType_27);
  OrderCancelReplaceRequest_0.insert(PriceType_27.getString());
  FIX::QtyType QtyType_21(2);
  msg.set(QtyType_21);
  OrderCancelReplaceRequest_0.insert(QtyType_21.getString());
  FIX::ReceivedDeptID ReceivedDeptID_2("STRING_569898946");
  msg.set(ReceivedDeptID_2);
  OrderCancelReplaceRequest_0.insert(ReceivedDeptID_2.getString());
  FIX::RegistID RegistID_7("STRING_918409773");
  msg.set(RegistID_7);
  OrderCancelReplaceRequest_0.insert(RegistID_7.getString());
  FIX::SecondaryClOrdID SecondaryClOrdID_32("STRING_702305540");
  msg.set(SecondaryClOrdID_32);
  OrderCancelReplaceRequest_0.insert(SecondaryClOrdID_32.getString());
  FIX::SettlCurrency SettlCurrency_18("CAN");
  msg.set(SettlCurrency_18);
  OrderCancelReplaceRequest_0.insert(SettlCurrency_18.getString());
  FIX::SettlDate SettlDate_35("LOCALMKTDATE_288844480");
  msg.set(SettlDate_35);
  OrderCancelReplaceRequest_0.insert(SettlDate_35.getString());
  FIX::SettlDate2 SettlDate2_15("LOCALMKTDATE_2079702823");
  msg.set(SettlDate2_15);
  OrderCancelReplaceRequest_0.insert(SettlDate2_15.getString());
  FIX::SettlType SettlType_18("STRING_0");
  msg.set(SettlType_18);
  OrderCancelReplaceRequest_0.insert(SettlType_18.getString());
  FIX::Side Side_26('3');
  msg.set(Side_26);
  OrderCancelReplaceRequest_0.insert(Side_26.getString());
  FIX::SolicitedFlag SolicitedFlag_9(false);
  msg.set(SolicitedFlag_9);
  OrderCancelReplaceRequest_0.insert(SolicitedFlag_9.getString());
  FIX::StopPx StopPx_8;
  StopPx_8.setString("11763924");
  msg.set(StopPx_8);
  OrderCancelReplaceRequest_0.insert(StopPx_8.getString());
  FIX::TargetStrategy TargetStrategy_8(1);
  msg.set(TargetStrategy_8);
  OrderCancelReplaceRequest_0.insert(TargetStrategy_8.getString());
  FIX::TargetStrategyParameters TargetStrategyParameters_8("STRING_930148856");
  msg.set(TargetStrategyParameters_8);
  OrderCancelReplaceRequest_0.insert(TargetStrategyParameters_8.getString());
  FIX::Text Text_59("STRING_889021836");
  msg.set(Text_59);
  OrderCancelReplaceRequest_0.insert(Text_59.getString());
  FIX::TimeInForce TimeInForce_22('1');
  msg.set(TimeInForce_22);
  OrderCancelReplaceRequest_0.insert(TimeInForce_22.getString());
  FIX::TradeDate TradeDate_24("LOCALMKTDATE_1302522206");
  msg.set(TradeDate_24);
  OrderCancelReplaceRequest_0.insert(TradeDate_24.getString());
  FIX::TradeOriginationDate TradeOriginationDate_16("LOCALMKTDATE_1811383622");
  msg.set(TradeOriginationDate_16);
  OrderCancelReplaceRequest_0.insert(TradeOriginationDate_16.getString());
  FIX::TransactTime TransactTime_44(FIX::UTCTIMESTAMP(18, 46, 21, 16, 6, 2006));
  msg.set(TransactTime_44);
  OrderCancelReplaceRequest_0.insert(TransactTime_44.getString());
  all_values.push_back(OrderCancelReplaceRequest_0);

  // CommissionData
  multiset<string> CommissionData_17;
  FIX::CommCurrency CommCurrency_17("EUR");
  msg.set(CommCurrency_17);
  CommissionData_17.insert(CommCurrency_17.getString());
  FIX::CommType CommType_17('1');
  msg.set(CommType_17);
  CommissionData_17.insert(CommType_17.getString());
  FIX::Commission Commission_17;
  Commission_17.setString("1945885");
  msg.set(Commission_17);
  CommissionData_17.insert(Commission_17.getString());
  FIX::FundRenewWaiv FundRenewWaiv_17('Y');
  msg.set(FundRenewWaiv_17);
  CommissionData_17.insert(FundRenewWaiv_17.getString());
  all_values.push_back(CommissionData_17);

  // DiscretionInstructions
  multiset<string> DiscretionInstructions_8;
  FIX::DiscretionInst DiscretionInst_8('3');
  msg.set(DiscretionInst_8);
  DiscretionInstructions_8.insert(DiscretionInst_8.getString());
  FIX::DiscretionLimitType DiscretionLimitType_8(1);
  msg.set(DiscretionLimitType_8);
  DiscretionInstructions_8.insert(DiscretionLimitType_8.getString());
  FIX::DiscretionMoveType DiscretionMoveType_8(1);
  msg.set(DiscretionMoveType_8);
  DiscretionInstructions_8.insert(DiscretionMoveType_8.getString());
  FIX::DiscretionOffsetType DiscretionOffsetType_8(0);
  msg.set(DiscretionOffsetType_8);
  DiscretionInstructions_8.insert(DiscretionOffsetType_8.getString());
  FIX::DiscretionOffsetValue DiscretionOffsetValue_8;
  DiscretionOffsetValue_8.setString("6774024");
  msg.set(DiscretionOffsetValue_8);
  DiscretionInstructions_8.insert(DiscretionOffsetValue_8.getString());
  FIX::DiscretionRoundDirection DiscretionRoundDirection_8(2);
  msg.set(DiscretionRoundDirection_8);
  DiscretionInstructions_8.insert(DiscretionRoundDirection_8.getString());
  FIX::DiscretionScope DiscretionScope_8(4);
  msg.set(DiscretionScope_8);
  DiscretionInstructions_8.insert(DiscretionScope_8.getString());
  all_values.push_back(DiscretionInstructions_8);

  // DisplayInstruction
  multiset<string> DisplayInstruction_8;
  FIX::DisplayHighQty DisplayHighQty_8;
  DisplayHighQty_8.setString("9662469");
  msg.set(DisplayHighQty_8);
  DisplayInstruction_8.insert(DisplayHighQty_8.getString());
  FIX::DisplayLowQty DisplayLowQty_8;
  DisplayLowQty_8.setString("945391");
  msg.set(DisplayLowQty_8);
  DisplayInstruction_8.insert(DisplayLowQty_8.getString());
  FIX::DisplayMethod DisplayMethod_8('1');
  msg.set(DisplayMethod_8);
  DisplayInstruction_8.insert(DisplayMethod_8.getString());
  FIX::DisplayMinIncr DisplayMinIncr_8;
  DisplayMinIncr_8.setString("3915320");
  msg.set(DisplayMinIncr_8);
  DisplayInstruction_8.insert(DisplayMinIncr_8.getString());
  FIX::DisplayQty DisplayQty_8;
  DisplayQty_8.setString("6271045");
  msg.set(DisplayQty_8);
  DisplayInstruction_8.insert(DisplayQty_8.getString());
  FIX::DisplayWhen DisplayWhen_8('2');
  msg.set(DisplayWhen_8);
  DisplayInstruction_8.insert(DisplayWhen_8.getString());
  FIX::RefreshQty RefreshQty_8;
  RefreshQty_8.setString("3495665");
  msg.set(RefreshQty_8);
  DisplayInstruction_8.insert(RefreshQty_8.getString());
  FIX::SecondaryDisplayQty SecondaryDisplayQty_8;
  SecondaryDisplayQty_8.setString("15572534");
  msg.set(SecondaryDisplayQty_8);
  DisplayInstruction_8.insert(SecondaryDisplayQty_8.getString());
  all_values.push_back(DisplayInstruction_8);

  // FinancingDetails
  multiset<string> FinancingDetails_13;
  FIX::AgreementCurrency AgreementCurrency_13("CAN");
  msg.set(AgreementCurrency_13);
  FinancingDetails_13.insert(AgreementCurrency_13.getString());
  FIX::AgreementDate AgreementDate_13("LOCALMKTDATE_712292000");
  msg.set(AgreementDate_13);
  FinancingDetails_13.insert(AgreementDate_13.getString());
  FIX::AgreementDesc AgreementDesc_13("STRING_26311954");
  msg.set(AgreementDesc_13);
  FinancingDetails_13.insert(AgreementDesc_13.getString());
  FIX::AgreementID AgreementID_13("STRING_1133732193");
  msg.set(AgreementID_13);
  FinancingDetails_13.insert(AgreementID_13.getString());
  FIX::DeliveryType DeliveryType_13(2);
  msg.set(DeliveryType_13);
  FinancingDetails_13.insert(DeliveryType_13.getString());
  FIX::EndDate EndDate_13("LOCALMKTDATE_1668631700");
  msg.set(EndDate_13);
  FinancingDetails_13.insert(EndDate_13.getString());
  FIX::MarginRatio MarginRatio_13;
  MarginRatio_13.setString("66.060000");
  msg.set(MarginRatio_13);
  FinancingDetails_13.insert(MarginRatio_13.getString());
  FIX::StartDate StartDate_13("LOCALMKTDATE_1312400219");
  msg.set(StartDate_13);
  FinancingDetails_13.insert(StartDate_13.getString());
  FIX::TerminationType TerminationType_13(2);
  msg.set(TerminationType_13);
  FinancingDetails_13.insert(TerminationType_13.getString());
  all_values.push_back(FinancingDetails_13);

  // Instrument
  multiset<string> Instrument_54;
  FIX::AttachmentPoint AttachmentPoint_54;
  AttachmentPoint_54.setString("3.750000");
  msg.set(AttachmentPoint_54);
  Instrument_54.insert(AttachmentPoint_54.getString());
  FIX::CFICode CFICode_54("STRING_283686042");
  msg.set(CFICode_54);
  Instrument_54.insert(CFICode_54.getString());
  FIX::CPProgram CPProgram_54(2);
  msg.set(CPProgram_54);
  Instrument_54.insert(CPProgram_54.getString());
  FIX::CPRegType CPRegType_54("STRING_900925815");
  msg.set(CPRegType_54);
  Instrument_54.insert(CPRegType_54.getString());
  FIX::CapPrice CapPrice_54;
  CapPrice_54.setString("4782746");
  msg.set(CapPrice_54);
  Instrument_54.insert(CapPrice_54.getString());
  FIX::ContractMultiplier ContractMultiplier_54;
  ContractMultiplier_54.setString("3251472");
  msg.set(ContractMultiplier_54);
  Instrument_54.insert(ContractMultiplier_54.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_54(1);
  msg.set(ContractMultiplierUnit_54);
  Instrument_54.insert(ContractMultiplierUnit_54.getString());
  FIX::ContractSettlMonth ContractSettlMonth_54("MONTHYEAR_453371536");
  msg.set(ContractSettlMonth_54);
  Instrument_54.insert(ContractSettlMonth_54.getString());
  FIX::CountryOfIssue CountryOfIssue_54("COUNTRY_1152773229");
  msg.set(CountryOfIssue_54);
  Instrument_54.insert(CountryOfIssue_54.getString());
  FIX::CouponPaymentDate CouponPaymentDate_54("LOCALMKTDATE_439710074");
  msg.set(CouponPaymentDate_54);
  Instrument_54.insert(CouponPaymentDate_54.getString());
  FIX::CouponRate CouponRate_54;
  CouponRate_54.setString("40.090000");
  msg.set(CouponRate_54);
  Instrument_54.insert(CouponRate_54.getString());
  FIX::CreditRating CreditRating_54("STRING_1315093196");
  msg.set(CreditRating_54);
  Instrument_54.insert(CreditRating_54.getString());
  FIX::DatedDate DatedDate_54("LOCALMKTDATE_981176742");
  msg.set(DatedDate_54);
  Instrument_54.insert(DatedDate_54.getString());
  FIX::DetachmentPoint DetachmentPoint_54;
  DetachmentPoint_54.setString("9.620000");
  msg.set(DetachmentPoint_54);
  Instrument_54.insert(DetachmentPoint_54.getString());
  FIX::EncodedIssuer EncodedIssuer_54("DATA_1409632338");
  msg.set(EncodedIssuer_54);
  Instrument_54.insert(EncodedIssuer_54.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_54(1425658106);
  msg.set(EncodedIssuerLen_54);
  Instrument_54.insert(EncodedIssuerLen_54.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_54("DATA_341069405");
  msg.set(EncodedSecurityDesc_54);
  Instrument_54.insert(EncodedSecurityDesc_54.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_54(2036736924);
  msg.set(EncodedSecurityDescLen_54);
  Instrument_54.insert(EncodedSecurityDescLen_54.getString());
  FIX::ExerciseStyle ExerciseStyle_54(2);
  msg.set(ExerciseStyle_54);
  Instrument_54.insert(ExerciseStyle_54.getString());
  FIX::Factor Factor_54;
  Factor_54.setString("6906359");
  msg.set(Factor_54);
  Instrument_54.insert(Factor_54.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_54(false);
  msg.set(FlexProductEligibilityIndicator_54);
  Instrument_54.insert(FlexProductEligibilityIndicator_54.getString());
  FIX::FlexibleIndicator FlexibleIndicator_54(false);
  msg.set(FlexibleIndicator_54);
  Instrument_54.insert(FlexibleIndicator_54.getString());
  FIX::FloorPrice FloorPrice_54;
  FloorPrice_54.setString("10166751");
  msg.set(FloorPrice_54);
  Instrument_54.insert(FloorPrice_54.getString());
  FIX::FlowScheduleType FlowScheduleType_54(1);
  msg.set(FlowScheduleType_54);
  Instrument_54.insert(FlowScheduleType_54.getString());
  FIX::InstrRegistry InstrRegistry_54("STRING_1287772183");
  msg.set(InstrRegistry_54);
  Instrument_54.insert(InstrRegistry_54.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_54('2');
  msg.set(InstrmtAssignmentMethod_54);
  Instrument_54.insert(InstrmtAssignmentMethod_54.getString());
  FIX::InterestAccrualDate InterestAccrualDate_54("LOCALMKTDATE_1374769090");
  msg.set(InterestAccrualDate_54);
  Instrument_54.insert(InterestAccrualDate_54.getString());
  FIX::IssueDate IssueDate_54("LOCALMKTDATE_808920235");
  msg.set(IssueDate_54);
  Instrument_54.insert(IssueDate_54.getString());
  FIX::Issuer Issuer_54("STRING_210630333");
  msg.set(Issuer_54);
  Instrument_54.insert(Issuer_54.getString());
  FIX::ListMethod ListMethod_54(1);
  msg.set(ListMethod_54);
  Instrument_54.insert(ListMethod_54.getString());
  FIX::LocaleOfIssue LocaleOfIssue_54("STRING_203515624");
  msg.set(LocaleOfIssue_54);
  Instrument_54.insert(LocaleOfIssue_54.getString());
  FIX::MaturityDate MaturityDate_54("LOCALMKTDATE_1890110708");
  msg.set(MaturityDate_54);
  Instrument_54.insert(MaturityDate_54.getString());
  FIX::MaturityMonthYear MaturityMonthYear_54("MONTHYEAR_823371703");
  msg.set(MaturityMonthYear_54);
  Instrument_54.insert(MaturityMonthYear_54.getString());
  FIX::MaturityTime MaturityTime_54("TZTIMEONLY_270935793");
  msg.set(MaturityTime_54);
  Instrument_54.insert(MaturityTime_54.getString());
  FIX::MinPriceIncrement MinPriceIncrement_54;
  MinPriceIncrement_54.setString("6435528");
  msg.set(MinPriceIncrement_54);
  Instrument_54.insert(MinPriceIncrement_54.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_54;
  MinPriceIncrementAmount_54.setString("13016463");
  msg.set(MinPriceIncrementAmount_54);
  Instrument_54.insert(MinPriceIncrementAmount_54.getString());
  FIX::NTPositionLimit NTPositionLimit_54(596083018);
  msg.set(NTPositionLimit_54);
  Instrument_54.insert(NTPositionLimit_54.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_54;
  NotionalPercentageOutstanding_54.setString("59.330000");
  msg.set(NotionalPercentageOutstanding_54);
  Instrument_54.insert(NotionalPercentageOutstanding_54.getString());
  FIX::OptAttribute OptAttribute_54('1');
  msg.set(OptAttribute_54);
  Instrument_54.insert(OptAttribute_54.getString());
  FIX::OptPayoutAmount OptPayoutAmount_54;
  OptPayoutAmount_54.setString("17488562");
  msg.set(OptPayoutAmount_54);
  Instrument_54.insert(OptPayoutAmount_54.getString());
  FIX::OptPayoutType OptPayoutType_54(1);
  msg.set(OptPayoutType_54);
  Instrument_54.insert(OptPayoutType_54.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_54;
  OriginalNotionalPercentageOutstanding_54.setString("82.030000");
  msg.set(OriginalNotionalPercentageOutstanding_54);
  Instrument_54.insert(OriginalNotionalPercentageOutstanding_54.getString());
  FIX::Pool Pool_54("STRING_916465795");
  msg.set(Pool_54);
  Instrument_54.insert(Pool_54.getString());
  FIX::PositionLimit PositionLimit_54(128069101);
  msg.set(PositionLimit_54);
  Instrument_54.insert(PositionLimit_54.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_54("STRING_INX");
  msg.set(PriceQuoteMethod_54);
  Instrument_54.insert(PriceQuoteMethod_54.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_54("STRING_178614486");
  msg.set(PriceUnitOfMeasure_54);
  Instrument_54.insert(PriceUnitOfMeasure_54.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_54;
  PriceUnitOfMeasureQty_54.setString("15537272");
  msg.set(PriceUnitOfMeasureQty_54);
  Instrument_54.insert(PriceUnitOfMeasureQty_54.getString());
  FIX::Product Product_56(10);
  msg.set(Product_56);
  Instrument_54.insert(Product_56.getString());
  FIX::ProductComplex ProductComplex_54("STRING_67867762");
  msg.set(ProductComplex_54);
  Instrument_54.insert(ProductComplex_54.getString());
  FIX::PutOrCall PutOrCall_54(1);
  msg.set(PutOrCall_54);
  Instrument_54.insert(PutOrCall_54.getString());
  FIX::RedemptionDate RedemptionDate_54("LOCALMKTDATE_1719550914");
  msg.set(RedemptionDate_54);
  Instrument_54.insert(RedemptionDate_54.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_54("STRING_1514374481");
  msg.set(RepoCollateralSecurityType_54);
  Instrument_54.insert(RepoCollateralSecurityType_54.getString());
  FIX::RepurchaseRate RepurchaseRate_54;
  RepurchaseRate_54.setString("20.380000");
  msg.set(RepurchaseRate_54);
  Instrument_54.insert(RepurchaseRate_54.getString());
  FIX::RepurchaseTerm RepurchaseTerm_54(588742447);
  msg.set(RepurchaseTerm_54);
  Instrument_54.insert(RepurchaseTerm_54.getString());
  FIX::RestructuringType RestructuringType_54("STRING_MR");
  msg.set(RestructuringType_54);
  Instrument_54.insert(RestructuringType_54.getString());
  FIX::SecurityDesc SecurityDesc_54("STRING_707040574");
  msg.set(SecurityDesc_54);
  Instrument_54.insert(SecurityDesc_54.getString());
  FIX::SecurityExchange SecurityExchange_54("EXCHANGE_591666173");
  msg.set(SecurityExchange_54);
  Instrument_54.insert(SecurityExchange_54.getString());
  FIX::SecurityGroup SecurityGroup_54("STRING_752974995");
  msg.set(SecurityGroup_54);
  Instrument_54.insert(SecurityGroup_54.getString());
  FIX::SecurityID SecurityID_54("STRING_1515960809");
  msg.set(SecurityID_54);
  Instrument_54.insert(SecurityID_54.getString());
  FIX::SecurityIDSource SecurityIDSource_54("STRING_1");
  msg.set(SecurityIDSource_54);
  Instrument_54.insert(SecurityIDSource_54.getString());
  FIX::SecurityStatus SecurityStatus_54("STRING_1");
  msg.set(SecurityStatus_54);
  Instrument_54.insert(SecurityStatus_54.getString());
  FIX::SecuritySubType SecuritySubType_55("STRING_1719476434");
  msg.set(SecuritySubType_55);
  Instrument_54.insert(SecuritySubType_55.getString());
  FIX::SecurityType SecurityType_56("STRING_TBOND");
  msg.set(SecurityType_56);
  Instrument_54.insert(SecurityType_56.getString());
  FIX::Seniority Seniority_54("STRING_SB");
  msg.set(Seniority_54);
  Instrument_54.insert(Seniority_54.getString());
  FIX::SettlMethod SettlMethod_54('P');
  msg.set(SettlMethod_54);
  Instrument_54.insert(SettlMethod_54.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_54("STRING_1188476441");
  msg.set(SettleOnOpenFlag_54);
  Instrument_54.insert(SettleOnOpenFlag_54.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_54("STRING_1270195018");
  msg.set(StateOrProvinceOfIssue_54);
  Instrument_54.insert(StateOrProvinceOfIssue_54.getString());
  FIX::StrikeCurrency StrikeCurrency_54("USD");
  msg.set(StrikeCurrency_54);
  Instrument_54.insert(StrikeCurrency_54.getString());
  FIX::StrikeMultiplier StrikeMultiplier_54;
  StrikeMultiplier_54.setString("8777292");
  msg.set(StrikeMultiplier_54);
  Instrument_54.insert(StrikeMultiplier_54.getString());
  FIX::StrikePrice StrikePrice_54;
  StrikePrice_54.setString("403841");
  msg.set(StrikePrice_54);
  Instrument_54.insert(StrikePrice_54.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_54(5);
  msg.set(StrikePriceBoundaryMethod_54);
  Instrument_54.insert(StrikePriceBoundaryMethod_54.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_54;
  StrikePriceBoundaryPrecision_54.setString("74.160000");
  msg.set(StrikePriceBoundaryPrecision_54);
  Instrument_54.insert(StrikePriceBoundaryPrecision_54.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_54(1);
  msg.set(StrikePriceDeterminationMethod_54);
  Instrument_54.insert(StrikePriceDeterminationMethod_54.getString());
  FIX::StrikeValue StrikeValue_54;
  StrikeValue_54.setString("13181038");
  msg.set(StrikeValue_54);
  Instrument_54.insert(StrikeValue_54.getString());
  FIX::Symbol Symbol_54("STRING_156399285");
  msg.set(Symbol_54);
  Instrument_54.insert(Symbol_54.getString());
  FIX::SymbolSfx SymbolSfx_54("STRING_CD");
  msg.set(SymbolSfx_54);
  Instrument_54.insert(SymbolSfx_54.getString());
  FIX::TimeUnit TimeUnit_54("STRING_S");
  msg.set(TimeUnit_54);
  Instrument_54.insert(TimeUnit_54.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_54(1);
  msg.set(UnderlyingPriceDeterminationMethod_54);
  Instrument_54.insert(UnderlyingPriceDeterminationMethod_54.getString());
  FIX::UnitOfMeasure UnitOfMeasure_54("STRING_Gal");
  msg.set(UnitOfMeasure_54);
  Instrument_54.insert(UnitOfMeasure_54.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_54;
  UnitOfMeasureQty_54.setString("10296392");
  msg.set(UnitOfMeasureQty_54);
  Instrument_54.insert(UnitOfMeasureQty_54.getString());
  FIX::ValuationMethod ValuationMethod_54("STRING_CDSD");
  msg.set(ValuationMethod_54);
  Instrument_54.insert(ValuationMethod_54.getString());
  all_values.push_back(Instrument_54);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::OrderCancelReplaceRequest::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_105;
    FIX::ComplexEventCondition ComplexEventCondition_105(1);
    noComplexEvents_0_0.set(ComplexEventCondition_105);
    ComplexEvents_NoComplexEvents_105.insert(ComplexEventCondition_105.getString());
    FIX::ComplexEventPrice ComplexEventPrice_105;
    ComplexEventPrice_105.setString("13461239");
    noComplexEvents_0_0.set(ComplexEventPrice_105);
    ComplexEvents_NoComplexEvents_105.insert(ComplexEventPrice_105.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_105(3);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_105);
    ComplexEvents_NoComplexEvents_105.insert(ComplexEventPriceBoundaryMethod_105.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_105;
    ComplexEventPriceBoundaryPrecision_105.setString("81.680000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_105);
    ComplexEvents_NoComplexEvents_105.insert(ComplexEventPriceBoundaryPrecision_105.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_105(2);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_105);
    ComplexEvents_NoComplexEvents_105.insert(ComplexEventPriceTimeType_105.getString());
    FIX::ComplexEventType ComplexEventType_105(9);
    noComplexEvents_0_0.set(ComplexEventType_105);
    ComplexEvents_NoComplexEvents_105.insert(ComplexEventType_105.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_105;
    ComplexOptPayoutAmount_105.setString("5244253");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_105);
    ComplexEvents_NoComplexEvents_105.insert(ComplexOptPayoutAmount_105.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_105);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_217;
      FIX::ComplexEventEndDate ComplexEventEndDate_217(FIX::UTCTIMESTAMP(12, 19, 22, 3, 6, 2006));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_217);
      ComplexEventDates_NoComplexEventDates_217.insert(ComplexEventEndDate_217.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_217(FIX::UTCTIMESTAMP(15, 24, 29, 5, 1, 2010));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_217);
      ComplexEventDates_NoComplexEventDates_217.insert(ComplexEventStartDate_217.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_217);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_438;
        FIX::ComplexEventEndTime ComplexEventEndTime_438(FIX::UTCTIMEONLY(0, 36, 38));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_438);
        ComplexEventTimes_NoComplexEventTimes_438.insert(ComplexEventEndTime_438.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_438(FIX::UTCTIMEONLY(16, 12, 28));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_438);
        ComplexEventTimes_NoComplexEventTimes_438.insert(ComplexEventStartTime_438.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_438);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::OrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_439;
        FIX::ComplexEventEndTime ComplexEventEndTime_439(FIX::UTCTIMEONLY(21, 27, 55));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_439);
        ComplexEventTimes_NoComplexEventTimes_439.insert(ComplexEventEndTime_439.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_439(FIX::UTCTIMEONLY(22, 57, 4));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_439);
        ComplexEventTimes_NoComplexEventTimes_439.insert(ComplexEventStartTime_439.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_439);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::OrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_218;
      FIX::ComplexEventEndDate ComplexEventEndDate_218(FIX::UTCTIMESTAMP(9, 24, 10, 0, 10, 2016));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_218);
      ComplexEventDates_NoComplexEventDates_218.insert(ComplexEventEndDate_218.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_218(FIX::UTCTIMESTAMP(12, 39, 10, 18, 8, 2012));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_218);
      ComplexEventDates_NoComplexEventDates_218.insert(ComplexEventStartDate_218.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_218);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_440;
        FIX::ComplexEventEndTime ComplexEventEndTime_440(FIX::UTCTIMEONLY(0, 11, 11));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_440);
        ComplexEventTimes_NoComplexEventTimes_440.insert(ComplexEventEndTime_440.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_440(FIX::UTCTIMEONLY(15, 23, 30));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_440);
        ComplexEventTimes_NoComplexEventTimes_440.insert(ComplexEventStartTime_440.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_440);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::OrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_441;
        FIX::ComplexEventEndTime ComplexEventEndTime_441(FIX::UTCTIMEONLY(0, 49, 56));
        noComplexEventTimes_0_1_2_1.set(ComplexEventEndTime_441);
        ComplexEventTimes_NoComplexEventTimes_441.insert(ComplexEventEndTime_441.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_441(FIX::UTCTIMEONLY(3, 53, 16));
        noComplexEventTimes_0_1_2_1.set(ComplexEventStartTime_441);
        ComplexEventTimes_NoComplexEventTimes_441.insert(ComplexEventStartTime_441.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_441);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::OrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_219;
      FIX::ComplexEventEndDate ComplexEventEndDate_219(FIX::UTCTIMESTAMP(2, 32, 22, 10, 6, 2007));
      noComplexEventDates_0_1_2.set(ComplexEventEndDate_219);
      ComplexEventDates_NoComplexEventDates_219.insert(ComplexEventEndDate_219.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_219(FIX::UTCTIMESTAMP(6, 16, 17, 24, 4, 2011));
      noComplexEventDates_0_1_2.set(ComplexEventStartDate_219);
      ComplexEventDates_NoComplexEventDates_219.insert(ComplexEventStartDate_219.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_219);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_442;
        FIX::ComplexEventEndTime ComplexEventEndTime_442(FIX::UTCTIMEONLY(5, 50, 36));
        noComplexEventTimes_0_2_2_0.set(ComplexEventEndTime_442);
        ComplexEventTimes_NoComplexEventTimes_442.insert(ComplexEventEndTime_442.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_442(FIX::UTCTIMEONLY(9, 52, 41));
        noComplexEventTimes_0_2_2_0.set(ComplexEventStartTime_442);
        ComplexEventTimes_NoComplexEventTimes_442.insert(ComplexEventStartTime_442.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_442);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::OrderCancelReplaceRequest::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_111;
    FIX::EventDate EventDate_111("LOCALMKTDATE_639151192");
    noEvents_0_0.set(EventDate_111);
    EvntGrp_NoEvents_111.insert(EventDate_111.getString());
    FIX::EventPx EventPx_111;
    EventPx_111.setString("3463553");
    noEvents_0_0.set(EventPx_111);
    EvntGrp_NoEvents_111.insert(EventPx_111.getString());
    FIX::EventText EventText_111("STRING_1067298823");
    noEvents_0_0.set(EventText_111);
    EvntGrp_NoEvents_111.insert(EventText_111.getString());
    FIX::EventTime EventTime_111(FIX::UTCTIMESTAMP(14, 36, 13, 2, 8, 2013));
    noEvents_0_0.set(EventTime_111);
    EvntGrp_NoEvents_111.insert(EventTime_111.getString());
    FIX::EventType EventType_111(6);
    noEvents_0_0.set(EventType_111);
    EvntGrp_NoEvents_111.insert(EventType_111.getString());
    all_values.push_back(EvntGrp_NoEvents_111);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::OrderCancelReplaceRequest::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_112;
    FIX::EventDate EventDate_112("LOCALMKTDATE_2132832749");
    noEvents_0_1.set(EventDate_112);
    EvntGrp_NoEvents_112.insert(EventDate_112.getString());
    FIX::EventPx EventPx_112;
    EventPx_112.setString("1032758");
    noEvents_0_1.set(EventPx_112);
    EvntGrp_NoEvents_112.insert(EventPx_112.getString());
    FIX::EventText EventText_112("STRING_1235654862");
    noEvents_0_1.set(EventText_112);
    EvntGrp_NoEvents_112.insert(EventText_112.getString());
    FIX::EventTime EventTime_112(FIX::UTCTIMESTAMP(17, 50, 53, 9, 6, 2008));
    noEvents_0_1.set(EventTime_112);
    EvntGrp_NoEvents_112.insert(EventTime_112.getString());
    FIX::EventType EventType_112(9);
    noEvents_0_1.set(EventType_112);
    EvntGrp_NoEvents_112.insert(EventType_112.getString());
    all_values.push_back(EvntGrp_NoEvents_112);

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::OrderCancelReplaceRequest::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_116;
    FIX::InstrumentPartyID InstrumentPartyID_116("STRING_928821044");
    noInstrumentParties_0_0.set(InstrumentPartyID_116);
    InstrumentParties_NoInstrumentParties_116.insert(InstrumentPartyID_116.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_116('8');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_116);
    InstrumentParties_NoInstrumentParties_116.insert(InstrumentPartyIDSource_116.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_116(1161016363);
    noInstrumentParties_0_0.set(InstrumentPartyRole_116);
    InstrumentParties_NoInstrumentParties_116.insert(InstrumentPartyRole_116.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_116);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::OrderCancelReplaceRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_245;
      FIX::InstrumentPartySubID InstrumentPartySubID_245("STRING_897340895");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_245);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_245.insert(InstrumentPartySubID_245.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_245(1430004395);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_245);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_245.insert(InstrumentPartySubIDType_245.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_245);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::OrderCancelReplaceRequest::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_122;
    FIX::SecurityAltID SecurityAltID_122("STRING_1016100921");
    noSecurityAltID_0_0.set(SecurityAltID_122);
    SecAltIDGrp_NoSecurityAltID_122.insert(SecurityAltID_122.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_122("STRING_2069155587");
    noSecurityAltID_0_0.set(SecurityAltIDSource_122);
    SecAltIDGrp_NoSecurityAltID_122.insert(SecurityAltIDSource_122.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_122);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::OrderCancelReplaceRequest::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_123;
    FIX::SecurityAltID SecurityAltID_123("STRING_374011620");
    noSecurityAltID_0_1.set(SecurityAltID_123);
    SecAltIDGrp_NoSecurityAltID_123.insert(SecurityAltID_123.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_123("STRING_2083399744");
    noSecurityAltID_0_1.set(SecurityAltIDSource_123);
    SecAltIDGrp_NoSecurityAltID_123.insert(SecurityAltIDSource_123.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_123);

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_108;
  FIX::SecurityXML SecurityXML_109("XMLDATA_1303152024");
  msg.set(SecurityXML_109);
  FIX::SecurityXMLLen SecurityXMLLen_54(1154666858);
  msg.set(SecurityXMLLen_54);
  FIX::SecurityXMLSchema SecurityXMLSchema_54("STRING_1974887073");
  msg.set(SecurityXMLSchema_54);
  SecurityXML_108.insert(SecurityXMLSchema_54.getString());
  all_values.push_back(SecurityXML_108);

  // OrderQtyData
  multiset<string> OrderQtyData_14;
  FIX::CashOrderQty CashOrderQty_14;
  CashOrderQty_14.setString("967623");
  msg.set(CashOrderQty_14);
  OrderQtyData_14.insert(CashOrderQty_14.getString());
  FIX::OrderPercent OrderPercent_14;
  OrderPercent_14.setString("72.410000");
  msg.set(OrderPercent_14);
  OrderQtyData_14.insert(OrderPercent_14.getString());
  FIX::OrderQty OrderQty_25;
  OrderQty_25.setString("8101143");
  msg.set(OrderQty_25);
  OrderQtyData_14.insert(OrderQty_25.getString());
  FIX::RoundingDirection RoundingDirection_14('0');
  msg.set(RoundingDirection_14);
  OrderQtyData_14.insert(RoundingDirection_14.getString());
  FIX::RoundingModulus RoundingModulus_14;
  RoundingModulus_14.setString("14832750");
  msg.set(RoundingModulus_14);
  OrderQtyData_14.insert(RoundingModulus_14.getString());
  all_values.push_back(OrderQtyData_14);

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::OrderCancelReplaceRequest::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_73;
    FIX::PartyID PartyID_73("STRING_655557737");
    noPartyIDs_0_0.set(PartyID_73);
    Parties_NoPartyIDs_73.insert(PartyID_73.getString());
    FIX::PartyIDSource PartyIDSource_73('2');
    noPartyIDs_0_0.set(PartyIDSource_73);
    Parties_NoPartyIDs_73.insert(PartyIDSource_73.getString());
    FIX::PartyRole PartyRole_73(48);
    noPartyIDs_0_0.set(PartyRole_73);
    Parties_NoPartyIDs_73.insert(PartyRole_73.getString());
    all_values.push_back(Parties_NoPartyIDs_73);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderCancelReplaceRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_150;
      FIX::PartySubID PartySubID_150("STRING_1322278130");
      noPartySubIDs_0_1_0.set(PartySubID_150);
      PtysSubGrp_NoPartySubIDs_150.insert(PartySubID_150.getString());
      FIX::PartySubIDType PartySubIDType_150(28);
      noPartySubIDs_0_1_0.set(PartySubIDType_150);
      PtysSubGrp_NoPartySubIDs_150.insert(PartySubIDType_150.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_150);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::OrderCancelReplaceRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_151;
      FIX::PartySubID PartySubID_151("STRING_1899626907");
      noPartySubIDs_0_1_1.set(PartySubID_151);
      PtysSubGrp_NoPartySubIDs_151.insert(PartySubID_151.getString());
      FIX::PartySubIDType PartySubIDType_151(17);
      noPartySubIDs_0_1_1.set(PartySubIDType_151);
      PtysSubGrp_NoPartySubIDs_151.insert(PartySubIDType_151.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_151);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::OrderCancelReplaceRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_152;
      FIX::PartySubID PartySubID_152("STRING_42983062");
      noPartySubIDs_0_1_2.set(PartySubID_152);
      PtysSubGrp_NoPartySubIDs_152.insert(PartySubID_152.getString());
      FIX::PartySubIDType PartySubIDType_152(33);
      noPartySubIDs_0_1_2.set(PartySubIDType_152);
      PtysSubGrp_NoPartySubIDs_152.insert(PartySubIDType_152.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_152);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::OrderCancelReplaceRequest::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_74;
    FIX::PartyID PartyID_74("STRING_607343250");
    noPartyIDs_0_1.set(PartyID_74);
    Parties_NoPartyIDs_74.insert(PartyID_74.getString());
    FIX::PartyIDSource PartyIDSource_74('6');
    noPartyIDs_0_1.set(PartyIDSource_74);
    Parties_NoPartyIDs_74.insert(PartyIDSource_74.getString());
    FIX::PartyRole PartyRole_74(6);
    noPartyIDs_0_1.set(PartyRole_74);
    Parties_NoPartyIDs_74.insert(PartyRole_74.getString());
    all_values.push_back(Parties_NoPartyIDs_74);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderCancelReplaceRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_153;
      FIX::PartySubID PartySubID_153("STRING_447926941");
      noPartySubIDs_1_1_0.set(PartySubID_153);
      PtysSubGrp_NoPartySubIDs_153.insert(PartySubID_153.getString());
      FIX::PartySubIDType PartySubIDType_153(20);
      noPartySubIDs_1_1_0.set(PartySubIDType_153);
      PtysSubGrp_NoPartySubIDs_153.insert(PartySubIDType_153.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_153);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::OrderCancelReplaceRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_154;
      FIX::PartySubID PartySubID_154("STRING_1050880360");
      noPartySubIDs_1_1_1.set(PartySubID_154);
      PtysSubGrp_NoPartySubIDs_154.insert(PartySubID_154.getString());
      FIX::PartySubIDType PartySubIDType_154(3);
      noPartySubIDs_1_1_1.set(PartySubIDType_154);
      PtysSubGrp_NoPartySubIDs_154.insert(PartySubIDType_154.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_154);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::OrderCancelReplaceRequest::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_75;
    FIX::PartyID PartyID_75("STRING_1970615414");
    noPartyIDs_0_2.set(PartyID_75);
    Parties_NoPartyIDs_75.insert(PartyID_75.getString());
    FIX::PartyIDSource PartyIDSource_75('1');
    noPartyIDs_0_2.set(PartyIDSource_75);
    Parties_NoPartyIDs_75.insert(PartyIDSource_75.getString());
    FIX::PartyRole PartyRole_75(3);
    noPartyIDs_0_2.set(PartyRole_75);
    Parties_NoPartyIDs_75.insert(PartyRole_75.getString());
    all_values.push_back(Parties_NoPartyIDs_75);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderCancelReplaceRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_155;
      FIX::PartySubID PartySubID_155("STRING_128220675");
      noPartySubIDs_2_1_0.set(PartySubID_155);
      PtysSubGrp_NoPartySubIDs_155.insert(PartySubID_155.getString());
      FIX::PartySubIDType PartySubIDType_155(12);
      noPartySubIDs_2_1_0.set(PartySubIDType_155);
      PtysSubGrp_NoPartySubIDs_155.insert(PartySubIDType_155.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_155);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::OrderCancelReplaceRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_156;
      FIX::PartySubID PartySubID_156("STRING_1733934935");
      noPartySubIDs_2_1_1.set(PartySubID_156);
      PtysSubGrp_NoPartySubIDs_156.insert(PartySubID_156.getString());
      FIX::PartySubIDType PartySubIDType_156(21);
      noPartySubIDs_2_1_1.set(PartySubIDType_156);
      PtysSubGrp_NoPartySubIDs_156.insert(PartySubIDType_156.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_156);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_1);
    }
    msg.addGroup(noPartyIDs_0_2);
  }
  // PegInstructions
  multiset<string> PegInstructions_8;
  FIX::PegLimitType PegLimitType_8(0);
  msg.set(PegLimitType_8);
  PegInstructions_8.insert(PegLimitType_8.getString());
  FIX::PegMoveType PegMoveType_8(1);
  msg.set(PegMoveType_8);
  PegInstructions_8.insert(PegMoveType_8.getString());
  FIX::PegOffsetType PegOffsetType_8(3);
  msg.set(PegOffsetType_8);
  PegInstructions_8.insert(PegOffsetType_8.getString());
  FIX::PegOffsetValue PegOffsetValue_8;
  PegOffsetValue_8.setString("20482502");
  msg.set(PegOffsetValue_8);
  PegInstructions_8.insert(PegOffsetValue_8.getString());
  FIX::PegPriceType PegPriceType_8(7);
  msg.set(PegPriceType_8);
  PegInstructions_8.insert(PegPriceType_8.getString());
  FIX::PegRoundDirection PegRoundDirection_8(1);
  msg.set(PegRoundDirection_8);
  PegInstructions_8.insert(PegRoundDirection_8.getString());
  FIX::PegScope PegScope_8(1);
  msg.set(PegScope_8);
  PegInstructions_8.insert(PegScope_8.getString());
  FIX::PegSecurityDesc PegSecurityDesc_8("STRING_1412736339");
  msg.set(PegSecurityDesc_8);
  PegInstructions_8.insert(PegSecurityDesc_8.getString());
  FIX::PegSecurityID PegSecurityID_8("STRING_2046921539");
  msg.set(PegSecurityID_8);
  PegInstructions_8.insert(PegSecurityID_8.getString());
  FIX::PegSecurityIDSource PegSecurityIDSource_8("STRING_1794491018");
  msg.set(PegSecurityIDSource_8);
  PegInstructions_8.insert(PegSecurityIDSource_8.getString());
  FIX::PegSymbol PegSymbol_8("STRING_1354580794");
  msg.set(PegSymbol_8);
  PegInstructions_8.insert(PegSymbol_8.getString());
  all_values.push_back(PegInstructions_8);

  // PreAllocGrp
  // Group PreAllocGrp.NoAllocs
  {
    FIX50SP2::OrderCancelReplaceRequest::NoAllocs noAllocs_0_0;
    // PreAllocGrp.NoAllocs
    multiset<string> PreAllocGrp_NoAllocs_15;
    FIX::AllocAccount AllocAccount_30("STRING_1721502061");
    noAllocs_0_0.set(AllocAccount_30);
    PreAllocGrp_NoAllocs_15.insert(AllocAccount_30.getString());
    FIX::AllocAcctIDSource AllocAcctIDSource_30(1397563856);
    noAllocs_0_0.set(AllocAcctIDSource_30);
    PreAllocGrp_NoAllocs_15.insert(AllocAcctIDSource_30.getString());
    FIX::AllocQty AllocQty_29;
    AllocQty_29.setString("17753104");
    noAllocs_0_0.set(AllocQty_29);
    PreAllocGrp_NoAllocs_15.insert(AllocQty_29.getString());
    FIX::AllocSettlCurrency AllocSettlCurrency_24("USD");
    noAllocs_0_0.set(AllocSettlCurrency_24);
    PreAllocGrp_NoAllocs_15.insert(AllocSettlCurrency_24.getString());
    FIX::IndividualAllocID IndividualAllocID_30("STRING_1832484003");
    noAllocs_0_0.set(IndividualAllocID_30);
    PreAllocGrp_NoAllocs_15.insert(IndividualAllocID_30.getString());
    all_values.push_back(PreAllocGrp_NoAllocs_15);

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::OrderCancelReplaceRequest::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_76;
      FIX::NestedPartyID NestedPartyID_76("STRING_669811256");
      noNestedPartyIDs_0_1_0.set(NestedPartyID_76);
      NestedParties_NoNestedPartyIDs_76.insert(NestedPartyID_76.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_76('6');
      noNestedPartyIDs_0_1_0.set(NestedPartyIDSource_76);
      NestedParties_NoNestedPartyIDs_76.insert(NestedPartyIDSource_76.getString());
      FIX::NestedPartyRole NestedPartyRole_76(853117988);
      noNestedPartyIDs_0_1_0.set(NestedPartyRole_76);
      NestedParties_NoNestedPartyIDs_76.insert(NestedPartyRole_76.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_76);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::OrderCancelReplaceRequest::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_151;
        FIX::NestedPartySubID NestedPartySubID_151("STRING_462646614");
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubID_151);
        NstdPtysSubGrp_NoNestedPartySubIDs_151.insert(NestedPartySubID_151.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_151(1825670288);
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubIDType_151);
        NstdPtysSubGrp_NoNestedPartySubIDs_151.insert(NestedPartySubIDType_151.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_151);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::OrderCancelReplaceRequest::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_152;
        FIX::NestedPartySubID NestedPartySubID_152("STRING_1994989273");
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubID_152);
        NstdPtysSubGrp_NoNestedPartySubIDs_152.insert(NestedPartySubID_152.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_152(221694476);
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubIDType_152);
        NstdPtysSubGrp_NoNestedPartySubIDs_152.insert(NestedPartySubIDType_152.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_152);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_1);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    msg.addGroup(noAllocs_0_0);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_18;
  FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_18("JPY");
  msg.set(BenchmarkCurveCurrency_18);
  SpreadOrBenchmarkCurveData_18.insert(BenchmarkCurveCurrency_18.getString());
  FIX::BenchmarkCurveName BenchmarkCurveName_18("STRING_Pfandbriefe");
  msg.set(BenchmarkCurveName_18);
  SpreadOrBenchmarkCurveData_18.insert(BenchmarkCurveName_18.getString());
  FIX::BenchmarkCurvePoint BenchmarkCurvePoint_18("STRING_31390380");
  msg.set(BenchmarkCurvePoint_18);
  SpreadOrBenchmarkCurveData_18.insert(BenchmarkCurvePoint_18.getString());
  FIX::BenchmarkPrice BenchmarkPrice_18;
  BenchmarkPrice_18.setString("2692589");
  msg.set(BenchmarkPrice_18);
  SpreadOrBenchmarkCurveData_18.insert(BenchmarkPrice_18.getString());
  FIX::BenchmarkPriceType BenchmarkPriceType_18(204711431);
  msg.set(BenchmarkPriceType_18);
  SpreadOrBenchmarkCurveData_18.insert(BenchmarkPriceType_18.getString());
  FIX::BenchmarkSecurityID BenchmarkSecurityID_18("STRING_808655331");
  msg.set(BenchmarkSecurityID_18);
  SpreadOrBenchmarkCurveData_18.insert(BenchmarkSecurityID_18.getString());
  FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_18("STRING_170025572");
  msg.set(BenchmarkSecurityIDSource_18);
  SpreadOrBenchmarkCurveData_18.insert(BenchmarkSecurityIDSource_18.getString());
  FIX::Spread Spread_18;
  Spread_18.setString("13967405");
  msg.set(Spread_18);
  SpreadOrBenchmarkCurveData_18.insert(Spread_18.getString());
  all_values.push_back(SpreadOrBenchmarkCurveData_18);

  // StrategyParametersGrp
  // Group StrategyParametersGrp.NoStrategyParameters
  {
    FIX50SP2::OrderCancelReplaceRequest::NoStrategyParameters noStrategyParameters_0_0;
    // StrategyParametersGrp.NoStrategyParameters
    multiset<string> StrategyParametersGrp_NoStrategyParameters_13;
    FIX::StrategyParameterName StrategyParameterName_13("STRING_642238460");
    noStrategyParameters_0_0.set(StrategyParameterName_13);
    StrategyParametersGrp_NoStrategyParameters_13.insert(StrategyParameterName_13.getString());
    FIX::StrategyParameterType StrategyParameterType_13(6);
    noStrategyParameters_0_0.set(StrategyParameterType_13);
    StrategyParametersGrp_NoStrategyParameters_13.insert(StrategyParameterType_13.getString());
    FIX::StrategyParameterValue StrategyParameterValue_13("STRING_2140915910");
    noStrategyParameters_0_0.set(StrategyParameterValue_13);
    StrategyParametersGrp_NoStrategyParameters_13.insert(StrategyParameterValue_13.getString());
    all_values.push_back(StrategyParametersGrp_NoStrategyParameters_13);

    msg.addGroup(noStrategyParameters_0_0);
  }
  // TrdRegTimestamps
  // Group TrdRegTimestamps.NoTrdRegTimestamps
  {
    FIX50SP2::OrderCancelReplaceRequest::NoTrdRegTimestamps noTrdRegTimestamps_0_0;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_15;
    FIX::DeskOrderHandlingInst DeskOrderHandlingInst_15("MULTIPLESTRINGVALUE_MAO");
    noTrdRegTimestamps_0_0.set(DeskOrderHandlingInst_15);
    TrdRegTimestamps_NoTrdRegTimestamps_15.insert(DeskOrderHandlingInst_15.getString());
    FIX::DeskType DeskType_15("STRING_IN");
    noTrdRegTimestamps_0_0.set(DeskType_15);
    TrdRegTimestamps_NoTrdRegTimestamps_15.insert(DeskType_15.getString());
    FIX::DeskTypeSource DeskTypeSource_15(1);
    noTrdRegTimestamps_0_0.set(DeskTypeSource_15);
    TrdRegTimestamps_NoTrdRegTimestamps_15.insert(DeskTypeSource_15.getString());
    FIX::TrdRegTimestamp TrdRegTimestamp_15(FIX::UTCTIMESTAMP(3, 7, 29, 10, 8, 2011));
    noTrdRegTimestamps_0_0.set(TrdRegTimestamp_15);
    TrdRegTimestamps_NoTrdRegTimestamps_15.insert(TrdRegTimestamp_15.getString());
    FIX::TrdRegTimestampOrigin TrdRegTimestampOrigin_15("STRING_1744839022");
    noTrdRegTimestamps_0_0.set(TrdRegTimestampOrigin_15);
    TrdRegTimestamps_NoTrdRegTimestamps_15.insert(TrdRegTimestampOrigin_15.getString());
    FIX::TrdRegTimestampType TrdRegTimestampType_15(5);
    noTrdRegTimestamps_0_0.set(TrdRegTimestampType_15);
    TrdRegTimestamps_NoTrdRegTimestamps_15.insert(TrdRegTimestampType_15.getString());
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_15);

    msg.addGroup(noTrdRegTimestamps_0_0);
  }
  {
    FIX50SP2::OrderCancelReplaceRequest::NoTrdRegTimestamps noTrdRegTimestamps_0_1;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_16;
    FIX::DeskOrderHandlingInst DeskOrderHandlingInst_16("MULTIPLESTRINGVALUE_DIR");
    noTrdRegTimestamps_0_1.set(DeskOrderHandlingInst_16);
    TrdRegTimestamps_NoTrdRegTimestamps_16.insert(DeskOrderHandlingInst_16.getString());
    FIX::DeskType DeskType_16("STRING_D");
    noTrdRegTimestamps_0_1.set(DeskType_16);
    TrdRegTimestamps_NoTrdRegTimestamps_16.insert(DeskType_16.getString());
    FIX::DeskTypeSource DeskTypeSource_16(1);
    noTrdRegTimestamps_0_1.set(DeskTypeSource_16);
    TrdRegTimestamps_NoTrdRegTimestamps_16.insert(DeskTypeSource_16.getString());
    FIX::TrdRegTimestamp TrdRegTimestamp_16(FIX::UTCTIMESTAMP(17, 59, 10, 1, 12, 2006));
    noTrdRegTimestamps_0_1.set(TrdRegTimestamp_16);
    TrdRegTimestamps_NoTrdRegTimestamps_16.insert(TrdRegTimestamp_16.getString());
    FIX::TrdRegTimestampOrigin TrdRegTimestampOrigin_16("STRING_294553660");
    noTrdRegTimestamps_0_1.set(TrdRegTimestampOrigin_16);
    TrdRegTimestamps_NoTrdRegTimestamps_16.insert(TrdRegTimestampOrigin_16.getString());
    FIX::TrdRegTimestampType TrdRegTimestampType_16(6);
    noTrdRegTimestamps_0_1.set(TrdRegTimestampType_16);
    TrdRegTimestamps_NoTrdRegTimestamps_16.insert(TrdRegTimestampType_16.getString());
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_16);

    msg.addGroup(noTrdRegTimestamps_0_1);
  }
  {
    FIX50SP2::OrderCancelReplaceRequest::NoTrdRegTimestamps noTrdRegTimestamps_0_2;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_17;
    FIX::DeskOrderHandlingInst DeskOrderHandlingInst_17("MULTIPLESTRINGVALUE_CNH");
    noTrdRegTimestamps_0_2.set(DeskOrderHandlingInst_17);
    TrdRegTimestamps_NoTrdRegTimestamps_17.insert(DeskOrderHandlingInst_17.getString());
    FIX::DeskType DeskType_17("STRING_T");
    noTrdRegTimestamps_0_2.set(DeskType_17);
    TrdRegTimestamps_NoTrdRegTimestamps_17.insert(DeskType_17.getString());
    FIX::DeskTypeSource DeskTypeSource_17(1);
    noTrdRegTimestamps_0_2.set(DeskTypeSource_17);
    TrdRegTimestamps_NoTrdRegTimestamps_17.insert(DeskTypeSource_17.getString());
    FIX::TrdRegTimestamp TrdRegTimestamp_17(FIX::UTCTIMESTAMP(0, 24, 36, 22, 6, 2014));
    noTrdRegTimestamps_0_2.set(TrdRegTimestamp_17);
    TrdRegTimestamps_NoTrdRegTimestamps_17.insert(TrdRegTimestamp_17.getString());
    FIX::TrdRegTimestampOrigin TrdRegTimestampOrigin_17("STRING_1341548557");
    noTrdRegTimestamps_0_2.set(TrdRegTimestampOrigin_17);
    TrdRegTimestamps_NoTrdRegTimestamps_17.insert(TrdRegTimestampOrigin_17.getString());
    FIX::TrdRegTimestampType TrdRegTimestampType_17(6);
    noTrdRegTimestamps_0_2.set(TrdRegTimestampType_17);
    TrdRegTimestamps_NoTrdRegTimestamps_17.insert(TrdRegTimestampType_17.getString());
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_17);

    msg.addGroup(noTrdRegTimestamps_0_2);
  }
  // TrdgSesGrp
  // Group TrdgSesGrp.NoTradingSessions
  {
    FIX50SP2::OrderCancelReplaceRequest::NoTradingSessions noTradingSessions_0_0;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_21;
    FIX::TradingSessionID TradingSessionID_52("STRING_5");
    noTradingSessions_0_0.set(TradingSessionID_52);
    TrdgSesGrp_NoTradingSessions_21.insert(TradingSessionID_52.getString());
    FIX::TradingSessionSubID TradingSessionSubID_52("STRING_3");
    noTradingSessions_0_0.set(TradingSessionSubID_52);
    TrdgSesGrp_NoTradingSessions_21.insert(TradingSessionSubID_52.getString());
    all_values.push_back(TrdgSesGrp_NoTradingSessions_21);

    msg.addGroup(noTradingSessions_0_0);
  }
  // TriggeringInstruction
  multiset<string> TriggeringInstruction_8;
  FIX::TriggerAction TriggerAction_8('3');
  msg.set(TriggerAction_8);
  TriggeringInstruction_8.insert(TriggerAction_8.getString());
  FIX::TriggerNewPrice TriggerNewPrice_8;
  TriggerNewPrice_8.setString("6934696");
  msg.set(TriggerNewPrice_8);
  TriggeringInstruction_8.insert(TriggerNewPrice_8.getString());
  FIX::TriggerNewQty TriggerNewQty_8;
  TriggerNewQty_8.setString("7325809");
  msg.set(TriggerNewQty_8);
  TriggeringInstruction_8.insert(TriggerNewQty_8.getString());
  FIX::TriggerOrderType TriggerOrderType_8('1');
  msg.set(TriggerOrderType_8);
  TriggeringInstruction_8.insert(TriggerOrderType_8.getString());
  FIX::TriggerPrice TriggerPrice_8;
  TriggerPrice_8.setString("18497303");
  msg.set(TriggerPrice_8);
  TriggeringInstruction_8.insert(TriggerPrice_8.getString());
  FIX::TriggerPriceDirection TriggerPriceDirection_8('U');
  msg.set(TriggerPriceDirection_8);
  TriggeringInstruction_8.insert(TriggerPriceDirection_8.getString());
  FIX::TriggerPriceType TriggerPriceType_8('5');
  msg.set(TriggerPriceType_8);
  TriggeringInstruction_8.insert(TriggerPriceType_8.getString());
  FIX::TriggerPriceTypeScope TriggerPriceTypeScope_8('3');
  msg.set(TriggerPriceTypeScope_8);
  TriggeringInstruction_8.insert(TriggerPriceTypeScope_8.getString());
  FIX::TriggerSecurityDesc TriggerSecurityDesc_8("STRING_1074279411");
  msg.set(TriggerSecurityDesc_8);
  TriggeringInstruction_8.insert(TriggerSecurityDesc_8.getString());
  FIX::TriggerSecurityID TriggerSecurityID_8("STRING_948813922");
  msg.set(TriggerSecurityID_8);
  TriggeringInstruction_8.insert(TriggerSecurityID_8.getString());
  FIX::TriggerSecurityIDSource TriggerSecurityIDSource_8("STRING_1414062905");
  msg.set(TriggerSecurityIDSource_8);
  TriggeringInstruction_8.insert(TriggerSecurityIDSource_8.getString());
  FIX::TriggerSymbol TriggerSymbol_8("STRING_1164121640");
  msg.set(TriggerSymbol_8);
  TriggeringInstruction_8.insert(TriggerSymbol_8.getString());
  FIX::TriggerTradingSessionID TriggerTradingSessionID_8("STRING_1164779781");
  msg.set(TriggerTradingSessionID_8);
  TriggeringInstruction_8.insert(TriggerTradingSessionID_8.getString());
  FIX::TriggerTradingSessionSubID TriggerTradingSessionSubID_8("STRING_243888112");
  msg.set(TriggerTradingSessionSubID_8);
  TriggeringInstruction_8.insert(TriggerTradingSessionSubID_8.getString());
  FIX::TriggerType TriggerType_8('1');
  msg.set(TriggerType_8);
  TriggeringInstruction_8.insert(TriggerType_8.getString());
  all_values.push_back(TriggeringInstruction_8);

  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_72;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_72("DATA_1391222538");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_72);
    UnderlyingInstrument_72.insert(EncodedUnderlyingIssuer_72.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_72(1002485893);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_72);
    UnderlyingInstrument_72.insert(EncodedUnderlyingIssuerLen_72.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_72("DATA_1160532886");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_72);
    UnderlyingInstrument_72.insert(EncodedUnderlyingSecurityDesc_72.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_72(1033311777);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_72);
    UnderlyingInstrument_72.insert(EncodedUnderlyingSecurityDescLen_72.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_72;
    UnderlyingAdjustedQuantity_72.setString("12082897");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_72);
    UnderlyingInstrument_72.insert(UnderlyingAdjustedQuantity_72.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_72;
    UnderlyingAllocationPercent_72.setString("70.620000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_72);
    UnderlyingInstrument_72.insert(UnderlyingAllocationPercent_72.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_72;
    UnderlyingAttachmentPoint_72.setString("68.450000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_72);
    UnderlyingInstrument_72.insert(UnderlyingAttachmentPoint_72.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_72("STRING_1283184040");
    noUnderlyings_0_0.set(UnderlyingCFICode_72);
    UnderlyingInstrument_72.insert(UnderlyingCFICode_72.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_72("STRING_882158300");
    noUnderlyings_0_0.set(UnderlyingCPProgram_72);
    UnderlyingInstrument_72.insert(UnderlyingCPProgram_72.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_72("STRING_759246157");
    noUnderlyings_0_0.set(UnderlyingCPRegType_72);
    UnderlyingInstrument_72.insert(UnderlyingCPRegType_72.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_72;
    UnderlyingCapValue_72.setString("4772489");
    noUnderlyings_0_0.set(UnderlyingCapValue_72);
    UnderlyingInstrument_72.insert(UnderlyingCapValue_72.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_72;
    UnderlyingCashAmount_72.setString("9120597");
    noUnderlyings_0_0.set(UnderlyingCashAmount_72);
    UnderlyingInstrument_72.insert(UnderlyingCashAmount_72.getString());
    FIX::UnderlyingCashType UnderlyingCashType_72("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_72);
    UnderlyingInstrument_72.insert(UnderlyingCashType_72.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_72;
    UnderlyingContractMultiplier_72.setString("11598524");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_72);
    UnderlyingInstrument_72.insert(UnderlyingContractMultiplier_72.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_72(2047285291);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_72);
    UnderlyingInstrument_72.insert(UnderlyingContractMultiplierUnit_72.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_72("COUNTRY_284560131");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_72);
    UnderlyingInstrument_72.insert(UnderlyingCountryOfIssue_72.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_72("LOCALMKTDATE_1853322142");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_72);
    UnderlyingInstrument_72.insert(UnderlyingCouponPaymentDate_72.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_72;
    UnderlyingCouponRate_72.setString("26.010000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_72);
    UnderlyingInstrument_72.insert(UnderlyingCouponRate_72.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_72("STRING_670630409");
    noUnderlyings_0_0.set(UnderlyingCreditRating_72);
    UnderlyingInstrument_72.insert(UnderlyingCreditRating_72.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_72("CAN");
    noUnderlyings_0_0.set(UnderlyingCurrency_72);
    UnderlyingInstrument_72.insert(UnderlyingCurrency_72.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_72;
    UnderlyingCurrentValue_72.setString("14348688");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_72);
    UnderlyingInstrument_72.insert(UnderlyingCurrentValue_72.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_72;
    UnderlyingDetachmentPoint_72.setString("81.680000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_72);
    UnderlyingInstrument_72.insert(UnderlyingDetachmentPoint_72.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_72;
    UnderlyingDirtyPrice_72.setString("3517613");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_72);
    UnderlyingInstrument_72.insert(UnderlyingDirtyPrice_72.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_72;
    UnderlyingEndPrice_72.setString("2361991");
    noUnderlyings_0_0.set(UnderlyingEndPrice_72);
    UnderlyingInstrument_72.insert(UnderlyingEndPrice_72.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_72;
    UnderlyingEndValue_72.setString("15281610");
    noUnderlyings_0_0.set(UnderlyingEndValue_72);
    UnderlyingInstrument_72.insert(UnderlyingEndValue_72.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_72(1515882950);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_72);
    UnderlyingInstrument_72.insert(UnderlyingExerciseStyle_72.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_72;
    UnderlyingFXRate_72.setString("14009789");
    noUnderlyings_0_0.set(UnderlyingFXRate_72);
    UnderlyingInstrument_72.insert(UnderlyingFXRate_72.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_72('M');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_72);
    UnderlyingInstrument_72.insert(UnderlyingFXRateCalc_72.getString());
    FIX::UnderlyingFactor UnderlyingFactor_72;
    UnderlyingFactor_72.setString("8270746");
    noUnderlyings_0_0.set(UnderlyingFactor_72);
    UnderlyingInstrument_72.insert(UnderlyingFactor_72.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_72(1442896231);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_72);
    UnderlyingInstrument_72.insert(UnderlyingFlowScheduleType_72.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_72("STRING_1015788076");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_72);
    UnderlyingInstrument_72.insert(UnderlyingInstrRegistry_72.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_72("LOCALMKTDATE_1829560496");
    noUnderlyings_0_0.set(UnderlyingIssueDate_72);
    UnderlyingInstrument_72.insert(UnderlyingIssueDate_72.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_72("STRING_455945469");
    noUnderlyings_0_0.set(UnderlyingIssuer_72);
    UnderlyingInstrument_72.insert(UnderlyingIssuer_72.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_72("STRING_2049099853");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_72);
    UnderlyingInstrument_72.insert(UnderlyingLocaleOfIssue_72.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_72("LOCALMKTDATE_890366606");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_72);
    UnderlyingInstrument_72.insert(UnderlyingMaturityDate_72.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_72("MONTHYEAR_581042532");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_72);
    UnderlyingInstrument_72.insert(UnderlyingMaturityMonthYear_72.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_72("TZTIMEONLY_866263050");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_72);
    UnderlyingInstrument_72.insert(UnderlyingMaturityTime_72.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_72;
    UnderlyingNotionalPercentageOutstanding_72.setString("69.980000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_72);
    UnderlyingInstrument_72.insert(UnderlyingNotionalPercentageOutstanding_72.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_72('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_72);
    UnderlyingInstrument_72.insert(UnderlyingOptAttribute_72.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_72;
    UnderlyingOriginalNotionalPercentageOutstanding_72.setString("92.080000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_72);
    UnderlyingInstrument_72.insert(UnderlyingOriginalNotionalPercentageOutstanding_72.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_72("STRING_503315948");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_72);
    UnderlyingInstrument_72.insert(UnderlyingPriceUnitOfMeasure_72.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_72;
    UnderlyingPriceUnitOfMeasureQty_72.setString("2277768");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_72);
    UnderlyingInstrument_72.insert(UnderlyingPriceUnitOfMeasureQty_72.getString());
    FIX::UnderlyingProduct UnderlyingProduct_72(76496936);
    noUnderlyings_0_0.set(UnderlyingProduct_72);
    UnderlyingInstrument_72.insert(UnderlyingProduct_72.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_72(1663168395);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_72);
    UnderlyingInstrument_72.insert(UnderlyingPutOrCall_72.getString());
    FIX::UnderlyingPx UnderlyingPx_72;
    UnderlyingPx_72.setString("1275785");
    noUnderlyings_0_0.set(UnderlyingPx_72);
    UnderlyingInstrument_72.insert(UnderlyingPx_72.getString());
    FIX::UnderlyingQty UnderlyingQty_72;
    UnderlyingQty_72.setString("3610570");
    noUnderlyings_0_0.set(UnderlyingQty_72);
    UnderlyingInstrument_72.insert(UnderlyingQty_72.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_72("LOCALMKTDATE_1369006890");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_72);
    UnderlyingInstrument_72.insert(UnderlyingRedemptionDate_72.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_72("STRING_759961137");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_72);
    UnderlyingInstrument_72.insert(UnderlyingRepoCollateralSecurityType_72.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_72;
    UnderlyingRepurchaseRate_72.setString("74.770000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_72);
    UnderlyingInstrument_72.insert(UnderlyingRepurchaseRate_72.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_72(777092083);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_72);
    UnderlyingInstrument_72.insert(UnderlyingRepurchaseTerm_72.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_72("STRING_37443036");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_72);
    UnderlyingInstrument_72.insert(UnderlyingRestructuringType_72.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_72("STRING_319072681");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_72);
    UnderlyingInstrument_72.insert(UnderlyingSecurityDesc_72.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_72("EXCHANGE_891190251");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_72);
    UnderlyingInstrument_72.insert(UnderlyingSecurityExchange_72.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_72("STRING_389204346");
    noUnderlyings_0_0.set(UnderlyingSecurityID_72);
    UnderlyingInstrument_72.insert(UnderlyingSecurityID_72.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_72("STRING_555271807");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_72);
    UnderlyingInstrument_72.insert(UnderlyingSecurityIDSource_72.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_72("STRING_271867676");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_72);
    UnderlyingInstrument_72.insert(UnderlyingSecuritySubType_72.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_72("STRING_1905087296");
    noUnderlyings_0_0.set(UnderlyingSecurityType_72);
    UnderlyingInstrument_72.insert(UnderlyingSecurityType_72.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_72("STRING_1956250714");
    noUnderlyings_0_0.set(UnderlyingSeniority_72);
    UnderlyingInstrument_72.insert(UnderlyingSeniority_72.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_72("STRING_2043916862");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_72);
    UnderlyingInstrument_72.insert(UnderlyingSettlMethod_72.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_72(2);
    noUnderlyings_0_0.set(UnderlyingSettlementType_72);
    UnderlyingInstrument_72.insert(UnderlyingSettlementType_72.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_72;
    UnderlyingStartValue_72.setString("12516632");
    noUnderlyings_0_0.set(UnderlyingStartValue_72);
    UnderlyingInstrument_72.insert(UnderlyingStartValue_72.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_72("STRING_912221290");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_72);
    UnderlyingInstrument_72.insert(UnderlyingStateOrProvinceOfIssue_72.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_72("EUR");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_72);
    UnderlyingInstrument_72.insert(UnderlyingStrikeCurrency_72.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_72;
    UnderlyingStrikePrice_72.setString("8138374");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_72);
    UnderlyingInstrument_72.insert(UnderlyingStrikePrice_72.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_72("STRING_1157121704");
    noUnderlyings_0_0.set(UnderlyingSymbol_72);
    UnderlyingInstrument_72.insert(UnderlyingSymbol_72.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_72("STRING_141167651");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_72);
    UnderlyingInstrument_72.insert(UnderlyingSymbolSfx_72.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_72("STRING_1680100545");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_72);
    UnderlyingInstrument_72.insert(UnderlyingTimeUnit_72.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_72("STRING_1183188703");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_72);
    UnderlyingInstrument_72.insert(UnderlyingUnitOfMeasure_72.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_72;
    UnderlyingUnitOfMeasureQty_72.setString("16043684");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_72);
    UnderlyingInstrument_72.insert(UnderlyingUnitOfMeasureQty_72.getString());
    all_values.push_back(UnderlyingInstrument_72);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_142;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_142("STRING_1686504651");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_142);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_142.insert(UnderlyingSecurityAltID_142.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_142("STRING_1832145376");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_142);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_142.insert(UnderlyingSecurityAltIDSource_142.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_142);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_129;
      FIX::UnderlyingStipType UnderlyingStipType_129("STRING_1202189398");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_129);
      UnderlyingStipulations_NoUnderlyingStips_129.insert(UnderlyingStipType_129.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_129("STRING_1959723912");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_129);
      UnderlyingStipulations_NoUnderlyingStips_129.insert(UnderlyingStipValue_129.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_129);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_155;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_155("STRING_423712640");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_155);
      UndlyInstrumentParties_NoUndlyInstrumentParties_155.insert(UnderlyingInstrumentPartyID_155.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_155('5');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_155);
      UndlyInstrumentParties_NoUndlyInstrumentParties_155.insert(UnderlyingInstrumentPartyIDSource_155.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_155(479883938);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_155);
      UndlyInstrumentParties_NoUndlyInstrumentParties_155.insert(UnderlyingInstrumentPartyRole_155.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_155);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_306;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_306("STRING_609644437");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_306);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_306.insert(UnderlyingInstrumentPartySubID_306.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_306(798956619);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_306);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_306.insert(UnderlyingInstrumentPartySubIDType_306.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_306);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_156;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_156("STRING_2091994974");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_156);
      UndlyInstrumentParties_NoUndlyInstrumentParties_156.insert(UnderlyingInstrumentPartyID_156.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_156('9');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_156);
      UndlyInstrumentParties_NoUndlyInstrumentParties_156.insert(UnderlyingInstrumentPartyIDSource_156.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_156(1354228426);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_156);
      UndlyInstrumentParties_NoUndlyInstrumentParties_156.insert(UnderlyingInstrumentPartyRole_156.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_156);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_307;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_307("STRING_756452431");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_307);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_307.insert(UnderlyingInstrumentPartySubID_307.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_307(1162995493);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_307);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_307.insert(UnderlyingInstrumentPartySubIDType_307.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_307);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_308;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_308("STRING_112812217");
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubID_308);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_308.insert(UnderlyingInstrumentPartySubID_308.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_308(1341130681);
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubIDType_308);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_308.insert(UnderlyingInstrumentPartySubIDType_308.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_308);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_157;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_157("STRING_267175143");
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyID_157);
      UndlyInstrumentParties_NoUndlyInstrumentParties_157.insert(UnderlyingInstrumentPartyID_157.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_157('1');
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyIDSource_157);
      UndlyInstrumentParties_NoUndlyInstrumentParties_157.insert(UnderlyingInstrumentPartyIDSource_157.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_157(1607885780);
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyRole_157);
      UndlyInstrumentParties_NoUndlyInstrumentParties_157.insert(UnderlyingInstrumentPartyRole_157.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_157);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_309;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_309("STRING_1838871002");
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubID_309);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_309.insert(UnderlyingInstrumentPartySubID_309.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_309(617523836);
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubIDType_309);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_309.insert(UnderlyingInstrumentPartySubIDType_309.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_309);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_310;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_310("STRING_2115951562");
        noUndlyInstrumentPartySubIDs_0_2_2_1.set(UnderlyingInstrumentPartySubID_310);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_310.insert(UnderlyingInstrumentPartySubID_310.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_310(1371487899);
        noUndlyInstrumentPartySubIDs_0_2_2_1.set(UnderlyingInstrumentPartySubIDType_310);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_310.insert(UnderlyingInstrumentPartySubIDType_310.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_310);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_73;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_73("DATA_1800712539");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_73);
    UnderlyingInstrument_73.insert(EncodedUnderlyingIssuer_73.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_73(1572836397);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_73);
    UnderlyingInstrument_73.insert(EncodedUnderlyingIssuerLen_73.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_73("DATA_382130357");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_73);
    UnderlyingInstrument_73.insert(EncodedUnderlyingSecurityDesc_73.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_73(1339733542);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_73);
    UnderlyingInstrument_73.insert(EncodedUnderlyingSecurityDescLen_73.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_73;
    UnderlyingAdjustedQuantity_73.setString("12574981");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_73);
    UnderlyingInstrument_73.insert(UnderlyingAdjustedQuantity_73.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_73;
    UnderlyingAllocationPercent_73.setString("33.990000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_73);
    UnderlyingInstrument_73.insert(UnderlyingAllocationPercent_73.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_73;
    UnderlyingAttachmentPoint_73.setString("92.930000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_73);
    UnderlyingInstrument_73.insert(UnderlyingAttachmentPoint_73.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_73("STRING_1069738389");
    noUnderlyings_0_1.set(UnderlyingCFICode_73);
    UnderlyingInstrument_73.insert(UnderlyingCFICode_73.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_73("STRING_1064949860");
    noUnderlyings_0_1.set(UnderlyingCPProgram_73);
    UnderlyingInstrument_73.insert(UnderlyingCPProgram_73.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_73("STRING_818151933");
    noUnderlyings_0_1.set(UnderlyingCPRegType_73);
    UnderlyingInstrument_73.insert(UnderlyingCPRegType_73.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_73;
    UnderlyingCapValue_73.setString("16419397");
    noUnderlyings_0_1.set(UnderlyingCapValue_73);
    UnderlyingInstrument_73.insert(UnderlyingCapValue_73.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_73;
    UnderlyingCashAmount_73.setString("15448337");
    noUnderlyings_0_1.set(UnderlyingCashAmount_73);
    UnderlyingInstrument_73.insert(UnderlyingCashAmount_73.getString());
    FIX::UnderlyingCashType UnderlyingCashType_73("STRING_DIFF");
    noUnderlyings_0_1.set(UnderlyingCashType_73);
    UnderlyingInstrument_73.insert(UnderlyingCashType_73.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_73;
    UnderlyingContractMultiplier_73.setString("1041005");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_73);
    UnderlyingInstrument_73.insert(UnderlyingContractMultiplier_73.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_73(196306770);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_73);
    UnderlyingInstrument_73.insert(UnderlyingContractMultiplierUnit_73.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_73("COUNTRY_1963467983");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_73);
    UnderlyingInstrument_73.insert(UnderlyingCountryOfIssue_73.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_73("LOCALMKTDATE_1102949362");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_73);
    UnderlyingInstrument_73.insert(UnderlyingCouponPaymentDate_73.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_73;
    UnderlyingCouponRate_73.setString("51.970000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_73);
    UnderlyingInstrument_73.insert(UnderlyingCouponRate_73.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_73("STRING_32363338");
    noUnderlyings_0_1.set(UnderlyingCreditRating_73);
    UnderlyingInstrument_73.insert(UnderlyingCreditRating_73.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_73("JPY");
    noUnderlyings_0_1.set(UnderlyingCurrency_73);
    UnderlyingInstrument_73.insert(UnderlyingCurrency_73.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_73;
    UnderlyingCurrentValue_73.setString("1451755");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_73);
    UnderlyingInstrument_73.insert(UnderlyingCurrentValue_73.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_73;
    UnderlyingDetachmentPoint_73.setString("88.270000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_73);
    UnderlyingInstrument_73.insert(UnderlyingDetachmentPoint_73.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_73;
    UnderlyingDirtyPrice_73.setString("8332221");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_73);
    UnderlyingInstrument_73.insert(UnderlyingDirtyPrice_73.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_73;
    UnderlyingEndPrice_73.setString("11702090");
    noUnderlyings_0_1.set(UnderlyingEndPrice_73);
    UnderlyingInstrument_73.insert(UnderlyingEndPrice_73.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_73;
    UnderlyingEndValue_73.setString("5134509");
    noUnderlyings_0_1.set(UnderlyingEndValue_73);
    UnderlyingInstrument_73.insert(UnderlyingEndValue_73.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_73(660522447);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_73);
    UnderlyingInstrument_73.insert(UnderlyingExerciseStyle_73.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_73;
    UnderlyingFXRate_73.setString("8615964");
    noUnderlyings_0_1.set(UnderlyingFXRate_73);
    UnderlyingInstrument_73.insert(UnderlyingFXRate_73.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_73('M');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_73);
    UnderlyingInstrument_73.insert(UnderlyingFXRateCalc_73.getString());
    FIX::UnderlyingFactor UnderlyingFactor_73;
    UnderlyingFactor_73.setString("6289903");
    noUnderlyings_0_1.set(UnderlyingFactor_73);
    UnderlyingInstrument_73.insert(UnderlyingFactor_73.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_73(85600668);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_73);
    UnderlyingInstrument_73.insert(UnderlyingFlowScheduleType_73.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_73("STRING_784203687");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_73);
    UnderlyingInstrument_73.insert(UnderlyingInstrRegistry_73.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_73("LOCALMKTDATE_54343111");
    noUnderlyings_0_1.set(UnderlyingIssueDate_73);
    UnderlyingInstrument_73.insert(UnderlyingIssueDate_73.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_73("STRING_467731025");
    noUnderlyings_0_1.set(UnderlyingIssuer_73);
    UnderlyingInstrument_73.insert(UnderlyingIssuer_73.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_73("STRING_2123937229");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_73);
    UnderlyingInstrument_73.insert(UnderlyingLocaleOfIssue_73.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_73("LOCALMKTDATE_1311841236");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_73);
    UnderlyingInstrument_73.insert(UnderlyingMaturityDate_73.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_73("MONTHYEAR_2084484424");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_73);
    UnderlyingInstrument_73.insert(UnderlyingMaturityMonthYear_73.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_73("TZTIMEONLY_370892874");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_73);
    UnderlyingInstrument_73.insert(UnderlyingMaturityTime_73.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_73;
    UnderlyingNotionalPercentageOutstanding_73.setString("59.780000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_73);
    UnderlyingInstrument_73.insert(UnderlyingNotionalPercentageOutstanding_73.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_73('1');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_73);
    UnderlyingInstrument_73.insert(UnderlyingOptAttribute_73.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_73;
    UnderlyingOriginalNotionalPercentageOutstanding_73.setString("48.080000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_73);
    UnderlyingInstrument_73.insert(UnderlyingOriginalNotionalPercentageOutstanding_73.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_73("STRING_1876035768");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_73);
    UnderlyingInstrument_73.insert(UnderlyingPriceUnitOfMeasure_73.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_73;
    UnderlyingPriceUnitOfMeasureQty_73.setString("3993007");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_73);
    UnderlyingInstrument_73.insert(UnderlyingPriceUnitOfMeasureQty_73.getString());
    FIX::UnderlyingProduct UnderlyingProduct_73(1060517817);
    noUnderlyings_0_1.set(UnderlyingProduct_73);
    UnderlyingInstrument_73.insert(UnderlyingProduct_73.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_73(1980136348);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_73);
    UnderlyingInstrument_73.insert(UnderlyingPutOrCall_73.getString());
    FIX::UnderlyingPx UnderlyingPx_73;
    UnderlyingPx_73.setString("5956075");
    noUnderlyings_0_1.set(UnderlyingPx_73);
    UnderlyingInstrument_73.insert(UnderlyingPx_73.getString());
    FIX::UnderlyingQty UnderlyingQty_73;
    UnderlyingQty_73.setString("8765021");
    noUnderlyings_0_1.set(UnderlyingQty_73);
    UnderlyingInstrument_73.insert(UnderlyingQty_73.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_73("LOCALMKTDATE_935602062");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_73);
    UnderlyingInstrument_73.insert(UnderlyingRedemptionDate_73.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_73("STRING_2146142755");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_73);
    UnderlyingInstrument_73.insert(UnderlyingRepoCollateralSecurityType_73.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_73;
    UnderlyingRepurchaseRate_73.setString("54.910000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_73);
    UnderlyingInstrument_73.insert(UnderlyingRepurchaseRate_73.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_73(647520208);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_73);
    UnderlyingInstrument_73.insert(UnderlyingRepurchaseTerm_73.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_73("STRING_564706149");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_73);
    UnderlyingInstrument_73.insert(UnderlyingRestructuringType_73.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_73("STRING_1054041046");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_73);
    UnderlyingInstrument_73.insert(UnderlyingSecurityDesc_73.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_73("EXCHANGE_1700569035");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_73);
    UnderlyingInstrument_73.insert(UnderlyingSecurityExchange_73.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_73("STRING_1397928334");
    noUnderlyings_0_1.set(UnderlyingSecurityID_73);
    UnderlyingInstrument_73.insert(UnderlyingSecurityID_73.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_73("STRING_76766461");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_73);
    UnderlyingInstrument_73.insert(UnderlyingSecurityIDSource_73.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_73("STRING_66536346");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_73);
    UnderlyingInstrument_73.insert(UnderlyingSecuritySubType_73.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_73("STRING_2058450781");
    noUnderlyings_0_1.set(UnderlyingSecurityType_73);
    UnderlyingInstrument_73.insert(UnderlyingSecurityType_73.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_73("STRING_938362877");
    noUnderlyings_0_1.set(UnderlyingSeniority_73);
    UnderlyingInstrument_73.insert(UnderlyingSeniority_73.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_73("STRING_1197511141");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_73);
    UnderlyingInstrument_73.insert(UnderlyingSettlMethod_73.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_73(5);
    noUnderlyings_0_1.set(UnderlyingSettlementType_73);
    UnderlyingInstrument_73.insert(UnderlyingSettlementType_73.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_73;
    UnderlyingStartValue_73.setString("10239635");
    noUnderlyings_0_1.set(UnderlyingStartValue_73);
    UnderlyingInstrument_73.insert(UnderlyingStartValue_73.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_73("STRING_1981714828");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_73);
    UnderlyingInstrument_73.insert(UnderlyingStateOrProvinceOfIssue_73.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_73("JPY");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_73);
    UnderlyingInstrument_73.insert(UnderlyingStrikeCurrency_73.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_73;
    UnderlyingStrikePrice_73.setString("19581684");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_73);
    UnderlyingInstrument_73.insert(UnderlyingStrikePrice_73.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_73("STRING_1906141842");
    noUnderlyings_0_1.set(UnderlyingSymbol_73);
    UnderlyingInstrument_73.insert(UnderlyingSymbol_73.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_73("STRING_1428695346");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_73);
    UnderlyingInstrument_73.insert(UnderlyingSymbolSfx_73.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_73("STRING_181577636");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_73);
    UnderlyingInstrument_73.insert(UnderlyingTimeUnit_73.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_73("STRING_2140237820");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_73);
    UnderlyingInstrument_73.insert(UnderlyingUnitOfMeasure_73.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_73;
    UnderlyingUnitOfMeasureQty_73.setString("2831623");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_73);
    UnderlyingInstrument_73.insert(UnderlyingUnitOfMeasureQty_73.getString());
    all_values.push_back(UnderlyingInstrument_73);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_143;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_143("STRING_1868789941");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_143);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_143.insert(UnderlyingSecurityAltID_143.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_143("STRING_682463122");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_143);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_143.insert(UnderlyingSecurityAltIDSource_143.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_143);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_130;
      FIX::UnderlyingStipType UnderlyingStipType_130("STRING_1701442641");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_130);
      UnderlyingStipulations_NoUnderlyingStips_130.insert(UnderlyingStipType_130.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_130("STRING_1278070680");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_130);
      UnderlyingStipulations_NoUnderlyingStips_130.insert(UnderlyingStipValue_130.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_130);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_131;
      FIX::UnderlyingStipType UnderlyingStipType_131("STRING_1160158766");
      noUnderlyingStips_1_1_1.set(UnderlyingStipType_131);
      UnderlyingStipulations_NoUnderlyingStips_131.insert(UnderlyingStipType_131.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_131("STRING_489561055");
      noUnderlyingStips_1_1_1.set(UnderlyingStipValue_131);
      UnderlyingStipulations_NoUnderlyingStips_131.insert(UnderlyingStipValue_131.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_131);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_158;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_158("STRING_2069024257");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_158);
      UndlyInstrumentParties_NoUndlyInstrumentParties_158.insert(UnderlyingInstrumentPartyID_158.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_158('1');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_158);
      UndlyInstrumentParties_NoUndlyInstrumentParties_158.insert(UnderlyingInstrumentPartyIDSource_158.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_158(1841435936);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_158);
      UndlyInstrumentParties_NoUndlyInstrumentParties_158.insert(UnderlyingInstrumentPartyRole_158.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_158);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_311;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_311("STRING_690166650");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_311);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_311.insert(UnderlyingInstrumentPartySubID_311.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_311(1091880622);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_311);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_311.insert(UnderlyingInstrumentPartySubIDType_311.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_311);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_159;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_159("STRING_1052348116");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_159);
      UndlyInstrumentParties_NoUndlyInstrumentParties_159.insert(UnderlyingInstrumentPartyID_159.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_159('7');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_159);
      UndlyInstrumentParties_NoUndlyInstrumentParties_159.insert(UnderlyingInstrumentPartyIDSource_159.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_159(1002847756);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_159);
      UndlyInstrumentParties_NoUndlyInstrumentParties_159.insert(UnderlyingInstrumentPartyRole_159.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_159);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_312;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_312("STRING_1954214138");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_312);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_312.insert(UnderlyingInstrumentPartySubID_312.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_312(1542805251);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_312);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_312.insert(UnderlyingInstrumentPartySubIDType_312.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_312);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_313;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_313("STRING_867190891");
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubID_313);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_313.insert(UnderlyingInstrumentPartySubID_313.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_313(1788445318);
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubIDType_313);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_313.insert(UnderlyingInstrumentPartySubIDType_313.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_313);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    {
      FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_160;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_160("STRING_2137105857");
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyID_160);
      UndlyInstrumentParties_NoUndlyInstrumentParties_160.insert(UnderlyingInstrumentPartyID_160.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_160('2');
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyIDSource_160);
      UndlyInstrumentParties_NoUndlyInstrumentParties_160.insert(UnderlyingInstrumentPartyIDSource_160.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_160(1599130080);
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyRole_160);
      UndlyInstrumentParties_NoUndlyInstrumentParties_160.insert(UnderlyingInstrumentPartyRole_160.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_160);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_314;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_314("STRING_1640097160");
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubID_314);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_314.insert(UnderlyingInstrumentPartySubID_314.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_314(1780707717);
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubIDType_314);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_314.insert(UnderlyingInstrumentPartySubIDType_314.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_314);

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_315;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_315("STRING_1888518224");
        noUndlyInstrumentPartySubIDs_1_2_2_1.set(UnderlyingInstrumentPartySubID_315);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_315.insert(UnderlyingInstrumentPartySubID_315.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_315(1923259495);
        noUndlyInstrumentPartySubIDs_1_2_2_1.set(UnderlyingInstrumentPartySubIDType_315);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_315.insert(UnderlyingInstrumentPartySubIDType_315.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_315);

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_2);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  // YieldData
  multiset<string> YieldData_13;
  FIX::Yield Yield_13;
  Yield_13.setString("65.130000");
  msg.set(Yield_13);
  YieldData_13.insert(Yield_13.getString());
  FIX::YieldCalcDate YieldCalcDate_13("LOCALMKTDATE_1609824517");
  msg.set(YieldCalcDate_13);
  YieldData_13.insert(YieldCalcDate_13.getString());
  FIX::YieldRedemptionDate YieldRedemptionDate_13("LOCALMKTDATE_458238970");
  msg.set(YieldRedemptionDate_13);
  YieldData_13.insert(YieldRedemptionDate_13.getString());
  FIX::YieldRedemptionPrice YieldRedemptionPrice_13;
  YieldRedemptionPrice_13.setString("12875031");
  msg.set(YieldRedemptionPrice_13);
  YieldData_13.insert(YieldRedemptionPrice_13.getString());
  FIX::YieldRedemptionPriceType YieldRedemptionPriceType_13(1163783510);
  msg.set(YieldRedemptionPriceType_13);
  YieldData_13.insert(YieldRedemptionPriceType_13.getString());
  FIX::YieldType YieldType_13("STRING_TENDER");
  msg.set(YieldType_13);
  YieldData_13.insert(YieldType_13.getString());
  all_values.push_back(YieldData_13);


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
