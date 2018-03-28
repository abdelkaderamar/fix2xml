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
  multiset<string> NewOrderMultileg_0;
  FIX::Account Account_17("STRING_1281256403");
  msg.set(Account_17);
  NewOrderMultileg_0.insert(Account_17.getString());
  FIX::AccountType AccountType_16(6);
  msg.set(AccountType_16);
  NewOrderMultileg_0.insert(AccountType_16.getString());
  FIX::AcctIDSource AcctIDSource_10(2);
  msg.set(AcctIDSource_10);
  NewOrderMultileg_0.insert(AcctIDSource_10.getString());
  FIX::AllocID AllocID_14("STRING_216118714");
  msg.set(AllocID_14);
  NewOrderMultileg_0.insert(AllocID_14.getString());
  FIX::BookingType BookingType_21(2);
  msg.set(BookingType_21);
  NewOrderMultileg_0.insert(BookingType_21.getString());
  FIX::BookingUnit BookingUnit_7('0');
  msg.set(BookingUnit_7);
  NewOrderMultileg_0.insert(BookingUnit_7.getString());
  FIX::CancellationRights CancellationRights_5('M');
  msg.set(CancellationRights_5);
  NewOrderMultileg_0.insert(CancellationRights_5.getString());
  FIX::CashMargin CashMargin_7('3');
  msg.set(CashMargin_7);
  NewOrderMultileg_0.insert(CashMargin_7.getString());
  FIX::ClOrdID ClOrdID_31("STRING_88394463");
  msg.set(ClOrdID_31);
  NewOrderMultileg_0.insert(ClOrdID_31.getString());
  FIX::ClOrdLinkID ClOrdLinkID_9("STRING_2075021284");
  msg.set(ClOrdLinkID_9);
  NewOrderMultileg_0.insert(ClOrdLinkID_9.getString());
  FIX::ClearingFeeIndicator ClearingFeeIndicator_13("STRING_3");
  msg.set(ClearingFeeIndicator_13);
  NewOrderMultileg_0.insert(ClearingFeeIndicator_13.getString());
  FIX::ComplianceID ComplianceID_8("STRING_2050415539");
  msg.set(ComplianceID_8);
  NewOrderMultileg_0.insert(ComplianceID_8.getString());
  FIX::CoveredOrUncovered CoveredOrUncovered_6(1);
  msg.set(CoveredOrUncovered_6);
  NewOrderMultileg_0.insert(CoveredOrUncovered_6.getString());
  FIX::Currency Currency_44("JPY");
  msg.set(Currency_44);
  NewOrderMultileg_0.insert(Currency_44.getString());
  FIX::CustOrderCapacity CustOrderCapacity_10(2);
  msg.set(CustOrderCapacity_10);
  NewOrderMultileg_0.insert(CustOrderCapacity_10.getString());
  FIX::DayBookingInst DayBookingInst_7('2');
  msg.set(DayBookingInst_7);
  NewOrderMultileg_0.insert(DayBookingInst_7.getString());
  FIX::Designation Designation_6("STRING_13472725");
  msg.set(Designation_6);
  NewOrderMultileg_0.insert(Designation_6.getString());
  FIX::EffectiveTime EffectiveTime_6(FIX::UTCTIMESTAMP(19, 14, 8, 23, 8, 2011));
  msg.set(EffectiveTime_6);
  NewOrderMultileg_0.insert(EffectiveTime_6.getString());
  FIX::EncodedText EncodedText_55("DATA_1830994193");
  msg.set(EncodedText_55);
  NewOrderMultileg_0.insert(EncodedText_55.getString());
  FIX::EncodedTextLen EncodedTextLen_55(332229810);
  msg.set(EncodedTextLen_55);
  NewOrderMultileg_0.insert(EncodedTextLen_55.getString());
  FIX::ExDestination ExDestination_5("EXCHANGE_2005417769");
  msg.set(ExDestination_5);
  NewOrderMultileg_0.insert(ExDestination_5.getString());
  FIX::ExDestinationIDSource ExDestinationIDSource_5('D');
  msg.set(ExDestinationIDSource_5);
  NewOrderMultileg_0.insert(ExDestinationIDSource_5.getString());
  FIX::ExecInst ExecInst_8("MULTIPLECHARVALUE_S");
  msg.set(ExecInst_8);
  NewOrderMultileg_0.insert(ExecInst_8.getString());
  FIX::ExpireDate ExpireDate_9("LOCALMKTDATE_1298507240");
  msg.set(ExpireDate_9);
  NewOrderMultileg_0.insert(ExpireDate_9.getString());
  FIX::ExpireTime ExpireTime_10(FIX::UTCTIMESTAMP(12, 19, 40, 13, 6, 2014));
  msg.set(ExpireTime_10);
  NewOrderMultileg_0.insert(ExpireTime_10.getString());
  FIX::ForexReq ForexReq_7(true);
  msg.set(ForexReq_7);
  NewOrderMultileg_0.insert(ForexReq_7.getString());
  FIX::GTBookingInst GTBookingInst_6(2);
  msg.set(GTBookingInst_6);
  NewOrderMultileg_0.insert(GTBookingInst_6.getString());
  FIX::HandlInst HandlInst_6('2');
  msg.set(HandlInst_6);
  NewOrderMultileg_0.insert(HandlInst_6.getString());
  FIX::IOIID IOIID_6("STRING_845897046");
  msg.set(IOIID_6);
  NewOrderMultileg_0.insert(IOIID_6.getString());
  FIX::LocateReqd LocateReqd_5(false);
  msg.set(LocateReqd_5);
  NewOrderMultileg_0.insert(LocateReqd_5.getString());
  FIX::MatchIncrement MatchIncrement_6;
  MatchIncrement_6.setString("20802164");
  msg.set(MatchIncrement_6);
  NewOrderMultileg_0.insert(MatchIncrement_6.getString());
  FIX::MaxFloor MaxFloor_6;
  MaxFloor_6.setString("6311620");
  msg.set(MaxFloor_6);
  NewOrderMultileg_0.insert(MaxFloor_6.getString());
  FIX::MaxPriceLevels MaxPriceLevels_6(1440658625);
  msg.set(MaxPriceLevels_6);
  NewOrderMultileg_0.insert(MaxPriceLevels_6.getString());
  FIX::MaxShow MaxShow_6;
  MaxShow_6.setString("2147291");
  msg.set(MaxShow_6);
  NewOrderMultileg_0.insert(MaxShow_6.getString());
  FIX::MinQty MinQty_8;
  MinQty_8.setString("10369236");
  msg.set(MinQty_8);
  NewOrderMultileg_0.insert(MinQty_8.getString());
  FIX::MoneyLaunderingStatus MoneyLaunderingStatus_5('Y');
  msg.set(MoneyLaunderingStatus_5);
  NewOrderMultileg_0.insert(MoneyLaunderingStatus_5.getString());
  FIX::MultiLegRptTypeReq MultiLegRptTypeReq_1(0);
  msg.set(MultiLegRptTypeReq_1);
  NewOrderMultileg_0.insert(MultiLegRptTypeReq_1.getString());
  FIX::MultilegModel MultilegModel_6(2);
  msg.set(MultilegModel_6);
  NewOrderMultileg_0.insert(MultilegModel_6.getString());
  FIX::MultilegPriceMethod MultilegPriceMethod_6(1);
  msg.set(MultilegPriceMethod_6);
  NewOrderMultileg_0.insert(MultilegPriceMethod_6.getString());
  FIX::OrdType OrdType_35('7');
  msg.set(OrdType_35);
  NewOrderMultileg_0.insert(OrdType_35.getString());
  FIX::OrderCapacity OrderCapacity_23('W');
  msg.set(OrderCapacity_23);
  NewOrderMultileg_0.insert(OrderCapacity_23.getString());
  FIX::OrderRestrictions OrderRestrictions_21("MULTIPLECHARVALUE_F");
  msg.set(OrderRestrictions_21);
  NewOrderMultileg_0.insert(OrderRestrictions_21.getString());
  FIX::ParticipationRate ParticipationRate_6;
  ParticipationRate_6.setString("64.510000");
  msg.set(ParticipationRate_6);
  NewOrderMultileg_0.insert(ParticipationRate_6.getString());
  FIX::PositionEffect PositionEffect_10('O');
  msg.set(PositionEffect_10);
  NewOrderMultileg_0.insert(PositionEffect_10.getString());
  FIX::PreTradeAnonymity PreTradeAnonymity_7(true);
  msg.set(PreTradeAnonymity_7);
  NewOrderMultileg_0.insert(PreTradeAnonymity_7.getString());
  FIX::PreallocMethod PreallocMethod_7('0');
  msg.set(PreallocMethod_7);
  NewOrderMultileg_0.insert(PreallocMethod_7.getString());
  FIX::PrevClosePx PrevClosePx_6;
  PrevClosePx_6.setString("17261198");
  msg.set(PrevClosePx_6);
  NewOrderMultileg_0.insert(PrevClosePx_6.getString());
  FIX::Price Price_15;
  Price_15.setString("14766842");
  msg.set(Price_15);
  NewOrderMultileg_0.insert(Price_15.getString());
  FIX::PriceProtectionScope PriceProtectionScope_6('1');
  msg.set(PriceProtectionScope_6);
  NewOrderMultileg_0.insert(PriceProtectionScope_6.getString());
  FIX::PriceType PriceType_25(15);
  msg.set(PriceType_25);
  NewOrderMultileg_0.insert(PriceType_25.getString());
  FIX::ProcessCode ProcessCode_12('2');
  msg.set(ProcessCode_12);
  NewOrderMultileg_0.insert(ProcessCode_12.getString());
  FIX::QtyType QtyType_19(2);
  msg.set(QtyType_19);
  NewOrderMultileg_0.insert(QtyType_19.getString());
  FIX::QuoteID QuoteID_7("STRING_889718583");
  msg.set(QuoteID_7);
  NewOrderMultileg_0.insert(QuoteID_7.getString());
  FIX::RefOrderID RefOrderID_2("STRING_1049891996");
  msg.set(RefOrderID_2);
  NewOrderMultileg_0.insert(RefOrderID_2.getString());
  FIX::RefOrderIDSource RefOrderIDSource_2('0');
  msg.set(RefOrderIDSource_2);
  NewOrderMultileg_0.insert(RefOrderIDSource_2.getString());
  FIX::RegistID RegistID_5("STRING_2122802549");
  msg.set(RegistID_5);
  NewOrderMultileg_0.insert(RegistID_5.getString());
  FIX::RiskFreeRate RiskFreeRate_2;
  RiskFreeRate_2.setString("16711010");
  msg.set(RiskFreeRate_2);
  NewOrderMultileg_0.insert(RiskFreeRate_2.getString());
  FIX::SecondaryClOrdID SecondaryClOrdID_29("STRING_1346385181");
  msg.set(SecondaryClOrdID_29);
  NewOrderMultileg_0.insert(SecondaryClOrdID_29.getString());
  FIX::SettlCurrency SettlCurrency_16("GBP");
  msg.set(SettlCurrency_16);
  NewOrderMultileg_0.insert(SettlCurrency_16.getString());
  FIX::SettlDate SettlDate_33("LOCALMKTDATE_494884069");
  msg.set(SettlDate_33);
  NewOrderMultileg_0.insert(SettlDate_33.getString());
  FIX::SettlType SettlType_16("STRING_B");
  msg.set(SettlType_16);
  NewOrderMultileg_0.insert(SettlType_16.getString());
  FIX::Side Side_24('3');
  msg.set(Side_24);
  NewOrderMultileg_0.insert(Side_24.getString());
  FIX::SolicitedFlag SolicitedFlag_7(true);
  msg.set(SolicitedFlag_7);
  NewOrderMultileg_0.insert(SolicitedFlag_7.getString());
  FIX::StopPx StopPx_6;
  StopPx_6.setString("12834024");
  msg.set(StopPx_6);
  NewOrderMultileg_0.insert(StopPx_6.getString());
  FIX::SwapPoints SwapPoints_1;
  SwapPoints_1.setString("20376000");
  msg.set(SwapPoints_1);
  NewOrderMultileg_0.insert(SwapPoints_1.getString());
  FIX::TargetStrategy TargetStrategy_6(3);
  msg.set(TargetStrategy_6);
  NewOrderMultileg_0.insert(TargetStrategy_6.getString());
  FIX::TargetStrategyParameters TargetStrategyParameters_6("STRING_356400397");
  msg.set(TargetStrategyParameters_6);
  NewOrderMultileg_0.insert(TargetStrategyParameters_6.getString());
  FIX::Text Text_55("STRING_1972720787");
  msg.set(Text_55);
  NewOrderMultileg_0.insert(Text_55.getString());
  FIX::TimeInForce TimeInForce_20('4');
  msg.set(TimeInForce_20);
  NewOrderMultileg_0.insert(TimeInForce_20.getString());
  FIX::TradeDate TradeDate_21("LOCALMKTDATE_1302831260");
  msg.set(TradeDate_21);
  NewOrderMultileg_0.insert(TradeDate_21.getString());
  FIX::TradeOriginationDate TradeOriginationDate_13("LOCALMKTDATE_1527879225");
  msg.set(TradeOriginationDate_13);
  NewOrderMultileg_0.insert(TradeOriginationDate_13.getString());
  FIX::TransactTime TransactTime_41(FIX::UTCTIMESTAMP(23, 27, 36, 4, 5, 2007));
  msg.set(TransactTime_41);
  NewOrderMultileg_0.insert(TransactTime_41.getString());
  all_values.push_back(NewOrderMultileg_0);

  // CommissionData
  multiset<string> CommissionData_15;
  FIX::CommCurrency CommCurrency_15("CAN");
  msg.set(CommCurrency_15);
  CommissionData_15.insert(CommCurrency_15.getString());
  FIX::CommType CommType_15('5');
  msg.set(CommType_15);
  CommissionData_15.insert(CommType_15.getString());
  FIX::Commission Commission_15;
  Commission_15.setString("6203708");
  msg.set(Commission_15);
  CommissionData_15.insert(Commission_15.getString());
  FIX::FundRenewWaiv FundRenewWaiv_15('N');
  msg.set(FundRenewWaiv_15);
  CommissionData_15.insert(FundRenewWaiv_15.getString());
  all_values.push_back(CommissionData_15);

  // DiscretionInstructions
  multiset<string> DiscretionInstructions_6;
  FIX::DiscretionInst DiscretionInst_6('6');
  msg.set(DiscretionInst_6);
  DiscretionInstructions_6.insert(DiscretionInst_6.getString());
  FIX::DiscretionLimitType DiscretionLimitType_6(1);
  msg.set(DiscretionLimitType_6);
  DiscretionInstructions_6.insert(DiscretionLimitType_6.getString());
  FIX::DiscretionMoveType DiscretionMoveType_6(1);
  msg.set(DiscretionMoveType_6);
  DiscretionInstructions_6.insert(DiscretionMoveType_6.getString());
  FIX::DiscretionOffsetType DiscretionOffsetType_6(0);
  msg.set(DiscretionOffsetType_6);
  DiscretionInstructions_6.insert(DiscretionOffsetType_6.getString());
  FIX::DiscretionOffsetValue DiscretionOffsetValue_6;
  DiscretionOffsetValue_6.setString("19200905");
  msg.set(DiscretionOffsetValue_6);
  DiscretionInstructions_6.insert(DiscretionOffsetValue_6.getString());
  FIX::DiscretionRoundDirection DiscretionRoundDirection_6(1);
  msg.set(DiscretionRoundDirection_6);
  DiscretionInstructions_6.insert(DiscretionRoundDirection_6.getString());
  FIX::DiscretionScope DiscretionScope_6(2);
  msg.set(DiscretionScope_6);
  DiscretionInstructions_6.insert(DiscretionScope_6.getString());
  all_values.push_back(DiscretionInstructions_6);

  // DisplayInstruction
  multiset<string> DisplayInstruction_6;
  FIX::DisplayHighQty DisplayHighQty_6;
  DisplayHighQty_6.setString("2674909");
  msg.set(DisplayHighQty_6);
  DisplayInstruction_6.insert(DisplayHighQty_6.getString());
  FIX::DisplayLowQty DisplayLowQty_6;
  DisplayLowQty_6.setString("3197283");
  msg.set(DisplayLowQty_6);
  DisplayInstruction_6.insert(DisplayLowQty_6.getString());
  FIX::DisplayMethod DisplayMethod_6('4');
  msg.set(DisplayMethod_6);
  DisplayInstruction_6.insert(DisplayMethod_6.getString());
  FIX::DisplayMinIncr DisplayMinIncr_6;
  DisplayMinIncr_6.setString("555499");
  msg.set(DisplayMinIncr_6);
  DisplayInstruction_6.insert(DisplayMinIncr_6.getString());
  FIX::DisplayQty DisplayQty_6;
  DisplayQty_6.setString("16031308");
  msg.set(DisplayQty_6);
  DisplayInstruction_6.insert(DisplayQty_6.getString());
  FIX::DisplayWhen DisplayWhen_6('2');
  msg.set(DisplayWhen_6);
  DisplayInstruction_6.insert(DisplayWhen_6.getString());
  FIX::RefreshQty RefreshQty_6;
  RefreshQty_6.setString("12977403");
  msg.set(RefreshQty_6);
  DisplayInstruction_6.insert(RefreshQty_6.getString());
  FIX::SecondaryDisplayQty SecondaryDisplayQty_6;
  SecondaryDisplayQty_6.setString("19595311");
  msg.set(SecondaryDisplayQty_6);
  DisplayInstruction_6.insert(SecondaryDisplayQty_6.getString());
  all_values.push_back(DisplayInstruction_6);

  // Instrument
  multiset<string> Instrument_49;
  FIX::AttachmentPoint AttachmentPoint_49;
  AttachmentPoint_49.setString("34.320000");
  msg.set(AttachmentPoint_49);
  Instrument_49.insert(AttachmentPoint_49.getString());
  FIX::CFICode CFICode_49("STRING_738994035");
  msg.set(CFICode_49);
  Instrument_49.insert(CFICode_49.getString());
  FIX::CPProgram CPProgram_49(99);
  msg.set(CPProgram_49);
  Instrument_49.insert(CPProgram_49.getString());
  FIX::CPRegType CPRegType_49("STRING_1636412657");
  msg.set(CPRegType_49);
  Instrument_49.insert(CPRegType_49.getString());
  FIX::CapPrice CapPrice_49;
  CapPrice_49.setString("13704223");
  msg.set(CapPrice_49);
  Instrument_49.insert(CapPrice_49.getString());
  FIX::ContractMultiplier ContractMultiplier_49;
  ContractMultiplier_49.setString("8708828");
  msg.set(ContractMultiplier_49);
  Instrument_49.insert(ContractMultiplier_49.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_49(1);
  msg.set(ContractMultiplierUnit_49);
  Instrument_49.insert(ContractMultiplierUnit_49.getString());
  FIX::ContractSettlMonth ContractSettlMonth_49("MONTHYEAR_1376771541");
  msg.set(ContractSettlMonth_49);
  Instrument_49.insert(ContractSettlMonth_49.getString());
  FIX::CountryOfIssue CountryOfIssue_49("COUNTRY_1085477509");
  msg.set(CountryOfIssue_49);
  Instrument_49.insert(CountryOfIssue_49.getString());
  FIX::CouponPaymentDate CouponPaymentDate_49("LOCALMKTDATE_600661649");
  msg.set(CouponPaymentDate_49);
  Instrument_49.insert(CouponPaymentDate_49.getString());
  FIX::CouponRate CouponRate_49;
  CouponRate_49.setString("13.290000");
  msg.set(CouponRate_49);
  Instrument_49.insert(CouponRate_49.getString());
  FIX::CreditRating CreditRating_49("STRING_909686310");
  msg.set(CreditRating_49);
  Instrument_49.insert(CreditRating_49.getString());
  FIX::DatedDate DatedDate_49("LOCALMKTDATE_2145705953");
  msg.set(DatedDate_49);
  Instrument_49.insert(DatedDate_49.getString());
  FIX::DetachmentPoint DetachmentPoint_49;
  DetachmentPoint_49.setString("45.230000");
  msg.set(DetachmentPoint_49);
  Instrument_49.insert(DetachmentPoint_49.getString());
  FIX::EncodedIssuer EncodedIssuer_49("DATA_1530057115");
  msg.set(EncodedIssuer_49);
  Instrument_49.insert(EncodedIssuer_49.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_49(285501543);
  msg.set(EncodedIssuerLen_49);
  Instrument_49.insert(EncodedIssuerLen_49.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_49("DATA_808656066");
  msg.set(EncodedSecurityDesc_49);
  Instrument_49.insert(EncodedSecurityDesc_49.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_49(2103762458);
  msg.set(EncodedSecurityDescLen_49);
  Instrument_49.insert(EncodedSecurityDescLen_49.getString());
  FIX::ExerciseStyle ExerciseStyle_49(1);
  msg.set(ExerciseStyle_49);
  Instrument_49.insert(ExerciseStyle_49.getString());
  FIX::Factor Factor_49;
  Factor_49.setString("19791286");
  msg.set(Factor_49);
  Instrument_49.insert(Factor_49.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_49(false);
  msg.set(FlexProductEligibilityIndicator_49);
  Instrument_49.insert(FlexProductEligibilityIndicator_49.getString());
  FIX::FlexibleIndicator FlexibleIndicator_49(false);
  msg.set(FlexibleIndicator_49);
  Instrument_49.insert(FlexibleIndicator_49.getString());
  FIX::FloorPrice FloorPrice_49;
  FloorPrice_49.setString("13716320");
  msg.set(FloorPrice_49);
  Instrument_49.insert(FloorPrice_49.getString());
  FIX::FlowScheduleType FlowScheduleType_49(0);
  msg.set(FlowScheduleType_49);
  Instrument_49.insert(FlowScheduleType_49.getString());
  FIX::InstrRegistry InstrRegistry_49("STRING_118883014");
  msg.set(InstrRegistry_49);
  Instrument_49.insert(InstrRegistry_49.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_49('1');
  msg.set(InstrmtAssignmentMethod_49);
  Instrument_49.insert(InstrmtAssignmentMethod_49.getString());
  FIX::InterestAccrualDate InterestAccrualDate_49("LOCALMKTDATE_51926624");
  msg.set(InterestAccrualDate_49);
  Instrument_49.insert(InterestAccrualDate_49.getString());
  FIX::IssueDate IssueDate_49("LOCALMKTDATE_1722013814");
  msg.set(IssueDate_49);
  Instrument_49.insert(IssueDate_49.getString());
  FIX::Issuer Issuer_49("STRING_2048108160");
  msg.set(Issuer_49);
  Instrument_49.insert(Issuer_49.getString());
  FIX::ListMethod ListMethod_49(1);
  msg.set(ListMethod_49);
  Instrument_49.insert(ListMethod_49.getString());
  FIX::LocaleOfIssue LocaleOfIssue_49("STRING_1534061364");
  msg.set(LocaleOfIssue_49);
  Instrument_49.insert(LocaleOfIssue_49.getString());
  FIX::MaturityDate MaturityDate_49("LOCALMKTDATE_9157944");
  msg.set(MaturityDate_49);
  Instrument_49.insert(MaturityDate_49.getString());
  FIX::MaturityMonthYear MaturityMonthYear_49("MONTHYEAR_2088661048");
  msg.set(MaturityMonthYear_49);
  Instrument_49.insert(MaturityMonthYear_49.getString());
  FIX::MaturityTime MaturityTime_49("TZTIMEONLY_501456525");
  msg.set(MaturityTime_49);
  Instrument_49.insert(MaturityTime_49.getString());
  FIX::MinPriceIncrement MinPriceIncrement_49;
  MinPriceIncrement_49.setString("16455706");
  msg.set(MinPriceIncrement_49);
  Instrument_49.insert(MinPriceIncrement_49.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_49;
  MinPriceIncrementAmount_49.setString("13115997");
  msg.set(MinPriceIncrementAmount_49);
  Instrument_49.insert(MinPriceIncrementAmount_49.getString());
  FIX::NTPositionLimit NTPositionLimit_49(1372339398);
  msg.set(NTPositionLimit_49);
  Instrument_49.insert(NTPositionLimit_49.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_49;
  NotionalPercentageOutstanding_49.setString("78.190000");
  msg.set(NotionalPercentageOutstanding_49);
  Instrument_49.insert(NotionalPercentageOutstanding_49.getString());
  FIX::OptAttribute OptAttribute_49('5');
  msg.set(OptAttribute_49);
  Instrument_49.insert(OptAttribute_49.getString());
  FIX::OptPayoutAmount OptPayoutAmount_49;
  OptPayoutAmount_49.setString("3103332");
  msg.set(OptPayoutAmount_49);
  Instrument_49.insert(OptPayoutAmount_49.getString());
  FIX::OptPayoutType OptPayoutType_49(2);
  msg.set(OptPayoutType_49);
  Instrument_49.insert(OptPayoutType_49.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_49;
  OriginalNotionalPercentageOutstanding_49.setString("89.880000");
  msg.set(OriginalNotionalPercentageOutstanding_49);
  Instrument_49.insert(OriginalNotionalPercentageOutstanding_49.getString());
  FIX::Pool Pool_49("STRING_1220019569");
  msg.set(Pool_49);
  Instrument_49.insert(Pool_49.getString());
  FIX::PositionLimit PositionLimit_49(352448125);
  msg.set(PositionLimit_49);
  Instrument_49.insert(PositionLimit_49.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_49("STRING_PCTPAR");
  msg.set(PriceQuoteMethod_49);
  Instrument_49.insert(PriceQuoteMethod_49.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_49("STRING_602593037");
  msg.set(PriceUnitOfMeasure_49);
  Instrument_49.insert(PriceUnitOfMeasure_49.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_49;
  PriceUnitOfMeasureQty_49.setString("6379496");
  msg.set(PriceUnitOfMeasureQty_49);
  Instrument_49.insert(PriceUnitOfMeasureQty_49.getString());
  FIX::Product Product_51(6);
  msg.set(Product_51);
  Instrument_49.insert(Product_51.getString());
  FIX::ProductComplex ProductComplex_49("STRING_558871847");
  msg.set(ProductComplex_49);
  Instrument_49.insert(ProductComplex_49.getString());
  FIX::PutOrCall PutOrCall_49(0);
  msg.set(PutOrCall_49);
  Instrument_49.insert(PutOrCall_49.getString());
  FIX::RedemptionDate RedemptionDate_49("LOCALMKTDATE_1055310928");
  msg.set(RedemptionDate_49);
  Instrument_49.insert(RedemptionDate_49.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_49("STRING_287757534");
  msg.set(RepoCollateralSecurityType_49);
  Instrument_49.insert(RepoCollateralSecurityType_49.getString());
  FIX::RepurchaseRate RepurchaseRate_49;
  RepurchaseRate_49.setString("40.290000");
  msg.set(RepurchaseRate_49);
  Instrument_49.insert(RepurchaseRate_49.getString());
  FIX::RepurchaseTerm RepurchaseTerm_49(279459295);
  msg.set(RepurchaseTerm_49);
  Instrument_49.insert(RepurchaseTerm_49.getString());
  FIX::RestructuringType RestructuringType_49("STRING_XR");
  msg.set(RestructuringType_49);
  Instrument_49.insert(RestructuringType_49.getString());
  FIX::SecurityDesc SecurityDesc_49("STRING_1104087044");
  msg.set(SecurityDesc_49);
  Instrument_49.insert(SecurityDesc_49.getString());
  FIX::SecurityExchange SecurityExchange_49("EXCHANGE_2044271162");
  msg.set(SecurityExchange_49);
  Instrument_49.insert(SecurityExchange_49.getString());
  FIX::SecurityGroup SecurityGroup_49("STRING_336060791");
  msg.set(SecurityGroup_49);
  Instrument_49.insert(SecurityGroup_49.getString());
  FIX::SecurityID SecurityID_49("STRING_678617210");
  msg.set(SecurityID_49);
  Instrument_49.insert(SecurityID_49.getString());
  FIX::SecurityIDSource SecurityIDSource_49("STRING_J");
  msg.set(SecurityIDSource_49);
  Instrument_49.insert(SecurityIDSource_49.getString());
  FIX::SecurityStatus SecurityStatus_49("STRING_2");
  msg.set(SecurityStatus_49);
  Instrument_49.insert(SecurityStatus_49.getString());
  FIX::SecuritySubType SecuritySubType_50("STRING_65194926");
  msg.set(SecuritySubType_50);
  Instrument_49.insert(SecuritySubType_50.getString());
  FIX::SecurityType SecurityType_51("STRING_DINP");
  msg.set(SecurityType_51);
  Instrument_49.insert(SecurityType_51.getString());
  FIX::Seniority Seniority_49("STRING_SD");
  msg.set(Seniority_49);
  Instrument_49.insert(Seniority_49.getString());
  FIX::SettlMethod SettlMethod_49('C');
  msg.set(SettlMethod_49);
  Instrument_49.insert(SettlMethod_49.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_49("STRING_1452140573");
  msg.set(SettleOnOpenFlag_49);
  Instrument_49.insert(SettleOnOpenFlag_49.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_49("STRING_791021323");
  msg.set(StateOrProvinceOfIssue_49);
  Instrument_49.insert(StateOrProvinceOfIssue_49.getString());
  FIX::StrikeCurrency StrikeCurrency_49("JPY");
  msg.set(StrikeCurrency_49);
  Instrument_49.insert(StrikeCurrency_49.getString());
  FIX::StrikeMultiplier StrikeMultiplier_49;
  StrikeMultiplier_49.setString("13319089");
  msg.set(StrikeMultiplier_49);
  Instrument_49.insert(StrikeMultiplier_49.getString());
  FIX::StrikePrice StrikePrice_49;
  StrikePrice_49.setString("1018404");
  msg.set(StrikePrice_49);
  Instrument_49.insert(StrikePrice_49.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_49(5);
  msg.set(StrikePriceBoundaryMethod_49);
  Instrument_49.insert(StrikePriceBoundaryMethod_49.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_49;
  StrikePriceBoundaryPrecision_49.setString("43.220000");
  msg.set(StrikePriceBoundaryPrecision_49);
  Instrument_49.insert(StrikePriceBoundaryPrecision_49.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_49(4);
  msg.set(StrikePriceDeterminationMethod_49);
  Instrument_49.insert(StrikePriceDeterminationMethod_49.getString());
  FIX::StrikeValue StrikeValue_49;
  StrikeValue_49.setString("19123786");
  msg.set(StrikeValue_49);
  Instrument_49.insert(StrikeValue_49.getString());
  FIX::Symbol Symbol_49("STRING_852644185");
  msg.set(Symbol_49);
  Instrument_49.insert(Symbol_49.getString());
  FIX::SymbolSfx SymbolSfx_49("STRING_CD");
  msg.set(SymbolSfx_49);
  Instrument_49.insert(SymbolSfx_49.getString());
  FIX::TimeUnit TimeUnit_49("STRING_D");
  msg.set(TimeUnit_49);
  Instrument_49.insert(TimeUnit_49.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_49(4);
  msg.set(UnderlyingPriceDeterminationMethod_49);
  Instrument_49.insert(UnderlyingPriceDeterminationMethod_49.getString());
  FIX::UnitOfMeasure UnitOfMeasure_49("STRING_t");
  msg.set(UnitOfMeasure_49);
  Instrument_49.insert(UnitOfMeasure_49.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_49;
  UnitOfMeasureQty_49.setString("15888940");
  msg.set(UnitOfMeasureQty_49);
  Instrument_49.insert(UnitOfMeasureQty_49.getString());
  FIX::ValuationMethod ValuationMethod_49("STRING_EQTY");
  msg.set(ValuationMethod_49);
  Instrument_49.insert(ValuationMethod_49.getString());
  all_values.push_back(Instrument_49);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::NewOrderMultileg::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_95;
    FIX::ComplexEventCondition ComplexEventCondition_95(1);
    noComplexEvents_0_0.set(ComplexEventCondition_95);
    ComplexEvents_NoComplexEvents_95.insert(ComplexEventCondition_95.getString());
    FIX::ComplexEventPrice ComplexEventPrice_95;
    ComplexEventPrice_95.setString("12635966");
    noComplexEvents_0_0.set(ComplexEventPrice_95);
    ComplexEvents_NoComplexEvents_95.insert(ComplexEventPrice_95.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_95(5);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_95);
    ComplexEvents_NoComplexEvents_95.insert(ComplexEventPriceBoundaryMethod_95.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_95;
    ComplexEventPriceBoundaryPrecision_95.setString("14.880000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_95);
    ComplexEvents_NoComplexEvents_95.insert(ComplexEventPriceBoundaryPrecision_95.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_95(1);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_95);
    ComplexEvents_NoComplexEvents_95.insert(ComplexEventPriceTimeType_95.getString());
    FIX::ComplexEventType ComplexEventType_95(8);
    noComplexEvents_0_0.set(ComplexEventType_95);
    ComplexEvents_NoComplexEvents_95.insert(ComplexEventType_95.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_95;
    ComplexOptPayoutAmount_95.setString("618350");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_95);
    ComplexEvents_NoComplexEvents_95.insert(ComplexOptPayoutAmount_95.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_95);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::NewOrderMultileg::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_195;
      FIX::ComplexEventEndDate ComplexEventEndDate_195(FIX::UTCTIMESTAMP(17, 42, 55, 21, 4, 2008));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_195);
      ComplexEventDates_NoComplexEventDates_195.insert(ComplexEventEndDate_195.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_195(FIX::UTCTIMESTAMP(7, 32, 14, 20, 7, 2015));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_195);
      ComplexEventDates_NoComplexEventDates_195.insert(ComplexEventStartDate_195.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_195);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::NewOrderMultileg::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_391;
        FIX::ComplexEventEndTime ComplexEventEndTime_391(FIX::UTCTIMEONLY(2, 41, 47));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_391);
        ComplexEventTimes_NoComplexEventTimes_391.insert(ComplexEventEndTime_391.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_391(FIX::UTCTIMEONLY(4, 34, 8));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_391);
        ComplexEventTimes_NoComplexEventTimes_391.insert(ComplexEventStartTime_391.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_391);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::NewOrderMultileg::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_392;
        FIX::ComplexEventEndTime ComplexEventEndTime_392(FIX::UTCTIMEONLY(0, 58, 21));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_392);
        ComplexEventTimes_NoComplexEventTimes_392.insert(ComplexEventEndTime_392.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_392(FIX::UTCTIMEONLY(3, 32, 33));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_392);
        ComplexEventTimes_NoComplexEventTimes_392.insert(ComplexEventStartTime_392.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_392);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_196;
      FIX::ComplexEventEndDate ComplexEventEndDate_196(FIX::UTCTIMESTAMP(13, 7, 4, 11, 12, 2011));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_196);
      ComplexEventDates_NoComplexEventDates_196.insert(ComplexEventEndDate_196.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_196(FIX::UTCTIMESTAMP(6, 7, 25, 22, 3, 2008));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_196);
      ComplexEventDates_NoComplexEventDates_196.insert(ComplexEventStartDate_196.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_196);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::NewOrderMultileg::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_393;
        FIX::ComplexEventEndTime ComplexEventEndTime_393(FIX::UTCTIMEONLY(8, 57, 53));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_393);
        ComplexEventTimes_NoComplexEventTimes_393.insert(ComplexEventEndTime_393.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_393(FIX::UTCTIMEONLY(1, 27, 15));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_393);
        ComplexEventTimes_NoComplexEventTimes_393.insert(ComplexEventStartTime_393.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_393);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::NewOrderMultileg::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_394;
        FIX::ComplexEventEndTime ComplexEventEndTime_394(FIX::UTCTIMEONLY(15, 5, 27));
        noComplexEventTimes_0_1_2_1.set(ComplexEventEndTime_394);
        ComplexEventTimes_NoComplexEventTimes_394.insert(ComplexEventEndTime_394.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_394(FIX::UTCTIMEONLY(20, 59, 18));
        noComplexEventTimes_0_1_2_1.set(ComplexEventStartTime_394);
        ComplexEventTimes_NoComplexEventTimes_394.insert(ComplexEventStartTime_394.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_394);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::NewOrderMultileg::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_96;
    FIX::ComplexEventCondition ComplexEventCondition_96(2);
    noComplexEvents_0_1.set(ComplexEventCondition_96);
    ComplexEvents_NoComplexEvents_96.insert(ComplexEventCondition_96.getString());
    FIX::ComplexEventPrice ComplexEventPrice_96;
    ComplexEventPrice_96.setString("7752199");
    noComplexEvents_0_1.set(ComplexEventPrice_96);
    ComplexEvents_NoComplexEvents_96.insert(ComplexEventPrice_96.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_96(1);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_96);
    ComplexEvents_NoComplexEvents_96.insert(ComplexEventPriceBoundaryMethod_96.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_96;
    ComplexEventPriceBoundaryPrecision_96.setString("93.930000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_96);
    ComplexEvents_NoComplexEvents_96.insert(ComplexEventPriceBoundaryPrecision_96.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_96(3);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_96);
    ComplexEvents_NoComplexEvents_96.insert(ComplexEventPriceTimeType_96.getString());
    FIX::ComplexEventType ComplexEventType_96(5);
    noComplexEvents_0_1.set(ComplexEventType_96);
    ComplexEvents_NoComplexEvents_96.insert(ComplexEventType_96.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_96;
    ComplexOptPayoutAmount_96.setString("4772919");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_96);
    ComplexEvents_NoComplexEvents_96.insert(ComplexOptPayoutAmount_96.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_96);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::NewOrderMultileg::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_197;
      FIX::ComplexEventEndDate ComplexEventEndDate_197(FIX::UTCTIMESTAMP(12, 7, 5, 14, 3, 2016));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_197);
      ComplexEventDates_NoComplexEventDates_197.insert(ComplexEventEndDate_197.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_197(FIX::UTCTIMESTAMP(10, 11, 37, 13, 6, 2010));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_197);
      ComplexEventDates_NoComplexEventDates_197.insert(ComplexEventStartDate_197.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_197);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::NewOrderMultileg::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_395;
        FIX::ComplexEventEndTime ComplexEventEndTime_395(FIX::UTCTIMEONLY(23, 33, 50));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_395);
        ComplexEventTimes_NoComplexEventTimes_395.insert(ComplexEventEndTime_395.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_395(FIX::UTCTIMEONLY(21, 49, 42));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_395);
        ComplexEventTimes_NoComplexEventTimes_395.insert(ComplexEventStartTime_395.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_395);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::NewOrderMultileg::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_396;
        FIX::ComplexEventEndTime ComplexEventEndTime_396(FIX::UTCTIMEONLY(17, 0, 11));
        noComplexEventTimes_1_0_2_1.set(ComplexEventEndTime_396);
        ComplexEventTimes_NoComplexEventTimes_396.insert(ComplexEventEndTime_396.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_396(FIX::UTCTIMEONLY(16, 32, 59));
        noComplexEventTimes_1_0_2_1.set(ComplexEventStartTime_396);
        ComplexEventTimes_NoComplexEventTimes_396.insert(ComplexEventStartTime_396.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_396);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_198;
      FIX::ComplexEventEndDate ComplexEventEndDate_198(FIX::UTCTIMESTAMP(20, 7, 41, 2, 2, 2015));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_198);
      ComplexEventDates_NoComplexEventDates_198.insert(ComplexEventEndDate_198.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_198(FIX::UTCTIMESTAMP(3, 6, 51, 20, 12, 2017));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_198);
      ComplexEventDates_NoComplexEventDates_198.insert(ComplexEventStartDate_198.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_198);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::NewOrderMultileg::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_397;
        FIX::ComplexEventEndTime ComplexEventEndTime_397(FIX::UTCTIMEONLY(14, 29, 28));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_397);
        ComplexEventTimes_NoComplexEventTimes_397.insert(ComplexEventEndTime_397.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_397(FIX::UTCTIMEONLY(18, 9, 33));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_397);
        ComplexEventTimes_NoComplexEventTimes_397.insert(ComplexEventStartTime_397.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_397);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::NewOrderMultileg::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_398;
        FIX::ComplexEventEndTime ComplexEventEndTime_398(FIX::UTCTIMEONLY(3, 33, 4));
        noComplexEventTimes_1_1_2_1.set(ComplexEventEndTime_398);
        ComplexEventTimes_NoComplexEventTimes_398.insert(ComplexEventEndTime_398.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_398(FIX::UTCTIMEONLY(18, 36, 39));
        noComplexEventTimes_1_1_2_1.set(ComplexEventStartTime_398);
        ComplexEventTimes_NoComplexEventTimes_398.insert(ComplexEventStartTime_398.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_398);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      {
        FIX50SP2::NewOrderMultileg::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_399;
        FIX::ComplexEventEndTime ComplexEventEndTime_399(FIX::UTCTIMEONLY(12, 38, 42));
        noComplexEventTimes_1_1_2_2.set(ComplexEventEndTime_399);
        ComplexEventTimes_NoComplexEventTimes_399.insert(ComplexEventEndTime_399.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_399(FIX::UTCTIMEONLY(15, 37, 20));
        noComplexEventTimes_1_1_2_2.set(ComplexEventStartTime_399);
        ComplexEventTimes_NoComplexEventTimes_399.insert(ComplexEventStartTime_399.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_399);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    {
      FIX50SP2::NewOrderMultileg::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_199;
      FIX::ComplexEventEndDate ComplexEventEndDate_199(FIX::UTCTIMESTAMP(0, 3, 23, 19, 3, 2002));
      noComplexEventDates_1_1_2.set(ComplexEventEndDate_199);
      ComplexEventDates_NoComplexEventDates_199.insert(ComplexEventEndDate_199.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_199(FIX::UTCTIMESTAMP(4, 41, 50, 7, 1, 2010));
      noComplexEventDates_1_1_2.set(ComplexEventStartDate_199);
      ComplexEventDates_NoComplexEventDates_199.insert(ComplexEventStartDate_199.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_199);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::NewOrderMultileg::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_400;
        FIX::ComplexEventEndTime ComplexEventEndTime_400(FIX::UTCTIMEONLY(19, 58, 12));
        noComplexEventTimes_1_2_2_0.set(ComplexEventEndTime_400);
        ComplexEventTimes_NoComplexEventTimes_400.insert(ComplexEventEndTime_400.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_400(FIX::UTCTIMEONLY(4, 40, 50));
        noComplexEventTimes_1_2_2_0.set(ComplexEventStartTime_400);
        ComplexEventTimes_NoComplexEventTimes_400.insert(ComplexEventStartTime_400.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_400);

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_0);
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
    multiset<string> EvntGrp_NoEvents_100;
    FIX::EventDate EventDate_100("LOCALMKTDATE_797664068");
    noEvents_0_0.set(EventDate_100);
    EvntGrp_NoEvents_100.insert(EventDate_100.getString());
    FIX::EventPx EventPx_100;
    EventPx_100.setString("5677074");
    noEvents_0_0.set(EventPx_100);
    EvntGrp_NoEvents_100.insert(EventPx_100.getString());
    FIX::EventText EventText_100("STRING_422883344");
    noEvents_0_0.set(EventText_100);
    EvntGrp_NoEvents_100.insert(EventText_100.getString());
    FIX::EventTime EventTime_100(FIX::UTCTIMESTAMP(12, 22, 26, 19, 3, 2011));
    noEvents_0_0.set(EventTime_100);
    EvntGrp_NoEvents_100.insert(EventTime_100.getString());
    FIX::EventType EventType_100(4);
    noEvents_0_0.set(EventType_100);
    EvntGrp_NoEvents_100.insert(EventType_100.getString());
    all_values.push_back(EvntGrp_NoEvents_100);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::NewOrderMultileg::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_101;
    FIX::EventDate EventDate_101("LOCALMKTDATE_784162121");
    noEvents_0_1.set(EventDate_101);
    EvntGrp_NoEvents_101.insert(EventDate_101.getString());
    FIX::EventPx EventPx_101;
    EventPx_101.setString("4771814");
    noEvents_0_1.set(EventPx_101);
    EvntGrp_NoEvents_101.insert(EventPx_101.getString());
    FIX::EventText EventText_101("STRING_1510803563");
    noEvents_0_1.set(EventText_101);
    EvntGrp_NoEvents_101.insert(EventText_101.getString());
    FIX::EventTime EventTime_101(FIX::UTCTIMESTAMP(8, 56, 54, 11, 1, 2016));
    noEvents_0_1.set(EventTime_101);
    EvntGrp_NoEvents_101.insert(EventTime_101.getString());
    FIX::EventType EventType_101(13);
    noEvents_0_1.set(EventType_101);
    EvntGrp_NoEvents_101.insert(EventType_101.getString());
    all_values.push_back(EvntGrp_NoEvents_101);

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::NewOrderMultileg::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_105;
    FIX::InstrumentPartyID InstrumentPartyID_105("STRING_11410629");
    noInstrumentParties_0_0.set(InstrumentPartyID_105);
    InstrumentParties_NoInstrumentParties_105.insert(InstrumentPartyID_105.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_105('3');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_105);
    InstrumentParties_NoInstrumentParties_105.insert(InstrumentPartyIDSource_105.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_105(1927430313);
    noInstrumentParties_0_0.set(InstrumentPartyRole_105);
    InstrumentParties_NoInstrumentParties_105.insert(InstrumentPartyRole_105.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_105);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::NewOrderMultileg::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_219;
      FIX::InstrumentPartySubID InstrumentPartySubID_219("STRING_1668223687");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_219);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_219.insert(InstrumentPartySubID_219.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_219(1631767866);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_219);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_219.insert(InstrumentPartySubIDType_219.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_219);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_220;
      FIX::InstrumentPartySubID InstrumentPartySubID_220("STRING_1442465882");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_220);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_220.insert(InstrumentPartySubID_220.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_220(406976709);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_220);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_220.insert(InstrumentPartySubIDType_220.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_220);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::NewOrderMultileg::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_221;
      FIX::InstrumentPartySubID InstrumentPartySubID_221("STRING_281948286");
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubID_221);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_221.insert(InstrumentPartySubID_221.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_221(2010173303);
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubIDType_221);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_221.insert(InstrumentPartySubIDType_221.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_221);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::NewOrderMultileg::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_106;
    FIX::InstrumentPartyID InstrumentPartyID_106("STRING_829860054");
    noInstrumentParties_0_1.set(InstrumentPartyID_106);
    InstrumentParties_NoInstrumentParties_106.insert(InstrumentPartyID_106.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_106('1');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_106);
    InstrumentParties_NoInstrumentParties_106.insert(InstrumentPartyIDSource_106.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_106(1606529236);
    noInstrumentParties_0_1.set(InstrumentPartyRole_106);
    InstrumentParties_NoInstrumentParties_106.insert(InstrumentPartyRole_106.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_106);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::NewOrderMultileg::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_222;
      FIX::InstrumentPartySubID InstrumentPartySubID_222("STRING_1849003667");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_222);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_222.insert(InstrumentPartySubID_222.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_222(712156795);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_222);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_222.insert(InstrumentPartySubIDType_222.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_222);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_223;
      FIX::InstrumentPartySubID InstrumentPartySubID_223("STRING_1166336578");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_223);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_223.insert(InstrumentPartySubID_223.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_223(593987049);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_223);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_223.insert(InstrumentPartySubIDType_223.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_223);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::NewOrderMultileg::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_224;
      FIX::InstrumentPartySubID InstrumentPartySubID_224("STRING_934428538");
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubID_224);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_224.insert(InstrumentPartySubID_224.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_224(1950498699);
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubIDType_224);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_224.insert(InstrumentPartySubIDType_224.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_224);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_2);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::NewOrderMultileg::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_107;
    FIX::InstrumentPartyID InstrumentPartyID_107("STRING_1071168500");
    noInstrumentParties_0_2.set(InstrumentPartyID_107);
    InstrumentParties_NoInstrumentParties_107.insert(InstrumentPartyID_107.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_107('2');
    noInstrumentParties_0_2.set(InstrumentPartyIDSource_107);
    InstrumentParties_NoInstrumentParties_107.insert(InstrumentPartyIDSource_107.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_107(1554118543);
    noInstrumentParties_0_2.set(InstrumentPartyRole_107);
    InstrumentParties_NoInstrumentParties_107.insert(InstrumentPartyRole_107.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_107);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::NewOrderMultileg::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_225;
      FIX::InstrumentPartySubID InstrumentPartySubID_225("STRING_676800130");
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubID_225);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_225.insert(InstrumentPartySubID_225.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_225(1865371057);
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubIDType_225);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_225.insert(InstrumentPartySubIDType_225.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_225);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_226;
      FIX::InstrumentPartySubID InstrumentPartySubID_226("STRING_1029991980");
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubID_226);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_226.insert(InstrumentPartySubID_226.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_226(699267442);
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubIDType_226);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_226.insert(InstrumentPartySubIDType_226.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_226);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_1);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::NewOrderMultileg::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_109;
    FIX::SecurityAltID SecurityAltID_109("STRING_1078647892");
    noSecurityAltID_0_0.set(SecurityAltID_109);
    SecAltIDGrp_NoSecurityAltID_109.insert(SecurityAltID_109.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_109("STRING_669869443");
    noSecurityAltID_0_0.set(SecurityAltIDSource_109);
    SecAltIDGrp_NoSecurityAltID_109.insert(SecurityAltIDSource_109.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_109);

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_98;
  FIX::SecurityXML SecurityXML_99("XMLDATA_60774264");
  msg.set(SecurityXML_99);
  FIX::SecurityXMLLen SecurityXMLLen_49(1390101223);
  msg.set(SecurityXMLLen_49);
  FIX::SecurityXMLSchema SecurityXMLSchema_49("STRING_449816109");
  msg.set(SecurityXMLSchema_49);
  SecurityXML_98.insert(SecurityXMLSchema_49.getString());
  all_values.push_back(SecurityXML_98);

  // LegOrdGrp
  // Group LegOrdGrp.NoLegs
  {
    FIX50SP2::NewOrderMultileg::NoLegs noLegs_0_0;
    // LegOrdGrp.NoLegs
    multiset<string> LegOrdGrp_NoLegs_3;
    FIX::LegAllocID LegAllocID_6("STRING_910841263");
    noLegs_0_0.set(LegAllocID_6);
    LegOrdGrp_NoLegs_3.insert(LegAllocID_6.getString());
    FIX::LegCoveredOrUncovered LegCoveredOrUncovered_6(2081583975);
    noLegs_0_0.set(LegCoveredOrUncovered_6);
    LegOrdGrp_NoLegs_3.insert(LegCoveredOrUncovered_6.getString());
    FIX::LegCurrencyRatio LegCurrencyRatio_6;
    LegCurrencyRatio_6.setString("8178554");
    noLegs_0_0.set(LegCurrencyRatio_6);
    LegOrdGrp_NoLegs_3.insert(LegCurrencyRatio_6.getString());
    FIX::LegDividendYield LegDividendYield_6;
    LegDividendYield_6.setString("79.720000");
    noLegs_0_0.set(LegDividendYield_6);
    LegOrdGrp_NoLegs_3.insert(LegDividendYield_6.getString());
    FIX::LegExecInst LegExecInst_6("MULTIPLECHARVALUE_216048613");
    noLegs_0_0.set(LegExecInst_6);
    LegOrdGrp_NoLegs_3.insert(LegExecInst_6.getString());
    FIX::LegOrderQty LegOrderQty_6;
    LegOrderQty_6.setString("6805451");
    noLegs_0_0.set(LegOrderQty_6);
    LegOrdGrp_NoLegs_3.insert(LegOrderQty_6.getString());
    FIX::LegPositionEffect LegPositionEffect_6('1');
    noLegs_0_0.set(LegPositionEffect_6);
    LegOrdGrp_NoLegs_3.insert(LegPositionEffect_6.getString());
    FIX::LegQty LegQty_6;
    LegQty_6.setString("18187037");
    noLegs_0_0.set(LegQty_6);
    LegOrdGrp_NoLegs_3.insert(LegQty_6.getString());
    FIX::LegRefID LegRefID_6("STRING_139590722");
    noLegs_0_0.set(LegRefID_6);
    LegOrdGrp_NoLegs_3.insert(LegRefID_6.getString());
    FIX::LegSettlCurrency LegSettlCurrency_6("GBP");
    noLegs_0_0.set(LegSettlCurrency_6);
    LegOrdGrp_NoLegs_3.insert(LegSettlCurrency_6.getString());
    FIX::LegSettlDate LegSettlDate_6("LOCALMKTDATE_851747517");
    noLegs_0_0.set(LegSettlDate_6);
    LegOrdGrp_NoLegs_3.insert(LegSettlDate_6.getString());
    FIX::LegSettlType LegSettlType_6('1');
    noLegs_0_0.set(LegSettlType_6);
    LegOrdGrp_NoLegs_3.insert(LegSettlType_6.getString());
    FIX::LegSwapType LegSwapType_6(5);
    noLegs_0_0.set(LegSwapType_6);
    LegOrdGrp_NoLegs_3.insert(LegSwapType_6.getString());
    FIX::LegVolatility LegVolatility_6;
    LegVolatility_6.setString("17861760");
    noLegs_0_0.set(LegVolatility_6);
    LegOrdGrp_NoLegs_3.insert(LegVolatility_6.getString());
    all_values.push_back(LegOrdGrp_NoLegs_3);

    // InstrumentLeg
    multiset<string> InstrumentLeg_85;
    FIX::EncodedLegIssuer EncodedLegIssuer_85("DATA_1669672636");
    noLegs_0_0.set(EncodedLegIssuer_85);
    InstrumentLeg_85.insert(EncodedLegIssuer_85.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_85(1037895635);
    noLegs_0_0.set(EncodedLegIssuerLen_85);
    InstrumentLeg_85.insert(EncodedLegIssuerLen_85.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_85("DATA_2083924509");
    noLegs_0_0.set(EncodedLegSecurityDesc_85);
    InstrumentLeg_85.insert(EncodedLegSecurityDesc_85.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_85(1076307531);
    noLegs_0_0.set(EncodedLegSecurityDescLen_85);
    InstrumentLeg_85.insert(EncodedLegSecurityDescLen_85.getString());
    FIX::LegCFICode LegCFICode_85("STRING_226629248");
    noLegs_0_0.set(LegCFICode_85);
    InstrumentLeg_85.insert(LegCFICode_85.getString());
    FIX::LegContractMultiplier LegContractMultiplier_85;
    LegContractMultiplier_85.setString("6132409");
    noLegs_0_0.set(LegContractMultiplier_85);
    InstrumentLeg_85.insert(LegContractMultiplier_85.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_85(794194940);
    noLegs_0_0.set(LegContractMultiplierUnit_85);
    InstrumentLeg_85.insert(LegContractMultiplierUnit_85.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_85("MONTHYEAR_1256621228");
    noLegs_0_0.set(LegContractSettlMonth_85);
    InstrumentLeg_85.insert(LegContractSettlMonth_85.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_85("COUNTRY_1312508434");
    noLegs_0_0.set(LegCountryOfIssue_85);
    InstrumentLeg_85.insert(LegCountryOfIssue_85.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_85("LOCALMKTDATE_843558575");
    noLegs_0_0.set(LegCouponPaymentDate_85);
    InstrumentLeg_85.insert(LegCouponPaymentDate_85.getString());
    FIX::LegCouponRate LegCouponRate_85;
    LegCouponRate_85.setString("54.720000");
    noLegs_0_0.set(LegCouponRate_85);
    InstrumentLeg_85.insert(LegCouponRate_85.getString());
    FIX::LegCreditRating LegCreditRating_85("STRING_1982377877");
    noLegs_0_0.set(LegCreditRating_85);
    InstrumentLeg_85.insert(LegCreditRating_85.getString());
    FIX::LegCurrency LegCurrency_85("USD");
    noLegs_0_0.set(LegCurrency_85);
    InstrumentLeg_85.insert(LegCurrency_85.getString());
    FIX::LegDatedDate LegDatedDate_85("LOCALMKTDATE_284710338");
    noLegs_0_0.set(LegDatedDate_85);
    InstrumentLeg_85.insert(LegDatedDate_85.getString());
    FIX::LegExerciseStyle LegExerciseStyle_85(279722435);
    noLegs_0_0.set(LegExerciseStyle_85);
    InstrumentLeg_85.insert(LegExerciseStyle_85.getString());
    FIX::LegFactor LegFactor_85;
    LegFactor_85.setString("3412443");
    noLegs_0_0.set(LegFactor_85);
    InstrumentLeg_85.insert(LegFactor_85.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_85(218810665);
    noLegs_0_0.set(LegFlowScheduleType_85);
    InstrumentLeg_85.insert(LegFlowScheduleType_85.getString());
    FIX::LegInstrRegistry LegInstrRegistry_85("STRING_1097577913");
    noLegs_0_0.set(LegInstrRegistry_85);
    InstrumentLeg_85.insert(LegInstrRegistry_85.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_85("LOCALMKTDATE_1659062283");
    noLegs_0_0.set(LegInterestAccrualDate_85);
    InstrumentLeg_85.insert(LegInterestAccrualDate_85.getString());
    FIX::LegIssueDate LegIssueDate_85("LOCALMKTDATE_434859279");
    noLegs_0_0.set(LegIssueDate_85);
    InstrumentLeg_85.insert(LegIssueDate_85.getString());
    FIX::LegIssuer LegIssuer_85("STRING_1778123047");
    noLegs_0_0.set(LegIssuer_85);
    InstrumentLeg_85.insert(LegIssuer_85.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_85("STRING_1659256662");
    noLegs_0_0.set(LegLocaleOfIssue_85);
    InstrumentLeg_85.insert(LegLocaleOfIssue_85.getString());
    FIX::LegMaturityDate LegMaturityDate_85("LOCALMKTDATE_106079345");
    noLegs_0_0.set(LegMaturityDate_85);
    InstrumentLeg_85.insert(LegMaturityDate_85.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_85("MONTHYEAR_1917713769");
    noLegs_0_0.set(LegMaturityMonthYear_85);
    InstrumentLeg_85.insert(LegMaturityMonthYear_85.getString());
    FIX::LegMaturityTime LegMaturityTime_85("TZTIMEONLY_212094020");
    noLegs_0_0.set(LegMaturityTime_85);
    InstrumentLeg_85.insert(LegMaturityTime_85.getString());
    FIX::LegOptAttribute LegOptAttribute_85('1');
    noLegs_0_0.set(LegOptAttribute_85);
    InstrumentLeg_85.insert(LegOptAttribute_85.getString());
    FIX::LegOptionRatio LegOptionRatio_85;
    LegOptionRatio_85.setString("6219776");
    noLegs_0_0.set(LegOptionRatio_85);
    InstrumentLeg_85.insert(LegOptionRatio_85.getString());
    FIX::LegPool LegPool_85("STRING_2078751605");
    noLegs_0_0.set(LegPool_85);
    InstrumentLeg_85.insert(LegPool_85.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_85("STRING_1593030214");
    noLegs_0_0.set(LegPriceUnitOfMeasure_85);
    InstrumentLeg_85.insert(LegPriceUnitOfMeasure_85.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_85;
    LegPriceUnitOfMeasureQty_85.setString("2606700");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_85);
    InstrumentLeg_85.insert(LegPriceUnitOfMeasureQty_85.getString());
    FIX::LegProduct LegProduct_85(1600940593);
    noLegs_0_0.set(LegProduct_85);
    InstrumentLeg_85.insert(LegProduct_85.getString());
    FIX::LegPutOrCall LegPutOrCall_85(483442202);
    noLegs_0_0.set(LegPutOrCall_85);
    InstrumentLeg_85.insert(LegPutOrCall_85.getString());
    FIX::LegRatioQty LegRatioQty_85;
    LegRatioQty_85.setString("1971109");
    noLegs_0_0.set(LegRatioQty_85);
    InstrumentLeg_85.insert(LegRatioQty_85.getString());
    FIX::LegRedemptionDate LegRedemptionDate_85("LOCALMKTDATE_529764476");
    noLegs_0_0.set(LegRedemptionDate_85);
    InstrumentLeg_85.insert(LegRedemptionDate_85.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_85("STRING_710071450");
    noLegs_0_0.set(LegRepoCollateralSecurityType_85);
    InstrumentLeg_85.insert(LegRepoCollateralSecurityType_85.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_85;
    LegRepurchaseRate_85.setString("19.000000");
    noLegs_0_0.set(LegRepurchaseRate_85);
    InstrumentLeg_85.insert(LegRepurchaseRate_85.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_85(1323959416);
    noLegs_0_0.set(LegRepurchaseTerm_85);
    InstrumentLeg_85.insert(LegRepurchaseTerm_85.getString());
    FIX::LegSecurityDesc LegSecurityDesc_85("STRING_1966692678");
    noLegs_0_0.set(LegSecurityDesc_85);
    InstrumentLeg_85.insert(LegSecurityDesc_85.getString());
    FIX::LegSecurityExchange LegSecurityExchange_85("EXCHANGE_2122860334");
    noLegs_0_0.set(LegSecurityExchange_85);
    InstrumentLeg_85.insert(LegSecurityExchange_85.getString());
    FIX::LegSecurityID LegSecurityID_85("STRING_20034343");
    noLegs_0_0.set(LegSecurityID_85);
    InstrumentLeg_85.insert(LegSecurityID_85.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_85("STRING_6994502");
    noLegs_0_0.set(LegSecurityIDSource_85);
    InstrumentLeg_85.insert(LegSecurityIDSource_85.getString());
    FIX::LegSecuritySubType LegSecuritySubType_85("STRING_1957754563");
    noLegs_0_0.set(LegSecuritySubType_85);
    InstrumentLeg_85.insert(LegSecuritySubType_85.getString());
    FIX::LegSecurityType LegSecurityType_85("STRING_924367182");
    noLegs_0_0.set(LegSecurityType_85);
    InstrumentLeg_85.insert(LegSecurityType_85.getString());
    FIX::LegSide LegSide_85('1');
    noLegs_0_0.set(LegSide_85);
    InstrumentLeg_85.insert(LegSide_85.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_85("STRING_94981254");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_85);
    InstrumentLeg_85.insert(LegStateOrProvinceOfIssue_85.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_85("EUR");
    noLegs_0_0.set(LegStrikeCurrency_85);
    InstrumentLeg_85.insert(LegStrikeCurrency_85.getString());
    FIX::LegStrikePrice LegStrikePrice_85;
    LegStrikePrice_85.setString("3137919");
    noLegs_0_0.set(LegStrikePrice_85);
    InstrumentLeg_85.insert(LegStrikePrice_85.getString());
    FIX::LegSymbol LegSymbol_85("STRING_154183882");
    noLegs_0_0.set(LegSymbol_85);
    InstrumentLeg_85.insert(LegSymbol_85.getString());
    FIX::LegSymbolSfx LegSymbolSfx_85("STRING_1437704145");
    noLegs_0_0.set(LegSymbolSfx_85);
    InstrumentLeg_85.insert(LegSymbolSfx_85.getString());
    FIX::LegTimeUnit LegTimeUnit_85("STRING_748651198");
    noLegs_0_0.set(LegTimeUnit_85);
    InstrumentLeg_85.insert(LegTimeUnit_85.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_85("STRING_1932306930");
    noLegs_0_0.set(LegUnitOfMeasure_85);
    InstrumentLeg_85.insert(LegUnitOfMeasure_85.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_85;
    LegUnitOfMeasureQty_85.setString("9494771");
    noLegs_0_0.set(LegUnitOfMeasureQty_85);
    InstrumentLeg_85.insert(LegUnitOfMeasureQty_85.getString());
    all_values.push_back(InstrumentLeg_85);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_168;
      FIX::LegSecurityAltID LegSecurityAltID_168("STRING_1702537051");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_168);
      LegSecAltIDGrp_NoLegSecurityAltID_168.insert(LegSecurityAltID_168.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_168("STRING_1161571179");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_168);
      LegSecAltIDGrp_NoLegSecurityAltID_168.insert(LegSecurityAltIDSource_168.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_168);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_169;
      FIX::LegSecurityAltID LegSecurityAltID_169("STRING_333549975");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_169);
      LegSecAltIDGrp_NoLegSecurityAltID_169.insert(LegSecurityAltID_169.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_169("STRING_177031042");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_169);
      LegSecAltIDGrp_NoLegSecurityAltID_169.insert(LegSecurityAltIDSource_169.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_169);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    // LegPreAllocGrp
    // Group LegPreAllocGrp.NoLegAllocs
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs noLegAllocs_0_1_0;
      // LegPreAllocGrp.NoLegAllocs
      multiset<string> LegPreAllocGrp_NoLegAllocs_16;
      FIX::LegAllocAccount LegAllocAccount_16("STRING_1926580190");
      noLegAllocs_0_1_0.set(LegAllocAccount_16);
      LegPreAllocGrp_NoLegAllocs_16.insert(LegAllocAccount_16.getString());
      FIX::LegAllocAcctIDSource LegAllocAcctIDSource_16("STRING_437701089");
      noLegAllocs_0_1_0.set(LegAllocAcctIDSource_16);
      LegPreAllocGrp_NoLegAllocs_16.insert(LegAllocAcctIDSource_16.getString());
      FIX::LegAllocQty LegAllocQty_16;
      LegAllocQty_16.setString("5462960");
      noLegAllocs_0_1_0.set(LegAllocQty_16);
      LegPreAllocGrp_NoLegAllocs_16.insert(LegAllocQty_16.getString());
      FIX::LegAllocSettlCurrency LegAllocSettlCurrency_16("JPY");
      noLegAllocs_0_1_0.set(LegAllocSettlCurrency_16);
      LegPreAllocGrp_NoLegAllocs_16.insert(LegAllocSettlCurrency_16.getString());
      FIX::LegIndividualAllocID LegIndividualAllocID_16("STRING_1076060557");
      noLegAllocs_0_1_0.set(LegIndividualAllocID_16);
      LegPreAllocGrp_NoLegAllocs_16.insert(LegIndividualAllocID_16.getString());
      all_values.push_back(LegPreAllocGrp_NoLegAllocs_16);

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_0_0_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_58;
        FIX::Nested2PartyID Nested2PartyID_58("STRING_1445163898");
        noNested2PartyIDs_0_0_2_0.set(Nested2PartyID_58);
        NestedParties2_NoNested2PartyIDs_58.insert(Nested2PartyID_58.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_58('2');
        noNested2PartyIDs_0_0_2_0.set(Nested2PartyIDSource_58);
        NestedParties2_NoNested2PartyIDs_58.insert(Nested2PartyIDSource_58.getString());
        FIX::Nested2PartyRole Nested2PartyRole_58(791819224);
        noNested2PartyIDs_0_0_2_0.set(Nested2PartyRole_58);
        NestedParties2_NoNested2PartyIDs_58.insert(Nested2PartyRole_58.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_58);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_113;
          FIX::Nested2PartySubID Nested2PartySubID_113("STRING_272570668");
          noNested2PartySubIDs_0_0_0_3_0.set(Nested2PartySubID_113);
          NstdPtys2SubGrp_NoNested2PartySubIDs_113.insert(Nested2PartySubID_113.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_113(798813726);
          noNested2PartySubIDs_0_0_0_3_0.set(Nested2PartySubIDType_113);
          NstdPtys2SubGrp_NoNested2PartySubIDs_113.insert(Nested2PartySubIDType_113.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_113);

          noNested2PartyIDs_0_0_2_0.addGroup(noNested2PartySubIDs_0_0_0_3_0);
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
      multiset<string> LegStipulations_NoLegStipulations_18;
      FIX::LegStipulationType LegStipulationType_18("STRING_1196937850");
      noLegStipulations_0_1_0.set(LegStipulationType_18);
      LegStipulations_NoLegStipulations_18.insert(LegStipulationType_18.getString());
      FIX::LegStipulationValue LegStipulationValue_18("STRING_236211277");
      noLegStipulations_0_1_0.set(LegStipulationValue_18);
      LegStipulations_NoLegStipulations_18.insert(LegStipulationValue_18.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_18);

      noLegs_0_0.addGroup(noLegStipulations_0_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoLegStipulations noLegStipulations_0_1_1;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_19;
      FIX::LegStipulationType LegStipulationType_19("STRING_1325792753");
      noLegStipulations_0_1_1.set(LegStipulationType_19);
      LegStipulations_NoLegStipulations_19.insert(LegStipulationType_19.getString());
      FIX::LegStipulationValue LegStipulationValue_19("STRING_253543819");
      noLegStipulations_0_1_1.set(LegStipulationValue_19);
      LegStipulations_NoLegStipulations_19.insert(LegStipulationValue_19.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_19);

      noLegs_0_0.addGroup(noLegStipulations_0_1_1);
    }
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoLegStipulations noLegStipulations_0_1_2;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_20;
      FIX::LegStipulationType LegStipulationType_20("STRING_14853138");
      noLegStipulations_0_1_2.set(LegStipulationType_20);
      LegStipulations_NoLegStipulations_20.insert(LegStipulationType_20.getString());
      FIX::LegStipulationValue LegStipulationValue_20("STRING_1639584673");
      noLegStipulations_0_1_2.set(LegStipulationValue_20);
      LegStipulations_NoLegStipulations_20.insert(LegStipulationValue_20.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_20);

      noLegs_0_0.addGroup(noLegStipulations_0_1_2);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_69;
      FIX::NestedPartyID NestedPartyID_69("STRING_1452557283");
      noNestedPartyIDs_0_1_0.set(NestedPartyID_69);
      NestedParties_NoNestedPartyIDs_69.insert(NestedPartyID_69.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_69('2');
      noNestedPartyIDs_0_1_0.set(NestedPartyIDSource_69);
      NestedParties_NoNestedPartyIDs_69.insert(NestedPartyIDSource_69.getString());
      FIX::NestedPartyRole NestedPartyRole_69(192550984);
      noNestedPartyIDs_0_1_0.set(NestedPartyRole_69);
      NestedParties_NoNestedPartyIDs_69.insert(NestedPartyRole_69.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_69);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_137;
        FIX::NestedPartySubID NestedPartySubID_137("STRING_1095482767");
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubID_137);
        NstdPtysSubGrp_NoNestedPartySubIDs_137.insert(NestedPartySubID_137.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_137(1895088035);
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubIDType_137);
        NstdPtysSubGrp_NoNestedPartySubIDs_137.insert(NestedPartySubIDType_137.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_137);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_138;
        FIX::NestedPartySubID NestedPartySubID_138("STRING_1416121974");
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubID_138);
        NstdPtysSubGrp_NoNestedPartySubIDs_138.insert(NestedPartySubID_138.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_138(1429032743);
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubIDType_138);
        NstdPtysSubGrp_NoNestedPartySubIDs_138.insert(NestedPartySubIDType_138.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_138);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_139;
        FIX::NestedPartySubID NestedPartySubID_139("STRING_2072119078");
        noNestedPartySubIDs_0_0_2_2.set(NestedPartySubID_139);
        NstdPtysSubGrp_NoNestedPartySubIDs_139.insert(NestedPartySubID_139.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_139(361477462);
        noNestedPartySubIDs_0_0_2_2.set(NestedPartySubIDType_139);
        NstdPtysSubGrp_NoNestedPartySubIDs_139.insert(NestedPartySubIDType_139.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_139);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_2);
      }
      noLegs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::NewOrderMultileg::NoLegs noLegs_0_1;
    // LegOrdGrp.NoLegs
    multiset<string> LegOrdGrp_NoLegs_4;
    FIX::LegAllocID LegAllocID_7("STRING_1208129285");
    noLegs_0_1.set(LegAllocID_7);
    LegOrdGrp_NoLegs_4.insert(LegAllocID_7.getString());
    FIX::LegCoveredOrUncovered LegCoveredOrUncovered_7(362336519);
    noLegs_0_1.set(LegCoveredOrUncovered_7);
    LegOrdGrp_NoLegs_4.insert(LegCoveredOrUncovered_7.getString());
    FIX::LegCurrencyRatio LegCurrencyRatio_7;
    LegCurrencyRatio_7.setString("9077735");
    noLegs_0_1.set(LegCurrencyRatio_7);
    LegOrdGrp_NoLegs_4.insert(LegCurrencyRatio_7.getString());
    FIX::LegDividendYield LegDividendYield_7;
    LegDividendYield_7.setString("80.290000");
    noLegs_0_1.set(LegDividendYield_7);
    LegOrdGrp_NoLegs_4.insert(LegDividendYield_7.getString());
    FIX::LegExecInst LegExecInst_7("MULTIPLECHARVALUE_997148517");
    noLegs_0_1.set(LegExecInst_7);
    LegOrdGrp_NoLegs_4.insert(LegExecInst_7.getString());
    FIX::LegOrderQty LegOrderQty_7;
    LegOrderQty_7.setString("19838341");
    noLegs_0_1.set(LegOrderQty_7);
    LegOrdGrp_NoLegs_4.insert(LegOrderQty_7.getString());
    FIX::LegPositionEffect LegPositionEffect_7('2');
    noLegs_0_1.set(LegPositionEffect_7);
    LegOrdGrp_NoLegs_4.insert(LegPositionEffect_7.getString());
    FIX::LegQty LegQty_7;
    LegQty_7.setString("2948287");
    noLegs_0_1.set(LegQty_7);
    LegOrdGrp_NoLegs_4.insert(LegQty_7.getString());
    FIX::LegRefID LegRefID_7("STRING_88886779");
    noLegs_0_1.set(LegRefID_7);
    LegOrdGrp_NoLegs_4.insert(LegRefID_7.getString());
    FIX::LegSettlCurrency LegSettlCurrency_7("CAN");
    noLegs_0_1.set(LegSettlCurrency_7);
    LegOrdGrp_NoLegs_4.insert(LegSettlCurrency_7.getString());
    FIX::LegSettlDate LegSettlDate_7("LOCALMKTDATE_361457447");
    noLegs_0_1.set(LegSettlDate_7);
    LegOrdGrp_NoLegs_4.insert(LegSettlDate_7.getString());
    FIX::LegSettlType LegSettlType_7('1');
    noLegs_0_1.set(LegSettlType_7);
    LegOrdGrp_NoLegs_4.insert(LegSettlType_7.getString());
    FIX::LegSwapType LegSwapType_7(5);
    noLegs_0_1.set(LegSwapType_7);
    LegOrdGrp_NoLegs_4.insert(LegSwapType_7.getString());
    FIX::LegVolatility LegVolatility_7;
    LegVolatility_7.setString("15583952");
    noLegs_0_1.set(LegVolatility_7);
    LegOrdGrp_NoLegs_4.insert(LegVolatility_7.getString());
    all_values.push_back(LegOrdGrp_NoLegs_4);

    // InstrumentLeg
    multiset<string> InstrumentLeg_86;
    FIX::EncodedLegIssuer EncodedLegIssuer_86("DATA_2122638802");
    noLegs_0_1.set(EncodedLegIssuer_86);
    InstrumentLeg_86.insert(EncodedLegIssuer_86.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_86(2124489956);
    noLegs_0_1.set(EncodedLegIssuerLen_86);
    InstrumentLeg_86.insert(EncodedLegIssuerLen_86.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_86("DATA_1811939117");
    noLegs_0_1.set(EncodedLegSecurityDesc_86);
    InstrumentLeg_86.insert(EncodedLegSecurityDesc_86.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_86(2137491941);
    noLegs_0_1.set(EncodedLegSecurityDescLen_86);
    InstrumentLeg_86.insert(EncodedLegSecurityDescLen_86.getString());
    FIX::LegCFICode LegCFICode_86("STRING_1616590981");
    noLegs_0_1.set(LegCFICode_86);
    InstrumentLeg_86.insert(LegCFICode_86.getString());
    FIX::LegContractMultiplier LegContractMultiplier_86;
    LegContractMultiplier_86.setString("721831");
    noLegs_0_1.set(LegContractMultiplier_86);
    InstrumentLeg_86.insert(LegContractMultiplier_86.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_86(1442565576);
    noLegs_0_1.set(LegContractMultiplierUnit_86);
    InstrumentLeg_86.insert(LegContractMultiplierUnit_86.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_86("MONTHYEAR_1857343205");
    noLegs_0_1.set(LegContractSettlMonth_86);
    InstrumentLeg_86.insert(LegContractSettlMonth_86.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_86("COUNTRY_264734155");
    noLegs_0_1.set(LegCountryOfIssue_86);
    InstrumentLeg_86.insert(LegCountryOfIssue_86.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_86("LOCALMKTDATE_1697116371");
    noLegs_0_1.set(LegCouponPaymentDate_86);
    InstrumentLeg_86.insert(LegCouponPaymentDate_86.getString());
    FIX::LegCouponRate LegCouponRate_86;
    LegCouponRate_86.setString("23.240000");
    noLegs_0_1.set(LegCouponRate_86);
    InstrumentLeg_86.insert(LegCouponRate_86.getString());
    FIX::LegCreditRating LegCreditRating_86("STRING_12338543");
    noLegs_0_1.set(LegCreditRating_86);
    InstrumentLeg_86.insert(LegCreditRating_86.getString());
    FIX::LegCurrency LegCurrency_86("EUR");
    noLegs_0_1.set(LegCurrency_86);
    InstrumentLeg_86.insert(LegCurrency_86.getString());
    FIX::LegDatedDate LegDatedDate_86("LOCALMKTDATE_2084457621");
    noLegs_0_1.set(LegDatedDate_86);
    InstrumentLeg_86.insert(LegDatedDate_86.getString());
    FIX::LegExerciseStyle LegExerciseStyle_86(1327232159);
    noLegs_0_1.set(LegExerciseStyle_86);
    InstrumentLeg_86.insert(LegExerciseStyle_86.getString());
    FIX::LegFactor LegFactor_86;
    LegFactor_86.setString("12950207");
    noLegs_0_1.set(LegFactor_86);
    InstrumentLeg_86.insert(LegFactor_86.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_86(299310492);
    noLegs_0_1.set(LegFlowScheduleType_86);
    InstrumentLeg_86.insert(LegFlowScheduleType_86.getString());
    FIX::LegInstrRegistry LegInstrRegistry_86("STRING_87522055");
    noLegs_0_1.set(LegInstrRegistry_86);
    InstrumentLeg_86.insert(LegInstrRegistry_86.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_86("LOCALMKTDATE_618205085");
    noLegs_0_1.set(LegInterestAccrualDate_86);
    InstrumentLeg_86.insert(LegInterestAccrualDate_86.getString());
    FIX::LegIssueDate LegIssueDate_86("LOCALMKTDATE_1296459010");
    noLegs_0_1.set(LegIssueDate_86);
    InstrumentLeg_86.insert(LegIssueDate_86.getString());
    FIX::LegIssuer LegIssuer_86("STRING_2071356157");
    noLegs_0_1.set(LegIssuer_86);
    InstrumentLeg_86.insert(LegIssuer_86.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_86("STRING_913999660");
    noLegs_0_1.set(LegLocaleOfIssue_86);
    InstrumentLeg_86.insert(LegLocaleOfIssue_86.getString());
    FIX::LegMaturityDate LegMaturityDate_86("LOCALMKTDATE_1591287777");
    noLegs_0_1.set(LegMaturityDate_86);
    InstrumentLeg_86.insert(LegMaturityDate_86.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_86("MONTHYEAR_12759288");
    noLegs_0_1.set(LegMaturityMonthYear_86);
    InstrumentLeg_86.insert(LegMaturityMonthYear_86.getString());
    FIX::LegMaturityTime LegMaturityTime_86("TZTIMEONLY_2001613459");
    noLegs_0_1.set(LegMaturityTime_86);
    InstrumentLeg_86.insert(LegMaturityTime_86.getString());
    FIX::LegOptAttribute LegOptAttribute_86('1');
    noLegs_0_1.set(LegOptAttribute_86);
    InstrumentLeg_86.insert(LegOptAttribute_86.getString());
    FIX::LegOptionRatio LegOptionRatio_86;
    LegOptionRatio_86.setString("3742167");
    noLegs_0_1.set(LegOptionRatio_86);
    InstrumentLeg_86.insert(LegOptionRatio_86.getString());
    FIX::LegPool LegPool_86("STRING_1740557337");
    noLegs_0_1.set(LegPool_86);
    InstrumentLeg_86.insert(LegPool_86.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_86("STRING_1957870684");
    noLegs_0_1.set(LegPriceUnitOfMeasure_86);
    InstrumentLeg_86.insert(LegPriceUnitOfMeasure_86.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_86;
    LegPriceUnitOfMeasureQty_86.setString("19326120");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_86);
    InstrumentLeg_86.insert(LegPriceUnitOfMeasureQty_86.getString());
    FIX::LegProduct LegProduct_86(1715712491);
    noLegs_0_1.set(LegProduct_86);
    InstrumentLeg_86.insert(LegProduct_86.getString());
    FIX::LegPutOrCall LegPutOrCall_86(1934876992);
    noLegs_0_1.set(LegPutOrCall_86);
    InstrumentLeg_86.insert(LegPutOrCall_86.getString());
    FIX::LegRatioQty LegRatioQty_86;
    LegRatioQty_86.setString("15970675");
    noLegs_0_1.set(LegRatioQty_86);
    InstrumentLeg_86.insert(LegRatioQty_86.getString());
    FIX::LegRedemptionDate LegRedemptionDate_86("LOCALMKTDATE_1705720784");
    noLegs_0_1.set(LegRedemptionDate_86);
    InstrumentLeg_86.insert(LegRedemptionDate_86.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_86("STRING_1403984326");
    noLegs_0_1.set(LegRepoCollateralSecurityType_86);
    InstrumentLeg_86.insert(LegRepoCollateralSecurityType_86.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_86;
    LegRepurchaseRate_86.setString("6.740000");
    noLegs_0_1.set(LegRepurchaseRate_86);
    InstrumentLeg_86.insert(LegRepurchaseRate_86.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_86(1000802713);
    noLegs_0_1.set(LegRepurchaseTerm_86);
    InstrumentLeg_86.insert(LegRepurchaseTerm_86.getString());
    FIX::LegSecurityDesc LegSecurityDesc_86("STRING_1113843883");
    noLegs_0_1.set(LegSecurityDesc_86);
    InstrumentLeg_86.insert(LegSecurityDesc_86.getString());
    FIX::LegSecurityExchange LegSecurityExchange_86("EXCHANGE_1933984830");
    noLegs_0_1.set(LegSecurityExchange_86);
    InstrumentLeg_86.insert(LegSecurityExchange_86.getString());
    FIX::LegSecurityID LegSecurityID_86("STRING_550435436");
    noLegs_0_1.set(LegSecurityID_86);
    InstrumentLeg_86.insert(LegSecurityID_86.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_86("STRING_1919186207");
    noLegs_0_1.set(LegSecurityIDSource_86);
    InstrumentLeg_86.insert(LegSecurityIDSource_86.getString());
    FIX::LegSecuritySubType LegSecuritySubType_86("STRING_1946323373");
    noLegs_0_1.set(LegSecuritySubType_86);
    InstrumentLeg_86.insert(LegSecuritySubType_86.getString());
    FIX::LegSecurityType LegSecurityType_86("STRING_1516190133");
    noLegs_0_1.set(LegSecurityType_86);
    InstrumentLeg_86.insert(LegSecurityType_86.getString());
    FIX::LegSide LegSide_86('2');
    noLegs_0_1.set(LegSide_86);
    InstrumentLeg_86.insert(LegSide_86.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_86("STRING_1883297346");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_86);
    InstrumentLeg_86.insert(LegStateOrProvinceOfIssue_86.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_86("CAN");
    noLegs_0_1.set(LegStrikeCurrency_86);
    InstrumentLeg_86.insert(LegStrikeCurrency_86.getString());
    FIX::LegStrikePrice LegStrikePrice_86;
    LegStrikePrice_86.setString("351241");
    noLegs_0_1.set(LegStrikePrice_86);
    InstrumentLeg_86.insert(LegStrikePrice_86.getString());
    FIX::LegSymbol LegSymbol_86("STRING_783460700");
    noLegs_0_1.set(LegSymbol_86);
    InstrumentLeg_86.insert(LegSymbol_86.getString());
    FIX::LegSymbolSfx LegSymbolSfx_86("STRING_1771819769");
    noLegs_0_1.set(LegSymbolSfx_86);
    InstrumentLeg_86.insert(LegSymbolSfx_86.getString());
    FIX::LegTimeUnit LegTimeUnit_86("STRING_1331583200");
    noLegs_0_1.set(LegTimeUnit_86);
    InstrumentLeg_86.insert(LegTimeUnit_86.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_86("STRING_707333209");
    noLegs_0_1.set(LegUnitOfMeasure_86);
    InstrumentLeg_86.insert(LegUnitOfMeasure_86.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_86;
    LegUnitOfMeasureQty_86.setString("5383357");
    noLegs_0_1.set(LegUnitOfMeasureQty_86);
    InstrumentLeg_86.insert(LegUnitOfMeasureQty_86.getString());
    all_values.push_back(InstrumentLeg_86);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_170;
      FIX::LegSecurityAltID LegSecurityAltID_170("STRING_720092497");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_170);
      LegSecAltIDGrp_NoLegSecurityAltID_170.insert(LegSecurityAltID_170.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_170("STRING_392465593");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_170);
      LegSecAltIDGrp_NoLegSecurityAltID_170.insert(LegSecurityAltIDSource_170.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_170);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_171;
      FIX::LegSecurityAltID LegSecurityAltID_171("STRING_1934560811");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltID_171);
      LegSecAltIDGrp_NoLegSecurityAltID_171.insert(LegSecurityAltID_171.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_171("STRING_1094309232");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltIDSource_171);
      LegSecAltIDGrp_NoLegSecurityAltID_171.insert(LegSecurityAltIDSource_171.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_171);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    // LegPreAllocGrp
    // Group LegPreAllocGrp.NoLegAllocs
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs noLegAllocs_1_1_0;
      // LegPreAllocGrp.NoLegAllocs
      multiset<string> LegPreAllocGrp_NoLegAllocs_17;
      FIX::LegAllocAccount LegAllocAccount_17("STRING_1744947847");
      noLegAllocs_1_1_0.set(LegAllocAccount_17);
      LegPreAllocGrp_NoLegAllocs_17.insert(LegAllocAccount_17.getString());
      FIX::LegAllocAcctIDSource LegAllocAcctIDSource_17("STRING_879437618");
      noLegAllocs_1_1_0.set(LegAllocAcctIDSource_17);
      LegPreAllocGrp_NoLegAllocs_17.insert(LegAllocAcctIDSource_17.getString());
      FIX::LegAllocQty LegAllocQty_17;
      LegAllocQty_17.setString("17012517");
      noLegAllocs_1_1_0.set(LegAllocQty_17);
      LegPreAllocGrp_NoLegAllocs_17.insert(LegAllocQty_17.getString());
      FIX::LegAllocSettlCurrency LegAllocSettlCurrency_17("EUR");
      noLegAllocs_1_1_0.set(LegAllocSettlCurrency_17);
      LegPreAllocGrp_NoLegAllocs_17.insert(LegAllocSettlCurrency_17.getString());
      FIX::LegIndividualAllocID LegIndividualAllocID_17("STRING_1259488910");
      noLegAllocs_1_1_0.set(LegIndividualAllocID_17);
      LegPreAllocGrp_NoLegAllocs_17.insert(LegIndividualAllocID_17.getString());
      all_values.push_back(LegPreAllocGrp_NoLegAllocs_17);

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_1_0_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_59;
        FIX::Nested2PartyID Nested2PartyID_59("STRING_1998272147");
        noNested2PartyIDs_1_0_2_0.set(Nested2PartyID_59);
        NestedParties2_NoNested2PartyIDs_59.insert(Nested2PartyID_59.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_59('1');
        noNested2PartyIDs_1_0_2_0.set(Nested2PartyIDSource_59);
        NestedParties2_NoNested2PartyIDs_59.insert(Nested2PartyIDSource_59.getString());
        FIX::Nested2PartyRole Nested2PartyRole_59(1902685752);
        noNested2PartyIDs_1_0_2_0.set(Nested2PartyRole_59);
        NestedParties2_NoNested2PartyIDs_59.insert(Nested2PartyRole_59.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_59);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_114;
          FIX::Nested2PartySubID Nested2PartySubID_114("STRING_663243411");
          noNested2PartySubIDs_1_0_0_3_0.set(Nested2PartySubID_114);
          NstdPtys2SubGrp_NoNested2PartySubIDs_114.insert(Nested2PartySubID_114.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_114(1674388312);
          noNested2PartySubIDs_1_0_0_3_0.set(Nested2PartySubIDType_114);
          NstdPtys2SubGrp_NoNested2PartySubIDs_114.insert(Nested2PartySubIDType_114.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_114);

          noNested2PartyIDs_1_0_2_0.addGroup(noNested2PartySubIDs_1_0_0_3_0);
        }
        noLegAllocs_1_1_0.addGroup(noNested2PartyIDs_1_0_2_0);
      }
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_1_0_2_1;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_60;
        FIX::Nested2PartyID Nested2PartyID_60("STRING_1583613054");
        noNested2PartyIDs_1_0_2_1.set(Nested2PartyID_60);
        NestedParties2_NoNested2PartyIDs_60.insert(Nested2PartyID_60.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_60('3');
        noNested2PartyIDs_1_0_2_1.set(Nested2PartyIDSource_60);
        NestedParties2_NoNested2PartyIDs_60.insert(Nested2PartyIDSource_60.getString());
        FIX::Nested2PartyRole Nested2PartyRole_60(1532982291);
        noNested2PartyIDs_1_0_2_1.set(Nested2PartyRole_60);
        NestedParties2_NoNested2PartyIDs_60.insert(Nested2PartyRole_60.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_60);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_1_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_115;
          FIX::Nested2PartySubID Nested2PartySubID_115("STRING_727888540");
          noNested2PartySubIDs_1_0_1_3_0.set(Nested2PartySubID_115);
          NstdPtys2SubGrp_NoNested2PartySubIDs_115.insert(Nested2PartySubID_115.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_115(539113326);
          noNested2PartySubIDs_1_0_1_3_0.set(Nested2PartySubIDType_115);
          NstdPtys2SubGrp_NoNested2PartySubIDs_115.insert(Nested2PartySubIDType_115.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_115);

          noNested2PartyIDs_1_0_2_1.addGroup(noNested2PartySubIDs_1_0_1_3_0);
        }
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_1_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_116;
          FIX::Nested2PartySubID Nested2PartySubID_116("STRING_1354550943");
          noNested2PartySubIDs_1_0_1_3_1.set(Nested2PartySubID_116);
          NstdPtys2SubGrp_NoNested2PartySubIDs_116.insert(Nested2PartySubID_116.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_116(1511349240);
          noNested2PartySubIDs_1_0_1_3_1.set(Nested2PartySubIDType_116);
          NstdPtys2SubGrp_NoNested2PartySubIDs_116.insert(Nested2PartySubIDType_116.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_116);

          noNested2PartyIDs_1_0_2_1.addGroup(noNested2PartySubIDs_1_0_1_3_1);
        }
        noLegAllocs_1_1_0.addGroup(noNested2PartyIDs_1_0_2_1);
      }
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_1_0_2_2;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_61;
        FIX::Nested2PartyID Nested2PartyID_61("STRING_163449447");
        noNested2PartyIDs_1_0_2_2.set(Nested2PartyID_61);
        NestedParties2_NoNested2PartyIDs_61.insert(Nested2PartyID_61.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_61('5');
        noNested2PartyIDs_1_0_2_2.set(Nested2PartyIDSource_61);
        NestedParties2_NoNested2PartyIDs_61.insert(Nested2PartyIDSource_61.getString());
        FIX::Nested2PartyRole Nested2PartyRole_61(71198801);
        noNested2PartyIDs_1_0_2_2.set(Nested2PartyRole_61);
        NestedParties2_NoNested2PartyIDs_61.insert(Nested2PartyRole_61.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_61);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_2_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_117;
          FIX::Nested2PartySubID Nested2PartySubID_117("STRING_1314037825");
          noNested2PartySubIDs_1_0_2_3_0.set(Nested2PartySubID_117);
          NstdPtys2SubGrp_NoNested2PartySubIDs_117.insert(Nested2PartySubID_117.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_117(791291298);
          noNested2PartySubIDs_1_0_2_3_0.set(Nested2PartySubIDType_117);
          NstdPtys2SubGrp_NoNested2PartySubIDs_117.insert(Nested2PartySubIDType_117.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_117);

          noNested2PartyIDs_1_0_2_2.addGroup(noNested2PartySubIDs_1_0_2_3_0);
        }
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_2_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_118;
          FIX::Nested2PartySubID Nested2PartySubID_118("STRING_1094250822");
          noNested2PartySubIDs_1_0_2_3_1.set(Nested2PartySubID_118);
          NstdPtys2SubGrp_NoNested2PartySubIDs_118.insert(Nested2PartySubID_118.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_118(1101114988);
          noNested2PartySubIDs_1_0_2_3_1.set(Nested2PartySubIDType_118);
          NstdPtys2SubGrp_NoNested2PartySubIDs_118.insert(Nested2PartySubIDType_118.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_118);

          noNested2PartyIDs_1_0_2_2.addGroup(noNested2PartySubIDs_1_0_2_3_1);
        }
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_2_3_2;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_119;
          FIX::Nested2PartySubID Nested2PartySubID_119("STRING_1885600531");
          noNested2PartySubIDs_1_0_2_3_2.set(Nested2PartySubID_119);
          NstdPtys2SubGrp_NoNested2PartySubIDs_119.insert(Nested2PartySubID_119.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_119(1079790104);
          noNested2PartySubIDs_1_0_2_3_2.set(Nested2PartySubIDType_119);
          NstdPtys2SubGrp_NoNested2PartySubIDs_119.insert(Nested2PartySubIDType_119.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_119);

          noNested2PartyIDs_1_0_2_2.addGroup(noNested2PartySubIDs_1_0_2_3_2);
        }
        noLegAllocs_1_1_0.addGroup(noNested2PartyIDs_1_0_2_2);
      }
      noLegs_0_1.addGroup(noLegAllocs_1_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs noLegAllocs_1_1_1;
      // LegPreAllocGrp.NoLegAllocs
      multiset<string> LegPreAllocGrp_NoLegAllocs_18;
      FIX::LegAllocAccount LegAllocAccount_18("STRING_698579187");
      noLegAllocs_1_1_1.set(LegAllocAccount_18);
      LegPreAllocGrp_NoLegAllocs_18.insert(LegAllocAccount_18.getString());
      FIX::LegAllocAcctIDSource LegAllocAcctIDSource_18("STRING_617554501");
      noLegAllocs_1_1_1.set(LegAllocAcctIDSource_18);
      LegPreAllocGrp_NoLegAllocs_18.insert(LegAllocAcctIDSource_18.getString());
      FIX::LegAllocQty LegAllocQty_18;
      LegAllocQty_18.setString("6335582");
      noLegAllocs_1_1_1.set(LegAllocQty_18);
      LegPreAllocGrp_NoLegAllocs_18.insert(LegAllocQty_18.getString());
      FIX::LegAllocSettlCurrency LegAllocSettlCurrency_18("GBP");
      noLegAllocs_1_1_1.set(LegAllocSettlCurrency_18);
      LegPreAllocGrp_NoLegAllocs_18.insert(LegAllocSettlCurrency_18.getString());
      FIX::LegIndividualAllocID LegIndividualAllocID_18("STRING_1893047139");
      noLegAllocs_1_1_1.set(LegIndividualAllocID_18);
      LegPreAllocGrp_NoLegAllocs_18.insert(LegIndividualAllocID_18.getString());
      all_values.push_back(LegPreAllocGrp_NoLegAllocs_18);

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_1_1_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_62;
        FIX::Nested2PartyID Nested2PartyID_62("STRING_797364473");
        noNested2PartyIDs_1_1_2_0.set(Nested2PartyID_62);
        NestedParties2_NoNested2PartyIDs_62.insert(Nested2PartyID_62.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_62('2');
        noNested2PartyIDs_1_1_2_0.set(Nested2PartyIDSource_62);
        NestedParties2_NoNested2PartyIDs_62.insert(Nested2PartyIDSource_62.getString());
        FIX::Nested2PartyRole Nested2PartyRole_62(627480705);
        noNested2PartyIDs_1_1_2_0.set(Nested2PartyRole_62);
        NestedParties2_NoNested2PartyIDs_62.insert(Nested2PartyRole_62.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_62);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_1_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_120;
          FIX::Nested2PartySubID Nested2PartySubID_120("STRING_521614877");
          noNested2PartySubIDs_1_1_0_3_0.set(Nested2PartySubID_120);
          NstdPtys2SubGrp_NoNested2PartySubIDs_120.insert(Nested2PartySubID_120.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_120(154385369);
          noNested2PartySubIDs_1_1_0_3_0.set(Nested2PartySubIDType_120);
          NstdPtys2SubGrp_NoNested2PartySubIDs_120.insert(Nested2PartySubIDType_120.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_120);

          noNested2PartyIDs_1_1_2_0.addGroup(noNested2PartySubIDs_1_1_0_3_0);
        }
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_1_0_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_121;
          FIX::Nested2PartySubID Nested2PartySubID_121("STRING_2018267209");
          noNested2PartySubIDs_1_1_0_3_1.set(Nested2PartySubID_121);
          NstdPtys2SubGrp_NoNested2PartySubIDs_121.insert(Nested2PartySubID_121.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_121(553564773);
          noNested2PartySubIDs_1_1_0_3_1.set(Nested2PartySubIDType_121);
          NstdPtys2SubGrp_NoNested2PartySubIDs_121.insert(Nested2PartySubIDType_121.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_121);

          noNested2PartyIDs_1_1_2_0.addGroup(noNested2PartySubIDs_1_1_0_3_1);
        }
        noLegAllocs_1_1_1.addGroup(noNested2PartyIDs_1_1_2_0);
      }
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_1_1_2_1;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_63;
        FIX::Nested2PartyID Nested2PartyID_63("STRING_1687367660");
        noNested2PartyIDs_1_1_2_1.set(Nested2PartyID_63);
        NestedParties2_NoNested2PartyIDs_63.insert(Nested2PartyID_63.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_63('1');
        noNested2PartyIDs_1_1_2_1.set(Nested2PartyIDSource_63);
        NestedParties2_NoNested2PartyIDs_63.insert(Nested2PartyIDSource_63.getString());
        FIX::Nested2PartyRole Nested2PartyRole_63(1281453314);
        noNested2PartyIDs_1_1_2_1.set(Nested2PartyRole_63);
        NestedParties2_NoNested2PartyIDs_63.insert(Nested2PartyRole_63.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_63);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_1_1_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_122;
          FIX::Nested2PartySubID Nested2PartySubID_122("STRING_397277609");
          noNested2PartySubIDs_1_1_1_3_0.set(Nested2PartySubID_122);
          NstdPtys2SubGrp_NoNested2PartySubIDs_122.insert(Nested2PartySubID_122.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_122(645318906);
          noNested2PartySubIDs_1_1_1_3_0.set(Nested2PartySubIDType_122);
          NstdPtys2SubGrp_NoNested2PartySubIDs_122.insert(Nested2PartySubIDType_122.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_122);

          noNested2PartyIDs_1_1_2_1.addGroup(noNested2PartySubIDs_1_1_1_3_0);
        }
        noLegAllocs_1_1_1.addGroup(noNested2PartyIDs_1_1_2_1);
      }
      noLegs_0_1.addGroup(noLegAllocs_1_1_1);
    }
    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoLegStipulations noLegStipulations_1_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_21;
      FIX::LegStipulationType LegStipulationType_21("STRING_935928104");
      noLegStipulations_1_1_0.set(LegStipulationType_21);
      LegStipulations_NoLegStipulations_21.insert(LegStipulationType_21.getString());
      FIX::LegStipulationValue LegStipulationValue_21("STRING_716517708");
      noLegStipulations_1_1_0.set(LegStipulationValue_21);
      LegStipulations_NoLegStipulations_21.insert(LegStipulationValue_21.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_21);

      noLegs_0_1.addGroup(noLegStipulations_1_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoLegStipulations noLegStipulations_1_1_1;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_22;
      FIX::LegStipulationType LegStipulationType_22("STRING_944232015");
      noLegStipulations_1_1_1.set(LegStipulationType_22);
      LegStipulations_NoLegStipulations_22.insert(LegStipulationType_22.getString());
      FIX::LegStipulationValue LegStipulationValue_22("STRING_102482282");
      noLegStipulations_1_1_1.set(LegStipulationValue_22);
      LegStipulations_NoLegStipulations_22.insert(LegStipulationValue_22.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_22);

      noLegs_0_1.addGroup(noLegStipulations_1_1_1);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoNestedPartyIDs noNestedPartyIDs_1_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_70;
      FIX::NestedPartyID NestedPartyID_70("STRING_2038482837");
      noNestedPartyIDs_1_1_0.set(NestedPartyID_70);
      NestedParties_NoNestedPartyIDs_70.insert(NestedPartyID_70.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_70('1');
      noNestedPartyIDs_1_1_0.set(NestedPartyIDSource_70);
      NestedParties_NoNestedPartyIDs_70.insert(NestedPartyIDSource_70.getString());
      FIX::NestedPartyRole NestedPartyRole_70(1245925889);
      noNestedPartyIDs_1_1_0.set(NestedPartyRole_70);
      NestedParties_NoNestedPartyIDs_70.insert(NestedPartyRole_70.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_70);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_140;
        FIX::NestedPartySubID NestedPartySubID_140("STRING_1902176458");
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubID_140);
        NstdPtysSubGrp_NoNestedPartySubIDs_140.insert(NestedPartySubID_140.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_140(1863480390);
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubIDType_140);
        NstdPtysSubGrp_NoNestedPartySubIDs_140.insert(NestedPartySubIDType_140.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_140);

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_0);
      }
      noLegs_0_1.addGroup(noNestedPartyIDs_1_1_0);
    }
    msg.addGroup(noLegs_0_1);
  }
  {
    FIX50SP2::NewOrderMultileg::NoLegs noLegs_0_2;
    // LegOrdGrp.NoLegs
    multiset<string> LegOrdGrp_NoLegs_5;
    FIX::LegAllocID LegAllocID_8("STRING_1604347522");
    noLegs_0_2.set(LegAllocID_8);
    LegOrdGrp_NoLegs_5.insert(LegAllocID_8.getString());
    FIX::LegCoveredOrUncovered LegCoveredOrUncovered_8(1985613189);
    noLegs_0_2.set(LegCoveredOrUncovered_8);
    LegOrdGrp_NoLegs_5.insert(LegCoveredOrUncovered_8.getString());
    FIX::LegCurrencyRatio LegCurrencyRatio_8;
    LegCurrencyRatio_8.setString("6625727");
    noLegs_0_2.set(LegCurrencyRatio_8);
    LegOrdGrp_NoLegs_5.insert(LegCurrencyRatio_8.getString());
    FIX::LegDividendYield LegDividendYield_8;
    LegDividendYield_8.setString("10.140000");
    noLegs_0_2.set(LegDividendYield_8);
    LegOrdGrp_NoLegs_5.insert(LegDividendYield_8.getString());
    FIX::LegExecInst LegExecInst_8("MULTIPLECHARVALUE_710408141");
    noLegs_0_2.set(LegExecInst_8);
    LegOrdGrp_NoLegs_5.insert(LegExecInst_8.getString());
    FIX::LegOrderQty LegOrderQty_8;
    LegOrderQty_8.setString("14599371");
    noLegs_0_2.set(LegOrderQty_8);
    LegOrdGrp_NoLegs_5.insert(LegOrderQty_8.getString());
    FIX::LegPositionEffect LegPositionEffect_8('1');
    noLegs_0_2.set(LegPositionEffect_8);
    LegOrdGrp_NoLegs_5.insert(LegPositionEffect_8.getString());
    FIX::LegQty LegQty_8;
    LegQty_8.setString("13378888");
    noLegs_0_2.set(LegQty_8);
    LegOrdGrp_NoLegs_5.insert(LegQty_8.getString());
    FIX::LegRefID LegRefID_8("STRING_1894591345");
    noLegs_0_2.set(LegRefID_8);
    LegOrdGrp_NoLegs_5.insert(LegRefID_8.getString());
    FIX::LegSettlCurrency LegSettlCurrency_8("EUR");
    noLegs_0_2.set(LegSettlCurrency_8);
    LegOrdGrp_NoLegs_5.insert(LegSettlCurrency_8.getString());
    FIX::LegSettlDate LegSettlDate_8("LOCALMKTDATE_1765374906");
    noLegs_0_2.set(LegSettlDate_8);
    LegOrdGrp_NoLegs_5.insert(LegSettlDate_8.getString());
    FIX::LegSettlType LegSettlType_8('1');
    noLegs_0_2.set(LegSettlType_8);
    LegOrdGrp_NoLegs_5.insert(LegSettlType_8.getString());
    FIX::LegSwapType LegSwapType_8(5);
    noLegs_0_2.set(LegSwapType_8);
    LegOrdGrp_NoLegs_5.insert(LegSwapType_8.getString());
    FIX::LegVolatility LegVolatility_8;
    LegVolatility_8.setString("8081015");
    noLegs_0_2.set(LegVolatility_8);
    LegOrdGrp_NoLegs_5.insert(LegVolatility_8.getString());
    all_values.push_back(LegOrdGrp_NoLegs_5);

    // InstrumentLeg
    multiset<string> InstrumentLeg_87;
    FIX::EncodedLegIssuer EncodedLegIssuer_87("DATA_1417431797");
    noLegs_0_2.set(EncodedLegIssuer_87);
    InstrumentLeg_87.insert(EncodedLegIssuer_87.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_87(1111155566);
    noLegs_0_2.set(EncodedLegIssuerLen_87);
    InstrumentLeg_87.insert(EncodedLegIssuerLen_87.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_87("DATA_1205379181");
    noLegs_0_2.set(EncodedLegSecurityDesc_87);
    InstrumentLeg_87.insert(EncodedLegSecurityDesc_87.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_87(2062750704);
    noLegs_0_2.set(EncodedLegSecurityDescLen_87);
    InstrumentLeg_87.insert(EncodedLegSecurityDescLen_87.getString());
    FIX::LegCFICode LegCFICode_87("STRING_1353602352");
    noLegs_0_2.set(LegCFICode_87);
    InstrumentLeg_87.insert(LegCFICode_87.getString());
    FIX::LegContractMultiplier LegContractMultiplier_87;
    LegContractMultiplier_87.setString("21413072");
    noLegs_0_2.set(LegContractMultiplier_87);
    InstrumentLeg_87.insert(LegContractMultiplier_87.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_87(631784764);
    noLegs_0_2.set(LegContractMultiplierUnit_87);
    InstrumentLeg_87.insert(LegContractMultiplierUnit_87.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_87("MONTHYEAR_150350719");
    noLegs_0_2.set(LegContractSettlMonth_87);
    InstrumentLeg_87.insert(LegContractSettlMonth_87.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_87("COUNTRY_96305920");
    noLegs_0_2.set(LegCountryOfIssue_87);
    InstrumentLeg_87.insert(LegCountryOfIssue_87.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_87("LOCALMKTDATE_2139593770");
    noLegs_0_2.set(LegCouponPaymentDate_87);
    InstrumentLeg_87.insert(LegCouponPaymentDate_87.getString());
    FIX::LegCouponRate LegCouponRate_87;
    LegCouponRate_87.setString("99.080000");
    noLegs_0_2.set(LegCouponRate_87);
    InstrumentLeg_87.insert(LegCouponRate_87.getString());
    FIX::LegCreditRating LegCreditRating_87("STRING_1299903190");
    noLegs_0_2.set(LegCreditRating_87);
    InstrumentLeg_87.insert(LegCreditRating_87.getString());
    FIX::LegCurrency LegCurrency_87("CAN");
    noLegs_0_2.set(LegCurrency_87);
    InstrumentLeg_87.insert(LegCurrency_87.getString());
    FIX::LegDatedDate LegDatedDate_87("LOCALMKTDATE_1054596000");
    noLegs_0_2.set(LegDatedDate_87);
    InstrumentLeg_87.insert(LegDatedDate_87.getString());
    FIX::LegExerciseStyle LegExerciseStyle_87(954032754);
    noLegs_0_2.set(LegExerciseStyle_87);
    InstrumentLeg_87.insert(LegExerciseStyle_87.getString());
    FIX::LegFactor LegFactor_87;
    LegFactor_87.setString("4690030");
    noLegs_0_2.set(LegFactor_87);
    InstrumentLeg_87.insert(LegFactor_87.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_87(892725541);
    noLegs_0_2.set(LegFlowScheduleType_87);
    InstrumentLeg_87.insert(LegFlowScheduleType_87.getString());
    FIX::LegInstrRegistry LegInstrRegistry_87("STRING_1616605471");
    noLegs_0_2.set(LegInstrRegistry_87);
    InstrumentLeg_87.insert(LegInstrRegistry_87.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_87("LOCALMKTDATE_1818914089");
    noLegs_0_2.set(LegInterestAccrualDate_87);
    InstrumentLeg_87.insert(LegInterestAccrualDate_87.getString());
    FIX::LegIssueDate LegIssueDate_87("LOCALMKTDATE_1603133683");
    noLegs_0_2.set(LegIssueDate_87);
    InstrumentLeg_87.insert(LegIssueDate_87.getString());
    FIX::LegIssuer LegIssuer_87("STRING_929059013");
    noLegs_0_2.set(LegIssuer_87);
    InstrumentLeg_87.insert(LegIssuer_87.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_87("STRING_879712922");
    noLegs_0_2.set(LegLocaleOfIssue_87);
    InstrumentLeg_87.insert(LegLocaleOfIssue_87.getString());
    FIX::LegMaturityDate LegMaturityDate_87("LOCALMKTDATE_793538881");
    noLegs_0_2.set(LegMaturityDate_87);
    InstrumentLeg_87.insert(LegMaturityDate_87.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_87("MONTHYEAR_676166710");
    noLegs_0_2.set(LegMaturityMonthYear_87);
    InstrumentLeg_87.insert(LegMaturityMonthYear_87.getString());
    FIX::LegMaturityTime LegMaturityTime_87("TZTIMEONLY_462126632");
    noLegs_0_2.set(LegMaturityTime_87);
    InstrumentLeg_87.insert(LegMaturityTime_87.getString());
    FIX::LegOptAttribute LegOptAttribute_87('1');
    noLegs_0_2.set(LegOptAttribute_87);
    InstrumentLeg_87.insert(LegOptAttribute_87.getString());
    FIX::LegOptionRatio LegOptionRatio_87;
    LegOptionRatio_87.setString("2940579");
    noLegs_0_2.set(LegOptionRatio_87);
    InstrumentLeg_87.insert(LegOptionRatio_87.getString());
    FIX::LegPool LegPool_87("STRING_598105115");
    noLegs_0_2.set(LegPool_87);
    InstrumentLeg_87.insert(LegPool_87.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_87("STRING_1170487676");
    noLegs_0_2.set(LegPriceUnitOfMeasure_87);
    InstrumentLeg_87.insert(LegPriceUnitOfMeasure_87.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_87;
    LegPriceUnitOfMeasureQty_87.setString("11021595");
    noLegs_0_2.set(LegPriceUnitOfMeasureQty_87);
    InstrumentLeg_87.insert(LegPriceUnitOfMeasureQty_87.getString());
    FIX::LegProduct LegProduct_87(2015536913);
    noLegs_0_2.set(LegProduct_87);
    InstrumentLeg_87.insert(LegProduct_87.getString());
    FIX::LegPutOrCall LegPutOrCall_87(134159594);
    noLegs_0_2.set(LegPutOrCall_87);
    InstrumentLeg_87.insert(LegPutOrCall_87.getString());
    FIX::LegRatioQty LegRatioQty_87;
    LegRatioQty_87.setString("1600550");
    noLegs_0_2.set(LegRatioQty_87);
    InstrumentLeg_87.insert(LegRatioQty_87.getString());
    FIX::LegRedemptionDate LegRedemptionDate_87("LOCALMKTDATE_1930803969");
    noLegs_0_2.set(LegRedemptionDate_87);
    InstrumentLeg_87.insert(LegRedemptionDate_87.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_87("STRING_1487761946");
    noLegs_0_2.set(LegRepoCollateralSecurityType_87);
    InstrumentLeg_87.insert(LegRepoCollateralSecurityType_87.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_87;
    LegRepurchaseRate_87.setString("87.120000");
    noLegs_0_2.set(LegRepurchaseRate_87);
    InstrumentLeg_87.insert(LegRepurchaseRate_87.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_87(415105085);
    noLegs_0_2.set(LegRepurchaseTerm_87);
    InstrumentLeg_87.insert(LegRepurchaseTerm_87.getString());
    FIX::LegSecurityDesc LegSecurityDesc_87("STRING_1638112665");
    noLegs_0_2.set(LegSecurityDesc_87);
    InstrumentLeg_87.insert(LegSecurityDesc_87.getString());
    FIX::LegSecurityExchange LegSecurityExchange_87("EXCHANGE_250184632");
    noLegs_0_2.set(LegSecurityExchange_87);
    InstrumentLeg_87.insert(LegSecurityExchange_87.getString());
    FIX::LegSecurityID LegSecurityID_87("STRING_407215207");
    noLegs_0_2.set(LegSecurityID_87);
    InstrumentLeg_87.insert(LegSecurityID_87.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_87("STRING_1679462573");
    noLegs_0_2.set(LegSecurityIDSource_87);
    InstrumentLeg_87.insert(LegSecurityIDSource_87.getString());
    FIX::LegSecuritySubType LegSecuritySubType_87("STRING_1550087823");
    noLegs_0_2.set(LegSecuritySubType_87);
    InstrumentLeg_87.insert(LegSecuritySubType_87.getString());
    FIX::LegSecurityType LegSecurityType_87("STRING_1645251219");
    noLegs_0_2.set(LegSecurityType_87);
    InstrumentLeg_87.insert(LegSecurityType_87.getString());
    FIX::LegSide LegSide_87('5');
    noLegs_0_2.set(LegSide_87);
    InstrumentLeg_87.insert(LegSide_87.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_87("STRING_457200175");
    noLegs_0_2.set(LegStateOrProvinceOfIssue_87);
    InstrumentLeg_87.insert(LegStateOrProvinceOfIssue_87.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_87("JPY");
    noLegs_0_2.set(LegStrikeCurrency_87);
    InstrumentLeg_87.insert(LegStrikeCurrency_87.getString());
    FIX::LegStrikePrice LegStrikePrice_87;
    LegStrikePrice_87.setString("13499257");
    noLegs_0_2.set(LegStrikePrice_87);
    InstrumentLeg_87.insert(LegStrikePrice_87.getString());
    FIX::LegSymbol LegSymbol_87("STRING_2068405797");
    noLegs_0_2.set(LegSymbol_87);
    InstrumentLeg_87.insert(LegSymbol_87.getString());
    FIX::LegSymbolSfx LegSymbolSfx_87("STRING_684551643");
    noLegs_0_2.set(LegSymbolSfx_87);
    InstrumentLeg_87.insert(LegSymbolSfx_87.getString());
    FIX::LegTimeUnit LegTimeUnit_87("STRING_805575752");
    noLegs_0_2.set(LegTimeUnit_87);
    InstrumentLeg_87.insert(LegTimeUnit_87.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_87("STRING_849981162");
    noLegs_0_2.set(LegUnitOfMeasure_87);
    InstrumentLeg_87.insert(LegUnitOfMeasure_87.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_87;
    LegUnitOfMeasureQty_87.setString("15642645");
    noLegs_0_2.set(LegUnitOfMeasureQty_87);
    InstrumentLeg_87.insert(LegUnitOfMeasureQty_87.getString());
    all_values.push_back(InstrumentLeg_87);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_172;
      FIX::LegSecurityAltID LegSecurityAltID_172("STRING_1526147872");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltID_172);
      LegSecAltIDGrp_NoLegSecurityAltID_172.insert(LegSecurityAltID_172.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_172("STRING_2026391197");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltIDSource_172);
      LegSecAltIDGrp_NoLegSecurityAltID_172.insert(LegSecurityAltIDSource_172.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_172);

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_0);
    }
    // LegPreAllocGrp
    // Group LegPreAllocGrp.NoLegAllocs
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs noLegAllocs_2_1_0;
      // LegPreAllocGrp.NoLegAllocs
      multiset<string> LegPreAllocGrp_NoLegAllocs_19;
      FIX::LegAllocAccount LegAllocAccount_19("STRING_1820205840");
      noLegAllocs_2_1_0.set(LegAllocAccount_19);
      LegPreAllocGrp_NoLegAllocs_19.insert(LegAllocAccount_19.getString());
      FIX::LegAllocAcctIDSource LegAllocAcctIDSource_19("STRING_477012665");
      noLegAllocs_2_1_0.set(LegAllocAcctIDSource_19);
      LegPreAllocGrp_NoLegAllocs_19.insert(LegAllocAcctIDSource_19.getString());
      FIX::LegAllocQty LegAllocQty_19;
      LegAllocQty_19.setString("7604481");
      noLegAllocs_2_1_0.set(LegAllocQty_19);
      LegPreAllocGrp_NoLegAllocs_19.insert(LegAllocQty_19.getString());
      FIX::LegAllocSettlCurrency LegAllocSettlCurrency_19("GBP");
      noLegAllocs_2_1_0.set(LegAllocSettlCurrency_19);
      LegPreAllocGrp_NoLegAllocs_19.insert(LegAllocSettlCurrency_19.getString());
      FIX::LegIndividualAllocID LegIndividualAllocID_19("STRING_894607705");
      noLegAllocs_2_1_0.set(LegIndividualAllocID_19);
      LegPreAllocGrp_NoLegAllocs_19.insert(LegIndividualAllocID_19.getString());
      all_values.push_back(LegPreAllocGrp_NoLegAllocs_19);

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_2_0_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_64;
        FIX::Nested2PartyID Nested2PartyID_64("STRING_128386251");
        noNested2PartyIDs_2_0_2_0.set(Nested2PartyID_64);
        NestedParties2_NoNested2PartyIDs_64.insert(Nested2PartyID_64.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_64('2');
        noNested2PartyIDs_2_0_2_0.set(Nested2PartyIDSource_64);
        NestedParties2_NoNested2PartyIDs_64.insert(Nested2PartyIDSource_64.getString());
        FIX::Nested2PartyRole Nested2PartyRole_64(1088815520);
        noNested2PartyIDs_2_0_2_0.set(Nested2PartyRole_64);
        NestedParties2_NoNested2PartyIDs_64.insert(Nested2PartyRole_64.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_64);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_0_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_123;
          FIX::Nested2PartySubID Nested2PartySubID_123("STRING_1872998669");
          noNested2PartySubIDs_2_0_0_3_0.set(Nested2PartySubID_123);
          NstdPtys2SubGrp_NoNested2PartySubIDs_123.insert(Nested2PartySubID_123.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_123(1339000153);
          noNested2PartySubIDs_2_0_0_3_0.set(Nested2PartySubIDType_123);
          NstdPtys2SubGrp_NoNested2PartySubIDs_123.insert(Nested2PartySubIDType_123.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_123);

          noNested2PartyIDs_2_0_2_0.addGroup(noNested2PartySubIDs_2_0_0_3_0);
        }
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_0_0_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_124;
          FIX::Nested2PartySubID Nested2PartySubID_124("STRING_950706543");
          noNested2PartySubIDs_2_0_0_3_1.set(Nested2PartySubID_124);
          NstdPtys2SubGrp_NoNested2PartySubIDs_124.insert(Nested2PartySubID_124.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_124(1404977595);
          noNested2PartySubIDs_2_0_0_3_1.set(Nested2PartySubIDType_124);
          NstdPtys2SubGrp_NoNested2PartySubIDs_124.insert(Nested2PartySubIDType_124.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_124);

          noNested2PartyIDs_2_0_2_0.addGroup(noNested2PartySubIDs_2_0_0_3_1);
        }
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_0_0_3_2;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_125;
          FIX::Nested2PartySubID Nested2PartySubID_125("STRING_741604328");
          noNested2PartySubIDs_2_0_0_3_2.set(Nested2PartySubID_125);
          NstdPtys2SubGrp_NoNested2PartySubIDs_125.insert(Nested2PartySubID_125.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_125(448474115);
          noNested2PartySubIDs_2_0_0_3_2.set(Nested2PartySubIDType_125);
          NstdPtys2SubGrp_NoNested2PartySubIDs_125.insert(Nested2PartySubIDType_125.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_125);

          noNested2PartyIDs_2_0_2_0.addGroup(noNested2PartySubIDs_2_0_0_3_2);
        }
        noLegAllocs_2_1_0.addGroup(noNested2PartyIDs_2_0_2_0);
      }
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_2_0_2_1;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_65;
        FIX::Nested2PartyID Nested2PartyID_65("STRING_1949095721");
        noNested2PartyIDs_2_0_2_1.set(Nested2PartyID_65);
        NestedParties2_NoNested2PartyIDs_65.insert(Nested2PartyID_65.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_65('1');
        noNested2PartyIDs_2_0_2_1.set(Nested2PartyIDSource_65);
        NestedParties2_NoNested2PartyIDs_65.insert(Nested2PartyIDSource_65.getString());
        FIX::Nested2PartyRole Nested2PartyRole_65(900274441);
        noNested2PartyIDs_2_0_2_1.set(Nested2PartyRole_65);
        NestedParties2_NoNested2PartyIDs_65.insert(Nested2PartyRole_65.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_65);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_0_1_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_126;
          FIX::Nested2PartySubID Nested2PartySubID_126("STRING_401246572");
          noNested2PartySubIDs_2_0_1_3_0.set(Nested2PartySubID_126);
          NstdPtys2SubGrp_NoNested2PartySubIDs_126.insert(Nested2PartySubID_126.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_126(821196590);
          noNested2PartySubIDs_2_0_1_3_0.set(Nested2PartySubIDType_126);
          NstdPtys2SubGrp_NoNested2PartySubIDs_126.insert(Nested2PartySubIDType_126.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_126);

          noNested2PartyIDs_2_0_2_1.addGroup(noNested2PartySubIDs_2_0_1_3_0);
        }
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_0_1_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_127;
          FIX::Nested2PartySubID Nested2PartySubID_127("STRING_1499284919");
          noNested2PartySubIDs_2_0_1_3_1.set(Nested2PartySubID_127);
          NstdPtys2SubGrp_NoNested2PartySubIDs_127.insert(Nested2PartySubID_127.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_127(1206822324);
          noNested2PartySubIDs_2_0_1_3_1.set(Nested2PartySubIDType_127);
          NstdPtys2SubGrp_NoNested2PartySubIDs_127.insert(Nested2PartySubIDType_127.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_127);

          noNested2PartyIDs_2_0_2_1.addGroup(noNested2PartySubIDs_2_0_1_3_1);
        }
        noLegAllocs_2_1_0.addGroup(noNested2PartyIDs_2_0_2_1);
      }
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_2_0_2_2;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_66;
        FIX::Nested2PartyID Nested2PartyID_66("STRING_1671177752");
        noNested2PartyIDs_2_0_2_2.set(Nested2PartyID_66);
        NestedParties2_NoNested2PartyIDs_66.insert(Nested2PartyID_66.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_66('9');
        noNested2PartyIDs_2_0_2_2.set(Nested2PartyIDSource_66);
        NestedParties2_NoNested2PartyIDs_66.insert(Nested2PartyIDSource_66.getString());
        FIX::Nested2PartyRole Nested2PartyRole_66(658453310);
        noNested2PartyIDs_2_0_2_2.set(Nested2PartyRole_66);
        NestedParties2_NoNested2PartyIDs_66.insert(Nested2PartyRole_66.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_66);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_0_2_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_128;
          FIX::Nested2PartySubID Nested2PartySubID_128("STRING_794973386");
          noNested2PartySubIDs_2_0_2_3_0.set(Nested2PartySubID_128);
          NstdPtys2SubGrp_NoNested2PartySubIDs_128.insert(Nested2PartySubID_128.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_128(248413744);
          noNested2PartySubIDs_2_0_2_3_0.set(Nested2PartySubIDType_128);
          NstdPtys2SubGrp_NoNested2PartySubIDs_128.insert(Nested2PartySubIDType_128.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_128);

          noNested2PartyIDs_2_0_2_2.addGroup(noNested2PartySubIDs_2_0_2_3_0);
        }
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_0_2_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_129;
          FIX::Nested2PartySubID Nested2PartySubID_129("STRING_722564168");
          noNested2PartySubIDs_2_0_2_3_1.set(Nested2PartySubID_129);
          NstdPtys2SubGrp_NoNested2PartySubIDs_129.insert(Nested2PartySubID_129.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_129(1271986051);
          noNested2PartySubIDs_2_0_2_3_1.set(Nested2PartySubIDType_129);
          NstdPtys2SubGrp_NoNested2PartySubIDs_129.insert(Nested2PartySubIDType_129.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_129);

          noNested2PartyIDs_2_0_2_2.addGroup(noNested2PartySubIDs_2_0_2_3_1);
        }
        noLegAllocs_2_1_0.addGroup(noNested2PartyIDs_2_0_2_2);
      }
      noLegs_0_2.addGroup(noLegAllocs_2_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs noLegAllocs_2_1_1;
      // LegPreAllocGrp.NoLegAllocs
      multiset<string> LegPreAllocGrp_NoLegAllocs_20;
      FIX::LegAllocAccount LegAllocAccount_20("STRING_1008861855");
      noLegAllocs_2_1_1.set(LegAllocAccount_20);
      LegPreAllocGrp_NoLegAllocs_20.insert(LegAllocAccount_20.getString());
      FIX::LegAllocAcctIDSource LegAllocAcctIDSource_20("STRING_1497445902");
      noLegAllocs_2_1_1.set(LegAllocAcctIDSource_20);
      LegPreAllocGrp_NoLegAllocs_20.insert(LegAllocAcctIDSource_20.getString());
      FIX::LegAllocQty LegAllocQty_20;
      LegAllocQty_20.setString("16170519");
      noLegAllocs_2_1_1.set(LegAllocQty_20);
      LegPreAllocGrp_NoLegAllocs_20.insert(LegAllocQty_20.getString());
      FIX::LegAllocSettlCurrency LegAllocSettlCurrency_20("USD");
      noLegAllocs_2_1_1.set(LegAllocSettlCurrency_20);
      LegPreAllocGrp_NoLegAllocs_20.insert(LegAllocSettlCurrency_20.getString());
      FIX::LegIndividualAllocID LegIndividualAllocID_20("STRING_1745438232");
      noLegAllocs_2_1_1.set(LegIndividualAllocID_20);
      LegPreAllocGrp_NoLegAllocs_20.insert(LegIndividualAllocID_20.getString());
      all_values.push_back(LegPreAllocGrp_NoLegAllocs_20);

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_2_1_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_67;
        FIX::Nested2PartyID Nested2PartyID_67("STRING_1373714582");
        noNested2PartyIDs_2_1_2_0.set(Nested2PartyID_67);
        NestedParties2_NoNested2PartyIDs_67.insert(Nested2PartyID_67.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_67('1');
        noNested2PartyIDs_2_1_2_0.set(Nested2PartyIDSource_67);
        NestedParties2_NoNested2PartyIDs_67.insert(Nested2PartyIDSource_67.getString());
        FIX::Nested2PartyRole Nested2PartyRole_67(1863870586);
        noNested2PartyIDs_2_1_2_0.set(Nested2PartyRole_67);
        NestedParties2_NoNested2PartyIDs_67.insert(Nested2PartyRole_67.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_67);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_1_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_130;
          FIX::Nested2PartySubID Nested2PartySubID_130("STRING_1092152463");
          noNested2PartySubIDs_2_1_0_3_0.set(Nested2PartySubID_130);
          NstdPtys2SubGrp_NoNested2PartySubIDs_130.insert(Nested2PartySubID_130.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_130(1121364533);
          noNested2PartySubIDs_2_1_0_3_0.set(Nested2PartySubIDType_130);
          NstdPtys2SubGrp_NoNested2PartySubIDs_130.insert(Nested2PartySubIDType_130.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_130);

          noNested2PartyIDs_2_1_2_0.addGroup(noNested2PartySubIDs_2_1_0_3_0);
        }
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_1_0_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_131;
          FIX::Nested2PartySubID Nested2PartySubID_131("STRING_1306835415");
          noNested2PartySubIDs_2_1_0_3_1.set(Nested2PartySubID_131);
          NstdPtys2SubGrp_NoNested2PartySubIDs_131.insert(Nested2PartySubID_131.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_131(1540626578);
          noNested2PartySubIDs_2_1_0_3_1.set(Nested2PartySubIDType_131);
          NstdPtys2SubGrp_NoNested2PartySubIDs_131.insert(Nested2PartySubIDType_131.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_131);

          noNested2PartyIDs_2_1_2_0.addGroup(noNested2PartySubIDs_2_1_0_3_1);
        }
        noLegAllocs_2_1_1.addGroup(noNested2PartyIDs_2_1_2_0);
      }
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_2_1_2_1;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_68;
        FIX::Nested2PartyID Nested2PartyID_68("STRING_922976607");
        noNested2PartyIDs_2_1_2_1.set(Nested2PartyID_68);
        NestedParties2_NoNested2PartyIDs_68.insert(Nested2PartyID_68.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_68('3');
        noNested2PartyIDs_2_1_2_1.set(Nested2PartyIDSource_68);
        NestedParties2_NoNested2PartyIDs_68.insert(Nested2PartyIDSource_68.getString());
        FIX::Nested2PartyRole Nested2PartyRole_68(293417371);
        noNested2PartyIDs_2_1_2_1.set(Nested2PartyRole_68);
        NestedParties2_NoNested2PartyIDs_68.insert(Nested2PartyRole_68.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_68);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_1_1_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_132;
          FIX::Nested2PartySubID Nested2PartySubID_132("STRING_759402843");
          noNested2PartySubIDs_2_1_1_3_0.set(Nested2PartySubID_132);
          NstdPtys2SubGrp_NoNested2PartySubIDs_132.insert(Nested2PartySubID_132.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_132(1114613961);
          noNested2PartySubIDs_2_1_1_3_0.set(Nested2PartySubIDType_132);
          NstdPtys2SubGrp_NoNested2PartySubIDs_132.insert(Nested2PartySubIDType_132.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_132);

          noNested2PartyIDs_2_1_2_1.addGroup(noNested2PartySubIDs_2_1_1_3_0);
        }
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_1_1_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_133;
          FIX::Nested2PartySubID Nested2PartySubID_133("STRING_1089511153");
          noNested2PartySubIDs_2_1_1_3_1.set(Nested2PartySubID_133);
          NstdPtys2SubGrp_NoNested2PartySubIDs_133.insert(Nested2PartySubID_133.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_133(1966225168);
          noNested2PartySubIDs_2_1_1_3_1.set(Nested2PartySubIDType_133);
          NstdPtys2SubGrp_NoNested2PartySubIDs_133.insert(Nested2PartySubIDType_133.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_133);

          noNested2PartyIDs_2_1_2_1.addGroup(noNested2PartySubIDs_2_1_1_3_1);
        }
        noLegAllocs_2_1_1.addGroup(noNested2PartyIDs_2_1_2_1);
      }
      noLegs_0_2.addGroup(noLegAllocs_2_1_1);
    }
    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoLegStipulations noLegStipulations_2_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_23;
      FIX::LegStipulationType LegStipulationType_23("STRING_2005576990");
      noLegStipulations_2_1_0.set(LegStipulationType_23);
      LegStipulations_NoLegStipulations_23.insert(LegStipulationType_23.getString());
      FIX::LegStipulationValue LegStipulationValue_23("STRING_477194830");
      noLegStipulations_2_1_0.set(LegStipulationValue_23);
      LegStipulations_NoLegStipulations_23.insert(LegStipulationValue_23.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_23);

      noLegs_0_2.addGroup(noLegStipulations_2_1_0);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoNestedPartyIDs noNestedPartyIDs_2_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_71;
      FIX::NestedPartyID NestedPartyID_71("STRING_653066728");
      noNestedPartyIDs_2_1_0.set(NestedPartyID_71);
      NestedParties_NoNestedPartyIDs_71.insert(NestedPartyID_71.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_71('7');
      noNestedPartyIDs_2_1_0.set(NestedPartyIDSource_71);
      NestedParties_NoNestedPartyIDs_71.insert(NestedPartyIDSource_71.getString());
      FIX::NestedPartyRole NestedPartyRole_71(263230562);
      noNestedPartyIDs_2_1_0.set(NestedPartyRole_71);
      NestedParties_NoNestedPartyIDs_71.insert(NestedPartyRole_71.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_71);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_141;
        FIX::NestedPartySubID NestedPartySubID_141("STRING_1734470430");
        noNestedPartySubIDs_2_0_2_0.set(NestedPartySubID_141);
        NstdPtysSubGrp_NoNestedPartySubIDs_141.insert(NestedPartySubID_141.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_141(1760676464);
        noNestedPartySubIDs_2_0_2_0.set(NestedPartySubIDType_141);
        NstdPtysSubGrp_NoNestedPartySubIDs_141.insert(NestedPartySubIDType_141.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_141);

        noNestedPartyIDs_2_1_0.addGroup(noNestedPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_142;
        FIX::NestedPartySubID NestedPartySubID_142("STRING_1394621112");
        noNestedPartySubIDs_2_0_2_1.set(NestedPartySubID_142);
        NstdPtysSubGrp_NoNestedPartySubIDs_142.insert(NestedPartySubID_142.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_142(1490456343);
        noNestedPartySubIDs_2_0_2_1.set(NestedPartySubIDType_142);
        NstdPtysSubGrp_NoNestedPartySubIDs_142.insert(NestedPartySubIDType_142.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_142);

        noNestedPartyIDs_2_1_0.addGroup(noNestedPartySubIDs_2_0_2_1);
      }
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_143;
        FIX::NestedPartySubID NestedPartySubID_143("STRING_2045575526");
        noNestedPartySubIDs_2_0_2_2.set(NestedPartySubID_143);
        NstdPtysSubGrp_NoNestedPartySubIDs_143.insert(NestedPartySubID_143.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_143(992575696);
        noNestedPartySubIDs_2_0_2_2.set(NestedPartySubIDType_143);
        NstdPtysSubGrp_NoNestedPartySubIDs_143.insert(NestedPartySubIDType_143.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_143);

        noNestedPartyIDs_2_1_0.addGroup(noNestedPartySubIDs_2_0_2_2);
      }
      noLegs_0_2.addGroup(noNestedPartyIDs_2_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoNestedPartyIDs noNestedPartyIDs_2_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_72;
      FIX::NestedPartyID NestedPartyID_72("STRING_1481328260");
      noNestedPartyIDs_2_1_1.set(NestedPartyID_72);
      NestedParties_NoNestedPartyIDs_72.insert(NestedPartyID_72.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_72('1');
      noNestedPartyIDs_2_1_1.set(NestedPartyIDSource_72);
      NestedParties_NoNestedPartyIDs_72.insert(NestedPartyIDSource_72.getString());
      FIX::NestedPartyRole NestedPartyRole_72(1134021616);
      noNestedPartyIDs_2_1_1.set(NestedPartyRole_72);
      NestedParties_NoNestedPartyIDs_72.insert(NestedPartyRole_72.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_72);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_144;
        FIX::NestedPartySubID NestedPartySubID_144("STRING_1837037548");
        noNestedPartySubIDs_2_1_2_0.set(NestedPartySubID_144);
        NstdPtysSubGrp_NoNestedPartySubIDs_144.insert(NestedPartySubID_144.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_144(78690431);
        noNestedPartySubIDs_2_1_2_0.set(NestedPartySubIDType_144);
        NstdPtysSubGrp_NoNestedPartySubIDs_144.insert(NestedPartySubIDType_144.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_144);

        noNestedPartyIDs_2_1_1.addGroup(noNestedPartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_145;
        FIX::NestedPartySubID NestedPartySubID_145("STRING_171596084");
        noNestedPartySubIDs_2_1_2_1.set(NestedPartySubID_145);
        NstdPtysSubGrp_NoNestedPartySubIDs_145.insert(NestedPartySubID_145.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_145(996389315);
        noNestedPartySubIDs_2_1_2_1.set(NestedPartySubIDType_145);
        NstdPtysSubGrp_NoNestedPartySubIDs_145.insert(NestedPartySubIDType_145.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_145);

        noNestedPartyIDs_2_1_1.addGroup(noNestedPartySubIDs_2_1_2_1);
      }
      noLegs_0_2.addGroup(noNestedPartyIDs_2_1_1);
    }
    msg.addGroup(noLegs_0_2);
  }
  // OrderQtyData
  multiset<string> OrderQtyData_12;
  FIX::CashOrderQty CashOrderQty_12;
  CashOrderQty_12.setString("16193170");
  msg.set(CashOrderQty_12);
  OrderQtyData_12.insert(CashOrderQty_12.getString());
  FIX::OrderPercent OrderPercent_12;
  OrderPercent_12.setString("26.910000");
  msg.set(OrderPercent_12);
  OrderQtyData_12.insert(OrderPercent_12.getString());
  FIX::OrderQty OrderQty_23;
  OrderQty_23.setString("13545455");
  msg.set(OrderQty_23);
  OrderQtyData_12.insert(OrderQty_23.getString());
  FIX::RoundingDirection RoundingDirection_12('0');
  msg.set(RoundingDirection_12);
  OrderQtyData_12.insert(RoundingDirection_12.getString());
  FIX::RoundingModulus RoundingModulus_12;
  RoundingModulus_12.setString("6847989");
  msg.set(RoundingModulus_12);
  OrderQtyData_12.insert(RoundingModulus_12.getString());
  all_values.push_back(OrderQtyData_12);

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::NewOrderMultileg::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_67;
    FIX::PartyID PartyID_67("STRING_879864695");
    noPartyIDs_0_0.set(PartyID_67);
    Parties_NoPartyIDs_67.insert(PartyID_67.getString());
    FIX::PartyIDSource PartyIDSource_67('9');
    noPartyIDs_0_0.set(PartyIDSource_67);
    Parties_NoPartyIDs_67.insert(PartyIDSource_67.getString());
    FIX::PartyRole PartyRole_67(60);
    noPartyIDs_0_0.set(PartyRole_67);
    Parties_NoPartyIDs_67.insert(PartyRole_67.getString());
    all_values.push_back(Parties_NoPartyIDs_67);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::NewOrderMultileg::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_135;
      FIX::PartySubID PartySubID_135("STRING_1632403421");
      noPartySubIDs_0_1_0.set(PartySubID_135);
      PtysSubGrp_NoPartySubIDs_135.insert(PartySubID_135.getString());
      FIX::PartySubIDType PartySubIDType_135(16);
      noPartySubIDs_0_1_0.set(PartySubIDType_135);
      PtysSubGrp_NoPartySubIDs_135.insert(PartySubIDType_135.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_135);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_136;
      FIX::PartySubID PartySubID_136("STRING_1058839154");
      noPartySubIDs_0_1_1.set(PartySubID_136);
      PtysSubGrp_NoPartySubIDs_136.insert(PartySubID_136.getString());
      FIX::PartySubIDType PartySubIDType_136(5);
      noPartySubIDs_0_1_1.set(PartySubIDType_136);
      PtysSubGrp_NoPartySubIDs_136.insert(PartySubIDType_136.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_136);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::NewOrderMultileg::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_137;
      FIX::PartySubID PartySubID_137("STRING_988009706");
      noPartySubIDs_0_1_2.set(PartySubID_137);
      PtysSubGrp_NoPartySubIDs_137.insert(PartySubID_137.getString());
      FIX::PartySubIDType PartySubIDType_137(23);
      noPartySubIDs_0_1_2.set(PartySubIDType_137);
      PtysSubGrp_NoPartySubIDs_137.insert(PartySubIDType_137.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_137);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::NewOrderMultileg::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_68;
    FIX::PartyID PartyID_68("STRING_2063039280");
    noPartyIDs_0_1.set(PartyID_68);
    Parties_NoPartyIDs_68.insert(PartyID_68.getString());
    FIX::PartyIDSource PartyIDSource_68('2');
    noPartyIDs_0_1.set(PartyIDSource_68);
    Parties_NoPartyIDs_68.insert(PartyIDSource_68.getString());
    FIX::PartyRole PartyRole_68(66);
    noPartyIDs_0_1.set(PartyRole_68);
    Parties_NoPartyIDs_68.insert(PartyRole_68.getString());
    all_values.push_back(Parties_NoPartyIDs_68);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::NewOrderMultileg::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_138;
      FIX::PartySubID PartySubID_138("STRING_2065452831");
      noPartySubIDs_1_1_0.set(PartySubID_138);
      PtysSubGrp_NoPartySubIDs_138.insert(PartySubID_138.getString());
      FIX::PartySubIDType PartySubIDType_138(32);
      noPartySubIDs_1_1_0.set(PartySubIDType_138);
      PtysSubGrp_NoPartySubIDs_138.insert(PartySubIDType_138.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_138);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_139;
      FIX::PartySubID PartySubID_139("STRING_155268792");
      noPartySubIDs_1_1_1.set(PartySubID_139);
      PtysSubGrp_NoPartySubIDs_139.insert(PartySubID_139.getString());
      FIX::PartySubIDType PartySubIDType_139(28);
      noPartySubIDs_1_1_1.set(PartySubIDType_139);
      PtysSubGrp_NoPartySubIDs_139.insert(PartySubIDType_139.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_139);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::NewOrderMultileg::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_69;
    FIX::PartyID PartyID_69("STRING_2105160870");
    noPartyIDs_0_2.set(PartyID_69);
    Parties_NoPartyIDs_69.insert(PartyID_69.getString());
    FIX::PartyIDSource PartyIDSource_69('G');
    noPartyIDs_0_2.set(PartyIDSource_69);
    Parties_NoPartyIDs_69.insert(PartyIDSource_69.getString());
    FIX::PartyRole PartyRole_69(56);
    noPartyIDs_0_2.set(PartyRole_69);
    Parties_NoPartyIDs_69.insert(PartyRole_69.getString());
    all_values.push_back(Parties_NoPartyIDs_69);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::NewOrderMultileg::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_140;
      FIX::PartySubID PartySubID_140("STRING_1367980839");
      noPartySubIDs_2_1_0.set(PartySubID_140);
      PtysSubGrp_NoPartySubIDs_140.insert(PartySubID_140.getString());
      FIX::PartySubIDType PartySubIDType_140(3);
      noPartySubIDs_2_1_0.set(PartySubIDType_140);
      PtysSubGrp_NoPartySubIDs_140.insert(PartySubIDType_140.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_140);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_141;
      FIX::PartySubID PartySubID_141("STRING_643620438");
      noPartySubIDs_2_1_1.set(PartySubID_141);
      PtysSubGrp_NoPartySubIDs_141.insert(PartySubID_141.getString());
      FIX::PartySubIDType PartySubIDType_141(7);
      noPartySubIDs_2_1_1.set(PartySubIDType_141);
      PtysSubGrp_NoPartySubIDs_141.insert(PartySubIDType_141.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_141);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_1);
    }
    {
      FIX50SP2::NewOrderMultileg::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_142;
      FIX::PartySubID PartySubID_142("STRING_1715697769");
      noPartySubIDs_2_1_2.set(PartySubID_142);
      PtysSubGrp_NoPartySubIDs_142.insert(PartySubID_142.getString());
      FIX::PartySubIDType PartySubIDType_142(20);
      noPartySubIDs_2_1_2.set(PartySubIDType_142);
      PtysSubGrp_NoPartySubIDs_142.insert(PartySubIDType_142.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_142);

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
  FIX::PegOffsetType PegOffsetType_6(2);
  msg.set(PegOffsetType_6);
  PegInstructions_6.insert(PegOffsetType_6.getString());
  FIX::PegOffsetValue PegOffsetValue_6;
  PegOffsetValue_6.setString("14849296");
  msg.set(PegOffsetValue_6);
  PegInstructions_6.insert(PegOffsetValue_6.getString());
  FIX::PegPriceType PegPriceType_6(7);
  msg.set(PegPriceType_6);
  PegInstructions_6.insert(PegPriceType_6.getString());
  FIX::PegRoundDirection PegRoundDirection_6(1);
  msg.set(PegRoundDirection_6);
  PegInstructions_6.insert(PegRoundDirection_6.getString());
  FIX::PegScope PegScope_6(3);
  msg.set(PegScope_6);
  PegInstructions_6.insert(PegScope_6.getString());
  FIX::PegSecurityDesc PegSecurityDesc_6("STRING_1512242898");
  msg.set(PegSecurityDesc_6);
  PegInstructions_6.insert(PegSecurityDesc_6.getString());
  FIX::PegSecurityID PegSecurityID_6("STRING_2012238240");
  msg.set(PegSecurityID_6);
  PegInstructions_6.insert(PegSecurityID_6.getString());
  FIX::PegSecurityIDSource PegSecurityIDSource_6("STRING_1914457896");
  msg.set(PegSecurityIDSource_6);
  PegInstructions_6.insert(PegSecurityIDSource_6.getString());
  FIX::PegSymbol PegSymbol_6("STRING_1650229399");
  msg.set(PegSymbol_6);
  PegInstructions_6.insert(PegSymbol_6.getString());
  all_values.push_back(PegInstructions_6);

  // PreAllocMlegGrp
  // Group PreAllocMlegGrp.NoAllocs
  {
    FIX50SP2::NewOrderMultileg::NoAllocs noAllocs_0_0;
    // PreAllocMlegGrp.NoAllocs
    multiset<string> PreAllocMlegGrp_NoAllocs_1;
    FIX::AllocAccount AllocAccount_26("STRING_1089043964");
    noAllocs_0_0.set(AllocAccount_26);
    PreAllocMlegGrp_NoAllocs_1.insert(AllocAccount_26.getString());
    FIX::AllocAcctIDSource AllocAcctIDSource_26(1565785031);
    noAllocs_0_0.set(AllocAcctIDSource_26);
    PreAllocMlegGrp_NoAllocs_1.insert(AllocAcctIDSource_26.getString());
    FIX::AllocQty AllocQty_25;
    AllocQty_25.setString("14277607");
    noAllocs_0_0.set(AllocQty_25);
    PreAllocMlegGrp_NoAllocs_1.insert(AllocQty_25.getString());
    FIX::AllocSettlCurrency AllocSettlCurrency_20("EUR");
    noAllocs_0_0.set(AllocSettlCurrency_20);
    PreAllocMlegGrp_NoAllocs_1.insert(AllocSettlCurrency_20.getString());
    FIX::IndividualAllocID IndividualAllocID_26("STRING_1345729971");
    noAllocs_0_0.set(IndividualAllocID_26);
    PreAllocMlegGrp_NoAllocs_1.insert(IndividualAllocID_26.getString());
    all_values.push_back(PreAllocMlegGrp_NoAllocs_1);

    // NestedParties3
    // Group NestedParties3.NoNested3PartyIDs
    {
      FIX50SP2::NewOrderMultileg::NoAllocs::NoNested3PartyIDs noNested3PartyIDs_0_1_0;
      // NestedParties3.NoNested3PartyIDs
      multiset<string> NestedParties3_NoNested3PartyIDs_8;
      FIX::Nested3PartyID Nested3PartyID_8("STRING_883746919");
      noNested3PartyIDs_0_1_0.set(Nested3PartyID_8);
      NestedParties3_NoNested3PartyIDs_8.insert(Nested3PartyID_8.getString());
      FIX::Nested3PartyIDSource Nested3PartyIDSource_8('5');
      noNested3PartyIDs_0_1_0.set(Nested3PartyIDSource_8);
      NestedParties3_NoNested3PartyIDs_8.insert(Nested3PartyIDSource_8.getString());
      FIX::Nested3PartyRole Nested3PartyRole_8(667854481);
      noNested3PartyIDs_0_1_0.set(Nested3PartyRole_8);
      NestedParties3_NoNested3PartyIDs_8.insert(Nested3PartyRole_8.getString());
      all_values.push_back(NestedParties3_NoNested3PartyIDs_8);

      // NstdPtys3SubGrp
      // Group NstdPtys3SubGrp.NoNested3PartySubIDs
      {
        FIX50SP2::NewOrderMultileg::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_0_0_2_0;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_11;
        FIX::Nested3PartySubID Nested3PartySubID_11("STRING_1047072760");
        noNested3PartySubIDs_0_0_2_0.set(Nested3PartySubID_11);
        NstdPtys3SubGrp_NoNested3PartySubIDs_11.insert(Nested3PartySubID_11.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_11(315085603);
        noNested3PartySubIDs_0_0_2_0.set(Nested3PartySubIDType_11);
        NstdPtys3SubGrp_NoNested3PartySubIDs_11.insert(Nested3PartySubIDType_11.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_11);

        noNested3PartyIDs_0_1_0.addGroup(noNested3PartySubIDs_0_0_2_0);
      }
      noAllocs_0_0.addGroup(noNested3PartyIDs_0_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoAllocs::NoNested3PartyIDs noNested3PartyIDs_0_1_1;
      // NestedParties3.NoNested3PartyIDs
      multiset<string> NestedParties3_NoNested3PartyIDs_9;
      FIX::Nested3PartyID Nested3PartyID_9("STRING_1393534519");
      noNested3PartyIDs_0_1_1.set(Nested3PartyID_9);
      NestedParties3_NoNested3PartyIDs_9.insert(Nested3PartyID_9.getString());
      FIX::Nested3PartyIDSource Nested3PartyIDSource_9('1');
      noNested3PartyIDs_0_1_1.set(Nested3PartyIDSource_9);
      NestedParties3_NoNested3PartyIDs_9.insert(Nested3PartyIDSource_9.getString());
      FIX::Nested3PartyRole Nested3PartyRole_9(958706041);
      noNested3PartyIDs_0_1_1.set(Nested3PartyRole_9);
      NestedParties3_NoNested3PartyIDs_9.insert(Nested3PartyRole_9.getString());
      all_values.push_back(NestedParties3_NoNested3PartyIDs_9);

      // NstdPtys3SubGrp
      // Group NstdPtys3SubGrp.NoNested3PartySubIDs
      {
        FIX50SP2::NewOrderMultileg::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_0_1_2_0;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_12;
        FIX::Nested3PartySubID Nested3PartySubID_12("STRING_1236411959");
        noNested3PartySubIDs_0_1_2_0.set(Nested3PartySubID_12);
        NstdPtys3SubGrp_NoNested3PartySubIDs_12.insert(Nested3PartySubID_12.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_12(809388418);
        noNested3PartySubIDs_0_1_2_0.set(Nested3PartySubIDType_12);
        NstdPtys3SubGrp_NoNested3PartySubIDs_12.insert(Nested3PartySubIDType_12.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_12);

        noNested3PartyIDs_0_1_1.addGroup(noNested3PartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::NewOrderMultileg::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_0_1_2_1;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_13;
        FIX::Nested3PartySubID Nested3PartySubID_13("STRING_690930007");
        noNested3PartySubIDs_0_1_2_1.set(Nested3PartySubID_13);
        NstdPtys3SubGrp_NoNested3PartySubIDs_13.insert(Nested3PartySubID_13.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_13(1489425006);
        noNested3PartySubIDs_0_1_2_1.set(Nested3PartySubIDType_13);
        NstdPtys3SubGrp_NoNested3PartySubIDs_13.insert(Nested3PartySubIDType_13.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_13);

        noNested3PartyIDs_0_1_1.addGroup(noNested3PartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::NewOrderMultileg::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_0_1_2_2;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_14;
        FIX::Nested3PartySubID Nested3PartySubID_14("STRING_626535576");
        noNested3PartySubIDs_0_1_2_2.set(Nested3PartySubID_14);
        NstdPtys3SubGrp_NoNested3PartySubIDs_14.insert(Nested3PartySubID_14.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_14(28375989);
        noNested3PartySubIDs_0_1_2_2.set(Nested3PartySubIDType_14);
        NstdPtys3SubGrp_NoNested3PartySubIDs_14.insert(Nested3PartySubIDType_14.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_14);

        noNested3PartyIDs_0_1_1.addGroup(noNested3PartySubIDs_0_1_2_2);
      }
      noAllocs_0_0.addGroup(noNested3PartyIDs_0_1_1);
    }
    {
      FIX50SP2::NewOrderMultileg::NoAllocs::NoNested3PartyIDs noNested3PartyIDs_0_1_2;
      // NestedParties3.NoNested3PartyIDs
      multiset<string> NestedParties3_NoNested3PartyIDs_10;
      FIX::Nested3PartyID Nested3PartyID_10("STRING_1369264483");
      noNested3PartyIDs_0_1_2.set(Nested3PartyID_10);
      NestedParties3_NoNested3PartyIDs_10.insert(Nested3PartyID_10.getString());
      FIX::Nested3PartyIDSource Nested3PartyIDSource_10('2');
      noNested3PartyIDs_0_1_2.set(Nested3PartyIDSource_10);
      NestedParties3_NoNested3PartyIDs_10.insert(Nested3PartyIDSource_10.getString());
      FIX::Nested3PartyRole Nested3PartyRole_10(883994732);
      noNested3PartyIDs_0_1_2.set(Nested3PartyRole_10);
      NestedParties3_NoNested3PartyIDs_10.insert(Nested3PartyRole_10.getString());
      all_values.push_back(NestedParties3_NoNested3PartyIDs_10);

      // NstdPtys3SubGrp
      // Group NstdPtys3SubGrp.NoNested3PartySubIDs
      {
        FIX50SP2::NewOrderMultileg::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_0_2_2_0;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_15;
        FIX::Nested3PartySubID Nested3PartySubID_15("STRING_93643629");
        noNested3PartySubIDs_0_2_2_0.set(Nested3PartySubID_15);
        NstdPtys3SubGrp_NoNested3PartySubIDs_15.insert(Nested3PartySubID_15.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_15(650968980);
        noNested3PartySubIDs_0_2_2_0.set(Nested3PartySubIDType_15);
        NstdPtys3SubGrp_NoNested3PartySubIDs_15.insert(Nested3PartySubIDType_15.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_15);

        noNested3PartyIDs_0_1_2.addGroup(noNested3PartySubIDs_0_2_2_0);
      }
      noAllocs_0_0.addGroup(noNested3PartyIDs_0_1_2);
    }
    msg.addGroup(noAllocs_0_0);
  }
  {
    FIX50SP2::NewOrderMultileg::NoAllocs noAllocs_0_1;
    // PreAllocMlegGrp.NoAllocs
    multiset<string> PreAllocMlegGrp_NoAllocs_2;
    FIX::AllocAccount AllocAccount_27("STRING_236769485");
    noAllocs_0_1.set(AllocAccount_27);
    PreAllocMlegGrp_NoAllocs_2.insert(AllocAccount_27.getString());
    FIX::AllocAcctIDSource AllocAcctIDSource_27(946407928);
    noAllocs_0_1.set(AllocAcctIDSource_27);
    PreAllocMlegGrp_NoAllocs_2.insert(AllocAcctIDSource_27.getString());
    FIX::AllocQty AllocQty_26;
    AllocQty_26.setString("17400129");
    noAllocs_0_1.set(AllocQty_26);
    PreAllocMlegGrp_NoAllocs_2.insert(AllocQty_26.getString());
    FIX::AllocSettlCurrency AllocSettlCurrency_21("JPY");
    noAllocs_0_1.set(AllocSettlCurrency_21);
    PreAllocMlegGrp_NoAllocs_2.insert(AllocSettlCurrency_21.getString());
    FIX::IndividualAllocID IndividualAllocID_27("STRING_1616835793");
    noAllocs_0_1.set(IndividualAllocID_27);
    PreAllocMlegGrp_NoAllocs_2.insert(IndividualAllocID_27.getString());
    all_values.push_back(PreAllocMlegGrp_NoAllocs_2);

    // NestedParties3
    // Group NestedParties3.NoNested3PartyIDs
    {
      FIX50SP2::NewOrderMultileg::NoAllocs::NoNested3PartyIDs noNested3PartyIDs_1_1_0;
      // NestedParties3.NoNested3PartyIDs
      multiset<string> NestedParties3_NoNested3PartyIDs_11;
      FIX::Nested3PartyID Nested3PartyID_11("STRING_1572415039");
      noNested3PartyIDs_1_1_0.set(Nested3PartyID_11);
      NestedParties3_NoNested3PartyIDs_11.insert(Nested3PartyID_11.getString());
      FIX::Nested3PartyIDSource Nested3PartyIDSource_11('1');
      noNested3PartyIDs_1_1_0.set(Nested3PartyIDSource_11);
      NestedParties3_NoNested3PartyIDs_11.insert(Nested3PartyIDSource_11.getString());
      FIX::Nested3PartyRole Nested3PartyRole_11(1267295916);
      noNested3PartyIDs_1_1_0.set(Nested3PartyRole_11);
      NestedParties3_NoNested3PartyIDs_11.insert(Nested3PartyRole_11.getString());
      all_values.push_back(NestedParties3_NoNested3PartyIDs_11);

      // NstdPtys3SubGrp
      // Group NstdPtys3SubGrp.NoNested3PartySubIDs
      {
        FIX50SP2::NewOrderMultileg::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_1_0_2_0;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_16;
        FIX::Nested3PartySubID Nested3PartySubID_16("STRING_847383885");
        noNested3PartySubIDs_1_0_2_0.set(Nested3PartySubID_16);
        NstdPtys3SubGrp_NoNested3PartySubIDs_16.insert(Nested3PartySubID_16.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_16(1292849595);
        noNested3PartySubIDs_1_0_2_0.set(Nested3PartySubIDType_16);
        NstdPtys3SubGrp_NoNested3PartySubIDs_16.insert(Nested3PartySubIDType_16.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_16);

        noNested3PartyIDs_1_1_0.addGroup(noNested3PartySubIDs_1_0_2_0);
      }
      noAllocs_0_1.addGroup(noNested3PartyIDs_1_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoAllocs::NoNested3PartyIDs noNested3PartyIDs_1_1_1;
      // NestedParties3.NoNested3PartyIDs
      multiset<string> NestedParties3_NoNested3PartyIDs_12;
      FIX::Nested3PartyID Nested3PartyID_12("STRING_1069547918");
      noNested3PartyIDs_1_1_1.set(Nested3PartyID_12);
      NestedParties3_NoNested3PartyIDs_12.insert(Nested3PartyID_12.getString());
      FIX::Nested3PartyIDSource Nested3PartyIDSource_12('1');
      noNested3PartyIDs_1_1_1.set(Nested3PartyIDSource_12);
      NestedParties3_NoNested3PartyIDs_12.insert(Nested3PartyIDSource_12.getString());
      FIX::Nested3PartyRole Nested3PartyRole_12(538900466);
      noNested3PartyIDs_1_1_1.set(Nested3PartyRole_12);
      NestedParties3_NoNested3PartyIDs_12.insert(Nested3PartyRole_12.getString());
      all_values.push_back(NestedParties3_NoNested3PartyIDs_12);

      // NstdPtys3SubGrp
      // Group NstdPtys3SubGrp.NoNested3PartySubIDs
      {
        FIX50SP2::NewOrderMultileg::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_1_1_2_0;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_17;
        FIX::Nested3PartySubID Nested3PartySubID_17("STRING_2121175530");
        noNested3PartySubIDs_1_1_2_0.set(Nested3PartySubID_17);
        NstdPtys3SubGrp_NoNested3PartySubIDs_17.insert(Nested3PartySubID_17.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_17(624765539);
        noNested3PartySubIDs_1_1_2_0.set(Nested3PartySubIDType_17);
        NstdPtys3SubGrp_NoNested3PartySubIDs_17.insert(Nested3PartySubIDType_17.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_17);

        noNested3PartyIDs_1_1_1.addGroup(noNested3PartySubIDs_1_1_2_0);
      }
      noAllocs_0_1.addGroup(noNested3PartyIDs_1_1_1);
    }
    msg.addGroup(noAllocs_0_1);
  }
  // StrategyParametersGrp
  // Group StrategyParametersGrp.NoStrategyParameters
  {
    FIX50SP2::NewOrderMultileg::NoStrategyParameters noStrategyParameters_0_0;
    // StrategyParametersGrp.NoStrategyParameters
    multiset<string> StrategyParametersGrp_NoStrategyParameters_10;
    FIX::StrategyParameterName StrategyParameterName_10("STRING_783080300");
    noStrategyParameters_0_0.set(StrategyParameterName_10);
    StrategyParametersGrp_NoStrategyParameters_10.insert(StrategyParameterName_10.getString());
    FIX::StrategyParameterType StrategyParameterType_10(28);
    noStrategyParameters_0_0.set(StrategyParameterType_10);
    StrategyParametersGrp_NoStrategyParameters_10.insert(StrategyParameterType_10.getString());
    FIX::StrategyParameterValue StrategyParameterValue_10("STRING_1168615426");
    noStrategyParameters_0_0.set(StrategyParameterValue_10);
    StrategyParametersGrp_NoStrategyParameters_10.insert(StrategyParameterValue_10.getString());
    all_values.push_back(StrategyParametersGrp_NoStrategyParameters_10);

    msg.addGroup(noStrategyParameters_0_0);
  }
  // TrdgSesGrp
  // Group TrdgSesGrp.NoTradingSessions
  {
    FIX50SP2::NewOrderMultileg::NoTradingSessions noTradingSessions_0_0;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_15;
    FIX::TradingSessionID TradingSessionID_46("STRING_5");
    noTradingSessions_0_0.set(TradingSessionID_46);
    TrdgSesGrp_NoTradingSessions_15.insert(TradingSessionID_46.getString());
    FIX::TradingSessionSubID TradingSessionSubID_46("STRING_4");
    noTradingSessions_0_0.set(TradingSessionSubID_46);
    TrdgSesGrp_NoTradingSessions_15.insert(TradingSessionSubID_46.getString());
    all_values.push_back(TrdgSesGrp_NoTradingSessions_15);

    msg.addGroup(noTradingSessions_0_0);
  }
  {
    FIX50SP2::NewOrderMultileg::NoTradingSessions noTradingSessions_0_1;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_16;
    FIX::TradingSessionID TradingSessionID_47("STRING_2");
    noTradingSessions_0_1.set(TradingSessionID_47);
    TrdgSesGrp_NoTradingSessions_16.insert(TradingSessionID_47.getString());
    FIX::TradingSessionSubID TradingSessionSubID_47("STRING_7");
    noTradingSessions_0_1.set(TradingSessionSubID_47);
    TrdgSesGrp_NoTradingSessions_16.insert(TradingSessionSubID_47.getString());
    all_values.push_back(TrdgSesGrp_NoTradingSessions_16);

    msg.addGroup(noTradingSessions_0_1);
  }
  {
    FIX50SP2::NewOrderMultileg::NoTradingSessions noTradingSessions_0_2;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_17;
    FIX::TradingSessionID TradingSessionID_48("STRING_4");
    noTradingSessions_0_2.set(TradingSessionID_48);
    TrdgSesGrp_NoTradingSessions_17.insert(TradingSessionID_48.getString());
    FIX::TradingSessionSubID TradingSessionSubID_48("STRING_7");
    noTradingSessions_0_2.set(TradingSessionSubID_48);
    TrdgSesGrp_NoTradingSessions_17.insert(TradingSessionSubID_48.getString());
    all_values.push_back(TrdgSesGrp_NoTradingSessions_17);

    msg.addGroup(noTradingSessions_0_2);
  }
  // TriggeringInstruction
  multiset<string> TriggeringInstruction_6;
  FIX::TriggerAction TriggerAction_6('2');
  msg.set(TriggerAction_6);
  TriggeringInstruction_6.insert(TriggerAction_6.getString());
  FIX::TriggerNewPrice TriggerNewPrice_6;
  TriggerNewPrice_6.setString("13611894");
  msg.set(TriggerNewPrice_6);
  TriggeringInstruction_6.insert(TriggerNewPrice_6.getString());
  FIX::TriggerNewQty TriggerNewQty_6;
  TriggerNewQty_6.setString("5310728");
  msg.set(TriggerNewQty_6);
  TriggeringInstruction_6.insert(TriggerNewQty_6.getString());
  FIX::TriggerOrderType TriggerOrderType_6('2');
  msg.set(TriggerOrderType_6);
  TriggeringInstruction_6.insert(TriggerOrderType_6.getString());
  FIX::TriggerPrice TriggerPrice_6;
  TriggerPrice_6.setString("10162603");
  msg.set(TriggerPrice_6);
  TriggeringInstruction_6.insert(TriggerPrice_6.getString());
  FIX::TriggerPriceDirection TriggerPriceDirection_6('D');
  msg.set(TriggerPriceDirection_6);
  TriggeringInstruction_6.insert(TriggerPriceDirection_6.getString());
  FIX::TriggerPriceType TriggerPriceType_6('2');
  msg.set(TriggerPriceType_6);
  TriggeringInstruction_6.insert(TriggerPriceType_6.getString());
  FIX::TriggerPriceTypeScope TriggerPriceTypeScope_6('2');
  msg.set(TriggerPriceTypeScope_6);
  TriggeringInstruction_6.insert(TriggerPriceTypeScope_6.getString());
  FIX::TriggerSecurityDesc TriggerSecurityDesc_6("STRING_182689282");
  msg.set(TriggerSecurityDesc_6);
  TriggeringInstruction_6.insert(TriggerSecurityDesc_6.getString());
  FIX::TriggerSecurityID TriggerSecurityID_6("STRING_2120446095");
  msg.set(TriggerSecurityID_6);
  TriggeringInstruction_6.insert(TriggerSecurityID_6.getString());
  FIX::TriggerSecurityIDSource TriggerSecurityIDSource_6("STRING_519621614");
  msg.set(TriggerSecurityIDSource_6);
  TriggeringInstruction_6.insert(TriggerSecurityIDSource_6.getString());
  FIX::TriggerSymbol TriggerSymbol_6("STRING_205164440");
  msg.set(TriggerSymbol_6);
  TriggeringInstruction_6.insert(TriggerSymbol_6.getString());
  FIX::TriggerTradingSessionID TriggerTradingSessionID_6("STRING_820346332");
  msg.set(TriggerTradingSessionID_6);
  TriggeringInstruction_6.insert(TriggerTradingSessionID_6.getString());
  FIX::TriggerTradingSessionSubID TriggerTradingSessionSubID_6("STRING_1812471210");
  msg.set(TriggerTradingSessionSubID_6);
  TriggeringInstruction_6.insert(TriggerTradingSessionSubID_6.getString());
  FIX::TriggerType TriggerType_6('3');
  msg.set(TriggerType_6);
  TriggeringInstruction_6.insert(TriggerType_6.getString());
  all_values.push_back(TriggeringInstruction_6);

  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::NewOrderMultileg::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_65;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_65("DATA_203888028");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_65);
    UnderlyingInstrument_65.insert(EncodedUnderlyingIssuer_65.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_65(1864974466);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_65);
    UnderlyingInstrument_65.insert(EncodedUnderlyingIssuerLen_65.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_65("DATA_1956507702");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_65);
    UnderlyingInstrument_65.insert(EncodedUnderlyingSecurityDesc_65.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_65(828653567);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_65);
    UnderlyingInstrument_65.insert(EncodedUnderlyingSecurityDescLen_65.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_65;
    UnderlyingAdjustedQuantity_65.setString("15441648");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_65);
    UnderlyingInstrument_65.insert(UnderlyingAdjustedQuantity_65.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_65;
    UnderlyingAllocationPercent_65.setString("43.540000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_65);
    UnderlyingInstrument_65.insert(UnderlyingAllocationPercent_65.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_65;
    UnderlyingAttachmentPoint_65.setString("91.140000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_65);
    UnderlyingInstrument_65.insert(UnderlyingAttachmentPoint_65.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_65("STRING_565296664");
    noUnderlyings_0_0.set(UnderlyingCFICode_65);
    UnderlyingInstrument_65.insert(UnderlyingCFICode_65.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_65("STRING_2001720231");
    noUnderlyings_0_0.set(UnderlyingCPProgram_65);
    UnderlyingInstrument_65.insert(UnderlyingCPProgram_65.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_65("STRING_1340937002");
    noUnderlyings_0_0.set(UnderlyingCPRegType_65);
    UnderlyingInstrument_65.insert(UnderlyingCPRegType_65.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_65;
    UnderlyingCapValue_65.setString("9556929");
    noUnderlyings_0_0.set(UnderlyingCapValue_65);
    UnderlyingInstrument_65.insert(UnderlyingCapValue_65.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_65;
    UnderlyingCashAmount_65.setString("14927414");
    noUnderlyings_0_0.set(UnderlyingCashAmount_65);
    UnderlyingInstrument_65.insert(UnderlyingCashAmount_65.getString());
    FIX::UnderlyingCashType UnderlyingCashType_65("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_65);
    UnderlyingInstrument_65.insert(UnderlyingCashType_65.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_65;
    UnderlyingContractMultiplier_65.setString("20801129");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_65);
    UnderlyingInstrument_65.insert(UnderlyingContractMultiplier_65.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_65(1077406391);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_65);
    UnderlyingInstrument_65.insert(UnderlyingContractMultiplierUnit_65.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_65("COUNTRY_5587574");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_65);
    UnderlyingInstrument_65.insert(UnderlyingCountryOfIssue_65.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_65("LOCALMKTDATE_1293818754");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_65);
    UnderlyingInstrument_65.insert(UnderlyingCouponPaymentDate_65.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_65;
    UnderlyingCouponRate_65.setString("92.150000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_65);
    UnderlyingInstrument_65.insert(UnderlyingCouponRate_65.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_65("STRING_329668472");
    noUnderlyings_0_0.set(UnderlyingCreditRating_65);
    UnderlyingInstrument_65.insert(UnderlyingCreditRating_65.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_65("JPY");
    noUnderlyings_0_0.set(UnderlyingCurrency_65);
    UnderlyingInstrument_65.insert(UnderlyingCurrency_65.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_65;
    UnderlyingCurrentValue_65.setString("1231015");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_65);
    UnderlyingInstrument_65.insert(UnderlyingCurrentValue_65.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_65;
    UnderlyingDetachmentPoint_65.setString("48.030000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_65);
    UnderlyingInstrument_65.insert(UnderlyingDetachmentPoint_65.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_65;
    UnderlyingDirtyPrice_65.setString("4014427");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_65);
    UnderlyingInstrument_65.insert(UnderlyingDirtyPrice_65.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_65;
    UnderlyingEndPrice_65.setString("960639");
    noUnderlyings_0_0.set(UnderlyingEndPrice_65);
    UnderlyingInstrument_65.insert(UnderlyingEndPrice_65.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_65;
    UnderlyingEndValue_65.setString("20820264");
    noUnderlyings_0_0.set(UnderlyingEndValue_65);
    UnderlyingInstrument_65.insert(UnderlyingEndValue_65.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_65(606607181);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_65);
    UnderlyingInstrument_65.insert(UnderlyingExerciseStyle_65.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_65;
    UnderlyingFXRate_65.setString("9164102");
    noUnderlyings_0_0.set(UnderlyingFXRate_65);
    UnderlyingInstrument_65.insert(UnderlyingFXRate_65.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_65('M');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_65);
    UnderlyingInstrument_65.insert(UnderlyingFXRateCalc_65.getString());
    FIX::UnderlyingFactor UnderlyingFactor_65;
    UnderlyingFactor_65.setString("18813195");
    noUnderlyings_0_0.set(UnderlyingFactor_65);
    UnderlyingInstrument_65.insert(UnderlyingFactor_65.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_65(751742466);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_65);
    UnderlyingInstrument_65.insert(UnderlyingFlowScheduleType_65.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_65("STRING_1950902008");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_65);
    UnderlyingInstrument_65.insert(UnderlyingInstrRegistry_65.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_65("LOCALMKTDATE_1598810357");
    noUnderlyings_0_0.set(UnderlyingIssueDate_65);
    UnderlyingInstrument_65.insert(UnderlyingIssueDate_65.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_65("STRING_560766521");
    noUnderlyings_0_0.set(UnderlyingIssuer_65);
    UnderlyingInstrument_65.insert(UnderlyingIssuer_65.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_65("STRING_632071927");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_65);
    UnderlyingInstrument_65.insert(UnderlyingLocaleOfIssue_65.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_65("LOCALMKTDATE_995491596");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_65);
    UnderlyingInstrument_65.insert(UnderlyingMaturityDate_65.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_65("MONTHYEAR_1152870875");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_65);
    UnderlyingInstrument_65.insert(UnderlyingMaturityMonthYear_65.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_65("TZTIMEONLY_628937393");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_65);
    UnderlyingInstrument_65.insert(UnderlyingMaturityTime_65.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_65;
    UnderlyingNotionalPercentageOutstanding_65.setString("82.600000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_65);
    UnderlyingInstrument_65.insert(UnderlyingNotionalPercentageOutstanding_65.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_65('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_65);
    UnderlyingInstrument_65.insert(UnderlyingOptAttribute_65.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_65;
    UnderlyingOriginalNotionalPercentageOutstanding_65.setString("43.950000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_65);
    UnderlyingInstrument_65.insert(UnderlyingOriginalNotionalPercentageOutstanding_65.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_65("STRING_368997538");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_65);
    UnderlyingInstrument_65.insert(UnderlyingPriceUnitOfMeasure_65.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_65;
    UnderlyingPriceUnitOfMeasureQty_65.setString("3523653");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_65);
    UnderlyingInstrument_65.insert(UnderlyingPriceUnitOfMeasureQty_65.getString());
    FIX::UnderlyingProduct UnderlyingProduct_65(1243910369);
    noUnderlyings_0_0.set(UnderlyingProduct_65);
    UnderlyingInstrument_65.insert(UnderlyingProduct_65.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_65(301626812);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_65);
    UnderlyingInstrument_65.insert(UnderlyingPutOrCall_65.getString());
    FIX::UnderlyingPx UnderlyingPx_65;
    UnderlyingPx_65.setString("14297716");
    noUnderlyings_0_0.set(UnderlyingPx_65);
    UnderlyingInstrument_65.insert(UnderlyingPx_65.getString());
    FIX::UnderlyingQty UnderlyingQty_65;
    UnderlyingQty_65.setString("12494979");
    noUnderlyings_0_0.set(UnderlyingQty_65);
    UnderlyingInstrument_65.insert(UnderlyingQty_65.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_65("LOCALMKTDATE_1595445566");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_65);
    UnderlyingInstrument_65.insert(UnderlyingRedemptionDate_65.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_65("STRING_890767265");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_65);
    UnderlyingInstrument_65.insert(UnderlyingRepoCollateralSecurityType_65.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_65;
    UnderlyingRepurchaseRate_65.setString("64.160000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_65);
    UnderlyingInstrument_65.insert(UnderlyingRepurchaseRate_65.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_65(1758041023);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_65);
    UnderlyingInstrument_65.insert(UnderlyingRepurchaseTerm_65.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_65("STRING_1109520724");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_65);
    UnderlyingInstrument_65.insert(UnderlyingRestructuringType_65.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_65("STRING_1702267931");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_65);
    UnderlyingInstrument_65.insert(UnderlyingSecurityDesc_65.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_65("EXCHANGE_1172962178");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_65);
    UnderlyingInstrument_65.insert(UnderlyingSecurityExchange_65.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_65("STRING_1510963465");
    noUnderlyings_0_0.set(UnderlyingSecurityID_65);
    UnderlyingInstrument_65.insert(UnderlyingSecurityID_65.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_65("STRING_1798331893");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_65);
    UnderlyingInstrument_65.insert(UnderlyingSecurityIDSource_65.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_65("STRING_1107504947");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_65);
    UnderlyingInstrument_65.insert(UnderlyingSecuritySubType_65.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_65("STRING_2117570646");
    noUnderlyings_0_0.set(UnderlyingSecurityType_65);
    UnderlyingInstrument_65.insert(UnderlyingSecurityType_65.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_65("STRING_567258539");
    noUnderlyings_0_0.set(UnderlyingSeniority_65);
    UnderlyingInstrument_65.insert(UnderlyingSeniority_65.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_65("STRING_707035279");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_65);
    UnderlyingInstrument_65.insert(UnderlyingSettlMethod_65.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_65(4);
    noUnderlyings_0_0.set(UnderlyingSettlementType_65);
    UnderlyingInstrument_65.insert(UnderlyingSettlementType_65.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_65;
    UnderlyingStartValue_65.setString("13190010");
    noUnderlyings_0_0.set(UnderlyingStartValue_65);
    UnderlyingInstrument_65.insert(UnderlyingStartValue_65.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_65("STRING_510453639");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_65);
    UnderlyingInstrument_65.insert(UnderlyingStateOrProvinceOfIssue_65.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_65("JPY");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_65);
    UnderlyingInstrument_65.insert(UnderlyingStrikeCurrency_65.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_65;
    UnderlyingStrikePrice_65.setString("11425255");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_65);
    UnderlyingInstrument_65.insert(UnderlyingStrikePrice_65.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_65("STRING_150741194");
    noUnderlyings_0_0.set(UnderlyingSymbol_65);
    UnderlyingInstrument_65.insert(UnderlyingSymbol_65.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_65("STRING_885154754");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_65);
    UnderlyingInstrument_65.insert(UnderlyingSymbolSfx_65.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_65("STRING_1771462960");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_65);
    UnderlyingInstrument_65.insert(UnderlyingTimeUnit_65.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_65("STRING_1711529455");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_65);
    UnderlyingInstrument_65.insert(UnderlyingUnitOfMeasure_65.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_65;
    UnderlyingUnitOfMeasureQty_65.setString("18922622");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_65);
    UnderlyingInstrument_65.insert(UnderlyingUnitOfMeasureQty_65.getString());
    all_values.push_back(UnderlyingInstrument_65);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_132;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_132("STRING_2080526993");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_132);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_132.insert(UnderlyingSecurityAltID_132.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_132("STRING_97143871");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_132);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_132.insert(UnderlyingSecurityAltIDSource_132.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_132);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_114;
      FIX::UnderlyingStipType UnderlyingStipType_114("STRING_234670157");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_114);
      UnderlyingStipulations_NoUnderlyingStips_114.insert(UnderlyingStipType_114.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_114("STRING_1526915570");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_114);
      UnderlyingStipulations_NoUnderlyingStips_114.insert(UnderlyingStipValue_114.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_114);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_115;
      FIX::UnderlyingStipType UnderlyingStipType_115("STRING_1939778373");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_115);
      UnderlyingStipulations_NoUnderlyingStips_115.insert(UnderlyingStipType_115.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_115("STRING_1830115724");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_115);
      UnderlyingStipulations_NoUnderlyingStips_115.insert(UnderlyingStipValue_115.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_115);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_141;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_141("STRING_1371461141");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_141);
      UndlyInstrumentParties_NoUndlyInstrumentParties_141.insert(UnderlyingInstrumentPartyID_141.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_141('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_141);
      UndlyInstrumentParties_NoUndlyInstrumentParties_141.insert(UnderlyingInstrumentPartyIDSource_141.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_141(1379719911);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_141);
      UndlyInstrumentParties_NoUndlyInstrumentParties_141.insert(UnderlyingInstrumentPartyRole_141.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_141);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_280;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_280("STRING_466151629");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_280);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_280.insert(UnderlyingInstrumentPartySubID_280.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_280(743199728);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_280);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_280.insert(UnderlyingInstrumentPartySubIDType_280.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_280);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_281;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_281("STRING_577093669");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_281);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_281.insert(UnderlyingInstrumentPartySubID_281.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_281(1573656576);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_281);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_281.insert(UnderlyingInstrumentPartySubIDType_281.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_281);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_282;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_282("STRING_713286726");
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubID_282);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_282.insert(UnderlyingInstrumentPartySubID_282.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_282(1144352208);
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubIDType_282);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_282.insert(UnderlyingInstrumentPartySubIDType_282.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_282);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_142;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_142("STRING_133208207");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_142);
      UndlyInstrumentParties_NoUndlyInstrumentParties_142.insert(UnderlyingInstrumentPartyID_142.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_142('4');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_142);
      UndlyInstrumentParties_NoUndlyInstrumentParties_142.insert(UnderlyingInstrumentPartyIDSource_142.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_142(315869565);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_142);
      UndlyInstrumentParties_NoUndlyInstrumentParties_142.insert(UnderlyingInstrumentPartyRole_142.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_142);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_283;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_283("STRING_1719942862");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_283);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_283.insert(UnderlyingInstrumentPartySubID_283.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_283(48153444);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_283);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_283.insert(UnderlyingInstrumentPartySubIDType_283.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_283);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_284;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_284("STRING_1786187413");
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubID_284);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_284.insert(UnderlyingInstrumentPartySubID_284.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_284(1870684056);
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubIDType_284);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_284.insert(UnderlyingInstrumentPartySubIDType_284.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_284);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_285;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_285("STRING_933308198");
        noUndlyInstrumentPartySubIDs_0_1_2_2.set(UnderlyingInstrumentPartySubID_285);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_285.insert(UnderlyingInstrumentPartySubID_285.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_285(1410166725);
        noUndlyInstrumentPartySubIDs_0_1_2_2.set(UnderlyingInstrumentPartySubIDType_285);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_285.insert(UnderlyingInstrumentPartySubIDType_285.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_285);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_143;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_143("STRING_1434729863");
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyID_143);
      UndlyInstrumentParties_NoUndlyInstrumentParties_143.insert(UnderlyingInstrumentPartyID_143.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_143('6');
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyIDSource_143);
      UndlyInstrumentParties_NoUndlyInstrumentParties_143.insert(UnderlyingInstrumentPartyIDSource_143.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_143(856536784);
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyRole_143);
      UndlyInstrumentParties_NoUndlyInstrumentParties_143.insert(UnderlyingInstrumentPartyRole_143.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_143);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_286;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_286("STRING_775230634");
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubID_286);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_286.insert(UnderlyingInstrumentPartySubID_286.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_286(1546817213);
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubIDType_286);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_286.insert(UnderlyingInstrumentPartySubIDType_286.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_286);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::NewOrderMultileg::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_66;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_66("DATA_1602443366");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_66);
    UnderlyingInstrument_66.insert(EncodedUnderlyingIssuer_66.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_66(154662556);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_66);
    UnderlyingInstrument_66.insert(EncodedUnderlyingIssuerLen_66.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_66("DATA_1339111938");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_66);
    UnderlyingInstrument_66.insert(EncodedUnderlyingSecurityDesc_66.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_66(1285075442);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_66);
    UnderlyingInstrument_66.insert(EncodedUnderlyingSecurityDescLen_66.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_66;
    UnderlyingAdjustedQuantity_66.setString("4248617");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_66);
    UnderlyingInstrument_66.insert(UnderlyingAdjustedQuantity_66.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_66;
    UnderlyingAllocationPercent_66.setString("94.310000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_66);
    UnderlyingInstrument_66.insert(UnderlyingAllocationPercent_66.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_66;
    UnderlyingAttachmentPoint_66.setString("48.930000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_66);
    UnderlyingInstrument_66.insert(UnderlyingAttachmentPoint_66.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_66("STRING_1804581655");
    noUnderlyings_0_1.set(UnderlyingCFICode_66);
    UnderlyingInstrument_66.insert(UnderlyingCFICode_66.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_66("STRING_1489334855");
    noUnderlyings_0_1.set(UnderlyingCPProgram_66);
    UnderlyingInstrument_66.insert(UnderlyingCPProgram_66.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_66("STRING_1044416522");
    noUnderlyings_0_1.set(UnderlyingCPRegType_66);
    UnderlyingInstrument_66.insert(UnderlyingCPRegType_66.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_66;
    UnderlyingCapValue_66.setString("4002977");
    noUnderlyings_0_1.set(UnderlyingCapValue_66);
    UnderlyingInstrument_66.insert(UnderlyingCapValue_66.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_66;
    UnderlyingCashAmount_66.setString("20664285");
    noUnderlyings_0_1.set(UnderlyingCashAmount_66);
    UnderlyingInstrument_66.insert(UnderlyingCashAmount_66.getString());
    FIX::UnderlyingCashType UnderlyingCashType_66("STRING_DIFF");
    noUnderlyings_0_1.set(UnderlyingCashType_66);
    UnderlyingInstrument_66.insert(UnderlyingCashType_66.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_66;
    UnderlyingContractMultiplier_66.setString("11135844");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_66);
    UnderlyingInstrument_66.insert(UnderlyingContractMultiplier_66.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_66(1063297084);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_66);
    UnderlyingInstrument_66.insert(UnderlyingContractMultiplierUnit_66.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_66("COUNTRY_603797658");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_66);
    UnderlyingInstrument_66.insert(UnderlyingCountryOfIssue_66.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_66("LOCALMKTDATE_1530794077");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_66);
    UnderlyingInstrument_66.insert(UnderlyingCouponPaymentDate_66.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_66;
    UnderlyingCouponRate_66.setString("66.500000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_66);
    UnderlyingInstrument_66.insert(UnderlyingCouponRate_66.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_66("STRING_1247459505");
    noUnderlyings_0_1.set(UnderlyingCreditRating_66);
    UnderlyingInstrument_66.insert(UnderlyingCreditRating_66.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_66("GBP");
    noUnderlyings_0_1.set(UnderlyingCurrency_66);
    UnderlyingInstrument_66.insert(UnderlyingCurrency_66.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_66;
    UnderlyingCurrentValue_66.setString("8861632");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_66);
    UnderlyingInstrument_66.insert(UnderlyingCurrentValue_66.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_66;
    UnderlyingDetachmentPoint_66.setString("37.000000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_66);
    UnderlyingInstrument_66.insert(UnderlyingDetachmentPoint_66.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_66;
    UnderlyingDirtyPrice_66.setString("2131446");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_66);
    UnderlyingInstrument_66.insert(UnderlyingDirtyPrice_66.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_66;
    UnderlyingEndPrice_66.setString("1488463");
    noUnderlyings_0_1.set(UnderlyingEndPrice_66);
    UnderlyingInstrument_66.insert(UnderlyingEndPrice_66.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_66;
    UnderlyingEndValue_66.setString("1136999");
    noUnderlyings_0_1.set(UnderlyingEndValue_66);
    UnderlyingInstrument_66.insert(UnderlyingEndValue_66.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_66(891231406);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_66);
    UnderlyingInstrument_66.insert(UnderlyingExerciseStyle_66.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_66;
    UnderlyingFXRate_66.setString("10053831");
    noUnderlyings_0_1.set(UnderlyingFXRate_66);
    UnderlyingInstrument_66.insert(UnderlyingFXRate_66.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_66('D');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_66);
    UnderlyingInstrument_66.insert(UnderlyingFXRateCalc_66.getString());
    FIX::UnderlyingFactor UnderlyingFactor_66;
    UnderlyingFactor_66.setString("16664620");
    noUnderlyings_0_1.set(UnderlyingFactor_66);
    UnderlyingInstrument_66.insert(UnderlyingFactor_66.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_66(404716697);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_66);
    UnderlyingInstrument_66.insert(UnderlyingFlowScheduleType_66.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_66("STRING_936432843");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_66);
    UnderlyingInstrument_66.insert(UnderlyingInstrRegistry_66.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_66("LOCALMKTDATE_1821124596");
    noUnderlyings_0_1.set(UnderlyingIssueDate_66);
    UnderlyingInstrument_66.insert(UnderlyingIssueDate_66.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_66("STRING_1743828635");
    noUnderlyings_0_1.set(UnderlyingIssuer_66);
    UnderlyingInstrument_66.insert(UnderlyingIssuer_66.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_66("STRING_74024637");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_66);
    UnderlyingInstrument_66.insert(UnderlyingLocaleOfIssue_66.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_66("LOCALMKTDATE_98502692");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_66);
    UnderlyingInstrument_66.insert(UnderlyingMaturityDate_66.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_66("MONTHYEAR_159434419");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_66);
    UnderlyingInstrument_66.insert(UnderlyingMaturityMonthYear_66.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_66("TZTIMEONLY_652289531");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_66);
    UnderlyingInstrument_66.insert(UnderlyingMaturityTime_66.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_66;
    UnderlyingNotionalPercentageOutstanding_66.setString("43.470000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_66);
    UnderlyingInstrument_66.insert(UnderlyingNotionalPercentageOutstanding_66.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_66('1');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_66);
    UnderlyingInstrument_66.insert(UnderlyingOptAttribute_66.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_66;
    UnderlyingOriginalNotionalPercentageOutstanding_66.setString("60.530000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_66);
    UnderlyingInstrument_66.insert(UnderlyingOriginalNotionalPercentageOutstanding_66.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_66("STRING_155898434");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_66);
    UnderlyingInstrument_66.insert(UnderlyingPriceUnitOfMeasure_66.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_66;
    UnderlyingPriceUnitOfMeasureQty_66.setString("15677141");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_66);
    UnderlyingInstrument_66.insert(UnderlyingPriceUnitOfMeasureQty_66.getString());
    FIX::UnderlyingProduct UnderlyingProduct_66(19811856);
    noUnderlyings_0_1.set(UnderlyingProduct_66);
    UnderlyingInstrument_66.insert(UnderlyingProduct_66.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_66(1269482896);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_66);
    UnderlyingInstrument_66.insert(UnderlyingPutOrCall_66.getString());
    FIX::UnderlyingPx UnderlyingPx_66;
    UnderlyingPx_66.setString("4835275");
    noUnderlyings_0_1.set(UnderlyingPx_66);
    UnderlyingInstrument_66.insert(UnderlyingPx_66.getString());
    FIX::UnderlyingQty UnderlyingQty_66;
    UnderlyingQty_66.setString("6236095");
    noUnderlyings_0_1.set(UnderlyingQty_66);
    UnderlyingInstrument_66.insert(UnderlyingQty_66.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_66("LOCALMKTDATE_652793326");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_66);
    UnderlyingInstrument_66.insert(UnderlyingRedemptionDate_66.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_66("STRING_1862694237");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_66);
    UnderlyingInstrument_66.insert(UnderlyingRepoCollateralSecurityType_66.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_66;
    UnderlyingRepurchaseRate_66.setString("90.200000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_66);
    UnderlyingInstrument_66.insert(UnderlyingRepurchaseRate_66.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_66(1756046617);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_66);
    UnderlyingInstrument_66.insert(UnderlyingRepurchaseTerm_66.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_66("STRING_1142530683");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_66);
    UnderlyingInstrument_66.insert(UnderlyingRestructuringType_66.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_66("STRING_609748642");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_66);
    UnderlyingInstrument_66.insert(UnderlyingSecurityDesc_66.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_66("EXCHANGE_435016669");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_66);
    UnderlyingInstrument_66.insert(UnderlyingSecurityExchange_66.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_66("STRING_1355675327");
    noUnderlyings_0_1.set(UnderlyingSecurityID_66);
    UnderlyingInstrument_66.insert(UnderlyingSecurityID_66.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_66("STRING_758594989");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_66);
    UnderlyingInstrument_66.insert(UnderlyingSecurityIDSource_66.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_66("STRING_548716585");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_66);
    UnderlyingInstrument_66.insert(UnderlyingSecuritySubType_66.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_66("STRING_99423086");
    noUnderlyings_0_1.set(UnderlyingSecurityType_66);
    UnderlyingInstrument_66.insert(UnderlyingSecurityType_66.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_66("STRING_1763978120");
    noUnderlyings_0_1.set(UnderlyingSeniority_66);
    UnderlyingInstrument_66.insert(UnderlyingSeniority_66.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_66("STRING_2030189709");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_66);
    UnderlyingInstrument_66.insert(UnderlyingSettlMethod_66.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_66(4);
    noUnderlyings_0_1.set(UnderlyingSettlementType_66);
    UnderlyingInstrument_66.insert(UnderlyingSettlementType_66.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_66;
    UnderlyingStartValue_66.setString("212111");
    noUnderlyings_0_1.set(UnderlyingStartValue_66);
    UnderlyingInstrument_66.insert(UnderlyingStartValue_66.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_66("STRING_819138904");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_66);
    UnderlyingInstrument_66.insert(UnderlyingStateOrProvinceOfIssue_66.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_66("CAN");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_66);
    UnderlyingInstrument_66.insert(UnderlyingStrikeCurrency_66.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_66;
    UnderlyingStrikePrice_66.setString("8931635");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_66);
    UnderlyingInstrument_66.insert(UnderlyingStrikePrice_66.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_66("STRING_1538028767");
    noUnderlyings_0_1.set(UnderlyingSymbol_66);
    UnderlyingInstrument_66.insert(UnderlyingSymbol_66.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_66("STRING_1924474224");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_66);
    UnderlyingInstrument_66.insert(UnderlyingSymbolSfx_66.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_66("STRING_1545453073");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_66);
    UnderlyingInstrument_66.insert(UnderlyingTimeUnit_66.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_66("STRING_1293629466");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_66);
    UnderlyingInstrument_66.insert(UnderlyingUnitOfMeasure_66.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_66;
    UnderlyingUnitOfMeasureQty_66.setString("14257598");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_66);
    UnderlyingInstrument_66.insert(UnderlyingUnitOfMeasureQty_66.getString());
    all_values.push_back(UnderlyingInstrument_66);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_133;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_133("STRING_1449527900");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_133);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_133.insert(UnderlyingSecurityAltID_133.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_133("STRING_845990353");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_133);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_133.insert(UnderlyingSecurityAltIDSource_133.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_133);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_116;
      FIX::UnderlyingStipType UnderlyingStipType_116("STRING_571527149");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_116);
      UnderlyingStipulations_NoUnderlyingStips_116.insert(UnderlyingStipType_116.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_116("STRING_1329517941");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_116);
      UnderlyingStipulations_NoUnderlyingStips_116.insert(UnderlyingStipValue_116.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_116);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_117;
      FIX::UnderlyingStipType UnderlyingStipType_117("STRING_1738096850");
      noUnderlyingStips_1_1_1.set(UnderlyingStipType_117);
      UnderlyingStipulations_NoUnderlyingStips_117.insert(UnderlyingStipType_117.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_117("STRING_1224320475");
      noUnderlyingStips_1_1_1.set(UnderlyingStipValue_117);
      UnderlyingStipulations_NoUnderlyingStips_117.insert(UnderlyingStipValue_117.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_117);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_144;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_144("STRING_1461682222");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_144);
      UndlyInstrumentParties_NoUndlyInstrumentParties_144.insert(UnderlyingInstrumentPartyID_144.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_144('8');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_144);
      UndlyInstrumentParties_NoUndlyInstrumentParties_144.insert(UnderlyingInstrumentPartyIDSource_144.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_144(39775566);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_144);
      UndlyInstrumentParties_NoUndlyInstrumentParties_144.insert(UnderlyingInstrumentPartyRole_144.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_144);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_287;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_287("STRING_1267900114");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_287);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_287.insert(UnderlyingInstrumentPartySubID_287.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_287(1395450893);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_287);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_287.insert(UnderlyingInstrumentPartySubIDType_287.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_287);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_288;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_288("STRING_682542205");
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubID_288);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_288.insert(UnderlyingInstrumentPartySubID_288.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_288(1816616699);
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubIDType_288);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_288.insert(UnderlyingInstrumentPartySubIDType_288.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_288);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_289;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_289("STRING_1494873979");
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubID_289);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_289.insert(UnderlyingInstrumentPartySubID_289.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_289(299036677);
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubIDType_289);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_289.insert(UnderlyingInstrumentPartySubIDType_289.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_289);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_145;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_145("STRING_1699322760");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_145);
      UndlyInstrumentParties_NoUndlyInstrumentParties_145.insert(UnderlyingInstrumentPartyID_145.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_145('1');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_145);
      UndlyInstrumentParties_NoUndlyInstrumentParties_145.insert(UnderlyingInstrumentPartyIDSource_145.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_145(320247847);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_145);
      UndlyInstrumentParties_NoUndlyInstrumentParties_145.insert(UnderlyingInstrumentPartyRole_145.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_145);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_290;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_290("STRING_405317885");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_290);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_290.insert(UnderlyingInstrumentPartySubID_290.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_290(2085287652);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_290);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_290.insert(UnderlyingInstrumentPartySubIDType_290.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_290);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  {
    FIX50SP2::NewOrderMultileg::NoUnderlyings noUnderlyings_0_2;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_67;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_67("DATA_1264141559");
    noUnderlyings_0_2.set(EncodedUnderlyingIssuer_67);
    UnderlyingInstrument_67.insert(EncodedUnderlyingIssuer_67.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_67(1943346652);
    noUnderlyings_0_2.set(EncodedUnderlyingIssuerLen_67);
    UnderlyingInstrument_67.insert(EncodedUnderlyingIssuerLen_67.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_67("DATA_1862278228");
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDesc_67);
    UnderlyingInstrument_67.insert(EncodedUnderlyingSecurityDesc_67.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_67(662110984);
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDescLen_67);
    UnderlyingInstrument_67.insert(EncodedUnderlyingSecurityDescLen_67.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_67;
    UnderlyingAdjustedQuantity_67.setString("10894924");
    noUnderlyings_0_2.set(UnderlyingAdjustedQuantity_67);
    UnderlyingInstrument_67.insert(UnderlyingAdjustedQuantity_67.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_67;
    UnderlyingAllocationPercent_67.setString("44.300000");
    noUnderlyings_0_2.set(UnderlyingAllocationPercent_67);
    UnderlyingInstrument_67.insert(UnderlyingAllocationPercent_67.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_67;
    UnderlyingAttachmentPoint_67.setString("64.620000");
    noUnderlyings_0_2.set(UnderlyingAttachmentPoint_67);
    UnderlyingInstrument_67.insert(UnderlyingAttachmentPoint_67.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_67("STRING_391536722");
    noUnderlyings_0_2.set(UnderlyingCFICode_67);
    UnderlyingInstrument_67.insert(UnderlyingCFICode_67.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_67("STRING_1986544784");
    noUnderlyings_0_2.set(UnderlyingCPProgram_67);
    UnderlyingInstrument_67.insert(UnderlyingCPProgram_67.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_67("STRING_723790149");
    noUnderlyings_0_2.set(UnderlyingCPRegType_67);
    UnderlyingInstrument_67.insert(UnderlyingCPRegType_67.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_67;
    UnderlyingCapValue_67.setString("9630638");
    noUnderlyings_0_2.set(UnderlyingCapValue_67);
    UnderlyingInstrument_67.insert(UnderlyingCapValue_67.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_67;
    UnderlyingCashAmount_67.setString("11685790");
    noUnderlyings_0_2.set(UnderlyingCashAmount_67);
    UnderlyingInstrument_67.insert(UnderlyingCashAmount_67.getString());
    FIX::UnderlyingCashType UnderlyingCashType_67("STRING_DIFF");
    noUnderlyings_0_2.set(UnderlyingCashType_67);
    UnderlyingInstrument_67.insert(UnderlyingCashType_67.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_67;
    UnderlyingContractMultiplier_67.setString("399006");
    noUnderlyings_0_2.set(UnderlyingContractMultiplier_67);
    UnderlyingInstrument_67.insert(UnderlyingContractMultiplier_67.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_67(65823959);
    noUnderlyings_0_2.set(UnderlyingContractMultiplierUnit_67);
    UnderlyingInstrument_67.insert(UnderlyingContractMultiplierUnit_67.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_67("COUNTRY_1776085573");
    noUnderlyings_0_2.set(UnderlyingCountryOfIssue_67);
    UnderlyingInstrument_67.insert(UnderlyingCountryOfIssue_67.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_67("LOCALMKTDATE_872784143");
    noUnderlyings_0_2.set(UnderlyingCouponPaymentDate_67);
    UnderlyingInstrument_67.insert(UnderlyingCouponPaymentDate_67.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_67;
    UnderlyingCouponRate_67.setString("95.250000");
    noUnderlyings_0_2.set(UnderlyingCouponRate_67);
    UnderlyingInstrument_67.insert(UnderlyingCouponRate_67.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_67("STRING_1700032789");
    noUnderlyings_0_2.set(UnderlyingCreditRating_67);
    UnderlyingInstrument_67.insert(UnderlyingCreditRating_67.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_67("CAN");
    noUnderlyings_0_2.set(UnderlyingCurrency_67);
    UnderlyingInstrument_67.insert(UnderlyingCurrency_67.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_67;
    UnderlyingCurrentValue_67.setString("2350913");
    noUnderlyings_0_2.set(UnderlyingCurrentValue_67);
    UnderlyingInstrument_67.insert(UnderlyingCurrentValue_67.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_67;
    UnderlyingDetachmentPoint_67.setString("73.080000");
    noUnderlyings_0_2.set(UnderlyingDetachmentPoint_67);
    UnderlyingInstrument_67.insert(UnderlyingDetachmentPoint_67.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_67;
    UnderlyingDirtyPrice_67.setString("8484407");
    noUnderlyings_0_2.set(UnderlyingDirtyPrice_67);
    UnderlyingInstrument_67.insert(UnderlyingDirtyPrice_67.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_67;
    UnderlyingEndPrice_67.setString("5341280");
    noUnderlyings_0_2.set(UnderlyingEndPrice_67);
    UnderlyingInstrument_67.insert(UnderlyingEndPrice_67.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_67;
    UnderlyingEndValue_67.setString("13616564");
    noUnderlyings_0_2.set(UnderlyingEndValue_67);
    UnderlyingInstrument_67.insert(UnderlyingEndValue_67.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_67(1961716208);
    noUnderlyings_0_2.set(UnderlyingExerciseStyle_67);
    UnderlyingInstrument_67.insert(UnderlyingExerciseStyle_67.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_67;
    UnderlyingFXRate_67.setString("8543758");
    noUnderlyings_0_2.set(UnderlyingFXRate_67);
    UnderlyingInstrument_67.insert(UnderlyingFXRate_67.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_67('M');
    noUnderlyings_0_2.set(UnderlyingFXRateCalc_67);
    UnderlyingInstrument_67.insert(UnderlyingFXRateCalc_67.getString());
    FIX::UnderlyingFactor UnderlyingFactor_67;
    UnderlyingFactor_67.setString("2195504");
    noUnderlyings_0_2.set(UnderlyingFactor_67);
    UnderlyingInstrument_67.insert(UnderlyingFactor_67.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_67(792179875);
    noUnderlyings_0_2.set(UnderlyingFlowScheduleType_67);
    UnderlyingInstrument_67.insert(UnderlyingFlowScheduleType_67.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_67("STRING_849292348");
    noUnderlyings_0_2.set(UnderlyingInstrRegistry_67);
    UnderlyingInstrument_67.insert(UnderlyingInstrRegistry_67.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_67("LOCALMKTDATE_15413449");
    noUnderlyings_0_2.set(UnderlyingIssueDate_67);
    UnderlyingInstrument_67.insert(UnderlyingIssueDate_67.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_67("STRING_506974455");
    noUnderlyings_0_2.set(UnderlyingIssuer_67);
    UnderlyingInstrument_67.insert(UnderlyingIssuer_67.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_67("STRING_1511403332");
    noUnderlyings_0_2.set(UnderlyingLocaleOfIssue_67);
    UnderlyingInstrument_67.insert(UnderlyingLocaleOfIssue_67.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_67("LOCALMKTDATE_1104905919");
    noUnderlyings_0_2.set(UnderlyingMaturityDate_67);
    UnderlyingInstrument_67.insert(UnderlyingMaturityDate_67.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_67("MONTHYEAR_1647528885");
    noUnderlyings_0_2.set(UnderlyingMaturityMonthYear_67);
    UnderlyingInstrument_67.insert(UnderlyingMaturityMonthYear_67.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_67("TZTIMEONLY_1120706147");
    noUnderlyings_0_2.set(UnderlyingMaturityTime_67);
    UnderlyingInstrument_67.insert(UnderlyingMaturityTime_67.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_67;
    UnderlyingNotionalPercentageOutstanding_67.setString("26.420000");
    noUnderlyings_0_2.set(UnderlyingNotionalPercentageOutstanding_67);
    UnderlyingInstrument_67.insert(UnderlyingNotionalPercentageOutstanding_67.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_67('1');
    noUnderlyings_0_2.set(UnderlyingOptAttribute_67);
    UnderlyingInstrument_67.insert(UnderlyingOptAttribute_67.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_67;
    UnderlyingOriginalNotionalPercentageOutstanding_67.setString("62.960000");
    noUnderlyings_0_2.set(UnderlyingOriginalNotionalPercentageOutstanding_67);
    UnderlyingInstrument_67.insert(UnderlyingOriginalNotionalPercentageOutstanding_67.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_67("STRING_312022865");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasure_67);
    UnderlyingInstrument_67.insert(UnderlyingPriceUnitOfMeasure_67.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_67;
    UnderlyingPriceUnitOfMeasureQty_67.setString("5076854");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasureQty_67);
    UnderlyingInstrument_67.insert(UnderlyingPriceUnitOfMeasureQty_67.getString());
    FIX::UnderlyingProduct UnderlyingProduct_67(11416000);
    noUnderlyings_0_2.set(UnderlyingProduct_67);
    UnderlyingInstrument_67.insert(UnderlyingProduct_67.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_67(351923564);
    noUnderlyings_0_2.set(UnderlyingPutOrCall_67);
    UnderlyingInstrument_67.insert(UnderlyingPutOrCall_67.getString());
    FIX::UnderlyingPx UnderlyingPx_67;
    UnderlyingPx_67.setString("5735094");
    noUnderlyings_0_2.set(UnderlyingPx_67);
    UnderlyingInstrument_67.insert(UnderlyingPx_67.getString());
    FIX::UnderlyingQty UnderlyingQty_67;
    UnderlyingQty_67.setString("17875015");
    noUnderlyings_0_2.set(UnderlyingQty_67);
    UnderlyingInstrument_67.insert(UnderlyingQty_67.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_67("LOCALMKTDATE_1224707707");
    noUnderlyings_0_2.set(UnderlyingRedemptionDate_67);
    UnderlyingInstrument_67.insert(UnderlyingRedemptionDate_67.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_67("STRING_679108935");
    noUnderlyings_0_2.set(UnderlyingRepoCollateralSecurityType_67);
    UnderlyingInstrument_67.insert(UnderlyingRepoCollateralSecurityType_67.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_67;
    UnderlyingRepurchaseRate_67.setString("7.150000");
    noUnderlyings_0_2.set(UnderlyingRepurchaseRate_67);
    UnderlyingInstrument_67.insert(UnderlyingRepurchaseRate_67.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_67(1217908316);
    noUnderlyings_0_2.set(UnderlyingRepurchaseTerm_67);
    UnderlyingInstrument_67.insert(UnderlyingRepurchaseTerm_67.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_67("STRING_32675706");
    noUnderlyings_0_2.set(UnderlyingRestructuringType_67);
    UnderlyingInstrument_67.insert(UnderlyingRestructuringType_67.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_67("STRING_1575142061");
    noUnderlyings_0_2.set(UnderlyingSecurityDesc_67);
    UnderlyingInstrument_67.insert(UnderlyingSecurityDesc_67.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_67("EXCHANGE_880241976");
    noUnderlyings_0_2.set(UnderlyingSecurityExchange_67);
    UnderlyingInstrument_67.insert(UnderlyingSecurityExchange_67.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_67("STRING_881116457");
    noUnderlyings_0_2.set(UnderlyingSecurityID_67);
    UnderlyingInstrument_67.insert(UnderlyingSecurityID_67.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_67("STRING_2109270085");
    noUnderlyings_0_2.set(UnderlyingSecurityIDSource_67);
    UnderlyingInstrument_67.insert(UnderlyingSecurityIDSource_67.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_67("STRING_94414748");
    noUnderlyings_0_2.set(UnderlyingSecuritySubType_67);
    UnderlyingInstrument_67.insert(UnderlyingSecuritySubType_67.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_67("STRING_695349017");
    noUnderlyings_0_2.set(UnderlyingSecurityType_67);
    UnderlyingInstrument_67.insert(UnderlyingSecurityType_67.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_67("STRING_816162308");
    noUnderlyings_0_2.set(UnderlyingSeniority_67);
    UnderlyingInstrument_67.insert(UnderlyingSeniority_67.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_67("STRING_1827049186");
    noUnderlyings_0_2.set(UnderlyingSettlMethod_67);
    UnderlyingInstrument_67.insert(UnderlyingSettlMethod_67.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_67(5);
    noUnderlyings_0_2.set(UnderlyingSettlementType_67);
    UnderlyingInstrument_67.insert(UnderlyingSettlementType_67.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_67;
    UnderlyingStartValue_67.setString("16083421");
    noUnderlyings_0_2.set(UnderlyingStartValue_67);
    UnderlyingInstrument_67.insert(UnderlyingStartValue_67.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_67("STRING_528857886");
    noUnderlyings_0_2.set(UnderlyingStateOrProvinceOfIssue_67);
    UnderlyingInstrument_67.insert(UnderlyingStateOrProvinceOfIssue_67.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_67("USD");
    noUnderlyings_0_2.set(UnderlyingStrikeCurrency_67);
    UnderlyingInstrument_67.insert(UnderlyingStrikeCurrency_67.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_67;
    UnderlyingStrikePrice_67.setString("20402612");
    noUnderlyings_0_2.set(UnderlyingStrikePrice_67);
    UnderlyingInstrument_67.insert(UnderlyingStrikePrice_67.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_67("STRING_2035218832");
    noUnderlyings_0_2.set(UnderlyingSymbol_67);
    UnderlyingInstrument_67.insert(UnderlyingSymbol_67.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_67("STRING_1615361876");
    noUnderlyings_0_2.set(UnderlyingSymbolSfx_67);
    UnderlyingInstrument_67.insert(UnderlyingSymbolSfx_67.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_67("STRING_1013483718");
    noUnderlyings_0_2.set(UnderlyingTimeUnit_67);
    UnderlyingInstrument_67.insert(UnderlyingTimeUnit_67.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_67("STRING_1384177826");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasure_67);
    UnderlyingInstrument_67.insert(UnderlyingUnitOfMeasure_67.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_67;
    UnderlyingUnitOfMeasureQty_67.setString("9544682");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasureQty_67);
    UnderlyingInstrument_67.insert(UnderlyingUnitOfMeasureQty_67.getString());
    all_values.push_back(UnderlyingInstrument_67);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_134;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_134("STRING_1696200691");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltID_134);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_134.insert(UnderlyingSecurityAltID_134.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_134("STRING_1462153700");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltIDSource_134);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_134.insert(UnderlyingSecurityAltIDSource_134.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_134);

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_118;
      FIX::UnderlyingStipType UnderlyingStipType_118("STRING_2048124255");
      noUnderlyingStips_2_1_0.set(UnderlyingStipType_118);
      UnderlyingStipulations_NoUnderlyingStips_118.insert(UnderlyingStipType_118.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_118("STRING_2035663110");
      noUnderlyingStips_2_1_0.set(UnderlyingStipValue_118);
      UnderlyingStipulations_NoUnderlyingStips_118.insert(UnderlyingStipValue_118.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_118);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_119;
      FIX::UnderlyingStipType UnderlyingStipType_119("STRING_361930292");
      noUnderlyingStips_2_1_1.set(UnderlyingStipType_119);
      UnderlyingStipulations_NoUnderlyingStips_119.insert(UnderlyingStipType_119.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_119("STRING_1125348314");
      noUnderlyingStips_2_1_1.set(UnderlyingStipValue_119);
      UnderlyingStipulations_NoUnderlyingStips_119.insert(UnderlyingStipValue_119.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_119);

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_146;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_146("STRING_1701981007");
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyID_146);
      UndlyInstrumentParties_NoUndlyInstrumentParties_146.insert(UnderlyingInstrumentPartyID_146.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_146('1');
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyIDSource_146);
      UndlyInstrumentParties_NoUndlyInstrumentParties_146.insert(UnderlyingInstrumentPartyIDSource_146.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_146(599964104);
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyRole_146);
      UndlyInstrumentParties_NoUndlyInstrumentParties_146.insert(UnderlyingInstrumentPartyRole_146.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_146);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_291;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_291("STRING_1076014958");
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubID_291);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_291.insert(UnderlyingInstrumentPartySubID_291.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_291(1481080561);
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubIDType_291);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_291.insert(UnderlyingInstrumentPartySubIDType_291.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_291);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_292;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_292("STRING_1091425858");
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubID_292);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_292.insert(UnderlyingInstrumentPartySubID_292.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_292(1170429707);
        noUndlyInstrumentPartySubIDs_2_0_2_1.set(UnderlyingInstrumentPartySubIDType_292);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_292.insert(UnderlyingInstrumentPartySubIDType_292.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_292);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_1);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_147;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_147("STRING_28945930");
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyID_147);
      UndlyInstrumentParties_NoUndlyInstrumentParties_147.insert(UnderlyingInstrumentPartyID_147.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_147('1');
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyIDSource_147);
      UndlyInstrumentParties_NoUndlyInstrumentParties_147.insert(UnderlyingInstrumentPartyIDSource_147.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_147(849995245);
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyRole_147);
      UndlyInstrumentParties_NoUndlyInstrumentParties_147.insert(UnderlyingInstrumentPartyRole_147.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_147);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_293;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_293("STRING_1368446702");
        noUndlyInstrumentPartySubIDs_2_1_2_0.set(UnderlyingInstrumentPartySubID_293);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_293.insert(UnderlyingInstrumentPartySubID_293.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_293(1378853131);
        noUndlyInstrumentPartySubIDs_2_1_2_0.set(UnderlyingInstrumentPartySubIDType_293);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_293.insert(UnderlyingInstrumentPartySubIDType_293.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_293);

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_0);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_1);
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
