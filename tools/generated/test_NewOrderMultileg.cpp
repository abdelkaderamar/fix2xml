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

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::NewOrderMultileg msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> NewOrderMultileg_0;
  FIX::Account Account_23("STRING_472872296");
  msg.set(Account_23);
  NewOrderMultileg_0.insert(Account_23.getString());
  FIX::AccountType AccountType_20(4);
  msg.set(AccountType_20);
  NewOrderMultileg_0.insert(AccountType_20.getString());
  FIX::AcctIDSource AcctIDSource_16(99);
  msg.set(AcctIDSource_16);
  NewOrderMultileg_0.insert(AcctIDSource_16.getString());
  FIX::AllocID AllocID_18("STRING_227670208");
  msg.set(AllocID_18);
  NewOrderMultileg_0.insert(AllocID_18.getString());
  FIX::BookingType BookingType_28(2);
  msg.set(BookingType_28);
  NewOrderMultileg_0.insert(BookingType_28.getString());
  FIX::BookingUnit BookingUnit_11('0');
  msg.set(BookingUnit_11);
  NewOrderMultileg_0.insert(BookingUnit_11.getString());
  FIX::CancellationRights CancellationRights_5('Y');
  msg.set(CancellationRights_5);
  NewOrderMultileg_0.insert(CancellationRights_5.getString());
  FIX::CashMargin CashMargin_11('3');
  msg.set(CashMargin_11);
  NewOrderMultileg_0.insert(CashMargin_11.getString());
  FIX::ClOrdID ClOrdID_32("STRING_1179690940");
  msg.set(ClOrdID_32);
  NewOrderMultileg_0.insert(ClOrdID_32.getString());
  FIX::ClOrdLinkID ClOrdLinkID_12("STRING_2421253");
  msg.set(ClOrdLinkID_12);
  NewOrderMultileg_0.insert(ClOrdLinkID_12.getString());
  FIX::ClearingFeeIndicator ClearingFeeIndicator_15("STRING_B");
  msg.set(ClearingFeeIndicator_15);
  NewOrderMultileg_0.insert(ClearingFeeIndicator_15.getString());
  FIX::ComplianceID ComplianceID_8("STRING_602753523");
  msg.set(ComplianceID_8);
  NewOrderMultileg_0.insert(ComplianceID_8.getString());
  FIX::CoveredOrUncovered CoveredOrUncovered_10(0);
  msg.set(CoveredOrUncovered_10);
  NewOrderMultileg_0.insert(CoveredOrUncovered_10.getString());
  FIX::Currency Currency_49("GBP");
  msg.set(Currency_49);
  NewOrderMultileg_0.insert(Currency_49.getString());
  FIX::CustOrderCapacity CustOrderCapacity_14(4);
  msg.set(CustOrderCapacity_14);
  NewOrderMultileg_0.insert(CustOrderCapacity_14.getString());
  FIX::DayBookingInst DayBookingInst_11('1');
  msg.set(DayBookingInst_11);
  NewOrderMultileg_0.insert(DayBookingInst_11.getString());
  FIX::Designation Designation_7("STRING_1538415187");
  msg.set(Designation_7);
  NewOrderMultileg_0.insert(Designation_7.getString());
  FIX::EffectiveTime EffectiveTime_7(FIX::UTCTIMESTAMP(15, 16, 11, 4, 6, 2003));
  msg.set(EffectiveTime_7);
  NewOrderMultileg_0.insert(EffectiveTime_7.getString());
  FIX::EncodedText EncodedText_60("DATA_1677678868");
  msg.set(EncodedText_60);
  NewOrderMultileg_0.insert(EncodedText_60.getString());
  FIX::EncodedTextLen EncodedTextLen_60(82951767);
  msg.set(EncodedTextLen_60);
  NewOrderMultileg_0.insert(EncodedTextLen_60.getString());
  FIX::ExDestination ExDestination_6("EXCHANGE_480167106");
  msg.set(ExDestination_6);
  NewOrderMultileg_0.insert(ExDestination_6.getString());
  FIX::ExDestinationIDSource ExDestinationIDSource_6('B');
  msg.set(ExDestinationIDSource_6);
  NewOrderMultileg_0.insert(ExDestinationIDSource_6.getString());
  FIX::ExecInst ExecInst_10("MULTIPLECHARVALUE_E");
  msg.set(ExecInst_10);
  NewOrderMultileg_0.insert(ExecInst_10.getString());
  FIX::ExpireDate ExpireDate_11("LOCALMKTDATE_577409824");
  msg.set(ExpireDate_11);
  NewOrderMultileg_0.insert(ExpireDate_11.getString());
  FIX::ExpireTime ExpireTime_12(FIX::UTCTIMESTAMP(4, 33, 14, 18, 1, 2011));
  msg.set(ExpireTime_12);
  NewOrderMultileg_0.insert(ExpireTime_12.getString());
  FIX::ForexReq ForexReq_11(true);
  msg.set(ForexReq_11);
  NewOrderMultileg_0.insert(ForexReq_11.getString());
  FIX::GTBookingInst GTBookingInst_7(0);
  msg.set(GTBookingInst_7);
  NewOrderMultileg_0.insert(GTBookingInst_7.getString());
  FIX::HandlInst HandlInst_7('1');
  msg.set(HandlInst_7);
  NewOrderMultileg_0.insert(HandlInst_7.getString());
  FIX::IOIID IOIID_7("STRING_1886668156");
  msg.set(IOIID_7);
  NewOrderMultileg_0.insert(IOIID_7.getString());
  FIX::LocateReqd LocateReqd_6(true);
  msg.set(LocateReqd_6);
  NewOrderMultileg_0.insert(LocateReqd_6.getString());
  FIX::MatchIncrement MatchIncrement_7;
  MatchIncrement_7.setString("3140401");
  msg.set(MatchIncrement_7);
  NewOrderMultileg_0.insert(MatchIncrement_7.getString());
  FIX::MaxFloor MaxFloor_7;
  MaxFloor_7.setString("8751250");
  msg.set(MaxFloor_7);
  NewOrderMultileg_0.insert(MaxFloor_7.getString());
  FIX::MaxPriceLevels MaxPriceLevels_7(504786606);
  msg.set(MaxPriceLevels_7);
  NewOrderMultileg_0.insert(MaxPriceLevels_7.getString());
  FIX::MaxShow MaxShow_7;
  MaxShow_7.setString("628406");
  msg.set(MaxShow_7);
  NewOrderMultileg_0.insert(MaxShow_7.getString());
  FIX::MinQty MinQty_10;
  MinQty_10.setString("11702600");
  msg.set(MinQty_10);
  NewOrderMultileg_0.insert(MinQty_10.getString());
  FIX::MoneyLaunderingStatus MoneyLaunderingStatus_5('3');
  msg.set(MoneyLaunderingStatus_5);
  NewOrderMultileg_0.insert(MoneyLaunderingStatus_5.getString());
  FIX::MultiLegRptTypeReq MultiLegRptTypeReq_1(0);
  msg.set(MultiLegRptTypeReq_1);
  NewOrderMultileg_0.insert(MultiLegRptTypeReq_1.getString());
  FIX::MultilegModel MultilegModel_9(0);
  msg.set(MultilegModel_9);
  NewOrderMultileg_0.insert(MultilegModel_9.getString());
  FIX::MultilegPriceMethod MultilegPriceMethod_9(4);
  msg.set(MultilegPriceMethod_9);
  NewOrderMultileg_0.insert(MultilegPriceMethod_9.getString());
  FIX::OrdType OrdType_52('G');
  msg.set(OrdType_52);
  NewOrderMultileg_0.insert(OrdType_52.getString());
  FIX::OrderCapacity OrderCapacity_29('R');
  msg.set(OrderCapacity_29);
  NewOrderMultileg_0.insert(OrderCapacity_29.getString());
  FIX::OrderRestrictions OrderRestrictions_26("MULTIPLECHARVALUE_A");
  msg.set(OrderRestrictions_26);
  NewOrderMultileg_0.insert(OrderRestrictions_26.getString());
  FIX::ParticipationRate ParticipationRate_7;
  ParticipationRate_7.setString("67.010000");
  msg.set(ParticipationRate_7);
  NewOrderMultileg_0.insert(ParticipationRate_7.getString());
  FIX::PositionEffect PositionEffect_14('C');
  msg.set(PositionEffect_14);
  NewOrderMultileg_0.insert(PositionEffect_14.getString());
  FIX::PreTradeAnonymity PreTradeAnonymity_11(true);
  msg.set(PreTradeAnonymity_11);
  NewOrderMultileg_0.insert(PreTradeAnonymity_11.getString());
  FIX::PreallocMethod PreallocMethod_11('1');
  msg.set(PreallocMethod_11);
  NewOrderMultileg_0.insert(PreallocMethod_11.getString());
  FIX::PrevClosePx PrevClosePx_7;
  PrevClosePx_7.setString("14516166");
  msg.set(PrevClosePx_7);
  NewOrderMultileg_0.insert(PrevClosePx_7.getString());
  FIX::Price Price_18;
  Price_18.setString("20525833");
  msg.set(Price_18);
  NewOrderMultileg_0.insert(Price_18.getString());
  FIX::PriceProtectionScope PriceProtectionScope_7('0');
  msg.set(PriceProtectionScope_7);
  NewOrderMultileg_0.insert(PriceProtectionScope_7.getString());
  FIX::PriceType PriceType_32(19);
  msg.set(PriceType_32);
  NewOrderMultileg_0.insert(PriceType_32.getString());
  FIX::ProcessCode ProcessCode_11('3');
  msg.set(ProcessCode_11);
  NewOrderMultileg_0.insert(ProcessCode_11.getString());
  FIX::QtyType QtyType_23(1);
  msg.set(QtyType_23);
  NewOrderMultileg_0.insert(QtyType_23.getString());
  FIX::QuoteID QuoteID_8("STRING_22813578");
  msg.set(QuoteID_8);
  NewOrderMultileg_0.insert(QuoteID_8.getString());
  FIX::RefOrderID RefOrderID_3("STRING_1952717347");
  msg.set(RefOrderID_3);
  NewOrderMultileg_0.insert(RefOrderID_3.getString());
  FIX::RefOrderIDSource RefOrderIDSource_3('2');
  msg.set(RefOrderIDSource_3);
  NewOrderMultileg_0.insert(RefOrderIDSource_3.getString());
  FIX::RegistID RegistID_5("STRING_2083369025");
  msg.set(RegistID_5);
  NewOrderMultileg_0.insert(RegistID_5.getString());
  FIX::RiskFreeRate RiskFreeRate_2;
  RiskFreeRate_2.setString("832029");
  msg.set(RiskFreeRate_2);
  NewOrderMultileg_0.insert(RiskFreeRate_2.getString());
  FIX::SecondaryClOrdID SecondaryClOrdID_30("STRING_2142189447");
  msg.set(SecondaryClOrdID_30);
  NewOrderMultileg_0.insert(SecondaryClOrdID_30.getString());
  FIX::SettlCurrency SettlCurrency_19("GBP");
  msg.set(SettlCurrency_19);
  NewOrderMultileg_0.insert(SettlCurrency_19.getString());
  FIX::SettlDate SettlDate_42("LOCALMKTDATE_1422456247");
  msg.set(SettlDate_42);
  NewOrderMultileg_0.insert(SettlDate_42.getString());
  FIX::SettlType SettlType_22("STRING_4");
  msg.set(SettlType_22);
  NewOrderMultileg_0.insert(SettlType_22.getString());
  FIX::Side Side_31('7');
  msg.set(Side_31);
  NewOrderMultileg_0.insert(Side_31.getString());
  FIX::SolicitedFlag SolicitedFlag_11(true);
  msg.set(SolicitedFlag_11);
  NewOrderMultileg_0.insert(SolicitedFlag_11.getString());
  FIX::StopPx StopPx_7;
  StopPx_7.setString("2282592");
  msg.set(StopPx_7);
  NewOrderMultileg_0.insert(StopPx_7.getString());
  FIX::SwapPoints SwapPoints_1;
  SwapPoints_1.setString("18677725");
  msg.set(SwapPoints_1);
  NewOrderMultileg_0.insert(SwapPoints_1.getString());
  FIX::TargetStrategy TargetStrategy_7(3);
  msg.set(TargetStrategy_7);
  NewOrderMultileg_0.insert(TargetStrategy_7.getString());
  FIX::TargetStrategyParameters TargetStrategyParameters_7("STRING_2133757934");
  msg.set(TargetStrategyParameters_7);
  NewOrderMultileg_0.insert(TargetStrategyParameters_7.getString());
  FIX::Text Text_60("STRING_1134002385");
  msg.set(Text_60);
  NewOrderMultileg_0.insert(Text_60.getString());
  FIX::TimeInForce TimeInForce_36('4');
  msg.set(TimeInForce_36);
  NewOrderMultileg_0.insert(TimeInForce_36.getString());
  FIX::TradeDate TradeDate_24("LOCALMKTDATE_753743662");
  msg.set(TradeDate_24);
  NewOrderMultileg_0.insert(TradeDate_24.getString());
  FIX::TradeOriginationDate TradeOriginationDate_16("LOCALMKTDATE_61565519");
  msg.set(TradeOriginationDate_16);
  NewOrderMultileg_0.insert(TradeOriginationDate_16.getString());
  FIX::TransactTime TransactTime_45(FIX::UTCTIMESTAMP(3, 42, 11, 18, 4, 2010));
  msg.set(TransactTime_45);
  NewOrderMultileg_0.insert(TransactTime_45.getString());
  all_values.push_back(NewOrderMultileg_0);

  all_compo_names.insert("NewOrderMultileg");

  // CommissionData
  multiset<string> CommissionData_19;
  FIX::CommCurrency CommCurrency_19("USD");
  msg.set(CommCurrency_19);
  CommissionData_19.insert(CommCurrency_19.getString());
  FIX::CommType CommType_19('2');
  msg.set(CommType_19);
  CommissionData_19.insert(CommType_19.getString());
  FIX::Commission Commission_19;
  Commission_19.setString("10328997");
  msg.set(Commission_19);
  CommissionData_19.insert(Commission_19.getString());
  FIX::FundRenewWaiv FundRenewWaiv_19('N');
  msg.set(FundRenewWaiv_19);
  CommissionData_19.insert(FundRenewWaiv_19.getString());
  all_values.push_back(CommissionData_19);
  all_compo_names.insert("CommissionData");

  // DiscretionInstructions
  multiset<string> DiscretionInstructions_7;
  FIX::DiscretionInst DiscretionInst_7('5');
  msg.set(DiscretionInst_7);
  DiscretionInstructions_7.insert(DiscretionInst_7.getString());
  FIX::DiscretionLimitType DiscretionLimitType_7(1);
  msg.set(DiscretionLimitType_7);
  DiscretionInstructions_7.insert(DiscretionLimitType_7.getString());
  FIX::DiscretionMoveType DiscretionMoveType_7(1);
  msg.set(DiscretionMoveType_7);
  DiscretionInstructions_7.insert(DiscretionMoveType_7.getString());
  FIX::DiscretionOffsetType DiscretionOffsetType_7(3);
  msg.set(DiscretionOffsetType_7);
  DiscretionInstructions_7.insert(DiscretionOffsetType_7.getString());
  FIX::DiscretionOffsetValue DiscretionOffsetValue_7;
  DiscretionOffsetValue_7.setString("1973144");
  msg.set(DiscretionOffsetValue_7);
  DiscretionInstructions_7.insert(DiscretionOffsetValue_7.getString());
  FIX::DiscretionRoundDirection DiscretionRoundDirection_7(2);
  msg.set(DiscretionRoundDirection_7);
  DiscretionInstructions_7.insert(DiscretionRoundDirection_7.getString());
  FIX::DiscretionScope DiscretionScope_7(2);
  msg.set(DiscretionScope_7);
  DiscretionInstructions_7.insert(DiscretionScope_7.getString());
  all_values.push_back(DiscretionInstructions_7);
  all_compo_names.insert("DiscretionInstructions");

  // DisplayInstruction
  multiset<string> DisplayInstruction_7;
  FIX::DisplayHighQty DisplayHighQty_7;
  DisplayHighQty_7.setString("16197706");
  msg.set(DisplayHighQty_7);
  DisplayInstruction_7.insert(DisplayHighQty_7.getString());
  FIX::DisplayLowQty DisplayLowQty_7;
  DisplayLowQty_7.setString("5698165");
  msg.set(DisplayLowQty_7);
  DisplayInstruction_7.insert(DisplayLowQty_7.getString());
  FIX::DisplayMethod DisplayMethod_7('4');
  msg.set(DisplayMethod_7);
  DisplayInstruction_7.insert(DisplayMethod_7.getString());
  FIX::DisplayMinIncr DisplayMinIncr_7;
  DisplayMinIncr_7.setString("13995298");
  msg.set(DisplayMinIncr_7);
  DisplayInstruction_7.insert(DisplayMinIncr_7.getString());
  FIX::DisplayQty DisplayQty_7;
  DisplayQty_7.setString("7980757");
  msg.set(DisplayQty_7);
  DisplayInstruction_7.insert(DisplayQty_7.getString());
  FIX::DisplayWhen DisplayWhen_7('2');
  msg.set(DisplayWhen_7);
  DisplayInstruction_7.insert(DisplayWhen_7.getString());
  FIX::RefreshQty RefreshQty_7;
  RefreshQty_7.setString("10750072");
  msg.set(RefreshQty_7);
  DisplayInstruction_7.insert(RefreshQty_7.getString());
  FIX::SecondaryDisplayQty SecondaryDisplayQty_7;
  SecondaryDisplayQty_7.setString("7843500");
  msg.set(SecondaryDisplayQty_7);
  DisplayInstruction_7.insert(SecondaryDisplayQty_7.getString());
  all_values.push_back(DisplayInstruction_7);
  all_compo_names.insert("DisplayInstruction");

  // Instrument
  multiset<string> Instrument_51;
  FIX::AttachmentPoint AttachmentPoint_51;
  AttachmentPoint_51.setString("91.570000");
  msg.set(AttachmentPoint_51);
  Instrument_51.insert(AttachmentPoint_51.getString());
  FIX::CFICode CFICode_51("STRING_1313463160");
  msg.set(CFICode_51);
  Instrument_51.insert(CFICode_51.getString());
  FIX::CPProgram CPProgram_51(2);
  msg.set(CPProgram_51);
  Instrument_51.insert(CPProgram_51.getString());
  FIX::CPRegType CPRegType_51("STRING_1186714676");
  msg.set(CPRegType_51);
  Instrument_51.insert(CPRegType_51.getString());
  FIX::CapPrice CapPrice_51;
  CapPrice_51.setString("7591131");
  msg.set(CapPrice_51);
  Instrument_51.insert(CapPrice_51.getString());
  FIX::ContractMultiplier ContractMultiplier_51;
  ContractMultiplier_51.setString("20308404");
  msg.set(ContractMultiplier_51);
  Instrument_51.insert(ContractMultiplier_51.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_51(2);
  msg.set(ContractMultiplierUnit_51);
  Instrument_51.insert(ContractMultiplierUnit_51.getString());
  FIX::ContractSettlMonth ContractSettlMonth_51("MONTHYEAR_1642392597");
  msg.set(ContractSettlMonth_51);
  Instrument_51.insert(ContractSettlMonth_51.getString());
  FIX::CountryOfIssue CountryOfIssue_51("COUNTRY_595273628");
  msg.set(CountryOfIssue_51);
  Instrument_51.insert(CountryOfIssue_51.getString());
  FIX::CouponPaymentDate CouponPaymentDate_51("LOCALMKTDATE_1824462765");
  msg.set(CouponPaymentDate_51);
  Instrument_51.insert(CouponPaymentDate_51.getString());
  FIX::CouponRate CouponRate_51;
  CouponRate_51.setString("80.970000");
  msg.set(CouponRate_51);
  Instrument_51.insert(CouponRate_51.getString());
  FIX::CreditRating CreditRating_51("STRING_2103770486");
  msg.set(CreditRating_51);
  Instrument_51.insert(CreditRating_51.getString());
  FIX::DatedDate DatedDate_51("LOCALMKTDATE_271299716");
  msg.set(DatedDate_51);
  Instrument_51.insert(DatedDate_51.getString());
  FIX::DetachmentPoint DetachmentPoint_51;
  DetachmentPoint_51.setString("92.510000");
  msg.set(DetachmentPoint_51);
  Instrument_51.insert(DetachmentPoint_51.getString());
  FIX::EncodedIssuer EncodedIssuer_51("DATA_989186586");
  msg.set(EncodedIssuer_51);
  Instrument_51.insert(EncodedIssuer_51.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_51(888433892);
  msg.set(EncodedIssuerLen_51);
  Instrument_51.insert(EncodedIssuerLen_51.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_51("DATA_1961047752");
  msg.set(EncodedSecurityDesc_51);
  Instrument_51.insert(EncodedSecurityDesc_51.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_51(1191795208);
  msg.set(EncodedSecurityDescLen_51);
  Instrument_51.insert(EncodedSecurityDescLen_51.getString());
  FIX::ExerciseStyle ExerciseStyle_51(0);
  msg.set(ExerciseStyle_51);
  Instrument_51.insert(ExerciseStyle_51.getString());
  FIX::Factor Factor_51;
  Factor_51.setString("17120055");
  msg.set(Factor_51);
  Instrument_51.insert(Factor_51.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_51(false);
  msg.set(FlexProductEligibilityIndicator_51);
  Instrument_51.insert(FlexProductEligibilityIndicator_51.getString());
  FIX::FlexibleIndicator FlexibleIndicator_51(false);
  msg.set(FlexibleIndicator_51);
  Instrument_51.insert(FlexibleIndicator_51.getString());
  FIX::FloorPrice FloorPrice_51;
  FloorPrice_51.setString("12853509");
  msg.set(FloorPrice_51);
  Instrument_51.insert(FloorPrice_51.getString());
  FIX::FlowScheduleType FlowScheduleType_51(0);
  msg.set(FlowScheduleType_51);
  Instrument_51.insert(FlowScheduleType_51.getString());
  FIX::InstrRegistry InstrRegistry_51("STRING_268184316");
  msg.set(InstrRegistry_51);
  Instrument_51.insert(InstrRegistry_51.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_51('1');
  msg.set(InstrmtAssignmentMethod_51);
  Instrument_51.insert(InstrmtAssignmentMethod_51.getString());
  FIX::InterestAccrualDate InterestAccrualDate_51("LOCALMKTDATE_113442876");
  msg.set(InterestAccrualDate_51);
  Instrument_51.insert(InterestAccrualDate_51.getString());
  FIX::IssueDate IssueDate_51("LOCALMKTDATE_1066260054");
  msg.set(IssueDate_51);
  Instrument_51.insert(IssueDate_51.getString());
  FIX::Issuer Issuer_51("STRING_1547355527");
  msg.set(Issuer_51);
  Instrument_51.insert(Issuer_51.getString());
  FIX::ListMethod ListMethod_51(1);
  msg.set(ListMethod_51);
  Instrument_51.insert(ListMethod_51.getString());
  FIX::LocaleOfIssue LocaleOfIssue_51("STRING_1850610079");
  msg.set(LocaleOfIssue_51);
  Instrument_51.insert(LocaleOfIssue_51.getString());
  FIX::MaturityDate MaturityDate_51("LOCALMKTDATE_525021036");
  msg.set(MaturityDate_51);
  Instrument_51.insert(MaturityDate_51.getString());
  FIX::MaturityMonthYear MaturityMonthYear_51("MONTHYEAR_354429615");
  msg.set(MaturityMonthYear_51);
  Instrument_51.insert(MaturityMonthYear_51.getString());
  FIX::MaturityTime MaturityTime_51("TZTIMEONLY_1241220117");
  msg.set(MaturityTime_51);
  Instrument_51.insert(MaturityTime_51.getString());
  FIX::MinPriceIncrement MinPriceIncrement_51;
  MinPriceIncrement_51.setString("17117357");
  msg.set(MinPriceIncrement_51);
  Instrument_51.insert(MinPriceIncrement_51.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_51;
  MinPriceIncrementAmount_51.setString("11135427");
  msg.set(MinPriceIncrementAmount_51);
  Instrument_51.insert(MinPriceIncrementAmount_51.getString());
  FIX::NTPositionLimit NTPositionLimit_51(1124576871);
  msg.set(NTPositionLimit_51);
  Instrument_51.insert(NTPositionLimit_51.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_51;
  NotionalPercentageOutstanding_51.setString("42.630000");
  msg.set(NotionalPercentageOutstanding_51);
  Instrument_51.insert(NotionalPercentageOutstanding_51.getString());
  FIX::OptAttribute OptAttribute_51('6');
  msg.set(OptAttribute_51);
  Instrument_51.insert(OptAttribute_51.getString());
  FIX::OptPayoutAmount OptPayoutAmount_51;
  OptPayoutAmount_51.setString("17198504");
  msg.set(OptPayoutAmount_51);
  Instrument_51.insert(OptPayoutAmount_51.getString());
  FIX::OptPayoutType OptPayoutType_51(3);
  msg.set(OptPayoutType_51);
  Instrument_51.insert(OptPayoutType_51.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_51;
  OriginalNotionalPercentageOutstanding_51.setString("98.070000");
  msg.set(OriginalNotionalPercentageOutstanding_51);
  Instrument_51.insert(OriginalNotionalPercentageOutstanding_51.getString());
  FIX::Pool Pool_51("STRING_1676137337");
  msg.set(Pool_51);
  Instrument_51.insert(Pool_51.getString());
  FIX::PositionLimit PositionLimit_51(1366053097);
  msg.set(PositionLimit_51);
  Instrument_51.insert(PositionLimit_51.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_51("STRING_INT");
  msg.set(PriceQuoteMethod_51);
  Instrument_51.insert(PriceQuoteMethod_51.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_51("STRING_517840276");
  msg.set(PriceUnitOfMeasure_51);
  Instrument_51.insert(PriceUnitOfMeasure_51.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_51;
  PriceUnitOfMeasureQty_51.setString("1070033");
  msg.set(PriceUnitOfMeasureQty_51);
  Instrument_51.insert(PriceUnitOfMeasureQty_51.getString());
  FIX::Product Product_53(4);
  msg.set(Product_53);
  Instrument_51.insert(Product_53.getString());
  FIX::ProductComplex ProductComplex_51("STRING_1709635484");
  msg.set(ProductComplex_51);
  Instrument_51.insert(ProductComplex_51.getString());
  FIX::PutOrCall PutOrCall_51(1);
  msg.set(PutOrCall_51);
  Instrument_51.insert(PutOrCall_51.getString());
  FIX::RedemptionDate RedemptionDate_51("LOCALMKTDATE_415635101");
  msg.set(RedemptionDate_51);
  Instrument_51.insert(RedemptionDate_51.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_51("STRING_951261466");
  msg.set(RepoCollateralSecurityType_51);
  Instrument_51.insert(RepoCollateralSecurityType_51.getString());
  FIX::RepurchaseRate RepurchaseRate_51;
  RepurchaseRate_51.setString("45.680000");
  msg.set(RepurchaseRate_51);
  Instrument_51.insert(RepurchaseRate_51.getString());
  FIX::RepurchaseTerm RepurchaseTerm_51(1700986014);
  msg.set(RepurchaseTerm_51);
  Instrument_51.insert(RepurchaseTerm_51.getString());
  FIX::RestructuringType RestructuringType_51("STRING_FR");
  msg.set(RestructuringType_51);
  Instrument_51.insert(RestructuringType_51.getString());
  FIX::SecurityDesc SecurityDesc_51("STRING_1515008885");
  msg.set(SecurityDesc_51);
  Instrument_51.insert(SecurityDesc_51.getString());
  FIX::SecurityExchange SecurityExchange_51("EXCHANGE_1109711122");
  msg.set(SecurityExchange_51);
  Instrument_51.insert(SecurityExchange_51.getString());
  FIX::SecurityGroup SecurityGroup_51("STRING_1926100992");
  msg.set(SecurityGroup_51);
  Instrument_51.insert(SecurityGroup_51.getString());
  FIX::SecurityID SecurityID_51("STRING_433785291");
  msg.set(SecurityID_51);
  Instrument_51.insert(SecurityID_51.getString());
  FIX::SecurityIDSource SecurityIDSource_51("STRING_G");
  msg.set(SecurityIDSource_51);
  Instrument_51.insert(SecurityIDSource_51.getString());
  FIX::SecurityStatus SecurityStatus_51("STRING_2");
  msg.set(SecurityStatus_51);
  Instrument_51.insert(SecurityStatus_51.getString());
  FIX::SecuritySubType SecuritySubType_52("STRING_136911722");
  msg.set(SecuritySubType_52);
  Instrument_51.insert(SecuritySubType_52.getString());
  FIX::SecurityType SecurityType_53("STRING_REV");
  msg.set(SecurityType_53);
  Instrument_51.insert(SecurityType_53.getString());
  FIX::Seniority Seniority_51("STRING_SD");
  msg.set(Seniority_51);
  Instrument_51.insert(Seniority_51.getString());
  FIX::SettlMethod SettlMethod_51('C');
  msg.set(SettlMethod_51);
  Instrument_51.insert(SettlMethod_51.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_51("STRING_598856103");
  msg.set(SettleOnOpenFlag_51);
  Instrument_51.insert(SettleOnOpenFlag_51.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_51("STRING_287556176");
  msg.set(StateOrProvinceOfIssue_51);
  Instrument_51.insert(StateOrProvinceOfIssue_51.getString());
  FIX::StrikeCurrency StrikeCurrency_51("USD");
  msg.set(StrikeCurrency_51);
  Instrument_51.insert(StrikeCurrency_51.getString());
  FIX::StrikeMultiplier StrikeMultiplier_51;
  StrikeMultiplier_51.setString("8960078");
  msg.set(StrikeMultiplier_51);
  Instrument_51.insert(StrikeMultiplier_51.getString());
  FIX::StrikePrice StrikePrice_51;
  StrikePrice_51.setString("20750755");
  msg.set(StrikePrice_51);
  Instrument_51.insert(StrikePrice_51.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_51(5);
  msg.set(StrikePriceBoundaryMethod_51);
  Instrument_51.insert(StrikePriceBoundaryMethod_51.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_51;
  StrikePriceBoundaryPrecision_51.setString("76.930000");
  msg.set(StrikePriceBoundaryPrecision_51);
  Instrument_51.insert(StrikePriceBoundaryPrecision_51.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_51(4);
  msg.set(StrikePriceDeterminationMethod_51);
  Instrument_51.insert(StrikePriceDeterminationMethod_51.getString());
  FIX::StrikeValue StrikeValue_51;
  StrikeValue_51.setString("1824695");
  msg.set(StrikeValue_51);
  Instrument_51.insert(StrikeValue_51.getString());
  FIX::Symbol Symbol_51("STRING_677813104");
  msg.set(Symbol_51);
  Instrument_51.insert(Symbol_51.getString());
  FIX::SymbolSfx SymbolSfx_51("STRING_WI");
  msg.set(SymbolSfx_51);
  Instrument_51.insert(SymbolSfx_51.getString());
  FIX::TimeUnit TimeUnit_51("STRING_H");
  msg.set(TimeUnit_51);
  Instrument_51.insert(TimeUnit_51.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_51(3);
  msg.set(UnderlyingPriceDeterminationMethod_51);
  Instrument_51.insert(UnderlyingPriceDeterminationMethod_51.getString());
  FIX::UnitOfMeasure UnitOfMeasure_51("STRING_Bcf");
  msg.set(UnitOfMeasure_51);
  Instrument_51.insert(UnitOfMeasure_51.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_51;
  UnitOfMeasureQty_51.setString("18379296");
  msg.set(UnitOfMeasureQty_51);
  Instrument_51.insert(UnitOfMeasureQty_51.getString());
  FIX::ValuationMethod ValuationMethod_51("STRING_CDS");
  msg.set(ValuationMethod_51);
  Instrument_51.insert(ValuationMethod_51.getString());
  all_values.push_back(Instrument_51);
  all_compo_names.insert("Instrument");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::NewOrderMultileg::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_103;
    FIX::ComplexEventCondition ComplexEventCondition_103(1);
    noComplexEvents_0_0.set(ComplexEventCondition_103);
    ComplexEvents_NoComplexEvents_103.insert(ComplexEventCondition_103.getString());
    FIX::ComplexEventPrice ComplexEventPrice_103;
    ComplexEventPrice_103.setString("14980637");
    noComplexEvents_0_0.set(ComplexEventPrice_103);
    ComplexEvents_NoComplexEvents_103.insert(ComplexEventPrice_103.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_103(1);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_103);
    ComplexEvents_NoComplexEvents_103.insert(ComplexEventPriceBoundaryMethod_103.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_103;
    ComplexEventPriceBoundaryPrecision_103.setString("58.350000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_103);
    ComplexEvents_NoComplexEvents_103.insert(ComplexEventPriceBoundaryPrecision_103.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_103(3);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_103);
    ComplexEvents_NoComplexEvents_103.insert(ComplexEventPriceTimeType_103.getString());
    FIX::ComplexEventType ComplexEventType_103(3);
    noComplexEvents_0_0.set(ComplexEventType_103);
    ComplexEvents_NoComplexEvents_103.insert(ComplexEventType_103.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_103;
    ComplexOptPayoutAmount_103.setString("7385811");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_103);
    ComplexEvents_NoComplexEvents_103.insert(ComplexOptPayoutAmount_103.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_103);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::NewOrderMultileg::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_210;
      FIX::ComplexEventEndDate ComplexEventEndDate_210(FIX::UTCTIMESTAMP(17, 47, 37, 13, 7, 2015));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_210);
      ComplexEventDates_NoComplexEventDates_210.insert(ComplexEventEndDate_210.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_210(FIX::UTCTIMESTAMP(5, 19, 38, 8, 5, 2005));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_210);
      ComplexEventDates_NoComplexEventDates_210.insert(ComplexEventStartDate_210.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_210);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::NewOrderMultileg::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_428;
        FIX::ComplexEventEndTime ComplexEventEndTime_428(FIX::UTCTIMEONLY(5, 39, 27));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_428);
        ComplexEventTimes_NoComplexEventTimes_428.insert(ComplexEventEndTime_428.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_428(FIX::UTCTIMEONLY(12, 27, 27));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_428);
        ComplexEventTimes_NoComplexEventTimes_428.insert(ComplexEventStartTime_428.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_428);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::NewOrderMultileg::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_429;
        FIX::ComplexEventEndTime ComplexEventEndTime_429(FIX::UTCTIMEONLY(13, 17, 53));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_429);
        ComplexEventTimes_NoComplexEventTimes_429.insert(ComplexEventEndTime_429.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_429(FIX::UTCTIMEONLY(11, 20, 30));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_429);
        ComplexEventTimes_NoComplexEventTimes_429.insert(ComplexEventStartTime_429.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_429);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::NewOrderMultileg::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_430;
        FIX::ComplexEventEndTime ComplexEventEndTime_430(FIX::UTCTIMEONLY(5, 10, 22));
        noComplexEventTimes_0_0_2_2.set(ComplexEventEndTime_430);
        ComplexEventTimes_NoComplexEventTimes_430.insert(ComplexEventEndTime_430.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_430(FIX::UTCTIMEONLY(4, 55, 6));
        noComplexEventTimes_0_0_2_2.set(ComplexEventStartTime_430);
        ComplexEventTimes_NoComplexEventTimes_430.insert(ComplexEventStartTime_430.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_430);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::NewOrderMultileg::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_104;
    FIX::ComplexEventCondition ComplexEventCondition_104(2);
    noComplexEvents_0_1.set(ComplexEventCondition_104);
    ComplexEvents_NoComplexEvents_104.insert(ComplexEventCondition_104.getString());
    FIX::ComplexEventPrice ComplexEventPrice_104;
    ComplexEventPrice_104.setString("3661016");
    noComplexEvents_0_1.set(ComplexEventPrice_104);
    ComplexEvents_NoComplexEvents_104.insert(ComplexEventPrice_104.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_104(5);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_104);
    ComplexEvents_NoComplexEvents_104.insert(ComplexEventPriceBoundaryMethod_104.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_104;
    ComplexEventPriceBoundaryPrecision_104.setString("55.060000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_104);
    ComplexEvents_NoComplexEvents_104.insert(ComplexEventPriceBoundaryPrecision_104.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_104(3);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_104);
    ComplexEvents_NoComplexEvents_104.insert(ComplexEventPriceTimeType_104.getString());
    FIX::ComplexEventType ComplexEventType_104(9);
    noComplexEvents_0_1.set(ComplexEventType_104);
    ComplexEvents_NoComplexEvents_104.insert(ComplexEventType_104.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_104;
    ComplexOptPayoutAmount_104.setString("6364189");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_104);
    ComplexEvents_NoComplexEvents_104.insert(ComplexOptPayoutAmount_104.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_104);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::NewOrderMultileg::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_211;
      FIX::ComplexEventEndDate ComplexEventEndDate_211(FIX::UTCTIMESTAMP(14, 38, 31, 18, 10, 2014));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_211);
      ComplexEventDates_NoComplexEventDates_211.insert(ComplexEventEndDate_211.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_211(FIX::UTCTIMESTAMP(10, 59, 30, 11, 4, 2002));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_211);
      ComplexEventDates_NoComplexEventDates_211.insert(ComplexEventStartDate_211.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_211);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::NewOrderMultileg::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_431;
        FIX::ComplexEventEndTime ComplexEventEndTime_431(FIX::UTCTIMEONLY(19, 4, 3));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_431);
        ComplexEventTimes_NoComplexEventTimes_431.insert(ComplexEventEndTime_431.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_431(FIX::UTCTIMEONLY(0, 50, 31));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_431);
        ComplexEventTimes_NoComplexEventTimes_431.insert(ComplexEventStartTime_431.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_431);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_212;
      FIX::ComplexEventEndDate ComplexEventEndDate_212(FIX::UTCTIMESTAMP(9, 15, 52, 0, 10, 2011));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_212);
      ComplexEventDates_NoComplexEventDates_212.insert(ComplexEventEndDate_212.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_212(FIX::UTCTIMESTAMP(15, 37, 42, 3, 8, 2015));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_212);
      ComplexEventDates_NoComplexEventDates_212.insert(ComplexEventStartDate_212.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_212);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::NewOrderMultileg::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_432;
        FIX::ComplexEventEndTime ComplexEventEndTime_432(FIX::UTCTIMEONLY(2, 37, 3));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_432);
        ComplexEventTimes_NoComplexEventTimes_432.insert(ComplexEventEndTime_432.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_432(FIX::UTCTIMEONLY(16, 45, 15));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_432);
        ComplexEventTimes_NoComplexEventTimes_432.insert(ComplexEventStartTime_432.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_432);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    {
      FIX50SP2::NewOrderMultileg::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_213;
      FIX::ComplexEventEndDate ComplexEventEndDate_213(FIX::UTCTIMESTAMP(21, 11, 15, 6, 5, 2010));
      noComplexEventDates_1_1_2.set(ComplexEventEndDate_213);
      ComplexEventDates_NoComplexEventDates_213.insert(ComplexEventEndDate_213.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_213(FIX::UTCTIMESTAMP(22, 55, 21, 10, 8, 2016));
      noComplexEventDates_1_1_2.set(ComplexEventStartDate_213);
      ComplexEventDates_NoComplexEventDates_213.insert(ComplexEventStartDate_213.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_213);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::NewOrderMultileg::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_433;
        FIX::ComplexEventEndTime ComplexEventEndTime_433(FIX::UTCTIMEONLY(2, 18, 40));
        noComplexEventTimes_1_2_2_0.set(ComplexEventEndTime_433);
        ComplexEventTimes_NoComplexEventTimes_433.insert(ComplexEventEndTime_433.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_433(FIX::UTCTIMEONLY(17, 20, 2));
        noComplexEventTimes_1_2_2_0.set(ComplexEventStartTime_433);
        ComplexEventTimes_NoComplexEventTimes_433.insert(ComplexEventStartTime_433.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_433);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_0);
      }
      {
        FIX50SP2::NewOrderMultileg::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_434;
        FIX::ComplexEventEndTime ComplexEventEndTime_434(FIX::UTCTIMEONLY(22, 31, 41));
        noComplexEventTimes_1_2_2_1.set(ComplexEventEndTime_434);
        ComplexEventTimes_NoComplexEventTimes_434.insert(ComplexEventEndTime_434.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_434(FIX::UTCTIMEONLY(11, 18, 31));
        noComplexEventTimes_1_2_2_1.set(ComplexEventStartTime_434);
        ComplexEventTimes_NoComplexEventTimes_434.insert(ComplexEventStartTime_434.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_434);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

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
    multiset<string> EvntGrp_NoEvents_95;
    FIX::EventDate EventDate_95("LOCALMKTDATE_686109267");
    noEvents_0_0.set(EventDate_95);
    EvntGrp_NoEvents_95.insert(EventDate_95.getString());
    FIX::EventPx EventPx_95;
    EventPx_95.setString("6279385");
    noEvents_0_0.set(EventPx_95);
    EvntGrp_NoEvents_95.insert(EventPx_95.getString());
    FIX::EventText EventText_95("STRING_113656583");
    noEvents_0_0.set(EventText_95);
    EvntGrp_NoEvents_95.insert(EventText_95.getString());
    FIX::EventTime EventTime_95(FIX::UTCTIMESTAMP(14, 21, 8, 0, 5, 2005));
    noEvents_0_0.set(EventTime_95);
    EvntGrp_NoEvents_95.insert(EventTime_95.getString());
    FIX::EventType EventType_95(7);
    noEvents_0_0.set(EventType_95);
    EvntGrp_NoEvents_95.insert(EventType_95.getString());
    all_values.push_back(EvntGrp_NoEvents_95);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::NewOrderMultileg::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_96;
    FIX::EventDate EventDate_96("LOCALMKTDATE_1019707323");
    noEvents_0_1.set(EventDate_96);
    EvntGrp_NoEvents_96.insert(EventDate_96.getString());
    FIX::EventPx EventPx_96;
    EventPx_96.setString("1637903");
    noEvents_0_1.set(EventPx_96);
    EvntGrp_NoEvents_96.insert(EventPx_96.getString());
    FIX::EventText EventText_96("STRING_2099844715");
    noEvents_0_1.set(EventText_96);
    EvntGrp_NoEvents_96.insert(EventText_96.getString());
    FIX::EventTime EventTime_96(FIX::UTCTIMESTAMP(10, 5, 42, 23, 12, 2002));
    noEvents_0_1.set(EventTime_96);
    EvntGrp_NoEvents_96.insert(EventTime_96.getString());
    FIX::EventType EventType_96(14);
    noEvents_0_1.set(EventType_96);
    EvntGrp_NoEvents_96.insert(EventType_96.getString());
    all_values.push_back(EvntGrp_NoEvents_96);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::NewOrderMultileg::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_102;
    FIX::InstrumentPartyID InstrumentPartyID_102("STRING_1466954764");
    noInstrumentParties_0_0.set(InstrumentPartyID_102);
    InstrumentParties_NoInstrumentParties_102.insert(InstrumentPartyID_102.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_102('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_102);
    InstrumentParties_NoInstrumentParties_102.insert(InstrumentPartyIDSource_102.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_102(17058914);
    noInstrumentParties_0_0.set(InstrumentPartyRole_102);
    InstrumentParties_NoInstrumentParties_102.insert(InstrumentPartyRole_102.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_102);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::NewOrderMultileg::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_196;
      FIX::InstrumentPartySubID InstrumentPartySubID_196("STRING_1056238008");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_196);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_196.insert(InstrumentPartySubID_196.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_196(581542592);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_196);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_196.insert(InstrumentPartySubIDType_196.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_196);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_197;
      FIX::InstrumentPartySubID InstrumentPartySubID_197("STRING_1707689331");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_197);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_197.insert(InstrumentPartySubID_197.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_197(1398888064);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_197);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_197.insert(InstrumentPartySubIDType_197.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_197);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::NewOrderMultileg::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_198;
      FIX::InstrumentPartySubID InstrumentPartySubID_198("STRING_1267651860");
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubID_198);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_198.insert(InstrumentPartySubID_198.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_198(188144237);
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubIDType_198);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_198.insert(InstrumentPartySubIDType_198.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_198);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::NewOrderMultileg::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_103;
    FIX::InstrumentPartyID InstrumentPartyID_103("STRING_1512544648");
    noInstrumentParties_0_1.set(InstrumentPartyID_103);
    InstrumentParties_NoInstrumentParties_103.insert(InstrumentPartyID_103.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_103('1');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_103);
    InstrumentParties_NoInstrumentParties_103.insert(InstrumentPartyIDSource_103.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_103(1677346364);
    noInstrumentParties_0_1.set(InstrumentPartyRole_103);
    InstrumentParties_NoInstrumentParties_103.insert(InstrumentPartyRole_103.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_103);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::NewOrderMultileg::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_199;
      FIX::InstrumentPartySubID InstrumentPartySubID_199("STRING_2018892550");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_199);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_199.insert(InstrumentPartySubID_199.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_199(1147046760);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_199);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_199.insert(InstrumentPartySubIDType_199.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_199);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_200;
      FIX::InstrumentPartySubID InstrumentPartySubID_200("STRING_1623089998");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_200);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_200.insert(InstrumentPartySubID_200.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_200(1282486651);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_200);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_200.insert(InstrumentPartySubIDType_200.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_200);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::NewOrderMultileg::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_104;
    FIX::InstrumentPartyID InstrumentPartyID_104("STRING_1323982927");
    noInstrumentParties_0_2.set(InstrumentPartyID_104);
    InstrumentParties_NoInstrumentParties_104.insert(InstrumentPartyID_104.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_104('4');
    noInstrumentParties_0_2.set(InstrumentPartyIDSource_104);
    InstrumentParties_NoInstrumentParties_104.insert(InstrumentPartyIDSource_104.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_104(1446276987);
    noInstrumentParties_0_2.set(InstrumentPartyRole_104);
    InstrumentParties_NoInstrumentParties_104.insert(InstrumentPartyRole_104.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_104);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::NewOrderMultileg::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_201;
      FIX::InstrumentPartySubID InstrumentPartySubID_201("STRING_1506910375");
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubID_201);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_201.insert(InstrumentPartySubID_201.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_201(820276829);
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubIDType_201);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_201.insert(InstrumentPartySubIDType_201.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_201);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::NewOrderMultileg::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_92;
    FIX::SecurityAltID SecurityAltID_92("STRING_617365170");
    noSecurityAltID_0_0.set(SecurityAltID_92);
    SecAltIDGrp_NoSecurityAltID_92.insert(SecurityAltID_92.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_92("STRING_1998411348");
    noSecurityAltID_0_0.set(SecurityAltIDSource_92);
    SecAltIDGrp_NoSecurityAltID_92.insert(SecurityAltIDSource_92.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_92);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::NewOrderMultileg::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_93;
    FIX::SecurityAltID SecurityAltID_93("STRING_1627743183");
    noSecurityAltID_0_1.set(SecurityAltID_93);
    SecAltIDGrp_NoSecurityAltID_93.insert(SecurityAltID_93.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_93("STRING_477950544");
    noSecurityAltID_0_1.set(SecurityAltIDSource_93);
    SecAltIDGrp_NoSecurityAltID_93.insert(SecurityAltIDSource_93.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_93);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_102;
  FIX::SecurityXML SecurityXML_103("XMLDATA_964125774");
  msg.set(SecurityXML_103);
  FIX::SecurityXMLLen SecurityXMLLen_51(1711999364);
  msg.set(SecurityXMLLen_51);
  FIX::SecurityXMLSchema SecurityXMLSchema_51("STRING_1944905309");
  msg.set(SecurityXMLSchema_51);
  SecurityXML_102.insert(SecurityXMLSchema_51.getString());
  all_values.push_back(SecurityXML_102);
  all_compo_names.insert("SecurityXML");

  // LegOrdGrp
  // Group LegOrdGrp.NoLegs
  {
    FIX50SP2::NewOrderMultileg::NoLegs noLegs_0_0;
    // LegOrdGrp.NoLegs
    multiset<string> LegOrdGrp_NoLegs_2;
    FIX::LegAllocID LegAllocID_3("STRING_1729058278");
    noLegs_0_0.set(LegAllocID_3);
    LegOrdGrp_NoLegs_2.insert(LegAllocID_3.getString());
    FIX::LegCoveredOrUncovered LegCoveredOrUncovered_3(347872001);
    noLegs_0_0.set(LegCoveredOrUncovered_3);
    LegOrdGrp_NoLegs_2.insert(LegCoveredOrUncovered_3.getString());
    FIX::LegCurrencyRatio LegCurrencyRatio_3;
    LegCurrencyRatio_3.setString("10272253");
    noLegs_0_0.set(LegCurrencyRatio_3);
    LegOrdGrp_NoLegs_2.insert(LegCurrencyRatio_3.getString());
    FIX::LegDividendYield LegDividendYield_3;
    LegDividendYield_3.setString("72.220000");
    noLegs_0_0.set(LegDividendYield_3);
    LegOrdGrp_NoLegs_2.insert(LegDividendYield_3.getString());
    FIX::LegExecInst LegExecInst_3("MULTIPLECHARVALUE_2055561332");
    noLegs_0_0.set(LegExecInst_3);
    LegOrdGrp_NoLegs_2.insert(LegExecInst_3.getString());
    FIX::LegOrderQty LegOrderQty_3;
    LegOrderQty_3.setString("2786297");
    noLegs_0_0.set(LegOrderQty_3);
    LegOrdGrp_NoLegs_2.insert(LegOrderQty_3.getString());
    FIX::LegPositionEffect LegPositionEffect_3('1');
    noLegs_0_0.set(LegPositionEffect_3);
    LegOrdGrp_NoLegs_2.insert(LegPositionEffect_3.getString());
    FIX::LegQty LegQty_3;
    LegQty_3.setString("962219");
    noLegs_0_0.set(LegQty_3);
    LegOrdGrp_NoLegs_2.insert(LegQty_3.getString());
    FIX::LegRefID LegRefID_3("STRING_1791174404");
    noLegs_0_0.set(LegRefID_3);
    LegOrdGrp_NoLegs_2.insert(LegRefID_3.getString());
    FIX::LegSettlCurrency LegSettlCurrency_3("EUR");
    noLegs_0_0.set(LegSettlCurrency_3);
    LegOrdGrp_NoLegs_2.insert(LegSettlCurrency_3.getString());
    FIX::LegSettlDate LegSettlDate_3("LOCALMKTDATE_1628797165");
    noLegs_0_0.set(LegSettlDate_3);
    LegOrdGrp_NoLegs_2.insert(LegSettlDate_3.getString());
    FIX::LegSettlType LegSettlType_3('8');
    noLegs_0_0.set(LegSettlType_3);
    LegOrdGrp_NoLegs_2.insert(LegSettlType_3.getString());
    FIX::LegSwapType LegSwapType_3(4);
    noLegs_0_0.set(LegSwapType_3);
    LegOrdGrp_NoLegs_2.insert(LegSwapType_3.getString());
    FIX::LegVolatility LegVolatility_3;
    LegVolatility_3.setString("11044035");
    noLegs_0_0.set(LegVolatility_3);
    LegOrdGrp_NoLegs_2.insert(LegVolatility_3.getString());
    all_values.push_back(LegOrdGrp_NoLegs_2);
    all_compo_names.insert("LegOrdGrp.NoLegs");

    // InstrumentLeg
    multiset<string> InstrumentLeg_91;
    FIX::EncodedLegIssuer EncodedLegIssuer_91("DATA_2121112490");
    noLegs_0_0.set(EncodedLegIssuer_91);
    InstrumentLeg_91.insert(EncodedLegIssuer_91.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_91(2097114325);
    noLegs_0_0.set(EncodedLegIssuerLen_91);
    InstrumentLeg_91.insert(EncodedLegIssuerLen_91.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_91("DATA_1599717189");
    noLegs_0_0.set(EncodedLegSecurityDesc_91);
    InstrumentLeg_91.insert(EncodedLegSecurityDesc_91.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_91(1419905829);
    noLegs_0_0.set(EncodedLegSecurityDescLen_91);
    InstrumentLeg_91.insert(EncodedLegSecurityDescLen_91.getString());
    FIX::LegCFICode LegCFICode_91("STRING_1225974671");
    noLegs_0_0.set(LegCFICode_91);
    InstrumentLeg_91.insert(LegCFICode_91.getString());
    FIX::LegContractMultiplier LegContractMultiplier_91;
    LegContractMultiplier_91.setString("9591439");
    noLegs_0_0.set(LegContractMultiplier_91);
    InstrumentLeg_91.insert(LegContractMultiplier_91.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_91(92699011);
    noLegs_0_0.set(LegContractMultiplierUnit_91);
    InstrumentLeg_91.insert(LegContractMultiplierUnit_91.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_91("MONTHYEAR_1548069003");
    noLegs_0_0.set(LegContractSettlMonth_91);
    InstrumentLeg_91.insert(LegContractSettlMonth_91.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_91("COUNTRY_1576509086");
    noLegs_0_0.set(LegCountryOfIssue_91);
    InstrumentLeg_91.insert(LegCountryOfIssue_91.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_91("LOCALMKTDATE_2091110359");
    noLegs_0_0.set(LegCouponPaymentDate_91);
    InstrumentLeg_91.insert(LegCouponPaymentDate_91.getString());
    FIX::LegCouponRate LegCouponRate_91;
    LegCouponRate_91.setString("85.380000");
    noLegs_0_0.set(LegCouponRate_91);
    InstrumentLeg_91.insert(LegCouponRate_91.getString());
    FIX::LegCreditRating LegCreditRating_91("STRING_2054459631");
    noLegs_0_0.set(LegCreditRating_91);
    InstrumentLeg_91.insert(LegCreditRating_91.getString());
    FIX::LegCurrency LegCurrency_91("JPY");
    noLegs_0_0.set(LegCurrency_91);
    InstrumentLeg_91.insert(LegCurrency_91.getString());
    FIX::LegDatedDate LegDatedDate_91("LOCALMKTDATE_1851881292");
    noLegs_0_0.set(LegDatedDate_91);
    InstrumentLeg_91.insert(LegDatedDate_91.getString());
    FIX::LegExerciseStyle LegExerciseStyle_91(878739816);
    noLegs_0_0.set(LegExerciseStyle_91);
    InstrumentLeg_91.insert(LegExerciseStyle_91.getString());
    FIX::LegFactor LegFactor_91;
    LegFactor_91.setString("1744188");
    noLegs_0_0.set(LegFactor_91);
    InstrumentLeg_91.insert(LegFactor_91.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_91(52269645);
    noLegs_0_0.set(LegFlowScheduleType_91);
    InstrumentLeg_91.insert(LegFlowScheduleType_91.getString());
    FIX::LegInstrRegistry LegInstrRegistry_91("STRING_1905965156");
    noLegs_0_0.set(LegInstrRegistry_91);
    InstrumentLeg_91.insert(LegInstrRegistry_91.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_91("LOCALMKTDATE_337536107");
    noLegs_0_0.set(LegInterestAccrualDate_91);
    InstrumentLeg_91.insert(LegInterestAccrualDate_91.getString());
    FIX::LegIssueDate LegIssueDate_91("LOCALMKTDATE_2107830977");
    noLegs_0_0.set(LegIssueDate_91);
    InstrumentLeg_91.insert(LegIssueDate_91.getString());
    FIX::LegIssuer LegIssuer_91("STRING_37111264");
    noLegs_0_0.set(LegIssuer_91);
    InstrumentLeg_91.insert(LegIssuer_91.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_91("STRING_1768305189");
    noLegs_0_0.set(LegLocaleOfIssue_91);
    InstrumentLeg_91.insert(LegLocaleOfIssue_91.getString());
    FIX::LegMaturityDate LegMaturityDate_91("LOCALMKTDATE_56569250");
    noLegs_0_0.set(LegMaturityDate_91);
    InstrumentLeg_91.insert(LegMaturityDate_91.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_91("MONTHYEAR_1828285668");
    noLegs_0_0.set(LegMaturityMonthYear_91);
    InstrumentLeg_91.insert(LegMaturityMonthYear_91.getString());
    FIX::LegMaturityTime LegMaturityTime_91("TZTIMEONLY_588038478");
    noLegs_0_0.set(LegMaturityTime_91);
    InstrumentLeg_91.insert(LegMaturityTime_91.getString());
    FIX::LegOptAttribute LegOptAttribute_91('1');
    noLegs_0_0.set(LegOptAttribute_91);
    InstrumentLeg_91.insert(LegOptAttribute_91.getString());
    FIX::LegOptionRatio LegOptionRatio_91;
    LegOptionRatio_91.setString("13095991");
    noLegs_0_0.set(LegOptionRatio_91);
    InstrumentLeg_91.insert(LegOptionRatio_91.getString());
    FIX::LegPool LegPool_91("STRING_1426664316");
    noLegs_0_0.set(LegPool_91);
    InstrumentLeg_91.insert(LegPool_91.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_91("STRING_455785286");
    noLegs_0_0.set(LegPriceUnitOfMeasure_91);
    InstrumentLeg_91.insert(LegPriceUnitOfMeasure_91.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_91;
    LegPriceUnitOfMeasureQty_91.setString("2665190");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_91);
    InstrumentLeg_91.insert(LegPriceUnitOfMeasureQty_91.getString());
    FIX::LegProduct LegProduct_91(1400293158);
    noLegs_0_0.set(LegProduct_91);
    InstrumentLeg_91.insert(LegProduct_91.getString());
    FIX::LegPutOrCall LegPutOrCall_91(405415963);
    noLegs_0_0.set(LegPutOrCall_91);
    InstrumentLeg_91.insert(LegPutOrCall_91.getString());
    FIX::LegRatioQty LegRatioQty_91;
    LegRatioQty_91.setString("18662362");
    noLegs_0_0.set(LegRatioQty_91);
    InstrumentLeg_91.insert(LegRatioQty_91.getString());
    FIX::LegRedemptionDate LegRedemptionDate_91("LOCALMKTDATE_672715340");
    noLegs_0_0.set(LegRedemptionDate_91);
    InstrumentLeg_91.insert(LegRedemptionDate_91.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_91("STRING_1631390634");
    noLegs_0_0.set(LegRepoCollateralSecurityType_91);
    InstrumentLeg_91.insert(LegRepoCollateralSecurityType_91.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_91;
    LegRepurchaseRate_91.setString("65.100000");
    noLegs_0_0.set(LegRepurchaseRate_91);
    InstrumentLeg_91.insert(LegRepurchaseRate_91.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_91(765414351);
    noLegs_0_0.set(LegRepurchaseTerm_91);
    InstrumentLeg_91.insert(LegRepurchaseTerm_91.getString());
    FIX::LegSecurityDesc LegSecurityDesc_91("STRING_1031975990");
    noLegs_0_0.set(LegSecurityDesc_91);
    InstrumentLeg_91.insert(LegSecurityDesc_91.getString());
    FIX::LegSecurityExchange LegSecurityExchange_91("EXCHANGE_106921949");
    noLegs_0_0.set(LegSecurityExchange_91);
    InstrumentLeg_91.insert(LegSecurityExchange_91.getString());
    FIX::LegSecurityID LegSecurityID_91("STRING_709041062");
    noLegs_0_0.set(LegSecurityID_91);
    InstrumentLeg_91.insert(LegSecurityID_91.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_91("STRING_2060304528");
    noLegs_0_0.set(LegSecurityIDSource_91);
    InstrumentLeg_91.insert(LegSecurityIDSource_91.getString());
    FIX::LegSecuritySubType LegSecuritySubType_91("STRING_13897932");
    noLegs_0_0.set(LegSecuritySubType_91);
    InstrumentLeg_91.insert(LegSecuritySubType_91.getString());
    FIX::LegSecurityType LegSecurityType_91("STRING_1616793548");
    noLegs_0_0.set(LegSecurityType_91);
    InstrumentLeg_91.insert(LegSecurityType_91.getString());
    FIX::LegSide LegSide_91('5');
    noLegs_0_0.set(LegSide_91);
    InstrumentLeg_91.insert(LegSide_91.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_91("STRING_1865779224");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_91);
    InstrumentLeg_91.insert(LegStateOrProvinceOfIssue_91.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_91("CHF");
    noLegs_0_0.set(LegStrikeCurrency_91);
    InstrumentLeg_91.insert(LegStrikeCurrency_91.getString());
    FIX::LegStrikePrice LegStrikePrice_91;
    LegStrikePrice_91.setString("19180488");
    noLegs_0_0.set(LegStrikePrice_91);
    InstrumentLeg_91.insert(LegStrikePrice_91.getString());
    FIX::LegSymbol LegSymbol_91("STRING_106531224");
    noLegs_0_0.set(LegSymbol_91);
    InstrumentLeg_91.insert(LegSymbol_91.getString());
    FIX::LegSymbolSfx LegSymbolSfx_91("STRING_1017620126");
    noLegs_0_0.set(LegSymbolSfx_91);
    InstrumentLeg_91.insert(LegSymbolSfx_91.getString());
    FIX::LegTimeUnit LegTimeUnit_91("STRING_1878396198");
    noLegs_0_0.set(LegTimeUnit_91);
    InstrumentLeg_91.insert(LegTimeUnit_91.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_91("STRING_143642488");
    noLegs_0_0.set(LegUnitOfMeasure_91);
    InstrumentLeg_91.insert(LegUnitOfMeasure_91.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_91;
    LegUnitOfMeasureQty_91.setString("6384416");
    noLegs_0_0.set(LegUnitOfMeasureQty_91);
    InstrumentLeg_91.insert(LegUnitOfMeasureQty_91.getString());
    all_values.push_back(InstrumentLeg_91);
    all_compo_names.insert("InstrumentLeg");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_184;
      FIX::LegSecurityAltID LegSecurityAltID_184("STRING_1971928156");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_184);
      LegSecAltIDGrp_NoLegSecurityAltID_184.insert(LegSecurityAltID_184.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_184("STRING_1226480146");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_184);
      LegSecAltIDGrp_NoLegSecurityAltID_184.insert(LegSecurityAltIDSource_184.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_184);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_185;
      FIX::LegSecurityAltID LegSecurityAltID_185("STRING_1617619336");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_185);
      LegSecAltIDGrp_NoLegSecurityAltID_185.insert(LegSecurityAltID_185.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_185("STRING_1134043694");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_185);
      LegSecAltIDGrp_NoLegSecurityAltID_185.insert(LegSecurityAltIDSource_185.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_185);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_186;
      FIX::LegSecurityAltID LegSecurityAltID_186("STRING_505660814");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltID_186);
      LegSecAltIDGrp_NoLegSecurityAltID_186.insert(LegSecurityAltID_186.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_186("STRING_2073404622");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltIDSource_186);
      LegSecAltIDGrp_NoLegSecurityAltID_186.insert(LegSecurityAltIDSource_186.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_186);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_2);
    }
    // LegPreAllocGrp
    // Group LegPreAllocGrp.NoLegAllocs
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs noLegAllocs_0_1_0;
      // LegPreAllocGrp.NoLegAllocs
      multiset<string> LegPreAllocGrp_NoLegAllocs_5;
      FIX::LegAllocAccount LegAllocAccount_5("STRING_1905953973");
      noLegAllocs_0_1_0.set(LegAllocAccount_5);
      LegPreAllocGrp_NoLegAllocs_5.insert(LegAllocAccount_5.getString());
      FIX::LegAllocAcctIDSource LegAllocAcctIDSource_5("STRING_331336937");
      noLegAllocs_0_1_0.set(LegAllocAcctIDSource_5);
      LegPreAllocGrp_NoLegAllocs_5.insert(LegAllocAcctIDSource_5.getString());
      FIX::LegAllocQty LegAllocQty_5;
      LegAllocQty_5.setString("11193153");
      noLegAllocs_0_1_0.set(LegAllocQty_5);
      LegPreAllocGrp_NoLegAllocs_5.insert(LegAllocQty_5.getString());
      FIX::LegAllocSettlCurrency LegAllocSettlCurrency_5("USD");
      noLegAllocs_0_1_0.set(LegAllocSettlCurrency_5);
      LegPreAllocGrp_NoLegAllocs_5.insert(LegAllocSettlCurrency_5.getString());
      FIX::LegIndividualAllocID LegIndividualAllocID_5("STRING_1797211851");
      noLegAllocs_0_1_0.set(LegIndividualAllocID_5);
      LegPreAllocGrp_NoLegAllocs_5.insert(LegIndividualAllocID_5.getString());
      all_values.push_back(LegPreAllocGrp_NoLegAllocs_5);
      all_compo_names.insert("LegPreAllocGrp.NoLegAllocs");

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_0_0_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_33;
        FIX::Nested2PartyID Nested2PartyID_33("STRING_847219914");
        noNested2PartyIDs_0_0_2_0.set(Nested2PartyID_33);
        NestedParties2_NoNested2PartyIDs_33.insert(Nested2PartyID_33.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_33('1');
        noNested2PartyIDs_0_0_2_0.set(Nested2PartyIDSource_33);
        NestedParties2_NoNested2PartyIDs_33.insert(Nested2PartyIDSource_33.getString());
        FIX::Nested2PartyRole Nested2PartyRole_33(1905641078);
        noNested2PartyIDs_0_0_2_0.set(Nested2PartyRole_33);
        NestedParties2_NoNested2PartyIDs_33.insert(Nested2PartyRole_33.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_33);
        all_compo_names.insert("NestedParties2.NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_70;
          FIX::Nested2PartySubID Nested2PartySubID_70("STRING_1918031732");
          noNested2PartySubIDs_0_0_0_3_0.set(Nested2PartySubID_70);
          NstdPtys2SubGrp_NoNested2PartySubIDs_70.insert(Nested2PartySubID_70.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_70(1374950978);
          noNested2PartySubIDs_0_0_0_3_0.set(Nested2PartySubIDType_70);
          NstdPtys2SubGrp_NoNested2PartySubIDs_70.insert(Nested2PartySubIDType_70.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_70);
          all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

          noNested2PartyIDs_0_0_2_0.addGroup(noNested2PartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_0_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_71;
          FIX::Nested2PartySubID Nested2PartySubID_71("STRING_1265705929");
          noNested2PartySubIDs_0_0_0_3_1.set(Nested2PartySubID_71);
          NstdPtys2SubGrp_NoNested2PartySubIDs_71.insert(Nested2PartySubID_71.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_71(1636327308);
          noNested2PartySubIDs_0_0_0_3_1.set(Nested2PartySubIDType_71);
          NstdPtys2SubGrp_NoNested2PartySubIDs_71.insert(Nested2PartySubIDType_71.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_71);
          all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

          noNested2PartyIDs_0_0_2_0.addGroup(noNested2PartySubIDs_0_0_0_3_1);
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
      multiset<string> LegStipulations_NoLegStipulations_9;
      FIX::LegStipulationType LegStipulationType_9("STRING_1945789949");
      noLegStipulations_0_1_0.set(LegStipulationType_9);
      LegStipulations_NoLegStipulations_9.insert(LegStipulationType_9.getString());
      FIX::LegStipulationValue LegStipulationValue_9("STRING_1406892529");
      noLegStipulations_0_1_0.set(LegStipulationValue_9);
      LegStipulations_NoLegStipulations_9.insert(LegStipulationValue_9.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_9);
      all_compo_names.insert("LegStipulations.NoLegStipulations");

      noLegs_0_0.addGroup(noLegStipulations_0_1_0);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_67;
      FIX::NestedPartyID NestedPartyID_67("STRING_815926427");
      noNestedPartyIDs_0_1_0.set(NestedPartyID_67);
      NestedParties_NoNestedPartyIDs_67.insert(NestedPartyID_67.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_67('1');
      noNestedPartyIDs_0_1_0.set(NestedPartyIDSource_67);
      NestedParties_NoNestedPartyIDs_67.insert(NestedPartyIDSource_67.getString());
      FIX::NestedPartyRole NestedPartyRole_67(1973174408);
      noNestedPartyIDs_0_1_0.set(NestedPartyRole_67);
      NestedParties_NoNestedPartyIDs_67.insert(NestedPartyRole_67.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_67);
      all_compo_names.insert("NestedParties.NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_146;
        FIX::NestedPartySubID NestedPartySubID_146("STRING_925286880");
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubID_146);
        NstdPtysSubGrp_NoNestedPartySubIDs_146.insert(NestedPartySubID_146.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_146(1797618916);
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubIDType_146);
        NstdPtysSubGrp_NoNestedPartySubIDs_146.insert(NestedPartySubIDType_146.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_146);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      noLegs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  // OrderQtyData
  multiset<string> OrderQtyData_15;
  FIX::CashOrderQty CashOrderQty_15;
  CashOrderQty_15.setString("5333645");
  msg.set(CashOrderQty_15);
  OrderQtyData_15.insert(CashOrderQty_15.getString());
  FIX::OrderPercent OrderPercent_15;
  OrderPercent_15.setString("25.680000");
  msg.set(OrderPercent_15);
  OrderQtyData_15.insert(OrderPercent_15.getString());
  FIX::OrderQty OrderQty_25;
  OrderQty_25.setString("7841789");
  msg.set(OrderQty_25);
  OrderQtyData_15.insert(OrderQty_25.getString());
  FIX::RoundingDirection RoundingDirection_15('2');
  msg.set(RoundingDirection_15);
  OrderQtyData_15.insert(RoundingDirection_15.getString());
  FIX::RoundingModulus RoundingModulus_15;
  RoundingModulus_15.setString("3213435");
  msg.set(RoundingModulus_15);
  OrderQtyData_15.insert(RoundingModulus_15.getString());
  all_values.push_back(OrderQtyData_15);
  all_compo_names.insert("OrderQtyData");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::NewOrderMultileg::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_72;
    FIX::PartyID PartyID_72("STRING_797495733");
    noPartyIDs_0_0.set(PartyID_72);
    Parties_NoPartyIDs_72.insert(PartyID_72.getString());
    FIX::PartyIDSource PartyIDSource_72('C');
    noPartyIDs_0_0.set(PartyIDSource_72);
    Parties_NoPartyIDs_72.insert(PartyIDSource_72.getString());
    FIX::PartyRole PartyRole_72(84);
    noPartyIDs_0_0.set(PartyRole_72);
    Parties_NoPartyIDs_72.insert(PartyRole_72.getString());
    all_values.push_back(Parties_NoPartyIDs_72);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::NewOrderMultileg::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_161;
      FIX::PartySubID PartySubID_161("STRING_467924404");
      noPartySubIDs_0_1_0.set(PartySubID_161);
      PtysSubGrp_NoPartySubIDs_161.insert(PartySubID_161.getString());
      FIX::PartySubIDType PartySubIDType_161(1);
      noPartySubIDs_0_1_0.set(PartySubIDType_161);
      PtysSubGrp_NoPartySubIDs_161.insert(PartySubIDType_161.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_161);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::NewOrderMultileg::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_73;
    FIX::PartyID PartyID_73("STRING_277797766");
    noPartyIDs_0_1.set(PartyID_73);
    Parties_NoPartyIDs_73.insert(PartyID_73.getString());
    FIX::PartyIDSource PartyIDSource_73('A');
    noPartyIDs_0_1.set(PartyIDSource_73);
    Parties_NoPartyIDs_73.insert(PartyIDSource_73.getString());
    FIX::PartyRole PartyRole_73(56);
    noPartyIDs_0_1.set(PartyRole_73);
    Parties_NoPartyIDs_73.insert(PartyRole_73.getString());
    all_values.push_back(Parties_NoPartyIDs_73);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::NewOrderMultileg::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_162;
      FIX::PartySubID PartySubID_162("STRING_2075185113");
      noPartySubIDs_1_1_0.set(PartySubID_162);
      PtysSubGrp_NoPartySubIDs_162.insert(PartySubID_162.getString());
      FIX::PartySubIDType PartySubIDType_162(29);
      noPartySubIDs_1_1_0.set(PartySubIDType_162);
      PtysSubGrp_NoPartySubIDs_162.insert(PartySubIDType_162.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_162);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_163;
      FIX::PartySubID PartySubID_163("STRING_1410906175");
      noPartySubIDs_1_1_1.set(PartySubID_163);
      PtysSubGrp_NoPartySubIDs_163.insert(PartySubID_163.getString());
      FIX::PartySubIDType PartySubIDType_163(15);
      noPartySubIDs_1_1_1.set(PartySubIDType_163);
      PtysSubGrp_NoPartySubIDs_163.insert(PartySubIDType_163.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_163);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::NewOrderMultileg::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_74;
    FIX::PartyID PartyID_74("STRING_1969827151");
    noPartyIDs_0_2.set(PartyID_74);
    Parties_NoPartyIDs_74.insert(PartyID_74.getString());
    FIX::PartyIDSource PartyIDSource_74('8');
    noPartyIDs_0_2.set(PartyIDSource_74);
    Parties_NoPartyIDs_74.insert(PartyIDSource_74.getString());
    FIX::PartyRole PartyRole_74(37);
    noPartyIDs_0_2.set(PartyRole_74);
    Parties_NoPartyIDs_74.insert(PartyRole_74.getString());
    all_values.push_back(Parties_NoPartyIDs_74);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::NewOrderMultileg::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_164;
      FIX::PartySubID PartySubID_164("STRING_668471493");
      noPartySubIDs_2_1_0.set(PartySubID_164);
      PtysSubGrp_NoPartySubIDs_164.insert(PartySubID_164.getString());
      FIX::PartySubIDType PartySubIDType_164(15);
      noPartySubIDs_2_1_0.set(PartySubIDType_164);
      PtysSubGrp_NoPartySubIDs_164.insert(PartySubIDType_164.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_164);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_165;
      FIX::PartySubID PartySubID_165("STRING_219557464");
      noPartySubIDs_2_1_1.set(PartySubID_165);
      PtysSubGrp_NoPartySubIDs_165.insert(PartySubID_165.getString());
      FIX::PartySubIDType PartySubIDType_165(25);
      noPartySubIDs_2_1_1.set(PartySubIDType_165);
      PtysSubGrp_NoPartySubIDs_165.insert(PartySubIDType_165.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_165);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_1);
    }
    msg.addGroup(noPartyIDs_0_2);
  }
  // PegInstructions
  multiset<string> PegInstructions_7;
  FIX::PegLimitType PegLimitType_7(0);
  msg.set(PegLimitType_7);
  PegInstructions_7.insert(PegLimitType_7.getString());
  FIX::PegMoveType PegMoveType_7(0);
  msg.set(PegMoveType_7);
  PegInstructions_7.insert(PegMoveType_7.getString());
  FIX::PegOffsetType PegOffsetType_7(2);
  msg.set(PegOffsetType_7);
  PegInstructions_7.insert(PegOffsetType_7.getString());
  FIX::PegOffsetValue PegOffsetValue_7;
  PegOffsetValue_7.setString("16478891");
  msg.set(PegOffsetValue_7);
  PegInstructions_7.insert(PegOffsetValue_7.getString());
  FIX::PegPriceType PegPriceType_7(2);
  msg.set(PegPriceType_7);
  PegInstructions_7.insert(PegPriceType_7.getString());
  FIX::PegRoundDirection PegRoundDirection_7(1);
  msg.set(PegRoundDirection_7);
  PegInstructions_7.insert(PegRoundDirection_7.getString());
  FIX::PegScope PegScope_7(1);
  msg.set(PegScope_7);
  PegInstructions_7.insert(PegScope_7.getString());
  FIX::PegSecurityDesc PegSecurityDesc_7("STRING_1861610456");
  msg.set(PegSecurityDesc_7);
  PegInstructions_7.insert(PegSecurityDesc_7.getString());
  FIX::PegSecurityID PegSecurityID_7("STRING_965734546");
  msg.set(PegSecurityID_7);
  PegInstructions_7.insert(PegSecurityID_7.getString());
  FIX::PegSecurityIDSource PegSecurityIDSource_7("STRING_1336926657");
  msg.set(PegSecurityIDSource_7);
  PegInstructions_7.insert(PegSecurityIDSource_7.getString());
  FIX::PegSymbol PegSymbol_7("STRING_366807288");
  msg.set(PegSymbol_7);
  PegInstructions_7.insert(PegSymbol_7.getString());
  all_values.push_back(PegInstructions_7);
  all_compo_names.insert("PegInstructions");

  // PreAllocMlegGrp
  // Group PreAllocMlegGrp.NoAllocs
  {
    FIX50SP2::NewOrderMultileg::NoAllocs noAllocs_0_0;
    // PreAllocMlegGrp.NoAllocs
    multiset<string> PreAllocMlegGrp_NoAllocs_1;
    FIX::AllocAccount AllocAccount_30("STRING_418124407");
    noAllocs_0_0.set(AllocAccount_30);
    PreAllocMlegGrp_NoAllocs_1.insert(AllocAccount_30.getString());
    FIX::AllocAcctIDSource AllocAcctIDSource_30(834731693);
    noAllocs_0_0.set(AllocAcctIDSource_30);
    PreAllocMlegGrp_NoAllocs_1.insert(AllocAcctIDSource_30.getString());
    FIX::AllocQty AllocQty_29;
    AllocQty_29.setString("7811259");
    noAllocs_0_0.set(AllocQty_29);
    PreAllocMlegGrp_NoAllocs_1.insert(AllocQty_29.getString());
    FIX::AllocSettlCurrency AllocSettlCurrency_25("EUR");
    noAllocs_0_0.set(AllocSettlCurrency_25);
    PreAllocMlegGrp_NoAllocs_1.insert(AllocSettlCurrency_25.getString());
    FIX::IndividualAllocID IndividualAllocID_30("STRING_1344077665");
    noAllocs_0_0.set(IndividualAllocID_30);
    PreAllocMlegGrp_NoAllocs_1.insert(IndividualAllocID_30.getString());
    all_values.push_back(PreAllocMlegGrp_NoAllocs_1);
    all_compo_names.insert("PreAllocMlegGrp.NoAllocs");

    // NestedParties3
    // Group NestedParties3.NoNested3PartyIDs
    {
      FIX50SP2::NewOrderMultileg::NoAllocs::NoNested3PartyIDs noNested3PartyIDs_0_1_0;
      // NestedParties3.NoNested3PartyIDs
      multiset<string> NestedParties3_NoNested3PartyIDs_6;
      FIX::Nested3PartyID Nested3PartyID_6("STRING_2077577476");
      noNested3PartyIDs_0_1_0.set(Nested3PartyID_6);
      NestedParties3_NoNested3PartyIDs_6.insert(Nested3PartyID_6.getString());
      FIX::Nested3PartyIDSource Nested3PartyIDSource_6('1');
      noNested3PartyIDs_0_1_0.set(Nested3PartyIDSource_6);
      NestedParties3_NoNested3PartyIDs_6.insert(Nested3PartyIDSource_6.getString());
      FIX::Nested3PartyRole Nested3PartyRole_6(2142783544);
      noNested3PartyIDs_0_1_0.set(Nested3PartyRole_6);
      NestedParties3_NoNested3PartyIDs_6.insert(Nested3PartyRole_6.getString());
      all_values.push_back(NestedParties3_NoNested3PartyIDs_6);
      all_compo_names.insert("NestedParties3.NoNested3PartyIDs");

      // NstdPtys3SubGrp
      // Group NstdPtys3SubGrp.NoNested3PartySubIDs
      {
        FIX50SP2::NewOrderMultileg::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_0_0_2_0;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_13;
        FIX::Nested3PartySubID Nested3PartySubID_13("STRING_1499921011");
        noNested3PartySubIDs_0_0_2_0.set(Nested3PartySubID_13);
        NstdPtys3SubGrp_NoNested3PartySubIDs_13.insert(Nested3PartySubID_13.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_13(981723118);
        noNested3PartySubIDs_0_0_2_0.set(Nested3PartySubIDType_13);
        NstdPtys3SubGrp_NoNested3PartySubIDs_13.insert(Nested3PartySubIDType_13.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_13);
        all_compo_names.insert("NstdPtys3SubGrp.NoNested3PartySubIDs");

        noNested3PartyIDs_0_1_0.addGroup(noNested3PartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::NewOrderMultileg::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_0_0_2_1;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_14;
        FIX::Nested3PartySubID Nested3PartySubID_14("STRING_2115214918");
        noNested3PartySubIDs_0_0_2_1.set(Nested3PartySubID_14);
        NstdPtys3SubGrp_NoNested3PartySubIDs_14.insert(Nested3PartySubID_14.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_14(581673396);
        noNested3PartySubIDs_0_0_2_1.set(Nested3PartySubIDType_14);
        NstdPtys3SubGrp_NoNested3PartySubIDs_14.insert(Nested3PartySubIDType_14.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_14);
        all_compo_names.insert("NstdPtys3SubGrp.NoNested3PartySubIDs");

        noNested3PartyIDs_0_1_0.addGroup(noNested3PartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::NewOrderMultileg::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_0_0_2_2;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_15;
        FIX::Nested3PartySubID Nested3PartySubID_15("STRING_1650194612");
        noNested3PartySubIDs_0_0_2_2.set(Nested3PartySubID_15);
        NstdPtys3SubGrp_NoNested3PartySubIDs_15.insert(Nested3PartySubID_15.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_15(1775371393);
        noNested3PartySubIDs_0_0_2_2.set(Nested3PartySubIDType_15);
        NstdPtys3SubGrp_NoNested3PartySubIDs_15.insert(Nested3PartySubIDType_15.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_15);
        all_compo_names.insert("NstdPtys3SubGrp.NoNested3PartySubIDs");

        noNested3PartyIDs_0_1_0.addGroup(noNested3PartySubIDs_0_0_2_2);
      }
      noAllocs_0_0.addGroup(noNested3PartyIDs_0_1_0);
    }
    msg.addGroup(noAllocs_0_0);
  }
  {
    FIX50SP2::NewOrderMultileg::NoAllocs noAllocs_0_1;
    // PreAllocMlegGrp.NoAllocs
    multiset<string> PreAllocMlegGrp_NoAllocs_2;
    FIX::AllocAccount AllocAccount_31("STRING_801230861");
    noAllocs_0_1.set(AllocAccount_31);
    PreAllocMlegGrp_NoAllocs_2.insert(AllocAccount_31.getString());
    FIX::AllocAcctIDSource AllocAcctIDSource_31(2144356865);
    noAllocs_0_1.set(AllocAcctIDSource_31);
    PreAllocMlegGrp_NoAllocs_2.insert(AllocAcctIDSource_31.getString());
    FIX::AllocQty AllocQty_30;
    AllocQty_30.setString("7424123");
    noAllocs_0_1.set(AllocQty_30);
    PreAllocMlegGrp_NoAllocs_2.insert(AllocQty_30.getString());
    FIX::AllocSettlCurrency AllocSettlCurrency_26("CHF");
    noAllocs_0_1.set(AllocSettlCurrency_26);
    PreAllocMlegGrp_NoAllocs_2.insert(AllocSettlCurrency_26.getString());
    FIX::IndividualAllocID IndividualAllocID_31("STRING_242817832");
    noAllocs_0_1.set(IndividualAllocID_31);
    PreAllocMlegGrp_NoAllocs_2.insert(IndividualAllocID_31.getString());
    all_values.push_back(PreAllocMlegGrp_NoAllocs_2);
    all_compo_names.insert("PreAllocMlegGrp.NoAllocs");

    // NestedParties3
    // Group NestedParties3.NoNested3PartyIDs
    {
      FIX50SP2::NewOrderMultileg::NoAllocs::NoNested3PartyIDs noNested3PartyIDs_1_1_0;
      // NestedParties3.NoNested3PartyIDs
      multiset<string> NestedParties3_NoNested3PartyIDs_7;
      FIX::Nested3PartyID Nested3PartyID_7("STRING_1069647224");
      noNested3PartyIDs_1_1_0.set(Nested3PartyID_7);
      NestedParties3_NoNested3PartyIDs_7.insert(Nested3PartyID_7.getString());
      FIX::Nested3PartyIDSource Nested3PartyIDSource_7('7');
      noNested3PartyIDs_1_1_0.set(Nested3PartyIDSource_7);
      NestedParties3_NoNested3PartyIDs_7.insert(Nested3PartyIDSource_7.getString());
      FIX::Nested3PartyRole Nested3PartyRole_7(1052985278);
      noNested3PartyIDs_1_1_0.set(Nested3PartyRole_7);
      NestedParties3_NoNested3PartyIDs_7.insert(Nested3PartyRole_7.getString());
      all_values.push_back(NestedParties3_NoNested3PartyIDs_7);
      all_compo_names.insert("NestedParties3.NoNested3PartyIDs");

      // NstdPtys3SubGrp
      // Group NstdPtys3SubGrp.NoNested3PartySubIDs
      {
        FIX50SP2::NewOrderMultileg::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_1_0_2_0;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_16;
        FIX::Nested3PartySubID Nested3PartySubID_16("STRING_2119175413");
        noNested3PartySubIDs_1_0_2_0.set(Nested3PartySubID_16);
        NstdPtys3SubGrp_NoNested3PartySubIDs_16.insert(Nested3PartySubID_16.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_16(1419792567);
        noNested3PartySubIDs_1_0_2_0.set(Nested3PartySubIDType_16);
        NstdPtys3SubGrp_NoNested3PartySubIDs_16.insert(Nested3PartySubIDType_16.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_16);
        all_compo_names.insert("NstdPtys3SubGrp.NoNested3PartySubIDs");

        noNested3PartyIDs_1_1_0.addGroup(noNested3PartySubIDs_1_0_2_0);
      }
      noAllocs_0_1.addGroup(noNested3PartyIDs_1_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoAllocs::NoNested3PartyIDs noNested3PartyIDs_1_1_1;
      // NestedParties3.NoNested3PartyIDs
      multiset<string> NestedParties3_NoNested3PartyIDs_8;
      FIX::Nested3PartyID Nested3PartyID_8("STRING_2010206070");
      noNested3PartyIDs_1_1_1.set(Nested3PartyID_8);
      NestedParties3_NoNested3PartyIDs_8.insert(Nested3PartyID_8.getString());
      FIX::Nested3PartyIDSource Nested3PartyIDSource_8('3');
      noNested3PartyIDs_1_1_1.set(Nested3PartyIDSource_8);
      NestedParties3_NoNested3PartyIDs_8.insert(Nested3PartyIDSource_8.getString());
      FIX::Nested3PartyRole Nested3PartyRole_8(107040612);
      noNested3PartyIDs_1_1_1.set(Nested3PartyRole_8);
      NestedParties3_NoNested3PartyIDs_8.insert(Nested3PartyRole_8.getString());
      all_values.push_back(NestedParties3_NoNested3PartyIDs_8);
      all_compo_names.insert("NestedParties3.NoNested3PartyIDs");

      // NstdPtys3SubGrp
      // Group NstdPtys3SubGrp.NoNested3PartySubIDs
      {
        FIX50SP2::NewOrderMultileg::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_1_1_2_0;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_17;
        FIX::Nested3PartySubID Nested3PartySubID_17("STRING_1085738345");
        noNested3PartySubIDs_1_1_2_0.set(Nested3PartySubID_17);
        NstdPtys3SubGrp_NoNested3PartySubIDs_17.insert(Nested3PartySubID_17.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_17(109432975);
        noNested3PartySubIDs_1_1_2_0.set(Nested3PartySubIDType_17);
        NstdPtys3SubGrp_NoNested3PartySubIDs_17.insert(Nested3PartySubIDType_17.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_17);
        all_compo_names.insert("NstdPtys3SubGrp.NoNested3PartySubIDs");

        noNested3PartyIDs_1_1_1.addGroup(noNested3PartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::NewOrderMultileg::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_1_1_2_1;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_18;
        FIX::Nested3PartySubID Nested3PartySubID_18("STRING_1987925994");
        noNested3PartySubIDs_1_1_2_1.set(Nested3PartySubID_18);
        NstdPtys3SubGrp_NoNested3PartySubIDs_18.insert(Nested3PartySubID_18.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_18(1817615714);
        noNested3PartySubIDs_1_1_2_1.set(Nested3PartySubIDType_18);
        NstdPtys3SubGrp_NoNested3PartySubIDs_18.insert(Nested3PartySubIDType_18.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_18);
        all_compo_names.insert("NstdPtys3SubGrp.NoNested3PartySubIDs");

        noNested3PartyIDs_1_1_1.addGroup(noNested3PartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::NewOrderMultileg::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_1_1_2_2;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_19;
        FIX::Nested3PartySubID Nested3PartySubID_19("STRING_39526804");
        noNested3PartySubIDs_1_1_2_2.set(Nested3PartySubID_19);
        NstdPtys3SubGrp_NoNested3PartySubIDs_19.insert(Nested3PartySubID_19.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_19(1518019854);
        noNested3PartySubIDs_1_1_2_2.set(Nested3PartySubIDType_19);
        NstdPtys3SubGrp_NoNested3PartySubIDs_19.insert(Nested3PartySubIDType_19.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_19);
        all_compo_names.insert("NstdPtys3SubGrp.NoNested3PartySubIDs");

        noNested3PartyIDs_1_1_1.addGroup(noNested3PartySubIDs_1_1_2_2);
      }
      noAllocs_0_1.addGroup(noNested3PartyIDs_1_1_1);
    }
    {
      FIX50SP2::NewOrderMultileg::NoAllocs::NoNested3PartyIDs noNested3PartyIDs_1_1_2;
      // NestedParties3.NoNested3PartyIDs
      multiset<string> NestedParties3_NoNested3PartyIDs_9;
      FIX::Nested3PartyID Nested3PartyID_9("STRING_1812915611");
      noNested3PartyIDs_1_1_2.set(Nested3PartyID_9);
      NestedParties3_NoNested3PartyIDs_9.insert(Nested3PartyID_9.getString());
      FIX::Nested3PartyIDSource Nested3PartyIDSource_9('1');
      noNested3PartyIDs_1_1_2.set(Nested3PartyIDSource_9);
      NestedParties3_NoNested3PartyIDs_9.insert(Nested3PartyIDSource_9.getString());
      FIX::Nested3PartyRole Nested3PartyRole_9(870457217);
      noNested3PartyIDs_1_1_2.set(Nested3PartyRole_9);
      NestedParties3_NoNested3PartyIDs_9.insert(Nested3PartyRole_9.getString());
      all_values.push_back(NestedParties3_NoNested3PartyIDs_9);
      all_compo_names.insert("NestedParties3.NoNested3PartyIDs");

      // NstdPtys3SubGrp
      // Group NstdPtys3SubGrp.NoNested3PartySubIDs
      {
        FIX50SP2::NewOrderMultileg::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_1_2_2_0;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_20;
        FIX::Nested3PartySubID Nested3PartySubID_20("STRING_1130759297");
        noNested3PartySubIDs_1_2_2_0.set(Nested3PartySubID_20);
        NstdPtys3SubGrp_NoNested3PartySubIDs_20.insert(Nested3PartySubID_20.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_20(1452130614);
        noNested3PartySubIDs_1_2_2_0.set(Nested3PartySubIDType_20);
        NstdPtys3SubGrp_NoNested3PartySubIDs_20.insert(Nested3PartySubIDType_20.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_20);
        all_compo_names.insert("NstdPtys3SubGrp.NoNested3PartySubIDs");

        noNested3PartyIDs_1_1_2.addGroup(noNested3PartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::NewOrderMultileg::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_1_2_2_1;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_21;
        FIX::Nested3PartySubID Nested3PartySubID_21("STRING_149866045");
        noNested3PartySubIDs_1_2_2_1.set(Nested3PartySubID_21);
        NstdPtys3SubGrp_NoNested3PartySubIDs_21.insert(Nested3PartySubID_21.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_21(758647043);
        noNested3PartySubIDs_1_2_2_1.set(Nested3PartySubIDType_21);
        NstdPtys3SubGrp_NoNested3PartySubIDs_21.insert(Nested3PartySubIDType_21.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_21);
        all_compo_names.insert("NstdPtys3SubGrp.NoNested3PartySubIDs");

        noNested3PartyIDs_1_1_2.addGroup(noNested3PartySubIDs_1_2_2_1);
      }
      noAllocs_0_1.addGroup(noNested3PartyIDs_1_1_2);
    }
    msg.addGroup(noAllocs_0_1);
  }
  {
    FIX50SP2::NewOrderMultileg::NoAllocs noAllocs_0_2;
    // PreAllocMlegGrp.NoAllocs
    multiset<string> PreAllocMlegGrp_NoAllocs_3;
    FIX::AllocAccount AllocAccount_32("STRING_105877827");
    noAllocs_0_2.set(AllocAccount_32);
    PreAllocMlegGrp_NoAllocs_3.insert(AllocAccount_32.getString());
    FIX::AllocAcctIDSource AllocAcctIDSource_32(146739263);
    noAllocs_0_2.set(AllocAcctIDSource_32);
    PreAllocMlegGrp_NoAllocs_3.insert(AllocAcctIDSource_32.getString());
    FIX::AllocQty AllocQty_31;
    AllocQty_31.setString("15010593");
    noAllocs_0_2.set(AllocQty_31);
    PreAllocMlegGrp_NoAllocs_3.insert(AllocQty_31.getString());
    FIX::AllocSettlCurrency AllocSettlCurrency_27("GBP");
    noAllocs_0_2.set(AllocSettlCurrency_27);
    PreAllocMlegGrp_NoAllocs_3.insert(AllocSettlCurrency_27.getString());
    FIX::IndividualAllocID IndividualAllocID_32("STRING_1743877191");
    noAllocs_0_2.set(IndividualAllocID_32);
    PreAllocMlegGrp_NoAllocs_3.insert(IndividualAllocID_32.getString());
    all_values.push_back(PreAllocMlegGrp_NoAllocs_3);
    all_compo_names.insert("PreAllocMlegGrp.NoAllocs");

    // NestedParties3
    // Group NestedParties3.NoNested3PartyIDs
    {
      FIX50SP2::NewOrderMultileg::NoAllocs::NoNested3PartyIDs noNested3PartyIDs_2_1_0;
      // NestedParties3.NoNested3PartyIDs
      multiset<string> NestedParties3_NoNested3PartyIDs_10;
      FIX::Nested3PartyID Nested3PartyID_10("STRING_1357557226");
      noNested3PartyIDs_2_1_0.set(Nested3PartyID_10);
      NestedParties3_NoNested3PartyIDs_10.insert(Nested3PartyID_10.getString());
      FIX::Nested3PartyIDSource Nested3PartyIDSource_10('3');
      noNested3PartyIDs_2_1_0.set(Nested3PartyIDSource_10);
      NestedParties3_NoNested3PartyIDs_10.insert(Nested3PartyIDSource_10.getString());
      FIX::Nested3PartyRole Nested3PartyRole_10(148829485);
      noNested3PartyIDs_2_1_0.set(Nested3PartyRole_10);
      NestedParties3_NoNested3PartyIDs_10.insert(Nested3PartyRole_10.getString());
      all_values.push_back(NestedParties3_NoNested3PartyIDs_10);
      all_compo_names.insert("NestedParties3.NoNested3PartyIDs");

      // NstdPtys3SubGrp
      // Group NstdPtys3SubGrp.NoNested3PartySubIDs
      {
        FIX50SP2::NewOrderMultileg::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_2_0_2_0;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_22;
        FIX::Nested3PartySubID Nested3PartySubID_22("STRING_350334064");
        noNested3PartySubIDs_2_0_2_0.set(Nested3PartySubID_22);
        NstdPtys3SubGrp_NoNested3PartySubIDs_22.insert(Nested3PartySubID_22.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_22(1568622052);
        noNested3PartySubIDs_2_0_2_0.set(Nested3PartySubIDType_22);
        NstdPtys3SubGrp_NoNested3PartySubIDs_22.insert(Nested3PartySubIDType_22.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_22);
        all_compo_names.insert("NstdPtys3SubGrp.NoNested3PartySubIDs");

        noNested3PartyIDs_2_1_0.addGroup(noNested3PartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::NewOrderMultileg::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_2_0_2_1;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_23;
        FIX::Nested3PartySubID Nested3PartySubID_23("STRING_1108177771");
        noNested3PartySubIDs_2_0_2_1.set(Nested3PartySubID_23);
        NstdPtys3SubGrp_NoNested3PartySubIDs_23.insert(Nested3PartySubID_23.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_23(740150236);
        noNested3PartySubIDs_2_0_2_1.set(Nested3PartySubIDType_23);
        NstdPtys3SubGrp_NoNested3PartySubIDs_23.insert(Nested3PartySubIDType_23.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_23);
        all_compo_names.insert("NstdPtys3SubGrp.NoNested3PartySubIDs");

        noNested3PartyIDs_2_1_0.addGroup(noNested3PartySubIDs_2_0_2_1);
      }
      {
        FIX50SP2::NewOrderMultileg::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_2_0_2_2;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_24;
        FIX::Nested3PartySubID Nested3PartySubID_24("STRING_1675662664");
        noNested3PartySubIDs_2_0_2_2.set(Nested3PartySubID_24);
        NstdPtys3SubGrp_NoNested3PartySubIDs_24.insert(Nested3PartySubID_24.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_24(1752026100);
        noNested3PartySubIDs_2_0_2_2.set(Nested3PartySubIDType_24);
        NstdPtys3SubGrp_NoNested3PartySubIDs_24.insert(Nested3PartySubIDType_24.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_24);
        all_compo_names.insert("NstdPtys3SubGrp.NoNested3PartySubIDs");

        noNested3PartyIDs_2_1_0.addGroup(noNested3PartySubIDs_2_0_2_2);
      }
      noAllocs_0_2.addGroup(noNested3PartyIDs_2_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoAllocs::NoNested3PartyIDs noNested3PartyIDs_2_1_1;
      // NestedParties3.NoNested3PartyIDs
      multiset<string> NestedParties3_NoNested3PartyIDs_11;
      FIX::Nested3PartyID Nested3PartyID_11("STRING_1825888581");
      noNested3PartyIDs_2_1_1.set(Nested3PartyID_11);
      NestedParties3_NoNested3PartyIDs_11.insert(Nested3PartyID_11.getString());
      FIX::Nested3PartyIDSource Nested3PartyIDSource_11('1');
      noNested3PartyIDs_2_1_1.set(Nested3PartyIDSource_11);
      NestedParties3_NoNested3PartyIDs_11.insert(Nested3PartyIDSource_11.getString());
      FIX::Nested3PartyRole Nested3PartyRole_11(1592468446);
      noNested3PartyIDs_2_1_1.set(Nested3PartyRole_11);
      NestedParties3_NoNested3PartyIDs_11.insert(Nested3PartyRole_11.getString());
      all_values.push_back(NestedParties3_NoNested3PartyIDs_11);
      all_compo_names.insert("NestedParties3.NoNested3PartyIDs");

      // NstdPtys3SubGrp
      // Group NstdPtys3SubGrp.NoNested3PartySubIDs
      {
        FIX50SP2::NewOrderMultileg::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_2_1_2_0;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_25;
        FIX::Nested3PartySubID Nested3PartySubID_25("STRING_1824622444");
        noNested3PartySubIDs_2_1_2_0.set(Nested3PartySubID_25);
        NstdPtys3SubGrp_NoNested3PartySubIDs_25.insert(Nested3PartySubID_25.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_25(963004652);
        noNested3PartySubIDs_2_1_2_0.set(Nested3PartySubIDType_25);
        NstdPtys3SubGrp_NoNested3PartySubIDs_25.insert(Nested3PartySubIDType_25.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_25);
        all_compo_names.insert("NstdPtys3SubGrp.NoNested3PartySubIDs");

        noNested3PartyIDs_2_1_1.addGroup(noNested3PartySubIDs_2_1_2_0);
      }
      noAllocs_0_2.addGroup(noNested3PartyIDs_2_1_1);
    }
    msg.addGroup(noAllocs_0_2);
  }
  // StrategyParametersGrp
  // Group StrategyParametersGrp.NoStrategyParameters
  {
    FIX50SP2::NewOrderMultileg::NoStrategyParameters noStrategyParameters_0_0;
    // StrategyParametersGrp.NoStrategyParameters
    multiset<string> StrategyParametersGrp_NoStrategyParameters_14;
    FIX::StrategyParameterName StrategyParameterName_14("STRING_840166823");
    noStrategyParameters_0_0.set(StrategyParameterName_14);
    StrategyParametersGrp_NoStrategyParameters_14.insert(StrategyParameterName_14.getString());
    FIX::StrategyParameterType StrategyParameterType_14(3);
    noStrategyParameters_0_0.set(StrategyParameterType_14);
    StrategyParametersGrp_NoStrategyParameters_14.insert(StrategyParameterType_14.getString());
    FIX::StrategyParameterValue StrategyParameterValue_14("STRING_1808607692");
    noStrategyParameters_0_0.set(StrategyParameterValue_14);
    StrategyParametersGrp_NoStrategyParameters_14.insert(StrategyParameterValue_14.getString());
    all_values.push_back(StrategyParametersGrp_NoStrategyParameters_14);
    all_compo_names.insert("StrategyParametersGrp.NoStrategyParameters");

    msg.addGroup(noStrategyParameters_0_0);
  }
  // TrdgSesGrp
  // Group TrdgSesGrp.NoTradingSessions
  {
    FIX50SP2::NewOrderMultileg::NoTradingSessions noTradingSessions_0_0;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_16;
    FIX::TradingSessionID TradingSessionID_63("STRING_6");
    noTradingSessions_0_0.set(TradingSessionID_63);
    TrdgSesGrp_NoTradingSessions_16.insert(TradingSessionID_63.getString());
    FIX::TradingSessionSubID TradingSessionSubID_63("STRING_4");
    noTradingSessions_0_0.set(TradingSessionSubID_63);
    TrdgSesGrp_NoTradingSessions_16.insert(TradingSessionSubID_63.getString());
    all_values.push_back(TrdgSesGrp_NoTradingSessions_16);
    all_compo_names.insert("TrdgSesGrp.NoTradingSessions");

    msg.addGroup(noTradingSessions_0_0);
  }
  {
    FIX50SP2::NewOrderMultileg::NoTradingSessions noTradingSessions_0_1;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_17;
    FIX::TradingSessionID TradingSessionID_64("STRING_2");
    noTradingSessions_0_1.set(TradingSessionID_64);
    TrdgSesGrp_NoTradingSessions_17.insert(TradingSessionID_64.getString());
    FIX::TradingSessionSubID TradingSessionSubID_64("STRING_3");
    noTradingSessions_0_1.set(TradingSessionSubID_64);
    TrdgSesGrp_NoTradingSessions_17.insert(TradingSessionSubID_64.getString());
    all_values.push_back(TrdgSesGrp_NoTradingSessions_17);
    all_compo_names.insert("TrdgSesGrp.NoTradingSessions");

    msg.addGroup(noTradingSessions_0_1);
  }
  // TriggeringInstruction
  multiset<string> TriggeringInstruction_7;
  FIX::TriggerAction TriggerAction_7('3');
  msg.set(TriggerAction_7);
  TriggeringInstruction_7.insert(TriggerAction_7.getString());
  FIX::TriggerNewPrice TriggerNewPrice_7;
  TriggerNewPrice_7.setString("20831488");
  msg.set(TriggerNewPrice_7);
  TriggeringInstruction_7.insert(TriggerNewPrice_7.getString());
  FIX::TriggerNewQty TriggerNewQty_7;
  TriggerNewQty_7.setString("11484560");
  msg.set(TriggerNewQty_7);
  TriggeringInstruction_7.insert(TriggerNewQty_7.getString());
  FIX::TriggerOrderType TriggerOrderType_7('2');
  msg.set(TriggerOrderType_7);
  TriggeringInstruction_7.insert(TriggerOrderType_7.getString());
  FIX::TriggerPrice TriggerPrice_7;
  TriggerPrice_7.setString("16795424");
  msg.set(TriggerPrice_7);
  TriggeringInstruction_7.insert(TriggerPrice_7.getString());
  FIX::TriggerPriceDirection TriggerPriceDirection_7('U');
  msg.set(TriggerPriceDirection_7);
  TriggeringInstruction_7.insert(TriggerPriceDirection_7.getString());
  FIX::TriggerPriceType TriggerPriceType_7('2');
  msg.set(TriggerPriceType_7);
  TriggeringInstruction_7.insert(TriggerPriceType_7.getString());
  FIX::TriggerPriceTypeScope TriggerPriceTypeScope_7('0');
  msg.set(TriggerPriceTypeScope_7);
  TriggeringInstruction_7.insert(TriggerPriceTypeScope_7.getString());
  FIX::TriggerSecurityDesc TriggerSecurityDesc_7("STRING_393129739");
  msg.set(TriggerSecurityDesc_7);
  TriggeringInstruction_7.insert(TriggerSecurityDesc_7.getString());
  FIX::TriggerSecurityID TriggerSecurityID_7("STRING_701168282");
  msg.set(TriggerSecurityID_7);
  TriggeringInstruction_7.insert(TriggerSecurityID_7.getString());
  FIX::TriggerSecurityIDSource TriggerSecurityIDSource_7("STRING_261035132");
  msg.set(TriggerSecurityIDSource_7);
  TriggeringInstruction_7.insert(TriggerSecurityIDSource_7.getString());
  FIX::TriggerSymbol TriggerSymbol_7("STRING_1961751792");
  msg.set(TriggerSymbol_7);
  TriggeringInstruction_7.insert(TriggerSymbol_7.getString());
  FIX::TriggerTradingSessionID TriggerTradingSessionID_7("STRING_1809346053");
  msg.set(TriggerTradingSessionID_7);
  TriggeringInstruction_7.insert(TriggerTradingSessionID_7.getString());
  FIX::TriggerTradingSessionSubID TriggerTradingSessionSubID_7("STRING_1001185368");
  msg.set(TriggerTradingSessionSubID_7);
  TriggeringInstruction_7.insert(TriggerTradingSessionSubID_7.getString());
  FIX::TriggerType TriggerType_7('1');
  msg.set(TriggerType_7);
  TriggeringInstruction_7.insert(TriggerType_7.getString());
  all_values.push_back(TriggeringInstruction_7);
  all_compo_names.insert("TriggeringInstruction");

  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::NewOrderMultileg::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_72;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_72("DATA_679590301");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_72);
    UnderlyingInstrument_72.insert(EncodedUnderlyingIssuer_72.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_72(1127542800);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_72);
    UnderlyingInstrument_72.insert(EncodedUnderlyingIssuerLen_72.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_72("DATA_858873303");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_72);
    UnderlyingInstrument_72.insert(EncodedUnderlyingSecurityDesc_72.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_72(28127301);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_72);
    UnderlyingInstrument_72.insert(EncodedUnderlyingSecurityDescLen_72.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_72;
    UnderlyingAdjustedQuantity_72.setString("8046815");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_72);
    UnderlyingInstrument_72.insert(UnderlyingAdjustedQuantity_72.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_72;
    UnderlyingAllocationPercent_72.setString("79.550000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_72);
    UnderlyingInstrument_72.insert(UnderlyingAllocationPercent_72.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_72;
    UnderlyingAttachmentPoint_72.setString("99.110000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_72);
    UnderlyingInstrument_72.insert(UnderlyingAttachmentPoint_72.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_72("STRING_1644848419");
    noUnderlyings_0_0.set(UnderlyingCFICode_72);
    UnderlyingInstrument_72.insert(UnderlyingCFICode_72.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_72("STRING_1507856176");
    noUnderlyings_0_0.set(UnderlyingCPProgram_72);
    UnderlyingInstrument_72.insert(UnderlyingCPProgram_72.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_72("STRING_850703955");
    noUnderlyings_0_0.set(UnderlyingCPRegType_72);
    UnderlyingInstrument_72.insert(UnderlyingCPRegType_72.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_72;
    UnderlyingCapValue_72.setString("14682908");
    noUnderlyings_0_0.set(UnderlyingCapValue_72);
    UnderlyingInstrument_72.insert(UnderlyingCapValue_72.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_72;
    UnderlyingCashAmount_72.setString("4984813");
    noUnderlyings_0_0.set(UnderlyingCashAmount_72);
    UnderlyingInstrument_72.insert(UnderlyingCashAmount_72.getString());
    FIX::UnderlyingCashType UnderlyingCashType_72("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_72);
    UnderlyingInstrument_72.insert(UnderlyingCashType_72.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_72;
    UnderlyingContractMultiplier_72.setString("20503804");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_72);
    UnderlyingInstrument_72.insert(UnderlyingContractMultiplier_72.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_72(1742468026);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_72);
    UnderlyingInstrument_72.insert(UnderlyingContractMultiplierUnit_72.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_72("COUNTRY_619423397");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_72);
    UnderlyingInstrument_72.insert(UnderlyingCountryOfIssue_72.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_72("LOCALMKTDATE_1986045634");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_72);
    UnderlyingInstrument_72.insert(UnderlyingCouponPaymentDate_72.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_72;
    UnderlyingCouponRate_72.setString("4.250000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_72);
    UnderlyingInstrument_72.insert(UnderlyingCouponRate_72.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_72("STRING_865062752");
    noUnderlyings_0_0.set(UnderlyingCreditRating_72);
    UnderlyingInstrument_72.insert(UnderlyingCreditRating_72.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_72("CHF");
    noUnderlyings_0_0.set(UnderlyingCurrency_72);
    UnderlyingInstrument_72.insert(UnderlyingCurrency_72.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_72;
    UnderlyingCurrentValue_72.setString("3207756");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_72);
    UnderlyingInstrument_72.insert(UnderlyingCurrentValue_72.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_72;
    UnderlyingDetachmentPoint_72.setString("54.720000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_72);
    UnderlyingInstrument_72.insert(UnderlyingDetachmentPoint_72.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_72;
    UnderlyingDirtyPrice_72.setString("13808704");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_72);
    UnderlyingInstrument_72.insert(UnderlyingDirtyPrice_72.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_72;
    UnderlyingEndPrice_72.setString("10219439");
    noUnderlyings_0_0.set(UnderlyingEndPrice_72);
    UnderlyingInstrument_72.insert(UnderlyingEndPrice_72.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_72;
    UnderlyingEndValue_72.setString("16898406");
    noUnderlyings_0_0.set(UnderlyingEndValue_72);
    UnderlyingInstrument_72.insert(UnderlyingEndValue_72.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_72(1195138563);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_72);
    UnderlyingInstrument_72.insert(UnderlyingExerciseStyle_72.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_72;
    UnderlyingFXRate_72.setString("6838063");
    noUnderlyings_0_0.set(UnderlyingFXRate_72);
    UnderlyingInstrument_72.insert(UnderlyingFXRate_72.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_72('M');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_72);
    UnderlyingInstrument_72.insert(UnderlyingFXRateCalc_72.getString());
    FIX::UnderlyingFactor UnderlyingFactor_72;
    UnderlyingFactor_72.setString("5375857");
    noUnderlyings_0_0.set(UnderlyingFactor_72);
    UnderlyingInstrument_72.insert(UnderlyingFactor_72.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_72(2097694878);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_72);
    UnderlyingInstrument_72.insert(UnderlyingFlowScheduleType_72.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_72("STRING_1223132626");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_72);
    UnderlyingInstrument_72.insert(UnderlyingInstrRegistry_72.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_72("LOCALMKTDATE_1665128524");
    noUnderlyings_0_0.set(UnderlyingIssueDate_72);
    UnderlyingInstrument_72.insert(UnderlyingIssueDate_72.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_72("STRING_809084533");
    noUnderlyings_0_0.set(UnderlyingIssuer_72);
    UnderlyingInstrument_72.insert(UnderlyingIssuer_72.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_72("STRING_1251259927");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_72);
    UnderlyingInstrument_72.insert(UnderlyingLocaleOfIssue_72.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_72("LOCALMKTDATE_322326472");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_72);
    UnderlyingInstrument_72.insert(UnderlyingMaturityDate_72.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_72("MONTHYEAR_483478840");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_72);
    UnderlyingInstrument_72.insert(UnderlyingMaturityMonthYear_72.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_72("TZTIMEONLY_293356191");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_72);
    UnderlyingInstrument_72.insert(UnderlyingMaturityTime_72.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_72;
    UnderlyingNotionalPercentageOutstanding_72.setString("48.920000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_72);
    UnderlyingInstrument_72.insert(UnderlyingNotionalPercentageOutstanding_72.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_72('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_72);
    UnderlyingInstrument_72.insert(UnderlyingOptAttribute_72.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_72;
    UnderlyingOriginalNotionalPercentageOutstanding_72.setString("1.460000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_72);
    UnderlyingInstrument_72.insert(UnderlyingOriginalNotionalPercentageOutstanding_72.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_72("STRING_1287982136");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_72);
    UnderlyingInstrument_72.insert(UnderlyingPriceUnitOfMeasure_72.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_72;
    UnderlyingPriceUnitOfMeasureQty_72.setString("3423327");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_72);
    UnderlyingInstrument_72.insert(UnderlyingPriceUnitOfMeasureQty_72.getString());
    FIX::UnderlyingProduct UnderlyingProduct_72(1805754191);
    noUnderlyings_0_0.set(UnderlyingProduct_72);
    UnderlyingInstrument_72.insert(UnderlyingProduct_72.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_72(1190878895);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_72);
    UnderlyingInstrument_72.insert(UnderlyingPutOrCall_72.getString());
    FIX::UnderlyingPx UnderlyingPx_72;
    UnderlyingPx_72.setString("20848007");
    noUnderlyings_0_0.set(UnderlyingPx_72);
    UnderlyingInstrument_72.insert(UnderlyingPx_72.getString());
    FIX::UnderlyingQty UnderlyingQty_72;
    UnderlyingQty_72.setString("2776939");
    noUnderlyings_0_0.set(UnderlyingQty_72);
    UnderlyingInstrument_72.insert(UnderlyingQty_72.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_72("LOCALMKTDATE_1029440881");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_72);
    UnderlyingInstrument_72.insert(UnderlyingRedemptionDate_72.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_72("STRING_680757536");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_72);
    UnderlyingInstrument_72.insert(UnderlyingRepoCollateralSecurityType_72.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_72;
    UnderlyingRepurchaseRate_72.setString("66.930000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_72);
    UnderlyingInstrument_72.insert(UnderlyingRepurchaseRate_72.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_72(400061637);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_72);
    UnderlyingInstrument_72.insert(UnderlyingRepurchaseTerm_72.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_72("STRING_1668498216");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_72);
    UnderlyingInstrument_72.insert(UnderlyingRestructuringType_72.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_72("STRING_1463532379");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_72);
    UnderlyingInstrument_72.insert(UnderlyingSecurityDesc_72.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_72("EXCHANGE_1828867109");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_72);
    UnderlyingInstrument_72.insert(UnderlyingSecurityExchange_72.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_72("STRING_901884987");
    noUnderlyings_0_0.set(UnderlyingSecurityID_72);
    UnderlyingInstrument_72.insert(UnderlyingSecurityID_72.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_72("STRING_337992699");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_72);
    UnderlyingInstrument_72.insert(UnderlyingSecurityIDSource_72.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_72("STRING_1371224065");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_72);
    UnderlyingInstrument_72.insert(UnderlyingSecuritySubType_72.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_72("STRING_2097023550");
    noUnderlyings_0_0.set(UnderlyingSecurityType_72);
    UnderlyingInstrument_72.insert(UnderlyingSecurityType_72.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_72("STRING_1021799072");
    noUnderlyings_0_0.set(UnderlyingSeniority_72);
    UnderlyingInstrument_72.insert(UnderlyingSeniority_72.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_72("STRING_1914766390");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_72);
    UnderlyingInstrument_72.insert(UnderlyingSettlMethod_72.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_72(4);
    noUnderlyings_0_0.set(UnderlyingSettlementType_72);
    UnderlyingInstrument_72.insert(UnderlyingSettlementType_72.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_72;
    UnderlyingStartValue_72.setString("9720103");
    noUnderlyings_0_0.set(UnderlyingStartValue_72);
    UnderlyingInstrument_72.insert(UnderlyingStartValue_72.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_72("STRING_990415369");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_72);
    UnderlyingInstrument_72.insert(UnderlyingStateOrProvinceOfIssue_72.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_72("EUR");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_72);
    UnderlyingInstrument_72.insert(UnderlyingStrikeCurrency_72.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_72;
    UnderlyingStrikePrice_72.setString("941916");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_72);
    UnderlyingInstrument_72.insert(UnderlyingStrikePrice_72.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_72("STRING_327096974");
    noUnderlyings_0_0.set(UnderlyingSymbol_72);
    UnderlyingInstrument_72.insert(UnderlyingSymbol_72.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_72("STRING_117090027");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_72);
    UnderlyingInstrument_72.insert(UnderlyingSymbolSfx_72.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_72("STRING_387547839");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_72);
    UnderlyingInstrument_72.insert(UnderlyingTimeUnit_72.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_72("STRING_146788218");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_72);
    UnderlyingInstrument_72.insert(UnderlyingUnitOfMeasure_72.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_72;
    UnderlyingUnitOfMeasureQty_72.setString("21084250");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_72);
    UnderlyingInstrument_72.insert(UnderlyingUnitOfMeasureQty_72.getString());
    all_values.push_back(UnderlyingInstrument_72);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_147;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_147("STRING_1434770354");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_147);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_147.insert(UnderlyingSecurityAltID_147.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_147("STRING_303274128");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_147);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_147.insert(UnderlyingSecurityAltIDSource_147.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_147);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_148;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_148("STRING_1189878529");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_148);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_148.insert(UnderlyingSecurityAltID_148.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_148("STRING_478165601");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_148);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_148.insert(UnderlyingSecurityAltIDSource_148.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_148);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_144;
      FIX::UnderlyingStipType UnderlyingStipType_144("STRING_1467572470");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_144);
      UnderlyingStipulations_NoUnderlyingStips_144.insert(UnderlyingStipType_144.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_144("STRING_1507606483");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_144);
      UnderlyingStipulations_NoUnderlyingStips_144.insert(UnderlyingStipValue_144.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_144);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_145;
      FIX::UnderlyingStipType UnderlyingStipType_145("STRING_921348776");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_145);
      UnderlyingStipulations_NoUnderlyingStips_145.insert(UnderlyingStipType_145.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_145("STRING_462845516");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_145);
      UnderlyingStipulations_NoUnderlyingStips_145.insert(UnderlyingStipValue_145.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_145);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    {
      FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_146;
      FIX::UnderlyingStipType UnderlyingStipType_146("STRING_1907668120");
      noUnderlyingStips_0_1_2.set(UnderlyingStipType_146);
      UnderlyingStipulations_NoUnderlyingStips_146.insert(UnderlyingStipType_146.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_146("STRING_442363344");
      noUnderlyingStips_0_1_2.set(UnderlyingStipValue_146);
      UnderlyingStipulations_NoUnderlyingStips_146.insert(UnderlyingStipValue_146.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_146);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_137;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_137("STRING_1589051581");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_137);
      UndlyInstrumentParties_NoUndlyInstrumentParties_137.insert(UnderlyingInstrumentPartyID_137.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_137('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_137);
      UndlyInstrumentParties_NoUndlyInstrumentParties_137.insert(UnderlyingInstrumentPartyIDSource_137.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_137(116886947);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_137);
      UndlyInstrumentParties_NoUndlyInstrumentParties_137.insert(UnderlyingInstrumentPartyRole_137.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_137);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_276;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_276("STRING_1293788233");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_276);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_276.insert(UnderlyingInstrumentPartySubID_276.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_276(1138686019);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_276);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_276.insert(UnderlyingInstrumentPartySubIDType_276.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_276);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::NewOrderMultileg::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_73;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_73("DATA_580074741");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_73);
    UnderlyingInstrument_73.insert(EncodedUnderlyingIssuer_73.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_73(1780913858);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_73);
    UnderlyingInstrument_73.insert(EncodedUnderlyingIssuerLen_73.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_73("DATA_2110696322");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_73);
    UnderlyingInstrument_73.insert(EncodedUnderlyingSecurityDesc_73.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_73(1570490110);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_73);
    UnderlyingInstrument_73.insert(EncodedUnderlyingSecurityDescLen_73.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_73;
    UnderlyingAdjustedQuantity_73.setString("17856843");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_73);
    UnderlyingInstrument_73.insert(UnderlyingAdjustedQuantity_73.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_73;
    UnderlyingAllocationPercent_73.setString("75.090000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_73);
    UnderlyingInstrument_73.insert(UnderlyingAllocationPercent_73.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_73;
    UnderlyingAttachmentPoint_73.setString("17.580000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_73);
    UnderlyingInstrument_73.insert(UnderlyingAttachmentPoint_73.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_73("STRING_2112781334");
    noUnderlyings_0_1.set(UnderlyingCFICode_73);
    UnderlyingInstrument_73.insert(UnderlyingCFICode_73.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_73("STRING_1861397537");
    noUnderlyings_0_1.set(UnderlyingCPProgram_73);
    UnderlyingInstrument_73.insert(UnderlyingCPProgram_73.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_73("STRING_2052229598");
    noUnderlyings_0_1.set(UnderlyingCPRegType_73);
    UnderlyingInstrument_73.insert(UnderlyingCPRegType_73.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_73;
    UnderlyingCapValue_73.setString("1120859");
    noUnderlyings_0_1.set(UnderlyingCapValue_73);
    UnderlyingInstrument_73.insert(UnderlyingCapValue_73.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_73;
    UnderlyingCashAmount_73.setString("18223389");
    noUnderlyings_0_1.set(UnderlyingCashAmount_73);
    UnderlyingInstrument_73.insert(UnderlyingCashAmount_73.getString());
    FIX::UnderlyingCashType UnderlyingCashType_73("STRING_FIXED");
    noUnderlyings_0_1.set(UnderlyingCashType_73);
    UnderlyingInstrument_73.insert(UnderlyingCashType_73.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_73;
    UnderlyingContractMultiplier_73.setString("15468562");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_73);
    UnderlyingInstrument_73.insert(UnderlyingContractMultiplier_73.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_73(2125613061);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_73);
    UnderlyingInstrument_73.insert(UnderlyingContractMultiplierUnit_73.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_73("COUNTRY_478748817");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_73);
    UnderlyingInstrument_73.insert(UnderlyingCountryOfIssue_73.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_73("LOCALMKTDATE_2025021859");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_73);
    UnderlyingInstrument_73.insert(UnderlyingCouponPaymentDate_73.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_73;
    UnderlyingCouponRate_73.setString("6.530000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_73);
    UnderlyingInstrument_73.insert(UnderlyingCouponRate_73.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_73("STRING_1946321288");
    noUnderlyings_0_1.set(UnderlyingCreditRating_73);
    UnderlyingInstrument_73.insert(UnderlyingCreditRating_73.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_73("CHF");
    noUnderlyings_0_1.set(UnderlyingCurrency_73);
    UnderlyingInstrument_73.insert(UnderlyingCurrency_73.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_73;
    UnderlyingCurrentValue_73.setString("2616831");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_73);
    UnderlyingInstrument_73.insert(UnderlyingCurrentValue_73.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_73;
    UnderlyingDetachmentPoint_73.setString("91.660000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_73);
    UnderlyingInstrument_73.insert(UnderlyingDetachmentPoint_73.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_73;
    UnderlyingDirtyPrice_73.setString("15824327");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_73);
    UnderlyingInstrument_73.insert(UnderlyingDirtyPrice_73.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_73;
    UnderlyingEndPrice_73.setString("405774");
    noUnderlyings_0_1.set(UnderlyingEndPrice_73);
    UnderlyingInstrument_73.insert(UnderlyingEndPrice_73.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_73;
    UnderlyingEndValue_73.setString("5868970");
    noUnderlyings_0_1.set(UnderlyingEndValue_73);
    UnderlyingInstrument_73.insert(UnderlyingEndValue_73.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_73(779197456);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_73);
    UnderlyingInstrument_73.insert(UnderlyingExerciseStyle_73.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_73;
    UnderlyingFXRate_73.setString("1574643");
    noUnderlyings_0_1.set(UnderlyingFXRate_73);
    UnderlyingInstrument_73.insert(UnderlyingFXRate_73.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_73('D');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_73);
    UnderlyingInstrument_73.insert(UnderlyingFXRateCalc_73.getString());
    FIX::UnderlyingFactor UnderlyingFactor_73;
    UnderlyingFactor_73.setString("20729856");
    noUnderlyings_0_1.set(UnderlyingFactor_73);
    UnderlyingInstrument_73.insert(UnderlyingFactor_73.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_73(1296150370);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_73);
    UnderlyingInstrument_73.insert(UnderlyingFlowScheduleType_73.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_73("STRING_1979763839");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_73);
    UnderlyingInstrument_73.insert(UnderlyingInstrRegistry_73.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_73("LOCALMKTDATE_1706415899");
    noUnderlyings_0_1.set(UnderlyingIssueDate_73);
    UnderlyingInstrument_73.insert(UnderlyingIssueDate_73.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_73("STRING_1259363044");
    noUnderlyings_0_1.set(UnderlyingIssuer_73);
    UnderlyingInstrument_73.insert(UnderlyingIssuer_73.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_73("STRING_1402770301");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_73);
    UnderlyingInstrument_73.insert(UnderlyingLocaleOfIssue_73.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_73("LOCALMKTDATE_1344616611");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_73);
    UnderlyingInstrument_73.insert(UnderlyingMaturityDate_73.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_73("MONTHYEAR_856186905");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_73);
    UnderlyingInstrument_73.insert(UnderlyingMaturityMonthYear_73.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_73("TZTIMEONLY_919968411");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_73);
    UnderlyingInstrument_73.insert(UnderlyingMaturityTime_73.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_73;
    UnderlyingNotionalPercentageOutstanding_73.setString("42.970000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_73);
    UnderlyingInstrument_73.insert(UnderlyingNotionalPercentageOutstanding_73.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_73('5');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_73);
    UnderlyingInstrument_73.insert(UnderlyingOptAttribute_73.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_73;
    UnderlyingOriginalNotionalPercentageOutstanding_73.setString("43.610000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_73);
    UnderlyingInstrument_73.insert(UnderlyingOriginalNotionalPercentageOutstanding_73.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_73("STRING_1422000201");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_73);
    UnderlyingInstrument_73.insert(UnderlyingPriceUnitOfMeasure_73.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_73;
    UnderlyingPriceUnitOfMeasureQty_73.setString("2449560");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_73);
    UnderlyingInstrument_73.insert(UnderlyingPriceUnitOfMeasureQty_73.getString());
    FIX::UnderlyingProduct UnderlyingProduct_73(113584649);
    noUnderlyings_0_1.set(UnderlyingProduct_73);
    UnderlyingInstrument_73.insert(UnderlyingProduct_73.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_73(821372811);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_73);
    UnderlyingInstrument_73.insert(UnderlyingPutOrCall_73.getString());
    FIX::UnderlyingPx UnderlyingPx_73;
    UnderlyingPx_73.setString("2230854");
    noUnderlyings_0_1.set(UnderlyingPx_73);
    UnderlyingInstrument_73.insert(UnderlyingPx_73.getString());
    FIX::UnderlyingQty UnderlyingQty_73;
    UnderlyingQty_73.setString("5923334");
    noUnderlyings_0_1.set(UnderlyingQty_73);
    UnderlyingInstrument_73.insert(UnderlyingQty_73.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_73("LOCALMKTDATE_698911023");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_73);
    UnderlyingInstrument_73.insert(UnderlyingRedemptionDate_73.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_73("STRING_441806146");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_73);
    UnderlyingInstrument_73.insert(UnderlyingRepoCollateralSecurityType_73.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_73;
    UnderlyingRepurchaseRate_73.setString("11.070000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_73);
    UnderlyingInstrument_73.insert(UnderlyingRepurchaseRate_73.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_73(2084055717);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_73);
    UnderlyingInstrument_73.insert(UnderlyingRepurchaseTerm_73.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_73("STRING_1581875575");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_73);
    UnderlyingInstrument_73.insert(UnderlyingRestructuringType_73.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_73("STRING_652854263");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_73);
    UnderlyingInstrument_73.insert(UnderlyingSecurityDesc_73.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_73("EXCHANGE_1081901236");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_73);
    UnderlyingInstrument_73.insert(UnderlyingSecurityExchange_73.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_73("STRING_1016824700");
    noUnderlyings_0_1.set(UnderlyingSecurityID_73);
    UnderlyingInstrument_73.insert(UnderlyingSecurityID_73.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_73("STRING_693431666");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_73);
    UnderlyingInstrument_73.insert(UnderlyingSecurityIDSource_73.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_73("STRING_1668798335");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_73);
    UnderlyingInstrument_73.insert(UnderlyingSecuritySubType_73.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_73("STRING_1796022156");
    noUnderlyings_0_1.set(UnderlyingSecurityType_73);
    UnderlyingInstrument_73.insert(UnderlyingSecurityType_73.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_73("STRING_850896017");
    noUnderlyings_0_1.set(UnderlyingSeniority_73);
    UnderlyingInstrument_73.insert(UnderlyingSeniority_73.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_73("STRING_921003785");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_73);
    UnderlyingInstrument_73.insert(UnderlyingSettlMethod_73.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_73(2);
    noUnderlyings_0_1.set(UnderlyingSettlementType_73);
    UnderlyingInstrument_73.insert(UnderlyingSettlementType_73.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_73;
    UnderlyingStartValue_73.setString("21470463");
    noUnderlyings_0_1.set(UnderlyingStartValue_73);
    UnderlyingInstrument_73.insert(UnderlyingStartValue_73.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_73("STRING_753283976");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_73);
    UnderlyingInstrument_73.insert(UnderlyingStateOrProvinceOfIssue_73.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_73("CAN");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_73);
    UnderlyingInstrument_73.insert(UnderlyingStrikeCurrency_73.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_73;
    UnderlyingStrikePrice_73.setString("85706");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_73);
    UnderlyingInstrument_73.insert(UnderlyingStrikePrice_73.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_73("STRING_477589412");
    noUnderlyings_0_1.set(UnderlyingSymbol_73);
    UnderlyingInstrument_73.insert(UnderlyingSymbol_73.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_73("STRING_2115112688");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_73);
    UnderlyingInstrument_73.insert(UnderlyingSymbolSfx_73.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_73("STRING_928539041");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_73);
    UnderlyingInstrument_73.insert(UnderlyingTimeUnit_73.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_73("STRING_1787503709");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_73);
    UnderlyingInstrument_73.insert(UnderlyingUnitOfMeasure_73.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_73;
    UnderlyingUnitOfMeasureQty_73.setString("5377298");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_73);
    UnderlyingInstrument_73.insert(UnderlyingUnitOfMeasureQty_73.getString());
    all_values.push_back(UnderlyingInstrument_73);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_149;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_149("STRING_1062020263");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_149);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_149.insert(UnderlyingSecurityAltID_149.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_149("STRING_782685914");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_149);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_149.insert(UnderlyingSecurityAltIDSource_149.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_149);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_150;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_150("STRING_1866838052");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_150);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_150.insert(UnderlyingSecurityAltID_150.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_150("STRING_1883393074");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_150);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_150.insert(UnderlyingSecurityAltIDSource_150.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_150);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_151;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_151("STRING_1005771407");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltID_151);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_151.insert(UnderlyingSecurityAltID_151.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_151("STRING_311687871");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltIDSource_151);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_151.insert(UnderlyingSecurityAltIDSource_151.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_151);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_147;
      FIX::UnderlyingStipType UnderlyingStipType_147("STRING_1447577553");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_147);
      UnderlyingStipulations_NoUnderlyingStips_147.insert(UnderlyingStipType_147.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_147("STRING_702858978");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_147);
      UnderlyingStipulations_NoUnderlyingStips_147.insert(UnderlyingStipValue_147.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_147);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_148;
      FIX::UnderlyingStipType UnderlyingStipType_148("STRING_371392519");
      noUnderlyingStips_1_1_1.set(UnderlyingStipType_148);
      UnderlyingStipulations_NoUnderlyingStips_148.insert(UnderlyingStipType_148.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_148("STRING_881969480");
      noUnderlyingStips_1_1_1.set(UnderlyingStipValue_148);
      UnderlyingStipulations_NoUnderlyingStips_148.insert(UnderlyingStipValue_148.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_148);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    {
      FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_149;
      FIX::UnderlyingStipType UnderlyingStipType_149("STRING_1355713241");
      noUnderlyingStips_1_1_2.set(UnderlyingStipType_149);
      UnderlyingStipulations_NoUnderlyingStips_149.insert(UnderlyingStipType_149.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_149("STRING_1453293755");
      noUnderlyingStips_1_1_2.set(UnderlyingStipValue_149);
      UnderlyingStipulations_NoUnderlyingStips_149.insert(UnderlyingStipValue_149.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_149);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_138;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_138("STRING_2049144907");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_138);
      UndlyInstrumentParties_NoUndlyInstrumentParties_138.insert(UnderlyingInstrumentPartyID_138.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_138('9');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_138);
      UndlyInstrumentParties_NoUndlyInstrumentParties_138.insert(UnderlyingInstrumentPartyIDSource_138.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_138(1547332688);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_138);
      UndlyInstrumentParties_NoUndlyInstrumentParties_138.insert(UnderlyingInstrumentPartyRole_138.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_138);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_277;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_277("STRING_1895612228");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_277);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_277.insert(UnderlyingInstrumentPartySubID_277.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_277(1121373237);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_277);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_277.insert(UnderlyingInstrumentPartySubIDType_277.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_277);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_278;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_278("STRING_752120015");
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubID_278);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_278.insert(UnderlyingInstrumentPartySubID_278.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_278(501412556);
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubIDType_278);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_278.insert(UnderlyingInstrumentPartySubIDType_278.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_278);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_139;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_139("STRING_254346038");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_139);
      UndlyInstrumentParties_NoUndlyInstrumentParties_139.insert(UnderlyingInstrumentPartyID_139.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_139('2');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_139);
      UndlyInstrumentParties_NoUndlyInstrumentParties_139.insert(UnderlyingInstrumentPartyIDSource_139.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_139(509983186);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_139);
      UndlyInstrumentParties_NoUndlyInstrumentParties_139.insert(UnderlyingInstrumentPartyRole_139.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_139);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_279;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_279("STRING_1978674839");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_279);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_279.insert(UnderlyingInstrumentPartySubID_279.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_279(1438522227);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_279);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_279.insert(UnderlyingInstrumentPartySubIDType_279.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_279);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_280;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_280("STRING_371955511");
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubID_280);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_280.insert(UnderlyingInstrumentPartySubID_280.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_280(368921026);
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubIDType_280);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_280.insert(UnderlyingInstrumentPartySubIDType_280.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_280);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    msg.addGroup(noUnderlyings_0_1);
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
