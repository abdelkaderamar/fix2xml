#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/ExecutionReport.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( ExecutionReport, set_fields)
{

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::ExecutionReport msg;

  list<multiset<string>> all_values;
  multiset<string> ExecutionReport_0;
  FIX::Account Account_12("STRING_687997531");
  msg.set(Account_12);
  ExecutionReport_0.insert(Account_12.getString());
  FIX::AccountType AccountType_9(6);
  msg.set(AccountType_9);
  ExecutionReport_0.insert(AccountType_9.getString());
  FIX::AccruedInterestAmt AccruedInterestAmt_9;
  AccruedInterestAmt_9.setString("11227144");
  msg.set(AccruedInterestAmt_9);
  ExecutionReport_0.insert(AccruedInterestAmt_9.getString());
  FIX::AccruedInterestRate AccruedInterestRate_4;
  AccruedInterestRate_4.setString("91.630000");
  msg.set(AccruedInterestRate_4);
  ExecutionReport_0.insert(AccruedInterestRate_4.getString());
  FIX::AcctIDSource AcctIDSource_5(5);
  msg.set(AcctIDSource_5);
  ExecutionReport_0.insert(AcctIDSource_5.getString());
  FIX::AggressorIndicator AggressorIndicator_0(false);
  msg.set(AggressorIndicator_0);
  ExecutionReport_0.insert(AggressorIndicator_0.getString());
  FIX::AllocID AllocID_9("STRING_1087706214");
  msg.set(AllocID_9);
  ExecutionReport_0.insert(AllocID_9.getString());
  FIX::AvgPx AvgPx_5;
  AvgPx_5.setString("20546373");
  msg.set(AvgPx_5);
  ExecutionReport_0.insert(AvgPx_5.getString());
  FIX::BasisFeatureDate BasisFeatureDate_0("LOCALMKTDATE_797311455");
  msg.set(BasisFeatureDate_0);
  ExecutionReport_0.insert(BasisFeatureDate_0.getString());
  FIX::BasisFeaturePrice BasisFeaturePrice_0;
  BasisFeaturePrice_0.setString("13994734");
  msg.set(BasisFeaturePrice_0);
  ExecutionReport_0.insert(BasisFeaturePrice_0.getString());
  FIX::BookingType BookingType_5(2);
  msg.set(BookingType_5);
  ExecutionReport_0.insert(BookingType_5.getString());
  FIX::BookingUnit BookingUnit_2('0');
  msg.set(BookingUnit_2);
  ExecutionReport_0.insert(BookingUnit_2.getString());
  FIX::CalculatedCcyLastQty CalculatedCcyLastQty_0;
  CalculatedCcyLastQty_0.setString("17880031");
  msg.set(CalculatedCcyLastQty_0);
  ExecutionReport_0.insert(CalculatedCcyLastQty_0.getString());
  FIX::CancellationRights CancellationRights_1('M');
  msg.set(CancellationRights_1);
  ExecutionReport_0.insert(CancellationRights_1.getString());
  FIX::CashMargin CashMargin_2('1');
  msg.set(CashMargin_2);
  ExecutionReport_0.insert(CashMargin_2.getString());
  FIX::ClOrdID ClOrdID_21("STRING_597127133");
  msg.set(ClOrdID_21);
  ExecutionReport_0.insert(ClOrdID_21.getString());
  FIX::ClOrdLinkID ClOrdLinkID_5("STRING_394186489");
  msg.set(ClOrdLinkID_5);
  ExecutionReport_0.insert(ClOrdLinkID_5.getString());
  FIX::ClearingFeeIndicator ClearingFeeIndicator_7("STRING_9");
  msg.set(ClearingFeeIndicator_7);
  ExecutionReport_0.insert(ClearingFeeIndicator_7.getString());
  FIX::ComplianceID ComplianceID_4("STRING_1685531826");
  msg.set(ComplianceID_4);
  ExecutionReport_0.insert(ComplianceID_4.getString());
  FIX::Concession Concession_4;
  Concession_4.setString("4974484");
  msg.set(Concession_4);
  ExecutionReport_0.insert(Concession_4.getString());
  FIX::CopyMsgIndicator CopyMsgIndicator_1(true);
  msg.set(CopyMsgIndicator_1);
  ExecutionReport_0.insert(CopyMsgIndicator_1.getString());
  FIX::CrossID CrossID_2("STRING_1368130895");
  msg.set(CrossID_2);
  ExecutionReport_0.insert(CrossID_2.getString());
  FIX::CrossType CrossType_2(2);
  msg.set(CrossType_2);
  ExecutionReport_0.insert(CrossType_2.getString());
  FIX::CumQty CumQty_1;
  CumQty_1.setString("7727949");
  msg.set(CumQty_1);
  ExecutionReport_0.insert(CumQty_1.getString());
  FIX::Currency Currency_20("EUR");
  msg.set(Currency_20);
  ExecutionReport_0.insert(Currency_20.getString());
  FIX::CustDirectedOrder CustDirectedOrder_0(true);
  msg.set(CustDirectedOrder_0);
  ExecutionReport_0.insert(CustDirectedOrder_0.getString());
  FIX::CustOrderCapacity CustOrderCapacity_5(3);
  msg.set(CustOrderCapacity_5);
  ExecutionReport_0.insert(CustOrderCapacity_5.getString());
  FIX::CustOrderHandlingInst CustOrderHandlingInst_0("MULTIPLESTRINGVALUE_IOC");
  msg.set(CustOrderHandlingInst_0);
  ExecutionReport_0.insert(CustOrderHandlingInst_0.getString());
  FIX::DayAvgPx DayAvgPx_0;
  DayAvgPx_0.setString("2594378");
  msg.set(DayAvgPx_0);
  ExecutionReport_0.insert(DayAvgPx_0.getString());
  FIX::DayBookingInst DayBookingInst_2('2');
  msg.set(DayBookingInst_2);
  ExecutionReport_0.insert(DayBookingInst_2.getString());
  FIX::DayCumQty DayCumQty_0;
  DayCumQty_0.setString("1939318");
  msg.set(DayCumQty_0);
  ExecutionReport_0.insert(DayCumQty_0.getString());
  FIX::DayOrderQty DayOrderQty_0;
  DayOrderQty_0.setString("8453581");
  msg.set(DayOrderQty_0);
  ExecutionReport_0.insert(DayOrderQty_0.getString());
  FIX::Designation Designation_1("STRING_275970579");
  msg.set(Designation_1);
  ExecutionReport_0.insert(Designation_1.getString());
  FIX::DiscretionPrice DiscretionPrice_0;
  DiscretionPrice_0.setString("4095510");
  msg.set(DiscretionPrice_0);
  ExecutionReport_0.insert(DiscretionPrice_0.getString());
  FIX::DividendYield DividendYield_0;
  DividendYield_0.setString("74.860000");
  msg.set(DividendYield_0);
  ExecutionReport_0.insert(DividendYield_0.getString());
  FIX::EffectiveTime EffectiveTime_1(FIX::UTCTIMESTAMP(20, 15, 37, 17, 12, 2006));
  msg.set(EffectiveTime_1);
  ExecutionReport_0.insert(EffectiveTime_1.getString());
  FIX::EncodedText EncodedText_41("DATA_389766551");
  msg.set(EncodedText_41);
  ExecutionReport_0.insert(EncodedText_41.getString());
  FIX::EncodedTextLen EncodedTextLen_41(331664993);
  msg.set(EncodedTextLen_41);
  ExecutionReport_0.insert(EncodedTextLen_41.getString());
  FIX::EndAccruedInterestAmt EndAccruedInterestAmt_9;
  EndAccruedInterestAmt_9.setString("14021255");
  msg.set(EndAccruedInterestAmt_9);
  ExecutionReport_0.insert(EndAccruedInterestAmt_9.getString());
  FIX::EndCash EndCash_9;
  EndCash_9.setString("9868936");
  msg.set(EndCash_9);
  ExecutionReport_0.insert(EndCash_9.getString());
  FIX::ExDate ExDate_1("LOCALMKTDATE_725851483");
  msg.set(ExDate_1);
  ExecutionReport_0.insert(ExDate_1.getString());
  FIX::ExecID ExecID_22("STRING_2104522465");
  msg.set(ExecID_22);
  ExecutionReport_0.insert(ExecID_22.getString());
  FIX::ExecInst ExecInst_1("MULTIPLECHARVALUE_k");
  msg.set(ExecInst_1);
  ExecutionReport_0.insert(ExecInst_1.getString());
  FIX::ExecPriceAdjustment ExecPriceAdjustment_0;
  ExecPriceAdjustment_0.setString("12232999");
  msg.set(ExecPriceAdjustment_0);
  ExecutionReport_0.insert(ExecPriceAdjustment_0.getString());
  FIX::ExecPriceType ExecPriceType_0('P');
  msg.set(ExecPriceType_0);
  ExecutionReport_0.insert(ExecPriceType_0.getString());
  FIX::ExecRefID ExecRefID_0("STRING_1893072758");
  msg.set(ExecRefID_0);
  ExecutionReport_0.insert(ExecRefID_0.getString());
  FIX::ExecRestatementReason ExecRestatementReason_0(1);
  msg.set(ExecRestatementReason_0);
  ExecutionReport_0.insert(ExecRestatementReason_0.getString());
  FIX::ExecType ExecType_0('8');
  msg.set(ExecType_0);
  ExecutionReport_0.insert(ExecType_0.getString());
  FIX::ExecValuationPoint ExecValuationPoint_0(FIX::UTCTIMESTAMP(4, 30, 59, 7, 8, 2005));
  msg.set(ExecValuationPoint_0);
  ExecutionReport_0.insert(ExecValuationPoint_0.getString());
  FIX::ExpireDate ExpireDate_2("LOCALMKTDATE_1873162278");
  msg.set(ExpireDate_2);
  ExecutionReport_0.insert(ExpireDate_2.getString());
  FIX::ExpireTime ExpireTime_3(FIX::UTCTIMESTAMP(0, 24, 48, 19, 9, 2009));
  msg.set(ExpireTime_3);
  ExecutionReport_0.insert(ExpireTime_3.getString());
  FIX::GTBookingInst GTBookingInst_1(1);
  msg.set(GTBookingInst_1);
  ExecutionReport_0.insert(GTBookingInst_1.getString());
  FIX::GrossTradeAmt GrossTradeAmt_4;
  GrossTradeAmt_4.setString("2342502");
  msg.set(GrossTradeAmt_4);
  ExecutionReport_0.insert(GrossTradeAmt_4.getString());
  FIX::HandlInst HandlInst_1('2');
  msg.set(HandlInst_1);
  ExecutionReport_0.insert(HandlInst_1.getString());
  FIX::HostCrossID HostCrossID_2("STRING_1636603402");
  msg.set(HostCrossID_2);
  ExecutionReport_0.insert(HostCrossID_2.getString());
  FIX::InterestAtMaturity InterestAtMaturity_4;
  InterestAtMaturity_4.setString("6240167");
  msg.set(InterestAtMaturity_4);
  ExecutionReport_0.insert(InterestAtMaturity_4.getString());
  FIX::LastCapacity LastCapacity_7('1');
  msg.set(LastCapacity_7);
  ExecutionReport_0.insert(LastCapacity_7.getString());
  FIX::LastForwardPoints LastForwardPoints_0;
  LastForwardPoints_0.setString("8912452");
  msg.set(LastForwardPoints_0);
  ExecutionReport_0.insert(LastForwardPoints_0.getString());
  FIX::LastForwardPoints2 LastForwardPoints2_0;
  LastForwardPoints2_0.setString("16109104");
  msg.set(LastForwardPoints2_0);
  ExecutionReport_0.insert(LastForwardPoints2_0.getString());
  FIX::LastFragment LastFragment_5(false);
  msg.set(LastFragment_5);
  ExecutionReport_0.insert(LastFragment_5.getString());
  FIX::LastLiquidityInd LastLiquidityInd_0(4);
  msg.set(LastLiquidityInd_0);
  ExecutionReport_0.insert(LastLiquidityInd_0.getString());
  FIX::LastMkt LastMkt_5("EXCHANGE_2135852328");
  msg.set(LastMkt_5);
  ExecutionReport_0.insert(LastMkt_5.getString());
  FIX::LastParPx LastParPx_8;
  LastParPx_8.setString("10822882");
  msg.set(LastParPx_8);
  ExecutionReport_0.insert(LastParPx_8.getString());
  FIX::LastPx LastPx_9;
  LastPx_9.setString("20727136");
  msg.set(LastPx_9);
  ExecutionReport_0.insert(LastPx_9.getString());
  FIX::LastQty LastQty_9;
  LastQty_9.setString("18814414");
  msg.set(LastQty_9);
  ExecutionReport_0.insert(LastQty_9.getString());
  FIX::LastRptRequested LastRptRequested_2(false);
  msg.set(LastRptRequested_2);
  ExecutionReport_0.insert(LastRptRequested_2.getString());
  FIX::LastSpotRate LastSpotRate_0;
  LastSpotRate_0.setString("19224545");
  msg.set(LastSpotRate_0);
  ExecutionReport_0.insert(LastSpotRate_0.getString());
  FIX::LastSwapPoints LastSwapPoints_0;
  LastSwapPoints_0.setString("10735906");
  msg.set(LastSwapPoints_0);
  ExecutionReport_0.insert(LastSwapPoints_0.getString());
  FIX::LeavesQty LeavesQty_0;
  LeavesQty_0.setString("18103854");
  msg.set(LeavesQty_0);
  ExecutionReport_0.insert(LeavesQty_0.getString());
  FIX::ListID ListID_14("STRING_680547320");
  msg.set(ListID_14);
  ExecutionReport_0.insert(ListID_14.getString());
  FIX::LotType LotType_12('4');
  msg.set(LotType_12);
  ExecutionReport_0.insert(LotType_12.getString());
  FIX::ManualOrderIndicator ManualOrderIndicator_0(false);
  msg.set(ManualOrderIndicator_0);
  ExecutionReport_0.insert(ManualOrderIndicator_0.getString());
  FIX::MassStatusReqID MassStatusReqID_0("STRING_1845561496");
  msg.set(MassStatusReqID_0);
  ExecutionReport_0.insert(MassStatusReqID_0.getString());
  FIX::MatchIncrement MatchIncrement_1;
  MatchIncrement_1.setString("14402602");
  msg.set(MatchIncrement_1);
  ExecutionReport_0.insert(MatchIncrement_1.getString());
  FIX::MatchType MatchType_21("STRING_6");
  msg.set(MatchType_21);
  ExecutionReport_0.insert(MatchType_21.getString());
  FIX::MaxFloor MaxFloor_1;
  MaxFloor_1.setString("17084502");
  msg.set(MaxFloor_1);
  ExecutionReport_0.insert(MaxFloor_1.getString());
  FIX::MaxPriceLevels MaxPriceLevels_1(1476193736);
  msg.set(MaxPriceLevels_1);
  ExecutionReport_0.insert(MaxPriceLevels_1.getString());
  FIX::MaxShow MaxShow_1;
  MaxShow_1.setString("12030405");
  msg.set(MaxShow_1);
  ExecutionReport_0.insert(MaxShow_1.getString());
  FIX::MinQty MinQty_1;
  MinQty_1.setString("1761727");
  msg.set(MinQty_1);
  ExecutionReport_0.insert(MinQty_1.getString());
  FIX::MoneyLaunderingStatus MoneyLaunderingStatus_1('2');
  msg.set(MoneyLaunderingStatus_1);
  ExecutionReport_0.insert(MoneyLaunderingStatus_1.getString());
  FIX::MultiLegReportingType MultiLegReportingType_3('3');
  msg.set(MultiLegReportingType_3);
  ExecutionReport_0.insert(MultiLegReportingType_3.getString());
  FIX::NetMoney NetMoney_4;
  NetMoney_4.setString("14508502");
  msg.set(NetMoney_4);
  ExecutionReport_0.insert(NetMoney_4.getString());
  FIX::NumDaysInterest NumDaysInterest_4(251405128);
  msg.set(NumDaysInterest_4);
  ExecutionReport_0.insert(NumDaysInterest_4.getString());
  FIX::OrdRejReason OrdRejReason_0(13);
  msg.set(OrdRejReason_0);
  ExecutionReport_0.insert(OrdRejReason_0.getString());
  FIX::OrdStatus OrdStatus_0('9');
  msg.set(OrdStatus_0);
  ExecutionReport_0.insert(OrdStatus_0.getString());
  FIX::OrdStatusReqID OrdStatusReqID_0("STRING_1888008530");
  msg.set(OrdStatusReqID_0);
  ExecutionReport_0.insert(OrdStatusReqID_0.getString());
  FIX::OrdType OrdType_22('2');
  msg.set(OrdType_22);
  ExecutionReport_0.insert(OrdType_22.getString());
  FIX::OrderCapacity OrderCapacity_3('A');
  msg.set(OrderCapacity_3);
  ExecutionReport_0.insert(OrderCapacity_3.getString());
  FIX::OrderCategory OrderCategory_0('2');
  msg.set(OrderCategory_0);
  ExecutionReport_0.insert(OrderCategory_0.getString());
  FIX::OrderHandlingInstSource OrderHandlingInstSource_0(1);
  msg.set(OrderHandlingInstSource_0);
  ExecutionReport_0.insert(OrderHandlingInstSource_0.getString());
  FIX::OrderID OrderID_19("STRING_1391930808");
  msg.set(OrderID_19);
  ExecutionReport_0.insert(OrderID_19.getString());
  FIX::OrderQty2 OrderQty2_0;
  OrderQty2_0.setString("14800542");
  msg.set(OrderQty2_0);
  ExecutionReport_0.insert(OrderQty2_0.getString());
  FIX::OrderRestrictions OrderRestrictions_3("MULTIPLECHARVALUE_E");
  msg.set(OrderRestrictions_3);
  ExecutionReport_0.insert(OrderRestrictions_3.getString());
  FIX::OrigClOrdID OrigClOrdID_5("STRING_326735377");
  msg.set(OrigClOrdID_5);
  ExecutionReport_0.insert(OrigClOrdID_5.getString());
  FIX::OrigCrossID OrigCrossID_2("STRING_1405284281");
  msg.set(OrigCrossID_2);
  ExecutionReport_0.insert(OrigCrossID_2.getString());
  FIX::ParticipationRate ParticipationRate_1;
  ParticipationRate_1.setString("40.730000");
  msg.set(ParticipationRate_1);
  ExecutionReport_0.insert(ParticipationRate_1.getString());
  FIX::PeggedPrice PeggedPrice_0;
  PeggedPrice_0.setString("21113084");
  msg.set(PeggedPrice_0);
  ExecutionReport_0.insert(PeggedPrice_0.getString());
  FIX::PeggedRefPrice PeggedRefPrice_0;
  PeggedRefPrice_0.setString("11802552");
  msg.set(PeggedRefPrice_0);
  ExecutionReport_0.insert(PeggedRefPrice_0.getString());
  FIX::PositionEffect PositionEffect_5('N');
  msg.set(PositionEffect_5);
  ExecutionReport_0.insert(PositionEffect_5.getString());
  FIX::PreTradeAnonymity PreTradeAnonymity_2(true);
  msg.set(PreTradeAnonymity_2);
  ExecutionReport_0.insert(PreTradeAnonymity_2.getString());
  FIX::PreallocMethod PreallocMethod_2('0');
  msg.set(PreallocMethod_2);
  ExecutionReport_0.insert(PreallocMethod_2.getString());
  FIX::Price Price_10;
  Price_10.setString("13384684");
  msg.set(Price_10);
  ExecutionReport_0.insert(Price_10.getString());
  FIX::PriceDelta PriceDelta_0;
  PriceDelta_0.setString("9688588");
  msg.set(PriceDelta_0);
  ExecutionReport_0.insert(PriceDelta_0.getString());
  FIX::PriceImprovement PriceImprovement_0;
  PriceImprovement_0.setString("15588804");
  msg.set(PriceImprovement_0);
  ExecutionReport_0.insert(PriceImprovement_0.getString());
  FIX::PriceProtectionScope PriceProtectionScope_1('3');
  msg.set(PriceProtectionScope_1);
  ExecutionReport_0.insert(PriceProtectionScope_1.getString());
  FIX::PriceType PriceType_19(16);
  msg.set(PriceType_19);
  ExecutionReport_0.insert(PriceType_19.getString());
  FIX::PriorityIndicator PriorityIndicator_0(1);
  msg.set(PriorityIndicator_0);
  ExecutionReport_0.insert(PriorityIndicator_0.getString());
  FIX::QtyType QtyType_13(1);
  msg.set(QtyType_13);
  ExecutionReport_0.insert(QtyType_13.getString());
  FIX::QuoteRespID QuoteRespID_0("STRING_1092226694");
  msg.set(QuoteRespID_0);
  ExecutionReport_0.insert(QuoteRespID_0.getString());
  FIX::ReceivedDeptID ReceivedDeptID_0("STRING_1296019747");
  msg.set(ReceivedDeptID_0);
  ExecutionReport_0.insert(ReceivedDeptID_0.getString());
  FIX::RegistID RegistID_1("STRING_58265455");
  msg.set(RegistID_1);
  ExecutionReport_0.insert(RegistID_1.getString());
  FIX::ReportToExch ReportToExch_0(false);
  msg.set(ReportToExch_0);
  ExecutionReport_0.insert(ReportToExch_0.getString());
  FIX::RiskFreeRate RiskFreeRate_0;
  RiskFreeRate_0.setString("5993863");
  msg.set(RiskFreeRate_0);
  ExecutionReport_0.insert(RiskFreeRate_0.getString());
  FIX::SecondaryClOrdID SecondaryClOrdID_19("STRING_309670583");
  msg.set(SecondaryClOrdID_19);
  ExecutionReport_0.insert(SecondaryClOrdID_19.getString());
  FIX::SecondaryExecID SecondaryExecID_7("STRING_555080825");
  msg.set(SecondaryExecID_7);
  ExecutionReport_0.insert(SecondaryExecID_7.getString());
  FIX::SecondaryOrderID SecondaryOrderID_16("STRING_851708364");
  msg.set(SecondaryOrderID_16);
  ExecutionReport_0.insert(SecondaryOrderID_16.getString());
  FIX::SettlCurrAmt SettlCurrAmt_6;
  SettlCurrAmt_6.setString("501954");
  msg.set(SettlCurrAmt_6);
  ExecutionReport_0.insert(SettlCurrAmt_6.getString());
  FIX::SettlCurrFxRate SettlCurrFxRate_6;
  SettlCurrFxRate_6.setString("21013916");
  msg.set(SettlCurrFxRate_6);
  ExecutionReport_0.insert(SettlCurrFxRate_6.getString());
  FIX::SettlCurrFxRateCalc SettlCurrFxRateCalc_6('M');
  msg.set(SettlCurrFxRateCalc_6);
  ExecutionReport_0.insert(SettlCurrFxRateCalc_6.getString());
  FIX::SettlCurrency SettlCurrency_8("GBP");
  msg.set(SettlCurrency_8);
  ExecutionReport_0.insert(SettlCurrency_8.getString());
  FIX::SettlDate SettlDate_17("LOCALMKTDATE_1629098032");
  msg.set(SettlDate_17);
  ExecutionReport_0.insert(SettlDate_17.getString());
  FIX::SettlDate2 SettlDate2_0("LOCALMKTDATE_14536223");
  msg.set(SettlDate2_0);
  ExecutionReport_0.insert(SettlDate2_0.getString());
  FIX::SettlType SettlType_11("STRING_9");
  msg.set(SettlType_11);
  ExecutionReport_0.insert(SettlType_11.getString());
  FIX::Side Side_22('2');
  msg.set(Side_22);
  ExecutionReport_0.insert(Side_22.getString());
  FIX::SolicitedFlag SolicitedFlag_2(true);
  msg.set(SolicitedFlag_2);
  ExecutionReport_0.insert(SolicitedFlag_2.getString());
  FIX::StartCash StartCash_9;
  StartCash_9.setString("5463322");
  msg.set(StartCash_9);
  ExecutionReport_0.insert(StartCash_9.getString());
  FIX::StopPx StopPx_1;
  StopPx_1.setString("19196581");
  msg.set(StopPx_1);
  ExecutionReport_0.insert(StopPx_1.getString());
  FIX::TargetStrategy TargetStrategy_1(2);
  msg.set(TargetStrategy_1);
  ExecutionReport_0.insert(TargetStrategy_1.getString());
  FIX::TargetStrategyParameters TargetStrategyParameters_1("STRING_204503330");
  msg.set(TargetStrategyParameters_1);
  ExecutionReport_0.insert(TargetStrategyParameters_1.getString());
  FIX::TargetStrategyPerformance TargetStrategyPerformance_0;
  TargetStrategyPerformance_0.setString("15463847");
  msg.set(TargetStrategyPerformance_0);
  ExecutionReport_0.insert(TargetStrategyPerformance_0.getString());
  FIX::Text Text_41("STRING_165910992");
  msg.set(Text_41);
  ExecutionReport_0.insert(Text_41.getString());
  FIX::TimeBracket TimeBracket_0("STRING_1542971758");
  msg.set(TimeBracket_0);
  ExecutionReport_0.insert(TimeBracket_0.getString());
  FIX::TimeInForce TimeInForce_18('5');
  msg.set(TimeInForce_18);
  ExecutionReport_0.insert(TimeInForce_18.getString());
  FIX::TimeToExpiration TimeToExpiration_0;
  TimeToExpiration_0.setString("17247913");
  msg.set(TimeToExpiration_0);
  ExecutionReport_0.insert(TimeToExpiration_0.getString());
  FIX::TotNoFills TotNoFills_0(26733153);
  msg.set(TotNoFills_0);
  ExecutionReport_0.insert(TotNoFills_0.getString());
  FIX::TotNumReports TotNumReports_2(256946169);
  msg.set(TotNumReports_2);
  ExecutionReport_0.insert(TotNumReports_2.getString());
  FIX::TotalTakedown TotalTakedown_4;
  TotalTakedown_4.setString("6971547");
  msg.set(TotalTakedown_4);
  ExecutionReport_0.insert(TotalTakedown_4.getString());
  FIX::TradeDate TradeDate_14("LOCALMKTDATE_2134171933");
  msg.set(TradeDate_14);
  ExecutionReport_0.insert(TradeDate_14.getString());
  FIX::TradeOriginationDate TradeOriginationDate_8("LOCALMKTDATE_1349172864");
  msg.set(TradeOriginationDate_8);
  ExecutionReport_0.insert(TradeOriginationDate_8.getString());
  FIX::TradedFlatSwitch TradedFlatSwitch_0(true);
  msg.set(TradedFlatSwitch_0);
  ExecutionReport_0.insert(TradedFlatSwitch_0.getString());
  FIX::TradingSessionID TradingSessionID_28("STRING_2");
  msg.set(TradingSessionID_28);
  ExecutionReport_0.insert(TradingSessionID_28.getString());
  FIX::TradingSessionSubID TradingSessionSubID_28("STRING_1");
  msg.set(TradingSessionSubID_28);
  ExecutionReport_0.insert(TradingSessionSubID_28.getString());
  FIX::TransBkdTime TransBkdTime_1(FIX::UTCTIMESTAMP(12, 50, 36, 18, 2, 2011));
  msg.set(TransBkdTime_1);
  ExecutionReport_0.insert(TransBkdTime_1.getString());
  FIX::TransactTime TransactTime_18(FIX::UTCTIMESTAMP(7, 25, 37, 20, 12, 2003));
  msg.set(TransactTime_18);
  ExecutionReport_0.insert(TransactTime_18.getString());
  FIX::TrdMatchID TrdMatchID_0("STRING_667710866");
  msg.set(TrdMatchID_0);
  ExecutionReport_0.insert(TrdMatchID_0.getString());
  FIX::UnderlyingLastPx UnderlyingLastPx_0;
  UnderlyingLastPx_0.setString("5960913");
  msg.set(UnderlyingLastPx_0);
  ExecutionReport_0.insert(UnderlyingLastPx_0.getString());
  FIX::UnderlyingLastQty UnderlyingLastQty_0;
  UnderlyingLastQty_0.setString("8262505");
  msg.set(UnderlyingLastQty_0);
  ExecutionReport_0.insert(UnderlyingLastQty_0.getString());
  FIX::Volatility Volatility_0;
  Volatility_0.setString("8722141");
  msg.set(Volatility_0);
  ExecutionReport_0.insert(Volatility_0.getString());
  FIX::WorkingIndicator WorkingIndicator_0(false);
  msg.set(WorkingIndicator_0);
  ExecutionReport_0.insert(WorkingIndicator_0.getString());
  all_values.push_back(ExecutionReport_0);

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_4;
  FIX::ApplID ApplID_4("STRING_992161573");
  msg.set(ApplID_4);
  ApplicationSequenceControl_4.insert(ApplID_4.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_4(267702307);
  msg.set(ApplLastSeqNum_4);
  ApplicationSequenceControl_4.insert(ApplLastSeqNum_4.getString());
  FIX::ApplResendFlag ApplResendFlag_4(true);
  msg.set(ApplResendFlag_4);
  ApplicationSequenceControl_4.insert(ApplResendFlag_4.getString());
  FIX::ApplSeqNum ApplSeqNum_4(569469317);
  msg.set(ApplSeqNum_4);
  ApplicationSequenceControl_4.insert(ApplSeqNum_4.getString());
  all_values.push_back(ApplicationSequenceControl_4);

  // CommissionData
  multiset<string> CommissionData_11;
  FIX::CommCurrency CommCurrency_11("CAN");
  msg.set(CommCurrency_11);
  CommissionData_11.insert(CommCurrency_11.getString());
  FIX::CommType CommType_11('2');
  msg.set(CommType_11);
  CommissionData_11.insert(CommType_11.getString());
  FIX::Commission Commission_11;
  Commission_11.setString("2811237");
  msg.set(Commission_11);
  CommissionData_11.insert(Commission_11.getString());
  FIX::FundRenewWaiv FundRenewWaiv_11('Y');
  msg.set(FundRenewWaiv_11);
  CommissionData_11.insert(FundRenewWaiv_11.getString());
  all_values.push_back(CommissionData_11);

  // ContAmtGrp
  // Group ContAmtGrp.NoContAmts
  {
    FIX50SP2::ExecutionReport::NoContAmts noContAmts_0_0;
    // ContAmtGrp.NoContAmts
    multiset<string> ContAmtGrp_NoContAmts_0;
    FIX::ContAmtCurr ContAmtCurr_0("USD");
    noContAmts_0_0.set(ContAmtCurr_0);
    ContAmtGrp_NoContAmts_0.insert(ContAmtCurr_0.getString());
    FIX::ContAmtType ContAmtType_0(12);
    noContAmts_0_0.set(ContAmtType_0);
    ContAmtGrp_NoContAmts_0.insert(ContAmtType_0.getString());
    FIX::ContAmtValue ContAmtValue_0;
    ContAmtValue_0.setString("6807018");
    noContAmts_0_0.set(ContAmtValue_0);
    ContAmtGrp_NoContAmts_0.insert(ContAmtValue_0.getString());
    all_values.push_back(ContAmtGrp_NoContAmts_0);

    msg.addGroup(noContAmts_0_0);
  }
  {
    FIX50SP2::ExecutionReport::NoContAmts noContAmts_0_1;
    // ContAmtGrp.NoContAmts
    multiset<string> ContAmtGrp_NoContAmts_1;
    FIX::ContAmtCurr ContAmtCurr_1("USD");
    noContAmts_0_1.set(ContAmtCurr_1);
    ContAmtGrp_NoContAmts_1.insert(ContAmtCurr_1.getString());
    FIX::ContAmtType ContAmtType_1(13);
    noContAmts_0_1.set(ContAmtType_1);
    ContAmtGrp_NoContAmts_1.insert(ContAmtType_1.getString());
    FIX::ContAmtValue ContAmtValue_1;
    ContAmtValue_1.setString("16838529");
    noContAmts_0_1.set(ContAmtValue_1);
    ContAmtGrp_NoContAmts_1.insert(ContAmtValue_1.getString());
    all_values.push_back(ContAmtGrp_NoContAmts_1);

    msg.addGroup(noContAmts_0_1);
  }
  // ContraGrp
  // Group ContraGrp.NoContraBrokers
  {
    FIX50SP2::ExecutionReport::NoContraBrokers noContraBrokers_0_0;
    // ContraGrp.NoContraBrokers
    multiset<string> ContraGrp_NoContraBrokers_0;
    FIX::ContraBroker ContraBroker_0("STRING_24823367");
    noContraBrokers_0_0.set(ContraBroker_0);
    ContraGrp_NoContraBrokers_0.insert(ContraBroker_0.getString());
    FIX::ContraLegRefID ContraLegRefID_0("STRING_1990963354");
    noContraBrokers_0_0.set(ContraLegRefID_0);
    ContraGrp_NoContraBrokers_0.insert(ContraLegRefID_0.getString());
    FIX::ContraTradeQty ContraTradeQty_0;
    ContraTradeQty_0.setString("11087300");
    noContraBrokers_0_0.set(ContraTradeQty_0);
    ContraGrp_NoContraBrokers_0.insert(ContraTradeQty_0.getString());
    FIX::ContraTradeTime ContraTradeTime_0(FIX::UTCTIMESTAMP(18, 10, 58, 25, 12, 2009));
    noContraBrokers_0_0.set(ContraTradeTime_0);
    ContraGrp_NoContraBrokers_0.insert(ContraTradeTime_0.getString());
    FIX::ContraTrader ContraTrader_0("STRING_1504783362");
    noContraBrokers_0_0.set(ContraTrader_0);
    ContraGrp_NoContraBrokers_0.insert(ContraTrader_0.getString());
    all_values.push_back(ContraGrp_NoContraBrokers_0);

    msg.addGroup(noContraBrokers_0_0);
  }
  // DiscretionInstructions
  multiset<string> DiscretionInstructions_1;
  FIX::DiscretionInst DiscretionInst_1('2');
  msg.set(DiscretionInst_1);
  DiscretionInstructions_1.insert(DiscretionInst_1.getString());
  FIX::DiscretionLimitType DiscretionLimitType_1(2);
  msg.set(DiscretionLimitType_1);
  DiscretionInstructions_1.insert(DiscretionLimitType_1.getString());
  FIX::DiscretionMoveType DiscretionMoveType_1(1);
  msg.set(DiscretionMoveType_1);
  DiscretionInstructions_1.insert(DiscretionMoveType_1.getString());
  FIX::DiscretionOffsetType DiscretionOffsetType_1(2);
  msg.set(DiscretionOffsetType_1);
  DiscretionInstructions_1.insert(DiscretionOffsetType_1.getString());
  FIX::DiscretionOffsetValue DiscretionOffsetValue_1;
  DiscretionOffsetValue_1.setString("17402013");
  msg.set(DiscretionOffsetValue_1);
  DiscretionInstructions_1.insert(DiscretionOffsetValue_1.getString());
  FIX::DiscretionRoundDirection DiscretionRoundDirection_1(2);
  msg.set(DiscretionRoundDirection_1);
  DiscretionInstructions_1.insert(DiscretionRoundDirection_1.getString());
  FIX::DiscretionScope DiscretionScope_1(4);
  msg.set(DiscretionScope_1);
  DiscretionInstructions_1.insert(DiscretionScope_1.getString());
  all_values.push_back(DiscretionInstructions_1);

  // DisplayInstruction
  multiset<string> DisplayInstruction_1;
  FIX::DisplayHighQty DisplayHighQty_1;
  DisplayHighQty_1.setString("8593417");
  msg.set(DisplayHighQty_1);
  DisplayInstruction_1.insert(DisplayHighQty_1.getString());
  FIX::DisplayLowQty DisplayLowQty_1;
  DisplayLowQty_1.setString("2005612");
  msg.set(DisplayLowQty_1);
  DisplayInstruction_1.insert(DisplayLowQty_1.getString());
  FIX::DisplayMethod DisplayMethod_1('2');
  msg.set(DisplayMethod_1);
  DisplayInstruction_1.insert(DisplayMethod_1.getString());
  FIX::DisplayMinIncr DisplayMinIncr_1;
  DisplayMinIncr_1.setString("19716565");
  msg.set(DisplayMinIncr_1);
  DisplayInstruction_1.insert(DisplayMinIncr_1.getString());
  FIX::DisplayQty DisplayQty_1;
  DisplayQty_1.setString("5266387");
  msg.set(DisplayQty_1);
  DisplayInstruction_1.insert(DisplayQty_1.getString());
  FIX::DisplayWhen DisplayWhen_1('2');
  msg.set(DisplayWhen_1);
  DisplayInstruction_1.insert(DisplayWhen_1.getString());
  FIX::RefreshQty RefreshQty_1;
  RefreshQty_1.setString("13815648");
  msg.set(RefreshQty_1);
  DisplayInstruction_1.insert(RefreshQty_1.getString());
  FIX::SecondaryDisplayQty SecondaryDisplayQty_1;
  SecondaryDisplayQty_1.setString("12073405");
  msg.set(SecondaryDisplayQty_1);
  DisplayInstruction_1.insert(SecondaryDisplayQty_1.getString());
  all_values.push_back(DisplayInstruction_1);

  // FillsGrp
  // Group FillsGrp.NoFills
  {
    FIX50SP2::ExecutionReport::NoFills noFills_0_0;
    // FillsGrp.NoFills
    multiset<string> FillsGrp_NoFills_0;
    FIX::FillExecID FillExecID_0("STRING_2088258701");
    noFills_0_0.set(FillExecID_0);
    FillsGrp_NoFills_0.insert(FillExecID_0.getString());
    FIX::FillLiquidityInd FillLiquidityInd_0(145378480);
    noFills_0_0.set(FillLiquidityInd_0);
    FillsGrp_NoFills_0.insert(FillLiquidityInd_0.getString());
    FIX::FillPx FillPx_0;
    FillPx_0.setString("17127077");
    noFills_0_0.set(FillPx_0);
    FillsGrp_NoFills_0.insert(FillPx_0.getString());
    FIX::FillQty FillQty_0;
    FillQty_0.setString("339379");
    noFills_0_0.set(FillQty_0);
    FillsGrp_NoFills_0.insert(FillQty_0.getString());
    all_values.push_back(FillsGrp_NoFills_0);

    // NestedParties4
    // Group NestedParties4.NoNested4PartyIDs
    {
      FIX50SP2::ExecutionReport::NoFills::NoNested4PartyIDs noNested4PartyIDs_0_1_0;
      // NestedParties4.NoNested4PartyIDs
      multiset<string> NestedParties4_NoNested4PartyIDs_0;
      FIX::Nested4PartyID Nested4PartyID_0("STRING_1556187505");
      noNested4PartyIDs_0_1_0.set(Nested4PartyID_0);
      NestedParties4_NoNested4PartyIDs_0.insert(Nested4PartyID_0.getString());
      FIX::Nested4PartyIDSource Nested4PartyIDSource_0('1');
      noNested4PartyIDs_0_1_0.set(Nested4PartyIDSource_0);
      NestedParties4_NoNested4PartyIDs_0.insert(Nested4PartyIDSource_0.getString());
      FIX::Nested4PartyRole Nested4PartyRole_0(1296346852);
      noNested4PartyIDs_0_1_0.set(Nested4PartyRole_0);
      NestedParties4_NoNested4PartyIDs_0.insert(Nested4PartyRole_0.getString());
      all_values.push_back(NestedParties4_NoNested4PartyIDs_0);

      // NstdPtys4SubGrp
      // Group NstdPtys4SubGrp.NoNested4PartySubIDs
      {
        FIX50SP2::ExecutionReport::NoFills::NoNested4PartyIDs::NoNested4PartySubIDs noNested4PartySubIDs_0_0_2_0;
        // NstdPtys4SubGrp.NoNested4PartySubIDs
        multiset<string> NstdPtys4SubGrp_NoNested4PartySubIDs_0;
        FIX::Nested4PartySubID Nested4PartySubID_0("STRING_927831176");
        noNested4PartySubIDs_0_0_2_0.set(Nested4PartySubID_0);
        NstdPtys4SubGrp_NoNested4PartySubIDs_0.insert(Nested4PartySubID_0.getString());
        FIX::Nested4PartySubIDType Nested4PartySubIDType_0(648666702);
        noNested4PartySubIDs_0_0_2_0.set(Nested4PartySubIDType_0);
        NstdPtys4SubGrp_NoNested4PartySubIDs_0.insert(Nested4PartySubIDType_0.getString());
        all_values.push_back(NstdPtys4SubGrp_NoNested4PartySubIDs_0);

        noNested4PartyIDs_0_1_0.addGroup(noNested4PartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoFills::NoNested4PartyIDs::NoNested4PartySubIDs noNested4PartySubIDs_0_0_2_1;
        // NstdPtys4SubGrp.NoNested4PartySubIDs
        multiset<string> NstdPtys4SubGrp_NoNested4PartySubIDs_1;
        FIX::Nested4PartySubID Nested4PartySubID_1("STRING_6131320");
        noNested4PartySubIDs_0_0_2_1.set(Nested4PartySubID_1);
        NstdPtys4SubGrp_NoNested4PartySubIDs_1.insert(Nested4PartySubID_1.getString());
        FIX::Nested4PartySubIDType Nested4PartySubIDType_1(1309085791);
        noNested4PartySubIDs_0_0_2_1.set(Nested4PartySubIDType_1);
        NstdPtys4SubGrp_NoNested4PartySubIDs_1.insert(Nested4PartySubIDType_1.getString());
        all_values.push_back(NstdPtys4SubGrp_NoNested4PartySubIDs_1);

        noNested4PartyIDs_0_1_0.addGroup(noNested4PartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::ExecutionReport::NoFills::NoNested4PartyIDs::NoNested4PartySubIDs noNested4PartySubIDs_0_0_2_2;
        // NstdPtys4SubGrp.NoNested4PartySubIDs
        multiset<string> NstdPtys4SubGrp_NoNested4PartySubIDs_2;
        FIX::Nested4PartySubID Nested4PartySubID_2("STRING_827237133");
        noNested4PartySubIDs_0_0_2_2.set(Nested4PartySubID_2);
        NstdPtys4SubGrp_NoNested4PartySubIDs_2.insert(Nested4PartySubID_2.getString());
        FIX::Nested4PartySubIDType Nested4PartySubIDType_2(1510914682);
        noNested4PartySubIDs_0_0_2_2.set(Nested4PartySubIDType_2);
        NstdPtys4SubGrp_NoNested4PartySubIDs_2.insert(Nested4PartySubIDType_2.getString());
        all_values.push_back(NstdPtys4SubGrp_NoNested4PartySubIDs_2);

        noNested4PartyIDs_0_1_0.addGroup(noNested4PartySubIDs_0_0_2_2);
      }
      noFills_0_0.addGroup(noNested4PartyIDs_0_1_0);
    }
    msg.addGroup(noFills_0_0);
  }
  {
    FIX50SP2::ExecutionReport::NoFills noFills_0_1;
    // FillsGrp.NoFills
    multiset<string> FillsGrp_NoFills_1;
    FIX::FillExecID FillExecID_1("STRING_1685332937");
    noFills_0_1.set(FillExecID_1);
    FillsGrp_NoFills_1.insert(FillExecID_1.getString());
    FIX::FillLiquidityInd FillLiquidityInd_1(1997969138);
    noFills_0_1.set(FillLiquidityInd_1);
    FillsGrp_NoFills_1.insert(FillLiquidityInd_1.getString());
    FIX::FillPx FillPx_1;
    FillPx_1.setString("11359167");
    noFills_0_1.set(FillPx_1);
    FillsGrp_NoFills_1.insert(FillPx_1.getString());
    FIX::FillQty FillQty_1;
    FillQty_1.setString("2768489");
    noFills_0_1.set(FillQty_1);
    FillsGrp_NoFills_1.insert(FillQty_1.getString());
    all_values.push_back(FillsGrp_NoFills_1);

    // NestedParties4
    // Group NestedParties4.NoNested4PartyIDs
    {
      FIX50SP2::ExecutionReport::NoFills::NoNested4PartyIDs noNested4PartyIDs_1_1_0;
      // NestedParties4.NoNested4PartyIDs
      multiset<string> NestedParties4_NoNested4PartyIDs_1;
      FIX::Nested4PartyID Nested4PartyID_1("STRING_1055354185");
      noNested4PartyIDs_1_1_0.set(Nested4PartyID_1);
      NestedParties4_NoNested4PartyIDs_1.insert(Nested4PartyID_1.getString());
      FIX::Nested4PartyIDSource Nested4PartyIDSource_1('1');
      noNested4PartyIDs_1_1_0.set(Nested4PartyIDSource_1);
      NestedParties4_NoNested4PartyIDs_1.insert(Nested4PartyIDSource_1.getString());
      FIX::Nested4PartyRole Nested4PartyRole_1(302544870);
      noNested4PartyIDs_1_1_0.set(Nested4PartyRole_1);
      NestedParties4_NoNested4PartyIDs_1.insert(Nested4PartyRole_1.getString());
      all_values.push_back(NestedParties4_NoNested4PartyIDs_1);

      // NstdPtys4SubGrp
      // Group NstdPtys4SubGrp.NoNested4PartySubIDs
      {
        FIX50SP2::ExecutionReport::NoFills::NoNested4PartyIDs::NoNested4PartySubIDs noNested4PartySubIDs_1_0_2_0;
        // NstdPtys4SubGrp.NoNested4PartySubIDs
        multiset<string> NstdPtys4SubGrp_NoNested4PartySubIDs_3;
        FIX::Nested4PartySubID Nested4PartySubID_3("STRING_668150139");
        noNested4PartySubIDs_1_0_2_0.set(Nested4PartySubID_3);
        NstdPtys4SubGrp_NoNested4PartySubIDs_3.insert(Nested4PartySubID_3.getString());
        FIX::Nested4PartySubIDType Nested4PartySubIDType_3(126717771);
        noNested4PartySubIDs_1_0_2_0.set(Nested4PartySubIDType_3);
        NstdPtys4SubGrp_NoNested4PartySubIDs_3.insert(Nested4PartySubIDType_3.getString());
        all_values.push_back(NstdPtys4SubGrp_NoNested4PartySubIDs_3);

        noNested4PartyIDs_1_1_0.addGroup(noNested4PartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoFills::NoNested4PartyIDs::NoNested4PartySubIDs noNested4PartySubIDs_1_0_2_1;
        // NstdPtys4SubGrp.NoNested4PartySubIDs
        multiset<string> NstdPtys4SubGrp_NoNested4PartySubIDs_4;
        FIX::Nested4PartySubID Nested4PartySubID_4("STRING_1782554127");
        noNested4PartySubIDs_1_0_2_1.set(Nested4PartySubID_4);
        NstdPtys4SubGrp_NoNested4PartySubIDs_4.insert(Nested4PartySubID_4.getString());
        FIX::Nested4PartySubIDType Nested4PartySubIDType_4(504100487);
        noNested4PartySubIDs_1_0_2_1.set(Nested4PartySubIDType_4);
        NstdPtys4SubGrp_NoNested4PartySubIDs_4.insert(Nested4PartySubIDType_4.getString());
        all_values.push_back(NstdPtys4SubGrp_NoNested4PartySubIDs_4);

        noNested4PartyIDs_1_1_0.addGroup(noNested4PartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::ExecutionReport::NoFills::NoNested4PartyIDs::NoNested4PartySubIDs noNested4PartySubIDs_1_0_2_2;
        // NstdPtys4SubGrp.NoNested4PartySubIDs
        multiset<string> NstdPtys4SubGrp_NoNested4PartySubIDs_5;
        FIX::Nested4PartySubID Nested4PartySubID_5("STRING_1508282648");
        noNested4PartySubIDs_1_0_2_2.set(Nested4PartySubID_5);
        NstdPtys4SubGrp_NoNested4PartySubIDs_5.insert(Nested4PartySubID_5.getString());
        FIX::Nested4PartySubIDType Nested4PartySubIDType_5(842411005);
        noNested4PartySubIDs_1_0_2_2.set(Nested4PartySubIDType_5);
        NstdPtys4SubGrp_NoNested4PartySubIDs_5.insert(Nested4PartySubIDType_5.getString());
        all_values.push_back(NstdPtys4SubGrp_NoNested4PartySubIDs_5);

        noNested4PartyIDs_1_1_0.addGroup(noNested4PartySubIDs_1_0_2_2);
      }
      noFills_0_1.addGroup(noNested4PartyIDs_1_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoFills::NoNested4PartyIDs noNested4PartyIDs_1_1_1;
      // NestedParties4.NoNested4PartyIDs
      multiset<string> NestedParties4_NoNested4PartyIDs_2;
      FIX::Nested4PartyID Nested4PartyID_2("STRING_532955323");
      noNested4PartyIDs_1_1_1.set(Nested4PartyID_2);
      NestedParties4_NoNested4PartyIDs_2.insert(Nested4PartyID_2.getString());
      FIX::Nested4PartyIDSource Nested4PartyIDSource_2('1');
      noNested4PartyIDs_1_1_1.set(Nested4PartyIDSource_2);
      NestedParties4_NoNested4PartyIDs_2.insert(Nested4PartyIDSource_2.getString());
      FIX::Nested4PartyRole Nested4PartyRole_2(987789485);
      noNested4PartyIDs_1_1_1.set(Nested4PartyRole_2);
      NestedParties4_NoNested4PartyIDs_2.insert(Nested4PartyRole_2.getString());
      all_values.push_back(NestedParties4_NoNested4PartyIDs_2);

      // NstdPtys4SubGrp
      // Group NstdPtys4SubGrp.NoNested4PartySubIDs
      {
        FIX50SP2::ExecutionReport::NoFills::NoNested4PartyIDs::NoNested4PartySubIDs noNested4PartySubIDs_1_1_2_0;
        // NstdPtys4SubGrp.NoNested4PartySubIDs
        multiset<string> NstdPtys4SubGrp_NoNested4PartySubIDs_6;
        FIX::Nested4PartySubID Nested4PartySubID_6("STRING_1482995653");
        noNested4PartySubIDs_1_1_2_0.set(Nested4PartySubID_6);
        NstdPtys4SubGrp_NoNested4PartySubIDs_6.insert(Nested4PartySubID_6.getString());
        FIX::Nested4PartySubIDType Nested4PartySubIDType_6(1157991332);
        noNested4PartySubIDs_1_1_2_0.set(Nested4PartySubIDType_6);
        NstdPtys4SubGrp_NoNested4PartySubIDs_6.insert(Nested4PartySubIDType_6.getString());
        all_values.push_back(NstdPtys4SubGrp_NoNested4PartySubIDs_6);

        noNested4PartyIDs_1_1_1.addGroup(noNested4PartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoFills::NoNested4PartyIDs::NoNested4PartySubIDs noNested4PartySubIDs_1_1_2_1;
        // NstdPtys4SubGrp.NoNested4PartySubIDs
        multiset<string> NstdPtys4SubGrp_NoNested4PartySubIDs_7;
        FIX::Nested4PartySubID Nested4PartySubID_7("STRING_1654366979");
        noNested4PartySubIDs_1_1_2_1.set(Nested4PartySubID_7);
        NstdPtys4SubGrp_NoNested4PartySubIDs_7.insert(Nested4PartySubID_7.getString());
        FIX::Nested4PartySubIDType Nested4PartySubIDType_7(478179959);
        noNested4PartySubIDs_1_1_2_1.set(Nested4PartySubIDType_7);
        NstdPtys4SubGrp_NoNested4PartySubIDs_7.insert(Nested4PartySubIDType_7.getString());
        all_values.push_back(NstdPtys4SubGrp_NoNested4PartySubIDs_7);

        noNested4PartyIDs_1_1_1.addGroup(noNested4PartySubIDs_1_1_2_1);
      }
      noFills_0_1.addGroup(noNested4PartyIDs_1_1_1);
    }
    {
      FIX50SP2::ExecutionReport::NoFills::NoNested4PartyIDs noNested4PartyIDs_1_1_2;
      // NestedParties4.NoNested4PartyIDs
      multiset<string> NestedParties4_NoNested4PartyIDs_3;
      FIX::Nested4PartyID Nested4PartyID_3("STRING_306854536");
      noNested4PartyIDs_1_1_2.set(Nested4PartyID_3);
      NestedParties4_NoNested4PartyIDs_3.insert(Nested4PartyID_3.getString());
      FIX::Nested4PartyIDSource Nested4PartyIDSource_3('1');
      noNested4PartyIDs_1_1_2.set(Nested4PartyIDSource_3);
      NestedParties4_NoNested4PartyIDs_3.insert(Nested4PartyIDSource_3.getString());
      FIX::Nested4PartyRole Nested4PartyRole_3(1406011135);
      noNested4PartyIDs_1_1_2.set(Nested4PartyRole_3);
      NestedParties4_NoNested4PartyIDs_3.insert(Nested4PartyRole_3.getString());
      all_values.push_back(NestedParties4_NoNested4PartyIDs_3);

      // NstdPtys4SubGrp
      // Group NstdPtys4SubGrp.NoNested4PartySubIDs
      {
        FIX50SP2::ExecutionReport::NoFills::NoNested4PartyIDs::NoNested4PartySubIDs noNested4PartySubIDs_1_2_2_0;
        // NstdPtys4SubGrp.NoNested4PartySubIDs
        multiset<string> NstdPtys4SubGrp_NoNested4PartySubIDs_8;
        FIX::Nested4PartySubID Nested4PartySubID_8("STRING_1034060455");
        noNested4PartySubIDs_1_2_2_0.set(Nested4PartySubID_8);
        NstdPtys4SubGrp_NoNested4PartySubIDs_8.insert(Nested4PartySubID_8.getString());
        FIX::Nested4PartySubIDType Nested4PartySubIDType_8(567613278);
        noNested4PartySubIDs_1_2_2_0.set(Nested4PartySubIDType_8);
        NstdPtys4SubGrp_NoNested4PartySubIDs_8.insert(Nested4PartySubIDType_8.getString());
        all_values.push_back(NstdPtys4SubGrp_NoNested4PartySubIDs_8);

        noNested4PartyIDs_1_1_2.addGroup(noNested4PartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoFills::NoNested4PartyIDs::NoNested4PartySubIDs noNested4PartySubIDs_1_2_2_1;
        // NstdPtys4SubGrp.NoNested4PartySubIDs
        multiset<string> NstdPtys4SubGrp_NoNested4PartySubIDs_9;
        FIX::Nested4PartySubID Nested4PartySubID_9("STRING_1782758372");
        noNested4PartySubIDs_1_2_2_1.set(Nested4PartySubID_9);
        NstdPtys4SubGrp_NoNested4PartySubIDs_9.insert(Nested4PartySubID_9.getString());
        FIX::Nested4PartySubIDType Nested4PartySubIDType_9(397491490);
        noNested4PartySubIDs_1_2_2_1.set(Nested4PartySubIDType_9);
        NstdPtys4SubGrp_NoNested4PartySubIDs_9.insert(Nested4PartySubIDType_9.getString());
        all_values.push_back(NstdPtys4SubGrp_NoNested4PartySubIDs_9);

        noNested4PartyIDs_1_1_2.addGroup(noNested4PartySubIDs_1_2_2_1);
      }
      noFills_0_1.addGroup(noNested4PartyIDs_1_1_2);
    }
    msg.addGroup(noFills_0_1);
  }
  {
    FIX50SP2::ExecutionReport::NoFills noFills_0_2;
    // FillsGrp.NoFills
    multiset<string> FillsGrp_NoFills_2;
    FIX::FillExecID FillExecID_2("STRING_105462567");
    noFills_0_2.set(FillExecID_2);
    FillsGrp_NoFills_2.insert(FillExecID_2.getString());
    FIX::FillLiquidityInd FillLiquidityInd_2(1633243862);
    noFills_0_2.set(FillLiquidityInd_2);
    FillsGrp_NoFills_2.insert(FillLiquidityInd_2.getString());
    FIX::FillPx FillPx_2;
    FillPx_2.setString("15334081");
    noFills_0_2.set(FillPx_2);
    FillsGrp_NoFills_2.insert(FillPx_2.getString());
    FIX::FillQty FillQty_2;
    FillQty_2.setString("3823115");
    noFills_0_2.set(FillQty_2);
    FillsGrp_NoFills_2.insert(FillQty_2.getString());
    all_values.push_back(FillsGrp_NoFills_2);

    // NestedParties4
    // Group NestedParties4.NoNested4PartyIDs
    {
      FIX50SP2::ExecutionReport::NoFills::NoNested4PartyIDs noNested4PartyIDs_2_1_0;
      // NestedParties4.NoNested4PartyIDs
      multiset<string> NestedParties4_NoNested4PartyIDs_4;
      FIX::Nested4PartyID Nested4PartyID_4("STRING_441278730");
      noNested4PartyIDs_2_1_0.set(Nested4PartyID_4);
      NestedParties4_NoNested4PartyIDs_4.insert(Nested4PartyID_4.getString());
      FIX::Nested4PartyIDSource Nested4PartyIDSource_4('2');
      noNested4PartyIDs_2_1_0.set(Nested4PartyIDSource_4);
      NestedParties4_NoNested4PartyIDs_4.insert(Nested4PartyIDSource_4.getString());
      FIX::Nested4PartyRole Nested4PartyRole_4(1378991898);
      noNested4PartyIDs_2_1_0.set(Nested4PartyRole_4);
      NestedParties4_NoNested4PartyIDs_4.insert(Nested4PartyRole_4.getString());
      all_values.push_back(NestedParties4_NoNested4PartyIDs_4);

      // NstdPtys4SubGrp
      // Group NstdPtys4SubGrp.NoNested4PartySubIDs
      {
        FIX50SP2::ExecutionReport::NoFills::NoNested4PartyIDs::NoNested4PartySubIDs noNested4PartySubIDs_2_0_2_0;
        // NstdPtys4SubGrp.NoNested4PartySubIDs
        multiset<string> NstdPtys4SubGrp_NoNested4PartySubIDs_10;
        FIX::Nested4PartySubID Nested4PartySubID_10("STRING_538525468");
        noNested4PartySubIDs_2_0_2_0.set(Nested4PartySubID_10);
        NstdPtys4SubGrp_NoNested4PartySubIDs_10.insert(Nested4PartySubID_10.getString());
        FIX::Nested4PartySubIDType Nested4PartySubIDType_10(1505709669);
        noNested4PartySubIDs_2_0_2_0.set(Nested4PartySubIDType_10);
        NstdPtys4SubGrp_NoNested4PartySubIDs_10.insert(Nested4PartySubIDType_10.getString());
        all_values.push_back(NstdPtys4SubGrp_NoNested4PartySubIDs_10);

        noNested4PartyIDs_2_1_0.addGroup(noNested4PartySubIDs_2_0_2_0);
      }
      noFills_0_2.addGroup(noNested4PartyIDs_2_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoFills::NoNested4PartyIDs noNested4PartyIDs_2_1_1;
      // NestedParties4.NoNested4PartyIDs
      multiset<string> NestedParties4_NoNested4PartyIDs_5;
      FIX::Nested4PartyID Nested4PartyID_5("STRING_1332264622");
      noNested4PartyIDs_2_1_1.set(Nested4PartyID_5);
      NestedParties4_NoNested4PartyIDs_5.insert(Nested4PartyID_5.getString());
      FIX::Nested4PartyIDSource Nested4PartyIDSource_5('1');
      noNested4PartyIDs_2_1_1.set(Nested4PartyIDSource_5);
      NestedParties4_NoNested4PartyIDs_5.insert(Nested4PartyIDSource_5.getString());
      FIX::Nested4PartyRole Nested4PartyRole_5(866508670);
      noNested4PartyIDs_2_1_1.set(Nested4PartyRole_5);
      NestedParties4_NoNested4PartyIDs_5.insert(Nested4PartyRole_5.getString());
      all_values.push_back(NestedParties4_NoNested4PartyIDs_5);

      // NstdPtys4SubGrp
      // Group NstdPtys4SubGrp.NoNested4PartySubIDs
      {
        FIX50SP2::ExecutionReport::NoFills::NoNested4PartyIDs::NoNested4PartySubIDs noNested4PartySubIDs_2_1_2_0;
        // NstdPtys4SubGrp.NoNested4PartySubIDs
        multiset<string> NstdPtys4SubGrp_NoNested4PartySubIDs_11;
        FIX::Nested4PartySubID Nested4PartySubID_11("STRING_1575581278");
        noNested4PartySubIDs_2_1_2_0.set(Nested4PartySubID_11);
        NstdPtys4SubGrp_NoNested4PartySubIDs_11.insert(Nested4PartySubID_11.getString());
        FIX::Nested4PartySubIDType Nested4PartySubIDType_11(168082724);
        noNested4PartySubIDs_2_1_2_0.set(Nested4PartySubIDType_11);
        NstdPtys4SubGrp_NoNested4PartySubIDs_11.insert(Nested4PartySubIDType_11.getString());
        all_values.push_back(NstdPtys4SubGrp_NoNested4PartySubIDs_11);

        noNested4PartyIDs_2_1_1.addGroup(noNested4PartySubIDs_2_1_2_0);
      }
      noFills_0_2.addGroup(noNested4PartyIDs_2_1_1);
    }
    {
      FIX50SP2::ExecutionReport::NoFills::NoNested4PartyIDs noNested4PartyIDs_2_1_2;
      // NestedParties4.NoNested4PartyIDs
      multiset<string> NestedParties4_NoNested4PartyIDs_6;
      FIX::Nested4PartyID Nested4PartyID_6("STRING_1014981464");
      noNested4PartyIDs_2_1_2.set(Nested4PartyID_6);
      NestedParties4_NoNested4PartyIDs_6.insert(Nested4PartyID_6.getString());
      FIX::Nested4PartyIDSource Nested4PartyIDSource_6('1');
      noNested4PartyIDs_2_1_2.set(Nested4PartyIDSource_6);
      NestedParties4_NoNested4PartyIDs_6.insert(Nested4PartyIDSource_6.getString());
      FIX::Nested4PartyRole Nested4PartyRole_6(1651078377);
      noNested4PartyIDs_2_1_2.set(Nested4PartyRole_6);
      NestedParties4_NoNested4PartyIDs_6.insert(Nested4PartyRole_6.getString());
      all_values.push_back(NestedParties4_NoNested4PartyIDs_6);

      // NstdPtys4SubGrp
      // Group NstdPtys4SubGrp.NoNested4PartySubIDs
      {
        FIX50SP2::ExecutionReport::NoFills::NoNested4PartyIDs::NoNested4PartySubIDs noNested4PartySubIDs_2_2_2_0;
        // NstdPtys4SubGrp.NoNested4PartySubIDs
        multiset<string> NstdPtys4SubGrp_NoNested4PartySubIDs_12;
        FIX::Nested4PartySubID Nested4PartySubID_12("STRING_1180644084");
        noNested4PartySubIDs_2_2_2_0.set(Nested4PartySubID_12);
        NstdPtys4SubGrp_NoNested4PartySubIDs_12.insert(Nested4PartySubID_12.getString());
        FIX::Nested4PartySubIDType Nested4PartySubIDType_12(2129258336);
        noNested4PartySubIDs_2_2_2_0.set(Nested4PartySubIDType_12);
        NstdPtys4SubGrp_NoNested4PartySubIDs_12.insert(Nested4PartySubIDType_12.getString());
        all_values.push_back(NstdPtys4SubGrp_NoNested4PartySubIDs_12);

        noNested4PartyIDs_2_1_2.addGroup(noNested4PartySubIDs_2_2_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoFills::NoNested4PartyIDs::NoNested4PartySubIDs noNested4PartySubIDs_2_2_2_1;
        // NstdPtys4SubGrp.NoNested4PartySubIDs
        multiset<string> NstdPtys4SubGrp_NoNested4PartySubIDs_13;
        FIX::Nested4PartySubID Nested4PartySubID_13("STRING_332343685");
        noNested4PartySubIDs_2_2_2_1.set(Nested4PartySubID_13);
        NstdPtys4SubGrp_NoNested4PartySubIDs_13.insert(Nested4PartySubID_13.getString());
        FIX::Nested4PartySubIDType Nested4PartySubIDType_13(61089571);
        noNested4PartySubIDs_2_2_2_1.set(Nested4PartySubIDType_13);
        NstdPtys4SubGrp_NoNested4PartySubIDs_13.insert(Nested4PartySubIDType_13.getString());
        all_values.push_back(NstdPtys4SubGrp_NoNested4PartySubIDs_13);

        noNested4PartyIDs_2_1_2.addGroup(noNested4PartySubIDs_2_2_2_1);
      }
      {
        FIX50SP2::ExecutionReport::NoFills::NoNested4PartyIDs::NoNested4PartySubIDs noNested4PartySubIDs_2_2_2_2;
        // NstdPtys4SubGrp.NoNested4PartySubIDs
        multiset<string> NstdPtys4SubGrp_NoNested4PartySubIDs_14;
        FIX::Nested4PartySubID Nested4PartySubID_14("STRING_1387785823");
        noNested4PartySubIDs_2_2_2_2.set(Nested4PartySubID_14);
        NstdPtys4SubGrp_NoNested4PartySubIDs_14.insert(Nested4PartySubID_14.getString());
        FIX::Nested4PartySubIDType Nested4PartySubIDType_14(1287864923);
        noNested4PartySubIDs_2_2_2_2.set(Nested4PartySubIDType_14);
        NstdPtys4SubGrp_NoNested4PartySubIDs_14.insert(Nested4PartySubIDType_14.getString());
        all_values.push_back(NstdPtys4SubGrp_NoNested4PartySubIDs_14);

        noNested4PartyIDs_2_1_2.addGroup(noNested4PartySubIDs_2_2_2_2);
      }
      noFills_0_2.addGroup(noNested4PartyIDs_2_1_2);
    }
    msg.addGroup(noFills_0_2);
  }
  // FinancingDetails
  multiset<string> FinancingDetails_10;
  FIX::AgreementCurrency AgreementCurrency_10("EUR");
  msg.set(AgreementCurrency_10);
  FinancingDetails_10.insert(AgreementCurrency_10.getString());
  FIX::AgreementDate AgreementDate_10("LOCALMKTDATE_923139647");
  msg.set(AgreementDate_10);
  FinancingDetails_10.insert(AgreementDate_10.getString());
  FIX::AgreementDesc AgreementDesc_10("STRING_1492641517");
  msg.set(AgreementDesc_10);
  FinancingDetails_10.insert(AgreementDesc_10.getString());
  FIX::AgreementID AgreementID_10("STRING_2060861668");
  msg.set(AgreementID_10);
  FinancingDetails_10.insert(AgreementID_10.getString());
  FIX::DeliveryType DeliveryType_10(2);
  msg.set(DeliveryType_10);
  FinancingDetails_10.insert(DeliveryType_10.getString());
  FIX::EndDate EndDate_10("LOCALMKTDATE_878566062");
  msg.set(EndDate_10);
  FinancingDetails_10.insert(EndDate_10.getString());
  FIX::MarginRatio MarginRatio_10;
  MarginRatio_10.setString("95.780000");
  msg.set(MarginRatio_10);
  FinancingDetails_10.insert(MarginRatio_10.getString());
  FIX::StartDate StartDate_10("LOCALMKTDATE_1485346889");
  msg.set(StartDate_10);
  FinancingDetails_10.insert(StartDate_10.getString());
  FIX::TerminationType TerminationType_10(2);
  msg.set(TerminationType_10);
  FinancingDetails_10.insert(TerminationType_10.getString());
  all_values.push_back(FinancingDetails_10);

  // InstrmtLegExecGrp
  // Group InstrmtLegExecGrp.NoLegs
  {
    FIX50SP2::ExecutionReport::NoLegs noLegs_0_0;
    // InstrmtLegExecGrp.NoLegs
    multiset<string> InstrmtLegExecGrp_NoLegs_0;
    FIX::LegAllocID LegAllocID_0("STRING_716855139");
    noLegs_0_0.set(LegAllocID_0);
    InstrmtLegExecGrp_NoLegs_0.insert(LegAllocID_0.getString());
    FIX::LegCalculatedCcyLastQty LegCalculatedCcyLastQty_0;
    LegCalculatedCcyLastQty_0.setString("8695552");
    noLegs_0_0.set(LegCalculatedCcyLastQty_0);
    InstrmtLegExecGrp_NoLegs_0.insert(LegCalculatedCcyLastQty_0.getString());
    FIX::LegCoveredOrUncovered LegCoveredOrUncovered_0(704590374);
    noLegs_0_0.set(LegCoveredOrUncovered_0);
    InstrmtLegExecGrp_NoLegs_0.insert(LegCoveredOrUncovered_0.getString());
    FIX::LegCurrencyRatio LegCurrencyRatio_0;
    LegCurrencyRatio_0.setString("750811");
    noLegs_0_0.set(LegCurrencyRatio_0);
    InstrmtLegExecGrp_NoLegs_0.insert(LegCurrencyRatio_0.getString());
    FIX::LegDividendYield LegDividendYield_0;
    LegDividendYield_0.setString("62.620000");
    noLegs_0_0.set(LegDividendYield_0);
    InstrmtLegExecGrp_NoLegs_0.insert(LegDividendYield_0.getString());
    FIX::LegExecInst LegExecInst_0("MULTIPLECHARVALUE_1747216329");
    noLegs_0_0.set(LegExecInst_0);
    InstrmtLegExecGrp_NoLegs_0.insert(LegExecInst_0.getString());
    FIX::LegGrossTradeAmt LegGrossTradeAmt_0;
    LegGrossTradeAmt_0.setString("9415898");
    noLegs_0_0.set(LegGrossTradeAmt_0);
    InstrmtLegExecGrp_NoLegs_0.insert(LegGrossTradeAmt_0.getString());
    FIX::LegLastForwardPoints LegLastForwardPoints_0;
    LegLastForwardPoints_0.setString("815282");
    noLegs_0_0.set(LegLastForwardPoints_0);
    InstrmtLegExecGrp_NoLegs_0.insert(LegLastForwardPoints_0.getString());
    FIX::LegLastPx LegLastPx_0;
    LegLastPx_0.setString("11753139");
    noLegs_0_0.set(LegLastPx_0);
    InstrmtLegExecGrp_NoLegs_0.insert(LegLastPx_0.getString());
    FIX::LegLastQty LegLastQty_0;
    LegLastQty_0.setString("11096725");
    noLegs_0_0.set(LegLastQty_0);
    InstrmtLegExecGrp_NoLegs_0.insert(LegLastQty_0.getString());
    FIX::LegOrderQty LegOrderQty_0;
    LegOrderQty_0.setString("10965097");
    noLegs_0_0.set(LegOrderQty_0);
    InstrmtLegExecGrp_NoLegs_0.insert(LegOrderQty_0.getString());
    FIX::LegPositionEffect LegPositionEffect_0('7');
    noLegs_0_0.set(LegPositionEffect_0);
    InstrmtLegExecGrp_NoLegs_0.insert(LegPositionEffect_0.getString());
    FIX::LegQty LegQty_0;
    LegQty_0.setString("6132672");
    noLegs_0_0.set(LegQty_0);
    InstrmtLegExecGrp_NoLegs_0.insert(LegQty_0.getString());
    FIX::LegRefID LegRefID_0("STRING_1121998853");
    noLegs_0_0.set(LegRefID_0);
    InstrmtLegExecGrp_NoLegs_0.insert(LegRefID_0.getString());
    FIX::LegSettlCurrency LegSettlCurrency_0("USD");
    noLegs_0_0.set(LegSettlCurrency_0);
    InstrmtLegExecGrp_NoLegs_0.insert(LegSettlCurrency_0.getString());
    FIX::LegSettlDate LegSettlDate_0("LOCALMKTDATE_1454342538");
    noLegs_0_0.set(LegSettlDate_0);
    InstrmtLegExecGrp_NoLegs_0.insert(LegSettlDate_0.getString());
    FIX::LegSettlType LegSettlType_0('1');
    noLegs_0_0.set(LegSettlType_0);
    InstrmtLegExecGrp_NoLegs_0.insert(LegSettlType_0.getString());
    FIX::LegSwapType LegSwapType_0(5);
    noLegs_0_0.set(LegSwapType_0);
    InstrmtLegExecGrp_NoLegs_0.insert(LegSwapType_0.getString());
    FIX::LegVolatility LegVolatility_0;
    LegVolatility_0.setString("5947238");
    noLegs_0_0.set(LegVolatility_0);
    InstrmtLegExecGrp_NoLegs_0.insert(LegVolatility_0.getString());
    all_values.push_back(InstrmtLegExecGrp_NoLegs_0);

    // InstrumentLeg
    multiset<string> InstrumentLeg_46;
    FIX::EncodedLegIssuer EncodedLegIssuer_46("DATA_890991100");
    noLegs_0_0.set(EncodedLegIssuer_46);
    InstrumentLeg_46.insert(EncodedLegIssuer_46.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_46(1790743248);
    noLegs_0_0.set(EncodedLegIssuerLen_46);
    InstrumentLeg_46.insert(EncodedLegIssuerLen_46.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_46("DATA_1517863461");
    noLegs_0_0.set(EncodedLegSecurityDesc_46);
    InstrumentLeg_46.insert(EncodedLegSecurityDesc_46.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_46(236148969);
    noLegs_0_0.set(EncodedLegSecurityDescLen_46);
    InstrumentLeg_46.insert(EncodedLegSecurityDescLen_46.getString());
    FIX::LegCFICode LegCFICode_46("STRING_1704121268");
    noLegs_0_0.set(LegCFICode_46);
    InstrumentLeg_46.insert(LegCFICode_46.getString());
    FIX::LegContractMultiplier LegContractMultiplier_46;
    LegContractMultiplier_46.setString("19267633");
    noLegs_0_0.set(LegContractMultiplier_46);
    InstrumentLeg_46.insert(LegContractMultiplier_46.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_46(1114715031);
    noLegs_0_0.set(LegContractMultiplierUnit_46);
    InstrumentLeg_46.insert(LegContractMultiplierUnit_46.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_46("MONTHYEAR_1999810846");
    noLegs_0_0.set(LegContractSettlMonth_46);
    InstrumentLeg_46.insert(LegContractSettlMonth_46.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_46("COUNTRY_1264626565");
    noLegs_0_0.set(LegCountryOfIssue_46);
    InstrumentLeg_46.insert(LegCountryOfIssue_46.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_46("LOCALMKTDATE_287076176");
    noLegs_0_0.set(LegCouponPaymentDate_46);
    InstrumentLeg_46.insert(LegCouponPaymentDate_46.getString());
    FIX::LegCouponRate LegCouponRate_46;
    LegCouponRate_46.setString("21.040000");
    noLegs_0_0.set(LegCouponRate_46);
    InstrumentLeg_46.insert(LegCouponRate_46.getString());
    FIX::LegCreditRating LegCreditRating_46("STRING_1981481704");
    noLegs_0_0.set(LegCreditRating_46);
    InstrumentLeg_46.insert(LegCreditRating_46.getString());
    FIX::LegCurrency LegCurrency_46("CAN");
    noLegs_0_0.set(LegCurrency_46);
    InstrumentLeg_46.insert(LegCurrency_46.getString());
    FIX::LegDatedDate LegDatedDate_46("LOCALMKTDATE_2056562865");
    noLegs_0_0.set(LegDatedDate_46);
    InstrumentLeg_46.insert(LegDatedDate_46.getString());
    FIX::LegExerciseStyle LegExerciseStyle_46(1210967726);
    noLegs_0_0.set(LegExerciseStyle_46);
    InstrumentLeg_46.insert(LegExerciseStyle_46.getString());
    FIX::LegFactor LegFactor_46;
    LegFactor_46.setString("3227151");
    noLegs_0_0.set(LegFactor_46);
    InstrumentLeg_46.insert(LegFactor_46.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_46(850669048);
    noLegs_0_0.set(LegFlowScheduleType_46);
    InstrumentLeg_46.insert(LegFlowScheduleType_46.getString());
    FIX::LegInstrRegistry LegInstrRegistry_46("STRING_1292495967");
    noLegs_0_0.set(LegInstrRegistry_46);
    InstrumentLeg_46.insert(LegInstrRegistry_46.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_46("LOCALMKTDATE_1498029120");
    noLegs_0_0.set(LegInterestAccrualDate_46);
    InstrumentLeg_46.insert(LegInterestAccrualDate_46.getString());
    FIX::LegIssueDate LegIssueDate_46("LOCALMKTDATE_1960341603");
    noLegs_0_0.set(LegIssueDate_46);
    InstrumentLeg_46.insert(LegIssueDate_46.getString());
    FIX::LegIssuer LegIssuer_46("STRING_241522024");
    noLegs_0_0.set(LegIssuer_46);
    InstrumentLeg_46.insert(LegIssuer_46.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_46("STRING_52136537");
    noLegs_0_0.set(LegLocaleOfIssue_46);
    InstrumentLeg_46.insert(LegLocaleOfIssue_46.getString());
    FIX::LegMaturityDate LegMaturityDate_46("LOCALMKTDATE_426125239");
    noLegs_0_0.set(LegMaturityDate_46);
    InstrumentLeg_46.insert(LegMaturityDate_46.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_46("MONTHYEAR_1363520878");
    noLegs_0_0.set(LegMaturityMonthYear_46);
    InstrumentLeg_46.insert(LegMaturityMonthYear_46.getString());
    FIX::LegMaturityTime LegMaturityTime_46("TZTIMEONLY_1934371687");
    noLegs_0_0.set(LegMaturityTime_46);
    InstrumentLeg_46.insert(LegMaturityTime_46.getString());
    FIX::LegOptAttribute LegOptAttribute_46('1');
    noLegs_0_0.set(LegOptAttribute_46);
    InstrumentLeg_46.insert(LegOptAttribute_46.getString());
    FIX::LegOptionRatio LegOptionRatio_46;
    LegOptionRatio_46.setString("6703797");
    noLegs_0_0.set(LegOptionRatio_46);
    InstrumentLeg_46.insert(LegOptionRatio_46.getString());
    FIX::LegPool LegPool_46("STRING_1730212760");
    noLegs_0_0.set(LegPool_46);
    InstrumentLeg_46.insert(LegPool_46.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_46("STRING_856511358");
    noLegs_0_0.set(LegPriceUnitOfMeasure_46);
    InstrumentLeg_46.insert(LegPriceUnitOfMeasure_46.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_46;
    LegPriceUnitOfMeasureQty_46.setString("12651035");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_46);
    InstrumentLeg_46.insert(LegPriceUnitOfMeasureQty_46.getString());
    FIX::LegProduct LegProduct_46(473720212);
    noLegs_0_0.set(LegProduct_46);
    InstrumentLeg_46.insert(LegProduct_46.getString());
    FIX::LegPutOrCall LegPutOrCall_46(499770958);
    noLegs_0_0.set(LegPutOrCall_46);
    InstrumentLeg_46.insert(LegPutOrCall_46.getString());
    FIX::LegRatioQty LegRatioQty_46;
    LegRatioQty_46.setString("6354833");
    noLegs_0_0.set(LegRatioQty_46);
    InstrumentLeg_46.insert(LegRatioQty_46.getString());
    FIX::LegRedemptionDate LegRedemptionDate_46("LOCALMKTDATE_709869181");
    noLegs_0_0.set(LegRedemptionDate_46);
    InstrumentLeg_46.insert(LegRedemptionDate_46.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_46("STRING_56408578");
    noLegs_0_0.set(LegRepoCollateralSecurityType_46);
    InstrumentLeg_46.insert(LegRepoCollateralSecurityType_46.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_46;
    LegRepurchaseRate_46.setString("30.710000");
    noLegs_0_0.set(LegRepurchaseRate_46);
    InstrumentLeg_46.insert(LegRepurchaseRate_46.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_46(1824584212);
    noLegs_0_0.set(LegRepurchaseTerm_46);
    InstrumentLeg_46.insert(LegRepurchaseTerm_46.getString());
    FIX::LegSecurityDesc LegSecurityDesc_46("STRING_2056219424");
    noLegs_0_0.set(LegSecurityDesc_46);
    InstrumentLeg_46.insert(LegSecurityDesc_46.getString());
    FIX::LegSecurityExchange LegSecurityExchange_46("EXCHANGE_1679389636");
    noLegs_0_0.set(LegSecurityExchange_46);
    InstrumentLeg_46.insert(LegSecurityExchange_46.getString());
    FIX::LegSecurityID LegSecurityID_46("STRING_2111660389");
    noLegs_0_0.set(LegSecurityID_46);
    InstrumentLeg_46.insert(LegSecurityID_46.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_46("STRING_2074611529");
    noLegs_0_0.set(LegSecurityIDSource_46);
    InstrumentLeg_46.insert(LegSecurityIDSource_46.getString());
    FIX::LegSecuritySubType LegSecuritySubType_46("STRING_1513387693");
    noLegs_0_0.set(LegSecuritySubType_46);
    InstrumentLeg_46.insert(LegSecuritySubType_46.getString());
    FIX::LegSecurityType LegSecurityType_46("STRING_1120808205");
    noLegs_0_0.set(LegSecurityType_46);
    InstrumentLeg_46.insert(LegSecurityType_46.getString());
    FIX::LegSide LegSide_46('6');
    noLegs_0_0.set(LegSide_46);
    InstrumentLeg_46.insert(LegSide_46.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_46("STRING_1422466910");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_46);
    InstrumentLeg_46.insert(LegStateOrProvinceOfIssue_46.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_46("JPY");
    noLegs_0_0.set(LegStrikeCurrency_46);
    InstrumentLeg_46.insert(LegStrikeCurrency_46.getString());
    FIX::LegStrikePrice LegStrikePrice_46;
    LegStrikePrice_46.setString("1256523");
    noLegs_0_0.set(LegStrikePrice_46);
    InstrumentLeg_46.insert(LegStrikePrice_46.getString());
    FIX::LegSymbol LegSymbol_46("STRING_1476788251");
    noLegs_0_0.set(LegSymbol_46);
    InstrumentLeg_46.insert(LegSymbol_46.getString());
    FIX::LegSymbolSfx LegSymbolSfx_46("STRING_323370993");
    noLegs_0_0.set(LegSymbolSfx_46);
    InstrumentLeg_46.insert(LegSymbolSfx_46.getString());
    FIX::LegTimeUnit LegTimeUnit_46("STRING_2085993914");
    noLegs_0_0.set(LegTimeUnit_46);
    InstrumentLeg_46.insert(LegTimeUnit_46.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_46("STRING_1718310276");
    noLegs_0_0.set(LegUnitOfMeasure_46);
    InstrumentLeg_46.insert(LegUnitOfMeasure_46.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_46;
    LegUnitOfMeasureQty_46.setString("3755075");
    noLegs_0_0.set(LegUnitOfMeasureQty_46);
    InstrumentLeg_46.insert(LegUnitOfMeasureQty_46.getString());
    all_values.push_back(InstrumentLeg_46);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::ExecutionReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_99;
      FIX::LegSecurityAltID LegSecurityAltID_99("STRING_934347506");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_99);
      LegSecAltIDGrp_NoLegSecurityAltID_99.insert(LegSecurityAltID_99.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_99("STRING_162395569");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_99);
      LegSecAltIDGrp_NoLegSecurityAltID_99.insert(LegSecurityAltIDSource_99.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_99);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_100;
      FIX::LegSecurityAltID LegSecurityAltID_100("STRING_1385802717");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_100);
      LegSecAltIDGrp_NoLegSecurityAltID_100.insert(LegSecurityAltID_100.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_100("STRING_1604727274");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_100);
      LegSecAltIDGrp_NoLegSecurityAltID_100.insert(LegSecurityAltIDSource_100.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_100);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::ExecutionReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_101;
      FIX::LegSecurityAltID LegSecurityAltID_101("STRING_1892608329");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltID_101);
      LegSecAltIDGrp_NoLegSecurityAltID_101.insert(LegSecurityAltID_101.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_101("STRING_94830428");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltIDSource_101);
      LegSecAltIDGrp_NoLegSecurityAltID_101.insert(LegSecurityAltIDSource_101.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_101);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_2);
    }
    // LegPreAllocGrp
    // Group LegPreAllocGrp.NoLegAllocs
    {
      FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs noLegAllocs_0_1_0;
      // LegPreAllocGrp.NoLegAllocs
      multiset<string> LegPreAllocGrp_NoLegAllocs_0;
      FIX::LegAllocAccount LegAllocAccount_0("STRING_218844893");
      noLegAllocs_0_1_0.set(LegAllocAccount_0);
      LegPreAllocGrp_NoLegAllocs_0.insert(LegAllocAccount_0.getString());
      FIX::LegAllocAcctIDSource LegAllocAcctIDSource_0("STRING_594601386");
      noLegAllocs_0_1_0.set(LegAllocAcctIDSource_0);
      LegPreAllocGrp_NoLegAllocs_0.insert(LegAllocAcctIDSource_0.getString());
      FIX::LegAllocQty LegAllocQty_0;
      LegAllocQty_0.setString("13578306");
      noLegAllocs_0_1_0.set(LegAllocQty_0);
      LegPreAllocGrp_NoLegAllocs_0.insert(LegAllocQty_0.getString());
      FIX::LegAllocSettlCurrency LegAllocSettlCurrency_0("CAN");
      noLegAllocs_0_1_0.set(LegAllocSettlCurrency_0);
      LegPreAllocGrp_NoLegAllocs_0.insert(LegAllocSettlCurrency_0.getString());
      FIX::LegIndividualAllocID LegIndividualAllocID_0("STRING_1772593676");
      noLegAllocs_0_1_0.set(LegIndividualAllocID_0);
      LegPreAllocGrp_NoLegAllocs_0.insert(LegIndividualAllocID_0.getString());
      all_values.push_back(LegPreAllocGrp_NoLegAllocs_0);

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_0_0_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_13;
        FIX::Nested2PartyID Nested2PartyID_13("STRING_559745741");
        noNested2PartyIDs_0_0_2_0.set(Nested2PartyID_13);
        NestedParties2_NoNested2PartyIDs_13.insert(Nested2PartyID_13.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_13('1');
        noNested2PartyIDs_0_0_2_0.set(Nested2PartyIDSource_13);
        NestedParties2_NoNested2PartyIDs_13.insert(Nested2PartyIDSource_13.getString());
        FIX::Nested2PartyRole Nested2PartyRole_13(569991380);
        noNested2PartyIDs_0_0_2_0.set(Nested2PartyRole_13);
        NestedParties2_NoNested2PartyIDs_13.insert(Nested2PartyRole_13.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_13);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_30;
          FIX::Nested2PartySubID Nested2PartySubID_30("STRING_670403710");
          noNested2PartySubIDs_0_0_0_3_0.set(Nested2PartySubID_30);
          NstdPtys2SubGrp_NoNested2PartySubIDs_30.insert(Nested2PartySubID_30.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_30(1690799585);
          noNested2PartySubIDs_0_0_0_3_0.set(Nested2PartySubIDType_30);
          NstdPtys2SubGrp_NoNested2PartySubIDs_30.insert(Nested2PartySubIDType_30.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_30);

          noNested2PartyIDs_0_0_2_0.addGroup(noNested2PartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_0_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_31;
          FIX::Nested2PartySubID Nested2PartySubID_31("STRING_1136983982");
          noNested2PartySubIDs_0_0_0_3_1.set(Nested2PartySubID_31);
          NstdPtys2SubGrp_NoNested2PartySubIDs_31.insert(Nested2PartySubID_31.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_31(2092870620);
          noNested2PartySubIDs_0_0_0_3_1.set(Nested2PartySubIDType_31);
          NstdPtys2SubGrp_NoNested2PartySubIDs_31.insert(Nested2PartySubIDType_31.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_31);

          noNested2PartyIDs_0_0_2_0.addGroup(noNested2PartySubIDs_0_0_0_3_1);
        }
        noLegAllocs_0_1_0.addGroup(noNested2PartyIDs_0_0_2_0);
      }
      noLegs_0_0.addGroup(noLegAllocs_0_1_0);
    }
    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::ExecutionReport::NoLegs::NoLegStipulations noLegStipulations_0_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_0;
      FIX::LegStipulationType LegStipulationType_0("STRING_2109809503");
      noLegStipulations_0_1_0.set(LegStipulationType_0);
      LegStipulations_NoLegStipulations_0.insert(LegStipulationType_0.getString());
      FIX::LegStipulationValue LegStipulationValue_0("STRING_71039283");
      noLegStipulations_0_1_0.set(LegStipulationValue_0);
      LegStipulations_NoLegStipulations_0.insert(LegStipulationValue_0.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_0);

      noLegs_0_0.addGroup(noLegStipulations_0_1_0);
    }
    // NestedParties3
    // Group NestedParties3.NoNested3PartyIDs
    {
      FIX50SP2::ExecutionReport::NoLegs::NoNested3PartyIDs noNested3PartyIDs_0_1_0;
      // NestedParties3.NoNested3PartyIDs
      multiset<string> NestedParties3_NoNested3PartyIDs_0;
      FIX::Nested3PartyID Nested3PartyID_0("STRING_285696848");
      noNested3PartyIDs_0_1_0.set(Nested3PartyID_0);
      NestedParties3_NoNested3PartyIDs_0.insert(Nested3PartyID_0.getString());
      FIX::Nested3PartyIDSource Nested3PartyIDSource_0('9');
      noNested3PartyIDs_0_1_0.set(Nested3PartyIDSource_0);
      NestedParties3_NoNested3PartyIDs_0.insert(Nested3PartyIDSource_0.getString());
      FIX::Nested3PartyRole Nested3PartyRole_0(775223101);
      noNested3PartyIDs_0_1_0.set(Nested3PartyRole_0);
      NestedParties3_NoNested3PartyIDs_0.insert(Nested3PartyRole_0.getString());
      all_values.push_back(NestedParties3_NoNested3PartyIDs_0);

      // NstdPtys3SubGrp
      // Group NstdPtys3SubGrp.NoNested3PartySubIDs
      {
        FIX50SP2::ExecutionReport::NoLegs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_0_0_2_0;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_0;
        FIX::Nested3PartySubID Nested3PartySubID_0("STRING_374185056");
        noNested3PartySubIDs_0_0_2_0.set(Nested3PartySubID_0);
        NstdPtys3SubGrp_NoNested3PartySubIDs_0.insert(Nested3PartySubID_0.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_0(1709570607);
        noNested3PartySubIDs_0_0_2_0.set(Nested3PartySubIDType_0);
        NstdPtys3SubGrp_NoNested3PartySubIDs_0.insert(Nested3PartySubIDType_0.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_0);

        noNested3PartyIDs_0_1_0.addGroup(noNested3PartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoLegs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_0_0_2_1;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_1;
        FIX::Nested3PartySubID Nested3PartySubID_1("STRING_823599948");
        noNested3PartySubIDs_0_0_2_1.set(Nested3PartySubID_1);
        NstdPtys3SubGrp_NoNested3PartySubIDs_1.insert(Nested3PartySubID_1.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_1(1759987773);
        noNested3PartySubIDs_0_0_2_1.set(Nested3PartySubIDType_1);
        NstdPtys3SubGrp_NoNested3PartySubIDs_1.insert(Nested3PartySubIDType_1.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_1);

        noNested3PartyIDs_0_1_0.addGroup(noNested3PartySubIDs_0_0_2_1);
      }
      noLegs_0_0.addGroup(noNested3PartyIDs_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::ExecutionReport::NoLegs noLegs_0_1;
    // InstrmtLegExecGrp.NoLegs
    multiset<string> InstrmtLegExecGrp_NoLegs_1;
    FIX::LegAllocID LegAllocID_1("STRING_1166814233");
    noLegs_0_1.set(LegAllocID_1);
    InstrmtLegExecGrp_NoLegs_1.insert(LegAllocID_1.getString());
    FIX::LegCalculatedCcyLastQty LegCalculatedCcyLastQty_1;
    LegCalculatedCcyLastQty_1.setString("5687246");
    noLegs_0_1.set(LegCalculatedCcyLastQty_1);
    InstrmtLegExecGrp_NoLegs_1.insert(LegCalculatedCcyLastQty_1.getString());
    FIX::LegCoveredOrUncovered LegCoveredOrUncovered_1(1854818201);
    noLegs_0_1.set(LegCoveredOrUncovered_1);
    InstrmtLegExecGrp_NoLegs_1.insert(LegCoveredOrUncovered_1.getString());
    FIX::LegCurrencyRatio LegCurrencyRatio_1;
    LegCurrencyRatio_1.setString("18891614");
    noLegs_0_1.set(LegCurrencyRatio_1);
    InstrmtLegExecGrp_NoLegs_1.insert(LegCurrencyRatio_1.getString());
    FIX::LegDividendYield LegDividendYield_1;
    LegDividendYield_1.setString("95.230000");
    noLegs_0_1.set(LegDividendYield_1);
    InstrmtLegExecGrp_NoLegs_1.insert(LegDividendYield_1.getString());
    FIX::LegExecInst LegExecInst_1("MULTIPLECHARVALUE_301935940");
    noLegs_0_1.set(LegExecInst_1);
    InstrmtLegExecGrp_NoLegs_1.insert(LegExecInst_1.getString());
    FIX::LegGrossTradeAmt LegGrossTradeAmt_1;
    LegGrossTradeAmt_1.setString("10995083");
    noLegs_0_1.set(LegGrossTradeAmt_1);
    InstrmtLegExecGrp_NoLegs_1.insert(LegGrossTradeAmt_1.getString());
    FIX::LegLastForwardPoints LegLastForwardPoints_1;
    LegLastForwardPoints_1.setString("17162835");
    noLegs_0_1.set(LegLastForwardPoints_1);
    InstrmtLegExecGrp_NoLegs_1.insert(LegLastForwardPoints_1.getString());
    FIX::LegLastPx LegLastPx_1;
    LegLastPx_1.setString("9529459");
    noLegs_0_1.set(LegLastPx_1);
    InstrmtLegExecGrp_NoLegs_1.insert(LegLastPx_1.getString());
    FIX::LegLastQty LegLastQty_1;
    LegLastQty_1.setString("7246184");
    noLegs_0_1.set(LegLastQty_1);
    InstrmtLegExecGrp_NoLegs_1.insert(LegLastQty_1.getString());
    FIX::LegOrderQty LegOrderQty_1;
    LegOrderQty_1.setString("1746145");
    noLegs_0_1.set(LegOrderQty_1);
    InstrmtLegExecGrp_NoLegs_1.insert(LegOrderQty_1.getString());
    FIX::LegPositionEffect LegPositionEffect_1('1');
    noLegs_0_1.set(LegPositionEffect_1);
    InstrmtLegExecGrp_NoLegs_1.insert(LegPositionEffect_1.getString());
    FIX::LegQty LegQty_1;
    LegQty_1.setString("20291180");
    noLegs_0_1.set(LegQty_1);
    InstrmtLegExecGrp_NoLegs_1.insert(LegQty_1.getString());
    FIX::LegRefID LegRefID_1("STRING_744605968");
    noLegs_0_1.set(LegRefID_1);
    InstrmtLegExecGrp_NoLegs_1.insert(LegRefID_1.getString());
    FIX::LegSettlCurrency LegSettlCurrency_1("EUR");
    noLegs_0_1.set(LegSettlCurrency_1);
    InstrmtLegExecGrp_NoLegs_1.insert(LegSettlCurrency_1.getString());
    FIX::LegSettlDate LegSettlDate_1("LOCALMKTDATE_287921906");
    noLegs_0_1.set(LegSettlDate_1);
    InstrmtLegExecGrp_NoLegs_1.insert(LegSettlDate_1.getString());
    FIX::LegSettlType LegSettlType_1('9');
    noLegs_0_1.set(LegSettlType_1);
    InstrmtLegExecGrp_NoLegs_1.insert(LegSettlType_1.getString());
    FIX::LegSwapType LegSwapType_1(5);
    noLegs_0_1.set(LegSwapType_1);
    InstrmtLegExecGrp_NoLegs_1.insert(LegSwapType_1.getString());
    FIX::LegVolatility LegVolatility_1;
    LegVolatility_1.setString("155301");
    noLegs_0_1.set(LegVolatility_1);
    InstrmtLegExecGrp_NoLegs_1.insert(LegVolatility_1.getString());
    all_values.push_back(InstrmtLegExecGrp_NoLegs_1);

    // InstrumentLeg
    multiset<string> InstrumentLeg_47;
    FIX::EncodedLegIssuer EncodedLegIssuer_47("DATA_951391458");
    noLegs_0_1.set(EncodedLegIssuer_47);
    InstrumentLeg_47.insert(EncodedLegIssuer_47.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_47(568464411);
    noLegs_0_1.set(EncodedLegIssuerLen_47);
    InstrumentLeg_47.insert(EncodedLegIssuerLen_47.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_47("DATA_1219926600");
    noLegs_0_1.set(EncodedLegSecurityDesc_47);
    InstrumentLeg_47.insert(EncodedLegSecurityDesc_47.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_47(1237088306);
    noLegs_0_1.set(EncodedLegSecurityDescLen_47);
    InstrumentLeg_47.insert(EncodedLegSecurityDescLen_47.getString());
    FIX::LegCFICode LegCFICode_47("STRING_578013961");
    noLegs_0_1.set(LegCFICode_47);
    InstrumentLeg_47.insert(LegCFICode_47.getString());
    FIX::LegContractMultiplier LegContractMultiplier_47;
    LegContractMultiplier_47.setString("19951497");
    noLegs_0_1.set(LegContractMultiplier_47);
    InstrumentLeg_47.insert(LegContractMultiplier_47.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_47(1898292685);
    noLegs_0_1.set(LegContractMultiplierUnit_47);
    InstrumentLeg_47.insert(LegContractMultiplierUnit_47.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_47("MONTHYEAR_952199017");
    noLegs_0_1.set(LegContractSettlMonth_47);
    InstrumentLeg_47.insert(LegContractSettlMonth_47.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_47("COUNTRY_1557236660");
    noLegs_0_1.set(LegCountryOfIssue_47);
    InstrumentLeg_47.insert(LegCountryOfIssue_47.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_47("LOCALMKTDATE_574408985");
    noLegs_0_1.set(LegCouponPaymentDate_47);
    InstrumentLeg_47.insert(LegCouponPaymentDate_47.getString());
    FIX::LegCouponRate LegCouponRate_47;
    LegCouponRate_47.setString("31.420000");
    noLegs_0_1.set(LegCouponRate_47);
    InstrumentLeg_47.insert(LegCouponRate_47.getString());
    FIX::LegCreditRating LegCreditRating_47("STRING_576567246");
    noLegs_0_1.set(LegCreditRating_47);
    InstrumentLeg_47.insert(LegCreditRating_47.getString());
    FIX::LegCurrency LegCurrency_47("USD");
    noLegs_0_1.set(LegCurrency_47);
    InstrumentLeg_47.insert(LegCurrency_47.getString());
    FIX::LegDatedDate LegDatedDate_47("LOCALMKTDATE_318245040");
    noLegs_0_1.set(LegDatedDate_47);
    InstrumentLeg_47.insert(LegDatedDate_47.getString());
    FIX::LegExerciseStyle LegExerciseStyle_47(1930703137);
    noLegs_0_1.set(LegExerciseStyle_47);
    InstrumentLeg_47.insert(LegExerciseStyle_47.getString());
    FIX::LegFactor LegFactor_47;
    LegFactor_47.setString("5739736");
    noLegs_0_1.set(LegFactor_47);
    InstrumentLeg_47.insert(LegFactor_47.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_47(1417753440);
    noLegs_0_1.set(LegFlowScheduleType_47);
    InstrumentLeg_47.insert(LegFlowScheduleType_47.getString());
    FIX::LegInstrRegistry LegInstrRegistry_47("STRING_1499503087");
    noLegs_0_1.set(LegInstrRegistry_47);
    InstrumentLeg_47.insert(LegInstrRegistry_47.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_47("LOCALMKTDATE_1526919541");
    noLegs_0_1.set(LegInterestAccrualDate_47);
    InstrumentLeg_47.insert(LegInterestAccrualDate_47.getString());
    FIX::LegIssueDate LegIssueDate_47("LOCALMKTDATE_2142371868");
    noLegs_0_1.set(LegIssueDate_47);
    InstrumentLeg_47.insert(LegIssueDate_47.getString());
    FIX::LegIssuer LegIssuer_47("STRING_1674117675");
    noLegs_0_1.set(LegIssuer_47);
    InstrumentLeg_47.insert(LegIssuer_47.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_47("STRING_892127539");
    noLegs_0_1.set(LegLocaleOfIssue_47);
    InstrumentLeg_47.insert(LegLocaleOfIssue_47.getString());
    FIX::LegMaturityDate LegMaturityDate_47("LOCALMKTDATE_2024006313");
    noLegs_0_1.set(LegMaturityDate_47);
    InstrumentLeg_47.insert(LegMaturityDate_47.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_47("MONTHYEAR_271239996");
    noLegs_0_1.set(LegMaturityMonthYear_47);
    InstrumentLeg_47.insert(LegMaturityMonthYear_47.getString());
    FIX::LegMaturityTime LegMaturityTime_47("TZTIMEONLY_744209160");
    noLegs_0_1.set(LegMaturityTime_47);
    InstrumentLeg_47.insert(LegMaturityTime_47.getString());
    FIX::LegOptAttribute LegOptAttribute_47('4');
    noLegs_0_1.set(LegOptAttribute_47);
    InstrumentLeg_47.insert(LegOptAttribute_47.getString());
    FIX::LegOptionRatio LegOptionRatio_47;
    LegOptionRatio_47.setString("5591619");
    noLegs_0_1.set(LegOptionRatio_47);
    InstrumentLeg_47.insert(LegOptionRatio_47.getString());
    FIX::LegPool LegPool_47("STRING_1733274764");
    noLegs_0_1.set(LegPool_47);
    InstrumentLeg_47.insert(LegPool_47.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_47("STRING_925985947");
    noLegs_0_1.set(LegPriceUnitOfMeasure_47);
    InstrumentLeg_47.insert(LegPriceUnitOfMeasure_47.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_47;
    LegPriceUnitOfMeasureQty_47.setString("5746920");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_47);
    InstrumentLeg_47.insert(LegPriceUnitOfMeasureQty_47.getString());
    FIX::LegProduct LegProduct_47(537182574);
    noLegs_0_1.set(LegProduct_47);
    InstrumentLeg_47.insert(LegProduct_47.getString());
    FIX::LegPutOrCall LegPutOrCall_47(1494450358);
    noLegs_0_1.set(LegPutOrCall_47);
    InstrumentLeg_47.insert(LegPutOrCall_47.getString());
    FIX::LegRatioQty LegRatioQty_47;
    LegRatioQty_47.setString("17946186");
    noLegs_0_1.set(LegRatioQty_47);
    InstrumentLeg_47.insert(LegRatioQty_47.getString());
    FIX::LegRedemptionDate LegRedemptionDate_47("LOCALMKTDATE_1774270881");
    noLegs_0_1.set(LegRedemptionDate_47);
    InstrumentLeg_47.insert(LegRedemptionDate_47.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_47("STRING_2072464319");
    noLegs_0_1.set(LegRepoCollateralSecurityType_47);
    InstrumentLeg_47.insert(LegRepoCollateralSecurityType_47.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_47;
    LegRepurchaseRate_47.setString("46.830000");
    noLegs_0_1.set(LegRepurchaseRate_47);
    InstrumentLeg_47.insert(LegRepurchaseRate_47.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_47(1525079918);
    noLegs_0_1.set(LegRepurchaseTerm_47);
    InstrumentLeg_47.insert(LegRepurchaseTerm_47.getString());
    FIX::LegSecurityDesc LegSecurityDesc_47("STRING_877179688");
    noLegs_0_1.set(LegSecurityDesc_47);
    InstrumentLeg_47.insert(LegSecurityDesc_47.getString());
    FIX::LegSecurityExchange LegSecurityExchange_47("EXCHANGE_1052037696");
    noLegs_0_1.set(LegSecurityExchange_47);
    InstrumentLeg_47.insert(LegSecurityExchange_47.getString());
    FIX::LegSecurityID LegSecurityID_47("STRING_2099488903");
    noLegs_0_1.set(LegSecurityID_47);
    InstrumentLeg_47.insert(LegSecurityID_47.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_47("STRING_1441882831");
    noLegs_0_1.set(LegSecurityIDSource_47);
    InstrumentLeg_47.insert(LegSecurityIDSource_47.getString());
    FIX::LegSecuritySubType LegSecuritySubType_47("STRING_1628604942");
    noLegs_0_1.set(LegSecuritySubType_47);
    InstrumentLeg_47.insert(LegSecuritySubType_47.getString());
    FIX::LegSecurityType LegSecurityType_47("STRING_1095138869");
    noLegs_0_1.set(LegSecurityType_47);
    InstrumentLeg_47.insert(LegSecurityType_47.getString());
    FIX::LegSide LegSide_47('1');
    noLegs_0_1.set(LegSide_47);
    InstrumentLeg_47.insert(LegSide_47.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_47("STRING_1946849982");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_47);
    InstrumentLeg_47.insert(LegStateOrProvinceOfIssue_47.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_47("CHF");
    noLegs_0_1.set(LegStrikeCurrency_47);
    InstrumentLeg_47.insert(LegStrikeCurrency_47.getString());
    FIX::LegStrikePrice LegStrikePrice_47;
    LegStrikePrice_47.setString("12171197");
    noLegs_0_1.set(LegStrikePrice_47);
    InstrumentLeg_47.insert(LegStrikePrice_47.getString());
    FIX::LegSymbol LegSymbol_47("STRING_230377798");
    noLegs_0_1.set(LegSymbol_47);
    InstrumentLeg_47.insert(LegSymbol_47.getString());
    FIX::LegSymbolSfx LegSymbolSfx_47("STRING_1667330056");
    noLegs_0_1.set(LegSymbolSfx_47);
    InstrumentLeg_47.insert(LegSymbolSfx_47.getString());
    FIX::LegTimeUnit LegTimeUnit_47("STRING_1212007994");
    noLegs_0_1.set(LegTimeUnit_47);
    InstrumentLeg_47.insert(LegTimeUnit_47.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_47("STRING_1904495473");
    noLegs_0_1.set(LegUnitOfMeasure_47);
    InstrumentLeg_47.insert(LegUnitOfMeasure_47.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_47;
    LegUnitOfMeasureQty_47.setString("4119739");
    noLegs_0_1.set(LegUnitOfMeasureQty_47);
    InstrumentLeg_47.insert(LegUnitOfMeasureQty_47.getString());
    all_values.push_back(InstrumentLeg_47);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::ExecutionReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_102;
      FIX::LegSecurityAltID LegSecurityAltID_102("STRING_28251821");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_102);
      LegSecAltIDGrp_NoLegSecurityAltID_102.insert(LegSecurityAltID_102.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_102("STRING_1156183108");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_102);
      LegSecAltIDGrp_NoLegSecurityAltID_102.insert(LegSecurityAltIDSource_102.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_102);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    // LegPreAllocGrp
    // Group LegPreAllocGrp.NoLegAllocs
    {
      FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs noLegAllocs_1_1_0;
      // LegPreAllocGrp.NoLegAllocs
      multiset<string> LegPreAllocGrp_NoLegAllocs_1;
      FIX::LegAllocAccount LegAllocAccount_1("STRING_587413723");
      noLegAllocs_1_1_0.set(LegAllocAccount_1);
      LegPreAllocGrp_NoLegAllocs_1.insert(LegAllocAccount_1.getString());
      FIX::LegAllocAcctIDSource LegAllocAcctIDSource_1("STRING_741974224");
      noLegAllocs_1_1_0.set(LegAllocAcctIDSource_1);
      LegPreAllocGrp_NoLegAllocs_1.insert(LegAllocAcctIDSource_1.getString());
      FIX::LegAllocQty LegAllocQty_1;
      LegAllocQty_1.setString("2955937");
      noLegAllocs_1_1_0.set(LegAllocQty_1);
      LegPreAllocGrp_NoLegAllocs_1.insert(LegAllocQty_1.getString());
      FIX::LegAllocSettlCurrency LegAllocSettlCurrency_1("JPY");
      noLegAllocs_1_1_0.set(LegAllocSettlCurrency_1);
      LegPreAllocGrp_NoLegAllocs_1.insert(LegAllocSettlCurrency_1.getString());
      FIX::LegIndividualAllocID LegIndividualAllocID_1("STRING_1790044137");
      noLegAllocs_1_1_0.set(LegIndividualAllocID_1);
      LegPreAllocGrp_NoLegAllocs_1.insert(LegIndividualAllocID_1.getString());
      all_values.push_back(LegPreAllocGrp_NoLegAllocs_1);

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_1_0_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_14;
        FIX::Nested2PartyID Nested2PartyID_14("STRING_905944031");
        noNested2PartyIDs_1_0_2_0.set(Nested2PartyID_14);
        NestedParties2_NoNested2PartyIDs_14.insert(Nested2PartyID_14.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_14('1');
        noNested2PartyIDs_1_0_2_0.set(Nested2PartyIDSource_14);
        NestedParties2_NoNested2PartyIDs_14.insert(Nested2PartyIDSource_14.getString());
        FIX::Nested2PartyRole Nested2PartyRole_14(304041770);
        noNested2PartyIDs_1_0_2_0.set(Nested2PartyRole_14);
        NestedParties2_NoNested2PartyIDs_14.insert(Nested2PartyRole_14.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_14);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_32;
          FIX::Nested2PartySubID Nested2PartySubID_32("STRING_444720849");
          noNested2PartySubIDs_1_0_0_3_0.set(Nested2PartySubID_32);
          NstdPtys2SubGrp_NoNested2PartySubIDs_32.insert(Nested2PartySubID_32.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_32(1356079466);
          noNested2PartySubIDs_1_0_0_3_0.set(Nested2PartySubIDType_32);
          NstdPtys2SubGrp_NoNested2PartySubIDs_32.insert(Nested2PartySubIDType_32.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_32);

          noNested2PartyIDs_1_0_2_0.addGroup(noNested2PartySubIDs_1_0_0_3_0);
        }
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_0_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_33;
          FIX::Nested2PartySubID Nested2PartySubID_33("STRING_235545556");
          noNested2PartySubIDs_1_0_0_3_1.set(Nested2PartySubID_33);
          NstdPtys2SubGrp_NoNested2PartySubIDs_33.insert(Nested2PartySubID_33.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_33(1886603680);
          noNested2PartySubIDs_1_0_0_3_1.set(Nested2PartySubIDType_33);
          NstdPtys2SubGrp_NoNested2PartySubIDs_33.insert(Nested2PartySubIDType_33.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_33);

          noNested2PartyIDs_1_0_2_0.addGroup(noNested2PartySubIDs_1_0_0_3_1);
        }
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_0_3_2;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_34;
          FIX::Nested2PartySubID Nested2PartySubID_34("STRING_837200760");
          noNested2PartySubIDs_1_0_0_3_2.set(Nested2PartySubID_34);
          NstdPtys2SubGrp_NoNested2PartySubIDs_34.insert(Nested2PartySubID_34.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_34(1330684426);
          noNested2PartySubIDs_1_0_0_3_2.set(Nested2PartySubIDType_34);
          NstdPtys2SubGrp_NoNested2PartySubIDs_34.insert(Nested2PartySubIDType_34.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_34);

          noNested2PartyIDs_1_0_2_0.addGroup(noNested2PartySubIDs_1_0_0_3_2);
        }
        noLegAllocs_1_1_0.addGroup(noNested2PartyIDs_1_0_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_1_0_2_1;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_15;
        FIX::Nested2PartyID Nested2PartyID_15("STRING_1453040559");
        noNested2PartyIDs_1_0_2_1.set(Nested2PartyID_15);
        NestedParties2_NoNested2PartyIDs_15.insert(Nested2PartyID_15.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_15('6');
        noNested2PartyIDs_1_0_2_1.set(Nested2PartyIDSource_15);
        NestedParties2_NoNested2PartyIDs_15.insert(Nested2PartyIDSource_15.getString());
        FIX::Nested2PartyRole Nested2PartyRole_15(61559137);
        noNested2PartyIDs_1_0_2_1.set(Nested2PartyRole_15);
        NestedParties2_NoNested2PartyIDs_15.insert(Nested2PartyRole_15.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_15);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_1_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_35;
          FIX::Nested2PartySubID Nested2PartySubID_35("STRING_1853686869");
          noNested2PartySubIDs_1_0_1_3_0.set(Nested2PartySubID_35);
          NstdPtys2SubGrp_NoNested2PartySubIDs_35.insert(Nested2PartySubID_35.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_35(291936935);
          noNested2PartySubIDs_1_0_1_3_0.set(Nested2PartySubIDType_35);
          NstdPtys2SubGrp_NoNested2PartySubIDs_35.insert(Nested2PartySubIDType_35.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_35);

          noNested2PartyIDs_1_0_2_1.addGroup(noNested2PartySubIDs_1_0_1_3_0);
        }
        noLegAllocs_1_1_0.addGroup(noNested2PartyIDs_1_0_2_1);
      }
      {
        FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_1_0_2_2;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_16;
        FIX::Nested2PartyID Nested2PartyID_16("STRING_1113297482");
        noNested2PartyIDs_1_0_2_2.set(Nested2PartyID_16);
        NestedParties2_NoNested2PartyIDs_16.insert(Nested2PartyID_16.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_16('9');
        noNested2PartyIDs_1_0_2_2.set(Nested2PartyIDSource_16);
        NestedParties2_NoNested2PartyIDs_16.insert(Nested2PartyIDSource_16.getString());
        FIX::Nested2PartyRole Nested2PartyRole_16(48948760);
        noNested2PartyIDs_1_0_2_2.set(Nested2PartyRole_16);
        NestedParties2_NoNested2PartyIDs_16.insert(Nested2PartyRole_16.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_16);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_2_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_36;
          FIX::Nested2PartySubID Nested2PartySubID_36("STRING_2006741875");
          noNested2PartySubIDs_1_0_2_3_0.set(Nested2PartySubID_36);
          NstdPtys2SubGrp_NoNested2PartySubIDs_36.insert(Nested2PartySubID_36.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_36(77200582);
          noNested2PartySubIDs_1_0_2_3_0.set(Nested2PartySubIDType_36);
          NstdPtys2SubGrp_NoNested2PartySubIDs_36.insert(Nested2PartySubIDType_36.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_36);

          noNested2PartyIDs_1_0_2_2.addGroup(noNested2PartySubIDs_1_0_2_3_0);
        }
        noLegAllocs_1_1_0.addGroup(noNested2PartyIDs_1_0_2_2);
      }
      noLegs_0_1.addGroup(noLegAllocs_1_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs noLegAllocs_1_1_1;
      // LegPreAllocGrp.NoLegAllocs
      multiset<string> LegPreAllocGrp_NoLegAllocs_2;
      FIX::LegAllocAccount LegAllocAccount_2("STRING_533970890");
      noLegAllocs_1_1_1.set(LegAllocAccount_2);
      LegPreAllocGrp_NoLegAllocs_2.insert(LegAllocAccount_2.getString());
      FIX::LegAllocAcctIDSource LegAllocAcctIDSource_2("STRING_1376349707");
      noLegAllocs_1_1_1.set(LegAllocAcctIDSource_2);
      LegPreAllocGrp_NoLegAllocs_2.insert(LegAllocAcctIDSource_2.getString());
      FIX::LegAllocQty LegAllocQty_2;
      LegAllocQty_2.setString("6646143");
      noLegAllocs_1_1_1.set(LegAllocQty_2);
      LegPreAllocGrp_NoLegAllocs_2.insert(LegAllocQty_2.getString());
      FIX::LegAllocSettlCurrency LegAllocSettlCurrency_2("JPY");
      noLegAllocs_1_1_1.set(LegAllocSettlCurrency_2);
      LegPreAllocGrp_NoLegAllocs_2.insert(LegAllocSettlCurrency_2.getString());
      FIX::LegIndividualAllocID LegIndividualAllocID_2("STRING_1826720058");
      noLegAllocs_1_1_1.set(LegIndividualAllocID_2);
      LegPreAllocGrp_NoLegAllocs_2.insert(LegIndividualAllocID_2.getString());
      all_values.push_back(LegPreAllocGrp_NoLegAllocs_2);

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_1_1_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_17;
        FIX::Nested2PartyID Nested2PartyID_17("STRING_1314503975");
        noNested2PartyIDs_1_1_2_0.set(Nested2PartyID_17);
        NestedParties2_NoNested2PartyIDs_17.insert(Nested2PartyID_17.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_17('4');
        noNested2PartyIDs_1_1_2_0.set(Nested2PartyIDSource_17);
        NestedParties2_NoNested2PartyIDs_17.insert(Nested2PartyIDSource_17.getString());
        FIX::Nested2PartyRole Nested2PartyRole_17(1313562296);
        noNested2PartyIDs_1_1_2_0.set(Nested2PartyRole_17);
        NestedParties2_NoNested2PartyIDs_17.insert(Nested2PartyRole_17.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_17);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_1_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_37;
          FIX::Nested2PartySubID Nested2PartySubID_37("STRING_792518916");
          noNested2PartySubIDs_1_1_0_3_0.set(Nested2PartySubID_37);
          NstdPtys2SubGrp_NoNested2PartySubIDs_37.insert(Nested2PartySubID_37.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_37(1597102597);
          noNested2PartySubIDs_1_1_0_3_0.set(Nested2PartySubIDType_37);
          NstdPtys2SubGrp_NoNested2PartySubIDs_37.insert(Nested2PartySubIDType_37.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_37);

          noNested2PartyIDs_1_1_2_0.addGroup(noNested2PartySubIDs_1_1_0_3_0);
        }
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_1_0_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_38;
          FIX::Nested2PartySubID Nested2PartySubID_38("STRING_1326765986");
          noNested2PartySubIDs_1_1_0_3_1.set(Nested2PartySubID_38);
          NstdPtys2SubGrp_NoNested2PartySubIDs_38.insert(Nested2PartySubID_38.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_38(1114734);
          noNested2PartySubIDs_1_1_0_3_1.set(Nested2PartySubIDType_38);
          NstdPtys2SubGrp_NoNested2PartySubIDs_38.insert(Nested2PartySubIDType_38.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_38);

          noNested2PartyIDs_1_1_2_0.addGroup(noNested2PartySubIDs_1_1_0_3_1);
        }
        noLegAllocs_1_1_1.addGroup(noNested2PartyIDs_1_1_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_1_1_2_1;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_18;
        FIX::Nested2PartyID Nested2PartyID_18("STRING_1832648154");
        noNested2PartyIDs_1_1_2_1.set(Nested2PartyID_18);
        NestedParties2_NoNested2PartyIDs_18.insert(Nested2PartyID_18.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_18('1');
        noNested2PartyIDs_1_1_2_1.set(Nested2PartyIDSource_18);
        NestedParties2_NoNested2PartyIDs_18.insert(Nested2PartyIDSource_18.getString());
        FIX::Nested2PartyRole Nested2PartyRole_18(838315495);
        noNested2PartyIDs_1_1_2_1.set(Nested2PartyRole_18);
        NestedParties2_NoNested2PartyIDs_18.insert(Nested2PartyRole_18.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_18);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_1_1_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_39;
          FIX::Nested2PartySubID Nested2PartySubID_39("STRING_371442930");
          noNested2PartySubIDs_1_1_1_3_0.set(Nested2PartySubID_39);
          NstdPtys2SubGrp_NoNested2PartySubIDs_39.insert(Nested2PartySubID_39.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_39(1474882590);
          noNested2PartySubIDs_1_1_1_3_0.set(Nested2PartySubIDType_39);
          NstdPtys2SubGrp_NoNested2PartySubIDs_39.insert(Nested2PartySubIDType_39.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_39);

          noNested2PartyIDs_1_1_2_1.addGroup(noNested2PartySubIDs_1_1_1_3_0);
        }
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_1_1_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_40;
          FIX::Nested2PartySubID Nested2PartySubID_40("STRING_1077408069");
          noNested2PartySubIDs_1_1_1_3_1.set(Nested2PartySubID_40);
          NstdPtys2SubGrp_NoNested2PartySubIDs_40.insert(Nested2PartySubID_40.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_40(1964894004);
          noNested2PartySubIDs_1_1_1_3_1.set(Nested2PartySubIDType_40);
          NstdPtys2SubGrp_NoNested2PartySubIDs_40.insert(Nested2PartySubIDType_40.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_40);

          noNested2PartyIDs_1_1_2_1.addGroup(noNested2PartySubIDs_1_1_1_3_1);
        }
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_1_1_3_2;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_41;
          FIX::Nested2PartySubID Nested2PartySubID_41("STRING_1181085811");
          noNested2PartySubIDs_1_1_1_3_2.set(Nested2PartySubID_41);
          NstdPtys2SubGrp_NoNested2PartySubIDs_41.insert(Nested2PartySubID_41.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_41(1369345004);
          noNested2PartySubIDs_1_1_1_3_2.set(Nested2PartySubIDType_41);
          NstdPtys2SubGrp_NoNested2PartySubIDs_41.insert(Nested2PartySubIDType_41.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_41);

          noNested2PartyIDs_1_1_2_1.addGroup(noNested2PartySubIDs_1_1_1_3_2);
        }
        noLegAllocs_1_1_1.addGroup(noNested2PartyIDs_1_1_2_1);
      }
      {
        FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_1_1_2_2;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_19;
        FIX::Nested2PartyID Nested2PartyID_19("STRING_930707839");
        noNested2PartyIDs_1_1_2_2.set(Nested2PartyID_19);
        NestedParties2_NoNested2PartyIDs_19.insert(Nested2PartyID_19.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_19('2');
        noNested2PartyIDs_1_1_2_2.set(Nested2PartyIDSource_19);
        NestedParties2_NoNested2PartyIDs_19.insert(Nested2PartyIDSource_19.getString());
        FIX::Nested2PartyRole Nested2PartyRole_19(1418293764);
        noNested2PartyIDs_1_1_2_2.set(Nested2PartyRole_19);
        NestedParties2_NoNested2PartyIDs_19.insert(Nested2PartyRole_19.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_19);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_1_2_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_42;
          FIX::Nested2PartySubID Nested2PartySubID_42("STRING_1958555255");
          noNested2PartySubIDs_1_1_2_3_0.set(Nested2PartySubID_42);
          NstdPtys2SubGrp_NoNested2PartySubIDs_42.insert(Nested2PartySubID_42.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_42(1495494346);
          noNested2PartySubIDs_1_1_2_3_0.set(Nested2PartySubIDType_42);
          NstdPtys2SubGrp_NoNested2PartySubIDs_42.insert(Nested2PartySubIDType_42.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_42);

          noNested2PartyIDs_1_1_2_2.addGroup(noNested2PartySubIDs_1_1_2_3_0);
        }
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_1_2_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_43;
          FIX::Nested2PartySubID Nested2PartySubID_43("STRING_842466511");
          noNested2PartySubIDs_1_1_2_3_1.set(Nested2PartySubID_43);
          NstdPtys2SubGrp_NoNested2PartySubIDs_43.insert(Nested2PartySubID_43.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_43(1187421314);
          noNested2PartySubIDs_1_1_2_3_1.set(Nested2PartySubIDType_43);
          NstdPtys2SubGrp_NoNested2PartySubIDs_43.insert(Nested2PartySubIDType_43.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_43);

          noNested2PartyIDs_1_1_2_2.addGroup(noNested2PartySubIDs_1_1_2_3_1);
        }
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_1_2_3_2;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_44;
          FIX::Nested2PartySubID Nested2PartySubID_44("STRING_12625004");
          noNested2PartySubIDs_1_1_2_3_2.set(Nested2PartySubID_44);
          NstdPtys2SubGrp_NoNested2PartySubIDs_44.insert(Nested2PartySubID_44.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_44(2118411625);
          noNested2PartySubIDs_1_1_2_3_2.set(Nested2PartySubIDType_44);
          NstdPtys2SubGrp_NoNested2PartySubIDs_44.insert(Nested2PartySubIDType_44.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_44);

          noNested2PartyIDs_1_1_2_2.addGroup(noNested2PartySubIDs_1_1_2_3_2);
        }
        noLegAllocs_1_1_1.addGroup(noNested2PartyIDs_1_1_2_2);
      }
      noLegs_0_1.addGroup(noLegAllocs_1_1_1);
    }
    {
      FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs noLegAllocs_1_1_2;
      // LegPreAllocGrp.NoLegAllocs
      multiset<string> LegPreAllocGrp_NoLegAllocs_3;
      FIX::LegAllocAccount LegAllocAccount_3("STRING_711881152");
      noLegAllocs_1_1_2.set(LegAllocAccount_3);
      LegPreAllocGrp_NoLegAllocs_3.insert(LegAllocAccount_3.getString());
      FIX::LegAllocAcctIDSource LegAllocAcctIDSource_3("STRING_1839345062");
      noLegAllocs_1_1_2.set(LegAllocAcctIDSource_3);
      LegPreAllocGrp_NoLegAllocs_3.insert(LegAllocAcctIDSource_3.getString());
      FIX::LegAllocQty LegAllocQty_3;
      LegAllocQty_3.setString("3785462");
      noLegAllocs_1_1_2.set(LegAllocQty_3);
      LegPreAllocGrp_NoLegAllocs_3.insert(LegAllocQty_3.getString());
      FIX::LegAllocSettlCurrency LegAllocSettlCurrency_3("JPY");
      noLegAllocs_1_1_2.set(LegAllocSettlCurrency_3);
      LegPreAllocGrp_NoLegAllocs_3.insert(LegAllocSettlCurrency_3.getString());
      FIX::LegIndividualAllocID LegIndividualAllocID_3("STRING_1692108537");
      noLegAllocs_1_1_2.set(LegIndividualAllocID_3);
      LegPreAllocGrp_NoLegAllocs_3.insert(LegIndividualAllocID_3.getString());
      all_values.push_back(LegPreAllocGrp_NoLegAllocs_3);

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_1_2_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_20;
        FIX::Nested2PartyID Nested2PartyID_20("STRING_972857476");
        noNested2PartyIDs_1_2_2_0.set(Nested2PartyID_20);
        NestedParties2_NoNested2PartyIDs_20.insert(Nested2PartyID_20.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_20('1');
        noNested2PartyIDs_1_2_2_0.set(Nested2PartyIDSource_20);
        NestedParties2_NoNested2PartyIDs_20.insert(Nested2PartyIDSource_20.getString());
        FIX::Nested2PartyRole Nested2PartyRole_20(2087712602);
        noNested2PartyIDs_1_2_2_0.set(Nested2PartyRole_20);
        NestedParties2_NoNested2PartyIDs_20.insert(Nested2PartyRole_20.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_20);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_2_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_45;
          FIX::Nested2PartySubID Nested2PartySubID_45("STRING_826891993");
          noNested2PartySubIDs_1_2_0_3_0.set(Nested2PartySubID_45);
          NstdPtys2SubGrp_NoNested2PartySubIDs_45.insert(Nested2PartySubID_45.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_45(1006114972);
          noNested2PartySubIDs_1_2_0_3_0.set(Nested2PartySubIDType_45);
          NstdPtys2SubGrp_NoNested2PartySubIDs_45.insert(Nested2PartySubIDType_45.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_45);

          noNested2PartyIDs_1_2_2_0.addGroup(noNested2PartySubIDs_1_2_0_3_0);
        }
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_2_0_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_46;
          FIX::Nested2PartySubID Nested2PartySubID_46("STRING_1812287705");
          noNested2PartySubIDs_1_2_0_3_1.set(Nested2PartySubID_46);
          NstdPtys2SubGrp_NoNested2PartySubIDs_46.insert(Nested2PartySubID_46.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_46(1842740925);
          noNested2PartySubIDs_1_2_0_3_1.set(Nested2PartySubIDType_46);
          NstdPtys2SubGrp_NoNested2PartySubIDs_46.insert(Nested2PartySubIDType_46.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_46);

          noNested2PartyIDs_1_2_2_0.addGroup(noNested2PartySubIDs_1_2_0_3_1);
        }
        noLegAllocs_1_1_2.addGroup(noNested2PartyIDs_1_2_2_0);
      }
      noLegs_0_1.addGroup(noLegAllocs_1_1_2);
    }
    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::ExecutionReport::NoLegs::NoLegStipulations noLegStipulations_1_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_1;
      FIX::LegStipulationType LegStipulationType_1("STRING_1139686647");
      noLegStipulations_1_1_0.set(LegStipulationType_1);
      LegStipulations_NoLegStipulations_1.insert(LegStipulationType_1.getString());
      FIX::LegStipulationValue LegStipulationValue_1("STRING_772665346");
      noLegStipulations_1_1_0.set(LegStipulationValue_1);
      LegStipulations_NoLegStipulations_1.insert(LegStipulationValue_1.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_1);

      noLegs_0_1.addGroup(noLegStipulations_1_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoLegs::NoLegStipulations noLegStipulations_1_1_1;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_2;
      FIX::LegStipulationType LegStipulationType_2("STRING_1194968259");
      noLegStipulations_1_1_1.set(LegStipulationType_2);
      LegStipulations_NoLegStipulations_2.insert(LegStipulationType_2.getString());
      FIX::LegStipulationValue LegStipulationValue_2("STRING_173288811");
      noLegStipulations_1_1_1.set(LegStipulationValue_2);
      LegStipulations_NoLegStipulations_2.insert(LegStipulationValue_2.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_2);

      noLegs_0_1.addGroup(noLegStipulations_1_1_1);
    }
    // NestedParties3
    // Group NestedParties3.NoNested3PartyIDs
    {
      FIX50SP2::ExecutionReport::NoLegs::NoNested3PartyIDs noNested3PartyIDs_1_1_0;
      // NestedParties3.NoNested3PartyIDs
      multiset<string> NestedParties3_NoNested3PartyIDs_1;
      FIX::Nested3PartyID Nested3PartyID_1("STRING_2125676098");
      noNested3PartyIDs_1_1_0.set(Nested3PartyID_1);
      NestedParties3_NoNested3PartyIDs_1.insert(Nested3PartyID_1.getString());
      FIX::Nested3PartyIDSource Nested3PartyIDSource_1('1');
      noNested3PartyIDs_1_1_0.set(Nested3PartyIDSource_1);
      NestedParties3_NoNested3PartyIDs_1.insert(Nested3PartyIDSource_1.getString());
      FIX::Nested3PartyRole Nested3PartyRole_1(1412820466);
      noNested3PartyIDs_1_1_0.set(Nested3PartyRole_1);
      NestedParties3_NoNested3PartyIDs_1.insert(Nested3PartyRole_1.getString());
      all_values.push_back(NestedParties3_NoNested3PartyIDs_1);

      // NstdPtys3SubGrp
      // Group NstdPtys3SubGrp.NoNested3PartySubIDs
      {
        FIX50SP2::ExecutionReport::NoLegs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_1_0_2_0;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_2;
        FIX::Nested3PartySubID Nested3PartySubID_2("STRING_2083657445");
        noNested3PartySubIDs_1_0_2_0.set(Nested3PartySubID_2);
        NstdPtys3SubGrp_NoNested3PartySubIDs_2.insert(Nested3PartySubID_2.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_2(760831165);
        noNested3PartySubIDs_1_0_2_0.set(Nested3PartySubIDType_2);
        NstdPtys3SubGrp_NoNested3PartySubIDs_2.insert(Nested3PartySubIDType_2.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_2);

        noNested3PartyIDs_1_1_0.addGroup(noNested3PartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoLegs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_1_0_2_1;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_3;
        FIX::Nested3PartySubID Nested3PartySubID_3("STRING_1129154582");
        noNested3PartySubIDs_1_0_2_1.set(Nested3PartySubID_3);
        NstdPtys3SubGrp_NoNested3PartySubIDs_3.insert(Nested3PartySubID_3.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_3(1123595111);
        noNested3PartySubIDs_1_0_2_1.set(Nested3PartySubIDType_3);
        NstdPtys3SubGrp_NoNested3PartySubIDs_3.insert(Nested3PartySubIDType_3.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_3);

        noNested3PartyIDs_1_1_0.addGroup(noNested3PartySubIDs_1_0_2_1);
      }
      noLegs_0_1.addGroup(noNested3PartyIDs_1_1_0);
    }
    msg.addGroup(noLegs_0_1);
  }
  {
    FIX50SP2::ExecutionReport::NoLegs noLegs_0_2;
    // InstrmtLegExecGrp.NoLegs
    multiset<string> InstrmtLegExecGrp_NoLegs_2;
    FIX::LegAllocID LegAllocID_2("STRING_773456169");
    noLegs_0_2.set(LegAllocID_2);
    InstrmtLegExecGrp_NoLegs_2.insert(LegAllocID_2.getString());
    FIX::LegCalculatedCcyLastQty LegCalculatedCcyLastQty_2;
    LegCalculatedCcyLastQty_2.setString("11000825");
    noLegs_0_2.set(LegCalculatedCcyLastQty_2);
    InstrmtLegExecGrp_NoLegs_2.insert(LegCalculatedCcyLastQty_2.getString());
    FIX::LegCoveredOrUncovered LegCoveredOrUncovered_2(1835476263);
    noLegs_0_2.set(LegCoveredOrUncovered_2);
    InstrmtLegExecGrp_NoLegs_2.insert(LegCoveredOrUncovered_2.getString());
    FIX::LegCurrencyRatio LegCurrencyRatio_2;
    LegCurrencyRatio_2.setString("4653175");
    noLegs_0_2.set(LegCurrencyRatio_2);
    InstrmtLegExecGrp_NoLegs_2.insert(LegCurrencyRatio_2.getString());
    FIX::LegDividendYield LegDividendYield_2;
    LegDividendYield_2.setString("88.000000");
    noLegs_0_2.set(LegDividendYield_2);
    InstrmtLegExecGrp_NoLegs_2.insert(LegDividendYield_2.getString());
    FIX::LegExecInst LegExecInst_2("MULTIPLECHARVALUE_1714377743");
    noLegs_0_2.set(LegExecInst_2);
    InstrmtLegExecGrp_NoLegs_2.insert(LegExecInst_2.getString());
    FIX::LegGrossTradeAmt LegGrossTradeAmt_2;
    LegGrossTradeAmt_2.setString("6456561");
    noLegs_0_2.set(LegGrossTradeAmt_2);
    InstrmtLegExecGrp_NoLegs_2.insert(LegGrossTradeAmt_2.getString());
    FIX::LegLastForwardPoints LegLastForwardPoints_2;
    LegLastForwardPoints_2.setString("10232536");
    noLegs_0_2.set(LegLastForwardPoints_2);
    InstrmtLegExecGrp_NoLegs_2.insert(LegLastForwardPoints_2.getString());
    FIX::LegLastPx LegLastPx_2;
    LegLastPx_2.setString("3278407");
    noLegs_0_2.set(LegLastPx_2);
    InstrmtLegExecGrp_NoLegs_2.insert(LegLastPx_2.getString());
    FIX::LegLastQty LegLastQty_2;
    LegLastQty_2.setString("16185136");
    noLegs_0_2.set(LegLastQty_2);
    InstrmtLegExecGrp_NoLegs_2.insert(LegLastQty_2.getString());
    FIX::LegOrderQty LegOrderQty_2;
    LegOrderQty_2.setString("174975");
    noLegs_0_2.set(LegOrderQty_2);
    InstrmtLegExecGrp_NoLegs_2.insert(LegOrderQty_2.getString());
    FIX::LegPositionEffect LegPositionEffect_2('2');
    noLegs_0_2.set(LegPositionEffect_2);
    InstrmtLegExecGrp_NoLegs_2.insert(LegPositionEffect_2.getString());
    FIX::LegQty LegQty_2;
    LegQty_2.setString("4450021");
    noLegs_0_2.set(LegQty_2);
    InstrmtLegExecGrp_NoLegs_2.insert(LegQty_2.getString());
    FIX::LegRefID LegRefID_2("STRING_844389522");
    noLegs_0_2.set(LegRefID_2);
    InstrmtLegExecGrp_NoLegs_2.insert(LegRefID_2.getString());
    FIX::LegSettlCurrency LegSettlCurrency_2("CAN");
    noLegs_0_2.set(LegSettlCurrency_2);
    InstrmtLegExecGrp_NoLegs_2.insert(LegSettlCurrency_2.getString());
    FIX::LegSettlDate LegSettlDate_2("LOCALMKTDATE_539646799");
    noLegs_0_2.set(LegSettlDate_2);
    InstrmtLegExecGrp_NoLegs_2.insert(LegSettlDate_2.getString());
    FIX::LegSettlType LegSettlType_2('5');
    noLegs_0_2.set(LegSettlType_2);
    InstrmtLegExecGrp_NoLegs_2.insert(LegSettlType_2.getString());
    FIX::LegSwapType LegSwapType_2(5);
    noLegs_0_2.set(LegSwapType_2);
    InstrmtLegExecGrp_NoLegs_2.insert(LegSwapType_2.getString());
    FIX::LegVolatility LegVolatility_2;
    LegVolatility_2.setString("13123121");
    noLegs_0_2.set(LegVolatility_2);
    InstrmtLegExecGrp_NoLegs_2.insert(LegVolatility_2.getString());
    all_values.push_back(InstrmtLegExecGrp_NoLegs_2);

    // InstrumentLeg
    multiset<string> InstrumentLeg_48;
    FIX::EncodedLegIssuer EncodedLegIssuer_48("DATA_1699227151");
    noLegs_0_2.set(EncodedLegIssuer_48);
    InstrumentLeg_48.insert(EncodedLegIssuer_48.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_48(1422781698);
    noLegs_0_2.set(EncodedLegIssuerLen_48);
    InstrumentLeg_48.insert(EncodedLegIssuerLen_48.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_48("DATA_1306838847");
    noLegs_0_2.set(EncodedLegSecurityDesc_48);
    InstrumentLeg_48.insert(EncodedLegSecurityDesc_48.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_48(1677419601);
    noLegs_0_2.set(EncodedLegSecurityDescLen_48);
    InstrumentLeg_48.insert(EncodedLegSecurityDescLen_48.getString());
    FIX::LegCFICode LegCFICode_48("STRING_1547883888");
    noLegs_0_2.set(LegCFICode_48);
    InstrumentLeg_48.insert(LegCFICode_48.getString());
    FIX::LegContractMultiplier LegContractMultiplier_48;
    LegContractMultiplier_48.setString("5721756");
    noLegs_0_2.set(LegContractMultiplier_48);
    InstrumentLeg_48.insert(LegContractMultiplier_48.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_48(1964107672);
    noLegs_0_2.set(LegContractMultiplierUnit_48);
    InstrumentLeg_48.insert(LegContractMultiplierUnit_48.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_48("MONTHYEAR_1484057686");
    noLegs_0_2.set(LegContractSettlMonth_48);
    InstrumentLeg_48.insert(LegContractSettlMonth_48.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_48("COUNTRY_1333006830");
    noLegs_0_2.set(LegCountryOfIssue_48);
    InstrumentLeg_48.insert(LegCountryOfIssue_48.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_48("LOCALMKTDATE_945778606");
    noLegs_0_2.set(LegCouponPaymentDate_48);
    InstrumentLeg_48.insert(LegCouponPaymentDate_48.getString());
    FIX::LegCouponRate LegCouponRate_48;
    LegCouponRate_48.setString("91.490000");
    noLegs_0_2.set(LegCouponRate_48);
    InstrumentLeg_48.insert(LegCouponRate_48.getString());
    FIX::LegCreditRating LegCreditRating_48("STRING_2106462999");
    noLegs_0_2.set(LegCreditRating_48);
    InstrumentLeg_48.insert(LegCreditRating_48.getString());
    FIX::LegCurrency LegCurrency_48("CHF");
    noLegs_0_2.set(LegCurrency_48);
    InstrumentLeg_48.insert(LegCurrency_48.getString());
    FIX::LegDatedDate LegDatedDate_48("LOCALMKTDATE_424296935");
    noLegs_0_2.set(LegDatedDate_48);
    InstrumentLeg_48.insert(LegDatedDate_48.getString());
    FIX::LegExerciseStyle LegExerciseStyle_48(1377006317);
    noLegs_0_2.set(LegExerciseStyle_48);
    InstrumentLeg_48.insert(LegExerciseStyle_48.getString());
    FIX::LegFactor LegFactor_48;
    LegFactor_48.setString("18625395");
    noLegs_0_2.set(LegFactor_48);
    InstrumentLeg_48.insert(LegFactor_48.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_48(1069953078);
    noLegs_0_2.set(LegFlowScheduleType_48);
    InstrumentLeg_48.insert(LegFlowScheduleType_48.getString());
    FIX::LegInstrRegistry LegInstrRegistry_48("STRING_252776359");
    noLegs_0_2.set(LegInstrRegistry_48);
    InstrumentLeg_48.insert(LegInstrRegistry_48.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_48("LOCALMKTDATE_42896571");
    noLegs_0_2.set(LegInterestAccrualDate_48);
    InstrumentLeg_48.insert(LegInterestAccrualDate_48.getString());
    FIX::LegIssueDate LegIssueDate_48("LOCALMKTDATE_540983050");
    noLegs_0_2.set(LegIssueDate_48);
    InstrumentLeg_48.insert(LegIssueDate_48.getString());
    FIX::LegIssuer LegIssuer_48("STRING_270273888");
    noLegs_0_2.set(LegIssuer_48);
    InstrumentLeg_48.insert(LegIssuer_48.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_48("STRING_310966236");
    noLegs_0_2.set(LegLocaleOfIssue_48);
    InstrumentLeg_48.insert(LegLocaleOfIssue_48.getString());
    FIX::LegMaturityDate LegMaturityDate_48("LOCALMKTDATE_985985232");
    noLegs_0_2.set(LegMaturityDate_48);
    InstrumentLeg_48.insert(LegMaturityDate_48.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_48("MONTHYEAR_1114663410");
    noLegs_0_2.set(LegMaturityMonthYear_48);
    InstrumentLeg_48.insert(LegMaturityMonthYear_48.getString());
    FIX::LegMaturityTime LegMaturityTime_48("TZTIMEONLY_1585150873");
    noLegs_0_2.set(LegMaturityTime_48);
    InstrumentLeg_48.insert(LegMaturityTime_48.getString());
    FIX::LegOptAttribute LegOptAttribute_48('1');
    noLegs_0_2.set(LegOptAttribute_48);
    InstrumentLeg_48.insert(LegOptAttribute_48.getString());
    FIX::LegOptionRatio LegOptionRatio_48;
    LegOptionRatio_48.setString("16543102");
    noLegs_0_2.set(LegOptionRatio_48);
    InstrumentLeg_48.insert(LegOptionRatio_48.getString());
    FIX::LegPool LegPool_48("STRING_2089409765");
    noLegs_0_2.set(LegPool_48);
    InstrumentLeg_48.insert(LegPool_48.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_48("STRING_197800710");
    noLegs_0_2.set(LegPriceUnitOfMeasure_48);
    InstrumentLeg_48.insert(LegPriceUnitOfMeasure_48.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_48;
    LegPriceUnitOfMeasureQty_48.setString("8191387");
    noLegs_0_2.set(LegPriceUnitOfMeasureQty_48);
    InstrumentLeg_48.insert(LegPriceUnitOfMeasureQty_48.getString());
    FIX::LegProduct LegProduct_48(1641153268);
    noLegs_0_2.set(LegProduct_48);
    InstrumentLeg_48.insert(LegProduct_48.getString());
    FIX::LegPutOrCall LegPutOrCall_48(1620582408);
    noLegs_0_2.set(LegPutOrCall_48);
    InstrumentLeg_48.insert(LegPutOrCall_48.getString());
    FIX::LegRatioQty LegRatioQty_48;
    LegRatioQty_48.setString("21259775");
    noLegs_0_2.set(LegRatioQty_48);
    InstrumentLeg_48.insert(LegRatioQty_48.getString());
    FIX::LegRedemptionDate LegRedemptionDate_48("LOCALMKTDATE_1171089221");
    noLegs_0_2.set(LegRedemptionDate_48);
    InstrumentLeg_48.insert(LegRedemptionDate_48.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_48("STRING_1020982649");
    noLegs_0_2.set(LegRepoCollateralSecurityType_48);
    InstrumentLeg_48.insert(LegRepoCollateralSecurityType_48.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_48;
    LegRepurchaseRate_48.setString("95.710000");
    noLegs_0_2.set(LegRepurchaseRate_48);
    InstrumentLeg_48.insert(LegRepurchaseRate_48.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_48(987713245);
    noLegs_0_2.set(LegRepurchaseTerm_48);
    InstrumentLeg_48.insert(LegRepurchaseTerm_48.getString());
    FIX::LegSecurityDesc LegSecurityDesc_48("STRING_357556687");
    noLegs_0_2.set(LegSecurityDesc_48);
    InstrumentLeg_48.insert(LegSecurityDesc_48.getString());
    FIX::LegSecurityExchange LegSecurityExchange_48("EXCHANGE_1883676401");
    noLegs_0_2.set(LegSecurityExchange_48);
    InstrumentLeg_48.insert(LegSecurityExchange_48.getString());
    FIX::LegSecurityID LegSecurityID_48("STRING_1933491851");
    noLegs_0_2.set(LegSecurityID_48);
    InstrumentLeg_48.insert(LegSecurityID_48.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_48("STRING_817725836");
    noLegs_0_2.set(LegSecurityIDSource_48);
    InstrumentLeg_48.insert(LegSecurityIDSource_48.getString());
    FIX::LegSecuritySubType LegSecuritySubType_48("STRING_1842655753");
    noLegs_0_2.set(LegSecuritySubType_48);
    InstrumentLeg_48.insert(LegSecuritySubType_48.getString());
    FIX::LegSecurityType LegSecurityType_48("STRING_1831869368");
    noLegs_0_2.set(LegSecurityType_48);
    InstrumentLeg_48.insert(LegSecurityType_48.getString());
    FIX::LegSide LegSide_48('9');
    noLegs_0_2.set(LegSide_48);
    InstrumentLeg_48.insert(LegSide_48.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_48("STRING_119469040");
    noLegs_0_2.set(LegStateOrProvinceOfIssue_48);
    InstrumentLeg_48.insert(LegStateOrProvinceOfIssue_48.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_48("CAN");
    noLegs_0_2.set(LegStrikeCurrency_48);
    InstrumentLeg_48.insert(LegStrikeCurrency_48.getString());
    FIX::LegStrikePrice LegStrikePrice_48;
    LegStrikePrice_48.setString("11894221");
    noLegs_0_2.set(LegStrikePrice_48);
    InstrumentLeg_48.insert(LegStrikePrice_48.getString());
    FIX::LegSymbol LegSymbol_48("STRING_1314168397");
    noLegs_0_2.set(LegSymbol_48);
    InstrumentLeg_48.insert(LegSymbol_48.getString());
    FIX::LegSymbolSfx LegSymbolSfx_48("STRING_723840032");
    noLegs_0_2.set(LegSymbolSfx_48);
    InstrumentLeg_48.insert(LegSymbolSfx_48.getString());
    FIX::LegTimeUnit LegTimeUnit_48("STRING_1730405168");
    noLegs_0_2.set(LegTimeUnit_48);
    InstrumentLeg_48.insert(LegTimeUnit_48.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_48("STRING_1584442286");
    noLegs_0_2.set(LegUnitOfMeasure_48);
    InstrumentLeg_48.insert(LegUnitOfMeasure_48.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_48;
    LegUnitOfMeasureQty_48.setString("10348062");
    noLegs_0_2.set(LegUnitOfMeasureQty_48);
    InstrumentLeg_48.insert(LegUnitOfMeasureQty_48.getString());
    all_values.push_back(InstrumentLeg_48);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::ExecutionReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_103;
      FIX::LegSecurityAltID LegSecurityAltID_103("STRING_551622048");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltID_103);
      LegSecAltIDGrp_NoLegSecurityAltID_103.insert(LegSecurityAltID_103.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_103("STRING_472473494");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltIDSource_103);
      LegSecAltIDGrp_NoLegSecurityAltID_103.insert(LegSecurityAltIDSource_103.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_103);

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_0);
    }
    // LegPreAllocGrp
    // Group LegPreAllocGrp.NoLegAllocs
    {
      FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs noLegAllocs_2_1_0;
      // LegPreAllocGrp.NoLegAllocs
      multiset<string> LegPreAllocGrp_NoLegAllocs_4;
      FIX::LegAllocAccount LegAllocAccount_4("STRING_58448610");
      noLegAllocs_2_1_0.set(LegAllocAccount_4);
      LegPreAllocGrp_NoLegAllocs_4.insert(LegAllocAccount_4.getString());
      FIX::LegAllocAcctIDSource LegAllocAcctIDSource_4("STRING_414399611");
      noLegAllocs_2_1_0.set(LegAllocAcctIDSource_4);
      LegPreAllocGrp_NoLegAllocs_4.insert(LegAllocAcctIDSource_4.getString());
      FIX::LegAllocQty LegAllocQty_4;
      LegAllocQty_4.setString("18624989");
      noLegAllocs_2_1_0.set(LegAllocQty_4);
      LegPreAllocGrp_NoLegAllocs_4.insert(LegAllocQty_4.getString());
      FIX::LegAllocSettlCurrency LegAllocSettlCurrency_4("JPY");
      noLegAllocs_2_1_0.set(LegAllocSettlCurrency_4);
      LegPreAllocGrp_NoLegAllocs_4.insert(LegAllocSettlCurrency_4.getString());
      FIX::LegIndividualAllocID LegIndividualAllocID_4("STRING_1335597695");
      noLegAllocs_2_1_0.set(LegIndividualAllocID_4);
      LegPreAllocGrp_NoLegAllocs_4.insert(LegIndividualAllocID_4.getString());
      all_values.push_back(LegPreAllocGrp_NoLegAllocs_4);

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_2_0_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_21;
        FIX::Nested2PartyID Nested2PartyID_21("STRING_1079158453");
        noNested2PartyIDs_2_0_2_0.set(Nested2PartyID_21);
        NestedParties2_NoNested2PartyIDs_21.insert(Nested2PartyID_21.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_21('2');
        noNested2PartyIDs_2_0_2_0.set(Nested2PartyIDSource_21);
        NestedParties2_NoNested2PartyIDs_21.insert(Nested2PartyIDSource_21.getString());
        FIX::Nested2PartyRole Nested2PartyRole_21(1406750793);
        noNested2PartyIDs_2_0_2_0.set(Nested2PartyRole_21);
        NestedParties2_NoNested2PartyIDs_21.insert(Nested2PartyRole_21.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_21);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_0_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_47;
          FIX::Nested2PartySubID Nested2PartySubID_47("STRING_566653383");
          noNested2PartySubIDs_2_0_0_3_0.set(Nested2PartySubID_47);
          NstdPtys2SubGrp_NoNested2PartySubIDs_47.insert(Nested2PartySubID_47.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_47(1142943546);
          noNested2PartySubIDs_2_0_0_3_0.set(Nested2PartySubIDType_47);
          NstdPtys2SubGrp_NoNested2PartySubIDs_47.insert(Nested2PartySubIDType_47.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_47);

          noNested2PartyIDs_2_0_2_0.addGroup(noNested2PartySubIDs_2_0_0_3_0);
        }
        noLegAllocs_2_1_0.addGroup(noNested2PartyIDs_2_0_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_2_0_2_1;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_22;
        FIX::Nested2PartyID Nested2PartyID_22("STRING_1852879902");
        noNested2PartyIDs_2_0_2_1.set(Nested2PartyID_22);
        NestedParties2_NoNested2PartyIDs_22.insert(Nested2PartyID_22.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_22('1');
        noNested2PartyIDs_2_0_2_1.set(Nested2PartyIDSource_22);
        NestedParties2_NoNested2PartyIDs_22.insert(Nested2PartyIDSource_22.getString());
        FIX::Nested2PartyRole Nested2PartyRole_22(838115651);
        noNested2PartyIDs_2_0_2_1.set(Nested2PartyRole_22);
        NestedParties2_NoNested2PartyIDs_22.insert(Nested2PartyRole_22.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_22);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_0_1_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_48;
          FIX::Nested2PartySubID Nested2PartySubID_48("STRING_202783173");
          noNested2PartySubIDs_2_0_1_3_0.set(Nested2PartySubID_48);
          NstdPtys2SubGrp_NoNested2PartySubIDs_48.insert(Nested2PartySubID_48.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_48(957584691);
          noNested2PartySubIDs_2_0_1_3_0.set(Nested2PartySubIDType_48);
          NstdPtys2SubGrp_NoNested2PartySubIDs_48.insert(Nested2PartySubIDType_48.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_48);

          noNested2PartyIDs_2_0_2_1.addGroup(noNested2PartySubIDs_2_0_1_3_0);
        }
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_0_1_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_49;
          FIX::Nested2PartySubID Nested2PartySubID_49("STRING_451174013");
          noNested2PartySubIDs_2_0_1_3_1.set(Nested2PartySubID_49);
          NstdPtys2SubGrp_NoNested2PartySubIDs_49.insert(Nested2PartySubID_49.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_49(883726634);
          noNested2PartySubIDs_2_0_1_3_1.set(Nested2PartySubIDType_49);
          NstdPtys2SubGrp_NoNested2PartySubIDs_49.insert(Nested2PartySubIDType_49.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_49);

          noNested2PartyIDs_2_0_2_1.addGroup(noNested2PartySubIDs_2_0_1_3_1);
        }
        noLegAllocs_2_1_0.addGroup(noNested2PartyIDs_2_0_2_1);
      }
      noLegs_0_2.addGroup(noLegAllocs_2_1_0);
    }
    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::ExecutionReport::NoLegs::NoLegStipulations noLegStipulations_2_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_3;
      FIX::LegStipulationType LegStipulationType_3("STRING_1765342410");
      noLegStipulations_2_1_0.set(LegStipulationType_3);
      LegStipulations_NoLegStipulations_3.insert(LegStipulationType_3.getString());
      FIX::LegStipulationValue LegStipulationValue_3("STRING_1607566667");
      noLegStipulations_2_1_0.set(LegStipulationValue_3);
      LegStipulations_NoLegStipulations_3.insert(LegStipulationValue_3.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_3);

      noLegs_0_2.addGroup(noLegStipulations_2_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoLegs::NoLegStipulations noLegStipulations_2_1_1;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_4;
      FIX::LegStipulationType LegStipulationType_4("STRING_1729928330");
      noLegStipulations_2_1_1.set(LegStipulationType_4);
      LegStipulations_NoLegStipulations_4.insert(LegStipulationType_4.getString());
      FIX::LegStipulationValue LegStipulationValue_4("STRING_1202301048");
      noLegStipulations_2_1_1.set(LegStipulationValue_4);
      LegStipulations_NoLegStipulations_4.insert(LegStipulationValue_4.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_4);

      noLegs_0_2.addGroup(noLegStipulations_2_1_1);
    }
    {
      FIX50SP2::ExecutionReport::NoLegs::NoLegStipulations noLegStipulations_2_1_2;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_5;
      FIX::LegStipulationType LegStipulationType_5("STRING_494889287");
      noLegStipulations_2_1_2.set(LegStipulationType_5);
      LegStipulations_NoLegStipulations_5.insert(LegStipulationType_5.getString());
      FIX::LegStipulationValue LegStipulationValue_5("STRING_151351435");
      noLegStipulations_2_1_2.set(LegStipulationValue_5);
      LegStipulations_NoLegStipulations_5.insert(LegStipulationValue_5.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_5);

      noLegs_0_2.addGroup(noLegStipulations_2_1_2);
    }
    // NestedParties3
    // Group NestedParties3.NoNested3PartyIDs
    {
      FIX50SP2::ExecutionReport::NoLegs::NoNested3PartyIDs noNested3PartyIDs_2_1_0;
      // NestedParties3.NoNested3PartyIDs
      multiset<string> NestedParties3_NoNested3PartyIDs_2;
      FIX::Nested3PartyID Nested3PartyID_2("STRING_967362781");
      noNested3PartyIDs_2_1_0.set(Nested3PartyID_2);
      NestedParties3_NoNested3PartyIDs_2.insert(Nested3PartyID_2.getString());
      FIX::Nested3PartyIDSource Nested3PartyIDSource_2('1');
      noNested3PartyIDs_2_1_0.set(Nested3PartyIDSource_2);
      NestedParties3_NoNested3PartyIDs_2.insert(Nested3PartyIDSource_2.getString());
      FIX::Nested3PartyRole Nested3PartyRole_2(1812371707);
      noNested3PartyIDs_2_1_0.set(Nested3PartyRole_2);
      NestedParties3_NoNested3PartyIDs_2.insert(Nested3PartyRole_2.getString());
      all_values.push_back(NestedParties3_NoNested3PartyIDs_2);

      // NstdPtys3SubGrp
      // Group NstdPtys3SubGrp.NoNested3PartySubIDs
      {
        FIX50SP2::ExecutionReport::NoLegs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_2_0_2_0;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_4;
        FIX::Nested3PartySubID Nested3PartySubID_4("STRING_1531064945");
        noNested3PartySubIDs_2_0_2_0.set(Nested3PartySubID_4);
        NstdPtys3SubGrp_NoNested3PartySubIDs_4.insert(Nested3PartySubID_4.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_4(542475375);
        noNested3PartySubIDs_2_0_2_0.set(Nested3PartySubIDType_4);
        NstdPtys3SubGrp_NoNested3PartySubIDs_4.insert(Nested3PartySubIDType_4.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_4);

        noNested3PartyIDs_2_1_0.addGroup(noNested3PartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoLegs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_2_0_2_1;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_5;
        FIX::Nested3PartySubID Nested3PartySubID_5("STRING_1289831625");
        noNested3PartySubIDs_2_0_2_1.set(Nested3PartySubID_5);
        NstdPtys3SubGrp_NoNested3PartySubIDs_5.insert(Nested3PartySubID_5.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_5(719178992);
        noNested3PartySubIDs_2_0_2_1.set(Nested3PartySubIDType_5);
        NstdPtys3SubGrp_NoNested3PartySubIDs_5.insert(Nested3PartySubIDType_5.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_5);

        noNested3PartyIDs_2_1_0.addGroup(noNested3PartySubIDs_2_0_2_1);
      }
      noLegs_0_2.addGroup(noNested3PartyIDs_2_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoLegs::NoNested3PartyIDs noNested3PartyIDs_2_1_1;
      // NestedParties3.NoNested3PartyIDs
      multiset<string> NestedParties3_NoNested3PartyIDs_3;
      FIX::Nested3PartyID Nested3PartyID_3("STRING_1398556597");
      noNested3PartyIDs_2_1_1.set(Nested3PartyID_3);
      NestedParties3_NoNested3PartyIDs_3.insert(Nested3PartyID_3.getString());
      FIX::Nested3PartyIDSource Nested3PartyIDSource_3('2');
      noNested3PartyIDs_2_1_1.set(Nested3PartyIDSource_3);
      NestedParties3_NoNested3PartyIDs_3.insert(Nested3PartyIDSource_3.getString());
      FIX::Nested3PartyRole Nested3PartyRole_3(928275688);
      noNested3PartyIDs_2_1_1.set(Nested3PartyRole_3);
      NestedParties3_NoNested3PartyIDs_3.insert(Nested3PartyRole_3.getString());
      all_values.push_back(NestedParties3_NoNested3PartyIDs_3);

      // NstdPtys3SubGrp
      // Group NstdPtys3SubGrp.NoNested3PartySubIDs
      {
        FIX50SP2::ExecutionReport::NoLegs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_2_1_2_0;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_6;
        FIX::Nested3PartySubID Nested3PartySubID_6("STRING_140894481");
        noNested3PartySubIDs_2_1_2_0.set(Nested3PartySubID_6);
        NstdPtys3SubGrp_NoNested3PartySubIDs_6.insert(Nested3PartySubID_6.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_6(1494929071);
        noNested3PartySubIDs_2_1_2_0.set(Nested3PartySubIDType_6);
        NstdPtys3SubGrp_NoNested3PartySubIDs_6.insert(Nested3PartySubIDType_6.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_6);

        noNested3PartyIDs_2_1_1.addGroup(noNested3PartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoLegs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_2_1_2_1;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_7;
        FIX::Nested3PartySubID Nested3PartySubID_7("STRING_1800767289");
        noNested3PartySubIDs_2_1_2_1.set(Nested3PartySubID_7);
        NstdPtys3SubGrp_NoNested3PartySubIDs_7.insert(Nested3PartySubID_7.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_7(1993774384);
        noNested3PartySubIDs_2_1_2_1.set(Nested3PartySubIDType_7);
        NstdPtys3SubGrp_NoNested3PartySubIDs_7.insert(Nested3PartySubIDType_7.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_7);

        noNested3PartyIDs_2_1_1.addGroup(noNested3PartySubIDs_2_1_2_1);
      }
      {
        FIX50SP2::ExecutionReport::NoLegs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_2_1_2_2;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_8;
        FIX::Nested3PartySubID Nested3PartySubID_8("STRING_731824643");
        noNested3PartySubIDs_2_1_2_2.set(Nested3PartySubID_8);
        NstdPtys3SubGrp_NoNested3PartySubIDs_8.insert(Nested3PartySubID_8.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_8(491399292);
        noNested3PartySubIDs_2_1_2_2.set(Nested3PartySubIDType_8);
        NstdPtys3SubGrp_NoNested3PartySubIDs_8.insert(Nested3PartySubIDType_8.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_8);

        noNested3PartyIDs_2_1_1.addGroup(noNested3PartySubIDs_2_1_2_2);
      }
      noLegs_0_2.addGroup(noNested3PartyIDs_2_1_1);
    }
    msg.addGroup(noLegs_0_2);
  }
  // Instrument
  multiset<string> Instrument_27;
  FIX::AttachmentPoint AttachmentPoint_27;
  AttachmentPoint_27.setString("63.590000");
  msg.set(AttachmentPoint_27);
  Instrument_27.insert(AttachmentPoint_27.getString());
  FIX::CFICode CFICode_27("STRING_934607816");
  msg.set(CFICode_27);
  Instrument_27.insert(CFICode_27.getString());
  FIX::CPProgram CPProgram_27(2);
  msg.set(CPProgram_27);
  Instrument_27.insert(CPProgram_27.getString());
  FIX::CPRegType CPRegType_27("STRING_1834730372");
  msg.set(CPRegType_27);
  Instrument_27.insert(CPRegType_27.getString());
  FIX::CapPrice CapPrice_27;
  CapPrice_27.setString("18183344");
  msg.set(CapPrice_27);
  Instrument_27.insert(CapPrice_27.getString());
  FIX::ContractMultiplier ContractMultiplier_27;
  ContractMultiplier_27.setString("14485071");
  msg.set(ContractMultiplier_27);
  Instrument_27.insert(ContractMultiplier_27.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_27(0);
  msg.set(ContractMultiplierUnit_27);
  Instrument_27.insert(ContractMultiplierUnit_27.getString());
  FIX::ContractSettlMonth ContractSettlMonth_27("MONTHYEAR_1278417469");
  msg.set(ContractSettlMonth_27);
  Instrument_27.insert(ContractSettlMonth_27.getString());
  FIX::CountryOfIssue CountryOfIssue_27("COUNTRY_1030951828");
  msg.set(CountryOfIssue_27);
  Instrument_27.insert(CountryOfIssue_27.getString());
  FIX::CouponPaymentDate CouponPaymentDate_27("LOCALMKTDATE_507406535");
  msg.set(CouponPaymentDate_27);
  Instrument_27.insert(CouponPaymentDate_27.getString());
  FIX::CouponRate CouponRate_27;
  CouponRate_27.setString("67.570000");
  msg.set(CouponRate_27);
  Instrument_27.insert(CouponRate_27.getString());
  FIX::CreditRating CreditRating_27("STRING_1182303263");
  msg.set(CreditRating_27);
  Instrument_27.insert(CreditRating_27.getString());
  FIX::DatedDate DatedDate_27("LOCALMKTDATE_113845984");
  msg.set(DatedDate_27);
  Instrument_27.insert(DatedDate_27.getString());
  FIX::DetachmentPoint DetachmentPoint_27;
  DetachmentPoint_27.setString("58.900000");
  msg.set(DetachmentPoint_27);
  Instrument_27.insert(DetachmentPoint_27.getString());
  FIX::EncodedIssuer EncodedIssuer_27("DATA_850869274");
  msg.set(EncodedIssuer_27);
  Instrument_27.insert(EncodedIssuer_27.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_27(1926217691);
  msg.set(EncodedIssuerLen_27);
  Instrument_27.insert(EncodedIssuerLen_27.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_27("DATA_1974948283");
  msg.set(EncodedSecurityDesc_27);
  Instrument_27.insert(EncodedSecurityDesc_27.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_27(234450572);
  msg.set(EncodedSecurityDescLen_27);
  Instrument_27.insert(EncodedSecurityDescLen_27.getString());
  FIX::ExerciseStyle ExerciseStyle_27(0);
  msg.set(ExerciseStyle_27);
  Instrument_27.insert(ExerciseStyle_27.getString());
  FIX::Factor Factor_27;
  Factor_27.setString("11172962");
  msg.set(Factor_27);
  Instrument_27.insert(Factor_27.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_27(true);
  msg.set(FlexProductEligibilityIndicator_27);
  Instrument_27.insert(FlexProductEligibilityIndicator_27.getString());
  FIX::FlexibleIndicator FlexibleIndicator_27(true);
  msg.set(FlexibleIndicator_27);
  Instrument_27.insert(FlexibleIndicator_27.getString());
  FIX::FloorPrice FloorPrice_27;
  FloorPrice_27.setString("13388026");
  msg.set(FloorPrice_27);
  Instrument_27.insert(FloorPrice_27.getString());
  FIX::FlowScheduleType FlowScheduleType_27(3);
  msg.set(FlowScheduleType_27);
  Instrument_27.insert(FlowScheduleType_27.getString());
  FIX::InstrRegistry InstrRegistry_27("STRING_230106110");
  msg.set(InstrRegistry_27);
  Instrument_27.insert(InstrRegistry_27.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_27('1');
  msg.set(InstrmtAssignmentMethod_27);
  Instrument_27.insert(InstrmtAssignmentMethod_27.getString());
  FIX::InterestAccrualDate InterestAccrualDate_27("LOCALMKTDATE_1229350676");
  msg.set(InterestAccrualDate_27);
  Instrument_27.insert(InterestAccrualDate_27.getString());
  FIX::IssueDate IssueDate_27("LOCALMKTDATE_2030873399");
  msg.set(IssueDate_27);
  Instrument_27.insert(IssueDate_27.getString());
  FIX::Issuer Issuer_27("STRING_1325987908");
  msg.set(Issuer_27);
  Instrument_27.insert(Issuer_27.getString());
  FIX::ListMethod ListMethod_27(1);
  msg.set(ListMethod_27);
  Instrument_27.insert(ListMethod_27.getString());
  FIX::LocaleOfIssue LocaleOfIssue_27("STRING_374789044");
  msg.set(LocaleOfIssue_27);
  Instrument_27.insert(LocaleOfIssue_27.getString());
  FIX::MaturityDate MaturityDate_27("LOCALMKTDATE_562060619");
  msg.set(MaturityDate_27);
  Instrument_27.insert(MaturityDate_27.getString());
  FIX::MaturityMonthYear MaturityMonthYear_27("MONTHYEAR_748299487");
  msg.set(MaturityMonthYear_27);
  Instrument_27.insert(MaturityMonthYear_27.getString());
  FIX::MaturityTime MaturityTime_27("TZTIMEONLY_1823773028");
  msg.set(MaturityTime_27);
  Instrument_27.insert(MaturityTime_27.getString());
  FIX::MinPriceIncrement MinPriceIncrement_27;
  MinPriceIncrement_27.setString("2493073");
  msg.set(MinPriceIncrement_27);
  Instrument_27.insert(MinPriceIncrement_27.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_27;
  MinPriceIncrementAmount_27.setString("4191502");
  msg.set(MinPriceIncrementAmount_27);
  Instrument_27.insert(MinPriceIncrementAmount_27.getString());
  FIX::NTPositionLimit NTPositionLimit_27(1124796526);
  msg.set(NTPositionLimit_27);
  Instrument_27.insert(NTPositionLimit_27.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_27;
  NotionalPercentageOutstanding_27.setString("64.780000");
  msg.set(NotionalPercentageOutstanding_27);
  Instrument_27.insert(NotionalPercentageOutstanding_27.getString());
  FIX::OptAttribute OptAttribute_27('1');
  msg.set(OptAttribute_27);
  Instrument_27.insert(OptAttribute_27.getString());
  FIX::OptPayoutAmount OptPayoutAmount_27;
  OptPayoutAmount_27.setString("82647");
  msg.set(OptPayoutAmount_27);
  Instrument_27.insert(OptPayoutAmount_27.getString());
  FIX::OptPayoutType OptPayoutType_27(1);
  msg.set(OptPayoutType_27);
  Instrument_27.insert(OptPayoutType_27.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_27;
  OriginalNotionalPercentageOutstanding_27.setString("8.680000");
  msg.set(OriginalNotionalPercentageOutstanding_27);
  Instrument_27.insert(OriginalNotionalPercentageOutstanding_27.getString());
  FIX::Pool Pool_27("STRING_1190567970");
  msg.set(Pool_27);
  Instrument_27.insert(Pool_27.getString());
  FIX::PositionLimit PositionLimit_27(175665349);
  msg.set(PositionLimit_27);
  Instrument_27.insert(PositionLimit_27.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_27("STRING_PCTPAR");
  msg.set(PriceQuoteMethod_27);
  Instrument_27.insert(PriceQuoteMethod_27.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_27("STRING_2041437244");
  msg.set(PriceUnitOfMeasure_27);
  Instrument_27.insert(PriceUnitOfMeasure_27.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_27;
  PriceUnitOfMeasureQty_27.setString("21018830");
  msg.set(PriceUnitOfMeasureQty_27);
  Instrument_27.insert(PriceUnitOfMeasureQty_27.getString());
  FIX::Product Product_29(5);
  msg.set(Product_29);
  Instrument_27.insert(Product_29.getString());
  FIX::ProductComplex ProductComplex_27("STRING_128404168");
  msg.set(ProductComplex_27);
  Instrument_27.insert(ProductComplex_27.getString());
  FIX::PutOrCall PutOrCall_27(0);
  msg.set(PutOrCall_27);
  Instrument_27.insert(PutOrCall_27.getString());
  FIX::RedemptionDate RedemptionDate_27("LOCALMKTDATE_713854007");
  msg.set(RedemptionDate_27);
  Instrument_27.insert(RedemptionDate_27.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_27("STRING_1082033733");
  msg.set(RepoCollateralSecurityType_27);
  Instrument_27.insert(RepoCollateralSecurityType_27.getString());
  FIX::RepurchaseRate RepurchaseRate_27;
  RepurchaseRate_27.setString("48.260000");
  msg.set(RepurchaseRate_27);
  Instrument_27.insert(RepurchaseRate_27.getString());
  FIX::RepurchaseTerm RepurchaseTerm_27(2052656698);
  msg.set(RepurchaseTerm_27);
  Instrument_27.insert(RepurchaseTerm_27.getString());
  FIX::RestructuringType RestructuringType_27("STRING_MM");
  msg.set(RestructuringType_27);
  Instrument_27.insert(RestructuringType_27.getString());
  FIX::SecurityDesc SecurityDesc_27("STRING_77997289");
  msg.set(SecurityDesc_27);
  Instrument_27.insert(SecurityDesc_27.getString());
  FIX::SecurityExchange SecurityExchange_27("EXCHANGE_1384870222");
  msg.set(SecurityExchange_27);
  Instrument_27.insert(SecurityExchange_27.getString());
  FIX::SecurityGroup SecurityGroup_27("STRING_2045806014");
  msg.set(SecurityGroup_27);
  Instrument_27.insert(SecurityGroup_27.getString());
  FIX::SecurityID SecurityID_27("STRING_2108870688");
  msg.set(SecurityID_27);
  Instrument_27.insert(SecurityID_27.getString());
  FIX::SecurityIDSource SecurityIDSource_27("STRING_2");
  msg.set(SecurityIDSource_27);
  Instrument_27.insert(SecurityIDSource_27.getString());
  FIX::SecurityStatus SecurityStatus_27("STRING_1");
  msg.set(SecurityStatus_27);
  Instrument_27.insert(SecurityStatus_27.getString());
  FIX::SecuritySubType SecuritySubType_28("STRING_336176084");
  msg.set(SecuritySubType_28);
  Instrument_27.insert(SecuritySubType_28.getString());
  FIX::SecurityType SecurityType_29("STRING_PN");
  msg.set(SecurityType_29);
  Instrument_27.insert(SecurityType_29.getString());
  FIX::Seniority Seniority_27("STRING_SB");
  msg.set(Seniority_27);
  Instrument_27.insert(Seniority_27.getString());
  FIX::SettlMethod SettlMethod_27('C');
  msg.set(SettlMethod_27);
  Instrument_27.insert(SettlMethod_27.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_27("STRING_1374742446");
  msg.set(SettleOnOpenFlag_27);
  Instrument_27.insert(SettleOnOpenFlag_27.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_27("STRING_879463815");
  msg.set(StateOrProvinceOfIssue_27);
  Instrument_27.insert(StateOrProvinceOfIssue_27.getString());
  FIX::StrikeCurrency StrikeCurrency_27("JPY");
  msg.set(StrikeCurrency_27);
  Instrument_27.insert(StrikeCurrency_27.getString());
  FIX::StrikeMultiplier StrikeMultiplier_27;
  StrikeMultiplier_27.setString("4295479");
  msg.set(StrikeMultiplier_27);
  Instrument_27.insert(StrikeMultiplier_27.getString());
  FIX::StrikePrice StrikePrice_27;
  StrikePrice_27.setString("11455266");
  msg.set(StrikePrice_27);
  Instrument_27.insert(StrikePrice_27.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_27(2);
  msg.set(StrikePriceBoundaryMethod_27);
  Instrument_27.insert(StrikePriceBoundaryMethod_27.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_27;
  StrikePriceBoundaryPrecision_27.setString("87.950000");
  msg.set(StrikePriceBoundaryPrecision_27);
  Instrument_27.insert(StrikePriceBoundaryPrecision_27.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_27(4);
  msg.set(StrikePriceDeterminationMethod_27);
  Instrument_27.insert(StrikePriceDeterminationMethod_27.getString());
  FIX::StrikeValue StrikeValue_27;
  StrikeValue_27.setString("11666399");
  msg.set(StrikeValue_27);
  Instrument_27.insert(StrikeValue_27.getString());
  FIX::Symbol Symbol_27("STRING_1522031906");
  msg.set(Symbol_27);
  Instrument_27.insert(Symbol_27.getString());
  FIX::SymbolSfx SymbolSfx_27("STRING_WI");
  msg.set(SymbolSfx_27);
  Instrument_27.insert(SymbolSfx_27.getString());
  FIX::TimeUnit TimeUnit_27("STRING_Min");
  msg.set(TimeUnit_27);
  Instrument_27.insert(TimeUnit_27.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_27(2);
  msg.set(UnderlyingPriceDeterminationMethod_27);
  Instrument_27.insert(UnderlyingPriceDeterminationMethod_27.getString());
  FIX::UnitOfMeasure UnitOfMeasure_27("STRING_Bcf");
  msg.set(UnitOfMeasure_27);
  Instrument_27.insert(UnitOfMeasure_27.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_27;
  UnitOfMeasureQty_27.setString("13966481");
  msg.set(UnitOfMeasureQty_27);
  Instrument_27.insert(UnitOfMeasureQty_27.getString());
  FIX::ValuationMethod ValuationMethod_27("STRING_EQTY");
  msg.set(ValuationMethod_27);
  Instrument_27.insert(ValuationMethod_27.getString());
  all_values.push_back(Instrument_27);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::ExecutionReport::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_56;
    FIX::ComplexEventCondition ComplexEventCondition_56(2);
    noComplexEvents_0_0.set(ComplexEventCondition_56);
    ComplexEvents_NoComplexEvents_56.insert(ComplexEventCondition_56.getString());
    FIX::ComplexEventPrice ComplexEventPrice_56;
    ComplexEventPrice_56.setString("17376167");
    noComplexEvents_0_0.set(ComplexEventPrice_56);
    ComplexEvents_NoComplexEvents_56.insert(ComplexEventPrice_56.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_56(1);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_56);
    ComplexEvents_NoComplexEvents_56.insert(ComplexEventPriceBoundaryMethod_56.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_56;
    ComplexEventPriceBoundaryPrecision_56.setString("66.600000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_56);
    ComplexEvents_NoComplexEvents_56.insert(ComplexEventPriceBoundaryPrecision_56.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_56(3);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_56);
    ComplexEvents_NoComplexEvents_56.insert(ComplexEventPriceTimeType_56.getString());
    FIX::ComplexEventType ComplexEventType_56(3);
    noComplexEvents_0_0.set(ComplexEventType_56);
    ComplexEvents_NoComplexEvents_56.insert(ComplexEventType_56.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_56;
    ComplexOptPayoutAmount_56.setString("12839237");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_56);
    ComplexEvents_NoComplexEvents_56.insert(ComplexOptPayoutAmount_56.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_56);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::ExecutionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_116;
      FIX::ComplexEventEndDate ComplexEventEndDate_116(FIX::UTCTIMESTAMP(17, 2, 37, 21, 9, 2016));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_116);
      ComplexEventDates_NoComplexEventDates_116.insert(ComplexEventEndDate_116.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_116(FIX::UTCTIMESTAMP(16, 59, 49, 21, 4, 2000));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_116);
      ComplexEventDates_NoComplexEventDates_116.insert(ComplexEventStartDate_116.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_116);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::ExecutionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_246;
        FIX::ComplexEventEndTime ComplexEventEndTime_246(FIX::UTCTIMEONLY(19, 41, 38));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_246);
        ComplexEventTimes_NoComplexEventTimes_246.insert(ComplexEventEndTime_246.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_246(FIX::UTCTIMEONLY(13, 10, 56));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_246);
        ComplexEventTimes_NoComplexEventTimes_246.insert(ComplexEventStartTime_246.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_246);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_247;
        FIX::ComplexEventEndTime ComplexEventEndTime_247(FIX::UTCTIMEONLY(20, 43, 48));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_247);
        ComplexEventTimes_NoComplexEventTimes_247.insert(ComplexEventEndTime_247.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_247(FIX::UTCTIMEONLY(5, 1, 36));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_247);
        ComplexEventTimes_NoComplexEventTimes_247.insert(ComplexEventStartTime_247.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_247);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::ExecutionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_248;
        FIX::ComplexEventEndTime ComplexEventEndTime_248(FIX::UTCTIMEONLY(10, 38, 25));
        noComplexEventTimes_0_0_2_2.set(ComplexEventEndTime_248);
        ComplexEventTimes_NoComplexEventTimes_248.insert(ComplexEventEndTime_248.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_248(FIX::UTCTIMEONLY(2, 18, 51));
        noComplexEventTimes_0_0_2_2.set(ComplexEventStartTime_248);
        ComplexEventTimes_NoComplexEventTimes_248.insert(ComplexEventStartTime_248.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_248);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::ExecutionReport::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_49;
    FIX::EventDate EventDate_49("LOCALMKTDATE_928979289");
    noEvents_0_0.set(EventDate_49);
    EvntGrp_NoEvents_49.insert(EventDate_49.getString());
    FIX::EventPx EventPx_49;
    EventPx_49.setString("19570222");
    noEvents_0_0.set(EventPx_49);
    EvntGrp_NoEvents_49.insert(EventPx_49.getString());
    FIX::EventText EventText_49("STRING_1530114243");
    noEvents_0_0.set(EventText_49);
    EvntGrp_NoEvents_49.insert(EventText_49.getString());
    FIX::EventTime EventTime_49(FIX::UTCTIMESTAMP(8, 54, 14, 4, 12, 2010));
    noEvents_0_0.set(EventTime_49);
    EvntGrp_NoEvents_49.insert(EventTime_49.getString());
    FIX::EventType EventType_49(16);
    noEvents_0_0.set(EventType_49);
    EvntGrp_NoEvents_49.insert(EventType_49.getString());
    all_values.push_back(EvntGrp_NoEvents_49);

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::ExecutionReport::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_50;
    FIX::InstrumentPartyID InstrumentPartyID_50("STRING_468160195");
    noInstrumentParties_0_0.set(InstrumentPartyID_50);
    InstrumentParties_NoInstrumentParties_50.insert(InstrumentPartyID_50.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_50('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_50);
    InstrumentParties_NoInstrumentParties_50.insert(InstrumentPartyIDSource_50.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_50(925147021);
    noInstrumentParties_0_0.set(InstrumentPartyRole_50);
    InstrumentParties_NoInstrumentParties_50.insert(InstrumentPartyRole_50.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_50);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::ExecutionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_112;
      FIX::InstrumentPartySubID InstrumentPartySubID_112("STRING_218187319");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_112);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_112.insert(InstrumentPartySubID_112.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_112(250333962);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_112);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_112.insert(InstrumentPartySubIDType_112.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_112);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::ExecutionReport::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_51;
    FIX::InstrumentPartyID InstrumentPartyID_51("STRING_726323856");
    noInstrumentParties_0_1.set(InstrumentPartyID_51);
    InstrumentParties_NoInstrumentParties_51.insert(InstrumentPartyID_51.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_51('1');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_51);
    InstrumentParties_NoInstrumentParties_51.insert(InstrumentPartyIDSource_51.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_51(859444603);
    noInstrumentParties_0_1.set(InstrumentPartyRole_51);
    InstrumentParties_NoInstrumentParties_51.insert(InstrumentPartyRole_51.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_51);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::ExecutionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_113;
      FIX::InstrumentPartySubID InstrumentPartySubID_113("STRING_78622997");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_113);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_113.insert(InstrumentPartySubID_113.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_113(941171381);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_113);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_113.insert(InstrumentPartySubIDType_113.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_113);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_114;
      FIX::InstrumentPartySubID InstrumentPartySubID_114("STRING_1257608263");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_114);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_114.insert(InstrumentPartySubID_114.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_114(901362102);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_114);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_114.insert(InstrumentPartySubIDType_114.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_114);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::ExecutionReport::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_52;
    FIX::InstrumentPartyID InstrumentPartyID_52("STRING_507979760");
    noInstrumentParties_0_2.set(InstrumentPartyID_52);
    InstrumentParties_NoInstrumentParties_52.insert(InstrumentPartyID_52.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_52('4');
    noInstrumentParties_0_2.set(InstrumentPartyIDSource_52);
    InstrumentParties_NoInstrumentParties_52.insert(InstrumentPartyIDSource_52.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_52(488705512);
    noInstrumentParties_0_2.set(InstrumentPartyRole_52);
    InstrumentParties_NoInstrumentParties_52.insert(InstrumentPartyRole_52.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_52);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::ExecutionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_115;
      FIX::InstrumentPartySubID InstrumentPartySubID_115("STRING_317657580");
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubID_115);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_115.insert(InstrumentPartySubID_115.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_115(1417684802);
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubIDType_115);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_115.insert(InstrumentPartySubIDType_115.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_115);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::ExecutionReport::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_57;
    FIX::SecurityAltID SecurityAltID_57("STRING_1847771824");
    noSecurityAltID_0_0.set(SecurityAltID_57);
    SecAltIDGrp_NoSecurityAltID_57.insert(SecurityAltID_57.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_57("STRING_1146271470");
    noSecurityAltID_0_0.set(SecurityAltIDSource_57);
    SecAltIDGrp_NoSecurityAltID_57.insert(SecurityAltIDSource_57.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_57);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::ExecutionReport::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_58;
    FIX::SecurityAltID SecurityAltID_58("STRING_125206617");
    noSecurityAltID_0_1.set(SecurityAltID_58);
    SecAltIDGrp_NoSecurityAltID_58.insert(SecurityAltID_58.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_58("STRING_1913276698");
    noSecurityAltID_0_1.set(SecurityAltIDSource_58);
    SecAltIDGrp_NoSecurityAltID_58.insert(SecurityAltIDSource_58.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_58);

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::ExecutionReport::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_59;
    FIX::SecurityAltID SecurityAltID_59("STRING_1196497424");
    noSecurityAltID_0_2.set(SecurityAltID_59);
    SecAltIDGrp_NoSecurityAltID_59.insert(SecurityAltID_59.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_59("STRING_1782788813");
    noSecurityAltID_0_2.set(SecurityAltIDSource_59);
    SecAltIDGrp_NoSecurityAltID_59.insert(SecurityAltIDSource_59.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_59);

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_54;
  FIX::SecurityXML SecurityXML_55("XMLDATA_1635211586");
  msg.set(SecurityXML_55);
  FIX::SecurityXMLLen SecurityXMLLen_27(539468669);
  msg.set(SecurityXMLLen_27);
  FIX::SecurityXMLSchema SecurityXMLSchema_27("STRING_1395418420");
  msg.set(SecurityXMLSchema_27);
  SecurityXML_54.insert(SecurityXMLSchema_27.getString());
  all_values.push_back(SecurityXML_54);

  // MiscFeesGrp
  // Group MiscFeesGrp.NoMiscFees
  {
    FIX50SP2::ExecutionReport::NoMiscFees noMiscFees_0_0;
    // MiscFeesGrp.NoMiscFees
    multiset<string> MiscFeesGrp_NoMiscFees_20;
    FIX::MiscFeeAmt MiscFeeAmt_20;
    MiscFeeAmt_20.setString("10076288");
    noMiscFees_0_0.set(MiscFeeAmt_20);
    MiscFeesGrp_NoMiscFees_20.insert(MiscFeeAmt_20.getString());
    FIX::MiscFeeBasis MiscFeeBasis_20(1);
    noMiscFees_0_0.set(MiscFeeBasis_20);
    MiscFeesGrp_NoMiscFees_20.insert(MiscFeeBasis_20.getString());
    FIX::MiscFeeCurr MiscFeeCurr_20("EUR");
    noMiscFees_0_0.set(MiscFeeCurr_20);
    MiscFeesGrp_NoMiscFees_20.insert(MiscFeeCurr_20.getString());
    FIX::MiscFeeType MiscFeeType_20("STRING_11");
    noMiscFees_0_0.set(MiscFeeType_20);
    MiscFeesGrp_NoMiscFees_20.insert(MiscFeeType_20.getString());
    all_values.push_back(MiscFeesGrp_NoMiscFees_20);

    msg.addGroup(noMiscFees_0_0);
  }
  {
    FIX50SP2::ExecutionReport::NoMiscFees noMiscFees_0_1;
    // MiscFeesGrp.NoMiscFees
    multiset<string> MiscFeesGrp_NoMiscFees_21;
    FIX::MiscFeeAmt MiscFeeAmt_21;
    MiscFeeAmt_21.setString("14382220");
    noMiscFees_0_1.set(MiscFeeAmt_21);
    MiscFeesGrp_NoMiscFees_21.insert(MiscFeeAmt_21.getString());
    FIX::MiscFeeBasis MiscFeeBasis_21(2);
    noMiscFees_0_1.set(MiscFeeBasis_21);
    MiscFeesGrp_NoMiscFees_21.insert(MiscFeeBasis_21.getString());
    FIX::MiscFeeCurr MiscFeeCurr_21("CAN");
    noMiscFees_0_1.set(MiscFeeCurr_21);
    MiscFeesGrp_NoMiscFees_21.insert(MiscFeeCurr_21.getString());
    FIX::MiscFeeType MiscFeeType_21("STRING_10");
    noMiscFees_0_1.set(MiscFeeType_21);
    MiscFeesGrp_NoMiscFees_21.insert(MiscFeeType_21.getString());
    all_values.push_back(MiscFeesGrp_NoMiscFees_21);

    msg.addGroup(noMiscFees_0_1);
  }
  {
    FIX50SP2::ExecutionReport::NoMiscFees noMiscFees_0_2;
    // MiscFeesGrp.NoMiscFees
    multiset<string> MiscFeesGrp_NoMiscFees_22;
    FIX::MiscFeeAmt MiscFeeAmt_22;
    MiscFeeAmt_22.setString("19888999");
    noMiscFees_0_2.set(MiscFeeAmt_22);
    MiscFeesGrp_NoMiscFees_22.insert(MiscFeeAmt_22.getString());
    FIX::MiscFeeBasis MiscFeeBasis_22(1);
    noMiscFees_0_2.set(MiscFeeBasis_22);
    MiscFeesGrp_NoMiscFees_22.insert(MiscFeeBasis_22.getString());
    FIX::MiscFeeCurr MiscFeeCurr_22("JPY");
    noMiscFees_0_2.set(MiscFeeCurr_22);
    MiscFeesGrp_NoMiscFees_22.insert(MiscFeeCurr_22.getString());
    FIX::MiscFeeType MiscFeeType_22("STRING_12");
    noMiscFees_0_2.set(MiscFeeType_22);
    MiscFeesGrp_NoMiscFees_22.insert(MiscFeeType_22.getString());
    all_values.push_back(MiscFeesGrp_NoMiscFees_22);

    msg.addGroup(noMiscFees_0_2);
  }
  // OrderQtyData
  multiset<string> OrderQtyData_7;
  FIX::CashOrderQty CashOrderQty_7;
  CashOrderQty_7.setString("21388804");
  msg.set(CashOrderQty_7);
  OrderQtyData_7.insert(CashOrderQty_7.getString());
  FIX::OrderPercent OrderPercent_7;
  OrderPercent_7.setString("39.160000");
  msg.set(OrderPercent_7);
  OrderQtyData_7.insert(OrderPercent_7.getString());
  FIX::OrderQty OrderQty_15;
  OrderQty_15.setString("1489821");
  msg.set(OrderQty_15);
  OrderQtyData_7.insert(OrderQty_15.getString());
  FIX::RoundingDirection RoundingDirection_7('0');
  msg.set(RoundingDirection_7);
  OrderQtyData_7.insert(RoundingDirection_7.getString());
  FIX::RoundingModulus RoundingModulus_7;
  RoundingModulus_7.setString("5016850");
  msg.set(RoundingModulus_7);
  OrderQtyData_7.insert(RoundingModulus_7.getString());
  all_values.push_back(OrderQtyData_7);

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::ExecutionReport::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_48;
    FIX::PartyID PartyID_48("STRING_9342551");
    noPartyIDs_0_0.set(PartyID_48);
    Parties_NoPartyIDs_48.insert(PartyID_48.getString());
    FIX::PartyIDSource PartyIDSource_48('9');
    noPartyIDs_0_0.set(PartyIDSource_48);
    Parties_NoPartyIDs_48.insert(PartyIDSource_48.getString());
    FIX::PartyRole PartyRole_48(30);
    noPartyIDs_0_0.set(PartyRole_48);
    Parties_NoPartyIDs_48.insert(PartyRole_48.getString());
    all_values.push_back(Parties_NoPartyIDs_48);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::ExecutionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_100;
      FIX::PartySubID PartySubID_100("STRING_696970317");
      noPartySubIDs_0_1_0.set(PartySubID_100);
      PtysSubGrp_NoPartySubIDs_100.insert(PartySubID_100.getString());
      FIX::PartySubIDType PartySubIDType_100(2);
      noPartySubIDs_0_1_0.set(PartySubIDType_100);
      PtysSubGrp_NoPartySubIDs_100.insert(PartySubIDType_100.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_100);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::ExecutionReport::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_49;
    FIX::PartyID PartyID_49("STRING_1410347187");
    noPartyIDs_0_1.set(PartyID_49);
    Parties_NoPartyIDs_49.insert(PartyID_49.getString());
    FIX::PartyIDSource PartyIDSource_49('E');
    noPartyIDs_0_1.set(PartyIDSource_49);
    Parties_NoPartyIDs_49.insert(PartyIDSource_49.getString());
    FIX::PartyRole PartyRole_49(19);
    noPartyIDs_0_1.set(PartyRole_49);
    Parties_NoPartyIDs_49.insert(PartyRole_49.getString());
    all_values.push_back(Parties_NoPartyIDs_49);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::ExecutionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_101;
      FIX::PartySubID PartySubID_101("STRING_96584202");
      noPartySubIDs_1_1_0.set(PartySubID_101);
      PtysSubGrp_NoPartySubIDs_101.insert(PartySubID_101.getString());
      FIX::PartySubIDType PartySubIDType_101(29);
      noPartySubIDs_1_1_0.set(PartySubIDType_101);
      PtysSubGrp_NoPartySubIDs_101.insert(PartySubIDType_101.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_101);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_102;
      FIX::PartySubID PartySubID_102("STRING_713492623");
      noPartySubIDs_1_1_1.set(PartySubID_102);
      PtysSubGrp_NoPartySubIDs_102.insert(PartySubID_102.getString());
      FIX::PartySubIDType PartySubIDType_102(6);
      noPartySubIDs_1_1_1.set(PartySubIDType_102);
      PtysSubGrp_NoPartySubIDs_102.insert(PartySubIDType_102.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_102);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::ExecutionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_103;
      FIX::PartySubID PartySubID_103("STRING_394482326");
      noPartySubIDs_1_1_2.set(PartySubID_103);
      PtysSubGrp_NoPartySubIDs_103.insert(PartySubID_103.getString());
      FIX::PartySubIDType PartySubIDType_103(27);
      noPartySubIDs_1_1_2.set(PartySubIDType_103);
      PtysSubGrp_NoPartySubIDs_103.insert(PartySubIDType_103.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_103);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_2);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  // PegInstructions
  multiset<string> PegInstructions_1;
  FIX::PegLimitType PegLimitType_1(1);
  msg.set(PegLimitType_1);
  PegInstructions_1.insert(PegLimitType_1.getString());
  FIX::PegMoveType PegMoveType_1(1);
  msg.set(PegMoveType_1);
  PegInstructions_1.insert(PegMoveType_1.getString());
  FIX::PegOffsetType PegOffsetType_1(3);
  msg.set(PegOffsetType_1);
  PegInstructions_1.insert(PegOffsetType_1.getString());
  FIX::PegOffsetValue PegOffsetValue_1;
  PegOffsetValue_1.setString("13401738");
  msg.set(PegOffsetValue_1);
  PegInstructions_1.insert(PegOffsetValue_1.getString());
  FIX::PegPriceType PegPriceType_1(5);
  msg.set(PegPriceType_1);
  PegInstructions_1.insert(PegPriceType_1.getString());
  FIX::PegRoundDirection PegRoundDirection_1(2);
  msg.set(PegRoundDirection_1);
  PegInstructions_1.insert(PegRoundDirection_1.getString());
  FIX::PegScope PegScope_1(4);
  msg.set(PegScope_1);
  PegInstructions_1.insert(PegScope_1.getString());
  FIX::PegSecurityDesc PegSecurityDesc_1("STRING_741470336");
  msg.set(PegSecurityDesc_1);
  PegInstructions_1.insert(PegSecurityDesc_1.getString());
  FIX::PegSecurityID PegSecurityID_1("STRING_697618772");
  msg.set(PegSecurityID_1);
  PegInstructions_1.insert(PegSecurityID_1.getString());
  FIX::PegSecurityIDSource PegSecurityIDSource_1("STRING_871706126");
  msg.set(PegSecurityIDSource_1);
  PegInstructions_1.insert(PegSecurityIDSource_1.getString());
  FIX::PegSymbol PegSymbol_1("STRING_1972954253");
  msg.set(PegSymbol_1);
  PegInstructions_1.insert(PegSymbol_1.getString());
  all_values.push_back(PegInstructions_1);

  // PreAllocGrp
  // Group PreAllocGrp.NoAllocs
  {
    FIX50SP2::ExecutionReport::NoAllocs noAllocs_0_0;
    // PreAllocGrp.NoAllocs
    multiset<string> PreAllocGrp_NoAllocs_6;
    FIX::AllocAccount AllocAccount_16("STRING_1180760501");
    noAllocs_0_0.set(AllocAccount_16);
    PreAllocGrp_NoAllocs_6.insert(AllocAccount_16.getString());
    FIX::AllocAcctIDSource AllocAcctIDSource_16(327155675);
    noAllocs_0_0.set(AllocAcctIDSource_16);
    PreAllocGrp_NoAllocs_6.insert(AllocAcctIDSource_16.getString());
    FIX::AllocQty AllocQty_15;
    AllocQty_15.setString("15022535");
    noAllocs_0_0.set(AllocQty_15);
    PreAllocGrp_NoAllocs_6.insert(AllocQty_15.getString());
    FIX::AllocSettlCurrency AllocSettlCurrency_11("GBP");
    noAllocs_0_0.set(AllocSettlCurrency_11);
    PreAllocGrp_NoAllocs_6.insert(AllocSettlCurrency_11.getString());
    FIX::IndividualAllocID IndividualAllocID_16("STRING_135629015");
    noAllocs_0_0.set(IndividualAllocID_16);
    PreAllocGrp_NoAllocs_6.insert(IndividualAllocID_16.getString());
    all_values.push_back(PreAllocGrp_NoAllocs_6);

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::ExecutionReport::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_50;
      FIX::NestedPartyID NestedPartyID_50("STRING_524598886");
      noNestedPartyIDs_0_1_0.set(NestedPartyID_50);
      NestedParties_NoNestedPartyIDs_50.insert(NestedPartyID_50.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_50('5');
      noNestedPartyIDs_0_1_0.set(NestedPartyIDSource_50);
      NestedParties_NoNestedPartyIDs_50.insert(NestedPartyIDSource_50.getString());
      FIX::NestedPartyRole NestedPartyRole_50(228102193);
      noNestedPartyIDs_0_1_0.set(NestedPartyRole_50);
      NestedParties_NoNestedPartyIDs_50.insert(NestedPartyRole_50.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_50);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::ExecutionReport::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_105;
        FIX::NestedPartySubID NestedPartySubID_105("STRING_215892431");
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubID_105);
        NstdPtysSubGrp_NoNestedPartySubIDs_105.insert(NestedPartySubID_105.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_105(1901190411);
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubIDType_105);
        NstdPtysSubGrp_NoNestedPartySubIDs_105.insert(NestedPartySubIDType_105.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_105);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_51;
      FIX::NestedPartyID NestedPartyID_51("STRING_1857622075");
      noNestedPartyIDs_0_1_1.set(NestedPartyID_51);
      NestedParties_NoNestedPartyIDs_51.insert(NestedPartyID_51.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_51('1');
      noNestedPartyIDs_0_1_1.set(NestedPartyIDSource_51);
      NestedParties_NoNestedPartyIDs_51.insert(NestedPartyIDSource_51.getString());
      FIX::NestedPartyRole NestedPartyRole_51(467199386);
      noNestedPartyIDs_0_1_1.set(NestedPartyRole_51);
      NestedParties_NoNestedPartyIDs_51.insert(NestedPartyRole_51.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_51);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::ExecutionReport::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_106;
        FIX::NestedPartySubID NestedPartySubID_106("STRING_530571808");
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubID_106);
        NstdPtysSubGrp_NoNestedPartySubIDs_106.insert(NestedPartySubID_106.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_106(471430376);
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubIDType_106);
        NstdPtysSubGrp_NoNestedPartySubIDs_106.insert(NestedPartySubIDType_106.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_106);

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_1);
    }
    {
      FIX50SP2::ExecutionReport::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_52;
      FIX::NestedPartyID NestedPartyID_52("STRING_760512959");
      noNestedPartyIDs_0_1_2.set(NestedPartyID_52);
      NestedParties_NoNestedPartyIDs_52.insert(NestedPartyID_52.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_52('6');
      noNestedPartyIDs_0_1_2.set(NestedPartyIDSource_52);
      NestedParties_NoNestedPartyIDs_52.insert(NestedPartyIDSource_52.getString());
      FIX::NestedPartyRole NestedPartyRole_52(625844335);
      noNestedPartyIDs_0_1_2.set(NestedPartyRole_52);
      NestedParties_NoNestedPartyIDs_52.insert(NestedPartyRole_52.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_52);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::ExecutionReport::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_107;
        FIX::NestedPartySubID NestedPartySubID_107("STRING_686539371");
        noNestedPartySubIDs_0_2_2_0.set(NestedPartySubID_107);
        NstdPtysSubGrp_NoNestedPartySubIDs_107.insert(NestedPartySubID_107.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_107(1871612644);
        noNestedPartySubIDs_0_2_2_0.set(NestedPartySubIDType_107);
        NstdPtysSubGrp_NoNestedPartySubIDs_107.insert(NestedPartySubIDType_107.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_107);

        noNestedPartyIDs_0_1_2.addGroup(noNestedPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_108;
        FIX::NestedPartySubID NestedPartySubID_108("STRING_833512453");
        noNestedPartySubIDs_0_2_2_1.set(NestedPartySubID_108);
        NstdPtysSubGrp_NoNestedPartySubIDs_108.insert(NestedPartySubID_108.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_108(1428009708);
        noNestedPartySubIDs_0_2_2_1.set(NestedPartySubIDType_108);
        NstdPtysSubGrp_NoNestedPartySubIDs_108.insert(NestedPartySubIDType_108.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_108);

        noNestedPartyIDs_0_1_2.addGroup(noNestedPartySubIDs_0_2_2_1);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_2);
    }
    msg.addGroup(noAllocs_0_0);
  }
  {
    FIX50SP2::ExecutionReport::NoAllocs noAllocs_0_1;
    // PreAllocGrp.NoAllocs
    multiset<string> PreAllocGrp_NoAllocs_7;
    FIX::AllocAccount AllocAccount_17("STRING_421747769");
    noAllocs_0_1.set(AllocAccount_17);
    PreAllocGrp_NoAllocs_7.insert(AllocAccount_17.getString());
    FIX::AllocAcctIDSource AllocAcctIDSource_17(1705218579);
    noAllocs_0_1.set(AllocAcctIDSource_17);
    PreAllocGrp_NoAllocs_7.insert(AllocAcctIDSource_17.getString());
    FIX::AllocQty AllocQty_16;
    AllocQty_16.setString("12534803");
    noAllocs_0_1.set(AllocQty_16);
    PreAllocGrp_NoAllocs_7.insert(AllocQty_16.getString());
    FIX::AllocSettlCurrency AllocSettlCurrency_12("USD");
    noAllocs_0_1.set(AllocSettlCurrency_12);
    PreAllocGrp_NoAllocs_7.insert(AllocSettlCurrency_12.getString());
    FIX::IndividualAllocID IndividualAllocID_17("STRING_1580635988");
    noAllocs_0_1.set(IndividualAllocID_17);
    PreAllocGrp_NoAllocs_7.insert(IndividualAllocID_17.getString());
    all_values.push_back(PreAllocGrp_NoAllocs_7);

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::ExecutionReport::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_53;
      FIX::NestedPartyID NestedPartyID_53("STRING_1928598484");
      noNestedPartyIDs_1_1_0.set(NestedPartyID_53);
      NestedParties_NoNestedPartyIDs_53.insert(NestedPartyID_53.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_53('1');
      noNestedPartyIDs_1_1_0.set(NestedPartyIDSource_53);
      NestedParties_NoNestedPartyIDs_53.insert(NestedPartyIDSource_53.getString());
      FIX::NestedPartyRole NestedPartyRole_53(758747611);
      noNestedPartyIDs_1_1_0.set(NestedPartyRole_53);
      NestedParties_NoNestedPartyIDs_53.insert(NestedPartyRole_53.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_53);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::ExecutionReport::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_109;
        FIX::NestedPartySubID NestedPartySubID_109("STRING_1932863443");
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubID_109);
        NstdPtysSubGrp_NoNestedPartySubIDs_109.insert(NestedPartySubID_109.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_109(1310540948);
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubIDType_109);
        NstdPtysSubGrp_NoNestedPartySubIDs_109.insert(NestedPartySubIDType_109.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_109);

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_110;
        FIX::NestedPartySubID NestedPartySubID_110("STRING_974455683");
        noNestedPartySubIDs_1_0_2_1.set(NestedPartySubID_110);
        NstdPtysSubGrp_NoNestedPartySubIDs_110.insert(NestedPartySubID_110.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_110(1546417667);
        noNestedPartySubIDs_1_0_2_1.set(NestedPartySubIDType_110);
        NstdPtysSubGrp_NoNestedPartySubIDs_110.insert(NestedPartySubIDType_110.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_110);

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::ExecutionReport::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_111;
        FIX::NestedPartySubID NestedPartySubID_111("STRING_1526433379");
        noNestedPartySubIDs_1_0_2_2.set(NestedPartySubID_111);
        NstdPtysSubGrp_NoNestedPartySubIDs_111.insert(NestedPartySubID_111.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_111(728162446);
        noNestedPartySubIDs_1_0_2_2.set(NestedPartySubIDType_111);
        NstdPtysSubGrp_NoNestedPartySubIDs_111.insert(NestedPartySubIDType_111.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_111);

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_2);
      }
      noAllocs_0_1.addGroup(noNestedPartyIDs_1_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_54;
      FIX::NestedPartyID NestedPartyID_54("STRING_1256556094");
      noNestedPartyIDs_1_1_1.set(NestedPartyID_54);
      NestedParties_NoNestedPartyIDs_54.insert(NestedPartyID_54.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_54('1');
      noNestedPartyIDs_1_1_1.set(NestedPartyIDSource_54);
      NestedParties_NoNestedPartyIDs_54.insert(NestedPartyIDSource_54.getString());
      FIX::NestedPartyRole NestedPartyRole_54(1195361833);
      noNestedPartyIDs_1_1_1.set(NestedPartyRole_54);
      NestedParties_NoNestedPartyIDs_54.insert(NestedPartyRole_54.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_54);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::ExecutionReport::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_112;
        FIX::NestedPartySubID NestedPartySubID_112("STRING_45611020");
        noNestedPartySubIDs_1_1_2_0.set(NestedPartySubID_112);
        NstdPtysSubGrp_NoNestedPartySubIDs_112.insert(NestedPartySubID_112.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_112(1666792209);
        noNestedPartySubIDs_1_1_2_0.set(NestedPartySubIDType_112);
        NstdPtysSubGrp_NoNestedPartySubIDs_112.insert(NestedPartySubIDType_112.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_112);

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_113;
        FIX::NestedPartySubID NestedPartySubID_113("STRING_1867419106");
        noNestedPartySubIDs_1_1_2_1.set(NestedPartySubID_113);
        NstdPtysSubGrp_NoNestedPartySubIDs_113.insert(NestedPartySubID_113.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_113(733458459);
        noNestedPartySubIDs_1_1_2_1.set(NestedPartySubIDType_113);
        NstdPtysSubGrp_NoNestedPartySubIDs_113.insert(NestedPartySubIDType_113.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_113);

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::ExecutionReport::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_114;
        FIX::NestedPartySubID NestedPartySubID_114("STRING_145152896");
        noNestedPartySubIDs_1_1_2_2.set(NestedPartySubID_114);
        NstdPtysSubGrp_NoNestedPartySubIDs_114.insert(NestedPartySubID_114.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_114(1820622228);
        noNestedPartySubIDs_1_1_2_2.set(NestedPartySubIDType_114);
        NstdPtysSubGrp_NoNestedPartySubIDs_114.insert(NestedPartySubIDType_114.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_114);

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_2);
      }
      noAllocs_0_1.addGroup(noNestedPartyIDs_1_1_1);
    }
    msg.addGroup(noAllocs_0_1);
  }
  // RateSource
  // Group RateSource.NoRateSources
  {
    FIX50SP2::ExecutionReport::NoRateSources noRateSources_0_0;
    // RateSource.NoRateSources
    multiset<string> RateSource_NoRateSources_4;
    FIX::RateSource RateSource_7(0);
    noRateSources_0_0.set(RateSource_7);
    RateSource_NoRateSources_4.insert(RateSource_7.getString());
    FIX::RateSourceType RateSourceType_4(0);
    noRateSources_0_0.set(RateSourceType_4);
    RateSource_NoRateSources_4.insert(RateSourceType_4.getString());
    FIX::ReferencePage ReferencePage_4("STRING_700523891");
    noRateSources_0_0.set(ReferencePage_4);
    RateSource_NoRateSources_4.insert(ReferencePage_4.getString());
    all_values.push_back(RateSource_NoRateSources_4);

    msg.addGroup(noRateSources_0_0);
  }
  {
    FIX50SP2::ExecutionReport::NoRateSources noRateSources_0_1;
    // RateSource.NoRateSources
    multiset<string> RateSource_NoRateSources_5;
    FIX::RateSource RateSource_8(1);
    noRateSources_0_1.set(RateSource_8);
    RateSource_NoRateSources_5.insert(RateSource_8.getString());
    FIX::RateSourceType RateSourceType_5(1);
    noRateSources_0_1.set(RateSourceType_5);
    RateSource_NoRateSources_5.insert(RateSourceType_5.getString());
    FIX::ReferencePage ReferencePage_5("STRING_1954004204");
    noRateSources_0_1.set(ReferencePage_5);
    RateSource_NoRateSources_5.insert(ReferencePage_5.getString());
    all_values.push_back(RateSource_NoRateSources_5);

    msg.addGroup(noRateSources_0_1);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_10;
  FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_10("GBP");
  msg.set(BenchmarkCurveCurrency_10);
  SpreadOrBenchmarkCurveData_10.insert(BenchmarkCurveCurrency_10.getString());
  FIX::BenchmarkCurveName BenchmarkCurveName_10("STRING_Pfandbriefe");
  msg.set(BenchmarkCurveName_10);
  SpreadOrBenchmarkCurveData_10.insert(BenchmarkCurveName_10.getString());
  FIX::BenchmarkCurvePoint BenchmarkCurvePoint_10("STRING_35013345");
  msg.set(BenchmarkCurvePoint_10);
  SpreadOrBenchmarkCurveData_10.insert(BenchmarkCurvePoint_10.getString());
  FIX::BenchmarkPrice BenchmarkPrice_10;
  BenchmarkPrice_10.setString("5839962");
  msg.set(BenchmarkPrice_10);
  SpreadOrBenchmarkCurveData_10.insert(BenchmarkPrice_10.getString());
  FIX::BenchmarkPriceType BenchmarkPriceType_10(647937453);
  msg.set(BenchmarkPriceType_10);
  SpreadOrBenchmarkCurveData_10.insert(BenchmarkPriceType_10.getString());
  FIX::BenchmarkSecurityID BenchmarkSecurityID_10("STRING_793760956");
  msg.set(BenchmarkSecurityID_10);
  SpreadOrBenchmarkCurveData_10.insert(BenchmarkSecurityID_10.getString());
  FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_10("STRING_1330349724");
  msg.set(BenchmarkSecurityIDSource_10);
  SpreadOrBenchmarkCurveData_10.insert(BenchmarkSecurityIDSource_10.getString());
  FIX::Spread Spread_10;
  Spread_10.setString("4333172");
  msg.set(Spread_10);
  SpreadOrBenchmarkCurveData_10.insert(Spread_10.getString());
  all_values.push_back(SpreadOrBenchmarkCurveData_10);

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::ExecutionReport::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_19;
    FIX::StipulationType StipulationType_19("STRING_SMM");
    noStipulations_0_0.set(StipulationType_19);
    Stipulations_NoStipulations_19.insert(StipulationType_19.getString());
    FIX::StipulationValue StipulationValue_19("STRING_1979734916");
    noStipulations_0_0.set(StipulationValue_19);
    Stipulations_NoStipulations_19.insert(StipulationValue_19.getString());
    all_values.push_back(Stipulations_NoStipulations_19);

    msg.addGroup(noStipulations_0_0);
  }
  // StrategyParametersGrp
  // Group StrategyParametersGrp.NoStrategyParameters
  {
    FIX50SP2::ExecutionReport::NoStrategyParameters noStrategyParameters_0_0;
    // StrategyParametersGrp.NoStrategyParameters
    multiset<string> StrategyParametersGrp_NoStrategyParameters_2;
    FIX::StrategyParameterName StrategyParameterName_2("STRING_885484206");
    noStrategyParameters_0_0.set(StrategyParameterName_2);
    StrategyParametersGrp_NoStrategyParameters_2.insert(StrategyParameterName_2.getString());
    FIX::StrategyParameterType StrategyParameterType_2(14);
    noStrategyParameters_0_0.set(StrategyParameterType_2);
    StrategyParametersGrp_NoStrategyParameters_2.insert(StrategyParameterType_2.getString());
    FIX::StrategyParameterValue StrategyParameterValue_2("STRING_998290848");
    noStrategyParameters_0_0.set(StrategyParameterValue_2);
    StrategyParametersGrp_NoStrategyParameters_2.insert(StrategyParameterValue_2.getString());
    all_values.push_back(StrategyParametersGrp_NoStrategyParameters_2);

    msg.addGroup(noStrategyParameters_0_0);
  }
  {
    FIX50SP2::ExecutionReport::NoStrategyParameters noStrategyParameters_0_1;
    // StrategyParametersGrp.NoStrategyParameters
    multiset<string> StrategyParametersGrp_NoStrategyParameters_3;
    FIX::StrategyParameterName StrategyParameterName_3("STRING_2080846039");
    noStrategyParameters_0_1.set(StrategyParameterName_3);
    StrategyParametersGrp_NoStrategyParameters_3.insert(StrategyParameterName_3.getString());
    FIX::StrategyParameterType StrategyParameterType_3(21);
    noStrategyParameters_0_1.set(StrategyParameterType_3);
    StrategyParametersGrp_NoStrategyParameters_3.insert(StrategyParameterType_3.getString());
    FIX::StrategyParameterValue StrategyParameterValue_3("STRING_1043901868");
    noStrategyParameters_0_1.set(StrategyParameterValue_3);
    StrategyParametersGrp_NoStrategyParameters_3.insert(StrategyParameterValue_3.getString());
    all_values.push_back(StrategyParametersGrp_NoStrategyParameters_3);

    msg.addGroup(noStrategyParameters_0_1);
  }
  {
    FIX50SP2::ExecutionReport::NoStrategyParameters noStrategyParameters_0_2;
    // StrategyParametersGrp.NoStrategyParameters
    multiset<string> StrategyParametersGrp_NoStrategyParameters_4;
    FIX::StrategyParameterName StrategyParameterName_4("STRING_1600154600");
    noStrategyParameters_0_2.set(StrategyParameterName_4);
    StrategyParametersGrp_NoStrategyParameters_4.insert(StrategyParameterName_4.getString());
    FIX::StrategyParameterType StrategyParameterType_4(29);
    noStrategyParameters_0_2.set(StrategyParameterType_4);
    StrategyParametersGrp_NoStrategyParameters_4.insert(StrategyParameterType_4.getString());
    FIX::StrategyParameterValue StrategyParameterValue_4("STRING_1777360328");
    noStrategyParameters_0_2.set(StrategyParameterValue_4);
    StrategyParametersGrp_NoStrategyParameters_4.insert(StrategyParameterValue_4.getString());
    all_values.push_back(StrategyParametersGrp_NoStrategyParameters_4);

    msg.addGroup(noStrategyParameters_0_2);
  }
  // TrdRegTimestamps
  // Group TrdRegTimestamps.NoTrdRegTimestamps
  {
    FIX50SP2::ExecutionReport::NoTrdRegTimestamps noTrdRegTimestamps_0_0;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_13;
    FIX::DeskOrderHandlingInst DeskOrderHandlingInst_13("MULTIPLESTRINGVALUE_FOK");
    noTrdRegTimestamps_0_0.set(DeskOrderHandlingInst_13);
    TrdRegTimestamps_NoTrdRegTimestamps_13.insert(DeskOrderHandlingInst_13.getString());
    FIX::DeskType DeskType_13("STRING_IS");
    noTrdRegTimestamps_0_0.set(DeskType_13);
    TrdRegTimestamps_NoTrdRegTimestamps_13.insert(DeskType_13.getString());
    FIX::DeskTypeSource DeskTypeSource_13(1);
    noTrdRegTimestamps_0_0.set(DeskTypeSource_13);
    TrdRegTimestamps_NoTrdRegTimestamps_13.insert(DeskTypeSource_13.getString());
    FIX::TrdRegTimestamp TrdRegTimestamp_13(FIX::UTCTIMESTAMP(18, 30, 40, 14, 9, 2012));
    noTrdRegTimestamps_0_0.set(TrdRegTimestamp_13);
    TrdRegTimestamps_NoTrdRegTimestamps_13.insert(TrdRegTimestamp_13.getString());
    FIX::TrdRegTimestampOrigin TrdRegTimestampOrigin_13("STRING_796591854");
    noTrdRegTimestamps_0_0.set(TrdRegTimestampOrigin_13);
    TrdRegTimestamps_NoTrdRegTimestamps_13.insert(TrdRegTimestampOrigin_13.getString());
    FIX::TrdRegTimestampType TrdRegTimestampType_13(5);
    noTrdRegTimestamps_0_0.set(TrdRegTimestampType_13);
    TrdRegTimestamps_NoTrdRegTimestamps_13.insert(TrdRegTimestampType_13.getString());
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_13);

    msg.addGroup(noTrdRegTimestamps_0_0);
  }
  {
    FIX50SP2::ExecutionReport::NoTrdRegTimestamps noTrdRegTimestamps_0_1;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_14;
    FIX::DeskOrderHandlingInst DeskOrderHandlingInst_14("MULTIPLESTRINGVALUE_FOK");
    noTrdRegTimestamps_0_1.set(DeskOrderHandlingInst_14);
    TrdRegTimestamps_NoTrdRegTimestamps_14.insert(DeskOrderHandlingInst_14.getString());
    FIX::DeskType DeskType_14("STRING_D");
    noTrdRegTimestamps_0_1.set(DeskType_14);
    TrdRegTimestamps_NoTrdRegTimestamps_14.insert(DeskType_14.getString());
    FIX::DeskTypeSource DeskTypeSource_14(1);
    noTrdRegTimestamps_0_1.set(DeskTypeSource_14);
    TrdRegTimestamps_NoTrdRegTimestamps_14.insert(DeskTypeSource_14.getString());
    FIX::TrdRegTimestamp TrdRegTimestamp_14(FIX::UTCTIMESTAMP(12, 38, 29, 8, 7, 2011));
    noTrdRegTimestamps_0_1.set(TrdRegTimestamp_14);
    TrdRegTimestamps_NoTrdRegTimestamps_14.insert(TrdRegTimestamp_14.getString());
    FIX::TrdRegTimestampOrigin TrdRegTimestampOrigin_14("STRING_651421539");
    noTrdRegTimestamps_0_1.set(TrdRegTimestampOrigin_14);
    TrdRegTimestamps_NoTrdRegTimestamps_14.insert(TrdRegTimestampOrigin_14.getString());
    FIX::TrdRegTimestampType TrdRegTimestampType_14(1);
    noTrdRegTimestamps_0_1.set(TrdRegTimestampType_14);
    TrdRegTimestamps_NoTrdRegTimestamps_14.insert(TrdRegTimestampType_14.getString());
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_14);

    msg.addGroup(noTrdRegTimestamps_0_1);
  }
  // TriggeringInstruction
  multiset<string> TriggeringInstruction_1;
  FIX::TriggerAction TriggerAction_1('2');
  msg.set(TriggerAction_1);
  TriggeringInstruction_1.insert(TriggerAction_1.getString());
  FIX::TriggerNewPrice TriggerNewPrice_1;
  TriggerNewPrice_1.setString("6996514");
  msg.set(TriggerNewPrice_1);
  TriggeringInstruction_1.insert(TriggerNewPrice_1.getString());
  FIX::TriggerNewQty TriggerNewQty_1;
  TriggerNewQty_1.setString("13335834");
  msg.set(TriggerNewQty_1);
  TriggeringInstruction_1.insert(TriggerNewQty_1.getString());
  FIX::TriggerOrderType TriggerOrderType_1('1');
  msg.set(TriggerOrderType_1);
  TriggeringInstruction_1.insert(TriggerOrderType_1.getString());
  FIX::TriggerPrice TriggerPrice_1;
  TriggerPrice_1.setString("4678167");
  msg.set(TriggerPrice_1);
  TriggeringInstruction_1.insert(TriggerPrice_1.getString());
  FIX::TriggerPriceDirection TriggerPriceDirection_1('U');
  msg.set(TriggerPriceDirection_1);
  TriggeringInstruction_1.insert(TriggerPriceDirection_1.getString());
  FIX::TriggerPriceType TriggerPriceType_1('1');
  msg.set(TriggerPriceType_1);
  TriggeringInstruction_1.insert(TriggerPriceType_1.getString());
  FIX::TriggerPriceTypeScope TriggerPriceTypeScope_1('2');
  msg.set(TriggerPriceTypeScope_1);
  TriggeringInstruction_1.insert(TriggerPriceTypeScope_1.getString());
  FIX::TriggerSecurityDesc TriggerSecurityDesc_1("STRING_2013334605");
  msg.set(TriggerSecurityDesc_1);
  TriggeringInstruction_1.insert(TriggerSecurityDesc_1.getString());
  FIX::TriggerSecurityID TriggerSecurityID_1("STRING_75853506");
  msg.set(TriggerSecurityID_1);
  TriggeringInstruction_1.insert(TriggerSecurityID_1.getString());
  FIX::TriggerSecurityIDSource TriggerSecurityIDSource_1("STRING_2004559205");
  msg.set(TriggerSecurityIDSource_1);
  TriggeringInstruction_1.insert(TriggerSecurityIDSource_1.getString());
  FIX::TriggerSymbol TriggerSymbol_1("STRING_1616249359");
  msg.set(TriggerSymbol_1);
  TriggeringInstruction_1.insert(TriggerSymbol_1.getString());
  FIX::TriggerTradingSessionID TriggerTradingSessionID_1("STRING_1981472556");
  msg.set(TriggerTradingSessionID_1);
  TriggeringInstruction_1.insert(TriggerTradingSessionID_1.getString());
  FIX::TriggerTradingSessionSubID TriggerTradingSessionSubID_1("STRING_2016900106");
  msg.set(TriggerTradingSessionSubID_1);
  TriggeringInstruction_1.insert(TriggerTradingSessionSubID_1.getString());
  FIX::TriggerType TriggerType_1('2');
  msg.set(TriggerType_1);
  TriggeringInstruction_1.insert(TriggerType_1.getString());
  all_values.push_back(TriggeringInstruction_1);

  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::ExecutionReport::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_40;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_40("DATA_684638756");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_40);
    UnderlyingInstrument_40.insert(EncodedUnderlyingIssuer_40.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_40(1822276524);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_40);
    UnderlyingInstrument_40.insert(EncodedUnderlyingIssuerLen_40.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_40("DATA_356546206");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_40);
    UnderlyingInstrument_40.insert(EncodedUnderlyingSecurityDesc_40.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_40(2083857289);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_40);
    UnderlyingInstrument_40.insert(EncodedUnderlyingSecurityDescLen_40.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_40;
    UnderlyingAdjustedQuantity_40.setString("11193221");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_40);
    UnderlyingInstrument_40.insert(UnderlyingAdjustedQuantity_40.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_40;
    UnderlyingAllocationPercent_40.setString("6.600000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_40);
    UnderlyingInstrument_40.insert(UnderlyingAllocationPercent_40.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_40;
    UnderlyingAttachmentPoint_40.setString("82.510000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_40);
    UnderlyingInstrument_40.insert(UnderlyingAttachmentPoint_40.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_40("STRING_849685092");
    noUnderlyings_0_0.set(UnderlyingCFICode_40);
    UnderlyingInstrument_40.insert(UnderlyingCFICode_40.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_40("STRING_310973370");
    noUnderlyings_0_0.set(UnderlyingCPProgram_40);
    UnderlyingInstrument_40.insert(UnderlyingCPProgram_40.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_40("STRING_1257864620");
    noUnderlyings_0_0.set(UnderlyingCPRegType_40);
    UnderlyingInstrument_40.insert(UnderlyingCPRegType_40.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_40;
    UnderlyingCapValue_40.setString("4122992");
    noUnderlyings_0_0.set(UnderlyingCapValue_40);
    UnderlyingInstrument_40.insert(UnderlyingCapValue_40.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_40;
    UnderlyingCashAmount_40.setString("17498477");
    noUnderlyings_0_0.set(UnderlyingCashAmount_40);
    UnderlyingInstrument_40.insert(UnderlyingCashAmount_40.getString());
    FIX::UnderlyingCashType UnderlyingCashType_40("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_40);
    UnderlyingInstrument_40.insert(UnderlyingCashType_40.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_40;
    UnderlyingContractMultiplier_40.setString("10637208");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_40);
    UnderlyingInstrument_40.insert(UnderlyingContractMultiplier_40.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_40(2039529262);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_40);
    UnderlyingInstrument_40.insert(UnderlyingContractMultiplierUnit_40.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_40("COUNTRY_146040865");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_40);
    UnderlyingInstrument_40.insert(UnderlyingCountryOfIssue_40.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_40("LOCALMKTDATE_1763372209");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_40);
    UnderlyingInstrument_40.insert(UnderlyingCouponPaymentDate_40.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_40;
    UnderlyingCouponRate_40.setString("90.290000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_40);
    UnderlyingInstrument_40.insert(UnderlyingCouponRate_40.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_40("STRING_1156964783");
    noUnderlyings_0_0.set(UnderlyingCreditRating_40);
    UnderlyingInstrument_40.insert(UnderlyingCreditRating_40.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_40("CAN");
    noUnderlyings_0_0.set(UnderlyingCurrency_40);
    UnderlyingInstrument_40.insert(UnderlyingCurrency_40.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_40;
    UnderlyingCurrentValue_40.setString("17657125");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_40);
    UnderlyingInstrument_40.insert(UnderlyingCurrentValue_40.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_40;
    UnderlyingDetachmentPoint_40.setString("95.530000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_40);
    UnderlyingInstrument_40.insert(UnderlyingDetachmentPoint_40.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_40;
    UnderlyingDirtyPrice_40.setString("20549400");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_40);
    UnderlyingInstrument_40.insert(UnderlyingDirtyPrice_40.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_40;
    UnderlyingEndPrice_40.setString("18415660");
    noUnderlyings_0_0.set(UnderlyingEndPrice_40);
    UnderlyingInstrument_40.insert(UnderlyingEndPrice_40.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_40;
    UnderlyingEndValue_40.setString("19973851");
    noUnderlyings_0_0.set(UnderlyingEndValue_40);
    UnderlyingInstrument_40.insert(UnderlyingEndValue_40.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_40(1523705792);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_40);
    UnderlyingInstrument_40.insert(UnderlyingExerciseStyle_40.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_40;
    UnderlyingFXRate_40.setString("16755549");
    noUnderlyings_0_0.set(UnderlyingFXRate_40);
    UnderlyingInstrument_40.insert(UnderlyingFXRate_40.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_40('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_40);
    UnderlyingInstrument_40.insert(UnderlyingFXRateCalc_40.getString());
    FIX::UnderlyingFactor UnderlyingFactor_40;
    UnderlyingFactor_40.setString("4019068");
    noUnderlyings_0_0.set(UnderlyingFactor_40);
    UnderlyingInstrument_40.insert(UnderlyingFactor_40.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_40(679574024);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_40);
    UnderlyingInstrument_40.insert(UnderlyingFlowScheduleType_40.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_40("STRING_403956677");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_40);
    UnderlyingInstrument_40.insert(UnderlyingInstrRegistry_40.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_40("LOCALMKTDATE_76699690");
    noUnderlyings_0_0.set(UnderlyingIssueDate_40);
    UnderlyingInstrument_40.insert(UnderlyingIssueDate_40.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_40("STRING_1036120230");
    noUnderlyings_0_0.set(UnderlyingIssuer_40);
    UnderlyingInstrument_40.insert(UnderlyingIssuer_40.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_40("STRING_340330318");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_40);
    UnderlyingInstrument_40.insert(UnderlyingLocaleOfIssue_40.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_40("LOCALMKTDATE_1196021874");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_40);
    UnderlyingInstrument_40.insert(UnderlyingMaturityDate_40.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_40("MONTHYEAR_1391470890");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_40);
    UnderlyingInstrument_40.insert(UnderlyingMaturityMonthYear_40.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_40("TZTIMEONLY_858788569");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_40);
    UnderlyingInstrument_40.insert(UnderlyingMaturityTime_40.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_40;
    UnderlyingNotionalPercentageOutstanding_40.setString("69.660000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_40);
    UnderlyingInstrument_40.insert(UnderlyingNotionalPercentageOutstanding_40.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_40('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_40);
    UnderlyingInstrument_40.insert(UnderlyingOptAttribute_40.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_40;
    UnderlyingOriginalNotionalPercentageOutstanding_40.setString("31.890000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_40);
    UnderlyingInstrument_40.insert(UnderlyingOriginalNotionalPercentageOutstanding_40.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_40("STRING_310522587");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_40);
    UnderlyingInstrument_40.insert(UnderlyingPriceUnitOfMeasure_40.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_40;
    UnderlyingPriceUnitOfMeasureQty_40.setString("13048083");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_40);
    UnderlyingInstrument_40.insert(UnderlyingPriceUnitOfMeasureQty_40.getString());
    FIX::UnderlyingProduct UnderlyingProduct_40(704441088);
    noUnderlyings_0_0.set(UnderlyingProduct_40);
    UnderlyingInstrument_40.insert(UnderlyingProduct_40.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_40(1374243395);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_40);
    UnderlyingInstrument_40.insert(UnderlyingPutOrCall_40.getString());
    FIX::UnderlyingPx UnderlyingPx_40;
    UnderlyingPx_40.setString("11968539");
    noUnderlyings_0_0.set(UnderlyingPx_40);
    UnderlyingInstrument_40.insert(UnderlyingPx_40.getString());
    FIX::UnderlyingQty UnderlyingQty_40;
    UnderlyingQty_40.setString("8504819");
    noUnderlyings_0_0.set(UnderlyingQty_40);
    UnderlyingInstrument_40.insert(UnderlyingQty_40.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_40("LOCALMKTDATE_990131956");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_40);
    UnderlyingInstrument_40.insert(UnderlyingRedemptionDate_40.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_40("STRING_274999325");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_40);
    UnderlyingInstrument_40.insert(UnderlyingRepoCollateralSecurityType_40.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_40;
    UnderlyingRepurchaseRate_40.setString("67.360000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_40);
    UnderlyingInstrument_40.insert(UnderlyingRepurchaseRate_40.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_40(1073837239);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_40);
    UnderlyingInstrument_40.insert(UnderlyingRepurchaseTerm_40.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_40("STRING_316604800");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_40);
    UnderlyingInstrument_40.insert(UnderlyingRestructuringType_40.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_40("STRING_1625675637");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_40);
    UnderlyingInstrument_40.insert(UnderlyingSecurityDesc_40.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_40("EXCHANGE_1066663144");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_40);
    UnderlyingInstrument_40.insert(UnderlyingSecurityExchange_40.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_40("STRING_224061233");
    noUnderlyings_0_0.set(UnderlyingSecurityID_40);
    UnderlyingInstrument_40.insert(UnderlyingSecurityID_40.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_40("STRING_1319758045");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_40);
    UnderlyingInstrument_40.insert(UnderlyingSecurityIDSource_40.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_40("STRING_916564606");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_40);
    UnderlyingInstrument_40.insert(UnderlyingSecuritySubType_40.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_40("STRING_1747767026");
    noUnderlyings_0_0.set(UnderlyingSecurityType_40);
    UnderlyingInstrument_40.insert(UnderlyingSecurityType_40.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_40("STRING_847829361");
    noUnderlyings_0_0.set(UnderlyingSeniority_40);
    UnderlyingInstrument_40.insert(UnderlyingSeniority_40.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_40("STRING_635882527");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_40);
    UnderlyingInstrument_40.insert(UnderlyingSettlMethod_40.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_40(2);
    noUnderlyings_0_0.set(UnderlyingSettlementType_40);
    UnderlyingInstrument_40.insert(UnderlyingSettlementType_40.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_40;
    UnderlyingStartValue_40.setString("15274033");
    noUnderlyings_0_0.set(UnderlyingStartValue_40);
    UnderlyingInstrument_40.insert(UnderlyingStartValue_40.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_40("STRING_1039839204");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_40);
    UnderlyingInstrument_40.insert(UnderlyingStateOrProvinceOfIssue_40.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_40("JPY");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_40);
    UnderlyingInstrument_40.insert(UnderlyingStrikeCurrency_40.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_40;
    UnderlyingStrikePrice_40.setString("13801695");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_40);
    UnderlyingInstrument_40.insert(UnderlyingStrikePrice_40.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_40("STRING_1274911756");
    noUnderlyings_0_0.set(UnderlyingSymbol_40);
    UnderlyingInstrument_40.insert(UnderlyingSymbol_40.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_40("STRING_1807510858");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_40);
    UnderlyingInstrument_40.insert(UnderlyingSymbolSfx_40.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_40("STRING_91474444");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_40);
    UnderlyingInstrument_40.insert(UnderlyingTimeUnit_40.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_40("STRING_1173135074");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_40);
    UnderlyingInstrument_40.insert(UnderlyingUnitOfMeasure_40.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_40;
    UnderlyingUnitOfMeasureQty_40.setString("13624714");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_40);
    UnderlyingInstrument_40.insert(UnderlyingUnitOfMeasureQty_40.getString());
    all_values.push_back(UnderlyingInstrument_40);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::ExecutionReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_85;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_85("STRING_1483657662");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_85);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_85.insert(UnderlyingSecurityAltID_85.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_85("STRING_519796153");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_85);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_85.insert(UnderlyingSecurityAltIDSource_85.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_85);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_86;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_86("STRING_765085074");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_86);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_86.insert(UnderlyingSecurityAltID_86.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_86("STRING_710417409");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_86);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_86.insert(UnderlyingSecurityAltIDSource_86.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_86);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::ExecutionReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_87;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_87("STRING_1716650097");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltID_87);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_87.insert(UnderlyingSecurityAltID_87.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_87("STRING_1615567027");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltIDSource_87);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_87.insert(UnderlyingSecurityAltIDSource_87.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_87);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::ExecutionReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_76;
      FIX::UnderlyingStipType UnderlyingStipType_76("STRING_1991649422");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_76);
      UnderlyingStipulations_NoUnderlyingStips_76.insert(UnderlyingStipType_76.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_76("STRING_1475530116");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_76);
      UnderlyingStipulations_NoUnderlyingStips_76.insert(UnderlyingStipValue_76.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_76);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_77;
      FIX::UnderlyingStipType UnderlyingStipType_77("STRING_626902957");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_77);
      UnderlyingStipulations_NoUnderlyingStips_77.insert(UnderlyingStipType_77.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_77("STRING_160770574");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_77);
      UnderlyingStipulations_NoUnderlyingStips_77.insert(UnderlyingStipValue_77.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_77);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    {
      FIX50SP2::ExecutionReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_78;
      FIX::UnderlyingStipType UnderlyingStipType_78("STRING_953722105");
      noUnderlyingStips_0_1_2.set(UnderlyingStipType_78);
      UnderlyingStipulations_NoUnderlyingStips_78.insert(UnderlyingStipType_78.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_78("STRING_1693566101");
      noUnderlyingStips_0_1_2.set(UnderlyingStipValue_78);
      UnderlyingStipulations_NoUnderlyingStips_78.insert(UnderlyingStipValue_78.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_78);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::ExecutionReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_81;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_81("STRING_125996502");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_81);
      UndlyInstrumentParties_NoUndlyInstrumentParties_81.insert(UnderlyingInstrumentPartyID_81.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_81('4');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_81);
      UndlyInstrumentParties_NoUndlyInstrumentParties_81.insert(UnderlyingInstrumentPartyIDSource_81.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_81(2132598834);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_81);
      UndlyInstrumentParties_NoUndlyInstrumentParties_81.insert(UnderlyingInstrumentPartyRole_81.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_81);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::ExecutionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_173;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_173("STRING_1098529586");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_173);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_173.insert(UnderlyingInstrumentPartySubID_173.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_173(2134789026);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_173);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_173.insert(UnderlyingInstrumentPartySubIDType_173.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_173);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_82;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_82("STRING_353745601");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_82);
      UndlyInstrumentParties_NoUndlyInstrumentParties_82.insert(UnderlyingInstrumentPartyID_82.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_82('2');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_82);
      UndlyInstrumentParties_NoUndlyInstrumentParties_82.insert(UnderlyingInstrumentPartyIDSource_82.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_82(66195260);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_82);
      UndlyInstrumentParties_NoUndlyInstrumentParties_82.insert(UnderlyingInstrumentPartyRole_82.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_82);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::ExecutionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_174;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_174("STRING_1371054665");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_174);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_174.insert(UnderlyingInstrumentPartySubID_174.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_174(1341107016);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_174);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_174.insert(UnderlyingInstrumentPartySubIDType_174.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_174);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_175;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_175("STRING_429812779");
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubID_175);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_175.insert(UnderlyingInstrumentPartySubID_175.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_175(1462529109);
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubIDType_175);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_175.insert(UnderlyingInstrumentPartySubIDType_175.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_175);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::ExecutionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_176;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_176("STRING_366758442");
        noUndlyInstrumentPartySubIDs_0_1_2_2.set(UnderlyingInstrumentPartySubID_176);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_176.insert(UnderlyingInstrumentPartySubID_176.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_176(1792284251);
        noUndlyInstrumentPartySubIDs_0_1_2_2.set(UnderlyingInstrumentPartySubIDType_176);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_176.insert(UnderlyingInstrumentPartySubIDType_176.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_176);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  // YieldData
  multiset<string> YieldData_5;
  FIX::Yield Yield_5;
  Yield_5.setString("30.940000");
  msg.set(Yield_5);
  YieldData_5.insert(Yield_5.getString());
  FIX::YieldCalcDate YieldCalcDate_5("LOCALMKTDATE_1850416104");
  msg.set(YieldCalcDate_5);
  YieldData_5.insert(YieldCalcDate_5.getString());
  FIX::YieldRedemptionDate YieldRedemptionDate_5("LOCALMKTDATE_164596756");
  msg.set(YieldRedemptionDate_5);
  YieldData_5.insert(YieldRedemptionDate_5.getString());
  FIX::YieldRedemptionPrice YieldRedemptionPrice_5;
  YieldRedemptionPrice_5.setString("1407745");
  msg.set(YieldRedemptionPrice_5);
  YieldData_5.insert(YieldRedemptionPrice_5.getString());
  FIX::YieldRedemptionPriceType YieldRedemptionPriceType_5(413349866);
  msg.set(YieldRedemptionPriceType_5);
  YieldData_5.insert(YieldRedemptionPriceType_5.getString());
  FIX::YieldType YieldType_5("STRING_SHORTAVGLIFE");
  msg.set(YieldType_5);
  YieldData_5.insert(YieldType_5.getString());
  all_values.push_back(YieldData_5);


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
