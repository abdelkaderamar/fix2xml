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
  FIX::Account Account_24("STRING_1451368893");
  msg.set(Account_24);
  OrderCancelReplaceRequest_0.insert(Account_24.getString());
  FIX::AccountType AccountType_22(6);
  msg.set(AccountType_22);
  OrderCancelReplaceRequest_0.insert(AccountType_22.getString());
  FIX::AcctIDSource AcctIDSource_17(99);
  msg.set(AcctIDSource_17);
  OrderCancelReplaceRequest_0.insert(AcctIDSource_17.getString());
  FIX::AllocID AllocID_19("STRING_1940968149");
  msg.set(AllocID_19);
  OrderCancelReplaceRequest_0.insert(AllocID_19.getString());
  FIX::BookingType BookingType_18(2);
  msg.set(BookingType_18);
  OrderCancelReplaceRequest_0.insert(BookingType_18.getString());
  FIX::BookingUnit BookingUnit_12('2');
  msg.set(BookingUnit_12);
  OrderCancelReplaceRequest_0.insert(BookingUnit_12.getString());
  FIX::CancellationRights CancellationRights_7('Y');
  msg.set(CancellationRights_7);
  OrderCancelReplaceRequest_0.insert(CancellationRights_7.getString());
  FIX::CashMargin CashMargin_12('2');
  msg.set(CashMargin_12);
  OrderCancelReplaceRequest_0.insert(CashMargin_12.getString());
  FIX::ClOrdID ClOrdID_35("STRING_1211024751");
  msg.set(ClOrdID_35);
  OrderCancelReplaceRequest_0.insert(ClOrdID_35.getString());
  FIX::ClOrdLinkID ClOrdLinkID_15("STRING_1267102411");
  msg.set(ClOrdLinkID_15);
  OrderCancelReplaceRequest_0.insert(ClOrdLinkID_15.getString());
  FIX::ClearingFeeIndicator ClearingFeeIndicator_17("STRING_L");
  msg.set(ClearingFeeIndicator_17);
  OrderCancelReplaceRequest_0.insert(ClearingFeeIndicator_17.getString());
  FIX::ComplianceID ComplianceID_11("STRING_638133712");
  msg.set(ComplianceID_11);
  OrderCancelReplaceRequest_0.insert(ComplianceID_11.getString());
  FIX::CoveredOrUncovered CoveredOrUncovered_11(1);
  msg.set(CoveredOrUncovered_11);
  OrderCancelReplaceRequest_0.insert(CoveredOrUncovered_11.getString());
  FIX::Currency Currency_40("CAN");
  msg.set(Currency_40);
  OrderCancelReplaceRequest_0.insert(Currency_40.getString());
  FIX::CustDirectedOrder CustDirectedOrder_2(false);
  msg.set(CustDirectedOrder_2);
  OrderCancelReplaceRequest_0.insert(CustDirectedOrder_2.getString());
  FIX::CustOrderCapacity CustOrderCapacity_15(4);
  msg.set(CustOrderCapacity_15);
  OrderCancelReplaceRequest_0.insert(CustOrderCapacity_15.getString());
  FIX::CustOrderHandlingInst CustOrderHandlingInst_2("MULTIPLESTRINGVALUE_NH");
  msg.set(CustOrderHandlingInst_2);
  OrderCancelReplaceRequest_0.insert(CustOrderHandlingInst_2.getString());
  FIX::DayBookingInst DayBookingInst_12('2');
  msg.set(DayBookingInst_12);
  OrderCancelReplaceRequest_0.insert(DayBookingInst_12.getString());
  FIX::Designation Designation_9("STRING_772244574");
  msg.set(Designation_9);
  OrderCancelReplaceRequest_0.insert(Designation_9.getString());
  FIX::EffectiveTime EffectiveTime_9(FIX::UTCTIMESTAMP(1, 24, 31, 10, 92011));
  msg.set(EffectiveTime_9);
  OrderCancelReplaceRequest_0.insert(EffectiveTime_9.getString());
  FIX::EncodedText EncodedText_61("DATA_349111582");
  msg.set(EncodedText_61);
  OrderCancelReplaceRequest_0.insert(EncodedText_61.getString());
  FIX::EncodedTextLen EncodedTextLen_61(375456253);
  msg.set(EncodedTextLen_61);
  OrderCancelReplaceRequest_0.insert(EncodedTextLen_61.getString());
  FIX::ExDestination ExDestination_8("EXCHANGE_2040841761");
  msg.set(ExDestination_8);
  OrderCancelReplaceRequest_0.insert(ExDestination_8.getString());
  FIX::ExDestinationIDSource ExDestinationIDSource_8('B');
  msg.set(ExDestinationIDSource_8);
  OrderCancelReplaceRequest_0.insert(ExDestinationIDSource_8.getString());
  FIX::ExecInst ExecInst_12("MULTIPLECHARVALUE_Z");
  msg.set(ExecInst_12);
  OrderCancelReplaceRequest_0.insert(ExecInst_12.getString());
  FIX::ExpireDate ExpireDate_13("LOCALMKTDATE_902028780");
  msg.set(ExpireDate_13);
  OrderCancelReplaceRequest_0.insert(ExpireDate_13.getString());
  FIX::ExpireTime ExpireTime_14(FIX::UTCTIMESTAMP(0, 12, 44, 4, 82017));
  msg.set(ExpireTime_14);
  OrderCancelReplaceRequest_0.insert(ExpireTime_14.getString());
  FIX::ForexReq ForexReq_12(false);
  msg.set(ForexReq_12);
  OrderCancelReplaceRequest_0.insert(ForexReq_12.getString());
  FIX::GTBookingInst GTBookingInst_9(0);
  msg.set(GTBookingInst_9);
  OrderCancelReplaceRequest_0.insert(GTBookingInst_9.getString());
  FIX::HandlInst HandlInst_9('2');
  msg.set(HandlInst_9);
  OrderCancelReplaceRequest_0.insert(HandlInst_9.getString());
  FIX::ListID ListID_20("STRING_1367271465");
  msg.set(ListID_20);
  OrderCancelReplaceRequest_0.insert(ListID_20.getString());
  FIX::LocateReqd LocateReqd_8(false);
  msg.set(LocateReqd_8);
  OrderCancelReplaceRequest_0.insert(LocateReqd_8.getString());
  FIX::ManualOrderIndicator ManualOrderIndicator_2(false);
  msg.set(ManualOrderIndicator_2);
  OrderCancelReplaceRequest_0.insert(ManualOrderIndicator_2.getString());
  FIX::MatchIncrement MatchIncrement_9;
  MatchIncrement_9.setString("3093139");
  msg.set(MatchIncrement_9);
  OrderCancelReplaceRequest_0.insert(MatchIncrement_9.getString());
  FIX::MaxFloor MaxFloor_9;
  MaxFloor_9.setString("1414296");
  msg.set(MaxFloor_9);
  OrderCancelReplaceRequest_0.insert(MaxFloor_9.getString());
  FIX::MaxPriceLevels MaxPriceLevels_9(938059396);
  msg.set(MaxPriceLevels_9);
  OrderCancelReplaceRequest_0.insert(MaxPriceLevels_9.getString());
  FIX::MaxShow MaxShow_9;
  MaxShow_9.setString("13569807");
  msg.set(MaxShow_9);
  OrderCancelReplaceRequest_0.insert(MaxShow_9.getString());
  FIX::MinQty MinQty_12;
  MinQty_12.setString("9136742");
  msg.set(MinQty_12);
  OrderCancelReplaceRequest_0.insert(MinQty_12.getString());
  FIX::MoneyLaunderingStatus MoneyLaunderingStatus_7('3');
  msg.set(MoneyLaunderingStatus_7);
  OrderCancelReplaceRequest_0.insert(MoneyLaunderingStatus_7.getString());
  FIX::OrdType OrdType_45('7');
  msg.set(OrdType_45);
  OrderCancelReplaceRequest_0.insert(OrdType_45.getString());
  FIX::OrderCapacity OrderCapacity_21('G');
  msg.set(OrderCapacity_21);
  OrderCancelReplaceRequest_0.insert(OrderCapacity_21.getString());
  FIX::OrderHandlingInstSource OrderHandlingInstSource_2(1);
  msg.set(OrderHandlingInstSource_2);
  OrderCancelReplaceRequest_0.insert(OrderHandlingInstSource_2.getString());
  FIX::OrderID OrderID_27("STRING_1399090817");
  msg.set(OrderID_27);
  OrderCancelReplaceRequest_0.insert(OrderID_27.getString());
  FIX::OrderQty2 OrderQty2_8;
  OrderQty2_8.setString("2035355");
  msg.set(OrderQty2_8);
  OrderCancelReplaceRequest_0.insert(OrderQty2_8.getString());
  FIX::OrderRestrictions OrderRestrictions_18("MULTIPLECHARVALUE_E");
  msg.set(OrderRestrictions_18);
  OrderCancelReplaceRequest_0.insert(OrderRestrictions_18.getString());
  FIX::OrigClOrdID OrigClOrdID_10("STRING_1748202399");
  msg.set(OrigClOrdID_10);
  OrderCancelReplaceRequest_0.insert(OrigClOrdID_10.getString());
  FIX::OrigOrdModTime OrigOrdModTime_4(FIX::UTCTIMESTAMP(11, 1, 23, 7, 72011));
  msg.set(OrigOrdModTime_4);
  OrderCancelReplaceRequest_0.insert(OrigOrdModTime_4.getString());
  FIX::ParticipationRate ParticipationRate_9;
  ParticipationRate_9.setString("44.750000");
  msg.set(ParticipationRate_9);
  OrderCancelReplaceRequest_0.insert(ParticipationRate_9.getString());
  FIX::PositionEffect PositionEffect_15('R');
  msg.set(PositionEffect_15);
  OrderCancelReplaceRequest_0.insert(PositionEffect_15.getString());
  FIX::PreTradeAnonymity PreTradeAnonymity_12(true);
  msg.set(PreTradeAnonymity_12);
  OrderCancelReplaceRequest_0.insert(PreTradeAnonymity_12.getString());
  FIX::PreallocMethod PreallocMethod_12('0');
  msg.set(PreallocMethod_12);
  OrderCancelReplaceRequest_0.insert(PreallocMethod_12.getString());
  FIX::Price Price_19;
  Price_19.setString("12203764");
  msg.set(Price_19);
  OrderCancelReplaceRequest_0.insert(Price_19.getString());
  FIX::Price2 Price2_4;
  Price2_4.setString("1259694");
  msg.set(Price2_4);
  OrderCancelReplaceRequest_0.insert(Price2_4.getString());
  FIX::PriceProtectionScope PriceProtectionScope_9('1');
  msg.set(PriceProtectionScope_9);
  OrderCancelReplaceRequest_0.insert(PriceProtectionScope_9.getString());
  FIX::PriceType PriceType_31(16);
  msg.set(PriceType_31);
  OrderCancelReplaceRequest_0.insert(PriceType_31.getString());
  FIX::QtyType QtyType_24(1);
  msg.set(QtyType_24);
  OrderCancelReplaceRequest_0.insert(QtyType_24.getString());
  FIX::ReceivedDeptID ReceivedDeptID_2("STRING_810254646");
  msg.set(ReceivedDeptID_2);
  OrderCancelReplaceRequest_0.insert(ReceivedDeptID_2.getString());
  FIX::RegistID RegistID_7("STRING_1887339076");
  msg.set(RegistID_7);
  OrderCancelReplaceRequest_0.insert(RegistID_7.getString());
  FIX::SecondaryClOrdID SecondaryClOrdID_33("STRING_1802554933");
  msg.set(SecondaryClOrdID_33);
  OrderCancelReplaceRequest_0.insert(SecondaryClOrdID_33.getString());
  FIX::SettlCurrency SettlCurrency_21("USD");
  msg.set(SettlCurrency_21);
  OrderCancelReplaceRequest_0.insert(SettlCurrency_21.getString());
  FIX::SettlDate SettlDate_30("LOCALMKTDATE_1012052026");
  msg.set(SettlDate_30);
  OrderCancelReplaceRequest_0.insert(SettlDate_30.getString());
  FIX::SettlDate2 SettlDate2_8("LOCALMKTDATE_1865358533");
  msg.set(SettlDate2_8);
  OrderCancelReplaceRequest_0.insert(SettlDate2_8.getString());
  FIX::SettlType SettlType_21("STRING_B");
  msg.set(SettlType_21);
  OrderCancelReplaceRequest_0.insert(SettlType_21.getString());
  FIX::Side Side_31('9');
  msg.set(Side_31);
  OrderCancelReplaceRequest_0.insert(Side_31.getString());
  FIX::SolicitedFlag SolicitedFlag_12(true);
  msg.set(SolicitedFlag_12);
  OrderCancelReplaceRequest_0.insert(SolicitedFlag_12.getString());
  FIX::StopPx StopPx_9;
  StopPx_9.setString("4754088");
  msg.set(StopPx_9);
  OrderCancelReplaceRequest_0.insert(StopPx_9.getString());
  FIX::TargetStrategy TargetStrategy_9(2);
  msg.set(TargetStrategy_9);
  OrderCancelReplaceRequest_0.insert(TargetStrategy_9.getString());
  FIX::TargetStrategyParameters TargetStrategyParameters_9("STRING_145846043");
  msg.set(TargetStrategyParameters_9);
  OrderCancelReplaceRequest_0.insert(TargetStrategyParameters_9.getString());
  FIX::Text Text_61("STRING_1473067405");
  msg.set(Text_61);
  OrderCancelReplaceRequest_0.insert(Text_61.getString());
  FIX::TimeInForce TimeInForce_41('5');
  msg.set(TimeInForce_41);
  OrderCancelReplaceRequest_0.insert(TimeInForce_41.getString());
  FIX::TradeDate TradeDate_27("LOCALMKTDATE_724837807");
  msg.set(TradeDate_27);
  OrderCancelReplaceRequest_0.insert(TradeDate_27.getString());
  FIX::TradeOriginationDate TradeOriginationDate_19("LOCALMKTDATE_216600448");
  msg.set(TradeOriginationDate_19);
  OrderCancelReplaceRequest_0.insert(TradeOriginationDate_19.getString());
  FIX::TransactTime TransactTime_37(FIX::UTCTIMESTAMP(7, 39, 21, 18, 112004));
  msg.set(TransactTime_37);
  OrderCancelReplaceRequest_0.insert(TransactTime_37.getString());
  all_values.push_back(OrderCancelReplaceRequest_0);

  // CommissionData
  multiset<string> CommissionData_19;
  FIX::CommCurrency CommCurrency_19("GBP");
  msg.set(CommCurrency_19);
  CommissionData_19.insert(CommCurrency_19.getString());
  FIX::CommType CommType_19('5');
  msg.set(CommType_19);
  CommissionData_19.insert(CommType_19.getString());
  FIX::Commission Commission_19;
  Commission_19.setString("12090548");
  msg.set(Commission_19);
  CommissionData_19.insert(Commission_19.getString());
  FIX::FundRenewWaiv FundRenewWaiv_19('Y');
  msg.set(FundRenewWaiv_19);
  CommissionData_19.insert(FundRenewWaiv_19.getString());
  all_values.push_back(CommissionData_19);

  // DiscretionInstructions
  multiset<string> DiscretionInstructions_9;
  FIX::DiscretionInst DiscretionInst_9('1');
  msg.set(DiscretionInst_9);
  DiscretionInstructions_9.insert(DiscretionInst_9.getString());
  FIX::DiscretionLimitType DiscretionLimitType_9(2);
  msg.set(DiscretionLimitType_9);
  DiscretionInstructions_9.insert(DiscretionLimitType_9.getString());
  FIX::DiscretionMoveType DiscretionMoveType_9(1);
  msg.set(DiscretionMoveType_9);
  DiscretionInstructions_9.insert(DiscretionMoveType_9.getString());
  FIX::DiscretionOffsetType DiscretionOffsetType_9(1);
  msg.set(DiscretionOffsetType_9);
  DiscretionInstructions_9.insert(DiscretionOffsetType_9.getString());
  FIX::DiscretionOffsetValue DiscretionOffsetValue_9;
  DiscretionOffsetValue_9.setString("2098834");
  msg.set(DiscretionOffsetValue_9);
  DiscretionInstructions_9.insert(DiscretionOffsetValue_9.getString());
  FIX::DiscretionRoundDirection DiscretionRoundDirection_9(1);
  msg.set(DiscretionRoundDirection_9);
  DiscretionInstructions_9.insert(DiscretionRoundDirection_9.getString());
  FIX::DiscretionScope DiscretionScope_9(2);
  msg.set(DiscretionScope_9);
  DiscretionInstructions_9.insert(DiscretionScope_9.getString());
  all_values.push_back(DiscretionInstructions_9);

  // DisplayInstruction
  multiset<string> DisplayInstruction_9;
  FIX::DisplayHighQty DisplayHighQty_9;
  DisplayHighQty_9.setString("12219354");
  msg.set(DisplayHighQty_9);
  DisplayInstruction_9.insert(DisplayHighQty_9.getString());
  FIX::DisplayLowQty DisplayLowQty_9;
  DisplayLowQty_9.setString("16499542");
  msg.set(DisplayLowQty_9);
  DisplayInstruction_9.insert(DisplayLowQty_9.getString());
  FIX::DisplayMethod DisplayMethod_9('1');
  msg.set(DisplayMethod_9);
  DisplayInstruction_9.insert(DisplayMethod_9.getString());
  FIX::DisplayMinIncr DisplayMinIncr_9;
  DisplayMinIncr_9.setString("16172814");
  msg.set(DisplayMinIncr_9);
  DisplayInstruction_9.insert(DisplayMinIncr_9.getString());
  FIX::DisplayQty DisplayQty_9;
  DisplayQty_9.setString("15922647");
  msg.set(DisplayQty_9);
  DisplayInstruction_9.insert(DisplayQty_9.getString());
  FIX::DisplayWhen DisplayWhen_9('2');
  msg.set(DisplayWhen_9);
  DisplayInstruction_9.insert(DisplayWhen_9.getString());
  FIX::RefreshQty RefreshQty_9;
  RefreshQty_9.setString("12642347");
  msg.set(RefreshQty_9);
  DisplayInstruction_9.insert(RefreshQty_9.getString());
  FIX::SecondaryDisplayQty SecondaryDisplayQty_9;
  SecondaryDisplayQty_9.setString("17381108");
  msg.set(SecondaryDisplayQty_9);
  DisplayInstruction_9.insert(SecondaryDisplayQty_9.getString());
  all_values.push_back(DisplayInstruction_9);

  // FinancingDetails
  multiset<string> FinancingDetails_13;
  FIX::AgreementCurrency AgreementCurrency_13("GBP");
  msg.set(AgreementCurrency_13);
  FinancingDetails_13.insert(AgreementCurrency_13.getString());
  FIX::AgreementDate AgreementDate_13("LOCALMKTDATE_315464989");
  msg.set(AgreementDate_13);
  FinancingDetails_13.insert(AgreementDate_13.getString());
  FIX::AgreementDesc AgreementDesc_13("STRING_2101346077");
  msg.set(AgreementDesc_13);
  FinancingDetails_13.insert(AgreementDesc_13.getString());
  FIX::AgreementID AgreementID_13("STRING_2009312827");
  msg.set(AgreementID_13);
  FinancingDetails_13.insert(AgreementID_13.getString());
  FIX::DeliveryType DeliveryType_13(0);
  msg.set(DeliveryType_13);
  FinancingDetails_13.insert(DeliveryType_13.getString());
  FIX::EndDate EndDate_13("LOCALMKTDATE_1963508349");
  msg.set(EndDate_13);
  FinancingDetails_13.insert(EndDate_13.getString());
  FIX::MarginRatio MarginRatio_13;
  MarginRatio_13.setString("13.400000");
  msg.set(MarginRatio_13);
  FinancingDetails_13.insert(MarginRatio_13.getString());
  FIX::StartDate StartDate_13("LOCALMKTDATE_2012966395");
  msg.set(StartDate_13);
  FinancingDetails_13.insert(StartDate_13.getString());
  FIX::TerminationType TerminationType_13(4);
  msg.set(TerminationType_13);
  FinancingDetails_13.insert(TerminationType_13.getString());
  all_values.push_back(FinancingDetails_13);

  // Instrument
  multiset<string> Instrument_45;
  FIX::AttachmentPoint AttachmentPoint_45;
  AttachmentPoint_45.setString("23.800000");
  msg.set(AttachmentPoint_45);
  Instrument_45.insert(AttachmentPoint_45.getString());
  FIX::CFICode CFICode_45("STRING_948568077");
  msg.set(CFICode_45);
  Instrument_45.insert(CFICode_45.getString());
  FIX::CPProgram CPProgram_45(99);
  msg.set(CPProgram_45);
  Instrument_45.insert(CPProgram_45.getString());
  FIX::CPRegType CPRegType_45("STRING_1812476246");
  msg.set(CPRegType_45);
  Instrument_45.insert(CPRegType_45.getString());
  FIX::CapPrice CapPrice_45;
  CapPrice_45.setString("101392");
  msg.set(CapPrice_45);
  Instrument_45.insert(CapPrice_45.getString());
  FIX::ContractMultiplier ContractMultiplier_45;
  ContractMultiplier_45.setString("14191395");
  msg.set(ContractMultiplier_45);
  Instrument_45.insert(ContractMultiplier_45.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_45(2);
  msg.set(ContractMultiplierUnit_45);
  Instrument_45.insert(ContractMultiplierUnit_45.getString());
  FIX::ContractSettlMonth ContractSettlMonth_45("MONTHYEAR_564951382");
  msg.set(ContractSettlMonth_45);
  Instrument_45.insert(ContractSettlMonth_45.getString());
  FIX::CountryOfIssue CountryOfIssue_45("COUNTRY_252050981");
  msg.set(CountryOfIssue_45);
  Instrument_45.insert(CountryOfIssue_45.getString());
  FIX::CouponPaymentDate CouponPaymentDate_45("LOCALMKTDATE_1596344028");
  msg.set(CouponPaymentDate_45);
  Instrument_45.insert(CouponPaymentDate_45.getString());
  FIX::CouponRate CouponRate_45;
  CouponRate_45.setString("47.970000");
  msg.set(CouponRate_45);
  Instrument_45.insert(CouponRate_45.getString());
  FIX::CreditRating CreditRating_45("STRING_36646703");
  msg.set(CreditRating_45);
  Instrument_45.insert(CreditRating_45.getString());
  FIX::DatedDate DatedDate_45("LOCALMKTDATE_962378634");
  msg.set(DatedDate_45);
  Instrument_45.insert(DatedDate_45.getString());
  FIX::DetachmentPoint DetachmentPoint_45;
  DetachmentPoint_45.setString("2.390000");
  msg.set(DetachmentPoint_45);
  Instrument_45.insert(DetachmentPoint_45.getString());
  FIX::EncodedIssuer EncodedIssuer_45("DATA_1686600958");
  msg.set(EncodedIssuer_45);
  Instrument_45.insert(EncodedIssuer_45.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_45(898648030);
  msg.set(EncodedIssuerLen_45);
  Instrument_45.insert(EncodedIssuerLen_45.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_45("DATA_1466568089");
  msg.set(EncodedSecurityDesc_45);
  Instrument_45.insert(EncodedSecurityDesc_45.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_45(1131382097);
  msg.set(EncodedSecurityDescLen_45);
  Instrument_45.insert(EncodedSecurityDescLen_45.getString());
  FIX::ExerciseStyle ExerciseStyle_45(2);
  msg.set(ExerciseStyle_45);
  Instrument_45.insert(ExerciseStyle_45.getString());
  FIX::Factor Factor_45;
  Factor_45.setString("5833191");
  msg.set(Factor_45);
  Instrument_45.insert(Factor_45.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_45(false);
  msg.set(FlexProductEligibilityIndicator_45);
  Instrument_45.insert(FlexProductEligibilityIndicator_45.getString());
  FIX::FlexibleIndicator FlexibleIndicator_45(true);
  msg.set(FlexibleIndicator_45);
  Instrument_45.insert(FlexibleIndicator_45.getString());
  FIX::FloorPrice FloorPrice_45;
  FloorPrice_45.setString("10952258");
  msg.set(FloorPrice_45);
  Instrument_45.insert(FloorPrice_45.getString());
  FIX::FlowScheduleType FlowScheduleType_45(3);
  msg.set(FlowScheduleType_45);
  Instrument_45.insert(FlowScheduleType_45.getString());
  FIX::InstrRegistry InstrRegistry_45("STRING_1001450664");
  msg.set(InstrRegistry_45);
  Instrument_45.insert(InstrRegistry_45.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_45('9');
  msg.set(InstrmtAssignmentMethod_45);
  Instrument_45.insert(InstrmtAssignmentMethod_45.getString());
  FIX::InterestAccrualDate InterestAccrualDate_45("LOCALMKTDATE_188626681");
  msg.set(InterestAccrualDate_45);
  Instrument_45.insert(InterestAccrualDate_45.getString());
  FIX::IssueDate IssueDate_45("LOCALMKTDATE_817475365");
  msg.set(IssueDate_45);
  Instrument_45.insert(IssueDate_45.getString());
  FIX::Issuer Issuer_45("STRING_1910336384");
  msg.set(Issuer_45);
  Instrument_45.insert(Issuer_45.getString());
  FIX::ListMethod ListMethod_45(0);
  msg.set(ListMethod_45);
  Instrument_45.insert(ListMethod_45.getString());
  FIX::LocaleOfIssue LocaleOfIssue_45("STRING_671056812");
  msg.set(LocaleOfIssue_45);
  Instrument_45.insert(LocaleOfIssue_45.getString());
  FIX::MaturityDate MaturityDate_45("LOCALMKTDATE_1609285116");
  msg.set(MaturityDate_45);
  Instrument_45.insert(MaturityDate_45.getString());
  FIX::MaturityMonthYear MaturityMonthYear_45("MONTHYEAR_1002677505");
  msg.set(MaturityMonthYear_45);
  Instrument_45.insert(MaturityMonthYear_45.getString());
  FIX::MaturityTime MaturityTime_45("TZTIMEONLY_1920055952");
  msg.set(MaturityTime_45);
  Instrument_45.insert(MaturityTime_45.getString());
  FIX::MinPriceIncrement MinPriceIncrement_45;
  MinPriceIncrement_45.setString("12742777");
  msg.set(MinPriceIncrement_45);
  Instrument_45.insert(MinPriceIncrement_45.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_45;
  MinPriceIncrementAmount_45.setString("10128167");
  msg.set(MinPriceIncrementAmount_45);
  Instrument_45.insert(MinPriceIncrementAmount_45.getString());
  FIX::NTPositionLimit NTPositionLimit_45(1191711866);
  msg.set(NTPositionLimit_45);
  Instrument_45.insert(NTPositionLimit_45.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_45;
  NotionalPercentageOutstanding_45.setString("83.140000");
  msg.set(NotionalPercentageOutstanding_45);
  Instrument_45.insert(NotionalPercentageOutstanding_45.getString());
  FIX::OptAttribute OptAttribute_45('1');
  msg.set(OptAttribute_45);
  Instrument_45.insert(OptAttribute_45.getString());
  FIX::OptPayoutAmount OptPayoutAmount_45;
  OptPayoutAmount_45.setString("14437628");
  msg.set(OptPayoutAmount_45);
  Instrument_45.insert(OptPayoutAmount_45.getString());
  FIX::OptPayoutType OptPayoutType_45(2);
  msg.set(OptPayoutType_45);
  Instrument_45.insert(OptPayoutType_45.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_45;
  OriginalNotionalPercentageOutstanding_45.setString("92.880000");
  msg.set(OriginalNotionalPercentageOutstanding_45);
  Instrument_45.insert(OriginalNotionalPercentageOutstanding_45.getString());
  FIX::Pool Pool_45("STRING_1480409550");
  msg.set(Pool_45);
  Instrument_45.insert(Pool_45.getString());
  FIX::PositionLimit PositionLimit_45(298773680);
  msg.set(PositionLimit_45);
  Instrument_45.insert(PositionLimit_45.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_45("STRING_PCTPAR");
  msg.set(PriceQuoteMethod_45);
  Instrument_45.insert(PriceQuoteMethod_45.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_45("STRING_1019526860");
  msg.set(PriceUnitOfMeasure_45);
  Instrument_45.insert(PriceUnitOfMeasure_45.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_45;
  PriceUnitOfMeasureQty_45.setString("11974217");
  msg.set(PriceUnitOfMeasureQty_45);
  Instrument_45.insert(PriceUnitOfMeasureQty_45.getString());
  FIX::Product Product_47(8);
  msg.set(Product_47);
  Instrument_45.insert(Product_47.getString());
  FIX::ProductComplex ProductComplex_45("STRING_3425309");
  msg.set(ProductComplex_45);
  Instrument_45.insert(ProductComplex_45.getString());
  FIX::PutOrCall PutOrCall_45(0);
  msg.set(PutOrCall_45);
  Instrument_45.insert(PutOrCall_45.getString());
  FIX::RedemptionDate RedemptionDate_45("LOCALMKTDATE_2104293133");
  msg.set(RedemptionDate_45);
  Instrument_45.insert(RedemptionDate_45.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_45("STRING_725434588");
  msg.set(RepoCollateralSecurityType_45);
  Instrument_45.insert(RepoCollateralSecurityType_45.getString());
  FIX::RepurchaseRate RepurchaseRate_45;
  RepurchaseRate_45.setString("25.500000");
  msg.set(RepurchaseRate_45);
  Instrument_45.insert(RepurchaseRate_45.getString());
  FIX::RepurchaseTerm RepurchaseTerm_45(1052035350);
  msg.set(RepurchaseTerm_45);
  Instrument_45.insert(RepurchaseTerm_45.getString());
  FIX::RestructuringType RestructuringType_45("STRING_FR");
  msg.set(RestructuringType_45);
  Instrument_45.insert(RestructuringType_45.getString());
  FIX::SecurityDesc SecurityDesc_45("STRING_261819566");
  msg.set(SecurityDesc_45);
  Instrument_45.insert(SecurityDesc_45.getString());
  FIX::SecurityExchange SecurityExchange_45("EXCHANGE_2009090394");
  msg.set(SecurityExchange_45);
  Instrument_45.insert(SecurityExchange_45.getString());
  FIX::SecurityGroup SecurityGroup_45("STRING_1951535537");
  msg.set(SecurityGroup_45);
  Instrument_45.insert(SecurityGroup_45.getString());
  FIX::SecurityID SecurityID_45("STRING_1079294931");
  msg.set(SecurityID_45);
  Instrument_45.insert(SecurityID_45.getString());
  FIX::SecurityIDSource SecurityIDSource_45("STRING_D");
  msg.set(SecurityIDSource_45);
  Instrument_45.insert(SecurityIDSource_45.getString());
  FIX::SecurityStatus SecurityStatus_45("STRING_2");
  msg.set(SecurityStatus_45);
  Instrument_45.insert(SecurityStatus_45.getString());
  FIX::SecuritySubType SecuritySubType_46("STRING_1750351744");
  msg.set(SecuritySubType_46);
  Instrument_45.insert(SecuritySubType_46.getString());
  FIX::SecurityType SecurityType_47("STRING_CMBS");
  msg.set(SecurityType_47);
  Instrument_45.insert(SecurityType_47.getString());
  FIX::Seniority Seniority_45("STRING_SR");
  msg.set(Seniority_45);
  Instrument_45.insert(Seniority_45.getString());
  FIX::SettlMethod SettlMethod_45('C');
  msg.set(SettlMethod_45);
  Instrument_45.insert(SettlMethod_45.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_45("STRING_360538664");
  msg.set(SettleOnOpenFlag_45);
  Instrument_45.insert(SettleOnOpenFlag_45.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_45("STRING_1873655580");
  msg.set(StateOrProvinceOfIssue_45);
  Instrument_45.insert(StateOrProvinceOfIssue_45.getString());
  FIX::StrikeCurrency StrikeCurrency_45("USD");
  msg.set(StrikeCurrency_45);
  Instrument_45.insert(StrikeCurrency_45.getString());
  FIX::StrikeMultiplier StrikeMultiplier_45;
  StrikeMultiplier_45.setString("13039400");
  msg.set(StrikeMultiplier_45);
  Instrument_45.insert(StrikeMultiplier_45.getString());
  FIX::StrikePrice StrikePrice_45;
  StrikePrice_45.setString("20109151");
  msg.set(StrikePrice_45);
  Instrument_45.insert(StrikePrice_45.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_45(1);
  msg.set(StrikePriceBoundaryMethod_45);
  Instrument_45.insert(StrikePriceBoundaryMethod_45.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_45;
  StrikePriceBoundaryPrecision_45.setString("93.590000");
  msg.set(StrikePriceBoundaryPrecision_45);
  Instrument_45.insert(StrikePriceBoundaryPrecision_45.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_45(4);
  msg.set(StrikePriceDeterminationMethod_45);
  Instrument_45.insert(StrikePriceDeterminationMethod_45.getString());
  FIX::StrikeValue StrikeValue_45;
  StrikeValue_45.setString("20307257");
  msg.set(StrikeValue_45);
  Instrument_45.insert(StrikeValue_45.getString());
  FIX::Symbol Symbol_45("STRING_1563465239");
  msg.set(Symbol_45);
  Instrument_45.insert(Symbol_45.getString());
  FIX::SymbolSfx SymbolSfx_45("STRING_WI");
  msg.set(SymbolSfx_45);
  Instrument_45.insert(SymbolSfx_45.getString());
  FIX::TimeUnit TimeUnit_45("STRING_S");
  msg.set(TimeUnit_45);
  Instrument_45.insert(TimeUnit_45.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_45(4);
  msg.set(UnderlyingPriceDeterminationMethod_45);
  Instrument_45.insert(UnderlyingPriceDeterminationMethod_45.getString());
  FIX::UnitOfMeasure UnitOfMeasure_45("STRING_Bbl");
  msg.set(UnitOfMeasure_45);
  Instrument_45.insert(UnitOfMeasure_45.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_45;
  UnitOfMeasureQty_45.setString("14409280");
  msg.set(UnitOfMeasureQty_45);
  Instrument_45.insert(UnitOfMeasureQty_45.getString());
  FIX::ValuationMethod ValuationMethod_45("STRING_CDSD");
  msg.set(ValuationMethod_45);
  Instrument_45.insert(ValuationMethod_45.getString());
  all_values.push_back(Instrument_45);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::OrderCancelReplaceRequest::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_90;
    FIX::ComplexEventCondition ComplexEventCondition_90(1);
    noComplexEvents_0_0.set(ComplexEventCondition_90);
    ComplexEvents_NoComplexEvents_90.insert(ComplexEventCondition_90.getString());
    FIX::ComplexEventPrice ComplexEventPrice_90;
    ComplexEventPrice_90.setString("19458003");
    noComplexEvents_0_0.set(ComplexEventPrice_90);
    ComplexEvents_NoComplexEvents_90.insert(ComplexEventPrice_90.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_90(4);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_90);
    ComplexEvents_NoComplexEvents_90.insert(ComplexEventPriceBoundaryMethod_90.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_90;
    ComplexEventPriceBoundaryPrecision_90.setString("65.530000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_90);
    ComplexEvents_NoComplexEvents_90.insert(ComplexEventPriceBoundaryPrecision_90.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_90(3);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_90);
    ComplexEvents_NoComplexEvents_90.insert(ComplexEventPriceTimeType_90.getString());
    FIX::ComplexEventType ComplexEventType_90(7);
    noComplexEvents_0_0.set(ComplexEventType_90);
    ComplexEvents_NoComplexEvents_90.insert(ComplexEventType_90.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_90;
    ComplexOptPayoutAmount_90.setString("20424114");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_90);
    ComplexEvents_NoComplexEvents_90.insert(ComplexOptPayoutAmount_90.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_90);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_190;
      FIX::ComplexEventEndDate ComplexEventEndDate_190(FIX::UTCTIMESTAMP(20, 32, 23, 1, 62003));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_190);
      ComplexEventDates_NoComplexEventDates_190.insert(ComplexEventEndDate_190.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_190(FIX::UTCTIMESTAMP(23, 46, 13, 20, 102002));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_190);
      ComplexEventDates_NoComplexEventDates_190.insert(ComplexEventStartDate_190.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_190);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_375;
        FIX::ComplexEventEndTime ComplexEventEndTime_375(FIX::UTCTIMEONLY(12, 50, 48));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_375);
        ComplexEventTimes_NoComplexEventTimes_375.insert(ComplexEventEndTime_375.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_375(FIX::UTCTIMEONLY(22, 44, 9));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_375);
        ComplexEventTimes_NoComplexEventTimes_375.insert(ComplexEventStartTime_375.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_375);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::OrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_376;
        FIX::ComplexEventEndTime ComplexEventEndTime_376(FIX::UTCTIMEONLY(11, 34, 17));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_376);
        ComplexEventTimes_NoComplexEventTimes_376.insert(ComplexEventEndTime_376.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_376(FIX::UTCTIMEONLY(4, 34, 6));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_376);
        ComplexEventTimes_NoComplexEventTimes_376.insert(ComplexEventStartTime_376.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_376);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::OrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_377;
        FIX::ComplexEventEndTime ComplexEventEndTime_377(FIX::UTCTIMEONLY(18, 38, 19));
        noComplexEventTimes_0_0_2_2.set(ComplexEventEndTime_377);
        ComplexEventTimes_NoComplexEventTimes_377.insert(ComplexEventEndTime_377.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_377(FIX::UTCTIMEONLY(23, 26, 47));
        noComplexEventTimes_0_0_2_2.set(ComplexEventStartTime_377);
        ComplexEventTimes_NoComplexEventTimes_377.insert(ComplexEventStartTime_377.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_377);

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
    multiset<string> EvntGrp_NoEvents_88;
    FIX::EventDate EventDate_88("LOCALMKTDATE_737869144");
    noEvents_0_0.set(EventDate_88);
    EvntGrp_NoEvents_88.insert(EventDate_88.getString());
    FIX::EventPx EventPx_88;
    EventPx_88.setString("17906241");
    noEvents_0_0.set(EventPx_88);
    EvntGrp_NoEvents_88.insert(EventPx_88.getString());
    FIX::EventText EventText_88("STRING_404008511");
    noEvents_0_0.set(EventText_88);
    EvntGrp_NoEvents_88.insert(EventText_88.getString());
    FIX::EventTime EventTime_88(FIX::UTCTIMESTAMP(0, 13, 42, 0, 82016));
    noEvents_0_0.set(EventTime_88);
    EvntGrp_NoEvents_88.insert(EventTime_88.getString());
    FIX::EventType EventType_88(18);
    noEvents_0_0.set(EventType_88);
    EvntGrp_NoEvents_88.insert(EventType_88.getString());
    all_values.push_back(EvntGrp_NoEvents_88);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::OrderCancelReplaceRequest::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_89;
    FIX::EventDate EventDate_89("LOCALMKTDATE_1494646841");
    noEvents_0_1.set(EventDate_89);
    EvntGrp_NoEvents_89.insert(EventDate_89.getString());
    FIX::EventPx EventPx_89;
    EventPx_89.setString("12106754");
    noEvents_0_1.set(EventPx_89);
    EvntGrp_NoEvents_89.insert(EventPx_89.getString());
    FIX::EventText EventText_89("STRING_2117317066");
    noEvents_0_1.set(EventText_89);
    EvntGrp_NoEvents_89.insert(EventText_89.getString());
    FIX::EventTime EventTime_89(FIX::UTCTIMESTAMP(18, 12, 43, 17, 52017));
    noEvents_0_1.set(EventTime_89);
    EvntGrp_NoEvents_89.insert(EventTime_89.getString());
    FIX::EventType EventType_89(99);
    noEvents_0_1.set(EventType_89);
    EvntGrp_NoEvents_89.insert(EventType_89.getString());
    all_values.push_back(EvntGrp_NoEvents_89);

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::OrderCancelReplaceRequest::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_90;
    FIX::EventDate EventDate_90("LOCALMKTDATE_94028717");
    noEvents_0_2.set(EventDate_90);
    EvntGrp_NoEvents_90.insert(EventDate_90.getString());
    FIX::EventPx EventPx_90;
    EventPx_90.setString("17611342");
    noEvents_0_2.set(EventPx_90);
    EvntGrp_NoEvents_90.insert(EventPx_90.getString());
    FIX::EventText EventText_90("STRING_767116930");
    noEvents_0_2.set(EventText_90);
    EvntGrp_NoEvents_90.insert(EventText_90.getString());
    FIX::EventTime EventTime_90(FIX::UTCTIMESTAMP(11, 57, 55, 18, 12017));
    noEvents_0_2.set(EventTime_90);
    EvntGrp_NoEvents_90.insert(EventTime_90.getString());
    FIX::EventType EventType_90(3);
    noEvents_0_2.set(EventType_90);
    EvntGrp_NoEvents_90.insert(EventType_90.getString());
    all_values.push_back(EvntGrp_NoEvents_90);

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::OrderCancelReplaceRequest::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_83;
    FIX::InstrumentPartyID InstrumentPartyID_83("STRING_1631837993");
    noInstrumentParties_0_0.set(InstrumentPartyID_83);
    InstrumentParties_NoInstrumentParties_83.insert(InstrumentPartyID_83.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_83('7');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_83);
    InstrumentParties_NoInstrumentParties_83.insert(InstrumentPartyIDSource_83.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_83(428445521);
    noInstrumentParties_0_0.set(InstrumentPartyRole_83);
    InstrumentParties_NoInstrumentParties_83.insert(InstrumentPartyRole_83.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_83);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::OrderCancelReplaceRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_166;
      FIX::InstrumentPartySubID InstrumentPartySubID_166("STRING_1940191935");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_166);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_166.insert(InstrumentPartySubID_166.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_166(954534157);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_166);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_166.insert(InstrumentPartySubIDType_166.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_166);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::OrderCancelReplaceRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_167;
      FIX::InstrumentPartySubID InstrumentPartySubID_167("STRING_1077087410");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_167);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_167.insert(InstrumentPartySubID_167.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_167(2029910032);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_167);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_167.insert(InstrumentPartySubIDType_167.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_167);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::OrderCancelReplaceRequest::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_86;
    FIX::SecurityAltID SecurityAltID_86("STRING_140279209");
    noSecurityAltID_0_0.set(SecurityAltID_86);
    SecAltIDGrp_NoSecurityAltID_86.insert(SecurityAltID_86.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_86("STRING_1999743450");
    noSecurityAltID_0_0.set(SecurityAltIDSource_86);
    SecAltIDGrp_NoSecurityAltID_86.insert(SecurityAltIDSource_86.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_86);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::OrderCancelReplaceRequest::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_87;
    FIX::SecurityAltID SecurityAltID_87("STRING_1318715736");
    noSecurityAltID_0_1.set(SecurityAltID_87);
    SecAltIDGrp_NoSecurityAltID_87.insert(SecurityAltID_87.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_87("STRING_1723399027");
    noSecurityAltID_0_1.set(SecurityAltIDSource_87);
    SecAltIDGrp_NoSecurityAltID_87.insert(SecurityAltIDSource_87.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_87);

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_90;
  FIX::SecurityXML SecurityXML_91("XMLDATA_262377874");
  msg.set(SecurityXML_91);
  FIX::SecurityXMLLen SecurityXMLLen_45(673738572);
  msg.set(SecurityXMLLen_45);
  FIX::SecurityXMLSchema SecurityXMLSchema_45("STRING_1191403061");
  msg.set(SecurityXMLSchema_45);
  SecurityXML_90.insert(SecurityXMLSchema_45.getString());
  all_values.push_back(SecurityXML_90);

  // OrderQtyData
  multiset<string> OrderQtyData_17;
  FIX::CashOrderQty CashOrderQty_17;
  CashOrderQty_17.setString("14770018");
  msg.set(CashOrderQty_17);
  OrderQtyData_17.insert(CashOrderQty_17.getString());
  FIX::OrderPercent OrderPercent_17;
  OrderPercent_17.setString("73.410000");
  msg.set(OrderPercent_17);
  OrderQtyData_17.insert(OrderPercent_17.getString());
  FIX::OrderQty OrderQty_26;
  OrderQty_26.setString("21236415");
  msg.set(OrderQty_26);
  OrderQtyData_17.insert(OrderQty_26.getString());
  FIX::RoundingDirection RoundingDirection_17('2');
  msg.set(RoundingDirection_17);
  OrderQtyData_17.insert(RoundingDirection_17.getString());
  FIX::RoundingModulus RoundingModulus_17;
  RoundingModulus_17.setString("228279");
  msg.set(RoundingModulus_17);
  OrderQtyData_17.insert(RoundingModulus_17.getString());
  all_values.push_back(OrderQtyData_17);

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::OrderCancelReplaceRequest::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_80;
    FIX::PartyID PartyID_80("STRING_1627685388");
    noPartyIDs_0_0.set(PartyID_80);
    Parties_NoPartyIDs_80.insert(PartyID_80.getString());
    FIX::PartyIDSource PartyIDSource_80('B');
    noPartyIDs_0_0.set(PartyIDSource_80);
    Parties_NoPartyIDs_80.insert(PartyIDSource_80.getString());
    FIX::PartyRole PartyRole_80(26);
    noPartyIDs_0_0.set(PartyRole_80);
    Parties_NoPartyIDs_80.insert(PartyRole_80.getString());
    all_values.push_back(Parties_NoPartyIDs_80);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderCancelReplaceRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_156;
      FIX::PartySubID PartySubID_156("STRING_1387313391");
      noPartySubIDs_0_1_0.set(PartySubID_156);
      PtysSubGrp_NoPartySubIDs_156.insert(PartySubID_156.getString());
      FIX::PartySubIDType PartySubIDType_156(7);
      noPartySubIDs_0_1_0.set(PartySubIDType_156);
      PtysSubGrp_NoPartySubIDs_156.insert(PartySubIDType_156.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_156);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::OrderCancelReplaceRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_157;
      FIX::PartySubID PartySubID_157("STRING_1875419435");
      noPartySubIDs_0_1_1.set(PartySubID_157);
      PtysSubGrp_NoPartySubIDs_157.insert(PartySubID_157.getString());
      FIX::PartySubIDType PartySubIDType_157(7);
      noPartySubIDs_0_1_1.set(PartySubIDType_157);
      PtysSubGrp_NoPartySubIDs_157.insert(PartySubIDType_157.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_157);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::OrderCancelReplaceRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_158;
      FIX::PartySubID PartySubID_158("STRING_679901944");
      noPartySubIDs_0_1_2.set(PartySubID_158);
      PtysSubGrp_NoPartySubIDs_158.insert(PartySubID_158.getString());
      FIX::PartySubIDType PartySubIDType_158(3);
      noPartySubIDs_0_1_2.set(PartySubIDType_158);
      PtysSubGrp_NoPartySubIDs_158.insert(PartySubIDType_158.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_158);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::OrderCancelReplaceRequest::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_81;
    FIX::PartyID PartyID_81("STRING_520718221");
    noPartyIDs_0_1.set(PartyID_81);
    Parties_NoPartyIDs_81.insert(PartyID_81.getString());
    FIX::PartyIDSource PartyIDSource_81('A');
    noPartyIDs_0_1.set(PartyIDSource_81);
    Parties_NoPartyIDs_81.insert(PartyIDSource_81.getString());
    FIX::PartyRole PartyRole_81(1);
    noPartyIDs_0_1.set(PartyRole_81);
    Parties_NoPartyIDs_81.insert(PartyRole_81.getString());
    all_values.push_back(Parties_NoPartyIDs_81);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderCancelReplaceRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_159;
      FIX::PartySubID PartySubID_159("STRING_2062881623");
      noPartySubIDs_1_1_0.set(PartySubID_159);
      PtysSubGrp_NoPartySubIDs_159.insert(PartySubID_159.getString());
      FIX::PartySubIDType PartySubIDType_159(32);
      noPartySubIDs_1_1_0.set(PartySubIDType_159);
      PtysSubGrp_NoPartySubIDs_159.insert(PartySubIDType_159.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_159);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::OrderCancelReplaceRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_160;
      FIX::PartySubID PartySubID_160("STRING_195852893");
      noPartySubIDs_1_1_1.set(PartySubID_160);
      PtysSubGrp_NoPartySubIDs_160.insert(PartySubID_160.getString());
      FIX::PartySubIDType PartySubIDType_160(8);
      noPartySubIDs_1_1_1.set(PartySubIDType_160);
      PtysSubGrp_NoPartySubIDs_160.insert(PartySubIDType_160.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_160);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::OrderCancelReplaceRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_161;
      FIX::PartySubID PartySubID_161("STRING_870196340");
      noPartySubIDs_1_1_2.set(PartySubID_161);
      PtysSubGrp_NoPartySubIDs_161.insert(PartySubID_161.getString());
      FIX::PartySubIDType PartySubIDType_161(16);
      noPartySubIDs_1_1_2.set(PartySubIDType_161);
      PtysSubGrp_NoPartySubIDs_161.insert(PartySubIDType_161.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_161);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_2);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  // PegInstructions
  multiset<string> PegInstructions_9;
  FIX::PegLimitType PegLimitType_9(2);
  msg.set(PegLimitType_9);
  PegInstructions_9.insert(PegLimitType_9.getString());
  FIX::PegMoveType PegMoveType_9(0);
  msg.set(PegMoveType_9);
  PegInstructions_9.insert(PegMoveType_9.getString());
  FIX::PegOffsetType PegOffsetType_9(2);
  msg.set(PegOffsetType_9);
  PegInstructions_9.insert(PegOffsetType_9.getString());
  FIX::PegOffsetValue PegOffsetValue_9;
  PegOffsetValue_9.setString("620659");
  msg.set(PegOffsetValue_9);
  PegInstructions_9.insert(PegOffsetValue_9.getString());
  FIX::PegPriceType PegPriceType_9(7);
  msg.set(PegPriceType_9);
  PegInstructions_9.insert(PegPriceType_9.getString());
  FIX::PegRoundDirection PegRoundDirection_9(2);
  msg.set(PegRoundDirection_9);
  PegInstructions_9.insert(PegRoundDirection_9.getString());
  FIX::PegScope PegScope_9(4);
  msg.set(PegScope_9);
  PegInstructions_9.insert(PegScope_9.getString());
  FIX::PegSecurityDesc PegSecurityDesc_9("STRING_1613672713");
  msg.set(PegSecurityDesc_9);
  PegInstructions_9.insert(PegSecurityDesc_9.getString());
  FIX::PegSecurityID PegSecurityID_9("STRING_1211039285");
  msg.set(PegSecurityID_9);
  PegInstructions_9.insert(PegSecurityID_9.getString());
  FIX::PegSecurityIDSource PegSecurityIDSource_9("STRING_494071305");
  msg.set(PegSecurityIDSource_9);
  PegInstructions_9.insert(PegSecurityIDSource_9.getString());
  FIX::PegSymbol PegSymbol_9("STRING_209463928");
  msg.set(PegSymbol_9);
  PegInstructions_9.insert(PegSymbol_9.getString());
  all_values.push_back(PegInstructions_9);

  // PreAllocGrp
  // Group PreAllocGrp.NoAllocs
  {
    FIX50SP2::OrderCancelReplaceRequest::NoAllocs noAllocs_0_0;
    // PreAllocGrp.NoAllocs
    multiset<string> PreAllocGrp_NoAllocs_19;
    FIX::AllocAccount AllocAccount_34("STRING_1029481766");
    noAllocs_0_0.set(AllocAccount_34);
    PreAllocGrp_NoAllocs_19.insert(AllocAccount_34.getString());
    FIX::AllocAcctIDSource AllocAcctIDSource_34(285916720);
    noAllocs_0_0.set(AllocAcctIDSource_34);
    PreAllocGrp_NoAllocs_19.insert(AllocAcctIDSource_34.getString());
    FIX::AllocQty AllocQty_33;
    AllocQty_33.setString("10001170");
    noAllocs_0_0.set(AllocQty_33);
    PreAllocGrp_NoAllocs_19.insert(AllocQty_33.getString());
    FIX::AllocSettlCurrency AllocSettlCurrency_29("JPY");
    noAllocs_0_0.set(AllocSettlCurrency_29);
    PreAllocGrp_NoAllocs_19.insert(AllocSettlCurrency_29.getString());
    FIX::IndividualAllocID IndividualAllocID_34("STRING_728052828");
    noAllocs_0_0.set(IndividualAllocID_34);
    PreAllocGrp_NoAllocs_19.insert(IndividualAllocID_34.getString());
    all_values.push_back(PreAllocGrp_NoAllocs_19);

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::OrderCancelReplaceRequest::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_85;
      FIX::NestedPartyID NestedPartyID_85("STRING_68249953");
      noNestedPartyIDs_0_1_0.set(NestedPartyID_85);
      NestedParties_NoNestedPartyIDs_85.insert(NestedPartyID_85.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_85('2');
      noNestedPartyIDs_0_1_0.set(NestedPartyIDSource_85);
      NestedParties_NoNestedPartyIDs_85.insert(NestedPartyIDSource_85.getString());
      FIX::NestedPartyRole NestedPartyRole_85(524902916);
      noNestedPartyIDs_0_1_0.set(NestedPartyRole_85);
      NestedParties_NoNestedPartyIDs_85.insert(NestedPartyRole_85.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_85);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::OrderCancelReplaceRequest::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_161;
        FIX::NestedPartySubID NestedPartySubID_161("STRING_1740656329");
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubID_161);
        NstdPtysSubGrp_NoNestedPartySubIDs_161.insert(NestedPartySubID_161.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_161(838329425);
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubIDType_161);
        NstdPtysSubGrp_NoNestedPartySubIDs_161.insert(NestedPartySubIDType_161.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_161);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::OrderCancelReplaceRequest::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_162;
        FIX::NestedPartySubID NestedPartySubID_162("STRING_1091995394");
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubID_162);
        NstdPtysSubGrp_NoNestedPartySubIDs_162.insert(NestedPartySubID_162.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_162(323089812);
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubIDType_162);
        NstdPtysSubGrp_NoNestedPartySubIDs_162.insert(NestedPartySubIDType_162.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_162);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::OrderCancelReplaceRequest::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_163;
        FIX::NestedPartySubID NestedPartySubID_163("STRING_1034182318");
        noNestedPartySubIDs_0_0_2_2.set(NestedPartySubID_163);
        NstdPtysSubGrp_NoNestedPartySubIDs_163.insert(NestedPartySubID_163.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_163(1309090719);
        noNestedPartySubIDs_0_0_2_2.set(NestedPartySubIDType_163);
        NstdPtysSubGrp_NoNestedPartySubIDs_163.insert(NestedPartySubIDType_163.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_163);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_2);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::OrderCancelReplaceRequest::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_86;
      FIX::NestedPartyID NestedPartyID_86("STRING_1193286152");
      noNestedPartyIDs_0_1_1.set(NestedPartyID_86);
      NestedParties_NoNestedPartyIDs_86.insert(NestedPartyID_86.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_86('1');
      noNestedPartyIDs_0_1_1.set(NestedPartyIDSource_86);
      NestedParties_NoNestedPartyIDs_86.insert(NestedPartyIDSource_86.getString());
      FIX::NestedPartyRole NestedPartyRole_86(697418133);
      noNestedPartyIDs_0_1_1.set(NestedPartyRole_86);
      NestedParties_NoNestedPartyIDs_86.insert(NestedPartyRole_86.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_86);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::OrderCancelReplaceRequest::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_164;
        FIX::NestedPartySubID NestedPartySubID_164("STRING_1392785583");
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubID_164);
        NstdPtysSubGrp_NoNestedPartySubIDs_164.insert(NestedPartySubID_164.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_164(759484119);
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubIDType_164);
        NstdPtysSubGrp_NoNestedPartySubIDs_164.insert(NestedPartySubIDType_164.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_164);

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::OrderCancelReplaceRequest::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_165;
        FIX::NestedPartySubID NestedPartySubID_165("STRING_1129429005");
        noNestedPartySubIDs_0_1_2_1.set(NestedPartySubID_165);
        NstdPtysSubGrp_NoNestedPartySubIDs_165.insert(NestedPartySubID_165.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_165(1032794328);
        noNestedPartySubIDs_0_1_2_1.set(NestedPartySubIDType_165);
        NstdPtysSubGrp_NoNestedPartySubIDs_165.insert(NestedPartySubIDType_165.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_165);

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_1);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_1);
    }
    msg.addGroup(noAllocs_0_0);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_20;
  FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_20("CHF");
  msg.set(BenchmarkCurveCurrency_20);
  SpreadOrBenchmarkCurveData_20.insert(BenchmarkCurveCurrency_20.getString());
  FIX::BenchmarkCurveName BenchmarkCurveName_20("STRING_SONIA");
  msg.set(BenchmarkCurveName_20);
  SpreadOrBenchmarkCurveData_20.insert(BenchmarkCurveName_20.getString());
  FIX::BenchmarkCurvePoint BenchmarkCurvePoint_20("STRING_1724798752");
  msg.set(BenchmarkCurvePoint_20);
  SpreadOrBenchmarkCurveData_20.insert(BenchmarkCurvePoint_20.getString());
  FIX::BenchmarkPrice BenchmarkPrice_20;
  BenchmarkPrice_20.setString("8050819");
  msg.set(BenchmarkPrice_20);
  SpreadOrBenchmarkCurveData_20.insert(BenchmarkPrice_20.getString());
  FIX::BenchmarkPriceType BenchmarkPriceType_20(787590991);
  msg.set(BenchmarkPriceType_20);
  SpreadOrBenchmarkCurveData_20.insert(BenchmarkPriceType_20.getString());
  FIX::BenchmarkSecurityID BenchmarkSecurityID_20("STRING_606796870");
  msg.set(BenchmarkSecurityID_20);
  SpreadOrBenchmarkCurveData_20.insert(BenchmarkSecurityID_20.getString());
  FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_20("STRING_1090998719");
  msg.set(BenchmarkSecurityIDSource_20);
  SpreadOrBenchmarkCurveData_20.insert(BenchmarkSecurityIDSource_20.getString());
  FIX::Spread Spread_20;
  Spread_20.setString("17877080");
  msg.set(Spread_20);
  SpreadOrBenchmarkCurveData_20.insert(Spread_20.getString());
  all_values.push_back(SpreadOrBenchmarkCurveData_20);

  // StrategyParametersGrp
  // Group StrategyParametersGrp.NoStrategyParameters
  {
    FIX50SP2::OrderCancelReplaceRequest::NoStrategyParameters noStrategyParameters_0_0;
    // StrategyParametersGrp.NoStrategyParameters
    multiset<string> StrategyParametersGrp_NoStrategyParameters_22;
    FIX::StrategyParameterName StrategyParameterName_22("STRING_479346727");
    noStrategyParameters_0_0.set(StrategyParameterName_22);
    StrategyParametersGrp_NoStrategyParameters_22.insert(StrategyParameterName_22.getString());
    FIX::StrategyParameterType StrategyParameterType_22(7);
    noStrategyParameters_0_0.set(StrategyParameterType_22);
    StrategyParametersGrp_NoStrategyParameters_22.insert(StrategyParameterType_22.getString());
    FIX::StrategyParameterValue StrategyParameterValue_22("STRING_880293075");
    noStrategyParameters_0_0.set(StrategyParameterValue_22);
    StrategyParametersGrp_NoStrategyParameters_22.insert(StrategyParameterValue_22.getString());
    all_values.push_back(StrategyParametersGrp_NoStrategyParameters_22);

    msg.addGroup(noStrategyParameters_0_0);
  }
  {
    FIX50SP2::OrderCancelReplaceRequest::NoStrategyParameters noStrategyParameters_0_1;
    // StrategyParametersGrp.NoStrategyParameters
    multiset<string> StrategyParametersGrp_NoStrategyParameters_23;
    FIX::StrategyParameterName StrategyParameterName_23("STRING_547596680");
    noStrategyParameters_0_1.set(StrategyParameterName_23);
    StrategyParametersGrp_NoStrategyParameters_23.insert(StrategyParameterName_23.getString());
    FIX::StrategyParameterType StrategyParameterType_23(27);
    noStrategyParameters_0_1.set(StrategyParameterType_23);
    StrategyParametersGrp_NoStrategyParameters_23.insert(StrategyParameterType_23.getString());
    FIX::StrategyParameterValue StrategyParameterValue_23("STRING_1405195991");
    noStrategyParameters_0_1.set(StrategyParameterValue_23);
    StrategyParametersGrp_NoStrategyParameters_23.insert(StrategyParameterValue_23.getString());
    all_values.push_back(StrategyParametersGrp_NoStrategyParameters_23);

    msg.addGroup(noStrategyParameters_0_1);
  }
  // TrdRegTimestamps
  // Group TrdRegTimestamps.NoTrdRegTimestamps
  {
    FIX50SP2::OrderCancelReplaceRequest::NoTrdRegTimestamps noTrdRegTimestamps_0_0;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_18;
    FIX::DeskOrderHandlingInst DeskOrderHandlingInst_18("MULTIPLESTRINGVALUE_TMO");
    noTrdRegTimestamps_0_0.set(DeskOrderHandlingInst_18);
    TrdRegTimestamps_NoTrdRegTimestamps_18.insert(DeskOrderHandlingInst_18.getString());
    FIX::DeskType DeskType_18("STRING_S");
    noTrdRegTimestamps_0_0.set(DeskType_18);
    TrdRegTimestamps_NoTrdRegTimestamps_18.insert(DeskType_18.getString());
    FIX::DeskTypeSource DeskTypeSource_18(1);
    noTrdRegTimestamps_0_0.set(DeskTypeSource_18);
    TrdRegTimestamps_NoTrdRegTimestamps_18.insert(DeskTypeSource_18.getString());
    FIX::TrdRegTimestamp TrdRegTimestamp_18(FIX::UTCTIMESTAMP(6, 5, 58, 20, 72000));
    noTrdRegTimestamps_0_0.set(TrdRegTimestamp_18);
    TrdRegTimestamps_NoTrdRegTimestamps_18.insert(TrdRegTimestamp_18.getString());
    FIX::TrdRegTimestampOrigin TrdRegTimestampOrigin_18("STRING_1457821035");
    noTrdRegTimestamps_0_0.set(TrdRegTimestampOrigin_18);
    TrdRegTimestamps_NoTrdRegTimestamps_18.insert(TrdRegTimestampOrigin_18.getString());
    FIX::TrdRegTimestampType TrdRegTimestampType_18(4);
    noTrdRegTimestamps_0_0.set(TrdRegTimestampType_18);
    TrdRegTimestamps_NoTrdRegTimestamps_18.insert(TrdRegTimestampType_18.getString());
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_18);

    msg.addGroup(noTrdRegTimestamps_0_0);
  }
  {
    FIX50SP2::OrderCancelReplaceRequest::NoTrdRegTimestamps noTrdRegTimestamps_0_1;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_19;
    FIX::DeskOrderHandlingInst DeskOrderHandlingInst_19("MULTIPLESTRINGVALUE_OVD");
    noTrdRegTimestamps_0_1.set(DeskOrderHandlingInst_19);
    TrdRegTimestamps_NoTrdRegTimestamps_19.insert(DeskOrderHandlingInst_19.getString());
    FIX::DeskType DeskType_19("STRING_IS");
    noTrdRegTimestamps_0_1.set(DeskType_19);
    TrdRegTimestamps_NoTrdRegTimestamps_19.insert(DeskType_19.getString());
    FIX::DeskTypeSource DeskTypeSource_19(1);
    noTrdRegTimestamps_0_1.set(DeskTypeSource_19);
    TrdRegTimestamps_NoTrdRegTimestamps_19.insert(DeskTypeSource_19.getString());
    FIX::TrdRegTimestamp TrdRegTimestamp_19(FIX::UTCTIMESTAMP(17, 1, 30, 0, 42003));
    noTrdRegTimestamps_0_1.set(TrdRegTimestamp_19);
    TrdRegTimestamps_NoTrdRegTimestamps_19.insert(TrdRegTimestamp_19.getString());
    FIX::TrdRegTimestampOrigin TrdRegTimestampOrigin_19("STRING_867297056");
    noTrdRegTimestamps_0_1.set(TrdRegTimestampOrigin_19);
    TrdRegTimestamps_NoTrdRegTimestamps_19.insert(TrdRegTimestampOrigin_19.getString());
    FIX::TrdRegTimestampType TrdRegTimestampType_19(3);
    noTrdRegTimestamps_0_1.set(TrdRegTimestampType_19);
    TrdRegTimestamps_NoTrdRegTimestamps_19.insert(TrdRegTimestampType_19.getString());
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_19);

    msg.addGroup(noTrdRegTimestamps_0_1);
  }
  // TrdgSesGrp
  // Group TrdgSesGrp.NoTradingSessions
  {
    FIX50SP2::OrderCancelReplaceRequest::NoTradingSessions noTradingSessions_0_0;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_18;
    FIX::TradingSessionID TradingSessionID_49("STRING_5");
    noTradingSessions_0_0.set(TradingSessionID_49);
    TrdgSesGrp_NoTradingSessions_18.insert(TradingSessionID_49.getString());
    FIX::TradingSessionSubID TradingSessionSubID_49("STRING_5");
    noTradingSessions_0_0.set(TradingSessionSubID_49);
    TrdgSesGrp_NoTradingSessions_18.insert(TradingSessionSubID_49.getString());
    all_values.push_back(TrdgSesGrp_NoTradingSessions_18);

    msg.addGroup(noTradingSessions_0_0);
  }
  {
    FIX50SP2::OrderCancelReplaceRequest::NoTradingSessions noTradingSessions_0_1;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_19;
    FIX::TradingSessionID TradingSessionID_50("STRING_2");
    noTradingSessions_0_1.set(TradingSessionID_50);
    TrdgSesGrp_NoTradingSessions_19.insert(TradingSessionID_50.getString());
    FIX::TradingSessionSubID TradingSessionSubID_50("STRING_7");
    noTradingSessions_0_1.set(TradingSessionSubID_50);
    TrdgSesGrp_NoTradingSessions_19.insert(TradingSessionSubID_50.getString());
    all_values.push_back(TrdgSesGrp_NoTradingSessions_19);

    msg.addGroup(noTradingSessions_0_1);
  }
  // TriggeringInstruction
  multiset<string> TriggeringInstruction_9;
  FIX::TriggerAction TriggerAction_9('3');
  msg.set(TriggerAction_9);
  TriggeringInstruction_9.insert(TriggerAction_9.getString());
  FIX::TriggerNewPrice TriggerNewPrice_9;
  TriggerNewPrice_9.setString("8398974");
  msg.set(TriggerNewPrice_9);
  TriggeringInstruction_9.insert(TriggerNewPrice_9.getString());
  FIX::TriggerNewQty TriggerNewQty_9;
  TriggerNewQty_9.setString("14459872");
  msg.set(TriggerNewQty_9);
  TriggeringInstruction_9.insert(TriggerNewQty_9.getString());
  FIX::TriggerOrderType TriggerOrderType_9('2');
  msg.set(TriggerOrderType_9);
  TriggeringInstruction_9.insert(TriggerOrderType_9.getString());
  FIX::TriggerPrice TriggerPrice_9;
  TriggerPrice_9.setString("15086032");
  msg.set(TriggerPrice_9);
  TriggeringInstruction_9.insert(TriggerPrice_9.getString());
  FIX::TriggerPriceDirection TriggerPriceDirection_9('U');
  msg.set(TriggerPriceDirection_9);
  TriggeringInstruction_9.insert(TriggerPriceDirection_9.getString());
  FIX::TriggerPriceType TriggerPriceType_9('1');
  msg.set(TriggerPriceType_9);
  TriggeringInstruction_9.insert(TriggerPriceType_9.getString());
  FIX::TriggerPriceTypeScope TriggerPriceTypeScope_9('3');
  msg.set(TriggerPriceTypeScope_9);
  TriggeringInstruction_9.insert(TriggerPriceTypeScope_9.getString());
  FIX::TriggerSecurityDesc TriggerSecurityDesc_9("STRING_941555130");
  msg.set(TriggerSecurityDesc_9);
  TriggeringInstruction_9.insert(TriggerSecurityDesc_9.getString());
  FIX::TriggerSecurityID TriggerSecurityID_9("STRING_712502400");
  msg.set(TriggerSecurityID_9);
  TriggeringInstruction_9.insert(TriggerSecurityID_9.getString());
  FIX::TriggerSecurityIDSource TriggerSecurityIDSource_9("STRING_1866647213");
  msg.set(TriggerSecurityIDSource_9);
  TriggeringInstruction_9.insert(TriggerSecurityIDSource_9.getString());
  FIX::TriggerSymbol TriggerSymbol_9("STRING_1851638172");
  msg.set(TriggerSymbol_9);
  TriggeringInstruction_9.insert(TriggerSymbol_9.getString());
  FIX::TriggerTradingSessionID TriggerTradingSessionID_9("STRING_22839787");
  msg.set(TriggerTradingSessionID_9);
  TriggeringInstruction_9.insert(TriggerTradingSessionID_9.getString());
  FIX::TriggerTradingSessionSubID TriggerTradingSessionSubID_9("STRING_1006378735");
  msg.set(TriggerTradingSessionSubID_9);
  TriggeringInstruction_9.insert(TriggerTradingSessionSubID_9.getString());
  FIX::TriggerType TriggerType_9('1');
  msg.set(TriggerType_9);
  TriggeringInstruction_9.insert(TriggerType_9.getString());
  all_values.push_back(TriggeringInstruction_9);

  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_71;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_71("DATA_1376837704");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_71);
    UnderlyingInstrument_71.insert(EncodedUnderlyingIssuer_71.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_71(83829395);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_71);
    UnderlyingInstrument_71.insert(EncodedUnderlyingIssuerLen_71.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_71("DATA_805453185");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_71);
    UnderlyingInstrument_71.insert(EncodedUnderlyingSecurityDesc_71.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_71(1324611777);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_71);
    UnderlyingInstrument_71.insert(EncodedUnderlyingSecurityDescLen_71.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_71;
    UnderlyingAdjustedQuantity_71.setString("13765578");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_71);
    UnderlyingInstrument_71.insert(UnderlyingAdjustedQuantity_71.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_71;
    UnderlyingAllocationPercent_71.setString("58.570000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_71);
    UnderlyingInstrument_71.insert(UnderlyingAllocationPercent_71.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_71;
    UnderlyingAttachmentPoint_71.setString("27.200000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_71);
    UnderlyingInstrument_71.insert(UnderlyingAttachmentPoint_71.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_71("STRING_1612801406");
    noUnderlyings_0_0.set(UnderlyingCFICode_71);
    UnderlyingInstrument_71.insert(UnderlyingCFICode_71.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_71("STRING_752339266");
    noUnderlyings_0_0.set(UnderlyingCPProgram_71);
    UnderlyingInstrument_71.insert(UnderlyingCPProgram_71.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_71("STRING_1162378395");
    noUnderlyings_0_0.set(UnderlyingCPRegType_71);
    UnderlyingInstrument_71.insert(UnderlyingCPRegType_71.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_71;
    UnderlyingCapValue_71.setString("1809080");
    noUnderlyings_0_0.set(UnderlyingCapValue_71);
    UnderlyingInstrument_71.insert(UnderlyingCapValue_71.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_71;
    UnderlyingCashAmount_71.setString("19879135");
    noUnderlyings_0_0.set(UnderlyingCashAmount_71);
    UnderlyingInstrument_71.insert(UnderlyingCashAmount_71.getString());
    FIX::UnderlyingCashType UnderlyingCashType_71("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_71);
    UnderlyingInstrument_71.insert(UnderlyingCashType_71.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_71;
    UnderlyingContractMultiplier_71.setString("14440949");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_71);
    UnderlyingInstrument_71.insert(UnderlyingContractMultiplier_71.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_71(1384624327);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_71);
    UnderlyingInstrument_71.insert(UnderlyingContractMultiplierUnit_71.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_71("COUNTRY_747068237");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_71);
    UnderlyingInstrument_71.insert(UnderlyingCountryOfIssue_71.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_71("LOCALMKTDATE_136508728");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_71);
    UnderlyingInstrument_71.insert(UnderlyingCouponPaymentDate_71.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_71;
    UnderlyingCouponRate_71.setString("79.740000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_71);
    UnderlyingInstrument_71.insert(UnderlyingCouponRate_71.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_71("STRING_264311099");
    noUnderlyings_0_0.set(UnderlyingCreditRating_71);
    UnderlyingInstrument_71.insert(UnderlyingCreditRating_71.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_71("JPY");
    noUnderlyings_0_0.set(UnderlyingCurrency_71);
    UnderlyingInstrument_71.insert(UnderlyingCurrency_71.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_71;
    UnderlyingCurrentValue_71.setString("9117780");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_71);
    UnderlyingInstrument_71.insert(UnderlyingCurrentValue_71.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_71;
    UnderlyingDetachmentPoint_71.setString("44.890000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_71);
    UnderlyingInstrument_71.insert(UnderlyingDetachmentPoint_71.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_71;
    UnderlyingDirtyPrice_71.setString("11480694");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_71);
    UnderlyingInstrument_71.insert(UnderlyingDirtyPrice_71.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_71;
    UnderlyingEndPrice_71.setString("16242804");
    noUnderlyings_0_0.set(UnderlyingEndPrice_71);
    UnderlyingInstrument_71.insert(UnderlyingEndPrice_71.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_71;
    UnderlyingEndValue_71.setString("5557080");
    noUnderlyings_0_0.set(UnderlyingEndValue_71);
    UnderlyingInstrument_71.insert(UnderlyingEndValue_71.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_71(852223940);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_71);
    UnderlyingInstrument_71.insert(UnderlyingExerciseStyle_71.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_71;
    UnderlyingFXRate_71.setString("16471202");
    noUnderlyings_0_0.set(UnderlyingFXRate_71);
    UnderlyingInstrument_71.insert(UnderlyingFXRate_71.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_71('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_71);
    UnderlyingInstrument_71.insert(UnderlyingFXRateCalc_71.getString());
    FIX::UnderlyingFactor UnderlyingFactor_71;
    UnderlyingFactor_71.setString("4484068");
    noUnderlyings_0_0.set(UnderlyingFactor_71);
    UnderlyingInstrument_71.insert(UnderlyingFactor_71.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_71(2013091738);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_71);
    UnderlyingInstrument_71.insert(UnderlyingFlowScheduleType_71.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_71("STRING_791440847");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_71);
    UnderlyingInstrument_71.insert(UnderlyingInstrRegistry_71.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_71("LOCALMKTDATE_532236260");
    noUnderlyings_0_0.set(UnderlyingIssueDate_71);
    UnderlyingInstrument_71.insert(UnderlyingIssueDate_71.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_71("STRING_671061275");
    noUnderlyings_0_0.set(UnderlyingIssuer_71);
    UnderlyingInstrument_71.insert(UnderlyingIssuer_71.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_71("STRING_2116052624");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_71);
    UnderlyingInstrument_71.insert(UnderlyingLocaleOfIssue_71.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_71("LOCALMKTDATE_1908794126");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_71);
    UnderlyingInstrument_71.insert(UnderlyingMaturityDate_71.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_71("MONTHYEAR_556103484");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_71);
    UnderlyingInstrument_71.insert(UnderlyingMaturityMonthYear_71.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_71("TZTIMEONLY_1847751697");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_71);
    UnderlyingInstrument_71.insert(UnderlyingMaturityTime_71.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_71;
    UnderlyingNotionalPercentageOutstanding_71.setString("18.840000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_71);
    UnderlyingInstrument_71.insert(UnderlyingNotionalPercentageOutstanding_71.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_71('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_71);
    UnderlyingInstrument_71.insert(UnderlyingOptAttribute_71.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_71;
    UnderlyingOriginalNotionalPercentageOutstanding_71.setString("64.440000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_71);
    UnderlyingInstrument_71.insert(UnderlyingOriginalNotionalPercentageOutstanding_71.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_71("STRING_1555019911");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_71);
    UnderlyingInstrument_71.insert(UnderlyingPriceUnitOfMeasure_71.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_71;
    UnderlyingPriceUnitOfMeasureQty_71.setString("11488726");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_71);
    UnderlyingInstrument_71.insert(UnderlyingPriceUnitOfMeasureQty_71.getString());
    FIX::UnderlyingProduct UnderlyingProduct_71(41029940);
    noUnderlyings_0_0.set(UnderlyingProduct_71);
    UnderlyingInstrument_71.insert(UnderlyingProduct_71.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_71(851631239);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_71);
    UnderlyingInstrument_71.insert(UnderlyingPutOrCall_71.getString());
    FIX::UnderlyingPx UnderlyingPx_71;
    UnderlyingPx_71.setString("3860133");
    noUnderlyings_0_0.set(UnderlyingPx_71);
    UnderlyingInstrument_71.insert(UnderlyingPx_71.getString());
    FIX::UnderlyingQty UnderlyingQty_71;
    UnderlyingQty_71.setString("7880981");
    noUnderlyings_0_0.set(UnderlyingQty_71);
    UnderlyingInstrument_71.insert(UnderlyingQty_71.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_71("LOCALMKTDATE_988139968");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_71);
    UnderlyingInstrument_71.insert(UnderlyingRedemptionDate_71.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_71("STRING_1069141290");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_71);
    UnderlyingInstrument_71.insert(UnderlyingRepoCollateralSecurityType_71.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_71;
    UnderlyingRepurchaseRate_71.setString("92.770000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_71);
    UnderlyingInstrument_71.insert(UnderlyingRepurchaseRate_71.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_71(485768294);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_71);
    UnderlyingInstrument_71.insert(UnderlyingRepurchaseTerm_71.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_71("STRING_1275655576");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_71);
    UnderlyingInstrument_71.insert(UnderlyingRestructuringType_71.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_71("STRING_1964187324");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_71);
    UnderlyingInstrument_71.insert(UnderlyingSecurityDesc_71.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_71("EXCHANGE_1322312784");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_71);
    UnderlyingInstrument_71.insert(UnderlyingSecurityExchange_71.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_71("STRING_276241344");
    noUnderlyings_0_0.set(UnderlyingSecurityID_71);
    UnderlyingInstrument_71.insert(UnderlyingSecurityID_71.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_71("STRING_1440984123");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_71);
    UnderlyingInstrument_71.insert(UnderlyingSecurityIDSource_71.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_71("STRING_1878020839");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_71);
    UnderlyingInstrument_71.insert(UnderlyingSecuritySubType_71.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_71("STRING_1128465285");
    noUnderlyings_0_0.set(UnderlyingSecurityType_71);
    UnderlyingInstrument_71.insert(UnderlyingSecurityType_71.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_71("STRING_940620709");
    noUnderlyings_0_0.set(UnderlyingSeniority_71);
    UnderlyingInstrument_71.insert(UnderlyingSeniority_71.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_71("STRING_1292623981");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_71);
    UnderlyingInstrument_71.insert(UnderlyingSettlMethod_71.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_71(2);
    noUnderlyings_0_0.set(UnderlyingSettlementType_71);
    UnderlyingInstrument_71.insert(UnderlyingSettlementType_71.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_71;
    UnderlyingStartValue_71.setString("8062287");
    noUnderlyings_0_0.set(UnderlyingStartValue_71);
    UnderlyingInstrument_71.insert(UnderlyingStartValue_71.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_71("STRING_2084064828");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_71);
    UnderlyingInstrument_71.insert(UnderlyingStateOrProvinceOfIssue_71.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_71("GBP");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_71);
    UnderlyingInstrument_71.insert(UnderlyingStrikeCurrency_71.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_71;
    UnderlyingStrikePrice_71.setString("20526338");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_71);
    UnderlyingInstrument_71.insert(UnderlyingStrikePrice_71.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_71("STRING_1870418888");
    noUnderlyings_0_0.set(UnderlyingSymbol_71);
    UnderlyingInstrument_71.insert(UnderlyingSymbol_71.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_71("STRING_2033393559");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_71);
    UnderlyingInstrument_71.insert(UnderlyingSymbolSfx_71.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_71("STRING_1752901854");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_71);
    UnderlyingInstrument_71.insert(UnderlyingTimeUnit_71.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_71("STRING_1097047125");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_71);
    UnderlyingInstrument_71.insert(UnderlyingUnitOfMeasure_71.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_71;
    UnderlyingUnitOfMeasureQty_71.setString("11943526");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_71);
    UnderlyingInstrument_71.insert(UnderlyingUnitOfMeasureQty_71.getString());
    all_values.push_back(UnderlyingInstrument_71);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_140;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_140("STRING_504583388");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_140);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_140.insert(UnderlyingSecurityAltID_140.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_140("STRING_195741650");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_140);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_140.insert(UnderlyingSecurityAltIDSource_140.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_140);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_135;
      FIX::UnderlyingStipType UnderlyingStipType_135("STRING_1356214628");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_135);
      UnderlyingStipulations_NoUnderlyingStips_135.insert(UnderlyingStipType_135.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_135("STRING_581754967");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_135);
      UnderlyingStipulations_NoUnderlyingStips_135.insert(UnderlyingStipValue_135.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_135);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_136;
      FIX::UnderlyingStipType UnderlyingStipType_136("STRING_1297192768");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_136);
      UnderlyingStipulations_NoUnderlyingStips_136.insert(UnderlyingStipType_136.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_136("STRING_196870948");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_136);
      UnderlyingStipulations_NoUnderlyingStips_136.insert(UnderlyingStipValue_136.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_136);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    {
      FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_137;
      FIX::UnderlyingStipType UnderlyingStipType_137("STRING_1650896257");
      noUnderlyingStips_0_1_2.set(UnderlyingStipType_137);
      UnderlyingStipulations_NoUnderlyingStips_137.insert(UnderlyingStipType_137.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_137("STRING_202118397");
      noUnderlyingStips_0_1_2.set(UnderlyingStipValue_137);
      UnderlyingStipulations_NoUnderlyingStips_137.insert(UnderlyingStipValue_137.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_137);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_143;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_143("STRING_779068186");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_143);
      UndlyInstrumentParties_NoUndlyInstrumentParties_143.insert(UnderlyingInstrumentPartyID_143.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_143('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_143);
      UndlyInstrumentParties_NoUndlyInstrumentParties_143.insert(UnderlyingInstrumentPartyIDSource_143.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_143(2004952026);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_143);
      UndlyInstrumentParties_NoUndlyInstrumentParties_143.insert(UnderlyingInstrumentPartyRole_143.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_143);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_277;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_277("STRING_1459806196");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_277);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_277.insert(UnderlyingInstrumentPartySubID_277.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_277(1735489217);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_277);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_277.insert(UnderlyingInstrumentPartySubIDType_277.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_277);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_278;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_278("STRING_36291167");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_278);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_278.insert(UnderlyingInstrumentPartySubID_278.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_278(252943258);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_278);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_278.insert(UnderlyingInstrumentPartySubIDType_278.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_278);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  // YieldData
  multiset<string> YieldData_15;
  FIX::Yield Yield_15;
  Yield_15.setString("95.510000");
  msg.set(Yield_15);
  YieldData_15.insert(Yield_15.getString());
  FIX::YieldCalcDate YieldCalcDate_15("LOCALMKTDATE_1613163317");
  msg.set(YieldCalcDate_15);
  YieldData_15.insert(YieldCalcDate_15.getString());
  FIX::YieldRedemptionDate YieldRedemptionDate_15("LOCALMKTDATE_1059172057");
  msg.set(YieldRedemptionDate_15);
  YieldData_15.insert(YieldRedemptionDate_15.getString());
  FIX::YieldRedemptionPrice YieldRedemptionPrice_15;
  YieldRedemptionPrice_15.setString("8172107");
  msg.set(YieldRedemptionPrice_15);
  YieldData_15.insert(YieldRedemptionPrice_15.getString());
  FIX::YieldRedemptionPriceType YieldRedemptionPriceType_15(1574788080);
  msg.set(YieldRedemptionPriceType_15);
  YieldData_15.insert(YieldRedemptionPriceType_15.getString());
  FIX::YieldType YieldType_15("STRING_OPENAVG");
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
