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
  multiset<string> MultilegOrderCancelReplace_0;
  FIX::Account Account_12("STRING_1937110998");
  msg.set(Account_12);
  MultilegOrderCancelReplace_0.insert(Account_12.getString());
  FIX::AccountType AccountType_11(2);
  msg.set(AccountType_11);
  MultilegOrderCancelReplace_0.insert(AccountType_11.getString());
  FIX::AcctIDSource AcctIDSource_5(1);
  msg.set(AcctIDSource_5);
  MultilegOrderCancelReplace_0.insert(AcctIDSource_5.getString());
  FIX::AllocID AllocID_9("STRING_795859386");
  msg.set(AllocID_9);
  MultilegOrderCancelReplace_0.insert(AllocID_9.getString());
  FIX::BookingType BookingType_16(0);
  msg.set(BookingType_16);
  MultilegOrderCancelReplace_0.insert(BookingType_16.getString());
  FIX::BookingUnit BookingUnit_2('0');
  msg.set(BookingUnit_2);
  MultilegOrderCancelReplace_0.insert(BookingUnit_2.getString());
  FIX::CancellationRights CancellationRights_2('Y');
  msg.set(CancellationRights_2);
  MultilegOrderCancelReplace_0.insert(CancellationRights_2.getString());
  FIX::CashMargin CashMargin_2('2');
  msg.set(CashMargin_2);
  MultilegOrderCancelReplace_0.insert(CashMargin_2.getString());
  FIX::ClOrdID ClOrdID_26("STRING_280545798");
  msg.set(ClOrdID_26);
  MultilegOrderCancelReplace_0.insert(ClOrdID_26.getString());
  FIX::ClOrdLinkID ClOrdLinkID_4("STRING_429683092");
  msg.set(ClOrdLinkID_4);
  MultilegOrderCancelReplace_0.insert(ClOrdLinkID_4.getString());
  FIX::ClearingFeeIndicator ClearingFeeIndicator_8("STRING_F");
  msg.set(ClearingFeeIndicator_8);
  MultilegOrderCancelReplace_0.insert(ClearingFeeIndicator_8.getString());
  FIX::ComplianceID ComplianceID_4("STRING_927373758");
  msg.set(ComplianceID_4);
  MultilegOrderCancelReplace_0.insert(ComplianceID_4.getString());
  FIX::CoveredOrUncovered CoveredOrUncovered_1(0);
  msg.set(CoveredOrUncovered_1);
  MultilegOrderCancelReplace_0.insert(CoveredOrUncovered_1.getString());
  FIX::Currency Currency_40("USD");
  msg.set(Currency_40);
  MultilegOrderCancelReplace_0.insert(Currency_40.getString());
  FIX::CustOrderCapacity CustOrderCapacity_5(1);
  msg.set(CustOrderCapacity_5);
  MultilegOrderCancelReplace_0.insert(CustOrderCapacity_5.getString());
  FIX::DayBookingInst DayBookingInst_2('2');
  msg.set(DayBookingInst_2);
  MultilegOrderCancelReplace_0.insert(DayBookingInst_2.getString());
  FIX::Designation Designation_2("STRING_301736526");
  msg.set(Designation_2);
  MultilegOrderCancelReplace_0.insert(Designation_2.getString());
  FIX::EffectiveTime EffectiveTime_2(FIX::UTCTIMESTAMP(7, 42, 17, 7, 7, 2015));
  msg.set(EffectiveTime_2);
  MultilegOrderCancelReplace_0.insert(EffectiveTime_2.getString());
  FIX::EncodedText EncodedText_50("DATA_1551637626");
  msg.set(EncodedText_50);
  MultilegOrderCancelReplace_0.insert(EncodedText_50.getString());
  FIX::EncodedTextLen EncodedTextLen_50(903128253);
  msg.set(EncodedTextLen_50);
  MultilegOrderCancelReplace_0.insert(EncodedTextLen_50.getString());
  FIX::ExDestination ExDestination_1("EXCHANGE_1184941470");
  msg.set(ExDestination_1);
  MultilegOrderCancelReplace_0.insert(ExDestination_1.getString());
  FIX::ExDestinationIDSource ExDestinationIDSource_1('C');
  msg.set(ExDestinationIDSource_1);
  MultilegOrderCancelReplace_0.insert(ExDestinationIDSource_1.getString());
  FIX::ExecInst ExecInst_4("MULTIPLECHARVALUE_b");
  msg.set(ExecInst_4);
  MultilegOrderCancelReplace_0.insert(ExecInst_4.getString());
  FIX::ExpireDate ExpireDate_5("LOCALMKTDATE_1223226568");
  msg.set(ExpireDate_5);
  MultilegOrderCancelReplace_0.insert(ExpireDate_5.getString());
  FIX::ExpireTime ExpireTime_6(FIX::UTCTIMESTAMP(13, 22, 59, 22, 4, 2008));
  msg.set(ExpireTime_6);
  MultilegOrderCancelReplace_0.insert(ExpireTime_6.getString());
  FIX::ForexReq ForexReq_2(true);
  msg.set(ForexReq_2);
  MultilegOrderCancelReplace_0.insert(ForexReq_2.getString());
  FIX::GTBookingInst GTBookingInst_2(0);
  msg.set(GTBookingInst_2);
  MultilegOrderCancelReplace_0.insert(GTBookingInst_2.getString());
  FIX::HandlInst HandlInst_2('1');
  msg.set(HandlInst_2);
  MultilegOrderCancelReplace_0.insert(HandlInst_2.getString());
  FIX::IOIID IOIID_2("STRING_138751587");
  msg.set(IOIID_2);
  MultilegOrderCancelReplace_0.insert(IOIID_2.getString());
  FIX::LocateReqd LocateReqd_1(true);
  msg.set(LocateReqd_1);
  MultilegOrderCancelReplace_0.insert(LocateReqd_1.getString());
  FIX::MatchIncrement MatchIncrement_2;
  MatchIncrement_2.setString("16095054");
  msg.set(MatchIncrement_2);
  MultilegOrderCancelReplace_0.insert(MatchIncrement_2.getString());
  FIX::MaxFloor MaxFloor_2;
  MaxFloor_2.setString("14603416");
  msg.set(MaxFloor_2);
  MultilegOrderCancelReplace_0.insert(MaxFloor_2.getString());
  FIX::MaxPriceLevels MaxPriceLevels_2(102630920);
  msg.set(MaxPriceLevels_2);
  MultilegOrderCancelReplace_0.insert(MaxPriceLevels_2.getString());
  FIX::MaxShow MaxShow_2;
  MaxShow_2.setString("15958597");
  msg.set(MaxShow_2);
  MultilegOrderCancelReplace_0.insert(MaxShow_2.getString());
  FIX::MinQty MinQty_4;
  MinQty_4.setString("10038057");
  msg.set(MinQty_4);
  MultilegOrderCancelReplace_0.insert(MinQty_4.getString());
  FIX::MoneyLaunderingStatus MoneyLaunderingStatus_2('N');
  msg.set(MoneyLaunderingStatus_2);
  MultilegOrderCancelReplace_0.insert(MoneyLaunderingStatus_2.getString());
  FIX::MultiLegRptTypeReq MultiLegRptTypeReq_0(0);
  msg.set(MultiLegRptTypeReq_0);
  MultilegOrderCancelReplace_0.insert(MultiLegRptTypeReq_0.getString());
  FIX::MultilegModel MultilegModel_5(2);
  msg.set(MultilegModel_5);
  MultilegOrderCancelReplace_0.insert(MultilegModel_5.getString());
  FIX::MultilegPriceMethod MultilegPriceMethod_5(2);
  msg.set(MultilegPriceMethod_5);
  MultilegOrderCancelReplace_0.insert(MultilegPriceMethod_5.getString());
  FIX::OrdType OrdType_31('B');
  msg.set(OrdType_31);
  MultilegOrderCancelReplace_0.insert(OrdType_31.getString());
  FIX::OrderCapacity OrderCapacity_18('R');
  msg.set(OrderCapacity_18);
  MultilegOrderCancelReplace_0.insert(OrderCapacity_18.getString());
  FIX::OrderID OrderID_27("STRING_649882831");
  msg.set(OrderID_27);
  MultilegOrderCancelReplace_0.insert(OrderID_27.getString());
  FIX::OrderRestrictions OrderRestrictions_16("MULTIPLECHARVALUE_C");
  msg.set(OrderRestrictions_16);
  MultilegOrderCancelReplace_0.insert(OrderRestrictions_16.getString());
  FIX::OrigClOrdID OrigClOrdID_4("STRING_1386006074");
  msg.set(OrigClOrdID_4);
  MultilegOrderCancelReplace_0.insert(OrigClOrdID_4.getString());
  FIX::OrigOrdModTime OrigOrdModTime_2(FIX::UTCTIMESTAMP(0, 57, 50, 16, 4, 2007));
  msg.set(OrigOrdModTime_2);
  MultilegOrderCancelReplace_0.insert(OrigOrdModTime_2.getString());
  FIX::ParticipationRate ParticipationRate_2;
  ParticipationRate_2.setString("31.070000");
  msg.set(ParticipationRate_2);
  MultilegOrderCancelReplace_0.insert(ParticipationRate_2.getString());
  FIX::PositionEffect PositionEffect_5('O');
  msg.set(PositionEffect_5);
  MultilegOrderCancelReplace_0.insert(PositionEffect_5.getString());
  FIX::PreTradeAnonymity PreTradeAnonymity_2(false);
  msg.set(PreTradeAnonymity_2);
  MultilegOrderCancelReplace_0.insert(PreTradeAnonymity_2.getString());
  FIX::PreallocMethod PreallocMethod_2('0');
  msg.set(PreallocMethod_2);
  MultilegOrderCancelReplace_0.insert(PreallocMethod_2.getString());
  FIX::PrevClosePx PrevClosePx_2;
  PrevClosePx_2.setString("11676000");
  msg.set(PrevClosePx_2);
  MultilegOrderCancelReplace_0.insert(PrevClosePx_2.getString());
  FIX::Price Price_11;
  Price_11.setString("14950846");
  msg.set(Price_11);
  MultilegOrderCancelReplace_0.insert(Price_11.getString());
  FIX::PriceProtectionScope PriceProtectionScope_2('3');
  msg.set(PriceProtectionScope_2);
  MultilegOrderCancelReplace_0.insert(PriceProtectionScope_2.getString());
  FIX::PriceType PriceType_21(17);
  msg.set(PriceType_21);
  MultilegOrderCancelReplace_0.insert(PriceType_21.getString());
  FIX::ProcessCode ProcessCode_8('2');
  msg.set(ProcessCode_8);
  MultilegOrderCancelReplace_0.insert(ProcessCode_8.getString());
  FIX::QtyType QtyType_14(1);
  msg.set(QtyType_14);
  MultilegOrderCancelReplace_0.insert(QtyType_14.getString());
  FIX::QuoteID QuoteID_3("STRING_1741410317");
  msg.set(QuoteID_3);
  MultilegOrderCancelReplace_0.insert(QuoteID_3.getString());
  FIX::RegistID RegistID_2("STRING_946694237");
  msg.set(RegistID_2);
  MultilegOrderCancelReplace_0.insert(RegistID_2.getString());
  FIX::RiskFreeRate RiskFreeRate_1;
  RiskFreeRate_1.setString("1932456");
  msg.set(RiskFreeRate_1);
  MultilegOrderCancelReplace_0.insert(RiskFreeRate_1.getString());
  FIX::SecondaryClOrdID SecondaryClOrdID_24("STRING_1189786436");
  msg.set(SecondaryClOrdID_24);
  MultilegOrderCancelReplace_0.insert(SecondaryClOrdID_24.getString());
  FIX::SettlCurrency SettlCurrency_11("CAN");
  msg.set(SettlCurrency_11);
  MultilegOrderCancelReplace_0.insert(SettlCurrency_11.getString());
  FIX::SettlDate SettlDate_29("LOCALMKTDATE_372693565");
  msg.set(SettlDate_29);
  MultilegOrderCancelReplace_0.insert(SettlDate_29.getString());
  FIX::SettlType SettlType_12("STRING_1");
  msg.set(SettlType_12);
  MultilegOrderCancelReplace_0.insert(SettlType_12.getString());
  FIX::Side Side_19('7');
  msg.set(Side_19);
  MultilegOrderCancelReplace_0.insert(Side_19.getString());
  FIX::SolicitedFlag SolicitedFlag_2(false);
  msg.set(SolicitedFlag_2);
  MultilegOrderCancelReplace_0.insert(SolicitedFlag_2.getString());
  FIX::StopPx StopPx_2;
  StopPx_2.setString("13726872");
  msg.set(StopPx_2);
  MultilegOrderCancelReplace_0.insert(StopPx_2.getString());
  FIX::SwapPoints SwapPoints_0;
  SwapPoints_0.setString("20465338");
  msg.set(SwapPoints_0);
  MultilegOrderCancelReplace_0.insert(SwapPoints_0.getString());
  FIX::TargetStrategy TargetStrategy_2(2);
  msg.set(TargetStrategy_2);
  MultilegOrderCancelReplace_0.insert(TargetStrategy_2.getString());
  FIX::TargetStrategyParameters TargetStrategyParameters_2("STRING_611209660");
  msg.set(TargetStrategyParameters_2);
  MultilegOrderCancelReplace_0.insert(TargetStrategyParameters_2.getString());
  FIX::Text Text_50("STRING_1452061265");
  msg.set(Text_50);
  MultilegOrderCancelReplace_0.insert(Text_50.getString());
  FIX::TimeInForce TimeInForce_16('6');
  msg.set(TimeInForce_16);
  MultilegOrderCancelReplace_0.insert(TimeInForce_16.getString());
  FIX::TradeDate TradeDate_16("LOCALMKTDATE_1572007237");
  msg.set(TradeDate_16);
  MultilegOrderCancelReplace_0.insert(TradeDate_16.getString());
  FIX::TradeOriginationDate TradeOriginationDate_8("LOCALMKTDATE_2093239435");
  msg.set(TradeOriginationDate_8);
  MultilegOrderCancelReplace_0.insert(TradeOriginationDate_8.getString());
  FIX::TransactTime TransactTime_37(FIX::UTCTIMESTAMP(4, 18, 16, 27, 5, 2004));
  msg.set(TransactTime_37);
  MultilegOrderCancelReplace_0.insert(TransactTime_37.getString());
  all_values.push_back(MultilegOrderCancelReplace_0);

  // CommissionData
  multiset<string> CommissionData_10;
  FIX::CommCurrency CommCurrency_10("JPY");
  msg.set(CommCurrency_10);
  CommissionData_10.insert(CommCurrency_10.getString());
  FIX::CommType CommType_10('4');
  msg.set(CommType_10);
  CommissionData_10.insert(CommType_10.getString());
  FIX::Commission Commission_10;
  Commission_10.setString("15347396");
  msg.set(Commission_10);
  CommissionData_10.insert(Commission_10.getString());
  FIX::FundRenewWaiv FundRenewWaiv_10('Y');
  msg.set(FundRenewWaiv_10);
  CommissionData_10.insert(FundRenewWaiv_10.getString());
  all_values.push_back(CommissionData_10);

  // DiscretionInstructions
  multiset<string> DiscretionInstructions_2;
  FIX::DiscretionInst DiscretionInst_2('1');
  msg.set(DiscretionInst_2);
  DiscretionInstructions_2.insert(DiscretionInst_2.getString());
  FIX::DiscretionLimitType DiscretionLimitType_2(1);
  msg.set(DiscretionLimitType_2);
  DiscretionInstructions_2.insert(DiscretionLimitType_2.getString());
  FIX::DiscretionMoveType DiscretionMoveType_2(0);
  msg.set(DiscretionMoveType_2);
  DiscretionInstructions_2.insert(DiscretionMoveType_2.getString());
  FIX::DiscretionOffsetType DiscretionOffsetType_2(0);
  msg.set(DiscretionOffsetType_2);
  DiscretionInstructions_2.insert(DiscretionOffsetType_2.getString());
  FIX::DiscretionOffsetValue DiscretionOffsetValue_2;
  DiscretionOffsetValue_2.setString("1709691");
  msg.set(DiscretionOffsetValue_2);
  DiscretionInstructions_2.insert(DiscretionOffsetValue_2.getString());
  FIX::DiscretionRoundDirection DiscretionRoundDirection_2(1);
  msg.set(DiscretionRoundDirection_2);
  DiscretionInstructions_2.insert(DiscretionRoundDirection_2.getString());
  FIX::DiscretionScope DiscretionScope_2(3);
  msg.set(DiscretionScope_2);
  DiscretionInstructions_2.insert(DiscretionScope_2.getString());
  all_values.push_back(DiscretionInstructions_2);

  // DisplayInstruction
  multiset<string> DisplayInstruction_2;
  FIX::DisplayHighQty DisplayHighQty_2;
  DisplayHighQty_2.setString("5436626");
  msg.set(DisplayHighQty_2);
  DisplayInstruction_2.insert(DisplayHighQty_2.getString());
  FIX::DisplayLowQty DisplayLowQty_2;
  DisplayLowQty_2.setString("6120837");
  msg.set(DisplayLowQty_2);
  DisplayInstruction_2.insert(DisplayLowQty_2.getString());
  FIX::DisplayMethod DisplayMethod_2('1');
  msg.set(DisplayMethod_2);
  DisplayInstruction_2.insert(DisplayMethod_2.getString());
  FIX::DisplayMinIncr DisplayMinIncr_2;
  DisplayMinIncr_2.setString("15954028");
  msg.set(DisplayMinIncr_2);
  DisplayInstruction_2.insert(DisplayMinIncr_2.getString());
  FIX::DisplayQty DisplayQty_2;
  DisplayQty_2.setString("19847709");
  msg.set(DisplayQty_2);
  DisplayInstruction_2.insert(DisplayQty_2.getString());
  FIX::DisplayWhen DisplayWhen_2('2');
  msg.set(DisplayWhen_2);
  DisplayInstruction_2.insert(DisplayWhen_2.getString());
  FIX::RefreshQty RefreshQty_2;
  RefreshQty_2.setString("10751637");
  msg.set(RefreshQty_2);
  DisplayInstruction_2.insert(RefreshQty_2.getString());
  FIX::SecondaryDisplayQty SecondaryDisplayQty_2;
  SecondaryDisplayQty_2.setString("4484969");
  msg.set(SecondaryDisplayQty_2);
  DisplayInstruction_2.insert(SecondaryDisplayQty_2.getString());
  all_values.push_back(DisplayInstruction_2);

  // Instrument
  multiset<string> Instrument_45;
  FIX::AttachmentPoint AttachmentPoint_45;
  AttachmentPoint_45.setString("51.940000");
  msg.set(AttachmentPoint_45);
  Instrument_45.insert(AttachmentPoint_45.getString());
  FIX::CFICode CFICode_45("STRING_167886763");
  msg.set(CFICode_45);
  Instrument_45.insert(CFICode_45.getString());
  FIX::CPProgram CPProgram_45(99);
  msg.set(CPProgram_45);
  Instrument_45.insert(CPProgram_45.getString());
  FIX::CPRegType CPRegType_45("STRING_256880982");
  msg.set(CPRegType_45);
  Instrument_45.insert(CPRegType_45.getString());
  FIX::CapPrice CapPrice_45;
  CapPrice_45.setString("967984");
  msg.set(CapPrice_45);
  Instrument_45.insert(CapPrice_45.getString());
  FIX::ContractMultiplier ContractMultiplier_45;
  ContractMultiplier_45.setString("17702442");
  msg.set(ContractMultiplier_45);
  Instrument_45.insert(ContractMultiplier_45.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_45(0);
  msg.set(ContractMultiplierUnit_45);
  Instrument_45.insert(ContractMultiplierUnit_45.getString());
  FIX::ContractSettlMonth ContractSettlMonth_45("MONTHYEAR_34593312");
  msg.set(ContractSettlMonth_45);
  Instrument_45.insert(ContractSettlMonth_45.getString());
  FIX::CountryOfIssue CountryOfIssue_45("COUNTRY_2005478943");
  msg.set(CountryOfIssue_45);
  Instrument_45.insert(CountryOfIssue_45.getString());
  FIX::CouponPaymentDate CouponPaymentDate_45("LOCALMKTDATE_2016187264");
  msg.set(CouponPaymentDate_45);
  Instrument_45.insert(CouponPaymentDate_45.getString());
  FIX::CouponRate CouponRate_45;
  CouponRate_45.setString("78.700000");
  msg.set(CouponRate_45);
  Instrument_45.insert(CouponRate_45.getString());
  FIX::CreditRating CreditRating_45("STRING_1260830057");
  msg.set(CreditRating_45);
  Instrument_45.insert(CreditRating_45.getString());
  FIX::DatedDate DatedDate_45("LOCALMKTDATE_853889112");
  msg.set(DatedDate_45);
  Instrument_45.insert(DatedDate_45.getString());
  FIX::DetachmentPoint DetachmentPoint_45;
  DetachmentPoint_45.setString("45.800000");
  msg.set(DetachmentPoint_45);
  Instrument_45.insert(DetachmentPoint_45.getString());
  FIX::EncodedIssuer EncodedIssuer_45("DATA_648086085");
  msg.set(EncodedIssuer_45);
  Instrument_45.insert(EncodedIssuer_45.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_45(1325427188);
  msg.set(EncodedIssuerLen_45);
  Instrument_45.insert(EncodedIssuerLen_45.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_45("DATA_125032325");
  msg.set(EncodedSecurityDesc_45);
  Instrument_45.insert(EncodedSecurityDesc_45.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_45(1776752431);
  msg.set(EncodedSecurityDescLen_45);
  Instrument_45.insert(EncodedSecurityDescLen_45.getString());
  FIX::ExerciseStyle ExerciseStyle_45(0);
  msg.set(ExerciseStyle_45);
  Instrument_45.insert(ExerciseStyle_45.getString());
  FIX::Factor Factor_45;
  Factor_45.setString("13857493");
  msg.set(Factor_45);
  Instrument_45.insert(Factor_45.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_45(true);
  msg.set(FlexProductEligibilityIndicator_45);
  Instrument_45.insert(FlexProductEligibilityIndicator_45.getString());
  FIX::FlexibleIndicator FlexibleIndicator_45(true);
  msg.set(FlexibleIndicator_45);
  Instrument_45.insert(FlexibleIndicator_45.getString());
  FIX::FloorPrice FloorPrice_45;
  FloorPrice_45.setString("10965957");
  msg.set(FloorPrice_45);
  Instrument_45.insert(FloorPrice_45.getString());
  FIX::FlowScheduleType FlowScheduleType_45(2);
  msg.set(FlowScheduleType_45);
  Instrument_45.insert(FlowScheduleType_45.getString());
  FIX::InstrRegistry InstrRegistry_45("STRING_282024565");
  msg.set(InstrRegistry_45);
  Instrument_45.insert(InstrRegistry_45.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_45('5');
  msg.set(InstrmtAssignmentMethod_45);
  Instrument_45.insert(InstrmtAssignmentMethod_45.getString());
  FIX::InterestAccrualDate InterestAccrualDate_45("LOCALMKTDATE_1939303508");
  msg.set(InterestAccrualDate_45);
  Instrument_45.insert(InterestAccrualDate_45.getString());
  FIX::IssueDate IssueDate_45("LOCALMKTDATE_119311900");
  msg.set(IssueDate_45);
  Instrument_45.insert(IssueDate_45.getString());
  FIX::Issuer Issuer_45("STRING_1063157044");
  msg.set(Issuer_45);
  Instrument_45.insert(Issuer_45.getString());
  FIX::ListMethod ListMethod_45(1);
  msg.set(ListMethod_45);
  Instrument_45.insert(ListMethod_45.getString());
  FIX::LocaleOfIssue LocaleOfIssue_45("STRING_567808894");
  msg.set(LocaleOfIssue_45);
  Instrument_45.insert(LocaleOfIssue_45.getString());
  FIX::MaturityDate MaturityDate_45("LOCALMKTDATE_1374282239");
  msg.set(MaturityDate_45);
  Instrument_45.insert(MaturityDate_45.getString());
  FIX::MaturityMonthYear MaturityMonthYear_45("MONTHYEAR_1034870378");
  msg.set(MaturityMonthYear_45);
  Instrument_45.insert(MaturityMonthYear_45.getString());
  FIX::MaturityTime MaturityTime_45("TZTIMEONLY_440829478");
  msg.set(MaturityTime_45);
  Instrument_45.insert(MaturityTime_45.getString());
  FIX::MinPriceIncrement MinPriceIncrement_45;
  MinPriceIncrement_45.setString("16311632");
  msg.set(MinPriceIncrement_45);
  Instrument_45.insert(MinPriceIncrement_45.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_45;
  MinPriceIncrementAmount_45.setString("11316688");
  msg.set(MinPriceIncrementAmount_45);
  Instrument_45.insert(MinPriceIncrementAmount_45.getString());
  FIX::NTPositionLimit NTPositionLimit_45(63590083);
  msg.set(NTPositionLimit_45);
  Instrument_45.insert(NTPositionLimit_45.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_45;
  NotionalPercentageOutstanding_45.setString("59.810000");
  msg.set(NotionalPercentageOutstanding_45);
  Instrument_45.insert(NotionalPercentageOutstanding_45.getString());
  FIX::OptAttribute OptAttribute_45('1');
  msg.set(OptAttribute_45);
  Instrument_45.insert(OptAttribute_45.getString());
  FIX::OptPayoutAmount OptPayoutAmount_45;
  OptPayoutAmount_45.setString("20690690");
  msg.set(OptPayoutAmount_45);
  Instrument_45.insert(OptPayoutAmount_45.getString());
  FIX::OptPayoutType OptPayoutType_45(3);
  msg.set(OptPayoutType_45);
  Instrument_45.insert(OptPayoutType_45.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_45;
  OriginalNotionalPercentageOutstanding_45.setString("0.460000");
  msg.set(OriginalNotionalPercentageOutstanding_45);
  Instrument_45.insert(OriginalNotionalPercentageOutstanding_45.getString());
  FIX::Pool Pool_45("STRING_1182415435");
  msg.set(Pool_45);
  Instrument_45.insert(Pool_45.getString());
  FIX::PositionLimit PositionLimit_45(584875062);
  msg.set(PositionLimit_45);
  Instrument_45.insert(PositionLimit_45.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_45("STRING_INT");
  msg.set(PriceQuoteMethod_45);
  Instrument_45.insert(PriceQuoteMethod_45.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_45("STRING_1830501521");
  msg.set(PriceUnitOfMeasure_45);
  Instrument_45.insert(PriceUnitOfMeasure_45.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_45;
  PriceUnitOfMeasureQty_45.setString("19103022");
  msg.set(PriceUnitOfMeasureQty_45);
  Instrument_45.insert(PriceUnitOfMeasureQty_45.getString());
  FIX::Product Product_47(6);
  msg.set(Product_47);
  Instrument_45.insert(Product_47.getString());
  FIX::ProductComplex ProductComplex_45("STRING_1459770304");
  msg.set(ProductComplex_45);
  Instrument_45.insert(ProductComplex_45.getString());
  FIX::PutOrCall PutOrCall_45(1);
  msg.set(PutOrCall_45);
  Instrument_45.insert(PutOrCall_45.getString());
  FIX::RedemptionDate RedemptionDate_45("LOCALMKTDATE_1962792624");
  msg.set(RedemptionDate_45);
  Instrument_45.insert(RedemptionDate_45.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_45("STRING_1260008222");
  msg.set(RepoCollateralSecurityType_45);
  Instrument_45.insert(RepoCollateralSecurityType_45.getString());
  FIX::RepurchaseRate RepurchaseRate_45;
  RepurchaseRate_45.setString("52.710000");
  msg.set(RepurchaseRate_45);
  Instrument_45.insert(RepurchaseRate_45.getString());
  FIX::RepurchaseTerm RepurchaseTerm_45(911904696);
  msg.set(RepurchaseTerm_45);
  Instrument_45.insert(RepurchaseTerm_45.getString());
  FIX::RestructuringType RestructuringType_45("STRING_FR");
  msg.set(RestructuringType_45);
  Instrument_45.insert(RestructuringType_45.getString());
  FIX::SecurityDesc SecurityDesc_45("STRING_310959837");
  msg.set(SecurityDesc_45);
  Instrument_45.insert(SecurityDesc_45.getString());
  FIX::SecurityExchange SecurityExchange_45("EXCHANGE_968514163");
  msg.set(SecurityExchange_45);
  Instrument_45.insert(SecurityExchange_45.getString());
  FIX::SecurityGroup SecurityGroup_45("STRING_1395728700");
  msg.set(SecurityGroup_45);
  Instrument_45.insert(SecurityGroup_45.getString());
  FIX::SecurityID SecurityID_45("STRING_430271737");
  msg.set(SecurityID_45);
  Instrument_45.insert(SecurityID_45.getString());
  FIX::SecurityIDSource SecurityIDSource_45("STRING_7");
  msg.set(SecurityIDSource_45);
  Instrument_45.insert(SecurityIDSource_45.getString());
  FIX::SecurityStatus SecurityStatus_45("STRING_2");
  msg.set(SecurityStatus_45);
  Instrument_45.insert(SecurityStatus_45.getString());
  FIX::SecuritySubType SecuritySubType_46("STRING_998080631");
  msg.set(SecuritySubType_46);
  Instrument_45.insert(SecuritySubType_46.getString());
  FIX::SecurityType SecurityType_47("STRING_EUSOV");
  msg.set(SecurityType_47);
  Instrument_45.insert(SecurityType_47.getString());
  FIX::Seniority Seniority_45("STRING_SR");
  msg.set(Seniority_45);
  Instrument_45.insert(Seniority_45.getString());
  FIX::SettlMethod SettlMethod_45('C');
  msg.set(SettlMethod_45);
  Instrument_45.insert(SettlMethod_45.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_45("STRING_742149372");
  msg.set(SettleOnOpenFlag_45);
  Instrument_45.insert(SettleOnOpenFlag_45.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_45("STRING_134284260");
  msg.set(StateOrProvinceOfIssue_45);
  Instrument_45.insert(StateOrProvinceOfIssue_45.getString());
  FIX::StrikeCurrency StrikeCurrency_45("CHF");
  msg.set(StrikeCurrency_45);
  Instrument_45.insert(StrikeCurrency_45.getString());
  FIX::StrikeMultiplier StrikeMultiplier_45;
  StrikeMultiplier_45.setString("13005464");
  msg.set(StrikeMultiplier_45);
  Instrument_45.insert(StrikeMultiplier_45.getString());
  FIX::StrikePrice StrikePrice_45;
  StrikePrice_45.setString("14240855");
  msg.set(StrikePrice_45);
  Instrument_45.insert(StrikePrice_45.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_45(1);
  msg.set(StrikePriceBoundaryMethod_45);
  Instrument_45.insert(StrikePriceBoundaryMethod_45.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_45;
  StrikePriceBoundaryPrecision_45.setString("28.340000");
  msg.set(StrikePriceBoundaryPrecision_45);
  Instrument_45.insert(StrikePriceBoundaryPrecision_45.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_45(4);
  msg.set(StrikePriceDeterminationMethod_45);
  Instrument_45.insert(StrikePriceDeterminationMethod_45.getString());
  FIX::StrikeValue StrikeValue_45;
  StrikeValue_45.setString("9202927");
  msg.set(StrikeValue_45);
  Instrument_45.insert(StrikeValue_45.getString());
  FIX::Symbol Symbol_45("STRING_999523812");
  msg.set(Symbol_45);
  Instrument_45.insert(Symbol_45.getString());
  FIX::SymbolSfx SymbolSfx_45("STRING_CD");
  msg.set(SymbolSfx_45);
  Instrument_45.insert(SymbolSfx_45.getString());
  FIX::TimeUnit TimeUnit_45("STRING_D");
  msg.set(TimeUnit_45);
  Instrument_45.insert(TimeUnit_45.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_45(4);
  msg.set(UnderlyingPriceDeterminationMethod_45);
  Instrument_45.insert(UnderlyingPriceDeterminationMethod_45.getString());
  FIX::UnitOfMeasure UnitOfMeasure_45("STRING_lbs");
  msg.set(UnitOfMeasure_45);
  Instrument_45.insert(UnitOfMeasure_45.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_45;
  UnitOfMeasureQty_45.setString("10421057");
  msg.set(UnitOfMeasureQty_45);
  Instrument_45.insert(UnitOfMeasureQty_45.getString());
  FIX::ValuationMethod ValuationMethod_45("STRING_FUT");
  msg.set(ValuationMethod_45);
  Instrument_45.insert(ValuationMethod_45.getString());
  all_values.push_back(Instrument_45);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::MultilegOrderCancelReplace::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_87;
    FIX::ComplexEventCondition ComplexEventCondition_87(2);
    noComplexEvents_0_0.set(ComplexEventCondition_87);
    ComplexEvents_NoComplexEvents_87.insert(ComplexEventCondition_87.getString());
    FIX::ComplexEventPrice ComplexEventPrice_87;
    ComplexEventPrice_87.setString("1562971");
    noComplexEvents_0_0.set(ComplexEventPrice_87);
    ComplexEvents_NoComplexEvents_87.insert(ComplexEventPrice_87.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_87(4);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_87);
    ComplexEvents_NoComplexEvents_87.insert(ComplexEventPriceBoundaryMethod_87.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_87;
    ComplexEventPriceBoundaryPrecision_87.setString("8.840000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_87);
    ComplexEvents_NoComplexEvents_87.insert(ComplexEventPriceBoundaryPrecision_87.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_87(1);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_87);
    ComplexEvents_NoComplexEvents_87.insert(ComplexEventPriceTimeType_87.getString());
    FIX::ComplexEventType ComplexEventType_87(2);
    noComplexEvents_0_0.set(ComplexEventType_87);
    ComplexEvents_NoComplexEvents_87.insert(ComplexEventType_87.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_87;
    ComplexOptPayoutAmount_87.setString("18122726");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_87);
    ComplexEvents_NoComplexEvents_87.insert(ComplexOptPayoutAmount_87.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_87);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::MultilegOrderCancelReplace::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_176;
      FIX::ComplexEventEndDate ComplexEventEndDate_176(FIX::UTCTIMESTAMP(20, 14, 47, 6, 3, 2012));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_176);
      ComplexEventDates_NoComplexEventDates_176.insert(ComplexEventEndDate_176.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_176(FIX::UTCTIMESTAMP(11, 44, 3, 11, 7, 2016));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_176);
      ComplexEventDates_NoComplexEventDates_176.insert(ComplexEventStartDate_176.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_176);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::MultilegOrderCancelReplace::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_352;
        FIX::ComplexEventEndTime ComplexEventEndTime_352(FIX::UTCTIMEONLY(14, 57, 9));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_352);
        ComplexEventTimes_NoComplexEventTimes_352.insert(ComplexEventEndTime_352.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_352(FIX::UTCTIMEONLY(1, 52, 53));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_352);
        ComplexEventTimes_NoComplexEventTimes_352.insert(ComplexEventStartTime_352.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_352);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_353;
        FIX::ComplexEventEndTime ComplexEventEndTime_353(FIX::UTCTIMEONLY(12, 36, 28));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_353);
        ComplexEventTimes_NoComplexEventTimes_353.insert(ComplexEventEndTime_353.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_353(FIX::UTCTIMEONLY(23, 1, 50));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_353);
        ComplexEventTimes_NoComplexEventTimes_353.insert(ComplexEventStartTime_353.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_353);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_354;
        FIX::ComplexEventEndTime ComplexEventEndTime_354(FIX::UTCTIMEONLY(21, 4, 21));
        noComplexEventTimes_0_0_2_2.set(ComplexEventEndTime_354);
        ComplexEventTimes_NoComplexEventTimes_354.insert(ComplexEventEndTime_354.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_354(FIX::UTCTIMEONLY(18, 9, 3));
        noComplexEventTimes_0_0_2_2.set(ComplexEventStartTime_354);
        ComplexEventTimes_NoComplexEventTimes_354.insert(ComplexEventStartTime_354.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_354);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_177;
      FIX::ComplexEventEndDate ComplexEventEndDate_177(FIX::UTCTIMESTAMP(21, 6, 52, 11, 5, 2009));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_177);
      ComplexEventDates_NoComplexEventDates_177.insert(ComplexEventEndDate_177.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_177(FIX::UTCTIMESTAMP(22, 7, 50, 25, 1, 2012));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_177);
      ComplexEventDates_NoComplexEventDates_177.insert(ComplexEventStartDate_177.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_177);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::MultilegOrderCancelReplace::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_355;
        FIX::ComplexEventEndTime ComplexEventEndTime_355(FIX::UTCTIMEONLY(6, 51, 24));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_355);
        ComplexEventTimes_NoComplexEventTimes_355.insert(ComplexEventEndTime_355.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_355(FIX::UTCTIMEONLY(14, 25, 51));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_355);
        ComplexEventTimes_NoComplexEventTimes_355.insert(ComplexEventStartTime_355.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_355);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_356;
        FIX::ComplexEventEndTime ComplexEventEndTime_356(FIX::UTCTIMEONLY(14, 55, 49));
        noComplexEventTimes_0_1_2_1.set(ComplexEventEndTime_356);
        ComplexEventTimes_NoComplexEventTimes_356.insert(ComplexEventEndTime_356.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_356(FIX::UTCTIMEONLY(5, 50, 38));
        noComplexEventTimes_0_1_2_1.set(ComplexEventStartTime_356);
        ComplexEventTimes_NoComplexEventTimes_356.insert(ComplexEventStartTime_356.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_356);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::MultilegOrderCancelReplace::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_92;
    FIX::EventDate EventDate_92("LOCALMKTDATE_1653540147");
    noEvents_0_0.set(EventDate_92);
    EvntGrp_NoEvents_92.insert(EventDate_92.getString());
    FIX::EventPx EventPx_92;
    EventPx_92.setString("21431786");
    noEvents_0_0.set(EventPx_92);
    EvntGrp_NoEvents_92.insert(EventPx_92.getString());
    FIX::EventText EventText_92("STRING_1544496763");
    noEvents_0_0.set(EventText_92);
    EvntGrp_NoEvents_92.insert(EventText_92.getString());
    FIX::EventTime EventTime_92(FIX::UTCTIMESTAMP(5, 45, 15, 11, 9, 2003));
    noEvents_0_0.set(EventTime_92);
    EvntGrp_NoEvents_92.insert(EventTime_92.getString());
    FIX::EventType EventType_92(1);
    noEvents_0_0.set(EventType_92);
    EvntGrp_NoEvents_92.insert(EventType_92.getString());
    all_values.push_back(EvntGrp_NoEvents_92);

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::MultilegOrderCancelReplace::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_96;
    FIX::InstrumentPartyID InstrumentPartyID_96("STRING_1601148039");
    noInstrumentParties_0_0.set(InstrumentPartyID_96);
    InstrumentParties_NoInstrumentParties_96.insert(InstrumentPartyID_96.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_96('2');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_96);
    InstrumentParties_NoInstrumentParties_96.insert(InstrumentPartyIDSource_96.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_96(1718118784);
    noInstrumentParties_0_0.set(InstrumentPartyRole_96);
    InstrumentParties_NoInstrumentParties_96.insert(InstrumentPartyRole_96.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_96);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::MultilegOrderCancelReplace::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_204;
      FIX::InstrumentPartySubID InstrumentPartySubID_204("STRING_780870906");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_204);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_204.insert(InstrumentPartySubID_204.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_204(1380539840);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_204);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_204.insert(InstrumentPartySubIDType_204.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_204);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_205;
      FIX::InstrumentPartySubID InstrumentPartySubID_205("STRING_1445683047");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_205);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_205.insert(InstrumentPartySubID_205.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_205(559144560);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_205);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_205.insert(InstrumentPartySubIDType_205.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_205);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_206;
      FIX::InstrumentPartySubID InstrumentPartySubID_206("STRING_1165834417");
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubID_206);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_206.insert(InstrumentPartySubID_206.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_206(291926291);
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubIDType_206);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_206.insert(InstrumentPartySubIDType_206.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_206);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::MultilegOrderCancelReplace::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_97;
    FIX::InstrumentPartyID InstrumentPartyID_97("STRING_964505668");
    noInstrumentParties_0_1.set(InstrumentPartyID_97);
    InstrumentParties_NoInstrumentParties_97.insert(InstrumentPartyID_97.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_97('1');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_97);
    InstrumentParties_NoInstrumentParties_97.insert(InstrumentPartyIDSource_97.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_97(1740449526);
    noInstrumentParties_0_1.set(InstrumentPartyRole_97);
    InstrumentParties_NoInstrumentParties_97.insert(InstrumentPartyRole_97.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_97);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::MultilegOrderCancelReplace::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_207;
      FIX::InstrumentPartySubID InstrumentPartySubID_207("STRING_900465366");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_207);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_207.insert(InstrumentPartySubID_207.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_207(210936196);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_207);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_207.insert(InstrumentPartySubIDType_207.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_207);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::MultilegOrderCancelReplace::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_98;
    FIX::InstrumentPartyID InstrumentPartyID_98("STRING_85635831");
    noInstrumentParties_0_2.set(InstrumentPartyID_98);
    InstrumentParties_NoInstrumentParties_98.insert(InstrumentPartyID_98.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_98('1');
    noInstrumentParties_0_2.set(InstrumentPartyIDSource_98);
    InstrumentParties_NoInstrumentParties_98.insert(InstrumentPartyIDSource_98.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_98(1464919687);
    noInstrumentParties_0_2.set(InstrumentPartyRole_98);
    InstrumentParties_NoInstrumentParties_98.insert(InstrumentPartyRole_98.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_98);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::MultilegOrderCancelReplace::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_208;
      FIX::InstrumentPartySubID InstrumentPartySubID_208("STRING_109105452");
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubID_208);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_208.insert(InstrumentPartySubID_208.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_208(861932802);
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubIDType_208);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_208.insert(InstrumentPartySubIDType_208.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_208);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::MultilegOrderCancelReplace::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_99;
    FIX::SecurityAltID SecurityAltID_99("STRING_2079966017");
    noSecurityAltID_0_0.set(SecurityAltID_99);
    SecAltIDGrp_NoSecurityAltID_99.insert(SecurityAltID_99.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_99("STRING_1124252007");
    noSecurityAltID_0_0.set(SecurityAltIDSource_99);
    SecAltIDGrp_NoSecurityAltID_99.insert(SecurityAltIDSource_99.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_99);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::MultilegOrderCancelReplace::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_100;
    FIX::SecurityAltID SecurityAltID_100("STRING_1542738891");
    noSecurityAltID_0_1.set(SecurityAltID_100);
    SecAltIDGrp_NoSecurityAltID_100.insert(SecurityAltID_100.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_100("STRING_917991941");
    noSecurityAltID_0_1.set(SecurityAltIDSource_100);
    SecAltIDGrp_NoSecurityAltID_100.insert(SecurityAltIDSource_100.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_100);

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::MultilegOrderCancelReplace::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_101;
    FIX::SecurityAltID SecurityAltID_101("STRING_1362297791");
    noSecurityAltID_0_2.set(SecurityAltID_101);
    SecAltIDGrp_NoSecurityAltID_101.insert(SecurityAltID_101.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_101("STRING_11785000");
    noSecurityAltID_0_2.set(SecurityAltIDSource_101);
    SecAltIDGrp_NoSecurityAltID_101.insert(SecurityAltIDSource_101.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_101);

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_90;
  FIX::SecurityXML SecurityXML_91("XMLDATA_1706923181");
  msg.set(SecurityXML_91);
  FIX::SecurityXMLLen SecurityXMLLen_45(1728596419);
  msg.set(SecurityXMLLen_45);
  FIX::SecurityXMLSchema SecurityXMLSchema_45("STRING_1612933040");
  msg.set(SecurityXMLSchema_45);
  SecurityXML_90.insert(SecurityXMLSchema_45.getString());
  all_values.push_back(SecurityXML_90);

  // LegOrdGrp
  // Group LegOrdGrp.NoLegs
  {
    FIX50SP2::MultilegOrderCancelReplace::NoLegs noLegs_0_0;
    // LegOrdGrp.NoLegs
    multiset<string> LegOrdGrp_NoLegs_0;
    FIX::LegAllocID LegAllocID_3("STRING_1299231555");
    noLegs_0_0.set(LegAllocID_3);
    LegOrdGrp_NoLegs_0.insert(LegAllocID_3.getString());
    FIX::LegCoveredOrUncovered LegCoveredOrUncovered_3(252216878);
    noLegs_0_0.set(LegCoveredOrUncovered_3);
    LegOrdGrp_NoLegs_0.insert(LegCoveredOrUncovered_3.getString());
    FIX::LegCurrencyRatio LegCurrencyRatio_3;
    LegCurrencyRatio_3.setString("2882824");
    noLegs_0_0.set(LegCurrencyRatio_3);
    LegOrdGrp_NoLegs_0.insert(LegCurrencyRatio_3.getString());
    FIX::LegDividendYield LegDividendYield_3;
    LegDividendYield_3.setString("77.470000");
    noLegs_0_0.set(LegDividendYield_3);
    LegOrdGrp_NoLegs_0.insert(LegDividendYield_3.getString());
    FIX::LegExecInst LegExecInst_3("MULTIPLECHARVALUE_1697899925");
    noLegs_0_0.set(LegExecInst_3);
    LegOrdGrp_NoLegs_0.insert(LegExecInst_3.getString());
    FIX::LegOrderQty LegOrderQty_3;
    LegOrderQty_3.setString("8474270");
    noLegs_0_0.set(LegOrderQty_3);
    LegOrdGrp_NoLegs_0.insert(LegOrderQty_3.getString());
    FIX::LegPositionEffect LegPositionEffect_3('1');
    noLegs_0_0.set(LegPositionEffect_3);
    LegOrdGrp_NoLegs_0.insert(LegPositionEffect_3.getString());
    FIX::LegQty LegQty_3;
    LegQty_3.setString("19898262");
    noLegs_0_0.set(LegQty_3);
    LegOrdGrp_NoLegs_0.insert(LegQty_3.getString());
    FIX::LegRefID LegRefID_3("STRING_1811932703");
    noLegs_0_0.set(LegRefID_3);
    LegOrdGrp_NoLegs_0.insert(LegRefID_3.getString());
    FIX::LegSettlCurrency LegSettlCurrency_3("CHF");
    noLegs_0_0.set(LegSettlCurrency_3);
    LegOrdGrp_NoLegs_0.insert(LegSettlCurrency_3.getString());
    FIX::LegSettlDate LegSettlDate_3("LOCALMKTDATE_198247705");
    noLegs_0_0.set(LegSettlDate_3);
    LegOrdGrp_NoLegs_0.insert(LegSettlDate_3.getString());
    FIX::LegSettlType LegSettlType_3('4');
    noLegs_0_0.set(LegSettlType_3);
    LegOrdGrp_NoLegs_0.insert(LegSettlType_3.getString());
    FIX::LegSwapType LegSwapType_3(5);
    noLegs_0_0.set(LegSwapType_3);
    LegOrdGrp_NoLegs_0.insert(LegSwapType_3.getString());
    FIX::LegVolatility LegVolatility_3;
    LegVolatility_3.setString("2838835");
    noLegs_0_0.set(LegVolatility_3);
    LegOrdGrp_NoLegs_0.insert(LegVolatility_3.getString());
    all_values.push_back(LegOrdGrp_NoLegs_0);

    // InstrumentLeg
    multiset<string> InstrumentLeg_80;
    FIX::EncodedLegIssuer EncodedLegIssuer_80("DATA_153902770");
    noLegs_0_0.set(EncodedLegIssuer_80);
    InstrumentLeg_80.insert(EncodedLegIssuer_80.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_80(1111164330);
    noLegs_0_0.set(EncodedLegIssuerLen_80);
    InstrumentLeg_80.insert(EncodedLegIssuerLen_80.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_80("DATA_2023059515");
    noLegs_0_0.set(EncodedLegSecurityDesc_80);
    InstrumentLeg_80.insert(EncodedLegSecurityDesc_80.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_80(263008222);
    noLegs_0_0.set(EncodedLegSecurityDescLen_80);
    InstrumentLeg_80.insert(EncodedLegSecurityDescLen_80.getString());
    FIX::LegCFICode LegCFICode_80("STRING_1973097132");
    noLegs_0_0.set(LegCFICode_80);
    InstrumentLeg_80.insert(LegCFICode_80.getString());
    FIX::LegContractMultiplier LegContractMultiplier_80;
    LegContractMultiplier_80.setString("15942156");
    noLegs_0_0.set(LegContractMultiplier_80);
    InstrumentLeg_80.insert(LegContractMultiplier_80.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_80(195490592);
    noLegs_0_0.set(LegContractMultiplierUnit_80);
    InstrumentLeg_80.insert(LegContractMultiplierUnit_80.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_80("MONTHYEAR_949865492");
    noLegs_0_0.set(LegContractSettlMonth_80);
    InstrumentLeg_80.insert(LegContractSettlMonth_80.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_80("COUNTRY_989470855");
    noLegs_0_0.set(LegCountryOfIssue_80);
    InstrumentLeg_80.insert(LegCountryOfIssue_80.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_80("LOCALMKTDATE_1113482533");
    noLegs_0_0.set(LegCouponPaymentDate_80);
    InstrumentLeg_80.insert(LegCouponPaymentDate_80.getString());
    FIX::LegCouponRate LegCouponRate_80;
    LegCouponRate_80.setString("96.350000");
    noLegs_0_0.set(LegCouponRate_80);
    InstrumentLeg_80.insert(LegCouponRate_80.getString());
    FIX::LegCreditRating LegCreditRating_80("STRING_1001255855");
    noLegs_0_0.set(LegCreditRating_80);
    InstrumentLeg_80.insert(LegCreditRating_80.getString());
    FIX::LegCurrency LegCurrency_80("EUR");
    noLegs_0_0.set(LegCurrency_80);
    InstrumentLeg_80.insert(LegCurrency_80.getString());
    FIX::LegDatedDate LegDatedDate_80("LOCALMKTDATE_466705247");
    noLegs_0_0.set(LegDatedDate_80);
    InstrumentLeg_80.insert(LegDatedDate_80.getString());
    FIX::LegExerciseStyle LegExerciseStyle_80(180333635);
    noLegs_0_0.set(LegExerciseStyle_80);
    InstrumentLeg_80.insert(LegExerciseStyle_80.getString());
    FIX::LegFactor LegFactor_80;
    LegFactor_80.setString("10450239");
    noLegs_0_0.set(LegFactor_80);
    InstrumentLeg_80.insert(LegFactor_80.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_80(718922125);
    noLegs_0_0.set(LegFlowScheduleType_80);
    InstrumentLeg_80.insert(LegFlowScheduleType_80.getString());
    FIX::LegInstrRegistry LegInstrRegistry_80("STRING_468616109");
    noLegs_0_0.set(LegInstrRegistry_80);
    InstrumentLeg_80.insert(LegInstrRegistry_80.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_80("LOCALMKTDATE_1577311710");
    noLegs_0_0.set(LegInterestAccrualDate_80);
    InstrumentLeg_80.insert(LegInterestAccrualDate_80.getString());
    FIX::LegIssueDate LegIssueDate_80("LOCALMKTDATE_269338403");
    noLegs_0_0.set(LegIssueDate_80);
    InstrumentLeg_80.insert(LegIssueDate_80.getString());
    FIX::LegIssuer LegIssuer_80("STRING_1316043144");
    noLegs_0_0.set(LegIssuer_80);
    InstrumentLeg_80.insert(LegIssuer_80.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_80("STRING_1127950226");
    noLegs_0_0.set(LegLocaleOfIssue_80);
    InstrumentLeg_80.insert(LegLocaleOfIssue_80.getString());
    FIX::LegMaturityDate LegMaturityDate_80("LOCALMKTDATE_111680971");
    noLegs_0_0.set(LegMaturityDate_80);
    InstrumentLeg_80.insert(LegMaturityDate_80.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_80("MONTHYEAR_980492200");
    noLegs_0_0.set(LegMaturityMonthYear_80);
    InstrumentLeg_80.insert(LegMaturityMonthYear_80.getString());
    FIX::LegMaturityTime LegMaturityTime_80("TZTIMEONLY_267977214");
    noLegs_0_0.set(LegMaturityTime_80);
    InstrumentLeg_80.insert(LegMaturityTime_80.getString());
    FIX::LegOptAttribute LegOptAttribute_80('1');
    noLegs_0_0.set(LegOptAttribute_80);
    InstrumentLeg_80.insert(LegOptAttribute_80.getString());
    FIX::LegOptionRatio LegOptionRatio_80;
    LegOptionRatio_80.setString("11787399");
    noLegs_0_0.set(LegOptionRatio_80);
    InstrumentLeg_80.insert(LegOptionRatio_80.getString());
    FIX::LegPool LegPool_80("STRING_308469568");
    noLegs_0_0.set(LegPool_80);
    InstrumentLeg_80.insert(LegPool_80.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_80("STRING_1340717709");
    noLegs_0_0.set(LegPriceUnitOfMeasure_80);
    InstrumentLeg_80.insert(LegPriceUnitOfMeasure_80.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_80;
    LegPriceUnitOfMeasureQty_80.setString("14626234");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_80);
    InstrumentLeg_80.insert(LegPriceUnitOfMeasureQty_80.getString());
    FIX::LegProduct LegProduct_80(462372338);
    noLegs_0_0.set(LegProduct_80);
    InstrumentLeg_80.insert(LegProduct_80.getString());
    FIX::LegPutOrCall LegPutOrCall_80(304398391);
    noLegs_0_0.set(LegPutOrCall_80);
    InstrumentLeg_80.insert(LegPutOrCall_80.getString());
    FIX::LegRatioQty LegRatioQty_80;
    LegRatioQty_80.setString("13381993");
    noLegs_0_0.set(LegRatioQty_80);
    InstrumentLeg_80.insert(LegRatioQty_80.getString());
    FIX::LegRedemptionDate LegRedemptionDate_80("LOCALMKTDATE_725380561");
    noLegs_0_0.set(LegRedemptionDate_80);
    InstrumentLeg_80.insert(LegRedemptionDate_80.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_80("STRING_130011876");
    noLegs_0_0.set(LegRepoCollateralSecurityType_80);
    InstrumentLeg_80.insert(LegRepoCollateralSecurityType_80.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_80;
    LegRepurchaseRate_80.setString("12.720000");
    noLegs_0_0.set(LegRepurchaseRate_80);
    InstrumentLeg_80.insert(LegRepurchaseRate_80.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_80(920871153);
    noLegs_0_0.set(LegRepurchaseTerm_80);
    InstrumentLeg_80.insert(LegRepurchaseTerm_80.getString());
    FIX::LegSecurityDesc LegSecurityDesc_80("STRING_1079877368");
    noLegs_0_0.set(LegSecurityDesc_80);
    InstrumentLeg_80.insert(LegSecurityDesc_80.getString());
    FIX::LegSecurityExchange LegSecurityExchange_80("EXCHANGE_1774402127");
    noLegs_0_0.set(LegSecurityExchange_80);
    InstrumentLeg_80.insert(LegSecurityExchange_80.getString());
    FIX::LegSecurityID LegSecurityID_80("STRING_2034353686");
    noLegs_0_0.set(LegSecurityID_80);
    InstrumentLeg_80.insert(LegSecurityID_80.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_80("STRING_1244557003");
    noLegs_0_0.set(LegSecurityIDSource_80);
    InstrumentLeg_80.insert(LegSecurityIDSource_80.getString());
    FIX::LegSecuritySubType LegSecuritySubType_80("STRING_628174334");
    noLegs_0_0.set(LegSecuritySubType_80);
    InstrumentLeg_80.insert(LegSecuritySubType_80.getString());
    FIX::LegSecurityType LegSecurityType_80("STRING_559792104");
    noLegs_0_0.set(LegSecurityType_80);
    InstrumentLeg_80.insert(LegSecurityType_80.getString());
    FIX::LegSide LegSide_80('9');
    noLegs_0_0.set(LegSide_80);
    InstrumentLeg_80.insert(LegSide_80.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_80("STRING_1094879582");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_80);
    InstrumentLeg_80.insert(LegStateOrProvinceOfIssue_80.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_80("CHF");
    noLegs_0_0.set(LegStrikeCurrency_80);
    InstrumentLeg_80.insert(LegStrikeCurrency_80.getString());
    FIX::LegStrikePrice LegStrikePrice_80;
    LegStrikePrice_80.setString("18138017");
    noLegs_0_0.set(LegStrikePrice_80);
    InstrumentLeg_80.insert(LegStrikePrice_80.getString());
    FIX::LegSymbol LegSymbol_80("STRING_1208741849");
    noLegs_0_0.set(LegSymbol_80);
    InstrumentLeg_80.insert(LegSymbol_80.getString());
    FIX::LegSymbolSfx LegSymbolSfx_80("STRING_1465201435");
    noLegs_0_0.set(LegSymbolSfx_80);
    InstrumentLeg_80.insert(LegSymbolSfx_80.getString());
    FIX::LegTimeUnit LegTimeUnit_80("STRING_2083140110");
    noLegs_0_0.set(LegTimeUnit_80);
    InstrumentLeg_80.insert(LegTimeUnit_80.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_80("STRING_377301345");
    noLegs_0_0.set(LegUnitOfMeasure_80);
    InstrumentLeg_80.insert(LegUnitOfMeasure_80.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_80;
    LegUnitOfMeasureQty_80.setString("4456680");
    noLegs_0_0.set(LegUnitOfMeasureQty_80);
    InstrumentLeg_80.insert(LegUnitOfMeasureQty_80.getString());
    all_values.push_back(InstrumentLeg_80);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_157;
      FIX::LegSecurityAltID LegSecurityAltID_157("STRING_1357793545");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_157);
      LegSecAltIDGrp_NoLegSecurityAltID_157.insert(LegSecurityAltID_157.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_157("STRING_713645228");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_157);
      LegSecAltIDGrp_NoLegSecurityAltID_157.insert(LegSecurityAltIDSource_157.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_157);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_158;
      FIX::LegSecurityAltID LegSecurityAltID_158("STRING_1741810500");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_158);
      LegSecAltIDGrp_NoLegSecurityAltID_158.insert(LegSecurityAltID_158.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_158("STRING_389049802");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_158);
      LegSecAltIDGrp_NoLegSecurityAltID_158.insert(LegSecurityAltIDSource_158.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_158);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_159;
      FIX::LegSecurityAltID LegSecurityAltID_159("STRING_1022114796");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltID_159);
      LegSecAltIDGrp_NoLegSecurityAltID_159.insert(LegSecurityAltID_159.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_159("STRING_935044562");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltIDSource_159);
      LegSecAltIDGrp_NoLegSecurityAltID_159.insert(LegSecurityAltIDSource_159.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_159);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_2);
    }
    // LegPreAllocGrp
    // Group LegPreAllocGrp.NoLegAllocs
    {
      FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs noLegAllocs_0_1_0;
      // LegPreAllocGrp.NoLegAllocs
      multiset<string> LegPreAllocGrp_NoLegAllocs_8;
      FIX::LegAllocAccount LegAllocAccount_8("STRING_1484487135");
      noLegAllocs_0_1_0.set(LegAllocAccount_8);
      LegPreAllocGrp_NoLegAllocs_8.insert(LegAllocAccount_8.getString());
      FIX::LegAllocAcctIDSource LegAllocAcctIDSource_8("STRING_1239442953");
      noLegAllocs_0_1_0.set(LegAllocAcctIDSource_8);
      LegPreAllocGrp_NoLegAllocs_8.insert(LegAllocAcctIDSource_8.getString());
      FIX::LegAllocQty LegAllocQty_8;
      LegAllocQty_8.setString("10423889");
      noLegAllocs_0_1_0.set(LegAllocQty_8);
      LegPreAllocGrp_NoLegAllocs_8.insert(LegAllocQty_8.getString());
      FIX::LegAllocSettlCurrency LegAllocSettlCurrency_8("CHF");
      noLegAllocs_0_1_0.set(LegAllocSettlCurrency_8);
      LegPreAllocGrp_NoLegAllocs_8.insert(LegAllocSettlCurrency_8.getString());
      FIX::LegIndividualAllocID LegIndividualAllocID_8("STRING_1827320176");
      noLegAllocs_0_1_0.set(LegIndividualAllocID_8);
      LegPreAllocGrp_NoLegAllocs_8.insert(LegIndividualAllocID_8.getString());
      all_values.push_back(LegPreAllocGrp_NoLegAllocs_8);

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_0_0_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_41;
        FIX::Nested2PartyID Nested2PartyID_41("STRING_301848549");
        noNested2PartyIDs_0_0_2_0.set(Nested2PartyID_41);
        NestedParties2_NoNested2PartyIDs_41.insert(Nested2PartyID_41.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_41('1');
        noNested2PartyIDs_0_0_2_0.set(Nested2PartyIDSource_41);
        NestedParties2_NoNested2PartyIDs_41.insert(Nested2PartyIDSource_41.getString());
        FIX::Nested2PartyRole Nested2PartyRole_41(870125239);
        noNested2PartyIDs_0_0_2_0.set(Nested2PartyRole_41);
        NestedParties2_NoNested2PartyIDs_41.insert(Nested2PartyRole_41.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_41);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_78;
          FIX::Nested2PartySubID Nested2PartySubID_78("STRING_2082412990");
          noNested2PartySubIDs_0_0_0_3_0.set(Nested2PartySubID_78);
          NstdPtys2SubGrp_NoNested2PartySubIDs_78.insert(Nested2PartySubID_78.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_78(1429917343);
          noNested2PartySubIDs_0_0_0_3_0.set(Nested2PartySubIDType_78);
          NstdPtys2SubGrp_NoNested2PartySubIDs_78.insert(Nested2PartySubIDType_78.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_78);

          noNested2PartyIDs_0_0_2_0.addGroup(noNested2PartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_0_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_79;
          FIX::Nested2PartySubID Nested2PartySubID_79("STRING_389271315");
          noNested2PartySubIDs_0_0_0_3_1.set(Nested2PartySubID_79);
          NstdPtys2SubGrp_NoNested2PartySubIDs_79.insert(Nested2PartySubID_79.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_79(1029808924);
          noNested2PartySubIDs_0_0_0_3_1.set(Nested2PartySubIDType_79);
          NstdPtys2SubGrp_NoNested2PartySubIDs_79.insert(Nested2PartySubIDType_79.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_79);

          noNested2PartyIDs_0_0_2_0.addGroup(noNested2PartySubIDs_0_0_0_3_1);
        }
        {
          FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_0_3_2;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_80;
          FIX::Nested2PartySubID Nested2PartySubID_80("STRING_22559435");
          noNested2PartySubIDs_0_0_0_3_2.set(Nested2PartySubID_80);
          NstdPtys2SubGrp_NoNested2PartySubIDs_80.insert(Nested2PartySubID_80.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_80(277161040);
          noNested2PartySubIDs_0_0_0_3_2.set(Nested2PartySubIDType_80);
          NstdPtys2SubGrp_NoNested2PartySubIDs_80.insert(Nested2PartySubIDType_80.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_80);

          noNested2PartyIDs_0_0_2_0.addGroup(noNested2PartySubIDs_0_0_0_3_2);
        }
        noLegAllocs_0_1_0.addGroup(noNested2PartyIDs_0_0_2_0);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_0_0_2_1;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_42;
        FIX::Nested2PartyID Nested2PartyID_42("STRING_696126983");
        noNested2PartyIDs_0_0_2_1.set(Nested2PartyID_42);
        NestedParties2_NoNested2PartyIDs_42.insert(Nested2PartyID_42.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_42('1');
        noNested2PartyIDs_0_0_2_1.set(Nested2PartyIDSource_42);
        NestedParties2_NoNested2PartyIDs_42.insert(Nested2PartyIDSource_42.getString());
        FIX::Nested2PartyRole Nested2PartyRole_42(1742362475);
        noNested2PartyIDs_0_0_2_1.set(Nested2PartyRole_42);
        NestedParties2_NoNested2PartyIDs_42.insert(Nested2PartyRole_42.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_42);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_1_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_81;
          FIX::Nested2PartySubID Nested2PartySubID_81("STRING_1608602629");
          noNested2PartySubIDs_0_0_1_3_0.set(Nested2PartySubID_81);
          NstdPtys2SubGrp_NoNested2PartySubIDs_81.insert(Nested2PartySubID_81.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_81(40546841);
          noNested2PartySubIDs_0_0_1_3_0.set(Nested2PartySubIDType_81);
          NstdPtys2SubGrp_NoNested2PartySubIDs_81.insert(Nested2PartySubIDType_81.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_81);

          noNested2PartyIDs_0_0_2_1.addGroup(noNested2PartySubIDs_0_0_1_3_0);
        }
        noLegAllocs_0_1_0.addGroup(noNested2PartyIDs_0_0_2_1);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_0_0_2_2;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_43;
        FIX::Nested2PartyID Nested2PartyID_43("STRING_679120880");
        noNested2PartyIDs_0_0_2_2.set(Nested2PartyID_43);
        NestedParties2_NoNested2PartyIDs_43.insert(Nested2PartyID_43.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_43('8');
        noNested2PartyIDs_0_0_2_2.set(Nested2PartyIDSource_43);
        NestedParties2_NoNested2PartyIDs_43.insert(Nested2PartyIDSource_43.getString());
        FIX::Nested2PartyRole Nested2PartyRole_43(754192069);
        noNested2PartyIDs_0_0_2_2.set(Nested2PartyRole_43);
        NestedParties2_NoNested2PartyIDs_43.insert(Nested2PartyRole_43.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_43);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_2_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_82;
          FIX::Nested2PartySubID Nested2PartySubID_82("STRING_1207962329");
          noNested2PartySubIDs_0_0_2_3_0.set(Nested2PartySubID_82);
          NstdPtys2SubGrp_NoNested2PartySubIDs_82.insert(Nested2PartySubID_82.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_82(1776306865);
          noNested2PartySubIDs_0_0_2_3_0.set(Nested2PartySubIDType_82);
          NstdPtys2SubGrp_NoNested2PartySubIDs_82.insert(Nested2PartySubIDType_82.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_82);

          noNested2PartyIDs_0_0_2_2.addGroup(noNested2PartySubIDs_0_0_2_3_0);
        }
        noLegAllocs_0_1_0.addGroup(noNested2PartyIDs_0_0_2_2);
      }
      noLegs_0_0.addGroup(noLegAllocs_0_1_0);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs noLegAllocs_0_1_1;
      // LegPreAllocGrp.NoLegAllocs
      multiset<string> LegPreAllocGrp_NoLegAllocs_9;
      FIX::LegAllocAccount LegAllocAccount_9("STRING_1208492294");
      noLegAllocs_0_1_1.set(LegAllocAccount_9);
      LegPreAllocGrp_NoLegAllocs_9.insert(LegAllocAccount_9.getString());
      FIX::LegAllocAcctIDSource LegAllocAcctIDSource_9("STRING_912151925");
      noLegAllocs_0_1_1.set(LegAllocAcctIDSource_9);
      LegPreAllocGrp_NoLegAllocs_9.insert(LegAllocAcctIDSource_9.getString());
      FIX::LegAllocQty LegAllocQty_9;
      LegAllocQty_9.setString("11133103");
      noLegAllocs_0_1_1.set(LegAllocQty_9);
      LegPreAllocGrp_NoLegAllocs_9.insert(LegAllocQty_9.getString());
      FIX::LegAllocSettlCurrency LegAllocSettlCurrency_9("USD");
      noLegAllocs_0_1_1.set(LegAllocSettlCurrency_9);
      LegPreAllocGrp_NoLegAllocs_9.insert(LegAllocSettlCurrency_9.getString());
      FIX::LegIndividualAllocID LegIndividualAllocID_9("STRING_1175694400");
      noLegAllocs_0_1_1.set(LegIndividualAllocID_9);
      LegPreAllocGrp_NoLegAllocs_9.insert(LegIndividualAllocID_9.getString());
      all_values.push_back(LegPreAllocGrp_NoLegAllocs_9);

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_0_1_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_44;
        FIX::Nested2PartyID Nested2PartyID_44("STRING_1634377358");
        noNested2PartyIDs_0_1_2_0.set(Nested2PartyID_44);
        NestedParties2_NoNested2PartyIDs_44.insert(Nested2PartyID_44.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_44('1');
        noNested2PartyIDs_0_1_2_0.set(Nested2PartyIDSource_44);
        NestedParties2_NoNested2PartyIDs_44.insert(Nested2PartyIDSource_44.getString());
        FIX::Nested2PartyRole Nested2PartyRole_44(1971754979);
        noNested2PartyIDs_0_1_2_0.set(Nested2PartyRole_44);
        NestedParties2_NoNested2PartyIDs_44.insert(Nested2PartyRole_44.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_44);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_83;
          FIX::Nested2PartySubID Nested2PartySubID_83("STRING_881591192");
          noNested2PartySubIDs_0_1_0_3_0.set(Nested2PartySubID_83);
          NstdPtys2SubGrp_NoNested2PartySubIDs_83.insert(Nested2PartySubID_83.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_83(1370676884);
          noNested2PartySubIDs_0_1_0_3_0.set(Nested2PartySubIDType_83);
          NstdPtys2SubGrp_NoNested2PartySubIDs_83.insert(Nested2PartySubIDType_83.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_83);

          noNested2PartyIDs_0_1_2_0.addGroup(noNested2PartySubIDs_0_1_0_3_0);
        }
        {
          FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_0_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_84;
          FIX::Nested2PartySubID Nested2PartySubID_84("STRING_876061708");
          noNested2PartySubIDs_0_1_0_3_1.set(Nested2PartySubID_84);
          NstdPtys2SubGrp_NoNested2PartySubIDs_84.insert(Nested2PartySubID_84.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_84(164024888);
          noNested2PartySubIDs_0_1_0_3_1.set(Nested2PartySubIDType_84);
          NstdPtys2SubGrp_NoNested2PartySubIDs_84.insert(Nested2PartySubIDType_84.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_84);

          noNested2PartyIDs_0_1_2_0.addGroup(noNested2PartySubIDs_0_1_0_3_1);
        }
        {
          FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_0_3_2;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_85;
          FIX::Nested2PartySubID Nested2PartySubID_85("STRING_1759948199");
          noNested2PartySubIDs_0_1_0_3_2.set(Nested2PartySubID_85);
          NstdPtys2SubGrp_NoNested2PartySubIDs_85.insert(Nested2PartySubID_85.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_85(1905870632);
          noNested2PartySubIDs_0_1_0_3_2.set(Nested2PartySubIDType_85);
          NstdPtys2SubGrp_NoNested2PartySubIDs_85.insert(Nested2PartySubIDType_85.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_85);

          noNested2PartyIDs_0_1_2_0.addGroup(noNested2PartySubIDs_0_1_0_3_2);
        }
        noLegAllocs_0_1_1.addGroup(noNested2PartyIDs_0_1_2_0);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_0_1_2_1;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_45;
        FIX::Nested2PartyID Nested2PartyID_45("STRING_186584323");
        noNested2PartyIDs_0_1_2_1.set(Nested2PartyID_45);
        NestedParties2_NoNested2PartyIDs_45.insert(Nested2PartyID_45.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_45('2');
        noNested2PartyIDs_0_1_2_1.set(Nested2PartyIDSource_45);
        NestedParties2_NoNested2PartyIDs_45.insert(Nested2PartyIDSource_45.getString());
        FIX::Nested2PartyRole Nested2PartyRole_45(454513967);
        noNested2PartyIDs_0_1_2_1.set(Nested2PartyRole_45);
        NestedParties2_NoNested2PartyIDs_45.insert(Nested2PartyRole_45.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_45);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_1_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_86;
          FIX::Nested2PartySubID Nested2PartySubID_86("STRING_1631988067");
          noNested2PartySubIDs_0_1_1_3_0.set(Nested2PartySubID_86);
          NstdPtys2SubGrp_NoNested2PartySubIDs_86.insert(Nested2PartySubID_86.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_86(1086297413);
          noNested2PartySubIDs_0_1_1_3_0.set(Nested2PartySubIDType_86);
          NstdPtys2SubGrp_NoNested2PartySubIDs_86.insert(Nested2PartySubIDType_86.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_86);

          noNested2PartyIDs_0_1_2_1.addGroup(noNested2PartySubIDs_0_1_1_3_0);
        }
        {
          FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_1_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_87;
          FIX::Nested2PartySubID Nested2PartySubID_87("STRING_879004588");
          noNested2PartySubIDs_0_1_1_3_1.set(Nested2PartySubID_87);
          NstdPtys2SubGrp_NoNested2PartySubIDs_87.insert(Nested2PartySubID_87.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_87(1672534908);
          noNested2PartySubIDs_0_1_1_3_1.set(Nested2PartySubIDType_87);
          NstdPtys2SubGrp_NoNested2PartySubIDs_87.insert(Nested2PartySubIDType_87.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_87);

          noNested2PartyIDs_0_1_2_1.addGroup(noNested2PartySubIDs_0_1_1_3_1);
        }
        {
          FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_1_3_2;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_88;
          FIX::Nested2PartySubID Nested2PartySubID_88("STRING_1765418293");
          noNested2PartySubIDs_0_1_1_3_2.set(Nested2PartySubID_88);
          NstdPtys2SubGrp_NoNested2PartySubIDs_88.insert(Nested2PartySubID_88.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_88(1697917115);
          noNested2PartySubIDs_0_1_1_3_2.set(Nested2PartySubIDType_88);
          NstdPtys2SubGrp_NoNested2PartySubIDs_88.insert(Nested2PartySubIDType_88.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_88);

          noNested2PartyIDs_0_1_2_1.addGroup(noNested2PartySubIDs_0_1_1_3_2);
        }
        noLegAllocs_0_1_1.addGroup(noNested2PartyIDs_0_1_2_1);
      }
      noLegs_0_0.addGroup(noLegAllocs_0_1_1);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs noLegAllocs_0_1_2;
      // LegPreAllocGrp.NoLegAllocs
      multiset<string> LegPreAllocGrp_NoLegAllocs_10;
      FIX::LegAllocAccount LegAllocAccount_10("STRING_279243329");
      noLegAllocs_0_1_2.set(LegAllocAccount_10);
      LegPreAllocGrp_NoLegAllocs_10.insert(LegAllocAccount_10.getString());
      FIX::LegAllocAcctIDSource LegAllocAcctIDSource_10("STRING_2038866026");
      noLegAllocs_0_1_2.set(LegAllocAcctIDSource_10);
      LegPreAllocGrp_NoLegAllocs_10.insert(LegAllocAcctIDSource_10.getString());
      FIX::LegAllocQty LegAllocQty_10;
      LegAllocQty_10.setString("7583957");
      noLegAllocs_0_1_2.set(LegAllocQty_10);
      LegPreAllocGrp_NoLegAllocs_10.insert(LegAllocQty_10.getString());
      FIX::LegAllocSettlCurrency LegAllocSettlCurrency_10("GBP");
      noLegAllocs_0_1_2.set(LegAllocSettlCurrency_10);
      LegPreAllocGrp_NoLegAllocs_10.insert(LegAllocSettlCurrency_10.getString());
      FIX::LegIndividualAllocID LegIndividualAllocID_10("STRING_1670547722");
      noLegAllocs_0_1_2.set(LegIndividualAllocID_10);
      LegPreAllocGrp_NoLegAllocs_10.insert(LegIndividualAllocID_10.getString());
      all_values.push_back(LegPreAllocGrp_NoLegAllocs_10);

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_0_2_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_46;
        FIX::Nested2PartyID Nested2PartyID_46("STRING_1400326272");
        noNested2PartyIDs_0_2_2_0.set(Nested2PartyID_46);
        NestedParties2_NoNested2PartyIDs_46.insert(Nested2PartyID_46.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_46('1');
        noNested2PartyIDs_0_2_2_0.set(Nested2PartyIDSource_46);
        NestedParties2_NoNested2PartyIDs_46.insert(Nested2PartyIDSource_46.getString());
        FIX::Nested2PartyRole Nested2PartyRole_46(49587652);
        noNested2PartyIDs_0_2_2_0.set(Nested2PartyRole_46);
        NestedParties2_NoNested2PartyIDs_46.insert(Nested2PartyRole_46.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_46);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_2_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_89;
          FIX::Nested2PartySubID Nested2PartySubID_89("STRING_964498615");
          noNested2PartySubIDs_0_2_0_3_0.set(Nested2PartySubID_89);
          NstdPtys2SubGrp_NoNested2PartySubIDs_89.insert(Nested2PartySubID_89.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_89(61053605);
          noNested2PartySubIDs_0_2_0_3_0.set(Nested2PartySubIDType_89);
          NstdPtys2SubGrp_NoNested2PartySubIDs_89.insert(Nested2PartySubIDType_89.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_89);

          noNested2PartyIDs_0_2_2_0.addGroup(noNested2PartySubIDs_0_2_0_3_0);
        }
        noLegAllocs_0_1_2.addGroup(noNested2PartyIDs_0_2_2_0);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_0_2_2_1;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_47;
        FIX::Nested2PartyID Nested2PartyID_47("STRING_747020385");
        noNested2PartyIDs_0_2_2_1.set(Nested2PartyID_47);
        NestedParties2_NoNested2PartyIDs_47.insert(Nested2PartyID_47.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_47('1');
        noNested2PartyIDs_0_2_2_1.set(Nested2PartyIDSource_47);
        NestedParties2_NoNested2PartyIDs_47.insert(Nested2PartyIDSource_47.getString());
        FIX::Nested2PartyRole Nested2PartyRole_47(942644798);
        noNested2PartyIDs_0_2_2_1.set(Nested2PartyRole_47);
        NestedParties2_NoNested2PartyIDs_47.insert(Nested2PartyRole_47.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_47);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_2_1_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_90;
          FIX::Nested2PartySubID Nested2PartySubID_90("STRING_634209041");
          noNested2PartySubIDs_0_2_1_3_0.set(Nested2PartySubID_90);
          NstdPtys2SubGrp_NoNested2PartySubIDs_90.insert(Nested2PartySubID_90.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_90(1106669686);
          noNested2PartySubIDs_0_2_1_3_0.set(Nested2PartySubIDType_90);
          NstdPtys2SubGrp_NoNested2PartySubIDs_90.insert(Nested2PartySubIDType_90.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_90);

          noNested2PartyIDs_0_2_2_1.addGroup(noNested2PartySubIDs_0_2_1_3_0);
        }
        {
          FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_2_1_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_91;
          FIX::Nested2PartySubID Nested2PartySubID_91("STRING_1730161820");
          noNested2PartySubIDs_0_2_1_3_1.set(Nested2PartySubID_91);
          NstdPtys2SubGrp_NoNested2PartySubIDs_91.insert(Nested2PartySubID_91.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_91(392596025);
          noNested2PartySubIDs_0_2_1_3_1.set(Nested2PartySubIDType_91);
          NstdPtys2SubGrp_NoNested2PartySubIDs_91.insert(Nested2PartySubIDType_91.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_91);

          noNested2PartyIDs_0_2_2_1.addGroup(noNested2PartySubIDs_0_2_1_3_1);
        }
        {
          FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_2_1_3_2;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_92;
          FIX::Nested2PartySubID Nested2PartySubID_92("STRING_1293254009");
          noNested2PartySubIDs_0_2_1_3_2.set(Nested2PartySubID_92);
          NstdPtys2SubGrp_NoNested2PartySubIDs_92.insert(Nested2PartySubID_92.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_92(1619787412);
          noNested2PartySubIDs_0_2_1_3_2.set(Nested2PartySubIDType_92);
          NstdPtys2SubGrp_NoNested2PartySubIDs_92.insert(Nested2PartySubIDType_92.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_92);

          noNested2PartyIDs_0_2_2_1.addGroup(noNested2PartySubIDs_0_2_1_3_2);
        }
        noLegAllocs_0_1_2.addGroup(noNested2PartyIDs_0_2_2_1);
      }
      noLegs_0_0.addGroup(noLegAllocs_0_1_2);
    }
    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegStipulations noLegStipulations_0_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_12;
      FIX::LegStipulationType LegStipulationType_12("STRING_563655968");
      noLegStipulations_0_1_0.set(LegStipulationType_12);
      LegStipulations_NoLegStipulations_12.insert(LegStipulationType_12.getString());
      FIX::LegStipulationValue LegStipulationValue_12("STRING_1104291832");
      noLegStipulations_0_1_0.set(LegStipulationValue_12);
      LegStipulations_NoLegStipulations_12.insert(LegStipulationValue_12.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_12);

      noLegs_0_0.addGroup(noLegStipulations_0_1_0);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegStipulations noLegStipulations_0_1_1;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_13;
      FIX::LegStipulationType LegStipulationType_13("STRING_1933407406");
      noLegStipulations_0_1_1.set(LegStipulationType_13);
      LegStipulations_NoLegStipulations_13.insert(LegStipulationType_13.getString());
      FIX::LegStipulationValue LegStipulationValue_13("STRING_1442660556");
      noLegStipulations_0_1_1.set(LegStipulationValue_13);
      LegStipulations_NoLegStipulations_13.insert(LegStipulationValue_13.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_13);

      noLegs_0_0.addGroup(noLegStipulations_0_1_1);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_49;
      FIX::NestedPartyID NestedPartyID_49("STRING_1551342051");
      noNestedPartyIDs_0_1_0.set(NestedPartyID_49);
      NestedParties_NoNestedPartyIDs_49.insert(NestedPartyID_49.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_49('9');
      noNestedPartyIDs_0_1_0.set(NestedPartyIDSource_49);
      NestedParties_NoNestedPartyIDs_49.insert(NestedPartyIDSource_49.getString());
      FIX::NestedPartyRole NestedPartyRole_49(908586422);
      noNestedPartyIDs_0_1_0.set(NestedPartyRole_49);
      NestedParties_NoNestedPartyIDs_49.insert(NestedPartyRole_49.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_49);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_96;
        FIX::NestedPartySubID NestedPartySubID_96("STRING_1751489821");
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubID_96);
        NstdPtysSubGrp_NoNestedPartySubIDs_96.insert(NestedPartySubID_96.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_96(816652969);
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubIDType_96);
        NstdPtysSubGrp_NoNestedPartySubIDs_96.insert(NestedPartySubIDType_96.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_96);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      noLegs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_50;
      FIX::NestedPartyID NestedPartyID_50("STRING_395115454");
      noNestedPartyIDs_0_1_1.set(NestedPartyID_50);
      NestedParties_NoNestedPartyIDs_50.insert(NestedPartyID_50.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_50('1');
      noNestedPartyIDs_0_1_1.set(NestedPartyIDSource_50);
      NestedParties_NoNestedPartyIDs_50.insert(NestedPartyIDSource_50.getString());
      FIX::NestedPartyRole NestedPartyRole_50(1838029868);
      noNestedPartyIDs_0_1_1.set(NestedPartyRole_50);
      NestedParties_NoNestedPartyIDs_50.insert(NestedPartyRole_50.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_50);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_97;
        FIX::NestedPartySubID NestedPartySubID_97("STRING_604675152");
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubID_97);
        NstdPtysSubGrp_NoNestedPartySubIDs_97.insert(NestedPartySubID_97.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_97(1887617520);
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubIDType_97);
        NstdPtysSubGrp_NoNestedPartySubIDs_97.insert(NestedPartySubIDType_97.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_97);

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_98;
        FIX::NestedPartySubID NestedPartySubID_98("STRING_570707132");
        noNestedPartySubIDs_0_1_2_1.set(NestedPartySubID_98);
        NstdPtysSubGrp_NoNestedPartySubIDs_98.insert(NestedPartySubID_98.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_98(1569173767);
        noNestedPartySubIDs_0_1_2_1.set(NestedPartySubIDType_98);
        NstdPtysSubGrp_NoNestedPartySubIDs_98.insert(NestedPartySubIDType_98.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_98);

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_1);
      }
      noLegs_0_0.addGroup(noNestedPartyIDs_0_1_1);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_51;
      FIX::NestedPartyID NestedPartyID_51("STRING_1948671126");
      noNestedPartyIDs_0_1_2.set(NestedPartyID_51);
      NestedParties_NoNestedPartyIDs_51.insert(NestedPartyID_51.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_51('1');
      noNestedPartyIDs_0_1_2.set(NestedPartyIDSource_51);
      NestedParties_NoNestedPartyIDs_51.insert(NestedPartyIDSource_51.getString());
      FIX::NestedPartyRole NestedPartyRole_51(1327321100);
      noNestedPartyIDs_0_1_2.set(NestedPartyRole_51);
      NestedParties_NoNestedPartyIDs_51.insert(NestedPartyRole_51.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_51);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_99;
        FIX::NestedPartySubID NestedPartySubID_99("STRING_1287941138");
        noNestedPartySubIDs_0_2_2_0.set(NestedPartySubID_99);
        NstdPtysSubGrp_NoNestedPartySubIDs_99.insert(NestedPartySubID_99.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_99(1961530141);
        noNestedPartySubIDs_0_2_2_0.set(NestedPartySubIDType_99);
        NstdPtysSubGrp_NoNestedPartySubIDs_99.insert(NestedPartySubIDType_99.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_99);

        noNestedPartyIDs_0_1_2.addGroup(noNestedPartySubIDs_0_2_2_0);
      }
      noLegs_0_0.addGroup(noNestedPartyIDs_0_1_2);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::MultilegOrderCancelReplace::NoLegs noLegs_0_1;
    // LegOrdGrp.NoLegs
    multiset<string> LegOrdGrp_NoLegs_1;
    FIX::LegAllocID LegAllocID_4("STRING_1850501962");
    noLegs_0_1.set(LegAllocID_4);
    LegOrdGrp_NoLegs_1.insert(LegAllocID_4.getString());
    FIX::LegCoveredOrUncovered LegCoveredOrUncovered_4(870619311);
    noLegs_0_1.set(LegCoveredOrUncovered_4);
    LegOrdGrp_NoLegs_1.insert(LegCoveredOrUncovered_4.getString());
    FIX::LegCurrencyRatio LegCurrencyRatio_4;
    LegCurrencyRatio_4.setString("2066425");
    noLegs_0_1.set(LegCurrencyRatio_4);
    LegOrdGrp_NoLegs_1.insert(LegCurrencyRatio_4.getString());
    FIX::LegDividendYield LegDividendYield_4;
    LegDividendYield_4.setString("23.230000");
    noLegs_0_1.set(LegDividendYield_4);
    LegOrdGrp_NoLegs_1.insert(LegDividendYield_4.getString());
    FIX::LegExecInst LegExecInst_4("MULTIPLECHARVALUE_342923075");
    noLegs_0_1.set(LegExecInst_4);
    LegOrdGrp_NoLegs_1.insert(LegExecInst_4.getString());
    FIX::LegOrderQty LegOrderQty_4;
    LegOrderQty_4.setString("10537525");
    noLegs_0_1.set(LegOrderQty_4);
    LegOrdGrp_NoLegs_1.insert(LegOrderQty_4.getString());
    FIX::LegPositionEffect LegPositionEffect_4('1');
    noLegs_0_1.set(LegPositionEffect_4);
    LegOrdGrp_NoLegs_1.insert(LegPositionEffect_4.getString());
    FIX::LegQty LegQty_4;
    LegQty_4.setString("14472149");
    noLegs_0_1.set(LegQty_4);
    LegOrdGrp_NoLegs_1.insert(LegQty_4.getString());
    FIX::LegRefID LegRefID_4("STRING_839676268");
    noLegs_0_1.set(LegRefID_4);
    LegOrdGrp_NoLegs_1.insert(LegRefID_4.getString());
    FIX::LegSettlCurrency LegSettlCurrency_4("USD");
    noLegs_0_1.set(LegSettlCurrency_4);
    LegOrdGrp_NoLegs_1.insert(LegSettlCurrency_4.getString());
    FIX::LegSettlDate LegSettlDate_4("LOCALMKTDATE_243534672");
    noLegs_0_1.set(LegSettlDate_4);
    LegOrdGrp_NoLegs_1.insert(LegSettlDate_4.getString());
    FIX::LegSettlType LegSettlType_4('1');
    noLegs_0_1.set(LegSettlType_4);
    LegOrdGrp_NoLegs_1.insert(LegSettlType_4.getString());
    FIX::LegSwapType LegSwapType_4(4);
    noLegs_0_1.set(LegSwapType_4);
    LegOrdGrp_NoLegs_1.insert(LegSwapType_4.getString());
    FIX::LegVolatility LegVolatility_4;
    LegVolatility_4.setString("16862591");
    noLegs_0_1.set(LegVolatility_4);
    LegOrdGrp_NoLegs_1.insert(LegVolatility_4.getString());
    all_values.push_back(LegOrdGrp_NoLegs_1);

    // InstrumentLeg
    multiset<string> InstrumentLeg_81;
    FIX::EncodedLegIssuer EncodedLegIssuer_81("DATA_1452205396");
    noLegs_0_1.set(EncodedLegIssuer_81);
    InstrumentLeg_81.insert(EncodedLegIssuer_81.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_81(1654313743);
    noLegs_0_1.set(EncodedLegIssuerLen_81);
    InstrumentLeg_81.insert(EncodedLegIssuerLen_81.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_81("DATA_2081374555");
    noLegs_0_1.set(EncodedLegSecurityDesc_81);
    InstrumentLeg_81.insert(EncodedLegSecurityDesc_81.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_81(579275644);
    noLegs_0_1.set(EncodedLegSecurityDescLen_81);
    InstrumentLeg_81.insert(EncodedLegSecurityDescLen_81.getString());
    FIX::LegCFICode LegCFICode_81("STRING_1344859963");
    noLegs_0_1.set(LegCFICode_81);
    InstrumentLeg_81.insert(LegCFICode_81.getString());
    FIX::LegContractMultiplier LegContractMultiplier_81;
    LegContractMultiplier_81.setString("17293326");
    noLegs_0_1.set(LegContractMultiplier_81);
    InstrumentLeg_81.insert(LegContractMultiplier_81.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_81(1183950796);
    noLegs_0_1.set(LegContractMultiplierUnit_81);
    InstrumentLeg_81.insert(LegContractMultiplierUnit_81.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_81("MONTHYEAR_1084993836");
    noLegs_0_1.set(LegContractSettlMonth_81);
    InstrumentLeg_81.insert(LegContractSettlMonth_81.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_81("COUNTRY_152556118");
    noLegs_0_1.set(LegCountryOfIssue_81);
    InstrumentLeg_81.insert(LegCountryOfIssue_81.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_81("LOCALMKTDATE_605640915");
    noLegs_0_1.set(LegCouponPaymentDate_81);
    InstrumentLeg_81.insert(LegCouponPaymentDate_81.getString());
    FIX::LegCouponRate LegCouponRate_81;
    LegCouponRate_81.setString("13.140000");
    noLegs_0_1.set(LegCouponRate_81);
    InstrumentLeg_81.insert(LegCouponRate_81.getString());
    FIX::LegCreditRating LegCreditRating_81("STRING_1470283636");
    noLegs_0_1.set(LegCreditRating_81);
    InstrumentLeg_81.insert(LegCreditRating_81.getString());
    FIX::LegCurrency LegCurrency_81("JPY");
    noLegs_0_1.set(LegCurrency_81);
    InstrumentLeg_81.insert(LegCurrency_81.getString());
    FIX::LegDatedDate LegDatedDate_81("LOCALMKTDATE_610741126");
    noLegs_0_1.set(LegDatedDate_81);
    InstrumentLeg_81.insert(LegDatedDate_81.getString());
    FIX::LegExerciseStyle LegExerciseStyle_81(1747008508);
    noLegs_0_1.set(LegExerciseStyle_81);
    InstrumentLeg_81.insert(LegExerciseStyle_81.getString());
    FIX::LegFactor LegFactor_81;
    LegFactor_81.setString("13330319");
    noLegs_0_1.set(LegFactor_81);
    InstrumentLeg_81.insert(LegFactor_81.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_81(1481360437);
    noLegs_0_1.set(LegFlowScheduleType_81);
    InstrumentLeg_81.insert(LegFlowScheduleType_81.getString());
    FIX::LegInstrRegistry LegInstrRegistry_81("STRING_1953651026");
    noLegs_0_1.set(LegInstrRegistry_81);
    InstrumentLeg_81.insert(LegInstrRegistry_81.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_81("LOCALMKTDATE_181820579");
    noLegs_0_1.set(LegInterestAccrualDate_81);
    InstrumentLeg_81.insert(LegInterestAccrualDate_81.getString());
    FIX::LegIssueDate LegIssueDate_81("LOCALMKTDATE_1824283513");
    noLegs_0_1.set(LegIssueDate_81);
    InstrumentLeg_81.insert(LegIssueDate_81.getString());
    FIX::LegIssuer LegIssuer_81("STRING_859919888");
    noLegs_0_1.set(LegIssuer_81);
    InstrumentLeg_81.insert(LegIssuer_81.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_81("STRING_1741748870");
    noLegs_0_1.set(LegLocaleOfIssue_81);
    InstrumentLeg_81.insert(LegLocaleOfIssue_81.getString());
    FIX::LegMaturityDate LegMaturityDate_81("LOCALMKTDATE_1124014772");
    noLegs_0_1.set(LegMaturityDate_81);
    InstrumentLeg_81.insert(LegMaturityDate_81.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_81("MONTHYEAR_1699596157");
    noLegs_0_1.set(LegMaturityMonthYear_81);
    InstrumentLeg_81.insert(LegMaturityMonthYear_81.getString());
    FIX::LegMaturityTime LegMaturityTime_81("TZTIMEONLY_449370421");
    noLegs_0_1.set(LegMaturityTime_81);
    InstrumentLeg_81.insert(LegMaturityTime_81.getString());
    FIX::LegOptAttribute LegOptAttribute_81('1');
    noLegs_0_1.set(LegOptAttribute_81);
    InstrumentLeg_81.insert(LegOptAttribute_81.getString());
    FIX::LegOptionRatio LegOptionRatio_81;
    LegOptionRatio_81.setString("19431308");
    noLegs_0_1.set(LegOptionRatio_81);
    InstrumentLeg_81.insert(LegOptionRatio_81.getString());
    FIX::LegPool LegPool_81("STRING_150085997");
    noLegs_0_1.set(LegPool_81);
    InstrumentLeg_81.insert(LegPool_81.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_81("STRING_1890749898");
    noLegs_0_1.set(LegPriceUnitOfMeasure_81);
    InstrumentLeg_81.insert(LegPriceUnitOfMeasure_81.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_81;
    LegPriceUnitOfMeasureQty_81.setString("14819062");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_81);
    InstrumentLeg_81.insert(LegPriceUnitOfMeasureQty_81.getString());
    FIX::LegProduct LegProduct_81(1602291393);
    noLegs_0_1.set(LegProduct_81);
    InstrumentLeg_81.insert(LegProduct_81.getString());
    FIX::LegPutOrCall LegPutOrCall_81(1397579993);
    noLegs_0_1.set(LegPutOrCall_81);
    InstrumentLeg_81.insert(LegPutOrCall_81.getString());
    FIX::LegRatioQty LegRatioQty_81;
    LegRatioQty_81.setString("14157971");
    noLegs_0_1.set(LegRatioQty_81);
    InstrumentLeg_81.insert(LegRatioQty_81.getString());
    FIX::LegRedemptionDate LegRedemptionDate_81("LOCALMKTDATE_34083389");
    noLegs_0_1.set(LegRedemptionDate_81);
    InstrumentLeg_81.insert(LegRedemptionDate_81.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_81("STRING_594956309");
    noLegs_0_1.set(LegRepoCollateralSecurityType_81);
    InstrumentLeg_81.insert(LegRepoCollateralSecurityType_81.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_81;
    LegRepurchaseRate_81.setString("61.760000");
    noLegs_0_1.set(LegRepurchaseRate_81);
    InstrumentLeg_81.insert(LegRepurchaseRate_81.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_81(1218034185);
    noLegs_0_1.set(LegRepurchaseTerm_81);
    InstrumentLeg_81.insert(LegRepurchaseTerm_81.getString());
    FIX::LegSecurityDesc LegSecurityDesc_81("STRING_1679950145");
    noLegs_0_1.set(LegSecurityDesc_81);
    InstrumentLeg_81.insert(LegSecurityDesc_81.getString());
    FIX::LegSecurityExchange LegSecurityExchange_81("EXCHANGE_1150202294");
    noLegs_0_1.set(LegSecurityExchange_81);
    InstrumentLeg_81.insert(LegSecurityExchange_81.getString());
    FIX::LegSecurityID LegSecurityID_81("STRING_1823675100");
    noLegs_0_1.set(LegSecurityID_81);
    InstrumentLeg_81.insert(LegSecurityID_81.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_81("STRING_418647811");
    noLegs_0_1.set(LegSecurityIDSource_81);
    InstrumentLeg_81.insert(LegSecurityIDSource_81.getString());
    FIX::LegSecuritySubType LegSecuritySubType_81("STRING_473002282");
    noLegs_0_1.set(LegSecuritySubType_81);
    InstrumentLeg_81.insert(LegSecuritySubType_81.getString());
    FIX::LegSecurityType LegSecurityType_81("STRING_1609153467");
    noLegs_0_1.set(LegSecurityType_81);
    InstrumentLeg_81.insert(LegSecurityType_81.getString());
    FIX::LegSide LegSide_81('2');
    noLegs_0_1.set(LegSide_81);
    InstrumentLeg_81.insert(LegSide_81.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_81("STRING_1083743409");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_81);
    InstrumentLeg_81.insert(LegStateOrProvinceOfIssue_81.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_81("CHF");
    noLegs_0_1.set(LegStrikeCurrency_81);
    InstrumentLeg_81.insert(LegStrikeCurrency_81.getString());
    FIX::LegStrikePrice LegStrikePrice_81;
    LegStrikePrice_81.setString("4176201");
    noLegs_0_1.set(LegStrikePrice_81);
    InstrumentLeg_81.insert(LegStrikePrice_81.getString());
    FIX::LegSymbol LegSymbol_81("STRING_1014845705");
    noLegs_0_1.set(LegSymbol_81);
    InstrumentLeg_81.insert(LegSymbol_81.getString());
    FIX::LegSymbolSfx LegSymbolSfx_81("STRING_1416030236");
    noLegs_0_1.set(LegSymbolSfx_81);
    InstrumentLeg_81.insert(LegSymbolSfx_81.getString());
    FIX::LegTimeUnit LegTimeUnit_81("STRING_94420063");
    noLegs_0_1.set(LegTimeUnit_81);
    InstrumentLeg_81.insert(LegTimeUnit_81.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_81("STRING_1874765594");
    noLegs_0_1.set(LegUnitOfMeasure_81);
    InstrumentLeg_81.insert(LegUnitOfMeasure_81.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_81;
    LegUnitOfMeasureQty_81.setString("10102954");
    noLegs_0_1.set(LegUnitOfMeasureQty_81);
    InstrumentLeg_81.insert(LegUnitOfMeasureQty_81.getString());
    all_values.push_back(InstrumentLeg_81);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_160;
      FIX::LegSecurityAltID LegSecurityAltID_160("STRING_1426878103");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_160);
      LegSecAltIDGrp_NoLegSecurityAltID_160.insert(LegSecurityAltID_160.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_160("STRING_1459665879");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_160);
      LegSecAltIDGrp_NoLegSecurityAltID_160.insert(LegSecurityAltIDSource_160.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_160);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_161;
      FIX::LegSecurityAltID LegSecurityAltID_161("STRING_124040312");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltID_161);
      LegSecAltIDGrp_NoLegSecurityAltID_161.insert(LegSecurityAltID_161.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_161("STRING_1222525284");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltIDSource_161);
      LegSecAltIDGrp_NoLegSecurityAltID_161.insert(LegSecurityAltIDSource_161.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_161);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    // LegPreAllocGrp
    // Group LegPreAllocGrp.NoLegAllocs
    {
      FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs noLegAllocs_1_1_0;
      // LegPreAllocGrp.NoLegAllocs
      multiset<string> LegPreAllocGrp_NoLegAllocs_11;
      FIX::LegAllocAccount LegAllocAccount_11("STRING_2014790211");
      noLegAllocs_1_1_0.set(LegAllocAccount_11);
      LegPreAllocGrp_NoLegAllocs_11.insert(LegAllocAccount_11.getString());
      FIX::LegAllocAcctIDSource LegAllocAcctIDSource_11("STRING_556947918");
      noLegAllocs_1_1_0.set(LegAllocAcctIDSource_11);
      LegPreAllocGrp_NoLegAllocs_11.insert(LegAllocAcctIDSource_11.getString());
      FIX::LegAllocQty LegAllocQty_11;
      LegAllocQty_11.setString("10645596");
      noLegAllocs_1_1_0.set(LegAllocQty_11);
      LegPreAllocGrp_NoLegAllocs_11.insert(LegAllocQty_11.getString());
      FIX::LegAllocSettlCurrency LegAllocSettlCurrency_11("GBP");
      noLegAllocs_1_1_0.set(LegAllocSettlCurrency_11);
      LegPreAllocGrp_NoLegAllocs_11.insert(LegAllocSettlCurrency_11.getString());
      FIX::LegIndividualAllocID LegIndividualAllocID_11("STRING_1098643011");
      noLegAllocs_1_1_0.set(LegIndividualAllocID_11);
      LegPreAllocGrp_NoLegAllocs_11.insert(LegIndividualAllocID_11.getString());
      all_values.push_back(LegPreAllocGrp_NoLegAllocs_11);

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_1_0_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_48;
        FIX::Nested2PartyID Nested2PartyID_48("STRING_822907636");
        noNested2PartyIDs_1_0_2_0.set(Nested2PartyID_48);
        NestedParties2_NoNested2PartyIDs_48.insert(Nested2PartyID_48.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_48('1');
        noNested2PartyIDs_1_0_2_0.set(Nested2PartyIDSource_48);
        NestedParties2_NoNested2PartyIDs_48.insert(Nested2PartyIDSource_48.getString());
        FIX::Nested2PartyRole Nested2PartyRole_48(1392309362);
        noNested2PartyIDs_1_0_2_0.set(Nested2PartyRole_48);
        NestedParties2_NoNested2PartyIDs_48.insert(Nested2PartyRole_48.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_48);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_93;
          FIX::Nested2PartySubID Nested2PartySubID_93("STRING_1992868649");
          noNested2PartySubIDs_1_0_0_3_0.set(Nested2PartySubID_93);
          NstdPtys2SubGrp_NoNested2PartySubIDs_93.insert(Nested2PartySubID_93.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_93(1810957173);
          noNested2PartySubIDs_1_0_0_3_0.set(Nested2PartySubIDType_93);
          NstdPtys2SubGrp_NoNested2PartySubIDs_93.insert(Nested2PartySubIDType_93.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_93);

          noNested2PartyIDs_1_0_2_0.addGroup(noNested2PartySubIDs_1_0_0_3_0);
        }
        {
          FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_0_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_94;
          FIX::Nested2PartySubID Nested2PartySubID_94("STRING_298628565");
          noNested2PartySubIDs_1_0_0_3_1.set(Nested2PartySubID_94);
          NstdPtys2SubGrp_NoNested2PartySubIDs_94.insert(Nested2PartySubID_94.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_94(1454538469);
          noNested2PartySubIDs_1_0_0_3_1.set(Nested2PartySubIDType_94);
          NstdPtys2SubGrp_NoNested2PartySubIDs_94.insert(Nested2PartySubIDType_94.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_94);

          noNested2PartyIDs_1_0_2_0.addGroup(noNested2PartySubIDs_1_0_0_3_1);
        }
        noLegAllocs_1_1_0.addGroup(noNested2PartyIDs_1_0_2_0);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_1_0_2_1;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_49;
        FIX::Nested2PartyID Nested2PartyID_49("STRING_1712134926");
        noNested2PartyIDs_1_0_2_1.set(Nested2PartyID_49);
        NestedParties2_NoNested2PartyIDs_49.insert(Nested2PartyID_49.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_49('1');
        noNested2PartyIDs_1_0_2_1.set(Nested2PartyIDSource_49);
        NestedParties2_NoNested2PartyIDs_49.insert(Nested2PartyIDSource_49.getString());
        FIX::Nested2PartyRole Nested2PartyRole_49(515733148);
        noNested2PartyIDs_1_0_2_1.set(Nested2PartyRole_49);
        NestedParties2_NoNested2PartyIDs_49.insert(Nested2PartyRole_49.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_49);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_1_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_95;
          FIX::Nested2PartySubID Nested2PartySubID_95("STRING_1799992173");
          noNested2PartySubIDs_1_0_1_3_0.set(Nested2PartySubID_95);
          NstdPtys2SubGrp_NoNested2PartySubIDs_95.insert(Nested2PartySubID_95.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_95(1530578854);
          noNested2PartySubIDs_1_0_1_3_0.set(Nested2PartySubIDType_95);
          NstdPtys2SubGrp_NoNested2PartySubIDs_95.insert(Nested2PartySubIDType_95.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_95);

          noNested2PartyIDs_1_0_2_1.addGroup(noNested2PartySubIDs_1_0_1_3_0);
        }
        {
          FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_1_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_96;
          FIX::Nested2PartySubID Nested2PartySubID_96("STRING_67407523");
          noNested2PartySubIDs_1_0_1_3_1.set(Nested2PartySubID_96);
          NstdPtys2SubGrp_NoNested2PartySubIDs_96.insert(Nested2PartySubID_96.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_96(1894412236);
          noNested2PartySubIDs_1_0_1_3_1.set(Nested2PartySubIDType_96);
          NstdPtys2SubGrp_NoNested2PartySubIDs_96.insert(Nested2PartySubIDType_96.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_96);

          noNested2PartyIDs_1_0_2_1.addGroup(noNested2PartySubIDs_1_0_1_3_1);
        }
        noLegAllocs_1_1_0.addGroup(noNested2PartyIDs_1_0_2_1);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_1_0_2_2;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_50;
        FIX::Nested2PartyID Nested2PartyID_50("STRING_1257860800");
        noNested2PartyIDs_1_0_2_2.set(Nested2PartyID_50);
        NestedParties2_NoNested2PartyIDs_50.insert(Nested2PartyID_50.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_50('1');
        noNested2PartyIDs_1_0_2_2.set(Nested2PartyIDSource_50);
        NestedParties2_NoNested2PartyIDs_50.insert(Nested2PartyIDSource_50.getString());
        FIX::Nested2PartyRole Nested2PartyRole_50(965363424);
        noNested2PartyIDs_1_0_2_2.set(Nested2PartyRole_50);
        NestedParties2_NoNested2PartyIDs_50.insert(Nested2PartyRole_50.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_50);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_2_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_97;
          FIX::Nested2PartySubID Nested2PartySubID_97("STRING_389885213");
          noNested2PartySubIDs_1_0_2_3_0.set(Nested2PartySubID_97);
          NstdPtys2SubGrp_NoNested2PartySubIDs_97.insert(Nested2PartySubID_97.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_97(1089403737);
          noNested2PartySubIDs_1_0_2_3_0.set(Nested2PartySubIDType_97);
          NstdPtys2SubGrp_NoNested2PartySubIDs_97.insert(Nested2PartySubIDType_97.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_97);

          noNested2PartyIDs_1_0_2_2.addGroup(noNested2PartySubIDs_1_0_2_3_0);
        }
        noLegAllocs_1_1_0.addGroup(noNested2PartyIDs_1_0_2_2);
      }
      noLegs_0_1.addGroup(noLegAllocs_1_1_0);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs noLegAllocs_1_1_1;
      // LegPreAllocGrp.NoLegAllocs
      multiset<string> LegPreAllocGrp_NoLegAllocs_12;
      FIX::LegAllocAccount LegAllocAccount_12("STRING_1759780539");
      noLegAllocs_1_1_1.set(LegAllocAccount_12);
      LegPreAllocGrp_NoLegAllocs_12.insert(LegAllocAccount_12.getString());
      FIX::LegAllocAcctIDSource LegAllocAcctIDSource_12("STRING_1999637089");
      noLegAllocs_1_1_1.set(LegAllocAcctIDSource_12);
      LegPreAllocGrp_NoLegAllocs_12.insert(LegAllocAcctIDSource_12.getString());
      FIX::LegAllocQty LegAllocQty_12;
      LegAllocQty_12.setString("9567103");
      noLegAllocs_1_1_1.set(LegAllocQty_12);
      LegPreAllocGrp_NoLegAllocs_12.insert(LegAllocQty_12.getString());
      FIX::LegAllocSettlCurrency LegAllocSettlCurrency_12("CHF");
      noLegAllocs_1_1_1.set(LegAllocSettlCurrency_12);
      LegPreAllocGrp_NoLegAllocs_12.insert(LegAllocSettlCurrency_12.getString());
      FIX::LegIndividualAllocID LegIndividualAllocID_12("STRING_74113208");
      noLegAllocs_1_1_1.set(LegIndividualAllocID_12);
      LegPreAllocGrp_NoLegAllocs_12.insert(LegIndividualAllocID_12.getString());
      all_values.push_back(LegPreAllocGrp_NoLegAllocs_12);

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_1_1_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_51;
        FIX::Nested2PartyID Nested2PartyID_51("STRING_2015356075");
        noNested2PartyIDs_1_1_2_0.set(Nested2PartyID_51);
        NestedParties2_NoNested2PartyIDs_51.insert(Nested2PartyID_51.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_51('1');
        noNested2PartyIDs_1_1_2_0.set(Nested2PartyIDSource_51);
        NestedParties2_NoNested2PartyIDs_51.insert(Nested2PartyIDSource_51.getString());
        FIX::Nested2PartyRole Nested2PartyRole_51(817413906);
        noNested2PartyIDs_1_1_2_0.set(Nested2PartyRole_51);
        NestedParties2_NoNested2PartyIDs_51.insert(Nested2PartyRole_51.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_51);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_1_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_98;
          FIX::Nested2PartySubID Nested2PartySubID_98("STRING_1178781788");
          noNested2PartySubIDs_1_1_0_3_0.set(Nested2PartySubID_98);
          NstdPtys2SubGrp_NoNested2PartySubIDs_98.insert(Nested2PartySubID_98.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_98(643040189);
          noNested2PartySubIDs_1_1_0_3_0.set(Nested2PartySubIDType_98);
          NstdPtys2SubGrp_NoNested2PartySubIDs_98.insert(Nested2PartySubIDType_98.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_98);

          noNested2PartyIDs_1_1_2_0.addGroup(noNested2PartySubIDs_1_1_0_3_0);
        }
        {
          FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_1_0_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_99;
          FIX::Nested2PartySubID Nested2PartySubID_99("STRING_2029934625");
          noNested2PartySubIDs_1_1_0_3_1.set(Nested2PartySubID_99);
          NstdPtys2SubGrp_NoNested2PartySubIDs_99.insert(Nested2PartySubID_99.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_99(842255314);
          noNested2PartySubIDs_1_1_0_3_1.set(Nested2PartySubIDType_99);
          NstdPtys2SubGrp_NoNested2PartySubIDs_99.insert(Nested2PartySubIDType_99.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_99);

          noNested2PartyIDs_1_1_2_0.addGroup(noNested2PartySubIDs_1_1_0_3_1);
        }
        noLegAllocs_1_1_1.addGroup(noNested2PartyIDs_1_1_2_0);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_1_1_2_1;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_52;
        FIX::Nested2PartyID Nested2PartyID_52("STRING_941668755");
        noNested2PartyIDs_1_1_2_1.set(Nested2PartyID_52);
        NestedParties2_NoNested2PartyIDs_52.insert(Nested2PartyID_52.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_52('1');
        noNested2PartyIDs_1_1_2_1.set(Nested2PartyIDSource_52);
        NestedParties2_NoNested2PartyIDs_52.insert(Nested2PartyIDSource_52.getString());
        FIX::Nested2PartyRole Nested2PartyRole_52(406906592);
        noNested2PartyIDs_1_1_2_1.set(Nested2PartyRole_52);
        NestedParties2_NoNested2PartyIDs_52.insert(Nested2PartyRole_52.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_52);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_1_1_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_100;
          FIX::Nested2PartySubID Nested2PartySubID_100("STRING_1852722595");
          noNested2PartySubIDs_1_1_1_3_0.set(Nested2PartySubID_100);
          NstdPtys2SubGrp_NoNested2PartySubIDs_100.insert(Nested2PartySubID_100.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_100(1205767528);
          noNested2PartySubIDs_1_1_1_3_0.set(Nested2PartySubIDType_100);
          NstdPtys2SubGrp_NoNested2PartySubIDs_100.insert(Nested2PartySubIDType_100.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_100);

          noNested2PartyIDs_1_1_2_1.addGroup(noNested2PartySubIDs_1_1_1_3_0);
        }
        {
          FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_1_1_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_101;
          FIX::Nested2PartySubID Nested2PartySubID_101("STRING_1976549254");
          noNested2PartySubIDs_1_1_1_3_1.set(Nested2PartySubID_101);
          NstdPtys2SubGrp_NoNested2PartySubIDs_101.insert(Nested2PartySubID_101.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_101(1235817801);
          noNested2PartySubIDs_1_1_1_3_1.set(Nested2PartySubIDType_101);
          NstdPtys2SubGrp_NoNested2PartySubIDs_101.insert(Nested2PartySubIDType_101.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_101);

          noNested2PartyIDs_1_1_2_1.addGroup(noNested2PartySubIDs_1_1_1_3_1);
        }
        noLegAllocs_1_1_1.addGroup(noNested2PartyIDs_1_1_2_1);
      }
      noLegs_0_1.addGroup(noLegAllocs_1_1_1);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs noLegAllocs_1_1_2;
      // LegPreAllocGrp.NoLegAllocs
      multiset<string> LegPreAllocGrp_NoLegAllocs_13;
      FIX::LegAllocAccount LegAllocAccount_13("STRING_1273175051");
      noLegAllocs_1_1_2.set(LegAllocAccount_13);
      LegPreAllocGrp_NoLegAllocs_13.insert(LegAllocAccount_13.getString());
      FIX::LegAllocAcctIDSource LegAllocAcctIDSource_13("STRING_1723477843");
      noLegAllocs_1_1_2.set(LegAllocAcctIDSource_13);
      LegPreAllocGrp_NoLegAllocs_13.insert(LegAllocAcctIDSource_13.getString());
      FIX::LegAllocQty LegAllocQty_13;
      LegAllocQty_13.setString("3461949");
      noLegAllocs_1_1_2.set(LegAllocQty_13);
      LegPreAllocGrp_NoLegAllocs_13.insert(LegAllocQty_13.getString());
      FIX::LegAllocSettlCurrency LegAllocSettlCurrency_13("CAN");
      noLegAllocs_1_1_2.set(LegAllocSettlCurrency_13);
      LegPreAllocGrp_NoLegAllocs_13.insert(LegAllocSettlCurrency_13.getString());
      FIX::LegIndividualAllocID LegIndividualAllocID_13("STRING_883450208");
      noLegAllocs_1_1_2.set(LegIndividualAllocID_13);
      LegPreAllocGrp_NoLegAllocs_13.insert(LegIndividualAllocID_13.getString());
      all_values.push_back(LegPreAllocGrp_NoLegAllocs_13);

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_1_2_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_53;
        FIX::Nested2PartyID Nested2PartyID_53("STRING_1630761356");
        noNested2PartyIDs_1_2_2_0.set(Nested2PartyID_53);
        NestedParties2_NoNested2PartyIDs_53.insert(Nested2PartyID_53.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_53('4');
        noNested2PartyIDs_1_2_2_0.set(Nested2PartyIDSource_53);
        NestedParties2_NoNested2PartyIDs_53.insert(Nested2PartyIDSource_53.getString());
        FIX::Nested2PartyRole Nested2PartyRole_53(445433039);
        noNested2PartyIDs_1_2_2_0.set(Nested2PartyRole_53);
        NestedParties2_NoNested2PartyIDs_53.insert(Nested2PartyRole_53.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_53);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_2_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_102;
          FIX::Nested2PartySubID Nested2PartySubID_102("STRING_664991908");
          noNested2PartySubIDs_1_2_0_3_0.set(Nested2PartySubID_102);
          NstdPtys2SubGrp_NoNested2PartySubIDs_102.insert(Nested2PartySubID_102.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_102(1362146103);
          noNested2PartySubIDs_1_2_0_3_0.set(Nested2PartySubIDType_102);
          NstdPtys2SubGrp_NoNested2PartySubIDs_102.insert(Nested2PartySubIDType_102.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_102);

          noNested2PartyIDs_1_2_2_0.addGroup(noNested2PartySubIDs_1_2_0_3_0);
        }
        {
          FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_2_0_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_103;
          FIX::Nested2PartySubID Nested2PartySubID_103("STRING_514101217");
          noNested2PartySubIDs_1_2_0_3_1.set(Nested2PartySubID_103);
          NstdPtys2SubGrp_NoNested2PartySubIDs_103.insert(Nested2PartySubID_103.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_103(659498178);
          noNested2PartySubIDs_1_2_0_3_1.set(Nested2PartySubIDType_103);
          NstdPtys2SubGrp_NoNested2PartySubIDs_103.insert(Nested2PartySubIDType_103.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_103);

          noNested2PartyIDs_1_2_2_0.addGroup(noNested2PartySubIDs_1_2_0_3_1);
        }
        noLegAllocs_1_1_2.addGroup(noNested2PartyIDs_1_2_2_0);
      }
      noLegs_0_1.addGroup(noLegAllocs_1_1_2);
    }
    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegStipulations noLegStipulations_1_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_14;
      FIX::LegStipulationType LegStipulationType_14("STRING_300573643");
      noLegStipulations_1_1_0.set(LegStipulationType_14);
      LegStipulations_NoLegStipulations_14.insert(LegStipulationType_14.getString());
      FIX::LegStipulationValue LegStipulationValue_14("STRING_1476912085");
      noLegStipulations_1_1_0.set(LegStipulationValue_14);
      LegStipulations_NoLegStipulations_14.insert(LegStipulationValue_14.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_14);

      noLegs_0_1.addGroup(noLegStipulations_1_1_0);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegStipulations noLegStipulations_1_1_1;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_15;
      FIX::LegStipulationType LegStipulationType_15("STRING_1267084506");
      noLegStipulations_1_1_1.set(LegStipulationType_15);
      LegStipulations_NoLegStipulations_15.insert(LegStipulationType_15.getString());
      FIX::LegStipulationValue LegStipulationValue_15("STRING_1479355431");
      noLegStipulations_1_1_1.set(LegStipulationValue_15);
      LegStipulations_NoLegStipulations_15.insert(LegStipulationValue_15.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_15);

      noLegs_0_1.addGroup(noLegStipulations_1_1_1);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegStipulations noLegStipulations_1_1_2;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_16;
      FIX::LegStipulationType LegStipulationType_16("STRING_2119952274");
      noLegStipulations_1_1_2.set(LegStipulationType_16);
      LegStipulations_NoLegStipulations_16.insert(LegStipulationType_16.getString());
      FIX::LegStipulationValue LegStipulationValue_16("STRING_1149535483");
      noLegStipulations_1_1_2.set(LegStipulationValue_16);
      LegStipulations_NoLegStipulations_16.insert(LegStipulationValue_16.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_16);

      noLegs_0_1.addGroup(noLegStipulations_1_1_2);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoNestedPartyIDs noNestedPartyIDs_1_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_52;
      FIX::NestedPartyID NestedPartyID_52("STRING_914137381");
      noNestedPartyIDs_1_1_0.set(NestedPartyID_52);
      NestedParties_NoNestedPartyIDs_52.insert(NestedPartyID_52.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_52('3');
      noNestedPartyIDs_1_1_0.set(NestedPartyIDSource_52);
      NestedParties_NoNestedPartyIDs_52.insert(NestedPartyIDSource_52.getString());
      FIX::NestedPartyRole NestedPartyRole_52(581033690);
      noNestedPartyIDs_1_1_0.set(NestedPartyRole_52);
      NestedParties_NoNestedPartyIDs_52.insert(NestedPartyRole_52.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_52);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_100;
        FIX::NestedPartySubID NestedPartySubID_100("STRING_44280229");
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubID_100);
        NstdPtysSubGrp_NoNestedPartySubIDs_100.insert(NestedPartySubID_100.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_100(1786801218);
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubIDType_100);
        NstdPtysSubGrp_NoNestedPartySubIDs_100.insert(NestedPartySubIDType_100.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_100);

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_0);
      }
      noLegs_0_1.addGroup(noNestedPartyIDs_1_1_0);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoNestedPartyIDs noNestedPartyIDs_1_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_53;
      FIX::NestedPartyID NestedPartyID_53("STRING_919760069");
      noNestedPartyIDs_1_1_1.set(NestedPartyID_53);
      NestedParties_NoNestedPartyIDs_53.insert(NestedPartyID_53.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_53('1');
      noNestedPartyIDs_1_1_1.set(NestedPartyIDSource_53);
      NestedParties_NoNestedPartyIDs_53.insert(NestedPartyIDSource_53.getString());
      FIX::NestedPartyRole NestedPartyRole_53(912492621);
      noNestedPartyIDs_1_1_1.set(NestedPartyRole_53);
      NestedParties_NoNestedPartyIDs_53.insert(NestedPartyRole_53.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_53);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_101;
        FIX::NestedPartySubID NestedPartySubID_101("STRING_1626292983");
        noNestedPartySubIDs_1_1_2_0.set(NestedPartySubID_101);
        NstdPtysSubGrp_NoNestedPartySubIDs_101.insert(NestedPartySubID_101.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_101(1115887006);
        noNestedPartySubIDs_1_1_2_0.set(NestedPartySubIDType_101);
        NstdPtysSubGrp_NoNestedPartySubIDs_101.insert(NestedPartySubIDType_101.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_101);

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_102;
        FIX::NestedPartySubID NestedPartySubID_102("STRING_1037111884");
        noNestedPartySubIDs_1_1_2_1.set(NestedPartySubID_102);
        NstdPtysSubGrp_NoNestedPartySubIDs_102.insert(NestedPartySubID_102.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_102(362259543);
        noNestedPartySubIDs_1_1_2_1.set(NestedPartySubIDType_102);
        NstdPtysSubGrp_NoNestedPartySubIDs_102.insert(NestedPartySubIDType_102.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_102);

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_1);
      }
      noLegs_0_1.addGroup(noNestedPartyIDs_1_1_1);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoNestedPartyIDs noNestedPartyIDs_1_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_54;
      FIX::NestedPartyID NestedPartyID_54("STRING_1709166604");
      noNestedPartyIDs_1_1_2.set(NestedPartyID_54);
      NestedParties_NoNestedPartyIDs_54.insert(NestedPartyID_54.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_54('5');
      noNestedPartyIDs_1_1_2.set(NestedPartyIDSource_54);
      NestedParties_NoNestedPartyIDs_54.insert(NestedPartyIDSource_54.getString());
      FIX::NestedPartyRole NestedPartyRole_54(858006642);
      noNestedPartyIDs_1_1_2.set(NestedPartyRole_54);
      NestedParties_NoNestedPartyIDs_54.insert(NestedPartyRole_54.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_54);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_103;
        FIX::NestedPartySubID NestedPartySubID_103("STRING_960377601");
        noNestedPartySubIDs_1_2_2_0.set(NestedPartySubID_103);
        NstdPtysSubGrp_NoNestedPartySubIDs_103.insert(NestedPartySubID_103.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_103(1522998550);
        noNestedPartySubIDs_1_2_2_0.set(NestedPartySubIDType_103);
        NstdPtysSubGrp_NoNestedPartySubIDs_103.insert(NestedPartySubIDType_103.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_103);

        noNestedPartyIDs_1_1_2.addGroup(noNestedPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_104;
        FIX::NestedPartySubID NestedPartySubID_104("STRING_1369262099");
        noNestedPartySubIDs_1_2_2_1.set(NestedPartySubID_104);
        NstdPtysSubGrp_NoNestedPartySubIDs_104.insert(NestedPartySubID_104.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_104(1474478818);
        noNestedPartySubIDs_1_2_2_1.set(NestedPartySubIDType_104);
        NstdPtysSubGrp_NoNestedPartySubIDs_104.insert(NestedPartySubIDType_104.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_104);

        noNestedPartyIDs_1_1_2.addGroup(noNestedPartySubIDs_1_2_2_1);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_105;
        FIX::NestedPartySubID NestedPartySubID_105("STRING_35013081");
        noNestedPartySubIDs_1_2_2_2.set(NestedPartySubID_105);
        NstdPtysSubGrp_NoNestedPartySubIDs_105.insert(NestedPartySubID_105.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_105(451796981);
        noNestedPartySubIDs_1_2_2_2.set(NestedPartySubIDType_105);
        NstdPtysSubGrp_NoNestedPartySubIDs_105.insert(NestedPartySubIDType_105.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_105);

        noNestedPartyIDs_1_1_2.addGroup(noNestedPartySubIDs_1_2_2_2);
      }
      noLegs_0_1.addGroup(noNestedPartyIDs_1_1_2);
    }
    msg.addGroup(noLegs_0_1);
  }
  {
    FIX50SP2::MultilegOrderCancelReplace::NoLegs noLegs_0_2;
    // LegOrdGrp.NoLegs
    multiset<string> LegOrdGrp_NoLegs_2;
    FIX::LegAllocID LegAllocID_5("STRING_1775052461");
    noLegs_0_2.set(LegAllocID_5);
    LegOrdGrp_NoLegs_2.insert(LegAllocID_5.getString());
    FIX::LegCoveredOrUncovered LegCoveredOrUncovered_5(1511925166);
    noLegs_0_2.set(LegCoveredOrUncovered_5);
    LegOrdGrp_NoLegs_2.insert(LegCoveredOrUncovered_5.getString());
    FIX::LegCurrencyRatio LegCurrencyRatio_5;
    LegCurrencyRatio_5.setString("17188814");
    noLegs_0_2.set(LegCurrencyRatio_5);
    LegOrdGrp_NoLegs_2.insert(LegCurrencyRatio_5.getString());
    FIX::LegDividendYield LegDividendYield_5;
    LegDividendYield_5.setString("42.440000");
    noLegs_0_2.set(LegDividendYield_5);
    LegOrdGrp_NoLegs_2.insert(LegDividendYield_5.getString());
    FIX::LegExecInst LegExecInst_5("MULTIPLECHARVALUE_1484393792");
    noLegs_0_2.set(LegExecInst_5);
    LegOrdGrp_NoLegs_2.insert(LegExecInst_5.getString());
    FIX::LegOrderQty LegOrderQty_5;
    LegOrderQty_5.setString("7209333");
    noLegs_0_2.set(LegOrderQty_5);
    LegOrdGrp_NoLegs_2.insert(LegOrderQty_5.getString());
    FIX::LegPositionEffect LegPositionEffect_5('1');
    noLegs_0_2.set(LegPositionEffect_5);
    LegOrdGrp_NoLegs_2.insert(LegPositionEffect_5.getString());
    FIX::LegQty LegQty_5;
    LegQty_5.setString("2510475");
    noLegs_0_2.set(LegQty_5);
    LegOrdGrp_NoLegs_2.insert(LegQty_5.getString());
    FIX::LegRefID LegRefID_5("STRING_1059974604");
    noLegs_0_2.set(LegRefID_5);
    LegOrdGrp_NoLegs_2.insert(LegRefID_5.getString());
    FIX::LegSettlCurrency LegSettlCurrency_5("CAN");
    noLegs_0_2.set(LegSettlCurrency_5);
    LegOrdGrp_NoLegs_2.insert(LegSettlCurrency_5.getString());
    FIX::LegSettlDate LegSettlDate_5("LOCALMKTDATE_1104254833");
    noLegs_0_2.set(LegSettlDate_5);
    LegOrdGrp_NoLegs_2.insert(LegSettlDate_5.getString());
    FIX::LegSettlType LegSettlType_5('1');
    noLegs_0_2.set(LegSettlType_5);
    LegOrdGrp_NoLegs_2.insert(LegSettlType_5.getString());
    FIX::LegSwapType LegSwapType_5(4);
    noLegs_0_2.set(LegSwapType_5);
    LegOrdGrp_NoLegs_2.insert(LegSwapType_5.getString());
    FIX::LegVolatility LegVolatility_5;
    LegVolatility_5.setString("2368692");
    noLegs_0_2.set(LegVolatility_5);
    LegOrdGrp_NoLegs_2.insert(LegVolatility_5.getString());
    all_values.push_back(LegOrdGrp_NoLegs_2);

    // InstrumentLeg
    multiset<string> InstrumentLeg_82;
    FIX::EncodedLegIssuer EncodedLegIssuer_82("DATA_266411575");
    noLegs_0_2.set(EncodedLegIssuer_82);
    InstrumentLeg_82.insert(EncodedLegIssuer_82.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_82(609772675);
    noLegs_0_2.set(EncodedLegIssuerLen_82);
    InstrumentLeg_82.insert(EncodedLegIssuerLen_82.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_82("DATA_1863162198");
    noLegs_0_2.set(EncodedLegSecurityDesc_82);
    InstrumentLeg_82.insert(EncodedLegSecurityDesc_82.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_82(1382298582);
    noLegs_0_2.set(EncodedLegSecurityDescLen_82);
    InstrumentLeg_82.insert(EncodedLegSecurityDescLen_82.getString());
    FIX::LegCFICode LegCFICode_82("STRING_1646884559");
    noLegs_0_2.set(LegCFICode_82);
    InstrumentLeg_82.insert(LegCFICode_82.getString());
    FIX::LegContractMultiplier LegContractMultiplier_82;
    LegContractMultiplier_82.setString("779380");
    noLegs_0_2.set(LegContractMultiplier_82);
    InstrumentLeg_82.insert(LegContractMultiplier_82.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_82(943981538);
    noLegs_0_2.set(LegContractMultiplierUnit_82);
    InstrumentLeg_82.insert(LegContractMultiplierUnit_82.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_82("MONTHYEAR_19790503");
    noLegs_0_2.set(LegContractSettlMonth_82);
    InstrumentLeg_82.insert(LegContractSettlMonth_82.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_82("COUNTRY_935944735");
    noLegs_0_2.set(LegCountryOfIssue_82);
    InstrumentLeg_82.insert(LegCountryOfIssue_82.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_82("LOCALMKTDATE_951097534");
    noLegs_0_2.set(LegCouponPaymentDate_82);
    InstrumentLeg_82.insert(LegCouponPaymentDate_82.getString());
    FIX::LegCouponRate LegCouponRate_82;
    LegCouponRate_82.setString("81.040000");
    noLegs_0_2.set(LegCouponRate_82);
    InstrumentLeg_82.insert(LegCouponRate_82.getString());
    FIX::LegCreditRating LegCreditRating_82("STRING_311459638");
    noLegs_0_2.set(LegCreditRating_82);
    InstrumentLeg_82.insert(LegCreditRating_82.getString());
    FIX::LegCurrency LegCurrency_82("USD");
    noLegs_0_2.set(LegCurrency_82);
    InstrumentLeg_82.insert(LegCurrency_82.getString());
    FIX::LegDatedDate LegDatedDate_82("LOCALMKTDATE_346472719");
    noLegs_0_2.set(LegDatedDate_82);
    InstrumentLeg_82.insert(LegDatedDate_82.getString());
    FIX::LegExerciseStyle LegExerciseStyle_82(624672966);
    noLegs_0_2.set(LegExerciseStyle_82);
    InstrumentLeg_82.insert(LegExerciseStyle_82.getString());
    FIX::LegFactor LegFactor_82;
    LegFactor_82.setString("20822157");
    noLegs_0_2.set(LegFactor_82);
    InstrumentLeg_82.insert(LegFactor_82.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_82(1858397885);
    noLegs_0_2.set(LegFlowScheduleType_82);
    InstrumentLeg_82.insert(LegFlowScheduleType_82.getString());
    FIX::LegInstrRegistry LegInstrRegistry_82("STRING_196070805");
    noLegs_0_2.set(LegInstrRegistry_82);
    InstrumentLeg_82.insert(LegInstrRegistry_82.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_82("LOCALMKTDATE_1041656332");
    noLegs_0_2.set(LegInterestAccrualDate_82);
    InstrumentLeg_82.insert(LegInterestAccrualDate_82.getString());
    FIX::LegIssueDate LegIssueDate_82("LOCALMKTDATE_1195308029");
    noLegs_0_2.set(LegIssueDate_82);
    InstrumentLeg_82.insert(LegIssueDate_82.getString());
    FIX::LegIssuer LegIssuer_82("STRING_917004128");
    noLegs_0_2.set(LegIssuer_82);
    InstrumentLeg_82.insert(LegIssuer_82.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_82("STRING_175224026");
    noLegs_0_2.set(LegLocaleOfIssue_82);
    InstrumentLeg_82.insert(LegLocaleOfIssue_82.getString());
    FIX::LegMaturityDate LegMaturityDate_82("LOCALMKTDATE_1446355555");
    noLegs_0_2.set(LegMaturityDate_82);
    InstrumentLeg_82.insert(LegMaturityDate_82.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_82("MONTHYEAR_1976978732");
    noLegs_0_2.set(LegMaturityMonthYear_82);
    InstrumentLeg_82.insert(LegMaturityMonthYear_82.getString());
    FIX::LegMaturityTime LegMaturityTime_82("TZTIMEONLY_2037309058");
    noLegs_0_2.set(LegMaturityTime_82);
    InstrumentLeg_82.insert(LegMaturityTime_82.getString());
    FIX::LegOptAttribute LegOptAttribute_82('6');
    noLegs_0_2.set(LegOptAttribute_82);
    InstrumentLeg_82.insert(LegOptAttribute_82.getString());
    FIX::LegOptionRatio LegOptionRatio_82;
    LegOptionRatio_82.setString("9337499");
    noLegs_0_2.set(LegOptionRatio_82);
    InstrumentLeg_82.insert(LegOptionRatio_82.getString());
    FIX::LegPool LegPool_82("STRING_1391228012");
    noLegs_0_2.set(LegPool_82);
    InstrumentLeg_82.insert(LegPool_82.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_82("STRING_754632307");
    noLegs_0_2.set(LegPriceUnitOfMeasure_82);
    InstrumentLeg_82.insert(LegPriceUnitOfMeasure_82.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_82;
    LegPriceUnitOfMeasureQty_82.setString("11706191");
    noLegs_0_2.set(LegPriceUnitOfMeasureQty_82);
    InstrumentLeg_82.insert(LegPriceUnitOfMeasureQty_82.getString());
    FIX::LegProduct LegProduct_82(1657639587);
    noLegs_0_2.set(LegProduct_82);
    InstrumentLeg_82.insert(LegProduct_82.getString());
    FIX::LegPutOrCall LegPutOrCall_82(1364404982);
    noLegs_0_2.set(LegPutOrCall_82);
    InstrumentLeg_82.insert(LegPutOrCall_82.getString());
    FIX::LegRatioQty LegRatioQty_82;
    LegRatioQty_82.setString("8862976");
    noLegs_0_2.set(LegRatioQty_82);
    InstrumentLeg_82.insert(LegRatioQty_82.getString());
    FIX::LegRedemptionDate LegRedemptionDate_82("LOCALMKTDATE_892454521");
    noLegs_0_2.set(LegRedemptionDate_82);
    InstrumentLeg_82.insert(LegRedemptionDate_82.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_82("STRING_863805893");
    noLegs_0_2.set(LegRepoCollateralSecurityType_82);
    InstrumentLeg_82.insert(LegRepoCollateralSecurityType_82.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_82;
    LegRepurchaseRate_82.setString("57.770000");
    noLegs_0_2.set(LegRepurchaseRate_82);
    InstrumentLeg_82.insert(LegRepurchaseRate_82.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_82(1836436060);
    noLegs_0_2.set(LegRepurchaseTerm_82);
    InstrumentLeg_82.insert(LegRepurchaseTerm_82.getString());
    FIX::LegSecurityDesc LegSecurityDesc_82("STRING_883596396");
    noLegs_0_2.set(LegSecurityDesc_82);
    InstrumentLeg_82.insert(LegSecurityDesc_82.getString());
    FIX::LegSecurityExchange LegSecurityExchange_82("EXCHANGE_1900180513");
    noLegs_0_2.set(LegSecurityExchange_82);
    InstrumentLeg_82.insert(LegSecurityExchange_82.getString());
    FIX::LegSecurityID LegSecurityID_82("STRING_640049946");
    noLegs_0_2.set(LegSecurityID_82);
    InstrumentLeg_82.insert(LegSecurityID_82.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_82("STRING_1863764501");
    noLegs_0_2.set(LegSecurityIDSource_82);
    InstrumentLeg_82.insert(LegSecurityIDSource_82.getString());
    FIX::LegSecuritySubType LegSecuritySubType_82("STRING_64156503");
    noLegs_0_2.set(LegSecuritySubType_82);
    InstrumentLeg_82.insert(LegSecuritySubType_82.getString());
    FIX::LegSecurityType LegSecurityType_82("STRING_812925932");
    noLegs_0_2.set(LegSecurityType_82);
    InstrumentLeg_82.insert(LegSecurityType_82.getString());
    FIX::LegSide LegSide_82('2');
    noLegs_0_2.set(LegSide_82);
    InstrumentLeg_82.insert(LegSide_82.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_82("STRING_410629222");
    noLegs_0_2.set(LegStateOrProvinceOfIssue_82);
    InstrumentLeg_82.insert(LegStateOrProvinceOfIssue_82.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_82("CHF");
    noLegs_0_2.set(LegStrikeCurrency_82);
    InstrumentLeg_82.insert(LegStrikeCurrency_82.getString());
    FIX::LegStrikePrice LegStrikePrice_82;
    LegStrikePrice_82.setString("1215434");
    noLegs_0_2.set(LegStrikePrice_82);
    InstrumentLeg_82.insert(LegStrikePrice_82.getString());
    FIX::LegSymbol LegSymbol_82("STRING_1633669704");
    noLegs_0_2.set(LegSymbol_82);
    InstrumentLeg_82.insert(LegSymbol_82.getString());
    FIX::LegSymbolSfx LegSymbolSfx_82("STRING_999832547");
    noLegs_0_2.set(LegSymbolSfx_82);
    InstrumentLeg_82.insert(LegSymbolSfx_82.getString());
    FIX::LegTimeUnit LegTimeUnit_82("STRING_1316851488");
    noLegs_0_2.set(LegTimeUnit_82);
    InstrumentLeg_82.insert(LegTimeUnit_82.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_82("STRING_403190184");
    noLegs_0_2.set(LegUnitOfMeasure_82);
    InstrumentLeg_82.insert(LegUnitOfMeasure_82.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_82;
    LegUnitOfMeasureQty_82.setString("11750565");
    noLegs_0_2.set(LegUnitOfMeasureQty_82);
    InstrumentLeg_82.insert(LegUnitOfMeasureQty_82.getString());
    all_values.push_back(InstrumentLeg_82);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_162;
      FIX::LegSecurityAltID LegSecurityAltID_162("STRING_232685268");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltID_162);
      LegSecAltIDGrp_NoLegSecurityAltID_162.insert(LegSecurityAltID_162.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_162("STRING_1064881983");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltIDSource_162);
      LegSecAltIDGrp_NoLegSecurityAltID_162.insert(LegSecurityAltIDSource_162.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_162);

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_0);
    }
    // LegPreAllocGrp
    // Group LegPreAllocGrp.NoLegAllocs
    {
      FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs noLegAllocs_2_1_0;
      // LegPreAllocGrp.NoLegAllocs
      multiset<string> LegPreAllocGrp_NoLegAllocs_14;
      FIX::LegAllocAccount LegAllocAccount_14("STRING_1166435186");
      noLegAllocs_2_1_0.set(LegAllocAccount_14);
      LegPreAllocGrp_NoLegAllocs_14.insert(LegAllocAccount_14.getString());
      FIX::LegAllocAcctIDSource LegAllocAcctIDSource_14("STRING_308626347");
      noLegAllocs_2_1_0.set(LegAllocAcctIDSource_14);
      LegPreAllocGrp_NoLegAllocs_14.insert(LegAllocAcctIDSource_14.getString());
      FIX::LegAllocQty LegAllocQty_14;
      LegAllocQty_14.setString("20109695");
      noLegAllocs_2_1_0.set(LegAllocQty_14);
      LegPreAllocGrp_NoLegAllocs_14.insert(LegAllocQty_14.getString());
      FIX::LegAllocSettlCurrency LegAllocSettlCurrency_14("USD");
      noLegAllocs_2_1_0.set(LegAllocSettlCurrency_14);
      LegPreAllocGrp_NoLegAllocs_14.insert(LegAllocSettlCurrency_14.getString());
      FIX::LegIndividualAllocID LegIndividualAllocID_14("STRING_1227890933");
      noLegAllocs_2_1_0.set(LegIndividualAllocID_14);
      LegPreAllocGrp_NoLegAllocs_14.insert(LegIndividualAllocID_14.getString());
      all_values.push_back(LegPreAllocGrp_NoLegAllocs_14);

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_2_0_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_54;
        FIX::Nested2PartyID Nested2PartyID_54("STRING_711236808");
        noNested2PartyIDs_2_0_2_0.set(Nested2PartyID_54);
        NestedParties2_NoNested2PartyIDs_54.insert(Nested2PartyID_54.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_54('2');
        noNested2PartyIDs_2_0_2_0.set(Nested2PartyIDSource_54);
        NestedParties2_NoNested2PartyIDs_54.insert(Nested2PartyIDSource_54.getString());
        FIX::Nested2PartyRole Nested2PartyRole_54(2040104133);
        noNested2PartyIDs_2_0_2_0.set(Nested2PartyRole_54);
        NestedParties2_NoNested2PartyIDs_54.insert(Nested2PartyRole_54.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_54);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_0_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_104;
          FIX::Nested2PartySubID Nested2PartySubID_104("STRING_827809575");
          noNested2PartySubIDs_2_0_0_3_0.set(Nested2PartySubID_104);
          NstdPtys2SubGrp_NoNested2PartySubIDs_104.insert(Nested2PartySubID_104.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_104(1792800998);
          noNested2PartySubIDs_2_0_0_3_0.set(Nested2PartySubIDType_104);
          NstdPtys2SubGrp_NoNested2PartySubIDs_104.insert(Nested2PartySubIDType_104.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_104);

          noNested2PartyIDs_2_0_2_0.addGroup(noNested2PartySubIDs_2_0_0_3_0);
        }
        {
          FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_0_0_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_105;
          FIX::Nested2PartySubID Nested2PartySubID_105("STRING_1040239166");
          noNested2PartySubIDs_2_0_0_3_1.set(Nested2PartySubID_105);
          NstdPtys2SubGrp_NoNested2PartySubIDs_105.insert(Nested2PartySubID_105.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_105(544090428);
          noNested2PartySubIDs_2_0_0_3_1.set(Nested2PartySubIDType_105);
          NstdPtys2SubGrp_NoNested2PartySubIDs_105.insert(Nested2PartySubIDType_105.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_105);

          noNested2PartyIDs_2_0_2_0.addGroup(noNested2PartySubIDs_2_0_0_3_1);
        }
        {
          FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_0_0_3_2;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_106;
          FIX::Nested2PartySubID Nested2PartySubID_106("STRING_1856957501");
          noNested2PartySubIDs_2_0_0_3_2.set(Nested2PartySubID_106);
          NstdPtys2SubGrp_NoNested2PartySubIDs_106.insert(Nested2PartySubID_106.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_106(1853165098);
          noNested2PartySubIDs_2_0_0_3_2.set(Nested2PartySubIDType_106);
          NstdPtys2SubGrp_NoNested2PartySubIDs_106.insert(Nested2PartySubIDType_106.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_106);

          noNested2PartyIDs_2_0_2_0.addGroup(noNested2PartySubIDs_2_0_0_3_2);
        }
        noLegAllocs_2_1_0.addGroup(noNested2PartyIDs_2_0_2_0);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_2_0_2_1;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_55;
        FIX::Nested2PartyID Nested2PartyID_55("STRING_567534555");
        noNested2PartyIDs_2_0_2_1.set(Nested2PartyID_55);
        NestedParties2_NoNested2PartyIDs_55.insert(Nested2PartyID_55.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_55('1');
        noNested2PartyIDs_2_0_2_1.set(Nested2PartyIDSource_55);
        NestedParties2_NoNested2PartyIDs_55.insert(Nested2PartyIDSource_55.getString());
        FIX::Nested2PartyRole Nested2PartyRole_55(1143280349);
        noNested2PartyIDs_2_0_2_1.set(Nested2PartyRole_55);
        NestedParties2_NoNested2PartyIDs_55.insert(Nested2PartyRole_55.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_55);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_0_1_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_107;
          FIX::Nested2PartySubID Nested2PartySubID_107("STRING_241646534");
          noNested2PartySubIDs_2_0_1_3_0.set(Nested2PartySubID_107);
          NstdPtys2SubGrp_NoNested2PartySubIDs_107.insert(Nested2PartySubID_107.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_107(629466405);
          noNested2PartySubIDs_2_0_1_3_0.set(Nested2PartySubIDType_107);
          NstdPtys2SubGrp_NoNested2PartySubIDs_107.insert(Nested2PartySubIDType_107.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_107);

          noNested2PartyIDs_2_0_2_1.addGroup(noNested2PartySubIDs_2_0_1_3_0);
        }
        {
          FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_0_1_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_108;
          FIX::Nested2PartySubID Nested2PartySubID_108("STRING_1525543317");
          noNested2PartySubIDs_2_0_1_3_1.set(Nested2PartySubID_108);
          NstdPtys2SubGrp_NoNested2PartySubIDs_108.insert(Nested2PartySubID_108.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_108(1558498023);
          noNested2PartySubIDs_2_0_1_3_1.set(Nested2PartySubIDType_108);
          NstdPtys2SubGrp_NoNested2PartySubIDs_108.insert(Nested2PartySubIDType_108.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_108);

          noNested2PartyIDs_2_0_2_1.addGroup(noNested2PartySubIDs_2_0_1_3_1);
        }
        noLegAllocs_2_1_0.addGroup(noNested2PartyIDs_2_0_2_1);
      }
      noLegs_0_2.addGroup(noLegAllocs_2_1_0);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs noLegAllocs_2_1_1;
      // LegPreAllocGrp.NoLegAllocs
      multiset<string> LegPreAllocGrp_NoLegAllocs_15;
      FIX::LegAllocAccount LegAllocAccount_15("STRING_1032656589");
      noLegAllocs_2_1_1.set(LegAllocAccount_15);
      LegPreAllocGrp_NoLegAllocs_15.insert(LegAllocAccount_15.getString());
      FIX::LegAllocAcctIDSource LegAllocAcctIDSource_15("STRING_553116242");
      noLegAllocs_2_1_1.set(LegAllocAcctIDSource_15);
      LegPreAllocGrp_NoLegAllocs_15.insert(LegAllocAcctIDSource_15.getString());
      FIX::LegAllocQty LegAllocQty_15;
      LegAllocQty_15.setString("267377");
      noLegAllocs_2_1_1.set(LegAllocQty_15);
      LegPreAllocGrp_NoLegAllocs_15.insert(LegAllocQty_15.getString());
      FIX::LegAllocSettlCurrency LegAllocSettlCurrency_15("CAN");
      noLegAllocs_2_1_1.set(LegAllocSettlCurrency_15);
      LegPreAllocGrp_NoLegAllocs_15.insert(LegAllocSettlCurrency_15.getString());
      FIX::LegIndividualAllocID LegIndividualAllocID_15("STRING_1283075063");
      noLegAllocs_2_1_1.set(LegIndividualAllocID_15);
      LegPreAllocGrp_NoLegAllocs_15.insert(LegIndividualAllocID_15.getString());
      all_values.push_back(LegPreAllocGrp_NoLegAllocs_15);

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_2_1_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_56;
        FIX::Nested2PartyID Nested2PartyID_56("STRING_1926624572");
        noNested2PartyIDs_2_1_2_0.set(Nested2PartyID_56);
        NestedParties2_NoNested2PartyIDs_56.insert(Nested2PartyID_56.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_56('1');
        noNested2PartyIDs_2_1_2_0.set(Nested2PartyIDSource_56);
        NestedParties2_NoNested2PartyIDs_56.insert(Nested2PartyIDSource_56.getString());
        FIX::Nested2PartyRole Nested2PartyRole_56(473864068);
        noNested2PartyIDs_2_1_2_0.set(Nested2PartyRole_56);
        NestedParties2_NoNested2PartyIDs_56.insert(Nested2PartyRole_56.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_56);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_1_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_109;
          FIX::Nested2PartySubID Nested2PartySubID_109("STRING_226968300");
          noNested2PartySubIDs_2_1_0_3_0.set(Nested2PartySubID_109);
          NstdPtys2SubGrp_NoNested2PartySubIDs_109.insert(Nested2PartySubID_109.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_109(1549732424);
          noNested2PartySubIDs_2_1_0_3_0.set(Nested2PartySubIDType_109);
          NstdPtys2SubGrp_NoNested2PartySubIDs_109.insert(Nested2PartySubIDType_109.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_109);

          noNested2PartyIDs_2_1_2_0.addGroup(noNested2PartySubIDs_2_1_0_3_0);
        }
        {
          FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_1_0_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_110;
          FIX::Nested2PartySubID Nested2PartySubID_110("STRING_309160019");
          noNested2PartySubIDs_2_1_0_3_1.set(Nested2PartySubID_110);
          NstdPtys2SubGrp_NoNested2PartySubIDs_110.insert(Nested2PartySubID_110.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_110(171181479);
          noNested2PartySubIDs_2_1_0_3_1.set(Nested2PartySubIDType_110);
          NstdPtys2SubGrp_NoNested2PartySubIDs_110.insert(Nested2PartySubIDType_110.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_110);

          noNested2PartyIDs_2_1_2_0.addGroup(noNested2PartySubIDs_2_1_0_3_1);
        }
        noLegAllocs_2_1_1.addGroup(noNested2PartyIDs_2_1_2_0);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_2_1_2_1;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_57;
        FIX::Nested2PartyID Nested2PartyID_57("STRING_1442352909");
        noNested2PartyIDs_2_1_2_1.set(Nested2PartyID_57);
        NestedParties2_NoNested2PartyIDs_57.insert(Nested2PartyID_57.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_57('7');
        noNested2PartyIDs_2_1_2_1.set(Nested2PartyIDSource_57);
        NestedParties2_NoNested2PartyIDs_57.insert(Nested2PartyIDSource_57.getString());
        FIX::Nested2PartyRole Nested2PartyRole_57(998991054);
        noNested2PartyIDs_2_1_2_1.set(Nested2PartyRole_57);
        NestedParties2_NoNested2PartyIDs_57.insert(Nested2PartyRole_57.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_57);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_1_1_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_111;
          FIX::Nested2PartySubID Nested2PartySubID_111("STRING_1749588405");
          noNested2PartySubIDs_2_1_1_3_0.set(Nested2PartySubID_111);
          NstdPtys2SubGrp_NoNested2PartySubIDs_111.insert(Nested2PartySubID_111.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_111(1543081482);
          noNested2PartySubIDs_2_1_1_3_0.set(Nested2PartySubIDType_111);
          NstdPtys2SubGrp_NoNested2PartySubIDs_111.insert(Nested2PartySubIDType_111.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_111);

          noNested2PartyIDs_2_1_2_1.addGroup(noNested2PartySubIDs_2_1_1_3_0);
        }
        {
          FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_1_1_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_112;
          FIX::Nested2PartySubID Nested2PartySubID_112("STRING_797144113");
          noNested2PartySubIDs_2_1_1_3_1.set(Nested2PartySubID_112);
          NstdPtys2SubGrp_NoNested2PartySubIDs_112.insert(Nested2PartySubID_112.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_112(1455269856);
          noNested2PartySubIDs_2_1_1_3_1.set(Nested2PartySubIDType_112);
          NstdPtys2SubGrp_NoNested2PartySubIDs_112.insert(Nested2PartySubIDType_112.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_112);

          noNested2PartyIDs_2_1_2_1.addGroup(noNested2PartySubIDs_2_1_1_3_1);
        }
        noLegAllocs_2_1_1.addGroup(noNested2PartyIDs_2_1_2_1);
      }
      noLegs_0_2.addGroup(noLegAllocs_2_1_1);
    }
    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegStipulations noLegStipulations_2_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_17;
      FIX::LegStipulationType LegStipulationType_17("STRING_917247189");
      noLegStipulations_2_1_0.set(LegStipulationType_17);
      LegStipulations_NoLegStipulations_17.insert(LegStipulationType_17.getString());
      FIX::LegStipulationValue LegStipulationValue_17("STRING_451066557");
      noLegStipulations_2_1_0.set(LegStipulationValue_17);
      LegStipulations_NoLegStipulations_17.insert(LegStipulationValue_17.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_17);

      noLegs_0_2.addGroup(noLegStipulations_2_1_0);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoNestedPartyIDs noNestedPartyIDs_2_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_55;
      FIX::NestedPartyID NestedPartyID_55("STRING_1158893723");
      noNestedPartyIDs_2_1_0.set(NestedPartyID_55);
      NestedParties_NoNestedPartyIDs_55.insert(NestedPartyID_55.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_55('1');
      noNestedPartyIDs_2_1_0.set(NestedPartyIDSource_55);
      NestedParties_NoNestedPartyIDs_55.insert(NestedPartyIDSource_55.getString());
      FIX::NestedPartyRole NestedPartyRole_55(2014386477);
      noNestedPartyIDs_2_1_0.set(NestedPartyRole_55);
      NestedParties_NoNestedPartyIDs_55.insert(NestedPartyRole_55.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_55);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_106;
        FIX::NestedPartySubID NestedPartySubID_106("STRING_2113189551");
        noNestedPartySubIDs_2_0_2_0.set(NestedPartySubID_106);
        NstdPtysSubGrp_NoNestedPartySubIDs_106.insert(NestedPartySubID_106.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_106(420019072);
        noNestedPartySubIDs_2_0_2_0.set(NestedPartySubIDType_106);
        NstdPtysSubGrp_NoNestedPartySubIDs_106.insert(NestedPartySubIDType_106.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_106);

        noNestedPartyIDs_2_1_0.addGroup(noNestedPartySubIDs_2_0_2_0);
      }
      noLegs_0_2.addGroup(noNestedPartyIDs_2_1_0);
    }
    msg.addGroup(noLegs_0_2);
  }
  // OrderQtyData
  multiset<string> OrderQtyData_7;
  FIX::CashOrderQty CashOrderQty_7;
  CashOrderQty_7.setString("5966458");
  msg.set(CashOrderQty_7);
  OrderQtyData_7.insert(CashOrderQty_7.getString());
  FIX::OrderPercent OrderPercent_7;
  OrderPercent_7.setString("77.600000");
  msg.set(OrderPercent_7);
  OrderQtyData_7.insert(OrderPercent_7.getString());
  FIX::OrderQty OrderQty_18;
  OrderQty_18.setString("20380172");
  msg.set(OrderQty_18);
  OrderQtyData_7.insert(OrderQty_18.getString());
  FIX::RoundingDirection RoundingDirection_7('1');
  msg.set(RoundingDirection_7);
  OrderQtyData_7.insert(RoundingDirection_7.getString());
  FIX::RoundingModulus RoundingModulus_7;
  RoundingModulus_7.setString("15153411");
  msg.set(RoundingModulus_7);
  OrderQtyData_7.insert(RoundingModulus_7.getString());
  all_values.push_back(OrderQtyData_7);

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::MultilegOrderCancelReplace::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_57;
    FIX::PartyID PartyID_57("STRING_878798300");
    noPartyIDs_0_0.set(PartyID_57);
    Parties_NoPartyIDs_57.insert(PartyID_57.getString());
    FIX::PartyIDSource PartyIDSource_57('2');
    noPartyIDs_0_0.set(PartyIDSource_57);
    Parties_NoPartyIDs_57.insert(PartyIDSource_57.getString());
    FIX::PartyRole PartyRole_57(47);
    noPartyIDs_0_0.set(PartyRole_57);
    Parties_NoPartyIDs_57.insert(PartyRole_57.getString());
    all_values.push_back(Parties_NoPartyIDs_57);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::MultilegOrderCancelReplace::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_113;
      FIX::PartySubID PartySubID_113("STRING_1391454000");
      noPartySubIDs_0_1_0.set(PartySubID_113);
      PtysSubGrp_NoPartySubIDs_113.insert(PartySubID_113.getString());
      FIX::PartySubIDType PartySubIDType_113(33);
      noPartySubIDs_0_1_0.set(PartySubIDType_113);
      PtysSubGrp_NoPartySubIDs_113.insert(PartySubIDType_113.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_113);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_114;
      FIX::PartySubID PartySubID_114("STRING_1276948079");
      noPartySubIDs_0_1_1.set(PartySubID_114);
      PtysSubGrp_NoPartySubIDs_114.insert(PartySubID_114.getString());
      FIX::PartySubIDType PartySubIDType_114(21);
      noPartySubIDs_0_1_1.set(PartySubIDType_114);
      PtysSubGrp_NoPartySubIDs_114.insert(PartySubIDType_114.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_114);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_115;
      FIX::PartySubID PartySubID_115("STRING_286107043");
      noPartySubIDs_0_1_2.set(PartySubID_115);
      PtysSubGrp_NoPartySubIDs_115.insert(PartySubID_115.getString());
      FIX::PartySubIDType PartySubIDType_115(16);
      noPartySubIDs_0_1_2.set(PartySubIDType_115);
      PtysSubGrp_NoPartySubIDs_115.insert(PartySubIDType_115.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_115);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::MultilegOrderCancelReplace::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_58;
    FIX::PartyID PartyID_58("STRING_1773993522");
    noPartyIDs_0_1.set(PartyID_58);
    Parties_NoPartyIDs_58.insert(PartyID_58.getString());
    FIX::PartyIDSource PartyIDSource_58('I');
    noPartyIDs_0_1.set(PartyIDSource_58);
    Parties_NoPartyIDs_58.insert(PartyIDSource_58.getString());
    FIX::PartyRole PartyRole_58(53);
    noPartyIDs_0_1.set(PartyRole_58);
    Parties_NoPartyIDs_58.insert(PartyRole_58.getString());
    all_values.push_back(Parties_NoPartyIDs_58);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::MultilegOrderCancelReplace::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_116;
      FIX::PartySubID PartySubID_116("STRING_1343481656");
      noPartySubIDs_1_1_0.set(PartySubID_116);
      PtysSubGrp_NoPartySubIDs_116.insert(PartySubID_116.getString());
      FIX::PartySubIDType PartySubIDType_116(3);
      noPartySubIDs_1_1_0.set(PartySubIDType_116);
      PtysSubGrp_NoPartySubIDs_116.insert(PartySubIDType_116.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_116);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_117;
      FIX::PartySubID PartySubID_117("STRING_1340901176");
      noPartySubIDs_1_1_1.set(PartySubID_117);
      PtysSubGrp_NoPartySubIDs_117.insert(PartySubID_117.getString());
      FIX::PartySubIDType PartySubIDType_117(30);
      noPartySubIDs_1_1_1.set(PartySubIDType_117);
      PtysSubGrp_NoPartySubIDs_117.insert(PartySubIDType_117.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_117);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_118;
      FIX::PartySubID PartySubID_118("STRING_2123512517");
      noPartySubIDs_1_1_2.set(PartySubID_118);
      PtysSubGrp_NoPartySubIDs_118.insert(PartySubID_118.getString());
      FIX::PartySubIDType PartySubIDType_118(19);
      noPartySubIDs_1_1_2.set(PartySubIDType_118);
      PtysSubGrp_NoPartySubIDs_118.insert(PartySubIDType_118.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_118);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_2);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  // PegInstructions
  multiset<string> PegInstructions_2;
  FIX::PegLimitType PegLimitType_2(0);
  msg.set(PegLimitType_2);
  PegInstructions_2.insert(PegLimitType_2.getString());
  FIX::PegMoveType PegMoveType_2(0);
  msg.set(PegMoveType_2);
  PegInstructions_2.insert(PegMoveType_2.getString());
  FIX::PegOffsetType PegOffsetType_2(2);
  msg.set(PegOffsetType_2);
  PegInstructions_2.insert(PegOffsetType_2.getString());
  FIX::PegOffsetValue PegOffsetValue_2;
  PegOffsetValue_2.setString("6933034");
  msg.set(PegOffsetValue_2);
  PegInstructions_2.insert(PegOffsetValue_2.getString());
  FIX::PegPriceType PegPriceType_2(3);
  msg.set(PegPriceType_2);
  PegInstructions_2.insert(PegPriceType_2.getString());
  FIX::PegRoundDirection PegRoundDirection_2(1);
  msg.set(PegRoundDirection_2);
  PegInstructions_2.insert(PegRoundDirection_2.getString());
  FIX::PegScope PegScope_2(4);
  msg.set(PegScope_2);
  PegInstructions_2.insert(PegScope_2.getString());
  FIX::PegSecurityDesc PegSecurityDesc_2("STRING_153484420");
  msg.set(PegSecurityDesc_2);
  PegInstructions_2.insert(PegSecurityDesc_2.getString());
  FIX::PegSecurityID PegSecurityID_2("STRING_1251102505");
  msg.set(PegSecurityID_2);
  PegInstructions_2.insert(PegSecurityID_2.getString());
  FIX::PegSecurityIDSource PegSecurityIDSource_2("STRING_1292208699");
  msg.set(PegSecurityIDSource_2);
  PegInstructions_2.insert(PegSecurityIDSource_2.getString());
  FIX::PegSymbol PegSymbol_2("STRING_1970642642");
  msg.set(PegSymbol_2);
  PegInstructions_2.insert(PegSymbol_2.getString());
  all_values.push_back(PegInstructions_2);

  // PreAllocMlegGrp
  // Group PreAllocMlegGrp.NoAllocs
  {
    FIX50SP2::MultilegOrderCancelReplace::NoAllocs noAllocs_0_0;
    // PreAllocMlegGrp.NoAllocs
    multiset<string> PreAllocMlegGrp_NoAllocs_0;
    FIX::AllocAccount AllocAccount_17("STRING_1133930276");
    noAllocs_0_0.set(AllocAccount_17);
    PreAllocMlegGrp_NoAllocs_0.insert(AllocAccount_17.getString());
    FIX::AllocAcctIDSource AllocAcctIDSource_17(1238240427);
    noAllocs_0_0.set(AllocAcctIDSource_17);
    PreAllocMlegGrp_NoAllocs_0.insert(AllocAcctIDSource_17.getString());
    FIX::AllocQty AllocQty_16;
    AllocQty_16.setString("10881837");
    noAllocs_0_0.set(AllocQty_16);
    PreAllocMlegGrp_NoAllocs_0.insert(AllocQty_16.getString());
    FIX::AllocSettlCurrency AllocSettlCurrency_11("CHF");
    noAllocs_0_0.set(AllocSettlCurrency_11);
    PreAllocMlegGrp_NoAllocs_0.insert(AllocSettlCurrency_11.getString());
    FIX::IndividualAllocID IndividualAllocID_17("STRING_217648189");
    noAllocs_0_0.set(IndividualAllocID_17);
    PreAllocMlegGrp_NoAllocs_0.insert(IndividualAllocID_17.getString());
    all_values.push_back(PreAllocMlegGrp_NoAllocs_0);

    // NestedParties3
    // Group NestedParties3.NoNested3PartyIDs
    {
      FIX50SP2::MultilegOrderCancelReplace::NoAllocs::NoNested3PartyIDs noNested3PartyIDs_0_1_0;
      // NestedParties3.NoNested3PartyIDs
      multiset<string> NestedParties3_NoNested3PartyIDs_5;
      FIX::Nested3PartyID Nested3PartyID_5("STRING_1101105274");
      noNested3PartyIDs_0_1_0.set(Nested3PartyID_5);
      NestedParties3_NoNested3PartyIDs_5.insert(Nested3PartyID_5.getString());
      FIX::Nested3PartyIDSource Nested3PartyIDSource_5('3');
      noNested3PartyIDs_0_1_0.set(Nested3PartyIDSource_5);
      NestedParties3_NoNested3PartyIDs_5.insert(Nested3PartyIDSource_5.getString());
      FIX::Nested3PartyRole Nested3PartyRole_5(690733764);
      noNested3PartyIDs_0_1_0.set(Nested3PartyRole_5);
      NestedParties3_NoNested3PartyIDs_5.insert(Nested3PartyRole_5.getString());
      all_values.push_back(NestedParties3_NoNested3PartyIDs_5);

      // NstdPtys3SubGrp
      // Group NstdPtys3SubGrp.NoNested3PartySubIDs
      {
        FIX50SP2::MultilegOrderCancelReplace::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_0_0_2_0;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_8;
        FIX::Nested3PartySubID Nested3PartySubID_8("STRING_2017640642");
        noNested3PartySubIDs_0_0_2_0.set(Nested3PartySubID_8);
        NstdPtys3SubGrp_NoNested3PartySubIDs_8.insert(Nested3PartySubID_8.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_8(1114387752);
        noNested3PartySubIDs_0_0_2_0.set(Nested3PartySubIDType_8);
        NstdPtys3SubGrp_NoNested3PartySubIDs_8.insert(Nested3PartySubIDType_8.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_8);

        noNested3PartyIDs_0_1_0.addGroup(noNested3PartySubIDs_0_0_2_0);
      }
      noAllocs_0_0.addGroup(noNested3PartyIDs_0_1_0);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoAllocs::NoNested3PartyIDs noNested3PartyIDs_0_1_1;
      // NestedParties3.NoNested3PartyIDs
      multiset<string> NestedParties3_NoNested3PartyIDs_6;
      FIX::Nested3PartyID Nested3PartyID_6("STRING_185315083");
      noNested3PartyIDs_0_1_1.set(Nested3PartyID_6);
      NestedParties3_NoNested3PartyIDs_6.insert(Nested3PartyID_6.getString());
      FIX::Nested3PartyIDSource Nested3PartyIDSource_6('1');
      noNested3PartyIDs_0_1_1.set(Nested3PartyIDSource_6);
      NestedParties3_NoNested3PartyIDs_6.insert(Nested3PartyIDSource_6.getString());
      FIX::Nested3PartyRole Nested3PartyRole_6(307805280);
      noNested3PartyIDs_0_1_1.set(Nested3PartyRole_6);
      NestedParties3_NoNested3PartyIDs_6.insert(Nested3PartyRole_6.getString());
      all_values.push_back(NestedParties3_NoNested3PartyIDs_6);

      // NstdPtys3SubGrp
      // Group NstdPtys3SubGrp.NoNested3PartySubIDs
      {
        FIX50SP2::MultilegOrderCancelReplace::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_0_1_2_0;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_9;
        FIX::Nested3PartySubID Nested3PartySubID_9("STRING_1480855220");
        noNested3PartySubIDs_0_1_2_0.set(Nested3PartySubID_9);
        NstdPtys3SubGrp_NoNested3PartySubIDs_9.insert(Nested3PartySubID_9.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_9(660116532);
        noNested3PartySubIDs_0_1_2_0.set(Nested3PartySubIDType_9);
        NstdPtys3SubGrp_NoNested3PartySubIDs_9.insert(Nested3PartySubIDType_9.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_9);

        noNested3PartyIDs_0_1_1.addGroup(noNested3PartySubIDs_0_1_2_0);
      }
      noAllocs_0_0.addGroup(noNested3PartyIDs_0_1_1);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoAllocs::NoNested3PartyIDs noNested3PartyIDs_0_1_2;
      // NestedParties3.NoNested3PartyIDs
      multiset<string> NestedParties3_NoNested3PartyIDs_7;
      FIX::Nested3PartyID Nested3PartyID_7("STRING_559977176");
      noNested3PartyIDs_0_1_2.set(Nested3PartyID_7);
      NestedParties3_NoNested3PartyIDs_7.insert(Nested3PartyID_7.getString());
      FIX::Nested3PartyIDSource Nested3PartyIDSource_7('1');
      noNested3PartyIDs_0_1_2.set(Nested3PartyIDSource_7);
      NestedParties3_NoNested3PartyIDs_7.insert(Nested3PartyIDSource_7.getString());
      FIX::Nested3PartyRole Nested3PartyRole_7(1582335883);
      noNested3PartyIDs_0_1_2.set(Nested3PartyRole_7);
      NestedParties3_NoNested3PartyIDs_7.insert(Nested3PartyRole_7.getString());
      all_values.push_back(NestedParties3_NoNested3PartyIDs_7);

      // NstdPtys3SubGrp
      // Group NstdPtys3SubGrp.NoNested3PartySubIDs
      {
        FIX50SP2::MultilegOrderCancelReplace::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_0_2_2_0;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_10;
        FIX::Nested3PartySubID Nested3PartySubID_10("STRING_1586737689");
        noNested3PartySubIDs_0_2_2_0.set(Nested3PartySubID_10);
        NstdPtys3SubGrp_NoNested3PartySubIDs_10.insert(Nested3PartySubID_10.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_10(953717455);
        noNested3PartySubIDs_0_2_2_0.set(Nested3PartySubIDType_10);
        NstdPtys3SubGrp_NoNested3PartySubIDs_10.insert(Nested3PartySubIDType_10.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_10);

        noNested3PartyIDs_0_1_2.addGroup(noNested3PartySubIDs_0_2_2_0);
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
    multiset<string> StrategyParametersGrp_NoStrategyParameters_2;
    FIX::StrategyParameterName StrategyParameterName_2("STRING_1740222109");
    noStrategyParameters_0_0.set(StrategyParameterName_2);
    StrategyParametersGrp_NoStrategyParameters_2.insert(StrategyParameterName_2.getString());
    FIX::StrategyParameterType StrategyParameterType_2(7);
    noStrategyParameters_0_0.set(StrategyParameterType_2);
    StrategyParametersGrp_NoStrategyParameters_2.insert(StrategyParameterType_2.getString());
    FIX::StrategyParameterValue StrategyParameterValue_2("STRING_174873201");
    noStrategyParameters_0_0.set(StrategyParameterValue_2);
    StrategyParametersGrp_NoStrategyParameters_2.insert(StrategyParameterValue_2.getString());
    all_values.push_back(StrategyParametersGrp_NoStrategyParameters_2);

    msg.addGroup(noStrategyParameters_0_0);
  }
  {
    FIX50SP2::MultilegOrderCancelReplace::NoStrategyParameters noStrategyParameters_0_1;
    // StrategyParametersGrp.NoStrategyParameters
    multiset<string> StrategyParametersGrp_NoStrategyParameters_3;
    FIX::StrategyParameterName StrategyParameterName_3("STRING_1563381103");
    noStrategyParameters_0_1.set(StrategyParameterName_3);
    StrategyParametersGrp_NoStrategyParameters_3.insert(StrategyParameterName_3.getString());
    FIX::StrategyParameterType StrategyParameterType_3(9);
    noStrategyParameters_0_1.set(StrategyParameterType_3);
    StrategyParametersGrp_NoStrategyParameters_3.insert(StrategyParameterType_3.getString());
    FIX::StrategyParameterValue StrategyParameterValue_3("STRING_1308803477");
    noStrategyParameters_0_1.set(StrategyParameterValue_3);
    StrategyParametersGrp_NoStrategyParameters_3.insert(StrategyParameterValue_3.getString());
    all_values.push_back(StrategyParametersGrp_NoStrategyParameters_3);

    msg.addGroup(noStrategyParameters_0_1);
  }
  // TrdgSesGrp
  // Group TrdgSesGrp.NoTradingSessions
  {
    FIX50SP2::MultilegOrderCancelReplace::NoTradingSessions noTradingSessions_0_0;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_3;
    FIX::TradingSessionID TradingSessionID_34("STRING_5");
    noTradingSessions_0_0.set(TradingSessionID_34);
    TrdgSesGrp_NoTradingSessions_3.insert(TradingSessionID_34.getString());
    FIX::TradingSessionSubID TradingSessionSubID_34("STRING_3");
    noTradingSessions_0_0.set(TradingSessionSubID_34);
    TrdgSesGrp_NoTradingSessions_3.insert(TradingSessionSubID_34.getString());
    all_values.push_back(TrdgSesGrp_NoTradingSessions_3);

    msg.addGroup(noTradingSessions_0_0);
  }
  {
    FIX50SP2::MultilegOrderCancelReplace::NoTradingSessions noTradingSessions_0_1;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_4;
    FIX::TradingSessionID TradingSessionID_35("STRING_6");
    noTradingSessions_0_1.set(TradingSessionID_35);
    TrdgSesGrp_NoTradingSessions_4.insert(TradingSessionID_35.getString());
    FIX::TradingSessionSubID TradingSessionSubID_35("STRING_7");
    noTradingSessions_0_1.set(TradingSessionSubID_35);
    TrdgSesGrp_NoTradingSessions_4.insert(TradingSessionSubID_35.getString());
    all_values.push_back(TrdgSesGrp_NoTradingSessions_4);

    msg.addGroup(noTradingSessions_0_1);
  }
  {
    FIX50SP2::MultilegOrderCancelReplace::NoTradingSessions noTradingSessions_0_2;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_5;
    FIX::TradingSessionID TradingSessionID_36("STRING_1");
    noTradingSessions_0_2.set(TradingSessionID_36);
    TrdgSesGrp_NoTradingSessions_5.insert(TradingSessionID_36.getString());
    FIX::TradingSessionSubID TradingSessionSubID_36("STRING_6");
    noTradingSessions_0_2.set(TradingSessionSubID_36);
    TrdgSesGrp_NoTradingSessions_5.insert(TradingSessionSubID_36.getString());
    all_values.push_back(TrdgSesGrp_NoTradingSessions_5);

    msg.addGroup(noTradingSessions_0_2);
  }
  // TriggeringInstruction
  multiset<string> TriggeringInstruction_2;
  FIX::TriggerAction TriggerAction_2('2');
  msg.set(TriggerAction_2);
  TriggeringInstruction_2.insert(TriggerAction_2.getString());
  FIX::TriggerNewPrice TriggerNewPrice_2;
  TriggerNewPrice_2.setString("12941781");
  msg.set(TriggerNewPrice_2);
  TriggeringInstruction_2.insert(TriggerNewPrice_2.getString());
  FIX::TriggerNewQty TriggerNewQty_2;
  TriggerNewQty_2.setString("14120748");
  msg.set(TriggerNewQty_2);
  TriggeringInstruction_2.insert(TriggerNewQty_2.getString());
  FIX::TriggerOrderType TriggerOrderType_2('1');
  msg.set(TriggerOrderType_2);
  TriggeringInstruction_2.insert(TriggerOrderType_2.getString());
  FIX::TriggerPrice TriggerPrice_2;
  TriggerPrice_2.setString("2610822");
  msg.set(TriggerPrice_2);
  TriggeringInstruction_2.insert(TriggerPrice_2.getString());
  FIX::TriggerPriceDirection TriggerPriceDirection_2('U');
  msg.set(TriggerPriceDirection_2);
  TriggeringInstruction_2.insert(TriggerPriceDirection_2.getString());
  FIX::TriggerPriceType TriggerPriceType_2('2');
  msg.set(TriggerPriceType_2);
  TriggeringInstruction_2.insert(TriggerPriceType_2.getString());
  FIX::TriggerPriceTypeScope TriggerPriceTypeScope_2('1');
  msg.set(TriggerPriceTypeScope_2);
  TriggeringInstruction_2.insert(TriggerPriceTypeScope_2.getString());
  FIX::TriggerSecurityDesc TriggerSecurityDesc_2("STRING_1429769545");
  msg.set(TriggerSecurityDesc_2);
  TriggeringInstruction_2.insert(TriggerSecurityDesc_2.getString());
  FIX::TriggerSecurityID TriggerSecurityID_2("STRING_252560359");
  msg.set(TriggerSecurityID_2);
  TriggeringInstruction_2.insert(TriggerSecurityID_2.getString());
  FIX::TriggerSecurityIDSource TriggerSecurityIDSource_2("STRING_1229004029");
  msg.set(TriggerSecurityIDSource_2);
  TriggeringInstruction_2.insert(TriggerSecurityIDSource_2.getString());
  FIX::TriggerSymbol TriggerSymbol_2("STRING_1989746721");
  msg.set(TriggerSymbol_2);
  TriggeringInstruction_2.insert(TriggerSymbol_2.getString());
  FIX::TriggerTradingSessionID TriggerTradingSessionID_2("STRING_1576347277");
  msg.set(TriggerTradingSessionID_2);
  TriggeringInstruction_2.insert(TriggerTradingSessionID_2.getString());
  FIX::TriggerTradingSessionSubID TriggerTradingSessionSubID_2("STRING_663856264");
  msg.set(TriggerTradingSessionSubID_2);
  TriggeringInstruction_2.insert(TriggerTradingSessionSubID_2.getString());
  FIX::TriggerType TriggerType_2('4');
  msg.set(TriggerType_2);
  TriggeringInstruction_2.insert(TriggerType_2.getString());
  all_values.push_back(TriggeringInstruction_2);

  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_56;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_56("DATA_1617573719");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_56);
    UnderlyingInstrument_56.insert(EncodedUnderlyingIssuer_56.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_56(2125691829);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_56);
    UnderlyingInstrument_56.insert(EncodedUnderlyingIssuerLen_56.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_56("DATA_608339779");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_56);
    UnderlyingInstrument_56.insert(EncodedUnderlyingSecurityDesc_56.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_56(1674910031);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_56);
    UnderlyingInstrument_56.insert(EncodedUnderlyingSecurityDescLen_56.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_56;
    UnderlyingAdjustedQuantity_56.setString("1530813");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_56);
    UnderlyingInstrument_56.insert(UnderlyingAdjustedQuantity_56.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_56;
    UnderlyingAllocationPercent_56.setString("72.340000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_56);
    UnderlyingInstrument_56.insert(UnderlyingAllocationPercent_56.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_56;
    UnderlyingAttachmentPoint_56.setString("35.000000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_56);
    UnderlyingInstrument_56.insert(UnderlyingAttachmentPoint_56.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_56("STRING_1461884859");
    noUnderlyings_0_0.set(UnderlyingCFICode_56);
    UnderlyingInstrument_56.insert(UnderlyingCFICode_56.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_56("STRING_678375116");
    noUnderlyings_0_0.set(UnderlyingCPProgram_56);
    UnderlyingInstrument_56.insert(UnderlyingCPProgram_56.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_56("STRING_695117079");
    noUnderlyings_0_0.set(UnderlyingCPRegType_56);
    UnderlyingInstrument_56.insert(UnderlyingCPRegType_56.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_56;
    UnderlyingCapValue_56.setString("10011053");
    noUnderlyings_0_0.set(UnderlyingCapValue_56);
    UnderlyingInstrument_56.insert(UnderlyingCapValue_56.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_56;
    UnderlyingCashAmount_56.setString("275");
    noUnderlyings_0_0.set(UnderlyingCashAmount_56);
    UnderlyingInstrument_56.insert(UnderlyingCashAmount_56.getString());
    FIX::UnderlyingCashType UnderlyingCashType_56("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_56);
    UnderlyingInstrument_56.insert(UnderlyingCashType_56.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_56;
    UnderlyingContractMultiplier_56.setString("16045496");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_56);
    UnderlyingInstrument_56.insert(UnderlyingContractMultiplier_56.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_56(422785320);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_56);
    UnderlyingInstrument_56.insert(UnderlyingContractMultiplierUnit_56.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_56("COUNTRY_1584907936");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_56);
    UnderlyingInstrument_56.insert(UnderlyingCountryOfIssue_56.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_56("LOCALMKTDATE_751244129");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_56);
    UnderlyingInstrument_56.insert(UnderlyingCouponPaymentDate_56.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_56;
    UnderlyingCouponRate_56.setString("1.340000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_56);
    UnderlyingInstrument_56.insert(UnderlyingCouponRate_56.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_56("STRING_999270372");
    noUnderlyings_0_0.set(UnderlyingCreditRating_56);
    UnderlyingInstrument_56.insert(UnderlyingCreditRating_56.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_56("GBP");
    noUnderlyings_0_0.set(UnderlyingCurrency_56);
    UnderlyingInstrument_56.insert(UnderlyingCurrency_56.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_56;
    UnderlyingCurrentValue_56.setString("19184591");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_56);
    UnderlyingInstrument_56.insert(UnderlyingCurrentValue_56.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_56;
    UnderlyingDetachmentPoint_56.setString("38.420000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_56);
    UnderlyingInstrument_56.insert(UnderlyingDetachmentPoint_56.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_56;
    UnderlyingDirtyPrice_56.setString("5670522");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_56);
    UnderlyingInstrument_56.insert(UnderlyingDirtyPrice_56.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_56;
    UnderlyingEndPrice_56.setString("235358");
    noUnderlyings_0_0.set(UnderlyingEndPrice_56);
    UnderlyingInstrument_56.insert(UnderlyingEndPrice_56.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_56;
    UnderlyingEndValue_56.setString("6627342");
    noUnderlyings_0_0.set(UnderlyingEndValue_56);
    UnderlyingInstrument_56.insert(UnderlyingEndValue_56.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_56(409315352);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_56);
    UnderlyingInstrument_56.insert(UnderlyingExerciseStyle_56.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_56;
    UnderlyingFXRate_56.setString("15998831");
    noUnderlyings_0_0.set(UnderlyingFXRate_56);
    UnderlyingInstrument_56.insert(UnderlyingFXRate_56.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_56('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_56);
    UnderlyingInstrument_56.insert(UnderlyingFXRateCalc_56.getString());
    FIX::UnderlyingFactor UnderlyingFactor_56;
    UnderlyingFactor_56.setString("15048590");
    noUnderlyings_0_0.set(UnderlyingFactor_56);
    UnderlyingInstrument_56.insert(UnderlyingFactor_56.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_56(468000818);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_56);
    UnderlyingInstrument_56.insert(UnderlyingFlowScheduleType_56.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_56("STRING_796680560");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_56);
    UnderlyingInstrument_56.insert(UnderlyingInstrRegistry_56.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_56("LOCALMKTDATE_1483067213");
    noUnderlyings_0_0.set(UnderlyingIssueDate_56);
    UnderlyingInstrument_56.insert(UnderlyingIssueDate_56.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_56("STRING_1076340598");
    noUnderlyings_0_0.set(UnderlyingIssuer_56);
    UnderlyingInstrument_56.insert(UnderlyingIssuer_56.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_56("STRING_324106943");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_56);
    UnderlyingInstrument_56.insert(UnderlyingLocaleOfIssue_56.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_56("LOCALMKTDATE_1636148595");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_56);
    UnderlyingInstrument_56.insert(UnderlyingMaturityDate_56.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_56("MONTHYEAR_1100577832");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_56);
    UnderlyingInstrument_56.insert(UnderlyingMaturityMonthYear_56.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_56("TZTIMEONLY_2038770444");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_56);
    UnderlyingInstrument_56.insert(UnderlyingMaturityTime_56.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_56;
    UnderlyingNotionalPercentageOutstanding_56.setString("98.060000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_56);
    UnderlyingInstrument_56.insert(UnderlyingNotionalPercentageOutstanding_56.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_56('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_56);
    UnderlyingInstrument_56.insert(UnderlyingOptAttribute_56.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_56;
    UnderlyingOriginalNotionalPercentageOutstanding_56.setString("38.750000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_56);
    UnderlyingInstrument_56.insert(UnderlyingOriginalNotionalPercentageOutstanding_56.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_56("STRING_1951655122");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_56);
    UnderlyingInstrument_56.insert(UnderlyingPriceUnitOfMeasure_56.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_56;
    UnderlyingPriceUnitOfMeasureQty_56.setString("17789805");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_56);
    UnderlyingInstrument_56.insert(UnderlyingPriceUnitOfMeasureQty_56.getString());
    FIX::UnderlyingProduct UnderlyingProduct_56(479622721);
    noUnderlyings_0_0.set(UnderlyingProduct_56);
    UnderlyingInstrument_56.insert(UnderlyingProduct_56.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_56(1408721139);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_56);
    UnderlyingInstrument_56.insert(UnderlyingPutOrCall_56.getString());
    FIX::UnderlyingPx UnderlyingPx_56;
    UnderlyingPx_56.setString("542822");
    noUnderlyings_0_0.set(UnderlyingPx_56);
    UnderlyingInstrument_56.insert(UnderlyingPx_56.getString());
    FIX::UnderlyingQty UnderlyingQty_56;
    UnderlyingQty_56.setString("20645306");
    noUnderlyings_0_0.set(UnderlyingQty_56);
    UnderlyingInstrument_56.insert(UnderlyingQty_56.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_56("LOCALMKTDATE_12481620");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_56);
    UnderlyingInstrument_56.insert(UnderlyingRedemptionDate_56.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_56("STRING_1889142337");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_56);
    UnderlyingInstrument_56.insert(UnderlyingRepoCollateralSecurityType_56.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_56;
    UnderlyingRepurchaseRate_56.setString("73.820000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_56);
    UnderlyingInstrument_56.insert(UnderlyingRepurchaseRate_56.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_56(1024807965);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_56);
    UnderlyingInstrument_56.insert(UnderlyingRepurchaseTerm_56.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_56("STRING_1026425071");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_56);
    UnderlyingInstrument_56.insert(UnderlyingRestructuringType_56.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_56("STRING_687292894");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_56);
    UnderlyingInstrument_56.insert(UnderlyingSecurityDesc_56.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_56("EXCHANGE_458538160");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_56);
    UnderlyingInstrument_56.insert(UnderlyingSecurityExchange_56.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_56("STRING_1593477351");
    noUnderlyings_0_0.set(UnderlyingSecurityID_56);
    UnderlyingInstrument_56.insert(UnderlyingSecurityID_56.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_56("STRING_710828764");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_56);
    UnderlyingInstrument_56.insert(UnderlyingSecurityIDSource_56.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_56("STRING_1121272384");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_56);
    UnderlyingInstrument_56.insert(UnderlyingSecuritySubType_56.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_56("STRING_2002792703");
    noUnderlyings_0_0.set(UnderlyingSecurityType_56);
    UnderlyingInstrument_56.insert(UnderlyingSecurityType_56.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_56("STRING_163228264");
    noUnderlyings_0_0.set(UnderlyingSeniority_56);
    UnderlyingInstrument_56.insert(UnderlyingSeniority_56.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_56("STRING_300379224");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_56);
    UnderlyingInstrument_56.insert(UnderlyingSettlMethod_56.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_56(4);
    noUnderlyings_0_0.set(UnderlyingSettlementType_56);
    UnderlyingInstrument_56.insert(UnderlyingSettlementType_56.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_56;
    UnderlyingStartValue_56.setString("6312290");
    noUnderlyings_0_0.set(UnderlyingStartValue_56);
    UnderlyingInstrument_56.insert(UnderlyingStartValue_56.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_56("STRING_1097059784");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_56);
    UnderlyingInstrument_56.insert(UnderlyingStateOrProvinceOfIssue_56.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_56("CAN");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_56);
    UnderlyingInstrument_56.insert(UnderlyingStrikeCurrency_56.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_56;
    UnderlyingStrikePrice_56.setString("14211667");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_56);
    UnderlyingInstrument_56.insert(UnderlyingStrikePrice_56.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_56("STRING_184416599");
    noUnderlyings_0_0.set(UnderlyingSymbol_56);
    UnderlyingInstrument_56.insert(UnderlyingSymbol_56.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_56("STRING_660663865");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_56);
    UnderlyingInstrument_56.insert(UnderlyingSymbolSfx_56.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_56("STRING_1312453524");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_56);
    UnderlyingInstrument_56.insert(UnderlyingTimeUnit_56.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_56("STRING_1134966405");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_56);
    UnderlyingInstrument_56.insert(UnderlyingUnitOfMeasure_56.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_56;
    UnderlyingUnitOfMeasureQty_56.setString("2921331");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_56);
    UnderlyingInstrument_56.insert(UnderlyingUnitOfMeasureQty_56.getString());
    all_values.push_back(UnderlyingInstrument_56);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_114;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_114("STRING_939137880");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_114);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_114.insert(UnderlyingSecurityAltID_114.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_114("STRING_2071113697");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_114);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_114.insert(UnderlyingSecurityAltIDSource_114.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_114);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_115;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_115("STRING_230996472");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_115);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_115.insert(UnderlyingSecurityAltID_115.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_115("STRING_200375371");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_115);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_115.insert(UnderlyingSecurityAltIDSource_115.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_115);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_100;
      FIX::UnderlyingStipType UnderlyingStipType_100("STRING_148043482");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_100);
      UnderlyingStipulations_NoUnderlyingStips_100.insert(UnderlyingStipType_100.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_100("STRING_212856991");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_100);
      UnderlyingStipulations_NoUnderlyingStips_100.insert(UnderlyingStipValue_100.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_100);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_120;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_120("STRING_1064360865");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_120);
      UndlyInstrumentParties_NoUndlyInstrumentParties_120.insert(UnderlyingInstrumentPartyID_120.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_120('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_120);
      UndlyInstrumentParties_NoUndlyInstrumentParties_120.insert(UnderlyingInstrumentPartyIDSource_120.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_120(745996012);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_120);
      UndlyInstrumentParties_NoUndlyInstrumentParties_120.insert(UnderlyingInstrumentPartyRole_120.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_120);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_240;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_240("STRING_1696203116");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_240);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_240.insert(UnderlyingInstrumentPartySubID_240.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_240(191989715);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_240);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_240.insert(UnderlyingInstrumentPartySubIDType_240.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_240);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_241;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_241("STRING_314998875");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_241);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_241.insert(UnderlyingInstrumentPartySubID_241.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_241(669991852);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_241);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_241.insert(UnderlyingInstrumentPartySubIDType_241.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_241);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_121;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_121("STRING_47298771");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_121);
      UndlyInstrumentParties_NoUndlyInstrumentParties_121.insert(UnderlyingInstrumentPartyID_121.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_121('4');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_121);
      UndlyInstrumentParties_NoUndlyInstrumentParties_121.insert(UnderlyingInstrumentPartyIDSource_121.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_121(970371077);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_121);
      UndlyInstrumentParties_NoUndlyInstrumentParties_121.insert(UnderlyingInstrumentPartyRole_121.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_121);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_242;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_242("STRING_1109456223");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_242);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_242.insert(UnderlyingInstrumentPartySubID_242.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_242(2067430861);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_242);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_242.insert(UnderlyingInstrumentPartySubIDType_242.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_242);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_243;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_243("STRING_2103218511");
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubID_243);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_243.insert(UnderlyingInstrumentPartySubID_243.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_243(669542256);
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubIDType_243);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_243.insert(UnderlyingInstrumentPartySubIDType_243.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_243);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_122;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_122("STRING_1341113941");
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyID_122);
      UndlyInstrumentParties_NoUndlyInstrumentParties_122.insert(UnderlyingInstrumentPartyID_122.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_122('1');
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyIDSource_122);
      UndlyInstrumentParties_NoUndlyInstrumentParties_122.insert(UnderlyingInstrumentPartyIDSource_122.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_122(1330206121);
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyRole_122);
      UndlyInstrumentParties_NoUndlyInstrumentParties_122.insert(UnderlyingInstrumentPartyRole_122.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_122);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_244;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_244("STRING_1275117868");
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubID_244);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_244.insert(UnderlyingInstrumentPartySubID_244.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_244(1622339288);
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubIDType_244);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_244.insert(UnderlyingInstrumentPartySubIDType_244.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_244);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_245;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_245("STRING_257457568");
        noUndlyInstrumentPartySubIDs_0_2_2_1.set(UnderlyingInstrumentPartySubID_245);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_245.insert(UnderlyingInstrumentPartySubID_245.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_245(66772100);
        noUndlyInstrumentPartySubIDs_0_2_2_1.set(UnderlyingInstrumentPartySubIDType_245);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_245.insert(UnderlyingInstrumentPartySubIDType_245.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_245);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_1);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_246;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_246("STRING_1545969337");
        noUndlyInstrumentPartySubIDs_0_2_2_2.set(UnderlyingInstrumentPartySubID_246);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_246.insert(UnderlyingInstrumentPartySubID_246.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_246(488454041);
        noUndlyInstrumentPartySubIDs_0_2_2_2.set(UnderlyingInstrumentPartySubIDType_246);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_246.insert(UnderlyingInstrumentPartySubIDType_246.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_246);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_57;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_57("DATA_267147471");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_57);
    UnderlyingInstrument_57.insert(EncodedUnderlyingIssuer_57.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_57(1523881589);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_57);
    UnderlyingInstrument_57.insert(EncodedUnderlyingIssuerLen_57.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_57("DATA_636497523");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_57);
    UnderlyingInstrument_57.insert(EncodedUnderlyingSecurityDesc_57.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_57(480004462);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_57);
    UnderlyingInstrument_57.insert(EncodedUnderlyingSecurityDescLen_57.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_57;
    UnderlyingAdjustedQuantity_57.setString("12434525");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_57);
    UnderlyingInstrument_57.insert(UnderlyingAdjustedQuantity_57.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_57;
    UnderlyingAllocationPercent_57.setString("83.880000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_57);
    UnderlyingInstrument_57.insert(UnderlyingAllocationPercent_57.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_57;
    UnderlyingAttachmentPoint_57.setString("94.180000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_57);
    UnderlyingInstrument_57.insert(UnderlyingAttachmentPoint_57.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_57("STRING_1989448542");
    noUnderlyings_0_1.set(UnderlyingCFICode_57);
    UnderlyingInstrument_57.insert(UnderlyingCFICode_57.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_57("STRING_1305028499");
    noUnderlyings_0_1.set(UnderlyingCPProgram_57);
    UnderlyingInstrument_57.insert(UnderlyingCPProgram_57.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_57("STRING_1266388887");
    noUnderlyings_0_1.set(UnderlyingCPRegType_57);
    UnderlyingInstrument_57.insert(UnderlyingCPRegType_57.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_57;
    UnderlyingCapValue_57.setString("339546");
    noUnderlyings_0_1.set(UnderlyingCapValue_57);
    UnderlyingInstrument_57.insert(UnderlyingCapValue_57.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_57;
    UnderlyingCashAmount_57.setString("16200273");
    noUnderlyings_0_1.set(UnderlyingCashAmount_57);
    UnderlyingInstrument_57.insert(UnderlyingCashAmount_57.getString());
    FIX::UnderlyingCashType UnderlyingCashType_57("STRING_DIFF");
    noUnderlyings_0_1.set(UnderlyingCashType_57);
    UnderlyingInstrument_57.insert(UnderlyingCashType_57.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_57;
    UnderlyingContractMultiplier_57.setString("812533");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_57);
    UnderlyingInstrument_57.insert(UnderlyingContractMultiplier_57.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_57(2098254515);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_57);
    UnderlyingInstrument_57.insert(UnderlyingContractMultiplierUnit_57.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_57("COUNTRY_759268168");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_57);
    UnderlyingInstrument_57.insert(UnderlyingCountryOfIssue_57.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_57("LOCALMKTDATE_1488720239");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_57);
    UnderlyingInstrument_57.insert(UnderlyingCouponPaymentDate_57.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_57;
    UnderlyingCouponRate_57.setString("70.900000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_57);
    UnderlyingInstrument_57.insert(UnderlyingCouponRate_57.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_57("STRING_679215382");
    noUnderlyings_0_1.set(UnderlyingCreditRating_57);
    UnderlyingInstrument_57.insert(UnderlyingCreditRating_57.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_57("USD");
    noUnderlyings_0_1.set(UnderlyingCurrency_57);
    UnderlyingInstrument_57.insert(UnderlyingCurrency_57.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_57;
    UnderlyingCurrentValue_57.setString("20203293");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_57);
    UnderlyingInstrument_57.insert(UnderlyingCurrentValue_57.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_57;
    UnderlyingDetachmentPoint_57.setString("65.650000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_57);
    UnderlyingInstrument_57.insert(UnderlyingDetachmentPoint_57.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_57;
    UnderlyingDirtyPrice_57.setString("9124918");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_57);
    UnderlyingInstrument_57.insert(UnderlyingDirtyPrice_57.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_57;
    UnderlyingEndPrice_57.setString("3789294");
    noUnderlyings_0_1.set(UnderlyingEndPrice_57);
    UnderlyingInstrument_57.insert(UnderlyingEndPrice_57.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_57;
    UnderlyingEndValue_57.setString("7122407");
    noUnderlyings_0_1.set(UnderlyingEndValue_57);
    UnderlyingInstrument_57.insert(UnderlyingEndValue_57.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_57(387347459);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_57);
    UnderlyingInstrument_57.insert(UnderlyingExerciseStyle_57.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_57;
    UnderlyingFXRate_57.setString("6363870");
    noUnderlyings_0_1.set(UnderlyingFXRate_57);
    UnderlyingInstrument_57.insert(UnderlyingFXRate_57.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_57('M');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_57);
    UnderlyingInstrument_57.insert(UnderlyingFXRateCalc_57.getString());
    FIX::UnderlyingFactor UnderlyingFactor_57;
    UnderlyingFactor_57.setString("19333167");
    noUnderlyings_0_1.set(UnderlyingFactor_57);
    UnderlyingInstrument_57.insert(UnderlyingFactor_57.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_57(1124841102);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_57);
    UnderlyingInstrument_57.insert(UnderlyingFlowScheduleType_57.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_57("STRING_1046160356");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_57);
    UnderlyingInstrument_57.insert(UnderlyingInstrRegistry_57.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_57("LOCALMKTDATE_1309714737");
    noUnderlyings_0_1.set(UnderlyingIssueDate_57);
    UnderlyingInstrument_57.insert(UnderlyingIssueDate_57.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_57("STRING_1761338626");
    noUnderlyings_0_1.set(UnderlyingIssuer_57);
    UnderlyingInstrument_57.insert(UnderlyingIssuer_57.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_57("STRING_1526164818");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_57);
    UnderlyingInstrument_57.insert(UnderlyingLocaleOfIssue_57.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_57("LOCALMKTDATE_405683619");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_57);
    UnderlyingInstrument_57.insert(UnderlyingMaturityDate_57.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_57("MONTHYEAR_1314713366");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_57);
    UnderlyingInstrument_57.insert(UnderlyingMaturityMonthYear_57.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_57("TZTIMEONLY_1096350588");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_57);
    UnderlyingInstrument_57.insert(UnderlyingMaturityTime_57.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_57;
    UnderlyingNotionalPercentageOutstanding_57.setString("85.140000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_57);
    UnderlyingInstrument_57.insert(UnderlyingNotionalPercentageOutstanding_57.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_57('4');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_57);
    UnderlyingInstrument_57.insert(UnderlyingOptAttribute_57.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_57;
    UnderlyingOriginalNotionalPercentageOutstanding_57.setString("58.270000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_57);
    UnderlyingInstrument_57.insert(UnderlyingOriginalNotionalPercentageOutstanding_57.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_57("STRING_281603124");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_57);
    UnderlyingInstrument_57.insert(UnderlyingPriceUnitOfMeasure_57.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_57;
    UnderlyingPriceUnitOfMeasureQty_57.setString("20922855");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_57);
    UnderlyingInstrument_57.insert(UnderlyingPriceUnitOfMeasureQty_57.getString());
    FIX::UnderlyingProduct UnderlyingProduct_57(4152919);
    noUnderlyings_0_1.set(UnderlyingProduct_57);
    UnderlyingInstrument_57.insert(UnderlyingProduct_57.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_57(362856505);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_57);
    UnderlyingInstrument_57.insert(UnderlyingPutOrCall_57.getString());
    FIX::UnderlyingPx UnderlyingPx_57;
    UnderlyingPx_57.setString("20430564");
    noUnderlyings_0_1.set(UnderlyingPx_57);
    UnderlyingInstrument_57.insert(UnderlyingPx_57.getString());
    FIX::UnderlyingQty UnderlyingQty_57;
    UnderlyingQty_57.setString("7634210");
    noUnderlyings_0_1.set(UnderlyingQty_57);
    UnderlyingInstrument_57.insert(UnderlyingQty_57.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_57("LOCALMKTDATE_1851576744");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_57);
    UnderlyingInstrument_57.insert(UnderlyingRedemptionDate_57.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_57("STRING_955799902");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_57);
    UnderlyingInstrument_57.insert(UnderlyingRepoCollateralSecurityType_57.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_57;
    UnderlyingRepurchaseRate_57.setString("64.690000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_57);
    UnderlyingInstrument_57.insert(UnderlyingRepurchaseRate_57.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_57(1148548199);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_57);
    UnderlyingInstrument_57.insert(UnderlyingRepurchaseTerm_57.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_57("STRING_538085600");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_57);
    UnderlyingInstrument_57.insert(UnderlyingRestructuringType_57.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_57("STRING_1315482145");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_57);
    UnderlyingInstrument_57.insert(UnderlyingSecurityDesc_57.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_57("EXCHANGE_585671116");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_57);
    UnderlyingInstrument_57.insert(UnderlyingSecurityExchange_57.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_57("STRING_1450577419");
    noUnderlyings_0_1.set(UnderlyingSecurityID_57);
    UnderlyingInstrument_57.insert(UnderlyingSecurityID_57.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_57("STRING_1694411638");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_57);
    UnderlyingInstrument_57.insert(UnderlyingSecurityIDSource_57.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_57("STRING_1297911901");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_57);
    UnderlyingInstrument_57.insert(UnderlyingSecuritySubType_57.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_57("STRING_1837924879");
    noUnderlyings_0_1.set(UnderlyingSecurityType_57);
    UnderlyingInstrument_57.insert(UnderlyingSecurityType_57.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_57("STRING_183315051");
    noUnderlyings_0_1.set(UnderlyingSeniority_57);
    UnderlyingInstrument_57.insert(UnderlyingSeniority_57.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_57("STRING_2076924786");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_57);
    UnderlyingInstrument_57.insert(UnderlyingSettlMethod_57.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_57(5);
    noUnderlyings_0_1.set(UnderlyingSettlementType_57);
    UnderlyingInstrument_57.insert(UnderlyingSettlementType_57.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_57;
    UnderlyingStartValue_57.setString("13081561");
    noUnderlyings_0_1.set(UnderlyingStartValue_57);
    UnderlyingInstrument_57.insert(UnderlyingStartValue_57.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_57("STRING_975601494");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_57);
    UnderlyingInstrument_57.insert(UnderlyingStateOrProvinceOfIssue_57.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_57("USD");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_57);
    UnderlyingInstrument_57.insert(UnderlyingStrikeCurrency_57.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_57;
    UnderlyingStrikePrice_57.setString("3542826");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_57);
    UnderlyingInstrument_57.insert(UnderlyingStrikePrice_57.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_57("STRING_1191672736");
    noUnderlyings_0_1.set(UnderlyingSymbol_57);
    UnderlyingInstrument_57.insert(UnderlyingSymbol_57.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_57("STRING_89240850");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_57);
    UnderlyingInstrument_57.insert(UnderlyingSymbolSfx_57.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_57("STRING_1450633252");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_57);
    UnderlyingInstrument_57.insert(UnderlyingTimeUnit_57.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_57("STRING_1439321250");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_57);
    UnderlyingInstrument_57.insert(UnderlyingUnitOfMeasure_57.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_57;
    UnderlyingUnitOfMeasureQty_57.setString("5614990");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_57);
    UnderlyingInstrument_57.insert(UnderlyingUnitOfMeasureQty_57.getString());
    all_values.push_back(UnderlyingInstrument_57);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_116;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_116("STRING_1720924374");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_116);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_116.insert(UnderlyingSecurityAltID_116.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_116("STRING_506301013");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_116);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_116.insert(UnderlyingSecurityAltIDSource_116.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_116);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_101;
      FIX::UnderlyingStipType UnderlyingStipType_101("STRING_2083780879");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_101);
      UnderlyingStipulations_NoUnderlyingStips_101.insert(UnderlyingStipType_101.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_101("STRING_401873825");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_101);
      UnderlyingStipulations_NoUnderlyingStips_101.insert(UnderlyingStipValue_101.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_101);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_102;
      FIX::UnderlyingStipType UnderlyingStipType_102("STRING_285979438");
      noUnderlyingStips_1_1_1.set(UnderlyingStipType_102);
      UnderlyingStipulations_NoUnderlyingStips_102.insert(UnderlyingStipType_102.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_102("STRING_1787873976");
      noUnderlyingStips_1_1_1.set(UnderlyingStipValue_102);
      UnderlyingStipulations_NoUnderlyingStips_102.insert(UnderlyingStipValue_102.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_102);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_123;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_123("STRING_1728615908");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_123);
      UndlyInstrumentParties_NoUndlyInstrumentParties_123.insert(UnderlyingInstrumentPartyID_123.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_123('7');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_123);
      UndlyInstrumentParties_NoUndlyInstrumentParties_123.insert(UnderlyingInstrumentPartyIDSource_123.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_123(1895759327);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_123);
      UndlyInstrumentParties_NoUndlyInstrumentParties_123.insert(UnderlyingInstrumentPartyRole_123.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_123);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_247;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_247("STRING_1374609643");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_247);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_247.insert(UnderlyingInstrumentPartySubID_247.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_247(1198853099);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_247);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_247.insert(UnderlyingInstrumentPartySubIDType_247.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_247);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_248;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_248("STRING_443542395");
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubID_248);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_248.insert(UnderlyingInstrumentPartySubID_248.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_248(525037896);
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubIDType_248);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_248.insert(UnderlyingInstrumentPartySubIDType_248.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_248);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  {
    FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings noUnderlyings_0_2;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_58;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_58("DATA_889294330");
    noUnderlyings_0_2.set(EncodedUnderlyingIssuer_58);
    UnderlyingInstrument_58.insert(EncodedUnderlyingIssuer_58.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_58(626857446);
    noUnderlyings_0_2.set(EncodedUnderlyingIssuerLen_58);
    UnderlyingInstrument_58.insert(EncodedUnderlyingIssuerLen_58.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_58("DATA_454479034");
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDesc_58);
    UnderlyingInstrument_58.insert(EncodedUnderlyingSecurityDesc_58.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_58(365568709);
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDescLen_58);
    UnderlyingInstrument_58.insert(EncodedUnderlyingSecurityDescLen_58.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_58;
    UnderlyingAdjustedQuantity_58.setString("19350136");
    noUnderlyings_0_2.set(UnderlyingAdjustedQuantity_58);
    UnderlyingInstrument_58.insert(UnderlyingAdjustedQuantity_58.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_58;
    UnderlyingAllocationPercent_58.setString("5.280000");
    noUnderlyings_0_2.set(UnderlyingAllocationPercent_58);
    UnderlyingInstrument_58.insert(UnderlyingAllocationPercent_58.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_58;
    UnderlyingAttachmentPoint_58.setString("78.260000");
    noUnderlyings_0_2.set(UnderlyingAttachmentPoint_58);
    UnderlyingInstrument_58.insert(UnderlyingAttachmentPoint_58.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_58("STRING_709541084");
    noUnderlyings_0_2.set(UnderlyingCFICode_58);
    UnderlyingInstrument_58.insert(UnderlyingCFICode_58.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_58("STRING_1784363192");
    noUnderlyings_0_2.set(UnderlyingCPProgram_58);
    UnderlyingInstrument_58.insert(UnderlyingCPProgram_58.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_58("STRING_195746915");
    noUnderlyings_0_2.set(UnderlyingCPRegType_58);
    UnderlyingInstrument_58.insert(UnderlyingCPRegType_58.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_58;
    UnderlyingCapValue_58.setString("7987819");
    noUnderlyings_0_2.set(UnderlyingCapValue_58);
    UnderlyingInstrument_58.insert(UnderlyingCapValue_58.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_58;
    UnderlyingCashAmount_58.setString("10875127");
    noUnderlyings_0_2.set(UnderlyingCashAmount_58);
    UnderlyingInstrument_58.insert(UnderlyingCashAmount_58.getString());
    FIX::UnderlyingCashType UnderlyingCashType_58("STRING_DIFF");
    noUnderlyings_0_2.set(UnderlyingCashType_58);
    UnderlyingInstrument_58.insert(UnderlyingCashType_58.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_58;
    UnderlyingContractMultiplier_58.setString("13602810");
    noUnderlyings_0_2.set(UnderlyingContractMultiplier_58);
    UnderlyingInstrument_58.insert(UnderlyingContractMultiplier_58.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_58(605918228);
    noUnderlyings_0_2.set(UnderlyingContractMultiplierUnit_58);
    UnderlyingInstrument_58.insert(UnderlyingContractMultiplierUnit_58.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_58("COUNTRY_1208508892");
    noUnderlyings_0_2.set(UnderlyingCountryOfIssue_58);
    UnderlyingInstrument_58.insert(UnderlyingCountryOfIssue_58.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_58("LOCALMKTDATE_1866582017");
    noUnderlyings_0_2.set(UnderlyingCouponPaymentDate_58);
    UnderlyingInstrument_58.insert(UnderlyingCouponPaymentDate_58.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_58;
    UnderlyingCouponRate_58.setString("65.790000");
    noUnderlyings_0_2.set(UnderlyingCouponRate_58);
    UnderlyingInstrument_58.insert(UnderlyingCouponRate_58.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_58("STRING_1144806123");
    noUnderlyings_0_2.set(UnderlyingCreditRating_58);
    UnderlyingInstrument_58.insert(UnderlyingCreditRating_58.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_58("USD");
    noUnderlyings_0_2.set(UnderlyingCurrency_58);
    UnderlyingInstrument_58.insert(UnderlyingCurrency_58.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_58;
    UnderlyingCurrentValue_58.setString("7851964");
    noUnderlyings_0_2.set(UnderlyingCurrentValue_58);
    UnderlyingInstrument_58.insert(UnderlyingCurrentValue_58.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_58;
    UnderlyingDetachmentPoint_58.setString("59.220000");
    noUnderlyings_0_2.set(UnderlyingDetachmentPoint_58);
    UnderlyingInstrument_58.insert(UnderlyingDetachmentPoint_58.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_58;
    UnderlyingDirtyPrice_58.setString("21430719");
    noUnderlyings_0_2.set(UnderlyingDirtyPrice_58);
    UnderlyingInstrument_58.insert(UnderlyingDirtyPrice_58.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_58;
    UnderlyingEndPrice_58.setString("15741349");
    noUnderlyings_0_2.set(UnderlyingEndPrice_58);
    UnderlyingInstrument_58.insert(UnderlyingEndPrice_58.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_58;
    UnderlyingEndValue_58.setString("12269216");
    noUnderlyings_0_2.set(UnderlyingEndValue_58);
    UnderlyingInstrument_58.insert(UnderlyingEndValue_58.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_58(892202683);
    noUnderlyings_0_2.set(UnderlyingExerciseStyle_58);
    UnderlyingInstrument_58.insert(UnderlyingExerciseStyle_58.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_58;
    UnderlyingFXRate_58.setString("8012609");
    noUnderlyings_0_2.set(UnderlyingFXRate_58);
    UnderlyingInstrument_58.insert(UnderlyingFXRate_58.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_58('D');
    noUnderlyings_0_2.set(UnderlyingFXRateCalc_58);
    UnderlyingInstrument_58.insert(UnderlyingFXRateCalc_58.getString());
    FIX::UnderlyingFactor UnderlyingFactor_58;
    UnderlyingFactor_58.setString("13357450");
    noUnderlyings_0_2.set(UnderlyingFactor_58);
    UnderlyingInstrument_58.insert(UnderlyingFactor_58.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_58(1326298869);
    noUnderlyings_0_2.set(UnderlyingFlowScheduleType_58);
    UnderlyingInstrument_58.insert(UnderlyingFlowScheduleType_58.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_58("STRING_1167585382");
    noUnderlyings_0_2.set(UnderlyingInstrRegistry_58);
    UnderlyingInstrument_58.insert(UnderlyingInstrRegistry_58.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_58("LOCALMKTDATE_1962602524");
    noUnderlyings_0_2.set(UnderlyingIssueDate_58);
    UnderlyingInstrument_58.insert(UnderlyingIssueDate_58.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_58("STRING_1780777903");
    noUnderlyings_0_2.set(UnderlyingIssuer_58);
    UnderlyingInstrument_58.insert(UnderlyingIssuer_58.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_58("STRING_1533154092");
    noUnderlyings_0_2.set(UnderlyingLocaleOfIssue_58);
    UnderlyingInstrument_58.insert(UnderlyingLocaleOfIssue_58.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_58("LOCALMKTDATE_1750132477");
    noUnderlyings_0_2.set(UnderlyingMaturityDate_58);
    UnderlyingInstrument_58.insert(UnderlyingMaturityDate_58.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_58("MONTHYEAR_1063374783");
    noUnderlyings_0_2.set(UnderlyingMaturityMonthYear_58);
    UnderlyingInstrument_58.insert(UnderlyingMaturityMonthYear_58.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_58("TZTIMEONLY_537228270");
    noUnderlyings_0_2.set(UnderlyingMaturityTime_58);
    UnderlyingInstrument_58.insert(UnderlyingMaturityTime_58.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_58;
    UnderlyingNotionalPercentageOutstanding_58.setString("99.130000");
    noUnderlyings_0_2.set(UnderlyingNotionalPercentageOutstanding_58);
    UnderlyingInstrument_58.insert(UnderlyingNotionalPercentageOutstanding_58.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_58('7');
    noUnderlyings_0_2.set(UnderlyingOptAttribute_58);
    UnderlyingInstrument_58.insert(UnderlyingOptAttribute_58.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_58;
    UnderlyingOriginalNotionalPercentageOutstanding_58.setString("51.850000");
    noUnderlyings_0_2.set(UnderlyingOriginalNotionalPercentageOutstanding_58);
    UnderlyingInstrument_58.insert(UnderlyingOriginalNotionalPercentageOutstanding_58.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_58("STRING_1110971848");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasure_58);
    UnderlyingInstrument_58.insert(UnderlyingPriceUnitOfMeasure_58.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_58;
    UnderlyingPriceUnitOfMeasureQty_58.setString("17877671");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasureQty_58);
    UnderlyingInstrument_58.insert(UnderlyingPriceUnitOfMeasureQty_58.getString());
    FIX::UnderlyingProduct UnderlyingProduct_58(220559703);
    noUnderlyings_0_2.set(UnderlyingProduct_58);
    UnderlyingInstrument_58.insert(UnderlyingProduct_58.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_58(323769204);
    noUnderlyings_0_2.set(UnderlyingPutOrCall_58);
    UnderlyingInstrument_58.insert(UnderlyingPutOrCall_58.getString());
    FIX::UnderlyingPx UnderlyingPx_58;
    UnderlyingPx_58.setString("2462017");
    noUnderlyings_0_2.set(UnderlyingPx_58);
    UnderlyingInstrument_58.insert(UnderlyingPx_58.getString());
    FIX::UnderlyingQty UnderlyingQty_58;
    UnderlyingQty_58.setString("14290685");
    noUnderlyings_0_2.set(UnderlyingQty_58);
    UnderlyingInstrument_58.insert(UnderlyingQty_58.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_58("LOCALMKTDATE_42867573");
    noUnderlyings_0_2.set(UnderlyingRedemptionDate_58);
    UnderlyingInstrument_58.insert(UnderlyingRedemptionDate_58.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_58("STRING_374678284");
    noUnderlyings_0_2.set(UnderlyingRepoCollateralSecurityType_58);
    UnderlyingInstrument_58.insert(UnderlyingRepoCollateralSecurityType_58.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_58;
    UnderlyingRepurchaseRate_58.setString("10.700000");
    noUnderlyings_0_2.set(UnderlyingRepurchaseRate_58);
    UnderlyingInstrument_58.insert(UnderlyingRepurchaseRate_58.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_58(163839767);
    noUnderlyings_0_2.set(UnderlyingRepurchaseTerm_58);
    UnderlyingInstrument_58.insert(UnderlyingRepurchaseTerm_58.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_58("STRING_789134302");
    noUnderlyings_0_2.set(UnderlyingRestructuringType_58);
    UnderlyingInstrument_58.insert(UnderlyingRestructuringType_58.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_58("STRING_1211587522");
    noUnderlyings_0_2.set(UnderlyingSecurityDesc_58);
    UnderlyingInstrument_58.insert(UnderlyingSecurityDesc_58.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_58("EXCHANGE_1642485689");
    noUnderlyings_0_2.set(UnderlyingSecurityExchange_58);
    UnderlyingInstrument_58.insert(UnderlyingSecurityExchange_58.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_58("STRING_784722580");
    noUnderlyings_0_2.set(UnderlyingSecurityID_58);
    UnderlyingInstrument_58.insert(UnderlyingSecurityID_58.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_58("STRING_638238852");
    noUnderlyings_0_2.set(UnderlyingSecurityIDSource_58);
    UnderlyingInstrument_58.insert(UnderlyingSecurityIDSource_58.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_58("STRING_721923643");
    noUnderlyings_0_2.set(UnderlyingSecuritySubType_58);
    UnderlyingInstrument_58.insert(UnderlyingSecuritySubType_58.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_58("STRING_1676925263");
    noUnderlyings_0_2.set(UnderlyingSecurityType_58);
    UnderlyingInstrument_58.insert(UnderlyingSecurityType_58.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_58("STRING_1439499826");
    noUnderlyings_0_2.set(UnderlyingSeniority_58);
    UnderlyingInstrument_58.insert(UnderlyingSeniority_58.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_58("STRING_1000214695");
    noUnderlyings_0_2.set(UnderlyingSettlMethod_58);
    UnderlyingInstrument_58.insert(UnderlyingSettlMethod_58.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_58(4);
    noUnderlyings_0_2.set(UnderlyingSettlementType_58);
    UnderlyingInstrument_58.insert(UnderlyingSettlementType_58.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_58;
    UnderlyingStartValue_58.setString("6183150");
    noUnderlyings_0_2.set(UnderlyingStartValue_58);
    UnderlyingInstrument_58.insert(UnderlyingStartValue_58.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_58("STRING_20316430");
    noUnderlyings_0_2.set(UnderlyingStateOrProvinceOfIssue_58);
    UnderlyingInstrument_58.insert(UnderlyingStateOrProvinceOfIssue_58.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_58("CAN");
    noUnderlyings_0_2.set(UnderlyingStrikeCurrency_58);
    UnderlyingInstrument_58.insert(UnderlyingStrikeCurrency_58.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_58;
    UnderlyingStrikePrice_58.setString("15534705");
    noUnderlyings_0_2.set(UnderlyingStrikePrice_58);
    UnderlyingInstrument_58.insert(UnderlyingStrikePrice_58.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_58("STRING_282954398");
    noUnderlyings_0_2.set(UnderlyingSymbol_58);
    UnderlyingInstrument_58.insert(UnderlyingSymbol_58.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_58("STRING_1314984086");
    noUnderlyings_0_2.set(UnderlyingSymbolSfx_58);
    UnderlyingInstrument_58.insert(UnderlyingSymbolSfx_58.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_58("STRING_2090698792");
    noUnderlyings_0_2.set(UnderlyingTimeUnit_58);
    UnderlyingInstrument_58.insert(UnderlyingTimeUnit_58.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_58("STRING_595144312");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasure_58);
    UnderlyingInstrument_58.insert(UnderlyingUnitOfMeasure_58.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_58;
    UnderlyingUnitOfMeasureQty_58.setString("20152384");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasureQty_58);
    UnderlyingInstrument_58.insert(UnderlyingUnitOfMeasureQty_58.getString());
    all_values.push_back(UnderlyingInstrument_58);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_117;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_117("STRING_1706116160");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltID_117);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_117.insert(UnderlyingSecurityAltID_117.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_117("STRING_1655521890");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltIDSource_117);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_117.insert(UnderlyingSecurityAltIDSource_117.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_117);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_118;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_118("STRING_896750033");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltID_118);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_118.insert(UnderlyingSecurityAltID_118.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_118("STRING_2029885364");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltIDSource_118);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_118.insert(UnderlyingSecurityAltIDSource_118.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_118);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_1);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_119;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_119("STRING_1901723594");
      noUnderlyingSecurityAltID_2_1_2.set(UnderlyingSecurityAltID_119);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_119.insert(UnderlyingSecurityAltID_119.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_119("STRING_178334980");
      noUnderlyingSecurityAltID_2_1_2.set(UnderlyingSecurityAltIDSource_119);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_119.insert(UnderlyingSecurityAltIDSource_119.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_119);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_103;
      FIX::UnderlyingStipType UnderlyingStipType_103("STRING_128918230");
      noUnderlyingStips_2_1_0.set(UnderlyingStipType_103);
      UnderlyingStipulations_NoUnderlyingStips_103.insert(UnderlyingStipType_103.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_103("STRING_604726050");
      noUnderlyingStips_2_1_0.set(UnderlyingStipValue_103);
      UnderlyingStipulations_NoUnderlyingStips_103.insert(UnderlyingStipValue_103.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_103);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_104;
      FIX::UnderlyingStipType UnderlyingStipType_104("STRING_89109057");
      noUnderlyingStips_2_1_1.set(UnderlyingStipType_104);
      UnderlyingStipulations_NoUnderlyingStips_104.insert(UnderlyingStipType_104.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_104("STRING_918052532");
      noUnderlyingStips_2_1_1.set(UnderlyingStipValue_104);
      UnderlyingStipulations_NoUnderlyingStips_104.insert(UnderlyingStipValue_104.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_104);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_1);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_105;
      FIX::UnderlyingStipType UnderlyingStipType_105("STRING_1816313572");
      noUnderlyingStips_2_1_2.set(UnderlyingStipType_105);
      UnderlyingStipulations_NoUnderlyingStips_105.insert(UnderlyingStipType_105.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_105("STRING_1731594746");
      noUnderlyingStips_2_1_2.set(UnderlyingStipValue_105);
      UnderlyingStipulations_NoUnderlyingStips_105.insert(UnderlyingStipValue_105.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_105);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_124;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_124("STRING_307068777");
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyID_124);
      UndlyInstrumentParties_NoUndlyInstrumentParties_124.insert(UnderlyingInstrumentPartyID_124.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_124('3');
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyIDSource_124);
      UndlyInstrumentParties_NoUndlyInstrumentParties_124.insert(UnderlyingInstrumentPartyIDSource_124.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_124(1232216727);
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyRole_124);
      UndlyInstrumentParties_NoUndlyInstrumentParties_124.insert(UnderlyingInstrumentPartyRole_124.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_124);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_249;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_249("STRING_1306249437");
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubID_249);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_249.insert(UnderlyingInstrumentPartySubID_249.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_249(2097403420);
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubIDType_249);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_249.insert(UnderlyingInstrumentPartySubIDType_249.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_249);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_250;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_250("STRING_217400002");
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubID_250);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_250.insert(UnderlyingInstrumentPartySubID_250.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_250(1326565867);
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubIDType_250);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_250.insert(UnderlyingInstrumentPartySubIDType_250.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_250);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_1);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_0);
    }
    msg.addGroup(noUnderlyings_0_2);
  }

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
