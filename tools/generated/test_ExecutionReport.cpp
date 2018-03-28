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

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::ExecutionReport msg;

  list<multiset<string>> all_values;
  multiset<string> ExecutionReport_0;
  FIX::Account Account_9("STRING_2140648529");
  msg.set(Account_9);
  ExecutionReport_0.insert(Account_9.getString());
  FIX::AccountType AccountType_8(4);
  msg.set(AccountType_8);
  ExecutionReport_0.insert(AccountType_8.getString());
  FIX::AccruedInterestAmt AccruedInterestAmt_9;
  AccruedInterestAmt_9.setString("16348485");
  msg.set(AccruedInterestAmt_9);
  ExecutionReport_0.insert(AccruedInterestAmt_9.getString());
  FIX::AccruedInterestRate AccruedInterestRate_4;
  AccruedInterestRate_4.setString("86.990000");
  msg.set(AccruedInterestRate_4);
  ExecutionReport_0.insert(AccruedInterestRate_4.getString());
  FIX::AcctIDSource AcctIDSource_2(5);
  msg.set(AcctIDSource_2);
  ExecutionReport_0.insert(AcctIDSource_2.getString());
  FIX::AggressorIndicator AggressorIndicator_0(false);
  msg.set(AggressorIndicator_0);
  ExecutionReport_0.insert(AggressorIndicator_0.getString());
  FIX::AllocID AllocID_8("STRING_2080583704");
  msg.set(AllocID_8);
  ExecutionReport_0.insert(AllocID_8.getString());
  FIX::AvgPx AvgPx_5;
  AvgPx_5.setString("18639149");
  msg.set(AvgPx_5);
  ExecutionReport_0.insert(AvgPx_5.getString());
  FIX::BasisFeatureDate BasisFeatureDate_0("LOCALMKTDATE_112526715");
  msg.set(BasisFeatureDate_0);
  ExecutionReport_0.insert(BasisFeatureDate_0.getString());
  FIX::BasisFeaturePrice BasisFeaturePrice_0;
  BasisFeaturePrice_0.setString("3931557");
  msg.set(BasisFeaturePrice_0);
  ExecutionReport_0.insert(BasisFeaturePrice_0.getString());
  FIX::BookingType BookingType_4(2);
  msg.set(BookingType_4);
  ExecutionReport_0.insert(BookingType_4.getString());
  FIX::BookingUnit BookingUnit_1('1');
  msg.set(BookingUnit_1);
  ExecutionReport_0.insert(BookingUnit_1.getString());
  FIX::CalculatedCcyLastQty CalculatedCcyLastQty_0;
  CalculatedCcyLastQty_0.setString("2535949");
  msg.set(CalculatedCcyLastQty_0);
  ExecutionReport_0.insert(CalculatedCcyLastQty_0.getString());
  FIX::CancellationRights CancellationRights_1('M');
  msg.set(CancellationRights_1);
  ExecutionReport_0.insert(CancellationRights_1.getString());
  FIX::CashMargin CashMargin_1('3');
  msg.set(CashMargin_1);
  ExecutionReport_0.insert(CashMargin_1.getString());
  FIX::ClOrdID ClOrdID_22("STRING_1917067698");
  msg.set(ClOrdID_22);
  ExecutionReport_0.insert(ClOrdID_22.getString());
  FIX::ClOrdLinkID ClOrdLinkID_3("STRING_1979252671");
  msg.set(ClOrdLinkID_3);
  ExecutionReport_0.insert(ClOrdLinkID_3.getString());
  FIX::ClearingFeeIndicator ClearingFeeIndicator_7("STRING_5");
  msg.set(ClearingFeeIndicator_7);
  ExecutionReport_0.insert(ClearingFeeIndicator_7.getString());
  FIX::ComplianceID ComplianceID_3("STRING_1358676796");
  msg.set(ComplianceID_3);
  ExecutionReport_0.insert(ComplianceID_3.getString());
  FIX::Concession Concession_4;
  Concession_4.setString("10956465");
  msg.set(Concession_4);
  ExecutionReport_0.insert(Concession_4.getString());
  FIX::CopyMsgIndicator CopyMsgIndicator_1(true);
  msg.set(CopyMsgIndicator_1);
  ExecutionReport_0.insert(CopyMsgIndicator_1.getString());
  FIX::CrossID CrossID_2("STRING_1502084241");
  msg.set(CrossID_2);
  ExecutionReport_0.insert(CrossID_2.getString());
  FIX::CrossType CrossType_2(2);
  msg.set(CrossType_2);
  ExecutionReport_0.insert(CrossType_2.getString());
  FIX::CumQty CumQty_1;
  CumQty_1.setString("5223689");
  msg.set(CumQty_1);
  ExecutionReport_0.insert(CumQty_1.getString());
  FIX::Currency Currency_20("CAN");
  msg.set(Currency_20);
  ExecutionReport_0.insert(Currency_20.getString());
  FIX::CustDirectedOrder CustDirectedOrder_0(false);
  msg.set(CustDirectedOrder_0);
  ExecutionReport_0.insert(CustDirectedOrder_0.getString());
  FIX::CustOrderCapacity CustOrderCapacity_4(4);
  msg.set(CustOrderCapacity_4);
  ExecutionReport_0.insert(CustOrderCapacity_4.getString());
  FIX::CustOrderHandlingInst CustOrderHandlingInst_0("MULTIPLESTRINGVALUE_WRK");
  msg.set(CustOrderHandlingInst_0);
  ExecutionReport_0.insert(CustOrderHandlingInst_0.getString());
  FIX::DayAvgPx DayAvgPx_0;
  DayAvgPx_0.setString("15627851");
  msg.set(DayAvgPx_0);
  ExecutionReport_0.insert(DayAvgPx_0.getString());
  FIX::DayBookingInst DayBookingInst_1('2');
  msg.set(DayBookingInst_1);
  ExecutionReport_0.insert(DayBookingInst_1.getString());
  FIX::DayCumQty DayCumQty_0;
  DayCumQty_0.setString("11090377");
  msg.set(DayCumQty_0);
  ExecutionReport_0.insert(DayCumQty_0.getString());
  FIX::DayOrderQty DayOrderQty_0;
  DayOrderQty_0.setString("725321");
  msg.set(DayOrderQty_0);
  ExecutionReport_0.insert(DayOrderQty_0.getString());
  FIX::Designation Designation_1("STRING_653262453");
  msg.set(Designation_1);
  ExecutionReport_0.insert(Designation_1.getString());
  FIX::DiscretionPrice DiscretionPrice_0;
  DiscretionPrice_0.setString("2342028");
  msg.set(DiscretionPrice_0);
  ExecutionReport_0.insert(DiscretionPrice_0.getString());
  FIX::DividendYield DividendYield_0;
  DividendYield_0.setString("41.440000");
  msg.set(DividendYield_0);
  ExecutionReport_0.insert(DividendYield_0.getString());
  FIX::EffectiveTime EffectiveTime_1(FIX::UTCTIMESTAMP(12, 3, 4, 11, 7, 2014));
  msg.set(EffectiveTime_1);
  ExecutionReport_0.insert(EffectiveTime_1.getString());
  FIX::EncodedText EncodedText_36("DATA_814053480");
  msg.set(EncodedText_36);
  ExecutionReport_0.insert(EncodedText_36.getString());
  FIX::EncodedTextLen EncodedTextLen_36(47791048);
  msg.set(EncodedTextLen_36);
  ExecutionReport_0.insert(EncodedTextLen_36.getString());
  FIX::EndAccruedInterestAmt EndAccruedInterestAmt_9;
  EndAccruedInterestAmt_9.setString("9589161");
  msg.set(EndAccruedInterestAmt_9);
  ExecutionReport_0.insert(EndAccruedInterestAmt_9.getString());
  FIX::EndCash EndCash_9;
  EndCash_9.setString("5836375");
  msg.set(EndCash_9);
  ExecutionReport_0.insert(EndCash_9.getString());
  FIX::ExDate ExDate_1("LOCALMKTDATE_2027043719");
  msg.set(ExDate_1);
  ExecutionReport_0.insert(ExDate_1.getString());
  FIX::ExecID ExecID_17("STRING_1383968183");
  msg.set(ExecID_17);
  ExecutionReport_0.insert(ExecID_17.getString());
  FIX::ExecInst ExecInst_1("MULTIPLECHARVALUE_M");
  msg.set(ExecInst_1);
  ExecutionReport_0.insert(ExecInst_1.getString());
  FIX::ExecPriceAdjustment ExecPriceAdjustment_0;
  ExecPriceAdjustment_0.setString("9752066");
  msg.set(ExecPriceAdjustment_0);
  ExecutionReport_0.insert(ExecPriceAdjustment_0.getString());
  FIX::ExecPriceType ExecPriceType_0('C');
  msg.set(ExecPriceType_0);
  ExecutionReport_0.insert(ExecPriceType_0.getString());
  FIX::ExecRefID ExecRefID_0("STRING_1296914919");
  msg.set(ExecRefID_0);
  ExecutionReport_0.insert(ExecRefID_0.getString());
  FIX::ExecRestatementReason ExecRestatementReason_0(10);
  msg.set(ExecRestatementReason_0);
  ExecutionReport_0.insert(ExecRestatementReason_0.getString());
  FIX::ExecType ExecType_0('5');
  msg.set(ExecType_0);
  ExecutionReport_0.insert(ExecType_0.getString());
  FIX::ExecValuationPoint ExecValuationPoint_0(FIX::UTCTIMESTAMP(23, 24, 5, 26, 8, 2016));
  msg.set(ExecValuationPoint_0);
  ExecutionReport_0.insert(ExecValuationPoint_0.getString());
  FIX::ExpireDate ExpireDate_2("LOCALMKTDATE_304771223");
  msg.set(ExpireDate_2);
  ExecutionReport_0.insert(ExpireDate_2.getString());
  FIX::ExpireTime ExpireTime_3(FIX::UTCTIMESTAMP(5, 27, 38, 6, 4, 2005));
  msg.set(ExpireTime_3);
  ExecutionReport_0.insert(ExpireTime_3.getString());
  FIX::GTBookingInst GTBookingInst_1(1);
  msg.set(GTBookingInst_1);
  ExecutionReport_0.insert(GTBookingInst_1.getString());
  FIX::GrossTradeAmt GrossTradeAmt_4;
  GrossTradeAmt_4.setString("12667354");
  msg.set(GrossTradeAmt_4);
  ExecutionReport_0.insert(GrossTradeAmt_4.getString());
  FIX::HandlInst HandlInst_1('3');
  msg.set(HandlInst_1);
  ExecutionReport_0.insert(HandlInst_1.getString());
  FIX::HostCrossID HostCrossID_2("STRING_502612013");
  msg.set(HostCrossID_2);
  ExecutionReport_0.insert(HostCrossID_2.getString());
  FIX::InterestAtMaturity InterestAtMaturity_4;
  InterestAtMaturity_4.setString("20807889");
  msg.set(InterestAtMaturity_4);
  ExecutionReport_0.insert(InterestAtMaturity_4.getString());
  FIX::LastCapacity LastCapacity_6('4');
  msg.set(LastCapacity_6);
  ExecutionReport_0.insert(LastCapacity_6.getString());
  FIX::LastForwardPoints LastForwardPoints_0;
  LastForwardPoints_0.setString("14615281");
  msg.set(LastForwardPoints_0);
  ExecutionReport_0.insert(LastForwardPoints_0.getString());
  FIX::LastForwardPoints2 LastForwardPoints2_0;
  LastForwardPoints2_0.setString("5169428");
  msg.set(LastForwardPoints2_0);
  ExecutionReport_0.insert(LastForwardPoints2_0.getString());
  FIX::LastFragment LastFragment_5(true);
  msg.set(LastFragment_5);
  ExecutionReport_0.insert(LastFragment_5.getString());
  FIX::LastLiquidityInd LastLiquidityInd_0(4);
  msg.set(LastLiquidityInd_0);
  ExecutionReport_0.insert(LastLiquidityInd_0.getString());
  FIX::LastMkt LastMkt_5("EXCHANGE_311773495");
  msg.set(LastMkt_5);
  ExecutionReport_0.insert(LastMkt_5.getString());
  FIX::LastParPx LastParPx_7;
  LastParPx_7.setString("19145945");
  msg.set(LastParPx_7);
  ExecutionReport_0.insert(LastParPx_7.getString());
  FIX::LastPx LastPx_8;
  LastPx_8.setString("12650188");
  msg.set(LastPx_8);
  ExecutionReport_0.insert(LastPx_8.getString());
  FIX::LastQty LastQty_8;
  LastQty_8.setString("16086884");
  msg.set(LastQty_8);
  ExecutionReport_0.insert(LastQty_8.getString());
  FIX::LastRptRequested LastRptRequested_2(true);
  msg.set(LastRptRequested_2);
  ExecutionReport_0.insert(LastRptRequested_2.getString());
  FIX::LastSpotRate LastSpotRate_0;
  LastSpotRate_0.setString("2069103");
  msg.set(LastSpotRate_0);
  ExecutionReport_0.insert(LastSpotRate_0.getString());
  FIX::LastSwapPoints LastSwapPoints_0;
  LastSwapPoints_0.setString("19752757");
  msg.set(LastSwapPoints_0);
  ExecutionReport_0.insert(LastSwapPoints_0.getString());
  FIX::LeavesQty LeavesQty_0;
  LeavesQty_0.setString("1917681");
  msg.set(LeavesQty_0);
  ExecutionReport_0.insert(LeavesQty_0.getString());
  FIX::ListID ListID_13("STRING_222948488");
  msg.set(ListID_13);
  ExecutionReport_0.insert(ListID_13.getString());
  FIX::LotType LotType_4('2');
  msg.set(LotType_4);
  ExecutionReport_0.insert(LotType_4.getString());
  FIX::ManualOrderIndicator ManualOrderIndicator_0(true);
  msg.set(ManualOrderIndicator_0);
  ExecutionReport_0.insert(ManualOrderIndicator_0.getString());
  FIX::MassStatusReqID MassStatusReqID_0("STRING_1801771803");
  msg.set(MassStatusReqID_0);
  ExecutionReport_0.insert(MassStatusReqID_0.getString());
  FIX::MatchIncrement MatchIncrement_1;
  MatchIncrement_1.setString("16872873");
  msg.set(MatchIncrement_1);
  ExecutionReport_0.insert(MatchIncrement_1.getString());
  FIX::MatchType MatchType_13("STRING_A4");
  msg.set(MatchType_13);
  ExecutionReport_0.insert(MatchType_13.getString());
  FIX::MaxFloor MaxFloor_1;
  MaxFloor_1.setString("13056435");
  msg.set(MaxFloor_1);
  ExecutionReport_0.insert(MaxFloor_1.getString());
  FIX::MaxPriceLevels MaxPriceLevels_1(1705762523);
  msg.set(MaxPriceLevels_1);
  ExecutionReport_0.insert(MaxPriceLevels_1.getString());
  FIX::MaxShow MaxShow_1;
  MaxShow_1.setString("2312468");
  msg.set(MaxShow_1);
  ExecutionReport_0.insert(MaxShow_1.getString());
  FIX::MinQty MinQty_1;
  MinQty_1.setString("16912094");
  msg.set(MinQty_1);
  ExecutionReport_0.insert(MinQty_1.getString());
  FIX::MoneyLaunderingStatus MoneyLaunderingStatus_1('1');
  msg.set(MoneyLaunderingStatus_1);
  ExecutionReport_0.insert(MoneyLaunderingStatus_1.getString());
  FIX::MultiLegReportingType MultiLegReportingType_3('1');
  msg.set(MultiLegReportingType_3);
  ExecutionReport_0.insert(MultiLegReportingType_3.getString());
  FIX::NetMoney NetMoney_4;
  NetMoney_4.setString("5274172");
  msg.set(NetMoney_4);
  ExecutionReport_0.insert(NetMoney_4.getString());
  FIX::NumDaysInterest NumDaysInterest_4(327251168);
  msg.set(NumDaysInterest_4);
  ExecutionReport_0.insert(NumDaysInterest_4.getString());
  FIX::OrdRejReason OrdRejReason_0(99);
  msg.set(OrdRejReason_0);
  ExecutionReport_0.insert(OrdRejReason_0.getString());
  FIX::OrdStatus OrdStatus_0('8');
  msg.set(OrdStatus_0);
  ExecutionReport_0.insert(OrdStatus_0.getString());
  FIX::OrdStatusReqID OrdStatusReqID_0("STRING_829863181");
  msg.set(OrdStatusReqID_0);
  ExecutionReport_0.insert(OrdStatusReqID_0.getString());
  FIX::OrdType OrdType_12('P');
  msg.set(OrdType_12);
  ExecutionReport_0.insert(OrdType_12.getString());
  FIX::OrderCapacity OrderCapacity_4('P');
  msg.set(OrderCapacity_4);
  ExecutionReport_0.insert(OrderCapacity_4.getString());
  FIX::OrderCategory OrderCategory_0('8');
  msg.set(OrderCategory_0);
  ExecutionReport_0.insert(OrderCategory_0.getString());
  FIX::OrderHandlingInstSource OrderHandlingInstSource_0(1);
  msg.set(OrderHandlingInstSource_0);
  ExecutionReport_0.insert(OrderHandlingInstSource_0.getString());
  FIX::OrderID OrderID_22("STRING_1391186200");
  msg.set(OrderID_22);
  ExecutionReport_0.insert(OrderID_22.getString());
  FIX::OrderQty2 OrderQty2_0;
  OrderQty2_0.setString("8419203");
  msg.set(OrderQty2_0);
  ExecutionReport_0.insert(OrderQty2_0.getString());
  FIX::OrderRestrictions OrderRestrictions_4("MULTIPLECHARVALUE_B");
  msg.set(OrderRestrictions_4);
  ExecutionReport_0.insert(OrderRestrictions_4.getString());
  FIX::OrigClOrdID OrigClOrdID_3("STRING_1158297120");
  msg.set(OrigClOrdID_3);
  ExecutionReport_0.insert(OrigClOrdID_3.getString());
  FIX::OrigCrossID OrigCrossID_2("STRING_2106939260");
  msg.set(OrigCrossID_2);
  ExecutionReport_0.insert(OrigCrossID_2.getString());
  FIX::ParticipationRate ParticipationRate_1;
  ParticipationRate_1.setString("19.160000");
  msg.set(ParticipationRate_1);
  ExecutionReport_0.insert(ParticipationRate_1.getString());
  FIX::PeggedPrice PeggedPrice_0;
  PeggedPrice_0.setString("11227210");
  msg.set(PeggedPrice_0);
  ExecutionReport_0.insert(PeggedPrice_0.getString());
  FIX::PeggedRefPrice PeggedRefPrice_0;
  PeggedRefPrice_0.setString("1663659");
  msg.set(PeggedRefPrice_0);
  ExecutionReport_0.insert(PeggedRefPrice_0.getString());
  FIX::PositionEffect PositionEffect_4('R');
  msg.set(PositionEffect_4);
  ExecutionReport_0.insert(PositionEffect_4.getString());
  FIX::PreTradeAnonymity PreTradeAnonymity_1(true);
  msg.set(PreTradeAnonymity_1);
  ExecutionReport_0.insert(PreTradeAnonymity_1.getString());
  FIX::PreallocMethod PreallocMethod_1('0');
  msg.set(PreallocMethod_1);
  ExecutionReport_0.insert(PreallocMethod_1.getString());
  FIX::Price Price_8;
  Price_8.setString("2823848");
  msg.set(Price_8);
  ExecutionReport_0.insert(Price_8.getString());
  FIX::PriceDelta PriceDelta_0;
  PriceDelta_0.setString("7019907");
  msg.set(PriceDelta_0);
  ExecutionReport_0.insert(PriceDelta_0.getString());
  FIX::PriceImprovement PriceImprovement_0;
  PriceImprovement_0.setString("436025");
  msg.set(PriceImprovement_0);
  ExecutionReport_0.insert(PriceImprovement_0.getString());
  FIX::PriceProtectionScope PriceProtectionScope_1('0');
  msg.set(PriceProtectionScope_1);
  ExecutionReport_0.insert(PriceProtectionScope_1.getString());
  FIX::PriceType PriceType_15(14);
  msg.set(PriceType_15);
  ExecutionReport_0.insert(PriceType_15.getString());
  FIX::PriorityIndicator PriorityIndicator_0(1);
  msg.set(PriorityIndicator_0);
  ExecutionReport_0.insert(PriorityIndicator_0.getString());
  FIX::QtyType QtyType_12(1);
  msg.set(QtyType_12);
  ExecutionReport_0.insert(QtyType_12.getString());
  FIX::QuoteRespID QuoteRespID_0("STRING_625510447");
  msg.set(QuoteRespID_0);
  ExecutionReport_0.insert(QuoteRespID_0.getString());
  FIX::ReceivedDeptID ReceivedDeptID_0("STRING_892972022");
  msg.set(ReceivedDeptID_0);
  ExecutionReport_0.insert(ReceivedDeptID_0.getString());
  FIX::RegistID RegistID_1("STRING_1311203548");
  msg.set(RegistID_1);
  ExecutionReport_0.insert(RegistID_1.getString());
  FIX::ReportToExch ReportToExch_0(true);
  msg.set(ReportToExch_0);
  ExecutionReport_0.insert(ReportToExch_0.getString());
  FIX::RiskFreeRate RiskFreeRate_0;
  RiskFreeRate_0.setString("14203892");
  msg.set(RiskFreeRate_0);
  ExecutionReport_0.insert(RiskFreeRate_0.getString());
  FIX::SecondaryClOrdID SecondaryClOrdID_20("STRING_1638454716");
  msg.set(SecondaryClOrdID_20);
  ExecutionReport_0.insert(SecondaryClOrdID_20.getString());
  FIX::SecondaryExecID SecondaryExecID_6("STRING_1619809744");
  msg.set(SecondaryExecID_6);
  ExecutionReport_0.insert(SecondaryExecID_6.getString());
  FIX::SecondaryOrderID SecondaryOrderID_19("STRING_812359680");
  msg.set(SecondaryOrderID_19);
  ExecutionReport_0.insert(SecondaryOrderID_19.getString());
  FIX::SettlCurrAmt SettlCurrAmt_7;
  SettlCurrAmt_7.setString("3208342");
  msg.set(SettlCurrAmt_7);
  ExecutionReport_0.insert(SettlCurrAmt_7.getString());
  FIX::SettlCurrFxRate SettlCurrFxRate_7;
  SettlCurrFxRate_7.setString("16098905");
  msg.set(SettlCurrFxRate_7);
  ExecutionReport_0.insert(SettlCurrFxRate_7.getString());
  FIX::SettlCurrFxRateCalc SettlCurrFxRateCalc_7('D');
  msg.set(SettlCurrFxRateCalc_7);
  ExecutionReport_0.insert(SettlCurrFxRateCalc_7.getString());
  FIX::SettlCurrency SettlCurrency_8("JPY");
  msg.set(SettlCurrency_8);
  ExecutionReport_0.insert(SettlCurrency_8.getString());
  FIX::SettlDate SettlDate_13("LOCALMKTDATE_507860501");
  msg.set(SettlDate_13);
  ExecutionReport_0.insert(SettlDate_13.getString());
  FIX::SettlDate2 SettlDate2_0("LOCALMKTDATE_1306662306");
  msg.set(SettlDate2_0);
  ExecutionReport_0.insert(SettlDate2_0.getString());
  FIX::SettlType SettlType_7("STRING_0");
  msg.set(SettlType_7);
  ExecutionReport_0.insert(SettlType_7.getString());
  FIX::Side Side_16('6');
  msg.set(Side_16);
  ExecutionReport_0.insert(Side_16.getString());
  FIX::SolicitedFlag SolicitedFlag_1(false);
  msg.set(SolicitedFlag_1);
  ExecutionReport_0.insert(SolicitedFlag_1.getString());
  FIX::StartCash StartCash_9;
  StartCash_9.setString("10682296");
  msg.set(StartCash_9);
  ExecutionReport_0.insert(StartCash_9.getString());
  FIX::StopPx StopPx_1;
  StopPx_1.setString("6413949");
  msg.set(StopPx_1);
  ExecutionReport_0.insert(StopPx_1.getString());
  FIX::TargetStrategy TargetStrategy_1(1);
  msg.set(TargetStrategy_1);
  ExecutionReport_0.insert(TargetStrategy_1.getString());
  FIX::TargetStrategyParameters TargetStrategyParameters_1("STRING_1176023625");
  msg.set(TargetStrategyParameters_1);
  ExecutionReport_0.insert(TargetStrategyParameters_1.getString());
  FIX::TargetStrategyPerformance TargetStrategyPerformance_0;
  TargetStrategyPerformance_0.setString("19558841");
  msg.set(TargetStrategyPerformance_0);
  ExecutionReport_0.insert(TargetStrategyPerformance_0.getString());
  FIX::Text Text_36("STRING_1821798319");
  msg.set(Text_36);
  ExecutionReport_0.insert(Text_36.getString());
  FIX::TimeBracket TimeBracket_0("STRING_1458408512");
  msg.set(TimeBracket_0);
  ExecutionReport_0.insert(TimeBracket_0.getString());
  FIX::TimeInForce TimeInForce_10('1');
  msg.set(TimeInForce_10);
  ExecutionReport_0.insert(TimeInForce_10.getString());
  FIX::TimeToExpiration TimeToExpiration_0;
  TimeToExpiration_0.setString("18654009");
  msg.set(TimeToExpiration_0);
  ExecutionReport_0.insert(TimeToExpiration_0.getString());
  FIX::TotNoFills TotNoFills_0(1280597068);
  msg.set(TotNoFills_0);
  ExecutionReport_0.insert(TotNoFills_0.getString());
  FIX::TotNumReports TotNumReports_2(904654830);
  msg.set(TotNumReports_2);
  ExecutionReport_0.insert(TotNumReports_2.getString());
  FIX::TotalTakedown TotalTakedown_4;
  TotalTakedown_4.setString("10671634");
  msg.set(TotalTakedown_4);
  ExecutionReport_0.insert(TotalTakedown_4.getString());
  FIX::TradeDate TradeDate_12("LOCALMKTDATE_661064499");
  msg.set(TradeDate_12);
  ExecutionReport_0.insert(TradeDate_12.getString());
  FIX::TradeOriginationDate TradeOriginationDate_6("LOCALMKTDATE_1530165277");
  msg.set(TradeOriginationDate_6);
  ExecutionReport_0.insert(TradeOriginationDate_6.getString());
  FIX::TradedFlatSwitch TradedFlatSwitch_0(false);
  msg.set(TradedFlatSwitch_0);
  ExecutionReport_0.insert(TradedFlatSwitch_0.getString());
  FIX::TradingSessionID TradingSessionID_19("STRING_2");
  msg.set(TradingSessionID_19);
  ExecutionReport_0.insert(TradingSessionID_19.getString());
  FIX::TradingSessionSubID TradingSessionSubID_19("STRING_2");
  msg.set(TradingSessionSubID_19);
  ExecutionReport_0.insert(TradingSessionSubID_19.getString());
  FIX::TransBkdTime TransBkdTime_1(FIX::UTCTIMESTAMP(12, 18, 49, 25, 2, 2002));
  msg.set(TransBkdTime_1);
  ExecutionReport_0.insert(TransBkdTime_1.getString());
  FIX::TransactTime TransactTime_18(FIX::UTCTIMESTAMP(3, 32, 58, 7, 6, 2015));
  msg.set(TransactTime_18);
  ExecutionReport_0.insert(TransactTime_18.getString());
  FIX::TrdMatchID TrdMatchID_0("STRING_1706336839");
  msg.set(TrdMatchID_0);
  ExecutionReport_0.insert(TrdMatchID_0.getString());
  FIX::UnderlyingLastPx UnderlyingLastPx_0;
  UnderlyingLastPx_0.setString("18300045");
  msg.set(UnderlyingLastPx_0);
  ExecutionReport_0.insert(UnderlyingLastPx_0.getString());
  FIX::UnderlyingLastQty UnderlyingLastQty_0;
  UnderlyingLastQty_0.setString("19591121");
  msg.set(UnderlyingLastQty_0);
  ExecutionReport_0.insert(UnderlyingLastQty_0.getString());
  FIX::Volatility Volatility_0;
  Volatility_0.setString("7348768");
  msg.set(Volatility_0);
  ExecutionReport_0.insert(Volatility_0.getString());
  FIX::WorkingIndicator WorkingIndicator_0(true);
  msg.set(WorkingIndicator_0);
  ExecutionReport_0.insert(WorkingIndicator_0.getString());
  all_values.push_back(ExecutionReport_0);

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_4;
  FIX::ApplID ApplID_4("STRING_1633426775");
  msg.set(ApplID_4);
  ApplicationSequenceControl_4.insert(ApplID_4.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_4(45801681);
  msg.set(ApplLastSeqNum_4);
  ApplicationSequenceControl_4.insert(ApplLastSeqNum_4.getString());
  FIX::ApplResendFlag ApplResendFlag_4(false);
  msg.set(ApplResendFlag_4);
  ApplicationSequenceControl_4.insert(ApplResendFlag_4.getString());
  FIX::ApplSeqNum ApplSeqNum_4(1351344045);
  msg.set(ApplSeqNum_4);
  ApplicationSequenceControl_4.insert(ApplSeqNum_4.getString());
  all_values.push_back(ApplicationSequenceControl_4);

  // CommissionData
  multiset<string> CommissionData_9;
  FIX::CommCurrency CommCurrency_9("CAN");
  msg.set(CommCurrency_9);
  CommissionData_9.insert(CommCurrency_9.getString());
  FIX::CommType CommType_9('4');
  msg.set(CommType_9);
  CommissionData_9.insert(CommType_9.getString());
  FIX::Commission Commission_9;
  Commission_9.setString("19874632");
  msg.set(Commission_9);
  CommissionData_9.insert(Commission_9.getString());
  FIX::FundRenewWaiv FundRenewWaiv_9('N');
  msg.set(FundRenewWaiv_9);
  CommissionData_9.insert(FundRenewWaiv_9.getString());
  all_values.push_back(CommissionData_9);

  // ContAmtGrp
  // Group ContAmtGrp.NoContAmts
  {
    FIX50SP2::ExecutionReport::NoContAmts noContAmts_0_0;
    // ContAmtGrp.NoContAmts
    multiset<string> ContAmtGrp_NoContAmts_0;
    FIX::ContAmtCurr ContAmtCurr_0("GBP");
    noContAmts_0_0.set(ContAmtCurr_0);
    ContAmtGrp_NoContAmts_0.insert(ContAmtCurr_0.getString());
    FIX::ContAmtType ContAmtType_0(12);
    noContAmts_0_0.set(ContAmtType_0);
    ContAmtGrp_NoContAmts_0.insert(ContAmtType_0.getString());
    FIX::ContAmtValue ContAmtValue_0;
    ContAmtValue_0.setString("11280031");
    noContAmts_0_0.set(ContAmtValue_0);
    ContAmtGrp_NoContAmts_0.insert(ContAmtValue_0.getString());
    all_values.push_back(ContAmtGrp_NoContAmts_0);

    msg.addGroup(noContAmts_0_0);
  }
  {
    FIX50SP2::ExecutionReport::NoContAmts noContAmts_0_1;
    // ContAmtGrp.NoContAmts
    multiset<string> ContAmtGrp_NoContAmts_1;
    FIX::ContAmtCurr ContAmtCurr_1("JPY");
    noContAmts_0_1.set(ContAmtCurr_1);
    ContAmtGrp_NoContAmts_1.insert(ContAmtCurr_1.getString());
    FIX::ContAmtType ContAmtType_1(9);
    noContAmts_0_1.set(ContAmtType_1);
    ContAmtGrp_NoContAmts_1.insert(ContAmtType_1.getString());
    FIX::ContAmtValue ContAmtValue_1;
    ContAmtValue_1.setString("15328556");
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
    FIX::ContraBroker ContraBroker_0("STRING_865924485");
    noContraBrokers_0_0.set(ContraBroker_0);
    ContraGrp_NoContraBrokers_0.insert(ContraBroker_0.getString());
    FIX::ContraLegRefID ContraLegRefID_0("STRING_1382735102");
    noContraBrokers_0_0.set(ContraLegRefID_0);
    ContraGrp_NoContraBrokers_0.insert(ContraLegRefID_0.getString());
    FIX::ContraTradeQty ContraTradeQty_0;
    ContraTradeQty_0.setString("18991608");
    noContraBrokers_0_0.set(ContraTradeQty_0);
    ContraGrp_NoContraBrokers_0.insert(ContraTradeQty_0.getString());
    FIX::ContraTradeTime ContraTradeTime_0(FIX::UTCTIMESTAMP(21, 4, 45, 16, 3, 2007));
    noContraBrokers_0_0.set(ContraTradeTime_0);
    ContraGrp_NoContraBrokers_0.insert(ContraTradeTime_0.getString());
    FIX::ContraTrader ContraTrader_0("STRING_167088645");
    noContraBrokers_0_0.set(ContraTrader_0);
    ContraGrp_NoContraBrokers_0.insert(ContraTrader_0.getString());
    all_values.push_back(ContraGrp_NoContraBrokers_0);

    msg.addGroup(noContraBrokers_0_0);
  }
  {
    FIX50SP2::ExecutionReport::NoContraBrokers noContraBrokers_0_1;
    // ContraGrp.NoContraBrokers
    multiset<string> ContraGrp_NoContraBrokers_1;
    FIX::ContraBroker ContraBroker_1("STRING_113729012");
    noContraBrokers_0_1.set(ContraBroker_1);
    ContraGrp_NoContraBrokers_1.insert(ContraBroker_1.getString());
    FIX::ContraLegRefID ContraLegRefID_1("STRING_2098118257");
    noContraBrokers_0_1.set(ContraLegRefID_1);
    ContraGrp_NoContraBrokers_1.insert(ContraLegRefID_1.getString());
    FIX::ContraTradeQty ContraTradeQty_1;
    ContraTradeQty_1.setString("2128903");
    noContraBrokers_0_1.set(ContraTradeQty_1);
    ContraGrp_NoContraBrokers_1.insert(ContraTradeQty_1.getString());
    FIX::ContraTradeTime ContraTradeTime_1(FIX::UTCTIMESTAMP(14, 55, 37, 17, 4, 2011));
    noContraBrokers_0_1.set(ContraTradeTime_1);
    ContraGrp_NoContraBrokers_1.insert(ContraTradeTime_1.getString());
    FIX::ContraTrader ContraTrader_1("STRING_1656678160");
    noContraBrokers_0_1.set(ContraTrader_1);
    ContraGrp_NoContraBrokers_1.insert(ContraTrader_1.getString());
    all_values.push_back(ContraGrp_NoContraBrokers_1);

    msg.addGroup(noContraBrokers_0_1);
  }
  {
    FIX50SP2::ExecutionReport::NoContraBrokers noContraBrokers_0_2;
    // ContraGrp.NoContraBrokers
    multiset<string> ContraGrp_NoContraBrokers_2;
    FIX::ContraBroker ContraBroker_2("STRING_1044032675");
    noContraBrokers_0_2.set(ContraBroker_2);
    ContraGrp_NoContraBrokers_2.insert(ContraBroker_2.getString());
    FIX::ContraLegRefID ContraLegRefID_2("STRING_396539363");
    noContraBrokers_0_2.set(ContraLegRefID_2);
    ContraGrp_NoContraBrokers_2.insert(ContraLegRefID_2.getString());
    FIX::ContraTradeQty ContraTradeQty_2;
    ContraTradeQty_2.setString("8259112");
    noContraBrokers_0_2.set(ContraTradeQty_2);
    ContraGrp_NoContraBrokers_2.insert(ContraTradeQty_2.getString());
    FIX::ContraTradeTime ContraTradeTime_2(FIX::UTCTIMESTAMP(1, 36, 15, 8, 4, 2006));
    noContraBrokers_0_2.set(ContraTradeTime_2);
    ContraGrp_NoContraBrokers_2.insert(ContraTradeTime_2.getString());
    FIX::ContraTrader ContraTrader_2("STRING_669569634");
    noContraBrokers_0_2.set(ContraTrader_2);
    ContraGrp_NoContraBrokers_2.insert(ContraTrader_2.getString());
    all_values.push_back(ContraGrp_NoContraBrokers_2);

    msg.addGroup(noContraBrokers_0_2);
  }
  // DiscretionInstructions
  multiset<string> DiscretionInstructions_1;
  FIX::DiscretionInst DiscretionInst_1('2');
  msg.set(DiscretionInst_1);
  DiscretionInstructions_1.insert(DiscretionInst_1.getString());
  FIX::DiscretionLimitType DiscretionLimitType_1(0);
  msg.set(DiscretionLimitType_1);
  DiscretionInstructions_1.insert(DiscretionLimitType_1.getString());
  FIX::DiscretionMoveType DiscretionMoveType_1(1);
  msg.set(DiscretionMoveType_1);
  DiscretionInstructions_1.insert(DiscretionMoveType_1.getString());
  FIX::DiscretionOffsetType DiscretionOffsetType_1(2);
  msg.set(DiscretionOffsetType_1);
  DiscretionInstructions_1.insert(DiscretionOffsetType_1.getString());
  FIX::DiscretionOffsetValue DiscretionOffsetValue_1;
  DiscretionOffsetValue_1.setString("2870836");
  msg.set(DiscretionOffsetValue_1);
  DiscretionInstructions_1.insert(DiscretionOffsetValue_1.getString());
  FIX::DiscretionRoundDirection DiscretionRoundDirection_1(1);
  msg.set(DiscretionRoundDirection_1);
  DiscretionInstructions_1.insert(DiscretionRoundDirection_1.getString());
  FIX::DiscretionScope DiscretionScope_1(1);
  msg.set(DiscretionScope_1);
  DiscretionInstructions_1.insert(DiscretionScope_1.getString());
  all_values.push_back(DiscretionInstructions_1);

  // DisplayInstruction
  multiset<string> DisplayInstruction_1;
  FIX::DisplayHighQty DisplayHighQty_1;
  DisplayHighQty_1.setString("7517751");
  msg.set(DisplayHighQty_1);
  DisplayInstruction_1.insert(DisplayHighQty_1.getString());
  FIX::DisplayLowQty DisplayLowQty_1;
  DisplayLowQty_1.setString("1422287");
  msg.set(DisplayLowQty_1);
  DisplayInstruction_1.insert(DisplayLowQty_1.getString());
  FIX::DisplayMethod DisplayMethod_1('1');
  msg.set(DisplayMethod_1);
  DisplayInstruction_1.insert(DisplayMethod_1.getString());
  FIX::DisplayMinIncr DisplayMinIncr_1;
  DisplayMinIncr_1.setString("7024097");
  msg.set(DisplayMinIncr_1);
  DisplayInstruction_1.insert(DisplayMinIncr_1.getString());
  FIX::DisplayQty DisplayQty_1;
  DisplayQty_1.setString("3551190");
  msg.set(DisplayQty_1);
  DisplayInstruction_1.insert(DisplayQty_1.getString());
  FIX::DisplayWhen DisplayWhen_1('1');
  msg.set(DisplayWhen_1);
  DisplayInstruction_1.insert(DisplayWhen_1.getString());
  FIX::RefreshQty RefreshQty_1;
  RefreshQty_1.setString("20043883");
  msg.set(RefreshQty_1);
  DisplayInstruction_1.insert(RefreshQty_1.getString());
  FIX::SecondaryDisplayQty SecondaryDisplayQty_1;
  SecondaryDisplayQty_1.setString("18944081");
  msg.set(SecondaryDisplayQty_1);
  DisplayInstruction_1.insert(SecondaryDisplayQty_1.getString());
  all_values.push_back(DisplayInstruction_1);

  // FillsGrp
  // Group FillsGrp.NoFills
  {
    FIX50SP2::ExecutionReport::NoFills noFills_0_0;
    // FillsGrp.NoFills
    multiset<string> FillsGrp_NoFills_0;
    FIX::FillExecID FillExecID_0("STRING_1429907227");
    noFills_0_0.set(FillExecID_0);
    FillsGrp_NoFills_0.insert(FillExecID_0.getString());
    FIX::FillLiquidityInd FillLiquidityInd_0(1126193175);
    noFills_0_0.set(FillLiquidityInd_0);
    FillsGrp_NoFills_0.insert(FillLiquidityInd_0.getString());
    FIX::FillPx FillPx_0;
    FillPx_0.setString("18490125");
    noFills_0_0.set(FillPx_0);
    FillsGrp_NoFills_0.insert(FillPx_0.getString());
    FIX::FillQty FillQty_0;
    FillQty_0.setString("9391017");
    noFills_0_0.set(FillQty_0);
    FillsGrp_NoFills_0.insert(FillQty_0.getString());
    all_values.push_back(FillsGrp_NoFills_0);

    // NestedParties4
    // Group NestedParties4.NoNested4PartyIDs
    {
      FIX50SP2::ExecutionReport::NoFills::NoNested4PartyIDs noNested4PartyIDs_0_1_0;
      // NestedParties4.NoNested4PartyIDs
      multiset<string> NestedParties4_NoNested4PartyIDs_0;
      FIX::Nested4PartyID Nested4PartyID_0("STRING_98068292");
      noNested4PartyIDs_0_1_0.set(Nested4PartyID_0);
      NestedParties4_NoNested4PartyIDs_0.insert(Nested4PartyID_0.getString());
      FIX::Nested4PartyIDSource Nested4PartyIDSource_0('1');
      noNested4PartyIDs_0_1_0.set(Nested4PartyIDSource_0);
      NestedParties4_NoNested4PartyIDs_0.insert(Nested4PartyIDSource_0.getString());
      FIX::Nested4PartyRole Nested4PartyRole_0(47294344);
      noNested4PartyIDs_0_1_0.set(Nested4PartyRole_0);
      NestedParties4_NoNested4PartyIDs_0.insert(Nested4PartyRole_0.getString());
      all_values.push_back(NestedParties4_NoNested4PartyIDs_0);

      // NstdPtys4SubGrp
      // Group NstdPtys4SubGrp.NoNested4PartySubIDs
      {
        FIX50SP2::ExecutionReport::NoFills::NoNested4PartyIDs::NoNested4PartySubIDs noNested4PartySubIDs_0_0_2_0;
        // NstdPtys4SubGrp.NoNested4PartySubIDs
        multiset<string> NstdPtys4SubGrp_NoNested4PartySubIDs_0;
        FIX::Nested4PartySubID Nested4PartySubID_0("STRING_1658074491");
        noNested4PartySubIDs_0_0_2_0.set(Nested4PartySubID_0);
        NstdPtys4SubGrp_NoNested4PartySubIDs_0.insert(Nested4PartySubID_0.getString());
        FIX::Nested4PartySubIDType Nested4PartySubIDType_0(836439320);
        noNested4PartySubIDs_0_0_2_0.set(Nested4PartySubIDType_0);
        NstdPtys4SubGrp_NoNested4PartySubIDs_0.insert(Nested4PartySubIDType_0.getString());
        all_values.push_back(NstdPtys4SubGrp_NoNested4PartySubIDs_0);

        noNested4PartyIDs_0_1_0.addGroup(noNested4PartySubIDs_0_0_2_0);
      }
      noFills_0_0.addGroup(noNested4PartyIDs_0_1_0);
    }
    msg.addGroup(noFills_0_0);
  }
  {
    FIX50SP2::ExecutionReport::NoFills noFills_0_1;
    // FillsGrp.NoFills
    multiset<string> FillsGrp_NoFills_1;
    FIX::FillExecID FillExecID_1("STRING_1433848994");
    noFills_0_1.set(FillExecID_1);
    FillsGrp_NoFills_1.insert(FillExecID_1.getString());
    FIX::FillLiquidityInd FillLiquidityInd_1(1780361274);
    noFills_0_1.set(FillLiquidityInd_1);
    FillsGrp_NoFills_1.insert(FillLiquidityInd_1.getString());
    FIX::FillPx FillPx_1;
    FillPx_1.setString("3440251");
    noFills_0_1.set(FillPx_1);
    FillsGrp_NoFills_1.insert(FillPx_1.getString());
    FIX::FillQty FillQty_1;
    FillQty_1.setString("21034186");
    noFills_0_1.set(FillQty_1);
    FillsGrp_NoFills_1.insert(FillQty_1.getString());
    all_values.push_back(FillsGrp_NoFills_1);

    // NestedParties4
    // Group NestedParties4.NoNested4PartyIDs
    {
      FIX50SP2::ExecutionReport::NoFills::NoNested4PartyIDs noNested4PartyIDs_1_1_0;
      // NestedParties4.NoNested4PartyIDs
      multiset<string> NestedParties4_NoNested4PartyIDs_1;
      FIX::Nested4PartyID Nested4PartyID_1("STRING_2125529388");
      noNested4PartyIDs_1_1_0.set(Nested4PartyID_1);
      NestedParties4_NoNested4PartyIDs_1.insert(Nested4PartyID_1.getString());
      FIX::Nested4PartyIDSource Nested4PartyIDSource_1('4');
      noNested4PartyIDs_1_1_0.set(Nested4PartyIDSource_1);
      NestedParties4_NoNested4PartyIDs_1.insert(Nested4PartyIDSource_1.getString());
      FIX::Nested4PartyRole Nested4PartyRole_1(321092394);
      noNested4PartyIDs_1_1_0.set(Nested4PartyRole_1);
      NestedParties4_NoNested4PartyIDs_1.insert(Nested4PartyRole_1.getString());
      all_values.push_back(NestedParties4_NoNested4PartyIDs_1);

      // NstdPtys4SubGrp
      // Group NstdPtys4SubGrp.NoNested4PartySubIDs
      {
        FIX50SP2::ExecutionReport::NoFills::NoNested4PartyIDs::NoNested4PartySubIDs noNested4PartySubIDs_1_0_2_0;
        // NstdPtys4SubGrp.NoNested4PartySubIDs
        multiset<string> NstdPtys4SubGrp_NoNested4PartySubIDs_1;
        FIX::Nested4PartySubID Nested4PartySubID_1("STRING_474003352");
        noNested4PartySubIDs_1_0_2_0.set(Nested4PartySubID_1);
        NstdPtys4SubGrp_NoNested4PartySubIDs_1.insert(Nested4PartySubID_1.getString());
        FIX::Nested4PartySubIDType Nested4PartySubIDType_1(1758150807);
        noNested4PartySubIDs_1_0_2_0.set(Nested4PartySubIDType_1);
        NstdPtys4SubGrp_NoNested4PartySubIDs_1.insert(Nested4PartySubIDType_1.getString());
        all_values.push_back(NstdPtys4SubGrp_NoNested4PartySubIDs_1);

        noNested4PartyIDs_1_1_0.addGroup(noNested4PartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoFills::NoNested4PartyIDs::NoNested4PartySubIDs noNested4PartySubIDs_1_0_2_1;
        // NstdPtys4SubGrp.NoNested4PartySubIDs
        multiset<string> NstdPtys4SubGrp_NoNested4PartySubIDs_2;
        FIX::Nested4PartySubID Nested4PartySubID_2("STRING_1016904488");
        noNested4PartySubIDs_1_0_2_1.set(Nested4PartySubID_2);
        NstdPtys4SubGrp_NoNested4PartySubIDs_2.insert(Nested4PartySubID_2.getString());
        FIX::Nested4PartySubIDType Nested4PartySubIDType_2(616232097);
        noNested4PartySubIDs_1_0_2_1.set(Nested4PartySubIDType_2);
        NstdPtys4SubGrp_NoNested4PartySubIDs_2.insert(Nested4PartySubIDType_2.getString());
        all_values.push_back(NstdPtys4SubGrp_NoNested4PartySubIDs_2);

        noNested4PartyIDs_1_1_0.addGroup(noNested4PartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::ExecutionReport::NoFills::NoNested4PartyIDs::NoNested4PartySubIDs noNested4PartySubIDs_1_0_2_2;
        // NstdPtys4SubGrp.NoNested4PartySubIDs
        multiset<string> NstdPtys4SubGrp_NoNested4PartySubIDs_3;
        FIX::Nested4PartySubID Nested4PartySubID_3("STRING_1161454583");
        noNested4PartySubIDs_1_0_2_2.set(Nested4PartySubID_3);
        NstdPtys4SubGrp_NoNested4PartySubIDs_3.insert(Nested4PartySubID_3.getString());
        FIX::Nested4PartySubIDType Nested4PartySubIDType_3(1719314211);
        noNested4PartySubIDs_1_0_2_2.set(Nested4PartySubIDType_3);
        NstdPtys4SubGrp_NoNested4PartySubIDs_3.insert(Nested4PartySubIDType_3.getString());
        all_values.push_back(NstdPtys4SubGrp_NoNested4PartySubIDs_3);

        noNested4PartyIDs_1_1_0.addGroup(noNested4PartySubIDs_1_0_2_2);
      }
      noFills_0_1.addGroup(noNested4PartyIDs_1_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoFills::NoNested4PartyIDs noNested4PartyIDs_1_1_1;
      // NestedParties4.NoNested4PartyIDs
      multiset<string> NestedParties4_NoNested4PartyIDs_2;
      FIX::Nested4PartyID Nested4PartyID_2("STRING_971351169");
      noNested4PartyIDs_1_1_1.set(Nested4PartyID_2);
      NestedParties4_NoNested4PartyIDs_2.insert(Nested4PartyID_2.getString());
      FIX::Nested4PartyIDSource Nested4PartyIDSource_2('6');
      noNested4PartyIDs_1_1_1.set(Nested4PartyIDSource_2);
      NestedParties4_NoNested4PartyIDs_2.insert(Nested4PartyIDSource_2.getString());
      FIX::Nested4PartyRole Nested4PartyRole_2(1576218941);
      noNested4PartyIDs_1_1_1.set(Nested4PartyRole_2);
      NestedParties4_NoNested4PartyIDs_2.insert(Nested4PartyRole_2.getString());
      all_values.push_back(NestedParties4_NoNested4PartyIDs_2);

      // NstdPtys4SubGrp
      // Group NstdPtys4SubGrp.NoNested4PartySubIDs
      {
        FIX50SP2::ExecutionReport::NoFills::NoNested4PartyIDs::NoNested4PartySubIDs noNested4PartySubIDs_1_1_2_0;
        // NstdPtys4SubGrp.NoNested4PartySubIDs
        multiset<string> NstdPtys4SubGrp_NoNested4PartySubIDs_4;
        FIX::Nested4PartySubID Nested4PartySubID_4("STRING_1219154432");
        noNested4PartySubIDs_1_1_2_0.set(Nested4PartySubID_4);
        NstdPtys4SubGrp_NoNested4PartySubIDs_4.insert(Nested4PartySubID_4.getString());
        FIX::Nested4PartySubIDType Nested4PartySubIDType_4(858642521);
        noNested4PartySubIDs_1_1_2_0.set(Nested4PartySubIDType_4);
        NstdPtys4SubGrp_NoNested4PartySubIDs_4.insert(Nested4PartySubIDType_4.getString());
        all_values.push_back(NstdPtys4SubGrp_NoNested4PartySubIDs_4);

        noNested4PartyIDs_1_1_1.addGroup(noNested4PartySubIDs_1_1_2_0);
      }
      noFills_0_1.addGroup(noNested4PartyIDs_1_1_1);
    }
    {
      FIX50SP2::ExecutionReport::NoFills::NoNested4PartyIDs noNested4PartyIDs_1_1_2;
      // NestedParties4.NoNested4PartyIDs
      multiset<string> NestedParties4_NoNested4PartyIDs_3;
      FIX::Nested4PartyID Nested4PartyID_3("STRING_1844468844");
      noNested4PartyIDs_1_1_2.set(Nested4PartyID_3);
      NestedParties4_NoNested4PartyIDs_3.insert(Nested4PartyID_3.getString());
      FIX::Nested4PartyIDSource Nested4PartyIDSource_3('9');
      noNested4PartyIDs_1_1_2.set(Nested4PartyIDSource_3);
      NestedParties4_NoNested4PartyIDs_3.insert(Nested4PartyIDSource_3.getString());
      FIX::Nested4PartyRole Nested4PartyRole_3(1797744260);
      noNested4PartyIDs_1_1_2.set(Nested4PartyRole_3);
      NestedParties4_NoNested4PartyIDs_3.insert(Nested4PartyRole_3.getString());
      all_values.push_back(NestedParties4_NoNested4PartyIDs_3);

      // NstdPtys4SubGrp
      // Group NstdPtys4SubGrp.NoNested4PartySubIDs
      {
        FIX50SP2::ExecutionReport::NoFills::NoNested4PartyIDs::NoNested4PartySubIDs noNested4PartySubIDs_1_2_2_0;
        // NstdPtys4SubGrp.NoNested4PartySubIDs
        multiset<string> NstdPtys4SubGrp_NoNested4PartySubIDs_5;
        FIX::Nested4PartySubID Nested4PartySubID_5("STRING_1018751653");
        noNested4PartySubIDs_1_2_2_0.set(Nested4PartySubID_5);
        NstdPtys4SubGrp_NoNested4PartySubIDs_5.insert(Nested4PartySubID_5.getString());
        FIX::Nested4PartySubIDType Nested4PartySubIDType_5(1415273615);
        noNested4PartySubIDs_1_2_2_0.set(Nested4PartySubIDType_5);
        NstdPtys4SubGrp_NoNested4PartySubIDs_5.insert(Nested4PartySubIDType_5.getString());
        all_values.push_back(NstdPtys4SubGrp_NoNested4PartySubIDs_5);

        noNested4PartyIDs_1_1_2.addGroup(noNested4PartySubIDs_1_2_2_0);
      }
      noFills_0_1.addGroup(noNested4PartyIDs_1_1_2);
    }
    msg.addGroup(noFills_0_1);
  }
  {
    FIX50SP2::ExecutionReport::NoFills noFills_0_2;
    // FillsGrp.NoFills
    multiset<string> FillsGrp_NoFills_2;
    FIX::FillExecID FillExecID_2("STRING_1914505390");
    noFills_0_2.set(FillExecID_2);
    FillsGrp_NoFills_2.insert(FillExecID_2.getString());
    FIX::FillLiquidityInd FillLiquidityInd_2(1018282466);
    noFills_0_2.set(FillLiquidityInd_2);
    FillsGrp_NoFills_2.insert(FillLiquidityInd_2.getString());
    FIX::FillPx FillPx_2;
    FillPx_2.setString("9258644");
    noFills_0_2.set(FillPx_2);
    FillsGrp_NoFills_2.insert(FillPx_2.getString());
    FIX::FillQty FillQty_2;
    FillQty_2.setString("6034610");
    noFills_0_2.set(FillQty_2);
    FillsGrp_NoFills_2.insert(FillQty_2.getString());
    all_values.push_back(FillsGrp_NoFills_2);

    // NestedParties4
    // Group NestedParties4.NoNested4PartyIDs
    {
      FIX50SP2::ExecutionReport::NoFills::NoNested4PartyIDs noNested4PartyIDs_2_1_0;
      // NestedParties4.NoNested4PartyIDs
      multiset<string> NestedParties4_NoNested4PartyIDs_4;
      FIX::Nested4PartyID Nested4PartyID_4("STRING_558742084");
      noNested4PartyIDs_2_1_0.set(Nested4PartyID_4);
      NestedParties4_NoNested4PartyIDs_4.insert(Nested4PartyID_4.getString());
      FIX::Nested4PartyIDSource Nested4PartyIDSource_4('9');
      noNested4PartyIDs_2_1_0.set(Nested4PartyIDSource_4);
      NestedParties4_NoNested4PartyIDs_4.insert(Nested4PartyIDSource_4.getString());
      FIX::Nested4PartyRole Nested4PartyRole_4(260582793);
      noNested4PartyIDs_2_1_0.set(Nested4PartyRole_4);
      NestedParties4_NoNested4PartyIDs_4.insert(Nested4PartyRole_4.getString());
      all_values.push_back(NestedParties4_NoNested4PartyIDs_4);

      // NstdPtys4SubGrp
      // Group NstdPtys4SubGrp.NoNested4PartySubIDs
      {
        FIX50SP2::ExecutionReport::NoFills::NoNested4PartyIDs::NoNested4PartySubIDs noNested4PartySubIDs_2_0_2_0;
        // NstdPtys4SubGrp.NoNested4PartySubIDs
        multiset<string> NstdPtys4SubGrp_NoNested4PartySubIDs_6;
        FIX::Nested4PartySubID Nested4PartySubID_6("STRING_925531935");
        noNested4PartySubIDs_2_0_2_0.set(Nested4PartySubID_6);
        NstdPtys4SubGrp_NoNested4PartySubIDs_6.insert(Nested4PartySubID_6.getString());
        FIX::Nested4PartySubIDType Nested4PartySubIDType_6(759446045);
        noNested4PartySubIDs_2_0_2_0.set(Nested4PartySubIDType_6);
        NstdPtys4SubGrp_NoNested4PartySubIDs_6.insert(Nested4PartySubIDType_6.getString());
        all_values.push_back(NstdPtys4SubGrp_NoNested4PartySubIDs_6);

        noNested4PartyIDs_2_1_0.addGroup(noNested4PartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoFills::NoNested4PartyIDs::NoNested4PartySubIDs noNested4PartySubIDs_2_0_2_1;
        // NstdPtys4SubGrp.NoNested4PartySubIDs
        multiset<string> NstdPtys4SubGrp_NoNested4PartySubIDs_7;
        FIX::Nested4PartySubID Nested4PartySubID_7("STRING_386676107");
        noNested4PartySubIDs_2_0_2_1.set(Nested4PartySubID_7);
        NstdPtys4SubGrp_NoNested4PartySubIDs_7.insert(Nested4PartySubID_7.getString());
        FIX::Nested4PartySubIDType Nested4PartySubIDType_7(1190661309);
        noNested4PartySubIDs_2_0_2_1.set(Nested4PartySubIDType_7);
        NstdPtys4SubGrp_NoNested4PartySubIDs_7.insert(Nested4PartySubIDType_7.getString());
        all_values.push_back(NstdPtys4SubGrp_NoNested4PartySubIDs_7);

        noNested4PartyIDs_2_1_0.addGroup(noNested4PartySubIDs_2_0_2_1);
      }
      noFills_0_2.addGroup(noNested4PartyIDs_2_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoFills::NoNested4PartyIDs noNested4PartyIDs_2_1_1;
      // NestedParties4.NoNested4PartyIDs
      multiset<string> NestedParties4_NoNested4PartyIDs_5;
      FIX::Nested4PartyID Nested4PartyID_5("STRING_1233449397");
      noNested4PartyIDs_2_1_1.set(Nested4PartyID_5);
      NestedParties4_NoNested4PartyIDs_5.insert(Nested4PartyID_5.getString());
      FIX::Nested4PartyIDSource Nested4PartyIDSource_5('2');
      noNested4PartyIDs_2_1_1.set(Nested4PartyIDSource_5);
      NestedParties4_NoNested4PartyIDs_5.insert(Nested4PartyIDSource_5.getString());
      FIX::Nested4PartyRole Nested4PartyRole_5(60082149);
      noNested4PartyIDs_2_1_1.set(Nested4PartyRole_5);
      NestedParties4_NoNested4PartyIDs_5.insert(Nested4PartyRole_5.getString());
      all_values.push_back(NestedParties4_NoNested4PartyIDs_5);

      // NstdPtys4SubGrp
      // Group NstdPtys4SubGrp.NoNested4PartySubIDs
      {
        FIX50SP2::ExecutionReport::NoFills::NoNested4PartyIDs::NoNested4PartySubIDs noNested4PartySubIDs_2_1_2_0;
        // NstdPtys4SubGrp.NoNested4PartySubIDs
        multiset<string> NstdPtys4SubGrp_NoNested4PartySubIDs_8;
        FIX::Nested4PartySubID Nested4PartySubID_8("STRING_1158797849");
        noNested4PartySubIDs_2_1_2_0.set(Nested4PartySubID_8);
        NstdPtys4SubGrp_NoNested4PartySubIDs_8.insert(Nested4PartySubID_8.getString());
        FIX::Nested4PartySubIDType Nested4PartySubIDType_8(1779396360);
        noNested4PartySubIDs_2_1_2_0.set(Nested4PartySubIDType_8);
        NstdPtys4SubGrp_NoNested4PartySubIDs_8.insert(Nested4PartySubIDType_8.getString());
        all_values.push_back(NstdPtys4SubGrp_NoNested4PartySubIDs_8);

        noNested4PartyIDs_2_1_1.addGroup(noNested4PartySubIDs_2_1_2_0);
      }
      noFills_0_2.addGroup(noNested4PartyIDs_2_1_1);
    }
    {
      FIX50SP2::ExecutionReport::NoFills::NoNested4PartyIDs noNested4PartyIDs_2_1_2;
      // NestedParties4.NoNested4PartyIDs
      multiset<string> NestedParties4_NoNested4PartyIDs_6;
      FIX::Nested4PartyID Nested4PartyID_6("STRING_673549016");
      noNested4PartyIDs_2_1_2.set(Nested4PartyID_6);
      NestedParties4_NoNested4PartyIDs_6.insert(Nested4PartyID_6.getString());
      FIX::Nested4PartyIDSource Nested4PartyIDSource_6('1');
      noNested4PartyIDs_2_1_2.set(Nested4PartyIDSource_6);
      NestedParties4_NoNested4PartyIDs_6.insert(Nested4PartyIDSource_6.getString());
      FIX::Nested4PartyRole Nested4PartyRole_6(1208131654);
      noNested4PartyIDs_2_1_2.set(Nested4PartyRole_6);
      NestedParties4_NoNested4PartyIDs_6.insert(Nested4PartyRole_6.getString());
      all_values.push_back(NestedParties4_NoNested4PartyIDs_6);

      // NstdPtys4SubGrp
      // Group NstdPtys4SubGrp.NoNested4PartySubIDs
      {
        FIX50SP2::ExecutionReport::NoFills::NoNested4PartyIDs::NoNested4PartySubIDs noNested4PartySubIDs_2_2_2_0;
        // NstdPtys4SubGrp.NoNested4PartySubIDs
        multiset<string> NstdPtys4SubGrp_NoNested4PartySubIDs_9;
        FIX::Nested4PartySubID Nested4PartySubID_9("STRING_910268613");
        noNested4PartySubIDs_2_2_2_0.set(Nested4PartySubID_9);
        NstdPtys4SubGrp_NoNested4PartySubIDs_9.insert(Nested4PartySubID_9.getString());
        FIX::Nested4PartySubIDType Nested4PartySubIDType_9(2066774175);
        noNested4PartySubIDs_2_2_2_0.set(Nested4PartySubIDType_9);
        NstdPtys4SubGrp_NoNested4PartySubIDs_9.insert(Nested4PartySubIDType_9.getString());
        all_values.push_back(NstdPtys4SubGrp_NoNested4PartySubIDs_9);

        noNested4PartyIDs_2_1_2.addGroup(noNested4PartySubIDs_2_2_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoFills::NoNested4PartyIDs::NoNested4PartySubIDs noNested4PartySubIDs_2_2_2_1;
        // NstdPtys4SubGrp.NoNested4PartySubIDs
        multiset<string> NstdPtys4SubGrp_NoNested4PartySubIDs_10;
        FIX::Nested4PartySubID Nested4PartySubID_10("STRING_1088809881");
        noNested4PartySubIDs_2_2_2_1.set(Nested4PartySubID_10);
        NstdPtys4SubGrp_NoNested4PartySubIDs_10.insert(Nested4PartySubID_10.getString());
        FIX::Nested4PartySubIDType Nested4PartySubIDType_10(1830951974);
        noNested4PartySubIDs_2_2_2_1.set(Nested4PartySubIDType_10);
        NstdPtys4SubGrp_NoNested4PartySubIDs_10.insert(Nested4PartySubIDType_10.getString());
        all_values.push_back(NstdPtys4SubGrp_NoNested4PartySubIDs_10);

        noNested4PartyIDs_2_1_2.addGroup(noNested4PartySubIDs_2_2_2_1);
      }
      {
        FIX50SP2::ExecutionReport::NoFills::NoNested4PartyIDs::NoNested4PartySubIDs noNested4PartySubIDs_2_2_2_2;
        // NstdPtys4SubGrp.NoNested4PartySubIDs
        multiset<string> NstdPtys4SubGrp_NoNested4PartySubIDs_11;
        FIX::Nested4PartySubID Nested4PartySubID_11("STRING_1717034787");
        noNested4PartySubIDs_2_2_2_2.set(Nested4PartySubID_11);
        NstdPtys4SubGrp_NoNested4PartySubIDs_11.insert(Nested4PartySubID_11.getString());
        FIX::Nested4PartySubIDType Nested4PartySubIDType_11(808537279);
        noNested4PartySubIDs_2_2_2_2.set(Nested4PartySubIDType_11);
        NstdPtys4SubGrp_NoNested4PartySubIDs_11.insert(Nested4PartySubIDType_11.getString());
        all_values.push_back(NstdPtys4SubGrp_NoNested4PartySubIDs_11);

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
  FIX::AgreementDate AgreementDate_10("LOCALMKTDATE_575559021");
  msg.set(AgreementDate_10);
  FinancingDetails_10.insert(AgreementDate_10.getString());
  FIX::AgreementDesc AgreementDesc_10("STRING_1720502446");
  msg.set(AgreementDesc_10);
  FinancingDetails_10.insert(AgreementDesc_10.getString());
  FIX::AgreementID AgreementID_10("STRING_1910689213");
  msg.set(AgreementID_10);
  FinancingDetails_10.insert(AgreementID_10.getString());
  FIX::DeliveryType DeliveryType_10(0);
  msg.set(DeliveryType_10);
  FinancingDetails_10.insert(DeliveryType_10.getString());
  FIX::EndDate EndDate_10("LOCALMKTDATE_2025150258");
  msg.set(EndDate_10);
  FinancingDetails_10.insert(EndDate_10.getString());
  FIX::MarginRatio MarginRatio_10;
  MarginRatio_10.setString("76.500000");
  msg.set(MarginRatio_10);
  FinancingDetails_10.insert(MarginRatio_10.getString());
  FIX::StartDate StartDate_10("LOCALMKTDATE_2126506279");
  msg.set(StartDate_10);
  FinancingDetails_10.insert(StartDate_10.getString());
  FIX::TerminationType TerminationType_10(4);
  msg.set(TerminationType_10);
  FinancingDetails_10.insert(TerminationType_10.getString());
  all_values.push_back(FinancingDetails_10);

  // InstrmtLegExecGrp
  // Group InstrmtLegExecGrp.NoLegs
  {
    FIX50SP2::ExecutionReport::NoLegs noLegs_0_0;
    // InstrmtLegExecGrp.NoLegs
    multiset<string> InstrmtLegExecGrp_NoLegs_0;
    FIX::LegAllocID LegAllocID_0("STRING_904554566");
    noLegs_0_0.set(LegAllocID_0);
    InstrmtLegExecGrp_NoLegs_0.insert(LegAllocID_0.getString());
    FIX::LegCalculatedCcyLastQty LegCalculatedCcyLastQty_0;
    LegCalculatedCcyLastQty_0.setString("8976954");
    noLegs_0_0.set(LegCalculatedCcyLastQty_0);
    InstrmtLegExecGrp_NoLegs_0.insert(LegCalculatedCcyLastQty_0.getString());
    FIX::LegCoveredOrUncovered LegCoveredOrUncovered_0(774207469);
    noLegs_0_0.set(LegCoveredOrUncovered_0);
    InstrmtLegExecGrp_NoLegs_0.insert(LegCoveredOrUncovered_0.getString());
    FIX::LegCurrencyRatio LegCurrencyRatio_0;
    LegCurrencyRatio_0.setString("20952158");
    noLegs_0_0.set(LegCurrencyRatio_0);
    InstrmtLegExecGrp_NoLegs_0.insert(LegCurrencyRatio_0.getString());
    FIX::LegDividendYield LegDividendYield_0;
    LegDividendYield_0.setString("48.450000");
    noLegs_0_0.set(LegDividendYield_0);
    InstrmtLegExecGrp_NoLegs_0.insert(LegDividendYield_0.getString());
    FIX::LegExecInst LegExecInst_0("MULTIPLECHARVALUE_771550735");
    noLegs_0_0.set(LegExecInst_0);
    InstrmtLegExecGrp_NoLegs_0.insert(LegExecInst_0.getString());
    FIX::LegGrossTradeAmt LegGrossTradeAmt_0;
    LegGrossTradeAmt_0.setString("78143");
    noLegs_0_0.set(LegGrossTradeAmt_0);
    InstrmtLegExecGrp_NoLegs_0.insert(LegGrossTradeAmt_0.getString());
    FIX::LegLastForwardPoints LegLastForwardPoints_0;
    LegLastForwardPoints_0.setString("18333426");
    noLegs_0_0.set(LegLastForwardPoints_0);
    InstrmtLegExecGrp_NoLegs_0.insert(LegLastForwardPoints_0.getString());
    FIX::LegLastPx LegLastPx_0;
    LegLastPx_0.setString("19303485");
    noLegs_0_0.set(LegLastPx_0);
    InstrmtLegExecGrp_NoLegs_0.insert(LegLastPx_0.getString());
    FIX::LegLastQty LegLastQty_0;
    LegLastQty_0.setString("17872107");
    noLegs_0_0.set(LegLastQty_0);
    InstrmtLegExecGrp_NoLegs_0.insert(LegLastQty_0.getString());
    FIX::LegOrderQty LegOrderQty_0;
    LegOrderQty_0.setString("3594080");
    noLegs_0_0.set(LegOrderQty_0);
    InstrmtLegExecGrp_NoLegs_0.insert(LegOrderQty_0.getString());
    FIX::LegPositionEffect LegPositionEffect_0('1');
    noLegs_0_0.set(LegPositionEffect_0);
    InstrmtLegExecGrp_NoLegs_0.insert(LegPositionEffect_0.getString());
    FIX::LegQty LegQty_0;
    LegQty_0.setString("8478587");
    noLegs_0_0.set(LegQty_0);
    InstrmtLegExecGrp_NoLegs_0.insert(LegQty_0.getString());
    FIX::LegRefID LegRefID_0("STRING_1751232745");
    noLegs_0_0.set(LegRefID_0);
    InstrmtLegExecGrp_NoLegs_0.insert(LegRefID_0.getString());
    FIX::LegSettlCurrency LegSettlCurrency_0("JPY");
    noLegs_0_0.set(LegSettlCurrency_0);
    InstrmtLegExecGrp_NoLegs_0.insert(LegSettlCurrency_0.getString());
    FIX::LegSettlDate LegSettlDate_0("LOCALMKTDATE_692558978");
    noLegs_0_0.set(LegSettlDate_0);
    InstrmtLegExecGrp_NoLegs_0.insert(LegSettlDate_0.getString());
    FIX::LegSettlType LegSettlType_0('6');
    noLegs_0_0.set(LegSettlType_0);
    InstrmtLegExecGrp_NoLegs_0.insert(LegSettlType_0.getString());
    FIX::LegSwapType LegSwapType_0(2);
    noLegs_0_0.set(LegSwapType_0);
    InstrmtLegExecGrp_NoLegs_0.insert(LegSwapType_0.getString());
    FIX::LegVolatility LegVolatility_0;
    LegVolatility_0.setString("15010962");
    noLegs_0_0.set(LegVolatility_0);
    InstrmtLegExecGrp_NoLegs_0.insert(LegVolatility_0.getString());
    all_values.push_back(InstrmtLegExecGrp_NoLegs_0);

    // InstrumentLeg
    multiset<string> InstrumentLeg_46;
    FIX::EncodedLegIssuer EncodedLegIssuer_46("DATA_769936037");
    noLegs_0_0.set(EncodedLegIssuer_46);
    InstrumentLeg_46.insert(EncodedLegIssuer_46.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_46(1321525164);
    noLegs_0_0.set(EncodedLegIssuerLen_46);
    InstrumentLeg_46.insert(EncodedLegIssuerLen_46.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_46("DATA_2076655278");
    noLegs_0_0.set(EncodedLegSecurityDesc_46);
    InstrumentLeg_46.insert(EncodedLegSecurityDesc_46.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_46(342954835);
    noLegs_0_0.set(EncodedLegSecurityDescLen_46);
    InstrumentLeg_46.insert(EncodedLegSecurityDescLen_46.getString());
    FIX::LegCFICode LegCFICode_46("STRING_1084730730");
    noLegs_0_0.set(LegCFICode_46);
    InstrumentLeg_46.insert(LegCFICode_46.getString());
    FIX::LegContractMultiplier LegContractMultiplier_46;
    LegContractMultiplier_46.setString("11081917");
    noLegs_0_0.set(LegContractMultiplier_46);
    InstrumentLeg_46.insert(LegContractMultiplier_46.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_46(220621446);
    noLegs_0_0.set(LegContractMultiplierUnit_46);
    InstrumentLeg_46.insert(LegContractMultiplierUnit_46.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_46("MONTHYEAR_1406678380");
    noLegs_0_0.set(LegContractSettlMonth_46);
    InstrumentLeg_46.insert(LegContractSettlMonth_46.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_46("COUNTRY_1087214345");
    noLegs_0_0.set(LegCountryOfIssue_46);
    InstrumentLeg_46.insert(LegCountryOfIssue_46.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_46("LOCALMKTDATE_358870849");
    noLegs_0_0.set(LegCouponPaymentDate_46);
    InstrumentLeg_46.insert(LegCouponPaymentDate_46.getString());
    FIX::LegCouponRate LegCouponRate_46;
    LegCouponRate_46.setString("97.420000");
    noLegs_0_0.set(LegCouponRate_46);
    InstrumentLeg_46.insert(LegCouponRate_46.getString());
    FIX::LegCreditRating LegCreditRating_46("STRING_1991768912");
    noLegs_0_0.set(LegCreditRating_46);
    InstrumentLeg_46.insert(LegCreditRating_46.getString());
    FIX::LegCurrency LegCurrency_46("USD");
    noLegs_0_0.set(LegCurrency_46);
    InstrumentLeg_46.insert(LegCurrency_46.getString());
    FIX::LegDatedDate LegDatedDate_46("LOCALMKTDATE_1939501139");
    noLegs_0_0.set(LegDatedDate_46);
    InstrumentLeg_46.insert(LegDatedDate_46.getString());
    FIX::LegExerciseStyle LegExerciseStyle_46(1240227495);
    noLegs_0_0.set(LegExerciseStyle_46);
    InstrumentLeg_46.insert(LegExerciseStyle_46.getString());
    FIX::LegFactor LegFactor_46;
    LegFactor_46.setString("11924842");
    noLegs_0_0.set(LegFactor_46);
    InstrumentLeg_46.insert(LegFactor_46.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_46(1947315516);
    noLegs_0_0.set(LegFlowScheduleType_46);
    InstrumentLeg_46.insert(LegFlowScheduleType_46.getString());
    FIX::LegInstrRegistry LegInstrRegistry_46("STRING_926086539");
    noLegs_0_0.set(LegInstrRegistry_46);
    InstrumentLeg_46.insert(LegInstrRegistry_46.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_46("LOCALMKTDATE_975349236");
    noLegs_0_0.set(LegInterestAccrualDate_46);
    InstrumentLeg_46.insert(LegInterestAccrualDate_46.getString());
    FIX::LegIssueDate LegIssueDate_46("LOCALMKTDATE_1587042605");
    noLegs_0_0.set(LegIssueDate_46);
    InstrumentLeg_46.insert(LegIssueDate_46.getString());
    FIX::LegIssuer LegIssuer_46("STRING_1285494599");
    noLegs_0_0.set(LegIssuer_46);
    InstrumentLeg_46.insert(LegIssuer_46.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_46("STRING_449328354");
    noLegs_0_0.set(LegLocaleOfIssue_46);
    InstrumentLeg_46.insert(LegLocaleOfIssue_46.getString());
    FIX::LegMaturityDate LegMaturityDate_46("LOCALMKTDATE_287417700");
    noLegs_0_0.set(LegMaturityDate_46);
    InstrumentLeg_46.insert(LegMaturityDate_46.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_46("MONTHYEAR_889243696");
    noLegs_0_0.set(LegMaturityMonthYear_46);
    InstrumentLeg_46.insert(LegMaturityMonthYear_46.getString());
    FIX::LegMaturityTime LegMaturityTime_46("TZTIMEONLY_833576086");
    noLegs_0_0.set(LegMaturityTime_46);
    InstrumentLeg_46.insert(LegMaturityTime_46.getString());
    FIX::LegOptAttribute LegOptAttribute_46('1');
    noLegs_0_0.set(LegOptAttribute_46);
    InstrumentLeg_46.insert(LegOptAttribute_46.getString());
    FIX::LegOptionRatio LegOptionRatio_46;
    LegOptionRatio_46.setString("15818026");
    noLegs_0_0.set(LegOptionRatio_46);
    InstrumentLeg_46.insert(LegOptionRatio_46.getString());
    FIX::LegPool LegPool_46("STRING_901292144");
    noLegs_0_0.set(LegPool_46);
    InstrumentLeg_46.insert(LegPool_46.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_46("STRING_1391267379");
    noLegs_0_0.set(LegPriceUnitOfMeasure_46);
    InstrumentLeg_46.insert(LegPriceUnitOfMeasure_46.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_46;
    LegPriceUnitOfMeasureQty_46.setString("9354152");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_46);
    InstrumentLeg_46.insert(LegPriceUnitOfMeasureQty_46.getString());
    FIX::LegProduct LegProduct_46(1671228181);
    noLegs_0_0.set(LegProduct_46);
    InstrumentLeg_46.insert(LegProduct_46.getString());
    FIX::LegPutOrCall LegPutOrCall_46(565308896);
    noLegs_0_0.set(LegPutOrCall_46);
    InstrumentLeg_46.insert(LegPutOrCall_46.getString());
    FIX::LegRatioQty LegRatioQty_46;
    LegRatioQty_46.setString("8645869");
    noLegs_0_0.set(LegRatioQty_46);
    InstrumentLeg_46.insert(LegRatioQty_46.getString());
    FIX::LegRedemptionDate LegRedemptionDate_46("LOCALMKTDATE_2014183017");
    noLegs_0_0.set(LegRedemptionDate_46);
    InstrumentLeg_46.insert(LegRedemptionDate_46.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_46("STRING_1650039626");
    noLegs_0_0.set(LegRepoCollateralSecurityType_46);
    InstrumentLeg_46.insert(LegRepoCollateralSecurityType_46.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_46;
    LegRepurchaseRate_46.setString("86.280000");
    noLegs_0_0.set(LegRepurchaseRate_46);
    InstrumentLeg_46.insert(LegRepurchaseRate_46.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_46(87320815);
    noLegs_0_0.set(LegRepurchaseTerm_46);
    InstrumentLeg_46.insert(LegRepurchaseTerm_46.getString());
    FIX::LegSecurityDesc LegSecurityDesc_46("STRING_909234358");
    noLegs_0_0.set(LegSecurityDesc_46);
    InstrumentLeg_46.insert(LegSecurityDesc_46.getString());
    FIX::LegSecurityExchange LegSecurityExchange_46("EXCHANGE_912509326");
    noLegs_0_0.set(LegSecurityExchange_46);
    InstrumentLeg_46.insert(LegSecurityExchange_46.getString());
    FIX::LegSecurityID LegSecurityID_46("STRING_446191664");
    noLegs_0_0.set(LegSecurityID_46);
    InstrumentLeg_46.insert(LegSecurityID_46.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_46("STRING_555960452");
    noLegs_0_0.set(LegSecurityIDSource_46);
    InstrumentLeg_46.insert(LegSecurityIDSource_46.getString());
    FIX::LegSecuritySubType LegSecuritySubType_46("STRING_756794590");
    noLegs_0_0.set(LegSecuritySubType_46);
    InstrumentLeg_46.insert(LegSecuritySubType_46.getString());
    FIX::LegSecurityType LegSecurityType_46("STRING_1702757962");
    noLegs_0_0.set(LegSecurityType_46);
    InstrumentLeg_46.insert(LegSecurityType_46.getString());
    FIX::LegSide LegSide_46('9');
    noLegs_0_0.set(LegSide_46);
    InstrumentLeg_46.insert(LegSide_46.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_46("STRING_548812081");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_46);
    InstrumentLeg_46.insert(LegStateOrProvinceOfIssue_46.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_46("GBP");
    noLegs_0_0.set(LegStrikeCurrency_46);
    InstrumentLeg_46.insert(LegStrikeCurrency_46.getString());
    FIX::LegStrikePrice LegStrikePrice_46;
    LegStrikePrice_46.setString("3486439");
    noLegs_0_0.set(LegStrikePrice_46);
    InstrumentLeg_46.insert(LegStrikePrice_46.getString());
    FIX::LegSymbol LegSymbol_46("STRING_1721588349");
    noLegs_0_0.set(LegSymbol_46);
    InstrumentLeg_46.insert(LegSymbol_46.getString());
    FIX::LegSymbolSfx LegSymbolSfx_46("STRING_997243904");
    noLegs_0_0.set(LegSymbolSfx_46);
    InstrumentLeg_46.insert(LegSymbolSfx_46.getString());
    FIX::LegTimeUnit LegTimeUnit_46("STRING_1935686554");
    noLegs_0_0.set(LegTimeUnit_46);
    InstrumentLeg_46.insert(LegTimeUnit_46.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_46("STRING_859599301");
    noLegs_0_0.set(LegUnitOfMeasure_46);
    InstrumentLeg_46.insert(LegUnitOfMeasure_46.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_46;
    LegUnitOfMeasureQty_46.setString("14465722");
    noLegs_0_0.set(LegUnitOfMeasureQty_46);
    InstrumentLeg_46.insert(LegUnitOfMeasureQty_46.getString());
    all_values.push_back(InstrumentLeg_46);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::ExecutionReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_84;
      FIX::LegSecurityAltID LegSecurityAltID_84("STRING_1748842997");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_84);
      LegSecAltIDGrp_NoLegSecurityAltID_84.insert(LegSecurityAltID_84.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_84("STRING_132664697");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_84);
      LegSecAltIDGrp_NoLegSecurityAltID_84.insert(LegSecurityAltIDSource_84.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_84);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_85;
      FIX::LegSecurityAltID LegSecurityAltID_85("STRING_1130187576");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_85);
      LegSecAltIDGrp_NoLegSecurityAltID_85.insert(LegSecurityAltID_85.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_85("STRING_1183162024");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_85);
      LegSecAltIDGrp_NoLegSecurityAltID_85.insert(LegSecurityAltIDSource_85.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_85);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::ExecutionReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_86;
      FIX::LegSecurityAltID LegSecurityAltID_86("STRING_1033956841");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltID_86);
      LegSecAltIDGrp_NoLegSecurityAltID_86.insert(LegSecurityAltID_86.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_86("STRING_373971308");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltIDSource_86);
      LegSecAltIDGrp_NoLegSecurityAltID_86.insert(LegSecurityAltIDSource_86.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_86);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_2);
    }
    // LegPreAllocGrp
    // Group LegPreAllocGrp.NoLegAllocs
    {
      FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs noLegAllocs_0_1_0;
      // LegPreAllocGrp.NoLegAllocs
      multiset<string> LegPreAllocGrp_NoLegAllocs_0;
      FIX::LegAllocAccount LegAllocAccount_0("STRING_557701374");
      noLegAllocs_0_1_0.set(LegAllocAccount_0);
      LegPreAllocGrp_NoLegAllocs_0.insert(LegAllocAccount_0.getString());
      FIX::LegAllocAcctIDSource LegAllocAcctIDSource_0("STRING_939280204");
      noLegAllocs_0_1_0.set(LegAllocAcctIDSource_0);
      LegPreAllocGrp_NoLegAllocs_0.insert(LegAllocAcctIDSource_0.getString());
      FIX::LegAllocQty LegAllocQty_0;
      LegAllocQty_0.setString("8356805");
      noLegAllocs_0_1_0.set(LegAllocQty_0);
      LegPreAllocGrp_NoLegAllocs_0.insert(LegAllocQty_0.getString());
      FIX::LegAllocSettlCurrency LegAllocSettlCurrency_0("JPY");
      noLegAllocs_0_1_0.set(LegAllocSettlCurrency_0);
      LegPreAllocGrp_NoLegAllocs_0.insert(LegAllocSettlCurrency_0.getString());
      FIX::LegIndividualAllocID LegIndividualAllocID_0("STRING_660975554");
      noLegAllocs_0_1_0.set(LegIndividualAllocID_0);
      LegPreAllocGrp_NoLegAllocs_0.insert(LegIndividualAllocID_0.getString());
      all_values.push_back(LegPreAllocGrp_NoLegAllocs_0);

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_0_0_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_23;
        FIX::Nested2PartyID Nested2PartyID_23("STRING_1351070540");
        noNested2PartyIDs_0_0_2_0.set(Nested2PartyID_23);
        NestedParties2_NoNested2PartyIDs_23.insert(Nested2PartyID_23.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_23('1');
        noNested2PartyIDs_0_0_2_0.set(Nested2PartyIDSource_23);
        NestedParties2_NoNested2PartyIDs_23.insert(Nested2PartyIDSource_23.getString());
        FIX::Nested2PartyRole Nested2PartyRole_23(957913223);
        noNested2PartyIDs_0_0_2_0.set(Nested2PartyRole_23);
        NestedParties2_NoNested2PartyIDs_23.insert(Nested2PartyRole_23.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_23);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_48;
          FIX::Nested2PartySubID Nested2PartySubID_48("STRING_182795822");
          noNested2PartySubIDs_0_0_0_3_0.set(Nested2PartySubID_48);
          NstdPtys2SubGrp_NoNested2PartySubIDs_48.insert(Nested2PartySubID_48.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_48(513187537);
          noNested2PartySubIDs_0_0_0_3_0.set(Nested2PartySubIDType_48);
          NstdPtys2SubGrp_NoNested2PartySubIDs_48.insert(Nested2PartySubIDType_48.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_48);

          noNested2PartyIDs_0_0_2_0.addGroup(noNested2PartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_0_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_49;
          FIX::Nested2PartySubID Nested2PartySubID_49("STRING_736441361");
          noNested2PartySubIDs_0_0_0_3_1.set(Nested2PartySubID_49);
          NstdPtys2SubGrp_NoNested2PartySubIDs_49.insert(Nested2PartySubID_49.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_49(731607903);
          noNested2PartySubIDs_0_0_0_3_1.set(Nested2PartySubIDType_49);
          NstdPtys2SubGrp_NoNested2PartySubIDs_49.insert(Nested2PartySubIDType_49.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_49);

          noNested2PartyIDs_0_0_2_0.addGroup(noNested2PartySubIDs_0_0_0_3_1);
        }
        noLegAllocs_0_1_0.addGroup(noNested2PartyIDs_0_0_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_0_0_2_1;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_24;
        FIX::Nested2PartyID Nested2PartyID_24("STRING_1308689347");
        noNested2PartyIDs_0_0_2_1.set(Nested2PartyID_24);
        NestedParties2_NoNested2PartyIDs_24.insert(Nested2PartyID_24.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_24('7');
        noNested2PartyIDs_0_0_2_1.set(Nested2PartyIDSource_24);
        NestedParties2_NoNested2PartyIDs_24.insert(Nested2PartyIDSource_24.getString());
        FIX::Nested2PartyRole Nested2PartyRole_24(1080251853);
        noNested2PartyIDs_0_0_2_1.set(Nested2PartyRole_24);
        NestedParties2_NoNested2PartyIDs_24.insert(Nested2PartyRole_24.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_24);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_1_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_50;
          FIX::Nested2PartySubID Nested2PartySubID_50("STRING_1755579933");
          noNested2PartySubIDs_0_0_1_3_0.set(Nested2PartySubID_50);
          NstdPtys2SubGrp_NoNested2PartySubIDs_50.insert(Nested2PartySubID_50.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_50(868454759);
          noNested2PartySubIDs_0_0_1_3_0.set(Nested2PartySubIDType_50);
          NstdPtys2SubGrp_NoNested2PartySubIDs_50.insert(Nested2PartySubIDType_50.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_50);

          noNested2PartyIDs_0_0_2_1.addGroup(noNested2PartySubIDs_0_0_1_3_0);
        }
        noLegAllocs_0_1_0.addGroup(noNested2PartyIDs_0_0_2_1);
      }
      {
        FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_0_0_2_2;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_25;
        FIX::Nested2PartyID Nested2PartyID_25("STRING_1742393350");
        noNested2PartyIDs_0_0_2_2.set(Nested2PartyID_25);
        NestedParties2_NoNested2PartyIDs_25.insert(Nested2PartyID_25.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_25('1');
        noNested2PartyIDs_0_0_2_2.set(Nested2PartyIDSource_25);
        NestedParties2_NoNested2PartyIDs_25.insert(Nested2PartyIDSource_25.getString());
        FIX::Nested2PartyRole Nested2PartyRole_25(944075366);
        noNested2PartyIDs_0_0_2_2.set(Nested2PartyRole_25);
        NestedParties2_NoNested2PartyIDs_25.insert(Nested2PartyRole_25.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_25);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_2_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_51;
          FIX::Nested2PartySubID Nested2PartySubID_51("STRING_1187333241");
          noNested2PartySubIDs_0_0_2_3_0.set(Nested2PartySubID_51);
          NstdPtys2SubGrp_NoNested2PartySubIDs_51.insert(Nested2PartySubID_51.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_51(2074262942);
          noNested2PartySubIDs_0_0_2_3_0.set(Nested2PartySubIDType_51);
          NstdPtys2SubGrp_NoNested2PartySubIDs_51.insert(Nested2PartySubIDType_51.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_51);

          noNested2PartyIDs_0_0_2_2.addGroup(noNested2PartySubIDs_0_0_2_3_0);
        }
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_2_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_52;
          FIX::Nested2PartySubID Nested2PartySubID_52("STRING_379431075");
          noNested2PartySubIDs_0_0_2_3_1.set(Nested2PartySubID_52);
          NstdPtys2SubGrp_NoNested2PartySubIDs_52.insert(Nested2PartySubID_52.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_52(73806434);
          noNested2PartySubIDs_0_0_2_3_1.set(Nested2PartySubIDType_52);
          NstdPtys2SubGrp_NoNested2PartySubIDs_52.insert(Nested2PartySubIDType_52.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_52);

          noNested2PartyIDs_0_0_2_2.addGroup(noNested2PartySubIDs_0_0_2_3_1);
        }
        noLegAllocs_0_1_0.addGroup(noNested2PartyIDs_0_0_2_2);
      }
      noLegs_0_0.addGroup(noLegAllocs_0_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs noLegAllocs_0_1_1;
      // LegPreAllocGrp.NoLegAllocs
      multiset<string> LegPreAllocGrp_NoLegAllocs_1;
      FIX::LegAllocAccount LegAllocAccount_1("STRING_300750602");
      noLegAllocs_0_1_1.set(LegAllocAccount_1);
      LegPreAllocGrp_NoLegAllocs_1.insert(LegAllocAccount_1.getString());
      FIX::LegAllocAcctIDSource LegAllocAcctIDSource_1("STRING_350524735");
      noLegAllocs_0_1_1.set(LegAllocAcctIDSource_1);
      LegPreAllocGrp_NoLegAllocs_1.insert(LegAllocAcctIDSource_1.getString());
      FIX::LegAllocQty LegAllocQty_1;
      LegAllocQty_1.setString("6315078");
      noLegAllocs_0_1_1.set(LegAllocQty_1);
      LegPreAllocGrp_NoLegAllocs_1.insert(LegAllocQty_1.getString());
      FIX::LegAllocSettlCurrency LegAllocSettlCurrency_1("JPY");
      noLegAllocs_0_1_1.set(LegAllocSettlCurrency_1);
      LegPreAllocGrp_NoLegAllocs_1.insert(LegAllocSettlCurrency_1.getString());
      FIX::LegIndividualAllocID LegIndividualAllocID_1("STRING_1055908552");
      noLegAllocs_0_1_1.set(LegIndividualAllocID_1);
      LegPreAllocGrp_NoLegAllocs_1.insert(LegIndividualAllocID_1.getString());
      all_values.push_back(LegPreAllocGrp_NoLegAllocs_1);

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_0_1_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_26;
        FIX::Nested2PartyID Nested2PartyID_26("STRING_1847180862");
        noNested2PartyIDs_0_1_2_0.set(Nested2PartyID_26);
        NestedParties2_NoNested2PartyIDs_26.insert(Nested2PartyID_26.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_26('1');
        noNested2PartyIDs_0_1_2_0.set(Nested2PartyIDSource_26);
        NestedParties2_NoNested2PartyIDs_26.insert(Nested2PartyIDSource_26.getString());
        FIX::Nested2PartyRole Nested2PartyRole_26(885453880);
        noNested2PartyIDs_0_1_2_0.set(Nested2PartyRole_26);
        NestedParties2_NoNested2PartyIDs_26.insert(Nested2PartyRole_26.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_26);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_53;
          FIX::Nested2PartySubID Nested2PartySubID_53("STRING_378059686");
          noNested2PartySubIDs_0_1_0_3_0.set(Nested2PartySubID_53);
          NstdPtys2SubGrp_NoNested2PartySubIDs_53.insert(Nested2PartySubID_53.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_53(645001225);
          noNested2PartySubIDs_0_1_0_3_0.set(Nested2PartySubIDType_53);
          NstdPtys2SubGrp_NoNested2PartySubIDs_53.insert(Nested2PartySubIDType_53.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_53);

          noNested2PartyIDs_0_1_2_0.addGroup(noNested2PartySubIDs_0_1_0_3_0);
        }
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_0_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_54;
          FIX::Nested2PartySubID Nested2PartySubID_54("STRING_1455977916");
          noNested2PartySubIDs_0_1_0_3_1.set(Nested2PartySubID_54);
          NstdPtys2SubGrp_NoNested2PartySubIDs_54.insert(Nested2PartySubID_54.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_54(891247223);
          noNested2PartySubIDs_0_1_0_3_1.set(Nested2PartySubIDType_54);
          NstdPtys2SubGrp_NoNested2PartySubIDs_54.insert(Nested2PartySubIDType_54.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_54);

          noNested2PartyIDs_0_1_2_0.addGroup(noNested2PartySubIDs_0_1_0_3_1);
        }
        noLegAllocs_0_1_1.addGroup(noNested2PartyIDs_0_1_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_0_1_2_1;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_27;
        FIX::Nested2PartyID Nested2PartyID_27("STRING_1381442586");
        noNested2PartyIDs_0_1_2_1.set(Nested2PartyID_27);
        NestedParties2_NoNested2PartyIDs_27.insert(Nested2PartyID_27.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_27('4');
        noNested2PartyIDs_0_1_2_1.set(Nested2PartyIDSource_27);
        NestedParties2_NoNested2PartyIDs_27.insert(Nested2PartyIDSource_27.getString());
        FIX::Nested2PartyRole Nested2PartyRole_27(52452923);
        noNested2PartyIDs_0_1_2_1.set(Nested2PartyRole_27);
        NestedParties2_NoNested2PartyIDs_27.insert(Nested2PartyRole_27.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_27);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_1_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_55;
          FIX::Nested2PartySubID Nested2PartySubID_55("STRING_1120354025");
          noNested2PartySubIDs_0_1_1_3_0.set(Nested2PartySubID_55);
          NstdPtys2SubGrp_NoNested2PartySubIDs_55.insert(Nested2PartySubID_55.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_55(935246972);
          noNested2PartySubIDs_0_1_1_3_0.set(Nested2PartySubIDType_55);
          NstdPtys2SubGrp_NoNested2PartySubIDs_55.insert(Nested2PartySubIDType_55.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_55);

          noNested2PartyIDs_0_1_2_1.addGroup(noNested2PartySubIDs_0_1_1_3_0);
        }
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_1_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_56;
          FIX::Nested2PartySubID Nested2PartySubID_56("STRING_1747874900");
          noNested2PartySubIDs_0_1_1_3_1.set(Nested2PartySubID_56);
          NstdPtys2SubGrp_NoNested2PartySubIDs_56.insert(Nested2PartySubID_56.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_56(1988808784);
          noNested2PartySubIDs_0_1_1_3_1.set(Nested2PartySubIDType_56);
          NstdPtys2SubGrp_NoNested2PartySubIDs_56.insert(Nested2PartySubIDType_56.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_56);

          noNested2PartyIDs_0_1_2_1.addGroup(noNested2PartySubIDs_0_1_1_3_1);
        }
        noLegAllocs_0_1_1.addGroup(noNested2PartyIDs_0_1_2_1);
      }
      noLegs_0_0.addGroup(noLegAllocs_0_1_1);
    }
    {
      FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs noLegAllocs_0_1_2;
      // LegPreAllocGrp.NoLegAllocs
      multiset<string> LegPreAllocGrp_NoLegAllocs_2;
      FIX::LegAllocAccount LegAllocAccount_2("STRING_530156674");
      noLegAllocs_0_1_2.set(LegAllocAccount_2);
      LegPreAllocGrp_NoLegAllocs_2.insert(LegAllocAccount_2.getString());
      FIX::LegAllocAcctIDSource LegAllocAcctIDSource_2("STRING_655059797");
      noLegAllocs_0_1_2.set(LegAllocAcctIDSource_2);
      LegPreAllocGrp_NoLegAllocs_2.insert(LegAllocAcctIDSource_2.getString());
      FIX::LegAllocQty LegAllocQty_2;
      LegAllocQty_2.setString("7854005");
      noLegAllocs_0_1_2.set(LegAllocQty_2);
      LegPreAllocGrp_NoLegAllocs_2.insert(LegAllocQty_2.getString());
      FIX::LegAllocSettlCurrency LegAllocSettlCurrency_2("GBP");
      noLegAllocs_0_1_2.set(LegAllocSettlCurrency_2);
      LegPreAllocGrp_NoLegAllocs_2.insert(LegAllocSettlCurrency_2.getString());
      FIX::LegIndividualAllocID LegIndividualAllocID_2("STRING_712179797");
      noLegAllocs_0_1_2.set(LegIndividualAllocID_2);
      LegPreAllocGrp_NoLegAllocs_2.insert(LegIndividualAllocID_2.getString());
      all_values.push_back(LegPreAllocGrp_NoLegAllocs_2);

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_0_2_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_28;
        FIX::Nested2PartyID Nested2PartyID_28("STRING_1916199473");
        noNested2PartyIDs_0_2_2_0.set(Nested2PartyID_28);
        NestedParties2_NoNested2PartyIDs_28.insert(Nested2PartyID_28.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_28('1');
        noNested2PartyIDs_0_2_2_0.set(Nested2PartyIDSource_28);
        NestedParties2_NoNested2PartyIDs_28.insert(Nested2PartyIDSource_28.getString());
        FIX::Nested2PartyRole Nested2PartyRole_28(456381536);
        noNested2PartyIDs_0_2_2_0.set(Nested2PartyRole_28);
        NestedParties2_NoNested2PartyIDs_28.insert(Nested2PartyRole_28.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_28);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_2_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_57;
          FIX::Nested2PartySubID Nested2PartySubID_57("STRING_105477558");
          noNested2PartySubIDs_0_2_0_3_0.set(Nested2PartySubID_57);
          NstdPtys2SubGrp_NoNested2PartySubIDs_57.insert(Nested2PartySubID_57.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_57(1642586844);
          noNested2PartySubIDs_0_2_0_3_0.set(Nested2PartySubIDType_57);
          NstdPtys2SubGrp_NoNested2PartySubIDs_57.insert(Nested2PartySubIDType_57.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_57);

          noNested2PartyIDs_0_2_2_0.addGroup(noNested2PartySubIDs_0_2_0_3_0);
        }
        noLegAllocs_0_1_2.addGroup(noNested2PartyIDs_0_2_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_0_2_2_1;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_29;
        FIX::Nested2PartyID Nested2PartyID_29("STRING_1456132186");
        noNested2PartyIDs_0_2_2_1.set(Nested2PartyID_29);
        NestedParties2_NoNested2PartyIDs_29.insert(Nested2PartyID_29.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_29('1');
        noNested2PartyIDs_0_2_2_1.set(Nested2PartyIDSource_29);
        NestedParties2_NoNested2PartyIDs_29.insert(Nested2PartyIDSource_29.getString());
        FIX::Nested2PartyRole Nested2PartyRole_29(1342284059);
        noNested2PartyIDs_0_2_2_1.set(Nested2PartyRole_29);
        NestedParties2_NoNested2PartyIDs_29.insert(Nested2PartyRole_29.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_29);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_2_1_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_58;
          FIX::Nested2PartySubID Nested2PartySubID_58("STRING_525314779");
          noNested2PartySubIDs_0_2_1_3_0.set(Nested2PartySubID_58);
          NstdPtys2SubGrp_NoNested2PartySubIDs_58.insert(Nested2PartySubID_58.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_58(467982505);
          noNested2PartySubIDs_0_2_1_3_0.set(Nested2PartySubIDType_58);
          NstdPtys2SubGrp_NoNested2PartySubIDs_58.insert(Nested2PartySubIDType_58.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_58);

          noNested2PartyIDs_0_2_2_1.addGroup(noNested2PartySubIDs_0_2_1_3_0);
        }
        noLegAllocs_0_1_2.addGroup(noNested2PartyIDs_0_2_2_1);
      }
      noLegs_0_0.addGroup(noLegAllocs_0_1_2);
    }
    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::ExecutionReport::NoLegs::NoLegStipulations noLegStipulations_0_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_0;
      FIX::LegStipulationType LegStipulationType_0("STRING_1170316004");
      noLegStipulations_0_1_0.set(LegStipulationType_0);
      LegStipulations_NoLegStipulations_0.insert(LegStipulationType_0.getString());
      FIX::LegStipulationValue LegStipulationValue_0("STRING_1923960422");
      noLegStipulations_0_1_0.set(LegStipulationValue_0);
      LegStipulations_NoLegStipulations_0.insert(LegStipulationValue_0.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_0);

      noLegs_0_0.addGroup(noLegStipulations_0_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoLegs::NoLegStipulations noLegStipulations_0_1_1;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_1;
      FIX::LegStipulationType LegStipulationType_1("STRING_2145585559");
      noLegStipulations_0_1_1.set(LegStipulationType_1);
      LegStipulations_NoLegStipulations_1.insert(LegStipulationType_1.getString());
      FIX::LegStipulationValue LegStipulationValue_1("STRING_404274942");
      noLegStipulations_0_1_1.set(LegStipulationValue_1);
      LegStipulations_NoLegStipulations_1.insert(LegStipulationValue_1.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_1);

      noLegs_0_0.addGroup(noLegStipulations_0_1_1);
    }
    // NestedParties3
    // Group NestedParties3.NoNested3PartyIDs
    {
      FIX50SP2::ExecutionReport::NoLegs::NoNested3PartyIDs noNested3PartyIDs_0_1_0;
      // NestedParties3.NoNested3PartyIDs
      multiset<string> NestedParties3_NoNested3PartyIDs_0;
      FIX::Nested3PartyID Nested3PartyID_0("STRING_50554834");
      noNested3PartyIDs_0_1_0.set(Nested3PartyID_0);
      NestedParties3_NoNested3PartyIDs_0.insert(Nested3PartyID_0.getString());
      FIX::Nested3PartyIDSource Nested3PartyIDSource_0('3');
      noNested3PartyIDs_0_1_0.set(Nested3PartyIDSource_0);
      NestedParties3_NoNested3PartyIDs_0.insert(Nested3PartyIDSource_0.getString());
      FIX::Nested3PartyRole Nested3PartyRole_0(936932971);
      noNested3PartyIDs_0_1_0.set(Nested3PartyRole_0);
      NestedParties3_NoNested3PartyIDs_0.insert(Nested3PartyRole_0.getString());
      all_values.push_back(NestedParties3_NoNested3PartyIDs_0);

      // NstdPtys3SubGrp
      // Group NstdPtys3SubGrp.NoNested3PartySubIDs
      {
        FIX50SP2::ExecutionReport::NoLegs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_0_0_2_0;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_0;
        FIX::Nested3PartySubID Nested3PartySubID_0("STRING_2144444809");
        noNested3PartySubIDs_0_0_2_0.set(Nested3PartySubID_0);
        NstdPtys3SubGrp_NoNested3PartySubIDs_0.insert(Nested3PartySubID_0.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_0(778258107);
        noNested3PartySubIDs_0_0_2_0.set(Nested3PartySubIDType_0);
        NstdPtys3SubGrp_NoNested3PartySubIDs_0.insert(Nested3PartySubIDType_0.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_0);

        noNested3PartyIDs_0_1_0.addGroup(noNested3PartySubIDs_0_0_2_0);
      }
      noLegs_0_0.addGroup(noNested3PartyIDs_0_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoLegs::NoNested3PartyIDs noNested3PartyIDs_0_1_1;
      // NestedParties3.NoNested3PartyIDs
      multiset<string> NestedParties3_NoNested3PartyIDs_1;
      FIX::Nested3PartyID Nested3PartyID_1("STRING_1515958480");
      noNested3PartyIDs_0_1_1.set(Nested3PartyID_1);
      NestedParties3_NoNested3PartyIDs_1.insert(Nested3PartyID_1.getString());
      FIX::Nested3PartyIDSource Nested3PartyIDSource_1('6');
      noNested3PartyIDs_0_1_1.set(Nested3PartyIDSource_1);
      NestedParties3_NoNested3PartyIDs_1.insert(Nested3PartyIDSource_1.getString());
      FIX::Nested3PartyRole Nested3PartyRole_1(1563658610);
      noNested3PartyIDs_0_1_1.set(Nested3PartyRole_1);
      NestedParties3_NoNested3PartyIDs_1.insert(Nested3PartyRole_1.getString());
      all_values.push_back(NestedParties3_NoNested3PartyIDs_1);

      // NstdPtys3SubGrp
      // Group NstdPtys3SubGrp.NoNested3PartySubIDs
      {
        FIX50SP2::ExecutionReport::NoLegs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_0_1_2_0;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_1;
        FIX::Nested3PartySubID Nested3PartySubID_1("STRING_346930349");
        noNested3PartySubIDs_0_1_2_0.set(Nested3PartySubID_1);
        NstdPtys3SubGrp_NoNested3PartySubIDs_1.insert(Nested3PartySubID_1.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_1(128354759);
        noNested3PartySubIDs_0_1_2_0.set(Nested3PartySubIDType_1);
        NstdPtys3SubGrp_NoNested3PartySubIDs_1.insert(Nested3PartySubIDType_1.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_1);

        noNested3PartyIDs_0_1_1.addGroup(noNested3PartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoLegs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_0_1_2_1;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_2;
        FIX::Nested3PartySubID Nested3PartySubID_2("STRING_1348241006");
        noNested3PartySubIDs_0_1_2_1.set(Nested3PartySubID_2);
        NstdPtys3SubGrp_NoNested3PartySubIDs_2.insert(Nested3PartySubID_2.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_2(115646174);
        noNested3PartySubIDs_0_1_2_1.set(Nested3PartySubIDType_2);
        NstdPtys3SubGrp_NoNested3PartySubIDs_2.insert(Nested3PartySubIDType_2.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_2);

        noNested3PartyIDs_0_1_1.addGroup(noNested3PartySubIDs_0_1_2_1);
      }
      noLegs_0_0.addGroup(noNested3PartyIDs_0_1_1);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::ExecutionReport::NoLegs noLegs_0_1;
    // InstrmtLegExecGrp.NoLegs
    multiset<string> InstrmtLegExecGrp_NoLegs_1;
    FIX::LegAllocID LegAllocID_1("STRING_1141285158");
    noLegs_0_1.set(LegAllocID_1);
    InstrmtLegExecGrp_NoLegs_1.insert(LegAllocID_1.getString());
    FIX::LegCalculatedCcyLastQty LegCalculatedCcyLastQty_1;
    LegCalculatedCcyLastQty_1.setString("18046225");
    noLegs_0_1.set(LegCalculatedCcyLastQty_1);
    InstrmtLegExecGrp_NoLegs_1.insert(LegCalculatedCcyLastQty_1.getString());
    FIX::LegCoveredOrUncovered LegCoveredOrUncovered_1(515869808);
    noLegs_0_1.set(LegCoveredOrUncovered_1);
    InstrmtLegExecGrp_NoLegs_1.insert(LegCoveredOrUncovered_1.getString());
    FIX::LegCurrencyRatio LegCurrencyRatio_1;
    LegCurrencyRatio_1.setString("12467627");
    noLegs_0_1.set(LegCurrencyRatio_1);
    InstrmtLegExecGrp_NoLegs_1.insert(LegCurrencyRatio_1.getString());
    FIX::LegDividendYield LegDividendYield_1;
    LegDividendYield_1.setString("57.390000");
    noLegs_0_1.set(LegDividendYield_1);
    InstrmtLegExecGrp_NoLegs_1.insert(LegDividendYield_1.getString());
    FIX::LegExecInst LegExecInst_1("MULTIPLECHARVALUE_1972001994");
    noLegs_0_1.set(LegExecInst_1);
    InstrmtLegExecGrp_NoLegs_1.insert(LegExecInst_1.getString());
    FIX::LegGrossTradeAmt LegGrossTradeAmt_1;
    LegGrossTradeAmt_1.setString("8866236");
    noLegs_0_1.set(LegGrossTradeAmt_1);
    InstrmtLegExecGrp_NoLegs_1.insert(LegGrossTradeAmt_1.getString());
    FIX::LegLastForwardPoints LegLastForwardPoints_1;
    LegLastForwardPoints_1.setString("4945261");
    noLegs_0_1.set(LegLastForwardPoints_1);
    InstrmtLegExecGrp_NoLegs_1.insert(LegLastForwardPoints_1.getString());
    FIX::LegLastPx LegLastPx_1;
    LegLastPx_1.setString("7007969");
    noLegs_0_1.set(LegLastPx_1);
    InstrmtLegExecGrp_NoLegs_1.insert(LegLastPx_1.getString());
    FIX::LegLastQty LegLastQty_1;
    LegLastQty_1.setString("14119383");
    noLegs_0_1.set(LegLastQty_1);
    InstrmtLegExecGrp_NoLegs_1.insert(LegLastQty_1.getString());
    FIX::LegOrderQty LegOrderQty_1;
    LegOrderQty_1.setString("9625086");
    noLegs_0_1.set(LegOrderQty_1);
    InstrmtLegExecGrp_NoLegs_1.insert(LegOrderQty_1.getString());
    FIX::LegPositionEffect LegPositionEffect_1('1');
    noLegs_0_1.set(LegPositionEffect_1);
    InstrmtLegExecGrp_NoLegs_1.insert(LegPositionEffect_1.getString());
    FIX::LegQty LegQty_1;
    LegQty_1.setString("4347707");
    noLegs_0_1.set(LegQty_1);
    InstrmtLegExecGrp_NoLegs_1.insert(LegQty_1.getString());
    FIX::LegRefID LegRefID_1("STRING_738985429");
    noLegs_0_1.set(LegRefID_1);
    InstrmtLegExecGrp_NoLegs_1.insert(LegRefID_1.getString());
    FIX::LegSettlCurrency LegSettlCurrency_1("JPY");
    noLegs_0_1.set(LegSettlCurrency_1);
    InstrmtLegExecGrp_NoLegs_1.insert(LegSettlCurrency_1.getString());
    FIX::LegSettlDate LegSettlDate_1("LOCALMKTDATE_555564375");
    noLegs_0_1.set(LegSettlDate_1);
    InstrmtLegExecGrp_NoLegs_1.insert(LegSettlDate_1.getString());
    FIX::LegSettlType LegSettlType_1('2');
    noLegs_0_1.set(LegSettlType_1);
    InstrmtLegExecGrp_NoLegs_1.insert(LegSettlType_1.getString());
    FIX::LegSwapType LegSwapType_1(2);
    noLegs_0_1.set(LegSwapType_1);
    InstrmtLegExecGrp_NoLegs_1.insert(LegSwapType_1.getString());
    FIX::LegVolatility LegVolatility_1;
    LegVolatility_1.setString("14924973");
    noLegs_0_1.set(LegVolatility_1);
    InstrmtLegExecGrp_NoLegs_1.insert(LegVolatility_1.getString());
    all_values.push_back(InstrmtLegExecGrp_NoLegs_1);

    // InstrumentLeg
    multiset<string> InstrumentLeg_47;
    FIX::EncodedLegIssuer EncodedLegIssuer_47("DATA_842110234");
    noLegs_0_1.set(EncodedLegIssuer_47);
    InstrumentLeg_47.insert(EncodedLegIssuer_47.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_47(1232576762);
    noLegs_0_1.set(EncodedLegIssuerLen_47);
    InstrumentLeg_47.insert(EncodedLegIssuerLen_47.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_47("DATA_123271806");
    noLegs_0_1.set(EncodedLegSecurityDesc_47);
    InstrumentLeg_47.insert(EncodedLegSecurityDesc_47.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_47(210585066);
    noLegs_0_1.set(EncodedLegSecurityDescLen_47);
    InstrumentLeg_47.insert(EncodedLegSecurityDescLen_47.getString());
    FIX::LegCFICode LegCFICode_47("STRING_1884597721");
    noLegs_0_1.set(LegCFICode_47);
    InstrumentLeg_47.insert(LegCFICode_47.getString());
    FIX::LegContractMultiplier LegContractMultiplier_47;
    LegContractMultiplier_47.setString("16869304");
    noLegs_0_1.set(LegContractMultiplier_47);
    InstrumentLeg_47.insert(LegContractMultiplier_47.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_47(1452969272);
    noLegs_0_1.set(LegContractMultiplierUnit_47);
    InstrumentLeg_47.insert(LegContractMultiplierUnit_47.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_47("MONTHYEAR_84044422");
    noLegs_0_1.set(LegContractSettlMonth_47);
    InstrumentLeg_47.insert(LegContractSettlMonth_47.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_47("COUNTRY_1815285175");
    noLegs_0_1.set(LegCountryOfIssue_47);
    InstrumentLeg_47.insert(LegCountryOfIssue_47.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_47("LOCALMKTDATE_653726630");
    noLegs_0_1.set(LegCouponPaymentDate_47);
    InstrumentLeg_47.insert(LegCouponPaymentDate_47.getString());
    FIX::LegCouponRate LegCouponRate_47;
    LegCouponRate_47.setString("5.960000");
    noLegs_0_1.set(LegCouponRate_47);
    InstrumentLeg_47.insert(LegCouponRate_47.getString());
    FIX::LegCreditRating LegCreditRating_47("STRING_809086685");
    noLegs_0_1.set(LegCreditRating_47);
    InstrumentLeg_47.insert(LegCreditRating_47.getString());
    FIX::LegCurrency LegCurrency_47("GBP");
    noLegs_0_1.set(LegCurrency_47);
    InstrumentLeg_47.insert(LegCurrency_47.getString());
    FIX::LegDatedDate LegDatedDate_47("LOCALMKTDATE_2055849402");
    noLegs_0_1.set(LegDatedDate_47);
    InstrumentLeg_47.insert(LegDatedDate_47.getString());
    FIX::LegExerciseStyle LegExerciseStyle_47(1610591264);
    noLegs_0_1.set(LegExerciseStyle_47);
    InstrumentLeg_47.insert(LegExerciseStyle_47.getString());
    FIX::LegFactor LegFactor_47;
    LegFactor_47.setString("5400787");
    noLegs_0_1.set(LegFactor_47);
    InstrumentLeg_47.insert(LegFactor_47.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_47(794989369);
    noLegs_0_1.set(LegFlowScheduleType_47);
    InstrumentLeg_47.insert(LegFlowScheduleType_47.getString());
    FIX::LegInstrRegistry LegInstrRegistry_47("STRING_2105117414");
    noLegs_0_1.set(LegInstrRegistry_47);
    InstrumentLeg_47.insert(LegInstrRegistry_47.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_47("LOCALMKTDATE_1240875746");
    noLegs_0_1.set(LegInterestAccrualDate_47);
    InstrumentLeg_47.insert(LegInterestAccrualDate_47.getString());
    FIX::LegIssueDate LegIssueDate_47("LOCALMKTDATE_59444115");
    noLegs_0_1.set(LegIssueDate_47);
    InstrumentLeg_47.insert(LegIssueDate_47.getString());
    FIX::LegIssuer LegIssuer_47("STRING_920142421");
    noLegs_0_1.set(LegIssuer_47);
    InstrumentLeg_47.insert(LegIssuer_47.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_47("STRING_1048527430");
    noLegs_0_1.set(LegLocaleOfIssue_47);
    InstrumentLeg_47.insert(LegLocaleOfIssue_47.getString());
    FIX::LegMaturityDate LegMaturityDate_47("LOCALMKTDATE_494214865");
    noLegs_0_1.set(LegMaturityDate_47);
    InstrumentLeg_47.insert(LegMaturityDate_47.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_47("MONTHYEAR_1659127851");
    noLegs_0_1.set(LegMaturityMonthYear_47);
    InstrumentLeg_47.insert(LegMaturityMonthYear_47.getString());
    FIX::LegMaturityTime LegMaturityTime_47("TZTIMEONLY_854281024");
    noLegs_0_1.set(LegMaturityTime_47);
    InstrumentLeg_47.insert(LegMaturityTime_47.getString());
    FIX::LegOptAttribute LegOptAttribute_47('1');
    noLegs_0_1.set(LegOptAttribute_47);
    InstrumentLeg_47.insert(LegOptAttribute_47.getString());
    FIX::LegOptionRatio LegOptionRatio_47;
    LegOptionRatio_47.setString("672085");
    noLegs_0_1.set(LegOptionRatio_47);
    InstrumentLeg_47.insert(LegOptionRatio_47.getString());
    FIX::LegPool LegPool_47("STRING_710589453");
    noLegs_0_1.set(LegPool_47);
    InstrumentLeg_47.insert(LegPool_47.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_47("STRING_421392510");
    noLegs_0_1.set(LegPriceUnitOfMeasure_47);
    InstrumentLeg_47.insert(LegPriceUnitOfMeasure_47.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_47;
    LegPriceUnitOfMeasureQty_47.setString("15597059");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_47);
    InstrumentLeg_47.insert(LegPriceUnitOfMeasureQty_47.getString());
    FIX::LegProduct LegProduct_47(1552699687);
    noLegs_0_1.set(LegProduct_47);
    InstrumentLeg_47.insert(LegProduct_47.getString());
    FIX::LegPutOrCall LegPutOrCall_47(1653969272);
    noLegs_0_1.set(LegPutOrCall_47);
    InstrumentLeg_47.insert(LegPutOrCall_47.getString());
    FIX::LegRatioQty LegRatioQty_47;
    LegRatioQty_47.setString("16829777");
    noLegs_0_1.set(LegRatioQty_47);
    InstrumentLeg_47.insert(LegRatioQty_47.getString());
    FIX::LegRedemptionDate LegRedemptionDate_47("LOCALMKTDATE_1763284754");
    noLegs_0_1.set(LegRedemptionDate_47);
    InstrumentLeg_47.insert(LegRedemptionDate_47.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_47("STRING_1391083345");
    noLegs_0_1.set(LegRepoCollateralSecurityType_47);
    InstrumentLeg_47.insert(LegRepoCollateralSecurityType_47.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_47;
    LegRepurchaseRate_47.setString("44.990000");
    noLegs_0_1.set(LegRepurchaseRate_47);
    InstrumentLeg_47.insert(LegRepurchaseRate_47.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_47(1068770378);
    noLegs_0_1.set(LegRepurchaseTerm_47);
    InstrumentLeg_47.insert(LegRepurchaseTerm_47.getString());
    FIX::LegSecurityDesc LegSecurityDesc_47("STRING_1475127767");
    noLegs_0_1.set(LegSecurityDesc_47);
    InstrumentLeg_47.insert(LegSecurityDesc_47.getString());
    FIX::LegSecurityExchange LegSecurityExchange_47("EXCHANGE_890226026");
    noLegs_0_1.set(LegSecurityExchange_47);
    InstrumentLeg_47.insert(LegSecurityExchange_47.getString());
    FIX::LegSecurityID LegSecurityID_47("STRING_1722497008");
    noLegs_0_1.set(LegSecurityID_47);
    InstrumentLeg_47.insert(LegSecurityID_47.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_47("STRING_1674818363");
    noLegs_0_1.set(LegSecurityIDSource_47);
    InstrumentLeg_47.insert(LegSecurityIDSource_47.getString());
    FIX::LegSecuritySubType LegSecuritySubType_47("STRING_1699312711");
    noLegs_0_1.set(LegSecuritySubType_47);
    InstrumentLeg_47.insert(LegSecuritySubType_47.getString());
    FIX::LegSecurityType LegSecurityType_47("STRING_2033362533");
    noLegs_0_1.set(LegSecurityType_47);
    InstrumentLeg_47.insert(LegSecurityType_47.getString());
    FIX::LegSide LegSide_47('2');
    noLegs_0_1.set(LegSide_47);
    InstrumentLeg_47.insert(LegSide_47.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_47("STRING_1607678465");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_47);
    InstrumentLeg_47.insert(LegStateOrProvinceOfIssue_47.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_47("USD");
    noLegs_0_1.set(LegStrikeCurrency_47);
    InstrumentLeg_47.insert(LegStrikeCurrency_47.getString());
    FIX::LegStrikePrice LegStrikePrice_47;
    LegStrikePrice_47.setString("2551841");
    noLegs_0_1.set(LegStrikePrice_47);
    InstrumentLeg_47.insert(LegStrikePrice_47.getString());
    FIX::LegSymbol LegSymbol_47("STRING_1454103915");
    noLegs_0_1.set(LegSymbol_47);
    InstrumentLeg_47.insert(LegSymbol_47.getString());
    FIX::LegSymbolSfx LegSymbolSfx_47("STRING_2023849616");
    noLegs_0_1.set(LegSymbolSfx_47);
    InstrumentLeg_47.insert(LegSymbolSfx_47.getString());
    FIX::LegTimeUnit LegTimeUnit_47("STRING_314628301");
    noLegs_0_1.set(LegTimeUnit_47);
    InstrumentLeg_47.insert(LegTimeUnit_47.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_47("STRING_226762689");
    noLegs_0_1.set(LegUnitOfMeasure_47);
    InstrumentLeg_47.insert(LegUnitOfMeasure_47.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_47;
    LegUnitOfMeasureQty_47.setString("9248933");
    noLegs_0_1.set(LegUnitOfMeasureQty_47);
    InstrumentLeg_47.insert(LegUnitOfMeasureQty_47.getString());
    all_values.push_back(InstrumentLeg_47);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::ExecutionReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_87;
      FIX::LegSecurityAltID LegSecurityAltID_87("STRING_1885890540");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_87);
      LegSecAltIDGrp_NoLegSecurityAltID_87.insert(LegSecurityAltID_87.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_87("STRING_1779174423");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_87);
      LegSecAltIDGrp_NoLegSecurityAltID_87.insert(LegSecurityAltIDSource_87.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_87);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_88;
      FIX::LegSecurityAltID LegSecurityAltID_88("STRING_2142103723");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltID_88);
      LegSecAltIDGrp_NoLegSecurityAltID_88.insert(LegSecurityAltID_88.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_88("STRING_1953099118");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltIDSource_88);
      LegSecAltIDGrp_NoLegSecurityAltID_88.insert(LegSecurityAltIDSource_88.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_88);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::ExecutionReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_89;
      FIX::LegSecurityAltID LegSecurityAltID_89("STRING_342280228");
      noLegSecurityAltID_1_1_2.set(LegSecurityAltID_89);
      LegSecAltIDGrp_NoLegSecurityAltID_89.insert(LegSecurityAltID_89.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_89("STRING_416012585");
      noLegSecurityAltID_1_1_2.set(LegSecurityAltIDSource_89);
      LegSecAltIDGrp_NoLegSecurityAltID_89.insert(LegSecurityAltIDSource_89.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_89);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_2);
    }
    // LegPreAllocGrp
    // Group LegPreAllocGrp.NoLegAllocs
    {
      FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs noLegAllocs_1_1_0;
      // LegPreAllocGrp.NoLegAllocs
      multiset<string> LegPreAllocGrp_NoLegAllocs_3;
      FIX::LegAllocAccount LegAllocAccount_3("STRING_1894979915");
      noLegAllocs_1_1_0.set(LegAllocAccount_3);
      LegPreAllocGrp_NoLegAllocs_3.insert(LegAllocAccount_3.getString());
      FIX::LegAllocAcctIDSource LegAllocAcctIDSource_3("STRING_2069981858");
      noLegAllocs_1_1_0.set(LegAllocAcctIDSource_3);
      LegPreAllocGrp_NoLegAllocs_3.insert(LegAllocAcctIDSource_3.getString());
      FIX::LegAllocQty LegAllocQty_3;
      LegAllocQty_3.setString("9008154");
      noLegAllocs_1_1_0.set(LegAllocQty_3);
      LegPreAllocGrp_NoLegAllocs_3.insert(LegAllocQty_3.getString());
      FIX::LegAllocSettlCurrency LegAllocSettlCurrency_3("EUR");
      noLegAllocs_1_1_0.set(LegAllocSettlCurrency_3);
      LegPreAllocGrp_NoLegAllocs_3.insert(LegAllocSettlCurrency_3.getString());
      FIX::LegIndividualAllocID LegIndividualAllocID_3("STRING_2123239977");
      noLegAllocs_1_1_0.set(LegIndividualAllocID_3);
      LegPreAllocGrp_NoLegAllocs_3.insert(LegIndividualAllocID_3.getString());
      all_values.push_back(LegPreAllocGrp_NoLegAllocs_3);

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_1_0_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_30;
        FIX::Nested2PartyID Nested2PartyID_30("STRING_641225675");
        noNested2PartyIDs_1_0_2_0.set(Nested2PartyID_30);
        NestedParties2_NoNested2PartyIDs_30.insert(Nested2PartyID_30.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_30('8');
        noNested2PartyIDs_1_0_2_0.set(Nested2PartyIDSource_30);
        NestedParties2_NoNested2PartyIDs_30.insert(Nested2PartyIDSource_30.getString());
        FIX::Nested2PartyRole Nested2PartyRole_30(7081112);
        noNested2PartyIDs_1_0_2_0.set(Nested2PartyRole_30);
        NestedParties2_NoNested2PartyIDs_30.insert(Nested2PartyRole_30.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_30);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_59;
          FIX::Nested2PartySubID Nested2PartySubID_59("STRING_417811419");
          noNested2PartySubIDs_1_0_0_3_0.set(Nested2PartySubID_59);
          NstdPtys2SubGrp_NoNested2PartySubIDs_59.insert(Nested2PartySubID_59.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_59(2040443645);
          noNested2PartySubIDs_1_0_0_3_0.set(Nested2PartySubIDType_59);
          NstdPtys2SubGrp_NoNested2PartySubIDs_59.insert(Nested2PartySubIDType_59.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_59);

          noNested2PartyIDs_1_0_2_0.addGroup(noNested2PartySubIDs_1_0_0_3_0);
        }
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_0_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_60;
          FIX::Nested2PartySubID Nested2PartySubID_60("STRING_411455510");
          noNested2PartySubIDs_1_0_0_3_1.set(Nested2PartySubID_60);
          NstdPtys2SubGrp_NoNested2PartySubIDs_60.insert(Nested2PartySubID_60.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_60(2025489884);
          noNested2PartySubIDs_1_0_0_3_1.set(Nested2PartySubIDType_60);
          NstdPtys2SubGrp_NoNested2PartySubIDs_60.insert(Nested2PartySubIDType_60.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_60);

          noNested2PartyIDs_1_0_2_0.addGroup(noNested2PartySubIDs_1_0_0_3_1);
        }
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_0_3_2;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_61;
          FIX::Nested2PartySubID Nested2PartySubID_61("STRING_1389430147");
          noNested2PartySubIDs_1_0_0_3_2.set(Nested2PartySubID_61);
          NstdPtys2SubGrp_NoNested2PartySubIDs_61.insert(Nested2PartySubID_61.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_61(1194429380);
          noNested2PartySubIDs_1_0_0_3_2.set(Nested2PartySubIDType_61);
          NstdPtys2SubGrp_NoNested2PartySubIDs_61.insert(Nested2PartySubIDType_61.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_61);

          noNested2PartyIDs_1_0_2_0.addGroup(noNested2PartySubIDs_1_0_0_3_2);
        }
        noLegAllocs_1_1_0.addGroup(noNested2PartyIDs_1_0_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_1_0_2_1;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_31;
        FIX::Nested2PartyID Nested2PartyID_31("STRING_133190423");
        noNested2PartyIDs_1_0_2_1.set(Nested2PartyID_31);
        NestedParties2_NoNested2PartyIDs_31.insert(Nested2PartyID_31.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_31('6');
        noNested2PartyIDs_1_0_2_1.set(Nested2PartyIDSource_31);
        NestedParties2_NoNested2PartyIDs_31.insert(Nested2PartyIDSource_31.getString());
        FIX::Nested2PartyRole Nested2PartyRole_31(1070795348);
        noNested2PartyIDs_1_0_2_1.set(Nested2PartyRole_31);
        NestedParties2_NoNested2PartyIDs_31.insert(Nested2PartyRole_31.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_31);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_1_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_62;
          FIX::Nested2PartySubID Nested2PartySubID_62("STRING_922813103");
          noNested2PartySubIDs_1_0_1_3_0.set(Nested2PartySubID_62);
          NstdPtys2SubGrp_NoNested2PartySubIDs_62.insert(Nested2PartySubID_62.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_62(1995688747);
          noNested2PartySubIDs_1_0_1_3_0.set(Nested2PartySubIDType_62);
          NstdPtys2SubGrp_NoNested2PartySubIDs_62.insert(Nested2PartySubIDType_62.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_62);

          noNested2PartyIDs_1_0_2_1.addGroup(noNested2PartySubIDs_1_0_1_3_0);
        }
        noLegAllocs_1_1_0.addGroup(noNested2PartyIDs_1_0_2_1);
      }
      {
        FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_1_0_2_2;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_32;
        FIX::Nested2PartyID Nested2PartyID_32("STRING_1256661891");
        noNested2PartyIDs_1_0_2_2.set(Nested2PartyID_32);
        NestedParties2_NoNested2PartyIDs_32.insert(Nested2PartyID_32.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_32('6');
        noNested2PartyIDs_1_0_2_2.set(Nested2PartyIDSource_32);
        NestedParties2_NoNested2PartyIDs_32.insert(Nested2PartyIDSource_32.getString());
        FIX::Nested2PartyRole Nested2PartyRole_32(1627379522);
        noNested2PartyIDs_1_0_2_2.set(Nested2PartyRole_32);
        NestedParties2_NoNested2PartyIDs_32.insert(Nested2PartyRole_32.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_32);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_2_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_63;
          FIX::Nested2PartySubID Nested2PartySubID_63("STRING_466835466");
          noNested2PartySubIDs_1_0_2_3_0.set(Nested2PartySubID_63);
          NstdPtys2SubGrp_NoNested2PartySubIDs_63.insert(Nested2PartySubID_63.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_63(1969659750);
          noNested2PartySubIDs_1_0_2_3_0.set(Nested2PartySubIDType_63);
          NstdPtys2SubGrp_NoNested2PartySubIDs_63.insert(Nested2PartySubIDType_63.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_63);

          noNested2PartyIDs_1_0_2_2.addGroup(noNested2PartySubIDs_1_0_2_3_0);
        }
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_2_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_64;
          FIX::Nested2PartySubID Nested2PartySubID_64("STRING_1667294552");
          noNested2PartySubIDs_1_0_2_3_1.set(Nested2PartySubID_64);
          NstdPtys2SubGrp_NoNested2PartySubIDs_64.insert(Nested2PartySubID_64.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_64(1832156861);
          noNested2PartySubIDs_1_0_2_3_1.set(Nested2PartySubIDType_64);
          NstdPtys2SubGrp_NoNested2PartySubIDs_64.insert(Nested2PartySubIDType_64.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_64);

          noNested2PartyIDs_1_0_2_2.addGroup(noNested2PartySubIDs_1_0_2_3_1);
        }
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_2_3_2;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_65;
          FIX::Nested2PartySubID Nested2PartySubID_65("STRING_1717156017");
          noNested2PartySubIDs_1_0_2_3_2.set(Nested2PartySubID_65);
          NstdPtys2SubGrp_NoNested2PartySubIDs_65.insert(Nested2PartySubID_65.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_65(1589792762);
          noNested2PartySubIDs_1_0_2_3_2.set(Nested2PartySubIDType_65);
          NstdPtys2SubGrp_NoNested2PartySubIDs_65.insert(Nested2PartySubIDType_65.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_65);

          noNested2PartyIDs_1_0_2_2.addGroup(noNested2PartySubIDs_1_0_2_3_2);
        }
        noLegAllocs_1_1_0.addGroup(noNested2PartyIDs_1_0_2_2);
      }
      noLegs_0_1.addGroup(noLegAllocs_1_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs noLegAllocs_1_1_1;
      // LegPreAllocGrp.NoLegAllocs
      multiset<string> LegPreAllocGrp_NoLegAllocs_4;
      FIX::LegAllocAccount LegAllocAccount_4("STRING_585488692");
      noLegAllocs_1_1_1.set(LegAllocAccount_4);
      LegPreAllocGrp_NoLegAllocs_4.insert(LegAllocAccount_4.getString());
      FIX::LegAllocAcctIDSource LegAllocAcctIDSource_4("STRING_1080453391");
      noLegAllocs_1_1_1.set(LegAllocAcctIDSource_4);
      LegPreAllocGrp_NoLegAllocs_4.insert(LegAllocAcctIDSource_4.getString());
      FIX::LegAllocQty LegAllocQty_4;
      LegAllocQty_4.setString("7558906");
      noLegAllocs_1_1_1.set(LegAllocQty_4);
      LegPreAllocGrp_NoLegAllocs_4.insert(LegAllocQty_4.getString());
      FIX::LegAllocSettlCurrency LegAllocSettlCurrency_4("USD");
      noLegAllocs_1_1_1.set(LegAllocSettlCurrency_4);
      LegPreAllocGrp_NoLegAllocs_4.insert(LegAllocSettlCurrency_4.getString());
      FIX::LegIndividualAllocID LegIndividualAllocID_4("STRING_1397116344");
      noLegAllocs_1_1_1.set(LegIndividualAllocID_4);
      LegPreAllocGrp_NoLegAllocs_4.insert(LegIndividualAllocID_4.getString());
      all_values.push_back(LegPreAllocGrp_NoLegAllocs_4);

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_1_1_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_33;
        FIX::Nested2PartyID Nested2PartyID_33("STRING_1519602254");
        noNested2PartyIDs_1_1_2_0.set(Nested2PartyID_33);
        NestedParties2_NoNested2PartyIDs_33.insert(Nested2PartyID_33.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_33('1');
        noNested2PartyIDs_1_1_2_0.set(Nested2PartyIDSource_33);
        NestedParties2_NoNested2PartyIDs_33.insert(Nested2PartyIDSource_33.getString());
        FIX::Nested2PartyRole Nested2PartyRole_33(1845038796);
        noNested2PartyIDs_1_1_2_0.set(Nested2PartyRole_33);
        NestedParties2_NoNested2PartyIDs_33.insert(Nested2PartyRole_33.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_33);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_1_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_66;
          FIX::Nested2PartySubID Nested2PartySubID_66("STRING_1977132245");
          noNested2PartySubIDs_1_1_0_3_0.set(Nested2PartySubID_66);
          NstdPtys2SubGrp_NoNested2PartySubIDs_66.insert(Nested2PartySubID_66.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_66(1723045032);
          noNested2PartySubIDs_1_1_0_3_0.set(Nested2PartySubIDType_66);
          NstdPtys2SubGrp_NoNested2PartySubIDs_66.insert(Nested2PartySubIDType_66.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_66);

          noNested2PartyIDs_1_1_2_0.addGroup(noNested2PartySubIDs_1_1_0_3_0);
        }
        noLegAllocs_1_1_1.addGroup(noNested2PartyIDs_1_1_2_0);
      }
      noLegs_0_1.addGroup(noLegAllocs_1_1_1);
    }
    {
      FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs noLegAllocs_1_1_2;
      // LegPreAllocGrp.NoLegAllocs
      multiset<string> LegPreAllocGrp_NoLegAllocs_5;
      FIX::LegAllocAccount LegAllocAccount_5("STRING_654508751");
      noLegAllocs_1_1_2.set(LegAllocAccount_5);
      LegPreAllocGrp_NoLegAllocs_5.insert(LegAllocAccount_5.getString());
      FIX::LegAllocAcctIDSource LegAllocAcctIDSource_5("STRING_1024077977");
      noLegAllocs_1_1_2.set(LegAllocAcctIDSource_5);
      LegPreAllocGrp_NoLegAllocs_5.insert(LegAllocAcctIDSource_5.getString());
      FIX::LegAllocQty LegAllocQty_5;
      LegAllocQty_5.setString("18562354");
      noLegAllocs_1_1_2.set(LegAllocQty_5);
      LegPreAllocGrp_NoLegAllocs_5.insert(LegAllocQty_5.getString());
      FIX::LegAllocSettlCurrency LegAllocSettlCurrency_5("EUR");
      noLegAllocs_1_1_2.set(LegAllocSettlCurrency_5);
      LegPreAllocGrp_NoLegAllocs_5.insert(LegAllocSettlCurrency_5.getString());
      FIX::LegIndividualAllocID LegIndividualAllocID_5("STRING_156570532");
      noLegAllocs_1_1_2.set(LegIndividualAllocID_5);
      LegPreAllocGrp_NoLegAllocs_5.insert(LegIndividualAllocID_5.getString());
      all_values.push_back(LegPreAllocGrp_NoLegAllocs_5);

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_1_2_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_34;
        FIX::Nested2PartyID Nested2PartyID_34("STRING_1943078424");
        noNested2PartyIDs_1_2_2_0.set(Nested2PartyID_34);
        NestedParties2_NoNested2PartyIDs_34.insert(Nested2PartyID_34.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_34('1');
        noNested2PartyIDs_1_2_2_0.set(Nested2PartyIDSource_34);
        NestedParties2_NoNested2PartyIDs_34.insert(Nested2PartyIDSource_34.getString());
        FIX::Nested2PartyRole Nested2PartyRole_34(787108616);
        noNested2PartyIDs_1_2_2_0.set(Nested2PartyRole_34);
        NestedParties2_NoNested2PartyIDs_34.insert(Nested2PartyRole_34.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_34);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_2_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_67;
          FIX::Nested2PartySubID Nested2PartySubID_67("STRING_517030741");
          noNested2PartySubIDs_1_2_0_3_0.set(Nested2PartySubID_67);
          NstdPtys2SubGrp_NoNested2PartySubIDs_67.insert(Nested2PartySubID_67.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_67(1253944082);
          noNested2PartySubIDs_1_2_0_3_0.set(Nested2PartySubIDType_67);
          NstdPtys2SubGrp_NoNested2PartySubIDs_67.insert(Nested2PartySubIDType_67.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_67);

          noNested2PartyIDs_1_2_2_0.addGroup(noNested2PartySubIDs_1_2_0_3_0);
        }
        noLegAllocs_1_1_2.addGroup(noNested2PartyIDs_1_2_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_1_2_2_1;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_35;
        FIX::Nested2PartyID Nested2PartyID_35("STRING_1245150400");
        noNested2PartyIDs_1_2_2_1.set(Nested2PartyID_35);
        NestedParties2_NoNested2PartyIDs_35.insert(Nested2PartyID_35.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_35('3');
        noNested2PartyIDs_1_2_2_1.set(Nested2PartyIDSource_35);
        NestedParties2_NoNested2PartyIDs_35.insert(Nested2PartyIDSource_35.getString());
        FIX::Nested2PartyRole Nested2PartyRole_35(938617296);
        noNested2PartyIDs_1_2_2_1.set(Nested2PartyRole_35);
        NestedParties2_NoNested2PartyIDs_35.insert(Nested2PartyRole_35.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_35);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_2_1_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_68;
          FIX::Nested2PartySubID Nested2PartySubID_68("STRING_1626634407");
          noNested2PartySubIDs_1_2_1_3_0.set(Nested2PartySubID_68);
          NstdPtys2SubGrp_NoNested2PartySubIDs_68.insert(Nested2PartySubID_68.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_68(1524105988);
          noNested2PartySubIDs_1_2_1_3_0.set(Nested2PartySubIDType_68);
          NstdPtys2SubGrp_NoNested2PartySubIDs_68.insert(Nested2PartySubIDType_68.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_68);

          noNested2PartyIDs_1_2_2_1.addGroup(noNested2PartySubIDs_1_2_1_3_0);
        }
        noLegAllocs_1_1_2.addGroup(noNested2PartyIDs_1_2_2_1);
      }
      {
        FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_1_2_2_2;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_36;
        FIX::Nested2PartyID Nested2PartyID_36("STRING_1895276161");
        noNested2PartyIDs_1_2_2_2.set(Nested2PartyID_36);
        NestedParties2_NoNested2PartyIDs_36.insert(Nested2PartyID_36.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_36('2');
        noNested2PartyIDs_1_2_2_2.set(Nested2PartyIDSource_36);
        NestedParties2_NoNested2PartyIDs_36.insert(Nested2PartyIDSource_36.getString());
        FIX::Nested2PartyRole Nested2PartyRole_36(2085351009);
        noNested2PartyIDs_1_2_2_2.set(Nested2PartyRole_36);
        NestedParties2_NoNested2PartyIDs_36.insert(Nested2PartyRole_36.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_36);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_2_2_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_69;
          FIX::Nested2PartySubID Nested2PartySubID_69("STRING_1632157773");
          noNested2PartySubIDs_1_2_2_3_0.set(Nested2PartySubID_69);
          NstdPtys2SubGrp_NoNested2PartySubIDs_69.insert(Nested2PartySubID_69.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_69(1365094738);
          noNested2PartySubIDs_1_2_2_3_0.set(Nested2PartySubIDType_69);
          NstdPtys2SubGrp_NoNested2PartySubIDs_69.insert(Nested2PartySubIDType_69.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_69);

          noNested2PartyIDs_1_2_2_2.addGroup(noNested2PartySubIDs_1_2_2_3_0);
        }
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_2_2_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_70;
          FIX::Nested2PartySubID Nested2PartySubID_70("STRING_632432262");
          noNested2PartySubIDs_1_2_2_3_1.set(Nested2PartySubID_70);
          NstdPtys2SubGrp_NoNested2PartySubIDs_70.insert(Nested2PartySubID_70.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_70(1050350860);
          noNested2PartySubIDs_1_2_2_3_1.set(Nested2PartySubIDType_70);
          NstdPtys2SubGrp_NoNested2PartySubIDs_70.insert(Nested2PartySubIDType_70.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_70);

          noNested2PartyIDs_1_2_2_2.addGroup(noNested2PartySubIDs_1_2_2_3_1);
        }
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_2_2_3_2;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_71;
          FIX::Nested2PartySubID Nested2PartySubID_71("STRING_1062649886");
          noNested2PartySubIDs_1_2_2_3_2.set(Nested2PartySubID_71);
          NstdPtys2SubGrp_NoNested2PartySubIDs_71.insert(Nested2PartySubID_71.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_71(2044994514);
          noNested2PartySubIDs_1_2_2_3_2.set(Nested2PartySubIDType_71);
          NstdPtys2SubGrp_NoNested2PartySubIDs_71.insert(Nested2PartySubIDType_71.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_71);

          noNested2PartyIDs_1_2_2_2.addGroup(noNested2PartySubIDs_1_2_2_3_2);
        }
        noLegAllocs_1_1_2.addGroup(noNested2PartyIDs_1_2_2_2);
      }
      noLegs_0_1.addGroup(noLegAllocs_1_1_2);
    }
    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::ExecutionReport::NoLegs::NoLegStipulations noLegStipulations_1_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_2;
      FIX::LegStipulationType LegStipulationType_2("STRING_638211271");
      noLegStipulations_1_1_0.set(LegStipulationType_2);
      LegStipulations_NoLegStipulations_2.insert(LegStipulationType_2.getString());
      FIX::LegStipulationValue LegStipulationValue_2("STRING_552019617");
      noLegStipulations_1_1_0.set(LegStipulationValue_2);
      LegStipulations_NoLegStipulations_2.insert(LegStipulationValue_2.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_2);

      noLegs_0_1.addGroup(noLegStipulations_1_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoLegs::NoLegStipulations noLegStipulations_1_1_1;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_3;
      FIX::LegStipulationType LegStipulationType_3("STRING_1904077434");
      noLegStipulations_1_1_1.set(LegStipulationType_3);
      LegStipulations_NoLegStipulations_3.insert(LegStipulationType_3.getString());
      FIX::LegStipulationValue LegStipulationValue_3("STRING_346963078");
      noLegStipulations_1_1_1.set(LegStipulationValue_3);
      LegStipulations_NoLegStipulations_3.insert(LegStipulationValue_3.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_3);

      noLegs_0_1.addGroup(noLegStipulations_1_1_1);
    }
    // NestedParties3
    // Group NestedParties3.NoNested3PartyIDs
    {
      FIX50SP2::ExecutionReport::NoLegs::NoNested3PartyIDs noNested3PartyIDs_1_1_0;
      // NestedParties3.NoNested3PartyIDs
      multiset<string> NestedParties3_NoNested3PartyIDs_2;
      FIX::Nested3PartyID Nested3PartyID_2("STRING_1851467112");
      noNested3PartyIDs_1_1_0.set(Nested3PartyID_2);
      NestedParties3_NoNested3PartyIDs_2.insert(Nested3PartyID_2.getString());
      FIX::Nested3PartyIDSource Nested3PartyIDSource_2('5');
      noNested3PartyIDs_1_1_0.set(Nested3PartyIDSource_2);
      NestedParties3_NoNested3PartyIDs_2.insert(Nested3PartyIDSource_2.getString());
      FIX::Nested3PartyRole Nested3PartyRole_2(2028467403);
      noNested3PartyIDs_1_1_0.set(Nested3PartyRole_2);
      NestedParties3_NoNested3PartyIDs_2.insert(Nested3PartyRole_2.getString());
      all_values.push_back(NestedParties3_NoNested3PartyIDs_2);

      // NstdPtys3SubGrp
      // Group NstdPtys3SubGrp.NoNested3PartySubIDs
      {
        FIX50SP2::ExecutionReport::NoLegs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_1_0_2_0;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_3;
        FIX::Nested3PartySubID Nested3PartySubID_3("STRING_1916766033");
        noNested3PartySubIDs_1_0_2_0.set(Nested3PartySubID_3);
        NstdPtys3SubGrp_NoNested3PartySubIDs_3.insert(Nested3PartySubID_3.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_3(668092372);
        noNested3PartySubIDs_1_0_2_0.set(Nested3PartySubIDType_3);
        NstdPtys3SubGrp_NoNested3PartySubIDs_3.insert(Nested3PartySubIDType_3.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_3);

        noNested3PartyIDs_1_1_0.addGroup(noNested3PartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoLegs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_1_0_2_1;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_4;
        FIX::Nested3PartySubID Nested3PartySubID_4("STRING_922552539");
        noNested3PartySubIDs_1_0_2_1.set(Nested3PartySubID_4);
        NstdPtys3SubGrp_NoNested3PartySubIDs_4.insert(Nested3PartySubID_4.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_4(286313127);
        noNested3PartySubIDs_1_0_2_1.set(Nested3PartySubIDType_4);
        NstdPtys3SubGrp_NoNested3PartySubIDs_4.insert(Nested3PartySubIDType_4.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_4);

        noNested3PartyIDs_1_1_0.addGroup(noNested3PartySubIDs_1_0_2_1);
      }
      noLegs_0_1.addGroup(noNested3PartyIDs_1_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoLegs::NoNested3PartyIDs noNested3PartyIDs_1_1_1;
      // NestedParties3.NoNested3PartyIDs
      multiset<string> NestedParties3_NoNested3PartyIDs_3;
      FIX::Nested3PartyID Nested3PartyID_3("STRING_1922036454");
      noNested3PartyIDs_1_1_1.set(Nested3PartyID_3);
      NestedParties3_NoNested3PartyIDs_3.insert(Nested3PartyID_3.getString());
      FIX::Nested3PartyIDSource Nested3PartyIDSource_3('2');
      noNested3PartyIDs_1_1_1.set(Nested3PartyIDSource_3);
      NestedParties3_NoNested3PartyIDs_3.insert(Nested3PartyIDSource_3.getString());
      FIX::Nested3PartyRole Nested3PartyRole_3(323154772);
      noNested3PartyIDs_1_1_1.set(Nested3PartyRole_3);
      NestedParties3_NoNested3PartyIDs_3.insert(Nested3PartyRole_3.getString());
      all_values.push_back(NestedParties3_NoNested3PartyIDs_3);

      // NstdPtys3SubGrp
      // Group NstdPtys3SubGrp.NoNested3PartySubIDs
      {
        FIX50SP2::ExecutionReport::NoLegs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_1_1_2_0;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_5;
        FIX::Nested3PartySubID Nested3PartySubID_5("STRING_835042061");
        noNested3PartySubIDs_1_1_2_0.set(Nested3PartySubID_5);
        NstdPtys3SubGrp_NoNested3PartySubIDs_5.insert(Nested3PartySubID_5.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_5(1949789180);
        noNested3PartySubIDs_1_1_2_0.set(Nested3PartySubIDType_5);
        NstdPtys3SubGrp_NoNested3PartySubIDs_5.insert(Nested3PartySubIDType_5.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_5);

        noNested3PartyIDs_1_1_1.addGroup(noNested3PartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoLegs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_1_1_2_1;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_6;
        FIX::Nested3PartySubID Nested3PartySubID_6("STRING_89792442");
        noNested3PartySubIDs_1_1_2_1.set(Nested3PartySubID_6);
        NstdPtys3SubGrp_NoNested3PartySubIDs_6.insert(Nested3PartySubID_6.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_6(582834574);
        noNested3PartySubIDs_1_1_2_1.set(Nested3PartySubIDType_6);
        NstdPtys3SubGrp_NoNested3PartySubIDs_6.insert(Nested3PartySubIDType_6.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_6);

        noNested3PartyIDs_1_1_1.addGroup(noNested3PartySubIDs_1_1_2_1);
      }
      noLegs_0_1.addGroup(noNested3PartyIDs_1_1_1);
    }
    msg.addGroup(noLegs_0_1);
  }
  {
    FIX50SP2::ExecutionReport::NoLegs noLegs_0_2;
    // InstrmtLegExecGrp.NoLegs
    multiset<string> InstrmtLegExecGrp_NoLegs_2;
    FIX::LegAllocID LegAllocID_2("STRING_37346961");
    noLegs_0_2.set(LegAllocID_2);
    InstrmtLegExecGrp_NoLegs_2.insert(LegAllocID_2.getString());
    FIX::LegCalculatedCcyLastQty LegCalculatedCcyLastQty_2;
    LegCalculatedCcyLastQty_2.setString("276598");
    noLegs_0_2.set(LegCalculatedCcyLastQty_2);
    InstrmtLegExecGrp_NoLegs_2.insert(LegCalculatedCcyLastQty_2.getString());
    FIX::LegCoveredOrUncovered LegCoveredOrUncovered_2(1843148230);
    noLegs_0_2.set(LegCoveredOrUncovered_2);
    InstrmtLegExecGrp_NoLegs_2.insert(LegCoveredOrUncovered_2.getString());
    FIX::LegCurrencyRatio LegCurrencyRatio_2;
    LegCurrencyRatio_2.setString("16695047");
    noLegs_0_2.set(LegCurrencyRatio_2);
    InstrmtLegExecGrp_NoLegs_2.insert(LegCurrencyRatio_2.getString());
    FIX::LegDividendYield LegDividendYield_2;
    LegDividendYield_2.setString("45.420000");
    noLegs_0_2.set(LegDividendYield_2);
    InstrmtLegExecGrp_NoLegs_2.insert(LegDividendYield_2.getString());
    FIX::LegExecInst LegExecInst_2("MULTIPLECHARVALUE_328096844");
    noLegs_0_2.set(LegExecInst_2);
    InstrmtLegExecGrp_NoLegs_2.insert(LegExecInst_2.getString());
    FIX::LegGrossTradeAmt LegGrossTradeAmt_2;
    LegGrossTradeAmt_2.setString("5723719");
    noLegs_0_2.set(LegGrossTradeAmt_2);
    InstrmtLegExecGrp_NoLegs_2.insert(LegGrossTradeAmt_2.getString());
    FIX::LegLastForwardPoints LegLastForwardPoints_2;
    LegLastForwardPoints_2.setString("3079207");
    noLegs_0_2.set(LegLastForwardPoints_2);
    InstrmtLegExecGrp_NoLegs_2.insert(LegLastForwardPoints_2.getString());
    FIX::LegLastPx LegLastPx_2;
    LegLastPx_2.setString("2256077");
    noLegs_0_2.set(LegLastPx_2);
    InstrmtLegExecGrp_NoLegs_2.insert(LegLastPx_2.getString());
    FIX::LegLastQty LegLastQty_2;
    LegLastQty_2.setString("14523714");
    noLegs_0_2.set(LegLastQty_2);
    InstrmtLegExecGrp_NoLegs_2.insert(LegLastQty_2.getString());
    FIX::LegOrderQty LegOrderQty_2;
    LegOrderQty_2.setString("9461320");
    noLegs_0_2.set(LegOrderQty_2);
    InstrmtLegExecGrp_NoLegs_2.insert(LegOrderQty_2.getString());
    FIX::LegPositionEffect LegPositionEffect_2('7');
    noLegs_0_2.set(LegPositionEffect_2);
    InstrmtLegExecGrp_NoLegs_2.insert(LegPositionEffect_2.getString());
    FIX::LegQty LegQty_2;
    LegQty_2.setString("12089651");
    noLegs_0_2.set(LegQty_2);
    InstrmtLegExecGrp_NoLegs_2.insert(LegQty_2.getString());
    FIX::LegRefID LegRefID_2("STRING_1293095130");
    noLegs_0_2.set(LegRefID_2);
    InstrmtLegExecGrp_NoLegs_2.insert(LegRefID_2.getString());
    FIX::LegSettlCurrency LegSettlCurrency_2("EUR");
    noLegs_0_2.set(LegSettlCurrency_2);
    InstrmtLegExecGrp_NoLegs_2.insert(LegSettlCurrency_2.getString());
    FIX::LegSettlDate LegSettlDate_2("LOCALMKTDATE_1796628741");
    noLegs_0_2.set(LegSettlDate_2);
    InstrmtLegExecGrp_NoLegs_2.insert(LegSettlDate_2.getString());
    FIX::LegSettlType LegSettlType_2('4');
    noLegs_0_2.set(LegSettlType_2);
    InstrmtLegExecGrp_NoLegs_2.insert(LegSettlType_2.getString());
    FIX::LegSwapType LegSwapType_2(5);
    noLegs_0_2.set(LegSwapType_2);
    InstrmtLegExecGrp_NoLegs_2.insert(LegSwapType_2.getString());
    FIX::LegVolatility LegVolatility_2;
    LegVolatility_2.setString("15659111");
    noLegs_0_2.set(LegVolatility_2);
    InstrmtLegExecGrp_NoLegs_2.insert(LegVolatility_2.getString());
    all_values.push_back(InstrmtLegExecGrp_NoLegs_2);

    // InstrumentLeg
    multiset<string> InstrumentLeg_48;
    FIX::EncodedLegIssuer EncodedLegIssuer_48("DATA_1081798589");
    noLegs_0_2.set(EncodedLegIssuer_48);
    InstrumentLeg_48.insert(EncodedLegIssuer_48.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_48(1335079434);
    noLegs_0_2.set(EncodedLegIssuerLen_48);
    InstrumentLeg_48.insert(EncodedLegIssuerLen_48.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_48("DATA_1852224253");
    noLegs_0_2.set(EncodedLegSecurityDesc_48);
    InstrumentLeg_48.insert(EncodedLegSecurityDesc_48.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_48(856351395);
    noLegs_0_2.set(EncodedLegSecurityDescLen_48);
    InstrumentLeg_48.insert(EncodedLegSecurityDescLen_48.getString());
    FIX::LegCFICode LegCFICode_48("STRING_1355298726");
    noLegs_0_2.set(LegCFICode_48);
    InstrumentLeg_48.insert(LegCFICode_48.getString());
    FIX::LegContractMultiplier LegContractMultiplier_48;
    LegContractMultiplier_48.setString("278953");
    noLegs_0_2.set(LegContractMultiplier_48);
    InstrumentLeg_48.insert(LegContractMultiplier_48.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_48(1569521498);
    noLegs_0_2.set(LegContractMultiplierUnit_48);
    InstrumentLeg_48.insert(LegContractMultiplierUnit_48.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_48("MONTHYEAR_42857139");
    noLegs_0_2.set(LegContractSettlMonth_48);
    InstrumentLeg_48.insert(LegContractSettlMonth_48.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_48("COUNTRY_1977684558");
    noLegs_0_2.set(LegCountryOfIssue_48);
    InstrumentLeg_48.insert(LegCountryOfIssue_48.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_48("LOCALMKTDATE_1659313940");
    noLegs_0_2.set(LegCouponPaymentDate_48);
    InstrumentLeg_48.insert(LegCouponPaymentDate_48.getString());
    FIX::LegCouponRate LegCouponRate_48;
    LegCouponRate_48.setString("17.140000");
    noLegs_0_2.set(LegCouponRate_48);
    InstrumentLeg_48.insert(LegCouponRate_48.getString());
    FIX::LegCreditRating LegCreditRating_48("STRING_2015031519");
    noLegs_0_2.set(LegCreditRating_48);
    InstrumentLeg_48.insert(LegCreditRating_48.getString());
    FIX::LegCurrency LegCurrency_48("JPY");
    noLegs_0_2.set(LegCurrency_48);
    InstrumentLeg_48.insert(LegCurrency_48.getString());
    FIX::LegDatedDate LegDatedDate_48("LOCALMKTDATE_1537052605");
    noLegs_0_2.set(LegDatedDate_48);
    InstrumentLeg_48.insert(LegDatedDate_48.getString());
    FIX::LegExerciseStyle LegExerciseStyle_48(932244639);
    noLegs_0_2.set(LegExerciseStyle_48);
    InstrumentLeg_48.insert(LegExerciseStyle_48.getString());
    FIX::LegFactor LegFactor_48;
    LegFactor_48.setString("6494531");
    noLegs_0_2.set(LegFactor_48);
    InstrumentLeg_48.insert(LegFactor_48.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_48(2109424552);
    noLegs_0_2.set(LegFlowScheduleType_48);
    InstrumentLeg_48.insert(LegFlowScheduleType_48.getString());
    FIX::LegInstrRegistry LegInstrRegistry_48("STRING_1240165420");
    noLegs_0_2.set(LegInstrRegistry_48);
    InstrumentLeg_48.insert(LegInstrRegistry_48.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_48("LOCALMKTDATE_875060850");
    noLegs_0_2.set(LegInterestAccrualDate_48);
    InstrumentLeg_48.insert(LegInterestAccrualDate_48.getString());
    FIX::LegIssueDate LegIssueDate_48("LOCALMKTDATE_1414312309");
    noLegs_0_2.set(LegIssueDate_48);
    InstrumentLeg_48.insert(LegIssueDate_48.getString());
    FIX::LegIssuer LegIssuer_48("STRING_38813824");
    noLegs_0_2.set(LegIssuer_48);
    InstrumentLeg_48.insert(LegIssuer_48.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_48("STRING_1652688177");
    noLegs_0_2.set(LegLocaleOfIssue_48);
    InstrumentLeg_48.insert(LegLocaleOfIssue_48.getString());
    FIX::LegMaturityDate LegMaturityDate_48("LOCALMKTDATE_475793852");
    noLegs_0_2.set(LegMaturityDate_48);
    InstrumentLeg_48.insert(LegMaturityDate_48.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_48("MONTHYEAR_1331908954");
    noLegs_0_2.set(LegMaturityMonthYear_48);
    InstrumentLeg_48.insert(LegMaturityMonthYear_48.getString());
    FIX::LegMaturityTime LegMaturityTime_48("TZTIMEONLY_37926990");
    noLegs_0_2.set(LegMaturityTime_48);
    InstrumentLeg_48.insert(LegMaturityTime_48.getString());
    FIX::LegOptAttribute LegOptAttribute_48('1');
    noLegs_0_2.set(LegOptAttribute_48);
    InstrumentLeg_48.insert(LegOptAttribute_48.getString());
    FIX::LegOptionRatio LegOptionRatio_48;
    LegOptionRatio_48.setString("9810540");
    noLegs_0_2.set(LegOptionRatio_48);
    InstrumentLeg_48.insert(LegOptionRatio_48.getString());
    FIX::LegPool LegPool_48("STRING_451633207");
    noLegs_0_2.set(LegPool_48);
    InstrumentLeg_48.insert(LegPool_48.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_48("STRING_1801269402");
    noLegs_0_2.set(LegPriceUnitOfMeasure_48);
    InstrumentLeg_48.insert(LegPriceUnitOfMeasure_48.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_48;
    LegPriceUnitOfMeasureQty_48.setString("3994815");
    noLegs_0_2.set(LegPriceUnitOfMeasureQty_48);
    InstrumentLeg_48.insert(LegPriceUnitOfMeasureQty_48.getString());
    FIX::LegProduct LegProduct_48(1533431796);
    noLegs_0_2.set(LegProduct_48);
    InstrumentLeg_48.insert(LegProduct_48.getString());
    FIX::LegPutOrCall LegPutOrCall_48(988865189);
    noLegs_0_2.set(LegPutOrCall_48);
    InstrumentLeg_48.insert(LegPutOrCall_48.getString());
    FIX::LegRatioQty LegRatioQty_48;
    LegRatioQty_48.setString("1042221");
    noLegs_0_2.set(LegRatioQty_48);
    InstrumentLeg_48.insert(LegRatioQty_48.getString());
    FIX::LegRedemptionDate LegRedemptionDate_48("LOCALMKTDATE_242299544");
    noLegs_0_2.set(LegRedemptionDate_48);
    InstrumentLeg_48.insert(LegRedemptionDate_48.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_48("STRING_196680267");
    noLegs_0_2.set(LegRepoCollateralSecurityType_48);
    InstrumentLeg_48.insert(LegRepoCollateralSecurityType_48.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_48;
    LegRepurchaseRate_48.setString("75.090000");
    noLegs_0_2.set(LegRepurchaseRate_48);
    InstrumentLeg_48.insert(LegRepurchaseRate_48.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_48(1811821042);
    noLegs_0_2.set(LegRepurchaseTerm_48);
    InstrumentLeg_48.insert(LegRepurchaseTerm_48.getString());
    FIX::LegSecurityDesc LegSecurityDesc_48("STRING_239537406");
    noLegs_0_2.set(LegSecurityDesc_48);
    InstrumentLeg_48.insert(LegSecurityDesc_48.getString());
    FIX::LegSecurityExchange LegSecurityExchange_48("EXCHANGE_2109802067");
    noLegs_0_2.set(LegSecurityExchange_48);
    InstrumentLeg_48.insert(LegSecurityExchange_48.getString());
    FIX::LegSecurityID LegSecurityID_48("STRING_1323651334");
    noLegs_0_2.set(LegSecurityID_48);
    InstrumentLeg_48.insert(LegSecurityID_48.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_48("STRING_865229120");
    noLegs_0_2.set(LegSecurityIDSource_48);
    InstrumentLeg_48.insert(LegSecurityIDSource_48.getString());
    FIX::LegSecuritySubType LegSecuritySubType_48("STRING_1977349938");
    noLegs_0_2.set(LegSecuritySubType_48);
    InstrumentLeg_48.insert(LegSecuritySubType_48.getString());
    FIX::LegSecurityType LegSecurityType_48("STRING_863141431");
    noLegs_0_2.set(LegSecurityType_48);
    InstrumentLeg_48.insert(LegSecurityType_48.getString());
    FIX::LegSide LegSide_48('1');
    noLegs_0_2.set(LegSide_48);
    InstrumentLeg_48.insert(LegSide_48.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_48("STRING_1366918896");
    noLegs_0_2.set(LegStateOrProvinceOfIssue_48);
    InstrumentLeg_48.insert(LegStateOrProvinceOfIssue_48.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_48("USD");
    noLegs_0_2.set(LegStrikeCurrency_48);
    InstrumentLeg_48.insert(LegStrikeCurrency_48.getString());
    FIX::LegStrikePrice LegStrikePrice_48;
    LegStrikePrice_48.setString("13288598");
    noLegs_0_2.set(LegStrikePrice_48);
    InstrumentLeg_48.insert(LegStrikePrice_48.getString());
    FIX::LegSymbol LegSymbol_48("STRING_888067842");
    noLegs_0_2.set(LegSymbol_48);
    InstrumentLeg_48.insert(LegSymbol_48.getString());
    FIX::LegSymbolSfx LegSymbolSfx_48("STRING_563615758");
    noLegs_0_2.set(LegSymbolSfx_48);
    InstrumentLeg_48.insert(LegSymbolSfx_48.getString());
    FIX::LegTimeUnit LegTimeUnit_48("STRING_595688461");
    noLegs_0_2.set(LegTimeUnit_48);
    InstrumentLeg_48.insert(LegTimeUnit_48.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_48("STRING_926881666");
    noLegs_0_2.set(LegUnitOfMeasure_48);
    InstrumentLeg_48.insert(LegUnitOfMeasure_48.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_48;
    LegUnitOfMeasureQty_48.setString("688202");
    noLegs_0_2.set(LegUnitOfMeasureQty_48);
    InstrumentLeg_48.insert(LegUnitOfMeasureQty_48.getString());
    all_values.push_back(InstrumentLeg_48);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::ExecutionReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_90;
      FIX::LegSecurityAltID LegSecurityAltID_90("STRING_111306972");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltID_90);
      LegSecAltIDGrp_NoLegSecurityAltID_90.insert(LegSecurityAltID_90.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_90("STRING_106747278");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltIDSource_90);
      LegSecAltIDGrp_NoLegSecurityAltID_90.insert(LegSecurityAltIDSource_90.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_90);

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_0);
    }
    // LegPreAllocGrp
    // Group LegPreAllocGrp.NoLegAllocs
    {
      FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs noLegAllocs_2_1_0;
      // LegPreAllocGrp.NoLegAllocs
      multiset<string> LegPreAllocGrp_NoLegAllocs_6;
      FIX::LegAllocAccount LegAllocAccount_6("STRING_1092361020");
      noLegAllocs_2_1_0.set(LegAllocAccount_6);
      LegPreAllocGrp_NoLegAllocs_6.insert(LegAllocAccount_6.getString());
      FIX::LegAllocAcctIDSource LegAllocAcctIDSource_6("STRING_558380485");
      noLegAllocs_2_1_0.set(LegAllocAcctIDSource_6);
      LegPreAllocGrp_NoLegAllocs_6.insert(LegAllocAcctIDSource_6.getString());
      FIX::LegAllocQty LegAllocQty_6;
      LegAllocQty_6.setString("21140105");
      noLegAllocs_2_1_0.set(LegAllocQty_6);
      LegPreAllocGrp_NoLegAllocs_6.insert(LegAllocQty_6.getString());
      FIX::LegAllocSettlCurrency LegAllocSettlCurrency_6("GBP");
      noLegAllocs_2_1_0.set(LegAllocSettlCurrency_6);
      LegPreAllocGrp_NoLegAllocs_6.insert(LegAllocSettlCurrency_6.getString());
      FIX::LegIndividualAllocID LegIndividualAllocID_6("STRING_955392116");
      noLegAllocs_2_1_0.set(LegIndividualAllocID_6);
      LegPreAllocGrp_NoLegAllocs_6.insert(LegIndividualAllocID_6.getString());
      all_values.push_back(LegPreAllocGrp_NoLegAllocs_6);

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_2_0_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_37;
        FIX::Nested2PartyID Nested2PartyID_37("STRING_186628178");
        noNested2PartyIDs_2_0_2_0.set(Nested2PartyID_37);
        NestedParties2_NoNested2PartyIDs_37.insert(Nested2PartyID_37.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_37('1');
        noNested2PartyIDs_2_0_2_0.set(Nested2PartyIDSource_37);
        NestedParties2_NoNested2PartyIDs_37.insert(Nested2PartyIDSource_37.getString());
        FIX::Nested2PartyRole Nested2PartyRole_37(1728182187);
        noNested2PartyIDs_2_0_2_0.set(Nested2PartyRole_37);
        NestedParties2_NoNested2PartyIDs_37.insert(Nested2PartyRole_37.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_37);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_0_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_72;
          FIX::Nested2PartySubID Nested2PartySubID_72("STRING_1391609789");
          noNested2PartySubIDs_2_0_0_3_0.set(Nested2PartySubID_72);
          NstdPtys2SubGrp_NoNested2PartySubIDs_72.insert(Nested2PartySubID_72.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_72(1690500606);
          noNested2PartySubIDs_2_0_0_3_0.set(Nested2PartySubIDType_72);
          NstdPtys2SubGrp_NoNested2PartySubIDs_72.insert(Nested2PartySubIDType_72.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_72);

          noNested2PartyIDs_2_0_2_0.addGroup(noNested2PartySubIDs_2_0_0_3_0);
        }
        noLegAllocs_2_1_0.addGroup(noNested2PartyIDs_2_0_2_0);
      }
      noLegs_0_2.addGroup(noLegAllocs_2_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs noLegAllocs_2_1_1;
      // LegPreAllocGrp.NoLegAllocs
      multiset<string> LegPreAllocGrp_NoLegAllocs_7;
      FIX::LegAllocAccount LegAllocAccount_7("STRING_1174616906");
      noLegAllocs_2_1_1.set(LegAllocAccount_7);
      LegPreAllocGrp_NoLegAllocs_7.insert(LegAllocAccount_7.getString());
      FIX::LegAllocAcctIDSource LegAllocAcctIDSource_7("STRING_109355262");
      noLegAllocs_2_1_1.set(LegAllocAcctIDSource_7);
      LegPreAllocGrp_NoLegAllocs_7.insert(LegAllocAcctIDSource_7.getString());
      FIX::LegAllocQty LegAllocQty_7;
      LegAllocQty_7.setString("15203668");
      noLegAllocs_2_1_1.set(LegAllocQty_7);
      LegPreAllocGrp_NoLegAllocs_7.insert(LegAllocQty_7.getString());
      FIX::LegAllocSettlCurrency LegAllocSettlCurrency_7("USD");
      noLegAllocs_2_1_1.set(LegAllocSettlCurrency_7);
      LegPreAllocGrp_NoLegAllocs_7.insert(LegAllocSettlCurrency_7.getString());
      FIX::LegIndividualAllocID LegIndividualAllocID_7("STRING_739802145");
      noLegAllocs_2_1_1.set(LegIndividualAllocID_7);
      LegPreAllocGrp_NoLegAllocs_7.insert(LegIndividualAllocID_7.getString());
      all_values.push_back(LegPreAllocGrp_NoLegAllocs_7);

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_2_1_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_38;
        FIX::Nested2PartyID Nested2PartyID_38("STRING_984495587");
        noNested2PartyIDs_2_1_2_0.set(Nested2PartyID_38);
        NestedParties2_NoNested2PartyIDs_38.insert(Nested2PartyID_38.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_38('2');
        noNested2PartyIDs_2_1_2_0.set(Nested2PartyIDSource_38);
        NestedParties2_NoNested2PartyIDs_38.insert(Nested2PartyIDSource_38.getString());
        FIX::Nested2PartyRole Nested2PartyRole_38(426244953);
        noNested2PartyIDs_2_1_2_0.set(Nested2PartyRole_38);
        NestedParties2_NoNested2PartyIDs_38.insert(Nested2PartyRole_38.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_38);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_1_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_73;
          FIX::Nested2PartySubID Nested2PartySubID_73("STRING_516866759");
          noNested2PartySubIDs_2_1_0_3_0.set(Nested2PartySubID_73);
          NstdPtys2SubGrp_NoNested2PartySubIDs_73.insert(Nested2PartySubID_73.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_73(1353126619);
          noNested2PartySubIDs_2_1_0_3_0.set(Nested2PartySubIDType_73);
          NstdPtys2SubGrp_NoNested2PartySubIDs_73.insert(Nested2PartySubIDType_73.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_73);

          noNested2PartyIDs_2_1_2_0.addGroup(noNested2PartySubIDs_2_1_0_3_0);
        }
        noLegAllocs_2_1_1.addGroup(noNested2PartyIDs_2_1_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_2_1_2_1;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_39;
        FIX::Nested2PartyID Nested2PartyID_39("STRING_1616931633");
        noNested2PartyIDs_2_1_2_1.set(Nested2PartyID_39);
        NestedParties2_NoNested2PartyIDs_39.insert(Nested2PartyID_39.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_39('1');
        noNested2PartyIDs_2_1_2_1.set(Nested2PartyIDSource_39);
        NestedParties2_NoNested2PartyIDs_39.insert(Nested2PartyIDSource_39.getString());
        FIX::Nested2PartyRole Nested2PartyRole_39(1464433592);
        noNested2PartyIDs_2_1_2_1.set(Nested2PartyRole_39);
        NestedParties2_NoNested2PartyIDs_39.insert(Nested2PartyRole_39.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_39);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_1_1_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_74;
          FIX::Nested2PartySubID Nested2PartySubID_74("STRING_1901090245");
          noNested2PartySubIDs_2_1_1_3_0.set(Nested2PartySubID_74);
          NstdPtys2SubGrp_NoNested2PartySubIDs_74.insert(Nested2PartySubID_74.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_74(409310964);
          noNested2PartySubIDs_2_1_1_3_0.set(Nested2PartySubIDType_74);
          NstdPtys2SubGrp_NoNested2PartySubIDs_74.insert(Nested2PartySubIDType_74.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_74);

          noNested2PartyIDs_2_1_2_1.addGroup(noNested2PartySubIDs_2_1_1_3_0);
        }
        noLegAllocs_2_1_1.addGroup(noNested2PartyIDs_2_1_2_1);
      }
      {
        FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_2_1_2_2;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_40;
        FIX::Nested2PartyID Nested2PartyID_40("STRING_134575748");
        noNested2PartyIDs_2_1_2_2.set(Nested2PartyID_40);
        NestedParties2_NoNested2PartyIDs_40.insert(Nested2PartyID_40.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_40('1');
        noNested2PartyIDs_2_1_2_2.set(Nested2PartyIDSource_40);
        NestedParties2_NoNested2PartyIDs_40.insert(Nested2PartyIDSource_40.getString());
        FIX::Nested2PartyRole Nested2PartyRole_40(1901153510);
        noNested2PartyIDs_2_1_2_2.set(Nested2PartyRole_40);
        NestedParties2_NoNested2PartyIDs_40.insert(Nested2PartyRole_40.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_40);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_1_2_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_75;
          FIX::Nested2PartySubID Nested2PartySubID_75("STRING_675525640");
          noNested2PartySubIDs_2_1_2_3_0.set(Nested2PartySubID_75);
          NstdPtys2SubGrp_NoNested2PartySubIDs_75.insert(Nested2PartySubID_75.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_75(1349734539);
          noNested2PartySubIDs_2_1_2_3_0.set(Nested2PartySubIDType_75);
          NstdPtys2SubGrp_NoNested2PartySubIDs_75.insert(Nested2PartySubIDType_75.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_75);

          noNested2PartyIDs_2_1_2_2.addGroup(noNested2PartySubIDs_2_1_2_3_0);
        }
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_1_2_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_76;
          FIX::Nested2PartySubID Nested2PartySubID_76("STRING_265532560");
          noNested2PartySubIDs_2_1_2_3_1.set(Nested2PartySubID_76);
          NstdPtys2SubGrp_NoNested2PartySubIDs_76.insert(Nested2PartySubID_76.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_76(1827598023);
          noNested2PartySubIDs_2_1_2_3_1.set(Nested2PartySubIDType_76);
          NstdPtys2SubGrp_NoNested2PartySubIDs_76.insert(Nested2PartySubIDType_76.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_76);

          noNested2PartyIDs_2_1_2_2.addGroup(noNested2PartySubIDs_2_1_2_3_1);
        }
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_1_2_3_2;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_77;
          FIX::Nested2PartySubID Nested2PartySubID_77("STRING_930433078");
          noNested2PartySubIDs_2_1_2_3_2.set(Nested2PartySubID_77);
          NstdPtys2SubGrp_NoNested2PartySubIDs_77.insert(Nested2PartySubID_77.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_77(116498132);
          noNested2PartySubIDs_2_1_2_3_2.set(Nested2PartySubIDType_77);
          NstdPtys2SubGrp_NoNested2PartySubIDs_77.insert(Nested2PartySubIDType_77.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_77);

          noNested2PartyIDs_2_1_2_2.addGroup(noNested2PartySubIDs_2_1_2_3_2);
        }
        noLegAllocs_2_1_1.addGroup(noNested2PartyIDs_2_1_2_2);
      }
      noLegs_0_2.addGroup(noLegAllocs_2_1_1);
    }
    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::ExecutionReport::NoLegs::NoLegStipulations noLegStipulations_2_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_4;
      FIX::LegStipulationType LegStipulationType_4("STRING_473450037");
      noLegStipulations_2_1_0.set(LegStipulationType_4);
      LegStipulations_NoLegStipulations_4.insert(LegStipulationType_4.getString());
      FIX::LegStipulationValue LegStipulationValue_4("STRING_1291115039");
      noLegStipulations_2_1_0.set(LegStipulationValue_4);
      LegStipulations_NoLegStipulations_4.insert(LegStipulationValue_4.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_4);

      noLegs_0_2.addGroup(noLegStipulations_2_1_0);
    }
    // NestedParties3
    // Group NestedParties3.NoNested3PartyIDs
    {
      FIX50SP2::ExecutionReport::NoLegs::NoNested3PartyIDs noNested3PartyIDs_2_1_0;
      // NestedParties3.NoNested3PartyIDs
      multiset<string> NestedParties3_NoNested3PartyIDs_4;
      FIX::Nested3PartyID Nested3PartyID_4("STRING_1993816934");
      noNested3PartyIDs_2_1_0.set(Nested3PartyID_4);
      NestedParties3_NoNested3PartyIDs_4.insert(Nested3PartyID_4.getString());
      FIX::Nested3PartyIDSource Nested3PartyIDSource_4('1');
      noNested3PartyIDs_2_1_0.set(Nested3PartyIDSource_4);
      NestedParties3_NoNested3PartyIDs_4.insert(Nested3PartyIDSource_4.getString());
      FIX::Nested3PartyRole Nested3PartyRole_4(329536457);
      noNested3PartyIDs_2_1_0.set(Nested3PartyRole_4);
      NestedParties3_NoNested3PartyIDs_4.insert(Nested3PartyRole_4.getString());
      all_values.push_back(NestedParties3_NoNested3PartyIDs_4);

      // NstdPtys3SubGrp
      // Group NstdPtys3SubGrp.NoNested3PartySubIDs
      {
        FIX50SP2::ExecutionReport::NoLegs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_2_0_2_0;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_7;
        FIX::Nested3PartySubID Nested3PartySubID_7("STRING_719566840");
        noNested3PartySubIDs_2_0_2_0.set(Nested3PartySubID_7);
        NstdPtys3SubGrp_NoNested3PartySubIDs_7.insert(Nested3PartySubID_7.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_7(1314032044);
        noNested3PartySubIDs_2_0_2_0.set(Nested3PartySubIDType_7);
        NstdPtys3SubGrp_NoNested3PartySubIDs_7.insert(Nested3PartySubIDType_7.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_7);

        noNested3PartyIDs_2_1_0.addGroup(noNested3PartySubIDs_2_0_2_0);
      }
      noLegs_0_2.addGroup(noNested3PartyIDs_2_1_0);
    }
    msg.addGroup(noLegs_0_2);
  }
  // Instrument
  multiset<string> Instrument_27;
  FIX::AttachmentPoint AttachmentPoint_27;
  AttachmentPoint_27.setString("37.280000");
  msg.set(AttachmentPoint_27);
  Instrument_27.insert(AttachmentPoint_27.getString());
  FIX::CFICode CFICode_27("STRING_1145811793");
  msg.set(CFICode_27);
  Instrument_27.insert(CFICode_27.getString());
  FIX::CPProgram CPProgram_27(99);
  msg.set(CPProgram_27);
  Instrument_27.insert(CPProgram_27.getString());
  FIX::CPRegType CPRegType_27("STRING_1024180487");
  msg.set(CPRegType_27);
  Instrument_27.insert(CPRegType_27.getString());
  FIX::CapPrice CapPrice_27;
  CapPrice_27.setString("3514547");
  msg.set(CapPrice_27);
  Instrument_27.insert(CapPrice_27.getString());
  FIX::ContractMultiplier ContractMultiplier_27;
  ContractMultiplier_27.setString("1841077");
  msg.set(ContractMultiplier_27);
  Instrument_27.insert(ContractMultiplier_27.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_27(0);
  msg.set(ContractMultiplierUnit_27);
  Instrument_27.insert(ContractMultiplierUnit_27.getString());
  FIX::ContractSettlMonth ContractSettlMonth_27("MONTHYEAR_1815888357");
  msg.set(ContractSettlMonth_27);
  Instrument_27.insert(ContractSettlMonth_27.getString());
  FIX::CountryOfIssue CountryOfIssue_27("COUNTRY_1907786637");
  msg.set(CountryOfIssue_27);
  Instrument_27.insert(CountryOfIssue_27.getString());
  FIX::CouponPaymentDate CouponPaymentDate_27("LOCALMKTDATE_218652509");
  msg.set(CouponPaymentDate_27);
  Instrument_27.insert(CouponPaymentDate_27.getString());
  FIX::CouponRate CouponRate_27;
  CouponRate_27.setString("56.730000");
  msg.set(CouponRate_27);
  Instrument_27.insert(CouponRate_27.getString());
  FIX::CreditRating CreditRating_27("STRING_2042362386");
  msg.set(CreditRating_27);
  Instrument_27.insert(CreditRating_27.getString());
  FIX::DatedDate DatedDate_27("LOCALMKTDATE_2086269681");
  msg.set(DatedDate_27);
  Instrument_27.insert(DatedDate_27.getString());
  FIX::DetachmentPoint DetachmentPoint_27;
  DetachmentPoint_27.setString("91.830000");
  msg.set(DetachmentPoint_27);
  Instrument_27.insert(DetachmentPoint_27.getString());
  FIX::EncodedIssuer EncodedIssuer_27("DATA_2121266768");
  msg.set(EncodedIssuer_27);
  Instrument_27.insert(EncodedIssuer_27.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_27(614311673);
  msg.set(EncodedIssuerLen_27);
  Instrument_27.insert(EncodedIssuerLen_27.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_27("DATA_1181120074");
  msg.set(EncodedSecurityDesc_27);
  Instrument_27.insert(EncodedSecurityDesc_27.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_27(239315681);
  msg.set(EncodedSecurityDescLen_27);
  Instrument_27.insert(EncodedSecurityDescLen_27.getString());
  FIX::ExerciseStyle ExerciseStyle_27(0);
  msg.set(ExerciseStyle_27);
  Instrument_27.insert(ExerciseStyle_27.getString());
  FIX::Factor Factor_27;
  Factor_27.setString("21115531");
  msg.set(Factor_27);
  Instrument_27.insert(Factor_27.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_27(false);
  msg.set(FlexProductEligibilityIndicator_27);
  Instrument_27.insert(FlexProductEligibilityIndicator_27.getString());
  FIX::FlexibleIndicator FlexibleIndicator_27(true);
  msg.set(FlexibleIndicator_27);
  Instrument_27.insert(FlexibleIndicator_27.getString());
  FIX::FloorPrice FloorPrice_27;
  FloorPrice_27.setString("4375195");
  msg.set(FloorPrice_27);
  Instrument_27.insert(FloorPrice_27.getString());
  FIX::FlowScheduleType FlowScheduleType_27(2);
  msg.set(FlowScheduleType_27);
  Instrument_27.insert(FlowScheduleType_27.getString());
  FIX::InstrRegistry InstrRegistry_27("STRING_399745991");
  msg.set(InstrRegistry_27);
  Instrument_27.insert(InstrRegistry_27.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_27('2');
  msg.set(InstrmtAssignmentMethod_27);
  Instrument_27.insert(InstrmtAssignmentMethod_27.getString());
  FIX::InterestAccrualDate InterestAccrualDate_27("LOCALMKTDATE_680834933");
  msg.set(InterestAccrualDate_27);
  Instrument_27.insert(InterestAccrualDate_27.getString());
  FIX::IssueDate IssueDate_27("LOCALMKTDATE_729282448");
  msg.set(IssueDate_27);
  Instrument_27.insert(IssueDate_27.getString());
  FIX::Issuer Issuer_27("STRING_869988259");
  msg.set(Issuer_27);
  Instrument_27.insert(Issuer_27.getString());
  FIX::ListMethod ListMethod_27(1);
  msg.set(ListMethod_27);
  Instrument_27.insert(ListMethod_27.getString());
  FIX::LocaleOfIssue LocaleOfIssue_27("STRING_2043314492");
  msg.set(LocaleOfIssue_27);
  Instrument_27.insert(LocaleOfIssue_27.getString());
  FIX::MaturityDate MaturityDate_27("LOCALMKTDATE_1377301987");
  msg.set(MaturityDate_27);
  Instrument_27.insert(MaturityDate_27.getString());
  FIX::MaturityMonthYear MaturityMonthYear_27("MONTHYEAR_398729918");
  msg.set(MaturityMonthYear_27);
  Instrument_27.insert(MaturityMonthYear_27.getString());
  FIX::MaturityTime MaturityTime_27("TZTIMEONLY_610490585");
  msg.set(MaturityTime_27);
  Instrument_27.insert(MaturityTime_27.getString());
  FIX::MinPriceIncrement MinPriceIncrement_27;
  MinPriceIncrement_27.setString("2539988");
  msg.set(MinPriceIncrement_27);
  Instrument_27.insert(MinPriceIncrement_27.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_27;
  MinPriceIncrementAmount_27.setString("7501846");
  msg.set(MinPriceIncrementAmount_27);
  Instrument_27.insert(MinPriceIncrementAmount_27.getString());
  FIX::NTPositionLimit NTPositionLimit_27(794598312);
  msg.set(NTPositionLimit_27);
  Instrument_27.insert(NTPositionLimit_27.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_27;
  NotionalPercentageOutstanding_27.setString("47.390000");
  msg.set(NotionalPercentageOutstanding_27);
  Instrument_27.insert(NotionalPercentageOutstanding_27.getString());
  FIX::OptAttribute OptAttribute_27('4');
  msg.set(OptAttribute_27);
  Instrument_27.insert(OptAttribute_27.getString());
  FIX::OptPayoutAmount OptPayoutAmount_27;
  OptPayoutAmount_27.setString("5549013");
  msg.set(OptPayoutAmount_27);
  Instrument_27.insert(OptPayoutAmount_27.getString());
  FIX::OptPayoutType OptPayoutType_27(2);
  msg.set(OptPayoutType_27);
  Instrument_27.insert(OptPayoutType_27.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_27;
  OriginalNotionalPercentageOutstanding_27.setString("50.650000");
  msg.set(OriginalNotionalPercentageOutstanding_27);
  Instrument_27.insert(OriginalNotionalPercentageOutstanding_27.getString());
  FIX::Pool Pool_27("STRING_449780039");
  msg.set(Pool_27);
  Instrument_27.insert(Pool_27.getString());
  FIX::PositionLimit PositionLimit_27(876483281);
  msg.set(PositionLimit_27);
  Instrument_27.insert(PositionLimit_27.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_27("STRING_STD");
  msg.set(PriceQuoteMethod_27);
  Instrument_27.insert(PriceQuoteMethod_27.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_27("STRING_423563160");
  msg.set(PriceUnitOfMeasure_27);
  Instrument_27.insert(PriceUnitOfMeasure_27.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_27;
  PriceUnitOfMeasureQty_27.setString("14907949");
  msg.set(PriceUnitOfMeasureQty_27);
  Instrument_27.insert(PriceUnitOfMeasureQty_27.getString());
  FIX::Product Product_29(9);
  msg.set(Product_29);
  Instrument_27.insert(Product_29.getString());
  FIX::ProductComplex ProductComplex_27("STRING_662878841");
  msg.set(ProductComplex_27);
  Instrument_27.insert(ProductComplex_27.getString());
  FIX::PutOrCall PutOrCall_27(0);
  msg.set(PutOrCall_27);
  Instrument_27.insert(PutOrCall_27.getString());
  FIX::RedemptionDate RedemptionDate_27("LOCALMKTDATE_1472880180");
  msg.set(RedemptionDate_27);
  Instrument_27.insert(RedemptionDate_27.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_27("STRING_1018692654");
  msg.set(RepoCollateralSecurityType_27);
  Instrument_27.insert(RepoCollateralSecurityType_27.getString());
  FIX::RepurchaseRate RepurchaseRate_27;
  RepurchaseRate_27.setString("75.660000");
  msg.set(RepurchaseRate_27);
  Instrument_27.insert(RepurchaseRate_27.getString());
  FIX::RepurchaseTerm RepurchaseTerm_27(1910399722);
  msg.set(RepurchaseTerm_27);
  Instrument_27.insert(RepurchaseTerm_27.getString());
  FIX::RestructuringType RestructuringType_27("STRING_XR");
  msg.set(RestructuringType_27);
  Instrument_27.insert(RestructuringType_27.getString());
  FIX::SecurityDesc SecurityDesc_27("STRING_1403633557");
  msg.set(SecurityDesc_27);
  Instrument_27.insert(SecurityDesc_27.getString());
  FIX::SecurityExchange SecurityExchange_27("EXCHANGE_46768902");
  msg.set(SecurityExchange_27);
  Instrument_27.insert(SecurityExchange_27.getString());
  FIX::SecurityGroup SecurityGroup_27("STRING_1198972792");
  msg.set(SecurityGroup_27);
  Instrument_27.insert(SecurityGroup_27.getString());
  FIX::SecurityID SecurityID_27("STRING_2132916005");
  msg.set(SecurityID_27);
  Instrument_27.insert(SecurityID_27.getString());
  FIX::SecurityIDSource SecurityIDSource_27("STRING_2");
  msg.set(SecurityIDSource_27);
  Instrument_27.insert(SecurityIDSource_27.getString());
  FIX::SecurityStatus SecurityStatus_27("STRING_2");
  msg.set(SecurityStatus_27);
  Instrument_27.insert(SecurityStatus_27.getString());
  FIX::SecuritySubType SecuritySubType_28("STRING_2028746849");
  msg.set(SecuritySubType_28);
  Instrument_27.insert(SecuritySubType_28.getString());
  FIX::SecurityType SecurityType_29("STRING_SECLOAN");
  msg.set(SecurityType_29);
  Instrument_27.insert(SecurityType_29.getString());
  FIX::Seniority Seniority_27("STRING_SR");
  msg.set(Seniority_27);
  Instrument_27.insert(Seniority_27.getString());
  FIX::SettlMethod SettlMethod_27('P');
  msg.set(SettlMethod_27);
  Instrument_27.insert(SettlMethod_27.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_27("STRING_400574327");
  msg.set(SettleOnOpenFlag_27);
  Instrument_27.insert(SettleOnOpenFlag_27.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_27("STRING_1600805519");
  msg.set(StateOrProvinceOfIssue_27);
  Instrument_27.insert(StateOrProvinceOfIssue_27.getString());
  FIX::StrikeCurrency StrikeCurrency_27("JPY");
  msg.set(StrikeCurrency_27);
  Instrument_27.insert(StrikeCurrency_27.getString());
  FIX::StrikeMultiplier StrikeMultiplier_27;
  StrikeMultiplier_27.setString("20193949");
  msg.set(StrikeMultiplier_27);
  Instrument_27.insert(StrikeMultiplier_27.getString());
  FIX::StrikePrice StrikePrice_27;
  StrikePrice_27.setString("18412534");
  msg.set(StrikePrice_27);
  Instrument_27.insert(StrikePrice_27.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_27(5);
  msg.set(StrikePriceBoundaryMethod_27);
  Instrument_27.insert(StrikePriceBoundaryMethod_27.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_27;
  StrikePriceBoundaryPrecision_27.setString("63.290000");
  msg.set(StrikePriceBoundaryPrecision_27);
  Instrument_27.insert(StrikePriceBoundaryPrecision_27.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_27(1);
  msg.set(StrikePriceDeterminationMethod_27);
  Instrument_27.insert(StrikePriceDeterminationMethod_27.getString());
  FIX::StrikeValue StrikeValue_27;
  StrikeValue_27.setString("7863159");
  msg.set(StrikeValue_27);
  Instrument_27.insert(StrikeValue_27.getString());
  FIX::Symbol Symbol_27("STRING_695906929");
  msg.set(Symbol_27);
  Instrument_27.insert(Symbol_27.getString());
  FIX::SymbolSfx SymbolSfx_27("STRING_CD");
  msg.set(SymbolSfx_27);
  Instrument_27.insert(SymbolSfx_27.getString());
  FIX::TimeUnit TimeUnit_27("STRING_H");
  msg.set(TimeUnit_27);
  Instrument_27.insert(TimeUnit_27.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_27(1);
  msg.set(UnderlyingPriceDeterminationMethod_27);
  Instrument_27.insert(UnderlyingPriceDeterminationMethod_27.getString());
  FIX::UnitOfMeasure UnitOfMeasure_27("STRING_Bbl");
  msg.set(UnitOfMeasure_27);
  Instrument_27.insert(UnitOfMeasure_27.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_27;
  UnitOfMeasureQty_27.setString("19148482");
  msg.set(UnitOfMeasureQty_27);
  Instrument_27.insert(UnitOfMeasureQty_27.getString());
  FIX::ValuationMethod ValuationMethod_27("STRING_FUT");
  msg.set(ValuationMethod_27);
  Instrument_27.insert(ValuationMethod_27.getString());
  all_values.push_back(Instrument_27);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::ExecutionReport::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_48;
    FIX::ComplexEventCondition ComplexEventCondition_48(1);
    noComplexEvents_0_0.set(ComplexEventCondition_48);
    ComplexEvents_NoComplexEvents_48.insert(ComplexEventCondition_48.getString());
    FIX::ComplexEventPrice ComplexEventPrice_48;
    ComplexEventPrice_48.setString("12930302");
    noComplexEvents_0_0.set(ComplexEventPrice_48);
    ComplexEvents_NoComplexEvents_48.insert(ComplexEventPrice_48.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_48(4);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_48);
    ComplexEvents_NoComplexEvents_48.insert(ComplexEventPriceBoundaryMethod_48.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_48;
    ComplexEventPriceBoundaryPrecision_48.setString("20.830000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_48);
    ComplexEvents_NoComplexEvents_48.insert(ComplexEventPriceBoundaryPrecision_48.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_48(1);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_48);
    ComplexEvents_NoComplexEvents_48.insert(ComplexEventPriceTimeType_48.getString());
    FIX::ComplexEventType ComplexEventType_48(6);
    noComplexEvents_0_0.set(ComplexEventType_48);
    ComplexEvents_NoComplexEvents_48.insert(ComplexEventType_48.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_48;
    ComplexOptPayoutAmount_48.setString("128344");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_48);
    ComplexEvents_NoComplexEvents_48.insert(ComplexOptPayoutAmount_48.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_48);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::ExecutionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_93;
      FIX::ComplexEventEndDate ComplexEventEndDate_93(FIX::UTCTIMESTAMP(2, 6, 55, 5, 6, 2010));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_93);
      ComplexEventDates_NoComplexEventDates_93.insert(ComplexEventEndDate_93.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_93(FIX::UTCTIMESTAMP(16, 29, 21, 14, 7, 2017));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_93);
      ComplexEventDates_NoComplexEventDates_93.insert(ComplexEventStartDate_93.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_93);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::ExecutionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_185;
        FIX::ComplexEventEndTime ComplexEventEndTime_185(FIX::UTCTIMEONLY(1, 39, 24));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_185);
        ComplexEventTimes_NoComplexEventTimes_185.insert(ComplexEventEndTime_185.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_185(FIX::UTCTIMEONLY(19, 33, 29));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_185);
        ComplexEventTimes_NoComplexEventTimes_185.insert(ComplexEventStartTime_185.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_185);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_186;
        FIX::ComplexEventEndTime ComplexEventEndTime_186(FIX::UTCTIMEONLY(3, 28, 24));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_186);
        ComplexEventTimes_NoComplexEventTimes_186.insert(ComplexEventEndTime_186.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_186(FIX::UTCTIMEONLY(22, 45, 13));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_186);
        ComplexEventTimes_NoComplexEventTimes_186.insert(ComplexEventStartTime_186.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_186);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::ExecutionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_187;
        FIX::ComplexEventEndTime ComplexEventEndTime_187(FIX::UTCTIMEONLY(16, 19, 57));
        noComplexEventTimes_0_0_2_2.set(ComplexEventEndTime_187);
        ComplexEventTimes_NoComplexEventTimes_187.insert(ComplexEventEndTime_187.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_187(FIX::UTCTIMEONLY(17, 43, 18));
        noComplexEventTimes_0_0_2_2.set(ComplexEventStartTime_187);
        ComplexEventTimes_NoComplexEventTimes_187.insert(ComplexEventStartTime_187.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_187);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_94;
      FIX::ComplexEventEndDate ComplexEventEndDate_94(FIX::UTCTIMESTAMP(12, 31, 23, 27, 1, 2001));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_94);
      ComplexEventDates_NoComplexEventDates_94.insert(ComplexEventEndDate_94.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_94(FIX::UTCTIMESTAMP(17, 21, 47, 19, 5, 2002));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_94);
      ComplexEventDates_NoComplexEventDates_94.insert(ComplexEventStartDate_94.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_94);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::ExecutionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_188;
        FIX::ComplexEventEndTime ComplexEventEndTime_188(FIX::UTCTIMEONLY(16, 52, 45));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_188);
        ComplexEventTimes_NoComplexEventTimes_188.insert(ComplexEventEndTime_188.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_188(FIX::UTCTIMEONLY(7, 31, 29));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_188);
        ComplexEventTimes_NoComplexEventTimes_188.insert(ComplexEventStartTime_188.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_188);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_189;
        FIX::ComplexEventEndTime ComplexEventEndTime_189(FIX::UTCTIMEONLY(3, 41, 54));
        noComplexEventTimes_0_1_2_1.set(ComplexEventEndTime_189);
        ComplexEventTimes_NoComplexEventTimes_189.insert(ComplexEventEndTime_189.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_189(FIX::UTCTIMEONLY(22, 37, 38));
        noComplexEventTimes_0_1_2_1.set(ComplexEventStartTime_189);
        ComplexEventTimes_NoComplexEventTimes_189.insert(ComplexEventStartTime_189.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_189);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      {
        FIX50SP2::ExecutionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_190;
        FIX::ComplexEventEndTime ComplexEventEndTime_190(FIX::UTCTIMEONLY(5, 9, 38));
        noComplexEventTimes_0_1_2_2.set(ComplexEventEndTime_190);
        ComplexEventTimes_NoComplexEventTimes_190.insert(ComplexEventEndTime_190.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_190(FIX::UTCTIMEONLY(21, 20, 35));
        noComplexEventTimes_0_1_2_2.set(ComplexEventStartTime_190);
        ComplexEventTimes_NoComplexEventTimes_190.insert(ComplexEventStartTime_190.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_190);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::ExecutionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_95;
      FIX::ComplexEventEndDate ComplexEventEndDate_95(FIX::UTCTIMESTAMP(17, 15, 9, 9, 12, 2004));
      noComplexEventDates_0_1_2.set(ComplexEventEndDate_95);
      ComplexEventDates_NoComplexEventDates_95.insert(ComplexEventEndDate_95.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_95(FIX::UTCTIMESTAMP(7, 18, 23, 23, 2, 2010));
      noComplexEventDates_0_1_2.set(ComplexEventStartDate_95);
      ComplexEventDates_NoComplexEventDates_95.insert(ComplexEventStartDate_95.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_95);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::ExecutionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_191;
        FIX::ComplexEventEndTime ComplexEventEndTime_191(FIX::UTCTIMEONLY(13, 2, 56));
        noComplexEventTimes_0_2_2_0.set(ComplexEventEndTime_191);
        ComplexEventTimes_NoComplexEventTimes_191.insert(ComplexEventEndTime_191.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_191(FIX::UTCTIMEONLY(16, 25, 36));
        noComplexEventTimes_0_2_2_0.set(ComplexEventStartTime_191);
        ComplexEventTimes_NoComplexEventTimes_191.insert(ComplexEventStartTime_191.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_191);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_192;
        FIX::ComplexEventEndTime ComplexEventEndTime_192(FIX::UTCTIMEONLY(7, 46, 41));
        noComplexEventTimes_0_2_2_1.set(ComplexEventEndTime_192);
        ComplexEventTimes_NoComplexEventTimes_192.insert(ComplexEventEndTime_192.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_192(FIX::UTCTIMEONLY(7, 1, 39));
        noComplexEventTimes_0_2_2_1.set(ComplexEventStartTime_192);
        ComplexEventTimes_NoComplexEventTimes_192.insert(ComplexEventStartTime_192.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_192);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_1);
      }
      {
        FIX50SP2::ExecutionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_193;
        FIX::ComplexEventEndTime ComplexEventEndTime_193(FIX::UTCTIMEONLY(22, 54, 19));
        noComplexEventTimes_0_2_2_2.set(ComplexEventEndTime_193);
        ComplexEventTimes_NoComplexEventTimes_193.insert(ComplexEventEndTime_193.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_193(FIX::UTCTIMEONLY(21, 53, 13));
        noComplexEventTimes_0_2_2_2.set(ComplexEventStartTime_193);
        ComplexEventTimes_NoComplexEventTimes_193.insert(ComplexEventStartTime_193.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_193);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::ExecutionReport::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_49;
    FIX::ComplexEventCondition ComplexEventCondition_49(2);
    noComplexEvents_0_1.set(ComplexEventCondition_49);
    ComplexEvents_NoComplexEvents_49.insert(ComplexEventCondition_49.getString());
    FIX::ComplexEventPrice ComplexEventPrice_49;
    ComplexEventPrice_49.setString("17422872");
    noComplexEvents_0_1.set(ComplexEventPrice_49);
    ComplexEvents_NoComplexEvents_49.insert(ComplexEventPrice_49.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_49(5);
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryMethod_49);
    ComplexEvents_NoComplexEvents_49.insert(ComplexEventPriceBoundaryMethod_49.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_49;
    ComplexEventPriceBoundaryPrecision_49.setString("79.440000");
    noComplexEvents_0_1.set(ComplexEventPriceBoundaryPrecision_49);
    ComplexEvents_NoComplexEvents_49.insert(ComplexEventPriceBoundaryPrecision_49.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_49(3);
    noComplexEvents_0_1.set(ComplexEventPriceTimeType_49);
    ComplexEvents_NoComplexEvents_49.insert(ComplexEventPriceTimeType_49.getString());
    FIX::ComplexEventType ComplexEventType_49(7);
    noComplexEvents_0_1.set(ComplexEventType_49);
    ComplexEvents_NoComplexEvents_49.insert(ComplexEventType_49.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_49;
    ComplexOptPayoutAmount_49.setString("11408596");
    noComplexEvents_0_1.set(ComplexOptPayoutAmount_49);
    ComplexEvents_NoComplexEvents_49.insert(ComplexOptPayoutAmount_49.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_49);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::ExecutionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_96;
      FIX::ComplexEventEndDate ComplexEventEndDate_96(FIX::UTCTIMESTAMP(7, 16, 43, 11, 7, 2013));
      noComplexEventDates_1_1_0.set(ComplexEventEndDate_96);
      ComplexEventDates_NoComplexEventDates_96.insert(ComplexEventEndDate_96.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_96(FIX::UTCTIMESTAMP(5, 5, 36, 8, 6, 2011));
      noComplexEventDates_1_1_0.set(ComplexEventStartDate_96);
      ComplexEventDates_NoComplexEventDates_96.insert(ComplexEventStartDate_96.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_96);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::ExecutionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_194;
        FIX::ComplexEventEndTime ComplexEventEndTime_194(FIX::UTCTIMEONLY(4, 9, 46));
        noComplexEventTimes_1_0_2_0.set(ComplexEventEndTime_194);
        ComplexEventTimes_NoComplexEventTimes_194.insert(ComplexEventEndTime_194.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_194(FIX::UTCTIMEONLY(7, 40, 53));
        noComplexEventTimes_1_0_2_0.set(ComplexEventStartTime_194);
        ComplexEventTimes_NoComplexEventTimes_194.insert(ComplexEventStartTime_194.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_194);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_195;
        FIX::ComplexEventEndTime ComplexEventEndTime_195(FIX::UTCTIMEONLY(20, 22, 32));
        noComplexEventTimes_1_0_2_1.set(ComplexEventEndTime_195);
        ComplexEventTimes_NoComplexEventTimes_195.insert(ComplexEventEndTime_195.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_195(FIX::UTCTIMEONLY(1, 50, 13));
        noComplexEventTimes_1_0_2_1.set(ComplexEventStartTime_195);
        ComplexEventTimes_NoComplexEventTimes_195.insert(ComplexEventStartTime_195.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_195);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      {
        FIX50SP2::ExecutionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_196;
        FIX::ComplexEventEndTime ComplexEventEndTime_196(FIX::UTCTIMEONLY(9, 30, 57));
        noComplexEventTimes_1_0_2_2.set(ComplexEventEndTime_196);
        ComplexEventTimes_NoComplexEventTimes_196.insert(ComplexEventEndTime_196.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_196(FIX::UTCTIMEONLY(4, 17, 3));
        noComplexEventTimes_1_0_2_2.set(ComplexEventStartTime_196);
        ComplexEventTimes_NoComplexEventTimes_196.insert(ComplexEventStartTime_196.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_196);

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_97;
      FIX::ComplexEventEndDate ComplexEventEndDate_97(FIX::UTCTIMESTAMP(2, 31, 29, 15, 2, 2003));
      noComplexEventDates_1_1_1.set(ComplexEventEndDate_97);
      ComplexEventDates_NoComplexEventDates_97.insert(ComplexEventEndDate_97.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_97(FIX::UTCTIMESTAMP(9, 54, 45, 24, 6, 2005));
      noComplexEventDates_1_1_1.set(ComplexEventStartDate_97);
      ComplexEventDates_NoComplexEventDates_97.insert(ComplexEventStartDate_97.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_97);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::ExecutionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_197;
        FIX::ComplexEventEndTime ComplexEventEndTime_197(FIX::UTCTIMEONLY(17, 51, 10));
        noComplexEventTimes_1_1_2_0.set(ComplexEventEndTime_197);
        ComplexEventTimes_NoComplexEventTimes_197.insert(ComplexEventEndTime_197.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_197(FIX::UTCTIMEONLY(9, 0, 0));
        noComplexEventTimes_1_1_2_0.set(ComplexEventStartTime_197);
        ComplexEventTimes_NoComplexEventTimes_197.insert(ComplexEventStartTime_197.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_197);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_198;
        FIX::ComplexEventEndTime ComplexEventEndTime_198(FIX::UTCTIMEONLY(9, 30, 25));
        noComplexEventTimes_1_1_2_1.set(ComplexEventEndTime_198);
        ComplexEventTimes_NoComplexEventTimes_198.insert(ComplexEventEndTime_198.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_198(FIX::UTCTIMEONLY(2, 42, 14));
        noComplexEventTimes_1_1_2_1.set(ComplexEventStartTime_198);
        ComplexEventTimes_NoComplexEventTimes_198.insert(ComplexEventStartTime_198.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_198);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      {
        FIX50SP2::ExecutionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_199;
        FIX::ComplexEventEndTime ComplexEventEndTime_199(FIX::UTCTIMEONLY(12, 45, 32));
        noComplexEventTimes_1_1_2_2.set(ComplexEventEndTime_199);
        ComplexEventTimes_NoComplexEventTimes_199.insert(ComplexEventEndTime_199.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_199(FIX::UTCTIMEONLY(14, 17, 2));
        noComplexEventTimes_1_1_2_2.set(ComplexEventStartTime_199);
        ComplexEventTimes_NoComplexEventTimes_199.insert(ComplexEventStartTime_199.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_199);

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    {
      FIX50SP2::ExecutionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_98;
      FIX::ComplexEventEndDate ComplexEventEndDate_98(FIX::UTCTIMESTAMP(16, 39, 4, 13, 9, 2013));
      noComplexEventDates_1_1_2.set(ComplexEventEndDate_98);
      ComplexEventDates_NoComplexEventDates_98.insert(ComplexEventEndDate_98.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_98(FIX::UTCTIMESTAMP(1, 9, 53, 8, 11, 2011));
      noComplexEventDates_1_1_2.set(ComplexEventStartDate_98);
      ComplexEventDates_NoComplexEventDates_98.insert(ComplexEventStartDate_98.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_98);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::ExecutionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_200;
        FIX::ComplexEventEndTime ComplexEventEndTime_200(FIX::UTCTIMEONLY(6, 58, 22));
        noComplexEventTimes_1_2_2_0.set(ComplexEventEndTime_200);
        ComplexEventTimes_NoComplexEventTimes_200.insert(ComplexEventEndTime_200.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_200(FIX::UTCTIMEONLY(16, 56, 11));
        noComplexEventTimes_1_2_2_0.set(ComplexEventStartTime_200);
        ComplexEventTimes_NoComplexEventTimes_200.insert(ComplexEventStartTime_200.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_200);

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_2);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::ExecutionReport::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_50;
    FIX::ComplexEventCondition ComplexEventCondition_50(2);
    noComplexEvents_0_2.set(ComplexEventCondition_50);
    ComplexEvents_NoComplexEvents_50.insert(ComplexEventCondition_50.getString());
    FIX::ComplexEventPrice ComplexEventPrice_50;
    ComplexEventPrice_50.setString("4837509");
    noComplexEvents_0_2.set(ComplexEventPrice_50);
    ComplexEvents_NoComplexEvents_50.insert(ComplexEventPrice_50.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_50(4);
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryMethod_50);
    ComplexEvents_NoComplexEvents_50.insert(ComplexEventPriceBoundaryMethod_50.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_50;
    ComplexEventPriceBoundaryPrecision_50.setString("42.710000");
    noComplexEvents_0_2.set(ComplexEventPriceBoundaryPrecision_50);
    ComplexEvents_NoComplexEvents_50.insert(ComplexEventPriceBoundaryPrecision_50.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_50(2);
    noComplexEvents_0_2.set(ComplexEventPriceTimeType_50);
    ComplexEvents_NoComplexEvents_50.insert(ComplexEventPriceTimeType_50.getString());
    FIX::ComplexEventType ComplexEventType_50(2);
    noComplexEvents_0_2.set(ComplexEventType_50);
    ComplexEvents_NoComplexEvents_50.insert(ComplexEventType_50.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_50;
    ComplexOptPayoutAmount_50.setString("8661606");
    noComplexEvents_0_2.set(ComplexOptPayoutAmount_50);
    ComplexEvents_NoComplexEvents_50.insert(ComplexOptPayoutAmount_50.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_50);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::ExecutionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_99;
      FIX::ComplexEventEndDate ComplexEventEndDate_99(FIX::UTCTIMESTAMP(9, 31, 50, 10, 8, 2014));
      noComplexEventDates_2_1_0.set(ComplexEventEndDate_99);
      ComplexEventDates_NoComplexEventDates_99.insert(ComplexEventEndDate_99.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_99(FIX::UTCTIMESTAMP(13, 17, 46, 17, 4, 2013));
      noComplexEventDates_2_1_0.set(ComplexEventStartDate_99);
      ComplexEventDates_NoComplexEventDates_99.insert(ComplexEventStartDate_99.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_99);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::ExecutionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_201;
        FIX::ComplexEventEndTime ComplexEventEndTime_201(FIX::UTCTIMEONLY(6, 47, 43));
        noComplexEventTimes_2_0_2_0.set(ComplexEventEndTime_201);
        ComplexEventTimes_NoComplexEventTimes_201.insert(ComplexEventEndTime_201.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_201(FIX::UTCTIMEONLY(3, 31, 18));
        noComplexEventTimes_2_0_2_0.set(ComplexEventStartTime_201);
        ComplexEventTimes_NoComplexEventTimes_201.insert(ComplexEventStartTime_201.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_201);

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_0);
    }
    msg.addGroup(noComplexEvents_0_2);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::ExecutionReport::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_51;
    FIX::EventDate EventDate_51("LOCALMKTDATE_889393748");
    noEvents_0_0.set(EventDate_51);
    EvntGrp_NoEvents_51.insert(EventDate_51.getString());
    FIX::EventPx EventPx_51;
    EventPx_51.setString("16802277");
    noEvents_0_0.set(EventPx_51);
    EvntGrp_NoEvents_51.insert(EventPx_51.getString());
    FIX::EventText EventText_51("STRING_1603862773");
    noEvents_0_0.set(EventText_51);
    EvntGrp_NoEvents_51.insert(EventText_51.getString());
    FIX::EventTime EventTime_51(FIX::UTCTIMESTAMP(17, 6, 41, 0, 4, 2010));
    noEvents_0_0.set(EventTime_51);
    EvntGrp_NoEvents_51.insert(EventTime_51.getString());
    FIX::EventType EventType_51(7);
    noEvents_0_0.set(EventType_51);
    EvntGrp_NoEvents_51.insert(EventType_51.getString());
    all_values.push_back(EvntGrp_NoEvents_51);

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::ExecutionReport::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_52;
    FIX::EventDate EventDate_52("LOCALMKTDATE_1426257246");
    noEvents_0_1.set(EventDate_52);
    EvntGrp_NoEvents_52.insert(EventDate_52.getString());
    FIX::EventPx EventPx_52;
    EventPx_52.setString("9873024");
    noEvents_0_1.set(EventPx_52);
    EvntGrp_NoEvents_52.insert(EventPx_52.getString());
    FIX::EventText EventText_52("STRING_1314898494");
    noEvents_0_1.set(EventText_52);
    EvntGrp_NoEvents_52.insert(EventText_52.getString());
    FIX::EventTime EventTime_52(FIX::UTCTIMESTAMP(8, 3, 30, 17, 7, 2013));
    noEvents_0_1.set(EventTime_52);
    EvntGrp_NoEvents_52.insert(EventTime_52.getString());
    FIX::EventType EventType_52(7);
    noEvents_0_1.set(EventType_52);
    EvntGrp_NoEvents_52.insert(EventType_52.getString());
    all_values.push_back(EvntGrp_NoEvents_52);

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::ExecutionReport::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_55;
    FIX::InstrumentPartyID InstrumentPartyID_55("STRING_78108011");
    noInstrumentParties_0_0.set(InstrumentPartyID_55);
    InstrumentParties_NoInstrumentParties_55.insert(InstrumentPartyID_55.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_55('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_55);
    InstrumentParties_NoInstrumentParties_55.insert(InstrumentPartyIDSource_55.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_55(540605206);
    noInstrumentParties_0_0.set(InstrumentPartyRole_55);
    InstrumentParties_NoInstrumentParties_55.insert(InstrumentPartyRole_55.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_55);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::ExecutionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_115;
      FIX::InstrumentPartySubID InstrumentPartySubID_115("STRING_84170168");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_115);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_115.insert(InstrumentPartySubID_115.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_115(946247957);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_115);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_115.insert(InstrumentPartySubIDType_115.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_115);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_116;
      FIX::InstrumentPartySubID InstrumentPartySubID_116("STRING_1232288804");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_116);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_116.insert(InstrumentPartySubID_116.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_116(819668670);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_116);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_116.insert(InstrumentPartySubIDType_116.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_116);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::ExecutionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_117;
      FIX::InstrumentPartySubID InstrumentPartySubID_117("STRING_1835641706");
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubID_117);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_117.insert(InstrumentPartySubID_117.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_117(765032923);
      noInstrumentPartySubIDs_0_1_2.set(InstrumentPartySubIDType_117);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_117.insert(InstrumentPartySubIDType_117.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_117);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::ExecutionReport::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_56;
    FIX::InstrumentPartyID InstrumentPartyID_56("STRING_276047796");
    noInstrumentParties_0_1.set(InstrumentPartyID_56);
    InstrumentParties_NoInstrumentParties_56.insert(InstrumentPartyID_56.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_56('1');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_56);
    InstrumentParties_NoInstrumentParties_56.insert(InstrumentPartyIDSource_56.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_56(768457620);
    noInstrumentParties_0_1.set(InstrumentPartyRole_56);
    InstrumentParties_NoInstrumentParties_56.insert(InstrumentPartyRole_56.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_56);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::ExecutionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_118;
      FIX::InstrumentPartySubID InstrumentPartySubID_118("STRING_1077253308");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_118);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_118.insert(InstrumentPartySubID_118.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_118(1504733104);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_118);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_118.insert(InstrumentPartySubIDType_118.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_118);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::ExecutionReport::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_57;
    FIX::InstrumentPartyID InstrumentPartyID_57("STRING_1757662906");
    noInstrumentParties_0_2.set(InstrumentPartyID_57);
    InstrumentParties_NoInstrumentParties_57.insert(InstrumentPartyID_57.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_57('3');
    noInstrumentParties_0_2.set(InstrumentPartyIDSource_57);
    InstrumentParties_NoInstrumentParties_57.insert(InstrumentPartyIDSource_57.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_57(54520363);
    noInstrumentParties_0_2.set(InstrumentPartyRole_57);
    InstrumentParties_NoInstrumentParties_57.insert(InstrumentPartyRole_57.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_57);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::ExecutionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_119;
      FIX::InstrumentPartySubID InstrumentPartySubID_119("STRING_1358664120");
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubID_119);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_119.insert(InstrumentPartySubID_119.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_119(1369418857);
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubIDType_119);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_119.insert(InstrumentPartySubIDType_119.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_119);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_120;
      FIX::InstrumentPartySubID InstrumentPartySubID_120("STRING_1842314195");
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubID_120);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_120.insert(InstrumentPartySubID_120.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_120(1656865688);
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubIDType_120);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_120.insert(InstrumentPartySubIDType_120.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_120);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_1);
    }
    {
      FIX50SP2::ExecutionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_121;
      FIX::InstrumentPartySubID InstrumentPartySubID_121("STRING_1622227841");
      noInstrumentPartySubIDs_2_1_2.set(InstrumentPartySubID_121);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_121.insert(InstrumentPartySubID_121.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_121(73748817);
      noInstrumentPartySubIDs_2_1_2.set(InstrumentPartySubIDType_121);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_121.insert(InstrumentPartySubIDType_121.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_121);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_2);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::ExecutionReport::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_57;
    FIX::SecurityAltID SecurityAltID_57("STRING_820856775");
    noSecurityAltID_0_0.set(SecurityAltID_57);
    SecAltIDGrp_NoSecurityAltID_57.insert(SecurityAltID_57.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_57("STRING_1692674519");
    noSecurityAltID_0_0.set(SecurityAltIDSource_57);
    SecAltIDGrp_NoSecurityAltID_57.insert(SecurityAltIDSource_57.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_57);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::ExecutionReport::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_58;
    FIX::SecurityAltID SecurityAltID_58("STRING_1408142944");
    noSecurityAltID_0_1.set(SecurityAltID_58);
    SecAltIDGrp_NoSecurityAltID_58.insert(SecurityAltID_58.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_58("STRING_726049038");
    noSecurityAltID_0_1.set(SecurityAltIDSource_58);
    SecAltIDGrp_NoSecurityAltID_58.insert(SecurityAltIDSource_58.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_58);

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::ExecutionReport::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_59;
    FIX::SecurityAltID SecurityAltID_59("STRING_1770782530");
    noSecurityAltID_0_2.set(SecurityAltID_59);
    SecAltIDGrp_NoSecurityAltID_59.insert(SecurityAltID_59.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_59("STRING_524632390");
    noSecurityAltID_0_2.set(SecurityAltIDSource_59);
    SecAltIDGrp_NoSecurityAltID_59.insert(SecurityAltIDSource_59.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_59);

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_54;
  FIX::SecurityXML SecurityXML_55("XMLDATA_1266654244");
  msg.set(SecurityXML_55);
  FIX::SecurityXMLLen SecurityXMLLen_27(492598469);
  msg.set(SecurityXMLLen_27);
  FIX::SecurityXMLSchema SecurityXMLSchema_27("STRING_608802558");
  msg.set(SecurityXMLSchema_27);
  SecurityXML_54.insert(SecurityXMLSchema_27.getString());
  all_values.push_back(SecurityXML_54);

  // MiscFeesGrp
  // Group MiscFeesGrp.NoMiscFees
  {
    FIX50SP2::ExecutionReport::NoMiscFees noMiscFees_0_0;
    // MiscFeesGrp.NoMiscFees
    multiset<string> MiscFeesGrp_NoMiscFees_21;
    FIX::MiscFeeAmt MiscFeeAmt_21;
    MiscFeeAmt_21.setString("17248872");
    noMiscFees_0_0.set(MiscFeeAmt_21);
    MiscFeesGrp_NoMiscFees_21.insert(MiscFeeAmt_21.getString());
    FIX::MiscFeeBasis MiscFeeBasis_21(1);
    noMiscFees_0_0.set(MiscFeeBasis_21);
    MiscFeesGrp_NoMiscFees_21.insert(MiscFeeBasis_21.getString());
    FIX::MiscFeeCurr MiscFeeCurr_21("USD");
    noMiscFees_0_0.set(MiscFeeCurr_21);
    MiscFeesGrp_NoMiscFees_21.insert(MiscFeeCurr_21.getString());
    FIX::MiscFeeType MiscFeeType_21("STRING_14");
    noMiscFees_0_0.set(MiscFeeType_21);
    MiscFeesGrp_NoMiscFees_21.insert(MiscFeeType_21.getString());
    all_values.push_back(MiscFeesGrp_NoMiscFees_21);

    msg.addGroup(noMiscFees_0_0);
  }
  {
    FIX50SP2::ExecutionReport::NoMiscFees noMiscFees_0_1;
    // MiscFeesGrp.NoMiscFees
    multiset<string> MiscFeesGrp_NoMiscFees_22;
    FIX::MiscFeeAmt MiscFeeAmt_22;
    MiscFeeAmt_22.setString("14662243");
    noMiscFees_0_1.set(MiscFeeAmt_22);
    MiscFeesGrp_NoMiscFees_22.insert(MiscFeeAmt_22.getString());
    FIX::MiscFeeBasis MiscFeeBasis_22(1);
    noMiscFees_0_1.set(MiscFeeBasis_22);
    MiscFeesGrp_NoMiscFees_22.insert(MiscFeeBasis_22.getString());
    FIX::MiscFeeCurr MiscFeeCurr_22("JPY");
    noMiscFees_0_1.set(MiscFeeCurr_22);
    MiscFeesGrp_NoMiscFees_22.insert(MiscFeeCurr_22.getString());
    FIX::MiscFeeType MiscFeeType_22("STRING_6");
    noMiscFees_0_1.set(MiscFeeType_22);
    MiscFeesGrp_NoMiscFees_22.insert(MiscFeeType_22.getString());
    all_values.push_back(MiscFeesGrp_NoMiscFees_22);

    msg.addGroup(noMiscFees_0_1);
  }
  {
    FIX50SP2::ExecutionReport::NoMiscFees noMiscFees_0_2;
    // MiscFeesGrp.NoMiscFees
    multiset<string> MiscFeesGrp_NoMiscFees_23;
    FIX::MiscFeeAmt MiscFeeAmt_23;
    MiscFeeAmt_23.setString("19132858");
    noMiscFees_0_2.set(MiscFeeAmt_23);
    MiscFeesGrp_NoMiscFees_23.insert(MiscFeeAmt_23.getString());
    FIX::MiscFeeBasis MiscFeeBasis_23(0);
    noMiscFees_0_2.set(MiscFeeBasis_23);
    MiscFeesGrp_NoMiscFees_23.insert(MiscFeeBasis_23.getString());
    FIX::MiscFeeCurr MiscFeeCurr_23("CHF");
    noMiscFees_0_2.set(MiscFeeCurr_23);
    MiscFeesGrp_NoMiscFees_23.insert(MiscFeeCurr_23.getString());
    FIX::MiscFeeType MiscFeeType_23("STRING_5");
    noMiscFees_0_2.set(MiscFeeType_23);
    MiscFeesGrp_NoMiscFees_23.insert(MiscFeeType_23.getString());
    all_values.push_back(MiscFeesGrp_NoMiscFees_23);

    msg.addGroup(noMiscFees_0_2);
  }
  // OrderQtyData
  multiset<string> OrderQtyData_5;
  FIX::CashOrderQty CashOrderQty_5;
  CashOrderQty_5.setString("18920828");
  msg.set(CashOrderQty_5);
  OrderQtyData_5.insert(CashOrderQty_5.getString());
  FIX::OrderPercent OrderPercent_5;
  OrderPercent_5.setString("92.090000");
  msg.set(OrderPercent_5);
  OrderQtyData_5.insert(OrderPercent_5.getString());
  FIX::OrderQty OrderQty_16;
  OrderQty_16.setString("16354017");
  msg.set(OrderQty_16);
  OrderQtyData_5.insert(OrderQty_16.getString());
  FIX::RoundingDirection RoundingDirection_5('0');
  msg.set(RoundingDirection_5);
  OrderQtyData_5.insert(RoundingDirection_5.getString());
  FIX::RoundingModulus RoundingModulus_5;
  RoundingModulus_5.setString("5708180");
  msg.set(RoundingModulus_5);
  OrderQtyData_5.insert(RoundingModulus_5.getString());
  all_values.push_back(OrderQtyData_5);

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::ExecutionReport::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_40;
    FIX::PartyID PartyID_40("STRING_40200166");
    noPartyIDs_0_0.set(PartyID_40);
    Parties_NoPartyIDs_40.insert(PartyID_40.getString());
    FIX::PartyIDSource PartyIDSource_40('D');
    noPartyIDs_0_0.set(PartyIDSource_40);
    Parties_NoPartyIDs_40.insert(PartyIDSource_40.getString());
    FIX::PartyRole PartyRole_40(49);
    noPartyIDs_0_0.set(PartyRole_40);
    Parties_NoPartyIDs_40.insert(PartyRole_40.getString());
    all_values.push_back(Parties_NoPartyIDs_40);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::ExecutionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_83;
      FIX::PartySubID PartySubID_83("STRING_1886791428");
      noPartySubIDs_0_1_0.set(PartySubID_83);
      PtysSubGrp_NoPartySubIDs_83.insert(PartySubID_83.getString());
      FIX::PartySubIDType PartySubIDType_83(32);
      noPartySubIDs_0_1_0.set(PartySubIDType_83);
      PtysSubGrp_NoPartySubIDs_83.insert(PartySubIDType_83.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_83);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_84;
      FIX::PartySubID PartySubID_84("STRING_2032903449");
      noPartySubIDs_0_1_1.set(PartySubID_84);
      PtysSubGrp_NoPartySubIDs_84.insert(PartySubID_84.getString());
      FIX::PartySubIDType PartySubIDType_84(4);
      noPartySubIDs_0_1_1.set(PartySubIDType_84);
      PtysSubGrp_NoPartySubIDs_84.insert(PartySubIDType_84.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_84);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::ExecutionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_85;
      FIX::PartySubID PartySubID_85("STRING_841886408");
      noPartySubIDs_0_1_2.set(PartySubID_85);
      PtysSubGrp_NoPartySubIDs_85.insert(PartySubID_85.getString());
      FIX::PartySubIDType PartySubIDType_85(9);
      noPartySubIDs_0_1_2.set(PartySubIDType_85);
      PtysSubGrp_NoPartySubIDs_85.insert(PartySubIDType_85.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_85);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::ExecutionReport::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_41;
    FIX::PartyID PartyID_41("STRING_1956793522");
    noPartyIDs_0_1.set(PartyID_41);
    Parties_NoPartyIDs_41.insert(PartyID_41.getString());
    FIX::PartyIDSource PartyIDSource_41('D');
    noPartyIDs_0_1.set(PartyIDSource_41);
    Parties_NoPartyIDs_41.insert(PartyIDSource_41.getString());
    FIX::PartyRole PartyRole_41(8);
    noPartyIDs_0_1.set(PartyRole_41);
    Parties_NoPartyIDs_41.insert(PartyRole_41.getString());
    all_values.push_back(Parties_NoPartyIDs_41);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::ExecutionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_86;
      FIX::PartySubID PartySubID_86("STRING_1827393014");
      noPartySubIDs_1_1_0.set(PartySubID_86);
      PtysSubGrp_NoPartySubIDs_86.insert(PartySubID_86.getString());
      FIX::PartySubIDType PartySubIDType_86(15);
      noPartySubIDs_1_1_0.set(PartySubIDType_86);
      PtysSubGrp_NoPartySubIDs_86.insert(PartySubIDType_86.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_86);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
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
  PegOffsetValue_1.setString("17307842");
  msg.set(PegOffsetValue_1);
  PegInstructions_1.insert(PegOffsetValue_1.getString());
  FIX::PegPriceType PegPriceType_1(9);
  msg.set(PegPriceType_1);
  PegInstructions_1.insert(PegPriceType_1.getString());
  FIX::PegRoundDirection PegRoundDirection_1(2);
  msg.set(PegRoundDirection_1);
  PegInstructions_1.insert(PegRoundDirection_1.getString());
  FIX::PegScope PegScope_1(3);
  msg.set(PegScope_1);
  PegInstructions_1.insert(PegScope_1.getString());
  FIX::PegSecurityDesc PegSecurityDesc_1("STRING_403573084");
  msg.set(PegSecurityDesc_1);
  PegInstructions_1.insert(PegSecurityDesc_1.getString());
  FIX::PegSecurityID PegSecurityID_1("STRING_165041292");
  msg.set(PegSecurityID_1);
  PegInstructions_1.insert(PegSecurityID_1.getString());
  FIX::PegSecurityIDSource PegSecurityIDSource_1("STRING_1998047404");
  msg.set(PegSecurityIDSource_1);
  PegInstructions_1.insert(PegSecurityIDSource_1.getString());
  FIX::PegSymbol PegSymbol_1("STRING_900642293");
  msg.set(PegSymbol_1);
  PegInstructions_1.insert(PegSymbol_1.getString());
  all_values.push_back(PegInstructions_1);

  // PreAllocGrp
  // Group PreAllocGrp.NoAllocs
  {
    FIX50SP2::ExecutionReport::NoAllocs noAllocs_0_0;
    // PreAllocGrp.NoAllocs
    multiset<string> PreAllocGrp_NoAllocs_3;
    FIX::AllocAccount AllocAccount_15("STRING_1217390795");
    noAllocs_0_0.set(AllocAccount_15);
    PreAllocGrp_NoAllocs_3.insert(AllocAccount_15.getString());
    FIX::AllocAcctIDSource AllocAcctIDSource_15(1471460320);
    noAllocs_0_0.set(AllocAcctIDSource_15);
    PreAllocGrp_NoAllocs_3.insert(AllocAcctIDSource_15.getString());
    FIX::AllocQty AllocQty_14;
    AllocQty_14.setString("1007515");
    noAllocs_0_0.set(AllocQty_14);
    PreAllocGrp_NoAllocs_3.insert(AllocQty_14.getString());
    FIX::AllocSettlCurrency AllocSettlCurrency_9("CAN");
    noAllocs_0_0.set(AllocSettlCurrency_9);
    PreAllocGrp_NoAllocs_3.insert(AllocSettlCurrency_9.getString());
    FIX::IndividualAllocID IndividualAllocID_15("STRING_1956686687");
    noAllocs_0_0.set(IndividualAllocID_15);
    PreAllocGrp_NoAllocs_3.insert(IndividualAllocID_15.getString());
    all_values.push_back(PreAllocGrp_NoAllocs_3);

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::ExecutionReport::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_43;
      FIX::NestedPartyID NestedPartyID_43("STRING_1326776997");
      noNestedPartyIDs_0_1_0.set(NestedPartyID_43);
      NestedParties_NoNestedPartyIDs_43.insert(NestedPartyID_43.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_43('4');
      noNestedPartyIDs_0_1_0.set(NestedPartyIDSource_43);
      NestedParties_NoNestedPartyIDs_43.insert(NestedPartyIDSource_43.getString());
      FIX::NestedPartyRole NestedPartyRole_43(1909259968);
      noNestedPartyIDs_0_1_0.set(NestedPartyRole_43);
      NestedParties_NoNestedPartyIDs_43.insert(NestedPartyRole_43.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_43);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::ExecutionReport::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_86;
        FIX::NestedPartySubID NestedPartySubID_86("STRING_884173297");
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubID_86);
        NstdPtysSubGrp_NoNestedPartySubIDs_86.insert(NestedPartySubID_86.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_86(1860098323);
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubIDType_86);
        NstdPtysSubGrp_NoNestedPartySubIDs_86.insert(NestedPartySubIDType_86.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_86);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_44;
      FIX::NestedPartyID NestedPartyID_44("STRING_1367993121");
      noNestedPartyIDs_0_1_1.set(NestedPartyID_44);
      NestedParties_NoNestedPartyIDs_44.insert(NestedPartyID_44.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_44('1');
      noNestedPartyIDs_0_1_1.set(NestedPartyIDSource_44);
      NestedParties_NoNestedPartyIDs_44.insert(NestedPartyIDSource_44.getString());
      FIX::NestedPartyRole NestedPartyRole_44(1564513291);
      noNestedPartyIDs_0_1_1.set(NestedPartyRole_44);
      NestedParties_NoNestedPartyIDs_44.insert(NestedPartyRole_44.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_44);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::ExecutionReport::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_87;
        FIX::NestedPartySubID NestedPartySubID_87("STRING_686956652");
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubID_87);
        NstdPtysSubGrp_NoNestedPartySubIDs_87.insert(NestedPartySubID_87.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_87(587668918);
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubIDType_87);
        NstdPtysSubGrp_NoNestedPartySubIDs_87.insert(NestedPartySubIDType_87.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_87);

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_1);
    }
    {
      FIX50SP2::ExecutionReport::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_45;
      FIX::NestedPartyID NestedPartyID_45("STRING_634896488");
      noNestedPartyIDs_0_1_2.set(NestedPartyID_45);
      NestedParties_NoNestedPartyIDs_45.insert(NestedPartyID_45.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_45('5');
      noNestedPartyIDs_0_1_2.set(NestedPartyIDSource_45);
      NestedParties_NoNestedPartyIDs_45.insert(NestedPartyIDSource_45.getString());
      FIX::NestedPartyRole NestedPartyRole_45(6818513);
      noNestedPartyIDs_0_1_2.set(NestedPartyRole_45);
      NestedParties_NoNestedPartyIDs_45.insert(NestedPartyRole_45.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_45);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::ExecutionReport::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_88;
        FIX::NestedPartySubID NestedPartySubID_88("STRING_123823340");
        noNestedPartySubIDs_0_2_2_0.set(NestedPartySubID_88);
        NstdPtysSubGrp_NoNestedPartySubIDs_88.insert(NestedPartySubID_88.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_88(193323720);
        noNestedPartySubIDs_0_2_2_0.set(NestedPartySubIDType_88);
        NstdPtysSubGrp_NoNestedPartySubIDs_88.insert(NestedPartySubIDType_88.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_88);

        noNestedPartyIDs_0_1_2.addGroup(noNestedPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_89;
        FIX::NestedPartySubID NestedPartySubID_89("STRING_324161615");
        noNestedPartySubIDs_0_2_2_1.set(NestedPartySubID_89);
        NstdPtysSubGrp_NoNestedPartySubIDs_89.insert(NestedPartySubID_89.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_89(527396425);
        noNestedPartySubIDs_0_2_2_1.set(NestedPartySubIDType_89);
        NstdPtysSubGrp_NoNestedPartySubIDs_89.insert(NestedPartySubIDType_89.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_89);

        noNestedPartyIDs_0_1_2.addGroup(noNestedPartySubIDs_0_2_2_1);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_2);
    }
    msg.addGroup(noAllocs_0_0);
  }
  {
    FIX50SP2::ExecutionReport::NoAllocs noAllocs_0_1;
    // PreAllocGrp.NoAllocs
    multiset<string> PreAllocGrp_NoAllocs_4;
    FIX::AllocAccount AllocAccount_16("STRING_358365012");
    noAllocs_0_1.set(AllocAccount_16);
    PreAllocGrp_NoAllocs_4.insert(AllocAccount_16.getString());
    FIX::AllocAcctIDSource AllocAcctIDSource_16(174725371);
    noAllocs_0_1.set(AllocAcctIDSource_16);
    PreAllocGrp_NoAllocs_4.insert(AllocAcctIDSource_16.getString());
    FIX::AllocQty AllocQty_15;
    AllocQty_15.setString("14280387");
    noAllocs_0_1.set(AllocQty_15);
    PreAllocGrp_NoAllocs_4.insert(AllocQty_15.getString());
    FIX::AllocSettlCurrency AllocSettlCurrency_10("USD");
    noAllocs_0_1.set(AllocSettlCurrency_10);
    PreAllocGrp_NoAllocs_4.insert(AllocSettlCurrency_10.getString());
    FIX::IndividualAllocID IndividualAllocID_16("STRING_752015390");
    noAllocs_0_1.set(IndividualAllocID_16);
    PreAllocGrp_NoAllocs_4.insert(IndividualAllocID_16.getString());
    all_values.push_back(PreAllocGrp_NoAllocs_4);

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::ExecutionReport::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_46;
      FIX::NestedPartyID NestedPartyID_46("STRING_502223480");
      noNestedPartyIDs_1_1_0.set(NestedPartyID_46);
      NestedParties_NoNestedPartyIDs_46.insert(NestedPartyID_46.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_46('1');
      noNestedPartyIDs_1_1_0.set(NestedPartyIDSource_46);
      NestedParties_NoNestedPartyIDs_46.insert(NestedPartyIDSource_46.getString());
      FIX::NestedPartyRole NestedPartyRole_46(2068762697);
      noNestedPartyIDs_1_1_0.set(NestedPartyRole_46);
      NestedParties_NoNestedPartyIDs_46.insert(NestedPartyRole_46.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_46);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::ExecutionReport::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_90;
        FIX::NestedPartySubID NestedPartySubID_90("STRING_1518777957");
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubID_90);
        NstdPtysSubGrp_NoNestedPartySubIDs_90.insert(NestedPartySubID_90.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_90(2111049586);
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubIDType_90);
        NstdPtysSubGrp_NoNestedPartySubIDs_90.insert(NestedPartySubIDType_90.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_90);

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_91;
        FIX::NestedPartySubID NestedPartySubID_91("STRING_140356318");
        noNestedPartySubIDs_1_0_2_1.set(NestedPartySubID_91);
        NstdPtysSubGrp_NoNestedPartySubIDs_91.insert(NestedPartySubID_91.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_91(929977556);
        noNestedPartySubIDs_1_0_2_1.set(NestedPartySubIDType_91);
        NstdPtysSubGrp_NoNestedPartySubIDs_91.insert(NestedPartySubIDType_91.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_91);

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::ExecutionReport::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_92;
        FIX::NestedPartySubID NestedPartySubID_92("STRING_847739235");
        noNestedPartySubIDs_1_0_2_2.set(NestedPartySubID_92);
        NstdPtysSubGrp_NoNestedPartySubIDs_92.insert(NestedPartySubID_92.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_92(2000454642);
        noNestedPartySubIDs_1_0_2_2.set(NestedPartySubIDType_92);
        NstdPtysSubGrp_NoNestedPartySubIDs_92.insert(NestedPartySubIDType_92.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_92);

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_2);
      }
      noAllocs_0_1.addGroup(noNestedPartyIDs_1_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_47;
      FIX::NestedPartyID NestedPartyID_47("STRING_150487029");
      noNestedPartyIDs_1_1_1.set(NestedPartyID_47);
      NestedParties_NoNestedPartyIDs_47.insert(NestedPartyID_47.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_47('1');
      noNestedPartyIDs_1_1_1.set(NestedPartyIDSource_47);
      NestedParties_NoNestedPartyIDs_47.insert(NestedPartyIDSource_47.getString());
      FIX::NestedPartyRole NestedPartyRole_47(1417484285);
      noNestedPartyIDs_1_1_1.set(NestedPartyRole_47);
      NestedParties_NoNestedPartyIDs_47.insert(NestedPartyRole_47.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_47);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::ExecutionReport::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_93;
        FIX::NestedPartySubID NestedPartySubID_93("STRING_394259525");
        noNestedPartySubIDs_1_1_2_0.set(NestedPartySubID_93);
        NstdPtysSubGrp_NoNestedPartySubIDs_93.insert(NestedPartySubID_93.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_93(2005153203);
        noNestedPartySubIDs_1_1_2_0.set(NestedPartySubIDType_93);
        NstdPtysSubGrp_NoNestedPartySubIDs_93.insert(NestedPartySubIDType_93.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_93);

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_0);
      }
      noAllocs_0_1.addGroup(noNestedPartyIDs_1_1_1);
    }
    {
      FIX50SP2::ExecutionReport::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_48;
      FIX::NestedPartyID NestedPartyID_48("STRING_157639413");
      noNestedPartyIDs_1_1_2.set(NestedPartyID_48);
      NestedParties_NoNestedPartyIDs_48.insert(NestedPartyID_48.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_48('9');
      noNestedPartyIDs_1_1_2.set(NestedPartyIDSource_48);
      NestedParties_NoNestedPartyIDs_48.insert(NestedPartyIDSource_48.getString());
      FIX::NestedPartyRole NestedPartyRole_48(2011971716);
      noNestedPartyIDs_1_1_2.set(NestedPartyRole_48);
      NestedParties_NoNestedPartyIDs_48.insert(NestedPartyRole_48.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_48);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::ExecutionReport::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_94;
        FIX::NestedPartySubID NestedPartySubID_94("STRING_1040571783");
        noNestedPartySubIDs_1_2_2_0.set(NestedPartySubID_94);
        NstdPtysSubGrp_NoNestedPartySubIDs_94.insert(NestedPartySubID_94.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_94(57811788);
        noNestedPartySubIDs_1_2_2_0.set(NestedPartySubIDType_94);
        NstdPtysSubGrp_NoNestedPartySubIDs_94.insert(NestedPartySubIDType_94.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_94);

        noNestedPartyIDs_1_1_2.addGroup(noNestedPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_95;
        FIX::NestedPartySubID NestedPartySubID_95("STRING_699998086");
        noNestedPartySubIDs_1_2_2_1.set(NestedPartySubID_95);
        NstdPtysSubGrp_NoNestedPartySubIDs_95.insert(NestedPartySubID_95.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_95(1567968208);
        noNestedPartySubIDs_1_2_2_1.set(NestedPartySubIDType_95);
        NstdPtysSubGrp_NoNestedPartySubIDs_95.insert(NestedPartySubIDType_95.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_95);

        noNestedPartyIDs_1_1_2.addGroup(noNestedPartySubIDs_1_2_2_1);
      }
      noAllocs_0_1.addGroup(noNestedPartyIDs_1_1_2);
    }
    msg.addGroup(noAllocs_0_1);
  }
  // RateSource
  // Group RateSource.NoRateSources
  {
    FIX50SP2::ExecutionReport::NoRateSources noRateSources_0_0;
    // RateSource.NoRateSources
    multiset<string> RateSource_NoRateSources_4;
    FIX::RateSource RateSource_7(1);
    noRateSources_0_0.set(RateSource_7);
    RateSource_NoRateSources_4.insert(RateSource_7.getString());
    FIX::RateSourceType RateSourceType_4(0);
    noRateSources_0_0.set(RateSourceType_4);
    RateSource_NoRateSources_4.insert(RateSourceType_4.getString());
    FIX::ReferencePage ReferencePage_4("STRING_427501230");
    noRateSources_0_0.set(ReferencePage_4);
    RateSource_NoRateSources_4.insert(ReferencePage_4.getString());
    all_values.push_back(RateSource_NoRateSources_4);

    msg.addGroup(noRateSources_0_0);
  }
  {
    FIX50SP2::ExecutionReport::NoRateSources noRateSources_0_1;
    // RateSource.NoRateSources
    multiset<string> RateSource_NoRateSources_5;
    FIX::RateSource RateSource_8(0);
    noRateSources_0_1.set(RateSource_8);
    RateSource_NoRateSources_5.insert(RateSource_8.getString());
    FIX::RateSourceType RateSourceType_5(1);
    noRateSources_0_1.set(RateSourceType_5);
    RateSource_NoRateSources_5.insert(RateSourceType_5.getString());
    FIX::ReferencePage ReferencePage_5("STRING_539577240");
    noRateSources_0_1.set(ReferencePage_5);
    RateSource_NoRateSources_5.insert(ReferencePage_5.getString());
    all_values.push_back(RateSource_NoRateSources_5);

    msg.addGroup(noRateSources_0_1);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_10;
  FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_10("CAN");
  msg.set(BenchmarkCurveCurrency_10);
  SpreadOrBenchmarkCurveData_10.insert(BenchmarkCurveCurrency_10.getString());
  FIX::BenchmarkCurveName BenchmarkCurveName_10("STRING_SONIA");
  msg.set(BenchmarkCurveName_10);
  SpreadOrBenchmarkCurveData_10.insert(BenchmarkCurveName_10.getString());
  FIX::BenchmarkCurvePoint BenchmarkCurvePoint_10("STRING_1000159454");
  msg.set(BenchmarkCurvePoint_10);
  SpreadOrBenchmarkCurveData_10.insert(BenchmarkCurvePoint_10.getString());
  FIX::BenchmarkPrice BenchmarkPrice_10;
  BenchmarkPrice_10.setString("11638339");
  msg.set(BenchmarkPrice_10);
  SpreadOrBenchmarkCurveData_10.insert(BenchmarkPrice_10.getString());
  FIX::BenchmarkPriceType BenchmarkPriceType_10(424422227);
  msg.set(BenchmarkPriceType_10);
  SpreadOrBenchmarkCurveData_10.insert(BenchmarkPriceType_10.getString());
  FIX::BenchmarkSecurityID BenchmarkSecurityID_10("STRING_1140515773");
  msg.set(BenchmarkSecurityID_10);
  SpreadOrBenchmarkCurveData_10.insert(BenchmarkSecurityID_10.getString());
  FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_10("STRING_2093811494");
  msg.set(BenchmarkSecurityIDSource_10);
  SpreadOrBenchmarkCurveData_10.insert(BenchmarkSecurityIDSource_10.getString());
  FIX::Spread Spread_10;
  Spread_10.setString("12721614");
  msg.set(Spread_10);
  SpreadOrBenchmarkCurveData_10.insert(Spread_10.getString());
  all_values.push_back(SpreadOrBenchmarkCurveData_10);

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::ExecutionReport::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_17;
    FIX::StipulationType StipulationType_17("STRING_MHP");
    noStipulations_0_0.set(StipulationType_17);
    Stipulations_NoStipulations_17.insert(StipulationType_17.getString());
    FIX::StipulationValue StipulationValue_17("STRING_979464335");
    noStipulations_0_0.set(StipulationValue_17);
    Stipulations_NoStipulations_17.insert(StipulationValue_17.getString());
    all_values.push_back(Stipulations_NoStipulations_17);

    msg.addGroup(noStipulations_0_0);
  }
  {
    FIX50SP2::ExecutionReport::NoStipulations noStipulations_0_1;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_18;
    FIX::StipulationType StipulationType_18("STRING_WAC");
    noStipulations_0_1.set(StipulationType_18);
    Stipulations_NoStipulations_18.insert(StipulationType_18.getString());
    FIX::StipulationValue StipulationValue_18("STRING_1767041448");
    noStipulations_0_1.set(StipulationValue_18);
    Stipulations_NoStipulations_18.insert(StipulationValue_18.getString());
    all_values.push_back(Stipulations_NoStipulations_18);

    msg.addGroup(noStipulations_0_1);
  }
  {
    FIX50SP2::ExecutionReport::NoStipulations noStipulations_0_2;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_19;
    FIX::StipulationType StipulationType_19("STRING_MININCR");
    noStipulations_0_2.set(StipulationType_19);
    Stipulations_NoStipulations_19.insert(StipulationType_19.getString());
    FIX::StipulationValue StipulationValue_19("STRING_121156959");
    noStipulations_0_2.set(StipulationValue_19);
    Stipulations_NoStipulations_19.insert(StipulationValue_19.getString());
    all_values.push_back(Stipulations_NoStipulations_19);

    msg.addGroup(noStipulations_0_2);
  }
  // StrategyParametersGrp
  // Group StrategyParametersGrp.NoStrategyParameters
  {
    FIX50SP2::ExecutionReport::NoStrategyParameters noStrategyParameters_0_0;
    // StrategyParametersGrp.NoStrategyParameters
    multiset<string> StrategyParametersGrp_NoStrategyParameters_1;
    FIX::StrategyParameterName StrategyParameterName_1("STRING_142988654");
    noStrategyParameters_0_0.set(StrategyParameterName_1);
    StrategyParametersGrp_NoStrategyParameters_1.insert(StrategyParameterName_1.getString());
    FIX::StrategyParameterType StrategyParameterType_1(7);
    noStrategyParameters_0_0.set(StrategyParameterType_1);
    StrategyParametersGrp_NoStrategyParameters_1.insert(StrategyParameterType_1.getString());
    FIX::StrategyParameterValue StrategyParameterValue_1("STRING_153033684");
    noStrategyParameters_0_0.set(StrategyParameterValue_1);
    StrategyParametersGrp_NoStrategyParameters_1.insert(StrategyParameterValue_1.getString());
    all_values.push_back(StrategyParametersGrp_NoStrategyParameters_1);

    msg.addGroup(noStrategyParameters_0_0);
  }
  // TrdRegTimestamps
  // Group TrdRegTimestamps.NoTrdRegTimestamps
  {
    FIX50SP2::ExecutionReport::NoTrdRegTimestamps noTrdRegTimestamps_0_0;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_10;
    FIX::DeskOrderHandlingInst DeskOrderHandlingInst_10("MULTIPLESTRINGVALUE_NH");
    noTrdRegTimestamps_0_0.set(DeskOrderHandlingInst_10);
    TrdRegTimestamps_NoTrdRegTimestamps_10.insert(DeskOrderHandlingInst_10.getString());
    FIX::DeskType DeskType_10("STRING_PT");
    noTrdRegTimestamps_0_0.set(DeskType_10);
    TrdRegTimestamps_NoTrdRegTimestamps_10.insert(DeskType_10.getString());
    FIX::DeskTypeSource DeskTypeSource_10(1);
    noTrdRegTimestamps_0_0.set(DeskTypeSource_10);
    TrdRegTimestamps_NoTrdRegTimestamps_10.insert(DeskTypeSource_10.getString());
    FIX::TrdRegTimestamp TrdRegTimestamp_10(FIX::UTCTIMESTAMP(3, 16, 47, 7, 2, 2011));
    noTrdRegTimestamps_0_0.set(TrdRegTimestamp_10);
    TrdRegTimestamps_NoTrdRegTimestamps_10.insert(TrdRegTimestamp_10.getString());
    FIX::TrdRegTimestampOrigin TrdRegTimestampOrigin_10("STRING_321207011");
    noTrdRegTimestamps_0_0.set(TrdRegTimestampOrigin_10);
    TrdRegTimestamps_NoTrdRegTimestamps_10.insert(TrdRegTimestampOrigin_10.getString());
    FIX::TrdRegTimestampType TrdRegTimestampType_10(3);
    noTrdRegTimestamps_0_0.set(TrdRegTimestampType_10);
    TrdRegTimestamps_NoTrdRegTimestamps_10.insert(TrdRegTimestampType_10.getString());
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_10);

    msg.addGroup(noTrdRegTimestamps_0_0);
  }
  {
    FIX50SP2::ExecutionReport::NoTrdRegTimestamps noTrdRegTimestamps_0_1;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_11;
    FIX::DeskOrderHandlingInst DeskOrderHandlingInst_11("MULTIPLESTRINGVALUE_LOO");
    noTrdRegTimestamps_0_1.set(DeskOrderHandlingInst_11);
    TrdRegTimestamps_NoTrdRegTimestamps_11.insert(DeskOrderHandlingInst_11.getString());
    FIX::DeskType DeskType_11("STRING_D");
    noTrdRegTimestamps_0_1.set(DeskType_11);
    TrdRegTimestamps_NoTrdRegTimestamps_11.insert(DeskType_11.getString());
    FIX::DeskTypeSource DeskTypeSource_11(1);
    noTrdRegTimestamps_0_1.set(DeskTypeSource_11);
    TrdRegTimestamps_NoTrdRegTimestamps_11.insert(DeskTypeSource_11.getString());
    FIX::TrdRegTimestamp TrdRegTimestamp_11(FIX::UTCTIMESTAMP(7, 23, 37, 10, 3, 2004));
    noTrdRegTimestamps_0_1.set(TrdRegTimestamp_11);
    TrdRegTimestamps_NoTrdRegTimestamps_11.insert(TrdRegTimestamp_11.getString());
    FIX::TrdRegTimestampOrigin TrdRegTimestampOrigin_11("STRING_1571372762");
    noTrdRegTimestamps_0_1.set(TrdRegTimestampOrigin_11);
    TrdRegTimestamps_NoTrdRegTimestamps_11.insert(TrdRegTimestampOrigin_11.getString());
    FIX::TrdRegTimestampType TrdRegTimestampType_11(7);
    noTrdRegTimestamps_0_1.set(TrdRegTimestampType_11);
    TrdRegTimestamps_NoTrdRegTimestamps_11.insert(TrdRegTimestampType_11.getString());
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_11);

    msg.addGroup(noTrdRegTimestamps_0_1);
  }
  {
    FIX50SP2::ExecutionReport::NoTrdRegTimestamps noTrdRegTimestamps_0_2;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_12;
    FIX::DeskOrderHandlingInst DeskOrderHandlingInst_12("MULTIPLESTRINGVALUE_SCL");
    noTrdRegTimestamps_0_2.set(DeskOrderHandlingInst_12);
    TrdRegTimestamps_NoTrdRegTimestamps_12.insert(DeskOrderHandlingInst_12.getString());
    FIX::DeskType DeskType_12("STRING_IN");
    noTrdRegTimestamps_0_2.set(DeskType_12);
    TrdRegTimestamps_NoTrdRegTimestamps_12.insert(DeskType_12.getString());
    FIX::DeskTypeSource DeskTypeSource_12(1);
    noTrdRegTimestamps_0_2.set(DeskTypeSource_12);
    TrdRegTimestamps_NoTrdRegTimestamps_12.insert(DeskTypeSource_12.getString());
    FIX::TrdRegTimestamp TrdRegTimestamp_12(FIX::UTCTIMESTAMP(20, 56, 8, 15, 11, 2009));
    noTrdRegTimestamps_0_2.set(TrdRegTimestamp_12);
    TrdRegTimestamps_NoTrdRegTimestamps_12.insert(TrdRegTimestamp_12.getString());
    FIX::TrdRegTimestampOrigin TrdRegTimestampOrigin_12("STRING_33781532");
    noTrdRegTimestamps_0_2.set(TrdRegTimestampOrigin_12);
    TrdRegTimestamps_NoTrdRegTimestamps_12.insert(TrdRegTimestampOrigin_12.getString());
    FIX::TrdRegTimestampType TrdRegTimestampType_12(6);
    noTrdRegTimestamps_0_2.set(TrdRegTimestampType_12);
    TrdRegTimestamps_NoTrdRegTimestamps_12.insert(TrdRegTimestampType_12.getString());
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_12);

    msg.addGroup(noTrdRegTimestamps_0_2);
  }
  // TriggeringInstruction
  multiset<string> TriggeringInstruction_1;
  FIX::TriggerAction TriggerAction_1('3');
  msg.set(TriggerAction_1);
  TriggeringInstruction_1.insert(TriggerAction_1.getString());
  FIX::TriggerNewPrice TriggerNewPrice_1;
  TriggerNewPrice_1.setString("9209163");
  msg.set(TriggerNewPrice_1);
  TriggeringInstruction_1.insert(TriggerNewPrice_1.getString());
  FIX::TriggerNewQty TriggerNewQty_1;
  TriggerNewQty_1.setString("14403755");
  msg.set(TriggerNewQty_1);
  TriggeringInstruction_1.insert(TriggerNewQty_1.getString());
  FIX::TriggerOrderType TriggerOrderType_1('1');
  msg.set(TriggerOrderType_1);
  TriggeringInstruction_1.insert(TriggerOrderType_1.getString());
  FIX::TriggerPrice TriggerPrice_1;
  TriggerPrice_1.setString("2001448");
  msg.set(TriggerPrice_1);
  TriggeringInstruction_1.insert(TriggerPrice_1.getString());
  FIX::TriggerPriceDirection TriggerPriceDirection_1('D');
  msg.set(TriggerPriceDirection_1);
  TriggeringInstruction_1.insert(TriggerPriceDirection_1.getString());
  FIX::TriggerPriceType TriggerPriceType_1('3');
  msg.set(TriggerPriceType_1);
  TriggeringInstruction_1.insert(TriggerPriceType_1.getString());
  FIX::TriggerPriceTypeScope TriggerPriceTypeScope_1('2');
  msg.set(TriggerPriceTypeScope_1);
  TriggeringInstruction_1.insert(TriggerPriceTypeScope_1.getString());
  FIX::TriggerSecurityDesc TriggerSecurityDesc_1("STRING_935465371");
  msg.set(TriggerSecurityDesc_1);
  TriggeringInstruction_1.insert(TriggerSecurityDesc_1.getString());
  FIX::TriggerSecurityID TriggerSecurityID_1("STRING_1753900177");
  msg.set(TriggerSecurityID_1);
  TriggeringInstruction_1.insert(TriggerSecurityID_1.getString());
  FIX::TriggerSecurityIDSource TriggerSecurityIDSource_1("STRING_104736501");
  msg.set(TriggerSecurityIDSource_1);
  TriggeringInstruction_1.insert(TriggerSecurityIDSource_1.getString());
  FIX::TriggerSymbol TriggerSymbol_1("STRING_1249863962");
  msg.set(TriggerSymbol_1);
  TriggeringInstruction_1.insert(TriggerSymbol_1.getString());
  FIX::TriggerTradingSessionID TriggerTradingSessionID_1("STRING_1267257592");
  msg.set(TriggerTradingSessionID_1);
  TriggeringInstruction_1.insert(TriggerTradingSessionID_1.getString());
  FIX::TriggerTradingSessionSubID TriggerTradingSessionSubID_1("STRING_1541404918");
  msg.set(TriggerTradingSessionSubID_1);
  TriggeringInstruction_1.insert(TriggerTradingSessionSubID_1.getString());
  FIX::TriggerType TriggerType_1('1');
  msg.set(TriggerType_1);
  TriggeringInstruction_1.insert(TriggerType_1.getString());
  all_values.push_back(TriggeringInstruction_1);

  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::ExecutionReport::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_41;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_41("DATA_1810054022");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_41);
    UnderlyingInstrument_41.insert(EncodedUnderlyingIssuer_41.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_41(1981638434);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_41);
    UnderlyingInstrument_41.insert(EncodedUnderlyingIssuerLen_41.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_41("DATA_107159973");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_41);
    UnderlyingInstrument_41.insert(EncodedUnderlyingSecurityDesc_41.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_41(1304943338);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_41);
    UnderlyingInstrument_41.insert(EncodedUnderlyingSecurityDescLen_41.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_41;
    UnderlyingAdjustedQuantity_41.setString("15266845");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_41);
    UnderlyingInstrument_41.insert(UnderlyingAdjustedQuantity_41.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_41;
    UnderlyingAllocationPercent_41.setString("9.260000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_41);
    UnderlyingInstrument_41.insert(UnderlyingAllocationPercent_41.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_41;
    UnderlyingAttachmentPoint_41.setString("13.080000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_41);
    UnderlyingInstrument_41.insert(UnderlyingAttachmentPoint_41.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_41("STRING_1057375607");
    noUnderlyings_0_0.set(UnderlyingCFICode_41);
    UnderlyingInstrument_41.insert(UnderlyingCFICode_41.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_41("STRING_421531914");
    noUnderlyings_0_0.set(UnderlyingCPProgram_41);
    UnderlyingInstrument_41.insert(UnderlyingCPProgram_41.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_41("STRING_1764259716");
    noUnderlyings_0_0.set(UnderlyingCPRegType_41);
    UnderlyingInstrument_41.insert(UnderlyingCPRegType_41.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_41;
    UnderlyingCapValue_41.setString("6315235");
    noUnderlyings_0_0.set(UnderlyingCapValue_41);
    UnderlyingInstrument_41.insert(UnderlyingCapValue_41.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_41;
    UnderlyingCashAmount_41.setString("4345246");
    noUnderlyings_0_0.set(UnderlyingCashAmount_41);
    UnderlyingInstrument_41.insert(UnderlyingCashAmount_41.getString());
    FIX::UnderlyingCashType UnderlyingCashType_41("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_41);
    UnderlyingInstrument_41.insert(UnderlyingCashType_41.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_41;
    UnderlyingContractMultiplier_41.setString("6653050");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_41);
    UnderlyingInstrument_41.insert(UnderlyingContractMultiplier_41.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_41(27789011);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_41);
    UnderlyingInstrument_41.insert(UnderlyingContractMultiplierUnit_41.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_41("COUNTRY_1772827507");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_41);
    UnderlyingInstrument_41.insert(UnderlyingCountryOfIssue_41.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_41("LOCALMKTDATE_1586221433");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_41);
    UnderlyingInstrument_41.insert(UnderlyingCouponPaymentDate_41.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_41;
    UnderlyingCouponRate_41.setString("45.520000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_41);
    UnderlyingInstrument_41.insert(UnderlyingCouponRate_41.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_41("STRING_1261535190");
    noUnderlyings_0_0.set(UnderlyingCreditRating_41);
    UnderlyingInstrument_41.insert(UnderlyingCreditRating_41.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_41("CAN");
    noUnderlyings_0_0.set(UnderlyingCurrency_41);
    UnderlyingInstrument_41.insert(UnderlyingCurrency_41.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_41;
    UnderlyingCurrentValue_41.setString("13009221");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_41);
    UnderlyingInstrument_41.insert(UnderlyingCurrentValue_41.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_41;
    UnderlyingDetachmentPoint_41.setString("57.970000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_41);
    UnderlyingInstrument_41.insert(UnderlyingDetachmentPoint_41.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_41;
    UnderlyingDirtyPrice_41.setString("20177288");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_41);
    UnderlyingInstrument_41.insert(UnderlyingDirtyPrice_41.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_41;
    UnderlyingEndPrice_41.setString("9073386");
    noUnderlyings_0_0.set(UnderlyingEndPrice_41);
    UnderlyingInstrument_41.insert(UnderlyingEndPrice_41.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_41;
    UnderlyingEndValue_41.setString("18313322");
    noUnderlyings_0_0.set(UnderlyingEndValue_41);
    UnderlyingInstrument_41.insert(UnderlyingEndValue_41.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_41(1120109142);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_41);
    UnderlyingInstrument_41.insert(UnderlyingExerciseStyle_41.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_41;
    UnderlyingFXRate_41.setString("271126");
    noUnderlyings_0_0.set(UnderlyingFXRate_41);
    UnderlyingInstrument_41.insert(UnderlyingFXRate_41.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_41('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_41);
    UnderlyingInstrument_41.insert(UnderlyingFXRateCalc_41.getString());
    FIX::UnderlyingFactor UnderlyingFactor_41;
    UnderlyingFactor_41.setString("15303748");
    noUnderlyings_0_0.set(UnderlyingFactor_41);
    UnderlyingInstrument_41.insert(UnderlyingFactor_41.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_41(904542506);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_41);
    UnderlyingInstrument_41.insert(UnderlyingFlowScheduleType_41.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_41("STRING_887823942");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_41);
    UnderlyingInstrument_41.insert(UnderlyingInstrRegistry_41.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_41("LOCALMKTDATE_1364529600");
    noUnderlyings_0_0.set(UnderlyingIssueDate_41);
    UnderlyingInstrument_41.insert(UnderlyingIssueDate_41.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_41("STRING_1011702479");
    noUnderlyings_0_0.set(UnderlyingIssuer_41);
    UnderlyingInstrument_41.insert(UnderlyingIssuer_41.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_41("STRING_45283632");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_41);
    UnderlyingInstrument_41.insert(UnderlyingLocaleOfIssue_41.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_41("LOCALMKTDATE_743730459");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_41);
    UnderlyingInstrument_41.insert(UnderlyingMaturityDate_41.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_41("MONTHYEAR_125789757");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_41);
    UnderlyingInstrument_41.insert(UnderlyingMaturityMonthYear_41.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_41("TZTIMEONLY_988104941");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_41);
    UnderlyingInstrument_41.insert(UnderlyingMaturityTime_41.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_41;
    UnderlyingNotionalPercentageOutstanding_41.setString("60.660000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_41);
    UnderlyingInstrument_41.insert(UnderlyingNotionalPercentageOutstanding_41.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_41('5');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_41);
    UnderlyingInstrument_41.insert(UnderlyingOptAttribute_41.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_41;
    UnderlyingOriginalNotionalPercentageOutstanding_41.setString("10.090000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_41);
    UnderlyingInstrument_41.insert(UnderlyingOriginalNotionalPercentageOutstanding_41.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_41("STRING_285145941");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_41);
    UnderlyingInstrument_41.insert(UnderlyingPriceUnitOfMeasure_41.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_41;
    UnderlyingPriceUnitOfMeasureQty_41.setString("9818463");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_41);
    UnderlyingInstrument_41.insert(UnderlyingPriceUnitOfMeasureQty_41.getString());
    FIX::UnderlyingProduct UnderlyingProduct_41(1647140483);
    noUnderlyings_0_0.set(UnderlyingProduct_41);
    UnderlyingInstrument_41.insert(UnderlyingProduct_41.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_41(950450995);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_41);
    UnderlyingInstrument_41.insert(UnderlyingPutOrCall_41.getString());
    FIX::UnderlyingPx UnderlyingPx_41;
    UnderlyingPx_41.setString("10096353");
    noUnderlyings_0_0.set(UnderlyingPx_41);
    UnderlyingInstrument_41.insert(UnderlyingPx_41.getString());
    FIX::UnderlyingQty UnderlyingQty_41;
    UnderlyingQty_41.setString("12724843");
    noUnderlyings_0_0.set(UnderlyingQty_41);
    UnderlyingInstrument_41.insert(UnderlyingQty_41.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_41("LOCALMKTDATE_389188781");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_41);
    UnderlyingInstrument_41.insert(UnderlyingRedemptionDate_41.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_41("STRING_330316260");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_41);
    UnderlyingInstrument_41.insert(UnderlyingRepoCollateralSecurityType_41.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_41;
    UnderlyingRepurchaseRate_41.setString("58.850000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_41);
    UnderlyingInstrument_41.insert(UnderlyingRepurchaseRate_41.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_41(28071384);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_41);
    UnderlyingInstrument_41.insert(UnderlyingRepurchaseTerm_41.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_41("STRING_1412579718");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_41);
    UnderlyingInstrument_41.insert(UnderlyingRestructuringType_41.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_41("STRING_1687458035");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_41);
    UnderlyingInstrument_41.insert(UnderlyingSecurityDesc_41.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_41("EXCHANGE_1754667182");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_41);
    UnderlyingInstrument_41.insert(UnderlyingSecurityExchange_41.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_41("STRING_1282824898");
    noUnderlyings_0_0.set(UnderlyingSecurityID_41);
    UnderlyingInstrument_41.insert(UnderlyingSecurityID_41.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_41("STRING_447313067");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_41);
    UnderlyingInstrument_41.insert(UnderlyingSecurityIDSource_41.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_41("STRING_1438515832");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_41);
    UnderlyingInstrument_41.insert(UnderlyingSecuritySubType_41.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_41("STRING_255450393");
    noUnderlyings_0_0.set(UnderlyingSecurityType_41);
    UnderlyingInstrument_41.insert(UnderlyingSecurityType_41.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_41("STRING_474425690");
    noUnderlyings_0_0.set(UnderlyingSeniority_41);
    UnderlyingInstrument_41.insert(UnderlyingSeniority_41.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_41("STRING_516285753");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_41);
    UnderlyingInstrument_41.insert(UnderlyingSettlMethod_41.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_41(2);
    noUnderlyings_0_0.set(UnderlyingSettlementType_41);
    UnderlyingInstrument_41.insert(UnderlyingSettlementType_41.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_41;
    UnderlyingStartValue_41.setString("13789681");
    noUnderlyings_0_0.set(UnderlyingStartValue_41);
    UnderlyingInstrument_41.insert(UnderlyingStartValue_41.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_41("STRING_1404109695");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_41);
    UnderlyingInstrument_41.insert(UnderlyingStateOrProvinceOfIssue_41.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_41("GBP");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_41);
    UnderlyingInstrument_41.insert(UnderlyingStrikeCurrency_41.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_41;
    UnderlyingStrikePrice_41.setString("14493933");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_41);
    UnderlyingInstrument_41.insert(UnderlyingStrikePrice_41.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_41("STRING_1746601619");
    noUnderlyings_0_0.set(UnderlyingSymbol_41);
    UnderlyingInstrument_41.insert(UnderlyingSymbol_41.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_41("STRING_368976785");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_41);
    UnderlyingInstrument_41.insert(UnderlyingSymbolSfx_41.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_41("STRING_290014621");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_41);
    UnderlyingInstrument_41.insert(UnderlyingTimeUnit_41.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_41("STRING_1400224038");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_41);
    UnderlyingInstrument_41.insert(UnderlyingUnitOfMeasure_41.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_41;
    UnderlyingUnitOfMeasureQty_41.setString("9162984");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_41);
    UnderlyingInstrument_41.insert(UnderlyingUnitOfMeasureQty_41.getString());
    all_values.push_back(UnderlyingInstrument_41);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::ExecutionReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_85;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_85("STRING_1685369979");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_85);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_85.insert(UnderlyingSecurityAltID_85.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_85("STRING_1898144802");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_85);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_85.insert(UnderlyingSecurityAltIDSource_85.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_85);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_86;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_86("STRING_394552466");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_86);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_86.insert(UnderlyingSecurityAltID_86.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_86("STRING_488337326");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_86);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_86.insert(UnderlyingSecurityAltIDSource_86.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_86);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::ExecutionReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_74;
      FIX::UnderlyingStipType UnderlyingStipType_74("STRING_1667036809");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_74);
      UnderlyingStipulations_NoUnderlyingStips_74.insert(UnderlyingStipType_74.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_74("STRING_877526107");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_74);
      UnderlyingStipulations_NoUnderlyingStips_74.insert(UnderlyingStipValue_74.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_74);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::ExecutionReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_90;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_90("STRING_2053572694");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_90);
      UndlyInstrumentParties_NoUndlyInstrumentParties_90.insert(UnderlyingInstrumentPartyID_90.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_90('9');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_90);
      UndlyInstrumentParties_NoUndlyInstrumentParties_90.insert(UnderlyingInstrumentPartyIDSource_90.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_90(355708841);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_90);
      UndlyInstrumentParties_NoUndlyInstrumentParties_90.insert(UnderlyingInstrumentPartyRole_90.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_90);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::ExecutionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_178;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_178("STRING_512781026");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_178);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_178.insert(UnderlyingInstrumentPartySubID_178.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_178(1638533739);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_178);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_178.insert(UnderlyingInstrumentPartySubIDType_178.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_178);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_179;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_179("STRING_2040860148");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_179);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_179.insert(UnderlyingInstrumentPartySubID_179.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_179(1951296858);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_179);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_179.insert(UnderlyingInstrumentPartySubIDType_179.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_179);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_91;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_91("STRING_1893984132");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_91);
      UndlyInstrumentParties_NoUndlyInstrumentParties_91.insert(UnderlyingInstrumentPartyID_91.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_91('3');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_91);
      UndlyInstrumentParties_NoUndlyInstrumentParties_91.insert(UnderlyingInstrumentPartyIDSource_91.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_91(320098963);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_91);
      UndlyInstrumentParties_NoUndlyInstrumentParties_91.insert(UnderlyingInstrumentPartyRole_91.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_91);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::ExecutionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_180;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_180("STRING_1746770387");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_180);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_180.insert(UnderlyingInstrumentPartySubID_180.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_180(1724208659);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_180);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_180.insert(UnderlyingInstrumentPartySubIDType_180.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_180);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_181;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_181("STRING_387713204");
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubID_181);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_181.insert(UnderlyingInstrumentPartySubID_181.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_181(1989957415);
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubIDType_181);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_181.insert(UnderlyingInstrumentPartySubIDType_181.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_181);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::ExecutionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_182;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_182("STRING_1026118339");
        noUndlyInstrumentPartySubIDs_0_1_2_2.set(UnderlyingInstrumentPartySubID_182);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_182.insert(UnderlyingInstrumentPartySubID_182.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_182(2134314823);
        noUndlyInstrumentPartySubIDs_0_1_2_2.set(UnderlyingInstrumentPartySubIDType_182);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_182.insert(UnderlyingInstrumentPartySubIDType_182.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_182);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::ExecutionReport::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_42;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_42("DATA_211450553");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_42);
    UnderlyingInstrument_42.insert(EncodedUnderlyingIssuer_42.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_42(1316132960);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_42);
    UnderlyingInstrument_42.insert(EncodedUnderlyingIssuerLen_42.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_42("DATA_1387055213");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_42);
    UnderlyingInstrument_42.insert(EncodedUnderlyingSecurityDesc_42.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_42(1127749010);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_42);
    UnderlyingInstrument_42.insert(EncodedUnderlyingSecurityDescLen_42.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_42;
    UnderlyingAdjustedQuantity_42.setString("635449");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_42);
    UnderlyingInstrument_42.insert(UnderlyingAdjustedQuantity_42.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_42;
    UnderlyingAllocationPercent_42.setString("15.440000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_42);
    UnderlyingInstrument_42.insert(UnderlyingAllocationPercent_42.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_42;
    UnderlyingAttachmentPoint_42.setString("1.650000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_42);
    UnderlyingInstrument_42.insert(UnderlyingAttachmentPoint_42.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_42("STRING_458097408");
    noUnderlyings_0_1.set(UnderlyingCFICode_42);
    UnderlyingInstrument_42.insert(UnderlyingCFICode_42.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_42("STRING_1413278871");
    noUnderlyings_0_1.set(UnderlyingCPProgram_42);
    UnderlyingInstrument_42.insert(UnderlyingCPProgram_42.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_42("STRING_1638706675");
    noUnderlyings_0_1.set(UnderlyingCPRegType_42);
    UnderlyingInstrument_42.insert(UnderlyingCPRegType_42.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_42;
    UnderlyingCapValue_42.setString("21251342");
    noUnderlyings_0_1.set(UnderlyingCapValue_42);
    UnderlyingInstrument_42.insert(UnderlyingCapValue_42.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_42;
    UnderlyingCashAmount_42.setString("1433213");
    noUnderlyings_0_1.set(UnderlyingCashAmount_42);
    UnderlyingInstrument_42.insert(UnderlyingCashAmount_42.getString());
    FIX::UnderlyingCashType UnderlyingCashType_42("STRING_FIXED");
    noUnderlyings_0_1.set(UnderlyingCashType_42);
    UnderlyingInstrument_42.insert(UnderlyingCashType_42.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_42;
    UnderlyingContractMultiplier_42.setString("20312232");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_42);
    UnderlyingInstrument_42.insert(UnderlyingContractMultiplier_42.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_42(1048918822);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_42);
    UnderlyingInstrument_42.insert(UnderlyingContractMultiplierUnit_42.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_42("COUNTRY_937544639");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_42);
    UnderlyingInstrument_42.insert(UnderlyingCountryOfIssue_42.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_42("LOCALMKTDATE_1477286697");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_42);
    UnderlyingInstrument_42.insert(UnderlyingCouponPaymentDate_42.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_42;
    UnderlyingCouponRate_42.setString("98.480000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_42);
    UnderlyingInstrument_42.insert(UnderlyingCouponRate_42.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_42("STRING_428594731");
    noUnderlyings_0_1.set(UnderlyingCreditRating_42);
    UnderlyingInstrument_42.insert(UnderlyingCreditRating_42.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_42("CAN");
    noUnderlyings_0_1.set(UnderlyingCurrency_42);
    UnderlyingInstrument_42.insert(UnderlyingCurrency_42.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_42;
    UnderlyingCurrentValue_42.setString("1750952");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_42);
    UnderlyingInstrument_42.insert(UnderlyingCurrentValue_42.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_42;
    UnderlyingDetachmentPoint_42.setString("53.880000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_42);
    UnderlyingInstrument_42.insert(UnderlyingDetachmentPoint_42.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_42;
    UnderlyingDirtyPrice_42.setString("16856120");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_42);
    UnderlyingInstrument_42.insert(UnderlyingDirtyPrice_42.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_42;
    UnderlyingEndPrice_42.setString("17074209");
    noUnderlyings_0_1.set(UnderlyingEndPrice_42);
    UnderlyingInstrument_42.insert(UnderlyingEndPrice_42.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_42;
    UnderlyingEndValue_42.setString("13377521");
    noUnderlyings_0_1.set(UnderlyingEndValue_42);
    UnderlyingInstrument_42.insert(UnderlyingEndValue_42.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_42(1262337033);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_42);
    UnderlyingInstrument_42.insert(UnderlyingExerciseStyle_42.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_42;
    UnderlyingFXRate_42.setString("20951341");
    noUnderlyings_0_1.set(UnderlyingFXRate_42);
    UnderlyingInstrument_42.insert(UnderlyingFXRate_42.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_42('M');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_42);
    UnderlyingInstrument_42.insert(UnderlyingFXRateCalc_42.getString());
    FIX::UnderlyingFactor UnderlyingFactor_42;
    UnderlyingFactor_42.setString("1409717");
    noUnderlyings_0_1.set(UnderlyingFactor_42);
    UnderlyingInstrument_42.insert(UnderlyingFactor_42.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_42(2081965287);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_42);
    UnderlyingInstrument_42.insert(UnderlyingFlowScheduleType_42.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_42("STRING_1391676448");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_42);
    UnderlyingInstrument_42.insert(UnderlyingInstrRegistry_42.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_42("LOCALMKTDATE_1457104684");
    noUnderlyings_0_1.set(UnderlyingIssueDate_42);
    UnderlyingInstrument_42.insert(UnderlyingIssueDate_42.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_42("STRING_1321536852");
    noUnderlyings_0_1.set(UnderlyingIssuer_42);
    UnderlyingInstrument_42.insert(UnderlyingIssuer_42.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_42("STRING_371941811");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_42);
    UnderlyingInstrument_42.insert(UnderlyingLocaleOfIssue_42.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_42("LOCALMKTDATE_1520649627");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_42);
    UnderlyingInstrument_42.insert(UnderlyingMaturityDate_42.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_42("MONTHYEAR_98994749");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_42);
    UnderlyingInstrument_42.insert(UnderlyingMaturityMonthYear_42.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_42("TZTIMEONLY_1250351976");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_42);
    UnderlyingInstrument_42.insert(UnderlyingMaturityTime_42.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_42;
    UnderlyingNotionalPercentageOutstanding_42.setString("70.350000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_42);
    UnderlyingInstrument_42.insert(UnderlyingNotionalPercentageOutstanding_42.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_42('1');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_42);
    UnderlyingInstrument_42.insert(UnderlyingOptAttribute_42.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_42;
    UnderlyingOriginalNotionalPercentageOutstanding_42.setString("50.030000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_42);
    UnderlyingInstrument_42.insert(UnderlyingOriginalNotionalPercentageOutstanding_42.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_42("STRING_1956397605");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_42);
    UnderlyingInstrument_42.insert(UnderlyingPriceUnitOfMeasure_42.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_42;
    UnderlyingPriceUnitOfMeasureQty_42.setString("16555949");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_42);
    UnderlyingInstrument_42.insert(UnderlyingPriceUnitOfMeasureQty_42.getString());
    FIX::UnderlyingProduct UnderlyingProduct_42(1323410802);
    noUnderlyings_0_1.set(UnderlyingProduct_42);
    UnderlyingInstrument_42.insert(UnderlyingProduct_42.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_42(1840137220);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_42);
    UnderlyingInstrument_42.insert(UnderlyingPutOrCall_42.getString());
    FIX::UnderlyingPx UnderlyingPx_42;
    UnderlyingPx_42.setString("5570301");
    noUnderlyings_0_1.set(UnderlyingPx_42);
    UnderlyingInstrument_42.insert(UnderlyingPx_42.getString());
    FIX::UnderlyingQty UnderlyingQty_42;
    UnderlyingQty_42.setString("1134717");
    noUnderlyings_0_1.set(UnderlyingQty_42);
    UnderlyingInstrument_42.insert(UnderlyingQty_42.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_42("LOCALMKTDATE_1169940269");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_42);
    UnderlyingInstrument_42.insert(UnderlyingRedemptionDate_42.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_42("STRING_2118729973");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_42);
    UnderlyingInstrument_42.insert(UnderlyingRepoCollateralSecurityType_42.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_42;
    UnderlyingRepurchaseRate_42.setString("65.240000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_42);
    UnderlyingInstrument_42.insert(UnderlyingRepurchaseRate_42.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_42(393119819);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_42);
    UnderlyingInstrument_42.insert(UnderlyingRepurchaseTerm_42.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_42("STRING_1336759384");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_42);
    UnderlyingInstrument_42.insert(UnderlyingRestructuringType_42.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_42("STRING_717161740");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_42);
    UnderlyingInstrument_42.insert(UnderlyingSecurityDesc_42.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_42("EXCHANGE_2131585207");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_42);
    UnderlyingInstrument_42.insert(UnderlyingSecurityExchange_42.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_42("STRING_874887759");
    noUnderlyings_0_1.set(UnderlyingSecurityID_42);
    UnderlyingInstrument_42.insert(UnderlyingSecurityID_42.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_42("STRING_277098999");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_42);
    UnderlyingInstrument_42.insert(UnderlyingSecurityIDSource_42.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_42("STRING_1321853687");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_42);
    UnderlyingInstrument_42.insert(UnderlyingSecuritySubType_42.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_42("STRING_2137224792");
    noUnderlyings_0_1.set(UnderlyingSecurityType_42);
    UnderlyingInstrument_42.insert(UnderlyingSecurityType_42.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_42("STRING_224749463");
    noUnderlyings_0_1.set(UnderlyingSeniority_42);
    UnderlyingInstrument_42.insert(UnderlyingSeniority_42.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_42("STRING_354595935");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_42);
    UnderlyingInstrument_42.insert(UnderlyingSettlMethod_42.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_42(4);
    noUnderlyings_0_1.set(UnderlyingSettlementType_42);
    UnderlyingInstrument_42.insert(UnderlyingSettlementType_42.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_42;
    UnderlyingStartValue_42.setString("1592311");
    noUnderlyings_0_1.set(UnderlyingStartValue_42);
    UnderlyingInstrument_42.insert(UnderlyingStartValue_42.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_42("STRING_1746272383");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_42);
    UnderlyingInstrument_42.insert(UnderlyingStateOrProvinceOfIssue_42.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_42("USD");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_42);
    UnderlyingInstrument_42.insert(UnderlyingStrikeCurrency_42.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_42;
    UnderlyingStrikePrice_42.setString("21182141");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_42);
    UnderlyingInstrument_42.insert(UnderlyingStrikePrice_42.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_42("STRING_960983532");
    noUnderlyings_0_1.set(UnderlyingSymbol_42);
    UnderlyingInstrument_42.insert(UnderlyingSymbol_42.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_42("STRING_1579762703");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_42);
    UnderlyingInstrument_42.insert(UnderlyingSymbolSfx_42.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_42("STRING_1221082522");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_42);
    UnderlyingInstrument_42.insert(UnderlyingTimeUnit_42.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_42("STRING_792246920");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_42);
    UnderlyingInstrument_42.insert(UnderlyingUnitOfMeasure_42.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_42;
    UnderlyingUnitOfMeasureQty_42.setString("9445526");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_42);
    UnderlyingInstrument_42.insert(UnderlyingUnitOfMeasureQty_42.getString());
    all_values.push_back(UnderlyingInstrument_42);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::ExecutionReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_87;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_87("STRING_601160877");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_87);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_87.insert(UnderlyingSecurityAltID_87.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_87("STRING_452663978");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_87);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_87.insert(UnderlyingSecurityAltIDSource_87.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_87);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_88;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_88("STRING_1138584680");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_88);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_88.insert(UnderlyingSecurityAltID_88.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_88("STRING_293814449");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_88);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_88.insert(UnderlyingSecurityAltIDSource_88.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_88);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::ExecutionReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_75;
      FIX::UnderlyingStipType UnderlyingStipType_75("STRING_1252056473");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_75);
      UnderlyingStipulations_NoUnderlyingStips_75.insert(UnderlyingStipType_75.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_75("STRING_1463754719");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_75);
      UnderlyingStipulations_NoUnderlyingStips_75.insert(UnderlyingStipValue_75.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_75);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::ExecutionReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_92;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_92("STRING_1794122998");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_92);
      UndlyInstrumentParties_NoUndlyInstrumentParties_92.insert(UnderlyingInstrumentPartyID_92.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_92('1');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_92);
      UndlyInstrumentParties_NoUndlyInstrumentParties_92.insert(UnderlyingInstrumentPartyIDSource_92.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_92(170216165);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_92);
      UndlyInstrumentParties_NoUndlyInstrumentParties_92.insert(UnderlyingInstrumentPartyRole_92.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_92);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::ExecutionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_183;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_183("STRING_1840976097");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_183);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_183.insert(UnderlyingInstrumentPartySubID_183.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_183(1045103924);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_183);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_183.insert(UnderlyingInstrumentPartySubIDType_183.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_183);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_93;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_93("STRING_640900089");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_93);
      UndlyInstrumentParties_NoUndlyInstrumentParties_93.insert(UnderlyingInstrumentPartyID_93.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_93('1');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_93);
      UndlyInstrumentParties_NoUndlyInstrumentParties_93.insert(UnderlyingInstrumentPartyIDSource_93.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_93(1034845068);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_93);
      UndlyInstrumentParties_NoUndlyInstrumentParties_93.insert(UnderlyingInstrumentPartyRole_93.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_93);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::ExecutionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_184;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_184("STRING_1369942072");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_184);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_184.insert(UnderlyingInstrumentPartySubID_184.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_184(1165557937);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_184);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_184.insert(UnderlyingInstrumentPartySubIDType_184.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_184);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_185;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_185("STRING_1024880654");
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubID_185);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_185.insert(UnderlyingInstrumentPartySubID_185.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_185(968730807);
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubIDType_185);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_185.insert(UnderlyingInstrumentPartySubIDType_185.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_185);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::ExecutionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_186;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_186("STRING_605891843");
        noUndlyInstrumentPartySubIDs_1_1_2_2.set(UnderlyingInstrumentPartySubID_186);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_186.insert(UnderlyingInstrumentPartySubID_186.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_186(358164961);
        noUndlyInstrumentPartySubIDs_1_1_2_2.set(UnderlyingInstrumentPartySubIDType_186);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_186.insert(UnderlyingInstrumentPartySubIDType_186.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_186);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    {
      FIX50SP2::ExecutionReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_94;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_94("STRING_939461354");
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyID_94);
      UndlyInstrumentParties_NoUndlyInstrumentParties_94.insert(UnderlyingInstrumentPartyID_94.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_94('1');
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyIDSource_94);
      UndlyInstrumentParties_NoUndlyInstrumentParties_94.insert(UnderlyingInstrumentPartyIDSource_94.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_94(1937927664);
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyRole_94);
      UndlyInstrumentParties_NoUndlyInstrumentParties_94.insert(UnderlyingInstrumentPartyRole_94.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_94);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::ExecutionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_187;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_187("STRING_211638647");
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubID_187);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_187.insert(UnderlyingInstrumentPartySubID_187.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_187(734996692);
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubIDType_187);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_187.insert(UnderlyingInstrumentPartySubIDType_187.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_187);

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_188;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_188("STRING_1975717754");
        noUndlyInstrumentPartySubIDs_1_2_2_1.set(UnderlyingInstrumentPartySubID_188);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_188.insert(UnderlyingInstrumentPartySubID_188.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_188(812799524);
        noUndlyInstrumentPartySubIDs_1_2_2_1.set(UnderlyingInstrumentPartySubIDType_188);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_188.insert(UnderlyingInstrumentPartySubIDType_188.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_188);

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_2);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  // YieldData
  multiset<string> YieldData_5;
  FIX::Yield Yield_5;
  Yield_5.setString("6.700000");
  msg.set(Yield_5);
  YieldData_5.insert(Yield_5.getString());
  FIX::YieldCalcDate YieldCalcDate_5("LOCALMKTDATE_966818786");
  msg.set(YieldCalcDate_5);
  YieldData_5.insert(YieldCalcDate_5.getString());
  FIX::YieldRedemptionDate YieldRedemptionDate_5("LOCALMKTDATE_1106613974");
  msg.set(YieldRedemptionDate_5);
  YieldData_5.insert(YieldRedemptionDate_5.getString());
  FIX::YieldRedemptionPrice YieldRedemptionPrice_5;
  YieldRedemptionPrice_5.setString("498711");
  msg.set(YieldRedemptionPrice_5);
  YieldData_5.insert(YieldRedemptionPrice_5.getString());
  FIX::YieldRedemptionPriceType YieldRedemptionPriceType_5(71391612);
  msg.set(YieldRedemptionPriceType_5);
  YieldData_5.insert(YieldRedemptionPriceType_5.getString());
  FIX::YieldType YieldType_5("STRING_LASTMONTH");
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
    EXPECT_TRUE(found);
    if ( ! found) {
      cout << "#### NOT FOUND ###" << endl;
      copy(xml_l.begin(), xml_l.end(), ostream_iterator<string>(cout, " "));      cout << endl;
    } // end if ! found
  } // end for elt_lists
}
