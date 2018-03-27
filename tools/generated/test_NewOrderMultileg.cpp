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

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::NewOrderMultileg msg;

  list<multiset<string>> all_values;
  multiset<string> NewOrderMultileg_0;
  FIX::Account Account_21("STRING_1452614972");
  msg.set(Account_21);
  NewOrderMultileg_0.insert(Account_21.getString());
  FIX::AccountType AccountType_19(4);
  msg.set(AccountType_19);
  NewOrderMultileg_0.insert(AccountType_19.getString());
  FIX::AcctIDSource AcctIDSource_14(1);
  msg.set(AcctIDSource_14);
  NewOrderMultileg_0.insert(AcctIDSource_14.getString());
  FIX::AllocID AllocID_17("STRING_436193915");
  msg.set(AllocID_17);
  NewOrderMultileg_0.insert(AllocID_17.getString());
  FIX::BookingType BookingType_16(0);
  msg.set(BookingType_16);
  NewOrderMultileg_0.insert(BookingType_16.getString());
  FIX::BookingUnit BookingUnit_10('0');
  msg.set(BookingUnit_10);
  NewOrderMultileg_0.insert(BookingUnit_10.getString());
  FIX::CancellationRights CancellationRights_5('M');
  msg.set(CancellationRights_5);
  NewOrderMultileg_0.insert(CancellationRights_5.getString());
  FIX::CashMargin CashMargin_10('2');
  msg.set(CashMargin_10);
  NewOrderMultileg_0.insert(CashMargin_10.getString());
  FIX::ClOrdID ClOrdID_32("STRING_639869215");
  msg.set(ClOrdID_32);
  NewOrderMultileg_0.insert(ClOrdID_32.getString());
  FIX::ClOrdLinkID ClOrdLinkID_12("STRING_1237705124");
  msg.set(ClOrdLinkID_12);
  NewOrderMultileg_0.insert(ClOrdLinkID_12.getString());
  FIX::ClearingFeeIndicator ClearingFeeIndicator_15("STRING_I");
  msg.set(ClearingFeeIndicator_15);
  NewOrderMultileg_0.insert(ClearingFeeIndicator_15.getString());
  FIX::ComplianceID ComplianceID_9("STRING_666230338");
  msg.set(ComplianceID_9);
  NewOrderMultileg_0.insert(ComplianceID_9.getString());
  FIX::CoveredOrUncovered CoveredOrUncovered_9(0);
  msg.set(CoveredOrUncovered_9);
  NewOrderMultileg_0.insert(CoveredOrUncovered_9.getString());
  FIX::Currency Currency_38("USD");
  msg.set(Currency_38);
  NewOrderMultileg_0.insert(Currency_38.getString());
  FIX::CustOrderCapacity CustOrderCapacity_13(2);
  msg.set(CustOrderCapacity_13);
  NewOrderMultileg_0.insert(CustOrderCapacity_13.getString());
  FIX::DayBookingInst DayBookingInst_10('1');
  msg.set(DayBookingInst_10);
  NewOrderMultileg_0.insert(DayBookingInst_10.getString());
  FIX::Designation Designation_7("STRING_25938808");
  msg.set(Designation_7);
  NewOrderMultileg_0.insert(Designation_7.getString());
  FIX::EffectiveTime EffectiveTime_7(FIX::UTCTIMESTAMP(16, 19, 37, 13, 52014));
  msg.set(EffectiveTime_7);
  NewOrderMultileg_0.insert(EffectiveTime_7.getString());
  FIX::EncodedText EncodedText_57("DATA_1316893997");
  msg.set(EncodedText_57);
  NewOrderMultileg_0.insert(EncodedText_57.getString());
  FIX::EncodedTextLen EncodedTextLen_57(1908484653);
  msg.set(EncodedTextLen_57);
  NewOrderMultileg_0.insert(EncodedTextLen_57.getString());
  FIX::ExDestination ExDestination_6("EXCHANGE_1483819751");
  msg.set(ExDestination_6);
  NewOrderMultileg_0.insert(ExDestination_6.getString());
  FIX::ExDestinationIDSource ExDestinationIDSource_6('D');
  msg.set(ExDestinationIDSource_6);
  NewOrderMultileg_0.insert(ExDestinationIDSource_6.getString());
  FIX::ExecInst ExecInst_10("MULTIPLECHARVALUE_Q");
  msg.set(ExecInst_10);
  NewOrderMultileg_0.insert(ExecInst_10.getString());
  FIX::ExpireDate ExpireDate_11("LOCALMKTDATE_1758130146");
  msg.set(ExpireDate_11);
  NewOrderMultileg_0.insert(ExpireDate_11.getString());
  FIX::ExpireTime ExpireTime_12(FIX::UTCTIMESTAMP(14, 1, 11, 27, 32015));
  msg.set(ExpireTime_12);
  NewOrderMultileg_0.insert(ExpireTime_12.getString());
  FIX::ForexReq ForexReq_10(true);
  msg.set(ForexReq_10);
  NewOrderMultileg_0.insert(ForexReq_10.getString());
  FIX::GTBookingInst GTBookingInst_7(0);
  msg.set(GTBookingInst_7);
  NewOrderMultileg_0.insert(GTBookingInst_7.getString());
  FIX::HandlInst HandlInst_7('1');
  msg.set(HandlInst_7);
  NewOrderMultileg_0.insert(HandlInst_7.getString());
  FIX::IOIID IOIID_7("STRING_1588275901");
  msg.set(IOIID_7);
  NewOrderMultileg_0.insert(IOIID_7.getString());
  FIX::LocateReqd LocateReqd_6(false);
  msg.set(LocateReqd_6);
  NewOrderMultileg_0.insert(LocateReqd_6.getString());
  FIX::MatchIncrement MatchIncrement_7;
  MatchIncrement_7.setString("15275139");
  msg.set(MatchIncrement_7);
  NewOrderMultileg_0.insert(MatchIncrement_7.getString());
  FIX::MaxFloor MaxFloor_7;
  MaxFloor_7.setString("16953087");
  msg.set(MaxFloor_7);
  NewOrderMultileg_0.insert(MaxFloor_7.getString());
  FIX::MaxPriceLevels MaxPriceLevels_7(1806822983);
  msg.set(MaxPriceLevels_7);
  NewOrderMultileg_0.insert(MaxPriceLevels_7.getString());
  FIX::MaxShow MaxShow_7;
  MaxShow_7.setString("11265145");
  msg.set(MaxShow_7);
  NewOrderMultileg_0.insert(MaxShow_7.getString());
  FIX::MinQty MinQty_10;
  MinQty_10.setString("19662701");
  msg.set(MinQty_10);
  NewOrderMultileg_0.insert(MinQty_10.getString());
  FIX::MoneyLaunderingStatus MoneyLaunderingStatus_5('N');
  msg.set(MoneyLaunderingStatus_5);
  NewOrderMultileg_0.insert(MoneyLaunderingStatus_5.getString());
  FIX::MultiLegRptTypeReq MultiLegRptTypeReq_1(0);
  msg.set(MultiLegRptTypeReq_1);
  NewOrderMultileg_0.insert(MultiLegRptTypeReq_1.getString());
  FIX::MultilegModel MultilegModel_8(1);
  msg.set(MultilegModel_8);
  NewOrderMultileg_0.insert(MultilegModel_8.getString());
  FIX::MultilegPriceMethod MultilegPriceMethod_8(2);
  msg.set(MultilegPriceMethod_8);
  NewOrderMultileg_0.insert(MultilegPriceMethod_8.getString());
  FIX::OrdType OrdType_43('D');
  msg.set(OrdType_43);
  NewOrderMultileg_0.insert(OrdType_43.getString());
  FIX::OrderCapacity OrderCapacity_19('G');
  msg.set(OrderCapacity_19);
  NewOrderMultileg_0.insert(OrderCapacity_19.getString());
  FIX::OrderRestrictions OrderRestrictions_16("MULTIPLECHARVALUE_E");
  msg.set(OrderRestrictions_16);
  NewOrderMultileg_0.insert(OrderRestrictions_16.getString());
  FIX::ParticipationRate ParticipationRate_7;
  ParticipationRate_7.setString("11.900000");
  msg.set(ParticipationRate_7);
  NewOrderMultileg_0.insert(ParticipationRate_7.getString());
  FIX::PositionEffect PositionEffect_13('C');
  msg.set(PositionEffect_13);
  NewOrderMultileg_0.insert(PositionEffect_13.getString());
  FIX::PreTradeAnonymity PreTradeAnonymity_10(true);
  msg.set(PreTradeAnonymity_10);
  NewOrderMultileg_0.insert(PreTradeAnonymity_10.getString());
  FIX::PreallocMethod PreallocMethod_10('1');
  msg.set(PreallocMethod_10);
  NewOrderMultileg_0.insert(PreallocMethod_10.getString());
  FIX::PrevClosePx PrevClosePx_8;
  PrevClosePx_8.setString("11917943");
  msg.set(PrevClosePx_8);
  NewOrderMultileg_0.insert(PrevClosePx_8.getString());
  FIX::Price Price_17;
  Price_17.setString("13884002");
  msg.set(Price_17);
  NewOrderMultileg_0.insert(Price_17.getString());
  FIX::PriceProtectionScope PriceProtectionScope_7('3');
  msg.set(PriceProtectionScope_7);
  NewOrderMultileg_0.insert(PriceProtectionScope_7.getString());
  FIX::PriceType PriceType_29(13);
  msg.set(PriceType_29);
  NewOrderMultileg_0.insert(PriceType_29.getString());
  FIX::ProcessCode ProcessCode_12('3');
  msg.set(ProcessCode_12);
  NewOrderMultileg_0.insert(ProcessCode_12.getString());
  FIX::QtyType QtyType_22(0);
  msg.set(QtyType_22);
  NewOrderMultileg_0.insert(QtyType_22.getString());
  FIX::QuoteID QuoteID_8("STRING_1103712638");
  msg.set(QuoteID_8);
  NewOrderMultileg_0.insert(QuoteID_8.getString());
  FIX::RefOrderID RefOrderID_3("STRING_1243707031");
  msg.set(RefOrderID_3);
  NewOrderMultileg_0.insert(RefOrderID_3.getString());
  FIX::RefOrderIDSource RefOrderIDSource_3('1');
  msg.set(RefOrderIDSource_3);
  NewOrderMultileg_0.insert(RefOrderIDSource_3.getString());
  FIX::RegistID RegistID_5("STRING_2139342096");
  msg.set(RegistID_5);
  NewOrderMultileg_0.insert(RegistID_5.getString());
  FIX::RiskFreeRate RiskFreeRate_2;
  RiskFreeRate_2.setString("17865686");
  msg.set(RiskFreeRate_2);
  NewOrderMultileg_0.insert(RiskFreeRate_2.getString());
  FIX::SecondaryClOrdID SecondaryClOrdID_30("STRING_1386428295");
  msg.set(SecondaryClOrdID_30);
  NewOrderMultileg_0.insert(SecondaryClOrdID_30.getString());
  FIX::SettlCurrency SettlCurrency_19("CAN");
  msg.set(SettlCurrency_19);
  NewOrderMultileg_0.insert(SettlCurrency_19.getString());
  FIX::SettlDate SettlDate_28("LOCALMKTDATE_1823614622");
  msg.set(SettlDate_28);
  NewOrderMultileg_0.insert(SettlDate_28.getString());
  FIX::SettlType SettlType_19("STRING_9");
  msg.set(SettlType_19);
  NewOrderMultileg_0.insert(SettlType_19.getString());
  FIX::Side Side_29('D');
  msg.set(Side_29);
  NewOrderMultileg_0.insert(Side_29.getString());
  FIX::SolicitedFlag SolicitedFlag_10(false);
  msg.set(SolicitedFlag_10);
  NewOrderMultileg_0.insert(SolicitedFlag_10.getString());
  FIX::StopPx StopPx_7;
  StopPx_7.setString("6242542");
  msg.set(StopPx_7);
  NewOrderMultileg_0.insert(StopPx_7.getString());
  FIX::SwapPoints SwapPoints_1;
  SwapPoints_1.setString("5939724");
  msg.set(SwapPoints_1);
  NewOrderMultileg_0.insert(SwapPoints_1.getString());
  FIX::TargetStrategy TargetStrategy_7(1);
  msg.set(TargetStrategy_7);
  NewOrderMultileg_0.insert(TargetStrategy_7.getString());
  FIX::TargetStrategyParameters TargetStrategyParameters_7("STRING_617046337");
  msg.set(TargetStrategyParameters_7);
  NewOrderMultileg_0.insert(TargetStrategyParameters_7.getString());
  FIX::Text Text_57("STRING_320696611");
  msg.set(Text_57);
  NewOrderMultileg_0.insert(Text_57.getString());
  FIX::TimeInForce TimeInForce_39('3');
  msg.set(TimeInForce_39);
  NewOrderMultileg_0.insert(TimeInForce_39.getString());
  FIX::TradeDate TradeDate_24("LOCALMKTDATE_343060685");
  msg.set(TradeDate_24);
  NewOrderMultileg_0.insert(TradeDate_24.getString());
  FIX::TradeOriginationDate TradeOriginationDate_16("LOCALMKTDATE_836607908");
  msg.set(TradeOriginationDate_16);
  NewOrderMultileg_0.insert(TradeOriginationDate_16.getString());
  FIX::TransactTime TransactTime_34(FIX::UTCTIMESTAMP(11, 55, 46, 20, 62005));
  msg.set(TransactTime_34);
  NewOrderMultileg_0.insert(TransactTime_34.getString());
  all_values.push_back(NewOrderMultileg_0);

  // CommissionData
  multiset<string> CommissionData_17;
  FIX::CommCurrency CommCurrency_17("GBP");
  msg.set(CommCurrency_17);
  CommissionData_17.insert(CommCurrency_17.getString());
  FIX::CommType CommType_17('2');
  msg.set(CommType_17);
  CommissionData_17.insert(CommType_17.getString());
  FIX::Commission Commission_17;
  Commission_17.setString("19461011");
  msg.set(Commission_17);
  CommissionData_17.insert(Commission_17.getString());
  FIX::FundRenewWaiv FundRenewWaiv_17('Y');
  msg.set(FundRenewWaiv_17);
  CommissionData_17.insert(FundRenewWaiv_17.getString());
  all_values.push_back(CommissionData_17);

  // DiscretionInstructions
  multiset<string> DiscretionInstructions_7;
  FIX::DiscretionInst DiscretionInst_7('1');
  msg.set(DiscretionInst_7);
  DiscretionInstructions_7.insert(DiscretionInst_7.getString());
  FIX::DiscretionLimitType DiscretionLimitType_7(0);
  msg.set(DiscretionLimitType_7);
  DiscretionInstructions_7.insert(DiscretionLimitType_7.getString());
  FIX::DiscretionMoveType DiscretionMoveType_7(1);
  msg.set(DiscretionMoveType_7);
  DiscretionInstructions_7.insert(DiscretionMoveType_7.getString());
  FIX::DiscretionOffsetType DiscretionOffsetType_7(1);
  msg.set(DiscretionOffsetType_7);
  DiscretionInstructions_7.insert(DiscretionOffsetType_7.getString());
  FIX::DiscretionOffsetValue DiscretionOffsetValue_7;
  DiscretionOffsetValue_7.setString("6530345");
  msg.set(DiscretionOffsetValue_7);
  DiscretionInstructions_7.insert(DiscretionOffsetValue_7.getString());
  FIX::DiscretionRoundDirection DiscretionRoundDirection_7(1);
  msg.set(DiscretionRoundDirection_7);
  DiscretionInstructions_7.insert(DiscretionRoundDirection_7.getString());
  FIX::DiscretionScope DiscretionScope_7(3);
  msg.set(DiscretionScope_7);
  DiscretionInstructions_7.insert(DiscretionScope_7.getString());
  all_values.push_back(DiscretionInstructions_7);

  // DisplayInstruction
  multiset<string> DisplayInstruction_7;
  FIX::DisplayHighQty DisplayHighQty_7;
  DisplayHighQty_7.setString("3291654");
  msg.set(DisplayHighQty_7);
  DisplayInstruction_7.insert(DisplayHighQty_7.getString());
  FIX::DisplayLowQty DisplayLowQty_7;
  DisplayLowQty_7.setString("1331750");
  msg.set(DisplayLowQty_7);
  DisplayInstruction_7.insert(DisplayLowQty_7.getString());
  FIX::DisplayMethod DisplayMethod_7('4');
  msg.set(DisplayMethod_7);
  DisplayInstruction_7.insert(DisplayMethod_7.getString());
  FIX::DisplayMinIncr DisplayMinIncr_7;
  DisplayMinIncr_7.setString("18121194");
  msg.set(DisplayMinIncr_7);
  DisplayInstruction_7.insert(DisplayMinIncr_7.getString());
  FIX::DisplayQty DisplayQty_7;
  DisplayQty_7.setString("7574293");
  msg.set(DisplayQty_7);
  DisplayInstruction_7.insert(DisplayQty_7.getString());
  FIX::DisplayWhen DisplayWhen_7('2');
  msg.set(DisplayWhen_7);
  DisplayInstruction_7.insert(DisplayWhen_7.getString());
  FIX::RefreshQty RefreshQty_7;
  RefreshQty_7.setString("8328678");
  msg.set(RefreshQty_7);
  DisplayInstruction_7.insert(RefreshQty_7.getString());
  FIX::SecondaryDisplayQty SecondaryDisplayQty_7;
  SecondaryDisplayQty_7.setString("13744756");
  msg.set(SecondaryDisplayQty_7);
  DisplayInstruction_7.insert(SecondaryDisplayQty_7.getString());
  all_values.push_back(DisplayInstruction_7);

  // Instrument
  multiset<string> Instrument_40;
  FIX::AttachmentPoint AttachmentPoint_40;
  AttachmentPoint_40.setString("2.900000");
  msg.set(AttachmentPoint_40);
  Instrument_40.insert(AttachmentPoint_40.getString());
  FIX::CFICode CFICode_40("STRING_138310162");
  msg.set(CFICode_40);
  Instrument_40.insert(CFICode_40.getString());
  FIX::CPProgram CPProgram_40(99);
  msg.set(CPProgram_40);
  Instrument_40.insert(CPProgram_40.getString());
  FIX::CPRegType CPRegType_40("STRING_422024551");
  msg.set(CPRegType_40);
  Instrument_40.insert(CPRegType_40.getString());
  FIX::CapPrice CapPrice_40;
  CapPrice_40.setString("5330470");
  msg.set(CapPrice_40);
  Instrument_40.insert(CapPrice_40.getString());
  FIX::ContractMultiplier ContractMultiplier_40;
  ContractMultiplier_40.setString("16232145");
  msg.set(ContractMultiplier_40);
  Instrument_40.insert(ContractMultiplier_40.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_40(2);
  msg.set(ContractMultiplierUnit_40);
  Instrument_40.insert(ContractMultiplierUnit_40.getString());
  FIX::ContractSettlMonth ContractSettlMonth_40("MONTHYEAR_1778079646");
  msg.set(ContractSettlMonth_40);
  Instrument_40.insert(ContractSettlMonth_40.getString());
  FIX::CountryOfIssue CountryOfIssue_40("COUNTRY_427846468");
  msg.set(CountryOfIssue_40);
  Instrument_40.insert(CountryOfIssue_40.getString());
  FIX::CouponPaymentDate CouponPaymentDate_40("LOCALMKTDATE_510194351");
  msg.set(CouponPaymentDate_40);
  Instrument_40.insert(CouponPaymentDate_40.getString());
  FIX::CouponRate CouponRate_40;
  CouponRate_40.setString("52.070000");
  msg.set(CouponRate_40);
  Instrument_40.insert(CouponRate_40.getString());
  FIX::CreditRating CreditRating_40("STRING_2037045780");
  msg.set(CreditRating_40);
  Instrument_40.insert(CreditRating_40.getString());
  FIX::DatedDate DatedDate_40("LOCALMKTDATE_2079832952");
  msg.set(DatedDate_40);
  Instrument_40.insert(DatedDate_40.getString());
  FIX::DetachmentPoint DetachmentPoint_40;
  DetachmentPoint_40.setString("10.890000");
  msg.set(DetachmentPoint_40);
  Instrument_40.insert(DetachmentPoint_40.getString());
  FIX::EncodedIssuer EncodedIssuer_40("DATA_1835663328");
  msg.set(EncodedIssuer_40);
  Instrument_40.insert(EncodedIssuer_40.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_40(458216895);
  msg.set(EncodedIssuerLen_40);
  Instrument_40.insert(EncodedIssuerLen_40.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_40("DATA_1521004002");
  msg.set(EncodedSecurityDesc_40);
  Instrument_40.insert(EncodedSecurityDesc_40.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_40(1102269535);
  msg.set(EncodedSecurityDescLen_40);
  Instrument_40.insert(EncodedSecurityDescLen_40.getString());
  FIX::ExerciseStyle ExerciseStyle_40(1);
  msg.set(ExerciseStyle_40);
  Instrument_40.insert(ExerciseStyle_40.getString());
  FIX::Factor Factor_40;
  Factor_40.setString("3366882");
  msg.set(Factor_40);
  Instrument_40.insert(Factor_40.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_40(true);
  msg.set(FlexProductEligibilityIndicator_40);
  Instrument_40.insert(FlexProductEligibilityIndicator_40.getString());
  FIX::FlexibleIndicator FlexibleIndicator_40(true);
  msg.set(FlexibleIndicator_40);
  Instrument_40.insert(FlexibleIndicator_40.getString());
  FIX::FloorPrice FloorPrice_40;
  FloorPrice_40.setString("3797334");
  msg.set(FloorPrice_40);
  Instrument_40.insert(FloorPrice_40.getString());
  FIX::FlowScheduleType FlowScheduleType_40(0);
  msg.set(FlowScheduleType_40);
  Instrument_40.insert(FlowScheduleType_40.getString());
  FIX::InstrRegistry InstrRegistry_40("STRING_1744553440");
  msg.set(InstrRegistry_40);
  Instrument_40.insert(InstrRegistry_40.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_40('1');
  msg.set(InstrmtAssignmentMethod_40);
  Instrument_40.insert(InstrmtAssignmentMethod_40.getString());
  FIX::InterestAccrualDate InterestAccrualDate_40("LOCALMKTDATE_1749105301");
  msg.set(InterestAccrualDate_40);
  Instrument_40.insert(InterestAccrualDate_40.getString());
  FIX::IssueDate IssueDate_40("LOCALMKTDATE_354499137");
  msg.set(IssueDate_40);
  Instrument_40.insert(IssueDate_40.getString());
  FIX::Issuer Issuer_40("STRING_462684723");
  msg.set(Issuer_40);
  Instrument_40.insert(Issuer_40.getString());
  FIX::ListMethod ListMethod_40(0);
  msg.set(ListMethod_40);
  Instrument_40.insert(ListMethod_40.getString());
  FIX::LocaleOfIssue LocaleOfIssue_40("STRING_1728974820");
  msg.set(LocaleOfIssue_40);
  Instrument_40.insert(LocaleOfIssue_40.getString());
  FIX::MaturityDate MaturityDate_40("LOCALMKTDATE_48101366");
  msg.set(MaturityDate_40);
  Instrument_40.insert(MaturityDate_40.getString());
  FIX::MaturityMonthYear MaturityMonthYear_40("MONTHYEAR_572799702");
  msg.set(MaturityMonthYear_40);
  Instrument_40.insert(MaturityMonthYear_40.getString());
  FIX::MaturityTime MaturityTime_40("TZTIMEONLY_1299027540");
  msg.set(MaturityTime_40);
  Instrument_40.insert(MaturityTime_40.getString());
  FIX::MinPriceIncrement MinPriceIncrement_40;
  MinPriceIncrement_40.setString("4701259");
  msg.set(MinPriceIncrement_40);
  Instrument_40.insert(MinPriceIncrement_40.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_40;
  MinPriceIncrementAmount_40.setString("11058467");
  msg.set(MinPriceIncrementAmount_40);
  Instrument_40.insert(MinPriceIncrementAmount_40.getString());
  FIX::NTPositionLimit NTPositionLimit_40(774758487);
  msg.set(NTPositionLimit_40);
  Instrument_40.insert(NTPositionLimit_40.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_40;
  NotionalPercentageOutstanding_40.setString("0.230000");
  msg.set(NotionalPercentageOutstanding_40);
  Instrument_40.insert(NotionalPercentageOutstanding_40.getString());
  FIX::OptAttribute OptAttribute_40('7');
  msg.set(OptAttribute_40);
  Instrument_40.insert(OptAttribute_40.getString());
  FIX::OptPayoutAmount OptPayoutAmount_40;
  OptPayoutAmount_40.setString("12026049");
  msg.set(OptPayoutAmount_40);
  Instrument_40.insert(OptPayoutAmount_40.getString());
  FIX::OptPayoutType OptPayoutType_40(2);
  msg.set(OptPayoutType_40);
  Instrument_40.insert(OptPayoutType_40.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_40;
  OriginalNotionalPercentageOutstanding_40.setString("79.880000");
  msg.set(OriginalNotionalPercentageOutstanding_40);
  Instrument_40.insert(OriginalNotionalPercentageOutstanding_40.getString());
  FIX::Pool Pool_40("STRING_1092167087");
  msg.set(Pool_40);
  Instrument_40.insert(Pool_40.getString());
  FIX::PositionLimit PositionLimit_40(1856623678);
  msg.set(PositionLimit_40);
  Instrument_40.insert(PositionLimit_40.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_40("STRING_INX");
  msg.set(PriceQuoteMethod_40);
  Instrument_40.insert(PriceQuoteMethod_40.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_40("STRING_780346768");
  msg.set(PriceUnitOfMeasure_40);
  Instrument_40.insert(PriceUnitOfMeasure_40.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_40;
  PriceUnitOfMeasureQty_40.setString("1673569");
  msg.set(PriceUnitOfMeasureQty_40);
  Instrument_40.insert(PriceUnitOfMeasureQty_40.getString());
  FIX::Product Product_42(10);
  msg.set(Product_42);
  Instrument_40.insert(Product_42.getString());
  FIX::ProductComplex ProductComplex_40("STRING_1882616303");
  msg.set(ProductComplex_40);
  Instrument_40.insert(ProductComplex_40.getString());
  FIX::PutOrCall PutOrCall_40(1);
  msg.set(PutOrCall_40);
  Instrument_40.insert(PutOrCall_40.getString());
  FIX::RedemptionDate RedemptionDate_40("LOCALMKTDATE_760117714");
  msg.set(RedemptionDate_40);
  Instrument_40.insert(RedemptionDate_40.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_40("STRING_1490436693");
  msg.set(RepoCollateralSecurityType_40);
  Instrument_40.insert(RepoCollateralSecurityType_40.getString());
  FIX::RepurchaseRate RepurchaseRate_40;
  RepurchaseRate_40.setString("45.660000");
  msg.set(RepurchaseRate_40);
  Instrument_40.insert(RepurchaseRate_40.getString());
  FIX::RepurchaseTerm RepurchaseTerm_40(1139851196);
  msg.set(RepurchaseTerm_40);
  Instrument_40.insert(RepurchaseTerm_40.getString());
  FIX::RestructuringType RestructuringType_40("STRING_FR");
  msg.set(RestructuringType_40);
  Instrument_40.insert(RestructuringType_40.getString());
  FIX::SecurityDesc SecurityDesc_40("STRING_204264358");
  msg.set(SecurityDesc_40);
  Instrument_40.insert(SecurityDesc_40.getString());
  FIX::SecurityExchange SecurityExchange_40("EXCHANGE_190332240");
  msg.set(SecurityExchange_40);
  Instrument_40.insert(SecurityExchange_40.getString());
  FIX::SecurityGroup SecurityGroup_40("STRING_1029044214");
  msg.set(SecurityGroup_40);
  Instrument_40.insert(SecurityGroup_40.getString());
  FIX::SecurityID SecurityID_40("STRING_558763496");
  msg.set(SecurityID_40);
  Instrument_40.insert(SecurityID_40.getString());
  FIX::SecurityIDSource SecurityIDSource_40("STRING_7");
  msg.set(SecurityIDSource_40);
  Instrument_40.insert(SecurityIDSource_40.getString());
  FIX::SecurityStatus SecurityStatus_40("STRING_1");
  msg.set(SecurityStatus_40);
  Instrument_40.insert(SecurityStatus_40.getString());
  FIX::SecuritySubType SecuritySubType_41("STRING_140254668");
  msg.set(SecuritySubType_41);
  Instrument_40.insert(SecuritySubType_41.getString());
  FIX::SecurityType SecurityType_42("STRING_PFAND");
  msg.set(SecurityType_42);
  Instrument_40.insert(SecurityType_42.getString());
  FIX::Seniority Seniority_40("STRING_SD");
  msg.set(Seniority_40);
  Instrument_40.insert(Seniority_40.getString());
  FIX::SettlMethod SettlMethod_40('C');
  msg.set(SettlMethod_40);
  Instrument_40.insert(SettlMethod_40.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_40("STRING_1171244247");
  msg.set(SettleOnOpenFlag_40);
  Instrument_40.insert(SettleOnOpenFlag_40.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_40("STRING_994696591");
  msg.set(StateOrProvinceOfIssue_40);
  Instrument_40.insert(StateOrProvinceOfIssue_40.getString());
  FIX::StrikeCurrency StrikeCurrency_40("USD");
  msg.set(StrikeCurrency_40);
  Instrument_40.insert(StrikeCurrency_40.getString());
  FIX::StrikeMultiplier StrikeMultiplier_40;
  StrikeMultiplier_40.setString("17311393");
  msg.set(StrikeMultiplier_40);
  Instrument_40.insert(StrikeMultiplier_40.getString());
  FIX::StrikePrice StrikePrice_40;
  StrikePrice_40.setString("12691620");
  msg.set(StrikePrice_40);
  Instrument_40.insert(StrikePrice_40.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_40(4);
  msg.set(StrikePriceBoundaryMethod_40);
  Instrument_40.insert(StrikePriceBoundaryMethod_40.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_40;
  StrikePriceBoundaryPrecision_40.setString("37.130000");
  msg.set(StrikePriceBoundaryPrecision_40);
  Instrument_40.insert(StrikePriceBoundaryPrecision_40.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_40(3);
  msg.set(StrikePriceDeterminationMethod_40);
  Instrument_40.insert(StrikePriceDeterminationMethod_40.getString());
  FIX::StrikeValue StrikeValue_40;
  StrikeValue_40.setString("20712550");
  msg.set(StrikeValue_40);
  Instrument_40.insert(StrikeValue_40.getString());
  FIX::Symbol Symbol_40("STRING_1486552790");
  msg.set(Symbol_40);
  Instrument_40.insert(Symbol_40.getString());
  FIX::SymbolSfx SymbolSfx_40("STRING_CD");
  msg.set(SymbolSfx_40);
  Instrument_40.insert(SymbolSfx_40.getString());
  FIX::TimeUnit TimeUnit_40("STRING_Min");
  msg.set(TimeUnit_40);
  Instrument_40.insert(TimeUnit_40.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_40(3);
  msg.set(UnderlyingPriceDeterminationMethod_40);
  Instrument_40.insert(UnderlyingPriceDeterminationMethod_40.getString());
  FIX::UnitOfMeasure UnitOfMeasure_40("STRING_tn");
  msg.set(UnitOfMeasure_40);
  Instrument_40.insert(UnitOfMeasure_40.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_40;
  UnitOfMeasureQty_40.setString("12344281");
  msg.set(UnitOfMeasureQty_40);
  Instrument_40.insert(UnitOfMeasureQty_40.getString());
  FIX::ValuationMethod ValuationMethod_40("STRING_CDS");
  msg.set(ValuationMethod_40);
  Instrument_40.insert(ValuationMethod_40.getString());
  all_values.push_back(Instrument_40);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::NewOrderMultileg::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_81;
    FIX::ComplexEventCondition ComplexEventCondition_81(1);
    noComplexEvents_0_0.set(ComplexEventCondition_81);
    ComplexEvents_NoComplexEvents_81.insert(ComplexEventCondition_81.getString());
    FIX::ComplexEventPrice ComplexEventPrice_81;
    ComplexEventPrice_81.setString("16624674");
    noComplexEvents_0_0.set(ComplexEventPrice_81);
    ComplexEvents_NoComplexEvents_81.insert(ComplexEventPrice_81.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_81(3);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_81);
    ComplexEvents_NoComplexEvents_81.insert(ComplexEventPriceBoundaryMethod_81.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_81;
    ComplexEventPriceBoundaryPrecision_81.setString("70.880000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_81);
    ComplexEvents_NoComplexEvents_81.insert(ComplexEventPriceBoundaryPrecision_81.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_81(2);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_81);
    ComplexEvents_NoComplexEvents_81.insert(ComplexEventPriceTimeType_81.getString());
    FIX::ComplexEventType ComplexEventType_81(6);
    noComplexEvents_0_0.set(ComplexEventType_81);
    ComplexEvents_NoComplexEvents_81.insert(ComplexEventType_81.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_81;
    ComplexOptPayoutAmount_81.setString("4571669");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_81);
    ComplexEvents_NoComplexEvents_81.insert(ComplexOptPayoutAmount_81.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_81);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::NewOrderMultileg::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_173;
      FIX::ComplexEventEndDate ComplexEventEndDate_173(FIX::UTCTIMESTAMP(20, 51, 41, 24, 112011));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_173);
      ComplexEventDates_NoComplexEventDates_173.insert(ComplexEventEndDate_173.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_173(FIX::UTCTIMESTAMP(16, 49, 35, 12, 32017));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_173);
      ComplexEventDates_NoComplexEventDates_173.insert(ComplexEventStartDate_173.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_173);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::NewOrderMultileg::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_344;
        FIX::ComplexEventEndTime ComplexEventEndTime_344(FIX::UTCTIMEONLY(20, 4, 47));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_344);
        ComplexEventTimes_NoComplexEventTimes_344.insert(ComplexEventEndTime_344.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_344(FIX::UTCTIMEONLY(12, 7, 37));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_344);
        ComplexEventTimes_NoComplexEventTimes_344.insert(ComplexEventStartTime_344.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_344);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::NewOrderMultileg::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_345;
        FIX::ComplexEventEndTime ComplexEventEndTime_345(FIX::UTCTIMEONLY(8, 21, 50));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_345);
        ComplexEventTimes_NoComplexEventTimes_345.insert(ComplexEventEndTime_345.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_345(FIX::UTCTIMEONLY(11, 47, 10));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_345);
        ComplexEventTimes_NoComplexEventTimes_345.insert(ComplexEventStartTime_345.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_345);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::NewOrderMultileg::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_346;
        FIX::ComplexEventEndTime ComplexEventEndTime_346(FIX::UTCTIMEONLY(11, 53, 17));
        noComplexEventTimes_0_0_2_2.set(ComplexEventEndTime_346);
        ComplexEventTimes_NoComplexEventTimes_346.insert(ComplexEventEndTime_346.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_346(FIX::UTCTIMEONLY(3, 22, 20));
        noComplexEventTimes_0_0_2_2.set(ComplexEventStartTime_346);
        ComplexEventTimes_NoComplexEventTimes_346.insert(ComplexEventStartTime_346.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_346);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::NewOrderMultileg::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_82;
    FIX::EventDate EventDate_82("LOCALMKTDATE_849416772");
    noEvents_0_0.set(EventDate_82);
    EvntGrp_NoEvents_82.insert(EventDate_82.getString());
    FIX::EventPx EventPx_82;
    EventPx_82.setString("15545957");
    noEvents_0_0.set(EventPx_82);
    EvntGrp_NoEvents_82.insert(EventPx_82.getString());
    FIX::EventText EventText_82("STRING_55890167");
    noEvents_0_0.set(EventText_82);
    EvntGrp_NoEvents_82.insert(EventText_82.getString());
    FIX::EventTime EventTime_82(FIX::UTCTIMESTAMP(4, 47, 59, 16, 42008));
    noEvents_0_0.set(EventTime_82);
    EvntGrp_NoEvents_82.insert(EventTime_82.getString());
    FIX::EventType EventType_82(11);
    noEvents_0_0.set(EventType_82);
    EvntGrp_NoEvents_82.insert(EventType_82.getString());
    all_values.push_back(EvntGrp_NoEvents_82);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::NewOrderMultileg::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_83;
    FIX::EventDate EventDate_83("LOCALMKTDATE_1303457251");
    noEvents_0_1.set(EventDate_83);
    EvntGrp_NoEvents_83.insert(EventDate_83.getString());
    FIX::EventPx EventPx_83;
    EventPx_83.setString("13188655");
    noEvents_0_1.set(EventPx_83);
    EvntGrp_NoEvents_83.insert(EventPx_83.getString());
    FIX::EventText EventText_83("STRING_1085820460");
    noEvents_0_1.set(EventText_83);
    EvntGrp_NoEvents_83.insert(EventText_83.getString());
    FIX::EventTime EventTime_83(FIX::UTCTIMESTAMP(22, 1, 55, 27, 62004));
    noEvents_0_1.set(EventTime_83);
    EvntGrp_NoEvents_83.insert(EventTime_83.getString());
    FIX::EventType EventType_83(14);
    noEvents_0_1.set(EventType_83);
    EvntGrp_NoEvents_83.insert(EventType_83.getString());
    all_values.push_back(EvntGrp_NoEvents_83);

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::NewOrderMultileg::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_73;
    FIX::InstrumentPartyID InstrumentPartyID_73("STRING_637091938");
    noInstrumentParties_0_0.set(InstrumentPartyID_73);
    InstrumentParties_NoInstrumentParties_73.insert(InstrumentPartyID_73.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_73('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_73);
    InstrumentParties_NoInstrumentParties_73.insert(InstrumentPartyIDSource_73.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_73(820154454);
    noInstrumentParties_0_0.set(InstrumentPartyRole_73);
    InstrumentParties_NoInstrumentParties_73.insert(InstrumentPartyRole_73.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_73);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::NewOrderMultileg::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_145;
      FIX::InstrumentPartySubID InstrumentPartySubID_145("STRING_2118867829");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_145);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_145.insert(InstrumentPartySubID_145.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_145(1505057957);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_145);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_145.insert(InstrumentPartySubIDType_145.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_145);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_146;
      FIX::InstrumentPartySubID InstrumentPartySubID_146("STRING_1340627886");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_146);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_146.insert(InstrumentPartySubID_146.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_146(1439074056);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_146);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_146.insert(InstrumentPartySubIDType_146.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_146);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::NewOrderMultileg::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_74;
    FIX::InstrumentPartyID InstrumentPartyID_74("STRING_206991081");
    noInstrumentParties_0_1.set(InstrumentPartyID_74);
    InstrumentParties_NoInstrumentParties_74.insert(InstrumentPartyID_74.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_74('7');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_74);
    InstrumentParties_NoInstrumentParties_74.insert(InstrumentPartyIDSource_74.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_74(1494964223);
    noInstrumentParties_0_1.set(InstrumentPartyRole_74);
    InstrumentParties_NoInstrumentParties_74.insert(InstrumentPartyRole_74.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_74);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::NewOrderMultileg::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_147;
      FIX::InstrumentPartySubID InstrumentPartySubID_147("STRING_1593636837");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_147);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_147.insert(InstrumentPartySubID_147.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_147(62826062);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_147);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_147.insert(InstrumentPartySubIDType_147.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_147);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_148;
      FIX::InstrumentPartySubID InstrumentPartySubID_148("STRING_900881067");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_148);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_148.insert(InstrumentPartySubID_148.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_148(577543214);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_148);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_148.insert(InstrumentPartySubIDType_148.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_148);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::NewOrderMultileg::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_149;
      FIX::InstrumentPartySubID InstrumentPartySubID_149("STRING_1528755173");
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubID_149);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_149.insert(InstrumentPartySubID_149.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_149(1994405645);
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubIDType_149);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_149.insert(InstrumentPartySubIDType_149.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_149);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_2);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::NewOrderMultileg::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_77;
    FIX::SecurityAltID SecurityAltID_77("STRING_684728776");
    noSecurityAltID_0_0.set(SecurityAltID_77);
    SecAltIDGrp_NoSecurityAltID_77.insert(SecurityAltID_77.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_77("STRING_1165787563");
    noSecurityAltID_0_0.set(SecurityAltIDSource_77);
    SecAltIDGrp_NoSecurityAltID_77.insert(SecurityAltIDSource_77.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_77);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::NewOrderMultileg::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_78;
    FIX::SecurityAltID SecurityAltID_78("STRING_1662088136");
    noSecurityAltID_0_1.set(SecurityAltID_78);
    SecAltIDGrp_NoSecurityAltID_78.insert(SecurityAltID_78.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_78("STRING_1519853249");
    noSecurityAltID_0_1.set(SecurityAltIDSource_78);
    SecAltIDGrp_NoSecurityAltID_78.insert(SecurityAltIDSource_78.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_78);

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_80;
  FIX::SecurityXML SecurityXML_81("XMLDATA_77494305");
  msg.set(SecurityXML_81);
  FIX::SecurityXMLLen SecurityXMLLen_40(1039737770);
  msg.set(SecurityXMLLen_40);
  FIX::SecurityXMLSchema SecurityXMLSchema_40("STRING_1785048385");
  msg.set(SecurityXMLSchema_40);
  SecurityXML_80.insert(SecurityXMLSchema_40.getString());
  all_values.push_back(SecurityXML_80);

  // LegOrdGrp
  // Group LegOrdGrp.NoLegs
  {
    FIX50SP2::NewOrderMultileg::NoLegs noLegs_0_0;
    // LegOrdGrp.NoLegs
    multiset<string> LegOrdGrp_NoLegs_1;
    FIX::LegAllocID LegAllocID_4("STRING_1237961263");
    noLegs_0_0.set(LegAllocID_4);
    LegOrdGrp_NoLegs_1.insert(LegAllocID_4.getString());
    FIX::LegCoveredOrUncovered LegCoveredOrUncovered_4(1937481119);
    noLegs_0_0.set(LegCoveredOrUncovered_4);
    LegOrdGrp_NoLegs_1.insert(LegCoveredOrUncovered_4.getString());
    FIX::LegCurrencyRatio LegCurrencyRatio_4;
    LegCurrencyRatio_4.setString("8911308");
    noLegs_0_0.set(LegCurrencyRatio_4);
    LegOrdGrp_NoLegs_1.insert(LegCurrencyRatio_4.getString());
    FIX::LegDividendYield LegDividendYield_4;
    LegDividendYield_4.setString("97.600000");
    noLegs_0_0.set(LegDividendYield_4);
    LegOrdGrp_NoLegs_1.insert(LegDividendYield_4.getString());
    FIX::LegExecInst LegExecInst_4("MULTIPLECHARVALUE_427089409");
    noLegs_0_0.set(LegExecInst_4);
    LegOrdGrp_NoLegs_1.insert(LegExecInst_4.getString());
    FIX::LegOrderQty LegOrderQty_4;
    LegOrderQty_4.setString("20633613");
    noLegs_0_0.set(LegOrderQty_4);
    LegOrdGrp_NoLegs_1.insert(LegOrderQty_4.getString());
    FIX::LegPositionEffect LegPositionEffect_4('6');
    noLegs_0_0.set(LegPositionEffect_4);
    LegOrdGrp_NoLegs_1.insert(LegPositionEffect_4.getString());
    FIX::LegQty LegQty_4;
    LegQty_4.setString("14380607");
    noLegs_0_0.set(LegQty_4);
    LegOrdGrp_NoLegs_1.insert(LegQty_4.getString());
    FIX::LegRefID LegRefID_4("STRING_2034745556");
    noLegs_0_0.set(LegRefID_4);
    LegOrdGrp_NoLegs_1.insert(LegRefID_4.getString());
    FIX::LegSettlCurrency LegSettlCurrency_4("CHF");
    noLegs_0_0.set(LegSettlCurrency_4);
    LegOrdGrp_NoLegs_1.insert(LegSettlCurrency_4.getString());
    FIX::LegSettlDate LegSettlDate_4("LOCALMKTDATE_1326335964");
    noLegs_0_0.set(LegSettlDate_4);
    LegOrdGrp_NoLegs_1.insert(LegSettlDate_4.getString());
    FIX::LegSettlType LegSettlType_4('1');
    noLegs_0_0.set(LegSettlType_4);
    LegOrdGrp_NoLegs_1.insert(LegSettlType_4.getString());
    FIX::LegSwapType LegSwapType_4(4);
    noLegs_0_0.set(LegSwapType_4);
    LegOrdGrp_NoLegs_1.insert(LegSwapType_4.getString());
    FIX::LegVolatility LegVolatility_4;
    LegVolatility_4.setString("6738165");
    noLegs_0_0.set(LegVolatility_4);
    LegOrdGrp_NoLegs_1.insert(LegVolatility_4.getString());
    all_values.push_back(LegOrdGrp_NoLegs_1);

    // InstrumentLeg
    multiset<string> InstrumentLeg_62;
    FIX::EncodedLegIssuer EncodedLegIssuer_62("DATA_1848870792");
    noLegs_0_0.set(EncodedLegIssuer_62);
    InstrumentLeg_62.insert(EncodedLegIssuer_62.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_62(825098176);
    noLegs_0_0.set(EncodedLegIssuerLen_62);
    InstrumentLeg_62.insert(EncodedLegIssuerLen_62.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_62("DATA_736642602");
    noLegs_0_0.set(EncodedLegSecurityDesc_62);
    InstrumentLeg_62.insert(EncodedLegSecurityDesc_62.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_62(602268211);
    noLegs_0_0.set(EncodedLegSecurityDescLen_62);
    InstrumentLeg_62.insert(EncodedLegSecurityDescLen_62.getString());
    FIX::LegCFICode LegCFICode_62("STRING_1402641390");
    noLegs_0_0.set(LegCFICode_62);
    InstrumentLeg_62.insert(LegCFICode_62.getString());
    FIX::LegContractMultiplier LegContractMultiplier_62;
    LegContractMultiplier_62.setString("1179141");
    noLegs_0_0.set(LegContractMultiplier_62);
    InstrumentLeg_62.insert(LegContractMultiplier_62.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_62(449190208);
    noLegs_0_0.set(LegContractMultiplierUnit_62);
    InstrumentLeg_62.insert(LegContractMultiplierUnit_62.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_62("MONTHYEAR_1978909066");
    noLegs_0_0.set(LegContractSettlMonth_62);
    InstrumentLeg_62.insert(LegContractSettlMonth_62.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_62("COUNTRY_802642904");
    noLegs_0_0.set(LegCountryOfIssue_62);
    InstrumentLeg_62.insert(LegCountryOfIssue_62.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_62("LOCALMKTDATE_1614977772");
    noLegs_0_0.set(LegCouponPaymentDate_62);
    InstrumentLeg_62.insert(LegCouponPaymentDate_62.getString());
    FIX::LegCouponRate LegCouponRate_62;
    LegCouponRate_62.setString("35.550000");
    noLegs_0_0.set(LegCouponRate_62);
    InstrumentLeg_62.insert(LegCouponRate_62.getString());
    FIX::LegCreditRating LegCreditRating_62("STRING_175012506");
    noLegs_0_0.set(LegCreditRating_62);
    InstrumentLeg_62.insert(LegCreditRating_62.getString());
    FIX::LegCurrency LegCurrency_62("CAN");
    noLegs_0_0.set(LegCurrency_62);
    InstrumentLeg_62.insert(LegCurrency_62.getString());
    FIX::LegDatedDate LegDatedDate_62("LOCALMKTDATE_1960060891");
    noLegs_0_0.set(LegDatedDate_62);
    InstrumentLeg_62.insert(LegDatedDate_62.getString());
    FIX::LegExerciseStyle LegExerciseStyle_62(127314026);
    noLegs_0_0.set(LegExerciseStyle_62);
    InstrumentLeg_62.insert(LegExerciseStyle_62.getString());
    FIX::LegFactor LegFactor_62;
    LegFactor_62.setString("16237289");
    noLegs_0_0.set(LegFactor_62);
    InstrumentLeg_62.insert(LegFactor_62.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_62(1750058362);
    noLegs_0_0.set(LegFlowScheduleType_62);
    InstrumentLeg_62.insert(LegFlowScheduleType_62.getString());
    FIX::LegInstrRegistry LegInstrRegistry_62("STRING_1018444855");
    noLegs_0_0.set(LegInstrRegistry_62);
    InstrumentLeg_62.insert(LegInstrRegistry_62.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_62("LOCALMKTDATE_1430315052");
    noLegs_0_0.set(LegInterestAccrualDate_62);
    InstrumentLeg_62.insert(LegInterestAccrualDate_62.getString());
    FIX::LegIssueDate LegIssueDate_62("LOCALMKTDATE_29664124");
    noLegs_0_0.set(LegIssueDate_62);
    InstrumentLeg_62.insert(LegIssueDate_62.getString());
    FIX::LegIssuer LegIssuer_62("STRING_934322583");
    noLegs_0_0.set(LegIssuer_62);
    InstrumentLeg_62.insert(LegIssuer_62.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_62("STRING_2057055618");
    noLegs_0_0.set(LegLocaleOfIssue_62);
    InstrumentLeg_62.insert(LegLocaleOfIssue_62.getString());
    FIX::LegMaturityDate LegMaturityDate_62("LOCALMKTDATE_1467724839");
    noLegs_0_0.set(LegMaturityDate_62);
    InstrumentLeg_62.insert(LegMaturityDate_62.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_62("MONTHYEAR_821584491");
    noLegs_0_0.set(LegMaturityMonthYear_62);
    InstrumentLeg_62.insert(LegMaturityMonthYear_62.getString());
    FIX::LegMaturityTime LegMaturityTime_62("TZTIMEONLY_2041370494");
    noLegs_0_0.set(LegMaturityTime_62);
    InstrumentLeg_62.insert(LegMaturityTime_62.getString());
    FIX::LegOptAttribute LegOptAttribute_62('2');
    noLegs_0_0.set(LegOptAttribute_62);
    InstrumentLeg_62.insert(LegOptAttribute_62.getString());
    FIX::LegOptionRatio LegOptionRatio_62;
    LegOptionRatio_62.setString("4368");
    noLegs_0_0.set(LegOptionRatio_62);
    InstrumentLeg_62.insert(LegOptionRatio_62.getString());
    FIX::LegPool LegPool_62("STRING_85192802");
    noLegs_0_0.set(LegPool_62);
    InstrumentLeg_62.insert(LegPool_62.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_62("STRING_1330391131");
    noLegs_0_0.set(LegPriceUnitOfMeasure_62);
    InstrumentLeg_62.insert(LegPriceUnitOfMeasure_62.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_62;
    LegPriceUnitOfMeasureQty_62.setString("6742533");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_62);
    InstrumentLeg_62.insert(LegPriceUnitOfMeasureQty_62.getString());
    FIX::LegProduct LegProduct_62(1934063594);
    noLegs_0_0.set(LegProduct_62);
    InstrumentLeg_62.insert(LegProduct_62.getString());
    FIX::LegPutOrCall LegPutOrCall_62(8005659);
    noLegs_0_0.set(LegPutOrCall_62);
    InstrumentLeg_62.insert(LegPutOrCall_62.getString());
    FIX::LegRatioQty LegRatioQty_62;
    LegRatioQty_62.setString("14108959");
    noLegs_0_0.set(LegRatioQty_62);
    InstrumentLeg_62.insert(LegRatioQty_62.getString());
    FIX::LegRedemptionDate LegRedemptionDate_62("LOCALMKTDATE_388848157");
    noLegs_0_0.set(LegRedemptionDate_62);
    InstrumentLeg_62.insert(LegRedemptionDate_62.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_62("STRING_1410647049");
    noLegs_0_0.set(LegRepoCollateralSecurityType_62);
    InstrumentLeg_62.insert(LegRepoCollateralSecurityType_62.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_62;
    LegRepurchaseRate_62.setString("0.780000");
    noLegs_0_0.set(LegRepurchaseRate_62);
    InstrumentLeg_62.insert(LegRepurchaseRate_62.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_62(838038366);
    noLegs_0_0.set(LegRepurchaseTerm_62);
    InstrumentLeg_62.insert(LegRepurchaseTerm_62.getString());
    FIX::LegSecurityDesc LegSecurityDesc_62("STRING_1242072468");
    noLegs_0_0.set(LegSecurityDesc_62);
    InstrumentLeg_62.insert(LegSecurityDesc_62.getString());
    FIX::LegSecurityExchange LegSecurityExchange_62("EXCHANGE_183969335");
    noLegs_0_0.set(LegSecurityExchange_62);
    InstrumentLeg_62.insert(LegSecurityExchange_62.getString());
    FIX::LegSecurityID LegSecurityID_62("STRING_305532490");
    noLegs_0_0.set(LegSecurityID_62);
    InstrumentLeg_62.insert(LegSecurityID_62.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_62("STRING_588102375");
    noLegs_0_0.set(LegSecurityIDSource_62);
    InstrumentLeg_62.insert(LegSecurityIDSource_62.getString());
    FIX::LegSecuritySubType LegSecuritySubType_62("STRING_358981841");
    noLegs_0_0.set(LegSecuritySubType_62);
    InstrumentLeg_62.insert(LegSecuritySubType_62.getString());
    FIX::LegSecurityType LegSecurityType_62("STRING_1998004567");
    noLegs_0_0.set(LegSecurityType_62);
    InstrumentLeg_62.insert(LegSecurityType_62.getString());
    FIX::LegSide LegSide_62('9');
    noLegs_0_0.set(LegSide_62);
    InstrumentLeg_62.insert(LegSide_62.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_62("STRING_171559084");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_62);
    InstrumentLeg_62.insert(LegStateOrProvinceOfIssue_62.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_62("USD");
    noLegs_0_0.set(LegStrikeCurrency_62);
    InstrumentLeg_62.insert(LegStrikeCurrency_62.getString());
    FIX::LegStrikePrice LegStrikePrice_62;
    LegStrikePrice_62.setString("19216174");
    noLegs_0_0.set(LegStrikePrice_62);
    InstrumentLeg_62.insert(LegStrikePrice_62.getString());
    FIX::LegSymbol LegSymbol_62("STRING_996279801");
    noLegs_0_0.set(LegSymbol_62);
    InstrumentLeg_62.insert(LegSymbol_62.getString());
    FIX::LegSymbolSfx LegSymbolSfx_62("STRING_1880430396");
    noLegs_0_0.set(LegSymbolSfx_62);
    InstrumentLeg_62.insert(LegSymbolSfx_62.getString());
    FIX::LegTimeUnit LegTimeUnit_62("STRING_1951281570");
    noLegs_0_0.set(LegTimeUnit_62);
    InstrumentLeg_62.insert(LegTimeUnit_62.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_62("STRING_1930602384");
    noLegs_0_0.set(LegUnitOfMeasure_62);
    InstrumentLeg_62.insert(LegUnitOfMeasure_62.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_62;
    LegUnitOfMeasureQty_62.setString("17900023");
    noLegs_0_0.set(LegUnitOfMeasureQty_62);
    InstrumentLeg_62.insert(LegUnitOfMeasureQty_62.getString());
    all_values.push_back(InstrumentLeg_62);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_110;
      FIX::LegSecurityAltID LegSecurityAltID_110("STRING_604703227");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_110);
      LegSecAltIDGrp_NoLegSecurityAltID_110.insert(LegSecurityAltID_110.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_110("STRING_1683889212");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_110);
      LegSecAltIDGrp_NoLegSecurityAltID_110.insert(LegSecurityAltIDSource_110.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_110);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_111;
      FIX::LegSecurityAltID LegSecurityAltID_111("STRING_1222968907");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_111);
      LegSecAltIDGrp_NoLegSecurityAltID_111.insert(LegSecurityAltID_111.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_111("STRING_605140035");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_111);
      LegSecAltIDGrp_NoLegSecurityAltID_111.insert(LegSecurityAltIDSource_111.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_111);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_112;
      FIX::LegSecurityAltID LegSecurityAltID_112("STRING_1769082015");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltID_112);
      LegSecAltIDGrp_NoLegSecurityAltID_112.insert(LegSecurityAltID_112.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_112("STRING_405876390");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltIDSource_112);
      LegSecAltIDGrp_NoLegSecurityAltID_112.insert(LegSecurityAltIDSource_112.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_112);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_2);
    }
    // LegPreAllocGrp
    // Group LegPreAllocGrp.NoLegAllocs
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs noLegAllocs_0_1_0;
      // LegPreAllocGrp.NoLegAllocs
      multiset<string> LegPreAllocGrp_NoLegAllocs_9;
      FIX::LegAllocAccount LegAllocAccount_9("STRING_1555661961");
      noLegAllocs_0_1_0.set(LegAllocAccount_9);
      LegPreAllocGrp_NoLegAllocs_9.insert(LegAllocAccount_9.getString());
      FIX::LegAllocAcctIDSource LegAllocAcctIDSource_9("STRING_413882050");
      noLegAllocs_0_1_0.set(LegAllocAcctIDSource_9);
      LegPreAllocGrp_NoLegAllocs_9.insert(LegAllocAcctIDSource_9.getString());
      FIX::LegAllocQty LegAllocQty_9;
      LegAllocQty_9.setString("5428056");
      noLegAllocs_0_1_0.set(LegAllocQty_9);
      LegPreAllocGrp_NoLegAllocs_9.insert(LegAllocQty_9.getString());
      FIX::LegAllocSettlCurrency LegAllocSettlCurrency_9("EUR");
      noLegAllocs_0_1_0.set(LegAllocSettlCurrency_9);
      LegPreAllocGrp_NoLegAllocs_9.insert(LegAllocSettlCurrency_9.getString());
      FIX::LegIndividualAllocID LegIndividualAllocID_9("STRING_2071615764");
      noLegAllocs_0_1_0.set(LegIndividualAllocID_9);
      LegPreAllocGrp_NoLegAllocs_9.insert(LegIndividualAllocID_9.getString());
      all_values.push_back(LegPreAllocGrp_NoLegAllocs_9);

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_0_0_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_37;
        FIX::Nested2PartyID Nested2PartyID_37("STRING_919117919");
        noNested2PartyIDs_0_0_2_0.set(Nested2PartyID_37);
        NestedParties2_NoNested2PartyIDs_37.insert(Nested2PartyID_37.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_37('1');
        noNested2PartyIDs_0_0_2_0.set(Nested2PartyIDSource_37);
        NestedParties2_NoNested2PartyIDs_37.insert(Nested2PartyIDSource_37.getString());
        FIX::Nested2PartyRole Nested2PartyRole_37(940597327);
        noNested2PartyIDs_0_0_2_0.set(Nested2PartyRole_37);
        NestedParties2_NoNested2PartyIDs_37.insert(Nested2PartyRole_37.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_37);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_75;
          FIX::Nested2PartySubID Nested2PartySubID_75("STRING_467083292");
          noNested2PartySubIDs_0_0_0_3_0.set(Nested2PartySubID_75);
          NstdPtys2SubGrp_NoNested2PartySubIDs_75.insert(Nested2PartySubID_75.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_75(791118246);
          noNested2PartySubIDs_0_0_0_3_0.set(Nested2PartySubIDType_75);
          NstdPtys2SubGrp_NoNested2PartySubIDs_75.insert(Nested2PartySubIDType_75.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_75);

          noNested2PartyIDs_0_0_2_0.addGroup(noNested2PartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_0_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_76;
          FIX::Nested2PartySubID Nested2PartySubID_76("STRING_333606698");
          noNested2PartySubIDs_0_0_0_3_1.set(Nested2PartySubID_76);
          NstdPtys2SubGrp_NoNested2PartySubIDs_76.insert(Nested2PartySubID_76.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_76(638642376);
          noNested2PartySubIDs_0_0_0_3_1.set(Nested2PartySubIDType_76);
          NstdPtys2SubGrp_NoNested2PartySubIDs_76.insert(Nested2PartySubIDType_76.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_76);

          noNested2PartyIDs_0_0_2_0.addGroup(noNested2PartySubIDs_0_0_0_3_1);
        }
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_0_3_2;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_77;
          FIX::Nested2PartySubID Nested2PartySubID_77("STRING_768953192");
          noNested2PartySubIDs_0_0_0_3_2.set(Nested2PartySubID_77);
          NstdPtys2SubGrp_NoNested2PartySubIDs_77.insert(Nested2PartySubID_77.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_77(783722042);
          noNested2PartySubIDs_0_0_0_3_2.set(Nested2PartySubIDType_77);
          NstdPtys2SubGrp_NoNested2PartySubIDs_77.insert(Nested2PartySubIDType_77.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_77);

          noNested2PartyIDs_0_0_2_0.addGroup(noNested2PartySubIDs_0_0_0_3_2);
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
      multiset<string> LegStipulations_NoLegStipulations_12;
      FIX::LegStipulationType LegStipulationType_12("STRING_1765232993");
      noLegStipulations_0_1_0.set(LegStipulationType_12);
      LegStipulations_NoLegStipulations_12.insert(LegStipulationType_12.getString());
      FIX::LegStipulationValue LegStipulationValue_12("STRING_516668790");
      noLegStipulations_0_1_0.set(LegStipulationValue_12);
      LegStipulations_NoLegStipulations_12.insert(LegStipulationValue_12.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_12);

      noLegs_0_0.addGroup(noLegStipulations_0_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoLegStipulations noLegStipulations_0_1_1;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_13;
      FIX::LegStipulationType LegStipulationType_13("STRING_216574097");
      noLegStipulations_0_1_1.set(LegStipulationType_13);
      LegStipulations_NoLegStipulations_13.insert(LegStipulationType_13.getString());
      FIX::LegStipulationValue LegStipulationValue_13("STRING_1548351729");
      noLegStipulations_0_1_1.set(LegStipulationValue_13);
      LegStipulations_NoLegStipulations_13.insert(LegStipulationValue_13.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_13);

      noLegs_0_0.addGroup(noLegStipulations_0_1_1);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_82;
      FIX::NestedPartyID NestedPartyID_82("STRING_1488096859");
      noNestedPartyIDs_0_1_0.set(NestedPartyID_82);
      NestedParties_NoNestedPartyIDs_82.insert(NestedPartyID_82.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_82('5');
      noNestedPartyIDs_0_1_0.set(NestedPartyIDSource_82);
      NestedParties_NoNestedPartyIDs_82.insert(NestedPartyIDSource_82.getString());
      FIX::NestedPartyRole NestedPartyRole_82(1843076721);
      noNestedPartyIDs_0_1_0.set(NestedPartyRole_82);
      NestedParties_NoNestedPartyIDs_82.insert(NestedPartyRole_82.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_82);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_158;
        FIX::NestedPartySubID NestedPartySubID_158("STRING_610711344");
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubID_158);
        NstdPtysSubGrp_NoNestedPartySubIDs_158.insert(NestedPartySubID_158.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_158(1464675088);
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubIDType_158);
        NstdPtysSubGrp_NoNestedPartySubIDs_158.insert(NestedPartySubIDType_158.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_158);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      noLegs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  // OrderQtyData
  multiset<string> OrderQtyData_15;
  FIX::CashOrderQty CashOrderQty_15;
  CashOrderQty_15.setString("9694585");
  msg.set(CashOrderQty_15);
  OrderQtyData_15.insert(CashOrderQty_15.getString());
  FIX::OrderPercent OrderPercent_15;
  OrderPercent_15.setString("47.270000");
  msg.set(OrderPercent_15);
  OrderQtyData_15.insert(OrderPercent_15.getString());
  FIX::OrderQty OrderQty_24;
  OrderQty_24.setString("8728534");
  msg.set(OrderQty_24);
  OrderQtyData_15.insert(OrderQty_24.getString());
  FIX::RoundingDirection RoundingDirection_15('2');
  msg.set(RoundingDirection_15);
  OrderQtyData_15.insert(RoundingDirection_15.getString());
  FIX::RoundingModulus RoundingModulus_15;
  RoundingModulus_15.setString("2854267");
  msg.set(RoundingModulus_15);
  OrderQtyData_15.insert(RoundingModulus_15.getString());
  all_values.push_back(OrderQtyData_15);

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::NewOrderMultileg::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_77;
    FIX::PartyID PartyID_77("STRING_1060386010");
    noPartyIDs_0_0.set(PartyID_77);
    Parties_NoPartyIDs_77.insert(PartyID_77.getString());
    FIX::PartyIDSource PartyIDSource_77('8');
    noPartyIDs_0_0.set(PartyIDSource_77);
    Parties_NoPartyIDs_77.insert(PartyIDSource_77.getString());
    FIX::PartyRole PartyRole_77(7);
    noPartyIDs_0_0.set(PartyRole_77);
    Parties_NoPartyIDs_77.insert(PartyRole_77.getString());
    all_values.push_back(Parties_NoPartyIDs_77);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::NewOrderMultileg::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_151;
      FIX::PartySubID PartySubID_151("STRING_317660333");
      noPartySubIDs_0_1_0.set(PartySubID_151);
      PtysSubGrp_NoPartySubIDs_151.insert(PartySubID_151.getString());
      FIX::PartySubIDType PartySubIDType_151(12);
      noPartySubIDs_0_1_0.set(PartySubIDType_151);
      PtysSubGrp_NoPartySubIDs_151.insert(PartySubIDType_151.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_151);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_152;
      FIX::PartySubID PartySubID_152("STRING_1339240576");
      noPartySubIDs_0_1_1.set(PartySubID_152);
      PtysSubGrp_NoPartySubIDs_152.insert(PartySubID_152.getString());
      FIX::PartySubIDType PartySubIDType_152(30);
      noPartySubIDs_0_1_1.set(PartySubIDType_152);
      PtysSubGrp_NoPartySubIDs_152.insert(PartySubIDType_152.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_152);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  // PegInstructions
  multiset<string> PegInstructions_7;
  FIX::PegLimitType PegLimitType_7(2);
  msg.set(PegLimitType_7);
  PegInstructions_7.insert(PegLimitType_7.getString());
  FIX::PegMoveType PegMoveType_7(1);
  msg.set(PegMoveType_7);
  PegInstructions_7.insert(PegMoveType_7.getString());
  FIX::PegOffsetType PegOffsetType_7(2);
  msg.set(PegOffsetType_7);
  PegInstructions_7.insert(PegOffsetType_7.getString());
  FIX::PegOffsetValue PegOffsetValue_7;
  PegOffsetValue_7.setString("16581298");
  msg.set(PegOffsetValue_7);
  PegInstructions_7.insert(PegOffsetValue_7.getString());
  FIX::PegPriceType PegPriceType_7(7);
  msg.set(PegPriceType_7);
  PegInstructions_7.insert(PegPriceType_7.getString());
  FIX::PegRoundDirection PegRoundDirection_7(2);
  msg.set(PegRoundDirection_7);
  PegInstructions_7.insert(PegRoundDirection_7.getString());
  FIX::PegScope PegScope_7(1);
  msg.set(PegScope_7);
  PegInstructions_7.insert(PegScope_7.getString());
  FIX::PegSecurityDesc PegSecurityDesc_7("STRING_825754460");
  msg.set(PegSecurityDesc_7);
  PegInstructions_7.insert(PegSecurityDesc_7.getString());
  FIX::PegSecurityID PegSecurityID_7("STRING_2052736275");
  msg.set(PegSecurityID_7);
  PegInstructions_7.insert(PegSecurityID_7.getString());
  FIX::PegSecurityIDSource PegSecurityIDSource_7("STRING_676747253");
  msg.set(PegSecurityIDSource_7);
  PegInstructions_7.insert(PegSecurityIDSource_7.getString());
  FIX::PegSymbol PegSymbol_7("STRING_984941969");
  msg.set(PegSymbol_7);
  PegInstructions_7.insert(PegSymbol_7.getString());
  all_values.push_back(PegInstructions_7);

  // PreAllocMlegGrp
  // Group PreAllocMlegGrp.NoAllocs
  {
    FIX50SP2::NewOrderMultileg::NoAllocs noAllocs_0_0;
    // PreAllocMlegGrp.NoAllocs
    multiset<string> PreAllocMlegGrp_NoAllocs_2;
    FIX::AllocAccount AllocAccount_30("STRING_682318562");
    noAllocs_0_0.set(AllocAccount_30);
    PreAllocMlegGrp_NoAllocs_2.insert(AllocAccount_30.getString());
    FIX::AllocAcctIDSource AllocAcctIDSource_30(680535042);
    noAllocs_0_0.set(AllocAcctIDSource_30);
    PreAllocMlegGrp_NoAllocs_2.insert(AllocAcctIDSource_30.getString());
    FIX::AllocQty AllocQty_29;
    AllocQty_29.setString("19569316");
    noAllocs_0_0.set(AllocQty_29);
    PreAllocMlegGrp_NoAllocs_2.insert(AllocQty_29.getString());
    FIX::AllocSettlCurrency AllocSettlCurrency_25("CAN");
    noAllocs_0_0.set(AllocSettlCurrency_25);
    PreAllocMlegGrp_NoAllocs_2.insert(AllocSettlCurrency_25.getString());
    FIX::IndividualAllocID IndividualAllocID_30("STRING_778906466");
    noAllocs_0_0.set(IndividualAllocID_30);
    PreAllocMlegGrp_NoAllocs_2.insert(IndividualAllocID_30.getString());
    all_values.push_back(PreAllocMlegGrp_NoAllocs_2);

    // NestedParties3
    // Group NestedParties3.NoNested3PartyIDs
    {
      FIX50SP2::NewOrderMultileg::NoAllocs::NoNested3PartyIDs noNested3PartyIDs_0_1_0;
      // NestedParties3.NoNested3PartyIDs
      multiset<string> NestedParties3_NoNested3PartyIDs_11;
      FIX::Nested3PartyID Nested3PartyID_11("STRING_870579885");
      noNested3PartyIDs_0_1_0.set(Nested3PartyID_11);
      NestedParties3_NoNested3PartyIDs_11.insert(Nested3PartyID_11.getString());
      FIX::Nested3PartyIDSource Nested3PartyIDSource_11('1');
      noNested3PartyIDs_0_1_0.set(Nested3PartyIDSource_11);
      NestedParties3_NoNested3PartyIDs_11.insert(Nested3PartyIDSource_11.getString());
      FIX::Nested3PartyRole Nested3PartyRole_11(1321077751);
      noNested3PartyIDs_0_1_0.set(Nested3PartyRole_11);
      NestedParties3_NoNested3PartyIDs_11.insert(Nested3PartyRole_11.getString());
      all_values.push_back(NestedParties3_NoNested3PartyIDs_11);

      // NstdPtys3SubGrp
      // Group NstdPtys3SubGrp.NoNested3PartySubIDs
      {
        FIX50SP2::NewOrderMultileg::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_0_0_2_0;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_23;
        FIX::Nested3PartySubID Nested3PartySubID_23("STRING_1075149387");
        noNested3PartySubIDs_0_0_2_0.set(Nested3PartySubID_23);
        NstdPtys3SubGrp_NoNested3PartySubIDs_23.insert(Nested3PartySubID_23.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_23(1530636633);
        noNested3PartySubIDs_0_0_2_0.set(Nested3PartySubIDType_23);
        NstdPtys3SubGrp_NoNested3PartySubIDs_23.insert(Nested3PartySubIDType_23.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_23);

        noNested3PartyIDs_0_1_0.addGroup(noNested3PartySubIDs_0_0_2_0);
      }
      noAllocs_0_0.addGroup(noNested3PartyIDs_0_1_0);
    }
    msg.addGroup(noAllocs_0_0);
  }
  {
    FIX50SP2::NewOrderMultileg::NoAllocs noAllocs_0_1;
    // PreAllocMlegGrp.NoAllocs
    multiset<string> PreAllocMlegGrp_NoAllocs_3;
    FIX::AllocAccount AllocAccount_31("STRING_697920820");
    noAllocs_0_1.set(AllocAccount_31);
    PreAllocMlegGrp_NoAllocs_3.insert(AllocAccount_31.getString());
    FIX::AllocAcctIDSource AllocAcctIDSource_31(907169669);
    noAllocs_0_1.set(AllocAcctIDSource_31);
    PreAllocMlegGrp_NoAllocs_3.insert(AllocAcctIDSource_31.getString());
    FIX::AllocQty AllocQty_30;
    AllocQty_30.setString("18482969");
    noAllocs_0_1.set(AllocQty_30);
    PreAllocMlegGrp_NoAllocs_3.insert(AllocQty_30.getString());
    FIX::AllocSettlCurrency AllocSettlCurrency_26("GBP");
    noAllocs_0_1.set(AllocSettlCurrency_26);
    PreAllocMlegGrp_NoAllocs_3.insert(AllocSettlCurrency_26.getString());
    FIX::IndividualAllocID IndividualAllocID_31("STRING_485556944");
    noAllocs_0_1.set(IndividualAllocID_31);
    PreAllocMlegGrp_NoAllocs_3.insert(IndividualAllocID_31.getString());
    all_values.push_back(PreAllocMlegGrp_NoAllocs_3);

    // NestedParties3
    // Group NestedParties3.NoNested3PartyIDs
    {
      FIX50SP2::NewOrderMultileg::NoAllocs::NoNested3PartyIDs noNested3PartyIDs_1_1_0;
      // NestedParties3.NoNested3PartyIDs
      multiset<string> NestedParties3_NoNested3PartyIDs_12;
      FIX::Nested3PartyID Nested3PartyID_12("STRING_1771773873");
      noNested3PartyIDs_1_1_0.set(Nested3PartyID_12);
      NestedParties3_NoNested3PartyIDs_12.insert(Nested3PartyID_12.getString());
      FIX::Nested3PartyIDSource Nested3PartyIDSource_12('1');
      noNested3PartyIDs_1_1_0.set(Nested3PartyIDSource_12);
      NestedParties3_NoNested3PartyIDs_12.insert(Nested3PartyIDSource_12.getString());
      FIX::Nested3PartyRole Nested3PartyRole_12(1195802024);
      noNested3PartyIDs_1_1_0.set(Nested3PartyRole_12);
      NestedParties3_NoNested3PartyIDs_12.insert(Nested3PartyRole_12.getString());
      all_values.push_back(NestedParties3_NoNested3PartyIDs_12);

      // NstdPtys3SubGrp
      // Group NstdPtys3SubGrp.NoNested3PartySubIDs
      {
        FIX50SP2::NewOrderMultileg::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_1_0_2_0;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_24;
        FIX::Nested3PartySubID Nested3PartySubID_24("STRING_1597621476");
        noNested3PartySubIDs_1_0_2_0.set(Nested3PartySubID_24);
        NstdPtys3SubGrp_NoNested3PartySubIDs_24.insert(Nested3PartySubID_24.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_24(324197548);
        noNested3PartySubIDs_1_0_2_0.set(Nested3PartySubIDType_24);
        NstdPtys3SubGrp_NoNested3PartySubIDs_24.insert(Nested3PartySubIDType_24.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_24);

        noNested3PartyIDs_1_1_0.addGroup(noNested3PartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::NewOrderMultileg::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_1_0_2_1;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_25;
        FIX::Nested3PartySubID Nested3PartySubID_25("STRING_759130354");
        noNested3PartySubIDs_1_0_2_1.set(Nested3PartySubID_25);
        NstdPtys3SubGrp_NoNested3PartySubIDs_25.insert(Nested3PartySubID_25.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_25(1502874103);
        noNested3PartySubIDs_1_0_2_1.set(Nested3PartySubIDType_25);
        NstdPtys3SubGrp_NoNested3PartySubIDs_25.insert(Nested3PartySubIDType_25.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_25);

        noNested3PartyIDs_1_1_0.addGroup(noNested3PartySubIDs_1_0_2_1);
      }
      noAllocs_0_1.addGroup(noNested3PartyIDs_1_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoAllocs::NoNested3PartyIDs noNested3PartyIDs_1_1_1;
      // NestedParties3.NoNested3PartyIDs
      multiset<string> NestedParties3_NoNested3PartyIDs_13;
      FIX::Nested3PartyID Nested3PartyID_13("STRING_1000944802");
      noNested3PartyIDs_1_1_1.set(Nested3PartyID_13);
      NestedParties3_NoNested3PartyIDs_13.insert(Nested3PartyID_13.getString());
      FIX::Nested3PartyIDSource Nested3PartyIDSource_13('1');
      noNested3PartyIDs_1_1_1.set(Nested3PartyIDSource_13);
      NestedParties3_NoNested3PartyIDs_13.insert(Nested3PartyIDSource_13.getString());
      FIX::Nested3PartyRole Nested3PartyRole_13(748739942);
      noNested3PartyIDs_1_1_1.set(Nested3PartyRole_13);
      NestedParties3_NoNested3PartyIDs_13.insert(Nested3PartyRole_13.getString());
      all_values.push_back(NestedParties3_NoNested3PartyIDs_13);

      // NstdPtys3SubGrp
      // Group NstdPtys3SubGrp.NoNested3PartySubIDs
      {
        FIX50SP2::NewOrderMultileg::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_1_1_2_0;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_26;
        FIX::Nested3PartySubID Nested3PartySubID_26("STRING_277123718");
        noNested3PartySubIDs_1_1_2_0.set(Nested3PartySubID_26);
        NstdPtys3SubGrp_NoNested3PartySubIDs_26.insert(Nested3PartySubID_26.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_26(558187899);
        noNested3PartySubIDs_1_1_2_0.set(Nested3PartySubIDType_26);
        NstdPtys3SubGrp_NoNested3PartySubIDs_26.insert(Nested3PartySubIDType_26.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_26);

        noNested3PartyIDs_1_1_1.addGroup(noNested3PartySubIDs_1_1_2_0);
      }
      noAllocs_0_1.addGroup(noNested3PartyIDs_1_1_1);
    }
    {
      FIX50SP2::NewOrderMultileg::NoAllocs::NoNested3PartyIDs noNested3PartyIDs_1_1_2;
      // NestedParties3.NoNested3PartyIDs
      multiset<string> NestedParties3_NoNested3PartyIDs_14;
      FIX::Nested3PartyID Nested3PartyID_14("STRING_828809622");
      noNested3PartyIDs_1_1_2.set(Nested3PartyID_14);
      NestedParties3_NoNested3PartyIDs_14.insert(Nested3PartyID_14.getString());
      FIX::Nested3PartyIDSource Nested3PartyIDSource_14('2');
      noNested3PartyIDs_1_1_2.set(Nested3PartyIDSource_14);
      NestedParties3_NoNested3PartyIDs_14.insert(Nested3PartyIDSource_14.getString());
      FIX::Nested3PartyRole Nested3PartyRole_14(1337094365);
      noNested3PartyIDs_1_1_2.set(Nested3PartyRole_14);
      NestedParties3_NoNested3PartyIDs_14.insert(Nested3PartyRole_14.getString());
      all_values.push_back(NestedParties3_NoNested3PartyIDs_14);

      // NstdPtys3SubGrp
      // Group NstdPtys3SubGrp.NoNested3PartySubIDs
      {
        FIX50SP2::NewOrderMultileg::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_1_2_2_0;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_27;
        FIX::Nested3PartySubID Nested3PartySubID_27("STRING_1145430086");
        noNested3PartySubIDs_1_2_2_0.set(Nested3PartySubID_27);
        NstdPtys3SubGrp_NoNested3PartySubIDs_27.insert(Nested3PartySubID_27.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_27(1351857742);
        noNested3PartySubIDs_1_2_2_0.set(Nested3PartySubIDType_27);
        NstdPtys3SubGrp_NoNested3PartySubIDs_27.insert(Nested3PartySubIDType_27.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_27);

        noNested3PartyIDs_1_1_2.addGroup(noNested3PartySubIDs_1_2_2_0);
      }
      noAllocs_0_1.addGroup(noNested3PartyIDs_1_1_2);
    }
    msg.addGroup(noAllocs_0_1);
  }
  {
    FIX50SP2::NewOrderMultileg::NoAllocs noAllocs_0_2;
    // PreAllocMlegGrp.NoAllocs
    multiset<string> PreAllocMlegGrp_NoAllocs_4;
    FIX::AllocAccount AllocAccount_32("STRING_1038054710");
    noAllocs_0_2.set(AllocAccount_32);
    PreAllocMlegGrp_NoAllocs_4.insert(AllocAccount_32.getString());
    FIX::AllocAcctIDSource AllocAcctIDSource_32(538406196);
    noAllocs_0_2.set(AllocAcctIDSource_32);
    PreAllocMlegGrp_NoAllocs_4.insert(AllocAcctIDSource_32.getString());
    FIX::AllocQty AllocQty_31;
    AllocQty_31.setString("2795234");
    noAllocs_0_2.set(AllocQty_31);
    PreAllocMlegGrp_NoAllocs_4.insert(AllocQty_31.getString());
    FIX::AllocSettlCurrency AllocSettlCurrency_27("JPY");
    noAllocs_0_2.set(AllocSettlCurrency_27);
    PreAllocMlegGrp_NoAllocs_4.insert(AllocSettlCurrency_27.getString());
    FIX::IndividualAllocID IndividualAllocID_32("STRING_1186693151");
    noAllocs_0_2.set(IndividualAllocID_32);
    PreAllocMlegGrp_NoAllocs_4.insert(IndividualAllocID_32.getString());
    all_values.push_back(PreAllocMlegGrp_NoAllocs_4);

    // NestedParties3
    // Group NestedParties3.NoNested3PartyIDs
    {
      FIX50SP2::NewOrderMultileg::NoAllocs::NoNested3PartyIDs noNested3PartyIDs_2_1_0;
      // NestedParties3.NoNested3PartyIDs
      multiset<string> NestedParties3_NoNested3PartyIDs_15;
      FIX::Nested3PartyID Nested3PartyID_15("STRING_2032306225");
      noNested3PartyIDs_2_1_0.set(Nested3PartyID_15);
      NestedParties3_NoNested3PartyIDs_15.insert(Nested3PartyID_15.getString());
      FIX::Nested3PartyIDSource Nested3PartyIDSource_15('1');
      noNested3PartyIDs_2_1_0.set(Nested3PartyIDSource_15);
      NestedParties3_NoNested3PartyIDs_15.insert(Nested3PartyIDSource_15.getString());
      FIX::Nested3PartyRole Nested3PartyRole_15(607577958);
      noNested3PartyIDs_2_1_0.set(Nested3PartyRole_15);
      NestedParties3_NoNested3PartyIDs_15.insert(Nested3PartyRole_15.getString());
      all_values.push_back(NestedParties3_NoNested3PartyIDs_15);

      // NstdPtys3SubGrp
      // Group NstdPtys3SubGrp.NoNested3PartySubIDs
      {
        FIX50SP2::NewOrderMultileg::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_2_0_2_0;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_28;
        FIX::Nested3PartySubID Nested3PartySubID_28("STRING_909909974");
        noNested3PartySubIDs_2_0_2_0.set(Nested3PartySubID_28);
        NstdPtys3SubGrp_NoNested3PartySubIDs_28.insert(Nested3PartySubID_28.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_28(369037257);
        noNested3PartySubIDs_2_0_2_0.set(Nested3PartySubIDType_28);
        NstdPtys3SubGrp_NoNested3PartySubIDs_28.insert(Nested3PartySubIDType_28.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_28);

        noNested3PartyIDs_2_1_0.addGroup(noNested3PartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::NewOrderMultileg::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_2_0_2_1;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_29;
        FIX::Nested3PartySubID Nested3PartySubID_29("STRING_618296797");
        noNested3PartySubIDs_2_0_2_1.set(Nested3PartySubID_29);
        NstdPtys3SubGrp_NoNested3PartySubIDs_29.insert(Nested3PartySubID_29.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_29(843285868);
        noNested3PartySubIDs_2_0_2_1.set(Nested3PartySubIDType_29);
        NstdPtys3SubGrp_NoNested3PartySubIDs_29.insert(Nested3PartySubIDType_29.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_29);

        noNested3PartyIDs_2_1_0.addGroup(noNested3PartySubIDs_2_0_2_1);
      }
      noAllocs_0_2.addGroup(noNested3PartyIDs_2_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoAllocs::NoNested3PartyIDs noNested3PartyIDs_2_1_1;
      // NestedParties3.NoNested3PartyIDs
      multiset<string> NestedParties3_NoNested3PartyIDs_16;
      FIX::Nested3PartyID Nested3PartyID_16("STRING_1966658734");
      noNested3PartyIDs_2_1_1.set(Nested3PartyID_16);
      NestedParties3_NoNested3PartyIDs_16.insert(Nested3PartyID_16.getString());
      FIX::Nested3PartyIDSource Nested3PartyIDSource_16('9');
      noNested3PartyIDs_2_1_1.set(Nested3PartyIDSource_16);
      NestedParties3_NoNested3PartyIDs_16.insert(Nested3PartyIDSource_16.getString());
      FIX::Nested3PartyRole Nested3PartyRole_16(1602416223);
      noNested3PartyIDs_2_1_1.set(Nested3PartyRole_16);
      NestedParties3_NoNested3PartyIDs_16.insert(Nested3PartyRole_16.getString());
      all_values.push_back(NestedParties3_NoNested3PartyIDs_16);

      // NstdPtys3SubGrp
      // Group NstdPtys3SubGrp.NoNested3PartySubIDs
      {
        FIX50SP2::NewOrderMultileg::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_2_1_2_0;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_30;
        FIX::Nested3PartySubID Nested3PartySubID_30("STRING_1943439148");
        noNested3PartySubIDs_2_1_2_0.set(Nested3PartySubID_30);
        NstdPtys3SubGrp_NoNested3PartySubIDs_30.insert(Nested3PartySubID_30.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_30(1199004898);
        noNested3PartySubIDs_2_1_2_0.set(Nested3PartySubIDType_30);
        NstdPtys3SubGrp_NoNested3PartySubIDs_30.insert(Nested3PartySubIDType_30.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_30);

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
    multiset<string> StrategyParametersGrp_NoStrategyParameters_17;
    FIX::StrategyParameterName StrategyParameterName_17("STRING_1479218864");
    noStrategyParameters_0_0.set(StrategyParameterName_17);
    StrategyParametersGrp_NoStrategyParameters_17.insert(StrategyParameterName_17.getString());
    FIX::StrategyParameterType StrategyParameterType_17(23);
    noStrategyParameters_0_0.set(StrategyParameterType_17);
    StrategyParametersGrp_NoStrategyParameters_17.insert(StrategyParameterType_17.getString());
    FIX::StrategyParameterValue StrategyParameterValue_17("STRING_481493382");
    noStrategyParameters_0_0.set(StrategyParameterValue_17);
    StrategyParametersGrp_NoStrategyParameters_17.insert(StrategyParameterValue_17.getString());
    all_values.push_back(StrategyParametersGrp_NoStrategyParameters_17);

    msg.addGroup(noStrategyParameters_0_0);
  }
  {
    FIX50SP2::NewOrderMultileg::NoStrategyParameters noStrategyParameters_0_1;
    // StrategyParametersGrp.NoStrategyParameters
    multiset<string> StrategyParametersGrp_NoStrategyParameters_18;
    FIX::StrategyParameterName StrategyParameterName_18("STRING_160544838");
    noStrategyParameters_0_1.set(StrategyParameterName_18);
    StrategyParametersGrp_NoStrategyParameters_18.insert(StrategyParameterName_18.getString());
    FIX::StrategyParameterType StrategyParameterType_18(27);
    noStrategyParameters_0_1.set(StrategyParameterType_18);
    StrategyParametersGrp_NoStrategyParameters_18.insert(StrategyParameterType_18.getString());
    FIX::StrategyParameterValue StrategyParameterValue_18("STRING_1818587747");
    noStrategyParameters_0_1.set(StrategyParameterValue_18);
    StrategyParametersGrp_NoStrategyParameters_18.insert(StrategyParameterValue_18.getString());
    all_values.push_back(StrategyParametersGrp_NoStrategyParameters_18);

    msg.addGroup(noStrategyParameters_0_1);
  }
  {
    FIX50SP2::NewOrderMultileg::NoStrategyParameters noStrategyParameters_0_2;
    // StrategyParametersGrp.NoStrategyParameters
    multiset<string> StrategyParametersGrp_NoStrategyParameters_19;
    FIX::StrategyParameterName StrategyParameterName_19("STRING_2025005445");
    noStrategyParameters_0_2.set(StrategyParameterName_19);
    StrategyParametersGrp_NoStrategyParameters_19.insert(StrategyParameterName_19.getString());
    FIX::StrategyParameterType StrategyParameterType_19(24);
    noStrategyParameters_0_2.set(StrategyParameterType_19);
    StrategyParametersGrp_NoStrategyParameters_19.insert(StrategyParameterType_19.getString());
    FIX::StrategyParameterValue StrategyParameterValue_19("STRING_1022961841");
    noStrategyParameters_0_2.set(StrategyParameterValue_19);
    StrategyParametersGrp_NoStrategyParameters_19.insert(StrategyParameterValue_19.getString());
    all_values.push_back(StrategyParametersGrp_NoStrategyParameters_19);

    msg.addGroup(noStrategyParameters_0_2);
  }
  // TrdgSesGrp
  // Group TrdgSesGrp.NoTradingSessions
  {
    FIX50SP2::NewOrderMultileg::NoTradingSessions noTradingSessions_0_0;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_14;
    FIX::TradingSessionID TradingSessionID_45("STRING_6");
    noTradingSessions_0_0.set(TradingSessionID_45);
    TrdgSesGrp_NoTradingSessions_14.insert(TradingSessionID_45.getString());
    FIX::TradingSessionSubID TradingSessionSubID_45("STRING_7");
    noTradingSessions_0_0.set(TradingSessionSubID_45);
    TrdgSesGrp_NoTradingSessions_14.insert(TradingSessionSubID_45.getString());
    all_values.push_back(TrdgSesGrp_NoTradingSessions_14);

    msg.addGroup(noTradingSessions_0_0);
  }
  {
    FIX50SP2::NewOrderMultileg::NoTradingSessions noTradingSessions_0_1;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_15;
    FIX::TradingSessionID TradingSessionID_46("STRING_2");
    noTradingSessions_0_1.set(TradingSessionID_46);
    TrdgSesGrp_NoTradingSessions_15.insert(TradingSessionID_46.getString());
    FIX::TradingSessionSubID TradingSessionSubID_46("STRING_7");
    noTradingSessions_0_1.set(TradingSessionSubID_46);
    TrdgSesGrp_NoTradingSessions_15.insert(TradingSessionSubID_46.getString());
    all_values.push_back(TrdgSesGrp_NoTradingSessions_15);

    msg.addGroup(noTradingSessions_0_1);
  }
  // TriggeringInstruction
  multiset<string> TriggeringInstruction_7;
  FIX::TriggerAction TriggerAction_7('2');
  msg.set(TriggerAction_7);
  TriggeringInstruction_7.insert(TriggerAction_7.getString());
  FIX::TriggerNewPrice TriggerNewPrice_7;
  TriggerNewPrice_7.setString("14588052");
  msg.set(TriggerNewPrice_7);
  TriggeringInstruction_7.insert(TriggerNewPrice_7.getString());
  FIX::TriggerNewQty TriggerNewQty_7;
  TriggerNewQty_7.setString("2609973");
  msg.set(TriggerNewQty_7);
  TriggeringInstruction_7.insert(TriggerNewQty_7.getString());
  FIX::TriggerOrderType TriggerOrderType_7('2');
  msg.set(TriggerOrderType_7);
  TriggeringInstruction_7.insert(TriggerOrderType_7.getString());
  FIX::TriggerPrice TriggerPrice_7;
  TriggerPrice_7.setString("20663831");
  msg.set(TriggerPrice_7);
  TriggeringInstruction_7.insert(TriggerPrice_7.getString());
  FIX::TriggerPriceDirection TriggerPriceDirection_7('U');
  msg.set(TriggerPriceDirection_7);
  TriggeringInstruction_7.insert(TriggerPriceDirection_7.getString());
  FIX::TriggerPriceType TriggerPriceType_7('6');
  msg.set(TriggerPriceType_7);
  TriggeringInstruction_7.insert(TriggerPriceType_7.getString());
  FIX::TriggerPriceTypeScope TriggerPriceTypeScope_7('1');
  msg.set(TriggerPriceTypeScope_7);
  TriggeringInstruction_7.insert(TriggerPriceTypeScope_7.getString());
  FIX::TriggerSecurityDesc TriggerSecurityDesc_7("STRING_301788967");
  msg.set(TriggerSecurityDesc_7);
  TriggeringInstruction_7.insert(TriggerSecurityDesc_7.getString());
  FIX::TriggerSecurityID TriggerSecurityID_7("STRING_1233026769");
  msg.set(TriggerSecurityID_7);
  TriggeringInstruction_7.insert(TriggerSecurityID_7.getString());
  FIX::TriggerSecurityIDSource TriggerSecurityIDSource_7("STRING_107111871");
  msg.set(TriggerSecurityIDSource_7);
  TriggeringInstruction_7.insert(TriggerSecurityIDSource_7.getString());
  FIX::TriggerSymbol TriggerSymbol_7("STRING_1244283313");
  msg.set(TriggerSymbol_7);
  TriggeringInstruction_7.insert(TriggerSymbol_7.getString());
  FIX::TriggerTradingSessionID TriggerTradingSessionID_7("STRING_687959344");
  msg.set(TriggerTradingSessionID_7);
  TriggeringInstruction_7.insert(TriggerTradingSessionID_7.getString());
  FIX::TriggerTradingSessionSubID TriggerTradingSessionSubID_7("STRING_1429161061");
  msg.set(TriggerTradingSessionSubID_7);
  TriggeringInstruction_7.insert(TriggerTradingSessionSubID_7.getString());
  FIX::TriggerType TriggerType_7('2');
  msg.set(TriggerType_7);
  TriggeringInstruction_7.insert(TriggerType_7.getString());
  all_values.push_back(TriggeringInstruction_7);

  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::NewOrderMultileg::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_65;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_65("DATA_1352466544");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_65);
    UnderlyingInstrument_65.insert(EncodedUnderlyingIssuer_65.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_65(371974029);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_65);
    UnderlyingInstrument_65.insert(EncodedUnderlyingIssuerLen_65.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_65("DATA_1215609211");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_65);
    UnderlyingInstrument_65.insert(EncodedUnderlyingSecurityDesc_65.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_65(1833959927);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_65);
    UnderlyingInstrument_65.insert(EncodedUnderlyingSecurityDescLen_65.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_65;
    UnderlyingAdjustedQuantity_65.setString("5325188");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_65);
    UnderlyingInstrument_65.insert(UnderlyingAdjustedQuantity_65.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_65;
    UnderlyingAllocationPercent_65.setString("43.810000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_65);
    UnderlyingInstrument_65.insert(UnderlyingAllocationPercent_65.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_65;
    UnderlyingAttachmentPoint_65.setString("40.260000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_65);
    UnderlyingInstrument_65.insert(UnderlyingAttachmentPoint_65.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_65("STRING_410040665");
    noUnderlyings_0_0.set(UnderlyingCFICode_65);
    UnderlyingInstrument_65.insert(UnderlyingCFICode_65.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_65("STRING_1568029636");
    noUnderlyings_0_0.set(UnderlyingCPProgram_65);
    UnderlyingInstrument_65.insert(UnderlyingCPProgram_65.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_65("STRING_380542220");
    noUnderlyings_0_0.set(UnderlyingCPRegType_65);
    UnderlyingInstrument_65.insert(UnderlyingCPRegType_65.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_65;
    UnderlyingCapValue_65.setString("13256171");
    noUnderlyings_0_0.set(UnderlyingCapValue_65);
    UnderlyingInstrument_65.insert(UnderlyingCapValue_65.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_65;
    UnderlyingCashAmount_65.setString("7078774");
    noUnderlyings_0_0.set(UnderlyingCashAmount_65);
    UnderlyingInstrument_65.insert(UnderlyingCashAmount_65.getString());
    FIX::UnderlyingCashType UnderlyingCashType_65("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_65);
    UnderlyingInstrument_65.insert(UnderlyingCashType_65.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_65;
    UnderlyingContractMultiplier_65.setString("5149177");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_65);
    UnderlyingInstrument_65.insert(UnderlyingContractMultiplier_65.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_65(1084052259);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_65);
    UnderlyingInstrument_65.insert(UnderlyingContractMultiplierUnit_65.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_65("COUNTRY_2024722369");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_65);
    UnderlyingInstrument_65.insert(UnderlyingCountryOfIssue_65.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_65("LOCALMKTDATE_1973722946");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_65);
    UnderlyingInstrument_65.insert(UnderlyingCouponPaymentDate_65.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_65;
    UnderlyingCouponRate_65.setString("96.560000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_65);
    UnderlyingInstrument_65.insert(UnderlyingCouponRate_65.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_65("STRING_1504553296");
    noUnderlyings_0_0.set(UnderlyingCreditRating_65);
    UnderlyingInstrument_65.insert(UnderlyingCreditRating_65.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_65("JPY");
    noUnderlyings_0_0.set(UnderlyingCurrency_65);
    UnderlyingInstrument_65.insert(UnderlyingCurrency_65.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_65;
    UnderlyingCurrentValue_65.setString("18942941");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_65);
    UnderlyingInstrument_65.insert(UnderlyingCurrentValue_65.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_65;
    UnderlyingDetachmentPoint_65.setString("56.110000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_65);
    UnderlyingInstrument_65.insert(UnderlyingDetachmentPoint_65.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_65;
    UnderlyingDirtyPrice_65.setString("13303307");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_65);
    UnderlyingInstrument_65.insert(UnderlyingDirtyPrice_65.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_65;
    UnderlyingEndPrice_65.setString("9798373");
    noUnderlyings_0_0.set(UnderlyingEndPrice_65);
    UnderlyingInstrument_65.insert(UnderlyingEndPrice_65.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_65;
    UnderlyingEndValue_65.setString("1401874");
    noUnderlyings_0_0.set(UnderlyingEndValue_65);
    UnderlyingInstrument_65.insert(UnderlyingEndValue_65.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_65(427130459);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_65);
    UnderlyingInstrument_65.insert(UnderlyingExerciseStyle_65.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_65;
    UnderlyingFXRate_65.setString("16677966");
    noUnderlyings_0_0.set(UnderlyingFXRate_65);
    UnderlyingInstrument_65.insert(UnderlyingFXRate_65.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_65('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_65);
    UnderlyingInstrument_65.insert(UnderlyingFXRateCalc_65.getString());
    FIX::UnderlyingFactor UnderlyingFactor_65;
    UnderlyingFactor_65.setString("14673692");
    noUnderlyings_0_0.set(UnderlyingFactor_65);
    UnderlyingInstrument_65.insert(UnderlyingFactor_65.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_65(1407277258);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_65);
    UnderlyingInstrument_65.insert(UnderlyingFlowScheduleType_65.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_65("STRING_774331440");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_65);
    UnderlyingInstrument_65.insert(UnderlyingInstrRegistry_65.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_65("LOCALMKTDATE_1839343302");
    noUnderlyings_0_0.set(UnderlyingIssueDate_65);
    UnderlyingInstrument_65.insert(UnderlyingIssueDate_65.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_65("STRING_475402821");
    noUnderlyings_0_0.set(UnderlyingIssuer_65);
    UnderlyingInstrument_65.insert(UnderlyingIssuer_65.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_65("STRING_460807719");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_65);
    UnderlyingInstrument_65.insert(UnderlyingLocaleOfIssue_65.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_65("LOCALMKTDATE_224378521");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_65);
    UnderlyingInstrument_65.insert(UnderlyingMaturityDate_65.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_65("MONTHYEAR_1294507202");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_65);
    UnderlyingInstrument_65.insert(UnderlyingMaturityMonthYear_65.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_65("TZTIMEONLY_1965871746");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_65);
    UnderlyingInstrument_65.insert(UnderlyingMaturityTime_65.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_65;
    UnderlyingNotionalPercentageOutstanding_65.setString("91.860000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_65);
    UnderlyingInstrument_65.insert(UnderlyingNotionalPercentageOutstanding_65.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_65('7');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_65);
    UnderlyingInstrument_65.insert(UnderlyingOptAttribute_65.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_65;
    UnderlyingOriginalNotionalPercentageOutstanding_65.setString("3.180000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_65);
    UnderlyingInstrument_65.insert(UnderlyingOriginalNotionalPercentageOutstanding_65.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_65("STRING_1960036359");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_65);
    UnderlyingInstrument_65.insert(UnderlyingPriceUnitOfMeasure_65.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_65;
    UnderlyingPriceUnitOfMeasureQty_65.setString("14229306");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_65);
    UnderlyingInstrument_65.insert(UnderlyingPriceUnitOfMeasureQty_65.getString());
    FIX::UnderlyingProduct UnderlyingProduct_65(1881957861);
    noUnderlyings_0_0.set(UnderlyingProduct_65);
    UnderlyingInstrument_65.insert(UnderlyingProduct_65.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_65(327470440);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_65);
    UnderlyingInstrument_65.insert(UnderlyingPutOrCall_65.getString());
    FIX::UnderlyingPx UnderlyingPx_65;
    UnderlyingPx_65.setString("3594992");
    noUnderlyings_0_0.set(UnderlyingPx_65);
    UnderlyingInstrument_65.insert(UnderlyingPx_65.getString());
    FIX::UnderlyingQty UnderlyingQty_65;
    UnderlyingQty_65.setString("17591965");
    noUnderlyings_0_0.set(UnderlyingQty_65);
    UnderlyingInstrument_65.insert(UnderlyingQty_65.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_65("LOCALMKTDATE_153709738");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_65);
    UnderlyingInstrument_65.insert(UnderlyingRedemptionDate_65.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_65("STRING_1704548898");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_65);
    UnderlyingInstrument_65.insert(UnderlyingRepoCollateralSecurityType_65.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_65;
    UnderlyingRepurchaseRate_65.setString("62.300000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_65);
    UnderlyingInstrument_65.insert(UnderlyingRepurchaseRate_65.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_65(2046332212);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_65);
    UnderlyingInstrument_65.insert(UnderlyingRepurchaseTerm_65.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_65("STRING_585607076");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_65);
    UnderlyingInstrument_65.insert(UnderlyingRestructuringType_65.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_65("STRING_863076779");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_65);
    UnderlyingInstrument_65.insert(UnderlyingSecurityDesc_65.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_65("EXCHANGE_2079407823");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_65);
    UnderlyingInstrument_65.insert(UnderlyingSecurityExchange_65.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_65("STRING_1915937870");
    noUnderlyings_0_0.set(UnderlyingSecurityID_65);
    UnderlyingInstrument_65.insert(UnderlyingSecurityID_65.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_65("STRING_1842914097");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_65);
    UnderlyingInstrument_65.insert(UnderlyingSecurityIDSource_65.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_65("STRING_72111658");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_65);
    UnderlyingInstrument_65.insert(UnderlyingSecuritySubType_65.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_65("STRING_195584681");
    noUnderlyings_0_0.set(UnderlyingSecurityType_65);
    UnderlyingInstrument_65.insert(UnderlyingSecurityType_65.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_65("STRING_1363227112");
    noUnderlyings_0_0.set(UnderlyingSeniority_65);
    UnderlyingInstrument_65.insert(UnderlyingSeniority_65.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_65("STRING_1641460202");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_65);
    UnderlyingInstrument_65.insert(UnderlyingSettlMethod_65.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_65(4);
    noUnderlyings_0_0.set(UnderlyingSettlementType_65);
    UnderlyingInstrument_65.insert(UnderlyingSettlementType_65.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_65;
    UnderlyingStartValue_65.setString("6230207");
    noUnderlyings_0_0.set(UnderlyingStartValue_65);
    UnderlyingInstrument_65.insert(UnderlyingStartValue_65.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_65("STRING_268307995");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_65);
    UnderlyingInstrument_65.insert(UnderlyingStateOrProvinceOfIssue_65.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_65("JPY");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_65);
    UnderlyingInstrument_65.insert(UnderlyingStrikeCurrency_65.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_65;
    UnderlyingStrikePrice_65.setString("7291157");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_65);
    UnderlyingInstrument_65.insert(UnderlyingStrikePrice_65.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_65("STRING_1579192129");
    noUnderlyings_0_0.set(UnderlyingSymbol_65);
    UnderlyingInstrument_65.insert(UnderlyingSymbol_65.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_65("STRING_245447098");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_65);
    UnderlyingInstrument_65.insert(UnderlyingSymbolSfx_65.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_65("STRING_547503812");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_65);
    UnderlyingInstrument_65.insert(UnderlyingTimeUnit_65.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_65("STRING_66127667");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_65);
    UnderlyingInstrument_65.insert(UnderlyingUnitOfMeasure_65.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_65;
    UnderlyingUnitOfMeasureQty_65.setString("9605002");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_65);
    UnderlyingInstrument_65.insert(UnderlyingUnitOfMeasureQty_65.getString());
    all_values.push_back(UnderlyingInstrument_65);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_126;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_126("STRING_2026164027");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_126);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_126.insert(UnderlyingSecurityAltID_126.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_126("STRING_235947272");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_126);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_126.insert(UnderlyingSecurityAltIDSource_126.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_126);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_127;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_127("STRING_480908343");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_127);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_127.insert(UnderlyingSecurityAltID_127.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_127("STRING_206150819");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_127);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_127.insert(UnderlyingSecurityAltIDSource_127.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_127);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_128;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_128("STRING_595446515");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltID_128);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_128.insert(UnderlyingSecurityAltID_128.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_128("STRING_92621277");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltIDSource_128);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_128.insert(UnderlyingSecurityAltIDSource_128.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_128);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_125;
      FIX::UnderlyingStipType UnderlyingStipType_125("STRING_152511765");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_125);
      UnderlyingStipulations_NoUnderlyingStips_125.insert(UnderlyingStipType_125.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_125("STRING_1208887507");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_125);
      UnderlyingStipulations_NoUnderlyingStips_125.insert(UnderlyingStipValue_125.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_125);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_132;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_132("STRING_738118842");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_132);
      UndlyInstrumentParties_NoUndlyInstrumentParties_132.insert(UnderlyingInstrumentPartyID_132.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_132('2');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_132);
      UndlyInstrumentParties_NoUndlyInstrumentParties_132.insert(UnderlyingInstrumentPartyIDSource_132.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_132(190633296);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_132);
      UndlyInstrumentParties_NoUndlyInstrumentParties_132.insert(UnderlyingInstrumentPartyRole_132.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_132);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_255;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_255("STRING_1767394736");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_255);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_255.insert(UnderlyingInstrumentPartySubID_255.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_255(262744955);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_255);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_255.insert(UnderlyingInstrumentPartySubIDType_255.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_255);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_133;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_133("STRING_702157745");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_133);
      UndlyInstrumentParties_NoUndlyInstrumentParties_133.insert(UnderlyingInstrumentPartyID_133.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_133('9');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_133);
      UndlyInstrumentParties_NoUndlyInstrumentParties_133.insert(UnderlyingInstrumentPartyIDSource_133.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_133(1904205157);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_133);
      UndlyInstrumentParties_NoUndlyInstrumentParties_133.insert(UnderlyingInstrumentPartyRole_133.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_133);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_256;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_256("STRING_1606158923");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_256);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_256.insert(UnderlyingInstrumentPartySubID_256.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_256(25029504);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_256);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_256.insert(UnderlyingInstrumentPartySubIDType_256.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_256);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_257;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_257("STRING_1572441658");
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubID_257);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_257.insert(UnderlyingInstrumentPartySubID_257.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_257(557098819);
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubIDType_257);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_257.insert(UnderlyingInstrumentPartySubIDType_257.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_257);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_134;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_134("STRING_754145219");
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyID_134);
      UndlyInstrumentParties_NoUndlyInstrumentParties_134.insert(UnderlyingInstrumentPartyID_134.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_134('1');
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyIDSource_134);
      UndlyInstrumentParties_NoUndlyInstrumentParties_134.insert(UnderlyingInstrumentPartyIDSource_134.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_134(802545917);
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyRole_134);
      UndlyInstrumentParties_NoUndlyInstrumentParties_134.insert(UnderlyingInstrumentPartyRole_134.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_134);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_258;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_258("STRING_1070277806");
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubID_258);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_258.insert(UnderlyingInstrumentPartySubID_258.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_258(1763046207);
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubIDType_258);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_258.insert(UnderlyingInstrumentPartySubIDType_258.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_258);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_259;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_259("STRING_2048083162");
        noUndlyInstrumentPartySubIDs_0_2_2_1.set(UnderlyingInstrumentPartySubID_259);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_259.insert(UnderlyingInstrumentPartySubID_259.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_259(948958185);
        noUndlyInstrumentPartySubIDs_0_2_2_1.set(UnderlyingInstrumentPartySubIDType_259);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_259.insert(UnderlyingInstrumentPartySubIDType_259.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_259);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
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
