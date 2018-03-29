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
  multiset<string> all_compo_names;
  multiset<string> NewOrderList_0;
  FIX::AllowableOneSidednessCurr AllowableOneSidednessCurr_0("CAN");
  msg.set(AllowableOneSidednessCurr_0);
  NewOrderList_0.insert(AllowableOneSidednessCurr_0.getString());
  FIX::AllowableOneSidednessPct AllowableOneSidednessPct_0;
  AllowableOneSidednessPct_0.setString("30.350000");
  msg.set(AllowableOneSidednessPct_0);
  NewOrderList_0.insert(AllowableOneSidednessPct_0.getString());
  FIX::AllowableOneSidednessValue AllowableOneSidednessValue_0;
  AllowableOneSidednessValue_0.setString("18246679");
  msg.set(AllowableOneSidednessValue_0);
  NewOrderList_0.insert(AllowableOneSidednessValue_0.getString());
  FIX::BidID BidID_3("STRING_1517443363");
  msg.set(BidID_3);
  NewOrderList_0.insert(BidID_3.getString());
  FIX::BidType BidType_1(1);
  msg.set(BidType_1);
  NewOrderList_0.insert(BidType_1.getString());
  FIX::CancellationRights CancellationRights_4('M');
  msg.set(CancellationRights_4);
  NewOrderList_0.insert(CancellationRights_4.getString());
  FIX::ClientBidID ClientBidID_3("STRING_808949474");
  msg.set(ClientBidID_3);
  NewOrderList_0.insert(ClientBidID_3.getString());
  FIX::ContingencyType ContingencyType_1(1);
  msg.set(ContingencyType_1);
  NewOrderList_0.insert(ContingencyType_1.getString());
  FIX::EncodedListExecInst EncodedListExecInst_0("DATA_1168069450");
  msg.set(EncodedListExecInst_0);
  NewOrderList_0.insert(EncodedListExecInst_0.getString());
  FIX::EncodedListExecInstLen EncodedListExecInstLen_0(1508529993);
  msg.set(EncodedListExecInstLen_0);
  NewOrderList_0.insert(EncodedListExecInstLen_0.getString());
  FIX::LastFragment LastFragment_13(true);
  msg.set(LastFragment_13);
  NewOrderList_0.insert(LastFragment_13.getString());
  FIX::ListExecInst ListExecInst_0("STRING_2049100572");
  msg.set(ListExecInst_0);
  NewOrderList_0.insert(ListExecInst_0.getString());
  FIX::ListExecInstType ListExecInstType_0('1');
  msg.set(ListExecInstType_0);
  NewOrderList_0.insert(ListExecInstType_0.getString());
  FIX::ListID ListID_22("STRING_1949753240");
  msg.set(ListID_22);
  NewOrderList_0.insert(ListID_22.getString());
  FIX::MoneyLaunderingStatus MoneyLaunderingStatus_4('N');
  msg.set(MoneyLaunderingStatus_4);
  NewOrderList_0.insert(MoneyLaunderingStatus_4.getString());
  FIX::ProgPeriodInterval ProgPeriodInterval_1(511305463);
  msg.set(ProgPeriodInterval_1);
  NewOrderList_0.insert(ProgPeriodInterval_1.getString());
  FIX::ProgRptReqs ProgRptReqs_1(3);
  msg.set(ProgRptReqs_1);
  NewOrderList_0.insert(ProgRptReqs_1.getString());
  FIX::RegistID RegistID_4("STRING_1810439669");
  msg.set(RegistID_4);
  NewOrderList_0.insert(RegistID_4.getString());
  FIX::TotNoOrders TotNoOrders_1(664685792);
  msg.set(TotNoOrders_1);
  NewOrderList_0.insert(TotNoOrders_1.getString());
  all_values.push_back(NewOrderList_0);

  all_compo_names.insert("NewOrderList");

  // ListOrdGrp
  // Group ListOrdGrp.NoOrders
  {
    FIX50SP2::NewOrderList::NoOrders noOrders_0_0;
    // ListOrdGrp.NoOrders
    multiset<string> ListOrdGrp_NoOrders_0;
    FIX::Account Account_20("STRING_1789595494");
    noOrders_0_0.set(Account_20);
    ListOrdGrp_NoOrders_0.insert(Account_20.getString());
    FIX::AccountType AccountType_17(1);
    noOrders_0_0.set(AccountType_17);
    ListOrdGrp_NoOrders_0.insert(AccountType_17.getString());
    FIX::AcctIDSource AcctIDSource_13(1);
    noOrders_0_0.set(AcctIDSource_13);
    ListOrdGrp_NoOrders_0.insert(AcctIDSource_13.getString());
    FIX::AllocID AllocID_15("STRING_1837150293");
    noOrders_0_0.set(AllocID_15);
    ListOrdGrp_NoOrders_0.insert(AllocID_15.getString());
    FIX::BookingType BookingType_25(1);
    noOrders_0_0.set(BookingType_25);
    ListOrdGrp_NoOrders_0.insert(BookingType_25.getString());
    FIX::BookingUnit BookingUnit_8('1');
    noOrders_0_0.set(BookingUnit_8);
    ListOrdGrp_NoOrders_0.insert(BookingUnit_8.getString());
    FIX::CashMargin CashMargin_8('1');
    noOrders_0_0.set(CashMargin_8);
    ListOrdGrp_NoOrders_0.insert(CashMargin_8.getString());
    FIX::ClOrdID ClOrdID_29("STRING_1771609118");
    noOrders_0_0.set(ClOrdID_29);
    ListOrdGrp_NoOrders_0.insert(ClOrdID_29.getString());
    FIX::ClOrdLinkID ClOrdLinkID_9("STRING_528383292");
    noOrders_0_0.set(ClOrdLinkID_9);
    ListOrdGrp_NoOrders_0.insert(ClOrdLinkID_9.getString());
    FIX::ClearingFeeIndicator ClearingFeeIndicator_12("STRING_3");
    noOrders_0_0.set(ClearingFeeIndicator_12);
    ListOrdGrp_NoOrders_0.insert(ClearingFeeIndicator_12.getString());
    FIX::ComplianceID ComplianceID_5("STRING_345019718");
    noOrders_0_0.set(ComplianceID_5);
    ListOrdGrp_NoOrders_0.insert(ComplianceID_5.getString());
    FIX::CoveredOrUncovered CoveredOrUncovered_7(1);
    noOrders_0_0.set(CoveredOrUncovered_7);
    ListOrdGrp_NoOrders_0.insert(CoveredOrUncovered_7.getString());
    FIX::Currency Currency_46("USD");
    noOrders_0_0.set(Currency_46);
    ListOrdGrp_NoOrders_0.insert(Currency_46.getString());
    FIX::CustOrderCapacity CustOrderCapacity_11(1);
    noOrders_0_0.set(CustOrderCapacity_11);
    ListOrdGrp_NoOrders_0.insert(CustOrderCapacity_11.getString());
    FIX::DayBookingInst DayBookingInst_8('2');
    noOrders_0_0.set(DayBookingInst_8);
    ListOrdGrp_NoOrders_0.insert(DayBookingInst_8.getString());
    FIX::Designation Designation_4("STRING_599199026");
    noOrders_0_0.set(Designation_4);
    ListOrdGrp_NoOrders_0.insert(Designation_4.getString());
    FIX::EffectiveTime EffectiveTime_4(FIX::UTCTIMESTAMP(15, 36, 55, 5, 6, 2010));
    noOrders_0_0.set(EffectiveTime_4);
    ListOrdGrp_NoOrders_0.insert(EffectiveTime_4.getString());
    FIX::EncodedText EncodedText_57("DATA_1060813234");
    noOrders_0_0.set(EncodedText_57);
    ListOrdGrp_NoOrders_0.insert(EncodedText_57.getString());
    FIX::EncodedTextLen EncodedTextLen_57(968138204);
    noOrders_0_0.set(EncodedTextLen_57);
    ListOrdGrp_NoOrders_0.insert(EncodedTextLen_57.getString());
    FIX::ExDestination ExDestination_3("EXCHANGE_1650751931");
    noOrders_0_0.set(ExDestination_3);
    ListOrdGrp_NoOrders_0.insert(ExDestination_3.getString());
    FIX::ExDestinationIDSource ExDestinationIDSource_3('E');
    noOrders_0_0.set(ExDestinationIDSource_3);
    ListOrdGrp_NoOrders_0.insert(ExDestinationIDSource_3.getString());
    FIX::ExecInst ExecInst_7("MULTIPLECHARVALUE_f");
    noOrders_0_0.set(ExecInst_7);
    ListOrdGrp_NoOrders_0.insert(ExecInst_7.getString());
    FIX::ExpireDate ExpireDate_8("LOCALMKTDATE_167954075");
    noOrders_0_0.set(ExpireDate_8);
    ListOrdGrp_NoOrders_0.insert(ExpireDate_8.getString());
    FIX::ExpireTime ExpireTime_9(FIX::UTCTIMESTAMP(7, 18, 25, 4, 8, 2005));
    noOrders_0_0.set(ExpireTime_9);
    ListOrdGrp_NoOrders_0.insert(ExpireTime_9.getString());
    FIX::ForexReq ForexReq_8(true);
    noOrders_0_0.set(ForexReq_8);
    ListOrdGrp_NoOrders_0.insert(ForexReq_8.getString());
    FIX::GTBookingInst GTBookingInst_4(2);
    noOrders_0_0.set(GTBookingInst_4);
    ListOrdGrp_NoOrders_0.insert(GTBookingInst_4.getString());
    FIX::HandlInst HandlInst_4('1');
    noOrders_0_0.set(HandlInst_4);
    ListOrdGrp_NoOrders_0.insert(HandlInst_4.getString());
    FIX::IOIID IOIID_4("STRING_1797071714");
    noOrders_0_0.set(IOIID_4);
    ListOrdGrp_NoOrders_0.insert(IOIID_4.getString());
    FIX::ListSeqNo ListSeqNo_0(502191712);
    noOrders_0_0.set(ListSeqNo_0);
    ListOrdGrp_NoOrders_0.insert(ListSeqNo_0.getString());
    FIX::LocateReqd LocateReqd_3(true);
    noOrders_0_0.set(LocateReqd_3);
    ListOrdGrp_NoOrders_0.insert(LocateReqd_3.getString());
    FIX::MatchIncrement MatchIncrement_4;
    MatchIncrement_4.setString("2592792");
    noOrders_0_0.set(MatchIncrement_4);
    ListOrdGrp_NoOrders_0.insert(MatchIncrement_4.getString());
    FIX::MaxFloor MaxFloor_4;
    MaxFloor_4.setString("5243957");
    noOrders_0_0.set(MaxFloor_4);
    ListOrdGrp_NoOrders_0.insert(MaxFloor_4.getString());
    FIX::MaxPriceLevels MaxPriceLevels_4(111335366);
    noOrders_0_0.set(MaxPriceLevels_4);
    ListOrdGrp_NoOrders_0.insert(MaxPriceLevels_4.getString());
    FIX::MaxShow MaxShow_4;
    MaxShow_4.setString("9569079");
    noOrders_0_0.set(MaxShow_4);
    ListOrdGrp_NoOrders_0.insert(MaxShow_4.getString());
    FIX::MinQty MinQty_7;
    MinQty_7.setString("11235947");
    noOrders_0_0.set(MinQty_7);
    ListOrdGrp_NoOrders_0.insert(MinQty_7.getString());
    FIX::OrdType OrdType_49('1');
    noOrders_0_0.set(OrdType_49);
    ListOrdGrp_NoOrders_0.insert(OrdType_49.getString());
    FIX::OrderCapacity OrderCapacity_26('R');
    noOrders_0_0.set(OrderCapacity_26);
    ListOrdGrp_NoOrders_0.insert(OrderCapacity_26.getString());
    FIX::OrderQty2 OrderQty2_15;
    OrderQty2_15.setString("7433796");
    noOrders_0_0.set(OrderQty2_15);
    ListOrdGrp_NoOrders_0.insert(OrderQty2_15.getString());
    FIX::OrderRestrictions OrderRestrictions_23("MULTIPLECHARVALUE_7");
    noOrders_0_0.set(OrderRestrictions_23);
    ListOrdGrp_NoOrders_0.insert(OrderRestrictions_23.getString());
    FIX::ParticipationRate ParticipationRate_4;
    ParticipationRate_4.setString("20.340000");
    noOrders_0_0.set(ParticipationRate_4);
    ListOrdGrp_NoOrders_0.insert(ParticipationRate_4.getString());
    FIX::PositionEffect PositionEffect_11('F');
    noOrders_0_0.set(PositionEffect_11);
    ListOrdGrp_NoOrders_0.insert(PositionEffect_11.getString());
    FIX::PreTradeAnonymity PreTradeAnonymity_8(true);
    noOrders_0_0.set(PreTradeAnonymity_8);
    ListOrdGrp_NoOrders_0.insert(PreTradeAnonymity_8.getString());
    FIX::PreallocMethod PreallocMethod_8('0');
    noOrders_0_0.set(PreallocMethod_8);
    ListOrdGrp_NoOrders_0.insert(PreallocMethod_8.getString());
    FIX::PrevClosePx PrevClosePx_4;
    PrevClosePx_4.setString("12329195");
    noOrders_0_0.set(PrevClosePx_4);
    ListOrdGrp_NoOrders_0.insert(PrevClosePx_4.getString());
    FIX::Price Price_15;
    Price_15.setString("7752835");
    noOrders_0_0.set(Price_15);
    ListOrdGrp_NoOrders_0.insert(Price_15.getString());
    FIX::Price2 Price2_0;
    Price2_0.setString("10759383");
    noOrders_0_0.set(Price2_0);
    ListOrdGrp_NoOrders_0.insert(Price2_0.getString());
    FIX::PriceProtectionScope PriceProtectionScope_4('0');
    noOrders_0_0.set(PriceProtectionScope_4);
    ListOrdGrp_NoOrders_0.insert(PriceProtectionScope_4.getString());
    FIX::PriceType PriceType_29(8);
    noOrders_0_0.set(PriceType_29);
    ListOrdGrp_NoOrders_0.insert(PriceType_29.getString());
    FIX::ProcessCode ProcessCode_8('4');
    noOrders_0_0.set(ProcessCode_8);
    ListOrdGrp_NoOrders_0.insert(ProcessCode_8.getString());
    FIX::QtyType QtyType_20(0);
    noOrders_0_0.set(QtyType_20);
    ListOrdGrp_NoOrders_0.insert(QtyType_20.getString());
    FIX::QuoteID QuoteID_5("STRING_1256153941");
    noOrders_0_0.set(QuoteID_5);
    ListOrdGrp_NoOrders_0.insert(QuoteID_5.getString());
    FIX::RefOrderID RefOrderID_0("STRING_1327892310");
    noOrders_0_0.set(RefOrderID_0);
    ListOrdGrp_NoOrders_0.insert(RefOrderID_0.getString());
    FIX::RefOrderIDSource RefOrderIDSource_0('0');
    noOrders_0_0.set(RefOrderIDSource_0);
    ListOrdGrp_NoOrders_0.insert(RefOrderIDSource_0.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_27("STRING_1789200464");
    noOrders_0_0.set(SecondaryClOrdID_27);
    ListOrdGrp_NoOrders_0.insert(SecondaryClOrdID_27.getString());
    FIX::SettlCurrency SettlCurrency_16("USD");
    noOrders_0_0.set(SettlCurrency_16);
    ListOrdGrp_NoOrders_0.insert(SettlCurrency_16.getString());
    FIX::SettlDate SettlDate_39("LOCALMKTDATE_1946372458");
    noOrders_0_0.set(SettlDate_39);
    ListOrdGrp_NoOrders_0.insert(SettlDate_39.getString());
    FIX::SettlDate2 SettlDate2_15("LOCALMKTDATE_1677522829");
    noOrders_0_0.set(SettlDate2_15);
    ListOrdGrp_NoOrders_0.insert(SettlDate2_15.getString());
    FIX::SettlInstMode SettlInstMode_0('1');
    noOrders_0_0.set(SettlInstMode_0);
    ListOrdGrp_NoOrders_0.insert(SettlInstMode_0.getString());
    FIX::SettlType SettlType_19("STRING_6");
    noOrders_0_0.set(SettlType_19);
    ListOrdGrp_NoOrders_0.insert(SettlType_19.getString());
    FIX::Side Side_28('D');
    noOrders_0_0.set(Side_28);
    ListOrdGrp_NoOrders_0.insert(Side_28.getString());
    FIX::SideValueInd SideValueInd_1(2);
    noOrders_0_0.set(SideValueInd_1);
    ListOrdGrp_NoOrders_0.insert(SideValueInd_1.getString());
    FIX::SolicitedFlag SolicitedFlag_8(true);
    noOrders_0_0.set(SolicitedFlag_8);
    ListOrdGrp_NoOrders_0.insert(SolicitedFlag_8.getString());
    FIX::StopPx StopPx_4;
    StopPx_4.setString("2315658");
    noOrders_0_0.set(StopPx_4);
    ListOrdGrp_NoOrders_0.insert(StopPx_4.getString());
    FIX::TargetStrategy TargetStrategy_4(2);
    noOrders_0_0.set(TargetStrategy_4);
    ListOrdGrp_NoOrders_0.insert(TargetStrategy_4.getString());
    FIX::TargetStrategyParameters TargetStrategyParameters_4("STRING_1949071060");
    noOrders_0_0.set(TargetStrategyParameters_4);
    ListOrdGrp_NoOrders_0.insert(TargetStrategyParameters_4.getString());
    FIX::Text Text_57("STRING_672994755");
    noOrders_0_0.set(Text_57);
    ListOrdGrp_NoOrders_0.insert(Text_57.getString());
    FIX::TimeInForce TimeInForce_33('0');
    noOrders_0_0.set(TimeInForce_33);
    ListOrdGrp_NoOrders_0.insert(TimeInForce_33.getString());
    FIX::TradeDate TradeDate_21("LOCALMKTDATE_544967023");
    noOrders_0_0.set(TradeDate_21);
    ListOrdGrp_NoOrders_0.insert(TradeDate_21.getString());
    FIX::TradeOriginationDate TradeOriginationDate_13("LOCALMKTDATE_805563591");
    noOrders_0_0.set(TradeOriginationDate_13);
    ListOrdGrp_NoOrders_0.insert(TradeOriginationDate_13.getString());
    FIX::TransactTime TransactTime_42(FIX::UTCTIMESTAMP(2, 55, 14, 26, 7, 2014));
    noOrders_0_0.set(TransactTime_42);
    ListOrdGrp_NoOrders_0.insert(TransactTime_42.getString());
    all_values.push_back(ListOrdGrp_NoOrders_0);
    all_compo_names.insert("ListOrdGrp.NoOrders");

    // CommissionData
    multiset<string> CommissionData_16;
    FIX::CommCurrency CommCurrency_16("EUR");
    noOrders_0_0.set(CommCurrency_16);
    CommissionData_16.insert(CommCurrency_16.getString());
    FIX::CommType CommType_16('2');
    noOrders_0_0.set(CommType_16);
    CommissionData_16.insert(CommType_16.getString());
    FIX::Commission Commission_16;
    Commission_16.setString("17489343");
    noOrders_0_0.set(Commission_16);
    CommissionData_16.insert(Commission_16.getString());
    FIX::FundRenewWaiv FundRenewWaiv_16('N');
    noOrders_0_0.set(FundRenewWaiv_16);
    CommissionData_16.insert(FundRenewWaiv_16.getString());
    all_values.push_back(CommissionData_16);
    all_compo_names.insert("CommissionData");

    // DiscretionInstructions
    multiset<string> DiscretionInstructions_4;
    FIX::DiscretionInst DiscretionInst_4('4');
    noOrders_0_0.set(DiscretionInst_4);
    DiscretionInstructions_4.insert(DiscretionInst_4.getString());
    FIX::DiscretionLimitType DiscretionLimitType_4(0);
    noOrders_0_0.set(DiscretionLimitType_4);
    DiscretionInstructions_4.insert(DiscretionLimitType_4.getString());
    FIX::DiscretionMoveType DiscretionMoveType_4(1);
    noOrders_0_0.set(DiscretionMoveType_4);
    DiscretionInstructions_4.insert(DiscretionMoveType_4.getString());
    FIX::DiscretionOffsetType DiscretionOffsetType_4(0);
    noOrders_0_0.set(DiscretionOffsetType_4);
    DiscretionInstructions_4.insert(DiscretionOffsetType_4.getString());
    FIX::DiscretionOffsetValue DiscretionOffsetValue_4;
    DiscretionOffsetValue_4.setString("21373021");
    noOrders_0_0.set(DiscretionOffsetValue_4);
    DiscretionInstructions_4.insert(DiscretionOffsetValue_4.getString());
    FIX::DiscretionRoundDirection DiscretionRoundDirection_4(2);
    noOrders_0_0.set(DiscretionRoundDirection_4);
    DiscretionInstructions_4.insert(DiscretionRoundDirection_4.getString());
    FIX::DiscretionScope DiscretionScope_4(2);
    noOrders_0_0.set(DiscretionScope_4);
    DiscretionInstructions_4.insert(DiscretionScope_4.getString());
    all_values.push_back(DiscretionInstructions_4);
    all_compo_names.insert("DiscretionInstructions");

    // DisplayInstruction
    multiset<string> DisplayInstruction_4;
    FIX::DisplayHighQty DisplayHighQty_4;
    DisplayHighQty_4.setString("751654");
    noOrders_0_0.set(DisplayHighQty_4);
    DisplayInstruction_4.insert(DisplayHighQty_4.getString());
    FIX::DisplayLowQty DisplayLowQty_4;
    DisplayLowQty_4.setString("4989729");
    noOrders_0_0.set(DisplayLowQty_4);
    DisplayInstruction_4.insert(DisplayLowQty_4.getString());
    FIX::DisplayMethod DisplayMethod_4('2');
    noOrders_0_0.set(DisplayMethod_4);
    DisplayInstruction_4.insert(DisplayMethod_4.getString());
    FIX::DisplayMinIncr DisplayMinIncr_4;
    DisplayMinIncr_4.setString("4197915");
    noOrders_0_0.set(DisplayMinIncr_4);
    DisplayInstruction_4.insert(DisplayMinIncr_4.getString());
    FIX::DisplayQty DisplayQty_4;
    DisplayQty_4.setString("13244492");
    noOrders_0_0.set(DisplayQty_4);
    DisplayInstruction_4.insert(DisplayQty_4.getString());
    FIX::DisplayWhen DisplayWhen_4('1');
    noOrders_0_0.set(DisplayWhen_4);
    DisplayInstruction_4.insert(DisplayWhen_4.getString());
    FIX::RefreshQty RefreshQty_4;
    RefreshQty_4.setString("17213257");
    noOrders_0_0.set(RefreshQty_4);
    DisplayInstruction_4.insert(RefreshQty_4.getString());
    FIX::SecondaryDisplayQty SecondaryDisplayQty_4;
    SecondaryDisplayQty_4.setString("11260366");
    noOrders_0_0.set(SecondaryDisplayQty_4);
    DisplayInstruction_4.insert(SecondaryDisplayQty_4.getString());
    all_values.push_back(DisplayInstruction_4);
    all_compo_names.insert("DisplayInstruction");

    // Instrument
    multiset<string> Instrument_48;
    FIX::AttachmentPoint AttachmentPoint_48;
    AttachmentPoint_48.setString("86.710000");
    noOrders_0_0.set(AttachmentPoint_48);
    Instrument_48.insert(AttachmentPoint_48.getString());
    FIX::CFICode CFICode_48("STRING_435054581");
    noOrders_0_0.set(CFICode_48);
    Instrument_48.insert(CFICode_48.getString());
    FIX::CPProgram CPProgram_48(1);
    noOrders_0_0.set(CPProgram_48);
    Instrument_48.insert(CPProgram_48.getString());
    FIX::CPRegType CPRegType_48("STRING_1251552262");
    noOrders_0_0.set(CPRegType_48);
    Instrument_48.insert(CPRegType_48.getString());
    FIX::CapPrice CapPrice_48;
    CapPrice_48.setString("21144891");
    noOrders_0_0.set(CapPrice_48);
    Instrument_48.insert(CapPrice_48.getString());
    FIX::ContractMultiplier ContractMultiplier_48;
    ContractMultiplier_48.setString("3332683");
    noOrders_0_0.set(ContractMultiplier_48);
    Instrument_48.insert(ContractMultiplier_48.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_48(0);
    noOrders_0_0.set(ContractMultiplierUnit_48);
    Instrument_48.insert(ContractMultiplierUnit_48.getString());
    FIX::ContractSettlMonth ContractSettlMonth_48("MONTHYEAR_1377991662");
    noOrders_0_0.set(ContractSettlMonth_48);
    Instrument_48.insert(ContractSettlMonth_48.getString());
    FIX::CountryOfIssue CountryOfIssue_48("COUNTRY_228452698");
    noOrders_0_0.set(CountryOfIssue_48);
    Instrument_48.insert(CountryOfIssue_48.getString());
    FIX::CouponPaymentDate CouponPaymentDate_48("LOCALMKTDATE_1887026343");
    noOrders_0_0.set(CouponPaymentDate_48);
    Instrument_48.insert(CouponPaymentDate_48.getString());
    FIX::CouponRate CouponRate_48;
    CouponRate_48.setString("25.260000");
    noOrders_0_0.set(CouponRate_48);
    Instrument_48.insert(CouponRate_48.getString());
    FIX::CreditRating CreditRating_48("STRING_1987650797");
    noOrders_0_0.set(CreditRating_48);
    Instrument_48.insert(CreditRating_48.getString());
    FIX::DatedDate DatedDate_48("LOCALMKTDATE_1388159193");
    noOrders_0_0.set(DatedDate_48);
    Instrument_48.insert(DatedDate_48.getString());
    FIX::DetachmentPoint DetachmentPoint_48;
    DetachmentPoint_48.setString("63.880000");
    noOrders_0_0.set(DetachmentPoint_48);
    Instrument_48.insert(DetachmentPoint_48.getString());
    FIX::EncodedIssuer EncodedIssuer_48("DATA_1589101463");
    noOrders_0_0.set(EncodedIssuer_48);
    Instrument_48.insert(EncodedIssuer_48.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_48(2145445983);
    noOrders_0_0.set(EncodedIssuerLen_48);
    Instrument_48.insert(EncodedIssuerLen_48.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_48("DATA_1989792560");
    noOrders_0_0.set(EncodedSecurityDesc_48);
    Instrument_48.insert(EncodedSecurityDesc_48.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_48(1143161061);
    noOrders_0_0.set(EncodedSecurityDescLen_48);
    Instrument_48.insert(EncodedSecurityDescLen_48.getString());
    FIX::ExerciseStyle ExerciseStyle_48(2);
    noOrders_0_0.set(ExerciseStyle_48);
    Instrument_48.insert(ExerciseStyle_48.getString());
    FIX::Factor Factor_48;
    Factor_48.setString("18809510");
    noOrders_0_0.set(Factor_48);
    Instrument_48.insert(Factor_48.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_48(false);
    noOrders_0_0.set(FlexProductEligibilityIndicator_48);
    Instrument_48.insert(FlexProductEligibilityIndicator_48.getString());
    FIX::FlexibleIndicator FlexibleIndicator_48(true);
    noOrders_0_0.set(FlexibleIndicator_48);
    Instrument_48.insert(FlexibleIndicator_48.getString());
    FIX::FloorPrice FloorPrice_48;
    FloorPrice_48.setString("13021486");
    noOrders_0_0.set(FloorPrice_48);
    Instrument_48.insert(FloorPrice_48.getString());
    FIX::FlowScheduleType FlowScheduleType_48(2);
    noOrders_0_0.set(FlowScheduleType_48);
    Instrument_48.insert(FlowScheduleType_48.getString());
    FIX::InstrRegistry InstrRegistry_48("STRING_1093831300");
    noOrders_0_0.set(InstrRegistry_48);
    Instrument_48.insert(InstrRegistry_48.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_48('8');
    noOrders_0_0.set(InstrmtAssignmentMethod_48);
    Instrument_48.insert(InstrmtAssignmentMethod_48.getString());
    FIX::InterestAccrualDate InterestAccrualDate_48("LOCALMKTDATE_1627936527");
    noOrders_0_0.set(InterestAccrualDate_48);
    Instrument_48.insert(InterestAccrualDate_48.getString());
    FIX::IssueDate IssueDate_48("LOCALMKTDATE_270796870");
    noOrders_0_0.set(IssueDate_48);
    Instrument_48.insert(IssueDate_48.getString());
    FIX::Issuer Issuer_48("STRING_616570643");
    noOrders_0_0.set(Issuer_48);
    Instrument_48.insert(Issuer_48.getString());
    FIX::ListMethod ListMethod_48(0);
    noOrders_0_0.set(ListMethod_48);
    Instrument_48.insert(ListMethod_48.getString());
    FIX::LocaleOfIssue LocaleOfIssue_48("STRING_1396833501");
    noOrders_0_0.set(LocaleOfIssue_48);
    Instrument_48.insert(LocaleOfIssue_48.getString());
    FIX::MaturityDate MaturityDate_48("LOCALMKTDATE_1062559314");
    noOrders_0_0.set(MaturityDate_48);
    Instrument_48.insert(MaturityDate_48.getString());
    FIX::MaturityMonthYear MaturityMonthYear_48("MONTHYEAR_1636833169");
    noOrders_0_0.set(MaturityMonthYear_48);
    Instrument_48.insert(MaturityMonthYear_48.getString());
    FIX::MaturityTime MaturityTime_48("TZTIMEONLY_920353507");
    noOrders_0_0.set(MaturityTime_48);
    Instrument_48.insert(MaturityTime_48.getString());
    FIX::MinPriceIncrement MinPriceIncrement_48;
    MinPriceIncrement_48.setString("1666279");
    noOrders_0_0.set(MinPriceIncrement_48);
    Instrument_48.insert(MinPriceIncrement_48.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_48;
    MinPriceIncrementAmount_48.setString("16038386");
    noOrders_0_0.set(MinPriceIncrementAmount_48);
    Instrument_48.insert(MinPriceIncrementAmount_48.getString());
    FIX::NTPositionLimit NTPositionLimit_48(1253621900);
    noOrders_0_0.set(NTPositionLimit_48);
    Instrument_48.insert(NTPositionLimit_48.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_48;
    NotionalPercentageOutstanding_48.setString("54.370000");
    noOrders_0_0.set(NotionalPercentageOutstanding_48);
    Instrument_48.insert(NotionalPercentageOutstanding_48.getString());
    FIX::OptAttribute OptAttribute_48('8');
    noOrders_0_0.set(OptAttribute_48);
    Instrument_48.insert(OptAttribute_48.getString());
    FIX::OptPayoutAmount OptPayoutAmount_48;
    OptPayoutAmount_48.setString("14820745");
    noOrders_0_0.set(OptPayoutAmount_48);
    Instrument_48.insert(OptPayoutAmount_48.getString());
    FIX::OptPayoutType OptPayoutType_48(1);
    noOrders_0_0.set(OptPayoutType_48);
    Instrument_48.insert(OptPayoutType_48.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_48;
    OriginalNotionalPercentageOutstanding_48.setString("55.490000");
    noOrders_0_0.set(OriginalNotionalPercentageOutstanding_48);
    Instrument_48.insert(OriginalNotionalPercentageOutstanding_48.getString());
    FIX::Pool Pool_48("STRING_1322241747");
    noOrders_0_0.set(Pool_48);
    Instrument_48.insert(Pool_48.getString());
    FIX::PositionLimit PositionLimit_48(328493677);
    noOrders_0_0.set(PositionLimit_48);
    Instrument_48.insert(PositionLimit_48.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_48("STRING_INX");
    noOrders_0_0.set(PriceQuoteMethod_48);
    Instrument_48.insert(PriceQuoteMethod_48.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_48("STRING_763859562");
    noOrders_0_0.set(PriceUnitOfMeasure_48);
    Instrument_48.insert(PriceUnitOfMeasure_48.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_48;
    PriceUnitOfMeasureQty_48.setString("3264560");
    noOrders_0_0.set(PriceUnitOfMeasureQty_48);
    Instrument_48.insert(PriceUnitOfMeasureQty_48.getString());
    FIX::Product Product_50(1);
    noOrders_0_0.set(Product_50);
    Instrument_48.insert(Product_50.getString());
    FIX::ProductComplex ProductComplex_48("STRING_1907020623");
    noOrders_0_0.set(ProductComplex_48);
    Instrument_48.insert(ProductComplex_48.getString());
    FIX::PutOrCall PutOrCall_48(1);
    noOrders_0_0.set(PutOrCall_48);
    Instrument_48.insert(PutOrCall_48.getString());
    FIX::RedemptionDate RedemptionDate_48("LOCALMKTDATE_1169738209");
    noOrders_0_0.set(RedemptionDate_48);
    Instrument_48.insert(RedemptionDate_48.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_48("STRING_892516509");
    noOrders_0_0.set(RepoCollateralSecurityType_48);
    Instrument_48.insert(RepoCollateralSecurityType_48.getString());
    FIX::RepurchaseRate RepurchaseRate_48;
    RepurchaseRate_48.setString("3.150000");
    noOrders_0_0.set(RepurchaseRate_48);
    Instrument_48.insert(RepurchaseRate_48.getString());
    FIX::RepurchaseTerm RepurchaseTerm_48(324403198);
    noOrders_0_0.set(RepurchaseTerm_48);
    Instrument_48.insert(RepurchaseTerm_48.getString());
    FIX::RestructuringType RestructuringType_48("STRING_FR");
    noOrders_0_0.set(RestructuringType_48);
    Instrument_48.insert(RestructuringType_48.getString());
    FIX::SecurityDesc SecurityDesc_48("STRING_264627967");
    noOrders_0_0.set(SecurityDesc_48);
    Instrument_48.insert(SecurityDesc_48.getString());
    FIX::SecurityExchange SecurityExchange_48("EXCHANGE_1167979925");
    noOrders_0_0.set(SecurityExchange_48);
    Instrument_48.insert(SecurityExchange_48.getString());
    FIX::SecurityGroup SecurityGroup_48("STRING_1581114335");
    noOrders_0_0.set(SecurityGroup_48);
    Instrument_48.insert(SecurityGroup_48.getString());
    FIX::SecurityID SecurityID_48("STRING_535424838");
    noOrders_0_0.set(SecurityID_48);
    Instrument_48.insert(SecurityID_48.getString());
    FIX::SecurityIDSource SecurityIDSource_48("STRING_L");
    noOrders_0_0.set(SecurityIDSource_48);
    Instrument_48.insert(SecurityIDSource_48.getString());
    FIX::SecurityStatus SecurityStatus_48("STRING_2");
    noOrders_0_0.set(SecurityStatus_48);
    Instrument_48.insert(SecurityStatus_48.getString());
    FIX::SecuritySubType SecuritySubType_49("STRING_1932258339");
    noOrders_0_0.set(SecuritySubType_49);
    Instrument_48.insert(SecuritySubType_49.getString());
    FIX::SecurityType SecurityType_50("STRING_TECP");
    noOrders_0_0.set(SecurityType_50);
    Instrument_48.insert(SecurityType_50.getString());
    FIX::Seniority Seniority_48("STRING_SR");
    noOrders_0_0.set(Seniority_48);
    Instrument_48.insert(Seniority_48.getString());
    FIX::SettlMethod SettlMethod_48('P');
    noOrders_0_0.set(SettlMethod_48);
    Instrument_48.insert(SettlMethod_48.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_48("STRING_866254162");
    noOrders_0_0.set(SettleOnOpenFlag_48);
    Instrument_48.insert(SettleOnOpenFlag_48.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_48("STRING_1728597453");
    noOrders_0_0.set(StateOrProvinceOfIssue_48);
    Instrument_48.insert(StateOrProvinceOfIssue_48.getString());
    FIX::StrikeCurrency StrikeCurrency_48("EUR");
    noOrders_0_0.set(StrikeCurrency_48);
    Instrument_48.insert(StrikeCurrency_48.getString());
    FIX::StrikeMultiplier StrikeMultiplier_48;
    StrikeMultiplier_48.setString("4154604");
    noOrders_0_0.set(StrikeMultiplier_48);
    Instrument_48.insert(StrikeMultiplier_48.getString());
    FIX::StrikePrice StrikePrice_48;
    StrikePrice_48.setString("12933410");
    noOrders_0_0.set(StrikePrice_48);
    Instrument_48.insert(StrikePrice_48.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_48(5);
    noOrders_0_0.set(StrikePriceBoundaryMethod_48);
    Instrument_48.insert(StrikePriceBoundaryMethod_48.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_48;
    StrikePriceBoundaryPrecision_48.setString("60.240000");
    noOrders_0_0.set(StrikePriceBoundaryPrecision_48);
    Instrument_48.insert(StrikePriceBoundaryPrecision_48.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_48(2);
    noOrders_0_0.set(StrikePriceDeterminationMethod_48);
    Instrument_48.insert(StrikePriceDeterminationMethod_48.getString());
    FIX::StrikeValue StrikeValue_48;
    StrikeValue_48.setString("14833577");
    noOrders_0_0.set(StrikeValue_48);
    Instrument_48.insert(StrikeValue_48.getString());
    FIX::Symbol Symbol_48("STRING_266234313");
    noOrders_0_0.set(Symbol_48);
    Instrument_48.insert(Symbol_48.getString());
    FIX::SymbolSfx SymbolSfx_48("STRING_WI");
    noOrders_0_0.set(SymbolSfx_48);
    Instrument_48.insert(SymbolSfx_48.getString());
    FIX::TimeUnit TimeUnit_48("STRING_Yr");
    noOrders_0_0.set(TimeUnit_48);
    Instrument_48.insert(TimeUnit_48.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_48(3);
    noOrders_0_0.set(UnderlyingPriceDeterminationMethod_48);
    Instrument_48.insert(UnderlyingPriceDeterminationMethod_48.getString());
    FIX::UnitOfMeasure UnitOfMeasure_48("STRING_Bcf");
    noOrders_0_0.set(UnitOfMeasure_48);
    Instrument_48.insert(UnitOfMeasure_48.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_48;
    UnitOfMeasureQty_48.setString("3857520");
    noOrders_0_0.set(UnitOfMeasureQty_48);
    Instrument_48.insert(UnitOfMeasureQty_48.getString());
    FIX::ValuationMethod ValuationMethod_48("STRING_CDS");
    noOrders_0_0.set(ValuationMethod_48);
    Instrument_48.insert(ValuationMethod_48.getString());
    all_values.push_back(Instrument_48);
    all_compo_names.insert("Instrument");

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::NewOrderList::NoOrders::NoComplexEvents noComplexEvents_0_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_97;
      FIX::ComplexEventCondition ComplexEventCondition_97(2);
      noComplexEvents_0_1_0.set(ComplexEventCondition_97);
      ComplexEvents_NoComplexEvents_97.insert(ComplexEventCondition_97.getString());
      FIX::ComplexEventPrice ComplexEventPrice_97;
      ComplexEventPrice_97.setString("10491629");
      noComplexEvents_0_1_0.set(ComplexEventPrice_97);
      ComplexEvents_NoComplexEvents_97.insert(ComplexEventPrice_97.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_97(5);
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryMethod_97);
      ComplexEvents_NoComplexEvents_97.insert(ComplexEventPriceBoundaryMethod_97.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_97;
      ComplexEventPriceBoundaryPrecision_97.setString("3.650000");
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryPrecision_97);
      ComplexEvents_NoComplexEvents_97.insert(ComplexEventPriceBoundaryPrecision_97.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_97(1);
      noComplexEvents_0_1_0.set(ComplexEventPriceTimeType_97);
      ComplexEvents_NoComplexEvents_97.insert(ComplexEventPriceTimeType_97.getString());
      FIX::ComplexEventType ComplexEventType_97(1);
      noComplexEvents_0_1_0.set(ComplexEventType_97);
      ComplexEvents_NoComplexEvents_97.insert(ComplexEventType_97.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_97;
      ComplexOptPayoutAmount_97.setString("3566015");
      noComplexEvents_0_1_0.set(ComplexOptPayoutAmount_97);
      ComplexEvents_NoComplexEvents_97.insert(ComplexOptPayoutAmount_97.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_97);
      all_compo_names.insert("ComplexEvents.NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_201;
        FIX::ComplexEventEndDate ComplexEventEndDate_201(FIX::UTCTIMESTAMP(22, 14, 43, 17, 2, 2014));
        noComplexEventDates_0_0_2_0.set(ComplexEventEndDate_201);
        ComplexEventDates_NoComplexEventDates_201.insert(ComplexEventEndDate_201.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_201(FIX::UTCTIMESTAMP(20, 24, 26, 8, 5, 2005));
        noComplexEventDates_0_0_2_0.set(ComplexEventStartDate_201);
        ComplexEventDates_NoComplexEventDates_201.insert(ComplexEventStartDate_201.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_201);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_408;
          FIX::ComplexEventEndTime ComplexEventEndTime_408(FIX::UTCTIMEONLY(22, 52, 8));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventEndTime_408);
          ComplexEventTimes_NoComplexEventTimes_408.insert(ComplexEventEndTime_408.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_408(FIX::UTCTIMEONLY(2, 52, 5));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventStartTime_408);
          ComplexEventTimes_NoComplexEventTimes_408.insert(ComplexEventStartTime_408.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_408);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_202;
        FIX::ComplexEventEndDate ComplexEventEndDate_202(FIX::UTCTIMESTAMP(14, 29, 1, 25, 2, 2004));
        noComplexEventDates_0_0_2_1.set(ComplexEventEndDate_202);
        ComplexEventDates_NoComplexEventDates_202.insert(ComplexEventEndDate_202.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_202(FIX::UTCTIMESTAMP(8, 2, 20, 27, 9, 2015));
        noComplexEventDates_0_0_2_1.set(ComplexEventStartDate_202);
        ComplexEventDates_NoComplexEventDates_202.insert(ComplexEventStartDate_202.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_202);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_409;
          FIX::ComplexEventEndTime ComplexEventEndTime_409(FIX::UTCTIMEONLY(9, 24, 54));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventEndTime_409);
          ComplexEventTimes_NoComplexEventTimes_409.insert(ComplexEventEndTime_409.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_409(FIX::UTCTIMEONLY(4, 41, 40));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventStartTime_409);
          ComplexEventTimes_NoComplexEventTimes_409.insert(ComplexEventStartTime_409.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_409);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_410;
          FIX::ComplexEventEndTime ComplexEventEndTime_410(FIX::UTCTIMEONLY(20, 24, 19));
          noComplexEventTimes_0_0_1_3_1.set(ComplexEventEndTime_410);
          ComplexEventTimes_NoComplexEventTimes_410.insert(ComplexEventEndTime_410.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_410(FIX::UTCTIMEONLY(15, 11, 35));
          noComplexEventTimes_0_0_1_3_1.set(ComplexEventStartTime_410);
          ComplexEventTimes_NoComplexEventTimes_410.insert(ComplexEventStartTime_410.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_410);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_1);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_411;
          FIX::ComplexEventEndTime ComplexEventEndTime_411(FIX::UTCTIMEONLY(13, 56, 28));
          noComplexEventTimes_0_0_1_3_2.set(ComplexEventEndTime_411);
          ComplexEventTimes_NoComplexEventTimes_411.insert(ComplexEventEndTime_411.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_411(FIX::UTCTIMEONLY(9, 44, 48));
          noComplexEventTimes_0_0_1_3_2.set(ComplexEventStartTime_411);
          ComplexEventTimes_NoComplexEventTimes_411.insert(ComplexEventStartTime_411.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_411);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_2);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_1);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_203;
        FIX::ComplexEventEndDate ComplexEventEndDate_203(FIX::UTCTIMESTAMP(2, 8, 41, 14, 10, 2013));
        noComplexEventDates_0_0_2_2.set(ComplexEventEndDate_203);
        ComplexEventDates_NoComplexEventDates_203.insert(ComplexEventEndDate_203.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_203(FIX::UTCTIMESTAMP(22, 13, 21, 16, 6, 2001));
        noComplexEventDates_0_0_2_2.set(ComplexEventStartDate_203);
        ComplexEventDates_NoComplexEventDates_203.insert(ComplexEventStartDate_203.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_203);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_412;
          FIX::ComplexEventEndTime ComplexEventEndTime_412(FIX::UTCTIMEONLY(3, 25, 47));
          noComplexEventTimes_0_0_2_3_0.set(ComplexEventEndTime_412);
          ComplexEventTimes_NoComplexEventTimes_412.insert(ComplexEventEndTime_412.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_412(FIX::UTCTIMEONLY(16, 50, 23));
          noComplexEventTimes_0_0_2_3_0.set(ComplexEventStartTime_412);
          ComplexEventTimes_NoComplexEventTimes_412.insert(ComplexEventStartTime_412.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_412);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_0_2_2.addGroup(noComplexEventTimes_0_0_2_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_413;
          FIX::ComplexEventEndTime ComplexEventEndTime_413(FIX::UTCTIMEONLY(7, 20, 59));
          noComplexEventTimes_0_0_2_3_1.set(ComplexEventEndTime_413);
          ComplexEventTimes_NoComplexEventTimes_413.insert(ComplexEventEndTime_413.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_413(FIX::UTCTIMEONLY(9, 35, 41));
          noComplexEventTimes_0_0_2_3_1.set(ComplexEventStartTime_413);
          ComplexEventTimes_NoComplexEventTimes_413.insert(ComplexEventStartTime_413.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_413);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_0_2_2.addGroup(noComplexEventTimes_0_0_2_3_1);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_414;
          FIX::ComplexEventEndTime ComplexEventEndTime_414(FIX::UTCTIMEONLY(17, 41, 28));
          noComplexEventTimes_0_0_2_3_2.set(ComplexEventEndTime_414);
          ComplexEventTimes_NoComplexEventTimes_414.insert(ComplexEventEndTime_414.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_414(FIX::UTCTIMEONLY(6, 9, 15));
          noComplexEventTimes_0_0_2_3_2.set(ComplexEventStartTime_414);
          ComplexEventTimes_NoComplexEventTimes_414.insert(ComplexEventStartTime_414.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_414);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_0_2_2.addGroup(noComplexEventTimes_0_0_2_3_2);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_2);
      }
      noOrders_0_0.addGroup(noComplexEvents_0_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoComplexEvents noComplexEvents_0_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_98;
      FIX::ComplexEventCondition ComplexEventCondition_98(2);
      noComplexEvents_0_1_1.set(ComplexEventCondition_98);
      ComplexEvents_NoComplexEvents_98.insert(ComplexEventCondition_98.getString());
      FIX::ComplexEventPrice ComplexEventPrice_98;
      ComplexEventPrice_98.setString("15859294");
      noComplexEvents_0_1_1.set(ComplexEventPrice_98);
      ComplexEvents_NoComplexEvents_98.insert(ComplexEventPrice_98.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_98(2);
      noComplexEvents_0_1_1.set(ComplexEventPriceBoundaryMethod_98);
      ComplexEvents_NoComplexEvents_98.insert(ComplexEventPriceBoundaryMethod_98.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_98;
      ComplexEventPriceBoundaryPrecision_98.setString("32.050000");
      noComplexEvents_0_1_1.set(ComplexEventPriceBoundaryPrecision_98);
      ComplexEvents_NoComplexEvents_98.insert(ComplexEventPriceBoundaryPrecision_98.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_98(2);
      noComplexEvents_0_1_1.set(ComplexEventPriceTimeType_98);
      ComplexEvents_NoComplexEvents_98.insert(ComplexEventPriceTimeType_98.getString());
      FIX::ComplexEventType ComplexEventType_98(3);
      noComplexEvents_0_1_1.set(ComplexEventType_98);
      ComplexEvents_NoComplexEvents_98.insert(ComplexEventType_98.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_98;
      ComplexOptPayoutAmount_98.setString("14098497");
      noComplexEvents_0_1_1.set(ComplexOptPayoutAmount_98);
      ComplexEvents_NoComplexEvents_98.insert(ComplexOptPayoutAmount_98.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_98);
      all_compo_names.insert("ComplexEvents.NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_204;
        FIX::ComplexEventEndDate ComplexEventEndDate_204(FIX::UTCTIMESTAMP(11, 30, 31, 27, 9, 2006));
        noComplexEventDates_0_1_2_0.set(ComplexEventEndDate_204);
        ComplexEventDates_NoComplexEventDates_204.insert(ComplexEventEndDate_204.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_204(FIX::UTCTIMESTAMP(3, 6, 21, 13, 9, 2002));
        noComplexEventDates_0_1_2_0.set(ComplexEventStartDate_204);
        ComplexEventDates_NoComplexEventDates_204.insert(ComplexEventStartDate_204.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_204);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_415;
          FIX::ComplexEventEndTime ComplexEventEndTime_415(FIX::UTCTIMEONLY(5, 48, 27));
          noComplexEventTimes_0_1_0_3_0.set(ComplexEventEndTime_415);
          ComplexEventTimes_NoComplexEventTimes_415.insert(ComplexEventEndTime_415.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_415(FIX::UTCTIMEONLY(6, 36, 4));
          noComplexEventTimes_0_1_0_3_0.set(ComplexEventStartTime_415);
          ComplexEventTimes_NoComplexEventTimes_415.insert(ComplexEventStartTime_415.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_415);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

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
      multiset<string> EvntGrp_NoEvents_86;
      FIX::EventDate EventDate_86("LOCALMKTDATE_78118490");
      noEvents_0_1_0.set(EventDate_86);
      EvntGrp_NoEvents_86.insert(EventDate_86.getString());
      FIX::EventPx EventPx_86;
      EventPx_86.setString("17039074");
      noEvents_0_1_0.set(EventPx_86);
      EvntGrp_NoEvents_86.insert(EventPx_86.getString());
      FIX::EventText EventText_86("STRING_1507214713");
      noEvents_0_1_0.set(EventText_86);
      EvntGrp_NoEvents_86.insert(EventText_86.getString());
      FIX::EventTime EventTime_86(FIX::UTCTIMESTAMP(0, 51, 5, 27, 7, 2011));
      noEvents_0_1_0.set(EventTime_86);
      EvntGrp_NoEvents_86.insert(EventTime_86.getString());
      FIX::EventType EventType_86(3);
      noEvents_0_1_0.set(EventType_86);
      EvntGrp_NoEvents_86.insert(EventType_86.getString());
      all_values.push_back(EvntGrp_NoEvents_86);
      all_compo_names.insert("EvntGrp.NoEvents");

      noOrders_0_0.addGroup(noEvents_0_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoEvents noEvents_0_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_87;
      FIX::EventDate EventDate_87("LOCALMKTDATE_1429156801");
      noEvents_0_1_1.set(EventDate_87);
      EvntGrp_NoEvents_87.insert(EventDate_87.getString());
      FIX::EventPx EventPx_87;
      EventPx_87.setString("21412453");
      noEvents_0_1_1.set(EventPx_87);
      EvntGrp_NoEvents_87.insert(EventPx_87.getString());
      FIX::EventText EventText_87("STRING_1331230668");
      noEvents_0_1_1.set(EventText_87);
      EvntGrp_NoEvents_87.insert(EventText_87.getString());
      FIX::EventTime EventTime_87(FIX::UTCTIMESTAMP(3, 47, 52, 8, 12, 2010));
      noEvents_0_1_1.set(EventTime_87);
      EvntGrp_NoEvents_87.insert(EventTime_87.getString());
      FIX::EventType EventType_87(99);
      noEvents_0_1_1.set(EventType_87);
      EvntGrp_NoEvents_87.insert(EventType_87.getString());
      all_values.push_back(EvntGrp_NoEvents_87);
      all_compo_names.insert("EvntGrp.NoEvents");

      noOrders_0_0.addGroup(noEvents_0_1_1);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoEvents noEvents_0_1_2;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_88;
      FIX::EventDate EventDate_88("LOCALMKTDATE_1699187226");
      noEvents_0_1_2.set(EventDate_88);
      EvntGrp_NoEvents_88.insert(EventDate_88.getString());
      FIX::EventPx EventPx_88;
      EventPx_88.setString("72845");
      noEvents_0_1_2.set(EventPx_88);
      EvntGrp_NoEvents_88.insert(EventPx_88.getString());
      FIX::EventText EventText_88("STRING_45792519");
      noEvents_0_1_2.set(EventText_88);
      EvntGrp_NoEvents_88.insert(EventText_88.getString());
      FIX::EventTime EventTime_88(FIX::UTCTIMESTAMP(15, 57, 1, 23, 2, 2015));
      noEvents_0_1_2.set(EventTime_88);
      EvntGrp_NoEvents_88.insert(EventTime_88.getString());
      FIX::EventType EventType_88(17);
      noEvents_0_1_2.set(EventType_88);
      EvntGrp_NoEvents_88.insert(EventType_88.getString());
      all_values.push_back(EvntGrp_NoEvents_88);
      all_compo_names.insert("EvntGrp.NoEvents");

      noOrders_0_0.addGroup(noEvents_0_1_2);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::NewOrderList::NoOrders::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_95;
      FIX::InstrumentPartyID InstrumentPartyID_95("STRING_62832244");
      noInstrumentParties_0_1_0.set(InstrumentPartyID_95);
      InstrumentParties_NoInstrumentParties_95.insert(InstrumentPartyID_95.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_95('1');
      noInstrumentParties_0_1_0.set(InstrumentPartyIDSource_95);
      InstrumentParties_NoInstrumentParties_95.insert(InstrumentPartyIDSource_95.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_95(1863954861);
      noInstrumentParties_0_1_0.set(InstrumentPartyRole_95);
      InstrumentParties_NoInstrumentParties_95.insert(InstrumentPartyRole_95.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_95);
      all_compo_names.insert("InstrumentParties.NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderList::NoOrders::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_183;
        FIX::InstrumentPartySubID InstrumentPartySubID_183("STRING_170899668");
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubID_183);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_183.insert(InstrumentPartySubID_183.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_183(1924618635);
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubIDType_183);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_183.insert(InstrumentPartySubIDType_183.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_183);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      noOrders_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::NewOrderList::NoOrders::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_89;
      FIX::SecurityAltID SecurityAltID_89("STRING_1681025870");
      noSecurityAltID_0_1_0.set(SecurityAltID_89);
      SecAltIDGrp_NoSecurityAltID_89.insert(SecurityAltID_89.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_89("STRING_1206291788");
      noSecurityAltID_0_1_0.set(SecurityAltIDSource_89);
      SecAltIDGrp_NoSecurityAltID_89.insert(SecurityAltIDSource_89.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_89);
      all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

      noOrders_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    // SecurityXML
    multiset<string> SecurityXML_96;
    FIX::SecurityXML SecurityXML_97("XMLDATA_1251111033");
    noOrders_0_0.set(SecurityXML_97);
    FIX::SecurityXMLLen SecurityXMLLen_48(864772890);
    noOrders_0_0.set(SecurityXMLLen_48);
    FIX::SecurityXMLSchema SecurityXMLSchema_48("STRING_975131911");
    noOrders_0_0.set(SecurityXMLSchema_48);
    SecurityXML_96.insert(SecurityXMLSchema_48.getString());
    all_values.push_back(SecurityXML_96);
    all_compo_names.insert("SecurityXML");

    // OrderQtyData
    multiset<string> OrderQtyData_12;
    FIX::CashOrderQty CashOrderQty_12;
    CashOrderQty_12.setString("5664292");
    noOrders_0_0.set(CashOrderQty_12);
    OrderQtyData_12.insert(CashOrderQty_12.getString());
    FIX::OrderPercent OrderPercent_12;
    OrderPercent_12.setString("17.370000");
    noOrders_0_0.set(OrderPercent_12);
    OrderQtyData_12.insert(OrderPercent_12.getString());
    FIX::OrderQty OrderQty_22;
    OrderQty_22.setString("7947588");
    noOrders_0_0.set(OrderQty_22);
    OrderQtyData_12.insert(OrderQty_22.getString());
    FIX::RoundingDirection RoundingDirection_12('0');
    noOrders_0_0.set(RoundingDirection_12);
    OrderQtyData_12.insert(RoundingDirection_12.getString());
    FIX::RoundingModulus RoundingModulus_12;
    RoundingModulus_12.setString("694131");
    noOrders_0_0.set(RoundingModulus_12);
    OrderQtyData_12.insert(RoundingModulus_12.getString());
    all_values.push_back(OrderQtyData_12);
    all_compo_names.insert("OrderQtyData");

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::NewOrderList::NoOrders::NoPartyIDs noPartyIDs_0_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_64;
      FIX::PartyID PartyID_64("STRING_1835878484");
      noPartyIDs_0_1_0.set(PartyID_64);
      Parties_NoPartyIDs_64.insert(PartyID_64.getString());
      FIX::PartyIDSource PartyIDSource_64('8');
      noPartyIDs_0_1_0.set(PartyIDSource_64);
      Parties_NoPartyIDs_64.insert(PartyIDSource_64.getString());
      FIX::PartyRole PartyRole_64(13);
      noPartyIDs_0_1_0.set(PartyRole_64);
      Parties_NoPartyIDs_64.insert(PartyRole_64.getString());
      all_values.push_back(Parties_NoPartyIDs_64);
      all_compo_names.insert("Parties.NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::NewOrderList::NoOrders::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_143;
        FIX::PartySubID PartySubID_143("STRING_1693534479");
        noPartySubIDs_0_0_2_0.set(PartySubID_143);
        PtysSubGrp_NoPartySubIDs_143.insert(PartySubID_143.getString());
        FIX::PartySubIDType PartySubIDType_143(28);
        noPartySubIDs_0_0_2_0.set(PartySubIDType_143);
        PtysSubGrp_NoPartySubIDs_143.insert(PartySubIDType_143.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_143);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_144;
        FIX::PartySubID PartySubID_144("STRING_1512968832");
        noPartySubIDs_0_0_2_1.set(PartySubID_144);
        PtysSubGrp_NoPartySubIDs_144.insert(PartySubID_144.getString());
        FIX::PartySubIDType PartySubIDType_144(27);
        noPartySubIDs_0_0_2_1.set(PartySubIDType_144);
        PtysSubGrp_NoPartySubIDs_144.insert(PartySubIDType_144.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_144);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_145;
        FIX::PartySubID PartySubID_145("STRING_1222430011");
        noPartySubIDs_0_0_2_2.set(PartySubID_145);
        PtysSubGrp_NoPartySubIDs_145.insert(PartySubID_145.getString());
        FIX::PartySubIDType PartySubIDType_145(9);
        noPartySubIDs_0_0_2_2.set(PartySubIDType_145);
        PtysSubGrp_NoPartySubIDs_145.insert(PartySubIDType_145.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_145);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_2);
      }
      noOrders_0_0.addGroup(noPartyIDs_0_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoPartyIDs noPartyIDs_0_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_65;
      FIX::PartyID PartyID_65("STRING_753383003");
      noPartyIDs_0_1_1.set(PartyID_65);
      Parties_NoPartyIDs_65.insert(PartyID_65.getString());
      FIX::PartyIDSource PartyIDSource_65('H');
      noPartyIDs_0_1_1.set(PartyIDSource_65);
      Parties_NoPartyIDs_65.insert(PartyIDSource_65.getString());
      FIX::PartyRole PartyRole_65(77);
      noPartyIDs_0_1_1.set(PartyRole_65);
      Parties_NoPartyIDs_65.insert(PartyRole_65.getString());
      all_values.push_back(Parties_NoPartyIDs_65);
      all_compo_names.insert("Parties.NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::NewOrderList::NoOrders::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_146;
        FIX::PartySubID PartySubID_146("STRING_1558771764");
        noPartySubIDs_0_1_2_0.set(PartySubID_146);
        PtysSubGrp_NoPartySubIDs_146.insert(PartySubID_146.getString());
        FIX::PartySubIDType PartySubIDType_146(28);
        noPartySubIDs_0_1_2_0.set(PartySubIDType_146);
        PtysSubGrp_NoPartySubIDs_146.insert(PartySubIDType_146.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_146);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_147;
        FIX::PartySubID PartySubID_147("STRING_1242294157");
        noPartySubIDs_0_1_2_1.set(PartySubID_147);
        PtysSubGrp_NoPartySubIDs_147.insert(PartySubID_147.getString());
        FIX::PartySubIDType PartySubIDType_147(28);
        noPartySubIDs_0_1_2_1.set(PartySubIDType_147);
        PtysSubGrp_NoPartySubIDs_147.insert(PartySubIDType_147.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_147);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_1);
      }
      noOrders_0_0.addGroup(noPartyIDs_0_1_1);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoPartyIDs noPartyIDs_0_1_2;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_66;
      FIX::PartyID PartyID_66("STRING_1688108419");
      noPartyIDs_0_1_2.set(PartyID_66);
      Parties_NoPartyIDs_66.insert(PartyID_66.getString());
      FIX::PartyIDSource PartyIDSource_66('8');
      noPartyIDs_0_1_2.set(PartyIDSource_66);
      Parties_NoPartyIDs_66.insert(PartyIDSource_66.getString());
      FIX::PartyRole PartyRole_66(68);
      noPartyIDs_0_1_2.set(PartyRole_66);
      Parties_NoPartyIDs_66.insert(PartyRole_66.getString());
      all_values.push_back(Parties_NoPartyIDs_66);
      all_compo_names.insert("Parties.NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::NewOrderList::NoOrders::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_2_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_148;
        FIX::PartySubID PartySubID_148("STRING_1603270847");
        noPartySubIDs_0_2_2_0.set(PartySubID_148);
        PtysSubGrp_NoPartySubIDs_148.insert(PartySubID_148.getString());
        FIX::PartySubIDType PartySubIDType_148(26);
        noPartySubIDs_0_2_2_0.set(PartySubIDType_148);
        PtysSubGrp_NoPartySubIDs_148.insert(PartySubIDType_148.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_148);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_0_1_2.addGroup(noPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_2_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_149;
        FIX::PartySubID PartySubID_149("STRING_1722048470");
        noPartySubIDs_0_2_2_1.set(PartySubID_149);
        PtysSubGrp_NoPartySubIDs_149.insert(PartySubID_149.getString());
        FIX::PartySubIDType PartySubIDType_149(21);
        noPartySubIDs_0_2_2_1.set(PartySubIDType_149);
        PtysSubGrp_NoPartySubIDs_149.insert(PartySubIDType_149.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_149);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_0_1_2.addGroup(noPartySubIDs_0_2_2_1);
      }
      noOrders_0_0.addGroup(noPartyIDs_0_1_2);
    }
    // PegInstructions
    multiset<string> PegInstructions_4;
    FIX::PegLimitType PegLimitType_4(1);
    noOrders_0_0.set(PegLimitType_4);
    PegInstructions_4.insert(PegLimitType_4.getString());
    FIX::PegMoveType PegMoveType_4(1);
    noOrders_0_0.set(PegMoveType_4);
    PegInstructions_4.insert(PegMoveType_4.getString());
    FIX::PegOffsetType PegOffsetType_4(1);
    noOrders_0_0.set(PegOffsetType_4);
    PegInstructions_4.insert(PegOffsetType_4.getString());
    FIX::PegOffsetValue PegOffsetValue_4;
    PegOffsetValue_4.setString("19621977");
    noOrders_0_0.set(PegOffsetValue_4);
    PegInstructions_4.insert(PegOffsetValue_4.getString());
    FIX::PegPriceType PegPriceType_4(1);
    noOrders_0_0.set(PegPriceType_4);
    PegInstructions_4.insert(PegPriceType_4.getString());
    FIX::PegRoundDirection PegRoundDirection_4(2);
    noOrders_0_0.set(PegRoundDirection_4);
    PegInstructions_4.insert(PegRoundDirection_4.getString());
    FIX::PegScope PegScope_4(2);
    noOrders_0_0.set(PegScope_4);
    PegInstructions_4.insert(PegScope_4.getString());
    FIX::PegSecurityDesc PegSecurityDesc_4("STRING_654716997");
    noOrders_0_0.set(PegSecurityDesc_4);
    PegInstructions_4.insert(PegSecurityDesc_4.getString());
    FIX::PegSecurityID PegSecurityID_4("STRING_488954528");
    noOrders_0_0.set(PegSecurityID_4);
    PegInstructions_4.insert(PegSecurityID_4.getString());
    FIX::PegSecurityIDSource PegSecurityIDSource_4("STRING_1129365261");
    noOrders_0_0.set(PegSecurityIDSource_4);
    PegInstructions_4.insert(PegSecurityIDSource_4.getString());
    FIX::PegSymbol PegSymbol_4("STRING_432317416");
    noOrders_0_0.set(PegSymbol_4);
    PegInstructions_4.insert(PegSymbol_4.getString());
    all_values.push_back(PegInstructions_4);
    all_compo_names.insert("PegInstructions");

    // PreAllocGrp
    // Group PreAllocGrp.NoAllocs
    {
      FIX50SP2::NewOrderList::NoOrders::NoAllocs noAllocs_0_1_0;
      // PreAllocGrp.NoAllocs
      multiset<string> PreAllocGrp_NoAllocs_13;
      FIX::AllocAccount AllocAccount_23("STRING_1240022933");
      noAllocs_0_1_0.set(AllocAccount_23);
      PreAllocGrp_NoAllocs_13.insert(AllocAccount_23.getString());
      FIX::AllocAcctIDSource AllocAcctIDSource_23(1654747427);
      noAllocs_0_1_0.set(AllocAcctIDSource_23);
      PreAllocGrp_NoAllocs_13.insert(AllocAcctIDSource_23.getString());
      FIX::AllocQty AllocQty_22;
      AllocQty_22.setString("9545678");
      noAllocs_0_1_0.set(AllocQty_22);
      PreAllocGrp_NoAllocs_13.insert(AllocQty_22.getString());
      FIX::AllocSettlCurrency AllocSettlCurrency_18("CAN");
      noAllocs_0_1_0.set(AllocSettlCurrency_18);
      PreAllocGrp_NoAllocs_13.insert(AllocSettlCurrency_18.getString());
      FIX::IndividualAllocID IndividualAllocID_23("STRING_1001586453");
      noAllocs_0_1_0.set(IndividualAllocID_23);
      PreAllocGrp_NoAllocs_13.insert(IndividualAllocID_23.getString());
      all_values.push_back(PreAllocGrp_NoAllocs_13);
      all_compo_names.insert("PreAllocGrp.NoAllocs");

      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_0_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_55;
        FIX::NestedPartyID NestedPartyID_55("STRING_1142235303");
        noNestedPartyIDs_0_0_2_0.set(NestedPartyID_55);
        NestedParties_NoNestedPartyIDs_55.insert(NestedPartyID_55.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_55('7');
        noNestedPartyIDs_0_0_2_0.set(NestedPartyIDSource_55);
        NestedParties_NoNestedPartyIDs_55.insert(NestedPartyIDSource_55.getString());
        FIX::NestedPartyRole NestedPartyRole_55(1904431694);
        noNestedPartyIDs_0_0_2_0.set(NestedPartyRole_55);
        NestedParties_NoNestedPartyIDs_55.insert(NestedPartyRole_55.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_55);
        all_compo_names.insert("NestedParties.NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_119;
          FIX::NestedPartySubID NestedPartySubID_119("STRING_305701009");
          noNestedPartySubIDs_0_0_0_3_0.set(NestedPartySubID_119);
          NstdPtysSubGrp_NoNestedPartySubIDs_119.insert(NestedPartySubID_119.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_119(109107861);
          noNestedPartySubIDs_0_0_0_3_0.set(NestedPartySubIDType_119);
          NstdPtysSubGrp_NoNestedPartySubIDs_119.insert(NestedPartySubIDType_119.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_119);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_0_0_2_0.addGroup(noNestedPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_120;
          FIX::NestedPartySubID NestedPartySubID_120("STRING_1987636742");
          noNestedPartySubIDs_0_0_0_3_1.set(NestedPartySubID_120);
          NstdPtysSubGrp_NoNestedPartySubIDs_120.insert(NestedPartySubID_120.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_120(1052617569);
          noNestedPartySubIDs_0_0_0_3_1.set(NestedPartySubIDType_120);
          NstdPtysSubGrp_NoNestedPartySubIDs_120.insert(NestedPartySubIDType_120.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_120);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_0_0_2_0.addGroup(noNestedPartySubIDs_0_0_0_3_1);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_0_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_121;
          FIX::NestedPartySubID NestedPartySubID_121("STRING_1712378708");
          noNestedPartySubIDs_0_0_0_3_2.set(NestedPartySubID_121);
          NstdPtysSubGrp_NoNestedPartySubIDs_121.insert(NestedPartySubID_121.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_121(1968139639);
          noNestedPartySubIDs_0_0_0_3_2.set(NestedPartySubIDType_121);
          NstdPtysSubGrp_NoNestedPartySubIDs_121.insert(NestedPartySubIDType_121.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_121);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_0_0_2_0.addGroup(noNestedPartySubIDs_0_0_0_3_2);
        }
        noAllocs_0_1_0.addGroup(noNestedPartyIDs_0_0_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_0_2_1;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_56;
        FIX::NestedPartyID NestedPartyID_56("STRING_627182391");
        noNestedPartyIDs_0_0_2_1.set(NestedPartyID_56);
        NestedParties_NoNestedPartyIDs_56.insert(NestedPartyID_56.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_56('1');
        noNestedPartyIDs_0_0_2_1.set(NestedPartyIDSource_56);
        NestedParties_NoNestedPartyIDs_56.insert(NestedPartyIDSource_56.getString());
        FIX::NestedPartyRole NestedPartyRole_56(1713440626);
        noNestedPartyIDs_0_0_2_1.set(NestedPartyRole_56);
        NestedParties_NoNestedPartyIDs_56.insert(NestedPartyRole_56.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_56);
        all_compo_names.insert("NestedParties.NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_1_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_122;
          FIX::NestedPartySubID NestedPartySubID_122("STRING_653483809");
          noNestedPartySubIDs_0_0_1_3_0.set(NestedPartySubID_122);
          NstdPtysSubGrp_NoNestedPartySubIDs_122.insert(NestedPartySubID_122.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_122(1528154721);
          noNestedPartySubIDs_0_0_1_3_0.set(NestedPartySubIDType_122);
          NstdPtysSubGrp_NoNestedPartySubIDs_122.insert(NestedPartySubIDType_122.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_122);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_0_0_2_1.addGroup(noNestedPartySubIDs_0_0_1_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_1_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_123;
          FIX::NestedPartySubID NestedPartySubID_123("STRING_1504884093");
          noNestedPartySubIDs_0_0_1_3_1.set(NestedPartySubID_123);
          NstdPtysSubGrp_NoNestedPartySubIDs_123.insert(NestedPartySubID_123.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_123(1408250982);
          noNestedPartySubIDs_0_0_1_3_1.set(NestedPartySubIDType_123);
          NstdPtysSubGrp_NoNestedPartySubIDs_123.insert(NestedPartySubIDType_123.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_123);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_0_0_2_1.addGroup(noNestedPartySubIDs_0_0_1_3_1);
        }
        noAllocs_0_1_0.addGroup(noNestedPartyIDs_0_0_2_1);
      }
      noOrders_0_0.addGroup(noAllocs_0_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoAllocs noAllocs_0_1_1;
      // PreAllocGrp.NoAllocs
      multiset<string> PreAllocGrp_NoAllocs_14;
      FIX::AllocAccount AllocAccount_24("STRING_963985502");
      noAllocs_0_1_1.set(AllocAccount_24);
      PreAllocGrp_NoAllocs_14.insert(AllocAccount_24.getString());
      FIX::AllocAcctIDSource AllocAcctIDSource_24(12117442);
      noAllocs_0_1_1.set(AllocAcctIDSource_24);
      PreAllocGrp_NoAllocs_14.insert(AllocAcctIDSource_24.getString());
      FIX::AllocQty AllocQty_23;
      AllocQty_23.setString("18972055");
      noAllocs_0_1_1.set(AllocQty_23);
      PreAllocGrp_NoAllocs_14.insert(AllocQty_23.getString());
      FIX::AllocSettlCurrency AllocSettlCurrency_19("CHF");
      noAllocs_0_1_1.set(AllocSettlCurrency_19);
      PreAllocGrp_NoAllocs_14.insert(AllocSettlCurrency_19.getString());
      FIX::IndividualAllocID IndividualAllocID_24("STRING_1751645223");
      noAllocs_0_1_1.set(IndividualAllocID_24);
      PreAllocGrp_NoAllocs_14.insert(IndividualAllocID_24.getString());
      all_values.push_back(PreAllocGrp_NoAllocs_14);
      all_compo_names.insert("PreAllocGrp.NoAllocs");

      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_57;
        FIX::NestedPartyID NestedPartyID_57("STRING_2099182286");
        noNestedPartyIDs_0_1_2_0.set(NestedPartyID_57);
        NestedParties_NoNestedPartyIDs_57.insert(NestedPartyID_57.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_57('5');
        noNestedPartyIDs_0_1_2_0.set(NestedPartyIDSource_57);
        NestedParties_NoNestedPartyIDs_57.insert(NestedPartyIDSource_57.getString());
        FIX::NestedPartyRole NestedPartyRole_57(1031812338);
        noNestedPartyIDs_0_1_2_0.set(NestedPartyRole_57);
        NestedParties_NoNestedPartyIDs_57.insert(NestedPartyRole_57.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_57);
        all_compo_names.insert("NestedParties.NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_124;
          FIX::NestedPartySubID NestedPartySubID_124("STRING_1560315910");
          noNestedPartySubIDs_0_1_0_3_0.set(NestedPartySubID_124);
          NstdPtysSubGrp_NoNestedPartySubIDs_124.insert(NestedPartySubID_124.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_124(1693949875);
          noNestedPartySubIDs_0_1_0_3_0.set(NestedPartySubIDType_124);
          NstdPtysSubGrp_NoNestedPartySubIDs_124.insert(NestedPartySubIDType_124.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_124);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_0_1_2_0.addGroup(noNestedPartySubIDs_0_1_0_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_125;
          FIX::NestedPartySubID NestedPartySubID_125("STRING_677397481");
          noNestedPartySubIDs_0_1_0_3_1.set(NestedPartySubID_125);
          NstdPtysSubGrp_NoNestedPartySubIDs_125.insert(NestedPartySubID_125.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_125(177908500);
          noNestedPartySubIDs_0_1_0_3_1.set(NestedPartySubIDType_125);
          NstdPtysSubGrp_NoNestedPartySubIDs_125.insert(NestedPartySubIDType_125.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_125);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_0_1_2_0.addGroup(noNestedPartySubIDs_0_1_0_3_1);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_0_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_126;
          FIX::NestedPartySubID NestedPartySubID_126("STRING_1450897921");
          noNestedPartySubIDs_0_1_0_3_2.set(NestedPartySubID_126);
          NstdPtysSubGrp_NoNestedPartySubIDs_126.insert(NestedPartySubID_126.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_126(1401820569);
          noNestedPartySubIDs_0_1_0_3_2.set(NestedPartySubIDType_126);
          NstdPtysSubGrp_NoNestedPartySubIDs_126.insert(NestedPartySubIDType_126.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_126);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_0_1_2_0.addGroup(noNestedPartySubIDs_0_1_0_3_2);
        }
        noAllocs_0_1_1.addGroup(noNestedPartyIDs_0_1_2_0);
      }
      noOrders_0_0.addGroup(noAllocs_0_1_1);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoAllocs noAllocs_0_1_2;
      // PreAllocGrp.NoAllocs
      multiset<string> PreAllocGrp_NoAllocs_15;
      FIX::AllocAccount AllocAccount_25("STRING_483609510");
      noAllocs_0_1_2.set(AllocAccount_25);
      PreAllocGrp_NoAllocs_15.insert(AllocAccount_25.getString());
      FIX::AllocAcctIDSource AllocAcctIDSource_25(1560005782);
      noAllocs_0_1_2.set(AllocAcctIDSource_25);
      PreAllocGrp_NoAllocs_15.insert(AllocAcctIDSource_25.getString());
      FIX::AllocQty AllocQty_24;
      AllocQty_24.setString("12419736");
      noAllocs_0_1_2.set(AllocQty_24);
      PreAllocGrp_NoAllocs_15.insert(AllocQty_24.getString());
      FIX::AllocSettlCurrency AllocSettlCurrency_20("CAN");
      noAllocs_0_1_2.set(AllocSettlCurrency_20);
      PreAllocGrp_NoAllocs_15.insert(AllocSettlCurrency_20.getString());
      FIX::IndividualAllocID IndividualAllocID_25("STRING_1062629655");
      noAllocs_0_1_2.set(IndividualAllocID_25);
      PreAllocGrp_NoAllocs_15.insert(IndividualAllocID_25.getString());
      all_values.push_back(PreAllocGrp_NoAllocs_15);
      all_compo_names.insert("PreAllocGrp.NoAllocs");

      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_2_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_58;
        FIX::NestedPartyID NestedPartyID_58("STRING_712012315");
        noNestedPartyIDs_0_2_2_0.set(NestedPartyID_58);
        NestedParties_NoNestedPartyIDs_58.insert(NestedPartyID_58.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_58('6');
        noNestedPartyIDs_0_2_2_0.set(NestedPartyIDSource_58);
        NestedParties_NoNestedPartyIDs_58.insert(NestedPartyIDSource_58.getString());
        FIX::NestedPartyRole NestedPartyRole_58(1012431851);
        noNestedPartyIDs_0_2_2_0.set(NestedPartyRole_58);
        NestedParties_NoNestedPartyIDs_58.insert(NestedPartyRole_58.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_58);
        all_compo_names.insert("NestedParties.NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_127;
          FIX::NestedPartySubID NestedPartySubID_127("STRING_9257706");
          noNestedPartySubIDs_0_2_0_3_0.set(NestedPartySubID_127);
          NstdPtysSubGrp_NoNestedPartySubIDs_127.insert(NestedPartySubID_127.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_127(369832297);
          noNestedPartySubIDs_0_2_0_3_0.set(NestedPartySubIDType_127);
          NstdPtysSubGrp_NoNestedPartySubIDs_127.insert(NestedPartySubIDType_127.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_127);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_0_2_2_0.addGroup(noNestedPartySubIDs_0_2_0_3_0);
        }
        noAllocs_0_1_2.addGroup(noNestedPartyIDs_0_2_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_2_2_1;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_59;
        FIX::NestedPartyID NestedPartyID_59("STRING_626263459");
        noNestedPartyIDs_0_2_2_1.set(NestedPartyID_59);
        NestedParties_NoNestedPartyIDs_59.insert(NestedPartyID_59.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_59('9');
        noNestedPartyIDs_0_2_2_1.set(NestedPartyIDSource_59);
        NestedParties_NoNestedPartyIDs_59.insert(NestedPartyIDSource_59.getString());
        FIX::NestedPartyRole NestedPartyRole_59(381949739);
        noNestedPartyIDs_0_2_2_1.set(NestedPartyRole_59);
        NestedParties_NoNestedPartyIDs_59.insert(NestedPartyRole_59.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_59);
        all_compo_names.insert("NestedParties.NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_1_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_128;
          FIX::NestedPartySubID NestedPartySubID_128("STRING_919110324");
          noNestedPartySubIDs_0_2_1_3_0.set(NestedPartySubID_128);
          NstdPtysSubGrp_NoNestedPartySubIDs_128.insert(NestedPartySubID_128.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_128(826384598);
          noNestedPartySubIDs_0_2_1_3_0.set(NestedPartySubIDType_128);
          NstdPtysSubGrp_NoNestedPartySubIDs_128.insert(NestedPartySubIDType_128.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_128);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_0_2_2_1.addGroup(noNestedPartySubIDs_0_2_1_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_1_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_129;
          FIX::NestedPartySubID NestedPartySubID_129("STRING_2127630545");
          noNestedPartySubIDs_0_2_1_3_1.set(NestedPartySubID_129);
          NstdPtysSubGrp_NoNestedPartySubIDs_129.insert(NestedPartySubID_129.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_129(2105000373);
          noNestedPartySubIDs_0_2_1_3_1.set(NestedPartySubIDType_129);
          NstdPtysSubGrp_NoNestedPartySubIDs_129.insert(NestedPartySubIDType_129.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_129);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_0_2_2_1.addGroup(noNestedPartySubIDs_0_2_1_3_1);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_1_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_130;
          FIX::NestedPartySubID NestedPartySubID_130("STRING_778083237");
          noNestedPartySubIDs_0_2_1_3_2.set(NestedPartySubID_130);
          NstdPtysSubGrp_NoNestedPartySubIDs_130.insert(NestedPartySubID_130.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_130(538876354);
          noNestedPartySubIDs_0_2_1_3_2.set(NestedPartySubIDType_130);
          NstdPtysSubGrp_NoNestedPartySubIDs_130.insert(NestedPartySubIDType_130.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_130);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_0_2_2_1.addGroup(noNestedPartySubIDs_0_2_1_3_2);
        }
        noAllocs_0_1_2.addGroup(noNestedPartyIDs_0_2_2_1);
      }
      noOrders_0_0.addGroup(noAllocs_0_1_2);
    }
    // SpreadOrBenchmarkCurveData
    multiset<string> SpreadOrBenchmarkCurveData_16;
    FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_16("USD");
    noOrders_0_0.set(BenchmarkCurveCurrency_16);
    SpreadOrBenchmarkCurveData_16.insert(BenchmarkCurveCurrency_16.getString());
    FIX::BenchmarkCurveName BenchmarkCurveName_16("STRING_Pfandbriefe");
    noOrders_0_0.set(BenchmarkCurveName_16);
    SpreadOrBenchmarkCurveData_16.insert(BenchmarkCurveName_16.getString());
    FIX::BenchmarkCurvePoint BenchmarkCurvePoint_16("STRING_535795290");
    noOrders_0_0.set(BenchmarkCurvePoint_16);
    SpreadOrBenchmarkCurveData_16.insert(BenchmarkCurvePoint_16.getString());
    FIX::BenchmarkPrice BenchmarkPrice_16;
    BenchmarkPrice_16.setString("9906428");
    noOrders_0_0.set(BenchmarkPrice_16);
    SpreadOrBenchmarkCurveData_16.insert(BenchmarkPrice_16.getString());
    FIX::BenchmarkPriceType BenchmarkPriceType_16(129617117);
    noOrders_0_0.set(BenchmarkPriceType_16);
    SpreadOrBenchmarkCurveData_16.insert(BenchmarkPriceType_16.getString());
    FIX::BenchmarkSecurityID BenchmarkSecurityID_16("STRING_1986693211");
    noOrders_0_0.set(BenchmarkSecurityID_16);
    SpreadOrBenchmarkCurveData_16.insert(BenchmarkSecurityID_16.getString());
    FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_16("STRING_244979816");
    noOrders_0_0.set(BenchmarkSecurityIDSource_16);
    SpreadOrBenchmarkCurveData_16.insert(BenchmarkSecurityIDSource_16.getString());
    FIX::Spread Spread_16;
    Spread_16.setString("6132266");
    noOrders_0_0.set(Spread_16);
    SpreadOrBenchmarkCurveData_16.insert(Spread_16.getString());
    all_values.push_back(SpreadOrBenchmarkCurveData_16);
    all_compo_names.insert("SpreadOrBenchmarkCurveData");

    // Stipulations
    // Group Stipulations.NoStipulations
    {
      FIX50SP2::NewOrderList::NoOrders::NoStipulations noStipulations_0_1_0;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_26;
      FIX::StipulationType StipulationType_26("STRING_SUBSFREQ");
      noStipulations_0_1_0.set(StipulationType_26);
      Stipulations_NoStipulations_26.insert(StipulationType_26.getString());
      FIX::StipulationValue StipulationValue_26("STRING_1970058");
      noStipulations_0_1_0.set(StipulationValue_26);
      Stipulations_NoStipulations_26.insert(StipulationValue_26.getString());
      all_values.push_back(Stipulations_NoStipulations_26);
      all_compo_names.insert("Stipulations.NoStipulations");

      noOrders_0_0.addGroup(noStipulations_0_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoStipulations noStipulations_0_1_1;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_27;
      FIX::StipulationType StipulationType_27("STRING_INTERNALQTY");
      noStipulations_0_1_1.set(StipulationType_27);
      Stipulations_NoStipulations_27.insert(StipulationType_27.getString());
      FIX::StipulationValue StipulationValue_27("STRING_402099487");
      noStipulations_0_1_1.set(StipulationValue_27);
      Stipulations_NoStipulations_27.insert(StipulationValue_27.getString());
      all_values.push_back(Stipulations_NoStipulations_27);
      all_compo_names.insert("Stipulations.NoStipulations");

      noOrders_0_0.addGroup(noStipulations_0_1_1);
    }
    // StrategyParametersGrp
    // Group StrategyParametersGrp.NoStrategyParameters
    {
      FIX50SP2::NewOrderList::NoOrders::NoStrategyParameters noStrategyParameters_0_1_0;
      // StrategyParametersGrp.NoStrategyParameters
      multiset<string> StrategyParametersGrp_NoStrategyParameters_7;
      FIX::StrategyParameterName StrategyParameterName_7("STRING_1088644856");
      noStrategyParameters_0_1_0.set(StrategyParameterName_7);
      StrategyParametersGrp_NoStrategyParameters_7.insert(StrategyParameterName_7.getString());
      FIX::StrategyParameterType StrategyParameterType_7(21);
      noStrategyParameters_0_1_0.set(StrategyParameterType_7);
      StrategyParametersGrp_NoStrategyParameters_7.insert(StrategyParameterType_7.getString());
      FIX::StrategyParameterValue StrategyParameterValue_7("STRING_1030327732");
      noStrategyParameters_0_1_0.set(StrategyParameterValue_7);
      StrategyParametersGrp_NoStrategyParameters_7.insert(StrategyParameterValue_7.getString());
      all_values.push_back(StrategyParametersGrp_NoStrategyParameters_7);
      all_compo_names.insert("StrategyParametersGrp.NoStrategyParameters");

      noOrders_0_0.addGroup(noStrategyParameters_0_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoStrategyParameters noStrategyParameters_0_1_1;
      // StrategyParametersGrp.NoStrategyParameters
      multiset<string> StrategyParametersGrp_NoStrategyParameters_8;
      FIX::StrategyParameterName StrategyParameterName_8("STRING_306657333");
      noStrategyParameters_0_1_1.set(StrategyParameterName_8);
      StrategyParametersGrp_NoStrategyParameters_8.insert(StrategyParameterName_8.getString());
      FIX::StrategyParameterType StrategyParameterType_8(28);
      noStrategyParameters_0_1_1.set(StrategyParameterType_8);
      StrategyParametersGrp_NoStrategyParameters_8.insert(StrategyParameterType_8.getString());
      FIX::StrategyParameterValue StrategyParameterValue_8("STRING_1400160029");
      noStrategyParameters_0_1_1.set(StrategyParameterValue_8);
      StrategyParametersGrp_NoStrategyParameters_8.insert(StrategyParameterValue_8.getString());
      all_values.push_back(StrategyParametersGrp_NoStrategyParameters_8);
      all_compo_names.insert("StrategyParametersGrp.NoStrategyParameters");

      noOrders_0_0.addGroup(noStrategyParameters_0_1_1);
    }
    // TrdgSesGrp
    // Group TrdgSesGrp.NoTradingSessions
    {
      FIX50SP2::NewOrderList::NoOrders::NoTradingSessions noTradingSessions_0_1_0;
      // TrdgSesGrp.NoTradingSessions
      multiset<string> TrdgSesGrp_NoTradingSessions_7;
      FIX::TradingSessionID TradingSessionID_54("STRING_3");
      noTradingSessions_0_1_0.set(TradingSessionID_54);
      TrdgSesGrp_NoTradingSessions_7.insert(TradingSessionID_54.getString());
      FIX::TradingSessionSubID TradingSessionSubID_54("STRING_6");
      noTradingSessions_0_1_0.set(TradingSessionSubID_54);
      TrdgSesGrp_NoTradingSessions_7.insert(TradingSessionSubID_54.getString());
      all_values.push_back(TrdgSesGrp_NoTradingSessions_7);
      all_compo_names.insert("TrdgSesGrp.NoTradingSessions");

      noOrders_0_0.addGroup(noTradingSessions_0_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoTradingSessions noTradingSessions_0_1_1;
      // TrdgSesGrp.NoTradingSessions
      multiset<string> TrdgSesGrp_NoTradingSessions_8;
      FIX::TradingSessionID TradingSessionID_55("STRING_2");
      noTradingSessions_0_1_1.set(TradingSessionID_55);
      TrdgSesGrp_NoTradingSessions_8.insert(TradingSessionID_55.getString());
      FIX::TradingSessionSubID TradingSessionSubID_55("STRING_3");
      noTradingSessions_0_1_1.set(TradingSessionSubID_55);
      TrdgSesGrp_NoTradingSessions_8.insert(TradingSessionSubID_55.getString());
      all_values.push_back(TrdgSesGrp_NoTradingSessions_8);
      all_compo_names.insert("TrdgSesGrp.NoTradingSessions");

      noOrders_0_0.addGroup(noTradingSessions_0_1_1);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoTradingSessions noTradingSessions_0_1_2;
      // TrdgSesGrp.NoTradingSessions
      multiset<string> TrdgSesGrp_NoTradingSessions_9;
      FIX::TradingSessionID TradingSessionID_56("STRING_6");
      noTradingSessions_0_1_2.set(TradingSessionID_56);
      TrdgSesGrp_NoTradingSessions_9.insert(TradingSessionID_56.getString());
      FIX::TradingSessionSubID TradingSessionSubID_56("STRING_3");
      noTradingSessions_0_1_2.set(TradingSessionSubID_56);
      TrdgSesGrp_NoTradingSessions_9.insert(TradingSessionSubID_56.getString());
      all_values.push_back(TrdgSesGrp_NoTradingSessions_9);
      all_compo_names.insert("TrdgSesGrp.NoTradingSessions");

      noOrders_0_0.addGroup(noTradingSessions_0_1_2);
    }
    // TriggeringInstruction
    multiset<string> TriggeringInstruction_4;
    FIX::TriggerAction TriggerAction_4('2');
    noOrders_0_0.set(TriggerAction_4);
    TriggeringInstruction_4.insert(TriggerAction_4.getString());
    FIX::TriggerNewPrice TriggerNewPrice_4;
    TriggerNewPrice_4.setString("12390939");
    noOrders_0_0.set(TriggerNewPrice_4);
    TriggeringInstruction_4.insert(TriggerNewPrice_4.getString());
    FIX::TriggerNewQty TriggerNewQty_4;
    TriggerNewQty_4.setString("18279293");
    noOrders_0_0.set(TriggerNewQty_4);
    TriggeringInstruction_4.insert(TriggerNewQty_4.getString());
    FIX::TriggerOrderType TriggerOrderType_4('1');
    noOrders_0_0.set(TriggerOrderType_4);
    TriggeringInstruction_4.insert(TriggerOrderType_4.getString());
    FIX::TriggerPrice TriggerPrice_4;
    TriggerPrice_4.setString("15523393");
    noOrders_0_0.set(TriggerPrice_4);
    TriggeringInstruction_4.insert(TriggerPrice_4.getString());
    FIX::TriggerPriceDirection TriggerPriceDirection_4('U');
    noOrders_0_0.set(TriggerPriceDirection_4);
    TriggeringInstruction_4.insert(TriggerPriceDirection_4.getString());
    FIX::TriggerPriceType TriggerPriceType_4('1');
    noOrders_0_0.set(TriggerPriceType_4);
    TriggeringInstruction_4.insert(TriggerPriceType_4.getString());
    FIX::TriggerPriceTypeScope TriggerPriceTypeScope_4('2');
    noOrders_0_0.set(TriggerPriceTypeScope_4);
    TriggeringInstruction_4.insert(TriggerPriceTypeScope_4.getString());
    FIX::TriggerSecurityDesc TriggerSecurityDesc_4("STRING_1909255099");
    noOrders_0_0.set(TriggerSecurityDesc_4);
    TriggeringInstruction_4.insert(TriggerSecurityDesc_4.getString());
    FIX::TriggerSecurityID TriggerSecurityID_4("STRING_2106664352");
    noOrders_0_0.set(TriggerSecurityID_4);
    TriggeringInstruction_4.insert(TriggerSecurityID_4.getString());
    FIX::TriggerSecurityIDSource TriggerSecurityIDSource_4("STRING_640478434");
    noOrders_0_0.set(TriggerSecurityIDSource_4);
    TriggeringInstruction_4.insert(TriggerSecurityIDSource_4.getString());
    FIX::TriggerSymbol TriggerSymbol_4("STRING_374998078");
    noOrders_0_0.set(TriggerSymbol_4);
    TriggeringInstruction_4.insert(TriggerSymbol_4.getString());
    FIX::TriggerTradingSessionID TriggerTradingSessionID_4("STRING_1358396050");
    noOrders_0_0.set(TriggerTradingSessionID_4);
    TriggeringInstruction_4.insert(TriggerTradingSessionID_4.getString());
    FIX::TriggerTradingSessionSubID TriggerTradingSessionSubID_4("STRING_2127431914");
    noOrders_0_0.set(TriggerTradingSessionSubID_4);
    TriggeringInstruction_4.insert(TriggerTradingSessionSubID_4.getString());
    FIX::TriggerType TriggerType_4('1');
    noOrders_0_0.set(TriggerType_4);
    TriggeringInstruction_4.insert(TriggerType_4.getString());
    all_values.push_back(TriggeringInstruction_4);
    all_compo_names.insert("TriggeringInstruction");

    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::NewOrderList::NoOrders::NoUnderlyings noUnderlyings_0_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_65;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_65("DATA_382047753");
      noUnderlyings_0_1_0.set(EncodedUnderlyingIssuer_65);
      UnderlyingInstrument_65.insert(EncodedUnderlyingIssuer_65.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_65(394864017);
      noUnderlyings_0_1_0.set(EncodedUnderlyingIssuerLen_65);
      UnderlyingInstrument_65.insert(EncodedUnderlyingIssuerLen_65.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_65("DATA_676189799");
      noUnderlyings_0_1_0.set(EncodedUnderlyingSecurityDesc_65);
      UnderlyingInstrument_65.insert(EncodedUnderlyingSecurityDesc_65.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_65(1412733873);
      noUnderlyings_0_1_0.set(EncodedUnderlyingSecurityDescLen_65);
      UnderlyingInstrument_65.insert(EncodedUnderlyingSecurityDescLen_65.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_65;
      UnderlyingAdjustedQuantity_65.setString("14251917");
      noUnderlyings_0_1_0.set(UnderlyingAdjustedQuantity_65);
      UnderlyingInstrument_65.insert(UnderlyingAdjustedQuantity_65.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_65;
      UnderlyingAllocationPercent_65.setString("71.330000");
      noUnderlyings_0_1_0.set(UnderlyingAllocationPercent_65);
      UnderlyingInstrument_65.insert(UnderlyingAllocationPercent_65.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_65;
      UnderlyingAttachmentPoint_65.setString("40.510000");
      noUnderlyings_0_1_0.set(UnderlyingAttachmentPoint_65);
      UnderlyingInstrument_65.insert(UnderlyingAttachmentPoint_65.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_65("STRING_677868130");
      noUnderlyings_0_1_0.set(UnderlyingCFICode_65);
      UnderlyingInstrument_65.insert(UnderlyingCFICode_65.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_65("STRING_1915767926");
      noUnderlyings_0_1_0.set(UnderlyingCPProgram_65);
      UnderlyingInstrument_65.insert(UnderlyingCPProgram_65.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_65("STRING_170897438");
      noUnderlyings_0_1_0.set(UnderlyingCPRegType_65);
      UnderlyingInstrument_65.insert(UnderlyingCPRegType_65.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_65;
      UnderlyingCapValue_65.setString("3124942");
      noUnderlyings_0_1_0.set(UnderlyingCapValue_65);
      UnderlyingInstrument_65.insert(UnderlyingCapValue_65.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_65;
      UnderlyingCashAmount_65.setString("10771903");
      noUnderlyings_0_1_0.set(UnderlyingCashAmount_65);
      UnderlyingInstrument_65.insert(UnderlyingCashAmount_65.getString());
      FIX::UnderlyingCashType UnderlyingCashType_65("STRING_FIXED");
      noUnderlyings_0_1_0.set(UnderlyingCashType_65);
      UnderlyingInstrument_65.insert(UnderlyingCashType_65.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_65;
      UnderlyingContractMultiplier_65.setString("7735049");
      noUnderlyings_0_1_0.set(UnderlyingContractMultiplier_65);
      UnderlyingInstrument_65.insert(UnderlyingContractMultiplier_65.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_65(218759757);
      noUnderlyings_0_1_0.set(UnderlyingContractMultiplierUnit_65);
      UnderlyingInstrument_65.insert(UnderlyingContractMultiplierUnit_65.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_65("COUNTRY_1698041584");
      noUnderlyings_0_1_0.set(UnderlyingCountryOfIssue_65);
      UnderlyingInstrument_65.insert(UnderlyingCountryOfIssue_65.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_65("LOCALMKTDATE_2012598925");
      noUnderlyings_0_1_0.set(UnderlyingCouponPaymentDate_65);
      UnderlyingInstrument_65.insert(UnderlyingCouponPaymentDate_65.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_65;
      UnderlyingCouponRate_65.setString("91.230000");
      noUnderlyings_0_1_0.set(UnderlyingCouponRate_65);
      UnderlyingInstrument_65.insert(UnderlyingCouponRate_65.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_65("STRING_1282217434");
      noUnderlyings_0_1_0.set(UnderlyingCreditRating_65);
      UnderlyingInstrument_65.insert(UnderlyingCreditRating_65.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_65("CAN");
      noUnderlyings_0_1_0.set(UnderlyingCurrency_65);
      UnderlyingInstrument_65.insert(UnderlyingCurrency_65.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_65;
      UnderlyingCurrentValue_65.setString("14021885");
      noUnderlyings_0_1_0.set(UnderlyingCurrentValue_65);
      UnderlyingInstrument_65.insert(UnderlyingCurrentValue_65.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_65;
      UnderlyingDetachmentPoint_65.setString("32.660000");
      noUnderlyings_0_1_0.set(UnderlyingDetachmentPoint_65);
      UnderlyingInstrument_65.insert(UnderlyingDetachmentPoint_65.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_65;
      UnderlyingDirtyPrice_65.setString("14406149");
      noUnderlyings_0_1_0.set(UnderlyingDirtyPrice_65);
      UnderlyingInstrument_65.insert(UnderlyingDirtyPrice_65.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_65;
      UnderlyingEndPrice_65.setString("13613692");
      noUnderlyings_0_1_0.set(UnderlyingEndPrice_65);
      UnderlyingInstrument_65.insert(UnderlyingEndPrice_65.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_65;
      UnderlyingEndValue_65.setString("3059480");
      noUnderlyings_0_1_0.set(UnderlyingEndValue_65);
      UnderlyingInstrument_65.insert(UnderlyingEndValue_65.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_65(1815612987);
      noUnderlyings_0_1_0.set(UnderlyingExerciseStyle_65);
      UnderlyingInstrument_65.insert(UnderlyingExerciseStyle_65.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_65;
      UnderlyingFXRate_65.setString("5722816");
      noUnderlyings_0_1_0.set(UnderlyingFXRate_65);
      UnderlyingInstrument_65.insert(UnderlyingFXRate_65.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_65('M');
      noUnderlyings_0_1_0.set(UnderlyingFXRateCalc_65);
      UnderlyingInstrument_65.insert(UnderlyingFXRateCalc_65.getString());
      FIX::UnderlyingFactor UnderlyingFactor_65;
      UnderlyingFactor_65.setString("450974");
      noUnderlyings_0_1_0.set(UnderlyingFactor_65);
      UnderlyingInstrument_65.insert(UnderlyingFactor_65.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_65(159826624);
      noUnderlyings_0_1_0.set(UnderlyingFlowScheduleType_65);
      UnderlyingInstrument_65.insert(UnderlyingFlowScheduleType_65.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_65("STRING_667944072");
      noUnderlyings_0_1_0.set(UnderlyingInstrRegistry_65);
      UnderlyingInstrument_65.insert(UnderlyingInstrRegistry_65.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_65("LOCALMKTDATE_439961493");
      noUnderlyings_0_1_0.set(UnderlyingIssueDate_65);
      UnderlyingInstrument_65.insert(UnderlyingIssueDate_65.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_65("STRING_836016423");
      noUnderlyings_0_1_0.set(UnderlyingIssuer_65);
      UnderlyingInstrument_65.insert(UnderlyingIssuer_65.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_65("STRING_2080677946");
      noUnderlyings_0_1_0.set(UnderlyingLocaleOfIssue_65);
      UnderlyingInstrument_65.insert(UnderlyingLocaleOfIssue_65.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_65("LOCALMKTDATE_1865153242");
      noUnderlyings_0_1_0.set(UnderlyingMaturityDate_65);
      UnderlyingInstrument_65.insert(UnderlyingMaturityDate_65.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_65("MONTHYEAR_1818863556");
      noUnderlyings_0_1_0.set(UnderlyingMaturityMonthYear_65);
      UnderlyingInstrument_65.insert(UnderlyingMaturityMonthYear_65.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_65("TZTIMEONLY_238388349");
      noUnderlyings_0_1_0.set(UnderlyingMaturityTime_65);
      UnderlyingInstrument_65.insert(UnderlyingMaturityTime_65.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_65;
      UnderlyingNotionalPercentageOutstanding_65.setString("77.240000");
      noUnderlyings_0_1_0.set(UnderlyingNotionalPercentageOutstanding_65);
      UnderlyingInstrument_65.insert(UnderlyingNotionalPercentageOutstanding_65.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_65('1');
      noUnderlyings_0_1_0.set(UnderlyingOptAttribute_65);
      UnderlyingInstrument_65.insert(UnderlyingOptAttribute_65.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_65;
      UnderlyingOriginalNotionalPercentageOutstanding_65.setString("57.870000");
      noUnderlyings_0_1_0.set(UnderlyingOriginalNotionalPercentageOutstanding_65);
      UnderlyingInstrument_65.insert(UnderlyingOriginalNotionalPercentageOutstanding_65.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_65("STRING_708031974");
      noUnderlyings_0_1_0.set(UnderlyingPriceUnitOfMeasure_65);
      UnderlyingInstrument_65.insert(UnderlyingPriceUnitOfMeasure_65.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_65;
      UnderlyingPriceUnitOfMeasureQty_65.setString("5168545");
      noUnderlyings_0_1_0.set(UnderlyingPriceUnitOfMeasureQty_65);
      UnderlyingInstrument_65.insert(UnderlyingPriceUnitOfMeasureQty_65.getString());
      FIX::UnderlyingProduct UnderlyingProduct_65(1364996936);
      noUnderlyings_0_1_0.set(UnderlyingProduct_65);
      UnderlyingInstrument_65.insert(UnderlyingProduct_65.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_65(1481536944);
      noUnderlyings_0_1_0.set(UnderlyingPutOrCall_65);
      UnderlyingInstrument_65.insert(UnderlyingPutOrCall_65.getString());
      FIX::UnderlyingPx UnderlyingPx_65;
      UnderlyingPx_65.setString("7356143");
      noUnderlyings_0_1_0.set(UnderlyingPx_65);
      UnderlyingInstrument_65.insert(UnderlyingPx_65.getString());
      FIX::UnderlyingQty UnderlyingQty_65;
      UnderlyingQty_65.setString("9155548");
      noUnderlyings_0_1_0.set(UnderlyingQty_65);
      UnderlyingInstrument_65.insert(UnderlyingQty_65.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_65("LOCALMKTDATE_1346652221");
      noUnderlyings_0_1_0.set(UnderlyingRedemptionDate_65);
      UnderlyingInstrument_65.insert(UnderlyingRedemptionDate_65.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_65("STRING_634819811");
      noUnderlyings_0_1_0.set(UnderlyingRepoCollateralSecurityType_65);
      UnderlyingInstrument_65.insert(UnderlyingRepoCollateralSecurityType_65.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_65;
      UnderlyingRepurchaseRate_65.setString("86.580000");
      noUnderlyings_0_1_0.set(UnderlyingRepurchaseRate_65);
      UnderlyingInstrument_65.insert(UnderlyingRepurchaseRate_65.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_65(616623221);
      noUnderlyings_0_1_0.set(UnderlyingRepurchaseTerm_65);
      UnderlyingInstrument_65.insert(UnderlyingRepurchaseTerm_65.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_65("STRING_166179621");
      noUnderlyings_0_1_0.set(UnderlyingRestructuringType_65);
      UnderlyingInstrument_65.insert(UnderlyingRestructuringType_65.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_65("STRING_1452477233");
      noUnderlyings_0_1_0.set(UnderlyingSecurityDesc_65);
      UnderlyingInstrument_65.insert(UnderlyingSecurityDesc_65.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_65("EXCHANGE_282092839");
      noUnderlyings_0_1_0.set(UnderlyingSecurityExchange_65);
      UnderlyingInstrument_65.insert(UnderlyingSecurityExchange_65.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_65("STRING_1606794530");
      noUnderlyings_0_1_0.set(UnderlyingSecurityID_65);
      UnderlyingInstrument_65.insert(UnderlyingSecurityID_65.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_65("STRING_666362864");
      noUnderlyings_0_1_0.set(UnderlyingSecurityIDSource_65);
      UnderlyingInstrument_65.insert(UnderlyingSecurityIDSource_65.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_65("STRING_588040892");
      noUnderlyings_0_1_0.set(UnderlyingSecuritySubType_65);
      UnderlyingInstrument_65.insert(UnderlyingSecuritySubType_65.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_65("STRING_1274923869");
      noUnderlyings_0_1_0.set(UnderlyingSecurityType_65);
      UnderlyingInstrument_65.insert(UnderlyingSecurityType_65.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_65("STRING_1238644545");
      noUnderlyings_0_1_0.set(UnderlyingSeniority_65);
      UnderlyingInstrument_65.insert(UnderlyingSeniority_65.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_65("STRING_873937211");
      noUnderlyings_0_1_0.set(UnderlyingSettlMethod_65);
      UnderlyingInstrument_65.insert(UnderlyingSettlMethod_65.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_65(2);
      noUnderlyings_0_1_0.set(UnderlyingSettlementType_65);
      UnderlyingInstrument_65.insert(UnderlyingSettlementType_65.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_65;
      UnderlyingStartValue_65.setString("13984711");
      noUnderlyings_0_1_0.set(UnderlyingStartValue_65);
      UnderlyingInstrument_65.insert(UnderlyingStartValue_65.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_65("STRING_1541881283");
      noUnderlyings_0_1_0.set(UnderlyingStateOrProvinceOfIssue_65);
      UnderlyingInstrument_65.insert(UnderlyingStateOrProvinceOfIssue_65.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_65("CHF");
      noUnderlyings_0_1_0.set(UnderlyingStrikeCurrency_65);
      UnderlyingInstrument_65.insert(UnderlyingStrikeCurrency_65.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_65;
      UnderlyingStrikePrice_65.setString("14750755");
      noUnderlyings_0_1_0.set(UnderlyingStrikePrice_65);
      UnderlyingInstrument_65.insert(UnderlyingStrikePrice_65.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_65("STRING_1477652432");
      noUnderlyings_0_1_0.set(UnderlyingSymbol_65);
      UnderlyingInstrument_65.insert(UnderlyingSymbol_65.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_65("STRING_1905867501");
      noUnderlyings_0_1_0.set(UnderlyingSymbolSfx_65);
      UnderlyingInstrument_65.insert(UnderlyingSymbolSfx_65.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_65("STRING_1713463931");
      noUnderlyings_0_1_0.set(UnderlyingTimeUnit_65);
      UnderlyingInstrument_65.insert(UnderlyingTimeUnit_65.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_65("STRING_1873190156");
      noUnderlyings_0_1_0.set(UnderlyingUnitOfMeasure_65);
      UnderlyingInstrument_65.insert(UnderlyingUnitOfMeasure_65.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_65;
      UnderlyingUnitOfMeasureQty_65.setString("13455316");
      noUnderlyings_0_1_0.set(UnderlyingUnitOfMeasureQty_65);
      UnderlyingInstrument_65.insert(UnderlyingUnitOfMeasureQty_65.getString());
      all_values.push_back(UnderlyingInstrument_65);
      all_compo_names.insert("UnderlyingInstrument");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_135;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_135("STRING_433738483");
        noUnderlyingSecurityAltID_0_0_2_0.set(UnderlyingSecurityAltID_135);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_135.insert(UnderlyingSecurityAltID_135.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_135("STRING_1862386267");
        noUnderlyingSecurityAltID_0_0_2_0.set(UnderlyingSecurityAltIDSource_135);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_135.insert(UnderlyingSecurityAltIDSource_135.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_135);
        all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_136;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_136("STRING_1340263006");
        noUnderlyingSecurityAltID_0_0_2_1.set(UnderlyingSecurityAltID_136);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_136.insert(UnderlyingSecurityAltID_136.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_136("STRING_1915275427");
        noUnderlyingSecurityAltID_0_0_2_1.set(UnderlyingSecurityAltIDSource_136);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_136.insert(UnderlyingSecurityAltIDSource_136.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_136);
        all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_1);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_129;
        FIX::UnderlyingStipType UnderlyingStipType_129("STRING_108334230");
        noUnderlyingStips_0_0_2_0.set(UnderlyingStipType_129);
        UnderlyingStipulations_NoUnderlyingStips_129.insert(UnderlyingStipType_129.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_129("STRING_1114444000");
        noUnderlyingStips_0_0_2_0.set(UnderlyingStipValue_129);
        UnderlyingStipulations_NoUnderlyingStips_129.insert(UnderlyingStipValue_129.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_129);
        all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_130;
        FIX::UnderlyingStipType UnderlyingStipType_130("STRING_1085336767");
        noUnderlyingStips_0_0_2_1.set(UnderlyingStipType_130);
        UnderlyingStipulations_NoUnderlyingStips_130.insert(UnderlyingStipType_130.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_130("STRING_158622889");
        noUnderlyingStips_0_0_2_1.set(UnderlyingStipValue_130);
        UnderlyingStipulations_NoUnderlyingStips_130.insert(UnderlyingStipValue_130.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_130);
        all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_1);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_2;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_131;
        FIX::UnderlyingStipType UnderlyingStipType_131("STRING_1731067222");
        noUnderlyingStips_0_0_2_2.set(UnderlyingStipType_131);
        UnderlyingStipulations_NoUnderlyingStips_131.insert(UnderlyingStipType_131.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_131("STRING_1251516388");
        noUnderlyingStips_0_0_2_2.set(UnderlyingStipValue_131);
        UnderlyingStipulations_NoUnderlyingStips_131.insert(UnderlyingStipValue_131.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_131);
        all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_2);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_126;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_126("STRING_2013160061");
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyID_126);
        UndlyInstrumentParties_NoUndlyInstrumentParties_126.insert(UnderlyingInstrumentPartyID_126.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_126('7');
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyIDSource_126);
        UndlyInstrumentParties_NoUndlyInstrumentParties_126.insert(UnderlyingInstrumentPartyIDSource_126.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_126(129979339);
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyRole_126);
        UndlyInstrumentParties_NoUndlyInstrumentParties_126.insert(UnderlyingInstrumentPartyRole_126.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_126);
        all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_251;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_251("STRING_1985751140");
          noUndlyInstrumentPartySubIDs_0_0_0_3_0.set(UnderlyingInstrumentPartySubID_251);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_251.insert(UnderlyingInstrumentPartySubID_251.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_251(1368623884);
          noUndlyInstrumentPartySubIDs_0_0_0_3_0.set(UnderlyingInstrumentPartySubIDType_251);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_251.insert(UnderlyingInstrumentPartySubIDType_251.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_251);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_252;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_252("STRING_1327654516");
          noUndlyInstrumentPartySubIDs_0_0_0_3_1.set(UnderlyingInstrumentPartySubID_252);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_252.insert(UnderlyingInstrumentPartySubID_252.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_252(1158288837);
          noUndlyInstrumentPartySubIDs_0_0_0_3_1.set(UnderlyingInstrumentPartySubIDType_252);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_252.insert(UnderlyingInstrumentPartySubIDType_252.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_252);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_1);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_253;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_253("STRING_619611406");
          noUndlyInstrumentPartySubIDs_0_0_0_3_2.set(UnderlyingInstrumentPartySubID_253);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_253.insert(UnderlyingInstrumentPartySubID_253.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_253(722052152);
          noUndlyInstrumentPartySubIDs_0_0_0_3_2.set(UnderlyingInstrumentPartySubIDType_253);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_253.insert(UnderlyingInstrumentPartySubIDType_253.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_253);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_2);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_0);
      }
      noOrders_0_0.addGroup(noUnderlyings_0_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoUnderlyings noUnderlyings_0_1_1;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_66;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_66("DATA_770788028");
      noUnderlyings_0_1_1.set(EncodedUnderlyingIssuer_66);
      UnderlyingInstrument_66.insert(EncodedUnderlyingIssuer_66.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_66(706615351);
      noUnderlyings_0_1_1.set(EncodedUnderlyingIssuerLen_66);
      UnderlyingInstrument_66.insert(EncodedUnderlyingIssuerLen_66.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_66("DATA_49644085");
      noUnderlyings_0_1_1.set(EncodedUnderlyingSecurityDesc_66);
      UnderlyingInstrument_66.insert(EncodedUnderlyingSecurityDesc_66.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_66(100956812);
      noUnderlyings_0_1_1.set(EncodedUnderlyingSecurityDescLen_66);
      UnderlyingInstrument_66.insert(EncodedUnderlyingSecurityDescLen_66.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_66;
      UnderlyingAdjustedQuantity_66.setString("4649992");
      noUnderlyings_0_1_1.set(UnderlyingAdjustedQuantity_66);
      UnderlyingInstrument_66.insert(UnderlyingAdjustedQuantity_66.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_66;
      UnderlyingAllocationPercent_66.setString("80.160000");
      noUnderlyings_0_1_1.set(UnderlyingAllocationPercent_66);
      UnderlyingInstrument_66.insert(UnderlyingAllocationPercent_66.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_66;
      UnderlyingAttachmentPoint_66.setString("69.690000");
      noUnderlyings_0_1_1.set(UnderlyingAttachmentPoint_66);
      UnderlyingInstrument_66.insert(UnderlyingAttachmentPoint_66.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_66("STRING_1810530892");
      noUnderlyings_0_1_1.set(UnderlyingCFICode_66);
      UnderlyingInstrument_66.insert(UnderlyingCFICode_66.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_66("STRING_1738374087");
      noUnderlyings_0_1_1.set(UnderlyingCPProgram_66);
      UnderlyingInstrument_66.insert(UnderlyingCPProgram_66.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_66("STRING_260401804");
      noUnderlyings_0_1_1.set(UnderlyingCPRegType_66);
      UnderlyingInstrument_66.insert(UnderlyingCPRegType_66.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_66;
      UnderlyingCapValue_66.setString("15254335");
      noUnderlyings_0_1_1.set(UnderlyingCapValue_66);
      UnderlyingInstrument_66.insert(UnderlyingCapValue_66.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_66;
      UnderlyingCashAmount_66.setString("9311534");
      noUnderlyings_0_1_1.set(UnderlyingCashAmount_66);
      UnderlyingInstrument_66.insert(UnderlyingCashAmount_66.getString());
      FIX::UnderlyingCashType UnderlyingCashType_66("STRING_DIFF");
      noUnderlyings_0_1_1.set(UnderlyingCashType_66);
      UnderlyingInstrument_66.insert(UnderlyingCashType_66.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_66;
      UnderlyingContractMultiplier_66.setString("19759504");
      noUnderlyings_0_1_1.set(UnderlyingContractMultiplier_66);
      UnderlyingInstrument_66.insert(UnderlyingContractMultiplier_66.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_66(1039487676);
      noUnderlyings_0_1_1.set(UnderlyingContractMultiplierUnit_66);
      UnderlyingInstrument_66.insert(UnderlyingContractMultiplierUnit_66.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_66("COUNTRY_1142637583");
      noUnderlyings_0_1_1.set(UnderlyingCountryOfIssue_66);
      UnderlyingInstrument_66.insert(UnderlyingCountryOfIssue_66.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_66("LOCALMKTDATE_913803587");
      noUnderlyings_0_1_1.set(UnderlyingCouponPaymentDate_66);
      UnderlyingInstrument_66.insert(UnderlyingCouponPaymentDate_66.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_66;
      UnderlyingCouponRate_66.setString("5.650000");
      noUnderlyings_0_1_1.set(UnderlyingCouponRate_66);
      UnderlyingInstrument_66.insert(UnderlyingCouponRate_66.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_66("STRING_726221157");
      noUnderlyings_0_1_1.set(UnderlyingCreditRating_66);
      UnderlyingInstrument_66.insert(UnderlyingCreditRating_66.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_66("CAN");
      noUnderlyings_0_1_1.set(UnderlyingCurrency_66);
      UnderlyingInstrument_66.insert(UnderlyingCurrency_66.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_66;
      UnderlyingCurrentValue_66.setString("5918975");
      noUnderlyings_0_1_1.set(UnderlyingCurrentValue_66);
      UnderlyingInstrument_66.insert(UnderlyingCurrentValue_66.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_66;
      UnderlyingDetachmentPoint_66.setString("35.980000");
      noUnderlyings_0_1_1.set(UnderlyingDetachmentPoint_66);
      UnderlyingInstrument_66.insert(UnderlyingDetachmentPoint_66.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_66;
      UnderlyingDirtyPrice_66.setString("7917063");
      noUnderlyings_0_1_1.set(UnderlyingDirtyPrice_66);
      UnderlyingInstrument_66.insert(UnderlyingDirtyPrice_66.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_66;
      UnderlyingEndPrice_66.setString("10456148");
      noUnderlyings_0_1_1.set(UnderlyingEndPrice_66);
      UnderlyingInstrument_66.insert(UnderlyingEndPrice_66.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_66;
      UnderlyingEndValue_66.setString("5669310");
      noUnderlyings_0_1_1.set(UnderlyingEndValue_66);
      UnderlyingInstrument_66.insert(UnderlyingEndValue_66.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_66(12846615);
      noUnderlyings_0_1_1.set(UnderlyingExerciseStyle_66);
      UnderlyingInstrument_66.insert(UnderlyingExerciseStyle_66.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_66;
      UnderlyingFXRate_66.setString("2257857");
      noUnderlyings_0_1_1.set(UnderlyingFXRate_66);
      UnderlyingInstrument_66.insert(UnderlyingFXRate_66.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_66('D');
      noUnderlyings_0_1_1.set(UnderlyingFXRateCalc_66);
      UnderlyingInstrument_66.insert(UnderlyingFXRateCalc_66.getString());
      FIX::UnderlyingFactor UnderlyingFactor_66;
      UnderlyingFactor_66.setString("6324580");
      noUnderlyings_0_1_1.set(UnderlyingFactor_66);
      UnderlyingInstrument_66.insert(UnderlyingFactor_66.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_66(947837897);
      noUnderlyings_0_1_1.set(UnderlyingFlowScheduleType_66);
      UnderlyingInstrument_66.insert(UnderlyingFlowScheduleType_66.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_66("STRING_348524308");
      noUnderlyings_0_1_1.set(UnderlyingInstrRegistry_66);
      UnderlyingInstrument_66.insert(UnderlyingInstrRegistry_66.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_66("LOCALMKTDATE_1339073372");
      noUnderlyings_0_1_1.set(UnderlyingIssueDate_66);
      UnderlyingInstrument_66.insert(UnderlyingIssueDate_66.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_66("STRING_997481982");
      noUnderlyings_0_1_1.set(UnderlyingIssuer_66);
      UnderlyingInstrument_66.insert(UnderlyingIssuer_66.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_66("STRING_449481120");
      noUnderlyings_0_1_1.set(UnderlyingLocaleOfIssue_66);
      UnderlyingInstrument_66.insert(UnderlyingLocaleOfIssue_66.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_66("LOCALMKTDATE_1804072576");
      noUnderlyings_0_1_1.set(UnderlyingMaturityDate_66);
      UnderlyingInstrument_66.insert(UnderlyingMaturityDate_66.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_66("MONTHYEAR_613106351");
      noUnderlyings_0_1_1.set(UnderlyingMaturityMonthYear_66);
      UnderlyingInstrument_66.insert(UnderlyingMaturityMonthYear_66.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_66("TZTIMEONLY_276144441");
      noUnderlyings_0_1_1.set(UnderlyingMaturityTime_66);
      UnderlyingInstrument_66.insert(UnderlyingMaturityTime_66.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_66;
      UnderlyingNotionalPercentageOutstanding_66.setString("98.210000");
      noUnderlyings_0_1_1.set(UnderlyingNotionalPercentageOutstanding_66);
      UnderlyingInstrument_66.insert(UnderlyingNotionalPercentageOutstanding_66.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_66('2');
      noUnderlyings_0_1_1.set(UnderlyingOptAttribute_66);
      UnderlyingInstrument_66.insert(UnderlyingOptAttribute_66.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_66;
      UnderlyingOriginalNotionalPercentageOutstanding_66.setString("62.450000");
      noUnderlyings_0_1_1.set(UnderlyingOriginalNotionalPercentageOutstanding_66);
      UnderlyingInstrument_66.insert(UnderlyingOriginalNotionalPercentageOutstanding_66.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_66("STRING_845069685");
      noUnderlyings_0_1_1.set(UnderlyingPriceUnitOfMeasure_66);
      UnderlyingInstrument_66.insert(UnderlyingPriceUnitOfMeasure_66.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_66;
      UnderlyingPriceUnitOfMeasureQty_66.setString("11351502");
      noUnderlyings_0_1_1.set(UnderlyingPriceUnitOfMeasureQty_66);
      UnderlyingInstrument_66.insert(UnderlyingPriceUnitOfMeasureQty_66.getString());
      FIX::UnderlyingProduct UnderlyingProduct_66(564739828);
      noUnderlyings_0_1_1.set(UnderlyingProduct_66);
      UnderlyingInstrument_66.insert(UnderlyingProduct_66.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_66(673536505);
      noUnderlyings_0_1_1.set(UnderlyingPutOrCall_66);
      UnderlyingInstrument_66.insert(UnderlyingPutOrCall_66.getString());
      FIX::UnderlyingPx UnderlyingPx_66;
      UnderlyingPx_66.setString("271542");
      noUnderlyings_0_1_1.set(UnderlyingPx_66);
      UnderlyingInstrument_66.insert(UnderlyingPx_66.getString());
      FIX::UnderlyingQty UnderlyingQty_66;
      UnderlyingQty_66.setString("17073774");
      noUnderlyings_0_1_1.set(UnderlyingQty_66);
      UnderlyingInstrument_66.insert(UnderlyingQty_66.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_66("LOCALMKTDATE_1587340092");
      noUnderlyings_0_1_1.set(UnderlyingRedemptionDate_66);
      UnderlyingInstrument_66.insert(UnderlyingRedemptionDate_66.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_66("STRING_1225264828");
      noUnderlyings_0_1_1.set(UnderlyingRepoCollateralSecurityType_66);
      UnderlyingInstrument_66.insert(UnderlyingRepoCollateralSecurityType_66.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_66;
      UnderlyingRepurchaseRate_66.setString("49.210000");
      noUnderlyings_0_1_1.set(UnderlyingRepurchaseRate_66);
      UnderlyingInstrument_66.insert(UnderlyingRepurchaseRate_66.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_66(1605176420);
      noUnderlyings_0_1_1.set(UnderlyingRepurchaseTerm_66);
      UnderlyingInstrument_66.insert(UnderlyingRepurchaseTerm_66.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_66("STRING_1886991868");
      noUnderlyings_0_1_1.set(UnderlyingRestructuringType_66);
      UnderlyingInstrument_66.insert(UnderlyingRestructuringType_66.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_66("STRING_878012492");
      noUnderlyings_0_1_1.set(UnderlyingSecurityDesc_66);
      UnderlyingInstrument_66.insert(UnderlyingSecurityDesc_66.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_66("EXCHANGE_186356371");
      noUnderlyings_0_1_1.set(UnderlyingSecurityExchange_66);
      UnderlyingInstrument_66.insert(UnderlyingSecurityExchange_66.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_66("STRING_531214598");
      noUnderlyings_0_1_1.set(UnderlyingSecurityID_66);
      UnderlyingInstrument_66.insert(UnderlyingSecurityID_66.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_66("STRING_1923627369");
      noUnderlyings_0_1_1.set(UnderlyingSecurityIDSource_66);
      UnderlyingInstrument_66.insert(UnderlyingSecurityIDSource_66.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_66("STRING_753287461");
      noUnderlyings_0_1_1.set(UnderlyingSecuritySubType_66);
      UnderlyingInstrument_66.insert(UnderlyingSecuritySubType_66.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_66("STRING_544061213");
      noUnderlyings_0_1_1.set(UnderlyingSecurityType_66);
      UnderlyingInstrument_66.insert(UnderlyingSecurityType_66.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_66("STRING_1929466");
      noUnderlyings_0_1_1.set(UnderlyingSeniority_66);
      UnderlyingInstrument_66.insert(UnderlyingSeniority_66.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_66("STRING_331023741");
      noUnderlyings_0_1_1.set(UnderlyingSettlMethod_66);
      UnderlyingInstrument_66.insert(UnderlyingSettlMethod_66.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_66(2);
      noUnderlyings_0_1_1.set(UnderlyingSettlementType_66);
      UnderlyingInstrument_66.insert(UnderlyingSettlementType_66.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_66;
      UnderlyingStartValue_66.setString("9497673");
      noUnderlyings_0_1_1.set(UnderlyingStartValue_66);
      UnderlyingInstrument_66.insert(UnderlyingStartValue_66.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_66("STRING_679548049");
      noUnderlyings_0_1_1.set(UnderlyingStateOrProvinceOfIssue_66);
      UnderlyingInstrument_66.insert(UnderlyingStateOrProvinceOfIssue_66.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_66("CHF");
      noUnderlyings_0_1_1.set(UnderlyingStrikeCurrency_66);
      UnderlyingInstrument_66.insert(UnderlyingStrikeCurrency_66.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_66;
      UnderlyingStrikePrice_66.setString("11290291");
      noUnderlyings_0_1_1.set(UnderlyingStrikePrice_66);
      UnderlyingInstrument_66.insert(UnderlyingStrikePrice_66.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_66("STRING_24697887");
      noUnderlyings_0_1_1.set(UnderlyingSymbol_66);
      UnderlyingInstrument_66.insert(UnderlyingSymbol_66.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_66("STRING_412872048");
      noUnderlyings_0_1_1.set(UnderlyingSymbolSfx_66);
      UnderlyingInstrument_66.insert(UnderlyingSymbolSfx_66.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_66("STRING_1405173611");
      noUnderlyings_0_1_1.set(UnderlyingTimeUnit_66);
      UnderlyingInstrument_66.insert(UnderlyingTimeUnit_66.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_66("STRING_1491817708");
      noUnderlyings_0_1_1.set(UnderlyingUnitOfMeasure_66);
      UnderlyingInstrument_66.insert(UnderlyingUnitOfMeasure_66.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_66;
      UnderlyingUnitOfMeasureQty_66.setString("6168688");
      noUnderlyings_0_1_1.set(UnderlyingUnitOfMeasureQty_66);
      UnderlyingInstrument_66.insert(UnderlyingUnitOfMeasureQty_66.getString());
      all_values.push_back(UnderlyingInstrument_66);
      all_compo_names.insert("UnderlyingInstrument");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_137;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_137("STRING_189403745");
        noUnderlyingSecurityAltID_0_1_2_0.set(UnderlyingSecurityAltID_137);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_137.insert(UnderlyingSecurityAltID_137.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_137("STRING_1752019074");
        noUnderlyingSecurityAltID_0_1_2_0.set(UnderlyingSecurityAltIDSource_137);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_137.insert(UnderlyingSecurityAltIDSource_137.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_137);
        all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_1.addGroup(noUnderlyingSecurityAltID_0_1_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_138;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_138("STRING_358976037");
        noUnderlyingSecurityAltID_0_1_2_1.set(UnderlyingSecurityAltID_138);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_138.insert(UnderlyingSecurityAltID_138.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_138("STRING_862940250");
        noUnderlyingSecurityAltID_0_1_2_1.set(UnderlyingSecurityAltIDSource_138);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_138.insert(UnderlyingSecurityAltIDSource_138.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_138);
        all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_1.addGroup(noUnderlyingSecurityAltID_0_1_2_1);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_132;
        FIX::UnderlyingStipType UnderlyingStipType_132("STRING_2066353449");
        noUnderlyingStips_0_1_2_0.set(UnderlyingStipType_132);
        UnderlyingStipulations_NoUnderlyingStips_132.insert(UnderlyingStipType_132.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_132("STRING_302796694");
        noUnderlyingStips_0_1_2_0.set(UnderlyingStipValue_132);
        UnderlyingStipulations_NoUnderlyingStips_132.insert(UnderlyingStipValue_132.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_132);
        all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

        noUnderlyings_0_1_1.addGroup(noUnderlyingStips_0_1_2_0);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_127;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_127("STRING_204984723");
        noUndlyInstrumentParties_0_1_2_0.set(UnderlyingInstrumentPartyID_127);
        UndlyInstrumentParties_NoUndlyInstrumentParties_127.insert(UnderlyingInstrumentPartyID_127.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_127('1');
        noUndlyInstrumentParties_0_1_2_0.set(UnderlyingInstrumentPartyIDSource_127);
        UndlyInstrumentParties_NoUndlyInstrumentParties_127.insert(UnderlyingInstrumentPartyIDSource_127.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_127(596462738);
        noUndlyInstrumentParties_0_1_2_0.set(UnderlyingInstrumentPartyRole_127);
        UndlyInstrumentParties_NoUndlyInstrumentParties_127.insert(UnderlyingInstrumentPartyRole_127.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_127);
        all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_254;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_254("STRING_2094329486");
          noUndlyInstrumentPartySubIDs_0_1_0_3_0.set(UnderlyingInstrumentPartySubID_254);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_254.insert(UnderlyingInstrumentPartySubID_254.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_254(1127677336);
          noUndlyInstrumentPartySubIDs_0_1_0_3_0.set(UnderlyingInstrumentPartySubIDType_254);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_254.insert(UnderlyingInstrumentPartySubIDType_254.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_254);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_255;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_255("STRING_859140936");
          noUndlyInstrumentPartySubIDs_0_1_0_3_1.set(UnderlyingInstrumentPartySubID_255);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_255.insert(UnderlyingInstrumentPartySubID_255.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_255(700133299);
          noUndlyInstrumentPartySubIDs_0_1_0_3_1.set(UnderlyingInstrumentPartySubIDType_255);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_255.insert(UnderlyingInstrumentPartySubIDType_255.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_255);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0_3_1);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_256;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_256("STRING_1671738550");
          noUndlyInstrumentPartySubIDs_0_1_0_3_2.set(UnderlyingInstrumentPartySubID_256);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_256.insert(UnderlyingInstrumentPartySubID_256.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_256(861070402);
          noUndlyInstrumentPartySubIDs_0_1_0_3_2.set(UnderlyingInstrumentPartySubIDType_256);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_256.insert(UnderlyingInstrumentPartySubIDType_256.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_256);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0_3_2);
        }
        noUnderlyings_0_1_1.addGroup(noUndlyInstrumentParties_0_1_2_0);
      }
      noOrders_0_0.addGroup(noUnderlyings_0_1_1);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoUnderlyings noUnderlyings_0_1_2;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_67;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_67("DATA_1031157041");
      noUnderlyings_0_1_2.set(EncodedUnderlyingIssuer_67);
      UnderlyingInstrument_67.insert(EncodedUnderlyingIssuer_67.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_67(700774136);
      noUnderlyings_0_1_2.set(EncodedUnderlyingIssuerLen_67);
      UnderlyingInstrument_67.insert(EncodedUnderlyingIssuerLen_67.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_67("DATA_1810837765");
      noUnderlyings_0_1_2.set(EncodedUnderlyingSecurityDesc_67);
      UnderlyingInstrument_67.insert(EncodedUnderlyingSecurityDesc_67.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_67(1710705090);
      noUnderlyings_0_1_2.set(EncodedUnderlyingSecurityDescLen_67);
      UnderlyingInstrument_67.insert(EncodedUnderlyingSecurityDescLen_67.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_67;
      UnderlyingAdjustedQuantity_67.setString("10688830");
      noUnderlyings_0_1_2.set(UnderlyingAdjustedQuantity_67);
      UnderlyingInstrument_67.insert(UnderlyingAdjustedQuantity_67.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_67;
      UnderlyingAllocationPercent_67.setString("34.630000");
      noUnderlyings_0_1_2.set(UnderlyingAllocationPercent_67);
      UnderlyingInstrument_67.insert(UnderlyingAllocationPercent_67.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_67;
      UnderlyingAttachmentPoint_67.setString("6.120000");
      noUnderlyings_0_1_2.set(UnderlyingAttachmentPoint_67);
      UnderlyingInstrument_67.insert(UnderlyingAttachmentPoint_67.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_67("STRING_1093580982");
      noUnderlyings_0_1_2.set(UnderlyingCFICode_67);
      UnderlyingInstrument_67.insert(UnderlyingCFICode_67.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_67("STRING_2023475511");
      noUnderlyings_0_1_2.set(UnderlyingCPProgram_67);
      UnderlyingInstrument_67.insert(UnderlyingCPProgram_67.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_67("STRING_2097424224");
      noUnderlyings_0_1_2.set(UnderlyingCPRegType_67);
      UnderlyingInstrument_67.insert(UnderlyingCPRegType_67.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_67;
      UnderlyingCapValue_67.setString("4379150");
      noUnderlyings_0_1_2.set(UnderlyingCapValue_67);
      UnderlyingInstrument_67.insert(UnderlyingCapValue_67.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_67;
      UnderlyingCashAmount_67.setString("4928607");
      noUnderlyings_0_1_2.set(UnderlyingCashAmount_67);
      UnderlyingInstrument_67.insert(UnderlyingCashAmount_67.getString());
      FIX::UnderlyingCashType UnderlyingCashType_67("STRING_DIFF");
      noUnderlyings_0_1_2.set(UnderlyingCashType_67);
      UnderlyingInstrument_67.insert(UnderlyingCashType_67.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_67;
      UnderlyingContractMultiplier_67.setString("6273187");
      noUnderlyings_0_1_2.set(UnderlyingContractMultiplier_67);
      UnderlyingInstrument_67.insert(UnderlyingContractMultiplier_67.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_67(97396128);
      noUnderlyings_0_1_2.set(UnderlyingContractMultiplierUnit_67);
      UnderlyingInstrument_67.insert(UnderlyingContractMultiplierUnit_67.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_67("COUNTRY_103152822");
      noUnderlyings_0_1_2.set(UnderlyingCountryOfIssue_67);
      UnderlyingInstrument_67.insert(UnderlyingCountryOfIssue_67.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_67("LOCALMKTDATE_1490259037");
      noUnderlyings_0_1_2.set(UnderlyingCouponPaymentDate_67);
      UnderlyingInstrument_67.insert(UnderlyingCouponPaymentDate_67.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_67;
      UnderlyingCouponRate_67.setString("94.650000");
      noUnderlyings_0_1_2.set(UnderlyingCouponRate_67);
      UnderlyingInstrument_67.insert(UnderlyingCouponRate_67.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_67("STRING_22022624");
      noUnderlyings_0_1_2.set(UnderlyingCreditRating_67);
      UnderlyingInstrument_67.insert(UnderlyingCreditRating_67.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_67("EUR");
      noUnderlyings_0_1_2.set(UnderlyingCurrency_67);
      UnderlyingInstrument_67.insert(UnderlyingCurrency_67.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_67;
      UnderlyingCurrentValue_67.setString("2270073");
      noUnderlyings_0_1_2.set(UnderlyingCurrentValue_67);
      UnderlyingInstrument_67.insert(UnderlyingCurrentValue_67.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_67;
      UnderlyingDetachmentPoint_67.setString("51.980000");
      noUnderlyings_0_1_2.set(UnderlyingDetachmentPoint_67);
      UnderlyingInstrument_67.insert(UnderlyingDetachmentPoint_67.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_67;
      UnderlyingDirtyPrice_67.setString("11825030");
      noUnderlyings_0_1_2.set(UnderlyingDirtyPrice_67);
      UnderlyingInstrument_67.insert(UnderlyingDirtyPrice_67.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_67;
      UnderlyingEndPrice_67.setString("13100045");
      noUnderlyings_0_1_2.set(UnderlyingEndPrice_67);
      UnderlyingInstrument_67.insert(UnderlyingEndPrice_67.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_67;
      UnderlyingEndValue_67.setString("15003910");
      noUnderlyings_0_1_2.set(UnderlyingEndValue_67);
      UnderlyingInstrument_67.insert(UnderlyingEndValue_67.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_67(162696762);
      noUnderlyings_0_1_2.set(UnderlyingExerciseStyle_67);
      UnderlyingInstrument_67.insert(UnderlyingExerciseStyle_67.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_67;
      UnderlyingFXRate_67.setString("216618");
      noUnderlyings_0_1_2.set(UnderlyingFXRate_67);
      UnderlyingInstrument_67.insert(UnderlyingFXRate_67.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_67('D');
      noUnderlyings_0_1_2.set(UnderlyingFXRateCalc_67);
      UnderlyingInstrument_67.insert(UnderlyingFXRateCalc_67.getString());
      FIX::UnderlyingFactor UnderlyingFactor_67;
      UnderlyingFactor_67.setString("18344353");
      noUnderlyings_0_1_2.set(UnderlyingFactor_67);
      UnderlyingInstrument_67.insert(UnderlyingFactor_67.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_67(882732253);
      noUnderlyings_0_1_2.set(UnderlyingFlowScheduleType_67);
      UnderlyingInstrument_67.insert(UnderlyingFlowScheduleType_67.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_67("STRING_1084197729");
      noUnderlyings_0_1_2.set(UnderlyingInstrRegistry_67);
      UnderlyingInstrument_67.insert(UnderlyingInstrRegistry_67.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_67("LOCALMKTDATE_387725800");
      noUnderlyings_0_1_2.set(UnderlyingIssueDate_67);
      UnderlyingInstrument_67.insert(UnderlyingIssueDate_67.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_67("STRING_546086371");
      noUnderlyings_0_1_2.set(UnderlyingIssuer_67);
      UnderlyingInstrument_67.insert(UnderlyingIssuer_67.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_67("STRING_647419171");
      noUnderlyings_0_1_2.set(UnderlyingLocaleOfIssue_67);
      UnderlyingInstrument_67.insert(UnderlyingLocaleOfIssue_67.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_67("LOCALMKTDATE_1456608895");
      noUnderlyings_0_1_2.set(UnderlyingMaturityDate_67);
      UnderlyingInstrument_67.insert(UnderlyingMaturityDate_67.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_67("MONTHYEAR_9206186");
      noUnderlyings_0_1_2.set(UnderlyingMaturityMonthYear_67);
      UnderlyingInstrument_67.insert(UnderlyingMaturityMonthYear_67.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_67("TZTIMEONLY_1339669784");
      noUnderlyings_0_1_2.set(UnderlyingMaturityTime_67);
      UnderlyingInstrument_67.insert(UnderlyingMaturityTime_67.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_67;
      UnderlyingNotionalPercentageOutstanding_67.setString("62.290000");
      noUnderlyings_0_1_2.set(UnderlyingNotionalPercentageOutstanding_67);
      UnderlyingInstrument_67.insert(UnderlyingNotionalPercentageOutstanding_67.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_67('2');
      noUnderlyings_0_1_2.set(UnderlyingOptAttribute_67);
      UnderlyingInstrument_67.insert(UnderlyingOptAttribute_67.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_67;
      UnderlyingOriginalNotionalPercentageOutstanding_67.setString("3.600000");
      noUnderlyings_0_1_2.set(UnderlyingOriginalNotionalPercentageOutstanding_67);
      UnderlyingInstrument_67.insert(UnderlyingOriginalNotionalPercentageOutstanding_67.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_67("STRING_840621271");
      noUnderlyings_0_1_2.set(UnderlyingPriceUnitOfMeasure_67);
      UnderlyingInstrument_67.insert(UnderlyingPriceUnitOfMeasure_67.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_67;
      UnderlyingPriceUnitOfMeasureQty_67.setString("3780587");
      noUnderlyings_0_1_2.set(UnderlyingPriceUnitOfMeasureQty_67);
      UnderlyingInstrument_67.insert(UnderlyingPriceUnitOfMeasureQty_67.getString());
      FIX::UnderlyingProduct UnderlyingProduct_67(1033787145);
      noUnderlyings_0_1_2.set(UnderlyingProduct_67);
      UnderlyingInstrument_67.insert(UnderlyingProduct_67.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_67(1467940058);
      noUnderlyings_0_1_2.set(UnderlyingPutOrCall_67);
      UnderlyingInstrument_67.insert(UnderlyingPutOrCall_67.getString());
      FIX::UnderlyingPx UnderlyingPx_67;
      UnderlyingPx_67.setString("4754548");
      noUnderlyings_0_1_2.set(UnderlyingPx_67);
      UnderlyingInstrument_67.insert(UnderlyingPx_67.getString());
      FIX::UnderlyingQty UnderlyingQty_67;
      UnderlyingQty_67.setString("11369399");
      noUnderlyings_0_1_2.set(UnderlyingQty_67);
      UnderlyingInstrument_67.insert(UnderlyingQty_67.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_67("LOCALMKTDATE_810715447");
      noUnderlyings_0_1_2.set(UnderlyingRedemptionDate_67);
      UnderlyingInstrument_67.insert(UnderlyingRedemptionDate_67.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_67("STRING_204540697");
      noUnderlyings_0_1_2.set(UnderlyingRepoCollateralSecurityType_67);
      UnderlyingInstrument_67.insert(UnderlyingRepoCollateralSecurityType_67.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_67;
      UnderlyingRepurchaseRate_67.setString("25.910000");
      noUnderlyings_0_1_2.set(UnderlyingRepurchaseRate_67);
      UnderlyingInstrument_67.insert(UnderlyingRepurchaseRate_67.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_67(456287531);
      noUnderlyings_0_1_2.set(UnderlyingRepurchaseTerm_67);
      UnderlyingInstrument_67.insert(UnderlyingRepurchaseTerm_67.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_67("STRING_790581032");
      noUnderlyings_0_1_2.set(UnderlyingRestructuringType_67);
      UnderlyingInstrument_67.insert(UnderlyingRestructuringType_67.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_67("STRING_1385969938");
      noUnderlyings_0_1_2.set(UnderlyingSecurityDesc_67);
      UnderlyingInstrument_67.insert(UnderlyingSecurityDesc_67.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_67("EXCHANGE_2009832729");
      noUnderlyings_0_1_2.set(UnderlyingSecurityExchange_67);
      UnderlyingInstrument_67.insert(UnderlyingSecurityExchange_67.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_67("STRING_1973084106");
      noUnderlyings_0_1_2.set(UnderlyingSecurityID_67);
      UnderlyingInstrument_67.insert(UnderlyingSecurityID_67.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_67("STRING_548490853");
      noUnderlyings_0_1_2.set(UnderlyingSecurityIDSource_67);
      UnderlyingInstrument_67.insert(UnderlyingSecurityIDSource_67.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_67("STRING_1362740118");
      noUnderlyings_0_1_2.set(UnderlyingSecuritySubType_67);
      UnderlyingInstrument_67.insert(UnderlyingSecuritySubType_67.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_67("STRING_2135780868");
      noUnderlyings_0_1_2.set(UnderlyingSecurityType_67);
      UnderlyingInstrument_67.insert(UnderlyingSecurityType_67.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_67("STRING_570152704");
      noUnderlyings_0_1_2.set(UnderlyingSeniority_67);
      UnderlyingInstrument_67.insert(UnderlyingSeniority_67.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_67("STRING_1415780806");
      noUnderlyings_0_1_2.set(UnderlyingSettlMethod_67);
      UnderlyingInstrument_67.insert(UnderlyingSettlMethod_67.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_67(5);
      noUnderlyings_0_1_2.set(UnderlyingSettlementType_67);
      UnderlyingInstrument_67.insert(UnderlyingSettlementType_67.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_67;
      UnderlyingStartValue_67.setString("14528849");
      noUnderlyings_0_1_2.set(UnderlyingStartValue_67);
      UnderlyingInstrument_67.insert(UnderlyingStartValue_67.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_67("STRING_352494887");
      noUnderlyings_0_1_2.set(UnderlyingStateOrProvinceOfIssue_67);
      UnderlyingInstrument_67.insert(UnderlyingStateOrProvinceOfIssue_67.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_67("USD");
      noUnderlyings_0_1_2.set(UnderlyingStrikeCurrency_67);
      UnderlyingInstrument_67.insert(UnderlyingStrikeCurrency_67.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_67;
      UnderlyingStrikePrice_67.setString("9999140");
      noUnderlyings_0_1_2.set(UnderlyingStrikePrice_67);
      UnderlyingInstrument_67.insert(UnderlyingStrikePrice_67.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_67("STRING_1519583580");
      noUnderlyings_0_1_2.set(UnderlyingSymbol_67);
      UnderlyingInstrument_67.insert(UnderlyingSymbol_67.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_67("STRING_2008177514");
      noUnderlyings_0_1_2.set(UnderlyingSymbolSfx_67);
      UnderlyingInstrument_67.insert(UnderlyingSymbolSfx_67.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_67("STRING_192100194");
      noUnderlyings_0_1_2.set(UnderlyingTimeUnit_67);
      UnderlyingInstrument_67.insert(UnderlyingTimeUnit_67.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_67("STRING_1922289809");
      noUnderlyings_0_1_2.set(UnderlyingUnitOfMeasure_67);
      UnderlyingInstrument_67.insert(UnderlyingUnitOfMeasure_67.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_67;
      UnderlyingUnitOfMeasureQty_67.setString("18933755");
      noUnderlyings_0_1_2.set(UnderlyingUnitOfMeasureQty_67);
      UnderlyingInstrument_67.insert(UnderlyingUnitOfMeasureQty_67.getString());
      all_values.push_back(UnderlyingInstrument_67);
      all_compo_names.insert("UnderlyingInstrument");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_2_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_139;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_139("STRING_615427433");
        noUnderlyingSecurityAltID_0_2_2_0.set(UnderlyingSecurityAltID_139);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_139.insert(UnderlyingSecurityAltID_139.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_139("STRING_123950667");
        noUnderlyingSecurityAltID_0_2_2_0.set(UnderlyingSecurityAltIDSource_139);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_139.insert(UnderlyingSecurityAltIDSource_139.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_139);
        all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_2.addGroup(noUnderlyingSecurityAltID_0_2_2_0);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_2_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_133;
        FIX::UnderlyingStipType UnderlyingStipType_133("STRING_2083367491");
        noUnderlyingStips_0_2_2_0.set(UnderlyingStipType_133);
        UnderlyingStipulations_NoUnderlyingStips_133.insert(UnderlyingStipType_133.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_133("STRING_599405547");
        noUnderlyingStips_0_2_2_0.set(UnderlyingStipValue_133);
        UnderlyingStipulations_NoUnderlyingStips_133.insert(UnderlyingStipValue_133.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_133);
        all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

        noUnderlyings_0_1_2.addGroup(noUnderlyingStips_0_2_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_2_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_134;
        FIX::UnderlyingStipType UnderlyingStipType_134("STRING_1504954019");
        noUnderlyingStips_0_2_2_1.set(UnderlyingStipType_134);
        UnderlyingStipulations_NoUnderlyingStips_134.insert(UnderlyingStipType_134.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_134("STRING_746599291");
        noUnderlyingStips_0_2_2_1.set(UnderlyingStipValue_134);
        UnderlyingStipulations_NoUnderlyingStips_134.insert(UnderlyingStipValue_134.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_134);
        all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

        noUnderlyings_0_1_2.addGroup(noUnderlyingStips_0_2_2_1);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_2_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_128;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_128("STRING_516432962");
        noUndlyInstrumentParties_0_2_2_0.set(UnderlyingInstrumentPartyID_128);
        UndlyInstrumentParties_NoUndlyInstrumentParties_128.insert(UnderlyingInstrumentPartyID_128.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_128('1');
        noUndlyInstrumentParties_0_2_2_0.set(UnderlyingInstrumentPartyIDSource_128);
        UndlyInstrumentParties_NoUndlyInstrumentParties_128.insert(UnderlyingInstrumentPartyIDSource_128.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_128(1594527276);
        noUndlyInstrumentParties_0_2_2_0.set(UnderlyingInstrumentPartyRole_128);
        UndlyInstrumentParties_NoUndlyInstrumentParties_128.insert(UnderlyingInstrumentPartyRole_128.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_128);
        all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_257;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_257("STRING_1065235903");
          noUndlyInstrumentPartySubIDs_0_2_0_3_0.set(UnderlyingInstrumentPartySubID_257);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_257.insert(UnderlyingInstrumentPartySubID_257.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_257(1420127734);
          noUndlyInstrumentPartySubIDs_0_2_0_3_0.set(UnderlyingInstrumentPartySubIDType_257);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_257.insert(UnderlyingInstrumentPartySubIDType_257.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_257);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_2_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_2_0_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_258;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_258("STRING_303410106");
          noUndlyInstrumentPartySubIDs_0_2_0_3_1.set(UnderlyingInstrumentPartySubID_258);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_258.insert(UnderlyingInstrumentPartySubID_258.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_258(280492373);
          noUndlyInstrumentPartySubIDs_0_2_0_3_1.set(UnderlyingInstrumentPartySubIDType_258);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_258.insert(UnderlyingInstrumentPartySubIDType_258.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_258);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_2_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_2_0_3_1);
        }
        noUnderlyings_0_1_2.addGroup(noUndlyInstrumentParties_0_2_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_2_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_129;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_129("STRING_1408424954");
        noUndlyInstrumentParties_0_2_2_1.set(UnderlyingInstrumentPartyID_129);
        UndlyInstrumentParties_NoUndlyInstrumentParties_129.insert(UnderlyingInstrumentPartyID_129.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_129('8');
        noUndlyInstrumentParties_0_2_2_1.set(UnderlyingInstrumentPartyIDSource_129);
        UndlyInstrumentParties_NoUndlyInstrumentParties_129.insert(UnderlyingInstrumentPartyIDSource_129.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_129(1696273179);
        noUndlyInstrumentParties_0_2_2_1.set(UnderlyingInstrumentPartyRole_129);
        UndlyInstrumentParties_NoUndlyInstrumentParties_129.insert(UnderlyingInstrumentPartyRole_129.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_129);
        all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_259;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_259("STRING_178964119");
          noUndlyInstrumentPartySubIDs_0_2_1_3_0.set(UnderlyingInstrumentPartySubID_259);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_259.insert(UnderlyingInstrumentPartySubID_259.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_259(2048768066);
          noUndlyInstrumentPartySubIDs_0_2_1_3_0.set(UnderlyingInstrumentPartySubIDType_259);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_259.insert(UnderlyingInstrumentPartySubIDType_259.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_259);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_2_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_2_1_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_1_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_260;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_260("STRING_1146648523");
          noUndlyInstrumentPartySubIDs_0_2_1_3_1.set(UnderlyingInstrumentPartySubID_260);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_260.insert(UnderlyingInstrumentPartySubID_260.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_260(30451800);
          noUndlyInstrumentPartySubIDs_0_2_1_3_1.set(UnderlyingInstrumentPartySubIDType_260);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_260.insert(UnderlyingInstrumentPartySubIDType_260.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_260);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_2_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_2_1_3_1);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_1_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_261;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_261("STRING_901198477");
          noUndlyInstrumentPartySubIDs_0_2_1_3_2.set(UnderlyingInstrumentPartySubID_261);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_261.insert(UnderlyingInstrumentPartySubID_261.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_261(518748455);
          noUndlyInstrumentPartySubIDs_0_2_1_3_2.set(UnderlyingInstrumentPartySubIDType_261);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_261.insert(UnderlyingInstrumentPartySubIDType_261.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_261);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_2_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_2_1_3_2);
        }
        noUnderlyings_0_1_2.addGroup(noUndlyInstrumentParties_0_2_2_1);
      }
      noOrders_0_0.addGroup(noUnderlyings_0_1_2);
    }
    // YieldData
    multiset<string> YieldData_11;
    FIX::Yield Yield_11;
    Yield_11.setString("93.140000");
    noOrders_0_0.set(Yield_11);
    YieldData_11.insert(Yield_11.getString());
    FIX::YieldCalcDate YieldCalcDate_11("LOCALMKTDATE_1093298671");
    noOrders_0_0.set(YieldCalcDate_11);
    YieldData_11.insert(YieldCalcDate_11.getString());
    FIX::YieldRedemptionDate YieldRedemptionDate_11("LOCALMKTDATE_293554616");
    noOrders_0_0.set(YieldRedemptionDate_11);
    YieldData_11.insert(YieldRedemptionDate_11.getString());
    FIX::YieldRedemptionPrice YieldRedemptionPrice_11;
    YieldRedemptionPrice_11.setString("17845212");
    noOrders_0_0.set(YieldRedemptionPrice_11);
    YieldData_11.insert(YieldRedemptionPrice_11.getString());
    FIX::YieldRedemptionPriceType YieldRedemptionPriceType_11(427525578);
    noOrders_0_0.set(YieldRedemptionPriceType_11);
    YieldData_11.insert(YieldRedemptionPriceType_11.getString());
    FIX::YieldType YieldType_11("STRING_CALL");
    noOrders_0_0.set(YieldType_11);
    YieldData_11.insert(YieldType_11.getString());
    all_values.push_back(YieldData_11);
    all_compo_names.insert("YieldData");

    msg.addGroup(noOrders_0_0);
  }
  {
    FIX50SP2::NewOrderList::NoOrders noOrders_0_1;
    // ListOrdGrp.NoOrders
    multiset<string> ListOrdGrp_NoOrders_1;
    FIX::Account Account_21("STRING_1908471898");
    noOrders_0_1.set(Account_21);
    ListOrdGrp_NoOrders_1.insert(Account_21.getString());
    FIX::AccountType AccountType_18(4);
    noOrders_0_1.set(AccountType_18);
    ListOrdGrp_NoOrders_1.insert(AccountType_18.getString());
    FIX::AcctIDSource AcctIDSource_14(2);
    noOrders_0_1.set(AcctIDSource_14);
    ListOrdGrp_NoOrders_1.insert(AcctIDSource_14.getString());
    FIX::AllocID AllocID_16("STRING_360393797");
    noOrders_0_1.set(AllocID_16);
    ListOrdGrp_NoOrders_1.insert(AllocID_16.getString());
    FIX::BookingType BookingType_26(1);
    noOrders_0_1.set(BookingType_26);
    ListOrdGrp_NoOrders_1.insert(BookingType_26.getString());
    FIX::BookingUnit BookingUnit_9('2');
    noOrders_0_1.set(BookingUnit_9);
    ListOrdGrp_NoOrders_1.insert(BookingUnit_9.getString());
    FIX::CashMargin CashMargin_9('1');
    noOrders_0_1.set(CashMargin_9);
    ListOrdGrp_NoOrders_1.insert(CashMargin_9.getString());
    FIX::ClOrdID ClOrdID_30("STRING_669442963");
    noOrders_0_1.set(ClOrdID_30);
    ListOrdGrp_NoOrders_1.insert(ClOrdID_30.getString());
    FIX::ClOrdLinkID ClOrdLinkID_10("STRING_646868358");
    noOrders_0_1.set(ClOrdLinkID_10);
    ListOrdGrp_NoOrders_1.insert(ClOrdLinkID_10.getString());
    FIX::ClearingFeeIndicator ClearingFeeIndicator_13("STRING_2");
    noOrders_0_1.set(ClearingFeeIndicator_13);
    ListOrdGrp_NoOrders_1.insert(ClearingFeeIndicator_13.getString());
    FIX::ComplianceID ComplianceID_6("STRING_424362216");
    noOrders_0_1.set(ComplianceID_6);
    ListOrdGrp_NoOrders_1.insert(ComplianceID_6.getString());
    FIX::CoveredOrUncovered CoveredOrUncovered_8(1);
    noOrders_0_1.set(CoveredOrUncovered_8);
    ListOrdGrp_NoOrders_1.insert(CoveredOrUncovered_8.getString());
    FIX::Currency Currency_47("USD");
    noOrders_0_1.set(Currency_47);
    ListOrdGrp_NoOrders_1.insert(Currency_47.getString());
    FIX::CustOrderCapacity CustOrderCapacity_12(4);
    noOrders_0_1.set(CustOrderCapacity_12);
    ListOrdGrp_NoOrders_1.insert(CustOrderCapacity_12.getString());
    FIX::DayBookingInst DayBookingInst_9('0');
    noOrders_0_1.set(DayBookingInst_9);
    ListOrdGrp_NoOrders_1.insert(DayBookingInst_9.getString());
    FIX::Designation Designation_5("STRING_1601335132");
    noOrders_0_1.set(Designation_5);
    ListOrdGrp_NoOrders_1.insert(Designation_5.getString());
    FIX::EffectiveTime EffectiveTime_5(FIX::UTCTIMESTAMP(13, 11, 45, 24, 12, 2014));
    noOrders_0_1.set(EffectiveTime_5);
    ListOrdGrp_NoOrders_1.insert(EffectiveTime_5.getString());
    FIX::EncodedText EncodedText_58("DATA_1894039879");
    noOrders_0_1.set(EncodedText_58);
    ListOrdGrp_NoOrders_1.insert(EncodedText_58.getString());
    FIX::EncodedTextLen EncodedTextLen_58(1701896718);
    noOrders_0_1.set(EncodedTextLen_58);
    ListOrdGrp_NoOrders_1.insert(EncodedTextLen_58.getString());
    FIX::ExDestination ExDestination_4("EXCHANGE_1289684085");
    noOrders_0_1.set(ExDestination_4);
    ListOrdGrp_NoOrders_1.insert(ExDestination_4.getString());
    FIX::ExDestinationIDSource ExDestinationIDSource_4('D');
    noOrders_0_1.set(ExDestinationIDSource_4);
    ListOrdGrp_NoOrders_1.insert(ExDestinationIDSource_4.getString());
    FIX::ExecInst ExecInst_8("MULTIPLECHARVALUE_4");
    noOrders_0_1.set(ExecInst_8);
    ListOrdGrp_NoOrders_1.insert(ExecInst_8.getString());
    FIX::ExpireDate ExpireDate_9("LOCALMKTDATE_1717209663");
    noOrders_0_1.set(ExpireDate_9);
    ListOrdGrp_NoOrders_1.insert(ExpireDate_9.getString());
    FIX::ExpireTime ExpireTime_10(FIX::UTCTIMESTAMP(6, 45, 10, 7, 2, 2010));
    noOrders_0_1.set(ExpireTime_10);
    ListOrdGrp_NoOrders_1.insert(ExpireTime_10.getString());
    FIX::ForexReq ForexReq_9(true);
    noOrders_0_1.set(ForexReq_9);
    ListOrdGrp_NoOrders_1.insert(ForexReq_9.getString());
    FIX::GTBookingInst GTBookingInst_5(2);
    noOrders_0_1.set(GTBookingInst_5);
    ListOrdGrp_NoOrders_1.insert(GTBookingInst_5.getString());
    FIX::HandlInst HandlInst_5('2');
    noOrders_0_1.set(HandlInst_5);
    ListOrdGrp_NoOrders_1.insert(HandlInst_5.getString());
    FIX::IOIID IOIID_5("STRING_1088556410");
    noOrders_0_1.set(IOIID_5);
    ListOrdGrp_NoOrders_1.insert(IOIID_5.getString());
    FIX::ListSeqNo ListSeqNo_1(1612080824);
    noOrders_0_1.set(ListSeqNo_1);
    ListOrdGrp_NoOrders_1.insert(ListSeqNo_1.getString());
    FIX::LocateReqd LocateReqd_4(false);
    noOrders_0_1.set(LocateReqd_4);
    ListOrdGrp_NoOrders_1.insert(LocateReqd_4.getString());
    FIX::MatchIncrement MatchIncrement_5;
    MatchIncrement_5.setString("9725841");
    noOrders_0_1.set(MatchIncrement_5);
    ListOrdGrp_NoOrders_1.insert(MatchIncrement_5.getString());
    FIX::MaxFloor MaxFloor_5;
    MaxFloor_5.setString("1923694");
    noOrders_0_1.set(MaxFloor_5);
    ListOrdGrp_NoOrders_1.insert(MaxFloor_5.getString());
    FIX::MaxPriceLevels MaxPriceLevels_5(1294542284);
    noOrders_0_1.set(MaxPriceLevels_5);
    ListOrdGrp_NoOrders_1.insert(MaxPriceLevels_5.getString());
    FIX::MaxShow MaxShow_5;
    MaxShow_5.setString("1175532");
    noOrders_0_1.set(MaxShow_5);
    ListOrdGrp_NoOrders_1.insert(MaxShow_5.getString());
    FIX::MinQty MinQty_8;
    MinQty_8.setString("17937046");
    noOrders_0_1.set(MinQty_8);
    ListOrdGrp_NoOrders_1.insert(MinQty_8.getString());
    FIX::OrdType OrdType_50('4');
    noOrders_0_1.set(OrdType_50);
    ListOrdGrp_NoOrders_1.insert(OrdType_50.getString());
    FIX::OrderCapacity OrderCapacity_27('W');
    noOrders_0_1.set(OrderCapacity_27);
    ListOrdGrp_NoOrders_1.insert(OrderCapacity_27.getString());
    FIX::OrderQty2 OrderQty2_16;
    OrderQty2_16.setString("14265202");
    noOrders_0_1.set(OrderQty2_16);
    ListOrdGrp_NoOrders_1.insert(OrderQty2_16.getString());
    FIX::OrderRestrictions OrderRestrictions_24("MULTIPLECHARVALUE_4");
    noOrders_0_1.set(OrderRestrictions_24);
    ListOrdGrp_NoOrders_1.insert(OrderRestrictions_24.getString());
    FIX::ParticipationRate ParticipationRate_5;
    ParticipationRate_5.setString("75.530000");
    noOrders_0_1.set(ParticipationRate_5);
    ListOrdGrp_NoOrders_1.insert(ParticipationRate_5.getString());
    FIX::PositionEffect PositionEffect_12('D');
    noOrders_0_1.set(PositionEffect_12);
    ListOrdGrp_NoOrders_1.insert(PositionEffect_12.getString());
    FIX::PreTradeAnonymity PreTradeAnonymity_9(true);
    noOrders_0_1.set(PreTradeAnonymity_9);
    ListOrdGrp_NoOrders_1.insert(PreTradeAnonymity_9.getString());
    FIX::PreallocMethod PreallocMethod_9('0');
    noOrders_0_1.set(PreallocMethod_9);
    ListOrdGrp_NoOrders_1.insert(PreallocMethod_9.getString());
    FIX::PrevClosePx PrevClosePx_5;
    PrevClosePx_5.setString("6442007");
    noOrders_0_1.set(PrevClosePx_5);
    ListOrdGrp_NoOrders_1.insert(PrevClosePx_5.getString());
    FIX::Price Price_16;
    Price_16.setString("14697012");
    noOrders_0_1.set(Price_16);
    ListOrdGrp_NoOrders_1.insert(Price_16.getString());
    FIX::Price2 Price2_1;
    Price2_1.setString("15081546");
    noOrders_0_1.set(Price2_1);
    ListOrdGrp_NoOrders_1.insert(Price2_1.getString());
    FIX::PriceProtectionScope PriceProtectionScope_5('0');
    noOrders_0_1.set(PriceProtectionScope_5);
    ListOrdGrp_NoOrders_1.insert(PriceProtectionScope_5.getString());
    FIX::PriceType PriceType_30(13);
    noOrders_0_1.set(PriceType_30);
    ListOrdGrp_NoOrders_1.insert(PriceType_30.getString());
    FIX::ProcessCode ProcessCode_9('0');
    noOrders_0_1.set(ProcessCode_9);
    ListOrdGrp_NoOrders_1.insert(ProcessCode_9.getString());
    FIX::QtyType QtyType_21(0);
    noOrders_0_1.set(QtyType_21);
    ListOrdGrp_NoOrders_1.insert(QtyType_21.getString());
    FIX::QuoteID QuoteID_6("STRING_1404692900");
    noOrders_0_1.set(QuoteID_6);
    ListOrdGrp_NoOrders_1.insert(QuoteID_6.getString());
    FIX::RefOrderID RefOrderID_1("STRING_2103722671");
    noOrders_0_1.set(RefOrderID_1);
    ListOrdGrp_NoOrders_1.insert(RefOrderID_1.getString());
    FIX::RefOrderIDSource RefOrderIDSource_1('0');
    noOrders_0_1.set(RefOrderIDSource_1);
    ListOrdGrp_NoOrders_1.insert(RefOrderIDSource_1.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_28("STRING_1922968545");
    noOrders_0_1.set(SecondaryClOrdID_28);
    ListOrdGrp_NoOrders_1.insert(SecondaryClOrdID_28.getString());
    FIX::SettlCurrency SettlCurrency_17("JPY");
    noOrders_0_1.set(SettlCurrency_17);
    ListOrdGrp_NoOrders_1.insert(SettlCurrency_17.getString());
    FIX::SettlDate SettlDate_40("LOCALMKTDATE_963203506");
    noOrders_0_1.set(SettlDate_40);
    ListOrdGrp_NoOrders_1.insert(SettlDate_40.getString());
    FIX::SettlDate2 SettlDate2_16("LOCALMKTDATE_931504385");
    noOrders_0_1.set(SettlDate2_16);
    ListOrdGrp_NoOrders_1.insert(SettlDate2_16.getString());
    FIX::SettlInstMode SettlInstMode_1('0');
    noOrders_0_1.set(SettlInstMode_1);
    ListOrdGrp_NoOrders_1.insert(SettlInstMode_1.getString());
    FIX::SettlType SettlType_20("STRING_B");
    noOrders_0_1.set(SettlType_20);
    ListOrdGrp_NoOrders_1.insert(SettlType_20.getString());
    FIX::Side Side_29('3');
    noOrders_0_1.set(Side_29);
    ListOrdGrp_NoOrders_1.insert(Side_29.getString());
    FIX::SideValueInd SideValueInd_2(1);
    noOrders_0_1.set(SideValueInd_2);
    ListOrdGrp_NoOrders_1.insert(SideValueInd_2.getString());
    FIX::SolicitedFlag SolicitedFlag_9(false);
    noOrders_0_1.set(SolicitedFlag_9);
    ListOrdGrp_NoOrders_1.insert(SolicitedFlag_9.getString());
    FIX::StopPx StopPx_5;
    StopPx_5.setString("15279923");
    noOrders_0_1.set(StopPx_5);
    ListOrdGrp_NoOrders_1.insert(StopPx_5.getString());
    FIX::TargetStrategy TargetStrategy_5(1);
    noOrders_0_1.set(TargetStrategy_5);
    ListOrdGrp_NoOrders_1.insert(TargetStrategy_5.getString());
    FIX::TargetStrategyParameters TargetStrategyParameters_5("STRING_266391163");
    noOrders_0_1.set(TargetStrategyParameters_5);
    ListOrdGrp_NoOrders_1.insert(TargetStrategyParameters_5.getString());
    FIX::Text Text_58("STRING_68953474");
    noOrders_0_1.set(Text_58);
    ListOrdGrp_NoOrders_1.insert(Text_58.getString());
    FIX::TimeInForce TimeInForce_34('6');
    noOrders_0_1.set(TimeInForce_34);
    ListOrdGrp_NoOrders_1.insert(TimeInForce_34.getString());
    FIX::TradeDate TradeDate_22("LOCALMKTDATE_1692911397");
    noOrders_0_1.set(TradeDate_22);
    ListOrdGrp_NoOrders_1.insert(TradeDate_22.getString());
    FIX::TradeOriginationDate TradeOriginationDate_14("LOCALMKTDATE_52585214");
    noOrders_0_1.set(TradeOriginationDate_14);
    ListOrdGrp_NoOrders_1.insert(TradeOriginationDate_14.getString());
    FIX::TransactTime TransactTime_43(FIX::UTCTIMESTAMP(19, 8, 26, 26, 12, 2008));
    noOrders_0_1.set(TransactTime_43);
    ListOrdGrp_NoOrders_1.insert(TransactTime_43.getString());
    all_values.push_back(ListOrdGrp_NoOrders_1);
    all_compo_names.insert("ListOrdGrp.NoOrders");

    // CommissionData
    multiset<string> CommissionData_17;
    FIX::CommCurrency CommCurrency_17("GBP");
    noOrders_0_1.set(CommCurrency_17);
    CommissionData_17.insert(CommCurrency_17.getString());
    FIX::CommType CommType_17('6');
    noOrders_0_1.set(CommType_17);
    CommissionData_17.insert(CommType_17.getString());
    FIX::Commission Commission_17;
    Commission_17.setString("20506413");
    noOrders_0_1.set(Commission_17);
    CommissionData_17.insert(Commission_17.getString());
    FIX::FundRenewWaiv FundRenewWaiv_17('N');
    noOrders_0_1.set(FundRenewWaiv_17);
    CommissionData_17.insert(FundRenewWaiv_17.getString());
    all_values.push_back(CommissionData_17);
    all_compo_names.insert("CommissionData");

    // DiscretionInstructions
    multiset<string> DiscretionInstructions_5;
    FIX::DiscretionInst DiscretionInst_5('6');
    noOrders_0_1.set(DiscretionInst_5);
    DiscretionInstructions_5.insert(DiscretionInst_5.getString());
    FIX::DiscretionLimitType DiscretionLimitType_5(1);
    noOrders_0_1.set(DiscretionLimitType_5);
    DiscretionInstructions_5.insert(DiscretionLimitType_5.getString());
    FIX::DiscretionMoveType DiscretionMoveType_5(0);
    noOrders_0_1.set(DiscretionMoveType_5);
    DiscretionInstructions_5.insert(DiscretionMoveType_5.getString());
    FIX::DiscretionOffsetType DiscretionOffsetType_5(3);
    noOrders_0_1.set(DiscretionOffsetType_5);
    DiscretionInstructions_5.insert(DiscretionOffsetType_5.getString());
    FIX::DiscretionOffsetValue DiscretionOffsetValue_5;
    DiscretionOffsetValue_5.setString("8771436");
    noOrders_0_1.set(DiscretionOffsetValue_5);
    DiscretionInstructions_5.insert(DiscretionOffsetValue_5.getString());
    FIX::DiscretionRoundDirection DiscretionRoundDirection_5(1);
    noOrders_0_1.set(DiscretionRoundDirection_5);
    DiscretionInstructions_5.insert(DiscretionRoundDirection_5.getString());
    FIX::DiscretionScope DiscretionScope_5(1);
    noOrders_0_1.set(DiscretionScope_5);
    DiscretionInstructions_5.insert(DiscretionScope_5.getString());
    all_values.push_back(DiscretionInstructions_5);
    all_compo_names.insert("DiscretionInstructions");

    // DisplayInstruction
    multiset<string> DisplayInstruction_5;
    FIX::DisplayHighQty DisplayHighQty_5;
    DisplayHighQty_5.setString("5437957");
    noOrders_0_1.set(DisplayHighQty_5);
    DisplayInstruction_5.insert(DisplayHighQty_5.getString());
    FIX::DisplayLowQty DisplayLowQty_5;
    DisplayLowQty_5.setString("10179455");
    noOrders_0_1.set(DisplayLowQty_5);
    DisplayInstruction_5.insert(DisplayLowQty_5.getString());
    FIX::DisplayMethod DisplayMethod_5('4');
    noOrders_0_1.set(DisplayMethod_5);
    DisplayInstruction_5.insert(DisplayMethod_5.getString());
    FIX::DisplayMinIncr DisplayMinIncr_5;
    DisplayMinIncr_5.setString("11830320");
    noOrders_0_1.set(DisplayMinIncr_5);
    DisplayInstruction_5.insert(DisplayMinIncr_5.getString());
    FIX::DisplayQty DisplayQty_5;
    DisplayQty_5.setString("16381157");
    noOrders_0_1.set(DisplayQty_5);
    DisplayInstruction_5.insert(DisplayQty_5.getString());
    FIX::DisplayWhen DisplayWhen_5('1');
    noOrders_0_1.set(DisplayWhen_5);
    DisplayInstruction_5.insert(DisplayWhen_5.getString());
    FIX::RefreshQty RefreshQty_5;
    RefreshQty_5.setString("19398215");
    noOrders_0_1.set(RefreshQty_5);
    DisplayInstruction_5.insert(RefreshQty_5.getString());
    FIX::SecondaryDisplayQty SecondaryDisplayQty_5;
    SecondaryDisplayQty_5.setString("19045068");
    noOrders_0_1.set(SecondaryDisplayQty_5);
    DisplayInstruction_5.insert(SecondaryDisplayQty_5.getString());
    all_values.push_back(DisplayInstruction_5);
    all_compo_names.insert("DisplayInstruction");

    // Instrument
    multiset<string> Instrument_49;
    FIX::AttachmentPoint AttachmentPoint_49;
    AttachmentPoint_49.setString("94.800000");
    noOrders_0_1.set(AttachmentPoint_49);
    Instrument_49.insert(AttachmentPoint_49.getString());
    FIX::CFICode CFICode_49("STRING_895323564");
    noOrders_0_1.set(CFICode_49);
    Instrument_49.insert(CFICode_49.getString());
    FIX::CPProgram CPProgram_49(99);
    noOrders_0_1.set(CPProgram_49);
    Instrument_49.insert(CPProgram_49.getString());
    FIX::CPRegType CPRegType_49("STRING_1485404694");
    noOrders_0_1.set(CPRegType_49);
    Instrument_49.insert(CPRegType_49.getString());
    FIX::CapPrice CapPrice_49;
    CapPrice_49.setString("15723131");
    noOrders_0_1.set(CapPrice_49);
    Instrument_49.insert(CapPrice_49.getString());
    FIX::ContractMultiplier ContractMultiplier_49;
    ContractMultiplier_49.setString("20851500");
    noOrders_0_1.set(ContractMultiplier_49);
    Instrument_49.insert(ContractMultiplier_49.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_49(2);
    noOrders_0_1.set(ContractMultiplierUnit_49);
    Instrument_49.insert(ContractMultiplierUnit_49.getString());
    FIX::ContractSettlMonth ContractSettlMonth_49("MONTHYEAR_1569862784");
    noOrders_0_1.set(ContractSettlMonth_49);
    Instrument_49.insert(ContractSettlMonth_49.getString());
    FIX::CountryOfIssue CountryOfIssue_49("COUNTRY_1217082480");
    noOrders_0_1.set(CountryOfIssue_49);
    Instrument_49.insert(CountryOfIssue_49.getString());
    FIX::CouponPaymentDate CouponPaymentDate_49("LOCALMKTDATE_1272827021");
    noOrders_0_1.set(CouponPaymentDate_49);
    Instrument_49.insert(CouponPaymentDate_49.getString());
    FIX::CouponRate CouponRate_49;
    CouponRate_49.setString("34.470000");
    noOrders_0_1.set(CouponRate_49);
    Instrument_49.insert(CouponRate_49.getString());
    FIX::CreditRating CreditRating_49("STRING_184666286");
    noOrders_0_1.set(CreditRating_49);
    Instrument_49.insert(CreditRating_49.getString());
    FIX::DatedDate DatedDate_49("LOCALMKTDATE_1867074236");
    noOrders_0_1.set(DatedDate_49);
    Instrument_49.insert(DatedDate_49.getString());
    FIX::DetachmentPoint DetachmentPoint_49;
    DetachmentPoint_49.setString("79.900000");
    noOrders_0_1.set(DetachmentPoint_49);
    Instrument_49.insert(DetachmentPoint_49.getString());
    FIX::EncodedIssuer EncodedIssuer_49("DATA_87824003");
    noOrders_0_1.set(EncodedIssuer_49);
    Instrument_49.insert(EncodedIssuer_49.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_49(1718530702);
    noOrders_0_1.set(EncodedIssuerLen_49);
    Instrument_49.insert(EncodedIssuerLen_49.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_49("DATA_220291557");
    noOrders_0_1.set(EncodedSecurityDesc_49);
    Instrument_49.insert(EncodedSecurityDesc_49.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_49(239388330);
    noOrders_0_1.set(EncodedSecurityDescLen_49);
    Instrument_49.insert(EncodedSecurityDescLen_49.getString());
    FIX::ExerciseStyle ExerciseStyle_49(2);
    noOrders_0_1.set(ExerciseStyle_49);
    Instrument_49.insert(ExerciseStyle_49.getString());
    FIX::Factor Factor_49;
    Factor_49.setString("10386944");
    noOrders_0_1.set(Factor_49);
    Instrument_49.insert(Factor_49.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_49(true);
    noOrders_0_1.set(FlexProductEligibilityIndicator_49);
    Instrument_49.insert(FlexProductEligibilityIndicator_49.getString());
    FIX::FlexibleIndicator FlexibleIndicator_49(true);
    noOrders_0_1.set(FlexibleIndicator_49);
    Instrument_49.insert(FlexibleIndicator_49.getString());
    FIX::FloorPrice FloorPrice_49;
    FloorPrice_49.setString("6411181");
    noOrders_0_1.set(FloorPrice_49);
    Instrument_49.insert(FloorPrice_49.getString());
    FIX::FlowScheduleType FlowScheduleType_49(3);
    noOrders_0_1.set(FlowScheduleType_49);
    Instrument_49.insert(FlowScheduleType_49.getString());
    FIX::InstrRegistry InstrRegistry_49("STRING_806078841");
    noOrders_0_1.set(InstrRegistry_49);
    Instrument_49.insert(InstrRegistry_49.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_49('4');
    noOrders_0_1.set(InstrmtAssignmentMethod_49);
    Instrument_49.insert(InstrmtAssignmentMethod_49.getString());
    FIX::InterestAccrualDate InterestAccrualDate_49("LOCALMKTDATE_695876218");
    noOrders_0_1.set(InterestAccrualDate_49);
    Instrument_49.insert(InterestAccrualDate_49.getString());
    FIX::IssueDate IssueDate_49("LOCALMKTDATE_296710926");
    noOrders_0_1.set(IssueDate_49);
    Instrument_49.insert(IssueDate_49.getString());
    FIX::Issuer Issuer_49("STRING_1840857818");
    noOrders_0_1.set(Issuer_49);
    Instrument_49.insert(Issuer_49.getString());
    FIX::ListMethod ListMethod_49(0);
    noOrders_0_1.set(ListMethod_49);
    Instrument_49.insert(ListMethod_49.getString());
    FIX::LocaleOfIssue LocaleOfIssue_49("STRING_53734175");
    noOrders_0_1.set(LocaleOfIssue_49);
    Instrument_49.insert(LocaleOfIssue_49.getString());
    FIX::MaturityDate MaturityDate_49("LOCALMKTDATE_1126193650");
    noOrders_0_1.set(MaturityDate_49);
    Instrument_49.insert(MaturityDate_49.getString());
    FIX::MaturityMonthYear MaturityMonthYear_49("MONTHYEAR_1383537710");
    noOrders_0_1.set(MaturityMonthYear_49);
    Instrument_49.insert(MaturityMonthYear_49.getString());
    FIX::MaturityTime MaturityTime_49("TZTIMEONLY_1503668822");
    noOrders_0_1.set(MaturityTime_49);
    Instrument_49.insert(MaturityTime_49.getString());
    FIX::MinPriceIncrement MinPriceIncrement_49;
    MinPriceIncrement_49.setString("4641146");
    noOrders_0_1.set(MinPriceIncrement_49);
    Instrument_49.insert(MinPriceIncrement_49.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_49;
    MinPriceIncrementAmount_49.setString("8083671");
    noOrders_0_1.set(MinPriceIncrementAmount_49);
    Instrument_49.insert(MinPriceIncrementAmount_49.getString());
    FIX::NTPositionLimit NTPositionLimit_49(1441335207);
    noOrders_0_1.set(NTPositionLimit_49);
    Instrument_49.insert(NTPositionLimit_49.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_49;
    NotionalPercentageOutstanding_49.setString("81.100000");
    noOrders_0_1.set(NotionalPercentageOutstanding_49);
    Instrument_49.insert(NotionalPercentageOutstanding_49.getString());
    FIX::OptAttribute OptAttribute_49('2');
    noOrders_0_1.set(OptAttribute_49);
    Instrument_49.insert(OptAttribute_49.getString());
    FIX::OptPayoutAmount OptPayoutAmount_49;
    OptPayoutAmount_49.setString("5109340");
    noOrders_0_1.set(OptPayoutAmount_49);
    Instrument_49.insert(OptPayoutAmount_49.getString());
    FIX::OptPayoutType OptPayoutType_49(2);
    noOrders_0_1.set(OptPayoutType_49);
    Instrument_49.insert(OptPayoutType_49.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_49;
    OriginalNotionalPercentageOutstanding_49.setString("97.510000");
    noOrders_0_1.set(OriginalNotionalPercentageOutstanding_49);
    Instrument_49.insert(OriginalNotionalPercentageOutstanding_49.getString());
    FIX::Pool Pool_49("STRING_695600326");
    noOrders_0_1.set(Pool_49);
    Instrument_49.insert(Pool_49.getString());
    FIX::PositionLimit PositionLimit_49(1027055719);
    noOrders_0_1.set(PositionLimit_49);
    Instrument_49.insert(PositionLimit_49.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_49("STRING_INT");
    noOrders_0_1.set(PriceQuoteMethod_49);
    Instrument_49.insert(PriceQuoteMethod_49.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_49("STRING_783424329");
    noOrders_0_1.set(PriceUnitOfMeasure_49);
    Instrument_49.insert(PriceUnitOfMeasure_49.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_49;
    PriceUnitOfMeasureQty_49.setString("5981027");
    noOrders_0_1.set(PriceUnitOfMeasureQty_49);
    Instrument_49.insert(PriceUnitOfMeasureQty_49.getString());
    FIX::Product Product_51(6);
    noOrders_0_1.set(Product_51);
    Instrument_49.insert(Product_51.getString());
    FIX::ProductComplex ProductComplex_49("STRING_1022812660");
    noOrders_0_1.set(ProductComplex_49);
    Instrument_49.insert(ProductComplex_49.getString());
    FIX::PutOrCall PutOrCall_49(0);
    noOrders_0_1.set(PutOrCall_49);
    Instrument_49.insert(PutOrCall_49.getString());
    FIX::RedemptionDate RedemptionDate_49("LOCALMKTDATE_866400123");
    noOrders_0_1.set(RedemptionDate_49);
    Instrument_49.insert(RedemptionDate_49.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_49("STRING_2139344668");
    noOrders_0_1.set(RepoCollateralSecurityType_49);
    Instrument_49.insert(RepoCollateralSecurityType_49.getString());
    FIX::RepurchaseRate RepurchaseRate_49;
    RepurchaseRate_49.setString("81.290000");
    noOrders_0_1.set(RepurchaseRate_49);
    Instrument_49.insert(RepurchaseRate_49.getString());
    FIX::RepurchaseTerm RepurchaseTerm_49(1507518248);
    noOrders_0_1.set(RepurchaseTerm_49);
    Instrument_49.insert(RepurchaseTerm_49.getString());
    FIX::RestructuringType RestructuringType_49("STRING_MM");
    noOrders_0_1.set(RestructuringType_49);
    Instrument_49.insert(RestructuringType_49.getString());
    FIX::SecurityDesc SecurityDesc_49("STRING_390303322");
    noOrders_0_1.set(SecurityDesc_49);
    Instrument_49.insert(SecurityDesc_49.getString());
    FIX::SecurityExchange SecurityExchange_49("EXCHANGE_1984510060");
    noOrders_0_1.set(SecurityExchange_49);
    Instrument_49.insert(SecurityExchange_49.getString());
    FIX::SecurityGroup SecurityGroup_49("STRING_200581388");
    noOrders_0_1.set(SecurityGroup_49);
    Instrument_49.insert(SecurityGroup_49.getString());
    FIX::SecurityID SecurityID_49("STRING_687014248");
    noOrders_0_1.set(SecurityID_49);
    Instrument_49.insert(SecurityID_49.getString());
    FIX::SecurityIDSource SecurityIDSource_49("STRING_1");
    noOrders_0_1.set(SecurityIDSource_49);
    Instrument_49.insert(SecurityIDSource_49.getString());
    FIX::SecurityStatus SecurityStatus_49("STRING_1");
    noOrders_0_1.set(SecurityStatus_49);
    Instrument_49.insert(SecurityStatus_49.getString());
    FIX::SecuritySubType SecuritySubType_50("STRING_740748424");
    noOrders_0_1.set(SecuritySubType_50);
    Instrument_49.insert(SecuritySubType_50.getString());
    FIX::SecurityType SecurityType_51("STRING_TRAN");
    noOrders_0_1.set(SecurityType_51);
    Instrument_49.insert(SecurityType_51.getString());
    FIX::Seniority Seniority_49("STRING_SD");
    noOrders_0_1.set(Seniority_49);
    Instrument_49.insert(Seniority_49.getString());
    FIX::SettlMethod SettlMethod_49('C');
    noOrders_0_1.set(SettlMethod_49);
    Instrument_49.insert(SettlMethod_49.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_49("STRING_1120708928");
    noOrders_0_1.set(SettleOnOpenFlag_49);
    Instrument_49.insert(SettleOnOpenFlag_49.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_49("STRING_733216764");
    noOrders_0_1.set(StateOrProvinceOfIssue_49);
    Instrument_49.insert(StateOrProvinceOfIssue_49.getString());
    FIX::StrikeCurrency StrikeCurrency_49("JPY");
    noOrders_0_1.set(StrikeCurrency_49);
    Instrument_49.insert(StrikeCurrency_49.getString());
    FIX::StrikeMultiplier StrikeMultiplier_49;
    StrikeMultiplier_49.setString("9639630");
    noOrders_0_1.set(StrikeMultiplier_49);
    Instrument_49.insert(StrikeMultiplier_49.getString());
    FIX::StrikePrice StrikePrice_49;
    StrikePrice_49.setString("20492028");
    noOrders_0_1.set(StrikePrice_49);
    Instrument_49.insert(StrikePrice_49.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_49(3);
    noOrders_0_1.set(StrikePriceBoundaryMethod_49);
    Instrument_49.insert(StrikePriceBoundaryMethod_49.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_49;
    StrikePriceBoundaryPrecision_49.setString("28.200000");
    noOrders_0_1.set(StrikePriceBoundaryPrecision_49);
    Instrument_49.insert(StrikePriceBoundaryPrecision_49.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_49(4);
    noOrders_0_1.set(StrikePriceDeterminationMethod_49);
    Instrument_49.insert(StrikePriceDeterminationMethod_49.getString());
    FIX::StrikeValue StrikeValue_49;
    StrikeValue_49.setString("13423842");
    noOrders_0_1.set(StrikeValue_49);
    Instrument_49.insert(StrikeValue_49.getString());
    FIX::Symbol Symbol_49("STRING_1730206914");
    noOrders_0_1.set(Symbol_49);
    Instrument_49.insert(Symbol_49.getString());
    FIX::SymbolSfx SymbolSfx_49("STRING_CD");
    noOrders_0_1.set(SymbolSfx_49);
    Instrument_49.insert(SymbolSfx_49.getString());
    FIX::TimeUnit TimeUnit_49("STRING_Mo");
    noOrders_0_1.set(TimeUnit_49);
    Instrument_49.insert(TimeUnit_49.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_49(2);
    noOrders_0_1.set(UnderlyingPriceDeterminationMethod_49);
    Instrument_49.insert(UnderlyingPriceDeterminationMethod_49.getString());
    FIX::UnitOfMeasure UnitOfMeasure_49("STRING_oz_tr");
    noOrders_0_1.set(UnitOfMeasure_49);
    Instrument_49.insert(UnitOfMeasure_49.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_49;
    UnitOfMeasureQty_49.setString("17365782");
    noOrders_0_1.set(UnitOfMeasureQty_49);
    Instrument_49.insert(UnitOfMeasureQty_49.getString());
    FIX::ValuationMethod ValuationMethod_49("STRING_FUT");
    noOrders_0_1.set(ValuationMethod_49);
    Instrument_49.insert(ValuationMethod_49.getString());
    all_values.push_back(Instrument_49);
    all_compo_names.insert("Instrument");

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::NewOrderList::NoOrders::NoComplexEvents noComplexEvents_1_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_99;
      FIX::ComplexEventCondition ComplexEventCondition_99(2);
      noComplexEvents_1_1_0.set(ComplexEventCondition_99);
      ComplexEvents_NoComplexEvents_99.insert(ComplexEventCondition_99.getString());
      FIX::ComplexEventPrice ComplexEventPrice_99;
      ComplexEventPrice_99.setString("17843472");
      noComplexEvents_1_1_0.set(ComplexEventPrice_99);
      ComplexEvents_NoComplexEvents_99.insert(ComplexEventPrice_99.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_99(3);
      noComplexEvents_1_1_0.set(ComplexEventPriceBoundaryMethod_99);
      ComplexEvents_NoComplexEvents_99.insert(ComplexEventPriceBoundaryMethod_99.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_99;
      ComplexEventPriceBoundaryPrecision_99.setString("60.110000");
      noComplexEvents_1_1_0.set(ComplexEventPriceBoundaryPrecision_99);
      ComplexEvents_NoComplexEvents_99.insert(ComplexEventPriceBoundaryPrecision_99.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_99(3);
      noComplexEvents_1_1_0.set(ComplexEventPriceTimeType_99);
      ComplexEvents_NoComplexEvents_99.insert(ComplexEventPriceTimeType_99.getString());
      FIX::ComplexEventType ComplexEventType_99(7);
      noComplexEvents_1_1_0.set(ComplexEventType_99);
      ComplexEvents_NoComplexEvents_99.insert(ComplexEventType_99.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_99;
      ComplexOptPayoutAmount_99.setString("2506366");
      noComplexEvents_1_1_0.set(ComplexOptPayoutAmount_99);
      ComplexEvents_NoComplexEvents_99.insert(ComplexOptPayoutAmount_99.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_99);
      all_compo_names.insert("ComplexEvents.NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_205;
        FIX::ComplexEventEndDate ComplexEventEndDate_205(FIX::UTCTIMESTAMP(19, 17, 34, 17, 6, 2010));
        noComplexEventDates_1_0_2_0.set(ComplexEventEndDate_205);
        ComplexEventDates_NoComplexEventDates_205.insert(ComplexEventEndDate_205.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_205(FIX::UTCTIMESTAMP(4, 59, 48, 22, 1, 2011));
        noComplexEventDates_1_0_2_0.set(ComplexEventStartDate_205);
        ComplexEventDates_NoComplexEventDates_205.insert(ComplexEventStartDate_205.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_205);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_416;
          FIX::ComplexEventEndTime ComplexEventEndTime_416(FIX::UTCTIMEONLY(11, 19, 24));
          noComplexEventTimes_1_0_0_3_0.set(ComplexEventEndTime_416);
          ComplexEventTimes_NoComplexEventTimes_416.insert(ComplexEventEndTime_416.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_416(FIX::UTCTIMEONLY(7, 45, 4));
          noComplexEventTimes_1_0_0_3_0.set(ComplexEventStartTime_416);
          ComplexEventTimes_NoComplexEventTimes_416.insert(ComplexEventStartTime_416.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_416);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_417;
          FIX::ComplexEventEndTime ComplexEventEndTime_417(FIX::UTCTIMEONLY(6, 39, 51));
          noComplexEventTimes_1_0_0_3_1.set(ComplexEventEndTime_417);
          ComplexEventTimes_NoComplexEventTimes_417.insert(ComplexEventEndTime_417.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_417(FIX::UTCTIMEONLY(10, 42, 5));
          noComplexEventTimes_1_0_0_3_1.set(ComplexEventStartTime_417);
          ComplexEventTimes_NoComplexEventTimes_417.insert(ComplexEventStartTime_417.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_417);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_1);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_418;
          FIX::ComplexEventEndTime ComplexEventEndTime_418(FIX::UTCTIMEONLY(18, 14, 13));
          noComplexEventTimes_1_0_0_3_2.set(ComplexEventEndTime_418);
          ComplexEventTimes_NoComplexEventTimes_418.insert(ComplexEventEndTime_418.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_418(FIX::UTCTIMEONLY(11, 4, 26));
          noComplexEventTimes_1_0_0_3_2.set(ComplexEventStartTime_418);
          ComplexEventTimes_NoComplexEventTimes_418.insert(ComplexEventStartTime_418.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_418);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_2);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_206;
        FIX::ComplexEventEndDate ComplexEventEndDate_206(FIX::UTCTIMESTAMP(3, 14, 9, 11, 2, 2001));
        noComplexEventDates_1_0_2_1.set(ComplexEventEndDate_206);
        ComplexEventDates_NoComplexEventDates_206.insert(ComplexEventEndDate_206.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_206(FIX::UTCTIMESTAMP(1, 24, 38, 1, 8, 2015));
        noComplexEventDates_1_0_2_1.set(ComplexEventStartDate_206);
        ComplexEventDates_NoComplexEventDates_206.insert(ComplexEventStartDate_206.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_206);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_419;
          FIX::ComplexEventEndTime ComplexEventEndTime_419(FIX::UTCTIMEONLY(13, 16, 46));
          noComplexEventTimes_1_0_1_3_0.set(ComplexEventEndTime_419);
          ComplexEventTimes_NoComplexEventTimes_419.insert(ComplexEventEndTime_419.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_419(FIX::UTCTIMEONLY(14, 20, 11));
          noComplexEventTimes_1_0_1_3_0.set(ComplexEventStartTime_419);
          ComplexEventTimes_NoComplexEventTimes_419.insert(ComplexEventStartTime_419.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_419);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_1_0_2_1.addGroup(noComplexEventTimes_1_0_1_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_420;
          FIX::ComplexEventEndTime ComplexEventEndTime_420(FIX::UTCTIMEONLY(14, 25, 15));
          noComplexEventTimes_1_0_1_3_1.set(ComplexEventEndTime_420);
          ComplexEventTimes_NoComplexEventTimes_420.insert(ComplexEventEndTime_420.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_420(FIX::UTCTIMEONLY(12, 19, 32));
          noComplexEventTimes_1_0_1_3_1.set(ComplexEventStartTime_420);
          ComplexEventTimes_NoComplexEventTimes_420.insert(ComplexEventStartTime_420.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_420);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_1_0_2_1.addGroup(noComplexEventTimes_1_0_1_3_1);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_1);
      }
      noOrders_0_1.addGroup(noComplexEvents_1_1_0);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::NewOrderList::NoOrders::NoEvents noEvents_1_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_89;
      FIX::EventDate EventDate_89("LOCALMKTDATE_1803785123");
      noEvents_1_1_0.set(EventDate_89);
      EvntGrp_NoEvents_89.insert(EventDate_89.getString());
      FIX::EventPx EventPx_89;
      EventPx_89.setString("21103305");
      noEvents_1_1_0.set(EventPx_89);
      EvntGrp_NoEvents_89.insert(EventPx_89.getString());
      FIX::EventText EventText_89("STRING_1820345601");
      noEvents_1_1_0.set(EventText_89);
      EvntGrp_NoEvents_89.insert(EventText_89.getString());
      FIX::EventTime EventTime_89(FIX::UTCTIMESTAMP(16, 26, 44, 9, 3, 2014));
      noEvents_1_1_0.set(EventTime_89);
      EvntGrp_NoEvents_89.insert(EventTime_89.getString());
      FIX::EventType EventType_89(11);
      noEvents_1_1_0.set(EventType_89);
      EvntGrp_NoEvents_89.insert(EventType_89.getString());
      all_values.push_back(EvntGrp_NoEvents_89);
      all_compo_names.insert("EvntGrp.NoEvents");

      noOrders_0_1.addGroup(noEvents_1_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoEvents noEvents_1_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_90;
      FIX::EventDate EventDate_90("LOCALMKTDATE_764840485");
      noEvents_1_1_1.set(EventDate_90);
      EvntGrp_NoEvents_90.insert(EventDate_90.getString());
      FIX::EventPx EventPx_90;
      EventPx_90.setString("1767100");
      noEvents_1_1_1.set(EventPx_90);
      EvntGrp_NoEvents_90.insert(EventPx_90.getString());
      FIX::EventText EventText_90("STRING_6021900");
      noEvents_1_1_1.set(EventText_90);
      EvntGrp_NoEvents_90.insert(EventText_90.getString());
      FIX::EventTime EventTime_90(FIX::UTCTIMESTAMP(23, 16, 6, 9, 12, 2015));
      noEvents_1_1_1.set(EventTime_90);
      EvntGrp_NoEvents_90.insert(EventTime_90.getString());
      FIX::EventType EventType_90(1);
      noEvents_1_1_1.set(EventType_90);
      EvntGrp_NoEvents_90.insert(EventType_90.getString());
      all_values.push_back(EvntGrp_NoEvents_90);
      all_compo_names.insert("EvntGrp.NoEvents");

      noOrders_0_1.addGroup(noEvents_1_1_1);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoEvents noEvents_1_1_2;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_91;
      FIX::EventDate EventDate_91("LOCALMKTDATE_1522840977");
      noEvents_1_1_2.set(EventDate_91);
      EvntGrp_NoEvents_91.insert(EventDate_91.getString());
      FIX::EventPx EventPx_91;
      EventPx_91.setString("9416882");
      noEvents_1_1_2.set(EventPx_91);
      EvntGrp_NoEvents_91.insert(EventPx_91.getString());
      FIX::EventText EventText_91("STRING_1606407077");
      noEvents_1_1_2.set(EventText_91);
      EvntGrp_NoEvents_91.insert(EventText_91.getString());
      FIX::EventTime EventTime_91(FIX::UTCTIMESTAMP(19, 57, 24, 16, 10, 2015));
      noEvents_1_1_2.set(EventTime_91);
      EvntGrp_NoEvents_91.insert(EventTime_91.getString());
      FIX::EventType EventType_91(99);
      noEvents_1_1_2.set(EventType_91);
      EvntGrp_NoEvents_91.insert(EventType_91.getString());
      all_values.push_back(EvntGrp_NoEvents_91);
      all_compo_names.insert("EvntGrp.NoEvents");

      noOrders_0_1.addGroup(noEvents_1_1_2);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::NewOrderList::NoOrders::NoInstrumentParties noInstrumentParties_1_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_96;
      FIX::InstrumentPartyID InstrumentPartyID_96("STRING_705341289");
      noInstrumentParties_1_1_0.set(InstrumentPartyID_96);
      InstrumentParties_NoInstrumentParties_96.insert(InstrumentPartyID_96.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_96('9');
      noInstrumentParties_1_1_0.set(InstrumentPartyIDSource_96);
      InstrumentParties_NoInstrumentParties_96.insert(InstrumentPartyIDSource_96.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_96(1927607149);
      noInstrumentParties_1_1_0.set(InstrumentPartyRole_96);
      InstrumentParties_NoInstrumentParties_96.insert(InstrumentPartyRole_96.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_96);
      all_compo_names.insert("InstrumentParties.NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderList::NoOrders::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_184;
        FIX::InstrumentPartySubID InstrumentPartySubID_184("STRING_2135092333");
        noInstrumentPartySubIDs_1_0_2_0.set(InstrumentPartySubID_184);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_184.insert(InstrumentPartySubID_184.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_184(1362218432);
        noInstrumentPartySubIDs_1_0_2_0.set(InstrumentPartySubIDType_184);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_184.insert(InstrumentPartySubIDType_184.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_184);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_0);
      }
      noOrders_0_1.addGroup(noInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoInstrumentParties noInstrumentParties_1_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_97;
      FIX::InstrumentPartyID InstrumentPartyID_97("STRING_935175780");
      noInstrumentParties_1_1_1.set(InstrumentPartyID_97);
      InstrumentParties_NoInstrumentParties_97.insert(InstrumentPartyID_97.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_97('1');
      noInstrumentParties_1_1_1.set(InstrumentPartyIDSource_97);
      InstrumentParties_NoInstrumentParties_97.insert(InstrumentPartyIDSource_97.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_97(2127058917);
      noInstrumentParties_1_1_1.set(InstrumentPartyRole_97);
      InstrumentParties_NoInstrumentParties_97.insert(InstrumentPartyRole_97.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_97);
      all_compo_names.insert("InstrumentParties.NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderList::NoOrders::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_185;
        FIX::InstrumentPartySubID InstrumentPartySubID_185("STRING_1313196815");
        noInstrumentPartySubIDs_1_1_2_0.set(InstrumentPartySubID_185);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_185.insert(InstrumentPartySubID_185.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_185(2077231878);
        noInstrumentPartySubIDs_1_1_2_0.set(InstrumentPartySubIDType_185);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_185.insert(InstrumentPartySubIDType_185.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_185);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_1.addGroup(noInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_186;
        FIX::InstrumentPartySubID InstrumentPartySubID_186("STRING_1547446677");
        noInstrumentPartySubIDs_1_1_2_1.set(InstrumentPartySubID_186);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_186.insert(InstrumentPartySubID_186.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_186(473722904);
        noInstrumentPartySubIDs_1_1_2_1.set(InstrumentPartySubIDType_186);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_186.insert(InstrumentPartySubIDType_186.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_186);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_1.addGroup(noInstrumentPartySubIDs_1_1_2_1);
      }
      noOrders_0_1.addGroup(noInstrumentParties_1_1_1);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoInstrumentParties noInstrumentParties_1_1_2;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_98;
      FIX::InstrumentPartyID InstrumentPartyID_98("STRING_778946596");
      noInstrumentParties_1_1_2.set(InstrumentPartyID_98);
      InstrumentParties_NoInstrumentParties_98.insert(InstrumentPartyID_98.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_98('7');
      noInstrumentParties_1_1_2.set(InstrumentPartyIDSource_98);
      InstrumentParties_NoInstrumentParties_98.insert(InstrumentPartyIDSource_98.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_98(1357505791);
      noInstrumentParties_1_1_2.set(InstrumentPartyRole_98);
      InstrumentParties_NoInstrumentParties_98.insert(InstrumentPartyRole_98.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_98);
      all_compo_names.insert("InstrumentParties.NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderList::NoOrders::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_2_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_187;
        FIX::InstrumentPartySubID InstrumentPartySubID_187("STRING_384802170");
        noInstrumentPartySubIDs_1_2_2_0.set(InstrumentPartySubID_187);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_187.insert(InstrumentPartySubID_187.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_187(732863120);
        noInstrumentPartySubIDs_1_2_2_0.set(InstrumentPartySubIDType_187);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_187.insert(InstrumentPartySubIDType_187.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_187);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_2.addGroup(noInstrumentPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_2_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_188;
        FIX::InstrumentPartySubID InstrumentPartySubID_188("STRING_1138220865");
        noInstrumentPartySubIDs_1_2_2_1.set(InstrumentPartySubID_188);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_188.insert(InstrumentPartySubID_188.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_188(1991209247);
        noInstrumentPartySubIDs_1_2_2_1.set(InstrumentPartySubIDType_188);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_188.insert(InstrumentPartySubIDType_188.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_188);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_2.addGroup(noInstrumentPartySubIDs_1_2_2_1);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_2_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_189;
        FIX::InstrumentPartySubID InstrumentPartySubID_189("STRING_229945404");
        noInstrumentPartySubIDs_1_2_2_2.set(InstrumentPartySubID_189);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_189.insert(InstrumentPartySubID_189.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_189(1205593612);
        noInstrumentPartySubIDs_1_2_2_2.set(InstrumentPartySubIDType_189);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_189.insert(InstrumentPartySubIDType_189.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_189);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_2.addGroup(noInstrumentPartySubIDs_1_2_2_2);
      }
      noOrders_0_1.addGroup(noInstrumentParties_1_1_2);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::NewOrderList::NoOrders::NoSecurityAltID noSecurityAltID_1_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_90;
      FIX::SecurityAltID SecurityAltID_90("STRING_631501848");
      noSecurityAltID_1_1_0.set(SecurityAltID_90);
      SecAltIDGrp_NoSecurityAltID_90.insert(SecurityAltID_90.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_90("STRING_626820564");
      noSecurityAltID_1_1_0.set(SecurityAltIDSource_90);
      SecAltIDGrp_NoSecurityAltID_90.insert(SecurityAltIDSource_90.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_90);
      all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

      noOrders_0_1.addGroup(noSecurityAltID_1_1_0);
    }
    // SecurityXML
    multiset<string> SecurityXML_98;
    FIX::SecurityXML SecurityXML_99("XMLDATA_331704878");
    noOrders_0_1.set(SecurityXML_99);
    FIX::SecurityXMLLen SecurityXMLLen_49(689359767);
    noOrders_0_1.set(SecurityXMLLen_49);
    FIX::SecurityXMLSchema SecurityXMLSchema_49("STRING_10894415");
    noOrders_0_1.set(SecurityXMLSchema_49);
    SecurityXML_98.insert(SecurityXMLSchema_49.getString());
    all_values.push_back(SecurityXML_98);
    all_compo_names.insert("SecurityXML");

    // OrderQtyData
    multiset<string> OrderQtyData_13;
    FIX::CashOrderQty CashOrderQty_13;
    CashOrderQty_13.setString("11781784");
    noOrders_0_1.set(CashOrderQty_13);
    OrderQtyData_13.insert(CashOrderQty_13.getString());
    FIX::OrderPercent OrderPercent_13;
    OrderPercent_13.setString("10.570000");
    noOrders_0_1.set(OrderPercent_13);
    OrderQtyData_13.insert(OrderPercent_13.getString());
    FIX::OrderQty OrderQty_23;
    OrderQty_23.setString("9449503");
    noOrders_0_1.set(OrderQty_23);
    OrderQtyData_13.insert(OrderQty_23.getString());
    FIX::RoundingDirection RoundingDirection_13('0');
    noOrders_0_1.set(RoundingDirection_13);
    OrderQtyData_13.insert(RoundingDirection_13.getString());
    FIX::RoundingModulus RoundingModulus_13;
    RoundingModulus_13.setString("12658181");
    noOrders_0_1.set(RoundingModulus_13);
    OrderQtyData_13.insert(RoundingModulus_13.getString());
    all_values.push_back(OrderQtyData_13);
    all_compo_names.insert("OrderQtyData");

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::NewOrderList::NoOrders::NoPartyIDs noPartyIDs_1_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_67;
      FIX::PartyID PartyID_67("STRING_173036706");
      noPartyIDs_1_1_0.set(PartyID_67);
      Parties_NoPartyIDs_67.insert(PartyID_67.getString());
      FIX::PartyIDSource PartyIDSource_67('9');
      noPartyIDs_1_1_0.set(PartyIDSource_67);
      Parties_NoPartyIDs_67.insert(PartyIDSource_67.getString());
      FIX::PartyRole PartyRole_67(12);
      noPartyIDs_1_1_0.set(PartyRole_67);
      Parties_NoPartyIDs_67.insert(PartyRole_67.getString());
      all_values.push_back(Parties_NoPartyIDs_67);
      all_compo_names.insert("Parties.NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::NewOrderList::NoOrders::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_150;
        FIX::PartySubID PartySubID_150("STRING_1165396117");
        noPartySubIDs_1_0_2_0.set(PartySubID_150);
        PtysSubGrp_NoPartySubIDs_150.insert(PartySubID_150.getString());
        FIX::PartySubIDType PartySubIDType_150(9);
        noPartySubIDs_1_0_2_0.set(PartySubIDType_150);
        PtysSubGrp_NoPartySubIDs_150.insert(PartySubIDType_150.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_150);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_151;
        FIX::PartySubID PartySubID_151("STRING_82360206");
        noPartySubIDs_1_0_2_1.set(PartySubID_151);
        PtysSubGrp_NoPartySubIDs_151.insert(PartySubID_151.getString());
        FIX::PartySubIDType PartySubIDType_151(12);
        noPartySubIDs_1_0_2_1.set(PartySubIDType_151);
        PtysSubGrp_NoPartySubIDs_151.insert(PartySubIDType_151.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_151);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_152;
        FIX::PartySubID PartySubID_152("STRING_1879170043");
        noPartySubIDs_1_0_2_2.set(PartySubID_152);
        PtysSubGrp_NoPartySubIDs_152.insert(PartySubID_152.getString());
        FIX::PartySubIDType PartySubIDType_152(5);
        noPartySubIDs_1_0_2_2.set(PartySubIDType_152);
        PtysSubGrp_NoPartySubIDs_152.insert(PartySubIDType_152.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_152);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_2);
      }
      noOrders_0_1.addGroup(noPartyIDs_1_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoPartyIDs noPartyIDs_1_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_68;
      FIX::PartyID PartyID_68("STRING_1279823344");
      noPartyIDs_1_1_1.set(PartyID_68);
      Parties_NoPartyIDs_68.insert(PartyID_68.getString());
      FIX::PartyIDSource PartyIDSource_68('6');
      noPartyIDs_1_1_1.set(PartyIDSource_68);
      Parties_NoPartyIDs_68.insert(PartyIDSource_68.getString());
      FIX::PartyRole PartyRole_68(36);
      noPartyIDs_1_1_1.set(PartyRole_68);
      Parties_NoPartyIDs_68.insert(PartyRole_68.getString());
      all_values.push_back(Parties_NoPartyIDs_68);
      all_compo_names.insert("Parties.NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::NewOrderList::NoOrders::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_153;
        FIX::PartySubID PartySubID_153("STRING_1822055306");
        noPartySubIDs_1_1_2_0.set(PartySubID_153);
        PtysSubGrp_NoPartySubIDs_153.insert(PartySubID_153.getString());
        FIX::PartySubIDType PartySubIDType_153(9);
        noPartySubIDs_1_1_2_0.set(PartySubIDType_153);
        PtysSubGrp_NoPartySubIDs_153.insert(PartySubIDType_153.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_153);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_1_1_1.addGroup(noPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_154;
        FIX::PartySubID PartySubID_154("STRING_1508351113");
        noPartySubIDs_1_1_2_1.set(PartySubID_154);
        PtysSubGrp_NoPartySubIDs_154.insert(PartySubID_154.getString());
        FIX::PartySubIDType PartySubIDType_154(24);
        noPartySubIDs_1_1_2_1.set(PartySubIDType_154);
        PtysSubGrp_NoPartySubIDs_154.insert(PartySubIDType_154.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_154);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_1_1_1.addGroup(noPartySubIDs_1_1_2_1);
      }
      noOrders_0_1.addGroup(noPartyIDs_1_1_1);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoPartyIDs noPartyIDs_1_1_2;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_69;
      FIX::PartyID PartyID_69("STRING_1254170247");
      noPartyIDs_1_1_2.set(PartyID_69);
      Parties_NoPartyIDs_69.insert(PartyID_69.getString());
      FIX::PartyIDSource PartyIDSource_69('6');
      noPartyIDs_1_1_2.set(PartyIDSource_69);
      Parties_NoPartyIDs_69.insert(PartyIDSource_69.getString());
      FIX::PartyRole PartyRole_69(45);
      noPartyIDs_1_1_2.set(PartyRole_69);
      Parties_NoPartyIDs_69.insert(PartyRole_69.getString());
      all_values.push_back(Parties_NoPartyIDs_69);
      all_compo_names.insert("Parties.NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::NewOrderList::NoOrders::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_2_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_155;
        FIX::PartySubID PartySubID_155("STRING_998149280");
        noPartySubIDs_1_2_2_0.set(PartySubID_155);
        PtysSubGrp_NoPartySubIDs_155.insert(PartySubID_155.getString());
        FIX::PartySubIDType PartySubIDType_155(8);
        noPartySubIDs_1_2_2_0.set(PartySubIDType_155);
        PtysSubGrp_NoPartySubIDs_155.insert(PartySubIDType_155.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_155);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_1_1_2.addGroup(noPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_2_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_156;
        FIX::PartySubID PartySubID_156("STRING_1891885227");
        noPartySubIDs_1_2_2_1.set(PartySubID_156);
        PtysSubGrp_NoPartySubIDs_156.insert(PartySubID_156.getString());
        FIX::PartySubIDType PartySubIDType_156(8);
        noPartySubIDs_1_2_2_1.set(PartySubIDType_156);
        PtysSubGrp_NoPartySubIDs_156.insert(PartySubIDType_156.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_156);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_1_1_2.addGroup(noPartySubIDs_1_2_2_1);
      }
      noOrders_0_1.addGroup(noPartyIDs_1_1_2);
    }
    // PegInstructions
    multiset<string> PegInstructions_5;
    FIX::PegLimitType PegLimitType_5(0);
    noOrders_0_1.set(PegLimitType_5);
    PegInstructions_5.insert(PegLimitType_5.getString());
    FIX::PegMoveType PegMoveType_5(0);
    noOrders_0_1.set(PegMoveType_5);
    PegInstructions_5.insert(PegMoveType_5.getString());
    FIX::PegOffsetType PegOffsetType_5(3);
    noOrders_0_1.set(PegOffsetType_5);
    PegInstructions_5.insert(PegOffsetType_5.getString());
    FIX::PegOffsetValue PegOffsetValue_5;
    PegOffsetValue_5.setString("17384142");
    noOrders_0_1.set(PegOffsetValue_5);
    PegInstructions_5.insert(PegOffsetValue_5.getString());
    FIX::PegPriceType PegPriceType_5(8);
    noOrders_0_1.set(PegPriceType_5);
    PegInstructions_5.insert(PegPriceType_5.getString());
    FIX::PegRoundDirection PegRoundDirection_5(1);
    noOrders_0_1.set(PegRoundDirection_5);
    PegInstructions_5.insert(PegRoundDirection_5.getString());
    FIX::PegScope PegScope_5(3);
    noOrders_0_1.set(PegScope_5);
    PegInstructions_5.insert(PegScope_5.getString());
    FIX::PegSecurityDesc PegSecurityDesc_5("STRING_1714161330");
    noOrders_0_1.set(PegSecurityDesc_5);
    PegInstructions_5.insert(PegSecurityDesc_5.getString());
    FIX::PegSecurityID PegSecurityID_5("STRING_1312794658");
    noOrders_0_1.set(PegSecurityID_5);
    PegInstructions_5.insert(PegSecurityID_5.getString());
    FIX::PegSecurityIDSource PegSecurityIDSource_5("STRING_809837015");
    noOrders_0_1.set(PegSecurityIDSource_5);
    PegInstructions_5.insert(PegSecurityIDSource_5.getString());
    FIX::PegSymbol PegSymbol_5("STRING_972124821");
    noOrders_0_1.set(PegSymbol_5);
    PegInstructions_5.insert(PegSymbol_5.getString());
    all_values.push_back(PegInstructions_5);
    all_compo_names.insert("PegInstructions");

    // PreAllocGrp
    // Group PreAllocGrp.NoAllocs
    {
      FIX50SP2::NewOrderList::NoOrders::NoAllocs noAllocs_1_1_0;
      // PreAllocGrp.NoAllocs
      multiset<string> PreAllocGrp_NoAllocs_16;
      FIX::AllocAccount AllocAccount_26("STRING_1375196162");
      noAllocs_1_1_0.set(AllocAccount_26);
      PreAllocGrp_NoAllocs_16.insert(AllocAccount_26.getString());
      FIX::AllocAcctIDSource AllocAcctIDSource_26(703811216);
      noAllocs_1_1_0.set(AllocAcctIDSource_26);
      PreAllocGrp_NoAllocs_16.insert(AllocAcctIDSource_26.getString());
      FIX::AllocQty AllocQty_25;
      AllocQty_25.setString("1089780");
      noAllocs_1_1_0.set(AllocQty_25);
      PreAllocGrp_NoAllocs_16.insert(AllocQty_25.getString());
      FIX::AllocSettlCurrency AllocSettlCurrency_21("GBP");
      noAllocs_1_1_0.set(AllocSettlCurrency_21);
      PreAllocGrp_NoAllocs_16.insert(AllocSettlCurrency_21.getString());
      FIX::IndividualAllocID IndividualAllocID_26("STRING_1166817436");
      noAllocs_1_1_0.set(IndividualAllocID_26);
      PreAllocGrp_NoAllocs_16.insert(IndividualAllocID_26.getString());
      all_values.push_back(PreAllocGrp_NoAllocs_16);
      all_compo_names.insert("PreAllocGrp.NoAllocs");

      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_0_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_60;
        FIX::NestedPartyID NestedPartyID_60("STRING_1467575060");
        noNestedPartyIDs_1_0_2_0.set(NestedPartyID_60);
        NestedParties_NoNestedPartyIDs_60.insert(NestedPartyID_60.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_60('1');
        noNestedPartyIDs_1_0_2_0.set(NestedPartyIDSource_60);
        NestedParties_NoNestedPartyIDs_60.insert(NestedPartyIDSource_60.getString());
        FIX::NestedPartyRole NestedPartyRole_60(1533028838);
        noNestedPartyIDs_1_0_2_0.set(NestedPartyRole_60);
        NestedParties_NoNestedPartyIDs_60.insert(NestedPartyRole_60.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_60);
        all_compo_names.insert("NestedParties.NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_131;
          FIX::NestedPartySubID NestedPartySubID_131("STRING_322080671");
          noNestedPartySubIDs_1_0_0_3_0.set(NestedPartySubID_131);
          NstdPtysSubGrp_NoNestedPartySubIDs_131.insert(NestedPartySubID_131.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_131(51989592);
          noNestedPartySubIDs_1_0_0_3_0.set(NestedPartySubIDType_131);
          NstdPtysSubGrp_NoNestedPartySubIDs_131.insert(NestedPartySubIDType_131.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_131);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_1_0_2_0.addGroup(noNestedPartySubIDs_1_0_0_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_132;
          FIX::NestedPartySubID NestedPartySubID_132("STRING_1908111033");
          noNestedPartySubIDs_1_0_0_3_1.set(NestedPartySubID_132);
          NstdPtysSubGrp_NoNestedPartySubIDs_132.insert(NestedPartySubID_132.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_132(55587835);
          noNestedPartySubIDs_1_0_0_3_1.set(NestedPartySubIDType_132);
          NstdPtysSubGrp_NoNestedPartySubIDs_132.insert(NestedPartySubIDType_132.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_132);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_1_0_2_0.addGroup(noNestedPartySubIDs_1_0_0_3_1);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_0_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_133;
          FIX::NestedPartySubID NestedPartySubID_133("STRING_1050138872");
          noNestedPartySubIDs_1_0_0_3_2.set(NestedPartySubID_133);
          NstdPtysSubGrp_NoNestedPartySubIDs_133.insert(NestedPartySubID_133.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_133(986006064);
          noNestedPartySubIDs_1_0_0_3_2.set(NestedPartySubIDType_133);
          NstdPtysSubGrp_NoNestedPartySubIDs_133.insert(NestedPartySubIDType_133.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_133);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_1_0_2_0.addGroup(noNestedPartySubIDs_1_0_0_3_2);
        }
        noAllocs_1_1_0.addGroup(noNestedPartyIDs_1_0_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_0_2_1;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_61;
        FIX::NestedPartyID NestedPartyID_61("STRING_1947473062");
        noNestedPartyIDs_1_0_2_1.set(NestedPartyID_61);
        NestedParties_NoNestedPartyIDs_61.insert(NestedPartyID_61.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_61('1');
        noNestedPartyIDs_1_0_2_1.set(NestedPartyIDSource_61);
        NestedParties_NoNestedPartyIDs_61.insert(NestedPartyIDSource_61.getString());
        FIX::NestedPartyRole NestedPartyRole_61(1458602151);
        noNestedPartyIDs_1_0_2_1.set(NestedPartyRole_61);
        NestedParties_NoNestedPartyIDs_61.insert(NestedPartyRole_61.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_61);
        all_compo_names.insert("NestedParties.NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_1_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_134;
          FIX::NestedPartySubID NestedPartySubID_134("STRING_2066128901");
          noNestedPartySubIDs_1_0_1_3_0.set(NestedPartySubID_134);
          NstdPtysSubGrp_NoNestedPartySubIDs_134.insert(NestedPartySubID_134.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_134(1049532754);
          noNestedPartySubIDs_1_0_1_3_0.set(NestedPartySubIDType_134);
          NstdPtysSubGrp_NoNestedPartySubIDs_134.insert(NestedPartySubIDType_134.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_134);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_1_0_2_1.addGroup(noNestedPartySubIDs_1_0_1_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_1_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_135;
          FIX::NestedPartySubID NestedPartySubID_135("STRING_2111252371");
          noNestedPartySubIDs_1_0_1_3_1.set(NestedPartySubID_135);
          NstdPtysSubGrp_NoNestedPartySubIDs_135.insert(NestedPartySubID_135.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_135(1078827935);
          noNestedPartySubIDs_1_0_1_3_1.set(NestedPartySubIDType_135);
          NstdPtysSubGrp_NoNestedPartySubIDs_135.insert(NestedPartySubIDType_135.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_135);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_1_0_2_1.addGroup(noNestedPartySubIDs_1_0_1_3_1);
        }
        noAllocs_1_1_0.addGroup(noNestedPartyIDs_1_0_2_1);
      }
      noOrders_0_1.addGroup(noAllocs_1_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoAllocs noAllocs_1_1_1;
      // PreAllocGrp.NoAllocs
      multiset<string> PreAllocGrp_NoAllocs_17;
      FIX::AllocAccount AllocAccount_27("STRING_693973652");
      noAllocs_1_1_1.set(AllocAccount_27);
      PreAllocGrp_NoAllocs_17.insert(AllocAccount_27.getString());
      FIX::AllocAcctIDSource AllocAcctIDSource_27(1677930053);
      noAllocs_1_1_1.set(AllocAcctIDSource_27);
      PreAllocGrp_NoAllocs_17.insert(AllocAcctIDSource_27.getString());
      FIX::AllocQty AllocQty_26;
      AllocQty_26.setString("2441389");
      noAllocs_1_1_1.set(AllocQty_26);
      PreAllocGrp_NoAllocs_17.insert(AllocQty_26.getString());
      FIX::AllocSettlCurrency AllocSettlCurrency_22("USD");
      noAllocs_1_1_1.set(AllocSettlCurrency_22);
      PreAllocGrp_NoAllocs_17.insert(AllocSettlCurrency_22.getString());
      FIX::IndividualAllocID IndividualAllocID_27("STRING_1639293809");
      noAllocs_1_1_1.set(IndividualAllocID_27);
      PreAllocGrp_NoAllocs_17.insert(IndividualAllocID_27.getString());
      all_values.push_back(PreAllocGrp_NoAllocs_17);
      all_compo_names.insert("PreAllocGrp.NoAllocs");

      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_1_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_62;
        FIX::NestedPartyID NestedPartyID_62("STRING_1206382442");
        noNestedPartyIDs_1_1_2_0.set(NestedPartyID_62);
        NestedParties_NoNestedPartyIDs_62.insert(NestedPartyID_62.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_62('1');
        noNestedPartyIDs_1_1_2_0.set(NestedPartyIDSource_62);
        NestedParties_NoNestedPartyIDs_62.insert(NestedPartyIDSource_62.getString());
        FIX::NestedPartyRole NestedPartyRole_62(1239059040);
        noNestedPartyIDs_1_1_2_0.set(NestedPartyRole_62);
        NestedParties_NoNestedPartyIDs_62.insert(NestedPartyRole_62.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_62);
        all_compo_names.insert("NestedParties.NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_136;
          FIX::NestedPartySubID NestedPartySubID_136("STRING_767605616");
          noNestedPartySubIDs_1_1_0_3_0.set(NestedPartySubID_136);
          NstdPtysSubGrp_NoNestedPartySubIDs_136.insert(NestedPartySubID_136.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_136(1263736765);
          noNestedPartySubIDs_1_1_0_3_0.set(NestedPartySubIDType_136);
          NstdPtysSubGrp_NoNestedPartySubIDs_136.insert(NestedPartySubIDType_136.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_136);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_1_1_2_0.addGroup(noNestedPartySubIDs_1_1_0_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_137;
          FIX::NestedPartySubID NestedPartySubID_137("STRING_171993608");
          noNestedPartySubIDs_1_1_0_3_1.set(NestedPartySubID_137);
          NstdPtysSubGrp_NoNestedPartySubIDs_137.insert(NestedPartySubID_137.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_137(1982999687);
          noNestedPartySubIDs_1_1_0_3_1.set(NestedPartySubIDType_137);
          NstdPtysSubGrp_NoNestedPartySubIDs_137.insert(NestedPartySubIDType_137.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_137);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_1_1_2_0.addGroup(noNestedPartySubIDs_1_1_0_3_1);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_0_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_138;
          FIX::NestedPartySubID NestedPartySubID_138("STRING_649281955");
          noNestedPartySubIDs_1_1_0_3_2.set(NestedPartySubID_138);
          NstdPtysSubGrp_NoNestedPartySubIDs_138.insert(NestedPartySubID_138.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_138(1544085731);
          noNestedPartySubIDs_1_1_0_3_2.set(NestedPartySubIDType_138);
          NstdPtysSubGrp_NoNestedPartySubIDs_138.insert(NestedPartySubIDType_138.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_138);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_1_1_2_0.addGroup(noNestedPartySubIDs_1_1_0_3_2);
        }
        noAllocs_1_1_1.addGroup(noNestedPartyIDs_1_1_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_1_2_1;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_63;
        FIX::NestedPartyID NestedPartyID_63("STRING_157596710");
        noNestedPartyIDs_1_1_2_1.set(NestedPartyID_63);
        NestedParties_NoNestedPartyIDs_63.insert(NestedPartyID_63.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_63('7');
        noNestedPartyIDs_1_1_2_1.set(NestedPartyIDSource_63);
        NestedParties_NoNestedPartyIDs_63.insert(NestedPartyIDSource_63.getString());
        FIX::NestedPartyRole NestedPartyRole_63(1304713116);
        noNestedPartyIDs_1_1_2_1.set(NestedPartyRole_63);
        NestedParties_NoNestedPartyIDs_63.insert(NestedPartyRole_63.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_63);
        all_compo_names.insert("NestedParties.NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_1_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_139;
          FIX::NestedPartySubID NestedPartySubID_139("STRING_1751410420");
          noNestedPartySubIDs_1_1_1_3_0.set(NestedPartySubID_139);
          NstdPtysSubGrp_NoNestedPartySubIDs_139.insert(NestedPartySubID_139.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_139(143235532);
          noNestedPartySubIDs_1_1_1_3_0.set(NestedPartySubIDType_139);
          NstdPtysSubGrp_NoNestedPartySubIDs_139.insert(NestedPartySubIDType_139.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_139);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_1_1_2_1.addGroup(noNestedPartySubIDs_1_1_1_3_0);
        }
        noAllocs_1_1_1.addGroup(noNestedPartyIDs_1_1_2_1);
      }
      noOrders_0_1.addGroup(noAllocs_1_1_1);
    }
    // SpreadOrBenchmarkCurveData
    multiset<string> SpreadOrBenchmarkCurveData_17;
    FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_17("USD");
    noOrders_0_1.set(BenchmarkCurveCurrency_17);
    SpreadOrBenchmarkCurveData_17.insert(BenchmarkCurveCurrency_17.getString());
    FIX::BenchmarkCurveName BenchmarkCurveName_17("STRING_Pfandbriefe");
    noOrders_0_1.set(BenchmarkCurveName_17);
    SpreadOrBenchmarkCurveData_17.insert(BenchmarkCurveName_17.getString());
    FIX::BenchmarkCurvePoint BenchmarkCurvePoint_17("STRING_502515325");
    noOrders_0_1.set(BenchmarkCurvePoint_17);
    SpreadOrBenchmarkCurveData_17.insert(BenchmarkCurvePoint_17.getString());
    FIX::BenchmarkPrice BenchmarkPrice_17;
    BenchmarkPrice_17.setString("6015549");
    noOrders_0_1.set(BenchmarkPrice_17);
    SpreadOrBenchmarkCurveData_17.insert(BenchmarkPrice_17.getString());
    FIX::BenchmarkPriceType BenchmarkPriceType_17(503886790);
    noOrders_0_1.set(BenchmarkPriceType_17);
    SpreadOrBenchmarkCurveData_17.insert(BenchmarkPriceType_17.getString());
    FIX::BenchmarkSecurityID BenchmarkSecurityID_17("STRING_466284048");
    noOrders_0_1.set(BenchmarkSecurityID_17);
    SpreadOrBenchmarkCurveData_17.insert(BenchmarkSecurityID_17.getString());
    FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_17("STRING_1680382886");
    noOrders_0_1.set(BenchmarkSecurityIDSource_17);
    SpreadOrBenchmarkCurveData_17.insert(BenchmarkSecurityIDSource_17.getString());
    FIX::Spread Spread_17;
    Spread_17.setString("11978604");
    noOrders_0_1.set(Spread_17);
    SpreadOrBenchmarkCurveData_17.insert(Spread_17.getString());
    all_values.push_back(SpreadOrBenchmarkCurveData_17);
    all_compo_names.insert("SpreadOrBenchmarkCurveData");

    // Stipulations
    // Group Stipulations.NoStipulations
    {
      FIX50SP2::NewOrderList::NoOrders::NoStipulations noStipulations_1_1_0;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_28;
      FIX::StipulationType StipulationType_28("STRING_CPP");
      noStipulations_1_1_0.set(StipulationType_28);
      Stipulations_NoStipulations_28.insert(StipulationType_28.getString());
      FIX::StipulationValue StipulationValue_28("STRING_554187461");
      noStipulations_1_1_0.set(StipulationValue_28);
      Stipulations_NoStipulations_28.insert(StipulationValue_28.getString());
      all_values.push_back(Stipulations_NoStipulations_28);
      all_compo_names.insert("Stipulations.NoStipulations");

      noOrders_0_1.addGroup(noStipulations_1_1_0);
    }
    // StrategyParametersGrp
    // Group StrategyParametersGrp.NoStrategyParameters
    {
      FIX50SP2::NewOrderList::NoOrders::NoStrategyParameters noStrategyParameters_1_1_0;
      // StrategyParametersGrp.NoStrategyParameters
      multiset<string> StrategyParametersGrp_NoStrategyParameters_9;
      FIX::StrategyParameterName StrategyParameterName_9("STRING_1416331992");
      noStrategyParameters_1_1_0.set(StrategyParameterName_9);
      StrategyParametersGrp_NoStrategyParameters_9.insert(StrategyParameterName_9.getString());
      FIX::StrategyParameterType StrategyParameterType_9(23);
      noStrategyParameters_1_1_0.set(StrategyParameterType_9);
      StrategyParametersGrp_NoStrategyParameters_9.insert(StrategyParameterType_9.getString());
      FIX::StrategyParameterValue StrategyParameterValue_9("STRING_1705684123");
      noStrategyParameters_1_1_0.set(StrategyParameterValue_9);
      StrategyParametersGrp_NoStrategyParameters_9.insert(StrategyParameterValue_9.getString());
      all_values.push_back(StrategyParametersGrp_NoStrategyParameters_9);
      all_compo_names.insert("StrategyParametersGrp.NoStrategyParameters");

      noOrders_0_1.addGroup(noStrategyParameters_1_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoStrategyParameters noStrategyParameters_1_1_1;
      // StrategyParametersGrp.NoStrategyParameters
      multiset<string> StrategyParametersGrp_NoStrategyParameters_10;
      FIX::StrategyParameterName StrategyParameterName_10("STRING_1017120171");
      noStrategyParameters_1_1_1.set(StrategyParameterName_10);
      StrategyParametersGrp_NoStrategyParameters_10.insert(StrategyParameterName_10.getString());
      FIX::StrategyParameterType StrategyParameterType_10(9);
      noStrategyParameters_1_1_1.set(StrategyParameterType_10);
      StrategyParametersGrp_NoStrategyParameters_10.insert(StrategyParameterType_10.getString());
      FIX::StrategyParameterValue StrategyParameterValue_10("STRING_410102671");
      noStrategyParameters_1_1_1.set(StrategyParameterValue_10);
      StrategyParametersGrp_NoStrategyParameters_10.insert(StrategyParameterValue_10.getString());
      all_values.push_back(StrategyParametersGrp_NoStrategyParameters_10);
      all_compo_names.insert("StrategyParametersGrp.NoStrategyParameters");

      noOrders_0_1.addGroup(noStrategyParameters_1_1_1);
    }
    // TrdgSesGrp
    // Group TrdgSesGrp.NoTradingSessions
    {
      FIX50SP2::NewOrderList::NoOrders::NoTradingSessions noTradingSessions_1_1_0;
      // TrdgSesGrp.NoTradingSessions
      multiset<string> TrdgSesGrp_NoTradingSessions_10;
      FIX::TradingSessionID TradingSessionID_57("STRING_1");
      noTradingSessions_1_1_0.set(TradingSessionID_57);
      TrdgSesGrp_NoTradingSessions_10.insert(TradingSessionID_57.getString());
      FIX::TradingSessionSubID TradingSessionSubID_57("STRING_4");
      noTradingSessions_1_1_0.set(TradingSessionSubID_57);
      TrdgSesGrp_NoTradingSessions_10.insert(TradingSessionSubID_57.getString());
      all_values.push_back(TrdgSesGrp_NoTradingSessions_10);
      all_compo_names.insert("TrdgSesGrp.NoTradingSessions");

      noOrders_0_1.addGroup(noTradingSessions_1_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoTradingSessions noTradingSessions_1_1_1;
      // TrdgSesGrp.NoTradingSessions
      multiset<string> TrdgSesGrp_NoTradingSessions_11;
      FIX::TradingSessionID TradingSessionID_58("STRING_4");
      noTradingSessions_1_1_1.set(TradingSessionID_58);
      TrdgSesGrp_NoTradingSessions_11.insert(TradingSessionID_58.getString());
      FIX::TradingSessionSubID TradingSessionSubID_58("STRING_3");
      noTradingSessions_1_1_1.set(TradingSessionSubID_58);
      TrdgSesGrp_NoTradingSessions_11.insert(TradingSessionSubID_58.getString());
      all_values.push_back(TrdgSesGrp_NoTradingSessions_11);
      all_compo_names.insert("TrdgSesGrp.NoTradingSessions");

      noOrders_0_1.addGroup(noTradingSessions_1_1_1);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoTradingSessions noTradingSessions_1_1_2;
      // TrdgSesGrp.NoTradingSessions
      multiset<string> TrdgSesGrp_NoTradingSessions_12;
      FIX::TradingSessionID TradingSessionID_59("STRING_4");
      noTradingSessions_1_1_2.set(TradingSessionID_59);
      TrdgSesGrp_NoTradingSessions_12.insert(TradingSessionID_59.getString());
      FIX::TradingSessionSubID TradingSessionSubID_59("STRING_7");
      noTradingSessions_1_1_2.set(TradingSessionSubID_59);
      TrdgSesGrp_NoTradingSessions_12.insert(TradingSessionSubID_59.getString());
      all_values.push_back(TrdgSesGrp_NoTradingSessions_12);
      all_compo_names.insert("TrdgSesGrp.NoTradingSessions");

      noOrders_0_1.addGroup(noTradingSessions_1_1_2);
    }
    // TriggeringInstruction
    multiset<string> TriggeringInstruction_5;
    FIX::TriggerAction TriggerAction_5('2');
    noOrders_0_1.set(TriggerAction_5);
    TriggeringInstruction_5.insert(TriggerAction_5.getString());
    FIX::TriggerNewPrice TriggerNewPrice_5;
    TriggerNewPrice_5.setString("12834114");
    noOrders_0_1.set(TriggerNewPrice_5);
    TriggeringInstruction_5.insert(TriggerNewPrice_5.getString());
    FIX::TriggerNewQty TriggerNewQty_5;
    TriggerNewQty_5.setString("19910230");
    noOrders_0_1.set(TriggerNewQty_5);
    TriggeringInstruction_5.insert(TriggerNewQty_5.getString());
    FIX::TriggerOrderType TriggerOrderType_5('1');
    noOrders_0_1.set(TriggerOrderType_5);
    TriggeringInstruction_5.insert(TriggerOrderType_5.getString());
    FIX::TriggerPrice TriggerPrice_5;
    TriggerPrice_5.setString("14266470");
    noOrders_0_1.set(TriggerPrice_5);
    TriggeringInstruction_5.insert(TriggerPrice_5.getString());
    FIX::TriggerPriceDirection TriggerPriceDirection_5('D');
    noOrders_0_1.set(TriggerPriceDirection_5);
    TriggeringInstruction_5.insert(TriggerPriceDirection_5.getString());
    FIX::TriggerPriceType TriggerPriceType_5('5');
    noOrders_0_1.set(TriggerPriceType_5);
    TriggeringInstruction_5.insert(TriggerPriceType_5.getString());
    FIX::TriggerPriceTypeScope TriggerPriceTypeScope_5('0');
    noOrders_0_1.set(TriggerPriceTypeScope_5);
    TriggeringInstruction_5.insert(TriggerPriceTypeScope_5.getString());
    FIX::TriggerSecurityDesc TriggerSecurityDesc_5("STRING_359228720");
    noOrders_0_1.set(TriggerSecurityDesc_5);
    TriggeringInstruction_5.insert(TriggerSecurityDesc_5.getString());
    FIX::TriggerSecurityID TriggerSecurityID_5("STRING_1732484077");
    noOrders_0_1.set(TriggerSecurityID_5);
    TriggeringInstruction_5.insert(TriggerSecurityID_5.getString());
    FIX::TriggerSecurityIDSource TriggerSecurityIDSource_5("STRING_1384887838");
    noOrders_0_1.set(TriggerSecurityIDSource_5);
    TriggeringInstruction_5.insert(TriggerSecurityIDSource_5.getString());
    FIX::TriggerSymbol TriggerSymbol_5("STRING_825512768");
    noOrders_0_1.set(TriggerSymbol_5);
    TriggeringInstruction_5.insert(TriggerSymbol_5.getString());
    FIX::TriggerTradingSessionID TriggerTradingSessionID_5("STRING_1265383315");
    noOrders_0_1.set(TriggerTradingSessionID_5);
    TriggeringInstruction_5.insert(TriggerTradingSessionID_5.getString());
    FIX::TriggerTradingSessionSubID TriggerTradingSessionSubID_5("STRING_435264632");
    noOrders_0_1.set(TriggerTradingSessionSubID_5);
    TriggeringInstruction_5.insert(TriggerTradingSessionSubID_5.getString());
    FIX::TriggerType TriggerType_5('3');
    noOrders_0_1.set(TriggerType_5);
    TriggeringInstruction_5.insert(TriggerType_5.getString());
    all_values.push_back(TriggeringInstruction_5);
    all_compo_names.insert("TriggeringInstruction");

    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::NewOrderList::NoOrders::NoUnderlyings noUnderlyings_1_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_68;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_68("DATA_989452093");
      noUnderlyings_1_1_0.set(EncodedUnderlyingIssuer_68);
      UnderlyingInstrument_68.insert(EncodedUnderlyingIssuer_68.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_68(1321544903);
      noUnderlyings_1_1_0.set(EncodedUnderlyingIssuerLen_68);
      UnderlyingInstrument_68.insert(EncodedUnderlyingIssuerLen_68.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_68("DATA_311269842");
      noUnderlyings_1_1_0.set(EncodedUnderlyingSecurityDesc_68);
      UnderlyingInstrument_68.insert(EncodedUnderlyingSecurityDesc_68.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_68(127679088);
      noUnderlyings_1_1_0.set(EncodedUnderlyingSecurityDescLen_68);
      UnderlyingInstrument_68.insert(EncodedUnderlyingSecurityDescLen_68.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_68;
      UnderlyingAdjustedQuantity_68.setString("8797453");
      noUnderlyings_1_1_0.set(UnderlyingAdjustedQuantity_68);
      UnderlyingInstrument_68.insert(UnderlyingAdjustedQuantity_68.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_68;
      UnderlyingAllocationPercent_68.setString("0.130000");
      noUnderlyings_1_1_0.set(UnderlyingAllocationPercent_68);
      UnderlyingInstrument_68.insert(UnderlyingAllocationPercent_68.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_68;
      UnderlyingAttachmentPoint_68.setString("51.230000");
      noUnderlyings_1_1_0.set(UnderlyingAttachmentPoint_68);
      UnderlyingInstrument_68.insert(UnderlyingAttachmentPoint_68.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_68("STRING_1289848049");
      noUnderlyings_1_1_0.set(UnderlyingCFICode_68);
      UnderlyingInstrument_68.insert(UnderlyingCFICode_68.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_68("STRING_965632153");
      noUnderlyings_1_1_0.set(UnderlyingCPProgram_68);
      UnderlyingInstrument_68.insert(UnderlyingCPProgram_68.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_68("STRING_2145987923");
      noUnderlyings_1_1_0.set(UnderlyingCPRegType_68);
      UnderlyingInstrument_68.insert(UnderlyingCPRegType_68.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_68;
      UnderlyingCapValue_68.setString("18719443");
      noUnderlyings_1_1_0.set(UnderlyingCapValue_68);
      UnderlyingInstrument_68.insert(UnderlyingCapValue_68.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_68;
      UnderlyingCashAmount_68.setString("4383903");
      noUnderlyings_1_1_0.set(UnderlyingCashAmount_68);
      UnderlyingInstrument_68.insert(UnderlyingCashAmount_68.getString());
      FIX::UnderlyingCashType UnderlyingCashType_68("STRING_DIFF");
      noUnderlyings_1_1_0.set(UnderlyingCashType_68);
      UnderlyingInstrument_68.insert(UnderlyingCashType_68.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_68;
      UnderlyingContractMultiplier_68.setString("18506426");
      noUnderlyings_1_1_0.set(UnderlyingContractMultiplier_68);
      UnderlyingInstrument_68.insert(UnderlyingContractMultiplier_68.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_68(68745221);
      noUnderlyings_1_1_0.set(UnderlyingContractMultiplierUnit_68);
      UnderlyingInstrument_68.insert(UnderlyingContractMultiplierUnit_68.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_68("COUNTRY_985418038");
      noUnderlyings_1_1_0.set(UnderlyingCountryOfIssue_68);
      UnderlyingInstrument_68.insert(UnderlyingCountryOfIssue_68.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_68("LOCALMKTDATE_986570524");
      noUnderlyings_1_1_0.set(UnderlyingCouponPaymentDate_68);
      UnderlyingInstrument_68.insert(UnderlyingCouponPaymentDate_68.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_68;
      UnderlyingCouponRate_68.setString("83.040000");
      noUnderlyings_1_1_0.set(UnderlyingCouponRate_68);
      UnderlyingInstrument_68.insert(UnderlyingCouponRate_68.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_68("STRING_1433437466");
      noUnderlyings_1_1_0.set(UnderlyingCreditRating_68);
      UnderlyingInstrument_68.insert(UnderlyingCreditRating_68.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_68("CHF");
      noUnderlyings_1_1_0.set(UnderlyingCurrency_68);
      UnderlyingInstrument_68.insert(UnderlyingCurrency_68.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_68;
      UnderlyingCurrentValue_68.setString("4168829");
      noUnderlyings_1_1_0.set(UnderlyingCurrentValue_68);
      UnderlyingInstrument_68.insert(UnderlyingCurrentValue_68.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_68;
      UnderlyingDetachmentPoint_68.setString("49.360000");
      noUnderlyings_1_1_0.set(UnderlyingDetachmentPoint_68);
      UnderlyingInstrument_68.insert(UnderlyingDetachmentPoint_68.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_68;
      UnderlyingDirtyPrice_68.setString("1282267");
      noUnderlyings_1_1_0.set(UnderlyingDirtyPrice_68);
      UnderlyingInstrument_68.insert(UnderlyingDirtyPrice_68.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_68;
      UnderlyingEndPrice_68.setString("18833");
      noUnderlyings_1_1_0.set(UnderlyingEndPrice_68);
      UnderlyingInstrument_68.insert(UnderlyingEndPrice_68.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_68;
      UnderlyingEndValue_68.setString("3841391");
      noUnderlyings_1_1_0.set(UnderlyingEndValue_68);
      UnderlyingInstrument_68.insert(UnderlyingEndValue_68.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_68(953739540);
      noUnderlyings_1_1_0.set(UnderlyingExerciseStyle_68);
      UnderlyingInstrument_68.insert(UnderlyingExerciseStyle_68.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_68;
      UnderlyingFXRate_68.setString("12672666");
      noUnderlyings_1_1_0.set(UnderlyingFXRate_68);
      UnderlyingInstrument_68.insert(UnderlyingFXRate_68.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_68('D');
      noUnderlyings_1_1_0.set(UnderlyingFXRateCalc_68);
      UnderlyingInstrument_68.insert(UnderlyingFXRateCalc_68.getString());
      FIX::UnderlyingFactor UnderlyingFactor_68;
      UnderlyingFactor_68.setString("17759827");
      noUnderlyings_1_1_0.set(UnderlyingFactor_68);
      UnderlyingInstrument_68.insert(UnderlyingFactor_68.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_68(162204538);
      noUnderlyings_1_1_0.set(UnderlyingFlowScheduleType_68);
      UnderlyingInstrument_68.insert(UnderlyingFlowScheduleType_68.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_68("STRING_1808855851");
      noUnderlyings_1_1_0.set(UnderlyingInstrRegistry_68);
      UnderlyingInstrument_68.insert(UnderlyingInstrRegistry_68.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_68("LOCALMKTDATE_950044017");
      noUnderlyings_1_1_0.set(UnderlyingIssueDate_68);
      UnderlyingInstrument_68.insert(UnderlyingIssueDate_68.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_68("STRING_473474380");
      noUnderlyings_1_1_0.set(UnderlyingIssuer_68);
      UnderlyingInstrument_68.insert(UnderlyingIssuer_68.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_68("STRING_1936534940");
      noUnderlyings_1_1_0.set(UnderlyingLocaleOfIssue_68);
      UnderlyingInstrument_68.insert(UnderlyingLocaleOfIssue_68.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_68("LOCALMKTDATE_1829789395");
      noUnderlyings_1_1_0.set(UnderlyingMaturityDate_68);
      UnderlyingInstrument_68.insert(UnderlyingMaturityDate_68.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_68("MONTHYEAR_1801864394");
      noUnderlyings_1_1_0.set(UnderlyingMaturityMonthYear_68);
      UnderlyingInstrument_68.insert(UnderlyingMaturityMonthYear_68.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_68("TZTIMEONLY_294016415");
      noUnderlyings_1_1_0.set(UnderlyingMaturityTime_68);
      UnderlyingInstrument_68.insert(UnderlyingMaturityTime_68.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_68;
      UnderlyingNotionalPercentageOutstanding_68.setString("37.970000");
      noUnderlyings_1_1_0.set(UnderlyingNotionalPercentageOutstanding_68);
      UnderlyingInstrument_68.insert(UnderlyingNotionalPercentageOutstanding_68.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_68('6');
      noUnderlyings_1_1_0.set(UnderlyingOptAttribute_68);
      UnderlyingInstrument_68.insert(UnderlyingOptAttribute_68.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_68;
      UnderlyingOriginalNotionalPercentageOutstanding_68.setString("6.910000");
      noUnderlyings_1_1_0.set(UnderlyingOriginalNotionalPercentageOutstanding_68);
      UnderlyingInstrument_68.insert(UnderlyingOriginalNotionalPercentageOutstanding_68.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_68("STRING_696614478");
      noUnderlyings_1_1_0.set(UnderlyingPriceUnitOfMeasure_68);
      UnderlyingInstrument_68.insert(UnderlyingPriceUnitOfMeasure_68.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_68;
      UnderlyingPriceUnitOfMeasureQty_68.setString("10584032");
      noUnderlyings_1_1_0.set(UnderlyingPriceUnitOfMeasureQty_68);
      UnderlyingInstrument_68.insert(UnderlyingPriceUnitOfMeasureQty_68.getString());
      FIX::UnderlyingProduct UnderlyingProduct_68(433846074);
      noUnderlyings_1_1_0.set(UnderlyingProduct_68);
      UnderlyingInstrument_68.insert(UnderlyingProduct_68.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_68(399773523);
      noUnderlyings_1_1_0.set(UnderlyingPutOrCall_68);
      UnderlyingInstrument_68.insert(UnderlyingPutOrCall_68.getString());
      FIX::UnderlyingPx UnderlyingPx_68;
      UnderlyingPx_68.setString("11271484");
      noUnderlyings_1_1_0.set(UnderlyingPx_68);
      UnderlyingInstrument_68.insert(UnderlyingPx_68.getString());
      FIX::UnderlyingQty UnderlyingQty_68;
      UnderlyingQty_68.setString("14192641");
      noUnderlyings_1_1_0.set(UnderlyingQty_68);
      UnderlyingInstrument_68.insert(UnderlyingQty_68.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_68("LOCALMKTDATE_1386344047");
      noUnderlyings_1_1_0.set(UnderlyingRedemptionDate_68);
      UnderlyingInstrument_68.insert(UnderlyingRedemptionDate_68.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_68("STRING_1039433109");
      noUnderlyings_1_1_0.set(UnderlyingRepoCollateralSecurityType_68);
      UnderlyingInstrument_68.insert(UnderlyingRepoCollateralSecurityType_68.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_68;
      UnderlyingRepurchaseRate_68.setString("79.310000");
      noUnderlyings_1_1_0.set(UnderlyingRepurchaseRate_68);
      UnderlyingInstrument_68.insert(UnderlyingRepurchaseRate_68.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_68(1652077935);
      noUnderlyings_1_1_0.set(UnderlyingRepurchaseTerm_68);
      UnderlyingInstrument_68.insert(UnderlyingRepurchaseTerm_68.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_68("STRING_808431160");
      noUnderlyings_1_1_0.set(UnderlyingRestructuringType_68);
      UnderlyingInstrument_68.insert(UnderlyingRestructuringType_68.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_68("STRING_1122100875");
      noUnderlyings_1_1_0.set(UnderlyingSecurityDesc_68);
      UnderlyingInstrument_68.insert(UnderlyingSecurityDesc_68.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_68("EXCHANGE_651329223");
      noUnderlyings_1_1_0.set(UnderlyingSecurityExchange_68);
      UnderlyingInstrument_68.insert(UnderlyingSecurityExchange_68.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_68("STRING_936657932");
      noUnderlyings_1_1_0.set(UnderlyingSecurityID_68);
      UnderlyingInstrument_68.insert(UnderlyingSecurityID_68.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_68("STRING_1123984249");
      noUnderlyings_1_1_0.set(UnderlyingSecurityIDSource_68);
      UnderlyingInstrument_68.insert(UnderlyingSecurityIDSource_68.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_68("STRING_1035468349");
      noUnderlyings_1_1_0.set(UnderlyingSecuritySubType_68);
      UnderlyingInstrument_68.insert(UnderlyingSecuritySubType_68.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_68("STRING_1890397472");
      noUnderlyings_1_1_0.set(UnderlyingSecurityType_68);
      UnderlyingInstrument_68.insert(UnderlyingSecurityType_68.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_68("STRING_243767289");
      noUnderlyings_1_1_0.set(UnderlyingSeniority_68);
      UnderlyingInstrument_68.insert(UnderlyingSeniority_68.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_68("STRING_1854872107");
      noUnderlyings_1_1_0.set(UnderlyingSettlMethod_68);
      UnderlyingInstrument_68.insert(UnderlyingSettlMethod_68.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_68(2);
      noUnderlyings_1_1_0.set(UnderlyingSettlementType_68);
      UnderlyingInstrument_68.insert(UnderlyingSettlementType_68.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_68;
      UnderlyingStartValue_68.setString("4059718");
      noUnderlyings_1_1_0.set(UnderlyingStartValue_68);
      UnderlyingInstrument_68.insert(UnderlyingStartValue_68.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_68("STRING_1516244310");
      noUnderlyings_1_1_0.set(UnderlyingStateOrProvinceOfIssue_68);
      UnderlyingInstrument_68.insert(UnderlyingStateOrProvinceOfIssue_68.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_68("USD");
      noUnderlyings_1_1_0.set(UnderlyingStrikeCurrency_68);
      UnderlyingInstrument_68.insert(UnderlyingStrikeCurrency_68.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_68;
      UnderlyingStrikePrice_68.setString("13052956");
      noUnderlyings_1_1_0.set(UnderlyingStrikePrice_68);
      UnderlyingInstrument_68.insert(UnderlyingStrikePrice_68.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_68("STRING_3762703");
      noUnderlyings_1_1_0.set(UnderlyingSymbol_68);
      UnderlyingInstrument_68.insert(UnderlyingSymbol_68.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_68("STRING_533826954");
      noUnderlyings_1_1_0.set(UnderlyingSymbolSfx_68);
      UnderlyingInstrument_68.insert(UnderlyingSymbolSfx_68.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_68("STRING_1599312018");
      noUnderlyings_1_1_0.set(UnderlyingTimeUnit_68);
      UnderlyingInstrument_68.insert(UnderlyingTimeUnit_68.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_68("STRING_975916500");
      noUnderlyings_1_1_0.set(UnderlyingUnitOfMeasure_68);
      UnderlyingInstrument_68.insert(UnderlyingUnitOfMeasure_68.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_68;
      UnderlyingUnitOfMeasureQty_68.setString("11538398");
      noUnderlyings_1_1_0.set(UnderlyingUnitOfMeasureQty_68);
      UnderlyingInstrument_68.insert(UnderlyingUnitOfMeasureQty_68.getString());
      all_values.push_back(UnderlyingInstrument_68);
      all_compo_names.insert("UnderlyingInstrument");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_140;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_140("STRING_1672530979");
        noUnderlyingSecurityAltID_1_0_2_0.set(UnderlyingSecurityAltID_140);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_140.insert(UnderlyingSecurityAltID_140.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_140("STRING_64759436");
        noUnderlyingSecurityAltID_1_0_2_0.set(UnderlyingSecurityAltIDSource_140);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_140.insert(UnderlyingSecurityAltIDSource_140.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_140);
        all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_0.addGroup(noUnderlyingSecurityAltID_1_0_2_0);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_135;
        FIX::UnderlyingStipType UnderlyingStipType_135("STRING_2072304502");
        noUnderlyingStips_1_0_2_0.set(UnderlyingStipType_135);
        UnderlyingStipulations_NoUnderlyingStips_135.insert(UnderlyingStipType_135.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_135("STRING_1191907889");
        noUnderlyingStips_1_0_2_0.set(UnderlyingStipValue_135);
        UnderlyingStipulations_NoUnderlyingStips_135.insert(UnderlyingStipValue_135.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_135);
        all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

        noUnderlyings_1_1_0.addGroup(noUnderlyingStips_1_0_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_0_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_136;
        FIX::UnderlyingStipType UnderlyingStipType_136("STRING_1597459247");
        noUnderlyingStips_1_0_2_1.set(UnderlyingStipType_136);
        UnderlyingStipulations_NoUnderlyingStips_136.insert(UnderlyingStipType_136.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_136("STRING_1311164901");
        noUnderlyingStips_1_0_2_1.set(UnderlyingStipValue_136);
        UnderlyingStipulations_NoUnderlyingStips_136.insert(UnderlyingStipValue_136.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_136);
        all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

        noUnderlyings_1_1_0.addGroup(noUnderlyingStips_1_0_2_1);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_130;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_130("STRING_155193530");
        noUndlyInstrumentParties_1_0_2_0.set(UnderlyingInstrumentPartyID_130);
        UndlyInstrumentParties_NoUndlyInstrumentParties_130.insert(UnderlyingInstrumentPartyID_130.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_130('8');
        noUndlyInstrumentParties_1_0_2_0.set(UnderlyingInstrumentPartyIDSource_130);
        UndlyInstrumentParties_NoUndlyInstrumentParties_130.insert(UnderlyingInstrumentPartyIDSource_130.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_130(892288510);
        noUndlyInstrumentParties_1_0_2_0.set(UnderlyingInstrumentPartyRole_130);
        UndlyInstrumentParties_NoUndlyInstrumentParties_130.insert(UnderlyingInstrumentPartyRole_130.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_130);
        all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_262;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_262("STRING_1467088411");
          noUndlyInstrumentPartySubIDs_1_0_0_3_0.set(UnderlyingInstrumentPartySubID_262);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_262.insert(UnderlyingInstrumentPartySubID_262.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_262(1828946442);
          noUndlyInstrumentPartySubIDs_1_0_0_3_0.set(UnderlyingInstrumentPartySubIDType_262);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_262.insert(UnderlyingInstrumentPartySubIDType_262.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_262);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_0_3_0);
        }
        noUnderlyings_1_1_0.addGroup(noUndlyInstrumentParties_1_0_2_0);
      }
      noOrders_0_1.addGroup(noUnderlyings_1_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoUnderlyings noUnderlyings_1_1_1;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_69;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_69("DATA_253795007");
      noUnderlyings_1_1_1.set(EncodedUnderlyingIssuer_69);
      UnderlyingInstrument_69.insert(EncodedUnderlyingIssuer_69.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_69(355073112);
      noUnderlyings_1_1_1.set(EncodedUnderlyingIssuerLen_69);
      UnderlyingInstrument_69.insert(EncodedUnderlyingIssuerLen_69.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_69("DATA_1571860266");
      noUnderlyings_1_1_1.set(EncodedUnderlyingSecurityDesc_69);
      UnderlyingInstrument_69.insert(EncodedUnderlyingSecurityDesc_69.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_69(497562296);
      noUnderlyings_1_1_1.set(EncodedUnderlyingSecurityDescLen_69);
      UnderlyingInstrument_69.insert(EncodedUnderlyingSecurityDescLen_69.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_69;
      UnderlyingAdjustedQuantity_69.setString("624615");
      noUnderlyings_1_1_1.set(UnderlyingAdjustedQuantity_69);
      UnderlyingInstrument_69.insert(UnderlyingAdjustedQuantity_69.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_69;
      UnderlyingAllocationPercent_69.setString("32.050000");
      noUnderlyings_1_1_1.set(UnderlyingAllocationPercent_69);
      UnderlyingInstrument_69.insert(UnderlyingAllocationPercent_69.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_69;
      UnderlyingAttachmentPoint_69.setString("41.240000");
      noUnderlyings_1_1_1.set(UnderlyingAttachmentPoint_69);
      UnderlyingInstrument_69.insert(UnderlyingAttachmentPoint_69.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_69("STRING_1578705881");
      noUnderlyings_1_1_1.set(UnderlyingCFICode_69);
      UnderlyingInstrument_69.insert(UnderlyingCFICode_69.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_69("STRING_1264730161");
      noUnderlyings_1_1_1.set(UnderlyingCPProgram_69);
      UnderlyingInstrument_69.insert(UnderlyingCPProgram_69.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_69("STRING_1782980333");
      noUnderlyings_1_1_1.set(UnderlyingCPRegType_69);
      UnderlyingInstrument_69.insert(UnderlyingCPRegType_69.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_69;
      UnderlyingCapValue_69.setString("7365178");
      noUnderlyings_1_1_1.set(UnderlyingCapValue_69);
      UnderlyingInstrument_69.insert(UnderlyingCapValue_69.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_69;
      UnderlyingCashAmount_69.setString("12684928");
      noUnderlyings_1_1_1.set(UnderlyingCashAmount_69);
      UnderlyingInstrument_69.insert(UnderlyingCashAmount_69.getString());
      FIX::UnderlyingCashType UnderlyingCashType_69("STRING_DIFF");
      noUnderlyings_1_1_1.set(UnderlyingCashType_69);
      UnderlyingInstrument_69.insert(UnderlyingCashType_69.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_69;
      UnderlyingContractMultiplier_69.setString("1883462");
      noUnderlyings_1_1_1.set(UnderlyingContractMultiplier_69);
      UnderlyingInstrument_69.insert(UnderlyingContractMultiplier_69.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_69(96925717);
      noUnderlyings_1_1_1.set(UnderlyingContractMultiplierUnit_69);
      UnderlyingInstrument_69.insert(UnderlyingContractMultiplierUnit_69.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_69("COUNTRY_1323163493");
      noUnderlyings_1_1_1.set(UnderlyingCountryOfIssue_69);
      UnderlyingInstrument_69.insert(UnderlyingCountryOfIssue_69.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_69("LOCALMKTDATE_2080178915");
      noUnderlyings_1_1_1.set(UnderlyingCouponPaymentDate_69);
      UnderlyingInstrument_69.insert(UnderlyingCouponPaymentDate_69.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_69;
      UnderlyingCouponRate_69.setString("66.960000");
      noUnderlyings_1_1_1.set(UnderlyingCouponRate_69);
      UnderlyingInstrument_69.insert(UnderlyingCouponRate_69.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_69("STRING_1387922929");
      noUnderlyings_1_1_1.set(UnderlyingCreditRating_69);
      UnderlyingInstrument_69.insert(UnderlyingCreditRating_69.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_69("JPY");
      noUnderlyings_1_1_1.set(UnderlyingCurrency_69);
      UnderlyingInstrument_69.insert(UnderlyingCurrency_69.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_69;
      UnderlyingCurrentValue_69.setString("4323471");
      noUnderlyings_1_1_1.set(UnderlyingCurrentValue_69);
      UnderlyingInstrument_69.insert(UnderlyingCurrentValue_69.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_69;
      UnderlyingDetachmentPoint_69.setString("96.490000");
      noUnderlyings_1_1_1.set(UnderlyingDetachmentPoint_69);
      UnderlyingInstrument_69.insert(UnderlyingDetachmentPoint_69.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_69;
      UnderlyingDirtyPrice_69.setString("8579588");
      noUnderlyings_1_1_1.set(UnderlyingDirtyPrice_69);
      UnderlyingInstrument_69.insert(UnderlyingDirtyPrice_69.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_69;
      UnderlyingEndPrice_69.setString("5162045");
      noUnderlyings_1_1_1.set(UnderlyingEndPrice_69);
      UnderlyingInstrument_69.insert(UnderlyingEndPrice_69.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_69;
      UnderlyingEndValue_69.setString("18635431");
      noUnderlyings_1_1_1.set(UnderlyingEndValue_69);
      UnderlyingInstrument_69.insert(UnderlyingEndValue_69.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_69(1673717991);
      noUnderlyings_1_1_1.set(UnderlyingExerciseStyle_69);
      UnderlyingInstrument_69.insert(UnderlyingExerciseStyle_69.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_69;
      UnderlyingFXRate_69.setString("14084930");
      noUnderlyings_1_1_1.set(UnderlyingFXRate_69);
      UnderlyingInstrument_69.insert(UnderlyingFXRate_69.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_69('D');
      noUnderlyings_1_1_1.set(UnderlyingFXRateCalc_69);
      UnderlyingInstrument_69.insert(UnderlyingFXRateCalc_69.getString());
      FIX::UnderlyingFactor UnderlyingFactor_69;
      UnderlyingFactor_69.setString("9933227");
      noUnderlyings_1_1_1.set(UnderlyingFactor_69);
      UnderlyingInstrument_69.insert(UnderlyingFactor_69.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_69(1089955825);
      noUnderlyings_1_1_1.set(UnderlyingFlowScheduleType_69);
      UnderlyingInstrument_69.insert(UnderlyingFlowScheduleType_69.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_69("STRING_1247148945");
      noUnderlyings_1_1_1.set(UnderlyingInstrRegistry_69);
      UnderlyingInstrument_69.insert(UnderlyingInstrRegistry_69.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_69("LOCALMKTDATE_1348395866");
      noUnderlyings_1_1_1.set(UnderlyingIssueDate_69);
      UnderlyingInstrument_69.insert(UnderlyingIssueDate_69.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_69("STRING_514332444");
      noUnderlyings_1_1_1.set(UnderlyingIssuer_69);
      UnderlyingInstrument_69.insert(UnderlyingIssuer_69.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_69("STRING_1744711241");
      noUnderlyings_1_1_1.set(UnderlyingLocaleOfIssue_69);
      UnderlyingInstrument_69.insert(UnderlyingLocaleOfIssue_69.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_69("LOCALMKTDATE_1410857437");
      noUnderlyings_1_1_1.set(UnderlyingMaturityDate_69);
      UnderlyingInstrument_69.insert(UnderlyingMaturityDate_69.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_69("MONTHYEAR_1457605649");
      noUnderlyings_1_1_1.set(UnderlyingMaturityMonthYear_69);
      UnderlyingInstrument_69.insert(UnderlyingMaturityMonthYear_69.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_69("TZTIMEONLY_500761718");
      noUnderlyings_1_1_1.set(UnderlyingMaturityTime_69);
      UnderlyingInstrument_69.insert(UnderlyingMaturityTime_69.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_69;
      UnderlyingNotionalPercentageOutstanding_69.setString("96.700000");
      noUnderlyings_1_1_1.set(UnderlyingNotionalPercentageOutstanding_69);
      UnderlyingInstrument_69.insert(UnderlyingNotionalPercentageOutstanding_69.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_69('5');
      noUnderlyings_1_1_1.set(UnderlyingOptAttribute_69);
      UnderlyingInstrument_69.insert(UnderlyingOptAttribute_69.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_69;
      UnderlyingOriginalNotionalPercentageOutstanding_69.setString("84.030000");
      noUnderlyings_1_1_1.set(UnderlyingOriginalNotionalPercentageOutstanding_69);
      UnderlyingInstrument_69.insert(UnderlyingOriginalNotionalPercentageOutstanding_69.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_69("STRING_1578597506");
      noUnderlyings_1_1_1.set(UnderlyingPriceUnitOfMeasure_69);
      UnderlyingInstrument_69.insert(UnderlyingPriceUnitOfMeasure_69.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_69;
      UnderlyingPriceUnitOfMeasureQty_69.setString("18433450");
      noUnderlyings_1_1_1.set(UnderlyingPriceUnitOfMeasureQty_69);
      UnderlyingInstrument_69.insert(UnderlyingPriceUnitOfMeasureQty_69.getString());
      FIX::UnderlyingProduct UnderlyingProduct_69(305582042);
      noUnderlyings_1_1_1.set(UnderlyingProduct_69);
      UnderlyingInstrument_69.insert(UnderlyingProduct_69.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_69(1766943712);
      noUnderlyings_1_1_1.set(UnderlyingPutOrCall_69);
      UnderlyingInstrument_69.insert(UnderlyingPutOrCall_69.getString());
      FIX::UnderlyingPx UnderlyingPx_69;
      UnderlyingPx_69.setString("19402707");
      noUnderlyings_1_1_1.set(UnderlyingPx_69);
      UnderlyingInstrument_69.insert(UnderlyingPx_69.getString());
      FIX::UnderlyingQty UnderlyingQty_69;
      UnderlyingQty_69.setString("16287455");
      noUnderlyings_1_1_1.set(UnderlyingQty_69);
      UnderlyingInstrument_69.insert(UnderlyingQty_69.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_69("LOCALMKTDATE_1699638979");
      noUnderlyings_1_1_1.set(UnderlyingRedemptionDate_69);
      UnderlyingInstrument_69.insert(UnderlyingRedemptionDate_69.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_69("STRING_1562243791");
      noUnderlyings_1_1_1.set(UnderlyingRepoCollateralSecurityType_69);
      UnderlyingInstrument_69.insert(UnderlyingRepoCollateralSecurityType_69.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_69;
      UnderlyingRepurchaseRate_69.setString("48.170000");
      noUnderlyings_1_1_1.set(UnderlyingRepurchaseRate_69);
      UnderlyingInstrument_69.insert(UnderlyingRepurchaseRate_69.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_69(1810529381);
      noUnderlyings_1_1_1.set(UnderlyingRepurchaseTerm_69);
      UnderlyingInstrument_69.insert(UnderlyingRepurchaseTerm_69.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_69("STRING_1109037693");
      noUnderlyings_1_1_1.set(UnderlyingRestructuringType_69);
      UnderlyingInstrument_69.insert(UnderlyingRestructuringType_69.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_69("STRING_1301531987");
      noUnderlyings_1_1_1.set(UnderlyingSecurityDesc_69);
      UnderlyingInstrument_69.insert(UnderlyingSecurityDesc_69.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_69("EXCHANGE_1371395383");
      noUnderlyings_1_1_1.set(UnderlyingSecurityExchange_69);
      UnderlyingInstrument_69.insert(UnderlyingSecurityExchange_69.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_69("STRING_1966996496");
      noUnderlyings_1_1_1.set(UnderlyingSecurityID_69);
      UnderlyingInstrument_69.insert(UnderlyingSecurityID_69.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_69("STRING_1817736508");
      noUnderlyings_1_1_1.set(UnderlyingSecurityIDSource_69);
      UnderlyingInstrument_69.insert(UnderlyingSecurityIDSource_69.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_69("STRING_1087454915");
      noUnderlyings_1_1_1.set(UnderlyingSecuritySubType_69);
      UnderlyingInstrument_69.insert(UnderlyingSecuritySubType_69.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_69("STRING_1493230839");
      noUnderlyings_1_1_1.set(UnderlyingSecurityType_69);
      UnderlyingInstrument_69.insert(UnderlyingSecurityType_69.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_69("STRING_1078745891");
      noUnderlyings_1_1_1.set(UnderlyingSeniority_69);
      UnderlyingInstrument_69.insert(UnderlyingSeniority_69.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_69("STRING_2080808853");
      noUnderlyings_1_1_1.set(UnderlyingSettlMethod_69);
      UnderlyingInstrument_69.insert(UnderlyingSettlMethod_69.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_69(2);
      noUnderlyings_1_1_1.set(UnderlyingSettlementType_69);
      UnderlyingInstrument_69.insert(UnderlyingSettlementType_69.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_69;
      UnderlyingStartValue_69.setString("212180");
      noUnderlyings_1_1_1.set(UnderlyingStartValue_69);
      UnderlyingInstrument_69.insert(UnderlyingStartValue_69.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_69("STRING_1180474150");
      noUnderlyings_1_1_1.set(UnderlyingStateOrProvinceOfIssue_69);
      UnderlyingInstrument_69.insert(UnderlyingStateOrProvinceOfIssue_69.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_69("JPY");
      noUnderlyings_1_1_1.set(UnderlyingStrikeCurrency_69);
      UnderlyingInstrument_69.insert(UnderlyingStrikeCurrency_69.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_69;
      UnderlyingStrikePrice_69.setString("7777017");
      noUnderlyings_1_1_1.set(UnderlyingStrikePrice_69);
      UnderlyingInstrument_69.insert(UnderlyingStrikePrice_69.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_69("STRING_950839600");
      noUnderlyings_1_1_1.set(UnderlyingSymbol_69);
      UnderlyingInstrument_69.insert(UnderlyingSymbol_69.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_69("STRING_1993156161");
      noUnderlyings_1_1_1.set(UnderlyingSymbolSfx_69);
      UnderlyingInstrument_69.insert(UnderlyingSymbolSfx_69.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_69("STRING_1278463461");
      noUnderlyings_1_1_1.set(UnderlyingTimeUnit_69);
      UnderlyingInstrument_69.insert(UnderlyingTimeUnit_69.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_69("STRING_1792919271");
      noUnderlyings_1_1_1.set(UnderlyingUnitOfMeasure_69);
      UnderlyingInstrument_69.insert(UnderlyingUnitOfMeasure_69.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_69;
      UnderlyingUnitOfMeasureQty_69.setString("4205246");
      noUnderlyings_1_1_1.set(UnderlyingUnitOfMeasureQty_69);
      UnderlyingInstrument_69.insert(UnderlyingUnitOfMeasureQty_69.getString());
      all_values.push_back(UnderlyingInstrument_69);
      all_compo_names.insert("UnderlyingInstrument");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_141;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_141("STRING_1224033129");
        noUnderlyingSecurityAltID_1_1_2_0.set(UnderlyingSecurityAltID_141);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_141.insert(UnderlyingSecurityAltID_141.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_141("STRING_116386054");
        noUnderlyingSecurityAltID_1_1_2_0.set(UnderlyingSecurityAltIDSource_141);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_141.insert(UnderlyingSecurityAltIDSource_141.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_141);
        all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_1.addGroup(noUnderlyingSecurityAltID_1_1_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_142;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_142("STRING_1720303907");
        noUnderlyingSecurityAltID_1_1_2_1.set(UnderlyingSecurityAltID_142);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_142.insert(UnderlyingSecurityAltID_142.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_142("STRING_843493194");
        noUnderlyingSecurityAltID_1_1_2_1.set(UnderlyingSecurityAltIDSource_142);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_142.insert(UnderlyingSecurityAltIDSource_142.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_142);
        all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_1.addGroup(noUnderlyingSecurityAltID_1_1_2_1);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2_2;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_143;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_143("STRING_2056656797");
        noUnderlyingSecurityAltID_1_1_2_2.set(UnderlyingSecurityAltID_143);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_143.insert(UnderlyingSecurityAltID_143.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_143("STRING_1201565794");
        noUnderlyingSecurityAltID_1_1_2_2.set(UnderlyingSecurityAltIDSource_143);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_143.insert(UnderlyingSecurityAltIDSource_143.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_143);
        all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_1.addGroup(noUnderlyingSecurityAltID_1_1_2_2);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_137;
        FIX::UnderlyingStipType UnderlyingStipType_137("STRING_1471416941");
        noUnderlyingStips_1_1_2_0.set(UnderlyingStipType_137);
        UnderlyingStipulations_NoUnderlyingStips_137.insert(UnderlyingStipType_137.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_137("STRING_2070750611");
        noUnderlyingStips_1_1_2_0.set(UnderlyingStipValue_137);
        UnderlyingStipulations_NoUnderlyingStips_137.insert(UnderlyingStipValue_137.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_137);
        all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

        noUnderlyings_1_1_1.addGroup(noUnderlyingStips_1_1_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_138;
        FIX::UnderlyingStipType UnderlyingStipType_138("STRING_58694259");
        noUnderlyingStips_1_1_2_1.set(UnderlyingStipType_138);
        UnderlyingStipulations_NoUnderlyingStips_138.insert(UnderlyingStipType_138.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_138("STRING_432970986");
        noUnderlyingStips_1_1_2_1.set(UnderlyingStipValue_138);
        UnderlyingStipulations_NoUnderlyingStips_138.insert(UnderlyingStipValue_138.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_138);
        all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

        noUnderlyings_1_1_1.addGroup(noUnderlyingStips_1_1_2_1);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2_2;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_139;
        FIX::UnderlyingStipType UnderlyingStipType_139("STRING_1224798951");
        noUnderlyingStips_1_1_2_2.set(UnderlyingStipType_139);
        UnderlyingStipulations_NoUnderlyingStips_139.insert(UnderlyingStipType_139.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_139("STRING_1430089642");
        noUnderlyingStips_1_1_2_2.set(UnderlyingStipValue_139);
        UnderlyingStipulations_NoUnderlyingStips_139.insert(UnderlyingStipValue_139.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_139);
        all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

        noUnderlyings_1_1_1.addGroup(noUnderlyingStips_1_1_2_2);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_131;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_131("STRING_895051811");
        noUndlyInstrumentParties_1_1_2_0.set(UnderlyingInstrumentPartyID_131);
        UndlyInstrumentParties_NoUndlyInstrumentParties_131.insert(UnderlyingInstrumentPartyID_131.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_131('3');
        noUndlyInstrumentParties_1_1_2_0.set(UnderlyingInstrumentPartyIDSource_131);
        UndlyInstrumentParties_NoUndlyInstrumentParties_131.insert(UnderlyingInstrumentPartyIDSource_131.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_131(1745714674);
        noUndlyInstrumentParties_1_1_2_0.set(UnderlyingInstrumentPartyRole_131);
        UndlyInstrumentParties_NoUndlyInstrumentParties_131.insert(UnderlyingInstrumentPartyRole_131.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_131);
        all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_263;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_263("STRING_303386114");
          noUndlyInstrumentPartySubIDs_1_1_0_3_0.set(UnderlyingInstrumentPartySubID_263);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_263.insert(UnderlyingInstrumentPartySubID_263.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_263(2084784620);
          noUndlyInstrumentPartySubIDs_1_1_0_3_0.set(UnderlyingInstrumentPartySubIDType_263);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_263.insert(UnderlyingInstrumentPartySubIDType_263.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_263);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_1_0_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_264;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_264("STRING_1995015770");
          noUndlyInstrumentPartySubIDs_1_1_0_3_1.set(UnderlyingInstrumentPartySubID_264);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_264.insert(UnderlyingInstrumentPartySubID_264.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_264(1483860264);
          noUndlyInstrumentPartySubIDs_1_1_0_3_1.set(UnderlyingInstrumentPartySubIDType_264);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_264.insert(UnderlyingInstrumentPartySubIDType_264.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_264);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_1_0_3_1);
        }
        noUnderlyings_1_1_1.addGroup(noUndlyInstrumentParties_1_1_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_132;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_132("STRING_1624766783");
        noUndlyInstrumentParties_1_1_2_1.set(UnderlyingInstrumentPartyID_132);
        UndlyInstrumentParties_NoUndlyInstrumentParties_132.insert(UnderlyingInstrumentPartyID_132.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_132('3');
        noUndlyInstrumentParties_1_1_2_1.set(UnderlyingInstrumentPartyIDSource_132);
        UndlyInstrumentParties_NoUndlyInstrumentParties_132.insert(UnderlyingInstrumentPartyIDSource_132.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_132(114078359);
        noUndlyInstrumentParties_1_1_2_1.set(UnderlyingInstrumentPartyRole_132);
        UndlyInstrumentParties_NoUndlyInstrumentParties_132.insert(UnderlyingInstrumentPartyRole_132.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_132);
        all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_265;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_265("STRING_228755148");
          noUndlyInstrumentPartySubIDs_1_1_1_3_0.set(UnderlyingInstrumentPartySubID_265);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_265.insert(UnderlyingInstrumentPartySubID_265.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_265(1392541821);
          noUndlyInstrumentPartySubIDs_1_1_1_3_0.set(UnderlyingInstrumentPartySubIDType_265);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_265.insert(UnderlyingInstrumentPartySubIDType_265.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_265);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_1_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_1_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_266;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_266("STRING_73558359");
          noUndlyInstrumentPartySubIDs_1_1_1_3_1.set(UnderlyingInstrumentPartySubID_266);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_266.insert(UnderlyingInstrumentPartySubID_266.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_266(649279824);
          noUndlyInstrumentPartySubIDs_1_1_1_3_1.set(UnderlyingInstrumentPartySubIDType_266);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_266.insert(UnderlyingInstrumentPartySubIDType_266.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_266);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_1_3_1);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_1_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_267;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_267("STRING_659780037");
          noUndlyInstrumentPartySubIDs_1_1_1_3_2.set(UnderlyingInstrumentPartySubID_267);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_267.insert(UnderlyingInstrumentPartySubID_267.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_267(1297591488);
          noUndlyInstrumentPartySubIDs_1_1_1_3_2.set(UnderlyingInstrumentPartySubIDType_267);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_267.insert(UnderlyingInstrumentPartySubIDType_267.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_267);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_1_3_2);
        }
        noUnderlyings_1_1_1.addGroup(noUndlyInstrumentParties_1_1_2_1);
      }
      noOrders_0_1.addGroup(noUnderlyings_1_1_1);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoUnderlyings noUnderlyings_1_1_2;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_70;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_70("DATA_765665878");
      noUnderlyings_1_1_2.set(EncodedUnderlyingIssuer_70);
      UnderlyingInstrument_70.insert(EncodedUnderlyingIssuer_70.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_70(232600296);
      noUnderlyings_1_1_2.set(EncodedUnderlyingIssuerLen_70);
      UnderlyingInstrument_70.insert(EncodedUnderlyingIssuerLen_70.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_70("DATA_2141084682");
      noUnderlyings_1_1_2.set(EncodedUnderlyingSecurityDesc_70);
      UnderlyingInstrument_70.insert(EncodedUnderlyingSecurityDesc_70.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_70(674839027);
      noUnderlyings_1_1_2.set(EncodedUnderlyingSecurityDescLen_70);
      UnderlyingInstrument_70.insert(EncodedUnderlyingSecurityDescLen_70.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_70;
      UnderlyingAdjustedQuantity_70.setString("14341660");
      noUnderlyings_1_1_2.set(UnderlyingAdjustedQuantity_70);
      UnderlyingInstrument_70.insert(UnderlyingAdjustedQuantity_70.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_70;
      UnderlyingAllocationPercent_70.setString("95.600000");
      noUnderlyings_1_1_2.set(UnderlyingAllocationPercent_70);
      UnderlyingInstrument_70.insert(UnderlyingAllocationPercent_70.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_70;
      UnderlyingAttachmentPoint_70.setString("59.680000");
      noUnderlyings_1_1_2.set(UnderlyingAttachmentPoint_70);
      UnderlyingInstrument_70.insert(UnderlyingAttachmentPoint_70.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_70("STRING_1357433054");
      noUnderlyings_1_1_2.set(UnderlyingCFICode_70);
      UnderlyingInstrument_70.insert(UnderlyingCFICode_70.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_70("STRING_447943819");
      noUnderlyings_1_1_2.set(UnderlyingCPProgram_70);
      UnderlyingInstrument_70.insert(UnderlyingCPProgram_70.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_70("STRING_431743307");
      noUnderlyings_1_1_2.set(UnderlyingCPRegType_70);
      UnderlyingInstrument_70.insert(UnderlyingCPRegType_70.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_70;
      UnderlyingCapValue_70.setString("4347483");
      noUnderlyings_1_1_2.set(UnderlyingCapValue_70);
      UnderlyingInstrument_70.insert(UnderlyingCapValue_70.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_70;
      UnderlyingCashAmount_70.setString("18780334");
      noUnderlyings_1_1_2.set(UnderlyingCashAmount_70);
      UnderlyingInstrument_70.insert(UnderlyingCashAmount_70.getString());
      FIX::UnderlyingCashType UnderlyingCashType_70("STRING_FIXED");
      noUnderlyings_1_1_2.set(UnderlyingCashType_70);
      UnderlyingInstrument_70.insert(UnderlyingCashType_70.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_70;
      UnderlyingContractMultiplier_70.setString("13298001");
      noUnderlyings_1_1_2.set(UnderlyingContractMultiplier_70);
      UnderlyingInstrument_70.insert(UnderlyingContractMultiplier_70.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_70(100610722);
      noUnderlyings_1_1_2.set(UnderlyingContractMultiplierUnit_70);
      UnderlyingInstrument_70.insert(UnderlyingContractMultiplierUnit_70.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_70("COUNTRY_282458168");
      noUnderlyings_1_1_2.set(UnderlyingCountryOfIssue_70);
      UnderlyingInstrument_70.insert(UnderlyingCountryOfIssue_70.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_70("LOCALMKTDATE_1156114222");
      noUnderlyings_1_1_2.set(UnderlyingCouponPaymentDate_70);
      UnderlyingInstrument_70.insert(UnderlyingCouponPaymentDate_70.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_70;
      UnderlyingCouponRate_70.setString("68.360000");
      noUnderlyings_1_1_2.set(UnderlyingCouponRate_70);
      UnderlyingInstrument_70.insert(UnderlyingCouponRate_70.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_70("STRING_219759140");
      noUnderlyings_1_1_2.set(UnderlyingCreditRating_70);
      UnderlyingInstrument_70.insert(UnderlyingCreditRating_70.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_70("USD");
      noUnderlyings_1_1_2.set(UnderlyingCurrency_70);
      UnderlyingInstrument_70.insert(UnderlyingCurrency_70.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_70;
      UnderlyingCurrentValue_70.setString("18445259");
      noUnderlyings_1_1_2.set(UnderlyingCurrentValue_70);
      UnderlyingInstrument_70.insert(UnderlyingCurrentValue_70.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_70;
      UnderlyingDetachmentPoint_70.setString("89.800000");
      noUnderlyings_1_1_2.set(UnderlyingDetachmentPoint_70);
      UnderlyingInstrument_70.insert(UnderlyingDetachmentPoint_70.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_70;
      UnderlyingDirtyPrice_70.setString("20019354");
      noUnderlyings_1_1_2.set(UnderlyingDirtyPrice_70);
      UnderlyingInstrument_70.insert(UnderlyingDirtyPrice_70.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_70;
      UnderlyingEndPrice_70.setString("1251650");
      noUnderlyings_1_1_2.set(UnderlyingEndPrice_70);
      UnderlyingInstrument_70.insert(UnderlyingEndPrice_70.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_70;
      UnderlyingEndValue_70.setString("16154841");
      noUnderlyings_1_1_2.set(UnderlyingEndValue_70);
      UnderlyingInstrument_70.insert(UnderlyingEndValue_70.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_70(1246993632);
      noUnderlyings_1_1_2.set(UnderlyingExerciseStyle_70);
      UnderlyingInstrument_70.insert(UnderlyingExerciseStyle_70.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_70;
      UnderlyingFXRate_70.setString("1987233");
      noUnderlyings_1_1_2.set(UnderlyingFXRate_70);
      UnderlyingInstrument_70.insert(UnderlyingFXRate_70.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_70('D');
      noUnderlyings_1_1_2.set(UnderlyingFXRateCalc_70);
      UnderlyingInstrument_70.insert(UnderlyingFXRateCalc_70.getString());
      FIX::UnderlyingFactor UnderlyingFactor_70;
      UnderlyingFactor_70.setString("19067736");
      noUnderlyings_1_1_2.set(UnderlyingFactor_70);
      UnderlyingInstrument_70.insert(UnderlyingFactor_70.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_70(1496314859);
      noUnderlyings_1_1_2.set(UnderlyingFlowScheduleType_70);
      UnderlyingInstrument_70.insert(UnderlyingFlowScheduleType_70.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_70("STRING_882946182");
      noUnderlyings_1_1_2.set(UnderlyingInstrRegistry_70);
      UnderlyingInstrument_70.insert(UnderlyingInstrRegistry_70.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_70("LOCALMKTDATE_2139373966");
      noUnderlyings_1_1_2.set(UnderlyingIssueDate_70);
      UnderlyingInstrument_70.insert(UnderlyingIssueDate_70.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_70("STRING_1489915894");
      noUnderlyings_1_1_2.set(UnderlyingIssuer_70);
      UnderlyingInstrument_70.insert(UnderlyingIssuer_70.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_70("STRING_1557785210");
      noUnderlyings_1_1_2.set(UnderlyingLocaleOfIssue_70);
      UnderlyingInstrument_70.insert(UnderlyingLocaleOfIssue_70.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_70("LOCALMKTDATE_1426056409");
      noUnderlyings_1_1_2.set(UnderlyingMaturityDate_70);
      UnderlyingInstrument_70.insert(UnderlyingMaturityDate_70.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_70("MONTHYEAR_1879165454");
      noUnderlyings_1_1_2.set(UnderlyingMaturityMonthYear_70);
      UnderlyingInstrument_70.insert(UnderlyingMaturityMonthYear_70.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_70("TZTIMEONLY_1556557530");
      noUnderlyings_1_1_2.set(UnderlyingMaturityTime_70);
      UnderlyingInstrument_70.insert(UnderlyingMaturityTime_70.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_70;
      UnderlyingNotionalPercentageOutstanding_70.setString("58.160000");
      noUnderlyings_1_1_2.set(UnderlyingNotionalPercentageOutstanding_70);
      UnderlyingInstrument_70.insert(UnderlyingNotionalPercentageOutstanding_70.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_70('1');
      noUnderlyings_1_1_2.set(UnderlyingOptAttribute_70);
      UnderlyingInstrument_70.insert(UnderlyingOptAttribute_70.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_70;
      UnderlyingOriginalNotionalPercentageOutstanding_70.setString("8.370000");
      noUnderlyings_1_1_2.set(UnderlyingOriginalNotionalPercentageOutstanding_70);
      UnderlyingInstrument_70.insert(UnderlyingOriginalNotionalPercentageOutstanding_70.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_70("STRING_1070754173");
      noUnderlyings_1_1_2.set(UnderlyingPriceUnitOfMeasure_70);
      UnderlyingInstrument_70.insert(UnderlyingPriceUnitOfMeasure_70.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_70;
      UnderlyingPriceUnitOfMeasureQty_70.setString("20576590");
      noUnderlyings_1_1_2.set(UnderlyingPriceUnitOfMeasureQty_70);
      UnderlyingInstrument_70.insert(UnderlyingPriceUnitOfMeasureQty_70.getString());
      FIX::UnderlyingProduct UnderlyingProduct_70(525044331);
      noUnderlyings_1_1_2.set(UnderlyingProduct_70);
      UnderlyingInstrument_70.insert(UnderlyingProduct_70.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_70(253070694);
      noUnderlyings_1_1_2.set(UnderlyingPutOrCall_70);
      UnderlyingInstrument_70.insert(UnderlyingPutOrCall_70.getString());
      FIX::UnderlyingPx UnderlyingPx_70;
      UnderlyingPx_70.setString("107861");
      noUnderlyings_1_1_2.set(UnderlyingPx_70);
      UnderlyingInstrument_70.insert(UnderlyingPx_70.getString());
      FIX::UnderlyingQty UnderlyingQty_70;
      UnderlyingQty_70.setString("8075025");
      noUnderlyings_1_1_2.set(UnderlyingQty_70);
      UnderlyingInstrument_70.insert(UnderlyingQty_70.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_70("LOCALMKTDATE_1409184916");
      noUnderlyings_1_1_2.set(UnderlyingRedemptionDate_70);
      UnderlyingInstrument_70.insert(UnderlyingRedemptionDate_70.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_70("STRING_414782996");
      noUnderlyings_1_1_2.set(UnderlyingRepoCollateralSecurityType_70);
      UnderlyingInstrument_70.insert(UnderlyingRepoCollateralSecurityType_70.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_70;
      UnderlyingRepurchaseRate_70.setString("16.400000");
      noUnderlyings_1_1_2.set(UnderlyingRepurchaseRate_70);
      UnderlyingInstrument_70.insert(UnderlyingRepurchaseRate_70.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_70(265347613);
      noUnderlyings_1_1_2.set(UnderlyingRepurchaseTerm_70);
      UnderlyingInstrument_70.insert(UnderlyingRepurchaseTerm_70.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_70("STRING_155156448");
      noUnderlyings_1_1_2.set(UnderlyingRestructuringType_70);
      UnderlyingInstrument_70.insert(UnderlyingRestructuringType_70.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_70("STRING_724303916");
      noUnderlyings_1_1_2.set(UnderlyingSecurityDesc_70);
      UnderlyingInstrument_70.insert(UnderlyingSecurityDesc_70.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_70("EXCHANGE_1652076593");
      noUnderlyings_1_1_2.set(UnderlyingSecurityExchange_70);
      UnderlyingInstrument_70.insert(UnderlyingSecurityExchange_70.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_70("STRING_9608259");
      noUnderlyings_1_1_2.set(UnderlyingSecurityID_70);
      UnderlyingInstrument_70.insert(UnderlyingSecurityID_70.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_70("STRING_849468928");
      noUnderlyings_1_1_2.set(UnderlyingSecurityIDSource_70);
      UnderlyingInstrument_70.insert(UnderlyingSecurityIDSource_70.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_70("STRING_1120077074");
      noUnderlyings_1_1_2.set(UnderlyingSecuritySubType_70);
      UnderlyingInstrument_70.insert(UnderlyingSecuritySubType_70.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_70("STRING_1256601892");
      noUnderlyings_1_1_2.set(UnderlyingSecurityType_70);
      UnderlyingInstrument_70.insert(UnderlyingSecurityType_70.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_70("STRING_1048192299");
      noUnderlyings_1_1_2.set(UnderlyingSeniority_70);
      UnderlyingInstrument_70.insert(UnderlyingSeniority_70.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_70("STRING_1237357378");
      noUnderlyings_1_1_2.set(UnderlyingSettlMethod_70);
      UnderlyingInstrument_70.insert(UnderlyingSettlMethod_70.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_70(2);
      noUnderlyings_1_1_2.set(UnderlyingSettlementType_70);
      UnderlyingInstrument_70.insert(UnderlyingSettlementType_70.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_70;
      UnderlyingStartValue_70.setString("3970235");
      noUnderlyings_1_1_2.set(UnderlyingStartValue_70);
      UnderlyingInstrument_70.insert(UnderlyingStartValue_70.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_70("STRING_2120303561");
      noUnderlyings_1_1_2.set(UnderlyingStateOrProvinceOfIssue_70);
      UnderlyingInstrument_70.insert(UnderlyingStateOrProvinceOfIssue_70.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_70("CAN");
      noUnderlyings_1_1_2.set(UnderlyingStrikeCurrency_70);
      UnderlyingInstrument_70.insert(UnderlyingStrikeCurrency_70.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_70;
      UnderlyingStrikePrice_70.setString("15306051");
      noUnderlyings_1_1_2.set(UnderlyingStrikePrice_70);
      UnderlyingInstrument_70.insert(UnderlyingStrikePrice_70.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_70("STRING_286354994");
      noUnderlyings_1_1_2.set(UnderlyingSymbol_70);
      UnderlyingInstrument_70.insert(UnderlyingSymbol_70.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_70("STRING_1618621211");
      noUnderlyings_1_1_2.set(UnderlyingSymbolSfx_70);
      UnderlyingInstrument_70.insert(UnderlyingSymbolSfx_70.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_70("STRING_939679005");
      noUnderlyings_1_1_2.set(UnderlyingTimeUnit_70);
      UnderlyingInstrument_70.insert(UnderlyingTimeUnit_70.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_70("STRING_922360810");
      noUnderlyings_1_1_2.set(UnderlyingUnitOfMeasure_70);
      UnderlyingInstrument_70.insert(UnderlyingUnitOfMeasure_70.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_70;
      UnderlyingUnitOfMeasureQty_70.setString("17982468");
      noUnderlyings_1_1_2.set(UnderlyingUnitOfMeasureQty_70);
      UnderlyingInstrument_70.insert(UnderlyingUnitOfMeasureQty_70.getString());
      all_values.push_back(UnderlyingInstrument_70);
      all_compo_names.insert("UnderlyingInstrument");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_2_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_144;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_144("STRING_1993114983");
        noUnderlyingSecurityAltID_1_2_2_0.set(UnderlyingSecurityAltID_144);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_144.insert(UnderlyingSecurityAltID_144.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_144("STRING_1708422274");
        noUnderlyingSecurityAltID_1_2_2_0.set(UnderlyingSecurityAltIDSource_144);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_144.insert(UnderlyingSecurityAltIDSource_144.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_144);
        all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_2.addGroup(noUnderlyingSecurityAltID_1_2_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_2_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_145;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_145("STRING_1305540526");
        noUnderlyingSecurityAltID_1_2_2_1.set(UnderlyingSecurityAltID_145);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_145.insert(UnderlyingSecurityAltID_145.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_145("STRING_98702029");
        noUnderlyingSecurityAltID_1_2_2_1.set(UnderlyingSecurityAltIDSource_145);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_145.insert(UnderlyingSecurityAltIDSource_145.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_145);
        all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_2.addGroup(noUnderlyingSecurityAltID_1_2_2_1);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_2_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_140;
        FIX::UnderlyingStipType UnderlyingStipType_140("STRING_2113043026");
        noUnderlyingStips_1_2_2_0.set(UnderlyingStipType_140);
        UnderlyingStipulations_NoUnderlyingStips_140.insert(UnderlyingStipType_140.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_140("STRING_1507886946");
        noUnderlyingStips_1_2_2_0.set(UnderlyingStipValue_140);
        UnderlyingStipulations_NoUnderlyingStips_140.insert(UnderlyingStipValue_140.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_140);
        all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

        noUnderlyings_1_1_2.addGroup(noUnderlyingStips_1_2_2_0);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_2_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_133;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_133("STRING_992821019");
        noUndlyInstrumentParties_1_2_2_0.set(UnderlyingInstrumentPartyID_133);
        UndlyInstrumentParties_NoUndlyInstrumentParties_133.insert(UnderlyingInstrumentPartyID_133.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_133('1');
        noUndlyInstrumentParties_1_2_2_0.set(UnderlyingInstrumentPartyIDSource_133);
        UndlyInstrumentParties_NoUndlyInstrumentParties_133.insert(UnderlyingInstrumentPartyIDSource_133.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_133(141664230);
        noUndlyInstrumentParties_1_2_2_0.set(UnderlyingInstrumentPartyRole_133);
        UndlyInstrumentParties_NoUndlyInstrumentParties_133.insert(UnderlyingInstrumentPartyRole_133.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_133);
        all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_268;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_268("STRING_1277827505");
          noUndlyInstrumentPartySubIDs_1_2_0_3_0.set(UnderlyingInstrumentPartySubID_268);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_268.insert(UnderlyingInstrumentPartySubID_268.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_268(151272489);
          noUndlyInstrumentPartySubIDs_1_2_0_3_0.set(UnderlyingInstrumentPartySubIDType_268);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_268.insert(UnderlyingInstrumentPartySubIDType_268.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_268);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_2_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_2_0_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_269;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_269("STRING_419110216");
          noUndlyInstrumentPartySubIDs_1_2_0_3_1.set(UnderlyingInstrumentPartySubID_269);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_269.insert(UnderlyingInstrumentPartySubID_269.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_269(250420931);
          noUndlyInstrumentPartySubIDs_1_2_0_3_1.set(UnderlyingInstrumentPartySubIDType_269);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_269.insert(UnderlyingInstrumentPartySubIDType_269.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_269);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_2_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_2_0_3_1);
        }
        noUnderlyings_1_1_2.addGroup(noUndlyInstrumentParties_1_2_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_2_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_134;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_134("STRING_1407874381");
        noUndlyInstrumentParties_1_2_2_1.set(UnderlyingInstrumentPartyID_134);
        UndlyInstrumentParties_NoUndlyInstrumentParties_134.insert(UnderlyingInstrumentPartyID_134.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_134('1');
        noUndlyInstrumentParties_1_2_2_1.set(UnderlyingInstrumentPartyIDSource_134);
        UndlyInstrumentParties_NoUndlyInstrumentParties_134.insert(UnderlyingInstrumentPartyIDSource_134.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_134(1487778309);
        noUndlyInstrumentParties_1_2_2_1.set(UnderlyingInstrumentPartyRole_134);
        UndlyInstrumentParties_NoUndlyInstrumentParties_134.insert(UnderlyingInstrumentPartyRole_134.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_134);
        all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_270;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_270("STRING_1864326026");
          noUndlyInstrumentPartySubIDs_1_2_1_3_0.set(UnderlyingInstrumentPartySubID_270);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_270.insert(UnderlyingInstrumentPartySubID_270.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_270(1460598222);
          noUndlyInstrumentPartySubIDs_1_2_1_3_0.set(UnderlyingInstrumentPartySubIDType_270);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_270.insert(UnderlyingInstrumentPartySubIDType_270.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_270);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_2_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_2_1_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_1_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_271;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_271("STRING_1284064880");
          noUndlyInstrumentPartySubIDs_1_2_1_3_1.set(UnderlyingInstrumentPartySubID_271);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_271.insert(UnderlyingInstrumentPartySubID_271.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_271(1603781783);
          noUndlyInstrumentPartySubIDs_1_2_1_3_1.set(UnderlyingInstrumentPartySubIDType_271);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_271.insert(UnderlyingInstrumentPartySubIDType_271.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_271);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_2_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_2_1_3_1);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_1_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_272;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_272("STRING_843719697");
          noUndlyInstrumentPartySubIDs_1_2_1_3_2.set(UnderlyingInstrumentPartySubID_272);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_272.insert(UnderlyingInstrumentPartySubID_272.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_272(1570419874);
          noUndlyInstrumentPartySubIDs_1_2_1_3_2.set(UnderlyingInstrumentPartySubIDType_272);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_272.insert(UnderlyingInstrumentPartySubIDType_272.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_272);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_2_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_2_1_3_2);
        }
        noUnderlyings_1_1_2.addGroup(noUndlyInstrumentParties_1_2_2_1);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_2_2_2;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_135;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_135("STRING_1074919346");
        noUndlyInstrumentParties_1_2_2_2.set(UnderlyingInstrumentPartyID_135);
        UndlyInstrumentParties_NoUndlyInstrumentParties_135.insert(UnderlyingInstrumentPartyID_135.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_135('1');
        noUndlyInstrumentParties_1_2_2_2.set(UnderlyingInstrumentPartyIDSource_135);
        UndlyInstrumentParties_NoUndlyInstrumentParties_135.insert(UnderlyingInstrumentPartyIDSource_135.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_135(345297036);
        noUndlyInstrumentParties_1_2_2_2.set(UnderlyingInstrumentPartyRole_135);
        UndlyInstrumentParties_NoUndlyInstrumentParties_135.insert(UnderlyingInstrumentPartyRole_135.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_135);
        all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_273;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_273("STRING_416411250");
          noUndlyInstrumentPartySubIDs_1_2_2_3_0.set(UnderlyingInstrumentPartySubID_273);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_273.insert(UnderlyingInstrumentPartySubID_273.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_273(190928371);
          noUndlyInstrumentPartySubIDs_1_2_2_3_0.set(UnderlyingInstrumentPartySubIDType_273);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_273.insert(UnderlyingInstrumentPartySubIDType_273.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_273);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_2_2_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_3_0);
        }
        noUnderlyings_1_1_2.addGroup(noUndlyInstrumentParties_1_2_2_2);
      }
      noOrders_0_1.addGroup(noUnderlyings_1_1_2);
    }
    // YieldData
    multiset<string> YieldData_12;
    FIX::Yield Yield_12;
    Yield_12.setString("11.600000");
    noOrders_0_1.set(Yield_12);
    YieldData_12.insert(Yield_12.getString());
    FIX::YieldCalcDate YieldCalcDate_12("LOCALMKTDATE_1721951776");
    noOrders_0_1.set(YieldCalcDate_12);
    YieldData_12.insert(YieldCalcDate_12.getString());
    FIX::YieldRedemptionDate YieldRedemptionDate_12("LOCALMKTDATE_289630401");
    noOrders_0_1.set(YieldRedemptionDate_12);
    YieldData_12.insert(YieldRedemptionDate_12.getString());
    FIX::YieldRedemptionPrice YieldRedemptionPrice_12;
    YieldRedemptionPrice_12.setString("20058295");
    noOrders_0_1.set(YieldRedemptionPrice_12);
    YieldData_12.insert(YieldRedemptionPrice_12.getString());
    FIX::YieldRedemptionPriceType YieldRedemptionPriceType_12(1687511155);
    noOrders_0_1.set(YieldRedemptionPriceType_12);
    YieldData_12.insert(YieldRedemptionPriceType_12.getString());
    FIX::YieldType YieldType_12("STRING_CURRENT");
    noOrders_0_1.set(YieldType_12);
    YieldData_12.insert(YieldType_12.getString());
    all_values.push_back(YieldData_12);
    all_compo_names.insert("YieldData");

    msg.addGroup(noOrders_0_1);
  }
  {
    FIX50SP2::NewOrderList::NoOrders noOrders_0_2;
    // ListOrdGrp.NoOrders
    multiset<string> ListOrdGrp_NoOrders_2;
    FIX::Account Account_22("STRING_1992337376");
    noOrders_0_2.set(Account_22);
    ListOrdGrp_NoOrders_2.insert(Account_22.getString());
    FIX::AccountType AccountType_19(1);
    noOrders_0_2.set(AccountType_19);
    ListOrdGrp_NoOrders_2.insert(AccountType_19.getString());
    FIX::AcctIDSource AcctIDSource_15(3);
    noOrders_0_2.set(AcctIDSource_15);
    ListOrdGrp_NoOrders_2.insert(AcctIDSource_15.getString());
    FIX::AllocID AllocID_17("STRING_2134001606");
    noOrders_0_2.set(AllocID_17);
    ListOrdGrp_NoOrders_2.insert(AllocID_17.getString());
    FIX::BookingType BookingType_27(0);
    noOrders_0_2.set(BookingType_27);
    ListOrdGrp_NoOrders_2.insert(BookingType_27.getString());
    FIX::BookingUnit BookingUnit_10('2');
    noOrders_0_2.set(BookingUnit_10);
    ListOrdGrp_NoOrders_2.insert(BookingUnit_10.getString());
    FIX::CashMargin CashMargin_10('2');
    noOrders_0_2.set(CashMargin_10);
    ListOrdGrp_NoOrders_2.insert(CashMargin_10.getString());
    FIX::ClOrdID ClOrdID_31("STRING_521600029");
    noOrders_0_2.set(ClOrdID_31);
    ListOrdGrp_NoOrders_2.insert(ClOrdID_31.getString());
    FIX::ClOrdLinkID ClOrdLinkID_11("STRING_804033046");
    noOrders_0_2.set(ClOrdLinkID_11);
    ListOrdGrp_NoOrders_2.insert(ClOrdLinkID_11.getString());
    FIX::ClearingFeeIndicator ClearingFeeIndicator_14("STRING_F");
    noOrders_0_2.set(ClearingFeeIndicator_14);
    ListOrdGrp_NoOrders_2.insert(ClearingFeeIndicator_14.getString());
    FIX::ComplianceID ComplianceID_7("STRING_1988902545");
    noOrders_0_2.set(ComplianceID_7);
    ListOrdGrp_NoOrders_2.insert(ComplianceID_7.getString());
    FIX::CoveredOrUncovered CoveredOrUncovered_9(0);
    noOrders_0_2.set(CoveredOrUncovered_9);
    ListOrdGrp_NoOrders_2.insert(CoveredOrUncovered_9.getString());
    FIX::Currency Currency_48("CHF");
    noOrders_0_2.set(Currency_48);
    ListOrdGrp_NoOrders_2.insert(Currency_48.getString());
    FIX::CustOrderCapacity CustOrderCapacity_13(3);
    noOrders_0_2.set(CustOrderCapacity_13);
    ListOrdGrp_NoOrders_2.insert(CustOrderCapacity_13.getString());
    FIX::DayBookingInst DayBookingInst_10('2');
    noOrders_0_2.set(DayBookingInst_10);
    ListOrdGrp_NoOrders_2.insert(DayBookingInst_10.getString());
    FIX::Designation Designation_6("STRING_1162043059");
    noOrders_0_2.set(Designation_6);
    ListOrdGrp_NoOrders_2.insert(Designation_6.getString());
    FIX::EffectiveTime EffectiveTime_6(FIX::UTCTIMESTAMP(7, 37, 3, 19, 9, 2001));
    noOrders_0_2.set(EffectiveTime_6);
    ListOrdGrp_NoOrders_2.insert(EffectiveTime_6.getString());
    FIX::EncodedText EncodedText_59("DATA_917690342");
    noOrders_0_2.set(EncodedText_59);
    ListOrdGrp_NoOrders_2.insert(EncodedText_59.getString());
    FIX::EncodedTextLen EncodedTextLen_59(1101782452);
    noOrders_0_2.set(EncodedTextLen_59);
    ListOrdGrp_NoOrders_2.insert(EncodedTextLen_59.getString());
    FIX::ExDestination ExDestination_5("EXCHANGE_2075440061");
    noOrders_0_2.set(ExDestination_5);
    ListOrdGrp_NoOrders_2.insert(ExDestination_5.getString());
    FIX::ExDestinationIDSource ExDestinationIDSource_5('E');
    noOrders_0_2.set(ExDestinationIDSource_5);
    ListOrdGrp_NoOrders_2.insert(ExDestinationIDSource_5.getString());
    FIX::ExecInst ExecInst_9("MULTIPLECHARVALUE_t");
    noOrders_0_2.set(ExecInst_9);
    ListOrdGrp_NoOrders_2.insert(ExecInst_9.getString());
    FIX::ExpireDate ExpireDate_10("LOCALMKTDATE_1615467568");
    noOrders_0_2.set(ExpireDate_10);
    ListOrdGrp_NoOrders_2.insert(ExpireDate_10.getString());
    FIX::ExpireTime ExpireTime_11(FIX::UTCTIMESTAMP(23, 6, 13, 6, 5, 2012));
    noOrders_0_2.set(ExpireTime_11);
    ListOrdGrp_NoOrders_2.insert(ExpireTime_11.getString());
    FIX::ForexReq ForexReq_10(true);
    noOrders_0_2.set(ForexReq_10);
    ListOrdGrp_NoOrders_2.insert(ForexReq_10.getString());
    FIX::GTBookingInst GTBookingInst_6(2);
    noOrders_0_2.set(GTBookingInst_6);
    ListOrdGrp_NoOrders_2.insert(GTBookingInst_6.getString());
    FIX::HandlInst HandlInst_6('3');
    noOrders_0_2.set(HandlInst_6);
    ListOrdGrp_NoOrders_2.insert(HandlInst_6.getString());
    FIX::IOIID IOIID_6("STRING_327471715");
    noOrders_0_2.set(IOIID_6);
    ListOrdGrp_NoOrders_2.insert(IOIID_6.getString());
    FIX::ListSeqNo ListSeqNo_2(466341186);
    noOrders_0_2.set(ListSeqNo_2);
    ListOrdGrp_NoOrders_2.insert(ListSeqNo_2.getString());
    FIX::LocateReqd LocateReqd_5(false);
    noOrders_0_2.set(LocateReqd_5);
    ListOrdGrp_NoOrders_2.insert(LocateReqd_5.getString());
    FIX::MatchIncrement MatchIncrement_6;
    MatchIncrement_6.setString("19355");
    noOrders_0_2.set(MatchIncrement_6);
    ListOrdGrp_NoOrders_2.insert(MatchIncrement_6.getString());
    FIX::MaxFloor MaxFloor_6;
    MaxFloor_6.setString("246024");
    noOrders_0_2.set(MaxFloor_6);
    ListOrdGrp_NoOrders_2.insert(MaxFloor_6.getString());
    FIX::MaxPriceLevels MaxPriceLevels_6(1092554205);
    noOrders_0_2.set(MaxPriceLevels_6);
    ListOrdGrp_NoOrders_2.insert(MaxPriceLevels_6.getString());
    FIX::MaxShow MaxShow_6;
    MaxShow_6.setString("9604642");
    noOrders_0_2.set(MaxShow_6);
    ListOrdGrp_NoOrders_2.insert(MaxShow_6.getString());
    FIX::MinQty MinQty_9;
    MinQty_9.setString("11866455");
    noOrders_0_2.set(MinQty_9);
    ListOrdGrp_NoOrders_2.insert(MinQty_9.getString());
    FIX::OrdType OrdType_51('I');
    noOrders_0_2.set(OrdType_51);
    ListOrdGrp_NoOrders_2.insert(OrdType_51.getString());
    FIX::OrderCapacity OrderCapacity_28('R');
    noOrders_0_2.set(OrderCapacity_28);
    ListOrdGrp_NoOrders_2.insert(OrderCapacity_28.getString());
    FIX::OrderQty2 OrderQty2_17;
    OrderQty2_17.setString("12761242");
    noOrders_0_2.set(OrderQty2_17);
    ListOrdGrp_NoOrders_2.insert(OrderQty2_17.getString());
    FIX::OrderRestrictions OrderRestrictions_25("MULTIPLECHARVALUE_1");
    noOrders_0_2.set(OrderRestrictions_25);
    ListOrdGrp_NoOrders_2.insert(OrderRestrictions_25.getString());
    FIX::ParticipationRate ParticipationRate_6;
    ParticipationRate_6.setString("11.590000");
    noOrders_0_2.set(ParticipationRate_6);
    ListOrdGrp_NoOrders_2.insert(ParticipationRate_6.getString());
    FIX::PositionEffect PositionEffect_13('C');
    noOrders_0_2.set(PositionEffect_13);
    ListOrdGrp_NoOrders_2.insert(PositionEffect_13.getString());
    FIX::PreTradeAnonymity PreTradeAnonymity_10(false);
    noOrders_0_2.set(PreTradeAnonymity_10);
    ListOrdGrp_NoOrders_2.insert(PreTradeAnonymity_10.getString());
    FIX::PreallocMethod PreallocMethod_10('0');
    noOrders_0_2.set(PreallocMethod_10);
    ListOrdGrp_NoOrders_2.insert(PreallocMethod_10.getString());
    FIX::PrevClosePx PrevClosePx_6;
    PrevClosePx_6.setString("10455843");
    noOrders_0_2.set(PrevClosePx_6);
    ListOrdGrp_NoOrders_2.insert(PrevClosePx_6.getString());
    FIX::Price Price_17;
    Price_17.setString("16122379");
    noOrders_0_2.set(Price_17);
    ListOrdGrp_NoOrders_2.insert(Price_17.getString());
    FIX::Price2 Price2_2;
    Price2_2.setString("20462185");
    noOrders_0_2.set(Price2_2);
    ListOrdGrp_NoOrders_2.insert(Price2_2.getString());
    FIX::PriceProtectionScope PriceProtectionScope_6('2');
    noOrders_0_2.set(PriceProtectionScope_6);
    ListOrdGrp_NoOrders_2.insert(PriceProtectionScope_6.getString());
    FIX::PriceType PriceType_31(8);
    noOrders_0_2.set(PriceType_31);
    ListOrdGrp_NoOrders_2.insert(PriceType_31.getString());
    FIX::ProcessCode ProcessCode_10('2');
    noOrders_0_2.set(ProcessCode_10);
    ListOrdGrp_NoOrders_2.insert(ProcessCode_10.getString());
    FIX::QtyType QtyType_22(2);
    noOrders_0_2.set(QtyType_22);
    ListOrdGrp_NoOrders_2.insert(QtyType_22.getString());
    FIX::QuoteID QuoteID_7("STRING_1081054286");
    noOrders_0_2.set(QuoteID_7);
    ListOrdGrp_NoOrders_2.insert(QuoteID_7.getString());
    FIX::RefOrderID RefOrderID_2("STRING_889228445");
    noOrders_0_2.set(RefOrderID_2);
    ListOrdGrp_NoOrders_2.insert(RefOrderID_2.getString());
    FIX::RefOrderIDSource RefOrderIDSource_2('4');
    noOrders_0_2.set(RefOrderIDSource_2);
    ListOrdGrp_NoOrders_2.insert(RefOrderIDSource_2.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_29("STRING_1184376546");
    noOrders_0_2.set(SecondaryClOrdID_29);
    ListOrdGrp_NoOrders_2.insert(SecondaryClOrdID_29.getString());
    FIX::SettlCurrency SettlCurrency_18("EUR");
    noOrders_0_2.set(SettlCurrency_18);
    ListOrdGrp_NoOrders_2.insert(SettlCurrency_18.getString());
    FIX::SettlDate SettlDate_41("LOCALMKTDATE_1809298835");
    noOrders_0_2.set(SettlDate_41);
    ListOrdGrp_NoOrders_2.insert(SettlDate_41.getString());
    FIX::SettlDate2 SettlDate2_17("LOCALMKTDATE_919280180");
    noOrders_0_2.set(SettlDate2_17);
    ListOrdGrp_NoOrders_2.insert(SettlDate2_17.getString());
    FIX::SettlInstMode SettlInstMode_2('3');
    noOrders_0_2.set(SettlInstMode_2);
    ListOrdGrp_NoOrders_2.insert(SettlInstMode_2.getString());
    FIX::SettlType SettlType_21("STRING_B");
    noOrders_0_2.set(SettlType_21);
    ListOrdGrp_NoOrders_2.insert(SettlType_21.getString());
    FIX::Side Side_30('8');
    noOrders_0_2.set(Side_30);
    ListOrdGrp_NoOrders_2.insert(Side_30.getString());
    FIX::SideValueInd SideValueInd_3(2);
    noOrders_0_2.set(SideValueInd_3);
    ListOrdGrp_NoOrders_2.insert(SideValueInd_3.getString());
    FIX::SolicitedFlag SolicitedFlag_10(true);
    noOrders_0_2.set(SolicitedFlag_10);
    ListOrdGrp_NoOrders_2.insert(SolicitedFlag_10.getString());
    FIX::StopPx StopPx_6;
    StopPx_6.setString("14994626");
    noOrders_0_2.set(StopPx_6);
    ListOrdGrp_NoOrders_2.insert(StopPx_6.getString());
    FIX::TargetStrategy TargetStrategy_6(3);
    noOrders_0_2.set(TargetStrategy_6);
    ListOrdGrp_NoOrders_2.insert(TargetStrategy_6.getString());
    FIX::TargetStrategyParameters TargetStrategyParameters_6("STRING_1339404357");
    noOrders_0_2.set(TargetStrategyParameters_6);
    ListOrdGrp_NoOrders_2.insert(TargetStrategyParameters_6.getString());
    FIX::Text Text_59("STRING_745695198");
    noOrders_0_2.set(Text_59);
    ListOrdGrp_NoOrders_2.insert(Text_59.getString());
    FIX::TimeInForce TimeInForce_35('9');
    noOrders_0_2.set(TimeInForce_35);
    ListOrdGrp_NoOrders_2.insert(TimeInForce_35.getString());
    FIX::TradeDate TradeDate_23("LOCALMKTDATE_468044987");
    noOrders_0_2.set(TradeDate_23);
    ListOrdGrp_NoOrders_2.insert(TradeDate_23.getString());
    FIX::TradeOriginationDate TradeOriginationDate_15("LOCALMKTDATE_2076488419");
    noOrders_0_2.set(TradeOriginationDate_15);
    ListOrdGrp_NoOrders_2.insert(TradeOriginationDate_15.getString());
    FIX::TransactTime TransactTime_44(FIX::UTCTIMESTAMP(22, 36, 5, 9, 4, 2002));
    noOrders_0_2.set(TransactTime_44);
    ListOrdGrp_NoOrders_2.insert(TransactTime_44.getString());
    all_values.push_back(ListOrdGrp_NoOrders_2);
    all_compo_names.insert("ListOrdGrp.NoOrders");

    // CommissionData
    multiset<string> CommissionData_18;
    FIX::CommCurrency CommCurrency_18("CHF");
    noOrders_0_2.set(CommCurrency_18);
    CommissionData_18.insert(CommCurrency_18.getString());
    FIX::CommType CommType_18('1');
    noOrders_0_2.set(CommType_18);
    CommissionData_18.insert(CommType_18.getString());
    FIX::Commission Commission_18;
    Commission_18.setString("19788716");
    noOrders_0_2.set(Commission_18);
    CommissionData_18.insert(Commission_18.getString());
    FIX::FundRenewWaiv FundRenewWaiv_18('Y');
    noOrders_0_2.set(FundRenewWaiv_18);
    CommissionData_18.insert(FundRenewWaiv_18.getString());
    all_values.push_back(CommissionData_18);
    all_compo_names.insert("CommissionData");

    // DiscretionInstructions
    multiset<string> DiscretionInstructions_6;
    FIX::DiscretionInst DiscretionInst_6('7');
    noOrders_0_2.set(DiscretionInst_6);
    DiscretionInstructions_6.insert(DiscretionInst_6.getString());
    FIX::DiscretionLimitType DiscretionLimitType_6(1);
    noOrders_0_2.set(DiscretionLimitType_6);
    DiscretionInstructions_6.insert(DiscretionLimitType_6.getString());
    FIX::DiscretionMoveType DiscretionMoveType_6(1);
    noOrders_0_2.set(DiscretionMoveType_6);
    DiscretionInstructions_6.insert(DiscretionMoveType_6.getString());
    FIX::DiscretionOffsetType DiscretionOffsetType_6(1);
    noOrders_0_2.set(DiscretionOffsetType_6);
    DiscretionInstructions_6.insert(DiscretionOffsetType_6.getString());
    FIX::DiscretionOffsetValue DiscretionOffsetValue_6;
    DiscretionOffsetValue_6.setString("15226175");
    noOrders_0_2.set(DiscretionOffsetValue_6);
    DiscretionInstructions_6.insert(DiscretionOffsetValue_6.getString());
    FIX::DiscretionRoundDirection DiscretionRoundDirection_6(1);
    noOrders_0_2.set(DiscretionRoundDirection_6);
    DiscretionInstructions_6.insert(DiscretionRoundDirection_6.getString());
    FIX::DiscretionScope DiscretionScope_6(2);
    noOrders_0_2.set(DiscretionScope_6);
    DiscretionInstructions_6.insert(DiscretionScope_6.getString());
    all_values.push_back(DiscretionInstructions_6);
    all_compo_names.insert("DiscretionInstructions");

    // DisplayInstruction
    multiset<string> DisplayInstruction_6;
    FIX::DisplayHighQty DisplayHighQty_6;
    DisplayHighQty_6.setString("20866075");
    noOrders_0_2.set(DisplayHighQty_6);
    DisplayInstruction_6.insert(DisplayHighQty_6.getString());
    FIX::DisplayLowQty DisplayLowQty_6;
    DisplayLowQty_6.setString("20661811");
    noOrders_0_2.set(DisplayLowQty_6);
    DisplayInstruction_6.insert(DisplayLowQty_6.getString());
    FIX::DisplayMethod DisplayMethod_6('2');
    noOrders_0_2.set(DisplayMethod_6);
    DisplayInstruction_6.insert(DisplayMethod_6.getString());
    FIX::DisplayMinIncr DisplayMinIncr_6;
    DisplayMinIncr_6.setString("5050493");
    noOrders_0_2.set(DisplayMinIncr_6);
    DisplayInstruction_6.insert(DisplayMinIncr_6.getString());
    FIX::DisplayQty DisplayQty_6;
    DisplayQty_6.setString("714563");
    noOrders_0_2.set(DisplayQty_6);
    DisplayInstruction_6.insert(DisplayQty_6.getString());
    FIX::DisplayWhen DisplayWhen_6('1');
    noOrders_0_2.set(DisplayWhen_6);
    DisplayInstruction_6.insert(DisplayWhen_6.getString());
    FIX::RefreshQty RefreshQty_6;
    RefreshQty_6.setString("20314390");
    noOrders_0_2.set(RefreshQty_6);
    DisplayInstruction_6.insert(RefreshQty_6.getString());
    FIX::SecondaryDisplayQty SecondaryDisplayQty_6;
    SecondaryDisplayQty_6.setString("14108606");
    noOrders_0_2.set(SecondaryDisplayQty_6);
    DisplayInstruction_6.insert(SecondaryDisplayQty_6.getString());
    all_values.push_back(DisplayInstruction_6);
    all_compo_names.insert("DisplayInstruction");

    // Instrument
    multiset<string> Instrument_50;
    FIX::AttachmentPoint AttachmentPoint_50;
    AttachmentPoint_50.setString("85.960000");
    noOrders_0_2.set(AttachmentPoint_50);
    Instrument_50.insert(AttachmentPoint_50.getString());
    FIX::CFICode CFICode_50("STRING_604790730");
    noOrders_0_2.set(CFICode_50);
    Instrument_50.insert(CFICode_50.getString());
    FIX::CPProgram CPProgram_50(2);
    noOrders_0_2.set(CPProgram_50);
    Instrument_50.insert(CPProgram_50.getString());
    FIX::CPRegType CPRegType_50("STRING_1658873367");
    noOrders_0_2.set(CPRegType_50);
    Instrument_50.insert(CPRegType_50.getString());
    FIX::CapPrice CapPrice_50;
    CapPrice_50.setString("12468335");
    noOrders_0_2.set(CapPrice_50);
    Instrument_50.insert(CapPrice_50.getString());
    FIX::ContractMultiplier ContractMultiplier_50;
    ContractMultiplier_50.setString("1432689");
    noOrders_0_2.set(ContractMultiplier_50);
    Instrument_50.insert(ContractMultiplier_50.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_50(2);
    noOrders_0_2.set(ContractMultiplierUnit_50);
    Instrument_50.insert(ContractMultiplierUnit_50.getString());
    FIX::ContractSettlMonth ContractSettlMonth_50("MONTHYEAR_580290518");
    noOrders_0_2.set(ContractSettlMonth_50);
    Instrument_50.insert(ContractSettlMonth_50.getString());
    FIX::CountryOfIssue CountryOfIssue_50("COUNTRY_1600700212");
    noOrders_0_2.set(CountryOfIssue_50);
    Instrument_50.insert(CountryOfIssue_50.getString());
    FIX::CouponPaymentDate CouponPaymentDate_50("LOCALMKTDATE_55232895");
    noOrders_0_2.set(CouponPaymentDate_50);
    Instrument_50.insert(CouponPaymentDate_50.getString());
    FIX::CouponRate CouponRate_50;
    CouponRate_50.setString("61.130000");
    noOrders_0_2.set(CouponRate_50);
    Instrument_50.insert(CouponRate_50.getString());
    FIX::CreditRating CreditRating_50("STRING_768876975");
    noOrders_0_2.set(CreditRating_50);
    Instrument_50.insert(CreditRating_50.getString());
    FIX::DatedDate DatedDate_50("LOCALMKTDATE_66011634");
    noOrders_0_2.set(DatedDate_50);
    Instrument_50.insert(DatedDate_50.getString());
    FIX::DetachmentPoint DetachmentPoint_50;
    DetachmentPoint_50.setString("74.510000");
    noOrders_0_2.set(DetachmentPoint_50);
    Instrument_50.insert(DetachmentPoint_50.getString());
    FIX::EncodedIssuer EncodedIssuer_50("DATA_600264991");
    noOrders_0_2.set(EncodedIssuer_50);
    Instrument_50.insert(EncodedIssuer_50.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_50(1157844659);
    noOrders_0_2.set(EncodedIssuerLen_50);
    Instrument_50.insert(EncodedIssuerLen_50.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_50("DATA_678273587");
    noOrders_0_2.set(EncodedSecurityDesc_50);
    Instrument_50.insert(EncodedSecurityDesc_50.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_50(1886364347);
    noOrders_0_2.set(EncodedSecurityDescLen_50);
    Instrument_50.insert(EncodedSecurityDescLen_50.getString());
    FIX::ExerciseStyle ExerciseStyle_50(2);
    noOrders_0_2.set(ExerciseStyle_50);
    Instrument_50.insert(ExerciseStyle_50.getString());
    FIX::Factor Factor_50;
    Factor_50.setString("9842793");
    noOrders_0_2.set(Factor_50);
    Instrument_50.insert(Factor_50.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_50(false);
    noOrders_0_2.set(FlexProductEligibilityIndicator_50);
    Instrument_50.insert(FlexProductEligibilityIndicator_50.getString());
    FIX::FlexibleIndicator FlexibleIndicator_50(false);
    noOrders_0_2.set(FlexibleIndicator_50);
    Instrument_50.insert(FlexibleIndicator_50.getString());
    FIX::FloorPrice FloorPrice_50;
    FloorPrice_50.setString("620816");
    noOrders_0_2.set(FloorPrice_50);
    Instrument_50.insert(FloorPrice_50.getString());
    FIX::FlowScheduleType FlowScheduleType_50(0);
    noOrders_0_2.set(FlowScheduleType_50);
    Instrument_50.insert(FlowScheduleType_50.getString());
    FIX::InstrRegistry InstrRegistry_50("STRING_995809177");
    noOrders_0_2.set(InstrRegistry_50);
    Instrument_50.insert(InstrRegistry_50.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_50('1');
    noOrders_0_2.set(InstrmtAssignmentMethod_50);
    Instrument_50.insert(InstrmtAssignmentMethod_50.getString());
    FIX::InterestAccrualDate InterestAccrualDate_50("LOCALMKTDATE_1705671515");
    noOrders_0_2.set(InterestAccrualDate_50);
    Instrument_50.insert(InterestAccrualDate_50.getString());
    FIX::IssueDate IssueDate_50("LOCALMKTDATE_1067265498");
    noOrders_0_2.set(IssueDate_50);
    Instrument_50.insert(IssueDate_50.getString());
    FIX::Issuer Issuer_50("STRING_530965752");
    noOrders_0_2.set(Issuer_50);
    Instrument_50.insert(Issuer_50.getString());
    FIX::ListMethod ListMethod_50(0);
    noOrders_0_2.set(ListMethod_50);
    Instrument_50.insert(ListMethod_50.getString());
    FIX::LocaleOfIssue LocaleOfIssue_50("STRING_330642527");
    noOrders_0_2.set(LocaleOfIssue_50);
    Instrument_50.insert(LocaleOfIssue_50.getString());
    FIX::MaturityDate MaturityDate_50("LOCALMKTDATE_113350701");
    noOrders_0_2.set(MaturityDate_50);
    Instrument_50.insert(MaturityDate_50.getString());
    FIX::MaturityMonthYear MaturityMonthYear_50("MONTHYEAR_46934049");
    noOrders_0_2.set(MaturityMonthYear_50);
    Instrument_50.insert(MaturityMonthYear_50.getString());
    FIX::MaturityTime MaturityTime_50("TZTIMEONLY_62064544");
    noOrders_0_2.set(MaturityTime_50);
    Instrument_50.insert(MaturityTime_50.getString());
    FIX::MinPriceIncrement MinPriceIncrement_50;
    MinPriceIncrement_50.setString("17722240");
    noOrders_0_2.set(MinPriceIncrement_50);
    Instrument_50.insert(MinPriceIncrement_50.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_50;
    MinPriceIncrementAmount_50.setString("12937675");
    noOrders_0_2.set(MinPriceIncrementAmount_50);
    Instrument_50.insert(MinPriceIncrementAmount_50.getString());
    FIX::NTPositionLimit NTPositionLimit_50(205333471);
    noOrders_0_2.set(NTPositionLimit_50);
    Instrument_50.insert(NTPositionLimit_50.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_50;
    NotionalPercentageOutstanding_50.setString("64.160000");
    noOrders_0_2.set(NotionalPercentageOutstanding_50);
    Instrument_50.insert(NotionalPercentageOutstanding_50.getString());
    FIX::OptAttribute OptAttribute_50('1');
    noOrders_0_2.set(OptAttribute_50);
    Instrument_50.insert(OptAttribute_50.getString());
    FIX::OptPayoutAmount OptPayoutAmount_50;
    OptPayoutAmount_50.setString("18060336");
    noOrders_0_2.set(OptPayoutAmount_50);
    Instrument_50.insert(OptPayoutAmount_50.getString());
    FIX::OptPayoutType OptPayoutType_50(2);
    noOrders_0_2.set(OptPayoutType_50);
    Instrument_50.insert(OptPayoutType_50.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_50;
    OriginalNotionalPercentageOutstanding_50.setString("5.540000");
    noOrders_0_2.set(OriginalNotionalPercentageOutstanding_50);
    Instrument_50.insert(OriginalNotionalPercentageOutstanding_50.getString());
    FIX::Pool Pool_50("STRING_427427010");
    noOrders_0_2.set(Pool_50);
    Instrument_50.insert(Pool_50.getString());
    FIX::PositionLimit PositionLimit_50(870660946);
    noOrders_0_2.set(PositionLimit_50);
    Instrument_50.insert(PositionLimit_50.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_50("STRING_INX");
    noOrders_0_2.set(PriceQuoteMethod_50);
    Instrument_50.insert(PriceQuoteMethod_50.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_50("STRING_1027692002");
    noOrders_0_2.set(PriceUnitOfMeasure_50);
    Instrument_50.insert(PriceUnitOfMeasure_50.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_50;
    PriceUnitOfMeasureQty_50.setString("20285056");
    noOrders_0_2.set(PriceUnitOfMeasureQty_50);
    Instrument_50.insert(PriceUnitOfMeasureQty_50.getString());
    FIX::Product Product_52(13);
    noOrders_0_2.set(Product_52);
    Instrument_50.insert(Product_52.getString());
    FIX::ProductComplex ProductComplex_50("STRING_766572701");
    noOrders_0_2.set(ProductComplex_50);
    Instrument_50.insert(ProductComplex_50.getString());
    FIX::PutOrCall PutOrCall_50(0);
    noOrders_0_2.set(PutOrCall_50);
    Instrument_50.insert(PutOrCall_50.getString());
    FIX::RedemptionDate RedemptionDate_50("LOCALMKTDATE_1002373632");
    noOrders_0_2.set(RedemptionDate_50);
    Instrument_50.insert(RedemptionDate_50.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_50("STRING_2028070982");
    noOrders_0_2.set(RepoCollateralSecurityType_50);
    Instrument_50.insert(RepoCollateralSecurityType_50.getString());
    FIX::RepurchaseRate RepurchaseRate_50;
    RepurchaseRate_50.setString("5.850000");
    noOrders_0_2.set(RepurchaseRate_50);
    Instrument_50.insert(RepurchaseRate_50.getString());
    FIX::RepurchaseTerm RepurchaseTerm_50(1064455250);
    noOrders_0_2.set(RepurchaseTerm_50);
    Instrument_50.insert(RepurchaseTerm_50.getString());
    FIX::RestructuringType RestructuringType_50("STRING_MM");
    noOrders_0_2.set(RestructuringType_50);
    Instrument_50.insert(RestructuringType_50.getString());
    FIX::SecurityDesc SecurityDesc_50("STRING_1093029763");
    noOrders_0_2.set(SecurityDesc_50);
    Instrument_50.insert(SecurityDesc_50.getString());
    FIX::SecurityExchange SecurityExchange_50("EXCHANGE_611247604");
    noOrders_0_2.set(SecurityExchange_50);
    Instrument_50.insert(SecurityExchange_50.getString());
    FIX::SecurityGroup SecurityGroup_50("STRING_639397357");
    noOrders_0_2.set(SecurityGroup_50);
    Instrument_50.insert(SecurityGroup_50.getString());
    FIX::SecurityID SecurityID_50("STRING_12811613");
    noOrders_0_2.set(SecurityID_50);
    Instrument_50.insert(SecurityID_50.getString());
    FIX::SecurityIDSource SecurityIDSource_50("STRING_M");
    noOrders_0_2.set(SecurityIDSource_50);
    Instrument_50.insert(SecurityIDSource_50.getString());
    FIX::SecurityStatus SecurityStatus_50("STRING_1");
    noOrders_0_2.set(SecurityStatus_50);
    Instrument_50.insert(SecurityStatus_50.getString());
    FIX::SecuritySubType SecuritySubType_51("STRING_343454140");
    noOrders_0_2.set(SecuritySubType_51);
    Instrument_50.insert(SecuritySubType_51.getString());
    FIX::SecurityType SecurityType_52("STRING_TNOTE");
    noOrders_0_2.set(SecurityType_52);
    Instrument_50.insert(SecurityType_52.getString());
    FIX::Seniority Seniority_50("STRING_SR");
    noOrders_0_2.set(Seniority_50);
    Instrument_50.insert(Seniority_50.getString());
    FIX::SettlMethod SettlMethod_50('P');
    noOrders_0_2.set(SettlMethod_50);
    Instrument_50.insert(SettlMethod_50.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_50("STRING_880304478");
    noOrders_0_2.set(SettleOnOpenFlag_50);
    Instrument_50.insert(SettleOnOpenFlag_50.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_50("STRING_1422242295");
    noOrders_0_2.set(StateOrProvinceOfIssue_50);
    Instrument_50.insert(StateOrProvinceOfIssue_50.getString());
    FIX::StrikeCurrency StrikeCurrency_50("EUR");
    noOrders_0_2.set(StrikeCurrency_50);
    Instrument_50.insert(StrikeCurrency_50.getString());
    FIX::StrikeMultiplier StrikeMultiplier_50;
    StrikeMultiplier_50.setString("11488167");
    noOrders_0_2.set(StrikeMultiplier_50);
    Instrument_50.insert(StrikeMultiplier_50.getString());
    FIX::StrikePrice StrikePrice_50;
    StrikePrice_50.setString("2694021");
    noOrders_0_2.set(StrikePrice_50);
    Instrument_50.insert(StrikePrice_50.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_50(5);
    noOrders_0_2.set(StrikePriceBoundaryMethod_50);
    Instrument_50.insert(StrikePriceBoundaryMethod_50.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_50;
    StrikePriceBoundaryPrecision_50.setString("36.420000");
    noOrders_0_2.set(StrikePriceBoundaryPrecision_50);
    Instrument_50.insert(StrikePriceBoundaryPrecision_50.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_50(3);
    noOrders_0_2.set(StrikePriceDeterminationMethod_50);
    Instrument_50.insert(StrikePriceDeterminationMethod_50.getString());
    FIX::StrikeValue StrikeValue_50;
    StrikeValue_50.setString("11575475");
    noOrders_0_2.set(StrikeValue_50);
    Instrument_50.insert(StrikeValue_50.getString());
    FIX::Symbol Symbol_50("STRING_27694352");
    noOrders_0_2.set(Symbol_50);
    Instrument_50.insert(Symbol_50.getString());
    FIX::SymbolSfx SymbolSfx_50("STRING_CD");
    noOrders_0_2.set(SymbolSfx_50);
    Instrument_50.insert(SymbolSfx_50.getString());
    FIX::TimeUnit TimeUnit_50("STRING_Min");
    noOrders_0_2.set(TimeUnit_50);
    Instrument_50.insert(TimeUnit_50.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_50(1);
    noOrders_0_2.set(UnderlyingPriceDeterminationMethod_50);
    Instrument_50.insert(UnderlyingPriceDeterminationMethod_50.getString());
    FIX::UnitOfMeasure UnitOfMeasure_50("STRING_Bbl");
    noOrders_0_2.set(UnitOfMeasure_50);
    Instrument_50.insert(UnitOfMeasure_50.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_50;
    UnitOfMeasureQty_50.setString("586783");
    noOrders_0_2.set(UnitOfMeasureQty_50);
    Instrument_50.insert(UnitOfMeasureQty_50.getString());
    FIX::ValuationMethod ValuationMethod_50("STRING_FUT");
    noOrders_0_2.set(ValuationMethod_50);
    Instrument_50.insert(ValuationMethod_50.getString());
    all_values.push_back(Instrument_50);
    all_compo_names.insert("Instrument");

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::NewOrderList::NoOrders::NoComplexEvents noComplexEvents_2_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_100;
      FIX::ComplexEventCondition ComplexEventCondition_100(2);
      noComplexEvents_2_1_0.set(ComplexEventCondition_100);
      ComplexEvents_NoComplexEvents_100.insert(ComplexEventCondition_100.getString());
      FIX::ComplexEventPrice ComplexEventPrice_100;
      ComplexEventPrice_100.setString("21126175");
      noComplexEvents_2_1_0.set(ComplexEventPrice_100);
      ComplexEvents_NoComplexEvents_100.insert(ComplexEventPrice_100.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_100(3);
      noComplexEvents_2_1_0.set(ComplexEventPriceBoundaryMethod_100);
      ComplexEvents_NoComplexEvents_100.insert(ComplexEventPriceBoundaryMethod_100.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_100;
      ComplexEventPriceBoundaryPrecision_100.setString("87.040000");
      noComplexEvents_2_1_0.set(ComplexEventPriceBoundaryPrecision_100);
      ComplexEvents_NoComplexEvents_100.insert(ComplexEventPriceBoundaryPrecision_100.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_100(2);
      noComplexEvents_2_1_0.set(ComplexEventPriceTimeType_100);
      ComplexEvents_NoComplexEvents_100.insert(ComplexEventPriceTimeType_100.getString());
      FIX::ComplexEventType ComplexEventType_100(3);
      noComplexEvents_2_1_0.set(ComplexEventType_100);
      ComplexEvents_NoComplexEvents_100.insert(ComplexEventType_100.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_100;
      ComplexOptPayoutAmount_100.setString("12617403");
      noComplexEvents_2_1_0.set(ComplexOptPayoutAmount_100);
      ComplexEvents_NoComplexEvents_100.insert(ComplexOptPayoutAmount_100.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_100);
      all_compo_names.insert("ComplexEvents.NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_207;
        FIX::ComplexEventEndDate ComplexEventEndDate_207(FIX::UTCTIMESTAMP(10, 54, 53, 19, 2, 2002));
        noComplexEventDates_2_0_2_0.set(ComplexEventEndDate_207);
        ComplexEventDates_NoComplexEventDates_207.insert(ComplexEventEndDate_207.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_207(FIX::UTCTIMESTAMP(12, 37, 23, 15, 8, 2008));
        noComplexEventDates_2_0_2_0.set(ComplexEventStartDate_207);
        ComplexEventDates_NoComplexEventDates_207.insert(ComplexEventStartDate_207.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_207);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_421;
          FIX::ComplexEventEndTime ComplexEventEndTime_421(FIX::UTCTIMEONLY(10, 0, 0));
          noComplexEventTimes_2_0_0_3_0.set(ComplexEventEndTime_421);
          ComplexEventTimes_NoComplexEventTimes_421.insert(ComplexEventEndTime_421.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_421(FIX::UTCTIMEONLY(0, 13, 33));
          noComplexEventTimes_2_0_0_3_0.set(ComplexEventStartTime_421);
          ComplexEventTimes_NoComplexEventTimes_421.insert(ComplexEventStartTime_421.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_421);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_2_0_2_0.addGroup(noComplexEventTimes_2_0_0_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_422;
          FIX::ComplexEventEndTime ComplexEventEndTime_422(FIX::UTCTIMEONLY(16, 7, 34));
          noComplexEventTimes_2_0_0_3_1.set(ComplexEventEndTime_422);
          ComplexEventTimes_NoComplexEventTimes_422.insert(ComplexEventEndTime_422.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_422(FIX::UTCTIMEONLY(7, 51, 40));
          noComplexEventTimes_2_0_0_3_1.set(ComplexEventStartTime_422);
          ComplexEventTimes_NoComplexEventTimes_422.insert(ComplexEventStartTime_422.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_422);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_2_0_2_0.addGroup(noComplexEventTimes_2_0_0_3_1);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_423;
          FIX::ComplexEventEndTime ComplexEventEndTime_423(FIX::UTCTIMEONLY(5, 34, 40));
          noComplexEventTimes_2_0_0_3_2.set(ComplexEventEndTime_423);
          ComplexEventTimes_NoComplexEventTimes_423.insert(ComplexEventEndTime_423.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_423(FIX::UTCTIMEONLY(15, 49, 8));
          noComplexEventTimes_2_0_0_3_2.set(ComplexEventStartTime_423);
          ComplexEventTimes_NoComplexEventTimes_423.insert(ComplexEventStartTime_423.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_423);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_2_0_2_0.addGroup(noComplexEventTimes_2_0_0_3_2);
        }
        noComplexEvents_2_1_0.addGroup(noComplexEventDates_2_0_2_0);
      }
      noOrders_0_2.addGroup(noComplexEvents_2_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoComplexEvents noComplexEvents_2_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_101;
      FIX::ComplexEventCondition ComplexEventCondition_101(2);
      noComplexEvents_2_1_1.set(ComplexEventCondition_101);
      ComplexEvents_NoComplexEvents_101.insert(ComplexEventCondition_101.getString());
      FIX::ComplexEventPrice ComplexEventPrice_101;
      ComplexEventPrice_101.setString("1396067");
      noComplexEvents_2_1_1.set(ComplexEventPrice_101);
      ComplexEvents_NoComplexEvents_101.insert(ComplexEventPrice_101.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_101(4);
      noComplexEvents_2_1_1.set(ComplexEventPriceBoundaryMethod_101);
      ComplexEvents_NoComplexEvents_101.insert(ComplexEventPriceBoundaryMethod_101.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_101;
      ComplexEventPriceBoundaryPrecision_101.setString("16.300000");
      noComplexEvents_2_1_1.set(ComplexEventPriceBoundaryPrecision_101);
      ComplexEvents_NoComplexEvents_101.insert(ComplexEventPriceBoundaryPrecision_101.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_101(2);
      noComplexEvents_2_1_1.set(ComplexEventPriceTimeType_101);
      ComplexEvents_NoComplexEvents_101.insert(ComplexEventPriceTimeType_101.getString());
      FIX::ComplexEventType ComplexEventType_101(5);
      noComplexEvents_2_1_1.set(ComplexEventType_101);
      ComplexEvents_NoComplexEvents_101.insert(ComplexEventType_101.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_101;
      ComplexOptPayoutAmount_101.setString("15957490");
      noComplexEvents_2_1_1.set(ComplexOptPayoutAmount_101);
      ComplexEvents_NoComplexEvents_101.insert(ComplexOptPayoutAmount_101.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_101);
      all_compo_names.insert("ComplexEvents.NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_208;
        FIX::ComplexEventEndDate ComplexEventEndDate_208(FIX::UTCTIMESTAMP(23, 21, 56, 23, 11, 2011));
        noComplexEventDates_2_1_2_0.set(ComplexEventEndDate_208);
        ComplexEventDates_NoComplexEventDates_208.insert(ComplexEventEndDate_208.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_208(FIX::UTCTIMESTAMP(14, 29, 10, 25, 1, 2012));
        noComplexEventDates_2_1_2_0.set(ComplexEventStartDate_208);
        ComplexEventDates_NoComplexEventDates_208.insert(ComplexEventStartDate_208.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_208);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_424;
          FIX::ComplexEventEndTime ComplexEventEndTime_424(FIX::UTCTIMEONLY(3, 20, 16));
          noComplexEventTimes_2_1_0_3_0.set(ComplexEventEndTime_424);
          ComplexEventTimes_NoComplexEventTimes_424.insert(ComplexEventEndTime_424.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_424(FIX::UTCTIMEONLY(11, 57, 44));
          noComplexEventTimes_2_1_0_3_0.set(ComplexEventStartTime_424);
          ComplexEventTimes_NoComplexEventTimes_424.insert(ComplexEventStartTime_424.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_424);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_2_1_2_0.addGroup(noComplexEventTimes_2_1_0_3_0);
        }
        noComplexEvents_2_1_1.addGroup(noComplexEventDates_2_1_2_0);
      }
      noOrders_0_2.addGroup(noComplexEvents_2_1_1);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoComplexEvents noComplexEvents_2_1_2;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_102;
      FIX::ComplexEventCondition ComplexEventCondition_102(2);
      noComplexEvents_2_1_2.set(ComplexEventCondition_102);
      ComplexEvents_NoComplexEvents_102.insert(ComplexEventCondition_102.getString());
      FIX::ComplexEventPrice ComplexEventPrice_102;
      ComplexEventPrice_102.setString("14325046");
      noComplexEvents_2_1_2.set(ComplexEventPrice_102);
      ComplexEvents_NoComplexEvents_102.insert(ComplexEventPrice_102.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_102(3);
      noComplexEvents_2_1_2.set(ComplexEventPriceBoundaryMethod_102);
      ComplexEvents_NoComplexEvents_102.insert(ComplexEventPriceBoundaryMethod_102.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_102;
      ComplexEventPriceBoundaryPrecision_102.setString("52.130000");
      noComplexEvents_2_1_2.set(ComplexEventPriceBoundaryPrecision_102);
      ComplexEvents_NoComplexEvents_102.insert(ComplexEventPriceBoundaryPrecision_102.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_102(1);
      noComplexEvents_2_1_2.set(ComplexEventPriceTimeType_102);
      ComplexEvents_NoComplexEvents_102.insert(ComplexEventPriceTimeType_102.getString());
      FIX::ComplexEventType ComplexEventType_102(2);
      noComplexEvents_2_1_2.set(ComplexEventType_102);
      ComplexEvents_NoComplexEvents_102.insert(ComplexEventType_102.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_102;
      ComplexOptPayoutAmount_102.setString("21085542");
      noComplexEvents_2_1_2.set(ComplexOptPayoutAmount_102);
      ComplexEvents_NoComplexEvents_102.insert(ComplexOptPayoutAmount_102.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_102);
      all_compo_names.insert("ComplexEvents.NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_2_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_209;
        FIX::ComplexEventEndDate ComplexEventEndDate_209(FIX::UTCTIMESTAMP(7, 19, 41, 22, 6, 2005));
        noComplexEventDates_2_2_2_0.set(ComplexEventEndDate_209);
        ComplexEventDates_NoComplexEventDates_209.insert(ComplexEventEndDate_209.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_209(FIX::UTCTIMESTAMP(11, 40, 37, 12, 9, 2013));
        noComplexEventDates_2_2_2_0.set(ComplexEventStartDate_209);
        ComplexEventDates_NoComplexEventDates_209.insert(ComplexEventStartDate_209.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_209);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_2_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_425;
          FIX::ComplexEventEndTime ComplexEventEndTime_425(FIX::UTCTIMEONLY(23, 38, 5));
          noComplexEventTimes_2_2_0_3_0.set(ComplexEventEndTime_425);
          ComplexEventTimes_NoComplexEventTimes_425.insert(ComplexEventEndTime_425.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_425(FIX::UTCTIMEONLY(17, 54, 19));
          noComplexEventTimes_2_2_0_3_0.set(ComplexEventStartTime_425);
          ComplexEventTimes_NoComplexEventTimes_425.insert(ComplexEventStartTime_425.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_425);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_2_2_2_0.addGroup(noComplexEventTimes_2_2_0_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_2_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_426;
          FIX::ComplexEventEndTime ComplexEventEndTime_426(FIX::UTCTIMEONLY(22, 18, 26));
          noComplexEventTimes_2_2_0_3_1.set(ComplexEventEndTime_426);
          ComplexEventTimes_NoComplexEventTimes_426.insert(ComplexEventEndTime_426.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_426(FIX::UTCTIMEONLY(23, 58, 53));
          noComplexEventTimes_2_2_0_3_1.set(ComplexEventStartTime_426);
          ComplexEventTimes_NoComplexEventTimes_426.insert(ComplexEventStartTime_426.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_426);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_2_2_2_0.addGroup(noComplexEventTimes_2_2_0_3_1);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_2_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_427;
          FIX::ComplexEventEndTime ComplexEventEndTime_427(FIX::UTCTIMEONLY(6, 12, 26));
          noComplexEventTimes_2_2_0_3_2.set(ComplexEventEndTime_427);
          ComplexEventTimes_NoComplexEventTimes_427.insert(ComplexEventEndTime_427.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_427(FIX::UTCTIMEONLY(9, 29, 55));
          noComplexEventTimes_2_2_0_3_2.set(ComplexEventStartTime_427);
          ComplexEventTimes_NoComplexEventTimes_427.insert(ComplexEventStartTime_427.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_427);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_2_2_2_0.addGroup(noComplexEventTimes_2_2_0_3_2);
        }
        noComplexEvents_2_1_2.addGroup(noComplexEventDates_2_2_2_0);
      }
      noOrders_0_2.addGroup(noComplexEvents_2_1_2);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::NewOrderList::NoOrders::NoEvents noEvents_2_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_92;
      FIX::EventDate EventDate_92("LOCALMKTDATE_1590015181");
      noEvents_2_1_0.set(EventDate_92);
      EvntGrp_NoEvents_92.insert(EventDate_92.getString());
      FIX::EventPx EventPx_92;
      EventPx_92.setString("18156976");
      noEvents_2_1_0.set(EventPx_92);
      EvntGrp_NoEvents_92.insert(EventPx_92.getString());
      FIX::EventText EventText_92("STRING_834909484");
      noEvents_2_1_0.set(EventText_92);
      EvntGrp_NoEvents_92.insert(EventText_92.getString());
      FIX::EventTime EventTime_92(FIX::UTCTIMESTAMP(8, 22, 10, 7, 1, 2013));
      noEvents_2_1_0.set(EventTime_92);
      EvntGrp_NoEvents_92.insert(EventTime_92.getString());
      FIX::EventType EventType_92(11);
      noEvents_2_1_0.set(EventType_92);
      EvntGrp_NoEvents_92.insert(EventType_92.getString());
      all_values.push_back(EvntGrp_NoEvents_92);
      all_compo_names.insert("EvntGrp.NoEvents");

      noOrders_0_2.addGroup(noEvents_2_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoEvents noEvents_2_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_93;
      FIX::EventDate EventDate_93("LOCALMKTDATE_1252196070");
      noEvents_2_1_1.set(EventDate_93);
      EvntGrp_NoEvents_93.insert(EventDate_93.getString());
      FIX::EventPx EventPx_93;
      EventPx_93.setString("16952718");
      noEvents_2_1_1.set(EventPx_93);
      EvntGrp_NoEvents_93.insert(EventPx_93.getString());
      FIX::EventText EventText_93("STRING_1839118061");
      noEvents_2_1_1.set(EventText_93);
      EvntGrp_NoEvents_93.insert(EventText_93.getString());
      FIX::EventTime EventTime_93(FIX::UTCTIMESTAMP(15, 52, 48, 2, 8, 2005));
      noEvents_2_1_1.set(EventTime_93);
      EvntGrp_NoEvents_93.insert(EventTime_93.getString());
      FIX::EventType EventType_93(16);
      noEvents_2_1_1.set(EventType_93);
      EvntGrp_NoEvents_93.insert(EventType_93.getString());
      all_values.push_back(EvntGrp_NoEvents_93);
      all_compo_names.insert("EvntGrp.NoEvents");

      noOrders_0_2.addGroup(noEvents_2_1_1);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoEvents noEvents_2_1_2;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_94;
      FIX::EventDate EventDate_94("LOCALMKTDATE_1814343928");
      noEvents_2_1_2.set(EventDate_94);
      EvntGrp_NoEvents_94.insert(EventDate_94.getString());
      FIX::EventPx EventPx_94;
      EventPx_94.setString("8219190");
      noEvents_2_1_2.set(EventPx_94);
      EvntGrp_NoEvents_94.insert(EventPx_94.getString());
      FIX::EventText EventText_94("STRING_1890194087");
      noEvents_2_1_2.set(EventText_94);
      EvntGrp_NoEvents_94.insert(EventText_94.getString());
      FIX::EventTime EventTime_94(FIX::UTCTIMESTAMP(5, 36, 7, 9, 1, 2000));
      noEvents_2_1_2.set(EventTime_94);
      EvntGrp_NoEvents_94.insert(EventTime_94.getString());
      FIX::EventType EventType_94(3);
      noEvents_2_1_2.set(EventType_94);
      EvntGrp_NoEvents_94.insert(EventType_94.getString());
      all_values.push_back(EvntGrp_NoEvents_94);
      all_compo_names.insert("EvntGrp.NoEvents");

      noOrders_0_2.addGroup(noEvents_2_1_2);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::NewOrderList::NoOrders::NoInstrumentParties noInstrumentParties_2_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_99;
      FIX::InstrumentPartyID InstrumentPartyID_99("STRING_543138373");
      noInstrumentParties_2_1_0.set(InstrumentPartyID_99);
      InstrumentParties_NoInstrumentParties_99.insert(InstrumentPartyID_99.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_99('1');
      noInstrumentParties_2_1_0.set(InstrumentPartyIDSource_99);
      InstrumentParties_NoInstrumentParties_99.insert(InstrumentPartyIDSource_99.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_99(1090368927);
      noInstrumentParties_2_1_0.set(InstrumentPartyRole_99);
      InstrumentParties_NoInstrumentParties_99.insert(InstrumentPartyRole_99.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_99);
      all_compo_names.insert("InstrumentParties.NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderList::NoOrders::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_190;
        FIX::InstrumentPartySubID InstrumentPartySubID_190("STRING_455913266");
        noInstrumentPartySubIDs_2_0_2_0.set(InstrumentPartySubID_190);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_190.insert(InstrumentPartySubID_190.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_190(1915144348);
        noInstrumentPartySubIDs_2_0_2_0.set(InstrumentPartySubIDType_190);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_190.insert(InstrumentPartySubIDType_190.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_190);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_2_1_0.addGroup(noInstrumentPartySubIDs_2_0_2_0);
      }
      noOrders_0_2.addGroup(noInstrumentParties_2_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoInstrumentParties noInstrumentParties_2_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_100;
      FIX::InstrumentPartyID InstrumentPartyID_100("STRING_1678465702");
      noInstrumentParties_2_1_1.set(InstrumentPartyID_100);
      InstrumentParties_NoInstrumentParties_100.insert(InstrumentPartyID_100.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_100('3');
      noInstrumentParties_2_1_1.set(InstrumentPartyIDSource_100);
      InstrumentParties_NoInstrumentParties_100.insert(InstrumentPartyIDSource_100.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_100(1019856770);
      noInstrumentParties_2_1_1.set(InstrumentPartyRole_100);
      InstrumentParties_NoInstrumentParties_100.insert(InstrumentPartyRole_100.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_100);
      all_compo_names.insert("InstrumentParties.NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderList::NoOrders::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_191;
        FIX::InstrumentPartySubID InstrumentPartySubID_191("STRING_75083302");
        noInstrumentPartySubIDs_2_1_2_0.set(InstrumentPartySubID_191);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_191.insert(InstrumentPartySubID_191.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_191(2102697072);
        noInstrumentPartySubIDs_2_1_2_0.set(InstrumentPartySubIDType_191);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_191.insert(InstrumentPartySubIDType_191.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_191);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_2_1_1.addGroup(noInstrumentPartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_192;
        FIX::InstrumentPartySubID InstrumentPartySubID_192("STRING_525939911");
        noInstrumentPartySubIDs_2_1_2_1.set(InstrumentPartySubID_192);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_192.insert(InstrumentPartySubID_192.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_192(1407081974);
        noInstrumentPartySubIDs_2_1_2_1.set(InstrumentPartySubIDType_192);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_192.insert(InstrumentPartySubIDType_192.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_192);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_2_1_1.addGroup(noInstrumentPartySubIDs_2_1_2_1);
      }
      noOrders_0_2.addGroup(noInstrumentParties_2_1_1);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoInstrumentParties noInstrumentParties_2_1_2;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_101;
      FIX::InstrumentPartyID InstrumentPartyID_101("STRING_1381503173");
      noInstrumentParties_2_1_2.set(InstrumentPartyID_101);
      InstrumentParties_NoInstrumentParties_101.insert(InstrumentPartyID_101.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_101('1');
      noInstrumentParties_2_1_2.set(InstrumentPartyIDSource_101);
      InstrumentParties_NoInstrumentParties_101.insert(InstrumentPartyIDSource_101.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_101(1747094157);
      noInstrumentParties_2_1_2.set(InstrumentPartyRole_101);
      InstrumentParties_NoInstrumentParties_101.insert(InstrumentPartyRole_101.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_101);
      all_compo_names.insert("InstrumentParties.NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderList::NoOrders::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_2_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_193;
        FIX::InstrumentPartySubID InstrumentPartySubID_193("STRING_812045729");
        noInstrumentPartySubIDs_2_2_2_0.set(InstrumentPartySubID_193);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_193.insert(InstrumentPartySubID_193.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_193(1413954437);
        noInstrumentPartySubIDs_2_2_2_0.set(InstrumentPartySubIDType_193);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_193.insert(InstrumentPartySubIDType_193.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_193);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_2_1_2.addGroup(noInstrumentPartySubIDs_2_2_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_2_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_194;
        FIX::InstrumentPartySubID InstrumentPartySubID_194("STRING_1786748321");
        noInstrumentPartySubIDs_2_2_2_1.set(InstrumentPartySubID_194);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_194.insert(InstrumentPartySubID_194.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_194(554756169);
        noInstrumentPartySubIDs_2_2_2_1.set(InstrumentPartySubIDType_194);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_194.insert(InstrumentPartySubIDType_194.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_194);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_2_1_2.addGroup(noInstrumentPartySubIDs_2_2_2_1);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_2_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_195;
        FIX::InstrumentPartySubID InstrumentPartySubID_195("STRING_743676295");
        noInstrumentPartySubIDs_2_2_2_2.set(InstrumentPartySubID_195);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_195.insert(InstrumentPartySubID_195.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_195(895299542);
        noInstrumentPartySubIDs_2_2_2_2.set(InstrumentPartySubIDType_195);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_195.insert(InstrumentPartySubIDType_195.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_195);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_2_1_2.addGroup(noInstrumentPartySubIDs_2_2_2_2);
      }
      noOrders_0_2.addGroup(noInstrumentParties_2_1_2);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::NewOrderList::NoOrders::NoSecurityAltID noSecurityAltID_2_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_91;
      FIX::SecurityAltID SecurityAltID_91("STRING_1674610562");
      noSecurityAltID_2_1_0.set(SecurityAltID_91);
      SecAltIDGrp_NoSecurityAltID_91.insert(SecurityAltID_91.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_91("STRING_1781737579");
      noSecurityAltID_2_1_0.set(SecurityAltIDSource_91);
      SecAltIDGrp_NoSecurityAltID_91.insert(SecurityAltIDSource_91.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_91);
      all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

      noOrders_0_2.addGroup(noSecurityAltID_2_1_0);
    }
    // SecurityXML
    multiset<string> SecurityXML_100;
    FIX::SecurityXML SecurityXML_101("XMLDATA_1083003766");
    noOrders_0_2.set(SecurityXML_101);
    FIX::SecurityXMLLen SecurityXMLLen_50(2048076362);
    noOrders_0_2.set(SecurityXMLLen_50);
    FIX::SecurityXMLSchema SecurityXMLSchema_50("STRING_188905973");
    noOrders_0_2.set(SecurityXMLSchema_50);
    SecurityXML_100.insert(SecurityXMLSchema_50.getString());
    all_values.push_back(SecurityXML_100);
    all_compo_names.insert("SecurityXML");

    // OrderQtyData
    multiset<string> OrderQtyData_14;
    FIX::CashOrderQty CashOrderQty_14;
    CashOrderQty_14.setString("20062724");
    noOrders_0_2.set(CashOrderQty_14);
    OrderQtyData_14.insert(CashOrderQty_14.getString());
    FIX::OrderPercent OrderPercent_14;
    OrderPercent_14.setString("10.880000");
    noOrders_0_2.set(OrderPercent_14);
    OrderQtyData_14.insert(OrderPercent_14.getString());
    FIX::OrderQty OrderQty_24;
    OrderQty_24.setString("12461222");
    noOrders_0_2.set(OrderQty_24);
    OrderQtyData_14.insert(OrderQty_24.getString());
    FIX::RoundingDirection RoundingDirection_14('1');
    noOrders_0_2.set(RoundingDirection_14);
    OrderQtyData_14.insert(RoundingDirection_14.getString());
    FIX::RoundingModulus RoundingModulus_14;
    RoundingModulus_14.setString("8938018");
    noOrders_0_2.set(RoundingModulus_14);
    OrderQtyData_14.insert(RoundingModulus_14.getString());
    all_values.push_back(OrderQtyData_14);
    all_compo_names.insert("OrderQtyData");

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::NewOrderList::NoOrders::NoPartyIDs noPartyIDs_2_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_70;
      FIX::PartyID PartyID_70("STRING_716818410");
      noPartyIDs_2_1_0.set(PartyID_70);
      Parties_NoPartyIDs_70.insert(PartyID_70.getString());
      FIX::PartyIDSource PartyIDSource_70('4');
      noPartyIDs_2_1_0.set(PartyIDSource_70);
      Parties_NoPartyIDs_70.insert(PartyIDSource_70.getString());
      FIX::PartyRole PartyRole_70(48);
      noPartyIDs_2_1_0.set(PartyRole_70);
      Parties_NoPartyIDs_70.insert(PartyRole_70.getString());
      all_values.push_back(Parties_NoPartyIDs_70);
      all_compo_names.insert("Parties.NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::NewOrderList::NoOrders::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_157;
        FIX::PartySubID PartySubID_157("STRING_1651037754");
        noPartySubIDs_2_0_2_0.set(PartySubID_157);
        PtysSubGrp_NoPartySubIDs_157.insert(PartySubID_157.getString());
        FIX::PartySubIDType PartySubIDType_157(10);
        noPartySubIDs_2_0_2_0.set(PartySubIDType_157);
        PtysSubGrp_NoPartySubIDs_157.insert(PartySubIDType_157.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_157);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_2_1_0.addGroup(noPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_158;
        FIX::PartySubID PartySubID_158("STRING_1691888605");
        noPartySubIDs_2_0_2_1.set(PartySubID_158);
        PtysSubGrp_NoPartySubIDs_158.insert(PartySubID_158.getString());
        FIX::PartySubIDType PartySubIDType_158(4);
        noPartySubIDs_2_0_2_1.set(PartySubIDType_158);
        PtysSubGrp_NoPartySubIDs_158.insert(PartySubIDType_158.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_158);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_2_1_0.addGroup(noPartySubIDs_2_0_2_1);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_0_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_159;
        FIX::PartySubID PartySubID_159("STRING_1420166054");
        noPartySubIDs_2_0_2_2.set(PartySubID_159);
        PtysSubGrp_NoPartySubIDs_159.insert(PartySubID_159.getString());
        FIX::PartySubIDType PartySubIDType_159(5);
        noPartySubIDs_2_0_2_2.set(PartySubIDType_159);
        PtysSubGrp_NoPartySubIDs_159.insert(PartySubIDType_159.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_159);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_2_1_0.addGroup(noPartySubIDs_2_0_2_2);
      }
      noOrders_0_2.addGroup(noPartyIDs_2_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoPartyIDs noPartyIDs_2_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_71;
      FIX::PartyID PartyID_71("STRING_150430911");
      noPartyIDs_2_1_1.set(PartyID_71);
      Parties_NoPartyIDs_71.insert(PartyID_71.getString());
      FIX::PartyIDSource PartyIDSource_71('I');
      noPartyIDs_2_1_1.set(PartyIDSource_71);
      Parties_NoPartyIDs_71.insert(PartyIDSource_71.getString());
      FIX::PartyRole PartyRole_71(7);
      noPartyIDs_2_1_1.set(PartyRole_71);
      Parties_NoPartyIDs_71.insert(PartyRole_71.getString());
      all_values.push_back(Parties_NoPartyIDs_71);
      all_compo_names.insert("Parties.NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::NewOrderList::NoOrders::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_160;
        FIX::PartySubID PartySubID_160("STRING_286247353");
        noPartySubIDs_2_1_2_0.set(PartySubID_160);
        PtysSubGrp_NoPartySubIDs_160.insert(PartySubID_160.getString());
        FIX::PartySubIDType PartySubIDType_160(16);
        noPartySubIDs_2_1_2_0.set(PartySubIDType_160);
        PtysSubGrp_NoPartySubIDs_160.insert(PartySubIDType_160.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_160);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_2_1_1.addGroup(noPartySubIDs_2_1_2_0);
      }
      noOrders_0_2.addGroup(noPartyIDs_2_1_1);
    }
    // PegInstructions
    multiset<string> PegInstructions_6;
    FIX::PegLimitType PegLimitType_6(0);
    noOrders_0_2.set(PegLimitType_6);
    PegInstructions_6.insert(PegLimitType_6.getString());
    FIX::PegMoveType PegMoveType_6(1);
    noOrders_0_2.set(PegMoveType_6);
    PegInstructions_6.insert(PegMoveType_6.getString());
    FIX::PegOffsetType PegOffsetType_6(1);
    noOrders_0_2.set(PegOffsetType_6);
    PegInstructions_6.insert(PegOffsetType_6.getString());
    FIX::PegOffsetValue PegOffsetValue_6;
    PegOffsetValue_6.setString("3643937");
    noOrders_0_2.set(PegOffsetValue_6);
    PegInstructions_6.insert(PegOffsetValue_6.getString());
    FIX::PegPriceType PegPriceType_6(4);
    noOrders_0_2.set(PegPriceType_6);
    PegInstructions_6.insert(PegPriceType_6.getString());
    FIX::PegRoundDirection PegRoundDirection_6(2);
    noOrders_0_2.set(PegRoundDirection_6);
    PegInstructions_6.insert(PegRoundDirection_6.getString());
    FIX::PegScope PegScope_6(2);
    noOrders_0_2.set(PegScope_6);
    PegInstructions_6.insert(PegScope_6.getString());
    FIX::PegSecurityDesc PegSecurityDesc_6("STRING_457643278");
    noOrders_0_2.set(PegSecurityDesc_6);
    PegInstructions_6.insert(PegSecurityDesc_6.getString());
    FIX::PegSecurityID PegSecurityID_6("STRING_100977914");
    noOrders_0_2.set(PegSecurityID_6);
    PegInstructions_6.insert(PegSecurityID_6.getString());
    FIX::PegSecurityIDSource PegSecurityIDSource_6("STRING_1306186296");
    noOrders_0_2.set(PegSecurityIDSource_6);
    PegInstructions_6.insert(PegSecurityIDSource_6.getString());
    FIX::PegSymbol PegSymbol_6("STRING_901374366");
    noOrders_0_2.set(PegSymbol_6);
    PegInstructions_6.insert(PegSymbol_6.getString());
    all_values.push_back(PegInstructions_6);
    all_compo_names.insert("PegInstructions");

    // PreAllocGrp
    // Group PreAllocGrp.NoAllocs
    {
      FIX50SP2::NewOrderList::NoOrders::NoAllocs noAllocs_2_1_0;
      // PreAllocGrp.NoAllocs
      multiset<string> PreAllocGrp_NoAllocs_18;
      FIX::AllocAccount AllocAccount_28("STRING_107860359");
      noAllocs_2_1_0.set(AllocAccount_28);
      PreAllocGrp_NoAllocs_18.insert(AllocAccount_28.getString());
      FIX::AllocAcctIDSource AllocAcctIDSource_28(1795176209);
      noAllocs_2_1_0.set(AllocAcctIDSource_28);
      PreAllocGrp_NoAllocs_18.insert(AllocAcctIDSource_28.getString());
      FIX::AllocQty AllocQty_27;
      AllocQty_27.setString("9016520");
      noAllocs_2_1_0.set(AllocQty_27);
      PreAllocGrp_NoAllocs_18.insert(AllocQty_27.getString());
      FIX::AllocSettlCurrency AllocSettlCurrency_23("CAN");
      noAllocs_2_1_0.set(AllocSettlCurrency_23);
      PreAllocGrp_NoAllocs_18.insert(AllocSettlCurrency_23.getString());
      FIX::IndividualAllocID IndividualAllocID_28("STRING_839652855");
      noAllocs_2_1_0.set(IndividualAllocID_28);
      PreAllocGrp_NoAllocs_18.insert(IndividualAllocID_28.getString());
      all_values.push_back(PreAllocGrp_NoAllocs_18);
      all_compo_names.insert("PreAllocGrp.NoAllocs");

      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_2_0_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_64;
        FIX::NestedPartyID NestedPartyID_64("STRING_1723514213");
        noNestedPartyIDs_2_0_2_0.set(NestedPartyID_64);
        NestedParties_NoNestedPartyIDs_64.insert(NestedPartyID_64.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_64('8');
        noNestedPartyIDs_2_0_2_0.set(NestedPartyIDSource_64);
        NestedParties_NoNestedPartyIDs_64.insert(NestedPartyIDSource_64.getString());
        FIX::NestedPartyRole NestedPartyRole_64(2105758907);
        noNestedPartyIDs_2_0_2_0.set(NestedPartyRole_64);
        NestedParties_NoNestedPartyIDs_64.insert(NestedPartyRole_64.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_64);
        all_compo_names.insert("NestedParties.NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_140;
          FIX::NestedPartySubID NestedPartySubID_140("STRING_125419342");
          noNestedPartySubIDs_2_0_0_3_0.set(NestedPartySubID_140);
          NstdPtysSubGrp_NoNestedPartySubIDs_140.insert(NestedPartySubID_140.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_140(884183389);
          noNestedPartySubIDs_2_0_0_3_0.set(NestedPartySubIDType_140);
          NstdPtysSubGrp_NoNestedPartySubIDs_140.insert(NestedPartySubIDType_140.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_140);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_2_0_2_0.addGroup(noNestedPartySubIDs_2_0_0_3_0);
        }
        noAllocs_2_1_0.addGroup(noNestedPartyIDs_2_0_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_2_0_2_1;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_65;
        FIX::NestedPartyID NestedPartyID_65("STRING_1903439142");
        noNestedPartyIDs_2_0_2_1.set(NestedPartyID_65);
        NestedParties_NoNestedPartyIDs_65.insert(NestedPartyID_65.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_65('1');
        noNestedPartyIDs_2_0_2_1.set(NestedPartyIDSource_65);
        NestedParties_NoNestedPartyIDs_65.insert(NestedPartyIDSource_65.getString());
        FIX::NestedPartyRole NestedPartyRole_65(627437183);
        noNestedPartyIDs_2_0_2_1.set(NestedPartyRole_65);
        NestedParties_NoNestedPartyIDs_65.insert(NestedPartyRole_65.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_65);
        all_compo_names.insert("NestedParties.NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_1_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_141;
          FIX::NestedPartySubID NestedPartySubID_141("STRING_1431443259");
          noNestedPartySubIDs_2_0_1_3_0.set(NestedPartySubID_141);
          NstdPtysSubGrp_NoNestedPartySubIDs_141.insert(NestedPartySubID_141.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_141(9955650);
          noNestedPartySubIDs_2_0_1_3_0.set(NestedPartySubIDType_141);
          NstdPtysSubGrp_NoNestedPartySubIDs_141.insert(NestedPartySubIDType_141.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_141);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_2_0_2_1.addGroup(noNestedPartySubIDs_2_0_1_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_1_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_142;
          FIX::NestedPartySubID NestedPartySubID_142("STRING_88181297");
          noNestedPartySubIDs_2_0_1_3_1.set(NestedPartySubID_142);
          NstdPtysSubGrp_NoNestedPartySubIDs_142.insert(NestedPartySubID_142.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_142(313883260);
          noNestedPartySubIDs_2_0_1_3_1.set(NestedPartySubIDType_142);
          NstdPtysSubGrp_NoNestedPartySubIDs_142.insert(NestedPartySubIDType_142.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_142);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_2_0_2_1.addGroup(noNestedPartySubIDs_2_0_1_3_1);
        }
        noAllocs_2_1_0.addGroup(noNestedPartyIDs_2_0_2_1);
      }
      noOrders_0_2.addGroup(noAllocs_2_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoAllocs noAllocs_2_1_1;
      // PreAllocGrp.NoAllocs
      multiset<string> PreAllocGrp_NoAllocs_19;
      FIX::AllocAccount AllocAccount_29("STRING_287773659");
      noAllocs_2_1_1.set(AllocAccount_29);
      PreAllocGrp_NoAllocs_19.insert(AllocAccount_29.getString());
      FIX::AllocAcctIDSource AllocAcctIDSource_29(452575045);
      noAllocs_2_1_1.set(AllocAcctIDSource_29);
      PreAllocGrp_NoAllocs_19.insert(AllocAcctIDSource_29.getString());
      FIX::AllocQty AllocQty_28;
      AllocQty_28.setString("8709338");
      noAllocs_2_1_1.set(AllocQty_28);
      PreAllocGrp_NoAllocs_19.insert(AllocQty_28.getString());
      FIX::AllocSettlCurrency AllocSettlCurrency_24("USD");
      noAllocs_2_1_1.set(AllocSettlCurrency_24);
      PreAllocGrp_NoAllocs_19.insert(AllocSettlCurrency_24.getString());
      FIX::IndividualAllocID IndividualAllocID_29("STRING_1328577102");
      noAllocs_2_1_1.set(IndividualAllocID_29);
      PreAllocGrp_NoAllocs_19.insert(IndividualAllocID_29.getString());
      all_values.push_back(PreAllocGrp_NoAllocs_19);
      all_compo_names.insert("PreAllocGrp.NoAllocs");

      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_2_1_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_66;
        FIX::NestedPartyID NestedPartyID_66("STRING_1058675207");
        noNestedPartyIDs_2_1_2_0.set(NestedPartyID_66);
        NestedParties_NoNestedPartyIDs_66.insert(NestedPartyID_66.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_66('8');
        noNestedPartyIDs_2_1_2_0.set(NestedPartyIDSource_66);
        NestedParties_NoNestedPartyIDs_66.insert(NestedPartyIDSource_66.getString());
        FIX::NestedPartyRole NestedPartyRole_66(1647923701);
        noNestedPartyIDs_2_1_2_0.set(NestedPartyRole_66);
        NestedParties_NoNestedPartyIDs_66.insert(NestedPartyRole_66.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_66);
        all_compo_names.insert("NestedParties.NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_143;
          FIX::NestedPartySubID NestedPartySubID_143("STRING_1877644029");
          noNestedPartySubIDs_2_1_0_3_0.set(NestedPartySubID_143);
          NstdPtysSubGrp_NoNestedPartySubIDs_143.insert(NestedPartySubID_143.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_143(402092130);
          noNestedPartySubIDs_2_1_0_3_0.set(NestedPartySubIDType_143);
          NstdPtysSubGrp_NoNestedPartySubIDs_143.insert(NestedPartySubIDType_143.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_143);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_2_1_2_0.addGroup(noNestedPartySubIDs_2_1_0_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_144;
          FIX::NestedPartySubID NestedPartySubID_144("STRING_1991214335");
          noNestedPartySubIDs_2_1_0_3_1.set(NestedPartySubID_144);
          NstdPtysSubGrp_NoNestedPartySubIDs_144.insert(NestedPartySubID_144.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_144(1950120489);
          noNestedPartySubIDs_2_1_0_3_1.set(NestedPartySubIDType_144);
          NstdPtysSubGrp_NoNestedPartySubIDs_144.insert(NestedPartySubIDType_144.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_144);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_2_1_2_0.addGroup(noNestedPartySubIDs_2_1_0_3_1);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_0_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_145;
          FIX::NestedPartySubID NestedPartySubID_145("STRING_1241744985");
          noNestedPartySubIDs_2_1_0_3_2.set(NestedPartySubID_145);
          NstdPtysSubGrp_NoNestedPartySubIDs_145.insert(NestedPartySubID_145.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_145(257600989);
          noNestedPartySubIDs_2_1_0_3_2.set(NestedPartySubIDType_145);
          NstdPtysSubGrp_NoNestedPartySubIDs_145.insert(NestedPartySubIDType_145.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_145);
          all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

          noNestedPartyIDs_2_1_2_0.addGroup(noNestedPartySubIDs_2_1_0_3_2);
        }
        noAllocs_2_1_1.addGroup(noNestedPartyIDs_2_1_2_0);
      }
      noOrders_0_2.addGroup(noAllocs_2_1_1);
    }
    // SpreadOrBenchmarkCurveData
    multiset<string> SpreadOrBenchmarkCurveData_18;
    FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_18("USD");
    noOrders_0_2.set(BenchmarkCurveCurrency_18);
    SpreadOrBenchmarkCurveData_18.insert(BenchmarkCurveCurrency_18.getString());
    FIX::BenchmarkCurveName BenchmarkCurveName_18("STRING_LIBID");
    noOrders_0_2.set(BenchmarkCurveName_18);
    SpreadOrBenchmarkCurveData_18.insert(BenchmarkCurveName_18.getString());
    FIX::BenchmarkCurvePoint BenchmarkCurvePoint_18("STRING_1131675637");
    noOrders_0_2.set(BenchmarkCurvePoint_18);
    SpreadOrBenchmarkCurveData_18.insert(BenchmarkCurvePoint_18.getString());
    FIX::BenchmarkPrice BenchmarkPrice_18;
    BenchmarkPrice_18.setString("724176");
    noOrders_0_2.set(BenchmarkPrice_18);
    SpreadOrBenchmarkCurveData_18.insert(BenchmarkPrice_18.getString());
    FIX::BenchmarkPriceType BenchmarkPriceType_18(1100059637);
    noOrders_0_2.set(BenchmarkPriceType_18);
    SpreadOrBenchmarkCurveData_18.insert(BenchmarkPriceType_18.getString());
    FIX::BenchmarkSecurityID BenchmarkSecurityID_18("STRING_887631132");
    noOrders_0_2.set(BenchmarkSecurityID_18);
    SpreadOrBenchmarkCurveData_18.insert(BenchmarkSecurityID_18.getString());
    FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_18("STRING_1217613520");
    noOrders_0_2.set(BenchmarkSecurityIDSource_18);
    SpreadOrBenchmarkCurveData_18.insert(BenchmarkSecurityIDSource_18.getString());
    FIX::Spread Spread_18;
    Spread_18.setString("17274968");
    noOrders_0_2.set(Spread_18);
    SpreadOrBenchmarkCurveData_18.insert(Spread_18.getString());
    all_values.push_back(SpreadOrBenchmarkCurveData_18);
    all_compo_names.insert("SpreadOrBenchmarkCurveData");

    // Stipulations
    // Group Stipulations.NoStipulations
    {
      FIX50SP2::NewOrderList::NoOrders::NoStipulations noStipulations_2_1_0;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_29;
      FIX::StipulationType StipulationType_29("STRING_ISSUESIZE");
      noStipulations_2_1_0.set(StipulationType_29);
      Stipulations_NoStipulations_29.insert(StipulationType_29.getString());
      FIX::StipulationValue StipulationValue_29("STRING_1737452470");
      noStipulations_2_1_0.set(StipulationValue_29);
      Stipulations_NoStipulations_29.insert(StipulationValue_29.getString());
      all_values.push_back(Stipulations_NoStipulations_29);
      all_compo_names.insert("Stipulations.NoStipulations");

      noOrders_0_2.addGroup(noStipulations_2_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoStipulations noStipulations_2_1_1;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_30;
      FIX::StipulationType StipulationType_30("STRING_CURRENCY");
      noStipulations_2_1_1.set(StipulationType_30);
      Stipulations_NoStipulations_30.insert(StipulationType_30.getString());
      FIX::StipulationValue StipulationValue_30("STRING_815456392");
      noStipulations_2_1_1.set(StipulationValue_30);
      Stipulations_NoStipulations_30.insert(StipulationValue_30.getString());
      all_values.push_back(Stipulations_NoStipulations_30);
      all_compo_names.insert("Stipulations.NoStipulations");

      noOrders_0_2.addGroup(noStipulations_2_1_1);
    }
    // StrategyParametersGrp
    // Group StrategyParametersGrp.NoStrategyParameters
    {
      FIX50SP2::NewOrderList::NoOrders::NoStrategyParameters noStrategyParameters_2_1_0;
      // StrategyParametersGrp.NoStrategyParameters
      multiset<string> StrategyParametersGrp_NoStrategyParameters_11;
      FIX::StrategyParameterName StrategyParameterName_11("STRING_2146819610");
      noStrategyParameters_2_1_0.set(StrategyParameterName_11);
      StrategyParametersGrp_NoStrategyParameters_11.insert(StrategyParameterName_11.getString());
      FIX::StrategyParameterType StrategyParameterType_11(23);
      noStrategyParameters_2_1_0.set(StrategyParameterType_11);
      StrategyParametersGrp_NoStrategyParameters_11.insert(StrategyParameterType_11.getString());
      FIX::StrategyParameterValue StrategyParameterValue_11("STRING_77588082");
      noStrategyParameters_2_1_0.set(StrategyParameterValue_11);
      StrategyParametersGrp_NoStrategyParameters_11.insert(StrategyParameterValue_11.getString());
      all_values.push_back(StrategyParametersGrp_NoStrategyParameters_11);
      all_compo_names.insert("StrategyParametersGrp.NoStrategyParameters");

      noOrders_0_2.addGroup(noStrategyParameters_2_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoStrategyParameters noStrategyParameters_2_1_1;
      // StrategyParametersGrp.NoStrategyParameters
      multiset<string> StrategyParametersGrp_NoStrategyParameters_12;
      FIX::StrategyParameterName StrategyParameterName_12("STRING_1899308520");
      noStrategyParameters_2_1_1.set(StrategyParameterName_12);
      StrategyParametersGrp_NoStrategyParameters_12.insert(StrategyParameterName_12.getString());
      FIX::StrategyParameterType StrategyParameterType_12(1);
      noStrategyParameters_2_1_1.set(StrategyParameterType_12);
      StrategyParametersGrp_NoStrategyParameters_12.insert(StrategyParameterType_12.getString());
      FIX::StrategyParameterValue StrategyParameterValue_12("STRING_378411597");
      noStrategyParameters_2_1_1.set(StrategyParameterValue_12);
      StrategyParametersGrp_NoStrategyParameters_12.insert(StrategyParameterValue_12.getString());
      all_values.push_back(StrategyParametersGrp_NoStrategyParameters_12);
      all_compo_names.insert("StrategyParametersGrp.NoStrategyParameters");

      noOrders_0_2.addGroup(noStrategyParameters_2_1_1);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoStrategyParameters noStrategyParameters_2_1_2;
      // StrategyParametersGrp.NoStrategyParameters
      multiset<string> StrategyParametersGrp_NoStrategyParameters_13;
      FIX::StrategyParameterName StrategyParameterName_13("STRING_810500079");
      noStrategyParameters_2_1_2.set(StrategyParameterName_13);
      StrategyParametersGrp_NoStrategyParameters_13.insert(StrategyParameterName_13.getString());
      FIX::StrategyParameterType StrategyParameterType_13(28);
      noStrategyParameters_2_1_2.set(StrategyParameterType_13);
      StrategyParametersGrp_NoStrategyParameters_13.insert(StrategyParameterType_13.getString());
      FIX::StrategyParameterValue StrategyParameterValue_13("STRING_2026335299");
      noStrategyParameters_2_1_2.set(StrategyParameterValue_13);
      StrategyParametersGrp_NoStrategyParameters_13.insert(StrategyParameterValue_13.getString());
      all_values.push_back(StrategyParametersGrp_NoStrategyParameters_13);
      all_compo_names.insert("StrategyParametersGrp.NoStrategyParameters");

      noOrders_0_2.addGroup(noStrategyParameters_2_1_2);
    }
    // TrdgSesGrp
    // Group TrdgSesGrp.NoTradingSessions
    {
      FIX50SP2::NewOrderList::NoOrders::NoTradingSessions noTradingSessions_2_1_0;
      // TrdgSesGrp.NoTradingSessions
      multiset<string> TrdgSesGrp_NoTradingSessions_13;
      FIX::TradingSessionID TradingSessionID_60("STRING_5");
      noTradingSessions_2_1_0.set(TradingSessionID_60);
      TrdgSesGrp_NoTradingSessions_13.insert(TradingSessionID_60.getString());
      FIX::TradingSessionSubID TradingSessionSubID_60("STRING_7");
      noTradingSessions_2_1_0.set(TradingSessionSubID_60);
      TrdgSesGrp_NoTradingSessions_13.insert(TradingSessionSubID_60.getString());
      all_values.push_back(TrdgSesGrp_NoTradingSessions_13);
      all_compo_names.insert("TrdgSesGrp.NoTradingSessions");

      noOrders_0_2.addGroup(noTradingSessions_2_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoTradingSessions noTradingSessions_2_1_1;
      // TrdgSesGrp.NoTradingSessions
      multiset<string> TrdgSesGrp_NoTradingSessions_14;
      FIX::TradingSessionID TradingSessionID_61("STRING_4");
      noTradingSessions_2_1_1.set(TradingSessionID_61);
      TrdgSesGrp_NoTradingSessions_14.insert(TradingSessionID_61.getString());
      FIX::TradingSessionSubID TradingSessionSubID_61("STRING_7");
      noTradingSessions_2_1_1.set(TradingSessionSubID_61);
      TrdgSesGrp_NoTradingSessions_14.insert(TradingSessionSubID_61.getString());
      all_values.push_back(TrdgSesGrp_NoTradingSessions_14);
      all_compo_names.insert("TrdgSesGrp.NoTradingSessions");

      noOrders_0_2.addGroup(noTradingSessions_2_1_1);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoTradingSessions noTradingSessions_2_1_2;
      // TrdgSesGrp.NoTradingSessions
      multiset<string> TrdgSesGrp_NoTradingSessions_15;
      FIX::TradingSessionID TradingSessionID_62("STRING_1");
      noTradingSessions_2_1_2.set(TradingSessionID_62);
      TrdgSesGrp_NoTradingSessions_15.insert(TradingSessionID_62.getString());
      FIX::TradingSessionSubID TradingSessionSubID_62("STRING_4");
      noTradingSessions_2_1_2.set(TradingSessionSubID_62);
      TrdgSesGrp_NoTradingSessions_15.insert(TradingSessionSubID_62.getString());
      all_values.push_back(TrdgSesGrp_NoTradingSessions_15);
      all_compo_names.insert("TrdgSesGrp.NoTradingSessions");

      noOrders_0_2.addGroup(noTradingSessions_2_1_2);
    }
    // TriggeringInstruction
    multiset<string> TriggeringInstruction_6;
    FIX::TriggerAction TriggerAction_6('3');
    noOrders_0_2.set(TriggerAction_6);
    TriggeringInstruction_6.insert(TriggerAction_6.getString());
    FIX::TriggerNewPrice TriggerNewPrice_6;
    TriggerNewPrice_6.setString("14696870");
    noOrders_0_2.set(TriggerNewPrice_6);
    TriggeringInstruction_6.insert(TriggerNewPrice_6.getString());
    FIX::TriggerNewQty TriggerNewQty_6;
    TriggerNewQty_6.setString("1467599");
    noOrders_0_2.set(TriggerNewQty_6);
    TriggeringInstruction_6.insert(TriggerNewQty_6.getString());
    FIX::TriggerOrderType TriggerOrderType_6('2');
    noOrders_0_2.set(TriggerOrderType_6);
    TriggeringInstruction_6.insert(TriggerOrderType_6.getString());
    FIX::TriggerPrice TriggerPrice_6;
    TriggerPrice_6.setString("15421046");
    noOrders_0_2.set(TriggerPrice_6);
    TriggeringInstruction_6.insert(TriggerPrice_6.getString());
    FIX::TriggerPriceDirection TriggerPriceDirection_6('U');
    noOrders_0_2.set(TriggerPriceDirection_6);
    TriggeringInstruction_6.insert(TriggerPriceDirection_6.getString());
    FIX::TriggerPriceType TriggerPriceType_6('6');
    noOrders_0_2.set(TriggerPriceType_6);
    TriggeringInstruction_6.insert(TriggerPriceType_6.getString());
    FIX::TriggerPriceTypeScope TriggerPriceTypeScope_6('1');
    noOrders_0_2.set(TriggerPriceTypeScope_6);
    TriggeringInstruction_6.insert(TriggerPriceTypeScope_6.getString());
    FIX::TriggerSecurityDesc TriggerSecurityDesc_6("STRING_826832733");
    noOrders_0_2.set(TriggerSecurityDesc_6);
    TriggeringInstruction_6.insert(TriggerSecurityDesc_6.getString());
    FIX::TriggerSecurityID TriggerSecurityID_6("STRING_1339302508");
    noOrders_0_2.set(TriggerSecurityID_6);
    TriggeringInstruction_6.insert(TriggerSecurityID_6.getString());
    FIX::TriggerSecurityIDSource TriggerSecurityIDSource_6("STRING_1113807657");
    noOrders_0_2.set(TriggerSecurityIDSource_6);
    TriggeringInstruction_6.insert(TriggerSecurityIDSource_6.getString());
    FIX::TriggerSymbol TriggerSymbol_6("STRING_416801555");
    noOrders_0_2.set(TriggerSymbol_6);
    TriggeringInstruction_6.insert(TriggerSymbol_6.getString());
    FIX::TriggerTradingSessionID TriggerTradingSessionID_6("STRING_886063425");
    noOrders_0_2.set(TriggerTradingSessionID_6);
    TriggeringInstruction_6.insert(TriggerTradingSessionID_6.getString());
    FIX::TriggerTradingSessionSubID TriggerTradingSessionSubID_6("STRING_1929264050");
    noOrders_0_2.set(TriggerTradingSessionSubID_6);
    TriggeringInstruction_6.insert(TriggerTradingSessionSubID_6.getString());
    FIX::TriggerType TriggerType_6('2');
    noOrders_0_2.set(TriggerType_6);
    TriggeringInstruction_6.insert(TriggerType_6.getString());
    all_values.push_back(TriggeringInstruction_6);
    all_compo_names.insert("TriggeringInstruction");

    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::NewOrderList::NoOrders::NoUnderlyings noUnderlyings_2_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_71;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_71("DATA_1468170618");
      noUnderlyings_2_1_0.set(EncodedUnderlyingIssuer_71);
      UnderlyingInstrument_71.insert(EncodedUnderlyingIssuer_71.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_71(372132120);
      noUnderlyings_2_1_0.set(EncodedUnderlyingIssuerLen_71);
      UnderlyingInstrument_71.insert(EncodedUnderlyingIssuerLen_71.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_71("DATA_637224260");
      noUnderlyings_2_1_0.set(EncodedUnderlyingSecurityDesc_71);
      UnderlyingInstrument_71.insert(EncodedUnderlyingSecurityDesc_71.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_71(188170641);
      noUnderlyings_2_1_0.set(EncodedUnderlyingSecurityDescLen_71);
      UnderlyingInstrument_71.insert(EncodedUnderlyingSecurityDescLen_71.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_71;
      UnderlyingAdjustedQuantity_71.setString("7505437");
      noUnderlyings_2_1_0.set(UnderlyingAdjustedQuantity_71);
      UnderlyingInstrument_71.insert(UnderlyingAdjustedQuantity_71.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_71;
      UnderlyingAllocationPercent_71.setString("43.390000");
      noUnderlyings_2_1_0.set(UnderlyingAllocationPercent_71);
      UnderlyingInstrument_71.insert(UnderlyingAllocationPercent_71.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_71;
      UnderlyingAttachmentPoint_71.setString("21.310000");
      noUnderlyings_2_1_0.set(UnderlyingAttachmentPoint_71);
      UnderlyingInstrument_71.insert(UnderlyingAttachmentPoint_71.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_71("STRING_629395368");
      noUnderlyings_2_1_0.set(UnderlyingCFICode_71);
      UnderlyingInstrument_71.insert(UnderlyingCFICode_71.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_71("STRING_1277276337");
      noUnderlyings_2_1_0.set(UnderlyingCPProgram_71);
      UnderlyingInstrument_71.insert(UnderlyingCPProgram_71.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_71("STRING_1818234003");
      noUnderlyings_2_1_0.set(UnderlyingCPRegType_71);
      UnderlyingInstrument_71.insert(UnderlyingCPRegType_71.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_71;
      UnderlyingCapValue_71.setString("9103391");
      noUnderlyings_2_1_0.set(UnderlyingCapValue_71);
      UnderlyingInstrument_71.insert(UnderlyingCapValue_71.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_71;
      UnderlyingCashAmount_71.setString("9505590");
      noUnderlyings_2_1_0.set(UnderlyingCashAmount_71);
      UnderlyingInstrument_71.insert(UnderlyingCashAmount_71.getString());
      FIX::UnderlyingCashType UnderlyingCashType_71("STRING_FIXED");
      noUnderlyings_2_1_0.set(UnderlyingCashType_71);
      UnderlyingInstrument_71.insert(UnderlyingCashType_71.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_71;
      UnderlyingContractMultiplier_71.setString("2855442");
      noUnderlyings_2_1_0.set(UnderlyingContractMultiplier_71);
      UnderlyingInstrument_71.insert(UnderlyingContractMultiplier_71.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_71(881442696);
      noUnderlyings_2_1_0.set(UnderlyingContractMultiplierUnit_71);
      UnderlyingInstrument_71.insert(UnderlyingContractMultiplierUnit_71.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_71("COUNTRY_14915188");
      noUnderlyings_2_1_0.set(UnderlyingCountryOfIssue_71);
      UnderlyingInstrument_71.insert(UnderlyingCountryOfIssue_71.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_71("LOCALMKTDATE_1755231306");
      noUnderlyings_2_1_0.set(UnderlyingCouponPaymentDate_71);
      UnderlyingInstrument_71.insert(UnderlyingCouponPaymentDate_71.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_71;
      UnderlyingCouponRate_71.setString("26.190000");
      noUnderlyings_2_1_0.set(UnderlyingCouponRate_71);
      UnderlyingInstrument_71.insert(UnderlyingCouponRate_71.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_71("STRING_1008006945");
      noUnderlyings_2_1_0.set(UnderlyingCreditRating_71);
      UnderlyingInstrument_71.insert(UnderlyingCreditRating_71.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_71("USD");
      noUnderlyings_2_1_0.set(UnderlyingCurrency_71);
      UnderlyingInstrument_71.insert(UnderlyingCurrency_71.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_71;
      UnderlyingCurrentValue_71.setString("7412461");
      noUnderlyings_2_1_0.set(UnderlyingCurrentValue_71);
      UnderlyingInstrument_71.insert(UnderlyingCurrentValue_71.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_71;
      UnderlyingDetachmentPoint_71.setString("68.360000");
      noUnderlyings_2_1_0.set(UnderlyingDetachmentPoint_71);
      UnderlyingInstrument_71.insert(UnderlyingDetachmentPoint_71.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_71;
      UnderlyingDirtyPrice_71.setString("9543712");
      noUnderlyings_2_1_0.set(UnderlyingDirtyPrice_71);
      UnderlyingInstrument_71.insert(UnderlyingDirtyPrice_71.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_71;
      UnderlyingEndPrice_71.setString("20805486");
      noUnderlyings_2_1_0.set(UnderlyingEndPrice_71);
      UnderlyingInstrument_71.insert(UnderlyingEndPrice_71.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_71;
      UnderlyingEndValue_71.setString("7284108");
      noUnderlyings_2_1_0.set(UnderlyingEndValue_71);
      UnderlyingInstrument_71.insert(UnderlyingEndValue_71.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_71(1371172820);
      noUnderlyings_2_1_0.set(UnderlyingExerciseStyle_71);
      UnderlyingInstrument_71.insert(UnderlyingExerciseStyle_71.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_71;
      UnderlyingFXRate_71.setString("8191284");
      noUnderlyings_2_1_0.set(UnderlyingFXRate_71);
      UnderlyingInstrument_71.insert(UnderlyingFXRate_71.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_71('D');
      noUnderlyings_2_1_0.set(UnderlyingFXRateCalc_71);
      UnderlyingInstrument_71.insert(UnderlyingFXRateCalc_71.getString());
      FIX::UnderlyingFactor UnderlyingFactor_71;
      UnderlyingFactor_71.setString("16657168");
      noUnderlyings_2_1_0.set(UnderlyingFactor_71);
      UnderlyingInstrument_71.insert(UnderlyingFactor_71.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_71(1704527859);
      noUnderlyings_2_1_0.set(UnderlyingFlowScheduleType_71);
      UnderlyingInstrument_71.insert(UnderlyingFlowScheduleType_71.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_71("STRING_1978361866");
      noUnderlyings_2_1_0.set(UnderlyingInstrRegistry_71);
      UnderlyingInstrument_71.insert(UnderlyingInstrRegistry_71.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_71("LOCALMKTDATE_2037848978");
      noUnderlyings_2_1_0.set(UnderlyingIssueDate_71);
      UnderlyingInstrument_71.insert(UnderlyingIssueDate_71.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_71("STRING_194268471");
      noUnderlyings_2_1_0.set(UnderlyingIssuer_71);
      UnderlyingInstrument_71.insert(UnderlyingIssuer_71.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_71("STRING_19048859");
      noUnderlyings_2_1_0.set(UnderlyingLocaleOfIssue_71);
      UnderlyingInstrument_71.insert(UnderlyingLocaleOfIssue_71.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_71("LOCALMKTDATE_640909047");
      noUnderlyings_2_1_0.set(UnderlyingMaturityDate_71);
      UnderlyingInstrument_71.insert(UnderlyingMaturityDate_71.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_71("MONTHYEAR_1641992811");
      noUnderlyings_2_1_0.set(UnderlyingMaturityMonthYear_71);
      UnderlyingInstrument_71.insert(UnderlyingMaturityMonthYear_71.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_71("TZTIMEONLY_1157170991");
      noUnderlyings_2_1_0.set(UnderlyingMaturityTime_71);
      UnderlyingInstrument_71.insert(UnderlyingMaturityTime_71.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_71;
      UnderlyingNotionalPercentageOutstanding_71.setString("44.160000");
      noUnderlyings_2_1_0.set(UnderlyingNotionalPercentageOutstanding_71);
      UnderlyingInstrument_71.insert(UnderlyingNotionalPercentageOutstanding_71.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_71('7');
      noUnderlyings_2_1_0.set(UnderlyingOptAttribute_71);
      UnderlyingInstrument_71.insert(UnderlyingOptAttribute_71.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_71;
      UnderlyingOriginalNotionalPercentageOutstanding_71.setString("13.460000");
      noUnderlyings_2_1_0.set(UnderlyingOriginalNotionalPercentageOutstanding_71);
      UnderlyingInstrument_71.insert(UnderlyingOriginalNotionalPercentageOutstanding_71.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_71("STRING_33159917");
      noUnderlyings_2_1_0.set(UnderlyingPriceUnitOfMeasure_71);
      UnderlyingInstrument_71.insert(UnderlyingPriceUnitOfMeasure_71.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_71;
      UnderlyingPriceUnitOfMeasureQty_71.setString("17223445");
      noUnderlyings_2_1_0.set(UnderlyingPriceUnitOfMeasureQty_71);
      UnderlyingInstrument_71.insert(UnderlyingPriceUnitOfMeasureQty_71.getString());
      FIX::UnderlyingProduct UnderlyingProduct_71(981420415);
      noUnderlyings_2_1_0.set(UnderlyingProduct_71);
      UnderlyingInstrument_71.insert(UnderlyingProduct_71.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_71(318704185);
      noUnderlyings_2_1_0.set(UnderlyingPutOrCall_71);
      UnderlyingInstrument_71.insert(UnderlyingPutOrCall_71.getString());
      FIX::UnderlyingPx UnderlyingPx_71;
      UnderlyingPx_71.setString("4563035");
      noUnderlyings_2_1_0.set(UnderlyingPx_71);
      UnderlyingInstrument_71.insert(UnderlyingPx_71.getString());
      FIX::UnderlyingQty UnderlyingQty_71;
      UnderlyingQty_71.setString("9963356");
      noUnderlyings_2_1_0.set(UnderlyingQty_71);
      UnderlyingInstrument_71.insert(UnderlyingQty_71.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_71("LOCALMKTDATE_2073935491");
      noUnderlyings_2_1_0.set(UnderlyingRedemptionDate_71);
      UnderlyingInstrument_71.insert(UnderlyingRedemptionDate_71.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_71("STRING_1484506190");
      noUnderlyings_2_1_0.set(UnderlyingRepoCollateralSecurityType_71);
      UnderlyingInstrument_71.insert(UnderlyingRepoCollateralSecurityType_71.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_71;
      UnderlyingRepurchaseRate_71.setString("25.480000");
      noUnderlyings_2_1_0.set(UnderlyingRepurchaseRate_71);
      UnderlyingInstrument_71.insert(UnderlyingRepurchaseRate_71.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_71(1076304154);
      noUnderlyings_2_1_0.set(UnderlyingRepurchaseTerm_71);
      UnderlyingInstrument_71.insert(UnderlyingRepurchaseTerm_71.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_71("STRING_1612044722");
      noUnderlyings_2_1_0.set(UnderlyingRestructuringType_71);
      UnderlyingInstrument_71.insert(UnderlyingRestructuringType_71.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_71("STRING_598105086");
      noUnderlyings_2_1_0.set(UnderlyingSecurityDesc_71);
      UnderlyingInstrument_71.insert(UnderlyingSecurityDesc_71.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_71("EXCHANGE_690907342");
      noUnderlyings_2_1_0.set(UnderlyingSecurityExchange_71);
      UnderlyingInstrument_71.insert(UnderlyingSecurityExchange_71.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_71("STRING_418932339");
      noUnderlyings_2_1_0.set(UnderlyingSecurityID_71);
      UnderlyingInstrument_71.insert(UnderlyingSecurityID_71.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_71("STRING_531170132");
      noUnderlyings_2_1_0.set(UnderlyingSecurityIDSource_71);
      UnderlyingInstrument_71.insert(UnderlyingSecurityIDSource_71.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_71("STRING_1419318188");
      noUnderlyings_2_1_0.set(UnderlyingSecuritySubType_71);
      UnderlyingInstrument_71.insert(UnderlyingSecuritySubType_71.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_71("STRING_1790105159");
      noUnderlyings_2_1_0.set(UnderlyingSecurityType_71);
      UnderlyingInstrument_71.insert(UnderlyingSecurityType_71.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_71("STRING_1350298604");
      noUnderlyings_2_1_0.set(UnderlyingSeniority_71);
      UnderlyingInstrument_71.insert(UnderlyingSeniority_71.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_71("STRING_1929509436");
      noUnderlyings_2_1_0.set(UnderlyingSettlMethod_71);
      UnderlyingInstrument_71.insert(UnderlyingSettlMethod_71.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_71(5);
      noUnderlyings_2_1_0.set(UnderlyingSettlementType_71);
      UnderlyingInstrument_71.insert(UnderlyingSettlementType_71.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_71;
      UnderlyingStartValue_71.setString("9073428");
      noUnderlyings_2_1_0.set(UnderlyingStartValue_71);
      UnderlyingInstrument_71.insert(UnderlyingStartValue_71.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_71("STRING_1760387655");
      noUnderlyings_2_1_0.set(UnderlyingStateOrProvinceOfIssue_71);
      UnderlyingInstrument_71.insert(UnderlyingStateOrProvinceOfIssue_71.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_71("EUR");
      noUnderlyings_2_1_0.set(UnderlyingStrikeCurrency_71);
      UnderlyingInstrument_71.insert(UnderlyingStrikeCurrency_71.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_71;
      UnderlyingStrikePrice_71.setString("17794365");
      noUnderlyings_2_1_0.set(UnderlyingStrikePrice_71);
      UnderlyingInstrument_71.insert(UnderlyingStrikePrice_71.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_71("STRING_1839612747");
      noUnderlyings_2_1_0.set(UnderlyingSymbol_71);
      UnderlyingInstrument_71.insert(UnderlyingSymbol_71.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_71("STRING_596120450");
      noUnderlyings_2_1_0.set(UnderlyingSymbolSfx_71);
      UnderlyingInstrument_71.insert(UnderlyingSymbolSfx_71.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_71("STRING_789123857");
      noUnderlyings_2_1_0.set(UnderlyingTimeUnit_71);
      UnderlyingInstrument_71.insert(UnderlyingTimeUnit_71.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_71("STRING_962433515");
      noUnderlyings_2_1_0.set(UnderlyingUnitOfMeasure_71);
      UnderlyingInstrument_71.insert(UnderlyingUnitOfMeasure_71.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_71;
      UnderlyingUnitOfMeasureQty_71.setString("13679059");
      noUnderlyings_2_1_0.set(UnderlyingUnitOfMeasureQty_71);
      UnderlyingInstrument_71.insert(UnderlyingUnitOfMeasureQty_71.getString());
      all_values.push_back(UnderlyingInstrument_71);
      all_compo_names.insert("UnderlyingInstrument");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_146;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_146("STRING_995593432");
        noUnderlyingSecurityAltID_2_0_2_0.set(UnderlyingSecurityAltID_146);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_146.insert(UnderlyingSecurityAltID_146.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_146("STRING_942766824");
        noUnderlyingSecurityAltID_2_0_2_0.set(UnderlyingSecurityAltIDSource_146);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_146.insert(UnderlyingSecurityAltIDSource_146.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_146);
        all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

        noUnderlyings_2_1_0.addGroup(noUnderlyingSecurityAltID_2_0_2_0);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_141;
        FIX::UnderlyingStipType UnderlyingStipType_141("STRING_1314297617");
        noUnderlyingStips_2_0_2_0.set(UnderlyingStipType_141);
        UnderlyingStipulations_NoUnderlyingStips_141.insert(UnderlyingStipType_141.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_141("STRING_1399070395");
        noUnderlyingStips_2_0_2_0.set(UnderlyingStipValue_141);
        UnderlyingStipulations_NoUnderlyingStips_141.insert(UnderlyingStipValue_141.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_141);
        all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

        noUnderlyings_2_1_0.addGroup(noUnderlyingStips_2_0_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_0_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_142;
        FIX::UnderlyingStipType UnderlyingStipType_142("STRING_1447317574");
        noUnderlyingStips_2_0_2_1.set(UnderlyingStipType_142);
        UnderlyingStipulations_NoUnderlyingStips_142.insert(UnderlyingStipType_142.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_142("STRING_1240749460");
        noUnderlyingStips_2_0_2_1.set(UnderlyingStipValue_142);
        UnderlyingStipulations_NoUnderlyingStips_142.insert(UnderlyingStipValue_142.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_142);
        all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

        noUnderlyings_2_1_0.addGroup(noUnderlyingStips_2_0_2_1);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_0_2_2;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_143;
        FIX::UnderlyingStipType UnderlyingStipType_143("STRING_736092937");
        noUnderlyingStips_2_0_2_2.set(UnderlyingStipType_143);
        UnderlyingStipulations_NoUnderlyingStips_143.insert(UnderlyingStipType_143.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_143("STRING_1304176474");
        noUnderlyingStips_2_0_2_2.set(UnderlyingStipValue_143);
        UnderlyingStipulations_NoUnderlyingStips_143.insert(UnderlyingStipValue_143.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_143);
        all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

        noUnderlyings_2_1_0.addGroup(noUnderlyingStips_2_0_2_2);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_136;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_136("STRING_200654011");
        noUndlyInstrumentParties_2_0_2_0.set(UnderlyingInstrumentPartyID_136);
        UndlyInstrumentParties_NoUndlyInstrumentParties_136.insert(UnderlyingInstrumentPartyID_136.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_136('1');
        noUndlyInstrumentParties_2_0_2_0.set(UnderlyingInstrumentPartyIDSource_136);
        UndlyInstrumentParties_NoUndlyInstrumentParties_136.insert(UnderlyingInstrumentPartyIDSource_136.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_136(860477309);
        noUndlyInstrumentParties_2_0_2_0.set(UnderlyingInstrumentPartyRole_136);
        UndlyInstrumentParties_NoUndlyInstrumentParties_136.insert(UnderlyingInstrumentPartyRole_136.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_136);
        all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_274;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_274("STRING_285968044");
          noUndlyInstrumentPartySubIDs_2_0_0_3_0.set(UnderlyingInstrumentPartySubID_274);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_274.insert(UnderlyingInstrumentPartySubID_274.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_274(132311849);
          noUndlyInstrumentPartySubIDs_2_0_0_3_0.set(UnderlyingInstrumentPartySubIDType_274);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_274.insert(UnderlyingInstrumentPartySubIDType_274.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_274);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_2_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_0_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_275;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_275("STRING_262207861");
          noUndlyInstrumentPartySubIDs_2_0_0_3_1.set(UnderlyingInstrumentPartySubID_275);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_275.insert(UnderlyingInstrumentPartySubID_275.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_275(1636266649);
          noUndlyInstrumentPartySubIDs_2_0_0_3_1.set(UnderlyingInstrumentPartySubIDType_275);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_275.insert(UnderlyingInstrumentPartySubIDType_275.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_275);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_2_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_0_3_1);
        }
        noUnderlyings_2_1_0.addGroup(noUndlyInstrumentParties_2_0_2_0);
      }
      noOrders_0_2.addGroup(noUnderlyings_2_1_0);
    }
    // YieldData
    multiset<string> YieldData_13;
    FIX::Yield Yield_13;
    Yield_13.setString("12.860000");
    noOrders_0_2.set(Yield_13);
    YieldData_13.insert(Yield_13.getString());
    FIX::YieldCalcDate YieldCalcDate_13("LOCALMKTDATE_1570546231");
    noOrders_0_2.set(YieldCalcDate_13);
    YieldData_13.insert(YieldCalcDate_13.getString());
    FIX::YieldRedemptionDate YieldRedemptionDate_13("LOCALMKTDATE_396125817");
    noOrders_0_2.set(YieldRedemptionDate_13);
    YieldData_13.insert(YieldRedemptionDate_13.getString());
    FIX::YieldRedemptionPrice YieldRedemptionPrice_13;
    YieldRedemptionPrice_13.setString("16747252");
    noOrders_0_2.set(YieldRedemptionPrice_13);
    YieldData_13.insert(YieldRedemptionPrice_13.getString());
    FIX::YieldRedemptionPriceType YieldRedemptionPriceType_13(621766282);
    noOrders_0_2.set(YieldRedemptionPriceType_13);
    YieldData_13.insert(YieldRedemptionPriceType_13.getString());
    FIX::YieldType YieldType_13("STRING_GOVTEQUIV");
    noOrders_0_2.set(YieldType_13);
    YieldData_13.insert(YieldType_13.getString());
    all_values.push_back(YieldData_13);
    all_compo_names.insert("YieldData");

    msg.addGroup(noOrders_0_2);
  }
  // RootParties
  // Group RootParties.NoRootPartyIDs
  {
    FIX50SP2::NewOrderList::NoRootPartyIDs noRootPartyIDs_0_0;
    // RootParties.NoRootPartyIDs
    multiset<string> RootParties_NoRootPartyIDs_4;
    FIX::RootPartyID RootPartyID_4("STRING_313895381");
    noRootPartyIDs_0_0.set(RootPartyID_4);
    RootParties_NoRootPartyIDs_4.insert(RootPartyID_4.getString());
    FIX::RootPartyIDSource RootPartyIDSource_4('2');
    noRootPartyIDs_0_0.set(RootPartyIDSource_4);
    RootParties_NoRootPartyIDs_4.insert(RootPartyIDSource_4.getString());
    FIX::RootPartyRole RootPartyRole_4(2095802017);
    noRootPartyIDs_0_0.set(RootPartyRole_4);
    RootParties_NoRootPartyIDs_4.insert(RootPartyRole_4.getString());
    all_values.push_back(RootParties_NoRootPartyIDs_4);
    all_compo_names.insert("RootParties.NoRootPartyIDs");

    // RootSubParties
    // Group RootSubParties.NoRootPartySubIDs
    {
      FIX50SP2::NewOrderList::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_0;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_7;
      FIX::RootPartySubID RootPartySubID_7("STRING_1314279857");
      noRootPartySubIDs_0_1_0.set(RootPartySubID_7);
      RootSubParties_NoRootPartySubIDs_7.insert(RootPartySubID_7.getString());
      FIX::RootPartySubIDType RootPartySubIDType_7(1565363573);
      noRootPartySubIDs_0_1_0.set(RootPartySubIDType_7);
      RootSubParties_NoRootPartySubIDs_7.insert(RootPartySubIDType_7.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_7);
      all_compo_names.insert("RootSubParties.NoRootPartySubIDs");

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_1;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_8;
      FIX::RootPartySubID RootPartySubID_8("STRING_124438681");
      noRootPartySubIDs_0_1_1.set(RootPartySubID_8);
      RootSubParties_NoRootPartySubIDs_8.insert(RootPartySubID_8.getString());
      FIX::RootPartySubIDType RootPartySubIDType_8(109563034);
      noRootPartySubIDs_0_1_1.set(RootPartySubIDType_8);
      RootSubParties_NoRootPartySubIDs_8.insert(RootPartySubIDType_8.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_8);
      all_compo_names.insert("RootSubParties.NoRootPartySubIDs");

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_1);
    }
    msg.addGroup(noRootPartyIDs_0_0);
  }
  {
    FIX50SP2::NewOrderList::NoRootPartyIDs noRootPartyIDs_0_1;
    // RootParties.NoRootPartyIDs
    multiset<string> RootParties_NoRootPartyIDs_5;
    FIX::RootPartyID RootPartyID_5("STRING_2016345544");
    noRootPartyIDs_0_1.set(RootPartyID_5);
    RootParties_NoRootPartyIDs_5.insert(RootPartyID_5.getString());
    FIX::RootPartyIDSource RootPartyIDSource_5('1');
    noRootPartyIDs_0_1.set(RootPartyIDSource_5);
    RootParties_NoRootPartyIDs_5.insert(RootPartyIDSource_5.getString());
    FIX::RootPartyRole RootPartyRole_5(1508633429);
    noRootPartyIDs_0_1.set(RootPartyRole_5);
    RootParties_NoRootPartyIDs_5.insert(RootPartyRole_5.getString());
    all_values.push_back(RootParties_NoRootPartyIDs_5);
    all_compo_names.insert("RootParties.NoRootPartyIDs");

    // RootSubParties
    // Group RootSubParties.NoRootPartySubIDs
    {
      FIX50SP2::NewOrderList::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_1_1_0;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_9;
      FIX::RootPartySubID RootPartySubID_9("STRING_532002111");
      noRootPartySubIDs_1_1_0.set(RootPartySubID_9);
      RootSubParties_NoRootPartySubIDs_9.insert(RootPartySubID_9.getString());
      FIX::RootPartySubIDType RootPartySubIDType_9(97242718);
      noRootPartySubIDs_1_1_0.set(RootPartySubIDType_9);
      RootSubParties_NoRootPartySubIDs_9.insert(RootPartySubIDType_9.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_9);
      all_compo_names.insert("RootSubParties.NoRootPartySubIDs");

      noRootPartyIDs_0_1.addGroup(noRootPartySubIDs_1_1_0);
    }
    msg.addGroup(noRootPartyIDs_0_1);
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
