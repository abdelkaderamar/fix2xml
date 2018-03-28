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
  FIX::AllowableOneSidednessCurr AllowableOneSidednessCurr_0("EUR");
  msg.set(AllowableOneSidednessCurr_0);
  NewOrderList_0.insert(AllowableOneSidednessCurr_0.getString());
  FIX::AllowableOneSidednessPct AllowableOneSidednessPct_0;
  AllowableOneSidednessPct_0.setString("11.470000");
  msg.set(AllowableOneSidednessPct_0);
  NewOrderList_0.insert(AllowableOneSidednessPct_0.getString());
  FIX::AllowableOneSidednessValue AllowableOneSidednessValue_0;
  AllowableOneSidednessValue_0.setString("912844");
  msg.set(AllowableOneSidednessValue_0);
  NewOrderList_0.insert(AllowableOneSidednessValue_0.getString());
  FIX::BidID BidID_3("STRING_894696478");
  msg.set(BidID_3);
  NewOrderList_0.insert(BidID_3.getString());
  FIX::BidType BidType_1(1);
  msg.set(BidType_1);
  NewOrderList_0.insert(BidType_1.getString());
  FIX::CancellationRights CancellationRights_4('Y');
  msg.set(CancellationRights_4);
  NewOrderList_0.insert(CancellationRights_4.getString());
  FIX::ClientBidID ClientBidID_3("STRING_1593551211");
  msg.set(ClientBidID_3);
  NewOrderList_0.insert(ClientBidID_3.getString());
  FIX::ContingencyType ContingencyType_1(3);
  msg.set(ContingencyType_1);
  NewOrderList_0.insert(ContingencyType_1.getString());
  FIX::EncodedListExecInst EncodedListExecInst_0("DATA_1282135366");
  msg.set(EncodedListExecInst_0);
  NewOrderList_0.insert(EncodedListExecInst_0.getString());
  FIX::EncodedListExecInstLen EncodedListExecInstLen_0(1391302619);
  msg.set(EncodedListExecInstLen_0);
  NewOrderList_0.insert(EncodedListExecInstLen_0.getString());
  FIX::LastFragment LastFragment_12(false);
  msg.set(LastFragment_12);
  NewOrderList_0.insert(LastFragment_12.getString());
  FIX::ListExecInst ListExecInst_0("STRING_1095049952");
  msg.set(ListExecInst_0);
  NewOrderList_0.insert(ListExecInst_0.getString());
  FIX::ListExecInstType ListExecInstType_0('5');
  msg.set(ListExecInstType_0);
  NewOrderList_0.insert(ListExecInstType_0.getString());
  FIX::ListID ListID_20("STRING_735996211");
  msg.set(ListID_20);
  NewOrderList_0.insert(ListID_20.getString());
  FIX::MoneyLaunderingStatus MoneyLaunderingStatus_4('2');
  msg.set(MoneyLaunderingStatus_4);
  NewOrderList_0.insert(MoneyLaunderingStatus_4.getString());
  FIX::ProgPeriodInterval ProgPeriodInterval_1(1872652928);
  msg.set(ProgPeriodInterval_1);
  NewOrderList_0.insert(ProgPeriodInterval_1.getString());
  FIX::ProgRptReqs ProgRptReqs_1(2);
  msg.set(ProgRptReqs_1);
  NewOrderList_0.insert(ProgRptReqs_1.getString());
  FIX::RegistID RegistID_4("STRING_48785176");
  msg.set(RegistID_4);
  NewOrderList_0.insert(RegistID_4.getString());
  FIX::TotNoOrders TotNoOrders_1(2102419357);
  msg.set(TotNoOrders_1);
  NewOrderList_0.insert(TotNoOrders_1.getString());
  all_values.push_back(NewOrderList_0);

  // ListOrdGrp
  // Group ListOrdGrp.NoOrders
  {
    FIX50SP2::NewOrderList::NoOrders noOrders_0_0;
    // ListOrdGrp.NoOrders
    multiset<string> ListOrdGrp_NoOrders_0;
    FIX::Account Account_19("STRING_366113304");
    noOrders_0_0.set(Account_19);
    ListOrdGrp_NoOrders_0.insert(Account_19.getString());
    FIX::AccountType AccountType_16(2);
    noOrders_0_0.set(AccountType_16);
    ListOrdGrp_NoOrders_0.insert(AccountType_16.getString());
    FIX::AcctIDSource AcctIDSource_12(99);
    noOrders_0_0.set(AcctIDSource_12);
    ListOrdGrp_NoOrders_0.insert(AcctIDSource_12.getString());
    FIX::AllocID AllocID_14("STRING_1005404496");
    noOrders_0_0.set(AllocID_14);
    ListOrdGrp_NoOrders_0.insert(AllocID_14.getString());
    FIX::BookingType BookingType_17(0);
    noOrders_0_0.set(BookingType_17);
    ListOrdGrp_NoOrders_0.insert(BookingType_17.getString());
    FIX::BookingUnit BookingUnit_7('2');
    noOrders_0_0.set(BookingUnit_7);
    ListOrdGrp_NoOrders_0.insert(BookingUnit_7.getString());
    FIX::CashMargin CashMargin_7('2');
    noOrders_0_0.set(CashMargin_7);
    ListOrdGrp_NoOrders_0.insert(CashMargin_7.getString());
    FIX::ClOrdID ClOrdID_31("STRING_1514070775");
    noOrders_0_0.set(ClOrdID_31);
    ListOrdGrp_NoOrders_0.insert(ClOrdID_31.getString());
    FIX::ClOrdLinkID ClOrdLinkID_10("STRING_441051015");
    noOrders_0_0.set(ClOrdLinkID_10);
    ListOrdGrp_NoOrders_0.insert(ClOrdLinkID_10.getString());
    FIX::ClearingFeeIndicator ClearingFeeIndicator_12("STRING_4");
    noOrders_0_0.set(ClearingFeeIndicator_12);
    ListOrdGrp_NoOrders_0.insert(ClearingFeeIndicator_12.getString());
    FIX::ComplianceID ComplianceID_7("STRING_648553938");
    noOrders_0_0.set(ComplianceID_7);
    ListOrdGrp_NoOrders_0.insert(ComplianceID_7.getString());
    FIX::CoveredOrUncovered CoveredOrUncovered_6(0);
    noOrders_0_0.set(CoveredOrUncovered_6);
    ListOrdGrp_NoOrders_0.insert(CoveredOrUncovered_6.getString());
    FIX::Currency Currency_42("GBP");
    noOrders_0_0.set(Currency_42);
    ListOrdGrp_NoOrders_0.insert(Currency_42.getString());
    FIX::CustOrderCapacity CustOrderCapacity_10(3);
    noOrders_0_0.set(CustOrderCapacity_10);
    ListOrdGrp_NoOrders_0.insert(CustOrderCapacity_10.getString());
    FIX::DayBookingInst DayBookingInst_7('0');
    noOrders_0_0.set(DayBookingInst_7);
    ListOrdGrp_NoOrders_0.insert(DayBookingInst_7.getString());
    FIX::Designation Designation_4("STRING_908331833");
    noOrders_0_0.set(Designation_4);
    ListOrdGrp_NoOrders_0.insert(Designation_4.getString());
    FIX::EffectiveTime EffectiveTime_4(FIX::UTCTIMESTAMP(2, 31, 49, 4, 5, 2002));
    noOrders_0_0.set(EffectiveTime_4);
    ListOrdGrp_NoOrders_0.insert(EffectiveTime_4.getString());
    FIX::EncodedText EncodedText_64("DATA_1213252295");
    noOrders_0_0.set(EncodedText_64);
    ListOrdGrp_NoOrders_0.insert(EncodedText_64.getString());
    FIX::EncodedTextLen EncodedTextLen_64(137638524);
    noOrders_0_0.set(EncodedTextLen_64);
    ListOrdGrp_NoOrders_0.insert(EncodedTextLen_64.getString());
    FIX::ExDestination ExDestination_3("EXCHANGE_1659432488");
    noOrders_0_0.set(ExDestination_3);
    ListOrdGrp_NoOrders_0.insert(ExDestination_3.getString());
    FIX::ExDestinationIDSource ExDestinationIDSource_3('B');
    noOrders_0_0.set(ExDestinationIDSource_3);
    ListOrdGrp_NoOrders_0.insert(ExDestinationIDSource_3.getString());
    FIX::ExecInst ExecInst_9("MULTIPLECHARVALUE_b");
    noOrders_0_0.set(ExecInst_9);
    ListOrdGrp_NoOrders_0.insert(ExecInst_9.getString());
    FIX::ExpireDate ExpireDate_10("LOCALMKTDATE_1614368197");
    noOrders_0_0.set(ExpireDate_10);
    ListOrdGrp_NoOrders_0.insert(ExpireDate_10.getString());
    FIX::ExpireTime ExpireTime_11(FIX::UTCTIMESTAMP(5, 17, 34, 25, 1, 2001));
    noOrders_0_0.set(ExpireTime_11);
    ListOrdGrp_NoOrders_0.insert(ExpireTime_11.getString());
    FIX::ForexReq ForexReq_7(false);
    noOrders_0_0.set(ForexReq_7);
    ListOrdGrp_NoOrders_0.insert(ForexReq_7.getString());
    FIX::GTBookingInst GTBookingInst_4(0);
    noOrders_0_0.set(GTBookingInst_4);
    ListOrdGrp_NoOrders_0.insert(GTBookingInst_4.getString());
    FIX::HandlInst HandlInst_4('2');
    noOrders_0_0.set(HandlInst_4);
    ListOrdGrp_NoOrders_0.insert(HandlInst_4.getString());
    FIX::IOIID IOIID_4("STRING_1366315995");
    noOrders_0_0.set(IOIID_4);
    ListOrdGrp_NoOrders_0.insert(IOIID_4.getString());
    FIX::ListSeqNo ListSeqNo_0(902724066);
    noOrders_0_0.set(ListSeqNo_0);
    ListOrdGrp_NoOrders_0.insert(ListSeqNo_0.getString());
    FIX::LocateReqd LocateReqd_3(true);
    noOrders_0_0.set(LocateReqd_3);
    ListOrdGrp_NoOrders_0.insert(LocateReqd_3.getString());
    FIX::MatchIncrement MatchIncrement_4;
    MatchIncrement_4.setString("12229790");
    noOrders_0_0.set(MatchIncrement_4);
    ListOrdGrp_NoOrders_0.insert(MatchIncrement_4.getString());
    FIX::MaxFloor MaxFloor_4;
    MaxFloor_4.setString("16425624");
    noOrders_0_0.set(MaxFloor_4);
    ListOrdGrp_NoOrders_0.insert(MaxFloor_4.getString());
    FIX::MaxPriceLevels MaxPriceLevels_4(521979865);
    noOrders_0_0.set(MaxPriceLevels_4);
    ListOrdGrp_NoOrders_0.insert(MaxPriceLevels_4.getString());
    FIX::MaxShow MaxShow_4;
    MaxShow_4.setString("18577051");
    noOrders_0_0.set(MaxShow_4);
    ListOrdGrp_NoOrders_0.insert(MaxShow_4.getString());
    FIX::MinQty MinQty_9;
    MinQty_9.setString("4034105");
    noOrders_0_0.set(MinQty_9);
    ListOrdGrp_NoOrders_0.insert(MinQty_9.getString());
    FIX::OrdType OrdType_42('F');
    noOrders_0_0.set(OrdType_42);
    ListOrdGrp_NoOrders_0.insert(OrdType_42.getString());
    FIX::OrderCapacity OrderCapacity_20('G');
    noOrders_0_0.set(OrderCapacity_20);
    ListOrdGrp_NoOrders_0.insert(OrderCapacity_20.getString());
    FIX::OrderQty2 OrderQty2_8;
    OrderQty2_8.setString("4463941");
    noOrders_0_0.set(OrderQty2_8);
    ListOrdGrp_NoOrders_0.insert(OrderQty2_8.getString());
    FIX::OrderRestrictions OrderRestrictions_15("MULTIPLECHARVALUE_4");
    noOrders_0_0.set(OrderRestrictions_15);
    ListOrdGrp_NoOrders_0.insert(OrderRestrictions_15.getString());
    FIX::ParticipationRate ParticipationRate_4;
    ParticipationRate_4.setString("53.110000");
    noOrders_0_0.set(ParticipationRate_4);
    ListOrdGrp_NoOrders_0.insert(ParticipationRate_4.getString());
    FIX::PositionEffect PositionEffect_10('D');
    noOrders_0_0.set(PositionEffect_10);
    ListOrdGrp_NoOrders_0.insert(PositionEffect_10.getString());
    FIX::PreTradeAnonymity PreTradeAnonymity_7(false);
    noOrders_0_0.set(PreTradeAnonymity_7);
    ListOrdGrp_NoOrders_0.insert(PreTradeAnonymity_7.getString());
    FIX::PreallocMethod PreallocMethod_7('0');
    noOrders_0_0.set(PreallocMethod_7);
    ListOrdGrp_NoOrders_0.insert(PreallocMethod_7.getString());
    FIX::PrevClosePx PrevClosePx_5;
    PrevClosePx_5.setString("17220661");
    noOrders_0_0.set(PrevClosePx_5);
    ListOrdGrp_NoOrders_0.insert(PrevClosePx_5.getString());
    FIX::Price Price_16;
    Price_16.setString("7938288");
    noOrders_0_0.set(Price_16);
    ListOrdGrp_NoOrders_0.insert(Price_16.getString());
    FIX::Price2 Price2_0;
    Price2_0.setString("950222");
    noOrders_0_0.set(Price2_0);
    ListOrdGrp_NoOrders_0.insert(Price2_0.getString());
    FIX::PriceProtectionScope PriceProtectionScope_4('0');
    noOrders_0_0.set(PriceProtectionScope_4);
    ListOrdGrp_NoOrders_0.insert(PriceProtectionScope_4.getString());
    FIX::PriceType PriceType_30(10);
    noOrders_0_0.set(PriceType_30);
    ListOrdGrp_NoOrders_0.insert(PriceType_30.getString());
    FIX::ProcessCode ProcessCode_9('2');
    noOrders_0_0.set(ProcessCode_9);
    ListOrdGrp_NoOrders_0.insert(ProcessCode_9.getString());
    FIX::QtyType QtyType_19(2);
    noOrders_0_0.set(QtyType_19);
    ListOrdGrp_NoOrders_0.insert(QtyType_19.getString());
    FIX::QuoteID QuoteID_5("STRING_1676513870");
    noOrders_0_0.set(QuoteID_5);
    ListOrdGrp_NoOrders_0.insert(QuoteID_5.getString());
    FIX::RefOrderID RefOrderID_0("STRING_536166998");
    noOrders_0_0.set(RefOrderID_0);
    ListOrdGrp_NoOrders_0.insert(RefOrderID_0.getString());
    FIX::RefOrderIDSource RefOrderIDSource_0('4');
    noOrders_0_0.set(RefOrderIDSource_0);
    ListOrdGrp_NoOrders_0.insert(RefOrderIDSource_0.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_29("STRING_416613222");
    noOrders_0_0.set(SecondaryClOrdID_29);
    ListOrdGrp_NoOrders_0.insert(SecondaryClOrdID_29.getString());
    FIX::SettlCurrency SettlCurrency_18("CHF");
    noOrders_0_0.set(SettlCurrency_18);
    ListOrdGrp_NoOrders_0.insert(SettlCurrency_18.getString());
    FIX::SettlDate SettlDate_34("LOCALMKTDATE_670783350");
    noOrders_0_0.set(SettlDate_34);
    ListOrdGrp_NoOrders_0.insert(SettlDate_34.getString());
    FIX::SettlDate2 SettlDate2_8("LOCALMKTDATE_1549102964");
    noOrders_0_0.set(SettlDate2_8);
    ListOrdGrp_NoOrders_0.insert(SettlDate2_8.getString());
    FIX::SettlInstMode SettlInstMode_0('4');
    noOrders_0_0.set(SettlInstMode_0);
    ListOrdGrp_NoOrders_0.insert(SettlInstMode_0.getString());
    FIX::SettlType SettlType_21("STRING_0");
    noOrders_0_0.set(SettlType_21);
    ListOrdGrp_NoOrders_0.insert(SettlType_21.getString());
    FIX::Side Side_30('B');
    noOrders_0_0.set(Side_30);
    ListOrdGrp_NoOrders_0.insert(Side_30.getString());
    FIX::SideValueInd SideValueInd_3(1);
    noOrders_0_0.set(SideValueInd_3);
    ListOrdGrp_NoOrders_0.insert(SideValueInd_3.getString());
    FIX::SolicitedFlag SolicitedFlag_7(false);
    noOrders_0_0.set(SolicitedFlag_7);
    ListOrdGrp_NoOrders_0.insert(SolicitedFlag_7.getString());
    FIX::StopPx StopPx_4;
    StopPx_4.setString("1007376");
    noOrders_0_0.set(StopPx_4);
    ListOrdGrp_NoOrders_0.insert(StopPx_4.getString());
    FIX::TargetStrategy TargetStrategy_4(3);
    noOrders_0_0.set(TargetStrategy_4);
    ListOrdGrp_NoOrders_0.insert(TargetStrategy_4.getString());
    FIX::TargetStrategyParameters TargetStrategyParameters_4("STRING_1471996782");
    noOrders_0_0.set(TargetStrategyParameters_4);
    ListOrdGrp_NoOrders_0.insert(TargetStrategyParameters_4.getString());
    FIX::Text Text_64("STRING_413626474");
    noOrders_0_0.set(Text_64);
    ListOrdGrp_NoOrders_0.insert(Text_64.getString());
    FIX::TimeInForce TimeInForce_32('9');
    noOrders_0_0.set(TimeInForce_32);
    ListOrdGrp_NoOrders_0.insert(TimeInForce_32.getString());
    FIX::TradeDate TradeDate_22("LOCALMKTDATE_1918390933");
    noOrders_0_0.set(TradeDate_22);
    ListOrdGrp_NoOrders_0.insert(TradeDate_22.getString());
    FIX::TradeOriginationDate TradeOriginationDate_14("LOCALMKTDATE_1908726937");
    noOrders_0_0.set(TradeOriginationDate_14);
    ListOrdGrp_NoOrders_0.insert(TradeOriginationDate_14.getString());
    FIX::TransactTime TransactTime_36(FIX::UTCTIMESTAMP(4, 33, 52, 8, 1, 2011));
    noOrders_0_0.set(TransactTime_36);
    ListOrdGrp_NoOrders_0.insert(TransactTime_36.getString());
    all_values.push_back(ListOrdGrp_NoOrders_0);

    // CommissionData
    multiset<string> CommissionData_16;
    FIX::CommCurrency CommCurrency_16("CHF");
    noOrders_0_0.set(CommCurrency_16);
    CommissionData_16.insert(CommCurrency_16.getString());
    FIX::CommType CommType_16('6');
    noOrders_0_0.set(CommType_16);
    CommissionData_16.insert(CommType_16.getString());
    FIX::Commission Commission_16;
    Commission_16.setString("10044669");
    noOrders_0_0.set(Commission_16);
    CommissionData_16.insert(Commission_16.getString());
    FIX::FundRenewWaiv FundRenewWaiv_16('Y');
    noOrders_0_0.set(FundRenewWaiv_16);
    CommissionData_16.insert(FundRenewWaiv_16.getString());
    all_values.push_back(CommissionData_16);

    // DiscretionInstructions
    multiset<string> DiscretionInstructions_4;
    FIX::DiscretionInst DiscretionInst_4('3');
    noOrders_0_0.set(DiscretionInst_4);
    DiscretionInstructions_4.insert(DiscretionInst_4.getString());
    FIX::DiscretionLimitType DiscretionLimitType_4(0);
    noOrders_0_0.set(DiscretionLimitType_4);
    DiscretionInstructions_4.insert(DiscretionLimitType_4.getString());
    FIX::DiscretionMoveType DiscretionMoveType_4(0);
    noOrders_0_0.set(DiscretionMoveType_4);
    DiscretionInstructions_4.insert(DiscretionMoveType_4.getString());
    FIX::DiscretionOffsetType DiscretionOffsetType_4(1);
    noOrders_0_0.set(DiscretionOffsetType_4);
    DiscretionInstructions_4.insert(DiscretionOffsetType_4.getString());
    FIX::DiscretionOffsetValue DiscretionOffsetValue_4;
    DiscretionOffsetValue_4.setString("3728696");
    noOrders_0_0.set(DiscretionOffsetValue_4);
    DiscretionInstructions_4.insert(DiscretionOffsetValue_4.getString());
    FIX::DiscretionRoundDirection DiscretionRoundDirection_4(1);
    noOrders_0_0.set(DiscretionRoundDirection_4);
    DiscretionInstructions_4.insert(DiscretionRoundDirection_4.getString());
    FIX::DiscretionScope DiscretionScope_4(2);
    noOrders_0_0.set(DiscretionScope_4);
    DiscretionInstructions_4.insert(DiscretionScope_4.getString());
    all_values.push_back(DiscretionInstructions_4);

    // DisplayInstruction
    multiset<string> DisplayInstruction_4;
    FIX::DisplayHighQty DisplayHighQty_4;
    DisplayHighQty_4.setString("13835871");
    noOrders_0_0.set(DisplayHighQty_4);
    DisplayInstruction_4.insert(DisplayHighQty_4.getString());
    FIX::DisplayLowQty DisplayLowQty_4;
    DisplayLowQty_4.setString("21401161");
    noOrders_0_0.set(DisplayLowQty_4);
    DisplayInstruction_4.insert(DisplayLowQty_4.getString());
    FIX::DisplayMethod DisplayMethod_4('4');
    noOrders_0_0.set(DisplayMethod_4);
    DisplayInstruction_4.insert(DisplayMethod_4.getString());
    FIX::DisplayMinIncr DisplayMinIncr_4;
    DisplayMinIncr_4.setString("14698001");
    noOrders_0_0.set(DisplayMinIncr_4);
    DisplayInstruction_4.insert(DisplayMinIncr_4.getString());
    FIX::DisplayQty DisplayQty_4;
    DisplayQty_4.setString("10612186");
    noOrders_0_0.set(DisplayQty_4);
    DisplayInstruction_4.insert(DisplayQty_4.getString());
    FIX::DisplayWhen DisplayWhen_4('2');
    noOrders_0_0.set(DisplayWhen_4);
    DisplayInstruction_4.insert(DisplayWhen_4.getString());
    FIX::RefreshQty RefreshQty_4;
    RefreshQty_4.setString("12662345");
    noOrders_0_0.set(RefreshQty_4);
    DisplayInstruction_4.insert(RefreshQty_4.getString());
    FIX::SecondaryDisplayQty SecondaryDisplayQty_4;
    SecondaryDisplayQty_4.setString("3857318");
    noOrders_0_0.set(SecondaryDisplayQty_4);
    DisplayInstruction_4.insert(SecondaryDisplayQty_4.getString());
    all_values.push_back(DisplayInstruction_4);

    // Instrument
    multiset<string> Instrument_45;
    FIX::AttachmentPoint AttachmentPoint_45;
    AttachmentPoint_45.setString("24.970000");
    noOrders_0_0.set(AttachmentPoint_45);
    Instrument_45.insert(AttachmentPoint_45.getString());
    FIX::CFICode CFICode_45("STRING_563594635");
    noOrders_0_0.set(CFICode_45);
    Instrument_45.insert(CFICode_45.getString());
    FIX::CPProgram CPProgram_45(1);
    noOrders_0_0.set(CPProgram_45);
    Instrument_45.insert(CPProgram_45.getString());
    FIX::CPRegType CPRegType_45("STRING_54425786");
    noOrders_0_0.set(CPRegType_45);
    Instrument_45.insert(CPRegType_45.getString());
    FIX::CapPrice CapPrice_45;
    CapPrice_45.setString("19866199");
    noOrders_0_0.set(CapPrice_45);
    Instrument_45.insert(CapPrice_45.getString());
    FIX::ContractMultiplier ContractMultiplier_45;
    ContractMultiplier_45.setString("15119740");
    noOrders_0_0.set(ContractMultiplier_45);
    Instrument_45.insert(ContractMultiplier_45.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_45(2);
    noOrders_0_0.set(ContractMultiplierUnit_45);
    Instrument_45.insert(ContractMultiplierUnit_45.getString());
    FIX::ContractSettlMonth ContractSettlMonth_45("MONTHYEAR_306112022");
    noOrders_0_0.set(ContractSettlMonth_45);
    Instrument_45.insert(ContractSettlMonth_45.getString());
    FIX::CountryOfIssue CountryOfIssue_45("COUNTRY_294407872");
    noOrders_0_0.set(CountryOfIssue_45);
    Instrument_45.insert(CountryOfIssue_45.getString());
    FIX::CouponPaymentDate CouponPaymentDate_45("LOCALMKTDATE_787017628");
    noOrders_0_0.set(CouponPaymentDate_45);
    Instrument_45.insert(CouponPaymentDate_45.getString());
    FIX::CouponRate CouponRate_45;
    CouponRate_45.setString("99.590000");
    noOrders_0_0.set(CouponRate_45);
    Instrument_45.insert(CouponRate_45.getString());
    FIX::CreditRating CreditRating_45("STRING_985331577");
    noOrders_0_0.set(CreditRating_45);
    Instrument_45.insert(CreditRating_45.getString());
    FIX::DatedDate DatedDate_45("LOCALMKTDATE_737199569");
    noOrders_0_0.set(DatedDate_45);
    Instrument_45.insert(DatedDate_45.getString());
    FIX::DetachmentPoint DetachmentPoint_45;
    DetachmentPoint_45.setString("48.210000");
    noOrders_0_0.set(DetachmentPoint_45);
    Instrument_45.insert(DetachmentPoint_45.getString());
    FIX::EncodedIssuer EncodedIssuer_45("DATA_1989798519");
    noOrders_0_0.set(EncodedIssuer_45);
    Instrument_45.insert(EncodedIssuer_45.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_45(216411733);
    noOrders_0_0.set(EncodedIssuerLen_45);
    Instrument_45.insert(EncodedIssuerLen_45.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_45("DATA_284606680");
    noOrders_0_0.set(EncodedSecurityDesc_45);
    Instrument_45.insert(EncodedSecurityDesc_45.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_45(570782905);
    noOrders_0_0.set(EncodedSecurityDescLen_45);
    Instrument_45.insert(EncodedSecurityDescLen_45.getString());
    FIX::ExerciseStyle ExerciseStyle_45(0);
    noOrders_0_0.set(ExerciseStyle_45);
    Instrument_45.insert(ExerciseStyle_45.getString());
    FIX::Factor Factor_45;
    Factor_45.setString("10830480");
    noOrders_0_0.set(Factor_45);
    Instrument_45.insert(Factor_45.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_45(true);
    noOrders_0_0.set(FlexProductEligibilityIndicator_45);
    Instrument_45.insert(FlexProductEligibilityIndicator_45.getString());
    FIX::FlexibleIndicator FlexibleIndicator_45(false);
    noOrders_0_0.set(FlexibleIndicator_45);
    Instrument_45.insert(FlexibleIndicator_45.getString());
    FIX::FloorPrice FloorPrice_45;
    FloorPrice_45.setString("12831086");
    noOrders_0_0.set(FloorPrice_45);
    Instrument_45.insert(FloorPrice_45.getString());
    FIX::FlowScheduleType FlowScheduleType_45(1);
    noOrders_0_0.set(FlowScheduleType_45);
    Instrument_45.insert(FlowScheduleType_45.getString());
    FIX::InstrRegistry InstrRegistry_45("STRING_671478360");
    noOrders_0_0.set(InstrRegistry_45);
    Instrument_45.insert(InstrRegistry_45.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_45('1');
    noOrders_0_0.set(InstrmtAssignmentMethod_45);
    Instrument_45.insert(InstrmtAssignmentMethod_45.getString());
    FIX::InterestAccrualDate InterestAccrualDate_45("LOCALMKTDATE_1649556162");
    noOrders_0_0.set(InterestAccrualDate_45);
    Instrument_45.insert(InterestAccrualDate_45.getString());
    FIX::IssueDate IssueDate_45("LOCALMKTDATE_1732697048");
    noOrders_0_0.set(IssueDate_45);
    Instrument_45.insert(IssueDate_45.getString());
    FIX::Issuer Issuer_45("STRING_941483089");
    noOrders_0_0.set(Issuer_45);
    Instrument_45.insert(Issuer_45.getString());
    FIX::ListMethod ListMethod_45(0);
    noOrders_0_0.set(ListMethod_45);
    Instrument_45.insert(ListMethod_45.getString());
    FIX::LocaleOfIssue LocaleOfIssue_45("STRING_2118428871");
    noOrders_0_0.set(LocaleOfIssue_45);
    Instrument_45.insert(LocaleOfIssue_45.getString());
    FIX::MaturityDate MaturityDate_45("LOCALMKTDATE_1234665586");
    noOrders_0_0.set(MaturityDate_45);
    Instrument_45.insert(MaturityDate_45.getString());
    FIX::MaturityMonthYear MaturityMonthYear_45("MONTHYEAR_1331901733");
    noOrders_0_0.set(MaturityMonthYear_45);
    Instrument_45.insert(MaturityMonthYear_45.getString());
    FIX::MaturityTime MaturityTime_45("TZTIMEONLY_127584331");
    noOrders_0_0.set(MaturityTime_45);
    Instrument_45.insert(MaturityTime_45.getString());
    FIX::MinPriceIncrement MinPriceIncrement_45;
    MinPriceIncrement_45.setString("12890913");
    noOrders_0_0.set(MinPriceIncrement_45);
    Instrument_45.insert(MinPriceIncrement_45.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_45;
    MinPriceIncrementAmount_45.setString("11710380");
    noOrders_0_0.set(MinPriceIncrementAmount_45);
    Instrument_45.insert(MinPriceIncrementAmount_45.getString());
    FIX::NTPositionLimit NTPositionLimit_45(1639558379);
    noOrders_0_0.set(NTPositionLimit_45);
    Instrument_45.insert(NTPositionLimit_45.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_45;
    NotionalPercentageOutstanding_45.setString("68.240000");
    noOrders_0_0.set(NotionalPercentageOutstanding_45);
    Instrument_45.insert(NotionalPercentageOutstanding_45.getString());
    FIX::OptAttribute OptAttribute_45('1');
    noOrders_0_0.set(OptAttribute_45);
    Instrument_45.insert(OptAttribute_45.getString());
    FIX::OptPayoutAmount OptPayoutAmount_45;
    OptPayoutAmount_45.setString("19339662");
    noOrders_0_0.set(OptPayoutAmount_45);
    Instrument_45.insert(OptPayoutAmount_45.getString());
    FIX::OptPayoutType OptPayoutType_45(3);
    noOrders_0_0.set(OptPayoutType_45);
    Instrument_45.insert(OptPayoutType_45.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_45;
    OriginalNotionalPercentageOutstanding_45.setString("64.160000");
    noOrders_0_0.set(OriginalNotionalPercentageOutstanding_45);
    Instrument_45.insert(OriginalNotionalPercentageOutstanding_45.getString());
    FIX::Pool Pool_45("STRING_771814181");
    noOrders_0_0.set(Pool_45);
    Instrument_45.insert(Pool_45.getString());
    FIX::PositionLimit PositionLimit_45(1763374021);
    noOrders_0_0.set(PositionLimit_45);
    Instrument_45.insert(PositionLimit_45.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_45("STRING_INX");
    noOrders_0_0.set(PriceQuoteMethod_45);
    Instrument_45.insert(PriceQuoteMethod_45.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_45("STRING_614129052");
    noOrders_0_0.set(PriceUnitOfMeasure_45);
    Instrument_45.insert(PriceUnitOfMeasure_45.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_45;
    PriceUnitOfMeasureQty_45.setString("19797857");
    noOrders_0_0.set(PriceUnitOfMeasureQty_45);
    Instrument_45.insert(PriceUnitOfMeasureQty_45.getString());
    FIX::Product Product_47(11);
    noOrders_0_0.set(Product_47);
    Instrument_45.insert(Product_47.getString());
    FIX::ProductComplex ProductComplex_45("STRING_1184911958");
    noOrders_0_0.set(ProductComplex_45);
    Instrument_45.insert(ProductComplex_45.getString());
    FIX::PutOrCall PutOrCall_45(1);
    noOrders_0_0.set(PutOrCall_45);
    Instrument_45.insert(PutOrCall_45.getString());
    FIX::RedemptionDate RedemptionDate_45("LOCALMKTDATE_1873705931");
    noOrders_0_0.set(RedemptionDate_45);
    Instrument_45.insert(RedemptionDate_45.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_45("STRING_2128564474");
    noOrders_0_0.set(RepoCollateralSecurityType_45);
    Instrument_45.insert(RepoCollateralSecurityType_45.getString());
    FIX::RepurchaseRate RepurchaseRate_45;
    RepurchaseRate_45.setString("50.810000");
    noOrders_0_0.set(RepurchaseRate_45);
    Instrument_45.insert(RepurchaseRate_45.getString());
    FIX::RepurchaseTerm RepurchaseTerm_45(1009330945);
    noOrders_0_0.set(RepurchaseTerm_45);
    Instrument_45.insert(RepurchaseTerm_45.getString());
    FIX::RestructuringType RestructuringType_45("STRING_MM");
    noOrders_0_0.set(RestructuringType_45);
    Instrument_45.insert(RestructuringType_45.getString());
    FIX::SecurityDesc SecurityDesc_45("STRING_1294863441");
    noOrders_0_0.set(SecurityDesc_45);
    Instrument_45.insert(SecurityDesc_45.getString());
    FIX::SecurityExchange SecurityExchange_45("EXCHANGE_2071258011");
    noOrders_0_0.set(SecurityExchange_45);
    Instrument_45.insert(SecurityExchange_45.getString());
    FIX::SecurityGroup SecurityGroup_45("STRING_1810393040");
    noOrders_0_0.set(SecurityGroup_45);
    Instrument_45.insert(SecurityGroup_45.getString());
    FIX::SecurityID SecurityID_45("STRING_880076842");
    noOrders_0_0.set(SecurityID_45);
    Instrument_45.insert(SecurityID_45.getString());
    FIX::SecurityIDSource SecurityIDSource_45("STRING_5");
    noOrders_0_0.set(SecurityIDSource_45);
    Instrument_45.insert(SecurityIDSource_45.getString());
    FIX::SecurityStatus SecurityStatus_45("STRING_1");
    noOrders_0_0.set(SecurityStatus_45);
    Instrument_45.insert(SecurityStatus_45.getString());
    FIX::SecuritySubType SecuritySubType_46("STRING_851022065");
    noOrders_0_0.set(SecuritySubType_46);
    Instrument_45.insert(SecuritySubType_46.getString());
    FIX::SecurityType SecurityType_47("STRING_?");
    noOrders_0_0.set(SecurityType_47);
    Instrument_45.insert(SecurityType_47.getString());
    FIX::Seniority Seniority_45("STRING_SR");
    noOrders_0_0.set(Seniority_45);
    Instrument_45.insert(Seniority_45.getString());
    FIX::SettlMethod SettlMethod_45('C');
    noOrders_0_0.set(SettlMethod_45);
    Instrument_45.insert(SettlMethod_45.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_45("STRING_1241530763");
    noOrders_0_0.set(SettleOnOpenFlag_45);
    Instrument_45.insert(SettleOnOpenFlag_45.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_45("STRING_786672658");
    noOrders_0_0.set(StateOrProvinceOfIssue_45);
    Instrument_45.insert(StateOrProvinceOfIssue_45.getString());
    FIX::StrikeCurrency StrikeCurrency_45("CHF");
    noOrders_0_0.set(StrikeCurrency_45);
    Instrument_45.insert(StrikeCurrency_45.getString());
    FIX::StrikeMultiplier StrikeMultiplier_45;
    StrikeMultiplier_45.setString("1163391");
    noOrders_0_0.set(StrikeMultiplier_45);
    Instrument_45.insert(StrikeMultiplier_45.getString());
    FIX::StrikePrice StrikePrice_45;
    StrikePrice_45.setString("2571637");
    noOrders_0_0.set(StrikePrice_45);
    Instrument_45.insert(StrikePrice_45.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_45(2);
    noOrders_0_0.set(StrikePriceBoundaryMethod_45);
    Instrument_45.insert(StrikePriceBoundaryMethod_45.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_45;
    StrikePriceBoundaryPrecision_45.setString("55.300000");
    noOrders_0_0.set(StrikePriceBoundaryPrecision_45);
    Instrument_45.insert(StrikePriceBoundaryPrecision_45.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_45(1);
    noOrders_0_0.set(StrikePriceDeterminationMethod_45);
    Instrument_45.insert(StrikePriceDeterminationMethod_45.getString());
    FIX::StrikeValue StrikeValue_45;
    StrikeValue_45.setString("21227524");
    noOrders_0_0.set(StrikeValue_45);
    Instrument_45.insert(StrikeValue_45.getString());
    FIX::Symbol Symbol_45("STRING_820166767");
    noOrders_0_0.set(Symbol_45);
    Instrument_45.insert(Symbol_45.getString());
    FIX::SymbolSfx SymbolSfx_45("STRING_WI");
    noOrders_0_0.set(SymbolSfx_45);
    Instrument_45.insert(SymbolSfx_45.getString());
    FIX::TimeUnit TimeUnit_45("STRING_Mo");
    noOrders_0_0.set(TimeUnit_45);
    Instrument_45.insert(TimeUnit_45.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_45(2);
    noOrders_0_0.set(UnderlyingPriceDeterminationMethod_45);
    Instrument_45.insert(UnderlyingPriceDeterminationMethod_45.getString());
    FIX::UnitOfMeasure UnitOfMeasure_45("STRING_Bbl");
    noOrders_0_0.set(UnitOfMeasure_45);
    Instrument_45.insert(UnitOfMeasure_45.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_45;
    UnitOfMeasureQty_45.setString("18995937");
    noOrders_0_0.set(UnitOfMeasureQty_45);
    Instrument_45.insert(UnitOfMeasureQty_45.getString());
    FIX::ValuationMethod ValuationMethod_45("STRING_CDS");
    noOrders_0_0.set(ValuationMethod_45);
    Instrument_45.insert(ValuationMethod_45.getString());
    all_values.push_back(Instrument_45);

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
      ComplexEventPrice_89.setString("1988942");
      noComplexEvents_0_1_0.set(ComplexEventPrice_89);
      ComplexEvents_NoComplexEvents_89.insert(ComplexEventPrice_89.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_89(5);
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryMethod_89);
      ComplexEvents_NoComplexEvents_89.insert(ComplexEventPriceBoundaryMethod_89.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_89;
      ComplexEventPriceBoundaryPrecision_89.setString("86.190000");
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryPrecision_89);
      ComplexEvents_NoComplexEvents_89.insert(ComplexEventPriceBoundaryPrecision_89.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_89(1);
      noComplexEvents_0_1_0.set(ComplexEventPriceTimeType_89);
      ComplexEvents_NoComplexEvents_89.insert(ComplexEventPriceTimeType_89.getString());
      FIX::ComplexEventType ComplexEventType_89(5);
      noComplexEvents_0_1_0.set(ComplexEventType_89);
      ComplexEvents_NoComplexEvents_89.insert(ComplexEventType_89.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_89;
      ComplexOptPayoutAmount_89.setString("4029518");
      noComplexEvents_0_1_0.set(ComplexOptPayoutAmount_89);
      ComplexEvents_NoComplexEvents_89.insert(ComplexOptPayoutAmount_89.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_89);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_183;
        FIX::ComplexEventEndDate ComplexEventEndDate_183(FIX::UTCTIMESTAMP(14, 52, 58, 6, 8, 2014));
        noComplexEventDates_0_0_2_0.set(ComplexEventEndDate_183);
        ComplexEventDates_NoComplexEventDates_183.insert(ComplexEventEndDate_183.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_183(FIX::UTCTIMESTAMP(22, 10, 45, 1, 2, 2007));
        noComplexEventDates_0_0_2_0.set(ComplexEventStartDate_183);
        ComplexEventDates_NoComplexEventDates_183.insert(ComplexEventStartDate_183.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_183);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_374;
          FIX::ComplexEventEndTime ComplexEventEndTime_374(FIX::UTCTIMEONLY(10, 0, 5));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventEndTime_374);
          ComplexEventTimes_NoComplexEventTimes_374.insert(ComplexEventEndTime_374.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_374(FIX::UTCTIMEONLY(1, 5, 3));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventStartTime_374);
          ComplexEventTimes_NoComplexEventTimes_374.insert(ComplexEventStartTime_374.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_374);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_184;
        FIX::ComplexEventEndDate ComplexEventEndDate_184(FIX::UTCTIMESTAMP(19, 42, 45, 20, 11, 2000));
        noComplexEventDates_0_0_2_1.set(ComplexEventEndDate_184);
        ComplexEventDates_NoComplexEventDates_184.insert(ComplexEventEndDate_184.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_184(FIX::UTCTIMESTAMP(1, 48, 5, 15, 7, 2006));
        noComplexEventDates_0_0_2_1.set(ComplexEventStartDate_184);
        ComplexEventDates_NoComplexEventDates_184.insert(ComplexEventStartDate_184.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_184);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_375;
          FIX::ComplexEventEndTime ComplexEventEndTime_375(FIX::UTCTIMEONLY(2, 45, 5));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventEndTime_375);
          ComplexEventTimes_NoComplexEventTimes_375.insert(ComplexEventEndTime_375.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_375(FIX::UTCTIMEONLY(14, 42, 57));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventStartTime_375);
          ComplexEventTimes_NoComplexEventTimes_375.insert(ComplexEventStartTime_375.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_375);

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_376;
          FIX::ComplexEventEndTime ComplexEventEndTime_376(FIX::UTCTIMEONLY(9, 57, 36));
          noComplexEventTimes_0_0_1_3_1.set(ComplexEventEndTime_376);
          ComplexEventTimes_NoComplexEventTimes_376.insert(ComplexEventEndTime_376.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_376(FIX::UTCTIMEONLY(2, 34, 13));
          noComplexEventTimes_0_0_1_3_1.set(ComplexEventStartTime_376);
          ComplexEventTimes_NoComplexEventTimes_376.insert(ComplexEventStartTime_376.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_376);

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_1);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_377;
          FIX::ComplexEventEndTime ComplexEventEndTime_377(FIX::UTCTIMEONLY(9, 48, 38));
          noComplexEventTimes_0_0_1_3_2.set(ComplexEventEndTime_377);
          ComplexEventTimes_NoComplexEventTimes_377.insert(ComplexEventEndTime_377.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_377(FIX::UTCTIMEONLY(2, 49, 50));
          noComplexEventTimes_0_0_1_3_2.set(ComplexEventStartTime_377);
          ComplexEventTimes_NoComplexEventTimes_377.insert(ComplexEventStartTime_377.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_377);

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_2);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_1);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_185;
        FIX::ComplexEventEndDate ComplexEventEndDate_185(FIX::UTCTIMESTAMP(5, 48, 42, 0, 5, 2017));
        noComplexEventDates_0_0_2_2.set(ComplexEventEndDate_185);
        ComplexEventDates_NoComplexEventDates_185.insert(ComplexEventEndDate_185.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_185(FIX::UTCTIMESTAMP(19, 3, 49, 26, 10, 2005));
        noComplexEventDates_0_0_2_2.set(ComplexEventStartDate_185);
        ComplexEventDates_NoComplexEventDates_185.insert(ComplexEventStartDate_185.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_185);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_378;
          FIX::ComplexEventEndTime ComplexEventEndTime_378(FIX::UTCTIMEONLY(20, 13, 33));
          noComplexEventTimes_0_0_2_3_0.set(ComplexEventEndTime_378);
          ComplexEventTimes_NoComplexEventTimes_378.insert(ComplexEventEndTime_378.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_378(FIX::UTCTIMEONLY(7, 7, 48));
          noComplexEventTimes_0_0_2_3_0.set(ComplexEventStartTime_378);
          ComplexEventTimes_NoComplexEventTimes_378.insert(ComplexEventStartTime_378.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_378);

          noComplexEventDates_0_0_2_2.addGroup(noComplexEventTimes_0_0_2_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_379;
          FIX::ComplexEventEndTime ComplexEventEndTime_379(FIX::UTCTIMEONLY(16, 28, 55));
          noComplexEventTimes_0_0_2_3_1.set(ComplexEventEndTime_379);
          ComplexEventTimes_NoComplexEventTimes_379.insert(ComplexEventEndTime_379.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_379(FIX::UTCTIMEONLY(7, 36, 15));
          noComplexEventTimes_0_0_2_3_1.set(ComplexEventStartTime_379);
          ComplexEventTimes_NoComplexEventTimes_379.insert(ComplexEventStartTime_379.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_379);

          noComplexEventDates_0_0_2_2.addGroup(noComplexEventTimes_0_0_2_3_1);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_380;
          FIX::ComplexEventEndTime ComplexEventEndTime_380(FIX::UTCTIMEONLY(17, 3, 21));
          noComplexEventTimes_0_0_2_3_2.set(ComplexEventEndTime_380);
          ComplexEventTimes_NoComplexEventTimes_380.insert(ComplexEventEndTime_380.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_380(FIX::UTCTIMEONLY(8, 38, 5));
          noComplexEventTimes_0_0_2_3_2.set(ComplexEventStartTime_380);
          ComplexEventTimes_NoComplexEventTimes_380.insert(ComplexEventStartTime_380.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_380);

          noComplexEventDates_0_0_2_2.addGroup(noComplexEventTimes_0_0_2_3_2);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_2);
      }
      noOrders_0_0.addGroup(noComplexEvents_0_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoComplexEvents noComplexEvents_0_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_90;
      FIX::ComplexEventCondition ComplexEventCondition_90(2);
      noComplexEvents_0_1_1.set(ComplexEventCondition_90);
      ComplexEvents_NoComplexEvents_90.insert(ComplexEventCondition_90.getString());
      FIX::ComplexEventPrice ComplexEventPrice_90;
      ComplexEventPrice_90.setString("4056599");
      noComplexEvents_0_1_1.set(ComplexEventPrice_90);
      ComplexEvents_NoComplexEvents_90.insert(ComplexEventPrice_90.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_90(5);
      noComplexEvents_0_1_1.set(ComplexEventPriceBoundaryMethod_90);
      ComplexEvents_NoComplexEvents_90.insert(ComplexEventPriceBoundaryMethod_90.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_90;
      ComplexEventPriceBoundaryPrecision_90.setString("57.970000");
      noComplexEvents_0_1_1.set(ComplexEventPriceBoundaryPrecision_90);
      ComplexEvents_NoComplexEvents_90.insert(ComplexEventPriceBoundaryPrecision_90.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_90(2);
      noComplexEvents_0_1_1.set(ComplexEventPriceTimeType_90);
      ComplexEvents_NoComplexEvents_90.insert(ComplexEventPriceTimeType_90.getString());
      FIX::ComplexEventType ComplexEventType_90(4);
      noComplexEvents_0_1_1.set(ComplexEventType_90);
      ComplexEvents_NoComplexEvents_90.insert(ComplexEventType_90.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_90;
      ComplexOptPayoutAmount_90.setString("17398258");
      noComplexEvents_0_1_1.set(ComplexOptPayoutAmount_90);
      ComplexEvents_NoComplexEvents_90.insert(ComplexOptPayoutAmount_90.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_90);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_186;
        FIX::ComplexEventEndDate ComplexEventEndDate_186(FIX::UTCTIMESTAMP(6, 36, 17, 25, 12, 2004));
        noComplexEventDates_0_1_2_0.set(ComplexEventEndDate_186);
        ComplexEventDates_NoComplexEventDates_186.insert(ComplexEventEndDate_186.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_186(FIX::UTCTIMESTAMP(15, 26, 49, 20, 2, 2013));
        noComplexEventDates_0_1_2_0.set(ComplexEventStartDate_186);
        ComplexEventDates_NoComplexEventDates_186.insert(ComplexEventStartDate_186.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_186);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_381;
          FIX::ComplexEventEndTime ComplexEventEndTime_381(FIX::UTCTIMEONLY(6, 23, 1));
          noComplexEventTimes_0_1_0_3_0.set(ComplexEventEndTime_381);
          ComplexEventTimes_NoComplexEventTimes_381.insert(ComplexEventEndTime_381.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_381(FIX::UTCTIMEONLY(11, 39, 57));
          noComplexEventTimes_0_1_0_3_0.set(ComplexEventStartTime_381);
          ComplexEventTimes_NoComplexEventTimes_381.insert(ComplexEventStartTime_381.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_381);

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_382;
          FIX::ComplexEventEndTime ComplexEventEndTime_382(FIX::UTCTIMEONLY(13, 52, 8));
          noComplexEventTimes_0_1_0_3_1.set(ComplexEventEndTime_382);
          ComplexEventTimes_NoComplexEventTimes_382.insert(ComplexEventEndTime_382.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_382(FIX::UTCTIMEONLY(14, 1, 15));
          noComplexEventTimes_0_1_0_3_1.set(ComplexEventStartTime_382);
          ComplexEventTimes_NoComplexEventTimes_382.insert(ComplexEventStartTime_382.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_382);

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_1);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_383;
          FIX::ComplexEventEndTime ComplexEventEndTime_383(FIX::UTCTIMEONLY(11, 44, 2));
          noComplexEventTimes_0_1_0_3_2.set(ComplexEventEndTime_383);
          ComplexEventTimes_NoComplexEventTimes_383.insert(ComplexEventEndTime_383.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_383(FIX::UTCTIMEONLY(7, 52, 30));
          noComplexEventTimes_0_1_0_3_2.set(ComplexEventStartTime_383);
          ComplexEventTimes_NoComplexEventTimes_383.insert(ComplexEventStartTime_383.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_383);

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_2);
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
      multiset<string> EvntGrp_NoEvents_83;
      FIX::EventDate EventDate_83("LOCALMKTDATE_1810661958");
      noEvents_0_1_0.set(EventDate_83);
      EvntGrp_NoEvents_83.insert(EventDate_83.getString());
      FIX::EventPx EventPx_83;
      EventPx_83.setString("2479863");
      noEvents_0_1_0.set(EventPx_83);
      EvntGrp_NoEvents_83.insert(EventPx_83.getString());
      FIX::EventText EventText_83("STRING_1047238503");
      noEvents_0_1_0.set(EventText_83);
      EvntGrp_NoEvents_83.insert(EventText_83.getString());
      FIX::EventTime EventTime_83(FIX::UTCTIMESTAMP(0, 23, 52, 15, 4, 2011));
      noEvents_0_1_0.set(EventTime_83);
      EvntGrp_NoEvents_83.insert(EventTime_83.getString());
      FIX::EventType EventType_83(12);
      noEvents_0_1_0.set(EventType_83);
      EvntGrp_NoEvents_83.insert(EventType_83.getString());
      all_values.push_back(EvntGrp_NoEvents_83);

      noOrders_0_0.addGroup(noEvents_0_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoEvents noEvents_0_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_84;
      FIX::EventDate EventDate_84("LOCALMKTDATE_1761611210");
      noEvents_0_1_1.set(EventDate_84);
      EvntGrp_NoEvents_84.insert(EventDate_84.getString());
      FIX::EventPx EventPx_84;
      EventPx_84.setString("12507916");
      noEvents_0_1_1.set(EventPx_84);
      EvntGrp_NoEvents_84.insert(EventPx_84.getString());
      FIX::EventText EventText_84("STRING_1050142180");
      noEvents_0_1_1.set(EventText_84);
      EvntGrp_NoEvents_84.insert(EventText_84.getString());
      FIX::EventTime EventTime_84(FIX::UTCTIMESTAMP(1, 24, 13, 9, 3, 2000));
      noEvents_0_1_1.set(EventTime_84);
      EvntGrp_NoEvents_84.insert(EventTime_84.getString());
      FIX::EventType EventType_84(18);
      noEvents_0_1_1.set(EventType_84);
      EvntGrp_NoEvents_84.insert(EventType_84.getString());
      all_values.push_back(EvntGrp_NoEvents_84);

      noOrders_0_0.addGroup(noEvents_0_1_1);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoEvents noEvents_0_1_2;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_85;
      FIX::EventDate EventDate_85("LOCALMKTDATE_206986803");
      noEvents_0_1_2.set(EventDate_85);
      EvntGrp_NoEvents_85.insert(EventDate_85.getString());
      FIX::EventPx EventPx_85;
      EventPx_85.setString("13475032");
      noEvents_0_1_2.set(EventPx_85);
      EvntGrp_NoEvents_85.insert(EventPx_85.getString());
      FIX::EventText EventText_85("STRING_221615441");
      noEvents_0_1_2.set(EventText_85);
      EvntGrp_NoEvents_85.insert(EventText_85.getString());
      FIX::EventTime EventTime_85(FIX::UTCTIMESTAMP(21, 0, 49, 8, 12, 2017));
      noEvents_0_1_2.set(EventTime_85);
      EvntGrp_NoEvents_85.insert(EventTime_85.getString());
      FIX::EventType EventType_85(8);
      noEvents_0_1_2.set(EventType_85);
      EvntGrp_NoEvents_85.insert(EventType_85.getString());
      all_values.push_back(EvntGrp_NoEvents_85);

      noOrders_0_0.addGroup(noEvents_0_1_2);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::NewOrderList::NoOrders::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_83;
      FIX::InstrumentPartyID InstrumentPartyID_83("STRING_35849051");
      noInstrumentParties_0_1_0.set(InstrumentPartyID_83);
      InstrumentParties_NoInstrumentParties_83.insert(InstrumentPartyID_83.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_83('1');
      noInstrumentParties_0_1_0.set(InstrumentPartyIDSource_83);
      InstrumentParties_NoInstrumentParties_83.insert(InstrumentPartyIDSource_83.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_83(1741525698);
      noInstrumentParties_0_1_0.set(InstrumentPartyRole_83);
      InstrumentParties_NoInstrumentParties_83.insert(InstrumentPartyRole_83.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_83);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderList::NoOrders::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_185;
        FIX::InstrumentPartySubID InstrumentPartySubID_185("STRING_489808115");
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubID_185);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_185.insert(InstrumentPartySubID_185.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_185(120553609);
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubIDType_185);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_185.insert(InstrumentPartySubIDType_185.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_185);

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      noOrders_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoInstrumentParties noInstrumentParties_0_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_84;
      FIX::InstrumentPartyID InstrumentPartyID_84("STRING_723647336");
      noInstrumentParties_0_1_1.set(InstrumentPartyID_84);
      InstrumentParties_NoInstrumentParties_84.insert(InstrumentPartyID_84.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_84('3');
      noInstrumentParties_0_1_1.set(InstrumentPartyIDSource_84);
      InstrumentParties_NoInstrumentParties_84.insert(InstrumentPartyIDSource_84.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_84(1882164820);
      noInstrumentParties_0_1_1.set(InstrumentPartyRole_84);
      InstrumentParties_NoInstrumentParties_84.insert(InstrumentPartyRole_84.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_84);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderList::NoOrders::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_186;
        FIX::InstrumentPartySubID InstrumentPartySubID_186("STRING_1410906358");
        noInstrumentPartySubIDs_0_1_2_0.set(InstrumentPartySubID_186);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_186.insert(InstrumentPartySubID_186.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_186(1307188125);
        noInstrumentPartySubIDs_0_1_2_0.set(InstrumentPartySubIDType_186);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_186.insert(InstrumentPartySubIDType_186.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_186);

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_187;
        FIX::InstrumentPartySubID InstrumentPartySubID_187("STRING_84316558");
        noInstrumentPartySubIDs_0_1_2_1.set(InstrumentPartySubID_187);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_187.insert(InstrumentPartySubID_187.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_187(2087513603);
        noInstrumentPartySubIDs_0_1_2_1.set(InstrumentPartySubIDType_187);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_187.insert(InstrumentPartySubIDType_187.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_187);

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_188;
        FIX::InstrumentPartySubID InstrumentPartySubID_188("STRING_622882970");
        noInstrumentPartySubIDs_0_1_2_2.set(InstrumentPartySubID_188);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_188.insert(InstrumentPartySubID_188.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_188(1077991488);
        noInstrumentPartySubIDs_0_1_2_2.set(InstrumentPartySubIDType_188);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_188.insert(InstrumentPartySubIDType_188.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_188);

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_2);
      }
      noOrders_0_0.addGroup(noInstrumentParties_0_1_1);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::NewOrderList::NoOrders::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_96;
      FIX::SecurityAltID SecurityAltID_96("STRING_1569075236");
      noSecurityAltID_0_1_0.set(SecurityAltID_96);
      SecAltIDGrp_NoSecurityAltID_96.insert(SecurityAltID_96.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_96("STRING_1191200625");
      noSecurityAltID_0_1_0.set(SecurityAltIDSource_96);
      SecAltIDGrp_NoSecurityAltID_96.insert(SecurityAltIDSource_96.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_96);

      noOrders_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoSecurityAltID noSecurityAltID_0_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_97;
      FIX::SecurityAltID SecurityAltID_97("STRING_1452996104");
      noSecurityAltID_0_1_1.set(SecurityAltID_97);
      SecAltIDGrp_NoSecurityAltID_97.insert(SecurityAltID_97.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_97("STRING_769094873");
      noSecurityAltID_0_1_1.set(SecurityAltIDSource_97);
      SecAltIDGrp_NoSecurityAltID_97.insert(SecurityAltIDSource_97.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_97);

      noOrders_0_0.addGroup(noSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoSecurityAltID noSecurityAltID_0_1_2;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_98;
      FIX::SecurityAltID SecurityAltID_98("STRING_1412816066");
      noSecurityAltID_0_1_2.set(SecurityAltID_98);
      SecAltIDGrp_NoSecurityAltID_98.insert(SecurityAltID_98.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_98("STRING_1422466841");
      noSecurityAltID_0_1_2.set(SecurityAltIDSource_98);
      SecAltIDGrp_NoSecurityAltID_98.insert(SecurityAltIDSource_98.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_98);

      noOrders_0_0.addGroup(noSecurityAltID_0_1_2);
    }
    // SecurityXML
    multiset<string> SecurityXML_90;
    FIX::SecurityXML SecurityXML_91("XMLDATA_1542527366");
    noOrders_0_0.set(SecurityXML_91);
    FIX::SecurityXMLLen SecurityXMLLen_45(1774530386);
    noOrders_0_0.set(SecurityXMLLen_45);
    FIX::SecurityXMLSchema SecurityXMLSchema_45("STRING_1869127770");
    noOrders_0_0.set(SecurityXMLSchema_45);
    SecurityXML_90.insert(SecurityXMLSchema_45.getString());
    all_values.push_back(SecurityXML_90);

    // OrderQtyData
    multiset<string> OrderQtyData_13;
    FIX::CashOrderQty CashOrderQty_13;
    CashOrderQty_13.setString("17330849");
    noOrders_0_0.set(CashOrderQty_13);
    OrderQtyData_13.insert(CashOrderQty_13.getString());
    FIX::OrderPercent OrderPercent_13;
    OrderPercent_13.setString("52.980000");
    noOrders_0_0.set(OrderPercent_13);
    OrderQtyData_13.insert(OrderPercent_13.getString());
    FIX::OrderQty OrderQty_21;
    OrderQty_21.setString("19789670");
    noOrders_0_0.set(OrderQty_21);
    OrderQtyData_13.insert(OrderQty_21.getString());
    FIX::RoundingDirection RoundingDirection_13('1');
    noOrders_0_0.set(RoundingDirection_13);
    OrderQtyData_13.insert(RoundingDirection_13.getString());
    FIX::RoundingModulus RoundingModulus_13;
    RoundingModulus_13.setString("19863387");
    noOrders_0_0.set(RoundingModulus_13);
    OrderQtyData_13.insert(RoundingModulus_13.getString());
    all_values.push_back(OrderQtyData_13);

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::NewOrderList::NoOrders::NoPartyIDs noPartyIDs_0_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_76;
      FIX::PartyID PartyID_76("STRING_1817556726");
      noPartyIDs_0_1_0.set(PartyID_76);
      Parties_NoPartyIDs_76.insert(PartyID_76.getString());
      FIX::PartyIDSource PartyIDSource_76('1');
      noPartyIDs_0_1_0.set(PartyIDSource_76);
      Parties_NoPartyIDs_76.insert(PartyIDSource_76.getString());
      FIX::PartyRole PartyRole_76(39);
      noPartyIDs_0_1_0.set(PartyRole_76);
      Parties_NoPartyIDs_76.insert(PartyRole_76.getString());
      all_values.push_back(Parties_NoPartyIDs_76);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::NewOrderList::NoOrders::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_157;
        FIX::PartySubID PartySubID_157("STRING_1700934373");
        noPartySubIDs_0_0_2_0.set(PartySubID_157);
        PtysSubGrp_NoPartySubIDs_157.insert(PartySubID_157.getString());
        FIX::PartySubIDType PartySubIDType_157(31);
        noPartySubIDs_0_0_2_0.set(PartySubIDType_157);
        PtysSubGrp_NoPartySubIDs_157.insert(PartySubIDType_157.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_157);

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_0);
      }
      noOrders_0_0.addGroup(noPartyIDs_0_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoPartyIDs noPartyIDs_0_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_77;
      FIX::PartyID PartyID_77("STRING_520645371");
      noPartyIDs_0_1_1.set(PartyID_77);
      Parties_NoPartyIDs_77.insert(PartyID_77.getString());
      FIX::PartyIDSource PartyIDSource_77('9');
      noPartyIDs_0_1_1.set(PartyIDSource_77);
      Parties_NoPartyIDs_77.insert(PartyIDSource_77.getString());
      FIX::PartyRole PartyRole_77(19);
      noPartyIDs_0_1_1.set(PartyRole_77);
      Parties_NoPartyIDs_77.insert(PartyRole_77.getString());
      all_values.push_back(Parties_NoPartyIDs_77);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::NewOrderList::NoOrders::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_158;
        FIX::PartySubID PartySubID_158("STRING_595320022");
        noPartySubIDs_0_1_2_0.set(PartySubID_158);
        PtysSubGrp_NoPartySubIDs_158.insert(PartySubID_158.getString());
        FIX::PartySubIDType PartySubIDType_158(21);
        noPartySubIDs_0_1_2_0.set(PartySubIDType_158);
        PtysSubGrp_NoPartySubIDs_158.insert(PartySubIDType_158.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_158);

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_159;
        FIX::PartySubID PartySubID_159("STRING_1871581684");
        noPartySubIDs_0_1_2_1.set(PartySubID_159);
        PtysSubGrp_NoPartySubIDs_159.insert(PartySubID_159.getString());
        FIX::PartySubIDType PartySubIDType_159(7);
        noPartySubIDs_0_1_2_1.set(PartySubIDType_159);
        PtysSubGrp_NoPartySubIDs_159.insert(PartySubIDType_159.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_159);

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_1);
      }
      noOrders_0_0.addGroup(noPartyIDs_0_1_1);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoPartyIDs noPartyIDs_0_1_2;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_78;
      FIX::PartyID PartyID_78("STRING_1801492121");
      noPartyIDs_0_1_2.set(PartyID_78);
      Parties_NoPartyIDs_78.insert(PartyID_78.getString());
      FIX::PartyIDSource PartyIDSource_78('8');
      noPartyIDs_0_1_2.set(PartyIDSource_78);
      Parties_NoPartyIDs_78.insert(PartyIDSource_78.getString());
      FIX::PartyRole PartyRole_78(13);
      noPartyIDs_0_1_2.set(PartyRole_78);
      Parties_NoPartyIDs_78.insert(PartyRole_78.getString());
      all_values.push_back(Parties_NoPartyIDs_78);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::NewOrderList::NoOrders::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_2_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_160;
        FIX::PartySubID PartySubID_160("STRING_275619794");
        noPartySubIDs_0_2_2_0.set(PartySubID_160);
        PtysSubGrp_NoPartySubIDs_160.insert(PartySubID_160.getString());
        FIX::PartySubIDType PartySubIDType_160(27);
        noPartySubIDs_0_2_2_0.set(PartySubIDType_160);
        PtysSubGrp_NoPartySubIDs_160.insert(PartySubIDType_160.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_160);

        noPartyIDs_0_1_2.addGroup(noPartySubIDs_0_2_2_0);
      }
      noOrders_0_0.addGroup(noPartyIDs_0_1_2);
    }
    // PegInstructions
    multiset<string> PegInstructions_4;
    FIX::PegLimitType PegLimitType_4(0);
    noOrders_0_0.set(PegLimitType_4);
    PegInstructions_4.insert(PegLimitType_4.getString());
    FIX::PegMoveType PegMoveType_4(0);
    noOrders_0_0.set(PegMoveType_4);
    PegInstructions_4.insert(PegMoveType_4.getString());
    FIX::PegOffsetType PegOffsetType_4(3);
    noOrders_0_0.set(PegOffsetType_4);
    PegInstructions_4.insert(PegOffsetType_4.getString());
    FIX::PegOffsetValue PegOffsetValue_4;
    PegOffsetValue_4.setString("18850719");
    noOrders_0_0.set(PegOffsetValue_4);
    PegInstructions_4.insert(PegOffsetValue_4.getString());
    FIX::PegPriceType PegPriceType_4(8);
    noOrders_0_0.set(PegPriceType_4);
    PegInstructions_4.insert(PegPriceType_4.getString());
    FIX::PegRoundDirection PegRoundDirection_4(1);
    noOrders_0_0.set(PegRoundDirection_4);
    PegInstructions_4.insert(PegRoundDirection_4.getString());
    FIX::PegScope PegScope_4(1);
    noOrders_0_0.set(PegScope_4);
    PegInstructions_4.insert(PegScope_4.getString());
    FIX::PegSecurityDesc PegSecurityDesc_4("STRING_1251214120");
    noOrders_0_0.set(PegSecurityDesc_4);
    PegInstructions_4.insert(PegSecurityDesc_4.getString());
    FIX::PegSecurityID PegSecurityID_4("STRING_413679588");
    noOrders_0_0.set(PegSecurityID_4);
    PegInstructions_4.insert(PegSecurityID_4.getString());
    FIX::PegSecurityIDSource PegSecurityIDSource_4("STRING_933258617");
    noOrders_0_0.set(PegSecurityIDSource_4);
    PegInstructions_4.insert(PegSecurityIDSource_4.getString());
    FIX::PegSymbol PegSymbol_4("STRING_1118546534");
    noOrders_0_0.set(PegSymbol_4);
    PegInstructions_4.insert(PegSymbol_4.getString());
    all_values.push_back(PegInstructions_4);

    // PreAllocGrp
    // Group PreAllocGrp.NoAllocs
    {
      FIX50SP2::NewOrderList::NoOrders::NoAllocs noAllocs_0_1_0;
      // PreAllocGrp.NoAllocs
      multiset<string> PreAllocGrp_NoAllocs_13;
      FIX::AllocAccount AllocAccount_25("STRING_366155733");
      noAllocs_0_1_0.set(AllocAccount_25);
      PreAllocGrp_NoAllocs_13.insert(AllocAccount_25.getString());
      FIX::AllocAcctIDSource AllocAcctIDSource_25(1207127931);
      noAllocs_0_1_0.set(AllocAcctIDSource_25);
      PreAllocGrp_NoAllocs_13.insert(AllocAcctIDSource_25.getString());
      FIX::AllocQty AllocQty_24;
      AllocQty_24.setString("2436338");
      noAllocs_0_1_0.set(AllocQty_24);
      PreAllocGrp_NoAllocs_13.insert(AllocQty_24.getString());
      FIX::AllocSettlCurrency AllocSettlCurrency_20("USD");
      noAllocs_0_1_0.set(AllocSettlCurrency_20);
      PreAllocGrp_NoAllocs_13.insert(AllocSettlCurrency_20.getString());
      FIX::IndividualAllocID IndividualAllocID_25("STRING_764279230");
      noAllocs_0_1_0.set(IndividualAllocID_25);
      PreAllocGrp_NoAllocs_13.insert(IndividualAllocID_25.getString());
      all_values.push_back(PreAllocGrp_NoAllocs_13);

      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_0_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_65;
        FIX::NestedPartyID NestedPartyID_65("STRING_511057091");
        noNestedPartyIDs_0_0_2_0.set(NestedPartyID_65);
        NestedParties_NoNestedPartyIDs_65.insert(NestedPartyID_65.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_65('5');
        noNestedPartyIDs_0_0_2_0.set(NestedPartyIDSource_65);
        NestedParties_NoNestedPartyIDs_65.insert(NestedPartyIDSource_65.getString());
        FIX::NestedPartyRole NestedPartyRole_65(1950542025);
        noNestedPartyIDs_0_0_2_0.set(NestedPartyRole_65);
        NestedParties_NoNestedPartyIDs_65.insert(NestedPartyRole_65.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_65);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_133;
          FIX::NestedPartySubID NestedPartySubID_133("STRING_272445348");
          noNestedPartySubIDs_0_0_0_3_0.set(NestedPartySubID_133);
          NstdPtysSubGrp_NoNestedPartySubIDs_133.insert(NestedPartySubID_133.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_133(1021261369);
          noNestedPartySubIDs_0_0_0_3_0.set(NestedPartySubIDType_133);
          NstdPtysSubGrp_NoNestedPartySubIDs_133.insert(NestedPartySubIDType_133.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_133);

          noNestedPartyIDs_0_0_2_0.addGroup(noNestedPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_134;
          FIX::NestedPartySubID NestedPartySubID_134("STRING_888566197");
          noNestedPartySubIDs_0_0_0_3_1.set(NestedPartySubID_134);
          NstdPtysSubGrp_NoNestedPartySubIDs_134.insert(NestedPartySubID_134.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_134(1242552686);
          noNestedPartySubIDs_0_0_0_3_1.set(NestedPartySubIDType_134);
          NstdPtysSubGrp_NoNestedPartySubIDs_134.insert(NestedPartySubIDType_134.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_134);

          noNestedPartyIDs_0_0_2_0.addGroup(noNestedPartySubIDs_0_0_0_3_1);
        }
        noAllocs_0_1_0.addGroup(noNestedPartyIDs_0_0_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_0_2_1;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_66;
        FIX::NestedPartyID NestedPartyID_66("STRING_1661055949");
        noNestedPartyIDs_0_0_2_1.set(NestedPartyID_66);
        NestedParties_NoNestedPartyIDs_66.insert(NestedPartyID_66.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_66('1');
        noNestedPartyIDs_0_0_2_1.set(NestedPartyIDSource_66);
        NestedParties_NoNestedPartyIDs_66.insert(NestedPartyIDSource_66.getString());
        FIX::NestedPartyRole NestedPartyRole_66(1518172480);
        noNestedPartyIDs_0_0_2_1.set(NestedPartyRole_66);
        NestedParties_NoNestedPartyIDs_66.insert(NestedPartyRole_66.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_66);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_1_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_135;
          FIX::NestedPartySubID NestedPartySubID_135("STRING_1844316811");
          noNestedPartySubIDs_0_0_1_3_0.set(NestedPartySubID_135);
          NstdPtysSubGrp_NoNestedPartySubIDs_135.insert(NestedPartySubID_135.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_135(1068775468);
          noNestedPartySubIDs_0_0_1_3_0.set(NestedPartySubIDType_135);
          NstdPtysSubGrp_NoNestedPartySubIDs_135.insert(NestedPartySubIDType_135.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_135);

          noNestedPartyIDs_0_0_2_1.addGroup(noNestedPartySubIDs_0_0_1_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_1_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_136;
          FIX::NestedPartySubID NestedPartySubID_136("STRING_1726394925");
          noNestedPartySubIDs_0_0_1_3_1.set(NestedPartySubID_136);
          NstdPtysSubGrp_NoNestedPartySubIDs_136.insert(NestedPartySubID_136.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_136(1581905065);
          noNestedPartySubIDs_0_0_1_3_1.set(NestedPartySubIDType_136);
          NstdPtysSubGrp_NoNestedPartySubIDs_136.insert(NestedPartySubIDType_136.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_136);

          noNestedPartyIDs_0_0_2_1.addGroup(noNestedPartySubIDs_0_0_1_3_1);
        }
        noAllocs_0_1_0.addGroup(noNestedPartyIDs_0_0_2_1);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_0_2_2;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_67;
        FIX::NestedPartyID NestedPartyID_67("STRING_341022579");
        noNestedPartyIDs_0_0_2_2.set(NestedPartyID_67);
        NestedParties_NoNestedPartyIDs_67.insert(NestedPartyID_67.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_67('2');
        noNestedPartyIDs_0_0_2_2.set(NestedPartyIDSource_67);
        NestedParties_NoNestedPartyIDs_67.insert(NestedPartyIDSource_67.getString());
        FIX::NestedPartyRole NestedPartyRole_67(528824970);
        noNestedPartyIDs_0_0_2_2.set(NestedPartyRole_67);
        NestedParties_NoNestedPartyIDs_67.insert(NestedPartyRole_67.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_67);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_137;
          FIX::NestedPartySubID NestedPartySubID_137("STRING_382125291");
          noNestedPartySubIDs_0_0_2_3_0.set(NestedPartySubID_137);
          NstdPtysSubGrp_NoNestedPartySubIDs_137.insert(NestedPartySubID_137.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_137(1462083587);
          noNestedPartySubIDs_0_0_2_3_0.set(NestedPartySubIDType_137);
          NstdPtysSubGrp_NoNestedPartySubIDs_137.insert(NestedPartySubIDType_137.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_137);

          noNestedPartyIDs_0_0_2_2.addGroup(noNestedPartySubIDs_0_0_2_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_138;
          FIX::NestedPartySubID NestedPartySubID_138("STRING_563299585");
          noNestedPartySubIDs_0_0_2_3_1.set(NestedPartySubID_138);
          NstdPtysSubGrp_NoNestedPartySubIDs_138.insert(NestedPartySubID_138.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_138(465877957);
          noNestedPartySubIDs_0_0_2_3_1.set(NestedPartySubIDType_138);
          NstdPtysSubGrp_NoNestedPartySubIDs_138.insert(NestedPartySubIDType_138.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_138);

          noNestedPartyIDs_0_0_2_2.addGroup(noNestedPartySubIDs_0_0_2_3_1);
        }
        noAllocs_0_1_0.addGroup(noNestedPartyIDs_0_0_2_2);
      }
      noOrders_0_0.addGroup(noAllocs_0_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoAllocs noAllocs_0_1_1;
      // PreAllocGrp.NoAllocs
      multiset<string> PreAllocGrp_NoAllocs_14;
      FIX::AllocAccount AllocAccount_26("STRING_1828239320");
      noAllocs_0_1_1.set(AllocAccount_26);
      PreAllocGrp_NoAllocs_14.insert(AllocAccount_26.getString());
      FIX::AllocAcctIDSource AllocAcctIDSource_26(1770427516);
      noAllocs_0_1_1.set(AllocAcctIDSource_26);
      PreAllocGrp_NoAllocs_14.insert(AllocAcctIDSource_26.getString());
      FIX::AllocQty AllocQty_25;
      AllocQty_25.setString("7095118");
      noAllocs_0_1_1.set(AllocQty_25);
      PreAllocGrp_NoAllocs_14.insert(AllocQty_25.getString());
      FIX::AllocSettlCurrency AllocSettlCurrency_21("CHF");
      noAllocs_0_1_1.set(AllocSettlCurrency_21);
      PreAllocGrp_NoAllocs_14.insert(AllocSettlCurrency_21.getString());
      FIX::IndividualAllocID IndividualAllocID_26("STRING_1473791046");
      noAllocs_0_1_1.set(IndividualAllocID_26);
      PreAllocGrp_NoAllocs_14.insert(IndividualAllocID_26.getString());
      all_values.push_back(PreAllocGrp_NoAllocs_14);

      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_68;
        FIX::NestedPartyID NestedPartyID_68("STRING_5873976");
        noNestedPartyIDs_0_1_2_0.set(NestedPartyID_68);
        NestedParties_NoNestedPartyIDs_68.insert(NestedPartyID_68.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_68('2');
        noNestedPartyIDs_0_1_2_0.set(NestedPartyIDSource_68);
        NestedParties_NoNestedPartyIDs_68.insert(NestedPartyIDSource_68.getString());
        FIX::NestedPartyRole NestedPartyRole_68(758642510);
        noNestedPartyIDs_0_1_2_0.set(NestedPartyRole_68);
        NestedParties_NoNestedPartyIDs_68.insert(NestedPartyRole_68.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_68);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_139;
          FIX::NestedPartySubID NestedPartySubID_139("STRING_147100058");
          noNestedPartySubIDs_0_1_0_3_0.set(NestedPartySubID_139);
          NstdPtysSubGrp_NoNestedPartySubIDs_139.insert(NestedPartySubID_139.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_139(1779903879);
          noNestedPartySubIDs_0_1_0_3_0.set(NestedPartySubIDType_139);
          NstdPtysSubGrp_NoNestedPartySubIDs_139.insert(NestedPartySubIDType_139.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_139);

          noNestedPartyIDs_0_1_2_0.addGroup(noNestedPartySubIDs_0_1_0_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_140;
          FIX::NestedPartySubID NestedPartySubID_140("STRING_2128997897");
          noNestedPartySubIDs_0_1_0_3_1.set(NestedPartySubID_140);
          NstdPtysSubGrp_NoNestedPartySubIDs_140.insert(NestedPartySubID_140.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_140(1389652744);
          noNestedPartySubIDs_0_1_0_3_1.set(NestedPartySubIDType_140);
          NstdPtysSubGrp_NoNestedPartySubIDs_140.insert(NestedPartySubIDType_140.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_140);

          noNestedPartyIDs_0_1_2_0.addGroup(noNestedPartySubIDs_0_1_0_3_1);
        }
        noAllocs_0_1_1.addGroup(noNestedPartyIDs_0_1_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_2_1;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_69;
        FIX::NestedPartyID NestedPartyID_69("STRING_1293476180");
        noNestedPartyIDs_0_1_2_1.set(NestedPartyID_69);
        NestedParties_NoNestedPartyIDs_69.insert(NestedPartyID_69.getString());
        FIX::NestedPartyIDSource NestedPartyIDSource_69('1');
        noNestedPartyIDs_0_1_2_1.set(NestedPartyIDSource_69);
        NestedParties_NoNestedPartyIDs_69.insert(NestedPartyIDSource_69.getString());
        FIX::NestedPartyRole NestedPartyRole_69(760341576);
        noNestedPartyIDs_0_1_2_1.set(NestedPartyRole_69);
        NestedParties_NoNestedPartyIDs_69.insert(NestedPartyRole_69.getString());
        all_values.push_back(NestedParties_NoNestedPartyIDs_69);

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_1_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_141;
          FIX::NestedPartySubID NestedPartySubID_141("STRING_1412122707");
          noNestedPartySubIDs_0_1_1_3_0.set(NestedPartySubID_141);
          NstdPtysSubGrp_NoNestedPartySubIDs_141.insert(NestedPartySubID_141.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_141(1829117045);
          noNestedPartySubIDs_0_1_1_3_0.set(NestedPartySubIDType_141);
          NstdPtysSubGrp_NoNestedPartySubIDs_141.insert(NestedPartySubIDType_141.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_141);

          noNestedPartyIDs_0_1_2_1.addGroup(noNestedPartySubIDs_0_1_1_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_1_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_142;
          FIX::NestedPartySubID NestedPartySubID_142("STRING_1794849212");
          noNestedPartySubIDs_0_1_1_3_1.set(NestedPartySubID_142);
          NstdPtysSubGrp_NoNestedPartySubIDs_142.insert(NestedPartySubID_142.getString());
          FIX::NestedPartySubIDType NestedPartySubIDType_142(846544124);
          noNestedPartySubIDs_0_1_1_3_1.set(NestedPartySubIDType_142);
          NstdPtysSubGrp_NoNestedPartySubIDs_142.insert(NestedPartySubIDType_142.getString());
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_142);

          noNestedPartyIDs_0_1_2_1.addGroup(noNestedPartySubIDs_0_1_1_3_1);
        }
        noAllocs_0_1_1.addGroup(noNestedPartyIDs_0_1_2_1);
      }
      noOrders_0_0.addGroup(noAllocs_0_1_1);
    }
    // SpreadOrBenchmarkCurveData
    multiset<string> SpreadOrBenchmarkCurveData_18;
    FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_18("CAN");
    noOrders_0_0.set(BenchmarkCurveCurrency_18);
    SpreadOrBenchmarkCurveData_18.insert(BenchmarkCurveCurrency_18.getString());
    FIX::BenchmarkCurveName BenchmarkCurveName_18("STRING_Euribor");
    noOrders_0_0.set(BenchmarkCurveName_18);
    SpreadOrBenchmarkCurveData_18.insert(BenchmarkCurveName_18.getString());
    FIX::BenchmarkCurvePoint BenchmarkCurvePoint_18("STRING_1614892675");
    noOrders_0_0.set(BenchmarkCurvePoint_18);
    SpreadOrBenchmarkCurveData_18.insert(BenchmarkCurvePoint_18.getString());
    FIX::BenchmarkPrice BenchmarkPrice_18;
    BenchmarkPrice_18.setString("21454202");
    noOrders_0_0.set(BenchmarkPrice_18);
    SpreadOrBenchmarkCurveData_18.insert(BenchmarkPrice_18.getString());
    FIX::BenchmarkPriceType BenchmarkPriceType_18(689969034);
    noOrders_0_0.set(BenchmarkPriceType_18);
    SpreadOrBenchmarkCurveData_18.insert(BenchmarkPriceType_18.getString());
    FIX::BenchmarkSecurityID BenchmarkSecurityID_18("STRING_30708613");
    noOrders_0_0.set(BenchmarkSecurityID_18);
    SpreadOrBenchmarkCurveData_18.insert(BenchmarkSecurityID_18.getString());
    FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_18("STRING_463814516");
    noOrders_0_0.set(BenchmarkSecurityIDSource_18);
    SpreadOrBenchmarkCurveData_18.insert(BenchmarkSecurityIDSource_18.getString());
    FIX::Spread Spread_18;
    Spread_18.setString("3707247");
    noOrders_0_0.set(Spread_18);
    SpreadOrBenchmarkCurveData_18.insert(Spread_18.getString());
    all_values.push_back(SpreadOrBenchmarkCurveData_18);

    // Stipulations
    // Group Stipulations.NoStipulations
    {
      FIX50SP2::NewOrderList::NoOrders::NoStipulations noStipulations_0_1_0;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_23;
      FIX::StipulationType StipulationType_23("STRING_LOOKBACK");
      noStipulations_0_1_0.set(StipulationType_23);
      Stipulations_NoStipulations_23.insert(StipulationType_23.getString());
      FIX::StipulationValue StipulationValue_23("STRING_2118570485");
      noStipulations_0_1_0.set(StipulationValue_23);
      Stipulations_NoStipulations_23.insert(StipulationValue_23.getString());
      all_values.push_back(Stipulations_NoStipulations_23);

      noOrders_0_0.addGroup(noStipulations_0_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoStipulations noStipulations_0_1_1;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_24;
      FIX::StipulationType StipulationType_24("STRING_ROLLTYPE");
      noStipulations_0_1_1.set(StipulationType_24);
      Stipulations_NoStipulations_24.insert(StipulationType_24.getString());
      FIX::StipulationValue StipulationValue_24("STRING_499633731");
      noStipulations_0_1_1.set(StipulationValue_24);
      Stipulations_NoStipulations_24.insert(StipulationValue_24.getString());
      all_values.push_back(Stipulations_NoStipulations_24);

      noOrders_0_0.addGroup(noStipulations_0_1_1);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoStipulations noStipulations_0_1_2;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_25;
      FIX::StipulationType StipulationType_25("STRING_ISSUE");
      noStipulations_0_1_2.set(StipulationType_25);
      Stipulations_NoStipulations_25.insert(StipulationType_25.getString());
      FIX::StipulationValue StipulationValue_25("STRING_1301826990");
      noStipulations_0_1_2.set(StipulationValue_25);
      Stipulations_NoStipulations_25.insert(StipulationValue_25.getString());
      all_values.push_back(Stipulations_NoStipulations_25);

      noOrders_0_0.addGroup(noStipulations_0_1_2);
    }
    // StrategyParametersGrp
    // Group StrategyParametersGrp.NoStrategyParameters
    {
      FIX50SP2::NewOrderList::NoOrders::NoStrategyParameters noStrategyParameters_0_1_0;
      // StrategyParametersGrp.NoStrategyParameters
      multiset<string> StrategyParametersGrp_NoStrategyParameters_10;
      FIX::StrategyParameterName StrategyParameterName_10("STRING_1685313481");
      noStrategyParameters_0_1_0.set(StrategyParameterName_10);
      StrategyParametersGrp_NoStrategyParameters_10.insert(StrategyParameterName_10.getString());
      FIX::StrategyParameterType StrategyParameterType_10(15);
      noStrategyParameters_0_1_0.set(StrategyParameterType_10);
      StrategyParametersGrp_NoStrategyParameters_10.insert(StrategyParameterType_10.getString());
      FIX::StrategyParameterValue StrategyParameterValue_10("STRING_521388499");
      noStrategyParameters_0_1_0.set(StrategyParameterValue_10);
      StrategyParametersGrp_NoStrategyParameters_10.insert(StrategyParameterValue_10.getString());
      all_values.push_back(StrategyParametersGrp_NoStrategyParameters_10);

      noOrders_0_0.addGroup(noStrategyParameters_0_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoStrategyParameters noStrategyParameters_0_1_1;
      // StrategyParametersGrp.NoStrategyParameters
      multiset<string> StrategyParametersGrp_NoStrategyParameters_11;
      FIX::StrategyParameterName StrategyParameterName_11("STRING_1317733712");
      noStrategyParameters_0_1_1.set(StrategyParameterName_11);
      StrategyParametersGrp_NoStrategyParameters_11.insert(StrategyParameterName_11.getString());
      FIX::StrategyParameterType StrategyParameterType_11(24);
      noStrategyParameters_0_1_1.set(StrategyParameterType_11);
      StrategyParametersGrp_NoStrategyParameters_11.insert(StrategyParameterType_11.getString());
      FIX::StrategyParameterValue StrategyParameterValue_11("STRING_1911041243");
      noStrategyParameters_0_1_1.set(StrategyParameterValue_11);
      StrategyParametersGrp_NoStrategyParameters_11.insert(StrategyParameterValue_11.getString());
      all_values.push_back(StrategyParametersGrp_NoStrategyParameters_11);

      noOrders_0_0.addGroup(noStrategyParameters_0_1_1);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoStrategyParameters noStrategyParameters_0_1_2;
      // StrategyParametersGrp.NoStrategyParameters
      multiset<string> StrategyParametersGrp_NoStrategyParameters_12;
      FIX::StrategyParameterName StrategyParameterName_12("STRING_463726245");
      noStrategyParameters_0_1_2.set(StrategyParameterName_12);
      StrategyParametersGrp_NoStrategyParameters_12.insert(StrategyParameterName_12.getString());
      FIX::StrategyParameterType StrategyParameterType_12(4);
      noStrategyParameters_0_1_2.set(StrategyParameterType_12);
      StrategyParametersGrp_NoStrategyParameters_12.insert(StrategyParameterType_12.getString());
      FIX::StrategyParameterValue StrategyParameterValue_12("STRING_523899172");
      noStrategyParameters_0_1_2.set(StrategyParameterValue_12);
      StrategyParametersGrp_NoStrategyParameters_12.insert(StrategyParameterValue_12.getString());
      all_values.push_back(StrategyParametersGrp_NoStrategyParameters_12);

      noOrders_0_0.addGroup(noStrategyParameters_0_1_2);
    }
    // TrdgSesGrp
    // Group TrdgSesGrp.NoTradingSessions
    {
      FIX50SP2::NewOrderList::NoOrders::NoTradingSessions noTradingSessions_0_1_0;
      // TrdgSesGrp.NoTradingSessions
      multiset<string> TrdgSesGrp_NoTradingSessions_9;
      FIX::TradingSessionID TradingSessionID_47("STRING_5");
      noTradingSessions_0_1_0.set(TradingSessionID_47);
      TrdgSesGrp_NoTradingSessions_9.insert(TradingSessionID_47.getString());
      FIX::TradingSessionSubID TradingSessionSubID_47("STRING_5");
      noTradingSessions_0_1_0.set(TradingSessionSubID_47);
      TrdgSesGrp_NoTradingSessions_9.insert(TradingSessionSubID_47.getString());
      all_values.push_back(TrdgSesGrp_NoTradingSessions_9);

      noOrders_0_0.addGroup(noTradingSessions_0_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoTradingSessions noTradingSessions_0_1_1;
      // TrdgSesGrp.NoTradingSessions
      multiset<string> TrdgSesGrp_NoTradingSessions_10;
      FIX::TradingSessionID TradingSessionID_48("STRING_2");
      noTradingSessions_0_1_1.set(TradingSessionID_48);
      TrdgSesGrp_NoTradingSessions_10.insert(TradingSessionID_48.getString());
      FIX::TradingSessionSubID TradingSessionSubID_48("STRING_2");
      noTradingSessions_0_1_1.set(TradingSessionSubID_48);
      TrdgSesGrp_NoTradingSessions_10.insert(TradingSessionSubID_48.getString());
      all_values.push_back(TrdgSesGrp_NoTradingSessions_10);

      noOrders_0_0.addGroup(noTradingSessions_0_1_1);
    }
    // TriggeringInstruction
    multiset<string> TriggeringInstruction_4;
    FIX::TriggerAction TriggerAction_4('2');
    noOrders_0_0.set(TriggerAction_4);
    TriggeringInstruction_4.insert(TriggerAction_4.getString());
    FIX::TriggerNewPrice TriggerNewPrice_4;
    TriggerNewPrice_4.setString("19428410");
    noOrders_0_0.set(TriggerNewPrice_4);
    TriggeringInstruction_4.insert(TriggerNewPrice_4.getString());
    FIX::TriggerNewQty TriggerNewQty_4;
    TriggerNewQty_4.setString("14306474");
    noOrders_0_0.set(TriggerNewQty_4);
    TriggeringInstruction_4.insert(TriggerNewQty_4.getString());
    FIX::TriggerOrderType TriggerOrderType_4('1');
    noOrders_0_0.set(TriggerOrderType_4);
    TriggeringInstruction_4.insert(TriggerOrderType_4.getString());
    FIX::TriggerPrice TriggerPrice_4;
    TriggerPrice_4.setString("19407775");
    noOrders_0_0.set(TriggerPrice_4);
    TriggeringInstruction_4.insert(TriggerPrice_4.getString());
    FIX::TriggerPriceDirection TriggerPriceDirection_4('D');
    noOrders_0_0.set(TriggerPriceDirection_4);
    TriggeringInstruction_4.insert(TriggerPriceDirection_4.getString());
    FIX::TriggerPriceType TriggerPriceType_4('4');
    noOrders_0_0.set(TriggerPriceType_4);
    TriggeringInstruction_4.insert(TriggerPriceType_4.getString());
    FIX::TriggerPriceTypeScope TriggerPriceTypeScope_4('2');
    noOrders_0_0.set(TriggerPriceTypeScope_4);
    TriggeringInstruction_4.insert(TriggerPriceTypeScope_4.getString());
    FIX::TriggerSecurityDesc TriggerSecurityDesc_4("STRING_343857558");
    noOrders_0_0.set(TriggerSecurityDesc_4);
    TriggeringInstruction_4.insert(TriggerSecurityDesc_4.getString());
    FIX::TriggerSecurityID TriggerSecurityID_4("STRING_1527442315");
    noOrders_0_0.set(TriggerSecurityID_4);
    TriggeringInstruction_4.insert(TriggerSecurityID_4.getString());
    FIX::TriggerSecurityIDSource TriggerSecurityIDSource_4("STRING_1430434771");
    noOrders_0_0.set(TriggerSecurityIDSource_4);
    TriggeringInstruction_4.insert(TriggerSecurityIDSource_4.getString());
    FIX::TriggerSymbol TriggerSymbol_4("STRING_314944395");
    noOrders_0_0.set(TriggerSymbol_4);
    TriggeringInstruction_4.insert(TriggerSymbol_4.getString());
    FIX::TriggerTradingSessionID TriggerTradingSessionID_4("STRING_675911681");
    noOrders_0_0.set(TriggerTradingSessionID_4);
    TriggeringInstruction_4.insert(TriggerTradingSessionID_4.getString());
    FIX::TriggerTradingSessionSubID TriggerTradingSessionSubID_4("STRING_1930068503");
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
      multiset<string> UnderlyingInstrument_61;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_61("DATA_156873296");
      noUnderlyings_0_1_0.set(EncodedUnderlyingIssuer_61);
      UnderlyingInstrument_61.insert(EncodedUnderlyingIssuer_61.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_61(779445198);
      noUnderlyings_0_1_0.set(EncodedUnderlyingIssuerLen_61);
      UnderlyingInstrument_61.insert(EncodedUnderlyingIssuerLen_61.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_61("DATA_225030066");
      noUnderlyings_0_1_0.set(EncodedUnderlyingSecurityDesc_61);
      UnderlyingInstrument_61.insert(EncodedUnderlyingSecurityDesc_61.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_61(678261796);
      noUnderlyings_0_1_0.set(EncodedUnderlyingSecurityDescLen_61);
      UnderlyingInstrument_61.insert(EncodedUnderlyingSecurityDescLen_61.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_61;
      UnderlyingAdjustedQuantity_61.setString("20971789");
      noUnderlyings_0_1_0.set(UnderlyingAdjustedQuantity_61);
      UnderlyingInstrument_61.insert(UnderlyingAdjustedQuantity_61.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_61;
      UnderlyingAllocationPercent_61.setString("93.580000");
      noUnderlyings_0_1_0.set(UnderlyingAllocationPercent_61);
      UnderlyingInstrument_61.insert(UnderlyingAllocationPercent_61.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_61;
      UnderlyingAttachmentPoint_61.setString("93.910000");
      noUnderlyings_0_1_0.set(UnderlyingAttachmentPoint_61);
      UnderlyingInstrument_61.insert(UnderlyingAttachmentPoint_61.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_61("STRING_413421508");
      noUnderlyings_0_1_0.set(UnderlyingCFICode_61);
      UnderlyingInstrument_61.insert(UnderlyingCFICode_61.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_61("STRING_545414545");
      noUnderlyings_0_1_0.set(UnderlyingCPProgram_61);
      UnderlyingInstrument_61.insert(UnderlyingCPProgram_61.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_61("STRING_965718563");
      noUnderlyings_0_1_0.set(UnderlyingCPRegType_61);
      UnderlyingInstrument_61.insert(UnderlyingCPRegType_61.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_61;
      UnderlyingCapValue_61.setString("9456020");
      noUnderlyings_0_1_0.set(UnderlyingCapValue_61);
      UnderlyingInstrument_61.insert(UnderlyingCapValue_61.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_61;
      UnderlyingCashAmount_61.setString("19016324");
      noUnderlyings_0_1_0.set(UnderlyingCashAmount_61);
      UnderlyingInstrument_61.insert(UnderlyingCashAmount_61.getString());
      FIX::UnderlyingCashType UnderlyingCashType_61("STRING_FIXED");
      noUnderlyings_0_1_0.set(UnderlyingCashType_61);
      UnderlyingInstrument_61.insert(UnderlyingCashType_61.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_61;
      UnderlyingContractMultiplier_61.setString("11251481");
      noUnderlyings_0_1_0.set(UnderlyingContractMultiplier_61);
      UnderlyingInstrument_61.insert(UnderlyingContractMultiplier_61.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_61(1956910811);
      noUnderlyings_0_1_0.set(UnderlyingContractMultiplierUnit_61);
      UnderlyingInstrument_61.insert(UnderlyingContractMultiplierUnit_61.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_61("COUNTRY_1399439677");
      noUnderlyings_0_1_0.set(UnderlyingCountryOfIssue_61);
      UnderlyingInstrument_61.insert(UnderlyingCountryOfIssue_61.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_61("LOCALMKTDATE_920505498");
      noUnderlyings_0_1_0.set(UnderlyingCouponPaymentDate_61);
      UnderlyingInstrument_61.insert(UnderlyingCouponPaymentDate_61.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_61;
      UnderlyingCouponRate_61.setString("46.280000");
      noUnderlyings_0_1_0.set(UnderlyingCouponRate_61);
      UnderlyingInstrument_61.insert(UnderlyingCouponRate_61.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_61("STRING_1095037250");
      noUnderlyings_0_1_0.set(UnderlyingCreditRating_61);
      UnderlyingInstrument_61.insert(UnderlyingCreditRating_61.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_61("JPY");
      noUnderlyings_0_1_0.set(UnderlyingCurrency_61);
      UnderlyingInstrument_61.insert(UnderlyingCurrency_61.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_61;
      UnderlyingCurrentValue_61.setString("8213434");
      noUnderlyings_0_1_0.set(UnderlyingCurrentValue_61);
      UnderlyingInstrument_61.insert(UnderlyingCurrentValue_61.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_61;
      UnderlyingDetachmentPoint_61.setString("78.580000");
      noUnderlyings_0_1_0.set(UnderlyingDetachmentPoint_61);
      UnderlyingInstrument_61.insert(UnderlyingDetachmentPoint_61.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_61;
      UnderlyingDirtyPrice_61.setString("15570650");
      noUnderlyings_0_1_0.set(UnderlyingDirtyPrice_61);
      UnderlyingInstrument_61.insert(UnderlyingDirtyPrice_61.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_61;
      UnderlyingEndPrice_61.setString("2013021");
      noUnderlyings_0_1_0.set(UnderlyingEndPrice_61);
      UnderlyingInstrument_61.insert(UnderlyingEndPrice_61.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_61;
      UnderlyingEndValue_61.setString("2538589");
      noUnderlyings_0_1_0.set(UnderlyingEndValue_61);
      UnderlyingInstrument_61.insert(UnderlyingEndValue_61.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_61(1872009433);
      noUnderlyings_0_1_0.set(UnderlyingExerciseStyle_61);
      UnderlyingInstrument_61.insert(UnderlyingExerciseStyle_61.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_61;
      UnderlyingFXRate_61.setString("8772137");
      noUnderlyings_0_1_0.set(UnderlyingFXRate_61);
      UnderlyingInstrument_61.insert(UnderlyingFXRate_61.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_61('M');
      noUnderlyings_0_1_0.set(UnderlyingFXRateCalc_61);
      UnderlyingInstrument_61.insert(UnderlyingFXRateCalc_61.getString());
      FIX::UnderlyingFactor UnderlyingFactor_61;
      UnderlyingFactor_61.setString("9661411");
      noUnderlyings_0_1_0.set(UnderlyingFactor_61);
      UnderlyingInstrument_61.insert(UnderlyingFactor_61.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_61(707468808);
      noUnderlyings_0_1_0.set(UnderlyingFlowScheduleType_61);
      UnderlyingInstrument_61.insert(UnderlyingFlowScheduleType_61.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_61("STRING_193317133");
      noUnderlyings_0_1_0.set(UnderlyingInstrRegistry_61);
      UnderlyingInstrument_61.insert(UnderlyingInstrRegistry_61.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_61("LOCALMKTDATE_1745586349");
      noUnderlyings_0_1_0.set(UnderlyingIssueDate_61);
      UnderlyingInstrument_61.insert(UnderlyingIssueDate_61.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_61("STRING_932498874");
      noUnderlyings_0_1_0.set(UnderlyingIssuer_61);
      UnderlyingInstrument_61.insert(UnderlyingIssuer_61.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_61("STRING_871578929");
      noUnderlyings_0_1_0.set(UnderlyingLocaleOfIssue_61);
      UnderlyingInstrument_61.insert(UnderlyingLocaleOfIssue_61.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_61("LOCALMKTDATE_1695281612");
      noUnderlyings_0_1_0.set(UnderlyingMaturityDate_61);
      UnderlyingInstrument_61.insert(UnderlyingMaturityDate_61.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_61("MONTHYEAR_1533818232");
      noUnderlyings_0_1_0.set(UnderlyingMaturityMonthYear_61);
      UnderlyingInstrument_61.insert(UnderlyingMaturityMonthYear_61.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_61("TZTIMEONLY_1313398321");
      noUnderlyings_0_1_0.set(UnderlyingMaturityTime_61);
      UnderlyingInstrument_61.insert(UnderlyingMaturityTime_61.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_61;
      UnderlyingNotionalPercentageOutstanding_61.setString("31.200000");
      noUnderlyings_0_1_0.set(UnderlyingNotionalPercentageOutstanding_61);
      UnderlyingInstrument_61.insert(UnderlyingNotionalPercentageOutstanding_61.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_61('2');
      noUnderlyings_0_1_0.set(UnderlyingOptAttribute_61);
      UnderlyingInstrument_61.insert(UnderlyingOptAttribute_61.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_61;
      UnderlyingOriginalNotionalPercentageOutstanding_61.setString("32.360000");
      noUnderlyings_0_1_0.set(UnderlyingOriginalNotionalPercentageOutstanding_61);
      UnderlyingInstrument_61.insert(UnderlyingOriginalNotionalPercentageOutstanding_61.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_61("STRING_906821511");
      noUnderlyings_0_1_0.set(UnderlyingPriceUnitOfMeasure_61);
      UnderlyingInstrument_61.insert(UnderlyingPriceUnitOfMeasure_61.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_61;
      UnderlyingPriceUnitOfMeasureQty_61.setString("18333815");
      noUnderlyings_0_1_0.set(UnderlyingPriceUnitOfMeasureQty_61);
      UnderlyingInstrument_61.insert(UnderlyingPriceUnitOfMeasureQty_61.getString());
      FIX::UnderlyingProduct UnderlyingProduct_61(1302884369);
      noUnderlyings_0_1_0.set(UnderlyingProduct_61);
      UnderlyingInstrument_61.insert(UnderlyingProduct_61.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_61(2031969646);
      noUnderlyings_0_1_0.set(UnderlyingPutOrCall_61);
      UnderlyingInstrument_61.insert(UnderlyingPutOrCall_61.getString());
      FIX::UnderlyingPx UnderlyingPx_61;
      UnderlyingPx_61.setString("16428087");
      noUnderlyings_0_1_0.set(UnderlyingPx_61);
      UnderlyingInstrument_61.insert(UnderlyingPx_61.getString());
      FIX::UnderlyingQty UnderlyingQty_61;
      UnderlyingQty_61.setString("5548403");
      noUnderlyings_0_1_0.set(UnderlyingQty_61);
      UnderlyingInstrument_61.insert(UnderlyingQty_61.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_61("LOCALMKTDATE_804991496");
      noUnderlyings_0_1_0.set(UnderlyingRedemptionDate_61);
      UnderlyingInstrument_61.insert(UnderlyingRedemptionDate_61.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_61("STRING_735399713");
      noUnderlyings_0_1_0.set(UnderlyingRepoCollateralSecurityType_61);
      UnderlyingInstrument_61.insert(UnderlyingRepoCollateralSecurityType_61.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_61;
      UnderlyingRepurchaseRate_61.setString("76.480000");
      noUnderlyings_0_1_0.set(UnderlyingRepurchaseRate_61);
      UnderlyingInstrument_61.insert(UnderlyingRepurchaseRate_61.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_61(1518790916);
      noUnderlyings_0_1_0.set(UnderlyingRepurchaseTerm_61);
      UnderlyingInstrument_61.insert(UnderlyingRepurchaseTerm_61.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_61("STRING_1948607193");
      noUnderlyings_0_1_0.set(UnderlyingRestructuringType_61);
      UnderlyingInstrument_61.insert(UnderlyingRestructuringType_61.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_61("STRING_323737436");
      noUnderlyings_0_1_0.set(UnderlyingSecurityDesc_61);
      UnderlyingInstrument_61.insert(UnderlyingSecurityDesc_61.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_61("EXCHANGE_342215127");
      noUnderlyings_0_1_0.set(UnderlyingSecurityExchange_61);
      UnderlyingInstrument_61.insert(UnderlyingSecurityExchange_61.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_61("STRING_1358188583");
      noUnderlyings_0_1_0.set(UnderlyingSecurityID_61);
      UnderlyingInstrument_61.insert(UnderlyingSecurityID_61.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_61("STRING_525039538");
      noUnderlyings_0_1_0.set(UnderlyingSecurityIDSource_61);
      UnderlyingInstrument_61.insert(UnderlyingSecurityIDSource_61.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_61("STRING_596074109");
      noUnderlyings_0_1_0.set(UnderlyingSecuritySubType_61);
      UnderlyingInstrument_61.insert(UnderlyingSecuritySubType_61.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_61("STRING_1082714368");
      noUnderlyings_0_1_0.set(UnderlyingSecurityType_61);
      UnderlyingInstrument_61.insert(UnderlyingSecurityType_61.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_61("STRING_1402253322");
      noUnderlyings_0_1_0.set(UnderlyingSeniority_61);
      UnderlyingInstrument_61.insert(UnderlyingSeniority_61.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_61("STRING_632517946");
      noUnderlyings_0_1_0.set(UnderlyingSettlMethod_61);
      UnderlyingInstrument_61.insert(UnderlyingSettlMethod_61.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_61(5);
      noUnderlyings_0_1_0.set(UnderlyingSettlementType_61);
      UnderlyingInstrument_61.insert(UnderlyingSettlementType_61.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_61;
      UnderlyingStartValue_61.setString("21097221");
      noUnderlyings_0_1_0.set(UnderlyingStartValue_61);
      UnderlyingInstrument_61.insert(UnderlyingStartValue_61.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_61("STRING_825835079");
      noUnderlyings_0_1_0.set(UnderlyingStateOrProvinceOfIssue_61);
      UnderlyingInstrument_61.insert(UnderlyingStateOrProvinceOfIssue_61.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_61("CAN");
      noUnderlyings_0_1_0.set(UnderlyingStrikeCurrency_61);
      UnderlyingInstrument_61.insert(UnderlyingStrikeCurrency_61.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_61;
      UnderlyingStrikePrice_61.setString("16974140");
      noUnderlyings_0_1_0.set(UnderlyingStrikePrice_61);
      UnderlyingInstrument_61.insert(UnderlyingStrikePrice_61.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_61("STRING_1194756184");
      noUnderlyings_0_1_0.set(UnderlyingSymbol_61);
      UnderlyingInstrument_61.insert(UnderlyingSymbol_61.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_61("STRING_281071941");
      noUnderlyings_0_1_0.set(UnderlyingSymbolSfx_61);
      UnderlyingInstrument_61.insert(UnderlyingSymbolSfx_61.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_61("STRING_863328682");
      noUnderlyings_0_1_0.set(UnderlyingTimeUnit_61);
      UnderlyingInstrument_61.insert(UnderlyingTimeUnit_61.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_61("STRING_1155975656");
      noUnderlyings_0_1_0.set(UnderlyingUnitOfMeasure_61);
      UnderlyingInstrument_61.insert(UnderlyingUnitOfMeasure_61.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_61;
      UnderlyingUnitOfMeasureQty_61.setString("2128210");
      noUnderlyings_0_1_0.set(UnderlyingUnitOfMeasureQty_61);
      UnderlyingInstrument_61.insert(UnderlyingUnitOfMeasureQty_61.getString());
      all_values.push_back(UnderlyingInstrument_61);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_127;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_127("STRING_2062797167");
        noUnderlyingSecurityAltID_0_0_2_0.set(UnderlyingSecurityAltID_127);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_127.insert(UnderlyingSecurityAltID_127.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_127("STRING_2046202641");
        noUnderlyingSecurityAltID_0_0_2_0.set(UnderlyingSecurityAltIDSource_127);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_127.insert(UnderlyingSecurityAltIDSource_127.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_127);

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_128;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_128("STRING_150362639");
        noUnderlyingSecurityAltID_0_0_2_1.set(UnderlyingSecurityAltID_128);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_128.insert(UnderlyingSecurityAltID_128.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_128("STRING_1947283166");
        noUnderlyingSecurityAltID_0_0_2_1.set(UnderlyingSecurityAltIDSource_128);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_128.insert(UnderlyingSecurityAltIDSource_128.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_128);

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_1);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_2;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_129;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_129("STRING_1541527726");
        noUnderlyingSecurityAltID_0_0_2_2.set(UnderlyingSecurityAltID_129);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_129.insert(UnderlyingSecurityAltID_129.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_129("STRING_705203038");
        noUnderlyingSecurityAltID_0_0_2_2.set(UnderlyingSecurityAltIDSource_129);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_129.insert(UnderlyingSecurityAltIDSource_129.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_129);

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_2);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_116;
        FIX::UnderlyingStipType UnderlyingStipType_116("STRING_129443792");
        noUnderlyingStips_0_0_2_0.set(UnderlyingStipType_116);
        UnderlyingStipulations_NoUnderlyingStips_116.insert(UnderlyingStipType_116.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_116("STRING_207597038");
        noUnderlyingStips_0_0_2_0.set(UnderlyingStipValue_116);
        UnderlyingStipulations_NoUnderlyingStips_116.insert(UnderlyingStipValue_116.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_116);

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_117;
        FIX::UnderlyingStipType UnderlyingStipType_117("STRING_2123581931");
        noUnderlyingStips_0_0_2_1.set(UnderlyingStipType_117);
        UnderlyingStipulations_NoUnderlyingStips_117.insert(UnderlyingStipType_117.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_117("STRING_2078050985");
        noUnderlyingStips_0_0_2_1.set(UnderlyingStipValue_117);
        UnderlyingStipulations_NoUnderlyingStips_117.insert(UnderlyingStipValue_117.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_117);

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_1);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_2;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_118;
        FIX::UnderlyingStipType UnderlyingStipType_118("STRING_531334474");
        noUnderlyingStips_0_0_2_2.set(UnderlyingStipType_118);
        UnderlyingStipulations_NoUnderlyingStips_118.insert(UnderlyingStipType_118.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_118("STRING_318313410");
        noUnderlyingStips_0_0_2_2.set(UnderlyingStipValue_118);
        UnderlyingStipulations_NoUnderlyingStips_118.insert(UnderlyingStipValue_118.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_118);

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_2);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_131;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_131("STRING_1056374013");
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyID_131);
        UndlyInstrumentParties_NoUndlyInstrumentParties_131.insert(UnderlyingInstrumentPartyID_131.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_131('9');
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyIDSource_131);
        UndlyInstrumentParties_NoUndlyInstrumentParties_131.insert(UnderlyingInstrumentPartyIDSource_131.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_131(223986641);
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyRole_131);
        UndlyInstrumentParties_NoUndlyInstrumentParties_131.insert(UnderlyingInstrumentPartyRole_131.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_131);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_266;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_266("STRING_1546905465");
          noUndlyInstrumentPartySubIDs_0_0_0_3_0.set(UnderlyingInstrumentPartySubID_266);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_266.insert(UnderlyingInstrumentPartySubID_266.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_266(125358512);
          noUndlyInstrumentPartySubIDs_0_0_0_3_0.set(UnderlyingInstrumentPartySubIDType_266);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_266.insert(UnderlyingInstrumentPartySubIDType_266.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_266);

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_267;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_267("STRING_273382170");
          noUndlyInstrumentPartySubIDs_0_0_0_3_1.set(UnderlyingInstrumentPartySubID_267);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_267.insert(UnderlyingInstrumentPartySubID_267.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_267(225256896);
          noUndlyInstrumentPartySubIDs_0_0_0_3_1.set(UnderlyingInstrumentPartySubIDType_267);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_267.insert(UnderlyingInstrumentPartySubIDType_267.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_267);

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_1);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_0);
      }
      noOrders_0_0.addGroup(noUnderlyings_0_1_0);
    }
    // YieldData
    multiset<string> YieldData_13;
    FIX::Yield Yield_13;
    Yield_13.setString("67.320000");
    noOrders_0_0.set(Yield_13);
    YieldData_13.insert(Yield_13.getString());
    FIX::YieldCalcDate YieldCalcDate_13("LOCALMKTDATE_1168119527");
    noOrders_0_0.set(YieldCalcDate_13);
    YieldData_13.insert(YieldCalcDate_13.getString());
    FIX::YieldRedemptionDate YieldRedemptionDate_13("LOCALMKTDATE_1922670905");
    noOrders_0_0.set(YieldRedemptionDate_13);
    YieldData_13.insert(YieldRedemptionDate_13.getString());
    FIX::YieldRedemptionPrice YieldRedemptionPrice_13;
    YieldRedemptionPrice_13.setString("8195892");
    noOrders_0_0.set(YieldRedemptionPrice_13);
    YieldData_13.insert(YieldRedemptionPrice_13.getString());
    FIX::YieldRedemptionPriceType YieldRedemptionPriceType_13(1449191468);
    noOrders_0_0.set(YieldRedemptionPriceType_13);
    YieldData_13.insert(YieldRedemptionPriceType_13.getString());
    FIX::YieldType YieldType_13("STRING_MARK");
    noOrders_0_0.set(YieldType_13);
    YieldData_13.insert(YieldType_13.getString());
    all_values.push_back(YieldData_13);

    msg.addGroup(noOrders_0_0);
  }
  // RootParties
  // Group RootParties.NoRootPartyIDs
  {
    FIX50SP2::NewOrderList::NoRootPartyIDs noRootPartyIDs_0_0;
    // RootParties.NoRootPartyIDs
    multiset<string> RootParties_NoRootPartyIDs_5;
    FIX::RootPartyID RootPartyID_5("STRING_1662012540");
    noRootPartyIDs_0_0.set(RootPartyID_5);
    RootParties_NoRootPartyIDs_5.insert(RootPartyID_5.getString());
    FIX::RootPartyIDSource RootPartyIDSource_5('1');
    noRootPartyIDs_0_0.set(RootPartyIDSource_5);
    RootParties_NoRootPartyIDs_5.insert(RootPartyIDSource_5.getString());
    FIX::RootPartyRole RootPartyRole_5(1890878444);
    noRootPartyIDs_0_0.set(RootPartyRole_5);
    RootParties_NoRootPartyIDs_5.insert(RootPartyRole_5.getString());
    all_values.push_back(RootParties_NoRootPartyIDs_5);

    // RootSubParties
    // Group RootSubParties.NoRootPartySubIDs
    {
      FIX50SP2::NewOrderList::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_0;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_12;
      FIX::RootPartySubID RootPartySubID_12("STRING_1783840497");
      noRootPartySubIDs_0_1_0.set(RootPartySubID_12);
      RootSubParties_NoRootPartySubIDs_12.insert(RootPartySubID_12.getString());
      FIX::RootPartySubIDType RootPartySubIDType_12(1690677962);
      noRootPartySubIDs_0_1_0.set(RootPartySubIDType_12);
      RootSubParties_NoRootPartySubIDs_12.insert(RootPartySubIDType_12.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_12);

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_1;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_13;
      FIX::RootPartySubID RootPartySubID_13("STRING_954775612");
      noRootPartySubIDs_0_1_1.set(RootPartySubID_13);
      RootSubParties_NoRootPartySubIDs_13.insert(RootPartySubID_13.getString());
      FIX::RootPartySubIDType RootPartySubIDType_13(341559887);
      noRootPartySubIDs_0_1_1.set(RootPartySubIDType_13);
      RootSubParties_NoRootPartySubIDs_13.insert(RootPartySubIDType_13.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_13);

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_1);
    }
    msg.addGroup(noRootPartyIDs_0_0);
  }
  {
    FIX50SP2::NewOrderList::NoRootPartyIDs noRootPartyIDs_0_1;
    // RootParties.NoRootPartyIDs
    multiset<string> RootParties_NoRootPartyIDs_6;
    FIX::RootPartyID RootPartyID_6("STRING_147985328");
    noRootPartyIDs_0_1.set(RootPartyID_6);
    RootParties_NoRootPartyIDs_6.insert(RootPartyID_6.getString());
    FIX::RootPartyIDSource RootPartyIDSource_6('1');
    noRootPartyIDs_0_1.set(RootPartyIDSource_6);
    RootParties_NoRootPartyIDs_6.insert(RootPartyIDSource_6.getString());
    FIX::RootPartyRole RootPartyRole_6(549156926);
    noRootPartyIDs_0_1.set(RootPartyRole_6);
    RootParties_NoRootPartyIDs_6.insert(RootPartyRole_6.getString());
    all_values.push_back(RootParties_NoRootPartyIDs_6);

    // RootSubParties
    // Group RootSubParties.NoRootPartySubIDs
    {
      FIX50SP2::NewOrderList::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_1_1_0;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_14;
      FIX::RootPartySubID RootPartySubID_14("STRING_1014786741");
      noRootPartySubIDs_1_1_0.set(RootPartySubID_14);
      RootSubParties_NoRootPartySubIDs_14.insert(RootPartySubID_14.getString());
      FIX::RootPartySubIDType RootPartySubIDType_14(1080491400);
      noRootPartySubIDs_1_1_0.set(RootPartySubIDType_14);
      RootSubParties_NoRootPartySubIDs_14.insert(RootPartySubIDType_14.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_14);

      noRootPartyIDs_0_1.addGroup(noRootPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_1_1_1;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_15;
      FIX::RootPartySubID RootPartySubID_15("STRING_442397021");
      noRootPartySubIDs_1_1_1.set(RootPartySubID_15);
      RootSubParties_NoRootPartySubIDs_15.insert(RootPartySubID_15.getString());
      FIX::RootPartySubIDType RootPartySubIDType_15(156059014);
      noRootPartySubIDs_1_1_1.set(RootPartySubIDType_15);
      RootSubParties_NoRootPartySubIDs_15.insert(RootPartySubIDType_15.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_15);

      noRootPartyIDs_0_1.addGroup(noRootPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::NewOrderList::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_1_1_2;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_16;
      FIX::RootPartySubID RootPartySubID_16("STRING_2136865413");
      noRootPartySubIDs_1_1_2.set(RootPartySubID_16);
      RootSubParties_NoRootPartySubIDs_16.insert(RootPartySubID_16.getString());
      FIX::RootPartySubIDType RootPartySubIDType_16(1356784540);
      noRootPartySubIDs_1_1_2.set(RootPartySubIDType_16);
      RootSubParties_NoRootPartySubIDs_16.insert(RootPartySubIDType_16.getString());
      all_values.push_back(RootSubParties_NoRootPartySubIDs_16);

      noRootPartyIDs_0_1.addGroup(noRootPartySubIDs_1_1_2);
    }
    msg.addGroup(noRootPartyIDs_0_1);
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
