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

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::OrderCancelReplaceRequest msg;

  list<multiset<string>> all_values;
  multiset<string> OrderCancelReplaceRequest_0;
  FIX::Account Account_23("STRING_1110530060");
  msg.set(Account_23);
  OrderCancelReplaceRequest_0.insert(Account_23.getString());
  FIX::AccountType AccountType_20(6);
  msg.set(AccountType_20);
  OrderCancelReplaceRequest_0.insert(AccountType_20.getString());
  FIX::AcctIDSource AcctIDSource_16(1);
  msg.set(AcctIDSource_16);
  OrderCancelReplaceRequest_0.insert(AcctIDSource_16.getString());
  FIX::AllocID AllocID_17("STRING_903495846");
  msg.set(AllocID_17);
  OrderCancelReplaceRequest_0.insert(AllocID_17.getString());
  FIX::BookingType BookingType_20(0);
  msg.set(BookingType_20);
  OrderCancelReplaceRequest_0.insert(BookingType_20.getString());
  FIX::BookingUnit BookingUnit_10('2');
  msg.set(BookingUnit_10);
  OrderCancelReplaceRequest_0.insert(BookingUnit_10.getString());
  FIX::CancellationRights CancellationRights_7('O');
  msg.set(CancellationRights_7);
  OrderCancelReplaceRequest_0.insert(CancellationRights_7.getString());
  FIX::CashMargin CashMargin_10('3');
  msg.set(CashMargin_10);
  OrderCancelReplaceRequest_0.insert(CashMargin_10.getString());
  FIX::ClOrdID ClOrdID_35("STRING_1398686788");
  msg.set(ClOrdID_35);
  OrderCancelReplaceRequest_0.insert(ClOrdID_35.getString());
  FIX::ClOrdLinkID ClOrdLinkID_14("STRING_814831652");
  msg.set(ClOrdLinkID_14);
  OrderCancelReplaceRequest_0.insert(ClOrdLinkID_14.getString());
  FIX::ClearingFeeIndicator ClearingFeeIndicator_15("STRING_C");
  msg.set(ClearingFeeIndicator_15);
  OrderCancelReplaceRequest_0.insert(ClearingFeeIndicator_15.getString());
  FIX::ComplianceID ComplianceID_10("STRING_1853040586");
  msg.set(ComplianceID_10);
  OrderCancelReplaceRequest_0.insert(ComplianceID_10.getString());
  FIX::CoveredOrUncovered CoveredOrUncovered_9(1);
  msg.set(CoveredOrUncovered_9);
  OrderCancelReplaceRequest_0.insert(CoveredOrUncovered_9.getString());
  FIX::Currency Currency_45("EUR");
  msg.set(Currency_45);
  OrderCancelReplaceRequest_0.insert(Currency_45.getString());
  FIX::CustDirectedOrder CustDirectedOrder_2(false);
  msg.set(CustDirectedOrder_2);
  OrderCancelReplaceRequest_0.insert(CustDirectedOrder_2.getString());
  FIX::CustOrderCapacity CustOrderCapacity_13(4);
  msg.set(CustOrderCapacity_13);
  OrderCancelReplaceRequest_0.insert(CustOrderCapacity_13.getString());
  FIX::CustOrderHandlingInst CustOrderHandlingInst_2("MULTIPLESTRINGVALUE_MAC");
  msg.set(CustOrderHandlingInst_2);
  OrderCancelReplaceRequest_0.insert(CustOrderHandlingInst_2.getString());
  FIX::DayBookingInst DayBookingInst_10('1');
  msg.set(DayBookingInst_10);
  OrderCancelReplaceRequest_0.insert(DayBookingInst_10.getString());
  FIX::Designation Designation_7("STRING_604254002");
  msg.set(Designation_7);
  OrderCancelReplaceRequest_0.insert(Designation_7.getString());
  FIX::EffectiveTime EffectiveTime_7(FIX::UTCTIMESTAMP(15, 58, 49, 23, 1, 2009));
  msg.set(EffectiveTime_7);
  OrderCancelReplaceRequest_0.insert(EffectiveTime_7.getString());
  FIX::EncodedText EncodedText_70("DATA_1257668653");
  msg.set(EncodedText_70);
  OrderCancelReplaceRequest_0.insert(EncodedText_70.getString());
  FIX::EncodedTextLen EncodedTextLen_70(803561824);
  msg.set(EncodedTextLen_70);
  OrderCancelReplaceRequest_0.insert(EncodedTextLen_70.getString());
  FIX::ExDestination ExDestination_6("EXCHANGE_951315271");
  msg.set(ExDestination_6);
  OrderCancelReplaceRequest_0.insert(ExDestination_6.getString());
  FIX::ExDestinationIDSource ExDestinationIDSource_6('E');
  msg.set(ExDestinationIDSource_6);
  OrderCancelReplaceRequest_0.insert(ExDestinationIDSource_6.getString());
  FIX::ExecInst ExecInst_12("MULTIPLECHARVALUE_C");
  msg.set(ExecInst_12);
  OrderCancelReplaceRequest_0.insert(ExecInst_12.getString());
  FIX::ExpireDate ExpireDate_13("LOCALMKTDATE_441696940");
  msg.set(ExpireDate_13);
  OrderCancelReplaceRequest_0.insert(ExpireDate_13.getString());
  FIX::ExpireTime ExpireTime_14(FIX::UTCTIMESTAMP(10, 40, 36, 9, 11, 2010));
  msg.set(ExpireTime_14);
  OrderCancelReplaceRequest_0.insert(ExpireTime_14.getString());
  FIX::ForexReq ForexReq_10(true);
  msg.set(ForexReq_10);
  OrderCancelReplaceRequest_0.insert(ForexReq_10.getString());
  FIX::GTBookingInst GTBookingInst_7(2);
  msg.set(GTBookingInst_7);
  OrderCancelReplaceRequest_0.insert(GTBookingInst_7.getString());
  FIX::HandlInst HandlInst_7('1');
  msg.set(HandlInst_7);
  OrderCancelReplaceRequest_0.insert(HandlInst_7.getString());
  FIX::ListID ListID_22("STRING_2076015683");
  msg.set(ListID_22);
  OrderCancelReplaceRequest_0.insert(ListID_22.getString());
  FIX::LocateReqd LocateReqd_6(true);
  msg.set(LocateReqd_6);
  OrderCancelReplaceRequest_0.insert(LocateReqd_6.getString());
  FIX::ManualOrderIndicator ManualOrderIndicator_2(true);
  msg.set(ManualOrderIndicator_2);
  OrderCancelReplaceRequest_0.insert(ManualOrderIndicator_2.getString());
  FIX::MatchIncrement MatchIncrement_7;
  MatchIncrement_7.setString("18898566");
  msg.set(MatchIncrement_7);
  OrderCancelReplaceRequest_0.insert(MatchIncrement_7.getString());
  FIX::MaxFloor MaxFloor_7;
  MaxFloor_7.setString("5377018");
  msg.set(MaxFloor_7);
  OrderCancelReplaceRequest_0.insert(MaxFloor_7.getString());
  FIX::MaxPriceLevels MaxPriceLevels_7(1341566081);
  msg.set(MaxPriceLevels_7);
  OrderCancelReplaceRequest_0.insert(MaxPriceLevels_7.getString());
  FIX::MaxShow MaxShow_7;
  MaxShow_7.setString("15647322");
  msg.set(MaxShow_7);
  OrderCancelReplaceRequest_0.insert(MaxShow_7.getString());
  FIX::MinQty MinQty_12;
  MinQty_12.setString("11419558");
  msg.set(MinQty_12);
  OrderCancelReplaceRequest_0.insert(MinQty_12.getString());
  FIX::MoneyLaunderingStatus MoneyLaunderingStatus_7('Y');
  msg.set(MoneyLaunderingStatus_7);
  OrderCancelReplaceRequest_0.insert(MoneyLaunderingStatus_7.getString());
  FIX::OrdType OrdType_45('F');
  msg.set(OrdType_45);
  OrderCancelReplaceRequest_0.insert(OrdType_45.getString());
  FIX::OrderCapacity OrderCapacity_23('G');
  msg.set(OrderCapacity_23);
  OrderCancelReplaceRequest_0.insert(OrderCapacity_23.getString());
  FIX::OrderHandlingInstSource OrderHandlingInstSource_2(1);
  msg.set(OrderHandlingInstSource_2);
  OrderCancelReplaceRequest_0.insert(OrderHandlingInstSource_2.getString());
  FIX::OrderID OrderID_30("STRING_1646655965");
  msg.set(OrderID_30);
  OrderCancelReplaceRequest_0.insert(OrderID_30.getString());
  FIX::OrderQty2 OrderQty2_10;
  OrderQty2_10.setString("7849361");
  msg.set(OrderQty2_10);
  OrderCancelReplaceRequest_0.insert(OrderQty2_10.getString());
  FIX::OrderRestrictions OrderRestrictions_18("MULTIPLECHARVALUE_2");
  msg.set(OrderRestrictions_18);
  OrderCancelReplaceRequest_0.insert(OrderRestrictions_18.getString());
  FIX::OrigClOrdID OrigClOrdID_11("STRING_756840971");
  msg.set(OrigClOrdID_11);
  OrderCancelReplaceRequest_0.insert(OrigClOrdID_11.getString());
  FIX::OrigOrdModTime OrigOrdModTime_5(FIX::UTCTIMESTAMP(17, 4, 44, 22, 3, 2012));
  msg.set(OrigOrdModTime_5);
  OrderCancelReplaceRequest_0.insert(OrigOrdModTime_5.getString());
  FIX::ParticipationRate ParticipationRate_7;
  ParticipationRate_7.setString("29.500000");
  msg.set(ParticipationRate_7);
  OrderCancelReplaceRequest_0.insert(ParticipationRate_7.getString());
  FIX::PositionEffect PositionEffect_13('O');
  msg.set(PositionEffect_13);
  OrderCancelReplaceRequest_0.insert(PositionEffect_13.getString());
  FIX::PreTradeAnonymity PreTradeAnonymity_10(true);
  msg.set(PreTradeAnonymity_10);
  OrderCancelReplaceRequest_0.insert(PreTradeAnonymity_10.getString());
  FIX::PreallocMethod PreallocMethod_10('1');
  msg.set(PreallocMethod_10);
  OrderCancelReplaceRequest_0.insert(PreallocMethod_10.getString());
  FIX::Price Price_19;
  Price_19.setString("6876884");
  msg.set(Price_19);
  OrderCancelReplaceRequest_0.insert(Price_19.getString());
  FIX::Price2 Price2_2;
  Price2_2.setString("2931925");
  msg.set(Price2_2);
  OrderCancelReplaceRequest_0.insert(Price2_2.getString());
  FIX::PriceProtectionScope PriceProtectionScope_7('1');
  msg.set(PriceProtectionScope_7);
  OrderCancelReplaceRequest_0.insert(PriceProtectionScope_7.getString());
  FIX::PriceType PriceType_33(3);
  msg.set(PriceType_33);
  OrderCancelReplaceRequest_0.insert(PriceType_33.getString());
  FIX::QtyType QtyType_22(1);
  msg.set(QtyType_22);
  OrderCancelReplaceRequest_0.insert(QtyType_22.getString());
  FIX::ReceivedDeptID ReceivedDeptID_2("STRING_1671240497");
  msg.set(ReceivedDeptID_2);
  OrderCancelReplaceRequest_0.insert(ReceivedDeptID_2.getString());
  FIX::RegistID RegistID_7("STRING_682615118");
  msg.set(RegistID_7);
  OrderCancelReplaceRequest_0.insert(RegistID_7.getString());
  FIX::SecondaryClOrdID SecondaryClOrdID_33("STRING_2111581275");
  msg.set(SecondaryClOrdID_33);
  OrderCancelReplaceRequest_0.insert(SecondaryClOrdID_33.getString());
  FIX::SettlCurrency SettlCurrency_21("EUR");
  msg.set(SettlCurrency_21);
  OrderCancelReplaceRequest_0.insert(SettlCurrency_21.getString());
  FIX::SettlDate SettlDate_37("LOCALMKTDATE_1528829835");
  msg.set(SettlDate_37);
  OrderCancelReplaceRequest_0.insert(SettlDate_37.getString());
  FIX::SettlDate2 SettlDate2_10("LOCALMKTDATE_1203414529");
  msg.set(SettlDate2_10);
  OrderCancelReplaceRequest_0.insert(SettlDate2_10.getString());
  FIX::SettlType SettlType_24("STRING_3");
  msg.set(SettlType_24);
  OrderCancelReplaceRequest_0.insert(SettlType_24.getString());
  FIX::Side Side_33('2');
  msg.set(Side_33);
  OrderCancelReplaceRequest_0.insert(Side_33.getString());
  FIX::SolicitedFlag SolicitedFlag_10(false);
  msg.set(SolicitedFlag_10);
  OrderCancelReplaceRequest_0.insert(SolicitedFlag_10.getString());
  FIX::StopPx StopPx_7;
  StopPx_7.setString("5710871");
  msg.set(StopPx_7);
  OrderCancelReplaceRequest_0.insert(StopPx_7.getString());
  FIX::TargetStrategy TargetStrategy_7(2);
  msg.set(TargetStrategy_7);
  OrderCancelReplaceRequest_0.insert(TargetStrategy_7.getString());
  FIX::TargetStrategyParameters TargetStrategyParameters_7("STRING_1432239624");
  msg.set(TargetStrategyParameters_7);
  OrderCancelReplaceRequest_0.insert(TargetStrategyParameters_7.getString());
  FIX::Text Text_70("STRING_1591900382");
  msg.set(Text_70);
  OrderCancelReplaceRequest_0.insert(Text_70.getString());
  FIX::TimeInForce TimeInForce_35('8');
  msg.set(TimeInForce_35);
  OrderCancelReplaceRequest_0.insert(TimeInForce_35.getString());
  FIX::TradeDate TradeDate_26("LOCALMKTDATE_873253964");
  msg.set(TradeDate_26);
  OrderCancelReplaceRequest_0.insert(TradeDate_26.getString());
  FIX::TradeOriginationDate TradeOriginationDate_18("LOCALMKTDATE_1416545231");
  msg.set(TradeOriginationDate_18);
  OrderCancelReplaceRequest_0.insert(TradeOriginationDate_18.getString());
  FIX::TransactTime TransactTime_40(FIX::UTCTIMESTAMP(20, 1, 4, 10, 1, 2000));
  msg.set(TransactTime_40);
  OrderCancelReplaceRequest_0.insert(TransactTime_40.getString());
  all_values.push_back(OrderCancelReplaceRequest_0);

  // CommissionData
  multiset<string> CommissionData_19;
  FIX::CommCurrency CommCurrency_19("CHF");
  msg.set(CommCurrency_19);
  CommissionData_19.insert(CommCurrency_19.getString());
  FIX::CommType CommType_19('5');
  msg.set(CommType_19);
  CommissionData_19.insert(CommType_19.getString());
  FIX::Commission Commission_19;
  Commission_19.setString("10035813");
  msg.set(Commission_19);
  CommissionData_19.insert(Commission_19.getString());
  FIX::FundRenewWaiv FundRenewWaiv_19('N');
  msg.set(FundRenewWaiv_19);
  CommissionData_19.insert(FundRenewWaiv_19.getString());
  all_values.push_back(CommissionData_19);

  // DiscretionInstructions
  multiset<string> DiscretionInstructions_7;
  FIX::DiscretionInst DiscretionInst_7('5');
  msg.set(DiscretionInst_7);
  DiscretionInstructions_7.insert(DiscretionInst_7.getString());
  FIX::DiscretionLimitType DiscretionLimitType_7(0);
  msg.set(DiscretionLimitType_7);
  DiscretionInstructions_7.insert(DiscretionLimitType_7.getString());
  FIX::DiscretionMoveType DiscretionMoveType_7(1);
  msg.set(DiscretionMoveType_7);
  DiscretionInstructions_7.insert(DiscretionMoveType_7.getString());
  FIX::DiscretionOffsetType DiscretionOffsetType_7(3);
  msg.set(DiscretionOffsetType_7);
  DiscretionInstructions_7.insert(DiscretionOffsetType_7.getString());
  FIX::DiscretionOffsetValue DiscretionOffsetValue_7;
  DiscretionOffsetValue_7.setString("11894036");
  msg.set(DiscretionOffsetValue_7);
  DiscretionInstructions_7.insert(DiscretionOffsetValue_7.getString());
  FIX::DiscretionRoundDirection DiscretionRoundDirection_7(2);
  msg.set(DiscretionRoundDirection_7);
  DiscretionInstructions_7.insert(DiscretionRoundDirection_7.getString());
  FIX::DiscretionScope DiscretionScope_7(4);
  msg.set(DiscretionScope_7);
  DiscretionInstructions_7.insert(DiscretionScope_7.getString());
  all_values.push_back(DiscretionInstructions_7);

  // DisplayInstruction
  multiset<string> DisplayInstruction_7;
  FIX::DisplayHighQty DisplayHighQty_7;
  DisplayHighQty_7.setString("5707498");
  msg.set(DisplayHighQty_7);
  DisplayInstruction_7.insert(DisplayHighQty_7.getString());
  FIX::DisplayLowQty DisplayLowQty_7;
  DisplayLowQty_7.setString("6596207");
  msg.set(DisplayLowQty_7);
  DisplayInstruction_7.insert(DisplayLowQty_7.getString());
  FIX::DisplayMethod DisplayMethod_7('3');
  msg.set(DisplayMethod_7);
  DisplayInstruction_7.insert(DisplayMethod_7.getString());
  FIX::DisplayMinIncr DisplayMinIncr_7;
  DisplayMinIncr_7.setString("13671359");
  msg.set(DisplayMinIncr_7);
  DisplayInstruction_7.insert(DisplayMinIncr_7.getString());
  FIX::DisplayQty DisplayQty_7;
  DisplayQty_7.setString("13069242");
  msg.set(DisplayQty_7);
  DisplayInstruction_7.insert(DisplayQty_7.getString());
  FIX::DisplayWhen DisplayWhen_7('1');
  msg.set(DisplayWhen_7);
  DisplayInstruction_7.insert(DisplayWhen_7.getString());
  FIX::RefreshQty RefreshQty_7;
  RefreshQty_7.setString("16626943");
  msg.set(RefreshQty_7);
  DisplayInstruction_7.insert(RefreshQty_7.getString());
  FIX::SecondaryDisplayQty SecondaryDisplayQty_7;
  SecondaryDisplayQty_7.setString("5916802");
  msg.set(SecondaryDisplayQty_7);
  DisplayInstruction_7.insert(SecondaryDisplayQty_7.getString());
  all_values.push_back(DisplayInstruction_7);

  // FinancingDetails
  multiset<string> FinancingDetails_13;
  FIX::AgreementCurrency AgreementCurrency_13("GBP");
  msg.set(AgreementCurrency_13);
  FinancingDetails_13.insert(AgreementCurrency_13.getString());
  FIX::AgreementDate AgreementDate_13("LOCALMKTDATE_1464934198");
  msg.set(AgreementDate_13);
  FinancingDetails_13.insert(AgreementDate_13.getString());
  FIX::AgreementDesc AgreementDesc_13("STRING_1117894571");
  msg.set(AgreementDesc_13);
  FinancingDetails_13.insert(AgreementDesc_13.getString());
  FIX::AgreementID AgreementID_13("STRING_355518341");
  msg.set(AgreementID_13);
  FinancingDetails_13.insert(AgreementID_13.getString());
  FIX::DeliveryType DeliveryType_13(2);
  msg.set(DeliveryType_13);
  FinancingDetails_13.insert(DeliveryType_13.getString());
  FIX::EndDate EndDate_13("LOCALMKTDATE_653297945");
  msg.set(EndDate_13);
  FinancingDetails_13.insert(EndDate_13.getString());
  FIX::MarginRatio MarginRatio_13;
  MarginRatio_13.setString("50.450000");
  msg.set(MarginRatio_13);
  FinancingDetails_13.insert(MarginRatio_13.getString());
  FIX::StartDate StartDate_13("LOCALMKTDATE_1504413936");
  msg.set(StartDate_13);
  FinancingDetails_13.insert(StartDate_13.getString());
  FIX::TerminationType TerminationType_13(2);
  msg.set(TerminationType_13);
  FinancingDetails_13.insert(TerminationType_13.getString());
  all_values.push_back(FinancingDetails_13);

  // Instrument
  multiset<string> Instrument_49;
  FIX::AttachmentPoint AttachmentPoint_49;
  AttachmentPoint_49.setString("86.760000");
  msg.set(AttachmentPoint_49);
  Instrument_49.insert(AttachmentPoint_49.getString());
  FIX::CFICode CFICode_49("STRING_67319103");
  msg.set(CFICode_49);
  Instrument_49.insert(CFICode_49.getString());
  FIX::CPProgram CPProgram_49(1);
  msg.set(CPProgram_49);
  Instrument_49.insert(CPProgram_49.getString());
  FIX::CPRegType CPRegType_49("STRING_884847120");
  msg.set(CPRegType_49);
  Instrument_49.insert(CPRegType_49.getString());
  FIX::CapPrice CapPrice_49;
  CapPrice_49.setString("10709004");
  msg.set(CapPrice_49);
  Instrument_49.insert(CapPrice_49.getString());
  FIX::ContractMultiplier ContractMultiplier_49;
  ContractMultiplier_49.setString("6033020");
  msg.set(ContractMultiplier_49);
  Instrument_49.insert(ContractMultiplier_49.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_49(2);
  msg.set(ContractMultiplierUnit_49);
  Instrument_49.insert(ContractMultiplierUnit_49.getString());
  FIX::ContractSettlMonth ContractSettlMonth_49("MONTHYEAR_148722853");
  msg.set(ContractSettlMonth_49);
  Instrument_49.insert(ContractSettlMonth_49.getString());
  FIX::CountryOfIssue CountryOfIssue_49("COUNTRY_2145533255");
  msg.set(CountryOfIssue_49);
  Instrument_49.insert(CountryOfIssue_49.getString());
  FIX::CouponPaymentDate CouponPaymentDate_49("LOCALMKTDATE_980013001");
  msg.set(CouponPaymentDate_49);
  Instrument_49.insert(CouponPaymentDate_49.getString());
  FIX::CouponRate CouponRate_49;
  CouponRate_49.setString("64.860000");
  msg.set(CouponRate_49);
  Instrument_49.insert(CouponRate_49.getString());
  FIX::CreditRating CreditRating_49("STRING_1601739522");
  msg.set(CreditRating_49);
  Instrument_49.insert(CreditRating_49.getString());
  FIX::DatedDate DatedDate_49("LOCALMKTDATE_1245601052");
  msg.set(DatedDate_49);
  Instrument_49.insert(DatedDate_49.getString());
  FIX::DetachmentPoint DetachmentPoint_49;
  DetachmentPoint_49.setString("63.060000");
  msg.set(DetachmentPoint_49);
  Instrument_49.insert(DetachmentPoint_49.getString());
  FIX::EncodedIssuer EncodedIssuer_49("DATA_113876670");
  msg.set(EncodedIssuer_49);
  Instrument_49.insert(EncodedIssuer_49.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_49(931446502);
  msg.set(EncodedIssuerLen_49);
  Instrument_49.insert(EncodedIssuerLen_49.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_49("DATA_1128528607");
  msg.set(EncodedSecurityDesc_49);
  Instrument_49.insert(EncodedSecurityDesc_49.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_49(1420800928);
  msg.set(EncodedSecurityDescLen_49);
  Instrument_49.insert(EncodedSecurityDescLen_49.getString());
  FIX::ExerciseStyle ExerciseStyle_49(1);
  msg.set(ExerciseStyle_49);
  Instrument_49.insert(ExerciseStyle_49.getString());
  FIX::Factor Factor_49;
  Factor_49.setString("6437393");
  msg.set(Factor_49);
  Instrument_49.insert(Factor_49.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_49(true);
  msg.set(FlexProductEligibilityIndicator_49);
  Instrument_49.insert(FlexProductEligibilityIndicator_49.getString());
  FIX::FlexibleIndicator FlexibleIndicator_49(true);
  msg.set(FlexibleIndicator_49);
  Instrument_49.insert(FlexibleIndicator_49.getString());
  FIX::FloorPrice FloorPrice_49;
  FloorPrice_49.setString("12113495");
  msg.set(FloorPrice_49);
  Instrument_49.insert(FloorPrice_49.getString());
  FIX::FlowScheduleType FlowScheduleType_49(2);
  msg.set(FlowScheduleType_49);
  Instrument_49.insert(FlowScheduleType_49.getString());
  FIX::InstrRegistry InstrRegistry_49("STRING_2007623019");
  msg.set(InstrRegistry_49);
  Instrument_49.insert(InstrRegistry_49.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_49('1');
  msg.set(InstrmtAssignmentMethod_49);
  Instrument_49.insert(InstrmtAssignmentMethod_49.getString());
  FIX::InterestAccrualDate InterestAccrualDate_49("LOCALMKTDATE_728258802");
  msg.set(InterestAccrualDate_49);
  Instrument_49.insert(InterestAccrualDate_49.getString());
  FIX::IssueDate IssueDate_49("LOCALMKTDATE_513437316");
  msg.set(IssueDate_49);
  Instrument_49.insert(IssueDate_49.getString());
  FIX::Issuer Issuer_49("STRING_2007522909");
  msg.set(Issuer_49);
  Instrument_49.insert(Issuer_49.getString());
  FIX::ListMethod ListMethod_49(0);
  msg.set(ListMethod_49);
  Instrument_49.insert(ListMethod_49.getString());
  FIX::LocaleOfIssue LocaleOfIssue_49("STRING_161447937");
  msg.set(LocaleOfIssue_49);
  Instrument_49.insert(LocaleOfIssue_49.getString());
  FIX::MaturityDate MaturityDate_49("LOCALMKTDATE_1252687937");
  msg.set(MaturityDate_49);
  Instrument_49.insert(MaturityDate_49.getString());
  FIX::MaturityMonthYear MaturityMonthYear_49("MONTHYEAR_152508193");
  msg.set(MaturityMonthYear_49);
  Instrument_49.insert(MaturityMonthYear_49.getString());
  FIX::MaturityTime MaturityTime_49("TZTIMEONLY_893759235");
  msg.set(MaturityTime_49);
  Instrument_49.insert(MaturityTime_49.getString());
  FIX::MinPriceIncrement MinPriceIncrement_49;
  MinPriceIncrement_49.setString("21375350");
  msg.set(MinPriceIncrement_49);
  Instrument_49.insert(MinPriceIncrement_49.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_49;
  MinPriceIncrementAmount_49.setString("12234086");
  msg.set(MinPriceIncrementAmount_49);
  Instrument_49.insert(MinPriceIncrementAmount_49.getString());
  FIX::NTPositionLimit NTPositionLimit_49(1497061263);
  msg.set(NTPositionLimit_49);
  Instrument_49.insert(NTPositionLimit_49.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_49;
  NotionalPercentageOutstanding_49.setString("39.110000");
  msg.set(NotionalPercentageOutstanding_49);
  Instrument_49.insert(NotionalPercentageOutstanding_49.getString());
  FIX::OptAttribute OptAttribute_49('1');
  msg.set(OptAttribute_49);
  Instrument_49.insert(OptAttribute_49.getString());
  FIX::OptPayoutAmount OptPayoutAmount_49;
  OptPayoutAmount_49.setString("14951108");
  msg.set(OptPayoutAmount_49);
  Instrument_49.insert(OptPayoutAmount_49.getString());
  FIX::OptPayoutType OptPayoutType_49(2);
  msg.set(OptPayoutType_49);
  Instrument_49.insert(OptPayoutType_49.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_49;
  OriginalNotionalPercentageOutstanding_49.setString("43.800000");
  msg.set(OriginalNotionalPercentageOutstanding_49);
  Instrument_49.insert(OriginalNotionalPercentageOutstanding_49.getString());
  FIX::Pool Pool_49("STRING_949366744");
  msg.set(Pool_49);
  Instrument_49.insert(Pool_49.getString());
  FIX::PositionLimit PositionLimit_49(659304316);
  msg.set(PositionLimit_49);
  Instrument_49.insert(PositionLimit_49.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_49("STRING_INT");
  msg.set(PriceQuoteMethod_49);
  Instrument_49.insert(PriceQuoteMethod_49.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_49("STRING_1063243415");
  msg.set(PriceUnitOfMeasure_49);
  Instrument_49.insert(PriceUnitOfMeasure_49.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_49;
  PriceUnitOfMeasureQty_49.setString("15907508");
  msg.set(PriceUnitOfMeasureQty_49);
  Instrument_49.insert(PriceUnitOfMeasureQty_49.getString());
  FIX::Product Product_51(12);
  msg.set(Product_51);
  Instrument_49.insert(Product_51.getString());
  FIX::ProductComplex ProductComplex_49("STRING_336560695");
  msg.set(ProductComplex_49);
  Instrument_49.insert(ProductComplex_49.getString());
  FIX::PutOrCall PutOrCall_49(0);
  msg.set(PutOrCall_49);
  Instrument_49.insert(PutOrCall_49.getString());
  FIX::RedemptionDate RedemptionDate_49("LOCALMKTDATE_2096435001");
  msg.set(RedemptionDate_49);
  Instrument_49.insert(RedemptionDate_49.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_49("STRING_201558209");
  msg.set(RepoCollateralSecurityType_49);
  Instrument_49.insert(RepoCollateralSecurityType_49.getString());
  FIX::RepurchaseRate RepurchaseRate_49;
  RepurchaseRate_49.setString("47.260000");
  msg.set(RepurchaseRate_49);
  Instrument_49.insert(RepurchaseRate_49.getString());
  FIX::RepurchaseTerm RepurchaseTerm_49(1160300876);
  msg.set(RepurchaseTerm_49);
  Instrument_49.insert(RepurchaseTerm_49.getString());
  FIX::RestructuringType RestructuringType_49("STRING_MR");
  msg.set(RestructuringType_49);
  Instrument_49.insert(RestructuringType_49.getString());
  FIX::SecurityDesc SecurityDesc_49("STRING_1381514097");
  msg.set(SecurityDesc_49);
  Instrument_49.insert(SecurityDesc_49.getString());
  FIX::SecurityExchange SecurityExchange_49("EXCHANGE_579685091");
  msg.set(SecurityExchange_49);
  Instrument_49.insert(SecurityExchange_49.getString());
  FIX::SecurityGroup SecurityGroup_49("STRING_112265075");
  msg.set(SecurityGroup_49);
  Instrument_49.insert(SecurityGroup_49.getString());
  FIX::SecurityID SecurityID_49("STRING_1894951414");
  msg.set(SecurityID_49);
  Instrument_49.insert(SecurityID_49.getString());
  FIX::SecurityIDSource SecurityIDSource_49("STRING_D");
  msg.set(SecurityIDSource_49);
  Instrument_49.insert(SecurityIDSource_49.getString());
  FIX::SecurityStatus SecurityStatus_49("STRING_2");
  msg.set(SecurityStatus_49);
  Instrument_49.insert(SecurityStatus_49.getString());
  FIX::SecuritySubType SecuritySubType_50("STRING_2056399351");
  msg.set(SecuritySubType_50);
  Instrument_49.insert(SecuritySubType_50.getString());
  FIX::SecurityType SecurityType_51("STRING_FAC");
  msg.set(SecurityType_51);
  Instrument_49.insert(SecurityType_51.getString());
  FIX::Seniority Seniority_49("STRING_SB");
  msg.set(Seniority_49);
  Instrument_49.insert(Seniority_49.getString());
  FIX::SettlMethod SettlMethod_49('P');
  msg.set(SettlMethod_49);
  Instrument_49.insert(SettlMethod_49.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_49("STRING_1682463699");
  msg.set(SettleOnOpenFlag_49);
  Instrument_49.insert(SettleOnOpenFlag_49.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_49("STRING_1573371048");
  msg.set(StateOrProvinceOfIssue_49);
  Instrument_49.insert(StateOrProvinceOfIssue_49.getString());
  FIX::StrikeCurrency StrikeCurrency_49("JPY");
  msg.set(StrikeCurrency_49);
  Instrument_49.insert(StrikeCurrency_49.getString());
  FIX::StrikeMultiplier StrikeMultiplier_49;
  StrikeMultiplier_49.setString("7980189");
  msg.set(StrikeMultiplier_49);
  Instrument_49.insert(StrikeMultiplier_49.getString());
  FIX::StrikePrice StrikePrice_49;
  StrikePrice_49.setString("16473634");
  msg.set(StrikePrice_49);
  Instrument_49.insert(StrikePrice_49.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_49(5);
  msg.set(StrikePriceBoundaryMethod_49);
  Instrument_49.insert(StrikePriceBoundaryMethod_49.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_49;
  StrikePriceBoundaryPrecision_49.setString("33.220000");
  msg.set(StrikePriceBoundaryPrecision_49);
  Instrument_49.insert(StrikePriceBoundaryPrecision_49.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_49(2);
  msg.set(StrikePriceDeterminationMethod_49);
  Instrument_49.insert(StrikePriceDeterminationMethod_49.getString());
  FIX::StrikeValue StrikeValue_49;
  StrikeValue_49.setString("1891615");
  msg.set(StrikeValue_49);
  Instrument_49.insert(StrikeValue_49.getString());
  FIX::Symbol Symbol_49("STRING_1684960360");
  msg.set(Symbol_49);
  Instrument_49.insert(Symbol_49.getString());
  FIX::SymbolSfx SymbolSfx_49("STRING_CD");
  msg.set(SymbolSfx_49);
  Instrument_49.insert(SymbolSfx_49.getString());
  FIX::TimeUnit TimeUnit_49("STRING_S");
  msg.set(TimeUnit_49);
  Instrument_49.insert(TimeUnit_49.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_49(2);
  msg.set(UnderlyingPriceDeterminationMethod_49);
  Instrument_49.insert(UnderlyingPriceDeterminationMethod_49.getString());
  FIX::UnitOfMeasure UnitOfMeasure_49("STRING_Alw");
  msg.set(UnitOfMeasure_49);
  Instrument_49.insert(UnitOfMeasure_49.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_49;
  UnitOfMeasureQty_49.setString("2640749");
  msg.set(UnitOfMeasureQty_49);
  Instrument_49.insert(UnitOfMeasureQty_49.getString());
  FIX::ValuationMethod ValuationMethod_49("STRING_FUT");
  msg.set(ValuationMethod_49);
  Instrument_49.insert(ValuationMethod_49.getString());
  all_values.push_back(Instrument_49);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::OrderCancelReplaceRequest::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_96;
    FIX::ComplexEventCondition ComplexEventCondition_96(1);
    noComplexEvents_0_0.set(ComplexEventCondition_96);
    ComplexEvents_NoComplexEvents_96.insert(ComplexEventCondition_96.getString());
    FIX::ComplexEventPrice ComplexEventPrice_96;
    ComplexEventPrice_96.setString("20994245");
    noComplexEvents_0_0.set(ComplexEventPrice_96);
    ComplexEvents_NoComplexEvents_96.insert(ComplexEventPrice_96.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_96(4);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_96);
    ComplexEvents_NoComplexEvents_96.insert(ComplexEventPriceBoundaryMethod_96.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_96;
    ComplexEventPriceBoundaryPrecision_96.setString("1.650000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_96);
    ComplexEvents_NoComplexEvents_96.insert(ComplexEventPriceBoundaryPrecision_96.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_96(3);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_96);
    ComplexEvents_NoComplexEvents_96.insert(ComplexEventPriceTimeType_96.getString());
    FIX::ComplexEventType ComplexEventType_96(5);
    noComplexEvents_0_0.set(ComplexEventType_96);
    ComplexEvents_NoComplexEvents_96.insert(ComplexEventType_96.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_96;
    ComplexOptPayoutAmount_96.setString("7669479");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_96);
    ComplexEvents_NoComplexEvents_96.insert(ComplexOptPayoutAmount_96.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_96);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_198;
      FIX::ComplexEventEndDate ComplexEventEndDate_198(FIX::UTCTIMESTAMP(19, 24, 13, 2, 8, 2017));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_198);
      ComplexEventDates_NoComplexEventDates_198.insert(ComplexEventEndDate_198.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_198(FIX::UTCTIMESTAMP(5, 27, 5, 7, 10, 2007));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_198);
      ComplexEventDates_NoComplexEventDates_198.insert(ComplexEventStartDate_198.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_198);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_404;
        FIX::ComplexEventEndTime ComplexEventEndTime_404(FIX::UTCTIMEONLY(11, 45, 18));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_404);
        ComplexEventTimes_NoComplexEventTimes_404.insert(ComplexEventEndTime_404.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_404(FIX::UTCTIMEONLY(11, 1, 51));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_404);
        ComplexEventTimes_NoComplexEventTimes_404.insert(ComplexEventStartTime_404.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_404);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::OrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_405;
        FIX::ComplexEventEndTime ComplexEventEndTime_405(FIX::UTCTIMEONLY(16, 45, 41));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_405);
        ComplexEventTimes_NoComplexEventTimes_405.insert(ComplexEventEndTime_405.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_405(FIX::UTCTIMEONLY(17, 12, 26));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_405);
        ComplexEventTimes_NoComplexEventTimes_405.insert(ComplexEventStartTime_405.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_405);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::OrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_406;
        FIX::ComplexEventEndTime ComplexEventEndTime_406(FIX::UTCTIMEONLY(19, 50, 16));
        noComplexEventTimes_0_0_2_2.set(ComplexEventEndTime_406);
        ComplexEventTimes_NoComplexEventTimes_406.insert(ComplexEventEndTime_406.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_406(FIX::UTCTIMEONLY(10, 1, 34));
        noComplexEventTimes_0_0_2_2.set(ComplexEventStartTime_406);
        ComplexEventTimes_NoComplexEventTimes_406.insert(ComplexEventStartTime_406.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_406);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::OrderCancelReplaceRequest::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_91;
    FIX::EventDate EventDate_91("LOCALMKTDATE_470711188");
    noEvents_0_0.set(EventDate_91);
    EvntGrp_NoEvents_91.insert(EventDate_91.getString());
    FIX::EventPx EventPx_91;
    EventPx_91.setString("18282266");
    noEvents_0_0.set(EventPx_91);
    EvntGrp_NoEvents_91.insert(EventPx_91.getString());
    FIX::EventText EventText_91("STRING_590456967");
    noEvents_0_0.set(EventText_91);
    EvntGrp_NoEvents_91.insert(EventText_91.getString());
    FIX::EventTime EventTime_91(FIX::UTCTIMESTAMP(14, 12, 10, 18, 11, 2015));
    noEvents_0_0.set(EventTime_91);
    EvntGrp_NoEvents_91.insert(EventTime_91.getString());
    FIX::EventType EventType_91(6);
    noEvents_0_0.set(EventType_91);
    EvntGrp_NoEvents_91.insert(EventType_91.getString());
    all_values.push_back(EvntGrp_NoEvents_91);

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::OrderCancelReplaceRequest::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_91;
    FIX::InstrumentPartyID InstrumentPartyID_91("STRING_1686209722");
    noInstrumentParties_0_0.set(InstrumentPartyID_91);
    InstrumentParties_NoInstrumentParties_91.insert(InstrumentPartyID_91.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_91('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_91);
    InstrumentParties_NoInstrumentParties_91.insert(InstrumentPartyIDSource_91.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_91(1347070021);
    noInstrumentParties_0_0.set(InstrumentPartyRole_91);
    InstrumentParties_NoInstrumentParties_91.insert(InstrumentPartyRole_91.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_91);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::OrderCancelReplaceRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_202;
      FIX::InstrumentPartySubID InstrumentPartySubID_202("STRING_1090954413");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_202);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_202.insert(InstrumentPartySubID_202.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_202(1787451762);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_202);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_202.insert(InstrumentPartySubIDType_202.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_202);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::OrderCancelReplaceRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_203;
      FIX::InstrumentPartySubID InstrumentPartySubID_203("STRING_1675837706");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_203);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_203.insert(InstrumentPartySubID_203.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_203(327098311);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_203);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_203.insert(InstrumentPartySubIDType_203.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_203);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::OrderCancelReplaceRequest::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_92;
    FIX::InstrumentPartyID InstrumentPartyID_92("STRING_847297786");
    noInstrumentParties_0_1.set(InstrumentPartyID_92);
    InstrumentParties_NoInstrumentParties_92.insert(InstrumentPartyID_92.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_92('1');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_92);
    InstrumentParties_NoInstrumentParties_92.insert(InstrumentPartyIDSource_92.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_92(1307576562);
    noInstrumentParties_0_1.set(InstrumentPartyRole_92);
    InstrumentParties_NoInstrumentParties_92.insert(InstrumentPartyRole_92.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_92);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::OrderCancelReplaceRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_204;
      FIX::InstrumentPartySubID InstrumentPartySubID_204("STRING_361104214");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_204);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_204.insert(InstrumentPartySubID_204.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_204(87384231);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_204);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_204.insert(InstrumentPartySubIDType_204.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_204);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::OrderCancelReplaceRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_205;
      FIX::InstrumentPartySubID InstrumentPartySubID_205("STRING_1797255679");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_205);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_205.insert(InstrumentPartySubID_205.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_205(1086877880);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_205);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_205.insert(InstrumentPartySubIDType_205.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_205);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::OrderCancelReplaceRequest::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_107;
    FIX::SecurityAltID SecurityAltID_107("STRING_347327745");
    noSecurityAltID_0_0.set(SecurityAltID_107);
    SecAltIDGrp_NoSecurityAltID_107.insert(SecurityAltID_107.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_107("STRING_1980064584");
    noSecurityAltID_0_0.set(SecurityAltIDSource_107);
    SecAltIDGrp_NoSecurityAltID_107.insert(SecurityAltIDSource_107.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_107);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::OrderCancelReplaceRequest::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_108;
    FIX::SecurityAltID SecurityAltID_108("STRING_858087201");
    noSecurityAltID_0_1.set(SecurityAltID_108);
    SecAltIDGrp_NoSecurityAltID_108.insert(SecurityAltID_108.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_108("STRING_28070717");
    noSecurityAltID_0_1.set(SecurityAltIDSource_108);
    SecAltIDGrp_NoSecurityAltID_108.insert(SecurityAltIDSource_108.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_108);

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_98;
  FIX::SecurityXML SecurityXML_99("XMLDATA_423037903");
  msg.set(SecurityXML_99);
  FIX::SecurityXMLLen SecurityXMLLen_49(712827470);
  msg.set(SecurityXMLLen_49);
  FIX::SecurityXMLSchema SecurityXMLSchema_49("STRING_1288731115");
  msg.set(SecurityXMLSchema_49);
  SecurityXML_98.insert(SecurityXMLSchema_49.getString());
  all_values.push_back(SecurityXML_98);

  // OrderQtyData
  multiset<string> OrderQtyData_16;
  FIX::CashOrderQty CashOrderQty_16;
  CashOrderQty_16.setString("8999266");
  msg.set(CashOrderQty_16);
  OrderQtyData_16.insert(CashOrderQty_16.getString());
  FIX::OrderPercent OrderPercent_16;
  OrderPercent_16.setString("71.810000");
  msg.set(OrderPercent_16);
  OrderQtyData_16.insert(OrderPercent_16.getString());
  FIX::OrderQty OrderQty_24;
  OrderQty_24.setString("13468315");
  msg.set(OrderQty_24);
  OrderQtyData_16.insert(OrderQty_24.getString());
  FIX::RoundingDirection RoundingDirection_16('0');
  msg.set(RoundingDirection_16);
  OrderQtyData_16.insert(RoundingDirection_16.getString());
  FIX::RoundingModulus RoundingModulus_16;
  RoundingModulus_16.setString("3244813");
  msg.set(RoundingModulus_16);
  OrderQtyData_16.insert(RoundingModulus_16.getString());
  all_values.push_back(OrderQtyData_16);

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::OrderCancelReplaceRequest::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_84;
    FIX::PartyID PartyID_84("STRING_674360763");
    noPartyIDs_0_0.set(PartyID_84);
    Parties_NoPartyIDs_84.insert(PartyID_84.getString());
    FIX::PartyIDSource PartyIDSource_84('6');
    noPartyIDs_0_0.set(PartyIDSource_84);
    Parties_NoPartyIDs_84.insert(PartyIDSource_84.getString());
    FIX::PartyRole PartyRole_84(20);
    noPartyIDs_0_0.set(PartyRole_84);
    Parties_NoPartyIDs_84.insert(PartyRole_84.getString());
    all_values.push_back(Parties_NoPartyIDs_84);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderCancelReplaceRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_172;
      FIX::PartySubID PartySubID_172("STRING_204676343");
      noPartySubIDs_0_1_0.set(PartySubID_172);
      PtysSubGrp_NoPartySubIDs_172.insert(PartySubID_172.getString());
      FIX::PartySubIDType PartySubIDType_172(21);
      noPartySubIDs_0_1_0.set(PartySubIDType_172);
      PtysSubGrp_NoPartySubIDs_172.insert(PartySubIDType_172.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_172);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::OrderCancelReplaceRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_173;
      FIX::PartySubID PartySubID_173("STRING_1661398898");
      noPartySubIDs_0_1_1.set(PartySubID_173);
      PtysSubGrp_NoPartySubIDs_173.insert(PartySubID_173.getString());
      FIX::PartySubIDType PartySubIDType_173(8);
      noPartySubIDs_0_1_1.set(PartySubIDType_173);
      PtysSubGrp_NoPartySubIDs_173.insert(PartySubIDType_173.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_173);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  // PegInstructions
  multiset<string> PegInstructions_7;
  FIX::PegLimitType PegLimitType_7(0);
  msg.set(PegLimitType_7);
  PegInstructions_7.insert(PegLimitType_7.getString());
  FIX::PegMoveType PegMoveType_7(0);
  msg.set(PegMoveType_7);
  PegInstructions_7.insert(PegMoveType_7.getString());
  FIX::PegOffsetType PegOffsetType_7(1);
  msg.set(PegOffsetType_7);
  PegInstructions_7.insert(PegOffsetType_7.getString());
  FIX::PegOffsetValue PegOffsetValue_7;
  PegOffsetValue_7.setString("17362917");
  msg.set(PegOffsetValue_7);
  PegInstructions_7.insert(PegOffsetValue_7.getString());
  FIX::PegPriceType PegPriceType_7(3);
  msg.set(PegPriceType_7);
  PegInstructions_7.insert(PegPriceType_7.getString());
  FIX::PegRoundDirection PegRoundDirection_7(1);
  msg.set(PegRoundDirection_7);
  PegInstructions_7.insert(PegRoundDirection_7.getString());
  FIX::PegScope PegScope_7(2);
  msg.set(PegScope_7);
  PegInstructions_7.insert(PegScope_7.getString());
  FIX::PegSecurityDesc PegSecurityDesc_7("STRING_593992514");
  msg.set(PegSecurityDesc_7);
  PegInstructions_7.insert(PegSecurityDesc_7.getString());
  FIX::PegSecurityID PegSecurityID_7("STRING_867602120");
  msg.set(PegSecurityID_7);
  PegInstructions_7.insert(PegSecurityID_7.getString());
  FIX::PegSecurityIDSource PegSecurityIDSource_7("STRING_63568389");
  msg.set(PegSecurityIDSource_7);
  PegInstructions_7.insert(PegSecurityIDSource_7.getString());
  FIX::PegSymbol PegSymbol_7("STRING_941320259");
  msg.set(PegSymbol_7);
  PegInstructions_7.insert(PegSymbol_7.getString());
  all_values.push_back(PegInstructions_7);

  // PreAllocGrp
  // Group PreAllocGrp.NoAllocs
  {
    FIX50SP2::OrderCancelReplaceRequest::NoAllocs noAllocs_0_0;
    // PreAllocGrp.NoAllocs
    multiset<string> PreAllocGrp_NoAllocs_18;
    FIX::AllocAccount AllocAccount_32("STRING_921655590");
    noAllocs_0_0.set(AllocAccount_32);
    PreAllocGrp_NoAllocs_18.insert(AllocAccount_32.getString());
    FIX::AllocAcctIDSource AllocAcctIDSource_32(969390976);
    noAllocs_0_0.set(AllocAcctIDSource_32);
    PreAllocGrp_NoAllocs_18.insert(AllocAcctIDSource_32.getString());
    FIX::AllocQty AllocQty_31;
    AllocQty_31.setString("11232209");
    noAllocs_0_0.set(AllocQty_31);
    PreAllocGrp_NoAllocs_18.insert(AllocQty_31.getString());
    FIX::AllocSettlCurrency AllocSettlCurrency_27("JPY");
    noAllocs_0_0.set(AllocSettlCurrency_27);
    PreAllocGrp_NoAllocs_18.insert(AllocSettlCurrency_27.getString());
    FIX::IndividualAllocID IndividualAllocID_32("STRING_2023147635");
    noAllocs_0_0.set(IndividualAllocID_32);
    PreAllocGrp_NoAllocs_18.insert(IndividualAllocID_32.getString());
    all_values.push_back(PreAllocGrp_NoAllocs_18);

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::OrderCancelReplaceRequest::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_83;
      FIX::NestedPartyID NestedPartyID_83("STRING_1457470025");
      noNestedPartyIDs_0_1_0.set(NestedPartyID_83);
      NestedParties_NoNestedPartyIDs_83.insert(NestedPartyID_83.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_83('7');
      noNestedPartyIDs_0_1_0.set(NestedPartyIDSource_83);
      NestedParties_NoNestedPartyIDs_83.insert(NestedPartyIDSource_83.getString());
      FIX::NestedPartyRole NestedPartyRole_83(1448037988);
      noNestedPartyIDs_0_1_0.set(NestedPartyRole_83);
      NestedParties_NoNestedPartyIDs_83.insert(NestedPartyRole_83.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_83);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::OrderCancelReplaceRequest::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_169;
        FIX::NestedPartySubID NestedPartySubID_169("STRING_1445700715");
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubID_169);
        NstdPtysSubGrp_NoNestedPartySubIDs_169.insert(NestedPartySubID_169.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_169(1311245456);
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubIDType_169);
        NstdPtysSubGrp_NoNestedPartySubIDs_169.insert(NestedPartySubIDType_169.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_169);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::OrderCancelReplaceRequest::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_170;
        FIX::NestedPartySubID NestedPartySubID_170("STRING_372071631");
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubID_170);
        NstdPtysSubGrp_NoNestedPartySubIDs_170.insert(NestedPartySubID_170.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_170(1319647851);
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubIDType_170);
        NstdPtysSubGrp_NoNestedPartySubIDs_170.insert(NestedPartySubIDType_170.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_170);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_1);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::OrderCancelReplaceRequest::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_84;
      FIX::NestedPartyID NestedPartyID_84("STRING_1515921800");
      noNestedPartyIDs_0_1_1.set(NestedPartyID_84);
      NestedParties_NoNestedPartyIDs_84.insert(NestedPartyID_84.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_84('4');
      noNestedPartyIDs_0_1_1.set(NestedPartyIDSource_84);
      NestedParties_NoNestedPartyIDs_84.insert(NestedPartyIDSource_84.getString());
      FIX::NestedPartyRole NestedPartyRole_84(833563101);
      noNestedPartyIDs_0_1_1.set(NestedPartyRole_84);
      NestedParties_NoNestedPartyIDs_84.insert(NestedPartyRole_84.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_84);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::OrderCancelReplaceRequest::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_171;
        FIX::NestedPartySubID NestedPartySubID_171("STRING_902403783");
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubID_171);
        NstdPtysSubGrp_NoNestedPartySubIDs_171.insert(NestedPartySubID_171.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_171(1194776138);
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubIDType_171);
        NstdPtysSubGrp_NoNestedPartySubIDs_171.insert(NestedPartySubIDType_171.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_171);

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::OrderCancelReplaceRequest::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_172;
        FIX::NestedPartySubID NestedPartySubID_172("STRING_668572227");
        noNestedPartySubIDs_0_1_2_1.set(NestedPartySubID_172);
        NstdPtysSubGrp_NoNestedPartySubIDs_172.insert(NestedPartySubID_172.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_172(491211929);
        noNestedPartySubIDs_0_1_2_1.set(NestedPartySubIDType_172);
        NstdPtysSubGrp_NoNestedPartySubIDs_172.insert(NestedPartySubIDType_172.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_172);

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_1);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_1);
    }
    {
      FIX50SP2::OrderCancelReplaceRequest::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_85;
      FIX::NestedPartyID NestedPartyID_85("STRING_2138996620");
      noNestedPartyIDs_0_1_2.set(NestedPartyID_85);
      NestedParties_NoNestedPartyIDs_85.insert(NestedPartyID_85.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_85('4');
      noNestedPartyIDs_0_1_2.set(NestedPartyIDSource_85);
      NestedParties_NoNestedPartyIDs_85.insert(NestedPartyIDSource_85.getString());
      FIX::NestedPartyRole NestedPartyRole_85(167404306);
      noNestedPartyIDs_0_1_2.set(NestedPartyRole_85);
      NestedParties_NoNestedPartyIDs_85.insert(NestedPartyRole_85.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_85);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::OrderCancelReplaceRequest::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_173;
        FIX::NestedPartySubID NestedPartySubID_173("STRING_1316898587");
        noNestedPartySubIDs_0_2_2_0.set(NestedPartySubID_173);
        NstdPtysSubGrp_NoNestedPartySubIDs_173.insert(NestedPartySubID_173.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_173(230972695);
        noNestedPartySubIDs_0_2_2_0.set(NestedPartySubIDType_173);
        NstdPtysSubGrp_NoNestedPartySubIDs_173.insert(NestedPartySubIDType_173.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_173);

        noNestedPartyIDs_0_1_2.addGroup(noNestedPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::OrderCancelReplaceRequest::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_174;
        FIX::NestedPartySubID NestedPartySubID_174("STRING_1526825746");
        noNestedPartySubIDs_0_2_2_1.set(NestedPartySubID_174);
        NstdPtysSubGrp_NoNestedPartySubIDs_174.insert(NestedPartySubID_174.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_174(2017081644);
        noNestedPartySubIDs_0_2_2_1.set(NestedPartySubIDType_174);
        NstdPtysSubGrp_NoNestedPartySubIDs_174.insert(NestedPartySubIDType_174.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_174);

        noNestedPartyIDs_0_1_2.addGroup(noNestedPartySubIDs_0_2_2_1);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_2);
    }
    msg.addGroup(noAllocs_0_0);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_20;
  FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_20("USD");
  msg.set(BenchmarkCurveCurrency_20);
  SpreadOrBenchmarkCurveData_20.insert(BenchmarkCurveCurrency_20.getString());
  FIX::BenchmarkCurveName BenchmarkCurveName_20("STRING_Treasury");
  msg.set(BenchmarkCurveName_20);
  SpreadOrBenchmarkCurveData_20.insert(BenchmarkCurveName_20.getString());
  FIX::BenchmarkCurvePoint BenchmarkCurvePoint_20("STRING_639627699");
  msg.set(BenchmarkCurvePoint_20);
  SpreadOrBenchmarkCurveData_20.insert(BenchmarkCurvePoint_20.getString());
  FIX::BenchmarkPrice BenchmarkPrice_20;
  BenchmarkPrice_20.setString("4593715");
  msg.set(BenchmarkPrice_20);
  SpreadOrBenchmarkCurveData_20.insert(BenchmarkPrice_20.getString());
  FIX::BenchmarkPriceType BenchmarkPriceType_20(868482942);
  msg.set(BenchmarkPriceType_20);
  SpreadOrBenchmarkCurveData_20.insert(BenchmarkPriceType_20.getString());
  FIX::BenchmarkSecurityID BenchmarkSecurityID_20("STRING_1763184293");
  msg.set(BenchmarkSecurityID_20);
  SpreadOrBenchmarkCurveData_20.insert(BenchmarkSecurityID_20.getString());
  FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_20("STRING_1916841544");
  msg.set(BenchmarkSecurityIDSource_20);
  SpreadOrBenchmarkCurveData_20.insert(BenchmarkSecurityIDSource_20.getString());
  FIX::Spread Spread_20;
  Spread_20.setString("16398228");
  msg.set(Spread_20);
  SpreadOrBenchmarkCurveData_20.insert(Spread_20.getString());
  all_values.push_back(SpreadOrBenchmarkCurveData_20);

  // StrategyParametersGrp
  // Group StrategyParametersGrp.NoStrategyParameters
  {
    FIX50SP2::OrderCancelReplaceRequest::NoStrategyParameters noStrategyParameters_0_0;
    // StrategyParametersGrp.NoStrategyParameters
    multiset<string> StrategyParametersGrp_NoStrategyParameters_17;
    FIX::StrategyParameterName StrategyParameterName_17("STRING_1130767020");
    noStrategyParameters_0_0.set(StrategyParameterName_17);
    StrategyParametersGrp_NoStrategyParameters_17.insert(StrategyParameterName_17.getString());
    FIX::StrategyParameterType StrategyParameterType_17(18);
    noStrategyParameters_0_0.set(StrategyParameterType_17);
    StrategyParametersGrp_NoStrategyParameters_17.insert(StrategyParameterType_17.getString());
    FIX::StrategyParameterValue StrategyParameterValue_17("STRING_227500441");
    noStrategyParameters_0_0.set(StrategyParameterValue_17);
    StrategyParametersGrp_NoStrategyParameters_17.insert(StrategyParameterValue_17.getString());
    all_values.push_back(StrategyParametersGrp_NoStrategyParameters_17);

    msg.addGroup(noStrategyParameters_0_0);
  }
  {
    FIX50SP2::OrderCancelReplaceRequest::NoStrategyParameters noStrategyParameters_0_1;
    // StrategyParametersGrp.NoStrategyParameters
    multiset<string> StrategyParametersGrp_NoStrategyParameters_18;
    FIX::StrategyParameterName StrategyParameterName_18("STRING_1502838651");
    noStrategyParameters_0_1.set(StrategyParameterName_18);
    StrategyParametersGrp_NoStrategyParameters_18.insert(StrategyParameterName_18.getString());
    FIX::StrategyParameterType StrategyParameterType_18(20);
    noStrategyParameters_0_1.set(StrategyParameterType_18);
    StrategyParametersGrp_NoStrategyParameters_18.insert(StrategyParameterType_18.getString());
    FIX::StrategyParameterValue StrategyParameterValue_18("STRING_1743422241");
    noStrategyParameters_0_1.set(StrategyParameterValue_18);
    StrategyParametersGrp_NoStrategyParameters_18.insert(StrategyParameterValue_18.getString());
    all_values.push_back(StrategyParametersGrp_NoStrategyParameters_18);

    msg.addGroup(noStrategyParameters_0_1);
  }
  // TrdRegTimestamps
  // Group TrdRegTimestamps.NoTrdRegTimestamps
  {
    FIX50SP2::OrderCancelReplaceRequest::NoTrdRegTimestamps noTrdRegTimestamps_0_0;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_16;
    FIX::DeskOrderHandlingInst DeskOrderHandlingInst_16("MULTIPLESTRINGVALUE_DIR");
    noTrdRegTimestamps_0_0.set(DeskOrderHandlingInst_16);
    TrdRegTimestamps_NoTrdRegTimestamps_16.insert(DeskOrderHandlingInst_16.getString());
    FIX::DeskType DeskType_16("STRING_AR");
    noTrdRegTimestamps_0_0.set(DeskType_16);
    TrdRegTimestamps_NoTrdRegTimestamps_16.insert(DeskType_16.getString());
    FIX::DeskTypeSource DeskTypeSource_16(1);
    noTrdRegTimestamps_0_0.set(DeskTypeSource_16);
    TrdRegTimestamps_NoTrdRegTimestamps_16.insert(DeskTypeSource_16.getString());
    FIX::TrdRegTimestamp TrdRegTimestamp_16(FIX::UTCTIMESTAMP(6, 26, 38, 5, 1, 2016));
    noTrdRegTimestamps_0_0.set(TrdRegTimestamp_16);
    TrdRegTimestamps_NoTrdRegTimestamps_16.insert(TrdRegTimestamp_16.getString());
    FIX::TrdRegTimestampOrigin TrdRegTimestampOrigin_16("STRING_1132174428");
    noTrdRegTimestamps_0_0.set(TrdRegTimestampOrigin_16);
    TrdRegTimestamps_NoTrdRegTimestamps_16.insert(TrdRegTimestampOrigin_16.getString());
    FIX::TrdRegTimestampType TrdRegTimestampType_16(6);
    noTrdRegTimestamps_0_0.set(TrdRegTimestampType_16);
    TrdRegTimestamps_NoTrdRegTimestamps_16.insert(TrdRegTimestampType_16.getString());
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_16);

    msg.addGroup(noTrdRegTimestamps_0_0);
  }
  {
    FIX50SP2::OrderCancelReplaceRequest::NoTrdRegTimestamps noTrdRegTimestamps_0_1;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_17;
    FIX::DeskOrderHandlingInst DeskOrderHandlingInst_17("MULTIPLESTRINGVALUE_CNH");
    noTrdRegTimestamps_0_1.set(DeskOrderHandlingInst_17);
    TrdRegTimestamps_NoTrdRegTimestamps_17.insert(DeskOrderHandlingInst_17.getString());
    FIX::DeskType DeskType_17("STRING_IS");
    noTrdRegTimestamps_0_1.set(DeskType_17);
    TrdRegTimestamps_NoTrdRegTimestamps_17.insert(DeskType_17.getString());
    FIX::DeskTypeSource DeskTypeSource_17(1);
    noTrdRegTimestamps_0_1.set(DeskTypeSource_17);
    TrdRegTimestamps_NoTrdRegTimestamps_17.insert(DeskTypeSource_17.getString());
    FIX::TrdRegTimestamp TrdRegTimestamp_17(FIX::UTCTIMESTAMP(4, 5, 47, 22, 3, 2013));
    noTrdRegTimestamps_0_1.set(TrdRegTimestamp_17);
    TrdRegTimestamps_NoTrdRegTimestamps_17.insert(TrdRegTimestamp_17.getString());
    FIX::TrdRegTimestampOrigin TrdRegTimestampOrigin_17("STRING_207929921");
    noTrdRegTimestamps_0_1.set(TrdRegTimestampOrigin_17);
    TrdRegTimestamps_NoTrdRegTimestamps_17.insert(TrdRegTimestampOrigin_17.getString());
    FIX::TrdRegTimestampType TrdRegTimestampType_17(6);
    noTrdRegTimestamps_0_1.set(TrdRegTimestampType_17);
    TrdRegTimestamps_NoTrdRegTimestamps_17.insert(TrdRegTimestampType_17.getString());
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_17);

    msg.addGroup(noTrdRegTimestamps_0_1);
  }
  {
    FIX50SP2::OrderCancelReplaceRequest::NoTrdRegTimestamps noTrdRegTimestamps_0_2;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_18;
    FIX::DeskOrderHandlingInst DeskOrderHandlingInst_18("MULTIPLESTRINGVALUE_IOC");
    noTrdRegTimestamps_0_2.set(DeskOrderHandlingInst_18);
    TrdRegTimestamps_NoTrdRegTimestamps_18.insert(DeskOrderHandlingInst_18.getString());
    FIX::DeskType DeskType_18("STRING_IS");
    noTrdRegTimestamps_0_2.set(DeskType_18);
    TrdRegTimestamps_NoTrdRegTimestamps_18.insert(DeskType_18.getString());
    FIX::DeskTypeSource DeskTypeSource_18(1);
    noTrdRegTimestamps_0_2.set(DeskTypeSource_18);
    TrdRegTimestamps_NoTrdRegTimestamps_18.insert(DeskTypeSource_18.getString());
    FIX::TrdRegTimestamp TrdRegTimestamp_18(FIX::UTCTIMESTAMP(10, 18, 21, 5, 2, 2012));
    noTrdRegTimestamps_0_2.set(TrdRegTimestamp_18);
    TrdRegTimestamps_NoTrdRegTimestamps_18.insert(TrdRegTimestamp_18.getString());
    FIX::TrdRegTimestampOrigin TrdRegTimestampOrigin_18("STRING_43517427");
    noTrdRegTimestamps_0_2.set(TrdRegTimestampOrigin_18);
    TrdRegTimestamps_NoTrdRegTimestamps_18.insert(TrdRegTimestampOrigin_18.getString());
    FIX::TrdRegTimestampType TrdRegTimestampType_18(5);
    noTrdRegTimestamps_0_2.set(TrdRegTimestampType_18);
    TrdRegTimestamps_NoTrdRegTimestamps_18.insert(TrdRegTimestampType_18.getString());
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_18);

    msg.addGroup(noTrdRegTimestamps_0_2);
  }
  // TrdgSesGrp
  // Group TrdgSesGrp.NoTradingSessions
  {
    FIX50SP2::OrderCancelReplaceRequest::NoTradingSessions noTradingSessions_0_0;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_15;
    FIX::TradingSessionID TradingSessionID_53("STRING_4");
    noTradingSessions_0_0.set(TradingSessionID_53);
    TrdgSesGrp_NoTradingSessions_15.insert(TradingSessionID_53.getString());
    FIX::TradingSessionSubID TradingSessionSubID_53("STRING_1");
    noTradingSessions_0_0.set(TradingSessionSubID_53);
    TrdgSesGrp_NoTradingSessions_15.insert(TradingSessionSubID_53.getString());
    all_values.push_back(TrdgSesGrp_NoTradingSessions_15);

    msg.addGroup(noTradingSessions_0_0);
  }
  {
    FIX50SP2::OrderCancelReplaceRequest::NoTradingSessions noTradingSessions_0_1;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_16;
    FIX::TradingSessionID TradingSessionID_54("STRING_2");
    noTradingSessions_0_1.set(TradingSessionID_54);
    TrdgSesGrp_NoTradingSessions_16.insert(TradingSessionID_54.getString());
    FIX::TradingSessionSubID TradingSessionSubID_54("STRING_2");
    noTradingSessions_0_1.set(TradingSessionSubID_54);
    TrdgSesGrp_NoTradingSessions_16.insert(TradingSessionSubID_54.getString());
    all_values.push_back(TrdgSesGrp_NoTradingSessions_16);

    msg.addGroup(noTradingSessions_0_1);
  }
  // TriggeringInstruction
  multiset<string> TriggeringInstruction_7;
  FIX::TriggerAction TriggerAction_7('1');
  msg.set(TriggerAction_7);
  TriggeringInstruction_7.insert(TriggerAction_7.getString());
  FIX::TriggerNewPrice TriggerNewPrice_7;
  TriggerNewPrice_7.setString("15102875");
  msg.set(TriggerNewPrice_7);
  TriggeringInstruction_7.insert(TriggerNewPrice_7.getString());
  FIX::TriggerNewQty TriggerNewQty_7;
  TriggerNewQty_7.setString("5415886");
  msg.set(TriggerNewQty_7);
  TriggeringInstruction_7.insert(TriggerNewQty_7.getString());
  FIX::TriggerOrderType TriggerOrderType_7('2');
  msg.set(TriggerOrderType_7);
  TriggeringInstruction_7.insert(TriggerOrderType_7.getString());
  FIX::TriggerPrice TriggerPrice_7;
  TriggerPrice_7.setString("21364684");
  msg.set(TriggerPrice_7);
  TriggeringInstruction_7.insert(TriggerPrice_7.getString());
  FIX::TriggerPriceDirection TriggerPriceDirection_7('D');
  msg.set(TriggerPriceDirection_7);
  TriggeringInstruction_7.insert(TriggerPriceDirection_7.getString());
  FIX::TriggerPriceType TriggerPriceType_7('2');
  msg.set(TriggerPriceType_7);
  TriggeringInstruction_7.insert(TriggerPriceType_7.getString());
  FIX::TriggerPriceTypeScope TriggerPriceTypeScope_7('0');
  msg.set(TriggerPriceTypeScope_7);
  TriggeringInstruction_7.insert(TriggerPriceTypeScope_7.getString());
  FIX::TriggerSecurityDesc TriggerSecurityDesc_7("STRING_1593266984");
  msg.set(TriggerSecurityDesc_7);
  TriggeringInstruction_7.insert(TriggerSecurityDesc_7.getString());
  FIX::TriggerSecurityID TriggerSecurityID_7("STRING_196510891");
  msg.set(TriggerSecurityID_7);
  TriggeringInstruction_7.insert(TriggerSecurityID_7.getString());
  FIX::TriggerSecurityIDSource TriggerSecurityIDSource_7("STRING_2136302642");
  msg.set(TriggerSecurityIDSource_7);
  TriggeringInstruction_7.insert(TriggerSecurityIDSource_7.getString());
  FIX::TriggerSymbol TriggerSymbol_7("STRING_2118149788");
  msg.set(TriggerSymbol_7);
  TriggeringInstruction_7.insert(TriggerSymbol_7.getString());
  FIX::TriggerTradingSessionID TriggerTradingSessionID_7("STRING_404440813");
  msg.set(TriggerTradingSessionID_7);
  TriggeringInstruction_7.insert(TriggerTradingSessionID_7.getString());
  FIX::TriggerTradingSessionSubID TriggerTradingSessionSubID_7("STRING_1934066877");
  msg.set(TriggerTradingSessionSubID_7);
  TriggeringInstruction_7.insert(TriggerTradingSessionSubID_7.getString());
  FIX::TriggerType TriggerType_7('4');
  msg.set(TriggerType_7);
  TriggeringInstruction_7.insert(TriggerType_7.getString());
  all_values.push_back(TriggeringInstruction_7);

  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_69;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_69("DATA_1959331554");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_69);
    UnderlyingInstrument_69.insert(EncodedUnderlyingIssuer_69.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_69(489837142);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_69);
    UnderlyingInstrument_69.insert(EncodedUnderlyingIssuerLen_69.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_69("DATA_659101099");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_69);
    UnderlyingInstrument_69.insert(EncodedUnderlyingSecurityDesc_69.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_69(1580534824);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_69);
    UnderlyingInstrument_69.insert(EncodedUnderlyingSecurityDescLen_69.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_69;
    UnderlyingAdjustedQuantity_69.setString("13298855");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_69);
    UnderlyingInstrument_69.insert(UnderlyingAdjustedQuantity_69.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_69;
    UnderlyingAllocationPercent_69.setString("87.680000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_69);
    UnderlyingInstrument_69.insert(UnderlyingAllocationPercent_69.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_69;
    UnderlyingAttachmentPoint_69.setString("88.890000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_69);
    UnderlyingInstrument_69.insert(UnderlyingAttachmentPoint_69.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_69("STRING_753897593");
    noUnderlyings_0_0.set(UnderlyingCFICode_69);
    UnderlyingInstrument_69.insert(UnderlyingCFICode_69.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_69("STRING_755076195");
    noUnderlyings_0_0.set(UnderlyingCPProgram_69);
    UnderlyingInstrument_69.insert(UnderlyingCPProgram_69.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_69("STRING_1878702328");
    noUnderlyings_0_0.set(UnderlyingCPRegType_69);
    UnderlyingInstrument_69.insert(UnderlyingCPRegType_69.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_69;
    UnderlyingCapValue_69.setString("14005689");
    noUnderlyings_0_0.set(UnderlyingCapValue_69);
    UnderlyingInstrument_69.insert(UnderlyingCapValue_69.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_69;
    UnderlyingCashAmount_69.setString("7811663");
    noUnderlyings_0_0.set(UnderlyingCashAmount_69);
    UnderlyingInstrument_69.insert(UnderlyingCashAmount_69.getString());
    FIX::UnderlyingCashType UnderlyingCashType_69("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_69);
    UnderlyingInstrument_69.insert(UnderlyingCashType_69.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_69;
    UnderlyingContractMultiplier_69.setString("12898201");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_69);
    UnderlyingInstrument_69.insert(UnderlyingContractMultiplier_69.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_69(1375334726);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_69);
    UnderlyingInstrument_69.insert(UnderlyingContractMultiplierUnit_69.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_69("COUNTRY_158091668");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_69);
    UnderlyingInstrument_69.insert(UnderlyingCountryOfIssue_69.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_69("LOCALMKTDATE_652624073");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_69);
    UnderlyingInstrument_69.insert(UnderlyingCouponPaymentDate_69.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_69;
    UnderlyingCouponRate_69.setString("34.140000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_69);
    UnderlyingInstrument_69.insert(UnderlyingCouponRate_69.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_69("STRING_1939387801");
    noUnderlyings_0_0.set(UnderlyingCreditRating_69);
    UnderlyingInstrument_69.insert(UnderlyingCreditRating_69.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_69("CAN");
    noUnderlyings_0_0.set(UnderlyingCurrency_69);
    UnderlyingInstrument_69.insert(UnderlyingCurrency_69.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_69;
    UnderlyingCurrentValue_69.setString("14203080");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_69);
    UnderlyingInstrument_69.insert(UnderlyingCurrentValue_69.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_69;
    UnderlyingDetachmentPoint_69.setString("22.530000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_69);
    UnderlyingInstrument_69.insert(UnderlyingDetachmentPoint_69.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_69;
    UnderlyingDirtyPrice_69.setString("529651");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_69);
    UnderlyingInstrument_69.insert(UnderlyingDirtyPrice_69.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_69;
    UnderlyingEndPrice_69.setString("16168189");
    noUnderlyings_0_0.set(UnderlyingEndPrice_69);
    UnderlyingInstrument_69.insert(UnderlyingEndPrice_69.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_69;
    UnderlyingEndValue_69.setString("18852212");
    noUnderlyings_0_0.set(UnderlyingEndValue_69);
    UnderlyingInstrument_69.insert(UnderlyingEndValue_69.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_69(23631319);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_69);
    UnderlyingInstrument_69.insert(UnderlyingExerciseStyle_69.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_69;
    UnderlyingFXRate_69.setString("20212597");
    noUnderlyings_0_0.set(UnderlyingFXRate_69);
    UnderlyingInstrument_69.insert(UnderlyingFXRate_69.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_69('M');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_69);
    UnderlyingInstrument_69.insert(UnderlyingFXRateCalc_69.getString());
    FIX::UnderlyingFactor UnderlyingFactor_69;
    UnderlyingFactor_69.setString("16499472");
    noUnderlyings_0_0.set(UnderlyingFactor_69);
    UnderlyingInstrument_69.insert(UnderlyingFactor_69.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_69(1424186772);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_69);
    UnderlyingInstrument_69.insert(UnderlyingFlowScheduleType_69.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_69("STRING_1483652383");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_69);
    UnderlyingInstrument_69.insert(UnderlyingInstrRegistry_69.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_69("LOCALMKTDATE_2139784425");
    noUnderlyings_0_0.set(UnderlyingIssueDate_69);
    UnderlyingInstrument_69.insert(UnderlyingIssueDate_69.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_69("STRING_2083287871");
    noUnderlyings_0_0.set(UnderlyingIssuer_69);
    UnderlyingInstrument_69.insert(UnderlyingIssuer_69.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_69("STRING_916703559");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_69);
    UnderlyingInstrument_69.insert(UnderlyingLocaleOfIssue_69.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_69("LOCALMKTDATE_1322186300");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_69);
    UnderlyingInstrument_69.insert(UnderlyingMaturityDate_69.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_69("MONTHYEAR_647362991");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_69);
    UnderlyingInstrument_69.insert(UnderlyingMaturityMonthYear_69.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_69("TZTIMEONLY_815848800");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_69);
    UnderlyingInstrument_69.insert(UnderlyingMaturityTime_69.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_69;
    UnderlyingNotionalPercentageOutstanding_69.setString("38.930000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_69);
    UnderlyingInstrument_69.insert(UnderlyingNotionalPercentageOutstanding_69.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_69('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_69);
    UnderlyingInstrument_69.insert(UnderlyingOptAttribute_69.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_69;
    UnderlyingOriginalNotionalPercentageOutstanding_69.setString("74.800000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_69);
    UnderlyingInstrument_69.insert(UnderlyingOriginalNotionalPercentageOutstanding_69.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_69("STRING_1329169176");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_69);
    UnderlyingInstrument_69.insert(UnderlyingPriceUnitOfMeasure_69.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_69;
    UnderlyingPriceUnitOfMeasureQty_69.setString("361218");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_69);
    UnderlyingInstrument_69.insert(UnderlyingPriceUnitOfMeasureQty_69.getString());
    FIX::UnderlyingProduct UnderlyingProduct_69(2073119088);
    noUnderlyings_0_0.set(UnderlyingProduct_69);
    UnderlyingInstrument_69.insert(UnderlyingProduct_69.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_69(471505720);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_69);
    UnderlyingInstrument_69.insert(UnderlyingPutOrCall_69.getString());
    FIX::UnderlyingPx UnderlyingPx_69;
    UnderlyingPx_69.setString("14114566");
    noUnderlyings_0_0.set(UnderlyingPx_69);
    UnderlyingInstrument_69.insert(UnderlyingPx_69.getString());
    FIX::UnderlyingQty UnderlyingQty_69;
    UnderlyingQty_69.setString("837271");
    noUnderlyings_0_0.set(UnderlyingQty_69);
    UnderlyingInstrument_69.insert(UnderlyingQty_69.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_69("LOCALMKTDATE_1124129793");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_69);
    UnderlyingInstrument_69.insert(UnderlyingRedemptionDate_69.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_69("STRING_1180896383");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_69);
    UnderlyingInstrument_69.insert(UnderlyingRepoCollateralSecurityType_69.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_69;
    UnderlyingRepurchaseRate_69.setString("49.100000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_69);
    UnderlyingInstrument_69.insert(UnderlyingRepurchaseRate_69.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_69(1765738654);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_69);
    UnderlyingInstrument_69.insert(UnderlyingRepurchaseTerm_69.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_69("STRING_1788078226");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_69);
    UnderlyingInstrument_69.insert(UnderlyingRestructuringType_69.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_69("STRING_1295939281");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_69);
    UnderlyingInstrument_69.insert(UnderlyingSecurityDesc_69.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_69("EXCHANGE_1514657260");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_69);
    UnderlyingInstrument_69.insert(UnderlyingSecurityExchange_69.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_69("STRING_1841043406");
    noUnderlyings_0_0.set(UnderlyingSecurityID_69);
    UnderlyingInstrument_69.insert(UnderlyingSecurityID_69.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_69("STRING_765274543");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_69);
    UnderlyingInstrument_69.insert(UnderlyingSecurityIDSource_69.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_69("STRING_1252394860");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_69);
    UnderlyingInstrument_69.insert(UnderlyingSecuritySubType_69.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_69("STRING_1864674725");
    noUnderlyings_0_0.set(UnderlyingSecurityType_69);
    UnderlyingInstrument_69.insert(UnderlyingSecurityType_69.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_69("STRING_639050618");
    noUnderlyings_0_0.set(UnderlyingSeniority_69);
    UnderlyingInstrument_69.insert(UnderlyingSeniority_69.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_69("STRING_776715689");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_69);
    UnderlyingInstrument_69.insert(UnderlyingSettlMethod_69.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_69(5);
    noUnderlyings_0_0.set(UnderlyingSettlementType_69);
    UnderlyingInstrument_69.insert(UnderlyingSettlementType_69.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_69;
    UnderlyingStartValue_69.setString("20632373");
    noUnderlyings_0_0.set(UnderlyingStartValue_69);
    UnderlyingInstrument_69.insert(UnderlyingStartValue_69.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_69("STRING_112884425");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_69);
    UnderlyingInstrument_69.insert(UnderlyingStateOrProvinceOfIssue_69.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_69("EUR");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_69);
    UnderlyingInstrument_69.insert(UnderlyingStrikeCurrency_69.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_69;
    UnderlyingStrikePrice_69.setString("10295879");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_69);
    UnderlyingInstrument_69.insert(UnderlyingStrikePrice_69.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_69("STRING_534141789");
    noUnderlyings_0_0.set(UnderlyingSymbol_69);
    UnderlyingInstrument_69.insert(UnderlyingSymbol_69.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_69("STRING_498920956");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_69);
    UnderlyingInstrument_69.insert(UnderlyingSymbolSfx_69.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_69("STRING_1845436785");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_69);
    UnderlyingInstrument_69.insert(UnderlyingTimeUnit_69.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_69("STRING_462742035");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_69);
    UnderlyingInstrument_69.insert(UnderlyingUnitOfMeasure_69.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_69;
    UnderlyingUnitOfMeasureQty_69.setString("19013601");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_69);
    UnderlyingInstrument_69.insert(UnderlyingUnitOfMeasureQty_69.getString());
    all_values.push_back(UnderlyingInstrument_69);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_147;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_147("STRING_1791911211");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_147);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_147.insert(UnderlyingSecurityAltID_147.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_147("STRING_1937482035");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_147);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_147.insert(UnderlyingSecurityAltIDSource_147.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_147);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_133;
      FIX::UnderlyingStipType UnderlyingStipType_133("STRING_115933283");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_133);
      UnderlyingStipulations_NoUnderlyingStips_133.insert(UnderlyingStipType_133.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_133("STRING_1201455004");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_133);
      UnderlyingStipulations_NoUnderlyingStips_133.insert(UnderlyingStipValue_133.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_133);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_134;
      FIX::UnderlyingStipType UnderlyingStipType_134("STRING_254383167");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_134);
      UnderlyingStipulations_NoUnderlyingStips_134.insert(UnderlyingStipType_134.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_134("STRING_1240063076");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_134);
      UnderlyingStipulations_NoUnderlyingStips_134.insert(UnderlyingStipValue_134.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_134);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    {
      FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_135;
      FIX::UnderlyingStipType UnderlyingStipType_135("STRING_234867740");
      noUnderlyingStips_0_1_2.set(UnderlyingStipType_135);
      UnderlyingStipulations_NoUnderlyingStips_135.insert(UnderlyingStipType_135.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_135("STRING_130014429");
      noUnderlyingStips_0_1_2.set(UnderlyingStipValue_135);
      UnderlyingStipulations_NoUnderlyingStips_135.insert(UnderlyingStipValue_135.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_135);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_145;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_145("STRING_2022945966");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_145);
      UndlyInstrumentParties_NoUndlyInstrumentParties_145.insert(UnderlyingInstrumentPartyID_145.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_145('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_145);
      UndlyInstrumentParties_NoUndlyInstrumentParties_145.insert(UnderlyingInstrumentPartyIDSource_145.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_145(225491695);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_145);
      UndlyInstrumentParties_NoUndlyInstrumentParties_145.insert(UnderlyingInstrumentPartyRole_145.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_145);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_295;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_295("STRING_43744605");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_295);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_295.insert(UnderlyingInstrumentPartySubID_295.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_295(1477886555);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_295);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_295.insert(UnderlyingInstrumentPartySubIDType_295.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_295);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_296;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_296("STRING_1433696802");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_296);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_296.insert(UnderlyingInstrumentPartySubID_296.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_296(682795223);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_296);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_296.insert(UnderlyingInstrumentPartySubIDType_296.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_296);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_297;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_297("STRING_107118596");
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubID_297);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_297.insert(UnderlyingInstrumentPartySubID_297.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_297(653351514);
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubIDType_297);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_297.insert(UnderlyingInstrumentPartySubIDType_297.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_297);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_146;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_146("STRING_598548965");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_146);
      UndlyInstrumentParties_NoUndlyInstrumentParties_146.insert(UnderlyingInstrumentPartyID_146.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_146('2');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_146);
      UndlyInstrumentParties_NoUndlyInstrumentParties_146.insert(UnderlyingInstrumentPartyIDSource_146.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_146(2012790652);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_146);
      UndlyInstrumentParties_NoUndlyInstrumentParties_146.insert(UnderlyingInstrumentPartyRole_146.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_146);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_298;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_298("STRING_1249591006");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_298);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_298.insert(UnderlyingInstrumentPartySubID_298.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_298(399448793);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_298);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_298.insert(UnderlyingInstrumentPartySubIDType_298.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_298);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_299;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_299("STRING_949027887");
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubID_299);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_299.insert(UnderlyingInstrumentPartySubID_299.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_299(947544143);
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubIDType_299);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_299.insert(UnderlyingInstrumentPartySubIDType_299.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_299);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_147;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_147("STRING_862190828");
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyID_147);
      UndlyInstrumentParties_NoUndlyInstrumentParties_147.insert(UnderlyingInstrumentPartyID_147.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_147('7');
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyIDSource_147);
      UndlyInstrumentParties_NoUndlyInstrumentParties_147.insert(UnderlyingInstrumentPartyIDSource_147.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_147(1192564760);
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyRole_147);
      UndlyInstrumentParties_NoUndlyInstrumentParties_147.insert(UnderlyingInstrumentPartyRole_147.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_147);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_300;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_300("STRING_492902769");
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubID_300);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_300.insert(UnderlyingInstrumentPartySubID_300.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_300(1363220818);
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubIDType_300);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_300.insert(UnderlyingInstrumentPartySubIDType_300.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_300);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_70;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_70("DATA_622551674");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_70);
    UnderlyingInstrument_70.insert(EncodedUnderlyingIssuer_70.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_70(1694357774);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_70);
    UnderlyingInstrument_70.insert(EncodedUnderlyingIssuerLen_70.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_70("DATA_1617603985");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_70);
    UnderlyingInstrument_70.insert(EncodedUnderlyingSecurityDesc_70.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_70(1862614751);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_70);
    UnderlyingInstrument_70.insert(EncodedUnderlyingSecurityDescLen_70.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_70;
    UnderlyingAdjustedQuantity_70.setString("19292255");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_70);
    UnderlyingInstrument_70.insert(UnderlyingAdjustedQuantity_70.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_70;
    UnderlyingAllocationPercent_70.setString("84.150000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_70);
    UnderlyingInstrument_70.insert(UnderlyingAllocationPercent_70.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_70;
    UnderlyingAttachmentPoint_70.setString("91.860000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_70);
    UnderlyingInstrument_70.insert(UnderlyingAttachmentPoint_70.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_70("STRING_1804687832");
    noUnderlyings_0_1.set(UnderlyingCFICode_70);
    UnderlyingInstrument_70.insert(UnderlyingCFICode_70.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_70("STRING_1026088477");
    noUnderlyings_0_1.set(UnderlyingCPProgram_70);
    UnderlyingInstrument_70.insert(UnderlyingCPProgram_70.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_70("STRING_798940881");
    noUnderlyings_0_1.set(UnderlyingCPRegType_70);
    UnderlyingInstrument_70.insert(UnderlyingCPRegType_70.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_70;
    UnderlyingCapValue_70.setString("13737099");
    noUnderlyings_0_1.set(UnderlyingCapValue_70);
    UnderlyingInstrument_70.insert(UnderlyingCapValue_70.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_70;
    UnderlyingCashAmount_70.setString("10698330");
    noUnderlyings_0_1.set(UnderlyingCashAmount_70);
    UnderlyingInstrument_70.insert(UnderlyingCashAmount_70.getString());
    FIX::UnderlyingCashType UnderlyingCashType_70("STRING_FIXED");
    noUnderlyings_0_1.set(UnderlyingCashType_70);
    UnderlyingInstrument_70.insert(UnderlyingCashType_70.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_70;
    UnderlyingContractMultiplier_70.setString("6599230");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_70);
    UnderlyingInstrument_70.insert(UnderlyingContractMultiplier_70.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_70(1752628306);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_70);
    UnderlyingInstrument_70.insert(UnderlyingContractMultiplierUnit_70.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_70("COUNTRY_236462384");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_70);
    UnderlyingInstrument_70.insert(UnderlyingCountryOfIssue_70.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_70("LOCALMKTDATE_1313274577");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_70);
    UnderlyingInstrument_70.insert(UnderlyingCouponPaymentDate_70.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_70;
    UnderlyingCouponRate_70.setString("36.240000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_70);
    UnderlyingInstrument_70.insert(UnderlyingCouponRate_70.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_70("STRING_456465406");
    noUnderlyings_0_1.set(UnderlyingCreditRating_70);
    UnderlyingInstrument_70.insert(UnderlyingCreditRating_70.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_70("USD");
    noUnderlyings_0_1.set(UnderlyingCurrency_70);
    UnderlyingInstrument_70.insert(UnderlyingCurrency_70.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_70;
    UnderlyingCurrentValue_70.setString("17060564");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_70);
    UnderlyingInstrument_70.insert(UnderlyingCurrentValue_70.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_70;
    UnderlyingDetachmentPoint_70.setString("3.750000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_70);
    UnderlyingInstrument_70.insert(UnderlyingDetachmentPoint_70.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_70;
    UnderlyingDirtyPrice_70.setString("16028284");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_70);
    UnderlyingInstrument_70.insert(UnderlyingDirtyPrice_70.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_70;
    UnderlyingEndPrice_70.setString("5061169");
    noUnderlyings_0_1.set(UnderlyingEndPrice_70);
    UnderlyingInstrument_70.insert(UnderlyingEndPrice_70.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_70;
    UnderlyingEndValue_70.setString("2927375");
    noUnderlyings_0_1.set(UnderlyingEndValue_70);
    UnderlyingInstrument_70.insert(UnderlyingEndValue_70.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_70(158249176);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_70);
    UnderlyingInstrument_70.insert(UnderlyingExerciseStyle_70.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_70;
    UnderlyingFXRate_70.setString("16986816");
    noUnderlyings_0_1.set(UnderlyingFXRate_70);
    UnderlyingInstrument_70.insert(UnderlyingFXRate_70.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_70('M');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_70);
    UnderlyingInstrument_70.insert(UnderlyingFXRateCalc_70.getString());
    FIX::UnderlyingFactor UnderlyingFactor_70;
    UnderlyingFactor_70.setString("6511519");
    noUnderlyings_0_1.set(UnderlyingFactor_70);
    UnderlyingInstrument_70.insert(UnderlyingFactor_70.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_70(914418838);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_70);
    UnderlyingInstrument_70.insert(UnderlyingFlowScheduleType_70.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_70("STRING_1421907621");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_70);
    UnderlyingInstrument_70.insert(UnderlyingInstrRegistry_70.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_70("LOCALMKTDATE_198026071");
    noUnderlyings_0_1.set(UnderlyingIssueDate_70);
    UnderlyingInstrument_70.insert(UnderlyingIssueDate_70.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_70("STRING_384539175");
    noUnderlyings_0_1.set(UnderlyingIssuer_70);
    UnderlyingInstrument_70.insert(UnderlyingIssuer_70.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_70("STRING_1137038724");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_70);
    UnderlyingInstrument_70.insert(UnderlyingLocaleOfIssue_70.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_70("LOCALMKTDATE_2127251585");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_70);
    UnderlyingInstrument_70.insert(UnderlyingMaturityDate_70.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_70("MONTHYEAR_2132157590");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_70);
    UnderlyingInstrument_70.insert(UnderlyingMaturityMonthYear_70.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_70("TZTIMEONLY_1710487910");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_70);
    UnderlyingInstrument_70.insert(UnderlyingMaturityTime_70.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_70;
    UnderlyingNotionalPercentageOutstanding_70.setString("57.700000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_70);
    UnderlyingInstrument_70.insert(UnderlyingNotionalPercentageOutstanding_70.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_70('1');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_70);
    UnderlyingInstrument_70.insert(UnderlyingOptAttribute_70.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_70;
    UnderlyingOriginalNotionalPercentageOutstanding_70.setString("51.430000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_70);
    UnderlyingInstrument_70.insert(UnderlyingOriginalNotionalPercentageOutstanding_70.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_70("STRING_1010682031");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_70);
    UnderlyingInstrument_70.insert(UnderlyingPriceUnitOfMeasure_70.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_70;
    UnderlyingPriceUnitOfMeasureQty_70.setString("20805955");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_70);
    UnderlyingInstrument_70.insert(UnderlyingPriceUnitOfMeasureQty_70.getString());
    FIX::UnderlyingProduct UnderlyingProduct_70(491288931);
    noUnderlyings_0_1.set(UnderlyingProduct_70);
    UnderlyingInstrument_70.insert(UnderlyingProduct_70.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_70(1670605094);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_70);
    UnderlyingInstrument_70.insert(UnderlyingPutOrCall_70.getString());
    FIX::UnderlyingPx UnderlyingPx_70;
    UnderlyingPx_70.setString("16857401");
    noUnderlyings_0_1.set(UnderlyingPx_70);
    UnderlyingInstrument_70.insert(UnderlyingPx_70.getString());
    FIX::UnderlyingQty UnderlyingQty_70;
    UnderlyingQty_70.setString("7277513");
    noUnderlyings_0_1.set(UnderlyingQty_70);
    UnderlyingInstrument_70.insert(UnderlyingQty_70.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_70("LOCALMKTDATE_836396023");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_70);
    UnderlyingInstrument_70.insert(UnderlyingRedemptionDate_70.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_70("STRING_1889433785");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_70);
    UnderlyingInstrument_70.insert(UnderlyingRepoCollateralSecurityType_70.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_70;
    UnderlyingRepurchaseRate_70.setString("67.220000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_70);
    UnderlyingInstrument_70.insert(UnderlyingRepurchaseRate_70.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_70(2014977605);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_70);
    UnderlyingInstrument_70.insert(UnderlyingRepurchaseTerm_70.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_70("STRING_395750692");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_70);
    UnderlyingInstrument_70.insert(UnderlyingRestructuringType_70.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_70("STRING_742789486");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_70);
    UnderlyingInstrument_70.insert(UnderlyingSecurityDesc_70.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_70("EXCHANGE_1445524332");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_70);
    UnderlyingInstrument_70.insert(UnderlyingSecurityExchange_70.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_70("STRING_1998579133");
    noUnderlyings_0_1.set(UnderlyingSecurityID_70);
    UnderlyingInstrument_70.insert(UnderlyingSecurityID_70.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_70("STRING_1248906393");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_70);
    UnderlyingInstrument_70.insert(UnderlyingSecurityIDSource_70.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_70("STRING_1738261887");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_70);
    UnderlyingInstrument_70.insert(UnderlyingSecuritySubType_70.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_70("STRING_9344661");
    noUnderlyings_0_1.set(UnderlyingSecurityType_70);
    UnderlyingInstrument_70.insert(UnderlyingSecurityType_70.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_70("STRING_800104412");
    noUnderlyings_0_1.set(UnderlyingSeniority_70);
    UnderlyingInstrument_70.insert(UnderlyingSeniority_70.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_70("STRING_390134186");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_70);
    UnderlyingInstrument_70.insert(UnderlyingSettlMethod_70.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_70(5);
    noUnderlyings_0_1.set(UnderlyingSettlementType_70);
    UnderlyingInstrument_70.insert(UnderlyingSettlementType_70.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_70;
    UnderlyingStartValue_70.setString("17145232");
    noUnderlyings_0_1.set(UnderlyingStartValue_70);
    UnderlyingInstrument_70.insert(UnderlyingStartValue_70.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_70("STRING_1812041808");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_70);
    UnderlyingInstrument_70.insert(UnderlyingStateOrProvinceOfIssue_70.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_70("JPY");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_70);
    UnderlyingInstrument_70.insert(UnderlyingStrikeCurrency_70.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_70;
    UnderlyingStrikePrice_70.setString("8015968");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_70);
    UnderlyingInstrument_70.insert(UnderlyingStrikePrice_70.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_70("STRING_838290616");
    noUnderlyings_0_1.set(UnderlyingSymbol_70);
    UnderlyingInstrument_70.insert(UnderlyingSymbol_70.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_70("STRING_2083736368");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_70);
    UnderlyingInstrument_70.insert(UnderlyingSymbolSfx_70.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_70("STRING_364601147");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_70);
    UnderlyingInstrument_70.insert(UnderlyingTimeUnit_70.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_70("STRING_475262738");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_70);
    UnderlyingInstrument_70.insert(UnderlyingUnitOfMeasure_70.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_70;
    UnderlyingUnitOfMeasureQty_70.setString("9470151");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_70);
    UnderlyingInstrument_70.insert(UnderlyingUnitOfMeasureQty_70.getString());
    all_values.push_back(UnderlyingInstrument_70);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_148;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_148("STRING_1485944769");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_148);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_148.insert(UnderlyingSecurityAltID_148.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_148("STRING_880126995");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_148);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_148.insert(UnderlyingSecurityAltIDSource_148.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_148);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_149;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_149("STRING_1217835222");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_149);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_149.insert(UnderlyingSecurityAltID_149.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_149("STRING_1009066215");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_149);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_149.insert(UnderlyingSecurityAltIDSource_149.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_149);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_150;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_150("STRING_418383509");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltID_150);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_150.insert(UnderlyingSecurityAltID_150.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_150("STRING_1945586538");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltIDSource_150);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_150.insert(UnderlyingSecurityAltIDSource_150.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_150);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_136;
      FIX::UnderlyingStipType UnderlyingStipType_136("STRING_160333646");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_136);
      UnderlyingStipulations_NoUnderlyingStips_136.insert(UnderlyingStipType_136.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_136("STRING_982319612");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_136);
      UnderlyingStipulations_NoUnderlyingStips_136.insert(UnderlyingStipValue_136.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_136);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_137;
      FIX::UnderlyingStipType UnderlyingStipType_137("STRING_1712956195");
      noUnderlyingStips_1_1_1.set(UnderlyingStipType_137);
      UnderlyingStipulations_NoUnderlyingStips_137.insert(UnderlyingStipType_137.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_137("STRING_556084338");
      noUnderlyingStips_1_1_1.set(UnderlyingStipValue_137);
      UnderlyingStipulations_NoUnderlyingStips_137.insert(UnderlyingStipValue_137.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_137);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_148;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_148("STRING_1010996879");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_148);
      UndlyInstrumentParties_NoUndlyInstrumentParties_148.insert(UnderlyingInstrumentPartyID_148.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_148('4');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_148);
      UndlyInstrumentParties_NoUndlyInstrumentParties_148.insert(UnderlyingInstrumentPartyIDSource_148.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_148(826531843);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_148);
      UndlyInstrumentParties_NoUndlyInstrumentParties_148.insert(UnderlyingInstrumentPartyRole_148.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_148);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_301;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_301("STRING_416524485");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_301);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_301.insert(UnderlyingInstrumentPartySubID_301.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_301(1626636255);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_301);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_301.insert(UnderlyingInstrumentPartySubIDType_301.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_301);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_302;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_302("STRING_991909305");
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubID_302);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_302.insert(UnderlyingInstrumentPartySubID_302.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_302(1077021092);
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubIDType_302);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_302.insert(UnderlyingInstrumentPartySubIDType_302.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_302);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  {
    FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings noUnderlyings_0_2;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_71;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_71("DATA_1193675858");
    noUnderlyings_0_2.set(EncodedUnderlyingIssuer_71);
    UnderlyingInstrument_71.insert(EncodedUnderlyingIssuer_71.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_71(656467465);
    noUnderlyings_0_2.set(EncodedUnderlyingIssuerLen_71);
    UnderlyingInstrument_71.insert(EncodedUnderlyingIssuerLen_71.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_71("DATA_1935543771");
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDesc_71);
    UnderlyingInstrument_71.insert(EncodedUnderlyingSecurityDesc_71.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_71(1145254636);
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDescLen_71);
    UnderlyingInstrument_71.insert(EncodedUnderlyingSecurityDescLen_71.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_71;
    UnderlyingAdjustedQuantity_71.setString("14580643");
    noUnderlyings_0_2.set(UnderlyingAdjustedQuantity_71);
    UnderlyingInstrument_71.insert(UnderlyingAdjustedQuantity_71.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_71;
    UnderlyingAllocationPercent_71.setString("7.390000");
    noUnderlyings_0_2.set(UnderlyingAllocationPercent_71);
    UnderlyingInstrument_71.insert(UnderlyingAllocationPercent_71.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_71;
    UnderlyingAttachmentPoint_71.setString("73.560000");
    noUnderlyings_0_2.set(UnderlyingAttachmentPoint_71);
    UnderlyingInstrument_71.insert(UnderlyingAttachmentPoint_71.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_71("STRING_1822665497");
    noUnderlyings_0_2.set(UnderlyingCFICode_71);
    UnderlyingInstrument_71.insert(UnderlyingCFICode_71.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_71("STRING_1101613477");
    noUnderlyings_0_2.set(UnderlyingCPProgram_71);
    UnderlyingInstrument_71.insert(UnderlyingCPProgram_71.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_71("STRING_2028522497");
    noUnderlyings_0_2.set(UnderlyingCPRegType_71);
    UnderlyingInstrument_71.insert(UnderlyingCPRegType_71.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_71;
    UnderlyingCapValue_71.setString("4017281");
    noUnderlyings_0_2.set(UnderlyingCapValue_71);
    UnderlyingInstrument_71.insert(UnderlyingCapValue_71.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_71;
    UnderlyingCashAmount_71.setString("4400745");
    noUnderlyings_0_2.set(UnderlyingCashAmount_71);
    UnderlyingInstrument_71.insert(UnderlyingCashAmount_71.getString());
    FIX::UnderlyingCashType UnderlyingCashType_71("STRING_FIXED");
    noUnderlyings_0_2.set(UnderlyingCashType_71);
    UnderlyingInstrument_71.insert(UnderlyingCashType_71.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_71;
    UnderlyingContractMultiplier_71.setString("16195633");
    noUnderlyings_0_2.set(UnderlyingContractMultiplier_71);
    UnderlyingInstrument_71.insert(UnderlyingContractMultiplier_71.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_71(1449140813);
    noUnderlyings_0_2.set(UnderlyingContractMultiplierUnit_71);
    UnderlyingInstrument_71.insert(UnderlyingContractMultiplierUnit_71.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_71("COUNTRY_1179549353");
    noUnderlyings_0_2.set(UnderlyingCountryOfIssue_71);
    UnderlyingInstrument_71.insert(UnderlyingCountryOfIssue_71.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_71("LOCALMKTDATE_1417666251");
    noUnderlyings_0_2.set(UnderlyingCouponPaymentDate_71);
    UnderlyingInstrument_71.insert(UnderlyingCouponPaymentDate_71.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_71;
    UnderlyingCouponRate_71.setString("94.030000");
    noUnderlyings_0_2.set(UnderlyingCouponRate_71);
    UnderlyingInstrument_71.insert(UnderlyingCouponRate_71.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_71("STRING_1339883000");
    noUnderlyings_0_2.set(UnderlyingCreditRating_71);
    UnderlyingInstrument_71.insert(UnderlyingCreditRating_71.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_71("EUR");
    noUnderlyings_0_2.set(UnderlyingCurrency_71);
    UnderlyingInstrument_71.insert(UnderlyingCurrency_71.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_71;
    UnderlyingCurrentValue_71.setString("18959673");
    noUnderlyings_0_2.set(UnderlyingCurrentValue_71);
    UnderlyingInstrument_71.insert(UnderlyingCurrentValue_71.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_71;
    UnderlyingDetachmentPoint_71.setString("13.130000");
    noUnderlyings_0_2.set(UnderlyingDetachmentPoint_71);
    UnderlyingInstrument_71.insert(UnderlyingDetachmentPoint_71.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_71;
    UnderlyingDirtyPrice_71.setString("17235888");
    noUnderlyings_0_2.set(UnderlyingDirtyPrice_71);
    UnderlyingInstrument_71.insert(UnderlyingDirtyPrice_71.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_71;
    UnderlyingEndPrice_71.setString("1556635");
    noUnderlyings_0_2.set(UnderlyingEndPrice_71);
    UnderlyingInstrument_71.insert(UnderlyingEndPrice_71.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_71;
    UnderlyingEndValue_71.setString("6566595");
    noUnderlyings_0_2.set(UnderlyingEndValue_71);
    UnderlyingInstrument_71.insert(UnderlyingEndValue_71.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_71(177880301);
    noUnderlyings_0_2.set(UnderlyingExerciseStyle_71);
    UnderlyingInstrument_71.insert(UnderlyingExerciseStyle_71.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_71;
    UnderlyingFXRate_71.setString("5721880");
    noUnderlyings_0_2.set(UnderlyingFXRate_71);
    UnderlyingInstrument_71.insert(UnderlyingFXRate_71.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_71('D');
    noUnderlyings_0_2.set(UnderlyingFXRateCalc_71);
    UnderlyingInstrument_71.insert(UnderlyingFXRateCalc_71.getString());
    FIX::UnderlyingFactor UnderlyingFactor_71;
    UnderlyingFactor_71.setString("11697896");
    noUnderlyings_0_2.set(UnderlyingFactor_71);
    UnderlyingInstrument_71.insert(UnderlyingFactor_71.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_71(1649209092);
    noUnderlyings_0_2.set(UnderlyingFlowScheduleType_71);
    UnderlyingInstrument_71.insert(UnderlyingFlowScheduleType_71.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_71("STRING_1329487974");
    noUnderlyings_0_2.set(UnderlyingInstrRegistry_71);
    UnderlyingInstrument_71.insert(UnderlyingInstrRegistry_71.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_71("LOCALMKTDATE_1826257072");
    noUnderlyings_0_2.set(UnderlyingIssueDate_71);
    UnderlyingInstrument_71.insert(UnderlyingIssueDate_71.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_71("STRING_1437269215");
    noUnderlyings_0_2.set(UnderlyingIssuer_71);
    UnderlyingInstrument_71.insert(UnderlyingIssuer_71.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_71("STRING_327258962");
    noUnderlyings_0_2.set(UnderlyingLocaleOfIssue_71);
    UnderlyingInstrument_71.insert(UnderlyingLocaleOfIssue_71.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_71("LOCALMKTDATE_1136837774");
    noUnderlyings_0_2.set(UnderlyingMaturityDate_71);
    UnderlyingInstrument_71.insert(UnderlyingMaturityDate_71.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_71("MONTHYEAR_2063619954");
    noUnderlyings_0_2.set(UnderlyingMaturityMonthYear_71);
    UnderlyingInstrument_71.insert(UnderlyingMaturityMonthYear_71.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_71("TZTIMEONLY_1408766318");
    noUnderlyings_0_2.set(UnderlyingMaturityTime_71);
    UnderlyingInstrument_71.insert(UnderlyingMaturityTime_71.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_71;
    UnderlyingNotionalPercentageOutstanding_71.setString("96.230000");
    noUnderlyings_0_2.set(UnderlyingNotionalPercentageOutstanding_71);
    UnderlyingInstrument_71.insert(UnderlyingNotionalPercentageOutstanding_71.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_71('1');
    noUnderlyings_0_2.set(UnderlyingOptAttribute_71);
    UnderlyingInstrument_71.insert(UnderlyingOptAttribute_71.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_71;
    UnderlyingOriginalNotionalPercentageOutstanding_71.setString("51.670000");
    noUnderlyings_0_2.set(UnderlyingOriginalNotionalPercentageOutstanding_71);
    UnderlyingInstrument_71.insert(UnderlyingOriginalNotionalPercentageOutstanding_71.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_71("STRING_1213747763");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasure_71);
    UnderlyingInstrument_71.insert(UnderlyingPriceUnitOfMeasure_71.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_71;
    UnderlyingPriceUnitOfMeasureQty_71.setString("14578243");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasureQty_71);
    UnderlyingInstrument_71.insert(UnderlyingPriceUnitOfMeasureQty_71.getString());
    FIX::UnderlyingProduct UnderlyingProduct_71(2050971012);
    noUnderlyings_0_2.set(UnderlyingProduct_71);
    UnderlyingInstrument_71.insert(UnderlyingProduct_71.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_71(685827476);
    noUnderlyings_0_2.set(UnderlyingPutOrCall_71);
    UnderlyingInstrument_71.insert(UnderlyingPutOrCall_71.getString());
    FIX::UnderlyingPx UnderlyingPx_71;
    UnderlyingPx_71.setString("7594815");
    noUnderlyings_0_2.set(UnderlyingPx_71);
    UnderlyingInstrument_71.insert(UnderlyingPx_71.getString());
    FIX::UnderlyingQty UnderlyingQty_71;
    UnderlyingQty_71.setString("10830367");
    noUnderlyings_0_2.set(UnderlyingQty_71);
    UnderlyingInstrument_71.insert(UnderlyingQty_71.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_71("LOCALMKTDATE_2103493728");
    noUnderlyings_0_2.set(UnderlyingRedemptionDate_71);
    UnderlyingInstrument_71.insert(UnderlyingRedemptionDate_71.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_71("STRING_1906600950");
    noUnderlyings_0_2.set(UnderlyingRepoCollateralSecurityType_71);
    UnderlyingInstrument_71.insert(UnderlyingRepoCollateralSecurityType_71.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_71;
    UnderlyingRepurchaseRate_71.setString("60.690000");
    noUnderlyings_0_2.set(UnderlyingRepurchaseRate_71);
    UnderlyingInstrument_71.insert(UnderlyingRepurchaseRate_71.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_71(208512295);
    noUnderlyings_0_2.set(UnderlyingRepurchaseTerm_71);
    UnderlyingInstrument_71.insert(UnderlyingRepurchaseTerm_71.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_71("STRING_471709253");
    noUnderlyings_0_2.set(UnderlyingRestructuringType_71);
    UnderlyingInstrument_71.insert(UnderlyingRestructuringType_71.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_71("STRING_23919760");
    noUnderlyings_0_2.set(UnderlyingSecurityDesc_71);
    UnderlyingInstrument_71.insert(UnderlyingSecurityDesc_71.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_71("EXCHANGE_38639961");
    noUnderlyings_0_2.set(UnderlyingSecurityExchange_71);
    UnderlyingInstrument_71.insert(UnderlyingSecurityExchange_71.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_71("STRING_47814435");
    noUnderlyings_0_2.set(UnderlyingSecurityID_71);
    UnderlyingInstrument_71.insert(UnderlyingSecurityID_71.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_71("STRING_179583274");
    noUnderlyings_0_2.set(UnderlyingSecurityIDSource_71);
    UnderlyingInstrument_71.insert(UnderlyingSecurityIDSource_71.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_71("STRING_695299469");
    noUnderlyings_0_2.set(UnderlyingSecuritySubType_71);
    UnderlyingInstrument_71.insert(UnderlyingSecuritySubType_71.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_71("STRING_225694737");
    noUnderlyings_0_2.set(UnderlyingSecurityType_71);
    UnderlyingInstrument_71.insert(UnderlyingSecurityType_71.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_71("STRING_751771274");
    noUnderlyings_0_2.set(UnderlyingSeniority_71);
    UnderlyingInstrument_71.insert(UnderlyingSeniority_71.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_71("STRING_831111585");
    noUnderlyings_0_2.set(UnderlyingSettlMethod_71);
    UnderlyingInstrument_71.insert(UnderlyingSettlMethod_71.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_71(2);
    noUnderlyings_0_2.set(UnderlyingSettlementType_71);
    UnderlyingInstrument_71.insert(UnderlyingSettlementType_71.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_71;
    UnderlyingStartValue_71.setString("2534967");
    noUnderlyings_0_2.set(UnderlyingStartValue_71);
    UnderlyingInstrument_71.insert(UnderlyingStartValue_71.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_71("STRING_13115911");
    noUnderlyings_0_2.set(UnderlyingStateOrProvinceOfIssue_71);
    UnderlyingInstrument_71.insert(UnderlyingStateOrProvinceOfIssue_71.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_71("GBP");
    noUnderlyings_0_2.set(UnderlyingStrikeCurrency_71);
    UnderlyingInstrument_71.insert(UnderlyingStrikeCurrency_71.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_71;
    UnderlyingStrikePrice_71.setString("3403748");
    noUnderlyings_0_2.set(UnderlyingStrikePrice_71);
    UnderlyingInstrument_71.insert(UnderlyingStrikePrice_71.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_71("STRING_63611895");
    noUnderlyings_0_2.set(UnderlyingSymbol_71);
    UnderlyingInstrument_71.insert(UnderlyingSymbol_71.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_71("STRING_1606902241");
    noUnderlyings_0_2.set(UnderlyingSymbolSfx_71);
    UnderlyingInstrument_71.insert(UnderlyingSymbolSfx_71.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_71("STRING_1749141192");
    noUnderlyings_0_2.set(UnderlyingTimeUnit_71);
    UnderlyingInstrument_71.insert(UnderlyingTimeUnit_71.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_71("STRING_875631518");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasure_71);
    UnderlyingInstrument_71.insert(UnderlyingUnitOfMeasure_71.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_71;
    UnderlyingUnitOfMeasureQty_71.setString("4771683");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasureQty_71);
    UnderlyingInstrument_71.insert(UnderlyingUnitOfMeasureQty_71.getString());
    all_values.push_back(UnderlyingInstrument_71);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_151;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_151("STRING_2089379281");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltID_151);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_151.insert(UnderlyingSecurityAltID_151.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_151("STRING_1934992758");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltIDSource_151);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_151.insert(UnderlyingSecurityAltIDSource_151.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_151);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_138;
      FIX::UnderlyingStipType UnderlyingStipType_138("STRING_627723110");
      noUnderlyingStips_2_1_0.set(UnderlyingStipType_138);
      UnderlyingStipulations_NoUnderlyingStips_138.insert(UnderlyingStipType_138.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_138("STRING_546990656");
      noUnderlyingStips_2_1_0.set(UnderlyingStipValue_138);
      UnderlyingStipulations_NoUnderlyingStips_138.insert(UnderlyingStipValue_138.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_138);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    {
      FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_139;
      FIX::UnderlyingStipType UnderlyingStipType_139("STRING_1877986793");
      noUnderlyingStips_2_1_1.set(UnderlyingStipType_139);
      UnderlyingStipulations_NoUnderlyingStips_139.insert(UnderlyingStipType_139.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_139("STRING_583733190");
      noUnderlyingStips_2_1_1.set(UnderlyingStipValue_139);
      UnderlyingStipulations_NoUnderlyingStips_139.insert(UnderlyingStipValue_139.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_139);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_149;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_149("STRING_5939214");
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyID_149);
      UndlyInstrumentParties_NoUndlyInstrumentParties_149.insert(UnderlyingInstrumentPartyID_149.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_149('7');
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyIDSource_149);
      UndlyInstrumentParties_NoUndlyInstrumentParties_149.insert(UnderlyingInstrumentPartyIDSource_149.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_149(777817211);
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyRole_149);
      UndlyInstrumentParties_NoUndlyInstrumentParties_149.insert(UnderlyingInstrumentPartyRole_149.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_149);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_303;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_303("STRING_830885446");
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubID_303);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_303.insert(UnderlyingInstrumentPartySubID_303.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_303(825631647);
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubIDType_303);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_303.insert(UnderlyingInstrumentPartySubIDType_303.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_303);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_304;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_304("STRING_209442249");
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubID_304);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_304.insert(UnderlyingInstrumentPartySubID_304.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_304(1526184916);
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubIDType_304);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_304.insert(UnderlyingInstrumentPartySubIDType_304.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_304);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_1);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_0);
    }
    msg.addGroup(noUnderlyings_0_2);
  }
  // YieldData
  multiset<string> YieldData_15;
  FIX::Yield Yield_15;
  Yield_15.setString("63.840000");
  msg.set(Yield_15);
  YieldData_15.insert(Yield_15.getString());
  FIX::YieldCalcDate YieldCalcDate_15("LOCALMKTDATE_961213523");
  msg.set(YieldCalcDate_15);
  YieldData_15.insert(YieldCalcDate_15.getString());
  FIX::YieldRedemptionDate YieldRedemptionDate_15("LOCALMKTDATE_209812853");
  msg.set(YieldRedemptionDate_15);
  YieldData_15.insert(YieldRedemptionDate_15.getString());
  FIX::YieldRedemptionPrice YieldRedemptionPrice_15;
  YieldRedemptionPrice_15.setString("2993270");
  msg.set(YieldRedemptionPrice_15);
  YieldData_15.insert(YieldRedemptionPrice_15.getString());
  FIX::YieldRedemptionPriceType YieldRedemptionPriceType_15(1214710242);
  msg.set(YieldRedemptionPriceType_15);
  YieldData_15.insert(YieldRedemptionPriceType_15.getString());
  FIX::YieldType YieldType_15("STRING_INVERSEFLOATER");
  msg.set(YieldType_15);
  YieldData_15.insert(YieldType_15.getString());
  all_values.push_back(YieldData_15);


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
