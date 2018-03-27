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
  FIX::Account Account_22("STRING_1998993479");
  msg.set(Account_22);
  NewOrderSingle_0.insert(Account_22.getString());
  FIX::AccountType AccountType_20(4);
  msg.set(AccountType_20);
  NewOrderSingle_0.insert(AccountType_20.getString());
  FIX::AcctIDSource AcctIDSource_15(3);
  msg.set(AcctIDSource_15);
  NewOrderSingle_0.insert(AcctIDSource_15.getString());
  FIX::AllocID AllocID_18("STRING_446956346");
  msg.set(AllocID_18);
  NewOrderSingle_0.insert(AllocID_18.getString());
  FIX::BookingType BookingType_17(0);
  msg.set(BookingType_17);
  NewOrderSingle_0.insert(BookingType_17.getString());
  FIX::BookingUnit BookingUnit_11('2');
  msg.set(BookingUnit_11);
  NewOrderSingle_0.insert(BookingUnit_11.getString());
  FIX::CancellationRights CancellationRights_6('Y');
  msg.set(CancellationRights_6);
  NewOrderSingle_0.insert(CancellationRights_6.getString());
  FIX::CashMargin CashMargin_11('2');
  msg.set(CashMargin_11);
  NewOrderSingle_0.insert(CashMargin_11.getString());
  FIX::ClOrdID ClOrdID_33("STRING_1773678682");
  msg.set(ClOrdID_33);
  NewOrderSingle_0.insert(ClOrdID_33.getString());
  FIX::ClOrdLinkID ClOrdLinkID_13("STRING_1337586954");
  msg.set(ClOrdLinkID_13);
  NewOrderSingle_0.insert(ClOrdLinkID_13.getString());
  FIX::ClearingFeeIndicator ClearingFeeIndicator_16("STRING_9");
  msg.set(ClearingFeeIndicator_16);
  NewOrderSingle_0.insert(ClearingFeeIndicator_16.getString());
  FIX::ComplianceID ComplianceID_10("STRING_1964311979");
  msg.set(ComplianceID_10);
  NewOrderSingle_0.insert(ComplianceID_10.getString());
  FIX::CoveredOrUncovered CoveredOrUncovered_10(0);
  msg.set(CoveredOrUncovered_10);
  NewOrderSingle_0.insert(CoveredOrUncovered_10.getString());
  FIX::Currency Currency_39("GBP");
  msg.set(Currency_39);
  NewOrderSingle_0.insert(Currency_39.getString());
  FIX::CustDirectedOrder CustDirectedOrder_1(false);
  msg.set(CustDirectedOrder_1);
  NewOrderSingle_0.insert(CustDirectedOrder_1.getString());
  FIX::CustOrderCapacity CustOrderCapacity_14(2);
  msg.set(CustOrderCapacity_14);
  NewOrderSingle_0.insert(CustOrderCapacity_14.getString());
  FIX::CustOrderHandlingInst CustOrderHandlingInst_1("MULTIPLESTRINGVALUE_DIR");
  msg.set(CustOrderHandlingInst_1);
  NewOrderSingle_0.insert(CustOrderHandlingInst_1.getString());
  FIX::DayBookingInst DayBookingInst_11('1');
  msg.set(DayBookingInst_11);
  NewOrderSingle_0.insert(DayBookingInst_11.getString());
  FIX::Designation Designation_8("STRING_1669221844");
  msg.set(Designation_8);
  NewOrderSingle_0.insert(Designation_8.getString());
  FIX::EffectiveTime EffectiveTime_8(FIX::UTCTIMESTAMP(15, 15, 19, 26, 102002));
  msg.set(EffectiveTime_8);
  NewOrderSingle_0.insert(EffectiveTime_8.getString());
  FIX::EncodedText EncodedText_58("DATA_2115848121");
  msg.set(EncodedText_58);
  NewOrderSingle_0.insert(EncodedText_58.getString());
  FIX::EncodedTextLen EncodedTextLen_58(496945492);
  msg.set(EncodedTextLen_58);
  NewOrderSingle_0.insert(EncodedTextLen_58.getString());
  FIX::ExDestination ExDestination_7("EXCHANGE_1817718064");
  msg.set(ExDestination_7);
  NewOrderSingle_0.insert(ExDestination_7.getString());
  FIX::ExDestinationIDSource ExDestinationIDSource_7('E');
  msg.set(ExDestinationIDSource_7);
  NewOrderSingle_0.insert(ExDestinationIDSource_7.getString());
  FIX::ExecInst ExecInst_11("MULTIPLECHARVALUE_R");
  msg.set(ExecInst_11);
  NewOrderSingle_0.insert(ExecInst_11.getString());
  FIX::ExpireDate ExpireDate_12("LOCALMKTDATE_51742274");
  msg.set(ExpireDate_12);
  NewOrderSingle_0.insert(ExpireDate_12.getString());
  FIX::ExpireTime ExpireTime_13(FIX::UTCTIMESTAMP(22, 29, 16, 2, 82007));
  msg.set(ExpireTime_13);
  NewOrderSingle_0.insert(ExpireTime_13.getString());
  FIX::ForexReq ForexReq_11(true);
  msg.set(ForexReq_11);
  NewOrderSingle_0.insert(ForexReq_11.getString());
  FIX::GTBookingInst GTBookingInst_8(1);
  msg.set(GTBookingInst_8);
  NewOrderSingle_0.insert(GTBookingInst_8.getString());
  FIX::HandlInst HandlInst_8('2');
  msg.set(HandlInst_8);
  NewOrderSingle_0.insert(HandlInst_8.getString());
  FIX::IOIID IOIID_8("STRING_281659458");
  msg.set(IOIID_8);
  NewOrderSingle_0.insert(IOIID_8.getString());
  FIX::LocateReqd LocateReqd_7(false);
  msg.set(LocateReqd_7);
  NewOrderSingle_0.insert(LocateReqd_7.getString());
  FIX::ManualOrderIndicator ManualOrderIndicator_1(true);
  msg.set(ManualOrderIndicator_1);
  NewOrderSingle_0.insert(ManualOrderIndicator_1.getString());
  FIX::MatchIncrement MatchIncrement_8;
  MatchIncrement_8.setString("6804935");
  msg.set(MatchIncrement_8);
  NewOrderSingle_0.insert(MatchIncrement_8.getString());
  FIX::MaxFloor MaxFloor_8;
  MaxFloor_8.setString("8118893");
  msg.set(MaxFloor_8);
  NewOrderSingle_0.insert(MaxFloor_8.getString());
  FIX::MaxPriceLevels MaxPriceLevels_8(798809023);
  msg.set(MaxPriceLevels_8);
  NewOrderSingle_0.insert(MaxPriceLevels_8.getString());
  FIX::MaxShow MaxShow_8;
  MaxShow_8.setString("12969557");
  msg.set(MaxShow_8);
  NewOrderSingle_0.insert(MaxShow_8.getString());
  FIX::MinQty MinQty_11;
  MinQty_11.setString("3336275");
  msg.set(MinQty_11);
  NewOrderSingle_0.insert(MinQty_11.getString());
  FIX::MoneyLaunderingStatus MoneyLaunderingStatus_6('2');
  msg.set(MoneyLaunderingStatus_6);
  NewOrderSingle_0.insert(MoneyLaunderingStatus_6.getString());
  FIX::OrdType OrdType_44('3');
  msg.set(OrdType_44);
  NewOrderSingle_0.insert(OrdType_44.getString());
  FIX::OrderCapacity OrderCapacity_20('W');
  msg.set(OrderCapacity_20);
  NewOrderSingle_0.insert(OrderCapacity_20.getString());
  FIX::OrderHandlingInstSource OrderHandlingInstSource_1(1);
  msg.set(OrderHandlingInstSource_1);
  NewOrderSingle_0.insert(OrderHandlingInstSource_1.getString());
  FIX::OrderQty2 OrderQty2_7;
  OrderQty2_7.setString("2364625");
  msg.set(OrderQty2_7);
  NewOrderSingle_0.insert(OrderQty2_7.getString());
  FIX::OrderRestrictions OrderRestrictions_17("MULTIPLECHARVALUE_3");
  msg.set(OrderRestrictions_17);
  NewOrderSingle_0.insert(OrderRestrictions_17.getString());
  FIX::ParticipationRate ParticipationRate_8;
  ParticipationRate_8.setString("77.450000");
  msg.set(ParticipationRate_8);
  NewOrderSingle_0.insert(ParticipationRate_8.getString());
  FIX::PositionEffect PositionEffect_14('F');
  msg.set(PositionEffect_14);
  NewOrderSingle_0.insert(PositionEffect_14.getString());
  FIX::PreTradeAnonymity PreTradeAnonymity_11(true);
  msg.set(PreTradeAnonymity_11);
  NewOrderSingle_0.insert(PreTradeAnonymity_11.getString());
  FIX::PreallocMethod PreallocMethod_11('1');
  msg.set(PreallocMethod_11);
  NewOrderSingle_0.insert(PreallocMethod_11.getString());
  FIX::PrevClosePx PrevClosePx_9;
  PrevClosePx_9.setString("11221497");
  msg.set(PrevClosePx_9);
  NewOrderSingle_0.insert(PrevClosePx_9.getString());
  FIX::Price Price_18;
  Price_18.setString("21392482");
  msg.set(Price_18);
  NewOrderSingle_0.insert(Price_18.getString());
  FIX::Price2 Price2_3;
  Price2_3.setString("7672144");
  msg.set(Price2_3);
  NewOrderSingle_0.insert(Price2_3.getString());
  FIX::PriceProtectionScope PriceProtectionScope_8('3');
  msg.set(PriceProtectionScope_8);
  NewOrderSingle_0.insert(PriceProtectionScope_8.getString());
  FIX::PriceType PriceType_30(4);
  msg.set(PriceType_30);
  NewOrderSingle_0.insert(PriceType_30.getString());
  FIX::ProcessCode ProcessCode_13('1');
  msg.set(ProcessCode_13);
  NewOrderSingle_0.insert(ProcessCode_13.getString());
  FIX::QtyType QtyType_23(1);
  msg.set(QtyType_23);
  NewOrderSingle_0.insert(QtyType_23.getString());
  FIX::QuoteID QuoteID_9("STRING_34572443");
  msg.set(QuoteID_9);
  NewOrderSingle_0.insert(QuoteID_9.getString());
  FIX::ReceivedDeptID ReceivedDeptID_1("STRING_1354490248");
  msg.set(ReceivedDeptID_1);
  NewOrderSingle_0.insert(ReceivedDeptID_1.getString());
  FIX::RefOrderID RefOrderID_4("STRING_1405644266");
  msg.set(RefOrderID_4);
  NewOrderSingle_0.insert(RefOrderID_4.getString());
  FIX::RefOrderIDSource RefOrderIDSource_4('1');
  msg.set(RefOrderIDSource_4);
  NewOrderSingle_0.insert(RefOrderIDSource_4.getString());
  FIX::RegistID RegistID_6("STRING_875908284");
  msg.set(RegistID_6);
  NewOrderSingle_0.insert(RegistID_6.getString());
  FIX::SecondaryClOrdID SecondaryClOrdID_31("STRING_141101560");
  msg.set(SecondaryClOrdID_31);
  NewOrderSingle_0.insert(SecondaryClOrdID_31.getString());
  FIX::SettlCurrency SettlCurrency_20("USD");
  msg.set(SettlCurrency_20);
  NewOrderSingle_0.insert(SettlCurrency_20.getString());
  FIX::SettlDate SettlDate_29("LOCALMKTDATE_1103615788");
  msg.set(SettlDate_29);
  NewOrderSingle_0.insert(SettlDate_29.getString());
  FIX::SettlDate2 SettlDate2_7("LOCALMKTDATE_1581708562");
  msg.set(SettlDate2_7);
  NewOrderSingle_0.insert(SettlDate2_7.getString());
  FIX::SettlType SettlType_20("STRING_9");
  msg.set(SettlType_20);
  NewOrderSingle_0.insert(SettlType_20.getString());
  FIX::Side Side_30('D');
  msg.set(Side_30);
  NewOrderSingle_0.insert(Side_30.getString());
  FIX::SolicitedFlag SolicitedFlag_11(false);
  msg.set(SolicitedFlag_11);
  NewOrderSingle_0.insert(SolicitedFlag_11.getString());
  FIX::StopPx StopPx_8;
  StopPx_8.setString("6227678");
  msg.set(StopPx_8);
  NewOrderSingle_0.insert(StopPx_8.getString());
  FIX::TargetStrategy TargetStrategy_8(2);
  msg.set(TargetStrategy_8);
  NewOrderSingle_0.insert(TargetStrategy_8.getString());
  FIX::TargetStrategyParameters TargetStrategyParameters_8("STRING_2069556567");
  msg.set(TargetStrategyParameters_8);
  NewOrderSingle_0.insert(TargetStrategyParameters_8.getString());
  FIX::Text Text_58("STRING_1035232431");
  msg.set(Text_58);
  NewOrderSingle_0.insert(Text_58.getString());
  FIX::TimeInForce TimeInForce_40('0');
  msg.set(TimeInForce_40);
  NewOrderSingle_0.insert(TimeInForce_40.getString());
  FIX::TradeDate TradeDate_25("LOCALMKTDATE_158535499");
  msg.set(TradeDate_25);
  NewOrderSingle_0.insert(TradeDate_25.getString());
  FIX::TradeOriginationDate TradeOriginationDate_17("LOCALMKTDATE_181596255");
  msg.set(TradeOriginationDate_17);
  NewOrderSingle_0.insert(TradeOriginationDate_17.getString());
  FIX::TransactTime TransactTime_35(FIX::UTCTIMESTAMP(9, 39, 28, 13, 42008));
  msg.set(TransactTime_35);
  NewOrderSingle_0.insert(TransactTime_35.getString());
  all_values.push_back(NewOrderSingle_0);

  // CommissionData
  multiset<string> CommissionData_18;
  FIX::CommCurrency CommCurrency_18("JPY");
  msg.set(CommCurrency_18);
  CommissionData_18.insert(CommCurrency_18.getString());
  FIX::CommType CommType_18('3');
  msg.set(CommType_18);
  CommissionData_18.insert(CommType_18.getString());
  FIX::Commission Commission_18;
  Commission_18.setString("7246579");
  msg.set(Commission_18);
  CommissionData_18.insert(Commission_18.getString());
  FIX::FundRenewWaiv FundRenewWaiv_18('N');
  msg.set(FundRenewWaiv_18);
  CommissionData_18.insert(FundRenewWaiv_18.getString());
  all_values.push_back(CommissionData_18);

  // DiscretionInstructions
  multiset<string> DiscretionInstructions_8;
  FIX::DiscretionInst DiscretionInst_8('4');
  msg.set(DiscretionInst_8);
  DiscretionInstructions_8.insert(DiscretionInst_8.getString());
  FIX::DiscretionLimitType DiscretionLimitType_8(1);
  msg.set(DiscretionLimitType_8);
  DiscretionInstructions_8.insert(DiscretionLimitType_8.getString());
  FIX::DiscretionMoveType DiscretionMoveType_8(1);
  msg.set(DiscretionMoveType_8);
  DiscretionInstructions_8.insert(DiscretionMoveType_8.getString());
  FIX::DiscretionOffsetType DiscretionOffsetType_8(1);
  msg.set(DiscretionOffsetType_8);
  DiscretionInstructions_8.insert(DiscretionOffsetType_8.getString());
  FIX::DiscretionOffsetValue DiscretionOffsetValue_8;
  DiscretionOffsetValue_8.setString("1239201");
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
  DisplayHighQty_8.setString("12275359");
  msg.set(DisplayHighQty_8);
  DisplayInstruction_8.insert(DisplayHighQty_8.getString());
  FIX::DisplayLowQty DisplayLowQty_8;
  DisplayLowQty_8.setString("15934143");
  msg.set(DisplayLowQty_8);
  DisplayInstruction_8.insert(DisplayLowQty_8.getString());
  FIX::DisplayMethod DisplayMethod_8('1');
  msg.set(DisplayMethod_8);
  DisplayInstruction_8.insert(DisplayMethod_8.getString());
  FIX::DisplayMinIncr DisplayMinIncr_8;
  DisplayMinIncr_8.setString("9824771");
  msg.set(DisplayMinIncr_8);
  DisplayInstruction_8.insert(DisplayMinIncr_8.getString());
  FIX::DisplayQty DisplayQty_8;
  DisplayQty_8.setString("1771114");
  msg.set(DisplayQty_8);
  DisplayInstruction_8.insert(DisplayQty_8.getString());
  FIX::DisplayWhen DisplayWhen_8('1');
  msg.set(DisplayWhen_8);
  DisplayInstruction_8.insert(DisplayWhen_8.getString());
  FIX::RefreshQty RefreshQty_8;
  RefreshQty_8.setString("13975516");
  msg.set(RefreshQty_8);
  DisplayInstruction_8.insert(RefreshQty_8.getString());
  FIX::SecondaryDisplayQty SecondaryDisplayQty_8;
  SecondaryDisplayQty_8.setString("991843");
  msg.set(SecondaryDisplayQty_8);
  DisplayInstruction_8.insert(SecondaryDisplayQty_8.getString());
  all_values.push_back(DisplayInstruction_8);

  // FinancingDetails
  multiset<string> FinancingDetails_12;
  FIX::AgreementCurrency AgreementCurrency_12("GBP");
  msg.set(AgreementCurrency_12);
  FinancingDetails_12.insert(AgreementCurrency_12.getString());
  FIX::AgreementDate AgreementDate_12("LOCALMKTDATE_257719823");
  msg.set(AgreementDate_12);
  FinancingDetails_12.insert(AgreementDate_12.getString());
  FIX::AgreementDesc AgreementDesc_12("STRING_758139447");
  msg.set(AgreementDesc_12);
  FinancingDetails_12.insert(AgreementDesc_12.getString());
  FIX::AgreementID AgreementID_12("STRING_1529176727");
  msg.set(AgreementID_12);
  FinancingDetails_12.insert(AgreementID_12.getString());
  FIX::DeliveryType DeliveryType_12(0);
  msg.set(DeliveryType_12);
  FinancingDetails_12.insert(DeliveryType_12.getString());
  FIX::EndDate EndDate_12("LOCALMKTDATE_583045019");
  msg.set(EndDate_12);
  FinancingDetails_12.insert(EndDate_12.getString());
  FIX::MarginRatio MarginRatio_12;
  MarginRatio_12.setString("66.680000");
  msg.set(MarginRatio_12);
  FinancingDetails_12.insert(MarginRatio_12.getString());
  FIX::StartDate StartDate_12("LOCALMKTDATE_2106594641");
  msg.set(StartDate_12);
  FinancingDetails_12.insert(StartDate_12.getString());
  FIX::TerminationType TerminationType_12(3);
  msg.set(TerminationType_12);
  FinancingDetails_12.insert(TerminationType_12.getString());
  all_values.push_back(FinancingDetails_12);

  // Instrument
  multiset<string> Instrument_41;
  FIX::AttachmentPoint AttachmentPoint_41;
  AttachmentPoint_41.setString("10.440000");
  msg.set(AttachmentPoint_41);
  Instrument_41.insert(AttachmentPoint_41.getString());
  FIX::CFICode CFICode_41("STRING_344237337");
  msg.set(CFICode_41);
  Instrument_41.insert(CFICode_41.getString());
  FIX::CPProgram CPProgram_41(2);
  msg.set(CPProgram_41);
  Instrument_41.insert(CPProgram_41.getString());
  FIX::CPRegType CPRegType_41("STRING_1825951264");
  msg.set(CPRegType_41);
  Instrument_41.insert(CPRegType_41.getString());
  FIX::CapPrice CapPrice_41;
  CapPrice_41.setString("10688953");
  msg.set(CapPrice_41);
  Instrument_41.insert(CapPrice_41.getString());
  FIX::ContractMultiplier ContractMultiplier_41;
  ContractMultiplier_41.setString("16419807");
  msg.set(ContractMultiplier_41);
  Instrument_41.insert(ContractMultiplier_41.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_41(1);
  msg.set(ContractMultiplierUnit_41);
  Instrument_41.insert(ContractMultiplierUnit_41.getString());
  FIX::ContractSettlMonth ContractSettlMonth_41("MONTHYEAR_1051713954");
  msg.set(ContractSettlMonth_41);
  Instrument_41.insert(ContractSettlMonth_41.getString());
  FIX::CountryOfIssue CountryOfIssue_41("COUNTRY_752471562");
  msg.set(CountryOfIssue_41);
  Instrument_41.insert(CountryOfIssue_41.getString());
  FIX::CouponPaymentDate CouponPaymentDate_41("LOCALMKTDATE_1401829542");
  msg.set(CouponPaymentDate_41);
  Instrument_41.insert(CouponPaymentDate_41.getString());
  FIX::CouponRate CouponRate_41;
  CouponRate_41.setString("41.330000");
  msg.set(CouponRate_41);
  Instrument_41.insert(CouponRate_41.getString());
  FIX::CreditRating CreditRating_41("STRING_764177399");
  msg.set(CreditRating_41);
  Instrument_41.insert(CreditRating_41.getString());
  FIX::DatedDate DatedDate_41("LOCALMKTDATE_31232041");
  msg.set(DatedDate_41);
  Instrument_41.insert(DatedDate_41.getString());
  FIX::DetachmentPoint DetachmentPoint_41;
  DetachmentPoint_41.setString("64.520000");
  msg.set(DetachmentPoint_41);
  Instrument_41.insert(DetachmentPoint_41.getString());
  FIX::EncodedIssuer EncodedIssuer_41("DATA_210108150");
  msg.set(EncodedIssuer_41);
  Instrument_41.insert(EncodedIssuer_41.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_41(1097258557);
  msg.set(EncodedIssuerLen_41);
  Instrument_41.insert(EncodedIssuerLen_41.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_41("DATA_1238163583");
  msg.set(EncodedSecurityDesc_41);
  Instrument_41.insert(EncodedSecurityDesc_41.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_41(387219555);
  msg.set(EncodedSecurityDescLen_41);
  Instrument_41.insert(EncodedSecurityDescLen_41.getString());
  FIX::ExerciseStyle ExerciseStyle_41(0);
  msg.set(ExerciseStyle_41);
  Instrument_41.insert(ExerciseStyle_41.getString());
  FIX::Factor Factor_41;
  Factor_41.setString("4882315");
  msg.set(Factor_41);
  Instrument_41.insert(Factor_41.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_41(true);
  msg.set(FlexProductEligibilityIndicator_41);
  Instrument_41.insert(FlexProductEligibilityIndicator_41.getString());
  FIX::FlexibleIndicator FlexibleIndicator_41(false);
  msg.set(FlexibleIndicator_41);
  Instrument_41.insert(FlexibleIndicator_41.getString());
  FIX::FloorPrice FloorPrice_41;
  FloorPrice_41.setString("14289768");
  msg.set(FloorPrice_41);
  Instrument_41.insert(FloorPrice_41.getString());
  FIX::FlowScheduleType FlowScheduleType_41(1);
  msg.set(FlowScheduleType_41);
  Instrument_41.insert(FlowScheduleType_41.getString());
  FIX::InstrRegistry InstrRegistry_41("STRING_1973251957");
  msg.set(InstrRegistry_41);
  Instrument_41.insert(InstrRegistry_41.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_41('8');
  msg.set(InstrmtAssignmentMethod_41);
  Instrument_41.insert(InstrmtAssignmentMethod_41.getString());
  FIX::InterestAccrualDate InterestAccrualDate_41("LOCALMKTDATE_1365206077");
  msg.set(InterestAccrualDate_41);
  Instrument_41.insert(InterestAccrualDate_41.getString());
  FIX::IssueDate IssueDate_41("LOCALMKTDATE_408813328");
  msg.set(IssueDate_41);
  Instrument_41.insert(IssueDate_41.getString());
  FIX::Issuer Issuer_41("STRING_1496266601");
  msg.set(Issuer_41);
  Instrument_41.insert(Issuer_41.getString());
  FIX::ListMethod ListMethod_41(0);
  msg.set(ListMethod_41);
  Instrument_41.insert(ListMethod_41.getString());
  FIX::LocaleOfIssue LocaleOfIssue_41("STRING_808528558");
  msg.set(LocaleOfIssue_41);
  Instrument_41.insert(LocaleOfIssue_41.getString());
  FIX::MaturityDate MaturityDate_41("LOCALMKTDATE_2105497645");
  msg.set(MaturityDate_41);
  Instrument_41.insert(MaturityDate_41.getString());
  FIX::MaturityMonthYear MaturityMonthYear_41("MONTHYEAR_1668554407");
  msg.set(MaturityMonthYear_41);
  Instrument_41.insert(MaturityMonthYear_41.getString());
  FIX::MaturityTime MaturityTime_41("TZTIMEONLY_1812090308");
  msg.set(MaturityTime_41);
  Instrument_41.insert(MaturityTime_41.getString());
  FIX::MinPriceIncrement MinPriceIncrement_41;
  MinPriceIncrement_41.setString("17839652");
  msg.set(MinPriceIncrement_41);
  Instrument_41.insert(MinPriceIncrement_41.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_41;
  MinPriceIncrementAmount_41.setString("5899660");
  msg.set(MinPriceIncrementAmount_41);
  Instrument_41.insert(MinPriceIncrementAmount_41.getString());
  FIX::NTPositionLimit NTPositionLimit_41(1306587375);
  msg.set(NTPositionLimit_41);
  Instrument_41.insert(NTPositionLimit_41.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_41;
  NotionalPercentageOutstanding_41.setString("96.990000");
  msg.set(NotionalPercentageOutstanding_41);
  Instrument_41.insert(NotionalPercentageOutstanding_41.getString());
  FIX::OptAttribute OptAttribute_41('1');
  msg.set(OptAttribute_41);
  Instrument_41.insert(OptAttribute_41.getString());
  FIX::OptPayoutAmount OptPayoutAmount_41;
  OptPayoutAmount_41.setString("20590589");
  msg.set(OptPayoutAmount_41);
  Instrument_41.insert(OptPayoutAmount_41.getString());
  FIX::OptPayoutType OptPayoutType_41(1);
  msg.set(OptPayoutType_41);
  Instrument_41.insert(OptPayoutType_41.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_41;
  OriginalNotionalPercentageOutstanding_41.setString("5.350000");
  msg.set(OriginalNotionalPercentageOutstanding_41);
  Instrument_41.insert(OriginalNotionalPercentageOutstanding_41.getString());
  FIX::Pool Pool_41("STRING_675752688");
  msg.set(Pool_41);
  Instrument_41.insert(Pool_41.getString());
  FIX::PositionLimit PositionLimit_41(1171737634);
  msg.set(PositionLimit_41);
  Instrument_41.insert(PositionLimit_41.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_41("STRING_PCTPAR");
  msg.set(PriceQuoteMethod_41);
  Instrument_41.insert(PriceQuoteMethod_41.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_41("STRING_885860838");
  msg.set(PriceUnitOfMeasure_41);
  Instrument_41.insert(PriceUnitOfMeasure_41.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_41;
  PriceUnitOfMeasureQty_41.setString("1215125");
  msg.set(PriceUnitOfMeasureQty_41);
  Instrument_41.insert(PriceUnitOfMeasureQty_41.getString());
  FIX::Product Product_43(2);
  msg.set(Product_43);
  Instrument_41.insert(Product_43.getString());
  FIX::ProductComplex ProductComplex_41("STRING_1273080393");
  msg.set(ProductComplex_41);
  Instrument_41.insert(ProductComplex_41.getString());
  FIX::PutOrCall PutOrCall_41(0);
  msg.set(PutOrCall_41);
  Instrument_41.insert(PutOrCall_41.getString());
  FIX::RedemptionDate RedemptionDate_41("LOCALMKTDATE_504428476");
  msg.set(RedemptionDate_41);
  Instrument_41.insert(RedemptionDate_41.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_41("STRING_1759484272");
  msg.set(RepoCollateralSecurityType_41);
  Instrument_41.insert(RepoCollateralSecurityType_41.getString());
  FIX::RepurchaseRate RepurchaseRate_41;
  RepurchaseRate_41.setString("43.700000");
  msg.set(RepurchaseRate_41);
  Instrument_41.insert(RepurchaseRate_41.getString());
  FIX::RepurchaseTerm RepurchaseTerm_41(1933405330);
  msg.set(RepurchaseTerm_41);
  Instrument_41.insert(RepurchaseTerm_41.getString());
  FIX::RestructuringType RestructuringType_41("STRING_MR");
  msg.set(RestructuringType_41);
  Instrument_41.insert(RestructuringType_41.getString());
  FIX::SecurityDesc SecurityDesc_41("STRING_1800962679");
  msg.set(SecurityDesc_41);
  Instrument_41.insert(SecurityDesc_41.getString());
  FIX::SecurityExchange SecurityExchange_41("EXCHANGE_596591615");
  msg.set(SecurityExchange_41);
  Instrument_41.insert(SecurityExchange_41.getString());
  FIX::SecurityGroup SecurityGroup_41("STRING_1721330403");
  msg.set(SecurityGroup_41);
  Instrument_41.insert(SecurityGroup_41.getString());
  FIX::SecurityID SecurityID_41("STRING_62292359");
  msg.set(SecurityID_41);
  Instrument_41.insert(SecurityID_41.getString());
  FIX::SecurityIDSource SecurityIDSource_41("STRING_M");
  msg.set(SecurityIDSource_41);
  Instrument_41.insert(SecurityIDSource_41.getString());
  FIX::SecurityStatus SecurityStatus_41("STRING_2");
  msg.set(SecurityStatus_41);
  Instrument_41.insert(SecurityStatus_41.getString());
  FIX::SecuritySubType SecuritySubType_42("STRING_870820917");
  msg.set(SecuritySubType_42);
  Instrument_41.insert(SecuritySubType_42.getString());
  FIX::SecurityType SecurityType_43("STRING_UST");
  msg.set(SecurityType_43);
  Instrument_41.insert(SecurityType_43.getString());
  FIX::Seniority Seniority_41("STRING_SB");
  msg.set(Seniority_41);
  Instrument_41.insert(Seniority_41.getString());
  FIX::SettlMethod SettlMethod_41('P');
  msg.set(SettlMethod_41);
  Instrument_41.insert(SettlMethod_41.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_41("STRING_1687353828");
  msg.set(SettleOnOpenFlag_41);
  Instrument_41.insert(SettleOnOpenFlag_41.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_41("STRING_1009200681");
  msg.set(StateOrProvinceOfIssue_41);
  Instrument_41.insert(StateOrProvinceOfIssue_41.getString());
  FIX::StrikeCurrency StrikeCurrency_41("CHF");
  msg.set(StrikeCurrency_41);
  Instrument_41.insert(StrikeCurrency_41.getString());
  FIX::StrikeMultiplier StrikeMultiplier_41;
  StrikeMultiplier_41.setString("5033970");
  msg.set(StrikeMultiplier_41);
  Instrument_41.insert(StrikeMultiplier_41.getString());
  FIX::StrikePrice StrikePrice_41;
  StrikePrice_41.setString("17535902");
  msg.set(StrikePrice_41);
  Instrument_41.insert(StrikePrice_41.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_41(5);
  msg.set(StrikePriceBoundaryMethod_41);
  Instrument_41.insert(StrikePriceBoundaryMethod_41.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_41;
  StrikePriceBoundaryPrecision_41.setString("76.190000");
  msg.set(StrikePriceBoundaryPrecision_41);
  Instrument_41.insert(StrikePriceBoundaryPrecision_41.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_41(2);
  msg.set(StrikePriceDeterminationMethod_41);
  Instrument_41.insert(StrikePriceDeterminationMethod_41.getString());
  FIX::StrikeValue StrikeValue_41;
  StrikeValue_41.setString("15907894");
  msg.set(StrikeValue_41);
  Instrument_41.insert(StrikeValue_41.getString());
  FIX::Symbol Symbol_41("STRING_2098744606");
  msg.set(Symbol_41);
  Instrument_41.insert(Symbol_41.getString());
  FIX::SymbolSfx SymbolSfx_41("STRING_CD");
  msg.set(SymbolSfx_41);
  Instrument_41.insert(SymbolSfx_41.getString());
  FIX::TimeUnit TimeUnit_41("STRING_Wk");
  msg.set(TimeUnit_41);
  Instrument_41.insert(TimeUnit_41.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_41(2);
  msg.set(UnderlyingPriceDeterminationMethod_41);
  Instrument_41.insert(UnderlyingPriceDeterminationMethod_41.getString());
  FIX::UnitOfMeasure UnitOfMeasure_41("STRING_tn");
  msg.set(UnitOfMeasure_41);
  Instrument_41.insert(UnitOfMeasure_41.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_41;
  UnitOfMeasureQty_41.setString("3249002");
  msg.set(UnitOfMeasureQty_41);
  Instrument_41.insert(UnitOfMeasureQty_41.getString());
  FIX::ValuationMethod ValuationMethod_41("STRING_FUTDA");
  msg.set(ValuationMethod_41);
  Instrument_41.insert(ValuationMethod_41.getString());
  all_values.push_back(Instrument_41);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::NewOrderSingle::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_82;
    FIX::ComplexEventCondition ComplexEventCondition_82(1);
    noComplexEvents_0_0.set(ComplexEventCondition_82);
    ComplexEvents_NoComplexEvents_82.insert(ComplexEventCondition_82.getString());
    FIX::ComplexEventPrice ComplexEventPrice_82;
    ComplexEventPrice_82.setString("2578080");
    noComplexEvents_0_0.set(ComplexEventPrice_82);
    ComplexEvents_NoComplexEvents_82.insert(ComplexEventPrice_82.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_82(1);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_82);
    ComplexEvents_NoComplexEvents_82.insert(ComplexEventPriceBoundaryMethod_82.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_82;
    ComplexEventPriceBoundaryPrecision_82.setString("36.150000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_82);
    ComplexEvents_NoComplexEvents_82.insert(ComplexEventPriceBoundaryPrecision_82.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_82(3);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_82);
    ComplexEvents_NoComplexEvents_82.insert(ComplexEventPriceTimeType_82.getString());
    FIX::ComplexEventType ComplexEventType_82(3);
    noComplexEvents_0_0.set(ComplexEventType_82);
    ComplexEvents_NoComplexEvents_82.insert(ComplexEventType_82.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_82;
    ComplexOptPayoutAmount_82.setString("20158659");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_82);
    ComplexEvents_NoComplexEvents_82.insert(ComplexOptPayoutAmount_82.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_82);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::NewOrderSingle::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_174;
      FIX::ComplexEventEndDate ComplexEventEndDate_174(FIX::UTCTIMESTAMP(3, 50, 40, 8, 72017));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_174);
      ComplexEventDates_NoComplexEventDates_174.insert(ComplexEventEndDate_174.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_174(FIX::UTCTIMESTAMP(10, 17, 58, 2, 92004));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_174);
      ComplexEventDates_NoComplexEventDates_174.insert(ComplexEventStartDate_174.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_174);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::NewOrderSingle::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_347;
        FIX::ComplexEventEndTime ComplexEventEndTime_347(FIX::UTCTIMEONLY(16, 18, 55));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_347);
        ComplexEventTimes_NoComplexEventTimes_347.insert(ComplexEventEndTime_347.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_347(FIX::UTCTIMEONLY(4, 32, 7));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_347);
        ComplexEventTimes_NoComplexEventTimes_347.insert(ComplexEventStartTime_347.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_347);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::NewOrderSingle::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_175;
      FIX::ComplexEventEndDate ComplexEventEndDate_175(FIX::UTCTIMESTAMP(15, 42, 35, 2, 12005));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_175);
      ComplexEventDates_NoComplexEventDates_175.insert(ComplexEventEndDate_175.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_175(FIX::UTCTIMESTAMP(23, 44, 23, 0, 22000));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_175);
      ComplexEventDates_NoComplexEventDates_175.insert(ComplexEventStartDate_175.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_175);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::NewOrderSingle::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_348;
        FIX::ComplexEventEndTime ComplexEventEndTime_348(FIX::UTCTIMEONLY(8, 30, 32));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_348);
        ComplexEventTimes_NoComplexEventTimes_348.insert(ComplexEventEndTime_348.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_348(FIX::UTCTIMEONLY(14, 12, 47));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_348);
        ComplexEventTimes_NoComplexEventTimes_348.insert(ComplexEventStartTime_348.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_348);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::NewOrderSingle::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_176;
      FIX::ComplexEventEndDate ComplexEventEndDate_176(FIX::UTCTIMESTAMP(20, 58, 40, 18, 32011));
      noComplexEventDates_0_1_2.set(ComplexEventEndDate_176);
      ComplexEventDates_NoComplexEventDates_176.insert(ComplexEventEndDate_176.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_176(FIX::UTCTIMESTAMP(23, 8, 31, 6, 72007));
      noComplexEventDates_0_1_2.set(ComplexEventStartDate_176);
      ComplexEventDates_NoComplexEventDates_176.insert(ComplexEventStartDate_176.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_176);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::NewOrderSingle::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_349;
        FIX::ComplexEventEndTime ComplexEventEndTime_349(FIX::UTCTIMEONLY(22, 56, 15));
        noComplexEventTimes_0_2_2_0.set(ComplexEventEndTime_349);
        ComplexEventTimes_NoComplexEventTimes_349.insert(ComplexEventEndTime_349.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_349(FIX::UTCTIMEONLY(1, 9, 56));
        noComplexEventTimes_0_2_2_0.set(ComplexEventStartTime_349);
        ComplexEventTimes_NoComplexEventTimes_349.insert(ComplexEventStartTime_349.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_349);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      {
        FIX50SP2::NewOrderSingle::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_350;
        FIX::ComplexEventEndTime ComplexEventEndTime_350(FIX::UTCTIMEONLY(17, 26, 32));
        noComplexEventTimes_0_2_2_1.set(ComplexEventEndTime_350);
        ComplexEventTimes_NoComplexEventTimes_350.insert(ComplexEventEndTime_350.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_350(FIX::UTCTIMEONLY(21, 36, 47));
        noComplexEventTimes_0_2_2_1.set(ComplexEventStartTime_350);
        ComplexEventTimes_NoComplexEventTimes_350.insert(ComplexEventStartTime_350.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_350);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_1);
      }
      {
        FIX50SP2::NewOrderSingle::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_351;
        FIX::ComplexEventEndTime ComplexEventEndTime_351(FIX::UTCTIMEONLY(21, 45, 10));
        noComplexEventTimes_0_2_2_2.set(ComplexEventEndTime_351);
        ComplexEventTimes_NoComplexEventTimes_351.insert(ComplexEventEndTime_351.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_351(FIX::UTCTIMEONLY(4, 7, 36));
        noComplexEventTimes_0_2_2_2.set(ComplexEventStartTime_351);
        ComplexEventTimes_NoComplexEventTimes_351.insert(ComplexEventStartTime_351.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_351);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::NewOrderSingle::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_83;
    FIX::ComplexEventCondition ComplexEventCondition_83(2);
    noComplexEvents_0_1.set(ComplexEventCondition_83);
    ComplexEvents_NoComplexEvents_83.insert(ComplexEventCondition_83.getString());
    FIX::ComplexEventPrice ComplexEventPrice_83;
    ComplexEventPrice_83.setString("16992418");
    noComplexEvents_0_1.set(ComplexEventPrice_83);
    ComplexEvents_NoComplexEvents_83.insert(ComplexEventPrice_83.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_83(3);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_83);
    ComplexEvents_NoComplexEvents_83.insert(ComplexEventPriceBoundaryMethod_83.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_83;
    ComplexEventPriceBoundaryPrecision_83.setString("47.490000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_83);
    ComplexEvents_NoComplexEvents_83.insert(ComplexEventPriceBoundaryPrecision_83.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_83(2);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_83);
    ComplexEvents_NoComplexEvents_83.insert(ComplexEventPriceTimeType_83.getString());
    FIX::ComplexEventType ComplexEventType_83(1);
    noComplexEvents_0_1.set(ComplexEventType_83);
    ComplexEvents_NoComplexEvents_83.insert(ComplexEventType_83.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_83;
    ComplexOptPayoutAmount_83.setString("7964352");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_83);
    ComplexEvents_NoComplexEvents_83.insert(ComplexOptPayoutAmount_83.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_83);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::NewOrderSingle::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_177;
      FIX::ComplexEventEndDate ComplexEventEndDate_177(FIX::UTCTIMESTAMP(10, 42, 39, 15, 82017));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_177);
      ComplexEventDates_NoComplexEventDates_177.insert(ComplexEventEndDate_177.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_177(FIX::UTCTIMESTAMP(13, 53, 59, 1, 32011));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_177);
      ComplexEventDates_NoComplexEventDates_177.insert(ComplexEventStartDate_177.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_177);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::NewOrderSingle::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_352;
        FIX::ComplexEventEndTime ComplexEventEndTime_352(FIX::UTCTIMEONLY(12, 14, 11));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_352);
        ComplexEventTimes_NoComplexEventTimes_352.insert(ComplexEventEndTime_352.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_352(FIX::UTCTIMEONLY(18, 10, 19));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_352);
        ComplexEventTimes_NoComplexEventTimes_352.insert(ComplexEventStartTime_352.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_352);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::NewOrderSingle::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_178;
      FIX::ComplexEventEndDate ComplexEventEndDate_178(FIX::UTCTIMESTAMP(2, 18, 14, 9, 52006));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_178);
      ComplexEventDates_NoComplexEventDates_178.insert(ComplexEventEndDate_178.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_178(FIX::UTCTIMESTAMP(13, 46, 45, 20, 22017));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_178);
      ComplexEventDates_NoComplexEventDates_178.insert(ComplexEventStartDate_178.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_178);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::NewOrderSingle::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_353;
        FIX::ComplexEventEndTime ComplexEventEndTime_353(FIX::UTCTIMEONLY(10, 40, 39));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_353);
        ComplexEventTimes_NoComplexEventTimes_353.insert(ComplexEventEndTime_353.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_353(FIX::UTCTIMEONLY(23, 7, 27));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_353);
        ComplexEventTimes_NoComplexEventTimes_353.insert(ComplexEventStartTime_353.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_353);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::NewOrderSingle::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_354;
        FIX::ComplexEventEndTime ComplexEventEndTime_354(FIX::UTCTIMEONLY(7, 41, 14));
        noComplexEventTimes_1_1_2_1.set(ComplexEventEndTime_354);
        ComplexEventTimes_NoComplexEventTimes_354.insert(ComplexEventEndTime_354.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_354(FIX::UTCTIMEONLY(23, 25, 42));
        noComplexEventTimes_1_1_2_1.set(ComplexEventStartTime_354);
        ComplexEventTimes_NoComplexEventTimes_354.insert(ComplexEventStartTime_354.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_354);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      {
        FIX50SP2::NewOrderSingle::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_355;
        FIX::ComplexEventEndTime ComplexEventEndTime_355(FIX::UTCTIMEONLY(19, 1, 43));
        noComplexEventTimes_1_1_2_2.set(ComplexEventEndTime_355);
        ComplexEventTimes_NoComplexEventTimes_355.insert(ComplexEventEndTime_355.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_355(FIX::UTCTIMEONLY(21, 11, 40));
        noComplexEventTimes_1_1_2_2.set(ComplexEventStartTime_355);
        ComplexEventTimes_NoComplexEventTimes_355.insert(ComplexEventStartTime_355.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_355);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    {
      FIX50SP2::NewOrderSingle::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_179;
      FIX::ComplexEventEndDate ComplexEventEndDate_179(FIX::UTCTIMESTAMP(1, 25, 38, 6, 112013));
      noComplexEventDates_1_1_2.set(ComplexEventEndDate_179);
      ComplexEventDates_NoComplexEventDates_179.insert(ComplexEventEndDate_179.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_179(FIX::UTCTIMESTAMP(20, 58, 14, 7, 102003));
      noComplexEventDates_1_1_2.set(ComplexEventStartDate_179);
      ComplexEventDates_NoComplexEventDates_179.insert(ComplexEventStartDate_179.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_179);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::NewOrderSingle::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_356;
        FIX::ComplexEventEndTime ComplexEventEndTime_356(FIX::UTCTIMEONLY(21, 56, 27));
        noComplexEventTimes_1_2_2_0.set(ComplexEventEndTime_356);
        ComplexEventTimes_NoComplexEventTimes_356.insert(ComplexEventEndTime_356.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_356(FIX::UTCTIMEONLY(12, 44, 22));
        noComplexEventTimes_1_2_2_0.set(ComplexEventStartTime_356);
        ComplexEventTimes_NoComplexEventTimes_356.insert(ComplexEventStartTime_356.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_356);

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_2);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::NewOrderSingle::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_84;
    FIX::ComplexEventCondition ComplexEventCondition_84(1);
    noComplexEvents_0_2.set(ComplexEventCondition_84);
    ComplexEvents_NoComplexEvents_84.insert(ComplexEventCondition_84.getString());
    FIX::ComplexEventPrice ComplexEventPrice_84;
    ComplexEventPrice_84.setString("11437422");
    noComplexEvents_0_2.set(ComplexEventPrice_84);
    ComplexEvents_NoComplexEvents_84.insert(ComplexEventPrice_84.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_84(1);
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryMethod_84);
    ComplexEvents_NoComplexEvents_84.insert(ComplexEventPriceBoundaryMethod_84.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_84;
    ComplexEventPriceBoundaryPrecision_84.setString("9.750000");
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryPrecision_84);
    ComplexEvents_NoComplexEvents_84.insert(ComplexEventPriceBoundaryPrecision_84.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_84(3);
    noComplexEvents_0_2.set(ComplexEventPriceTimeType_84);
    ComplexEvents_NoComplexEvents_84.insert(ComplexEventPriceTimeType_84.getString());
    FIX::ComplexEventType ComplexEventType_84(5);
    noComplexEvents_0_2.set(ComplexEventType_84);
    ComplexEvents_NoComplexEvents_84.insert(ComplexEventType_84.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_84;
    ComplexOptPayoutAmount_84.setString("8152989");
    noComplexEvents_0_2.set(ComplexOptPayoutAmount_84);
    ComplexEvents_NoComplexEvents_84.insert(ComplexOptPayoutAmount_84.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_84);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::NewOrderSingle::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_180;
      FIX::ComplexEventEndDate ComplexEventEndDate_180(FIX::UTCTIMESTAMP(19, 53, 58, 2, 52015));
      noComplexEventDates_2_1_0.set(ComplexEventEndDate_180);
      ComplexEventDates_NoComplexEventDates_180.insert(ComplexEventEndDate_180.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_180(FIX::UTCTIMESTAMP(12, 13, 43, 20, 32011));
      noComplexEventDates_2_1_0.set(ComplexEventStartDate_180);
      ComplexEventDates_NoComplexEventDates_180.insert(ComplexEventStartDate_180.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_180);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::NewOrderSingle::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_357;
        FIX::ComplexEventEndTime ComplexEventEndTime_357(FIX::UTCTIMEONLY(2, 27, 46));
        noComplexEventTimes_2_0_2_0.set(ComplexEventEndTime_357);
        ComplexEventTimes_NoComplexEventTimes_357.insert(ComplexEventEndTime_357.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_357(FIX::UTCTIMEONLY(3, 30, 8));
        noComplexEventTimes_2_0_2_0.set(ComplexEventStartTime_357);
        ComplexEventTimes_NoComplexEventTimes_357.insert(ComplexEventStartTime_357.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_357);

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_0);
    }
    msg.addGroup(noComplexEvents_0_2);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::NewOrderSingle::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_84;
    FIX::EventDate EventDate_84("LOCALMKTDATE_898373689");
    noEvents_0_0.set(EventDate_84);
    EvntGrp_NoEvents_84.insert(EventDate_84.getString());
    FIX::EventPx EventPx_84;
    EventPx_84.setString("13306667");
    noEvents_0_0.set(EventPx_84);
    EvntGrp_NoEvents_84.insert(EventPx_84.getString());
    FIX::EventText EventText_84("STRING_344106859");
    noEvents_0_0.set(EventText_84);
    EvntGrp_NoEvents_84.insert(EventText_84.getString());
    FIX::EventTime EventTime_84(FIX::UTCTIMESTAMP(17, 38, 13, 20, 22007));
    noEvents_0_0.set(EventTime_84);
    EvntGrp_NoEvents_84.insert(EventTime_84.getString());
    FIX::EventType EventType_84(7);
    noEvents_0_0.set(EventType_84);
    EvntGrp_NoEvents_84.insert(EventType_84.getString());
    all_values.push_back(EvntGrp_NoEvents_84);

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::NewOrderSingle::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_75;
    FIX::InstrumentPartyID InstrumentPartyID_75("STRING_948473499");
    noInstrumentParties_0_0.set(InstrumentPartyID_75);
    InstrumentParties_NoInstrumentParties_75.insert(InstrumentPartyID_75.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_75('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_75);
    InstrumentParties_NoInstrumentParties_75.insert(InstrumentPartyIDSource_75.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_75(941444228);
    noInstrumentParties_0_0.set(InstrumentPartyRole_75);
    InstrumentParties_NoInstrumentParties_75.insert(InstrumentPartyRole_75.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_75);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::NewOrderSingle::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_150;
      FIX::InstrumentPartySubID InstrumentPartySubID_150("STRING_1965258475");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_150);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_150.insert(InstrumentPartySubID_150.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_150(1072983052);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_150);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_150.insert(InstrumentPartySubIDType_150.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_150);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::NewOrderSingle::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_151;
      FIX::InstrumentPartySubID InstrumentPartySubID_151("STRING_519994163");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_151);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_151.insert(InstrumentPartySubID_151.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_151(393596942);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_151);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_151.insert(InstrumentPartySubIDType_151.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_151);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::NewOrderSingle::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_79;
    FIX::SecurityAltID SecurityAltID_79("STRING_470434734");
    noSecurityAltID_0_0.set(SecurityAltID_79);
    SecAltIDGrp_NoSecurityAltID_79.insert(SecurityAltID_79.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_79("STRING_1958462249");
    noSecurityAltID_0_0.set(SecurityAltIDSource_79);
    SecAltIDGrp_NoSecurityAltID_79.insert(SecurityAltIDSource_79.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_79);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::NewOrderSingle::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_80;
    FIX::SecurityAltID SecurityAltID_80("STRING_43637275");
    noSecurityAltID_0_1.set(SecurityAltID_80);
    SecAltIDGrp_NoSecurityAltID_80.insert(SecurityAltID_80.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_80("STRING_1128516742");
    noSecurityAltID_0_1.set(SecurityAltIDSource_80);
    SecAltIDGrp_NoSecurityAltID_80.insert(SecurityAltIDSource_80.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_80);

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_82;
  FIX::SecurityXML SecurityXML_83("XMLDATA_1086064687");
  msg.set(SecurityXML_83);
  FIX::SecurityXMLLen SecurityXMLLen_41(235676321);
  msg.set(SecurityXMLLen_41);
  FIX::SecurityXMLSchema SecurityXMLSchema_41("STRING_62053673");
  msg.set(SecurityXMLSchema_41);
  SecurityXML_82.insert(SecurityXMLSchema_41.getString());
  all_values.push_back(SecurityXML_82);

  // OrderQtyData
  multiset<string> OrderQtyData_16;
  FIX::CashOrderQty CashOrderQty_16;
  CashOrderQty_16.setString("8406960");
  msg.set(CashOrderQty_16);
  OrderQtyData_16.insert(CashOrderQty_16.getString());
  FIX::OrderPercent OrderPercent_16;
  OrderPercent_16.setString("80.290000");
  msg.set(OrderPercent_16);
  OrderQtyData_16.insert(OrderPercent_16.getString());
  FIX::OrderQty OrderQty_25;
  OrderQty_25.setString("8419632");
  msg.set(OrderQty_25);
  OrderQtyData_16.insert(OrderQty_25.getString());
  FIX::RoundingDirection RoundingDirection_16('0');
  msg.set(RoundingDirection_16);
  OrderQtyData_16.insert(RoundingDirection_16.getString());
  FIX::RoundingModulus RoundingModulus_16;
  RoundingModulus_16.setString("3142510");
  msg.set(RoundingModulus_16);
  OrderQtyData_16.insert(RoundingModulus_16.getString());
  all_values.push_back(OrderQtyData_16);

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::NewOrderSingle::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_78;
    FIX::PartyID PartyID_78("STRING_1418750336");
    noPartyIDs_0_0.set(PartyID_78);
    Parties_NoPartyIDs_78.insert(PartyID_78.getString());
    FIX::PartyIDSource PartyIDSource_78('A');
    noPartyIDs_0_0.set(PartyIDSource_78);
    Parties_NoPartyIDs_78.insert(PartyIDSource_78.getString());
    FIX::PartyRole PartyRole_78(57);
    noPartyIDs_0_0.set(PartyRole_78);
    Parties_NoPartyIDs_78.insert(PartyRole_78.getString());
    all_values.push_back(Parties_NoPartyIDs_78);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::NewOrderSingle::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_153;
      FIX::PartySubID PartySubID_153("STRING_873815451");
      noPartySubIDs_0_1_0.set(PartySubID_153);
      PtysSubGrp_NoPartySubIDs_153.insert(PartySubID_153.getString());
      FIX::PartySubIDType PartySubIDType_153(18);
      noPartySubIDs_0_1_0.set(PartySubIDType_153);
      PtysSubGrp_NoPartySubIDs_153.insert(PartySubIDType_153.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_153);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::NewOrderSingle::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_154;
      FIX::PartySubID PartySubID_154("STRING_460948440");
      noPartySubIDs_0_1_1.set(PartySubID_154);
      PtysSubGrp_NoPartySubIDs_154.insert(PartySubID_154.getString());
      FIX::PartySubIDType PartySubIDType_154(27);
      noPartySubIDs_0_1_1.set(PartySubIDType_154);
      PtysSubGrp_NoPartySubIDs_154.insert(PartySubIDType_154.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_154);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::NewOrderSingle::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_79;
    FIX::PartyID PartyID_79("STRING_715612264");
    noPartyIDs_0_1.set(PartyID_79);
    Parties_NoPartyIDs_79.insert(PartyID_79.getString());
    FIX::PartyIDSource PartyIDSource_79('F');
    noPartyIDs_0_1.set(PartyIDSource_79);
    Parties_NoPartyIDs_79.insert(PartyIDSource_79.getString());
    FIX::PartyRole PartyRole_79(65);
    noPartyIDs_0_1.set(PartyRole_79);
    Parties_NoPartyIDs_79.insert(PartyRole_79.getString());
    all_values.push_back(Parties_NoPartyIDs_79);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::NewOrderSingle::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_155;
      FIX::PartySubID PartySubID_155("STRING_22776579");
      noPartySubIDs_1_1_0.set(PartySubID_155);
      PtysSubGrp_NoPartySubIDs_155.insert(PartySubID_155.getString());
      FIX::PartySubIDType PartySubIDType_155(10);
      noPartySubIDs_1_1_0.set(PartySubIDType_155);
      PtysSubGrp_NoPartySubIDs_155.insert(PartySubIDType_155.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_155);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    msg.addGroup(noPartyIDs_0_1);
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
  PegOffsetValue_8.setString("10386477");
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
  FIX::PegSecurityDesc PegSecurityDesc_8("STRING_2141722219");
  msg.set(PegSecurityDesc_8);
  PegInstructions_8.insert(PegSecurityDesc_8.getString());
  FIX::PegSecurityID PegSecurityID_8("STRING_1742756409");
  msg.set(PegSecurityID_8);
  PegInstructions_8.insert(PegSecurityID_8.getString());
  FIX::PegSecurityIDSource PegSecurityIDSource_8("STRING_1317961341");
  msg.set(PegSecurityIDSource_8);
  PegInstructions_8.insert(PegSecurityIDSource_8.getString());
  FIX::PegSymbol PegSymbol_8("STRING_56292244");
  msg.set(PegSymbol_8);
  PegInstructions_8.insert(PegSymbol_8.getString());
  all_values.push_back(PegInstructions_8);

  // PreAllocGrp
  // Group PreAllocGrp.NoAllocs
  {
    FIX50SP2::NewOrderSingle::NoAllocs noAllocs_0_0;
    // PreAllocGrp.NoAllocs
    multiset<string> PreAllocGrp_NoAllocs_18;
    FIX::AllocAccount AllocAccount_33("STRING_301545723");
    noAllocs_0_0.set(AllocAccount_33);
    PreAllocGrp_NoAllocs_18.insert(AllocAccount_33.getString());
    FIX::AllocAcctIDSource AllocAcctIDSource_33(898255450);
    noAllocs_0_0.set(AllocAcctIDSource_33);
    PreAllocGrp_NoAllocs_18.insert(AllocAcctIDSource_33.getString());
    FIX::AllocQty AllocQty_32;
    AllocQty_32.setString("275549");
    noAllocs_0_0.set(AllocQty_32);
    PreAllocGrp_NoAllocs_18.insert(AllocQty_32.getString());
    FIX::AllocSettlCurrency AllocSettlCurrency_28("CAN");
    noAllocs_0_0.set(AllocSettlCurrency_28);
    PreAllocGrp_NoAllocs_18.insert(AllocSettlCurrency_28.getString());
    FIX::IndividualAllocID IndividualAllocID_33("STRING_1446305316");
    noAllocs_0_0.set(IndividualAllocID_33);
    PreAllocGrp_NoAllocs_18.insert(IndividualAllocID_33.getString());
    all_values.push_back(PreAllocGrp_NoAllocs_18);

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::NewOrderSingle::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_83;
      FIX::NestedPartyID NestedPartyID_83("STRING_134834122");
      noNestedPartyIDs_0_1_0.set(NestedPartyID_83);
      NestedParties_NoNestedPartyIDs_83.insert(NestedPartyID_83.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_83('2');
      noNestedPartyIDs_0_1_0.set(NestedPartyIDSource_83);
      NestedParties_NoNestedPartyIDs_83.insert(NestedPartyIDSource_83.getString());
      FIX::NestedPartyRole NestedPartyRole_83(576946994);
      noNestedPartyIDs_0_1_0.set(NestedPartyRole_83);
      NestedParties_NoNestedPartyIDs_83.insert(NestedPartyRole_83.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_83);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::NewOrderSingle::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_159;
        FIX::NestedPartySubID NestedPartySubID_159("STRING_324124530");
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubID_159);
        NstdPtysSubGrp_NoNestedPartySubIDs_159.insert(NestedPartySubID_159.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_159(134767643);
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubIDType_159);
        NstdPtysSubGrp_NoNestedPartySubIDs_159.insert(NestedPartySubIDType_159.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_159);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::NewOrderSingle::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_84;
      FIX::NestedPartyID NestedPartyID_84("STRING_1769178778");
      noNestedPartyIDs_0_1_1.set(NestedPartyID_84);
      NestedParties_NoNestedPartyIDs_84.insert(NestedPartyID_84.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_84('1');
      noNestedPartyIDs_0_1_1.set(NestedPartyIDSource_84);
      NestedParties_NoNestedPartyIDs_84.insert(NestedPartyIDSource_84.getString());
      FIX::NestedPartyRole NestedPartyRole_84(769108995);
      noNestedPartyIDs_0_1_1.set(NestedPartyRole_84);
      NestedParties_NoNestedPartyIDs_84.insert(NestedPartyRole_84.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_84);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::NewOrderSingle::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_160;
        FIX::NestedPartySubID NestedPartySubID_160("STRING_1756323049");
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubID_160);
        NstdPtysSubGrp_NoNestedPartySubIDs_160.insert(NestedPartySubID_160.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_160(1221225174);
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubIDType_160);
        NstdPtysSubGrp_NoNestedPartySubIDs_160.insert(NestedPartySubIDType_160.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_160);

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_1);
    }
    msg.addGroup(noAllocs_0_0);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_19;
  FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_19("EUR");
  msg.set(BenchmarkCurveCurrency_19);
  SpreadOrBenchmarkCurveData_19.insert(BenchmarkCurveCurrency_19.getString());
  FIX::BenchmarkCurveName BenchmarkCurveName_19("STRING_Treasury");
  msg.set(BenchmarkCurveName_19);
  SpreadOrBenchmarkCurveData_19.insert(BenchmarkCurveName_19.getString());
  FIX::BenchmarkCurvePoint BenchmarkCurvePoint_19("STRING_752471617");
  msg.set(BenchmarkCurvePoint_19);
  SpreadOrBenchmarkCurveData_19.insert(BenchmarkCurvePoint_19.getString());
  FIX::BenchmarkPrice BenchmarkPrice_19;
  BenchmarkPrice_19.setString("11648156");
  msg.set(BenchmarkPrice_19);
  SpreadOrBenchmarkCurveData_19.insert(BenchmarkPrice_19.getString());
  FIX::BenchmarkPriceType BenchmarkPriceType_19(576146369);
  msg.set(BenchmarkPriceType_19);
  SpreadOrBenchmarkCurveData_19.insert(BenchmarkPriceType_19.getString());
  FIX::BenchmarkSecurityID BenchmarkSecurityID_19("STRING_1834756637");
  msg.set(BenchmarkSecurityID_19);
  SpreadOrBenchmarkCurveData_19.insert(BenchmarkSecurityID_19.getString());
  FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_19("STRING_1159054191");
  msg.set(BenchmarkSecurityIDSource_19);
  SpreadOrBenchmarkCurveData_19.insert(BenchmarkSecurityIDSource_19.getString());
  FIX::Spread Spread_19;
  Spread_19.setString("1714191");
  msg.set(Spread_19);
  SpreadOrBenchmarkCurveData_19.insert(Spread_19.getString());
  all_values.push_back(SpreadOrBenchmarkCurveData_19);

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::NewOrderSingle::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_33;
    FIX::StipulationType StipulationType_33("STRING_RESTRICTED");
    noStipulations_0_0.set(StipulationType_33);
    Stipulations_NoStipulations_33.insert(StipulationType_33.getString());
    FIX::StipulationValue StipulationValue_33("STRING_607387980");
    noStipulations_0_0.set(StipulationValue_33);
    Stipulations_NoStipulations_33.insert(StipulationValue_33.getString());
    all_values.push_back(Stipulations_NoStipulations_33);

    msg.addGroup(noStipulations_0_0);
  }
  {
    FIX50SP2::NewOrderSingle::NoStipulations noStipulations_0_1;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_34;
    FIX::StipulationType StipulationType_34("STRING_ROLLTYPE");
    noStipulations_0_1.set(StipulationType_34);
    Stipulations_NoStipulations_34.insert(StipulationType_34.getString());
    FIX::StipulationValue StipulationValue_34("STRING_2113601886");
    noStipulations_0_1.set(StipulationValue_34);
    Stipulations_NoStipulations_34.insert(StipulationValue_34.getString());
    all_values.push_back(Stipulations_NoStipulations_34);

    msg.addGroup(noStipulations_0_1);
  }
  // StrategyParametersGrp
  // Group StrategyParametersGrp.NoStrategyParameters
  {
    FIX50SP2::NewOrderSingle::NoStrategyParameters noStrategyParameters_0_0;
    // StrategyParametersGrp.NoStrategyParameters
    multiset<string> StrategyParametersGrp_NoStrategyParameters_20;
    FIX::StrategyParameterName StrategyParameterName_20("STRING_1922576862");
    noStrategyParameters_0_0.set(StrategyParameterName_20);
    StrategyParametersGrp_NoStrategyParameters_20.insert(StrategyParameterName_20.getString());
    FIX::StrategyParameterType StrategyParameterType_20(1);
    noStrategyParameters_0_0.set(StrategyParameterType_20);
    StrategyParametersGrp_NoStrategyParameters_20.insert(StrategyParameterType_20.getString());
    FIX::StrategyParameterValue StrategyParameterValue_20("STRING_2081248277");
    noStrategyParameters_0_0.set(StrategyParameterValue_20);
    StrategyParametersGrp_NoStrategyParameters_20.insert(StrategyParameterValue_20.getString());
    all_values.push_back(StrategyParametersGrp_NoStrategyParameters_20);

    msg.addGroup(noStrategyParameters_0_0);
  }
  {
    FIX50SP2::NewOrderSingle::NoStrategyParameters noStrategyParameters_0_1;
    // StrategyParametersGrp.NoStrategyParameters
    multiset<string> StrategyParametersGrp_NoStrategyParameters_21;
    FIX::StrategyParameterName StrategyParameterName_21("STRING_1625708405");
    noStrategyParameters_0_1.set(StrategyParameterName_21);
    StrategyParametersGrp_NoStrategyParameters_21.insert(StrategyParameterName_21.getString());
    FIX::StrategyParameterType StrategyParameterType_21(7);
    noStrategyParameters_0_1.set(StrategyParameterType_21);
    StrategyParametersGrp_NoStrategyParameters_21.insert(StrategyParameterType_21.getString());
    FIX::StrategyParameterValue StrategyParameterValue_21("STRING_1944424367");
    noStrategyParameters_0_1.set(StrategyParameterValue_21);
    StrategyParametersGrp_NoStrategyParameters_21.insert(StrategyParameterValue_21.getString());
    all_values.push_back(StrategyParametersGrp_NoStrategyParameters_21);

    msg.addGroup(noStrategyParameters_0_1);
  }
  // TrdRegTimestamps
  // Group TrdRegTimestamps.NoTrdRegTimestamps
  {
    FIX50SP2::NewOrderSingle::NoTrdRegTimestamps noTrdRegTimestamps_0_0;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_15;
    FIX::DeskOrderHandlingInst DeskOrderHandlingInst_15("MULTIPLESTRINGVALUE_FOK");
    noTrdRegTimestamps_0_0.set(DeskOrderHandlingInst_15);
    TrdRegTimestamps_NoTrdRegTimestamps_15.insert(DeskOrderHandlingInst_15.getString());
    FIX::DeskType DeskType_15("STRING_PT");
    noTrdRegTimestamps_0_0.set(DeskType_15);
    TrdRegTimestamps_NoTrdRegTimestamps_15.insert(DeskType_15.getString());
    FIX::DeskTypeSource DeskTypeSource_15(1);
    noTrdRegTimestamps_0_0.set(DeskTypeSource_15);
    TrdRegTimestamps_NoTrdRegTimestamps_15.insert(DeskTypeSource_15.getString());
    FIX::TrdRegTimestamp TrdRegTimestamp_15(FIX::UTCTIMESTAMP(7, 50, 35, 12, 12002));
    noTrdRegTimestamps_0_0.set(TrdRegTimestamp_15);
    TrdRegTimestamps_NoTrdRegTimestamps_15.insert(TrdRegTimestamp_15.getString());
    FIX::TrdRegTimestampOrigin TrdRegTimestampOrigin_15("STRING_1615061264");
    noTrdRegTimestamps_0_0.set(TrdRegTimestampOrigin_15);
    TrdRegTimestamps_NoTrdRegTimestamps_15.insert(TrdRegTimestampOrigin_15.getString());
    FIX::TrdRegTimestampType TrdRegTimestampType_15(1);
    noTrdRegTimestamps_0_0.set(TrdRegTimestampType_15);
    TrdRegTimestamps_NoTrdRegTimestamps_15.insert(TrdRegTimestampType_15.getString());
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_15);

    msg.addGroup(noTrdRegTimestamps_0_0);
  }
  {
    FIX50SP2::NewOrderSingle::NoTrdRegTimestamps noTrdRegTimestamps_0_1;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_16;
    FIX::DeskOrderHandlingInst DeskOrderHandlingInst_16("MULTIPLESTRINGVALUE_IOC");
    noTrdRegTimestamps_0_1.set(DeskOrderHandlingInst_16);
    TrdRegTimestamps_NoTrdRegTimestamps_16.insert(DeskOrderHandlingInst_16.getString());
    FIX::DeskType DeskType_16("STRING_D");
    noTrdRegTimestamps_0_1.set(DeskType_16);
    TrdRegTimestamps_NoTrdRegTimestamps_16.insert(DeskType_16.getString());
    FIX::DeskTypeSource DeskTypeSource_16(1);
    noTrdRegTimestamps_0_1.set(DeskTypeSource_16);
    TrdRegTimestamps_NoTrdRegTimestamps_16.insert(DeskTypeSource_16.getString());
    FIX::TrdRegTimestamp TrdRegTimestamp_16(FIX::UTCTIMESTAMP(20, 2, 36, 16, 32008));
    noTrdRegTimestamps_0_1.set(TrdRegTimestamp_16);
    TrdRegTimestamps_NoTrdRegTimestamps_16.insert(TrdRegTimestamp_16.getString());
    FIX::TrdRegTimestampOrigin TrdRegTimestampOrigin_16("STRING_825428454");
    noTrdRegTimestamps_0_1.set(TrdRegTimestampOrigin_16);
    TrdRegTimestamps_NoTrdRegTimestamps_16.insert(TrdRegTimestampOrigin_16.getString());
    FIX::TrdRegTimestampType TrdRegTimestampType_16(5);
    noTrdRegTimestamps_0_1.set(TrdRegTimestampType_16);
    TrdRegTimestamps_NoTrdRegTimestamps_16.insert(TrdRegTimestampType_16.getString());
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_16);

    msg.addGroup(noTrdRegTimestamps_0_1);
  }
  {
    FIX50SP2::NewOrderSingle::NoTrdRegTimestamps noTrdRegTimestamps_0_2;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_17;
    FIX::DeskOrderHandlingInst DeskOrderHandlingInst_17("MULTIPLESTRINGVALUE_SCL");
    noTrdRegTimestamps_0_2.set(DeskOrderHandlingInst_17);
    TrdRegTimestamps_NoTrdRegTimestamps_17.insert(DeskOrderHandlingInst_17.getString());
    FIX::DeskType DeskType_17("STRING_PT");
    noTrdRegTimestamps_0_2.set(DeskType_17);
    TrdRegTimestamps_NoTrdRegTimestamps_17.insert(DeskType_17.getString());
    FIX::DeskTypeSource DeskTypeSource_17(1);
    noTrdRegTimestamps_0_2.set(DeskTypeSource_17);
    TrdRegTimestamps_NoTrdRegTimestamps_17.insert(DeskTypeSource_17.getString());
    FIX::TrdRegTimestamp TrdRegTimestamp_17(FIX::UTCTIMESTAMP(18, 30, 53, 7, 52010));
    noTrdRegTimestamps_0_2.set(TrdRegTimestamp_17);
    TrdRegTimestamps_NoTrdRegTimestamps_17.insert(TrdRegTimestamp_17.getString());
    FIX::TrdRegTimestampOrigin TrdRegTimestampOrigin_17("STRING_423115751");
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
    FIX50SP2::NewOrderSingle::NoTradingSessions noTradingSessions_0_0;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_16;
    FIX::TradingSessionID TradingSessionID_47("STRING_3");
    noTradingSessions_0_0.set(TradingSessionID_47);
    TrdgSesGrp_NoTradingSessions_16.insert(TradingSessionID_47.getString());
    FIX::TradingSessionSubID TradingSessionSubID_47("STRING_3");
    noTradingSessions_0_0.set(TradingSessionSubID_47);
    TrdgSesGrp_NoTradingSessions_16.insert(TradingSessionSubID_47.getString());
    all_values.push_back(TrdgSesGrp_NoTradingSessions_16);

    msg.addGroup(noTradingSessions_0_0);
  }
  {
    FIX50SP2::NewOrderSingle::NoTradingSessions noTradingSessions_0_1;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_17;
    FIX::TradingSessionID TradingSessionID_48("STRING_5");
    noTradingSessions_0_1.set(TradingSessionID_48);
    TrdgSesGrp_NoTradingSessions_17.insert(TradingSessionID_48.getString());
    FIX::TradingSessionSubID TradingSessionSubID_48("STRING_6");
    noTradingSessions_0_1.set(TradingSessionSubID_48);
    TrdgSesGrp_NoTradingSessions_17.insert(TradingSessionSubID_48.getString());
    all_values.push_back(TrdgSesGrp_NoTradingSessions_17);

    msg.addGroup(noTradingSessions_0_1);
  }
  // TriggeringInstruction
  multiset<string> TriggeringInstruction_8;
  FIX::TriggerAction TriggerAction_8('3');
  msg.set(TriggerAction_8);
  TriggeringInstruction_8.insert(TriggerAction_8.getString());
  FIX::TriggerNewPrice TriggerNewPrice_8;
  TriggerNewPrice_8.setString("6049350");
  msg.set(TriggerNewPrice_8);
  TriggeringInstruction_8.insert(TriggerNewPrice_8.getString());
  FIX::TriggerNewQty TriggerNewQty_8;
  TriggerNewQty_8.setString("1362066");
  msg.set(TriggerNewQty_8);
  TriggeringInstruction_8.insert(TriggerNewQty_8.getString());
  FIX::TriggerOrderType TriggerOrderType_8('1');
  msg.set(TriggerOrderType_8);
  TriggeringInstruction_8.insert(TriggerOrderType_8.getString());
  FIX::TriggerPrice TriggerPrice_8;
  TriggerPrice_8.setString("11333259");
  msg.set(TriggerPrice_8);
  TriggeringInstruction_8.insert(TriggerPrice_8.getString());
  FIX::TriggerPriceDirection TriggerPriceDirection_8('D');
  msg.set(TriggerPriceDirection_8);
  TriggeringInstruction_8.insert(TriggerPriceDirection_8.getString());
  FIX::TriggerPriceType TriggerPriceType_8('1');
  msg.set(TriggerPriceType_8);
  TriggeringInstruction_8.insert(TriggerPriceType_8.getString());
  FIX::TriggerPriceTypeScope TriggerPriceTypeScope_8('3');
  msg.set(TriggerPriceTypeScope_8);
  TriggeringInstruction_8.insert(TriggerPriceTypeScope_8.getString());
  FIX::TriggerSecurityDesc TriggerSecurityDesc_8("STRING_1137225633");
  msg.set(TriggerSecurityDesc_8);
  TriggeringInstruction_8.insert(TriggerSecurityDesc_8.getString());
  FIX::TriggerSecurityID TriggerSecurityID_8("STRING_1420251992");
  msg.set(TriggerSecurityID_8);
  TriggeringInstruction_8.insert(TriggerSecurityID_8.getString());
  FIX::TriggerSecurityIDSource TriggerSecurityIDSource_8("STRING_992850437");
  msg.set(TriggerSecurityIDSource_8);
  TriggeringInstruction_8.insert(TriggerSecurityIDSource_8.getString());
  FIX::TriggerSymbol TriggerSymbol_8("STRING_1299648695");
  msg.set(TriggerSymbol_8);
  TriggeringInstruction_8.insert(TriggerSymbol_8.getString());
  FIX::TriggerTradingSessionID TriggerTradingSessionID_8("STRING_98196798");
  msg.set(TriggerTradingSessionID_8);
  TriggeringInstruction_8.insert(TriggerTradingSessionID_8.getString());
  FIX::TriggerTradingSessionSubID TriggerTradingSessionSubID_8("STRING_787507792");
  msg.set(TriggerTradingSessionSubID_8);
  TriggeringInstruction_8.insert(TriggerTradingSessionSubID_8.getString());
  FIX::TriggerType TriggerType_8('1');
  msg.set(TriggerType_8);
  TriggeringInstruction_8.insert(TriggerType_8.getString());
  all_values.push_back(TriggeringInstruction_8);

  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::NewOrderSingle::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_66;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_66("DATA_515929775");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_66);
    UnderlyingInstrument_66.insert(EncodedUnderlyingIssuer_66.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_66(652906006);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_66);
    UnderlyingInstrument_66.insert(EncodedUnderlyingIssuerLen_66.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_66("DATA_1592768143");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_66);
    UnderlyingInstrument_66.insert(EncodedUnderlyingSecurityDesc_66.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_66(41292478);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_66);
    UnderlyingInstrument_66.insert(EncodedUnderlyingSecurityDescLen_66.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_66;
    UnderlyingAdjustedQuantity_66.setString("1238187");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_66);
    UnderlyingInstrument_66.insert(UnderlyingAdjustedQuantity_66.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_66;
    UnderlyingAllocationPercent_66.setString("80.230000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_66);
    UnderlyingInstrument_66.insert(UnderlyingAllocationPercent_66.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_66;
    UnderlyingAttachmentPoint_66.setString("40.780000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_66);
    UnderlyingInstrument_66.insert(UnderlyingAttachmentPoint_66.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_66("STRING_1932154620");
    noUnderlyings_0_0.set(UnderlyingCFICode_66);
    UnderlyingInstrument_66.insert(UnderlyingCFICode_66.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_66("STRING_1725943774");
    noUnderlyings_0_0.set(UnderlyingCPProgram_66);
    UnderlyingInstrument_66.insert(UnderlyingCPProgram_66.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_66("STRING_1188760101");
    noUnderlyings_0_0.set(UnderlyingCPRegType_66);
    UnderlyingInstrument_66.insert(UnderlyingCPRegType_66.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_66;
    UnderlyingCapValue_66.setString("4045715");
    noUnderlyings_0_0.set(UnderlyingCapValue_66);
    UnderlyingInstrument_66.insert(UnderlyingCapValue_66.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_66;
    UnderlyingCashAmount_66.setString("19933833");
    noUnderlyings_0_0.set(UnderlyingCashAmount_66);
    UnderlyingInstrument_66.insert(UnderlyingCashAmount_66.getString());
    FIX::UnderlyingCashType UnderlyingCashType_66("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_66);
    UnderlyingInstrument_66.insert(UnderlyingCashType_66.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_66;
    UnderlyingContractMultiplier_66.setString("10572620");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_66);
    UnderlyingInstrument_66.insert(UnderlyingContractMultiplier_66.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_66(1818970690);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_66);
    UnderlyingInstrument_66.insert(UnderlyingContractMultiplierUnit_66.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_66("COUNTRY_142868357");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_66);
    UnderlyingInstrument_66.insert(UnderlyingCountryOfIssue_66.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_66("LOCALMKTDATE_1662197078");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_66);
    UnderlyingInstrument_66.insert(UnderlyingCouponPaymentDate_66.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_66;
    UnderlyingCouponRate_66.setString("73.420000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_66);
    UnderlyingInstrument_66.insert(UnderlyingCouponRate_66.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_66("STRING_1059846354");
    noUnderlyings_0_0.set(UnderlyingCreditRating_66);
    UnderlyingInstrument_66.insert(UnderlyingCreditRating_66.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_66("USD");
    noUnderlyings_0_0.set(UnderlyingCurrency_66);
    UnderlyingInstrument_66.insert(UnderlyingCurrency_66.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_66;
    UnderlyingCurrentValue_66.setString("16207881");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_66);
    UnderlyingInstrument_66.insert(UnderlyingCurrentValue_66.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_66;
    UnderlyingDetachmentPoint_66.setString("18.070000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_66);
    UnderlyingInstrument_66.insert(UnderlyingDetachmentPoint_66.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_66;
    UnderlyingDirtyPrice_66.setString("10790183");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_66);
    UnderlyingInstrument_66.insert(UnderlyingDirtyPrice_66.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_66;
    UnderlyingEndPrice_66.setString("8935564");
    noUnderlyings_0_0.set(UnderlyingEndPrice_66);
    UnderlyingInstrument_66.insert(UnderlyingEndPrice_66.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_66;
    UnderlyingEndValue_66.setString("13265422");
    noUnderlyings_0_0.set(UnderlyingEndValue_66);
    UnderlyingInstrument_66.insert(UnderlyingEndValue_66.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_66(231183353);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_66);
    UnderlyingInstrument_66.insert(UnderlyingExerciseStyle_66.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_66;
    UnderlyingFXRate_66.setString("9917532");
    noUnderlyings_0_0.set(UnderlyingFXRate_66);
    UnderlyingInstrument_66.insert(UnderlyingFXRate_66.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_66('M');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_66);
    UnderlyingInstrument_66.insert(UnderlyingFXRateCalc_66.getString());
    FIX::UnderlyingFactor UnderlyingFactor_66;
    UnderlyingFactor_66.setString("14683483");
    noUnderlyings_0_0.set(UnderlyingFactor_66);
    UnderlyingInstrument_66.insert(UnderlyingFactor_66.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_66(1818338631);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_66);
    UnderlyingInstrument_66.insert(UnderlyingFlowScheduleType_66.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_66("STRING_482496164");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_66);
    UnderlyingInstrument_66.insert(UnderlyingInstrRegistry_66.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_66("LOCALMKTDATE_2121254331");
    noUnderlyings_0_0.set(UnderlyingIssueDate_66);
    UnderlyingInstrument_66.insert(UnderlyingIssueDate_66.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_66("STRING_1263623126");
    noUnderlyings_0_0.set(UnderlyingIssuer_66);
    UnderlyingInstrument_66.insert(UnderlyingIssuer_66.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_66("STRING_523788642");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_66);
    UnderlyingInstrument_66.insert(UnderlyingLocaleOfIssue_66.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_66("LOCALMKTDATE_97589474");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_66);
    UnderlyingInstrument_66.insert(UnderlyingMaturityDate_66.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_66("MONTHYEAR_418967501");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_66);
    UnderlyingInstrument_66.insert(UnderlyingMaturityMonthYear_66.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_66("TZTIMEONLY_211509072");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_66);
    UnderlyingInstrument_66.insert(UnderlyingMaturityTime_66.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_66;
    UnderlyingNotionalPercentageOutstanding_66.setString("40.940000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_66);
    UnderlyingInstrument_66.insert(UnderlyingNotionalPercentageOutstanding_66.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_66('2');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_66);
    UnderlyingInstrument_66.insert(UnderlyingOptAttribute_66.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_66;
    UnderlyingOriginalNotionalPercentageOutstanding_66.setString("91.740000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_66);
    UnderlyingInstrument_66.insert(UnderlyingOriginalNotionalPercentageOutstanding_66.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_66("STRING_286831989");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_66);
    UnderlyingInstrument_66.insert(UnderlyingPriceUnitOfMeasure_66.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_66;
    UnderlyingPriceUnitOfMeasureQty_66.setString("19908110");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_66);
    UnderlyingInstrument_66.insert(UnderlyingPriceUnitOfMeasureQty_66.getString());
    FIX::UnderlyingProduct UnderlyingProduct_66(1258552771);
    noUnderlyings_0_0.set(UnderlyingProduct_66);
    UnderlyingInstrument_66.insert(UnderlyingProduct_66.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_66(1344094018);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_66);
    UnderlyingInstrument_66.insert(UnderlyingPutOrCall_66.getString());
    FIX::UnderlyingPx UnderlyingPx_66;
    UnderlyingPx_66.setString("16622980");
    noUnderlyings_0_0.set(UnderlyingPx_66);
    UnderlyingInstrument_66.insert(UnderlyingPx_66.getString());
    FIX::UnderlyingQty UnderlyingQty_66;
    UnderlyingQty_66.setString("14014211");
    noUnderlyings_0_0.set(UnderlyingQty_66);
    UnderlyingInstrument_66.insert(UnderlyingQty_66.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_66("LOCALMKTDATE_858807448");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_66);
    UnderlyingInstrument_66.insert(UnderlyingRedemptionDate_66.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_66("STRING_1469991737");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_66);
    UnderlyingInstrument_66.insert(UnderlyingRepoCollateralSecurityType_66.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_66;
    UnderlyingRepurchaseRate_66.setString("38.350000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_66);
    UnderlyingInstrument_66.insert(UnderlyingRepurchaseRate_66.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_66(1506846860);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_66);
    UnderlyingInstrument_66.insert(UnderlyingRepurchaseTerm_66.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_66("STRING_1411784409");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_66);
    UnderlyingInstrument_66.insert(UnderlyingRestructuringType_66.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_66("STRING_1934571965");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_66);
    UnderlyingInstrument_66.insert(UnderlyingSecurityDesc_66.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_66("EXCHANGE_1840538668");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_66);
    UnderlyingInstrument_66.insert(UnderlyingSecurityExchange_66.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_66("STRING_343319067");
    noUnderlyings_0_0.set(UnderlyingSecurityID_66);
    UnderlyingInstrument_66.insert(UnderlyingSecurityID_66.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_66("STRING_680644792");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_66);
    UnderlyingInstrument_66.insert(UnderlyingSecurityIDSource_66.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_66("STRING_1019597265");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_66);
    UnderlyingInstrument_66.insert(UnderlyingSecuritySubType_66.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_66("STRING_574502420");
    noUnderlyings_0_0.set(UnderlyingSecurityType_66);
    UnderlyingInstrument_66.insert(UnderlyingSecurityType_66.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_66("STRING_1672398066");
    noUnderlyings_0_0.set(UnderlyingSeniority_66);
    UnderlyingInstrument_66.insert(UnderlyingSeniority_66.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_66("STRING_986163654");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_66);
    UnderlyingInstrument_66.insert(UnderlyingSettlMethod_66.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_66(4);
    noUnderlyings_0_0.set(UnderlyingSettlementType_66);
    UnderlyingInstrument_66.insert(UnderlyingSettlementType_66.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_66;
    UnderlyingStartValue_66.setString("13432530");
    noUnderlyings_0_0.set(UnderlyingStartValue_66);
    UnderlyingInstrument_66.insert(UnderlyingStartValue_66.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_66("STRING_1468659818");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_66);
    UnderlyingInstrument_66.insert(UnderlyingStateOrProvinceOfIssue_66.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_66("EUR");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_66);
    UnderlyingInstrument_66.insert(UnderlyingStrikeCurrency_66.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_66;
    UnderlyingStrikePrice_66.setString("19924484");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_66);
    UnderlyingInstrument_66.insert(UnderlyingStrikePrice_66.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_66("STRING_2114210902");
    noUnderlyings_0_0.set(UnderlyingSymbol_66);
    UnderlyingInstrument_66.insert(UnderlyingSymbol_66.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_66("STRING_878360029");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_66);
    UnderlyingInstrument_66.insert(UnderlyingSymbolSfx_66.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_66("STRING_56473885");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_66);
    UnderlyingInstrument_66.insert(UnderlyingTimeUnit_66.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_66("STRING_1996471349");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_66);
    UnderlyingInstrument_66.insert(UnderlyingUnitOfMeasure_66.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_66;
    UnderlyingUnitOfMeasureQty_66.setString("8757876");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_66);
    UnderlyingInstrument_66.insert(UnderlyingUnitOfMeasureQty_66.getString());
    all_values.push_back(UnderlyingInstrument_66);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::NewOrderSingle::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_129;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_129("STRING_135819690");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_129);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_129.insert(UnderlyingSecurityAltID_129.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_129("STRING_719115010");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_129);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_129.insert(UnderlyingSecurityAltIDSource_129.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_129);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::NewOrderSingle::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_130;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_130("STRING_567812183");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_130);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_130.insert(UnderlyingSecurityAltID_130.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_130("STRING_1479913708");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_130);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_130.insert(UnderlyingSecurityAltIDSource_130.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_130);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::NewOrderSingle::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_131;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_131("STRING_233929405");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltID_131);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_131.insert(UnderlyingSecurityAltID_131.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_131("STRING_1969233312");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltIDSource_131);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_131.insert(UnderlyingSecurityAltIDSource_131.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_131);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::NewOrderSingle::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_126;
      FIX::UnderlyingStipType UnderlyingStipType_126("STRING_1703921142");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_126);
      UnderlyingStipulations_NoUnderlyingStips_126.insert(UnderlyingStipType_126.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_126("STRING_135533499");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_126);
      UnderlyingStipulations_NoUnderlyingStips_126.insert(UnderlyingStipValue_126.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_126);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::NewOrderSingle::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_135;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_135("STRING_968221904");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_135);
      UndlyInstrumentParties_NoUndlyInstrumentParties_135.insert(UnderlyingInstrumentPartyID_135.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_135('2');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_135);
      UndlyInstrumentParties_NoUndlyInstrumentParties_135.insert(UnderlyingInstrumentPartyIDSource_135.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_135(1391139389);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_135);
      UndlyInstrumentParties_NoUndlyInstrumentParties_135.insert(UnderlyingInstrumentPartyRole_135.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_135);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderSingle::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_260;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_260("STRING_603266609");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_260);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_260.insert(UnderlyingInstrumentPartySubID_260.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_260(263253006);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_260);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_260.insert(UnderlyingInstrumentPartySubIDType_260.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_260);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::NewOrderSingle::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_261;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_261("STRING_1886043391");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_261);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_261.insert(UnderlyingInstrumentPartySubID_261.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_261(128181027);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_261);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_261.insert(UnderlyingInstrumentPartySubIDType_261.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_261);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::NewOrderSingle::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_262;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_262("STRING_1249416660");
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubID_262);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_262.insert(UnderlyingInstrumentPartySubID_262.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_262(1781410488);
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubIDType_262);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_262.insert(UnderlyingInstrumentPartySubIDType_262.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_262);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::NewOrderSingle::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_67;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_67("DATA_1471434076");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_67);
    UnderlyingInstrument_67.insert(EncodedUnderlyingIssuer_67.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_67(570592830);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_67);
    UnderlyingInstrument_67.insert(EncodedUnderlyingIssuerLen_67.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_67("DATA_1650548268");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_67);
    UnderlyingInstrument_67.insert(EncodedUnderlyingSecurityDesc_67.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_67(1930826603);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_67);
    UnderlyingInstrument_67.insert(EncodedUnderlyingSecurityDescLen_67.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_67;
    UnderlyingAdjustedQuantity_67.setString("4155576");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_67);
    UnderlyingInstrument_67.insert(UnderlyingAdjustedQuantity_67.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_67;
    UnderlyingAllocationPercent_67.setString("55.220000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_67);
    UnderlyingInstrument_67.insert(UnderlyingAllocationPercent_67.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_67;
    UnderlyingAttachmentPoint_67.setString("29.840000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_67);
    UnderlyingInstrument_67.insert(UnderlyingAttachmentPoint_67.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_67("STRING_472031529");
    noUnderlyings_0_1.set(UnderlyingCFICode_67);
    UnderlyingInstrument_67.insert(UnderlyingCFICode_67.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_67("STRING_1466263223");
    noUnderlyings_0_1.set(UnderlyingCPProgram_67);
    UnderlyingInstrument_67.insert(UnderlyingCPProgram_67.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_67("STRING_1537490641");
    noUnderlyings_0_1.set(UnderlyingCPRegType_67);
    UnderlyingInstrument_67.insert(UnderlyingCPRegType_67.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_67;
    UnderlyingCapValue_67.setString("19287745");
    noUnderlyings_0_1.set(UnderlyingCapValue_67);
    UnderlyingInstrument_67.insert(UnderlyingCapValue_67.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_67;
    UnderlyingCashAmount_67.setString("16020829");
    noUnderlyings_0_1.set(UnderlyingCashAmount_67);
    UnderlyingInstrument_67.insert(UnderlyingCashAmount_67.getString());
    FIX::UnderlyingCashType UnderlyingCashType_67("STRING_DIFF");
    noUnderlyings_0_1.set(UnderlyingCashType_67);
    UnderlyingInstrument_67.insert(UnderlyingCashType_67.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_67;
    UnderlyingContractMultiplier_67.setString("3491031");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_67);
    UnderlyingInstrument_67.insert(UnderlyingContractMultiplier_67.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_67(934512973);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_67);
    UnderlyingInstrument_67.insert(UnderlyingContractMultiplierUnit_67.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_67("COUNTRY_343051408");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_67);
    UnderlyingInstrument_67.insert(UnderlyingCountryOfIssue_67.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_67("LOCALMKTDATE_170852787");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_67);
    UnderlyingInstrument_67.insert(UnderlyingCouponPaymentDate_67.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_67;
    UnderlyingCouponRate_67.setString("4.820000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_67);
    UnderlyingInstrument_67.insert(UnderlyingCouponRate_67.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_67("STRING_2046972551");
    noUnderlyings_0_1.set(UnderlyingCreditRating_67);
    UnderlyingInstrument_67.insert(UnderlyingCreditRating_67.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_67("CHF");
    noUnderlyings_0_1.set(UnderlyingCurrency_67);
    UnderlyingInstrument_67.insert(UnderlyingCurrency_67.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_67;
    UnderlyingCurrentValue_67.setString("8677108");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_67);
    UnderlyingInstrument_67.insert(UnderlyingCurrentValue_67.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_67;
    UnderlyingDetachmentPoint_67.setString("81.030000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_67);
    UnderlyingInstrument_67.insert(UnderlyingDetachmentPoint_67.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_67;
    UnderlyingDirtyPrice_67.setString("20674905");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_67);
    UnderlyingInstrument_67.insert(UnderlyingDirtyPrice_67.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_67;
    UnderlyingEndPrice_67.setString("317681");
    noUnderlyings_0_1.set(UnderlyingEndPrice_67);
    UnderlyingInstrument_67.insert(UnderlyingEndPrice_67.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_67;
    UnderlyingEndValue_67.setString("8322747");
    noUnderlyings_0_1.set(UnderlyingEndValue_67);
    UnderlyingInstrument_67.insert(UnderlyingEndValue_67.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_67(183259950);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_67);
    UnderlyingInstrument_67.insert(UnderlyingExerciseStyle_67.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_67;
    UnderlyingFXRate_67.setString("19178115");
    noUnderlyings_0_1.set(UnderlyingFXRate_67);
    UnderlyingInstrument_67.insert(UnderlyingFXRate_67.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_67('M');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_67);
    UnderlyingInstrument_67.insert(UnderlyingFXRateCalc_67.getString());
    FIX::UnderlyingFactor UnderlyingFactor_67;
    UnderlyingFactor_67.setString("14326766");
    noUnderlyings_0_1.set(UnderlyingFactor_67);
    UnderlyingInstrument_67.insert(UnderlyingFactor_67.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_67(1551738361);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_67);
    UnderlyingInstrument_67.insert(UnderlyingFlowScheduleType_67.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_67("STRING_284406167");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_67);
    UnderlyingInstrument_67.insert(UnderlyingInstrRegistry_67.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_67("LOCALMKTDATE_2003269440");
    noUnderlyings_0_1.set(UnderlyingIssueDate_67);
    UnderlyingInstrument_67.insert(UnderlyingIssueDate_67.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_67("STRING_1054802981");
    noUnderlyings_0_1.set(UnderlyingIssuer_67);
    UnderlyingInstrument_67.insert(UnderlyingIssuer_67.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_67("STRING_67749122");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_67);
    UnderlyingInstrument_67.insert(UnderlyingLocaleOfIssue_67.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_67("LOCALMKTDATE_271343436");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_67);
    UnderlyingInstrument_67.insert(UnderlyingMaturityDate_67.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_67("MONTHYEAR_524594855");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_67);
    UnderlyingInstrument_67.insert(UnderlyingMaturityMonthYear_67.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_67("TZTIMEONLY_729452107");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_67);
    UnderlyingInstrument_67.insert(UnderlyingMaturityTime_67.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_67;
    UnderlyingNotionalPercentageOutstanding_67.setString("49.650000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_67);
    UnderlyingInstrument_67.insert(UnderlyingNotionalPercentageOutstanding_67.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_67('1');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_67);
    UnderlyingInstrument_67.insert(UnderlyingOptAttribute_67.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_67;
    UnderlyingOriginalNotionalPercentageOutstanding_67.setString("91.000000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_67);
    UnderlyingInstrument_67.insert(UnderlyingOriginalNotionalPercentageOutstanding_67.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_67("STRING_524665905");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_67);
    UnderlyingInstrument_67.insert(UnderlyingPriceUnitOfMeasure_67.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_67;
    UnderlyingPriceUnitOfMeasureQty_67.setString("14454573");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_67);
    UnderlyingInstrument_67.insert(UnderlyingPriceUnitOfMeasureQty_67.getString());
    FIX::UnderlyingProduct UnderlyingProduct_67(228581104);
    noUnderlyings_0_1.set(UnderlyingProduct_67);
    UnderlyingInstrument_67.insert(UnderlyingProduct_67.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_67(873769029);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_67);
    UnderlyingInstrument_67.insert(UnderlyingPutOrCall_67.getString());
    FIX::UnderlyingPx UnderlyingPx_67;
    UnderlyingPx_67.setString("2324866");
    noUnderlyings_0_1.set(UnderlyingPx_67);
    UnderlyingInstrument_67.insert(UnderlyingPx_67.getString());
    FIX::UnderlyingQty UnderlyingQty_67;
    UnderlyingQty_67.setString("5716325");
    noUnderlyings_0_1.set(UnderlyingQty_67);
    UnderlyingInstrument_67.insert(UnderlyingQty_67.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_67("LOCALMKTDATE_1044621816");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_67);
    UnderlyingInstrument_67.insert(UnderlyingRedemptionDate_67.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_67("STRING_1358237152");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_67);
    UnderlyingInstrument_67.insert(UnderlyingRepoCollateralSecurityType_67.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_67;
    UnderlyingRepurchaseRate_67.setString("14.150000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_67);
    UnderlyingInstrument_67.insert(UnderlyingRepurchaseRate_67.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_67(1351008103);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_67);
    UnderlyingInstrument_67.insert(UnderlyingRepurchaseTerm_67.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_67("STRING_2034588355");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_67);
    UnderlyingInstrument_67.insert(UnderlyingRestructuringType_67.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_67("STRING_1338832222");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_67);
    UnderlyingInstrument_67.insert(UnderlyingSecurityDesc_67.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_67("EXCHANGE_1580016206");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_67);
    UnderlyingInstrument_67.insert(UnderlyingSecurityExchange_67.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_67("STRING_1954595299");
    noUnderlyings_0_1.set(UnderlyingSecurityID_67);
    UnderlyingInstrument_67.insert(UnderlyingSecurityID_67.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_67("STRING_1370600352");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_67);
    UnderlyingInstrument_67.insert(UnderlyingSecurityIDSource_67.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_67("STRING_264807270");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_67);
    UnderlyingInstrument_67.insert(UnderlyingSecuritySubType_67.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_67("STRING_2137855249");
    noUnderlyings_0_1.set(UnderlyingSecurityType_67);
    UnderlyingInstrument_67.insert(UnderlyingSecurityType_67.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_67("STRING_1140928225");
    noUnderlyings_0_1.set(UnderlyingSeniority_67);
    UnderlyingInstrument_67.insert(UnderlyingSeniority_67.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_67("STRING_1225263009");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_67);
    UnderlyingInstrument_67.insert(UnderlyingSettlMethod_67.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_67(5);
    noUnderlyings_0_1.set(UnderlyingSettlementType_67);
    UnderlyingInstrument_67.insert(UnderlyingSettlementType_67.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_67;
    UnderlyingStartValue_67.setString("5451829");
    noUnderlyings_0_1.set(UnderlyingStartValue_67);
    UnderlyingInstrument_67.insert(UnderlyingStartValue_67.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_67("STRING_1509669176");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_67);
    UnderlyingInstrument_67.insert(UnderlyingStateOrProvinceOfIssue_67.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_67("CAN");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_67);
    UnderlyingInstrument_67.insert(UnderlyingStrikeCurrency_67.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_67;
    UnderlyingStrikePrice_67.setString("15774182");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_67);
    UnderlyingInstrument_67.insert(UnderlyingStrikePrice_67.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_67("STRING_1550177439");
    noUnderlyings_0_1.set(UnderlyingSymbol_67);
    UnderlyingInstrument_67.insert(UnderlyingSymbol_67.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_67("STRING_2124580775");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_67);
    UnderlyingInstrument_67.insert(UnderlyingSymbolSfx_67.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_67("STRING_159386757");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_67);
    UnderlyingInstrument_67.insert(UnderlyingTimeUnit_67.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_67("STRING_146068756");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_67);
    UnderlyingInstrument_67.insert(UnderlyingUnitOfMeasure_67.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_67;
    UnderlyingUnitOfMeasureQty_67.setString("19679552");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_67);
    UnderlyingInstrument_67.insert(UnderlyingUnitOfMeasureQty_67.getString());
    all_values.push_back(UnderlyingInstrument_67);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::NewOrderSingle::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_132;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_132("STRING_670734662");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_132);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_132.insert(UnderlyingSecurityAltID_132.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_132("STRING_1265928902");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_132);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_132.insert(UnderlyingSecurityAltIDSource_132.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_132);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::NewOrderSingle::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_133;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_133("STRING_507426962");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_133);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_133.insert(UnderlyingSecurityAltID_133.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_133("STRING_1544503691");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_133);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_133.insert(UnderlyingSecurityAltIDSource_133.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_133);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::NewOrderSingle::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_127;
      FIX::UnderlyingStipType UnderlyingStipType_127("STRING_1079059474");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_127);
      UnderlyingStipulations_NoUnderlyingStips_127.insert(UnderlyingStipType_127.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_127("STRING_441641859");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_127);
      UnderlyingStipulations_NoUnderlyingStips_127.insert(UnderlyingStipValue_127.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_127);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::NewOrderSingle::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_128;
      FIX::UnderlyingStipType UnderlyingStipType_128("STRING_709169076");
      noUnderlyingStips_1_1_1.set(UnderlyingStipType_128);
      UnderlyingStipulations_NoUnderlyingStips_128.insert(UnderlyingStipType_128.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_128("STRING_1550180890");
      noUnderlyingStips_1_1_1.set(UnderlyingStipValue_128);
      UnderlyingStipulations_NoUnderlyingStips_128.insert(UnderlyingStipValue_128.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_128);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::NewOrderSingle::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_136;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_136("STRING_596273783");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_136);
      UndlyInstrumentParties_NoUndlyInstrumentParties_136.insert(UnderlyingInstrumentPartyID_136.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_136('7');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_136);
      UndlyInstrumentParties_NoUndlyInstrumentParties_136.insert(UnderlyingInstrumentPartyIDSource_136.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_136(1225182520);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_136);
      UndlyInstrumentParties_NoUndlyInstrumentParties_136.insert(UnderlyingInstrumentPartyRole_136.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_136);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderSingle::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_263;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_263("STRING_2112129817");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_263);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_263.insert(UnderlyingInstrumentPartySubID_263.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_263(1489989790);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_263);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_263.insert(UnderlyingInstrumentPartySubIDType_263.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_263);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::NewOrderSingle::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_264;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_264("STRING_393757035");
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubID_264);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_264.insert(UnderlyingInstrumentPartySubID_264.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_264(1105574394);
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubIDType_264);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_264.insert(UnderlyingInstrumentPartySubIDType_264.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_264);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::NewOrderSingle::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_137;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_137("STRING_567769151");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_137);
      UndlyInstrumentParties_NoUndlyInstrumentParties_137.insert(UnderlyingInstrumentPartyID_137.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_137('1');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_137);
      UndlyInstrumentParties_NoUndlyInstrumentParties_137.insert(UnderlyingInstrumentPartyIDSource_137.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_137(1650757333);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_137);
      UndlyInstrumentParties_NoUndlyInstrumentParties_137.insert(UnderlyingInstrumentPartyRole_137.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_137);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderSingle::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_265;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_265("STRING_948155602");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_265);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_265.insert(UnderlyingInstrumentPartySubID_265.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_265(1103259604);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_265);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_265.insert(UnderlyingInstrumentPartySubIDType_265.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_265);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::NewOrderSingle::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_266;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_266("STRING_1507372978");
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubID_266);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_266.insert(UnderlyingInstrumentPartySubID_266.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_266(350849393);
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubIDType_266);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_266.insert(UnderlyingInstrumentPartySubIDType_266.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_266);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  // YieldData
  multiset<string> YieldData_14;
  FIX::Yield Yield_14;
  Yield_14.setString("67.310000");
  msg.set(Yield_14);
  YieldData_14.insert(Yield_14.getString());
  FIX::YieldCalcDate YieldCalcDate_14("LOCALMKTDATE_1666759735");
  msg.set(YieldCalcDate_14);
  YieldData_14.insert(YieldCalcDate_14.getString());
  FIX::YieldRedemptionDate YieldRedemptionDate_14("LOCALMKTDATE_496918150");
  msg.set(YieldRedemptionDate_14);
  YieldData_14.insert(YieldRedemptionDate_14.getString());
  FIX::YieldRedemptionPrice YieldRedemptionPrice_14;
  YieldRedemptionPrice_14.setString("9008282");
  msg.set(YieldRedemptionPrice_14);
  YieldData_14.insert(YieldRedemptionPrice_14.getString());
  FIX::YieldRedemptionPriceType YieldRedemptionPriceType_14(1945605593);
  msg.set(YieldRedemptionPriceType_14);
  YieldData_14.insert(YieldRedemptionPriceType_14.getString());
  FIX::YieldType YieldType_14("STRING_SEMIANNUAL");
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
