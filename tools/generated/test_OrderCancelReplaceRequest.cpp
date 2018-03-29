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
  multiset<string> all_compo_names;
  multiset<string> OrderCancelReplaceRequest_0;
  FIX::Account Account_26("STRING_1993687962");
  msg.set(Account_26);
  OrderCancelReplaceRequest_0.insert(Account_26.getString());
  FIX::AccountType AccountType_23(2);
  msg.set(AccountType_23);
  OrderCancelReplaceRequest_0.insert(AccountType_23.getString());
  FIX::AcctIDSource AcctIDSource_19(4);
  msg.set(AcctIDSource_19);
  OrderCancelReplaceRequest_0.insert(AcctIDSource_19.getString());
  FIX::AllocID AllocID_20("STRING_2067478650");
  msg.set(AllocID_20);
  OrderCancelReplaceRequest_0.insert(AllocID_20.getString());
  FIX::BookingType BookingType_30(0);
  msg.set(BookingType_30);
  OrderCancelReplaceRequest_0.insert(BookingType_30.getString());
  FIX::BookingUnit BookingUnit_13('0');
  msg.set(BookingUnit_13);
  OrderCancelReplaceRequest_0.insert(BookingUnit_13.getString());
  FIX::CancellationRights CancellationRights_7('O');
  msg.set(CancellationRights_7);
  OrderCancelReplaceRequest_0.insert(CancellationRights_7.getString());
  FIX::CashMargin CashMargin_13('3');
  msg.set(CashMargin_13);
  OrderCancelReplaceRequest_0.insert(CashMargin_13.getString());
  FIX::ClOrdID ClOrdID_35("STRING_670724026");
  msg.set(ClOrdID_35);
  OrderCancelReplaceRequest_0.insert(ClOrdID_35.getString());
  FIX::ClOrdLinkID ClOrdLinkID_15("STRING_1759663679");
  msg.set(ClOrdLinkID_15);
  OrderCancelReplaceRequest_0.insert(ClOrdLinkID_15.getString());
  FIX::ClearingFeeIndicator ClearingFeeIndicator_17("STRING_4");
  msg.set(ClearingFeeIndicator_17);
  OrderCancelReplaceRequest_0.insert(ClearingFeeIndicator_17.getString());
  FIX::ComplianceID ComplianceID_10("STRING_100306047");
  msg.set(ComplianceID_10);
  OrderCancelReplaceRequest_0.insert(ComplianceID_10.getString());
  FIX::CoveredOrUncovered CoveredOrUncovered_12(1);
  msg.set(CoveredOrUncovered_12);
  OrderCancelReplaceRequest_0.insert(CoveredOrUncovered_12.getString());
  FIX::Currency Currency_51("CAN");
  msg.set(Currency_51);
  OrderCancelReplaceRequest_0.insert(Currency_51.getString());
  FIX::CustDirectedOrder CustDirectedOrder_2(true);
  msg.set(CustDirectedOrder_2);
  OrderCancelReplaceRequest_0.insert(CustDirectedOrder_2.getString());
  FIX::CustOrderCapacity CustOrderCapacity_16(2);
  msg.set(CustOrderCapacity_16);
  OrderCancelReplaceRequest_0.insert(CustOrderCapacity_16.getString());
  FIX::CustOrderHandlingInst CustOrderHandlingInst_2("MULTIPLESTRINGVALUE_ADD");
  msg.set(CustOrderHandlingInst_2);
  OrderCancelReplaceRequest_0.insert(CustOrderHandlingInst_2.getString());
  FIX::DayBookingInst DayBookingInst_13('2');
  msg.set(DayBookingInst_13);
  OrderCancelReplaceRequest_0.insert(DayBookingInst_13.getString());
  FIX::Designation Designation_9("STRING_1903884905");
  msg.set(Designation_9);
  OrderCancelReplaceRequest_0.insert(Designation_9.getString());
  FIX::EffectiveTime EffectiveTime_9(FIX::UTCTIMESTAMP(7, 35, 15, 11, 6, 2001));
  msg.set(EffectiveTime_9);
  OrderCancelReplaceRequest_0.insert(EffectiveTime_9.getString());
  FIX::EncodedText EncodedText_66("DATA_1423935655");
  msg.set(EncodedText_66);
  OrderCancelReplaceRequest_0.insert(EncodedText_66.getString());
  FIX::EncodedTextLen EncodedTextLen_66(124682722);
  msg.set(EncodedTextLen_66);
  OrderCancelReplaceRequest_0.insert(EncodedTextLen_66.getString());
  FIX::ExDestination ExDestination_8("EXCHANGE_658555291");
  msg.set(ExDestination_8);
  OrderCancelReplaceRequest_0.insert(ExDestination_8.getString());
  FIX::ExDestinationIDSource ExDestinationIDSource_8('C');
  msg.set(ExDestinationIDSource_8);
  OrderCancelReplaceRequest_0.insert(ExDestinationIDSource_8.getString());
  FIX::ExecInst ExecInst_12("MULTIPLECHARVALUE_q");
  msg.set(ExecInst_12);
  OrderCancelReplaceRequest_0.insert(ExecInst_12.getString());
  FIX::ExpireDate ExpireDate_13("LOCALMKTDATE_524849621");
  msg.set(ExpireDate_13);
  OrderCancelReplaceRequest_0.insert(ExpireDate_13.getString());
  FIX::ExpireTime ExpireTime_14(FIX::UTCTIMESTAMP(14, 20, 7, 25, 6, 2004));
  msg.set(ExpireTime_14);
  OrderCancelReplaceRequest_0.insert(ExpireTime_14.getString());
  FIX::ForexReq ForexReq_13(false);
  msg.set(ForexReq_13);
  OrderCancelReplaceRequest_0.insert(ForexReq_13.getString());
  FIX::GTBookingInst GTBookingInst_9(0);
  msg.set(GTBookingInst_9);
  OrderCancelReplaceRequest_0.insert(GTBookingInst_9.getString());
  FIX::HandlInst HandlInst_9('2');
  msg.set(HandlInst_9);
  OrderCancelReplaceRequest_0.insert(HandlInst_9.getString());
  FIX::ListID ListID_24("STRING_46170464");
  msg.set(ListID_24);
  OrderCancelReplaceRequest_0.insert(ListID_24.getString());
  FIX::LocateReqd LocateReqd_8(false);
  msg.set(LocateReqd_8);
  OrderCancelReplaceRequest_0.insert(LocateReqd_8.getString());
  FIX::ManualOrderIndicator ManualOrderIndicator_2(false);
  msg.set(ManualOrderIndicator_2);
  OrderCancelReplaceRequest_0.insert(ManualOrderIndicator_2.getString());
  FIX::MatchIncrement MatchIncrement_9;
  MatchIncrement_9.setString("6341891");
  msg.set(MatchIncrement_9);
  OrderCancelReplaceRequest_0.insert(MatchIncrement_9.getString());
  FIX::MaxFloor MaxFloor_9;
  MaxFloor_9.setString("2581339");
  msg.set(MaxFloor_9);
  OrderCancelReplaceRequest_0.insert(MaxFloor_9.getString());
  FIX::MaxPriceLevels MaxPriceLevels_9(1318192063);
  msg.set(MaxPriceLevels_9);
  OrderCancelReplaceRequest_0.insert(MaxPriceLevels_9.getString());
  FIX::MaxShow MaxShow_9;
  MaxShow_9.setString("9332035");
  msg.set(MaxShow_9);
  OrderCancelReplaceRequest_0.insert(MaxShow_9.getString());
  FIX::MinQty MinQty_12;
  MinQty_12.setString("145352");
  msg.set(MinQty_12);
  OrderCancelReplaceRequest_0.insert(MinQty_12.getString());
  FIX::MoneyLaunderingStatus MoneyLaunderingStatus_7('1');
  msg.set(MoneyLaunderingStatus_7);
  OrderCancelReplaceRequest_0.insert(MoneyLaunderingStatus_7.getString());
  FIX::OrdType OrdType_54('8');
  msg.set(OrdType_54);
  OrderCancelReplaceRequest_0.insert(OrdType_54.getString());
  FIX::OrderCapacity OrderCapacity_31('A');
  msg.set(OrderCapacity_31);
  OrderCancelReplaceRequest_0.insert(OrderCapacity_31.getString());
  FIX::OrderHandlingInstSource OrderHandlingInstSource_2(1);
  msg.set(OrderHandlingInstSource_2);
  OrderCancelReplaceRequest_0.insert(OrderHandlingInstSource_2.getString());
  FIX::OrderID OrderID_28("STRING_640840322");
  msg.set(OrderID_28);
  OrderCancelReplaceRequest_0.insert(OrderID_28.getString());
  FIX::OrderQty2 OrderQty2_19;
  OrderQty2_19.setString("15275484");
  msg.set(OrderQty2_19);
  OrderCancelReplaceRequest_0.insert(OrderQty2_19.getString());
  FIX::OrderRestrictions OrderRestrictions_28("MULTIPLECHARVALUE_1");
  msg.set(OrderRestrictions_28);
  OrderCancelReplaceRequest_0.insert(OrderRestrictions_28.getString());
  FIX::OrigClOrdID OrigClOrdID_10("STRING_2064775978");
  msg.set(OrigClOrdID_10);
  OrderCancelReplaceRequest_0.insert(OrigClOrdID_10.getString());
  FIX::OrigOrdModTime OrigOrdModTime_3(FIX::UTCTIMESTAMP(2, 31, 27, 23, 3, 2010));
  msg.set(OrigOrdModTime_3);
  OrderCancelReplaceRequest_0.insert(OrigOrdModTime_3.getString());
  FIX::ParticipationRate ParticipationRate_9;
  ParticipationRate_9.setString("39.350000");
  msg.set(ParticipationRate_9);
  OrderCancelReplaceRequest_0.insert(ParticipationRate_9.getString());
  FIX::PositionEffect PositionEffect_16('O');
  msg.set(PositionEffect_16);
  OrderCancelReplaceRequest_0.insert(PositionEffect_16.getString());
  FIX::PreTradeAnonymity PreTradeAnonymity_13(false);
  msg.set(PreTradeAnonymity_13);
  OrderCancelReplaceRequest_0.insert(PreTradeAnonymity_13.getString());
  FIX::PreallocMethod PreallocMethod_13('0');
  msg.set(PreallocMethod_13);
  OrderCancelReplaceRequest_0.insert(PreallocMethod_13.getString());
  FIX::Price Price_20;
  Price_20.setString("18624593");
  msg.set(Price_20);
  OrderCancelReplaceRequest_0.insert(Price_20.getString());
  FIX::Price2 Price2_4;
  Price2_4.setString("2211722");
  msg.set(Price2_4);
  OrderCancelReplaceRequest_0.insert(Price2_4.getString());
  FIX::PriceProtectionScope PriceProtectionScope_9('1');
  msg.set(PriceProtectionScope_9);
  OrderCancelReplaceRequest_0.insert(PriceProtectionScope_9.getString());
  FIX::PriceType PriceType_34(6);
  msg.set(PriceType_34);
  OrderCancelReplaceRequest_0.insert(PriceType_34.getString());
  FIX::QtyType QtyType_25(2);
  msg.set(QtyType_25);
  OrderCancelReplaceRequest_0.insert(QtyType_25.getString());
  FIX::ReceivedDeptID ReceivedDeptID_2("STRING_399470836");
  msg.set(ReceivedDeptID_2);
  OrderCancelReplaceRequest_0.insert(ReceivedDeptID_2.getString());
  FIX::RegistID RegistID_7("STRING_1397928156");
  msg.set(RegistID_7);
  OrderCancelReplaceRequest_0.insert(RegistID_7.getString());
  FIX::SecondaryClOrdID SecondaryClOrdID_33("STRING_901531815");
  msg.set(SecondaryClOrdID_33);
  OrderCancelReplaceRequest_0.insert(SecondaryClOrdID_33.getString());
  FIX::SettlCurrency SettlCurrency_21("USD");
  msg.set(SettlCurrency_21);
  OrderCancelReplaceRequest_0.insert(SettlCurrency_21.getString());
  FIX::SettlDate SettlDate_44("LOCALMKTDATE_1834735408");
  msg.set(SettlDate_44);
  OrderCancelReplaceRequest_0.insert(SettlDate_44.getString());
  FIX::SettlDate2 SettlDate2_19("LOCALMKTDATE_672140085");
  msg.set(SettlDate2_19);
  OrderCancelReplaceRequest_0.insert(SettlDate2_19.getString());
  FIX::SettlType SettlType_24("STRING_4");
  msg.set(SettlType_24);
  OrderCancelReplaceRequest_0.insert(SettlType_24.getString());
  FIX::Side Side_33('8');
  msg.set(Side_33);
  OrderCancelReplaceRequest_0.insert(Side_33.getString());
  FIX::SolicitedFlag SolicitedFlag_13(false);
  msg.set(SolicitedFlag_13);
  OrderCancelReplaceRequest_0.insert(SolicitedFlag_13.getString());
  FIX::StopPx StopPx_9;
  StopPx_9.setString("15625827");
  msg.set(StopPx_9);
  OrderCancelReplaceRequest_0.insert(StopPx_9.getString());
  FIX::TargetStrategy TargetStrategy_9(1);
  msg.set(TargetStrategy_9);
  OrderCancelReplaceRequest_0.insert(TargetStrategy_9.getString());
  FIX::TargetStrategyParameters TargetStrategyParameters_9("STRING_1655474254");
  msg.set(TargetStrategyParameters_9);
  OrderCancelReplaceRequest_0.insert(TargetStrategyParameters_9.getString());
  FIX::Text Text_66("STRING_60627633");
  msg.set(Text_66);
  OrderCancelReplaceRequest_0.insert(Text_66.getString());
  FIX::TimeInForce TimeInForce_38('2');
  msg.set(TimeInForce_38);
  OrderCancelReplaceRequest_0.insert(TimeInForce_38.getString());
  FIX::TradeDate TradeDate_27("LOCALMKTDATE_1160221737");
  msg.set(TradeDate_27);
  OrderCancelReplaceRequest_0.insert(TradeDate_27.getString());
  FIX::TradeOriginationDate TradeOriginationDate_19("LOCALMKTDATE_1364711435");
  msg.set(TradeOriginationDate_19);
  OrderCancelReplaceRequest_0.insert(TradeOriginationDate_19.getString());
  FIX::TransactTime TransactTime_48(FIX::UTCTIMESTAMP(17, 10, 50, 11, 6, 2016));
  msg.set(TransactTime_48);
  OrderCancelReplaceRequest_0.insert(TransactTime_48.getString());
  all_values.push_back(OrderCancelReplaceRequest_0);

  all_compo_names.insert("OrderCancelReplaceRequest");

  // CommissionData
  multiset<string> CommissionData_21;
  FIX::CommCurrency CommCurrency_21("USD");
  msg.set(CommCurrency_21);
  CommissionData_21.insert(CommCurrency_21.getString());
  FIX::CommType CommType_21('3');
  msg.set(CommType_21);
  CommissionData_21.insert(CommType_21.getString());
  FIX::Commission Commission_21;
  Commission_21.setString("2112994");
  msg.set(Commission_21);
  CommissionData_21.insert(Commission_21.getString());
  FIX::FundRenewWaiv FundRenewWaiv_21('Y');
  msg.set(FundRenewWaiv_21);
  CommissionData_21.insert(FundRenewWaiv_21.getString());
  all_values.push_back(CommissionData_21);
  all_compo_names.insert("CommissionData");

  // DiscretionInstructions
  multiset<string> DiscretionInstructions_9;
  FIX::DiscretionInst DiscretionInst_9('5');
  msg.set(DiscretionInst_9);
  DiscretionInstructions_9.insert(DiscretionInst_9.getString());
  FIX::DiscretionLimitType DiscretionLimitType_9(0);
  msg.set(DiscretionLimitType_9);
  DiscretionInstructions_9.insert(DiscretionLimitType_9.getString());
  FIX::DiscretionMoveType DiscretionMoveType_9(0);
  msg.set(DiscretionMoveType_9);
  DiscretionInstructions_9.insert(DiscretionMoveType_9.getString());
  FIX::DiscretionOffsetType DiscretionOffsetType_9(2);
  msg.set(DiscretionOffsetType_9);
  DiscretionInstructions_9.insert(DiscretionOffsetType_9.getString());
  FIX::DiscretionOffsetValue DiscretionOffsetValue_9;
  DiscretionOffsetValue_9.setString("13801739");
  msg.set(DiscretionOffsetValue_9);
  DiscretionInstructions_9.insert(DiscretionOffsetValue_9.getString());
  FIX::DiscretionRoundDirection DiscretionRoundDirection_9(1);
  msg.set(DiscretionRoundDirection_9);
  DiscretionInstructions_9.insert(DiscretionRoundDirection_9.getString());
  FIX::DiscretionScope DiscretionScope_9(3);
  msg.set(DiscretionScope_9);
  DiscretionInstructions_9.insert(DiscretionScope_9.getString());
  all_values.push_back(DiscretionInstructions_9);
  all_compo_names.insert("DiscretionInstructions");

  // DisplayInstruction
  multiset<string> DisplayInstruction_9;
  FIX::DisplayHighQty DisplayHighQty_9;
  DisplayHighQty_9.setString("10674256");
  msg.set(DisplayHighQty_9);
  DisplayInstruction_9.insert(DisplayHighQty_9.getString());
  FIX::DisplayLowQty DisplayLowQty_9;
  DisplayLowQty_9.setString("3731392");
  msg.set(DisplayLowQty_9);
  DisplayInstruction_9.insert(DisplayLowQty_9.getString());
  FIX::DisplayMethod DisplayMethod_9('3');
  msg.set(DisplayMethod_9);
  DisplayInstruction_9.insert(DisplayMethod_9.getString());
  FIX::DisplayMinIncr DisplayMinIncr_9;
  DisplayMinIncr_9.setString("3556419");
  msg.set(DisplayMinIncr_9);
  DisplayInstruction_9.insert(DisplayMinIncr_9.getString());
  FIX::DisplayQty DisplayQty_9;
  DisplayQty_9.setString("5010650");
  msg.set(DisplayQty_9);
  DisplayInstruction_9.insert(DisplayQty_9.getString());
  FIX::DisplayWhen DisplayWhen_9('2');
  msg.set(DisplayWhen_9);
  DisplayInstruction_9.insert(DisplayWhen_9.getString());
  FIX::RefreshQty RefreshQty_9;
  RefreshQty_9.setString("2846986");
  msg.set(RefreshQty_9);
  DisplayInstruction_9.insert(RefreshQty_9.getString());
  FIX::SecondaryDisplayQty SecondaryDisplayQty_9;
  SecondaryDisplayQty_9.setString("90557");
  msg.set(SecondaryDisplayQty_9);
  DisplayInstruction_9.insert(SecondaryDisplayQty_9.getString());
  all_values.push_back(DisplayInstruction_9);
  all_compo_names.insert("DisplayInstruction");

  // FinancingDetails
  multiset<string> FinancingDetails_13;
  FIX::AgreementCurrency AgreementCurrency_13("CAN");
  msg.set(AgreementCurrency_13);
  FinancingDetails_13.insert(AgreementCurrency_13.getString());
  FIX::AgreementDate AgreementDate_13("LOCALMKTDATE_1169277443");
  msg.set(AgreementDate_13);
  FinancingDetails_13.insert(AgreementDate_13.getString());
  FIX::AgreementDesc AgreementDesc_13("STRING_1319139494");
  msg.set(AgreementDesc_13);
  FinancingDetails_13.insert(AgreementDesc_13.getString());
  FIX::AgreementID AgreementID_13("STRING_1255649604");
  msg.set(AgreementID_13);
  FinancingDetails_13.insert(AgreementID_13.getString());
  FIX::DeliveryType DeliveryType_13(0);
  msg.set(DeliveryType_13);
  FinancingDetails_13.insert(DeliveryType_13.getString());
  FIX::EndDate EndDate_13("LOCALMKTDATE_217817056");
  msg.set(EndDate_13);
  FinancingDetails_13.insert(EndDate_13.getString());
  FIX::MarginRatio MarginRatio_13;
  MarginRatio_13.setString("50.140000");
  msg.set(MarginRatio_13);
  FinancingDetails_13.insert(MarginRatio_13.getString());
  FIX::StartDate StartDate_13("LOCALMKTDATE_1807506515");
  msg.set(StartDate_13);
  FinancingDetails_13.insert(StartDate_13.getString());
  FIX::TerminationType TerminationType_13(3);
  msg.set(TerminationType_13);
  FinancingDetails_13.insert(TerminationType_13.getString());
  all_values.push_back(FinancingDetails_13);
  all_compo_names.insert("FinancingDetails");

  // Instrument
  multiset<string> Instrument_55;
  FIX::AttachmentPoint AttachmentPoint_55;
  AttachmentPoint_55.setString("79.780000");
  msg.set(AttachmentPoint_55);
  Instrument_55.insert(AttachmentPoint_55.getString());
  FIX::CFICode CFICode_55("STRING_1797633706");
  msg.set(CFICode_55);
  Instrument_55.insert(CFICode_55.getString());
  FIX::CPProgram CPProgram_55(99);
  msg.set(CPProgram_55);
  Instrument_55.insert(CPProgram_55.getString());
  FIX::CPRegType CPRegType_55("STRING_1407816682");
  msg.set(CPRegType_55);
  Instrument_55.insert(CPRegType_55.getString());
  FIX::CapPrice CapPrice_55;
  CapPrice_55.setString("20089331");
  msg.set(CapPrice_55);
  Instrument_55.insert(CapPrice_55.getString());
  FIX::ContractMultiplier ContractMultiplier_55;
  ContractMultiplier_55.setString("1140923");
  msg.set(ContractMultiplier_55);
  Instrument_55.insert(ContractMultiplier_55.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_55(1);
  msg.set(ContractMultiplierUnit_55);
  Instrument_55.insert(ContractMultiplierUnit_55.getString());
  FIX::ContractSettlMonth ContractSettlMonth_55("MONTHYEAR_340091577");
  msg.set(ContractSettlMonth_55);
  Instrument_55.insert(ContractSettlMonth_55.getString());
  FIX::CountryOfIssue CountryOfIssue_55("COUNTRY_1304970343");
  msg.set(CountryOfIssue_55);
  Instrument_55.insert(CountryOfIssue_55.getString());
  FIX::CouponPaymentDate CouponPaymentDate_55("LOCALMKTDATE_407498546");
  msg.set(CouponPaymentDate_55);
  Instrument_55.insert(CouponPaymentDate_55.getString());
  FIX::CouponRate CouponRate_55;
  CouponRate_55.setString("54.960000");
  msg.set(CouponRate_55);
  Instrument_55.insert(CouponRate_55.getString());
  FIX::CreditRating CreditRating_55("STRING_1005969512");
  msg.set(CreditRating_55);
  Instrument_55.insert(CreditRating_55.getString());
  FIX::DatedDate DatedDate_55("LOCALMKTDATE_101198304");
  msg.set(DatedDate_55);
  Instrument_55.insert(DatedDate_55.getString());
  FIX::DetachmentPoint DetachmentPoint_55;
  DetachmentPoint_55.setString("75.280000");
  msg.set(DetachmentPoint_55);
  Instrument_55.insert(DetachmentPoint_55.getString());
  FIX::EncodedIssuer EncodedIssuer_55("DATA_1379108766");
  msg.set(EncodedIssuer_55);
  Instrument_55.insert(EncodedIssuer_55.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_55(579899606);
  msg.set(EncodedIssuerLen_55);
  Instrument_55.insert(EncodedIssuerLen_55.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_55("DATA_995849519");
  msg.set(EncodedSecurityDesc_55);
  Instrument_55.insert(EncodedSecurityDesc_55.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_55(1880173865);
  msg.set(EncodedSecurityDescLen_55);
  Instrument_55.insert(EncodedSecurityDescLen_55.getString());
  FIX::ExerciseStyle ExerciseStyle_55(1);
  msg.set(ExerciseStyle_55);
  Instrument_55.insert(ExerciseStyle_55.getString());
  FIX::Factor Factor_55;
  Factor_55.setString("12805481");
  msg.set(Factor_55);
  Instrument_55.insert(Factor_55.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_55(false);
  msg.set(FlexProductEligibilityIndicator_55);
  Instrument_55.insert(FlexProductEligibilityIndicator_55.getString());
  FIX::FlexibleIndicator FlexibleIndicator_55(false);
  msg.set(FlexibleIndicator_55);
  Instrument_55.insert(FlexibleIndicator_55.getString());
  FIX::FloorPrice FloorPrice_55;
  FloorPrice_55.setString("14115957");
  msg.set(FloorPrice_55);
  Instrument_55.insert(FloorPrice_55.getString());
  FIX::FlowScheduleType FlowScheduleType_55(2);
  msg.set(FlowScheduleType_55);
  Instrument_55.insert(FlowScheduleType_55.getString());
  FIX::InstrRegistry InstrRegistry_55("STRING_1747267583");
  msg.set(InstrRegistry_55);
  Instrument_55.insert(InstrRegistry_55.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_55('5');
  msg.set(InstrmtAssignmentMethod_55);
  Instrument_55.insert(InstrmtAssignmentMethod_55.getString());
  FIX::InterestAccrualDate InterestAccrualDate_55("LOCALMKTDATE_568673419");
  msg.set(InterestAccrualDate_55);
  Instrument_55.insert(InterestAccrualDate_55.getString());
  FIX::IssueDate IssueDate_55("LOCALMKTDATE_1965084640");
  msg.set(IssueDate_55);
  Instrument_55.insert(IssueDate_55.getString());
  FIX::Issuer Issuer_55("STRING_257313056");
  msg.set(Issuer_55);
  Instrument_55.insert(Issuer_55.getString());
  FIX::ListMethod ListMethod_55(1);
  msg.set(ListMethod_55);
  Instrument_55.insert(ListMethod_55.getString());
  FIX::LocaleOfIssue LocaleOfIssue_55("STRING_1503223194");
  msg.set(LocaleOfIssue_55);
  Instrument_55.insert(LocaleOfIssue_55.getString());
  FIX::MaturityDate MaturityDate_55("LOCALMKTDATE_2046251034");
  msg.set(MaturityDate_55);
  Instrument_55.insert(MaturityDate_55.getString());
  FIX::MaturityMonthYear MaturityMonthYear_55("MONTHYEAR_2026329993");
  msg.set(MaturityMonthYear_55);
  Instrument_55.insert(MaturityMonthYear_55.getString());
  FIX::MaturityTime MaturityTime_55("TZTIMEONLY_825908406");
  msg.set(MaturityTime_55);
  Instrument_55.insert(MaturityTime_55.getString());
  FIX::MinPriceIncrement MinPriceIncrement_55;
  MinPriceIncrement_55.setString("13065840");
  msg.set(MinPriceIncrement_55);
  Instrument_55.insert(MinPriceIncrement_55.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_55;
  MinPriceIncrementAmount_55.setString("18877794");
  msg.set(MinPriceIncrementAmount_55);
  Instrument_55.insert(MinPriceIncrementAmount_55.getString());
  FIX::NTPositionLimit NTPositionLimit_55(940000765);
  msg.set(NTPositionLimit_55);
  Instrument_55.insert(NTPositionLimit_55.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_55;
  NotionalPercentageOutstanding_55.setString("57.810000");
  msg.set(NotionalPercentageOutstanding_55);
  Instrument_55.insert(NotionalPercentageOutstanding_55.getString());
  FIX::OptAttribute OptAttribute_55('8');
  msg.set(OptAttribute_55);
  Instrument_55.insert(OptAttribute_55.getString());
  FIX::OptPayoutAmount OptPayoutAmount_55;
  OptPayoutAmount_55.setString("974874");
  msg.set(OptPayoutAmount_55);
  Instrument_55.insert(OptPayoutAmount_55.getString());
  FIX::OptPayoutType OptPayoutType_55(2);
  msg.set(OptPayoutType_55);
  Instrument_55.insert(OptPayoutType_55.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_55;
  OriginalNotionalPercentageOutstanding_55.setString("28.910000");
  msg.set(OriginalNotionalPercentageOutstanding_55);
  Instrument_55.insert(OriginalNotionalPercentageOutstanding_55.getString());
  FIX::Pool Pool_55("STRING_1103456973");
  msg.set(Pool_55);
  Instrument_55.insert(Pool_55.getString());
  FIX::PositionLimit PositionLimit_55(950232631);
  msg.set(PositionLimit_55);
  Instrument_55.insert(PositionLimit_55.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_55("STRING_PCTPAR");
  msg.set(PriceQuoteMethod_55);
  Instrument_55.insert(PriceQuoteMethod_55.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_55("STRING_335082091");
  msg.set(PriceUnitOfMeasure_55);
  Instrument_55.insert(PriceUnitOfMeasure_55.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_55;
  PriceUnitOfMeasureQty_55.setString("15301322");
  msg.set(PriceUnitOfMeasureQty_55);
  Instrument_55.insert(PriceUnitOfMeasureQty_55.getString());
  FIX::Product Product_57(2);
  msg.set(Product_57);
  Instrument_55.insert(Product_57.getString());
  FIX::ProductComplex ProductComplex_55("STRING_67772308");
  msg.set(ProductComplex_55);
  Instrument_55.insert(ProductComplex_55.getString());
  FIX::PutOrCall PutOrCall_55(0);
  msg.set(PutOrCall_55);
  Instrument_55.insert(PutOrCall_55.getString());
  FIX::RedemptionDate RedemptionDate_55("LOCALMKTDATE_422290786");
  msg.set(RedemptionDate_55);
  Instrument_55.insert(RedemptionDate_55.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_55("STRING_1957001880");
  msg.set(RepoCollateralSecurityType_55);
  Instrument_55.insert(RepoCollateralSecurityType_55.getString());
  FIX::RepurchaseRate RepurchaseRate_55;
  RepurchaseRate_55.setString("67.090000");
  msg.set(RepurchaseRate_55);
  Instrument_55.insert(RepurchaseRate_55.getString());
  FIX::RepurchaseTerm RepurchaseTerm_55(1833886519);
  msg.set(RepurchaseTerm_55);
  Instrument_55.insert(RepurchaseTerm_55.getString());
  FIX::RestructuringType RestructuringType_55("STRING_XR");
  msg.set(RestructuringType_55);
  Instrument_55.insert(RestructuringType_55.getString());
  FIX::SecurityDesc SecurityDesc_55("STRING_2031744293");
  msg.set(SecurityDesc_55);
  Instrument_55.insert(SecurityDesc_55.getString());
  FIX::SecurityExchange SecurityExchange_55("EXCHANGE_206164561");
  msg.set(SecurityExchange_55);
  Instrument_55.insert(SecurityExchange_55.getString());
  FIX::SecurityGroup SecurityGroup_55("STRING_1289215018");
  msg.set(SecurityGroup_55);
  Instrument_55.insert(SecurityGroup_55.getString());
  FIX::SecurityID SecurityID_55("STRING_1849345285");
  msg.set(SecurityID_55);
  Instrument_55.insert(SecurityID_55.getString());
  FIX::SecurityIDSource SecurityIDSource_55("STRING_A");
  msg.set(SecurityIDSource_55);
  Instrument_55.insert(SecurityIDSource_55.getString());
  FIX::SecurityStatus SecurityStatus_55("STRING_2");
  msg.set(SecurityStatus_55);
  Instrument_55.insert(SecurityStatus_55.getString());
  FIX::SecuritySubType SecuritySubType_56("STRING_1205084831");
  msg.set(SecuritySubType_56);
  Instrument_55.insert(SecuritySubType_56.getString());
  FIX::SecurityType SecurityType_57("STRING_VRDN");
  msg.set(SecurityType_57);
  Instrument_55.insert(SecurityType_57.getString());
  FIX::Seniority Seniority_55("STRING_SR");
  msg.set(Seniority_55);
  Instrument_55.insert(Seniority_55.getString());
  FIX::SettlMethod SettlMethod_55('P');
  msg.set(SettlMethod_55);
  Instrument_55.insert(SettlMethod_55.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_55("STRING_1668829072");
  msg.set(SettleOnOpenFlag_55);
  Instrument_55.insert(SettleOnOpenFlag_55.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_55("STRING_1137053468");
  msg.set(StateOrProvinceOfIssue_55);
  Instrument_55.insert(StateOrProvinceOfIssue_55.getString());
  FIX::StrikeCurrency StrikeCurrency_55("CHF");
  msg.set(StrikeCurrency_55);
  Instrument_55.insert(StrikeCurrency_55.getString());
  FIX::StrikeMultiplier StrikeMultiplier_55;
  StrikeMultiplier_55.setString("12174408");
  msg.set(StrikeMultiplier_55);
  Instrument_55.insert(StrikeMultiplier_55.getString());
  FIX::StrikePrice StrikePrice_55;
  StrikePrice_55.setString("9209978");
  msg.set(StrikePrice_55);
  Instrument_55.insert(StrikePrice_55.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_55(3);
  msg.set(StrikePriceBoundaryMethod_55);
  Instrument_55.insert(StrikePriceBoundaryMethod_55.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_55;
  StrikePriceBoundaryPrecision_55.setString("1.070000");
  msg.set(StrikePriceBoundaryPrecision_55);
  Instrument_55.insert(StrikePriceBoundaryPrecision_55.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_55(1);
  msg.set(StrikePriceDeterminationMethod_55);
  Instrument_55.insert(StrikePriceDeterminationMethod_55.getString());
  FIX::StrikeValue StrikeValue_55;
  StrikeValue_55.setString("17621481");
  msg.set(StrikeValue_55);
  Instrument_55.insert(StrikeValue_55.getString());
  FIX::Symbol Symbol_55("STRING_1163986878");
  msg.set(Symbol_55);
  Instrument_55.insert(Symbol_55.getString());
  FIX::SymbolSfx SymbolSfx_55("STRING_WI");
  msg.set(SymbolSfx_55);
  Instrument_55.insert(SymbolSfx_55.getString());
  FIX::TimeUnit TimeUnit_55("STRING_Min");
  msg.set(TimeUnit_55);
  Instrument_55.insert(TimeUnit_55.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_55(2);
  msg.set(UnderlyingPriceDeterminationMethod_55);
  Instrument_55.insert(UnderlyingPriceDeterminationMethod_55.getString());
  FIX::UnitOfMeasure UnitOfMeasure_55("STRING_Gal");
  msg.set(UnitOfMeasure_55);
  Instrument_55.insert(UnitOfMeasure_55.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_55;
  UnitOfMeasureQty_55.setString("10011453");
  msg.set(UnitOfMeasureQty_55);
  Instrument_55.insert(UnitOfMeasureQty_55.getString());
  FIX::ValuationMethod ValuationMethod_55("STRING_FUTDA");
  msg.set(ValuationMethod_55);
  Instrument_55.insert(ValuationMethod_55.getString());
  all_values.push_back(Instrument_55);
  all_compo_names.insert("Instrument");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::OrderCancelReplaceRequest::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_110;
    FIX::ComplexEventCondition ComplexEventCondition_110(1);
    noComplexEvents_0_0.set(ComplexEventCondition_110);
    ComplexEvents_NoComplexEvents_110.insert(ComplexEventCondition_110.getString());
    FIX::ComplexEventPrice ComplexEventPrice_110;
    ComplexEventPrice_110.setString("4144231");
    noComplexEvents_0_0.set(ComplexEventPrice_110);
    ComplexEvents_NoComplexEvents_110.insert(ComplexEventPrice_110.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_110(2);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_110);
    ComplexEvents_NoComplexEvents_110.insert(ComplexEventPriceBoundaryMethod_110.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_110;
    ComplexEventPriceBoundaryPrecision_110.setString("27.270000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_110);
    ComplexEvents_NoComplexEvents_110.insert(ComplexEventPriceBoundaryPrecision_110.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_110(1);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_110);
    ComplexEvents_NoComplexEvents_110.insert(ComplexEventPriceTimeType_110.getString());
    FIX::ComplexEventType ComplexEventType_110(6);
    noComplexEvents_0_0.set(ComplexEventType_110);
    ComplexEvents_NoComplexEvents_110.insert(ComplexEventType_110.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_110;
    ComplexOptPayoutAmount_110.setString("8717443");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_110);
    ComplexEvents_NoComplexEvents_110.insert(ComplexOptPayoutAmount_110.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_110);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_224;
      FIX::ComplexEventEndDate ComplexEventEndDate_224(FIX::UTCTIMESTAMP(19, 40, 9, 12, 2, 2006));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_224);
      ComplexEventDates_NoComplexEventDates_224.insert(ComplexEventEndDate_224.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_224(FIX::UTCTIMESTAMP(14, 13, 6, 7, 5, 2000));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_224);
      ComplexEventDates_NoComplexEventDates_224.insert(ComplexEventStartDate_224.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_224);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_455;
        FIX::ComplexEventEndTime ComplexEventEndTime_455(FIX::UTCTIMEONLY(14, 3, 52));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_455);
        ComplexEventTimes_NoComplexEventTimes_455.insert(ComplexEventEndTime_455.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_455(FIX::UTCTIMEONLY(3, 39, 30));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_455);
        ComplexEventTimes_NoComplexEventTimes_455.insert(ComplexEventStartTime_455.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_455);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::OrderCancelReplaceRequest::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_111;
    FIX::ComplexEventCondition ComplexEventCondition_111(2);
    noComplexEvents_0_1.set(ComplexEventCondition_111);
    ComplexEvents_NoComplexEvents_111.insert(ComplexEventCondition_111.getString());
    FIX::ComplexEventPrice ComplexEventPrice_111;
    ComplexEventPrice_111.setString("1136154");
    noComplexEvents_0_1.set(ComplexEventPrice_111);
    ComplexEvents_NoComplexEvents_111.insert(ComplexEventPrice_111.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_111(4);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_111);
    ComplexEvents_NoComplexEvents_111.insert(ComplexEventPriceBoundaryMethod_111.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_111;
    ComplexEventPriceBoundaryPrecision_111.setString("66.760000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_111);
    ComplexEvents_NoComplexEvents_111.insert(ComplexEventPriceBoundaryPrecision_111.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_111(1);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_111);
    ComplexEvents_NoComplexEvents_111.insert(ComplexEventPriceTimeType_111.getString());
    FIX::ComplexEventType ComplexEventType_111(3);
    noComplexEvents_0_1.set(ComplexEventType_111);
    ComplexEvents_NoComplexEvents_111.insert(ComplexEventType_111.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_111;
    ComplexOptPayoutAmount_111.setString("3878573");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_111);
    ComplexEvents_NoComplexEvents_111.insert(ComplexOptPayoutAmount_111.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_111);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_225;
      FIX::ComplexEventEndDate ComplexEventEndDate_225(FIX::UTCTIMESTAMP(3, 0, 23, 7, 2, 2009));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_225);
      ComplexEventDates_NoComplexEventDates_225.insert(ComplexEventEndDate_225.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_225(FIX::UTCTIMESTAMP(7, 46, 4, 22, 8, 2010));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_225);
      ComplexEventDates_NoComplexEventDates_225.insert(ComplexEventStartDate_225.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_225);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_456;
        FIX::ComplexEventEndTime ComplexEventEndTime_456(FIX::UTCTIMEONLY(4, 36, 54));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_456);
        ComplexEventTimes_NoComplexEventTimes_456.insert(ComplexEventEndTime_456.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_456(FIX::UTCTIMEONLY(3, 25, 32));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_456);
        ComplexEventTimes_NoComplexEventTimes_456.insert(ComplexEventStartTime_456.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_456);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::OrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_457;
        FIX::ComplexEventEndTime ComplexEventEndTime_457(FIX::UTCTIMEONLY(20, 25, 49));
        noComplexEventTimes_1_0_2_1.set(ComplexEventEndTime_457);
        ComplexEventTimes_NoComplexEventTimes_457.insert(ComplexEventEndTime_457.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_457(FIX::UTCTIMEONLY(4, 42, 46));
        noComplexEventTimes_1_0_2_1.set(ComplexEventStartTime_457);
        ComplexEventTimes_NoComplexEventTimes_457.insert(ComplexEventStartTime_457.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_457);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      {
        FIX50SP2::OrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_458;
        FIX::ComplexEventEndTime ComplexEventEndTime_458(FIX::UTCTIMEONLY(9, 46, 8));
        noComplexEventTimes_1_0_2_2.set(ComplexEventEndTime_458);
        ComplexEventTimes_NoComplexEventTimes_458.insert(ComplexEventEndTime_458.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_458(FIX::UTCTIMEONLY(15, 41, 55));
        noComplexEventTimes_1_0_2_2.set(ComplexEventStartTime_458);
        ComplexEventTimes_NoComplexEventTimes_458.insert(ComplexEventStartTime_458.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_458);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::OrderCancelReplaceRequest::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_106;
    FIX::EventDate EventDate_106("LOCALMKTDATE_74353520");
    noEvents_0_0.set(EventDate_106);
    EvntGrp_NoEvents_106.insert(EventDate_106.getString());
    FIX::EventPx EventPx_106;
    EventPx_106.setString("10226008");
    noEvents_0_0.set(EventPx_106);
    EvntGrp_NoEvents_106.insert(EventPx_106.getString());
    FIX::EventText EventText_106("STRING_1192896025");
    noEvents_0_0.set(EventText_106);
    EvntGrp_NoEvents_106.insert(EventText_106.getString());
    FIX::EventTime EventTime_106(FIX::UTCTIMESTAMP(1, 58, 41, 14, 11, 2017));
    noEvents_0_0.set(EventTime_106);
    EvntGrp_NoEvents_106.insert(EventTime_106.getString());
    FIX::EventType EventType_106(5);
    noEvents_0_0.set(EventType_106);
    EvntGrp_NoEvents_106.insert(EventType_106.getString());
    all_values.push_back(EvntGrp_NoEvents_106);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::OrderCancelReplaceRequest::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_107;
    FIX::EventDate EventDate_107("LOCALMKTDATE_127068077");
    noEvents_0_1.set(EventDate_107);
    EvntGrp_NoEvents_107.insert(EventDate_107.getString());
    FIX::EventPx EventPx_107;
    EventPx_107.setString("18213670");
    noEvents_0_1.set(EventPx_107);
    EvntGrp_NoEvents_107.insert(EventPx_107.getString());
    FIX::EventText EventText_107("STRING_1092428777");
    noEvents_0_1.set(EventText_107);
    EvntGrp_NoEvents_107.insert(EventText_107.getString());
    FIX::EventTime EventTime_107(FIX::UTCTIMESTAMP(0, 34, 40, 7, 7, 2002));
    noEvents_0_1.set(EventTime_107);
    EvntGrp_NoEvents_107.insert(EventTime_107.getString());
    FIX::EventType EventType_107(14);
    noEvents_0_1.set(EventType_107);
    EvntGrp_NoEvents_107.insert(EventType_107.getString());
    all_values.push_back(EvntGrp_NoEvents_107);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::OrderCancelReplaceRequest::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_108;
    FIX::EventDate EventDate_108("LOCALMKTDATE_163658572");
    noEvents_0_2.set(EventDate_108);
    EvntGrp_NoEvents_108.insert(EventDate_108.getString());
    FIX::EventPx EventPx_108;
    EventPx_108.setString("8303789");
    noEvents_0_2.set(EventPx_108);
    EvntGrp_NoEvents_108.insert(EventPx_108.getString());
    FIX::EventText EventText_108("STRING_241996171");
    noEvents_0_2.set(EventText_108);
    EvntGrp_NoEvents_108.insert(EventText_108.getString());
    FIX::EventTime EventTime_108(FIX::UTCTIMESTAMP(16, 26, 42, 15, 5, 2008));
    noEvents_0_2.set(EventTime_108);
    EvntGrp_NoEvents_108.insert(EventTime_108.getString());
    FIX::EventType EventType_108(3);
    noEvents_0_2.set(EventType_108);
    EvntGrp_NoEvents_108.insert(EventType_108.getString());
    all_values.push_back(EvntGrp_NoEvents_108);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::OrderCancelReplaceRequest::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_112;
    FIX::InstrumentPartyID InstrumentPartyID_112("STRING_574095213");
    noInstrumentParties_0_0.set(InstrumentPartyID_112);
    InstrumentParties_NoInstrumentParties_112.insert(InstrumentPartyID_112.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_112('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_112);
    InstrumentParties_NoInstrumentParties_112.insert(InstrumentPartyIDSource_112.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_112(745152403);
    noInstrumentParties_0_0.set(InstrumentPartyRole_112);
    InstrumentParties_NoInstrumentParties_112.insert(InstrumentPartyRole_112.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_112);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::OrderCancelReplaceRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_213;
      FIX::InstrumentPartySubID InstrumentPartySubID_213("STRING_565235438");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_213);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_213.insert(InstrumentPartySubID_213.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_213(1637291837);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_213);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_213.insert(InstrumentPartySubIDType_213.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_213);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::OrderCancelReplaceRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_214;
      FIX::InstrumentPartySubID InstrumentPartySubID_214("STRING_458029961");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_214);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_214.insert(InstrumentPartySubID_214.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_214(901319602);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_214);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_214.insert(InstrumentPartySubIDType_214.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_214);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::OrderCancelReplaceRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_215;
      FIX::InstrumentPartySubID InstrumentPartySubID_215("STRING_1764359915");
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubID_215);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_215.insert(InstrumentPartySubID_215.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_215(131913333);
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubIDType_215);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_215.insert(InstrumentPartySubIDType_215.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_215);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::OrderCancelReplaceRequest::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_113;
    FIX::InstrumentPartyID InstrumentPartyID_113("STRING_1993748379");
    noInstrumentParties_0_1.set(InstrumentPartyID_113);
    InstrumentParties_NoInstrumentParties_113.insert(InstrumentPartyID_113.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_113('1');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_113);
    InstrumentParties_NoInstrumentParties_113.insert(InstrumentPartyIDSource_113.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_113(356248102);
    noInstrumentParties_0_1.set(InstrumentPartyRole_113);
    InstrumentParties_NoInstrumentParties_113.insert(InstrumentPartyRole_113.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_113);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::OrderCancelReplaceRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_216;
      FIX::InstrumentPartySubID InstrumentPartySubID_216("STRING_720536877");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_216);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_216.insert(InstrumentPartySubID_216.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_216(1865237437);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_216);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_216.insert(InstrumentPartySubIDType_216.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_216);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::OrderCancelReplaceRequest::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_114;
    FIX::InstrumentPartyID InstrumentPartyID_114("STRING_521156772");
    noInstrumentParties_0_2.set(InstrumentPartyID_114);
    InstrumentParties_NoInstrumentParties_114.insert(InstrumentPartyID_114.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_114('1');
    noInstrumentParties_0_2.set(InstrumentPartyIDSource_114);
    InstrumentParties_NoInstrumentParties_114.insert(InstrumentPartyIDSource_114.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_114(34698922);
    noInstrumentParties_0_2.set(InstrumentPartyRole_114);
    InstrumentParties_NoInstrumentParties_114.insert(InstrumentPartyRole_114.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_114);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::OrderCancelReplaceRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_217;
      FIX::InstrumentPartySubID InstrumentPartySubID_217("STRING_283995091");
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubID_217);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_217.insert(InstrumentPartySubID_217.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_217(276695093);
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubIDType_217);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_217.insert(InstrumentPartySubIDType_217.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_217);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::OrderCancelReplaceRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_218;
      FIX::InstrumentPartySubID InstrumentPartySubID_218("STRING_1386910805");
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubID_218);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_218.insert(InstrumentPartySubID_218.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_218(1194248027);
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubIDType_218);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_218.insert(InstrumentPartySubIDType_218.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_218);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_1);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::OrderCancelReplaceRequest::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_101;
    FIX::SecurityAltID SecurityAltID_101("STRING_858753279");
    noSecurityAltID_0_0.set(SecurityAltID_101);
    SecAltIDGrp_NoSecurityAltID_101.insert(SecurityAltID_101.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_101("STRING_803314911");
    noSecurityAltID_0_0.set(SecurityAltIDSource_101);
    SecAltIDGrp_NoSecurityAltID_101.insert(SecurityAltIDSource_101.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_101);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::OrderCancelReplaceRequest::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_102;
    FIX::SecurityAltID SecurityAltID_102("STRING_1215447047");
    noSecurityAltID_0_1.set(SecurityAltID_102);
    SecAltIDGrp_NoSecurityAltID_102.insert(SecurityAltID_102.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_102("STRING_404949273");
    noSecurityAltID_0_1.set(SecurityAltIDSource_102);
    SecAltIDGrp_NoSecurityAltID_102.insert(SecurityAltIDSource_102.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_102);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_110;
  FIX::SecurityXML SecurityXML_111("XMLDATA_1434982613");
  msg.set(SecurityXML_111);
  FIX::SecurityXMLLen SecurityXMLLen_55(1095296793);
  msg.set(SecurityXMLLen_55);
  FIX::SecurityXMLSchema SecurityXMLSchema_55("STRING_979044486");
  msg.set(SecurityXMLSchema_55);
  SecurityXML_110.insert(SecurityXMLSchema_55.getString());
  all_values.push_back(SecurityXML_110);
  all_compo_names.insert("SecurityXML");

  // OrderQtyData
  multiset<string> OrderQtyData_17;
  FIX::CashOrderQty CashOrderQty_17;
  CashOrderQty_17.setString("4049215");
  msg.set(CashOrderQty_17);
  OrderQtyData_17.insert(CashOrderQty_17.getString());
  FIX::OrderPercent OrderPercent_17;
  OrderPercent_17.setString("91.960000");
  msg.set(OrderPercent_17);
  OrderQtyData_17.insert(OrderPercent_17.getString());
  FIX::OrderQty OrderQty_27;
  OrderQty_27.setString("525433");
  msg.set(OrderQty_27);
  OrderQtyData_17.insert(OrderQty_27.getString());
  FIX::RoundingDirection RoundingDirection_17('0');
  msg.set(RoundingDirection_17);
  OrderQtyData_17.insert(RoundingDirection_17.getString());
  FIX::RoundingModulus RoundingModulus_17;
  RoundingModulus_17.setString("13302573");
  msg.set(RoundingModulus_17);
  OrderQtyData_17.insert(RoundingModulus_17.getString());
  all_values.push_back(OrderQtyData_17);
  all_compo_names.insert("OrderQtyData");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::OrderCancelReplaceRequest::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_78;
    FIX::PartyID PartyID_78("STRING_1871476550");
    noPartyIDs_0_0.set(PartyID_78);
    Parties_NoPartyIDs_78.insert(PartyID_78.getString());
    FIX::PartyIDSource PartyIDSource_78('1');
    noPartyIDs_0_0.set(PartyIDSource_78);
    Parties_NoPartyIDs_78.insert(PartyIDSource_78.getString());
    FIX::PartyRole PartyRole_78(3);
    noPartyIDs_0_0.set(PartyRole_78);
    Parties_NoPartyIDs_78.insert(PartyRole_78.getString());
    all_values.push_back(Parties_NoPartyIDs_78);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderCancelReplaceRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_173;
      FIX::PartySubID PartySubID_173("STRING_419720590");
      noPartySubIDs_0_1_0.set(PartySubID_173);
      PtysSubGrp_NoPartySubIDs_173.insert(PartySubID_173.getString());
      FIX::PartySubIDType PartySubIDType_173(19);
      noPartySubIDs_0_1_0.set(PartySubIDType_173);
      PtysSubGrp_NoPartySubIDs_173.insert(PartySubIDType_173.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_173);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::OrderCancelReplaceRequest::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_79;
    FIX::PartyID PartyID_79("STRING_1943254467");
    noPartyIDs_0_1.set(PartyID_79);
    Parties_NoPartyIDs_79.insert(PartyID_79.getString());
    FIX::PartyIDSource PartyIDSource_79('8');
    noPartyIDs_0_1.set(PartyIDSource_79);
    Parties_NoPartyIDs_79.insert(PartyIDSource_79.getString());
    FIX::PartyRole PartyRole_79(79);
    noPartyIDs_0_1.set(PartyRole_79);
    Parties_NoPartyIDs_79.insert(PartyRole_79.getString());
    all_values.push_back(Parties_NoPartyIDs_79);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderCancelReplaceRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_174;
      FIX::PartySubID PartySubID_174("STRING_593873651");
      noPartySubIDs_1_1_0.set(PartySubID_174);
      PtysSubGrp_NoPartySubIDs_174.insert(PartySubID_174.getString());
      FIX::PartySubIDType PartySubIDType_174(19);
      noPartySubIDs_1_1_0.set(PartySubIDType_174);
      PtysSubGrp_NoPartySubIDs_174.insert(PartySubIDType_174.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_174);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::OrderCancelReplaceRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_175;
      FIX::PartySubID PartySubID_175("STRING_1001742936");
      noPartySubIDs_1_1_1.set(PartySubID_175);
      PtysSubGrp_NoPartySubIDs_175.insert(PartySubID_175.getString());
      FIX::PartySubIDType PartySubIDType_175(4);
      noPartySubIDs_1_1_1.set(PartySubIDType_175);
      PtysSubGrp_NoPartySubIDs_175.insert(PartySubIDType_175.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_175);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::OrderCancelReplaceRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_176;
      FIX::PartySubID PartySubID_176("STRING_1027882592");
      noPartySubIDs_1_1_2.set(PartySubID_176);
      PtysSubGrp_NoPartySubIDs_176.insert(PartySubID_176.getString());
      FIX::PartySubIDType PartySubIDType_176(22);
      noPartySubIDs_1_1_2.set(PartySubIDType_176);
      PtysSubGrp_NoPartySubIDs_176.insert(PartySubIDType_176.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_176);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_2);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::OrderCancelReplaceRequest::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_80;
    FIX::PartyID PartyID_80("STRING_2072116770");
    noPartyIDs_0_2.set(PartyID_80);
    Parties_NoPartyIDs_80.insert(PartyID_80.getString());
    FIX::PartyIDSource PartyIDSource_80('F');
    noPartyIDs_0_2.set(PartyIDSource_80);
    Parties_NoPartyIDs_80.insert(PartyIDSource_80.getString());
    FIX::PartyRole PartyRole_80(74);
    noPartyIDs_0_2.set(PartyRole_80);
    Parties_NoPartyIDs_80.insert(PartyRole_80.getString());
    all_values.push_back(Parties_NoPartyIDs_80);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderCancelReplaceRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_177;
      FIX::PartySubID PartySubID_177("STRING_476855671");
      noPartySubIDs_2_1_0.set(PartySubID_177);
      PtysSubGrp_NoPartySubIDs_177.insert(PartySubID_177.getString());
      FIX::PartySubIDType PartySubIDType_177(13);
      noPartySubIDs_2_1_0.set(PartySubIDType_177);
      PtysSubGrp_NoPartySubIDs_177.insert(PartySubIDType_177.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_177);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::OrderCancelReplaceRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_178;
      FIX::PartySubID PartySubID_178("STRING_15446998");
      noPartySubIDs_2_1_1.set(PartySubID_178);
      PtysSubGrp_NoPartySubIDs_178.insert(PartySubID_178.getString());
      FIX::PartySubIDType PartySubIDType_178(26);
      noPartySubIDs_2_1_1.set(PartySubIDType_178);
      PtysSubGrp_NoPartySubIDs_178.insert(PartySubIDType_178.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_178);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_1);
    }
    msg.addGroup(noPartyIDs_0_2);
  }
  // PegInstructions
  multiset<string> PegInstructions_9;
  FIX::PegLimitType PegLimitType_9(1);
  msg.set(PegLimitType_9);
  PegInstructions_9.insert(PegLimitType_9.getString());
  FIX::PegMoveType PegMoveType_9(0);
  msg.set(PegMoveType_9);
  PegInstructions_9.insert(PegMoveType_9.getString());
  FIX::PegOffsetType PegOffsetType_9(0);
  msg.set(PegOffsetType_9);
  PegInstructions_9.insert(PegOffsetType_9.getString());
  FIX::PegOffsetValue PegOffsetValue_9;
  PegOffsetValue_9.setString("3889768");
  msg.set(PegOffsetValue_9);
  PegInstructions_9.insert(PegOffsetValue_9.getString());
  FIX::PegPriceType PegPriceType_9(9);
  msg.set(PegPriceType_9);
  PegInstructions_9.insert(PegPriceType_9.getString());
  FIX::PegRoundDirection PegRoundDirection_9(1);
  msg.set(PegRoundDirection_9);
  PegInstructions_9.insert(PegRoundDirection_9.getString());
  FIX::PegScope PegScope_9(1);
  msg.set(PegScope_9);
  PegInstructions_9.insert(PegScope_9.getString());
  FIX::PegSecurityDesc PegSecurityDesc_9("STRING_1114518357");
  msg.set(PegSecurityDesc_9);
  PegInstructions_9.insert(PegSecurityDesc_9.getString());
  FIX::PegSecurityID PegSecurityID_9("STRING_1395025403");
  msg.set(PegSecurityID_9);
  PegInstructions_9.insert(PegSecurityID_9.getString());
  FIX::PegSecurityIDSource PegSecurityIDSource_9("STRING_1542036915");
  msg.set(PegSecurityIDSource_9);
  PegInstructions_9.insert(PegSecurityIDSource_9.getString());
  FIX::PegSymbol PegSymbol_9("STRING_684775991");
  msg.set(PegSymbol_9);
  PegInstructions_9.insert(PegSymbol_9.getString());
  all_values.push_back(PegInstructions_9);
  all_compo_names.insert("PegInstructions");

  // PreAllocGrp
  // Group PreAllocGrp.NoAllocs
  {
    FIX50SP2::OrderCancelReplaceRequest::NoAllocs noAllocs_0_0;
    // PreAllocGrp.NoAllocs
    multiset<string> PreAllocGrp_NoAllocs_22;
    FIX::AllocAccount AllocAccount_35("STRING_393288055");
    noAllocs_0_0.set(AllocAccount_35);
    PreAllocGrp_NoAllocs_22.insert(AllocAccount_35.getString());
    FIX::AllocAcctIDSource AllocAcctIDSource_35(480546810);
    noAllocs_0_0.set(AllocAcctIDSource_35);
    PreAllocGrp_NoAllocs_22.insert(AllocAcctIDSource_35.getString());
    FIX::AllocQty AllocQty_34;
    AllocQty_34.setString("8075198");
    noAllocs_0_0.set(AllocQty_34);
    PreAllocGrp_NoAllocs_22.insert(AllocQty_34.getString());
    FIX::AllocSettlCurrency AllocSettlCurrency_30("GBP");
    noAllocs_0_0.set(AllocSettlCurrency_30);
    PreAllocGrp_NoAllocs_22.insert(AllocSettlCurrency_30.getString());
    FIX::IndividualAllocID IndividualAllocID_35("STRING_1401393465");
    noAllocs_0_0.set(IndividualAllocID_35);
    PreAllocGrp_NoAllocs_22.insert(IndividualAllocID_35.getString());
    all_values.push_back(PreAllocGrp_NoAllocs_22);
    all_compo_names.insert("PreAllocGrp.NoAllocs");

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::OrderCancelReplaceRequest::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_73;
      FIX::NestedPartyID NestedPartyID_73("STRING_1799217339");
      noNestedPartyIDs_0_1_0.set(NestedPartyID_73);
      NestedParties_NoNestedPartyIDs_73.insert(NestedPartyID_73.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_73('1');
      noNestedPartyIDs_0_1_0.set(NestedPartyIDSource_73);
      NestedParties_NoNestedPartyIDs_73.insert(NestedPartyIDSource_73.getString());
      FIX::NestedPartyRole NestedPartyRole_73(741363077);
      noNestedPartyIDs_0_1_0.set(NestedPartyRole_73);
      NestedParties_NoNestedPartyIDs_73.insert(NestedPartyRole_73.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_73);
      all_compo_names.insert("NestedParties.NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::OrderCancelReplaceRequest::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_159;
        FIX::NestedPartySubID NestedPartySubID_159("STRING_56411682");
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubID_159);
        NstdPtysSubGrp_NoNestedPartySubIDs_159.insert(NestedPartySubID_159.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_159(2771700);
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubIDType_159);
        NstdPtysSubGrp_NoNestedPartySubIDs_159.insert(NestedPartySubIDType_159.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_159);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::OrderCancelReplaceRequest::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_74;
      FIX::NestedPartyID NestedPartyID_74("STRING_992827157");
      noNestedPartyIDs_0_1_1.set(NestedPartyID_74);
      NestedParties_NoNestedPartyIDs_74.insert(NestedPartyID_74.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_74('7');
      noNestedPartyIDs_0_1_1.set(NestedPartyIDSource_74);
      NestedParties_NoNestedPartyIDs_74.insert(NestedPartyIDSource_74.getString());
      FIX::NestedPartyRole NestedPartyRole_74(479627371);
      noNestedPartyIDs_0_1_1.set(NestedPartyRole_74);
      NestedParties_NoNestedPartyIDs_74.insert(NestedPartyRole_74.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_74);
      all_compo_names.insert("NestedParties.NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::OrderCancelReplaceRequest::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_160;
        FIX::NestedPartySubID NestedPartySubID_160("STRING_799806713");
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubID_160);
        NstdPtysSubGrp_NoNestedPartySubIDs_160.insert(NestedPartySubID_160.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_160(2051779835);
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubIDType_160);
        NstdPtysSubGrp_NoNestedPartySubIDs_160.insert(NestedPartySubIDType_160.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_160);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_1);
    }
    msg.addGroup(noAllocs_0_0);
  }
  {
    FIX50SP2::OrderCancelReplaceRequest::NoAllocs noAllocs_0_1;
    // PreAllocGrp.NoAllocs
    multiset<string> PreAllocGrp_NoAllocs_23;
    FIX::AllocAccount AllocAccount_36("STRING_686649638");
    noAllocs_0_1.set(AllocAccount_36);
    PreAllocGrp_NoAllocs_23.insert(AllocAccount_36.getString());
    FIX::AllocAcctIDSource AllocAcctIDSource_36(1220175221);
    noAllocs_0_1.set(AllocAcctIDSource_36);
    PreAllocGrp_NoAllocs_23.insert(AllocAcctIDSource_36.getString());
    FIX::AllocQty AllocQty_35;
    AllocQty_35.setString("11694142");
    noAllocs_0_1.set(AllocQty_35);
    PreAllocGrp_NoAllocs_23.insert(AllocQty_35.getString());
    FIX::AllocSettlCurrency AllocSettlCurrency_31("EUR");
    noAllocs_0_1.set(AllocSettlCurrency_31);
    PreAllocGrp_NoAllocs_23.insert(AllocSettlCurrency_31.getString());
    FIX::IndividualAllocID IndividualAllocID_36("STRING_1617305950");
    noAllocs_0_1.set(IndividualAllocID_36);
    PreAllocGrp_NoAllocs_23.insert(IndividualAllocID_36.getString());
    all_values.push_back(PreAllocGrp_NoAllocs_23);
    all_compo_names.insert("PreAllocGrp.NoAllocs");

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::OrderCancelReplaceRequest::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_75;
      FIX::NestedPartyID NestedPartyID_75("STRING_1577735386");
      noNestedPartyIDs_1_1_0.set(NestedPartyID_75);
      NestedParties_NoNestedPartyIDs_75.insert(NestedPartyID_75.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_75('8');
      noNestedPartyIDs_1_1_0.set(NestedPartyIDSource_75);
      NestedParties_NoNestedPartyIDs_75.insert(NestedPartyIDSource_75.getString());
      FIX::NestedPartyRole NestedPartyRole_75(1369730009);
      noNestedPartyIDs_1_1_0.set(NestedPartyRole_75);
      NestedParties_NoNestedPartyIDs_75.insert(NestedPartyRole_75.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_75);
      all_compo_names.insert("NestedParties.NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::OrderCancelReplaceRequest::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_161;
        FIX::NestedPartySubID NestedPartySubID_161("STRING_532110052");
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubID_161);
        NstdPtysSubGrp_NoNestedPartySubIDs_161.insert(NestedPartySubID_161.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_161(1763018064);
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubIDType_161);
        NstdPtysSubGrp_NoNestedPartySubIDs_161.insert(NestedPartySubIDType_161.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_161);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::OrderCancelReplaceRequest::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_162;
        FIX::NestedPartySubID NestedPartySubID_162("STRING_595574540");
        noNestedPartySubIDs_1_0_2_1.set(NestedPartySubID_162);
        NstdPtysSubGrp_NoNestedPartySubIDs_162.insert(NestedPartySubID_162.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_162(1339629866);
        noNestedPartySubIDs_1_0_2_1.set(NestedPartySubIDType_162);
        NstdPtysSubGrp_NoNestedPartySubIDs_162.insert(NestedPartySubIDType_162.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_162);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_1);
      }
      noAllocs_0_1.addGroup(noNestedPartyIDs_1_1_0);
    }
    {
      FIX50SP2::OrderCancelReplaceRequest::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_76;
      FIX::NestedPartyID NestedPartyID_76("STRING_725311049");
      noNestedPartyIDs_1_1_1.set(NestedPartyID_76);
      NestedParties_NoNestedPartyIDs_76.insert(NestedPartyID_76.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_76('1');
      noNestedPartyIDs_1_1_1.set(NestedPartyIDSource_76);
      NestedParties_NoNestedPartyIDs_76.insert(NestedPartyIDSource_76.getString());
      FIX::NestedPartyRole NestedPartyRole_76(593539683);
      noNestedPartyIDs_1_1_1.set(NestedPartyRole_76);
      NestedParties_NoNestedPartyIDs_76.insert(NestedPartyRole_76.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_76);
      all_compo_names.insert("NestedParties.NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::OrderCancelReplaceRequest::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_163;
        FIX::NestedPartySubID NestedPartySubID_163("STRING_1044782633");
        noNestedPartySubIDs_1_1_2_0.set(NestedPartySubID_163);
        NstdPtysSubGrp_NoNestedPartySubIDs_163.insert(NestedPartySubID_163.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_163(725318243);
        noNestedPartySubIDs_1_1_2_0.set(NestedPartySubIDType_163);
        NstdPtysSubGrp_NoNestedPartySubIDs_163.insert(NestedPartySubIDType_163.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_163);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::OrderCancelReplaceRequest::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_164;
        FIX::NestedPartySubID NestedPartySubID_164("STRING_1180154611");
        noNestedPartySubIDs_1_1_2_1.set(NestedPartySubID_164);
        NstdPtysSubGrp_NoNestedPartySubIDs_164.insert(NestedPartySubID_164.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_164(937686418);
        noNestedPartySubIDs_1_1_2_1.set(NestedPartySubIDType_164);
        NstdPtysSubGrp_NoNestedPartySubIDs_164.insert(NestedPartySubIDType_164.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_164);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::OrderCancelReplaceRequest::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_165;
        FIX::NestedPartySubID NestedPartySubID_165("STRING_781729925");
        noNestedPartySubIDs_1_1_2_2.set(NestedPartySubID_165);
        NstdPtysSubGrp_NoNestedPartySubIDs_165.insert(NestedPartySubID_165.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_165(1182926311);
        noNestedPartySubIDs_1_1_2_2.set(NestedPartySubIDType_165);
        NstdPtysSubGrp_NoNestedPartySubIDs_165.insert(NestedPartySubIDType_165.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_165);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_2);
      }
      noAllocs_0_1.addGroup(noNestedPartyIDs_1_1_1);
    }
    msg.addGroup(noAllocs_0_1);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_20;
  FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_20("USD");
  msg.set(BenchmarkCurveCurrency_20);
  SpreadOrBenchmarkCurveData_20.insert(BenchmarkCurveCurrency_20.getString());
  FIX::BenchmarkCurveName BenchmarkCurveName_20("STRING_FutureSWAP");
  msg.set(BenchmarkCurveName_20);
  SpreadOrBenchmarkCurveData_20.insert(BenchmarkCurveName_20.getString());
  FIX::BenchmarkCurvePoint BenchmarkCurvePoint_20("STRING_133246081");
  msg.set(BenchmarkCurvePoint_20);
  SpreadOrBenchmarkCurveData_20.insert(BenchmarkCurvePoint_20.getString());
  FIX::BenchmarkPrice BenchmarkPrice_20;
  BenchmarkPrice_20.setString("2184127");
  msg.set(BenchmarkPrice_20);
  SpreadOrBenchmarkCurveData_20.insert(BenchmarkPrice_20.getString());
  FIX::BenchmarkPriceType BenchmarkPriceType_20(1566849870);
  msg.set(BenchmarkPriceType_20);
  SpreadOrBenchmarkCurveData_20.insert(BenchmarkPriceType_20.getString());
  FIX::BenchmarkSecurityID BenchmarkSecurityID_20("STRING_819895719");
  msg.set(BenchmarkSecurityID_20);
  SpreadOrBenchmarkCurveData_20.insert(BenchmarkSecurityID_20.getString());
  FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_20("STRING_1438587927");
  msg.set(BenchmarkSecurityIDSource_20);
  SpreadOrBenchmarkCurveData_20.insert(BenchmarkSecurityIDSource_20.getString());
  FIX::Spread Spread_20;
  Spread_20.setString("5887804");
  msg.set(Spread_20);
  SpreadOrBenchmarkCurveData_20.insert(Spread_20.getString());
  all_values.push_back(SpreadOrBenchmarkCurveData_20);
  all_compo_names.insert("SpreadOrBenchmarkCurveData");

  // StrategyParametersGrp
  // Group StrategyParametersGrp.NoStrategyParameters
  {
    FIX50SP2::OrderCancelReplaceRequest::NoStrategyParameters noStrategyParameters_0_0;
    // StrategyParametersGrp.NoStrategyParameters
    multiset<string> StrategyParametersGrp_NoStrategyParameters_16;
    FIX::StrategyParameterName StrategyParameterName_16("STRING_1901804956");
    noStrategyParameters_0_0.set(StrategyParameterName_16);
    StrategyParametersGrp_NoStrategyParameters_16.insert(StrategyParameterName_16.getString());
    FIX::StrategyParameterType StrategyParameterType_16(19);
    noStrategyParameters_0_0.set(StrategyParameterType_16);
    StrategyParametersGrp_NoStrategyParameters_16.insert(StrategyParameterType_16.getString());
    FIX::StrategyParameterValue StrategyParameterValue_16("STRING_1723215327");
    noStrategyParameters_0_0.set(StrategyParameterValue_16);
    StrategyParametersGrp_NoStrategyParameters_16.insert(StrategyParameterValue_16.getString());
    all_values.push_back(StrategyParametersGrp_NoStrategyParameters_16);
    all_compo_names.insert("StrategyParametersGrp.NoStrategyParameters");

    msg.addGroup(noStrategyParameters_0_0);
  }
  {
    FIX50SP2::OrderCancelReplaceRequest::NoStrategyParameters noStrategyParameters_0_1;
    // StrategyParametersGrp.NoStrategyParameters
    multiset<string> StrategyParametersGrp_NoStrategyParameters_17;
    FIX::StrategyParameterName StrategyParameterName_17("STRING_1332056695");
    noStrategyParameters_0_1.set(StrategyParameterName_17);
    StrategyParametersGrp_NoStrategyParameters_17.insert(StrategyParameterName_17.getString());
    FIX::StrategyParameterType StrategyParameterType_17(10);
    noStrategyParameters_0_1.set(StrategyParameterType_17);
    StrategyParametersGrp_NoStrategyParameters_17.insert(StrategyParameterType_17.getString());
    FIX::StrategyParameterValue StrategyParameterValue_17("STRING_945461688");
    noStrategyParameters_0_1.set(StrategyParameterValue_17);
    StrategyParametersGrp_NoStrategyParameters_17.insert(StrategyParameterValue_17.getString());
    all_values.push_back(StrategyParametersGrp_NoStrategyParameters_17);
    all_compo_names.insert("StrategyParametersGrp.NoStrategyParameters");

    msg.addGroup(noStrategyParameters_0_1);
  }
  // TrdRegTimestamps
  // Group TrdRegTimestamps.NoTrdRegTimestamps
  {
    FIX50SP2::OrderCancelReplaceRequest::NoTrdRegTimestamps noTrdRegTimestamps_0_0;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_14;
    FIX::DeskOrderHandlingInst DeskOrderHandlingInst_14("MULTIPLESTRINGVALUE_MAC");
    noTrdRegTimestamps_0_0.set(DeskOrderHandlingInst_14);
    TrdRegTimestamps_NoTrdRegTimestamps_14.insert(DeskOrderHandlingInst_14.getString());
    FIX::DeskType DeskType_14("STRING_S");
    noTrdRegTimestamps_0_0.set(DeskType_14);
    TrdRegTimestamps_NoTrdRegTimestamps_14.insert(DeskType_14.getString());
    FIX::DeskTypeSource DeskTypeSource_14(1);
    noTrdRegTimestamps_0_0.set(DeskTypeSource_14);
    TrdRegTimestamps_NoTrdRegTimestamps_14.insert(DeskTypeSource_14.getString());
    FIX::TrdRegTimestamp TrdRegTimestamp_14(FIX::UTCTIMESTAMP(10, 19, 44, 12, 5, 2008));
    noTrdRegTimestamps_0_0.set(TrdRegTimestamp_14);
    TrdRegTimestamps_NoTrdRegTimestamps_14.insert(TrdRegTimestamp_14.getString());
    FIX::TrdRegTimestampOrigin TrdRegTimestampOrigin_14("STRING_757769651");
    noTrdRegTimestamps_0_0.set(TrdRegTimestampOrigin_14);
    TrdRegTimestamps_NoTrdRegTimestamps_14.insert(TrdRegTimestampOrigin_14.getString());
    FIX::TrdRegTimestampType TrdRegTimestampType_14(2);
    noTrdRegTimestamps_0_0.set(TrdRegTimestampType_14);
    TrdRegTimestamps_NoTrdRegTimestamps_14.insert(TrdRegTimestampType_14.getString());
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_14);
    all_compo_names.insert("TrdRegTimestamps.NoTrdRegTimestamps");

    msg.addGroup(noTrdRegTimestamps_0_0);
  }
  {
    FIX50SP2::OrderCancelReplaceRequest::NoTrdRegTimestamps noTrdRegTimestamps_0_1;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_15;
    FIX::DeskOrderHandlingInst DeskOrderHandlingInst_15("MULTIPLESTRINGVALUE_PEG");
    noTrdRegTimestamps_0_1.set(DeskOrderHandlingInst_15);
    TrdRegTimestamps_NoTrdRegTimestamps_15.insert(DeskOrderHandlingInst_15.getString());
    FIX::DeskType DeskType_15("STRING_PR");
    noTrdRegTimestamps_0_1.set(DeskType_15);
    TrdRegTimestamps_NoTrdRegTimestamps_15.insert(DeskType_15.getString());
    FIX::DeskTypeSource DeskTypeSource_15(1);
    noTrdRegTimestamps_0_1.set(DeskTypeSource_15);
    TrdRegTimestamps_NoTrdRegTimestamps_15.insert(DeskTypeSource_15.getString());
    FIX::TrdRegTimestamp TrdRegTimestamp_15(FIX::UTCTIMESTAMP(13, 11, 44, 4, 3, 2005));
    noTrdRegTimestamps_0_1.set(TrdRegTimestamp_15);
    TrdRegTimestamps_NoTrdRegTimestamps_15.insert(TrdRegTimestamp_15.getString());
    FIX::TrdRegTimestampOrigin TrdRegTimestampOrigin_15("STRING_1463912642");
    noTrdRegTimestamps_0_1.set(TrdRegTimestampOrigin_15);
    TrdRegTimestamps_NoTrdRegTimestamps_15.insert(TrdRegTimestampOrigin_15.getString());
    FIX::TrdRegTimestampType TrdRegTimestampType_15(1);
    noTrdRegTimestamps_0_1.set(TrdRegTimestampType_15);
    TrdRegTimestamps_NoTrdRegTimestamps_15.insert(TrdRegTimestampType_15.getString());
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_15);
    all_compo_names.insert("TrdRegTimestamps.NoTrdRegTimestamps");

    msg.addGroup(noTrdRegTimestamps_0_1);
  }
  {
    FIX50SP2::OrderCancelReplaceRequest::NoTrdRegTimestamps noTrdRegTimestamps_0_2;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_16;
    FIX::DeskOrderHandlingInst DeskOrderHandlingInst_16("MULTIPLESTRINGVALUE_LOO");
    noTrdRegTimestamps_0_2.set(DeskOrderHandlingInst_16);
    TrdRegTimestamps_NoTrdRegTimestamps_16.insert(DeskOrderHandlingInst_16.getString());
    FIX::DeskType DeskType_16("STRING_T");
    noTrdRegTimestamps_0_2.set(DeskType_16);
    TrdRegTimestamps_NoTrdRegTimestamps_16.insert(DeskType_16.getString());
    FIX::DeskTypeSource DeskTypeSource_16(1);
    noTrdRegTimestamps_0_2.set(DeskTypeSource_16);
    TrdRegTimestamps_NoTrdRegTimestamps_16.insert(DeskTypeSource_16.getString());
    FIX::TrdRegTimestamp TrdRegTimestamp_16(FIX::UTCTIMESTAMP(6, 2, 51, 21, 12, 2006));
    noTrdRegTimestamps_0_2.set(TrdRegTimestamp_16);
    TrdRegTimestamps_NoTrdRegTimestamps_16.insert(TrdRegTimestamp_16.getString());
    FIX::TrdRegTimestampOrigin TrdRegTimestampOrigin_16("STRING_254265686");
    noTrdRegTimestamps_0_2.set(TrdRegTimestampOrigin_16);
    TrdRegTimestamps_NoTrdRegTimestamps_16.insert(TrdRegTimestampOrigin_16.getString());
    FIX::TrdRegTimestampType TrdRegTimestampType_16(5);
    noTrdRegTimestamps_0_2.set(TrdRegTimestampType_16);
    TrdRegTimestamps_NoTrdRegTimestamps_16.insert(TrdRegTimestampType_16.getString());
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_16);
    all_compo_names.insert("TrdRegTimestamps.NoTrdRegTimestamps");

    msg.addGroup(noTrdRegTimestamps_0_2);
  }
  // TrdgSesGrp
  // Group TrdgSesGrp.NoTradingSessions
  {
    FIX50SP2::OrderCancelReplaceRequest::NoTradingSessions noTradingSessions_0_0;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_20;
    FIX::TradingSessionID TradingSessionID_67("STRING_6");
    noTradingSessions_0_0.set(TradingSessionID_67);
    TrdgSesGrp_NoTradingSessions_20.insert(TradingSessionID_67.getString());
    FIX::TradingSessionSubID TradingSessionSubID_67("STRING_1");
    noTradingSessions_0_0.set(TradingSessionSubID_67);
    TrdgSesGrp_NoTradingSessions_20.insert(TradingSessionSubID_67.getString());
    all_values.push_back(TrdgSesGrp_NoTradingSessions_20);
    all_compo_names.insert("TrdgSesGrp.NoTradingSessions");

    msg.addGroup(noTradingSessions_0_0);
  }
  {
    FIX50SP2::OrderCancelReplaceRequest::NoTradingSessions noTradingSessions_0_1;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_21;
    FIX::TradingSessionID TradingSessionID_68("STRING_4");
    noTradingSessions_0_1.set(TradingSessionID_68);
    TrdgSesGrp_NoTradingSessions_21.insert(TradingSessionID_68.getString());
    FIX::TradingSessionSubID TradingSessionSubID_68("STRING_3");
    noTradingSessions_0_1.set(TradingSessionSubID_68);
    TrdgSesGrp_NoTradingSessions_21.insert(TradingSessionSubID_68.getString());
    all_values.push_back(TrdgSesGrp_NoTradingSessions_21);
    all_compo_names.insert("TrdgSesGrp.NoTradingSessions");

    msg.addGroup(noTradingSessions_0_1);
  }
  {
    FIX50SP2::OrderCancelReplaceRequest::NoTradingSessions noTradingSessions_0_2;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_22;
    FIX::TradingSessionID TradingSessionID_69("STRING_5");
    noTradingSessions_0_2.set(TradingSessionID_69);
    TrdgSesGrp_NoTradingSessions_22.insert(TradingSessionID_69.getString());
    FIX::TradingSessionSubID TradingSessionSubID_69("STRING_1");
    noTradingSessions_0_2.set(TradingSessionSubID_69);
    TrdgSesGrp_NoTradingSessions_22.insert(TradingSessionSubID_69.getString());
    all_values.push_back(TrdgSesGrp_NoTradingSessions_22);
    all_compo_names.insert("TrdgSesGrp.NoTradingSessions");

    msg.addGroup(noTradingSessions_0_2);
  }
  // TriggeringInstruction
  multiset<string> TriggeringInstruction_9;
  FIX::TriggerAction TriggerAction_9('2');
  msg.set(TriggerAction_9);
  TriggeringInstruction_9.insert(TriggerAction_9.getString());
  FIX::TriggerNewPrice TriggerNewPrice_9;
  TriggerNewPrice_9.setString("19570299");
  msg.set(TriggerNewPrice_9);
  TriggeringInstruction_9.insert(TriggerNewPrice_9.getString());
  FIX::TriggerNewQty TriggerNewQty_9;
  TriggerNewQty_9.setString("11658010");
  msg.set(TriggerNewQty_9);
  TriggeringInstruction_9.insert(TriggerNewQty_9.getString());
  FIX::TriggerOrderType TriggerOrderType_9('1');
  msg.set(TriggerOrderType_9);
  TriggeringInstruction_9.insert(TriggerOrderType_9.getString());
  FIX::TriggerPrice TriggerPrice_9;
  TriggerPrice_9.setString("12653123");
  msg.set(TriggerPrice_9);
  TriggeringInstruction_9.insert(TriggerPrice_9.getString());
  FIX::TriggerPriceDirection TriggerPriceDirection_9('U');
  msg.set(TriggerPriceDirection_9);
  TriggeringInstruction_9.insert(TriggerPriceDirection_9.getString());
  FIX::TriggerPriceType TriggerPriceType_9('3');
  msg.set(TriggerPriceType_9);
  TriggeringInstruction_9.insert(TriggerPriceType_9.getString());
  FIX::TriggerPriceTypeScope TriggerPriceTypeScope_9('0');
  msg.set(TriggerPriceTypeScope_9);
  TriggeringInstruction_9.insert(TriggerPriceTypeScope_9.getString());
  FIX::TriggerSecurityDesc TriggerSecurityDesc_9("STRING_1917184501");
  msg.set(TriggerSecurityDesc_9);
  TriggeringInstruction_9.insert(TriggerSecurityDesc_9.getString());
  FIX::TriggerSecurityID TriggerSecurityID_9("STRING_1701584342");
  msg.set(TriggerSecurityID_9);
  TriggeringInstruction_9.insert(TriggerSecurityID_9.getString());
  FIX::TriggerSecurityIDSource TriggerSecurityIDSource_9("STRING_1456873522");
  msg.set(TriggerSecurityIDSource_9);
  TriggeringInstruction_9.insert(TriggerSecurityIDSource_9.getString());
  FIX::TriggerSymbol TriggerSymbol_9("STRING_1377120828");
  msg.set(TriggerSymbol_9);
  TriggeringInstruction_9.insert(TriggerSymbol_9.getString());
  FIX::TriggerTradingSessionID TriggerTradingSessionID_9("STRING_984839534");
  msg.set(TriggerTradingSessionID_9);
  TriggeringInstruction_9.insert(TriggerTradingSessionID_9.getString());
  FIX::TriggerTradingSessionSubID TriggerTradingSessionSubID_9("STRING_831905242");
  msg.set(TriggerTradingSessionSubID_9);
  TriggeringInstruction_9.insert(TriggerTradingSessionSubID_9.getString());
  FIX::TriggerType TriggerType_9('4');
  msg.set(TriggerType_9);
  TriggeringInstruction_9.insert(TriggerType_9.getString());
  all_values.push_back(TriggeringInstruction_9);
  all_compo_names.insert("TriggeringInstruction");

  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_77;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_77("DATA_1130387392");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_77);
    UnderlyingInstrument_77.insert(EncodedUnderlyingIssuer_77.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_77(393918529);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_77);
    UnderlyingInstrument_77.insert(EncodedUnderlyingIssuerLen_77.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_77("DATA_1515064084");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_77);
    UnderlyingInstrument_77.insert(EncodedUnderlyingSecurityDesc_77.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_77(736946378);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_77);
    UnderlyingInstrument_77.insert(EncodedUnderlyingSecurityDescLen_77.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_77;
    UnderlyingAdjustedQuantity_77.setString("9360443");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_77);
    UnderlyingInstrument_77.insert(UnderlyingAdjustedQuantity_77.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_77;
    UnderlyingAllocationPercent_77.setString("20.640000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_77);
    UnderlyingInstrument_77.insert(UnderlyingAllocationPercent_77.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_77;
    UnderlyingAttachmentPoint_77.setString("20.640000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_77);
    UnderlyingInstrument_77.insert(UnderlyingAttachmentPoint_77.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_77("STRING_616993633");
    noUnderlyings_0_0.set(UnderlyingCFICode_77);
    UnderlyingInstrument_77.insert(UnderlyingCFICode_77.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_77("STRING_275980655");
    noUnderlyings_0_0.set(UnderlyingCPProgram_77);
    UnderlyingInstrument_77.insert(UnderlyingCPProgram_77.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_77("STRING_339240487");
    noUnderlyings_0_0.set(UnderlyingCPRegType_77);
    UnderlyingInstrument_77.insert(UnderlyingCPRegType_77.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_77;
    UnderlyingCapValue_77.setString("20230416");
    noUnderlyings_0_0.set(UnderlyingCapValue_77);
    UnderlyingInstrument_77.insert(UnderlyingCapValue_77.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_77;
    UnderlyingCashAmount_77.setString("15598161");
    noUnderlyings_0_0.set(UnderlyingCashAmount_77);
    UnderlyingInstrument_77.insert(UnderlyingCashAmount_77.getString());
    FIX::UnderlyingCashType UnderlyingCashType_77("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_77);
    UnderlyingInstrument_77.insert(UnderlyingCashType_77.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_77;
    UnderlyingContractMultiplier_77.setString("20393756");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_77);
    UnderlyingInstrument_77.insert(UnderlyingContractMultiplier_77.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_77(1819377637);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_77);
    UnderlyingInstrument_77.insert(UnderlyingContractMultiplierUnit_77.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_77("COUNTRY_1421753847");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_77);
    UnderlyingInstrument_77.insert(UnderlyingCountryOfIssue_77.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_77("LOCALMKTDATE_1848921933");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_77);
    UnderlyingInstrument_77.insert(UnderlyingCouponPaymentDate_77.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_77;
    UnderlyingCouponRate_77.setString("50.760000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_77);
    UnderlyingInstrument_77.insert(UnderlyingCouponRate_77.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_77("STRING_1209091053");
    noUnderlyings_0_0.set(UnderlyingCreditRating_77);
    UnderlyingInstrument_77.insert(UnderlyingCreditRating_77.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_77("CAN");
    noUnderlyings_0_0.set(UnderlyingCurrency_77);
    UnderlyingInstrument_77.insert(UnderlyingCurrency_77.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_77;
    UnderlyingCurrentValue_77.setString("12342578");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_77);
    UnderlyingInstrument_77.insert(UnderlyingCurrentValue_77.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_77;
    UnderlyingDetachmentPoint_77.setString("14.730000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_77);
    UnderlyingInstrument_77.insert(UnderlyingDetachmentPoint_77.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_77;
    UnderlyingDirtyPrice_77.setString("6651990");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_77);
    UnderlyingInstrument_77.insert(UnderlyingDirtyPrice_77.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_77;
    UnderlyingEndPrice_77.setString("7883585");
    noUnderlyings_0_0.set(UnderlyingEndPrice_77);
    UnderlyingInstrument_77.insert(UnderlyingEndPrice_77.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_77;
    UnderlyingEndValue_77.setString("2691013");
    noUnderlyings_0_0.set(UnderlyingEndValue_77);
    UnderlyingInstrument_77.insert(UnderlyingEndValue_77.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_77(2042319868);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_77);
    UnderlyingInstrument_77.insert(UnderlyingExerciseStyle_77.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_77;
    UnderlyingFXRate_77.setString("17731980");
    noUnderlyings_0_0.set(UnderlyingFXRate_77);
    UnderlyingInstrument_77.insert(UnderlyingFXRate_77.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_77('M');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_77);
    UnderlyingInstrument_77.insert(UnderlyingFXRateCalc_77.getString());
    FIX::UnderlyingFactor UnderlyingFactor_77;
    UnderlyingFactor_77.setString("3076250");
    noUnderlyings_0_0.set(UnderlyingFactor_77);
    UnderlyingInstrument_77.insert(UnderlyingFactor_77.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_77(1225865865);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_77);
    UnderlyingInstrument_77.insert(UnderlyingFlowScheduleType_77.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_77("STRING_83910334");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_77);
    UnderlyingInstrument_77.insert(UnderlyingInstrRegistry_77.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_77("LOCALMKTDATE_701543585");
    noUnderlyings_0_0.set(UnderlyingIssueDate_77);
    UnderlyingInstrument_77.insert(UnderlyingIssueDate_77.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_77("STRING_593446301");
    noUnderlyings_0_0.set(UnderlyingIssuer_77);
    UnderlyingInstrument_77.insert(UnderlyingIssuer_77.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_77("STRING_820856712");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_77);
    UnderlyingInstrument_77.insert(UnderlyingLocaleOfIssue_77.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_77("LOCALMKTDATE_1637587913");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_77);
    UnderlyingInstrument_77.insert(UnderlyingMaturityDate_77.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_77("MONTHYEAR_1918598366");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_77);
    UnderlyingInstrument_77.insert(UnderlyingMaturityMonthYear_77.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_77("TZTIMEONLY_1812068776");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_77);
    UnderlyingInstrument_77.insert(UnderlyingMaturityTime_77.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_77;
    UnderlyingNotionalPercentageOutstanding_77.setString("78.990000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_77);
    UnderlyingInstrument_77.insert(UnderlyingNotionalPercentageOutstanding_77.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_77('4');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_77);
    UnderlyingInstrument_77.insert(UnderlyingOptAttribute_77.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_77;
    UnderlyingOriginalNotionalPercentageOutstanding_77.setString("56.160000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_77);
    UnderlyingInstrument_77.insert(UnderlyingOriginalNotionalPercentageOutstanding_77.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_77("STRING_2130139525");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_77);
    UnderlyingInstrument_77.insert(UnderlyingPriceUnitOfMeasure_77.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_77;
    UnderlyingPriceUnitOfMeasureQty_77.setString("16069115");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_77);
    UnderlyingInstrument_77.insert(UnderlyingPriceUnitOfMeasureQty_77.getString());
    FIX::UnderlyingProduct UnderlyingProduct_77(1657659154);
    noUnderlyings_0_0.set(UnderlyingProduct_77);
    UnderlyingInstrument_77.insert(UnderlyingProduct_77.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_77(2022031500);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_77);
    UnderlyingInstrument_77.insert(UnderlyingPutOrCall_77.getString());
    FIX::UnderlyingPx UnderlyingPx_77;
    UnderlyingPx_77.setString("12788055");
    noUnderlyings_0_0.set(UnderlyingPx_77);
    UnderlyingInstrument_77.insert(UnderlyingPx_77.getString());
    FIX::UnderlyingQty UnderlyingQty_77;
    UnderlyingQty_77.setString("9319293");
    noUnderlyings_0_0.set(UnderlyingQty_77);
    UnderlyingInstrument_77.insert(UnderlyingQty_77.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_77("LOCALMKTDATE_1723469785");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_77);
    UnderlyingInstrument_77.insert(UnderlyingRedemptionDate_77.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_77("STRING_2116500578");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_77);
    UnderlyingInstrument_77.insert(UnderlyingRepoCollateralSecurityType_77.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_77;
    UnderlyingRepurchaseRate_77.setString("4.070000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_77);
    UnderlyingInstrument_77.insert(UnderlyingRepurchaseRate_77.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_77(542736730);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_77);
    UnderlyingInstrument_77.insert(UnderlyingRepurchaseTerm_77.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_77("STRING_864515117");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_77);
    UnderlyingInstrument_77.insert(UnderlyingRestructuringType_77.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_77("STRING_1227794623");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_77);
    UnderlyingInstrument_77.insert(UnderlyingSecurityDesc_77.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_77("EXCHANGE_1502448203");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_77);
    UnderlyingInstrument_77.insert(UnderlyingSecurityExchange_77.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_77("STRING_1529714157");
    noUnderlyings_0_0.set(UnderlyingSecurityID_77);
    UnderlyingInstrument_77.insert(UnderlyingSecurityID_77.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_77("STRING_2016153181");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_77);
    UnderlyingInstrument_77.insert(UnderlyingSecurityIDSource_77.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_77("STRING_1771549550");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_77);
    UnderlyingInstrument_77.insert(UnderlyingSecuritySubType_77.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_77("STRING_1424550377");
    noUnderlyings_0_0.set(UnderlyingSecurityType_77);
    UnderlyingInstrument_77.insert(UnderlyingSecurityType_77.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_77("STRING_1641867625");
    noUnderlyings_0_0.set(UnderlyingSeniority_77);
    UnderlyingInstrument_77.insert(UnderlyingSeniority_77.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_77("STRING_725072492");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_77);
    UnderlyingInstrument_77.insert(UnderlyingSettlMethod_77.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_77(2);
    noUnderlyings_0_0.set(UnderlyingSettlementType_77);
    UnderlyingInstrument_77.insert(UnderlyingSettlementType_77.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_77;
    UnderlyingStartValue_77.setString("7202498");
    noUnderlyings_0_0.set(UnderlyingStartValue_77);
    UnderlyingInstrument_77.insert(UnderlyingStartValue_77.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_77("STRING_808982826");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_77);
    UnderlyingInstrument_77.insert(UnderlyingStateOrProvinceOfIssue_77.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_77("EUR");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_77);
    UnderlyingInstrument_77.insert(UnderlyingStrikeCurrency_77.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_77;
    UnderlyingStrikePrice_77.setString("16298395");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_77);
    UnderlyingInstrument_77.insert(UnderlyingStrikePrice_77.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_77("STRING_1923823283");
    noUnderlyings_0_0.set(UnderlyingSymbol_77);
    UnderlyingInstrument_77.insert(UnderlyingSymbol_77.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_77("STRING_1084810861");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_77);
    UnderlyingInstrument_77.insert(UnderlyingSymbolSfx_77.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_77("STRING_1294424666");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_77);
    UnderlyingInstrument_77.insert(UnderlyingTimeUnit_77.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_77("STRING_2030921182");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_77);
    UnderlyingInstrument_77.insert(UnderlyingUnitOfMeasure_77.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_77;
    UnderlyingUnitOfMeasureQty_77.setString("11319062");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_77);
    UnderlyingInstrument_77.insert(UnderlyingUnitOfMeasureQty_77.getString());
    all_values.push_back(UnderlyingInstrument_77);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_158;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_158("STRING_2013577060");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_158);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_158.insert(UnderlyingSecurityAltID_158.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_158("STRING_591334099");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_158);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_158.insert(UnderlyingSecurityAltIDSource_158.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_158);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_157;
      FIX::UnderlyingStipType UnderlyingStipType_157("STRING_1888124912");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_157);
      UnderlyingStipulations_NoUnderlyingStips_157.insert(UnderlyingStipType_157.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_157("STRING_1870139601");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_157);
      UnderlyingStipulations_NoUnderlyingStips_157.insert(UnderlyingStipValue_157.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_157);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_146;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_146("STRING_1464111049");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_146);
      UndlyInstrumentParties_NoUndlyInstrumentParties_146.insert(UnderlyingInstrumentPartyID_146.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_146('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_146);
      UndlyInstrumentParties_NoUndlyInstrumentParties_146.insert(UnderlyingInstrumentPartyIDSource_146.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_146(1733891901);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_146);
      UndlyInstrumentParties_NoUndlyInstrumentParties_146.insert(UnderlyingInstrumentPartyRole_146.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_146);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_290;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_290("STRING_556188000");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_290);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_290.insert(UnderlyingInstrumentPartySubID_290.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_290(814202876);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_290);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_290.insert(UnderlyingInstrumentPartySubIDType_290.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_290);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_291;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_291("STRING_1361812334");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_291);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_291.insert(UnderlyingInstrumentPartySubID_291.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_291(2085902157);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_291);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_291.insert(UnderlyingInstrumentPartySubIDType_291.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_291);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_292;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_292("STRING_682872409");
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubID_292);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_292.insert(UnderlyingInstrumentPartySubID_292.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_292(985878236);
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubIDType_292);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_292.insert(UnderlyingInstrumentPartySubIDType_292.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_292);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_147;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_147("STRING_1362968886");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_147);
      UndlyInstrumentParties_NoUndlyInstrumentParties_147.insert(UnderlyingInstrumentPartyID_147.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_147('1');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_147);
      UndlyInstrumentParties_NoUndlyInstrumentParties_147.insert(UnderlyingInstrumentPartyIDSource_147.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_147(1710950728);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_147);
      UndlyInstrumentParties_NoUndlyInstrumentParties_147.insert(UnderlyingInstrumentPartyRole_147.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_147);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_293;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_293("STRING_897506228");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_293);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_293.insert(UnderlyingInstrumentPartySubID_293.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_293(372449906);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_293);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_293.insert(UnderlyingInstrumentPartySubIDType_293.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_293);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_294;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_294("STRING_1233896041");
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubID_294);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_294.insert(UnderlyingInstrumentPartySubID_294.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_294(63718724);
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubIDType_294);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_294.insert(UnderlyingInstrumentPartySubIDType_294.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_294);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_148;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_148("STRING_2002289444");
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyID_148);
      UndlyInstrumentParties_NoUndlyInstrumentParties_148.insert(UnderlyingInstrumentPartyID_148.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_148('1');
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyIDSource_148);
      UndlyInstrumentParties_NoUndlyInstrumentParties_148.insert(UnderlyingInstrumentPartyIDSource_148.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_148(1148529585);
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyRole_148);
      UndlyInstrumentParties_NoUndlyInstrumentParties_148.insert(UnderlyingInstrumentPartyRole_148.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_148);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_295;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_295("STRING_893673211");
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubID_295);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_295.insert(UnderlyingInstrumentPartySubID_295.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_295(132952172);
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubIDType_295);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_295.insert(UnderlyingInstrumentPartySubIDType_295.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_295);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  // YieldData
  multiset<string> YieldData_15;
  FIX::Yield Yield_15;
  Yield_15.setString("70.970000");
  msg.set(Yield_15);
  YieldData_15.insert(Yield_15.getString());
  FIX::YieldCalcDate YieldCalcDate_15("LOCALMKTDATE_759766623");
  msg.set(YieldCalcDate_15);
  YieldData_15.insert(YieldCalcDate_15.getString());
  FIX::YieldRedemptionDate YieldRedemptionDate_15("LOCALMKTDATE_724286272");
  msg.set(YieldRedemptionDate_15);
  YieldData_15.insert(YieldRedemptionDate_15.getString());
  FIX::YieldRedemptionPrice YieldRedemptionPrice_15;
  YieldRedemptionPrice_15.setString("11084228");
  msg.set(YieldRedemptionPrice_15);
  YieldData_15.insert(YieldRedemptionPrice_15.getString());
  FIX::YieldRedemptionPriceType YieldRedemptionPriceType_15(500407887);
  msg.set(YieldRedemptionPriceType_15);
  YieldData_15.insert(YieldRedemptionPriceType_15.getString());
  FIX::YieldType YieldType_15("STRING_MARK");
  msg.set(YieldType_15);
  YieldData_15.insert(YieldType_15.getString());
  all_values.push_back(YieldData_15);
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
