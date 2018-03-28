#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/NewOrderSingle.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( NewOrderSingle, set_fields)
{

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::NewOrderSingle msg;

  list<multiset<string>> all_values;
  multiset<string> NewOrderSingle_0;
  FIX::Account Account_21("STRING_526967678");
  msg.set(Account_21);
  NewOrderSingle_0.insert(Account_21.getString());
  FIX::AccountType AccountType_18(1);
  msg.set(AccountType_18);
  NewOrderSingle_0.insert(AccountType_18.getString());
  FIX::AcctIDSource AcctIDSource_14(99);
  msg.set(AcctIDSource_14);
  NewOrderSingle_0.insert(AcctIDSource_14.getString());
  FIX::AllocID AllocID_16("STRING_1587164084");
  msg.set(AllocID_16);
  NewOrderSingle_0.insert(AllocID_16.getString());
  FIX::BookingType BookingType_19(1);
  msg.set(BookingType_19);
  NewOrderSingle_0.insert(BookingType_19.getString());
  FIX::BookingUnit BookingUnit_9('1');
  msg.set(BookingUnit_9);
  NewOrderSingle_0.insert(BookingUnit_9.getString());
  FIX::CancellationRights CancellationRights_6('O');
  msg.set(CancellationRights_6);
  NewOrderSingle_0.insert(CancellationRights_6.getString());
  FIX::CashMargin CashMargin_9('1');
  msg.set(CashMargin_9);
  NewOrderSingle_0.insert(CashMargin_9.getString());
  FIX::ClOrdID ClOrdID_33("STRING_517205928");
  msg.set(ClOrdID_33);
  NewOrderSingle_0.insert(ClOrdID_33.getString());
  FIX::ClOrdLinkID ClOrdLinkID_12("STRING_1512749173");
  msg.set(ClOrdLinkID_12);
  NewOrderSingle_0.insert(ClOrdLinkID_12.getString());
  FIX::ClearingFeeIndicator ClearingFeeIndicator_14("STRING_C");
  msg.set(ClearingFeeIndicator_14);
  NewOrderSingle_0.insert(ClearingFeeIndicator_14.getString());
  FIX::ComplianceID ComplianceID_9("STRING_1856822579");
  msg.set(ComplianceID_9);
  NewOrderSingle_0.insert(ComplianceID_9.getString());
  FIX::CoveredOrUncovered CoveredOrUncovered_8(1);
  msg.set(CoveredOrUncovered_8);
  NewOrderSingle_0.insert(CoveredOrUncovered_8.getString());
  FIX::Currency Currency_44("GBP");
  msg.set(Currency_44);
  NewOrderSingle_0.insert(Currency_44.getString());
  FIX::CustDirectedOrder CustDirectedOrder_1(false);
  msg.set(CustDirectedOrder_1);
  NewOrderSingle_0.insert(CustDirectedOrder_1.getString());
  FIX::CustOrderCapacity CustOrderCapacity_12(3);
  msg.set(CustOrderCapacity_12);
  NewOrderSingle_0.insert(CustOrderCapacity_12.getString());
  FIX::CustOrderHandlingInst CustOrderHandlingInst_1("MULTIPLESTRINGVALUE_MAO");
  msg.set(CustOrderHandlingInst_1);
  NewOrderSingle_0.insert(CustOrderHandlingInst_1.getString());
  FIX::DayBookingInst DayBookingInst_9('1');
  msg.set(DayBookingInst_9);
  NewOrderSingle_0.insert(DayBookingInst_9.getString());
  FIX::Designation Designation_6("STRING_123174032");
  msg.set(Designation_6);
  NewOrderSingle_0.insert(Designation_6.getString());
  FIX::EffectiveTime EffectiveTime_6(FIX::UTCTIMESTAMP(15, 41, 57, 18, 3, 2015));
  msg.set(EffectiveTime_6);
  NewOrderSingle_0.insert(EffectiveTime_6.getString());
  FIX::EncodedText EncodedText_66("DATA_2131777284");
  msg.set(EncodedText_66);
  NewOrderSingle_0.insert(EncodedText_66.getString());
  FIX::EncodedTextLen EncodedTextLen_66(1385005851);
  msg.set(EncodedTextLen_66);
  NewOrderSingle_0.insert(EncodedTextLen_66.getString());
  FIX::ExDestination ExDestination_5("EXCHANGE_350038885");
  msg.set(ExDestination_5);
  NewOrderSingle_0.insert(ExDestination_5.getString());
  FIX::ExDestinationIDSource ExDestinationIDSource_5('C');
  msg.set(ExDestinationIDSource_5);
  NewOrderSingle_0.insert(ExDestinationIDSource_5.getString());
  FIX::ExecInst ExecInst_11("MULTIPLECHARVALUE_P");
  msg.set(ExecInst_11);
  NewOrderSingle_0.insert(ExecInst_11.getString());
  FIX::ExpireDate ExpireDate_12("LOCALMKTDATE_2114197316");
  msg.set(ExpireDate_12);
  NewOrderSingle_0.insert(ExpireDate_12.getString());
  FIX::ExpireTime ExpireTime_13(FIX::UTCTIMESTAMP(5, 16, 51, 24, 10, 2003));
  msg.set(ExpireTime_13);
  NewOrderSingle_0.insert(ExpireTime_13.getString());
  FIX::ForexReq ForexReq_9(true);
  msg.set(ForexReq_9);
  NewOrderSingle_0.insert(ForexReq_9.getString());
  FIX::GTBookingInst GTBookingInst_6(1);
  msg.set(GTBookingInst_6);
  NewOrderSingle_0.insert(GTBookingInst_6.getString());
  FIX::HandlInst HandlInst_6('1');
  msg.set(HandlInst_6);
  NewOrderSingle_0.insert(HandlInst_6.getString());
  FIX::IOIID IOIID_6("STRING_1207305747");
  msg.set(IOIID_6);
  NewOrderSingle_0.insert(IOIID_6.getString());
  FIX::LocateReqd LocateReqd_5(true);
  msg.set(LocateReqd_5);
  NewOrderSingle_0.insert(LocateReqd_5.getString());
  FIX::ManualOrderIndicator ManualOrderIndicator_1(true);
  msg.set(ManualOrderIndicator_1);
  NewOrderSingle_0.insert(ManualOrderIndicator_1.getString());
  FIX::MatchIncrement MatchIncrement_6;
  MatchIncrement_6.setString("7899093");
  msg.set(MatchIncrement_6);
  NewOrderSingle_0.insert(MatchIncrement_6.getString());
  FIX::MaxFloor MaxFloor_6;
  MaxFloor_6.setString("8139677");
  msg.set(MaxFloor_6);
  NewOrderSingle_0.insert(MaxFloor_6.getString());
  FIX::MaxPriceLevels MaxPriceLevels_6(51370222);
  msg.set(MaxPriceLevels_6);
  NewOrderSingle_0.insert(MaxPriceLevels_6.getString());
  FIX::MaxShow MaxShow_6;
  MaxShow_6.setString("17862415");
  msg.set(MaxShow_6);
  NewOrderSingle_0.insert(MaxShow_6.getString());
  FIX::MinQty MinQty_11;
  MinQty_11.setString("9371418");
  msg.set(MinQty_11);
  NewOrderSingle_0.insert(MinQty_11.getString());
  FIX::MoneyLaunderingStatus MoneyLaunderingStatus_6('N');
  msg.set(MoneyLaunderingStatus_6);
  NewOrderSingle_0.insert(MoneyLaunderingStatus_6.getString());
  FIX::OrdType OrdType_44('E');
  msg.set(OrdType_44);
  NewOrderSingle_0.insert(OrdType_44.getString());
  FIX::OrderCapacity OrderCapacity_22('A');
  msg.set(OrderCapacity_22);
  NewOrderSingle_0.insert(OrderCapacity_22.getString());
  FIX::OrderHandlingInstSource OrderHandlingInstSource_1(1);
  msg.set(OrderHandlingInstSource_1);
  NewOrderSingle_0.insert(OrderHandlingInstSource_1.getString());
  FIX::OrderQty2 OrderQty2_9;
  OrderQty2_9.setString("21105852");
  msg.set(OrderQty2_9);
  NewOrderSingle_0.insert(OrderQty2_9.getString());
  FIX::OrderRestrictions OrderRestrictions_17("MULTIPLECHARVALUE_8");
  msg.set(OrderRestrictions_17);
  NewOrderSingle_0.insert(OrderRestrictions_17.getString());
  FIX::ParticipationRate ParticipationRate_6;
  ParticipationRate_6.setString("66.660000");
  msg.set(ParticipationRate_6);
  NewOrderSingle_0.insert(ParticipationRate_6.getString());
  FIX::PositionEffect PositionEffect_12('O');
  msg.set(PositionEffect_12);
  NewOrderSingle_0.insert(PositionEffect_12.getString());
  FIX::PreTradeAnonymity PreTradeAnonymity_9(true);
  msg.set(PreTradeAnonymity_9);
  NewOrderSingle_0.insert(PreTradeAnonymity_9.getString());
  FIX::PreallocMethod PreallocMethod_9('0');
  msg.set(PreallocMethod_9);
  NewOrderSingle_0.insert(PreallocMethod_9.getString());
  FIX::PrevClosePx PrevClosePx_7;
  PrevClosePx_7.setString("17842608");
  msg.set(PrevClosePx_7);
  NewOrderSingle_0.insert(PrevClosePx_7.getString());
  FIX::Price Price_18;
  Price_18.setString("14661750");
  msg.set(Price_18);
  NewOrderSingle_0.insert(Price_18.getString());
  FIX::Price2 Price2_1;
  Price2_1.setString("750355");
  msg.set(Price2_1);
  NewOrderSingle_0.insert(Price2_1.getString());
  FIX::PriceProtectionScope PriceProtectionScope_6('2');
  msg.set(PriceProtectionScope_6);
  NewOrderSingle_0.insert(PriceProtectionScope_6.getString());
  FIX::PriceType PriceType_32(5);
  msg.set(PriceType_32);
  NewOrderSingle_0.insert(PriceType_32.getString());
  FIX::ProcessCode ProcessCode_11('5');
  msg.set(ProcessCode_11);
  NewOrderSingle_0.insert(ProcessCode_11.getString());
  FIX::QtyType QtyType_21(0);
  msg.set(QtyType_21);
  NewOrderSingle_0.insert(QtyType_21.getString());
  FIX::QuoteID QuoteID_7("STRING_251742715");
  msg.set(QuoteID_7);
  NewOrderSingle_0.insert(QuoteID_7.getString());
  FIX::ReceivedDeptID ReceivedDeptID_1("STRING_45367738");
  msg.set(ReceivedDeptID_1);
  NewOrderSingle_0.insert(ReceivedDeptID_1.getString());
  FIX::RefOrderID RefOrderID_2("STRING_1723180188");
  msg.set(RefOrderID_2);
  NewOrderSingle_0.insert(RefOrderID_2.getString());
  FIX::RefOrderIDSource RefOrderIDSource_2('2');
  msg.set(RefOrderIDSource_2);
  NewOrderSingle_0.insert(RefOrderIDSource_2.getString());
  FIX::RegistID RegistID_6("STRING_227755466");
  msg.set(RegistID_6);
  NewOrderSingle_0.insert(RegistID_6.getString());
  FIX::SecondaryClOrdID SecondaryClOrdID_31("STRING_838575011");
  msg.set(SecondaryClOrdID_31);
  NewOrderSingle_0.insert(SecondaryClOrdID_31.getString());
  FIX::SettlCurrency SettlCurrency_20("GBP");
  msg.set(SettlCurrency_20);
  NewOrderSingle_0.insert(SettlCurrency_20.getString());
  FIX::SettlDate SettlDate_36("LOCALMKTDATE_405431903");
  msg.set(SettlDate_36);
  NewOrderSingle_0.insert(SettlDate_36.getString());
  FIX::SettlDate2 SettlDate2_9("LOCALMKTDATE_1195620645");
  msg.set(SettlDate2_9);
  NewOrderSingle_0.insert(SettlDate2_9.getString());
  FIX::SettlType SettlType_23("STRING_0");
  msg.set(SettlType_23);
  NewOrderSingle_0.insert(SettlType_23.getString());
  FIX::Side Side_32('F');
  msg.set(Side_32);
  NewOrderSingle_0.insert(Side_32.getString());
  FIX::SolicitedFlag SolicitedFlag_9(false);
  msg.set(SolicitedFlag_9);
  NewOrderSingle_0.insert(SolicitedFlag_9.getString());
  FIX::StopPx StopPx_6;
  StopPx_6.setString("9569698");
  msg.set(StopPx_6);
  NewOrderSingle_0.insert(StopPx_6.getString());
  FIX::TargetStrategy TargetStrategy_6(3);
  msg.set(TargetStrategy_6);
  NewOrderSingle_0.insert(TargetStrategy_6.getString());
  FIX::TargetStrategyParameters TargetStrategyParameters_6("STRING_1172642073");
  msg.set(TargetStrategyParameters_6);
  NewOrderSingle_0.insert(TargetStrategyParameters_6.getString());
  FIX::Text Text_66("STRING_1434854152");
  msg.set(Text_66);
  NewOrderSingle_0.insert(Text_66.getString());
  FIX::TimeInForce TimeInForce_34('5');
  msg.set(TimeInForce_34);
  NewOrderSingle_0.insert(TimeInForce_34.getString());
  FIX::TradeDate TradeDate_24("LOCALMKTDATE_1135743712");
  msg.set(TradeDate_24);
  NewOrderSingle_0.insert(TradeDate_24.getString());
  FIX::TradeOriginationDate TradeOriginationDate_16("LOCALMKTDATE_1751533469");
  msg.set(TradeOriginationDate_16);
  NewOrderSingle_0.insert(TradeOriginationDate_16.getString());
  FIX::TransactTime TransactTime_38(FIX::UTCTIMESTAMP(4, 49, 58, 7, 7, 2008));
  msg.set(TransactTime_38);
  NewOrderSingle_0.insert(TransactTime_38.getString());
  all_values.push_back(NewOrderSingle_0);

  // CommissionData
  multiset<string> CommissionData_18;
  FIX::CommCurrency CommCurrency_18("JPY");
  msg.set(CommCurrency_18);
  CommissionData_18.insert(CommCurrency_18.getString());
  FIX::CommType CommType_18('6');
  msg.set(CommType_18);
  CommissionData_18.insert(CommType_18.getString());
  FIX::Commission Commission_18;
  Commission_18.setString("228638");
  msg.set(Commission_18);
  CommissionData_18.insert(Commission_18.getString());
  FIX::FundRenewWaiv FundRenewWaiv_18('Y');
  msg.set(FundRenewWaiv_18);
  CommissionData_18.insert(FundRenewWaiv_18.getString());
  all_values.push_back(CommissionData_18);

  // DiscretionInstructions
  multiset<string> DiscretionInstructions_6;
  FIX::DiscretionInst DiscretionInst_6('5');
  msg.set(DiscretionInst_6);
  DiscretionInstructions_6.insert(DiscretionInst_6.getString());
  FIX::DiscretionLimitType DiscretionLimitType_6(0);
  msg.set(DiscretionLimitType_6);
  DiscretionInstructions_6.insert(DiscretionLimitType_6.getString());
  FIX::DiscretionMoveType DiscretionMoveType_6(0);
  msg.set(DiscretionMoveType_6);
  DiscretionInstructions_6.insert(DiscretionMoveType_6.getString());
  FIX::DiscretionOffsetType DiscretionOffsetType_6(3);
  msg.set(DiscretionOffsetType_6);
  DiscretionInstructions_6.insert(DiscretionOffsetType_6.getString());
  FIX::DiscretionOffsetValue DiscretionOffsetValue_6;
  DiscretionOffsetValue_6.setString("4371354");
  msg.set(DiscretionOffsetValue_6);
  DiscretionInstructions_6.insert(DiscretionOffsetValue_6.getString());
  FIX::DiscretionRoundDirection DiscretionRoundDirection_6(2);
  msg.set(DiscretionRoundDirection_6);
  DiscretionInstructions_6.insert(DiscretionRoundDirection_6.getString());
  FIX::DiscretionScope DiscretionScope_6(4);
  msg.set(DiscretionScope_6);
  DiscretionInstructions_6.insert(DiscretionScope_6.getString());
  all_values.push_back(DiscretionInstructions_6);

  // DisplayInstruction
  multiset<string> DisplayInstruction_6;
  FIX::DisplayHighQty DisplayHighQty_6;
  DisplayHighQty_6.setString("8425673");
  msg.set(DisplayHighQty_6);
  DisplayInstruction_6.insert(DisplayHighQty_6.getString());
  FIX::DisplayLowQty DisplayLowQty_6;
  DisplayLowQty_6.setString("1987683");
  msg.set(DisplayLowQty_6);
  DisplayInstruction_6.insert(DisplayLowQty_6.getString());
  FIX::DisplayMethod DisplayMethod_6('1');
  msg.set(DisplayMethod_6);
  DisplayInstruction_6.insert(DisplayMethod_6.getString());
  FIX::DisplayMinIncr DisplayMinIncr_6;
  DisplayMinIncr_6.setString("12993694");
  msg.set(DisplayMinIncr_6);
  DisplayInstruction_6.insert(DisplayMinIncr_6.getString());
  FIX::DisplayQty DisplayQty_6;
  DisplayQty_6.setString("10331469");
  msg.set(DisplayQty_6);
  DisplayInstruction_6.insert(DisplayQty_6.getString());
  FIX::DisplayWhen DisplayWhen_6('2');
  msg.set(DisplayWhen_6);
  DisplayInstruction_6.insert(DisplayWhen_6.getString());
  FIX::RefreshQty RefreshQty_6;
  RefreshQty_6.setString("18169098");
  msg.set(RefreshQty_6);
  DisplayInstruction_6.insert(RefreshQty_6.getString());
  FIX::SecondaryDisplayQty SecondaryDisplayQty_6;
  SecondaryDisplayQty_6.setString("583053");
  msg.set(SecondaryDisplayQty_6);
  DisplayInstruction_6.insert(SecondaryDisplayQty_6.getString());
  all_values.push_back(DisplayInstruction_6);

  // FinancingDetails
  multiset<string> FinancingDetails_12;
  FIX::AgreementCurrency AgreementCurrency_12("JPY");
  msg.set(AgreementCurrency_12);
  FinancingDetails_12.insert(AgreementCurrency_12.getString());
  FIX::AgreementDate AgreementDate_12("LOCALMKTDATE_1194049103");
  msg.set(AgreementDate_12);
  FinancingDetails_12.insert(AgreementDate_12.getString());
  FIX::AgreementDesc AgreementDesc_12("STRING_1409364590");
  msg.set(AgreementDesc_12);
  FinancingDetails_12.insert(AgreementDesc_12.getString());
  FIX::AgreementID AgreementID_12("STRING_643323544");
  msg.set(AgreementID_12);
  FinancingDetails_12.insert(AgreementID_12.getString());
  FIX::DeliveryType DeliveryType_12(3);
  msg.set(DeliveryType_12);
  FinancingDetails_12.insert(DeliveryType_12.getString());
  FIX::EndDate EndDate_12("LOCALMKTDATE_567615931");
  msg.set(EndDate_12);
  FinancingDetails_12.insert(EndDate_12.getString());
  FIX::MarginRatio MarginRatio_12;
  MarginRatio_12.setString("56.220000");
  msg.set(MarginRatio_12);
  FinancingDetails_12.insert(MarginRatio_12.getString());
  FIX::StartDate StartDate_12("LOCALMKTDATE_849620626");
  msg.set(StartDate_12);
  FinancingDetails_12.insert(StartDate_12.getString());
  FIX::TerminationType TerminationType_12(2);
  msg.set(TerminationType_12);
  FinancingDetails_12.insert(TerminationType_12.getString());
  all_values.push_back(FinancingDetails_12);

  // Instrument
  multiset<string> Instrument_47;
  FIX::AttachmentPoint AttachmentPoint_47;
  AttachmentPoint_47.setString("32.730000");
  msg.set(AttachmentPoint_47);
  Instrument_47.insert(AttachmentPoint_47.getString());
  FIX::CFICode CFICode_47("STRING_702843847");
  msg.set(CFICode_47);
  Instrument_47.insert(CFICode_47.getString());
  FIX::CPProgram CPProgram_47(2);
  msg.set(CPProgram_47);
  Instrument_47.insert(CPProgram_47.getString());
  FIX::CPRegType CPRegType_47("STRING_1581862484");
  msg.set(CPRegType_47);
  Instrument_47.insert(CPRegType_47.getString());
  FIX::CapPrice CapPrice_47;
  CapPrice_47.setString("7257077");
  msg.set(CapPrice_47);
  Instrument_47.insert(CapPrice_47.getString());
  FIX::ContractMultiplier ContractMultiplier_47;
  ContractMultiplier_47.setString("18858449");
  msg.set(ContractMultiplier_47);
  Instrument_47.insert(ContractMultiplier_47.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_47(1);
  msg.set(ContractMultiplierUnit_47);
  Instrument_47.insert(ContractMultiplierUnit_47.getString());
  FIX::ContractSettlMonth ContractSettlMonth_47("MONTHYEAR_324268128");
  msg.set(ContractSettlMonth_47);
  Instrument_47.insert(ContractSettlMonth_47.getString());
  FIX::CountryOfIssue CountryOfIssue_47("COUNTRY_483281314");
  msg.set(CountryOfIssue_47);
  Instrument_47.insert(CountryOfIssue_47.getString());
  FIX::CouponPaymentDate CouponPaymentDate_47("LOCALMKTDATE_1729711849");
  msg.set(CouponPaymentDate_47);
  Instrument_47.insert(CouponPaymentDate_47.getString());
  FIX::CouponRate CouponRate_47;
  CouponRate_47.setString("35.490000");
  msg.set(CouponRate_47);
  Instrument_47.insert(CouponRate_47.getString());
  FIX::CreditRating CreditRating_47("STRING_1633912711");
  msg.set(CreditRating_47);
  Instrument_47.insert(CreditRating_47.getString());
  FIX::DatedDate DatedDate_47("LOCALMKTDATE_1123374533");
  msg.set(DatedDate_47);
  Instrument_47.insert(DatedDate_47.getString());
  FIX::DetachmentPoint DetachmentPoint_47;
  DetachmentPoint_47.setString("8.740000");
  msg.set(DetachmentPoint_47);
  Instrument_47.insert(DetachmentPoint_47.getString());
  FIX::EncodedIssuer EncodedIssuer_47("DATA_1832681105");
  msg.set(EncodedIssuer_47);
  Instrument_47.insert(EncodedIssuer_47.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_47(536865273);
  msg.set(EncodedIssuerLen_47);
  Instrument_47.insert(EncodedIssuerLen_47.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_47("DATA_755856677");
  msg.set(EncodedSecurityDesc_47);
  Instrument_47.insert(EncodedSecurityDesc_47.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_47(718344422);
  msg.set(EncodedSecurityDescLen_47);
  Instrument_47.insert(EncodedSecurityDescLen_47.getString());
  FIX::ExerciseStyle ExerciseStyle_47(1);
  msg.set(ExerciseStyle_47);
  Instrument_47.insert(ExerciseStyle_47.getString());
  FIX::Factor Factor_47;
  Factor_47.setString("4252828");
  msg.set(Factor_47);
  Instrument_47.insert(Factor_47.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_47(false);
  msg.set(FlexProductEligibilityIndicator_47);
  Instrument_47.insert(FlexProductEligibilityIndicator_47.getString());
  FIX::FlexibleIndicator FlexibleIndicator_47(true);
  msg.set(FlexibleIndicator_47);
  Instrument_47.insert(FlexibleIndicator_47.getString());
  FIX::FloorPrice FloorPrice_47;
  FloorPrice_47.setString("7025162");
  msg.set(FloorPrice_47);
  Instrument_47.insert(FloorPrice_47.getString());
  FIX::FlowScheduleType FlowScheduleType_47(1);
  msg.set(FlowScheduleType_47);
  Instrument_47.insert(FlowScheduleType_47.getString());
  FIX::InstrRegistry InstrRegistry_47("STRING_1974521602");
  msg.set(InstrRegistry_47);
  Instrument_47.insert(InstrRegistry_47.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_47('1');
  msg.set(InstrmtAssignmentMethod_47);
  Instrument_47.insert(InstrmtAssignmentMethod_47.getString());
  FIX::InterestAccrualDate InterestAccrualDate_47("LOCALMKTDATE_2100403359");
  msg.set(InterestAccrualDate_47);
  Instrument_47.insert(InterestAccrualDate_47.getString());
  FIX::IssueDate IssueDate_47("LOCALMKTDATE_394653886");
  msg.set(IssueDate_47);
  Instrument_47.insert(IssueDate_47.getString());
  FIX::Issuer Issuer_47("STRING_316091782");
  msg.set(Issuer_47);
  Instrument_47.insert(Issuer_47.getString());
  FIX::ListMethod ListMethod_47(0);
  msg.set(ListMethod_47);
  Instrument_47.insert(ListMethod_47.getString());
  FIX::LocaleOfIssue LocaleOfIssue_47("STRING_1586696207");
  msg.set(LocaleOfIssue_47);
  Instrument_47.insert(LocaleOfIssue_47.getString());
  FIX::MaturityDate MaturityDate_47("LOCALMKTDATE_1983275055");
  msg.set(MaturityDate_47);
  Instrument_47.insert(MaturityDate_47.getString());
  FIX::MaturityMonthYear MaturityMonthYear_47("MONTHYEAR_1505384185");
  msg.set(MaturityMonthYear_47);
  Instrument_47.insert(MaturityMonthYear_47.getString());
  FIX::MaturityTime MaturityTime_47("TZTIMEONLY_1926026637");
  msg.set(MaturityTime_47);
  Instrument_47.insert(MaturityTime_47.getString());
  FIX::MinPriceIncrement MinPriceIncrement_47;
  MinPriceIncrement_47.setString("14176538");
  msg.set(MinPriceIncrement_47);
  Instrument_47.insert(MinPriceIncrement_47.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_47;
  MinPriceIncrementAmount_47.setString("836082");
  msg.set(MinPriceIncrementAmount_47);
  Instrument_47.insert(MinPriceIncrementAmount_47.getString());
  FIX::NTPositionLimit NTPositionLimit_47(1664387891);
  msg.set(NTPositionLimit_47);
  Instrument_47.insert(NTPositionLimit_47.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_47;
  NotionalPercentageOutstanding_47.setString("96.770000");
  msg.set(NotionalPercentageOutstanding_47);
  Instrument_47.insert(NotionalPercentageOutstanding_47.getString());
  FIX::OptAttribute OptAttribute_47('4');
  msg.set(OptAttribute_47);
  Instrument_47.insert(OptAttribute_47.getString());
  FIX::OptPayoutAmount OptPayoutAmount_47;
  OptPayoutAmount_47.setString("1855");
  msg.set(OptPayoutAmount_47);
  Instrument_47.insert(OptPayoutAmount_47.getString());
  FIX::OptPayoutType OptPayoutType_47(3);
  msg.set(OptPayoutType_47);
  Instrument_47.insert(OptPayoutType_47.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_47;
  OriginalNotionalPercentageOutstanding_47.setString("99.320000");
  msg.set(OriginalNotionalPercentageOutstanding_47);
  Instrument_47.insert(OriginalNotionalPercentageOutstanding_47.getString());
  FIX::Pool Pool_47("STRING_1634098268");
  msg.set(Pool_47);
  Instrument_47.insert(Pool_47.getString());
  FIX::PositionLimit PositionLimit_47(1517682412);
  msg.set(PositionLimit_47);
  Instrument_47.insert(PositionLimit_47.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_47("STRING_PCTPAR");
  msg.set(PriceQuoteMethod_47);
  Instrument_47.insert(PriceQuoteMethod_47.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_47("STRING_1319295725");
  msg.set(PriceUnitOfMeasure_47);
  Instrument_47.insert(PriceUnitOfMeasure_47.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_47;
  PriceUnitOfMeasureQty_47.setString("20545476");
  msg.set(PriceUnitOfMeasureQty_47);
  Instrument_47.insert(PriceUnitOfMeasureQty_47.getString());
  FIX::Product Product_49(9);
  msg.set(Product_49);
  Instrument_47.insert(Product_49.getString());
  FIX::ProductComplex ProductComplex_47("STRING_2037640147");
  msg.set(ProductComplex_47);
  Instrument_47.insert(ProductComplex_47.getString());
  FIX::PutOrCall PutOrCall_47(1);
  msg.set(PutOrCall_47);
  Instrument_47.insert(PutOrCall_47.getString());
  FIX::RedemptionDate RedemptionDate_47("LOCALMKTDATE_1806906729");
  msg.set(RedemptionDate_47);
  Instrument_47.insert(RedemptionDate_47.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_47("STRING_666806312");
  msg.set(RepoCollateralSecurityType_47);
  Instrument_47.insert(RepoCollateralSecurityType_47.getString());
  FIX::RepurchaseRate RepurchaseRate_47;
  RepurchaseRate_47.setString("69.390000");
  msg.set(RepurchaseRate_47);
  Instrument_47.insert(RepurchaseRate_47.getString());
  FIX::RepurchaseTerm RepurchaseTerm_47(361939344);
  msg.set(RepurchaseTerm_47);
  Instrument_47.insert(RepurchaseTerm_47.getString());
  FIX::RestructuringType RestructuringType_47("STRING_FR");
  msg.set(RestructuringType_47);
  Instrument_47.insert(RestructuringType_47.getString());
  FIX::SecurityDesc SecurityDesc_47("STRING_1206584894");
  msg.set(SecurityDesc_47);
  Instrument_47.insert(SecurityDesc_47.getString());
  FIX::SecurityExchange SecurityExchange_47("EXCHANGE_1707779151");
  msg.set(SecurityExchange_47);
  Instrument_47.insert(SecurityExchange_47.getString());
  FIX::SecurityGroup SecurityGroup_47("STRING_442941292");
  msg.set(SecurityGroup_47);
  Instrument_47.insert(SecurityGroup_47.getString());
  FIX::SecurityID SecurityID_47("STRING_1601238780");
  msg.set(SecurityID_47);
  Instrument_47.insert(SecurityID_47.getString());
  FIX::SecurityIDSource SecurityIDSource_47("STRING_8");
  msg.set(SecurityIDSource_47);
  Instrument_47.insert(SecurityIDSource_47.getString());
  FIX::SecurityStatus SecurityStatus_47("STRING_1");
  msg.set(SecurityStatus_47);
  Instrument_47.insert(SecurityStatus_47.getString());
  FIX::SecuritySubType SecuritySubType_48("STRING_1040451339");
  msg.set(SecuritySubType_48);
  Instrument_47.insert(SecuritySubType_48.getString());
  FIX::SecurityType SecurityType_49("STRING_TBILL");
  msg.set(SecurityType_49);
  Instrument_47.insert(SecurityType_49.getString());
  FIX::Seniority Seniority_47("STRING_SD");
  msg.set(Seniority_47);
  Instrument_47.insert(Seniority_47.getString());
  FIX::SettlMethod SettlMethod_47('P');
  msg.set(SettlMethod_47);
  Instrument_47.insert(SettlMethod_47.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_47("STRING_1129832584");
  msg.set(SettleOnOpenFlag_47);
  Instrument_47.insert(SettleOnOpenFlag_47.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_47("STRING_686990422");
  msg.set(StateOrProvinceOfIssue_47);
  Instrument_47.insert(StateOrProvinceOfIssue_47.getString());
  FIX::StrikeCurrency StrikeCurrency_47("CHF");
  msg.set(StrikeCurrency_47);
  Instrument_47.insert(StrikeCurrency_47.getString());
  FIX::StrikeMultiplier StrikeMultiplier_47;
  StrikeMultiplier_47.setString("10948668");
  msg.set(StrikeMultiplier_47);
  Instrument_47.insert(StrikeMultiplier_47.getString());
  FIX::StrikePrice StrikePrice_47;
  StrikePrice_47.setString("3360841");
  msg.set(StrikePrice_47);
  Instrument_47.insert(StrikePrice_47.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_47(3);
  msg.set(StrikePriceBoundaryMethod_47);
  Instrument_47.insert(StrikePriceBoundaryMethod_47.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_47;
  StrikePriceBoundaryPrecision_47.setString("30.900000");
  msg.set(StrikePriceBoundaryPrecision_47);
  Instrument_47.insert(StrikePriceBoundaryPrecision_47.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_47(2);
  msg.set(StrikePriceDeterminationMethod_47);
  Instrument_47.insert(StrikePriceDeterminationMethod_47.getString());
  FIX::StrikeValue StrikeValue_47;
  StrikeValue_47.setString("17064189");
  msg.set(StrikeValue_47);
  Instrument_47.insert(StrikeValue_47.getString());
  FIX::Symbol Symbol_47("STRING_742430249");
  msg.set(Symbol_47);
  Instrument_47.insert(Symbol_47.getString());
  FIX::SymbolSfx SymbolSfx_47("STRING_CD");
  msg.set(SymbolSfx_47);
  Instrument_47.insert(SymbolSfx_47.getString());
  FIX::TimeUnit TimeUnit_47("STRING_H");
  msg.set(TimeUnit_47);
  Instrument_47.insert(TimeUnit_47.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_47(2);
  msg.set(UnderlyingPriceDeterminationMethod_47);
  Instrument_47.insert(UnderlyingPriceDeterminationMethod_47.getString());
  FIX::UnitOfMeasure UnitOfMeasure_47("STRING_t");
  msg.set(UnitOfMeasure_47);
  Instrument_47.insert(UnitOfMeasure_47.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_47;
  UnitOfMeasureQty_47.setString("2803892");
  msg.set(UnitOfMeasureQty_47);
  Instrument_47.insert(UnitOfMeasureQty_47.getString());
  FIX::ValuationMethod ValuationMethod_47("STRING_FUT");
  msg.set(ValuationMethod_47);
  Instrument_47.insert(ValuationMethod_47.getString());
  all_values.push_back(Instrument_47);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::NewOrderSingle::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_93;
    FIX::ComplexEventCondition ComplexEventCondition_93(1);
    noComplexEvents_0_0.set(ComplexEventCondition_93);
    ComplexEvents_NoComplexEvents_93.insert(ComplexEventCondition_93.getString());
    FIX::ComplexEventPrice ComplexEventPrice_93;
    ComplexEventPrice_93.setString("21454165");
    noComplexEvents_0_0.set(ComplexEventPrice_93);
    ComplexEvents_NoComplexEvents_93.insert(ComplexEventPrice_93.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_93(4);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_93);
    ComplexEvents_NoComplexEvents_93.insert(ComplexEventPriceBoundaryMethod_93.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_93;
    ComplexEventPriceBoundaryPrecision_93.setString("74.060000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_93);
    ComplexEvents_NoComplexEvents_93.insert(ComplexEventPriceBoundaryPrecision_93.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_93(2);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_93);
    ComplexEvents_NoComplexEvents_93.insert(ComplexEventPriceTimeType_93.getString());
    FIX::ComplexEventType ComplexEventType_93(9);
    noComplexEvents_0_0.set(ComplexEventType_93);
    ComplexEvents_NoComplexEvents_93.insert(ComplexEventType_93.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_93;
    ComplexOptPayoutAmount_93.setString("1727925");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_93);
    ComplexEvents_NoComplexEvents_93.insert(ComplexOptPayoutAmount_93.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_93);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::NewOrderSingle::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_191;
      FIX::ComplexEventEndDate ComplexEventEndDate_191(FIX::UTCTIMESTAMP(6, 52, 20, 27, 1, 2006));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_191);
      ComplexEventDates_NoComplexEventDates_191.insert(ComplexEventEndDate_191.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_191(FIX::UTCTIMESTAMP(13, 48, 20, 26, 3, 2005));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_191);
      ComplexEventDates_NoComplexEventDates_191.insert(ComplexEventStartDate_191.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_191);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::NewOrderSingle::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_391;
        FIX::ComplexEventEndTime ComplexEventEndTime_391(FIX::UTCTIMEONLY(19, 32, 16));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_391);
        ComplexEventTimes_NoComplexEventTimes_391.insert(ComplexEventEndTime_391.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_391(FIX::UTCTIMEONLY(13, 35, 34));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_391);
        ComplexEventTimes_NoComplexEventTimes_391.insert(ComplexEventStartTime_391.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_391);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::NewOrderSingle::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_94;
    FIX::ComplexEventCondition ComplexEventCondition_94(2);
    noComplexEvents_0_1.set(ComplexEventCondition_94);
    ComplexEvents_NoComplexEvents_94.insert(ComplexEventCondition_94.getString());
    FIX::ComplexEventPrice ComplexEventPrice_94;
    ComplexEventPrice_94.setString("2897803");
    noComplexEvents_0_1.set(ComplexEventPrice_94);
    ComplexEvents_NoComplexEvents_94.insert(ComplexEventPrice_94.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_94(4);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_94);
    ComplexEvents_NoComplexEvents_94.insert(ComplexEventPriceBoundaryMethod_94.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_94;
    ComplexEventPriceBoundaryPrecision_94.setString("93.720000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_94);
    ComplexEvents_NoComplexEvents_94.insert(ComplexEventPriceBoundaryPrecision_94.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_94(1);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_94);
    ComplexEvents_NoComplexEvents_94.insert(ComplexEventPriceTimeType_94.getString());
    FIX::ComplexEventType ComplexEventType_94(1);
    noComplexEvents_0_1.set(ComplexEventType_94);
    ComplexEvents_NoComplexEvents_94.insert(ComplexEventType_94.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_94;
    ComplexOptPayoutAmount_94.setString("21168819");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_94);
    ComplexEvents_NoComplexEvents_94.insert(ComplexOptPayoutAmount_94.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_94);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::NewOrderSingle::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_192;
      FIX::ComplexEventEndDate ComplexEventEndDate_192(FIX::UTCTIMESTAMP(20, 7, 28, 19, 8, 2016));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_192);
      ComplexEventDates_NoComplexEventDates_192.insert(ComplexEventEndDate_192.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_192(FIX::UTCTIMESTAMP(20, 50, 30, 10, 9, 2015));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_192);
      ComplexEventDates_NoComplexEventDates_192.insert(ComplexEventStartDate_192.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_192);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::NewOrderSingle::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_392;
        FIX::ComplexEventEndTime ComplexEventEndTime_392(FIX::UTCTIMEONLY(22, 45, 28));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_392);
        ComplexEventTimes_NoComplexEventTimes_392.insert(ComplexEventEndTime_392.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_392(FIX::UTCTIMEONLY(22, 3, 49));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_392);
        ComplexEventTimes_NoComplexEventTimes_392.insert(ComplexEventStartTime_392.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_392);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::NewOrderSingle::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_193;
      FIX::ComplexEventEndDate ComplexEventEndDate_193(FIX::UTCTIMESTAMP(20, 14, 59, 24, 11, 2002));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_193);
      ComplexEventDates_NoComplexEventDates_193.insert(ComplexEventEndDate_193.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_193(FIX::UTCTIMESTAMP(18, 22, 26, 18, 3, 2009));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_193);
      ComplexEventDates_NoComplexEventDates_193.insert(ComplexEventStartDate_193.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_193);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::NewOrderSingle::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_393;
        FIX::ComplexEventEndTime ComplexEventEndTime_393(FIX::UTCTIMEONLY(17, 51, 47));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_393);
        ComplexEventTimes_NoComplexEventTimes_393.insert(ComplexEventEndTime_393.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_393(FIX::UTCTIMEONLY(11, 38, 33));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_393);
        ComplexEventTimes_NoComplexEventTimes_393.insert(ComplexEventStartTime_393.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_393);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::NewOrderSingle::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_394;
        FIX::ComplexEventEndTime ComplexEventEndTime_394(FIX::UTCTIMEONLY(17, 18, 51));
        noComplexEventTimes_1_1_2_1.set(ComplexEventEndTime_394);
        ComplexEventTimes_NoComplexEventTimes_394.insert(ComplexEventEndTime_394.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_394(FIX::UTCTIMEONLY(8, 54, 1));
        noComplexEventTimes_1_1_2_1.set(ComplexEventStartTime_394);
        ComplexEventTimes_NoComplexEventTimes_394.insert(ComplexEventStartTime_394.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_394);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      {
        FIX50SP2::NewOrderSingle::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_395;
        FIX::ComplexEventEndTime ComplexEventEndTime_395(FIX::UTCTIMEONLY(14, 8, 43));
        noComplexEventTimes_1_1_2_2.set(ComplexEventEndTime_395);
        ComplexEventTimes_NoComplexEventTimes_395.insert(ComplexEventEndTime_395.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_395(FIX::UTCTIMEONLY(18, 37, 29));
        noComplexEventTimes_1_1_2_2.set(ComplexEventStartTime_395);
        ComplexEventTimes_NoComplexEventTimes_395.insert(ComplexEventStartTime_395.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_395);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    {
      FIX50SP2::NewOrderSingle::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_194;
      FIX::ComplexEventEndDate ComplexEventEndDate_194(FIX::UTCTIMESTAMP(3, 55, 50, 5, 5, 2016));
      noComplexEventDates_1_1_2.set(ComplexEventEndDate_194);
      ComplexEventDates_NoComplexEventDates_194.insert(ComplexEventEndDate_194.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_194(FIX::UTCTIMESTAMP(2, 41, 1, 18, 6, 2007));
      noComplexEventDates_1_1_2.set(ComplexEventStartDate_194);
      ComplexEventDates_NoComplexEventDates_194.insert(ComplexEventStartDate_194.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_194);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::NewOrderSingle::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_396;
        FIX::ComplexEventEndTime ComplexEventEndTime_396(FIX::UTCTIMEONLY(16, 29, 59));
        noComplexEventTimes_1_2_2_0.set(ComplexEventEndTime_396);
        ComplexEventTimes_NoComplexEventTimes_396.insert(ComplexEventEndTime_396.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_396(FIX::UTCTIMEONLY(13, 45, 42));
        noComplexEventTimes_1_2_2_0.set(ComplexEventStartTime_396);
        ComplexEventTimes_NoComplexEventTimes_396.insert(ComplexEventStartTime_396.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_396);

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_0);
      }
      {
        FIX50SP2::NewOrderSingle::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_397;
        FIX::ComplexEventEndTime ComplexEventEndTime_397(FIX::UTCTIMEONLY(3, 50, 47));
        noComplexEventTimes_1_2_2_1.set(ComplexEventEndTime_397);
        ComplexEventTimes_NoComplexEventTimes_397.insert(ComplexEventEndTime_397.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_397(FIX::UTCTIMEONLY(12, 24, 31));
        noComplexEventTimes_1_2_2_1.set(ComplexEventStartTime_397);
        ComplexEventTimes_NoComplexEventTimes_397.insert(ComplexEventStartTime_397.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_397);

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_1);
      }
      {
        FIX50SP2::NewOrderSingle::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_398;
        FIX::ComplexEventEndTime ComplexEventEndTime_398(FIX::UTCTIMEONLY(16, 27, 54));
        noComplexEventTimes_1_2_2_2.set(ComplexEventEndTime_398);
        ComplexEventTimes_NoComplexEventTimes_398.insert(ComplexEventEndTime_398.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_398(FIX::UTCTIMEONLY(11, 44, 27));
        noComplexEventTimes_1_2_2_2.set(ComplexEventStartTime_398);
        ComplexEventTimes_NoComplexEventTimes_398.insert(ComplexEventStartTime_398.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_398);

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_2);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::NewOrderSingle::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_88;
    FIX::EventDate EventDate_88("LOCALMKTDATE_414094706");
    noEvents_0_0.set(EventDate_88);
    EvntGrp_NoEvents_88.insert(EventDate_88.getString());
    FIX::EventPx EventPx_88;
    EventPx_88.setString("1893533");
    noEvents_0_0.set(EventPx_88);
    EvntGrp_NoEvents_88.insert(EventPx_88.getString());
    FIX::EventText EventText_88("STRING_352222591");
    noEvents_0_0.set(EventText_88);
    EvntGrp_NoEvents_88.insert(EventText_88.getString());
    FIX::EventTime EventTime_88(FIX::UTCTIMESTAMP(4, 42, 19, 8, 12, 2000));
    noEvents_0_0.set(EventTime_88);
    EvntGrp_NoEvents_88.insert(EventTime_88.getString());
    FIX::EventType EventType_88(2);
    noEvents_0_0.set(EventType_88);
    EvntGrp_NoEvents_88.insert(EventType_88.getString());
    all_values.push_back(EvntGrp_NoEvents_88);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::NewOrderSingle::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_89;
    FIX::EventDate EventDate_89("LOCALMKTDATE_988524100");
    noEvents_0_1.set(EventDate_89);
    EvntGrp_NoEvents_89.insert(EventDate_89.getString());
    FIX::EventPx EventPx_89;
    EventPx_89.setString("17023576");
    noEvents_0_1.set(EventPx_89);
    EvntGrp_NoEvents_89.insert(EventPx_89.getString());
    FIX::EventText EventText_89("STRING_954725435");
    noEvents_0_1.set(EventText_89);
    EvntGrp_NoEvents_89.insert(EventText_89.getString());
    FIX::EventTime EventTime_89(FIX::UTCTIMESTAMP(18, 17, 40, 12, 6, 2009));
    noEvents_0_1.set(EventTime_89);
    EvntGrp_NoEvents_89.insert(EventTime_89.getString());
    FIX::EventType EventType_89(1);
    noEvents_0_1.set(EventType_89);
    EvntGrp_NoEvents_89.insert(EventType_89.getString());
    all_values.push_back(EvntGrp_NoEvents_89);

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::NewOrderSingle::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_86;
    FIX::InstrumentPartyID InstrumentPartyID_86("STRING_2090358493");
    noInstrumentParties_0_0.set(InstrumentPartyID_86);
    InstrumentParties_NoInstrumentParties_86.insert(InstrumentPartyID_86.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_86('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_86);
    InstrumentParties_NoInstrumentParties_86.insert(InstrumentPartyIDSource_86.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_86(652013359);
    noInstrumentParties_0_0.set(InstrumentPartyRole_86);
    InstrumentParties_NoInstrumentParties_86.insert(InstrumentPartyRole_86.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_86);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::NewOrderSingle::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_191;
      FIX::InstrumentPartySubID InstrumentPartySubID_191("STRING_1431272842");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_191);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_191.insert(InstrumentPartySubID_191.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_191(867145383);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_191);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_191.insert(InstrumentPartySubIDType_191.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_191);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::NewOrderSingle::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_87;
    FIX::InstrumentPartyID InstrumentPartyID_87("STRING_1999800886");
    noInstrumentParties_0_1.set(InstrumentPartyID_87);
    InstrumentParties_NoInstrumentParties_87.insert(InstrumentPartyID_87.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_87('1');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_87);
    InstrumentParties_NoInstrumentParties_87.insert(InstrumentPartyIDSource_87.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_87(1281240089);
    noInstrumentParties_0_1.set(InstrumentPartyRole_87);
    InstrumentParties_NoInstrumentParties_87.insert(InstrumentPartyRole_87.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_87);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::NewOrderSingle::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_192;
      FIX::InstrumentPartySubID InstrumentPartySubID_192("STRING_1504703567");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_192);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_192.insert(InstrumentPartySubID_192.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_192(1164865600);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_192);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_192.insert(InstrumentPartySubIDType_192.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_192);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::NewOrderSingle::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_193;
      FIX::InstrumentPartySubID InstrumentPartySubID_193("STRING_1608410270");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_193);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_193.insert(InstrumentPartySubID_193.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_193(369507442);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_193);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_193.insert(InstrumentPartySubIDType_193.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_193);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::NewOrderSingle::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_102;
    FIX::SecurityAltID SecurityAltID_102("STRING_1716905883");
    noSecurityAltID_0_0.set(SecurityAltID_102);
    SecAltIDGrp_NoSecurityAltID_102.insert(SecurityAltID_102.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_102("STRING_211257505");
    noSecurityAltID_0_0.set(SecurityAltIDSource_102);
    SecAltIDGrp_NoSecurityAltID_102.insert(SecurityAltIDSource_102.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_102);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::NewOrderSingle::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_103;
    FIX::SecurityAltID SecurityAltID_103("STRING_588311049");
    noSecurityAltID_0_1.set(SecurityAltID_103);
    SecAltIDGrp_NoSecurityAltID_103.insert(SecurityAltID_103.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_103("STRING_1683278216");
    noSecurityAltID_0_1.set(SecurityAltIDSource_103);
    SecAltIDGrp_NoSecurityAltID_103.insert(SecurityAltIDSource_103.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_103);

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::NewOrderSingle::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_104;
    FIX::SecurityAltID SecurityAltID_104("STRING_1199781606");
    noSecurityAltID_0_2.set(SecurityAltID_104);
    SecAltIDGrp_NoSecurityAltID_104.insert(SecurityAltID_104.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_104("STRING_143185024");
    noSecurityAltID_0_2.set(SecurityAltIDSource_104);
    SecAltIDGrp_NoSecurityAltID_104.insert(SecurityAltIDSource_104.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_104);

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_94;
  FIX::SecurityXML SecurityXML_95("XMLDATA_490520003");
  msg.set(SecurityXML_95);
  FIX::SecurityXMLLen SecurityXMLLen_47(287938851);
  msg.set(SecurityXMLLen_47);
  FIX::SecurityXMLSchema SecurityXMLSchema_47("STRING_1926809459");
  msg.set(SecurityXMLSchema_47);
  SecurityXML_94.insert(SecurityXMLSchema_47.getString());
  all_values.push_back(SecurityXML_94);

  // OrderQtyData
  multiset<string> OrderQtyData_15;
  FIX::CashOrderQty CashOrderQty_15;
  CashOrderQty_15.setString("12300134");
  msg.set(CashOrderQty_15);
  OrderQtyData_15.insert(CashOrderQty_15.getString());
  FIX::OrderPercent OrderPercent_15;
  OrderPercent_15.setString("35.710000");
  msg.set(OrderPercent_15);
  OrderQtyData_15.insert(OrderPercent_15.getString());
  FIX::OrderQty OrderQty_23;
  OrderQty_23.setString("19083379");
  msg.set(OrderQty_23);
  OrderQtyData_15.insert(OrderQty_23.getString());
  FIX::RoundingDirection RoundingDirection_15('1');
  msg.set(RoundingDirection_15);
  OrderQtyData_15.insert(RoundingDirection_15.getString());
  FIX::RoundingModulus RoundingModulus_15;
  RoundingModulus_15.setString("20968780");
  msg.set(RoundingModulus_15);
  OrderQtyData_15.insert(RoundingModulus_15.getString());
  all_values.push_back(OrderQtyData_15);

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::NewOrderSingle::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_81;
    FIX::PartyID PartyID_81("STRING_947012546");
    noPartyIDs_0_0.set(PartyID_81);
    Parties_NoPartyIDs_81.insert(PartyID_81.getString());
    FIX::PartyIDSource PartyIDSource_81('9');
    noPartyIDs_0_0.set(PartyIDSource_81);
    Parties_NoPartyIDs_81.insert(PartyIDSource_81.getString());
    FIX::PartyRole PartyRole_81(36);
    noPartyIDs_0_0.set(PartyRole_81);
    Parties_NoPartyIDs_81.insert(PartyRole_81.getString());
    all_values.push_back(Parties_NoPartyIDs_81);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::NewOrderSingle::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_166;
      FIX::PartySubID PartySubID_166("STRING_1071452804");
      noPartySubIDs_0_1_0.set(PartySubID_166);
      PtysSubGrp_NoPartySubIDs_166.insert(PartySubID_166.getString());
      FIX::PartySubIDType PartySubIDType_166(17);
      noPartySubIDs_0_1_0.set(PartySubIDType_166);
      PtysSubGrp_NoPartySubIDs_166.insert(PartySubIDType_166.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_166);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::NewOrderSingle::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_82;
    FIX::PartyID PartyID_82("STRING_318687640");
    noPartyIDs_0_1.set(PartyID_82);
    Parties_NoPartyIDs_82.insert(PartyID_82.getString());
    FIX::PartyIDSource PartyIDSource_82('G');
    noPartyIDs_0_1.set(PartyIDSource_82);
    Parties_NoPartyIDs_82.insert(PartyIDSource_82.getString());
    FIX::PartyRole PartyRole_82(79);
    noPartyIDs_0_1.set(PartyRole_82);
    Parties_NoPartyIDs_82.insert(PartyRole_82.getString());
    all_values.push_back(Parties_NoPartyIDs_82);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::NewOrderSingle::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_167;
      FIX::PartySubID PartySubID_167("STRING_965440580");
      noPartySubIDs_1_1_0.set(PartySubID_167);
      PtysSubGrp_NoPartySubIDs_167.insert(PartySubID_167.getString());
      FIX::PartySubIDType PartySubIDType_167(6);
      noPartySubIDs_1_1_0.set(PartySubIDType_167);
      PtysSubGrp_NoPartySubIDs_167.insert(PartySubIDType_167.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_167);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::NewOrderSingle::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_168;
      FIX::PartySubID PartySubID_168("STRING_617309682");
      noPartySubIDs_1_1_1.set(PartySubID_168);
      PtysSubGrp_NoPartySubIDs_168.insert(PartySubID_168.getString());
      FIX::PartySubIDType PartySubIDType_168(10);
      noPartySubIDs_1_1_1.set(PartySubIDType_168);
      PtysSubGrp_NoPartySubIDs_168.insert(PartySubIDType_168.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_168);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::NewOrderSingle::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_83;
    FIX::PartyID PartyID_83("STRING_1464058278");
    noPartyIDs_0_2.set(PartyID_83);
    Parties_NoPartyIDs_83.insert(PartyID_83.getString());
    FIX::PartyIDSource PartyIDSource_83('C');
    noPartyIDs_0_2.set(PartyIDSource_83);
    Parties_NoPartyIDs_83.insert(PartyIDSource_83.getString());
    FIX::PartyRole PartyRole_83(68);
    noPartyIDs_0_2.set(PartyRole_83);
    Parties_NoPartyIDs_83.insert(PartyRole_83.getString());
    all_values.push_back(Parties_NoPartyIDs_83);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::NewOrderSingle::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_169;
      FIX::PartySubID PartySubID_169("STRING_407615683");
      noPartySubIDs_2_1_0.set(PartySubID_169);
      PtysSubGrp_NoPartySubIDs_169.insert(PartySubID_169.getString());
      FIX::PartySubIDType PartySubIDType_169(1);
      noPartySubIDs_2_1_0.set(PartySubIDType_169);
      PtysSubGrp_NoPartySubIDs_169.insert(PartySubIDType_169.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_169);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::NewOrderSingle::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_170;
      FIX::PartySubID PartySubID_170("STRING_727613742");
      noPartySubIDs_2_1_1.set(PartySubID_170);
      PtysSubGrp_NoPartySubIDs_170.insert(PartySubID_170.getString());
      FIX::PartySubIDType PartySubIDType_170(19);
      noPartySubIDs_2_1_1.set(PartySubIDType_170);
      PtysSubGrp_NoPartySubIDs_170.insert(PartySubIDType_170.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_170);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_1);
    }
    {
      FIX50SP2::NewOrderSingle::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_171;
      FIX::PartySubID PartySubID_171("STRING_22104009");
      noPartySubIDs_2_1_2.set(PartySubID_171);
      PtysSubGrp_NoPartySubIDs_171.insert(PartySubID_171.getString());
      FIX::PartySubIDType PartySubIDType_171(1);
      noPartySubIDs_2_1_2.set(PartySubIDType_171);
      PtysSubGrp_NoPartySubIDs_171.insert(PartySubIDType_171.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_171);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_2);
    }
    msg.addGroup(noPartyIDs_0_2);
  }
  // PegInstructions
  multiset<string> PegInstructions_6;
  FIX::PegLimitType PegLimitType_6(0);
  msg.set(PegLimitType_6);
  PegInstructions_6.insert(PegLimitType_6.getString());
  FIX::PegMoveType PegMoveType_6(1);
  msg.set(PegMoveType_6);
  PegInstructions_6.insert(PegMoveType_6.getString());
  FIX::PegOffsetType PegOffsetType_6(0);
  msg.set(PegOffsetType_6);
  PegInstructions_6.insert(PegOffsetType_6.getString());
  FIX::PegOffsetValue PegOffsetValue_6;
  PegOffsetValue_6.setString("909808");
  msg.set(PegOffsetValue_6);
  PegInstructions_6.insert(PegOffsetValue_6.getString());
  FIX::PegPriceType PegPriceType_6(3);
  msg.set(PegPriceType_6);
  PegInstructions_6.insert(PegPriceType_6.getString());
  FIX::PegRoundDirection PegRoundDirection_6(2);
  msg.set(PegRoundDirection_6);
  PegInstructions_6.insert(PegRoundDirection_6.getString());
  FIX::PegScope PegScope_6(3);
  msg.set(PegScope_6);
  PegInstructions_6.insert(PegScope_6.getString());
  FIX::PegSecurityDesc PegSecurityDesc_6("STRING_899261708");
  msg.set(PegSecurityDesc_6);
  PegInstructions_6.insert(PegSecurityDesc_6.getString());
  FIX::PegSecurityID PegSecurityID_6("STRING_455376162");
  msg.set(PegSecurityID_6);
  PegInstructions_6.insert(PegSecurityID_6.getString());
  FIX::PegSecurityIDSource PegSecurityIDSource_6("STRING_1525453084");
  msg.set(PegSecurityIDSource_6);
  PegInstructions_6.insert(PegSecurityIDSource_6.getString());
  FIX::PegSymbol PegSymbol_6("STRING_350803965");
  msg.set(PegSymbol_6);
  PegInstructions_6.insert(PegSymbol_6.getString());
  all_values.push_back(PegInstructions_6);

  // PreAllocGrp
  // Group PreAllocGrp.NoAllocs
  {
    FIX50SP2::NewOrderSingle::NoAllocs noAllocs_0_0;
    // PreAllocGrp.NoAllocs
    multiset<string> PreAllocGrp_NoAllocs_15;
    FIX::AllocAccount AllocAccount_29("STRING_2110303025");
    noAllocs_0_0.set(AllocAccount_29);
    PreAllocGrp_NoAllocs_15.insert(AllocAccount_29.getString());
    FIX::AllocAcctIDSource AllocAcctIDSource_29(669491605);
    noAllocs_0_0.set(AllocAcctIDSource_29);
    PreAllocGrp_NoAllocs_15.insert(AllocAcctIDSource_29.getString());
    FIX::AllocQty AllocQty_28;
    AllocQty_28.setString("3031153");
    noAllocs_0_0.set(AllocQty_28);
    PreAllocGrp_NoAllocs_15.insert(AllocQty_28.getString());
    FIX::AllocSettlCurrency AllocSettlCurrency_24("CHF");
    noAllocs_0_0.set(AllocSettlCurrency_24);
    PreAllocGrp_NoAllocs_15.insert(AllocSettlCurrency_24.getString());
    FIX::IndividualAllocID IndividualAllocID_29("STRING_1268555941");
    noAllocs_0_0.set(IndividualAllocID_29);
    PreAllocGrp_NoAllocs_15.insert(IndividualAllocID_29.getString());
    all_values.push_back(PreAllocGrp_NoAllocs_15);

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::NewOrderSingle::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_76;
      FIX::NestedPartyID NestedPartyID_76("STRING_739245370");
      noNestedPartyIDs_0_1_0.set(NestedPartyID_76);
      NestedParties_NoNestedPartyIDs_76.insert(NestedPartyID_76.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_76('1');
      noNestedPartyIDs_0_1_0.set(NestedPartyIDSource_76);
      NestedParties_NoNestedPartyIDs_76.insert(NestedPartyIDSource_76.getString());
      FIX::NestedPartyRole NestedPartyRole_76(2111275761);
      noNestedPartyIDs_0_1_0.set(NestedPartyRole_76);
      NestedParties_NoNestedPartyIDs_76.insert(NestedPartyRole_76.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_76);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::NewOrderSingle::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_154;
        FIX::NestedPartySubID NestedPartySubID_154("STRING_1690712582");
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubID_154);
        NstdPtysSubGrp_NoNestedPartySubIDs_154.insert(NestedPartySubID_154.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_154(1639107897);
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubIDType_154);
        NstdPtysSubGrp_NoNestedPartySubIDs_154.insert(NestedPartySubIDType_154.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_154);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::NewOrderSingle::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_155;
        FIX::NestedPartySubID NestedPartySubID_155("STRING_966165687");
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubID_155);
        NstdPtysSubGrp_NoNestedPartySubIDs_155.insert(NestedPartySubID_155.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_155(1222296588);
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubIDType_155);
        NstdPtysSubGrp_NoNestedPartySubIDs_155.insert(NestedPartySubIDType_155.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_155);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::NewOrderSingle::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_156;
        FIX::NestedPartySubID NestedPartySubID_156("STRING_219237991");
        noNestedPartySubIDs_0_0_2_2.set(NestedPartySubID_156);
        NstdPtysSubGrp_NoNestedPartySubIDs_156.insert(NestedPartySubID_156.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_156(1516966395);
        noNestedPartySubIDs_0_0_2_2.set(NestedPartySubIDType_156);
        NstdPtysSubGrp_NoNestedPartySubIDs_156.insert(NestedPartySubIDType_156.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_156);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_2);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    msg.addGroup(noAllocs_0_0);
  }
  {
    FIX50SP2::NewOrderSingle::NoAllocs noAllocs_0_1;
    // PreAllocGrp.NoAllocs
    multiset<string> PreAllocGrp_NoAllocs_16;
    FIX::AllocAccount AllocAccount_30("STRING_1244400597");
    noAllocs_0_1.set(AllocAccount_30);
    PreAllocGrp_NoAllocs_16.insert(AllocAccount_30.getString());
    FIX::AllocAcctIDSource AllocAcctIDSource_30(1234790584);
    noAllocs_0_1.set(AllocAcctIDSource_30);
    PreAllocGrp_NoAllocs_16.insert(AllocAcctIDSource_30.getString());
    FIX::AllocQty AllocQty_29;
    AllocQty_29.setString("18470929");
    noAllocs_0_1.set(AllocQty_29);
    PreAllocGrp_NoAllocs_16.insert(AllocQty_29.getString());
    FIX::AllocSettlCurrency AllocSettlCurrency_25("EUR");
    noAllocs_0_1.set(AllocSettlCurrency_25);
    PreAllocGrp_NoAllocs_16.insert(AllocSettlCurrency_25.getString());
    FIX::IndividualAllocID IndividualAllocID_30("STRING_1938073753");
    noAllocs_0_1.set(IndividualAllocID_30);
    PreAllocGrp_NoAllocs_16.insert(IndividualAllocID_30.getString());
    all_values.push_back(PreAllocGrp_NoAllocs_16);

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::NewOrderSingle::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_77;
      FIX::NestedPartyID NestedPartyID_77("STRING_264126370");
      noNestedPartyIDs_1_1_0.set(NestedPartyID_77);
      NestedParties_NoNestedPartyIDs_77.insert(NestedPartyID_77.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_77('1');
      noNestedPartyIDs_1_1_0.set(NestedPartyIDSource_77);
      NestedParties_NoNestedPartyIDs_77.insert(NestedPartyIDSource_77.getString());
      FIX::NestedPartyRole NestedPartyRole_77(1200545308);
      noNestedPartyIDs_1_1_0.set(NestedPartyRole_77);
      NestedParties_NoNestedPartyIDs_77.insert(NestedPartyRole_77.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_77);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::NewOrderSingle::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_157;
        FIX::NestedPartySubID NestedPartySubID_157("STRING_1540435527");
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubID_157);
        NstdPtysSubGrp_NoNestedPartySubIDs_157.insert(NestedPartySubID_157.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_157(1551349273);
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubIDType_157);
        NstdPtysSubGrp_NoNestedPartySubIDs_157.insert(NestedPartySubIDType_157.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_157);

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::NewOrderSingle::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_158;
        FIX::NestedPartySubID NestedPartySubID_158("STRING_98847851");
        noNestedPartySubIDs_1_0_2_1.set(NestedPartySubID_158);
        NstdPtysSubGrp_NoNestedPartySubIDs_158.insert(NestedPartySubID_158.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_158(1503254905);
        noNestedPartySubIDs_1_0_2_1.set(NestedPartySubIDType_158);
        NstdPtysSubGrp_NoNestedPartySubIDs_158.insert(NestedPartySubIDType_158.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_158);

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_1);
      }
      noAllocs_0_1.addGroup(noNestedPartyIDs_1_1_0);
    }
    {
      FIX50SP2::NewOrderSingle::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_78;
      FIX::NestedPartyID NestedPartyID_78("STRING_73357230");
      noNestedPartyIDs_1_1_1.set(NestedPartyID_78);
      NestedParties_NoNestedPartyIDs_78.insert(NestedPartyID_78.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_78('4');
      noNestedPartyIDs_1_1_1.set(NestedPartyIDSource_78);
      NestedParties_NoNestedPartyIDs_78.insert(NestedPartyIDSource_78.getString());
      FIX::NestedPartyRole NestedPartyRole_78(1055921551);
      noNestedPartyIDs_1_1_1.set(NestedPartyRole_78);
      NestedParties_NoNestedPartyIDs_78.insert(NestedPartyRole_78.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_78);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::NewOrderSingle::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_159;
        FIX::NestedPartySubID NestedPartySubID_159("STRING_1670519152");
        noNestedPartySubIDs_1_1_2_0.set(NestedPartySubID_159);
        NstdPtysSubGrp_NoNestedPartySubIDs_159.insert(NestedPartySubID_159.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_159(1703139034);
        noNestedPartySubIDs_1_1_2_0.set(NestedPartySubIDType_159);
        NstdPtysSubGrp_NoNestedPartySubIDs_159.insert(NestedPartySubIDType_159.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_159);

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::NewOrderSingle::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_160;
        FIX::NestedPartySubID NestedPartySubID_160("STRING_934538288");
        noNestedPartySubIDs_1_1_2_1.set(NestedPartySubID_160);
        NstdPtysSubGrp_NoNestedPartySubIDs_160.insert(NestedPartySubID_160.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_160(1217958648);
        noNestedPartySubIDs_1_1_2_1.set(NestedPartySubIDType_160);
        NstdPtysSubGrp_NoNestedPartySubIDs_160.insert(NestedPartySubIDType_160.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_160);

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_1);
      }
      noAllocs_0_1.addGroup(noNestedPartyIDs_1_1_1);
    }
    {
      FIX50SP2::NewOrderSingle::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_79;
      FIX::NestedPartyID NestedPartyID_79("STRING_1666931148");
      noNestedPartyIDs_1_1_2.set(NestedPartyID_79);
      NestedParties_NoNestedPartyIDs_79.insert(NestedPartyID_79.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_79('1');
      noNestedPartyIDs_1_1_2.set(NestedPartyIDSource_79);
      NestedParties_NoNestedPartyIDs_79.insert(NestedPartyIDSource_79.getString());
      FIX::NestedPartyRole NestedPartyRole_79(761187582);
      noNestedPartyIDs_1_1_2.set(NestedPartyRole_79);
      NestedParties_NoNestedPartyIDs_79.insert(NestedPartyRole_79.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_79);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::NewOrderSingle::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_161;
        FIX::NestedPartySubID NestedPartySubID_161("STRING_311770331");
        noNestedPartySubIDs_1_2_2_0.set(NestedPartySubID_161);
        NstdPtysSubGrp_NoNestedPartySubIDs_161.insert(NestedPartySubID_161.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_161(1983484170);
        noNestedPartySubIDs_1_2_2_0.set(NestedPartySubIDType_161);
        NstdPtysSubGrp_NoNestedPartySubIDs_161.insert(NestedPartySubIDType_161.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_161);

        noNestedPartyIDs_1_1_2.addGroup(noNestedPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::NewOrderSingle::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_162;
        FIX::NestedPartySubID NestedPartySubID_162("STRING_1377793389");
        noNestedPartySubIDs_1_2_2_1.set(NestedPartySubID_162);
        NstdPtysSubGrp_NoNestedPartySubIDs_162.insert(NestedPartySubID_162.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_162(1828736727);
        noNestedPartySubIDs_1_2_2_1.set(NestedPartySubIDType_162);
        NstdPtysSubGrp_NoNestedPartySubIDs_162.insert(NestedPartySubIDType_162.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_162);

        noNestedPartyIDs_1_1_2.addGroup(noNestedPartySubIDs_1_2_2_1);
      }
      noAllocs_0_1.addGroup(noNestedPartyIDs_1_1_2);
    }
    msg.addGroup(noAllocs_0_1);
  }
  {
    FIX50SP2::NewOrderSingle::NoAllocs noAllocs_0_2;
    // PreAllocGrp.NoAllocs
    multiset<string> PreAllocGrp_NoAllocs_17;
    FIX::AllocAccount AllocAccount_31("STRING_1080401119");
    noAllocs_0_2.set(AllocAccount_31);
    PreAllocGrp_NoAllocs_17.insert(AllocAccount_31.getString());
    FIX::AllocAcctIDSource AllocAcctIDSource_31(465100325);
    noAllocs_0_2.set(AllocAcctIDSource_31);
    PreAllocGrp_NoAllocs_17.insert(AllocAcctIDSource_31.getString());
    FIX::AllocQty AllocQty_30;
    AllocQty_30.setString("15283459");
    noAllocs_0_2.set(AllocQty_30);
    PreAllocGrp_NoAllocs_17.insert(AllocQty_30.getString());
    FIX::AllocSettlCurrency AllocSettlCurrency_26("JPY");
    noAllocs_0_2.set(AllocSettlCurrency_26);
    PreAllocGrp_NoAllocs_17.insert(AllocSettlCurrency_26.getString());
    FIX::IndividualAllocID IndividualAllocID_31("STRING_1318936098");
    noAllocs_0_2.set(IndividualAllocID_31);
    PreAllocGrp_NoAllocs_17.insert(IndividualAllocID_31.getString());
    all_values.push_back(PreAllocGrp_NoAllocs_17);

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::NewOrderSingle::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_2_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_80;
      FIX::NestedPartyID NestedPartyID_80("STRING_430246148");
      noNestedPartyIDs_2_1_0.set(NestedPartyID_80);
      NestedParties_NoNestedPartyIDs_80.insert(NestedPartyID_80.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_80('1');
      noNestedPartyIDs_2_1_0.set(NestedPartyIDSource_80);
      NestedParties_NoNestedPartyIDs_80.insert(NestedPartyIDSource_80.getString());
      FIX::NestedPartyRole NestedPartyRole_80(783780817);
      noNestedPartyIDs_2_1_0.set(NestedPartyRole_80);
      NestedParties_NoNestedPartyIDs_80.insert(NestedPartyRole_80.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_80);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::NewOrderSingle::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_163;
        FIX::NestedPartySubID NestedPartySubID_163("STRING_726870421");
        noNestedPartySubIDs_2_0_2_0.set(NestedPartySubID_163);
        NstdPtysSubGrp_NoNestedPartySubIDs_163.insert(NestedPartySubID_163.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_163(187646442);
        noNestedPartySubIDs_2_0_2_0.set(NestedPartySubIDType_163);
        NstdPtysSubGrp_NoNestedPartySubIDs_163.insert(NestedPartySubIDType_163.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_163);

        noNestedPartyIDs_2_1_0.addGroup(noNestedPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::NewOrderSingle::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_164;
        FIX::NestedPartySubID NestedPartySubID_164("STRING_1248596532");
        noNestedPartySubIDs_2_0_2_1.set(NestedPartySubID_164);
        NstdPtysSubGrp_NoNestedPartySubIDs_164.insert(NestedPartySubID_164.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_164(82641678);
        noNestedPartySubIDs_2_0_2_1.set(NestedPartySubIDType_164);
        NstdPtysSubGrp_NoNestedPartySubIDs_164.insert(NestedPartySubIDType_164.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_164);

        noNestedPartyIDs_2_1_0.addGroup(noNestedPartySubIDs_2_0_2_1);
      }
      noAllocs_0_2.addGroup(noNestedPartyIDs_2_1_0);
    }
    {
      FIX50SP2::NewOrderSingle::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_2_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_81;
      FIX::NestedPartyID NestedPartyID_81("STRING_261003673");
      noNestedPartyIDs_2_1_1.set(NestedPartyID_81);
      NestedParties_NoNestedPartyIDs_81.insert(NestedPartyID_81.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_81('1');
      noNestedPartyIDs_2_1_1.set(NestedPartyIDSource_81);
      NestedParties_NoNestedPartyIDs_81.insert(NestedPartyIDSource_81.getString());
      FIX::NestedPartyRole NestedPartyRole_81(1138563229);
      noNestedPartyIDs_2_1_1.set(NestedPartyRole_81);
      NestedParties_NoNestedPartyIDs_81.insert(NestedPartyRole_81.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_81);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::NewOrderSingle::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_165;
        FIX::NestedPartySubID NestedPartySubID_165("STRING_1173595248");
        noNestedPartySubIDs_2_1_2_0.set(NestedPartySubID_165);
        NstdPtysSubGrp_NoNestedPartySubIDs_165.insert(NestedPartySubID_165.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_165(694218616);
        noNestedPartySubIDs_2_1_2_0.set(NestedPartySubIDType_165);
        NstdPtysSubGrp_NoNestedPartySubIDs_165.insert(NestedPartySubIDType_165.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_165);

        noNestedPartyIDs_2_1_1.addGroup(noNestedPartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::NewOrderSingle::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_166;
        FIX::NestedPartySubID NestedPartySubID_166("STRING_1390834879");
        noNestedPartySubIDs_2_1_2_1.set(NestedPartySubID_166);
        NstdPtysSubGrp_NoNestedPartySubIDs_166.insert(NestedPartySubID_166.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_166(244070248);
        noNestedPartySubIDs_2_1_2_1.set(NestedPartySubIDType_166);
        NstdPtysSubGrp_NoNestedPartySubIDs_166.insert(NestedPartySubIDType_166.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_166);

        noNestedPartyIDs_2_1_1.addGroup(noNestedPartySubIDs_2_1_2_1);
      }
      {
        FIX50SP2::NewOrderSingle::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_167;
        FIX::NestedPartySubID NestedPartySubID_167("STRING_213666116");
        noNestedPartySubIDs_2_1_2_2.set(NestedPartySubID_167);
        NstdPtysSubGrp_NoNestedPartySubIDs_167.insert(NestedPartySubID_167.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_167(736439523);
        noNestedPartySubIDs_2_1_2_2.set(NestedPartySubIDType_167);
        NstdPtysSubGrp_NoNestedPartySubIDs_167.insert(NestedPartySubIDType_167.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_167);

        noNestedPartyIDs_2_1_1.addGroup(noNestedPartySubIDs_2_1_2_2);
      }
      noAllocs_0_2.addGroup(noNestedPartyIDs_2_1_1);
    }
    {
      FIX50SP2::NewOrderSingle::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_2_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_82;
      FIX::NestedPartyID NestedPartyID_82("STRING_1005257831");
      noNestedPartyIDs_2_1_2.set(NestedPartyID_82);
      NestedParties_NoNestedPartyIDs_82.insert(NestedPartyID_82.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_82('1');
      noNestedPartyIDs_2_1_2.set(NestedPartyIDSource_82);
      NestedParties_NoNestedPartyIDs_82.insert(NestedPartyIDSource_82.getString());
      FIX::NestedPartyRole NestedPartyRole_82(1048209854);
      noNestedPartyIDs_2_1_2.set(NestedPartyRole_82);
      NestedParties_NoNestedPartyIDs_82.insert(NestedPartyRole_82.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_82);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::NewOrderSingle::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_168;
        FIX::NestedPartySubID NestedPartySubID_168("STRING_602531254");
        noNestedPartySubIDs_2_2_2_0.set(NestedPartySubID_168);
        NstdPtysSubGrp_NoNestedPartySubIDs_168.insert(NestedPartySubID_168.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_168(729462933);
        noNestedPartySubIDs_2_2_2_0.set(NestedPartySubIDType_168);
        NstdPtysSubGrp_NoNestedPartySubIDs_168.insert(NestedPartySubIDType_168.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_168);

        noNestedPartyIDs_2_1_2.addGroup(noNestedPartySubIDs_2_2_2_0);
      }
      noAllocs_0_2.addGroup(noNestedPartyIDs_2_1_2);
    }
    msg.addGroup(noAllocs_0_2);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_19;
  FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_19("JPY");
  msg.set(BenchmarkCurveCurrency_19);
  SpreadOrBenchmarkCurveData_19.insert(BenchmarkCurveCurrency_19.getString());
  FIX::BenchmarkCurveName BenchmarkCurveName_19("STRING_FutureSWAP");
  msg.set(BenchmarkCurveName_19);
  SpreadOrBenchmarkCurveData_19.insert(BenchmarkCurveName_19.getString());
  FIX::BenchmarkCurvePoint BenchmarkCurvePoint_19("STRING_1203611382");
  msg.set(BenchmarkCurvePoint_19);
  SpreadOrBenchmarkCurveData_19.insert(BenchmarkCurvePoint_19.getString());
  FIX::BenchmarkPrice BenchmarkPrice_19;
  BenchmarkPrice_19.setString("12337513");
  msg.set(BenchmarkPrice_19);
  SpreadOrBenchmarkCurveData_19.insert(BenchmarkPrice_19.getString());
  FIX::BenchmarkPriceType BenchmarkPriceType_19(1429261377);
  msg.set(BenchmarkPriceType_19);
  SpreadOrBenchmarkCurveData_19.insert(BenchmarkPriceType_19.getString());
  FIX::BenchmarkSecurityID BenchmarkSecurityID_19("STRING_786846892");
  msg.set(BenchmarkSecurityID_19);
  SpreadOrBenchmarkCurveData_19.insert(BenchmarkSecurityID_19.getString());
  FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_19("STRING_1663997507");
  msg.set(BenchmarkSecurityIDSource_19);
  SpreadOrBenchmarkCurveData_19.insert(BenchmarkSecurityIDSource_19.getString());
  FIX::Spread Spread_19;
  Spread_19.setString("6156962");
  msg.set(Spread_19);
  SpreadOrBenchmarkCurveData_19.insert(Spread_19.getString());
  all_values.push_back(SpreadOrBenchmarkCurveData_19);

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::NewOrderSingle::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_26;
    FIX::StipulationType StipulationType_26("STRING_INTERNALPX");
    noStipulations_0_0.set(StipulationType_26);
    Stipulations_NoStipulations_26.insert(StipulationType_26.getString());
    FIX::StipulationValue StipulationValue_26("STRING_1342566692");
    noStipulations_0_0.set(StipulationValue_26);
    Stipulations_NoStipulations_26.insert(StipulationValue_26.getString());
    all_values.push_back(Stipulations_NoStipulations_26);

    msg.addGroup(noStipulations_0_0);
  }
  {
    FIX50SP2::NewOrderSingle::NoStipulations noStipulations_0_1;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_27;
    FIX::StipulationType StipulationType_27("STRING_CPR");
    noStipulations_0_1.set(StipulationType_27);
    Stipulations_NoStipulations_27.insert(StipulationType_27.getString());
    FIX::StipulationValue StipulationValue_27("STRING_1914859072");
    noStipulations_0_1.set(StipulationValue_27);
    Stipulations_NoStipulations_27.insert(StipulationValue_27.getString());
    all_values.push_back(Stipulations_NoStipulations_27);

    msg.addGroup(noStipulations_0_1);
  }
  {
    FIX50SP2::NewOrderSingle::NoStipulations noStipulations_0_2;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_28;
    FIX::StipulationType StipulationType_28("STRING_AVFICO");
    noStipulations_0_2.set(StipulationType_28);
    Stipulations_NoStipulations_28.insert(StipulationType_28.getString());
    FIX::StipulationValue StipulationValue_28("STRING_2019277825");
    noStipulations_0_2.set(StipulationValue_28);
    Stipulations_NoStipulations_28.insert(StipulationValue_28.getString());
    all_values.push_back(Stipulations_NoStipulations_28);

    msg.addGroup(noStipulations_0_2);
  }
  // StrategyParametersGrp
  // Group StrategyParametersGrp.NoStrategyParameters
  {
    FIX50SP2::NewOrderSingle::NoStrategyParameters noStrategyParameters_0_0;
    // StrategyParametersGrp.NoStrategyParameters
    multiset<string> StrategyParametersGrp_NoStrategyParameters_14;
    FIX::StrategyParameterName StrategyParameterName_14("STRING_416287951");
    noStrategyParameters_0_0.set(StrategyParameterName_14);
    StrategyParametersGrp_NoStrategyParameters_14.insert(StrategyParameterName_14.getString());
    FIX::StrategyParameterType StrategyParameterType_14(23);
    noStrategyParameters_0_0.set(StrategyParameterType_14);
    StrategyParametersGrp_NoStrategyParameters_14.insert(StrategyParameterType_14.getString());
    FIX::StrategyParameterValue StrategyParameterValue_14("STRING_444046767");
    noStrategyParameters_0_0.set(StrategyParameterValue_14);
    StrategyParametersGrp_NoStrategyParameters_14.insert(StrategyParameterValue_14.getString());
    all_values.push_back(StrategyParametersGrp_NoStrategyParameters_14);

    msg.addGroup(noStrategyParameters_0_0);
  }
  {
    FIX50SP2::NewOrderSingle::NoStrategyParameters noStrategyParameters_0_1;
    // StrategyParametersGrp.NoStrategyParameters
    multiset<string> StrategyParametersGrp_NoStrategyParameters_15;
    FIX::StrategyParameterName StrategyParameterName_15("STRING_1110506567");
    noStrategyParameters_0_1.set(StrategyParameterName_15);
    StrategyParametersGrp_NoStrategyParameters_15.insert(StrategyParameterName_15.getString());
    FIX::StrategyParameterType StrategyParameterType_15(6);
    noStrategyParameters_0_1.set(StrategyParameterType_15);
    StrategyParametersGrp_NoStrategyParameters_15.insert(StrategyParameterType_15.getString());
    FIX::StrategyParameterValue StrategyParameterValue_15("STRING_688117016");
    noStrategyParameters_0_1.set(StrategyParameterValue_15);
    StrategyParametersGrp_NoStrategyParameters_15.insert(StrategyParameterValue_15.getString());
    all_values.push_back(StrategyParametersGrp_NoStrategyParameters_15);

    msg.addGroup(noStrategyParameters_0_1);
  }
  {
    FIX50SP2::NewOrderSingle::NoStrategyParameters noStrategyParameters_0_2;
    // StrategyParametersGrp.NoStrategyParameters
    multiset<string> StrategyParametersGrp_NoStrategyParameters_16;
    FIX::StrategyParameterName StrategyParameterName_16("STRING_1324172683");
    noStrategyParameters_0_2.set(StrategyParameterName_16);
    StrategyParametersGrp_NoStrategyParameters_16.insert(StrategyParameterName_16.getString());
    FIX::StrategyParameterType StrategyParameterType_16(7);
    noStrategyParameters_0_2.set(StrategyParameterType_16);
    StrategyParametersGrp_NoStrategyParameters_16.insert(StrategyParameterType_16.getString());
    FIX::StrategyParameterValue StrategyParameterValue_16("STRING_1693374847");
    noStrategyParameters_0_2.set(StrategyParameterValue_16);
    StrategyParametersGrp_NoStrategyParameters_16.insert(StrategyParameterValue_16.getString());
    all_values.push_back(StrategyParametersGrp_NoStrategyParameters_16);

    msg.addGroup(noStrategyParameters_0_2);
  }
  // TrdRegTimestamps
  // Group TrdRegTimestamps.NoTrdRegTimestamps
  {
    FIX50SP2::NewOrderSingle::NoTrdRegTimestamps noTrdRegTimestamps_0_0;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_15;
    FIX::DeskOrderHandlingInst DeskOrderHandlingInst_15("MULTIPLESTRINGVALUE_LOO");
    noTrdRegTimestamps_0_0.set(DeskOrderHandlingInst_15);
    TrdRegTimestamps_NoTrdRegTimestamps_15.insert(DeskOrderHandlingInst_15.getString());
    FIX::DeskType DeskType_15("STRING_S");
    noTrdRegTimestamps_0_0.set(DeskType_15);
    TrdRegTimestamps_NoTrdRegTimestamps_15.insert(DeskType_15.getString());
    FIX::DeskTypeSource DeskTypeSource_15(1);
    noTrdRegTimestamps_0_0.set(DeskTypeSource_15);
    TrdRegTimestamps_NoTrdRegTimestamps_15.insert(DeskTypeSource_15.getString());
    FIX::TrdRegTimestamp TrdRegTimestamp_15(FIX::UTCTIMESTAMP(17, 15, 1, 12, 7, 2004));
    noTrdRegTimestamps_0_0.set(TrdRegTimestamp_15);
    TrdRegTimestamps_NoTrdRegTimestamps_15.insert(TrdRegTimestamp_15.getString());
    FIX::TrdRegTimestampOrigin TrdRegTimestampOrigin_15("STRING_4300004");
    noTrdRegTimestamps_0_0.set(TrdRegTimestampOrigin_15);
    TrdRegTimestamps_NoTrdRegTimestamps_15.insert(TrdRegTimestampOrigin_15.getString());
    FIX::TrdRegTimestampType TrdRegTimestampType_15(4);
    noTrdRegTimestamps_0_0.set(TrdRegTimestampType_15);
    TrdRegTimestamps_NoTrdRegTimestamps_15.insert(TrdRegTimestampType_15.getString());
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_15);

    msg.addGroup(noTrdRegTimestamps_0_0);
  }
  // TrdgSesGrp
  // Group TrdgSesGrp.NoTradingSessions
  {
    FIX50SP2::NewOrderSingle::NoTradingSessions noTradingSessions_0_0;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_12;
    FIX::TradingSessionID TradingSessionID_50("STRING_2");
    noTradingSessions_0_0.set(TradingSessionID_50);
    TrdgSesGrp_NoTradingSessions_12.insert(TradingSessionID_50.getString());
    FIX::TradingSessionSubID TradingSessionSubID_50("STRING_3");
    noTradingSessions_0_0.set(TradingSessionSubID_50);
    TrdgSesGrp_NoTradingSessions_12.insert(TradingSessionSubID_50.getString());
    all_values.push_back(TrdgSesGrp_NoTradingSessions_12);

    msg.addGroup(noTradingSessions_0_0);
  }
  {
    FIX50SP2::NewOrderSingle::NoTradingSessions noTradingSessions_0_1;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_13;
    FIX::TradingSessionID TradingSessionID_51("STRING_6");
    noTradingSessions_0_1.set(TradingSessionID_51);
    TrdgSesGrp_NoTradingSessions_13.insert(TradingSessionID_51.getString());
    FIX::TradingSessionSubID TradingSessionSubID_51("STRING_6");
    noTradingSessions_0_1.set(TradingSessionSubID_51);
    TrdgSesGrp_NoTradingSessions_13.insert(TradingSessionSubID_51.getString());
    all_values.push_back(TrdgSesGrp_NoTradingSessions_13);

    msg.addGroup(noTradingSessions_0_1);
  }
  {
    FIX50SP2::NewOrderSingle::NoTradingSessions noTradingSessions_0_2;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_14;
    FIX::TradingSessionID TradingSessionID_52("STRING_4");
    noTradingSessions_0_2.set(TradingSessionID_52);
    TrdgSesGrp_NoTradingSessions_14.insert(TradingSessionID_52.getString());
    FIX::TradingSessionSubID TradingSessionSubID_52("STRING_5");
    noTradingSessions_0_2.set(TradingSessionSubID_52);
    TrdgSesGrp_NoTradingSessions_14.insert(TradingSessionSubID_52.getString());
    all_values.push_back(TrdgSesGrp_NoTradingSessions_14);

    msg.addGroup(noTradingSessions_0_2);
  }
  // TriggeringInstruction
  multiset<string> TriggeringInstruction_6;
  FIX::TriggerAction TriggerAction_6('2');
  msg.set(TriggerAction_6);
  TriggeringInstruction_6.insert(TriggerAction_6.getString());
  FIX::TriggerNewPrice TriggerNewPrice_6;
  TriggerNewPrice_6.setString("5259444");
  msg.set(TriggerNewPrice_6);
  TriggeringInstruction_6.insert(TriggerNewPrice_6.getString());
  FIX::TriggerNewQty TriggerNewQty_6;
  TriggerNewQty_6.setString("9824493");
  msg.set(TriggerNewQty_6);
  TriggeringInstruction_6.insert(TriggerNewQty_6.getString());
  FIX::TriggerOrderType TriggerOrderType_6('1');
  msg.set(TriggerOrderType_6);
  TriggeringInstruction_6.insert(TriggerOrderType_6.getString());
  FIX::TriggerPrice TriggerPrice_6;
  TriggerPrice_6.setString("9699912");
  msg.set(TriggerPrice_6);
  TriggeringInstruction_6.insert(TriggerPrice_6.getString());
  FIX::TriggerPriceDirection TriggerPriceDirection_6('U');
  msg.set(TriggerPriceDirection_6);
  TriggeringInstruction_6.insert(TriggerPriceDirection_6.getString());
  FIX::TriggerPriceType TriggerPriceType_6('6');
  msg.set(TriggerPriceType_6);
  TriggeringInstruction_6.insert(TriggerPriceType_6.getString());
  FIX::TriggerPriceTypeScope TriggerPriceTypeScope_6('0');
  msg.set(TriggerPriceTypeScope_6);
  TriggeringInstruction_6.insert(TriggerPriceTypeScope_6.getString());
  FIX::TriggerSecurityDesc TriggerSecurityDesc_6("STRING_1269644910");
  msg.set(TriggerSecurityDesc_6);
  TriggeringInstruction_6.insert(TriggerSecurityDesc_6.getString());
  FIX::TriggerSecurityID TriggerSecurityID_6("STRING_1264926683");
  msg.set(TriggerSecurityID_6);
  TriggeringInstruction_6.insert(TriggerSecurityID_6.getString());
  FIX::TriggerSecurityIDSource TriggerSecurityIDSource_6("STRING_1203999419");
  msg.set(TriggerSecurityIDSource_6);
  TriggeringInstruction_6.insert(TriggerSecurityIDSource_6.getString());
  FIX::TriggerSymbol TriggerSymbol_6("STRING_1818555459");
  msg.set(TriggerSymbol_6);
  TriggeringInstruction_6.insert(TriggerSymbol_6.getString());
  FIX::TriggerTradingSessionID TriggerTradingSessionID_6("STRING_473534412");
  msg.set(TriggerTradingSessionID_6);
  TriggeringInstruction_6.insert(TriggerTradingSessionID_6.getString());
  FIX::TriggerTradingSessionSubID TriggerTradingSessionSubID_6("STRING_1591148971");
  msg.set(TriggerTradingSessionSubID_6);
  TriggeringInstruction_6.insert(TriggerTradingSessionSubID_6.getString());
  FIX::TriggerType TriggerType_6('3');
  msg.set(TriggerType_6);
  TriggeringInstruction_6.insert(TriggerType_6.getString());
  all_values.push_back(TriggeringInstruction_6);

  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::NewOrderSingle::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_64;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_64("DATA_1752474349");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_64);
    UnderlyingInstrument_64.insert(EncodedUnderlyingIssuer_64.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_64(894103350);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_64);
    UnderlyingInstrument_64.insert(EncodedUnderlyingIssuerLen_64.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_64("DATA_460001015");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_64);
    UnderlyingInstrument_64.insert(EncodedUnderlyingSecurityDesc_64.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_64(969927461);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_64);
    UnderlyingInstrument_64.insert(EncodedUnderlyingSecurityDescLen_64.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_64;
    UnderlyingAdjustedQuantity_64.setString("519607");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_64);
    UnderlyingInstrument_64.insert(UnderlyingAdjustedQuantity_64.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_64;
    UnderlyingAllocationPercent_64.setString("83.330000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_64);
    UnderlyingInstrument_64.insert(UnderlyingAllocationPercent_64.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_64;
    UnderlyingAttachmentPoint_64.setString("74.650000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_64);
    UnderlyingInstrument_64.insert(UnderlyingAttachmentPoint_64.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_64("STRING_873815749");
    noUnderlyings_0_0.set(UnderlyingCFICode_64);
    UnderlyingInstrument_64.insert(UnderlyingCFICode_64.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_64("STRING_1883528275");
    noUnderlyings_0_0.set(UnderlyingCPProgram_64);
    UnderlyingInstrument_64.insert(UnderlyingCPProgram_64.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_64("STRING_401671530");
    noUnderlyings_0_0.set(UnderlyingCPRegType_64);
    UnderlyingInstrument_64.insert(UnderlyingCPRegType_64.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_64;
    UnderlyingCapValue_64.setString("2144495");
    noUnderlyings_0_0.set(UnderlyingCapValue_64);
    UnderlyingInstrument_64.insert(UnderlyingCapValue_64.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_64;
    UnderlyingCashAmount_64.setString("10244812");
    noUnderlyings_0_0.set(UnderlyingCashAmount_64);
    UnderlyingInstrument_64.insert(UnderlyingCashAmount_64.getString());
    FIX::UnderlyingCashType UnderlyingCashType_64("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_64);
    UnderlyingInstrument_64.insert(UnderlyingCashType_64.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_64;
    UnderlyingContractMultiplier_64.setString("14699425");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_64);
    UnderlyingInstrument_64.insert(UnderlyingContractMultiplier_64.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_64(1590642616);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_64);
    UnderlyingInstrument_64.insert(UnderlyingContractMultiplierUnit_64.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_64("COUNTRY_497418494");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_64);
    UnderlyingInstrument_64.insert(UnderlyingCountryOfIssue_64.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_64("LOCALMKTDATE_1995886947");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_64);
    UnderlyingInstrument_64.insert(UnderlyingCouponPaymentDate_64.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_64;
    UnderlyingCouponRate_64.setString("82.750000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_64);
    UnderlyingInstrument_64.insert(UnderlyingCouponRate_64.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_64("STRING_1883021657");
    noUnderlyings_0_0.set(UnderlyingCreditRating_64);
    UnderlyingInstrument_64.insert(UnderlyingCreditRating_64.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_64("EUR");
    noUnderlyings_0_0.set(UnderlyingCurrency_64);
    UnderlyingInstrument_64.insert(UnderlyingCurrency_64.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_64;
    UnderlyingCurrentValue_64.setString("6925831");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_64);
    UnderlyingInstrument_64.insert(UnderlyingCurrentValue_64.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_64;
    UnderlyingDetachmentPoint_64.setString("90.750000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_64);
    UnderlyingInstrument_64.insert(UnderlyingDetachmentPoint_64.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_64;
    UnderlyingDirtyPrice_64.setString("16407254");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_64);
    UnderlyingInstrument_64.insert(UnderlyingDirtyPrice_64.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_64;
    UnderlyingEndPrice_64.setString("19575098");
    noUnderlyings_0_0.set(UnderlyingEndPrice_64);
    UnderlyingInstrument_64.insert(UnderlyingEndPrice_64.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_64;
    UnderlyingEndValue_64.setString("15330184");
    noUnderlyings_0_0.set(UnderlyingEndValue_64);
    UnderlyingInstrument_64.insert(UnderlyingEndValue_64.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_64(1311797222);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_64);
    UnderlyingInstrument_64.insert(UnderlyingExerciseStyle_64.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_64;
    UnderlyingFXRate_64.setString("2835606");
    noUnderlyings_0_0.set(UnderlyingFXRate_64);
    UnderlyingInstrument_64.insert(UnderlyingFXRate_64.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_64('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_64);
    UnderlyingInstrument_64.insert(UnderlyingFXRateCalc_64.getString());
    FIX::UnderlyingFactor UnderlyingFactor_64;
    UnderlyingFactor_64.setString("21343108");
    noUnderlyings_0_0.set(UnderlyingFactor_64);
    UnderlyingInstrument_64.insert(UnderlyingFactor_64.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_64(695165692);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_64);
    UnderlyingInstrument_64.insert(UnderlyingFlowScheduleType_64.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_64("STRING_581674519");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_64);
    UnderlyingInstrument_64.insert(UnderlyingInstrRegistry_64.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_64("LOCALMKTDATE_880930539");
    noUnderlyings_0_0.set(UnderlyingIssueDate_64);
    UnderlyingInstrument_64.insert(UnderlyingIssueDate_64.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_64("STRING_1155166707");
    noUnderlyings_0_0.set(UnderlyingIssuer_64);
    UnderlyingInstrument_64.insert(UnderlyingIssuer_64.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_64("STRING_1551601980");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_64);
    UnderlyingInstrument_64.insert(UnderlyingLocaleOfIssue_64.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_64("LOCALMKTDATE_932891335");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_64);
    UnderlyingInstrument_64.insert(UnderlyingMaturityDate_64.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_64("MONTHYEAR_945341392");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_64);
    UnderlyingInstrument_64.insert(UnderlyingMaturityMonthYear_64.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_64("TZTIMEONLY_378345797");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_64);
    UnderlyingInstrument_64.insert(UnderlyingMaturityTime_64.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_64;
    UnderlyingNotionalPercentageOutstanding_64.setString("70.840000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_64);
    UnderlyingInstrument_64.insert(UnderlyingNotionalPercentageOutstanding_64.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_64('6');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_64);
    UnderlyingInstrument_64.insert(UnderlyingOptAttribute_64.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_64;
    UnderlyingOriginalNotionalPercentageOutstanding_64.setString("73.270000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_64);
    UnderlyingInstrument_64.insert(UnderlyingOriginalNotionalPercentageOutstanding_64.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_64("STRING_2021156678");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_64);
    UnderlyingInstrument_64.insert(UnderlyingPriceUnitOfMeasure_64.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_64;
    UnderlyingPriceUnitOfMeasureQty_64.setString("17058672");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_64);
    UnderlyingInstrument_64.insert(UnderlyingPriceUnitOfMeasureQty_64.getString());
    FIX::UnderlyingProduct UnderlyingProduct_64(219923427);
    noUnderlyings_0_0.set(UnderlyingProduct_64);
    UnderlyingInstrument_64.insert(UnderlyingProduct_64.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_64(1343615541);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_64);
    UnderlyingInstrument_64.insert(UnderlyingPutOrCall_64.getString());
    FIX::UnderlyingPx UnderlyingPx_64;
    UnderlyingPx_64.setString("11490262");
    noUnderlyings_0_0.set(UnderlyingPx_64);
    UnderlyingInstrument_64.insert(UnderlyingPx_64.getString());
    FIX::UnderlyingQty UnderlyingQty_64;
    UnderlyingQty_64.setString("7173419");
    noUnderlyings_0_0.set(UnderlyingQty_64);
    UnderlyingInstrument_64.insert(UnderlyingQty_64.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_64("LOCALMKTDATE_1192018840");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_64);
    UnderlyingInstrument_64.insert(UnderlyingRedemptionDate_64.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_64("STRING_1574634523");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_64);
    UnderlyingInstrument_64.insert(UnderlyingRepoCollateralSecurityType_64.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_64;
    UnderlyingRepurchaseRate_64.setString("99.310000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_64);
    UnderlyingInstrument_64.insert(UnderlyingRepurchaseRate_64.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_64(2010413344);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_64);
    UnderlyingInstrument_64.insert(UnderlyingRepurchaseTerm_64.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_64("STRING_1945715024");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_64);
    UnderlyingInstrument_64.insert(UnderlyingRestructuringType_64.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_64("STRING_1145463101");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_64);
    UnderlyingInstrument_64.insert(UnderlyingSecurityDesc_64.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_64("EXCHANGE_191948771");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_64);
    UnderlyingInstrument_64.insert(UnderlyingSecurityExchange_64.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_64("STRING_1438956788");
    noUnderlyings_0_0.set(UnderlyingSecurityID_64);
    UnderlyingInstrument_64.insert(UnderlyingSecurityID_64.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_64("STRING_955489307");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_64);
    UnderlyingInstrument_64.insert(UnderlyingSecurityIDSource_64.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_64("STRING_1724967266");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_64);
    UnderlyingInstrument_64.insert(UnderlyingSecuritySubType_64.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_64("STRING_603270362");
    noUnderlyings_0_0.set(UnderlyingSecurityType_64);
    UnderlyingInstrument_64.insert(UnderlyingSecurityType_64.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_64("STRING_1239049925");
    noUnderlyings_0_0.set(UnderlyingSeniority_64);
    UnderlyingInstrument_64.insert(UnderlyingSeniority_64.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_64("STRING_554167436");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_64);
    UnderlyingInstrument_64.insert(UnderlyingSettlMethod_64.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_64(5);
    noUnderlyings_0_0.set(UnderlyingSettlementType_64);
    UnderlyingInstrument_64.insert(UnderlyingSettlementType_64.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_64;
    UnderlyingStartValue_64.setString("19342156");
    noUnderlyings_0_0.set(UnderlyingStartValue_64);
    UnderlyingInstrument_64.insert(UnderlyingStartValue_64.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_64("STRING_1135841955");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_64);
    UnderlyingInstrument_64.insert(UnderlyingStateOrProvinceOfIssue_64.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_64("JPY");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_64);
    UnderlyingInstrument_64.insert(UnderlyingStrikeCurrency_64.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_64;
    UnderlyingStrikePrice_64.setString("5399602");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_64);
    UnderlyingInstrument_64.insert(UnderlyingStrikePrice_64.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_64("STRING_256435777");
    noUnderlyings_0_0.set(UnderlyingSymbol_64);
    UnderlyingInstrument_64.insert(UnderlyingSymbol_64.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_64("STRING_1887240069");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_64);
    UnderlyingInstrument_64.insert(UnderlyingSymbolSfx_64.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_64("STRING_918306084");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_64);
    UnderlyingInstrument_64.insert(UnderlyingTimeUnit_64.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_64("STRING_2063142861");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_64);
    UnderlyingInstrument_64.insert(UnderlyingUnitOfMeasure_64.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_64;
    UnderlyingUnitOfMeasureQty_64.setString("4211424");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_64);
    UnderlyingInstrument_64.insert(UnderlyingUnitOfMeasureQty_64.getString());
    all_values.push_back(UnderlyingInstrument_64);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::NewOrderSingle::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_133;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_133("STRING_1936815891");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_133);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_133.insert(UnderlyingSecurityAltID_133.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_133("STRING_2127009720");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_133);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_133.insert(UnderlyingSecurityAltIDSource_133.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_133);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::NewOrderSingle::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_134;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_134("STRING_1918246839");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_134);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_134.insert(UnderlyingSecurityAltID_134.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_134("STRING_1132947784");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_134);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_134.insert(UnderlyingSecurityAltIDSource_134.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_134);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::NewOrderSingle::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_135;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_135("STRING_1128552320");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltID_135);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_135.insert(UnderlyingSecurityAltID_135.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_135("STRING_488105113");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltIDSource_135);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_135.insert(UnderlyingSecurityAltIDSource_135.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_135);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::NewOrderSingle::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_122;
      FIX::UnderlyingStipType UnderlyingStipType_122("STRING_555703195");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_122);
      UnderlyingStipulations_NoUnderlyingStips_122.insert(UnderlyingStipType_122.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_122("STRING_940985044");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_122);
      UnderlyingStipulations_NoUnderlyingStips_122.insert(UnderlyingStipValue_122.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_122);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::NewOrderSingle::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_123;
      FIX::UnderlyingStipType UnderlyingStipType_123("STRING_40412673");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_123);
      UnderlyingStipulations_NoUnderlyingStips_123.insert(UnderlyingStipType_123.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_123("STRING_353934572");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_123);
      UnderlyingStipulations_NoUnderlyingStips_123.insert(UnderlyingStipValue_123.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_123);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::NewOrderSingle::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_134;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_134("STRING_232361444");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_134);
      UndlyInstrumentParties_NoUndlyInstrumentParties_134.insert(UnderlyingInstrumentPartyID_134.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_134('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_134);
      UndlyInstrumentParties_NoUndlyInstrumentParties_134.insert(UnderlyingInstrumentPartyIDSource_134.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_134(894453805);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_134);
      UndlyInstrumentParties_NoUndlyInstrumentParties_134.insert(UnderlyingInstrumentPartyRole_134.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_134);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderSingle::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_274;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_274("STRING_248678074");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_274);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_274.insert(UnderlyingInstrumentPartySubID_274.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_274(2133503730);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_274);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_274.insert(UnderlyingInstrumentPartySubIDType_274.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_274);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::NewOrderSingle::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_275;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_275("STRING_364012498");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_275);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_275.insert(UnderlyingInstrumentPartySubID_275.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_275(838775626);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_275);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_275.insert(UnderlyingInstrumentPartySubIDType_275.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_275);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::NewOrderSingle::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_65;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_65("DATA_1920235700");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_65);
    UnderlyingInstrument_65.insert(EncodedUnderlyingIssuer_65.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_65(1499854453);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_65);
    UnderlyingInstrument_65.insert(EncodedUnderlyingIssuerLen_65.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_65("DATA_162320068");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_65);
    UnderlyingInstrument_65.insert(EncodedUnderlyingSecurityDesc_65.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_65(714650728);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_65);
    UnderlyingInstrument_65.insert(EncodedUnderlyingSecurityDescLen_65.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_65;
    UnderlyingAdjustedQuantity_65.setString("20398147");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_65);
    UnderlyingInstrument_65.insert(UnderlyingAdjustedQuantity_65.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_65;
    UnderlyingAllocationPercent_65.setString("58.460000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_65);
    UnderlyingInstrument_65.insert(UnderlyingAllocationPercent_65.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_65;
    UnderlyingAttachmentPoint_65.setString("71.490000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_65);
    UnderlyingInstrument_65.insert(UnderlyingAttachmentPoint_65.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_65("STRING_810637176");
    noUnderlyings_0_1.set(UnderlyingCFICode_65);
    UnderlyingInstrument_65.insert(UnderlyingCFICode_65.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_65("STRING_334415059");
    noUnderlyings_0_1.set(UnderlyingCPProgram_65);
    UnderlyingInstrument_65.insert(UnderlyingCPProgram_65.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_65("STRING_875549590");
    noUnderlyings_0_1.set(UnderlyingCPRegType_65);
    UnderlyingInstrument_65.insert(UnderlyingCPRegType_65.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_65;
    UnderlyingCapValue_65.setString("3614769");
    noUnderlyings_0_1.set(UnderlyingCapValue_65);
    UnderlyingInstrument_65.insert(UnderlyingCapValue_65.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_65;
    UnderlyingCashAmount_65.setString("1237473");
    noUnderlyings_0_1.set(UnderlyingCashAmount_65);
    UnderlyingInstrument_65.insert(UnderlyingCashAmount_65.getString());
    FIX::UnderlyingCashType UnderlyingCashType_65("STRING_FIXED");
    noUnderlyings_0_1.set(UnderlyingCashType_65);
    UnderlyingInstrument_65.insert(UnderlyingCashType_65.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_65;
    UnderlyingContractMultiplier_65.setString("1322401");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_65);
    UnderlyingInstrument_65.insert(UnderlyingContractMultiplier_65.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_65(1256695087);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_65);
    UnderlyingInstrument_65.insert(UnderlyingContractMultiplierUnit_65.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_65("COUNTRY_1983627983");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_65);
    UnderlyingInstrument_65.insert(UnderlyingCountryOfIssue_65.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_65("LOCALMKTDATE_620345244");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_65);
    UnderlyingInstrument_65.insert(UnderlyingCouponPaymentDate_65.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_65;
    UnderlyingCouponRate_65.setString("80.640000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_65);
    UnderlyingInstrument_65.insert(UnderlyingCouponRate_65.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_65("STRING_391847530");
    noUnderlyings_0_1.set(UnderlyingCreditRating_65);
    UnderlyingInstrument_65.insert(UnderlyingCreditRating_65.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_65("CAN");
    noUnderlyings_0_1.set(UnderlyingCurrency_65);
    UnderlyingInstrument_65.insert(UnderlyingCurrency_65.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_65;
    UnderlyingCurrentValue_65.setString("7457821");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_65);
    UnderlyingInstrument_65.insert(UnderlyingCurrentValue_65.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_65;
    UnderlyingDetachmentPoint_65.setString("47.850000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_65);
    UnderlyingInstrument_65.insert(UnderlyingDetachmentPoint_65.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_65;
    UnderlyingDirtyPrice_65.setString("17069521");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_65);
    UnderlyingInstrument_65.insert(UnderlyingDirtyPrice_65.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_65;
    UnderlyingEndPrice_65.setString("3911898");
    noUnderlyings_0_1.set(UnderlyingEndPrice_65);
    UnderlyingInstrument_65.insert(UnderlyingEndPrice_65.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_65;
    UnderlyingEndValue_65.setString("2472649");
    noUnderlyings_0_1.set(UnderlyingEndValue_65);
    UnderlyingInstrument_65.insert(UnderlyingEndValue_65.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_65(1516797244);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_65);
    UnderlyingInstrument_65.insert(UnderlyingExerciseStyle_65.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_65;
    UnderlyingFXRate_65.setString("6398678");
    noUnderlyings_0_1.set(UnderlyingFXRate_65);
    UnderlyingInstrument_65.insert(UnderlyingFXRate_65.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_65('M');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_65);
    UnderlyingInstrument_65.insert(UnderlyingFXRateCalc_65.getString());
    FIX::UnderlyingFactor UnderlyingFactor_65;
    UnderlyingFactor_65.setString("18808097");
    noUnderlyings_0_1.set(UnderlyingFactor_65);
    UnderlyingInstrument_65.insert(UnderlyingFactor_65.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_65(1478643515);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_65);
    UnderlyingInstrument_65.insert(UnderlyingFlowScheduleType_65.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_65("STRING_6037077");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_65);
    UnderlyingInstrument_65.insert(UnderlyingInstrRegistry_65.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_65("LOCALMKTDATE_1233180548");
    noUnderlyings_0_1.set(UnderlyingIssueDate_65);
    UnderlyingInstrument_65.insert(UnderlyingIssueDate_65.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_65("STRING_1640963583");
    noUnderlyings_0_1.set(UnderlyingIssuer_65);
    UnderlyingInstrument_65.insert(UnderlyingIssuer_65.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_65("STRING_720687805");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_65);
    UnderlyingInstrument_65.insert(UnderlyingLocaleOfIssue_65.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_65("LOCALMKTDATE_1125511641");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_65);
    UnderlyingInstrument_65.insert(UnderlyingMaturityDate_65.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_65("MONTHYEAR_2059719429");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_65);
    UnderlyingInstrument_65.insert(UnderlyingMaturityMonthYear_65.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_65("TZTIMEONLY_1175094955");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_65);
    UnderlyingInstrument_65.insert(UnderlyingMaturityTime_65.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_65;
    UnderlyingNotionalPercentageOutstanding_65.setString("88.170000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_65);
    UnderlyingInstrument_65.insert(UnderlyingNotionalPercentageOutstanding_65.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_65('2');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_65);
    UnderlyingInstrument_65.insert(UnderlyingOptAttribute_65.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_65;
    UnderlyingOriginalNotionalPercentageOutstanding_65.setString("45.450000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_65);
    UnderlyingInstrument_65.insert(UnderlyingOriginalNotionalPercentageOutstanding_65.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_65("STRING_150142109");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_65);
    UnderlyingInstrument_65.insert(UnderlyingPriceUnitOfMeasure_65.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_65;
    UnderlyingPriceUnitOfMeasureQty_65.setString("3703981");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_65);
    UnderlyingInstrument_65.insert(UnderlyingPriceUnitOfMeasureQty_65.getString());
    FIX::UnderlyingProduct UnderlyingProduct_65(758236559);
    noUnderlyings_0_1.set(UnderlyingProduct_65);
    UnderlyingInstrument_65.insert(UnderlyingProduct_65.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_65(282382240);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_65);
    UnderlyingInstrument_65.insert(UnderlyingPutOrCall_65.getString());
    FIX::UnderlyingPx UnderlyingPx_65;
    UnderlyingPx_65.setString("16270932");
    noUnderlyings_0_1.set(UnderlyingPx_65);
    UnderlyingInstrument_65.insert(UnderlyingPx_65.getString());
    FIX::UnderlyingQty UnderlyingQty_65;
    UnderlyingQty_65.setString("5943808");
    noUnderlyings_0_1.set(UnderlyingQty_65);
    UnderlyingInstrument_65.insert(UnderlyingQty_65.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_65("LOCALMKTDATE_902727484");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_65);
    UnderlyingInstrument_65.insert(UnderlyingRedemptionDate_65.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_65("STRING_913787648");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_65);
    UnderlyingInstrument_65.insert(UnderlyingRepoCollateralSecurityType_65.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_65;
    UnderlyingRepurchaseRate_65.setString("84.250000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_65);
    UnderlyingInstrument_65.insert(UnderlyingRepurchaseRate_65.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_65(316574124);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_65);
    UnderlyingInstrument_65.insert(UnderlyingRepurchaseTerm_65.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_65("STRING_240894737");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_65);
    UnderlyingInstrument_65.insert(UnderlyingRestructuringType_65.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_65("STRING_1732010527");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_65);
    UnderlyingInstrument_65.insert(UnderlyingSecurityDesc_65.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_65("EXCHANGE_1816868910");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_65);
    UnderlyingInstrument_65.insert(UnderlyingSecurityExchange_65.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_65("STRING_1947846919");
    noUnderlyings_0_1.set(UnderlyingSecurityID_65);
    UnderlyingInstrument_65.insert(UnderlyingSecurityID_65.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_65("STRING_2123200342");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_65);
    UnderlyingInstrument_65.insert(UnderlyingSecurityIDSource_65.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_65("STRING_2064133852");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_65);
    UnderlyingInstrument_65.insert(UnderlyingSecuritySubType_65.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_65("STRING_1317160516");
    noUnderlyings_0_1.set(UnderlyingSecurityType_65);
    UnderlyingInstrument_65.insert(UnderlyingSecurityType_65.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_65("STRING_615584583");
    noUnderlyings_0_1.set(UnderlyingSeniority_65);
    UnderlyingInstrument_65.insert(UnderlyingSeniority_65.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_65("STRING_149935229");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_65);
    UnderlyingInstrument_65.insert(UnderlyingSettlMethod_65.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_65(5);
    noUnderlyings_0_1.set(UnderlyingSettlementType_65);
    UnderlyingInstrument_65.insert(UnderlyingSettlementType_65.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_65;
    UnderlyingStartValue_65.setString("20942280");
    noUnderlyings_0_1.set(UnderlyingStartValue_65);
    UnderlyingInstrument_65.insert(UnderlyingStartValue_65.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_65("STRING_155972306");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_65);
    UnderlyingInstrument_65.insert(UnderlyingStateOrProvinceOfIssue_65.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_65("CHF");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_65);
    UnderlyingInstrument_65.insert(UnderlyingStrikeCurrency_65.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_65;
    UnderlyingStrikePrice_65.setString("8766601");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_65);
    UnderlyingInstrument_65.insert(UnderlyingStrikePrice_65.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_65("STRING_1261695152");
    noUnderlyings_0_1.set(UnderlyingSymbol_65);
    UnderlyingInstrument_65.insert(UnderlyingSymbol_65.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_65("STRING_1499943815");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_65);
    UnderlyingInstrument_65.insert(UnderlyingSymbolSfx_65.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_65("STRING_2051755067");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_65);
    UnderlyingInstrument_65.insert(UnderlyingTimeUnit_65.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_65("STRING_1050360322");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_65);
    UnderlyingInstrument_65.insert(UnderlyingUnitOfMeasure_65.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_65;
    UnderlyingUnitOfMeasureQty_65.setString("17465946");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_65);
    UnderlyingInstrument_65.insert(UnderlyingUnitOfMeasureQty_65.getString());
    all_values.push_back(UnderlyingInstrument_65);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::NewOrderSingle::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_136;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_136("STRING_1200502431");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_136);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_136.insert(UnderlyingSecurityAltID_136.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_136("STRING_2116992800");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_136);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_136.insert(UnderlyingSecurityAltIDSource_136.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_136);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::NewOrderSingle::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_137;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_137("STRING_565668875");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_137);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_137.insert(UnderlyingSecurityAltID_137.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_137("STRING_1482884672");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_137);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_137.insert(UnderlyingSecurityAltIDSource_137.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_137);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::NewOrderSingle::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_138;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_138("STRING_1596602383");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltID_138);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_138.insert(UnderlyingSecurityAltID_138.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_138("STRING_1160049770");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltIDSource_138);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_138.insert(UnderlyingSecurityAltIDSource_138.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_138);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::NewOrderSingle::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_124;
      FIX::UnderlyingStipType UnderlyingStipType_124("STRING_362906383");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_124);
      UnderlyingStipulations_NoUnderlyingStips_124.insert(UnderlyingStipType_124.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_124("STRING_2146278195");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_124);
      UnderlyingStipulations_NoUnderlyingStips_124.insert(UnderlyingStipValue_124.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_124);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::NewOrderSingle::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_125;
      FIX::UnderlyingStipType UnderlyingStipType_125("STRING_554702633");
      noUnderlyingStips_1_1_1.set(UnderlyingStipType_125);
      UnderlyingStipulations_NoUnderlyingStips_125.insert(UnderlyingStipType_125.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_125("STRING_603801121");
      noUnderlyingStips_1_1_1.set(UnderlyingStipValue_125);
      UnderlyingStipulations_NoUnderlyingStips_125.insert(UnderlyingStipValue_125.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_125);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::NewOrderSingle::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_135;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_135("STRING_224087895");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_135);
      UndlyInstrumentParties_NoUndlyInstrumentParties_135.insert(UnderlyingInstrumentPartyID_135.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_135('4');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_135);
      UndlyInstrumentParties_NoUndlyInstrumentParties_135.insert(UnderlyingInstrumentPartyIDSource_135.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_135(1706521768);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_135);
      UndlyInstrumentParties_NoUndlyInstrumentParties_135.insert(UnderlyingInstrumentPartyRole_135.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_135);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderSingle::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_276;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_276("STRING_1721324908");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_276);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_276.insert(UnderlyingInstrumentPartySubID_276.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_276(174622703);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_276);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_276.insert(UnderlyingInstrumentPartySubIDType_276.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_276);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::NewOrderSingle::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_277;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_277("STRING_290673329");
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubID_277);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_277.insert(UnderlyingInstrumentPartySubID_277.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_277(624327871);
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubIDType_277);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_277.insert(UnderlyingInstrumentPartySubIDType_277.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_277);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::NewOrderSingle::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_278;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_278("STRING_121367153");
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubID_278);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_278.insert(UnderlyingInstrumentPartySubID_278.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_278(446645635);
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubIDType_278);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_278.insert(UnderlyingInstrumentPartySubIDType_278.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_278);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::NewOrderSingle::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_136;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_136("STRING_760511383");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_136);
      UndlyInstrumentParties_NoUndlyInstrumentParties_136.insert(UnderlyingInstrumentPartyID_136.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_136('1');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_136);
      UndlyInstrumentParties_NoUndlyInstrumentParties_136.insert(UnderlyingInstrumentPartyIDSource_136.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_136(1323305747);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_136);
      UndlyInstrumentParties_NoUndlyInstrumentParties_136.insert(UnderlyingInstrumentPartyRole_136.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_136);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderSingle::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_279;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_279("STRING_1061535354");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_279);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_279.insert(UnderlyingInstrumentPartySubID_279.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_279(1227577166);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_279);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_279.insert(UnderlyingInstrumentPartySubIDType_279.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_279);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    {
      FIX50SP2::NewOrderSingle::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_137;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_137("STRING_925083209");
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyID_137);
      UndlyInstrumentParties_NoUndlyInstrumentParties_137.insert(UnderlyingInstrumentPartyID_137.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_137('6');
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyIDSource_137);
      UndlyInstrumentParties_NoUndlyInstrumentParties_137.insert(UnderlyingInstrumentPartyIDSource_137.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_137(1035009482);
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyRole_137);
      UndlyInstrumentParties_NoUndlyInstrumentParties_137.insert(UnderlyingInstrumentPartyRole_137.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_137);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderSingle::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_280;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_280("STRING_630155514");
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubID_280);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_280.insert(UnderlyingInstrumentPartySubID_280.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_280(1600678358);
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubIDType_280);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_280.insert(UnderlyingInstrumentPartySubIDType_280.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_280);

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_2);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  // YieldData
  multiset<string> YieldData_14;
  FIX::Yield Yield_14;
  Yield_14.setString("66.650000");
  msg.set(Yield_14);
  YieldData_14.insert(Yield_14.getString());
  FIX::YieldCalcDate YieldCalcDate_14("LOCALMKTDATE_79274249");
  msg.set(YieldCalcDate_14);
  YieldData_14.insert(YieldCalcDate_14.getString());
  FIX::YieldRedemptionDate YieldRedemptionDate_14("LOCALMKTDATE_613244480");
  msg.set(YieldRedemptionDate_14);
  YieldData_14.insert(YieldRedemptionDate_14.getString());
  FIX::YieldRedemptionPrice YieldRedemptionPrice_14;
  YieldRedemptionPrice_14.setString("16991151");
  msg.set(YieldRedemptionPrice_14);
  YieldData_14.insert(YieldRedemptionPrice_14.getString());
  FIX::YieldRedemptionPriceType YieldRedemptionPriceType_14(442180633);
  msg.set(YieldRedemptionPriceType_14);
  YieldData_14.insert(YieldRedemptionPriceType_14.getString());
  FIX::YieldType YieldType_14("STRING_TAXEQUIV");
  msg.set(YieldType_14);
  YieldData_14.insert(YieldType_14.getString());
  all_values.push_back(YieldData_14);


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
