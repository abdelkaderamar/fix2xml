#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/NewOrderList.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( NewOrderList, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::NewOrderList msg;

  list<multiset<string>> all_values;
  multiset<string> NewOrderList_0;
  FIX::AllowableOneSidednessCurr AllowableOneSidednessCurr_0("EUR");
  msg.set(AllowableOneSidednessCurr_0);
  NewOrderList_0.insert(AllowableOneSidednessCurr_0.getString());
  FIX::AllowableOneSidednessPct AllowableOneSidednessPct_0;
  AllowableOneSidednessPct_0.setString("95.720000");
  msg.set(AllowableOneSidednessPct_0);
  NewOrderList_0.insert(AllowableOneSidednessPct_0.getString());
  FIX::AllowableOneSidednessValue AllowableOneSidednessValue_0;
  AllowableOneSidednessValue_0.setString("4567255");
  msg.set(AllowableOneSidednessValue_0);
  NewOrderList_0.insert(AllowableOneSidednessValue_0.getString());
  FIX::BidID BidID_3("STRING_161865100");
  msg.set(BidID_3);
  NewOrderList_0.insert(BidID_3.getString());
  FIX::BidType BidType_1(1);
  msg.set(BidType_1);
  NewOrderList_0.insert(BidType_1.getString());
  FIX::CancellationRights CancellationRights_4('N');
  msg.set(CancellationRights_4);
  NewOrderList_0.insert(CancellationRights_4.getString());
  FIX::ClientBidID ClientBidID_3("STRING_265493021");
  msg.set(ClientBidID_3);
  NewOrderList_0.insert(ClientBidID_3.getString());
  FIX::ContingencyType ContingencyType_1(2);
  msg.set(ContingencyType_1);
  NewOrderList_0.insert(ContingencyType_1.getString());
  FIX::EncodedListExecInst EncodedListExecInst_0("DATA_1924233421");
  msg.set(EncodedListExecInst_0);
  NewOrderList_0.insert(EncodedListExecInst_0.getString());
  FIX::EncodedListExecInstLen EncodedListExecInstLen_0(531210070);
  msg.set(EncodedListExecInstLen_0);
  NewOrderList_0.insert(EncodedListExecInstLen_0.getString());
  FIX::LastFragment LastFragment_13(true);
  msg.set(LastFragment_13);
  NewOrderList_0.insert(LastFragment_13.getString());
  FIX::ListExecInst ListExecInst_0("STRING_2108047891");
  msg.set(ListExecInst_0);
  NewOrderList_0.insert(ListExecInst_0.getString());
  FIX::ListExecInstType ListExecInstType_0('2');
  msg.set(ListExecInstType_0);
  NewOrderList_0.insert(ListExecInstType_0.getString());
  FIX::ListID ListID_19("STRING_1018637020");
  msg.set(ListID_19);
  NewOrderList_0.insert(ListID_19.getString());
  FIX::MoneyLaunderingStatus MoneyLaunderingStatus_4('Y');
  msg.set(MoneyLaunderingStatus_4);
  NewOrderList_0.insert(MoneyLaunderingStatus_4.getString());
  FIX::ProgPeriodInterval ProgPeriodInterval_1(2108893054);
  msg.set(ProgPeriodInterval_1);
  NewOrderList_0.insert(ProgPeriodInterval_1.getString());
  FIX::ProgRptReqs ProgRptReqs_1(2);
  msg.set(ProgRptReqs_1);
  NewOrderList_0.insert(ProgRptReqs_1.getString());
  FIX::RegistID RegistID_4("STRING_332557832");
  msg.set(RegistID_4);
  NewOrderList_0.insert(RegistID_4.getString());
  FIX::TotNoOrders TotNoOrders_1(22567749);
  msg.set(TotNoOrders_1);
  NewOrderList_0.insert(TotNoOrders_1.getString());
  all_values.push_back(NewOrderList_0);

  // ListOrdGrp
  // Group ListOrdGrp.NoOrders
  {
    FIX50SP2::NewOrderList::NoOrders noOrders_0_0;
    // ListOrdGrp.NoOrders
    multiset<string> ListOrdGrp_NoOrders_0;
    FIX::Account Account_15("STRING_1078281816");
    noOrders_0_0.set(Account_15);
    ListOrdGrp_NoOrders_0.insert(Account_15.getString());
    FIX::AccountType AccountType_14(6);
    noOrders_0_0.set(AccountType_14);
    ListOrdGrp_NoOrders_0.insert(AccountType_14.getString());
    FIX::AcctIDSource AcctIDSource_8(5);
    noOrders_0_0.set(AcctIDSource_8);
    ListOrdGrp_NoOrders_0.insert(AcctIDSource_8.getString());
    FIX::AllocID AllocID_12("STRING_659055574");
    noOrders_0_0.set(AllocID_12);
    ListOrdGrp_NoOrders_0.insert(AllocID_12.getString());
    FIX::BookingType BookingType_19(1);
    noOrders_0_0.set(BookingType_19);
    ListOrdGrp_NoOrders_0.insert(BookingType_19.getString());
    FIX::BookingUnit BookingUnit_5('0');
    noOrders_0_0.set(BookingUnit_5);
    ListOrdGrp_NoOrders_0.insert(BookingUnit_5.getString());
    FIX::CashMargin CashMargin_5('1');
    noOrders_0_0.set(CashMargin_5);
    ListOrdGrp_NoOrders_0.insert(CashMargin_5.getString());
    FIX::ClOrdID ClOrdID_29("STRING_963912866");
    noOrders_0_0.set(ClOrdID_29);
    ListOrdGrp_NoOrders_0.insert(ClOrdID_29.getString());
    FIX::ClOrdLinkID ClOrdLinkID_7("STRING_1778411650");
    noOrders_0_0.set(ClOrdLinkID_7);
    ListOrdGrp_NoOrders_0.insert(ClOrdLinkID_7.getString());
    FIX::ClearingFeeIndicator ClearingFeeIndicator_11("STRING_F");
    noOrders_0_0.set(ClearingFeeIndicator_11);
    ListOrdGrp_NoOrders_0.insert(ClearingFeeIndicator_11.getString());
    FIX::ComplianceID ComplianceID_6("STRING_906878897");
    noOrders_0_0.set(ComplianceID_6);
    ListOrdGrp_NoOrders_0.insert(ComplianceID_6.getString());
    FIX::CoveredOrUncovered CoveredOrUncovered_4(1);
    noOrders_0_0.set(CoveredOrUncovered_4);
    ListOrdGrp_NoOrders_0.insert(CoveredOrUncovered_4.getString());
    FIX::Currency Currency_42("JPY");
    noOrders_0_0.set(Currency_42);
    ListOrdGrp_NoOrders_0.insert(Currency_42.getString());
    FIX::CustOrderCapacity CustOrderCapacity_8(1);
    noOrders_0_0.set(CustOrderCapacity_8);
    ListOrdGrp_NoOrders_0.insert(CustOrderCapacity_8.getString());
    FIX::DayBookingInst DayBookingInst_5('0');
    noOrders_0_0.set(DayBookingInst_5);
    ListOrdGrp_NoOrders_0.insert(DayBookingInst_5.getString());
    FIX::Designation Designation_4("STRING_301427516");
    noOrders_0_0.set(Designation_4);
    ListOrdGrp_NoOrders_0.insert(Designation_4.getString());
    FIX::EffectiveTime EffectiveTime_4(FIX::UTCTIMESTAMP(15, 49, 15, 9, 1, 2013));
    noOrders_0_0.set(EffectiveTime_4);
    ListOrdGrp_NoOrders_0.insert(EffectiveTime_4.getString());
    FIX::EncodedText EncodedText_53("DATA_1340926913");
    noOrders_0_0.set(EncodedText_53);
    ListOrdGrp_NoOrders_0.insert(EncodedText_53.getString());
    FIX::EncodedTextLen EncodedTextLen_53(515366587);
    noOrders_0_0.set(EncodedTextLen_53);
    ListOrdGrp_NoOrders_0.insert(EncodedTextLen_53.getString());
    FIX::ExDestination ExDestination_3("EXCHANGE_1542770097");
    noOrders_0_0.set(ExDestination_3);
    ListOrdGrp_NoOrders_0.insert(ExDestination_3.getString());
    FIX::ExDestinationIDSource ExDestinationIDSource_3('B');
    noOrders_0_0.set(ExDestinationIDSource_3);
    ListOrdGrp_NoOrders_0.insert(ExDestinationIDSource_3.getString());
    FIX::ExecInst ExecInst_6("MULTIPLECHARVALUE_R");
    noOrders_0_0.set(ExecInst_6);
    ListOrdGrp_NoOrders_0.insert(ExecInst_6.getString());
    FIX::ExpireDate ExpireDate_7("LOCALMKTDATE_1565337847");
    noOrders_0_0.set(ExpireDate_7);
    ListOrdGrp_NoOrders_0.insert(ExpireDate_7.getString());
    FIX::ExpireTime ExpireTime_8(FIX::UTCTIMESTAMP(3, 22, 56, 10, 1, 2003));
    noOrders_0_0.set(ExpireTime_8);
    ListOrdGrp_NoOrders_0.insert(ExpireTime_8.getString());
    FIX::ForexReq ForexReq_5(false);
    noOrders_0_0.set(ForexReq_5);
    ListOrdGrp_NoOrders_0.insert(ForexReq_5.getString());
    FIX::GTBookingInst GTBookingInst_4(2);
    noOrders_0_0.set(GTBookingInst_4);
    ListOrdGrp_NoOrders_0.insert(GTBookingInst_4.getString());
    FIX::HandlInst HandlInst_4('3');
    noOrders_0_0.set(HandlInst_4);
    ListOrdGrp_NoOrders_0.insert(HandlInst_4.getString());
    FIX::IOIID IOIID_4("STRING_298689085");
    noOrders_0_0.set(IOIID_4);
    ListOrdGrp_NoOrders_0.insert(IOIID_4.getString());
    FIX::ListSeqNo ListSeqNo_0(346240692);
    noOrders_0_0.set(ListSeqNo_0);
    ListOrdGrp_NoOrders_0.insert(ListSeqNo_0.getString());
    FIX::LocateReqd LocateReqd_3(false);
    noOrders_0_0.set(LocateReqd_3);
    ListOrdGrp_NoOrders_0.insert(LocateReqd_3.getString());
    FIX::MatchIncrement MatchIncrement_4;
    MatchIncrement_4.setString("4647639");
    noOrders_0_0.set(MatchIncrement_4);
    ListOrdGrp_NoOrders_0.insert(MatchIncrement_4.getString());
    FIX::MaxFloor MaxFloor_4;
    MaxFloor_4.setString("17098451");
    noOrders_0_0.set(MaxFloor_4);
    ListOrdGrp_NoOrders_0.insert(MaxFloor_4.getString());
    FIX::MaxPriceLevels MaxPriceLevels_4(735764053);
    noOrders_0_0.set(MaxPriceLevels_4);
    ListOrdGrp_NoOrders_0.insert(MaxPriceLevels_4.getString());
    FIX::MaxShow MaxShow_4;
    MaxShow_4.setString("13619453");
    noOrders_0_0.set(MaxShow_4);
    ListOrdGrp_NoOrders_0.insert(MaxShow_4.getString());
    FIX::MinQty MinQty_6;
    MinQty_6.setString("20112726");
    noOrders_0_0.set(MinQty_6);
    ListOrdGrp_NoOrders_0.insert(MinQty_6.getString());
    FIX::OrdType OrdType_33('7');
    noOrders_0_0.set(OrdType_33);
    ListOrdGrp_NoOrders_0.insert(OrdType_33.getString());
    FIX::OrderCapacity OrderCapacity_21('W');
    noOrders_0_0.set(OrderCapacity_21);
    ListOrdGrp_NoOrders_0.insert(OrderCapacity_21.getString());
    FIX::OrderQty2 OrderQty2_12;
    OrderQty2_12.setString("20894499");
    noOrders_0_0.set(OrderQty2_12);
    ListOrdGrp_NoOrders_0.insert(OrderQty2_12.getString());
    FIX::OrderRestrictions OrderRestrictions_19("MULTIPLECHARVALUE_4");
    noOrders_0_0.set(OrderRestrictions_19);
    ListOrdGrp_NoOrders_0.insert(OrderRestrictions_19.getString());
    FIX::ParticipationRate ParticipationRate_4;
    ParticipationRate_4.setString("89.440000");
    noOrders_0_0.set(ParticipationRate_4);
    ListOrdGrp_NoOrders_0.insert(ParticipationRate_4.getString());
    FIX::PositionEffect PositionEffect_8('F');
    noOrders_0_0.set(PositionEffect_8);
    ListOrdGrp_NoOrders_0.insert(PositionEffect_8.getString());
    FIX::PreTradeAnonymity PreTradeAnonymity_5(false);
    noOrders_0_0.set(PreTradeAnonymity_5);
    ListOrdGrp_NoOrders_0.insert(PreTradeAnonymity_5.getString());
    FIX::PreallocMethod PreallocMethod_5('1');
    noOrders_0_0.set(PreallocMethod_5);
    ListOrdGrp_NoOrders_0.insert(PreallocMethod_5.getString());
    FIX::PrevClosePx PrevClosePx_4;
    PrevClosePx_4.setString("4960744");
    noOrders_0_0.set(PrevClosePx_4);
    ListOrdGrp_NoOrders_0.insert(PrevClosePx_4.getString());
    FIX::Price Price_13;
    Price_13.setString("1007222");
    noOrders_0_0.set(Price_13);
    ListOrdGrp_NoOrders_0.insert(Price_13.getString());
    FIX::Price2 Price2_0;
    Price2_0.setString("19790531");
    noOrders_0_0.set(Price2_0);
    ListOrdGrp_NoOrders_0.insert(Price2_0.getString());
    FIX::PriceProtectionScope PriceProtectionScope_4('2');
    noOrders_0_0.set(PriceProtectionScope_4);
    ListOrdGrp_NoOrders_0.insert(PriceProtectionScope_4.getString());
    FIX::PriceType PriceType_23(19);
    noOrders_0_0.set(PriceType_23);
    ListOrdGrp_NoOrders_0.insert(PriceType_23.getString());
    FIX::ProcessCode ProcessCode_10('4');
    noOrders_0_0.set(ProcessCode_10);
    ListOrdGrp_NoOrders_0.insert(ProcessCode_10.getString());
    FIX::QtyType QtyType_17(0);
    noOrders_0_0.set(QtyType_17);
    ListOrdGrp_NoOrders_0.insert(QtyType_17.getString());
    FIX::QuoteID QuoteID_5("STRING_1499387888");
    noOrders_0_0.set(QuoteID_5);
    ListOrdGrp_NoOrders_0.insert(QuoteID_5.getString());
    FIX::RefOrderID RefOrderID_0("STRING_2030674855");
    noOrders_0_0.set(RefOrderID_0);
    ListOrdGrp_NoOrders_0.insert(RefOrderID_0.getString());
    FIX::RefOrderIDSource RefOrderIDSource_0('0');
    noOrders_0_0.set(RefOrderIDSource_0);
    ListOrdGrp_NoOrders_0.insert(RefOrderIDSource_0.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_27("STRING_2122320464");
    noOrders_0_0.set(SecondaryClOrdID_27);
    ListOrdGrp_NoOrders_0.insert(SecondaryClOrdID_27.getString());
    FIX::SettlCurrency SettlCurrency_14("EUR");
    noOrders_0_0.set(SettlCurrency_14);
    ListOrdGrp_NoOrders_0.insert(SettlCurrency_14.getString());
    FIX::SettlDate SettlDate_31("LOCALMKTDATE_1561682259");
    noOrders_0_0.set(SettlDate_31);
    ListOrdGrp_NoOrders_0.insert(SettlDate_31.getString());
    FIX::SettlDate2 SettlDate2_12("LOCALMKTDATE_952840727");
    noOrders_0_0.set(SettlDate2_12);
    ListOrdGrp_NoOrders_0.insert(SettlDate2_12.getString());
    FIX::SettlInstMode SettlInstMode_0('2');
    noOrders_0_0.set(SettlInstMode_0);
    ListOrdGrp_NoOrders_0.insert(SettlInstMode_0.getString());
    FIX::SettlType SettlType_14("STRING_3");
    noOrders_0_0.set(SettlType_14);
    ListOrdGrp_NoOrders_0.insert(SettlType_14.getString());
    FIX::Side Side_22('9');
    noOrders_0_0.set(Side_22);
    ListOrdGrp_NoOrders_0.insert(Side_22.getString());
    FIX::SideValueInd SideValueInd_3(2);
    noOrders_0_0.set(SideValueInd_3);
    ListOrdGrp_NoOrders_0.insert(SideValueInd_3.getString());
    FIX::SolicitedFlag SolicitedFlag_5(false);
    noOrders_0_0.set(SolicitedFlag_5);
    ListOrdGrp_NoOrders_0.insert(SolicitedFlag_5.getString());
    FIX::StopPx StopPx_4;
    StopPx_4.setString("5400859");
    noOrders_0_0.set(StopPx_4);
    ListOrdGrp_NoOrders_0.insert(StopPx_4.getString());
    FIX::TargetStrategy TargetStrategy_4(2);
    noOrders_0_0.set(TargetStrategy_4);
    ListOrdGrp_NoOrders_0.insert(TargetStrategy_4.getString());
    FIX::TargetStrategyParameters TargetStrategyParameters_4("STRING_1334073520");
    noOrders_0_0.set(TargetStrategyParameters_4);
    ListOrdGrp_NoOrders_0.insert(TargetStrategyParameters_4.getString());
    FIX::Text Text_53("STRING_1278142259");
    noOrders_0_0.set(Text_53);
    ListOrdGrp_NoOrders_0.insert(Text_53.getString());
    FIX::TimeInForce TimeInForce_18('8');
    noOrders_0_0.set(TimeInForce_18);
    ListOrdGrp_NoOrders_0.insert(TimeInForce_18.getString());
    FIX::TradeDate TradeDate_19("LOCALMKTDATE_1276039851");
    noOrders_0_0.set(TradeDate_19);
    ListOrdGrp_NoOrders_0.insert(TradeDate_19.getString());
    FIX::TradeOriginationDate TradeOriginationDate_11("LOCALMKTDATE_402217345");
    noOrders_0_0.set(TradeOriginationDate_11);
    ListOrdGrp_NoOrders_0.insert(TradeOriginationDate_11.getString());
    FIX::TransactTime TransactTime_39(FIX::UTCTIMESTAMP(3, 22, 35, 18, 9, 2012));
    noOrders_0_0.set(TransactTime_39);
    ListOrdGrp_NoOrders_0.insert(TransactTime_39.getString());
    all_values.push_back(ListOrdGrp_NoOrders_0);

    // CommissionData
    multiset<string> CommissionData_13;
    FIX::CommCurrency CommCurrency_13("USD");
    noOrders_0_0.set(CommCurrency_13);
    CommissionData_13.insert(CommCurrency_13.getString());
    FIX::CommType CommType_13('5');
    noOrders_0_0.set(CommType_13);
    CommissionData_13.insert(CommType_13.getString());
    FIX::Commission Commission_13;
    Commission_13.setString("20720588");
    noOrders_0_0.set(Commission_13);
    CommissionData_13.insert(Commission_13.getString());
    FIX::FundRenewWaiv FundRenewWaiv_13('N');
    noOrders_0_0.set(FundRenewWaiv_13);
    CommissionData_13.insert(FundRenewWaiv_13.getString());
    all_values.push_back(CommissionData_13);

    // DiscretionInstructions
    multiset<string> DiscretionInstructions_4;
    FIX::DiscretionInst DiscretionInst_4('1');
    noOrders_0_0.set(DiscretionInst_4);
    DiscretionInstructions_4.insert(DiscretionInst_4.getString());
    FIX::DiscretionLimitType DiscretionLimitType_4(1);
    noOrders_0_0.set(DiscretionLimitType_4);
    DiscretionInstructions_4.insert(DiscretionLimitType_4.getString());
    FIX::DiscretionMoveType DiscretionMoveType_4(0);
    noOrders_0_0.set(DiscretionMoveType_4);
    DiscretionInstructions_4.insert(DiscretionMoveType_4.getString());
    FIX::DiscretionOffsetType DiscretionOffsetType_4(3);
    noOrders_0_0.set(DiscretionOffsetType_4);
    DiscretionInstructions_4.insert(DiscretionOffsetType_4.getString());
    FIX::DiscretionOffsetValue DiscretionOffsetValue_4;
    DiscretionOffsetValue_4.setString("18298345");
    noOrders_0_0.set(DiscretionOffsetValue_4);
    DiscretionInstructions_4.insert(DiscretionOffsetValue_4.getString());
    FIX::DiscretionRoundDirection DiscretionRoundDirection_4(2);
    noOrders_0_0.set(DiscretionRoundDirection_4);
    DiscretionInstructions_4.insert(DiscretionRoundDirection_4.getString());
    FIX::DiscretionScope DiscretionScope_4(4);
    noOrders_0_0.set(DiscretionScope_4);
    DiscretionInstructions_4.insert(DiscretionScope_4.getString());
    all_values.push_back(DiscretionInstructions_4);

    // DisplayInstruction
    multiset<string> DisplayInstruction_4;
    FIX::DisplayHighQty DisplayHighQty_4;
    DisplayHighQty_4.setString("3257998");
    noOrders_0_0.set(DisplayHighQty_4);
    DisplayInstruction_4.insert(DisplayHighQty_4.getString());
    FIX::DisplayLowQty DisplayLowQty_4;
    DisplayLowQty_4.setString("13758143");
    noOrders_0_0.set(DisplayLowQty_4);
    DisplayInstruction_4.insert(DisplayLowQty_4.getString());
    FIX::DisplayMethod DisplayMethod_4('4');
    noOrders_0_0.set(DisplayMethod_4);
    DisplayInstruction_4.insert(DisplayMethod_4.getString());
    FIX::DisplayMinIncr DisplayMinIncr_4;
    DisplayMinIncr_4.setString("14340126");
    noOrders_0_0.set(DisplayMinIncr_4);
    DisplayInstruction_4.insert(DisplayMinIncr_4.getString());
    FIX::DisplayQty DisplayQty_4;
    DisplayQty_4.setString("6986152");
    noOrders_0_0.set(DisplayQty_4);
    DisplayInstruction_4.insert(DisplayQty_4.getString());
    FIX::DisplayWhen DisplayWhen_4('2');
    noOrders_0_0.set(DisplayWhen_4);
    DisplayInstruction_4.insert(DisplayWhen_4.getString());
    FIX::RefreshQty RefreshQty_4;
    RefreshQty_4.setString("17566871");
    noOrders_0_0.set(RefreshQty_4);
    DisplayInstruction_4.insert(RefreshQty_4.getString());
    FIX::SecondaryDisplayQty SecondaryDisplayQty_4;
    SecondaryDisplayQty_4.setString("20326887");
    noOrders_0_0.set(SecondaryDisplayQty_4);
    DisplayInstruction_4.insert(SecondaryDisplayQty_4.getString());
    all_values.push_back(DisplayInstruction_4);

    // Instrument
    multiset<string> Instrument_47;
    FIX::AttachmentPoint AttachmentPoint_47;
    AttachmentPoint_47.setString("82.480000");
    noOrders_0_0.set(AttachmentPoint_47);
    Instrument_47.insert(AttachmentPoint_47.getString());
    FIX::CFICode CFICode_47("STRING_1716457110");
    noOrders_0_0.set(CFICode_47);
    Instrument_47.insert(CFICode_47.getString());
    FIX::CPProgram CPProgram_47(2);
    noOrders_0_0.set(CPProgram_47);
    Instrument_47.insert(CPProgram_47.getString());
    FIX::CPRegType CPRegType_47("STRING_1669545593");
    noOrders_0_0.set(CPRegType_47);
    Instrument_47.insert(CPRegType_47.getString());
    FIX::CapPrice CapPrice_47;
    CapPrice_47.setString("16356123");
    noOrders_0_0.set(CapPrice_47);
    Instrument_47.insert(CapPrice_47.getString());
    FIX::ContractMultiplier ContractMultiplier_47;
    ContractMultiplier_47.setString("2705090");
    noOrders_0_0.set(ContractMultiplier_47);
    Instrument_47.insert(ContractMultiplier_47.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_47(1);
    noOrders_0_0.set(ContractMultiplierUnit_47);
    Instrument_47.insert(ContractMultiplierUnit_47.getString());
    FIX::ContractSettlMonth ContractSettlMonth_47("MONTHYEAR_707596164");
    noOrders_0_0.set(ContractSettlMonth_47);
    Instrument_47.insert(ContractSettlMonth_47.getString());
    FIX::CountryOfIssue CountryOfIssue_47("COUNTRY_2023331178");
    noOrders_0_0.set(CountryOfIssue_47);
    Instrument_47.insert(CountryOfIssue_47.getString());
    FIX::CouponPaymentDate CouponPaymentDate_47("LOCALMKTDATE_1838090416");
    noOrders_0_0.set(CouponPaymentDate_47);
    Instrument_47.insert(CouponPaymentDate_47.getString());
    FIX::CouponRate CouponRate_47;
    CouponRate_47.setString("30.960000");
    noOrders_0_0.set(CouponRate_47);
    Instrument_47.insert(CouponRate_47.getString());
    FIX::CreditRating CreditRating_47("STRING_825184919");
    noOrders_0_0.set(CreditRating_47);
    Instrument_47.insert(CreditRating_47.getString());
    FIX::DatedDate DatedDate_47("LOCALMKTDATE_417558542");
    noOrders_0_0.set(DatedDate_47);
    Instrument_47.insert(DatedDate_47.getString());
    FIX::DetachmentPoint DetachmentPoint_47;
    DetachmentPoint_47.setString("92.580000");
    noOrders_0_0.set(DetachmentPoint_47);
    Instrument_47.insert(DetachmentPoint_47.getString());
    FIX::EncodedIssuer EncodedIssuer_47("DATA_749760117");
    noOrders_0_0.set(EncodedIssuer_47);
    Instrument_47.insert(EncodedIssuer_47.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_47(496414556);
    noOrders_0_0.set(EncodedIssuerLen_47);
    Instrument_47.insert(EncodedIssuerLen_47.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_47("DATA_201696628");
    noOrders_0_0.set(EncodedSecurityDesc_47);
    Instrument_47.insert(EncodedSecurityDesc_47.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_47(87351288);
    noOrders_0_0.set(EncodedSecurityDescLen_47);
    Instrument_47.insert(EncodedSecurityDescLen_47.getString());
    FIX::ExerciseStyle ExerciseStyle_47(2);
    noOrders_0_0.set(ExerciseStyle_47);
    Instrument_47.insert(ExerciseStyle_47.getString());
    FIX::Factor Factor_47;
    Factor_47.setString("10411177");
    noOrders_0_0.set(Factor_47);
    Instrument_47.insert(Factor_47.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_47(true);
    noOrders_0_0.set(FlexProductEligibilityIndicator_47);
    Instrument_47.insert(FlexProductEligibilityIndicator_47.getString());
    FIX::FlexibleIndicator FlexibleIndicator_47(true);
    noOrders_0_0.set(FlexibleIndicator_47);
    Instrument_47.insert(FlexibleIndicator_47.getString());
    FIX::FloorPrice FloorPrice_47;
    FloorPrice_47.setString("6858960");
    noOrders_0_0.set(FloorPrice_47);
    Instrument_47.insert(FloorPrice_47.getString());
    FIX::FlowScheduleType FlowScheduleType_47(2);
    noOrders_0_0.set(FlowScheduleType_47);
    Instrument_47.insert(FlowScheduleType_47.getString());
    FIX::InstrRegistry InstrRegistry_47("STRING_1393813220");
    noOrders_0_0.set(InstrRegistry_47);
    Instrument_47.insert(InstrRegistry_47.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_47('1');
    noOrders_0_0.set(InstrmtAssignmentMethod_47);
    Instrument_47.insert(InstrmtAssignmentMethod_47.getString());
    FIX::InterestAccrualDate InterestAccrualDate_47("LOCALMKTDATE_1529514666");
    noOrders_0_0.set(InterestAccrualDate_47);
    Instrument_47.insert(InterestAccrualDate_47.getString());
    FIX::IssueDate IssueDate_47("LOCALMKTDATE_2092428442");
    noOrders_0_0.set(IssueDate_47);
    Instrument_47.insert(IssueDate_47.getString());
    FIX::Issuer Issuer_47("STRING_124182103");
    noOrders_0_0.set(Issuer_47);
    Instrument_47.insert(Issuer_47.getString());
    FIX::ListMethod ListMethod_47(0);
    noOrders_0_0.set(ListMethod_47);
    Instrument_47.insert(ListMethod_47.getString());
    FIX::LocaleOfIssue LocaleOfIssue_47("STRING_1977633536");
    noOrders_0_0.set(LocaleOfIssue_47);
    Instrument_47.insert(LocaleOfIssue_47.getString());
    FIX::MaturityDate MaturityDate_47("LOCALMKTDATE_1391510351");
    noOrders_0_0.set(MaturityDate_47);
    Instrument_47.insert(MaturityDate_47.getString());
    FIX::MaturityMonthYear MaturityMonthYear_47("MONTHYEAR_707691641");
    noOrders_0_0.set(MaturityMonthYear_47);
    Instrument_47.insert(MaturityMonthYear_47.getString());
    FIX::MaturityTime MaturityTime_47("TZTIMEONLY_991394834");
    noOrders_0_0.set(MaturityTime_47);
    Instrument_47.insert(MaturityTime_47.getString());
    FIX::MinPriceIncrement MinPriceIncrement_47;
    MinPriceIncrement_47.setString("9135722");
    noOrders_0_0.set(MinPriceIncrement_47);
    Instrument_47.insert(MinPriceIncrement_47.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_47;
    MinPriceIncrementAmount_47.setString("1958203");
    noOrders_0_0.set(MinPriceIncrementAmount_47);
    Instrument_47.insert(MinPriceIncrementAmount_47.getString());
    FIX::NTPositionLimit NTPositionLimit_47(1261903846);
    noOrders_0_0.set(NTPositionLimit_47);
    Instrument_47.insert(NTPositionLimit_47.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_47;
    NotionalPercentageOutstanding_47.setString("73.640000");
    noOrders_0_0.set(NotionalPercentageOutstanding_47);
    Instrument_47.insert(NotionalPercentageOutstanding_47.getString());
    FIX::OptAttribute OptAttribute_47('9');
    noOrders_0_0.set(OptAttribute_47);
    Instrument_47.insert(OptAttribute_47.getString());
    FIX::OptPayoutAmount OptPayoutAmount_47;
    OptPayoutAmount_47.setString("11377513");
    noOrders_0_0.set(OptPayoutAmount_47);
    Instrument_47.insert(OptPayoutAmount_47.getString());
    FIX::OptPayoutType OptPayoutType_47(1);
    noOrders_0_0.set(OptPayoutType_47);
    Instrument_47.insert(OptPayoutType_47.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_47;
    OriginalNotionalPercentageOutstanding_47.setString("59.610000");
    noOrders_0_0.set(OriginalNotionalPercentageOutstanding_47);
    Instrument_47.insert(OriginalNotionalPercentageOutstanding_47.getString());
    FIX::Pool Pool_47("STRING_1962936296");
    noOrders_0_0.set(Pool_47);
    Instrument_47.insert(Pool_47.getString());
    FIX::PositionLimit PositionLimit_47(1651452674);
    noOrders_0_0.set(PositionLimit_47);
    Instrument_47.insert(PositionLimit_47.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_47("STRING_STD");
    noOrders_0_0.set(PriceQuoteMethod_47);
    Instrument_47.insert(PriceQuoteMethod_47.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_47("STRING_565212765");
    noOrders_0_0.set(PriceUnitOfMeasure_47);
    Instrument_47.insert(PriceUnitOfMeasure_47.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_47;
    PriceUnitOfMeasureQty_47.setString("3835");
    noOrders_0_0.set(PriceUnitOfMeasureQty_47);
    Instrument_47.insert(PriceUnitOfMeasureQty_47.getString());
    FIX::Product Product_49(4);
    noOrders_0_0.set(Product_49);
    Instrument_47.insert(Product_49.getString());
    FIX::ProductComplex ProductComplex_47("STRING_652564053");
    noOrders_0_0.set(ProductComplex_47);
    Instrument_47.insert(ProductComplex_47.getString());
    FIX::PutOrCall PutOrCall_47(1);
    noOrders_0_0.set(PutOrCall_47);
    Instrument_47.insert(PutOrCall_47.getString());
    FIX::RedemptionDate RedemptionDate_47("LOCALMKTDATE_648465987");
    noOrders_0_0.set(RedemptionDate_47);
    Instrument_47.insert(RedemptionDate_47.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_47("STRING_422266291");
    noOrders_0_0.set(RepoCollateralSecurityType_47);
    Instrument_47.insert(RepoCollateralSecurityType_47.getString());
    FIX::RepurchaseRate RepurchaseRate_47;
    RepurchaseRate_47.setString("97.970000");
    noOrders_0_0.set(RepurchaseRate_47);
    Instrument_47.insert(RepurchaseRate_47.getString());
    FIX::RepurchaseTerm RepurchaseTerm_47(1334362014);
    noOrders_0_0.set(RepurchaseTerm_47);
    Instrument_47.insert(RepurchaseTerm_47.getString());
    FIX::RestructuringType RestructuringType_47("STRING_FR");
    noOrders_0_0.set(RestructuringType_47);
    Instrument_47.insert(RestructuringType_47.getString());
    FIX::SecurityDesc SecurityDesc_47("STRING_1962303017");
    noOrders_0_0.set(SecurityDesc_47);
    Instrument_47.insert(SecurityDesc_47.getString());
    FIX::SecurityExchange SecurityExchange_47("EXCHANGE_1469358128");
    noOrders_0_0.set(SecurityExchange_47);
    Instrument_47.insert(SecurityExchange_47.getString());
    FIX::SecurityGroup SecurityGroup_47("STRING_2047283010");
    noOrders_0_0.set(SecurityGroup_47);
    Instrument_47.insert(SecurityGroup_47.getString());
    FIX::SecurityID SecurityID_47("STRING_1907247812");
    noOrders_0_0.set(SecurityID_47);
    Instrument_47.insert(SecurityID_47.getString());
    FIX::SecurityIDSource SecurityIDSource_47("STRING_K");
    noOrders_0_0.set(SecurityIDSource_47);
    Instrument_47.insert(SecurityIDSource_47.getString());
    FIX::SecurityStatus SecurityStatus_47("STRING_1");
    noOrders_0_0.set(SecurityStatus_47);
    Instrument_47.insert(SecurityStatus_47.getString());
    FIX::SecuritySubType SecuritySubType_48("STRING_1737397700");
    noOrders_0_0.set(SecuritySubType_48);
    Instrument_47.insert(SecuritySubType_48.getString());
    FIX::SecurityType SecurityType_49("STRING_TAN");
    noOrders_0_0.set(SecurityType_49);
    Instrument_47.insert(SecurityType_49.getString());
    FIX::Seniority Seniority_47("STRING_SD");
    noOrders_0_0.set(Seniority_47);
    Instrument_47.insert(Seniority_47.getString());
    FIX::SettlMethod SettlMethod_47('C');
    noOrders_0_0.set(SettlMethod_47);
    Instrument_47.insert(SettlMethod_47.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_47("STRING_1751139231");
    noOrders_0_0.set(SettleOnOpenFlag_47);
    Instrument_47.insert(SettleOnOpenFlag_47.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_47("STRING_1942029531");
    noOrders_0_0.set(StateOrProvinceOfIssue_47);
    Instrument_47.insert(StateOrProvinceOfIssue_47.getString());
    FIX::StrikeCurrency StrikeCurrency_47("USD");
    noOrders_0_0.set(StrikeCurrency_47);
    Instrument_47.insert(StrikeCurrency_47.getString());
    FIX::StrikeMultiplier StrikeMultiplier_47;
    StrikeMultiplier_47.setString("6979623");
    noOrders_0_0.set(StrikeMultiplier_47);
    Instrument_47.insert(StrikeMultiplier_47.getString());
    FIX::StrikePrice StrikePrice_47;
    StrikePrice_47.setString("8334804");
    noOrders_0_0.set(StrikePrice_47);
    Instrument_47.insert(StrikePrice_47.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_47(3);
    noOrders_0_0.set(StrikePriceBoundaryMethod_47);
    Instrument_47.insert(StrikePriceBoundaryMethod_47.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_47;
    StrikePriceBoundaryPrecision_47.setString("83.580000");
    noOrders_0_0.set(StrikePriceBoundaryPrecision_47);
    Instrument_47.insert(StrikePriceBoundaryPrecision_47.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_47(3);
    noOrders_0_0.set(StrikePriceDeterminationMethod_47);
    Instrument_47.insert(StrikePriceDeterminationMethod_47.getString());
    FIX::StrikeValue StrikeValue_47;
    StrikeValue_47.setString("18848061");
    noOrders_0_0.set(StrikeValue_47);
    Instrument_47.insert(StrikeValue_47.getString());
    FIX::Symbol Symbol_47("STRING_618179930");
    noOrders_0_0.set(Symbol_47);
    Instrument_47.insert(Symbol_47.getString());
    FIX::SymbolSfx SymbolSfx_47("STRING_WI");
    noOrders_0_0.set(SymbolSfx_47);
    Instrument_47.insert(SymbolSfx_47.getString());
    FIX::TimeUnit TimeUnit_47("STRING_Mo");
    noOrders_0_0.set(TimeUnit_47);
    Instrument_47.insert(TimeUnit_47.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_47(3);
    noOrders_0_0.set(UnderlyingPriceDeterminationMethod_47);
    Instrument_47.insert(UnderlyingPriceDeterminationMethod_47.getString());
    FIX::UnitOfMeasure UnitOfMeasure_47("STRING_lbs");
    noOrders_0_0.set(UnitOfMeasure_47);
    Instrument_47.insert(UnitOfMeasure_47.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_47;
    UnitOfMeasureQty_47.setString("2881970");
    noOrders_0_0.set(UnitOfMeasureQty_47);
    Instrument_47.insert(UnitOfMeasureQty_47.getString());
    FIX::ValuationMethod ValuationMethod_47("STRING_FUTDA");
    noOrders_0_0.set(ValuationMethod_47);
    Instrument_47.insert(ValuationMethod_47.getString());
    all_values.push_back(Instrument_47);

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::NewOrderList::NoOrders::NoComplexEvents noComplexEvents_0_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_89;
      FIX::ComplexEventCondition ComplexEventCondition_89(2);
      noComplexEvents_0_1_0.set(ComplexEventCondition_89);
      ComplexEvents_NoComplexEvents_89.insert(ComplexEventCondition_89.getString());
      FIX::ComplexEventPrice ComplexEventPrice_89;
      ComplexEventPrice_89.setString("608724");
      noComplexEvents_0_1_0.set(ComplexEventPrice_89);
      ComplexEvents_NoComplexEvents_89.insert(ComplexEventPrice_89.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_89(2);
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryMethod_89);
      ComplexEvents_NoComplexEvents_89.insert(ComplexEventPriceBoundaryMethod_89.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_89;
      ComplexEventPriceBoundaryPrecision_89.setString("61.770000");
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryPrecision_89);
      ComplexEvents_NoComplexEvents_89.insert(ComplexEventPriceBoundaryPrecision_89.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_89(2);
      noComplexEvents_0_1_0.set(ComplexEventPriceTimeType_89);
      ComplexEvents_NoComplexEvents_89.insert(ComplexEventPriceTimeType_89.getString());
      FIX::ComplexEventType ComplexEventType_89(7);
      noComplexEvents_0_1_0.set(ComplexEventType_89);
      ComplexEvents_NoComplexEvents_89.insert(ComplexEventType_89.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_89;
      ComplexOptPayoutAmount_89.setString("4312703");
      noComplexEvents_0_1_0.set(ComplexOptPayoutAmount_89);
      ComplexEvents_NoComplexEvents_89.insert(ComplexOptPayoutAmount_89.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_89);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_179;
        FIX::ComplexEventEndDate ComplexEventEndDate_179(FIX::UTCTIMESTAMP(1, 9, 12, 4, 5, 2013));
        noComplexEventDates_0_0_2_0.set(ComplexEventEndDate_179);
        ComplexEventDates_NoComplexEventDates_179.insert(ComplexEventEndDate_179.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_179(FIX::UTCTIMESTAMP(20, 32, 47, 17, 11, 2013));
        noComplexEventDates_0_0_2_0.set(ComplexEventStartDate_179);
        ComplexEventDates_NoComplexEventDates_179.insert(ComplexEventStartDate_179.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_179);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_359;
          FIX::ComplexEventEndTime ComplexEventEndTime_359(FIX::UTCTIMEONLY(4, 25, 22));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventEndTime_359);
          ComplexEventTimes_NoComplexEventTimes_359.insert(ComplexEventEndTime_359.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_359(FIX::UTCTIMEONLY(20, 51, 38));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventStartTime_359);
          ComplexEventTimes_NoComplexEventTimes_359.insert(ComplexEventStartTime_359.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_359);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_180;
        FIX::ComplexEventEndDate ComplexEventEndDate_180(FIX::UTCTIMESTAMP(3, 34, 0, 2, 6, 2017));
        noComplexEventDates_0_0_2_1.set(ComplexEventEndDate_180);
        ComplexEventDates_NoComplexEventDates_180.insert(ComplexEventEndDate_180.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_180(FIX::UTCTIMESTAMP(8, 7, 54, 16, 12, 2010));
        noComplexEventDates_0_0_2_1.set(ComplexEventStartDate_180);
        ComplexEventDates_NoComplexEventDates_180.insert(ComplexEventStartDate_180.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_180);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_360;
          FIX::ComplexEventEndTime ComplexEventEndTime_360(FIX::UTCTIMEONLY(23, 8, 11));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventEndTime_360);
          ComplexEventTimes_NoComplexEventTimes_360.insert(ComplexEventEndTime_360.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_360(FIX::UTCTIMEONLY(18, 48, 0));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventStartTime_360);
          ComplexEventTimes_NoComplexEventTimes_360.insert(ComplexEventStartTime_360.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_360);

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_361;
          FIX::ComplexEventEndTime ComplexEventEndTime_361(FIX::UTCTIMEONLY(8, 25, 48));
          noComplexEventTimes_0_0_1_3_1.set(ComplexEventEndTime_361);
          ComplexEventTimes_NoComplexEventTimes_361.insert(ComplexEventEndTime_361.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_361(FIX::UTCTIMEONLY(9, 39, 28));
          noComplexEventTimes_0_0_1_3_1.set(ComplexEventStartTime_361);
          ComplexEventTimes_NoComplexEventTimes_361.insert(ComplexEventStartTime_361.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_361);

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_1);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_362;
          FIX::ComplexEventEndTime ComplexEventEndTime_362(FIX::UTCTIMEONLY(6, 54, 29));
          noComplexEventTimes_0_0_1_3_2.set(ComplexEventEndTime_362);
          ComplexEventTimes_NoComplexEventTimes_362.insert(ComplexEventEndTime_362.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_362(FIX::UTCTIMEONLY(3, 23, 26));
          noComplexEventTimes_0_0_1_3_2.set(ComplexEventStartTime_362);
          ComplexEventTimes_NoComplexEventTimes_362.insert(ComplexEventStartTime_362.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_362);

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_2);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_1);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_181;
        FIX::ComplexEventEndDate ComplexEventEndDate_181(FIX::UTCTIMESTAMP(6, 20, 4, 25, 11, 2000));
        noComplexEventDates_0_0_2_2.set(ComplexEventEndDate_181);
        ComplexEventDates_NoComplexEventDates_181.insert(ComplexEventEndDate_181.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_181(FIX::UTCTIMESTAMP(9, 48, 52, 25, 11, 2002));
        noComplexEventDates_0_0_2_2.set(ComplexEventStartDate_181);
        ComplexEventDates_NoComplexEventDates_181.insert(ComplexEventStartDate_181.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_181);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_363;
          FIX::ComplexEventEndTime ComplexEventEndTime_363(FIX::UTCTIMEONLY(16, 55, 32));
          noComplexEventTimes_0_0_2_3_0.set(ComplexEventEndTime_363);
          ComplexEventTimes_NoComplexEventTimes_363.insert(ComplexEventEndTime_363.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_363(FIX::UTCTIMEONLY(8, 3, 18));
          noComplexEventTimes_0_0_2_3_0.set(ComplexEventStartTime_363);
          ComplexEventTimes_NoComplexEventTimes_363.insert(ComplexEventStartTime_363.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_363);

          noComplexEventDates_0_0_2_2.addGroup(noComplexEventTimes_0_0_2_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_364;
          FIX::ComplexEventEndTime ComplexEventEndTime_364(FIX::UTCTIMEONLY(22, 13, 15));
          noComplexEventTimes_0_0_2_3_1.set(ComplexEventEndTime_364);
          ComplexEventTimes_NoComplexEventTimes_364.insert(ComplexEventEndTime_364.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_364(FIX::UTCTIMEONLY(8, 30, 49));
          noComplexEventTimes_0_0_2_3_1.set(ComplexEventStartTime_364);
          ComplexEventTimes_NoComplexEventTimes_364.insert(ComplexEventStartTime_364.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_364);

          noComplexEventDates_0_0_2_2.addGroup(noComplexEventTimes_0_0_2_3_1);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_2);
      }
      noOrders_0_0.addGroup(noComplexEvents_0_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoComplexEvents noComplexEvents_0_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_90;
      FIX::ComplexEventCondition ComplexEventCondition_90(1);
      noComplexEvents_0_1_1.set(ComplexEventCondition_90);
      ComplexEvents_NoComplexEvents_90.insert(ComplexEventCondition_90.getString());
      FIX::ComplexEventPrice ComplexEventPrice_90;
      ComplexEventPrice_90.setString("12910191");
      noComplexEvents_0_1_1.set(ComplexEventPrice_90);
      ComplexEvents_NoComplexEvents_90.insert(ComplexEventPrice_90.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_90(2);
      noComplexEvents_0_1_1.set(ComplexEventPriceBoundaryMethod_90);
      ComplexEvents_NoComplexEvents_90.insert(ComplexEventPriceBoundaryMethod_90.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_90;
      ComplexEventPriceBoundaryPrecision_90.setString("90.640000");
      noComplexEvents_0_1_1.set(ComplexEventPriceBoundaryPrecision_90);
      ComplexEvents_NoComplexEvents_90.insert(ComplexEventPriceBoundaryPrecision_90.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_90(1);
      noComplexEvents_0_1_1.set(ComplexEventPriceTimeType_90);
      ComplexEvents_NoComplexEvents_90.insert(ComplexEventPriceTimeType_90.getString());
      FIX::ComplexEventType ComplexEventType_90(4);
      noComplexEvents_0_1_1.set(ComplexEventType_90);
      ComplexEvents_NoComplexEvents_90.insert(ComplexEventType_90.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_90;
      ComplexOptPayoutAmount_90.setString("4975151");
      noComplexEvents_0_1_1.set(ComplexOptPayoutAmount_90);
      ComplexEvents_NoComplexEvents_90.insert(ComplexOptPayoutAmount_90.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_90);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_182;
        FIX::ComplexEventEndDate ComplexEventEndDate_182(FIX::UTCTIMESTAMP(20, 34, 30, 14, 7, 2006));
        noComplexEventDates_0_1_2_0.set(ComplexEventEndDate_182);
        ComplexEventDates_NoComplexEventDates_182.insert(ComplexEventEndDate_182.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_182(FIX::UTCTIMESTAMP(14, 55, 42, 21, 4, 2015));
        noComplexEventDates_0_1_2_0.set(ComplexEventStartDate_182);
        ComplexEventDates_NoComplexEventDates_182.insert(ComplexEventStartDate_182.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_182);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_365;
          FIX::ComplexEventEndTime ComplexEventEndTime_365(FIX::UTCTIMEONLY(19, 36, 56));
          noComplexEventTimes_0_1_0_3_0.set(ComplexEventEndTime_365);
          ComplexEventTimes_NoComplexEventTimes_365.insert(ComplexEventEndTime_365.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_365(FIX::UTCTIMEONLY(9, 26, 47));
          noComplexEventTimes_0_1_0_3_0.set(ComplexEventStartTime_365);
          ComplexEventTimes_NoComplexEventTimes_365.insert(ComplexEventStartTime_365.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_365);

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_366;
          FIX::ComplexEventEndTime ComplexEventEndTime_366(FIX::UTCTIMEONLY(18, 40, 25));
          noComplexEventTimes_0_1_0_3_1.set(ComplexEventEndTime_366);
          ComplexEventTimes_NoComplexEventTimes_366.insert(ComplexEventEndTime_366.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_366(FIX::UTCTIMEONLY(20, 9, 9));
          noComplexEventTimes_0_1_0_3_1.set(ComplexEventStartTime_366);
          ComplexEventTimes_NoComplexEventTimes_366.insert(ComplexEventStartTime_366.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_366);

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_1);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_183;
        FIX::ComplexEventEndDate ComplexEventEndDate_183(FIX::UTCTIMESTAMP(9, 35, 47, 15, 10, 2005));
        noComplexEventDates_0_1_2_1.set(ComplexEventEndDate_183);
        ComplexEventDates_NoComplexEventDates_183.insert(ComplexEventEndDate_183.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_183(FIX::UTCTIMESTAMP(23, 34, 7, 12, 3, 2004));
        noComplexEventDates_0_1_2_1.set(ComplexEventStartDate_183);
        ComplexEventDates_NoComplexEventDates_183.insert(ComplexEventStartDate_183.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_183);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_367;
          FIX::ComplexEventEndTime ComplexEventEndTime_367(FIX::UTCTIMEONLY(4, 52, 7));
          noComplexEventTimes_0_1_1_3_0.set(ComplexEventEndTime_367);
          ComplexEventTimes_NoComplexEventTimes_367.insert(ComplexEventEndTime_367.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_367(FIX::UTCTIMEONLY(1, 25, 6));
          noComplexEventTimes_0_1_1_3_0.set(ComplexEventStartTime_367);
          ComplexEventTimes_NoComplexEventTimes_367.insert(ComplexEventStartTime_367.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_367);

          noComplexEventDates_0_1_2_1.addGroup(noComplexEventTimes_0_1_1_3_0);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_1);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_184;
        FIX::ComplexEventEndDate ComplexEventEndDate_184(FIX::UTCTIMESTAMP(11, 46, 51, 18, 11, 2016));
        noComplexEventDates_0_1_2_2.set(ComplexEventEndDate_184);
        ComplexEventDates_NoComplexEventDates_184.insert(ComplexEventEndDate_184.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_184(FIX::UTCTIMESTAMP(15, 17, 30, 23, 1, 2009));
        noComplexEventDates_0_1_2_2.set(ComplexEventStartDate_184);
        ComplexEventDates_NoComplexEventDates_184.insert(ComplexEventStartDate_184.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_184);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_368;
          FIX::ComplexEventEndTime ComplexEventEndTime_368(FIX::UTCTIMEONLY(14, 21, 40));
          noComplexEventTimes_0_1_2_3_0.set(ComplexEventEndTime_368);
          ComplexEventTimes_NoComplexEventTimes_368.insert(ComplexEventEndTime_368.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_368(FIX::UTCTIMEONLY(11, 25, 59));
          noComplexEventTimes_0_1_2_3_0.set(ComplexEventStartTime_368);
          ComplexEventTimes_NoComplexEventTimes_368.insert(ComplexEventStartTime_368.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_368);

          noComplexEventDates_0_1_2_2.addGroup(noComplexEventTimes_0_1_2_3_0);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_2);
      }
      noOrders_0_0.addGroup(noComplexEvents_0_1_1);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoComplexEvents noComplexEvents_0_1_2;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_91;
      FIX::ComplexEventCondition ComplexEventCondition_91(1);
      noComplexEvents_0_1_2.set(ComplexEventCondition_91);
      ComplexEvents_NoComplexEvents_91.insert(ComplexEventCondition_91.getString());
      FIX::ComplexEventPrice ComplexEventPrice_91;
      ComplexEventPrice_91.setString("16340435");
      noComplexEvents_0_1_2.set(ComplexEventPrice_91);
      ComplexEvents_NoComplexEvents_91.insert(ComplexEventPrice_91.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_91(4);
      noComplexEvents_0_1_2.set(ComplexEventPriceBoundaryMethod_91);
      ComplexEvents_NoComplexEvents_91.insert(ComplexEventPriceBoundaryMethod_91.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_91;
      ComplexEventPriceBoundaryPrecision_91.setString("26.890000");
      noComplexEvents_0_1_2.set(ComplexEventPriceBoundaryPrecision_91);
      ComplexEvents_NoComplexEvents_91.insert(ComplexEventPriceBoundaryPrecision_91.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_91(3);
      noComplexEvents_0_1_2.set(ComplexEventPriceTimeType_91);
      ComplexEvents_NoComplexEvents_91.insert(ComplexEventPriceTimeType_91.getString());
      FIX::ComplexEventType ComplexEventType_91(4);
      noComplexEvents_0_1_2.set(ComplexEventType_91);
      ComplexEvents_NoComplexEvents_91.insert(ComplexEventType_91.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_91;
      ComplexOptPayoutAmount_91.setString("8237678");
      noComplexEvents_0_1_2.set(ComplexOptPayoutAmount_91);
      ComplexEvents_NoComplexEvents_91.insert(ComplexOptPayoutAmount_91.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_91);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_185;
        FIX::ComplexEventEndDate ComplexEventEndDate_185(FIX::UTCTIMESTAMP(13, 4, 7, 3, 7, 2015));
        noComplexEventDates_0_2_2_0.set(ComplexEventEndDate_185);
        ComplexEventDates_NoComplexEventDates_185.insert(ComplexEventEndDate_185.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_185(FIX::UTCTIMESTAMP(22, 9, 20, 1, 2, 2009));
        noComplexEventDates_0_2_2_0.set(ComplexEventStartDate_185);
        ComplexEventDates_NoComplexEventDates_185.insert(ComplexEventStartDate_185.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_185);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_369;
          FIX::ComplexEventEndTime ComplexEventEndTime_369(FIX::UTCTIMEONLY(9, 48, 47));
          noComplexEventTimes_0_2_0_3_0.set(ComplexEventEndTime_369);
          ComplexEventTimes_NoComplexEventTimes_369.insert(ComplexEventEndTime_369.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_369(FIX::UTCTIMEONLY(11, 12, 23));
          noComplexEventTimes_0_2_0_3_0.set(ComplexEventStartTime_369);
          ComplexEventTimes_NoComplexEventTimes_369.insert(ComplexEventStartTime_369.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_369);

          noComplexEventDates_0_2_2_0.addGroup(noComplexEventTimes_0_2_0_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_370;
          FIX::ComplexEventEndTime ComplexEventEndTime_370(FIX::UTCTIMEONLY(9, 7, 50));
          noComplexEventTimes_0_2_0_3_1.set(ComplexEventEndTime_370);
          ComplexEventTimes_NoComplexEventTimes_370.insert(ComplexEventEndTime_370.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_370(FIX::UTCTIMEONLY(8, 8, 18));
          noComplexEventTimes_0_2_0_3_1.set(ComplexEventStartTime_370);
          ComplexEventTimes_NoComplexEventTimes_370.insert(ComplexEventStartTime_370.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_370);

          noComplexEventDates_0_2_2_0.addGroup(noComplexEventTimes_0_2_0_3_1);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_371;
          FIX::ComplexEventEndTime ComplexEventEndTime_371(FIX::UTCTIMEONLY(21, 14, 18));
          noComplexEventTimes_0_2_0_3_2.set(ComplexEventEndTime_371);
          ComplexEventTimes_NoComplexEventTimes_371.insert(ComplexEventEndTime_371.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_371(FIX::UTCTIMEONLY(9, 2, 46));
          noComplexEventTimes_0_2_0_3_2.set(ComplexEventStartTime_371);
          ComplexEventTimes_NoComplexEventTimes_371.insert(ComplexEventStartTime_371.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_371);

          noComplexEventDates_0_2_2_0.addGroup(noComplexEventTimes_0_2_0_3_2);
        }
        noComplexEvents_0_1_2.addGroup(noComplexEventDates_0_2_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_186;
        FIX::ComplexEventEndDate ComplexEventEndDate_186(FIX::UTCTIMESTAMP(3, 58, 28, 20, 6, 2013));
        noComplexEventDates_0_2_2_1.set(ComplexEventEndDate_186);
        ComplexEventDates_NoComplexEventDates_186.insert(ComplexEventEndDate_186.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_186(FIX::UTCTIMESTAMP(15, 44, 7, 15, 12, 2005));
        noComplexEventDates_0_2_2_1.set(ComplexEventStartDate_186);
        ComplexEventDates_NoComplexEventDates_186.insert(ComplexEventStartDate_186.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_186);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_372;
          FIX::ComplexEventEndTime ComplexEventEndTime_372(FIX::UTCTIMEONLY(21, 6, 55));
          noComplexEventTimes_0_2_1_3_0.set(ComplexEventEndTime_372);
          ComplexEventTimes_NoComplexEventTimes_372.insert(ComplexEventEndTime_372.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_372(FIX::UTCTIMEONLY(6, 4, 20));
          noComplexEventTimes_0_2_1_3_0.set(ComplexEventStartTime_372);
          ComplexEventTimes_NoComplexEventTimes_372.insert(ComplexEventStartTime_372.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_372);

          noComplexEventDates_0_2_2_1.addGroup(noComplexEventTimes_0_2_1_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_373;
          FIX::ComplexEventEndTime ComplexEventEndTime_373(FIX::UTCTIMEONLY(17, 35, 24));
          noComplexEventTimes_0_2_1_3_1.set(ComplexEventEndTime_373);
          ComplexEventTimes_NoComplexEventTimes_373.insert(ComplexEventEndTime_373.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_373(FIX::UTCTIMEONLY(0, 18, 40));
          noComplexEventTimes_0_2_1_3_1.set(ComplexEventStartTime_373);
          ComplexEventTimes_NoComplexEventTimes_373.insert(ComplexEventStartTime_373.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_373);

          noComplexEventDates_0_2_2_1.addGroup(noComplexEventTimes_0_2_1_3_1);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_374;
          FIX::ComplexEventEndTime ComplexEventEndTime_374(FIX::UTCTIMEONLY(9, 31, 3));
          noComplexEventTimes_0_2_1_3_2.set(ComplexEventEndTime_374);
          ComplexEventTimes_NoComplexEventTimes_374.insert(ComplexEventEndTime_374.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_374(FIX::UTCTIMEONLY(0, 58, 9));
          noComplexEventTimes_0_2_1_3_2.set(ComplexEventStartTime_374);
          ComplexEventTimes_NoComplexEventTimes_374.insert(ComplexEventStartTime_374.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_374);

          noComplexEventDates_0_2_2_1.addGroup(noComplexEventTimes_0_2_1_3_2);
        }
        noComplexEvents_0_1_2.addGroup(noComplexEventDates_0_2_2_1);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_187;
        FIX::ComplexEventEndDate ComplexEventEndDate_187(FIX::UTCTIMESTAMP(6, 16, 15, 22, 4, 2000));
        noComplexEventDates_0_2_2_2.set(ComplexEventEndDate_187);
        ComplexEventDates_NoComplexEventDates_187.insert(ComplexEventEndDate_187.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_187(FIX::UTCTIMESTAMP(4, 4, 58, 26, 11, 2000));
        noComplexEventDates_0_2_2_2.set(ComplexEventStartDate_187);
        ComplexEventDates_NoComplexEventDates_187.insert(ComplexEventStartDate_187.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_187);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_375;
          FIX::ComplexEventEndTime ComplexEventEndTime_375(FIX::UTCTIMEONLY(12, 18, 19));
          noComplexEventTimes_0_2_2_3_0.set(ComplexEventEndTime_375);
          ComplexEventTimes_NoComplexEventTimes_375.insert(ComplexEventEndTime_375.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_375(FIX::UTCTIMEONLY(18, 37, 34));
          noComplexEventTimes_0_2_2_3_0.set(ComplexEventStartTime_375);
          ComplexEventTimes_NoComplexEventTimes_375.insert(ComplexEventStartTime_375.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_375);

          noComplexEventDates_0_2_2_2.addGroup(noComplexEventTimes_0_2_2_3_0);
        }
        noComplexEvents_0_1_2.addGroup(noComplexEventDates_0_2_2_2);
      }
      noOrders_0_0.addGroup(noComplexEvents_0_1_2);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::NewOrderList::NoOrders::NoEvents noEvents_0_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_96;
      FIX::EventDate EventDate_96("LOCALMKTDATE_1812236278");
      noEvents_0_1_0.set(EventDate_96);
      EvntGrp_NoEvents_96.insert(EventDate_96.getString());
      FIX::EventPx EventPx_96;
      EventPx_96.setString("19663361");
      noEvents_0_1_0.set(EventPx_96);
      EvntGrp_NoEvents_96.insert(EventPx_96.getString());
      FIX::EventText EventText_96("STRING_477316416");
      noEvents_0_1_0.set(EventText_96);
      EvntGrp_NoEvents_96.insert(EventText_96.getString());
      FIX::EventTime EventTime_96(FIX::UTCTIMESTAMP(10, 34, 49, 17, 10, 2015));
      noEvents_0_1_0.set(EventTime_96);
      EvntGrp_NoEvents_96.insert(EventTime_96.getString());
      FIX::EventType EventType_96(1);
      noEvents_0_1_0.set(EventType_96);
      EvntGrp_NoEvents_96.insert(EventType_96.getString());
      all_values.push_back(EvntGrp_NoEvents_96);

      noOrders_0_0.addGroup(noEvents_0_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoEvents noEvents_0_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_97;
      FIX::EventDate EventDate_97("LOCALMKTDATE_1245823335");
      noEvents_0_1_1.set(EventDate_97);
      EvntGrp_NoEvents_97.insert(EventDate_97.getString());
      FIX::EventPx EventPx_97;
      EventPx_97.setString("8545783");
      noEvents_0_1_1.set(EventPx_97);
      EvntGrp_NoEvents_97.insert(EventPx_97.getString());
      FIX::EventText EventText_97("STRING_842277506");
      noEvents_0_1_1.set(EventText_97);
      EvntGrp_NoEvents_97.insert(EventText_97.getString());
      FIX::EventTime EventTime_97(FIX::UTCTIMESTAMP(1, 30, 16, 23, 5, 2017));
      noEvents_0_1_1.set(EventTime_97);
      EvntGrp_NoEvents_97.insert(EventTime_97.getString());
      FIX::EventType EventType_97(11);
      noEvents_0_1_1.set(EventType_97);
      EvntGrp_NoEvents_97.insert(EventType_97.getString());
      all_values.push_back(EvntGrp_NoEvents_97);

      noOrders_0_0.addGroup(noEvents_0_1_1);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoEvents noEvents_0_1_2;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_98;
      FIX::EventDate EventDate_98("LOCALMKTDATE_259810524");
      noEvents_0_1_2.set(EventDate_98);
      EvntGrp_NoEvents_98.insert(EventDate_98.getString());
      FIX::EventPx EventPx_98;
      EventPx_98.setString("8394125");
      noEvents_0_1_2.set(EventPx_98);
      EvntGrp_NoEvents_98.insert(EventPx_98.getString());
      FIX::EventText EventText_98("STRING_440993100");
      noEvents_0_1_2.set(EventText_98);
      EvntGrp_NoEvents_98.insert(EventText_98.getString());
      FIX::EventTime EventTime_98(FIX::UTCTIMESTAMP(21, 58, 13, 23, 8, 2011));
      noEvents_0_1_2.set(EventTime_98);
      EvntGrp_NoEvents_98.insert(EventTime_98.getString());
      FIX::EventType EventType_98(2);
      noEvents_0_1_2.set(EventType_98);
      EvntGrp_NoEvents_98.insert(EventType_98.getString());
      all_values.push_back(EvntGrp_NoEvents_98);

      noOrders_0_0.addGroup(noEvents_0_1_2);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::NewOrderList::NoOrders::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_101;
      FIX::InstrumentPartyID InstrumentPartyID_101("STRING_1283734063");
      noInstrumentParties_0_1_0.set(InstrumentPartyID_101);
      InstrumentParties_NoInstrumentParties_101.insert(InstrumentPartyID_101.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_101('8');
      noInstrumentParties_0_1_0.set(InstrumentPartyIDSource_101);
      InstrumentParties_NoInstrumentParties_101.insert(InstrumentPartyIDSource_101.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_101(1840899762);
      noInstrumentParties_0_1_0.set(InstrumentPartyRole_101);
      InstrumentParties_NoInstrumentParties_101.insert(InstrumentPartyRole_101.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_101);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderList::NoOrders::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_213;
        FIX::InstrumentPartySubID InstrumentPartySubID_213("STRING_1853956568");
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubID_213);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_213.insert(InstrumentPartySubID_213.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_213(1891595211);
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubIDType_213);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_213.insert(InstrumentPartySubIDType_213.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_213);

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      noOrders_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoInstrumentParties noInstrumentParties_0_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_102;
      FIX::InstrumentPartyID InstrumentPartyID_102("STRING_396224533");
      noInstrumentParties_0_1_1.set(InstrumentPartyID_102);
      InstrumentParties_NoInstrumentParties_102.insert(InstrumentPartyID_102.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_102('6');
      noInstrumentParties_0_1_1.set(InstrumentPartyIDSource_102);
      InstrumentParties_NoInstrumentParties_102.insert(InstrumentPartyIDSource_102.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_102(989934898);
      noInstrumentParties_0_1_1.set(InstrumentPartyRole_102);
      InstrumentParties_NoInstrumentParties_102.insert(InstrumentPartyRole_102.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_102);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderList::NoOrders::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_214;
        FIX::InstrumentPartySubID InstrumentPartySubID_214("STRING_910477847");
        noInstrumentPartySubIDs_0_1_2_0.set(InstrumentPartySubID_214);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_214.insert(InstrumentPartySubID_214.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_214(1409309716);
        noInstrumentPartySubIDs_0_1_2_0.set(InstrumentPartySubIDType_214);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_214.insert(InstrumentPartySubIDType_214.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_214);

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_0);
      }
      noOrders_0_0.addGroup(noInstrumentParties_0_1_1);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::NewOrderList::NoOrders::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_104;
      FIX::SecurityAltID SecurityAltID_104("STRING_2000635158");
      noSecurityAltID_0_1_0.set(SecurityAltID_104);
      SecAltIDGrp_NoSecurityAltID_104.insert(SecurityAltID_104.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_104("STRING_473208084");
      noSecurityAltID_0_1_0.set(SecurityAltIDSource_104);
      SecAltIDGrp_NoSecurityAltID_104.insert(SecurityAltIDSource_104.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_104);

      noOrders_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoSecurityAltID noSecurityAltID_0_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_105;
      FIX::SecurityAltID SecurityAltID_105("STRING_660493746");
      noSecurityAltID_0_1_1.set(SecurityAltID_105);
      SecAltIDGrp_NoSecurityAltID_105.insert(SecurityAltID_105.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_105("STRING_1401954758");
      noSecurityAltID_0_1_1.set(SecurityAltIDSource_105);
      SecAltIDGrp_NoSecurityAltID_105.insert(SecurityAltIDSource_105.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_105);

      noOrders_0_0.addGroup(noSecurityAltID_0_1_1);
    }
    // SecurityXML
    multiset<string> SecurityXML_94;
    FIX::SecurityXML SecurityXML_95("XMLDATA_2116402055");
    noOrders_0_0.set(SecurityXML_95);
    FIX::SecurityXMLLen SecurityXMLLen_47(1849619157);
    noOrders_0_0.set(SecurityXMLLen_47);
    FIX::SecurityXMLSchema SecurityXMLSchema_47("STRING_1661765282");
    noOrders_0_0.set(SecurityXMLSchema_47);
    SecurityXML_94.insert(SecurityXMLSchema_47.getString());
    all_values.push_back(SecurityXML_94);

    // OrderQtyData
    multiset<string> OrderQtyData_10;
    FIX::CashOrderQty CashOrderQty_10;
    CashOrderQty_10.setString("8083309");
    noOrders_0_0.set(CashOrderQty_10);
    OrderQtyData_10.insert(CashOrderQty_10.getString());
    FIX::OrderPercent OrderPercent_10;
    OrderPercent_10.setString("86.090000");
    noOrders_0_0.set(OrderPercent_10);
    OrderQtyData_10.insert(OrderPercent_10.getString());
    FIX::OrderQty OrderQty_21;
    OrderQty_21.setString("5440052");
    noOrders_0_0.set(OrderQty_21);
    OrderQtyData_10.insert(OrderQty_21.getString());
    FIX::RoundingDirection RoundingDirection_10('1');
    noOrders_0_0.set(RoundingDirection_10);
    OrderQtyData_10.insert(RoundingDirection_10.getString());
    FIX::RoundingModulus RoundingModulus_10;
    RoundingModulus_10.setString("3273674");
    noOrders_0_0.set(RoundingModulus_10);
    OrderQtyData_10.insert(RoundingModulus_10.getString());
    all_values.push_back(OrderQtyData_10);

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::NewOrderList::NoOrders::NoPartyIDs noPartyIDs_0_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_64;
      FIX::PartyID PartyID_64("STRING_866278783");
      noPartyIDs_0_1_0.set(PartyID_64);
      Parties_NoPartyIDs_64.insert(PartyID_64.getString());
      FIX::PartyIDSource PartyIDSource_64('3');
      noPartyIDs_0_1_0.set(PartyIDSource_64);
      Parties_NoPartyIDs_64.insert(PartyIDSource_64.getString());
      FIX::PartyRole PartyRole_64(19);
      noPartyIDs_0_1_0.set(PartyRole_64);
      Parties_NoPartyIDs_64.insert(PartyRole_64.getString());
      all_values.push_back(Parties_NoPartyIDs_64);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::NewOrderList::NoOrders::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_127;
        FIX::PartySubID PartySubID_127("STRING_1096625247");
        noPartySubIDs_0_0_2_0.set(PartySubID_127);
        PtysSubGrp_NoPartySubIDs_127.insert(PartySubID_127.getString());
        FIX::PartySubIDType PartySubIDType_127(24);
        noPartySubIDs_0_0_2_0.set(PartySubIDType_127);
        PtysSubGrp_NoPartySubIDs_127.insert(PartySubIDType_127.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_127);

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_128;
        FIX::PartySubID PartySubID_128("STRING_205215291");
        noPartySubIDs_0_0_2_1.set(PartySubID_128);
        PtysSubGrp_NoPartySubIDs_128.insert(PartySubID_128.getString());
        FIX::PartySubIDType PartySubIDType_128(11);
        noPartySubIDs_0_0_2_1.set(PartySubIDType_128);
        PtysSubGrp_NoPartySubIDs_128.insert(PartySubIDType_128.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_128);

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_1);
      }
      noOrders_0_0.addGroup(noPartyIDs_0_1_0);
    }
    // PegInstructions
    multiset<string> PegInstructions_4;
    FIX::PegLimitType PegLimitType_4(0);
    noOrders_0_0.set(PegLimitType_4);
    PegInstructions_4.insert(PegLimitType_4.getString());
    FIX::PegMoveType PegMoveType_4(1);
    noOrders_0_0.set(PegMoveType_4);
    PegInstructions_4.insert(PegMoveType_4.getString());
    FIX::PegOffsetType PegOffsetType_4(0);
    noOrders_0_0.set(PegOffsetType_4);
    PegInstructions_4.insert(PegOffsetType_4.getString());
    FIX::PegOffsetValue PegOffsetValue_4;
    PegOffsetValue_4.setString("11959683");
    noOrders_0_0.set(PegOffsetValue_4);
    PegInstructions_4.insert(PegOffsetValue_4.getString());
    FIX::PegPriceType PegPriceType_4(1);
    noOrders_0_0.set(PegPriceType_4);
    PegInstructions_4.insert(PegPriceType_4.getString());
    FIX::PegRoundDirection PegRoundDirection_4(1);
    noOrders_0_0.set(PegRoundDirection_4);
    PegInstructions_4.insert(PegRoundDirection_4.getString());
    FIX::PegScope PegScope_4(3);
    noOrders_0_0.set(PegScope_4);
    PegInstructions_4.insert(PegScope_4.getString());
    FIX::PegSecurityDesc PegSecurityDesc_4("STRING_890366400");
    noOrders_0_0.set(PegSecurityDesc_4);
    PegInstructions_4.insert(PegSecurityDesc_4.getString());
    FIX::PegSecurityID PegSecurityID_4("STRING_785913890");
    noOrders_0_0.set(PegSecurityID_4);
    PegInstructions_4.insert(PegSecurityID_4.getString());
    FIX::PegSecurityIDSource PegSecurityIDSource_4("STRING_1728371137");
    noOrders_0_0.set(PegSecurityIDSource_4);
    PegInstructions_4.insert(PegSecurityIDSource_4.getString());
    FIX::PegSymbol PegSymbol_4("STRING_743517910");
    noOrders_0_0.set(PegSymbol_4);
    PegInstructions_4.insert(PegSymbol_4.getString());
    all_values.push_back(PegInstructions_4);

    // PreAllocGrp
    // Group PreAllocGrp.NoAllocs
    {
      FIX50SP2::NewOrderList::NoOrders::NoAllocs noAllocs_0_1_0;
      // PreAllocGrp.NoAllocs
      multiset<string> PreAllocGrp_NoAllocs_9;
      FIX::AllocAccount AllocAccount_22("STRING_241381235");
      noAllocs_0_1_0.set(AllocAccount_22);
      PreAllocGrp_NoAllocs_9.insert(AllocAccount_22.getString());
      FIX::AllocAcctIDSource AllocAcctIDSource_22(2145472668);
      noAllocs_0_1_0.set(AllocAcctIDSource_22);
      PreAllocGrp_NoAllocs_9.insert(AllocAcctIDSource_22.getString());
      FIX::AllocQty AllocQty_21;
      AllocQty_21.setString("12280403");
      noAllocs_0_1_0.set(AllocQty_21);
      PreAllocGrp_NoAllocs_9.insert(AllocQty_21.getString());
      FIX::AllocSettlCurrency AllocSettlCurrency_16("EUR");
      noAllocs_0_1_0.set(AllocSettlCurrency_16);
      PreAllocGrp_NoAllocs_9.insert(AllocSettlCurrency_16.getString());
      FIX::IndividualAllocID IndividualAllocID_22("STRING_2036371332");
      noAllocs_0_1_0.set(IndividualAllocID_22);
      PreAllocGrp_NoAllocs_9.insert(IndividualAllocID_22.getString());
      all_values.push_back(PreAllocGrp_NoAllocs_9);

      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_0_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_62;
        FIX::NestedPartyID NestedPartyID_62("STRING_56275933");
        noNestedPartyIDs_0_0_2_0.set(NestedPartyID_62);
        NestedParties_NoNestedPartyIDs_62.insert(NestedPartyID_62.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_62('2');
        noNestedPartyIDs_0_0_2_0.set(NestedPartyIDSource_62);
        NestedParties_NoNestedPartyIDs_62.insert(NestedPartyIDSource_62.getString());
        FIX::NestedPartyRole NestedPartyRole_62(414012842);
        noNestedPartyIDs_0_0_2_0.set(NestedPartyRole_62);
        NestedParties_NoNestedPartyIDs_62.insert(NestedPartyRole_62.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_62);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_121;
          FIX::NestedPartySubID NestedPartySubID_121("STRING_816513127");
          noNestedPartySubIDs_0_0_0_3_0.set(NestedPartySubID_121);
          NstdPtysSubGrp_NoNestedPartySubIDs_121.insert(NestedPartySubID_121.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_121(887351001);
          noNestedPartySubIDs_0_0_0_3_0.set(NestedPartySubIDType_121);
          NstdPtysSubGrp_NoNestedPartySubIDs_121.insert(NestedPartySubIDType_121.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_121);

          noNestedPartyIDs_0_0_2_0.addGroup(noNestedPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_122;
          FIX::NestedPartySubID NestedPartySubID_122("STRING_1077496738");
          noNestedPartySubIDs_0_0_0_3_1.set(NestedPartySubID_122);
          NstdPtysSubGrp_NoNestedPartySubIDs_122.insert(NestedPartySubID_122.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_122(159092883);
          noNestedPartySubIDs_0_0_0_3_1.set(NestedPartySubIDType_122);
          NstdPtysSubGrp_NoNestedPartySubIDs_122.insert(NestedPartySubIDType_122.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_122);

          noNestedPartyIDs_0_0_2_0.addGroup(noNestedPartySubIDs_0_0_0_3_1);
        }
        noAllocs_0_1_0.addGroup(noNestedPartyIDs_0_0_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_0_2_1;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_63;
        FIX::NestedPartyID NestedPartyID_63("STRING_1983976248");
        noNestedPartyIDs_0_0_2_1.set(NestedPartyID_63);
        NestedParties_NoNestedPartyIDs_63.insert(NestedPartyID_63.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_63('6');
        noNestedPartyIDs_0_0_2_1.set(NestedPartyIDSource_63);
        NestedParties_NoNestedPartyIDs_63.insert(NestedPartyIDSource_63.getString());
        FIX::NestedPartyRole NestedPartyRole_63(364308174);
        noNestedPartyIDs_0_0_2_1.set(NestedPartyRole_63);
        NestedParties_NoNestedPartyIDs_63.insert(NestedPartyRole_63.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_63);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_1_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_123;
          FIX::NestedPartySubID NestedPartySubID_123("STRING_1401220583");
          noNestedPartySubIDs_0_0_1_3_0.set(NestedPartySubID_123);
          NstdPtysSubGrp_NoNestedPartySubIDs_123.insert(NestedPartySubID_123.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_123(275996385);
          noNestedPartySubIDs_0_0_1_3_0.set(NestedPartySubIDType_123);
          NstdPtysSubGrp_NoNestedPartySubIDs_123.insert(NestedPartySubIDType_123.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_123);

          noNestedPartyIDs_0_0_2_1.addGroup(noNestedPartySubIDs_0_0_1_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_1_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_124;
          FIX::NestedPartySubID NestedPartySubID_124("STRING_1160686885");
          noNestedPartySubIDs_0_0_1_3_1.set(NestedPartySubID_124);
          NstdPtysSubGrp_NoNestedPartySubIDs_124.insert(NestedPartySubID_124.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_124(449705243);
          noNestedPartySubIDs_0_0_1_3_1.set(NestedPartySubIDType_124);
          NstdPtysSubGrp_NoNestedPartySubIDs_124.insert(NestedPartySubIDType_124.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_124);

          noNestedPartyIDs_0_0_2_1.addGroup(noNestedPartySubIDs_0_0_1_3_1);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_1_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_125;
          FIX::NestedPartySubID NestedPartySubID_125("STRING_255884938");
          noNestedPartySubIDs_0_0_1_3_2.set(NestedPartySubID_125);
          NstdPtysSubGrp_NoNestedPartySubIDs_125.insert(NestedPartySubID_125.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_125(537291059);
          noNestedPartySubIDs_0_0_1_3_2.set(NestedPartySubIDType_125);
          NstdPtysSubGrp_NoNestedPartySubIDs_125.insert(NestedPartySubIDType_125.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_125);

          noNestedPartyIDs_0_0_2_1.addGroup(noNestedPartySubIDs_0_0_1_3_2);
        }
        noAllocs_0_1_0.addGroup(noNestedPartyIDs_0_0_2_1);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_0_2_2;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_64;
        FIX::NestedPartyID NestedPartyID_64("STRING_748992833");
        noNestedPartyIDs_0_0_2_2.set(NestedPartyID_64);
        NestedParties_NoNestedPartyIDs_64.insert(NestedPartyID_64.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_64('1');
        noNestedPartyIDs_0_0_2_2.set(NestedPartyIDSource_64);
        NestedParties_NoNestedPartyIDs_64.insert(NestedPartyIDSource_64.getString());
        FIX::NestedPartyRole NestedPartyRole_64(1323204949);
        noNestedPartyIDs_0_0_2_2.set(NestedPartyRole_64);
        NestedParties_NoNestedPartyIDs_64.insert(NestedPartyRole_64.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_64);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_126;
          FIX::NestedPartySubID NestedPartySubID_126("STRING_1889769248");
          noNestedPartySubIDs_0_0_2_3_0.set(NestedPartySubID_126);
          NstdPtysSubGrp_NoNestedPartySubIDs_126.insert(NestedPartySubID_126.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_126(434843276);
          noNestedPartySubIDs_0_0_2_3_0.set(NestedPartySubIDType_126);
          NstdPtysSubGrp_NoNestedPartySubIDs_126.insert(NestedPartySubIDType_126.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_126);

          noNestedPartyIDs_0_0_2_2.addGroup(noNestedPartySubIDs_0_0_2_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_127;
          FIX::NestedPartySubID NestedPartySubID_127("STRING_571261557");
          noNestedPartySubIDs_0_0_2_3_1.set(NestedPartySubID_127);
          NstdPtysSubGrp_NoNestedPartySubIDs_127.insert(NestedPartySubID_127.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_127(1887758268);
          noNestedPartySubIDs_0_0_2_3_1.set(NestedPartySubIDType_127);
          NstdPtysSubGrp_NoNestedPartySubIDs_127.insert(NestedPartySubIDType_127.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_127);

          noNestedPartyIDs_0_0_2_2.addGroup(noNestedPartySubIDs_0_0_2_3_1);
        }
        noAllocs_0_1_0.addGroup(noNestedPartyIDs_0_0_2_2);
      }
      noOrders_0_0.addGroup(noAllocs_0_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoAllocs noAllocs_0_1_1;
      // PreAllocGrp.NoAllocs
      multiset<string> PreAllocGrp_NoAllocs_10;
      FIX::AllocAccount AllocAccount_23("STRING_1662883658");
      noAllocs_0_1_1.set(AllocAccount_23);
      PreAllocGrp_NoAllocs_10.insert(AllocAccount_23.getString());
      FIX::AllocAcctIDSource AllocAcctIDSource_23(514778302);
      noAllocs_0_1_1.set(AllocAcctIDSource_23);
      PreAllocGrp_NoAllocs_10.insert(AllocAcctIDSource_23.getString());
      FIX::AllocQty AllocQty_22;
      AllocQty_22.setString("14000289");
      noAllocs_0_1_1.set(AllocQty_22);
      PreAllocGrp_NoAllocs_10.insert(AllocQty_22.getString());
      FIX::AllocSettlCurrency AllocSettlCurrency_17("USD");
      noAllocs_0_1_1.set(AllocSettlCurrency_17);
      PreAllocGrp_NoAllocs_10.insert(AllocSettlCurrency_17.getString());
      FIX::IndividualAllocID IndividualAllocID_23("STRING_1456304856");
      noAllocs_0_1_1.set(IndividualAllocID_23);
      PreAllocGrp_NoAllocs_10.insert(IndividualAllocID_23.getString());
      all_values.push_back(PreAllocGrp_NoAllocs_10);

      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_65;
        FIX::NestedPartyID NestedPartyID_65("STRING_1015436498");
        noNestedPartyIDs_0_1_2_0.set(NestedPartyID_65);
        NestedParties_NoNestedPartyIDs_65.insert(NestedPartyID_65.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_65('2');
        noNestedPartyIDs_0_1_2_0.set(NestedPartyIDSource_65);
        NestedParties_NoNestedPartyIDs_65.insert(NestedPartyIDSource_65.getString());
        FIX::NestedPartyRole NestedPartyRole_65(171035165);
        noNestedPartyIDs_0_1_2_0.set(NestedPartyRole_65);
        NestedParties_NoNestedPartyIDs_65.insert(NestedPartyRole_65.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_65);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_128;
          FIX::NestedPartySubID NestedPartySubID_128("STRING_1076085031");
          noNestedPartySubIDs_0_1_0_3_0.set(NestedPartySubID_128);
          NstdPtysSubGrp_NoNestedPartySubIDs_128.insert(NestedPartySubID_128.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_128(330128048);
          noNestedPartySubIDs_0_1_0_3_0.set(NestedPartySubIDType_128);
          NstdPtysSubGrp_NoNestedPartySubIDs_128.insert(NestedPartySubIDType_128.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_128);

          noNestedPartyIDs_0_1_2_0.addGroup(noNestedPartySubIDs_0_1_0_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_129;
          FIX::NestedPartySubID NestedPartySubID_129("STRING_1739280100");
          noNestedPartySubIDs_0_1_0_3_1.set(NestedPartySubID_129);
          NstdPtysSubGrp_NoNestedPartySubIDs_129.insert(NestedPartySubID_129.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_129(1677561839);
          noNestedPartySubIDs_0_1_0_3_1.set(NestedPartySubIDType_129);
          NstdPtysSubGrp_NoNestedPartySubIDs_129.insert(NestedPartySubIDType_129.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_129);

          noNestedPartyIDs_0_1_2_0.addGroup(noNestedPartySubIDs_0_1_0_3_1);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_0_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_130;
          FIX::NestedPartySubID NestedPartySubID_130("STRING_694436222");
          noNestedPartySubIDs_0_1_0_3_2.set(NestedPartySubID_130);
          NstdPtysSubGrp_NoNestedPartySubIDs_130.insert(NestedPartySubID_130.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_130(218330413);
          noNestedPartySubIDs_0_1_0_3_2.set(NestedPartySubIDType_130);
          NstdPtysSubGrp_NoNestedPartySubIDs_130.insert(NestedPartySubIDType_130.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_130);

          noNestedPartyIDs_0_1_2_0.addGroup(noNestedPartySubIDs_0_1_0_3_2);
        }
        noAllocs_0_1_1.addGroup(noNestedPartyIDs_0_1_2_0);
      }
      noOrders_0_0.addGroup(noAllocs_0_1_1);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoAllocs noAllocs_0_1_2;
      // PreAllocGrp.NoAllocs
      multiset<string> PreAllocGrp_NoAllocs_11;
      FIX::AllocAccount AllocAccount_24("STRING_931298774");
      noAllocs_0_1_2.set(AllocAccount_24);
      PreAllocGrp_NoAllocs_11.insert(AllocAccount_24.getString());
      FIX::AllocAcctIDSource AllocAcctIDSource_24(970432608);
      noAllocs_0_1_2.set(AllocAcctIDSource_24);
      PreAllocGrp_NoAllocs_11.insert(AllocAcctIDSource_24.getString());
      FIX::AllocQty AllocQty_23;
      AllocQty_23.setString("13790172");
      noAllocs_0_1_2.set(AllocQty_23);
      PreAllocGrp_NoAllocs_11.insert(AllocQty_23.getString());
      FIX::AllocSettlCurrency AllocSettlCurrency_18("JPY");
      noAllocs_0_1_2.set(AllocSettlCurrency_18);
      PreAllocGrp_NoAllocs_11.insert(AllocSettlCurrency_18.getString());
      FIX::IndividualAllocID IndividualAllocID_24("STRING_1916308358");
      noAllocs_0_1_2.set(IndividualAllocID_24);
      PreAllocGrp_NoAllocs_11.insert(IndividualAllocID_24.getString());
      all_values.push_back(PreAllocGrp_NoAllocs_11);

      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_2_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_66;
        FIX::NestedPartyID NestedPartyID_66("STRING_225085236");
        noNestedPartyIDs_0_2_2_0.set(NestedPartyID_66);
        NestedParties_NoNestedPartyIDs_66.insert(NestedPartyID_66.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_66('1');
        noNestedPartyIDs_0_2_2_0.set(NestedPartyIDSource_66);
        NestedParties_NoNestedPartyIDs_66.insert(NestedPartyIDSource_66.getString());
        FIX::NestedPartyRole NestedPartyRole_66(312393524);
        noNestedPartyIDs_0_2_2_0.set(NestedPartyRole_66);
        NestedParties_NoNestedPartyIDs_66.insert(NestedPartyRole_66.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_66);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_131;
          FIX::NestedPartySubID NestedPartySubID_131("STRING_1526872936");
          noNestedPartySubIDs_0_2_0_3_0.set(NestedPartySubID_131);
          NstdPtysSubGrp_NoNestedPartySubIDs_131.insert(NestedPartySubID_131.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_131(883655082);
          noNestedPartySubIDs_0_2_0_3_0.set(NestedPartySubIDType_131);
          NstdPtysSubGrp_NoNestedPartySubIDs_131.insert(NestedPartySubIDType_131.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_131);

          noNestedPartyIDs_0_2_2_0.addGroup(noNestedPartySubIDs_0_2_0_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_132;
          FIX::NestedPartySubID NestedPartySubID_132("STRING_1855129104");
          noNestedPartySubIDs_0_2_0_3_1.set(NestedPartySubID_132);
          NstdPtysSubGrp_NoNestedPartySubIDs_132.insert(NestedPartySubID_132.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_132(1042272946);
          noNestedPartySubIDs_0_2_0_3_1.set(NestedPartySubIDType_132);
          NstdPtysSubGrp_NoNestedPartySubIDs_132.insert(NestedPartySubIDType_132.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_132);

          noNestedPartyIDs_0_2_2_0.addGroup(noNestedPartySubIDs_0_2_0_3_1);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_0_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_133;
          FIX::NestedPartySubID NestedPartySubID_133("STRING_1398433384");
          noNestedPartySubIDs_0_2_0_3_2.set(NestedPartySubID_133);
          NstdPtysSubGrp_NoNestedPartySubIDs_133.insert(NestedPartySubID_133.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_133(1107674380);
          noNestedPartySubIDs_0_2_0_3_2.set(NestedPartySubIDType_133);
          NstdPtysSubGrp_NoNestedPartySubIDs_133.insert(NestedPartySubIDType_133.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_133);

          noNestedPartyIDs_0_2_2_0.addGroup(noNestedPartySubIDs_0_2_0_3_2);
        }
        noAllocs_0_1_2.addGroup(noNestedPartyIDs_0_2_2_0);
      }
      noOrders_0_0.addGroup(noAllocs_0_1_2);
    }
    // SpreadOrBenchmarkCurveData
    multiset<string> SpreadOrBenchmarkCurveData_15;
    FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_15("JPY");
    noOrders_0_0.set(BenchmarkCurveCurrency_15);
    SpreadOrBenchmarkCurveData_15.insert(BenchmarkCurveCurrency_15.getString());
    FIX::BenchmarkCurveName BenchmarkCurveName_15("STRING_Pfandbriefe");
    noOrders_0_0.set(BenchmarkCurveName_15);
    SpreadOrBenchmarkCurveData_15.insert(BenchmarkCurveName_15.getString());
    FIX::BenchmarkCurvePoint BenchmarkCurvePoint_15("STRING_1948566327");
    noOrders_0_0.set(BenchmarkCurvePoint_15);
    SpreadOrBenchmarkCurveData_15.insert(BenchmarkCurvePoint_15.getString());
    FIX::BenchmarkPrice BenchmarkPrice_15;
    BenchmarkPrice_15.setString("8678098");
    noOrders_0_0.set(BenchmarkPrice_15);
    SpreadOrBenchmarkCurveData_15.insert(BenchmarkPrice_15.getString());
    FIX::BenchmarkPriceType BenchmarkPriceType_15(415083881);
    noOrders_0_0.set(BenchmarkPriceType_15);
    SpreadOrBenchmarkCurveData_15.insert(BenchmarkPriceType_15.getString());
    FIX::BenchmarkSecurityID BenchmarkSecurityID_15("STRING_2119601492");
    noOrders_0_0.set(BenchmarkSecurityID_15);
    SpreadOrBenchmarkCurveData_15.insert(BenchmarkSecurityID_15.getString());
    FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_15("STRING_623113741");
    noOrders_0_0.set(BenchmarkSecurityIDSource_15);
    SpreadOrBenchmarkCurveData_15.insert(BenchmarkSecurityIDSource_15.getString());
    FIX::Spread Spread_15;
    Spread_15.setString("14911689");
    noOrders_0_0.set(Spread_15);
    SpreadOrBenchmarkCurveData_15.insert(Spread_15.getString());
    all_values.push_back(SpreadOrBenchmarkCurveData_15);

    // Stipulations
    // Group Stipulations.NoStipulations
    {
      FIX50SP2::NewOrderList::NoOrders::NoStipulations noStipulations_0_1_0;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_24;
      FIX::StipulationType StipulationType_24("STRING_PXSOURCE");
      noStipulations_0_1_0.set(StipulationType_24);
      Stipulations_NoStipulations_24.insert(StipulationType_24.getString());
      FIX::StipulationValue StipulationValue_24("STRING_1021247103");
      noStipulations_0_1_0.set(StipulationValue_24);
      Stipulations_NoStipulations_24.insert(StipulationValue_24.getString());
      all_values.push_back(Stipulations_NoStipulations_24);

      noOrders_0_0.addGroup(noStipulations_0_1_0);
    }
    // StrategyParametersGrp
    // Group StrategyParametersGrp.NoStrategyParameters
    {
      FIX50SP2::NewOrderList::NoOrders::NoStrategyParameters noStrategyParameters_0_1_0;
      // StrategyParametersGrp.NoStrategyParameters
      multiset<string> StrategyParametersGrp_NoStrategyParameters_6;
      FIX::StrategyParameterName StrategyParameterName_6("STRING_433240607");
      noStrategyParameters_0_1_0.set(StrategyParameterName_6);
      StrategyParametersGrp_NoStrategyParameters_6.insert(StrategyParameterName_6.getString());
      FIX::StrategyParameterType StrategyParameterType_6(7);
      noStrategyParameters_0_1_0.set(StrategyParameterType_6);
      StrategyParametersGrp_NoStrategyParameters_6.insert(StrategyParameterType_6.getString());
      FIX::StrategyParameterValue StrategyParameterValue_6("STRING_1967114723");
      noStrategyParameters_0_1_0.set(StrategyParameterValue_6);
      StrategyParametersGrp_NoStrategyParameters_6.insert(StrategyParameterValue_6.getString());
      all_values.push_back(StrategyParametersGrp_NoStrategyParameters_6);

      noOrders_0_0.addGroup(noStrategyParameters_0_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoStrategyParameters noStrategyParameters_0_1_1;
      // StrategyParametersGrp.NoStrategyParameters
      multiset<string> StrategyParametersGrp_NoStrategyParameters_7;
      FIX::StrategyParameterName StrategyParameterName_7("STRING_1812257906");
      noStrategyParameters_0_1_1.set(StrategyParameterName_7);
      StrategyParametersGrp_NoStrategyParameters_7.insert(StrategyParameterName_7.getString());
      FIX::StrategyParameterType StrategyParameterType_7(4);
      noStrategyParameters_0_1_1.set(StrategyParameterType_7);
      StrategyParametersGrp_NoStrategyParameters_7.insert(StrategyParameterType_7.getString());
      FIX::StrategyParameterValue StrategyParameterValue_7("STRING_1045948621");
      noStrategyParameters_0_1_1.set(StrategyParameterValue_7);
      StrategyParametersGrp_NoStrategyParameters_7.insert(StrategyParameterValue_7.getString());
      all_values.push_back(StrategyParametersGrp_NoStrategyParameters_7);

      noOrders_0_0.addGroup(noStrategyParameters_0_1_1);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoStrategyParameters noStrategyParameters_0_1_2;
      // StrategyParametersGrp.NoStrategyParameters
      multiset<string> StrategyParametersGrp_NoStrategyParameters_8;
      FIX::StrategyParameterName StrategyParameterName_8("STRING_1581082616");
      noStrategyParameters_0_1_2.set(StrategyParameterName_8);
      StrategyParametersGrp_NoStrategyParameters_8.insert(StrategyParameterName_8.getString());
      FIX::StrategyParameterType StrategyParameterType_8(4);
      noStrategyParameters_0_1_2.set(StrategyParameterType_8);
      StrategyParametersGrp_NoStrategyParameters_8.insert(StrategyParameterType_8.getString());
      FIX::StrategyParameterValue StrategyParameterValue_8("STRING_1271033857");
      noStrategyParameters_0_1_2.set(StrategyParameterValue_8);
      StrategyParametersGrp_NoStrategyParameters_8.insert(StrategyParameterValue_8.getString());
      all_values.push_back(StrategyParametersGrp_NoStrategyParameters_8);

      noOrders_0_0.addGroup(noStrategyParameters_0_1_2);
    }
    // TrdgSesGrp
    // Group TrdgSesGrp.NoTradingSessions
    {
      FIX50SP2::NewOrderList::NoOrders::NoTradingSessions noTradingSessions_0_1_0;
      // TrdgSesGrp.NoTradingSessions
      multiset<string> TrdgSesGrp_NoTradingSessions_9;
      FIX::TradingSessionID TradingSessionID_40("STRING_1");
      noTradingSessions_0_1_0.set(TradingSessionID_40);
      TrdgSesGrp_NoTradingSessions_9.insert(TradingSessionID_40.getString());
      FIX::TradingSessionSubID TradingSessionSubID_40("STRING_2");
      noTradingSessions_0_1_0.set(TradingSessionSubID_40);
      TrdgSesGrp_NoTradingSessions_9.insert(TradingSessionSubID_40.getString());
      all_values.push_back(TrdgSesGrp_NoTradingSessions_9);

      noOrders_0_0.addGroup(noTradingSessions_0_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoTradingSessions noTradingSessions_0_1_1;
      // TrdgSesGrp.NoTradingSessions
      multiset<string> TrdgSesGrp_NoTradingSessions_10;
      FIX::TradingSessionID TradingSessionID_41("STRING_1");
      noTradingSessions_0_1_1.set(TradingSessionID_41);
      TrdgSesGrp_NoTradingSessions_10.insert(TradingSessionID_41.getString());
      FIX::TradingSessionSubID TradingSessionSubID_41("STRING_6");
      noTradingSessions_0_1_1.set(TradingSessionSubID_41);
      TrdgSesGrp_NoTradingSessions_10.insert(TradingSessionSubID_41.getString());
      all_values.push_back(TrdgSesGrp_NoTradingSessions_10);

      noOrders_0_0.addGroup(noTradingSessions_0_1_1);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoTradingSessions noTradingSessions_0_1_2;
      // TrdgSesGrp.NoTradingSessions
      multiset<string> TrdgSesGrp_NoTradingSessions_11;
      FIX::TradingSessionID TradingSessionID_42("STRING_1");
      noTradingSessions_0_1_2.set(TradingSessionID_42);
      TrdgSesGrp_NoTradingSessions_11.insert(TradingSessionID_42.getString());
      FIX::TradingSessionSubID TradingSessionSubID_42("STRING_1");
      noTradingSessions_0_1_2.set(TradingSessionSubID_42);
      TrdgSesGrp_NoTradingSessions_11.insert(TradingSessionSubID_42.getString());
      all_values.push_back(TrdgSesGrp_NoTradingSessions_11);

      noOrders_0_0.addGroup(noTradingSessions_0_1_2);
    }
    // TriggeringInstruction
    multiset<string> TriggeringInstruction_4;
    FIX::TriggerAction TriggerAction_4('3');
    noOrders_0_0.set(TriggerAction_4);
    TriggeringInstruction_4.insert(TriggerAction_4.getString());
    FIX::TriggerNewPrice TriggerNewPrice_4;
    TriggerNewPrice_4.setString("20537245");
    noOrders_0_0.set(TriggerNewPrice_4);
    TriggeringInstruction_4.insert(TriggerNewPrice_4.getString());
    FIX::TriggerNewQty TriggerNewQty_4;
    TriggerNewQty_4.setString("13938515");
    noOrders_0_0.set(TriggerNewQty_4);
    TriggeringInstruction_4.insert(TriggerNewQty_4.getString());
    FIX::TriggerOrderType TriggerOrderType_4('1');
    noOrders_0_0.set(TriggerOrderType_4);
    TriggeringInstruction_4.insert(TriggerOrderType_4.getString());
    FIX::TriggerPrice TriggerPrice_4;
    TriggerPrice_4.setString("3227364");
    noOrders_0_0.set(TriggerPrice_4);
    TriggeringInstruction_4.insert(TriggerPrice_4.getString());
    FIX::TriggerPriceDirection TriggerPriceDirection_4('U');
    noOrders_0_0.set(TriggerPriceDirection_4);
    TriggeringInstruction_4.insert(TriggerPriceDirection_4.getString());
    FIX::TriggerPriceType TriggerPriceType_4('1');
    noOrders_0_0.set(TriggerPriceType_4);
    TriggeringInstruction_4.insert(TriggerPriceType_4.getString());
    FIX::TriggerPriceTypeScope TriggerPriceTypeScope_4('3');
    noOrders_0_0.set(TriggerPriceTypeScope_4);
    TriggeringInstruction_4.insert(TriggerPriceTypeScope_4.getString());
    FIX::TriggerSecurityDesc TriggerSecurityDesc_4("STRING_1167052026");
    noOrders_0_0.set(TriggerSecurityDesc_4);
    TriggeringInstruction_4.insert(TriggerSecurityDesc_4.getString());
    FIX::TriggerSecurityID TriggerSecurityID_4("STRING_811391168");
    noOrders_0_0.set(TriggerSecurityID_4);
    TriggeringInstruction_4.insert(TriggerSecurityID_4.getString());
    FIX::TriggerSecurityIDSource TriggerSecurityIDSource_4("STRING_81505615");
    noOrders_0_0.set(TriggerSecurityIDSource_4);
    TriggeringInstruction_4.insert(TriggerSecurityIDSource_4.getString());
    FIX::TriggerSymbol TriggerSymbol_4("STRING_1469297919");
    noOrders_0_0.set(TriggerSymbol_4);
    TriggeringInstruction_4.insert(TriggerSymbol_4.getString());
    FIX::TriggerTradingSessionID TriggerTradingSessionID_4("STRING_1026301361");
    noOrders_0_0.set(TriggerTradingSessionID_4);
    TriggeringInstruction_4.insert(TriggerTradingSessionID_4.getString());
    FIX::TriggerTradingSessionSubID TriggerTradingSessionSubID_4("STRING_1102752719");
    noOrders_0_0.set(TriggerTradingSessionSubID_4);
    TriggeringInstruction_4.insert(TriggerTradingSessionSubID_4.getString());
    FIX::TriggerType TriggerType_4('4');
    noOrders_0_0.set(TriggerType_4);
    TriggeringInstruction_4.insert(TriggerType_4.getString());
    all_values.push_back(TriggeringInstruction_4);

    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::NewOrderList::NoOrders::NoUnderlyings noUnderlyings_0_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_60;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_60("DATA_907814949");
      noUnderlyings_0_1_0.set(EncodedUnderlyingIssuer_60);
      UnderlyingInstrument_60.insert(EncodedUnderlyingIssuer_60.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_60(138127462);
      noUnderlyings_0_1_0.set(EncodedUnderlyingIssuerLen_60);
      UnderlyingInstrument_60.insert(EncodedUnderlyingIssuerLen_60.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_60("DATA_1124316226");
      noUnderlyings_0_1_0.set(EncodedUnderlyingSecurityDesc_60);
      UnderlyingInstrument_60.insert(EncodedUnderlyingSecurityDesc_60.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_60(2093881196);
      noUnderlyings_0_1_0.set(EncodedUnderlyingSecurityDescLen_60);
      UnderlyingInstrument_60.insert(EncodedUnderlyingSecurityDescLen_60.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_60;
      UnderlyingAdjustedQuantity_60.setString("11840760");
      noUnderlyings_0_1_0.set(UnderlyingAdjustedQuantity_60);
      UnderlyingInstrument_60.insert(UnderlyingAdjustedQuantity_60.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_60;
      UnderlyingAllocationPercent_60.setString("51.950000");
      noUnderlyings_0_1_0.set(UnderlyingAllocationPercent_60);
      UnderlyingInstrument_60.insert(UnderlyingAllocationPercent_60.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_60;
      UnderlyingAttachmentPoint_60.setString("69.980000");
      noUnderlyings_0_1_0.set(UnderlyingAttachmentPoint_60);
      UnderlyingInstrument_60.insert(UnderlyingAttachmentPoint_60.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_60("STRING_307626293");
      noUnderlyings_0_1_0.set(UnderlyingCFICode_60);
      UnderlyingInstrument_60.insert(UnderlyingCFICode_60.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_60("STRING_1083543823");
      noUnderlyings_0_1_0.set(UnderlyingCPProgram_60);
      UnderlyingInstrument_60.insert(UnderlyingCPProgram_60.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_60("STRING_448466325");
      noUnderlyings_0_1_0.set(UnderlyingCPRegType_60);
      UnderlyingInstrument_60.insert(UnderlyingCPRegType_60.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_60;
      UnderlyingCapValue_60.setString("15460309");
      noUnderlyings_0_1_0.set(UnderlyingCapValue_60);
      UnderlyingInstrument_60.insert(UnderlyingCapValue_60.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_60;
      UnderlyingCashAmount_60.setString("9885617");
      noUnderlyings_0_1_0.set(UnderlyingCashAmount_60);
      UnderlyingInstrument_60.insert(UnderlyingCashAmount_60.getString());
      FIX::UnderlyingCashType UnderlyingCashType_60("STRING_DIFF");
      noUnderlyings_0_1_0.set(UnderlyingCashType_60);
      UnderlyingInstrument_60.insert(UnderlyingCashType_60.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_60;
      UnderlyingContractMultiplier_60.setString("3445974");
      noUnderlyings_0_1_0.set(UnderlyingContractMultiplier_60);
      UnderlyingInstrument_60.insert(UnderlyingContractMultiplier_60.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_60(1935852602);
      noUnderlyings_0_1_0.set(UnderlyingContractMultiplierUnit_60);
      UnderlyingInstrument_60.insert(UnderlyingContractMultiplierUnit_60.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_60("COUNTRY_133704878");
      noUnderlyings_0_1_0.set(UnderlyingCountryOfIssue_60);
      UnderlyingInstrument_60.insert(UnderlyingCountryOfIssue_60.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_60("LOCALMKTDATE_250838371");
      noUnderlyings_0_1_0.set(UnderlyingCouponPaymentDate_60);
      UnderlyingInstrument_60.insert(UnderlyingCouponPaymentDate_60.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_60;
      UnderlyingCouponRate_60.setString("4.570000");
      noUnderlyings_0_1_0.set(UnderlyingCouponRate_60);
      UnderlyingInstrument_60.insert(UnderlyingCouponRate_60.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_60("STRING_1601656062");
      noUnderlyings_0_1_0.set(UnderlyingCreditRating_60);
      UnderlyingInstrument_60.insert(UnderlyingCreditRating_60.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_60("CHF");
      noUnderlyings_0_1_0.set(UnderlyingCurrency_60);
      UnderlyingInstrument_60.insert(UnderlyingCurrency_60.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_60;
      UnderlyingCurrentValue_60.setString("17899334");
      noUnderlyings_0_1_0.set(UnderlyingCurrentValue_60);
      UnderlyingInstrument_60.insert(UnderlyingCurrentValue_60.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_60;
      UnderlyingDetachmentPoint_60.setString("51.930000");
      noUnderlyings_0_1_0.set(UnderlyingDetachmentPoint_60);
      UnderlyingInstrument_60.insert(UnderlyingDetachmentPoint_60.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_60;
      UnderlyingDirtyPrice_60.setString("13967230");
      noUnderlyings_0_1_0.set(UnderlyingDirtyPrice_60);
      UnderlyingInstrument_60.insert(UnderlyingDirtyPrice_60.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_60;
      UnderlyingEndPrice_60.setString("4538410");
      noUnderlyings_0_1_0.set(UnderlyingEndPrice_60);
      UnderlyingInstrument_60.insert(UnderlyingEndPrice_60.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_60;
      UnderlyingEndValue_60.setString("13929008");
      noUnderlyings_0_1_0.set(UnderlyingEndValue_60);
      UnderlyingInstrument_60.insert(UnderlyingEndValue_60.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_60(718537289);
      noUnderlyings_0_1_0.set(UnderlyingExerciseStyle_60);
      UnderlyingInstrument_60.insert(UnderlyingExerciseStyle_60.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_60;
      UnderlyingFXRate_60.setString("14801423");
      noUnderlyings_0_1_0.set(UnderlyingFXRate_60);
      UnderlyingInstrument_60.insert(UnderlyingFXRate_60.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_60('M');
      noUnderlyings_0_1_0.set(UnderlyingFXRateCalc_60);
      UnderlyingInstrument_60.insert(UnderlyingFXRateCalc_60.getString());
      FIX::UnderlyingFactor UnderlyingFactor_60;
      UnderlyingFactor_60.setString("10370336");
      noUnderlyings_0_1_0.set(UnderlyingFactor_60);
      UnderlyingInstrument_60.insert(UnderlyingFactor_60.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_60(792200691);
      noUnderlyings_0_1_0.set(UnderlyingFlowScheduleType_60);
      UnderlyingInstrument_60.insert(UnderlyingFlowScheduleType_60.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_60("STRING_1255984828");
      noUnderlyings_0_1_0.set(UnderlyingInstrRegistry_60);
      UnderlyingInstrument_60.insert(UnderlyingInstrRegistry_60.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_60("LOCALMKTDATE_1175161139");
      noUnderlyings_0_1_0.set(UnderlyingIssueDate_60);
      UnderlyingInstrument_60.insert(UnderlyingIssueDate_60.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_60("STRING_1916516917");
      noUnderlyings_0_1_0.set(UnderlyingIssuer_60);
      UnderlyingInstrument_60.insert(UnderlyingIssuer_60.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_60("STRING_1202382377");
      noUnderlyings_0_1_0.set(UnderlyingLocaleOfIssue_60);
      UnderlyingInstrument_60.insert(UnderlyingLocaleOfIssue_60.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_60("LOCALMKTDATE_211753575");
      noUnderlyings_0_1_0.set(UnderlyingMaturityDate_60);
      UnderlyingInstrument_60.insert(UnderlyingMaturityDate_60.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_60("MONTHYEAR_326948464");
      noUnderlyings_0_1_0.set(UnderlyingMaturityMonthYear_60);
      UnderlyingInstrument_60.insert(UnderlyingMaturityMonthYear_60.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_60("TZTIMEONLY_169875727");
      noUnderlyings_0_1_0.set(UnderlyingMaturityTime_60);
      UnderlyingInstrument_60.insert(UnderlyingMaturityTime_60.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_60;
      UnderlyingNotionalPercentageOutstanding_60.setString("98.680000");
      noUnderlyings_0_1_0.set(UnderlyingNotionalPercentageOutstanding_60);
      UnderlyingInstrument_60.insert(UnderlyingNotionalPercentageOutstanding_60.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_60('1');
      noUnderlyings_0_1_0.set(UnderlyingOptAttribute_60);
      UnderlyingInstrument_60.insert(UnderlyingOptAttribute_60.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_60;
      UnderlyingOriginalNotionalPercentageOutstanding_60.setString("20.520000");
      noUnderlyings_0_1_0.set(UnderlyingOriginalNotionalPercentageOutstanding_60);
      UnderlyingInstrument_60.insert(UnderlyingOriginalNotionalPercentageOutstanding_60.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_60("STRING_2065410855");
      noUnderlyings_0_1_0.set(UnderlyingPriceUnitOfMeasure_60);
      UnderlyingInstrument_60.insert(UnderlyingPriceUnitOfMeasure_60.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_60;
      UnderlyingPriceUnitOfMeasureQty_60.setString("2515703");
      noUnderlyings_0_1_0.set(UnderlyingPriceUnitOfMeasureQty_60);
      UnderlyingInstrument_60.insert(UnderlyingPriceUnitOfMeasureQty_60.getString());
      FIX::UnderlyingProduct UnderlyingProduct_60(1283952786);
      noUnderlyings_0_1_0.set(UnderlyingProduct_60);
      UnderlyingInstrument_60.insert(UnderlyingProduct_60.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_60(262524696);
      noUnderlyings_0_1_0.set(UnderlyingPutOrCall_60);
      UnderlyingInstrument_60.insert(UnderlyingPutOrCall_60.getString());
      FIX::UnderlyingPx UnderlyingPx_60;
      UnderlyingPx_60.setString("399393");
      noUnderlyings_0_1_0.set(UnderlyingPx_60);
      UnderlyingInstrument_60.insert(UnderlyingPx_60.getString());
      FIX::UnderlyingQty UnderlyingQty_60;
      UnderlyingQty_60.setString("14176576");
      noUnderlyings_0_1_0.set(UnderlyingQty_60);
      UnderlyingInstrument_60.insert(UnderlyingQty_60.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_60("LOCALMKTDATE_513363067");
      noUnderlyings_0_1_0.set(UnderlyingRedemptionDate_60);
      UnderlyingInstrument_60.insert(UnderlyingRedemptionDate_60.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_60("STRING_1222159792");
      noUnderlyings_0_1_0.set(UnderlyingRepoCollateralSecurityType_60);
      UnderlyingInstrument_60.insert(UnderlyingRepoCollateralSecurityType_60.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_60;
      UnderlyingRepurchaseRate_60.setString("0.780000");
      noUnderlyings_0_1_0.set(UnderlyingRepurchaseRate_60);
      UnderlyingInstrument_60.insert(UnderlyingRepurchaseRate_60.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_60(1086937909);
      noUnderlyings_0_1_0.set(UnderlyingRepurchaseTerm_60);
      UnderlyingInstrument_60.insert(UnderlyingRepurchaseTerm_60.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_60("STRING_1451830783");
      noUnderlyings_0_1_0.set(UnderlyingRestructuringType_60);
      UnderlyingInstrument_60.insert(UnderlyingRestructuringType_60.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_60("STRING_514279919");
      noUnderlyings_0_1_0.set(UnderlyingSecurityDesc_60);
      UnderlyingInstrument_60.insert(UnderlyingSecurityDesc_60.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_60("EXCHANGE_250849454");
      noUnderlyings_0_1_0.set(UnderlyingSecurityExchange_60);
      UnderlyingInstrument_60.insert(UnderlyingSecurityExchange_60.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_60("STRING_701070153");
      noUnderlyings_0_1_0.set(UnderlyingSecurityID_60);
      UnderlyingInstrument_60.insert(UnderlyingSecurityID_60.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_60("STRING_968120928");
      noUnderlyings_0_1_0.set(UnderlyingSecurityIDSource_60);
      UnderlyingInstrument_60.insert(UnderlyingSecurityIDSource_60.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_60("STRING_1643750262");
      noUnderlyings_0_1_0.set(UnderlyingSecuritySubType_60);
      UnderlyingInstrument_60.insert(UnderlyingSecuritySubType_60.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_60("STRING_1419607443");
      noUnderlyings_0_1_0.set(UnderlyingSecurityType_60);
      UnderlyingInstrument_60.insert(UnderlyingSecurityType_60.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_60("STRING_300779651");
      noUnderlyings_0_1_0.set(UnderlyingSeniority_60);
      UnderlyingInstrument_60.insert(UnderlyingSeniority_60.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_60("STRING_1991920142");
      noUnderlyings_0_1_0.set(UnderlyingSettlMethod_60);
      UnderlyingInstrument_60.insert(UnderlyingSettlMethod_60.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_60(4);
      noUnderlyings_0_1_0.set(UnderlyingSettlementType_60);
      UnderlyingInstrument_60.insert(UnderlyingSettlementType_60.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_60;
      UnderlyingStartValue_60.setString("10929803");
      noUnderlyings_0_1_0.set(UnderlyingStartValue_60);
      UnderlyingInstrument_60.insert(UnderlyingStartValue_60.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_60("STRING_1100421322");
      noUnderlyings_0_1_0.set(UnderlyingStateOrProvinceOfIssue_60);
      UnderlyingInstrument_60.insert(UnderlyingStateOrProvinceOfIssue_60.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_60("EUR");
      noUnderlyings_0_1_0.set(UnderlyingStrikeCurrency_60);
      UnderlyingInstrument_60.insert(UnderlyingStrikeCurrency_60.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_60;
      UnderlyingStrikePrice_60.setString("1553200");
      noUnderlyings_0_1_0.set(UnderlyingStrikePrice_60);
      UnderlyingInstrument_60.insert(UnderlyingStrikePrice_60.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_60("STRING_1696072185");
      noUnderlyings_0_1_0.set(UnderlyingSymbol_60);
      UnderlyingInstrument_60.insert(UnderlyingSymbol_60.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_60("STRING_1188962076");
      noUnderlyings_0_1_0.set(UnderlyingSymbolSfx_60);
      UnderlyingInstrument_60.insert(UnderlyingSymbolSfx_60.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_60("STRING_325195779");
      noUnderlyings_0_1_0.set(UnderlyingTimeUnit_60);
      UnderlyingInstrument_60.insert(UnderlyingTimeUnit_60.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_60("STRING_67968406");
      noUnderlyings_0_1_0.set(UnderlyingUnitOfMeasure_60);
      UnderlyingInstrument_60.insert(UnderlyingUnitOfMeasure_60.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_60;
      UnderlyingUnitOfMeasureQty_60.setString("4519707");
      noUnderlyings_0_1_0.set(UnderlyingUnitOfMeasureQty_60);
      UnderlyingInstrument_60.insert(UnderlyingUnitOfMeasureQty_60.getString());
      all_values.push_back(UnderlyingInstrument_60);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_123;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_123("STRING_2133379261");
        noUnderlyingSecurityAltID_0_0_2_0.set(UnderlyingSecurityAltID_123);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_123.insert(UnderlyingSecurityAltID_123.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_123("STRING_703541096");
        noUnderlyingSecurityAltID_0_0_2_0.set(UnderlyingSecurityAltIDSource_123);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_123.insert(UnderlyingSecurityAltIDSource_123.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_123);

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_124;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_124("STRING_80006969");
        noUnderlyingSecurityAltID_0_0_2_1.set(UnderlyingSecurityAltID_124);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_124.insert(UnderlyingSecurityAltID_124.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_124("STRING_248420310");
        noUnderlyingSecurityAltID_0_0_2_1.set(UnderlyingSecurityAltIDSource_124);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_124.insert(UnderlyingSecurityAltIDSource_124.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_124);

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_1);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_107;
        FIX::UnderlyingStipType UnderlyingStipType_107("STRING_1497664633");
        noUnderlyingStips_0_0_2_0.set(UnderlyingStipType_107);
        UnderlyingStipulations_NoUnderlyingStips_107.insert(UnderlyingStipType_107.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_107("STRING_761783377");
        noUnderlyingStips_0_0_2_0.set(UnderlyingStipValue_107);
        UnderlyingStipulations_NoUnderlyingStips_107.insert(UnderlyingStipValue_107.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_107);

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_0);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_128;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_128("STRING_222011064");
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyID_128);
        UndlyInstrumentParties_NoUndlyInstrumentParties_128.insert(UnderlyingInstrumentPartyID_128.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_128('1');
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyIDSource_128);
        UndlyInstrumentParties_NoUndlyInstrumentParties_128.insert(UnderlyingInstrumentPartyIDSource_128.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_128(1269987358);
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyRole_128);
        UndlyInstrumentParties_NoUndlyInstrumentParties_128.insert(UnderlyingInstrumentPartyRole_128.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_128);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_255;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_255("STRING_2099570740");
          noUndlyInstrumentPartySubIDs_0_0_0_3_0.set(UnderlyingInstrumentPartySubID_255);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_255.insert(UnderlyingInstrumentPartySubID_255.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_255(1971057511);
          noUndlyInstrumentPartySubIDs_0_0_0_3_0.set(UnderlyingInstrumentPartySubIDType_255);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_255.insert(UnderlyingInstrumentPartySubIDType_255.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_255);

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_256;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_256("STRING_1704411912");
          noUndlyInstrumentPartySubIDs_0_0_0_3_1.set(UnderlyingInstrumentPartySubID_256);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_256.insert(UnderlyingInstrumentPartySubID_256.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_256(1595837355);
          noUndlyInstrumentPartySubIDs_0_0_0_3_1.set(UnderlyingInstrumentPartySubIDType_256);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_256.insert(UnderlyingInstrumentPartySubIDType_256.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_256);

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_1);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_257;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_257("STRING_1243181306");
          noUndlyInstrumentPartySubIDs_0_0_0_3_2.set(UnderlyingInstrumentPartySubID_257);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_257.insert(UnderlyingInstrumentPartySubID_257.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_257(2005191563);
          noUndlyInstrumentPartySubIDs_0_0_0_3_2.set(UnderlyingInstrumentPartySubIDType_257);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_257.insert(UnderlyingInstrumentPartySubIDType_257.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_257);

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_2);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_129;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_129("STRING_1440273849");
        noUndlyInstrumentParties_0_0_2_1.set(UnderlyingInstrumentPartyID_129);
        UndlyInstrumentParties_NoUndlyInstrumentParties_129.insert(UnderlyingInstrumentPartyID_129.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_129('1');
        noUndlyInstrumentParties_0_0_2_1.set(UnderlyingInstrumentPartyIDSource_129);
        UndlyInstrumentParties_NoUndlyInstrumentParties_129.insert(UnderlyingInstrumentPartyIDSource_129.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_129(950688257);
        noUndlyInstrumentParties_0_0_2_1.set(UnderlyingInstrumentPartyRole_129);
        UndlyInstrumentParties_NoUndlyInstrumentParties_129.insert(UnderlyingInstrumentPartyRole_129.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_129);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_258;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_258("STRING_889173740");
          noUndlyInstrumentPartySubIDs_0_0_1_3_0.set(UnderlyingInstrumentPartySubID_258);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_258.insert(UnderlyingInstrumentPartySubID_258.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_258(1812701868);
          noUndlyInstrumentPartySubIDs_0_0_1_3_0.set(UnderlyingInstrumentPartySubIDType_258);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_258.insert(UnderlyingInstrumentPartySubIDType_258.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_258);

          noUndlyInstrumentParties_0_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_0_1_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_1_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_259;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_259("STRING_548531575");
          noUndlyInstrumentPartySubIDs_0_0_1_3_1.set(UnderlyingInstrumentPartySubID_259);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_259.insert(UnderlyingInstrumentPartySubID_259.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_259(437762278);
          noUndlyInstrumentPartySubIDs_0_0_1_3_1.set(UnderlyingInstrumentPartySubIDType_259);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_259.insert(UnderlyingInstrumentPartySubIDType_259.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_259);

          noUndlyInstrumentParties_0_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_0_1_3_1);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_1_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_260;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_260("STRING_854180296");
          noUndlyInstrumentPartySubIDs_0_0_1_3_2.set(UnderlyingInstrumentPartySubID_260);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_260.insert(UnderlyingInstrumentPartySubID_260.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_260(873727354);
          noUndlyInstrumentPartySubIDs_0_0_1_3_2.set(UnderlyingInstrumentPartySubIDType_260);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_260.insert(UnderlyingInstrumentPartySubIDType_260.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_260);

          noUndlyInstrumentParties_0_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_0_1_3_2);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_1);
      }
      noOrders_0_0.addGroup(noUnderlyings_0_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoUnderlyings noUnderlyings_0_1_1;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_61;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_61("DATA_505730684");
      noUnderlyings_0_1_1.set(EncodedUnderlyingIssuer_61);
      UnderlyingInstrument_61.insert(EncodedUnderlyingIssuer_61.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_61(1306151012);
      noUnderlyings_0_1_1.set(EncodedUnderlyingIssuerLen_61);
      UnderlyingInstrument_61.insert(EncodedUnderlyingIssuerLen_61.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_61("DATA_1817265185");
      noUnderlyings_0_1_1.set(EncodedUnderlyingSecurityDesc_61);
      UnderlyingInstrument_61.insert(EncodedUnderlyingSecurityDesc_61.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_61(491626297);
      noUnderlyings_0_1_1.set(EncodedUnderlyingSecurityDescLen_61);
      UnderlyingInstrument_61.insert(EncodedUnderlyingSecurityDescLen_61.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_61;
      UnderlyingAdjustedQuantity_61.setString("20096921");
      noUnderlyings_0_1_1.set(UnderlyingAdjustedQuantity_61);
      UnderlyingInstrument_61.insert(UnderlyingAdjustedQuantity_61.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_61;
      UnderlyingAllocationPercent_61.setString("21.550000");
      noUnderlyings_0_1_1.set(UnderlyingAllocationPercent_61);
      UnderlyingInstrument_61.insert(UnderlyingAllocationPercent_61.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_61;
      UnderlyingAttachmentPoint_61.setString("66.070000");
      noUnderlyings_0_1_1.set(UnderlyingAttachmentPoint_61);
      UnderlyingInstrument_61.insert(UnderlyingAttachmentPoint_61.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_61("STRING_605688891");
      noUnderlyings_0_1_1.set(UnderlyingCFICode_61);
      UnderlyingInstrument_61.insert(UnderlyingCFICode_61.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_61("STRING_1247453140");
      noUnderlyings_0_1_1.set(UnderlyingCPProgram_61);
      UnderlyingInstrument_61.insert(UnderlyingCPProgram_61.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_61("STRING_1501829985");
      noUnderlyings_0_1_1.set(UnderlyingCPRegType_61);
      UnderlyingInstrument_61.insert(UnderlyingCPRegType_61.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_61;
      UnderlyingCapValue_61.setString("4238454");
      noUnderlyings_0_1_1.set(UnderlyingCapValue_61);
      UnderlyingInstrument_61.insert(UnderlyingCapValue_61.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_61;
      UnderlyingCashAmount_61.setString("14694642");
      noUnderlyings_0_1_1.set(UnderlyingCashAmount_61);
      UnderlyingInstrument_61.insert(UnderlyingCashAmount_61.getString());
      FIX::UnderlyingCashType UnderlyingCashType_61("STRING_DIFF");
      noUnderlyings_0_1_1.set(UnderlyingCashType_61);
      UnderlyingInstrument_61.insert(UnderlyingCashType_61.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_61;
      UnderlyingContractMultiplier_61.setString("16938328");
      noUnderlyings_0_1_1.set(UnderlyingContractMultiplier_61);
      UnderlyingInstrument_61.insert(UnderlyingContractMultiplier_61.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_61(58271540);
      noUnderlyings_0_1_1.set(UnderlyingContractMultiplierUnit_61);
      UnderlyingInstrument_61.insert(UnderlyingContractMultiplierUnit_61.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_61("COUNTRY_1155154716");
      noUnderlyings_0_1_1.set(UnderlyingCountryOfIssue_61);
      UnderlyingInstrument_61.insert(UnderlyingCountryOfIssue_61.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_61("LOCALMKTDATE_1517406687");
      noUnderlyings_0_1_1.set(UnderlyingCouponPaymentDate_61);
      UnderlyingInstrument_61.insert(UnderlyingCouponPaymentDate_61.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_61;
      UnderlyingCouponRate_61.setString("34.520000");
      noUnderlyings_0_1_1.set(UnderlyingCouponRate_61);
      UnderlyingInstrument_61.insert(UnderlyingCouponRate_61.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_61("STRING_603508423");
      noUnderlyings_0_1_1.set(UnderlyingCreditRating_61);
      UnderlyingInstrument_61.insert(UnderlyingCreditRating_61.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_61("CAN");
      noUnderlyings_0_1_1.set(UnderlyingCurrency_61);
      UnderlyingInstrument_61.insert(UnderlyingCurrency_61.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_61;
      UnderlyingCurrentValue_61.setString("20437822");
      noUnderlyings_0_1_1.set(UnderlyingCurrentValue_61);
      UnderlyingInstrument_61.insert(UnderlyingCurrentValue_61.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_61;
      UnderlyingDetachmentPoint_61.setString("94.750000");
      noUnderlyings_0_1_1.set(UnderlyingDetachmentPoint_61);
      UnderlyingInstrument_61.insert(UnderlyingDetachmentPoint_61.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_61;
      UnderlyingDirtyPrice_61.setString("4235959");
      noUnderlyings_0_1_1.set(UnderlyingDirtyPrice_61);
      UnderlyingInstrument_61.insert(UnderlyingDirtyPrice_61.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_61;
      UnderlyingEndPrice_61.setString("2895101");
      noUnderlyings_0_1_1.set(UnderlyingEndPrice_61);
      UnderlyingInstrument_61.insert(UnderlyingEndPrice_61.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_61;
      UnderlyingEndValue_61.setString("9071332");
      noUnderlyings_0_1_1.set(UnderlyingEndValue_61);
      UnderlyingInstrument_61.insert(UnderlyingEndValue_61.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_61(88814196);
      noUnderlyings_0_1_1.set(UnderlyingExerciseStyle_61);
      UnderlyingInstrument_61.insert(UnderlyingExerciseStyle_61.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_61;
      UnderlyingFXRate_61.setString("8380417");
      noUnderlyings_0_1_1.set(UnderlyingFXRate_61);
      UnderlyingInstrument_61.insert(UnderlyingFXRate_61.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_61('D');
      noUnderlyings_0_1_1.set(UnderlyingFXRateCalc_61);
      UnderlyingInstrument_61.insert(UnderlyingFXRateCalc_61.getString());
      FIX::UnderlyingFactor UnderlyingFactor_61;
      UnderlyingFactor_61.setString("9429944");
      noUnderlyings_0_1_1.set(UnderlyingFactor_61);
      UnderlyingInstrument_61.insert(UnderlyingFactor_61.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_61(1711769076);
      noUnderlyings_0_1_1.set(UnderlyingFlowScheduleType_61);
      UnderlyingInstrument_61.insert(UnderlyingFlowScheduleType_61.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_61("STRING_1850626178");
      noUnderlyings_0_1_1.set(UnderlyingInstrRegistry_61);
      UnderlyingInstrument_61.insert(UnderlyingInstrRegistry_61.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_61("LOCALMKTDATE_101661857");
      noUnderlyings_0_1_1.set(UnderlyingIssueDate_61);
      UnderlyingInstrument_61.insert(UnderlyingIssueDate_61.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_61("STRING_1381550614");
      noUnderlyings_0_1_1.set(UnderlyingIssuer_61);
      UnderlyingInstrument_61.insert(UnderlyingIssuer_61.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_61("STRING_194768827");
      noUnderlyings_0_1_1.set(UnderlyingLocaleOfIssue_61);
      UnderlyingInstrument_61.insert(UnderlyingLocaleOfIssue_61.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_61("LOCALMKTDATE_2111353966");
      noUnderlyings_0_1_1.set(UnderlyingMaturityDate_61);
      UnderlyingInstrument_61.insert(UnderlyingMaturityDate_61.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_61("MONTHYEAR_1131339121");
      noUnderlyings_0_1_1.set(UnderlyingMaturityMonthYear_61);
      UnderlyingInstrument_61.insert(UnderlyingMaturityMonthYear_61.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_61("TZTIMEONLY_934815435");
      noUnderlyings_0_1_1.set(UnderlyingMaturityTime_61);
      UnderlyingInstrument_61.insert(UnderlyingMaturityTime_61.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_61;
      UnderlyingNotionalPercentageOutstanding_61.setString("92.090000");
      noUnderlyings_0_1_1.set(UnderlyingNotionalPercentageOutstanding_61);
      UnderlyingInstrument_61.insert(UnderlyingNotionalPercentageOutstanding_61.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_61('2');
      noUnderlyings_0_1_1.set(UnderlyingOptAttribute_61);
      UnderlyingInstrument_61.insert(UnderlyingOptAttribute_61.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_61;
      UnderlyingOriginalNotionalPercentageOutstanding_61.setString("17.720000");
      noUnderlyings_0_1_1.set(UnderlyingOriginalNotionalPercentageOutstanding_61);
      UnderlyingInstrument_61.insert(UnderlyingOriginalNotionalPercentageOutstanding_61.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_61("STRING_993404674");
      noUnderlyings_0_1_1.set(UnderlyingPriceUnitOfMeasure_61);
      UnderlyingInstrument_61.insert(UnderlyingPriceUnitOfMeasure_61.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_61;
      UnderlyingPriceUnitOfMeasureQty_61.setString("17007728");
      noUnderlyings_0_1_1.set(UnderlyingPriceUnitOfMeasureQty_61);
      UnderlyingInstrument_61.insert(UnderlyingPriceUnitOfMeasureQty_61.getString());
      FIX::UnderlyingProduct UnderlyingProduct_61(1492229395);
      noUnderlyings_0_1_1.set(UnderlyingProduct_61);
      UnderlyingInstrument_61.insert(UnderlyingProduct_61.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_61(539753850);
      noUnderlyings_0_1_1.set(UnderlyingPutOrCall_61);
      UnderlyingInstrument_61.insert(UnderlyingPutOrCall_61.getString());
      FIX::UnderlyingPx UnderlyingPx_61;
      UnderlyingPx_61.setString("17590443");
      noUnderlyings_0_1_1.set(UnderlyingPx_61);
      UnderlyingInstrument_61.insert(UnderlyingPx_61.getString());
      FIX::UnderlyingQty UnderlyingQty_61;
      UnderlyingQty_61.setString("4999004");
      noUnderlyings_0_1_1.set(UnderlyingQty_61);
      UnderlyingInstrument_61.insert(UnderlyingQty_61.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_61("LOCALMKTDATE_2057160537");
      noUnderlyings_0_1_1.set(UnderlyingRedemptionDate_61);
      UnderlyingInstrument_61.insert(UnderlyingRedemptionDate_61.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_61("STRING_1374244162");
      noUnderlyings_0_1_1.set(UnderlyingRepoCollateralSecurityType_61);
      UnderlyingInstrument_61.insert(UnderlyingRepoCollateralSecurityType_61.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_61;
      UnderlyingRepurchaseRate_61.setString("88.860000");
      noUnderlyings_0_1_1.set(UnderlyingRepurchaseRate_61);
      UnderlyingInstrument_61.insert(UnderlyingRepurchaseRate_61.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_61(522781234);
      noUnderlyings_0_1_1.set(UnderlyingRepurchaseTerm_61);
      UnderlyingInstrument_61.insert(UnderlyingRepurchaseTerm_61.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_61("STRING_847151881");
      noUnderlyings_0_1_1.set(UnderlyingRestructuringType_61);
      UnderlyingInstrument_61.insert(UnderlyingRestructuringType_61.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_61("STRING_999707510");
      noUnderlyings_0_1_1.set(UnderlyingSecurityDesc_61);
      UnderlyingInstrument_61.insert(UnderlyingSecurityDesc_61.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_61("EXCHANGE_540740710");
      noUnderlyings_0_1_1.set(UnderlyingSecurityExchange_61);
      UnderlyingInstrument_61.insert(UnderlyingSecurityExchange_61.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_61("STRING_1270747857");
      noUnderlyings_0_1_1.set(UnderlyingSecurityID_61);
      UnderlyingInstrument_61.insert(UnderlyingSecurityID_61.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_61("STRING_1289217658");
      noUnderlyings_0_1_1.set(UnderlyingSecurityIDSource_61);
      UnderlyingInstrument_61.insert(UnderlyingSecurityIDSource_61.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_61("STRING_1447873926");
      noUnderlyings_0_1_1.set(UnderlyingSecuritySubType_61);
      UnderlyingInstrument_61.insert(UnderlyingSecuritySubType_61.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_61("STRING_1359562053");
      noUnderlyings_0_1_1.set(UnderlyingSecurityType_61);
      UnderlyingInstrument_61.insert(UnderlyingSecurityType_61.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_61("STRING_2127259380");
      noUnderlyings_0_1_1.set(UnderlyingSeniority_61);
      UnderlyingInstrument_61.insert(UnderlyingSeniority_61.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_61("STRING_645285772");
      noUnderlyings_0_1_1.set(UnderlyingSettlMethod_61);
      UnderlyingInstrument_61.insert(UnderlyingSettlMethod_61.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_61(2);
      noUnderlyings_0_1_1.set(UnderlyingSettlementType_61);
      UnderlyingInstrument_61.insert(UnderlyingSettlementType_61.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_61;
      UnderlyingStartValue_61.setString("16915448");
      noUnderlyings_0_1_1.set(UnderlyingStartValue_61);
      UnderlyingInstrument_61.insert(UnderlyingStartValue_61.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_61("STRING_348428302");
      noUnderlyings_0_1_1.set(UnderlyingStateOrProvinceOfIssue_61);
      UnderlyingInstrument_61.insert(UnderlyingStateOrProvinceOfIssue_61.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_61("EUR");
      noUnderlyings_0_1_1.set(UnderlyingStrikeCurrency_61);
      UnderlyingInstrument_61.insert(UnderlyingStrikeCurrency_61.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_61;
      UnderlyingStrikePrice_61.setString("5431971");
      noUnderlyings_0_1_1.set(UnderlyingStrikePrice_61);
      UnderlyingInstrument_61.insert(UnderlyingStrikePrice_61.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_61("STRING_220605074");
      noUnderlyings_0_1_1.set(UnderlyingSymbol_61);
      UnderlyingInstrument_61.insert(UnderlyingSymbol_61.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_61("STRING_2056950896");
      noUnderlyings_0_1_1.set(UnderlyingSymbolSfx_61);
      UnderlyingInstrument_61.insert(UnderlyingSymbolSfx_61.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_61("STRING_1478012564");
      noUnderlyings_0_1_1.set(UnderlyingTimeUnit_61);
      UnderlyingInstrument_61.insert(UnderlyingTimeUnit_61.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_61("STRING_790164283");
      noUnderlyings_0_1_1.set(UnderlyingUnitOfMeasure_61);
      UnderlyingInstrument_61.insert(UnderlyingUnitOfMeasure_61.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_61;
      UnderlyingUnitOfMeasureQty_61.setString("1407758");
      noUnderlyings_0_1_1.set(UnderlyingUnitOfMeasureQty_61);
      UnderlyingInstrument_61.insert(UnderlyingUnitOfMeasureQty_61.getString());
      all_values.push_back(UnderlyingInstrument_61);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_125;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_125("STRING_1783568957");
        noUnderlyingSecurityAltID_0_1_2_0.set(UnderlyingSecurityAltID_125);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_125.insert(UnderlyingSecurityAltID_125.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_125("STRING_1841548679");
        noUnderlyingSecurityAltID_0_1_2_0.set(UnderlyingSecurityAltIDSource_125);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_125.insert(UnderlyingSecurityAltIDSource_125.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_125);

        noUnderlyings_0_1_1.addGroup(noUnderlyingSecurityAltID_0_1_2_0);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_108;
        FIX::UnderlyingStipType UnderlyingStipType_108("STRING_175839159");
        noUnderlyingStips_0_1_2_0.set(UnderlyingStipType_108);
        UnderlyingStipulations_NoUnderlyingStips_108.insert(UnderlyingStipType_108.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_108("STRING_1453109389");
        noUnderlyingStips_0_1_2_0.set(UnderlyingStipValue_108);
        UnderlyingStipulations_NoUnderlyingStips_108.insert(UnderlyingStipValue_108.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_108);

        noUnderlyings_0_1_1.addGroup(noUnderlyingStips_0_1_2_0);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_130;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_130("STRING_85516048");
        noUndlyInstrumentParties_0_1_2_0.set(UnderlyingInstrumentPartyID_130);
        UndlyInstrumentParties_NoUndlyInstrumentParties_130.insert(UnderlyingInstrumentPartyID_130.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_130('6');
        noUndlyInstrumentParties_0_1_2_0.set(UnderlyingInstrumentPartyIDSource_130);
        UndlyInstrumentParties_NoUndlyInstrumentParties_130.insert(UnderlyingInstrumentPartyIDSource_130.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_130(567745786);
        noUndlyInstrumentParties_0_1_2_0.set(UnderlyingInstrumentPartyRole_130);
        UndlyInstrumentParties_NoUndlyInstrumentParties_130.insert(UnderlyingInstrumentPartyRole_130.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_130);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_261;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_261("STRING_1527021784");
          noUndlyInstrumentPartySubIDs_0_1_0_3_0.set(UnderlyingInstrumentPartySubID_261);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_261.insert(UnderlyingInstrumentPartySubID_261.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_261(1567453296);
          noUndlyInstrumentPartySubIDs_0_1_0_3_0.set(UnderlyingInstrumentPartySubIDType_261);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_261.insert(UnderlyingInstrumentPartySubIDType_261.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_261);

          noUndlyInstrumentParties_0_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0_3_0);
        }
        noUnderlyings_0_1_1.addGroup(noUndlyInstrumentParties_0_1_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_131;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_131("STRING_1149037993");
        noUndlyInstrumentParties_0_1_2_1.set(UnderlyingInstrumentPartyID_131);
        UndlyInstrumentParties_NoUndlyInstrumentParties_131.insert(UnderlyingInstrumentPartyID_131.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_131('6');
        noUndlyInstrumentParties_0_1_2_1.set(UnderlyingInstrumentPartyIDSource_131);
        UndlyInstrumentParties_NoUndlyInstrumentParties_131.insert(UnderlyingInstrumentPartyIDSource_131.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_131(709187306);
        noUndlyInstrumentParties_0_1_2_1.set(UnderlyingInstrumentPartyRole_131);
        UndlyInstrumentParties_NoUndlyInstrumentParties_131.insert(UnderlyingInstrumentPartyRole_131.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_131);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_262;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_262("STRING_2009848047");
          noUndlyInstrumentPartySubIDs_0_1_1_3_0.set(UnderlyingInstrumentPartySubID_262);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_262.insert(UnderlyingInstrumentPartySubID_262.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_262(688963039);
          noUndlyInstrumentPartySubIDs_0_1_1_3_0.set(UnderlyingInstrumentPartySubIDType_262);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_262.insert(UnderlyingInstrumentPartySubIDType_262.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_262);

          noUndlyInstrumentParties_0_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_1_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_1_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_263;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_263("STRING_1094714043");
          noUndlyInstrumentPartySubIDs_0_1_1_3_1.set(UnderlyingInstrumentPartySubID_263);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_263.insert(UnderlyingInstrumentPartySubID_263.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_263(17437297);
          noUndlyInstrumentPartySubIDs_0_1_1_3_1.set(UnderlyingInstrumentPartySubIDType_263);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_263.insert(UnderlyingInstrumentPartySubIDType_263.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_263);

          noUndlyInstrumentParties_0_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_1_3_1);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_1_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_264;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_264("STRING_233024200");
          noUndlyInstrumentPartySubIDs_0_1_1_3_2.set(UnderlyingInstrumentPartySubID_264);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_264.insert(UnderlyingInstrumentPartySubID_264.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_264(1443142345);
          noUndlyInstrumentPartySubIDs_0_1_1_3_2.set(UnderlyingInstrumentPartySubIDType_264);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_264.insert(UnderlyingInstrumentPartySubIDType_264.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_264);

          noUndlyInstrumentParties_0_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_1_3_2);
        }
        noUnderlyings_0_1_1.addGroup(noUndlyInstrumentParties_0_1_2_1);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2_2;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_132;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_132("STRING_274172053");
        noUndlyInstrumentParties_0_1_2_2.set(UnderlyingInstrumentPartyID_132);
        UndlyInstrumentParties_NoUndlyInstrumentParties_132.insert(UnderlyingInstrumentPartyID_132.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_132('1');
        noUndlyInstrumentParties_0_1_2_2.set(UnderlyingInstrumentPartyIDSource_132);
        UndlyInstrumentParties_NoUndlyInstrumentParties_132.insert(UnderlyingInstrumentPartyIDSource_132.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_132(1986339474);
        noUndlyInstrumentParties_0_1_2_2.set(UnderlyingInstrumentPartyRole_132);
        UndlyInstrumentParties_NoUndlyInstrumentParties_132.insert(UnderlyingInstrumentPartyRole_132.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_132);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_265;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_265("STRING_1068103223");
          noUndlyInstrumentPartySubIDs_0_1_2_3_0.set(UnderlyingInstrumentPartySubID_265);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_265.insert(UnderlyingInstrumentPartySubID_265.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_265(1316868391);
          noUndlyInstrumentPartySubIDs_0_1_2_3_0.set(UnderlyingInstrumentPartySubIDType_265);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_265.insert(UnderlyingInstrumentPartySubIDType_265.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_265);

          noUndlyInstrumentParties_0_1_2_2.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_3_0);
        }
        noUnderlyings_0_1_1.addGroup(noUndlyInstrumentParties_0_1_2_2);
      }
      noOrders_0_0.addGroup(noUnderlyings_0_1_1);
    }
    // YieldData
    multiset<string> YieldData_10;
    FIX::Yield Yield_10;
    Yield_10.setString("14.100000");
    noOrders_0_0.set(Yield_10);
    YieldData_10.insert(Yield_10.getString());
    FIX::YieldCalcDate YieldCalcDate_10("LOCALMKTDATE_1208879084");
    noOrders_0_0.set(YieldCalcDate_10);
    YieldData_10.insert(YieldCalcDate_10.getString());
    FIX::YieldRedemptionDate YieldRedemptionDate_10("LOCALMKTDATE_936559079");
    noOrders_0_0.set(YieldRedemptionDate_10);
    YieldData_10.insert(YieldRedemptionDate_10.getString());
    FIX::YieldRedemptionPrice YieldRedemptionPrice_10;
    YieldRedemptionPrice_10.setString("9210267");
    noOrders_0_0.set(YieldRedemptionPrice_10);
    YieldData_10.insert(YieldRedemptionPrice_10.getString());
    FIX::YieldRedemptionPriceType YieldRedemptionPriceType_10(902944116);
    noOrders_0_0.set(YieldRedemptionPriceType_10);
    YieldData_10.insert(YieldRedemptionPriceType_10.getString());
    FIX::YieldType YieldType_10("STRING_CALL");
    noOrders_0_0.set(YieldType_10);
    YieldData_10.insert(YieldType_10.getString());
    all_values.push_back(YieldData_10);

    msg.addGroup(noOrders_0_0);
  }
  {
    FIX50SP2::NewOrderList::NoOrders noOrders_0_1;
    // ListOrdGrp.NoOrders
    multiset<string> ListOrdGrp_NoOrders_1;
    FIX::Account Account_16("STRING_1096865879");
    noOrders_0_1.set(Account_16);
    ListOrdGrp_NoOrders_1.insert(Account_16.getString());
    FIX::AccountType AccountType_15(8);
    noOrders_0_1.set(AccountType_15);
    ListOrdGrp_NoOrders_1.insert(AccountType_15.getString());
    FIX::AcctIDSource AcctIDSource_9(4);
    noOrders_0_1.set(AcctIDSource_9);
    ListOrdGrp_NoOrders_1.insert(AcctIDSource_9.getString());
    FIX::AllocID AllocID_13("STRING_1182381928");
    noOrders_0_1.set(AllocID_13);
    ListOrdGrp_NoOrders_1.insert(AllocID_13.getString());
    FIX::BookingType BookingType_20(0);
    noOrders_0_1.set(BookingType_20);
    ListOrdGrp_NoOrders_1.insert(BookingType_20.getString());
    FIX::BookingUnit BookingUnit_6('1');
    noOrders_0_1.set(BookingUnit_6);
    ListOrdGrp_NoOrders_1.insert(BookingUnit_6.getString());
    FIX::CashMargin CashMargin_6('2');
    noOrders_0_1.set(CashMargin_6);
    ListOrdGrp_NoOrders_1.insert(CashMargin_6.getString());
    FIX::ClOrdID ClOrdID_30("STRING_267977897");
    noOrders_0_1.set(ClOrdID_30);
    ListOrdGrp_NoOrders_1.insert(ClOrdID_30.getString());
    FIX::ClOrdLinkID ClOrdLinkID_8("STRING_1500531497");
    noOrders_0_1.set(ClOrdLinkID_8);
    ListOrdGrp_NoOrders_1.insert(ClOrdLinkID_8.getString());
    FIX::ClearingFeeIndicator ClearingFeeIndicator_12("STRING_3");
    noOrders_0_1.set(ClearingFeeIndicator_12);
    ListOrdGrp_NoOrders_1.insert(ClearingFeeIndicator_12.getString());
    FIX::ComplianceID ComplianceID_7("STRING_918263891");
    noOrders_0_1.set(ComplianceID_7);
    ListOrdGrp_NoOrders_1.insert(ComplianceID_7.getString());
    FIX::CoveredOrUncovered CoveredOrUncovered_5(0);
    noOrders_0_1.set(CoveredOrUncovered_5);
    ListOrdGrp_NoOrders_1.insert(CoveredOrUncovered_5.getString());
    FIX::Currency Currency_43("USD");
    noOrders_0_1.set(Currency_43);
    ListOrdGrp_NoOrders_1.insert(Currency_43.getString());
    FIX::CustOrderCapacity CustOrderCapacity_9(4);
    noOrders_0_1.set(CustOrderCapacity_9);
    ListOrdGrp_NoOrders_1.insert(CustOrderCapacity_9.getString());
    FIX::DayBookingInst DayBookingInst_6('0');
    noOrders_0_1.set(DayBookingInst_6);
    ListOrdGrp_NoOrders_1.insert(DayBookingInst_6.getString());
    FIX::Designation Designation_5("STRING_798065587");
    noOrders_0_1.set(Designation_5);
    ListOrdGrp_NoOrders_1.insert(Designation_5.getString());
    FIX::EffectiveTime EffectiveTime_5(FIX::UTCTIMESTAMP(7, 21, 10, 21, 1, 2001));
    noOrders_0_1.set(EffectiveTime_5);
    ListOrdGrp_NoOrders_1.insert(EffectiveTime_5.getString());
    FIX::EncodedText EncodedText_54("DATA_640275136");
    noOrders_0_1.set(EncodedText_54);
    ListOrdGrp_NoOrders_1.insert(EncodedText_54.getString());
    FIX::EncodedTextLen EncodedTextLen_54(704472531);
    noOrders_0_1.set(EncodedTextLen_54);
    ListOrdGrp_NoOrders_1.insert(EncodedTextLen_54.getString());
    FIX::ExDestination ExDestination_4("EXCHANGE_124873381");
    noOrders_0_1.set(ExDestination_4);
    ListOrdGrp_NoOrders_1.insert(ExDestination_4.getString());
    FIX::ExDestinationIDSource ExDestinationIDSource_4('C');
    noOrders_0_1.set(ExDestinationIDSource_4);
    ListOrdGrp_NoOrders_1.insert(ExDestinationIDSource_4.getString());
    FIX::ExecInst ExecInst_7("MULTIPLECHARVALUE_J");
    noOrders_0_1.set(ExecInst_7);
    ListOrdGrp_NoOrders_1.insert(ExecInst_7.getString());
    FIX::ExpireDate ExpireDate_8("LOCALMKTDATE_1027817497");
    noOrders_0_1.set(ExpireDate_8);
    ListOrdGrp_NoOrders_1.insert(ExpireDate_8.getString());
    FIX::ExpireTime ExpireTime_9(FIX::UTCTIMESTAMP(2, 55, 26, 14, 5, 2013));
    noOrders_0_1.set(ExpireTime_9);
    ListOrdGrp_NoOrders_1.insert(ExpireTime_9.getString());
    FIX::ForexReq ForexReq_6(false);
    noOrders_0_1.set(ForexReq_6);
    ListOrdGrp_NoOrders_1.insert(ForexReq_6.getString());
    FIX::GTBookingInst GTBookingInst_5(1);
    noOrders_0_1.set(GTBookingInst_5);
    ListOrdGrp_NoOrders_1.insert(GTBookingInst_5.getString());
    FIX::HandlInst HandlInst_5('3');
    noOrders_0_1.set(HandlInst_5);
    ListOrdGrp_NoOrders_1.insert(HandlInst_5.getString());
    FIX::IOIID IOIID_5("STRING_45208881");
    noOrders_0_1.set(IOIID_5);
    ListOrdGrp_NoOrders_1.insert(IOIID_5.getString());
    FIX::ListSeqNo ListSeqNo_1(1163585256);
    noOrders_0_1.set(ListSeqNo_1);
    ListOrdGrp_NoOrders_1.insert(ListSeqNo_1.getString());
    FIX::LocateReqd LocateReqd_4(false);
    noOrders_0_1.set(LocateReqd_4);
    ListOrdGrp_NoOrders_1.insert(LocateReqd_4.getString());
    FIX::MatchIncrement MatchIncrement_5;
    MatchIncrement_5.setString("12868707");
    noOrders_0_1.set(MatchIncrement_5);
    ListOrdGrp_NoOrders_1.insert(MatchIncrement_5.getString());
    FIX::MaxFloor MaxFloor_5;
    MaxFloor_5.setString("19442135");
    noOrders_0_1.set(MaxFloor_5);
    ListOrdGrp_NoOrders_1.insert(MaxFloor_5.getString());
    FIX::MaxPriceLevels MaxPriceLevels_5(942721548);
    noOrders_0_1.set(MaxPriceLevels_5);
    ListOrdGrp_NoOrders_1.insert(MaxPriceLevels_5.getString());
    FIX::MaxShow MaxShow_5;
    MaxShow_5.setString("14757629");
    noOrders_0_1.set(MaxShow_5);
    ListOrdGrp_NoOrders_1.insert(MaxShow_5.getString());
    FIX::MinQty MinQty_7;
    MinQty_7.setString("5947954");
    noOrders_0_1.set(MinQty_7);
    ListOrdGrp_NoOrders_1.insert(MinQty_7.getString());
    FIX::OrdType OrdType_34('Q');
    noOrders_0_1.set(OrdType_34);
    ListOrdGrp_NoOrders_1.insert(OrdType_34.getString());
    FIX::OrderCapacity OrderCapacity_22('G');
    noOrders_0_1.set(OrderCapacity_22);
    ListOrdGrp_NoOrders_1.insert(OrderCapacity_22.getString());
    FIX::OrderQty2 OrderQty2_13;
    OrderQty2_13.setString("16670331");
    noOrders_0_1.set(OrderQty2_13);
    ListOrdGrp_NoOrders_1.insert(OrderQty2_13.getString());
    FIX::OrderRestrictions OrderRestrictions_20("MULTIPLECHARVALUE_B");
    noOrders_0_1.set(OrderRestrictions_20);
    ListOrdGrp_NoOrders_1.insert(OrderRestrictions_20.getString());
    FIX::ParticipationRate ParticipationRate_5;
    ParticipationRate_5.setString("5.950000");
    noOrders_0_1.set(ParticipationRate_5);
    ListOrdGrp_NoOrders_1.insert(ParticipationRate_5.getString());
    FIX::PositionEffect PositionEffect_9('F');
    noOrders_0_1.set(PositionEffect_9);
    ListOrdGrp_NoOrders_1.insert(PositionEffect_9.getString());
    FIX::PreTradeAnonymity PreTradeAnonymity_6(true);
    noOrders_0_1.set(PreTradeAnonymity_6);
    ListOrdGrp_NoOrders_1.insert(PreTradeAnonymity_6.getString());
    FIX::PreallocMethod PreallocMethod_6('1');
    noOrders_0_1.set(PreallocMethod_6);
    ListOrdGrp_NoOrders_1.insert(PreallocMethod_6.getString());
    FIX::PrevClosePx PrevClosePx_5;
    PrevClosePx_5.setString("17910367");
    noOrders_0_1.set(PrevClosePx_5);
    ListOrdGrp_NoOrders_1.insert(PrevClosePx_5.getString());
    FIX::Price Price_14;
    Price_14.setString("9631863");
    noOrders_0_1.set(Price_14);
    ListOrdGrp_NoOrders_1.insert(Price_14.getString());
    FIX::Price2 Price2_1;
    Price2_1.setString("3533462");
    noOrders_0_1.set(Price2_1);
    ListOrdGrp_NoOrders_1.insert(Price2_1.getString());
    FIX::PriceProtectionScope PriceProtectionScope_5('1');
    noOrders_0_1.set(PriceProtectionScope_5);
    ListOrdGrp_NoOrders_1.insert(PriceProtectionScope_5.getString());
    FIX::PriceType PriceType_24(10);
    noOrders_0_1.set(PriceType_24);
    ListOrdGrp_NoOrders_1.insert(PriceType_24.getString());
    FIX::ProcessCode ProcessCode_11('6');
    noOrders_0_1.set(ProcessCode_11);
    ListOrdGrp_NoOrders_1.insert(ProcessCode_11.getString());
    FIX::QtyType QtyType_18(1);
    noOrders_0_1.set(QtyType_18);
    ListOrdGrp_NoOrders_1.insert(QtyType_18.getString());
    FIX::QuoteID QuoteID_6("STRING_1079907548");
    noOrders_0_1.set(QuoteID_6);
    ListOrdGrp_NoOrders_1.insert(QuoteID_6.getString());
    FIX::RefOrderID RefOrderID_1("STRING_526854529");
    noOrders_0_1.set(RefOrderID_1);
    ListOrdGrp_NoOrders_1.insert(RefOrderID_1.getString());
    FIX::RefOrderIDSource RefOrderIDSource_1('1');
    noOrders_0_1.set(RefOrderIDSource_1);
    ListOrdGrp_NoOrders_1.insert(RefOrderIDSource_1.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_28("STRING_1057251016");
    noOrders_0_1.set(SecondaryClOrdID_28);
    ListOrdGrp_NoOrders_1.insert(SecondaryClOrdID_28.getString());
    FIX::SettlCurrency SettlCurrency_15("USD");
    noOrders_0_1.set(SettlCurrency_15);
    ListOrdGrp_NoOrders_1.insert(SettlCurrency_15.getString());
    FIX::SettlDate SettlDate_32("LOCALMKTDATE_1302572381");
    noOrders_0_1.set(SettlDate_32);
    ListOrdGrp_NoOrders_1.insert(SettlDate_32.getString());
    FIX::SettlDate2 SettlDate2_13("LOCALMKTDATE_1432383074");
    noOrders_0_1.set(SettlDate2_13);
    ListOrdGrp_NoOrders_1.insert(SettlDate2_13.getString());
    FIX::SettlInstMode SettlInstMode_1('3');
    noOrders_0_1.set(SettlInstMode_1);
    ListOrdGrp_NoOrders_1.insert(SettlInstMode_1.getString());
    FIX::SettlType SettlType_15("STRING_B");
    noOrders_0_1.set(SettlType_15);
    ListOrdGrp_NoOrders_1.insert(SettlType_15.getString());
    FIX::Side Side_23('C');
    noOrders_0_1.set(Side_23);
    ListOrdGrp_NoOrders_1.insert(Side_23.getString());
    FIX::SideValueInd SideValueInd_4(1);
    noOrders_0_1.set(SideValueInd_4);
    ListOrdGrp_NoOrders_1.insert(SideValueInd_4.getString());
    FIX::SolicitedFlag SolicitedFlag_6(true);
    noOrders_0_1.set(SolicitedFlag_6);
    ListOrdGrp_NoOrders_1.insert(SolicitedFlag_6.getString());
    FIX::StopPx StopPx_5;
    StopPx_5.setString("4191443");
    noOrders_0_1.set(StopPx_5);
    ListOrdGrp_NoOrders_1.insert(StopPx_5.getString());
    FIX::TargetStrategy TargetStrategy_5(1);
    noOrders_0_1.set(TargetStrategy_5);
    ListOrdGrp_NoOrders_1.insert(TargetStrategy_5.getString());
    FIX::TargetStrategyParameters TargetStrategyParameters_5("STRING_710199374");
    noOrders_0_1.set(TargetStrategyParameters_5);
    ListOrdGrp_NoOrders_1.insert(TargetStrategyParameters_5.getString());
    FIX::Text Text_54("STRING_198604622");
    noOrders_0_1.set(Text_54);
    ListOrdGrp_NoOrders_1.insert(Text_54.getString());
    FIX::TimeInForce TimeInForce_19('6');
    noOrders_0_1.set(TimeInForce_19);
    ListOrdGrp_NoOrders_1.insert(TimeInForce_19.getString());
    FIX::TradeDate TradeDate_20("LOCALMKTDATE_229748853");
    noOrders_0_1.set(TradeDate_20);
    ListOrdGrp_NoOrders_1.insert(TradeDate_20.getString());
    FIX::TradeOriginationDate TradeOriginationDate_12("LOCALMKTDATE_2120923287");
    noOrders_0_1.set(TradeOriginationDate_12);
    ListOrdGrp_NoOrders_1.insert(TradeOriginationDate_12.getString());
    FIX::TransactTime TransactTime_40(FIX::UTCTIMESTAMP(5, 1, 32, 23, 9, 2002));
    noOrders_0_1.set(TransactTime_40);
    ListOrdGrp_NoOrders_1.insert(TransactTime_40.getString());
    all_values.push_back(ListOrdGrp_NoOrders_1);

    // CommissionData
    multiset<string> CommissionData_14;
    FIX::CommCurrency CommCurrency_14("CHF");
    noOrders_0_1.set(CommCurrency_14);
    CommissionData_14.insert(CommCurrency_14.getString());
    FIX::CommType CommType_14('2');
    noOrders_0_1.set(CommType_14);
    CommissionData_14.insert(CommType_14.getString());
    FIX::Commission Commission_14;
    Commission_14.setString("19253688");
    noOrders_0_1.set(Commission_14);
    CommissionData_14.insert(Commission_14.getString());
    FIX::FundRenewWaiv FundRenewWaiv_14('Y');
    noOrders_0_1.set(FundRenewWaiv_14);
    CommissionData_14.insert(FundRenewWaiv_14.getString());
    all_values.push_back(CommissionData_14);

    // DiscretionInstructions
    multiset<string> DiscretionInstructions_5;
    FIX::DiscretionInst DiscretionInst_5('4');
    noOrders_0_1.set(DiscretionInst_5);
    DiscretionInstructions_5.insert(DiscretionInst_5.getString());
    FIX::DiscretionLimitType DiscretionLimitType_5(2);
    noOrders_0_1.set(DiscretionLimitType_5);
    DiscretionInstructions_5.insert(DiscretionLimitType_5.getString());
    FIX::DiscretionMoveType DiscretionMoveType_5(1);
    noOrders_0_1.set(DiscretionMoveType_5);
    DiscretionInstructions_5.insert(DiscretionMoveType_5.getString());
    FIX::DiscretionOffsetType DiscretionOffsetType_5(1);
    noOrders_0_1.set(DiscretionOffsetType_5);
    DiscretionInstructions_5.insert(DiscretionOffsetType_5.getString());
    FIX::DiscretionOffsetValue DiscretionOffsetValue_5;
    DiscretionOffsetValue_5.setString("19382877");
    noOrders_0_1.set(DiscretionOffsetValue_5);
    DiscretionInstructions_5.insert(DiscretionOffsetValue_5.getString());
    FIX::DiscretionRoundDirection DiscretionRoundDirection_5(2);
    noOrders_0_1.set(DiscretionRoundDirection_5);
    DiscretionInstructions_5.insert(DiscretionRoundDirection_5.getString());
    FIX::DiscretionScope DiscretionScope_5(4);
    noOrders_0_1.set(DiscretionScope_5);
    DiscretionInstructions_5.insert(DiscretionScope_5.getString());
    all_values.push_back(DiscretionInstructions_5);

    // DisplayInstruction
    multiset<string> DisplayInstruction_5;
    FIX::DisplayHighQty DisplayHighQty_5;
    DisplayHighQty_5.setString("5427019");
    noOrders_0_1.set(DisplayHighQty_5);
    DisplayInstruction_5.insert(DisplayHighQty_5.getString());
    FIX::DisplayLowQty DisplayLowQty_5;
    DisplayLowQty_5.setString("10818967");
    noOrders_0_1.set(DisplayLowQty_5);
    DisplayInstruction_5.insert(DisplayLowQty_5.getString());
    FIX::DisplayMethod DisplayMethod_5('3');
    noOrders_0_1.set(DisplayMethod_5);
    DisplayInstruction_5.insert(DisplayMethod_5.getString());
    FIX::DisplayMinIncr DisplayMinIncr_5;
    DisplayMinIncr_5.setString("4339868");
    noOrders_0_1.set(DisplayMinIncr_5);
    DisplayInstruction_5.insert(DisplayMinIncr_5.getString());
    FIX::DisplayQty DisplayQty_5;
    DisplayQty_5.setString("11973006");
    noOrders_0_1.set(DisplayQty_5);
    DisplayInstruction_5.insert(DisplayQty_5.getString());
    FIX::DisplayWhen DisplayWhen_5('2');
    noOrders_0_1.set(DisplayWhen_5);
    DisplayInstruction_5.insert(DisplayWhen_5.getString());
    FIX::RefreshQty RefreshQty_5;
    RefreshQty_5.setString("18010346");
    noOrders_0_1.set(RefreshQty_5);
    DisplayInstruction_5.insert(RefreshQty_5.getString());
    FIX::SecondaryDisplayQty SecondaryDisplayQty_5;
    SecondaryDisplayQty_5.setString("19075000");
    noOrders_0_1.set(SecondaryDisplayQty_5);
    DisplayInstruction_5.insert(SecondaryDisplayQty_5.getString());
    all_values.push_back(DisplayInstruction_5);

    // Instrument
    multiset<string> Instrument_48;
    FIX::AttachmentPoint AttachmentPoint_48;
    AttachmentPoint_48.setString("99.470000");
    noOrders_0_1.set(AttachmentPoint_48);
    Instrument_48.insert(AttachmentPoint_48.getString());
    FIX::CFICode CFICode_48("STRING_1980912689");
    noOrders_0_1.set(CFICode_48);
    Instrument_48.insert(CFICode_48.getString());
    FIX::CPProgram CPProgram_48(99);
    noOrders_0_1.set(CPProgram_48);
    Instrument_48.insert(CPProgram_48.getString());
    FIX::CPRegType CPRegType_48("STRING_459609586");
    noOrders_0_1.set(CPRegType_48);
    Instrument_48.insert(CPRegType_48.getString());
    FIX::CapPrice CapPrice_48;
    CapPrice_48.setString("2970276");
    noOrders_0_1.set(CapPrice_48);
    Instrument_48.insert(CapPrice_48.getString());
    FIX::ContractMultiplier ContractMultiplier_48;
    ContractMultiplier_48.setString("13060783");
    noOrders_0_1.set(ContractMultiplier_48);
    Instrument_48.insert(ContractMultiplier_48.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_48(2);
    noOrders_0_1.set(ContractMultiplierUnit_48);
    Instrument_48.insert(ContractMultiplierUnit_48.getString());
    FIX::ContractSettlMonth ContractSettlMonth_48("MONTHYEAR_1684622015");
    noOrders_0_1.set(ContractSettlMonth_48);
    Instrument_48.insert(ContractSettlMonth_48.getString());
    FIX::CountryOfIssue CountryOfIssue_48("COUNTRY_118460930");
    noOrders_0_1.set(CountryOfIssue_48);
    Instrument_48.insert(CountryOfIssue_48.getString());
    FIX::CouponPaymentDate CouponPaymentDate_48("LOCALMKTDATE_898817484");
    noOrders_0_1.set(CouponPaymentDate_48);
    Instrument_48.insert(CouponPaymentDate_48.getString());
    FIX::CouponRate CouponRate_48;
    CouponRate_48.setString("90.190000");
    noOrders_0_1.set(CouponRate_48);
    Instrument_48.insert(CouponRate_48.getString());
    FIX::CreditRating CreditRating_48("STRING_199895895");
    noOrders_0_1.set(CreditRating_48);
    Instrument_48.insert(CreditRating_48.getString());
    FIX::DatedDate DatedDate_48("LOCALMKTDATE_369792973");
    noOrders_0_1.set(DatedDate_48);
    Instrument_48.insert(DatedDate_48.getString());
    FIX::DetachmentPoint DetachmentPoint_48;
    DetachmentPoint_48.setString("84.060000");
    noOrders_0_1.set(DetachmentPoint_48);
    Instrument_48.insert(DetachmentPoint_48.getString());
    FIX::EncodedIssuer EncodedIssuer_48("DATA_2125264724");
    noOrders_0_1.set(EncodedIssuer_48);
    Instrument_48.insert(EncodedIssuer_48.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_48(920676011);
    noOrders_0_1.set(EncodedIssuerLen_48);
    Instrument_48.insert(EncodedIssuerLen_48.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_48("DATA_359232322");
    noOrders_0_1.set(EncodedSecurityDesc_48);
    Instrument_48.insert(EncodedSecurityDesc_48.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_48(1209379883);
    noOrders_0_1.set(EncodedSecurityDescLen_48);
    Instrument_48.insert(EncodedSecurityDescLen_48.getString());
    FIX::ExerciseStyle ExerciseStyle_48(1);
    noOrders_0_1.set(ExerciseStyle_48);
    Instrument_48.insert(ExerciseStyle_48.getString());
    FIX::Factor Factor_48;
    Factor_48.setString("14663311");
    noOrders_0_1.set(Factor_48);
    Instrument_48.insert(Factor_48.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_48(false);
    noOrders_0_1.set(FlexProductEligibilityIndicator_48);
    Instrument_48.insert(FlexProductEligibilityIndicator_48.getString());
    FIX::FlexibleIndicator FlexibleIndicator_48(false);
    noOrders_0_1.set(FlexibleIndicator_48);
    Instrument_48.insert(FlexibleIndicator_48.getString());
    FIX::FloorPrice FloorPrice_48;
    FloorPrice_48.setString("18583293");
    noOrders_0_1.set(FloorPrice_48);
    Instrument_48.insert(FloorPrice_48.getString());
    FIX::FlowScheduleType FlowScheduleType_48(0);
    noOrders_0_1.set(FlowScheduleType_48);
    Instrument_48.insert(FlowScheduleType_48.getString());
    FIX::InstrRegistry InstrRegistry_48("STRING_78962332");
    noOrders_0_1.set(InstrRegistry_48);
    Instrument_48.insert(InstrRegistry_48.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_48('1');
    noOrders_0_1.set(InstrmtAssignmentMethod_48);
    Instrument_48.insert(InstrmtAssignmentMethod_48.getString());
    FIX::InterestAccrualDate InterestAccrualDate_48("LOCALMKTDATE_1976872779");
    noOrders_0_1.set(InterestAccrualDate_48);
    Instrument_48.insert(InterestAccrualDate_48.getString());
    FIX::IssueDate IssueDate_48("LOCALMKTDATE_1276262998");
    noOrders_0_1.set(IssueDate_48);
    Instrument_48.insert(IssueDate_48.getString());
    FIX::Issuer Issuer_48("STRING_2014315659");
    noOrders_0_1.set(Issuer_48);
    Instrument_48.insert(Issuer_48.getString());
    FIX::ListMethod ListMethod_48(0);
    noOrders_0_1.set(ListMethod_48);
    Instrument_48.insert(ListMethod_48.getString());
    FIX::LocaleOfIssue LocaleOfIssue_48("STRING_1036279390");
    noOrders_0_1.set(LocaleOfIssue_48);
    Instrument_48.insert(LocaleOfIssue_48.getString());
    FIX::MaturityDate MaturityDate_48("LOCALMKTDATE_353001959");
    noOrders_0_1.set(MaturityDate_48);
    Instrument_48.insert(MaturityDate_48.getString());
    FIX::MaturityMonthYear MaturityMonthYear_48("MONTHYEAR_1463852836");
    noOrders_0_1.set(MaturityMonthYear_48);
    Instrument_48.insert(MaturityMonthYear_48.getString());
    FIX::MaturityTime MaturityTime_48("TZTIMEONLY_1026044635");
    noOrders_0_1.set(MaturityTime_48);
    Instrument_48.insert(MaturityTime_48.getString());
    FIX::MinPriceIncrement MinPriceIncrement_48;
    MinPriceIncrement_48.setString("8126115");
    noOrders_0_1.set(MinPriceIncrement_48);
    Instrument_48.insert(MinPriceIncrement_48.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_48;
    MinPriceIncrementAmount_48.setString("17608804");
    noOrders_0_1.set(MinPriceIncrementAmount_48);
    Instrument_48.insert(MinPriceIncrementAmount_48.getString());
    FIX::NTPositionLimit NTPositionLimit_48(184639334);
    noOrders_0_1.set(NTPositionLimit_48);
    Instrument_48.insert(NTPositionLimit_48.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_48;
    NotionalPercentageOutstanding_48.setString("37.330000");
    noOrders_0_1.set(NotionalPercentageOutstanding_48);
    Instrument_48.insert(NotionalPercentageOutstanding_48.getString());
    FIX::OptAttribute OptAttribute_48('1');
    noOrders_0_1.set(OptAttribute_48);
    Instrument_48.insert(OptAttribute_48.getString());
    FIX::OptPayoutAmount OptPayoutAmount_48;
    OptPayoutAmount_48.setString("3031002");
    noOrders_0_1.set(OptPayoutAmount_48);
    Instrument_48.insert(OptPayoutAmount_48.getString());
    FIX::OptPayoutType OptPayoutType_48(2);
    noOrders_0_1.set(OptPayoutType_48);
    Instrument_48.insert(OptPayoutType_48.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_48;
    OriginalNotionalPercentageOutstanding_48.setString("42.360000");
    noOrders_0_1.set(OriginalNotionalPercentageOutstanding_48);
    Instrument_48.insert(OriginalNotionalPercentageOutstanding_48.getString());
    FIX::Pool Pool_48("STRING_502996159");
    noOrders_0_1.set(Pool_48);
    Instrument_48.insert(Pool_48.getString());
    FIX::PositionLimit PositionLimit_48(1205100542);
    noOrders_0_1.set(PositionLimit_48);
    Instrument_48.insert(PositionLimit_48.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_48("STRING_INT");
    noOrders_0_1.set(PriceQuoteMethod_48);
    Instrument_48.insert(PriceQuoteMethod_48.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_48("STRING_480777235");
    noOrders_0_1.set(PriceUnitOfMeasure_48);
    Instrument_48.insert(PriceUnitOfMeasure_48.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_48;
    PriceUnitOfMeasureQty_48.setString("21257765");
    noOrders_0_1.set(PriceUnitOfMeasureQty_48);
    Instrument_48.insert(PriceUnitOfMeasureQty_48.getString());
    FIX::Product Product_50(12);
    noOrders_0_1.set(Product_50);
    Instrument_48.insert(Product_50.getString());
    FIX::ProductComplex ProductComplex_48("STRING_1690157118");
    noOrders_0_1.set(ProductComplex_48);
    Instrument_48.insert(ProductComplex_48.getString());
    FIX::PutOrCall PutOrCall_48(0);
    noOrders_0_1.set(PutOrCall_48);
    Instrument_48.insert(PutOrCall_48.getString());
    FIX::RedemptionDate RedemptionDate_48("LOCALMKTDATE_661922433");
    noOrders_0_1.set(RedemptionDate_48);
    Instrument_48.insert(RedemptionDate_48.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_48("STRING_542857465");
    noOrders_0_1.set(RepoCollateralSecurityType_48);
    Instrument_48.insert(RepoCollateralSecurityType_48.getString());
    FIX::RepurchaseRate RepurchaseRate_48;
    RepurchaseRate_48.setString("85.250000");
    noOrders_0_1.set(RepurchaseRate_48);
    Instrument_48.insert(RepurchaseRate_48.getString());
    FIX::RepurchaseTerm RepurchaseTerm_48(372768120);
    noOrders_0_1.set(RepurchaseTerm_48);
    Instrument_48.insert(RepurchaseTerm_48.getString());
    FIX::RestructuringType RestructuringType_48("STRING_MR");
    noOrders_0_1.set(RestructuringType_48);
    Instrument_48.insert(RestructuringType_48.getString());
    FIX::SecurityDesc SecurityDesc_48("STRING_1583130858");
    noOrders_0_1.set(SecurityDesc_48);
    Instrument_48.insert(SecurityDesc_48.getString());
    FIX::SecurityExchange SecurityExchange_48("EXCHANGE_2099518454");
    noOrders_0_1.set(SecurityExchange_48);
    Instrument_48.insert(SecurityExchange_48.getString());
    FIX::SecurityGroup SecurityGroup_48("STRING_1915132536");
    noOrders_0_1.set(SecurityGroup_48);
    Instrument_48.insert(SecurityGroup_48.getString());
    FIX::SecurityID SecurityID_48("STRING_711910208");
    noOrders_0_1.set(SecurityID_48);
    Instrument_48.insert(SecurityID_48.getString());
    FIX::SecurityIDSource SecurityIDSource_48("STRING_F");
    noOrders_0_1.set(SecurityIDSource_48);
    Instrument_48.insert(SecurityIDSource_48.getString());
    FIX::SecurityStatus SecurityStatus_48("STRING_2");
    noOrders_0_1.set(SecurityStatus_48);
    Instrument_48.insert(SecurityStatus_48.getString());
    FIX::SecuritySubType SecuritySubType_49("STRING_1748189598");
    noOrders_0_1.set(SecuritySubType_49);
    Instrument_48.insert(SecuritySubType_49.getString());
    FIX::SecurityType SecurityType_50("STRING_CORP");
    noOrders_0_1.set(SecurityType_50);
    Instrument_48.insert(SecurityType_50.getString());
    FIX::Seniority Seniority_48("STRING_SR");
    noOrders_0_1.set(Seniority_48);
    Instrument_48.insert(Seniority_48.getString());
    FIX::SettlMethod SettlMethod_48('P');
    noOrders_0_1.set(SettlMethod_48);
    Instrument_48.insert(SettlMethod_48.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_48("STRING_984480322");
    noOrders_0_1.set(SettleOnOpenFlag_48);
    Instrument_48.insert(SettleOnOpenFlag_48.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_48("STRING_327838721");
    noOrders_0_1.set(StateOrProvinceOfIssue_48);
    Instrument_48.insert(StateOrProvinceOfIssue_48.getString());
    FIX::StrikeCurrency StrikeCurrency_48("CAN");
    noOrders_0_1.set(StrikeCurrency_48);
    Instrument_48.insert(StrikeCurrency_48.getString());
    FIX::StrikeMultiplier StrikeMultiplier_48;
    StrikeMultiplier_48.setString("16258575");
    noOrders_0_1.set(StrikeMultiplier_48);
    Instrument_48.insert(StrikeMultiplier_48.getString());
    FIX::StrikePrice StrikePrice_48;
    StrikePrice_48.setString("11144901");
    noOrders_0_1.set(StrikePrice_48);
    Instrument_48.insert(StrikePrice_48.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_48(2);
    noOrders_0_1.set(StrikePriceBoundaryMethod_48);
    Instrument_48.insert(StrikePriceBoundaryMethod_48.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_48;
    StrikePriceBoundaryPrecision_48.setString("18.230000");
    noOrders_0_1.set(StrikePriceBoundaryPrecision_48);
    Instrument_48.insert(StrikePriceBoundaryPrecision_48.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_48(3);
    noOrders_0_1.set(StrikePriceDeterminationMethod_48);
    Instrument_48.insert(StrikePriceDeterminationMethod_48.getString());
    FIX::StrikeValue StrikeValue_48;
    StrikeValue_48.setString("8138948");
    noOrders_0_1.set(StrikeValue_48);
    Instrument_48.insert(StrikeValue_48.getString());
    FIX::Symbol Symbol_48("STRING_890830818");
    noOrders_0_1.set(Symbol_48);
    Instrument_48.insert(Symbol_48.getString());
    FIX::SymbolSfx SymbolSfx_48("STRING_WI");
    noOrders_0_1.set(SymbolSfx_48);
    Instrument_48.insert(SymbolSfx_48.getString());
    FIX::TimeUnit TimeUnit_48("STRING_S");
    noOrders_0_1.set(TimeUnit_48);
    Instrument_48.insert(TimeUnit_48.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_48(4);
    noOrders_0_1.set(UnderlyingPriceDeterminationMethod_48);
    Instrument_48.insert(UnderlyingPriceDeterminationMethod_48.getString());
    FIX::UnitOfMeasure UnitOfMeasure_48("STRING_tn");
    noOrders_0_1.set(UnitOfMeasure_48);
    Instrument_48.insert(UnitOfMeasure_48.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_48;
    UnitOfMeasureQty_48.setString("11518070");
    noOrders_0_1.set(UnitOfMeasureQty_48);
    Instrument_48.insert(UnitOfMeasureQty_48.getString());
    FIX::ValuationMethod ValuationMethod_48("STRING_CDS");
    noOrders_0_1.set(ValuationMethod_48);
    Instrument_48.insert(ValuationMethod_48.getString());
    all_values.push_back(Instrument_48);

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::NewOrderList::NoOrders::NoComplexEvents noComplexEvents_1_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_92;
      FIX::ComplexEventCondition ComplexEventCondition_92(1);
      noComplexEvents_1_1_0.set(ComplexEventCondition_92);
      ComplexEvents_NoComplexEvents_92.insert(ComplexEventCondition_92.getString());
      FIX::ComplexEventPrice ComplexEventPrice_92;
      ComplexEventPrice_92.setString("11211126");
      noComplexEvents_1_1_0.set(ComplexEventPrice_92);
      ComplexEvents_NoComplexEvents_92.insert(ComplexEventPrice_92.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_92(2);
      noComplexEvents_1_1_0.set(ComplexEventPriceBoundaryMethod_92);
      ComplexEvents_NoComplexEvents_92.insert(ComplexEventPriceBoundaryMethod_92.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_92;
      ComplexEventPriceBoundaryPrecision_92.setString("28.340000");
      noComplexEvents_1_1_0.set(ComplexEventPriceBoundaryPrecision_92);
      ComplexEvents_NoComplexEvents_92.insert(ComplexEventPriceBoundaryPrecision_92.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_92(3);
      noComplexEvents_1_1_0.set(ComplexEventPriceTimeType_92);
      ComplexEvents_NoComplexEvents_92.insert(ComplexEventPriceTimeType_92.getString());
      FIX::ComplexEventType ComplexEventType_92(7);
      noComplexEvents_1_1_0.set(ComplexEventType_92);
      ComplexEvents_NoComplexEvents_92.insert(ComplexEventType_92.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_92;
      ComplexOptPayoutAmount_92.setString("6560493");
      noComplexEvents_1_1_0.set(ComplexOptPayoutAmount_92);
      ComplexEvents_NoComplexEvents_92.insert(ComplexOptPayoutAmount_92.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_92);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_188;
        FIX::ComplexEventEndDate ComplexEventEndDate_188(FIX::UTCTIMESTAMP(8, 50, 25, 5, 1, 2011));
        noComplexEventDates_1_0_2_0.set(ComplexEventEndDate_188);
        ComplexEventDates_NoComplexEventDates_188.insert(ComplexEventEndDate_188.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_188(FIX::UTCTIMESTAMP(4, 26, 24, 20, 10, 2017));
        noComplexEventDates_1_0_2_0.set(ComplexEventStartDate_188);
        ComplexEventDates_NoComplexEventDates_188.insert(ComplexEventStartDate_188.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_188);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_376;
          FIX::ComplexEventEndTime ComplexEventEndTime_376(FIX::UTCTIMEONLY(16, 28, 26));
          noComplexEventTimes_1_0_0_3_0.set(ComplexEventEndTime_376);
          ComplexEventTimes_NoComplexEventTimes_376.insert(ComplexEventEndTime_376.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_376(FIX::UTCTIMEONLY(6, 54, 22));
          noComplexEventTimes_1_0_0_3_0.set(ComplexEventStartTime_376);
          ComplexEventTimes_NoComplexEventTimes_376.insert(ComplexEventStartTime_376.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_376);

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_0);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_189;
        FIX::ComplexEventEndDate ComplexEventEndDate_189(FIX::UTCTIMESTAMP(15, 25, 0, 26, 9, 2008));
        noComplexEventDates_1_0_2_1.set(ComplexEventEndDate_189);
        ComplexEventDates_NoComplexEventDates_189.insert(ComplexEventEndDate_189.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_189(FIX::UTCTIMESTAMP(19, 10, 45, 16, 1, 2013));
        noComplexEventDates_1_0_2_1.set(ComplexEventStartDate_189);
        ComplexEventDates_NoComplexEventDates_189.insert(ComplexEventStartDate_189.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_189);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_377;
          FIX::ComplexEventEndTime ComplexEventEndTime_377(FIX::UTCTIMEONLY(17, 25, 25));
          noComplexEventTimes_1_0_1_3_0.set(ComplexEventEndTime_377);
          ComplexEventTimes_NoComplexEventTimes_377.insert(ComplexEventEndTime_377.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_377(FIX::UTCTIMEONLY(3, 24, 45));
          noComplexEventTimes_1_0_1_3_0.set(ComplexEventStartTime_377);
          ComplexEventTimes_NoComplexEventTimes_377.insert(ComplexEventStartTime_377.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_377);

          noComplexEventDates_1_0_2_1.addGroup(noComplexEventTimes_1_0_1_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_378;
          FIX::ComplexEventEndTime ComplexEventEndTime_378(FIX::UTCTIMEONLY(5, 5, 37));
          noComplexEventTimes_1_0_1_3_1.set(ComplexEventEndTime_378);
          ComplexEventTimes_NoComplexEventTimes_378.insert(ComplexEventEndTime_378.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_378(FIX::UTCTIMEONLY(4, 23, 15));
          noComplexEventTimes_1_0_1_3_1.set(ComplexEventStartTime_378);
          ComplexEventTimes_NoComplexEventTimes_378.insert(ComplexEventStartTime_378.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_378);

          noComplexEventDates_1_0_2_1.addGroup(noComplexEventTimes_1_0_1_3_1);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_379;
          FIX::ComplexEventEndTime ComplexEventEndTime_379(FIX::UTCTIMEONLY(14, 32, 43));
          noComplexEventTimes_1_0_1_3_2.set(ComplexEventEndTime_379);
          ComplexEventTimes_NoComplexEventTimes_379.insert(ComplexEventEndTime_379.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_379(FIX::UTCTIMEONLY(17, 9, 15));
          noComplexEventTimes_1_0_1_3_2.set(ComplexEventStartTime_379);
          ComplexEventTimes_NoComplexEventTimes_379.insert(ComplexEventStartTime_379.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_379);

          noComplexEventDates_1_0_2_1.addGroup(noComplexEventTimes_1_0_1_3_2);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_1);
      }
      noOrders_0_1.addGroup(noComplexEvents_1_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoComplexEvents noComplexEvents_1_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_93;
      FIX::ComplexEventCondition ComplexEventCondition_93(1);
      noComplexEvents_1_1_1.set(ComplexEventCondition_93);
      ComplexEvents_NoComplexEvents_93.insert(ComplexEventCondition_93.getString());
      FIX::ComplexEventPrice ComplexEventPrice_93;
      ComplexEventPrice_93.setString("11914707");
      noComplexEvents_1_1_1.set(ComplexEventPrice_93);
      ComplexEvents_NoComplexEvents_93.insert(ComplexEventPrice_93.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_93(1);
      noComplexEvents_1_1_1.set(ComplexEventPriceBoundaryMethod_93);
      ComplexEvents_NoComplexEvents_93.insert(ComplexEventPriceBoundaryMethod_93.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_93;
      ComplexEventPriceBoundaryPrecision_93.setString("40.640000");
      noComplexEvents_1_1_1.set(ComplexEventPriceBoundaryPrecision_93);
      ComplexEvents_NoComplexEvents_93.insert(ComplexEventPriceBoundaryPrecision_93.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_93(1);
      noComplexEvents_1_1_1.set(ComplexEventPriceTimeType_93);
      ComplexEvents_NoComplexEvents_93.insert(ComplexEventPriceTimeType_93.getString());
      FIX::ComplexEventType ComplexEventType_93(3);
      noComplexEvents_1_1_1.set(ComplexEventType_93);
      ComplexEvents_NoComplexEvents_93.insert(ComplexEventType_93.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_93;
      ComplexOptPayoutAmount_93.setString("5294452");
      noComplexEvents_1_1_1.set(ComplexOptPayoutAmount_93);
      ComplexEvents_NoComplexEvents_93.insert(ComplexOptPayoutAmount_93.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_93);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_190;
        FIX::ComplexEventEndDate ComplexEventEndDate_190(FIX::UTCTIMESTAMP(21, 30, 17, 0, 8, 2013));
        noComplexEventDates_1_1_2_0.set(ComplexEventEndDate_190);
        ComplexEventDates_NoComplexEventDates_190.insert(ComplexEventEndDate_190.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_190(FIX::UTCTIMESTAMP(16, 0, 32, 21, 5, 2001));
        noComplexEventDates_1_1_2_0.set(ComplexEventStartDate_190);
        ComplexEventDates_NoComplexEventDates_190.insert(ComplexEventStartDate_190.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_190);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_380;
          FIX::ComplexEventEndTime ComplexEventEndTime_380(FIX::UTCTIMEONLY(2, 21, 34));
          noComplexEventTimes_1_1_0_3_0.set(ComplexEventEndTime_380);
          ComplexEventTimes_NoComplexEventTimes_380.insert(ComplexEventEndTime_380.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_380(FIX::UTCTIMEONLY(6, 43, 2));
          noComplexEventTimes_1_1_0_3_0.set(ComplexEventStartTime_380);
          ComplexEventTimes_NoComplexEventTimes_380.insert(ComplexEventStartTime_380.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_380);

          noComplexEventDates_1_1_2_0.addGroup(noComplexEventTimes_1_1_0_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_381;
          FIX::ComplexEventEndTime ComplexEventEndTime_381(FIX::UTCTIMEONLY(7, 54, 51));
          noComplexEventTimes_1_1_0_3_1.set(ComplexEventEndTime_381);
          ComplexEventTimes_NoComplexEventTimes_381.insert(ComplexEventEndTime_381.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_381(FIX::UTCTIMEONLY(8, 55, 20));
          noComplexEventTimes_1_1_0_3_1.set(ComplexEventStartTime_381);
          ComplexEventTimes_NoComplexEventTimes_381.insert(ComplexEventStartTime_381.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_381);

          noComplexEventDates_1_1_2_0.addGroup(noComplexEventTimes_1_1_0_3_1);
        }
        noComplexEvents_1_1_1.addGroup(noComplexEventDates_1_1_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_191;
        FIX::ComplexEventEndDate ComplexEventEndDate_191(FIX::UTCTIMESTAMP(16, 51, 9, 25, 3, 2004));
        noComplexEventDates_1_1_2_1.set(ComplexEventEndDate_191);
        ComplexEventDates_NoComplexEventDates_191.insert(ComplexEventEndDate_191.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_191(FIX::UTCTIMESTAMP(6, 57, 36, 27, 6, 2005));
        noComplexEventDates_1_1_2_1.set(ComplexEventStartDate_191);
        ComplexEventDates_NoComplexEventDates_191.insert(ComplexEventStartDate_191.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_191);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_382;
          FIX::ComplexEventEndTime ComplexEventEndTime_382(FIX::UTCTIMEONLY(13, 54, 30));
          noComplexEventTimes_1_1_1_3_0.set(ComplexEventEndTime_382);
          ComplexEventTimes_NoComplexEventTimes_382.insert(ComplexEventEndTime_382.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_382(FIX::UTCTIMEONLY(12, 14, 30));
          noComplexEventTimes_1_1_1_3_0.set(ComplexEventStartTime_382);
          ComplexEventTimes_NoComplexEventTimes_382.insert(ComplexEventStartTime_382.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_382);

          noComplexEventDates_1_1_2_1.addGroup(noComplexEventTimes_1_1_1_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_383;
          FIX::ComplexEventEndTime ComplexEventEndTime_383(FIX::UTCTIMEONLY(21, 24, 6));
          noComplexEventTimes_1_1_1_3_1.set(ComplexEventEndTime_383);
          ComplexEventTimes_NoComplexEventTimes_383.insert(ComplexEventEndTime_383.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_383(FIX::UTCTIMEONLY(13, 53, 29));
          noComplexEventTimes_1_1_1_3_1.set(ComplexEventStartTime_383);
          ComplexEventTimes_NoComplexEventTimes_383.insert(ComplexEventStartTime_383.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_383);

          noComplexEventDates_1_1_2_1.addGroup(noComplexEventTimes_1_1_1_3_1);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_384;
          FIX::ComplexEventEndTime ComplexEventEndTime_384(FIX::UTCTIMEONLY(13, 20, 2));
          noComplexEventTimes_1_1_1_3_2.set(ComplexEventEndTime_384);
          ComplexEventTimes_NoComplexEventTimes_384.insert(ComplexEventEndTime_384.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_384(FIX::UTCTIMEONLY(14, 59, 6));
          noComplexEventTimes_1_1_1_3_2.set(ComplexEventStartTime_384);
          ComplexEventTimes_NoComplexEventTimes_384.insert(ComplexEventStartTime_384.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_384);

          noComplexEventDates_1_1_2_1.addGroup(noComplexEventTimes_1_1_1_3_2);
        }
        noComplexEvents_1_1_1.addGroup(noComplexEventDates_1_1_2_1);
      }
      noOrders_0_1.addGroup(noComplexEvents_1_1_1);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoComplexEvents noComplexEvents_1_1_2;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_94;
      FIX::ComplexEventCondition ComplexEventCondition_94(1);
      noComplexEvents_1_1_2.set(ComplexEventCondition_94);
      ComplexEvents_NoComplexEvents_94.insert(ComplexEventCondition_94.getString());
      FIX::ComplexEventPrice ComplexEventPrice_94;
      ComplexEventPrice_94.setString("5570989");
      noComplexEvents_1_1_2.set(ComplexEventPrice_94);
      ComplexEvents_NoComplexEvents_94.insert(ComplexEventPrice_94.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_94(3);
      noComplexEvents_1_1_2.set(ComplexEventPriceBoundaryMethod_94);
      ComplexEvents_NoComplexEvents_94.insert(ComplexEventPriceBoundaryMethod_94.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_94;
      ComplexEventPriceBoundaryPrecision_94.setString("46.320000");
      noComplexEvents_1_1_2.set(ComplexEventPriceBoundaryPrecision_94);
      ComplexEvents_NoComplexEvents_94.insert(ComplexEventPriceBoundaryPrecision_94.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_94(3);
      noComplexEvents_1_1_2.set(ComplexEventPriceTimeType_94);
      ComplexEvents_NoComplexEvents_94.insert(ComplexEventPriceTimeType_94.getString());
      FIX::ComplexEventType ComplexEventType_94(8);
      noComplexEvents_1_1_2.set(ComplexEventType_94);
      ComplexEvents_NoComplexEvents_94.insert(ComplexEventType_94.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_94;
      ComplexOptPayoutAmount_94.setString("15285608");
      noComplexEvents_1_1_2.set(ComplexOptPayoutAmount_94);
      ComplexEvents_NoComplexEvents_94.insert(ComplexOptPayoutAmount_94.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_94);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_2_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_192;
        FIX::ComplexEventEndDate ComplexEventEndDate_192(FIX::UTCTIMESTAMP(22, 20, 7, 15, 3, 2005));
        noComplexEventDates_1_2_2_0.set(ComplexEventEndDate_192);
        ComplexEventDates_NoComplexEventDates_192.insert(ComplexEventEndDate_192.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_192(FIX::UTCTIMESTAMP(4, 54, 52, 21, 12, 2001));
        noComplexEventDates_1_2_2_0.set(ComplexEventStartDate_192);
        ComplexEventDates_NoComplexEventDates_192.insert(ComplexEventStartDate_192.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_192);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_385;
          FIX::ComplexEventEndTime ComplexEventEndTime_385(FIX::UTCTIMEONLY(14, 19, 34));
          noComplexEventTimes_1_2_0_3_0.set(ComplexEventEndTime_385);
          ComplexEventTimes_NoComplexEventTimes_385.insert(ComplexEventEndTime_385.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_385(FIX::UTCTIMEONLY(9, 25, 39));
          noComplexEventTimes_1_2_0_3_0.set(ComplexEventStartTime_385);
          ComplexEventTimes_NoComplexEventTimes_385.insert(ComplexEventStartTime_385.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_385);

          noComplexEventDates_1_2_2_0.addGroup(noComplexEventTimes_1_2_0_3_0);
        }
        noComplexEvents_1_1_2.addGroup(noComplexEventDates_1_2_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_2_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_193;
        FIX::ComplexEventEndDate ComplexEventEndDate_193(FIX::UTCTIMESTAMP(13, 14, 2, 19, 1, 2000));
        noComplexEventDates_1_2_2_1.set(ComplexEventEndDate_193);
        ComplexEventDates_NoComplexEventDates_193.insert(ComplexEventEndDate_193.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_193(FIX::UTCTIMESTAMP(3, 29, 53, 27, 1, 2014));
        noComplexEventDates_1_2_2_1.set(ComplexEventStartDate_193);
        ComplexEventDates_NoComplexEventDates_193.insert(ComplexEventStartDate_193.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_193);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_386;
          FIX::ComplexEventEndTime ComplexEventEndTime_386(FIX::UTCTIMEONLY(16, 14, 38));
          noComplexEventTimes_1_2_1_3_0.set(ComplexEventEndTime_386);
          ComplexEventTimes_NoComplexEventTimes_386.insert(ComplexEventEndTime_386.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_386(FIX::UTCTIMEONLY(17, 15, 23));
          noComplexEventTimes_1_2_1_3_0.set(ComplexEventStartTime_386);
          ComplexEventTimes_NoComplexEventTimes_386.insert(ComplexEventStartTime_386.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_386);

          noComplexEventDates_1_2_2_1.addGroup(noComplexEventTimes_1_2_1_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_387;
          FIX::ComplexEventEndTime ComplexEventEndTime_387(FIX::UTCTIMEONLY(21, 42, 52));
          noComplexEventTimes_1_2_1_3_1.set(ComplexEventEndTime_387);
          ComplexEventTimes_NoComplexEventTimes_387.insert(ComplexEventEndTime_387.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_387(FIX::UTCTIMEONLY(4, 17, 58));
          noComplexEventTimes_1_2_1_3_1.set(ComplexEventStartTime_387);
          ComplexEventTimes_NoComplexEventTimes_387.insert(ComplexEventStartTime_387.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_387);

          noComplexEventDates_1_2_2_1.addGroup(noComplexEventTimes_1_2_1_3_1);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_388;
          FIX::ComplexEventEndTime ComplexEventEndTime_388(FIX::UTCTIMEONLY(11, 4, 56));
          noComplexEventTimes_1_2_1_3_2.set(ComplexEventEndTime_388);
          ComplexEventTimes_NoComplexEventTimes_388.insert(ComplexEventEndTime_388.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_388(FIX::UTCTIMEONLY(4, 6, 55));
          noComplexEventTimes_1_2_1_3_2.set(ComplexEventStartTime_388);
          ComplexEventTimes_NoComplexEventTimes_388.insert(ComplexEventStartTime_388.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_388);

          noComplexEventDates_1_2_2_1.addGroup(noComplexEventTimes_1_2_1_3_2);
        }
        noComplexEvents_1_1_2.addGroup(noComplexEventDates_1_2_2_1);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_2_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_194;
        FIX::ComplexEventEndDate ComplexEventEndDate_194(FIX::UTCTIMESTAMP(3, 40, 50, 19, 5, 2011));
        noComplexEventDates_1_2_2_2.set(ComplexEventEndDate_194);
        ComplexEventDates_NoComplexEventDates_194.insert(ComplexEventEndDate_194.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_194(FIX::UTCTIMESTAMP(20, 17, 59, 5, 4, 2012));
        noComplexEventDates_1_2_2_2.set(ComplexEventStartDate_194);
        ComplexEventDates_NoComplexEventDates_194.insert(ComplexEventStartDate_194.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_194);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_389;
          FIX::ComplexEventEndTime ComplexEventEndTime_389(FIX::UTCTIMEONLY(16, 47, 12));
          noComplexEventTimes_1_2_2_3_0.set(ComplexEventEndTime_389);
          ComplexEventTimes_NoComplexEventTimes_389.insert(ComplexEventEndTime_389.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_389(FIX::UTCTIMEONLY(7, 22, 0));
          noComplexEventTimes_1_2_2_3_0.set(ComplexEventStartTime_389);
          ComplexEventTimes_NoComplexEventTimes_389.insert(ComplexEventStartTime_389.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_389);

          noComplexEventDates_1_2_2_2.addGroup(noComplexEventTimes_1_2_2_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_390;
          FIX::ComplexEventEndTime ComplexEventEndTime_390(FIX::UTCTIMEONLY(1, 4, 13));
          noComplexEventTimes_1_2_2_3_1.set(ComplexEventEndTime_390);
          ComplexEventTimes_NoComplexEventTimes_390.insert(ComplexEventEndTime_390.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_390(FIX::UTCTIMEONLY(12, 20, 38));
          noComplexEventTimes_1_2_2_3_1.set(ComplexEventStartTime_390);
          ComplexEventTimes_NoComplexEventTimes_390.insert(ComplexEventStartTime_390.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_390);

          noComplexEventDates_1_2_2_2.addGroup(noComplexEventTimes_1_2_2_3_1);
        }
        noComplexEvents_1_1_2.addGroup(noComplexEventDates_1_2_2_2);
      }
      noOrders_0_1.addGroup(noComplexEvents_1_1_2);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::NewOrderList::NoOrders::NoEvents noEvents_1_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_99;
      FIX::EventDate EventDate_99("LOCALMKTDATE_133682379");
      noEvents_1_1_0.set(EventDate_99);
      EvntGrp_NoEvents_99.insert(EventDate_99.getString());
      FIX::EventPx EventPx_99;
      EventPx_99.setString("3900508");
      noEvents_1_1_0.set(EventPx_99);
      EvntGrp_NoEvents_99.insert(EventPx_99.getString());
      FIX::EventText EventText_99("STRING_776127654");
      noEvents_1_1_0.set(EventText_99);
      EvntGrp_NoEvents_99.insert(EventText_99.getString());
      FIX::EventTime EventTime_99(FIX::UTCTIMESTAMP(23, 57, 20, 27, 8, 2000));
      noEvents_1_1_0.set(EventTime_99);
      EvntGrp_NoEvents_99.insert(EventTime_99.getString());
      FIX::EventType EventType_99(14);
      noEvents_1_1_0.set(EventType_99);
      EvntGrp_NoEvents_99.insert(EventType_99.getString());
      all_values.push_back(EvntGrp_NoEvents_99);

      noOrders_0_1.addGroup(noEvents_1_1_0);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::NewOrderList::NoOrders::NoInstrumentParties noInstrumentParties_1_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_103;
      FIX::InstrumentPartyID InstrumentPartyID_103("STRING_518674818");
      noInstrumentParties_1_1_0.set(InstrumentPartyID_103);
      InstrumentParties_NoInstrumentParties_103.insert(InstrumentPartyID_103.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_103('1');
      noInstrumentParties_1_1_0.set(InstrumentPartyIDSource_103);
      InstrumentParties_NoInstrumentParties_103.insert(InstrumentPartyIDSource_103.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_103(883327710);
      noInstrumentParties_1_1_0.set(InstrumentPartyRole_103);
      InstrumentParties_NoInstrumentParties_103.insert(InstrumentPartyRole_103.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_103);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderList::NoOrders::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_215;
        FIX::InstrumentPartySubID InstrumentPartySubID_215("STRING_575874257");
        noInstrumentPartySubIDs_1_0_2_0.set(InstrumentPartySubID_215);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_215.insert(InstrumentPartySubID_215.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_215(1745417383);
        noInstrumentPartySubIDs_1_0_2_0.set(InstrumentPartySubIDType_215);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_215.insert(InstrumentPartySubIDType_215.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_215);

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_216;
        FIX::InstrumentPartySubID InstrumentPartySubID_216("STRING_1921267701");
        noInstrumentPartySubIDs_1_0_2_1.set(InstrumentPartySubID_216);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_216.insert(InstrumentPartySubID_216.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_216(1559706889);
        noInstrumentPartySubIDs_1_0_2_1.set(InstrumentPartySubIDType_216);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_216.insert(InstrumentPartySubIDType_216.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_216);

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_1);
      }
      noOrders_0_1.addGroup(noInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoInstrumentParties noInstrumentParties_1_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_104;
      FIX::InstrumentPartyID InstrumentPartyID_104("STRING_411856077");
      noInstrumentParties_1_1_1.set(InstrumentPartyID_104);
      InstrumentParties_NoInstrumentParties_104.insert(InstrumentPartyID_104.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_104('2');
      noInstrumentParties_1_1_1.set(InstrumentPartyIDSource_104);
      InstrumentParties_NoInstrumentParties_104.insert(InstrumentPartyIDSource_104.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_104(585730146);
      noInstrumentParties_1_1_1.set(InstrumentPartyRole_104);
      InstrumentParties_NoInstrumentParties_104.insert(InstrumentPartyRole_104.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_104);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderList::NoOrders::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_217;
        FIX::InstrumentPartySubID InstrumentPartySubID_217("STRING_423080058");
        noInstrumentPartySubIDs_1_1_2_0.set(InstrumentPartySubID_217);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_217.insert(InstrumentPartySubID_217.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_217(1527212780);
        noInstrumentPartySubIDs_1_1_2_0.set(InstrumentPartySubIDType_217);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_217.insert(InstrumentPartySubIDType_217.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_217);

        noInstrumentParties_1_1_1.addGroup(noInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_218;
        FIX::InstrumentPartySubID InstrumentPartySubID_218("STRING_1687631725");
        noInstrumentPartySubIDs_1_1_2_1.set(InstrumentPartySubID_218);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_218.insert(InstrumentPartySubID_218.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_218(490581390);
        noInstrumentPartySubIDs_1_1_2_1.set(InstrumentPartySubIDType_218);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_218.insert(InstrumentPartySubIDType_218.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_218);

        noInstrumentParties_1_1_1.addGroup(noInstrumentPartySubIDs_1_1_2_1);
      }
      noOrders_0_1.addGroup(noInstrumentParties_1_1_1);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::NewOrderList::NoOrders::NoSecurityAltID noSecurityAltID_1_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_106;
      FIX::SecurityAltID SecurityAltID_106("STRING_1973459583");
      noSecurityAltID_1_1_0.set(SecurityAltID_106);
      SecAltIDGrp_NoSecurityAltID_106.insert(SecurityAltID_106.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_106("STRING_1884142962");
      noSecurityAltID_1_1_0.set(SecurityAltIDSource_106);
      SecAltIDGrp_NoSecurityAltID_106.insert(SecurityAltIDSource_106.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_106);

      noOrders_0_1.addGroup(noSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoSecurityAltID noSecurityAltID_1_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_107;
      FIX::SecurityAltID SecurityAltID_107("STRING_1329732191");
      noSecurityAltID_1_1_1.set(SecurityAltID_107);
      SecAltIDGrp_NoSecurityAltID_107.insert(SecurityAltID_107.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_107("STRING_216026833");
      noSecurityAltID_1_1_1.set(SecurityAltIDSource_107);
      SecAltIDGrp_NoSecurityAltID_107.insert(SecurityAltIDSource_107.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_107);

      noOrders_0_1.addGroup(noSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoSecurityAltID noSecurityAltID_1_1_2;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_108;
      FIX::SecurityAltID SecurityAltID_108("STRING_512786969");
      noSecurityAltID_1_1_2.set(SecurityAltID_108);
      SecAltIDGrp_NoSecurityAltID_108.insert(SecurityAltID_108.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_108("STRING_1997729238");
      noSecurityAltID_1_1_2.set(SecurityAltIDSource_108);
      SecAltIDGrp_NoSecurityAltID_108.insert(SecurityAltIDSource_108.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_108);

      noOrders_0_1.addGroup(noSecurityAltID_1_1_2);
    }
    // SecurityXML
    multiset<string> SecurityXML_96;
    FIX::SecurityXML SecurityXML_97("XMLDATA_625812384");
    noOrders_0_1.set(SecurityXML_97);
    FIX::SecurityXMLLen SecurityXMLLen_48(991695986);
    noOrders_0_1.set(SecurityXMLLen_48);
    FIX::SecurityXMLSchema SecurityXMLSchema_48("STRING_190396051");
    noOrders_0_1.set(SecurityXMLSchema_48);
    SecurityXML_96.insert(SecurityXMLSchema_48.getString());
    all_values.push_back(SecurityXML_96);

    // OrderQtyData
    multiset<string> OrderQtyData_11;
    FIX::CashOrderQty CashOrderQty_11;
    CashOrderQty_11.setString("14882460");
    noOrders_0_1.set(CashOrderQty_11);
    OrderQtyData_11.insert(CashOrderQty_11.getString());
    FIX::OrderPercent OrderPercent_11;
    OrderPercent_11.setString("29.930000");
    noOrders_0_1.set(OrderPercent_11);
    OrderQtyData_11.insert(OrderPercent_11.getString());
    FIX::OrderQty OrderQty_22;
    OrderQty_22.setString("3504308");
    noOrders_0_1.set(OrderQty_22);
    OrderQtyData_11.insert(OrderQty_22.getString());
    FIX::RoundingDirection RoundingDirection_11('0');
    noOrders_0_1.set(RoundingDirection_11);
    OrderQtyData_11.insert(RoundingDirection_11.getString());
    FIX::RoundingModulus RoundingModulus_11;
    RoundingModulus_11.setString("21148460");
    noOrders_0_1.set(RoundingModulus_11);
    OrderQtyData_11.insert(RoundingModulus_11.getString());
    all_values.push_back(OrderQtyData_11);

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::NewOrderList::NoOrders::NoPartyIDs noPartyIDs_1_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_65;
      FIX::PartyID PartyID_65("STRING_504793983");
      noPartyIDs_1_1_0.set(PartyID_65);
      Parties_NoPartyIDs_65.insert(PartyID_65.getString());
      FIX::PartyIDSource PartyIDSource_65('2');
      noPartyIDs_1_1_0.set(PartyIDSource_65);
      Parties_NoPartyIDs_65.insert(PartyIDSource_65.getString());
      FIX::PartyRole PartyRole_65(13);
      noPartyIDs_1_1_0.set(PartyRole_65);
      Parties_NoPartyIDs_65.insert(PartyRole_65.getString());
      all_values.push_back(Parties_NoPartyIDs_65);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::NewOrderList::NoOrders::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_129;
        FIX::PartySubID PartySubID_129("STRING_448623821");
        noPartySubIDs_1_0_2_0.set(PartySubID_129);
        PtysSubGrp_NoPartySubIDs_129.insert(PartySubID_129.getString());
        FIX::PartySubIDType PartySubIDType_129(2);
        noPartySubIDs_1_0_2_0.set(PartySubIDType_129);
        PtysSubGrp_NoPartySubIDs_129.insert(PartySubIDType_129.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_129);

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_130;
        FIX::PartySubID PartySubID_130("STRING_492891481");
        noPartySubIDs_1_0_2_1.set(PartySubID_130);
        PtysSubGrp_NoPartySubIDs_130.insert(PartySubID_130.getString());
        FIX::PartySubIDType PartySubIDType_130(15);
        noPartySubIDs_1_0_2_1.set(PartySubIDType_130);
        PtysSubGrp_NoPartySubIDs_130.insert(PartySubIDType_130.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_130);

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_131;
        FIX::PartySubID PartySubID_131("STRING_1657636718");
        noPartySubIDs_1_0_2_2.set(PartySubID_131);
        PtysSubGrp_NoPartySubIDs_131.insert(PartySubID_131.getString());
        FIX::PartySubIDType PartySubIDType_131(30);
        noPartySubIDs_1_0_2_2.set(PartySubIDType_131);
        PtysSubGrp_NoPartySubIDs_131.insert(PartySubIDType_131.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_131);

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_2);
      }
      noOrders_0_1.addGroup(noPartyIDs_1_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoPartyIDs noPartyIDs_1_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_66;
      FIX::PartyID PartyID_66("STRING_1584697632");
      noPartyIDs_1_1_1.set(PartyID_66);
      Parties_NoPartyIDs_66.insert(PartyID_66.getString());
      FIX::PartyIDSource PartyIDSource_66('4');
      noPartyIDs_1_1_1.set(PartyIDSource_66);
      Parties_NoPartyIDs_66.insert(PartyIDSource_66.getString());
      FIX::PartyRole PartyRole_66(58);
      noPartyIDs_1_1_1.set(PartyRole_66);
      Parties_NoPartyIDs_66.insert(PartyRole_66.getString());
      all_values.push_back(Parties_NoPartyIDs_66);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::NewOrderList::NoOrders::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_132;
        FIX::PartySubID PartySubID_132("STRING_423814519");
        noPartySubIDs_1_1_2_0.set(PartySubID_132);
        PtysSubGrp_NoPartySubIDs_132.insert(PartySubID_132.getString());
        FIX::PartySubIDType PartySubIDType_132(23);
        noPartySubIDs_1_1_2_0.set(PartySubIDType_132);
        PtysSubGrp_NoPartySubIDs_132.insert(PartySubIDType_132.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_132);

        noPartyIDs_1_1_1.addGroup(noPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_133;
        FIX::PartySubID PartySubID_133("STRING_950821644");
        noPartySubIDs_1_1_2_1.set(PartySubID_133);
        PtysSubGrp_NoPartySubIDs_133.insert(PartySubID_133.getString());
        FIX::PartySubIDType PartySubIDType_133(15);
        noPartySubIDs_1_1_2_1.set(PartySubIDType_133);
        PtysSubGrp_NoPartySubIDs_133.insert(PartySubIDType_133.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_133);

        noPartyIDs_1_1_1.addGroup(noPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_134;
        FIX::PartySubID PartySubID_134("STRING_836649115");
        noPartySubIDs_1_1_2_2.set(PartySubID_134);
        PtysSubGrp_NoPartySubIDs_134.insert(PartySubID_134.getString());
        FIX::PartySubIDType PartySubIDType_134(26);
        noPartySubIDs_1_1_2_2.set(PartySubIDType_134);
        PtysSubGrp_NoPartySubIDs_134.insert(PartySubIDType_134.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_134);

        noPartyIDs_1_1_1.addGroup(noPartySubIDs_1_1_2_2);
      }
      noOrders_0_1.addGroup(noPartyIDs_1_1_1);
    }
    // PegInstructions
    multiset<string> PegInstructions_5;
    FIX::PegLimitType PegLimitType_5(1);
    noOrders_0_1.set(PegLimitType_5);
    PegInstructions_5.insert(PegLimitType_5.getString());
    FIX::PegMoveType PegMoveType_5(0);
    noOrders_0_1.set(PegMoveType_5);
    PegInstructions_5.insert(PegMoveType_5.getString());
    FIX::PegOffsetType PegOffsetType_5(2);
    noOrders_0_1.set(PegOffsetType_5);
    PegInstructions_5.insert(PegOffsetType_5.getString());
    FIX::PegOffsetValue PegOffsetValue_5;
    PegOffsetValue_5.setString("16649567");
    noOrders_0_1.set(PegOffsetValue_5);
    PegInstructions_5.insert(PegOffsetValue_5.getString());
    FIX::PegPriceType PegPriceType_5(7);
    noOrders_0_1.set(PegPriceType_5);
    PegInstructions_5.insert(PegPriceType_5.getString());
    FIX::PegRoundDirection PegRoundDirection_5(1);
    noOrders_0_1.set(PegRoundDirection_5);
    PegInstructions_5.insert(PegRoundDirection_5.getString());
    FIX::PegScope PegScope_5(3);
    noOrders_0_1.set(PegScope_5);
    PegInstructions_5.insert(PegScope_5.getString());
    FIX::PegSecurityDesc PegSecurityDesc_5("STRING_1227721640");
    noOrders_0_1.set(PegSecurityDesc_5);
    PegInstructions_5.insert(PegSecurityDesc_5.getString());
    FIX::PegSecurityID PegSecurityID_5("STRING_80288187");
    noOrders_0_1.set(PegSecurityID_5);
    PegInstructions_5.insert(PegSecurityID_5.getString());
    FIX::PegSecurityIDSource PegSecurityIDSource_5("STRING_616118510");
    noOrders_0_1.set(PegSecurityIDSource_5);
    PegInstructions_5.insert(PegSecurityIDSource_5.getString());
    FIX::PegSymbol PegSymbol_5("STRING_2096827341");
    noOrders_0_1.set(PegSymbol_5);
    PegInstructions_5.insert(PegSymbol_5.getString());
    all_values.push_back(PegInstructions_5);

    // PreAllocGrp
    // Group PreAllocGrp.NoAllocs
    {
      FIX50SP2::NewOrderList::NoOrders::NoAllocs noAllocs_1_1_0;
      // PreAllocGrp.NoAllocs
      multiset<string> PreAllocGrp_NoAllocs_12;
      FIX::AllocAccount AllocAccount_25("STRING_1466808596");
      noAllocs_1_1_0.set(AllocAccount_25);
      PreAllocGrp_NoAllocs_12.insert(AllocAccount_25.getString());
      FIX::AllocAcctIDSource AllocAcctIDSource_25(1848549685);
      noAllocs_1_1_0.set(AllocAcctIDSource_25);
      PreAllocGrp_NoAllocs_12.insert(AllocAcctIDSource_25.getString());
      FIX::AllocQty AllocQty_24;
      AllocQty_24.setString("16657504");
      noAllocs_1_1_0.set(AllocQty_24);
      PreAllocGrp_NoAllocs_12.insert(AllocQty_24.getString());
      FIX::AllocSettlCurrency AllocSettlCurrency_19("USD");
      noAllocs_1_1_0.set(AllocSettlCurrency_19);
      PreAllocGrp_NoAllocs_12.insert(AllocSettlCurrency_19.getString());
      FIX::IndividualAllocID IndividualAllocID_25("STRING_11158244");
      noAllocs_1_1_0.set(IndividualAllocID_25);
      PreAllocGrp_NoAllocs_12.insert(IndividualAllocID_25.getString());
      all_values.push_back(PreAllocGrp_NoAllocs_12);

      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_0_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_67;
        FIX::NestedPartyID NestedPartyID_67("STRING_884209153");
        noNestedPartyIDs_1_0_2_0.set(NestedPartyID_67);
        NestedParties_NoNestedPartyIDs_67.insert(NestedPartyID_67.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_67('1');
        noNestedPartyIDs_1_0_2_0.set(NestedPartyIDSource_67);
        NestedParties_NoNestedPartyIDs_67.insert(NestedPartyIDSource_67.getString());
        FIX::NestedPartyRole NestedPartyRole_67(65642651);
        noNestedPartyIDs_1_0_2_0.set(NestedPartyRole_67);
        NestedParties_NoNestedPartyIDs_67.insert(NestedPartyRole_67.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_67);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_134;
          FIX::NestedPartySubID NestedPartySubID_134("STRING_1548130632");
          noNestedPartySubIDs_1_0_0_3_0.set(NestedPartySubID_134);
          NstdPtysSubGrp_NoNestedPartySubIDs_134.insert(NestedPartySubID_134.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_134(1190488360);
          noNestedPartySubIDs_1_0_0_3_0.set(NestedPartySubIDType_134);
          NstdPtysSubGrp_NoNestedPartySubIDs_134.insert(NestedPartySubIDType_134.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_134);

          noNestedPartyIDs_1_0_2_0.addGroup(noNestedPartySubIDs_1_0_0_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_135;
          FIX::NestedPartySubID NestedPartySubID_135("STRING_1241256800");
          noNestedPartySubIDs_1_0_0_3_1.set(NestedPartySubID_135);
          NstdPtysSubGrp_NoNestedPartySubIDs_135.insert(NestedPartySubID_135.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_135(1055047556);
          noNestedPartySubIDs_1_0_0_3_1.set(NestedPartySubIDType_135);
          NstdPtysSubGrp_NoNestedPartySubIDs_135.insert(NestedPartySubIDType_135.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_135);

          noNestedPartyIDs_1_0_2_0.addGroup(noNestedPartySubIDs_1_0_0_3_1);
        }
        noAllocs_1_1_0.addGroup(noNestedPartyIDs_1_0_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_0_2_1;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_68;
        FIX::NestedPartyID NestedPartyID_68("STRING_2141310004");
        noNestedPartyIDs_1_0_2_1.set(NestedPartyID_68);
        NestedParties_NoNestedPartyIDs_68.insert(NestedPartyID_68.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_68('1');
        noNestedPartyIDs_1_0_2_1.set(NestedPartyIDSource_68);
        NestedParties_NoNestedPartyIDs_68.insert(NestedPartyIDSource_68.getString());
        FIX::NestedPartyRole NestedPartyRole_68(1891696671);
        noNestedPartyIDs_1_0_2_1.set(NestedPartyRole_68);
        NestedParties_NoNestedPartyIDs_68.insert(NestedPartyRole_68.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_68);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_1_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_136;
          FIX::NestedPartySubID NestedPartySubID_136("STRING_2074991436");
          noNestedPartySubIDs_1_0_1_3_0.set(NestedPartySubID_136);
          NstdPtysSubGrp_NoNestedPartySubIDs_136.insert(NestedPartySubID_136.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_136(431107729);
          noNestedPartySubIDs_1_0_1_3_0.set(NestedPartySubIDType_136);
          NstdPtysSubGrp_NoNestedPartySubIDs_136.insert(NestedPartySubIDType_136.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_136);

          noNestedPartyIDs_1_0_2_1.addGroup(noNestedPartySubIDs_1_0_1_3_0);
        }
        noAllocs_1_1_0.addGroup(noNestedPartyIDs_1_0_2_1);
      }
      noOrders_0_1.addGroup(noAllocs_1_1_0);
    }
    // SpreadOrBenchmarkCurveData
    multiset<string> SpreadOrBenchmarkCurveData_16;
    FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_16("CAN");
    noOrders_0_1.set(BenchmarkCurveCurrency_16);
    SpreadOrBenchmarkCurveData_16.insert(BenchmarkCurveCurrency_16.getString());
    FIX::BenchmarkCurveName BenchmarkCurveName_16("STRING_Euribor");
    noOrders_0_1.set(BenchmarkCurveName_16);
    SpreadOrBenchmarkCurveData_16.insert(BenchmarkCurveName_16.getString());
    FIX::BenchmarkCurvePoint BenchmarkCurvePoint_16("STRING_1939275329");
    noOrders_0_1.set(BenchmarkCurvePoint_16);
    SpreadOrBenchmarkCurveData_16.insert(BenchmarkCurvePoint_16.getString());
    FIX::BenchmarkPrice BenchmarkPrice_16;
    BenchmarkPrice_16.setString("937370");
    noOrders_0_1.set(BenchmarkPrice_16);
    SpreadOrBenchmarkCurveData_16.insert(BenchmarkPrice_16.getString());
    FIX::BenchmarkPriceType BenchmarkPriceType_16(388636478);
    noOrders_0_1.set(BenchmarkPriceType_16);
    SpreadOrBenchmarkCurveData_16.insert(BenchmarkPriceType_16.getString());
    FIX::BenchmarkSecurityID BenchmarkSecurityID_16("STRING_2019563516");
    noOrders_0_1.set(BenchmarkSecurityID_16);
    SpreadOrBenchmarkCurveData_16.insert(BenchmarkSecurityID_16.getString());
    FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_16("STRING_709855574");
    noOrders_0_1.set(BenchmarkSecurityIDSource_16);
    SpreadOrBenchmarkCurveData_16.insert(BenchmarkSecurityIDSource_16.getString());
    FIX::Spread Spread_16;
    Spread_16.setString("3379801");
    noOrders_0_1.set(Spread_16);
    SpreadOrBenchmarkCurveData_16.insert(Spread_16.getString());
    all_values.push_back(SpreadOrBenchmarkCurveData_16);

    // Stipulations
    // Group Stipulations.NoStipulations
    {
      FIX50SP2::NewOrderList::NoOrders::NoStipulations noStipulations_1_1_0;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_25;
      FIX::StipulationType StipulationType_25("STRING_TEXT");
      noStipulations_1_1_0.set(StipulationType_25);
      Stipulations_NoStipulations_25.insert(StipulationType_25.getString());
      FIX::StipulationValue StipulationValue_25("STRING_39046209");
      noStipulations_1_1_0.set(StipulationValue_25);
      Stipulations_NoStipulations_25.insert(StipulationValue_25.getString());
      all_values.push_back(Stipulations_NoStipulations_25);

      noOrders_0_1.addGroup(noStipulations_1_1_0);
    }
    // StrategyParametersGrp
    // Group StrategyParametersGrp.NoStrategyParameters
    {
      FIX50SP2::NewOrderList::NoOrders::NoStrategyParameters noStrategyParameters_1_1_0;
      // StrategyParametersGrp.NoStrategyParameters
      multiset<string> StrategyParametersGrp_NoStrategyParameters_9;
      FIX::StrategyParameterName StrategyParameterName_9("STRING_1944612939");
      noStrategyParameters_1_1_0.set(StrategyParameterName_9);
      StrategyParametersGrp_NoStrategyParameters_9.insert(StrategyParameterName_9.getString());
      FIX::StrategyParameterType StrategyParameterType_9(8);
      noStrategyParameters_1_1_0.set(StrategyParameterType_9);
      StrategyParametersGrp_NoStrategyParameters_9.insert(StrategyParameterType_9.getString());
      FIX::StrategyParameterValue StrategyParameterValue_9("STRING_2134070693");
      noStrategyParameters_1_1_0.set(StrategyParameterValue_9);
      StrategyParametersGrp_NoStrategyParameters_9.insert(StrategyParameterValue_9.getString());
      all_values.push_back(StrategyParametersGrp_NoStrategyParameters_9);

      noOrders_0_1.addGroup(noStrategyParameters_1_1_0);
    }
    // TrdgSesGrp
    // Group TrdgSesGrp.NoTradingSessions
    {
      FIX50SP2::NewOrderList::NoOrders::NoTradingSessions noTradingSessions_1_1_0;
      // TrdgSesGrp.NoTradingSessions
      multiset<string> TrdgSesGrp_NoTradingSessions_12;
      FIX::TradingSessionID TradingSessionID_43("STRING_4");
      noTradingSessions_1_1_0.set(TradingSessionID_43);
      TrdgSesGrp_NoTradingSessions_12.insert(TradingSessionID_43.getString());
      FIX::TradingSessionSubID TradingSessionSubID_43("STRING_4");
      noTradingSessions_1_1_0.set(TradingSessionSubID_43);
      TrdgSesGrp_NoTradingSessions_12.insert(TradingSessionSubID_43.getString());
      all_values.push_back(TrdgSesGrp_NoTradingSessions_12);

      noOrders_0_1.addGroup(noTradingSessions_1_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoTradingSessions noTradingSessions_1_1_1;
      // TrdgSesGrp.NoTradingSessions
      multiset<string> TrdgSesGrp_NoTradingSessions_13;
      FIX::TradingSessionID TradingSessionID_44("STRING_2");
      noTradingSessions_1_1_1.set(TradingSessionID_44);
      TrdgSesGrp_NoTradingSessions_13.insert(TradingSessionID_44.getString());
      FIX::TradingSessionSubID TradingSessionSubID_44("STRING_6");
      noTradingSessions_1_1_1.set(TradingSessionSubID_44);
      TrdgSesGrp_NoTradingSessions_13.insert(TradingSessionSubID_44.getString());
      all_values.push_back(TrdgSesGrp_NoTradingSessions_13);

      noOrders_0_1.addGroup(noTradingSessions_1_1_1);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoTradingSessions noTradingSessions_1_1_2;
      // TrdgSesGrp.NoTradingSessions
      multiset<string> TrdgSesGrp_NoTradingSessions_14;
      FIX::TradingSessionID TradingSessionID_45("STRING_6");
      noTradingSessions_1_1_2.set(TradingSessionID_45);
      TrdgSesGrp_NoTradingSessions_14.insert(TradingSessionID_45.getString());
      FIX::TradingSessionSubID TradingSessionSubID_45("STRING_3");
      noTradingSessions_1_1_2.set(TradingSessionSubID_45);
      TrdgSesGrp_NoTradingSessions_14.insert(TradingSessionSubID_45.getString());
      all_values.push_back(TrdgSesGrp_NoTradingSessions_14);

      noOrders_0_1.addGroup(noTradingSessions_1_1_2);
    }
    // TriggeringInstruction
    multiset<string> TriggeringInstruction_5;
    FIX::TriggerAction TriggerAction_5('3');
    noOrders_0_1.set(TriggerAction_5);
    TriggeringInstruction_5.insert(TriggerAction_5.getString());
    FIX::TriggerNewPrice TriggerNewPrice_5;
    TriggerNewPrice_5.setString("15320614");
    noOrders_0_1.set(TriggerNewPrice_5);
    TriggeringInstruction_5.insert(TriggerNewPrice_5.getString());
    FIX::TriggerNewQty TriggerNewQty_5;
    TriggerNewQty_5.setString("16755153");
    noOrders_0_1.set(TriggerNewQty_5);
    TriggeringInstruction_5.insert(TriggerNewQty_5.getString());
    FIX::TriggerOrderType TriggerOrderType_5('2');
    noOrders_0_1.set(TriggerOrderType_5);
    TriggeringInstruction_5.insert(TriggerOrderType_5.getString());
    FIX::TriggerPrice TriggerPrice_5;
    TriggerPrice_5.setString("12762744");
    noOrders_0_1.set(TriggerPrice_5);
    TriggeringInstruction_5.insert(TriggerPrice_5.getString());
    FIX::TriggerPriceDirection TriggerPriceDirection_5('U');
    noOrders_0_1.set(TriggerPriceDirection_5);
    TriggeringInstruction_5.insert(TriggerPriceDirection_5.getString());
    FIX::TriggerPriceType TriggerPriceType_5('6');
    noOrders_0_1.set(TriggerPriceType_5);
    TriggeringInstruction_5.insert(TriggerPriceType_5.getString());
    FIX::TriggerPriceTypeScope TriggerPriceTypeScope_5('2');
    noOrders_0_1.set(TriggerPriceTypeScope_5);
    TriggeringInstruction_5.insert(TriggerPriceTypeScope_5.getString());
    FIX::TriggerSecurityDesc TriggerSecurityDesc_5("STRING_1494558558");
    noOrders_0_1.set(TriggerSecurityDesc_5);
    TriggeringInstruction_5.insert(TriggerSecurityDesc_5.getString());
    FIX::TriggerSecurityID TriggerSecurityID_5("STRING_835262583");
    noOrders_0_1.set(TriggerSecurityID_5);
    TriggeringInstruction_5.insert(TriggerSecurityID_5.getString());
    FIX::TriggerSecurityIDSource TriggerSecurityIDSource_5("STRING_868297048");
    noOrders_0_1.set(TriggerSecurityIDSource_5);
    TriggeringInstruction_5.insert(TriggerSecurityIDSource_5.getString());
    FIX::TriggerSymbol TriggerSymbol_5("STRING_1286350239");
    noOrders_0_1.set(TriggerSymbol_5);
    TriggeringInstruction_5.insert(TriggerSymbol_5.getString());
    FIX::TriggerTradingSessionID TriggerTradingSessionID_5("STRING_928999647");
    noOrders_0_1.set(TriggerTradingSessionID_5);
    TriggeringInstruction_5.insert(TriggerTradingSessionID_5.getString());
    FIX::TriggerTradingSessionSubID TriggerTradingSessionSubID_5("STRING_1256933527");
    noOrders_0_1.set(TriggerTradingSessionSubID_5);
    TriggeringInstruction_5.insert(TriggerTradingSessionSubID_5.getString());
    FIX::TriggerType TriggerType_5('1');
    noOrders_0_1.set(TriggerType_5);
    TriggeringInstruction_5.insert(TriggerType_5.getString());
    all_values.push_back(TriggeringInstruction_5);

    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::NewOrderList::NoOrders::NoUnderlyings noUnderlyings_1_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_62;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_62("DATA_1594913699");
      noUnderlyings_1_1_0.set(EncodedUnderlyingIssuer_62);
      UnderlyingInstrument_62.insert(EncodedUnderlyingIssuer_62.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_62(1615592146);
      noUnderlyings_1_1_0.set(EncodedUnderlyingIssuerLen_62);
      UnderlyingInstrument_62.insert(EncodedUnderlyingIssuerLen_62.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_62("DATA_1668035743");
      noUnderlyings_1_1_0.set(EncodedUnderlyingSecurityDesc_62);
      UnderlyingInstrument_62.insert(EncodedUnderlyingSecurityDesc_62.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_62(1633959908);
      noUnderlyings_1_1_0.set(EncodedUnderlyingSecurityDescLen_62);
      UnderlyingInstrument_62.insert(EncodedUnderlyingSecurityDescLen_62.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_62;
      UnderlyingAdjustedQuantity_62.setString("15910209");
      noUnderlyings_1_1_0.set(UnderlyingAdjustedQuantity_62);
      UnderlyingInstrument_62.insert(UnderlyingAdjustedQuantity_62.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_62;
      UnderlyingAllocationPercent_62.setString("50.340000");
      noUnderlyings_1_1_0.set(UnderlyingAllocationPercent_62);
      UnderlyingInstrument_62.insert(UnderlyingAllocationPercent_62.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_62;
      UnderlyingAttachmentPoint_62.setString("85.520000");
      noUnderlyings_1_1_0.set(UnderlyingAttachmentPoint_62);
      UnderlyingInstrument_62.insert(UnderlyingAttachmentPoint_62.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_62("STRING_1577607992");
      noUnderlyings_1_1_0.set(UnderlyingCFICode_62);
      UnderlyingInstrument_62.insert(UnderlyingCFICode_62.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_62("STRING_1890722992");
      noUnderlyings_1_1_0.set(UnderlyingCPProgram_62);
      UnderlyingInstrument_62.insert(UnderlyingCPProgram_62.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_62("STRING_1049406349");
      noUnderlyings_1_1_0.set(UnderlyingCPRegType_62);
      UnderlyingInstrument_62.insert(UnderlyingCPRegType_62.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_62;
      UnderlyingCapValue_62.setString("5064912");
      noUnderlyings_1_1_0.set(UnderlyingCapValue_62);
      UnderlyingInstrument_62.insert(UnderlyingCapValue_62.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_62;
      UnderlyingCashAmount_62.setString("2344399");
      noUnderlyings_1_1_0.set(UnderlyingCashAmount_62);
      UnderlyingInstrument_62.insert(UnderlyingCashAmount_62.getString());
      FIX::UnderlyingCashType UnderlyingCashType_62("STRING_FIXED");
      noUnderlyings_1_1_0.set(UnderlyingCashType_62);
      UnderlyingInstrument_62.insert(UnderlyingCashType_62.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_62;
      UnderlyingContractMultiplier_62.setString("9835051");
      noUnderlyings_1_1_0.set(UnderlyingContractMultiplier_62);
      UnderlyingInstrument_62.insert(UnderlyingContractMultiplier_62.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_62(1916128922);
      noUnderlyings_1_1_0.set(UnderlyingContractMultiplierUnit_62);
      UnderlyingInstrument_62.insert(UnderlyingContractMultiplierUnit_62.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_62("COUNTRY_2077719659");
      noUnderlyings_1_1_0.set(UnderlyingCountryOfIssue_62);
      UnderlyingInstrument_62.insert(UnderlyingCountryOfIssue_62.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_62("LOCALMKTDATE_368082971");
      noUnderlyings_1_1_0.set(UnderlyingCouponPaymentDate_62);
      UnderlyingInstrument_62.insert(UnderlyingCouponPaymentDate_62.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_62;
      UnderlyingCouponRate_62.setString("5.990000");
      noUnderlyings_1_1_0.set(UnderlyingCouponRate_62);
      UnderlyingInstrument_62.insert(UnderlyingCouponRate_62.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_62("STRING_1393009876");
      noUnderlyings_1_1_0.set(UnderlyingCreditRating_62);
      UnderlyingInstrument_62.insert(UnderlyingCreditRating_62.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_62("CHF");
      noUnderlyings_1_1_0.set(UnderlyingCurrency_62);
      UnderlyingInstrument_62.insert(UnderlyingCurrency_62.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_62;
      UnderlyingCurrentValue_62.setString("6358078");
      noUnderlyings_1_1_0.set(UnderlyingCurrentValue_62);
      UnderlyingInstrument_62.insert(UnderlyingCurrentValue_62.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_62;
      UnderlyingDetachmentPoint_62.setString("60.140000");
      noUnderlyings_1_1_0.set(UnderlyingDetachmentPoint_62);
      UnderlyingInstrument_62.insert(UnderlyingDetachmentPoint_62.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_62;
      UnderlyingDirtyPrice_62.setString("14799420");
      noUnderlyings_1_1_0.set(UnderlyingDirtyPrice_62);
      UnderlyingInstrument_62.insert(UnderlyingDirtyPrice_62.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_62;
      UnderlyingEndPrice_62.setString("14710704");
      noUnderlyings_1_1_0.set(UnderlyingEndPrice_62);
      UnderlyingInstrument_62.insert(UnderlyingEndPrice_62.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_62;
      UnderlyingEndValue_62.setString("20725530");
      noUnderlyings_1_1_0.set(UnderlyingEndValue_62);
      UnderlyingInstrument_62.insert(UnderlyingEndValue_62.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_62(618808611);
      noUnderlyings_1_1_0.set(UnderlyingExerciseStyle_62);
      UnderlyingInstrument_62.insert(UnderlyingExerciseStyle_62.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_62;
      UnderlyingFXRate_62.setString("2525864");
      noUnderlyings_1_1_0.set(UnderlyingFXRate_62);
      UnderlyingInstrument_62.insert(UnderlyingFXRate_62.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_62('M');
      noUnderlyings_1_1_0.set(UnderlyingFXRateCalc_62);
      UnderlyingInstrument_62.insert(UnderlyingFXRateCalc_62.getString());
      FIX::UnderlyingFactor UnderlyingFactor_62;
      UnderlyingFactor_62.setString("17772387");
      noUnderlyings_1_1_0.set(UnderlyingFactor_62);
      UnderlyingInstrument_62.insert(UnderlyingFactor_62.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_62(1891441684);
      noUnderlyings_1_1_0.set(UnderlyingFlowScheduleType_62);
      UnderlyingInstrument_62.insert(UnderlyingFlowScheduleType_62.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_62("STRING_629432992");
      noUnderlyings_1_1_0.set(UnderlyingInstrRegistry_62);
      UnderlyingInstrument_62.insert(UnderlyingInstrRegistry_62.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_62("LOCALMKTDATE_1245347217");
      noUnderlyings_1_1_0.set(UnderlyingIssueDate_62);
      UnderlyingInstrument_62.insert(UnderlyingIssueDate_62.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_62("STRING_1411993779");
      noUnderlyings_1_1_0.set(UnderlyingIssuer_62);
      UnderlyingInstrument_62.insert(UnderlyingIssuer_62.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_62("STRING_115909253");
      noUnderlyings_1_1_0.set(UnderlyingLocaleOfIssue_62);
      UnderlyingInstrument_62.insert(UnderlyingLocaleOfIssue_62.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_62("LOCALMKTDATE_688884517");
      noUnderlyings_1_1_0.set(UnderlyingMaturityDate_62);
      UnderlyingInstrument_62.insert(UnderlyingMaturityDate_62.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_62("MONTHYEAR_729675165");
      noUnderlyings_1_1_0.set(UnderlyingMaturityMonthYear_62);
      UnderlyingInstrument_62.insert(UnderlyingMaturityMonthYear_62.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_62("TZTIMEONLY_1015487805");
      noUnderlyings_1_1_0.set(UnderlyingMaturityTime_62);
      UnderlyingInstrument_62.insert(UnderlyingMaturityTime_62.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_62;
      UnderlyingNotionalPercentageOutstanding_62.setString("88.610000");
      noUnderlyings_1_1_0.set(UnderlyingNotionalPercentageOutstanding_62);
      UnderlyingInstrument_62.insert(UnderlyingNotionalPercentageOutstanding_62.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_62('4');
      noUnderlyings_1_1_0.set(UnderlyingOptAttribute_62);
      UnderlyingInstrument_62.insert(UnderlyingOptAttribute_62.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_62;
      UnderlyingOriginalNotionalPercentageOutstanding_62.setString("41.550000");
      noUnderlyings_1_1_0.set(UnderlyingOriginalNotionalPercentageOutstanding_62);
      UnderlyingInstrument_62.insert(UnderlyingOriginalNotionalPercentageOutstanding_62.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_62("STRING_625500123");
      noUnderlyings_1_1_0.set(UnderlyingPriceUnitOfMeasure_62);
      UnderlyingInstrument_62.insert(UnderlyingPriceUnitOfMeasure_62.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_62;
      UnderlyingPriceUnitOfMeasureQty_62.setString("7073544");
      noUnderlyings_1_1_0.set(UnderlyingPriceUnitOfMeasureQty_62);
      UnderlyingInstrument_62.insert(UnderlyingPriceUnitOfMeasureQty_62.getString());
      FIX::UnderlyingProduct UnderlyingProduct_62(1934086935);
      noUnderlyings_1_1_0.set(UnderlyingProduct_62);
      UnderlyingInstrument_62.insert(UnderlyingProduct_62.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_62(1609005285);
      noUnderlyings_1_1_0.set(UnderlyingPutOrCall_62);
      UnderlyingInstrument_62.insert(UnderlyingPutOrCall_62.getString());
      FIX::UnderlyingPx UnderlyingPx_62;
      UnderlyingPx_62.setString("4759997");
      noUnderlyings_1_1_0.set(UnderlyingPx_62);
      UnderlyingInstrument_62.insert(UnderlyingPx_62.getString());
      FIX::UnderlyingQty UnderlyingQty_62;
      UnderlyingQty_62.setString("18643229");
      noUnderlyings_1_1_0.set(UnderlyingQty_62);
      UnderlyingInstrument_62.insert(UnderlyingQty_62.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_62("LOCALMKTDATE_1977088257");
      noUnderlyings_1_1_0.set(UnderlyingRedemptionDate_62);
      UnderlyingInstrument_62.insert(UnderlyingRedemptionDate_62.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_62("STRING_1920160335");
      noUnderlyings_1_1_0.set(UnderlyingRepoCollateralSecurityType_62);
      UnderlyingInstrument_62.insert(UnderlyingRepoCollateralSecurityType_62.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_62;
      UnderlyingRepurchaseRate_62.setString("91.740000");
      noUnderlyings_1_1_0.set(UnderlyingRepurchaseRate_62);
      UnderlyingInstrument_62.insert(UnderlyingRepurchaseRate_62.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_62(1473962061);
      noUnderlyings_1_1_0.set(UnderlyingRepurchaseTerm_62);
      UnderlyingInstrument_62.insert(UnderlyingRepurchaseTerm_62.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_62("STRING_1905543797");
      noUnderlyings_1_1_0.set(UnderlyingRestructuringType_62);
      UnderlyingInstrument_62.insert(UnderlyingRestructuringType_62.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_62("STRING_1745657055");
      noUnderlyings_1_1_0.set(UnderlyingSecurityDesc_62);
      UnderlyingInstrument_62.insert(UnderlyingSecurityDesc_62.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_62("EXCHANGE_530734427");
      noUnderlyings_1_1_0.set(UnderlyingSecurityExchange_62);
      UnderlyingInstrument_62.insert(UnderlyingSecurityExchange_62.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_62("STRING_1238002168");
      noUnderlyings_1_1_0.set(UnderlyingSecurityID_62);
      UnderlyingInstrument_62.insert(UnderlyingSecurityID_62.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_62("STRING_1069243872");
      noUnderlyings_1_1_0.set(UnderlyingSecurityIDSource_62);
      UnderlyingInstrument_62.insert(UnderlyingSecurityIDSource_62.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_62("STRING_455803841");
      noUnderlyings_1_1_0.set(UnderlyingSecuritySubType_62);
      UnderlyingInstrument_62.insert(UnderlyingSecuritySubType_62.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_62("STRING_1856810779");
      noUnderlyings_1_1_0.set(UnderlyingSecurityType_62);
      UnderlyingInstrument_62.insert(UnderlyingSecurityType_62.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_62("STRING_1321830335");
      noUnderlyings_1_1_0.set(UnderlyingSeniority_62);
      UnderlyingInstrument_62.insert(UnderlyingSeniority_62.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_62("STRING_1637806783");
      noUnderlyings_1_1_0.set(UnderlyingSettlMethod_62);
      UnderlyingInstrument_62.insert(UnderlyingSettlMethod_62.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_62(2);
      noUnderlyings_1_1_0.set(UnderlyingSettlementType_62);
      UnderlyingInstrument_62.insert(UnderlyingSettlementType_62.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_62;
      UnderlyingStartValue_62.setString("10657883");
      noUnderlyings_1_1_0.set(UnderlyingStartValue_62);
      UnderlyingInstrument_62.insert(UnderlyingStartValue_62.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_62("STRING_119756127");
      noUnderlyings_1_1_0.set(UnderlyingStateOrProvinceOfIssue_62);
      UnderlyingInstrument_62.insert(UnderlyingStateOrProvinceOfIssue_62.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_62("CHF");
      noUnderlyings_1_1_0.set(UnderlyingStrikeCurrency_62);
      UnderlyingInstrument_62.insert(UnderlyingStrikeCurrency_62.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_62;
      UnderlyingStrikePrice_62.setString("2356653");
      noUnderlyings_1_1_0.set(UnderlyingStrikePrice_62);
      UnderlyingInstrument_62.insert(UnderlyingStrikePrice_62.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_62("STRING_1273313937");
      noUnderlyings_1_1_0.set(UnderlyingSymbol_62);
      UnderlyingInstrument_62.insert(UnderlyingSymbol_62.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_62("STRING_1059973669");
      noUnderlyings_1_1_0.set(UnderlyingSymbolSfx_62);
      UnderlyingInstrument_62.insert(UnderlyingSymbolSfx_62.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_62("STRING_1251153186");
      noUnderlyings_1_1_0.set(UnderlyingTimeUnit_62);
      UnderlyingInstrument_62.insert(UnderlyingTimeUnit_62.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_62("STRING_1392322798");
      noUnderlyings_1_1_0.set(UnderlyingUnitOfMeasure_62);
      UnderlyingInstrument_62.insert(UnderlyingUnitOfMeasure_62.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_62;
      UnderlyingUnitOfMeasureQty_62.setString("15328881");
      noUnderlyings_1_1_0.set(UnderlyingUnitOfMeasureQty_62);
      UnderlyingInstrument_62.insert(UnderlyingUnitOfMeasureQty_62.getString());
      all_values.push_back(UnderlyingInstrument_62);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_126;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_126("STRING_2017822921");
        noUnderlyingSecurityAltID_1_0_2_0.set(UnderlyingSecurityAltID_126);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_126.insert(UnderlyingSecurityAltID_126.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_126("STRING_92758993");
        noUnderlyingSecurityAltID_1_0_2_0.set(UnderlyingSecurityAltIDSource_126);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_126.insert(UnderlyingSecurityAltIDSource_126.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_126);

        noUnderlyings_1_1_0.addGroup(noUnderlyingSecurityAltID_1_0_2_0);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_109;
        FIX::UnderlyingStipType UnderlyingStipType_109("STRING_1479344559");
        noUnderlyingStips_1_0_2_0.set(UnderlyingStipType_109);
        UnderlyingStipulations_NoUnderlyingStips_109.insert(UnderlyingStipType_109.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_109("STRING_568758729");
        noUnderlyingStips_1_0_2_0.set(UnderlyingStipValue_109);
        UnderlyingStipulations_NoUnderlyingStips_109.insert(UnderlyingStipValue_109.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_109);

        noUnderlyings_1_1_0.addGroup(noUnderlyingStips_1_0_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_0_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_110;
        FIX::UnderlyingStipType UnderlyingStipType_110("STRING_672006278");
        noUnderlyingStips_1_0_2_1.set(UnderlyingStipType_110);
        UnderlyingStipulations_NoUnderlyingStips_110.insert(UnderlyingStipType_110.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_110("STRING_1308949168");
        noUnderlyingStips_1_0_2_1.set(UnderlyingStipValue_110);
        UnderlyingStipulations_NoUnderlyingStips_110.insert(UnderlyingStipValue_110.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_110);

        noUnderlyings_1_1_0.addGroup(noUnderlyingStips_1_0_2_1);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_133;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_133("STRING_1781855452");
        noUndlyInstrumentParties_1_0_2_0.set(UnderlyingInstrumentPartyID_133);
        UndlyInstrumentParties_NoUndlyInstrumentParties_133.insert(UnderlyingInstrumentPartyID_133.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_133('6');
        noUndlyInstrumentParties_1_0_2_0.set(UnderlyingInstrumentPartyIDSource_133);
        UndlyInstrumentParties_NoUndlyInstrumentParties_133.insert(UnderlyingInstrumentPartyIDSource_133.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_133(99495566);
        noUndlyInstrumentParties_1_0_2_0.set(UnderlyingInstrumentPartyRole_133);
        UndlyInstrumentParties_NoUndlyInstrumentParties_133.insert(UnderlyingInstrumentPartyRole_133.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_133);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_266;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_266("STRING_1166162008");
          noUndlyInstrumentPartySubIDs_1_0_0_3_0.set(UnderlyingInstrumentPartySubID_266);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_266.insert(UnderlyingInstrumentPartySubID_266.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_266(1337497734);
          noUndlyInstrumentPartySubIDs_1_0_0_3_0.set(UnderlyingInstrumentPartySubIDType_266);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_266.insert(UnderlyingInstrumentPartySubIDType_266.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_266);

          noUndlyInstrumentParties_1_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_0_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_267;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_267("STRING_301789083");
          noUndlyInstrumentPartySubIDs_1_0_0_3_1.set(UnderlyingInstrumentPartySubID_267);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_267.insert(UnderlyingInstrumentPartySubID_267.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_267(1621965849);
          noUndlyInstrumentPartySubIDs_1_0_0_3_1.set(UnderlyingInstrumentPartySubIDType_267);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_267.insert(UnderlyingInstrumentPartySubIDType_267.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_267);

          noUndlyInstrumentParties_1_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_0_3_1);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_0_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_268;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_268("STRING_1046824866");
          noUndlyInstrumentPartySubIDs_1_0_0_3_2.set(UnderlyingInstrumentPartySubID_268);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_268.insert(UnderlyingInstrumentPartySubID_268.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_268(1623619419);
          noUndlyInstrumentPartySubIDs_1_0_0_3_2.set(UnderlyingInstrumentPartySubIDType_268);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_268.insert(UnderlyingInstrumentPartySubIDType_268.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_268);

          noUndlyInstrumentParties_1_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_0_3_2);
        }
        noUnderlyings_1_1_0.addGroup(noUndlyInstrumentParties_1_0_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_0_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_134;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_134("STRING_1112288984");
        noUndlyInstrumentParties_1_0_2_1.set(UnderlyingInstrumentPartyID_134);
        UndlyInstrumentParties_NoUndlyInstrumentParties_134.insert(UnderlyingInstrumentPartyID_134.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_134('3');
        noUndlyInstrumentParties_1_0_2_1.set(UnderlyingInstrumentPartyIDSource_134);
        UndlyInstrumentParties_NoUndlyInstrumentParties_134.insert(UnderlyingInstrumentPartyIDSource_134.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_134(541924143);
        noUndlyInstrumentParties_1_0_2_1.set(UnderlyingInstrumentPartyRole_134);
        UndlyInstrumentParties_NoUndlyInstrumentParties_134.insert(UnderlyingInstrumentPartyRole_134.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_134);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_269;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_269("STRING_970336488");
          noUndlyInstrumentPartySubIDs_1_0_1_3_0.set(UnderlyingInstrumentPartySubID_269);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_269.insert(UnderlyingInstrumentPartySubID_269.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_269(872222646);
          noUndlyInstrumentPartySubIDs_1_0_1_3_0.set(UnderlyingInstrumentPartySubIDType_269);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_269.insert(UnderlyingInstrumentPartySubIDType_269.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_269);

          noUndlyInstrumentParties_1_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_0_1_3_0);
        }
        noUnderlyings_1_1_0.addGroup(noUndlyInstrumentParties_1_0_2_1);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_0_2_2;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_135;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_135("STRING_1467710492");
        noUndlyInstrumentParties_1_0_2_2.set(UnderlyingInstrumentPartyID_135);
        UndlyInstrumentParties_NoUndlyInstrumentParties_135.insert(UnderlyingInstrumentPartyID_135.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_135('9');
        noUndlyInstrumentParties_1_0_2_2.set(UnderlyingInstrumentPartyIDSource_135);
        UndlyInstrumentParties_NoUndlyInstrumentParties_135.insert(UnderlyingInstrumentPartyIDSource_135.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_135(1932196315);
        noUndlyInstrumentParties_1_0_2_2.set(UnderlyingInstrumentPartyRole_135);
        UndlyInstrumentParties_NoUndlyInstrumentParties_135.insert(UnderlyingInstrumentPartyRole_135.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_135);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_270;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_270("STRING_1488489576");
          noUndlyInstrumentPartySubIDs_1_0_2_3_0.set(UnderlyingInstrumentPartySubID_270);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_270.insert(UnderlyingInstrumentPartySubID_270.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_270(1317600846);
          noUndlyInstrumentPartySubIDs_1_0_2_3_0.set(UnderlyingInstrumentPartySubIDType_270);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_270.insert(UnderlyingInstrumentPartySubIDType_270.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_270);

          noUndlyInstrumentParties_1_0_2_2.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_3_0);
        }
        noUnderlyings_1_1_0.addGroup(noUndlyInstrumentParties_1_0_2_2);
      }
      noOrders_0_1.addGroup(noUnderlyings_1_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoUnderlyings noUnderlyings_1_1_1;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_63;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_63("DATA_1739943723");
      noUnderlyings_1_1_1.set(EncodedUnderlyingIssuer_63);
      UnderlyingInstrument_63.insert(EncodedUnderlyingIssuer_63.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_63(1358828849);
      noUnderlyings_1_1_1.set(EncodedUnderlyingIssuerLen_63);
      UnderlyingInstrument_63.insert(EncodedUnderlyingIssuerLen_63.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_63("DATA_1410359839");
      noUnderlyings_1_1_1.set(EncodedUnderlyingSecurityDesc_63);
      UnderlyingInstrument_63.insert(EncodedUnderlyingSecurityDesc_63.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_63(547627055);
      noUnderlyings_1_1_1.set(EncodedUnderlyingSecurityDescLen_63);
      UnderlyingInstrument_63.insert(EncodedUnderlyingSecurityDescLen_63.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_63;
      UnderlyingAdjustedQuantity_63.setString("6906897");
      noUnderlyings_1_1_1.set(UnderlyingAdjustedQuantity_63);
      UnderlyingInstrument_63.insert(UnderlyingAdjustedQuantity_63.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_63;
      UnderlyingAllocationPercent_63.setString("85.680000");
      noUnderlyings_1_1_1.set(UnderlyingAllocationPercent_63);
      UnderlyingInstrument_63.insert(UnderlyingAllocationPercent_63.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_63;
      UnderlyingAttachmentPoint_63.setString("33.330000");
      noUnderlyings_1_1_1.set(UnderlyingAttachmentPoint_63);
      UnderlyingInstrument_63.insert(UnderlyingAttachmentPoint_63.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_63("STRING_1999638928");
      noUnderlyings_1_1_1.set(UnderlyingCFICode_63);
      UnderlyingInstrument_63.insert(UnderlyingCFICode_63.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_63("STRING_173070337");
      noUnderlyings_1_1_1.set(UnderlyingCPProgram_63);
      UnderlyingInstrument_63.insert(UnderlyingCPProgram_63.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_63("STRING_854005137");
      noUnderlyings_1_1_1.set(UnderlyingCPRegType_63);
      UnderlyingInstrument_63.insert(UnderlyingCPRegType_63.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_63;
      UnderlyingCapValue_63.setString("4875828");
      noUnderlyings_1_1_1.set(UnderlyingCapValue_63);
      UnderlyingInstrument_63.insert(UnderlyingCapValue_63.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_63;
      UnderlyingCashAmount_63.setString("2725659");
      noUnderlyings_1_1_1.set(UnderlyingCashAmount_63);
      UnderlyingInstrument_63.insert(UnderlyingCashAmount_63.getString());
      FIX::UnderlyingCashType UnderlyingCashType_63("STRING_DIFF");
      noUnderlyings_1_1_1.set(UnderlyingCashType_63);
      UnderlyingInstrument_63.insert(UnderlyingCashType_63.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_63;
      UnderlyingContractMultiplier_63.setString("16537448");
      noUnderlyings_1_1_1.set(UnderlyingContractMultiplier_63);
      UnderlyingInstrument_63.insert(UnderlyingContractMultiplier_63.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_63(1610063638);
      noUnderlyings_1_1_1.set(UnderlyingContractMultiplierUnit_63);
      UnderlyingInstrument_63.insert(UnderlyingContractMultiplierUnit_63.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_63("COUNTRY_388339432");
      noUnderlyings_1_1_1.set(UnderlyingCountryOfIssue_63);
      UnderlyingInstrument_63.insert(UnderlyingCountryOfIssue_63.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_63("LOCALMKTDATE_1128227071");
      noUnderlyings_1_1_1.set(UnderlyingCouponPaymentDate_63);
      UnderlyingInstrument_63.insert(UnderlyingCouponPaymentDate_63.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_63;
      UnderlyingCouponRate_63.setString("48.560000");
      noUnderlyings_1_1_1.set(UnderlyingCouponRate_63);
      UnderlyingInstrument_63.insert(UnderlyingCouponRate_63.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_63("STRING_2011958851");
      noUnderlyings_1_1_1.set(UnderlyingCreditRating_63);
      UnderlyingInstrument_63.insert(UnderlyingCreditRating_63.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_63("USD");
      noUnderlyings_1_1_1.set(UnderlyingCurrency_63);
      UnderlyingInstrument_63.insert(UnderlyingCurrency_63.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_63;
      UnderlyingCurrentValue_63.setString("4063993");
      noUnderlyings_1_1_1.set(UnderlyingCurrentValue_63);
      UnderlyingInstrument_63.insert(UnderlyingCurrentValue_63.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_63;
      UnderlyingDetachmentPoint_63.setString("75.190000");
      noUnderlyings_1_1_1.set(UnderlyingDetachmentPoint_63);
      UnderlyingInstrument_63.insert(UnderlyingDetachmentPoint_63.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_63;
      UnderlyingDirtyPrice_63.setString("18656484");
      noUnderlyings_1_1_1.set(UnderlyingDirtyPrice_63);
      UnderlyingInstrument_63.insert(UnderlyingDirtyPrice_63.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_63;
      UnderlyingEndPrice_63.setString("12786219");
      noUnderlyings_1_1_1.set(UnderlyingEndPrice_63);
      UnderlyingInstrument_63.insert(UnderlyingEndPrice_63.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_63;
      UnderlyingEndValue_63.setString("6453043");
      noUnderlyings_1_1_1.set(UnderlyingEndValue_63);
      UnderlyingInstrument_63.insert(UnderlyingEndValue_63.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_63(1961815190);
      noUnderlyings_1_1_1.set(UnderlyingExerciseStyle_63);
      UnderlyingInstrument_63.insert(UnderlyingExerciseStyle_63.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_63;
      UnderlyingFXRate_63.setString("10633346");
      noUnderlyings_1_1_1.set(UnderlyingFXRate_63);
      UnderlyingInstrument_63.insert(UnderlyingFXRate_63.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_63('D');
      noUnderlyings_1_1_1.set(UnderlyingFXRateCalc_63);
      UnderlyingInstrument_63.insert(UnderlyingFXRateCalc_63.getString());
      FIX::UnderlyingFactor UnderlyingFactor_63;
      UnderlyingFactor_63.setString("13028211");
      noUnderlyings_1_1_1.set(UnderlyingFactor_63);
      UnderlyingInstrument_63.insert(UnderlyingFactor_63.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_63(233451858);
      noUnderlyings_1_1_1.set(UnderlyingFlowScheduleType_63);
      UnderlyingInstrument_63.insert(UnderlyingFlowScheduleType_63.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_63("STRING_809144470");
      noUnderlyings_1_1_1.set(UnderlyingInstrRegistry_63);
      UnderlyingInstrument_63.insert(UnderlyingInstrRegistry_63.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_63("LOCALMKTDATE_514166320");
      noUnderlyings_1_1_1.set(UnderlyingIssueDate_63);
      UnderlyingInstrument_63.insert(UnderlyingIssueDate_63.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_63("STRING_1643811697");
      noUnderlyings_1_1_1.set(UnderlyingIssuer_63);
      UnderlyingInstrument_63.insert(UnderlyingIssuer_63.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_63("STRING_1356771525");
      noUnderlyings_1_1_1.set(UnderlyingLocaleOfIssue_63);
      UnderlyingInstrument_63.insert(UnderlyingLocaleOfIssue_63.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_63("LOCALMKTDATE_1204856080");
      noUnderlyings_1_1_1.set(UnderlyingMaturityDate_63);
      UnderlyingInstrument_63.insert(UnderlyingMaturityDate_63.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_63("MONTHYEAR_1475446618");
      noUnderlyings_1_1_1.set(UnderlyingMaturityMonthYear_63);
      UnderlyingInstrument_63.insert(UnderlyingMaturityMonthYear_63.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_63("TZTIMEONLY_428921211");
      noUnderlyings_1_1_1.set(UnderlyingMaturityTime_63);
      UnderlyingInstrument_63.insert(UnderlyingMaturityTime_63.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_63;
      UnderlyingNotionalPercentageOutstanding_63.setString("13.610000");
      noUnderlyings_1_1_1.set(UnderlyingNotionalPercentageOutstanding_63);
      UnderlyingInstrument_63.insert(UnderlyingNotionalPercentageOutstanding_63.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_63('1');
      noUnderlyings_1_1_1.set(UnderlyingOptAttribute_63);
      UnderlyingInstrument_63.insert(UnderlyingOptAttribute_63.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_63;
      UnderlyingOriginalNotionalPercentageOutstanding_63.setString("63.480000");
      noUnderlyings_1_1_1.set(UnderlyingOriginalNotionalPercentageOutstanding_63);
      UnderlyingInstrument_63.insert(UnderlyingOriginalNotionalPercentageOutstanding_63.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_63("STRING_1544594222");
      noUnderlyings_1_1_1.set(UnderlyingPriceUnitOfMeasure_63);
      UnderlyingInstrument_63.insert(UnderlyingPriceUnitOfMeasure_63.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_63;
      UnderlyingPriceUnitOfMeasureQty_63.setString("19210828");
      noUnderlyings_1_1_1.set(UnderlyingPriceUnitOfMeasureQty_63);
      UnderlyingInstrument_63.insert(UnderlyingPriceUnitOfMeasureQty_63.getString());
      FIX::UnderlyingProduct UnderlyingProduct_63(1369476697);
      noUnderlyings_1_1_1.set(UnderlyingProduct_63);
      UnderlyingInstrument_63.insert(UnderlyingProduct_63.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_63(1050855444);
      noUnderlyings_1_1_1.set(UnderlyingPutOrCall_63);
      UnderlyingInstrument_63.insert(UnderlyingPutOrCall_63.getString());
      FIX::UnderlyingPx UnderlyingPx_63;
      UnderlyingPx_63.setString("13836628");
      noUnderlyings_1_1_1.set(UnderlyingPx_63);
      UnderlyingInstrument_63.insert(UnderlyingPx_63.getString());
      FIX::UnderlyingQty UnderlyingQty_63;
      UnderlyingQty_63.setString("17578161");
      noUnderlyings_1_1_1.set(UnderlyingQty_63);
      UnderlyingInstrument_63.insert(UnderlyingQty_63.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_63("LOCALMKTDATE_31598867");
      noUnderlyings_1_1_1.set(UnderlyingRedemptionDate_63);
      UnderlyingInstrument_63.insert(UnderlyingRedemptionDate_63.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_63("STRING_1893067705");
      noUnderlyings_1_1_1.set(UnderlyingRepoCollateralSecurityType_63);
      UnderlyingInstrument_63.insert(UnderlyingRepoCollateralSecurityType_63.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_63;
      UnderlyingRepurchaseRate_63.setString("13.330000");
      noUnderlyings_1_1_1.set(UnderlyingRepurchaseRate_63);
      UnderlyingInstrument_63.insert(UnderlyingRepurchaseRate_63.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_63(124631274);
      noUnderlyings_1_1_1.set(UnderlyingRepurchaseTerm_63);
      UnderlyingInstrument_63.insert(UnderlyingRepurchaseTerm_63.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_63("STRING_640895981");
      noUnderlyings_1_1_1.set(UnderlyingRestructuringType_63);
      UnderlyingInstrument_63.insert(UnderlyingRestructuringType_63.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_63("STRING_2028690680");
      noUnderlyings_1_1_1.set(UnderlyingSecurityDesc_63);
      UnderlyingInstrument_63.insert(UnderlyingSecurityDesc_63.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_63("EXCHANGE_1449708794");
      noUnderlyings_1_1_1.set(UnderlyingSecurityExchange_63);
      UnderlyingInstrument_63.insert(UnderlyingSecurityExchange_63.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_63("STRING_359060746");
      noUnderlyings_1_1_1.set(UnderlyingSecurityID_63);
      UnderlyingInstrument_63.insert(UnderlyingSecurityID_63.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_63("STRING_1159829025");
      noUnderlyings_1_1_1.set(UnderlyingSecurityIDSource_63);
      UnderlyingInstrument_63.insert(UnderlyingSecurityIDSource_63.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_63("STRING_2095013158");
      noUnderlyings_1_1_1.set(UnderlyingSecuritySubType_63);
      UnderlyingInstrument_63.insert(UnderlyingSecuritySubType_63.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_63("STRING_173392289");
      noUnderlyings_1_1_1.set(UnderlyingSecurityType_63);
      UnderlyingInstrument_63.insert(UnderlyingSecurityType_63.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_63("STRING_75680037");
      noUnderlyings_1_1_1.set(UnderlyingSeniority_63);
      UnderlyingInstrument_63.insert(UnderlyingSeniority_63.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_63("STRING_1164213904");
      noUnderlyings_1_1_1.set(UnderlyingSettlMethod_63);
      UnderlyingInstrument_63.insert(UnderlyingSettlMethod_63.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_63(5);
      noUnderlyings_1_1_1.set(UnderlyingSettlementType_63);
      UnderlyingInstrument_63.insert(UnderlyingSettlementType_63.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_63;
      UnderlyingStartValue_63.setString("3091318");
      noUnderlyings_1_1_1.set(UnderlyingStartValue_63);
      UnderlyingInstrument_63.insert(UnderlyingStartValue_63.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_63("STRING_1973358374");
      noUnderlyings_1_1_1.set(UnderlyingStateOrProvinceOfIssue_63);
      UnderlyingInstrument_63.insert(UnderlyingStateOrProvinceOfIssue_63.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_63("CAN");
      noUnderlyings_1_1_1.set(UnderlyingStrikeCurrency_63);
      UnderlyingInstrument_63.insert(UnderlyingStrikeCurrency_63.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_63;
      UnderlyingStrikePrice_63.setString("11826462");
      noUnderlyings_1_1_1.set(UnderlyingStrikePrice_63);
      UnderlyingInstrument_63.insert(UnderlyingStrikePrice_63.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_63("STRING_1047752160");
      noUnderlyings_1_1_1.set(UnderlyingSymbol_63);
      UnderlyingInstrument_63.insert(UnderlyingSymbol_63.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_63("STRING_1280906563");
      noUnderlyings_1_1_1.set(UnderlyingSymbolSfx_63);
      UnderlyingInstrument_63.insert(UnderlyingSymbolSfx_63.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_63("STRING_1611567463");
      noUnderlyings_1_1_1.set(UnderlyingTimeUnit_63);
      UnderlyingInstrument_63.insert(UnderlyingTimeUnit_63.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_63("STRING_2104763521");
      noUnderlyings_1_1_1.set(UnderlyingUnitOfMeasure_63);
      UnderlyingInstrument_63.insert(UnderlyingUnitOfMeasure_63.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_63;
      UnderlyingUnitOfMeasureQty_63.setString("7819398");
      noUnderlyings_1_1_1.set(UnderlyingUnitOfMeasureQty_63);
      UnderlyingInstrument_63.insert(UnderlyingUnitOfMeasureQty_63.getString());
      all_values.push_back(UnderlyingInstrument_63);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_127;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_127("STRING_1501874095");
        noUnderlyingSecurityAltID_1_1_2_0.set(UnderlyingSecurityAltID_127);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_127.insert(UnderlyingSecurityAltID_127.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_127("STRING_555539082");
        noUnderlyingSecurityAltID_1_1_2_0.set(UnderlyingSecurityAltIDSource_127);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_127.insert(UnderlyingSecurityAltIDSource_127.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_127);

        noUnderlyings_1_1_1.addGroup(noUnderlyingSecurityAltID_1_1_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_128;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_128("STRING_2116486861");
        noUnderlyingSecurityAltID_1_1_2_1.set(UnderlyingSecurityAltID_128);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_128.insert(UnderlyingSecurityAltID_128.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_128("STRING_405245891");
        noUnderlyingSecurityAltID_1_1_2_1.set(UnderlyingSecurityAltIDSource_128);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_128.insert(UnderlyingSecurityAltIDSource_128.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_128);

        noUnderlyings_1_1_1.addGroup(noUnderlyingSecurityAltID_1_1_2_1);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2_2;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_129;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_129("STRING_1939201931");
        noUnderlyingSecurityAltID_1_1_2_2.set(UnderlyingSecurityAltID_129);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_129.insert(UnderlyingSecurityAltID_129.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_129("STRING_1726819343");
        noUnderlyingSecurityAltID_1_1_2_2.set(UnderlyingSecurityAltIDSource_129);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_129.insert(UnderlyingSecurityAltIDSource_129.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_129);

        noUnderlyings_1_1_1.addGroup(noUnderlyingSecurityAltID_1_1_2_2);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_111;
        FIX::UnderlyingStipType UnderlyingStipType_111("STRING_1684785988");
        noUnderlyingStips_1_1_2_0.set(UnderlyingStipType_111);
        UnderlyingStipulations_NoUnderlyingStips_111.insert(UnderlyingStipType_111.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_111("STRING_1201627028");
        noUnderlyingStips_1_1_2_0.set(UnderlyingStipValue_111);
        UnderlyingStipulations_NoUnderlyingStips_111.insert(UnderlyingStipValue_111.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_111);

        noUnderlyings_1_1_1.addGroup(noUnderlyingStips_1_1_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_112;
        FIX::UnderlyingStipType UnderlyingStipType_112("STRING_561476033");
        noUnderlyingStips_1_1_2_1.set(UnderlyingStipType_112);
        UnderlyingStipulations_NoUnderlyingStips_112.insert(UnderlyingStipType_112.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_112("STRING_178198321");
        noUnderlyingStips_1_1_2_1.set(UnderlyingStipValue_112);
        UnderlyingStipulations_NoUnderlyingStips_112.insert(UnderlyingStipValue_112.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_112);

        noUnderlyings_1_1_1.addGroup(noUnderlyingStips_1_1_2_1);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_136;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_136("STRING_2011184827");
        noUndlyInstrumentParties_1_1_2_0.set(UnderlyingInstrumentPartyID_136);
        UndlyInstrumentParties_NoUndlyInstrumentParties_136.insert(UnderlyingInstrumentPartyID_136.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_136('5');
        noUndlyInstrumentParties_1_1_2_0.set(UnderlyingInstrumentPartyIDSource_136);
        UndlyInstrumentParties_NoUndlyInstrumentParties_136.insert(UnderlyingInstrumentPartyIDSource_136.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_136(95179437);
        noUndlyInstrumentParties_1_1_2_0.set(UnderlyingInstrumentPartyRole_136);
        UndlyInstrumentParties_NoUndlyInstrumentParties_136.insert(UnderlyingInstrumentPartyRole_136.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_136);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_271;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_271("STRING_710651357");
          noUndlyInstrumentPartySubIDs_1_1_0_3_0.set(UnderlyingInstrumentPartySubID_271);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_271.insert(UnderlyingInstrumentPartySubID_271.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_271(170859475);
          noUndlyInstrumentPartySubIDs_1_1_0_3_0.set(UnderlyingInstrumentPartySubIDType_271);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_271.insert(UnderlyingInstrumentPartySubIDType_271.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_271);

          noUndlyInstrumentParties_1_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_1_0_3_0);
        }
        noUnderlyings_1_1_1.addGroup(noUndlyInstrumentParties_1_1_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_137;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_137("STRING_975444593");
        noUndlyInstrumentParties_1_1_2_1.set(UnderlyingInstrumentPartyID_137);
        UndlyInstrumentParties_NoUndlyInstrumentParties_137.insert(UnderlyingInstrumentPartyID_137.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_137('3');
        noUndlyInstrumentParties_1_1_2_1.set(UnderlyingInstrumentPartyIDSource_137);
        UndlyInstrumentParties_NoUndlyInstrumentParties_137.insert(UnderlyingInstrumentPartyIDSource_137.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_137(479991371);
        noUndlyInstrumentParties_1_1_2_1.set(UnderlyingInstrumentPartyRole_137);
        UndlyInstrumentParties_NoUndlyInstrumentParties_137.insert(UnderlyingInstrumentPartyRole_137.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_137);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_272;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_272("STRING_2029760844");
          noUndlyInstrumentPartySubIDs_1_1_1_3_0.set(UnderlyingInstrumentPartySubID_272);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_272.insert(UnderlyingInstrumentPartySubID_272.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_272(285451316);
          noUndlyInstrumentPartySubIDs_1_1_1_3_0.set(UnderlyingInstrumentPartySubIDType_272);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_272.insert(UnderlyingInstrumentPartySubIDType_272.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_272);

          noUndlyInstrumentParties_1_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_1_3_0);
        }
        noUnderlyings_1_1_1.addGroup(noUndlyInstrumentParties_1_1_2_1);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2_2;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_138;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_138("STRING_1983965572");
        noUndlyInstrumentParties_1_1_2_2.set(UnderlyingInstrumentPartyID_138);
        UndlyInstrumentParties_NoUndlyInstrumentParties_138.insert(UnderlyingInstrumentPartyID_138.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_138('9');
        noUndlyInstrumentParties_1_1_2_2.set(UnderlyingInstrumentPartyIDSource_138);
        UndlyInstrumentParties_NoUndlyInstrumentParties_138.insert(UnderlyingInstrumentPartyIDSource_138.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_138(1566357880);
        noUndlyInstrumentParties_1_1_2_2.set(UnderlyingInstrumentPartyRole_138);
        UndlyInstrumentParties_NoUndlyInstrumentParties_138.insert(UnderlyingInstrumentPartyRole_138.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_138);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_273;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_273("STRING_887309229");
          noUndlyInstrumentPartySubIDs_1_1_2_3_0.set(UnderlyingInstrumentPartySubID_273);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_273.insert(UnderlyingInstrumentPartySubID_273.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_273(200814103);
          noUndlyInstrumentPartySubIDs_1_1_2_3_0.set(UnderlyingInstrumentPartySubIDType_273);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_273.insert(UnderlyingInstrumentPartySubIDType_273.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_273);

          noUndlyInstrumentParties_1_1_2_2.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_3_0);
        }
        noUnderlyings_1_1_1.addGroup(noUndlyInstrumentParties_1_1_2_2);
      }
      noOrders_0_1.addGroup(noUnderlyings_1_1_1);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoUnderlyings noUnderlyings_1_1_2;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_64;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_64("DATA_47575902");
      noUnderlyings_1_1_2.set(EncodedUnderlyingIssuer_64);
      UnderlyingInstrument_64.insert(EncodedUnderlyingIssuer_64.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_64(241699676);
      noUnderlyings_1_1_2.set(EncodedUnderlyingIssuerLen_64);
      UnderlyingInstrument_64.insert(EncodedUnderlyingIssuerLen_64.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_64("DATA_756353185");
      noUnderlyings_1_1_2.set(EncodedUnderlyingSecurityDesc_64);
      UnderlyingInstrument_64.insert(EncodedUnderlyingSecurityDesc_64.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_64(16579115);
      noUnderlyings_1_1_2.set(EncodedUnderlyingSecurityDescLen_64);
      UnderlyingInstrument_64.insert(EncodedUnderlyingSecurityDescLen_64.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_64;
      UnderlyingAdjustedQuantity_64.setString("6469455");
      noUnderlyings_1_1_2.set(UnderlyingAdjustedQuantity_64);
      UnderlyingInstrument_64.insert(UnderlyingAdjustedQuantity_64.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_64;
      UnderlyingAllocationPercent_64.setString("14.680000");
      noUnderlyings_1_1_2.set(UnderlyingAllocationPercent_64);
      UnderlyingInstrument_64.insert(UnderlyingAllocationPercent_64.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_64;
      UnderlyingAttachmentPoint_64.setString("84.580000");
      noUnderlyings_1_1_2.set(UnderlyingAttachmentPoint_64);
      UnderlyingInstrument_64.insert(UnderlyingAttachmentPoint_64.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_64("STRING_1083790326");
      noUnderlyings_1_1_2.set(UnderlyingCFICode_64);
      UnderlyingInstrument_64.insert(UnderlyingCFICode_64.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_64("STRING_85373808");
      noUnderlyings_1_1_2.set(UnderlyingCPProgram_64);
      UnderlyingInstrument_64.insert(UnderlyingCPProgram_64.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_64("STRING_797541839");
      noUnderlyings_1_1_2.set(UnderlyingCPRegType_64);
      UnderlyingInstrument_64.insert(UnderlyingCPRegType_64.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_64;
      UnderlyingCapValue_64.setString("16452663");
      noUnderlyings_1_1_2.set(UnderlyingCapValue_64);
      UnderlyingInstrument_64.insert(UnderlyingCapValue_64.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_64;
      UnderlyingCashAmount_64.setString("2635721");
      noUnderlyings_1_1_2.set(UnderlyingCashAmount_64);
      UnderlyingInstrument_64.insert(UnderlyingCashAmount_64.getString());
      FIX::UnderlyingCashType UnderlyingCashType_64("STRING_DIFF");
      noUnderlyings_1_1_2.set(UnderlyingCashType_64);
      UnderlyingInstrument_64.insert(UnderlyingCashType_64.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_64;
      UnderlyingContractMultiplier_64.setString("15089675");
      noUnderlyings_1_1_2.set(UnderlyingContractMultiplier_64);
      UnderlyingInstrument_64.insert(UnderlyingContractMultiplier_64.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_64(800831197);
      noUnderlyings_1_1_2.set(UnderlyingContractMultiplierUnit_64);
      UnderlyingInstrument_64.insert(UnderlyingContractMultiplierUnit_64.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_64("COUNTRY_1975555337");
      noUnderlyings_1_1_2.set(UnderlyingCountryOfIssue_64);
      UnderlyingInstrument_64.insert(UnderlyingCountryOfIssue_64.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_64("LOCALMKTDATE_1320198227");
      noUnderlyings_1_1_2.set(UnderlyingCouponPaymentDate_64);
      UnderlyingInstrument_64.insert(UnderlyingCouponPaymentDate_64.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_64;
      UnderlyingCouponRate_64.setString("25.540000");
      noUnderlyings_1_1_2.set(UnderlyingCouponRate_64);
      UnderlyingInstrument_64.insert(UnderlyingCouponRate_64.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_64("STRING_2146414812");
      noUnderlyings_1_1_2.set(UnderlyingCreditRating_64);
      UnderlyingInstrument_64.insert(UnderlyingCreditRating_64.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_64("CHF");
      noUnderlyings_1_1_2.set(UnderlyingCurrency_64);
      UnderlyingInstrument_64.insert(UnderlyingCurrency_64.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_64;
      UnderlyingCurrentValue_64.setString("4789225");
      noUnderlyings_1_1_2.set(UnderlyingCurrentValue_64);
      UnderlyingInstrument_64.insert(UnderlyingCurrentValue_64.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_64;
      UnderlyingDetachmentPoint_64.setString("84.930000");
      noUnderlyings_1_1_2.set(UnderlyingDetachmentPoint_64);
      UnderlyingInstrument_64.insert(UnderlyingDetachmentPoint_64.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_64;
      UnderlyingDirtyPrice_64.setString("14331408");
      noUnderlyings_1_1_2.set(UnderlyingDirtyPrice_64);
      UnderlyingInstrument_64.insert(UnderlyingDirtyPrice_64.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_64;
      UnderlyingEndPrice_64.setString("7643738");
      noUnderlyings_1_1_2.set(UnderlyingEndPrice_64);
      UnderlyingInstrument_64.insert(UnderlyingEndPrice_64.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_64;
      UnderlyingEndValue_64.setString("7859604");
      noUnderlyings_1_1_2.set(UnderlyingEndValue_64);
      UnderlyingInstrument_64.insert(UnderlyingEndValue_64.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_64(215686575);
      noUnderlyings_1_1_2.set(UnderlyingExerciseStyle_64);
      UnderlyingInstrument_64.insert(UnderlyingExerciseStyle_64.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_64;
      UnderlyingFXRate_64.setString("1832480");
      noUnderlyings_1_1_2.set(UnderlyingFXRate_64);
      UnderlyingInstrument_64.insert(UnderlyingFXRate_64.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_64('D');
      noUnderlyings_1_1_2.set(UnderlyingFXRateCalc_64);
      UnderlyingInstrument_64.insert(UnderlyingFXRateCalc_64.getString());
      FIX::UnderlyingFactor UnderlyingFactor_64;
      UnderlyingFactor_64.setString("11029958");
      noUnderlyings_1_1_2.set(UnderlyingFactor_64);
      UnderlyingInstrument_64.insert(UnderlyingFactor_64.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_64(384062186);
      noUnderlyings_1_1_2.set(UnderlyingFlowScheduleType_64);
      UnderlyingInstrument_64.insert(UnderlyingFlowScheduleType_64.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_64("STRING_134102058");
      noUnderlyings_1_1_2.set(UnderlyingInstrRegistry_64);
      UnderlyingInstrument_64.insert(UnderlyingInstrRegistry_64.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_64("LOCALMKTDATE_1344695480");
      noUnderlyings_1_1_2.set(UnderlyingIssueDate_64);
      UnderlyingInstrument_64.insert(UnderlyingIssueDate_64.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_64("STRING_1140415371");
      noUnderlyings_1_1_2.set(UnderlyingIssuer_64);
      UnderlyingInstrument_64.insert(UnderlyingIssuer_64.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_64("STRING_150681174");
      noUnderlyings_1_1_2.set(UnderlyingLocaleOfIssue_64);
      UnderlyingInstrument_64.insert(UnderlyingLocaleOfIssue_64.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_64("LOCALMKTDATE_1991641048");
      noUnderlyings_1_1_2.set(UnderlyingMaturityDate_64);
      UnderlyingInstrument_64.insert(UnderlyingMaturityDate_64.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_64("MONTHYEAR_1688486839");
      noUnderlyings_1_1_2.set(UnderlyingMaturityMonthYear_64);
      UnderlyingInstrument_64.insert(UnderlyingMaturityMonthYear_64.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_64("TZTIMEONLY_1894079632");
      noUnderlyings_1_1_2.set(UnderlyingMaturityTime_64);
      UnderlyingInstrument_64.insert(UnderlyingMaturityTime_64.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_64;
      UnderlyingNotionalPercentageOutstanding_64.setString("77.270000");
      noUnderlyings_1_1_2.set(UnderlyingNotionalPercentageOutstanding_64);
      UnderlyingInstrument_64.insert(UnderlyingNotionalPercentageOutstanding_64.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_64('1');
      noUnderlyings_1_1_2.set(UnderlyingOptAttribute_64);
      UnderlyingInstrument_64.insert(UnderlyingOptAttribute_64.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_64;
      UnderlyingOriginalNotionalPercentageOutstanding_64.setString("78.230000");
      noUnderlyings_1_1_2.set(UnderlyingOriginalNotionalPercentageOutstanding_64);
      UnderlyingInstrument_64.insert(UnderlyingOriginalNotionalPercentageOutstanding_64.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_64("STRING_425730438");
      noUnderlyings_1_1_2.set(UnderlyingPriceUnitOfMeasure_64);
      UnderlyingInstrument_64.insert(UnderlyingPriceUnitOfMeasure_64.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_64;
      UnderlyingPriceUnitOfMeasureQty_64.setString("20374327");
      noUnderlyings_1_1_2.set(UnderlyingPriceUnitOfMeasureQty_64);
      UnderlyingInstrument_64.insert(UnderlyingPriceUnitOfMeasureQty_64.getString());
      FIX::UnderlyingProduct UnderlyingProduct_64(277030075);
      noUnderlyings_1_1_2.set(UnderlyingProduct_64);
      UnderlyingInstrument_64.insert(UnderlyingProduct_64.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_64(1934697977);
      noUnderlyings_1_1_2.set(UnderlyingPutOrCall_64);
      UnderlyingInstrument_64.insert(UnderlyingPutOrCall_64.getString());
      FIX::UnderlyingPx UnderlyingPx_64;
      UnderlyingPx_64.setString("6907803");
      noUnderlyings_1_1_2.set(UnderlyingPx_64);
      UnderlyingInstrument_64.insert(UnderlyingPx_64.getString());
      FIX::UnderlyingQty UnderlyingQty_64;
      UnderlyingQty_64.setString("1051017");
      noUnderlyings_1_1_2.set(UnderlyingQty_64);
      UnderlyingInstrument_64.insert(UnderlyingQty_64.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_64("LOCALMKTDATE_1107412556");
      noUnderlyings_1_1_2.set(UnderlyingRedemptionDate_64);
      UnderlyingInstrument_64.insert(UnderlyingRedemptionDate_64.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_64("STRING_54779233");
      noUnderlyings_1_1_2.set(UnderlyingRepoCollateralSecurityType_64);
      UnderlyingInstrument_64.insert(UnderlyingRepoCollateralSecurityType_64.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_64;
      UnderlyingRepurchaseRate_64.setString("29.280000");
      noUnderlyings_1_1_2.set(UnderlyingRepurchaseRate_64);
      UnderlyingInstrument_64.insert(UnderlyingRepurchaseRate_64.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_64(1255571729);
      noUnderlyings_1_1_2.set(UnderlyingRepurchaseTerm_64);
      UnderlyingInstrument_64.insert(UnderlyingRepurchaseTerm_64.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_64("STRING_1605642904");
      noUnderlyings_1_1_2.set(UnderlyingRestructuringType_64);
      UnderlyingInstrument_64.insert(UnderlyingRestructuringType_64.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_64("STRING_582955463");
      noUnderlyings_1_1_2.set(UnderlyingSecurityDesc_64);
      UnderlyingInstrument_64.insert(UnderlyingSecurityDesc_64.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_64("EXCHANGE_57566574");
      noUnderlyings_1_1_2.set(UnderlyingSecurityExchange_64);
      UnderlyingInstrument_64.insert(UnderlyingSecurityExchange_64.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_64("STRING_891300123");
      noUnderlyings_1_1_2.set(UnderlyingSecurityID_64);
      UnderlyingInstrument_64.insert(UnderlyingSecurityID_64.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_64("STRING_1347329314");
      noUnderlyings_1_1_2.set(UnderlyingSecurityIDSource_64);
      UnderlyingInstrument_64.insert(UnderlyingSecurityIDSource_64.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_64("STRING_843526991");
      noUnderlyings_1_1_2.set(UnderlyingSecuritySubType_64);
      UnderlyingInstrument_64.insert(UnderlyingSecuritySubType_64.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_64("STRING_1106986698");
      noUnderlyings_1_1_2.set(UnderlyingSecurityType_64);
      UnderlyingInstrument_64.insert(UnderlyingSecurityType_64.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_64("STRING_1530577398");
      noUnderlyings_1_1_2.set(UnderlyingSeniority_64);
      UnderlyingInstrument_64.insert(UnderlyingSeniority_64.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_64("STRING_930053147");
      noUnderlyings_1_1_2.set(UnderlyingSettlMethod_64);
      UnderlyingInstrument_64.insert(UnderlyingSettlMethod_64.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_64(4);
      noUnderlyings_1_1_2.set(UnderlyingSettlementType_64);
      UnderlyingInstrument_64.insert(UnderlyingSettlementType_64.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_64;
      UnderlyingStartValue_64.setString("19146395");
      noUnderlyings_1_1_2.set(UnderlyingStartValue_64);
      UnderlyingInstrument_64.insert(UnderlyingStartValue_64.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_64("STRING_1064155206");
      noUnderlyings_1_1_2.set(UnderlyingStateOrProvinceOfIssue_64);
      UnderlyingInstrument_64.insert(UnderlyingStateOrProvinceOfIssue_64.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_64("JPY");
      noUnderlyings_1_1_2.set(UnderlyingStrikeCurrency_64);
      UnderlyingInstrument_64.insert(UnderlyingStrikeCurrency_64.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_64;
      UnderlyingStrikePrice_64.setString("12148363");
      noUnderlyings_1_1_2.set(UnderlyingStrikePrice_64);
      UnderlyingInstrument_64.insert(UnderlyingStrikePrice_64.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_64("STRING_1251351735");
      noUnderlyings_1_1_2.set(UnderlyingSymbol_64);
      UnderlyingInstrument_64.insert(UnderlyingSymbol_64.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_64("STRING_448574499");
      noUnderlyings_1_1_2.set(UnderlyingSymbolSfx_64);
      UnderlyingInstrument_64.insert(UnderlyingSymbolSfx_64.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_64("STRING_961432364");
      noUnderlyings_1_1_2.set(UnderlyingTimeUnit_64);
      UnderlyingInstrument_64.insert(UnderlyingTimeUnit_64.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_64("STRING_31815814");
      noUnderlyings_1_1_2.set(UnderlyingUnitOfMeasure_64);
      UnderlyingInstrument_64.insert(UnderlyingUnitOfMeasure_64.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_64;
      UnderlyingUnitOfMeasureQty_64.setString("749514");
      noUnderlyings_1_1_2.set(UnderlyingUnitOfMeasureQty_64);
      UnderlyingInstrument_64.insert(UnderlyingUnitOfMeasureQty_64.getString());
      all_values.push_back(UnderlyingInstrument_64);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_2_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_130;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_130("STRING_457546252");
        noUnderlyingSecurityAltID_1_2_2_0.set(UnderlyingSecurityAltID_130);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_130.insert(UnderlyingSecurityAltID_130.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_130("STRING_2112384276");
        noUnderlyingSecurityAltID_1_2_2_0.set(UnderlyingSecurityAltIDSource_130);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_130.insert(UnderlyingSecurityAltIDSource_130.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_130);

        noUnderlyings_1_1_2.addGroup(noUnderlyingSecurityAltID_1_2_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_2_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_131;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_131("STRING_1782600263");
        noUnderlyingSecurityAltID_1_2_2_1.set(UnderlyingSecurityAltID_131);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_131.insert(UnderlyingSecurityAltID_131.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_131("STRING_244760581");
        noUnderlyingSecurityAltID_1_2_2_1.set(UnderlyingSecurityAltIDSource_131);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_131.insert(UnderlyingSecurityAltIDSource_131.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_131);

        noUnderlyings_1_1_2.addGroup(noUnderlyingSecurityAltID_1_2_2_1);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_2_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_113;
        FIX::UnderlyingStipType UnderlyingStipType_113("STRING_1887702027");
        noUnderlyingStips_1_2_2_0.set(UnderlyingStipType_113);
        UnderlyingStipulations_NoUnderlyingStips_113.insert(UnderlyingStipType_113.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_113("STRING_1352173138");
        noUnderlyingStips_1_2_2_0.set(UnderlyingStipValue_113);
        UnderlyingStipulations_NoUnderlyingStips_113.insert(UnderlyingStipValue_113.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_113);

        noUnderlyings_1_1_2.addGroup(noUnderlyingStips_1_2_2_0);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_2_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_139;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_139("STRING_1991734955");
        noUndlyInstrumentParties_1_2_2_0.set(UnderlyingInstrumentPartyID_139);
        UndlyInstrumentParties_NoUndlyInstrumentParties_139.insert(UnderlyingInstrumentPartyID_139.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_139('4');
        noUndlyInstrumentParties_1_2_2_0.set(UnderlyingInstrumentPartyIDSource_139);
        UndlyInstrumentParties_NoUndlyInstrumentParties_139.insert(UnderlyingInstrumentPartyIDSource_139.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_139(168619443);
        noUndlyInstrumentParties_1_2_2_0.set(UnderlyingInstrumentPartyRole_139);
        UndlyInstrumentParties_NoUndlyInstrumentParties_139.insert(UnderlyingInstrumentPartyRole_139.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_139);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_274;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_274("STRING_517827794");
          noUndlyInstrumentPartySubIDs_1_2_0_3_0.set(UnderlyingInstrumentPartySubID_274);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_274.insert(UnderlyingInstrumentPartySubID_274.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_274(1059919566);
          noUndlyInstrumentPartySubIDs_1_2_0_3_0.set(UnderlyingInstrumentPartySubIDType_274);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_274.insert(UnderlyingInstrumentPartySubIDType_274.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_274);

          noUndlyInstrumentParties_1_2_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_2_0_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_275;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_275("STRING_1774536084");
          noUndlyInstrumentPartySubIDs_1_2_0_3_1.set(UnderlyingInstrumentPartySubID_275);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_275.insert(UnderlyingInstrumentPartySubID_275.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_275(1361354785);
          noUndlyInstrumentPartySubIDs_1_2_0_3_1.set(UnderlyingInstrumentPartySubIDType_275);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_275.insert(UnderlyingInstrumentPartySubIDType_275.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_275);

          noUndlyInstrumentParties_1_2_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_2_0_3_1);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_0_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_276;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_276("STRING_19422616");
          noUndlyInstrumentPartySubIDs_1_2_0_3_2.set(UnderlyingInstrumentPartySubID_276);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_276.insert(UnderlyingInstrumentPartySubID_276.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_276(1157629834);
          noUndlyInstrumentPartySubIDs_1_2_0_3_2.set(UnderlyingInstrumentPartySubIDType_276);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_276.insert(UnderlyingInstrumentPartySubIDType_276.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_276);

          noUndlyInstrumentParties_1_2_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_2_0_3_2);
        }
        noUnderlyings_1_1_2.addGroup(noUndlyInstrumentParties_1_2_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_2_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_140;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_140("STRING_143924285");
        noUndlyInstrumentParties_1_2_2_1.set(UnderlyingInstrumentPartyID_140);
        UndlyInstrumentParties_NoUndlyInstrumentParties_140.insert(UnderlyingInstrumentPartyID_140.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_140('8');
        noUndlyInstrumentParties_1_2_2_1.set(UnderlyingInstrumentPartyIDSource_140);
        UndlyInstrumentParties_NoUndlyInstrumentParties_140.insert(UnderlyingInstrumentPartyIDSource_140.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_140(924785771);
        noUndlyInstrumentParties_1_2_2_1.set(UnderlyingInstrumentPartyRole_140);
        UndlyInstrumentParties_NoUndlyInstrumentParties_140.insert(UnderlyingInstrumentPartyRole_140.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_140);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_277;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_277("STRING_1489115805");
          noUndlyInstrumentPartySubIDs_1_2_1_3_0.set(UnderlyingInstrumentPartySubID_277);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_277.insert(UnderlyingInstrumentPartySubID_277.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_277(1832357079);
          noUndlyInstrumentPartySubIDs_1_2_1_3_0.set(UnderlyingInstrumentPartySubIDType_277);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_277.insert(UnderlyingInstrumentPartySubIDType_277.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_277);

          noUndlyInstrumentParties_1_2_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_2_1_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_1_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_278;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_278("STRING_275432223");
          noUndlyInstrumentPartySubIDs_1_2_1_3_1.set(UnderlyingInstrumentPartySubID_278);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_278.insert(UnderlyingInstrumentPartySubID_278.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_278(592983892);
          noUndlyInstrumentPartySubIDs_1_2_1_3_1.set(UnderlyingInstrumentPartySubIDType_278);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_278.insert(UnderlyingInstrumentPartySubIDType_278.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_278);

          noUndlyInstrumentParties_1_2_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_2_1_3_1);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_1_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_279;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_279("STRING_133447930");
          noUndlyInstrumentPartySubIDs_1_2_1_3_2.set(UnderlyingInstrumentPartySubID_279);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_279.insert(UnderlyingInstrumentPartySubID_279.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_279(1236864587);
          noUndlyInstrumentPartySubIDs_1_2_1_3_2.set(UnderlyingInstrumentPartySubIDType_279);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_279.insert(UnderlyingInstrumentPartySubIDType_279.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_279);

          noUndlyInstrumentParties_1_2_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_2_1_3_2);
        }
        noUnderlyings_1_1_2.addGroup(noUndlyInstrumentParties_1_2_2_1);
      }
      noOrders_0_1.addGroup(noUnderlyings_1_1_2);
    }
    // YieldData
    multiset<string> YieldData_11;
    FIX::Yield Yield_11;
    Yield_11.setString("97.060000");
    noOrders_0_1.set(Yield_11);
    YieldData_11.insert(Yield_11.getString());
    FIX::YieldCalcDate YieldCalcDate_11("LOCALMKTDATE_208399429");
    noOrders_0_1.set(YieldCalcDate_11);
    YieldData_11.insert(YieldCalcDate_11.getString());
    FIX::YieldRedemptionDate YieldRedemptionDate_11("LOCALMKTDATE_594951127");
    noOrders_0_1.set(YieldRedemptionDate_11);
    YieldData_11.insert(YieldRedemptionDate_11.getString());
    FIX::YieldRedemptionPrice YieldRedemptionPrice_11;
    YieldRedemptionPrice_11.setString("10823459");
    noOrders_0_1.set(YieldRedemptionPrice_11);
    YieldData_11.insert(YieldRedemptionPrice_11.getString());
    FIX::YieldRedemptionPriceType YieldRedemptionPriceType_11(173300057);
    noOrders_0_1.set(YieldRedemptionPriceType_11);
    YieldData_11.insert(YieldRedemptionPriceType_11.getString());
    FIX::YieldType YieldType_11("STRING_GOVTEQUIV");
    noOrders_0_1.set(YieldType_11);
    YieldData_11.insert(YieldType_11.getString());
    all_values.push_back(YieldData_11);

    msg.addGroup(noOrders_0_1);
  }
  // RootParties
  // Group RootParties.NoRootPartyIDs
  {
    FIX50SP2::NewOrderList::NoRootPartyIDs noRootPartyIDs_0_0;
    // RootParties.NoRootPartyIDs
    multiset<string> RootParties_NoRootPartyIDs_5;
    FIX::RootPartyID RootPartyID_5("STRING_828981012");
    noRootPartyIDs_0_0.set(RootPartyID_5);
    RootParties_NoRootPartyIDs_5.insert(RootPartyID_5.getString());
    FIX::RootPartyIDSource RootPartyIDSource_5('2');
    noRootPartyIDs_0_0.set(RootPartyIDSource_5);
    RootParties_NoRootPartyIDs_5.insert(RootPartyIDSource_5.getString());
    FIX::RootPartyRole RootPartyRole_5(531796030);
    noRootPartyIDs_0_0.set(RootPartyRole_5);
    RootParties_NoRootPartyIDs_5.insert(RootPartyRole_5.getString());
    all_values.push_back(RootParties_NoRootPartyIDs_5);

    // RootSubParties
    // Group RootSubParties.NoRootPartySubIDs
    {
      FIX50SP2::NewOrderList::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_0;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_10;
      FIX::RootPartySubID RootPartySubID_10("STRING_1962021076");
      noRootPartySubIDs_0_1_0.set(RootPartySubID_10);
      RootSubParties_NoRootPartySubIDs_10.insert(RootPartySubID_10.getString());
      FIX::RootPartySubIDType RootPartySubIDType_10(992057249);
      noRootPartySubIDs_0_1_0.set(RootPartySubIDType_10);
      RootSubParties_NoRootPartySubIDs_10.insert(RootPartySubIDType_10.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_10);

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_1;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_11;
      FIX::RootPartySubID RootPartySubID_11("STRING_1708060643");
      noRootPartySubIDs_0_1_1.set(RootPartySubID_11);
      RootSubParties_NoRootPartySubIDs_11.insert(RootPartySubID_11.getString());
      FIX::RootPartySubIDType RootPartySubIDType_11(241744198);
      noRootPartySubIDs_0_1_1.set(RootPartySubIDType_11);
      RootSubParties_NoRootPartySubIDs_11.insert(RootPartySubIDType_11.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_11);

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_1);
    }
    msg.addGroup(noRootPartyIDs_0_0);
  }
  {
    FIX50SP2::NewOrderList::NoRootPartyIDs noRootPartyIDs_0_1;
    // RootParties.NoRootPartyIDs
    multiset<string> RootParties_NoRootPartyIDs_6;
    FIX::RootPartyID RootPartyID_6("STRING_1509885043");
    noRootPartyIDs_0_1.set(RootPartyID_6);
    RootParties_NoRootPartyIDs_6.insert(RootPartyID_6.getString());
    FIX::RootPartyIDSource RootPartyIDSource_6('6');
    noRootPartyIDs_0_1.set(RootPartyIDSource_6);
    RootParties_NoRootPartyIDs_6.insert(RootPartyIDSource_6.getString());
    FIX::RootPartyRole RootPartyRole_6(2016280283);
    noRootPartyIDs_0_1.set(RootPartyRole_6);
    RootParties_NoRootPartyIDs_6.insert(RootPartyRole_6.getString());
    all_values.push_back(RootParties_NoRootPartyIDs_6);

    // RootSubParties
    // Group RootSubParties.NoRootPartySubIDs
    {
      FIX50SP2::NewOrderList::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_1_1_0;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_12;
      FIX::RootPartySubID RootPartySubID_12("STRING_639919178");
      noRootPartySubIDs_1_1_0.set(RootPartySubID_12);
      RootSubParties_NoRootPartySubIDs_12.insert(RootPartySubID_12.getString());
      FIX::RootPartySubIDType RootPartySubIDType_12(1026426469);
      noRootPartySubIDs_1_1_0.set(RootPartySubIDType_12);
      RootSubParties_NoRootPartySubIDs_12.insert(RootPartySubIDType_12.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_12);

      noRootPartyIDs_0_1.addGroup(noRootPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_1_1_1;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_13;
      FIX::RootPartySubID RootPartySubID_13("STRING_867680466");
      noRootPartySubIDs_1_1_1.set(RootPartySubID_13);
      RootSubParties_NoRootPartySubIDs_13.insert(RootPartySubID_13.getString());
      FIX::RootPartySubIDType RootPartySubIDType_13(721840648);
      noRootPartySubIDs_1_1_1.set(RootPartySubIDType_13);
      RootSubParties_NoRootPartySubIDs_13.insert(RootPartySubIDType_13.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_13);

      noRootPartyIDs_0_1.addGroup(noRootPartySubIDs_1_1_1);
    }
    msg.addGroup(noRootPartyIDs_0_1);
  }
  {
    FIX50SP2::NewOrderList::NoRootPartyIDs noRootPartyIDs_0_2;
    // RootParties.NoRootPartyIDs
    multiset<string> RootParties_NoRootPartyIDs_7;
    FIX::RootPartyID RootPartyID_7("STRING_1951212240");
    noRootPartyIDs_0_2.set(RootPartyID_7);
    RootParties_NoRootPartyIDs_7.insert(RootPartyID_7.getString());
    FIX::RootPartyIDSource RootPartyIDSource_7('2');
    noRootPartyIDs_0_2.set(RootPartyIDSource_7);
    RootParties_NoRootPartyIDs_7.insert(RootPartyIDSource_7.getString());
    FIX::RootPartyRole RootPartyRole_7(63472805);
    noRootPartyIDs_0_2.set(RootPartyRole_7);
    RootParties_NoRootPartyIDs_7.insert(RootPartyRole_7.getString());
    all_values.push_back(RootParties_NoRootPartyIDs_7);

    // RootSubParties
    // Group RootSubParties.NoRootPartySubIDs
    {
      FIX50SP2::NewOrderList::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_2_1_0;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_14;
      FIX::RootPartySubID RootPartySubID_14("STRING_203708532");
      noRootPartySubIDs_2_1_0.set(RootPartySubID_14);
      RootSubParties_NoRootPartySubIDs_14.insert(RootPartySubID_14.getString());
      FIX::RootPartySubIDType RootPartySubIDType_14(656456697);
      noRootPartySubIDs_2_1_0.set(RootPartySubIDType_14);
      RootSubParties_NoRootPartySubIDs_14.insert(RootPartySubIDType_14.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_14);

      noRootPartyIDs_0_2.addGroup(noRootPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_2_1_1;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_15;
      FIX::RootPartySubID RootPartySubID_15("STRING_1769533602");
      noRootPartySubIDs_2_1_1.set(RootPartySubID_15);
      RootSubParties_NoRootPartySubIDs_15.insert(RootPartySubID_15.getString());
      FIX::RootPartySubIDType RootPartySubIDType_15(1440573119);
      noRootPartySubIDs_2_1_1.set(RootPartySubIDType_15);
      RootSubParties_NoRootPartySubIDs_15.insert(RootPartySubIDType_15.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_15);

      noRootPartyIDs_0_2.addGroup(noRootPartySubIDs_2_1_1);
    }
    msg.addGroup(noRootPartyIDs_0_2);
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
