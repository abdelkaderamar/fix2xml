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

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::MultilegOrderCancelReplace msg;

  list<multiset<string>> all_values;
  multiset<string> MultilegOrderCancelReplace_0;
  FIX::Account Account_15("STRING_684141003");
  msg.set(Account_15);
  MultilegOrderCancelReplace_0.insert(Account_15.getString());
  FIX::AccountType AccountType_12(7);
  msg.set(AccountType_12);
  MultilegOrderCancelReplace_0.insert(AccountType_12.getString());
  FIX::AcctIDSource AcctIDSource_8(1);
  msg.set(AcctIDSource_8);
  MultilegOrderCancelReplace_0.insert(AcctIDSource_8.getString());
  FIX::AllocID AllocID_10("STRING_1827141119");
  msg.set(AllocID_10);
  MultilegOrderCancelReplace_0.insert(AllocID_10.getString());
  FIX::BookingType BookingType_13(2);
  msg.set(BookingType_13);
  MultilegOrderCancelReplace_0.insert(BookingType_13.getString());
  FIX::BookingUnit BookingUnit_3('0');
  msg.set(BookingUnit_3);
  MultilegOrderCancelReplace_0.insert(BookingUnit_3.getString());
  FIX::CancellationRights CancellationRights_2('O');
  msg.set(CancellationRights_2);
  MultilegOrderCancelReplace_0.insert(CancellationRights_2.getString());
  FIX::CashMargin CashMargin_3('2');
  msg.set(CashMargin_3);
  MultilegOrderCancelReplace_0.insert(CashMargin_3.getString());
  FIX::ClOrdID ClOrdID_27("STRING_67594213");
  msg.set(ClOrdID_27);
  MultilegOrderCancelReplace_0.insert(ClOrdID_27.getString());
  FIX::ClOrdLinkID ClOrdLinkID_6("STRING_251279813");
  msg.set(ClOrdLinkID_6);
  MultilegOrderCancelReplace_0.insert(ClOrdLinkID_6.getString());
  FIX::ClearingFeeIndicator ClearingFeeIndicator_8("STRING_B");
  msg.set(ClearingFeeIndicator_8);
  MultilegOrderCancelReplace_0.insert(ClearingFeeIndicator_8.getString());
  FIX::ComplianceID ComplianceID_5("STRING_2065168192");
  msg.set(ComplianceID_5);
  MultilegOrderCancelReplace_0.insert(ComplianceID_5.getString());
  FIX::CoveredOrUncovered CoveredOrUncovered_2(1);
  msg.set(CoveredOrUncovered_2);
  MultilegOrderCancelReplace_0.insert(CoveredOrUncovered_2.getString());
  FIX::Currency Currency_40("JPY");
  msg.set(Currency_40);
  MultilegOrderCancelReplace_0.insert(Currency_40.getString());
  FIX::CustOrderCapacity CustOrderCapacity_6(4);
  msg.set(CustOrderCapacity_6);
  MultilegOrderCancelReplace_0.insert(CustOrderCapacity_6.getString());
  FIX::DayBookingInst DayBookingInst_3('0');
  msg.set(DayBookingInst_3);
  MultilegOrderCancelReplace_0.insert(DayBookingInst_3.getString());
  FIX::Designation Designation_2("STRING_1991276019");
  msg.set(Designation_2);
  MultilegOrderCancelReplace_0.insert(Designation_2.getString());
  FIX::EffectiveTime EffectiveTime_2(FIX::UTCTIMESTAMP(14, 24, 34, 19, 7, 2017));
  msg.set(EffectiveTime_2);
  MultilegOrderCancelReplace_0.insert(EffectiveTime_2.getString());
  FIX::EncodedText EncodedText_60("DATA_298666006");
  msg.set(EncodedText_60);
  MultilegOrderCancelReplace_0.insert(EncodedText_60.getString());
  FIX::EncodedTextLen EncodedTextLen_60(1209600020);
  msg.set(EncodedTextLen_60);
  MultilegOrderCancelReplace_0.insert(EncodedTextLen_60.getString());
  FIX::ExDestination ExDestination_1("EXCHANGE_1012386985");
  msg.set(ExDestination_1);
  MultilegOrderCancelReplace_0.insert(ExDestination_1.getString());
  FIX::ExDestinationIDSource ExDestinationIDSource_1('C');
  msg.set(ExDestinationIDSource_1);
  MultilegOrderCancelReplace_0.insert(ExDestinationIDSource_1.getString());
  FIX::ExecInst ExecInst_7("MULTIPLECHARVALUE_Z");
  msg.set(ExecInst_7);
  MultilegOrderCancelReplace_0.insert(ExecInst_7.getString());
  FIX::ExpireDate ExpireDate_8("LOCALMKTDATE_2019620957");
  msg.set(ExpireDate_8);
  MultilegOrderCancelReplace_0.insert(ExpireDate_8.getString());
  FIX::ExpireTime ExpireTime_9(FIX::UTCTIMESTAMP(22, 21, 50, 13, 2, 2012));
  msg.set(ExpireTime_9);
  MultilegOrderCancelReplace_0.insert(ExpireTime_9.getString());
  FIX::ForexReq ForexReq_3(false);
  msg.set(ForexReq_3);
  MultilegOrderCancelReplace_0.insert(ForexReq_3.getString());
  FIX::GTBookingInst GTBookingInst_2(2);
  msg.set(GTBookingInst_2);
  MultilegOrderCancelReplace_0.insert(GTBookingInst_2.getString());
  FIX::HandlInst HandlInst_2('3');
  msg.set(HandlInst_2);
  MultilegOrderCancelReplace_0.insert(HandlInst_2.getString());
  FIX::IOIID IOIID_2("STRING_1541232861");
  msg.set(IOIID_2);
  MultilegOrderCancelReplace_0.insert(IOIID_2.getString());
  FIX::LocateReqd LocateReqd_1(true);
  msg.set(LocateReqd_1);
  MultilegOrderCancelReplace_0.insert(LocateReqd_1.getString());
  FIX::MatchIncrement MatchIncrement_2;
  MatchIncrement_2.setString("17825752");
  msg.set(MatchIncrement_2);
  MultilegOrderCancelReplace_0.insert(MatchIncrement_2.getString());
  FIX::MaxFloor MaxFloor_2;
  MaxFloor_2.setString("16073294");
  msg.set(MaxFloor_2);
  MultilegOrderCancelReplace_0.insert(MaxFloor_2.getString());
  FIX::MaxPriceLevels MaxPriceLevels_2(988075290);
  msg.set(MaxPriceLevels_2);
  MultilegOrderCancelReplace_0.insert(MaxPriceLevels_2.getString());
  FIX::MaxShow MaxShow_2;
  MaxShow_2.setString("3256802");
  msg.set(MaxShow_2);
  MultilegOrderCancelReplace_0.insert(MaxShow_2.getString());
  FIX::MinQty MinQty_7;
  MinQty_7.setString("2645214");
  msg.set(MinQty_7);
  MultilegOrderCancelReplace_0.insert(MinQty_7.getString());
  FIX::MoneyLaunderingStatus MoneyLaunderingStatus_2('N');
  msg.set(MoneyLaunderingStatus_2);
  MultilegOrderCancelReplace_0.insert(MoneyLaunderingStatus_2.getString());
  FIX::MultiLegRptTypeReq MultiLegRptTypeReq_0(2);
  msg.set(MultiLegRptTypeReq_0);
  MultilegOrderCancelReplace_0.insert(MultiLegRptTypeReq_0.getString());
  FIX::MultilegModel MultilegModel_7(1);
  msg.set(MultilegModel_7);
  MultilegOrderCancelReplace_0.insert(MultilegModel_7.getString());
  FIX::MultilegPriceMethod MultilegPriceMethod_7(5);
  msg.set(MultilegPriceMethod_7);
  MultilegOrderCancelReplace_0.insert(MultilegPriceMethod_7.getString());
  FIX::OrdType OrdType_40('9');
  msg.set(OrdType_40);
  MultilegOrderCancelReplace_0.insert(OrdType_40.getString());
  FIX::OrderCapacity OrderCapacity_16('P');
  msg.set(OrderCapacity_16);
  MultilegOrderCancelReplace_0.insert(OrderCapacity_16.getString());
  FIX::OrderID OrderID_28("STRING_1958979131");
  msg.set(OrderID_28);
  MultilegOrderCancelReplace_0.insert(OrderID_28.getString());
  FIX::OrderRestrictions OrderRestrictions_11("MULTIPLECHARVALUE_E");
  msg.set(OrderRestrictions_11);
  MultilegOrderCancelReplace_0.insert(OrderRestrictions_11.getString());
  FIX::OrigClOrdID OrigClOrdID_6("STRING_197112269");
  msg.set(OrigClOrdID_6);
  MultilegOrderCancelReplace_0.insert(OrigClOrdID_6.getString());
  FIX::OrigOrdModTime OrigOrdModTime_3(FIX::UTCTIMESTAMP(7, 25, 27, 12, 10, 2005));
  msg.set(OrigOrdModTime_3);
  MultilegOrderCancelReplace_0.insert(OrigOrdModTime_3.getString());
  FIX::ParticipationRate ParticipationRate_2;
  ParticipationRate_2.setString("91.410000");
  msg.set(ParticipationRate_2);
  MultilegOrderCancelReplace_0.insert(ParticipationRate_2.getString());
  FIX::PositionEffect PositionEffect_6('R');
  msg.set(PositionEffect_6);
  MultilegOrderCancelReplace_0.insert(PositionEffect_6.getString());
  FIX::PreTradeAnonymity PreTradeAnonymity_3(true);
  msg.set(PreTradeAnonymity_3);
  MultilegOrderCancelReplace_0.insert(PreTradeAnonymity_3.getString());
  FIX::PreallocMethod PreallocMethod_3('0');
  msg.set(PreallocMethod_3);
  MultilegOrderCancelReplace_0.insert(PreallocMethod_3.getString());
  FIX::PrevClosePx PrevClosePx_3;
  PrevClosePx_3.setString("9658666");
  msg.set(PrevClosePx_3);
  MultilegOrderCancelReplace_0.insert(PrevClosePx_3.getString());
  FIX::Price Price_14;
  Price_14.setString("1325826");
  msg.set(Price_14);
  MultilegOrderCancelReplace_0.insert(Price_14.getString());
  FIX::PriceProtectionScope PriceProtectionScope_2('0');
  msg.set(PriceProtectionScope_2);
  MultilegOrderCancelReplace_0.insert(PriceProtectionScope_2.getString());
  FIX::PriceType PriceType_28(9);
  msg.set(PriceType_28);
  MultilegOrderCancelReplace_0.insert(PriceType_28.getString());
  FIX::ProcessCode ProcessCode_7('5');
  msg.set(ProcessCode_7);
  MultilegOrderCancelReplace_0.insert(ProcessCode_7.getString());
  FIX::QtyType QtyType_15(0);
  msg.set(QtyType_15);
  MultilegOrderCancelReplace_0.insert(QtyType_15.getString());
  FIX::QuoteID QuoteID_3("STRING_1770047569");
  msg.set(QuoteID_3);
  MultilegOrderCancelReplace_0.insert(QuoteID_3.getString());
  FIX::RegistID RegistID_2("STRING_1133661400");
  msg.set(RegistID_2);
  MultilegOrderCancelReplace_0.insert(RegistID_2.getString());
  FIX::RiskFreeRate RiskFreeRate_1;
  RiskFreeRate_1.setString("13817117");
  msg.set(RiskFreeRate_1);
  MultilegOrderCancelReplace_0.insert(RiskFreeRate_1.getString());
  FIX::SecondaryClOrdID SecondaryClOrdID_25("STRING_2095727864");
  msg.set(SecondaryClOrdID_25);
  MultilegOrderCancelReplace_0.insert(SecondaryClOrdID_25.getString());
  FIX::SettlCurrency SettlCurrency_14("CHF");
  msg.set(SettlCurrency_14);
  MultilegOrderCancelReplace_0.insert(SettlCurrency_14.getString());
  FIX::SettlDate SettlDate_32("LOCALMKTDATE_1878040266");
  msg.set(SettlDate_32);
  MultilegOrderCancelReplace_0.insert(SettlDate_32.getString());
  FIX::SettlType SettlType_19("STRING_1");
  msg.set(SettlType_19);
  MultilegOrderCancelReplace_0.insert(SettlType_19.getString());
  FIX::Side Side_26('D');
  msg.set(Side_26);
  MultilegOrderCancelReplace_0.insert(Side_26.getString());
  FIX::SolicitedFlag SolicitedFlag_3(true);
  msg.set(SolicitedFlag_3);
  MultilegOrderCancelReplace_0.insert(SolicitedFlag_3.getString());
  FIX::StopPx StopPx_2;
  StopPx_2.setString("14499557");
  msg.set(StopPx_2);
  MultilegOrderCancelReplace_0.insert(StopPx_2.getString());
  FIX::SwapPoints SwapPoints_0;
  SwapPoints_0.setString("1068923");
  msg.set(SwapPoints_0);
  MultilegOrderCancelReplace_0.insert(SwapPoints_0.getString());
  FIX::TargetStrategy TargetStrategy_2(2);
  msg.set(TargetStrategy_2);
  MultilegOrderCancelReplace_0.insert(TargetStrategy_2.getString());
  FIX::TargetStrategyParameters TargetStrategyParameters_2("STRING_1647068054");
  msg.set(TargetStrategyParameters_2);
  MultilegOrderCancelReplace_0.insert(TargetStrategyParameters_2.getString());
  FIX::Text Text_60("STRING_1127987880");
  msg.set(Text_60);
  MultilegOrderCancelReplace_0.insert(Text_60.getString());
  FIX::TimeInForce TimeInForce_30('0');
  msg.set(TimeInForce_30);
  MultilegOrderCancelReplace_0.insert(TimeInForce_30.getString());
  FIX::TradeDate TradeDate_18("LOCALMKTDATE_1445182111");
  msg.set(TradeDate_18);
  MultilegOrderCancelReplace_0.insert(TradeDate_18.getString());
  FIX::TradeOriginationDate TradeOriginationDate_10("LOCALMKTDATE_263030899");
  msg.set(TradeOriginationDate_10);
  MultilegOrderCancelReplace_0.insert(TradeOriginationDate_10.getString());
  FIX::TransactTime TransactTime_34(FIX::UTCTIMESTAMP(16, 48, 4, 4, 7, 2010));
  msg.set(TransactTime_34);
  MultilegOrderCancelReplace_0.insert(TransactTime_34.getString());
  all_values.push_back(MultilegOrderCancelReplace_0);

  // CommissionData
  multiset<string> CommissionData_12;
  FIX::CommCurrency CommCurrency_12("CHF");
  msg.set(CommCurrency_12);
  CommissionData_12.insert(CommCurrency_12.getString());
  FIX::CommType CommType_12('4');
  msg.set(CommType_12);
  CommissionData_12.insert(CommType_12.getString());
  FIX::Commission Commission_12;
  Commission_12.setString("3823513");
  msg.set(Commission_12);
  CommissionData_12.insert(Commission_12.getString());
  FIX::FundRenewWaiv FundRenewWaiv_12('Y');
  msg.set(FundRenewWaiv_12);
  CommissionData_12.insert(FundRenewWaiv_12.getString());
  all_values.push_back(CommissionData_12);

  // DiscretionInstructions
  multiset<string> DiscretionInstructions_2;
  FIX::DiscretionInst DiscretionInst_2('6');
  msg.set(DiscretionInst_2);
  DiscretionInstructions_2.insert(DiscretionInst_2.getString());
  FIX::DiscretionLimitType DiscretionLimitType_2(0);
  msg.set(DiscretionLimitType_2);
  DiscretionInstructions_2.insert(DiscretionLimitType_2.getString());
  FIX::DiscretionMoveType DiscretionMoveType_2(0);
  msg.set(DiscretionMoveType_2);
  DiscretionInstructions_2.insert(DiscretionMoveType_2.getString());
  FIX::DiscretionOffsetType DiscretionOffsetType_2(3);
  msg.set(DiscretionOffsetType_2);
  DiscretionInstructions_2.insert(DiscretionOffsetType_2.getString());
  FIX::DiscretionOffsetValue DiscretionOffsetValue_2;
  DiscretionOffsetValue_2.setString("21006431");
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
  DisplayHighQty_2.setString("18311997");
  msg.set(DisplayHighQty_2);
  DisplayInstruction_2.insert(DisplayHighQty_2.getString());
  FIX::DisplayLowQty DisplayLowQty_2;
  DisplayLowQty_2.setString("3913177");
  msg.set(DisplayLowQty_2);
  DisplayInstruction_2.insert(DisplayLowQty_2.getString());
  FIX::DisplayMethod DisplayMethod_2('4');
  msg.set(DisplayMethod_2);
  DisplayInstruction_2.insert(DisplayMethod_2.getString());
  FIX::DisplayMinIncr DisplayMinIncr_2;
  DisplayMinIncr_2.setString("18341822");
  msg.set(DisplayMinIncr_2);
  DisplayInstruction_2.insert(DisplayMinIncr_2.getString());
  FIX::DisplayQty DisplayQty_2;
  DisplayQty_2.setString("18412735");
  msg.set(DisplayQty_2);
  DisplayInstruction_2.insert(DisplayQty_2.getString());
  FIX::DisplayWhen DisplayWhen_2('2');
  msg.set(DisplayWhen_2);
  DisplayInstruction_2.insert(DisplayWhen_2.getString());
  FIX::RefreshQty RefreshQty_2;
  RefreshQty_2.setString("14468338");
  msg.set(RefreshQty_2);
  DisplayInstruction_2.insert(RefreshQty_2.getString());
  FIX::SecondaryDisplayQty SecondaryDisplayQty_2;
  SecondaryDisplayQty_2.setString("13408579");
  msg.set(SecondaryDisplayQty_2);
  DisplayInstruction_2.insert(SecondaryDisplayQty_2.getString());
  all_values.push_back(DisplayInstruction_2);

  // Instrument
  multiset<string> Instrument_43;
  FIX::AttachmentPoint AttachmentPoint_43;
  AttachmentPoint_43.setString("74.590000");
  msg.set(AttachmentPoint_43);
  Instrument_43.insert(AttachmentPoint_43.getString());
  FIX::CFICode CFICode_43("STRING_1681541673");
  msg.set(CFICode_43);
  Instrument_43.insert(CFICode_43.getString());
  FIX::CPProgram CPProgram_43(99);
  msg.set(CPProgram_43);
  Instrument_43.insert(CPProgram_43.getString());
  FIX::CPRegType CPRegType_43("STRING_1867618358");
  msg.set(CPRegType_43);
  Instrument_43.insert(CPRegType_43.getString());
  FIX::CapPrice CapPrice_43;
  CapPrice_43.setString("2629592");
  msg.set(CapPrice_43);
  Instrument_43.insert(CapPrice_43.getString());
  FIX::ContractMultiplier ContractMultiplier_43;
  ContractMultiplier_43.setString("195117");
  msg.set(ContractMultiplier_43);
  Instrument_43.insert(ContractMultiplier_43.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_43(0);
  msg.set(ContractMultiplierUnit_43);
  Instrument_43.insert(ContractMultiplierUnit_43.getString());
  FIX::ContractSettlMonth ContractSettlMonth_43("MONTHYEAR_613406020");
  msg.set(ContractSettlMonth_43);
  Instrument_43.insert(ContractSettlMonth_43.getString());
  FIX::CountryOfIssue CountryOfIssue_43("COUNTRY_1596007792");
  msg.set(CountryOfIssue_43);
  Instrument_43.insert(CountryOfIssue_43.getString());
  FIX::CouponPaymentDate CouponPaymentDate_43("LOCALMKTDATE_970636392");
  msg.set(CouponPaymentDate_43);
  Instrument_43.insert(CouponPaymentDate_43.getString());
  FIX::CouponRate CouponRate_43;
  CouponRate_43.setString("97.100000");
  msg.set(CouponRate_43);
  Instrument_43.insert(CouponRate_43.getString());
  FIX::CreditRating CreditRating_43("STRING_1990886845");
  msg.set(CreditRating_43);
  Instrument_43.insert(CreditRating_43.getString());
  FIX::DatedDate DatedDate_43("LOCALMKTDATE_2047235739");
  msg.set(DatedDate_43);
  Instrument_43.insert(DatedDate_43.getString());
  FIX::DetachmentPoint DetachmentPoint_43;
  DetachmentPoint_43.setString("96.610000");
  msg.set(DetachmentPoint_43);
  Instrument_43.insert(DetachmentPoint_43.getString());
  FIX::EncodedIssuer EncodedIssuer_43("DATA_225754563");
  msg.set(EncodedIssuer_43);
  Instrument_43.insert(EncodedIssuer_43.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_43(502683344);
  msg.set(EncodedIssuerLen_43);
  Instrument_43.insert(EncodedIssuerLen_43.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_43("DATA_1263646083");
  msg.set(EncodedSecurityDesc_43);
  Instrument_43.insert(EncodedSecurityDesc_43.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_43(230669850);
  msg.set(EncodedSecurityDescLen_43);
  Instrument_43.insert(EncodedSecurityDescLen_43.getString());
  FIX::ExerciseStyle ExerciseStyle_43(0);
  msg.set(ExerciseStyle_43);
  Instrument_43.insert(ExerciseStyle_43.getString());
  FIX::Factor Factor_43;
  Factor_43.setString("12718606");
  msg.set(Factor_43);
  Instrument_43.insert(Factor_43.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_43(true);
  msg.set(FlexProductEligibilityIndicator_43);
  Instrument_43.insert(FlexProductEligibilityIndicator_43.getString());
  FIX::FlexibleIndicator FlexibleIndicator_43(true);
  msg.set(FlexibleIndicator_43);
  Instrument_43.insert(FlexibleIndicator_43.getString());
  FIX::FloorPrice FloorPrice_43;
  FloorPrice_43.setString("13461709");
  msg.set(FloorPrice_43);
  Instrument_43.insert(FloorPrice_43.getString());
  FIX::FlowScheduleType FlowScheduleType_43(3);
  msg.set(FlowScheduleType_43);
  Instrument_43.insert(FlowScheduleType_43.getString());
  FIX::InstrRegistry InstrRegistry_43("STRING_1470401984");
  msg.set(InstrRegistry_43);
  Instrument_43.insert(InstrRegistry_43.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_43('1');
  msg.set(InstrmtAssignmentMethod_43);
  Instrument_43.insert(InstrmtAssignmentMethod_43.getString());
  FIX::InterestAccrualDate InterestAccrualDate_43("LOCALMKTDATE_1701727719");
  msg.set(InterestAccrualDate_43);
  Instrument_43.insert(InterestAccrualDate_43.getString());
  FIX::IssueDate IssueDate_43("LOCALMKTDATE_1164191874");
  msg.set(IssueDate_43);
  Instrument_43.insert(IssueDate_43.getString());
  FIX::Issuer Issuer_43("STRING_44994063");
  msg.set(Issuer_43);
  Instrument_43.insert(Issuer_43.getString());
  FIX::ListMethod ListMethod_43(0);
  msg.set(ListMethod_43);
  Instrument_43.insert(ListMethod_43.getString());
  FIX::LocaleOfIssue LocaleOfIssue_43("STRING_357566170");
  msg.set(LocaleOfIssue_43);
  Instrument_43.insert(LocaleOfIssue_43.getString());
  FIX::MaturityDate MaturityDate_43("LOCALMKTDATE_1649581522");
  msg.set(MaturityDate_43);
  Instrument_43.insert(MaturityDate_43.getString());
  FIX::MaturityMonthYear MaturityMonthYear_43("MONTHYEAR_535135979");
  msg.set(MaturityMonthYear_43);
  Instrument_43.insert(MaturityMonthYear_43.getString());
  FIX::MaturityTime MaturityTime_43("TZTIMEONLY_996122577");
  msg.set(MaturityTime_43);
  Instrument_43.insert(MaturityTime_43.getString());
  FIX::MinPriceIncrement MinPriceIncrement_43;
  MinPriceIncrement_43.setString("13697162");
  msg.set(MinPriceIncrement_43);
  Instrument_43.insert(MinPriceIncrement_43.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_43;
  MinPriceIncrementAmount_43.setString("7980952");
  msg.set(MinPriceIncrementAmount_43);
  Instrument_43.insert(MinPriceIncrementAmount_43.getString());
  FIX::NTPositionLimit NTPositionLimit_43(1015634297);
  msg.set(NTPositionLimit_43);
  Instrument_43.insert(NTPositionLimit_43.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_43;
  NotionalPercentageOutstanding_43.setString("59.700000");
  msg.set(NotionalPercentageOutstanding_43);
  Instrument_43.insert(NotionalPercentageOutstanding_43.getString());
  FIX::OptAttribute OptAttribute_43('1');
  msg.set(OptAttribute_43);
  Instrument_43.insert(OptAttribute_43.getString());
  FIX::OptPayoutAmount OptPayoutAmount_43;
  OptPayoutAmount_43.setString("4641584");
  msg.set(OptPayoutAmount_43);
  Instrument_43.insert(OptPayoutAmount_43.getString());
  FIX::OptPayoutType OptPayoutType_43(3);
  msg.set(OptPayoutType_43);
  Instrument_43.insert(OptPayoutType_43.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_43;
  OriginalNotionalPercentageOutstanding_43.setString("9.860000");
  msg.set(OriginalNotionalPercentageOutstanding_43);
  Instrument_43.insert(OriginalNotionalPercentageOutstanding_43.getString());
  FIX::Pool Pool_43("STRING_307561639");
  msg.set(Pool_43);
  Instrument_43.insert(Pool_43.getString());
  FIX::PositionLimit PositionLimit_43(119240805);
  msg.set(PositionLimit_43);
  Instrument_43.insert(PositionLimit_43.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_43("STRING_PCTPAR");
  msg.set(PriceQuoteMethod_43);
  Instrument_43.insert(PriceQuoteMethod_43.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_43("STRING_533316202");
  msg.set(PriceUnitOfMeasure_43);
  Instrument_43.insert(PriceUnitOfMeasure_43.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_43;
  PriceUnitOfMeasureQty_43.setString("6219241");
  msg.set(PriceUnitOfMeasureQty_43);
  Instrument_43.insert(PriceUnitOfMeasureQty_43.getString());
  FIX::Product Product_45(5);
  msg.set(Product_45);
  Instrument_43.insert(Product_45.getString());
  FIX::ProductComplex ProductComplex_43("STRING_763986053");
  msg.set(ProductComplex_43);
  Instrument_43.insert(ProductComplex_43.getString());
  FIX::PutOrCall PutOrCall_43(0);
  msg.set(PutOrCall_43);
  Instrument_43.insert(PutOrCall_43.getString());
  FIX::RedemptionDate RedemptionDate_43("LOCALMKTDATE_251010054");
  msg.set(RedemptionDate_43);
  Instrument_43.insert(RedemptionDate_43.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_43("STRING_947815407");
  msg.set(RepoCollateralSecurityType_43);
  Instrument_43.insert(RepoCollateralSecurityType_43.getString());
  FIX::RepurchaseRate RepurchaseRate_43;
  RepurchaseRate_43.setString("7.310000");
  msg.set(RepurchaseRate_43);
  Instrument_43.insert(RepurchaseRate_43.getString());
  FIX::RepurchaseTerm RepurchaseTerm_43(1597180983);
  msg.set(RepurchaseTerm_43);
  Instrument_43.insert(RepurchaseTerm_43.getString());
  FIX::RestructuringType RestructuringType_43("STRING_MM");
  msg.set(RestructuringType_43);
  Instrument_43.insert(RestructuringType_43.getString());
  FIX::SecurityDesc SecurityDesc_43("STRING_1115719067");
  msg.set(SecurityDesc_43);
  Instrument_43.insert(SecurityDesc_43.getString());
  FIX::SecurityExchange SecurityExchange_43("EXCHANGE_1165575468");
  msg.set(SecurityExchange_43);
  Instrument_43.insert(SecurityExchange_43.getString());
  FIX::SecurityGroup SecurityGroup_43("STRING_369604953");
  msg.set(SecurityGroup_43);
  Instrument_43.insert(SecurityGroup_43.getString());
  FIX::SecurityID SecurityID_43("STRING_132427293");
  msg.set(SecurityID_43);
  Instrument_43.insert(SecurityID_43.getString());
  FIX::SecurityIDSource SecurityIDSource_43("STRING_I");
  msg.set(SecurityIDSource_43);
  Instrument_43.insert(SecurityIDSource_43.getString());
  FIX::SecurityStatus SecurityStatus_43("STRING_2");
  msg.set(SecurityStatus_43);
  Instrument_43.insert(SecurityStatus_43.getString());
  FIX::SecuritySubType SecuritySubType_44("STRING_489993463");
  msg.set(SecuritySubType_44);
  Instrument_43.insert(SecuritySubType_44.getString());
  FIX::SecurityType SecurityType_45("STRING_CTB");
  msg.set(SecurityType_45);
  Instrument_43.insert(SecurityType_45.getString());
  FIX::Seniority Seniority_43("STRING_SR");
  msg.set(Seniority_43);
  Instrument_43.insert(Seniority_43.getString());
  FIX::SettlMethod SettlMethod_43('C');
  msg.set(SettlMethod_43);
  Instrument_43.insert(SettlMethod_43.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_43("STRING_2082383638");
  msg.set(SettleOnOpenFlag_43);
  Instrument_43.insert(SettleOnOpenFlag_43.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_43("STRING_556430494");
  msg.set(StateOrProvinceOfIssue_43);
  Instrument_43.insert(StateOrProvinceOfIssue_43.getString());
  FIX::StrikeCurrency StrikeCurrency_43("EUR");
  msg.set(StrikeCurrency_43);
  Instrument_43.insert(StrikeCurrency_43.getString());
  FIX::StrikeMultiplier StrikeMultiplier_43;
  StrikeMultiplier_43.setString("19679317");
  msg.set(StrikeMultiplier_43);
  Instrument_43.insert(StrikeMultiplier_43.getString());
  FIX::StrikePrice StrikePrice_43;
  StrikePrice_43.setString("8184251");
  msg.set(StrikePrice_43);
  Instrument_43.insert(StrikePrice_43.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_43(1);
  msg.set(StrikePriceBoundaryMethod_43);
  Instrument_43.insert(StrikePriceBoundaryMethod_43.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_43;
  StrikePriceBoundaryPrecision_43.setString("91.080000");
  msg.set(StrikePriceBoundaryPrecision_43);
  Instrument_43.insert(StrikePriceBoundaryPrecision_43.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_43(3);
  msg.set(StrikePriceDeterminationMethod_43);
  Instrument_43.insert(StrikePriceDeterminationMethod_43.getString());
  FIX::StrikeValue StrikeValue_43;
  StrikeValue_43.setString("16699654");
  msg.set(StrikeValue_43);
  Instrument_43.insert(StrikeValue_43.getString());
  FIX::Symbol Symbol_43("STRING_1204246107");
  msg.set(Symbol_43);
  Instrument_43.insert(Symbol_43.getString());
  FIX::SymbolSfx SymbolSfx_43("STRING_WI");
  msg.set(SymbolSfx_43);
  Instrument_43.insert(SymbolSfx_43.getString());
  FIX::TimeUnit TimeUnit_43("STRING_Min");
  msg.set(TimeUnit_43);
  Instrument_43.insert(TimeUnit_43.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_43(3);
  msg.set(UnderlyingPriceDeterminationMethod_43);
  Instrument_43.insert(UnderlyingPriceDeterminationMethod_43.getString());
  FIX::UnitOfMeasure UnitOfMeasure_43("STRING_Bbl");
  msg.set(UnitOfMeasure_43);
  Instrument_43.insert(UnitOfMeasure_43.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_43;
  UnitOfMeasureQty_43.setString("8581224");
  msg.set(UnitOfMeasureQty_43);
  Instrument_43.insert(UnitOfMeasureQty_43.getString());
  FIX::ValuationMethod ValuationMethod_43("STRING_FUT");
  msg.set(ValuationMethod_43);
  Instrument_43.insert(ValuationMethod_43.getString());
  all_values.push_back(Instrument_43);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::MultilegOrderCancelReplace::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_86;
    FIX::ComplexEventCondition ComplexEventCondition_86(1);
    noComplexEvents_0_0.set(ComplexEventCondition_86);
    ComplexEvents_NoComplexEvents_86.insert(ComplexEventCondition_86.getString());
    FIX::ComplexEventPrice ComplexEventPrice_86;
    ComplexEventPrice_86.setString("20315865");
    noComplexEvents_0_0.set(ComplexEventPrice_86);
    ComplexEvents_NoComplexEvents_86.insert(ComplexEventPrice_86.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_86(3);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_86);
    ComplexEvents_NoComplexEvents_86.insert(ComplexEventPriceBoundaryMethod_86.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_86;
    ComplexEventPriceBoundaryPrecision_86.setString("86.330000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_86);
    ComplexEvents_NoComplexEvents_86.insert(ComplexEventPriceBoundaryPrecision_86.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_86(1);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_86);
    ComplexEvents_NoComplexEvents_86.insert(ComplexEventPriceTimeType_86.getString());
    FIX::ComplexEventType ComplexEventType_86(5);
    noComplexEvents_0_0.set(ComplexEventType_86);
    ComplexEvents_NoComplexEvents_86.insert(ComplexEventType_86.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_86;
    ComplexOptPayoutAmount_86.setString("17515859");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_86);
    ComplexEvents_NoComplexEvents_86.insert(ComplexOptPayoutAmount_86.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_86);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::MultilegOrderCancelReplace::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_177;
      FIX::ComplexEventEndDate ComplexEventEndDate_177(FIX::UTCTIMESTAMP(21, 49, 19, 2, 5, 2006));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_177);
      ComplexEventDates_NoComplexEventDates_177.insert(ComplexEventEndDate_177.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_177(FIX::UTCTIMESTAMP(17, 36, 35, 24, 9, 2010));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_177);
      ComplexEventDates_NoComplexEventDates_177.insert(ComplexEventStartDate_177.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_177);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::MultilegOrderCancelReplace::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_362;
        FIX::ComplexEventEndTime ComplexEventEndTime_362(FIX::UTCTIMEONLY(11, 4, 38));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_362);
        ComplexEventTimes_NoComplexEventTimes_362.insert(ComplexEventEndTime_362.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_362(FIX::UTCTIMEONLY(16, 54, 6));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_362);
        ComplexEventTimes_NoComplexEventTimes_362.insert(ComplexEventStartTime_362.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_362);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_363;
        FIX::ComplexEventEndTime ComplexEventEndTime_363(FIX::UTCTIMEONLY(6, 45, 0));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_363);
        ComplexEventTimes_NoComplexEventTimes_363.insert(ComplexEventEndTime_363.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_363(FIX::UTCTIMEONLY(22, 38, 50));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_363);
        ComplexEventTimes_NoComplexEventTimes_363.insert(ComplexEventStartTime_363.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_363);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_364;
        FIX::ComplexEventEndTime ComplexEventEndTime_364(FIX::UTCTIMEONLY(12, 31, 30));
        noComplexEventTimes_0_0_2_2.set(ComplexEventEndTime_364);
        ComplexEventTimes_NoComplexEventTimes_364.insert(ComplexEventEndTime_364.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_364(FIX::UTCTIMEONLY(11, 16, 38));
        noComplexEventTimes_0_0_2_2.set(ComplexEventStartTime_364);
        ComplexEventTimes_NoComplexEventTimes_364.insert(ComplexEventStartTime_364.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_364);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_178;
      FIX::ComplexEventEndDate ComplexEventEndDate_178(FIX::UTCTIMESTAMP(20, 13, 25, 20, 4, 2012));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_178);
      ComplexEventDates_NoComplexEventDates_178.insert(ComplexEventEndDate_178.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_178(FIX::UTCTIMESTAMP(6, 3, 26, 23, 12, 2008));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_178);
      ComplexEventDates_NoComplexEventDates_178.insert(ComplexEventStartDate_178.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_178);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::MultilegOrderCancelReplace::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_365;
        FIX::ComplexEventEndTime ComplexEventEndTime_365(FIX::UTCTIMEONLY(15, 7, 1));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_365);
        ComplexEventTimes_NoComplexEventTimes_365.insert(ComplexEventEndTime_365.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_365(FIX::UTCTIMEONLY(17, 40, 7));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_365);
        ComplexEventTimes_NoComplexEventTimes_365.insert(ComplexEventStartTime_365.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_365);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
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
    multiset<string> EvntGrp_NoEvents_79;
    FIX::EventDate EventDate_79("LOCALMKTDATE_1683320252");
    noEvents_0_0.set(EventDate_79);
    EvntGrp_NoEvents_79.insert(EventDate_79.getString());
    FIX::EventPx EventPx_79;
    EventPx_79.setString("5431895");
    noEvents_0_0.set(EventPx_79);
    EvntGrp_NoEvents_79.insert(EventPx_79.getString());
    FIX::EventText EventText_79("STRING_1105873479");
    noEvents_0_0.set(EventText_79);
    EvntGrp_NoEvents_79.insert(EventText_79.getString());
    FIX::EventTime EventTime_79(FIX::UTCTIMESTAMP(14, 47, 56, 19, 9, 2013));
    noEvents_0_0.set(EventTime_79);
    EvntGrp_NoEvents_79.insert(EventTime_79.getString());
    FIX::EventType EventType_79(13);
    noEvents_0_0.set(EventType_79);
    EvntGrp_NoEvents_79.insert(EventType_79.getString());
    all_values.push_back(EvntGrp_NoEvents_79);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::MultilegOrderCancelReplace::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_80;
    FIX::EventDate EventDate_80("LOCALMKTDATE_1274496184");
    noEvents_0_1.set(EventDate_80);
    EvntGrp_NoEvents_80.insert(EventDate_80.getString());
    FIX::EventPx EventPx_80;
    EventPx_80.setString("20475391");
    noEvents_0_1.set(EventPx_80);
    EvntGrp_NoEvents_80.insert(EventPx_80.getString());
    FIX::EventText EventText_80("STRING_273071330");
    noEvents_0_1.set(EventText_80);
    EvntGrp_NoEvents_80.insert(EventText_80.getString());
    FIX::EventTime EventTime_80(FIX::UTCTIMESTAMP(15, 53, 18, 15, 5, 2003));
    noEvents_0_1.set(EventTime_80);
    EvntGrp_NoEvents_80.insert(EventTime_80.getString());
    FIX::EventType EventType_80(5);
    noEvents_0_1.set(EventType_80);
    EvntGrp_NoEvents_80.insert(EventType_80.getString());
    all_values.push_back(EvntGrp_NoEvents_80);

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::MultilegOrderCancelReplace::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_79;
    FIX::InstrumentPartyID InstrumentPartyID_79("STRING_1006356118");
    noInstrumentParties_0_0.set(InstrumentPartyID_79);
    InstrumentParties_NoInstrumentParties_79.insert(InstrumentPartyID_79.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_79('4');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_79);
    InstrumentParties_NoInstrumentParties_79.insert(InstrumentPartyIDSource_79.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_79(113899219);
    noInstrumentParties_0_0.set(InstrumentPartyRole_79);
    InstrumentParties_NoInstrumentParties_79.insert(InstrumentPartyRole_79.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_79);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::MultilegOrderCancelReplace::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_173;
      FIX::InstrumentPartySubID InstrumentPartySubID_173("STRING_1882554689");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_173);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_173.insert(InstrumentPartySubID_173.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_173(104087931);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_173);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_173.insert(InstrumentPartySubIDType_173.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_173);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_174;
      FIX::InstrumentPartySubID InstrumentPartySubID_174("STRING_1838669611");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_174);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_174.insert(InstrumentPartySubID_174.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_174(1366235257);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_174);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_174.insert(InstrumentPartySubIDType_174.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_174);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_175;
      FIX::InstrumentPartySubID InstrumentPartySubID_175("STRING_1787408183");
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubID_175);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_175.insert(InstrumentPartySubID_175.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_175(234375542);
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubIDType_175);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_175.insert(InstrumentPartySubIDType_175.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_175);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::MultilegOrderCancelReplace::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_80;
    FIX::InstrumentPartyID InstrumentPartyID_80("STRING_324625088");
    noInstrumentParties_0_1.set(InstrumentPartyID_80);
    InstrumentParties_NoInstrumentParties_80.insert(InstrumentPartyID_80.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_80('3');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_80);
    InstrumentParties_NoInstrumentParties_80.insert(InstrumentPartyIDSource_80.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_80(1897729252);
    noInstrumentParties_0_1.set(InstrumentPartyRole_80);
    InstrumentParties_NoInstrumentParties_80.insert(InstrumentPartyRole_80.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_80);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::MultilegOrderCancelReplace::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_176;
      FIX::InstrumentPartySubID InstrumentPartySubID_176("STRING_1876171589");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_176);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_176.insert(InstrumentPartySubID_176.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_176(330363791);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_176);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_176.insert(InstrumentPartySubIDType_176.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_176);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_177;
      FIX::InstrumentPartySubID InstrumentPartySubID_177("STRING_2124703468");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_177);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_177.insert(InstrumentPartySubID_177.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_177(674029523);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_177);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_177.insert(InstrumentPartySubIDType_177.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_177);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_178;
      FIX::InstrumentPartySubID InstrumentPartySubID_178("STRING_1322055123");
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubID_178);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_178.insert(InstrumentPartySubID_178.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_178(1251716004);
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubIDType_178);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_178.insert(InstrumentPartySubIDType_178.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_178);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_2);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::MultilegOrderCancelReplace::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_81;
    FIX::InstrumentPartyID InstrumentPartyID_81("STRING_574084988");
    noInstrumentParties_0_2.set(InstrumentPartyID_81);
    InstrumentParties_NoInstrumentParties_81.insert(InstrumentPartyID_81.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_81('1');
    noInstrumentParties_0_2.set(InstrumentPartyIDSource_81);
    InstrumentParties_NoInstrumentParties_81.insert(InstrumentPartyIDSource_81.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_81(250334709);
    noInstrumentParties_0_2.set(InstrumentPartyRole_81);
    InstrumentParties_NoInstrumentParties_81.insert(InstrumentPartyRole_81.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_81);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::MultilegOrderCancelReplace::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_179;
      FIX::InstrumentPartySubID InstrumentPartySubID_179("STRING_163790619");
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubID_179);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_179.insert(InstrumentPartySubID_179.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_179(1468976427);
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubIDType_179);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_179.insert(InstrumentPartySubIDType_179.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_179);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_180;
      FIX::InstrumentPartySubID InstrumentPartySubID_180("STRING_339563502");
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubID_180);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_180.insert(InstrumentPartySubID_180.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_180(1195350236);
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubIDType_180);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_180.insert(InstrumentPartySubIDType_180.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_180);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_1);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_181;
      FIX::InstrumentPartySubID InstrumentPartySubID_181("STRING_1248012658");
      noInstrumentPartySubIDs_2_1_2.set(InstrumentPartySubID_181);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_181.insert(InstrumentPartySubID_181.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_181(171702899);
      noInstrumentPartySubIDs_2_1_2.set(InstrumentPartySubIDType_181);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_181.insert(InstrumentPartySubIDType_181.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_181);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_2);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::MultilegOrderCancelReplace::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_91;
    FIX::SecurityAltID SecurityAltID_91("STRING_106885128");
    noSecurityAltID_0_0.set(SecurityAltID_91);
    SecAltIDGrp_NoSecurityAltID_91.insert(SecurityAltID_91.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_91("STRING_655165162");
    noSecurityAltID_0_0.set(SecurityAltIDSource_91);
    SecAltIDGrp_NoSecurityAltID_91.insert(SecurityAltIDSource_91.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_91);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::MultilegOrderCancelReplace::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_92;
    FIX::SecurityAltID SecurityAltID_92("STRING_884512113");
    noSecurityAltID_0_1.set(SecurityAltID_92);
    SecAltIDGrp_NoSecurityAltID_92.insert(SecurityAltID_92.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_92("STRING_1762197612");
    noSecurityAltID_0_1.set(SecurityAltIDSource_92);
    SecAltIDGrp_NoSecurityAltID_92.insert(SecurityAltIDSource_92.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_92);

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::MultilegOrderCancelReplace::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_93;
    FIX::SecurityAltID SecurityAltID_93("STRING_390236203");
    noSecurityAltID_0_2.set(SecurityAltID_93);
    SecAltIDGrp_NoSecurityAltID_93.insert(SecurityAltID_93.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_93("STRING_988600045");
    noSecurityAltID_0_2.set(SecurityAltIDSource_93);
    SecAltIDGrp_NoSecurityAltID_93.insert(SecurityAltIDSource_93.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_93);

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_86;
  FIX::SecurityXML SecurityXML_87("XMLDATA_1453383575");
  msg.set(SecurityXML_87);
  FIX::SecurityXMLLen SecurityXMLLen_43(1756471461);
  msg.set(SecurityXMLLen_43);
  FIX::SecurityXMLSchema SecurityXMLSchema_43("STRING_628524580");
  msg.set(SecurityXMLSchema_43);
  SecurityXML_86.insert(SecurityXMLSchema_43.getString());
  all_values.push_back(SecurityXML_86);

  // LegOrdGrp
  // Group LegOrdGrp.NoLegs
  {
    FIX50SP2::MultilegOrderCancelReplace::NoLegs noLegs_0_0;
    // LegOrdGrp.NoLegs
    multiset<string> LegOrdGrp_NoLegs_0;
    FIX::LegAllocID LegAllocID_3("STRING_2081096549");
    noLegs_0_0.set(LegAllocID_3);
    LegOrdGrp_NoLegs_0.insert(LegAllocID_3.getString());
    FIX::LegCoveredOrUncovered LegCoveredOrUncovered_3(930145394);
    noLegs_0_0.set(LegCoveredOrUncovered_3);
    LegOrdGrp_NoLegs_0.insert(LegCoveredOrUncovered_3.getString());
    FIX::LegCurrencyRatio LegCurrencyRatio_3;
    LegCurrencyRatio_3.setString("14380047");
    noLegs_0_0.set(LegCurrencyRatio_3);
    LegOrdGrp_NoLegs_0.insert(LegCurrencyRatio_3.getString());
    FIX::LegDividendYield LegDividendYield_3;
    LegDividendYield_3.setString("86.970000");
    noLegs_0_0.set(LegDividendYield_3);
    LegOrdGrp_NoLegs_0.insert(LegDividendYield_3.getString());
    FIX::LegExecInst LegExecInst_3("MULTIPLECHARVALUE_658833335");
    noLegs_0_0.set(LegExecInst_3);
    LegOrdGrp_NoLegs_0.insert(LegExecInst_3.getString());
    FIX::LegOrderQty LegOrderQty_3;
    LegOrderQty_3.setString("17683685");
    noLegs_0_0.set(LegOrderQty_3);
    LegOrdGrp_NoLegs_0.insert(LegOrderQty_3.getString());
    FIX::LegPositionEffect LegPositionEffect_3('6');
    noLegs_0_0.set(LegPositionEffect_3);
    LegOrdGrp_NoLegs_0.insert(LegPositionEffect_3.getString());
    FIX::LegQty LegQty_3;
    LegQty_3.setString("13328628");
    noLegs_0_0.set(LegQty_3);
    LegOrdGrp_NoLegs_0.insert(LegQty_3.getString());
    FIX::LegRefID LegRefID_3("STRING_942939988");
    noLegs_0_0.set(LegRefID_3);
    LegOrdGrp_NoLegs_0.insert(LegRefID_3.getString());
    FIX::LegSettlCurrency LegSettlCurrency_3("USD");
    noLegs_0_0.set(LegSettlCurrency_3);
    LegOrdGrp_NoLegs_0.insert(LegSettlCurrency_3.getString());
    FIX::LegSettlDate LegSettlDate_3("LOCALMKTDATE_390582794");
    noLegs_0_0.set(LegSettlDate_3);
    LegOrdGrp_NoLegs_0.insert(LegSettlDate_3.getString());
    FIX::LegSettlType LegSettlType_3('2');
    noLegs_0_0.set(LegSettlType_3);
    LegOrdGrp_NoLegs_0.insert(LegSettlType_3.getString());
    FIX::LegSwapType LegSwapType_3(4);
    noLegs_0_0.set(LegSwapType_3);
    LegOrdGrp_NoLegs_0.insert(LegSwapType_3.getString());
    FIX::LegVolatility LegVolatility_3;
    LegVolatility_3.setString("5543734");
    noLegs_0_0.set(LegVolatility_3);
    LegOrdGrp_NoLegs_0.insert(LegVolatility_3.getString());
    all_values.push_back(LegOrdGrp_NoLegs_0);

    // InstrumentLeg
    multiset<string> InstrumentLeg_72;
    FIX::EncodedLegIssuer EncodedLegIssuer_72("DATA_1438652010");
    noLegs_0_0.set(EncodedLegIssuer_72);
    InstrumentLeg_72.insert(EncodedLegIssuer_72.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_72(771108088);
    noLegs_0_0.set(EncodedLegIssuerLen_72);
    InstrumentLeg_72.insert(EncodedLegIssuerLen_72.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_72("DATA_1749723650");
    noLegs_0_0.set(EncodedLegSecurityDesc_72);
    InstrumentLeg_72.insert(EncodedLegSecurityDesc_72.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_72(539181021);
    noLegs_0_0.set(EncodedLegSecurityDescLen_72);
    InstrumentLeg_72.insert(EncodedLegSecurityDescLen_72.getString());
    FIX::LegCFICode LegCFICode_72("STRING_942810987");
    noLegs_0_0.set(LegCFICode_72);
    InstrumentLeg_72.insert(LegCFICode_72.getString());
    FIX::LegContractMultiplier LegContractMultiplier_72;
    LegContractMultiplier_72.setString("3728528");
    noLegs_0_0.set(LegContractMultiplier_72);
    InstrumentLeg_72.insert(LegContractMultiplier_72.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_72(646066149);
    noLegs_0_0.set(LegContractMultiplierUnit_72);
    InstrumentLeg_72.insert(LegContractMultiplierUnit_72.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_72("MONTHYEAR_1597976150");
    noLegs_0_0.set(LegContractSettlMonth_72);
    InstrumentLeg_72.insert(LegContractSettlMonth_72.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_72("COUNTRY_1257365009");
    noLegs_0_0.set(LegCountryOfIssue_72);
    InstrumentLeg_72.insert(LegCountryOfIssue_72.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_72("LOCALMKTDATE_260780113");
    noLegs_0_0.set(LegCouponPaymentDate_72);
    InstrumentLeg_72.insert(LegCouponPaymentDate_72.getString());
    FIX::LegCouponRate LegCouponRate_72;
    LegCouponRate_72.setString("23.530000");
    noLegs_0_0.set(LegCouponRate_72);
    InstrumentLeg_72.insert(LegCouponRate_72.getString());
    FIX::LegCreditRating LegCreditRating_72("STRING_98481406");
    noLegs_0_0.set(LegCreditRating_72);
    InstrumentLeg_72.insert(LegCreditRating_72.getString());
    FIX::LegCurrency LegCurrency_72("JPY");
    noLegs_0_0.set(LegCurrency_72);
    InstrumentLeg_72.insert(LegCurrency_72.getString());
    FIX::LegDatedDate LegDatedDate_72("LOCALMKTDATE_727005987");
    noLegs_0_0.set(LegDatedDate_72);
    InstrumentLeg_72.insert(LegDatedDate_72.getString());
    FIX::LegExerciseStyle LegExerciseStyle_72(1254439157);
    noLegs_0_0.set(LegExerciseStyle_72);
    InstrumentLeg_72.insert(LegExerciseStyle_72.getString());
    FIX::LegFactor LegFactor_72;
    LegFactor_72.setString("15308130");
    noLegs_0_0.set(LegFactor_72);
    InstrumentLeg_72.insert(LegFactor_72.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_72(1657151381);
    noLegs_0_0.set(LegFlowScheduleType_72);
    InstrumentLeg_72.insert(LegFlowScheduleType_72.getString());
    FIX::LegInstrRegistry LegInstrRegistry_72("STRING_544960231");
    noLegs_0_0.set(LegInstrRegistry_72);
    InstrumentLeg_72.insert(LegInstrRegistry_72.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_72("LOCALMKTDATE_21218117");
    noLegs_0_0.set(LegInterestAccrualDate_72);
    InstrumentLeg_72.insert(LegInterestAccrualDate_72.getString());
    FIX::LegIssueDate LegIssueDate_72("LOCALMKTDATE_168501068");
    noLegs_0_0.set(LegIssueDate_72);
    InstrumentLeg_72.insert(LegIssueDate_72.getString());
    FIX::LegIssuer LegIssuer_72("STRING_165845096");
    noLegs_0_0.set(LegIssuer_72);
    InstrumentLeg_72.insert(LegIssuer_72.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_72("STRING_636326635");
    noLegs_0_0.set(LegLocaleOfIssue_72);
    InstrumentLeg_72.insert(LegLocaleOfIssue_72.getString());
    FIX::LegMaturityDate LegMaturityDate_72("LOCALMKTDATE_1501363927");
    noLegs_0_0.set(LegMaturityDate_72);
    InstrumentLeg_72.insert(LegMaturityDate_72.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_72("MONTHYEAR_1108785084");
    noLegs_0_0.set(LegMaturityMonthYear_72);
    InstrumentLeg_72.insert(LegMaturityMonthYear_72.getString());
    FIX::LegMaturityTime LegMaturityTime_72("TZTIMEONLY_355667509");
    noLegs_0_0.set(LegMaturityTime_72);
    InstrumentLeg_72.insert(LegMaturityTime_72.getString());
    FIX::LegOptAttribute LegOptAttribute_72('1');
    noLegs_0_0.set(LegOptAttribute_72);
    InstrumentLeg_72.insert(LegOptAttribute_72.getString());
    FIX::LegOptionRatio LegOptionRatio_72;
    LegOptionRatio_72.setString("14993678");
    noLegs_0_0.set(LegOptionRatio_72);
    InstrumentLeg_72.insert(LegOptionRatio_72.getString());
    FIX::LegPool LegPool_72("STRING_325343092");
    noLegs_0_0.set(LegPool_72);
    InstrumentLeg_72.insert(LegPool_72.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_72("STRING_1692372711");
    noLegs_0_0.set(LegPriceUnitOfMeasure_72);
    InstrumentLeg_72.insert(LegPriceUnitOfMeasure_72.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_72;
    LegPriceUnitOfMeasureQty_72.setString("20537412");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_72);
    InstrumentLeg_72.insert(LegPriceUnitOfMeasureQty_72.getString());
    FIX::LegProduct LegProduct_72(1763995102);
    noLegs_0_0.set(LegProduct_72);
    InstrumentLeg_72.insert(LegProduct_72.getString());
    FIX::LegPutOrCall LegPutOrCall_72(315997152);
    noLegs_0_0.set(LegPutOrCall_72);
    InstrumentLeg_72.insert(LegPutOrCall_72.getString());
    FIX::LegRatioQty LegRatioQty_72;
    LegRatioQty_72.setString("16559812");
    noLegs_0_0.set(LegRatioQty_72);
    InstrumentLeg_72.insert(LegRatioQty_72.getString());
    FIX::LegRedemptionDate LegRedemptionDate_72("LOCALMKTDATE_155692475");
    noLegs_0_0.set(LegRedemptionDate_72);
    InstrumentLeg_72.insert(LegRedemptionDate_72.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_72("STRING_1258808139");
    noLegs_0_0.set(LegRepoCollateralSecurityType_72);
    InstrumentLeg_72.insert(LegRepoCollateralSecurityType_72.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_72;
    LegRepurchaseRate_72.setString("41.910000");
    noLegs_0_0.set(LegRepurchaseRate_72);
    InstrumentLeg_72.insert(LegRepurchaseRate_72.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_72(801758625);
    noLegs_0_0.set(LegRepurchaseTerm_72);
    InstrumentLeg_72.insert(LegRepurchaseTerm_72.getString());
    FIX::LegSecurityDesc LegSecurityDesc_72("STRING_709300641");
    noLegs_0_0.set(LegSecurityDesc_72);
    InstrumentLeg_72.insert(LegSecurityDesc_72.getString());
    FIX::LegSecurityExchange LegSecurityExchange_72("EXCHANGE_1138715552");
    noLegs_0_0.set(LegSecurityExchange_72);
    InstrumentLeg_72.insert(LegSecurityExchange_72.getString());
    FIX::LegSecurityID LegSecurityID_72("STRING_1062538738");
    noLegs_0_0.set(LegSecurityID_72);
    InstrumentLeg_72.insert(LegSecurityID_72.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_72("STRING_550029347");
    noLegs_0_0.set(LegSecurityIDSource_72);
    InstrumentLeg_72.insert(LegSecurityIDSource_72.getString());
    FIX::LegSecuritySubType LegSecuritySubType_72("STRING_1237196959");
    noLegs_0_0.set(LegSecuritySubType_72);
    InstrumentLeg_72.insert(LegSecuritySubType_72.getString());
    FIX::LegSecurityType LegSecurityType_72("STRING_629218779");
    noLegs_0_0.set(LegSecurityType_72);
    InstrumentLeg_72.insert(LegSecurityType_72.getString());
    FIX::LegSide LegSide_72('2');
    noLegs_0_0.set(LegSide_72);
    InstrumentLeg_72.insert(LegSide_72.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_72("STRING_1964202946");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_72);
    InstrumentLeg_72.insert(LegStateOrProvinceOfIssue_72.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_72("CHF");
    noLegs_0_0.set(LegStrikeCurrency_72);
    InstrumentLeg_72.insert(LegStrikeCurrency_72.getString());
    FIX::LegStrikePrice LegStrikePrice_72;
    LegStrikePrice_72.setString("14738706");
    noLegs_0_0.set(LegStrikePrice_72);
    InstrumentLeg_72.insert(LegStrikePrice_72.getString());
    FIX::LegSymbol LegSymbol_72("STRING_281134519");
    noLegs_0_0.set(LegSymbol_72);
    InstrumentLeg_72.insert(LegSymbol_72.getString());
    FIX::LegSymbolSfx LegSymbolSfx_72("STRING_1551777051");
    noLegs_0_0.set(LegSymbolSfx_72);
    InstrumentLeg_72.insert(LegSymbolSfx_72.getString());
    FIX::LegTimeUnit LegTimeUnit_72("STRING_1642371747");
    noLegs_0_0.set(LegTimeUnit_72);
    InstrumentLeg_72.insert(LegTimeUnit_72.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_72("STRING_446979615");
    noLegs_0_0.set(LegUnitOfMeasure_72);
    InstrumentLeg_72.insert(LegUnitOfMeasure_72.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_72;
    LegUnitOfMeasureQty_72.setString("406200");
    noLegs_0_0.set(LegUnitOfMeasureQty_72);
    InstrumentLeg_72.insert(LegUnitOfMeasureQty_72.getString());
    all_values.push_back(InstrumentLeg_72);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_148;
      FIX::LegSecurityAltID LegSecurityAltID_148("STRING_1555764700");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_148);
      LegSecAltIDGrp_NoLegSecurityAltID_148.insert(LegSecurityAltID_148.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_148("STRING_396287547");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_148);
      LegSecAltIDGrp_NoLegSecurityAltID_148.insert(LegSecurityAltIDSource_148.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_148);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_149;
      FIX::LegSecurityAltID LegSecurityAltID_149("STRING_109596504");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_149);
      LegSecAltIDGrp_NoLegSecurityAltID_149.insert(LegSecurityAltID_149.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_149("STRING_907648931");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_149);
      LegSecAltIDGrp_NoLegSecurityAltID_149.insert(LegSecurityAltIDSource_149.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_149);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_150;
      FIX::LegSecurityAltID LegSecurityAltID_150("STRING_721630639");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltID_150);
      LegSecAltIDGrp_NoLegSecurityAltID_150.insert(LegSecurityAltID_150.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_150("STRING_1801969215");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltIDSource_150);
      LegSecAltIDGrp_NoLegSecurityAltID_150.insert(LegSecurityAltIDSource_150.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_150);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_2);
    }
    // LegPreAllocGrp
    // Group LegPreAllocGrp.NoLegAllocs
    {
      FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs noLegAllocs_0_1_0;
      // LegPreAllocGrp.NoLegAllocs
      multiset<string> LegPreAllocGrp_NoLegAllocs_5;
      FIX::LegAllocAccount LegAllocAccount_5("STRING_338142093");
      noLegAllocs_0_1_0.set(LegAllocAccount_5);
      LegPreAllocGrp_NoLegAllocs_5.insert(LegAllocAccount_5.getString());
      FIX::LegAllocAcctIDSource LegAllocAcctIDSource_5("STRING_2117966367");
      noLegAllocs_0_1_0.set(LegAllocAcctIDSource_5);
      LegPreAllocGrp_NoLegAllocs_5.insert(LegAllocAcctIDSource_5.getString());
      FIX::LegAllocQty LegAllocQty_5;
      LegAllocQty_5.setString("3224042");
      noLegAllocs_0_1_0.set(LegAllocQty_5);
      LegPreAllocGrp_NoLegAllocs_5.insert(LegAllocQty_5.getString());
      FIX::LegAllocSettlCurrency LegAllocSettlCurrency_5("CAN");
      noLegAllocs_0_1_0.set(LegAllocSettlCurrency_5);
      LegPreAllocGrp_NoLegAllocs_5.insert(LegAllocSettlCurrency_5.getString());
      FIX::LegIndividualAllocID LegIndividualAllocID_5("STRING_203754766");
      noLegAllocs_0_1_0.set(LegIndividualAllocID_5);
      LegPreAllocGrp_NoLegAllocs_5.insert(LegIndividualAllocID_5.getString());
      all_values.push_back(LegPreAllocGrp_NoLegAllocs_5);

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_0_0_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_23;
        FIX::Nested2PartyID Nested2PartyID_23("STRING_1938591500");
        noNested2PartyIDs_0_0_2_0.set(Nested2PartyID_23);
        NestedParties2_NoNested2PartyIDs_23.insert(Nested2PartyID_23.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_23('1');
        noNested2PartyIDs_0_0_2_0.set(Nested2PartyIDSource_23);
        NestedParties2_NoNested2PartyIDs_23.insert(Nested2PartyIDSource_23.getString());
        FIX::Nested2PartyRole Nested2PartyRole_23(210648284);
        noNested2PartyIDs_0_0_2_0.set(Nested2PartyRole_23);
        NestedParties2_NoNested2PartyIDs_23.insert(Nested2PartyRole_23.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_23);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_50;
          FIX::Nested2PartySubID Nested2PartySubID_50("STRING_432183629");
          noNested2PartySubIDs_0_0_0_3_0.set(Nested2PartySubID_50);
          NstdPtys2SubGrp_NoNested2PartySubIDs_50.insert(Nested2PartySubID_50.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_50(839867063);
          noNested2PartySubIDs_0_0_0_3_0.set(Nested2PartySubIDType_50);
          NstdPtys2SubGrp_NoNested2PartySubIDs_50.insert(Nested2PartySubIDType_50.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_50);

          noNested2PartyIDs_0_0_2_0.addGroup(noNested2PartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_0_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_51;
          FIX::Nested2PartySubID Nested2PartySubID_51("STRING_340883065");
          noNested2PartySubIDs_0_0_0_3_1.set(Nested2PartySubID_51);
          NstdPtys2SubGrp_NoNested2PartySubIDs_51.insert(Nested2PartySubID_51.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_51(248902927);
          noNested2PartySubIDs_0_0_0_3_1.set(Nested2PartySubIDType_51);
          NstdPtys2SubGrp_NoNested2PartySubIDs_51.insert(Nested2PartySubIDType_51.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_51);

          noNested2PartyIDs_0_0_2_0.addGroup(noNested2PartySubIDs_0_0_0_3_1);
        }
        {
          FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_0_3_2;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_52;
          FIX::Nested2PartySubID Nested2PartySubID_52("STRING_576041352");
          noNested2PartySubIDs_0_0_0_3_2.set(Nested2PartySubID_52);
          NstdPtys2SubGrp_NoNested2PartySubIDs_52.insert(Nested2PartySubID_52.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_52(1871441998);
          noNested2PartySubIDs_0_0_0_3_2.set(Nested2PartySubIDType_52);
          NstdPtys2SubGrp_NoNested2PartySubIDs_52.insert(Nested2PartySubIDType_52.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_52);

          noNested2PartyIDs_0_0_2_0.addGroup(noNested2PartySubIDs_0_0_0_3_2);
        }
        noLegAllocs_0_1_0.addGroup(noNested2PartyIDs_0_0_2_0);
      }
      noLegs_0_0.addGroup(noLegAllocs_0_1_0);
    }
    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegStipulations noLegStipulations_0_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_8;
      FIX::LegStipulationType LegStipulationType_8("STRING_857175871");
      noLegStipulations_0_1_0.set(LegStipulationType_8);
      LegStipulations_NoLegStipulations_8.insert(LegStipulationType_8.getString());
      FIX::LegStipulationValue LegStipulationValue_8("STRING_1275735401");
      noLegStipulations_0_1_0.set(LegStipulationValue_8);
      LegStipulations_NoLegStipulations_8.insert(LegStipulationValue_8.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_8);

      noLegs_0_0.addGroup(noLegStipulations_0_1_0);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegStipulations noLegStipulations_0_1_1;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_9;
      FIX::LegStipulationType LegStipulationType_9("STRING_1217661706");
      noLegStipulations_0_1_1.set(LegStipulationType_9);
      LegStipulations_NoLegStipulations_9.insert(LegStipulationType_9.getString());
      FIX::LegStipulationValue LegStipulationValue_9("STRING_1304155487");
      noLegStipulations_0_1_1.set(LegStipulationValue_9);
      LegStipulations_NoLegStipulations_9.insert(LegStipulationValue_9.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_9);

      noLegs_0_0.addGroup(noLegStipulations_0_1_1);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegStipulations noLegStipulations_0_1_2;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_10;
      FIX::LegStipulationType LegStipulationType_10("STRING_1316355439");
      noLegStipulations_0_1_2.set(LegStipulationType_10);
      LegStipulations_NoLegStipulations_10.insert(LegStipulationType_10.getString());
      FIX::LegStipulationValue LegStipulationValue_10("STRING_66430084");
      noLegStipulations_0_1_2.set(LegStipulationValue_10);
      LegStipulations_NoLegStipulations_10.insert(LegStipulationValue_10.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_10);

      noLegs_0_0.addGroup(noLegStipulations_0_1_2);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_55;
      FIX::NestedPartyID NestedPartyID_55("STRING_1712642986");
      noNestedPartyIDs_0_1_0.set(NestedPartyID_55);
      NestedParties_NoNestedPartyIDs_55.insert(NestedPartyID_55.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_55('1');
      noNestedPartyIDs_0_1_0.set(NestedPartyIDSource_55);
      NestedParties_NoNestedPartyIDs_55.insert(NestedPartyIDSource_55.getString());
      FIX::NestedPartyRole NestedPartyRole_55(1620085470);
      noNestedPartyIDs_0_1_0.set(NestedPartyRole_55);
      NestedParties_NoNestedPartyIDs_55.insert(NestedPartyRole_55.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_55);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_115;
        FIX::NestedPartySubID NestedPartySubID_115("STRING_1977995804");
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubID_115);
        NstdPtysSubGrp_NoNestedPartySubIDs_115.insert(NestedPartySubID_115.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_115(286508398);
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubIDType_115);
        NstdPtysSubGrp_NoNestedPartySubIDs_115.insert(NestedPartySubIDType_115.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_115);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      noLegs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_56;
      FIX::NestedPartyID NestedPartyID_56("STRING_624932071");
      noNestedPartyIDs_0_1_1.set(NestedPartyID_56);
      NestedParties_NoNestedPartyIDs_56.insert(NestedPartyID_56.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_56('1');
      noNestedPartyIDs_0_1_1.set(NestedPartyIDSource_56);
      NestedParties_NoNestedPartyIDs_56.insert(NestedPartyIDSource_56.getString());
      FIX::NestedPartyRole NestedPartyRole_56(608912621);
      noNestedPartyIDs_0_1_1.set(NestedPartyRole_56);
      NestedParties_NoNestedPartyIDs_56.insert(NestedPartyRole_56.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_56);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_116;
        FIX::NestedPartySubID NestedPartySubID_116("STRING_1030285734");
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubID_116);
        NstdPtysSubGrp_NoNestedPartySubIDs_116.insert(NestedPartySubID_116.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_116(812667387);
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubIDType_116);
        NstdPtysSubGrp_NoNestedPartySubIDs_116.insert(NestedPartySubIDType_116.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_116);

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_117;
        FIX::NestedPartySubID NestedPartySubID_117("STRING_266876186");
        noNestedPartySubIDs_0_1_2_1.set(NestedPartySubID_117);
        NstdPtysSubGrp_NoNestedPartySubIDs_117.insert(NestedPartySubID_117.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_117(821393587);
        noNestedPartySubIDs_0_1_2_1.set(NestedPartySubIDType_117);
        NstdPtysSubGrp_NoNestedPartySubIDs_117.insert(NestedPartySubIDType_117.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_117);

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_1);
      }
      noLegs_0_0.addGroup(noNestedPartyIDs_0_1_1);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::MultilegOrderCancelReplace::NoLegs noLegs_0_1;
    // LegOrdGrp.NoLegs
    multiset<string> LegOrdGrp_NoLegs_1;
    FIX::LegAllocID LegAllocID_4("STRING_7654057");
    noLegs_0_1.set(LegAllocID_4);
    LegOrdGrp_NoLegs_1.insert(LegAllocID_4.getString());
    FIX::LegCoveredOrUncovered LegCoveredOrUncovered_4(477524470);
    noLegs_0_1.set(LegCoveredOrUncovered_4);
    LegOrdGrp_NoLegs_1.insert(LegCoveredOrUncovered_4.getString());
    FIX::LegCurrencyRatio LegCurrencyRatio_4;
    LegCurrencyRatio_4.setString("11625307");
    noLegs_0_1.set(LegCurrencyRatio_4);
    LegOrdGrp_NoLegs_1.insert(LegCurrencyRatio_4.getString());
    FIX::LegDividendYield LegDividendYield_4;
    LegDividendYield_4.setString("76.870000");
    noLegs_0_1.set(LegDividendYield_4);
    LegOrdGrp_NoLegs_1.insert(LegDividendYield_4.getString());
    FIX::LegExecInst LegExecInst_4("MULTIPLECHARVALUE_1317391534");
    noLegs_0_1.set(LegExecInst_4);
    LegOrdGrp_NoLegs_1.insert(LegExecInst_4.getString());
    FIX::LegOrderQty LegOrderQty_4;
    LegOrderQty_4.setString("15034138");
    noLegs_0_1.set(LegOrderQty_4);
    LegOrdGrp_NoLegs_1.insert(LegOrderQty_4.getString());
    FIX::LegPositionEffect LegPositionEffect_4('6');
    noLegs_0_1.set(LegPositionEffect_4);
    LegOrdGrp_NoLegs_1.insert(LegPositionEffect_4.getString());
    FIX::LegQty LegQty_4;
    LegQty_4.setString("18934328");
    noLegs_0_1.set(LegQty_4);
    LegOrdGrp_NoLegs_1.insert(LegQty_4.getString());
    FIX::LegRefID LegRefID_4("STRING_1227372202");
    noLegs_0_1.set(LegRefID_4);
    LegOrdGrp_NoLegs_1.insert(LegRefID_4.getString());
    FIX::LegSettlCurrency LegSettlCurrency_4("CHF");
    noLegs_0_1.set(LegSettlCurrency_4);
    LegOrdGrp_NoLegs_1.insert(LegSettlCurrency_4.getString());
    FIX::LegSettlDate LegSettlDate_4("LOCALMKTDATE_355623955");
    noLegs_0_1.set(LegSettlDate_4);
    LegOrdGrp_NoLegs_1.insert(LegSettlDate_4.getString());
    FIX::LegSettlType LegSettlType_4('1');
    noLegs_0_1.set(LegSettlType_4);
    LegOrdGrp_NoLegs_1.insert(LegSettlType_4.getString());
    FIX::LegSwapType LegSwapType_4(1);
    noLegs_0_1.set(LegSwapType_4);
    LegOrdGrp_NoLegs_1.insert(LegSwapType_4.getString());
    FIX::LegVolatility LegVolatility_4;
    LegVolatility_4.setString("16719793");
    noLegs_0_1.set(LegVolatility_4);
    LegOrdGrp_NoLegs_1.insert(LegVolatility_4.getString());
    all_values.push_back(LegOrdGrp_NoLegs_1);

    // InstrumentLeg
    multiset<string> InstrumentLeg_73;
    FIX::EncodedLegIssuer EncodedLegIssuer_73("DATA_1548122363");
    noLegs_0_1.set(EncodedLegIssuer_73);
    InstrumentLeg_73.insert(EncodedLegIssuer_73.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_73(472233487);
    noLegs_0_1.set(EncodedLegIssuerLen_73);
    InstrumentLeg_73.insert(EncodedLegIssuerLen_73.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_73("DATA_1237138733");
    noLegs_0_1.set(EncodedLegSecurityDesc_73);
    InstrumentLeg_73.insert(EncodedLegSecurityDesc_73.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_73(1724148952);
    noLegs_0_1.set(EncodedLegSecurityDescLen_73);
    InstrumentLeg_73.insert(EncodedLegSecurityDescLen_73.getString());
    FIX::LegCFICode LegCFICode_73("STRING_2092318957");
    noLegs_0_1.set(LegCFICode_73);
    InstrumentLeg_73.insert(LegCFICode_73.getString());
    FIX::LegContractMultiplier LegContractMultiplier_73;
    LegContractMultiplier_73.setString("15239287");
    noLegs_0_1.set(LegContractMultiplier_73);
    InstrumentLeg_73.insert(LegContractMultiplier_73.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_73(1554661108);
    noLegs_0_1.set(LegContractMultiplierUnit_73);
    InstrumentLeg_73.insert(LegContractMultiplierUnit_73.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_73("MONTHYEAR_231343707");
    noLegs_0_1.set(LegContractSettlMonth_73);
    InstrumentLeg_73.insert(LegContractSettlMonth_73.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_73("COUNTRY_1377134");
    noLegs_0_1.set(LegCountryOfIssue_73);
    InstrumentLeg_73.insert(LegCountryOfIssue_73.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_73("LOCALMKTDATE_1355655983");
    noLegs_0_1.set(LegCouponPaymentDate_73);
    InstrumentLeg_73.insert(LegCouponPaymentDate_73.getString());
    FIX::LegCouponRate LegCouponRate_73;
    LegCouponRate_73.setString("63.280000");
    noLegs_0_1.set(LegCouponRate_73);
    InstrumentLeg_73.insert(LegCouponRate_73.getString());
    FIX::LegCreditRating LegCreditRating_73("STRING_1120143774");
    noLegs_0_1.set(LegCreditRating_73);
    InstrumentLeg_73.insert(LegCreditRating_73.getString());
    FIX::LegCurrency LegCurrency_73("CAN");
    noLegs_0_1.set(LegCurrency_73);
    InstrumentLeg_73.insert(LegCurrency_73.getString());
    FIX::LegDatedDate LegDatedDate_73("LOCALMKTDATE_1387019960");
    noLegs_0_1.set(LegDatedDate_73);
    InstrumentLeg_73.insert(LegDatedDate_73.getString());
    FIX::LegExerciseStyle LegExerciseStyle_73(1059851657);
    noLegs_0_1.set(LegExerciseStyle_73);
    InstrumentLeg_73.insert(LegExerciseStyle_73.getString());
    FIX::LegFactor LegFactor_73;
    LegFactor_73.setString("16605777");
    noLegs_0_1.set(LegFactor_73);
    InstrumentLeg_73.insert(LegFactor_73.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_73(1864544430);
    noLegs_0_1.set(LegFlowScheduleType_73);
    InstrumentLeg_73.insert(LegFlowScheduleType_73.getString());
    FIX::LegInstrRegistry LegInstrRegistry_73("STRING_74898795");
    noLegs_0_1.set(LegInstrRegistry_73);
    InstrumentLeg_73.insert(LegInstrRegistry_73.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_73("LOCALMKTDATE_2100415460");
    noLegs_0_1.set(LegInterestAccrualDate_73);
    InstrumentLeg_73.insert(LegInterestAccrualDate_73.getString());
    FIX::LegIssueDate LegIssueDate_73("LOCALMKTDATE_1034452316");
    noLegs_0_1.set(LegIssueDate_73);
    InstrumentLeg_73.insert(LegIssueDate_73.getString());
    FIX::LegIssuer LegIssuer_73("STRING_1578312647");
    noLegs_0_1.set(LegIssuer_73);
    InstrumentLeg_73.insert(LegIssuer_73.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_73("STRING_641672426");
    noLegs_0_1.set(LegLocaleOfIssue_73);
    InstrumentLeg_73.insert(LegLocaleOfIssue_73.getString());
    FIX::LegMaturityDate LegMaturityDate_73("LOCALMKTDATE_780401554");
    noLegs_0_1.set(LegMaturityDate_73);
    InstrumentLeg_73.insert(LegMaturityDate_73.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_73("MONTHYEAR_658201201");
    noLegs_0_1.set(LegMaturityMonthYear_73);
    InstrumentLeg_73.insert(LegMaturityMonthYear_73.getString());
    FIX::LegMaturityTime LegMaturityTime_73("TZTIMEONLY_905702999");
    noLegs_0_1.set(LegMaturityTime_73);
    InstrumentLeg_73.insert(LegMaturityTime_73.getString());
    FIX::LegOptAttribute LegOptAttribute_73('1');
    noLegs_0_1.set(LegOptAttribute_73);
    InstrumentLeg_73.insert(LegOptAttribute_73.getString());
    FIX::LegOptionRatio LegOptionRatio_73;
    LegOptionRatio_73.setString("10138251");
    noLegs_0_1.set(LegOptionRatio_73);
    InstrumentLeg_73.insert(LegOptionRatio_73.getString());
    FIX::LegPool LegPool_73("STRING_239911630");
    noLegs_0_1.set(LegPool_73);
    InstrumentLeg_73.insert(LegPool_73.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_73("STRING_1143323612");
    noLegs_0_1.set(LegPriceUnitOfMeasure_73);
    InstrumentLeg_73.insert(LegPriceUnitOfMeasure_73.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_73;
    LegPriceUnitOfMeasureQty_73.setString("5383209");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_73);
    InstrumentLeg_73.insert(LegPriceUnitOfMeasureQty_73.getString());
    FIX::LegProduct LegProduct_73(1788033994);
    noLegs_0_1.set(LegProduct_73);
    InstrumentLeg_73.insert(LegProduct_73.getString());
    FIX::LegPutOrCall LegPutOrCall_73(1615557100);
    noLegs_0_1.set(LegPutOrCall_73);
    InstrumentLeg_73.insert(LegPutOrCall_73.getString());
    FIX::LegRatioQty LegRatioQty_73;
    LegRatioQty_73.setString("17754596");
    noLegs_0_1.set(LegRatioQty_73);
    InstrumentLeg_73.insert(LegRatioQty_73.getString());
    FIX::LegRedemptionDate LegRedemptionDate_73("LOCALMKTDATE_1364699298");
    noLegs_0_1.set(LegRedemptionDate_73);
    InstrumentLeg_73.insert(LegRedemptionDate_73.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_73("STRING_1560392409");
    noLegs_0_1.set(LegRepoCollateralSecurityType_73);
    InstrumentLeg_73.insert(LegRepoCollateralSecurityType_73.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_73;
    LegRepurchaseRate_73.setString("47.000000");
    noLegs_0_1.set(LegRepurchaseRate_73);
    InstrumentLeg_73.insert(LegRepurchaseRate_73.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_73(771876758);
    noLegs_0_1.set(LegRepurchaseTerm_73);
    InstrumentLeg_73.insert(LegRepurchaseTerm_73.getString());
    FIX::LegSecurityDesc LegSecurityDesc_73("STRING_1791736117");
    noLegs_0_1.set(LegSecurityDesc_73);
    InstrumentLeg_73.insert(LegSecurityDesc_73.getString());
    FIX::LegSecurityExchange LegSecurityExchange_73("EXCHANGE_1153281834");
    noLegs_0_1.set(LegSecurityExchange_73);
    InstrumentLeg_73.insert(LegSecurityExchange_73.getString());
    FIX::LegSecurityID LegSecurityID_73("STRING_2127532741");
    noLegs_0_1.set(LegSecurityID_73);
    InstrumentLeg_73.insert(LegSecurityID_73.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_73("STRING_484508797");
    noLegs_0_1.set(LegSecurityIDSource_73);
    InstrumentLeg_73.insert(LegSecurityIDSource_73.getString());
    FIX::LegSecuritySubType LegSecuritySubType_73("STRING_125941960");
    noLegs_0_1.set(LegSecuritySubType_73);
    InstrumentLeg_73.insert(LegSecuritySubType_73.getString());
    FIX::LegSecurityType LegSecurityType_73("STRING_218507163");
    noLegs_0_1.set(LegSecurityType_73);
    InstrumentLeg_73.insert(LegSecurityType_73.getString());
    FIX::LegSide LegSide_73('2');
    noLegs_0_1.set(LegSide_73);
    InstrumentLeg_73.insert(LegSide_73.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_73("STRING_1512961920");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_73);
    InstrumentLeg_73.insert(LegStateOrProvinceOfIssue_73.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_73("USD");
    noLegs_0_1.set(LegStrikeCurrency_73);
    InstrumentLeg_73.insert(LegStrikeCurrency_73.getString());
    FIX::LegStrikePrice LegStrikePrice_73;
    LegStrikePrice_73.setString("12300227");
    noLegs_0_1.set(LegStrikePrice_73);
    InstrumentLeg_73.insert(LegStrikePrice_73.getString());
    FIX::LegSymbol LegSymbol_73("STRING_1353257616");
    noLegs_0_1.set(LegSymbol_73);
    InstrumentLeg_73.insert(LegSymbol_73.getString());
    FIX::LegSymbolSfx LegSymbolSfx_73("STRING_1603458450");
    noLegs_0_1.set(LegSymbolSfx_73);
    InstrumentLeg_73.insert(LegSymbolSfx_73.getString());
    FIX::LegTimeUnit LegTimeUnit_73("STRING_116991371");
    noLegs_0_1.set(LegTimeUnit_73);
    InstrumentLeg_73.insert(LegTimeUnit_73.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_73("STRING_784086615");
    noLegs_0_1.set(LegUnitOfMeasure_73);
    InstrumentLeg_73.insert(LegUnitOfMeasure_73.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_73;
    LegUnitOfMeasureQty_73.setString("976472");
    noLegs_0_1.set(LegUnitOfMeasureQty_73);
    InstrumentLeg_73.insert(LegUnitOfMeasureQty_73.getString());
    all_values.push_back(InstrumentLeg_73);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_151;
      FIX::LegSecurityAltID LegSecurityAltID_151("STRING_1442287816");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_151);
      LegSecAltIDGrp_NoLegSecurityAltID_151.insert(LegSecurityAltID_151.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_151("STRING_1003350228");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_151);
      LegSecAltIDGrp_NoLegSecurityAltID_151.insert(LegSecurityAltIDSource_151.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_151);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    // LegPreAllocGrp
    // Group LegPreAllocGrp.NoLegAllocs
    {
      FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs noLegAllocs_1_1_0;
      // LegPreAllocGrp.NoLegAllocs
      multiset<string> LegPreAllocGrp_NoLegAllocs_6;
      FIX::LegAllocAccount LegAllocAccount_6("STRING_308629324");
      noLegAllocs_1_1_0.set(LegAllocAccount_6);
      LegPreAllocGrp_NoLegAllocs_6.insert(LegAllocAccount_6.getString());
      FIX::LegAllocAcctIDSource LegAllocAcctIDSource_6("STRING_1243261858");
      noLegAllocs_1_1_0.set(LegAllocAcctIDSource_6);
      LegPreAllocGrp_NoLegAllocs_6.insert(LegAllocAcctIDSource_6.getString());
      FIX::LegAllocQty LegAllocQty_6;
      LegAllocQty_6.setString("12767595");
      noLegAllocs_1_1_0.set(LegAllocQty_6);
      LegPreAllocGrp_NoLegAllocs_6.insert(LegAllocQty_6.getString());
      FIX::LegAllocSettlCurrency LegAllocSettlCurrency_6("USD");
      noLegAllocs_1_1_0.set(LegAllocSettlCurrency_6);
      LegPreAllocGrp_NoLegAllocs_6.insert(LegAllocSettlCurrency_6.getString());
      FIX::LegIndividualAllocID LegIndividualAllocID_6("STRING_744833006");
      noLegAllocs_1_1_0.set(LegIndividualAllocID_6);
      LegPreAllocGrp_NoLegAllocs_6.insert(LegIndividualAllocID_6.getString());
      all_values.push_back(LegPreAllocGrp_NoLegAllocs_6);

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_1_0_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_24;
        FIX::Nested2PartyID Nested2PartyID_24("STRING_101027854");
        noNested2PartyIDs_1_0_2_0.set(Nested2PartyID_24);
        NestedParties2_NoNested2PartyIDs_24.insert(Nested2PartyID_24.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_24('1');
        noNested2PartyIDs_1_0_2_0.set(Nested2PartyIDSource_24);
        NestedParties2_NoNested2PartyIDs_24.insert(Nested2PartyIDSource_24.getString());
        FIX::Nested2PartyRole Nested2PartyRole_24(1626830917);
        noNested2PartyIDs_1_0_2_0.set(Nested2PartyRole_24);
        NestedParties2_NoNested2PartyIDs_24.insert(Nested2PartyRole_24.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_24);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_53;
          FIX::Nested2PartySubID Nested2PartySubID_53("STRING_1949477884");
          noNested2PartySubIDs_1_0_0_3_0.set(Nested2PartySubID_53);
          NstdPtys2SubGrp_NoNested2PartySubIDs_53.insert(Nested2PartySubID_53.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_53(632629103);
          noNested2PartySubIDs_1_0_0_3_0.set(Nested2PartySubIDType_53);
          NstdPtys2SubGrp_NoNested2PartySubIDs_53.insert(Nested2PartySubIDType_53.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_53);

          noNested2PartyIDs_1_0_2_0.addGroup(noNested2PartySubIDs_1_0_0_3_0);
        }
        noLegAllocs_1_1_0.addGroup(noNested2PartyIDs_1_0_2_0);
      }
      noLegs_0_1.addGroup(noLegAllocs_1_1_0);
    }
    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegStipulations noLegStipulations_1_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_11;
      FIX::LegStipulationType LegStipulationType_11("STRING_286503034");
      noLegStipulations_1_1_0.set(LegStipulationType_11);
      LegStipulations_NoLegStipulations_11.insert(LegStipulationType_11.getString());
      FIX::LegStipulationValue LegStipulationValue_11("STRING_758571063");
      noLegStipulations_1_1_0.set(LegStipulationValue_11);
      LegStipulations_NoLegStipulations_11.insert(LegStipulationValue_11.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_11);

      noLegs_0_1.addGroup(noLegStipulations_1_1_0);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoNestedPartyIDs noNestedPartyIDs_1_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_57;
      FIX::NestedPartyID NestedPartyID_57("STRING_276451899");
      noNestedPartyIDs_1_1_0.set(NestedPartyID_57);
      NestedParties_NoNestedPartyIDs_57.insert(NestedPartyID_57.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_57('1');
      noNestedPartyIDs_1_1_0.set(NestedPartyIDSource_57);
      NestedParties_NoNestedPartyIDs_57.insert(NestedPartyIDSource_57.getString());
      FIX::NestedPartyRole NestedPartyRole_57(202336042);
      noNestedPartyIDs_1_1_0.set(NestedPartyRole_57);
      NestedParties_NoNestedPartyIDs_57.insert(NestedPartyRole_57.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_57);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_118;
        FIX::NestedPartySubID NestedPartySubID_118("STRING_1354072037");
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubID_118);
        NstdPtysSubGrp_NoNestedPartySubIDs_118.insert(NestedPartySubID_118.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_118(1555593658);
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubIDType_118);
        NstdPtysSubGrp_NoNestedPartySubIDs_118.insert(NestedPartySubIDType_118.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_118);

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_0);
      }
      noLegs_0_1.addGroup(noNestedPartyIDs_1_1_0);
    }
    msg.addGroup(noLegs_0_1);
  }
  // OrderQtyData
  multiset<string> OrderQtyData_9;
  FIX::CashOrderQty CashOrderQty_9;
  CashOrderQty_9.setString("13829533");
  msg.set(CashOrderQty_9);
  OrderQtyData_9.insert(CashOrderQty_9.getString());
  FIX::OrderPercent OrderPercent_9;
  OrderPercent_9.setString("34.080000");
  msg.set(OrderPercent_9);
  OrderQtyData_9.insert(OrderPercent_9.getString());
  FIX::OrderQty OrderQty_17;
  OrderQty_17.setString("1921966");
  msg.set(OrderQty_17);
  OrderQtyData_9.insert(OrderQty_17.getString());
  FIX::RoundingDirection RoundingDirection_9('1');
  msg.set(RoundingDirection_9);
  OrderQtyData_9.insert(RoundingDirection_9.getString());
  FIX::RoundingModulus RoundingModulus_9;
  RoundingModulus_9.setString("2209726");
  msg.set(RoundingModulus_9);
  OrderQtyData_9.insert(RoundingModulus_9.getString());
  all_values.push_back(OrderQtyData_9);

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::MultilegOrderCancelReplace::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_72;
    FIX::PartyID PartyID_72("STRING_336467147");
    noPartyIDs_0_0.set(PartyID_72);
    Parties_NoPartyIDs_72.insert(PartyID_72.getString());
    FIX::PartyIDSource PartyIDSource_72('9');
    noPartyIDs_0_0.set(PartyIDSource_72);
    Parties_NoPartyIDs_72.insert(PartyIDSource_72.getString());
    FIX::PartyRole PartyRole_72(63);
    noPartyIDs_0_0.set(PartyRole_72);
    Parties_NoPartyIDs_72.insert(PartyRole_72.getString());
    all_values.push_back(Parties_NoPartyIDs_72);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::MultilegOrderCancelReplace::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_151;
      FIX::PartySubID PartySubID_151("STRING_1631168181");
      noPartySubIDs_0_1_0.set(PartySubID_151);
      PtysSubGrp_NoPartySubIDs_151.insert(PartySubID_151.getString());
      FIX::PartySubIDType PartySubIDType_151(23);
      noPartySubIDs_0_1_0.set(PartySubIDType_151);
      PtysSubGrp_NoPartySubIDs_151.insert(PartySubIDType_151.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_151);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_152;
      FIX::PartySubID PartySubID_152("STRING_316057562");
      noPartySubIDs_0_1_1.set(PartySubID_152);
      PtysSubGrp_NoPartySubIDs_152.insert(PartySubID_152.getString());
      FIX::PartySubIDType PartySubIDType_152(31);
      noPartySubIDs_0_1_1.set(PartySubIDType_152);
      PtysSubGrp_NoPartySubIDs_152.insert(PartySubIDType_152.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_152);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  // PegInstructions
  multiset<string> PegInstructions_2;
  FIX::PegLimitType PegLimitType_2(1);
  msg.set(PegLimitType_2);
  PegInstructions_2.insert(PegLimitType_2.getString());
  FIX::PegMoveType PegMoveType_2(1);
  msg.set(PegMoveType_2);
  PegInstructions_2.insert(PegMoveType_2.getString());
  FIX::PegOffsetType PegOffsetType_2(3);
  msg.set(PegOffsetType_2);
  PegInstructions_2.insert(PegOffsetType_2.getString());
  FIX::PegOffsetValue PegOffsetValue_2;
  PegOffsetValue_2.setString("5968538");
  msg.set(PegOffsetValue_2);
  PegInstructions_2.insert(PegOffsetValue_2.getString());
  FIX::PegPriceType PegPriceType_2(7);
  msg.set(PegPriceType_2);
  PegInstructions_2.insert(PegPriceType_2.getString());
  FIX::PegRoundDirection PegRoundDirection_2(2);
  msg.set(PegRoundDirection_2);
  PegInstructions_2.insert(PegRoundDirection_2.getString());
  FIX::PegScope PegScope_2(3);
  msg.set(PegScope_2);
  PegInstructions_2.insert(PegScope_2.getString());
  FIX::PegSecurityDesc PegSecurityDesc_2("STRING_2142943735");
  msg.set(PegSecurityDesc_2);
  PegInstructions_2.insert(PegSecurityDesc_2.getString());
  FIX::PegSecurityID PegSecurityID_2("STRING_474756577");
  msg.set(PegSecurityID_2);
  PegInstructions_2.insert(PegSecurityID_2.getString());
  FIX::PegSecurityIDSource PegSecurityIDSource_2("STRING_1988053997");
  msg.set(PegSecurityIDSource_2);
  PegInstructions_2.insert(PegSecurityIDSource_2.getString());
  FIX::PegSymbol PegSymbol_2("STRING_1066920957");
  msg.set(PegSymbol_2);
  PegInstructions_2.insert(PegSymbol_2.getString());
  all_values.push_back(PegInstructions_2);

  // PreAllocMlegGrp
  // Group PreAllocMlegGrp.NoAllocs
  {
    FIX50SP2::MultilegOrderCancelReplace::NoAllocs noAllocs_0_0;
    // PreAllocMlegGrp.NoAllocs
    multiset<string> PreAllocMlegGrp_NoAllocs_0;
    FIX::AllocAccount AllocAccount_18("STRING_2112103332");
    noAllocs_0_0.set(AllocAccount_18);
    PreAllocMlegGrp_NoAllocs_0.insert(AllocAccount_18.getString());
    FIX::AllocAcctIDSource AllocAcctIDSource_18(1269256999);
    noAllocs_0_0.set(AllocAcctIDSource_18);
    PreAllocMlegGrp_NoAllocs_0.insert(AllocAcctIDSource_18.getString());
    FIX::AllocQty AllocQty_17;
    AllocQty_17.setString("5307033");
    noAllocs_0_0.set(AllocQty_17);
    PreAllocMlegGrp_NoAllocs_0.insert(AllocQty_17.getString());
    FIX::AllocSettlCurrency AllocSettlCurrency_13("CHF");
    noAllocs_0_0.set(AllocSettlCurrency_13);
    PreAllocMlegGrp_NoAllocs_0.insert(AllocSettlCurrency_13.getString());
    FIX::IndividualAllocID IndividualAllocID_18("STRING_1913656704");
    noAllocs_0_0.set(IndividualAllocID_18);
    PreAllocMlegGrp_NoAllocs_0.insert(IndividualAllocID_18.getString());
    all_values.push_back(PreAllocMlegGrp_NoAllocs_0);

    // NestedParties3
    // Group NestedParties3.NoNested3PartyIDs
    {
      FIX50SP2::MultilegOrderCancelReplace::NoAllocs::NoNested3PartyIDs noNested3PartyIDs_0_1_0;
      // NestedParties3.NoNested3PartyIDs
      multiset<string> NestedParties3_NoNested3PartyIDs_4;
      FIX::Nested3PartyID Nested3PartyID_4("STRING_869563634");
      noNested3PartyIDs_0_1_0.set(Nested3PartyID_4);
      NestedParties3_NoNested3PartyIDs_4.insert(Nested3PartyID_4.getString());
      FIX::Nested3PartyIDSource Nested3PartyIDSource_4('1');
      noNested3PartyIDs_0_1_0.set(Nested3PartyIDSource_4);
      NestedParties3_NoNested3PartyIDs_4.insert(Nested3PartyIDSource_4.getString());
      FIX::Nested3PartyRole Nested3PartyRole_4(863244168);
      noNested3PartyIDs_0_1_0.set(Nested3PartyRole_4);
      NestedParties3_NoNested3PartyIDs_4.insert(Nested3PartyRole_4.getString());
      all_values.push_back(NestedParties3_NoNested3PartyIDs_4);

      // NstdPtys3SubGrp
      // Group NstdPtys3SubGrp.NoNested3PartySubIDs
      {
        FIX50SP2::MultilegOrderCancelReplace::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_0_0_2_0;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_9;
        FIX::Nested3PartySubID Nested3PartySubID_9("STRING_1583240771");
        noNested3PartySubIDs_0_0_2_0.set(Nested3PartySubID_9);
        NstdPtys3SubGrp_NoNested3PartySubIDs_9.insert(Nested3PartySubID_9.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_9(1217652796);
        noNested3PartySubIDs_0_0_2_0.set(Nested3PartySubIDType_9);
        NstdPtys3SubGrp_NoNested3PartySubIDs_9.insert(Nested3PartySubIDType_9.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_9);

        noNested3PartyIDs_0_1_0.addGroup(noNested3PartySubIDs_0_0_2_0);
      }
      noAllocs_0_0.addGroup(noNested3PartyIDs_0_1_0);
    }
    msg.addGroup(noAllocs_0_0);
  }
  {
    FIX50SP2::MultilegOrderCancelReplace::NoAllocs noAllocs_0_1;
    // PreAllocMlegGrp.NoAllocs
    multiset<string> PreAllocMlegGrp_NoAllocs_1;
    FIX::AllocAccount AllocAccount_19("STRING_152194544");
    noAllocs_0_1.set(AllocAccount_19);
    PreAllocMlegGrp_NoAllocs_1.insert(AllocAccount_19.getString());
    FIX::AllocAcctIDSource AllocAcctIDSource_19(1015486129);
    noAllocs_0_1.set(AllocAcctIDSource_19);
    PreAllocMlegGrp_NoAllocs_1.insert(AllocAcctIDSource_19.getString());
    FIX::AllocQty AllocQty_18;
    AllocQty_18.setString("7013373");
    noAllocs_0_1.set(AllocQty_18);
    PreAllocMlegGrp_NoAllocs_1.insert(AllocQty_18.getString());
    FIX::AllocSettlCurrency AllocSettlCurrency_14("JPY");
    noAllocs_0_1.set(AllocSettlCurrency_14);
    PreAllocMlegGrp_NoAllocs_1.insert(AllocSettlCurrency_14.getString());
    FIX::IndividualAllocID IndividualAllocID_19("STRING_929854869");
    noAllocs_0_1.set(IndividualAllocID_19);
    PreAllocMlegGrp_NoAllocs_1.insert(IndividualAllocID_19.getString());
    all_values.push_back(PreAllocMlegGrp_NoAllocs_1);

    // NestedParties3
    // Group NestedParties3.NoNested3PartyIDs
    {
      FIX50SP2::MultilegOrderCancelReplace::NoAllocs::NoNested3PartyIDs noNested3PartyIDs_1_1_0;
      // NestedParties3.NoNested3PartyIDs
      multiset<string> NestedParties3_NoNested3PartyIDs_5;
      FIX::Nested3PartyID Nested3PartyID_5("STRING_1748629109");
      noNested3PartyIDs_1_1_0.set(Nested3PartyID_5);
      NestedParties3_NoNested3PartyIDs_5.insert(Nested3PartyID_5.getString());
      FIX::Nested3PartyIDSource Nested3PartyIDSource_5('1');
      noNested3PartyIDs_1_1_0.set(Nested3PartyIDSource_5);
      NestedParties3_NoNested3PartyIDs_5.insert(Nested3PartyIDSource_5.getString());
      FIX::Nested3PartyRole Nested3PartyRole_5(361651636);
      noNested3PartyIDs_1_1_0.set(Nested3PartyRole_5);
      NestedParties3_NoNested3PartyIDs_5.insert(Nested3PartyRole_5.getString());
      all_values.push_back(NestedParties3_NoNested3PartyIDs_5);

      // NstdPtys3SubGrp
      // Group NstdPtys3SubGrp.NoNested3PartySubIDs
      {
        FIX50SP2::MultilegOrderCancelReplace::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_1_0_2_0;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_10;
        FIX::Nested3PartySubID Nested3PartySubID_10("STRING_1504367719");
        noNested3PartySubIDs_1_0_2_0.set(Nested3PartySubID_10);
        NstdPtys3SubGrp_NoNested3PartySubIDs_10.insert(Nested3PartySubID_10.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_10(1591134570);
        noNested3PartySubIDs_1_0_2_0.set(Nested3PartySubIDType_10);
        NstdPtys3SubGrp_NoNested3PartySubIDs_10.insert(Nested3PartySubIDType_10.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_10);

        noNested3PartyIDs_1_1_0.addGroup(noNested3PartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_1_0_2_1;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_11;
        FIX::Nested3PartySubID Nested3PartySubID_11("STRING_886595578");
        noNested3PartySubIDs_1_0_2_1.set(Nested3PartySubID_11);
        NstdPtys3SubGrp_NoNested3PartySubIDs_11.insert(Nested3PartySubID_11.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_11(1979124297);
        noNested3PartySubIDs_1_0_2_1.set(Nested3PartySubIDType_11);
        NstdPtys3SubGrp_NoNested3PartySubIDs_11.insert(Nested3PartySubIDType_11.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_11);

        noNested3PartyIDs_1_1_0.addGroup(noNested3PartySubIDs_1_0_2_1);
      }
      noAllocs_0_1.addGroup(noNested3PartyIDs_1_1_0);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoAllocs::NoNested3PartyIDs noNested3PartyIDs_1_1_1;
      // NestedParties3.NoNested3PartyIDs
      multiset<string> NestedParties3_NoNested3PartyIDs_6;
      FIX::Nested3PartyID Nested3PartyID_6("STRING_1431704920");
      noNested3PartyIDs_1_1_1.set(Nested3PartyID_6);
      NestedParties3_NoNested3PartyIDs_6.insert(Nested3PartyID_6.getString());
      FIX::Nested3PartyIDSource Nested3PartyIDSource_6('1');
      noNested3PartyIDs_1_1_1.set(Nested3PartyIDSource_6);
      NestedParties3_NoNested3PartyIDs_6.insert(Nested3PartyIDSource_6.getString());
      FIX::Nested3PartyRole Nested3PartyRole_6(582849125);
      noNested3PartyIDs_1_1_1.set(Nested3PartyRole_6);
      NestedParties3_NoNested3PartyIDs_6.insert(Nested3PartyRole_6.getString());
      all_values.push_back(NestedParties3_NoNested3PartyIDs_6);

      // NstdPtys3SubGrp
      // Group NstdPtys3SubGrp.NoNested3PartySubIDs
      {
        FIX50SP2::MultilegOrderCancelReplace::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_1_1_2_0;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_12;
        FIX::Nested3PartySubID Nested3PartySubID_12("STRING_1075289886");
        noNested3PartySubIDs_1_1_2_0.set(Nested3PartySubID_12);
        NstdPtys3SubGrp_NoNested3PartySubIDs_12.insert(Nested3PartySubID_12.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_12(1113552491);
        noNested3PartySubIDs_1_1_2_0.set(Nested3PartySubIDType_12);
        NstdPtys3SubGrp_NoNested3PartySubIDs_12.insert(Nested3PartySubIDType_12.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_12);

        noNested3PartyIDs_1_1_1.addGroup(noNested3PartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_1_1_2_1;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_13;
        FIX::Nested3PartySubID Nested3PartySubID_13("STRING_567532678");
        noNested3PartySubIDs_1_1_2_1.set(Nested3PartySubID_13);
        NstdPtys3SubGrp_NoNested3PartySubIDs_13.insert(Nested3PartySubID_13.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_13(1752656895);
        noNested3PartySubIDs_1_1_2_1.set(Nested3PartySubIDType_13);
        NstdPtys3SubGrp_NoNested3PartySubIDs_13.insert(Nested3PartySubIDType_13.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_13);

        noNested3PartyIDs_1_1_1.addGroup(noNested3PartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_1_1_2_2;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_14;
        FIX::Nested3PartySubID Nested3PartySubID_14("STRING_879725547");
        noNested3PartySubIDs_1_1_2_2.set(Nested3PartySubID_14);
        NstdPtys3SubGrp_NoNested3PartySubIDs_14.insert(Nested3PartySubID_14.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_14(1209804161);
        noNested3PartySubIDs_1_1_2_2.set(Nested3PartySubIDType_14);
        NstdPtys3SubGrp_NoNested3PartySubIDs_14.insert(Nested3PartySubIDType_14.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_14);

        noNested3PartyIDs_1_1_1.addGroup(noNested3PartySubIDs_1_1_2_2);
      }
      noAllocs_0_1.addGroup(noNested3PartyIDs_1_1_1);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoAllocs::NoNested3PartyIDs noNested3PartyIDs_1_1_2;
      // NestedParties3.NoNested3PartyIDs
      multiset<string> NestedParties3_NoNested3PartyIDs_7;
      FIX::Nested3PartyID Nested3PartyID_7("STRING_474736881");
      noNested3PartyIDs_1_1_2.set(Nested3PartyID_7);
      NestedParties3_NoNested3PartyIDs_7.insert(Nested3PartyID_7.getString());
      FIX::Nested3PartyIDSource Nested3PartyIDSource_7('2');
      noNested3PartyIDs_1_1_2.set(Nested3PartyIDSource_7);
      NestedParties3_NoNested3PartyIDs_7.insert(Nested3PartyIDSource_7.getString());
      FIX::Nested3PartyRole Nested3PartyRole_7(2073048329);
      noNested3PartyIDs_1_1_2.set(Nested3PartyRole_7);
      NestedParties3_NoNested3PartyIDs_7.insert(Nested3PartyRole_7.getString());
      all_values.push_back(NestedParties3_NoNested3PartyIDs_7);

      // NstdPtys3SubGrp
      // Group NstdPtys3SubGrp.NoNested3PartySubIDs
      {
        FIX50SP2::MultilegOrderCancelReplace::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_1_2_2_0;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_15;
        FIX::Nested3PartySubID Nested3PartySubID_15("STRING_1562256295");
        noNested3PartySubIDs_1_2_2_0.set(Nested3PartySubID_15);
        NstdPtys3SubGrp_NoNested3PartySubIDs_15.insert(Nested3PartySubID_15.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_15(1143217477);
        noNested3PartySubIDs_1_2_2_0.set(Nested3PartySubIDType_15);
        NstdPtys3SubGrp_NoNested3PartySubIDs_15.insert(Nested3PartySubIDType_15.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_15);

        noNested3PartyIDs_1_1_2.addGroup(noNested3PartySubIDs_1_2_2_0);
      }
      noAllocs_0_1.addGroup(noNested3PartyIDs_1_1_2);
    }
    msg.addGroup(noAllocs_0_1);
  }
  // StrategyParametersGrp
  // Group StrategyParametersGrp.NoStrategyParameters
  {
    FIX50SP2::MultilegOrderCancelReplace::NoStrategyParameters noStrategyParameters_0_0;
    // StrategyParametersGrp.NoStrategyParameters
    multiset<string> StrategyParametersGrp_NoStrategyParameters_5;
    FIX::StrategyParameterName StrategyParameterName_5("STRING_430258776");
    noStrategyParameters_0_0.set(StrategyParameterName_5);
    StrategyParametersGrp_NoStrategyParameters_5.insert(StrategyParameterName_5.getString());
    FIX::StrategyParameterType StrategyParameterType_5(6);
    noStrategyParameters_0_0.set(StrategyParameterType_5);
    StrategyParametersGrp_NoStrategyParameters_5.insert(StrategyParameterType_5.getString());
    FIX::StrategyParameterValue StrategyParameterValue_5("STRING_1778270742");
    noStrategyParameters_0_0.set(StrategyParameterValue_5);
    StrategyParametersGrp_NoStrategyParameters_5.insert(StrategyParameterValue_5.getString());
    all_values.push_back(StrategyParametersGrp_NoStrategyParameters_5);

    msg.addGroup(noStrategyParameters_0_0);
  }
  {
    FIX50SP2::MultilegOrderCancelReplace::NoStrategyParameters noStrategyParameters_0_1;
    // StrategyParametersGrp.NoStrategyParameters
    multiset<string> StrategyParametersGrp_NoStrategyParameters_6;
    FIX::StrategyParameterName StrategyParameterName_6("STRING_1761802468");
    noStrategyParameters_0_1.set(StrategyParameterName_6);
    StrategyParametersGrp_NoStrategyParameters_6.insert(StrategyParameterName_6.getString());
    FIX::StrategyParameterType StrategyParameterType_6(27);
    noStrategyParameters_0_1.set(StrategyParameterType_6);
    StrategyParametersGrp_NoStrategyParameters_6.insert(StrategyParameterType_6.getString());
    FIX::StrategyParameterValue StrategyParameterValue_6("STRING_1543068547");
    noStrategyParameters_0_1.set(StrategyParameterValue_6);
    StrategyParametersGrp_NoStrategyParameters_6.insert(StrategyParameterValue_6.getString());
    all_values.push_back(StrategyParametersGrp_NoStrategyParameters_6);

    msg.addGroup(noStrategyParameters_0_1);
  }
  {
    FIX50SP2::MultilegOrderCancelReplace::NoStrategyParameters noStrategyParameters_0_2;
    // StrategyParametersGrp.NoStrategyParameters
    multiset<string> StrategyParametersGrp_NoStrategyParameters_7;
    FIX::StrategyParameterName StrategyParameterName_7("STRING_1362947929");
    noStrategyParameters_0_2.set(StrategyParameterName_7);
    StrategyParametersGrp_NoStrategyParameters_7.insert(StrategyParameterName_7.getString());
    FIX::StrategyParameterType StrategyParameterType_7(11);
    noStrategyParameters_0_2.set(StrategyParameterType_7);
    StrategyParametersGrp_NoStrategyParameters_7.insert(StrategyParameterType_7.getString());
    FIX::StrategyParameterValue StrategyParameterValue_7("STRING_1904720183");
    noStrategyParameters_0_2.set(StrategyParameterValue_7);
    StrategyParametersGrp_NoStrategyParameters_7.insert(StrategyParameterValue_7.getString());
    all_values.push_back(StrategyParametersGrp_NoStrategyParameters_7);

    msg.addGroup(noStrategyParameters_0_2);
  }
  // TrdgSesGrp
  // Group TrdgSesGrp.NoTradingSessions
  {
    FIX50SP2::MultilegOrderCancelReplace::NoTradingSessions noTradingSessions_0_0;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_6;
    FIX::TradingSessionID TradingSessionID_44("STRING_6");
    noTradingSessions_0_0.set(TradingSessionID_44);
    TrdgSesGrp_NoTradingSessions_6.insert(TradingSessionID_44.getString());
    FIX::TradingSessionSubID TradingSessionSubID_44("STRING_5");
    noTradingSessions_0_0.set(TradingSessionSubID_44);
    TrdgSesGrp_NoTradingSessions_6.insert(TradingSessionSubID_44.getString());
    all_values.push_back(TrdgSesGrp_NoTradingSessions_6);

    msg.addGroup(noTradingSessions_0_0);
  }
  {
    FIX50SP2::MultilegOrderCancelReplace::NoTradingSessions noTradingSessions_0_1;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_7;
    FIX::TradingSessionID TradingSessionID_45("STRING_3");
    noTradingSessions_0_1.set(TradingSessionID_45);
    TrdgSesGrp_NoTradingSessions_7.insert(TradingSessionID_45.getString());
    FIX::TradingSessionSubID TradingSessionSubID_45("STRING_1");
    noTradingSessions_0_1.set(TradingSessionSubID_45);
    TrdgSesGrp_NoTradingSessions_7.insert(TradingSessionSubID_45.getString());
    all_values.push_back(TrdgSesGrp_NoTradingSessions_7);

    msg.addGroup(noTradingSessions_0_1);
  }
  // TriggeringInstruction
  multiset<string> TriggeringInstruction_2;
  FIX::TriggerAction TriggerAction_2('3');
  msg.set(TriggerAction_2);
  TriggeringInstruction_2.insert(TriggerAction_2.getString());
  FIX::TriggerNewPrice TriggerNewPrice_2;
  TriggerNewPrice_2.setString("7992282");
  msg.set(TriggerNewPrice_2);
  TriggeringInstruction_2.insert(TriggerNewPrice_2.getString());
  FIX::TriggerNewQty TriggerNewQty_2;
  TriggerNewQty_2.setString("17144140");
  msg.set(TriggerNewQty_2);
  TriggeringInstruction_2.insert(TriggerNewQty_2.getString());
  FIX::TriggerOrderType TriggerOrderType_2('1');
  msg.set(TriggerOrderType_2);
  TriggeringInstruction_2.insert(TriggerOrderType_2.getString());
  FIX::TriggerPrice TriggerPrice_2;
  TriggerPrice_2.setString("18745181");
  msg.set(TriggerPrice_2);
  TriggeringInstruction_2.insert(TriggerPrice_2.getString());
  FIX::TriggerPriceDirection TriggerPriceDirection_2('D');
  msg.set(TriggerPriceDirection_2);
  TriggeringInstruction_2.insert(TriggerPriceDirection_2.getString());
  FIX::TriggerPriceType TriggerPriceType_2('5');
  msg.set(TriggerPriceType_2);
  TriggeringInstruction_2.insert(TriggerPriceType_2.getString());
  FIX::TriggerPriceTypeScope TriggerPriceTypeScope_2('2');
  msg.set(TriggerPriceTypeScope_2);
  TriggeringInstruction_2.insert(TriggerPriceTypeScope_2.getString());
  FIX::TriggerSecurityDesc TriggerSecurityDesc_2("STRING_1560208440");
  msg.set(TriggerSecurityDesc_2);
  TriggeringInstruction_2.insert(TriggerSecurityDesc_2.getString());
  FIX::TriggerSecurityID TriggerSecurityID_2("STRING_1658770173");
  msg.set(TriggerSecurityID_2);
  TriggeringInstruction_2.insert(TriggerSecurityID_2.getString());
  FIX::TriggerSecurityIDSource TriggerSecurityIDSource_2("STRING_1954428251");
  msg.set(TriggerSecurityIDSource_2);
  TriggeringInstruction_2.insert(TriggerSecurityIDSource_2.getString());
  FIX::TriggerSymbol TriggerSymbol_2("STRING_1539223964");
  msg.set(TriggerSymbol_2);
  TriggeringInstruction_2.insert(TriggerSymbol_2.getString());
  FIX::TriggerTradingSessionID TriggerTradingSessionID_2("STRING_1584334855");
  msg.set(TriggerTradingSessionID_2);
  TriggeringInstruction_2.insert(TriggerTradingSessionID_2.getString());
  FIX::TriggerTradingSessionSubID TriggerTradingSessionSubID_2("STRING_638245911");
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
    multiset<string> UnderlyingInstrument_59;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_59("DATA_1621741763");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_59);
    UnderlyingInstrument_59.insert(EncodedUnderlyingIssuer_59.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_59(1384255387);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_59);
    UnderlyingInstrument_59.insert(EncodedUnderlyingIssuerLen_59.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_59("DATA_277139843");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_59);
    UnderlyingInstrument_59.insert(EncodedUnderlyingSecurityDesc_59.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_59(1252528858);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_59);
    UnderlyingInstrument_59.insert(EncodedUnderlyingSecurityDescLen_59.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_59;
    UnderlyingAdjustedQuantity_59.setString("9985742");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_59);
    UnderlyingInstrument_59.insert(UnderlyingAdjustedQuantity_59.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_59;
    UnderlyingAllocationPercent_59.setString("58.710000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_59);
    UnderlyingInstrument_59.insert(UnderlyingAllocationPercent_59.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_59;
    UnderlyingAttachmentPoint_59.setString("37.570000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_59);
    UnderlyingInstrument_59.insert(UnderlyingAttachmentPoint_59.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_59("STRING_214038489");
    noUnderlyings_0_0.set(UnderlyingCFICode_59);
    UnderlyingInstrument_59.insert(UnderlyingCFICode_59.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_59("STRING_699622427");
    noUnderlyings_0_0.set(UnderlyingCPProgram_59);
    UnderlyingInstrument_59.insert(UnderlyingCPProgram_59.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_59("STRING_405350292");
    noUnderlyings_0_0.set(UnderlyingCPRegType_59);
    UnderlyingInstrument_59.insert(UnderlyingCPRegType_59.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_59;
    UnderlyingCapValue_59.setString("3206382");
    noUnderlyings_0_0.set(UnderlyingCapValue_59);
    UnderlyingInstrument_59.insert(UnderlyingCapValue_59.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_59;
    UnderlyingCashAmount_59.setString("19995467");
    noUnderlyings_0_0.set(UnderlyingCashAmount_59);
    UnderlyingInstrument_59.insert(UnderlyingCashAmount_59.getString());
    FIX::UnderlyingCashType UnderlyingCashType_59("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_59);
    UnderlyingInstrument_59.insert(UnderlyingCashType_59.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_59;
    UnderlyingContractMultiplier_59.setString("13138336");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_59);
    UnderlyingInstrument_59.insert(UnderlyingContractMultiplier_59.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_59(983627979);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_59);
    UnderlyingInstrument_59.insert(UnderlyingContractMultiplierUnit_59.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_59("COUNTRY_238830127");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_59);
    UnderlyingInstrument_59.insert(UnderlyingCountryOfIssue_59.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_59("LOCALMKTDATE_2113061848");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_59);
    UnderlyingInstrument_59.insert(UnderlyingCouponPaymentDate_59.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_59;
    UnderlyingCouponRate_59.setString("83.810000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_59);
    UnderlyingInstrument_59.insert(UnderlyingCouponRate_59.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_59("STRING_120263461");
    noUnderlyings_0_0.set(UnderlyingCreditRating_59);
    UnderlyingInstrument_59.insert(UnderlyingCreditRating_59.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_59("JPY");
    noUnderlyings_0_0.set(UnderlyingCurrency_59);
    UnderlyingInstrument_59.insert(UnderlyingCurrency_59.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_59;
    UnderlyingCurrentValue_59.setString("5692294");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_59);
    UnderlyingInstrument_59.insert(UnderlyingCurrentValue_59.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_59;
    UnderlyingDetachmentPoint_59.setString("40.450000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_59);
    UnderlyingInstrument_59.insert(UnderlyingDetachmentPoint_59.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_59;
    UnderlyingDirtyPrice_59.setString("6437660");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_59);
    UnderlyingInstrument_59.insert(UnderlyingDirtyPrice_59.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_59;
    UnderlyingEndPrice_59.setString("805159");
    noUnderlyings_0_0.set(UnderlyingEndPrice_59);
    UnderlyingInstrument_59.insert(UnderlyingEndPrice_59.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_59;
    UnderlyingEndValue_59.setString("9792486");
    noUnderlyings_0_0.set(UnderlyingEndValue_59);
    UnderlyingInstrument_59.insert(UnderlyingEndValue_59.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_59(35506383);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_59);
    UnderlyingInstrument_59.insert(UnderlyingExerciseStyle_59.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_59;
    UnderlyingFXRate_59.setString("16648508");
    noUnderlyings_0_0.set(UnderlyingFXRate_59);
    UnderlyingInstrument_59.insert(UnderlyingFXRate_59.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_59('M');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_59);
    UnderlyingInstrument_59.insert(UnderlyingFXRateCalc_59.getString());
    FIX::UnderlyingFactor UnderlyingFactor_59;
    UnderlyingFactor_59.setString("9895029");
    noUnderlyings_0_0.set(UnderlyingFactor_59);
    UnderlyingInstrument_59.insert(UnderlyingFactor_59.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_59(97435890);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_59);
    UnderlyingInstrument_59.insert(UnderlyingFlowScheduleType_59.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_59("STRING_1091752675");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_59);
    UnderlyingInstrument_59.insert(UnderlyingInstrRegistry_59.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_59("LOCALMKTDATE_226274733");
    noUnderlyings_0_0.set(UnderlyingIssueDate_59);
    UnderlyingInstrument_59.insert(UnderlyingIssueDate_59.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_59("STRING_374575734");
    noUnderlyings_0_0.set(UnderlyingIssuer_59);
    UnderlyingInstrument_59.insert(UnderlyingIssuer_59.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_59("STRING_196797885");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_59);
    UnderlyingInstrument_59.insert(UnderlyingLocaleOfIssue_59.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_59("LOCALMKTDATE_1224848941");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_59);
    UnderlyingInstrument_59.insert(UnderlyingMaturityDate_59.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_59("MONTHYEAR_1278641605");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_59);
    UnderlyingInstrument_59.insert(UnderlyingMaturityMonthYear_59.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_59("TZTIMEONLY_844911642");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_59);
    UnderlyingInstrument_59.insert(UnderlyingMaturityTime_59.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_59;
    UnderlyingNotionalPercentageOutstanding_59.setString("74.310000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_59);
    UnderlyingInstrument_59.insert(UnderlyingNotionalPercentageOutstanding_59.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_59('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_59);
    UnderlyingInstrument_59.insert(UnderlyingOptAttribute_59.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_59;
    UnderlyingOriginalNotionalPercentageOutstanding_59.setString("19.340000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_59);
    UnderlyingInstrument_59.insert(UnderlyingOriginalNotionalPercentageOutstanding_59.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_59("STRING_1759525692");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_59);
    UnderlyingInstrument_59.insert(UnderlyingPriceUnitOfMeasure_59.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_59;
    UnderlyingPriceUnitOfMeasureQty_59.setString("18303270");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_59);
    UnderlyingInstrument_59.insert(UnderlyingPriceUnitOfMeasureQty_59.getString());
    FIX::UnderlyingProduct UnderlyingProduct_59(856499683);
    noUnderlyings_0_0.set(UnderlyingProduct_59);
    UnderlyingInstrument_59.insert(UnderlyingProduct_59.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_59(925875656);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_59);
    UnderlyingInstrument_59.insert(UnderlyingPutOrCall_59.getString());
    FIX::UnderlyingPx UnderlyingPx_59;
    UnderlyingPx_59.setString("6664714");
    noUnderlyings_0_0.set(UnderlyingPx_59);
    UnderlyingInstrument_59.insert(UnderlyingPx_59.getString());
    FIX::UnderlyingQty UnderlyingQty_59;
    UnderlyingQty_59.setString("10953298");
    noUnderlyings_0_0.set(UnderlyingQty_59);
    UnderlyingInstrument_59.insert(UnderlyingQty_59.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_59("LOCALMKTDATE_891453856");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_59);
    UnderlyingInstrument_59.insert(UnderlyingRedemptionDate_59.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_59("STRING_1217029801");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_59);
    UnderlyingInstrument_59.insert(UnderlyingRepoCollateralSecurityType_59.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_59;
    UnderlyingRepurchaseRate_59.setString("32.710000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_59);
    UnderlyingInstrument_59.insert(UnderlyingRepurchaseRate_59.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_59(584066532);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_59);
    UnderlyingInstrument_59.insert(UnderlyingRepurchaseTerm_59.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_59("STRING_300587427");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_59);
    UnderlyingInstrument_59.insert(UnderlyingRestructuringType_59.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_59("STRING_1784822745");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_59);
    UnderlyingInstrument_59.insert(UnderlyingSecurityDesc_59.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_59("EXCHANGE_1756370577");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_59);
    UnderlyingInstrument_59.insert(UnderlyingSecurityExchange_59.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_59("STRING_944353494");
    noUnderlyings_0_0.set(UnderlyingSecurityID_59);
    UnderlyingInstrument_59.insert(UnderlyingSecurityID_59.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_59("STRING_1865338744");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_59);
    UnderlyingInstrument_59.insert(UnderlyingSecurityIDSource_59.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_59("STRING_588135578");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_59);
    UnderlyingInstrument_59.insert(UnderlyingSecuritySubType_59.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_59("STRING_979859877");
    noUnderlyings_0_0.set(UnderlyingSecurityType_59);
    UnderlyingInstrument_59.insert(UnderlyingSecurityType_59.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_59("STRING_1382705950");
    noUnderlyings_0_0.set(UnderlyingSeniority_59);
    UnderlyingInstrument_59.insert(UnderlyingSeniority_59.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_59("STRING_58146489");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_59);
    UnderlyingInstrument_59.insert(UnderlyingSettlMethod_59.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_59(4);
    noUnderlyings_0_0.set(UnderlyingSettlementType_59);
    UnderlyingInstrument_59.insert(UnderlyingSettlementType_59.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_59;
    UnderlyingStartValue_59.setString("14801418");
    noUnderlyings_0_0.set(UnderlyingStartValue_59);
    UnderlyingInstrument_59.insert(UnderlyingStartValue_59.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_59("STRING_1149899164");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_59);
    UnderlyingInstrument_59.insert(UnderlyingStateOrProvinceOfIssue_59.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_59("JPY");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_59);
    UnderlyingInstrument_59.insert(UnderlyingStrikeCurrency_59.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_59;
    UnderlyingStrikePrice_59.setString("13466970");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_59);
    UnderlyingInstrument_59.insert(UnderlyingStrikePrice_59.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_59("STRING_1273002898");
    noUnderlyings_0_0.set(UnderlyingSymbol_59);
    UnderlyingInstrument_59.insert(UnderlyingSymbol_59.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_59("STRING_985875532");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_59);
    UnderlyingInstrument_59.insert(UnderlyingSymbolSfx_59.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_59("STRING_44125043");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_59);
    UnderlyingInstrument_59.insert(UnderlyingTimeUnit_59.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_59("STRING_564406681");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_59);
    UnderlyingInstrument_59.insert(UnderlyingUnitOfMeasure_59.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_59;
    UnderlyingUnitOfMeasureQty_59.setString("8166559");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_59);
    UnderlyingInstrument_59.insert(UnderlyingUnitOfMeasureQty_59.getString());
    all_values.push_back(UnderlyingInstrument_59);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_121;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_121("STRING_176448726");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_121);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_121.insert(UnderlyingSecurityAltID_121.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_121("STRING_499499357");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_121);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_121.insert(UnderlyingSecurityAltIDSource_121.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_121);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_122;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_122("STRING_3403013");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_122);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_122.insert(UnderlyingSecurityAltID_122.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_122("STRING_1102324382");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_122);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_122.insert(UnderlyingSecurityAltIDSource_122.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_122);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_123;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_123("STRING_1165970776");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltID_123);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_123.insert(UnderlyingSecurityAltID_123.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_123("STRING_1098732823");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltIDSource_123);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_123.insert(UnderlyingSecurityAltIDSource_123.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_123);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_114;
      FIX::UnderlyingStipType UnderlyingStipType_114("STRING_235516929");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_114);
      UnderlyingStipulations_NoUnderlyingStips_114.insert(UnderlyingStipType_114.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_114("STRING_166842447");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_114);
      UnderlyingStipulations_NoUnderlyingStips_114.insert(UnderlyingStipValue_114.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_114);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_128;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_128("STRING_536104357");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_128);
      UndlyInstrumentParties_NoUndlyInstrumentParties_128.insert(UnderlyingInstrumentPartyID_128.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_128('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_128);
      UndlyInstrumentParties_NoUndlyInstrumentParties_128.insert(UnderlyingInstrumentPartyIDSource_128.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_128(39248052);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_128);
      UndlyInstrumentParties_NoUndlyInstrumentParties_128.insert(UnderlyingInstrumentPartyRole_128.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_128);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_259;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_259("STRING_1669520288");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_259);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_259.insert(UnderlyingInstrumentPartySubID_259.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_259(627383630);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_259);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_259.insert(UnderlyingInstrumentPartySubIDType_259.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_259);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_260;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_260("STRING_312834081");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_260);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_260.insert(UnderlyingInstrumentPartySubID_260.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_260(904742590);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_260);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_260.insert(UnderlyingInstrumentPartySubIDType_260.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_260);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_129;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_129("STRING_685530119");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_129);
      UndlyInstrumentParties_NoUndlyInstrumentParties_129.insert(UnderlyingInstrumentPartyID_129.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_129('1');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_129);
      UndlyInstrumentParties_NoUndlyInstrumentParties_129.insert(UnderlyingInstrumentPartyIDSource_129.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_129(237400782);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_129);
      UndlyInstrumentParties_NoUndlyInstrumentParties_129.insert(UnderlyingInstrumentPartyRole_129.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_129);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_261;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_261("STRING_182867261");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_261);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_261.insert(UnderlyingInstrumentPartySubID_261.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_261(2092118357);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_261);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_261.insert(UnderlyingInstrumentPartySubIDType_261.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_261);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_262;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_262("STRING_1034642685");
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubID_262);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_262.insert(UnderlyingInstrumentPartySubID_262.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_262(1455870160);
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubIDType_262);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_262.insert(UnderlyingInstrumentPartySubIDType_262.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_262);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    msg.addGroup(noUnderlyings_0_0);
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
