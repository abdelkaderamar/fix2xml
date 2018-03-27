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
  FIX::Account Account_15("STRING_2107386833");
  msg.set(Account_15);
  MultilegOrderCancelReplace_0.insert(Account_15.getString());
  FIX::AccountType AccountType_13(8);
  msg.set(AccountType_13);
  MultilegOrderCancelReplace_0.insert(AccountType_13.getString());
  FIX::AcctIDSource AcctIDSource_8(3);
  msg.set(AcctIDSource_8);
  MultilegOrderCancelReplace_0.insert(AcctIDSource_8.getString());
  FIX::AllocID AllocID_11("STRING_347464324");
  msg.set(AllocID_11);
  MultilegOrderCancelReplace_0.insert(AllocID_11.getString());
  FIX::BookingType BookingType_10(2);
  msg.set(BookingType_10);
  MultilegOrderCancelReplace_0.insert(BookingType_10.getString());
  FIX::BookingUnit BookingUnit_4('1');
  msg.set(BookingUnit_4);
  MultilegOrderCancelReplace_0.insert(BookingUnit_4.getString());
  FIX::CancellationRights CancellationRights_2('M');
  msg.set(CancellationRights_2);
  MultilegOrderCancelReplace_0.insert(CancellationRights_2.getString());
  FIX::CashMargin CashMargin_4('2');
  msg.set(CashMargin_4);
  MultilegOrderCancelReplace_0.insert(CashMargin_4.getString());
  FIX::ClOrdID ClOrdID_26("STRING_1153981616");
  msg.set(ClOrdID_26);
  MultilegOrderCancelReplace_0.insert(ClOrdID_26.getString());
  FIX::ClOrdLinkID ClOrdLinkID_6("STRING_1526234046");
  msg.set(ClOrdLinkID_6);
  MultilegOrderCancelReplace_0.insert(ClOrdLinkID_6.getString());
  FIX::ClearingFeeIndicator ClearingFeeIndicator_9("STRING_H");
  msg.set(ClearingFeeIndicator_9);
  MultilegOrderCancelReplace_0.insert(ClearingFeeIndicator_9.getString());
  FIX::ComplianceID ComplianceID_4("STRING_1807934068");
  msg.set(ComplianceID_4);
  MultilegOrderCancelReplace_0.insert(ComplianceID_4.getString());
  FIX::CoveredOrUncovered CoveredOrUncovered_3(1);
  msg.set(CoveredOrUncovered_3);
  MultilegOrderCancelReplace_0.insert(CoveredOrUncovered_3.getString());
  FIX::Currency Currency_33("CHF");
  msg.set(Currency_33);
  MultilegOrderCancelReplace_0.insert(Currency_33.getString());
  FIX::CustOrderCapacity CustOrderCapacity_7(4);
  msg.set(CustOrderCapacity_7);
  MultilegOrderCancelReplace_0.insert(CustOrderCapacity_7.getString());
  FIX::DayBookingInst DayBookingInst_4('0');
  msg.set(DayBookingInst_4);
  MultilegOrderCancelReplace_0.insert(DayBookingInst_4.getString());
  FIX::Designation Designation_2("STRING_342260555");
  msg.set(Designation_2);
  MultilegOrderCancelReplace_0.insert(Designation_2.getString());
  FIX::EffectiveTime EffectiveTime_2(FIX::UTCTIMESTAMP(19, 27, 34, 6, 72011));
  msg.set(EffectiveTime_2);
  MultilegOrderCancelReplace_0.insert(EffectiveTime_2.getString());
  FIX::EncodedText EncodedText_51("DATA_1482981397");
  msg.set(EncodedText_51);
  MultilegOrderCancelReplace_0.insert(EncodedText_51.getString());
  FIX::EncodedTextLen EncodedTextLen_51(937375843);
  msg.set(EncodedTextLen_51);
  MultilegOrderCancelReplace_0.insert(EncodedTextLen_51.getString());
  FIX::ExDestination ExDestination_1("EXCHANGE_963096681");
  msg.set(ExDestination_1);
  MultilegOrderCancelReplace_0.insert(ExDestination_1.getString());
  FIX::ExDestinationIDSource ExDestinationIDSource_1('B');
  msg.set(ExDestinationIDSource_1);
  MultilegOrderCancelReplace_0.insert(ExDestinationIDSource_1.getString());
  FIX::ExecInst ExecInst_5("MULTIPLECHARVALUE_n");
  msg.set(ExecInst_5);
  MultilegOrderCancelReplace_0.insert(ExecInst_5.getString());
  FIX::ExpireDate ExpireDate_6("LOCALMKTDATE_480296086");
  msg.set(ExpireDate_6);
  MultilegOrderCancelReplace_0.insert(ExpireDate_6.getString());
  FIX::ExpireTime ExpireTime_7(FIX::UTCTIMESTAMP(22, 7, 15, 24, 32009));
  msg.set(ExpireTime_7);
  MultilegOrderCancelReplace_0.insert(ExpireTime_7.getString());
  FIX::ForexReq ForexReq_4(false);
  msg.set(ForexReq_4);
  MultilegOrderCancelReplace_0.insert(ForexReq_4.getString());
  FIX::GTBookingInst GTBookingInst_2(2);
  msg.set(GTBookingInst_2);
  MultilegOrderCancelReplace_0.insert(GTBookingInst_2.getString());
  FIX::HandlInst HandlInst_2('2');
  msg.set(HandlInst_2);
  MultilegOrderCancelReplace_0.insert(HandlInst_2.getString());
  FIX::IOIID IOIID_2("STRING_111795243");
  msg.set(IOIID_2);
  MultilegOrderCancelReplace_0.insert(IOIID_2.getString());
  FIX::LocateReqd LocateReqd_1(true);
  msg.set(LocateReqd_1);
  MultilegOrderCancelReplace_0.insert(LocateReqd_1.getString());
  FIX::MatchIncrement MatchIncrement_2;
  MatchIncrement_2.setString("4087158");
  msg.set(MatchIncrement_2);
  MultilegOrderCancelReplace_0.insert(MatchIncrement_2.getString());
  FIX::MaxFloor MaxFloor_2;
  MaxFloor_2.setString("20320733");
  msg.set(MaxFloor_2);
  MultilegOrderCancelReplace_0.insert(MaxFloor_2.getString());
  FIX::MaxPriceLevels MaxPriceLevels_2(45988925);
  msg.set(MaxPriceLevels_2);
  MultilegOrderCancelReplace_0.insert(MaxPriceLevels_2.getString());
  FIX::MaxShow MaxShow_2;
  MaxShow_2.setString("19963783");
  msg.set(MaxShow_2);
  MultilegOrderCancelReplace_0.insert(MaxShow_2.getString());
  FIX::MinQty MinQty_5;
  MinQty_5.setString("7200808");
  msg.set(MinQty_5);
  MultilegOrderCancelReplace_0.insert(MinQty_5.getString());
  FIX::MoneyLaunderingStatus MoneyLaunderingStatus_2('N');
  msg.set(MoneyLaunderingStatus_2);
  MultilegOrderCancelReplace_0.insert(MoneyLaunderingStatus_2.getString());
  FIX::MultiLegRptTypeReq MultiLegRptTypeReq_0(2);
  msg.set(MultiLegRptTypeReq_0);
  MultilegOrderCancelReplace_0.insert(MultiLegRptTypeReq_0.getString());
  FIX::MultilegModel MultilegModel_7(1);
  msg.set(MultilegModel_7);
  MultilegOrderCancelReplace_0.insert(MultilegModel_7.getString());
  FIX::MultilegPriceMethod MultilegPriceMethod_7(2);
  msg.set(MultilegPriceMethod_7);
  MultilegOrderCancelReplace_0.insert(MultilegPriceMethod_7.getString());
  FIX::OrdType OrdType_38('2');
  msg.set(OrdType_38);
  MultilegOrderCancelReplace_0.insert(OrdType_38.getString());
  FIX::OrderCapacity OrderCapacity_13('W');
  msg.set(OrderCapacity_13);
  MultilegOrderCancelReplace_0.insert(OrderCapacity_13.getString());
  FIX::OrderID OrderID_25("STRING_1795085738");
  msg.set(OrderID_25);
  MultilegOrderCancelReplace_0.insert(OrderID_25.getString());
  FIX::OrderRestrictions OrderRestrictions_10("MULTIPLECHARVALUE_A");
  msg.set(OrderRestrictions_10);
  MultilegOrderCancelReplace_0.insert(OrderRestrictions_10.getString());
  FIX::OrigClOrdID OrigClOrdID_6("STRING_1590976308");
  msg.set(OrigClOrdID_6);
  MultilegOrderCancelReplace_0.insert(OrigClOrdID_6.getString());
  FIX::OrigOrdModTime OrigOrdModTime_2(FIX::UTCTIMESTAMP(19, 6, 35, 18, 102013));
  msg.set(OrigOrdModTime_2);
  MultilegOrderCancelReplace_0.insert(OrigOrdModTime_2.getString());
  FIX::ParticipationRate ParticipationRate_2;
  ParticipationRate_2.setString("27.130000");
  msg.set(ParticipationRate_2);
  MultilegOrderCancelReplace_0.insert(ParticipationRate_2.getString());
  FIX::PositionEffect PositionEffect_7('N');
  msg.set(PositionEffect_7);
  MultilegOrderCancelReplace_0.insert(PositionEffect_7.getString());
  FIX::PreTradeAnonymity PreTradeAnonymity_4(true);
  msg.set(PreTradeAnonymity_4);
  MultilegOrderCancelReplace_0.insert(PreTradeAnonymity_4.getString());
  FIX::PreallocMethod PreallocMethod_4('1');
  msg.set(PreallocMethod_4);
  MultilegOrderCancelReplace_0.insert(PreallocMethod_4.getString());
  FIX::PrevClosePx PrevClosePx_3;
  PrevClosePx_3.setString("6026366");
  msg.set(PrevClosePx_3);
  MultilegOrderCancelReplace_0.insert(PrevClosePx_3.getString());
  FIX::Price Price_12;
  Price_12.setString("18464258");
  msg.set(Price_12);
  MultilegOrderCancelReplace_0.insert(Price_12.getString());
  FIX::PriceProtectionScope PriceProtectionScope_2('1');
  msg.set(PriceProtectionScope_2);
  MultilegOrderCancelReplace_0.insert(PriceProtectionScope_2.getString());
  FIX::PriceType PriceType_24(18);
  msg.set(PriceType_24);
  MultilegOrderCancelReplace_0.insert(PriceType_24.getString());
  FIX::ProcessCode ProcessCode_7('5');
  msg.set(ProcessCode_7);
  MultilegOrderCancelReplace_0.insert(ProcessCode_7.getString());
  FIX::QtyType QtyType_16(0);
  msg.set(QtyType_16);
  MultilegOrderCancelReplace_0.insert(QtyType_16.getString());
  FIX::QuoteID QuoteID_3("STRING_807492481");
  msg.set(QuoteID_3);
  MultilegOrderCancelReplace_0.insert(QuoteID_3.getString());
  FIX::RegistID RegistID_2("STRING_1842810826");
  msg.set(RegistID_2);
  MultilegOrderCancelReplace_0.insert(RegistID_2.getString());
  FIX::RiskFreeRate RiskFreeRate_1;
  RiskFreeRate_1.setString("2341903");
  msg.set(RiskFreeRate_1);
  MultilegOrderCancelReplace_0.insert(RiskFreeRate_1.getString());
  FIX::SecondaryClOrdID SecondaryClOrdID_24("STRING_656387208");
  msg.set(SecondaryClOrdID_24);
  MultilegOrderCancelReplace_0.insert(SecondaryClOrdID_24.getString());
  FIX::SettlCurrency SettlCurrency_13("EUR");
  msg.set(SettlCurrency_13);
  MultilegOrderCancelReplace_0.insert(SettlCurrency_13.getString());
  FIX::SettlDate SettlDate_23("LOCALMKTDATE_1196606066");
  msg.set(SettlDate_23);
  MultilegOrderCancelReplace_0.insert(SettlDate_23.getString());
  FIX::SettlType SettlType_14("STRING_2");
  msg.set(SettlType_14);
  MultilegOrderCancelReplace_0.insert(SettlType_14.getString());
  FIX::Side Side_23('E');
  msg.set(Side_23);
  MultilegOrderCancelReplace_0.insert(Side_23.getString());
  FIX::SolicitedFlag SolicitedFlag_4(false);
  msg.set(SolicitedFlag_4);
  MultilegOrderCancelReplace_0.insert(SolicitedFlag_4.getString());
  FIX::StopPx StopPx_2;
  StopPx_2.setString("1618714");
  msg.set(StopPx_2);
  MultilegOrderCancelReplace_0.insert(StopPx_2.getString());
  FIX::SwapPoints SwapPoints_0;
  SwapPoints_0.setString("11601630");
  msg.set(SwapPoints_0);
  MultilegOrderCancelReplace_0.insert(SwapPoints_0.getString());
  FIX::TargetStrategy TargetStrategy_2(3);
  msg.set(TargetStrategy_2);
  MultilegOrderCancelReplace_0.insert(TargetStrategy_2.getString());
  FIX::TargetStrategyParameters TargetStrategyParameters_2("STRING_1752847790");
  msg.set(TargetStrategyParameters_2);
  MultilegOrderCancelReplace_0.insert(TargetStrategyParameters_2.getString());
  FIX::Text Text_51("STRING_1745140949");
  msg.set(Text_51);
  MultilegOrderCancelReplace_0.insert(Text_51.getString());
  FIX::TimeInForce TimeInForce_34('5');
  msg.set(TimeInForce_34);
  MultilegOrderCancelReplace_0.insert(TimeInForce_34.getString());
  FIX::TradeDate TradeDate_18("LOCALMKTDATE_638673828");
  msg.set(TradeDate_18);
  MultilegOrderCancelReplace_0.insert(TradeDate_18.getString());
  FIX::TradeOriginationDate TradeOriginationDate_10("LOCALMKTDATE_1571471516");
  msg.set(TradeOriginationDate_10);
  MultilegOrderCancelReplace_0.insert(TradeOriginationDate_10.getString());
  FIX::TransactTime TransactTime_29(FIX::UTCTIMESTAMP(21, 14, 12, 25, 92003));
  msg.set(TransactTime_29);
  MultilegOrderCancelReplace_0.insert(TransactTime_29.getString());
  all_values.push_back(MultilegOrderCancelReplace_0);

  // CommissionData
  multiset<string> CommissionData_11;
  FIX::CommCurrency CommCurrency_11("EUR");
  msg.set(CommCurrency_11);
  CommissionData_11.insert(CommCurrency_11.getString());
  FIX::CommType CommType_11('5');
  msg.set(CommType_11);
  CommissionData_11.insert(CommType_11.getString());
  FIX::Commission Commission_11;
  Commission_11.setString("1133968");
  msg.set(Commission_11);
  CommissionData_11.insert(Commission_11.getString());
  FIX::FundRenewWaiv FundRenewWaiv_11('Y');
  msg.set(FundRenewWaiv_11);
  CommissionData_11.insert(FundRenewWaiv_11.getString());
  all_values.push_back(CommissionData_11);

  // DiscretionInstructions
  multiset<string> DiscretionInstructions_2;
  FIX::DiscretionInst DiscretionInst_2('7');
  msg.set(DiscretionInst_2);
  DiscretionInstructions_2.insert(DiscretionInst_2.getString());
  FIX::DiscretionLimitType DiscretionLimitType_2(1);
  msg.set(DiscretionLimitType_2);
  DiscretionInstructions_2.insert(DiscretionLimitType_2.getString());
  FIX::DiscretionMoveType DiscretionMoveType_2(1);
  msg.set(DiscretionMoveType_2);
  DiscretionInstructions_2.insert(DiscretionMoveType_2.getString());
  FIX::DiscretionOffsetType DiscretionOffsetType_2(0);
  msg.set(DiscretionOffsetType_2);
  DiscretionInstructions_2.insert(DiscretionOffsetType_2.getString());
  FIX::DiscretionOffsetValue DiscretionOffsetValue_2;
  DiscretionOffsetValue_2.setString("15772765");
  msg.set(DiscretionOffsetValue_2);
  DiscretionInstructions_2.insert(DiscretionOffsetValue_2.getString());
  FIX::DiscretionRoundDirection DiscretionRoundDirection_2(1);
  msg.set(DiscretionRoundDirection_2);
  DiscretionInstructions_2.insert(DiscretionRoundDirection_2.getString());
  FIX::DiscretionScope DiscretionScope_2(2);
  msg.set(DiscretionScope_2);
  DiscretionInstructions_2.insert(DiscretionScope_2.getString());
  all_values.push_back(DiscretionInstructions_2);

  // DisplayInstruction
  multiset<string> DisplayInstruction_2;
  FIX::DisplayHighQty DisplayHighQty_2;
  DisplayHighQty_2.setString("6263990");
  msg.set(DisplayHighQty_2);
  DisplayInstruction_2.insert(DisplayHighQty_2.getString());
  FIX::DisplayLowQty DisplayLowQty_2;
  DisplayLowQty_2.setString("20527431");
  msg.set(DisplayLowQty_2);
  DisplayInstruction_2.insert(DisplayLowQty_2.getString());
  FIX::DisplayMethod DisplayMethod_2('4');
  msg.set(DisplayMethod_2);
  DisplayInstruction_2.insert(DisplayMethod_2.getString());
  FIX::DisplayMinIncr DisplayMinIncr_2;
  DisplayMinIncr_2.setString("7090796");
  msg.set(DisplayMinIncr_2);
  DisplayInstruction_2.insert(DisplayMinIncr_2.getString());
  FIX::DisplayQty DisplayQty_2;
  DisplayQty_2.setString("671310");
  msg.set(DisplayQty_2);
  DisplayInstruction_2.insert(DisplayQty_2.getString());
  FIX::DisplayWhen DisplayWhen_2('2');
  msg.set(DisplayWhen_2);
  DisplayInstruction_2.insert(DisplayWhen_2.getString());
  FIX::RefreshQty RefreshQty_2;
  RefreshQty_2.setString("3968190");
  msg.set(RefreshQty_2);
  DisplayInstruction_2.insert(RefreshQty_2.getString());
  FIX::SecondaryDisplayQty SecondaryDisplayQty_2;
  SecondaryDisplayQty_2.setString("18199788");
  msg.set(SecondaryDisplayQty_2);
  DisplayInstruction_2.insert(SecondaryDisplayQty_2.getString());
  all_values.push_back(DisplayInstruction_2);

  // Instrument
  multiset<string> Instrument_35;
  FIX::AttachmentPoint AttachmentPoint_35;
  AttachmentPoint_35.setString("62.520000");
  msg.set(AttachmentPoint_35);
  Instrument_35.insert(AttachmentPoint_35.getString());
  FIX::CFICode CFICode_35("STRING_652713640");
  msg.set(CFICode_35);
  Instrument_35.insert(CFICode_35.getString());
  FIX::CPProgram CPProgram_35(2);
  msg.set(CPProgram_35);
  Instrument_35.insert(CPProgram_35.getString());
  FIX::CPRegType CPRegType_35("STRING_172014121");
  msg.set(CPRegType_35);
  Instrument_35.insert(CPRegType_35.getString());
  FIX::CapPrice CapPrice_35;
  CapPrice_35.setString("19570596");
  msg.set(CapPrice_35);
  Instrument_35.insert(CapPrice_35.getString());
  FIX::ContractMultiplier ContractMultiplier_35;
  ContractMultiplier_35.setString("13853890");
  msg.set(ContractMultiplier_35);
  Instrument_35.insert(ContractMultiplier_35.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_35(0);
  msg.set(ContractMultiplierUnit_35);
  Instrument_35.insert(ContractMultiplierUnit_35.getString());
  FIX::ContractSettlMonth ContractSettlMonth_35("MONTHYEAR_1638754744");
  msg.set(ContractSettlMonth_35);
  Instrument_35.insert(ContractSettlMonth_35.getString());
  FIX::CountryOfIssue CountryOfIssue_35("COUNTRY_497372632");
  msg.set(CountryOfIssue_35);
  Instrument_35.insert(CountryOfIssue_35.getString());
  FIX::CouponPaymentDate CouponPaymentDate_35("LOCALMKTDATE_577885079");
  msg.set(CouponPaymentDate_35);
  Instrument_35.insert(CouponPaymentDate_35.getString());
  FIX::CouponRate CouponRate_35;
  CouponRate_35.setString("21.000000");
  msg.set(CouponRate_35);
  Instrument_35.insert(CouponRate_35.getString());
  FIX::CreditRating CreditRating_35("STRING_211992887");
  msg.set(CreditRating_35);
  Instrument_35.insert(CreditRating_35.getString());
  FIX::DatedDate DatedDate_35("LOCALMKTDATE_507795322");
  msg.set(DatedDate_35);
  Instrument_35.insert(DatedDate_35.getString());
  FIX::DetachmentPoint DetachmentPoint_35;
  DetachmentPoint_35.setString("92.520000");
  msg.set(DetachmentPoint_35);
  Instrument_35.insert(DetachmentPoint_35.getString());
  FIX::EncodedIssuer EncodedIssuer_35("DATA_325389785");
  msg.set(EncodedIssuer_35);
  Instrument_35.insert(EncodedIssuer_35.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_35(248443047);
  msg.set(EncodedIssuerLen_35);
  Instrument_35.insert(EncodedIssuerLen_35.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_35("DATA_1141557796");
  msg.set(EncodedSecurityDesc_35);
  Instrument_35.insert(EncodedSecurityDesc_35.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_35(1246279164);
  msg.set(EncodedSecurityDescLen_35);
  Instrument_35.insert(EncodedSecurityDescLen_35.getString());
  FIX::ExerciseStyle ExerciseStyle_35(0);
  msg.set(ExerciseStyle_35);
  Instrument_35.insert(ExerciseStyle_35.getString());
  FIX::Factor Factor_35;
  Factor_35.setString("11442466");
  msg.set(Factor_35);
  Instrument_35.insert(Factor_35.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_35(false);
  msg.set(FlexProductEligibilityIndicator_35);
  Instrument_35.insert(FlexProductEligibilityIndicator_35.getString());
  FIX::FlexibleIndicator FlexibleIndicator_35(true);
  msg.set(FlexibleIndicator_35);
  Instrument_35.insert(FlexibleIndicator_35.getString());
  FIX::FloorPrice FloorPrice_35;
  FloorPrice_35.setString("17693753");
  msg.set(FloorPrice_35);
  Instrument_35.insert(FloorPrice_35.getString());
  FIX::FlowScheduleType FlowScheduleType_35(3);
  msg.set(FlowScheduleType_35);
  Instrument_35.insert(FlowScheduleType_35.getString());
  FIX::InstrRegistry InstrRegistry_35("STRING_1588544104");
  msg.set(InstrRegistry_35);
  Instrument_35.insert(InstrRegistry_35.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_35('1');
  msg.set(InstrmtAssignmentMethod_35);
  Instrument_35.insert(InstrmtAssignmentMethod_35.getString());
  FIX::InterestAccrualDate InterestAccrualDate_35("LOCALMKTDATE_2011550805");
  msg.set(InterestAccrualDate_35);
  Instrument_35.insert(InterestAccrualDate_35.getString());
  FIX::IssueDate IssueDate_35("LOCALMKTDATE_1655675124");
  msg.set(IssueDate_35);
  Instrument_35.insert(IssueDate_35.getString());
  FIX::Issuer Issuer_35("STRING_762466551");
  msg.set(Issuer_35);
  Instrument_35.insert(Issuer_35.getString());
  FIX::ListMethod ListMethod_35(0);
  msg.set(ListMethod_35);
  Instrument_35.insert(ListMethod_35.getString());
  FIX::LocaleOfIssue LocaleOfIssue_35("STRING_1328170285");
  msg.set(LocaleOfIssue_35);
  Instrument_35.insert(LocaleOfIssue_35.getString());
  FIX::MaturityDate MaturityDate_35("LOCALMKTDATE_1510492804");
  msg.set(MaturityDate_35);
  Instrument_35.insert(MaturityDate_35.getString());
  FIX::MaturityMonthYear MaturityMonthYear_35("MONTHYEAR_913599813");
  msg.set(MaturityMonthYear_35);
  Instrument_35.insert(MaturityMonthYear_35.getString());
  FIX::MaturityTime MaturityTime_35("TZTIMEONLY_1639339275");
  msg.set(MaturityTime_35);
  Instrument_35.insert(MaturityTime_35.getString());
  FIX::MinPriceIncrement MinPriceIncrement_35;
  MinPriceIncrement_35.setString("16825069");
  msg.set(MinPriceIncrement_35);
  Instrument_35.insert(MinPriceIncrement_35.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_35;
  MinPriceIncrementAmount_35.setString("7231758");
  msg.set(MinPriceIncrementAmount_35);
  Instrument_35.insert(MinPriceIncrementAmount_35.getString());
  FIX::NTPositionLimit NTPositionLimit_35(877244693);
  msg.set(NTPositionLimit_35);
  Instrument_35.insert(NTPositionLimit_35.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_35;
  NotionalPercentageOutstanding_35.setString("40.000000");
  msg.set(NotionalPercentageOutstanding_35);
  Instrument_35.insert(NotionalPercentageOutstanding_35.getString());
  FIX::OptAttribute OptAttribute_35('2');
  msg.set(OptAttribute_35);
  Instrument_35.insert(OptAttribute_35.getString());
  FIX::OptPayoutAmount OptPayoutAmount_35;
  OptPayoutAmount_35.setString("13746173");
  msg.set(OptPayoutAmount_35);
  Instrument_35.insert(OptPayoutAmount_35.getString());
  FIX::OptPayoutType OptPayoutType_35(3);
  msg.set(OptPayoutType_35);
  Instrument_35.insert(OptPayoutType_35.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_35;
  OriginalNotionalPercentageOutstanding_35.setString("90.210000");
  msg.set(OriginalNotionalPercentageOutstanding_35);
  Instrument_35.insert(OriginalNotionalPercentageOutstanding_35.getString());
  FIX::Pool Pool_35("STRING_1586610213");
  msg.set(Pool_35);
  Instrument_35.insert(Pool_35.getString());
  FIX::PositionLimit PositionLimit_35(967620753);
  msg.set(PositionLimit_35);
  Instrument_35.insert(PositionLimit_35.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_35("STRING_INT");
  msg.set(PriceQuoteMethod_35);
  Instrument_35.insert(PriceQuoteMethod_35.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_35("STRING_1911999998");
  msg.set(PriceUnitOfMeasure_35);
  Instrument_35.insert(PriceUnitOfMeasure_35.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_35;
  PriceUnitOfMeasureQty_35.setString("12160638");
  msg.set(PriceUnitOfMeasureQty_35);
  Instrument_35.insert(PriceUnitOfMeasureQty_35.getString());
  FIX::Product Product_37(13);
  msg.set(Product_37);
  Instrument_35.insert(Product_37.getString());
  FIX::ProductComplex ProductComplex_35("STRING_1010795514");
  msg.set(ProductComplex_35);
  Instrument_35.insert(ProductComplex_35.getString());
  FIX::PutOrCall PutOrCall_35(0);
  msg.set(PutOrCall_35);
  Instrument_35.insert(PutOrCall_35.getString());
  FIX::RedemptionDate RedemptionDate_35("LOCALMKTDATE_1371105430");
  msg.set(RedemptionDate_35);
  Instrument_35.insert(RedemptionDate_35.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_35("STRING_1686867617");
  msg.set(RepoCollateralSecurityType_35);
  Instrument_35.insert(RepoCollateralSecurityType_35.getString());
  FIX::RepurchaseRate RepurchaseRate_35;
  RepurchaseRate_35.setString("26.690000");
  msg.set(RepurchaseRate_35);
  Instrument_35.insert(RepurchaseRate_35.getString());
  FIX::RepurchaseTerm RepurchaseTerm_35(992997095);
  msg.set(RepurchaseTerm_35);
  Instrument_35.insert(RepurchaseTerm_35.getString());
  FIX::RestructuringType RestructuringType_35("STRING_MR");
  msg.set(RestructuringType_35);
  Instrument_35.insert(RestructuringType_35.getString());
  FIX::SecurityDesc SecurityDesc_35("STRING_2024826773");
  msg.set(SecurityDesc_35);
  Instrument_35.insert(SecurityDesc_35.getString());
  FIX::SecurityExchange SecurityExchange_35("EXCHANGE_605094696");
  msg.set(SecurityExchange_35);
  Instrument_35.insert(SecurityExchange_35.getString());
  FIX::SecurityGroup SecurityGroup_35("STRING_705922235");
  msg.set(SecurityGroup_35);
  Instrument_35.insert(SecurityGroup_35.getString());
  FIX::SecurityID SecurityID_35("STRING_1533018249");
  msg.set(SecurityID_35);
  Instrument_35.insert(SecurityID_35.getString());
  FIX::SecurityIDSource SecurityIDSource_35("STRING_K");
  msg.set(SecurityIDSource_35);
  Instrument_35.insert(SecurityIDSource_35.getString());
  FIX::SecurityStatus SecurityStatus_35("STRING_2");
  msg.set(SecurityStatus_35);
  Instrument_35.insert(SecurityStatus_35.getString());
  FIX::SecuritySubType SecuritySubType_36("STRING_713704887");
  msg.set(SecuritySubType_36);
  Instrument_35.insert(SecuritySubType_36.getString());
  FIX::SecurityType SecurityType_37("STRING_ONITE");
  msg.set(SecurityType_37);
  Instrument_35.insert(SecurityType_37.getString());
  FIX::Seniority Seniority_35("STRING_SD");
  msg.set(Seniority_35);
  Instrument_35.insert(Seniority_35.getString());
  FIX::SettlMethod SettlMethod_35('C');
  msg.set(SettlMethod_35);
  Instrument_35.insert(SettlMethod_35.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_35("STRING_265593680");
  msg.set(SettleOnOpenFlag_35);
  Instrument_35.insert(SettleOnOpenFlag_35.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_35("STRING_456100397");
  msg.set(StateOrProvinceOfIssue_35);
  Instrument_35.insert(StateOrProvinceOfIssue_35.getString());
  FIX::StrikeCurrency StrikeCurrency_35("GBP");
  msg.set(StrikeCurrency_35);
  Instrument_35.insert(StrikeCurrency_35.getString());
  FIX::StrikeMultiplier StrikeMultiplier_35;
  StrikeMultiplier_35.setString("6705473");
  msg.set(StrikeMultiplier_35);
  Instrument_35.insert(StrikeMultiplier_35.getString());
  FIX::StrikePrice StrikePrice_35;
  StrikePrice_35.setString("3099388");
  msg.set(StrikePrice_35);
  Instrument_35.insert(StrikePrice_35.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_35(4);
  msg.set(StrikePriceBoundaryMethod_35);
  Instrument_35.insert(StrikePriceBoundaryMethod_35.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_35;
  StrikePriceBoundaryPrecision_35.setString("26.920000");
  msg.set(StrikePriceBoundaryPrecision_35);
  Instrument_35.insert(StrikePriceBoundaryPrecision_35.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_35(3);
  msg.set(StrikePriceDeterminationMethod_35);
  Instrument_35.insert(StrikePriceDeterminationMethod_35.getString());
  FIX::StrikeValue StrikeValue_35;
  StrikeValue_35.setString("15749802");
  msg.set(StrikeValue_35);
  Instrument_35.insert(StrikeValue_35.getString());
  FIX::Symbol Symbol_35("STRING_1763057318");
  msg.set(Symbol_35);
  Instrument_35.insert(Symbol_35.getString());
  FIX::SymbolSfx SymbolSfx_35("STRING_CD");
  msg.set(SymbolSfx_35);
  Instrument_35.insert(SymbolSfx_35.getString());
  FIX::TimeUnit TimeUnit_35("STRING_D");
  msg.set(TimeUnit_35);
  Instrument_35.insert(TimeUnit_35.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_35(1);
  msg.set(UnderlyingPriceDeterminationMethod_35);
  Instrument_35.insert(UnderlyingPriceDeterminationMethod_35.getString());
  FIX::UnitOfMeasure UnitOfMeasure_35("STRING_lbs");
  msg.set(UnitOfMeasure_35);
  Instrument_35.insert(UnitOfMeasure_35.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_35;
  UnitOfMeasureQty_35.setString("15440421");
  msg.set(UnitOfMeasureQty_35);
  Instrument_35.insert(UnitOfMeasureQty_35.getString());
  FIX::ValuationMethod ValuationMethod_35("STRING_CDSD");
  msg.set(ValuationMethod_35);
  Instrument_35.insert(ValuationMethod_35.getString());
  all_values.push_back(Instrument_35);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::MultilegOrderCancelReplace::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_72;
    FIX::ComplexEventCondition ComplexEventCondition_72(1);
    noComplexEvents_0_0.set(ComplexEventCondition_72);
    ComplexEvents_NoComplexEvents_72.insert(ComplexEventCondition_72.getString());
    FIX::ComplexEventPrice ComplexEventPrice_72;
    ComplexEventPrice_72.setString("590513");
    noComplexEvents_0_0.set(ComplexEventPrice_72);
    ComplexEvents_NoComplexEvents_72.insert(ComplexEventPrice_72.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_72(1);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_72);
    ComplexEvents_NoComplexEvents_72.insert(ComplexEventPriceBoundaryMethod_72.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_72;
    ComplexEventPriceBoundaryPrecision_72.setString("79.130000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_72);
    ComplexEvents_NoComplexEvents_72.insert(ComplexEventPriceBoundaryPrecision_72.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_72(1);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_72);
    ComplexEvents_NoComplexEvents_72.insert(ComplexEventPriceTimeType_72.getString());
    FIX::ComplexEventType ComplexEventType_72(9);
    noComplexEvents_0_0.set(ComplexEventType_72);
    ComplexEvents_NoComplexEvents_72.insert(ComplexEventType_72.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_72;
    ComplexOptPayoutAmount_72.setString("12432025");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_72);
    ComplexEvents_NoComplexEvents_72.insert(ComplexOptPayoutAmount_72.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_72);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::MultilegOrderCancelReplace::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_157;
      FIX::ComplexEventEndDate ComplexEventEndDate_157(FIX::UTCTIMESTAMP(10, 1, 47, 12, 102005));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_157);
      ComplexEventDates_NoComplexEventDates_157.insert(ComplexEventEndDate_157.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_157(FIX::UTCTIMESTAMP(6, 44, 20, 25, 92014));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_157);
      ComplexEventDates_NoComplexEventDates_157.insert(ComplexEventStartDate_157.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_157);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::MultilegOrderCancelReplace::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_314;
        FIX::ComplexEventEndTime ComplexEventEndTime_314(FIX::UTCTIMEONLY(2, 54, 31));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_314);
        ComplexEventTimes_NoComplexEventTimes_314.insert(ComplexEventEndTime_314.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_314(FIX::UTCTIMEONLY(5, 38, 47));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_314);
        ComplexEventTimes_NoComplexEventTimes_314.insert(ComplexEventStartTime_314.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_314);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_315;
        FIX::ComplexEventEndTime ComplexEventEndTime_315(FIX::UTCTIMEONLY(8, 40, 51));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_315);
        ComplexEventTimes_NoComplexEventTimes_315.insert(ComplexEventEndTime_315.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_315(FIX::UTCTIMEONLY(3, 46, 15));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_315);
        ComplexEventTimes_NoComplexEventTimes_315.insert(ComplexEventStartTime_315.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_315);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::MultilegOrderCancelReplace::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_76;
    FIX::EventDate EventDate_76("LOCALMKTDATE_1698548280");
    noEvents_0_0.set(EventDate_76);
    EvntGrp_NoEvents_76.insert(EventDate_76.getString());
    FIX::EventPx EventPx_76;
    EventPx_76.setString("15669836");
    noEvents_0_0.set(EventPx_76);
    EvntGrp_NoEvents_76.insert(EventPx_76.getString());
    FIX::EventText EventText_76("STRING_75353150");
    noEvents_0_0.set(EventText_76);
    EvntGrp_NoEvents_76.insert(EventText_76.getString());
    FIX::EventTime EventTime_76(FIX::UTCTIMESTAMP(6, 55, 55, 24, 42016));
    noEvents_0_0.set(EventTime_76);
    EvntGrp_NoEvents_76.insert(EventTime_76.getString());
    FIX::EventType EventType_76(14);
    noEvents_0_0.set(EventType_76);
    EvntGrp_NoEvents_76.insert(EventType_76.getString());
    all_values.push_back(EvntGrp_NoEvents_76);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::MultilegOrderCancelReplace::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_77;
    FIX::EventDate EventDate_77("LOCALMKTDATE_1658901807");
    noEvents_0_1.set(EventDate_77);
    EvntGrp_NoEvents_77.insert(EventDate_77.getString());
    FIX::EventPx EventPx_77;
    EventPx_77.setString("10808768");
    noEvents_0_1.set(EventPx_77);
    EvntGrp_NoEvents_77.insert(EventPx_77.getString());
    FIX::EventText EventText_77("STRING_1878384759");
    noEvents_0_1.set(EventText_77);
    EvntGrp_NoEvents_77.insert(EventText_77.getString());
    FIX::EventTime EventTime_77(FIX::UTCTIMESTAMP(13, 26, 10, 5, 122006));
    noEvents_0_1.set(EventTime_77);
    EvntGrp_NoEvents_77.insert(EventTime_77.getString());
    FIX::EventType EventType_77(14);
    noEvents_0_1.set(EventType_77);
    EvntGrp_NoEvents_77.insert(EventType_77.getString());
    all_values.push_back(EvntGrp_NoEvents_77);

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::MultilegOrderCancelReplace::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_64;
    FIX::InstrumentPartyID InstrumentPartyID_64("STRING_827519648");
    noInstrumentParties_0_0.set(InstrumentPartyID_64);
    InstrumentParties_NoInstrumentParties_64.insert(InstrumentPartyID_64.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_64('2');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_64);
    InstrumentParties_NoInstrumentParties_64.insert(InstrumentPartyIDSource_64.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_64(1974311960);
    noInstrumentParties_0_0.set(InstrumentPartyRole_64);
    InstrumentParties_NoInstrumentParties_64.insert(InstrumentPartyRole_64.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_64);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::MultilegOrderCancelReplace::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_127;
      FIX::InstrumentPartySubID InstrumentPartySubID_127("STRING_1554384780");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_127);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_127.insert(InstrumentPartySubID_127.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_127(1715952838);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_127);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_127.insert(InstrumentPartySubIDType_127.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_127);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_128;
      FIX::InstrumentPartySubID InstrumentPartySubID_128("STRING_700191653");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_128);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_128.insert(InstrumentPartySubID_128.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_128(1465950003);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_128);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_128.insert(InstrumentPartySubIDType_128.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_128);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::MultilegOrderCancelReplace::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_65;
    FIX::InstrumentPartyID InstrumentPartyID_65("STRING_1267017470");
    noInstrumentParties_0_1.set(InstrumentPartyID_65);
    InstrumentParties_NoInstrumentParties_65.insert(InstrumentPartyID_65.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_65('1');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_65);
    InstrumentParties_NoInstrumentParties_65.insert(InstrumentPartyIDSource_65.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_65(1541303153);
    noInstrumentParties_0_1.set(InstrumentPartyRole_65);
    InstrumentParties_NoInstrumentParties_65.insert(InstrumentPartyRole_65.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_65);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::MultilegOrderCancelReplace::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_129;
      FIX::InstrumentPartySubID InstrumentPartySubID_129("STRING_419579372");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_129);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_129.insert(InstrumentPartySubID_129.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_129(89060980);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_129);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_129.insert(InstrumentPartySubIDType_129.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_129);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::MultilegOrderCancelReplace::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_66;
    FIX::InstrumentPartyID InstrumentPartyID_66("STRING_1496904745");
    noInstrumentParties_0_2.set(InstrumentPartyID_66);
    InstrumentParties_NoInstrumentParties_66.insert(InstrumentPartyID_66.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_66('1');
    noInstrumentParties_0_2.set(InstrumentPartyIDSource_66);
    InstrumentParties_NoInstrumentParties_66.insert(InstrumentPartyIDSource_66.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_66(2074738099);
    noInstrumentParties_0_2.set(InstrumentPartyRole_66);
    InstrumentParties_NoInstrumentParties_66.insert(InstrumentPartyRole_66.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_66);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::MultilegOrderCancelReplace::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_130;
      FIX::InstrumentPartySubID InstrumentPartySubID_130("STRING_415512161");
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubID_130);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_130.insert(InstrumentPartySubID_130.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_130(1586156258);
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubIDType_130);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_130.insert(InstrumentPartySubIDType_130.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_130);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::MultilegOrderCancelReplace::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_69;
    FIX::SecurityAltID SecurityAltID_69("STRING_146413273");
    noSecurityAltID_0_0.set(SecurityAltID_69);
    SecAltIDGrp_NoSecurityAltID_69.insert(SecurityAltID_69.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_69("STRING_386372777");
    noSecurityAltID_0_0.set(SecurityAltIDSource_69);
    SecAltIDGrp_NoSecurityAltID_69.insert(SecurityAltIDSource_69.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_69);

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_70;
  FIX::SecurityXML SecurityXML_71("XMLDATA_2105633593");
  msg.set(SecurityXML_71);
  FIX::SecurityXMLLen SecurityXMLLen_35(1583652519);
  msg.set(SecurityXMLLen_35);
  FIX::SecurityXMLSchema SecurityXMLSchema_35("STRING_465303747");
  msg.set(SecurityXMLSchema_35);
  SecurityXML_70.insert(SecurityXMLSchema_35.getString());
  all_values.push_back(SecurityXML_70);

  // LegOrdGrp
  // Group LegOrdGrp.NoLegs
  {
    FIX50SP2::MultilegOrderCancelReplace::NoLegs noLegs_0_0;
    // LegOrdGrp.NoLegs
    multiset<string> LegOrdGrp_NoLegs_0;
    FIX::LegAllocID LegAllocID_3("STRING_1976304722");
    noLegs_0_0.set(LegAllocID_3);
    LegOrdGrp_NoLegs_0.insert(LegAllocID_3.getString());
    FIX::LegCoveredOrUncovered LegCoveredOrUncovered_3(889003395);
    noLegs_0_0.set(LegCoveredOrUncovered_3);
    LegOrdGrp_NoLegs_0.insert(LegCoveredOrUncovered_3.getString());
    FIX::LegCurrencyRatio LegCurrencyRatio_3;
    LegCurrencyRatio_3.setString("6662240");
    noLegs_0_0.set(LegCurrencyRatio_3);
    LegOrdGrp_NoLegs_0.insert(LegCurrencyRatio_3.getString());
    FIX::LegDividendYield LegDividendYield_3;
    LegDividendYield_3.setString("10.230000");
    noLegs_0_0.set(LegDividendYield_3);
    LegOrdGrp_NoLegs_0.insert(LegDividendYield_3.getString());
    FIX::LegExecInst LegExecInst_3("MULTIPLECHARVALUE_1716523043");
    noLegs_0_0.set(LegExecInst_3);
    LegOrdGrp_NoLegs_0.insert(LegExecInst_3.getString());
    FIX::LegOrderQty LegOrderQty_3;
    LegOrderQty_3.setString("5924233");
    noLegs_0_0.set(LegOrderQty_3);
    LegOrdGrp_NoLegs_0.insert(LegOrderQty_3.getString());
    FIX::LegPositionEffect LegPositionEffect_3('9');
    noLegs_0_0.set(LegPositionEffect_3);
    LegOrdGrp_NoLegs_0.insert(LegPositionEffect_3.getString());
    FIX::LegQty LegQty_3;
    LegQty_3.setString("14645250");
    noLegs_0_0.set(LegQty_3);
    LegOrdGrp_NoLegs_0.insert(LegQty_3.getString());
    FIX::LegRefID LegRefID_3("STRING_2146808121");
    noLegs_0_0.set(LegRefID_3);
    LegOrdGrp_NoLegs_0.insert(LegRefID_3.getString());
    FIX::LegSettlCurrency LegSettlCurrency_3("JPY");
    noLegs_0_0.set(LegSettlCurrency_3);
    LegOrdGrp_NoLegs_0.insert(LegSettlCurrency_3.getString());
    FIX::LegSettlDate LegSettlDate_3("LOCALMKTDATE_1465274476");
    noLegs_0_0.set(LegSettlDate_3);
    LegOrdGrp_NoLegs_0.insert(LegSettlDate_3.getString());
    FIX::LegSettlType LegSettlType_3('1');
    noLegs_0_0.set(LegSettlType_3);
    LegOrdGrp_NoLegs_0.insert(LegSettlType_3.getString());
    FIX::LegSwapType LegSwapType_3(1);
    noLegs_0_0.set(LegSwapType_3);
    LegOrdGrp_NoLegs_0.insert(LegSwapType_3.getString());
    FIX::LegVolatility LegVolatility_3;
    LegVolatility_3.setString("8590939");
    noLegs_0_0.set(LegVolatility_3);
    LegOrdGrp_NoLegs_0.insert(LegVolatility_3.getString());
    all_values.push_back(LegOrdGrp_NoLegs_0);

    // InstrumentLeg
    multiset<string> InstrumentLeg_60;
    FIX::EncodedLegIssuer EncodedLegIssuer_60("DATA_505108717");
    noLegs_0_0.set(EncodedLegIssuer_60);
    InstrumentLeg_60.insert(EncodedLegIssuer_60.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_60(556504100);
    noLegs_0_0.set(EncodedLegIssuerLen_60);
    InstrumentLeg_60.insert(EncodedLegIssuerLen_60.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_60("DATA_948154961");
    noLegs_0_0.set(EncodedLegSecurityDesc_60);
    InstrumentLeg_60.insert(EncodedLegSecurityDesc_60.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_60(2002013463);
    noLegs_0_0.set(EncodedLegSecurityDescLen_60);
    InstrumentLeg_60.insert(EncodedLegSecurityDescLen_60.getString());
    FIX::LegCFICode LegCFICode_60("STRING_156409268");
    noLegs_0_0.set(LegCFICode_60);
    InstrumentLeg_60.insert(LegCFICode_60.getString());
    FIX::LegContractMultiplier LegContractMultiplier_60;
    LegContractMultiplier_60.setString("8754094");
    noLegs_0_0.set(LegContractMultiplier_60);
    InstrumentLeg_60.insert(LegContractMultiplier_60.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_60(1275517648);
    noLegs_0_0.set(LegContractMultiplierUnit_60);
    InstrumentLeg_60.insert(LegContractMultiplierUnit_60.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_60("MONTHYEAR_571921430");
    noLegs_0_0.set(LegContractSettlMonth_60);
    InstrumentLeg_60.insert(LegContractSettlMonth_60.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_60("COUNTRY_314082022");
    noLegs_0_0.set(LegCountryOfIssue_60);
    InstrumentLeg_60.insert(LegCountryOfIssue_60.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_60("LOCALMKTDATE_1629898732");
    noLegs_0_0.set(LegCouponPaymentDate_60);
    InstrumentLeg_60.insert(LegCouponPaymentDate_60.getString());
    FIX::LegCouponRate LegCouponRate_60;
    LegCouponRate_60.setString("47.030000");
    noLegs_0_0.set(LegCouponRate_60);
    InstrumentLeg_60.insert(LegCouponRate_60.getString());
    FIX::LegCreditRating LegCreditRating_60("STRING_700454799");
    noLegs_0_0.set(LegCreditRating_60);
    InstrumentLeg_60.insert(LegCreditRating_60.getString());
    FIX::LegCurrency LegCurrency_60("JPY");
    noLegs_0_0.set(LegCurrency_60);
    InstrumentLeg_60.insert(LegCurrency_60.getString());
    FIX::LegDatedDate LegDatedDate_60("LOCALMKTDATE_1165758546");
    noLegs_0_0.set(LegDatedDate_60);
    InstrumentLeg_60.insert(LegDatedDate_60.getString());
    FIX::LegExerciseStyle LegExerciseStyle_60(197236760);
    noLegs_0_0.set(LegExerciseStyle_60);
    InstrumentLeg_60.insert(LegExerciseStyle_60.getString());
    FIX::LegFactor LegFactor_60;
    LegFactor_60.setString("21308082");
    noLegs_0_0.set(LegFactor_60);
    InstrumentLeg_60.insert(LegFactor_60.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_60(2054761941);
    noLegs_0_0.set(LegFlowScheduleType_60);
    InstrumentLeg_60.insert(LegFlowScheduleType_60.getString());
    FIX::LegInstrRegistry LegInstrRegistry_60("STRING_863460835");
    noLegs_0_0.set(LegInstrRegistry_60);
    InstrumentLeg_60.insert(LegInstrRegistry_60.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_60("LOCALMKTDATE_1140535672");
    noLegs_0_0.set(LegInterestAccrualDate_60);
    InstrumentLeg_60.insert(LegInterestAccrualDate_60.getString());
    FIX::LegIssueDate LegIssueDate_60("LOCALMKTDATE_1623801336");
    noLegs_0_0.set(LegIssueDate_60);
    InstrumentLeg_60.insert(LegIssueDate_60.getString());
    FIX::LegIssuer LegIssuer_60("STRING_1455884176");
    noLegs_0_0.set(LegIssuer_60);
    InstrumentLeg_60.insert(LegIssuer_60.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_60("STRING_2124575007");
    noLegs_0_0.set(LegLocaleOfIssue_60);
    InstrumentLeg_60.insert(LegLocaleOfIssue_60.getString());
    FIX::LegMaturityDate LegMaturityDate_60("LOCALMKTDATE_940842749");
    noLegs_0_0.set(LegMaturityDate_60);
    InstrumentLeg_60.insert(LegMaturityDate_60.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_60("MONTHYEAR_1455208649");
    noLegs_0_0.set(LegMaturityMonthYear_60);
    InstrumentLeg_60.insert(LegMaturityMonthYear_60.getString());
    FIX::LegMaturityTime LegMaturityTime_60("TZTIMEONLY_529599885");
    noLegs_0_0.set(LegMaturityTime_60);
    InstrumentLeg_60.insert(LegMaturityTime_60.getString());
    FIX::LegOptAttribute LegOptAttribute_60('9');
    noLegs_0_0.set(LegOptAttribute_60);
    InstrumentLeg_60.insert(LegOptAttribute_60.getString());
    FIX::LegOptionRatio LegOptionRatio_60;
    LegOptionRatio_60.setString("7729994");
    noLegs_0_0.set(LegOptionRatio_60);
    InstrumentLeg_60.insert(LegOptionRatio_60.getString());
    FIX::LegPool LegPool_60("STRING_201642232");
    noLegs_0_0.set(LegPool_60);
    InstrumentLeg_60.insert(LegPool_60.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_60("STRING_1095000544");
    noLegs_0_0.set(LegPriceUnitOfMeasure_60);
    InstrumentLeg_60.insert(LegPriceUnitOfMeasure_60.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_60;
    LegPriceUnitOfMeasureQty_60.setString("16320934");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_60);
    InstrumentLeg_60.insert(LegPriceUnitOfMeasureQty_60.getString());
    FIX::LegProduct LegProduct_60(706750950);
    noLegs_0_0.set(LegProduct_60);
    InstrumentLeg_60.insert(LegProduct_60.getString());
    FIX::LegPutOrCall LegPutOrCall_60(1651504645);
    noLegs_0_0.set(LegPutOrCall_60);
    InstrumentLeg_60.insert(LegPutOrCall_60.getString());
    FIX::LegRatioQty LegRatioQty_60;
    LegRatioQty_60.setString("4327647");
    noLegs_0_0.set(LegRatioQty_60);
    InstrumentLeg_60.insert(LegRatioQty_60.getString());
    FIX::LegRedemptionDate LegRedemptionDate_60("LOCALMKTDATE_561280765");
    noLegs_0_0.set(LegRedemptionDate_60);
    InstrumentLeg_60.insert(LegRedemptionDate_60.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_60("STRING_1807913913");
    noLegs_0_0.set(LegRepoCollateralSecurityType_60);
    InstrumentLeg_60.insert(LegRepoCollateralSecurityType_60.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_60;
    LegRepurchaseRate_60.setString("41.830000");
    noLegs_0_0.set(LegRepurchaseRate_60);
    InstrumentLeg_60.insert(LegRepurchaseRate_60.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_60(1836798413);
    noLegs_0_0.set(LegRepurchaseTerm_60);
    InstrumentLeg_60.insert(LegRepurchaseTerm_60.getString());
    FIX::LegSecurityDesc LegSecurityDesc_60("STRING_232351695");
    noLegs_0_0.set(LegSecurityDesc_60);
    InstrumentLeg_60.insert(LegSecurityDesc_60.getString());
    FIX::LegSecurityExchange LegSecurityExchange_60("EXCHANGE_1622256205");
    noLegs_0_0.set(LegSecurityExchange_60);
    InstrumentLeg_60.insert(LegSecurityExchange_60.getString());
    FIX::LegSecurityID LegSecurityID_60("STRING_1319213498");
    noLegs_0_0.set(LegSecurityID_60);
    InstrumentLeg_60.insert(LegSecurityID_60.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_60("STRING_950686398");
    noLegs_0_0.set(LegSecurityIDSource_60);
    InstrumentLeg_60.insert(LegSecurityIDSource_60.getString());
    FIX::LegSecuritySubType LegSecuritySubType_60("STRING_175227357");
    noLegs_0_0.set(LegSecuritySubType_60);
    InstrumentLeg_60.insert(LegSecuritySubType_60.getString());
    FIX::LegSecurityType LegSecurityType_60("STRING_759778527");
    noLegs_0_0.set(LegSecurityType_60);
    InstrumentLeg_60.insert(LegSecurityType_60.getString());
    FIX::LegSide LegSide_60('1');
    noLegs_0_0.set(LegSide_60);
    InstrumentLeg_60.insert(LegSide_60.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_60("STRING_1340985903");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_60);
    InstrumentLeg_60.insert(LegStateOrProvinceOfIssue_60.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_60("CHF");
    noLegs_0_0.set(LegStrikeCurrency_60);
    InstrumentLeg_60.insert(LegStrikeCurrency_60.getString());
    FIX::LegStrikePrice LegStrikePrice_60;
    LegStrikePrice_60.setString("12482641");
    noLegs_0_0.set(LegStrikePrice_60);
    InstrumentLeg_60.insert(LegStrikePrice_60.getString());
    FIX::LegSymbol LegSymbol_60("STRING_1820476123");
    noLegs_0_0.set(LegSymbol_60);
    InstrumentLeg_60.insert(LegSymbol_60.getString());
    FIX::LegSymbolSfx LegSymbolSfx_60("STRING_81566645");
    noLegs_0_0.set(LegSymbolSfx_60);
    InstrumentLeg_60.insert(LegSymbolSfx_60.getString());
    FIX::LegTimeUnit LegTimeUnit_60("STRING_724581885");
    noLegs_0_0.set(LegTimeUnit_60);
    InstrumentLeg_60.insert(LegTimeUnit_60.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_60("STRING_1128876651");
    noLegs_0_0.set(LegUnitOfMeasure_60);
    InstrumentLeg_60.insert(LegUnitOfMeasure_60.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_60;
    LegUnitOfMeasureQty_60.setString("586580");
    noLegs_0_0.set(LegUnitOfMeasureQty_60);
    InstrumentLeg_60.insert(LegUnitOfMeasureQty_60.getString());
    all_values.push_back(InstrumentLeg_60);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_108;
      FIX::LegSecurityAltID LegSecurityAltID_108("STRING_436601652");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_108);
      LegSecAltIDGrp_NoLegSecurityAltID_108.insert(LegSecurityAltID_108.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_108("STRING_588257889");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_108);
      LegSecAltIDGrp_NoLegSecurityAltID_108.insert(LegSecurityAltIDSource_108.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_108);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    // LegPreAllocGrp
    // Group LegPreAllocGrp.NoLegAllocs
    {
      FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs noLegAllocs_0_1_0;
      // LegPreAllocGrp.NoLegAllocs
      multiset<string> LegPreAllocGrp_NoLegAllocs_6;
      FIX::LegAllocAccount LegAllocAccount_6("STRING_1209601129");
      noLegAllocs_0_1_0.set(LegAllocAccount_6);
      LegPreAllocGrp_NoLegAllocs_6.insert(LegAllocAccount_6.getString());
      FIX::LegAllocAcctIDSource LegAllocAcctIDSource_6("STRING_789900122");
      noLegAllocs_0_1_0.set(LegAllocAcctIDSource_6);
      LegPreAllocGrp_NoLegAllocs_6.insert(LegAllocAcctIDSource_6.getString());
      FIX::LegAllocQty LegAllocQty_6;
      LegAllocQty_6.setString("15710173");
      noLegAllocs_0_1_0.set(LegAllocQty_6);
      LegPreAllocGrp_NoLegAllocs_6.insert(LegAllocQty_6.getString());
      FIX::LegAllocSettlCurrency LegAllocSettlCurrency_6("GBP");
      noLegAllocs_0_1_0.set(LegAllocSettlCurrency_6);
      LegPreAllocGrp_NoLegAllocs_6.insert(LegAllocSettlCurrency_6.getString());
      FIX::LegIndividualAllocID LegIndividualAllocID_6("STRING_1075038344");
      noLegAllocs_0_1_0.set(LegIndividualAllocID_6);
      LegPreAllocGrp_NoLegAllocs_6.insert(LegIndividualAllocID_6.getString());
      all_values.push_back(LegPreAllocGrp_NoLegAllocs_6);

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_0_0_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_33;
        FIX::Nested2PartyID Nested2PartyID_33("STRING_2057931837");
        noNested2PartyIDs_0_0_2_0.set(Nested2PartyID_33);
        NestedParties2_NoNested2PartyIDs_33.insert(Nested2PartyID_33.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_33('7');
        noNested2PartyIDs_0_0_2_0.set(Nested2PartyIDSource_33);
        NestedParties2_NoNested2PartyIDs_33.insert(Nested2PartyIDSource_33.getString());
        FIX::Nested2PartyRole Nested2PartyRole_33(287666245);
        noNested2PartyIDs_0_0_2_0.set(Nested2PartyRole_33);
        NestedParties2_NoNested2PartyIDs_33.insert(Nested2PartyRole_33.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_33);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_69;
          FIX::Nested2PartySubID Nested2PartySubID_69("STRING_967820305");
          noNested2PartySubIDs_0_0_0_3_0.set(Nested2PartySubID_69);
          NstdPtys2SubGrp_NoNested2PartySubIDs_69.insert(Nested2PartySubID_69.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_69(1909922450);
          noNested2PartySubIDs_0_0_0_3_0.set(Nested2PartySubIDType_69);
          NstdPtys2SubGrp_NoNested2PartySubIDs_69.insert(Nested2PartySubIDType_69.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_69);

          noNested2PartyIDs_0_0_2_0.addGroup(noNested2PartySubIDs_0_0_0_3_0);
        }
        noLegAllocs_0_1_0.addGroup(noNested2PartyIDs_0_0_2_0);
      }
      noLegs_0_0.addGroup(noLegAllocs_0_1_0);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs noLegAllocs_0_1_1;
      // LegPreAllocGrp.NoLegAllocs
      multiset<string> LegPreAllocGrp_NoLegAllocs_7;
      FIX::LegAllocAccount LegAllocAccount_7("STRING_918976452");
      noLegAllocs_0_1_1.set(LegAllocAccount_7);
      LegPreAllocGrp_NoLegAllocs_7.insert(LegAllocAccount_7.getString());
      FIX::LegAllocAcctIDSource LegAllocAcctIDSource_7("STRING_1918506704");
      noLegAllocs_0_1_1.set(LegAllocAcctIDSource_7);
      LegPreAllocGrp_NoLegAllocs_7.insert(LegAllocAcctIDSource_7.getString());
      FIX::LegAllocQty LegAllocQty_7;
      LegAllocQty_7.setString("20851498");
      noLegAllocs_0_1_1.set(LegAllocQty_7);
      LegPreAllocGrp_NoLegAllocs_7.insert(LegAllocQty_7.getString());
      FIX::LegAllocSettlCurrency LegAllocSettlCurrency_7("JPY");
      noLegAllocs_0_1_1.set(LegAllocSettlCurrency_7);
      LegPreAllocGrp_NoLegAllocs_7.insert(LegAllocSettlCurrency_7.getString());
      FIX::LegIndividualAllocID LegIndividualAllocID_7("STRING_1278652063");
      noLegAllocs_0_1_1.set(LegIndividualAllocID_7);
      LegPreAllocGrp_NoLegAllocs_7.insert(LegIndividualAllocID_7.getString());
      all_values.push_back(LegPreAllocGrp_NoLegAllocs_7);

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_0_1_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_34;
        FIX::Nested2PartyID Nested2PartyID_34("STRING_1964727649");
        noNested2PartyIDs_0_1_2_0.set(Nested2PartyID_34);
        NestedParties2_NoNested2PartyIDs_34.insert(Nested2PartyID_34.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_34('3');
        noNested2PartyIDs_0_1_2_0.set(Nested2PartyIDSource_34);
        NestedParties2_NoNested2PartyIDs_34.insert(Nested2PartyIDSource_34.getString());
        FIX::Nested2PartyRole Nested2PartyRole_34(161279094);
        noNested2PartyIDs_0_1_2_0.set(Nested2PartyRole_34);
        NestedParties2_NoNested2PartyIDs_34.insert(Nested2PartyRole_34.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_34);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_70;
          FIX::Nested2PartySubID Nested2PartySubID_70("STRING_1104014497");
          noNested2PartySubIDs_0_1_0_3_0.set(Nested2PartySubID_70);
          NstdPtys2SubGrp_NoNested2PartySubIDs_70.insert(Nested2PartySubID_70.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_70(1290155745);
          noNested2PartySubIDs_0_1_0_3_0.set(Nested2PartySubIDType_70);
          NstdPtys2SubGrp_NoNested2PartySubIDs_70.insert(Nested2PartySubIDType_70.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_70);

          noNested2PartyIDs_0_1_2_0.addGroup(noNested2PartySubIDs_0_1_0_3_0);
        }
        noLegAllocs_0_1_1.addGroup(noNested2PartyIDs_0_1_2_0);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_0_1_2_1;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_35;
        FIX::Nested2PartyID Nested2PartyID_35("STRING_2104952299");
        noNested2PartyIDs_0_1_2_1.set(Nested2PartyID_35);
        NestedParties2_NoNested2PartyIDs_35.insert(Nested2PartyID_35.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_35('6');
        noNested2PartyIDs_0_1_2_1.set(Nested2PartyIDSource_35);
        NestedParties2_NoNested2PartyIDs_35.insert(Nested2PartyIDSource_35.getString());
        FIX::Nested2PartyRole Nested2PartyRole_35(1726757397);
        noNested2PartyIDs_0_1_2_1.set(Nested2PartyRole_35);
        NestedParties2_NoNested2PartyIDs_35.insert(Nested2PartyRole_35.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_35);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_1_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_71;
          FIX::Nested2PartySubID Nested2PartySubID_71("STRING_1097972287");
          noNested2PartySubIDs_0_1_1_3_0.set(Nested2PartySubID_71);
          NstdPtys2SubGrp_NoNested2PartySubIDs_71.insert(Nested2PartySubID_71.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_71(788874878);
          noNested2PartySubIDs_0_1_1_3_0.set(Nested2PartySubIDType_71);
          NstdPtys2SubGrp_NoNested2PartySubIDs_71.insert(Nested2PartySubIDType_71.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_71);

          noNested2PartyIDs_0_1_2_1.addGroup(noNested2PartySubIDs_0_1_1_3_0);
        }
        {
          FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_1_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_72;
          FIX::Nested2PartySubID Nested2PartySubID_72("STRING_1335626662");
          noNested2PartySubIDs_0_1_1_3_1.set(Nested2PartySubID_72);
          NstdPtys2SubGrp_NoNested2PartySubIDs_72.insert(Nested2PartySubID_72.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_72(521505987);
          noNested2PartySubIDs_0_1_1_3_1.set(Nested2PartySubIDType_72);
          NstdPtys2SubGrp_NoNested2PartySubIDs_72.insert(Nested2PartySubIDType_72.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_72);

          noNested2PartyIDs_0_1_2_1.addGroup(noNested2PartySubIDs_0_1_1_3_1);
        }
        {
          FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_1_3_2;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_73;
          FIX::Nested2PartySubID Nested2PartySubID_73("STRING_1483085817");
          noNested2PartySubIDs_0_1_1_3_2.set(Nested2PartySubID_73);
          NstdPtys2SubGrp_NoNested2PartySubIDs_73.insert(Nested2PartySubID_73.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_73(684794086);
          noNested2PartySubIDs_0_1_1_3_2.set(Nested2PartySubIDType_73);
          NstdPtys2SubGrp_NoNested2PartySubIDs_73.insert(Nested2PartySubIDType_73.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_73);

          noNested2PartyIDs_0_1_2_1.addGroup(noNested2PartySubIDs_0_1_1_3_2);
        }
        noLegAllocs_0_1_1.addGroup(noNested2PartyIDs_0_1_2_1);
      }
      noLegs_0_0.addGroup(noLegAllocs_0_1_1);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs noLegAllocs_0_1_2;
      // LegPreAllocGrp.NoLegAllocs
      multiset<string> LegPreAllocGrp_NoLegAllocs_8;
      FIX::LegAllocAccount LegAllocAccount_8("STRING_1596544331");
      noLegAllocs_0_1_2.set(LegAllocAccount_8);
      LegPreAllocGrp_NoLegAllocs_8.insert(LegAllocAccount_8.getString());
      FIX::LegAllocAcctIDSource LegAllocAcctIDSource_8("STRING_462577879");
      noLegAllocs_0_1_2.set(LegAllocAcctIDSource_8);
      LegPreAllocGrp_NoLegAllocs_8.insert(LegAllocAcctIDSource_8.getString());
      FIX::LegAllocQty LegAllocQty_8;
      LegAllocQty_8.setString("5952422");
      noLegAllocs_0_1_2.set(LegAllocQty_8);
      LegPreAllocGrp_NoLegAllocs_8.insert(LegAllocQty_8.getString());
      FIX::LegAllocSettlCurrency LegAllocSettlCurrency_8("GBP");
      noLegAllocs_0_1_2.set(LegAllocSettlCurrency_8);
      LegPreAllocGrp_NoLegAllocs_8.insert(LegAllocSettlCurrency_8.getString());
      FIX::LegIndividualAllocID LegIndividualAllocID_8("STRING_195005230");
      noLegAllocs_0_1_2.set(LegIndividualAllocID_8);
      LegPreAllocGrp_NoLegAllocs_8.insert(LegIndividualAllocID_8.getString());
      all_values.push_back(LegPreAllocGrp_NoLegAllocs_8);

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_0_2_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_36;
        FIX::Nested2PartyID Nested2PartyID_36("STRING_512682927");
        noNested2PartyIDs_0_2_2_0.set(Nested2PartyID_36);
        NestedParties2_NoNested2PartyIDs_36.insert(Nested2PartyID_36.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_36('1');
        noNested2PartyIDs_0_2_2_0.set(Nested2PartyIDSource_36);
        NestedParties2_NoNested2PartyIDs_36.insert(Nested2PartyIDSource_36.getString());
        FIX::Nested2PartyRole Nested2PartyRole_36(923372655);
        noNested2PartyIDs_0_2_2_0.set(Nested2PartyRole_36);
        NestedParties2_NoNested2PartyIDs_36.insert(Nested2PartyRole_36.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_36);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_2_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_74;
          FIX::Nested2PartySubID Nested2PartySubID_74("STRING_645253014");
          noNested2PartySubIDs_0_2_0_3_0.set(Nested2PartySubID_74);
          NstdPtys2SubGrp_NoNested2PartySubIDs_74.insert(Nested2PartySubID_74.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_74(1799585683);
          noNested2PartySubIDs_0_2_0_3_0.set(Nested2PartySubIDType_74);
          NstdPtys2SubGrp_NoNested2PartySubIDs_74.insert(Nested2PartySubIDType_74.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_74);

          noNested2PartyIDs_0_2_2_0.addGroup(noNested2PartySubIDs_0_2_0_3_0);
        }
        noLegAllocs_0_1_2.addGroup(noNested2PartyIDs_0_2_2_0);
      }
      noLegs_0_0.addGroup(noLegAllocs_0_1_2);
    }
    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegStipulations noLegStipulations_0_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_10;
      FIX::LegStipulationType LegStipulationType_10("STRING_1133539634");
      noLegStipulations_0_1_0.set(LegStipulationType_10);
      LegStipulations_NoLegStipulations_10.insert(LegStipulationType_10.getString());
      FIX::LegStipulationValue LegStipulationValue_10("STRING_1616829685");
      noLegStipulations_0_1_0.set(LegStipulationValue_10);
      LegStipulations_NoLegStipulations_10.insert(LegStipulationValue_10.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_10);

      noLegs_0_0.addGroup(noLegStipulations_0_1_0);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegStipulations noLegStipulations_0_1_1;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_11;
      FIX::LegStipulationType LegStipulationType_11("STRING_2108433761");
      noLegStipulations_0_1_1.set(LegStipulationType_11);
      LegStipulations_NoLegStipulations_11.insert(LegStipulationType_11.getString());
      FIX::LegStipulationValue LegStipulationValue_11("STRING_1294818728");
      noLegStipulations_0_1_1.set(LegStipulationValue_11);
      LegStipulations_NoLegStipulations_11.insert(LegStipulationValue_11.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_11);

      noLegs_0_0.addGroup(noLegStipulations_0_1_1);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_57;
      FIX::NestedPartyID NestedPartyID_57("STRING_1064964611");
      noNestedPartyIDs_0_1_0.set(NestedPartyID_57);
      NestedParties_NoNestedPartyIDs_57.insert(NestedPartyID_57.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_57('4');
      noNestedPartyIDs_0_1_0.set(NestedPartyIDSource_57);
      NestedParties_NoNestedPartyIDs_57.insert(NestedPartyIDSource_57.getString());
      FIX::NestedPartyRole NestedPartyRole_57(1473108982);
      noNestedPartyIDs_0_1_0.set(NestedPartyRole_57);
      NestedParties_NoNestedPartyIDs_57.insert(NestedPartyRole_57.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_57);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_108;
        FIX::NestedPartySubID NestedPartySubID_108("STRING_16764575");
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubID_108);
        NstdPtysSubGrp_NoNestedPartySubIDs_108.insert(NestedPartySubID_108.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_108(2018835523);
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubIDType_108);
        NstdPtysSubGrp_NoNestedPartySubIDs_108.insert(NestedPartySubIDType_108.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_108);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_109;
        FIX::NestedPartySubID NestedPartySubID_109("STRING_637408735");
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubID_109);
        NstdPtysSubGrp_NoNestedPartySubIDs_109.insert(NestedPartySubID_109.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_109(805639454);
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubIDType_109);
        NstdPtysSubGrp_NoNestedPartySubIDs_109.insert(NestedPartySubIDType_109.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_109);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_1);
      }
      noLegs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_58;
      FIX::NestedPartyID NestedPartyID_58("STRING_1206978537");
      noNestedPartyIDs_0_1_1.set(NestedPartyID_58);
      NestedParties_NoNestedPartyIDs_58.insert(NestedPartyID_58.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_58('1');
      noNestedPartyIDs_0_1_1.set(NestedPartyIDSource_58);
      NestedParties_NoNestedPartyIDs_58.insert(NestedPartyIDSource_58.getString());
      FIX::NestedPartyRole NestedPartyRole_58(141241623);
      noNestedPartyIDs_0_1_1.set(NestedPartyRole_58);
      NestedParties_NoNestedPartyIDs_58.insert(NestedPartyRole_58.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_58);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_110;
        FIX::NestedPartySubID NestedPartySubID_110("STRING_607975405");
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubID_110);
        NstdPtysSubGrp_NoNestedPartySubIDs_110.insert(NestedPartySubID_110.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_110(603819503);
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubIDType_110);
        NstdPtysSubGrp_NoNestedPartySubIDs_110.insert(NestedPartySubIDType_110.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_110);

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_111;
        FIX::NestedPartySubID NestedPartySubID_111("STRING_339531251");
        noNestedPartySubIDs_0_1_2_1.set(NestedPartySubID_111);
        NstdPtysSubGrp_NoNestedPartySubIDs_111.insert(NestedPartySubID_111.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_111(792504699);
        noNestedPartySubIDs_0_1_2_1.set(NestedPartySubIDType_111);
        NstdPtysSubGrp_NoNestedPartySubIDs_111.insert(NestedPartySubIDType_111.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_111);

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_112;
        FIX::NestedPartySubID NestedPartySubID_112("STRING_1354063627");
        noNestedPartySubIDs_0_1_2_2.set(NestedPartySubID_112);
        NstdPtysSubGrp_NoNestedPartySubIDs_112.insert(NestedPartySubID_112.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_112(534536481);
        noNestedPartySubIDs_0_1_2_2.set(NestedPartySubIDType_112);
        NstdPtysSubGrp_NoNestedPartySubIDs_112.insert(NestedPartySubIDType_112.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_112);

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_2);
      }
      noLegs_0_0.addGroup(noNestedPartyIDs_0_1_1);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_59;
      FIX::NestedPartyID NestedPartyID_59("STRING_1944854298");
      noNestedPartyIDs_0_1_2.set(NestedPartyID_59);
      NestedParties_NoNestedPartyIDs_59.insert(NestedPartyID_59.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_59('1');
      noNestedPartyIDs_0_1_2.set(NestedPartyIDSource_59);
      NestedParties_NoNestedPartyIDs_59.insert(NestedPartyIDSource_59.getString());
      FIX::NestedPartyRole NestedPartyRole_59(1648518164);
      noNestedPartyIDs_0_1_2.set(NestedPartyRole_59);
      NestedParties_NoNestedPartyIDs_59.insert(NestedPartyRole_59.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_59);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_113;
        FIX::NestedPartySubID NestedPartySubID_113("STRING_169611993");
        noNestedPartySubIDs_0_2_2_0.set(NestedPartySubID_113);
        NstdPtysSubGrp_NoNestedPartySubIDs_113.insert(NestedPartySubID_113.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_113(146287530);
        noNestedPartySubIDs_0_2_2_0.set(NestedPartySubIDType_113);
        NstdPtysSubGrp_NoNestedPartySubIDs_113.insert(NestedPartySubIDType_113.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_113);

        noNestedPartyIDs_0_1_2.addGroup(noNestedPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_114;
        FIX::NestedPartySubID NestedPartySubID_114("STRING_372845340");
        noNestedPartySubIDs_0_2_2_1.set(NestedPartySubID_114);
        NstdPtysSubGrp_NoNestedPartySubIDs_114.insert(NestedPartySubID_114.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_114(1898613142);
        noNestedPartySubIDs_0_2_2_1.set(NestedPartySubIDType_114);
        NstdPtysSubGrp_NoNestedPartySubIDs_114.insert(NestedPartySubIDType_114.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_114);

        noNestedPartyIDs_0_1_2.addGroup(noNestedPartySubIDs_0_2_2_1);
      }
      noLegs_0_0.addGroup(noNestedPartyIDs_0_1_2);
    }
    msg.addGroup(noLegs_0_0);
  }
  // OrderQtyData
  multiset<string> OrderQtyData_9;
  FIX::CashOrderQty CashOrderQty_9;
  CashOrderQty_9.setString("12798271");
  msg.set(CashOrderQty_9);
  OrderQtyData_9.insert(CashOrderQty_9.getString());
  FIX::OrderPercent OrderPercent_9;
  OrderPercent_9.setString("50.250000");
  msg.set(OrderPercent_9);
  OrderQtyData_9.insert(OrderPercent_9.getString());
  FIX::OrderQty OrderQty_18;
  OrderQty_18.setString("18595632");
  msg.set(OrderQty_18);
  OrderQtyData_9.insert(OrderQty_18.getString());
  FIX::RoundingDirection RoundingDirection_9('0');
  msg.set(RoundingDirection_9);
  OrderQtyData_9.insert(RoundingDirection_9.getString());
  FIX::RoundingModulus RoundingModulus_9;
  RoundingModulus_9.setString("13578317");
  msg.set(RoundingModulus_9);
  OrderQtyData_9.insert(RoundingModulus_9.getString());
  all_values.push_back(OrderQtyData_9);

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::MultilegOrderCancelReplace::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_66;
    FIX::PartyID PartyID_66("STRING_864653071");
    noPartyIDs_0_0.set(PartyID_66);
    Parties_NoPartyIDs_66.insert(PartyID_66.getString());
    FIX::PartyIDSource PartyIDSource_66('D');
    noPartyIDs_0_0.set(PartyIDSource_66);
    Parties_NoPartyIDs_66.insert(PartyIDSource_66.getString());
    FIX::PartyRole PartyRole_66(84);
    noPartyIDs_0_0.set(PartyRole_66);
    Parties_NoPartyIDs_66.insert(PartyRole_66.getString());
    all_values.push_back(Parties_NoPartyIDs_66);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::MultilegOrderCancelReplace::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_132;
      FIX::PartySubID PartySubID_132("STRING_554808918");
      noPartySubIDs_0_1_0.set(PartySubID_132);
      PtysSubGrp_NoPartySubIDs_132.insert(PartySubID_132.getString());
      FIX::PartySubIDType PartySubIDType_132(15);
      noPartySubIDs_0_1_0.set(PartySubIDType_132);
      PtysSubGrp_NoPartySubIDs_132.insert(PartySubIDType_132.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_132);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::MultilegOrderCancelReplace::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_67;
    FIX::PartyID PartyID_67("STRING_1687057100");
    noPartyIDs_0_1.set(PartyID_67);
    Parties_NoPartyIDs_67.insert(PartyID_67.getString());
    FIX::PartyIDSource PartyIDSource_67('G');
    noPartyIDs_0_1.set(PartyIDSource_67);
    Parties_NoPartyIDs_67.insert(PartyIDSource_67.getString());
    FIX::PartyRole PartyRole_67(4);
    noPartyIDs_0_1.set(PartyRole_67);
    Parties_NoPartyIDs_67.insert(PartyRole_67.getString());
    all_values.push_back(Parties_NoPartyIDs_67);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::MultilegOrderCancelReplace::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_133;
      FIX::PartySubID PartySubID_133("STRING_1506076432");
      noPartySubIDs_1_1_0.set(PartySubID_133);
      PtysSubGrp_NoPartySubIDs_133.insert(PartySubID_133.getString());
      FIX::PartySubIDType PartySubIDType_133(16);
      noPartySubIDs_1_1_0.set(PartySubIDType_133);
      PtysSubGrp_NoPartySubIDs_133.insert(PartySubIDType_133.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_133);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::MultilegOrderCancelReplace::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_68;
    FIX::PartyID PartyID_68("STRING_284634579");
    noPartyIDs_0_2.set(PartyID_68);
    Parties_NoPartyIDs_68.insert(PartyID_68.getString());
    FIX::PartyIDSource PartyIDSource_68('9');
    noPartyIDs_0_2.set(PartyIDSource_68);
    Parties_NoPartyIDs_68.insert(PartyIDSource_68.getString());
    FIX::PartyRole PartyRole_68(62);
    noPartyIDs_0_2.set(PartyRole_68);
    Parties_NoPartyIDs_68.insert(PartyRole_68.getString());
    all_values.push_back(Parties_NoPartyIDs_68);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::MultilegOrderCancelReplace::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_134;
      FIX::PartySubID PartySubID_134("STRING_232660517");
      noPartySubIDs_2_1_0.set(PartySubID_134);
      PtysSubGrp_NoPartySubIDs_134.insert(PartySubID_134.getString());
      FIX::PartySubIDType PartySubIDType_134(2);
      noPartySubIDs_2_1_0.set(PartySubIDType_134);
      PtysSubGrp_NoPartySubIDs_134.insert(PartySubIDType_134.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_134);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_135;
      FIX::PartySubID PartySubID_135("STRING_1357961113");
      noPartySubIDs_2_1_1.set(PartySubID_135);
      PtysSubGrp_NoPartySubIDs_135.insert(PartySubID_135.getString());
      FIX::PartySubIDType PartySubIDType_135(20);
      noPartySubIDs_2_1_1.set(PartySubIDType_135);
      PtysSubGrp_NoPartySubIDs_135.insert(PartySubIDType_135.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_135);

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_1);
    }
    msg.addGroup(noPartyIDs_0_2);
  }
  // PegInstructions
  multiset<string> PegInstructions_2;
  FIX::PegLimitType PegLimitType_2(2);
  msg.set(PegLimitType_2);
  PegInstructions_2.insert(PegLimitType_2.getString());
  FIX::PegMoveType PegMoveType_2(0);
  msg.set(PegMoveType_2);
  PegInstructions_2.insert(PegMoveType_2.getString());
  FIX::PegOffsetType PegOffsetType_2(3);
  msg.set(PegOffsetType_2);
  PegInstructions_2.insert(PegOffsetType_2.getString());
  FIX::PegOffsetValue PegOffsetValue_2;
  PegOffsetValue_2.setString("1092762");
  msg.set(PegOffsetValue_2);
  PegInstructions_2.insert(PegOffsetValue_2.getString());
  FIX::PegPriceType PegPriceType_2(1);
  msg.set(PegPriceType_2);
  PegInstructions_2.insert(PegPriceType_2.getString());
  FIX::PegRoundDirection PegRoundDirection_2(1);
  msg.set(PegRoundDirection_2);
  PegInstructions_2.insert(PegRoundDirection_2.getString());
  FIX::PegScope PegScope_2(2);
  msg.set(PegScope_2);
  PegInstructions_2.insert(PegScope_2.getString());
  FIX::PegSecurityDesc PegSecurityDesc_2("STRING_990782208");
  msg.set(PegSecurityDesc_2);
  PegInstructions_2.insert(PegSecurityDesc_2.getString());
  FIX::PegSecurityID PegSecurityID_2("STRING_1586971973");
  msg.set(PegSecurityID_2);
  PegInstructions_2.insert(PegSecurityID_2.getString());
  FIX::PegSecurityIDSource PegSecurityIDSource_2("STRING_1309299314");
  msg.set(PegSecurityIDSource_2);
  PegInstructions_2.insert(PegSecurityIDSource_2.getString());
  FIX::PegSymbol PegSymbol_2("STRING_1767826427");
  msg.set(PegSymbol_2);
  PegInstructions_2.insert(PegSymbol_2.getString());
  all_values.push_back(PegInstructions_2);

  // PreAllocMlegGrp
  // Group PreAllocMlegGrp.NoAllocs
  {
    FIX50SP2::MultilegOrderCancelReplace::NoAllocs noAllocs_0_0;
    // PreAllocMlegGrp.NoAllocs
    multiset<string> PreAllocMlegGrp_NoAllocs_0;
    FIX::AllocAccount AllocAccount_18("STRING_1992756357");
    noAllocs_0_0.set(AllocAccount_18);
    PreAllocMlegGrp_NoAllocs_0.insert(AllocAccount_18.getString());
    FIX::AllocAcctIDSource AllocAcctIDSource_18(2084307094);
    noAllocs_0_0.set(AllocAcctIDSource_18);
    PreAllocMlegGrp_NoAllocs_0.insert(AllocAcctIDSource_18.getString());
    FIX::AllocQty AllocQty_17;
    AllocQty_17.setString("11855590");
    noAllocs_0_0.set(AllocQty_17);
    PreAllocMlegGrp_NoAllocs_0.insert(AllocQty_17.getString());
    FIX::AllocSettlCurrency AllocSettlCurrency_13("EUR");
    noAllocs_0_0.set(AllocSettlCurrency_13);
    PreAllocMlegGrp_NoAllocs_0.insert(AllocSettlCurrency_13.getString());
    FIX::IndividualAllocID IndividualAllocID_18("STRING_725132495");
    noAllocs_0_0.set(IndividualAllocID_18);
    PreAllocMlegGrp_NoAllocs_0.insert(IndividualAllocID_18.getString());
    all_values.push_back(PreAllocMlegGrp_NoAllocs_0);

    // NestedParties3
    // Group NestedParties3.NoNested3PartyIDs
    {
      FIX50SP2::MultilegOrderCancelReplace::NoAllocs::NoNested3PartyIDs noNested3PartyIDs_0_1_0;
      // NestedParties3.NoNested3PartyIDs
      multiset<string> NestedParties3_NoNested3PartyIDs_6;
      FIX::Nested3PartyID Nested3PartyID_6("STRING_856033323");
      noNested3PartyIDs_0_1_0.set(Nested3PartyID_6);
      NestedParties3_NoNested3PartyIDs_6.insert(Nested3PartyID_6.getString());
      FIX::Nested3PartyIDSource Nested3PartyIDSource_6('4');
      noNested3PartyIDs_0_1_0.set(Nested3PartyIDSource_6);
      NestedParties3_NoNested3PartyIDs_6.insert(Nested3PartyIDSource_6.getString());
      FIX::Nested3PartyRole Nested3PartyRole_6(1520461868);
      noNested3PartyIDs_0_1_0.set(Nested3PartyRole_6);
      NestedParties3_NoNested3PartyIDs_6.insert(Nested3PartyRole_6.getString());
      all_values.push_back(NestedParties3_NoNested3PartyIDs_6);

      // NstdPtys3SubGrp
      // Group NstdPtys3SubGrp.NoNested3PartySubIDs
      {
        FIX50SP2::MultilegOrderCancelReplace::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_0_0_2_0;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_14;
        FIX::Nested3PartySubID Nested3PartySubID_14("STRING_690582150");
        noNested3PartySubIDs_0_0_2_0.set(Nested3PartySubID_14);
        NstdPtys3SubGrp_NoNested3PartySubIDs_14.insert(Nested3PartySubID_14.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_14(1218585903);
        noNested3PartySubIDs_0_0_2_0.set(Nested3PartySubIDType_14);
        NstdPtys3SubGrp_NoNested3PartySubIDs_14.insert(Nested3PartySubIDType_14.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_14);

        noNested3PartyIDs_0_1_0.addGroup(noNested3PartySubIDs_0_0_2_0);
      }
      noAllocs_0_0.addGroup(noNested3PartyIDs_0_1_0);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoAllocs::NoNested3PartyIDs noNested3PartyIDs_0_1_1;
      // NestedParties3.NoNested3PartyIDs
      multiset<string> NestedParties3_NoNested3PartyIDs_7;
      FIX::Nested3PartyID Nested3PartyID_7("STRING_647646136");
      noNested3PartyIDs_0_1_1.set(Nested3PartyID_7);
      NestedParties3_NoNested3PartyIDs_7.insert(Nested3PartyID_7.getString());
      FIX::Nested3PartyIDSource Nested3PartyIDSource_7('1');
      noNested3PartyIDs_0_1_1.set(Nested3PartyIDSource_7);
      NestedParties3_NoNested3PartyIDs_7.insert(Nested3PartyIDSource_7.getString());
      FIX::Nested3PartyRole Nested3PartyRole_7(1451246420);
      noNested3PartyIDs_0_1_1.set(Nested3PartyRole_7);
      NestedParties3_NoNested3PartyIDs_7.insert(Nested3PartyRole_7.getString());
      all_values.push_back(NestedParties3_NoNested3PartyIDs_7);

      // NstdPtys3SubGrp
      // Group NstdPtys3SubGrp.NoNested3PartySubIDs
      {
        FIX50SP2::MultilegOrderCancelReplace::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_0_1_2_0;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_15;
        FIX::Nested3PartySubID Nested3PartySubID_15("STRING_1539757821");
        noNested3PartySubIDs_0_1_2_0.set(Nested3PartySubID_15);
        NstdPtys3SubGrp_NoNested3PartySubIDs_15.insert(Nested3PartySubID_15.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_15(1184941453);
        noNested3PartySubIDs_0_1_2_0.set(Nested3PartySubIDType_15);
        NstdPtys3SubGrp_NoNested3PartySubIDs_15.insert(Nested3PartySubIDType_15.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_15);

        noNested3PartyIDs_0_1_1.addGroup(noNested3PartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_0_1_2_1;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_16;
        FIX::Nested3PartySubID Nested3PartySubID_16("STRING_1547248253");
        noNested3PartySubIDs_0_1_2_1.set(Nested3PartySubID_16);
        NstdPtys3SubGrp_NoNested3PartySubIDs_16.insert(Nested3PartySubID_16.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_16(919847279);
        noNested3PartySubIDs_0_1_2_1.set(Nested3PartySubIDType_16);
        NstdPtys3SubGrp_NoNested3PartySubIDs_16.insert(Nested3PartySubIDType_16.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_16);

        noNested3PartyIDs_0_1_1.addGroup(noNested3PartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_0_1_2_2;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_17;
        FIX::Nested3PartySubID Nested3PartySubID_17("STRING_1064924017");
        noNested3PartySubIDs_0_1_2_2.set(Nested3PartySubID_17);
        NstdPtys3SubGrp_NoNested3PartySubIDs_17.insert(Nested3PartySubID_17.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_17(1656524480);
        noNested3PartySubIDs_0_1_2_2.set(Nested3PartySubIDType_17);
        NstdPtys3SubGrp_NoNested3PartySubIDs_17.insert(Nested3PartySubIDType_17.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_17);

        noNested3PartyIDs_0_1_1.addGroup(noNested3PartySubIDs_0_1_2_2);
      }
      noAllocs_0_0.addGroup(noNested3PartyIDs_0_1_1);
    }
    msg.addGroup(noAllocs_0_0);
  }
  {
    FIX50SP2::MultilegOrderCancelReplace::NoAllocs noAllocs_0_1;
    // PreAllocMlegGrp.NoAllocs
    multiset<string> PreAllocMlegGrp_NoAllocs_1;
    FIX::AllocAccount AllocAccount_19("STRING_51066232");
    noAllocs_0_1.set(AllocAccount_19);
    PreAllocMlegGrp_NoAllocs_1.insert(AllocAccount_19.getString());
    FIX::AllocAcctIDSource AllocAcctIDSource_19(77250097);
    noAllocs_0_1.set(AllocAcctIDSource_19);
    PreAllocMlegGrp_NoAllocs_1.insert(AllocAcctIDSource_19.getString());
    FIX::AllocQty AllocQty_18;
    AllocQty_18.setString("16079920");
    noAllocs_0_1.set(AllocQty_18);
    PreAllocMlegGrp_NoAllocs_1.insert(AllocQty_18.getString());
    FIX::AllocSettlCurrency AllocSettlCurrency_14("USD");
    noAllocs_0_1.set(AllocSettlCurrency_14);
    PreAllocMlegGrp_NoAllocs_1.insert(AllocSettlCurrency_14.getString());
    FIX::IndividualAllocID IndividualAllocID_19("STRING_769807751");
    noAllocs_0_1.set(IndividualAllocID_19);
    PreAllocMlegGrp_NoAllocs_1.insert(IndividualAllocID_19.getString());
    all_values.push_back(PreAllocMlegGrp_NoAllocs_1);

    // NestedParties3
    // Group NestedParties3.NoNested3PartyIDs
    {
      FIX50SP2::MultilegOrderCancelReplace::NoAllocs::NoNested3PartyIDs noNested3PartyIDs_1_1_0;
      // NestedParties3.NoNested3PartyIDs
      multiset<string> NestedParties3_NoNested3PartyIDs_8;
      FIX::Nested3PartyID Nested3PartyID_8("STRING_1968363466");
      noNested3PartyIDs_1_1_0.set(Nested3PartyID_8);
      NestedParties3_NoNested3PartyIDs_8.insert(Nested3PartyID_8.getString());
      FIX::Nested3PartyIDSource Nested3PartyIDSource_8('6');
      noNested3PartyIDs_1_1_0.set(Nested3PartyIDSource_8);
      NestedParties3_NoNested3PartyIDs_8.insert(Nested3PartyIDSource_8.getString());
      FIX::Nested3PartyRole Nested3PartyRole_8(599014666);
      noNested3PartyIDs_1_1_0.set(Nested3PartyRole_8);
      NestedParties3_NoNested3PartyIDs_8.insert(Nested3PartyRole_8.getString());
      all_values.push_back(NestedParties3_NoNested3PartyIDs_8);

      // NstdPtys3SubGrp
      // Group NstdPtys3SubGrp.NoNested3PartySubIDs
      {
        FIX50SP2::MultilegOrderCancelReplace::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_1_0_2_0;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_18;
        FIX::Nested3PartySubID Nested3PartySubID_18("STRING_1015162089");
        noNested3PartySubIDs_1_0_2_0.set(Nested3PartySubID_18);
        NstdPtys3SubGrp_NoNested3PartySubIDs_18.insert(Nested3PartySubID_18.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_18(1489727513);
        noNested3PartySubIDs_1_0_2_0.set(Nested3PartySubIDType_18);
        NstdPtys3SubGrp_NoNested3PartySubIDs_18.insert(Nested3PartySubIDType_18.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_18);

        noNested3PartyIDs_1_1_0.addGroup(noNested3PartySubIDs_1_0_2_0);
      }
      noAllocs_0_1.addGroup(noNested3PartyIDs_1_1_0);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoAllocs::NoNested3PartyIDs noNested3PartyIDs_1_1_1;
      // NestedParties3.NoNested3PartyIDs
      multiset<string> NestedParties3_NoNested3PartyIDs_9;
      FIX::Nested3PartyID Nested3PartyID_9("STRING_1731571355");
      noNested3PartyIDs_1_1_1.set(Nested3PartyID_9);
      NestedParties3_NoNested3PartyIDs_9.insert(Nested3PartyID_9.getString());
      FIX::Nested3PartyIDSource Nested3PartyIDSource_9('1');
      noNested3PartyIDs_1_1_1.set(Nested3PartyIDSource_9);
      NestedParties3_NoNested3PartyIDs_9.insert(Nested3PartyIDSource_9.getString());
      FIX::Nested3PartyRole Nested3PartyRole_9(198277188);
      noNested3PartyIDs_1_1_1.set(Nested3PartyRole_9);
      NestedParties3_NoNested3PartyIDs_9.insert(Nested3PartyRole_9.getString());
      all_values.push_back(NestedParties3_NoNested3PartyIDs_9);

      // NstdPtys3SubGrp
      // Group NstdPtys3SubGrp.NoNested3PartySubIDs
      {
        FIX50SP2::MultilegOrderCancelReplace::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_1_1_2_0;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_19;
        FIX::Nested3PartySubID Nested3PartySubID_19("STRING_402525745");
        noNested3PartySubIDs_1_1_2_0.set(Nested3PartySubID_19);
        NstdPtys3SubGrp_NoNested3PartySubIDs_19.insert(Nested3PartySubID_19.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_19(1627606392);
        noNested3PartySubIDs_1_1_2_0.set(Nested3PartySubIDType_19);
        NstdPtys3SubGrp_NoNested3PartySubIDs_19.insert(Nested3PartySubIDType_19.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_19);

        noNested3PartyIDs_1_1_1.addGroup(noNested3PartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_1_1_2_1;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_20;
        FIX::Nested3PartySubID Nested3PartySubID_20("STRING_680617428");
        noNested3PartySubIDs_1_1_2_1.set(Nested3PartySubID_20);
        NstdPtys3SubGrp_NoNested3PartySubIDs_20.insert(Nested3PartySubID_20.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_20(1621111648);
        noNested3PartySubIDs_1_1_2_1.set(Nested3PartySubIDType_20);
        NstdPtys3SubGrp_NoNested3PartySubIDs_20.insert(Nested3PartySubIDType_20.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_20);

        noNested3PartyIDs_1_1_1.addGroup(noNested3PartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_1_1_2_2;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_21;
        FIX::Nested3PartySubID Nested3PartySubID_21("STRING_127768880");
        noNested3PartySubIDs_1_1_2_2.set(Nested3PartySubID_21);
        NstdPtys3SubGrp_NoNested3PartySubIDs_21.insert(Nested3PartySubID_21.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_21(862414137);
        noNested3PartySubIDs_1_1_2_2.set(Nested3PartySubIDType_21);
        NstdPtys3SubGrp_NoNested3PartySubIDs_21.insert(Nested3PartySubIDType_21.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_21);

        noNested3PartyIDs_1_1_1.addGroup(noNested3PartySubIDs_1_1_2_2);
      }
      noAllocs_0_1.addGroup(noNested3PartyIDs_1_1_1);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoAllocs::NoNested3PartyIDs noNested3PartyIDs_1_1_2;
      // NestedParties3.NoNested3PartyIDs
      multiset<string> NestedParties3_NoNested3PartyIDs_10;
      FIX::Nested3PartyID Nested3PartyID_10("STRING_924874421");
      noNested3PartyIDs_1_1_2.set(Nested3PartyID_10);
      NestedParties3_NoNested3PartyIDs_10.insert(Nested3PartyID_10.getString());
      FIX::Nested3PartyIDSource Nested3PartyIDSource_10('1');
      noNested3PartyIDs_1_1_2.set(Nested3PartyIDSource_10);
      NestedParties3_NoNested3PartyIDs_10.insert(Nested3PartyIDSource_10.getString());
      FIX::Nested3PartyRole Nested3PartyRole_10(254688310);
      noNested3PartyIDs_1_1_2.set(Nested3PartyRole_10);
      NestedParties3_NoNested3PartyIDs_10.insert(Nested3PartyRole_10.getString());
      all_values.push_back(NestedParties3_NoNested3PartyIDs_10);

      // NstdPtys3SubGrp
      // Group NstdPtys3SubGrp.NoNested3PartySubIDs
      {
        FIX50SP2::MultilegOrderCancelReplace::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_1_2_2_0;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_22;
        FIX::Nested3PartySubID Nested3PartySubID_22("STRING_1338350851");
        noNested3PartySubIDs_1_2_2_0.set(Nested3PartySubID_22);
        NstdPtys3SubGrp_NoNested3PartySubIDs_22.insert(Nested3PartySubID_22.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_22(1174535590);
        noNested3PartySubIDs_1_2_2_0.set(Nested3PartySubIDType_22);
        NstdPtys3SubGrp_NoNested3PartySubIDs_22.insert(Nested3PartySubIDType_22.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_22);

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
    multiset<string> StrategyParametersGrp_NoStrategyParameters_6;
    FIX::StrategyParameterName StrategyParameterName_6("STRING_847391684");
    noStrategyParameters_0_0.set(StrategyParameterName_6);
    StrategyParametersGrp_NoStrategyParameters_6.insert(StrategyParameterName_6.getString());
    FIX::StrategyParameterType StrategyParameterType_6(24);
    noStrategyParameters_0_0.set(StrategyParameterType_6);
    StrategyParametersGrp_NoStrategyParameters_6.insert(StrategyParameterType_6.getString());
    FIX::StrategyParameterValue StrategyParameterValue_6("STRING_1104506340");
    noStrategyParameters_0_0.set(StrategyParameterValue_6);
    StrategyParametersGrp_NoStrategyParameters_6.insert(StrategyParameterValue_6.getString());
    all_values.push_back(StrategyParametersGrp_NoStrategyParameters_6);

    msg.addGroup(noStrategyParameters_0_0);
  }
  {
    FIX50SP2::MultilegOrderCancelReplace::NoStrategyParameters noStrategyParameters_0_1;
    // StrategyParametersGrp.NoStrategyParameters
    multiset<string> StrategyParametersGrp_NoStrategyParameters_7;
    FIX::StrategyParameterName StrategyParameterName_7("STRING_307900121");
    noStrategyParameters_0_1.set(StrategyParameterName_7);
    StrategyParametersGrp_NoStrategyParameters_7.insert(StrategyParameterName_7.getString());
    FIX::StrategyParameterType StrategyParameterType_7(24);
    noStrategyParameters_0_1.set(StrategyParameterType_7);
    StrategyParametersGrp_NoStrategyParameters_7.insert(StrategyParameterType_7.getString());
    FIX::StrategyParameterValue StrategyParameterValue_7("STRING_621244762");
    noStrategyParameters_0_1.set(StrategyParameterValue_7);
    StrategyParametersGrp_NoStrategyParameters_7.insert(StrategyParameterValue_7.getString());
    all_values.push_back(StrategyParametersGrp_NoStrategyParameters_7);

    msg.addGroup(noStrategyParameters_0_1);
  }
  {
    FIX50SP2::MultilegOrderCancelReplace::NoStrategyParameters noStrategyParameters_0_2;
    // StrategyParametersGrp.NoStrategyParameters
    multiset<string> StrategyParametersGrp_NoStrategyParameters_8;
    FIX::StrategyParameterName StrategyParameterName_8("STRING_1077707873");
    noStrategyParameters_0_2.set(StrategyParameterName_8);
    StrategyParametersGrp_NoStrategyParameters_8.insert(StrategyParameterName_8.getString());
    FIX::StrategyParameterType StrategyParameterType_8(24);
    noStrategyParameters_0_2.set(StrategyParameterType_8);
    StrategyParametersGrp_NoStrategyParameters_8.insert(StrategyParameterType_8.getString());
    FIX::StrategyParameterValue StrategyParameterValue_8("STRING_442124580");
    noStrategyParameters_0_2.set(StrategyParameterValue_8);
    StrategyParametersGrp_NoStrategyParameters_8.insert(StrategyParameterValue_8.getString());
    all_values.push_back(StrategyParametersGrp_NoStrategyParameters_8);

    msg.addGroup(noStrategyParameters_0_2);
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
    FIX::TradingSessionSubID TradingSessionSubID_34("STRING_4");
    noTradingSessions_0_0.set(TradingSessionSubID_34);
    TrdgSesGrp_NoTradingSessions_3.insert(TradingSessionSubID_34.getString());
    all_values.push_back(TrdgSesGrp_NoTradingSessions_3);

    msg.addGroup(noTradingSessions_0_0);
  }
  // TriggeringInstruction
  multiset<string> TriggeringInstruction_2;
  FIX::TriggerAction TriggerAction_2('2');
  msg.set(TriggerAction_2);
  TriggeringInstruction_2.insert(TriggerAction_2.getString());
  FIX::TriggerNewPrice TriggerNewPrice_2;
  TriggerNewPrice_2.setString("7234163");
  msg.set(TriggerNewPrice_2);
  TriggeringInstruction_2.insert(TriggerNewPrice_2.getString());
  FIX::TriggerNewQty TriggerNewQty_2;
  TriggerNewQty_2.setString("10326511");
  msg.set(TriggerNewQty_2);
  TriggeringInstruction_2.insert(TriggerNewQty_2.getString());
  FIX::TriggerOrderType TriggerOrderType_2('1');
  msg.set(TriggerOrderType_2);
  TriggeringInstruction_2.insert(TriggerOrderType_2.getString());
  FIX::TriggerPrice TriggerPrice_2;
  TriggerPrice_2.setString("9216935");
  msg.set(TriggerPrice_2);
  TriggeringInstruction_2.insert(TriggerPrice_2.getString());
  FIX::TriggerPriceDirection TriggerPriceDirection_2('D');
  msg.set(TriggerPriceDirection_2);
  TriggeringInstruction_2.insert(TriggerPriceDirection_2.getString());
  FIX::TriggerPriceType TriggerPriceType_2('4');
  msg.set(TriggerPriceType_2);
  TriggeringInstruction_2.insert(TriggerPriceType_2.getString());
  FIX::TriggerPriceTypeScope TriggerPriceTypeScope_2('3');
  msg.set(TriggerPriceTypeScope_2);
  TriggeringInstruction_2.insert(TriggerPriceTypeScope_2.getString());
  FIX::TriggerSecurityDesc TriggerSecurityDesc_2("STRING_1703303855");
  msg.set(TriggerSecurityDesc_2);
  TriggeringInstruction_2.insert(TriggerSecurityDesc_2.getString());
  FIX::TriggerSecurityID TriggerSecurityID_2("STRING_1466168045");
  msg.set(TriggerSecurityID_2);
  TriggeringInstruction_2.insert(TriggerSecurityID_2.getString());
  FIX::TriggerSecurityIDSource TriggerSecurityIDSource_2("STRING_529585179");
  msg.set(TriggerSecurityIDSource_2);
  TriggeringInstruction_2.insert(TriggerSecurityIDSource_2.getString());
  FIX::TriggerSymbol TriggerSymbol_2("STRING_418234344");
  msg.set(TriggerSymbol_2);
  TriggeringInstruction_2.insert(TriggerSymbol_2.getString());
  FIX::TriggerTradingSessionID TriggerTradingSessionID_2("STRING_243558818");
  msg.set(TriggerTradingSessionID_2);
  TriggeringInstruction_2.insert(TriggerTradingSessionID_2.getString());
  FIX::TriggerTradingSessionSubID TriggerTradingSessionSubID_2("STRING_320687778");
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
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_56("DATA_1659038629");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_56);
    UnderlyingInstrument_56.insert(EncodedUnderlyingIssuer_56.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_56(1847458245);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_56);
    UnderlyingInstrument_56.insert(EncodedUnderlyingIssuerLen_56.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_56("DATA_1233147288");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_56);
    UnderlyingInstrument_56.insert(EncodedUnderlyingSecurityDesc_56.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_56(358946665);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_56);
    UnderlyingInstrument_56.insert(EncodedUnderlyingSecurityDescLen_56.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_56;
    UnderlyingAdjustedQuantity_56.setString("9255764");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_56);
    UnderlyingInstrument_56.insert(UnderlyingAdjustedQuantity_56.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_56;
    UnderlyingAllocationPercent_56.setString("99.810000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_56);
    UnderlyingInstrument_56.insert(UnderlyingAllocationPercent_56.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_56;
    UnderlyingAttachmentPoint_56.setString("67.870000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_56);
    UnderlyingInstrument_56.insert(UnderlyingAttachmentPoint_56.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_56("STRING_1045543033");
    noUnderlyings_0_0.set(UnderlyingCFICode_56);
    UnderlyingInstrument_56.insert(UnderlyingCFICode_56.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_56("STRING_811414743");
    noUnderlyings_0_0.set(UnderlyingCPProgram_56);
    UnderlyingInstrument_56.insert(UnderlyingCPProgram_56.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_56("STRING_1744554660");
    noUnderlyings_0_0.set(UnderlyingCPRegType_56);
    UnderlyingInstrument_56.insert(UnderlyingCPRegType_56.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_56;
    UnderlyingCapValue_56.setString("18277008");
    noUnderlyings_0_0.set(UnderlyingCapValue_56);
    UnderlyingInstrument_56.insert(UnderlyingCapValue_56.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_56;
    UnderlyingCashAmount_56.setString("12535393");
    noUnderlyings_0_0.set(UnderlyingCashAmount_56);
    UnderlyingInstrument_56.insert(UnderlyingCashAmount_56.getString());
    FIX::UnderlyingCashType UnderlyingCashType_56("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_56);
    UnderlyingInstrument_56.insert(UnderlyingCashType_56.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_56;
    UnderlyingContractMultiplier_56.setString("10613897");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_56);
    UnderlyingInstrument_56.insert(UnderlyingContractMultiplier_56.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_56(554619117);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_56);
    UnderlyingInstrument_56.insert(UnderlyingContractMultiplierUnit_56.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_56("COUNTRY_1850326121");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_56);
    UnderlyingInstrument_56.insert(UnderlyingCountryOfIssue_56.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_56("LOCALMKTDATE_1784806086");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_56);
    UnderlyingInstrument_56.insert(UnderlyingCouponPaymentDate_56.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_56;
    UnderlyingCouponRate_56.setString("2.650000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_56);
    UnderlyingInstrument_56.insert(UnderlyingCouponRate_56.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_56("STRING_1292856773");
    noUnderlyings_0_0.set(UnderlyingCreditRating_56);
    UnderlyingInstrument_56.insert(UnderlyingCreditRating_56.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_56("JPY");
    noUnderlyings_0_0.set(UnderlyingCurrency_56);
    UnderlyingInstrument_56.insert(UnderlyingCurrency_56.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_56;
    UnderlyingCurrentValue_56.setString("11379131");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_56);
    UnderlyingInstrument_56.insert(UnderlyingCurrentValue_56.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_56;
    UnderlyingDetachmentPoint_56.setString("22.920000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_56);
    UnderlyingInstrument_56.insert(UnderlyingDetachmentPoint_56.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_56;
    UnderlyingDirtyPrice_56.setString("182932");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_56);
    UnderlyingInstrument_56.insert(UnderlyingDirtyPrice_56.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_56;
    UnderlyingEndPrice_56.setString("4565975");
    noUnderlyings_0_0.set(UnderlyingEndPrice_56);
    UnderlyingInstrument_56.insert(UnderlyingEndPrice_56.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_56;
    UnderlyingEndValue_56.setString("14904174");
    noUnderlyings_0_0.set(UnderlyingEndValue_56);
    UnderlyingInstrument_56.insert(UnderlyingEndValue_56.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_56(436527596);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_56);
    UnderlyingInstrument_56.insert(UnderlyingExerciseStyle_56.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_56;
    UnderlyingFXRate_56.setString("7001563");
    noUnderlyings_0_0.set(UnderlyingFXRate_56);
    UnderlyingInstrument_56.insert(UnderlyingFXRate_56.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_56('M');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_56);
    UnderlyingInstrument_56.insert(UnderlyingFXRateCalc_56.getString());
    FIX::UnderlyingFactor UnderlyingFactor_56;
    UnderlyingFactor_56.setString("11094502");
    noUnderlyings_0_0.set(UnderlyingFactor_56);
    UnderlyingInstrument_56.insert(UnderlyingFactor_56.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_56(906047431);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_56);
    UnderlyingInstrument_56.insert(UnderlyingFlowScheduleType_56.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_56("STRING_1322660231");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_56);
    UnderlyingInstrument_56.insert(UnderlyingInstrRegistry_56.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_56("LOCALMKTDATE_809424848");
    noUnderlyings_0_0.set(UnderlyingIssueDate_56);
    UnderlyingInstrument_56.insert(UnderlyingIssueDate_56.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_56("STRING_2139194719");
    noUnderlyings_0_0.set(UnderlyingIssuer_56);
    UnderlyingInstrument_56.insert(UnderlyingIssuer_56.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_56("STRING_1681606896");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_56);
    UnderlyingInstrument_56.insert(UnderlyingLocaleOfIssue_56.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_56("LOCALMKTDATE_1735001267");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_56);
    UnderlyingInstrument_56.insert(UnderlyingMaturityDate_56.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_56("MONTHYEAR_181881052");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_56);
    UnderlyingInstrument_56.insert(UnderlyingMaturityMonthYear_56.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_56("TZTIMEONLY_200970035");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_56);
    UnderlyingInstrument_56.insert(UnderlyingMaturityTime_56.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_56;
    UnderlyingNotionalPercentageOutstanding_56.setString("6.530000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_56);
    UnderlyingInstrument_56.insert(UnderlyingNotionalPercentageOutstanding_56.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_56('9');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_56);
    UnderlyingInstrument_56.insert(UnderlyingOptAttribute_56.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_56;
    UnderlyingOriginalNotionalPercentageOutstanding_56.setString("46.950000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_56);
    UnderlyingInstrument_56.insert(UnderlyingOriginalNotionalPercentageOutstanding_56.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_56("STRING_313277873");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_56);
    UnderlyingInstrument_56.insert(UnderlyingPriceUnitOfMeasure_56.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_56;
    UnderlyingPriceUnitOfMeasureQty_56.setString("993514");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_56);
    UnderlyingInstrument_56.insert(UnderlyingPriceUnitOfMeasureQty_56.getString());
    FIX::UnderlyingProduct UnderlyingProduct_56(1087900393);
    noUnderlyings_0_0.set(UnderlyingProduct_56);
    UnderlyingInstrument_56.insert(UnderlyingProduct_56.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_56(1374667593);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_56);
    UnderlyingInstrument_56.insert(UnderlyingPutOrCall_56.getString());
    FIX::UnderlyingPx UnderlyingPx_56;
    UnderlyingPx_56.setString("6539705");
    noUnderlyings_0_0.set(UnderlyingPx_56);
    UnderlyingInstrument_56.insert(UnderlyingPx_56.getString());
    FIX::UnderlyingQty UnderlyingQty_56;
    UnderlyingQty_56.setString("7907428");
    noUnderlyings_0_0.set(UnderlyingQty_56);
    UnderlyingInstrument_56.insert(UnderlyingQty_56.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_56("LOCALMKTDATE_1011990032");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_56);
    UnderlyingInstrument_56.insert(UnderlyingRedemptionDate_56.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_56("STRING_93757206");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_56);
    UnderlyingInstrument_56.insert(UnderlyingRepoCollateralSecurityType_56.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_56;
    UnderlyingRepurchaseRate_56.setString("96.390000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_56);
    UnderlyingInstrument_56.insert(UnderlyingRepurchaseRate_56.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_56(1571006025);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_56);
    UnderlyingInstrument_56.insert(UnderlyingRepurchaseTerm_56.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_56("STRING_556230251");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_56);
    UnderlyingInstrument_56.insert(UnderlyingRestructuringType_56.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_56("STRING_1074029161");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_56);
    UnderlyingInstrument_56.insert(UnderlyingSecurityDesc_56.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_56("EXCHANGE_384354669");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_56);
    UnderlyingInstrument_56.insert(UnderlyingSecurityExchange_56.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_56("STRING_574523503");
    noUnderlyings_0_0.set(UnderlyingSecurityID_56);
    UnderlyingInstrument_56.insert(UnderlyingSecurityID_56.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_56("STRING_1530626729");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_56);
    UnderlyingInstrument_56.insert(UnderlyingSecurityIDSource_56.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_56("STRING_1874772140");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_56);
    UnderlyingInstrument_56.insert(UnderlyingSecuritySubType_56.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_56("STRING_1011051099");
    noUnderlyings_0_0.set(UnderlyingSecurityType_56);
    UnderlyingInstrument_56.insert(UnderlyingSecurityType_56.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_56("STRING_83299467");
    noUnderlyings_0_0.set(UnderlyingSeniority_56);
    UnderlyingInstrument_56.insert(UnderlyingSeniority_56.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_56("STRING_1538393742");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_56);
    UnderlyingInstrument_56.insert(UnderlyingSettlMethod_56.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_56(5);
    noUnderlyings_0_0.set(UnderlyingSettlementType_56);
    UnderlyingInstrument_56.insert(UnderlyingSettlementType_56.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_56;
    UnderlyingStartValue_56.setString("9893468");
    noUnderlyings_0_0.set(UnderlyingStartValue_56);
    UnderlyingInstrument_56.insert(UnderlyingStartValue_56.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_56("STRING_713570325");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_56);
    UnderlyingInstrument_56.insert(UnderlyingStateOrProvinceOfIssue_56.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_56("CHF");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_56);
    UnderlyingInstrument_56.insert(UnderlyingStrikeCurrency_56.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_56;
    UnderlyingStrikePrice_56.setString("2476935");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_56);
    UnderlyingInstrument_56.insert(UnderlyingStrikePrice_56.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_56("STRING_369960171");
    noUnderlyings_0_0.set(UnderlyingSymbol_56);
    UnderlyingInstrument_56.insert(UnderlyingSymbol_56.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_56("STRING_1162939022");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_56);
    UnderlyingInstrument_56.insert(UnderlyingSymbolSfx_56.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_56("STRING_448663609");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_56);
    UnderlyingInstrument_56.insert(UnderlyingTimeUnit_56.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_56("STRING_1003020824");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_56);
    UnderlyingInstrument_56.insert(UnderlyingUnitOfMeasure_56.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_56;
    UnderlyingUnitOfMeasureQty_56.setString("87511");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_56);
    UnderlyingInstrument_56.insert(UnderlyingUnitOfMeasureQty_56.getString());
    all_values.push_back(UnderlyingInstrument_56);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_111;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_111("STRING_1316298697");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_111);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_111.insert(UnderlyingSecurityAltID_111.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_111("STRING_108102642");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_111);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_111.insert(UnderlyingSecurityAltIDSource_111.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_111);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_112;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_112("STRING_1334605050");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_112);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_112.insert(UnderlyingSecurityAltID_112.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_112("STRING_543482642");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_112);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_112.insert(UnderlyingSecurityAltIDSource_112.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_112);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_110;
      FIX::UnderlyingStipType UnderlyingStipType_110("STRING_2125347916");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_110);
      UnderlyingStipulations_NoUnderlyingStips_110.insert(UnderlyingStipType_110.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_110("STRING_1555472674");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_110);
      UnderlyingStipulations_NoUnderlyingStips_110.insert(UnderlyingStipValue_110.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_110);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_111;
      FIX::UnderlyingStipType UnderlyingStipType_111("STRING_855830437");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_111);
      UnderlyingStipulations_NoUnderlyingStips_111.insert(UnderlyingStipType_111.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_111("STRING_2061463908");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_111);
      UnderlyingStipulations_NoUnderlyingStips_111.insert(UnderlyingStipValue_111.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_111);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_112;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_112("STRING_1412060688");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_112);
      UndlyInstrumentParties_NoUndlyInstrumentParties_112.insert(UnderlyingInstrumentPartyID_112.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_112('9');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_112);
      UndlyInstrumentParties_NoUndlyInstrumentParties_112.insert(UnderlyingInstrumentPartyIDSource_112.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_112(1363349720);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_112);
      UndlyInstrumentParties_NoUndlyInstrumentParties_112.insert(UnderlyingInstrumentPartyRole_112.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_112);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_215;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_215("STRING_371152502");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_215);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_215.insert(UnderlyingInstrumentPartySubID_215.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_215(1090638213);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_215);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_215.insert(UnderlyingInstrumentPartySubIDType_215.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_215);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_216;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_216("STRING_850151643");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_216);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_216.insert(UnderlyingInstrumentPartySubID_216.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_216(454451969);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_216);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_216.insert(UnderlyingInstrumentPartySubIDType_216.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_216);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_113;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_113("STRING_481548307");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_113);
      UndlyInstrumentParties_NoUndlyInstrumentParties_113.insert(UnderlyingInstrumentPartyID_113.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_113('8');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_113);
      UndlyInstrumentParties_NoUndlyInstrumentParties_113.insert(UnderlyingInstrumentPartyIDSource_113.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_113(1443798867);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_113);
      UndlyInstrumentParties_NoUndlyInstrumentParties_113.insert(UnderlyingInstrumentPartyRole_113.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_113);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_217;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_217("STRING_1605611897");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_217);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_217.insert(UnderlyingInstrumentPartySubID_217.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_217(277373189);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_217);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_217.insert(UnderlyingInstrumentPartySubIDType_217.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_217);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_218;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_218("STRING_1442812205");
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubID_218);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_218.insert(UnderlyingInstrumentPartySubID_218.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_218(1975572068);
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubIDType_218);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_218.insert(UnderlyingInstrumentPartySubIDType_218.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_218);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_114;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_114("STRING_1440312211");
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyID_114);
      UndlyInstrumentParties_NoUndlyInstrumentParties_114.insert(UnderlyingInstrumentPartyID_114.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_114('1');
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyIDSource_114);
      UndlyInstrumentParties_NoUndlyInstrumentParties_114.insert(UnderlyingInstrumentPartyIDSource_114.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_114(831109244);
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyRole_114);
      UndlyInstrumentParties_NoUndlyInstrumentParties_114.insert(UnderlyingInstrumentPartyRole_114.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_114);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_219;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_219("STRING_2138180471");
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubID_219);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_219.insert(UnderlyingInstrumentPartySubID_219.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_219(2147407941);
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubIDType_219);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_219.insert(UnderlyingInstrumentPartySubIDType_219.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_219);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
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
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_57("DATA_1557166023");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_57);
    UnderlyingInstrument_57.insert(EncodedUnderlyingIssuer_57.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_57(1325301873);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_57);
    UnderlyingInstrument_57.insert(EncodedUnderlyingIssuerLen_57.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_57("DATA_543406936");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_57);
    UnderlyingInstrument_57.insert(EncodedUnderlyingSecurityDesc_57.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_57(171755606);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_57);
    UnderlyingInstrument_57.insert(EncodedUnderlyingSecurityDescLen_57.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_57;
    UnderlyingAdjustedQuantity_57.setString("13031661");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_57);
    UnderlyingInstrument_57.insert(UnderlyingAdjustedQuantity_57.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_57;
    UnderlyingAllocationPercent_57.setString("96.100000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_57);
    UnderlyingInstrument_57.insert(UnderlyingAllocationPercent_57.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_57;
    UnderlyingAttachmentPoint_57.setString("60.430000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_57);
    UnderlyingInstrument_57.insert(UnderlyingAttachmentPoint_57.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_57("STRING_1217146401");
    noUnderlyings_0_1.set(UnderlyingCFICode_57);
    UnderlyingInstrument_57.insert(UnderlyingCFICode_57.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_57("STRING_930391014");
    noUnderlyings_0_1.set(UnderlyingCPProgram_57);
    UnderlyingInstrument_57.insert(UnderlyingCPProgram_57.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_57("STRING_292163084");
    noUnderlyings_0_1.set(UnderlyingCPRegType_57);
    UnderlyingInstrument_57.insert(UnderlyingCPRegType_57.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_57;
    UnderlyingCapValue_57.setString("576721");
    noUnderlyings_0_1.set(UnderlyingCapValue_57);
    UnderlyingInstrument_57.insert(UnderlyingCapValue_57.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_57;
    UnderlyingCashAmount_57.setString("1462570");
    noUnderlyings_0_1.set(UnderlyingCashAmount_57);
    UnderlyingInstrument_57.insert(UnderlyingCashAmount_57.getString());
    FIX::UnderlyingCashType UnderlyingCashType_57("STRING_DIFF");
    noUnderlyings_0_1.set(UnderlyingCashType_57);
    UnderlyingInstrument_57.insert(UnderlyingCashType_57.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_57;
    UnderlyingContractMultiplier_57.setString("4288246");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_57);
    UnderlyingInstrument_57.insert(UnderlyingContractMultiplier_57.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_57(1236895299);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_57);
    UnderlyingInstrument_57.insert(UnderlyingContractMultiplierUnit_57.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_57("COUNTRY_981415270");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_57);
    UnderlyingInstrument_57.insert(UnderlyingCountryOfIssue_57.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_57("LOCALMKTDATE_883276647");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_57);
    UnderlyingInstrument_57.insert(UnderlyingCouponPaymentDate_57.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_57;
    UnderlyingCouponRate_57.setString("36.060000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_57);
    UnderlyingInstrument_57.insert(UnderlyingCouponRate_57.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_57("STRING_1804584616");
    noUnderlyings_0_1.set(UnderlyingCreditRating_57);
    UnderlyingInstrument_57.insert(UnderlyingCreditRating_57.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_57("USD");
    noUnderlyings_0_1.set(UnderlyingCurrency_57);
    UnderlyingInstrument_57.insert(UnderlyingCurrency_57.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_57;
    UnderlyingCurrentValue_57.setString("12627128");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_57);
    UnderlyingInstrument_57.insert(UnderlyingCurrentValue_57.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_57;
    UnderlyingDetachmentPoint_57.setString("50.550000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_57);
    UnderlyingInstrument_57.insert(UnderlyingDetachmentPoint_57.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_57;
    UnderlyingDirtyPrice_57.setString("614071");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_57);
    UnderlyingInstrument_57.insert(UnderlyingDirtyPrice_57.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_57;
    UnderlyingEndPrice_57.setString("10908012");
    noUnderlyings_0_1.set(UnderlyingEndPrice_57);
    UnderlyingInstrument_57.insert(UnderlyingEndPrice_57.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_57;
    UnderlyingEndValue_57.setString("18972772");
    noUnderlyings_0_1.set(UnderlyingEndValue_57);
    UnderlyingInstrument_57.insert(UnderlyingEndValue_57.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_57(1952882962);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_57);
    UnderlyingInstrument_57.insert(UnderlyingExerciseStyle_57.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_57;
    UnderlyingFXRate_57.setString("19219105");
    noUnderlyings_0_1.set(UnderlyingFXRate_57);
    UnderlyingInstrument_57.insert(UnderlyingFXRate_57.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_57('M');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_57);
    UnderlyingInstrument_57.insert(UnderlyingFXRateCalc_57.getString());
    FIX::UnderlyingFactor UnderlyingFactor_57;
    UnderlyingFactor_57.setString("19435797");
    noUnderlyings_0_1.set(UnderlyingFactor_57);
    UnderlyingInstrument_57.insert(UnderlyingFactor_57.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_57(1921834824);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_57);
    UnderlyingInstrument_57.insert(UnderlyingFlowScheduleType_57.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_57("STRING_608539374");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_57);
    UnderlyingInstrument_57.insert(UnderlyingInstrRegistry_57.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_57("LOCALMKTDATE_1121398010");
    noUnderlyings_0_1.set(UnderlyingIssueDate_57);
    UnderlyingInstrument_57.insert(UnderlyingIssueDate_57.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_57("STRING_317758112");
    noUnderlyings_0_1.set(UnderlyingIssuer_57);
    UnderlyingInstrument_57.insert(UnderlyingIssuer_57.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_57("STRING_780294980");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_57);
    UnderlyingInstrument_57.insert(UnderlyingLocaleOfIssue_57.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_57("LOCALMKTDATE_277080504");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_57);
    UnderlyingInstrument_57.insert(UnderlyingMaturityDate_57.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_57("MONTHYEAR_269154075");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_57);
    UnderlyingInstrument_57.insert(UnderlyingMaturityMonthYear_57.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_57("TZTIMEONLY_1807881024");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_57);
    UnderlyingInstrument_57.insert(UnderlyingMaturityTime_57.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_57;
    UnderlyingNotionalPercentageOutstanding_57.setString("69.050000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_57);
    UnderlyingInstrument_57.insert(UnderlyingNotionalPercentageOutstanding_57.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_57('1');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_57);
    UnderlyingInstrument_57.insert(UnderlyingOptAttribute_57.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_57;
    UnderlyingOriginalNotionalPercentageOutstanding_57.setString("41.080000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_57);
    UnderlyingInstrument_57.insert(UnderlyingOriginalNotionalPercentageOutstanding_57.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_57("STRING_1551899080");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_57);
    UnderlyingInstrument_57.insert(UnderlyingPriceUnitOfMeasure_57.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_57;
    UnderlyingPriceUnitOfMeasureQty_57.setString("13458021");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_57);
    UnderlyingInstrument_57.insert(UnderlyingPriceUnitOfMeasureQty_57.getString());
    FIX::UnderlyingProduct UnderlyingProduct_57(83824087);
    noUnderlyings_0_1.set(UnderlyingProduct_57);
    UnderlyingInstrument_57.insert(UnderlyingProduct_57.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_57(1980723758);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_57);
    UnderlyingInstrument_57.insert(UnderlyingPutOrCall_57.getString());
    FIX::UnderlyingPx UnderlyingPx_57;
    UnderlyingPx_57.setString("4352138");
    noUnderlyings_0_1.set(UnderlyingPx_57);
    UnderlyingInstrument_57.insert(UnderlyingPx_57.getString());
    FIX::UnderlyingQty UnderlyingQty_57;
    UnderlyingQty_57.setString("10652393");
    noUnderlyings_0_1.set(UnderlyingQty_57);
    UnderlyingInstrument_57.insert(UnderlyingQty_57.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_57("LOCALMKTDATE_716516757");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_57);
    UnderlyingInstrument_57.insert(UnderlyingRedemptionDate_57.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_57("STRING_6173785");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_57);
    UnderlyingInstrument_57.insert(UnderlyingRepoCollateralSecurityType_57.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_57;
    UnderlyingRepurchaseRate_57.setString("3.260000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_57);
    UnderlyingInstrument_57.insert(UnderlyingRepurchaseRate_57.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_57(896108623);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_57);
    UnderlyingInstrument_57.insert(UnderlyingRepurchaseTerm_57.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_57("STRING_772252376");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_57);
    UnderlyingInstrument_57.insert(UnderlyingRestructuringType_57.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_57("STRING_1985053192");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_57);
    UnderlyingInstrument_57.insert(UnderlyingSecurityDesc_57.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_57("EXCHANGE_1353073679");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_57);
    UnderlyingInstrument_57.insert(UnderlyingSecurityExchange_57.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_57("STRING_833659524");
    noUnderlyings_0_1.set(UnderlyingSecurityID_57);
    UnderlyingInstrument_57.insert(UnderlyingSecurityID_57.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_57("STRING_928370831");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_57);
    UnderlyingInstrument_57.insert(UnderlyingSecurityIDSource_57.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_57("STRING_1102867297");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_57);
    UnderlyingInstrument_57.insert(UnderlyingSecuritySubType_57.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_57("STRING_639058838");
    noUnderlyings_0_1.set(UnderlyingSecurityType_57);
    UnderlyingInstrument_57.insert(UnderlyingSecurityType_57.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_57("STRING_702797714");
    noUnderlyings_0_1.set(UnderlyingSeniority_57);
    UnderlyingInstrument_57.insert(UnderlyingSeniority_57.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_57("STRING_154240649");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_57);
    UnderlyingInstrument_57.insert(UnderlyingSettlMethod_57.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_57(5);
    noUnderlyings_0_1.set(UnderlyingSettlementType_57);
    UnderlyingInstrument_57.insert(UnderlyingSettlementType_57.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_57;
    UnderlyingStartValue_57.setString("4771488");
    noUnderlyings_0_1.set(UnderlyingStartValue_57);
    UnderlyingInstrument_57.insert(UnderlyingStartValue_57.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_57("STRING_762780023");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_57);
    UnderlyingInstrument_57.insert(UnderlyingStateOrProvinceOfIssue_57.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_57("CHF");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_57);
    UnderlyingInstrument_57.insert(UnderlyingStrikeCurrency_57.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_57;
    UnderlyingStrikePrice_57.setString("15430750");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_57);
    UnderlyingInstrument_57.insert(UnderlyingStrikePrice_57.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_57("STRING_1833633490");
    noUnderlyings_0_1.set(UnderlyingSymbol_57);
    UnderlyingInstrument_57.insert(UnderlyingSymbol_57.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_57("STRING_1064061078");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_57);
    UnderlyingInstrument_57.insert(UnderlyingSymbolSfx_57.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_57("STRING_1203472380");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_57);
    UnderlyingInstrument_57.insert(UnderlyingTimeUnit_57.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_57("STRING_1180376748");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_57);
    UnderlyingInstrument_57.insert(UnderlyingUnitOfMeasure_57.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_57;
    UnderlyingUnitOfMeasureQty_57.setString("1161225");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_57);
    UnderlyingInstrument_57.insert(UnderlyingUnitOfMeasureQty_57.getString());
    all_values.push_back(UnderlyingInstrument_57);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_113;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_113("STRING_584792180");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_113);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_113.insert(UnderlyingSecurityAltID_113.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_113("STRING_1461924694");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_113);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_113.insert(UnderlyingSecurityAltIDSource_113.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_113);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_112;
      FIX::UnderlyingStipType UnderlyingStipType_112("STRING_418032290");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_112);
      UnderlyingStipulations_NoUnderlyingStips_112.insert(UnderlyingStipType_112.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_112("STRING_1897138521");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_112);
      UnderlyingStipulations_NoUnderlyingStips_112.insert(UnderlyingStipValue_112.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_112);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_113;
      FIX::UnderlyingStipType UnderlyingStipType_113("STRING_157612637");
      noUnderlyingStips_1_1_1.set(UnderlyingStipType_113);
      UnderlyingStipulations_NoUnderlyingStips_113.insert(UnderlyingStipType_113.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_113("STRING_1134549047");
      noUnderlyingStips_1_1_1.set(UnderlyingStipValue_113);
      UnderlyingStipulations_NoUnderlyingStips_113.insert(UnderlyingStipValue_113.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_113);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_115;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_115("STRING_879952964");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_115);
      UndlyInstrumentParties_NoUndlyInstrumentParties_115.insert(UnderlyingInstrumentPartyID_115.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_115('2');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_115);
      UndlyInstrumentParties_NoUndlyInstrumentParties_115.insert(UnderlyingInstrumentPartyIDSource_115.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_115(528081035);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_115);
      UndlyInstrumentParties_NoUndlyInstrumentParties_115.insert(UnderlyingInstrumentPartyRole_115.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_115);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_220;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_220("STRING_1236247702");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_220);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_220.insert(UnderlyingInstrumentPartySubID_220.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_220(1361740559);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_220);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_220.insert(UnderlyingInstrumentPartySubIDType_220.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_220);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_221;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_221("STRING_1645893339");
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubID_221);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_221.insert(UnderlyingInstrumentPartySubID_221.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_221(191631351);
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubIDType_221);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_221.insert(UnderlyingInstrumentPartySubIDType_221.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_221);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_116;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_116("STRING_2000799397");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_116);
      UndlyInstrumentParties_NoUndlyInstrumentParties_116.insert(UnderlyingInstrumentPartyID_116.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_116('2');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_116);
      UndlyInstrumentParties_NoUndlyInstrumentParties_116.insert(UnderlyingInstrumentPartyIDSource_116.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_116(345872000);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_116);
      UndlyInstrumentParties_NoUndlyInstrumentParties_116.insert(UnderlyingInstrumentPartyRole_116.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_116);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_222;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_222("STRING_678356296");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_222);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_222.insert(UnderlyingInstrumentPartySubID_222.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_222(1108652024);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_222);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_222.insert(UnderlyingInstrumentPartySubIDType_222.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_222);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_223;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_223("STRING_1845023712");
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubID_223);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_223.insert(UnderlyingInstrumentPartySubID_223.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_223(1473263299);
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubIDType_223);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_223.insert(UnderlyingInstrumentPartySubIDType_223.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_223);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_117;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_117("STRING_504243380");
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyID_117);
      UndlyInstrumentParties_NoUndlyInstrumentParties_117.insert(UnderlyingInstrumentPartyID_117.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_117('1');
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyIDSource_117);
      UndlyInstrumentParties_NoUndlyInstrumentParties_117.insert(UnderlyingInstrumentPartyIDSource_117.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_117(389840729);
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyRole_117);
      UndlyInstrumentParties_NoUndlyInstrumentParties_117.insert(UnderlyingInstrumentPartyRole_117.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_117);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_224;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_224("STRING_564066654");
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubID_224);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_224.insert(UnderlyingInstrumentPartySubID_224.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_224(505963248);
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubIDType_224);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_224.insert(UnderlyingInstrumentPartySubIDType_224.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_224);

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_225;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_225("STRING_716264952");
        noUndlyInstrumentPartySubIDs_1_2_2_1.set(UnderlyingInstrumentPartySubID_225);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_225.insert(UnderlyingInstrumentPartySubID_225.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_225(1148858835);
        noUndlyInstrumentPartySubIDs_1_2_2_1.set(UnderlyingInstrumentPartySubIDType_225);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_225.insert(UnderlyingInstrumentPartySubIDType_225.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_225);

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_1);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_226;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_226("STRING_1967887942");
        noUndlyInstrumentPartySubIDs_1_2_2_2.set(UnderlyingInstrumentPartySubID_226);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_226.insert(UnderlyingInstrumentPartySubID_226.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_226(1956121879);
        noUndlyInstrumentPartySubIDs_1_2_2_2.set(UnderlyingInstrumentPartySubIDType_226);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_226.insert(UnderlyingInstrumentPartySubIDType_226.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_226);

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_2);
    }
    msg.addGroup(noUnderlyings_0_1);
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
