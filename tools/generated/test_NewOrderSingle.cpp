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
  FIX::Account Account_20("STRING_712246280");
  msg.set(Account_20);
  NewOrderSingle_0.insert(Account_20.getString());
  FIX::AccountType AccountType_18(6);
  msg.set(AccountType_18);
  NewOrderSingle_0.insert(AccountType_18.getString());
  FIX::AcctIDSource AcctIDSource_13(99);
  msg.set(AcctIDSource_13);
  NewOrderSingle_0.insert(AcctIDSource_13.getString());
  FIX::AllocID AllocID_16("STRING_1538916985");
  msg.set(AllocID_16);
  NewOrderSingle_0.insert(AllocID_16.getString());
  FIX::BookingType BookingType_18(0);
  msg.set(BookingType_18);
  NewOrderSingle_0.insert(BookingType_18.getString());
  FIX::BookingUnit BookingUnit_9('0');
  msg.set(BookingUnit_9);
  NewOrderSingle_0.insert(BookingUnit_9.getString());
  FIX::CancellationRights CancellationRights_6('Y');
  msg.set(CancellationRights_6);
  NewOrderSingle_0.insert(CancellationRights_6.getString());
  FIX::CashMargin CashMargin_9('1');
  msg.set(CashMargin_9);
  NewOrderSingle_0.insert(CashMargin_9.getString());
  FIX::ClOrdID ClOrdID_31("STRING_1095402660");
  msg.set(ClOrdID_31);
  NewOrderSingle_0.insert(ClOrdID_31.getString());
  FIX::ClOrdLinkID ClOrdLinkID_10("STRING_1122375795");
  msg.set(ClOrdLinkID_10);
  NewOrderSingle_0.insert(ClOrdLinkID_10.getString());
  FIX::ClearingFeeIndicator ClearingFeeIndicator_16("STRING_4");
  msg.set(ClearingFeeIndicator_16);
  NewOrderSingle_0.insert(ClearingFeeIndicator_16.getString());
  FIX::ComplianceID ComplianceID_7("STRING_1715947498");
  msg.set(ComplianceID_7);
  NewOrderSingle_0.insert(ComplianceID_7.getString());
  FIX::CoveredOrUncovered CoveredOrUncovered_8(1);
  msg.set(CoveredOrUncovered_8);
  NewOrderSingle_0.insert(CoveredOrUncovered_8.getString());
  FIX::Currency Currency_36("CAN");
  msg.set(Currency_36);
  NewOrderSingle_0.insert(Currency_36.getString());
  FIX::CustDirectedOrder CustDirectedOrder_1(true);
  msg.set(CustDirectedOrder_1);
  NewOrderSingle_0.insert(CustDirectedOrder_1.getString());
  FIX::CustOrderCapacity CustOrderCapacity_12(3);
  msg.set(CustOrderCapacity_12);
  NewOrderSingle_0.insert(CustOrderCapacity_12.getString());
  FIX::CustOrderHandlingInst CustOrderHandlingInst_1("MULTIPLESTRINGVALUE_MAO");
  msg.set(CustOrderHandlingInst_1);
  NewOrderSingle_0.insert(CustOrderHandlingInst_1.getString());
  FIX::DayBookingInst DayBookingInst_9('2');
  msg.set(DayBookingInst_9);
  NewOrderSingle_0.insert(DayBookingInst_9.getString());
  FIX::Designation Designation_6("STRING_434983577");
  msg.set(Designation_6);
  NewOrderSingle_0.insert(Designation_6.getString());
  FIX::EffectiveTime EffectiveTime_6(FIX::UTCTIMESTAMP(10, 1, 51, 7, 2, 2004));
  msg.set(EffectiveTime_6);
  NewOrderSingle_0.insert(EffectiveTime_6.getString());
  FIX::EncodedText EncodedText_55("DATA_1890207055");
  msg.set(EncodedText_55);
  NewOrderSingle_0.insert(EncodedText_55.getString());
  FIX::EncodedTextLen EncodedTextLen_55(985117669);
  msg.set(EncodedTextLen_55);
  NewOrderSingle_0.insert(EncodedTextLen_55.getString());
  FIX::ExDestination ExDestination_5("EXCHANGE_1743962099");
  msg.set(ExDestination_5);
  NewOrderSingle_0.insert(ExDestination_5.getString());
  FIX::ExDestinationIDSource ExDestinationIDSource_5('C');
  msg.set(ExDestinationIDSource_5);
  NewOrderSingle_0.insert(ExDestinationIDSource_5.getString());
  FIX::ExecInst ExecInst_8("MULTIPLECHARVALUE_U");
  msg.set(ExecInst_8);
  NewOrderSingle_0.insert(ExecInst_8.getString());
  FIX::ExpireDate ExpireDate_9("LOCALMKTDATE_773919538");
  msg.set(ExpireDate_9);
  NewOrderSingle_0.insert(ExpireDate_9.getString());
  FIX::ExpireTime ExpireTime_10(FIX::UTCTIMESTAMP(15, 52, 12, 24, 5, 2006));
  msg.set(ExpireTime_10);
  NewOrderSingle_0.insert(ExpireTime_10.getString());
  FIX::ForexReq ForexReq_9(false);
  msg.set(ForexReq_9);
  NewOrderSingle_0.insert(ForexReq_9.getString());
  FIX::GTBookingInst GTBookingInst_6(1);
  msg.set(GTBookingInst_6);
  NewOrderSingle_0.insert(GTBookingInst_6.getString());
  FIX::HandlInst HandlInst_6('3');
  msg.set(HandlInst_6);
  NewOrderSingle_0.insert(HandlInst_6.getString());
  FIX::IOIID IOIID_6("STRING_1256910718");
  msg.set(IOIID_6);
  NewOrderSingle_0.insert(IOIID_6.getString());
  FIX::LocateReqd LocateReqd_5(true);
  msg.set(LocateReqd_5);
  NewOrderSingle_0.insert(LocateReqd_5.getString());
  FIX::ManualOrderIndicator ManualOrderIndicator_1(true);
  msg.set(ManualOrderIndicator_1);
  NewOrderSingle_0.insert(ManualOrderIndicator_1.getString());
  FIX::MatchIncrement MatchIncrement_6;
  MatchIncrement_6.setString("445657");
  msg.set(MatchIncrement_6);
  NewOrderSingle_0.insert(MatchIncrement_6.getString());
  FIX::MaxFloor MaxFloor_6;
  MaxFloor_6.setString("6505081");
  msg.set(MaxFloor_6);
  NewOrderSingle_0.insert(MaxFloor_6.getString());
  FIX::MaxPriceLevels MaxPriceLevels_6(185853388);
  msg.set(MaxPriceLevels_6);
  NewOrderSingle_0.insert(MaxPriceLevels_6.getString());
  FIX::MaxShow MaxShow_6;
  MaxShow_6.setString("15030316");
  msg.set(MaxShow_6);
  NewOrderSingle_0.insert(MaxShow_6.getString());
  FIX::MinQty MinQty_8;
  MinQty_8.setString("10854916");
  msg.set(MinQty_8);
  NewOrderSingle_0.insert(MinQty_8.getString());
  FIX::MoneyLaunderingStatus MoneyLaunderingStatus_6('1');
  msg.set(MoneyLaunderingStatus_6);
  NewOrderSingle_0.insert(MoneyLaunderingStatus_6.getString());
  FIX::OrdType OrdType_39('E');
  msg.set(OrdType_39);
  NewOrderSingle_0.insert(OrdType_39.getString());
  FIX::OrderCapacity OrderCapacity_19('P');
  msg.set(OrderCapacity_19);
  NewOrderSingle_0.insert(OrderCapacity_19.getString());
  FIX::OrderHandlingInstSource OrderHandlingInstSource_1(1);
  msg.set(OrderHandlingInstSource_1);
  NewOrderSingle_0.insert(OrderHandlingInstSource_1.getString());
  FIX::OrderQty2 OrderQty2_8;
  OrderQty2_8.setString("12451982");
  msg.set(OrderQty2_8);
  NewOrderSingle_0.insert(OrderQty2_8.getString());
  FIX::OrderRestrictions OrderRestrictions_17("MULTIPLECHARVALUE_6");
  msg.set(OrderRestrictions_17);
  NewOrderSingle_0.insert(OrderRestrictions_17.getString());
  FIX::ParticipationRate ParticipationRate_6;
  ParticipationRate_6.setString("83.970000");
  msg.set(ParticipationRate_6);
  NewOrderSingle_0.insert(ParticipationRate_6.getString());
  FIX::PositionEffect PositionEffect_12('D');
  msg.set(PositionEffect_12);
  NewOrderSingle_0.insert(PositionEffect_12.getString());
  FIX::PreTradeAnonymity PreTradeAnonymity_9(true);
  msg.set(PreTradeAnonymity_9);
  NewOrderSingle_0.insert(PreTradeAnonymity_9.getString());
  FIX::PreallocMethod PreallocMethod_9('0');
  msg.set(PreallocMethod_9);
  NewOrderSingle_0.insert(PreallocMethod_9.getString());
  FIX::PrevClosePx PrevClosePx_6;
  PrevClosePx_6.setString("8704922");
  msg.set(PrevClosePx_6);
  NewOrderSingle_0.insert(PrevClosePx_6.getString());
  FIX::Price Price_17;
  Price_17.setString("14466127");
  msg.set(Price_17);
  NewOrderSingle_0.insert(Price_17.getString());
  FIX::Price2 Price2_1;
  Price2_1.setString("4696463");
  msg.set(Price2_1);
  NewOrderSingle_0.insert(Price2_1.getString());
  FIX::PriceProtectionScope PriceProtectionScope_6('3');
  msg.set(PriceProtectionScope_6);
  NewOrderSingle_0.insert(PriceProtectionScope_6.getString());
  FIX::PriceType PriceType_28(11);
  msg.set(PriceType_28);
  NewOrderSingle_0.insert(PriceType_28.getString());
  FIX::ProcessCode ProcessCode_13('3');
  msg.set(ProcessCode_13);
  NewOrderSingle_0.insert(ProcessCode_13.getString());
  FIX::QtyType QtyType_21(2);
  msg.set(QtyType_21);
  NewOrderSingle_0.insert(QtyType_21.getString());
  FIX::QuoteID QuoteID_7("STRING_412953540");
  msg.set(QuoteID_7);
  NewOrderSingle_0.insert(QuoteID_7.getString());
  FIX::ReceivedDeptID ReceivedDeptID_1("STRING_922543307");
  msg.set(ReceivedDeptID_1);
  NewOrderSingle_0.insert(ReceivedDeptID_1.getString());
  FIX::RefOrderID RefOrderID_2("STRING_1085471031");
  msg.set(RefOrderID_2);
  NewOrderSingle_0.insert(RefOrderID_2.getString());
  FIX::RefOrderIDSource RefOrderIDSource_2('4');
  msg.set(RefOrderIDSource_2);
  NewOrderSingle_0.insert(RefOrderIDSource_2.getString());
  FIX::RegistID RegistID_6("STRING_416496473");
  msg.set(RegistID_6);
  NewOrderSingle_0.insert(RegistID_6.getString());
  FIX::SecondaryClOrdID SecondaryClOrdID_29("STRING_73356586");
  msg.set(SecondaryClOrdID_29);
  NewOrderSingle_0.insert(SecondaryClOrdID_29.getString());
  FIX::SettlCurrency SettlCurrency_19("EUR");
  msg.set(SettlCurrency_19);
  NewOrderSingle_0.insert(SettlCurrency_19.getString());
  FIX::SettlDate SettlDate_30("LOCALMKTDATE_158943988");
  msg.set(SettlDate_30);
  NewOrderSingle_0.insert(SettlDate_30.getString());
  FIX::SettlDate2 SettlDate2_8("LOCALMKTDATE_714349291");
  msg.set(SettlDate2_8);
  NewOrderSingle_0.insert(SettlDate2_8.getString());
  FIX::SettlType SettlType_18("STRING_0");
  msg.set(SettlType_18);
  NewOrderSingle_0.insert(SettlType_18.getString());
  FIX::Side Side_28('1');
  msg.set(Side_28);
  NewOrderSingle_0.insert(Side_28.getString());
  FIX::SolicitedFlag SolicitedFlag_9(true);
  msg.set(SolicitedFlag_9);
  NewOrderSingle_0.insert(SolicitedFlag_9.getString());
  FIX::StopPx StopPx_6;
  StopPx_6.setString("5427646");
  msg.set(StopPx_6);
  NewOrderSingle_0.insert(StopPx_6.getString());
  FIX::TargetStrategy TargetStrategy_6(1);
  msg.set(TargetStrategy_6);
  NewOrderSingle_0.insert(TargetStrategy_6.getString());
  FIX::TargetStrategyParameters TargetStrategyParameters_6("STRING_1720197364");
  msg.set(TargetStrategyParameters_6);
  NewOrderSingle_0.insert(TargetStrategyParameters_6.getString());
  FIX::Text Text_55("STRING_795626741");
  msg.set(Text_55);
  NewOrderSingle_0.insert(Text_55.getString());
  FIX::TimeInForce TimeInForce_34('1');
  msg.set(TimeInForce_34);
  NewOrderSingle_0.insert(TimeInForce_34.getString());
  FIX::TradeDate TradeDate_22("LOCALMKTDATE_817911920");
  msg.set(TradeDate_22);
  NewOrderSingle_0.insert(TradeDate_22.getString());
  FIX::TradeOriginationDate TradeOriginationDate_14("LOCALMKTDATE_1707241546");
  msg.set(TradeOriginationDate_14);
  NewOrderSingle_0.insert(TradeOriginationDate_14.getString());
  FIX::TransactTime TransactTime_36(FIX::UTCTIMESTAMP(20, 33, 17, 19, 10, 2010));
  msg.set(TransactTime_36);
  NewOrderSingle_0.insert(TransactTime_36.getString());
  all_values.push_back(NewOrderSingle_0);

  all_compo_names.insert("NewOrderSingle");

  // CommissionData
  multiset<string> CommissionData_20;
  FIX::CommCurrency CommCurrency_20("EUR");
  msg.set(CommCurrency_20);
  CommissionData_20.insert(CommCurrency_20.getString());
  FIX::CommType CommType_20('6');
  msg.set(CommType_20);
  CommissionData_20.insert(CommType_20.getString());
  FIX::Commission Commission_20;
  Commission_20.setString("12419544");
  msg.set(Commission_20);
  CommissionData_20.insert(Commission_20.getString());
  FIX::FundRenewWaiv FundRenewWaiv_20('Y');
  msg.set(FundRenewWaiv_20);
  CommissionData_20.insert(FundRenewWaiv_20.getString());
  all_values.push_back(CommissionData_20);
  all_compo_names.insert("CommissionData");

  // DiscretionInstructions
  multiset<string> DiscretionInstructions_6;
  FIX::DiscretionInst DiscretionInst_6('2');
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
  DiscretionOffsetValue_6.setString("2532984");
  msg.set(DiscretionOffsetValue_6);
  DiscretionInstructions_6.insert(DiscretionOffsetValue_6.getString());
  FIX::DiscretionRoundDirection DiscretionRoundDirection_6(2);
  msg.set(DiscretionRoundDirection_6);
  DiscretionInstructions_6.insert(DiscretionRoundDirection_6.getString());
  FIX::DiscretionScope DiscretionScope_6(4);
  msg.set(DiscretionScope_6);
  DiscretionInstructions_6.insert(DiscretionScope_6.getString());
  all_values.push_back(DiscretionInstructions_6);
  all_compo_names.insert("DiscretionInstructions");

  // DisplayInstruction
  multiset<string> DisplayInstruction_6;
  FIX::DisplayHighQty DisplayHighQty_6;
  DisplayHighQty_6.setString("4122423");
  msg.set(DisplayHighQty_6);
  DisplayInstruction_6.insert(DisplayHighQty_6.getString());
  FIX::DisplayLowQty DisplayLowQty_6;
  DisplayLowQty_6.setString("2060214");
  msg.set(DisplayLowQty_6);
  DisplayInstruction_6.insert(DisplayLowQty_6.getString());
  FIX::DisplayMethod DisplayMethod_6('4');
  msg.set(DisplayMethod_6);
  DisplayInstruction_6.insert(DisplayMethod_6.getString());
  FIX::DisplayMinIncr DisplayMinIncr_6;
  DisplayMinIncr_6.setString("7570397");
  msg.set(DisplayMinIncr_6);
  DisplayInstruction_6.insert(DisplayMinIncr_6.getString());
  FIX::DisplayQty DisplayQty_6;
  DisplayQty_6.setString("2759187");
  msg.set(DisplayQty_6);
  DisplayInstruction_6.insert(DisplayQty_6.getString());
  FIX::DisplayWhen DisplayWhen_6('2');
  msg.set(DisplayWhen_6);
  DisplayInstruction_6.insert(DisplayWhen_6.getString());
  FIX::RefreshQty RefreshQty_6;
  RefreshQty_6.setString("17035376");
  msg.set(RefreshQty_6);
  DisplayInstruction_6.insert(RefreshQty_6.getString());
  FIX::SecondaryDisplayQty SecondaryDisplayQty_6;
  SecondaryDisplayQty_6.setString("19961160");
  msg.set(SecondaryDisplayQty_6);
  DisplayInstruction_6.insert(SecondaryDisplayQty_6.getString());
  all_values.push_back(DisplayInstruction_6);
  all_compo_names.insert("DisplayInstruction");

  // FinancingDetails
  multiset<string> FinancingDetails_12;
  FIX::AgreementCurrency AgreementCurrency_12("EUR");
  msg.set(AgreementCurrency_12);
  FinancingDetails_12.insert(AgreementCurrency_12.getString());
  FIX::AgreementDate AgreementDate_12("LOCALMKTDATE_666544356");
  msg.set(AgreementDate_12);
  FinancingDetails_12.insert(AgreementDate_12.getString());
  FIX::AgreementDesc AgreementDesc_12("STRING_2003983109");
  msg.set(AgreementDesc_12);
  FinancingDetails_12.insert(AgreementDesc_12.getString());
  FIX::AgreementID AgreementID_12("STRING_953761504");
  msg.set(AgreementID_12);
  FinancingDetails_12.insert(AgreementID_12.getString());
  FIX::DeliveryType DeliveryType_12(0);
  msg.set(DeliveryType_12);
  FinancingDetails_12.insert(DeliveryType_12.getString());
  FIX::EndDate EndDate_12("LOCALMKTDATE_1312989834");
  msg.set(EndDate_12);
  FinancingDetails_12.insert(EndDate_12.getString());
  FIX::MarginRatio MarginRatio_12;
  MarginRatio_12.setString("44.740000");
  msg.set(MarginRatio_12);
  FinancingDetails_12.insert(MarginRatio_12.getString());
  FIX::StartDate StartDate_12("LOCALMKTDATE_853736363");
  msg.set(StartDate_12);
  FinancingDetails_12.insert(StartDate_12.getString());
  FIX::TerminationType TerminationType_12(4);
  msg.set(TerminationType_12);
  FinancingDetails_12.insert(TerminationType_12.getString());
  all_values.push_back(FinancingDetails_12);
  all_compo_names.insert("FinancingDetails");

  // Instrument
  multiset<string> Instrument_40;
  FIX::AttachmentPoint AttachmentPoint_40;
  AttachmentPoint_40.setString("38.300000");
  msg.set(AttachmentPoint_40);
  Instrument_40.insert(AttachmentPoint_40.getString());
  FIX::CFICode CFICode_40("STRING_429641474");
  msg.set(CFICode_40);
  Instrument_40.insert(CFICode_40.getString());
  FIX::CPProgram CPProgram_40(1);
  msg.set(CPProgram_40);
  Instrument_40.insert(CPProgram_40.getString());
  FIX::CPRegType CPRegType_40("STRING_1667089965");
  msg.set(CPRegType_40);
  Instrument_40.insert(CPRegType_40.getString());
  FIX::CapPrice CapPrice_40;
  CapPrice_40.setString("16715959");
  msg.set(CapPrice_40);
  Instrument_40.insert(CapPrice_40.getString());
  FIX::ContractMultiplier ContractMultiplier_40;
  ContractMultiplier_40.setString("4736874");
  msg.set(ContractMultiplier_40);
  Instrument_40.insert(ContractMultiplier_40.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_40(2);
  msg.set(ContractMultiplierUnit_40);
  Instrument_40.insert(ContractMultiplierUnit_40.getString());
  FIX::ContractSettlMonth ContractSettlMonth_40("MONTHYEAR_1851537732");
  msg.set(ContractSettlMonth_40);
  Instrument_40.insert(ContractSettlMonth_40.getString());
  FIX::CountryOfIssue CountryOfIssue_40("COUNTRY_1443059683");
  msg.set(CountryOfIssue_40);
  Instrument_40.insert(CountryOfIssue_40.getString());
  FIX::CouponPaymentDate CouponPaymentDate_40("LOCALMKTDATE_491734379");
  msg.set(CouponPaymentDate_40);
  Instrument_40.insert(CouponPaymentDate_40.getString());
  FIX::CouponRate CouponRate_40;
  CouponRate_40.setString("61.390000");
  msg.set(CouponRate_40);
  Instrument_40.insert(CouponRate_40.getString());
  FIX::CreditRating CreditRating_40("STRING_934731832");
  msg.set(CreditRating_40);
  Instrument_40.insert(CreditRating_40.getString());
  FIX::DatedDate DatedDate_40("LOCALMKTDATE_2140295186");
  msg.set(DatedDate_40);
  Instrument_40.insert(DatedDate_40.getString());
  FIX::DetachmentPoint DetachmentPoint_40;
  DetachmentPoint_40.setString("48.860000");
  msg.set(DetachmentPoint_40);
  Instrument_40.insert(DetachmentPoint_40.getString());
  FIX::EncodedIssuer EncodedIssuer_40("DATA_1140753273");
  msg.set(EncodedIssuer_40);
  Instrument_40.insert(EncodedIssuer_40.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_40(1098645337);
  msg.set(EncodedIssuerLen_40);
  Instrument_40.insert(EncodedIssuerLen_40.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_40("DATA_1126634658");
  msg.set(EncodedSecurityDesc_40);
  Instrument_40.insert(EncodedSecurityDesc_40.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_40(1416671993);
  msg.set(EncodedSecurityDescLen_40);
  Instrument_40.insert(EncodedSecurityDescLen_40.getString());
  FIX::ExerciseStyle ExerciseStyle_40(2);
  msg.set(ExerciseStyle_40);
  Instrument_40.insert(ExerciseStyle_40.getString());
  FIX::Factor Factor_40;
  Factor_40.setString("6826886");
  msg.set(Factor_40);
  Instrument_40.insert(Factor_40.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_40(true);
  msg.set(FlexProductEligibilityIndicator_40);
  Instrument_40.insert(FlexProductEligibilityIndicator_40.getString());
  FIX::FlexibleIndicator FlexibleIndicator_40(true);
  msg.set(FlexibleIndicator_40);
  Instrument_40.insert(FlexibleIndicator_40.getString());
  FIX::FloorPrice FloorPrice_40;
  FloorPrice_40.setString("19617140");
  msg.set(FloorPrice_40);
  Instrument_40.insert(FloorPrice_40.getString());
  FIX::FlowScheduleType FlowScheduleType_40(4);
  msg.set(FlowScheduleType_40);
  Instrument_40.insert(FlowScheduleType_40.getString());
  FIX::InstrRegistry InstrRegistry_40("STRING_753001181");
  msg.set(InstrRegistry_40);
  Instrument_40.insert(InstrRegistry_40.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_40('7');
  msg.set(InstrmtAssignmentMethod_40);
  Instrument_40.insert(InstrmtAssignmentMethod_40.getString());
  FIX::InterestAccrualDate InterestAccrualDate_40("LOCALMKTDATE_109259376");
  msg.set(InterestAccrualDate_40);
  Instrument_40.insert(InterestAccrualDate_40.getString());
  FIX::IssueDate IssueDate_40("LOCALMKTDATE_2065991015");
  msg.set(IssueDate_40);
  Instrument_40.insert(IssueDate_40.getString());
  FIX::Issuer Issuer_40("STRING_1092216384");
  msg.set(Issuer_40);
  Instrument_40.insert(Issuer_40.getString());
  FIX::ListMethod ListMethod_40(0);
  msg.set(ListMethod_40);
  Instrument_40.insert(ListMethod_40.getString());
  FIX::LocaleOfIssue LocaleOfIssue_40("STRING_1987116703");
  msg.set(LocaleOfIssue_40);
  Instrument_40.insert(LocaleOfIssue_40.getString());
  FIX::MaturityDate MaturityDate_40("LOCALMKTDATE_1256550214");
  msg.set(MaturityDate_40);
  Instrument_40.insert(MaturityDate_40.getString());
  FIX::MaturityMonthYear MaturityMonthYear_40("MONTHYEAR_1392637214");
  msg.set(MaturityMonthYear_40);
  Instrument_40.insert(MaturityMonthYear_40.getString());
  FIX::MaturityTime MaturityTime_40("TZTIMEONLY_904304660");
  msg.set(MaturityTime_40);
  Instrument_40.insert(MaturityTime_40.getString());
  FIX::MinPriceIncrement MinPriceIncrement_40;
  MinPriceIncrement_40.setString("7761565");
  msg.set(MinPriceIncrement_40);
  Instrument_40.insert(MinPriceIncrement_40.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_40;
  MinPriceIncrementAmount_40.setString("9167494");
  msg.set(MinPriceIncrementAmount_40);
  Instrument_40.insert(MinPriceIncrementAmount_40.getString());
  FIX::NTPositionLimit NTPositionLimit_40(1377992074);
  msg.set(NTPositionLimit_40);
  Instrument_40.insert(NTPositionLimit_40.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_40;
  NotionalPercentageOutstanding_40.setString("86.420000");
  msg.set(NotionalPercentageOutstanding_40);
  Instrument_40.insert(NotionalPercentageOutstanding_40.getString());
  FIX::OptAttribute OptAttribute_40('6');
  msg.set(OptAttribute_40);
  Instrument_40.insert(OptAttribute_40.getString());
  FIX::OptPayoutAmount OptPayoutAmount_40;
  OptPayoutAmount_40.setString("6735681");
  msg.set(OptPayoutAmount_40);
  Instrument_40.insert(OptPayoutAmount_40.getString());
  FIX::OptPayoutType OptPayoutType_40(2);
  msg.set(OptPayoutType_40);
  Instrument_40.insert(OptPayoutType_40.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_40;
  OriginalNotionalPercentageOutstanding_40.setString("60.530000");
  msg.set(OriginalNotionalPercentageOutstanding_40);
  Instrument_40.insert(OriginalNotionalPercentageOutstanding_40.getString());
  FIX::Pool Pool_40("STRING_1608299942");
  msg.set(Pool_40);
  Instrument_40.insert(Pool_40.getString());
  FIX::PositionLimit PositionLimit_40(1058124559);
  msg.set(PositionLimit_40);
  Instrument_40.insert(PositionLimit_40.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_40("STRING_STD");
  msg.set(PriceQuoteMethod_40);
  Instrument_40.insert(PriceQuoteMethod_40.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_40("STRING_601569567");
  msg.set(PriceUnitOfMeasure_40);
  Instrument_40.insert(PriceUnitOfMeasure_40.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_40;
  PriceUnitOfMeasureQty_40.setString("92862");
  msg.set(PriceUnitOfMeasureQty_40);
  Instrument_40.insert(PriceUnitOfMeasureQty_40.getString());
  FIX::Product Product_42(13);
  msg.set(Product_42);
  Instrument_40.insert(Product_42.getString());
  FIX::ProductComplex ProductComplex_40("STRING_2018241560");
  msg.set(ProductComplex_40);
  Instrument_40.insert(ProductComplex_40.getString());
  FIX::PutOrCall PutOrCall_40(0);
  msg.set(PutOrCall_40);
  Instrument_40.insert(PutOrCall_40.getString());
  FIX::RedemptionDate RedemptionDate_40("LOCALMKTDATE_609590620");
  msg.set(RedemptionDate_40);
  Instrument_40.insert(RedemptionDate_40.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_40("STRING_1136062341");
  msg.set(RepoCollateralSecurityType_40);
  Instrument_40.insert(RepoCollateralSecurityType_40.getString());
  FIX::RepurchaseRate RepurchaseRate_40;
  RepurchaseRate_40.setString("81.270000");
  msg.set(RepurchaseRate_40);
  Instrument_40.insert(RepurchaseRate_40.getString());
  FIX::RepurchaseTerm RepurchaseTerm_40(423821025);
  msg.set(RepurchaseTerm_40);
  Instrument_40.insert(RepurchaseTerm_40.getString());
  FIX::RestructuringType RestructuringType_40("STRING_MR");
  msg.set(RestructuringType_40);
  Instrument_40.insert(RestructuringType_40.getString());
  FIX::SecurityDesc SecurityDesc_40("STRING_111065660");
  msg.set(SecurityDesc_40);
  Instrument_40.insert(SecurityDesc_40.getString());
  FIX::SecurityExchange SecurityExchange_40("EXCHANGE_1191812935");
  msg.set(SecurityExchange_40);
  Instrument_40.insert(SecurityExchange_40.getString());
  FIX::SecurityGroup SecurityGroup_40("STRING_1029686854");
  msg.set(SecurityGroup_40);
  Instrument_40.insert(SecurityGroup_40.getString());
  FIX::SecurityID SecurityID_40("STRING_29573028");
  msg.set(SecurityID_40);
  Instrument_40.insert(SecurityID_40.getString());
  FIX::SecurityIDSource SecurityIDSource_40("STRING_A");
  msg.set(SecurityIDSource_40);
  Instrument_40.insert(SecurityIDSource_40.getString());
  FIX::SecurityStatus SecurityStatus_40("STRING_1");
  msg.set(SecurityStatus_40);
  Instrument_40.insert(SecurityStatus_40.getString());
  FIX::SecuritySubType SecuritySubType_41("STRING_2016689731");
  msg.set(SecuritySubType_41);
  Instrument_40.insert(SecuritySubType_41.getString());
  FIX::SecurityType SecurityType_42("STRING_TINT");
  msg.set(SecurityType_42);
  Instrument_40.insert(SecurityType_42.getString());
  FIX::Seniority Seniority_40("STRING_SR");
  msg.set(Seniority_40);
  Instrument_40.insert(Seniority_40.getString());
  FIX::SettlMethod SettlMethod_40('P');
  msg.set(SettlMethod_40);
  Instrument_40.insert(SettlMethod_40.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_40("STRING_21768768");
  msg.set(SettleOnOpenFlag_40);
  Instrument_40.insert(SettleOnOpenFlag_40.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_40("STRING_7101989");
  msg.set(StateOrProvinceOfIssue_40);
  Instrument_40.insert(StateOrProvinceOfIssue_40.getString());
  FIX::StrikeCurrency StrikeCurrency_40("CHF");
  msg.set(StrikeCurrency_40);
  Instrument_40.insert(StrikeCurrency_40.getString());
  FIX::StrikeMultiplier StrikeMultiplier_40;
  StrikeMultiplier_40.setString("6279055");
  msg.set(StrikeMultiplier_40);
  Instrument_40.insert(StrikeMultiplier_40.getString());
  FIX::StrikePrice StrikePrice_40;
  StrikePrice_40.setString("6775872");
  msg.set(StrikePrice_40);
  Instrument_40.insert(StrikePrice_40.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_40(3);
  msg.set(StrikePriceBoundaryMethod_40);
  Instrument_40.insert(StrikePriceBoundaryMethod_40.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_40;
  StrikePriceBoundaryPrecision_40.setString("16.050000");
  msg.set(StrikePriceBoundaryPrecision_40);
  Instrument_40.insert(StrikePriceBoundaryPrecision_40.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_40(2);
  msg.set(StrikePriceDeterminationMethod_40);
  Instrument_40.insert(StrikePriceDeterminationMethod_40.getString());
  FIX::StrikeValue StrikeValue_40;
  StrikeValue_40.setString("5713013");
  msg.set(StrikeValue_40);
  Instrument_40.insert(StrikeValue_40.getString());
  FIX::Symbol Symbol_40("STRING_6328897");
  msg.set(Symbol_40);
  Instrument_40.insert(Symbol_40.getString());
  FIX::SymbolSfx SymbolSfx_40("STRING_CD");
  msg.set(SymbolSfx_40);
  Instrument_40.insert(SymbolSfx_40.getString());
  FIX::TimeUnit TimeUnit_40("STRING_Wk");
  msg.set(TimeUnit_40);
  Instrument_40.insert(TimeUnit_40.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_40(4);
  msg.set(UnderlyingPriceDeterminationMethod_40);
  Instrument_40.insert(UnderlyingPriceDeterminationMethod_40.getString());
  FIX::UnitOfMeasure UnitOfMeasure_40("STRING_tn");
  msg.set(UnitOfMeasure_40);
  Instrument_40.insert(UnitOfMeasure_40.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_40;
  UnitOfMeasureQty_40.setString("11896339");
  msg.set(UnitOfMeasureQty_40);
  Instrument_40.insert(UnitOfMeasureQty_40.getString());
  FIX::ValuationMethod ValuationMethod_40("STRING_FUTDA");
  msg.set(ValuationMethod_40);
  Instrument_40.insert(ValuationMethod_40.getString());
  all_values.push_back(Instrument_40);
  all_compo_names.insert("Instrument");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::NewOrderSingle::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_76;
    FIX::ComplexEventCondition ComplexEventCondition_76(1);
    noComplexEvents_0_0.set(ComplexEventCondition_76);
    ComplexEvents_NoComplexEvents_76.insert(ComplexEventCondition_76.getString());
    FIX::ComplexEventPrice ComplexEventPrice_76;
    ComplexEventPrice_76.setString("9666424");
    noComplexEvents_0_0.set(ComplexEventPrice_76);
    ComplexEvents_NoComplexEvents_76.insert(ComplexEventPrice_76.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_76(4);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_76);
    ComplexEvents_NoComplexEvents_76.insert(ComplexEventPriceBoundaryMethod_76.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_76;
    ComplexEventPriceBoundaryPrecision_76.setString("41.380000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_76);
    ComplexEvents_NoComplexEvents_76.insert(ComplexEventPriceBoundaryPrecision_76.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_76(1);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_76);
    ComplexEvents_NoComplexEvents_76.insert(ComplexEventPriceTimeType_76.getString());
    FIX::ComplexEventType ComplexEventType_76(8);
    noComplexEvents_0_0.set(ComplexEventType_76);
    ComplexEvents_NoComplexEvents_76.insert(ComplexEventType_76.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_76;
    ComplexOptPayoutAmount_76.setString("6883371");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_76);
    ComplexEvents_NoComplexEvents_76.insert(ComplexOptPayoutAmount_76.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_76);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::NewOrderSingle::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_162;
      FIX::ComplexEventEndDate ComplexEventEndDate_162(FIX::UTCTIMESTAMP(17, 57, 35, 16, 10, 2005));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_162);
      ComplexEventDates_NoComplexEventDates_162.insert(ComplexEventEndDate_162.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_162(FIX::UTCTIMESTAMP(4, 36, 41, 1, 2, 2004));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_162);
      ComplexEventDates_NoComplexEventDates_162.insert(ComplexEventStartDate_162.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_162);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::NewOrderSingle::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_323;
        FIX::ComplexEventEndTime ComplexEventEndTime_323(FIX::UTCTIMEONLY(2, 9, 37));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_323);
        ComplexEventTimes_NoComplexEventTimes_323.insert(ComplexEventEndTime_323.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_323(FIX::UTCTIMEONLY(4, 4, 25));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_323);
        ComplexEventTimes_NoComplexEventTimes_323.insert(ComplexEventStartTime_323.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_323);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::NewOrderSingle::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_324;
        FIX::ComplexEventEndTime ComplexEventEndTime_324(FIX::UTCTIMEONLY(17, 29, 37));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_324);
        ComplexEventTimes_NoComplexEventTimes_324.insert(ComplexEventEndTime_324.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_324(FIX::UTCTIMEONLY(22, 43, 28));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_324);
        ComplexEventTimes_NoComplexEventTimes_324.insert(ComplexEventStartTime_324.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_324);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::NewOrderSingle::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_325;
        FIX::ComplexEventEndTime ComplexEventEndTime_325(FIX::UTCTIMEONLY(5, 17, 29));
        noComplexEventTimes_0_0_2_2.set(ComplexEventEndTime_325);
        ComplexEventTimes_NoComplexEventTimes_325.insert(ComplexEventEndTime_325.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_325(FIX::UTCTIMEONLY(19, 34, 31));
        noComplexEventTimes_0_0_2_2.set(ComplexEventStartTime_325);
        ComplexEventTimes_NoComplexEventTimes_325.insert(ComplexEventStartTime_325.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_325);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::NewOrderSingle::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_163;
      FIX::ComplexEventEndDate ComplexEventEndDate_163(FIX::UTCTIMESTAMP(15, 4, 36, 8, 3, 2017));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_163);
      ComplexEventDates_NoComplexEventDates_163.insert(ComplexEventEndDate_163.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_163(FIX::UTCTIMESTAMP(17, 3, 44, 20, 12, 2007));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_163);
      ComplexEventDates_NoComplexEventDates_163.insert(ComplexEventStartDate_163.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_163);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::NewOrderSingle::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_326;
        FIX::ComplexEventEndTime ComplexEventEndTime_326(FIX::UTCTIMEONLY(10, 15, 19));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_326);
        ComplexEventTimes_NoComplexEventTimes_326.insert(ComplexEventEndTime_326.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_326(FIX::UTCTIMEONLY(1, 54, 35));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_326);
        ComplexEventTimes_NoComplexEventTimes_326.insert(ComplexEventStartTime_326.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_326);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::NewOrderSingle::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_164;
      FIX::ComplexEventEndDate ComplexEventEndDate_164(FIX::UTCTIMESTAMP(11, 45, 29, 5, 5, 2009));
      noComplexEventDates_0_1_2.set(ComplexEventEndDate_164);
      ComplexEventDates_NoComplexEventDates_164.insert(ComplexEventEndDate_164.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_164(FIX::UTCTIMESTAMP(19, 6, 45, 20, 12, 2017));
      noComplexEventDates_0_1_2.set(ComplexEventStartDate_164);
      ComplexEventDates_NoComplexEventDates_164.insert(ComplexEventStartDate_164.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_164);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::NewOrderSingle::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_327;
        FIX::ComplexEventEndTime ComplexEventEndTime_327(FIX::UTCTIMEONLY(8, 28, 6));
        noComplexEventTimes_0_2_2_0.set(ComplexEventEndTime_327);
        ComplexEventTimes_NoComplexEventTimes_327.insert(ComplexEventEndTime_327.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_327(FIX::UTCTIMEONLY(4, 55, 59));
        noComplexEventTimes_0_2_2_0.set(ComplexEventStartTime_327);
        ComplexEventTimes_NoComplexEventTimes_327.insert(ComplexEventStartTime_327.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_327);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      {
        FIX50SP2::NewOrderSingle::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_328;
        FIX::ComplexEventEndTime ComplexEventEndTime_328(FIX::UTCTIMEONLY(9, 14, 37));
        noComplexEventTimes_0_2_2_1.set(ComplexEventEndTime_328);
        ComplexEventTimes_NoComplexEventTimes_328.insert(ComplexEventEndTime_328.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_328(FIX::UTCTIMEONLY(7, 31, 20));
        noComplexEventTimes_0_2_2_1.set(ComplexEventStartTime_328);
        ComplexEventTimes_NoComplexEventTimes_328.insert(ComplexEventStartTime_328.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_328);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::NewOrderSingle::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_77;
    FIX::ComplexEventCondition ComplexEventCondition_77(2);
    noComplexEvents_0_1.set(ComplexEventCondition_77);
    ComplexEvents_NoComplexEvents_77.insert(ComplexEventCondition_77.getString());
    FIX::ComplexEventPrice ComplexEventPrice_77;
    ComplexEventPrice_77.setString("7206663");
    noComplexEvents_0_1.set(ComplexEventPrice_77);
    ComplexEvents_NoComplexEvents_77.insert(ComplexEventPrice_77.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_77(1);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_77);
    ComplexEvents_NoComplexEvents_77.insert(ComplexEventPriceBoundaryMethod_77.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_77;
    ComplexEventPriceBoundaryPrecision_77.setString("4.760000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_77);
    ComplexEvents_NoComplexEvents_77.insert(ComplexEventPriceBoundaryPrecision_77.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_77(3);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_77);
    ComplexEvents_NoComplexEvents_77.insert(ComplexEventPriceTimeType_77.getString());
    FIX::ComplexEventType ComplexEventType_77(8);
    noComplexEvents_0_1.set(ComplexEventType_77);
    ComplexEvents_NoComplexEvents_77.insert(ComplexEventType_77.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_77;
    ComplexOptPayoutAmount_77.setString("11764463");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_77);
    ComplexEvents_NoComplexEvents_77.insert(ComplexOptPayoutAmount_77.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_77);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::NewOrderSingle::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_165;
      FIX::ComplexEventEndDate ComplexEventEndDate_165(FIX::UTCTIMESTAMP(2, 49, 4, 13, 6, 2000));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_165);
      ComplexEventDates_NoComplexEventDates_165.insert(ComplexEventEndDate_165.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_165(FIX::UTCTIMESTAMP(1, 50, 41, 22, 11, 2017));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_165);
      ComplexEventDates_NoComplexEventDates_165.insert(ComplexEventStartDate_165.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_165);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::NewOrderSingle::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_329;
        FIX::ComplexEventEndTime ComplexEventEndTime_329(FIX::UTCTIMEONLY(2, 11, 37));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_329);
        ComplexEventTimes_NoComplexEventTimes_329.insert(ComplexEventEndTime_329.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_329(FIX::UTCTIMEONLY(19, 1, 27));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_329);
        ComplexEventTimes_NoComplexEventTimes_329.insert(ComplexEventStartTime_329.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_329);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::NewOrderSingle::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_330;
        FIX::ComplexEventEndTime ComplexEventEndTime_330(FIX::UTCTIMEONLY(0, 24, 38));
        noComplexEventTimes_1_0_2_1.set(ComplexEventEndTime_330);
        ComplexEventTimes_NoComplexEventTimes_330.insert(ComplexEventEndTime_330.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_330(FIX::UTCTIMEONLY(1, 29, 52));
        noComplexEventTimes_1_0_2_1.set(ComplexEventStartTime_330);
        ComplexEventTimes_NoComplexEventTimes_330.insert(ComplexEventStartTime_330.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_330);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      {
        FIX50SP2::NewOrderSingle::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_331;
        FIX::ComplexEventEndTime ComplexEventEndTime_331(FIX::UTCTIMEONLY(11, 42, 30));
        noComplexEventTimes_1_0_2_2.set(ComplexEventEndTime_331);
        ComplexEventTimes_NoComplexEventTimes_331.insert(ComplexEventEndTime_331.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_331(FIX::UTCTIMEONLY(3, 0, 51));
        noComplexEventTimes_1_0_2_2.set(ComplexEventStartTime_331);
        ComplexEventTimes_NoComplexEventTimes_331.insert(ComplexEventStartTime_331.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_331);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::NewOrderSingle::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_166;
      FIX::ComplexEventEndDate ComplexEventEndDate_166(FIX::UTCTIMESTAMP(6, 25, 43, 1, 11, 2006));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_166);
      ComplexEventDates_NoComplexEventDates_166.insert(ComplexEventEndDate_166.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_166(FIX::UTCTIMESTAMP(12, 52, 47, 19, 12, 2006));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_166);
      ComplexEventDates_NoComplexEventDates_166.insert(ComplexEventStartDate_166.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_166);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::NewOrderSingle::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_332;
        FIX::ComplexEventEndTime ComplexEventEndTime_332(FIX::UTCTIMEONLY(12, 34, 43));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_332);
        ComplexEventTimes_NoComplexEventTimes_332.insert(ComplexEventEndTime_332.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_332(FIX::UTCTIMEONLY(23, 12, 44));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_332);
        ComplexEventTimes_NoComplexEventTimes_332.insert(ComplexEventStartTime_332.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_332);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::NewOrderSingle::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_78;
    FIX::ComplexEventCondition ComplexEventCondition_78(2);
    noComplexEvents_0_2.set(ComplexEventCondition_78);
    ComplexEvents_NoComplexEvents_78.insert(ComplexEventCondition_78.getString());
    FIX::ComplexEventPrice ComplexEventPrice_78;
    ComplexEventPrice_78.setString("20873755");
    noComplexEvents_0_2.set(ComplexEventPrice_78);
    ComplexEvents_NoComplexEvents_78.insert(ComplexEventPrice_78.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_78(4);
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryMethod_78);
    ComplexEvents_NoComplexEvents_78.insert(ComplexEventPriceBoundaryMethod_78.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_78;
    ComplexEventPriceBoundaryPrecision_78.setString("3.630000");
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryPrecision_78);
    ComplexEvents_NoComplexEvents_78.insert(ComplexEventPriceBoundaryPrecision_78.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_78(2);
    noComplexEvents_0_2.set(ComplexEventPriceTimeType_78);
    ComplexEvents_NoComplexEvents_78.insert(ComplexEventPriceTimeType_78.getString());
    FIX::ComplexEventType ComplexEventType_78(1);
    noComplexEvents_0_2.set(ComplexEventType_78);
    ComplexEvents_NoComplexEvents_78.insert(ComplexEventType_78.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_78;
    ComplexOptPayoutAmount_78.setString("5407506");
    noComplexEvents_0_2.set(ComplexOptPayoutAmount_78);
    ComplexEvents_NoComplexEvents_78.insert(ComplexOptPayoutAmount_78.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_78);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::NewOrderSingle::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_167;
      FIX::ComplexEventEndDate ComplexEventEndDate_167(FIX::UTCTIMESTAMP(21, 41, 29, 26, 4, 2009));
      noComplexEventDates_2_1_0.set(ComplexEventEndDate_167);
      ComplexEventDates_NoComplexEventDates_167.insert(ComplexEventEndDate_167.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_167(FIX::UTCTIMESTAMP(19, 1, 11, 19, 1, 2011));
      noComplexEventDates_2_1_0.set(ComplexEventStartDate_167);
      ComplexEventDates_NoComplexEventDates_167.insert(ComplexEventStartDate_167.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_167);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::NewOrderSingle::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_333;
        FIX::ComplexEventEndTime ComplexEventEndTime_333(FIX::UTCTIMEONLY(3, 4, 12));
        noComplexEventTimes_2_0_2_0.set(ComplexEventEndTime_333);
        ComplexEventTimes_NoComplexEventTimes_333.insert(ComplexEventEndTime_333.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_333(FIX::UTCTIMEONLY(19, 17, 31));
        noComplexEventTimes_2_0_2_0.set(ComplexEventStartTime_333);
        ComplexEventTimes_NoComplexEventTimes_333.insert(ComplexEventStartTime_333.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_333);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      {
        FIX50SP2::NewOrderSingle::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_334;
        FIX::ComplexEventEndTime ComplexEventEndTime_334(FIX::UTCTIMEONLY(9, 50, 47));
        noComplexEventTimes_2_0_2_1.set(ComplexEventEndTime_334);
        ComplexEventTimes_NoComplexEventTimes_334.insert(ComplexEventEndTime_334.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_334(FIX::UTCTIMEONLY(3, 2, 29));
        noComplexEventTimes_2_0_2_1.set(ComplexEventStartTime_334);
        ComplexEventTimes_NoComplexEventTimes_334.insert(ComplexEventStartTime_334.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_334);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_1);
      }
      {
        FIX50SP2::NewOrderSingle::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_335;
        FIX::ComplexEventEndTime ComplexEventEndTime_335(FIX::UTCTIMEONLY(4, 10, 6));
        noComplexEventTimes_2_0_2_2.set(ComplexEventEndTime_335);
        ComplexEventTimes_NoComplexEventTimes_335.insert(ComplexEventEndTime_335.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_335(FIX::UTCTIMEONLY(13, 16, 22));
        noComplexEventTimes_2_0_2_2.set(ComplexEventStartTime_335);
        ComplexEventTimes_NoComplexEventTimes_335.insert(ComplexEventStartTime_335.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_335);
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
    FIX50SP2::NewOrderSingle::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_77;
    FIX::EventDate EventDate_77("LOCALMKTDATE_1752911777");
    noEvents_0_0.set(EventDate_77);
    EvntGrp_NoEvents_77.insert(EventDate_77.getString());
    FIX::EventPx EventPx_77;
    EventPx_77.setString("12102870");
    noEvents_0_0.set(EventPx_77);
    EvntGrp_NoEvents_77.insert(EventPx_77.getString());
    FIX::EventText EventText_77("STRING_1616806988");
    noEvents_0_0.set(EventText_77);
    EvntGrp_NoEvents_77.insert(EventText_77.getString());
    FIX::EventTime EventTime_77(FIX::UTCTIMESTAMP(0, 29, 3, 23, 2, 2004));
    noEvents_0_0.set(EventTime_77);
    EvntGrp_NoEvents_77.insert(EventTime_77.getString());
    FIX::EventType EventType_77(15);
    noEvents_0_0.set(EventType_77);
    EvntGrp_NoEvents_77.insert(EventType_77.getString());
    all_values.push_back(EvntGrp_NoEvents_77);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::NewOrderSingle::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_73;
    FIX::InstrumentPartyID InstrumentPartyID_73("STRING_385964965");
    noInstrumentParties_0_0.set(InstrumentPartyID_73);
    InstrumentParties_NoInstrumentParties_73.insert(InstrumentPartyID_73.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_73('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_73);
    InstrumentParties_NoInstrumentParties_73.insert(InstrumentPartyIDSource_73.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_73(213361453);
    noInstrumentParties_0_0.set(InstrumentPartyRole_73);
    InstrumentParties_NoInstrumentParties_73.insert(InstrumentPartyRole_73.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_73);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::NewOrderSingle::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_143;
      FIX::InstrumentPartySubID InstrumentPartySubID_143("STRING_2127577896");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_143);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_143.insert(InstrumentPartySubID_143.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_143(1801789861);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_143);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_143.insert(InstrumentPartySubIDType_143.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_143);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::NewOrderSingle::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_144;
      FIX::InstrumentPartySubID InstrumentPartySubID_144("STRING_1111274283");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_144);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_144.insert(InstrumentPartySubID_144.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_144(71344339);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_144);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_144.insert(InstrumentPartySubIDType_144.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_144);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::NewOrderSingle::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_81;
    FIX::SecurityAltID SecurityAltID_81("STRING_130375645");
    noSecurityAltID_0_0.set(SecurityAltID_81);
    SecAltIDGrp_NoSecurityAltID_81.insert(SecurityAltID_81.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_81("STRING_706134957");
    noSecurityAltID_0_0.set(SecurityAltIDSource_81);
    SecAltIDGrp_NoSecurityAltID_81.insert(SecurityAltIDSource_81.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_81);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::NewOrderSingle::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_82;
    FIX::SecurityAltID SecurityAltID_82("STRING_480922119");
    noSecurityAltID_0_1.set(SecurityAltID_82);
    SecAltIDGrp_NoSecurityAltID_82.insert(SecurityAltID_82.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_82("STRING_1297699475");
    noSecurityAltID_0_1.set(SecurityAltIDSource_82);
    SecAltIDGrp_NoSecurityAltID_82.insert(SecurityAltIDSource_82.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_82);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_80;
  FIX::SecurityXML SecurityXML_81("XMLDATA_2007263763");
  msg.set(SecurityXML_81);
  FIX::SecurityXMLLen SecurityXMLLen_40(516101198);
  msg.set(SecurityXMLLen_40);
  FIX::SecurityXMLSchema SecurityXMLSchema_40("STRING_750730145");
  msg.set(SecurityXMLSchema_40);
  SecurityXML_80.insert(SecurityXMLSchema_40.getString());
  all_values.push_back(SecurityXML_80);
  all_compo_names.insert("SecurityXML");

  // OrderQtyData
  multiset<string> OrderQtyData_13;
  FIX::CashOrderQty CashOrderQty_13;
  CashOrderQty_13.setString("13812865");
  msg.set(CashOrderQty_13);
  OrderQtyData_13.insert(CashOrderQty_13.getString());
  FIX::OrderPercent OrderPercent_13;
  OrderPercent_13.setString("51.400000");
  msg.set(OrderPercent_13);
  OrderQtyData_13.insert(OrderPercent_13.getString());
  FIX::OrderQty OrderQty_23;
  OrderQty_23.setString("4556047");
  msg.set(OrderQty_23);
  OrderQtyData_13.insert(OrderQty_23.getString());
  FIX::RoundingDirection RoundingDirection_13('0');
  msg.set(RoundingDirection_13);
  OrderQtyData_13.insert(RoundingDirection_13.getString());
  FIX::RoundingModulus RoundingModulus_13;
  RoundingModulus_13.setString("815985");
  msg.set(RoundingModulus_13);
  OrderQtyData_13.insert(RoundingModulus_13.getString());
  all_values.push_back(OrderQtyData_13);
  all_compo_names.insert("OrderQtyData");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::NewOrderSingle::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_65;
    FIX::PartyID PartyID_65("STRING_1684617715");
    noPartyIDs_0_0.set(PartyID_65);
    Parties_NoPartyIDs_65.insert(PartyID_65.getString());
    FIX::PartyIDSource PartyIDSource_65('4');
    noPartyIDs_0_0.set(PartyIDSource_65);
    Parties_NoPartyIDs_65.insert(PartyIDSource_65.getString());
    FIX::PartyRole PartyRole_65(25);
    noPartyIDs_0_0.set(PartyRole_65);
    Parties_NoPartyIDs_65.insert(PartyRole_65.getString());
    all_values.push_back(Parties_NoPartyIDs_65);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::NewOrderSingle::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_126;
      FIX::PartySubID PartySubID_126("STRING_413593570");
      noPartySubIDs_0_1_0.set(PartySubID_126);
      PtysSubGrp_NoPartySubIDs_126.insert(PartySubID_126.getString());
      FIX::PartySubIDType PartySubIDType_126(8);
      noPartySubIDs_0_1_0.set(PartySubIDType_126);
      PtysSubGrp_NoPartySubIDs_126.insert(PartySubIDType_126.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_126);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::NewOrderSingle::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_127;
      FIX::PartySubID PartySubID_127("STRING_561169438");
      noPartySubIDs_0_1_1.set(PartySubID_127);
      PtysSubGrp_NoPartySubIDs_127.insert(PartySubID_127.getString());
      FIX::PartySubIDType PartySubIDType_127(19);
      noPartySubIDs_0_1_1.set(PartySubIDType_127);
      PtysSubGrp_NoPartySubIDs_127.insert(PartySubIDType_127.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_127);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::NewOrderSingle::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_128;
      FIX::PartySubID PartySubID_128("STRING_2139928726");
      noPartySubIDs_0_1_2.set(PartySubID_128);
      PtysSubGrp_NoPartySubIDs_128.insert(PartySubID_128.getString());
      FIX::PartySubIDType PartySubIDType_128(18);
      noPartySubIDs_0_1_2.set(PartySubIDType_128);
      PtysSubGrp_NoPartySubIDs_128.insert(PartySubIDType_128.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_128);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::NewOrderSingle::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_66;
    FIX::PartyID PartyID_66("STRING_1152698282");
    noPartyIDs_0_1.set(PartyID_66);
    Parties_NoPartyIDs_66.insert(PartyID_66.getString());
    FIX::PartyIDSource PartyIDSource_66('9');
    noPartyIDs_0_1.set(PartyIDSource_66);
    Parties_NoPartyIDs_66.insert(PartyIDSource_66.getString());
    FIX::PartyRole PartyRole_66(35);
    noPartyIDs_0_1.set(PartyRole_66);
    Parties_NoPartyIDs_66.insert(PartyRole_66.getString());
    all_values.push_back(Parties_NoPartyIDs_66);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::NewOrderSingle::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_129;
      FIX::PartySubID PartySubID_129("STRING_2007596392");
      noPartySubIDs_1_1_0.set(PartySubID_129);
      PtysSubGrp_NoPartySubIDs_129.insert(PartySubID_129.getString());
      FIX::PartySubIDType PartySubIDType_129(33);
      noPartySubIDs_1_1_0.set(PartySubIDType_129);
      PtysSubGrp_NoPartySubIDs_129.insert(PartySubIDType_129.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_129);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::NewOrderSingle::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_67;
    FIX::PartyID PartyID_67("STRING_1204136870");
    noPartyIDs_0_2.set(PartyID_67);
    Parties_NoPartyIDs_67.insert(PartyID_67.getString());
    FIX::PartyIDSource PartyIDSource_67('G');
    noPartyIDs_0_2.set(PartyIDSource_67);
    Parties_NoPartyIDs_67.insert(PartyIDSource_67.getString());
    FIX::PartyRole PartyRole_67(56);
    noPartyIDs_0_2.set(PartyRole_67);
    Parties_NoPartyIDs_67.insert(PartyRole_67.getString());
    all_values.push_back(Parties_NoPartyIDs_67);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::NewOrderSingle::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_130;
      FIX::PartySubID PartySubID_130("STRING_2124520099");
      noPartySubIDs_2_1_0.set(PartySubID_130);
      PtysSubGrp_NoPartySubIDs_130.insert(PartySubID_130.getString());
      FIX::PartySubIDType PartySubIDType_130(19);
      noPartySubIDs_2_1_0.set(PartySubIDType_130);
      PtysSubGrp_NoPartySubIDs_130.insert(PartySubIDType_130.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_130);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::NewOrderSingle::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_131;
      FIX::PartySubID PartySubID_131("STRING_1770051942");
      noPartySubIDs_2_1_1.set(PartySubID_131);
      PtysSubGrp_NoPartySubIDs_131.insert(PartySubID_131.getString());
      FIX::PartySubIDType PartySubIDType_131(5);
      noPartySubIDs_2_1_1.set(PartySubIDType_131);
      PtysSubGrp_NoPartySubIDs_131.insert(PartySubIDType_131.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_131);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_1);
    }
    {
      FIX50SP2::NewOrderSingle::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_132;
      FIX::PartySubID PartySubID_132("STRING_866810534");
      noPartySubIDs_2_1_2.set(PartySubID_132);
      PtysSubGrp_NoPartySubIDs_132.insert(PartySubID_132.getString());
      FIX::PartySubIDType PartySubIDType_132(8);
      noPartySubIDs_2_1_2.set(PartySubIDType_132);
      PtysSubGrp_NoPartySubIDs_132.insert(PartySubIDType_132.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_132);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_2);
    }
    msg.addGroup(noPartyIDs_0_2);
  }
  // PegInstructions
  multiset<string> PegInstructions_6;
  FIX::PegLimitType PegLimitType_6(2);
  msg.set(PegLimitType_6);
  PegInstructions_6.insert(PegLimitType_6.getString());
  FIX::PegMoveType PegMoveType_6(0);
  msg.set(PegMoveType_6);
  PegInstructions_6.insert(PegMoveType_6.getString());
  FIX::PegOffsetType PegOffsetType_6(3);
  msg.set(PegOffsetType_6);
  PegInstructions_6.insert(PegOffsetType_6.getString());
  FIX::PegOffsetValue PegOffsetValue_6;
  PegOffsetValue_6.setString("15935313");
  msg.set(PegOffsetValue_6);
  PegInstructions_6.insert(PegOffsetValue_6.getString());
  FIX::PegPriceType PegPriceType_6(8);
  msg.set(PegPriceType_6);
  PegInstructions_6.insert(PegPriceType_6.getString());
  FIX::PegRoundDirection PegRoundDirection_6(1);
  msg.set(PegRoundDirection_6);
  PegInstructions_6.insert(PegRoundDirection_6.getString());
  FIX::PegScope PegScope_6(3);
  msg.set(PegScope_6);
  PegInstructions_6.insert(PegScope_6.getString());
  FIX::PegSecurityDesc PegSecurityDesc_6("STRING_1892075246");
  msg.set(PegSecurityDesc_6);
  PegInstructions_6.insert(PegSecurityDesc_6.getString());
  FIX::PegSecurityID PegSecurityID_6("STRING_154131396");
  msg.set(PegSecurityID_6);
  PegInstructions_6.insert(PegSecurityID_6.getString());
  FIX::PegSecurityIDSource PegSecurityIDSource_6("STRING_491233868");
  msg.set(PegSecurityIDSource_6);
  PegInstructions_6.insert(PegSecurityIDSource_6.getString());
  FIX::PegSymbol PegSymbol_6("STRING_512053267");
  msg.set(PegSymbol_6);
  PegInstructions_6.insert(PegSymbol_6.getString());
  all_values.push_back(PegInstructions_6);
  all_compo_names.insert("PegInstructions");

  // PreAllocGrp
  // Group PreAllocGrp.NoAllocs
  {
    FIX50SP2::NewOrderSingle::NoAllocs noAllocs_0_0;
    // PreAllocGrp.NoAllocs
    multiset<string> PreAllocGrp_NoAllocs_15;
    FIX::AllocAccount AllocAccount_34("STRING_141847705");
    noAllocs_0_0.set(AllocAccount_34);
    PreAllocGrp_NoAllocs_15.insert(AllocAccount_34.getString());
    FIX::AllocAcctIDSource AllocAcctIDSource_34(504498345);
    noAllocs_0_0.set(AllocAcctIDSource_34);
    PreAllocGrp_NoAllocs_15.insert(AllocAcctIDSource_34.getString());
    FIX::AllocQty AllocQty_33;
    AllocQty_33.setString("16624352");
    noAllocs_0_0.set(AllocQty_33);
    PreAllocGrp_NoAllocs_15.insert(AllocQty_33.getString());
    FIX::AllocSettlCurrency AllocSettlCurrency_27("USD");
    noAllocs_0_0.set(AllocSettlCurrency_27);
    PreAllocGrp_NoAllocs_15.insert(AllocSettlCurrency_27.getString());
    FIX::IndividualAllocID IndividualAllocID_34("STRING_1386649872");
    noAllocs_0_0.set(IndividualAllocID_34);
    PreAllocGrp_NoAllocs_15.insert(IndividualAllocID_34.getString());
    all_values.push_back(PreAllocGrp_NoAllocs_15);
    all_compo_names.insert("PreAllocGrp.NoAllocs");

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::NewOrderSingle::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_71;
      FIX::NestedPartyID NestedPartyID_71("STRING_570417621");
      noNestedPartyIDs_0_1_0.set(NestedPartyID_71);
      NestedParties_NoNestedPartyIDs_71.insert(NestedPartyID_71.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_71('7');
      noNestedPartyIDs_0_1_0.set(NestedPartyIDSource_71);
      NestedParties_NoNestedPartyIDs_71.insert(NestedPartyIDSource_71.getString());
      FIX::NestedPartyRole NestedPartyRole_71(1483991740);
      noNestedPartyIDs_0_1_0.set(NestedPartyRole_71);
      NestedParties_NoNestedPartyIDs_71.insert(NestedPartyRole_71.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_71);
      all_compo_names.insert("NestedParties.NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::NewOrderSingle::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_144;
        FIX::NestedPartySubID NestedPartySubID_144("STRING_1040519703");
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubID_144);
        NstdPtysSubGrp_NoNestedPartySubIDs_144.insert(NestedPartySubID_144.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_144(1246779919);
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubIDType_144);
        NstdPtysSubGrp_NoNestedPartySubIDs_144.insert(NestedPartySubIDType_144.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_144);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::NewOrderSingle::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_145;
        FIX::NestedPartySubID NestedPartySubID_145("STRING_43568404");
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubID_145);
        NstdPtysSubGrp_NoNestedPartySubIDs_145.insert(NestedPartySubID_145.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_145(1156600092);
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubIDType_145);
        NstdPtysSubGrp_NoNestedPartySubIDs_145.insert(NestedPartySubIDType_145.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_145);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::NewOrderSingle::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_146;
        FIX::NestedPartySubID NestedPartySubID_146("STRING_869348213");
        noNestedPartySubIDs_0_0_2_2.set(NestedPartySubID_146);
        NstdPtysSubGrp_NoNestedPartySubIDs_146.insert(NestedPartySubID_146.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_146(536706054);
        noNestedPartySubIDs_0_0_2_2.set(NestedPartySubIDType_146);
        NstdPtysSubGrp_NoNestedPartySubIDs_146.insert(NestedPartySubIDType_146.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_146);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_2);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::NewOrderSingle::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_72;
      FIX::NestedPartyID NestedPartyID_72("STRING_2023410627");
      noNestedPartyIDs_0_1_1.set(NestedPartyID_72);
      NestedParties_NoNestedPartyIDs_72.insert(NestedPartyID_72.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_72('1');
      noNestedPartyIDs_0_1_1.set(NestedPartyIDSource_72);
      NestedParties_NoNestedPartyIDs_72.insert(NestedPartyIDSource_72.getString());
      FIX::NestedPartyRole NestedPartyRole_72(2048638844);
      noNestedPartyIDs_0_1_1.set(NestedPartyRole_72);
      NestedParties_NoNestedPartyIDs_72.insert(NestedPartyRole_72.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_72);
      all_compo_names.insert("NestedParties.NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::NewOrderSingle::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_147;
        FIX::NestedPartySubID NestedPartySubID_147("STRING_1716288878");
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubID_147);
        NstdPtysSubGrp_NoNestedPartySubIDs_147.insert(NestedPartySubID_147.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_147(1494686512);
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubIDType_147);
        NstdPtysSubGrp_NoNestedPartySubIDs_147.insert(NestedPartySubIDType_147.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_147);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_1);
    }
    {
      FIX50SP2::NewOrderSingle::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_73;
      FIX::NestedPartyID NestedPartyID_73("STRING_298201882");
      noNestedPartyIDs_0_1_2.set(NestedPartyID_73);
      NestedParties_NoNestedPartyIDs_73.insert(NestedPartyID_73.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_73('1');
      noNestedPartyIDs_0_1_2.set(NestedPartyIDSource_73);
      NestedParties_NoNestedPartyIDs_73.insert(NestedPartyIDSource_73.getString());
      FIX::NestedPartyRole NestedPartyRole_73(1572326810);
      noNestedPartyIDs_0_1_2.set(NestedPartyRole_73);
      NestedParties_NoNestedPartyIDs_73.insert(NestedPartyRole_73.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_73);
      all_compo_names.insert("NestedParties.NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::NewOrderSingle::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_148;
        FIX::NestedPartySubID NestedPartySubID_148("STRING_1250640181");
        noNestedPartySubIDs_0_2_2_0.set(NestedPartySubID_148);
        NstdPtysSubGrp_NoNestedPartySubIDs_148.insert(NestedPartySubID_148.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_148(2063560679);
        noNestedPartySubIDs_0_2_2_0.set(NestedPartySubIDType_148);
        NstdPtysSubGrp_NoNestedPartySubIDs_148.insert(NestedPartySubIDType_148.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_148);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_2.addGroup(noNestedPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::NewOrderSingle::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_149;
        FIX::NestedPartySubID NestedPartySubID_149("STRING_554846747");
        noNestedPartySubIDs_0_2_2_1.set(NestedPartySubID_149);
        NstdPtysSubGrp_NoNestedPartySubIDs_149.insert(NestedPartySubID_149.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_149(1965941016);
        noNestedPartySubIDs_0_2_2_1.set(NestedPartySubIDType_149);
        NstdPtysSubGrp_NoNestedPartySubIDs_149.insert(NestedPartySubIDType_149.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_149);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_2.addGroup(noNestedPartySubIDs_0_2_2_1);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_2);
    }
    msg.addGroup(noAllocs_0_0);
  }
  {
    FIX50SP2::NewOrderSingle::NoAllocs noAllocs_0_1;
    // PreAllocGrp.NoAllocs
    multiset<string> PreAllocGrp_NoAllocs_16;
    FIX::AllocAccount AllocAccount_35("STRING_57924736");
    noAllocs_0_1.set(AllocAccount_35);
    PreAllocGrp_NoAllocs_16.insert(AllocAccount_35.getString());
    FIX::AllocAcctIDSource AllocAcctIDSource_35(1059345092);
    noAllocs_0_1.set(AllocAcctIDSource_35);
    PreAllocGrp_NoAllocs_16.insert(AllocAcctIDSource_35.getString());
    FIX::AllocQty AllocQty_34;
    AllocQty_34.setString("14808926");
    noAllocs_0_1.set(AllocQty_34);
    PreAllocGrp_NoAllocs_16.insert(AllocQty_34.getString());
    FIX::AllocSettlCurrency AllocSettlCurrency_28("GBP");
    noAllocs_0_1.set(AllocSettlCurrency_28);
    PreAllocGrp_NoAllocs_16.insert(AllocSettlCurrency_28.getString());
    FIX::IndividualAllocID IndividualAllocID_35("STRING_720058830");
    noAllocs_0_1.set(IndividualAllocID_35);
    PreAllocGrp_NoAllocs_16.insert(IndividualAllocID_35.getString());
    all_values.push_back(PreAllocGrp_NoAllocs_16);
    all_compo_names.insert("PreAllocGrp.NoAllocs");

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::NewOrderSingle::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_74;
      FIX::NestedPartyID NestedPartyID_74("STRING_192583941");
      noNestedPartyIDs_1_1_0.set(NestedPartyID_74);
      NestedParties_NoNestedPartyIDs_74.insert(NestedPartyID_74.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_74('7');
      noNestedPartyIDs_1_1_0.set(NestedPartyIDSource_74);
      NestedParties_NoNestedPartyIDs_74.insert(NestedPartyIDSource_74.getString());
      FIX::NestedPartyRole NestedPartyRole_74(968833685);
      noNestedPartyIDs_1_1_0.set(NestedPartyRole_74);
      NestedParties_NoNestedPartyIDs_74.insert(NestedPartyRole_74.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_74);
      all_compo_names.insert("NestedParties.NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::NewOrderSingle::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_150;
        FIX::NestedPartySubID NestedPartySubID_150("STRING_1835233674");
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubID_150);
        NstdPtysSubGrp_NoNestedPartySubIDs_150.insert(NestedPartySubID_150.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_150(68129956);
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubIDType_150);
        NstdPtysSubGrp_NoNestedPartySubIDs_150.insert(NestedPartySubIDType_150.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_150);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::NewOrderSingle::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_151;
        FIX::NestedPartySubID NestedPartySubID_151("STRING_302684299");
        noNestedPartySubIDs_1_0_2_1.set(NestedPartySubID_151);
        NstdPtysSubGrp_NoNestedPartySubIDs_151.insert(NestedPartySubID_151.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_151(844350119);
        noNestedPartySubIDs_1_0_2_1.set(NestedPartySubIDType_151);
        NstdPtysSubGrp_NoNestedPartySubIDs_151.insert(NestedPartySubIDType_151.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_151);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::NewOrderSingle::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_152;
        FIX::NestedPartySubID NestedPartySubID_152("STRING_937478170");
        noNestedPartySubIDs_1_0_2_2.set(NestedPartySubID_152);
        NstdPtysSubGrp_NoNestedPartySubIDs_152.insert(NestedPartySubID_152.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_152(839390353);
        noNestedPartySubIDs_1_0_2_2.set(NestedPartySubIDType_152);
        NstdPtysSubGrp_NoNestedPartySubIDs_152.insert(NestedPartySubIDType_152.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_152);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_2);
      }
      noAllocs_0_1.addGroup(noNestedPartyIDs_1_1_0);
    }
    msg.addGroup(noAllocs_0_1);
  }
  {
    FIX50SP2::NewOrderSingle::NoAllocs noAllocs_0_2;
    // PreAllocGrp.NoAllocs
    multiset<string> PreAllocGrp_NoAllocs_17;
    FIX::AllocAccount AllocAccount_36("STRING_720277098");
    noAllocs_0_2.set(AllocAccount_36);
    PreAllocGrp_NoAllocs_17.insert(AllocAccount_36.getString());
    FIX::AllocAcctIDSource AllocAcctIDSource_36(663197561);
    noAllocs_0_2.set(AllocAcctIDSource_36);
    PreAllocGrp_NoAllocs_17.insert(AllocAcctIDSource_36.getString());
    FIX::AllocQty AllocQty_35;
    AllocQty_35.setString("7405455");
    noAllocs_0_2.set(AllocQty_35);
    PreAllocGrp_NoAllocs_17.insert(AllocQty_35.getString());
    FIX::AllocSettlCurrency AllocSettlCurrency_29("USD");
    noAllocs_0_2.set(AllocSettlCurrency_29);
    PreAllocGrp_NoAllocs_17.insert(AllocSettlCurrency_29.getString());
    FIX::IndividualAllocID IndividualAllocID_36("STRING_87748413");
    noAllocs_0_2.set(IndividualAllocID_36);
    PreAllocGrp_NoAllocs_17.insert(IndividualAllocID_36.getString());
    all_values.push_back(PreAllocGrp_NoAllocs_17);
    all_compo_names.insert("PreAllocGrp.NoAllocs");

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::NewOrderSingle::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_2_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_75;
      FIX::NestedPartyID NestedPartyID_75("STRING_1328511576");
      noNestedPartyIDs_2_1_0.set(NestedPartyID_75);
      NestedParties_NoNestedPartyIDs_75.insert(NestedPartyID_75.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_75('1');
      noNestedPartyIDs_2_1_0.set(NestedPartyIDSource_75);
      NestedParties_NoNestedPartyIDs_75.insert(NestedPartyIDSource_75.getString());
      FIX::NestedPartyRole NestedPartyRole_75(112131039);
      noNestedPartyIDs_2_1_0.set(NestedPartyRole_75);
      NestedParties_NoNestedPartyIDs_75.insert(NestedPartyRole_75.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_75);
      all_compo_names.insert("NestedParties.NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::NewOrderSingle::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_153;
        FIX::NestedPartySubID NestedPartySubID_153("STRING_1576152254");
        noNestedPartySubIDs_2_0_2_0.set(NestedPartySubID_153);
        NstdPtysSubGrp_NoNestedPartySubIDs_153.insert(NestedPartySubID_153.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_153(666977786);
        noNestedPartySubIDs_2_0_2_0.set(NestedPartySubIDType_153);
        NstdPtysSubGrp_NoNestedPartySubIDs_153.insert(NestedPartySubIDType_153.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_153);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_0.addGroup(noNestedPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::NewOrderSingle::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_154;
        FIX::NestedPartySubID NestedPartySubID_154("STRING_250125477");
        noNestedPartySubIDs_2_0_2_1.set(NestedPartySubID_154);
        NstdPtysSubGrp_NoNestedPartySubIDs_154.insert(NestedPartySubID_154.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_154(1634076990);
        noNestedPartySubIDs_2_0_2_1.set(NestedPartySubIDType_154);
        NstdPtysSubGrp_NoNestedPartySubIDs_154.insert(NestedPartySubIDType_154.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_154);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_0.addGroup(noNestedPartySubIDs_2_0_2_1);
      }
      {
        FIX50SP2::NewOrderSingle::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_155;
        FIX::NestedPartySubID NestedPartySubID_155("STRING_1726322878");
        noNestedPartySubIDs_2_0_2_2.set(NestedPartySubID_155);
        NstdPtysSubGrp_NoNestedPartySubIDs_155.insert(NestedPartySubID_155.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_155(1731018084);
        noNestedPartySubIDs_2_0_2_2.set(NestedPartySubIDType_155);
        NstdPtysSubGrp_NoNestedPartySubIDs_155.insert(NestedPartySubIDType_155.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_155);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_0.addGroup(noNestedPartySubIDs_2_0_2_2);
      }
      noAllocs_0_2.addGroup(noNestedPartyIDs_2_1_0);
    }
    {
      FIX50SP2::NewOrderSingle::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_2_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_76;
      FIX::NestedPartyID NestedPartyID_76("STRING_839064066");
      noNestedPartyIDs_2_1_1.set(NestedPartyID_76);
      NestedParties_NoNestedPartyIDs_76.insert(NestedPartyID_76.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_76('1');
      noNestedPartyIDs_2_1_1.set(NestedPartyIDSource_76);
      NestedParties_NoNestedPartyIDs_76.insert(NestedPartyIDSource_76.getString());
      FIX::NestedPartyRole NestedPartyRole_76(303593266);
      noNestedPartyIDs_2_1_1.set(NestedPartyRole_76);
      NestedParties_NoNestedPartyIDs_76.insert(NestedPartyRole_76.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_76);
      all_compo_names.insert("NestedParties.NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::NewOrderSingle::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_156;
        FIX::NestedPartySubID NestedPartySubID_156("STRING_1541073140");
        noNestedPartySubIDs_2_1_2_0.set(NestedPartySubID_156);
        NstdPtysSubGrp_NoNestedPartySubIDs_156.insert(NestedPartySubID_156.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_156(1098307238);
        noNestedPartySubIDs_2_1_2_0.set(NestedPartySubIDType_156);
        NstdPtysSubGrp_NoNestedPartySubIDs_156.insert(NestedPartySubIDType_156.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_156);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_1.addGroup(noNestedPartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::NewOrderSingle::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_157;
        FIX::NestedPartySubID NestedPartySubID_157("STRING_1292739697");
        noNestedPartySubIDs_2_1_2_1.set(NestedPartySubID_157);
        NstdPtysSubGrp_NoNestedPartySubIDs_157.insert(NestedPartySubID_157.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_157(1800189035);
        noNestedPartySubIDs_2_1_2_1.set(NestedPartySubIDType_157);
        NstdPtysSubGrp_NoNestedPartySubIDs_157.insert(NestedPartySubIDType_157.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_157);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_1.addGroup(noNestedPartySubIDs_2_1_2_1);
      }
      noAllocs_0_2.addGroup(noNestedPartyIDs_2_1_1);
    }
    {
      FIX50SP2::NewOrderSingle::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_2_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_77;
      FIX::NestedPartyID NestedPartyID_77("STRING_786057264");
      noNestedPartyIDs_2_1_2.set(NestedPartyID_77);
      NestedParties_NoNestedPartyIDs_77.insert(NestedPartyID_77.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_77('1');
      noNestedPartyIDs_2_1_2.set(NestedPartyIDSource_77);
      NestedParties_NoNestedPartyIDs_77.insert(NestedPartyIDSource_77.getString());
      FIX::NestedPartyRole NestedPartyRole_77(2102873334);
      noNestedPartyIDs_2_1_2.set(NestedPartyRole_77);
      NestedParties_NoNestedPartyIDs_77.insert(NestedPartyRole_77.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_77);
      all_compo_names.insert("NestedParties.NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::NewOrderSingle::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_158;
        FIX::NestedPartySubID NestedPartySubID_158("STRING_150864175");
        noNestedPartySubIDs_2_2_2_0.set(NestedPartySubID_158);
        NstdPtysSubGrp_NoNestedPartySubIDs_158.insert(NestedPartySubID_158.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_158(794780039);
        noNestedPartySubIDs_2_2_2_0.set(NestedPartySubIDType_158);
        NstdPtysSubGrp_NoNestedPartySubIDs_158.insert(NestedPartySubIDType_158.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_158);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_2.addGroup(noNestedPartySubIDs_2_2_2_0);
      }
      {
        FIX50SP2::NewOrderSingle::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_2_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_159;
        FIX::NestedPartySubID NestedPartySubID_159("STRING_203200833");
        noNestedPartySubIDs_2_2_2_1.set(NestedPartySubID_159);
        NstdPtysSubGrp_NoNestedPartySubIDs_159.insert(NestedPartySubID_159.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_159(814061737);
        noNestedPartySubIDs_2_2_2_1.set(NestedPartySubIDType_159);
        NstdPtysSubGrp_NoNestedPartySubIDs_159.insert(NestedPartySubIDType_159.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_159);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_2.addGroup(noNestedPartySubIDs_2_2_2_1);
      }
      {
        FIX50SP2::NewOrderSingle::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_2_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_160;
        FIX::NestedPartySubID NestedPartySubID_160("STRING_1535325588");
        noNestedPartySubIDs_2_2_2_2.set(NestedPartySubID_160);
        NstdPtysSubGrp_NoNestedPartySubIDs_160.insert(NestedPartySubID_160.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_160(2121820159);
        noNestedPartySubIDs_2_2_2_2.set(NestedPartySubIDType_160);
        NstdPtysSubGrp_NoNestedPartySubIDs_160.insert(NestedPartySubIDType_160.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_160);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_2.addGroup(noNestedPartySubIDs_2_2_2_2);
      }
      noAllocs_0_2.addGroup(noNestedPartyIDs_2_1_2);
    }
    msg.addGroup(noAllocs_0_2);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_16;
  FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_16("CHF");
  msg.set(BenchmarkCurveCurrency_16);
  SpreadOrBenchmarkCurveData_16.insert(BenchmarkCurveCurrency_16.getString());
  FIX::BenchmarkCurveName BenchmarkCurveName_16("STRING_SWAP");
  msg.set(BenchmarkCurveName_16);
  SpreadOrBenchmarkCurveData_16.insert(BenchmarkCurveName_16.getString());
  FIX::BenchmarkCurvePoint BenchmarkCurvePoint_16("STRING_227092457");
  msg.set(BenchmarkCurvePoint_16);
  SpreadOrBenchmarkCurveData_16.insert(BenchmarkCurvePoint_16.getString());
  FIX::BenchmarkPrice BenchmarkPrice_16;
  BenchmarkPrice_16.setString("11356655");
  msg.set(BenchmarkPrice_16);
  SpreadOrBenchmarkCurveData_16.insert(BenchmarkPrice_16.getString());
  FIX::BenchmarkPriceType BenchmarkPriceType_16(155805110);
  msg.set(BenchmarkPriceType_16);
  SpreadOrBenchmarkCurveData_16.insert(BenchmarkPriceType_16.getString());
  FIX::BenchmarkSecurityID BenchmarkSecurityID_16("STRING_658760567");
  msg.set(BenchmarkSecurityID_16);
  SpreadOrBenchmarkCurveData_16.insert(BenchmarkSecurityID_16.getString());
  FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_16("STRING_564334183");
  msg.set(BenchmarkSecurityIDSource_16);
  SpreadOrBenchmarkCurveData_16.insert(BenchmarkSecurityIDSource_16.getString());
  FIX::Spread Spread_16;
  Spread_16.setString("8227828");
  msg.set(Spread_16);
  SpreadOrBenchmarkCurveData_16.insert(Spread_16.getString());
  all_values.push_back(SpreadOrBenchmarkCurveData_16);
  all_compo_names.insert("SpreadOrBenchmarkCurveData");

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::NewOrderSingle::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_26;
    FIX::StipulationType StipulationType_26("STRING_CURRENCY");
    noStipulations_0_0.set(StipulationType_26);
    Stipulations_NoStipulations_26.insert(StipulationType_26.getString());
    FIX::StipulationValue StipulationValue_26("STRING_401622127");
    noStipulations_0_0.set(StipulationValue_26);
    Stipulations_NoStipulations_26.insert(StipulationValue_26.getString());
    all_values.push_back(Stipulations_NoStipulations_26);
    all_compo_names.insert("Stipulations.NoStipulations");

    msg.addGroup(noStipulations_0_0);
  }
  {
    FIX50SP2::NewOrderSingle::NoStipulations noStipulations_0_1;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_27;
    FIX::StipulationType StipulationType_27("STRING_AMT");
    noStipulations_0_1.set(StipulationType_27);
    Stipulations_NoStipulations_27.insert(StipulationType_27.getString());
    FIX::StipulationValue StipulationValue_27("STRING_889991591");
    noStipulations_0_1.set(StipulationValue_27);
    Stipulations_NoStipulations_27.insert(StipulationValue_27.getString());
    all_values.push_back(Stipulations_NoStipulations_27);
    all_compo_names.insert("Stipulations.NoStipulations");

    msg.addGroup(noStipulations_0_1);
  }
  {
    FIX50SP2::NewOrderSingle::NoStipulations noStipulations_0_2;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_28;
    FIX::StipulationType StipulationType_28("STRING_WALA");
    noStipulations_0_2.set(StipulationType_28);
    Stipulations_NoStipulations_28.insert(StipulationType_28.getString());
    FIX::StipulationValue StipulationValue_28("STRING_796013747");
    noStipulations_0_2.set(StipulationValue_28);
    Stipulations_NoStipulations_28.insert(StipulationValue_28.getString());
    all_values.push_back(Stipulations_NoStipulations_28);
    all_compo_names.insert("Stipulations.NoStipulations");

    msg.addGroup(noStipulations_0_2);
  }
  // StrategyParametersGrp
  // Group StrategyParametersGrp.NoStrategyParameters
  {
    FIX50SP2::NewOrderSingle::NoStrategyParameters noStrategyParameters_0_0;
    // StrategyParametersGrp.NoStrategyParameters
    multiset<string> StrategyParametersGrp_NoStrategyParameters_11;
    FIX::StrategyParameterName StrategyParameterName_11("STRING_1143700818");
    noStrategyParameters_0_0.set(StrategyParameterName_11);
    StrategyParametersGrp_NoStrategyParameters_11.insert(StrategyParameterName_11.getString());
    FIX::StrategyParameterType StrategyParameterType_11(9);
    noStrategyParameters_0_0.set(StrategyParameterType_11);
    StrategyParametersGrp_NoStrategyParameters_11.insert(StrategyParameterType_11.getString());
    FIX::StrategyParameterValue StrategyParameterValue_11("STRING_359153652");
    noStrategyParameters_0_0.set(StrategyParameterValue_11);
    StrategyParametersGrp_NoStrategyParameters_11.insert(StrategyParameterValue_11.getString());
    all_values.push_back(StrategyParametersGrp_NoStrategyParameters_11);
    all_compo_names.insert("StrategyParametersGrp.NoStrategyParameters");

    msg.addGroup(noStrategyParameters_0_0);
  }
  {
    FIX50SP2::NewOrderSingle::NoStrategyParameters noStrategyParameters_0_1;
    // StrategyParametersGrp.NoStrategyParameters
    multiset<string> StrategyParametersGrp_NoStrategyParameters_12;
    FIX::StrategyParameterName StrategyParameterName_12("STRING_796406205");
    noStrategyParameters_0_1.set(StrategyParameterName_12);
    StrategyParametersGrp_NoStrategyParameters_12.insert(StrategyParameterName_12.getString());
    FIX::StrategyParameterType StrategyParameterType_12(27);
    noStrategyParameters_0_1.set(StrategyParameterType_12);
    StrategyParametersGrp_NoStrategyParameters_12.insert(StrategyParameterType_12.getString());
    FIX::StrategyParameterValue StrategyParameterValue_12("STRING_1720023305");
    noStrategyParameters_0_1.set(StrategyParameterValue_12);
    StrategyParametersGrp_NoStrategyParameters_12.insert(StrategyParameterValue_12.getString());
    all_values.push_back(StrategyParametersGrp_NoStrategyParameters_12);
    all_compo_names.insert("StrategyParametersGrp.NoStrategyParameters");

    msg.addGroup(noStrategyParameters_0_1);
  }
  // TrdRegTimestamps
  // Group TrdRegTimestamps.NoTrdRegTimestamps
  {
    FIX50SP2::NewOrderSingle::NoTrdRegTimestamps noTrdRegTimestamps_0_0;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_9;
    FIX::DeskOrderHandlingInst DeskOrderHandlingInst_9("MULTIPLESTRINGVALUE_LOC");
    noTrdRegTimestamps_0_0.set(DeskOrderHandlingInst_9);
    TrdRegTimestamps_NoTrdRegTimestamps_9.insert(DeskOrderHandlingInst_9.getString());
    FIX::DeskType DeskType_9("STRING_AR");
    noTrdRegTimestamps_0_0.set(DeskType_9);
    TrdRegTimestamps_NoTrdRegTimestamps_9.insert(DeskType_9.getString());
    FIX::DeskTypeSource DeskTypeSource_9(1);
    noTrdRegTimestamps_0_0.set(DeskTypeSource_9);
    TrdRegTimestamps_NoTrdRegTimestamps_9.insert(DeskTypeSource_9.getString());
    FIX::TrdRegTimestamp TrdRegTimestamp_9(FIX::UTCTIMESTAMP(18, 10, 41, 11, 12, 2010));
    noTrdRegTimestamps_0_0.set(TrdRegTimestamp_9);
    TrdRegTimestamps_NoTrdRegTimestamps_9.insert(TrdRegTimestamp_9.getString());
    FIX::TrdRegTimestampOrigin TrdRegTimestampOrigin_9("STRING_1810622556");
    noTrdRegTimestamps_0_0.set(TrdRegTimestampOrigin_9);
    TrdRegTimestamps_NoTrdRegTimestamps_9.insert(TrdRegTimestampOrigin_9.getString());
    FIX::TrdRegTimestampType TrdRegTimestampType_9(7);
    noTrdRegTimestamps_0_0.set(TrdRegTimestampType_9);
    TrdRegTimestamps_NoTrdRegTimestamps_9.insert(TrdRegTimestampType_9.getString());
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_9);
    all_compo_names.insert("TrdRegTimestamps.NoTrdRegTimestamps");

    msg.addGroup(noTrdRegTimestamps_0_0);
  }
  {
    FIX50SP2::NewOrderSingle::NoTrdRegTimestamps noTrdRegTimestamps_0_1;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_10;
    FIX::DeskOrderHandlingInst DeskOrderHandlingInst_10("MULTIPLESTRINGVALUE_IO");
    noTrdRegTimestamps_0_1.set(DeskOrderHandlingInst_10);
    TrdRegTimestamps_NoTrdRegTimestamps_10.insert(DeskOrderHandlingInst_10.getString());
    FIX::DeskType DeskType_10("STRING_PR");
    noTrdRegTimestamps_0_1.set(DeskType_10);
    TrdRegTimestamps_NoTrdRegTimestamps_10.insert(DeskType_10.getString());
    FIX::DeskTypeSource DeskTypeSource_10(1);
    noTrdRegTimestamps_0_1.set(DeskTypeSource_10);
    TrdRegTimestamps_NoTrdRegTimestamps_10.insert(DeskTypeSource_10.getString());
    FIX::TrdRegTimestamp TrdRegTimestamp_10(FIX::UTCTIMESTAMP(0, 40, 5, 12, 5, 2003));
    noTrdRegTimestamps_0_1.set(TrdRegTimestamp_10);
    TrdRegTimestamps_NoTrdRegTimestamps_10.insert(TrdRegTimestamp_10.getString());
    FIX::TrdRegTimestampOrigin TrdRegTimestampOrigin_10("STRING_371736099");
    noTrdRegTimestamps_0_1.set(TrdRegTimestampOrigin_10);
    TrdRegTimestamps_NoTrdRegTimestamps_10.insert(TrdRegTimestampOrigin_10.getString());
    FIX::TrdRegTimestampType TrdRegTimestampType_10(5);
    noTrdRegTimestamps_0_1.set(TrdRegTimestampType_10);
    TrdRegTimestamps_NoTrdRegTimestamps_10.insert(TrdRegTimestampType_10.getString());
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_10);
    all_compo_names.insert("TrdRegTimestamps.NoTrdRegTimestamps");

    msg.addGroup(noTrdRegTimestamps_0_1);
  }
  // TrdgSesGrp
  // Group TrdgSesGrp.NoTradingSessions
  {
    FIX50SP2::NewOrderSingle::NoTradingSessions noTradingSessions_0_0;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_17;
    FIX::TradingSessionID TradingSessionID_50("STRING_3");
    noTradingSessions_0_0.set(TradingSessionID_50);
    TrdgSesGrp_NoTradingSessions_17.insert(TradingSessionID_50.getString());
    FIX::TradingSessionSubID TradingSessionSubID_50("STRING_7");
    noTradingSessions_0_0.set(TradingSessionSubID_50);
    TrdgSesGrp_NoTradingSessions_17.insert(TradingSessionSubID_50.getString());
    all_values.push_back(TrdgSesGrp_NoTradingSessions_17);
    all_compo_names.insert("TrdgSesGrp.NoTradingSessions");

    msg.addGroup(noTradingSessions_0_0);
  }
  {
    FIX50SP2::NewOrderSingle::NoTradingSessions noTradingSessions_0_1;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_18;
    FIX::TradingSessionID TradingSessionID_51("STRING_6");
    noTradingSessions_0_1.set(TradingSessionID_51);
    TrdgSesGrp_NoTradingSessions_18.insert(TradingSessionID_51.getString());
    FIX::TradingSessionSubID TradingSessionSubID_51("STRING_5");
    noTradingSessions_0_1.set(TradingSessionSubID_51);
    TrdgSesGrp_NoTradingSessions_18.insert(TradingSessionSubID_51.getString());
    all_values.push_back(TrdgSesGrp_NoTradingSessions_18);
    all_compo_names.insert("TrdgSesGrp.NoTradingSessions");

    msg.addGroup(noTradingSessions_0_1);
  }
  {
    FIX50SP2::NewOrderSingle::NoTradingSessions noTradingSessions_0_2;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_19;
    FIX::TradingSessionID TradingSessionID_52("STRING_3");
    noTradingSessions_0_2.set(TradingSessionID_52);
    TrdgSesGrp_NoTradingSessions_19.insert(TradingSessionID_52.getString());
    FIX::TradingSessionSubID TradingSessionSubID_52("STRING_7");
    noTradingSessions_0_2.set(TradingSessionSubID_52);
    TrdgSesGrp_NoTradingSessions_19.insert(TradingSessionSubID_52.getString());
    all_values.push_back(TrdgSesGrp_NoTradingSessions_19);
    all_compo_names.insert("TrdgSesGrp.NoTradingSessions");

    msg.addGroup(noTradingSessions_0_2);
  }
  // TriggeringInstruction
  multiset<string> TriggeringInstruction_6;
  FIX::TriggerAction TriggerAction_6('3');
  msg.set(TriggerAction_6);
  TriggeringInstruction_6.insert(TriggerAction_6.getString());
  FIX::TriggerNewPrice TriggerNewPrice_6;
  TriggerNewPrice_6.setString("17724381");
  msg.set(TriggerNewPrice_6);
  TriggeringInstruction_6.insert(TriggerNewPrice_6.getString());
  FIX::TriggerNewQty TriggerNewQty_6;
  TriggerNewQty_6.setString("11633791");
  msg.set(TriggerNewQty_6);
  TriggeringInstruction_6.insert(TriggerNewQty_6.getString());
  FIX::TriggerOrderType TriggerOrderType_6('2');
  msg.set(TriggerOrderType_6);
  TriggeringInstruction_6.insert(TriggerOrderType_6.getString());
  FIX::TriggerPrice TriggerPrice_6;
  TriggerPrice_6.setString("1624201");
  msg.set(TriggerPrice_6);
  TriggeringInstruction_6.insert(TriggerPrice_6.getString());
  FIX::TriggerPriceDirection TriggerPriceDirection_6('U');
  msg.set(TriggerPriceDirection_6);
  TriggeringInstruction_6.insert(TriggerPriceDirection_6.getString());
  FIX::TriggerPriceType TriggerPriceType_6('6');
  msg.set(TriggerPriceType_6);
  TriggeringInstruction_6.insert(TriggerPriceType_6.getString());
  FIX::TriggerPriceTypeScope TriggerPriceTypeScope_6('2');
  msg.set(TriggerPriceTypeScope_6);
  TriggeringInstruction_6.insert(TriggerPriceTypeScope_6.getString());
  FIX::TriggerSecurityDesc TriggerSecurityDesc_6("STRING_360321559");
  msg.set(TriggerSecurityDesc_6);
  TriggeringInstruction_6.insert(TriggerSecurityDesc_6.getString());
  FIX::TriggerSecurityID TriggerSecurityID_6("STRING_1316690979");
  msg.set(TriggerSecurityID_6);
  TriggeringInstruction_6.insert(TriggerSecurityID_6.getString());
  FIX::TriggerSecurityIDSource TriggerSecurityIDSource_6("STRING_1409089127");
  msg.set(TriggerSecurityIDSource_6);
  TriggeringInstruction_6.insert(TriggerSecurityIDSource_6.getString());
  FIX::TriggerSymbol TriggerSymbol_6("STRING_1905995359");
  msg.set(TriggerSymbol_6);
  TriggeringInstruction_6.insert(TriggerSymbol_6.getString());
  FIX::TriggerTradingSessionID TriggerTradingSessionID_6("STRING_1709525841");
  msg.set(TriggerTradingSessionID_6);
  TriggeringInstruction_6.insert(TriggerTradingSessionID_6.getString());
  FIX::TriggerTradingSessionSubID TriggerTradingSessionSubID_6("STRING_1730988602");
  msg.set(TriggerTradingSessionSubID_6);
  TriggeringInstruction_6.insert(TriggerTradingSessionSubID_6.getString());
  FIX::TriggerType TriggerType_6('3');
  msg.set(TriggerType_6);
  TriggeringInstruction_6.insert(TriggerType_6.getString());
  all_values.push_back(TriggeringInstruction_6);
  all_compo_names.insert("TriggeringInstruction");

  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::NewOrderSingle::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_59;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_59("DATA_814290474");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_59);
    UnderlyingInstrument_59.insert(EncodedUnderlyingIssuer_59.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_59(1881971555);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_59);
    UnderlyingInstrument_59.insert(EncodedUnderlyingIssuerLen_59.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_59("DATA_247416189");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_59);
    UnderlyingInstrument_59.insert(EncodedUnderlyingSecurityDesc_59.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_59(390012827);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_59);
    UnderlyingInstrument_59.insert(EncodedUnderlyingSecurityDescLen_59.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_59;
    UnderlyingAdjustedQuantity_59.setString("6379313");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_59);
    UnderlyingInstrument_59.insert(UnderlyingAdjustedQuantity_59.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_59;
    UnderlyingAllocationPercent_59.setString("37.520000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_59);
    UnderlyingInstrument_59.insert(UnderlyingAllocationPercent_59.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_59;
    UnderlyingAttachmentPoint_59.setString("89.260000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_59);
    UnderlyingInstrument_59.insert(UnderlyingAttachmentPoint_59.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_59("STRING_607788766");
    noUnderlyings_0_0.set(UnderlyingCFICode_59);
    UnderlyingInstrument_59.insert(UnderlyingCFICode_59.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_59("STRING_1683368486");
    noUnderlyings_0_0.set(UnderlyingCPProgram_59);
    UnderlyingInstrument_59.insert(UnderlyingCPProgram_59.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_59("STRING_880322363");
    noUnderlyings_0_0.set(UnderlyingCPRegType_59);
    UnderlyingInstrument_59.insert(UnderlyingCPRegType_59.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_59;
    UnderlyingCapValue_59.setString("9367998");
    noUnderlyings_0_0.set(UnderlyingCapValue_59);
    UnderlyingInstrument_59.insert(UnderlyingCapValue_59.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_59;
    UnderlyingCashAmount_59.setString("5483757");
    noUnderlyings_0_0.set(UnderlyingCashAmount_59);
    UnderlyingInstrument_59.insert(UnderlyingCashAmount_59.getString());
    FIX::UnderlyingCashType UnderlyingCashType_59("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_59);
    UnderlyingInstrument_59.insert(UnderlyingCashType_59.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_59;
    UnderlyingContractMultiplier_59.setString("8383505");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_59);
    UnderlyingInstrument_59.insert(UnderlyingContractMultiplier_59.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_59(165178961);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_59);
    UnderlyingInstrument_59.insert(UnderlyingContractMultiplierUnit_59.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_59("COUNTRY_51593128");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_59);
    UnderlyingInstrument_59.insert(UnderlyingCountryOfIssue_59.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_59("LOCALMKTDATE_463305091");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_59);
    UnderlyingInstrument_59.insert(UnderlyingCouponPaymentDate_59.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_59;
    UnderlyingCouponRate_59.setString("80.740000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_59);
    UnderlyingInstrument_59.insert(UnderlyingCouponRate_59.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_59("STRING_937898673");
    noUnderlyings_0_0.set(UnderlyingCreditRating_59);
    UnderlyingInstrument_59.insert(UnderlyingCreditRating_59.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_59("USD");
    noUnderlyings_0_0.set(UnderlyingCurrency_59);
    UnderlyingInstrument_59.insert(UnderlyingCurrency_59.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_59;
    UnderlyingCurrentValue_59.setString("20175599");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_59);
    UnderlyingInstrument_59.insert(UnderlyingCurrentValue_59.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_59;
    UnderlyingDetachmentPoint_59.setString("17.810000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_59);
    UnderlyingInstrument_59.insert(UnderlyingDetachmentPoint_59.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_59;
    UnderlyingDirtyPrice_59.setString("16391929");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_59);
    UnderlyingInstrument_59.insert(UnderlyingDirtyPrice_59.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_59;
    UnderlyingEndPrice_59.setString("11867672");
    noUnderlyings_0_0.set(UnderlyingEndPrice_59);
    UnderlyingInstrument_59.insert(UnderlyingEndPrice_59.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_59;
    UnderlyingEndValue_59.setString("16332809");
    noUnderlyings_0_0.set(UnderlyingEndValue_59);
    UnderlyingInstrument_59.insert(UnderlyingEndValue_59.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_59(1397704681);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_59);
    UnderlyingInstrument_59.insert(UnderlyingExerciseStyle_59.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_59;
    UnderlyingFXRate_59.setString("7488094");
    noUnderlyings_0_0.set(UnderlyingFXRate_59);
    UnderlyingInstrument_59.insert(UnderlyingFXRate_59.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_59('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_59);
    UnderlyingInstrument_59.insert(UnderlyingFXRateCalc_59.getString());
    FIX::UnderlyingFactor UnderlyingFactor_59;
    UnderlyingFactor_59.setString("11187407");
    noUnderlyings_0_0.set(UnderlyingFactor_59);
    UnderlyingInstrument_59.insert(UnderlyingFactor_59.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_59(1526469376);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_59);
    UnderlyingInstrument_59.insert(UnderlyingFlowScheduleType_59.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_59("STRING_2031076337");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_59);
    UnderlyingInstrument_59.insert(UnderlyingInstrRegistry_59.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_59("LOCALMKTDATE_853228635");
    noUnderlyings_0_0.set(UnderlyingIssueDate_59);
    UnderlyingInstrument_59.insert(UnderlyingIssueDate_59.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_59("STRING_1773885565");
    noUnderlyings_0_0.set(UnderlyingIssuer_59);
    UnderlyingInstrument_59.insert(UnderlyingIssuer_59.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_59("STRING_273605516");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_59);
    UnderlyingInstrument_59.insert(UnderlyingLocaleOfIssue_59.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_59("LOCALMKTDATE_1491159994");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_59);
    UnderlyingInstrument_59.insert(UnderlyingMaturityDate_59.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_59("MONTHYEAR_1093685669");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_59);
    UnderlyingInstrument_59.insert(UnderlyingMaturityMonthYear_59.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_59("TZTIMEONLY_1035354442");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_59);
    UnderlyingInstrument_59.insert(UnderlyingMaturityTime_59.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_59;
    UnderlyingNotionalPercentageOutstanding_59.setString("87.600000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_59);
    UnderlyingInstrument_59.insert(UnderlyingNotionalPercentageOutstanding_59.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_59('6');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_59);
    UnderlyingInstrument_59.insert(UnderlyingOptAttribute_59.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_59;
    UnderlyingOriginalNotionalPercentageOutstanding_59.setString("68.050000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_59);
    UnderlyingInstrument_59.insert(UnderlyingOriginalNotionalPercentageOutstanding_59.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_59("STRING_888264937");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_59);
    UnderlyingInstrument_59.insert(UnderlyingPriceUnitOfMeasure_59.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_59;
    UnderlyingPriceUnitOfMeasureQty_59.setString("11779462");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_59);
    UnderlyingInstrument_59.insert(UnderlyingPriceUnitOfMeasureQty_59.getString());
    FIX::UnderlyingProduct UnderlyingProduct_59(1299983558);
    noUnderlyings_0_0.set(UnderlyingProduct_59);
    UnderlyingInstrument_59.insert(UnderlyingProduct_59.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_59(1726615478);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_59);
    UnderlyingInstrument_59.insert(UnderlyingPutOrCall_59.getString());
    FIX::UnderlyingPx UnderlyingPx_59;
    UnderlyingPx_59.setString("13431252");
    noUnderlyings_0_0.set(UnderlyingPx_59);
    UnderlyingInstrument_59.insert(UnderlyingPx_59.getString());
    FIX::UnderlyingQty UnderlyingQty_59;
    UnderlyingQty_59.setString("13515766");
    noUnderlyings_0_0.set(UnderlyingQty_59);
    UnderlyingInstrument_59.insert(UnderlyingQty_59.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_59("LOCALMKTDATE_42436921");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_59);
    UnderlyingInstrument_59.insert(UnderlyingRedemptionDate_59.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_59("STRING_524199673");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_59);
    UnderlyingInstrument_59.insert(UnderlyingRepoCollateralSecurityType_59.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_59;
    UnderlyingRepurchaseRate_59.setString("17.120000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_59);
    UnderlyingInstrument_59.insert(UnderlyingRepurchaseRate_59.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_59(668162132);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_59);
    UnderlyingInstrument_59.insert(UnderlyingRepurchaseTerm_59.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_59("STRING_1803071084");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_59);
    UnderlyingInstrument_59.insert(UnderlyingRestructuringType_59.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_59("STRING_12067964");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_59);
    UnderlyingInstrument_59.insert(UnderlyingSecurityDesc_59.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_59("EXCHANGE_892353913");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_59);
    UnderlyingInstrument_59.insert(UnderlyingSecurityExchange_59.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_59("STRING_1294780406");
    noUnderlyings_0_0.set(UnderlyingSecurityID_59);
    UnderlyingInstrument_59.insert(UnderlyingSecurityID_59.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_59("STRING_1198835196");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_59);
    UnderlyingInstrument_59.insert(UnderlyingSecurityIDSource_59.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_59("STRING_378151173");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_59);
    UnderlyingInstrument_59.insert(UnderlyingSecuritySubType_59.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_59("STRING_545001439");
    noUnderlyings_0_0.set(UnderlyingSecurityType_59);
    UnderlyingInstrument_59.insert(UnderlyingSecurityType_59.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_59("STRING_1947644620");
    noUnderlyings_0_0.set(UnderlyingSeniority_59);
    UnderlyingInstrument_59.insert(UnderlyingSeniority_59.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_59("STRING_1594937035");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_59);
    UnderlyingInstrument_59.insert(UnderlyingSettlMethod_59.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_59(4);
    noUnderlyings_0_0.set(UnderlyingSettlementType_59);
    UnderlyingInstrument_59.insert(UnderlyingSettlementType_59.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_59;
    UnderlyingStartValue_59.setString("13266303");
    noUnderlyings_0_0.set(UnderlyingStartValue_59);
    UnderlyingInstrument_59.insert(UnderlyingStartValue_59.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_59("STRING_1478529724");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_59);
    UnderlyingInstrument_59.insert(UnderlyingStateOrProvinceOfIssue_59.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_59("CAN");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_59);
    UnderlyingInstrument_59.insert(UnderlyingStrikeCurrency_59.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_59;
    UnderlyingStrikePrice_59.setString("17521352");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_59);
    UnderlyingInstrument_59.insert(UnderlyingStrikePrice_59.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_59("STRING_1860647148");
    noUnderlyings_0_0.set(UnderlyingSymbol_59);
    UnderlyingInstrument_59.insert(UnderlyingSymbol_59.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_59("STRING_2046717935");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_59);
    UnderlyingInstrument_59.insert(UnderlyingSymbolSfx_59.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_59("STRING_640006035");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_59);
    UnderlyingInstrument_59.insert(UnderlyingTimeUnit_59.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_59("STRING_1812112260");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_59);
    UnderlyingInstrument_59.insert(UnderlyingUnitOfMeasure_59.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_59;
    UnderlyingUnitOfMeasureQty_59.setString("5288047");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_59);
    UnderlyingInstrument_59.insert(UnderlyingUnitOfMeasureQty_59.getString());
    all_values.push_back(UnderlyingInstrument_59);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::NewOrderSingle::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_121;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_121("STRING_552893549");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_121);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_121.insert(UnderlyingSecurityAltID_121.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_121("STRING_1706751081");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_121);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_121.insert(UnderlyingSecurityAltIDSource_121.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_121);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::NewOrderSingle::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_122;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_122("STRING_1708182751");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_122);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_122.insert(UnderlyingSecurityAltID_122.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_122("STRING_132025380");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_122);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_122.insert(UnderlyingSecurityAltIDSource_122.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_122);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::NewOrderSingle::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_122;
      FIX::UnderlyingStipType UnderlyingStipType_122("STRING_912275789");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_122);
      UnderlyingStipulations_NoUnderlyingStips_122.insert(UnderlyingStipType_122.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_122("STRING_174462301");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_122);
      UnderlyingStipulations_NoUnderlyingStips_122.insert(UnderlyingStipValue_122.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_122);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::NewOrderSingle::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_121;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_121("STRING_1054267501");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_121);
      UndlyInstrumentParties_NoUndlyInstrumentParties_121.insert(UnderlyingInstrumentPartyID_121.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_121('8');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_121);
      UndlyInstrumentParties_NoUndlyInstrumentParties_121.insert(UnderlyingInstrumentPartyIDSource_121.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_121(1082179789);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_121);
      UndlyInstrumentParties_NoUndlyInstrumentParties_121.insert(UnderlyingInstrumentPartyRole_121.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_121);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderSingle::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_227;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_227("STRING_1734978346");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_227);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_227.insert(UnderlyingInstrumentPartySubID_227.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_227(229476547);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_227);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_227.insert(UnderlyingInstrumentPartySubIDType_227.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_227);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::NewOrderSingle::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_228;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_228("STRING_117687014");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_228);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_228.insert(UnderlyingInstrumentPartySubID_228.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_228(2113129519);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_228);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_228.insert(UnderlyingInstrumentPartySubIDType_228.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_228);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::NewOrderSingle::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_122;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_122("STRING_774477987");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_122);
      UndlyInstrumentParties_NoUndlyInstrumentParties_122.insert(UnderlyingInstrumentPartyID_122.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_122('2');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_122);
      UndlyInstrumentParties_NoUndlyInstrumentParties_122.insert(UnderlyingInstrumentPartyIDSource_122.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_122(1560582907);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_122);
      UndlyInstrumentParties_NoUndlyInstrumentParties_122.insert(UnderlyingInstrumentPartyRole_122.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_122);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderSingle::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_229;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_229("STRING_1244478335");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_229);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_229.insert(UnderlyingInstrumentPartySubID_229.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_229(891628983);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_229);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_229.insert(UnderlyingInstrumentPartySubIDType_229.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_229);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::NewOrderSingle::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_230;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_230("STRING_660223661");
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubID_230);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_230.insert(UnderlyingInstrumentPartySubID_230.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_230(50026952);
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubIDType_230);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_230.insert(UnderlyingInstrumentPartySubIDType_230.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_230);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::NewOrderSingle::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_231;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_231("STRING_496280576");
        noUndlyInstrumentPartySubIDs_0_1_2_2.set(UnderlyingInstrumentPartySubID_231);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_231.insert(UnderlyingInstrumentPartySubID_231.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_231(373387161);
        noUndlyInstrumentPartySubIDs_0_1_2_2.set(UnderlyingInstrumentPartySubIDType_231);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_231.insert(UnderlyingInstrumentPartySubIDType_231.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_231);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::NewOrderSingle::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_60;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_60("DATA_2096744887");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_60);
    UnderlyingInstrument_60.insert(EncodedUnderlyingIssuer_60.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_60(1136286611);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_60);
    UnderlyingInstrument_60.insert(EncodedUnderlyingIssuerLen_60.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_60("DATA_38015774");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_60);
    UnderlyingInstrument_60.insert(EncodedUnderlyingSecurityDesc_60.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_60(478066034);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_60);
    UnderlyingInstrument_60.insert(EncodedUnderlyingSecurityDescLen_60.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_60;
    UnderlyingAdjustedQuantity_60.setString("15444858");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_60);
    UnderlyingInstrument_60.insert(UnderlyingAdjustedQuantity_60.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_60;
    UnderlyingAllocationPercent_60.setString("93.230000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_60);
    UnderlyingInstrument_60.insert(UnderlyingAllocationPercent_60.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_60;
    UnderlyingAttachmentPoint_60.setString("34.670000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_60);
    UnderlyingInstrument_60.insert(UnderlyingAttachmentPoint_60.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_60("STRING_1105184906");
    noUnderlyings_0_1.set(UnderlyingCFICode_60);
    UnderlyingInstrument_60.insert(UnderlyingCFICode_60.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_60("STRING_722934703");
    noUnderlyings_0_1.set(UnderlyingCPProgram_60);
    UnderlyingInstrument_60.insert(UnderlyingCPProgram_60.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_60("STRING_939726147");
    noUnderlyings_0_1.set(UnderlyingCPRegType_60);
    UnderlyingInstrument_60.insert(UnderlyingCPRegType_60.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_60;
    UnderlyingCapValue_60.setString("20174606");
    noUnderlyings_0_1.set(UnderlyingCapValue_60);
    UnderlyingInstrument_60.insert(UnderlyingCapValue_60.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_60;
    UnderlyingCashAmount_60.setString("8973970");
    noUnderlyings_0_1.set(UnderlyingCashAmount_60);
    UnderlyingInstrument_60.insert(UnderlyingCashAmount_60.getString());
    FIX::UnderlyingCashType UnderlyingCashType_60("STRING_DIFF");
    noUnderlyings_0_1.set(UnderlyingCashType_60);
    UnderlyingInstrument_60.insert(UnderlyingCashType_60.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_60;
    UnderlyingContractMultiplier_60.setString("9242445");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_60);
    UnderlyingInstrument_60.insert(UnderlyingContractMultiplier_60.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_60(1740021438);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_60);
    UnderlyingInstrument_60.insert(UnderlyingContractMultiplierUnit_60.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_60("COUNTRY_1301014642");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_60);
    UnderlyingInstrument_60.insert(UnderlyingCountryOfIssue_60.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_60("LOCALMKTDATE_1990580015");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_60);
    UnderlyingInstrument_60.insert(UnderlyingCouponPaymentDate_60.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_60;
    UnderlyingCouponRate_60.setString("61.370000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_60);
    UnderlyingInstrument_60.insert(UnderlyingCouponRate_60.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_60("STRING_1530491190");
    noUnderlyings_0_1.set(UnderlyingCreditRating_60);
    UnderlyingInstrument_60.insert(UnderlyingCreditRating_60.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_60("GBP");
    noUnderlyings_0_1.set(UnderlyingCurrency_60);
    UnderlyingInstrument_60.insert(UnderlyingCurrency_60.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_60;
    UnderlyingCurrentValue_60.setString("1574855");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_60);
    UnderlyingInstrument_60.insert(UnderlyingCurrentValue_60.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_60;
    UnderlyingDetachmentPoint_60.setString("50.160000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_60);
    UnderlyingInstrument_60.insert(UnderlyingDetachmentPoint_60.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_60;
    UnderlyingDirtyPrice_60.setString("7062612");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_60);
    UnderlyingInstrument_60.insert(UnderlyingDirtyPrice_60.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_60;
    UnderlyingEndPrice_60.setString("4482220");
    noUnderlyings_0_1.set(UnderlyingEndPrice_60);
    UnderlyingInstrument_60.insert(UnderlyingEndPrice_60.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_60;
    UnderlyingEndValue_60.setString("11231097");
    noUnderlyings_0_1.set(UnderlyingEndValue_60);
    UnderlyingInstrument_60.insert(UnderlyingEndValue_60.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_60(1597890251);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_60);
    UnderlyingInstrument_60.insert(UnderlyingExerciseStyle_60.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_60;
    UnderlyingFXRate_60.setString("11084456");
    noUnderlyings_0_1.set(UnderlyingFXRate_60);
    UnderlyingInstrument_60.insert(UnderlyingFXRate_60.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_60('M');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_60);
    UnderlyingInstrument_60.insert(UnderlyingFXRateCalc_60.getString());
    FIX::UnderlyingFactor UnderlyingFactor_60;
    UnderlyingFactor_60.setString("20941708");
    noUnderlyings_0_1.set(UnderlyingFactor_60);
    UnderlyingInstrument_60.insert(UnderlyingFactor_60.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_60(1481832858);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_60);
    UnderlyingInstrument_60.insert(UnderlyingFlowScheduleType_60.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_60("STRING_1122397895");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_60);
    UnderlyingInstrument_60.insert(UnderlyingInstrRegistry_60.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_60("LOCALMKTDATE_1082973790");
    noUnderlyings_0_1.set(UnderlyingIssueDate_60);
    UnderlyingInstrument_60.insert(UnderlyingIssueDate_60.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_60("STRING_1519848632");
    noUnderlyings_0_1.set(UnderlyingIssuer_60);
    UnderlyingInstrument_60.insert(UnderlyingIssuer_60.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_60("STRING_1600463929");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_60);
    UnderlyingInstrument_60.insert(UnderlyingLocaleOfIssue_60.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_60("LOCALMKTDATE_479975945");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_60);
    UnderlyingInstrument_60.insert(UnderlyingMaturityDate_60.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_60("MONTHYEAR_2110757955");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_60);
    UnderlyingInstrument_60.insert(UnderlyingMaturityMonthYear_60.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_60("TZTIMEONLY_1637797397");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_60);
    UnderlyingInstrument_60.insert(UnderlyingMaturityTime_60.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_60;
    UnderlyingNotionalPercentageOutstanding_60.setString("8.520000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_60);
    UnderlyingInstrument_60.insert(UnderlyingNotionalPercentageOutstanding_60.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_60('6');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_60);
    UnderlyingInstrument_60.insert(UnderlyingOptAttribute_60.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_60;
    UnderlyingOriginalNotionalPercentageOutstanding_60.setString("98.960000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_60);
    UnderlyingInstrument_60.insert(UnderlyingOriginalNotionalPercentageOutstanding_60.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_60("STRING_1455137900");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_60);
    UnderlyingInstrument_60.insert(UnderlyingPriceUnitOfMeasure_60.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_60;
    UnderlyingPriceUnitOfMeasureQty_60.setString("15836060");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_60);
    UnderlyingInstrument_60.insert(UnderlyingPriceUnitOfMeasureQty_60.getString());
    FIX::UnderlyingProduct UnderlyingProduct_60(648874749);
    noUnderlyings_0_1.set(UnderlyingProduct_60);
    UnderlyingInstrument_60.insert(UnderlyingProduct_60.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_60(231898801);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_60);
    UnderlyingInstrument_60.insert(UnderlyingPutOrCall_60.getString());
    FIX::UnderlyingPx UnderlyingPx_60;
    UnderlyingPx_60.setString("11761438");
    noUnderlyings_0_1.set(UnderlyingPx_60);
    UnderlyingInstrument_60.insert(UnderlyingPx_60.getString());
    FIX::UnderlyingQty UnderlyingQty_60;
    UnderlyingQty_60.setString("19498893");
    noUnderlyings_0_1.set(UnderlyingQty_60);
    UnderlyingInstrument_60.insert(UnderlyingQty_60.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_60("LOCALMKTDATE_74995169");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_60);
    UnderlyingInstrument_60.insert(UnderlyingRedemptionDate_60.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_60("STRING_356176295");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_60);
    UnderlyingInstrument_60.insert(UnderlyingRepoCollateralSecurityType_60.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_60;
    UnderlyingRepurchaseRate_60.setString("69.340000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_60);
    UnderlyingInstrument_60.insert(UnderlyingRepurchaseRate_60.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_60(35778550);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_60);
    UnderlyingInstrument_60.insert(UnderlyingRepurchaseTerm_60.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_60("STRING_1649338304");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_60);
    UnderlyingInstrument_60.insert(UnderlyingRestructuringType_60.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_60("STRING_1490382463");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_60);
    UnderlyingInstrument_60.insert(UnderlyingSecurityDesc_60.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_60("EXCHANGE_2061893566");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_60);
    UnderlyingInstrument_60.insert(UnderlyingSecurityExchange_60.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_60("STRING_208115923");
    noUnderlyings_0_1.set(UnderlyingSecurityID_60);
    UnderlyingInstrument_60.insert(UnderlyingSecurityID_60.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_60("STRING_1938604498");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_60);
    UnderlyingInstrument_60.insert(UnderlyingSecurityIDSource_60.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_60("STRING_1037519621");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_60);
    UnderlyingInstrument_60.insert(UnderlyingSecuritySubType_60.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_60("STRING_1806006174");
    noUnderlyings_0_1.set(UnderlyingSecurityType_60);
    UnderlyingInstrument_60.insert(UnderlyingSecurityType_60.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_60("STRING_899566547");
    noUnderlyings_0_1.set(UnderlyingSeniority_60);
    UnderlyingInstrument_60.insert(UnderlyingSeniority_60.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_60("STRING_63172629");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_60);
    UnderlyingInstrument_60.insert(UnderlyingSettlMethod_60.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_60(5);
    noUnderlyings_0_1.set(UnderlyingSettlementType_60);
    UnderlyingInstrument_60.insert(UnderlyingSettlementType_60.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_60;
    UnderlyingStartValue_60.setString("2339157");
    noUnderlyings_0_1.set(UnderlyingStartValue_60);
    UnderlyingInstrument_60.insert(UnderlyingStartValue_60.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_60("STRING_1185570524");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_60);
    UnderlyingInstrument_60.insert(UnderlyingStateOrProvinceOfIssue_60.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_60("CAN");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_60);
    UnderlyingInstrument_60.insert(UnderlyingStrikeCurrency_60.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_60;
    UnderlyingStrikePrice_60.setString("6385508");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_60);
    UnderlyingInstrument_60.insert(UnderlyingStrikePrice_60.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_60("STRING_1168159441");
    noUnderlyings_0_1.set(UnderlyingSymbol_60);
    UnderlyingInstrument_60.insert(UnderlyingSymbol_60.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_60("STRING_1717038696");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_60);
    UnderlyingInstrument_60.insert(UnderlyingSymbolSfx_60.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_60("STRING_128864554");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_60);
    UnderlyingInstrument_60.insert(UnderlyingTimeUnit_60.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_60("STRING_605836645");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_60);
    UnderlyingInstrument_60.insert(UnderlyingUnitOfMeasure_60.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_60;
    UnderlyingUnitOfMeasureQty_60.setString("2557640");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_60);
    UnderlyingInstrument_60.insert(UnderlyingUnitOfMeasureQty_60.getString());
    all_values.push_back(UnderlyingInstrument_60);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::NewOrderSingle::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_123;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_123("STRING_2060974545");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_123);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_123.insert(UnderlyingSecurityAltID_123.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_123("STRING_1839370075");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_123);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_123.insert(UnderlyingSecurityAltIDSource_123.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_123);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::NewOrderSingle::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_124;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_124("STRING_1207779200");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_124);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_124.insert(UnderlyingSecurityAltID_124.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_124("STRING_145389698");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_124);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_124.insert(UnderlyingSecurityAltIDSource_124.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_124);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::NewOrderSingle::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_125;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_125("STRING_868030234");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltID_125);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_125.insert(UnderlyingSecurityAltID_125.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_125("STRING_1010184944");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltIDSource_125);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_125.insert(UnderlyingSecurityAltIDSource_125.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_125);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::NewOrderSingle::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_123;
      FIX::UnderlyingStipType UnderlyingStipType_123("STRING_1224206529");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_123);
      UnderlyingStipulations_NoUnderlyingStips_123.insert(UnderlyingStipType_123.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_123("STRING_195598230");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_123);
      UnderlyingStipulations_NoUnderlyingStips_123.insert(UnderlyingStipValue_123.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_123);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::NewOrderSingle::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_124;
      FIX::UnderlyingStipType UnderlyingStipType_124("STRING_256163418");
      noUnderlyingStips_1_1_1.set(UnderlyingStipType_124);
      UnderlyingStipulations_NoUnderlyingStips_124.insert(UnderlyingStipType_124.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_124("STRING_726061185");
      noUnderlyingStips_1_1_1.set(UnderlyingStipValue_124);
      UnderlyingStipulations_NoUnderlyingStips_124.insert(UnderlyingStipValue_124.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_124);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::NewOrderSingle::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_123;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_123("STRING_170573336");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_123);
      UndlyInstrumentParties_NoUndlyInstrumentParties_123.insert(UnderlyingInstrumentPartyID_123.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_123('9');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_123);
      UndlyInstrumentParties_NoUndlyInstrumentParties_123.insert(UnderlyingInstrumentPartyIDSource_123.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_123(1477101544);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_123);
      UndlyInstrumentParties_NoUndlyInstrumentParties_123.insert(UnderlyingInstrumentPartyRole_123.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_123);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderSingle::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_232;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_232("STRING_592699635");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_232);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_232.insert(UnderlyingInstrumentPartySubID_232.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_232(229184443);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_232);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_232.insert(UnderlyingInstrumentPartySubIDType_232.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_232);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::NewOrderSingle::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_233;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_233("STRING_1271265587");
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubID_233);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_233.insert(UnderlyingInstrumentPartySubID_233.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_233(197909341);
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubIDType_233);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_233.insert(UnderlyingInstrumentPartySubIDType_233.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_233);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::NewOrderSingle::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_234;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_234("STRING_463100200");
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubID_234);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_234.insert(UnderlyingInstrumentPartySubID_234.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_234(309352463);
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubIDType_234);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_234.insert(UnderlyingInstrumentPartySubIDType_234.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_234);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::NewOrderSingle::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_124;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_124("STRING_886092836");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_124);
      UndlyInstrumentParties_NoUndlyInstrumentParties_124.insert(UnderlyingInstrumentPartyID_124.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_124('6');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_124);
      UndlyInstrumentParties_NoUndlyInstrumentParties_124.insert(UnderlyingInstrumentPartyIDSource_124.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_124(947903268);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_124);
      UndlyInstrumentParties_NoUndlyInstrumentParties_124.insert(UnderlyingInstrumentPartyRole_124.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_124);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderSingle::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_235;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_235("STRING_1786419637");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_235);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_235.insert(UnderlyingInstrumentPartySubID_235.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_235(1076767823);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_235);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_235.insert(UnderlyingInstrumentPartySubIDType_235.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_235);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  {
    FIX50SP2::NewOrderSingle::NoUnderlyings noUnderlyings_0_2;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_61;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_61("DATA_512605274");
    noUnderlyings_0_2.set(EncodedUnderlyingIssuer_61);
    UnderlyingInstrument_61.insert(EncodedUnderlyingIssuer_61.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_61(2042183697);
    noUnderlyings_0_2.set(EncodedUnderlyingIssuerLen_61);
    UnderlyingInstrument_61.insert(EncodedUnderlyingIssuerLen_61.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_61("DATA_1635672274");
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDesc_61);
    UnderlyingInstrument_61.insert(EncodedUnderlyingSecurityDesc_61.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_61(426096171);
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDescLen_61);
    UnderlyingInstrument_61.insert(EncodedUnderlyingSecurityDescLen_61.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_61;
    UnderlyingAdjustedQuantity_61.setString("17340701");
    noUnderlyings_0_2.set(UnderlyingAdjustedQuantity_61);
    UnderlyingInstrument_61.insert(UnderlyingAdjustedQuantity_61.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_61;
    UnderlyingAllocationPercent_61.setString("78.260000");
    noUnderlyings_0_2.set(UnderlyingAllocationPercent_61);
    UnderlyingInstrument_61.insert(UnderlyingAllocationPercent_61.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_61;
    UnderlyingAttachmentPoint_61.setString("58.700000");
    noUnderlyings_0_2.set(UnderlyingAttachmentPoint_61);
    UnderlyingInstrument_61.insert(UnderlyingAttachmentPoint_61.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_61("STRING_454616710");
    noUnderlyings_0_2.set(UnderlyingCFICode_61);
    UnderlyingInstrument_61.insert(UnderlyingCFICode_61.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_61("STRING_1706152771");
    noUnderlyings_0_2.set(UnderlyingCPProgram_61);
    UnderlyingInstrument_61.insert(UnderlyingCPProgram_61.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_61("STRING_791870737");
    noUnderlyings_0_2.set(UnderlyingCPRegType_61);
    UnderlyingInstrument_61.insert(UnderlyingCPRegType_61.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_61;
    UnderlyingCapValue_61.setString("16788232");
    noUnderlyings_0_2.set(UnderlyingCapValue_61);
    UnderlyingInstrument_61.insert(UnderlyingCapValue_61.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_61;
    UnderlyingCashAmount_61.setString("19017510");
    noUnderlyings_0_2.set(UnderlyingCashAmount_61);
    UnderlyingInstrument_61.insert(UnderlyingCashAmount_61.getString());
    FIX::UnderlyingCashType UnderlyingCashType_61("STRING_DIFF");
    noUnderlyings_0_2.set(UnderlyingCashType_61);
    UnderlyingInstrument_61.insert(UnderlyingCashType_61.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_61;
    UnderlyingContractMultiplier_61.setString("2574007");
    noUnderlyings_0_2.set(UnderlyingContractMultiplier_61);
    UnderlyingInstrument_61.insert(UnderlyingContractMultiplier_61.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_61(1440248047);
    noUnderlyings_0_2.set(UnderlyingContractMultiplierUnit_61);
    UnderlyingInstrument_61.insert(UnderlyingContractMultiplierUnit_61.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_61("COUNTRY_1218607492");
    noUnderlyings_0_2.set(UnderlyingCountryOfIssue_61);
    UnderlyingInstrument_61.insert(UnderlyingCountryOfIssue_61.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_61("LOCALMKTDATE_1191577886");
    noUnderlyings_0_2.set(UnderlyingCouponPaymentDate_61);
    UnderlyingInstrument_61.insert(UnderlyingCouponPaymentDate_61.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_61;
    UnderlyingCouponRate_61.setString("59.430000");
    noUnderlyings_0_2.set(UnderlyingCouponRate_61);
    UnderlyingInstrument_61.insert(UnderlyingCouponRate_61.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_61("STRING_279216802");
    noUnderlyings_0_2.set(UnderlyingCreditRating_61);
    UnderlyingInstrument_61.insert(UnderlyingCreditRating_61.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_61("JPY");
    noUnderlyings_0_2.set(UnderlyingCurrency_61);
    UnderlyingInstrument_61.insert(UnderlyingCurrency_61.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_61;
    UnderlyingCurrentValue_61.setString("15504823");
    noUnderlyings_0_2.set(UnderlyingCurrentValue_61);
    UnderlyingInstrument_61.insert(UnderlyingCurrentValue_61.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_61;
    UnderlyingDetachmentPoint_61.setString("68.630000");
    noUnderlyings_0_2.set(UnderlyingDetachmentPoint_61);
    UnderlyingInstrument_61.insert(UnderlyingDetachmentPoint_61.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_61;
    UnderlyingDirtyPrice_61.setString("14621505");
    noUnderlyings_0_2.set(UnderlyingDirtyPrice_61);
    UnderlyingInstrument_61.insert(UnderlyingDirtyPrice_61.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_61;
    UnderlyingEndPrice_61.setString("18598348");
    noUnderlyings_0_2.set(UnderlyingEndPrice_61);
    UnderlyingInstrument_61.insert(UnderlyingEndPrice_61.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_61;
    UnderlyingEndValue_61.setString("7207960");
    noUnderlyings_0_2.set(UnderlyingEndValue_61);
    UnderlyingInstrument_61.insert(UnderlyingEndValue_61.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_61(1531531527);
    noUnderlyings_0_2.set(UnderlyingExerciseStyle_61);
    UnderlyingInstrument_61.insert(UnderlyingExerciseStyle_61.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_61;
    UnderlyingFXRate_61.setString("6602544");
    noUnderlyings_0_2.set(UnderlyingFXRate_61);
    UnderlyingInstrument_61.insert(UnderlyingFXRate_61.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_61('M');
    noUnderlyings_0_2.set(UnderlyingFXRateCalc_61);
    UnderlyingInstrument_61.insert(UnderlyingFXRateCalc_61.getString());
    FIX::UnderlyingFactor UnderlyingFactor_61;
    UnderlyingFactor_61.setString("11704675");
    noUnderlyings_0_2.set(UnderlyingFactor_61);
    UnderlyingInstrument_61.insert(UnderlyingFactor_61.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_61(1737022295);
    noUnderlyings_0_2.set(UnderlyingFlowScheduleType_61);
    UnderlyingInstrument_61.insert(UnderlyingFlowScheduleType_61.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_61("STRING_1140169955");
    noUnderlyings_0_2.set(UnderlyingInstrRegistry_61);
    UnderlyingInstrument_61.insert(UnderlyingInstrRegistry_61.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_61("LOCALMKTDATE_1065167565");
    noUnderlyings_0_2.set(UnderlyingIssueDate_61);
    UnderlyingInstrument_61.insert(UnderlyingIssueDate_61.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_61("STRING_1225210921");
    noUnderlyings_0_2.set(UnderlyingIssuer_61);
    UnderlyingInstrument_61.insert(UnderlyingIssuer_61.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_61("STRING_1566266127");
    noUnderlyings_0_2.set(UnderlyingLocaleOfIssue_61);
    UnderlyingInstrument_61.insert(UnderlyingLocaleOfIssue_61.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_61("LOCALMKTDATE_651754042");
    noUnderlyings_0_2.set(UnderlyingMaturityDate_61);
    UnderlyingInstrument_61.insert(UnderlyingMaturityDate_61.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_61("MONTHYEAR_1921178748");
    noUnderlyings_0_2.set(UnderlyingMaturityMonthYear_61);
    UnderlyingInstrument_61.insert(UnderlyingMaturityMonthYear_61.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_61("TZTIMEONLY_2137751997");
    noUnderlyings_0_2.set(UnderlyingMaturityTime_61);
    UnderlyingInstrument_61.insert(UnderlyingMaturityTime_61.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_61;
    UnderlyingNotionalPercentageOutstanding_61.setString("7.520000");
    noUnderlyings_0_2.set(UnderlyingNotionalPercentageOutstanding_61);
    UnderlyingInstrument_61.insert(UnderlyingNotionalPercentageOutstanding_61.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_61('1');
    noUnderlyings_0_2.set(UnderlyingOptAttribute_61);
    UnderlyingInstrument_61.insert(UnderlyingOptAttribute_61.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_61;
    UnderlyingOriginalNotionalPercentageOutstanding_61.setString("90.860000");
    noUnderlyings_0_2.set(UnderlyingOriginalNotionalPercentageOutstanding_61);
    UnderlyingInstrument_61.insert(UnderlyingOriginalNotionalPercentageOutstanding_61.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_61("STRING_637710344");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasure_61);
    UnderlyingInstrument_61.insert(UnderlyingPriceUnitOfMeasure_61.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_61;
    UnderlyingPriceUnitOfMeasureQty_61.setString("12341152");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasureQty_61);
    UnderlyingInstrument_61.insert(UnderlyingPriceUnitOfMeasureQty_61.getString());
    FIX::UnderlyingProduct UnderlyingProduct_61(1830173242);
    noUnderlyings_0_2.set(UnderlyingProduct_61);
    UnderlyingInstrument_61.insert(UnderlyingProduct_61.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_61(895111122);
    noUnderlyings_0_2.set(UnderlyingPutOrCall_61);
    UnderlyingInstrument_61.insert(UnderlyingPutOrCall_61.getString());
    FIX::UnderlyingPx UnderlyingPx_61;
    UnderlyingPx_61.setString("5268796");
    noUnderlyings_0_2.set(UnderlyingPx_61);
    UnderlyingInstrument_61.insert(UnderlyingPx_61.getString());
    FIX::UnderlyingQty UnderlyingQty_61;
    UnderlyingQty_61.setString("9012970");
    noUnderlyings_0_2.set(UnderlyingQty_61);
    UnderlyingInstrument_61.insert(UnderlyingQty_61.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_61("LOCALMKTDATE_2086689008");
    noUnderlyings_0_2.set(UnderlyingRedemptionDate_61);
    UnderlyingInstrument_61.insert(UnderlyingRedemptionDate_61.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_61("STRING_1296745566");
    noUnderlyings_0_2.set(UnderlyingRepoCollateralSecurityType_61);
    UnderlyingInstrument_61.insert(UnderlyingRepoCollateralSecurityType_61.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_61;
    UnderlyingRepurchaseRate_61.setString("38.880000");
    noUnderlyings_0_2.set(UnderlyingRepurchaseRate_61);
    UnderlyingInstrument_61.insert(UnderlyingRepurchaseRate_61.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_61(1723482882);
    noUnderlyings_0_2.set(UnderlyingRepurchaseTerm_61);
    UnderlyingInstrument_61.insert(UnderlyingRepurchaseTerm_61.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_61("STRING_148312304");
    noUnderlyings_0_2.set(UnderlyingRestructuringType_61);
    UnderlyingInstrument_61.insert(UnderlyingRestructuringType_61.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_61("STRING_583512629");
    noUnderlyings_0_2.set(UnderlyingSecurityDesc_61);
    UnderlyingInstrument_61.insert(UnderlyingSecurityDesc_61.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_61("EXCHANGE_1558186097");
    noUnderlyings_0_2.set(UnderlyingSecurityExchange_61);
    UnderlyingInstrument_61.insert(UnderlyingSecurityExchange_61.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_61("STRING_1610462890");
    noUnderlyings_0_2.set(UnderlyingSecurityID_61);
    UnderlyingInstrument_61.insert(UnderlyingSecurityID_61.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_61("STRING_295863833");
    noUnderlyings_0_2.set(UnderlyingSecurityIDSource_61);
    UnderlyingInstrument_61.insert(UnderlyingSecurityIDSource_61.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_61("STRING_131498501");
    noUnderlyings_0_2.set(UnderlyingSecuritySubType_61);
    UnderlyingInstrument_61.insert(UnderlyingSecuritySubType_61.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_61("STRING_994510769");
    noUnderlyings_0_2.set(UnderlyingSecurityType_61);
    UnderlyingInstrument_61.insert(UnderlyingSecurityType_61.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_61("STRING_956118305");
    noUnderlyings_0_2.set(UnderlyingSeniority_61);
    UnderlyingInstrument_61.insert(UnderlyingSeniority_61.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_61("STRING_759063182");
    noUnderlyings_0_2.set(UnderlyingSettlMethod_61);
    UnderlyingInstrument_61.insert(UnderlyingSettlMethod_61.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_61(2);
    noUnderlyings_0_2.set(UnderlyingSettlementType_61);
    UnderlyingInstrument_61.insert(UnderlyingSettlementType_61.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_61;
    UnderlyingStartValue_61.setString("5456569");
    noUnderlyings_0_2.set(UnderlyingStartValue_61);
    UnderlyingInstrument_61.insert(UnderlyingStartValue_61.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_61("STRING_1899233137");
    noUnderlyings_0_2.set(UnderlyingStateOrProvinceOfIssue_61);
    UnderlyingInstrument_61.insert(UnderlyingStateOrProvinceOfIssue_61.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_61("JPY");
    noUnderlyings_0_2.set(UnderlyingStrikeCurrency_61);
    UnderlyingInstrument_61.insert(UnderlyingStrikeCurrency_61.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_61;
    UnderlyingStrikePrice_61.setString("13180156");
    noUnderlyings_0_2.set(UnderlyingStrikePrice_61);
    UnderlyingInstrument_61.insert(UnderlyingStrikePrice_61.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_61("STRING_1734416245");
    noUnderlyings_0_2.set(UnderlyingSymbol_61);
    UnderlyingInstrument_61.insert(UnderlyingSymbol_61.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_61("STRING_1544562974");
    noUnderlyings_0_2.set(UnderlyingSymbolSfx_61);
    UnderlyingInstrument_61.insert(UnderlyingSymbolSfx_61.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_61("STRING_1308283965");
    noUnderlyings_0_2.set(UnderlyingTimeUnit_61);
    UnderlyingInstrument_61.insert(UnderlyingTimeUnit_61.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_61("STRING_693303350");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasure_61);
    UnderlyingInstrument_61.insert(UnderlyingUnitOfMeasure_61.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_61;
    UnderlyingUnitOfMeasureQty_61.setString("8769271");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasureQty_61);
    UnderlyingInstrument_61.insert(UnderlyingUnitOfMeasureQty_61.getString());
    all_values.push_back(UnderlyingInstrument_61);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::NewOrderSingle::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_126;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_126("STRING_1331013694");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltID_126);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_126.insert(UnderlyingSecurityAltID_126.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_126("STRING_2111042422");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltIDSource_126);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_126.insert(UnderlyingSecurityAltIDSource_126.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_126);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::NewOrderSingle::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_125;
      FIX::UnderlyingStipType UnderlyingStipType_125("STRING_78641168");
      noUnderlyingStips_2_1_0.set(UnderlyingStipType_125);
      UnderlyingStipulations_NoUnderlyingStips_125.insert(UnderlyingStipType_125.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_125("STRING_490438397");
      noUnderlyingStips_2_1_0.set(UnderlyingStipValue_125);
      UnderlyingStipulations_NoUnderlyingStips_125.insert(UnderlyingStipValue_125.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_125);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    {
      FIX50SP2::NewOrderSingle::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_126;
      FIX::UnderlyingStipType UnderlyingStipType_126("STRING_526926084");
      noUnderlyingStips_2_1_1.set(UnderlyingStipType_126);
      UnderlyingStipulations_NoUnderlyingStips_126.insert(UnderlyingStipType_126.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_126("STRING_17846529");
      noUnderlyingStips_2_1_1.set(UnderlyingStipValue_126);
      UnderlyingStipulations_NoUnderlyingStips_126.insert(UnderlyingStipValue_126.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_126);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_1);
    }
    {
      FIX50SP2::NewOrderSingle::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_127;
      FIX::UnderlyingStipType UnderlyingStipType_127("STRING_1787183964");
      noUnderlyingStips_2_1_2.set(UnderlyingStipType_127);
      UnderlyingStipulations_NoUnderlyingStips_127.insert(UnderlyingStipType_127.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_127("STRING_1707439972");
      noUnderlyingStips_2_1_2.set(UnderlyingStipValue_127);
      UnderlyingStipulations_NoUnderlyingStips_127.insert(UnderlyingStipValue_127.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_127);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::NewOrderSingle::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_125;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_125("STRING_1935496268");
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyID_125);
      UndlyInstrumentParties_NoUndlyInstrumentParties_125.insert(UnderlyingInstrumentPartyID_125.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_125('1');
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyIDSource_125);
      UndlyInstrumentParties_NoUndlyInstrumentParties_125.insert(UnderlyingInstrumentPartyIDSource_125.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_125(1152031861);
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyRole_125);
      UndlyInstrumentParties_NoUndlyInstrumentParties_125.insert(UnderlyingInstrumentPartyRole_125.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_125);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderSingle::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_236;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_236("STRING_439332786");
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubID_236);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_236.insert(UnderlyingInstrumentPartySubID_236.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_236(1283530362);
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubIDType_236);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_236.insert(UnderlyingInstrumentPartySubIDType_236.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_236);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::NewOrderSingle::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_237;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_237("STRING_245502632");
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubID_237);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_237.insert(UnderlyingInstrumentPartySubID_237.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_237(1395451091);
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubIDType_237);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_237.insert(UnderlyingInstrumentPartySubIDType_237.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_237);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_1);
      }
      {
        FIX50SP2::NewOrderSingle::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_238;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_238("STRING_2042593544");
        noUndlyInstrumentPartySubIDs_2_0_2_2.set(UnderlyingInstrumentPartySubID_238);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_238.insert(UnderlyingInstrumentPartySubID_238.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_238(262997270);
        noUndlyInstrumentPartySubIDs_2_0_2_2.set(UnderlyingInstrumentPartySubIDType_238);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_238.insert(UnderlyingInstrumentPartySubIDType_238.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_238);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_2);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_0);
    }
    msg.addGroup(noUnderlyings_0_2);
  }
  // YieldData
  multiset<string> YieldData_11;
  FIX::Yield Yield_11;
  Yield_11.setString("80.440000");
  msg.set(Yield_11);
  YieldData_11.insert(Yield_11.getString());
  FIX::YieldCalcDate YieldCalcDate_11("LOCALMKTDATE_1794343033");
  msg.set(YieldCalcDate_11);
  YieldData_11.insert(YieldCalcDate_11.getString());
  FIX::YieldRedemptionDate YieldRedemptionDate_11("LOCALMKTDATE_1345659474");
  msg.set(YieldRedemptionDate_11);
  YieldData_11.insert(YieldRedemptionDate_11.getString());
  FIX::YieldRedemptionPrice YieldRedemptionPrice_11;
  YieldRedemptionPrice_11.setString("15644922");
  msg.set(YieldRedemptionPrice_11);
  YieldData_11.insert(YieldRedemptionPrice_11.getString());
  FIX::YieldRedemptionPriceType YieldRedemptionPriceType_11(964875002);
  msg.set(YieldRedemptionPriceType_11);
  YieldData_11.insert(YieldRedemptionPriceType_11.getString());
  FIX::YieldType YieldType_11("STRING_MARK");
  msg.set(YieldType_11);
  YieldData_11.insert(YieldType_11.getString());
  all_values.push_back(YieldData_11);
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
