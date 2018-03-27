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

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::NewOrderList msg;

  list<multiset<string>> all_values;
  multiset<string> NewOrderList_0;
  FIX::AllowableOneSidednessCurr AllowableOneSidednessCurr_0("CAN");
  msg.set(AllowableOneSidednessCurr_0);
  NewOrderList_0.insert(AllowableOneSidednessCurr_0.getString());
  FIX::AllowableOneSidednessPct AllowableOneSidednessPct_0;
  AllowableOneSidednessPct_0.setString("84.460000");
  msg.set(AllowableOneSidednessPct_0);
  NewOrderList_0.insert(AllowableOneSidednessPct_0.getString());
  FIX::AllowableOneSidednessValue AllowableOneSidednessValue_0;
  AllowableOneSidednessValue_0.setString("4201715");
  msg.set(AllowableOneSidednessValue_0);
  NewOrderList_0.insert(AllowableOneSidednessValue_0.getString());
  FIX::BidID BidID_3("STRING_2118494395");
  msg.set(BidID_3);
  NewOrderList_0.insert(BidID_3.getString());
  FIX::BidType BidType_1(2);
  msg.set(BidType_1);
  NewOrderList_0.insert(BidType_1.getString());
  FIX::CancellationRights CancellationRights_4('M');
  msg.set(CancellationRights_4);
  NewOrderList_0.insert(CancellationRights_4.getString());
  FIX::ClientBidID ClientBidID_3("STRING_401102711");
  msg.set(ClientBidID_3);
  NewOrderList_0.insert(ClientBidID_3.getString());
  FIX::ContingencyType ContingencyType_1(3);
  msg.set(ContingencyType_1);
  NewOrderList_0.insert(ContingencyType_1.getString());
  FIX::EncodedListExecInst EncodedListExecInst_0("DATA_808067257");
  msg.set(EncodedListExecInst_0);
  NewOrderList_0.insert(EncodedListExecInst_0.getString());
  FIX::EncodedListExecInstLen EncodedListExecInstLen_0(388231334);
  msg.set(EncodedListExecInstLen_0);
  NewOrderList_0.insert(EncodedListExecInstLen_0.getString());
  FIX::LastFragment LastFragment_11(false);
  msg.set(LastFragment_11);
  NewOrderList_0.insert(LastFragment_11.getString());
  FIX::ListExecInst ListExecInst_0("STRING_966359251");
  msg.set(ListExecInst_0);
  NewOrderList_0.insert(ListExecInst_0.getString());
  FIX::ListExecInstType ListExecInstType_0('3');
  msg.set(ListExecInstType_0);
  NewOrderList_0.insert(ListExecInstType_0.getString());
  FIX::ListID ListID_18("STRING_59008222");
  msg.set(ListID_18);
  NewOrderList_0.insert(ListID_18.getString());
  FIX::MoneyLaunderingStatus MoneyLaunderingStatus_4('N');
  msg.set(MoneyLaunderingStatus_4);
  NewOrderList_0.insert(MoneyLaunderingStatus_4.getString());
  FIX::ProgPeriodInterval ProgPeriodInterval_1(2069710650);
  msg.set(ProgPeriodInterval_1);
  NewOrderList_0.insert(ProgPeriodInterval_1.getString());
  FIX::ProgRptReqs ProgRptReqs_1(1);
  msg.set(ProgRptReqs_1);
  NewOrderList_0.insert(ProgRptReqs_1.getString());
  FIX::RegistID RegistID_4("STRING_2011783224");
  msg.set(RegistID_4);
  NewOrderList_0.insert(RegistID_4.getString());
  FIX::TotNoOrders TotNoOrders_1(380747982);
  msg.set(TotNoOrders_1);
  NewOrderList_0.insert(TotNoOrders_1.getString());
  all_values.push_back(NewOrderList_0);

  // ListOrdGrp
  // Group ListOrdGrp.NoOrders
  {
    FIX50SP2::NewOrderList::NoOrders noOrders_0_0;
    // ListOrdGrp.NoOrders
    multiset<string> ListOrdGrp_NoOrders_0;
    FIX::Account Account_18("STRING_295541509");
    noOrders_0_0.set(Account_18);
    ListOrdGrp_NoOrders_0.insert(Account_18.getString());
    FIX::AccountType AccountType_16(6);
    noOrders_0_0.set(AccountType_16);
    ListOrdGrp_NoOrders_0.insert(AccountType_16.getString());
    FIX::AcctIDSource AcctIDSource_11(1);
    noOrders_0_0.set(AcctIDSource_11);
    ListOrdGrp_NoOrders_0.insert(AcctIDSource_11.getString());
    FIX::AllocID AllocID_14("STRING_1283195530");
    noOrders_0_0.set(AllocID_14);
    ListOrdGrp_NoOrders_0.insert(AllocID_14.getString());
    FIX::BookingType BookingType_13(0);
    noOrders_0_0.set(BookingType_13);
    ListOrdGrp_NoOrders_0.insert(BookingType_13.getString());
    FIX::BookingUnit BookingUnit_7('0');
    noOrders_0_0.set(BookingUnit_7);
    ListOrdGrp_NoOrders_0.insert(BookingUnit_7.getString());
    FIX::CashMargin CashMargin_7('1');
    noOrders_0_0.set(CashMargin_7);
    ListOrdGrp_NoOrders_0.insert(CashMargin_7.getString());
    FIX::ClOrdID ClOrdID_29("STRING_1391774413");
    noOrders_0_0.set(ClOrdID_29);
    ListOrdGrp_NoOrders_0.insert(ClOrdID_29.getString());
    FIX::ClOrdLinkID ClOrdLinkID_9("STRING_931356015");
    noOrders_0_0.set(ClOrdLinkID_9);
    ListOrdGrp_NoOrders_0.insert(ClOrdLinkID_9.getString());
    FIX::ClearingFeeIndicator ClearingFeeIndicator_12("STRING_L");
    noOrders_0_0.set(ClearingFeeIndicator_12);
    ListOrdGrp_NoOrders_0.insert(ClearingFeeIndicator_12.getString());
    FIX::ComplianceID ComplianceID_6("STRING_568782406");
    noOrders_0_0.set(ComplianceID_6);
    ListOrdGrp_NoOrders_0.insert(ComplianceID_6.getString());
    FIX::CoveredOrUncovered CoveredOrUncovered_6(0);
    noOrders_0_0.set(CoveredOrUncovered_6);
    ListOrdGrp_NoOrders_0.insert(CoveredOrUncovered_6.getString());
    FIX::Currency Currency_35("CAN");
    noOrders_0_0.set(Currency_35);
    ListOrdGrp_NoOrders_0.insert(Currency_35.getString());
    FIX::CustOrderCapacity CustOrderCapacity_10(2);
    noOrders_0_0.set(CustOrderCapacity_10);
    ListOrdGrp_NoOrders_0.insert(CustOrderCapacity_10.getString());
    FIX::DayBookingInst DayBookingInst_7('2');
    noOrders_0_0.set(DayBookingInst_7);
    ListOrdGrp_NoOrders_0.insert(DayBookingInst_7.getString());
    FIX::Designation Designation_4("STRING_873970617");
    noOrders_0_0.set(Designation_4);
    ListOrdGrp_NoOrders_0.insert(Designation_4.getString());
    FIX::EffectiveTime EffectiveTime_4(FIX::UTCTIMESTAMP(6, 34, 31, 1, 112016));
    noOrders_0_0.set(EffectiveTime_4);
    ListOrdGrp_NoOrders_0.insert(EffectiveTime_4.getString());
    FIX::EncodedText EncodedText_54("DATA_830079391");
    noOrders_0_0.set(EncodedText_54);
    ListOrdGrp_NoOrders_0.insert(EncodedText_54.getString());
    FIX::EncodedTextLen EncodedTextLen_54(610982859);
    noOrders_0_0.set(EncodedTextLen_54);
    ListOrdGrp_NoOrders_0.insert(EncodedTextLen_54.getString());
    FIX::ExDestination ExDestination_3("EXCHANGE_1244969402");
    noOrders_0_0.set(ExDestination_3);
    ListOrdGrp_NoOrders_0.insert(ExDestination_3.getString());
    FIX::ExDestinationIDSource ExDestinationIDSource_3('B');
    noOrders_0_0.set(ExDestinationIDSource_3);
    ListOrdGrp_NoOrders_0.insert(ExDestinationIDSource_3.getString());
    FIX::ExecInst ExecInst_7("MULTIPLECHARVALUE_J");
    noOrders_0_0.set(ExecInst_7);
    ListOrdGrp_NoOrders_0.insert(ExecInst_7.getString());
    FIX::ExpireDate ExpireDate_8("LOCALMKTDATE_1625717385");
    noOrders_0_0.set(ExpireDate_8);
    ListOrdGrp_NoOrders_0.insert(ExpireDate_8.getString());
    FIX::ExpireTime ExpireTime_9(FIX::UTCTIMESTAMP(9, 53, 52, 11, 22002));
    noOrders_0_0.set(ExpireTime_9);
    ListOrdGrp_NoOrders_0.insert(ExpireTime_9.getString());
    FIX::ForexReq ForexReq_7(true);
    noOrders_0_0.set(ForexReq_7);
    ListOrdGrp_NoOrders_0.insert(ForexReq_7.getString());
    FIX::GTBookingInst GTBookingInst_4(2);
    noOrders_0_0.set(GTBookingInst_4);
    ListOrdGrp_NoOrders_0.insert(GTBookingInst_4.getString());
    FIX::HandlInst HandlInst_4('3');
    noOrders_0_0.set(HandlInst_4);
    ListOrdGrp_NoOrders_0.insert(HandlInst_4.getString());
    FIX::IOIID IOIID_4("STRING_502944710");
    noOrders_0_0.set(IOIID_4);
    ListOrdGrp_NoOrders_0.insert(IOIID_4.getString());
    FIX::ListSeqNo ListSeqNo_0(456889601);
    noOrders_0_0.set(ListSeqNo_0);
    ListOrdGrp_NoOrders_0.insert(ListSeqNo_0.getString());
    FIX::LocateReqd LocateReqd_3(false);
    noOrders_0_0.set(LocateReqd_3);
    ListOrdGrp_NoOrders_0.insert(LocateReqd_3.getString());
    FIX::MatchIncrement MatchIncrement_4;
    MatchIncrement_4.setString("10746878");
    noOrders_0_0.set(MatchIncrement_4);
    ListOrdGrp_NoOrders_0.insert(MatchIncrement_4.getString());
    FIX::MaxFloor MaxFloor_4;
    MaxFloor_4.setString("14458435");
    noOrders_0_0.set(MaxFloor_4);
    ListOrdGrp_NoOrders_0.insert(MaxFloor_4.getString());
    FIX::MaxPriceLevels MaxPriceLevels_4(939189195);
    noOrders_0_0.set(MaxPriceLevels_4);
    ListOrdGrp_NoOrders_0.insert(MaxPriceLevels_4.getString());
    FIX::MaxShow MaxShow_4;
    MaxShow_4.setString("3364963");
    noOrders_0_0.set(MaxShow_4);
    ListOrdGrp_NoOrders_0.insert(MaxShow_4.getString());
    FIX::MinQty MinQty_7;
    MinQty_7.setString("1723304");
    noOrders_0_0.set(MinQty_7);
    ListOrdGrp_NoOrders_0.insert(MinQty_7.getString());
    FIX::OrdType OrdType_40('8');
    noOrders_0_0.set(OrdType_40);
    ListOrdGrp_NoOrders_0.insert(OrdType_40.getString());
    FIX::OrderCapacity OrderCapacity_16('P');
    noOrders_0_0.set(OrderCapacity_16);
    ListOrdGrp_NoOrders_0.insert(OrderCapacity_16.getString());
    FIX::OrderQty2 OrderQty2_4;
    OrderQty2_4.setString("18543683");
    noOrders_0_0.set(OrderQty2_4);
    ListOrdGrp_NoOrders_0.insert(OrderQty2_4.getString());
    FIX::OrderRestrictions OrderRestrictions_13("MULTIPLECHARVALUE_A");
    noOrders_0_0.set(OrderRestrictions_13);
    ListOrdGrp_NoOrders_0.insert(OrderRestrictions_13.getString());
    FIX::ParticipationRate ParticipationRate_4;
    ParticipationRate_4.setString("38.740000");
    noOrders_0_0.set(ParticipationRate_4);
    ListOrdGrp_NoOrders_0.insert(ParticipationRate_4.getString());
    FIX::PositionEffect PositionEffect_10('C');
    noOrders_0_0.set(PositionEffect_10);
    ListOrdGrp_NoOrders_0.insert(PositionEffect_10.getString());
    FIX::PreTradeAnonymity PreTradeAnonymity_7(false);
    noOrders_0_0.set(PreTradeAnonymity_7);
    ListOrdGrp_NoOrders_0.insert(PreTradeAnonymity_7.getString());
    FIX::PreallocMethod PreallocMethod_7('1');
    noOrders_0_0.set(PreallocMethod_7);
    ListOrdGrp_NoOrders_0.insert(PreallocMethod_7.getString());
    FIX::PrevClosePx PrevClosePx_5;
    PrevClosePx_5.setString("8187810");
    noOrders_0_0.set(PrevClosePx_5);
    ListOrdGrp_NoOrders_0.insert(PrevClosePx_5.getString());
    FIX::Price Price_14;
    Price_14.setString("19738424");
    noOrders_0_0.set(Price_14);
    ListOrdGrp_NoOrders_0.insert(Price_14.getString());
    FIX::Price2 Price2_0;
    Price2_0.setString("15365959");
    noOrders_0_0.set(Price2_0);
    ListOrdGrp_NoOrders_0.insert(Price2_0.getString());
    FIX::PriceProtectionScope PriceProtectionScope_4('1');
    noOrders_0_0.set(PriceProtectionScope_4);
    ListOrdGrp_NoOrders_0.insert(PriceProtectionScope_4.getString());
    FIX::PriceType PriceType_26(7);
    noOrders_0_0.set(PriceType_26);
    ListOrdGrp_NoOrders_0.insert(PriceType_26.getString());
    FIX::ProcessCode ProcessCode_9('4');
    noOrders_0_0.set(ProcessCode_9);
    ListOrdGrp_NoOrders_0.insert(ProcessCode_9.getString());
    FIX::QtyType QtyType_19(2);
    noOrders_0_0.set(QtyType_19);
    ListOrdGrp_NoOrders_0.insert(QtyType_19.getString());
    FIX::QuoteID QuoteID_5("STRING_528864832");
    noOrders_0_0.set(QuoteID_5);
    ListOrdGrp_NoOrders_0.insert(QuoteID_5.getString());
    FIX::RefOrderID RefOrderID_0("STRING_26427754");
    noOrders_0_0.set(RefOrderID_0);
    ListOrdGrp_NoOrders_0.insert(RefOrderID_0.getString());
    FIX::RefOrderIDSource RefOrderIDSource_0('4');
    noOrders_0_0.set(RefOrderIDSource_0);
    ListOrdGrp_NoOrders_0.insert(RefOrderIDSource_0.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_27("STRING_1172681261");
    noOrders_0_0.set(SecondaryClOrdID_27);
    ListOrdGrp_NoOrders_0.insert(SecondaryClOrdID_27.getString());
    FIX::SettlCurrency SettlCurrency_16("GBP");
    noOrders_0_0.set(SettlCurrency_16);
    ListOrdGrp_NoOrders_0.insert(SettlCurrency_16.getString());
    FIX::SettlDate SettlDate_25("LOCALMKTDATE_1060788455");
    noOrders_0_0.set(SettlDate_25);
    ListOrdGrp_NoOrders_0.insert(SettlDate_25.getString());
    FIX::SettlDate2 SettlDate2_4("LOCALMKTDATE_2067494897");
    noOrders_0_0.set(SettlDate2_4);
    ListOrdGrp_NoOrders_0.insert(SettlDate2_4.getString());
    FIX::SettlInstMode SettlInstMode_0('5');
    noOrders_0_0.set(SettlInstMode_0);
    ListOrdGrp_NoOrders_0.insert(SettlInstMode_0.getString());
    FIX::SettlType SettlType_16("STRING_4");
    noOrders_0_0.set(SettlType_16);
    ListOrdGrp_NoOrders_0.insert(SettlType_16.getString());
    FIX::Side Side_26('7');
    noOrders_0_0.set(Side_26);
    ListOrdGrp_NoOrders_0.insert(Side_26.getString());
    FIX::SideValueInd SideValueInd_2(1);
    noOrders_0_0.set(SideValueInd_2);
    ListOrdGrp_NoOrders_0.insert(SideValueInd_2.getString());
    FIX::SolicitedFlag SolicitedFlag_7(false);
    noOrders_0_0.set(SolicitedFlag_7);
    ListOrdGrp_NoOrders_0.insert(SolicitedFlag_7.getString());
    FIX::StopPx StopPx_4;
    StopPx_4.setString("10126536");
    noOrders_0_0.set(StopPx_4);
    ListOrdGrp_NoOrders_0.insert(StopPx_4.getString());
    FIX::TargetStrategy TargetStrategy_4(1);
    noOrders_0_0.set(TargetStrategy_4);
    ListOrdGrp_NoOrders_0.insert(TargetStrategy_4.getString());
    FIX::TargetStrategyParameters TargetStrategyParameters_4("STRING_988368403");
    noOrders_0_0.set(TargetStrategyParameters_4);
    ListOrdGrp_NoOrders_0.insert(TargetStrategyParameters_4.getString());
    FIX::Text Text_54("STRING_991197897");
    noOrders_0_0.set(Text_54);
    ListOrdGrp_NoOrders_0.insert(Text_54.getString());
    FIX::TimeInForce TimeInForce_36('2');
    noOrders_0_0.set(TimeInForce_36);
    ListOrdGrp_NoOrders_0.insert(TimeInForce_36.getString());
    FIX::TradeDate TradeDate_21("LOCALMKTDATE_695253111");
    noOrders_0_0.set(TradeDate_21);
    ListOrdGrp_NoOrders_0.insert(TradeDate_21.getString());
    FIX::TradeOriginationDate TradeOriginationDate_13("LOCALMKTDATE_397328563");
    noOrders_0_0.set(TradeOriginationDate_13);
    ListOrdGrp_NoOrders_0.insert(TradeOriginationDate_13.getString());
    FIX::TransactTime TransactTime_31(FIX::UTCTIMESTAMP(10, 10, 7, 8, 92001));
    noOrders_0_0.set(TransactTime_31);
    ListOrdGrp_NoOrders_0.insert(TransactTime_31.getString());
    all_values.push_back(ListOrdGrp_NoOrders_0);

    // CommissionData
    multiset<string> CommissionData_14;
    FIX::CommCurrency CommCurrency_14("USD");
    noOrders_0_0.set(CommCurrency_14);
    CommissionData_14.insert(CommCurrency_14.getString());
    FIX::CommType CommType_14('2');
    noOrders_0_0.set(CommType_14);
    CommissionData_14.insert(CommType_14.getString());
    FIX::Commission Commission_14;
    Commission_14.setString("7858159");
    noOrders_0_0.set(Commission_14);
    CommissionData_14.insert(Commission_14.getString());
    FIX::FundRenewWaiv FundRenewWaiv_14('N');
    noOrders_0_0.set(FundRenewWaiv_14);
    CommissionData_14.insert(FundRenewWaiv_14.getString());
    all_values.push_back(CommissionData_14);

    // DiscretionInstructions
    multiset<string> DiscretionInstructions_4;
    FIX::DiscretionInst DiscretionInst_4('5');
    noOrders_0_0.set(DiscretionInst_4);
    DiscretionInstructions_4.insert(DiscretionInst_4.getString());
    FIX::DiscretionLimitType DiscretionLimitType_4(0);
    noOrders_0_0.set(DiscretionLimitType_4);
    DiscretionInstructions_4.insert(DiscretionLimitType_4.getString());
    FIX::DiscretionMoveType DiscretionMoveType_4(1);
    noOrders_0_0.set(DiscretionMoveType_4);
    DiscretionInstructions_4.insert(DiscretionMoveType_4.getString());
    FIX::DiscretionOffsetType DiscretionOffsetType_4(3);
    noOrders_0_0.set(DiscretionOffsetType_4);
    DiscretionInstructions_4.insert(DiscretionOffsetType_4.getString());
    FIX::DiscretionOffsetValue DiscretionOffsetValue_4;
    DiscretionOffsetValue_4.setString("14589651");
    noOrders_0_0.set(DiscretionOffsetValue_4);
    DiscretionInstructions_4.insert(DiscretionOffsetValue_4.getString());
    FIX::DiscretionRoundDirection DiscretionRoundDirection_4(2);
    noOrders_0_0.set(DiscretionRoundDirection_4);
    DiscretionInstructions_4.insert(DiscretionRoundDirection_4.getString());
    FIX::DiscretionScope DiscretionScope_4(1);
    noOrders_0_0.set(DiscretionScope_4);
    DiscretionInstructions_4.insert(DiscretionScope_4.getString());
    all_values.push_back(DiscretionInstructions_4);

    // DisplayInstruction
    multiset<string> DisplayInstruction_4;
    FIX::DisplayHighQty DisplayHighQty_4;
    DisplayHighQty_4.setString("6636358");
    noOrders_0_0.set(DisplayHighQty_4);
    DisplayInstruction_4.insert(DisplayHighQty_4.getString());
    FIX::DisplayLowQty DisplayLowQty_4;
    DisplayLowQty_4.setString("2421983");
    noOrders_0_0.set(DisplayLowQty_4);
    DisplayInstruction_4.insert(DisplayLowQty_4.getString());
    FIX::DisplayMethod DisplayMethod_4('4');
    noOrders_0_0.set(DisplayMethod_4);
    DisplayInstruction_4.insert(DisplayMethod_4.getString());
    FIX::DisplayMinIncr DisplayMinIncr_4;
    DisplayMinIncr_4.setString("9429943");
    noOrders_0_0.set(DisplayMinIncr_4);
    DisplayInstruction_4.insert(DisplayMinIncr_4.getString());
    FIX::DisplayQty DisplayQty_4;
    DisplayQty_4.setString("10582362");
    noOrders_0_0.set(DisplayQty_4);
    DisplayInstruction_4.insert(DisplayQty_4.getString());
    FIX::DisplayWhen DisplayWhen_4('1');
    noOrders_0_0.set(DisplayWhen_4);
    DisplayInstruction_4.insert(DisplayWhen_4.getString());
    FIX::RefreshQty RefreshQty_4;
    RefreshQty_4.setString("15588492");
    noOrders_0_0.set(RefreshQty_4);
    DisplayInstruction_4.insert(RefreshQty_4.getString());
    FIX::SecondaryDisplayQty SecondaryDisplayQty_4;
    SecondaryDisplayQty_4.setString("20466046");
    noOrders_0_0.set(SecondaryDisplayQty_4);
    DisplayInstruction_4.insert(SecondaryDisplayQty_4.getString());
    all_values.push_back(DisplayInstruction_4);

    // Instrument
    multiset<string> Instrument_37;
    FIX::AttachmentPoint AttachmentPoint_37;
    AttachmentPoint_37.setString("65.330000");
    noOrders_0_0.set(AttachmentPoint_37);
    Instrument_37.insert(AttachmentPoint_37.getString());
    FIX::CFICode CFICode_37("STRING_1204313244");
    noOrders_0_0.set(CFICode_37);
    Instrument_37.insert(CFICode_37.getString());
    FIX::CPProgram CPProgram_37(2);
    noOrders_0_0.set(CPProgram_37);
    Instrument_37.insert(CPProgram_37.getString());
    FIX::CPRegType CPRegType_37("STRING_954515097");
    noOrders_0_0.set(CPRegType_37);
    Instrument_37.insert(CPRegType_37.getString());
    FIX::CapPrice CapPrice_37;
    CapPrice_37.setString("6504574");
    noOrders_0_0.set(CapPrice_37);
    Instrument_37.insert(CapPrice_37.getString());
    FIX::ContractMultiplier ContractMultiplier_37;
    ContractMultiplier_37.setString("14974254");
    noOrders_0_0.set(ContractMultiplier_37);
    Instrument_37.insert(ContractMultiplier_37.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_37(1);
    noOrders_0_0.set(ContractMultiplierUnit_37);
    Instrument_37.insert(ContractMultiplierUnit_37.getString());
    FIX::ContractSettlMonth ContractSettlMonth_37("MONTHYEAR_727361241");
    noOrders_0_0.set(ContractSettlMonth_37);
    Instrument_37.insert(ContractSettlMonth_37.getString());
    FIX::CountryOfIssue CountryOfIssue_37("COUNTRY_1071774101");
    noOrders_0_0.set(CountryOfIssue_37);
    Instrument_37.insert(CountryOfIssue_37.getString());
    FIX::CouponPaymentDate CouponPaymentDate_37("LOCALMKTDATE_885793531");
    noOrders_0_0.set(CouponPaymentDate_37);
    Instrument_37.insert(CouponPaymentDate_37.getString());
    FIX::CouponRate CouponRate_37;
    CouponRate_37.setString("73.630000");
    noOrders_0_0.set(CouponRate_37);
    Instrument_37.insert(CouponRate_37.getString());
    FIX::CreditRating CreditRating_37("STRING_1940186278");
    noOrders_0_0.set(CreditRating_37);
    Instrument_37.insert(CreditRating_37.getString());
    FIX::DatedDate DatedDate_37("LOCALMKTDATE_1142946542");
    noOrders_0_0.set(DatedDate_37);
    Instrument_37.insert(DatedDate_37.getString());
    FIX::DetachmentPoint DetachmentPoint_37;
    DetachmentPoint_37.setString("92.540000");
    noOrders_0_0.set(DetachmentPoint_37);
    Instrument_37.insert(DetachmentPoint_37.getString());
    FIX::EncodedIssuer EncodedIssuer_37("DATA_578518586");
    noOrders_0_0.set(EncodedIssuer_37);
    Instrument_37.insert(EncodedIssuer_37.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_37(1928964384);
    noOrders_0_0.set(EncodedIssuerLen_37);
    Instrument_37.insert(EncodedIssuerLen_37.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_37("DATA_419068900");
    noOrders_0_0.set(EncodedSecurityDesc_37);
    Instrument_37.insert(EncodedSecurityDesc_37.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_37(1188274148);
    noOrders_0_0.set(EncodedSecurityDescLen_37);
    Instrument_37.insert(EncodedSecurityDescLen_37.getString());
    FIX::ExerciseStyle ExerciseStyle_37(2);
    noOrders_0_0.set(ExerciseStyle_37);
    Instrument_37.insert(ExerciseStyle_37.getString());
    FIX::Factor Factor_37;
    Factor_37.setString("11264118");
    noOrders_0_0.set(Factor_37);
    Instrument_37.insert(Factor_37.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_37(false);
    noOrders_0_0.set(FlexProductEligibilityIndicator_37);
    Instrument_37.insert(FlexProductEligibilityIndicator_37.getString());
    FIX::FlexibleIndicator FlexibleIndicator_37(false);
    noOrders_0_0.set(FlexibleIndicator_37);
    Instrument_37.insert(FlexibleIndicator_37.getString());
    FIX::FloorPrice FloorPrice_37;
    FloorPrice_37.setString("17537660");
    noOrders_0_0.set(FloorPrice_37);
    Instrument_37.insert(FloorPrice_37.getString());
    FIX::FlowScheduleType FlowScheduleType_37(1);
    noOrders_0_0.set(FlowScheduleType_37);
    Instrument_37.insert(FlowScheduleType_37.getString());
    FIX::InstrRegistry InstrRegistry_37("STRING_706898422");
    noOrders_0_0.set(InstrRegistry_37);
    Instrument_37.insert(InstrRegistry_37.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_37('3');
    noOrders_0_0.set(InstrmtAssignmentMethod_37);
    Instrument_37.insert(InstrmtAssignmentMethod_37.getString());
    FIX::InterestAccrualDate InterestAccrualDate_37("LOCALMKTDATE_2106385880");
    noOrders_0_0.set(InterestAccrualDate_37);
    Instrument_37.insert(InterestAccrualDate_37.getString());
    FIX::IssueDate IssueDate_37("LOCALMKTDATE_1765134663");
    noOrders_0_0.set(IssueDate_37);
    Instrument_37.insert(IssueDate_37.getString());
    FIX::Issuer Issuer_37("STRING_2020573363");
    noOrders_0_0.set(Issuer_37);
    Instrument_37.insert(Issuer_37.getString());
    FIX::ListMethod ListMethod_37(0);
    noOrders_0_0.set(ListMethod_37);
    Instrument_37.insert(ListMethod_37.getString());
    FIX::LocaleOfIssue LocaleOfIssue_37("STRING_1664255658");
    noOrders_0_0.set(LocaleOfIssue_37);
    Instrument_37.insert(LocaleOfIssue_37.getString());
    FIX::MaturityDate MaturityDate_37("LOCALMKTDATE_430276249");
    noOrders_0_0.set(MaturityDate_37);
    Instrument_37.insert(MaturityDate_37.getString());
    FIX::MaturityMonthYear MaturityMonthYear_37("MONTHYEAR_574581109");
    noOrders_0_0.set(MaturityMonthYear_37);
    Instrument_37.insert(MaturityMonthYear_37.getString());
    FIX::MaturityTime MaturityTime_37("TZTIMEONLY_111146117");
    noOrders_0_0.set(MaturityTime_37);
    Instrument_37.insert(MaturityTime_37.getString());
    FIX::MinPriceIncrement MinPriceIncrement_37;
    MinPriceIncrement_37.setString("13847913");
    noOrders_0_0.set(MinPriceIncrement_37);
    Instrument_37.insert(MinPriceIncrement_37.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_37;
    MinPriceIncrementAmount_37.setString("12250385");
    noOrders_0_0.set(MinPriceIncrementAmount_37);
    Instrument_37.insert(MinPriceIncrementAmount_37.getString());
    FIX::NTPositionLimit NTPositionLimit_37(1608571522);
    noOrders_0_0.set(NTPositionLimit_37);
    Instrument_37.insert(NTPositionLimit_37.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_37;
    NotionalPercentageOutstanding_37.setString("44.250000");
    noOrders_0_0.set(NotionalPercentageOutstanding_37);
    Instrument_37.insert(NotionalPercentageOutstanding_37.getString());
    FIX::OptAttribute OptAttribute_37('1');
    noOrders_0_0.set(OptAttribute_37);
    Instrument_37.insert(OptAttribute_37.getString());
    FIX::OptPayoutAmount OptPayoutAmount_37;
    OptPayoutAmount_37.setString("5328619");
    noOrders_0_0.set(OptPayoutAmount_37);
    Instrument_37.insert(OptPayoutAmount_37.getString());
    FIX::OptPayoutType OptPayoutType_37(1);
    noOrders_0_0.set(OptPayoutType_37);
    Instrument_37.insert(OptPayoutType_37.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_37;
    OriginalNotionalPercentageOutstanding_37.setString("71.480000");
    noOrders_0_0.set(OriginalNotionalPercentageOutstanding_37);
    Instrument_37.insert(OriginalNotionalPercentageOutstanding_37.getString());
    FIX::Pool Pool_37("STRING_325564606");
    noOrders_0_0.set(Pool_37);
    Instrument_37.insert(Pool_37.getString());
    FIX::PositionLimit PositionLimit_37(1199280851);
    noOrders_0_0.set(PositionLimit_37);
    Instrument_37.insert(PositionLimit_37.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_37("STRING_INT");
    noOrders_0_0.set(PriceQuoteMethod_37);
    Instrument_37.insert(PriceQuoteMethod_37.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_37("STRING_904083192");
    noOrders_0_0.set(PriceUnitOfMeasure_37);
    Instrument_37.insert(PriceUnitOfMeasure_37.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_37;
    PriceUnitOfMeasureQty_37.setString("9807615");
    noOrders_0_0.set(PriceUnitOfMeasureQty_37);
    Instrument_37.insert(PriceUnitOfMeasureQty_37.getString());
    FIX::Product Product_39(6);
    noOrders_0_0.set(Product_39);
    Instrument_37.insert(Product_39.getString());
    FIX::ProductComplex ProductComplex_37("STRING_2092357341");
    noOrders_0_0.set(ProductComplex_37);
    Instrument_37.insert(ProductComplex_37.getString());
    FIX::PutOrCall PutOrCall_37(1);
    noOrders_0_0.set(PutOrCall_37);
    Instrument_37.insert(PutOrCall_37.getString());
    FIX::RedemptionDate RedemptionDate_37("LOCALMKTDATE_1836783518");
    noOrders_0_0.set(RedemptionDate_37);
    Instrument_37.insert(RedemptionDate_37.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_37("STRING_444629362");
    noOrders_0_0.set(RepoCollateralSecurityType_37);
    Instrument_37.insert(RepoCollateralSecurityType_37.getString());
    FIX::RepurchaseRate RepurchaseRate_37;
    RepurchaseRate_37.setString("78.820000");
    noOrders_0_0.set(RepurchaseRate_37);
    Instrument_37.insert(RepurchaseRate_37.getString());
    FIX::RepurchaseTerm RepurchaseTerm_37(1443065946);
    noOrders_0_0.set(RepurchaseTerm_37);
    Instrument_37.insert(RepurchaseTerm_37.getString());
    FIX::RestructuringType RestructuringType_37("STRING_FR");
    noOrders_0_0.set(RestructuringType_37);
    Instrument_37.insert(RestructuringType_37.getString());
    FIX::SecurityDesc SecurityDesc_37("STRING_1745056305");
    noOrders_0_0.set(SecurityDesc_37);
    Instrument_37.insert(SecurityDesc_37.getString());
    FIX::SecurityExchange SecurityExchange_37("EXCHANGE_1750167025");
    noOrders_0_0.set(SecurityExchange_37);
    Instrument_37.insert(SecurityExchange_37.getString());
    FIX::SecurityGroup SecurityGroup_37("STRING_1566923100");
    noOrders_0_0.set(SecurityGroup_37);
    Instrument_37.insert(SecurityGroup_37.getString());
    FIX::SecurityID SecurityID_37("STRING_1362707320");
    noOrders_0_0.set(SecurityID_37);
    Instrument_37.insert(SecurityID_37.getString());
    FIX::SecurityIDSource SecurityIDSource_37("STRING_7");
    noOrders_0_0.set(SecurityIDSource_37);
    Instrument_37.insert(SecurityIDSource_37.getString());
    FIX::SecurityStatus SecurityStatus_37("STRING_2");
    noOrders_0_0.set(SecurityStatus_37);
    Instrument_37.insert(SecurityStatus_37.getString());
    FIX::SecuritySubType SecuritySubType_38("STRING_879479330");
    noOrders_0_0.set(SecuritySubType_38);
    Instrument_37.insert(SecuritySubType_38.getString());
    FIX::SecurityType SecurityType_39("STRING_NONE");
    noOrders_0_0.set(SecurityType_39);
    Instrument_37.insert(SecurityType_39.getString());
    FIX::Seniority Seniority_37("STRING_SB");
    noOrders_0_0.set(Seniority_37);
    Instrument_37.insert(Seniority_37.getString());
    FIX::SettlMethod SettlMethod_37('C');
    noOrders_0_0.set(SettlMethod_37);
    Instrument_37.insert(SettlMethod_37.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_37("STRING_1290840687");
    noOrders_0_0.set(SettleOnOpenFlag_37);
    Instrument_37.insert(SettleOnOpenFlag_37.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_37("STRING_589326969");
    noOrders_0_0.set(StateOrProvinceOfIssue_37);
    Instrument_37.insert(StateOrProvinceOfIssue_37.getString());
    FIX::StrikeCurrency StrikeCurrency_37("CAN");
    noOrders_0_0.set(StrikeCurrency_37);
    Instrument_37.insert(StrikeCurrency_37.getString());
    FIX::StrikeMultiplier StrikeMultiplier_37;
    StrikeMultiplier_37.setString("3942431");
    noOrders_0_0.set(StrikeMultiplier_37);
    Instrument_37.insert(StrikeMultiplier_37.getString());
    FIX::StrikePrice StrikePrice_37;
    StrikePrice_37.setString("9845752");
    noOrders_0_0.set(StrikePrice_37);
    Instrument_37.insert(StrikePrice_37.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_37(5);
    noOrders_0_0.set(StrikePriceBoundaryMethod_37);
    Instrument_37.insert(StrikePriceBoundaryMethod_37.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_37;
    StrikePriceBoundaryPrecision_37.setString("66.060000");
    noOrders_0_0.set(StrikePriceBoundaryPrecision_37);
    Instrument_37.insert(StrikePriceBoundaryPrecision_37.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_37(1);
    noOrders_0_0.set(StrikePriceDeterminationMethod_37);
    Instrument_37.insert(StrikePriceDeterminationMethod_37.getString());
    FIX::StrikeValue StrikeValue_37;
    StrikeValue_37.setString("17169966");
    noOrders_0_0.set(StrikeValue_37);
    Instrument_37.insert(StrikeValue_37.getString());
    FIX::Symbol Symbol_37("STRING_683839361");
    noOrders_0_0.set(Symbol_37);
    Instrument_37.insert(Symbol_37.getString());
    FIX::SymbolSfx SymbolSfx_37("STRING_CD");
    noOrders_0_0.set(SymbolSfx_37);
    Instrument_37.insert(SymbolSfx_37.getString());
    FIX::TimeUnit TimeUnit_37("STRING_H");
    noOrders_0_0.set(TimeUnit_37);
    Instrument_37.insert(TimeUnit_37.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_37(4);
    noOrders_0_0.set(UnderlyingPriceDeterminationMethod_37);
    Instrument_37.insert(UnderlyingPriceDeterminationMethod_37.getString());
    FIX::UnitOfMeasure UnitOfMeasure_37("STRING_Gal");
    noOrders_0_0.set(UnitOfMeasure_37);
    Instrument_37.insert(UnitOfMeasure_37.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_37;
    UnitOfMeasureQty_37.setString("11237323");
    noOrders_0_0.set(UnitOfMeasureQty_37);
    Instrument_37.insert(UnitOfMeasureQty_37.getString());
    FIX::ValuationMethod ValuationMethod_37("STRING_EQTY");
    noOrders_0_0.set(ValuationMethod_37);
    Instrument_37.insert(ValuationMethod_37.getString());
    all_values.push_back(Instrument_37);

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::NewOrderList::NoOrders::NoComplexEvents noComplexEvents_0_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_75;
      FIX::ComplexEventCondition ComplexEventCondition_75(1);
      noComplexEvents_0_1_0.set(ComplexEventCondition_75);
      ComplexEvents_NoComplexEvents_75.insert(ComplexEventCondition_75.getString());
      FIX::ComplexEventPrice ComplexEventPrice_75;
      ComplexEventPrice_75.setString("3790931");
      noComplexEvents_0_1_0.set(ComplexEventPrice_75);
      ComplexEvents_NoComplexEvents_75.insert(ComplexEventPrice_75.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_75(3);
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryMethod_75);
      ComplexEvents_NoComplexEvents_75.insert(ComplexEventPriceBoundaryMethod_75.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_75;
      ComplexEventPriceBoundaryPrecision_75.setString("28.830000");
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryPrecision_75);
      ComplexEvents_NoComplexEvents_75.insert(ComplexEventPriceBoundaryPrecision_75.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_75(3);
      noComplexEvents_0_1_0.set(ComplexEventPriceTimeType_75);
      ComplexEvents_NoComplexEvents_75.insert(ComplexEventPriceTimeType_75.getString());
      FIX::ComplexEventType ComplexEventType_75(4);
      noComplexEvents_0_1_0.set(ComplexEventType_75);
      ComplexEvents_NoComplexEvents_75.insert(ComplexEventType_75.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_75;
      ComplexOptPayoutAmount_75.setString("9746865");
      noComplexEvents_0_1_0.set(ComplexOptPayoutAmount_75);
      ComplexEvents_NoComplexEvents_75.insert(ComplexOptPayoutAmount_75.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_75);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_163;
        FIX::ComplexEventEndDate ComplexEventEndDate_163(FIX::UTCTIMESTAMP(22, 42, 55, 26, 32015));
        noComplexEventDates_0_0_2_0.set(ComplexEventEndDate_163);
        ComplexEventDates_NoComplexEventDates_163.insert(ComplexEventEndDate_163.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_163(FIX::UTCTIMESTAMP(19, 23, 26, 9, 112004));
        noComplexEventDates_0_0_2_0.set(ComplexEventStartDate_163);
        ComplexEventDates_NoComplexEventDates_163.insert(ComplexEventStartDate_163.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_163);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_325;
          FIX::ComplexEventEndTime ComplexEventEndTime_325(FIX::UTCTIMEONLY(19, 22, 58));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventEndTime_325);
          ComplexEventTimes_NoComplexEventTimes_325.insert(ComplexEventEndTime_325.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_325(FIX::UTCTIMEONLY(14, 44, 36));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventStartTime_325);
          ComplexEventTimes_NoComplexEventTimes_325.insert(ComplexEventStartTime_325.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_325);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_326;
          FIX::ComplexEventEndTime ComplexEventEndTime_326(FIX::UTCTIMEONLY(7, 0, 32));
          noComplexEventTimes_0_0_0_3_1.set(ComplexEventEndTime_326);
          ComplexEventTimes_NoComplexEventTimes_326.insert(ComplexEventEndTime_326.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_326(FIX::UTCTIMEONLY(4, 28, 21));
          noComplexEventTimes_0_0_0_3_1.set(ComplexEventStartTime_326);
          ComplexEventTimes_NoComplexEventTimes_326.insert(ComplexEventStartTime_326.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_326);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_1);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_327;
          FIX::ComplexEventEndTime ComplexEventEndTime_327(FIX::UTCTIMEONLY(6, 55, 45));
          noComplexEventTimes_0_0_0_3_2.set(ComplexEventEndTime_327);
          ComplexEventTimes_NoComplexEventTimes_327.insert(ComplexEventEndTime_327.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_327(FIX::UTCTIMEONLY(9, 42, 52));
          noComplexEventTimes_0_0_0_3_2.set(ComplexEventStartTime_327);
          ComplexEventTimes_NoComplexEventTimes_327.insert(ComplexEventStartTime_327.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_327);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_2);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_164;
        FIX::ComplexEventEndDate ComplexEventEndDate_164(FIX::UTCTIMESTAMP(6, 11, 9, 4, 102011));
        noComplexEventDates_0_0_2_1.set(ComplexEventEndDate_164);
        ComplexEventDates_NoComplexEventDates_164.insert(ComplexEventEndDate_164.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_164(FIX::UTCTIMESTAMP(20, 2, 49, 5, 52001));
        noComplexEventDates_0_0_2_1.set(ComplexEventStartDate_164);
        ComplexEventDates_NoComplexEventDates_164.insert(ComplexEventStartDate_164.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_164);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_328;
          FIX::ComplexEventEndTime ComplexEventEndTime_328(FIX::UTCTIMEONLY(21, 9, 22));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventEndTime_328);
          ComplexEventTimes_NoComplexEventTimes_328.insert(ComplexEventEndTime_328.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_328(FIX::UTCTIMEONLY(5, 50, 18));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventStartTime_328);
          ComplexEventTimes_NoComplexEventTimes_328.insert(ComplexEventStartTime_328.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_328);

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_0);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_1);
      }
      noOrders_0_0.addGroup(noComplexEvents_0_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoComplexEvents noComplexEvents_0_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_76;
      FIX::ComplexEventCondition ComplexEventCondition_76(2);
      noComplexEvents_0_1_1.set(ComplexEventCondition_76);
      ComplexEvents_NoComplexEvents_76.insert(ComplexEventCondition_76.getString());
      FIX::ComplexEventPrice ComplexEventPrice_76;
      ComplexEventPrice_76.setString("10301402");
      noComplexEvents_0_1_1.set(ComplexEventPrice_76);
      ComplexEvents_NoComplexEvents_76.insert(ComplexEventPrice_76.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_76(1);
      noComplexEvents_0_1_1.set(ComplexEventPriceBoundaryMethod_76);
      ComplexEvents_NoComplexEvents_76.insert(ComplexEventPriceBoundaryMethod_76.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_76;
      ComplexEventPriceBoundaryPrecision_76.setString("5.130000");
      noComplexEvents_0_1_1.set(ComplexEventPriceBoundaryPrecision_76);
      ComplexEvents_NoComplexEvents_76.insert(ComplexEventPriceBoundaryPrecision_76.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_76(3);
      noComplexEvents_0_1_1.set(ComplexEventPriceTimeType_76);
      ComplexEvents_NoComplexEvents_76.insert(ComplexEventPriceTimeType_76.getString());
      FIX::ComplexEventType ComplexEventType_76(2);
      noComplexEvents_0_1_1.set(ComplexEventType_76);
      ComplexEvents_NoComplexEvents_76.insert(ComplexEventType_76.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_76;
      ComplexOptPayoutAmount_76.setString("1077476");
      noComplexEvents_0_1_1.set(ComplexOptPayoutAmount_76);
      ComplexEvents_NoComplexEvents_76.insert(ComplexOptPayoutAmount_76.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_76);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_165;
        FIX::ComplexEventEndDate ComplexEventEndDate_165(FIX::UTCTIMESTAMP(9, 35, 1, 25, 22016));
        noComplexEventDates_0_1_2_0.set(ComplexEventEndDate_165);
        ComplexEventDates_NoComplexEventDates_165.insert(ComplexEventEndDate_165.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_165(FIX::UTCTIMESTAMP(13, 42, 14, 18, 42007));
        noComplexEventDates_0_1_2_0.set(ComplexEventStartDate_165);
        ComplexEventDates_NoComplexEventDates_165.insert(ComplexEventStartDate_165.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_165);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_329;
          FIX::ComplexEventEndTime ComplexEventEndTime_329(FIX::UTCTIMEONLY(20, 40, 18));
          noComplexEventTimes_0_1_0_3_0.set(ComplexEventEndTime_329);
          ComplexEventTimes_NoComplexEventTimes_329.insert(ComplexEventEndTime_329.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_329(FIX::UTCTIMEONLY(14, 0, 23));
          noComplexEventTimes_0_1_0_3_0.set(ComplexEventStartTime_329);
          ComplexEventTimes_NoComplexEventTimes_329.insert(ComplexEventStartTime_329.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_329);

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_0);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_0);
      }
      noOrders_0_0.addGroup(noComplexEvents_0_1_1);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::NewOrderList::NoOrders::NoEvents noEvents_0_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_79;
      FIX::EventDate EventDate_79("LOCALMKTDATE_1565212008");
      noEvents_0_1_0.set(EventDate_79);
      EvntGrp_NoEvents_79.insert(EventDate_79.getString());
      FIX::EventPx EventPx_79;
      EventPx_79.setString("11788169");
      noEvents_0_1_0.set(EventPx_79);
      EvntGrp_NoEvents_79.insert(EventPx_79.getString());
      FIX::EventText EventText_79("STRING_1136327270");
      noEvents_0_1_0.set(EventText_79);
      EvntGrp_NoEvents_79.insert(EventText_79.getString());
      FIX::EventTime EventTime_79(FIX::UTCTIMESTAMP(0, 18, 37, 7, 82010));
      noEvents_0_1_0.set(EventTime_79);
      EvntGrp_NoEvents_79.insert(EventTime_79.getString());
      FIX::EventType EventType_79(9);
      noEvents_0_1_0.set(EventType_79);
      EvntGrp_NoEvents_79.insert(EventType_79.getString());
      all_values.push_back(EvntGrp_NoEvents_79);

      noOrders_0_0.addGroup(noEvents_0_1_0);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::NewOrderList::NoOrders::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_68;
      FIX::InstrumentPartyID InstrumentPartyID_68("STRING_1116073197");
      noInstrumentParties_0_1_0.set(InstrumentPartyID_68);
      InstrumentParties_NoInstrumentParties_68.insert(InstrumentPartyID_68.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_68('1');
      noInstrumentParties_0_1_0.set(InstrumentPartyIDSource_68);
      InstrumentParties_NoInstrumentParties_68.insert(InstrumentPartyIDSource_68.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_68(186005793);
      noInstrumentParties_0_1_0.set(InstrumentPartyRole_68);
      InstrumentParties_NoInstrumentParties_68.insert(InstrumentPartyRole_68.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_68);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderList::NoOrders::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_134;
        FIX::InstrumentPartySubID InstrumentPartySubID_134("STRING_1363767203");
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubID_134);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_134.insert(InstrumentPartySubID_134.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_134(15442659);
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubIDType_134);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_134.insert(InstrumentPartySubIDType_134.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_134);

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      noOrders_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoInstrumentParties noInstrumentParties_0_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_69;
      FIX::InstrumentPartyID InstrumentPartyID_69("STRING_1496492469");
      noInstrumentParties_0_1_1.set(InstrumentPartyID_69);
      InstrumentParties_NoInstrumentParties_69.insert(InstrumentPartyID_69.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_69('6');
      noInstrumentParties_0_1_1.set(InstrumentPartyIDSource_69);
      InstrumentParties_NoInstrumentParties_69.insert(InstrumentPartyIDSource_69.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_69(929382731);
      noInstrumentParties_0_1_1.set(InstrumentPartyRole_69);
      InstrumentParties_NoInstrumentParties_69.insert(InstrumentPartyRole_69.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_69);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderList::NoOrders::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_135;
        FIX::InstrumentPartySubID InstrumentPartySubID_135("STRING_375292647");
        noInstrumentPartySubIDs_0_1_2_0.set(InstrumentPartySubID_135);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_135.insert(InstrumentPartySubID_135.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_135(1039834759);
        noInstrumentPartySubIDs_0_1_2_0.set(InstrumentPartySubIDType_135);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_135.insert(InstrumentPartySubIDType_135.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_135);

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_136;
        FIX::InstrumentPartySubID InstrumentPartySubID_136("STRING_224335453");
        noInstrumentPartySubIDs_0_1_2_1.set(InstrumentPartySubID_136);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_136.insert(InstrumentPartySubID_136.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_136(917551845);
        noInstrumentPartySubIDs_0_1_2_1.set(InstrumentPartySubIDType_136);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_136.insert(InstrumentPartySubIDType_136.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_136);

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_137;
        FIX::InstrumentPartySubID InstrumentPartySubID_137("STRING_588067705");
        noInstrumentPartySubIDs_0_1_2_2.set(InstrumentPartySubID_137);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_137.insert(InstrumentPartySubID_137.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_137(289116963);
        noInstrumentPartySubIDs_0_1_2_2.set(InstrumentPartySubIDType_137);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_137.insert(InstrumentPartySubIDType_137.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_137);

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_2);
      }
      noOrders_0_0.addGroup(noInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoInstrumentParties noInstrumentParties_0_1_2;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_70;
      FIX::InstrumentPartyID InstrumentPartyID_70("STRING_1452623566");
      noInstrumentParties_0_1_2.set(InstrumentPartyID_70);
      InstrumentParties_NoInstrumentParties_70.insert(InstrumentPartyID_70.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_70('1');
      noInstrumentParties_0_1_2.set(InstrumentPartyIDSource_70);
      InstrumentParties_NoInstrumentParties_70.insert(InstrumentPartyIDSource_70.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_70(392193721);
      noInstrumentParties_0_1_2.set(InstrumentPartyRole_70);
      InstrumentParties_NoInstrumentParties_70.insert(InstrumentPartyRole_70.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_70);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderList::NoOrders::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_2_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_138;
        FIX::InstrumentPartySubID InstrumentPartySubID_138("STRING_451717089");
        noInstrumentPartySubIDs_0_2_2_0.set(InstrumentPartySubID_138);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_138.insert(InstrumentPartySubID_138.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_138(1528520991);
        noInstrumentPartySubIDs_0_2_2_0.set(InstrumentPartySubIDType_138);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_138.insert(InstrumentPartySubIDType_138.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_138);

        noInstrumentParties_0_1_2.addGroup(noInstrumentPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_2_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_139;
        FIX::InstrumentPartySubID InstrumentPartySubID_139("STRING_905372379");
        noInstrumentPartySubIDs_0_2_2_1.set(InstrumentPartySubID_139);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_139.insert(InstrumentPartySubID_139.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_139(1693892073);
        noInstrumentPartySubIDs_0_2_2_1.set(InstrumentPartySubIDType_139);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_139.insert(InstrumentPartySubIDType_139.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_139);

        noInstrumentParties_0_1_2.addGroup(noInstrumentPartySubIDs_0_2_2_1);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_2_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_140;
        FIX::InstrumentPartySubID InstrumentPartySubID_140("STRING_625112281");
        noInstrumentPartySubIDs_0_2_2_2.set(InstrumentPartySubID_140);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_140.insert(InstrumentPartySubID_140.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_140(146374088);
        noInstrumentPartySubIDs_0_2_2_2.set(InstrumentPartySubIDType_140);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_140.insert(InstrumentPartySubIDType_140.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_140);

        noInstrumentParties_0_1_2.addGroup(noInstrumentPartySubIDs_0_2_2_2);
      }
      noOrders_0_0.addGroup(noInstrumentParties_0_1_2);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::NewOrderList::NoOrders::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_72;
      FIX::SecurityAltID SecurityAltID_72("STRING_1672700685");
      noSecurityAltID_0_1_0.set(SecurityAltID_72);
      SecAltIDGrp_NoSecurityAltID_72.insert(SecurityAltID_72.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_72("STRING_1463126172");
      noSecurityAltID_0_1_0.set(SecurityAltIDSource_72);
      SecAltIDGrp_NoSecurityAltID_72.insert(SecurityAltIDSource_72.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_72);

      noOrders_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoSecurityAltID noSecurityAltID_0_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_73;
      FIX::SecurityAltID SecurityAltID_73("STRING_742632341");
      noSecurityAltID_0_1_1.set(SecurityAltID_73);
      SecAltIDGrp_NoSecurityAltID_73.insert(SecurityAltID_73.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_73("STRING_1085889954");
      noSecurityAltID_0_1_1.set(SecurityAltIDSource_73);
      SecAltIDGrp_NoSecurityAltID_73.insert(SecurityAltIDSource_73.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_73);

      noOrders_0_0.addGroup(noSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoSecurityAltID noSecurityAltID_0_1_2;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_74;
      FIX::SecurityAltID SecurityAltID_74("STRING_431715722");
      noSecurityAltID_0_1_2.set(SecurityAltID_74);
      SecAltIDGrp_NoSecurityAltID_74.insert(SecurityAltID_74.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_74("STRING_389710942");
      noSecurityAltID_0_1_2.set(SecurityAltIDSource_74);
      SecAltIDGrp_NoSecurityAltID_74.insert(SecurityAltIDSource_74.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_74);

      noOrders_0_0.addGroup(noSecurityAltID_0_1_2);
    }
    // SecurityXML
    multiset<string> SecurityXML_74;
    FIX::SecurityXML SecurityXML_75("XMLDATA_1271895747");
    noOrders_0_0.set(SecurityXML_75);
    FIX::SecurityXMLLen SecurityXMLLen_37(433672781);
    noOrders_0_0.set(SecurityXMLLen_37);
    FIX::SecurityXMLSchema SecurityXMLSchema_37("STRING_1753478146");
    noOrders_0_0.set(SecurityXMLSchema_37);
    SecurityXML_74.insert(SecurityXMLSchema_37.getString());
    all_values.push_back(SecurityXML_74);

    // OrderQtyData
    multiset<string> OrderQtyData_12;
    FIX::CashOrderQty CashOrderQty_12;
    CashOrderQty_12.setString("12873384");
    noOrders_0_0.set(CashOrderQty_12);
    OrderQtyData_12.insert(CashOrderQty_12.getString());
    FIX::OrderPercent OrderPercent_12;
    OrderPercent_12.setString("52.500000");
    noOrders_0_0.set(OrderPercent_12);
    OrderQtyData_12.insert(OrderPercent_12.getString());
    FIX::OrderQty OrderQty_21;
    OrderQty_21.setString("2486785");
    noOrders_0_0.set(OrderQty_21);
    OrderQtyData_12.insert(OrderQty_21.getString());
    FIX::RoundingDirection RoundingDirection_12('1');
    noOrders_0_0.set(RoundingDirection_12);
    OrderQtyData_12.insert(RoundingDirection_12.getString());
    FIX::RoundingModulus RoundingModulus_12;
    RoundingModulus_12.setString("7707577");
    noOrders_0_0.set(RoundingModulus_12);
    OrderQtyData_12.insert(RoundingModulus_12.getString());
    all_values.push_back(OrderQtyData_12);

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::NewOrderList::NoOrders::NoPartyIDs noPartyIDs_0_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_71;
      FIX::PartyID PartyID_71("STRING_1109072249");
      noPartyIDs_0_1_0.set(PartyID_71);
      Parties_NoPartyIDs_71.insert(PartyID_71.getString());
      FIX::PartyIDSource PartyIDSource_71('3');
      noPartyIDs_0_1_0.set(PartyIDSource_71);
      Parties_NoPartyIDs_71.insert(PartyIDSource_71.getString());
      FIX::PartyRole PartyRole_71(22);
      noPartyIDs_0_1_0.set(PartyRole_71);
      Parties_NoPartyIDs_71.insert(PartyRole_71.getString());
      all_values.push_back(Parties_NoPartyIDs_71);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::NewOrderList::NoOrders::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_139;
        FIX::PartySubID PartySubID_139("STRING_1284210160");
        noPartySubIDs_0_0_2_0.set(PartySubID_139);
        PtysSubGrp_NoPartySubIDs_139.insert(PartySubID_139.getString());
        FIX::PartySubIDType PartySubIDType_139(18);
        noPartySubIDs_0_0_2_0.set(PartySubIDType_139);
        PtysSubGrp_NoPartySubIDs_139.insert(PartySubIDType_139.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_139);

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_0);
      }
      noOrders_0_0.addGroup(noPartyIDs_0_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoPartyIDs noPartyIDs_0_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_72;
      FIX::PartyID PartyID_72("STRING_970040135");
      noPartyIDs_0_1_1.set(PartyID_72);
      Parties_NoPartyIDs_72.insert(PartyID_72.getString());
      FIX::PartyIDSource PartyIDSource_72('H');
      noPartyIDs_0_1_1.set(PartyIDSource_72);
      Parties_NoPartyIDs_72.insert(PartyIDSource_72.getString());
      FIX::PartyRole PartyRole_72(75);
      noPartyIDs_0_1_1.set(PartyRole_72);
      Parties_NoPartyIDs_72.insert(PartyRole_72.getString());
      all_values.push_back(Parties_NoPartyIDs_72);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::NewOrderList::NoOrders::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_140;
        FIX::PartySubID PartySubID_140("STRING_1057441225");
        noPartySubIDs_0_1_2_0.set(PartySubID_140);
        PtysSubGrp_NoPartySubIDs_140.insert(PartySubID_140.getString());
        FIX::PartySubIDType PartySubIDType_140(30);
        noPartySubIDs_0_1_2_0.set(PartySubIDType_140);
        PtysSubGrp_NoPartySubIDs_140.insert(PartySubIDType_140.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_140);

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_141;
        FIX::PartySubID PartySubID_141("STRING_968165650");
        noPartySubIDs_0_1_2_1.set(PartySubID_141);
        PtysSubGrp_NoPartySubIDs_141.insert(PartySubID_141.getString());
        FIX::PartySubIDType PartySubIDType_141(30);
        noPartySubIDs_0_1_2_1.set(PartySubIDType_141);
        PtysSubGrp_NoPartySubIDs_141.insert(PartySubIDType_141.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_141);

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_142;
        FIX::PartySubID PartySubID_142("STRING_621277744");
        noPartySubIDs_0_1_2_2.set(PartySubID_142);
        PtysSubGrp_NoPartySubIDs_142.insert(PartySubID_142.getString());
        FIX::PartySubIDType PartySubIDType_142(17);
        noPartySubIDs_0_1_2_2.set(PartySubIDType_142);
        PtysSubGrp_NoPartySubIDs_142.insert(PartySubIDType_142.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_142);

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_2);
      }
      noOrders_0_0.addGroup(noPartyIDs_0_1_1);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoPartyIDs noPartyIDs_0_1_2;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_73;
      FIX::PartyID PartyID_73("STRING_1207770543");
      noPartyIDs_0_1_2.set(PartyID_73);
      Parties_NoPartyIDs_73.insert(PartyID_73.getString());
      FIX::PartyIDSource PartyIDSource_73('B');
      noPartyIDs_0_1_2.set(PartyIDSource_73);
      Parties_NoPartyIDs_73.insert(PartyIDSource_73.getString());
      FIX::PartyRole PartyRole_73(26);
      noPartyIDs_0_1_2.set(PartyRole_73);
      Parties_NoPartyIDs_73.insert(PartyRole_73.getString());
      all_values.push_back(Parties_NoPartyIDs_73);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::NewOrderList::NoOrders::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_2_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_143;
        FIX::PartySubID PartySubID_143("STRING_368635991");
        noPartySubIDs_0_2_2_0.set(PartySubID_143);
        PtysSubGrp_NoPartySubIDs_143.insert(PartySubID_143.getString());
        FIX::PartySubIDType PartySubIDType_143(12);
        noPartySubIDs_0_2_2_0.set(PartySubIDType_143);
        PtysSubGrp_NoPartySubIDs_143.insert(PartySubIDType_143.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_143);

        noPartyIDs_0_1_2.addGroup(noPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_2_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_144;
        FIX::PartySubID PartySubID_144("STRING_1418072597");
        noPartySubIDs_0_2_2_1.set(PartySubID_144);
        PtysSubGrp_NoPartySubIDs_144.insert(PartySubID_144.getString());
        FIX::PartySubIDType PartySubIDType_144(2);
        noPartySubIDs_0_2_2_1.set(PartySubIDType_144);
        PtysSubGrp_NoPartySubIDs_144.insert(PartySubIDType_144.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_144);

        noPartyIDs_0_1_2.addGroup(noPartySubIDs_0_2_2_1);
      }
      noOrders_0_0.addGroup(noPartyIDs_0_1_2);
    }
    // PegInstructions
    multiset<string> PegInstructions_4;
    FIX::PegLimitType PegLimitType_4(1);
    noOrders_0_0.set(PegLimitType_4);
    PegInstructions_4.insert(PegLimitType_4.getString());
    FIX::PegMoveType PegMoveType_4(0);
    noOrders_0_0.set(PegMoveType_4);
    PegInstructions_4.insert(PegMoveType_4.getString());
    FIX::PegOffsetType PegOffsetType_4(2);
    noOrders_0_0.set(PegOffsetType_4);
    PegInstructions_4.insert(PegOffsetType_4.getString());
    FIX::PegOffsetValue PegOffsetValue_4;
    PegOffsetValue_4.setString("14923182");
    noOrders_0_0.set(PegOffsetValue_4);
    PegInstructions_4.insert(PegOffsetValue_4.getString());
    FIX::PegPriceType PegPriceType_4(8);
    noOrders_0_0.set(PegPriceType_4);
    PegInstructions_4.insert(PegPriceType_4.getString());
    FIX::PegRoundDirection PegRoundDirection_4(1);
    noOrders_0_0.set(PegRoundDirection_4);
    PegInstructions_4.insert(PegRoundDirection_4.getString());
    FIX::PegScope PegScope_4(2);
    noOrders_0_0.set(PegScope_4);
    PegInstructions_4.insert(PegScope_4.getString());
    FIX::PegSecurityDesc PegSecurityDesc_4("STRING_1736237095");
    noOrders_0_0.set(PegSecurityDesc_4);
    PegInstructions_4.insert(PegSecurityDesc_4.getString());
    FIX::PegSecurityID PegSecurityID_4("STRING_203357667");
    noOrders_0_0.set(PegSecurityID_4);
    PegInstructions_4.insert(PegSecurityID_4.getString());
    FIX::PegSecurityIDSource PegSecurityIDSource_4("STRING_1510328962");
    noOrders_0_0.set(PegSecurityIDSource_4);
    PegInstructions_4.insert(PegSecurityIDSource_4.getString());
    FIX::PegSymbol PegSymbol_4("STRING_1285893402");
    noOrders_0_0.set(PegSymbol_4);
    PegInstructions_4.insert(PegSymbol_4.getString());
    all_values.push_back(PegInstructions_4);

    // PreAllocGrp
    // Group PreAllocGrp.NoAllocs
    {
      FIX50SP2::NewOrderList::NoOrders::NoAllocs noAllocs_0_1_0;
      // PreAllocGrp.NoAllocs
      multiset<string> PreAllocGrp_NoAllocs_12;
      FIX::AllocAccount AllocAccount_24("STRING_209508313");
      noAllocs_0_1_0.set(AllocAccount_24);
      PreAllocGrp_NoAllocs_12.insert(AllocAccount_24.getString());
      FIX::AllocAcctIDSource AllocAcctIDSource_24(108449889);
      noAllocs_0_1_0.set(AllocAcctIDSource_24);
      PreAllocGrp_NoAllocs_12.insert(AllocAcctIDSource_24.getString());
      FIX::AllocQty AllocQty_23;
      AllocQty_23.setString("10164880");
      noAllocs_0_1_0.set(AllocQty_23);
      PreAllocGrp_NoAllocs_12.insert(AllocQty_23.getString());
      FIX::AllocSettlCurrency AllocSettlCurrency_19("CAN");
      noAllocs_0_1_0.set(AllocSettlCurrency_19);
      PreAllocGrp_NoAllocs_12.insert(AllocSettlCurrency_19.getString());
      FIX::IndividualAllocID IndividualAllocID_24("STRING_2073929286");
      noAllocs_0_1_0.set(IndividualAllocID_24);
      PreAllocGrp_NoAllocs_12.insert(IndividualAllocID_24.getString());
      all_values.push_back(PreAllocGrp_NoAllocs_12);

      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_0_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_68;
        FIX::NestedPartyID NestedPartyID_68("STRING_350889115");
        noNestedPartyIDs_0_0_2_0.set(NestedPartyID_68);
        NestedParties_NoNestedPartyIDs_68.insert(NestedPartyID_68.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_68('1');
        noNestedPartyIDs_0_0_2_0.set(NestedPartyIDSource_68);
        NestedParties_NoNestedPartyIDs_68.insert(NestedPartyIDSource_68.getString());
        FIX::NestedPartyRole NestedPartyRole_68(875220991);
        noNestedPartyIDs_0_0_2_0.set(NestedPartyRole_68);
        NestedParties_NoNestedPartyIDs_68.insert(NestedPartyRole_68.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_68);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_130;
          FIX::NestedPartySubID NestedPartySubID_130("STRING_669286040");
          noNestedPartySubIDs_0_0_0_3_0.set(NestedPartySubID_130);
          NstdPtysSubGrp_NoNestedPartySubIDs_130.insert(NestedPartySubID_130.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_130(812141260);
          noNestedPartySubIDs_0_0_0_3_0.set(NestedPartySubIDType_130);
          NstdPtysSubGrp_NoNestedPartySubIDs_130.insert(NestedPartySubIDType_130.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_130);

          noNestedPartyIDs_0_0_2_0.addGroup(noNestedPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_131;
          FIX::NestedPartySubID NestedPartySubID_131("STRING_2104125303");
          noNestedPartySubIDs_0_0_0_3_1.set(NestedPartySubID_131);
          NstdPtysSubGrp_NoNestedPartySubIDs_131.insert(NestedPartySubID_131.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_131(815462889);
          noNestedPartySubIDs_0_0_0_3_1.set(NestedPartySubIDType_131);
          NstdPtysSubGrp_NoNestedPartySubIDs_131.insert(NestedPartySubIDType_131.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_131);

          noNestedPartyIDs_0_0_2_0.addGroup(noNestedPartySubIDs_0_0_0_3_1);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_0_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_132;
          FIX::NestedPartySubID NestedPartySubID_132("STRING_1180777251");
          noNestedPartySubIDs_0_0_0_3_2.set(NestedPartySubID_132);
          NstdPtysSubGrp_NoNestedPartySubIDs_132.insert(NestedPartySubID_132.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_132(1594286862);
          noNestedPartySubIDs_0_0_0_3_2.set(NestedPartySubIDType_132);
          NstdPtysSubGrp_NoNestedPartySubIDs_132.insert(NestedPartySubIDType_132.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_132);

          noNestedPartyIDs_0_0_2_0.addGroup(noNestedPartySubIDs_0_0_0_3_2);
        }
        noAllocs_0_1_0.addGroup(noNestedPartyIDs_0_0_2_0);
      }
      noOrders_0_0.addGroup(noAllocs_0_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoAllocs noAllocs_0_1_1;
      // PreAllocGrp.NoAllocs
      multiset<string> PreAllocGrp_NoAllocs_13;
      FIX::AllocAccount AllocAccount_25("STRING_86051838");
      noAllocs_0_1_1.set(AllocAccount_25);
      PreAllocGrp_NoAllocs_13.insert(AllocAccount_25.getString());
      FIX::AllocAcctIDSource AllocAcctIDSource_25(1983086023);
      noAllocs_0_1_1.set(AllocAcctIDSource_25);
      PreAllocGrp_NoAllocs_13.insert(AllocAcctIDSource_25.getString());
      FIX::AllocQty AllocQty_24;
      AllocQty_24.setString("6904429");
      noAllocs_0_1_1.set(AllocQty_24);
      PreAllocGrp_NoAllocs_13.insert(AllocQty_24.getString());
      FIX::AllocSettlCurrency AllocSettlCurrency_20("JPY");
      noAllocs_0_1_1.set(AllocSettlCurrency_20);
      PreAllocGrp_NoAllocs_13.insert(AllocSettlCurrency_20.getString());
      FIX::IndividualAllocID IndividualAllocID_25("STRING_35277564");
      noAllocs_0_1_1.set(IndividualAllocID_25);
      PreAllocGrp_NoAllocs_13.insert(IndividualAllocID_25.getString());
      all_values.push_back(PreAllocGrp_NoAllocs_13);

      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_69;
        FIX::NestedPartyID NestedPartyID_69("STRING_1776340868");
        noNestedPartyIDs_0_1_2_0.set(NestedPartyID_69);
        NestedParties_NoNestedPartyIDs_69.insert(NestedPartyID_69.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_69('4');
        noNestedPartyIDs_0_1_2_0.set(NestedPartyIDSource_69);
        NestedParties_NoNestedPartyIDs_69.insert(NestedPartyIDSource_69.getString());
        FIX::NestedPartyRole NestedPartyRole_69(859897488);
        noNestedPartyIDs_0_1_2_0.set(NestedPartyRole_69);
        NestedParties_NoNestedPartyIDs_69.insert(NestedPartyRole_69.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_69);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_133;
          FIX::NestedPartySubID NestedPartySubID_133("STRING_1514412407");
          noNestedPartySubIDs_0_1_0_3_0.set(NestedPartySubID_133);
          NstdPtysSubGrp_NoNestedPartySubIDs_133.insert(NestedPartySubID_133.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_133(2145790890);
          noNestedPartySubIDs_0_1_0_3_0.set(NestedPartySubIDType_133);
          NstdPtysSubGrp_NoNestedPartySubIDs_133.insert(NestedPartySubIDType_133.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_133);

          noNestedPartyIDs_0_1_2_0.addGroup(noNestedPartySubIDs_0_1_0_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_134;
          FIX::NestedPartySubID NestedPartySubID_134("STRING_1319782714");
          noNestedPartySubIDs_0_1_0_3_1.set(NestedPartySubID_134);
          NstdPtysSubGrp_NoNestedPartySubIDs_134.insert(NestedPartySubID_134.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_134(1723920720);
          noNestedPartySubIDs_0_1_0_3_1.set(NestedPartySubIDType_134);
          NstdPtysSubGrp_NoNestedPartySubIDs_134.insert(NestedPartySubIDType_134.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_134);

          noNestedPartyIDs_0_1_2_0.addGroup(noNestedPartySubIDs_0_1_0_3_1);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_0_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_135;
          FIX::NestedPartySubID NestedPartySubID_135("STRING_106757131");
          noNestedPartySubIDs_0_1_0_3_2.set(NestedPartySubID_135);
          NstdPtysSubGrp_NoNestedPartySubIDs_135.insert(NestedPartySubID_135.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_135(188787127);
          noNestedPartySubIDs_0_1_0_3_2.set(NestedPartySubIDType_135);
          NstdPtysSubGrp_NoNestedPartySubIDs_135.insert(NestedPartySubIDType_135.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_135);

          noNestedPartyIDs_0_1_2_0.addGroup(noNestedPartySubIDs_0_1_0_3_2);
        }
        noAllocs_0_1_1.addGroup(noNestedPartyIDs_0_1_2_0);
      }
      noOrders_0_0.addGroup(noAllocs_0_1_1);
    }
    // SpreadOrBenchmarkCurveData
    multiset<string> SpreadOrBenchmarkCurveData_16;
    FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_16("USD");
    noOrders_0_0.set(BenchmarkCurveCurrency_16);
    SpreadOrBenchmarkCurveData_16.insert(BenchmarkCurveCurrency_16.getString());
    FIX::BenchmarkCurveName BenchmarkCurveName_16("STRING_LIBOR");
    noOrders_0_0.set(BenchmarkCurveName_16);
    SpreadOrBenchmarkCurveData_16.insert(BenchmarkCurveName_16.getString());
    FIX::BenchmarkCurvePoint BenchmarkCurvePoint_16("STRING_1756903558");
    noOrders_0_0.set(BenchmarkCurvePoint_16);
    SpreadOrBenchmarkCurveData_16.insert(BenchmarkCurvePoint_16.getString());
    FIX::BenchmarkPrice BenchmarkPrice_16;
    BenchmarkPrice_16.setString("19878533");
    noOrders_0_0.set(BenchmarkPrice_16);
    SpreadOrBenchmarkCurveData_16.insert(BenchmarkPrice_16.getString());
    FIX::BenchmarkPriceType BenchmarkPriceType_16(1724231910);
    noOrders_0_0.set(BenchmarkPriceType_16);
    SpreadOrBenchmarkCurveData_16.insert(BenchmarkPriceType_16.getString());
    FIX::BenchmarkSecurityID BenchmarkSecurityID_16("STRING_484640901");
    noOrders_0_0.set(BenchmarkSecurityID_16);
    SpreadOrBenchmarkCurveData_16.insert(BenchmarkSecurityID_16.getString());
    FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_16("STRING_696560750");
    noOrders_0_0.set(BenchmarkSecurityIDSource_16);
    SpreadOrBenchmarkCurveData_16.insert(BenchmarkSecurityIDSource_16.getString());
    FIX::Spread Spread_16;
    Spread_16.setString("2460343");
    noOrders_0_0.set(Spread_16);
    SpreadOrBenchmarkCurveData_16.insert(Spread_16.getString());
    all_values.push_back(SpreadOrBenchmarkCurveData_16);

    // Stipulations
    // Group Stipulations.NoStipulations
    {
      FIX50SP2::NewOrderList::NoOrders::NoStipulations noStipulations_0_1_0;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_25;
      FIX::StipulationType StipulationType_25("STRING_CURRENCY");
      noStipulations_0_1_0.set(StipulationType_25);
      Stipulations_NoStipulations_25.insert(StipulationType_25.getString());
      FIX::StipulationValue StipulationValue_25("STRING_1061497191");
      noStipulations_0_1_0.set(StipulationValue_25);
      Stipulations_NoStipulations_25.insert(StipulationValue_25.getString());
      all_values.push_back(Stipulations_NoStipulations_25);

      noOrders_0_0.addGroup(noStipulations_0_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoStipulations noStipulations_0_1_1;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_26;
      FIX::StipulationType StipulationType_26("STRING_CURRENCY");
      noStipulations_0_1_1.set(StipulationType_26);
      Stipulations_NoStipulations_26.insert(StipulationType_26.getString());
      FIX::StipulationValue StipulationValue_26("STRING_100005619");
      noStipulations_0_1_1.set(StipulationValue_26);
      Stipulations_NoStipulations_26.insert(StipulationValue_26.getString());
      all_values.push_back(Stipulations_NoStipulations_26);

      noOrders_0_0.addGroup(noStipulations_0_1_1);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoStipulations noStipulations_0_1_2;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_27;
      FIX::StipulationType StipulationType_27("STRING_ABS");
      noStipulations_0_1_2.set(StipulationType_27);
      Stipulations_NoStipulations_27.insert(StipulationType_27.getString());
      FIX::StipulationValue StipulationValue_27("STRING_165678141");
      noStipulations_0_1_2.set(StipulationValue_27);
      Stipulations_NoStipulations_27.insert(StipulationValue_27.getString());
      all_values.push_back(Stipulations_NoStipulations_27);

      noOrders_0_0.addGroup(noStipulations_0_1_2);
    }
    // StrategyParametersGrp
    // Group StrategyParametersGrp.NoStrategyParameters
    {
      FIX50SP2::NewOrderList::NoOrders::NoStrategyParameters noStrategyParameters_0_1_0;
      // StrategyParametersGrp.NoStrategyParameters
      multiset<string> StrategyParametersGrp_NoStrategyParameters_11;
      FIX::StrategyParameterName StrategyParameterName_11("STRING_1791528224");
      noStrategyParameters_0_1_0.set(StrategyParameterName_11);
      StrategyParametersGrp_NoStrategyParameters_11.insert(StrategyParameterName_11.getString());
      FIX::StrategyParameterType StrategyParameterType_11(19);
      noStrategyParameters_0_1_0.set(StrategyParameterType_11);
      StrategyParametersGrp_NoStrategyParameters_11.insert(StrategyParameterType_11.getString());
      FIX::StrategyParameterValue StrategyParameterValue_11("STRING_825726103");
      noStrategyParameters_0_1_0.set(StrategyParameterValue_11);
      StrategyParametersGrp_NoStrategyParameters_11.insert(StrategyParameterValue_11.getString());
      all_values.push_back(StrategyParametersGrp_NoStrategyParameters_11);

      noOrders_0_0.addGroup(noStrategyParameters_0_1_0);
    }
    // TrdgSesGrp
    // Group TrdgSesGrp.NoTradingSessions
    {
      FIX50SP2::NewOrderList::NoOrders::NoTradingSessions noTradingSessions_0_1_0;
      // TrdgSesGrp.NoTradingSessions
      multiset<string> TrdgSesGrp_NoTradingSessions_7;
      FIX::TradingSessionID TradingSessionID_38("STRING_2");
      noTradingSessions_0_1_0.set(TradingSessionID_38);
      TrdgSesGrp_NoTradingSessions_7.insert(TradingSessionID_38.getString());
      FIX::TradingSessionSubID TradingSessionSubID_38("STRING_2");
      noTradingSessions_0_1_0.set(TradingSessionSubID_38);
      TrdgSesGrp_NoTradingSessions_7.insert(TradingSessionSubID_38.getString());
      all_values.push_back(TrdgSesGrp_NoTradingSessions_7);

      noOrders_0_0.addGroup(noTradingSessions_0_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoTradingSessions noTradingSessions_0_1_1;
      // TrdgSesGrp.NoTradingSessions
      multiset<string> TrdgSesGrp_NoTradingSessions_8;
      FIX::TradingSessionID TradingSessionID_39("STRING_2");
      noTradingSessions_0_1_1.set(TradingSessionID_39);
      TrdgSesGrp_NoTradingSessions_8.insert(TradingSessionID_39.getString());
      FIX::TradingSessionSubID TradingSessionSubID_39("STRING_4");
      noTradingSessions_0_1_1.set(TradingSessionSubID_39);
      TrdgSesGrp_NoTradingSessions_8.insert(TradingSessionSubID_39.getString());
      all_values.push_back(TrdgSesGrp_NoTradingSessions_8);

      noOrders_0_0.addGroup(noTradingSessions_0_1_1);
    }
    // TriggeringInstruction
    multiset<string> TriggeringInstruction_4;
    FIX::TriggerAction TriggerAction_4('1');
    noOrders_0_0.set(TriggerAction_4);
    TriggeringInstruction_4.insert(TriggerAction_4.getString());
    FIX::TriggerNewPrice TriggerNewPrice_4;
    TriggerNewPrice_4.setString("17733933");
    noOrders_0_0.set(TriggerNewPrice_4);
    TriggeringInstruction_4.insert(TriggerNewPrice_4.getString());
    FIX::TriggerNewQty TriggerNewQty_4;
    TriggerNewQty_4.setString("13671257");
    noOrders_0_0.set(TriggerNewQty_4);
    TriggeringInstruction_4.insert(TriggerNewQty_4.getString());
    FIX::TriggerOrderType TriggerOrderType_4('1');
    noOrders_0_0.set(TriggerOrderType_4);
    TriggeringInstruction_4.insert(TriggerOrderType_4.getString());
    FIX::TriggerPrice TriggerPrice_4;
    TriggerPrice_4.setString("18801504");
    noOrders_0_0.set(TriggerPrice_4);
    TriggeringInstruction_4.insert(TriggerPrice_4.getString());
    FIX::TriggerPriceDirection TriggerPriceDirection_4('U');
    noOrders_0_0.set(TriggerPriceDirection_4);
    TriggeringInstruction_4.insert(TriggerPriceDirection_4.getString());
    FIX::TriggerPriceType TriggerPriceType_4('6');
    noOrders_0_0.set(TriggerPriceType_4);
    TriggeringInstruction_4.insert(TriggerPriceType_4.getString());
    FIX::TriggerPriceTypeScope TriggerPriceTypeScope_4('2');
    noOrders_0_0.set(TriggerPriceTypeScope_4);
    TriggeringInstruction_4.insert(TriggerPriceTypeScope_4.getString());
    FIX::TriggerSecurityDesc TriggerSecurityDesc_4("STRING_1671145605");
    noOrders_0_0.set(TriggerSecurityDesc_4);
    TriggeringInstruction_4.insert(TriggerSecurityDesc_4.getString());
    FIX::TriggerSecurityID TriggerSecurityID_4("STRING_885555601");
    noOrders_0_0.set(TriggerSecurityID_4);
    TriggeringInstruction_4.insert(TriggerSecurityID_4.getString());
    FIX::TriggerSecurityIDSource TriggerSecurityIDSource_4("STRING_1210000786");
    noOrders_0_0.set(TriggerSecurityIDSource_4);
    TriggeringInstruction_4.insert(TriggerSecurityIDSource_4.getString());
    FIX::TriggerSymbol TriggerSymbol_4("STRING_1247893867");
    noOrders_0_0.set(TriggerSymbol_4);
    TriggeringInstruction_4.insert(TriggerSymbol_4.getString());
    FIX::TriggerTradingSessionID TriggerTradingSessionID_4("STRING_1370196503");
    noOrders_0_0.set(TriggerTradingSessionID_4);
    TriggeringInstruction_4.insert(TriggerTradingSessionID_4.getString());
    FIX::TriggerTradingSessionSubID TriggerTradingSessionSubID_4("STRING_1906561537");
    noOrders_0_0.set(TriggerTradingSessionSubID_4);
    TriggeringInstruction_4.insert(TriggerTradingSessionSubID_4.getString());
    FIX::TriggerType TriggerType_4('2');
    noOrders_0_0.set(TriggerType_4);
    TriggeringInstruction_4.insert(TriggerType_4.getString());
    all_values.push_back(TriggeringInstruction_4);

    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::NewOrderList::NoOrders::NoUnderlyings noUnderlyings_0_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_59;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_59("DATA_412280294");
      noUnderlyings_0_1_0.set(EncodedUnderlyingIssuer_59);
      UnderlyingInstrument_59.insert(EncodedUnderlyingIssuer_59.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_59(407941713);
      noUnderlyings_0_1_0.set(EncodedUnderlyingIssuerLen_59);
      UnderlyingInstrument_59.insert(EncodedUnderlyingIssuerLen_59.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_59("DATA_849570782");
      noUnderlyings_0_1_0.set(EncodedUnderlyingSecurityDesc_59);
      UnderlyingInstrument_59.insert(EncodedUnderlyingSecurityDesc_59.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_59(512285914);
      noUnderlyings_0_1_0.set(EncodedUnderlyingSecurityDescLen_59);
      UnderlyingInstrument_59.insert(EncodedUnderlyingSecurityDescLen_59.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_59;
      UnderlyingAdjustedQuantity_59.setString("15554907");
      noUnderlyings_0_1_0.set(UnderlyingAdjustedQuantity_59);
      UnderlyingInstrument_59.insert(UnderlyingAdjustedQuantity_59.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_59;
      UnderlyingAllocationPercent_59.setString("89.230000");
      noUnderlyings_0_1_0.set(UnderlyingAllocationPercent_59);
      UnderlyingInstrument_59.insert(UnderlyingAllocationPercent_59.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_59;
      UnderlyingAttachmentPoint_59.setString("44.520000");
      noUnderlyings_0_1_0.set(UnderlyingAttachmentPoint_59);
      UnderlyingInstrument_59.insert(UnderlyingAttachmentPoint_59.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_59("STRING_1199535319");
      noUnderlyings_0_1_0.set(UnderlyingCFICode_59);
      UnderlyingInstrument_59.insert(UnderlyingCFICode_59.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_59("STRING_1601519814");
      noUnderlyings_0_1_0.set(UnderlyingCPProgram_59);
      UnderlyingInstrument_59.insert(UnderlyingCPProgram_59.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_59("STRING_2128460555");
      noUnderlyings_0_1_0.set(UnderlyingCPRegType_59);
      UnderlyingInstrument_59.insert(UnderlyingCPRegType_59.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_59;
      UnderlyingCapValue_59.setString("21147239");
      noUnderlyings_0_1_0.set(UnderlyingCapValue_59);
      UnderlyingInstrument_59.insert(UnderlyingCapValue_59.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_59;
      UnderlyingCashAmount_59.setString("18166479");
      noUnderlyings_0_1_0.set(UnderlyingCashAmount_59);
      UnderlyingInstrument_59.insert(UnderlyingCashAmount_59.getString());
      FIX::UnderlyingCashType UnderlyingCashType_59("STRING_FIXED");
      noUnderlyings_0_1_0.set(UnderlyingCashType_59);
      UnderlyingInstrument_59.insert(UnderlyingCashType_59.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_59;
      UnderlyingContractMultiplier_59.setString("17423263");
      noUnderlyings_0_1_0.set(UnderlyingContractMultiplier_59);
      UnderlyingInstrument_59.insert(UnderlyingContractMultiplier_59.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_59(1863990923);
      noUnderlyings_0_1_0.set(UnderlyingContractMultiplierUnit_59);
      UnderlyingInstrument_59.insert(UnderlyingContractMultiplierUnit_59.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_59("COUNTRY_1007524764");
      noUnderlyings_0_1_0.set(UnderlyingCountryOfIssue_59);
      UnderlyingInstrument_59.insert(UnderlyingCountryOfIssue_59.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_59("LOCALMKTDATE_1368236092");
      noUnderlyings_0_1_0.set(UnderlyingCouponPaymentDate_59);
      UnderlyingInstrument_59.insert(UnderlyingCouponPaymentDate_59.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_59;
      UnderlyingCouponRate_59.setString("29.880000");
      noUnderlyings_0_1_0.set(UnderlyingCouponRate_59);
      UnderlyingInstrument_59.insert(UnderlyingCouponRate_59.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_59("STRING_780700144");
      noUnderlyings_0_1_0.set(UnderlyingCreditRating_59);
      UnderlyingInstrument_59.insert(UnderlyingCreditRating_59.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_59("GBP");
      noUnderlyings_0_1_0.set(UnderlyingCurrency_59);
      UnderlyingInstrument_59.insert(UnderlyingCurrency_59.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_59;
      UnderlyingCurrentValue_59.setString("20568358");
      noUnderlyings_0_1_0.set(UnderlyingCurrentValue_59);
      UnderlyingInstrument_59.insert(UnderlyingCurrentValue_59.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_59;
      UnderlyingDetachmentPoint_59.setString("3.490000");
      noUnderlyings_0_1_0.set(UnderlyingDetachmentPoint_59);
      UnderlyingInstrument_59.insert(UnderlyingDetachmentPoint_59.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_59;
      UnderlyingDirtyPrice_59.setString("157241");
      noUnderlyings_0_1_0.set(UnderlyingDirtyPrice_59);
      UnderlyingInstrument_59.insert(UnderlyingDirtyPrice_59.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_59;
      UnderlyingEndPrice_59.setString("7949077");
      noUnderlyings_0_1_0.set(UnderlyingEndPrice_59);
      UnderlyingInstrument_59.insert(UnderlyingEndPrice_59.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_59;
      UnderlyingEndValue_59.setString("15330511");
      noUnderlyings_0_1_0.set(UnderlyingEndValue_59);
      UnderlyingInstrument_59.insert(UnderlyingEndValue_59.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_59(1263618005);
      noUnderlyings_0_1_0.set(UnderlyingExerciseStyle_59);
      UnderlyingInstrument_59.insert(UnderlyingExerciseStyle_59.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_59;
      UnderlyingFXRate_59.setString("176206");
      noUnderlyings_0_1_0.set(UnderlyingFXRate_59);
      UnderlyingInstrument_59.insert(UnderlyingFXRate_59.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_59('D');
      noUnderlyings_0_1_0.set(UnderlyingFXRateCalc_59);
      UnderlyingInstrument_59.insert(UnderlyingFXRateCalc_59.getString());
      FIX::UnderlyingFactor UnderlyingFactor_59;
      UnderlyingFactor_59.setString("6100625");
      noUnderlyings_0_1_0.set(UnderlyingFactor_59);
      UnderlyingInstrument_59.insert(UnderlyingFactor_59.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_59(537115661);
      noUnderlyings_0_1_0.set(UnderlyingFlowScheduleType_59);
      UnderlyingInstrument_59.insert(UnderlyingFlowScheduleType_59.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_59("STRING_1704409319");
      noUnderlyings_0_1_0.set(UnderlyingInstrRegistry_59);
      UnderlyingInstrument_59.insert(UnderlyingInstrRegistry_59.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_59("LOCALMKTDATE_1018004239");
      noUnderlyings_0_1_0.set(UnderlyingIssueDate_59);
      UnderlyingInstrument_59.insert(UnderlyingIssueDate_59.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_59("STRING_1386686444");
      noUnderlyings_0_1_0.set(UnderlyingIssuer_59);
      UnderlyingInstrument_59.insert(UnderlyingIssuer_59.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_59("STRING_69211585");
      noUnderlyings_0_1_0.set(UnderlyingLocaleOfIssue_59);
      UnderlyingInstrument_59.insert(UnderlyingLocaleOfIssue_59.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_59("LOCALMKTDATE_426011334");
      noUnderlyings_0_1_0.set(UnderlyingMaturityDate_59);
      UnderlyingInstrument_59.insert(UnderlyingMaturityDate_59.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_59("MONTHYEAR_254451719");
      noUnderlyings_0_1_0.set(UnderlyingMaturityMonthYear_59);
      UnderlyingInstrument_59.insert(UnderlyingMaturityMonthYear_59.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_59("TZTIMEONLY_1371946037");
      noUnderlyings_0_1_0.set(UnderlyingMaturityTime_59);
      UnderlyingInstrument_59.insert(UnderlyingMaturityTime_59.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_59;
      UnderlyingNotionalPercentageOutstanding_59.setString("66.540000");
      noUnderlyings_0_1_0.set(UnderlyingNotionalPercentageOutstanding_59);
      UnderlyingInstrument_59.insert(UnderlyingNotionalPercentageOutstanding_59.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_59('1');
      noUnderlyings_0_1_0.set(UnderlyingOptAttribute_59);
      UnderlyingInstrument_59.insert(UnderlyingOptAttribute_59.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_59;
      UnderlyingOriginalNotionalPercentageOutstanding_59.setString("29.450000");
      noUnderlyings_0_1_0.set(UnderlyingOriginalNotionalPercentageOutstanding_59);
      UnderlyingInstrument_59.insert(UnderlyingOriginalNotionalPercentageOutstanding_59.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_59("STRING_1592786942");
      noUnderlyings_0_1_0.set(UnderlyingPriceUnitOfMeasure_59);
      UnderlyingInstrument_59.insert(UnderlyingPriceUnitOfMeasure_59.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_59;
      UnderlyingPriceUnitOfMeasureQty_59.setString("15251358");
      noUnderlyings_0_1_0.set(UnderlyingPriceUnitOfMeasureQty_59);
      UnderlyingInstrument_59.insert(UnderlyingPriceUnitOfMeasureQty_59.getString());
      FIX::UnderlyingProduct UnderlyingProduct_59(16225753);
      noUnderlyings_0_1_0.set(UnderlyingProduct_59);
      UnderlyingInstrument_59.insert(UnderlyingProduct_59.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_59(1187629688);
      noUnderlyings_0_1_0.set(UnderlyingPutOrCall_59);
      UnderlyingInstrument_59.insert(UnderlyingPutOrCall_59.getString());
      FIX::UnderlyingPx UnderlyingPx_59;
      UnderlyingPx_59.setString("12416430");
      noUnderlyings_0_1_0.set(UnderlyingPx_59);
      UnderlyingInstrument_59.insert(UnderlyingPx_59.getString());
      FIX::UnderlyingQty UnderlyingQty_59;
      UnderlyingQty_59.setString("10237505");
      noUnderlyings_0_1_0.set(UnderlyingQty_59);
      UnderlyingInstrument_59.insert(UnderlyingQty_59.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_59("LOCALMKTDATE_408382132");
      noUnderlyings_0_1_0.set(UnderlyingRedemptionDate_59);
      UnderlyingInstrument_59.insert(UnderlyingRedemptionDate_59.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_59("STRING_177792427");
      noUnderlyings_0_1_0.set(UnderlyingRepoCollateralSecurityType_59);
      UnderlyingInstrument_59.insert(UnderlyingRepoCollateralSecurityType_59.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_59;
      UnderlyingRepurchaseRate_59.setString("6.610000");
      noUnderlyings_0_1_0.set(UnderlyingRepurchaseRate_59);
      UnderlyingInstrument_59.insert(UnderlyingRepurchaseRate_59.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_59(1509285055);
      noUnderlyings_0_1_0.set(UnderlyingRepurchaseTerm_59);
      UnderlyingInstrument_59.insert(UnderlyingRepurchaseTerm_59.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_59("STRING_669854607");
      noUnderlyings_0_1_0.set(UnderlyingRestructuringType_59);
      UnderlyingInstrument_59.insert(UnderlyingRestructuringType_59.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_59("STRING_1713802849");
      noUnderlyings_0_1_0.set(UnderlyingSecurityDesc_59);
      UnderlyingInstrument_59.insert(UnderlyingSecurityDesc_59.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_59("EXCHANGE_1832335404");
      noUnderlyings_0_1_0.set(UnderlyingSecurityExchange_59);
      UnderlyingInstrument_59.insert(UnderlyingSecurityExchange_59.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_59("STRING_685578744");
      noUnderlyings_0_1_0.set(UnderlyingSecurityID_59);
      UnderlyingInstrument_59.insert(UnderlyingSecurityID_59.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_59("STRING_361226991");
      noUnderlyings_0_1_0.set(UnderlyingSecurityIDSource_59);
      UnderlyingInstrument_59.insert(UnderlyingSecurityIDSource_59.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_59("STRING_1217902891");
      noUnderlyings_0_1_0.set(UnderlyingSecuritySubType_59);
      UnderlyingInstrument_59.insert(UnderlyingSecuritySubType_59.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_59("STRING_1949196749");
      noUnderlyings_0_1_0.set(UnderlyingSecurityType_59);
      UnderlyingInstrument_59.insert(UnderlyingSecurityType_59.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_59("STRING_378847635");
      noUnderlyings_0_1_0.set(UnderlyingSeniority_59);
      UnderlyingInstrument_59.insert(UnderlyingSeniority_59.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_59("STRING_362548268");
      noUnderlyings_0_1_0.set(UnderlyingSettlMethod_59);
      UnderlyingInstrument_59.insert(UnderlyingSettlMethod_59.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_59(5);
      noUnderlyings_0_1_0.set(UnderlyingSettlementType_59);
      UnderlyingInstrument_59.insert(UnderlyingSettlementType_59.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_59;
      UnderlyingStartValue_59.setString("9159632");
      noUnderlyings_0_1_0.set(UnderlyingStartValue_59);
      UnderlyingInstrument_59.insert(UnderlyingStartValue_59.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_59("STRING_2066957587");
      noUnderlyings_0_1_0.set(UnderlyingStateOrProvinceOfIssue_59);
      UnderlyingInstrument_59.insert(UnderlyingStateOrProvinceOfIssue_59.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_59("CHF");
      noUnderlyings_0_1_0.set(UnderlyingStrikeCurrency_59);
      UnderlyingInstrument_59.insert(UnderlyingStrikeCurrency_59.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_59;
      UnderlyingStrikePrice_59.setString("21361691");
      noUnderlyings_0_1_0.set(UnderlyingStrikePrice_59);
      UnderlyingInstrument_59.insert(UnderlyingStrikePrice_59.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_59("STRING_1855791202");
      noUnderlyings_0_1_0.set(UnderlyingSymbol_59);
      UnderlyingInstrument_59.insert(UnderlyingSymbol_59.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_59("STRING_409617812");
      noUnderlyings_0_1_0.set(UnderlyingSymbolSfx_59);
      UnderlyingInstrument_59.insert(UnderlyingSymbolSfx_59.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_59("STRING_1360631561");
      noUnderlyings_0_1_0.set(UnderlyingTimeUnit_59);
      UnderlyingInstrument_59.insert(UnderlyingTimeUnit_59.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_59("STRING_1333854208");
      noUnderlyings_0_1_0.set(UnderlyingUnitOfMeasure_59);
      UnderlyingInstrument_59.insert(UnderlyingUnitOfMeasure_59.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_59;
      UnderlyingUnitOfMeasureQty_59.setString("1181056");
      noUnderlyings_0_1_0.set(UnderlyingUnitOfMeasureQty_59);
      UnderlyingInstrument_59.insert(UnderlyingUnitOfMeasureQty_59.getString());
      all_values.push_back(UnderlyingInstrument_59);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_117;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_117("STRING_779157502");
        noUnderlyingSecurityAltID_0_0_2_0.set(UnderlyingSecurityAltID_117);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_117.insert(UnderlyingSecurityAltID_117.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_117("STRING_1643241510");
        noUnderlyingSecurityAltID_0_0_2_0.set(UnderlyingSecurityAltIDSource_117);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_117.insert(UnderlyingSecurityAltIDSource_117.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_117);

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_0);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_115;
        FIX::UnderlyingStipType UnderlyingStipType_115("STRING_1966787190");
        noUnderlyingStips_0_0_2_0.set(UnderlyingStipType_115);
        UnderlyingStipulations_NoUnderlyingStips_115.insert(UnderlyingStipType_115.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_115("STRING_737400949");
        noUnderlyingStips_0_0_2_0.set(UnderlyingStipValue_115);
        UnderlyingStipulations_NoUnderlyingStips_115.insert(UnderlyingStipValue_115.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_115);

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_116;
        FIX::UnderlyingStipType UnderlyingStipType_116("STRING_1606047128");
        noUnderlyingStips_0_0_2_1.set(UnderlyingStipType_116);
        UnderlyingStipulations_NoUnderlyingStips_116.insert(UnderlyingStipType_116.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_116("STRING_227685675");
        noUnderlyingStips_0_0_2_1.set(UnderlyingStipValue_116);
        UnderlyingStipulations_NoUnderlyingStips_116.insert(UnderlyingStipValue_116.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_116);

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_1);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_119;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_119("STRING_1263014142");
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyID_119);
        UndlyInstrumentParties_NoUndlyInstrumentParties_119.insert(UnderlyingInstrumentPartyID_119.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_119('1');
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyIDSource_119);
        UndlyInstrumentParties_NoUndlyInstrumentParties_119.insert(UnderlyingInstrumentPartyIDSource_119.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_119(1585047983);
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyRole_119);
        UndlyInstrumentParties_NoUndlyInstrumentParties_119.insert(UnderlyingInstrumentPartyRole_119.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_119);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_229;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_229("STRING_1421822486");
          noUndlyInstrumentPartySubIDs_0_0_0_3_0.set(UnderlyingInstrumentPartySubID_229);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_229.insert(UnderlyingInstrumentPartySubID_229.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_229(123143079);
          noUndlyInstrumentPartySubIDs_0_0_0_3_0.set(UnderlyingInstrumentPartySubIDType_229);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_229.insert(UnderlyingInstrumentPartySubIDType_229.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_229);

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_230;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_230("STRING_1190560334");
          noUndlyInstrumentPartySubIDs_0_0_0_3_1.set(UnderlyingInstrumentPartySubID_230);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_230.insert(UnderlyingInstrumentPartySubID_230.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_230(492241729);
          noUndlyInstrumentPartySubIDs_0_0_0_3_1.set(UnderlyingInstrumentPartySubIDType_230);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_230.insert(UnderlyingInstrumentPartySubIDType_230.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_230);

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_1);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_231;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_231("STRING_2072339829");
          noUndlyInstrumentPartySubIDs_0_0_0_3_2.set(UnderlyingInstrumentPartySubID_231);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_231.insert(UnderlyingInstrumentPartySubID_231.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_231(1569407970);
          noUndlyInstrumentPartySubIDs_0_0_0_3_2.set(UnderlyingInstrumentPartySubIDType_231);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_231.insert(UnderlyingInstrumentPartySubIDType_231.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_231);

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_2);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_120;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_120("STRING_854789997");
        noUndlyInstrumentParties_0_0_2_1.set(UnderlyingInstrumentPartyID_120);
        UndlyInstrumentParties_NoUndlyInstrumentParties_120.insert(UnderlyingInstrumentPartyID_120.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_120('3');
        noUndlyInstrumentParties_0_0_2_1.set(UnderlyingInstrumentPartyIDSource_120);
        UndlyInstrumentParties_NoUndlyInstrumentParties_120.insert(UnderlyingInstrumentPartyIDSource_120.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_120(337887619);
        noUndlyInstrumentParties_0_0_2_1.set(UnderlyingInstrumentPartyRole_120);
        UndlyInstrumentParties_NoUndlyInstrumentParties_120.insert(UnderlyingInstrumentPartyRole_120.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_120);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_232;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_232("STRING_1766411676");
          noUndlyInstrumentPartySubIDs_0_0_1_3_0.set(UnderlyingInstrumentPartySubID_232);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_232.insert(UnderlyingInstrumentPartySubID_232.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_232(493053712);
          noUndlyInstrumentPartySubIDs_0_0_1_3_0.set(UnderlyingInstrumentPartySubIDType_232);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_232.insert(UnderlyingInstrumentPartySubIDType_232.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_232);

          noUndlyInstrumentParties_0_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_0_1_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_1_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_233;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_233("STRING_762949460");
          noUndlyInstrumentPartySubIDs_0_0_1_3_1.set(UnderlyingInstrumentPartySubID_233);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_233.insert(UnderlyingInstrumentPartySubID_233.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_233(1474719230);
          noUndlyInstrumentPartySubIDs_0_0_1_3_1.set(UnderlyingInstrumentPartySubIDType_233);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_233.insert(UnderlyingInstrumentPartySubIDType_233.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_233);

          noUndlyInstrumentParties_0_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_0_1_3_1);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_1_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_234;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_234("STRING_902671524");
          noUndlyInstrumentPartySubIDs_0_0_1_3_2.set(UnderlyingInstrumentPartySubID_234);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_234.insert(UnderlyingInstrumentPartySubID_234.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_234(2123581022);
          noUndlyInstrumentPartySubIDs_0_0_1_3_2.set(UnderlyingInstrumentPartySubIDType_234);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_234.insert(UnderlyingInstrumentPartySubIDType_234.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_234);

          noUndlyInstrumentParties_0_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_0_1_3_2);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_1);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_2;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_121;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_121("STRING_661089790");
        noUndlyInstrumentParties_0_0_2_2.set(UnderlyingInstrumentPartyID_121);
        UndlyInstrumentParties_NoUndlyInstrumentParties_121.insert(UnderlyingInstrumentPartyID_121.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_121('1');
        noUndlyInstrumentParties_0_0_2_2.set(UnderlyingInstrumentPartyIDSource_121);
        UndlyInstrumentParties_NoUndlyInstrumentParties_121.insert(UnderlyingInstrumentPartyIDSource_121.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_121(542168232);
        noUndlyInstrumentParties_0_0_2_2.set(UnderlyingInstrumentPartyRole_121);
        UndlyInstrumentParties_NoUndlyInstrumentParties_121.insert(UnderlyingInstrumentPartyRole_121.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_121);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_235;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_235("STRING_516535085");
          noUndlyInstrumentPartySubIDs_0_0_2_3_0.set(UnderlyingInstrumentPartySubID_235);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_235.insert(UnderlyingInstrumentPartySubID_235.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_235(1124464844);
          noUndlyInstrumentPartySubIDs_0_0_2_3_0.set(UnderlyingInstrumentPartySubIDType_235);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_235.insert(UnderlyingInstrumentPartySubIDType_235.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_235);

          noUndlyInstrumentParties_0_0_2_2.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_3_0);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_2);
      }
      noOrders_0_0.addGroup(noUnderlyings_0_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoUnderlyings noUnderlyings_0_1_1;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_60;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_60("DATA_1259550835");
      noUnderlyings_0_1_1.set(EncodedUnderlyingIssuer_60);
      UnderlyingInstrument_60.insert(EncodedUnderlyingIssuer_60.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_60(1253936034);
      noUnderlyings_0_1_1.set(EncodedUnderlyingIssuerLen_60);
      UnderlyingInstrument_60.insert(EncodedUnderlyingIssuerLen_60.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_60("DATA_583028324");
      noUnderlyings_0_1_1.set(EncodedUnderlyingSecurityDesc_60);
      UnderlyingInstrument_60.insert(EncodedUnderlyingSecurityDesc_60.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_60(1487236510);
      noUnderlyings_0_1_1.set(EncodedUnderlyingSecurityDescLen_60);
      UnderlyingInstrument_60.insert(EncodedUnderlyingSecurityDescLen_60.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_60;
      UnderlyingAdjustedQuantity_60.setString("216457");
      noUnderlyings_0_1_1.set(UnderlyingAdjustedQuantity_60);
      UnderlyingInstrument_60.insert(UnderlyingAdjustedQuantity_60.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_60;
      UnderlyingAllocationPercent_60.setString("24.660000");
      noUnderlyings_0_1_1.set(UnderlyingAllocationPercent_60);
      UnderlyingInstrument_60.insert(UnderlyingAllocationPercent_60.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_60;
      UnderlyingAttachmentPoint_60.setString("35.920000");
      noUnderlyings_0_1_1.set(UnderlyingAttachmentPoint_60);
      UnderlyingInstrument_60.insert(UnderlyingAttachmentPoint_60.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_60("STRING_1606693745");
      noUnderlyings_0_1_1.set(UnderlyingCFICode_60);
      UnderlyingInstrument_60.insert(UnderlyingCFICode_60.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_60("STRING_527892162");
      noUnderlyings_0_1_1.set(UnderlyingCPProgram_60);
      UnderlyingInstrument_60.insert(UnderlyingCPProgram_60.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_60("STRING_351062430");
      noUnderlyings_0_1_1.set(UnderlyingCPRegType_60);
      UnderlyingInstrument_60.insert(UnderlyingCPRegType_60.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_60;
      UnderlyingCapValue_60.setString("17298368");
      noUnderlyings_0_1_1.set(UnderlyingCapValue_60);
      UnderlyingInstrument_60.insert(UnderlyingCapValue_60.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_60;
      UnderlyingCashAmount_60.setString("17184524");
      noUnderlyings_0_1_1.set(UnderlyingCashAmount_60);
      UnderlyingInstrument_60.insert(UnderlyingCashAmount_60.getString());
      FIX::UnderlyingCashType UnderlyingCashType_60("STRING_FIXED");
      noUnderlyings_0_1_1.set(UnderlyingCashType_60);
      UnderlyingInstrument_60.insert(UnderlyingCashType_60.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_60;
      UnderlyingContractMultiplier_60.setString("16546930");
      noUnderlyings_0_1_1.set(UnderlyingContractMultiplier_60);
      UnderlyingInstrument_60.insert(UnderlyingContractMultiplier_60.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_60(1140376818);
      noUnderlyings_0_1_1.set(UnderlyingContractMultiplierUnit_60);
      UnderlyingInstrument_60.insert(UnderlyingContractMultiplierUnit_60.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_60("COUNTRY_1698094157");
      noUnderlyings_0_1_1.set(UnderlyingCountryOfIssue_60);
      UnderlyingInstrument_60.insert(UnderlyingCountryOfIssue_60.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_60("LOCALMKTDATE_1991324814");
      noUnderlyings_0_1_1.set(UnderlyingCouponPaymentDate_60);
      UnderlyingInstrument_60.insert(UnderlyingCouponPaymentDate_60.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_60;
      UnderlyingCouponRate_60.setString("44.370000");
      noUnderlyings_0_1_1.set(UnderlyingCouponRate_60);
      UnderlyingInstrument_60.insert(UnderlyingCouponRate_60.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_60("STRING_324874446");
      noUnderlyings_0_1_1.set(UnderlyingCreditRating_60);
      UnderlyingInstrument_60.insert(UnderlyingCreditRating_60.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_60("CAN");
      noUnderlyings_0_1_1.set(UnderlyingCurrency_60);
      UnderlyingInstrument_60.insert(UnderlyingCurrency_60.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_60;
      UnderlyingCurrentValue_60.setString("10878239");
      noUnderlyings_0_1_1.set(UnderlyingCurrentValue_60);
      UnderlyingInstrument_60.insert(UnderlyingCurrentValue_60.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_60;
      UnderlyingDetachmentPoint_60.setString("84.250000");
      noUnderlyings_0_1_1.set(UnderlyingDetachmentPoint_60);
      UnderlyingInstrument_60.insert(UnderlyingDetachmentPoint_60.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_60;
      UnderlyingDirtyPrice_60.setString("7265060");
      noUnderlyings_0_1_1.set(UnderlyingDirtyPrice_60);
      UnderlyingInstrument_60.insert(UnderlyingDirtyPrice_60.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_60;
      UnderlyingEndPrice_60.setString("10639212");
      noUnderlyings_0_1_1.set(UnderlyingEndPrice_60);
      UnderlyingInstrument_60.insert(UnderlyingEndPrice_60.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_60;
      UnderlyingEndValue_60.setString("15985782");
      noUnderlyings_0_1_1.set(UnderlyingEndValue_60);
      UnderlyingInstrument_60.insert(UnderlyingEndValue_60.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_60(1747283249);
      noUnderlyings_0_1_1.set(UnderlyingExerciseStyle_60);
      UnderlyingInstrument_60.insert(UnderlyingExerciseStyle_60.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_60;
      UnderlyingFXRate_60.setString("16060895");
      noUnderlyings_0_1_1.set(UnderlyingFXRate_60);
      UnderlyingInstrument_60.insert(UnderlyingFXRate_60.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_60('M');
      noUnderlyings_0_1_1.set(UnderlyingFXRateCalc_60);
      UnderlyingInstrument_60.insert(UnderlyingFXRateCalc_60.getString());
      FIX::UnderlyingFactor UnderlyingFactor_60;
      UnderlyingFactor_60.setString("1163346");
      noUnderlyings_0_1_1.set(UnderlyingFactor_60);
      UnderlyingInstrument_60.insert(UnderlyingFactor_60.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_60(583070709);
      noUnderlyings_0_1_1.set(UnderlyingFlowScheduleType_60);
      UnderlyingInstrument_60.insert(UnderlyingFlowScheduleType_60.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_60("STRING_3409048");
      noUnderlyings_0_1_1.set(UnderlyingInstrRegistry_60);
      UnderlyingInstrument_60.insert(UnderlyingInstrRegistry_60.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_60("LOCALMKTDATE_1370270720");
      noUnderlyings_0_1_1.set(UnderlyingIssueDate_60);
      UnderlyingInstrument_60.insert(UnderlyingIssueDate_60.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_60("STRING_1166099033");
      noUnderlyings_0_1_1.set(UnderlyingIssuer_60);
      UnderlyingInstrument_60.insert(UnderlyingIssuer_60.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_60("STRING_1490645559");
      noUnderlyings_0_1_1.set(UnderlyingLocaleOfIssue_60);
      UnderlyingInstrument_60.insert(UnderlyingLocaleOfIssue_60.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_60("LOCALMKTDATE_1391916482");
      noUnderlyings_0_1_1.set(UnderlyingMaturityDate_60);
      UnderlyingInstrument_60.insert(UnderlyingMaturityDate_60.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_60("MONTHYEAR_864657852");
      noUnderlyings_0_1_1.set(UnderlyingMaturityMonthYear_60);
      UnderlyingInstrument_60.insert(UnderlyingMaturityMonthYear_60.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_60("TZTIMEONLY_419885503");
      noUnderlyings_0_1_1.set(UnderlyingMaturityTime_60);
      UnderlyingInstrument_60.insert(UnderlyingMaturityTime_60.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_60;
      UnderlyingNotionalPercentageOutstanding_60.setString("65.790000");
      noUnderlyings_0_1_1.set(UnderlyingNotionalPercentageOutstanding_60);
      UnderlyingInstrument_60.insert(UnderlyingNotionalPercentageOutstanding_60.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_60('1');
      noUnderlyings_0_1_1.set(UnderlyingOptAttribute_60);
      UnderlyingInstrument_60.insert(UnderlyingOptAttribute_60.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_60;
      UnderlyingOriginalNotionalPercentageOutstanding_60.setString("79.340000");
      noUnderlyings_0_1_1.set(UnderlyingOriginalNotionalPercentageOutstanding_60);
      UnderlyingInstrument_60.insert(UnderlyingOriginalNotionalPercentageOutstanding_60.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_60("STRING_433479755");
      noUnderlyings_0_1_1.set(UnderlyingPriceUnitOfMeasure_60);
      UnderlyingInstrument_60.insert(UnderlyingPriceUnitOfMeasure_60.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_60;
      UnderlyingPriceUnitOfMeasureQty_60.setString("9635188");
      noUnderlyings_0_1_1.set(UnderlyingPriceUnitOfMeasureQty_60);
      UnderlyingInstrument_60.insert(UnderlyingPriceUnitOfMeasureQty_60.getString());
      FIX::UnderlyingProduct UnderlyingProduct_60(1614252094);
      noUnderlyings_0_1_1.set(UnderlyingProduct_60);
      UnderlyingInstrument_60.insert(UnderlyingProduct_60.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_60(2088172761);
      noUnderlyings_0_1_1.set(UnderlyingPutOrCall_60);
      UnderlyingInstrument_60.insert(UnderlyingPutOrCall_60.getString());
      FIX::UnderlyingPx UnderlyingPx_60;
      UnderlyingPx_60.setString("21038956");
      noUnderlyings_0_1_1.set(UnderlyingPx_60);
      UnderlyingInstrument_60.insert(UnderlyingPx_60.getString());
      FIX::UnderlyingQty UnderlyingQty_60;
      UnderlyingQty_60.setString("11648626");
      noUnderlyings_0_1_1.set(UnderlyingQty_60);
      UnderlyingInstrument_60.insert(UnderlyingQty_60.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_60("LOCALMKTDATE_1932013927");
      noUnderlyings_0_1_1.set(UnderlyingRedemptionDate_60);
      UnderlyingInstrument_60.insert(UnderlyingRedemptionDate_60.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_60("STRING_1434676470");
      noUnderlyings_0_1_1.set(UnderlyingRepoCollateralSecurityType_60);
      UnderlyingInstrument_60.insert(UnderlyingRepoCollateralSecurityType_60.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_60;
      UnderlyingRepurchaseRate_60.setString("70.490000");
      noUnderlyings_0_1_1.set(UnderlyingRepurchaseRate_60);
      UnderlyingInstrument_60.insert(UnderlyingRepurchaseRate_60.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_60(1394783122);
      noUnderlyings_0_1_1.set(UnderlyingRepurchaseTerm_60);
      UnderlyingInstrument_60.insert(UnderlyingRepurchaseTerm_60.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_60("STRING_1258510972");
      noUnderlyings_0_1_1.set(UnderlyingRestructuringType_60);
      UnderlyingInstrument_60.insert(UnderlyingRestructuringType_60.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_60("STRING_430077308");
      noUnderlyings_0_1_1.set(UnderlyingSecurityDesc_60);
      UnderlyingInstrument_60.insert(UnderlyingSecurityDesc_60.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_60("EXCHANGE_184787900");
      noUnderlyings_0_1_1.set(UnderlyingSecurityExchange_60);
      UnderlyingInstrument_60.insert(UnderlyingSecurityExchange_60.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_60("STRING_1985016998");
      noUnderlyings_0_1_1.set(UnderlyingSecurityID_60);
      UnderlyingInstrument_60.insert(UnderlyingSecurityID_60.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_60("STRING_1493998588");
      noUnderlyings_0_1_1.set(UnderlyingSecurityIDSource_60);
      UnderlyingInstrument_60.insert(UnderlyingSecurityIDSource_60.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_60("STRING_1783366116");
      noUnderlyings_0_1_1.set(UnderlyingSecuritySubType_60);
      UnderlyingInstrument_60.insert(UnderlyingSecuritySubType_60.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_60("STRING_1584816599");
      noUnderlyings_0_1_1.set(UnderlyingSecurityType_60);
      UnderlyingInstrument_60.insert(UnderlyingSecurityType_60.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_60("STRING_952604453");
      noUnderlyings_0_1_1.set(UnderlyingSeniority_60);
      UnderlyingInstrument_60.insert(UnderlyingSeniority_60.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_60("STRING_527224329");
      noUnderlyings_0_1_1.set(UnderlyingSettlMethod_60);
      UnderlyingInstrument_60.insert(UnderlyingSettlMethod_60.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_60(4);
      noUnderlyings_0_1_1.set(UnderlyingSettlementType_60);
      UnderlyingInstrument_60.insert(UnderlyingSettlementType_60.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_60;
      UnderlyingStartValue_60.setString("15356751");
      noUnderlyings_0_1_1.set(UnderlyingStartValue_60);
      UnderlyingInstrument_60.insert(UnderlyingStartValue_60.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_60("STRING_530633377");
      noUnderlyings_0_1_1.set(UnderlyingStateOrProvinceOfIssue_60);
      UnderlyingInstrument_60.insert(UnderlyingStateOrProvinceOfIssue_60.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_60("USD");
      noUnderlyings_0_1_1.set(UnderlyingStrikeCurrency_60);
      UnderlyingInstrument_60.insert(UnderlyingStrikeCurrency_60.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_60;
      UnderlyingStrikePrice_60.setString("20212789");
      noUnderlyings_0_1_1.set(UnderlyingStrikePrice_60);
      UnderlyingInstrument_60.insert(UnderlyingStrikePrice_60.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_60("STRING_168371191");
      noUnderlyings_0_1_1.set(UnderlyingSymbol_60);
      UnderlyingInstrument_60.insert(UnderlyingSymbol_60.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_60("STRING_1418948400");
      noUnderlyings_0_1_1.set(UnderlyingSymbolSfx_60);
      UnderlyingInstrument_60.insert(UnderlyingSymbolSfx_60.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_60("STRING_293680792");
      noUnderlyings_0_1_1.set(UnderlyingTimeUnit_60);
      UnderlyingInstrument_60.insert(UnderlyingTimeUnit_60.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_60("STRING_1019497770");
      noUnderlyings_0_1_1.set(UnderlyingUnitOfMeasure_60);
      UnderlyingInstrument_60.insert(UnderlyingUnitOfMeasure_60.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_60;
      UnderlyingUnitOfMeasureQty_60.setString("6640147");
      noUnderlyings_0_1_1.set(UnderlyingUnitOfMeasureQty_60);
      UnderlyingInstrument_60.insert(UnderlyingUnitOfMeasureQty_60.getString());
      all_values.push_back(UnderlyingInstrument_60);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_118;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_118("STRING_1452977525");
        noUnderlyingSecurityAltID_0_1_2_0.set(UnderlyingSecurityAltID_118);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_118.insert(UnderlyingSecurityAltID_118.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_118("STRING_1627533628");
        noUnderlyingSecurityAltID_0_1_2_0.set(UnderlyingSecurityAltIDSource_118);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_118.insert(UnderlyingSecurityAltIDSource_118.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_118);

        noUnderlyings_0_1_1.addGroup(noUnderlyingSecurityAltID_0_1_2_0);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_117;
        FIX::UnderlyingStipType UnderlyingStipType_117("STRING_1393666638");
        noUnderlyingStips_0_1_2_0.set(UnderlyingStipType_117);
        UnderlyingStipulations_NoUnderlyingStips_117.insert(UnderlyingStipType_117.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_117("STRING_1583945661");
        noUnderlyingStips_0_1_2_0.set(UnderlyingStipValue_117);
        UnderlyingStipulations_NoUnderlyingStips_117.insert(UnderlyingStipValue_117.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_117);

        noUnderlyings_0_1_1.addGroup(noUnderlyingStips_0_1_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_118;
        FIX::UnderlyingStipType UnderlyingStipType_118("STRING_1696259775");
        noUnderlyingStips_0_1_2_1.set(UnderlyingStipType_118);
        UnderlyingStipulations_NoUnderlyingStips_118.insert(UnderlyingStipType_118.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_118("STRING_1178196918");
        noUnderlyingStips_0_1_2_1.set(UnderlyingStipValue_118);
        UnderlyingStipulations_NoUnderlyingStips_118.insert(UnderlyingStipValue_118.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_118);

        noUnderlyings_0_1_1.addGroup(noUnderlyingStips_0_1_2_1);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2_2;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_119;
        FIX::UnderlyingStipType UnderlyingStipType_119("STRING_871138484");
        noUnderlyingStips_0_1_2_2.set(UnderlyingStipType_119);
        UnderlyingStipulations_NoUnderlyingStips_119.insert(UnderlyingStipType_119.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_119("STRING_1038513177");
        noUnderlyingStips_0_1_2_2.set(UnderlyingStipValue_119);
        UnderlyingStipulations_NoUnderlyingStips_119.insert(UnderlyingStipValue_119.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_119);

        noUnderlyings_0_1_1.addGroup(noUnderlyingStips_0_1_2_2);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_122;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_122("STRING_2129649456");
        noUndlyInstrumentParties_0_1_2_0.set(UnderlyingInstrumentPartyID_122);
        UndlyInstrumentParties_NoUndlyInstrumentParties_122.insert(UnderlyingInstrumentPartyID_122.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_122('1');
        noUndlyInstrumentParties_0_1_2_0.set(UnderlyingInstrumentPartyIDSource_122);
        UndlyInstrumentParties_NoUndlyInstrumentParties_122.insert(UnderlyingInstrumentPartyIDSource_122.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_122(610284292);
        noUndlyInstrumentParties_0_1_2_0.set(UnderlyingInstrumentPartyRole_122);
        UndlyInstrumentParties_NoUndlyInstrumentParties_122.insert(UnderlyingInstrumentPartyRole_122.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_122);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_236;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_236("STRING_815105425");
          noUndlyInstrumentPartySubIDs_0_1_0_3_0.set(UnderlyingInstrumentPartySubID_236);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_236.insert(UnderlyingInstrumentPartySubID_236.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_236(246166760);
          noUndlyInstrumentPartySubIDs_0_1_0_3_0.set(UnderlyingInstrumentPartySubIDType_236);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_236.insert(UnderlyingInstrumentPartySubIDType_236.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_236);

          noUndlyInstrumentParties_0_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0_3_0);
        }
        noUnderlyings_0_1_1.addGroup(noUndlyInstrumentParties_0_1_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_123;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_123("STRING_1404515757");
        noUndlyInstrumentParties_0_1_2_1.set(UnderlyingInstrumentPartyID_123);
        UndlyInstrumentParties_NoUndlyInstrumentParties_123.insert(UnderlyingInstrumentPartyID_123.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_123('1');
        noUndlyInstrumentParties_0_1_2_1.set(UnderlyingInstrumentPartyIDSource_123);
        UndlyInstrumentParties_NoUndlyInstrumentParties_123.insert(UnderlyingInstrumentPartyIDSource_123.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_123(773391089);
        noUndlyInstrumentParties_0_1_2_1.set(UnderlyingInstrumentPartyRole_123);
        UndlyInstrumentParties_NoUndlyInstrumentParties_123.insert(UnderlyingInstrumentPartyRole_123.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_123);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_237;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_237("STRING_1155901393");
          noUndlyInstrumentPartySubIDs_0_1_1_3_0.set(UnderlyingInstrumentPartySubID_237);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_237.insert(UnderlyingInstrumentPartySubID_237.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_237(1304024467);
          noUndlyInstrumentPartySubIDs_0_1_1_3_0.set(UnderlyingInstrumentPartySubIDType_237);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_237.insert(UnderlyingInstrumentPartySubIDType_237.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_237);

          noUndlyInstrumentParties_0_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_1_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_1_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_238;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_238("STRING_1882121751");
          noUndlyInstrumentPartySubIDs_0_1_1_3_1.set(UnderlyingInstrumentPartySubID_238);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_238.insert(UnderlyingInstrumentPartySubID_238.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_238(1710191941);
          noUndlyInstrumentPartySubIDs_0_1_1_3_1.set(UnderlyingInstrumentPartySubIDType_238);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_238.insert(UnderlyingInstrumentPartySubIDType_238.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_238);

          noUndlyInstrumentParties_0_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_1_3_1);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_1_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_239;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_239("STRING_1177819755");
          noUndlyInstrumentPartySubIDs_0_1_1_3_2.set(UnderlyingInstrumentPartySubID_239);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_239.insert(UnderlyingInstrumentPartySubID_239.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_239(2050492942);
          noUndlyInstrumentPartySubIDs_0_1_1_3_2.set(UnderlyingInstrumentPartySubIDType_239);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_239.insert(UnderlyingInstrumentPartySubIDType_239.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_239);

          noUndlyInstrumentParties_0_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_1_3_2);
        }
        noUnderlyings_0_1_1.addGroup(noUndlyInstrumentParties_0_1_2_1);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2_2;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_124;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_124("STRING_981656693");
        noUndlyInstrumentParties_0_1_2_2.set(UnderlyingInstrumentPartyID_124);
        UndlyInstrumentParties_NoUndlyInstrumentParties_124.insert(UnderlyingInstrumentPartyID_124.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_124('1');
        noUndlyInstrumentParties_0_1_2_2.set(UnderlyingInstrumentPartyIDSource_124);
        UndlyInstrumentParties_NoUndlyInstrumentParties_124.insert(UnderlyingInstrumentPartyIDSource_124.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_124(922507064);
        noUndlyInstrumentParties_0_1_2_2.set(UnderlyingInstrumentPartyRole_124);
        UndlyInstrumentParties_NoUndlyInstrumentParties_124.insert(UnderlyingInstrumentPartyRole_124.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_124);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_240;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_240("STRING_388645625");
          noUndlyInstrumentPartySubIDs_0_1_2_3_0.set(UnderlyingInstrumentPartySubID_240);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_240.insert(UnderlyingInstrumentPartySubID_240.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_240(228000941);
          noUndlyInstrumentPartySubIDs_0_1_2_3_0.set(UnderlyingInstrumentPartySubIDType_240);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_240.insert(UnderlyingInstrumentPartySubIDType_240.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_240);

          noUndlyInstrumentParties_0_1_2_2.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_3_0);
        }
        noUnderlyings_0_1_1.addGroup(noUndlyInstrumentParties_0_1_2_2);
      }
      noOrders_0_0.addGroup(noUnderlyings_0_1_1);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoUnderlyings noUnderlyings_0_1_2;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_61;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_61("DATA_1125721440");
      noUnderlyings_0_1_2.set(EncodedUnderlyingIssuer_61);
      UnderlyingInstrument_61.insert(EncodedUnderlyingIssuer_61.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_61(920042797);
      noUnderlyings_0_1_2.set(EncodedUnderlyingIssuerLen_61);
      UnderlyingInstrument_61.insert(EncodedUnderlyingIssuerLen_61.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_61("DATA_1621667580");
      noUnderlyings_0_1_2.set(EncodedUnderlyingSecurityDesc_61);
      UnderlyingInstrument_61.insert(EncodedUnderlyingSecurityDesc_61.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_61(562183453);
      noUnderlyings_0_1_2.set(EncodedUnderlyingSecurityDescLen_61);
      UnderlyingInstrument_61.insert(EncodedUnderlyingSecurityDescLen_61.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_61;
      UnderlyingAdjustedQuantity_61.setString("4688189");
      noUnderlyings_0_1_2.set(UnderlyingAdjustedQuantity_61);
      UnderlyingInstrument_61.insert(UnderlyingAdjustedQuantity_61.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_61;
      UnderlyingAllocationPercent_61.setString("8.500000");
      noUnderlyings_0_1_2.set(UnderlyingAllocationPercent_61);
      UnderlyingInstrument_61.insert(UnderlyingAllocationPercent_61.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_61;
      UnderlyingAttachmentPoint_61.setString("19.370000");
      noUnderlyings_0_1_2.set(UnderlyingAttachmentPoint_61);
      UnderlyingInstrument_61.insert(UnderlyingAttachmentPoint_61.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_61("STRING_1507332102");
      noUnderlyings_0_1_2.set(UnderlyingCFICode_61);
      UnderlyingInstrument_61.insert(UnderlyingCFICode_61.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_61("STRING_1077877242");
      noUnderlyings_0_1_2.set(UnderlyingCPProgram_61);
      UnderlyingInstrument_61.insert(UnderlyingCPProgram_61.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_61("STRING_1415487745");
      noUnderlyings_0_1_2.set(UnderlyingCPRegType_61);
      UnderlyingInstrument_61.insert(UnderlyingCPRegType_61.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_61;
      UnderlyingCapValue_61.setString("8284389");
      noUnderlyings_0_1_2.set(UnderlyingCapValue_61);
      UnderlyingInstrument_61.insert(UnderlyingCapValue_61.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_61;
      UnderlyingCashAmount_61.setString("16881615");
      noUnderlyings_0_1_2.set(UnderlyingCashAmount_61);
      UnderlyingInstrument_61.insert(UnderlyingCashAmount_61.getString());
      FIX::UnderlyingCashType UnderlyingCashType_61("STRING_DIFF");
      noUnderlyings_0_1_2.set(UnderlyingCashType_61);
      UnderlyingInstrument_61.insert(UnderlyingCashType_61.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_61;
      UnderlyingContractMultiplier_61.setString("16435443");
      noUnderlyings_0_1_2.set(UnderlyingContractMultiplier_61);
      UnderlyingInstrument_61.insert(UnderlyingContractMultiplier_61.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_61(1934328295);
      noUnderlyings_0_1_2.set(UnderlyingContractMultiplierUnit_61);
      UnderlyingInstrument_61.insert(UnderlyingContractMultiplierUnit_61.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_61("COUNTRY_492219012");
      noUnderlyings_0_1_2.set(UnderlyingCountryOfIssue_61);
      UnderlyingInstrument_61.insert(UnderlyingCountryOfIssue_61.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_61("LOCALMKTDATE_1263770595");
      noUnderlyings_0_1_2.set(UnderlyingCouponPaymentDate_61);
      UnderlyingInstrument_61.insert(UnderlyingCouponPaymentDate_61.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_61;
      UnderlyingCouponRate_61.setString("57.370000");
      noUnderlyings_0_1_2.set(UnderlyingCouponRate_61);
      UnderlyingInstrument_61.insert(UnderlyingCouponRate_61.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_61("STRING_1450402406");
      noUnderlyings_0_1_2.set(UnderlyingCreditRating_61);
      UnderlyingInstrument_61.insert(UnderlyingCreditRating_61.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_61("USD");
      noUnderlyings_0_1_2.set(UnderlyingCurrency_61);
      UnderlyingInstrument_61.insert(UnderlyingCurrency_61.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_61;
      UnderlyingCurrentValue_61.setString("11850405");
      noUnderlyings_0_1_2.set(UnderlyingCurrentValue_61);
      UnderlyingInstrument_61.insert(UnderlyingCurrentValue_61.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_61;
      UnderlyingDetachmentPoint_61.setString("2.820000");
      noUnderlyings_0_1_2.set(UnderlyingDetachmentPoint_61);
      UnderlyingInstrument_61.insert(UnderlyingDetachmentPoint_61.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_61;
      UnderlyingDirtyPrice_61.setString("8945963");
      noUnderlyings_0_1_2.set(UnderlyingDirtyPrice_61);
      UnderlyingInstrument_61.insert(UnderlyingDirtyPrice_61.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_61;
      UnderlyingEndPrice_61.setString("10880498");
      noUnderlyings_0_1_2.set(UnderlyingEndPrice_61);
      UnderlyingInstrument_61.insert(UnderlyingEndPrice_61.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_61;
      UnderlyingEndValue_61.setString("8165533");
      noUnderlyings_0_1_2.set(UnderlyingEndValue_61);
      UnderlyingInstrument_61.insert(UnderlyingEndValue_61.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_61(218613211);
      noUnderlyings_0_1_2.set(UnderlyingExerciseStyle_61);
      UnderlyingInstrument_61.insert(UnderlyingExerciseStyle_61.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_61;
      UnderlyingFXRate_61.setString("20105568");
      noUnderlyings_0_1_2.set(UnderlyingFXRate_61);
      UnderlyingInstrument_61.insert(UnderlyingFXRate_61.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_61('M');
      noUnderlyings_0_1_2.set(UnderlyingFXRateCalc_61);
      UnderlyingInstrument_61.insert(UnderlyingFXRateCalc_61.getString());
      FIX::UnderlyingFactor UnderlyingFactor_61;
      UnderlyingFactor_61.setString("6072588");
      noUnderlyings_0_1_2.set(UnderlyingFactor_61);
      UnderlyingInstrument_61.insert(UnderlyingFactor_61.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_61(91074161);
      noUnderlyings_0_1_2.set(UnderlyingFlowScheduleType_61);
      UnderlyingInstrument_61.insert(UnderlyingFlowScheduleType_61.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_61("STRING_1440462579");
      noUnderlyings_0_1_2.set(UnderlyingInstrRegistry_61);
      UnderlyingInstrument_61.insert(UnderlyingInstrRegistry_61.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_61("LOCALMKTDATE_1527301634");
      noUnderlyings_0_1_2.set(UnderlyingIssueDate_61);
      UnderlyingInstrument_61.insert(UnderlyingIssueDate_61.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_61("STRING_1712741741");
      noUnderlyings_0_1_2.set(UnderlyingIssuer_61);
      UnderlyingInstrument_61.insert(UnderlyingIssuer_61.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_61("STRING_2002646033");
      noUnderlyings_0_1_2.set(UnderlyingLocaleOfIssue_61);
      UnderlyingInstrument_61.insert(UnderlyingLocaleOfIssue_61.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_61("LOCALMKTDATE_1996120559");
      noUnderlyings_0_1_2.set(UnderlyingMaturityDate_61);
      UnderlyingInstrument_61.insert(UnderlyingMaturityDate_61.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_61("MONTHYEAR_217638943");
      noUnderlyings_0_1_2.set(UnderlyingMaturityMonthYear_61);
      UnderlyingInstrument_61.insert(UnderlyingMaturityMonthYear_61.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_61("TZTIMEONLY_1288484322");
      noUnderlyings_0_1_2.set(UnderlyingMaturityTime_61);
      UnderlyingInstrument_61.insert(UnderlyingMaturityTime_61.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_61;
      UnderlyingNotionalPercentageOutstanding_61.setString("90.130000");
      noUnderlyings_0_1_2.set(UnderlyingNotionalPercentageOutstanding_61);
      UnderlyingInstrument_61.insert(UnderlyingNotionalPercentageOutstanding_61.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_61('1');
      noUnderlyings_0_1_2.set(UnderlyingOptAttribute_61);
      UnderlyingInstrument_61.insert(UnderlyingOptAttribute_61.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_61;
      UnderlyingOriginalNotionalPercentageOutstanding_61.setString("84.200000");
      noUnderlyings_0_1_2.set(UnderlyingOriginalNotionalPercentageOutstanding_61);
      UnderlyingInstrument_61.insert(UnderlyingOriginalNotionalPercentageOutstanding_61.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_61("STRING_36924304");
      noUnderlyings_0_1_2.set(UnderlyingPriceUnitOfMeasure_61);
      UnderlyingInstrument_61.insert(UnderlyingPriceUnitOfMeasure_61.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_61;
      UnderlyingPriceUnitOfMeasureQty_61.setString("8361940");
      noUnderlyings_0_1_2.set(UnderlyingPriceUnitOfMeasureQty_61);
      UnderlyingInstrument_61.insert(UnderlyingPriceUnitOfMeasureQty_61.getString());
      FIX::UnderlyingProduct UnderlyingProduct_61(1791675323);
      noUnderlyings_0_1_2.set(UnderlyingProduct_61);
      UnderlyingInstrument_61.insert(UnderlyingProduct_61.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_61(1680468668);
      noUnderlyings_0_1_2.set(UnderlyingPutOrCall_61);
      UnderlyingInstrument_61.insert(UnderlyingPutOrCall_61.getString());
      FIX::UnderlyingPx UnderlyingPx_61;
      UnderlyingPx_61.setString("6230387");
      noUnderlyings_0_1_2.set(UnderlyingPx_61);
      UnderlyingInstrument_61.insert(UnderlyingPx_61.getString());
      FIX::UnderlyingQty UnderlyingQty_61;
      UnderlyingQty_61.setString("1364106");
      noUnderlyings_0_1_2.set(UnderlyingQty_61);
      UnderlyingInstrument_61.insert(UnderlyingQty_61.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_61("LOCALMKTDATE_796755616");
      noUnderlyings_0_1_2.set(UnderlyingRedemptionDate_61);
      UnderlyingInstrument_61.insert(UnderlyingRedemptionDate_61.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_61("STRING_1183274457");
      noUnderlyings_0_1_2.set(UnderlyingRepoCollateralSecurityType_61);
      UnderlyingInstrument_61.insert(UnderlyingRepoCollateralSecurityType_61.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_61;
      UnderlyingRepurchaseRate_61.setString("30.940000");
      noUnderlyings_0_1_2.set(UnderlyingRepurchaseRate_61);
      UnderlyingInstrument_61.insert(UnderlyingRepurchaseRate_61.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_61(1068943957);
      noUnderlyings_0_1_2.set(UnderlyingRepurchaseTerm_61);
      UnderlyingInstrument_61.insert(UnderlyingRepurchaseTerm_61.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_61("STRING_900051013");
      noUnderlyings_0_1_2.set(UnderlyingRestructuringType_61);
      UnderlyingInstrument_61.insert(UnderlyingRestructuringType_61.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_61("STRING_624369956");
      noUnderlyings_0_1_2.set(UnderlyingSecurityDesc_61);
      UnderlyingInstrument_61.insert(UnderlyingSecurityDesc_61.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_61("EXCHANGE_903840591");
      noUnderlyings_0_1_2.set(UnderlyingSecurityExchange_61);
      UnderlyingInstrument_61.insert(UnderlyingSecurityExchange_61.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_61("STRING_1794647324");
      noUnderlyings_0_1_2.set(UnderlyingSecurityID_61);
      UnderlyingInstrument_61.insert(UnderlyingSecurityID_61.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_61("STRING_1712419759");
      noUnderlyings_0_1_2.set(UnderlyingSecurityIDSource_61);
      UnderlyingInstrument_61.insert(UnderlyingSecurityIDSource_61.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_61("STRING_1720393919");
      noUnderlyings_0_1_2.set(UnderlyingSecuritySubType_61);
      UnderlyingInstrument_61.insert(UnderlyingSecuritySubType_61.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_61("STRING_2013260535");
      noUnderlyings_0_1_2.set(UnderlyingSecurityType_61);
      UnderlyingInstrument_61.insert(UnderlyingSecurityType_61.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_61("STRING_1575492979");
      noUnderlyings_0_1_2.set(UnderlyingSeniority_61);
      UnderlyingInstrument_61.insert(UnderlyingSeniority_61.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_61("STRING_2035135059");
      noUnderlyings_0_1_2.set(UnderlyingSettlMethod_61);
      UnderlyingInstrument_61.insert(UnderlyingSettlMethod_61.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_61(5);
      noUnderlyings_0_1_2.set(UnderlyingSettlementType_61);
      UnderlyingInstrument_61.insert(UnderlyingSettlementType_61.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_61;
      UnderlyingStartValue_61.setString("16665671");
      noUnderlyings_0_1_2.set(UnderlyingStartValue_61);
      UnderlyingInstrument_61.insert(UnderlyingStartValue_61.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_61("STRING_1328113990");
      noUnderlyings_0_1_2.set(UnderlyingStateOrProvinceOfIssue_61);
      UnderlyingInstrument_61.insert(UnderlyingStateOrProvinceOfIssue_61.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_61("CHF");
      noUnderlyings_0_1_2.set(UnderlyingStrikeCurrency_61);
      UnderlyingInstrument_61.insert(UnderlyingStrikeCurrency_61.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_61;
      UnderlyingStrikePrice_61.setString("11832763");
      noUnderlyings_0_1_2.set(UnderlyingStrikePrice_61);
      UnderlyingInstrument_61.insert(UnderlyingStrikePrice_61.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_61("STRING_1848974269");
      noUnderlyings_0_1_2.set(UnderlyingSymbol_61);
      UnderlyingInstrument_61.insert(UnderlyingSymbol_61.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_61("STRING_1449464176");
      noUnderlyings_0_1_2.set(UnderlyingSymbolSfx_61);
      UnderlyingInstrument_61.insert(UnderlyingSymbolSfx_61.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_61("STRING_324277050");
      noUnderlyings_0_1_2.set(UnderlyingTimeUnit_61);
      UnderlyingInstrument_61.insert(UnderlyingTimeUnit_61.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_61("STRING_1057459634");
      noUnderlyings_0_1_2.set(UnderlyingUnitOfMeasure_61);
      UnderlyingInstrument_61.insert(UnderlyingUnitOfMeasure_61.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_61;
      UnderlyingUnitOfMeasureQty_61.setString("5974967");
      noUnderlyings_0_1_2.set(UnderlyingUnitOfMeasureQty_61);
      UnderlyingInstrument_61.insert(UnderlyingUnitOfMeasureQty_61.getString());
      all_values.push_back(UnderlyingInstrument_61);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_2_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_119;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_119("STRING_1094383938");
        noUnderlyingSecurityAltID_0_2_2_0.set(UnderlyingSecurityAltID_119);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_119.insert(UnderlyingSecurityAltID_119.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_119("STRING_1433690786");
        noUnderlyingSecurityAltID_0_2_2_0.set(UnderlyingSecurityAltIDSource_119);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_119.insert(UnderlyingSecurityAltIDSource_119.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_119);

        noUnderlyings_0_1_2.addGroup(noUnderlyingSecurityAltID_0_2_2_0);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_2_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_120;
        FIX::UnderlyingStipType UnderlyingStipType_120("STRING_627368958");
        noUnderlyingStips_0_2_2_0.set(UnderlyingStipType_120);
        UnderlyingStipulations_NoUnderlyingStips_120.insert(UnderlyingStipType_120.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_120("STRING_2056729506");
        noUnderlyingStips_0_2_2_0.set(UnderlyingStipValue_120);
        UnderlyingStipulations_NoUnderlyingStips_120.insert(UnderlyingStipValue_120.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_120);

        noUnderlyings_0_1_2.addGroup(noUnderlyingStips_0_2_2_0);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_2_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_125;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_125("STRING_1424124574");
        noUndlyInstrumentParties_0_2_2_0.set(UnderlyingInstrumentPartyID_125);
        UndlyInstrumentParties_NoUndlyInstrumentParties_125.insert(UnderlyingInstrumentPartyID_125.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_125('1');
        noUndlyInstrumentParties_0_2_2_0.set(UnderlyingInstrumentPartyIDSource_125);
        UndlyInstrumentParties_NoUndlyInstrumentParties_125.insert(UnderlyingInstrumentPartyIDSource_125.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_125(100697280);
        noUndlyInstrumentParties_0_2_2_0.set(UnderlyingInstrumentPartyRole_125);
        UndlyInstrumentParties_NoUndlyInstrumentParties_125.insert(UnderlyingInstrumentPartyRole_125.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_125);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_241;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_241("STRING_1992571328");
          noUndlyInstrumentPartySubIDs_0_2_0_3_0.set(UnderlyingInstrumentPartySubID_241);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_241.insert(UnderlyingInstrumentPartySubID_241.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_241(725067236);
          noUndlyInstrumentPartySubIDs_0_2_0_3_0.set(UnderlyingInstrumentPartySubIDType_241);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_241.insert(UnderlyingInstrumentPartySubIDType_241.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_241);

          noUndlyInstrumentParties_0_2_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_2_0_3_0);
        }
        noUnderlyings_0_1_2.addGroup(noUndlyInstrumentParties_0_2_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_2_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_126;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_126("STRING_1249425475");
        noUndlyInstrumentParties_0_2_2_1.set(UnderlyingInstrumentPartyID_126);
        UndlyInstrumentParties_NoUndlyInstrumentParties_126.insert(UnderlyingInstrumentPartyID_126.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_126('1');
        noUndlyInstrumentParties_0_2_2_1.set(UnderlyingInstrumentPartyIDSource_126);
        UndlyInstrumentParties_NoUndlyInstrumentParties_126.insert(UnderlyingInstrumentPartyIDSource_126.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_126(290003347);
        noUndlyInstrumentParties_0_2_2_1.set(UnderlyingInstrumentPartyRole_126);
        UndlyInstrumentParties_NoUndlyInstrumentParties_126.insert(UnderlyingInstrumentPartyRole_126.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_126);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_242;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_242("STRING_1505511892");
          noUndlyInstrumentPartySubIDs_0_2_1_3_0.set(UnderlyingInstrumentPartySubID_242);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_242.insert(UnderlyingInstrumentPartySubID_242.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_242(1865496326);
          noUndlyInstrumentPartySubIDs_0_2_1_3_0.set(UnderlyingInstrumentPartySubIDType_242);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_242.insert(UnderlyingInstrumentPartySubIDType_242.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_242);

          noUndlyInstrumentParties_0_2_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_2_1_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_1_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_243;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_243("STRING_709987157");
          noUndlyInstrumentPartySubIDs_0_2_1_3_1.set(UnderlyingInstrumentPartySubID_243);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_243.insert(UnderlyingInstrumentPartySubID_243.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_243(1978547616);
          noUndlyInstrumentPartySubIDs_0_2_1_3_1.set(UnderlyingInstrumentPartySubIDType_243);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_243.insert(UnderlyingInstrumentPartySubIDType_243.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_243);

          noUndlyInstrumentParties_0_2_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_2_1_3_1);
        }
        noUnderlyings_0_1_2.addGroup(noUndlyInstrumentParties_0_2_2_1);
      }
      noOrders_0_0.addGroup(noUnderlyings_0_1_2);
    }
    // YieldData
    multiset<string> YieldData_11;
    FIX::Yield Yield_11;
    Yield_11.setString("98.180000");
    noOrders_0_0.set(Yield_11);
    YieldData_11.insert(Yield_11.getString());
    FIX::YieldCalcDate YieldCalcDate_11("LOCALMKTDATE_2038101148");
    noOrders_0_0.set(YieldCalcDate_11);
    YieldData_11.insert(YieldCalcDate_11.getString());
    FIX::YieldRedemptionDate YieldRedemptionDate_11("LOCALMKTDATE_1831401326");
    noOrders_0_0.set(YieldRedemptionDate_11);
    YieldData_11.insert(YieldRedemptionDate_11.getString());
    FIX::YieldRedemptionPrice YieldRedemptionPrice_11;
    YieldRedemptionPrice_11.setString("4689214");
    noOrders_0_0.set(YieldRedemptionPrice_11);
    YieldData_11.insert(YieldRedemptionPrice_11.getString());
    FIX::YieldRedemptionPriceType YieldRedemptionPriceType_11(1073893875);
    noOrders_0_0.set(YieldRedemptionPriceType_11);
    YieldData_11.insert(YieldRedemptionPriceType_11.getString());
    FIX::YieldType YieldType_11("STRING_CURRENT");
    noOrders_0_0.set(YieldType_11);
    YieldData_11.insert(YieldType_11.getString());
    all_values.push_back(YieldData_11);

    msg.addGroup(noOrders_0_0);
  }
  {
    FIX50SP2::NewOrderList::NoOrders noOrders_0_1;
    // ListOrdGrp.NoOrders
    multiset<string> ListOrdGrp_NoOrders_1;
    FIX::Account Account_19("STRING_1918385579");
    noOrders_0_1.set(Account_19);
    ListOrdGrp_NoOrders_1.insert(Account_19.getString());
    FIX::AccountType AccountType_17(6);
    noOrders_0_1.set(AccountType_17);
    ListOrdGrp_NoOrders_1.insert(AccountType_17.getString());
    FIX::AcctIDSource AcctIDSource_12(2);
    noOrders_0_1.set(AcctIDSource_12);
    ListOrdGrp_NoOrders_1.insert(AcctIDSource_12.getString());
    FIX::AllocID AllocID_15("STRING_368398645");
    noOrders_0_1.set(AllocID_15);
    ListOrdGrp_NoOrders_1.insert(AllocID_15.getString());
    FIX::BookingType BookingType_14(1);
    noOrders_0_1.set(BookingType_14);
    ListOrdGrp_NoOrders_1.insert(BookingType_14.getString());
    FIX::BookingUnit BookingUnit_8('1');
    noOrders_0_1.set(BookingUnit_8);
    ListOrdGrp_NoOrders_1.insert(BookingUnit_8.getString());
    FIX::CashMargin CashMargin_8('1');
    noOrders_0_1.set(CashMargin_8);
    ListOrdGrp_NoOrders_1.insert(CashMargin_8.getString());
    FIX::ClOrdID ClOrdID_30("STRING_656409893");
    noOrders_0_1.set(ClOrdID_30);
    ListOrdGrp_NoOrders_1.insert(ClOrdID_30.getString());
    FIX::ClOrdLinkID ClOrdLinkID_10("STRING_17137181");
    noOrders_0_1.set(ClOrdLinkID_10);
    ListOrdGrp_NoOrders_1.insert(ClOrdLinkID_10.getString());
    FIX::ClearingFeeIndicator ClearingFeeIndicator_13("STRING_M");
    noOrders_0_1.set(ClearingFeeIndicator_13);
    ListOrdGrp_NoOrders_1.insert(ClearingFeeIndicator_13.getString());
    FIX::ComplianceID ComplianceID_7("STRING_1317777726");
    noOrders_0_1.set(ComplianceID_7);
    ListOrdGrp_NoOrders_1.insert(ComplianceID_7.getString());
    FIX::CoveredOrUncovered CoveredOrUncovered_7(0);
    noOrders_0_1.set(CoveredOrUncovered_7);
    ListOrdGrp_NoOrders_1.insert(CoveredOrUncovered_7.getString());
    FIX::Currency Currency_36("USD");
    noOrders_0_1.set(Currency_36);
    ListOrdGrp_NoOrders_1.insert(Currency_36.getString());
    FIX::CustOrderCapacity CustOrderCapacity_11(4);
    noOrders_0_1.set(CustOrderCapacity_11);
    ListOrdGrp_NoOrders_1.insert(CustOrderCapacity_11.getString());
    FIX::DayBookingInst DayBookingInst_8('0');
    noOrders_0_1.set(DayBookingInst_8);
    ListOrdGrp_NoOrders_1.insert(DayBookingInst_8.getString());
    FIX::Designation Designation_5("STRING_2143542242");
    noOrders_0_1.set(Designation_5);
    ListOrdGrp_NoOrders_1.insert(Designation_5.getString());
    FIX::EffectiveTime EffectiveTime_5(FIX::UTCTIMESTAMP(8, 2, 53, 12, 92002));
    noOrders_0_1.set(EffectiveTime_5);
    ListOrdGrp_NoOrders_1.insert(EffectiveTime_5.getString());
    FIX::EncodedText EncodedText_55("DATA_1330286852");
    noOrders_0_1.set(EncodedText_55);
    ListOrdGrp_NoOrders_1.insert(EncodedText_55.getString());
    FIX::EncodedTextLen EncodedTextLen_55(1388654439);
    noOrders_0_1.set(EncodedTextLen_55);
    ListOrdGrp_NoOrders_1.insert(EncodedTextLen_55.getString());
    FIX::ExDestination ExDestination_4("EXCHANGE_164245222");
    noOrders_0_1.set(ExDestination_4);
    ListOrdGrp_NoOrders_1.insert(ExDestination_4.getString());
    FIX::ExDestinationIDSource ExDestinationIDSource_4('B');
    noOrders_0_1.set(ExDestinationIDSource_4);
    ListOrdGrp_NoOrders_1.insert(ExDestinationIDSource_4.getString());
    FIX::ExecInst ExecInst_8("MULTIPLECHARVALUE_A");
    noOrders_0_1.set(ExecInst_8);
    ListOrdGrp_NoOrders_1.insert(ExecInst_8.getString());
    FIX::ExpireDate ExpireDate_9("LOCALMKTDATE_1238139098");
    noOrders_0_1.set(ExpireDate_9);
    ListOrdGrp_NoOrders_1.insert(ExpireDate_9.getString());
    FIX::ExpireTime ExpireTime_10(FIX::UTCTIMESTAMP(14, 15, 2, 27, 122007));
    noOrders_0_1.set(ExpireTime_10);
    ListOrdGrp_NoOrders_1.insert(ExpireTime_10.getString());
    FIX::ForexReq ForexReq_8(true);
    noOrders_0_1.set(ForexReq_8);
    ListOrdGrp_NoOrders_1.insert(ForexReq_8.getString());
    FIX::GTBookingInst GTBookingInst_5(1);
    noOrders_0_1.set(GTBookingInst_5);
    ListOrdGrp_NoOrders_1.insert(GTBookingInst_5.getString());
    FIX::HandlInst HandlInst_5('2');
    noOrders_0_1.set(HandlInst_5);
    ListOrdGrp_NoOrders_1.insert(HandlInst_5.getString());
    FIX::IOIID IOIID_5("STRING_1215333843");
    noOrders_0_1.set(IOIID_5);
    ListOrdGrp_NoOrders_1.insert(IOIID_5.getString());
    FIX::ListSeqNo ListSeqNo_1(446983094);
    noOrders_0_1.set(ListSeqNo_1);
    ListOrdGrp_NoOrders_1.insert(ListSeqNo_1.getString());
    FIX::LocateReqd LocateReqd_4(false);
    noOrders_0_1.set(LocateReqd_4);
    ListOrdGrp_NoOrders_1.insert(LocateReqd_4.getString());
    FIX::MatchIncrement MatchIncrement_5;
    MatchIncrement_5.setString("18717057");
    noOrders_0_1.set(MatchIncrement_5);
    ListOrdGrp_NoOrders_1.insert(MatchIncrement_5.getString());
    FIX::MaxFloor MaxFloor_5;
    MaxFloor_5.setString("18654581");
    noOrders_0_1.set(MaxFloor_5);
    ListOrdGrp_NoOrders_1.insert(MaxFloor_5.getString());
    FIX::MaxPriceLevels MaxPriceLevels_5(1330010914);
    noOrders_0_1.set(MaxPriceLevels_5);
    ListOrdGrp_NoOrders_1.insert(MaxPriceLevels_5.getString());
    FIX::MaxShow MaxShow_5;
    MaxShow_5.setString("2256817");
    noOrders_0_1.set(MaxShow_5);
    ListOrdGrp_NoOrders_1.insert(MaxShow_5.getString());
    FIX::MinQty MinQty_8;
    MinQty_8.setString("18615166");
    noOrders_0_1.set(MinQty_8);
    ListOrdGrp_NoOrders_1.insert(MinQty_8.getString());
    FIX::OrdType OrdType_41('M');
    noOrders_0_1.set(OrdType_41);
    ListOrdGrp_NoOrders_1.insert(OrdType_41.getString());
    FIX::OrderCapacity OrderCapacity_17('G');
    noOrders_0_1.set(OrderCapacity_17);
    ListOrdGrp_NoOrders_1.insert(OrderCapacity_17.getString());
    FIX::OrderQty2 OrderQty2_5;
    OrderQty2_5.setString("949");
    noOrders_0_1.set(OrderQty2_5);
    ListOrdGrp_NoOrders_1.insert(OrderQty2_5.getString());
    FIX::OrderRestrictions OrderRestrictions_14("MULTIPLECHARVALUE_C");
    noOrders_0_1.set(OrderRestrictions_14);
    ListOrdGrp_NoOrders_1.insert(OrderRestrictions_14.getString());
    FIX::ParticipationRate ParticipationRate_5;
    ParticipationRate_5.setString("56.640000");
    noOrders_0_1.set(ParticipationRate_5);
    ListOrdGrp_NoOrders_1.insert(ParticipationRate_5.getString());
    FIX::PositionEffect PositionEffect_11('C');
    noOrders_0_1.set(PositionEffect_11);
    ListOrdGrp_NoOrders_1.insert(PositionEffect_11.getString());
    FIX::PreTradeAnonymity PreTradeAnonymity_8(true);
    noOrders_0_1.set(PreTradeAnonymity_8);
    ListOrdGrp_NoOrders_1.insert(PreTradeAnonymity_8.getString());
    FIX::PreallocMethod PreallocMethod_8('0');
    noOrders_0_1.set(PreallocMethod_8);
    ListOrdGrp_NoOrders_1.insert(PreallocMethod_8.getString());
    FIX::PrevClosePx PrevClosePx_6;
    PrevClosePx_6.setString("13928240");
    noOrders_0_1.set(PrevClosePx_6);
    ListOrdGrp_NoOrders_1.insert(PrevClosePx_6.getString());
    FIX::Price Price_15;
    Price_15.setString("728292");
    noOrders_0_1.set(Price_15);
    ListOrdGrp_NoOrders_1.insert(Price_15.getString());
    FIX::Price2 Price2_1;
    Price2_1.setString("19156233");
    noOrders_0_1.set(Price2_1);
    ListOrdGrp_NoOrders_1.insert(Price2_1.getString());
    FIX::PriceProtectionScope PriceProtectionScope_5('3');
    noOrders_0_1.set(PriceProtectionScope_5);
    ListOrdGrp_NoOrders_1.insert(PriceProtectionScope_5.getString());
    FIX::PriceType PriceType_27(10);
    noOrders_0_1.set(PriceType_27);
    ListOrdGrp_NoOrders_1.insert(PriceType_27.getString());
    FIX::ProcessCode ProcessCode_10('2');
    noOrders_0_1.set(ProcessCode_10);
    ListOrdGrp_NoOrders_1.insert(ProcessCode_10.getString());
    FIX::QtyType QtyType_20(2);
    noOrders_0_1.set(QtyType_20);
    ListOrdGrp_NoOrders_1.insert(QtyType_20.getString());
    FIX::QuoteID QuoteID_6("STRING_1799794716");
    noOrders_0_1.set(QuoteID_6);
    ListOrdGrp_NoOrders_1.insert(QuoteID_6.getString());
    FIX::RefOrderID RefOrderID_1("STRING_1010233343");
    noOrders_0_1.set(RefOrderID_1);
    ListOrdGrp_NoOrders_1.insert(RefOrderID_1.getString());
    FIX::RefOrderIDSource RefOrderIDSource_1('0');
    noOrders_0_1.set(RefOrderIDSource_1);
    ListOrdGrp_NoOrders_1.insert(RefOrderIDSource_1.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_28("STRING_272590191");
    noOrders_0_1.set(SecondaryClOrdID_28);
    ListOrdGrp_NoOrders_1.insert(SecondaryClOrdID_28.getString());
    FIX::SettlCurrency SettlCurrency_17("JPY");
    noOrders_0_1.set(SettlCurrency_17);
    ListOrdGrp_NoOrders_1.insert(SettlCurrency_17.getString());
    FIX::SettlDate SettlDate_26("LOCALMKTDATE_1549279207");
    noOrders_0_1.set(SettlDate_26);
    ListOrdGrp_NoOrders_1.insert(SettlDate_26.getString());
    FIX::SettlDate2 SettlDate2_5("LOCALMKTDATE_1491868495");
    noOrders_0_1.set(SettlDate2_5);
    ListOrdGrp_NoOrders_1.insert(SettlDate2_5.getString());
    FIX::SettlInstMode SettlInstMode_1('5');
    noOrders_0_1.set(SettlInstMode_1);
    ListOrdGrp_NoOrders_1.insert(SettlInstMode_1.getString());
    FIX::SettlType SettlType_17("STRING_B");
    noOrders_0_1.set(SettlType_17);
    ListOrdGrp_NoOrders_1.insert(SettlType_17.getString());
    FIX::Side Side_27('3');
    noOrders_0_1.set(Side_27);
    ListOrdGrp_NoOrders_1.insert(Side_27.getString());
    FIX::SideValueInd SideValueInd_3(1);
    noOrders_0_1.set(SideValueInd_3);
    ListOrdGrp_NoOrders_1.insert(SideValueInd_3.getString());
    FIX::SolicitedFlag SolicitedFlag_8(false);
    noOrders_0_1.set(SolicitedFlag_8);
    ListOrdGrp_NoOrders_1.insert(SolicitedFlag_8.getString());
    FIX::StopPx StopPx_5;
    StopPx_5.setString("2175600");
    noOrders_0_1.set(StopPx_5);
    ListOrdGrp_NoOrders_1.insert(StopPx_5.getString());
    FIX::TargetStrategy TargetStrategy_5(2);
    noOrders_0_1.set(TargetStrategy_5);
    ListOrdGrp_NoOrders_1.insert(TargetStrategy_5.getString());
    FIX::TargetStrategyParameters TargetStrategyParameters_5("STRING_1428269802");
    noOrders_0_1.set(TargetStrategyParameters_5);
    ListOrdGrp_NoOrders_1.insert(TargetStrategyParameters_5.getString());
    FIX::Text Text_55("STRING_288875770");
    noOrders_0_1.set(Text_55);
    ListOrdGrp_NoOrders_1.insert(Text_55.getString());
    FIX::TimeInForce TimeInForce_37('5');
    noOrders_0_1.set(TimeInForce_37);
    ListOrdGrp_NoOrders_1.insert(TimeInForce_37.getString());
    FIX::TradeDate TradeDate_22("LOCALMKTDATE_1428364792");
    noOrders_0_1.set(TradeDate_22);
    ListOrdGrp_NoOrders_1.insert(TradeDate_22.getString());
    FIX::TradeOriginationDate TradeOriginationDate_14("LOCALMKTDATE_2071315716");
    noOrders_0_1.set(TradeOriginationDate_14);
    ListOrdGrp_NoOrders_1.insert(TradeOriginationDate_14.getString());
    FIX::TransactTime TransactTime_32(FIX::UTCTIMESTAMP(10, 56, 19, 11, 42014));
    noOrders_0_1.set(TransactTime_32);
    ListOrdGrp_NoOrders_1.insert(TransactTime_32.getString());
    all_values.push_back(ListOrdGrp_NoOrders_1);

    // CommissionData
    multiset<string> CommissionData_15;
    FIX::CommCurrency CommCurrency_15("JPY");
    noOrders_0_1.set(CommCurrency_15);
    CommissionData_15.insert(CommCurrency_15.getString());
    FIX::CommType CommType_15('6');
    noOrders_0_1.set(CommType_15);
    CommissionData_15.insert(CommType_15.getString());
    FIX::Commission Commission_15;
    Commission_15.setString("2172177");
    noOrders_0_1.set(Commission_15);
    CommissionData_15.insert(Commission_15.getString());
    FIX::FundRenewWaiv FundRenewWaiv_15('Y');
    noOrders_0_1.set(FundRenewWaiv_15);
    CommissionData_15.insert(FundRenewWaiv_15.getString());
    all_values.push_back(CommissionData_15);

    // DiscretionInstructions
    multiset<string> DiscretionInstructions_5;
    FIX::DiscretionInst DiscretionInst_5('6');
    noOrders_0_1.set(DiscretionInst_5);
    DiscretionInstructions_5.insert(DiscretionInst_5.getString());
    FIX::DiscretionLimitType DiscretionLimitType_5(2);
    noOrders_0_1.set(DiscretionLimitType_5);
    DiscretionInstructions_5.insert(DiscretionLimitType_5.getString());
    FIX::DiscretionMoveType DiscretionMoveType_5(0);
    noOrders_0_1.set(DiscretionMoveType_5);
    DiscretionInstructions_5.insert(DiscretionMoveType_5.getString());
    FIX::DiscretionOffsetType DiscretionOffsetType_5(2);
    noOrders_0_1.set(DiscretionOffsetType_5);
    DiscretionInstructions_5.insert(DiscretionOffsetType_5.getString());
    FIX::DiscretionOffsetValue DiscretionOffsetValue_5;
    DiscretionOffsetValue_5.setString("5878226");
    noOrders_0_1.set(DiscretionOffsetValue_5);
    DiscretionInstructions_5.insert(DiscretionOffsetValue_5.getString());
    FIX::DiscretionRoundDirection DiscretionRoundDirection_5(1);
    noOrders_0_1.set(DiscretionRoundDirection_5);
    DiscretionInstructions_5.insert(DiscretionRoundDirection_5.getString());
    FIX::DiscretionScope DiscretionScope_5(3);
    noOrders_0_1.set(DiscretionScope_5);
    DiscretionInstructions_5.insert(DiscretionScope_5.getString());
    all_values.push_back(DiscretionInstructions_5);

    // DisplayInstruction
    multiset<string> DisplayInstruction_5;
    FIX::DisplayHighQty DisplayHighQty_5;
    DisplayHighQty_5.setString("17404581");
    noOrders_0_1.set(DisplayHighQty_5);
    DisplayInstruction_5.insert(DisplayHighQty_5.getString());
    FIX::DisplayLowQty DisplayLowQty_5;
    DisplayLowQty_5.setString("3916891");
    noOrders_0_1.set(DisplayLowQty_5);
    DisplayInstruction_5.insert(DisplayLowQty_5.getString());
    FIX::DisplayMethod DisplayMethod_5('1');
    noOrders_0_1.set(DisplayMethod_5);
    DisplayInstruction_5.insert(DisplayMethod_5.getString());
    FIX::DisplayMinIncr DisplayMinIncr_5;
    DisplayMinIncr_5.setString("4698321");
    noOrders_0_1.set(DisplayMinIncr_5);
    DisplayInstruction_5.insert(DisplayMinIncr_5.getString());
    FIX::DisplayQty DisplayQty_5;
    DisplayQty_5.setString("21059259");
    noOrders_0_1.set(DisplayQty_5);
    DisplayInstruction_5.insert(DisplayQty_5.getString());
    FIX::DisplayWhen DisplayWhen_5('2');
    noOrders_0_1.set(DisplayWhen_5);
    DisplayInstruction_5.insert(DisplayWhen_5.getString());
    FIX::RefreshQty RefreshQty_5;
    RefreshQty_5.setString("15723716");
    noOrders_0_1.set(RefreshQty_5);
    DisplayInstruction_5.insert(RefreshQty_5.getString());
    FIX::SecondaryDisplayQty SecondaryDisplayQty_5;
    SecondaryDisplayQty_5.setString("13867120");
    noOrders_0_1.set(SecondaryDisplayQty_5);
    DisplayInstruction_5.insert(SecondaryDisplayQty_5.getString());
    all_values.push_back(DisplayInstruction_5);

    // Instrument
    multiset<string> Instrument_38;
    FIX::AttachmentPoint AttachmentPoint_38;
    AttachmentPoint_38.setString("72.710000");
    noOrders_0_1.set(AttachmentPoint_38);
    Instrument_38.insert(AttachmentPoint_38.getString());
    FIX::CFICode CFICode_38("STRING_746820263");
    noOrders_0_1.set(CFICode_38);
    Instrument_38.insert(CFICode_38.getString());
    FIX::CPProgram CPProgram_38(2);
    noOrders_0_1.set(CPProgram_38);
    Instrument_38.insert(CPProgram_38.getString());
    FIX::CPRegType CPRegType_38("STRING_497809339");
    noOrders_0_1.set(CPRegType_38);
    Instrument_38.insert(CPRegType_38.getString());
    FIX::CapPrice CapPrice_38;
    CapPrice_38.setString("16398845");
    noOrders_0_1.set(CapPrice_38);
    Instrument_38.insert(CapPrice_38.getString());
    FIX::ContractMultiplier ContractMultiplier_38;
    ContractMultiplier_38.setString("21001276");
    noOrders_0_1.set(ContractMultiplier_38);
    Instrument_38.insert(ContractMultiplier_38.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_38(2);
    noOrders_0_1.set(ContractMultiplierUnit_38);
    Instrument_38.insert(ContractMultiplierUnit_38.getString());
    FIX::ContractSettlMonth ContractSettlMonth_38("MONTHYEAR_1286884026");
    noOrders_0_1.set(ContractSettlMonth_38);
    Instrument_38.insert(ContractSettlMonth_38.getString());
    FIX::CountryOfIssue CountryOfIssue_38("COUNTRY_630518756");
    noOrders_0_1.set(CountryOfIssue_38);
    Instrument_38.insert(CountryOfIssue_38.getString());
    FIX::CouponPaymentDate CouponPaymentDate_38("LOCALMKTDATE_235470759");
    noOrders_0_1.set(CouponPaymentDate_38);
    Instrument_38.insert(CouponPaymentDate_38.getString());
    FIX::CouponRate CouponRate_38;
    CouponRate_38.setString("32.680000");
    noOrders_0_1.set(CouponRate_38);
    Instrument_38.insert(CouponRate_38.getString());
    FIX::CreditRating CreditRating_38("STRING_263826155");
    noOrders_0_1.set(CreditRating_38);
    Instrument_38.insert(CreditRating_38.getString());
    FIX::DatedDate DatedDate_38("LOCALMKTDATE_1451684432");
    noOrders_0_1.set(DatedDate_38);
    Instrument_38.insert(DatedDate_38.getString());
    FIX::DetachmentPoint DetachmentPoint_38;
    DetachmentPoint_38.setString("50.910000");
    noOrders_0_1.set(DetachmentPoint_38);
    Instrument_38.insert(DetachmentPoint_38.getString());
    FIX::EncodedIssuer EncodedIssuer_38("DATA_481043923");
    noOrders_0_1.set(EncodedIssuer_38);
    Instrument_38.insert(EncodedIssuer_38.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_38(172725525);
    noOrders_0_1.set(EncodedIssuerLen_38);
    Instrument_38.insert(EncodedIssuerLen_38.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_38("DATA_878040257");
    noOrders_0_1.set(EncodedSecurityDesc_38);
    Instrument_38.insert(EncodedSecurityDesc_38.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_38(1131564831);
    noOrders_0_1.set(EncodedSecurityDescLen_38);
    Instrument_38.insert(EncodedSecurityDescLen_38.getString());
    FIX::ExerciseStyle ExerciseStyle_38(0);
    noOrders_0_1.set(ExerciseStyle_38);
    Instrument_38.insert(ExerciseStyle_38.getString());
    FIX::Factor Factor_38;
    Factor_38.setString("5661641");
    noOrders_0_1.set(Factor_38);
    Instrument_38.insert(Factor_38.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_38(true);
    noOrders_0_1.set(FlexProductEligibilityIndicator_38);
    Instrument_38.insert(FlexProductEligibilityIndicator_38.getString());
    FIX::FlexibleIndicator FlexibleIndicator_38(false);
    noOrders_0_1.set(FlexibleIndicator_38);
    Instrument_38.insert(FlexibleIndicator_38.getString());
    FIX::FloorPrice FloorPrice_38;
    FloorPrice_38.setString("17461564");
    noOrders_0_1.set(FloorPrice_38);
    Instrument_38.insert(FloorPrice_38.getString());
    FIX::FlowScheduleType FlowScheduleType_38(2);
    noOrders_0_1.set(FlowScheduleType_38);
    Instrument_38.insert(FlowScheduleType_38.getString());
    FIX::InstrRegistry InstrRegistry_38("STRING_100956447");
    noOrders_0_1.set(InstrRegistry_38);
    Instrument_38.insert(InstrRegistry_38.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_38('1');
    noOrders_0_1.set(InstrmtAssignmentMethod_38);
    Instrument_38.insert(InstrmtAssignmentMethod_38.getString());
    FIX::InterestAccrualDate InterestAccrualDate_38("LOCALMKTDATE_1782194108");
    noOrders_0_1.set(InterestAccrualDate_38);
    Instrument_38.insert(InterestAccrualDate_38.getString());
    FIX::IssueDate IssueDate_38("LOCALMKTDATE_59398700");
    noOrders_0_1.set(IssueDate_38);
    Instrument_38.insert(IssueDate_38.getString());
    FIX::Issuer Issuer_38("STRING_2098799412");
    noOrders_0_1.set(Issuer_38);
    Instrument_38.insert(Issuer_38.getString());
    FIX::ListMethod ListMethod_38(0);
    noOrders_0_1.set(ListMethod_38);
    Instrument_38.insert(ListMethod_38.getString());
    FIX::LocaleOfIssue LocaleOfIssue_38("STRING_1446110756");
    noOrders_0_1.set(LocaleOfIssue_38);
    Instrument_38.insert(LocaleOfIssue_38.getString());
    FIX::MaturityDate MaturityDate_38("LOCALMKTDATE_525293035");
    noOrders_0_1.set(MaturityDate_38);
    Instrument_38.insert(MaturityDate_38.getString());
    FIX::MaturityMonthYear MaturityMonthYear_38("MONTHYEAR_1953902380");
    noOrders_0_1.set(MaturityMonthYear_38);
    Instrument_38.insert(MaturityMonthYear_38.getString());
    FIX::MaturityTime MaturityTime_38("TZTIMEONLY_2113703955");
    noOrders_0_1.set(MaturityTime_38);
    Instrument_38.insert(MaturityTime_38.getString());
    FIX::MinPriceIncrement MinPriceIncrement_38;
    MinPriceIncrement_38.setString("10231023");
    noOrders_0_1.set(MinPriceIncrement_38);
    Instrument_38.insert(MinPriceIncrement_38.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_38;
    MinPriceIncrementAmount_38.setString("14463032");
    noOrders_0_1.set(MinPriceIncrementAmount_38);
    Instrument_38.insert(MinPriceIncrementAmount_38.getString());
    FIX::NTPositionLimit NTPositionLimit_38(2066347909);
    noOrders_0_1.set(NTPositionLimit_38);
    Instrument_38.insert(NTPositionLimit_38.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_38;
    NotionalPercentageOutstanding_38.setString("78.030000");
    noOrders_0_1.set(NotionalPercentageOutstanding_38);
    Instrument_38.insert(NotionalPercentageOutstanding_38.getString());
    FIX::OptAttribute OptAttribute_38('5');
    noOrders_0_1.set(OptAttribute_38);
    Instrument_38.insert(OptAttribute_38.getString());
    FIX::OptPayoutAmount OptPayoutAmount_38;
    OptPayoutAmount_38.setString("5493830");
    noOrders_0_1.set(OptPayoutAmount_38);
    Instrument_38.insert(OptPayoutAmount_38.getString());
    FIX::OptPayoutType OptPayoutType_38(3);
    noOrders_0_1.set(OptPayoutType_38);
    Instrument_38.insert(OptPayoutType_38.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_38;
    OriginalNotionalPercentageOutstanding_38.setString("69.130000");
    noOrders_0_1.set(OriginalNotionalPercentageOutstanding_38);
    Instrument_38.insert(OriginalNotionalPercentageOutstanding_38.getString());
    FIX::Pool Pool_38("STRING_813209172");
    noOrders_0_1.set(Pool_38);
    Instrument_38.insert(Pool_38.getString());
    FIX::PositionLimit PositionLimit_38(892999346);
    noOrders_0_1.set(PositionLimit_38);
    Instrument_38.insert(PositionLimit_38.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_38("STRING_STD");
    noOrders_0_1.set(PriceQuoteMethod_38);
    Instrument_38.insert(PriceQuoteMethod_38.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_38("STRING_1294253095");
    noOrders_0_1.set(PriceUnitOfMeasure_38);
    Instrument_38.insert(PriceUnitOfMeasure_38.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_38;
    PriceUnitOfMeasureQty_38.setString("10657248");
    noOrders_0_1.set(PriceUnitOfMeasureQty_38);
    Instrument_38.insert(PriceUnitOfMeasureQty_38.getString());
    FIX::Product Product_40(5);
    noOrders_0_1.set(Product_40);
    Instrument_38.insert(Product_40.getString());
    FIX::ProductComplex ProductComplex_38("STRING_278334279");
    noOrders_0_1.set(ProductComplex_38);
    Instrument_38.insert(ProductComplex_38.getString());
    FIX::PutOrCall PutOrCall_38(1);
    noOrders_0_1.set(PutOrCall_38);
    Instrument_38.insert(PutOrCall_38.getString());
    FIX::RedemptionDate RedemptionDate_38("LOCALMKTDATE_869362718");
    noOrders_0_1.set(RedemptionDate_38);
    Instrument_38.insert(RedemptionDate_38.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_38("STRING_1997721713");
    noOrders_0_1.set(RepoCollateralSecurityType_38);
    Instrument_38.insert(RepoCollateralSecurityType_38.getString());
    FIX::RepurchaseRate RepurchaseRate_38;
    RepurchaseRate_38.setString("26.300000");
    noOrders_0_1.set(RepurchaseRate_38);
    Instrument_38.insert(RepurchaseRate_38.getString());
    FIX::RepurchaseTerm RepurchaseTerm_38(468035516);
    noOrders_0_1.set(RepurchaseTerm_38);
    Instrument_38.insert(RepurchaseTerm_38.getString());
    FIX::RestructuringType RestructuringType_38("STRING_FR");
    noOrders_0_1.set(RestructuringType_38);
    Instrument_38.insert(RestructuringType_38.getString());
    FIX::SecurityDesc SecurityDesc_38("STRING_42305430");
    noOrders_0_1.set(SecurityDesc_38);
    Instrument_38.insert(SecurityDesc_38.getString());
    FIX::SecurityExchange SecurityExchange_38("EXCHANGE_134249778");
    noOrders_0_1.set(SecurityExchange_38);
    Instrument_38.insert(SecurityExchange_38.getString());
    FIX::SecurityGroup SecurityGroup_38("STRING_797310452");
    noOrders_0_1.set(SecurityGroup_38);
    Instrument_38.insert(SecurityGroup_38.getString());
    FIX::SecurityID SecurityID_38("STRING_101704130");
    noOrders_0_1.set(SecurityID_38);
    Instrument_38.insert(SecurityID_38.getString());
    FIX::SecurityIDSource SecurityIDSource_38("STRING_J");
    noOrders_0_1.set(SecurityIDSource_38);
    Instrument_38.insert(SecurityIDSource_38.getString());
    FIX::SecurityStatus SecurityStatus_38("STRING_2");
    noOrders_0_1.set(SecurityStatus_38);
    Instrument_38.insert(SecurityStatus_38.getString());
    FIX::SecuritySubType SecuritySubType_39("STRING_1547814886");
    noOrders_0_1.set(SecuritySubType_39);
    Instrument_38.insert(SecuritySubType_39.getString());
    FIX::SecurityType SecurityType_40("STRING_PN");
    noOrders_0_1.set(SecurityType_40);
    Instrument_38.insert(SecurityType_40.getString());
    FIX::Seniority Seniority_38("STRING_SD");
    noOrders_0_1.set(Seniority_38);
    Instrument_38.insert(Seniority_38.getString());
    FIX::SettlMethod SettlMethod_38('C');
    noOrders_0_1.set(SettlMethod_38);
    Instrument_38.insert(SettlMethod_38.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_38("STRING_1633960953");
    noOrders_0_1.set(SettleOnOpenFlag_38);
    Instrument_38.insert(SettleOnOpenFlag_38.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_38("STRING_1109630919");
    noOrders_0_1.set(StateOrProvinceOfIssue_38);
    Instrument_38.insert(StateOrProvinceOfIssue_38.getString());
    FIX::StrikeCurrency StrikeCurrency_38("USD");
    noOrders_0_1.set(StrikeCurrency_38);
    Instrument_38.insert(StrikeCurrency_38.getString());
    FIX::StrikeMultiplier StrikeMultiplier_38;
    StrikeMultiplier_38.setString("16953345");
    noOrders_0_1.set(StrikeMultiplier_38);
    Instrument_38.insert(StrikeMultiplier_38.getString());
    FIX::StrikePrice StrikePrice_38;
    StrikePrice_38.setString("19822824");
    noOrders_0_1.set(StrikePrice_38);
    Instrument_38.insert(StrikePrice_38.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_38(3);
    noOrders_0_1.set(StrikePriceBoundaryMethod_38);
    Instrument_38.insert(StrikePriceBoundaryMethod_38.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_38;
    StrikePriceBoundaryPrecision_38.setString("78.290000");
    noOrders_0_1.set(StrikePriceBoundaryPrecision_38);
    Instrument_38.insert(StrikePriceBoundaryPrecision_38.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_38(2);
    noOrders_0_1.set(StrikePriceDeterminationMethod_38);
    Instrument_38.insert(StrikePriceDeterminationMethod_38.getString());
    FIX::StrikeValue StrikeValue_38;
    StrikeValue_38.setString("11741193");
    noOrders_0_1.set(StrikeValue_38);
    Instrument_38.insert(StrikeValue_38.getString());
    FIX::Symbol Symbol_38("STRING_260736185");
    noOrders_0_1.set(Symbol_38);
    Instrument_38.insert(Symbol_38.getString());
    FIX::SymbolSfx SymbolSfx_38("STRING_CD");
    noOrders_0_1.set(SymbolSfx_38);
    Instrument_38.insert(SymbolSfx_38.getString());
    FIX::TimeUnit TimeUnit_38("STRING_S");
    noOrders_0_1.set(TimeUnit_38);
    Instrument_38.insert(TimeUnit_38.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_38(4);
    noOrders_0_1.set(UnderlyingPriceDeterminationMethod_38);
    Instrument_38.insert(UnderlyingPriceDeterminationMethod_38.getString());
    FIX::UnitOfMeasure UnitOfMeasure_38("STRING_t");
    noOrders_0_1.set(UnitOfMeasure_38);
    Instrument_38.insert(UnitOfMeasure_38.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_38;
    UnitOfMeasureQty_38.setString("3244422");
    noOrders_0_1.set(UnitOfMeasureQty_38);
    Instrument_38.insert(UnitOfMeasureQty_38.getString());
    FIX::ValuationMethod ValuationMethod_38("STRING_FUTDA");
    noOrders_0_1.set(ValuationMethod_38);
    Instrument_38.insert(ValuationMethod_38.getString());
    all_values.push_back(Instrument_38);

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::NewOrderList::NoOrders::NoComplexEvents noComplexEvents_1_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_77;
      FIX::ComplexEventCondition ComplexEventCondition_77(1);
      noComplexEvents_1_1_0.set(ComplexEventCondition_77);
      ComplexEvents_NoComplexEvents_77.insert(ComplexEventCondition_77.getString());
      FIX::ComplexEventPrice ComplexEventPrice_77;
      ComplexEventPrice_77.setString("19013330");
      noComplexEvents_1_1_0.set(ComplexEventPrice_77);
      ComplexEvents_NoComplexEvents_77.insert(ComplexEventPrice_77.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_77(2);
      noComplexEvents_1_1_0.set(ComplexEventPriceBoundaryMethod_77);
      ComplexEvents_NoComplexEvents_77.insert(ComplexEventPriceBoundaryMethod_77.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_77;
      ComplexEventPriceBoundaryPrecision_77.setString("66.860000");
      noComplexEvents_1_1_0.set(ComplexEventPriceBoundaryPrecision_77);
      ComplexEvents_NoComplexEvents_77.insert(ComplexEventPriceBoundaryPrecision_77.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_77(1);
      noComplexEvents_1_1_0.set(ComplexEventPriceTimeType_77);
      ComplexEvents_NoComplexEvents_77.insert(ComplexEventPriceTimeType_77.getString());
      FIX::ComplexEventType ComplexEventType_77(2);
      noComplexEvents_1_1_0.set(ComplexEventType_77);
      ComplexEvents_NoComplexEvents_77.insert(ComplexEventType_77.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_77;
      ComplexOptPayoutAmount_77.setString("4098008");
      noComplexEvents_1_1_0.set(ComplexOptPayoutAmount_77);
      ComplexEvents_NoComplexEvents_77.insert(ComplexOptPayoutAmount_77.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_77);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_166;
        FIX::ComplexEventEndDate ComplexEventEndDate_166(FIX::UTCTIMESTAMP(23, 44, 28, 13, 102017));
        noComplexEventDates_1_0_2_0.set(ComplexEventEndDate_166);
        ComplexEventDates_NoComplexEventDates_166.insert(ComplexEventEndDate_166.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_166(FIX::UTCTIMESTAMP(9, 3, 40, 20, 52009));
        noComplexEventDates_1_0_2_0.set(ComplexEventStartDate_166);
        ComplexEventDates_NoComplexEventDates_166.insert(ComplexEventStartDate_166.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_166);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_330;
          FIX::ComplexEventEndTime ComplexEventEndTime_330(FIX::UTCTIMEONLY(2, 53, 29));
          noComplexEventTimes_1_0_0_3_0.set(ComplexEventEndTime_330);
          ComplexEventTimes_NoComplexEventTimes_330.insert(ComplexEventEndTime_330.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_330(FIX::UTCTIMEONLY(19, 19, 14));
          noComplexEventTimes_1_0_0_3_0.set(ComplexEventStartTime_330);
          ComplexEventTimes_NoComplexEventTimes_330.insert(ComplexEventStartTime_330.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_330);

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_331;
          FIX::ComplexEventEndTime ComplexEventEndTime_331(FIX::UTCTIMEONLY(16, 16, 9));
          noComplexEventTimes_1_0_0_3_1.set(ComplexEventEndTime_331);
          ComplexEventTimes_NoComplexEventTimes_331.insert(ComplexEventEndTime_331.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_331(FIX::UTCTIMEONLY(18, 45, 35));
          noComplexEventTimes_1_0_0_3_1.set(ComplexEventStartTime_331);
          ComplexEventTimes_NoComplexEventTimes_331.insert(ComplexEventStartTime_331.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_331);

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_1);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_332;
          FIX::ComplexEventEndTime ComplexEventEndTime_332(FIX::UTCTIMEONLY(0, 19, 9));
          noComplexEventTimes_1_0_0_3_2.set(ComplexEventEndTime_332);
          ComplexEventTimes_NoComplexEventTimes_332.insert(ComplexEventEndTime_332.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_332(FIX::UTCTIMEONLY(17, 8, 37));
          noComplexEventTimes_1_0_0_3_2.set(ComplexEventStartTime_332);
          ComplexEventTimes_NoComplexEventTimes_332.insert(ComplexEventStartTime_332.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_332);

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_2);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_167;
        FIX::ComplexEventEndDate ComplexEventEndDate_167(FIX::UTCTIMESTAMP(16, 18, 58, 20, 82009));
        noComplexEventDates_1_0_2_1.set(ComplexEventEndDate_167);
        ComplexEventDates_NoComplexEventDates_167.insert(ComplexEventEndDate_167.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_167(FIX::UTCTIMESTAMP(9, 33, 40, 27, 92003));
        noComplexEventDates_1_0_2_1.set(ComplexEventStartDate_167);
        ComplexEventDates_NoComplexEventDates_167.insert(ComplexEventStartDate_167.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_167);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_333;
          FIX::ComplexEventEndTime ComplexEventEndTime_333(FIX::UTCTIMEONLY(19, 9, 56));
          noComplexEventTimes_1_0_1_3_0.set(ComplexEventEndTime_333);
          ComplexEventTimes_NoComplexEventTimes_333.insert(ComplexEventEndTime_333.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_333(FIX::UTCTIMEONLY(19, 41, 31));
          noComplexEventTimes_1_0_1_3_0.set(ComplexEventStartTime_333);
          ComplexEventTimes_NoComplexEventTimes_333.insert(ComplexEventStartTime_333.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_333);

          noComplexEventDates_1_0_2_1.addGroup(noComplexEventTimes_1_0_1_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_334;
          FIX::ComplexEventEndTime ComplexEventEndTime_334(FIX::UTCTIMEONLY(22, 50, 33));
          noComplexEventTimes_1_0_1_3_1.set(ComplexEventEndTime_334);
          ComplexEventTimes_NoComplexEventTimes_334.insert(ComplexEventEndTime_334.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_334(FIX::UTCTIMEONLY(11, 42, 5));
          noComplexEventTimes_1_0_1_3_1.set(ComplexEventStartTime_334);
          ComplexEventTimes_NoComplexEventTimes_334.insert(ComplexEventStartTime_334.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_334);

          noComplexEventDates_1_0_2_1.addGroup(noComplexEventTimes_1_0_1_3_1);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_1);
      }
      noOrders_0_1.addGroup(noComplexEvents_1_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoComplexEvents noComplexEvents_1_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_78;
      FIX::ComplexEventCondition ComplexEventCondition_78(1);
      noComplexEvents_1_1_1.set(ComplexEventCondition_78);
      ComplexEvents_NoComplexEvents_78.insert(ComplexEventCondition_78.getString());
      FIX::ComplexEventPrice ComplexEventPrice_78;
      ComplexEventPrice_78.setString("20257997");
      noComplexEvents_1_1_1.set(ComplexEventPrice_78);
      ComplexEvents_NoComplexEvents_78.insert(ComplexEventPrice_78.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_78(1);
      noComplexEvents_1_1_1.set(ComplexEventPriceBoundaryMethod_78);
      ComplexEvents_NoComplexEvents_78.insert(ComplexEventPriceBoundaryMethod_78.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_78;
      ComplexEventPriceBoundaryPrecision_78.setString("43.680000");
      noComplexEvents_1_1_1.set(ComplexEventPriceBoundaryPrecision_78);
      ComplexEvents_NoComplexEvents_78.insert(ComplexEventPriceBoundaryPrecision_78.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_78(2);
      noComplexEvents_1_1_1.set(ComplexEventPriceTimeType_78);
      ComplexEvents_NoComplexEvents_78.insert(ComplexEventPriceTimeType_78.getString());
      FIX::ComplexEventType ComplexEventType_78(5);
      noComplexEvents_1_1_1.set(ComplexEventType_78);
      ComplexEvents_NoComplexEvents_78.insert(ComplexEventType_78.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_78;
      ComplexOptPayoutAmount_78.setString("3528947");
      noComplexEvents_1_1_1.set(ComplexOptPayoutAmount_78);
      ComplexEvents_NoComplexEvents_78.insert(ComplexOptPayoutAmount_78.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_78);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_168;
        FIX::ComplexEventEndDate ComplexEventEndDate_168(FIX::UTCTIMESTAMP(9, 29, 11, 17, 12000));
        noComplexEventDates_1_1_2_0.set(ComplexEventEndDate_168);
        ComplexEventDates_NoComplexEventDates_168.insert(ComplexEventEndDate_168.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_168(FIX::UTCTIMESTAMP(7, 14, 48, 7, 102003));
        noComplexEventDates_1_1_2_0.set(ComplexEventStartDate_168);
        ComplexEventDates_NoComplexEventDates_168.insert(ComplexEventStartDate_168.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_168);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_335;
          FIX::ComplexEventEndTime ComplexEventEndTime_335(FIX::UTCTIMEONLY(19, 17, 55));
          noComplexEventTimes_1_1_0_3_0.set(ComplexEventEndTime_335);
          ComplexEventTimes_NoComplexEventTimes_335.insert(ComplexEventEndTime_335.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_335(FIX::UTCTIMEONLY(4, 29, 28));
          noComplexEventTimes_1_1_0_3_0.set(ComplexEventStartTime_335);
          ComplexEventTimes_NoComplexEventTimes_335.insert(ComplexEventStartTime_335.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_335);

          noComplexEventDates_1_1_2_0.addGroup(noComplexEventTimes_1_1_0_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_336;
          FIX::ComplexEventEndTime ComplexEventEndTime_336(FIX::UTCTIMEONLY(3, 43, 19));
          noComplexEventTimes_1_1_0_3_1.set(ComplexEventEndTime_336);
          ComplexEventTimes_NoComplexEventTimes_336.insert(ComplexEventEndTime_336.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_336(FIX::UTCTIMEONLY(9, 19, 43));
          noComplexEventTimes_1_1_0_3_1.set(ComplexEventStartTime_336);
          ComplexEventTimes_NoComplexEventTimes_336.insert(ComplexEventStartTime_336.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_336);

          noComplexEventDates_1_1_2_0.addGroup(noComplexEventTimes_1_1_0_3_1);
        }
        noComplexEvents_1_1_1.addGroup(noComplexEventDates_1_1_2_0);
      }
      noOrders_0_1.addGroup(noComplexEvents_1_1_1);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::NewOrderList::NoOrders::NoEvents noEvents_1_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_80;
      FIX::EventDate EventDate_80("LOCALMKTDATE_206803304");
      noEvents_1_1_0.set(EventDate_80);
      EvntGrp_NoEvents_80.insert(EventDate_80.getString());
      FIX::EventPx EventPx_80;
      EventPx_80.setString("7886257");
      noEvents_1_1_0.set(EventPx_80);
      EvntGrp_NoEvents_80.insert(EventPx_80.getString());
      FIX::EventText EventText_80("STRING_838790312");
      noEvents_1_1_0.set(EventText_80);
      EvntGrp_NoEvents_80.insert(EventText_80.getString());
      FIX::EventTime EventTime_80(FIX::UTCTIMESTAMP(16, 37, 33, 15, 42009));
      noEvents_1_1_0.set(EventTime_80);
      EvntGrp_NoEvents_80.insert(EventTime_80.getString());
      FIX::EventType EventType_80(99);
      noEvents_1_1_0.set(EventType_80);
      EvntGrp_NoEvents_80.insert(EventType_80.getString());
      all_values.push_back(EvntGrp_NoEvents_80);

      noOrders_0_1.addGroup(noEvents_1_1_0);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::NewOrderList::NoOrders::NoInstrumentParties noInstrumentParties_1_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_71;
      FIX::InstrumentPartyID InstrumentPartyID_71("STRING_439543954");
      noInstrumentParties_1_1_0.set(InstrumentPartyID_71);
      InstrumentParties_NoInstrumentParties_71.insert(InstrumentPartyID_71.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_71('1');
      noInstrumentParties_1_1_0.set(InstrumentPartyIDSource_71);
      InstrumentParties_NoInstrumentParties_71.insert(InstrumentPartyIDSource_71.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_71(369581342);
      noInstrumentParties_1_1_0.set(InstrumentPartyRole_71);
      InstrumentParties_NoInstrumentParties_71.insert(InstrumentPartyRole_71.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_71);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderList::NoOrders::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_141;
        FIX::InstrumentPartySubID InstrumentPartySubID_141("STRING_40942254");
        noInstrumentPartySubIDs_1_0_2_0.set(InstrumentPartySubID_141);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_141.insert(InstrumentPartySubID_141.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_141(1387955758);
        noInstrumentPartySubIDs_1_0_2_0.set(InstrumentPartySubIDType_141);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_141.insert(InstrumentPartySubIDType_141.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_141);

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_0);
      }
      noOrders_0_1.addGroup(noInstrumentParties_1_1_0);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::NewOrderList::NoOrders::NoSecurityAltID noSecurityAltID_1_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_75;
      FIX::SecurityAltID SecurityAltID_75("STRING_915691163");
      noSecurityAltID_1_1_0.set(SecurityAltID_75);
      SecAltIDGrp_NoSecurityAltID_75.insert(SecurityAltID_75.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_75("STRING_1451453367");
      noSecurityAltID_1_1_0.set(SecurityAltIDSource_75);
      SecAltIDGrp_NoSecurityAltID_75.insert(SecurityAltIDSource_75.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_75);

      noOrders_0_1.addGroup(noSecurityAltID_1_1_0);
    }
    // SecurityXML
    multiset<string> SecurityXML_76;
    FIX::SecurityXML SecurityXML_77("XMLDATA_135008045");
    noOrders_0_1.set(SecurityXML_77);
    FIX::SecurityXMLLen SecurityXMLLen_38(1900371861);
    noOrders_0_1.set(SecurityXMLLen_38);
    FIX::SecurityXMLSchema SecurityXMLSchema_38("STRING_1393267115");
    noOrders_0_1.set(SecurityXMLSchema_38);
    SecurityXML_76.insert(SecurityXMLSchema_38.getString());
    all_values.push_back(SecurityXML_76);

    // OrderQtyData
    multiset<string> OrderQtyData_13;
    FIX::CashOrderQty CashOrderQty_13;
    CashOrderQty_13.setString("18539957");
    noOrders_0_1.set(CashOrderQty_13);
    OrderQtyData_13.insert(CashOrderQty_13.getString());
    FIX::OrderPercent OrderPercent_13;
    OrderPercent_13.setString("32.800000");
    noOrders_0_1.set(OrderPercent_13);
    OrderQtyData_13.insert(OrderPercent_13.getString());
    FIX::OrderQty OrderQty_22;
    OrderQty_22.setString("6481791");
    noOrders_0_1.set(OrderQty_22);
    OrderQtyData_13.insert(OrderQty_22.getString());
    FIX::RoundingDirection RoundingDirection_13('1');
    noOrders_0_1.set(RoundingDirection_13);
    OrderQtyData_13.insert(RoundingDirection_13.getString());
    FIX::RoundingModulus RoundingModulus_13;
    RoundingModulus_13.setString("1719257");
    noOrders_0_1.set(RoundingModulus_13);
    OrderQtyData_13.insert(RoundingModulus_13.getString());
    all_values.push_back(OrderQtyData_13);

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::NewOrderList::NoOrders::NoPartyIDs noPartyIDs_1_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_74;
      FIX::PartyID PartyID_74("STRING_467680379");
      noPartyIDs_1_1_0.set(PartyID_74);
      Parties_NoPartyIDs_74.insert(PartyID_74.getString());
      FIX::PartyIDSource PartyIDSource_74('1');
      noPartyIDs_1_1_0.set(PartyIDSource_74);
      Parties_NoPartyIDs_74.insert(PartyIDSource_74.getString());
      FIX::PartyRole PartyRole_74(26);
      noPartyIDs_1_1_0.set(PartyRole_74);
      Parties_NoPartyIDs_74.insert(PartyRole_74.getString());
      all_values.push_back(Parties_NoPartyIDs_74);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::NewOrderList::NoOrders::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_145;
        FIX::PartySubID PartySubID_145("STRING_509676256");
        noPartySubIDs_1_0_2_0.set(PartySubID_145);
        PtysSubGrp_NoPartySubIDs_145.insert(PartySubID_145.getString());
        FIX::PartySubIDType PartySubIDType_145(11);
        noPartySubIDs_1_0_2_0.set(PartySubIDType_145);
        PtysSubGrp_NoPartySubIDs_145.insert(PartySubIDType_145.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_145);

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_146;
        FIX::PartySubID PartySubID_146("STRING_1593147128");
        noPartySubIDs_1_0_2_1.set(PartySubID_146);
        PtysSubGrp_NoPartySubIDs_146.insert(PartySubID_146.getString());
        FIX::PartySubIDType PartySubIDType_146(20);
        noPartySubIDs_1_0_2_1.set(PartySubIDType_146);
        PtysSubGrp_NoPartySubIDs_146.insert(PartySubIDType_146.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_146);

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_1);
      }
      noOrders_0_1.addGroup(noPartyIDs_1_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoPartyIDs noPartyIDs_1_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_75;
      FIX::PartyID PartyID_75("STRING_152355383");
      noPartyIDs_1_1_1.set(PartyID_75);
      Parties_NoPartyIDs_75.insert(PartyID_75.getString());
      FIX::PartyIDSource PartyIDSource_75('F');
      noPartyIDs_1_1_1.set(PartyIDSource_75);
      Parties_NoPartyIDs_75.insert(PartyIDSource_75.getString());
      FIX::PartyRole PartyRole_75(3);
      noPartyIDs_1_1_1.set(PartyRole_75);
      Parties_NoPartyIDs_75.insert(PartyRole_75.getString());
      all_values.push_back(Parties_NoPartyIDs_75);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::NewOrderList::NoOrders::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_147;
        FIX::PartySubID PartySubID_147("STRING_1962251920");
        noPartySubIDs_1_1_2_0.set(PartySubID_147);
        PtysSubGrp_NoPartySubIDs_147.insert(PartySubID_147.getString());
        FIX::PartySubIDType PartySubIDType_147(29);
        noPartySubIDs_1_1_2_0.set(PartySubIDType_147);
        PtysSubGrp_NoPartySubIDs_147.insert(PartySubIDType_147.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_147);

        noPartyIDs_1_1_1.addGroup(noPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_148;
        FIX::PartySubID PartySubID_148("STRING_1637925380");
        noPartySubIDs_1_1_2_1.set(PartySubID_148);
        PtysSubGrp_NoPartySubIDs_148.insert(PartySubID_148.getString());
        FIX::PartySubIDType PartySubIDType_148(32);
        noPartySubIDs_1_1_2_1.set(PartySubIDType_148);
        PtysSubGrp_NoPartySubIDs_148.insert(PartySubIDType_148.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_148);

        noPartyIDs_1_1_1.addGroup(noPartySubIDs_1_1_2_1);
      }
      noOrders_0_1.addGroup(noPartyIDs_1_1_1);
    }
    // PegInstructions
    multiset<string> PegInstructions_5;
    FIX::PegLimitType PegLimitType_5(2);
    noOrders_0_1.set(PegLimitType_5);
    PegInstructions_5.insert(PegLimitType_5.getString());
    FIX::PegMoveType PegMoveType_5(0);
    noOrders_0_1.set(PegMoveType_5);
    PegInstructions_5.insert(PegMoveType_5.getString());
    FIX::PegOffsetType PegOffsetType_5(0);
    noOrders_0_1.set(PegOffsetType_5);
    PegInstructions_5.insert(PegOffsetType_5.getString());
    FIX::PegOffsetValue PegOffsetValue_5;
    PegOffsetValue_5.setString("2765557");
    noOrders_0_1.set(PegOffsetValue_5);
    PegInstructions_5.insert(PegOffsetValue_5.getString());
    FIX::PegPriceType PegPriceType_5(7);
    noOrders_0_1.set(PegPriceType_5);
    PegInstructions_5.insert(PegPriceType_5.getString());
    FIX::PegRoundDirection PegRoundDirection_5(1);
    noOrders_0_1.set(PegRoundDirection_5);
    PegInstructions_5.insert(PegRoundDirection_5.getString());
    FIX::PegScope PegScope_5(2);
    noOrders_0_1.set(PegScope_5);
    PegInstructions_5.insert(PegScope_5.getString());
    FIX::PegSecurityDesc PegSecurityDesc_5("STRING_199963363");
    noOrders_0_1.set(PegSecurityDesc_5);
    PegInstructions_5.insert(PegSecurityDesc_5.getString());
    FIX::PegSecurityID PegSecurityID_5("STRING_122058559");
    noOrders_0_1.set(PegSecurityID_5);
    PegInstructions_5.insert(PegSecurityID_5.getString());
    FIX::PegSecurityIDSource PegSecurityIDSource_5("STRING_118075941");
    noOrders_0_1.set(PegSecurityIDSource_5);
    PegInstructions_5.insert(PegSecurityIDSource_5.getString());
    FIX::PegSymbol PegSymbol_5("STRING_2133406643");
    noOrders_0_1.set(PegSymbol_5);
    PegInstructions_5.insert(PegSymbol_5.getString());
    all_values.push_back(PegInstructions_5);

    // PreAllocGrp
    // Group PreAllocGrp.NoAllocs
    {
      FIX50SP2::NewOrderList::NoOrders::NoAllocs noAllocs_1_1_0;
      // PreAllocGrp.NoAllocs
      multiset<string> PreAllocGrp_NoAllocs_14;
      FIX::AllocAccount AllocAccount_26("STRING_154004338");
      noAllocs_1_1_0.set(AllocAccount_26);
      PreAllocGrp_NoAllocs_14.insert(AllocAccount_26.getString());
      FIX::AllocAcctIDSource AllocAcctIDSource_26(157848787);
      noAllocs_1_1_0.set(AllocAcctIDSource_26);
      PreAllocGrp_NoAllocs_14.insert(AllocAcctIDSource_26.getString());
      FIX::AllocQty AllocQty_25;
      AllocQty_25.setString("4310181");
      noAllocs_1_1_0.set(AllocQty_25);
      PreAllocGrp_NoAllocs_14.insert(AllocQty_25.getString());
      FIX::AllocSettlCurrency AllocSettlCurrency_21("USD");
      noAllocs_1_1_0.set(AllocSettlCurrency_21);
      PreAllocGrp_NoAllocs_14.insert(AllocSettlCurrency_21.getString());
      FIX::IndividualAllocID IndividualAllocID_26("STRING_880424436");
      noAllocs_1_1_0.set(IndividualAllocID_26);
      PreAllocGrp_NoAllocs_14.insert(IndividualAllocID_26.getString());
      all_values.push_back(PreAllocGrp_NoAllocs_14);

      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_0_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_70;
        FIX::NestedPartyID NestedPartyID_70("STRING_1046254139");
        noNestedPartyIDs_1_0_2_0.set(NestedPartyID_70);
        NestedParties_NoNestedPartyIDs_70.insert(NestedPartyID_70.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_70('3');
        noNestedPartyIDs_1_0_2_0.set(NestedPartyIDSource_70);
        NestedParties_NoNestedPartyIDs_70.insert(NestedPartyIDSource_70.getString());
        FIX::NestedPartyRole NestedPartyRole_70(1373818889);
        noNestedPartyIDs_1_0_2_0.set(NestedPartyRole_70);
        NestedParties_NoNestedPartyIDs_70.insert(NestedPartyRole_70.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_70);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_136;
          FIX::NestedPartySubID NestedPartySubID_136("STRING_482277787");
          noNestedPartySubIDs_1_0_0_3_0.set(NestedPartySubID_136);
          NstdPtysSubGrp_NoNestedPartySubIDs_136.insert(NestedPartySubID_136.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_136(1564471341);
          noNestedPartySubIDs_1_0_0_3_0.set(NestedPartySubIDType_136);
          NstdPtysSubGrp_NoNestedPartySubIDs_136.insert(NestedPartySubIDType_136.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_136);

          noNestedPartyIDs_1_0_2_0.addGroup(noNestedPartySubIDs_1_0_0_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_137;
          FIX::NestedPartySubID NestedPartySubID_137("STRING_1944136243");
          noNestedPartySubIDs_1_0_0_3_1.set(NestedPartySubID_137);
          NstdPtysSubGrp_NoNestedPartySubIDs_137.insert(NestedPartySubID_137.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_137(590611242);
          noNestedPartySubIDs_1_0_0_3_1.set(NestedPartySubIDType_137);
          NstdPtysSubGrp_NoNestedPartySubIDs_137.insert(NestedPartySubIDType_137.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_137);

          noNestedPartyIDs_1_0_2_0.addGroup(noNestedPartySubIDs_1_0_0_3_1);
        }
        noAllocs_1_1_0.addGroup(noNestedPartyIDs_1_0_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_0_2_1;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_71;
        FIX::NestedPartyID NestedPartyID_71("STRING_1379239613");
        noNestedPartyIDs_1_0_2_1.set(NestedPartyID_71);
        NestedParties_NoNestedPartyIDs_71.insert(NestedPartyID_71.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_71('1');
        noNestedPartyIDs_1_0_2_1.set(NestedPartyIDSource_71);
        NestedParties_NoNestedPartyIDs_71.insert(NestedPartyIDSource_71.getString());
        FIX::NestedPartyRole NestedPartyRole_71(81052974);
        noNestedPartyIDs_1_0_2_1.set(NestedPartyRole_71);
        NestedParties_NoNestedPartyIDs_71.insert(NestedPartyRole_71.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_71);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_1_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_138;
          FIX::NestedPartySubID NestedPartySubID_138("STRING_1272212283");
          noNestedPartySubIDs_1_0_1_3_0.set(NestedPartySubID_138);
          NstdPtysSubGrp_NoNestedPartySubIDs_138.insert(NestedPartySubID_138.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_138(1759920608);
          noNestedPartySubIDs_1_0_1_3_0.set(NestedPartySubIDType_138);
          NstdPtysSubGrp_NoNestedPartySubIDs_138.insert(NestedPartySubIDType_138.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_138);

          noNestedPartyIDs_1_0_2_1.addGroup(noNestedPartySubIDs_1_0_1_3_0);
        }
        noAllocs_1_1_0.addGroup(noNestedPartyIDs_1_0_2_1);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_0_2_2;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_72;
        FIX::NestedPartyID NestedPartyID_72("STRING_988410952");
        noNestedPartyIDs_1_0_2_2.set(NestedPartyID_72);
        NestedParties_NoNestedPartyIDs_72.insert(NestedPartyID_72.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_72('1');
        noNestedPartyIDs_1_0_2_2.set(NestedPartyIDSource_72);
        NestedParties_NoNestedPartyIDs_72.insert(NestedPartyIDSource_72.getString());
        FIX::NestedPartyRole NestedPartyRole_72(59512110);
        noNestedPartyIDs_1_0_2_2.set(NestedPartyRole_72);
        NestedParties_NoNestedPartyIDs_72.insert(NestedPartyRole_72.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_72);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_139;
          FIX::NestedPartySubID NestedPartySubID_139("STRING_1960331840");
          noNestedPartySubIDs_1_0_2_3_0.set(NestedPartySubID_139);
          NstdPtysSubGrp_NoNestedPartySubIDs_139.insert(NestedPartySubID_139.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_139(259475473);
          noNestedPartySubIDs_1_0_2_3_0.set(NestedPartySubIDType_139);
          NstdPtysSubGrp_NoNestedPartySubIDs_139.insert(NestedPartySubIDType_139.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_139);

          noNestedPartyIDs_1_0_2_2.addGroup(noNestedPartySubIDs_1_0_2_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_140;
          FIX::NestedPartySubID NestedPartySubID_140("STRING_1986744603");
          noNestedPartySubIDs_1_0_2_3_1.set(NestedPartySubID_140);
          NstdPtysSubGrp_NoNestedPartySubIDs_140.insert(NestedPartySubID_140.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_140(2078407781);
          noNestedPartySubIDs_1_0_2_3_1.set(NestedPartySubIDType_140);
          NstdPtysSubGrp_NoNestedPartySubIDs_140.insert(NestedPartySubIDType_140.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_140);

          noNestedPartyIDs_1_0_2_2.addGroup(noNestedPartySubIDs_1_0_2_3_1);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_141;
          FIX::NestedPartySubID NestedPartySubID_141("STRING_245398468");
          noNestedPartySubIDs_1_0_2_3_2.set(NestedPartySubID_141);
          NstdPtysSubGrp_NoNestedPartySubIDs_141.insert(NestedPartySubID_141.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_141(609498635);
          noNestedPartySubIDs_1_0_2_3_2.set(NestedPartySubIDType_141);
          NstdPtysSubGrp_NoNestedPartySubIDs_141.insert(NestedPartySubIDType_141.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_141);

          noNestedPartyIDs_1_0_2_2.addGroup(noNestedPartySubIDs_1_0_2_3_2);
        }
        noAllocs_1_1_0.addGroup(noNestedPartyIDs_1_0_2_2);
      }
      noOrders_0_1.addGroup(noAllocs_1_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoAllocs noAllocs_1_1_1;
      // PreAllocGrp.NoAllocs
      multiset<string> PreAllocGrp_NoAllocs_15;
      FIX::AllocAccount AllocAccount_27("STRING_84928471");
      noAllocs_1_1_1.set(AllocAccount_27);
      PreAllocGrp_NoAllocs_15.insert(AllocAccount_27.getString());
      FIX::AllocAcctIDSource AllocAcctIDSource_27(403247255);
      noAllocs_1_1_1.set(AllocAcctIDSource_27);
      PreAllocGrp_NoAllocs_15.insert(AllocAcctIDSource_27.getString());
      FIX::AllocQty AllocQty_26;
      AllocQty_26.setString("10405168");
      noAllocs_1_1_1.set(AllocQty_26);
      PreAllocGrp_NoAllocs_15.insert(AllocQty_26.getString());
      FIX::AllocSettlCurrency AllocSettlCurrency_22("USD");
      noAllocs_1_1_1.set(AllocSettlCurrency_22);
      PreAllocGrp_NoAllocs_15.insert(AllocSettlCurrency_22.getString());
      FIX::IndividualAllocID IndividualAllocID_27("STRING_1920941267");
      noAllocs_1_1_1.set(IndividualAllocID_27);
      PreAllocGrp_NoAllocs_15.insert(IndividualAllocID_27.getString());
      all_values.push_back(PreAllocGrp_NoAllocs_15);

      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_1_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_73;
        FIX::NestedPartyID NestedPartyID_73("STRING_1986079277");
        noNestedPartyIDs_1_1_2_0.set(NestedPartyID_73);
        NestedParties_NoNestedPartyIDs_73.insert(NestedPartyID_73.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_73('1');
        noNestedPartyIDs_1_1_2_0.set(NestedPartyIDSource_73);
        NestedParties_NoNestedPartyIDs_73.insert(NestedPartyIDSource_73.getString());
        FIX::NestedPartyRole NestedPartyRole_73(1861103839);
        noNestedPartyIDs_1_1_2_0.set(NestedPartyRole_73);
        NestedParties_NoNestedPartyIDs_73.insert(NestedPartyRole_73.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_73);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_142;
          FIX::NestedPartySubID NestedPartySubID_142("STRING_585657810");
          noNestedPartySubIDs_1_1_0_3_0.set(NestedPartySubID_142);
          NstdPtysSubGrp_NoNestedPartySubIDs_142.insert(NestedPartySubID_142.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_142(1278091532);
          noNestedPartySubIDs_1_1_0_3_0.set(NestedPartySubIDType_142);
          NstdPtysSubGrp_NoNestedPartySubIDs_142.insert(NestedPartySubIDType_142.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_142);

          noNestedPartyIDs_1_1_2_0.addGroup(noNestedPartySubIDs_1_1_0_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_143;
          FIX::NestedPartySubID NestedPartySubID_143("STRING_103248264");
          noNestedPartySubIDs_1_1_0_3_1.set(NestedPartySubID_143);
          NstdPtysSubGrp_NoNestedPartySubIDs_143.insert(NestedPartySubID_143.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_143(1176269052);
          noNestedPartySubIDs_1_1_0_3_1.set(NestedPartySubIDType_143);
          NstdPtysSubGrp_NoNestedPartySubIDs_143.insert(NestedPartySubIDType_143.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_143);

          noNestedPartyIDs_1_1_2_0.addGroup(noNestedPartySubIDs_1_1_0_3_1);
        }
        noAllocs_1_1_1.addGroup(noNestedPartyIDs_1_1_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_1_2_1;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_74;
        FIX::NestedPartyID NestedPartyID_74("STRING_509847497");
        noNestedPartyIDs_1_1_2_1.set(NestedPartyID_74);
        NestedParties_NoNestedPartyIDs_74.insert(NestedPartyID_74.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_74('1');
        noNestedPartyIDs_1_1_2_1.set(NestedPartyIDSource_74);
        NestedParties_NoNestedPartyIDs_74.insert(NestedPartyIDSource_74.getString());
        FIX::NestedPartyRole NestedPartyRole_74(1257322026);
        noNestedPartyIDs_1_1_2_1.set(NestedPartyRole_74);
        NestedParties_NoNestedPartyIDs_74.insert(NestedPartyRole_74.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_74);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_1_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_144;
          FIX::NestedPartySubID NestedPartySubID_144("STRING_940309651");
          noNestedPartySubIDs_1_1_1_3_0.set(NestedPartySubID_144);
          NstdPtysSubGrp_NoNestedPartySubIDs_144.insert(NestedPartySubID_144.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_144(869758987);
          noNestedPartySubIDs_1_1_1_3_0.set(NestedPartySubIDType_144);
          NstdPtysSubGrp_NoNestedPartySubIDs_144.insert(NestedPartySubIDType_144.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_144);

          noNestedPartyIDs_1_1_2_1.addGroup(noNestedPartySubIDs_1_1_1_3_0);
        }
        noAllocs_1_1_1.addGroup(noNestedPartyIDs_1_1_2_1);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_1_2_2;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_75;
        FIX::NestedPartyID NestedPartyID_75("STRING_914364029");
        noNestedPartyIDs_1_1_2_2.set(NestedPartyID_75);
        NestedParties_NoNestedPartyIDs_75.insert(NestedPartyID_75.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_75('3');
        noNestedPartyIDs_1_1_2_2.set(NestedPartyIDSource_75);
        NestedParties_NoNestedPartyIDs_75.insert(NestedPartyIDSource_75.getString());
        FIX::NestedPartyRole NestedPartyRole_75(929271097);
        noNestedPartyIDs_1_1_2_2.set(NestedPartyRole_75);
        NestedParties_NoNestedPartyIDs_75.insert(NestedPartyRole_75.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_75);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_145;
          FIX::NestedPartySubID NestedPartySubID_145("STRING_154442234");
          noNestedPartySubIDs_1_1_2_3_0.set(NestedPartySubID_145);
          NstdPtysSubGrp_NoNestedPartySubIDs_145.insert(NestedPartySubID_145.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_145(1188746570);
          noNestedPartySubIDs_1_1_2_3_0.set(NestedPartySubIDType_145);
          NstdPtysSubGrp_NoNestedPartySubIDs_145.insert(NestedPartySubIDType_145.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_145);

          noNestedPartyIDs_1_1_2_2.addGroup(noNestedPartySubIDs_1_1_2_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_146;
          FIX::NestedPartySubID NestedPartySubID_146("STRING_470827380");
          noNestedPartySubIDs_1_1_2_3_1.set(NestedPartySubID_146);
          NstdPtysSubGrp_NoNestedPartySubIDs_146.insert(NestedPartySubID_146.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_146(85366367);
          noNestedPartySubIDs_1_1_2_3_1.set(NestedPartySubIDType_146);
          NstdPtysSubGrp_NoNestedPartySubIDs_146.insert(NestedPartySubIDType_146.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_146);

          noNestedPartyIDs_1_1_2_2.addGroup(noNestedPartySubIDs_1_1_2_3_1);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_147;
          FIX::NestedPartySubID NestedPartySubID_147("STRING_1434145038");
          noNestedPartySubIDs_1_1_2_3_2.set(NestedPartySubID_147);
          NstdPtysSubGrp_NoNestedPartySubIDs_147.insert(NestedPartySubID_147.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_147(1080326015);
          noNestedPartySubIDs_1_1_2_3_2.set(NestedPartySubIDType_147);
          NstdPtysSubGrp_NoNestedPartySubIDs_147.insert(NestedPartySubIDType_147.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_147);

          noNestedPartyIDs_1_1_2_2.addGroup(noNestedPartySubIDs_1_1_2_3_2);
        }
        noAllocs_1_1_1.addGroup(noNestedPartyIDs_1_1_2_2);
      }
      noOrders_0_1.addGroup(noAllocs_1_1_1);
    }
    // SpreadOrBenchmarkCurveData
    multiset<string> SpreadOrBenchmarkCurveData_17;
    FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_17("USD");
    noOrders_0_1.set(BenchmarkCurveCurrency_17);
    SpreadOrBenchmarkCurveData_17.insert(BenchmarkCurveCurrency_17.getString());
    FIX::BenchmarkCurveName BenchmarkCurveName_17("STRING_SWAP");
    noOrders_0_1.set(BenchmarkCurveName_17);
    SpreadOrBenchmarkCurveData_17.insert(BenchmarkCurveName_17.getString());
    FIX::BenchmarkCurvePoint BenchmarkCurvePoint_17("STRING_876908028");
    noOrders_0_1.set(BenchmarkCurvePoint_17);
    SpreadOrBenchmarkCurveData_17.insert(BenchmarkCurvePoint_17.getString());
    FIX::BenchmarkPrice BenchmarkPrice_17;
    BenchmarkPrice_17.setString("6297337");
    noOrders_0_1.set(BenchmarkPrice_17);
    SpreadOrBenchmarkCurveData_17.insert(BenchmarkPrice_17.getString());
    FIX::BenchmarkPriceType BenchmarkPriceType_17(1894300465);
    noOrders_0_1.set(BenchmarkPriceType_17);
    SpreadOrBenchmarkCurveData_17.insert(BenchmarkPriceType_17.getString());
    FIX::BenchmarkSecurityID BenchmarkSecurityID_17("STRING_1364192978");
    noOrders_0_1.set(BenchmarkSecurityID_17);
    SpreadOrBenchmarkCurveData_17.insert(BenchmarkSecurityID_17.getString());
    FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_17("STRING_468329413");
    noOrders_0_1.set(BenchmarkSecurityIDSource_17);
    SpreadOrBenchmarkCurveData_17.insert(BenchmarkSecurityIDSource_17.getString());
    FIX::Spread Spread_17;
    Spread_17.setString("19976804");
    noOrders_0_1.set(Spread_17);
    SpreadOrBenchmarkCurveData_17.insert(Spread_17.getString());
    all_values.push_back(SpreadOrBenchmarkCurveData_17);

    // Stipulations
    // Group Stipulations.NoStipulations
    {
      FIX50SP2::NewOrderList::NoOrders::NoStipulations noStipulations_1_1_0;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_28;
      FIX::StipulationType StipulationType_28("STRING_TEXT");
      noStipulations_1_1_0.set(StipulationType_28);
      Stipulations_NoStipulations_28.insert(StipulationType_28.getString());
      FIX::StipulationValue StipulationValue_28("STRING_435854650");
      noStipulations_1_1_0.set(StipulationValue_28);
      Stipulations_NoStipulations_28.insert(StipulationValue_28.getString());
      all_values.push_back(Stipulations_NoStipulations_28);

      noOrders_0_1.addGroup(noStipulations_1_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoStipulations noStipulations_1_1_1;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_29;
      FIX::StipulationType StipulationType_29("STRING_LOT");
      noStipulations_1_1_1.set(StipulationType_29);
      Stipulations_NoStipulations_29.insert(StipulationType_29.getString());
      FIX::StipulationValue StipulationValue_29("STRING_878173347");
      noStipulations_1_1_1.set(StipulationValue_29);
      Stipulations_NoStipulations_29.insert(StipulationValue_29.getString());
      all_values.push_back(Stipulations_NoStipulations_29);

      noOrders_0_1.addGroup(noStipulations_1_1_1);
    }
    // StrategyParametersGrp
    // Group StrategyParametersGrp.NoStrategyParameters
    {
      FIX50SP2::NewOrderList::NoOrders::NoStrategyParameters noStrategyParameters_1_1_0;
      // StrategyParametersGrp.NoStrategyParameters
      multiset<string> StrategyParametersGrp_NoStrategyParameters_12;
      FIX::StrategyParameterName StrategyParameterName_12("STRING_718268551");
      noStrategyParameters_1_1_0.set(StrategyParameterName_12);
      StrategyParametersGrp_NoStrategyParameters_12.insert(StrategyParameterName_12.getString());
      FIX::StrategyParameterType StrategyParameterType_12(7);
      noStrategyParameters_1_1_0.set(StrategyParameterType_12);
      StrategyParametersGrp_NoStrategyParameters_12.insert(StrategyParameterType_12.getString());
      FIX::StrategyParameterValue StrategyParameterValue_12("STRING_721962081");
      noStrategyParameters_1_1_0.set(StrategyParameterValue_12);
      StrategyParametersGrp_NoStrategyParameters_12.insert(StrategyParameterValue_12.getString());
      all_values.push_back(StrategyParametersGrp_NoStrategyParameters_12);

      noOrders_0_1.addGroup(noStrategyParameters_1_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoStrategyParameters noStrategyParameters_1_1_1;
      // StrategyParametersGrp.NoStrategyParameters
      multiset<string> StrategyParametersGrp_NoStrategyParameters_13;
      FIX::StrategyParameterName StrategyParameterName_13("STRING_644221628");
      noStrategyParameters_1_1_1.set(StrategyParameterName_13);
      StrategyParametersGrp_NoStrategyParameters_13.insert(StrategyParameterName_13.getString());
      FIX::StrategyParameterType StrategyParameterType_13(29);
      noStrategyParameters_1_1_1.set(StrategyParameterType_13);
      StrategyParametersGrp_NoStrategyParameters_13.insert(StrategyParameterType_13.getString());
      FIX::StrategyParameterValue StrategyParameterValue_13("STRING_1591721068");
      noStrategyParameters_1_1_1.set(StrategyParameterValue_13);
      StrategyParametersGrp_NoStrategyParameters_13.insert(StrategyParameterValue_13.getString());
      all_values.push_back(StrategyParametersGrp_NoStrategyParameters_13);

      noOrders_0_1.addGroup(noStrategyParameters_1_1_1);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoStrategyParameters noStrategyParameters_1_1_2;
      // StrategyParametersGrp.NoStrategyParameters
      multiset<string> StrategyParametersGrp_NoStrategyParameters_14;
      FIX::StrategyParameterName StrategyParameterName_14("STRING_1558585657");
      noStrategyParameters_1_1_2.set(StrategyParameterName_14);
      StrategyParametersGrp_NoStrategyParameters_14.insert(StrategyParameterName_14.getString());
      FIX::StrategyParameterType StrategyParameterType_14(26);
      noStrategyParameters_1_1_2.set(StrategyParameterType_14);
      StrategyParametersGrp_NoStrategyParameters_14.insert(StrategyParameterType_14.getString());
      FIX::StrategyParameterValue StrategyParameterValue_14("STRING_373508517");
      noStrategyParameters_1_1_2.set(StrategyParameterValue_14);
      StrategyParametersGrp_NoStrategyParameters_14.insert(StrategyParameterValue_14.getString());
      all_values.push_back(StrategyParametersGrp_NoStrategyParameters_14);

      noOrders_0_1.addGroup(noStrategyParameters_1_1_2);
    }
    // TrdgSesGrp
    // Group TrdgSesGrp.NoTradingSessions
    {
      FIX50SP2::NewOrderList::NoOrders::NoTradingSessions noTradingSessions_1_1_0;
      // TrdgSesGrp.NoTradingSessions
      multiset<string> TrdgSesGrp_NoTradingSessions_9;
      FIX::TradingSessionID TradingSessionID_40("STRING_3");
      noTradingSessions_1_1_0.set(TradingSessionID_40);
      TrdgSesGrp_NoTradingSessions_9.insert(TradingSessionID_40.getString());
      FIX::TradingSessionSubID TradingSessionSubID_40("STRING_2");
      noTradingSessions_1_1_0.set(TradingSessionSubID_40);
      TrdgSesGrp_NoTradingSessions_9.insert(TradingSessionSubID_40.getString());
      all_values.push_back(TrdgSesGrp_NoTradingSessions_9);

      noOrders_0_1.addGroup(noTradingSessions_1_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoTradingSessions noTradingSessions_1_1_1;
      // TrdgSesGrp.NoTradingSessions
      multiset<string> TrdgSesGrp_NoTradingSessions_10;
      FIX::TradingSessionID TradingSessionID_41("STRING_5");
      noTradingSessions_1_1_1.set(TradingSessionID_41);
      TrdgSesGrp_NoTradingSessions_10.insert(TradingSessionID_41.getString());
      FIX::TradingSessionSubID TradingSessionSubID_41("STRING_4");
      noTradingSessions_1_1_1.set(TradingSessionSubID_41);
      TrdgSesGrp_NoTradingSessions_10.insert(TradingSessionSubID_41.getString());
      all_values.push_back(TrdgSesGrp_NoTradingSessions_10);

      noOrders_0_1.addGroup(noTradingSessions_1_1_1);
    }
    // TriggeringInstruction
    multiset<string> TriggeringInstruction_5;
    FIX::TriggerAction TriggerAction_5('2');
    noOrders_0_1.set(TriggerAction_5);
    TriggeringInstruction_5.insert(TriggerAction_5.getString());
    FIX::TriggerNewPrice TriggerNewPrice_5;
    TriggerNewPrice_5.setString("15938218");
    noOrders_0_1.set(TriggerNewPrice_5);
    TriggeringInstruction_5.insert(TriggerNewPrice_5.getString());
    FIX::TriggerNewQty TriggerNewQty_5;
    TriggerNewQty_5.setString("907942");
    noOrders_0_1.set(TriggerNewQty_5);
    TriggeringInstruction_5.insert(TriggerNewQty_5.getString());
    FIX::TriggerOrderType TriggerOrderType_5('1');
    noOrders_0_1.set(TriggerOrderType_5);
    TriggeringInstruction_5.insert(TriggerOrderType_5.getString());
    FIX::TriggerPrice TriggerPrice_5;
    TriggerPrice_5.setString("15671810");
    noOrders_0_1.set(TriggerPrice_5);
    TriggeringInstruction_5.insert(TriggerPrice_5.getString());
    FIX::TriggerPriceDirection TriggerPriceDirection_5('U');
    noOrders_0_1.set(TriggerPriceDirection_5);
    TriggeringInstruction_5.insert(TriggerPriceDirection_5.getString());
    FIX::TriggerPriceType TriggerPriceType_5('1');
    noOrders_0_1.set(TriggerPriceType_5);
    TriggeringInstruction_5.insert(TriggerPriceType_5.getString());
    FIX::TriggerPriceTypeScope TriggerPriceTypeScope_5('0');
    noOrders_0_1.set(TriggerPriceTypeScope_5);
    TriggeringInstruction_5.insert(TriggerPriceTypeScope_5.getString());
    FIX::TriggerSecurityDesc TriggerSecurityDesc_5("STRING_184411560");
    noOrders_0_1.set(TriggerSecurityDesc_5);
    TriggeringInstruction_5.insert(TriggerSecurityDesc_5.getString());
    FIX::TriggerSecurityID TriggerSecurityID_5("STRING_1636888321");
    noOrders_0_1.set(TriggerSecurityID_5);
    TriggeringInstruction_5.insert(TriggerSecurityID_5.getString());
    FIX::TriggerSecurityIDSource TriggerSecurityIDSource_5("STRING_1164194684");
    noOrders_0_1.set(TriggerSecurityIDSource_5);
    TriggeringInstruction_5.insert(TriggerSecurityIDSource_5.getString());
    FIX::TriggerSymbol TriggerSymbol_5("STRING_1262224730");
    noOrders_0_1.set(TriggerSymbol_5);
    TriggeringInstruction_5.insert(TriggerSymbol_5.getString());
    FIX::TriggerTradingSessionID TriggerTradingSessionID_5("STRING_264329755");
    noOrders_0_1.set(TriggerTradingSessionID_5);
    TriggeringInstruction_5.insert(TriggerTradingSessionID_5.getString());
    FIX::TriggerTradingSessionSubID TriggerTradingSessionSubID_5("STRING_1600049335");
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
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_62("DATA_1064689390");
      noUnderlyings_1_1_0.set(EncodedUnderlyingIssuer_62);
      UnderlyingInstrument_62.insert(EncodedUnderlyingIssuer_62.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_62(41430687);
      noUnderlyings_1_1_0.set(EncodedUnderlyingIssuerLen_62);
      UnderlyingInstrument_62.insert(EncodedUnderlyingIssuerLen_62.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_62("DATA_1688773818");
      noUnderlyings_1_1_0.set(EncodedUnderlyingSecurityDesc_62);
      UnderlyingInstrument_62.insert(EncodedUnderlyingSecurityDesc_62.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_62(1786651471);
      noUnderlyings_1_1_0.set(EncodedUnderlyingSecurityDescLen_62);
      UnderlyingInstrument_62.insert(EncodedUnderlyingSecurityDescLen_62.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_62;
      UnderlyingAdjustedQuantity_62.setString("6856523");
      noUnderlyings_1_1_0.set(UnderlyingAdjustedQuantity_62);
      UnderlyingInstrument_62.insert(UnderlyingAdjustedQuantity_62.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_62;
      UnderlyingAllocationPercent_62.setString("5.370000");
      noUnderlyings_1_1_0.set(UnderlyingAllocationPercent_62);
      UnderlyingInstrument_62.insert(UnderlyingAllocationPercent_62.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_62;
      UnderlyingAttachmentPoint_62.setString("88.920000");
      noUnderlyings_1_1_0.set(UnderlyingAttachmentPoint_62);
      UnderlyingInstrument_62.insert(UnderlyingAttachmentPoint_62.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_62("STRING_96754325");
      noUnderlyings_1_1_0.set(UnderlyingCFICode_62);
      UnderlyingInstrument_62.insert(UnderlyingCFICode_62.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_62("STRING_708561298");
      noUnderlyings_1_1_0.set(UnderlyingCPProgram_62);
      UnderlyingInstrument_62.insert(UnderlyingCPProgram_62.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_62("STRING_1604397409");
      noUnderlyings_1_1_0.set(UnderlyingCPRegType_62);
      UnderlyingInstrument_62.insert(UnderlyingCPRegType_62.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_62;
      UnderlyingCapValue_62.setString("1394227");
      noUnderlyings_1_1_0.set(UnderlyingCapValue_62);
      UnderlyingInstrument_62.insert(UnderlyingCapValue_62.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_62;
      UnderlyingCashAmount_62.setString("5436942");
      noUnderlyings_1_1_0.set(UnderlyingCashAmount_62);
      UnderlyingInstrument_62.insert(UnderlyingCashAmount_62.getString());
      FIX::UnderlyingCashType UnderlyingCashType_62("STRING_DIFF");
      noUnderlyings_1_1_0.set(UnderlyingCashType_62);
      UnderlyingInstrument_62.insert(UnderlyingCashType_62.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_62;
      UnderlyingContractMultiplier_62.setString("6529185");
      noUnderlyings_1_1_0.set(UnderlyingContractMultiplier_62);
      UnderlyingInstrument_62.insert(UnderlyingContractMultiplier_62.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_62(464193658);
      noUnderlyings_1_1_0.set(UnderlyingContractMultiplierUnit_62);
      UnderlyingInstrument_62.insert(UnderlyingContractMultiplierUnit_62.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_62("COUNTRY_1868085327");
      noUnderlyings_1_1_0.set(UnderlyingCountryOfIssue_62);
      UnderlyingInstrument_62.insert(UnderlyingCountryOfIssue_62.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_62("LOCALMKTDATE_99256756");
      noUnderlyings_1_1_0.set(UnderlyingCouponPaymentDate_62);
      UnderlyingInstrument_62.insert(UnderlyingCouponPaymentDate_62.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_62;
      UnderlyingCouponRate_62.setString("78.600000");
      noUnderlyings_1_1_0.set(UnderlyingCouponRate_62);
      UnderlyingInstrument_62.insert(UnderlyingCouponRate_62.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_62("STRING_259426803");
      noUnderlyings_1_1_0.set(UnderlyingCreditRating_62);
      UnderlyingInstrument_62.insert(UnderlyingCreditRating_62.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_62("CAN");
      noUnderlyings_1_1_0.set(UnderlyingCurrency_62);
      UnderlyingInstrument_62.insert(UnderlyingCurrency_62.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_62;
      UnderlyingCurrentValue_62.setString("14279857");
      noUnderlyings_1_1_0.set(UnderlyingCurrentValue_62);
      UnderlyingInstrument_62.insert(UnderlyingCurrentValue_62.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_62;
      UnderlyingDetachmentPoint_62.setString("19.800000");
      noUnderlyings_1_1_0.set(UnderlyingDetachmentPoint_62);
      UnderlyingInstrument_62.insert(UnderlyingDetachmentPoint_62.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_62;
      UnderlyingDirtyPrice_62.setString("17071016");
      noUnderlyings_1_1_0.set(UnderlyingDirtyPrice_62);
      UnderlyingInstrument_62.insert(UnderlyingDirtyPrice_62.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_62;
      UnderlyingEndPrice_62.setString("9173903");
      noUnderlyings_1_1_0.set(UnderlyingEndPrice_62);
      UnderlyingInstrument_62.insert(UnderlyingEndPrice_62.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_62;
      UnderlyingEndValue_62.setString("19971466");
      noUnderlyings_1_1_0.set(UnderlyingEndValue_62);
      UnderlyingInstrument_62.insert(UnderlyingEndValue_62.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_62(821842733);
      noUnderlyings_1_1_0.set(UnderlyingExerciseStyle_62);
      UnderlyingInstrument_62.insert(UnderlyingExerciseStyle_62.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_62;
      UnderlyingFXRate_62.setString("11817201");
      noUnderlyings_1_1_0.set(UnderlyingFXRate_62);
      UnderlyingInstrument_62.insert(UnderlyingFXRate_62.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_62('M');
      noUnderlyings_1_1_0.set(UnderlyingFXRateCalc_62);
      UnderlyingInstrument_62.insert(UnderlyingFXRateCalc_62.getString());
      FIX::UnderlyingFactor UnderlyingFactor_62;
      UnderlyingFactor_62.setString("1450048");
      noUnderlyings_1_1_0.set(UnderlyingFactor_62);
      UnderlyingInstrument_62.insert(UnderlyingFactor_62.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_62(176739594);
      noUnderlyings_1_1_0.set(UnderlyingFlowScheduleType_62);
      UnderlyingInstrument_62.insert(UnderlyingFlowScheduleType_62.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_62("STRING_366918093");
      noUnderlyings_1_1_0.set(UnderlyingInstrRegistry_62);
      UnderlyingInstrument_62.insert(UnderlyingInstrRegistry_62.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_62("LOCALMKTDATE_186435557");
      noUnderlyings_1_1_0.set(UnderlyingIssueDate_62);
      UnderlyingInstrument_62.insert(UnderlyingIssueDate_62.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_62("STRING_1865513412");
      noUnderlyings_1_1_0.set(UnderlyingIssuer_62);
      UnderlyingInstrument_62.insert(UnderlyingIssuer_62.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_62("STRING_6085917");
      noUnderlyings_1_1_0.set(UnderlyingLocaleOfIssue_62);
      UnderlyingInstrument_62.insert(UnderlyingLocaleOfIssue_62.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_62("LOCALMKTDATE_872087873");
      noUnderlyings_1_1_0.set(UnderlyingMaturityDate_62);
      UnderlyingInstrument_62.insert(UnderlyingMaturityDate_62.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_62("MONTHYEAR_745900301");
      noUnderlyings_1_1_0.set(UnderlyingMaturityMonthYear_62);
      UnderlyingInstrument_62.insert(UnderlyingMaturityMonthYear_62.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_62("TZTIMEONLY_1236974809");
      noUnderlyings_1_1_0.set(UnderlyingMaturityTime_62);
      UnderlyingInstrument_62.insert(UnderlyingMaturityTime_62.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_62;
      UnderlyingNotionalPercentageOutstanding_62.setString("21.980000");
      noUnderlyings_1_1_0.set(UnderlyingNotionalPercentageOutstanding_62);
      UnderlyingInstrument_62.insert(UnderlyingNotionalPercentageOutstanding_62.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_62('1');
      noUnderlyings_1_1_0.set(UnderlyingOptAttribute_62);
      UnderlyingInstrument_62.insert(UnderlyingOptAttribute_62.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_62;
      UnderlyingOriginalNotionalPercentageOutstanding_62.setString("85.700000");
      noUnderlyings_1_1_0.set(UnderlyingOriginalNotionalPercentageOutstanding_62);
      UnderlyingInstrument_62.insert(UnderlyingOriginalNotionalPercentageOutstanding_62.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_62("STRING_1108264958");
      noUnderlyings_1_1_0.set(UnderlyingPriceUnitOfMeasure_62);
      UnderlyingInstrument_62.insert(UnderlyingPriceUnitOfMeasure_62.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_62;
      UnderlyingPriceUnitOfMeasureQty_62.setString("19981558");
      noUnderlyings_1_1_0.set(UnderlyingPriceUnitOfMeasureQty_62);
      UnderlyingInstrument_62.insert(UnderlyingPriceUnitOfMeasureQty_62.getString());
      FIX::UnderlyingProduct UnderlyingProduct_62(1713057419);
      noUnderlyings_1_1_0.set(UnderlyingProduct_62);
      UnderlyingInstrument_62.insert(UnderlyingProduct_62.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_62(1761183533);
      noUnderlyings_1_1_0.set(UnderlyingPutOrCall_62);
      UnderlyingInstrument_62.insert(UnderlyingPutOrCall_62.getString());
      FIX::UnderlyingPx UnderlyingPx_62;
      UnderlyingPx_62.setString("3148659");
      noUnderlyings_1_1_0.set(UnderlyingPx_62);
      UnderlyingInstrument_62.insert(UnderlyingPx_62.getString());
      FIX::UnderlyingQty UnderlyingQty_62;
      UnderlyingQty_62.setString("14336590");
      noUnderlyings_1_1_0.set(UnderlyingQty_62);
      UnderlyingInstrument_62.insert(UnderlyingQty_62.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_62("LOCALMKTDATE_1860440289");
      noUnderlyings_1_1_0.set(UnderlyingRedemptionDate_62);
      UnderlyingInstrument_62.insert(UnderlyingRedemptionDate_62.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_62("STRING_869853764");
      noUnderlyings_1_1_0.set(UnderlyingRepoCollateralSecurityType_62);
      UnderlyingInstrument_62.insert(UnderlyingRepoCollateralSecurityType_62.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_62;
      UnderlyingRepurchaseRate_62.setString("59.010000");
      noUnderlyings_1_1_0.set(UnderlyingRepurchaseRate_62);
      UnderlyingInstrument_62.insert(UnderlyingRepurchaseRate_62.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_62(1379394424);
      noUnderlyings_1_1_0.set(UnderlyingRepurchaseTerm_62);
      UnderlyingInstrument_62.insert(UnderlyingRepurchaseTerm_62.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_62("STRING_245060207");
      noUnderlyings_1_1_0.set(UnderlyingRestructuringType_62);
      UnderlyingInstrument_62.insert(UnderlyingRestructuringType_62.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_62("STRING_973587964");
      noUnderlyings_1_1_0.set(UnderlyingSecurityDesc_62);
      UnderlyingInstrument_62.insert(UnderlyingSecurityDesc_62.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_62("EXCHANGE_64862756");
      noUnderlyings_1_1_0.set(UnderlyingSecurityExchange_62);
      UnderlyingInstrument_62.insert(UnderlyingSecurityExchange_62.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_62("STRING_1952161859");
      noUnderlyings_1_1_0.set(UnderlyingSecurityID_62);
      UnderlyingInstrument_62.insert(UnderlyingSecurityID_62.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_62("STRING_1890978348");
      noUnderlyings_1_1_0.set(UnderlyingSecurityIDSource_62);
      UnderlyingInstrument_62.insert(UnderlyingSecurityIDSource_62.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_62("STRING_2062009421");
      noUnderlyings_1_1_0.set(UnderlyingSecuritySubType_62);
      UnderlyingInstrument_62.insert(UnderlyingSecuritySubType_62.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_62("STRING_626520944");
      noUnderlyings_1_1_0.set(UnderlyingSecurityType_62);
      UnderlyingInstrument_62.insert(UnderlyingSecurityType_62.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_62("STRING_925214840");
      noUnderlyings_1_1_0.set(UnderlyingSeniority_62);
      UnderlyingInstrument_62.insert(UnderlyingSeniority_62.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_62("STRING_1364238124");
      noUnderlyings_1_1_0.set(UnderlyingSettlMethod_62);
      UnderlyingInstrument_62.insert(UnderlyingSettlMethod_62.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_62(4);
      noUnderlyings_1_1_0.set(UnderlyingSettlementType_62);
      UnderlyingInstrument_62.insert(UnderlyingSettlementType_62.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_62;
      UnderlyingStartValue_62.setString("11019544");
      noUnderlyings_1_1_0.set(UnderlyingStartValue_62);
      UnderlyingInstrument_62.insert(UnderlyingStartValue_62.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_62("STRING_1731156218");
      noUnderlyings_1_1_0.set(UnderlyingStateOrProvinceOfIssue_62);
      UnderlyingInstrument_62.insert(UnderlyingStateOrProvinceOfIssue_62.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_62("USD");
      noUnderlyings_1_1_0.set(UnderlyingStrikeCurrency_62);
      UnderlyingInstrument_62.insert(UnderlyingStrikeCurrency_62.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_62;
      UnderlyingStrikePrice_62.setString("17372421");
      noUnderlyings_1_1_0.set(UnderlyingStrikePrice_62);
      UnderlyingInstrument_62.insert(UnderlyingStrikePrice_62.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_62("STRING_1830049244");
      noUnderlyings_1_1_0.set(UnderlyingSymbol_62);
      UnderlyingInstrument_62.insert(UnderlyingSymbol_62.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_62("STRING_1565884499");
      noUnderlyings_1_1_0.set(UnderlyingSymbolSfx_62);
      UnderlyingInstrument_62.insert(UnderlyingSymbolSfx_62.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_62("STRING_826733296");
      noUnderlyings_1_1_0.set(UnderlyingTimeUnit_62);
      UnderlyingInstrument_62.insert(UnderlyingTimeUnit_62.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_62("STRING_651407794");
      noUnderlyings_1_1_0.set(UnderlyingUnitOfMeasure_62);
      UnderlyingInstrument_62.insert(UnderlyingUnitOfMeasure_62.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_62;
      UnderlyingUnitOfMeasureQty_62.setString("8728624");
      noUnderlyings_1_1_0.set(UnderlyingUnitOfMeasureQty_62);
      UnderlyingInstrument_62.insert(UnderlyingUnitOfMeasureQty_62.getString());
      all_values.push_back(UnderlyingInstrument_62);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_120;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_120("STRING_1759672753");
        noUnderlyingSecurityAltID_1_0_2_0.set(UnderlyingSecurityAltID_120);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_120.insert(UnderlyingSecurityAltID_120.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_120("STRING_723534696");
        noUnderlyingSecurityAltID_1_0_2_0.set(UnderlyingSecurityAltIDSource_120);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_120.insert(UnderlyingSecurityAltIDSource_120.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_120);

        noUnderlyings_1_1_0.addGroup(noUnderlyingSecurityAltID_1_0_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_0_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_121;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_121("STRING_1086195638");
        noUnderlyingSecurityAltID_1_0_2_1.set(UnderlyingSecurityAltID_121);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_121.insert(UnderlyingSecurityAltID_121.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_121("STRING_1373372638");
        noUnderlyingSecurityAltID_1_0_2_1.set(UnderlyingSecurityAltIDSource_121);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_121.insert(UnderlyingSecurityAltIDSource_121.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_121);

        noUnderlyings_1_1_0.addGroup(noUnderlyingSecurityAltID_1_0_2_1);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_121;
        FIX::UnderlyingStipType UnderlyingStipType_121("STRING_372371088");
        noUnderlyingStips_1_0_2_0.set(UnderlyingStipType_121);
        UnderlyingStipulations_NoUnderlyingStips_121.insert(UnderlyingStipType_121.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_121("STRING_1086329279");
        noUnderlyingStips_1_0_2_0.set(UnderlyingStipValue_121);
        UnderlyingStipulations_NoUnderlyingStips_121.insert(UnderlyingStipValue_121.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_121);

        noUnderlyings_1_1_0.addGroup(noUnderlyingStips_1_0_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_0_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_122;
        FIX::UnderlyingStipType UnderlyingStipType_122("STRING_1908254365");
        noUnderlyingStips_1_0_2_1.set(UnderlyingStipType_122);
        UnderlyingStipulations_NoUnderlyingStips_122.insert(UnderlyingStipType_122.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_122("STRING_2065456990");
        noUnderlyingStips_1_0_2_1.set(UnderlyingStipValue_122);
        UnderlyingStipulations_NoUnderlyingStips_122.insert(UnderlyingStipValue_122.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_122);

        noUnderlyings_1_1_0.addGroup(noUnderlyingStips_1_0_2_1);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_127;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_127("STRING_5830924");
        noUndlyInstrumentParties_1_0_2_0.set(UnderlyingInstrumentPartyID_127);
        UndlyInstrumentParties_NoUndlyInstrumentParties_127.insert(UnderlyingInstrumentPartyID_127.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_127('8');
        noUndlyInstrumentParties_1_0_2_0.set(UnderlyingInstrumentPartyIDSource_127);
        UndlyInstrumentParties_NoUndlyInstrumentParties_127.insert(UnderlyingInstrumentPartyIDSource_127.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_127(383102812);
        noUndlyInstrumentParties_1_0_2_0.set(UnderlyingInstrumentPartyRole_127);
        UndlyInstrumentParties_NoUndlyInstrumentParties_127.insert(UnderlyingInstrumentPartyRole_127.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_127);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_244;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_244("STRING_635056007");
          noUndlyInstrumentPartySubIDs_1_0_0_3_0.set(UnderlyingInstrumentPartySubID_244);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_244.insert(UnderlyingInstrumentPartySubID_244.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_244(297628585);
          noUndlyInstrumentPartySubIDs_1_0_0_3_0.set(UnderlyingInstrumentPartySubIDType_244);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_244.insert(UnderlyingInstrumentPartySubIDType_244.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_244);

          noUndlyInstrumentParties_1_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_0_3_0);
        }
        noUnderlyings_1_1_0.addGroup(noUndlyInstrumentParties_1_0_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_0_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_128;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_128("STRING_437030080");
        noUndlyInstrumentParties_1_0_2_1.set(UnderlyingInstrumentPartyID_128);
        UndlyInstrumentParties_NoUndlyInstrumentParties_128.insert(UnderlyingInstrumentPartyID_128.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_128('1');
        noUndlyInstrumentParties_1_0_2_1.set(UnderlyingInstrumentPartyIDSource_128);
        UndlyInstrumentParties_NoUndlyInstrumentParties_128.insert(UnderlyingInstrumentPartyIDSource_128.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_128(1661866709);
        noUndlyInstrumentParties_1_0_2_1.set(UnderlyingInstrumentPartyRole_128);
        UndlyInstrumentParties_NoUndlyInstrumentParties_128.insert(UnderlyingInstrumentPartyRole_128.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_128);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_245;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_245("STRING_514741633");
          noUndlyInstrumentPartySubIDs_1_0_1_3_0.set(UnderlyingInstrumentPartySubID_245);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_245.insert(UnderlyingInstrumentPartySubID_245.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_245(1245539279);
          noUndlyInstrumentPartySubIDs_1_0_1_3_0.set(UnderlyingInstrumentPartySubIDType_245);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_245.insert(UnderlyingInstrumentPartySubIDType_245.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_245);

          noUndlyInstrumentParties_1_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_0_1_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_1_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_246;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_246("STRING_19033617");
          noUndlyInstrumentPartySubIDs_1_0_1_3_1.set(UnderlyingInstrumentPartySubID_246);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_246.insert(UnderlyingInstrumentPartySubID_246.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_246(1334725831);
          noUndlyInstrumentPartySubIDs_1_0_1_3_1.set(UnderlyingInstrumentPartySubIDType_246);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_246.insert(UnderlyingInstrumentPartySubIDType_246.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_246);

          noUndlyInstrumentParties_1_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_0_1_3_1);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_1_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_247;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_247("STRING_835297766");
          noUndlyInstrumentPartySubIDs_1_0_1_3_2.set(UnderlyingInstrumentPartySubID_247);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_247.insert(UnderlyingInstrumentPartySubID_247.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_247(1849082861);
          noUndlyInstrumentPartySubIDs_1_0_1_3_2.set(UnderlyingInstrumentPartySubIDType_247);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_247.insert(UnderlyingInstrumentPartySubIDType_247.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_247);

          noUndlyInstrumentParties_1_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_0_1_3_2);
        }
        noUnderlyings_1_1_0.addGroup(noUndlyInstrumentParties_1_0_2_1);
      }
      noOrders_0_1.addGroup(noUnderlyings_1_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoUnderlyings noUnderlyings_1_1_1;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_63;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_63("DATA_753126682");
      noUnderlyings_1_1_1.set(EncodedUnderlyingIssuer_63);
      UnderlyingInstrument_63.insert(EncodedUnderlyingIssuer_63.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_63(1662031062);
      noUnderlyings_1_1_1.set(EncodedUnderlyingIssuerLen_63);
      UnderlyingInstrument_63.insert(EncodedUnderlyingIssuerLen_63.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_63("DATA_353007007");
      noUnderlyings_1_1_1.set(EncodedUnderlyingSecurityDesc_63);
      UnderlyingInstrument_63.insert(EncodedUnderlyingSecurityDesc_63.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_63(1625989132);
      noUnderlyings_1_1_1.set(EncodedUnderlyingSecurityDescLen_63);
      UnderlyingInstrument_63.insert(EncodedUnderlyingSecurityDescLen_63.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_63;
      UnderlyingAdjustedQuantity_63.setString("10351692");
      noUnderlyings_1_1_1.set(UnderlyingAdjustedQuantity_63);
      UnderlyingInstrument_63.insert(UnderlyingAdjustedQuantity_63.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_63;
      UnderlyingAllocationPercent_63.setString("97.600000");
      noUnderlyings_1_1_1.set(UnderlyingAllocationPercent_63);
      UnderlyingInstrument_63.insert(UnderlyingAllocationPercent_63.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_63;
      UnderlyingAttachmentPoint_63.setString("1.810000");
      noUnderlyings_1_1_1.set(UnderlyingAttachmentPoint_63);
      UnderlyingInstrument_63.insert(UnderlyingAttachmentPoint_63.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_63("STRING_2121364919");
      noUnderlyings_1_1_1.set(UnderlyingCFICode_63);
      UnderlyingInstrument_63.insert(UnderlyingCFICode_63.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_63("STRING_1338568750");
      noUnderlyings_1_1_1.set(UnderlyingCPProgram_63);
      UnderlyingInstrument_63.insert(UnderlyingCPProgram_63.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_63("STRING_1240440781");
      noUnderlyings_1_1_1.set(UnderlyingCPRegType_63);
      UnderlyingInstrument_63.insert(UnderlyingCPRegType_63.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_63;
      UnderlyingCapValue_63.setString("3462523");
      noUnderlyings_1_1_1.set(UnderlyingCapValue_63);
      UnderlyingInstrument_63.insert(UnderlyingCapValue_63.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_63;
      UnderlyingCashAmount_63.setString("2774143");
      noUnderlyings_1_1_1.set(UnderlyingCashAmount_63);
      UnderlyingInstrument_63.insert(UnderlyingCashAmount_63.getString());
      FIX::UnderlyingCashType UnderlyingCashType_63("STRING_FIXED");
      noUnderlyings_1_1_1.set(UnderlyingCashType_63);
      UnderlyingInstrument_63.insert(UnderlyingCashType_63.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_63;
      UnderlyingContractMultiplier_63.setString("2642257");
      noUnderlyings_1_1_1.set(UnderlyingContractMultiplier_63);
      UnderlyingInstrument_63.insert(UnderlyingContractMultiplier_63.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_63(595654437);
      noUnderlyings_1_1_1.set(UnderlyingContractMultiplierUnit_63);
      UnderlyingInstrument_63.insert(UnderlyingContractMultiplierUnit_63.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_63("COUNTRY_1007042423");
      noUnderlyings_1_1_1.set(UnderlyingCountryOfIssue_63);
      UnderlyingInstrument_63.insert(UnderlyingCountryOfIssue_63.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_63("LOCALMKTDATE_1155787008");
      noUnderlyings_1_1_1.set(UnderlyingCouponPaymentDate_63);
      UnderlyingInstrument_63.insert(UnderlyingCouponPaymentDate_63.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_63;
      UnderlyingCouponRate_63.setString("72.490000");
      noUnderlyings_1_1_1.set(UnderlyingCouponRate_63);
      UnderlyingInstrument_63.insert(UnderlyingCouponRate_63.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_63("STRING_817551558");
      noUnderlyings_1_1_1.set(UnderlyingCreditRating_63);
      UnderlyingInstrument_63.insert(UnderlyingCreditRating_63.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_63("GBP");
      noUnderlyings_1_1_1.set(UnderlyingCurrency_63);
      UnderlyingInstrument_63.insert(UnderlyingCurrency_63.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_63;
      UnderlyingCurrentValue_63.setString("12545816");
      noUnderlyings_1_1_1.set(UnderlyingCurrentValue_63);
      UnderlyingInstrument_63.insert(UnderlyingCurrentValue_63.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_63;
      UnderlyingDetachmentPoint_63.setString("2.140000");
      noUnderlyings_1_1_1.set(UnderlyingDetachmentPoint_63);
      UnderlyingInstrument_63.insert(UnderlyingDetachmentPoint_63.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_63;
      UnderlyingDirtyPrice_63.setString("7907688");
      noUnderlyings_1_1_1.set(UnderlyingDirtyPrice_63);
      UnderlyingInstrument_63.insert(UnderlyingDirtyPrice_63.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_63;
      UnderlyingEndPrice_63.setString("3156538");
      noUnderlyings_1_1_1.set(UnderlyingEndPrice_63);
      UnderlyingInstrument_63.insert(UnderlyingEndPrice_63.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_63;
      UnderlyingEndValue_63.setString("17183718");
      noUnderlyings_1_1_1.set(UnderlyingEndValue_63);
      UnderlyingInstrument_63.insert(UnderlyingEndValue_63.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_63(2036308175);
      noUnderlyings_1_1_1.set(UnderlyingExerciseStyle_63);
      UnderlyingInstrument_63.insert(UnderlyingExerciseStyle_63.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_63;
      UnderlyingFXRate_63.setString("3346875");
      noUnderlyings_1_1_1.set(UnderlyingFXRate_63);
      UnderlyingInstrument_63.insert(UnderlyingFXRate_63.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_63('D');
      noUnderlyings_1_1_1.set(UnderlyingFXRateCalc_63);
      UnderlyingInstrument_63.insert(UnderlyingFXRateCalc_63.getString());
      FIX::UnderlyingFactor UnderlyingFactor_63;
      UnderlyingFactor_63.setString("7241222");
      noUnderlyings_1_1_1.set(UnderlyingFactor_63);
      UnderlyingInstrument_63.insert(UnderlyingFactor_63.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_63(36286714);
      noUnderlyings_1_1_1.set(UnderlyingFlowScheduleType_63);
      UnderlyingInstrument_63.insert(UnderlyingFlowScheduleType_63.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_63("STRING_1658740712");
      noUnderlyings_1_1_1.set(UnderlyingInstrRegistry_63);
      UnderlyingInstrument_63.insert(UnderlyingInstrRegistry_63.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_63("LOCALMKTDATE_238669708");
      noUnderlyings_1_1_1.set(UnderlyingIssueDate_63);
      UnderlyingInstrument_63.insert(UnderlyingIssueDate_63.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_63("STRING_389293722");
      noUnderlyings_1_1_1.set(UnderlyingIssuer_63);
      UnderlyingInstrument_63.insert(UnderlyingIssuer_63.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_63("STRING_1137246196");
      noUnderlyings_1_1_1.set(UnderlyingLocaleOfIssue_63);
      UnderlyingInstrument_63.insert(UnderlyingLocaleOfIssue_63.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_63("LOCALMKTDATE_1273838989");
      noUnderlyings_1_1_1.set(UnderlyingMaturityDate_63);
      UnderlyingInstrument_63.insert(UnderlyingMaturityDate_63.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_63("MONTHYEAR_354489834");
      noUnderlyings_1_1_1.set(UnderlyingMaturityMonthYear_63);
      UnderlyingInstrument_63.insert(UnderlyingMaturityMonthYear_63.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_63("TZTIMEONLY_1339286377");
      noUnderlyings_1_1_1.set(UnderlyingMaturityTime_63);
      UnderlyingInstrument_63.insert(UnderlyingMaturityTime_63.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_63;
      UnderlyingNotionalPercentageOutstanding_63.setString("2.600000");
      noUnderlyings_1_1_1.set(UnderlyingNotionalPercentageOutstanding_63);
      UnderlyingInstrument_63.insert(UnderlyingNotionalPercentageOutstanding_63.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_63('1');
      noUnderlyings_1_1_1.set(UnderlyingOptAttribute_63);
      UnderlyingInstrument_63.insert(UnderlyingOptAttribute_63.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_63;
      UnderlyingOriginalNotionalPercentageOutstanding_63.setString("35.110000");
      noUnderlyings_1_1_1.set(UnderlyingOriginalNotionalPercentageOutstanding_63);
      UnderlyingInstrument_63.insert(UnderlyingOriginalNotionalPercentageOutstanding_63.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_63("STRING_1593972619");
      noUnderlyings_1_1_1.set(UnderlyingPriceUnitOfMeasure_63);
      UnderlyingInstrument_63.insert(UnderlyingPriceUnitOfMeasure_63.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_63;
      UnderlyingPriceUnitOfMeasureQty_63.setString("19704729");
      noUnderlyings_1_1_1.set(UnderlyingPriceUnitOfMeasureQty_63);
      UnderlyingInstrument_63.insert(UnderlyingPriceUnitOfMeasureQty_63.getString());
      FIX::UnderlyingProduct UnderlyingProduct_63(1433455009);
      noUnderlyings_1_1_1.set(UnderlyingProduct_63);
      UnderlyingInstrument_63.insert(UnderlyingProduct_63.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_63(1858198321);
      noUnderlyings_1_1_1.set(UnderlyingPutOrCall_63);
      UnderlyingInstrument_63.insert(UnderlyingPutOrCall_63.getString());
      FIX::UnderlyingPx UnderlyingPx_63;
      UnderlyingPx_63.setString("4186437");
      noUnderlyings_1_1_1.set(UnderlyingPx_63);
      UnderlyingInstrument_63.insert(UnderlyingPx_63.getString());
      FIX::UnderlyingQty UnderlyingQty_63;
      UnderlyingQty_63.setString("2930137");
      noUnderlyings_1_1_1.set(UnderlyingQty_63);
      UnderlyingInstrument_63.insert(UnderlyingQty_63.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_63("LOCALMKTDATE_866501681");
      noUnderlyings_1_1_1.set(UnderlyingRedemptionDate_63);
      UnderlyingInstrument_63.insert(UnderlyingRedemptionDate_63.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_63("STRING_1397401004");
      noUnderlyings_1_1_1.set(UnderlyingRepoCollateralSecurityType_63);
      UnderlyingInstrument_63.insert(UnderlyingRepoCollateralSecurityType_63.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_63;
      UnderlyingRepurchaseRate_63.setString("53.430000");
      noUnderlyings_1_1_1.set(UnderlyingRepurchaseRate_63);
      UnderlyingInstrument_63.insert(UnderlyingRepurchaseRate_63.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_63(509861048);
      noUnderlyings_1_1_1.set(UnderlyingRepurchaseTerm_63);
      UnderlyingInstrument_63.insert(UnderlyingRepurchaseTerm_63.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_63("STRING_526303190");
      noUnderlyings_1_1_1.set(UnderlyingRestructuringType_63);
      UnderlyingInstrument_63.insert(UnderlyingRestructuringType_63.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_63("STRING_217663333");
      noUnderlyings_1_1_1.set(UnderlyingSecurityDesc_63);
      UnderlyingInstrument_63.insert(UnderlyingSecurityDesc_63.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_63("EXCHANGE_1713491262");
      noUnderlyings_1_1_1.set(UnderlyingSecurityExchange_63);
      UnderlyingInstrument_63.insert(UnderlyingSecurityExchange_63.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_63("STRING_1317072086");
      noUnderlyings_1_1_1.set(UnderlyingSecurityID_63);
      UnderlyingInstrument_63.insert(UnderlyingSecurityID_63.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_63("STRING_533317218");
      noUnderlyings_1_1_1.set(UnderlyingSecurityIDSource_63);
      UnderlyingInstrument_63.insert(UnderlyingSecurityIDSource_63.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_63("STRING_1284379461");
      noUnderlyings_1_1_1.set(UnderlyingSecuritySubType_63);
      UnderlyingInstrument_63.insert(UnderlyingSecuritySubType_63.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_63("STRING_1205896613");
      noUnderlyings_1_1_1.set(UnderlyingSecurityType_63);
      UnderlyingInstrument_63.insert(UnderlyingSecurityType_63.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_63("STRING_868004719");
      noUnderlyings_1_1_1.set(UnderlyingSeniority_63);
      UnderlyingInstrument_63.insert(UnderlyingSeniority_63.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_63("STRING_42509843");
      noUnderlyings_1_1_1.set(UnderlyingSettlMethod_63);
      UnderlyingInstrument_63.insert(UnderlyingSettlMethod_63.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_63(4);
      noUnderlyings_1_1_1.set(UnderlyingSettlementType_63);
      UnderlyingInstrument_63.insert(UnderlyingSettlementType_63.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_63;
      UnderlyingStartValue_63.setString("9042914");
      noUnderlyings_1_1_1.set(UnderlyingStartValue_63);
      UnderlyingInstrument_63.insert(UnderlyingStartValue_63.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_63("STRING_1701250555");
      noUnderlyings_1_1_1.set(UnderlyingStateOrProvinceOfIssue_63);
      UnderlyingInstrument_63.insert(UnderlyingStateOrProvinceOfIssue_63.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_63("USD");
      noUnderlyings_1_1_1.set(UnderlyingStrikeCurrency_63);
      UnderlyingInstrument_63.insert(UnderlyingStrikeCurrency_63.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_63;
      UnderlyingStrikePrice_63.setString("6910131");
      noUnderlyings_1_1_1.set(UnderlyingStrikePrice_63);
      UnderlyingInstrument_63.insert(UnderlyingStrikePrice_63.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_63("STRING_1295043955");
      noUnderlyings_1_1_1.set(UnderlyingSymbol_63);
      UnderlyingInstrument_63.insert(UnderlyingSymbol_63.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_63("STRING_1648074990");
      noUnderlyings_1_1_1.set(UnderlyingSymbolSfx_63);
      UnderlyingInstrument_63.insert(UnderlyingSymbolSfx_63.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_63("STRING_2030299481");
      noUnderlyings_1_1_1.set(UnderlyingTimeUnit_63);
      UnderlyingInstrument_63.insert(UnderlyingTimeUnit_63.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_63("STRING_395280567");
      noUnderlyings_1_1_1.set(UnderlyingUnitOfMeasure_63);
      UnderlyingInstrument_63.insert(UnderlyingUnitOfMeasure_63.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_63;
      UnderlyingUnitOfMeasureQty_63.setString("11936499");
      noUnderlyings_1_1_1.set(UnderlyingUnitOfMeasureQty_63);
      UnderlyingInstrument_63.insert(UnderlyingUnitOfMeasureQty_63.getString());
      all_values.push_back(UnderlyingInstrument_63);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_122;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_122("STRING_1989253187");
        noUnderlyingSecurityAltID_1_1_2_0.set(UnderlyingSecurityAltID_122);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_122.insert(UnderlyingSecurityAltID_122.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_122("STRING_1016639246");
        noUnderlyingSecurityAltID_1_1_2_0.set(UnderlyingSecurityAltIDSource_122);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_122.insert(UnderlyingSecurityAltIDSource_122.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_122);

        noUnderlyings_1_1_1.addGroup(noUnderlyingSecurityAltID_1_1_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_123;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_123("STRING_1748514353");
        noUnderlyingSecurityAltID_1_1_2_1.set(UnderlyingSecurityAltID_123);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_123.insert(UnderlyingSecurityAltID_123.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_123("STRING_1699967860");
        noUnderlyingSecurityAltID_1_1_2_1.set(UnderlyingSecurityAltIDSource_123);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_123.insert(UnderlyingSecurityAltIDSource_123.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_123);

        noUnderlyings_1_1_1.addGroup(noUnderlyingSecurityAltID_1_1_2_1);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_123;
        FIX::UnderlyingStipType UnderlyingStipType_123("STRING_2041528138");
        noUnderlyingStips_1_1_2_0.set(UnderlyingStipType_123);
        UnderlyingStipulations_NoUnderlyingStips_123.insert(UnderlyingStipType_123.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_123("STRING_418985893");
        noUnderlyingStips_1_1_2_0.set(UnderlyingStipValue_123);
        UnderlyingStipulations_NoUnderlyingStips_123.insert(UnderlyingStipValue_123.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_123);

        noUnderlyings_1_1_1.addGroup(noUnderlyingStips_1_1_2_0);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_129;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_129("STRING_1004609833");
        noUndlyInstrumentParties_1_1_2_0.set(UnderlyingInstrumentPartyID_129);
        UndlyInstrumentParties_NoUndlyInstrumentParties_129.insert(UnderlyingInstrumentPartyID_129.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_129('9');
        noUndlyInstrumentParties_1_1_2_0.set(UnderlyingInstrumentPartyIDSource_129);
        UndlyInstrumentParties_NoUndlyInstrumentParties_129.insert(UnderlyingInstrumentPartyIDSource_129.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_129(1211503548);
        noUndlyInstrumentParties_1_1_2_0.set(UnderlyingInstrumentPartyRole_129);
        UndlyInstrumentParties_NoUndlyInstrumentParties_129.insert(UnderlyingInstrumentPartyRole_129.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_129);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_248;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_248("STRING_494854555");
          noUndlyInstrumentPartySubIDs_1_1_0_3_0.set(UnderlyingInstrumentPartySubID_248);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_248.insert(UnderlyingInstrumentPartySubID_248.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_248(381091986);
          noUndlyInstrumentPartySubIDs_1_1_0_3_0.set(UnderlyingInstrumentPartySubIDType_248);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_248.insert(UnderlyingInstrumentPartySubIDType_248.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_248);

          noUndlyInstrumentParties_1_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_1_0_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_249;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_249("STRING_1755590384");
          noUndlyInstrumentPartySubIDs_1_1_0_3_1.set(UnderlyingInstrumentPartySubID_249);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_249.insert(UnderlyingInstrumentPartySubID_249.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_249(1779234016);
          noUndlyInstrumentPartySubIDs_1_1_0_3_1.set(UnderlyingInstrumentPartySubIDType_249);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_249.insert(UnderlyingInstrumentPartySubIDType_249.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_249);

          noUndlyInstrumentParties_1_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_1_0_3_1);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_0_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_250;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_250("STRING_1586988599");
          noUndlyInstrumentPartySubIDs_1_1_0_3_2.set(UnderlyingInstrumentPartySubID_250);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_250.insert(UnderlyingInstrumentPartySubID_250.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_250(476111456);
          noUndlyInstrumentPartySubIDs_1_1_0_3_2.set(UnderlyingInstrumentPartySubIDType_250);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_250.insert(UnderlyingInstrumentPartySubIDType_250.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_250);

          noUndlyInstrumentParties_1_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_1_0_3_2);
        }
        noUnderlyings_1_1_1.addGroup(noUndlyInstrumentParties_1_1_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_130;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_130("STRING_1821743859");
        noUndlyInstrumentParties_1_1_2_1.set(UnderlyingInstrumentPartyID_130);
        UndlyInstrumentParties_NoUndlyInstrumentParties_130.insert(UnderlyingInstrumentPartyID_130.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_130('1');
        noUndlyInstrumentParties_1_1_2_1.set(UnderlyingInstrumentPartyIDSource_130);
        UndlyInstrumentParties_NoUndlyInstrumentParties_130.insert(UnderlyingInstrumentPartyIDSource_130.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_130(1380402890);
        noUndlyInstrumentParties_1_1_2_1.set(UnderlyingInstrumentPartyRole_130);
        UndlyInstrumentParties_NoUndlyInstrumentParties_130.insert(UnderlyingInstrumentPartyRole_130.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_130);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_251;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_251("STRING_1390728824");
          noUndlyInstrumentPartySubIDs_1_1_1_3_0.set(UnderlyingInstrumentPartySubID_251);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_251.insert(UnderlyingInstrumentPartySubID_251.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_251(526504398);
          noUndlyInstrumentPartySubIDs_1_1_1_3_0.set(UnderlyingInstrumentPartySubIDType_251);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_251.insert(UnderlyingInstrumentPartySubIDType_251.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_251);

          noUndlyInstrumentParties_1_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_1_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_1_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_252;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_252("STRING_2066523869");
          noUndlyInstrumentPartySubIDs_1_1_1_3_1.set(UnderlyingInstrumentPartySubID_252);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_252.insert(UnderlyingInstrumentPartySubID_252.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_252(538289132);
          noUndlyInstrumentPartySubIDs_1_1_1_3_1.set(UnderlyingInstrumentPartySubIDType_252);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_252.insert(UnderlyingInstrumentPartySubIDType_252.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_252);

          noUndlyInstrumentParties_1_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_1_3_1);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_1_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_253;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_253("STRING_27095740");
          noUndlyInstrumentPartySubIDs_1_1_1_3_2.set(UnderlyingInstrumentPartySubID_253);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_253.insert(UnderlyingInstrumentPartySubID_253.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_253(1949339702);
          noUndlyInstrumentPartySubIDs_1_1_1_3_2.set(UnderlyingInstrumentPartySubIDType_253);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_253.insert(UnderlyingInstrumentPartySubIDType_253.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_253);

          noUndlyInstrumentParties_1_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_1_3_2);
        }
        noUnderlyings_1_1_1.addGroup(noUndlyInstrumentParties_1_1_2_1);
      }
      noOrders_0_1.addGroup(noUnderlyings_1_1_1);
    }
    // YieldData
    multiset<string> YieldData_12;
    FIX::Yield Yield_12;
    Yield_12.setString("96.990000");
    noOrders_0_1.set(Yield_12);
    YieldData_12.insert(Yield_12.getString());
    FIX::YieldCalcDate YieldCalcDate_12("LOCALMKTDATE_1220745668");
    noOrders_0_1.set(YieldCalcDate_12);
    YieldData_12.insert(YieldCalcDate_12.getString());
    FIX::YieldRedemptionDate YieldRedemptionDate_12("LOCALMKTDATE_116915398");
    noOrders_0_1.set(YieldRedemptionDate_12);
    YieldData_12.insert(YieldRedemptionDate_12.getString());
    FIX::YieldRedemptionPrice YieldRedemptionPrice_12;
    YieldRedemptionPrice_12.setString("7753392");
    noOrders_0_1.set(YieldRedemptionPrice_12);
    YieldData_12.insert(YieldRedemptionPrice_12.getString());
    FIX::YieldRedemptionPriceType YieldRedemptionPriceType_12(89901266);
    noOrders_0_1.set(YieldRedemptionPriceType_12);
    YieldData_12.insert(YieldRedemptionPriceType_12.getString());
    FIX::YieldType YieldType_12("STRING_VALUE1_32");
    noOrders_0_1.set(YieldType_12);
    YieldData_12.insert(YieldType_12.getString());
    all_values.push_back(YieldData_12);

    msg.addGroup(noOrders_0_1);
  }
  {
    FIX50SP2::NewOrderList::NoOrders noOrders_0_2;
    // ListOrdGrp.NoOrders
    multiset<string> ListOrdGrp_NoOrders_2;
    FIX::Account Account_20("STRING_327823450");
    noOrders_0_2.set(Account_20);
    ListOrdGrp_NoOrders_2.insert(Account_20.getString());
    FIX::AccountType AccountType_18(7);
    noOrders_0_2.set(AccountType_18);
    ListOrdGrp_NoOrders_2.insert(AccountType_18.getString());
    FIX::AcctIDSource AcctIDSource_13(1);
    noOrders_0_2.set(AcctIDSource_13);
    ListOrdGrp_NoOrders_2.insert(AcctIDSource_13.getString());
    FIX::AllocID AllocID_16("STRING_746809343");
    noOrders_0_2.set(AllocID_16);
    ListOrdGrp_NoOrders_2.insert(AllocID_16.getString());
    FIX::BookingType BookingType_15(1);
    noOrders_0_2.set(BookingType_15);
    ListOrdGrp_NoOrders_2.insert(BookingType_15.getString());
    FIX::BookingUnit BookingUnit_9('2');
    noOrders_0_2.set(BookingUnit_9);
    ListOrdGrp_NoOrders_2.insert(BookingUnit_9.getString());
    FIX::CashMargin CashMargin_9('3');
    noOrders_0_2.set(CashMargin_9);
    ListOrdGrp_NoOrders_2.insert(CashMargin_9.getString());
    FIX::ClOrdID ClOrdID_31("STRING_1274404526");
    noOrders_0_2.set(ClOrdID_31);
    ListOrdGrp_NoOrders_2.insert(ClOrdID_31.getString());
    FIX::ClOrdLinkID ClOrdLinkID_11("STRING_1838873593");
    noOrders_0_2.set(ClOrdLinkID_11);
    ListOrdGrp_NoOrders_2.insert(ClOrdLinkID_11.getString());
    FIX::ClearingFeeIndicator ClearingFeeIndicator_14("STRING_9");
    noOrders_0_2.set(ClearingFeeIndicator_14);
    ListOrdGrp_NoOrders_2.insert(ClearingFeeIndicator_14.getString());
    FIX::ComplianceID ComplianceID_8("STRING_1655496512");
    noOrders_0_2.set(ComplianceID_8);
    ListOrdGrp_NoOrders_2.insert(ComplianceID_8.getString());
    FIX::CoveredOrUncovered CoveredOrUncovered_8(0);
    noOrders_0_2.set(CoveredOrUncovered_8);
    ListOrdGrp_NoOrders_2.insert(CoveredOrUncovered_8.getString());
    FIX::Currency Currency_37("USD");
    noOrders_0_2.set(Currency_37);
    ListOrdGrp_NoOrders_2.insert(Currency_37.getString());
    FIX::CustOrderCapacity CustOrderCapacity_12(3);
    noOrders_0_2.set(CustOrderCapacity_12);
    ListOrdGrp_NoOrders_2.insert(CustOrderCapacity_12.getString());
    FIX::DayBookingInst DayBookingInst_9('0');
    noOrders_0_2.set(DayBookingInst_9);
    ListOrdGrp_NoOrders_2.insert(DayBookingInst_9.getString());
    FIX::Designation Designation_6("STRING_317041674");
    noOrders_0_2.set(Designation_6);
    ListOrdGrp_NoOrders_2.insert(Designation_6.getString());
    FIX::EffectiveTime EffectiveTime_6(FIX::UTCTIMESTAMP(0, 38, 46, 2, 32002));
    noOrders_0_2.set(EffectiveTime_6);
    ListOrdGrp_NoOrders_2.insert(EffectiveTime_6.getString());
    FIX::EncodedText EncodedText_56("DATA_425444812");
    noOrders_0_2.set(EncodedText_56);
    ListOrdGrp_NoOrders_2.insert(EncodedText_56.getString());
    FIX::EncodedTextLen EncodedTextLen_56(1032145682);
    noOrders_0_2.set(EncodedTextLen_56);
    ListOrdGrp_NoOrders_2.insert(EncodedTextLen_56.getString());
    FIX::ExDestination ExDestination_5("EXCHANGE_782873186");
    noOrders_0_2.set(ExDestination_5);
    ListOrdGrp_NoOrders_2.insert(ExDestination_5.getString());
    FIX::ExDestinationIDSource ExDestinationIDSource_5('C');
    noOrders_0_2.set(ExDestinationIDSource_5);
    ListOrdGrp_NoOrders_2.insert(ExDestinationIDSource_5.getString());
    FIX::ExecInst ExecInst_9("MULTIPLECHARVALUE_O");
    noOrders_0_2.set(ExecInst_9);
    ListOrdGrp_NoOrders_2.insert(ExecInst_9.getString());
    FIX::ExpireDate ExpireDate_10("LOCALMKTDATE_872774452");
    noOrders_0_2.set(ExpireDate_10);
    ListOrdGrp_NoOrders_2.insert(ExpireDate_10.getString());
    FIX::ExpireTime ExpireTime_11(FIX::UTCTIMESTAMP(3, 32, 17, 26, 102002));
    noOrders_0_2.set(ExpireTime_11);
    ListOrdGrp_NoOrders_2.insert(ExpireTime_11.getString());
    FIX::ForexReq ForexReq_9(false);
    noOrders_0_2.set(ForexReq_9);
    ListOrdGrp_NoOrders_2.insert(ForexReq_9.getString());
    FIX::GTBookingInst GTBookingInst_6(2);
    noOrders_0_2.set(GTBookingInst_6);
    ListOrdGrp_NoOrders_2.insert(GTBookingInst_6.getString());
    FIX::HandlInst HandlInst_6('2');
    noOrders_0_2.set(HandlInst_6);
    ListOrdGrp_NoOrders_2.insert(HandlInst_6.getString());
    FIX::IOIID IOIID_6("STRING_285833894");
    noOrders_0_2.set(IOIID_6);
    ListOrdGrp_NoOrders_2.insert(IOIID_6.getString());
    FIX::ListSeqNo ListSeqNo_2(1095793440);
    noOrders_0_2.set(ListSeqNo_2);
    ListOrdGrp_NoOrders_2.insert(ListSeqNo_2.getString());
    FIX::LocateReqd LocateReqd_5(false);
    noOrders_0_2.set(LocateReqd_5);
    ListOrdGrp_NoOrders_2.insert(LocateReqd_5.getString());
    FIX::MatchIncrement MatchIncrement_6;
    MatchIncrement_6.setString("20880951");
    noOrders_0_2.set(MatchIncrement_6);
    ListOrdGrp_NoOrders_2.insert(MatchIncrement_6.getString());
    FIX::MaxFloor MaxFloor_6;
    MaxFloor_6.setString("433112");
    noOrders_0_2.set(MaxFloor_6);
    ListOrdGrp_NoOrders_2.insert(MaxFloor_6.getString());
    FIX::MaxPriceLevels MaxPriceLevels_6(1402875749);
    noOrders_0_2.set(MaxPriceLevels_6);
    ListOrdGrp_NoOrders_2.insert(MaxPriceLevels_6.getString());
    FIX::MaxShow MaxShow_6;
    MaxShow_6.setString("14171328");
    noOrders_0_2.set(MaxShow_6);
    ListOrdGrp_NoOrders_2.insert(MaxShow_6.getString());
    FIX::MinQty MinQty_9;
    MinQty_9.setString("3603529");
    noOrders_0_2.set(MinQty_9);
    ListOrdGrp_NoOrders_2.insert(MinQty_9.getString());
    FIX::OrdType OrdType_42('2');
    noOrders_0_2.set(OrdType_42);
    ListOrdGrp_NoOrders_2.insert(OrdType_42.getString());
    FIX::OrderCapacity OrderCapacity_18('G');
    noOrders_0_2.set(OrderCapacity_18);
    ListOrdGrp_NoOrders_2.insert(OrderCapacity_18.getString());
    FIX::OrderQty2 OrderQty2_6;
    OrderQty2_6.setString("20681234");
    noOrders_0_2.set(OrderQty2_6);
    ListOrdGrp_NoOrders_2.insert(OrderQty2_6.getString());
    FIX::OrderRestrictions OrderRestrictions_15("MULTIPLECHARVALUE_6");
    noOrders_0_2.set(OrderRestrictions_15);
    ListOrdGrp_NoOrders_2.insert(OrderRestrictions_15.getString());
    FIX::ParticipationRate ParticipationRate_6;
    ParticipationRate_6.setString("65.190000");
    noOrders_0_2.set(ParticipationRate_6);
    ListOrdGrp_NoOrders_2.insert(ParticipationRate_6.getString());
    FIX::PositionEffect PositionEffect_12('F');
    noOrders_0_2.set(PositionEffect_12);
    ListOrdGrp_NoOrders_2.insert(PositionEffect_12.getString());
    FIX::PreTradeAnonymity PreTradeAnonymity_9(true);
    noOrders_0_2.set(PreTradeAnonymity_9);
    ListOrdGrp_NoOrders_2.insert(PreTradeAnonymity_9.getString());
    FIX::PreallocMethod PreallocMethod_9('1');
    noOrders_0_2.set(PreallocMethod_9);
    ListOrdGrp_NoOrders_2.insert(PreallocMethod_9.getString());
    FIX::PrevClosePx PrevClosePx_7;
    PrevClosePx_7.setString("10513614");
    noOrders_0_2.set(PrevClosePx_7);
    ListOrdGrp_NoOrders_2.insert(PrevClosePx_7.getString());
    FIX::Price Price_16;
    Price_16.setString("2914356");
    noOrders_0_2.set(Price_16);
    ListOrdGrp_NoOrders_2.insert(Price_16.getString());
    FIX::Price2 Price2_2;
    Price2_2.setString("15655915");
    noOrders_0_2.set(Price2_2);
    ListOrdGrp_NoOrders_2.insert(Price2_2.getString());
    FIX::PriceProtectionScope PriceProtectionScope_6('1');
    noOrders_0_2.set(PriceProtectionScope_6);
    ListOrdGrp_NoOrders_2.insert(PriceProtectionScope_6.getString());
    FIX::PriceType PriceType_28(19);
    noOrders_0_2.set(PriceType_28);
    ListOrdGrp_NoOrders_2.insert(PriceType_28.getString());
    FIX::ProcessCode ProcessCode_11('0');
    noOrders_0_2.set(ProcessCode_11);
    ListOrdGrp_NoOrders_2.insert(ProcessCode_11.getString());
    FIX::QtyType QtyType_21(0);
    noOrders_0_2.set(QtyType_21);
    ListOrdGrp_NoOrders_2.insert(QtyType_21.getString());
    FIX::QuoteID QuoteID_7("STRING_1414685137");
    noOrders_0_2.set(QuoteID_7);
    ListOrdGrp_NoOrders_2.insert(QuoteID_7.getString());
    FIX::RefOrderID RefOrderID_2("STRING_1698194766");
    noOrders_0_2.set(RefOrderID_2);
    ListOrdGrp_NoOrders_2.insert(RefOrderID_2.getString());
    FIX::RefOrderIDSource RefOrderIDSource_2('2');
    noOrders_0_2.set(RefOrderIDSource_2);
    ListOrdGrp_NoOrders_2.insert(RefOrderIDSource_2.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_29("STRING_1728061186");
    noOrders_0_2.set(SecondaryClOrdID_29);
    ListOrdGrp_NoOrders_2.insert(SecondaryClOrdID_29.getString());
    FIX::SettlCurrency SettlCurrency_18("GBP");
    noOrders_0_2.set(SettlCurrency_18);
    ListOrdGrp_NoOrders_2.insert(SettlCurrency_18.getString());
    FIX::SettlDate SettlDate_27("LOCALMKTDATE_1168358114");
    noOrders_0_2.set(SettlDate_27);
    ListOrdGrp_NoOrders_2.insert(SettlDate_27.getString());
    FIX::SettlDate2 SettlDate2_6("LOCALMKTDATE_219895736");
    noOrders_0_2.set(SettlDate2_6);
    ListOrdGrp_NoOrders_2.insert(SettlDate2_6.getString());
    FIX::SettlInstMode SettlInstMode_2('4');
    noOrders_0_2.set(SettlInstMode_2);
    ListOrdGrp_NoOrders_2.insert(SettlInstMode_2.getString());
    FIX::SettlType SettlType_18("STRING_6");
    noOrders_0_2.set(SettlType_18);
    ListOrdGrp_NoOrders_2.insert(SettlType_18.getString());
    FIX::Side Side_28('4');
    noOrders_0_2.set(Side_28);
    ListOrdGrp_NoOrders_2.insert(Side_28.getString());
    FIX::SideValueInd SideValueInd_4(1);
    noOrders_0_2.set(SideValueInd_4);
    ListOrdGrp_NoOrders_2.insert(SideValueInd_4.getString());
    FIX::SolicitedFlag SolicitedFlag_9(true);
    noOrders_0_2.set(SolicitedFlag_9);
    ListOrdGrp_NoOrders_2.insert(SolicitedFlag_9.getString());
    FIX::StopPx StopPx_6;
    StopPx_6.setString("11025554");
    noOrders_0_2.set(StopPx_6);
    ListOrdGrp_NoOrders_2.insert(StopPx_6.getString());
    FIX::TargetStrategy TargetStrategy_6(1);
    noOrders_0_2.set(TargetStrategy_6);
    ListOrdGrp_NoOrders_2.insert(TargetStrategy_6.getString());
    FIX::TargetStrategyParameters TargetStrategyParameters_6("STRING_520332092");
    noOrders_0_2.set(TargetStrategyParameters_6);
    ListOrdGrp_NoOrders_2.insert(TargetStrategyParameters_6.getString());
    FIX::Text Text_56("STRING_1513958578");
    noOrders_0_2.set(Text_56);
    ListOrdGrp_NoOrders_2.insert(Text_56.getString());
    FIX::TimeInForce TimeInForce_38('4');
    noOrders_0_2.set(TimeInForce_38);
    ListOrdGrp_NoOrders_2.insert(TimeInForce_38.getString());
    FIX::TradeDate TradeDate_23("LOCALMKTDATE_440971872");
    noOrders_0_2.set(TradeDate_23);
    ListOrdGrp_NoOrders_2.insert(TradeDate_23.getString());
    FIX::TradeOriginationDate TradeOriginationDate_15("LOCALMKTDATE_1460393486");
    noOrders_0_2.set(TradeOriginationDate_15);
    ListOrdGrp_NoOrders_2.insert(TradeOriginationDate_15.getString());
    FIX::TransactTime TransactTime_33(FIX::UTCTIMESTAMP(19, 12, 46, 20, 12001));
    noOrders_0_2.set(TransactTime_33);
    ListOrdGrp_NoOrders_2.insert(TransactTime_33.getString());
    all_values.push_back(ListOrdGrp_NoOrders_2);

    // CommissionData
    multiset<string> CommissionData_16;
    FIX::CommCurrency CommCurrency_16("CHF");
    noOrders_0_2.set(CommCurrency_16);
    CommissionData_16.insert(CommCurrency_16.getString());
    FIX::CommType CommType_16('5');
    noOrders_0_2.set(CommType_16);
    CommissionData_16.insert(CommType_16.getString());
    FIX::Commission Commission_16;
    Commission_16.setString("7746155");
    noOrders_0_2.set(Commission_16);
    CommissionData_16.insert(Commission_16.getString());
    FIX::FundRenewWaiv FundRenewWaiv_16('N');
    noOrders_0_2.set(FundRenewWaiv_16);
    CommissionData_16.insert(FundRenewWaiv_16.getString());
    all_values.push_back(CommissionData_16);

    // DiscretionInstructions
    multiset<string> DiscretionInstructions_6;
    FIX::DiscretionInst DiscretionInst_6('1');
    noOrders_0_2.set(DiscretionInst_6);
    DiscretionInstructions_6.insert(DiscretionInst_6.getString());
    FIX::DiscretionLimitType DiscretionLimitType_6(1);
    noOrders_0_2.set(DiscretionLimitType_6);
    DiscretionInstructions_6.insert(DiscretionLimitType_6.getString());
    FIX::DiscretionMoveType DiscretionMoveType_6(1);
    noOrders_0_2.set(DiscretionMoveType_6);
    DiscretionInstructions_6.insert(DiscretionMoveType_6.getString());
    FIX::DiscretionOffsetType DiscretionOffsetType_6(3);
    noOrders_0_2.set(DiscretionOffsetType_6);
    DiscretionInstructions_6.insert(DiscretionOffsetType_6.getString());
    FIX::DiscretionOffsetValue DiscretionOffsetValue_6;
    DiscretionOffsetValue_6.setString("17575816");
    noOrders_0_2.set(DiscretionOffsetValue_6);
    DiscretionInstructions_6.insert(DiscretionOffsetValue_6.getString());
    FIX::DiscretionRoundDirection DiscretionRoundDirection_6(2);
    noOrders_0_2.set(DiscretionRoundDirection_6);
    DiscretionInstructions_6.insert(DiscretionRoundDirection_6.getString());
    FIX::DiscretionScope DiscretionScope_6(4);
    noOrders_0_2.set(DiscretionScope_6);
    DiscretionInstructions_6.insert(DiscretionScope_6.getString());
    all_values.push_back(DiscretionInstructions_6);

    // DisplayInstruction
    multiset<string> DisplayInstruction_6;
    FIX::DisplayHighQty DisplayHighQty_6;
    DisplayHighQty_6.setString("15925601");
    noOrders_0_2.set(DisplayHighQty_6);
    DisplayInstruction_6.insert(DisplayHighQty_6.getString());
    FIX::DisplayLowQty DisplayLowQty_6;
    DisplayLowQty_6.setString("4099229");
    noOrders_0_2.set(DisplayLowQty_6);
    DisplayInstruction_6.insert(DisplayLowQty_6.getString());
    FIX::DisplayMethod DisplayMethod_6('4');
    noOrders_0_2.set(DisplayMethod_6);
    DisplayInstruction_6.insert(DisplayMethod_6.getString());
    FIX::DisplayMinIncr DisplayMinIncr_6;
    DisplayMinIncr_6.setString("13681500");
    noOrders_0_2.set(DisplayMinIncr_6);
    DisplayInstruction_6.insert(DisplayMinIncr_6.getString());
    FIX::DisplayQty DisplayQty_6;
    DisplayQty_6.setString("5699021");
    noOrders_0_2.set(DisplayQty_6);
    DisplayInstruction_6.insert(DisplayQty_6.getString());
    FIX::DisplayWhen DisplayWhen_6('1');
    noOrders_0_2.set(DisplayWhen_6);
    DisplayInstruction_6.insert(DisplayWhen_6.getString());
    FIX::RefreshQty RefreshQty_6;
    RefreshQty_6.setString("4133891");
    noOrders_0_2.set(RefreshQty_6);
    DisplayInstruction_6.insert(RefreshQty_6.getString());
    FIX::SecondaryDisplayQty SecondaryDisplayQty_6;
    SecondaryDisplayQty_6.setString("10902342");
    noOrders_0_2.set(SecondaryDisplayQty_6);
    DisplayInstruction_6.insert(SecondaryDisplayQty_6.getString());
    all_values.push_back(DisplayInstruction_6);

    // Instrument
    multiset<string> Instrument_39;
    FIX::AttachmentPoint AttachmentPoint_39;
    AttachmentPoint_39.setString("58.860000");
    noOrders_0_2.set(AttachmentPoint_39);
    Instrument_39.insert(AttachmentPoint_39.getString());
    FIX::CFICode CFICode_39("STRING_1580309705");
    noOrders_0_2.set(CFICode_39);
    Instrument_39.insert(CFICode_39.getString());
    FIX::CPProgram CPProgram_39(2);
    noOrders_0_2.set(CPProgram_39);
    Instrument_39.insert(CPProgram_39.getString());
    FIX::CPRegType CPRegType_39("STRING_1176295724");
    noOrders_0_2.set(CPRegType_39);
    Instrument_39.insert(CPRegType_39.getString());
    FIX::CapPrice CapPrice_39;
    CapPrice_39.setString("11975331");
    noOrders_0_2.set(CapPrice_39);
    Instrument_39.insert(CapPrice_39.getString());
    FIX::ContractMultiplier ContractMultiplier_39;
    ContractMultiplier_39.setString("19913937");
    noOrders_0_2.set(ContractMultiplier_39);
    Instrument_39.insert(ContractMultiplier_39.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_39(2);
    noOrders_0_2.set(ContractMultiplierUnit_39);
    Instrument_39.insert(ContractMultiplierUnit_39.getString());
    FIX::ContractSettlMonth ContractSettlMonth_39("MONTHYEAR_1837987867");
    noOrders_0_2.set(ContractSettlMonth_39);
    Instrument_39.insert(ContractSettlMonth_39.getString());
    FIX::CountryOfIssue CountryOfIssue_39("COUNTRY_1355459183");
    noOrders_0_2.set(CountryOfIssue_39);
    Instrument_39.insert(CountryOfIssue_39.getString());
    FIX::CouponPaymentDate CouponPaymentDate_39("LOCALMKTDATE_1258159513");
    noOrders_0_2.set(CouponPaymentDate_39);
    Instrument_39.insert(CouponPaymentDate_39.getString());
    FIX::CouponRate CouponRate_39;
    CouponRate_39.setString("5.080000");
    noOrders_0_2.set(CouponRate_39);
    Instrument_39.insert(CouponRate_39.getString());
    FIX::CreditRating CreditRating_39("STRING_1430887333");
    noOrders_0_2.set(CreditRating_39);
    Instrument_39.insert(CreditRating_39.getString());
    FIX::DatedDate DatedDate_39("LOCALMKTDATE_1535277454");
    noOrders_0_2.set(DatedDate_39);
    Instrument_39.insert(DatedDate_39.getString());
    FIX::DetachmentPoint DetachmentPoint_39;
    DetachmentPoint_39.setString("73.580000");
    noOrders_0_2.set(DetachmentPoint_39);
    Instrument_39.insert(DetachmentPoint_39.getString());
    FIX::EncodedIssuer EncodedIssuer_39("DATA_58019276");
    noOrders_0_2.set(EncodedIssuer_39);
    Instrument_39.insert(EncodedIssuer_39.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_39(1079596885);
    noOrders_0_2.set(EncodedIssuerLen_39);
    Instrument_39.insert(EncodedIssuerLen_39.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_39("DATA_921215327");
    noOrders_0_2.set(EncodedSecurityDesc_39);
    Instrument_39.insert(EncodedSecurityDesc_39.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_39(118972725);
    noOrders_0_2.set(EncodedSecurityDescLen_39);
    Instrument_39.insert(EncodedSecurityDescLen_39.getString());
    FIX::ExerciseStyle ExerciseStyle_39(0);
    noOrders_0_2.set(ExerciseStyle_39);
    Instrument_39.insert(ExerciseStyle_39.getString());
    FIX::Factor Factor_39;
    Factor_39.setString("2485117");
    noOrders_0_2.set(Factor_39);
    Instrument_39.insert(Factor_39.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_39(false);
    noOrders_0_2.set(FlexProductEligibilityIndicator_39);
    Instrument_39.insert(FlexProductEligibilityIndicator_39.getString());
    FIX::FlexibleIndicator FlexibleIndicator_39(false);
    noOrders_0_2.set(FlexibleIndicator_39);
    Instrument_39.insert(FlexibleIndicator_39.getString());
    FIX::FloorPrice FloorPrice_39;
    FloorPrice_39.setString("19431875");
    noOrders_0_2.set(FloorPrice_39);
    Instrument_39.insert(FloorPrice_39.getString());
    FIX::FlowScheduleType FlowScheduleType_39(3);
    noOrders_0_2.set(FlowScheduleType_39);
    Instrument_39.insert(FlowScheduleType_39.getString());
    FIX::InstrRegistry InstrRegistry_39("STRING_907671926");
    noOrders_0_2.set(InstrRegistry_39);
    Instrument_39.insert(InstrRegistry_39.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_39('1');
    noOrders_0_2.set(InstrmtAssignmentMethod_39);
    Instrument_39.insert(InstrmtAssignmentMethod_39.getString());
    FIX::InterestAccrualDate InterestAccrualDate_39("LOCALMKTDATE_542297231");
    noOrders_0_2.set(InterestAccrualDate_39);
    Instrument_39.insert(InterestAccrualDate_39.getString());
    FIX::IssueDate IssueDate_39("LOCALMKTDATE_1477574077");
    noOrders_0_2.set(IssueDate_39);
    Instrument_39.insert(IssueDate_39.getString());
    FIX::Issuer Issuer_39("STRING_1539486725");
    noOrders_0_2.set(Issuer_39);
    Instrument_39.insert(Issuer_39.getString());
    FIX::ListMethod ListMethod_39(1);
    noOrders_0_2.set(ListMethod_39);
    Instrument_39.insert(ListMethod_39.getString());
    FIX::LocaleOfIssue LocaleOfIssue_39("STRING_420324672");
    noOrders_0_2.set(LocaleOfIssue_39);
    Instrument_39.insert(LocaleOfIssue_39.getString());
    FIX::MaturityDate MaturityDate_39("LOCALMKTDATE_1255388964");
    noOrders_0_2.set(MaturityDate_39);
    Instrument_39.insert(MaturityDate_39.getString());
    FIX::MaturityMonthYear MaturityMonthYear_39("MONTHYEAR_388512450");
    noOrders_0_2.set(MaturityMonthYear_39);
    Instrument_39.insert(MaturityMonthYear_39.getString());
    FIX::MaturityTime MaturityTime_39("TZTIMEONLY_1951530787");
    noOrders_0_2.set(MaturityTime_39);
    Instrument_39.insert(MaturityTime_39.getString());
    FIX::MinPriceIncrement MinPriceIncrement_39;
    MinPriceIncrement_39.setString("2842010");
    noOrders_0_2.set(MinPriceIncrement_39);
    Instrument_39.insert(MinPriceIncrement_39.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_39;
    MinPriceIncrementAmount_39.setString("15860455");
    noOrders_0_2.set(MinPriceIncrementAmount_39);
    Instrument_39.insert(MinPriceIncrementAmount_39.getString());
    FIX::NTPositionLimit NTPositionLimit_39(1795440890);
    noOrders_0_2.set(NTPositionLimit_39);
    Instrument_39.insert(NTPositionLimit_39.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_39;
    NotionalPercentageOutstanding_39.setString("90.290000");
    noOrders_0_2.set(NotionalPercentageOutstanding_39);
    Instrument_39.insert(NotionalPercentageOutstanding_39.getString());
    FIX::OptAttribute OptAttribute_39('1');
    noOrders_0_2.set(OptAttribute_39);
    Instrument_39.insert(OptAttribute_39.getString());
    FIX::OptPayoutAmount OptPayoutAmount_39;
    OptPayoutAmount_39.setString("10034164");
    noOrders_0_2.set(OptPayoutAmount_39);
    Instrument_39.insert(OptPayoutAmount_39.getString());
    FIX::OptPayoutType OptPayoutType_39(3);
    noOrders_0_2.set(OptPayoutType_39);
    Instrument_39.insert(OptPayoutType_39.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_39;
    OriginalNotionalPercentageOutstanding_39.setString("66.500000");
    noOrders_0_2.set(OriginalNotionalPercentageOutstanding_39);
    Instrument_39.insert(OriginalNotionalPercentageOutstanding_39.getString());
    FIX::Pool Pool_39("STRING_286820111");
    noOrders_0_2.set(Pool_39);
    Instrument_39.insert(Pool_39.getString());
    FIX::PositionLimit PositionLimit_39(927922348);
    noOrders_0_2.set(PositionLimit_39);
    Instrument_39.insert(PositionLimit_39.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_39("STRING_STD");
    noOrders_0_2.set(PriceQuoteMethod_39);
    Instrument_39.insert(PriceQuoteMethod_39.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_39("STRING_344839387");
    noOrders_0_2.set(PriceUnitOfMeasure_39);
    Instrument_39.insert(PriceUnitOfMeasure_39.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_39;
    PriceUnitOfMeasureQty_39.setString("20075192");
    noOrders_0_2.set(PriceUnitOfMeasureQty_39);
    Instrument_39.insert(PriceUnitOfMeasureQty_39.getString());
    FIX::Product Product_41(11);
    noOrders_0_2.set(Product_41);
    Instrument_39.insert(Product_41.getString());
    FIX::ProductComplex ProductComplex_39("STRING_463812113");
    noOrders_0_2.set(ProductComplex_39);
    Instrument_39.insert(ProductComplex_39.getString());
    FIX::PutOrCall PutOrCall_39(1);
    noOrders_0_2.set(PutOrCall_39);
    Instrument_39.insert(PutOrCall_39.getString());
    FIX::RedemptionDate RedemptionDate_39("LOCALMKTDATE_1681387439");
    noOrders_0_2.set(RedemptionDate_39);
    Instrument_39.insert(RedemptionDate_39.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_39("STRING_192882850");
    noOrders_0_2.set(RepoCollateralSecurityType_39);
    Instrument_39.insert(RepoCollateralSecurityType_39.getString());
    FIX::RepurchaseRate RepurchaseRate_39;
    RepurchaseRate_39.setString("83.760000");
    noOrders_0_2.set(RepurchaseRate_39);
    Instrument_39.insert(RepurchaseRate_39.getString());
    FIX::RepurchaseTerm RepurchaseTerm_39(1477091349);
    noOrders_0_2.set(RepurchaseTerm_39);
    Instrument_39.insert(RepurchaseTerm_39.getString());
    FIX::RestructuringType RestructuringType_39("STRING_XR");
    noOrders_0_2.set(RestructuringType_39);
    Instrument_39.insert(RestructuringType_39.getString());
    FIX::SecurityDesc SecurityDesc_39("STRING_1469950302");
    noOrders_0_2.set(SecurityDesc_39);
    Instrument_39.insert(SecurityDesc_39.getString());
    FIX::SecurityExchange SecurityExchange_39("EXCHANGE_519667119");
    noOrders_0_2.set(SecurityExchange_39);
    Instrument_39.insert(SecurityExchange_39.getString());
    FIX::SecurityGroup SecurityGroup_39("STRING_2056810934");
    noOrders_0_2.set(SecurityGroup_39);
    Instrument_39.insert(SecurityGroup_39.getString());
    FIX::SecurityID SecurityID_39("STRING_800040731");
    noOrders_0_2.set(SecurityID_39);
    Instrument_39.insert(SecurityID_39.getString());
    FIX::SecurityIDSource SecurityIDSource_39("STRING_1");
    noOrders_0_2.set(SecurityIDSource_39);
    Instrument_39.insert(SecurityIDSource_39.getString());
    FIX::SecurityStatus SecurityStatus_39("STRING_2");
    noOrders_0_2.set(SecurityStatus_39);
    Instrument_39.insert(SecurityStatus_39.getString());
    FIX::SecuritySubType SecuritySubType_40("STRING_1220365403");
    noOrders_0_2.set(SecuritySubType_40);
    Instrument_39.insert(SecuritySubType_40.getString());
    FIX::SecurityType SecurityType_41("STRING_TAN");
    noOrders_0_2.set(SecurityType_41);
    Instrument_39.insert(SecurityType_41.getString());
    FIX::Seniority Seniority_39("STRING_SR");
    noOrders_0_2.set(Seniority_39);
    Instrument_39.insert(Seniority_39.getString());
    FIX::SettlMethod SettlMethod_39('P');
    noOrders_0_2.set(SettlMethod_39);
    Instrument_39.insert(SettlMethod_39.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_39("STRING_1451260201");
    noOrders_0_2.set(SettleOnOpenFlag_39);
    Instrument_39.insert(SettleOnOpenFlag_39.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_39("STRING_692088053");
    noOrders_0_2.set(StateOrProvinceOfIssue_39);
    Instrument_39.insert(StateOrProvinceOfIssue_39.getString());
    FIX::StrikeCurrency StrikeCurrency_39("GBP");
    noOrders_0_2.set(StrikeCurrency_39);
    Instrument_39.insert(StrikeCurrency_39.getString());
    FIX::StrikeMultiplier StrikeMultiplier_39;
    StrikeMultiplier_39.setString("19686378");
    noOrders_0_2.set(StrikeMultiplier_39);
    Instrument_39.insert(StrikeMultiplier_39.getString());
    FIX::StrikePrice StrikePrice_39;
    StrikePrice_39.setString("16757862");
    noOrders_0_2.set(StrikePrice_39);
    Instrument_39.insert(StrikePrice_39.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_39(5);
    noOrders_0_2.set(StrikePriceBoundaryMethod_39);
    Instrument_39.insert(StrikePriceBoundaryMethod_39.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_39;
    StrikePriceBoundaryPrecision_39.setString("8.450000");
    noOrders_0_2.set(StrikePriceBoundaryPrecision_39);
    Instrument_39.insert(StrikePriceBoundaryPrecision_39.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_39(4);
    noOrders_0_2.set(StrikePriceDeterminationMethod_39);
    Instrument_39.insert(StrikePriceDeterminationMethod_39.getString());
    FIX::StrikeValue StrikeValue_39;
    StrikeValue_39.setString("20537964");
    noOrders_0_2.set(StrikeValue_39);
    Instrument_39.insert(StrikeValue_39.getString());
    FIX::Symbol Symbol_39("STRING_1358431205");
    noOrders_0_2.set(Symbol_39);
    Instrument_39.insert(Symbol_39.getString());
    FIX::SymbolSfx SymbolSfx_39("STRING_CD");
    noOrders_0_2.set(SymbolSfx_39);
    Instrument_39.insert(SymbolSfx_39.getString());
    FIX::TimeUnit TimeUnit_39("STRING_Mo");
    noOrders_0_2.set(TimeUnit_39);
    Instrument_39.insert(TimeUnit_39.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_39(2);
    noOrders_0_2.set(UnderlyingPriceDeterminationMethod_39);
    Instrument_39.insert(UnderlyingPriceDeterminationMethod_39.getString());
    FIX::UnitOfMeasure UnitOfMeasure_39("STRING_USD");
    noOrders_0_2.set(UnitOfMeasure_39);
    Instrument_39.insert(UnitOfMeasure_39.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_39;
    UnitOfMeasureQty_39.setString("19783614");
    noOrders_0_2.set(UnitOfMeasureQty_39);
    Instrument_39.insert(UnitOfMeasureQty_39.getString());
    FIX::ValuationMethod ValuationMethod_39("STRING_FUT");
    noOrders_0_2.set(ValuationMethod_39);
    Instrument_39.insert(ValuationMethod_39.getString());
    all_values.push_back(Instrument_39);

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::NewOrderList::NoOrders::NoComplexEvents noComplexEvents_2_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_79;
      FIX::ComplexEventCondition ComplexEventCondition_79(1);
      noComplexEvents_2_1_0.set(ComplexEventCondition_79);
      ComplexEvents_NoComplexEvents_79.insert(ComplexEventCondition_79.getString());
      FIX::ComplexEventPrice ComplexEventPrice_79;
      ComplexEventPrice_79.setString("16548183");
      noComplexEvents_2_1_0.set(ComplexEventPrice_79);
      ComplexEvents_NoComplexEvents_79.insert(ComplexEventPrice_79.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_79(1);
      noComplexEvents_2_1_0.set(ComplexEventPriceBoundaryMethod_79);
      ComplexEvents_NoComplexEvents_79.insert(ComplexEventPriceBoundaryMethod_79.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_79;
      ComplexEventPriceBoundaryPrecision_79.setString("65.280000");
      noComplexEvents_2_1_0.set(ComplexEventPriceBoundaryPrecision_79);
      ComplexEvents_NoComplexEvents_79.insert(ComplexEventPriceBoundaryPrecision_79.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_79(1);
      noComplexEvents_2_1_0.set(ComplexEventPriceTimeType_79);
      ComplexEvents_NoComplexEvents_79.insert(ComplexEventPriceTimeType_79.getString());
      FIX::ComplexEventType ComplexEventType_79(7);
      noComplexEvents_2_1_0.set(ComplexEventType_79);
      ComplexEvents_NoComplexEvents_79.insert(ComplexEventType_79.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_79;
      ComplexOptPayoutAmount_79.setString("5156636");
      noComplexEvents_2_1_0.set(ComplexOptPayoutAmount_79);
      ComplexEvents_NoComplexEvents_79.insert(ComplexOptPayoutAmount_79.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_79);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_169;
        FIX::ComplexEventEndDate ComplexEventEndDate_169(FIX::UTCTIMESTAMP(7, 34, 8, 26, 42001));
        noComplexEventDates_2_0_2_0.set(ComplexEventEndDate_169);
        ComplexEventDates_NoComplexEventDates_169.insert(ComplexEventEndDate_169.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_169(FIX::UTCTIMESTAMP(5, 36, 19, 25, 22010));
        noComplexEventDates_2_0_2_0.set(ComplexEventStartDate_169);
        ComplexEventDates_NoComplexEventDates_169.insert(ComplexEventStartDate_169.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_169);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_337;
          FIX::ComplexEventEndTime ComplexEventEndTime_337(FIX::UTCTIMEONLY(21, 47, 24));
          noComplexEventTimes_2_0_0_3_0.set(ComplexEventEndTime_337);
          ComplexEventTimes_NoComplexEventTimes_337.insert(ComplexEventEndTime_337.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_337(FIX::UTCTIMEONLY(5, 41, 30));
          noComplexEventTimes_2_0_0_3_0.set(ComplexEventStartTime_337);
          ComplexEventTimes_NoComplexEventTimes_337.insert(ComplexEventStartTime_337.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_337);

          noComplexEventDates_2_0_2_0.addGroup(noComplexEventTimes_2_0_0_3_0);
        }
        noComplexEvents_2_1_0.addGroup(noComplexEventDates_2_0_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_170;
        FIX::ComplexEventEndDate ComplexEventEndDate_170(FIX::UTCTIMESTAMP(23, 50, 23, 16, 62013));
        noComplexEventDates_2_0_2_1.set(ComplexEventEndDate_170);
        ComplexEventDates_NoComplexEventDates_170.insert(ComplexEventEndDate_170.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_170(FIX::UTCTIMESTAMP(12, 43, 3, 20, 62004));
        noComplexEventDates_2_0_2_1.set(ComplexEventStartDate_170);
        ComplexEventDates_NoComplexEventDates_170.insert(ComplexEventStartDate_170.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_170);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_338;
          FIX::ComplexEventEndTime ComplexEventEndTime_338(FIX::UTCTIMEONLY(7, 2, 21));
          noComplexEventTimes_2_0_1_3_0.set(ComplexEventEndTime_338);
          ComplexEventTimes_NoComplexEventTimes_338.insert(ComplexEventEndTime_338.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_338(FIX::UTCTIMEONLY(16, 55, 14));
          noComplexEventTimes_2_0_1_3_0.set(ComplexEventStartTime_338);
          ComplexEventTimes_NoComplexEventTimes_338.insert(ComplexEventStartTime_338.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_338);

          noComplexEventDates_2_0_2_1.addGroup(noComplexEventTimes_2_0_1_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_339;
          FIX::ComplexEventEndTime ComplexEventEndTime_339(FIX::UTCTIMEONLY(8, 1, 19));
          noComplexEventTimes_2_0_1_3_1.set(ComplexEventEndTime_339);
          ComplexEventTimes_NoComplexEventTimes_339.insert(ComplexEventEndTime_339.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_339(FIX::UTCTIMEONLY(18, 52, 19));
          noComplexEventTimes_2_0_1_3_1.set(ComplexEventStartTime_339);
          ComplexEventTimes_NoComplexEventTimes_339.insert(ComplexEventStartTime_339.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_339);

          noComplexEventDates_2_0_2_1.addGroup(noComplexEventTimes_2_0_1_3_1);
        }
        noComplexEvents_2_1_0.addGroup(noComplexEventDates_2_0_2_1);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_0_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_171;
        FIX::ComplexEventEndDate ComplexEventEndDate_171(FIX::UTCTIMESTAMP(15, 9, 37, 19, 42012));
        noComplexEventDates_2_0_2_2.set(ComplexEventEndDate_171);
        ComplexEventDates_NoComplexEventDates_171.insert(ComplexEventEndDate_171.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_171(FIX::UTCTIMESTAMP(3, 7, 4, 7, 62015));
        noComplexEventDates_2_0_2_2.set(ComplexEventStartDate_171);
        ComplexEventDates_NoComplexEventDates_171.insert(ComplexEventStartDate_171.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_171);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_340;
          FIX::ComplexEventEndTime ComplexEventEndTime_340(FIX::UTCTIMEONLY(2, 44, 7));
          noComplexEventTimes_2_0_2_3_0.set(ComplexEventEndTime_340);
          ComplexEventTimes_NoComplexEventTimes_340.insert(ComplexEventEndTime_340.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_340(FIX::UTCTIMEONLY(4, 55, 29));
          noComplexEventTimes_2_0_2_3_0.set(ComplexEventStartTime_340);
          ComplexEventTimes_NoComplexEventTimes_340.insert(ComplexEventStartTime_340.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_340);

          noComplexEventDates_2_0_2_2.addGroup(noComplexEventTimes_2_0_2_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_341;
          FIX::ComplexEventEndTime ComplexEventEndTime_341(FIX::UTCTIMEONLY(3, 22, 46));
          noComplexEventTimes_2_0_2_3_1.set(ComplexEventEndTime_341);
          ComplexEventTimes_NoComplexEventTimes_341.insert(ComplexEventEndTime_341.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_341(FIX::UTCTIMEONLY(21, 31, 47));
          noComplexEventTimes_2_0_2_3_1.set(ComplexEventStartTime_341);
          ComplexEventTimes_NoComplexEventTimes_341.insert(ComplexEventStartTime_341.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_341);

          noComplexEventDates_2_0_2_2.addGroup(noComplexEventTimes_2_0_2_3_1);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_342;
          FIX::ComplexEventEndTime ComplexEventEndTime_342(FIX::UTCTIMEONLY(2, 57, 15));
          noComplexEventTimes_2_0_2_3_2.set(ComplexEventEndTime_342);
          ComplexEventTimes_NoComplexEventTimes_342.insert(ComplexEventEndTime_342.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_342(FIX::UTCTIMEONLY(12, 40, 55));
          noComplexEventTimes_2_0_2_3_2.set(ComplexEventStartTime_342);
          ComplexEventTimes_NoComplexEventTimes_342.insert(ComplexEventStartTime_342.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_342);

          noComplexEventDates_2_0_2_2.addGroup(noComplexEventTimes_2_0_2_3_2);
        }
        noComplexEvents_2_1_0.addGroup(noComplexEventDates_2_0_2_2);
      }
      noOrders_0_2.addGroup(noComplexEvents_2_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoComplexEvents noComplexEvents_2_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_80;
      FIX::ComplexEventCondition ComplexEventCondition_80(2);
      noComplexEvents_2_1_1.set(ComplexEventCondition_80);
      ComplexEvents_NoComplexEvents_80.insert(ComplexEventCondition_80.getString());
      FIX::ComplexEventPrice ComplexEventPrice_80;
      ComplexEventPrice_80.setString("17689928");
      noComplexEvents_2_1_1.set(ComplexEventPrice_80);
      ComplexEvents_NoComplexEvents_80.insert(ComplexEventPrice_80.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_80(2);
      noComplexEvents_2_1_1.set(ComplexEventPriceBoundaryMethod_80);
      ComplexEvents_NoComplexEvents_80.insert(ComplexEventPriceBoundaryMethod_80.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_80;
      ComplexEventPriceBoundaryPrecision_80.setString("82.540000");
      noComplexEvents_2_1_1.set(ComplexEventPriceBoundaryPrecision_80);
      ComplexEvents_NoComplexEvents_80.insert(ComplexEventPriceBoundaryPrecision_80.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_80(3);
      noComplexEvents_2_1_1.set(ComplexEventPriceTimeType_80);
      ComplexEvents_NoComplexEvents_80.insert(ComplexEventPriceTimeType_80.getString());
      FIX::ComplexEventType ComplexEventType_80(8);
      noComplexEvents_2_1_1.set(ComplexEventType_80);
      ComplexEvents_NoComplexEvents_80.insert(ComplexEventType_80.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_80;
      ComplexOptPayoutAmount_80.setString("18758395");
      noComplexEvents_2_1_1.set(ComplexOptPayoutAmount_80);
      ComplexEvents_NoComplexEvents_80.insert(ComplexOptPayoutAmount_80.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_80);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_172;
        FIX::ComplexEventEndDate ComplexEventEndDate_172(FIX::UTCTIMESTAMP(20, 34, 16, 0, 62013));
        noComplexEventDates_2_1_2_0.set(ComplexEventEndDate_172);
        ComplexEventDates_NoComplexEventDates_172.insert(ComplexEventEndDate_172.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_172(FIX::UTCTIMESTAMP(13, 51, 9, 9, 12016));
        noComplexEventDates_2_1_2_0.set(ComplexEventStartDate_172);
        ComplexEventDates_NoComplexEventDates_172.insert(ComplexEventStartDate_172.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_172);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_343;
          FIX::ComplexEventEndTime ComplexEventEndTime_343(FIX::UTCTIMEONLY(7, 6, 26));
          noComplexEventTimes_2_1_0_3_0.set(ComplexEventEndTime_343);
          ComplexEventTimes_NoComplexEventTimes_343.insert(ComplexEventEndTime_343.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_343(FIX::UTCTIMEONLY(10, 58, 36));
          noComplexEventTimes_2_1_0_3_0.set(ComplexEventStartTime_343);
          ComplexEventTimes_NoComplexEventTimes_343.insert(ComplexEventStartTime_343.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_343);

          noComplexEventDates_2_1_2_0.addGroup(noComplexEventTimes_2_1_0_3_0);
        }
        noComplexEvents_2_1_1.addGroup(noComplexEventDates_2_1_2_0);
      }
      noOrders_0_2.addGroup(noComplexEvents_2_1_1);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::NewOrderList::NoOrders::NoEvents noEvents_2_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_81;
      FIX::EventDate EventDate_81("LOCALMKTDATE_1903210666");
      noEvents_2_1_0.set(EventDate_81);
      EvntGrp_NoEvents_81.insert(EventDate_81.getString());
      FIX::EventPx EventPx_81;
      EventPx_81.setString("624052");
      noEvents_2_1_0.set(EventPx_81);
      EvntGrp_NoEvents_81.insert(EventPx_81.getString());
      FIX::EventText EventText_81("STRING_1567503095");
      noEvents_2_1_0.set(EventText_81);
      EvntGrp_NoEvents_81.insert(EventText_81.getString());
      FIX::EventTime EventTime_81(FIX::UTCTIMESTAMP(18, 23, 37, 3, 122010));
      noEvents_2_1_0.set(EventTime_81);
      EvntGrp_NoEvents_81.insert(EventTime_81.getString());
      FIX::EventType EventType_81(99);
      noEvents_2_1_0.set(EventType_81);
      EvntGrp_NoEvents_81.insert(EventType_81.getString());
      all_values.push_back(EvntGrp_NoEvents_81);

      noOrders_0_2.addGroup(noEvents_2_1_0);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::NewOrderList::NoOrders::NoInstrumentParties noInstrumentParties_2_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_72;
      FIX::InstrumentPartyID InstrumentPartyID_72("STRING_708023365");
      noInstrumentParties_2_1_0.set(InstrumentPartyID_72);
      InstrumentParties_NoInstrumentParties_72.insert(InstrumentPartyID_72.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_72('5');
      noInstrumentParties_2_1_0.set(InstrumentPartyIDSource_72);
      InstrumentParties_NoInstrumentParties_72.insert(InstrumentPartyIDSource_72.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_72(235210394);
      noInstrumentParties_2_1_0.set(InstrumentPartyRole_72);
      InstrumentParties_NoInstrumentParties_72.insert(InstrumentPartyRole_72.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_72);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderList::NoOrders::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_142;
        FIX::InstrumentPartySubID InstrumentPartySubID_142("STRING_920553059");
        noInstrumentPartySubIDs_2_0_2_0.set(InstrumentPartySubID_142);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_142.insert(InstrumentPartySubID_142.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_142(605527644);
        noInstrumentPartySubIDs_2_0_2_0.set(InstrumentPartySubIDType_142);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_142.insert(InstrumentPartySubIDType_142.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_142);

        noInstrumentParties_2_1_0.addGroup(noInstrumentPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_143;
        FIX::InstrumentPartySubID InstrumentPartySubID_143("STRING_1098647208");
        noInstrumentPartySubIDs_2_0_2_1.set(InstrumentPartySubID_143);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_143.insert(InstrumentPartySubID_143.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_143(1664422344);
        noInstrumentPartySubIDs_2_0_2_1.set(InstrumentPartySubIDType_143);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_143.insert(InstrumentPartySubIDType_143.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_143);

        noInstrumentParties_2_1_0.addGroup(noInstrumentPartySubIDs_2_0_2_1);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_0_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_144;
        FIX::InstrumentPartySubID InstrumentPartySubID_144("STRING_1572390424");
        noInstrumentPartySubIDs_2_0_2_2.set(InstrumentPartySubID_144);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_144.insert(InstrumentPartySubID_144.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_144(1579800417);
        noInstrumentPartySubIDs_2_0_2_2.set(InstrumentPartySubIDType_144);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_144.insert(InstrumentPartySubIDType_144.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_144);

        noInstrumentParties_2_1_0.addGroup(noInstrumentPartySubIDs_2_0_2_2);
      }
      noOrders_0_2.addGroup(noInstrumentParties_2_1_0);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::NewOrderList::NoOrders::NoSecurityAltID noSecurityAltID_2_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_76;
      FIX::SecurityAltID SecurityAltID_76("STRING_870781311");
      noSecurityAltID_2_1_0.set(SecurityAltID_76);
      SecAltIDGrp_NoSecurityAltID_76.insert(SecurityAltID_76.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_76("STRING_1110193975");
      noSecurityAltID_2_1_0.set(SecurityAltIDSource_76);
      SecAltIDGrp_NoSecurityAltID_76.insert(SecurityAltIDSource_76.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_76);

      noOrders_0_2.addGroup(noSecurityAltID_2_1_0);
    }
    // SecurityXML
    multiset<string> SecurityXML_78;
    FIX::SecurityXML SecurityXML_79("XMLDATA_809037885");
    noOrders_0_2.set(SecurityXML_79);
    FIX::SecurityXMLLen SecurityXMLLen_39(1521568232);
    noOrders_0_2.set(SecurityXMLLen_39);
    FIX::SecurityXMLSchema SecurityXMLSchema_39("STRING_332280729");
    noOrders_0_2.set(SecurityXMLSchema_39);
    SecurityXML_78.insert(SecurityXMLSchema_39.getString());
    all_values.push_back(SecurityXML_78);

    // OrderQtyData
    multiset<string> OrderQtyData_14;
    FIX::CashOrderQty CashOrderQty_14;
    CashOrderQty_14.setString("9432557");
    noOrders_0_2.set(CashOrderQty_14);
    OrderQtyData_14.insert(CashOrderQty_14.getString());
    FIX::OrderPercent OrderPercent_14;
    OrderPercent_14.setString("82.800000");
    noOrders_0_2.set(OrderPercent_14);
    OrderQtyData_14.insert(OrderPercent_14.getString());
    FIX::OrderQty OrderQty_23;
    OrderQty_23.setString("12049055");
    noOrders_0_2.set(OrderQty_23);
    OrderQtyData_14.insert(OrderQty_23.getString());
    FIX::RoundingDirection RoundingDirection_14('1');
    noOrders_0_2.set(RoundingDirection_14);
    OrderQtyData_14.insert(RoundingDirection_14.getString());
    FIX::RoundingModulus RoundingModulus_14;
    RoundingModulus_14.setString("10951635");
    noOrders_0_2.set(RoundingModulus_14);
    OrderQtyData_14.insert(RoundingModulus_14.getString());
    all_values.push_back(OrderQtyData_14);

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::NewOrderList::NoOrders::NoPartyIDs noPartyIDs_2_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_76;
      FIX::PartyID PartyID_76("STRING_634551092");
      noPartyIDs_2_1_0.set(PartyID_76);
      Parties_NoPartyIDs_76.insert(PartyID_76.getString());
      FIX::PartyIDSource PartyIDSource_76('4');
      noPartyIDs_2_1_0.set(PartyIDSource_76);
      Parties_NoPartyIDs_76.insert(PartyIDSource_76.getString());
      FIX::PartyRole PartyRole_76(59);
      noPartyIDs_2_1_0.set(PartyRole_76);
      Parties_NoPartyIDs_76.insert(PartyRole_76.getString());
      all_values.push_back(Parties_NoPartyIDs_76);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::NewOrderList::NoOrders::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_149;
        FIX::PartySubID PartySubID_149("STRING_381430153");
        noPartySubIDs_2_0_2_0.set(PartySubID_149);
        PtysSubGrp_NoPartySubIDs_149.insert(PartySubID_149.getString());
        FIX::PartySubIDType PartySubIDType_149(13);
        noPartySubIDs_2_0_2_0.set(PartySubIDType_149);
        PtysSubGrp_NoPartySubIDs_149.insert(PartySubIDType_149.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_149);

        noPartyIDs_2_1_0.addGroup(noPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_150;
        FIX::PartySubID PartySubID_150("STRING_592002726");
        noPartySubIDs_2_0_2_1.set(PartySubID_150);
        PtysSubGrp_NoPartySubIDs_150.insert(PartySubID_150.getString());
        FIX::PartySubIDType PartySubIDType_150(32);
        noPartySubIDs_2_0_2_1.set(PartySubIDType_150);
        PtysSubGrp_NoPartySubIDs_150.insert(PartySubIDType_150.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_150);

        noPartyIDs_2_1_0.addGroup(noPartySubIDs_2_0_2_1);
      }
      noOrders_0_2.addGroup(noPartyIDs_2_1_0);
    }
    // PegInstructions
    multiset<string> PegInstructions_6;
    FIX::PegLimitType PegLimitType_6(1);
    noOrders_0_2.set(PegLimitType_6);
    PegInstructions_6.insert(PegLimitType_6.getString());
    FIX::PegMoveType PegMoveType_6(1);
    noOrders_0_2.set(PegMoveType_6);
    PegInstructions_6.insert(PegMoveType_6.getString());
    FIX::PegOffsetType PegOffsetType_6(0);
    noOrders_0_2.set(PegOffsetType_6);
    PegInstructions_6.insert(PegOffsetType_6.getString());
    FIX::PegOffsetValue PegOffsetValue_6;
    PegOffsetValue_6.setString("280586");
    noOrders_0_2.set(PegOffsetValue_6);
    PegInstructions_6.insert(PegOffsetValue_6.getString());
    FIX::PegPriceType PegPriceType_6(8);
    noOrders_0_2.set(PegPriceType_6);
    PegInstructions_6.insert(PegPriceType_6.getString());
    FIX::PegRoundDirection PegRoundDirection_6(2);
    noOrders_0_2.set(PegRoundDirection_6);
    PegInstructions_6.insert(PegRoundDirection_6.getString());
    FIX::PegScope PegScope_6(3);
    noOrders_0_2.set(PegScope_6);
    PegInstructions_6.insert(PegScope_6.getString());
    FIX::PegSecurityDesc PegSecurityDesc_6("STRING_1781318798");
    noOrders_0_2.set(PegSecurityDesc_6);
    PegInstructions_6.insert(PegSecurityDesc_6.getString());
    FIX::PegSecurityID PegSecurityID_6("STRING_97579327");
    noOrders_0_2.set(PegSecurityID_6);
    PegInstructions_6.insert(PegSecurityID_6.getString());
    FIX::PegSecurityIDSource PegSecurityIDSource_6("STRING_58493119");
    noOrders_0_2.set(PegSecurityIDSource_6);
    PegInstructions_6.insert(PegSecurityIDSource_6.getString());
    FIX::PegSymbol PegSymbol_6("STRING_1213635567");
    noOrders_0_2.set(PegSymbol_6);
    PegInstructions_6.insert(PegSymbol_6.getString());
    all_values.push_back(PegInstructions_6);

    // PreAllocGrp
    // Group PreAllocGrp.NoAllocs
    {
      FIX50SP2::NewOrderList::NoOrders::NoAllocs noAllocs_2_1_0;
      // PreAllocGrp.NoAllocs
      multiset<string> PreAllocGrp_NoAllocs_16;
      FIX::AllocAccount AllocAccount_28("STRING_929274430");
      noAllocs_2_1_0.set(AllocAccount_28);
      PreAllocGrp_NoAllocs_16.insert(AllocAccount_28.getString());
      FIX::AllocAcctIDSource AllocAcctIDSource_28(176345894);
      noAllocs_2_1_0.set(AllocAcctIDSource_28);
      PreAllocGrp_NoAllocs_16.insert(AllocAcctIDSource_28.getString());
      FIX::AllocQty AllocQty_27;
      AllocQty_27.setString("20952268");
      noAllocs_2_1_0.set(AllocQty_27);
      PreAllocGrp_NoAllocs_16.insert(AllocQty_27.getString());
      FIX::AllocSettlCurrency AllocSettlCurrency_23("CAN");
      noAllocs_2_1_0.set(AllocSettlCurrency_23);
      PreAllocGrp_NoAllocs_16.insert(AllocSettlCurrency_23.getString());
      FIX::IndividualAllocID IndividualAllocID_28("STRING_890998916");
      noAllocs_2_1_0.set(IndividualAllocID_28);
      PreAllocGrp_NoAllocs_16.insert(IndividualAllocID_28.getString());
      all_values.push_back(PreAllocGrp_NoAllocs_16);

      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_2_0_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_76;
        FIX::NestedPartyID NestedPartyID_76("STRING_1713532193");
        noNestedPartyIDs_2_0_2_0.set(NestedPartyID_76);
        NestedParties_NoNestedPartyIDs_76.insert(NestedPartyID_76.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_76('1');
        noNestedPartyIDs_2_0_2_0.set(NestedPartyIDSource_76);
        NestedParties_NoNestedPartyIDs_76.insert(NestedPartyIDSource_76.getString());
        FIX::NestedPartyRole NestedPartyRole_76(283797167);
        noNestedPartyIDs_2_0_2_0.set(NestedPartyRole_76);
        NestedParties_NoNestedPartyIDs_76.insert(NestedPartyRole_76.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_76);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_148;
          FIX::NestedPartySubID NestedPartySubID_148("STRING_77049102");
          noNestedPartySubIDs_2_0_0_3_0.set(NestedPartySubID_148);
          NstdPtysSubGrp_NoNestedPartySubIDs_148.insert(NestedPartySubID_148.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_148(1833254977);
          noNestedPartySubIDs_2_0_0_3_0.set(NestedPartySubIDType_148);
          NstdPtysSubGrp_NoNestedPartySubIDs_148.insert(NestedPartySubIDType_148.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_148);

          noNestedPartyIDs_2_0_2_0.addGroup(noNestedPartySubIDs_2_0_0_3_0);
        }
        noAllocs_2_1_0.addGroup(noNestedPartyIDs_2_0_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_2_0_2_1;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_77;
        FIX::NestedPartyID NestedPartyID_77("STRING_2111757603");
        noNestedPartyIDs_2_0_2_1.set(NestedPartyID_77);
        NestedParties_NoNestedPartyIDs_77.insert(NestedPartyID_77.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_77('1');
        noNestedPartyIDs_2_0_2_1.set(NestedPartyIDSource_77);
        NestedParties_NoNestedPartyIDs_77.insert(NestedPartyIDSource_77.getString());
        FIX::NestedPartyRole NestedPartyRole_77(67201482);
        noNestedPartyIDs_2_0_2_1.set(NestedPartyRole_77);
        NestedParties_NoNestedPartyIDs_77.insert(NestedPartyRole_77.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_77);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_1_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_149;
          FIX::NestedPartySubID NestedPartySubID_149("STRING_418317710");
          noNestedPartySubIDs_2_0_1_3_0.set(NestedPartySubID_149);
          NstdPtysSubGrp_NoNestedPartySubIDs_149.insert(NestedPartySubID_149.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_149(1352764594);
          noNestedPartySubIDs_2_0_1_3_0.set(NestedPartySubIDType_149);
          NstdPtysSubGrp_NoNestedPartySubIDs_149.insert(NestedPartySubIDType_149.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_149);

          noNestedPartyIDs_2_0_2_1.addGroup(noNestedPartySubIDs_2_0_1_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_1_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_150;
          FIX::NestedPartySubID NestedPartySubID_150("STRING_154565560");
          noNestedPartySubIDs_2_0_1_3_1.set(NestedPartySubID_150);
          NstdPtysSubGrp_NoNestedPartySubIDs_150.insert(NestedPartySubID_150.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_150(1718343802);
          noNestedPartySubIDs_2_0_1_3_1.set(NestedPartySubIDType_150);
          NstdPtysSubGrp_NoNestedPartySubIDs_150.insert(NestedPartySubIDType_150.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_150);

          noNestedPartyIDs_2_0_2_1.addGroup(noNestedPartySubIDs_2_0_1_3_1);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_1_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_151;
          FIX::NestedPartySubID NestedPartySubID_151("STRING_1012852166");
          noNestedPartySubIDs_2_0_1_3_2.set(NestedPartySubID_151);
          NstdPtysSubGrp_NoNestedPartySubIDs_151.insert(NestedPartySubID_151.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_151(182624258);
          noNestedPartySubIDs_2_0_1_3_2.set(NestedPartySubIDType_151);
          NstdPtysSubGrp_NoNestedPartySubIDs_151.insert(NestedPartySubIDType_151.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_151);

          noNestedPartyIDs_2_0_2_1.addGroup(noNestedPartySubIDs_2_0_1_3_2);
        }
        noAllocs_2_1_0.addGroup(noNestedPartyIDs_2_0_2_1);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_2_0_2_2;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_78;
        FIX::NestedPartyID NestedPartyID_78("STRING_253531744");
        noNestedPartyIDs_2_0_2_2.set(NestedPartyID_78);
        NestedParties_NoNestedPartyIDs_78.insert(NestedPartyID_78.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_78('1');
        noNestedPartyIDs_2_0_2_2.set(NestedPartyIDSource_78);
        NestedParties_NoNestedPartyIDs_78.insert(NestedPartyIDSource_78.getString());
        FIX::NestedPartyRole NestedPartyRole_78(816210601);
        noNestedPartyIDs_2_0_2_2.set(NestedPartyRole_78);
        NestedParties_NoNestedPartyIDs_78.insert(NestedPartyRole_78.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_78);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_152;
          FIX::NestedPartySubID NestedPartySubID_152("STRING_1691072125");
          noNestedPartySubIDs_2_0_2_3_0.set(NestedPartySubID_152);
          NstdPtysSubGrp_NoNestedPartySubIDs_152.insert(NestedPartySubID_152.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_152(874703720);
          noNestedPartySubIDs_2_0_2_3_0.set(NestedPartySubIDType_152);
          NstdPtysSubGrp_NoNestedPartySubIDs_152.insert(NestedPartySubIDType_152.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_152);

          noNestedPartyIDs_2_0_2_2.addGroup(noNestedPartySubIDs_2_0_2_3_0);
        }
        noAllocs_2_1_0.addGroup(noNestedPartyIDs_2_0_2_2);
      }
      noOrders_0_2.addGroup(noAllocs_2_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoAllocs noAllocs_2_1_1;
      // PreAllocGrp.NoAllocs
      multiset<string> PreAllocGrp_NoAllocs_17;
      FIX::AllocAccount AllocAccount_29("STRING_1101002461");
      noAllocs_2_1_1.set(AllocAccount_29);
      PreAllocGrp_NoAllocs_17.insert(AllocAccount_29.getString());
      FIX::AllocAcctIDSource AllocAcctIDSource_29(829777432);
      noAllocs_2_1_1.set(AllocAcctIDSource_29);
      PreAllocGrp_NoAllocs_17.insert(AllocAcctIDSource_29.getString());
      FIX::AllocQty AllocQty_28;
      AllocQty_28.setString("18039781");
      noAllocs_2_1_1.set(AllocQty_28);
      PreAllocGrp_NoAllocs_17.insert(AllocQty_28.getString());
      FIX::AllocSettlCurrency AllocSettlCurrency_24("JPY");
      noAllocs_2_1_1.set(AllocSettlCurrency_24);
      PreAllocGrp_NoAllocs_17.insert(AllocSettlCurrency_24.getString());
      FIX::IndividualAllocID IndividualAllocID_29("STRING_2107337165");
      noAllocs_2_1_1.set(IndividualAllocID_29);
      PreAllocGrp_NoAllocs_17.insert(IndividualAllocID_29.getString());
      all_values.push_back(PreAllocGrp_NoAllocs_17);

      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_2_1_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_79;
        FIX::NestedPartyID NestedPartyID_79("STRING_1668519540");
        noNestedPartyIDs_2_1_2_0.set(NestedPartyID_79);
        NestedParties_NoNestedPartyIDs_79.insert(NestedPartyID_79.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_79('1');
        noNestedPartyIDs_2_1_2_0.set(NestedPartyIDSource_79);
        NestedParties_NoNestedPartyIDs_79.insert(NestedPartyIDSource_79.getString());
        FIX::NestedPartyRole NestedPartyRole_79(1352023523);
        noNestedPartyIDs_2_1_2_0.set(NestedPartyRole_79);
        NestedParties_NoNestedPartyIDs_79.insert(NestedPartyRole_79.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_79);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_153;
          FIX::NestedPartySubID NestedPartySubID_153("STRING_1579767980");
          noNestedPartySubIDs_2_1_0_3_0.set(NestedPartySubID_153);
          NstdPtysSubGrp_NoNestedPartySubIDs_153.insert(NestedPartySubID_153.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_153(1542997085);
          noNestedPartySubIDs_2_1_0_3_0.set(NestedPartySubIDType_153);
          NstdPtysSubGrp_NoNestedPartySubIDs_153.insert(NestedPartySubIDType_153.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_153);

          noNestedPartyIDs_2_1_2_0.addGroup(noNestedPartySubIDs_2_1_0_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_154;
          FIX::NestedPartySubID NestedPartySubID_154("STRING_1188066652");
          noNestedPartySubIDs_2_1_0_3_1.set(NestedPartySubID_154);
          NstdPtysSubGrp_NoNestedPartySubIDs_154.insert(NestedPartySubID_154.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_154(1265539310);
          noNestedPartySubIDs_2_1_0_3_1.set(NestedPartySubIDType_154);
          NstdPtysSubGrp_NoNestedPartySubIDs_154.insert(NestedPartySubIDType_154.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_154);

          noNestedPartyIDs_2_1_2_0.addGroup(noNestedPartySubIDs_2_1_0_3_1);
        }
        noAllocs_2_1_1.addGroup(noNestedPartyIDs_2_1_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_2_1_2_1;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_80;
        FIX::NestedPartyID NestedPartyID_80("STRING_1507271041");
        noNestedPartyIDs_2_1_2_1.set(NestedPartyID_80);
        NestedParties_NoNestedPartyIDs_80.insert(NestedPartyID_80.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_80('1');
        noNestedPartyIDs_2_1_2_1.set(NestedPartyIDSource_80);
        NestedParties_NoNestedPartyIDs_80.insert(NestedPartyIDSource_80.getString());
        FIX::NestedPartyRole NestedPartyRole_80(1332740792);
        noNestedPartyIDs_2_1_2_1.set(NestedPartyRole_80);
        NestedParties_NoNestedPartyIDs_80.insert(NestedPartyRole_80.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_80);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_1_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_155;
          FIX::NestedPartySubID NestedPartySubID_155("STRING_1432699347");
          noNestedPartySubIDs_2_1_1_3_0.set(NestedPartySubID_155);
          NstdPtysSubGrp_NoNestedPartySubIDs_155.insert(NestedPartySubID_155.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_155(538021739);
          noNestedPartySubIDs_2_1_1_3_0.set(NestedPartySubIDType_155);
          NstdPtysSubGrp_NoNestedPartySubIDs_155.insert(NestedPartySubIDType_155.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_155);

          noNestedPartyIDs_2_1_2_1.addGroup(noNestedPartySubIDs_2_1_1_3_0);
        }
        noAllocs_2_1_1.addGroup(noNestedPartyIDs_2_1_2_1);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_2_1_2_2;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_81;
        FIX::NestedPartyID NestedPartyID_81("STRING_2023553857");
        noNestedPartyIDs_2_1_2_2.set(NestedPartyID_81);
        NestedParties_NoNestedPartyIDs_81.insert(NestedPartyID_81.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_81('1');
        noNestedPartyIDs_2_1_2_2.set(NestedPartyIDSource_81);
        NestedParties_NoNestedPartyIDs_81.insert(NestedPartyIDSource_81.getString());
        FIX::NestedPartyRole NestedPartyRole_81(1550873905);
        noNestedPartyIDs_2_1_2_2.set(NestedPartyRole_81);
        NestedParties_NoNestedPartyIDs_81.insert(NestedPartyRole_81.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_81);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_2_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_156;
          FIX::NestedPartySubID NestedPartySubID_156("STRING_1257091245");
          noNestedPartySubIDs_2_1_2_3_0.set(NestedPartySubID_156);
          NstdPtysSubGrp_NoNestedPartySubIDs_156.insert(NestedPartySubID_156.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_156(996883055);
          noNestedPartySubIDs_2_1_2_3_0.set(NestedPartySubIDType_156);
          NstdPtysSubGrp_NoNestedPartySubIDs_156.insert(NestedPartySubIDType_156.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_156);

          noNestedPartyIDs_2_1_2_2.addGroup(noNestedPartySubIDs_2_1_2_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_2_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_157;
          FIX::NestedPartySubID NestedPartySubID_157("STRING_874905068");
          noNestedPartySubIDs_2_1_2_3_1.set(NestedPartySubID_157);
          NstdPtysSubGrp_NoNestedPartySubIDs_157.insert(NestedPartySubID_157.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_157(1144458139);
          noNestedPartySubIDs_2_1_2_3_1.set(NestedPartySubIDType_157);
          NstdPtysSubGrp_NoNestedPartySubIDs_157.insert(NestedPartySubIDType_157.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_157);

          noNestedPartyIDs_2_1_2_2.addGroup(noNestedPartySubIDs_2_1_2_3_1);
        }
        noAllocs_2_1_1.addGroup(noNestedPartyIDs_2_1_2_2);
      }
      noOrders_0_2.addGroup(noAllocs_2_1_1);
    }
    // SpreadOrBenchmarkCurveData
    multiset<string> SpreadOrBenchmarkCurveData_18;
    FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_18("JPY");
    noOrders_0_2.set(BenchmarkCurveCurrency_18);
    SpreadOrBenchmarkCurveData_18.insert(BenchmarkCurveCurrency_18.getString());
    FIX::BenchmarkCurveName BenchmarkCurveName_18("STRING_EONIA");
    noOrders_0_2.set(BenchmarkCurveName_18);
    SpreadOrBenchmarkCurveData_18.insert(BenchmarkCurveName_18.getString());
    FIX::BenchmarkCurvePoint BenchmarkCurvePoint_18("STRING_1370248965");
    noOrders_0_2.set(BenchmarkCurvePoint_18);
    SpreadOrBenchmarkCurveData_18.insert(BenchmarkCurvePoint_18.getString());
    FIX::BenchmarkPrice BenchmarkPrice_18;
    BenchmarkPrice_18.setString("14061032");
    noOrders_0_2.set(BenchmarkPrice_18);
    SpreadOrBenchmarkCurveData_18.insert(BenchmarkPrice_18.getString());
    FIX::BenchmarkPriceType BenchmarkPriceType_18(1375325307);
    noOrders_0_2.set(BenchmarkPriceType_18);
    SpreadOrBenchmarkCurveData_18.insert(BenchmarkPriceType_18.getString());
    FIX::BenchmarkSecurityID BenchmarkSecurityID_18("STRING_285941");
    noOrders_0_2.set(BenchmarkSecurityID_18);
    SpreadOrBenchmarkCurveData_18.insert(BenchmarkSecurityID_18.getString());
    FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_18("STRING_1365956808");
    noOrders_0_2.set(BenchmarkSecurityIDSource_18);
    SpreadOrBenchmarkCurveData_18.insert(BenchmarkSecurityIDSource_18.getString());
    FIX::Spread Spread_18;
    Spread_18.setString("10138166");
    noOrders_0_2.set(Spread_18);
    SpreadOrBenchmarkCurveData_18.insert(Spread_18.getString());
    all_values.push_back(SpreadOrBenchmarkCurveData_18);

    // Stipulations
    // Group Stipulations.NoStipulations
    {
      FIX50SP2::NewOrderList::NoOrders::NoStipulations noStipulations_2_1_0;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_30;
      FIX::StipulationType StipulationType_30("STRING_POOL");
      noStipulations_2_1_0.set(StipulationType_30);
      Stipulations_NoStipulations_30.insert(StipulationType_30.getString());
      FIX::StipulationValue StipulationValue_30("STRING_218356512");
      noStipulations_2_1_0.set(StipulationValue_30);
      Stipulations_NoStipulations_30.insert(StipulationValue_30.getString());
      all_values.push_back(Stipulations_NoStipulations_30);

      noOrders_0_2.addGroup(noStipulations_2_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoStipulations noStipulations_2_1_1;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_31;
      FIX::StipulationType StipulationType_31("STRING_PIECES");
      noStipulations_2_1_1.set(StipulationType_31);
      Stipulations_NoStipulations_31.insert(StipulationType_31.getString());
      FIX::StipulationValue StipulationValue_31("STRING_2094211954");
      noStipulations_2_1_1.set(StipulationValue_31);
      Stipulations_NoStipulations_31.insert(StipulationValue_31.getString());
      all_values.push_back(Stipulations_NoStipulations_31);

      noOrders_0_2.addGroup(noStipulations_2_1_1);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoStipulations noStipulations_2_1_2;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_32;
      FIX::StipulationType StipulationType_32("STRING_PSA");
      noStipulations_2_1_2.set(StipulationType_32);
      Stipulations_NoStipulations_32.insert(StipulationType_32.getString());
      FIX::StipulationValue StipulationValue_32("STRING_1820406035");
      noStipulations_2_1_2.set(StipulationValue_32);
      Stipulations_NoStipulations_32.insert(StipulationValue_32.getString());
      all_values.push_back(Stipulations_NoStipulations_32);

      noOrders_0_2.addGroup(noStipulations_2_1_2);
    }
    // StrategyParametersGrp
    // Group StrategyParametersGrp.NoStrategyParameters
    {
      FIX50SP2::NewOrderList::NoOrders::NoStrategyParameters noStrategyParameters_2_1_0;
      // StrategyParametersGrp.NoStrategyParameters
      multiset<string> StrategyParametersGrp_NoStrategyParameters_15;
      FIX::StrategyParameterName StrategyParameterName_15("STRING_1121140991");
      noStrategyParameters_2_1_0.set(StrategyParameterName_15);
      StrategyParametersGrp_NoStrategyParameters_15.insert(StrategyParameterName_15.getString());
      FIX::StrategyParameterType StrategyParameterType_15(23);
      noStrategyParameters_2_1_0.set(StrategyParameterType_15);
      StrategyParametersGrp_NoStrategyParameters_15.insert(StrategyParameterType_15.getString());
      FIX::StrategyParameterValue StrategyParameterValue_15("STRING_397524760");
      noStrategyParameters_2_1_0.set(StrategyParameterValue_15);
      StrategyParametersGrp_NoStrategyParameters_15.insert(StrategyParameterValue_15.getString());
      all_values.push_back(StrategyParametersGrp_NoStrategyParameters_15);

      noOrders_0_2.addGroup(noStrategyParameters_2_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoStrategyParameters noStrategyParameters_2_1_1;
      // StrategyParametersGrp.NoStrategyParameters
      multiset<string> StrategyParametersGrp_NoStrategyParameters_16;
      FIX::StrategyParameterName StrategyParameterName_16("STRING_842645640");
      noStrategyParameters_2_1_1.set(StrategyParameterName_16);
      StrategyParametersGrp_NoStrategyParameters_16.insert(StrategyParameterName_16.getString());
      FIX::StrategyParameterType StrategyParameterType_16(17);
      noStrategyParameters_2_1_1.set(StrategyParameterType_16);
      StrategyParametersGrp_NoStrategyParameters_16.insert(StrategyParameterType_16.getString());
      FIX::StrategyParameterValue StrategyParameterValue_16("STRING_935546499");
      noStrategyParameters_2_1_1.set(StrategyParameterValue_16);
      StrategyParametersGrp_NoStrategyParameters_16.insert(StrategyParameterValue_16.getString());
      all_values.push_back(StrategyParametersGrp_NoStrategyParameters_16);

      noOrders_0_2.addGroup(noStrategyParameters_2_1_1);
    }
    // TrdgSesGrp
    // Group TrdgSesGrp.NoTradingSessions
    {
      FIX50SP2::NewOrderList::NoOrders::NoTradingSessions noTradingSessions_2_1_0;
      // TrdgSesGrp.NoTradingSessions
      multiset<string> TrdgSesGrp_NoTradingSessions_11;
      FIX::TradingSessionID TradingSessionID_42("STRING_6");
      noTradingSessions_2_1_0.set(TradingSessionID_42);
      TrdgSesGrp_NoTradingSessions_11.insert(TradingSessionID_42.getString());
      FIX::TradingSessionSubID TradingSessionSubID_42("STRING_6");
      noTradingSessions_2_1_0.set(TradingSessionSubID_42);
      TrdgSesGrp_NoTradingSessions_11.insert(TradingSessionSubID_42.getString());
      all_values.push_back(TrdgSesGrp_NoTradingSessions_11);

      noOrders_0_2.addGroup(noTradingSessions_2_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoTradingSessions noTradingSessions_2_1_1;
      // TrdgSesGrp.NoTradingSessions
      multiset<string> TrdgSesGrp_NoTradingSessions_12;
      FIX::TradingSessionID TradingSessionID_43("STRING_1");
      noTradingSessions_2_1_1.set(TradingSessionID_43);
      TrdgSesGrp_NoTradingSessions_12.insert(TradingSessionID_43.getString());
      FIX::TradingSessionSubID TradingSessionSubID_43("STRING_6");
      noTradingSessions_2_1_1.set(TradingSessionSubID_43);
      TrdgSesGrp_NoTradingSessions_12.insert(TradingSessionSubID_43.getString());
      all_values.push_back(TrdgSesGrp_NoTradingSessions_12);

      noOrders_0_2.addGroup(noTradingSessions_2_1_1);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoTradingSessions noTradingSessions_2_1_2;
      // TrdgSesGrp.NoTradingSessions
      multiset<string> TrdgSesGrp_NoTradingSessions_13;
      FIX::TradingSessionID TradingSessionID_44("STRING_3");
      noTradingSessions_2_1_2.set(TradingSessionID_44);
      TrdgSesGrp_NoTradingSessions_13.insert(TradingSessionID_44.getString());
      FIX::TradingSessionSubID TradingSessionSubID_44("STRING_1");
      noTradingSessions_2_1_2.set(TradingSessionSubID_44);
      TrdgSesGrp_NoTradingSessions_13.insert(TradingSessionSubID_44.getString());
      all_values.push_back(TrdgSesGrp_NoTradingSessions_13);

      noOrders_0_2.addGroup(noTradingSessions_2_1_2);
    }
    // TriggeringInstruction
    multiset<string> TriggeringInstruction_6;
    FIX::TriggerAction TriggerAction_6('3');
    noOrders_0_2.set(TriggerAction_6);
    TriggeringInstruction_6.insert(TriggerAction_6.getString());
    FIX::TriggerNewPrice TriggerNewPrice_6;
    TriggerNewPrice_6.setString("18762913");
    noOrders_0_2.set(TriggerNewPrice_6);
    TriggeringInstruction_6.insert(TriggerNewPrice_6.getString());
    FIX::TriggerNewQty TriggerNewQty_6;
    TriggerNewQty_6.setString("12544405");
    noOrders_0_2.set(TriggerNewQty_6);
    TriggeringInstruction_6.insert(TriggerNewQty_6.getString());
    FIX::TriggerOrderType TriggerOrderType_6('2');
    noOrders_0_2.set(TriggerOrderType_6);
    TriggeringInstruction_6.insert(TriggerOrderType_6.getString());
    FIX::TriggerPrice TriggerPrice_6;
    TriggerPrice_6.setString("10990566");
    noOrders_0_2.set(TriggerPrice_6);
    TriggeringInstruction_6.insert(TriggerPrice_6.getString());
    FIX::TriggerPriceDirection TriggerPriceDirection_6('U');
    noOrders_0_2.set(TriggerPriceDirection_6);
    TriggeringInstruction_6.insert(TriggerPriceDirection_6.getString());
    FIX::TriggerPriceType TriggerPriceType_6('5');
    noOrders_0_2.set(TriggerPriceType_6);
    TriggeringInstruction_6.insert(TriggerPriceType_6.getString());
    FIX::TriggerPriceTypeScope TriggerPriceTypeScope_6('3');
    noOrders_0_2.set(TriggerPriceTypeScope_6);
    TriggeringInstruction_6.insert(TriggerPriceTypeScope_6.getString());
    FIX::TriggerSecurityDesc TriggerSecurityDesc_6("STRING_1879016977");
    noOrders_0_2.set(TriggerSecurityDesc_6);
    TriggeringInstruction_6.insert(TriggerSecurityDesc_6.getString());
    FIX::TriggerSecurityID TriggerSecurityID_6("STRING_1569780212");
    noOrders_0_2.set(TriggerSecurityID_6);
    TriggeringInstruction_6.insert(TriggerSecurityID_6.getString());
    FIX::TriggerSecurityIDSource TriggerSecurityIDSource_6("STRING_620664436");
    noOrders_0_2.set(TriggerSecurityIDSource_6);
    TriggeringInstruction_6.insert(TriggerSecurityIDSource_6.getString());
    FIX::TriggerSymbol TriggerSymbol_6("STRING_245977302");
    noOrders_0_2.set(TriggerSymbol_6);
    TriggeringInstruction_6.insert(TriggerSymbol_6.getString());
    FIX::TriggerTradingSessionID TriggerTradingSessionID_6("STRING_1788136724");
    noOrders_0_2.set(TriggerTradingSessionID_6);
    TriggeringInstruction_6.insert(TriggerTradingSessionID_6.getString());
    FIX::TriggerTradingSessionSubID TriggerTradingSessionSubID_6("STRING_1253003819");
    noOrders_0_2.set(TriggerTradingSessionSubID_6);
    TriggeringInstruction_6.insert(TriggerTradingSessionSubID_6.getString());
    FIX::TriggerType TriggerType_6('1');
    noOrders_0_2.set(TriggerType_6);
    TriggeringInstruction_6.insert(TriggerType_6.getString());
    all_values.push_back(TriggeringInstruction_6);

    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::NewOrderList::NoOrders::NoUnderlyings noUnderlyings_2_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_64;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_64("DATA_925926207");
      noUnderlyings_2_1_0.set(EncodedUnderlyingIssuer_64);
      UnderlyingInstrument_64.insert(EncodedUnderlyingIssuer_64.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_64(1404973224);
      noUnderlyings_2_1_0.set(EncodedUnderlyingIssuerLen_64);
      UnderlyingInstrument_64.insert(EncodedUnderlyingIssuerLen_64.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_64("DATA_375664017");
      noUnderlyings_2_1_0.set(EncodedUnderlyingSecurityDesc_64);
      UnderlyingInstrument_64.insert(EncodedUnderlyingSecurityDesc_64.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_64(1613230231);
      noUnderlyings_2_1_0.set(EncodedUnderlyingSecurityDescLen_64);
      UnderlyingInstrument_64.insert(EncodedUnderlyingSecurityDescLen_64.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_64;
      UnderlyingAdjustedQuantity_64.setString("18024979");
      noUnderlyings_2_1_0.set(UnderlyingAdjustedQuantity_64);
      UnderlyingInstrument_64.insert(UnderlyingAdjustedQuantity_64.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_64;
      UnderlyingAllocationPercent_64.setString("96.570000");
      noUnderlyings_2_1_0.set(UnderlyingAllocationPercent_64);
      UnderlyingInstrument_64.insert(UnderlyingAllocationPercent_64.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_64;
      UnderlyingAttachmentPoint_64.setString("99.550000");
      noUnderlyings_2_1_0.set(UnderlyingAttachmentPoint_64);
      UnderlyingInstrument_64.insert(UnderlyingAttachmentPoint_64.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_64("STRING_590560836");
      noUnderlyings_2_1_0.set(UnderlyingCFICode_64);
      UnderlyingInstrument_64.insert(UnderlyingCFICode_64.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_64("STRING_1937025506");
      noUnderlyings_2_1_0.set(UnderlyingCPProgram_64);
      UnderlyingInstrument_64.insert(UnderlyingCPProgram_64.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_64("STRING_414345533");
      noUnderlyings_2_1_0.set(UnderlyingCPRegType_64);
      UnderlyingInstrument_64.insert(UnderlyingCPRegType_64.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_64;
      UnderlyingCapValue_64.setString("9294975");
      noUnderlyings_2_1_0.set(UnderlyingCapValue_64);
      UnderlyingInstrument_64.insert(UnderlyingCapValue_64.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_64;
      UnderlyingCashAmount_64.setString("5669521");
      noUnderlyings_2_1_0.set(UnderlyingCashAmount_64);
      UnderlyingInstrument_64.insert(UnderlyingCashAmount_64.getString());
      FIX::UnderlyingCashType UnderlyingCashType_64("STRING_FIXED");
      noUnderlyings_2_1_0.set(UnderlyingCashType_64);
      UnderlyingInstrument_64.insert(UnderlyingCashType_64.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_64;
      UnderlyingContractMultiplier_64.setString("1178337");
      noUnderlyings_2_1_0.set(UnderlyingContractMultiplier_64);
      UnderlyingInstrument_64.insert(UnderlyingContractMultiplier_64.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_64(71783912);
      noUnderlyings_2_1_0.set(UnderlyingContractMultiplierUnit_64);
      UnderlyingInstrument_64.insert(UnderlyingContractMultiplierUnit_64.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_64("COUNTRY_1730177318");
      noUnderlyings_2_1_0.set(UnderlyingCountryOfIssue_64);
      UnderlyingInstrument_64.insert(UnderlyingCountryOfIssue_64.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_64("LOCALMKTDATE_1994125103");
      noUnderlyings_2_1_0.set(UnderlyingCouponPaymentDate_64);
      UnderlyingInstrument_64.insert(UnderlyingCouponPaymentDate_64.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_64;
      UnderlyingCouponRate_64.setString("44.370000");
      noUnderlyings_2_1_0.set(UnderlyingCouponRate_64);
      UnderlyingInstrument_64.insert(UnderlyingCouponRate_64.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_64("STRING_910815585");
      noUnderlyings_2_1_0.set(UnderlyingCreditRating_64);
      UnderlyingInstrument_64.insert(UnderlyingCreditRating_64.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_64("GBP");
      noUnderlyings_2_1_0.set(UnderlyingCurrency_64);
      UnderlyingInstrument_64.insert(UnderlyingCurrency_64.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_64;
      UnderlyingCurrentValue_64.setString("14667791");
      noUnderlyings_2_1_0.set(UnderlyingCurrentValue_64);
      UnderlyingInstrument_64.insert(UnderlyingCurrentValue_64.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_64;
      UnderlyingDetachmentPoint_64.setString("7.210000");
      noUnderlyings_2_1_0.set(UnderlyingDetachmentPoint_64);
      UnderlyingInstrument_64.insert(UnderlyingDetachmentPoint_64.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_64;
      UnderlyingDirtyPrice_64.setString("15708179");
      noUnderlyings_2_1_0.set(UnderlyingDirtyPrice_64);
      UnderlyingInstrument_64.insert(UnderlyingDirtyPrice_64.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_64;
      UnderlyingEndPrice_64.setString("8890757");
      noUnderlyings_2_1_0.set(UnderlyingEndPrice_64);
      UnderlyingInstrument_64.insert(UnderlyingEndPrice_64.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_64;
      UnderlyingEndValue_64.setString("5182215");
      noUnderlyings_2_1_0.set(UnderlyingEndValue_64);
      UnderlyingInstrument_64.insert(UnderlyingEndValue_64.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_64(1816795237);
      noUnderlyings_2_1_0.set(UnderlyingExerciseStyle_64);
      UnderlyingInstrument_64.insert(UnderlyingExerciseStyle_64.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_64;
      UnderlyingFXRate_64.setString("5297288");
      noUnderlyings_2_1_0.set(UnderlyingFXRate_64);
      UnderlyingInstrument_64.insert(UnderlyingFXRate_64.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_64('M');
      noUnderlyings_2_1_0.set(UnderlyingFXRateCalc_64);
      UnderlyingInstrument_64.insert(UnderlyingFXRateCalc_64.getString());
      FIX::UnderlyingFactor UnderlyingFactor_64;
      UnderlyingFactor_64.setString("20095008");
      noUnderlyings_2_1_0.set(UnderlyingFactor_64);
      UnderlyingInstrument_64.insert(UnderlyingFactor_64.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_64(1931735475);
      noUnderlyings_2_1_0.set(UnderlyingFlowScheduleType_64);
      UnderlyingInstrument_64.insert(UnderlyingFlowScheduleType_64.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_64("STRING_549667888");
      noUnderlyings_2_1_0.set(UnderlyingInstrRegistry_64);
      UnderlyingInstrument_64.insert(UnderlyingInstrRegistry_64.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_64("LOCALMKTDATE_1266990422");
      noUnderlyings_2_1_0.set(UnderlyingIssueDate_64);
      UnderlyingInstrument_64.insert(UnderlyingIssueDate_64.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_64("STRING_159915844");
      noUnderlyings_2_1_0.set(UnderlyingIssuer_64);
      UnderlyingInstrument_64.insert(UnderlyingIssuer_64.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_64("STRING_15414472");
      noUnderlyings_2_1_0.set(UnderlyingLocaleOfIssue_64);
      UnderlyingInstrument_64.insert(UnderlyingLocaleOfIssue_64.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_64("LOCALMKTDATE_922004759");
      noUnderlyings_2_1_0.set(UnderlyingMaturityDate_64);
      UnderlyingInstrument_64.insert(UnderlyingMaturityDate_64.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_64("MONTHYEAR_1378225502");
      noUnderlyings_2_1_0.set(UnderlyingMaturityMonthYear_64);
      UnderlyingInstrument_64.insert(UnderlyingMaturityMonthYear_64.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_64("TZTIMEONLY_1601164427");
      noUnderlyings_2_1_0.set(UnderlyingMaturityTime_64);
      UnderlyingInstrument_64.insert(UnderlyingMaturityTime_64.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_64;
      UnderlyingNotionalPercentageOutstanding_64.setString("55.960000");
      noUnderlyings_2_1_0.set(UnderlyingNotionalPercentageOutstanding_64);
      UnderlyingInstrument_64.insert(UnderlyingNotionalPercentageOutstanding_64.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_64('1');
      noUnderlyings_2_1_0.set(UnderlyingOptAttribute_64);
      UnderlyingInstrument_64.insert(UnderlyingOptAttribute_64.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_64;
      UnderlyingOriginalNotionalPercentageOutstanding_64.setString("99.600000");
      noUnderlyings_2_1_0.set(UnderlyingOriginalNotionalPercentageOutstanding_64);
      UnderlyingInstrument_64.insert(UnderlyingOriginalNotionalPercentageOutstanding_64.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_64("STRING_294579541");
      noUnderlyings_2_1_0.set(UnderlyingPriceUnitOfMeasure_64);
      UnderlyingInstrument_64.insert(UnderlyingPriceUnitOfMeasure_64.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_64;
      UnderlyingPriceUnitOfMeasureQty_64.setString("17347195");
      noUnderlyings_2_1_0.set(UnderlyingPriceUnitOfMeasureQty_64);
      UnderlyingInstrument_64.insert(UnderlyingPriceUnitOfMeasureQty_64.getString());
      FIX::UnderlyingProduct UnderlyingProduct_64(368058668);
      noUnderlyings_2_1_0.set(UnderlyingProduct_64);
      UnderlyingInstrument_64.insert(UnderlyingProduct_64.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_64(412413299);
      noUnderlyings_2_1_0.set(UnderlyingPutOrCall_64);
      UnderlyingInstrument_64.insert(UnderlyingPutOrCall_64.getString());
      FIX::UnderlyingPx UnderlyingPx_64;
      UnderlyingPx_64.setString("18065034");
      noUnderlyings_2_1_0.set(UnderlyingPx_64);
      UnderlyingInstrument_64.insert(UnderlyingPx_64.getString());
      FIX::UnderlyingQty UnderlyingQty_64;
      UnderlyingQty_64.setString("20982359");
      noUnderlyings_2_1_0.set(UnderlyingQty_64);
      UnderlyingInstrument_64.insert(UnderlyingQty_64.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_64("LOCALMKTDATE_259054755");
      noUnderlyings_2_1_0.set(UnderlyingRedemptionDate_64);
      UnderlyingInstrument_64.insert(UnderlyingRedemptionDate_64.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_64("STRING_985244237");
      noUnderlyings_2_1_0.set(UnderlyingRepoCollateralSecurityType_64);
      UnderlyingInstrument_64.insert(UnderlyingRepoCollateralSecurityType_64.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_64;
      UnderlyingRepurchaseRate_64.setString("79.240000");
      noUnderlyings_2_1_0.set(UnderlyingRepurchaseRate_64);
      UnderlyingInstrument_64.insert(UnderlyingRepurchaseRate_64.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_64(1204752873);
      noUnderlyings_2_1_0.set(UnderlyingRepurchaseTerm_64);
      UnderlyingInstrument_64.insert(UnderlyingRepurchaseTerm_64.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_64("STRING_677045195");
      noUnderlyings_2_1_0.set(UnderlyingRestructuringType_64);
      UnderlyingInstrument_64.insert(UnderlyingRestructuringType_64.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_64("STRING_180863436");
      noUnderlyings_2_1_0.set(UnderlyingSecurityDesc_64);
      UnderlyingInstrument_64.insert(UnderlyingSecurityDesc_64.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_64("EXCHANGE_1102309946");
      noUnderlyings_2_1_0.set(UnderlyingSecurityExchange_64);
      UnderlyingInstrument_64.insert(UnderlyingSecurityExchange_64.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_64("STRING_100379482");
      noUnderlyings_2_1_0.set(UnderlyingSecurityID_64);
      UnderlyingInstrument_64.insert(UnderlyingSecurityID_64.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_64("STRING_1069939160");
      noUnderlyings_2_1_0.set(UnderlyingSecurityIDSource_64);
      UnderlyingInstrument_64.insert(UnderlyingSecurityIDSource_64.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_64("STRING_1620531456");
      noUnderlyings_2_1_0.set(UnderlyingSecuritySubType_64);
      UnderlyingInstrument_64.insert(UnderlyingSecuritySubType_64.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_64("STRING_1917174719");
      noUnderlyings_2_1_0.set(UnderlyingSecurityType_64);
      UnderlyingInstrument_64.insert(UnderlyingSecurityType_64.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_64("STRING_1599667961");
      noUnderlyings_2_1_0.set(UnderlyingSeniority_64);
      UnderlyingInstrument_64.insert(UnderlyingSeniority_64.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_64("STRING_1244273138");
      noUnderlyings_2_1_0.set(UnderlyingSettlMethod_64);
      UnderlyingInstrument_64.insert(UnderlyingSettlMethod_64.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_64(4);
      noUnderlyings_2_1_0.set(UnderlyingSettlementType_64);
      UnderlyingInstrument_64.insert(UnderlyingSettlementType_64.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_64;
      UnderlyingStartValue_64.setString("13839197");
      noUnderlyings_2_1_0.set(UnderlyingStartValue_64);
      UnderlyingInstrument_64.insert(UnderlyingStartValue_64.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_64("STRING_1793941026");
      noUnderlyings_2_1_0.set(UnderlyingStateOrProvinceOfIssue_64);
      UnderlyingInstrument_64.insert(UnderlyingStateOrProvinceOfIssue_64.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_64("JPY");
      noUnderlyings_2_1_0.set(UnderlyingStrikeCurrency_64);
      UnderlyingInstrument_64.insert(UnderlyingStrikeCurrency_64.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_64;
      UnderlyingStrikePrice_64.setString("18093554");
      noUnderlyings_2_1_0.set(UnderlyingStrikePrice_64);
      UnderlyingInstrument_64.insert(UnderlyingStrikePrice_64.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_64("STRING_1820703451");
      noUnderlyings_2_1_0.set(UnderlyingSymbol_64);
      UnderlyingInstrument_64.insert(UnderlyingSymbol_64.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_64("STRING_774577486");
      noUnderlyings_2_1_0.set(UnderlyingSymbolSfx_64);
      UnderlyingInstrument_64.insert(UnderlyingSymbolSfx_64.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_64("STRING_1263036278");
      noUnderlyings_2_1_0.set(UnderlyingTimeUnit_64);
      UnderlyingInstrument_64.insert(UnderlyingTimeUnit_64.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_64("STRING_1185785399");
      noUnderlyings_2_1_0.set(UnderlyingUnitOfMeasure_64);
      UnderlyingInstrument_64.insert(UnderlyingUnitOfMeasure_64.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_64;
      UnderlyingUnitOfMeasureQty_64.setString("19423448");
      noUnderlyings_2_1_0.set(UnderlyingUnitOfMeasureQty_64);
      UnderlyingInstrument_64.insert(UnderlyingUnitOfMeasureQty_64.getString());
      all_values.push_back(UnderlyingInstrument_64);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_124;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_124("STRING_1480364941");
        noUnderlyingSecurityAltID_2_0_2_0.set(UnderlyingSecurityAltID_124);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_124.insert(UnderlyingSecurityAltID_124.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_124("STRING_1529580734");
        noUnderlyingSecurityAltID_2_0_2_0.set(UnderlyingSecurityAltIDSource_124);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_124.insert(UnderlyingSecurityAltIDSource_124.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_124);

        noUnderlyings_2_1_0.addGroup(noUnderlyingSecurityAltID_2_0_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_0_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_125;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_125("STRING_1499121259");
        noUnderlyingSecurityAltID_2_0_2_1.set(UnderlyingSecurityAltID_125);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_125.insert(UnderlyingSecurityAltID_125.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_125("STRING_1892778240");
        noUnderlyingSecurityAltID_2_0_2_1.set(UnderlyingSecurityAltIDSource_125);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_125.insert(UnderlyingSecurityAltIDSource_125.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_125);

        noUnderlyings_2_1_0.addGroup(noUnderlyingSecurityAltID_2_0_2_1);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_124;
        FIX::UnderlyingStipType UnderlyingStipType_124("STRING_1449873598");
        noUnderlyingStips_2_0_2_0.set(UnderlyingStipType_124);
        UnderlyingStipulations_NoUnderlyingStips_124.insert(UnderlyingStipType_124.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_124("STRING_4349347");
        noUnderlyingStips_2_0_2_0.set(UnderlyingStipValue_124);
        UnderlyingStipulations_NoUnderlyingStips_124.insert(UnderlyingStipValue_124.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_124);

        noUnderlyings_2_1_0.addGroup(noUnderlyingStips_2_0_2_0);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_131;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_131("STRING_163957874");
        noUndlyInstrumentParties_2_0_2_0.set(UnderlyingInstrumentPartyID_131);
        UndlyInstrumentParties_NoUndlyInstrumentParties_131.insert(UnderlyingInstrumentPartyID_131.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_131('1');
        noUndlyInstrumentParties_2_0_2_0.set(UnderlyingInstrumentPartyIDSource_131);
        UndlyInstrumentParties_NoUndlyInstrumentParties_131.insert(UnderlyingInstrumentPartyIDSource_131.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_131(703406318);
        noUndlyInstrumentParties_2_0_2_0.set(UnderlyingInstrumentPartyRole_131);
        UndlyInstrumentParties_NoUndlyInstrumentParties_131.insert(UnderlyingInstrumentPartyRole_131.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_131);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_254;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_254("STRING_163928519");
          noUndlyInstrumentPartySubIDs_2_0_0_3_0.set(UnderlyingInstrumentPartySubID_254);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_254.insert(UnderlyingInstrumentPartySubID_254.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_254(803785800);
          noUndlyInstrumentPartySubIDs_2_0_0_3_0.set(UnderlyingInstrumentPartySubIDType_254);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_254.insert(UnderlyingInstrumentPartySubIDType_254.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_254);

          noUndlyInstrumentParties_2_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_0_3_0);
        }
        noUnderlyings_2_1_0.addGroup(noUndlyInstrumentParties_2_0_2_0);
      }
      noOrders_0_2.addGroup(noUnderlyings_2_1_0);
    }
    // YieldData
    multiset<string> YieldData_13;
    FIX::Yield Yield_13;
    Yield_13.setString("4.710000");
    noOrders_0_2.set(Yield_13);
    YieldData_13.insert(Yield_13.getString());
    FIX::YieldCalcDate YieldCalcDate_13("LOCALMKTDATE_1784459975");
    noOrders_0_2.set(YieldCalcDate_13);
    YieldData_13.insert(YieldCalcDate_13.getString());
    FIX::YieldRedemptionDate YieldRedemptionDate_13("LOCALMKTDATE_573476871");
    noOrders_0_2.set(YieldRedemptionDate_13);
    YieldData_13.insert(YieldRedemptionDate_13.getString());
    FIX::YieldRedemptionPrice YieldRedemptionPrice_13;
    YieldRedemptionPrice_13.setString("8669447");
    noOrders_0_2.set(YieldRedemptionPrice_13);
    YieldData_13.insert(YieldRedemptionPrice_13.getString());
    FIX::YieldRedemptionPriceType YieldRedemptionPriceType_13(881249465);
    noOrders_0_2.set(YieldRedemptionPriceType_13);
    YieldData_13.insert(YieldRedemptionPriceType_13.getString());
    FIX::YieldType YieldType_13("STRING_AVGMATURITY");
    noOrders_0_2.set(YieldType_13);
    YieldData_13.insert(YieldType_13.getString());
    all_values.push_back(YieldData_13);

    msg.addGroup(noOrders_0_2);
  }
  // RootParties
  // Group RootParties.NoRootPartyIDs
  {
    FIX50SP2::NewOrderList::NoRootPartyIDs noRootPartyIDs_0_0;
    // RootParties.NoRootPartyIDs
    multiset<string> RootParties_NoRootPartyIDs_6;
    FIX::RootPartyID RootPartyID_6("STRING_527706844");
    noRootPartyIDs_0_0.set(RootPartyID_6);
    RootParties_NoRootPartyIDs_6.insert(RootPartyID_6.getString());
    FIX::RootPartyIDSource RootPartyIDSource_6('1');
    noRootPartyIDs_0_0.set(RootPartyIDSource_6);
    RootParties_NoRootPartyIDs_6.insert(RootPartyIDSource_6.getString());
    FIX::RootPartyRole RootPartyRole_6(1647216557);
    noRootPartyIDs_0_0.set(RootPartyRole_6);
    RootParties_NoRootPartyIDs_6.insert(RootPartyRole_6.getString());
    all_values.push_back(RootParties_NoRootPartyIDs_6);

    // RootSubParties
    // Group RootSubParties.NoRootPartySubIDs
    {
      FIX50SP2::NewOrderList::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_0;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_14;
      FIX::RootPartySubID RootPartySubID_14("STRING_777103636");
      noRootPartySubIDs_0_1_0.set(RootPartySubID_14);
      RootSubParties_NoRootPartySubIDs_14.insert(RootPartySubID_14.getString());
      FIX::RootPartySubIDType RootPartySubIDType_14(274310395);
      noRootPartySubIDs_0_1_0.set(RootPartySubIDType_14);
      RootSubParties_NoRootPartySubIDs_14.insert(RootPartySubIDType_14.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_14);

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_0);
    }
    msg.addGroup(noRootPartyIDs_0_0);
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
