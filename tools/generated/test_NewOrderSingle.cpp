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

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::NewOrderSingle msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> NewOrderSingle_0;
  FIX::Account Account_24("STRING_1044291981");
  msg.set(Account_24);
  NewOrderSingle_0.insert(Account_24.getString());
  FIX::AccountType AccountType_21(1);
  msg.set(AccountType_21);
  NewOrderSingle_0.insert(AccountType_21.getString());
  FIX::AcctIDSource AcctIDSource_17(1);
  msg.set(AcctIDSource_17);
  NewOrderSingle_0.insert(AcctIDSource_17.getString());
  FIX::AllocID AllocID_19("STRING_763646385");
  msg.set(AllocID_19);
  NewOrderSingle_0.insert(AllocID_19.getString());
  FIX::BookingType BookingType_29(2);
  msg.set(BookingType_29);
  NewOrderSingle_0.insert(BookingType_29.getString());
  FIX::BookingUnit BookingUnit_12('1');
  msg.set(BookingUnit_12);
  NewOrderSingle_0.insert(BookingUnit_12.getString());
  FIX::CancellationRights CancellationRights_6('Y');
  msg.set(CancellationRights_6);
  NewOrderSingle_0.insert(CancellationRights_6.getString());
  FIX::CashMargin CashMargin_12('2');
  msg.set(CashMargin_12);
  NewOrderSingle_0.insert(CashMargin_12.getString());
  FIX::ClOrdID ClOrdID_33("STRING_1457472253");
  msg.set(ClOrdID_33);
  NewOrderSingle_0.insert(ClOrdID_33.getString());
  FIX::ClOrdLinkID ClOrdLinkID_13("STRING_1778193234");
  msg.set(ClOrdLinkID_13);
  NewOrderSingle_0.insert(ClOrdLinkID_13.getString());
  FIX::ClearingFeeIndicator ClearingFeeIndicator_16("STRING_4");
  msg.set(ClearingFeeIndicator_16);
  NewOrderSingle_0.insert(ClearingFeeIndicator_16.getString());
  FIX::ComplianceID ComplianceID_9("STRING_191958086");
  msg.set(ComplianceID_9);
  NewOrderSingle_0.insert(ComplianceID_9.getString());
  FIX::CoveredOrUncovered CoveredOrUncovered_11(1);
  msg.set(CoveredOrUncovered_11);
  NewOrderSingle_0.insert(CoveredOrUncovered_11.getString());
  FIX::Currency Currency_50("USD");
  msg.set(Currency_50);
  NewOrderSingle_0.insert(Currency_50.getString());
  FIX::CustDirectedOrder CustDirectedOrder_1(false);
  msg.set(CustDirectedOrder_1);
  NewOrderSingle_0.insert(CustDirectedOrder_1.getString());
  FIX::CustOrderCapacity CustOrderCapacity_15(4);
  msg.set(CustOrderCapacity_15);
  NewOrderSingle_0.insert(CustOrderCapacity_15.getString());
  FIX::CustOrderHandlingInst CustOrderHandlingInst_1("MULTIPLESTRINGVALUE_S.W");
  msg.set(CustOrderHandlingInst_1);
  NewOrderSingle_0.insert(CustOrderHandlingInst_1.getString());
  FIX::DayBookingInst DayBookingInst_12('1');
  msg.set(DayBookingInst_12);
  NewOrderSingle_0.insert(DayBookingInst_12.getString());
  FIX::Designation Designation_8("STRING_2004645299");
  msg.set(Designation_8);
  NewOrderSingle_0.insert(Designation_8.getString());
  FIX::EffectiveTime EffectiveTime_8(FIX::UTCTIMESTAMP(11, 47, 34, 17, 10, 2014));
  msg.set(EffectiveTime_8);
  NewOrderSingle_0.insert(EffectiveTime_8.getString());
  FIX::EncodedText EncodedText_61("DATA_2087514720");
  msg.set(EncodedText_61);
  NewOrderSingle_0.insert(EncodedText_61.getString());
  FIX::EncodedTextLen EncodedTextLen_61(159595972);
  msg.set(EncodedTextLen_61);
  NewOrderSingle_0.insert(EncodedTextLen_61.getString());
  FIX::ExDestination ExDestination_7("EXCHANGE_1822727896");
  msg.set(ExDestination_7);
  NewOrderSingle_0.insert(ExDestination_7.getString());
  FIX::ExDestinationIDSource ExDestinationIDSource_7('E');
  msg.set(ExDestinationIDSource_7);
  NewOrderSingle_0.insert(ExDestinationIDSource_7.getString());
  FIX::ExecInst ExecInst_11("MULTIPLECHARVALUE_A");
  msg.set(ExecInst_11);
  NewOrderSingle_0.insert(ExecInst_11.getString());
  FIX::ExpireDate ExpireDate_12("LOCALMKTDATE_1109220022");
  msg.set(ExpireDate_12);
  NewOrderSingle_0.insert(ExpireDate_12.getString());
  FIX::ExpireTime ExpireTime_13(FIX::UTCTIMESTAMP(11, 55, 19, 24, 7, 2000));
  msg.set(ExpireTime_13);
  NewOrderSingle_0.insert(ExpireTime_13.getString());
  FIX::ForexReq ForexReq_12(true);
  msg.set(ForexReq_12);
  NewOrderSingle_0.insert(ForexReq_12.getString());
  FIX::GTBookingInst GTBookingInst_8(0);
  msg.set(GTBookingInst_8);
  NewOrderSingle_0.insert(GTBookingInst_8.getString());
  FIX::HandlInst HandlInst_8('3');
  msg.set(HandlInst_8);
  NewOrderSingle_0.insert(HandlInst_8.getString());
  FIX::IOIID IOIID_8("STRING_1512517362");
  msg.set(IOIID_8);
  NewOrderSingle_0.insert(IOIID_8.getString());
  FIX::LocateReqd LocateReqd_7(true);
  msg.set(LocateReqd_7);
  NewOrderSingle_0.insert(LocateReqd_7.getString());
  FIX::ManualOrderIndicator ManualOrderIndicator_1(false);
  msg.set(ManualOrderIndicator_1);
  NewOrderSingle_0.insert(ManualOrderIndicator_1.getString());
  FIX::MatchIncrement MatchIncrement_8;
  MatchIncrement_8.setString("2531178");
  msg.set(MatchIncrement_8);
  NewOrderSingle_0.insert(MatchIncrement_8.getString());
  FIX::MaxFloor MaxFloor_8;
  MaxFloor_8.setString("8083994");
  msg.set(MaxFloor_8);
  NewOrderSingle_0.insert(MaxFloor_8.getString());
  FIX::MaxPriceLevels MaxPriceLevels_8(258786708);
  msg.set(MaxPriceLevels_8);
  NewOrderSingle_0.insert(MaxPriceLevels_8.getString());
  FIX::MaxShow MaxShow_8;
  MaxShow_8.setString("18937591");
  msg.set(MaxShow_8);
  NewOrderSingle_0.insert(MaxShow_8.getString());
  FIX::MinQty MinQty_11;
  MinQty_11.setString("6655610");
  msg.set(MinQty_11);
  NewOrderSingle_0.insert(MinQty_11.getString());
  FIX::MoneyLaunderingStatus MoneyLaunderingStatus_6('3');
  msg.set(MoneyLaunderingStatus_6);
  NewOrderSingle_0.insert(MoneyLaunderingStatus_6.getString());
  FIX::OrdType OrdType_53('8');
  msg.set(OrdType_53);
  NewOrderSingle_0.insert(OrdType_53.getString());
  FIX::OrderCapacity OrderCapacity_30('P');
  msg.set(OrderCapacity_30);
  NewOrderSingle_0.insert(OrderCapacity_30.getString());
  FIX::OrderHandlingInstSource OrderHandlingInstSource_1(1);
  msg.set(OrderHandlingInstSource_1);
  NewOrderSingle_0.insert(OrderHandlingInstSource_1.getString());
  FIX::OrderQty2 OrderQty2_18;
  OrderQty2_18.setString("1003931");
  msg.set(OrderQty2_18);
  NewOrderSingle_0.insert(OrderQty2_18.getString());
  FIX::OrderRestrictions OrderRestrictions_27("MULTIPLECHARVALUE_5");
  msg.set(OrderRestrictions_27);
  NewOrderSingle_0.insert(OrderRestrictions_27.getString());
  FIX::ParticipationRate ParticipationRate_8;
  ParticipationRate_8.setString("32.750000");
  msg.set(ParticipationRate_8);
  NewOrderSingle_0.insert(ParticipationRate_8.getString());
  FIX::PositionEffect PositionEffect_15('D');
  msg.set(PositionEffect_15);
  NewOrderSingle_0.insert(PositionEffect_15.getString());
  FIX::PreTradeAnonymity PreTradeAnonymity_12(false);
  msg.set(PreTradeAnonymity_12);
  NewOrderSingle_0.insert(PreTradeAnonymity_12.getString());
  FIX::PreallocMethod PreallocMethod_12('1');
  msg.set(PreallocMethod_12);
  NewOrderSingle_0.insert(PreallocMethod_12.getString());
  FIX::PrevClosePx PrevClosePx_8;
  PrevClosePx_8.setString("3493763");
  msg.set(PrevClosePx_8);
  NewOrderSingle_0.insert(PrevClosePx_8.getString());
  FIX::Price Price_19;
  Price_19.setString("11086929");
  msg.set(Price_19);
  NewOrderSingle_0.insert(Price_19.getString());
  FIX::Price2 Price2_3;
  Price2_3.setString("15298675");
  msg.set(Price2_3);
  NewOrderSingle_0.insert(Price2_3.getString());
  FIX::PriceProtectionScope PriceProtectionScope_8('3');
  msg.set(PriceProtectionScope_8);
  NewOrderSingle_0.insert(PriceProtectionScope_8.getString());
  FIX::PriceType PriceType_33(10);
  msg.set(PriceType_33);
  NewOrderSingle_0.insert(PriceType_33.getString());
  FIX::ProcessCode ProcessCode_12('5');
  msg.set(ProcessCode_12);
  NewOrderSingle_0.insert(ProcessCode_12.getString());
  FIX::QtyType QtyType_24(1);
  msg.set(QtyType_24);
  NewOrderSingle_0.insert(QtyType_24.getString());
  FIX::QuoteID QuoteID_9("STRING_1824128617");
  msg.set(QuoteID_9);
  NewOrderSingle_0.insert(QuoteID_9.getString());
  FIX::ReceivedDeptID ReceivedDeptID_1("STRING_1250332699");
  msg.set(ReceivedDeptID_1);
  NewOrderSingle_0.insert(ReceivedDeptID_1.getString());
  FIX::RefOrderID RefOrderID_4("STRING_1913347774");
  msg.set(RefOrderID_4);
  NewOrderSingle_0.insert(RefOrderID_4.getString());
  FIX::RefOrderIDSource RefOrderIDSource_4('3');
  msg.set(RefOrderIDSource_4);
  NewOrderSingle_0.insert(RefOrderIDSource_4.getString());
  FIX::RegistID RegistID_6("STRING_667790799");
  msg.set(RegistID_6);
  NewOrderSingle_0.insert(RegistID_6.getString());
  FIX::SecondaryClOrdID SecondaryClOrdID_31("STRING_738264557");
  msg.set(SecondaryClOrdID_31);
  NewOrderSingle_0.insert(SecondaryClOrdID_31.getString());
  FIX::SettlCurrency SettlCurrency_20("EUR");
  msg.set(SettlCurrency_20);
  NewOrderSingle_0.insert(SettlCurrency_20.getString());
  FIX::SettlDate SettlDate_43("LOCALMKTDATE_1653933606");
  msg.set(SettlDate_43);
  NewOrderSingle_0.insert(SettlDate_43.getString());
  FIX::SettlDate2 SettlDate2_18("LOCALMKTDATE_1968374666");
  msg.set(SettlDate2_18);
  NewOrderSingle_0.insert(SettlDate2_18.getString());
  FIX::SettlType SettlType_23("STRING_6");
  msg.set(SettlType_23);
  NewOrderSingle_0.insert(SettlType_23.getString());
  FIX::Side Side_32('B');
  msg.set(Side_32);
  NewOrderSingle_0.insert(Side_32.getString());
  FIX::SolicitedFlag SolicitedFlag_12(false);
  msg.set(SolicitedFlag_12);
  NewOrderSingle_0.insert(SolicitedFlag_12.getString());
  FIX::StopPx StopPx_8;
  StopPx_8.setString("6936340");
  msg.set(StopPx_8);
  NewOrderSingle_0.insert(StopPx_8.getString());
  FIX::TargetStrategy TargetStrategy_8(1);
  msg.set(TargetStrategy_8);
  NewOrderSingle_0.insert(TargetStrategy_8.getString());
  FIX::TargetStrategyParameters TargetStrategyParameters_8("STRING_1706203430");
  msg.set(TargetStrategyParameters_8);
  NewOrderSingle_0.insert(TargetStrategyParameters_8.getString());
  FIX::Text Text_61("STRING_1717769377");
  msg.set(Text_61);
  NewOrderSingle_0.insert(Text_61.getString());
  FIX::TimeInForce TimeInForce_37('9');
  msg.set(TimeInForce_37);
  NewOrderSingle_0.insert(TimeInForce_37.getString());
  FIX::TradeDate TradeDate_25("LOCALMKTDATE_1806596559");
  msg.set(TradeDate_25);
  NewOrderSingle_0.insert(TradeDate_25.getString());
  FIX::TradeOriginationDate TradeOriginationDate_17("LOCALMKTDATE_1462978428");
  msg.set(TradeOriginationDate_17);
  NewOrderSingle_0.insert(TradeOriginationDate_17.getString());
  FIX::TransactTime TransactTime_46(FIX::UTCTIMESTAMP(9, 52, 40, 17, 2, 2004));
  msg.set(TransactTime_46);
  NewOrderSingle_0.insert(TransactTime_46.getString());
  all_values.push_back(NewOrderSingle_0);

  all_compo_names.insert("NewOrderSingle");

  // CommissionData
  multiset<string> CommissionData_20;
  FIX::CommCurrency CommCurrency_20("JPY");
  msg.set(CommCurrency_20);
  CommissionData_20.insert(CommCurrency_20.getString());
  FIX::CommType CommType_20('3');
  msg.set(CommType_20);
  CommissionData_20.insert(CommType_20.getString());
  FIX::Commission Commission_20;
  Commission_20.setString("8442705");
  msg.set(Commission_20);
  CommissionData_20.insert(Commission_20.getString());
  FIX::FundRenewWaiv FundRenewWaiv_20('Y');
  msg.set(FundRenewWaiv_20);
  CommissionData_20.insert(FundRenewWaiv_20.getString());
  all_values.push_back(CommissionData_20);
  all_compo_names.insert("CommissionData");

  // DiscretionInstructions
  multiset<string> DiscretionInstructions_8;
  FIX::DiscretionInst DiscretionInst_8('7');
  msg.set(DiscretionInst_8);
  DiscretionInstructions_8.insert(DiscretionInst_8.getString());
  FIX::DiscretionLimitType DiscretionLimitType_8(0);
  msg.set(DiscretionLimitType_8);
  DiscretionInstructions_8.insert(DiscretionLimitType_8.getString());
  FIX::DiscretionMoveType DiscretionMoveType_8(1);
  msg.set(DiscretionMoveType_8);
  DiscretionInstructions_8.insert(DiscretionMoveType_8.getString());
  FIX::DiscretionOffsetType DiscretionOffsetType_8(2);
  msg.set(DiscretionOffsetType_8);
  DiscretionInstructions_8.insert(DiscretionOffsetType_8.getString());
  FIX::DiscretionOffsetValue DiscretionOffsetValue_8;
  DiscretionOffsetValue_8.setString("13483992");
  msg.set(DiscretionOffsetValue_8);
  DiscretionInstructions_8.insert(DiscretionOffsetValue_8.getString());
  FIX::DiscretionRoundDirection DiscretionRoundDirection_8(1);
  msg.set(DiscretionRoundDirection_8);
  DiscretionInstructions_8.insert(DiscretionRoundDirection_8.getString());
  FIX::DiscretionScope DiscretionScope_8(2);
  msg.set(DiscretionScope_8);
  DiscretionInstructions_8.insert(DiscretionScope_8.getString());
  all_values.push_back(DiscretionInstructions_8);
  all_compo_names.insert("DiscretionInstructions");

  // DisplayInstruction
  multiset<string> DisplayInstruction_8;
  FIX::DisplayHighQty DisplayHighQty_8;
  DisplayHighQty_8.setString("8548491");
  msg.set(DisplayHighQty_8);
  DisplayInstruction_8.insert(DisplayHighQty_8.getString());
  FIX::DisplayLowQty DisplayLowQty_8;
  DisplayLowQty_8.setString("5257851");
  msg.set(DisplayLowQty_8);
  DisplayInstruction_8.insert(DisplayLowQty_8.getString());
  FIX::DisplayMethod DisplayMethod_8('4');
  msg.set(DisplayMethod_8);
  DisplayInstruction_8.insert(DisplayMethod_8.getString());
  FIX::DisplayMinIncr DisplayMinIncr_8;
  DisplayMinIncr_8.setString("6200858");
  msg.set(DisplayMinIncr_8);
  DisplayInstruction_8.insert(DisplayMinIncr_8.getString());
  FIX::DisplayQty DisplayQty_8;
  DisplayQty_8.setString("929516");
  msg.set(DisplayQty_8);
  DisplayInstruction_8.insert(DisplayQty_8.getString());
  FIX::DisplayWhen DisplayWhen_8('2');
  msg.set(DisplayWhen_8);
  DisplayInstruction_8.insert(DisplayWhen_8.getString());
  FIX::RefreshQty RefreshQty_8;
  RefreshQty_8.setString("11086001");
  msg.set(RefreshQty_8);
  DisplayInstruction_8.insert(RefreshQty_8.getString());
  FIX::SecondaryDisplayQty SecondaryDisplayQty_8;
  SecondaryDisplayQty_8.setString("17991551");
  msg.set(SecondaryDisplayQty_8);
  DisplayInstruction_8.insert(SecondaryDisplayQty_8.getString());
  all_values.push_back(DisplayInstruction_8);
  all_compo_names.insert("DisplayInstruction");

  // FinancingDetails
  multiset<string> FinancingDetails_12;
  FIX::AgreementCurrency AgreementCurrency_12("EUR");
  msg.set(AgreementCurrency_12);
  FinancingDetails_12.insert(AgreementCurrency_12.getString());
  FIX::AgreementDate AgreementDate_12("LOCALMKTDATE_1458268036");
  msg.set(AgreementDate_12);
  FinancingDetails_12.insert(AgreementDate_12.getString());
  FIX::AgreementDesc AgreementDesc_12("STRING_590869913");
  msg.set(AgreementDesc_12);
  FinancingDetails_12.insert(AgreementDesc_12.getString());
  FIX::AgreementID AgreementID_12("STRING_1420293710");
  msg.set(AgreementID_12);
  FinancingDetails_12.insert(AgreementID_12.getString());
  FIX::DeliveryType DeliveryType_12(1);
  msg.set(DeliveryType_12);
  FinancingDetails_12.insert(DeliveryType_12.getString());
  FIX::EndDate EndDate_12("LOCALMKTDATE_1958653365");
  msg.set(EndDate_12);
  FinancingDetails_12.insert(EndDate_12.getString());
  FIX::MarginRatio MarginRatio_12;
  MarginRatio_12.setString("60.230000");
  msg.set(MarginRatio_12);
  FinancingDetails_12.insert(MarginRatio_12.getString());
  FIX::StartDate StartDate_12("LOCALMKTDATE_1206718562");
  msg.set(StartDate_12);
  FinancingDetails_12.insert(StartDate_12.getString());
  FIX::TerminationType TerminationType_12(4);
  msg.set(TerminationType_12);
  FinancingDetails_12.insert(TerminationType_12.getString());
  all_values.push_back(FinancingDetails_12);
  all_compo_names.insert("FinancingDetails");

  // Instrument
  multiset<string> Instrument_52;
  FIX::AttachmentPoint AttachmentPoint_52;
  AttachmentPoint_52.setString("58.810000");
  msg.set(AttachmentPoint_52);
  Instrument_52.insert(AttachmentPoint_52.getString());
  FIX::CFICode CFICode_52("STRING_918083666");
  msg.set(CFICode_52);
  Instrument_52.insert(CFICode_52.getString());
  FIX::CPProgram CPProgram_52(2);
  msg.set(CPProgram_52);
  Instrument_52.insert(CPProgram_52.getString());
  FIX::CPRegType CPRegType_52("STRING_399171213");
  msg.set(CPRegType_52);
  Instrument_52.insert(CPRegType_52.getString());
  FIX::CapPrice CapPrice_52;
  CapPrice_52.setString("17623542");
  msg.set(CapPrice_52);
  Instrument_52.insert(CapPrice_52.getString());
  FIX::ContractMultiplier ContractMultiplier_52;
  ContractMultiplier_52.setString("1847967");
  msg.set(ContractMultiplier_52);
  Instrument_52.insert(ContractMultiplier_52.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_52(2);
  msg.set(ContractMultiplierUnit_52);
  Instrument_52.insert(ContractMultiplierUnit_52.getString());
  FIX::ContractSettlMonth ContractSettlMonth_52("MONTHYEAR_225005212");
  msg.set(ContractSettlMonth_52);
  Instrument_52.insert(ContractSettlMonth_52.getString());
  FIX::CountryOfIssue CountryOfIssue_52("COUNTRY_1321917644");
  msg.set(CountryOfIssue_52);
  Instrument_52.insert(CountryOfIssue_52.getString());
  FIX::CouponPaymentDate CouponPaymentDate_52("LOCALMKTDATE_1111314427");
  msg.set(CouponPaymentDate_52);
  Instrument_52.insert(CouponPaymentDate_52.getString());
  FIX::CouponRate CouponRate_52;
  CouponRate_52.setString("44.300000");
  msg.set(CouponRate_52);
  Instrument_52.insert(CouponRate_52.getString());
  FIX::CreditRating CreditRating_52("STRING_2026811784");
  msg.set(CreditRating_52);
  Instrument_52.insert(CreditRating_52.getString());
  FIX::DatedDate DatedDate_52("LOCALMKTDATE_2094696785");
  msg.set(DatedDate_52);
  Instrument_52.insert(DatedDate_52.getString());
  FIX::DetachmentPoint DetachmentPoint_52;
  DetachmentPoint_52.setString("99.570000");
  msg.set(DetachmentPoint_52);
  Instrument_52.insert(DetachmentPoint_52.getString());
  FIX::EncodedIssuer EncodedIssuer_52("DATA_405113295");
  msg.set(EncodedIssuer_52);
  Instrument_52.insert(EncodedIssuer_52.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_52(958668468);
  msg.set(EncodedIssuerLen_52);
  Instrument_52.insert(EncodedIssuerLen_52.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_52("DATA_900855799");
  msg.set(EncodedSecurityDesc_52);
  Instrument_52.insert(EncodedSecurityDesc_52.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_52(498064989);
  msg.set(EncodedSecurityDescLen_52);
  Instrument_52.insert(EncodedSecurityDescLen_52.getString());
  FIX::ExerciseStyle ExerciseStyle_52(0);
  msg.set(ExerciseStyle_52);
  Instrument_52.insert(ExerciseStyle_52.getString());
  FIX::Factor Factor_52;
  Factor_52.setString("20094559");
  msg.set(Factor_52);
  Instrument_52.insert(Factor_52.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_52(true);
  msg.set(FlexProductEligibilityIndicator_52);
  Instrument_52.insert(FlexProductEligibilityIndicator_52.getString());
  FIX::FlexibleIndicator FlexibleIndicator_52(false);
  msg.set(FlexibleIndicator_52);
  Instrument_52.insert(FlexibleIndicator_52.getString());
  FIX::FloorPrice FloorPrice_52;
  FloorPrice_52.setString("7537175");
  msg.set(FloorPrice_52);
  Instrument_52.insert(FloorPrice_52.getString());
  FIX::FlowScheduleType FlowScheduleType_52(2);
  msg.set(FlowScheduleType_52);
  Instrument_52.insert(FlowScheduleType_52.getString());
  FIX::InstrRegistry InstrRegistry_52("STRING_235035622");
  msg.set(InstrRegistry_52);
  Instrument_52.insert(InstrRegistry_52.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_52('2');
  msg.set(InstrmtAssignmentMethod_52);
  Instrument_52.insert(InstrmtAssignmentMethod_52.getString());
  FIX::InterestAccrualDate InterestAccrualDate_52("LOCALMKTDATE_618326003");
  msg.set(InterestAccrualDate_52);
  Instrument_52.insert(InterestAccrualDate_52.getString());
  FIX::IssueDate IssueDate_52("LOCALMKTDATE_46205340");
  msg.set(IssueDate_52);
  Instrument_52.insert(IssueDate_52.getString());
  FIX::Issuer Issuer_52("STRING_248533622");
  msg.set(Issuer_52);
  Instrument_52.insert(Issuer_52.getString());
  FIX::ListMethod ListMethod_52(1);
  msg.set(ListMethod_52);
  Instrument_52.insert(ListMethod_52.getString());
  FIX::LocaleOfIssue LocaleOfIssue_52("STRING_186367839");
  msg.set(LocaleOfIssue_52);
  Instrument_52.insert(LocaleOfIssue_52.getString());
  FIX::MaturityDate MaturityDate_52("LOCALMKTDATE_802119503");
  msg.set(MaturityDate_52);
  Instrument_52.insert(MaturityDate_52.getString());
  FIX::MaturityMonthYear MaturityMonthYear_52("MONTHYEAR_595644583");
  msg.set(MaturityMonthYear_52);
  Instrument_52.insert(MaturityMonthYear_52.getString());
  FIX::MaturityTime MaturityTime_52("TZTIMEONLY_1584266788");
  msg.set(MaturityTime_52);
  Instrument_52.insert(MaturityTime_52.getString());
  FIX::MinPriceIncrement MinPriceIncrement_52;
  MinPriceIncrement_52.setString("12012907");
  msg.set(MinPriceIncrement_52);
  Instrument_52.insert(MinPriceIncrement_52.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_52;
  MinPriceIncrementAmount_52.setString("2105151");
  msg.set(MinPriceIncrementAmount_52);
  Instrument_52.insert(MinPriceIncrementAmount_52.getString());
  FIX::NTPositionLimit NTPositionLimit_52(1769063509);
  msg.set(NTPositionLimit_52);
  Instrument_52.insert(NTPositionLimit_52.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_52;
  NotionalPercentageOutstanding_52.setString("63.140000");
  msg.set(NotionalPercentageOutstanding_52);
  Instrument_52.insert(NotionalPercentageOutstanding_52.getString());
  FIX::OptAttribute OptAttribute_52('4');
  msg.set(OptAttribute_52);
  Instrument_52.insert(OptAttribute_52.getString());
  FIX::OptPayoutAmount OptPayoutAmount_52;
  OptPayoutAmount_52.setString("9434975");
  msg.set(OptPayoutAmount_52);
  Instrument_52.insert(OptPayoutAmount_52.getString());
  FIX::OptPayoutType OptPayoutType_52(2);
  msg.set(OptPayoutType_52);
  Instrument_52.insert(OptPayoutType_52.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_52;
  OriginalNotionalPercentageOutstanding_52.setString("47.770000");
  msg.set(OriginalNotionalPercentageOutstanding_52);
  Instrument_52.insert(OriginalNotionalPercentageOutstanding_52.getString());
  FIX::Pool Pool_52("STRING_822825642");
  msg.set(Pool_52);
  Instrument_52.insert(Pool_52.getString());
  FIX::PositionLimit PositionLimit_52(1607423878);
  msg.set(PositionLimit_52);
  Instrument_52.insert(PositionLimit_52.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_52("STRING_PCTPAR");
  msg.set(PriceQuoteMethod_52);
  Instrument_52.insert(PriceQuoteMethod_52.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_52("STRING_1227938937");
  msg.set(PriceUnitOfMeasure_52);
  Instrument_52.insert(PriceUnitOfMeasure_52.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_52;
  PriceUnitOfMeasureQty_52.setString("4186086");
  msg.set(PriceUnitOfMeasureQty_52);
  Instrument_52.insert(PriceUnitOfMeasureQty_52.getString());
  FIX::Product Product_54(5);
  msg.set(Product_54);
  Instrument_52.insert(Product_54.getString());
  FIX::ProductComplex ProductComplex_52("STRING_1726003927");
  msg.set(ProductComplex_52);
  Instrument_52.insert(ProductComplex_52.getString());
  FIX::PutOrCall PutOrCall_52(1);
  msg.set(PutOrCall_52);
  Instrument_52.insert(PutOrCall_52.getString());
  FIX::RedemptionDate RedemptionDate_52("LOCALMKTDATE_905039149");
  msg.set(RedemptionDate_52);
  Instrument_52.insert(RedemptionDate_52.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_52("STRING_1875740393");
  msg.set(RepoCollateralSecurityType_52);
  Instrument_52.insert(RepoCollateralSecurityType_52.getString());
  FIX::RepurchaseRate RepurchaseRate_52;
  RepurchaseRate_52.setString("86.320000");
  msg.set(RepurchaseRate_52);
  Instrument_52.insert(RepurchaseRate_52.getString());
  FIX::RepurchaseTerm RepurchaseTerm_52(1658756685);
  msg.set(RepurchaseTerm_52);
  Instrument_52.insert(RepurchaseTerm_52.getString());
  FIX::RestructuringType RestructuringType_52("STRING_XR");
  msg.set(RestructuringType_52);
  Instrument_52.insert(RestructuringType_52.getString());
  FIX::SecurityDesc SecurityDesc_52("STRING_814084254");
  msg.set(SecurityDesc_52);
  Instrument_52.insert(SecurityDesc_52.getString());
  FIX::SecurityExchange SecurityExchange_52("EXCHANGE_1685284284");
  msg.set(SecurityExchange_52);
  Instrument_52.insert(SecurityExchange_52.getString());
  FIX::SecurityGroup SecurityGroup_52("STRING_1954587250");
  msg.set(SecurityGroup_52);
  Instrument_52.insert(SecurityGroup_52.getString());
  FIX::SecurityID SecurityID_52("STRING_860289594");
  msg.set(SecurityID_52);
  Instrument_52.insert(SecurityID_52.getString());
  FIX::SecurityIDSource SecurityIDSource_52("STRING_L");
  msg.set(SecurityIDSource_52);
  Instrument_52.insert(SecurityIDSource_52.getString());
  FIX::SecurityStatus SecurityStatus_52("STRING_2");
  msg.set(SecurityStatus_52);
  Instrument_52.insert(SecurityStatus_52.getString());
  FIX::SecuritySubType SecuritySubType_53("STRING_1046657433");
  msg.set(SecuritySubType_53);
  Instrument_52.insert(SecuritySubType_53.getString());
  FIX::SecurityType SecurityType_54("STRING_CTB");
  msg.set(SecurityType_54);
  Instrument_52.insert(SecurityType_54.getString());
  FIX::Seniority Seniority_52("STRING_SB");
  msg.set(Seniority_52);
  Instrument_52.insert(Seniority_52.getString());
  FIX::SettlMethod SettlMethod_52('C');
  msg.set(SettlMethod_52);
  Instrument_52.insert(SettlMethod_52.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_52("STRING_1789744479");
  msg.set(SettleOnOpenFlag_52);
  Instrument_52.insert(SettleOnOpenFlag_52.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_52("STRING_290824237");
  msg.set(StateOrProvinceOfIssue_52);
  Instrument_52.insert(StateOrProvinceOfIssue_52.getString());
  FIX::StrikeCurrency StrikeCurrency_52("EUR");
  msg.set(StrikeCurrency_52);
  Instrument_52.insert(StrikeCurrency_52.getString());
  FIX::StrikeMultiplier StrikeMultiplier_52;
  StrikeMultiplier_52.setString("7263445");
  msg.set(StrikeMultiplier_52);
  Instrument_52.insert(StrikeMultiplier_52.getString());
  FIX::StrikePrice StrikePrice_52;
  StrikePrice_52.setString("10485179");
  msg.set(StrikePrice_52);
  Instrument_52.insert(StrikePrice_52.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_52(2);
  msg.set(StrikePriceBoundaryMethod_52);
  Instrument_52.insert(StrikePriceBoundaryMethod_52.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_52;
  StrikePriceBoundaryPrecision_52.setString("57.140000");
  msg.set(StrikePriceBoundaryPrecision_52);
  Instrument_52.insert(StrikePriceBoundaryPrecision_52.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_52(4);
  msg.set(StrikePriceDeterminationMethod_52);
  Instrument_52.insert(StrikePriceDeterminationMethod_52.getString());
  FIX::StrikeValue StrikeValue_52;
  StrikeValue_52.setString("13113081");
  msg.set(StrikeValue_52);
  Instrument_52.insert(StrikeValue_52.getString());
  FIX::Symbol Symbol_52("STRING_729996801");
  msg.set(Symbol_52);
  Instrument_52.insert(Symbol_52.getString());
  FIX::SymbolSfx SymbolSfx_52("STRING_CD");
  msg.set(SymbolSfx_52);
  Instrument_52.insert(SymbolSfx_52.getString());
  FIX::TimeUnit TimeUnit_52("STRING_Mo");
  msg.set(TimeUnit_52);
  Instrument_52.insert(TimeUnit_52.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_52(4);
  msg.set(UnderlyingPriceDeterminationMethod_52);
  Instrument_52.insert(UnderlyingPriceDeterminationMethod_52.getString());
  FIX::UnitOfMeasure UnitOfMeasure_52("STRING_USD");
  msg.set(UnitOfMeasure_52);
  Instrument_52.insert(UnitOfMeasure_52.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_52;
  UnitOfMeasureQty_52.setString("5173160");
  msg.set(UnitOfMeasureQty_52);
  Instrument_52.insert(UnitOfMeasureQty_52.getString());
  FIX::ValuationMethod ValuationMethod_52("STRING_CDS");
  msg.set(ValuationMethod_52);
  Instrument_52.insert(ValuationMethod_52.getString());
  all_values.push_back(Instrument_52);
  all_compo_names.insert("Instrument");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::NewOrderSingle::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_105;
    FIX::ComplexEventCondition ComplexEventCondition_105(2);
    noComplexEvents_0_0.set(ComplexEventCondition_105);
    ComplexEvents_NoComplexEvents_105.insert(ComplexEventCondition_105.getString());
    FIX::ComplexEventPrice ComplexEventPrice_105;
    ComplexEventPrice_105.setString("418922");
    noComplexEvents_0_0.set(ComplexEventPrice_105);
    ComplexEvents_NoComplexEvents_105.insert(ComplexEventPrice_105.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_105(4);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_105);
    ComplexEvents_NoComplexEvents_105.insert(ComplexEventPriceBoundaryMethod_105.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_105;
    ComplexEventPriceBoundaryPrecision_105.setString("89.770000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_105);
    ComplexEvents_NoComplexEvents_105.insert(ComplexEventPriceBoundaryPrecision_105.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_105(2);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_105);
    ComplexEvents_NoComplexEvents_105.insert(ComplexEventPriceTimeType_105.getString());
    FIX::ComplexEventType ComplexEventType_105(9);
    noComplexEvents_0_0.set(ComplexEventType_105);
    ComplexEvents_NoComplexEvents_105.insert(ComplexEventType_105.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_105;
    ComplexOptPayoutAmount_105.setString("6232549");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_105);
    ComplexEvents_NoComplexEvents_105.insert(ComplexOptPayoutAmount_105.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_105);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::NewOrderSingle::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_214;
      FIX::ComplexEventEndDate ComplexEventEndDate_214(FIX::UTCTIMESTAMP(13, 10, 26, 7, 6, 2015));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_214);
      ComplexEventDates_NoComplexEventDates_214.insert(ComplexEventEndDate_214.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_214(FIX::UTCTIMESTAMP(18, 8, 0, 25, 11, 2017));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_214);
      ComplexEventDates_NoComplexEventDates_214.insert(ComplexEventStartDate_214.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_214);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::NewOrderSingle::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_435;
        FIX::ComplexEventEndTime ComplexEventEndTime_435(FIX::UTCTIMEONLY(19, 22, 14));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_435);
        ComplexEventTimes_NoComplexEventTimes_435.insert(ComplexEventEndTime_435.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_435(FIX::UTCTIMEONLY(1, 22, 47));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_435);
        ComplexEventTimes_NoComplexEventTimes_435.insert(ComplexEventStartTime_435.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_435);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::NewOrderSingle::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_436;
        FIX::ComplexEventEndTime ComplexEventEndTime_436(FIX::UTCTIMEONLY(19, 51, 45));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_436);
        ComplexEventTimes_NoComplexEventTimes_436.insert(ComplexEventEndTime_436.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_436(FIX::UTCTIMEONLY(12, 41, 30));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_436);
        ComplexEventTimes_NoComplexEventTimes_436.insert(ComplexEventStartTime_436.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_436);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::NewOrderSingle::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_215;
      FIX::ComplexEventEndDate ComplexEventEndDate_215(FIX::UTCTIMESTAMP(7, 32, 31, 22, 3, 2009));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_215);
      ComplexEventDates_NoComplexEventDates_215.insert(ComplexEventEndDate_215.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_215(FIX::UTCTIMESTAMP(0, 35, 33, 5, 2, 2008));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_215);
      ComplexEventDates_NoComplexEventDates_215.insert(ComplexEventStartDate_215.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_215);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::NewOrderSingle::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_437;
        FIX::ComplexEventEndTime ComplexEventEndTime_437(FIX::UTCTIMEONLY(20, 17, 2));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_437);
        ComplexEventTimes_NoComplexEventTimes_437.insert(ComplexEventEndTime_437.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_437(FIX::UTCTIMEONLY(6, 24, 18));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_437);
        ComplexEventTimes_NoComplexEventTimes_437.insert(ComplexEventStartTime_437.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_437);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::NewOrderSingle::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_106;
    FIX::ComplexEventCondition ComplexEventCondition_106(1);
    noComplexEvents_0_1.set(ComplexEventCondition_106);
    ComplexEvents_NoComplexEvents_106.insert(ComplexEventCondition_106.getString());
    FIX::ComplexEventPrice ComplexEventPrice_106;
    ComplexEventPrice_106.setString("7054794");
    noComplexEvents_0_1.set(ComplexEventPrice_106);
    ComplexEvents_NoComplexEvents_106.insert(ComplexEventPrice_106.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_106(2);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_106);
    ComplexEvents_NoComplexEvents_106.insert(ComplexEventPriceBoundaryMethod_106.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_106;
    ComplexEventPriceBoundaryPrecision_106.setString("25.360000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_106);
    ComplexEvents_NoComplexEvents_106.insert(ComplexEventPriceBoundaryPrecision_106.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_106(1);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_106);
    ComplexEvents_NoComplexEvents_106.insert(ComplexEventPriceTimeType_106.getString());
    FIX::ComplexEventType ComplexEventType_106(3);
    noComplexEvents_0_1.set(ComplexEventType_106);
    ComplexEvents_NoComplexEvents_106.insert(ComplexEventType_106.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_106;
    ComplexOptPayoutAmount_106.setString("9249043");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_106);
    ComplexEvents_NoComplexEvents_106.insert(ComplexOptPayoutAmount_106.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_106);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::NewOrderSingle::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_216;
      FIX::ComplexEventEndDate ComplexEventEndDate_216(FIX::UTCTIMESTAMP(16, 27, 18, 27, 6, 2003));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_216);
      ComplexEventDates_NoComplexEventDates_216.insert(ComplexEventEndDate_216.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_216(FIX::UTCTIMESTAMP(10, 12, 10, 3, 2, 2010));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_216);
      ComplexEventDates_NoComplexEventDates_216.insert(ComplexEventStartDate_216.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_216);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::NewOrderSingle::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_438;
        FIX::ComplexEventEndTime ComplexEventEndTime_438(FIX::UTCTIMEONLY(22, 20, 3));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_438);
        ComplexEventTimes_NoComplexEventTimes_438.insert(ComplexEventEndTime_438.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_438(FIX::UTCTIMEONLY(7, 27, 0));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_438);
        ComplexEventTimes_NoComplexEventTimes_438.insert(ComplexEventStartTime_438.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_438);
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
    FIX50SP2::NewOrderSingle::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_97;
    FIX::EventDate EventDate_97("LOCALMKTDATE_535218943");
    noEvents_0_0.set(EventDate_97);
    EvntGrp_NoEvents_97.insert(EventDate_97.getString());
    FIX::EventPx EventPx_97;
    EventPx_97.setString("5076112");
    noEvents_0_0.set(EventPx_97);
    EvntGrp_NoEvents_97.insert(EventPx_97.getString());
    FIX::EventText EventText_97("STRING_1886554337");
    noEvents_0_0.set(EventText_97);
    EvntGrp_NoEvents_97.insert(EventText_97.getString());
    FIX::EventTime EventTime_97(FIX::UTCTIMESTAMP(15, 27, 11, 10, 8, 2002));
    noEvents_0_0.set(EventTime_97);
    EvntGrp_NoEvents_97.insert(EventTime_97.getString());
    FIX::EventType EventType_97(18);
    noEvents_0_0.set(EventType_97);
    EvntGrp_NoEvents_97.insert(EventType_97.getString());
    all_values.push_back(EvntGrp_NoEvents_97);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::NewOrderSingle::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_98;
    FIX::EventDate EventDate_98("LOCALMKTDATE_1800764518");
    noEvents_0_1.set(EventDate_98);
    EvntGrp_NoEvents_98.insert(EventDate_98.getString());
    FIX::EventPx EventPx_98;
    EventPx_98.setString("18926967");
    noEvents_0_1.set(EventPx_98);
    EvntGrp_NoEvents_98.insert(EventPx_98.getString());
    FIX::EventText EventText_98("STRING_2081069682");
    noEvents_0_1.set(EventText_98);
    EvntGrp_NoEvents_98.insert(EventText_98.getString());
    FIX::EventTime EventTime_98(FIX::UTCTIMESTAMP(2, 47, 37, 17, 1, 2009));
    noEvents_0_1.set(EventTime_98);
    EvntGrp_NoEvents_98.insert(EventTime_98.getString());
    FIX::EventType EventType_98(13);
    noEvents_0_1.set(EventType_98);
    EvntGrp_NoEvents_98.insert(EventType_98.getString());
    all_values.push_back(EvntGrp_NoEvents_98);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::NewOrderSingle::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_99;
    FIX::EventDate EventDate_99("LOCALMKTDATE_1571121122");
    noEvents_0_2.set(EventDate_99);
    EvntGrp_NoEvents_99.insert(EventDate_99.getString());
    FIX::EventPx EventPx_99;
    EventPx_99.setString("9345315");
    noEvents_0_2.set(EventPx_99);
    EvntGrp_NoEvents_99.insert(EventPx_99.getString());
    FIX::EventText EventText_99("STRING_1868094673");
    noEvents_0_2.set(EventText_99);
    EvntGrp_NoEvents_99.insert(EventText_99.getString());
    FIX::EventTime EventTime_99(FIX::UTCTIMESTAMP(19, 56, 25, 7, 6, 2000));
    noEvents_0_2.set(EventTime_99);
    EvntGrp_NoEvents_99.insert(EventTime_99.getString());
    FIX::EventType EventType_99(14);
    noEvents_0_2.set(EventType_99);
    EvntGrp_NoEvents_99.insert(EventType_99.getString());
    all_values.push_back(EvntGrp_NoEvents_99);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::NewOrderSingle::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_105;
    FIX::InstrumentPartyID InstrumentPartyID_105("STRING_290710508");
    noInstrumentParties_0_0.set(InstrumentPartyID_105);
    InstrumentParties_NoInstrumentParties_105.insert(InstrumentPartyID_105.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_105('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_105);
    InstrumentParties_NoInstrumentParties_105.insert(InstrumentPartyIDSource_105.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_105(1450564686);
    noInstrumentParties_0_0.set(InstrumentPartyRole_105);
    InstrumentParties_NoInstrumentParties_105.insert(InstrumentPartyRole_105.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_105);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::NewOrderSingle::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_202;
      FIX::InstrumentPartySubID InstrumentPartySubID_202("STRING_996178127");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_202);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_202.insert(InstrumentPartySubID_202.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_202(652330913);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_202);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_202.insert(InstrumentPartySubIDType_202.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_202);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::NewOrderSingle::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_203;
      FIX::InstrumentPartySubID InstrumentPartySubID_203("STRING_2106697909");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_203);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_203.insert(InstrumentPartySubID_203.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_203(434595696);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_203);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_203.insert(InstrumentPartySubIDType_203.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_203);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::NewOrderSingle::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_204;
      FIX::InstrumentPartySubID InstrumentPartySubID_204("STRING_305611784");
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubID_204);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_204.insert(InstrumentPartySubID_204.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_204(1851910973);
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubIDType_204);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_204.insert(InstrumentPartySubIDType_204.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_204);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::NewOrderSingle::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_94;
    FIX::SecurityAltID SecurityAltID_94("STRING_287536811");
    noSecurityAltID_0_0.set(SecurityAltID_94);
    SecAltIDGrp_NoSecurityAltID_94.insert(SecurityAltID_94.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_94("STRING_1124885135");
    noSecurityAltID_0_0.set(SecurityAltIDSource_94);
    SecAltIDGrp_NoSecurityAltID_94.insert(SecurityAltIDSource_94.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_94);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::NewOrderSingle::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_95;
    FIX::SecurityAltID SecurityAltID_95("STRING_775598817");
    noSecurityAltID_0_1.set(SecurityAltID_95);
    SecAltIDGrp_NoSecurityAltID_95.insert(SecurityAltID_95.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_95("STRING_1634643168");
    noSecurityAltID_0_1.set(SecurityAltIDSource_95);
    SecAltIDGrp_NoSecurityAltID_95.insert(SecurityAltIDSource_95.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_95);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_104;
  FIX::SecurityXML SecurityXML_105("XMLDATA_1202202085");
  msg.set(SecurityXML_105);
  FIX::SecurityXMLLen SecurityXMLLen_52(2059894798);
  msg.set(SecurityXMLLen_52);
  FIX::SecurityXMLSchema SecurityXMLSchema_52("STRING_1971768327");
  msg.set(SecurityXMLSchema_52);
  SecurityXML_104.insert(SecurityXMLSchema_52.getString());
  all_values.push_back(SecurityXML_104);
  all_compo_names.insert("SecurityXML");

  // OrderQtyData
  multiset<string> OrderQtyData_16;
  FIX::CashOrderQty CashOrderQty_16;
  CashOrderQty_16.setString("20160510");
  msg.set(CashOrderQty_16);
  OrderQtyData_16.insert(CashOrderQty_16.getString());
  FIX::OrderPercent OrderPercent_16;
  OrderPercent_16.setString("22.720000");
  msg.set(OrderPercent_16);
  OrderQtyData_16.insert(OrderPercent_16.getString());
  FIX::OrderQty OrderQty_26;
  OrderQty_26.setString("7588162");
  msg.set(OrderQty_26);
  OrderQtyData_16.insert(OrderQty_26.getString());
  FIX::RoundingDirection RoundingDirection_16('1');
  msg.set(RoundingDirection_16);
  OrderQtyData_16.insert(RoundingDirection_16.getString());
  FIX::RoundingModulus RoundingModulus_16;
  RoundingModulus_16.setString("13839032");
  msg.set(RoundingModulus_16);
  OrderQtyData_16.insert(RoundingModulus_16.getString());
  all_values.push_back(OrderQtyData_16);
  all_compo_names.insert("OrderQtyData");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::NewOrderSingle::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_75;
    FIX::PartyID PartyID_75("STRING_1584589270");
    noPartyIDs_0_0.set(PartyID_75);
    Parties_NoPartyIDs_75.insert(PartyID_75.getString());
    FIX::PartyIDSource PartyIDSource_75('6');
    noPartyIDs_0_0.set(PartyIDSource_75);
    Parties_NoPartyIDs_75.insert(PartyIDSource_75.getString());
    FIX::PartyRole PartyRole_75(54);
    noPartyIDs_0_0.set(PartyRole_75);
    Parties_NoPartyIDs_75.insert(PartyRole_75.getString());
    all_values.push_back(Parties_NoPartyIDs_75);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::NewOrderSingle::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_166;
      FIX::PartySubID PartySubID_166("STRING_1379343006");
      noPartySubIDs_0_1_0.set(PartySubID_166);
      PtysSubGrp_NoPartySubIDs_166.insert(PartySubID_166.getString());
      FIX::PartySubIDType PartySubIDType_166(18);
      noPartySubIDs_0_1_0.set(PartySubIDType_166);
      PtysSubGrp_NoPartySubIDs_166.insert(PartySubIDType_166.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_166);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::NewOrderSingle::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_167;
      FIX::PartySubID PartySubID_167("STRING_1271214251");
      noPartySubIDs_0_1_1.set(PartySubID_167);
      PtysSubGrp_NoPartySubIDs_167.insert(PartySubID_167.getString());
      FIX::PartySubIDType PartySubIDType_167(9);
      noPartySubIDs_0_1_1.set(PartySubIDType_167);
      PtysSubGrp_NoPartySubIDs_167.insert(PartySubIDType_167.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_167);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::NewOrderSingle::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_168;
      FIX::PartySubID PartySubID_168("STRING_1223066198");
      noPartySubIDs_0_1_2.set(PartySubID_168);
      PtysSubGrp_NoPartySubIDs_168.insert(PartySubID_168.getString());
      FIX::PartySubIDType PartySubIDType_168(19);
      noPartySubIDs_0_1_2.set(PartySubIDType_168);
      PtysSubGrp_NoPartySubIDs_168.insert(PartySubIDType_168.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_168);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::NewOrderSingle::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_76;
    FIX::PartyID PartyID_76("STRING_1774500865");
    noPartyIDs_0_1.set(PartyID_76);
    Parties_NoPartyIDs_76.insert(PartyID_76.getString());
    FIX::PartyIDSource PartyIDSource_76('1');
    noPartyIDs_0_1.set(PartyIDSource_76);
    Parties_NoPartyIDs_76.insert(PartyIDSource_76.getString());
    FIX::PartyRole PartyRole_76(76);
    noPartyIDs_0_1.set(PartyRole_76);
    Parties_NoPartyIDs_76.insert(PartyRole_76.getString());
    all_values.push_back(Parties_NoPartyIDs_76);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::NewOrderSingle::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_169;
      FIX::PartySubID PartySubID_169("STRING_506356373");
      noPartySubIDs_1_1_0.set(PartySubID_169);
      PtysSubGrp_NoPartySubIDs_169.insert(PartySubID_169.getString());
      FIX::PartySubIDType PartySubIDType_169(5);
      noPartySubIDs_1_1_0.set(PartySubIDType_169);
      PtysSubGrp_NoPartySubIDs_169.insert(PartySubIDType_169.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_169);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::NewOrderSingle::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_170;
      FIX::PartySubID PartySubID_170("STRING_1438142452");
      noPartySubIDs_1_1_1.set(PartySubID_170);
      PtysSubGrp_NoPartySubIDs_170.insert(PartySubID_170.getString());
      FIX::PartySubIDType PartySubIDType_170(22);
      noPartySubIDs_1_1_1.set(PartySubIDType_170);
      PtysSubGrp_NoPartySubIDs_170.insert(PartySubIDType_170.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_170);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::NewOrderSingle::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_77;
    FIX::PartyID PartyID_77("STRING_1819774797");
    noPartyIDs_0_2.set(PartyID_77);
    Parties_NoPartyIDs_77.insert(PartyID_77.getString());
    FIX::PartyIDSource PartyIDSource_77('4');
    noPartyIDs_0_2.set(PartyIDSource_77);
    Parties_NoPartyIDs_77.insert(PartyIDSource_77.getString());
    FIX::PartyRole PartyRole_77(14);
    noPartyIDs_0_2.set(PartyRole_77);
    Parties_NoPartyIDs_77.insert(PartyRole_77.getString());
    all_values.push_back(Parties_NoPartyIDs_77);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::NewOrderSingle::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_171;
      FIX::PartySubID PartySubID_171("STRING_1617746025");
      noPartySubIDs_2_1_0.set(PartySubID_171);
      PtysSubGrp_NoPartySubIDs_171.insert(PartySubID_171.getString());
      FIX::PartySubIDType PartySubIDType_171(19);
      noPartySubIDs_2_1_0.set(PartySubIDType_171);
      PtysSubGrp_NoPartySubIDs_171.insert(PartySubIDType_171.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_171);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::NewOrderSingle::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_172;
      FIX::PartySubID PartySubID_172("STRING_1131218997");
      noPartySubIDs_2_1_1.set(PartySubID_172);
      PtysSubGrp_NoPartySubIDs_172.insert(PartySubID_172.getString());
      FIX::PartySubIDType PartySubIDType_172(22);
      noPartySubIDs_2_1_1.set(PartySubIDType_172);
      PtysSubGrp_NoPartySubIDs_172.insert(PartySubIDType_172.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_172);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_1);
    }
    msg.addGroup(noPartyIDs_0_2);
  }
  // PegInstructions
  multiset<string> PegInstructions_8;
  FIX::PegLimitType PegLimitType_8(2);
  msg.set(PegLimitType_8);
  PegInstructions_8.insert(PegLimitType_8.getString());
  FIX::PegMoveType PegMoveType_8(0);
  msg.set(PegMoveType_8);
  PegInstructions_8.insert(PegMoveType_8.getString());
  FIX::PegOffsetType PegOffsetType_8(1);
  msg.set(PegOffsetType_8);
  PegInstructions_8.insert(PegOffsetType_8.getString());
  FIX::PegOffsetValue PegOffsetValue_8;
  PegOffsetValue_8.setString("1350162");
  msg.set(PegOffsetValue_8);
  PegInstructions_8.insert(PegOffsetValue_8.getString());
  FIX::PegPriceType PegPriceType_8(4);
  msg.set(PegPriceType_8);
  PegInstructions_8.insert(PegPriceType_8.getString());
  FIX::PegRoundDirection PegRoundDirection_8(2);
  msg.set(PegRoundDirection_8);
  PegInstructions_8.insert(PegRoundDirection_8.getString());
  FIX::PegScope PegScope_8(4);
  msg.set(PegScope_8);
  PegInstructions_8.insert(PegScope_8.getString());
  FIX::PegSecurityDesc PegSecurityDesc_8("STRING_1023944376");
  msg.set(PegSecurityDesc_8);
  PegInstructions_8.insert(PegSecurityDesc_8.getString());
  FIX::PegSecurityID PegSecurityID_8("STRING_997222123");
  msg.set(PegSecurityID_8);
  PegInstructions_8.insert(PegSecurityID_8.getString());
  FIX::PegSecurityIDSource PegSecurityIDSource_8("STRING_480889281");
  msg.set(PegSecurityIDSource_8);
  PegInstructions_8.insert(PegSecurityIDSource_8.getString());
  FIX::PegSymbol PegSymbol_8("STRING_336144597");
  msg.set(PegSymbol_8);
  PegInstructions_8.insert(PegSymbol_8.getString());
  all_values.push_back(PegInstructions_8);
  all_compo_names.insert("PegInstructions");

  // PreAllocGrp
  // Group PreAllocGrp.NoAllocs
  {
    FIX50SP2::NewOrderSingle::NoAllocs noAllocs_0_0;
    // PreAllocGrp.NoAllocs
    multiset<string> PreAllocGrp_NoAllocs_20;
    FIX::AllocAccount AllocAccount_33("STRING_3459148");
    noAllocs_0_0.set(AllocAccount_33);
    PreAllocGrp_NoAllocs_20.insert(AllocAccount_33.getString());
    FIX::AllocAcctIDSource AllocAcctIDSource_33(1559210795);
    noAllocs_0_0.set(AllocAcctIDSource_33);
    PreAllocGrp_NoAllocs_20.insert(AllocAcctIDSource_33.getString());
    FIX::AllocQty AllocQty_32;
    AllocQty_32.setString("6952480");
    noAllocs_0_0.set(AllocQty_32);
    PreAllocGrp_NoAllocs_20.insert(AllocQty_32.getString());
    FIX::AllocSettlCurrency AllocSettlCurrency_28("JPY");
    noAllocs_0_0.set(AllocSettlCurrency_28);
    PreAllocGrp_NoAllocs_20.insert(AllocSettlCurrency_28.getString());
    FIX::IndividualAllocID IndividualAllocID_33("STRING_1921874218");
    noAllocs_0_0.set(IndividualAllocID_33);
    PreAllocGrp_NoAllocs_20.insert(IndividualAllocID_33.getString());
    all_values.push_back(PreAllocGrp_NoAllocs_20);
    all_compo_names.insert("PreAllocGrp.NoAllocs");

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::NewOrderSingle::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_68;
      FIX::NestedPartyID NestedPartyID_68("STRING_2137327845");
      noNestedPartyIDs_0_1_0.set(NestedPartyID_68);
      NestedParties_NoNestedPartyIDs_68.insert(NestedPartyID_68.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_68('1');
      noNestedPartyIDs_0_1_0.set(NestedPartyIDSource_68);
      NestedParties_NoNestedPartyIDs_68.insert(NestedPartyIDSource_68.getString());
      FIX::NestedPartyRole NestedPartyRole_68(654850297);
      noNestedPartyIDs_0_1_0.set(NestedPartyRole_68);
      NestedParties_NoNestedPartyIDs_68.insert(NestedPartyRole_68.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_68);
      all_compo_names.insert("NestedParties.NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::NewOrderSingle::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_147;
        FIX::NestedPartySubID NestedPartySubID_147("STRING_978919706");
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubID_147);
        NstdPtysSubGrp_NoNestedPartySubIDs_147.insert(NestedPartySubID_147.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_147(1070394237);
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubIDType_147);
        NstdPtysSubGrp_NoNestedPartySubIDs_147.insert(NestedPartySubIDType_147.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_147);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::NewOrderSingle::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_148;
        FIX::NestedPartySubID NestedPartySubID_148("STRING_367035574");
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubID_148);
        NstdPtysSubGrp_NoNestedPartySubIDs_148.insert(NestedPartySubID_148.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_148(138370375);
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubIDType_148);
        NstdPtysSubGrp_NoNestedPartySubIDs_148.insert(NestedPartySubIDType_148.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_148);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::NewOrderSingle::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_149;
        FIX::NestedPartySubID NestedPartySubID_149("STRING_540656614");
        noNestedPartySubIDs_0_0_2_2.set(NestedPartySubID_149);
        NstdPtysSubGrp_NoNestedPartySubIDs_149.insert(NestedPartySubID_149.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_149(1929583645);
        noNestedPartySubIDs_0_0_2_2.set(NestedPartySubIDType_149);
        NstdPtysSubGrp_NoNestedPartySubIDs_149.insert(NestedPartySubIDType_149.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_149);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_2);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::NewOrderSingle::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_69;
      FIX::NestedPartyID NestedPartyID_69("STRING_1269589372");
      noNestedPartyIDs_0_1_1.set(NestedPartyID_69);
      NestedParties_NoNestedPartyIDs_69.insert(NestedPartyID_69.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_69('2');
      noNestedPartyIDs_0_1_1.set(NestedPartyIDSource_69);
      NestedParties_NoNestedPartyIDs_69.insert(NestedPartyIDSource_69.getString());
      FIX::NestedPartyRole NestedPartyRole_69(680696692);
      noNestedPartyIDs_0_1_1.set(NestedPartyRole_69);
      NestedParties_NoNestedPartyIDs_69.insert(NestedPartyRole_69.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_69);
      all_compo_names.insert("NestedParties.NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::NewOrderSingle::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_150;
        FIX::NestedPartySubID NestedPartySubID_150("STRING_954978329");
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubID_150);
        NstdPtysSubGrp_NoNestedPartySubIDs_150.insert(NestedPartySubID_150.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_150(815712968);
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubIDType_150);
        NstdPtysSubGrp_NoNestedPartySubIDs_150.insert(NestedPartySubIDType_150.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_150);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_1);
    }
    msg.addGroup(noAllocs_0_0);
  }
  {
    FIX50SP2::NewOrderSingle::NoAllocs noAllocs_0_1;
    // PreAllocGrp.NoAllocs
    multiset<string> PreAllocGrp_NoAllocs_21;
    FIX::AllocAccount AllocAccount_34("STRING_575768962");
    noAllocs_0_1.set(AllocAccount_34);
    PreAllocGrp_NoAllocs_21.insert(AllocAccount_34.getString());
    FIX::AllocAcctIDSource AllocAcctIDSource_34(1467575861);
    noAllocs_0_1.set(AllocAcctIDSource_34);
    PreAllocGrp_NoAllocs_21.insert(AllocAcctIDSource_34.getString());
    FIX::AllocQty AllocQty_33;
    AllocQty_33.setString("20647428");
    noAllocs_0_1.set(AllocQty_33);
    PreAllocGrp_NoAllocs_21.insert(AllocQty_33.getString());
    FIX::AllocSettlCurrency AllocSettlCurrency_29("JPY");
    noAllocs_0_1.set(AllocSettlCurrency_29);
    PreAllocGrp_NoAllocs_21.insert(AllocSettlCurrency_29.getString());
    FIX::IndividualAllocID IndividualAllocID_34("STRING_398148525");
    noAllocs_0_1.set(IndividualAllocID_34);
    PreAllocGrp_NoAllocs_21.insert(IndividualAllocID_34.getString());
    all_values.push_back(PreAllocGrp_NoAllocs_21);
    all_compo_names.insert("PreAllocGrp.NoAllocs");

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::NewOrderSingle::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_70;
      FIX::NestedPartyID NestedPartyID_70("STRING_438267063");
      noNestedPartyIDs_1_1_0.set(NestedPartyID_70);
      NestedParties_NoNestedPartyIDs_70.insert(NestedPartyID_70.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_70('4');
      noNestedPartyIDs_1_1_0.set(NestedPartyIDSource_70);
      NestedParties_NoNestedPartyIDs_70.insert(NestedPartyIDSource_70.getString());
      FIX::NestedPartyRole NestedPartyRole_70(1347585083);
      noNestedPartyIDs_1_1_0.set(NestedPartyRole_70);
      NestedParties_NoNestedPartyIDs_70.insert(NestedPartyRole_70.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_70);
      all_compo_names.insert("NestedParties.NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::NewOrderSingle::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_151;
        FIX::NestedPartySubID NestedPartySubID_151("STRING_32084038");
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubID_151);
        NstdPtysSubGrp_NoNestedPartySubIDs_151.insert(NestedPartySubID_151.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_151(831072908);
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubIDType_151);
        NstdPtysSubGrp_NoNestedPartySubIDs_151.insert(NestedPartySubIDType_151.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_151);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::NewOrderSingle::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_152;
        FIX::NestedPartySubID NestedPartySubID_152("STRING_907905648");
        noNestedPartySubIDs_1_0_2_1.set(NestedPartySubID_152);
        NstdPtysSubGrp_NoNestedPartySubIDs_152.insert(NestedPartySubID_152.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_152(1396275531);
        noNestedPartySubIDs_1_0_2_1.set(NestedPartySubIDType_152);
        NstdPtysSubGrp_NoNestedPartySubIDs_152.insert(NestedPartySubIDType_152.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_152);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_1);
      }
      noAllocs_0_1.addGroup(noNestedPartyIDs_1_1_0);
    }
    {
      FIX50SP2::NewOrderSingle::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_71;
      FIX::NestedPartyID NestedPartyID_71("STRING_820917105");
      noNestedPartyIDs_1_1_1.set(NestedPartyID_71);
      NestedParties_NoNestedPartyIDs_71.insert(NestedPartyID_71.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_71('6');
      noNestedPartyIDs_1_1_1.set(NestedPartyIDSource_71);
      NestedParties_NoNestedPartyIDs_71.insert(NestedPartyIDSource_71.getString());
      FIX::NestedPartyRole NestedPartyRole_71(2051125828);
      noNestedPartyIDs_1_1_1.set(NestedPartyRole_71);
      NestedParties_NoNestedPartyIDs_71.insert(NestedPartyRole_71.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_71);
      all_compo_names.insert("NestedParties.NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::NewOrderSingle::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_153;
        FIX::NestedPartySubID NestedPartySubID_153("STRING_1045970263");
        noNestedPartySubIDs_1_1_2_0.set(NestedPartySubID_153);
        NstdPtysSubGrp_NoNestedPartySubIDs_153.insert(NestedPartySubID_153.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_153(974036417);
        noNestedPartySubIDs_1_1_2_0.set(NestedPartySubIDType_153);
        NstdPtysSubGrp_NoNestedPartySubIDs_153.insert(NestedPartySubIDType_153.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_153);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::NewOrderSingle::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_154;
        FIX::NestedPartySubID NestedPartySubID_154("STRING_2052334980");
        noNestedPartySubIDs_1_1_2_1.set(NestedPartySubID_154);
        NstdPtysSubGrp_NoNestedPartySubIDs_154.insert(NestedPartySubID_154.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_154(1184340638);
        noNestedPartySubIDs_1_1_2_1.set(NestedPartySubIDType_154);
        NstdPtysSubGrp_NoNestedPartySubIDs_154.insert(NestedPartySubIDType_154.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_154);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::NewOrderSingle::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_155;
        FIX::NestedPartySubID NestedPartySubID_155("STRING_1514693031");
        noNestedPartySubIDs_1_1_2_2.set(NestedPartySubID_155);
        NstdPtysSubGrp_NoNestedPartySubIDs_155.insert(NestedPartySubID_155.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_155(1834434977);
        noNestedPartySubIDs_1_1_2_2.set(NestedPartySubIDType_155);
        NstdPtysSubGrp_NoNestedPartySubIDs_155.insert(NestedPartySubIDType_155.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_155);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_2);
      }
      noAllocs_0_1.addGroup(noNestedPartyIDs_1_1_1);
    }
    {
      FIX50SP2::NewOrderSingle::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_72;
      FIX::NestedPartyID NestedPartyID_72("STRING_306446363");
      noNestedPartyIDs_1_1_2.set(NestedPartyID_72);
      NestedParties_NoNestedPartyIDs_72.insert(NestedPartyID_72.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_72('1');
      noNestedPartyIDs_1_1_2.set(NestedPartyIDSource_72);
      NestedParties_NoNestedPartyIDs_72.insert(NestedPartyIDSource_72.getString());
      FIX::NestedPartyRole NestedPartyRole_72(367648021);
      noNestedPartyIDs_1_1_2.set(NestedPartyRole_72);
      NestedParties_NoNestedPartyIDs_72.insert(NestedPartyRole_72.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_72);
      all_compo_names.insert("NestedParties.NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::NewOrderSingle::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_156;
        FIX::NestedPartySubID NestedPartySubID_156("STRING_201674133");
        noNestedPartySubIDs_1_2_2_0.set(NestedPartySubID_156);
        NstdPtysSubGrp_NoNestedPartySubIDs_156.insert(NestedPartySubID_156.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_156(1183360990);
        noNestedPartySubIDs_1_2_2_0.set(NestedPartySubIDType_156);
        NstdPtysSubGrp_NoNestedPartySubIDs_156.insert(NestedPartySubIDType_156.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_156);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_2.addGroup(noNestedPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::NewOrderSingle::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_157;
        FIX::NestedPartySubID NestedPartySubID_157("STRING_1894356276");
        noNestedPartySubIDs_1_2_2_1.set(NestedPartySubID_157);
        NstdPtysSubGrp_NoNestedPartySubIDs_157.insert(NestedPartySubID_157.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_157(1669249994);
        noNestedPartySubIDs_1_2_2_1.set(NestedPartySubIDType_157);
        NstdPtysSubGrp_NoNestedPartySubIDs_157.insert(NestedPartySubIDType_157.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_157);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_2.addGroup(noNestedPartySubIDs_1_2_2_1);
      }
      {
        FIX50SP2::NewOrderSingle::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_158;
        FIX::NestedPartySubID NestedPartySubID_158("STRING_1100620233");
        noNestedPartySubIDs_1_2_2_2.set(NestedPartySubID_158);
        NstdPtysSubGrp_NoNestedPartySubIDs_158.insert(NestedPartySubID_158.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_158(1346585967);
        noNestedPartySubIDs_1_2_2_2.set(NestedPartySubIDType_158);
        NstdPtysSubGrp_NoNestedPartySubIDs_158.insert(NestedPartySubIDType_158.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_158);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_2.addGroup(noNestedPartySubIDs_1_2_2_2);
      }
      noAllocs_0_1.addGroup(noNestedPartyIDs_1_1_2);
    }
    msg.addGroup(noAllocs_0_1);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_19;
  FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_19("USD");
  msg.set(BenchmarkCurveCurrency_19);
  SpreadOrBenchmarkCurveData_19.insert(BenchmarkCurveCurrency_19.getString());
  FIX::BenchmarkCurveName BenchmarkCurveName_19("STRING_FutureSWAP");
  msg.set(BenchmarkCurveName_19);
  SpreadOrBenchmarkCurveData_19.insert(BenchmarkCurveName_19.getString());
  FIX::BenchmarkCurvePoint BenchmarkCurvePoint_19("STRING_277347745");
  msg.set(BenchmarkCurvePoint_19);
  SpreadOrBenchmarkCurveData_19.insert(BenchmarkCurvePoint_19.getString());
  FIX::BenchmarkPrice BenchmarkPrice_19;
  BenchmarkPrice_19.setString("19003764");
  msg.set(BenchmarkPrice_19);
  SpreadOrBenchmarkCurveData_19.insert(BenchmarkPrice_19.getString());
  FIX::BenchmarkPriceType BenchmarkPriceType_19(335061690);
  msg.set(BenchmarkPriceType_19);
  SpreadOrBenchmarkCurveData_19.insert(BenchmarkPriceType_19.getString());
  FIX::BenchmarkSecurityID BenchmarkSecurityID_19("STRING_1410862824");
  msg.set(BenchmarkSecurityID_19);
  SpreadOrBenchmarkCurveData_19.insert(BenchmarkSecurityID_19.getString());
  FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_19("STRING_1932460470");
  msg.set(BenchmarkSecurityIDSource_19);
  SpreadOrBenchmarkCurveData_19.insert(BenchmarkSecurityIDSource_19.getString());
  FIX::Spread Spread_19;
  Spread_19.setString("11661345");
  msg.set(Spread_19);
  SpreadOrBenchmarkCurveData_19.insert(Spread_19.getString());
  all_values.push_back(SpreadOrBenchmarkCurveData_19);
  all_compo_names.insert("SpreadOrBenchmarkCurveData");

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::NewOrderSingle::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_31;
    FIX::StipulationType StipulationType_31("STRING_PXSOURCE");
    noStipulations_0_0.set(StipulationType_31);
    Stipulations_NoStipulations_31.insert(StipulationType_31.getString());
    FIX::StipulationValue StipulationValue_31("STRING_1987051704");
    noStipulations_0_0.set(StipulationValue_31);
    Stipulations_NoStipulations_31.insert(StipulationValue_31.getString());
    all_values.push_back(Stipulations_NoStipulations_31);
    all_compo_names.insert("Stipulations.NoStipulations");

    msg.addGroup(noStipulations_0_0);
  }
  {
    FIX50SP2::NewOrderSingle::NoStipulations noStipulations_0_1;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_32;
    FIX::StipulationType StipulationType_32("STRING_MINQTY");
    noStipulations_0_1.set(StipulationType_32);
    Stipulations_NoStipulations_32.insert(StipulationType_32.getString());
    FIX::StipulationValue StipulationValue_32("STRING_1084894533");
    noStipulations_0_1.set(StipulationValue_32);
    Stipulations_NoStipulations_32.insert(StipulationValue_32.getString());
    all_values.push_back(Stipulations_NoStipulations_32);
    all_compo_names.insert("Stipulations.NoStipulations");

    msg.addGroup(noStipulations_0_1);
  }
  // StrategyParametersGrp
  // Group StrategyParametersGrp.NoStrategyParameters
  {
    FIX50SP2::NewOrderSingle::NoStrategyParameters noStrategyParameters_0_0;
    // StrategyParametersGrp.NoStrategyParameters
    multiset<string> StrategyParametersGrp_NoStrategyParameters_15;
    FIX::StrategyParameterName StrategyParameterName_15("STRING_1284305644");
    noStrategyParameters_0_0.set(StrategyParameterName_15);
    StrategyParametersGrp_NoStrategyParameters_15.insert(StrategyParameterName_15.getString());
    FIX::StrategyParameterType StrategyParameterType_15(29);
    noStrategyParameters_0_0.set(StrategyParameterType_15);
    StrategyParametersGrp_NoStrategyParameters_15.insert(StrategyParameterType_15.getString());
    FIX::StrategyParameterValue StrategyParameterValue_15("STRING_1429718795");
    noStrategyParameters_0_0.set(StrategyParameterValue_15);
    StrategyParametersGrp_NoStrategyParameters_15.insert(StrategyParameterValue_15.getString());
    all_values.push_back(StrategyParametersGrp_NoStrategyParameters_15);
    all_compo_names.insert("StrategyParametersGrp.NoStrategyParameters");

    msg.addGroup(noStrategyParameters_0_0);
  }
  // TrdRegTimestamps
  // Group TrdRegTimestamps.NoTrdRegTimestamps
  {
    FIX50SP2::NewOrderSingle::NoTrdRegTimestamps noTrdRegTimestamps_0_0;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_11;
    FIX::DeskOrderHandlingInst DeskOrderHandlingInst_11("MULTIPLESTRINGVALUE_TMO");
    noTrdRegTimestamps_0_0.set(DeskOrderHandlingInst_11);
    TrdRegTimestamps_NoTrdRegTimestamps_11.insert(DeskOrderHandlingInst_11.getString());
    FIX::DeskType DeskType_11("STRING_S");
    noTrdRegTimestamps_0_0.set(DeskType_11);
    TrdRegTimestamps_NoTrdRegTimestamps_11.insert(DeskType_11.getString());
    FIX::DeskTypeSource DeskTypeSource_11(1);
    noTrdRegTimestamps_0_0.set(DeskTypeSource_11);
    TrdRegTimestamps_NoTrdRegTimestamps_11.insert(DeskTypeSource_11.getString());
    FIX::TrdRegTimestamp TrdRegTimestamp_11(FIX::UTCTIMESTAMP(10, 12, 9, 8, 5, 2009));
    noTrdRegTimestamps_0_0.set(TrdRegTimestamp_11);
    TrdRegTimestamps_NoTrdRegTimestamps_11.insert(TrdRegTimestamp_11.getString());
    FIX::TrdRegTimestampOrigin TrdRegTimestampOrigin_11("STRING_1620815721");
    noTrdRegTimestamps_0_0.set(TrdRegTimestampOrigin_11);
    TrdRegTimestamps_NoTrdRegTimestamps_11.insert(TrdRegTimestampOrigin_11.getString());
    FIX::TrdRegTimestampType TrdRegTimestampType_11(1);
    noTrdRegTimestamps_0_0.set(TrdRegTimestampType_11);
    TrdRegTimestamps_NoTrdRegTimestamps_11.insert(TrdRegTimestampType_11.getString());
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_11);
    all_compo_names.insert("TrdRegTimestamps.NoTrdRegTimestamps");

    msg.addGroup(noTrdRegTimestamps_0_0);
  }
  {
    FIX50SP2::NewOrderSingle::NoTrdRegTimestamps noTrdRegTimestamps_0_1;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_12;
    FIX::DeskOrderHandlingInst DeskOrderHandlingInst_12("MULTIPLESTRINGVALUE_CNH");
    noTrdRegTimestamps_0_1.set(DeskOrderHandlingInst_12);
    TrdRegTimestamps_NoTrdRegTimestamps_12.insert(DeskOrderHandlingInst_12.getString());
    FIX::DeskType DeskType_12("STRING_T");
    noTrdRegTimestamps_0_1.set(DeskType_12);
    TrdRegTimestamps_NoTrdRegTimestamps_12.insert(DeskType_12.getString());
    FIX::DeskTypeSource DeskTypeSource_12(1);
    noTrdRegTimestamps_0_1.set(DeskTypeSource_12);
    TrdRegTimestamps_NoTrdRegTimestamps_12.insert(DeskTypeSource_12.getString());
    FIX::TrdRegTimestamp TrdRegTimestamp_12(FIX::UTCTIMESTAMP(7, 37, 27, 25, 4, 2002));
    noTrdRegTimestamps_0_1.set(TrdRegTimestamp_12);
    TrdRegTimestamps_NoTrdRegTimestamps_12.insert(TrdRegTimestamp_12.getString());
    FIX::TrdRegTimestampOrigin TrdRegTimestampOrigin_12("STRING_1691222790");
    noTrdRegTimestamps_0_1.set(TrdRegTimestampOrigin_12);
    TrdRegTimestamps_NoTrdRegTimestamps_12.insert(TrdRegTimestampOrigin_12.getString());
    FIX::TrdRegTimestampType TrdRegTimestampType_12(5);
    noTrdRegTimestamps_0_1.set(TrdRegTimestampType_12);
    TrdRegTimestamps_NoTrdRegTimestamps_12.insert(TrdRegTimestampType_12.getString());
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_12);
    all_compo_names.insert("TrdRegTimestamps.NoTrdRegTimestamps");

    msg.addGroup(noTrdRegTimestamps_0_1);
  }
  {
    FIX50SP2::NewOrderSingle::NoTrdRegTimestamps noTrdRegTimestamps_0_2;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_13;
    FIX::DeskOrderHandlingInst DeskOrderHandlingInst_13("MULTIPLESTRINGVALUE_LOC");
    noTrdRegTimestamps_0_2.set(DeskOrderHandlingInst_13);
    TrdRegTimestamps_NoTrdRegTimestamps_13.insert(DeskOrderHandlingInst_13.getString());
    FIX::DeskType DeskType_13("STRING_T");
    noTrdRegTimestamps_0_2.set(DeskType_13);
    TrdRegTimestamps_NoTrdRegTimestamps_13.insert(DeskType_13.getString());
    FIX::DeskTypeSource DeskTypeSource_13(1);
    noTrdRegTimestamps_0_2.set(DeskTypeSource_13);
    TrdRegTimestamps_NoTrdRegTimestamps_13.insert(DeskTypeSource_13.getString());
    FIX::TrdRegTimestamp TrdRegTimestamp_13(FIX::UTCTIMESTAMP(1, 41, 25, 18, 6, 2003));
    noTrdRegTimestamps_0_2.set(TrdRegTimestamp_13);
    TrdRegTimestamps_NoTrdRegTimestamps_13.insert(TrdRegTimestamp_13.getString());
    FIX::TrdRegTimestampOrigin TrdRegTimestampOrigin_13("STRING_491573799");
    noTrdRegTimestamps_0_2.set(TrdRegTimestampOrigin_13);
    TrdRegTimestamps_NoTrdRegTimestamps_13.insert(TrdRegTimestampOrigin_13.getString());
    FIX::TrdRegTimestampType TrdRegTimestampType_13(6);
    noTrdRegTimestamps_0_2.set(TrdRegTimestampType_13);
    TrdRegTimestamps_NoTrdRegTimestamps_13.insert(TrdRegTimestampType_13.getString());
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_13);
    all_compo_names.insert("TrdRegTimestamps.NoTrdRegTimestamps");

    msg.addGroup(noTrdRegTimestamps_0_2);
  }
  // TrdgSesGrp
  // Group TrdgSesGrp.NoTradingSessions
  {
    FIX50SP2::NewOrderSingle::NoTradingSessions noTradingSessions_0_0;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_18;
    FIX::TradingSessionID TradingSessionID_65("STRING_1");
    noTradingSessions_0_0.set(TradingSessionID_65);
    TrdgSesGrp_NoTradingSessions_18.insert(TradingSessionID_65.getString());
    FIX::TradingSessionSubID TradingSessionSubID_65("STRING_7");
    noTradingSessions_0_0.set(TradingSessionSubID_65);
    TrdgSesGrp_NoTradingSessions_18.insert(TradingSessionSubID_65.getString());
    all_values.push_back(TrdgSesGrp_NoTradingSessions_18);
    all_compo_names.insert("TrdgSesGrp.NoTradingSessions");

    msg.addGroup(noTradingSessions_0_0);
  }
  {
    FIX50SP2::NewOrderSingle::NoTradingSessions noTradingSessions_0_1;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_19;
    FIX::TradingSessionID TradingSessionID_66("STRING_6");
    noTradingSessions_0_1.set(TradingSessionID_66);
    TrdgSesGrp_NoTradingSessions_19.insert(TradingSessionID_66.getString());
    FIX::TradingSessionSubID TradingSessionSubID_66("STRING_1");
    noTradingSessions_0_1.set(TradingSessionSubID_66);
    TrdgSesGrp_NoTradingSessions_19.insert(TradingSessionSubID_66.getString());
    all_values.push_back(TrdgSesGrp_NoTradingSessions_19);
    all_compo_names.insert("TrdgSesGrp.NoTradingSessions");

    msg.addGroup(noTradingSessions_0_1);
  }
  // TriggeringInstruction
  multiset<string> TriggeringInstruction_8;
  FIX::TriggerAction TriggerAction_8('1');
  msg.set(TriggerAction_8);
  TriggeringInstruction_8.insert(TriggerAction_8.getString());
  FIX::TriggerNewPrice TriggerNewPrice_8;
  TriggerNewPrice_8.setString("5077672");
  msg.set(TriggerNewPrice_8);
  TriggeringInstruction_8.insert(TriggerNewPrice_8.getString());
  FIX::TriggerNewQty TriggerNewQty_8;
  TriggerNewQty_8.setString("19977179");
  msg.set(TriggerNewQty_8);
  TriggeringInstruction_8.insert(TriggerNewQty_8.getString());
  FIX::TriggerOrderType TriggerOrderType_8('2');
  msg.set(TriggerOrderType_8);
  TriggeringInstruction_8.insert(TriggerOrderType_8.getString());
  FIX::TriggerPrice TriggerPrice_8;
  TriggerPrice_8.setString("3874151");
  msg.set(TriggerPrice_8);
  TriggeringInstruction_8.insert(TriggerPrice_8.getString());
  FIX::TriggerPriceDirection TriggerPriceDirection_8('D');
  msg.set(TriggerPriceDirection_8);
  TriggeringInstruction_8.insert(TriggerPriceDirection_8.getString());
  FIX::TriggerPriceType TriggerPriceType_8('1');
  msg.set(TriggerPriceType_8);
  TriggeringInstruction_8.insert(TriggerPriceType_8.getString());
  FIX::TriggerPriceTypeScope TriggerPriceTypeScope_8('2');
  msg.set(TriggerPriceTypeScope_8);
  TriggeringInstruction_8.insert(TriggerPriceTypeScope_8.getString());
  FIX::TriggerSecurityDesc TriggerSecurityDesc_8("STRING_139023597");
  msg.set(TriggerSecurityDesc_8);
  TriggeringInstruction_8.insert(TriggerSecurityDesc_8.getString());
  FIX::TriggerSecurityID TriggerSecurityID_8("STRING_386644594");
  msg.set(TriggerSecurityID_8);
  TriggeringInstruction_8.insert(TriggerSecurityID_8.getString());
  FIX::TriggerSecurityIDSource TriggerSecurityIDSource_8("STRING_1982968850");
  msg.set(TriggerSecurityIDSource_8);
  TriggeringInstruction_8.insert(TriggerSecurityIDSource_8.getString());
  FIX::TriggerSymbol TriggerSymbol_8("STRING_86392641");
  msg.set(TriggerSymbol_8);
  TriggeringInstruction_8.insert(TriggerSymbol_8.getString());
  FIX::TriggerTradingSessionID TriggerTradingSessionID_8("STRING_2077867384");
  msg.set(TriggerTradingSessionID_8);
  TriggeringInstruction_8.insert(TriggerTradingSessionID_8.getString());
  FIX::TriggerTradingSessionSubID TriggerTradingSessionSubID_8("STRING_1055897413");
  msg.set(TriggerTradingSessionSubID_8);
  TriggeringInstruction_8.insert(TriggerTradingSessionSubID_8.getString());
  FIX::TriggerType TriggerType_8('3');
  msg.set(TriggerType_8);
  TriggeringInstruction_8.insert(TriggerType_8.getString());
  all_values.push_back(TriggeringInstruction_8);
  all_compo_names.insert("TriggeringInstruction");

  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::NewOrderSingle::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_74;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_74("DATA_1653693439");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_74);
    UnderlyingInstrument_74.insert(EncodedUnderlyingIssuer_74.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_74(1742107136);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_74);
    UnderlyingInstrument_74.insert(EncodedUnderlyingIssuerLen_74.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_74("DATA_1099098389");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_74);
    UnderlyingInstrument_74.insert(EncodedUnderlyingSecurityDesc_74.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_74(1533724612);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_74);
    UnderlyingInstrument_74.insert(EncodedUnderlyingSecurityDescLen_74.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_74;
    UnderlyingAdjustedQuantity_74.setString("13857961");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_74);
    UnderlyingInstrument_74.insert(UnderlyingAdjustedQuantity_74.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_74;
    UnderlyingAllocationPercent_74.setString("60.520000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_74);
    UnderlyingInstrument_74.insert(UnderlyingAllocationPercent_74.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_74;
    UnderlyingAttachmentPoint_74.setString("22.620000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_74);
    UnderlyingInstrument_74.insert(UnderlyingAttachmentPoint_74.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_74("STRING_1657094248");
    noUnderlyings_0_0.set(UnderlyingCFICode_74);
    UnderlyingInstrument_74.insert(UnderlyingCFICode_74.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_74("STRING_1409409851");
    noUnderlyings_0_0.set(UnderlyingCPProgram_74);
    UnderlyingInstrument_74.insert(UnderlyingCPProgram_74.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_74("STRING_716478057");
    noUnderlyings_0_0.set(UnderlyingCPRegType_74);
    UnderlyingInstrument_74.insert(UnderlyingCPRegType_74.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_74;
    UnderlyingCapValue_74.setString("17271049");
    noUnderlyings_0_0.set(UnderlyingCapValue_74);
    UnderlyingInstrument_74.insert(UnderlyingCapValue_74.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_74;
    UnderlyingCashAmount_74.setString("6280102");
    noUnderlyings_0_0.set(UnderlyingCashAmount_74);
    UnderlyingInstrument_74.insert(UnderlyingCashAmount_74.getString());
    FIX::UnderlyingCashType UnderlyingCashType_74("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_74);
    UnderlyingInstrument_74.insert(UnderlyingCashType_74.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_74;
    UnderlyingContractMultiplier_74.setString("13427009");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_74);
    UnderlyingInstrument_74.insert(UnderlyingContractMultiplier_74.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_74(242887307);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_74);
    UnderlyingInstrument_74.insert(UnderlyingContractMultiplierUnit_74.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_74("COUNTRY_1897272698");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_74);
    UnderlyingInstrument_74.insert(UnderlyingCountryOfIssue_74.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_74("LOCALMKTDATE_1850468250");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_74);
    UnderlyingInstrument_74.insert(UnderlyingCouponPaymentDate_74.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_74;
    UnderlyingCouponRate_74.setString("16.410000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_74);
    UnderlyingInstrument_74.insert(UnderlyingCouponRate_74.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_74("STRING_1048953239");
    noUnderlyings_0_0.set(UnderlyingCreditRating_74);
    UnderlyingInstrument_74.insert(UnderlyingCreditRating_74.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_74("CAN");
    noUnderlyings_0_0.set(UnderlyingCurrency_74);
    UnderlyingInstrument_74.insert(UnderlyingCurrency_74.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_74;
    UnderlyingCurrentValue_74.setString("9256273");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_74);
    UnderlyingInstrument_74.insert(UnderlyingCurrentValue_74.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_74;
    UnderlyingDetachmentPoint_74.setString("44.340000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_74);
    UnderlyingInstrument_74.insert(UnderlyingDetachmentPoint_74.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_74;
    UnderlyingDirtyPrice_74.setString("5950846");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_74);
    UnderlyingInstrument_74.insert(UnderlyingDirtyPrice_74.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_74;
    UnderlyingEndPrice_74.setString("13122719");
    noUnderlyings_0_0.set(UnderlyingEndPrice_74);
    UnderlyingInstrument_74.insert(UnderlyingEndPrice_74.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_74;
    UnderlyingEndValue_74.setString("5280096");
    noUnderlyings_0_0.set(UnderlyingEndValue_74);
    UnderlyingInstrument_74.insert(UnderlyingEndValue_74.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_74(681477257);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_74);
    UnderlyingInstrument_74.insert(UnderlyingExerciseStyle_74.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_74;
    UnderlyingFXRate_74.setString("12426557");
    noUnderlyings_0_0.set(UnderlyingFXRate_74);
    UnderlyingInstrument_74.insert(UnderlyingFXRate_74.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_74('M');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_74);
    UnderlyingInstrument_74.insert(UnderlyingFXRateCalc_74.getString());
    FIX::UnderlyingFactor UnderlyingFactor_74;
    UnderlyingFactor_74.setString("9535743");
    noUnderlyings_0_0.set(UnderlyingFactor_74);
    UnderlyingInstrument_74.insert(UnderlyingFactor_74.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_74(1801673138);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_74);
    UnderlyingInstrument_74.insert(UnderlyingFlowScheduleType_74.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_74("STRING_1090116841");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_74);
    UnderlyingInstrument_74.insert(UnderlyingInstrRegistry_74.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_74("LOCALMKTDATE_548197812");
    noUnderlyings_0_0.set(UnderlyingIssueDate_74);
    UnderlyingInstrument_74.insert(UnderlyingIssueDate_74.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_74("STRING_753287879");
    noUnderlyings_0_0.set(UnderlyingIssuer_74);
    UnderlyingInstrument_74.insert(UnderlyingIssuer_74.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_74("STRING_476357805");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_74);
    UnderlyingInstrument_74.insert(UnderlyingLocaleOfIssue_74.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_74("LOCALMKTDATE_1933994005");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_74);
    UnderlyingInstrument_74.insert(UnderlyingMaturityDate_74.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_74("MONTHYEAR_1671123931");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_74);
    UnderlyingInstrument_74.insert(UnderlyingMaturityMonthYear_74.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_74("TZTIMEONLY_859300067");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_74);
    UnderlyingInstrument_74.insert(UnderlyingMaturityTime_74.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_74;
    UnderlyingNotionalPercentageOutstanding_74.setString("46.060000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_74);
    UnderlyingInstrument_74.insert(UnderlyingNotionalPercentageOutstanding_74.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_74('9');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_74);
    UnderlyingInstrument_74.insert(UnderlyingOptAttribute_74.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_74;
    UnderlyingOriginalNotionalPercentageOutstanding_74.setString("81.250000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_74);
    UnderlyingInstrument_74.insert(UnderlyingOriginalNotionalPercentageOutstanding_74.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_74("STRING_1023225925");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_74);
    UnderlyingInstrument_74.insert(UnderlyingPriceUnitOfMeasure_74.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_74;
    UnderlyingPriceUnitOfMeasureQty_74.setString("15610604");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_74);
    UnderlyingInstrument_74.insert(UnderlyingPriceUnitOfMeasureQty_74.getString());
    FIX::UnderlyingProduct UnderlyingProduct_74(998503818);
    noUnderlyings_0_0.set(UnderlyingProduct_74);
    UnderlyingInstrument_74.insert(UnderlyingProduct_74.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_74(218443256);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_74);
    UnderlyingInstrument_74.insert(UnderlyingPutOrCall_74.getString());
    FIX::UnderlyingPx UnderlyingPx_74;
    UnderlyingPx_74.setString("18039477");
    noUnderlyings_0_0.set(UnderlyingPx_74);
    UnderlyingInstrument_74.insert(UnderlyingPx_74.getString());
    FIX::UnderlyingQty UnderlyingQty_74;
    UnderlyingQty_74.setString("7482928");
    noUnderlyings_0_0.set(UnderlyingQty_74);
    UnderlyingInstrument_74.insert(UnderlyingQty_74.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_74("LOCALMKTDATE_2068911506");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_74);
    UnderlyingInstrument_74.insert(UnderlyingRedemptionDate_74.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_74("STRING_1897069355");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_74);
    UnderlyingInstrument_74.insert(UnderlyingRepoCollateralSecurityType_74.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_74;
    UnderlyingRepurchaseRate_74.setString("61.070000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_74);
    UnderlyingInstrument_74.insert(UnderlyingRepurchaseRate_74.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_74(11827598);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_74);
    UnderlyingInstrument_74.insert(UnderlyingRepurchaseTerm_74.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_74("STRING_205646726");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_74);
    UnderlyingInstrument_74.insert(UnderlyingRestructuringType_74.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_74("STRING_575389854");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_74);
    UnderlyingInstrument_74.insert(UnderlyingSecurityDesc_74.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_74("EXCHANGE_704352032");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_74);
    UnderlyingInstrument_74.insert(UnderlyingSecurityExchange_74.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_74("STRING_800731342");
    noUnderlyings_0_0.set(UnderlyingSecurityID_74);
    UnderlyingInstrument_74.insert(UnderlyingSecurityID_74.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_74("STRING_1887661844");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_74);
    UnderlyingInstrument_74.insert(UnderlyingSecurityIDSource_74.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_74("STRING_1232361668");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_74);
    UnderlyingInstrument_74.insert(UnderlyingSecuritySubType_74.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_74("STRING_1482208599");
    noUnderlyings_0_0.set(UnderlyingSecurityType_74);
    UnderlyingInstrument_74.insert(UnderlyingSecurityType_74.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_74("STRING_982833922");
    noUnderlyings_0_0.set(UnderlyingSeniority_74);
    UnderlyingInstrument_74.insert(UnderlyingSeniority_74.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_74("STRING_668785069");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_74);
    UnderlyingInstrument_74.insert(UnderlyingSettlMethod_74.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_74(2);
    noUnderlyings_0_0.set(UnderlyingSettlementType_74);
    UnderlyingInstrument_74.insert(UnderlyingSettlementType_74.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_74;
    UnderlyingStartValue_74.setString("6370234");
    noUnderlyings_0_0.set(UnderlyingStartValue_74);
    UnderlyingInstrument_74.insert(UnderlyingStartValue_74.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_74("STRING_1758901910");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_74);
    UnderlyingInstrument_74.insert(UnderlyingStateOrProvinceOfIssue_74.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_74("CHF");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_74);
    UnderlyingInstrument_74.insert(UnderlyingStrikeCurrency_74.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_74;
    UnderlyingStrikePrice_74.setString("877760");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_74);
    UnderlyingInstrument_74.insert(UnderlyingStrikePrice_74.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_74("STRING_623007444");
    noUnderlyings_0_0.set(UnderlyingSymbol_74);
    UnderlyingInstrument_74.insert(UnderlyingSymbol_74.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_74("STRING_913951575");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_74);
    UnderlyingInstrument_74.insert(UnderlyingSymbolSfx_74.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_74("STRING_947076135");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_74);
    UnderlyingInstrument_74.insert(UnderlyingTimeUnit_74.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_74("STRING_2066612050");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_74);
    UnderlyingInstrument_74.insert(UnderlyingUnitOfMeasure_74.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_74;
    UnderlyingUnitOfMeasureQty_74.setString("18470017");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_74);
    UnderlyingInstrument_74.insert(UnderlyingUnitOfMeasureQty_74.getString());
    all_values.push_back(UnderlyingInstrument_74);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::NewOrderSingle::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_152;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_152("STRING_942354327");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_152);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_152.insert(UnderlyingSecurityAltID_152.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_152("STRING_1260578467");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_152);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_152.insert(UnderlyingSecurityAltIDSource_152.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_152);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::NewOrderSingle::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_153;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_153("STRING_1373874430");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_153);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_153.insert(UnderlyingSecurityAltID_153.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_153("STRING_1160797584");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_153);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_153.insert(UnderlyingSecurityAltIDSource_153.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_153);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::NewOrderSingle::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_150;
      FIX::UnderlyingStipType UnderlyingStipType_150("STRING_2122167298");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_150);
      UnderlyingStipulations_NoUnderlyingStips_150.insert(UnderlyingStipType_150.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_150("STRING_1082225442");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_150);
      UnderlyingStipulations_NoUnderlyingStips_150.insert(UnderlyingStipValue_150.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_150);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::NewOrderSingle::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_151;
      FIX::UnderlyingStipType UnderlyingStipType_151("STRING_666628240");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_151);
      UnderlyingStipulations_NoUnderlyingStips_151.insert(UnderlyingStipType_151.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_151("STRING_1771929757");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_151);
      UnderlyingStipulations_NoUnderlyingStips_151.insert(UnderlyingStipValue_151.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_151);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::NewOrderSingle::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_140;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_140("STRING_872274966");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_140);
      UndlyInstrumentParties_NoUndlyInstrumentParties_140.insert(UnderlyingInstrumentPartyID_140.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_140('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_140);
      UndlyInstrumentParties_NoUndlyInstrumentParties_140.insert(UnderlyingInstrumentPartyIDSource_140.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_140(1798405072);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_140);
      UndlyInstrumentParties_NoUndlyInstrumentParties_140.insert(UnderlyingInstrumentPartyRole_140.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_140);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderSingle::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_281;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_281("STRING_2087497808");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_281);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_281.insert(UnderlyingInstrumentPartySubID_281.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_281(883283092);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_281);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_281.insert(UnderlyingInstrumentPartySubIDType_281.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_281);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::NewOrderSingle::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_282;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_282("STRING_1007731259");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_282);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_282.insert(UnderlyingInstrumentPartySubID_282.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_282(922848082);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_282);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_282.insert(UnderlyingInstrumentPartySubIDType_282.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_282);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::NewOrderSingle::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_141;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_141("STRING_1552068162");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_141);
      UndlyInstrumentParties_NoUndlyInstrumentParties_141.insert(UnderlyingInstrumentPartyID_141.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_141('1');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_141);
      UndlyInstrumentParties_NoUndlyInstrumentParties_141.insert(UnderlyingInstrumentPartyIDSource_141.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_141(1559871494);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_141);
      UndlyInstrumentParties_NoUndlyInstrumentParties_141.insert(UnderlyingInstrumentPartyRole_141.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_141);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderSingle::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_283;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_283("STRING_2132527620");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_283);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_283.insert(UnderlyingInstrumentPartySubID_283.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_283(802699137);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_283);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_283.insert(UnderlyingInstrumentPartySubIDType_283.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_283);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::NewOrderSingle::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_142;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_142("STRING_1251262492");
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyID_142);
      UndlyInstrumentParties_NoUndlyInstrumentParties_142.insert(UnderlyingInstrumentPartyID_142.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_142('6');
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyIDSource_142);
      UndlyInstrumentParties_NoUndlyInstrumentParties_142.insert(UnderlyingInstrumentPartyIDSource_142.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_142(1716650712);
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyRole_142);
      UndlyInstrumentParties_NoUndlyInstrumentParties_142.insert(UnderlyingInstrumentPartyRole_142.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_142);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderSingle::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_284;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_284("STRING_527179818");
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubID_284);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_284.insert(UnderlyingInstrumentPartySubID_284.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_284(1416168774);
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubIDType_284);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_284.insert(UnderlyingInstrumentPartySubIDType_284.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_284);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::NewOrderSingle::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_75;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_75("DATA_426225592");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_75);
    UnderlyingInstrument_75.insert(EncodedUnderlyingIssuer_75.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_75(1469534145);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_75);
    UnderlyingInstrument_75.insert(EncodedUnderlyingIssuerLen_75.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_75("DATA_529263593");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_75);
    UnderlyingInstrument_75.insert(EncodedUnderlyingSecurityDesc_75.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_75(1800100023);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_75);
    UnderlyingInstrument_75.insert(EncodedUnderlyingSecurityDescLen_75.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_75;
    UnderlyingAdjustedQuantity_75.setString("4828480");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_75);
    UnderlyingInstrument_75.insert(UnderlyingAdjustedQuantity_75.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_75;
    UnderlyingAllocationPercent_75.setString("61.260000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_75);
    UnderlyingInstrument_75.insert(UnderlyingAllocationPercent_75.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_75;
    UnderlyingAttachmentPoint_75.setString("36.730000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_75);
    UnderlyingInstrument_75.insert(UnderlyingAttachmentPoint_75.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_75("STRING_1565073524");
    noUnderlyings_0_1.set(UnderlyingCFICode_75);
    UnderlyingInstrument_75.insert(UnderlyingCFICode_75.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_75("STRING_2112934366");
    noUnderlyings_0_1.set(UnderlyingCPProgram_75);
    UnderlyingInstrument_75.insert(UnderlyingCPProgram_75.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_75("STRING_1399229783");
    noUnderlyings_0_1.set(UnderlyingCPRegType_75);
    UnderlyingInstrument_75.insert(UnderlyingCPRegType_75.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_75;
    UnderlyingCapValue_75.setString("5116429");
    noUnderlyings_0_1.set(UnderlyingCapValue_75);
    UnderlyingInstrument_75.insert(UnderlyingCapValue_75.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_75;
    UnderlyingCashAmount_75.setString("8377256");
    noUnderlyings_0_1.set(UnderlyingCashAmount_75);
    UnderlyingInstrument_75.insert(UnderlyingCashAmount_75.getString());
    FIX::UnderlyingCashType UnderlyingCashType_75("STRING_DIFF");
    noUnderlyings_0_1.set(UnderlyingCashType_75);
    UnderlyingInstrument_75.insert(UnderlyingCashType_75.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_75;
    UnderlyingContractMultiplier_75.setString("1625643");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_75);
    UnderlyingInstrument_75.insert(UnderlyingContractMultiplier_75.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_75(363248344);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_75);
    UnderlyingInstrument_75.insert(UnderlyingContractMultiplierUnit_75.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_75("COUNTRY_1539079907");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_75);
    UnderlyingInstrument_75.insert(UnderlyingCountryOfIssue_75.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_75("LOCALMKTDATE_1045847433");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_75);
    UnderlyingInstrument_75.insert(UnderlyingCouponPaymentDate_75.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_75;
    UnderlyingCouponRate_75.setString("96.030000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_75);
    UnderlyingInstrument_75.insert(UnderlyingCouponRate_75.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_75("STRING_314444341");
    noUnderlyings_0_1.set(UnderlyingCreditRating_75);
    UnderlyingInstrument_75.insert(UnderlyingCreditRating_75.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_75("EUR");
    noUnderlyings_0_1.set(UnderlyingCurrency_75);
    UnderlyingInstrument_75.insert(UnderlyingCurrency_75.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_75;
    UnderlyingCurrentValue_75.setString("18743158");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_75);
    UnderlyingInstrument_75.insert(UnderlyingCurrentValue_75.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_75;
    UnderlyingDetachmentPoint_75.setString("83.720000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_75);
    UnderlyingInstrument_75.insert(UnderlyingDetachmentPoint_75.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_75;
    UnderlyingDirtyPrice_75.setString("5045704");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_75);
    UnderlyingInstrument_75.insert(UnderlyingDirtyPrice_75.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_75;
    UnderlyingEndPrice_75.setString("5295313");
    noUnderlyings_0_1.set(UnderlyingEndPrice_75);
    UnderlyingInstrument_75.insert(UnderlyingEndPrice_75.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_75;
    UnderlyingEndValue_75.setString("7176972");
    noUnderlyings_0_1.set(UnderlyingEndValue_75);
    UnderlyingInstrument_75.insert(UnderlyingEndValue_75.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_75(1112621877);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_75);
    UnderlyingInstrument_75.insert(UnderlyingExerciseStyle_75.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_75;
    UnderlyingFXRate_75.setString("986983");
    noUnderlyings_0_1.set(UnderlyingFXRate_75);
    UnderlyingInstrument_75.insert(UnderlyingFXRate_75.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_75('D');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_75);
    UnderlyingInstrument_75.insert(UnderlyingFXRateCalc_75.getString());
    FIX::UnderlyingFactor UnderlyingFactor_75;
    UnderlyingFactor_75.setString("16398016");
    noUnderlyings_0_1.set(UnderlyingFactor_75);
    UnderlyingInstrument_75.insert(UnderlyingFactor_75.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_75(1514867163);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_75);
    UnderlyingInstrument_75.insert(UnderlyingFlowScheduleType_75.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_75("STRING_1194777789");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_75);
    UnderlyingInstrument_75.insert(UnderlyingInstrRegistry_75.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_75("LOCALMKTDATE_961852192");
    noUnderlyings_0_1.set(UnderlyingIssueDate_75);
    UnderlyingInstrument_75.insert(UnderlyingIssueDate_75.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_75("STRING_2044130756");
    noUnderlyings_0_1.set(UnderlyingIssuer_75);
    UnderlyingInstrument_75.insert(UnderlyingIssuer_75.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_75("STRING_847394164");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_75);
    UnderlyingInstrument_75.insert(UnderlyingLocaleOfIssue_75.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_75("LOCALMKTDATE_1444700274");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_75);
    UnderlyingInstrument_75.insert(UnderlyingMaturityDate_75.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_75("MONTHYEAR_1342953235");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_75);
    UnderlyingInstrument_75.insert(UnderlyingMaturityMonthYear_75.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_75("TZTIMEONLY_474694189");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_75);
    UnderlyingInstrument_75.insert(UnderlyingMaturityTime_75.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_75;
    UnderlyingNotionalPercentageOutstanding_75.setString("1.500000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_75);
    UnderlyingInstrument_75.insert(UnderlyingNotionalPercentageOutstanding_75.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_75('1');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_75);
    UnderlyingInstrument_75.insert(UnderlyingOptAttribute_75.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_75;
    UnderlyingOriginalNotionalPercentageOutstanding_75.setString("39.720000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_75);
    UnderlyingInstrument_75.insert(UnderlyingOriginalNotionalPercentageOutstanding_75.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_75("STRING_1373933066");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_75);
    UnderlyingInstrument_75.insert(UnderlyingPriceUnitOfMeasure_75.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_75;
    UnderlyingPriceUnitOfMeasureQty_75.setString("21461296");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_75);
    UnderlyingInstrument_75.insert(UnderlyingPriceUnitOfMeasureQty_75.getString());
    FIX::UnderlyingProduct UnderlyingProduct_75(1325506071);
    noUnderlyings_0_1.set(UnderlyingProduct_75);
    UnderlyingInstrument_75.insert(UnderlyingProduct_75.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_75(1536497407);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_75);
    UnderlyingInstrument_75.insert(UnderlyingPutOrCall_75.getString());
    FIX::UnderlyingPx UnderlyingPx_75;
    UnderlyingPx_75.setString("3618943");
    noUnderlyings_0_1.set(UnderlyingPx_75);
    UnderlyingInstrument_75.insert(UnderlyingPx_75.getString());
    FIX::UnderlyingQty UnderlyingQty_75;
    UnderlyingQty_75.setString("7171023");
    noUnderlyings_0_1.set(UnderlyingQty_75);
    UnderlyingInstrument_75.insert(UnderlyingQty_75.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_75("LOCALMKTDATE_434861193");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_75);
    UnderlyingInstrument_75.insert(UnderlyingRedemptionDate_75.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_75("STRING_1732873938");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_75);
    UnderlyingInstrument_75.insert(UnderlyingRepoCollateralSecurityType_75.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_75;
    UnderlyingRepurchaseRate_75.setString("66.710000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_75);
    UnderlyingInstrument_75.insert(UnderlyingRepurchaseRate_75.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_75(885293140);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_75);
    UnderlyingInstrument_75.insert(UnderlyingRepurchaseTerm_75.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_75("STRING_104916779");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_75);
    UnderlyingInstrument_75.insert(UnderlyingRestructuringType_75.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_75("STRING_758378858");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_75);
    UnderlyingInstrument_75.insert(UnderlyingSecurityDesc_75.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_75("EXCHANGE_351727864");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_75);
    UnderlyingInstrument_75.insert(UnderlyingSecurityExchange_75.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_75("STRING_609487240");
    noUnderlyings_0_1.set(UnderlyingSecurityID_75);
    UnderlyingInstrument_75.insert(UnderlyingSecurityID_75.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_75("STRING_1287910183");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_75);
    UnderlyingInstrument_75.insert(UnderlyingSecurityIDSource_75.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_75("STRING_1069425081");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_75);
    UnderlyingInstrument_75.insert(UnderlyingSecuritySubType_75.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_75("STRING_1722109117");
    noUnderlyings_0_1.set(UnderlyingSecurityType_75);
    UnderlyingInstrument_75.insert(UnderlyingSecurityType_75.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_75("STRING_1386608572");
    noUnderlyings_0_1.set(UnderlyingSeniority_75);
    UnderlyingInstrument_75.insert(UnderlyingSeniority_75.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_75("STRING_1837977277");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_75);
    UnderlyingInstrument_75.insert(UnderlyingSettlMethod_75.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_75(5);
    noUnderlyings_0_1.set(UnderlyingSettlementType_75);
    UnderlyingInstrument_75.insert(UnderlyingSettlementType_75.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_75;
    UnderlyingStartValue_75.setString("7539920");
    noUnderlyings_0_1.set(UnderlyingStartValue_75);
    UnderlyingInstrument_75.insert(UnderlyingStartValue_75.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_75("STRING_885271418");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_75);
    UnderlyingInstrument_75.insert(UnderlyingStateOrProvinceOfIssue_75.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_75("CAN");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_75);
    UnderlyingInstrument_75.insert(UnderlyingStrikeCurrency_75.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_75;
    UnderlyingStrikePrice_75.setString("17326655");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_75);
    UnderlyingInstrument_75.insert(UnderlyingStrikePrice_75.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_75("STRING_1473495982");
    noUnderlyings_0_1.set(UnderlyingSymbol_75);
    UnderlyingInstrument_75.insert(UnderlyingSymbol_75.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_75("STRING_1993592430");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_75);
    UnderlyingInstrument_75.insert(UnderlyingSymbolSfx_75.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_75("STRING_59876124");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_75);
    UnderlyingInstrument_75.insert(UnderlyingTimeUnit_75.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_75("STRING_188302484");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_75);
    UnderlyingInstrument_75.insert(UnderlyingUnitOfMeasure_75.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_75;
    UnderlyingUnitOfMeasureQty_75.setString("11545127");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_75);
    UnderlyingInstrument_75.insert(UnderlyingUnitOfMeasureQty_75.getString());
    all_values.push_back(UnderlyingInstrument_75);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::NewOrderSingle::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_154;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_154("STRING_1562235551");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_154);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_154.insert(UnderlyingSecurityAltID_154.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_154("STRING_1153158726");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_154);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_154.insert(UnderlyingSecurityAltIDSource_154.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_154);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::NewOrderSingle::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_152;
      FIX::UnderlyingStipType UnderlyingStipType_152("STRING_951249310");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_152);
      UnderlyingStipulations_NoUnderlyingStips_152.insert(UnderlyingStipType_152.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_152("STRING_1515053060");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_152);
      UnderlyingStipulations_NoUnderlyingStips_152.insert(UnderlyingStipValue_152.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_152);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::NewOrderSingle::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_153;
      FIX::UnderlyingStipType UnderlyingStipType_153("STRING_1828924850");
      noUnderlyingStips_1_1_1.set(UnderlyingStipType_153);
      UnderlyingStipulations_NoUnderlyingStips_153.insert(UnderlyingStipType_153.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_153("STRING_1386110503");
      noUnderlyingStips_1_1_1.set(UnderlyingStipValue_153);
      UnderlyingStipulations_NoUnderlyingStips_153.insert(UnderlyingStipValue_153.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_153);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    {
      FIX50SP2::NewOrderSingle::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_154;
      FIX::UnderlyingStipType UnderlyingStipType_154("STRING_1100443350");
      noUnderlyingStips_1_1_2.set(UnderlyingStipType_154);
      UnderlyingStipulations_NoUnderlyingStips_154.insert(UnderlyingStipType_154.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_154("STRING_712987874");
      noUnderlyingStips_1_1_2.set(UnderlyingStipValue_154);
      UnderlyingStipulations_NoUnderlyingStips_154.insert(UnderlyingStipValue_154.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_154);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::NewOrderSingle::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_143;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_143("STRING_1205360129");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_143);
      UndlyInstrumentParties_NoUndlyInstrumentParties_143.insert(UnderlyingInstrumentPartyID_143.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_143('1');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_143);
      UndlyInstrumentParties_NoUndlyInstrumentParties_143.insert(UnderlyingInstrumentPartyIDSource_143.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_143(475647860);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_143);
      UndlyInstrumentParties_NoUndlyInstrumentParties_143.insert(UnderlyingInstrumentPartyRole_143.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_143);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderSingle::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_285;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_285("STRING_611793267");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_285);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_285.insert(UnderlyingInstrumentPartySubID_285.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_285(1545072941);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_285);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_285.insert(UnderlyingInstrumentPartySubIDType_285.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_285);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::NewOrderSingle::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_144;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_144("STRING_1389472838");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_144);
      UndlyInstrumentParties_NoUndlyInstrumentParties_144.insert(UnderlyingInstrumentPartyID_144.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_144('1');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_144);
      UndlyInstrumentParties_NoUndlyInstrumentParties_144.insert(UnderlyingInstrumentPartyIDSource_144.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_144(1235566571);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_144);
      UndlyInstrumentParties_NoUndlyInstrumentParties_144.insert(UnderlyingInstrumentPartyRole_144.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_144);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderSingle::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_286;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_286("STRING_604910278");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_286);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_286.insert(UnderlyingInstrumentPartySubID_286.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_286(2120837989);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_286);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_286.insert(UnderlyingInstrumentPartySubIDType_286.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_286);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::NewOrderSingle::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_287;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_287("STRING_485212063");
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubID_287);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_287.insert(UnderlyingInstrumentPartySubID_287.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_287(1255549474);
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubIDType_287);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_287.insert(UnderlyingInstrumentPartySubIDType_287.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_287);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::NewOrderSingle::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_288;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_288("STRING_1706019924");
        noUndlyInstrumentPartySubIDs_1_1_2_2.set(UnderlyingInstrumentPartySubID_288);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_288.insert(UnderlyingInstrumentPartySubID_288.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_288(1958708045);
        noUndlyInstrumentPartySubIDs_1_1_2_2.set(UnderlyingInstrumentPartySubIDType_288);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_288.insert(UnderlyingInstrumentPartySubIDType_288.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_288);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  // YieldData
  multiset<string> YieldData_14;
  FIX::Yield Yield_14;
  Yield_14.setString("82.560000");
  msg.set(Yield_14);
  YieldData_14.insert(Yield_14.getString());
  FIX::YieldCalcDate YieldCalcDate_14("LOCALMKTDATE_1765896048");
  msg.set(YieldCalcDate_14);
  YieldData_14.insert(YieldCalcDate_14.getString());
  FIX::YieldRedemptionDate YieldRedemptionDate_14("LOCALMKTDATE_2147010530");
  msg.set(YieldRedemptionDate_14);
  YieldData_14.insert(YieldRedemptionDate_14.getString());
  FIX::YieldRedemptionPrice YieldRedemptionPrice_14;
  YieldRedemptionPrice_14.setString("1086873");
  msg.set(YieldRedemptionPrice_14);
  YieldData_14.insert(YieldRedemptionPrice_14.getString());
  FIX::YieldRedemptionPriceType YieldRedemptionPriceType_14(1552212496);
  msg.set(YieldRedemptionPriceType_14);
  YieldData_14.insert(YieldRedemptionPriceType_14.getString());
  FIX::YieldType YieldType_14("STRING_CLOSE");
  msg.set(YieldType_14);
  YieldData_14.insert(YieldType_14.getString());
  all_values.push_back(YieldData_14);
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
