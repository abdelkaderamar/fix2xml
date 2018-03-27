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
  FIX::Account Account_12("STRING_875892322");
  msg.set(Account_12);
  ExecutionReport_0.insert(Account_12.getString());
  FIX::AccountType AccountType_10(7);
  msg.set(AccountType_10);
  ExecutionReport_0.insert(AccountType_10.getString());
  FIX::AccruedInterestAmt AccruedInterestAmt_9;
  AccruedInterestAmt_9.setString("19709988");
  msg.set(AccruedInterestAmt_9);
  ExecutionReport_0.insert(AccruedInterestAmt_9.getString());
  FIX::AccruedInterestRate AccruedInterestRate_4;
  AccruedInterestRate_4.setString("95.750000");
  msg.set(AccruedInterestRate_4);
  ExecutionReport_0.insert(AccruedInterestRate_4.getString());
  FIX::AcctIDSource AcctIDSource_5(2);
  msg.set(AcctIDSource_5);
  ExecutionReport_0.insert(AcctIDSource_5.getString());
  FIX::AggressorIndicator AggressorIndicator_0(false);
  msg.set(AggressorIndicator_0);
  ExecutionReport_0.insert(AggressorIndicator_0.getString());
  FIX::AllocID AllocID_10("STRING_1066588822");
  msg.set(AllocID_10);
  ExecutionReport_0.insert(AllocID_10.getString());
  FIX::AvgPx AvgPx_5;
  AvgPx_5.setString("19656935");
  msg.set(AvgPx_5);
  ExecutionReport_0.insert(AvgPx_5.getString());
  FIX::BasisFeatureDate BasisFeatureDate_0("LOCALMKTDATE_94183648");
  msg.set(BasisFeatureDate_0);
  ExecutionReport_0.insert(BasisFeatureDate_0.getString());
  FIX::BasisFeaturePrice BasisFeaturePrice_0;
  BasisFeaturePrice_0.setString("2465277");
  msg.set(BasisFeaturePrice_0);
  ExecutionReport_0.insert(BasisFeaturePrice_0.getString());
  FIX::BookingType BookingType_6(2);
  msg.set(BookingType_6);
  ExecutionReport_0.insert(BookingType_6.getString());
  FIX::BookingUnit BookingUnit_3('2');
  msg.set(BookingUnit_3);
  ExecutionReport_0.insert(BookingUnit_3.getString());
  FIX::CalculatedCcyLastQty CalculatedCcyLastQty_0;
  CalculatedCcyLastQty_0.setString("5265596");
  msg.set(CalculatedCcyLastQty_0);
  ExecutionReport_0.insert(CalculatedCcyLastQty_0.getString());
  FIX::CancellationRights CancellationRights_1('O');
  msg.set(CancellationRights_1);
  ExecutionReport_0.insert(CancellationRights_1.getString());
  FIX::CashMargin CashMargin_3('2');
  msg.set(CashMargin_3);
  ExecutionReport_0.insert(CashMargin_3.getString());
  FIX::ClOrdID ClOrdID_22("STRING_2093020923");
  msg.set(ClOrdID_22);
  ExecutionReport_0.insert(ClOrdID_22.getString());
  FIX::ClOrdLinkID ClOrdLinkID_5("STRING_735507546");
  msg.set(ClOrdLinkID_5);
  ExecutionReport_0.insert(ClOrdLinkID_5.getString());
  FIX::ClearingFeeIndicator ClearingFeeIndicator_8("STRING_M");
  msg.set(ClearingFeeIndicator_8);
  ExecutionReport_0.insert(ClearingFeeIndicator_8.getString());
  FIX::ComplianceID ComplianceID_3("STRING_894663658");
  msg.set(ComplianceID_3);
  ExecutionReport_0.insert(ComplianceID_3.getString());
  FIX::Concession Concession_4;
  Concession_4.setString("11613777");
  msg.set(Concession_4);
  ExecutionReport_0.insert(Concession_4.getString());
  FIX::CopyMsgIndicator CopyMsgIndicator_1(false);
  msg.set(CopyMsgIndicator_1);
  ExecutionReport_0.insert(CopyMsgIndicator_1.getString());
  FIX::CrossID CrossID_2("STRING_56911133");
  msg.set(CrossID_2);
  ExecutionReport_0.insert(CrossID_2.getString());
  FIX::CrossType CrossType_2(2);
  msg.set(CrossType_2);
  ExecutionReport_0.insert(CrossType_2.getString());
  FIX::CumQty CumQty_1;
  CumQty_1.setString("19982852");
  msg.set(CumQty_1);
  ExecutionReport_0.insert(CumQty_1.getString());
  FIX::Currency Currency_19("USD");
  msg.set(Currency_19);
  ExecutionReport_0.insert(Currency_19.getString());
  FIX::CustDirectedOrder CustDirectedOrder_0(true);
  msg.set(CustDirectedOrder_0);
  ExecutionReport_0.insert(CustDirectedOrder_0.getString());
  FIX::CustOrderCapacity CustOrderCapacity_6(2);
  msg.set(CustOrderCapacity_6);
  ExecutionReport_0.insert(CustOrderCapacity_6.getString());
  FIX::CustOrderHandlingInst CustOrderHandlingInst_0("MULTIPLESTRINGVALUE_IO");
  msg.set(CustOrderHandlingInst_0);
  ExecutionReport_0.insert(CustOrderHandlingInst_0.getString());
  FIX::DayAvgPx DayAvgPx_0;
  DayAvgPx_0.setString("17646662");
  msg.set(DayAvgPx_0);
  ExecutionReport_0.insert(DayAvgPx_0.getString());
  FIX::DayBookingInst DayBookingInst_3('1');
  msg.set(DayBookingInst_3);
  ExecutionReport_0.insert(DayBookingInst_3.getString());
  FIX::DayCumQty DayCumQty_0;
  DayCumQty_0.setString("16290515");
  msg.set(DayCumQty_0);
  ExecutionReport_0.insert(DayCumQty_0.getString());
  FIX::DayOrderQty DayOrderQty_0;
  DayOrderQty_0.setString("2709744");
  msg.set(DayOrderQty_0);
  ExecutionReport_0.insert(DayOrderQty_0.getString());
  FIX::Designation Designation_1("STRING_662513643");
  msg.set(Designation_1);
  ExecutionReport_0.insert(Designation_1.getString());
  FIX::DiscretionPrice DiscretionPrice_0;
  DiscretionPrice_0.setString("1638074");
  msg.set(DiscretionPrice_0);
  ExecutionReport_0.insert(DiscretionPrice_0.getString());
  FIX::DividendYield DividendYield_0;
  DividendYield_0.setString("4.770000");
  msg.set(DividendYield_0);
  ExecutionReport_0.insert(DividendYield_0.getString());
  FIX::EffectiveTime EffectiveTime_1(FIX::UTCTIMESTAMP(6, 23, 27, 1, 122000));
  msg.set(EffectiveTime_1);
  ExecutionReport_0.insert(EffectiveTime_1.getString());
  FIX::EncodedText EncodedText_36("DATA_2003483695");
  msg.set(EncodedText_36);
  ExecutionReport_0.insert(EncodedText_36.getString());
  FIX::EncodedTextLen EncodedTextLen_36(512047427);
  msg.set(EncodedTextLen_36);
  ExecutionReport_0.insert(EncodedTextLen_36.getString());
  FIX::EndAccruedInterestAmt EndAccruedInterestAmt_9;
  EndAccruedInterestAmt_9.setString("11649930");
  msg.set(EndAccruedInterestAmt_9);
  ExecutionReport_0.insert(EndAccruedInterestAmt_9.getString());
  FIX::EndCash EndCash_9;
  EndCash_9.setString("19490209");
  msg.set(EndCash_9);
  ExecutionReport_0.insert(EndCash_9.getString());
  FIX::ExDate ExDate_1("LOCALMKTDATE_1247554973");
  msg.set(ExDate_1);
  ExecutionReport_0.insert(ExDate_1.getString());
  FIX::ExecID ExecID_21("STRING_2072588377");
  msg.set(ExecID_21);
  ExecutionReport_0.insert(ExecID_21.getString());
  FIX::ExecInst ExecInst_1("MULTIPLECHARVALUE_L");
  msg.set(ExecInst_1);
  ExecutionReport_0.insert(ExecInst_1.getString());
  FIX::ExecPriceAdjustment ExecPriceAdjustment_0;
  ExecPriceAdjustment_0.setString("2614490");
  msg.set(ExecPriceAdjustment_0);
  ExecutionReport_0.insert(ExecPriceAdjustment_0.getString());
  FIX::ExecPriceType ExecPriceType_0('Q');
  msg.set(ExecPriceType_0);
  ExecutionReport_0.insert(ExecPriceType_0.getString());
  FIX::ExecRefID ExecRefID_0("STRING_753112114");
  msg.set(ExecRefID_0);
  ExecutionReport_0.insert(ExecRefID_0.getString());
  FIX::ExecRestatementReason ExecRestatementReason_0(11);
  msg.set(ExecRestatementReason_0);
  ExecutionReport_0.insert(ExecRestatementReason_0.getString());
  FIX::ExecType ExecType_0('3');
  msg.set(ExecType_0);
  ExecutionReport_0.insert(ExecType_0.getString());
  FIX::ExecValuationPoint ExecValuationPoint_0(FIX::UTCTIMESTAMP(22, 55, 4, 0, 32002));
  msg.set(ExecValuationPoint_0);
  ExecutionReport_0.insert(ExecValuationPoint_0.getString());
  FIX::ExpireDate ExpireDate_2("LOCALMKTDATE_697650732");
  msg.set(ExpireDate_2);
  ExecutionReport_0.insert(ExpireDate_2.getString());
  FIX::ExpireTime ExpireTime_3(FIX::UTCTIMESTAMP(10, 8, 5, 1, 32002));
  msg.set(ExpireTime_3);
  ExecutionReport_0.insert(ExpireTime_3.getString());
  FIX::GTBookingInst GTBookingInst_1(1);
  msg.set(GTBookingInst_1);
  ExecutionReport_0.insert(GTBookingInst_1.getString());
  FIX::GrossTradeAmt GrossTradeAmt_4;
  GrossTradeAmt_4.setString("14212949");
  msg.set(GrossTradeAmt_4);
  ExecutionReport_0.insert(GrossTradeAmt_4.getString());
  FIX::HandlInst HandlInst_1('3');
  msg.set(HandlInst_1);
  ExecutionReport_0.insert(HandlInst_1.getString());
  FIX::HostCrossID HostCrossID_2("STRING_977521198");
  msg.set(HostCrossID_2);
  ExecutionReport_0.insert(HostCrossID_2.getString());
  FIX::InterestAtMaturity InterestAtMaturity_4;
  InterestAtMaturity_4.setString("12772949");
  msg.set(InterestAtMaturity_4);
  ExecutionReport_0.insert(InterestAtMaturity_4.getString());
  FIX::LastCapacity LastCapacity_8('4');
  msg.set(LastCapacity_8);
  ExecutionReport_0.insert(LastCapacity_8.getString());
  FIX::LastForwardPoints LastForwardPoints_0;
  LastForwardPoints_0.setString("21425142");
  msg.set(LastForwardPoints_0);
  ExecutionReport_0.insert(LastForwardPoints_0.getString());
  FIX::LastForwardPoints2 LastForwardPoints2_0;
  LastForwardPoints2_0.setString("10788323");
  msg.set(LastForwardPoints2_0);
  ExecutionReport_0.insert(LastForwardPoints2_0.getString());
  FIX::LastFragment LastFragment_5(true);
  msg.set(LastFragment_5);
  ExecutionReport_0.insert(LastFragment_5.getString());
  FIX::LastLiquidityInd LastLiquidityInd_0(1);
  msg.set(LastLiquidityInd_0);
  ExecutionReport_0.insert(LastLiquidityInd_0.getString());
  FIX::LastMkt LastMkt_5("EXCHANGE_1775033286");
  msg.set(LastMkt_5);
  ExecutionReport_0.insert(LastMkt_5.getString());
  FIX::LastParPx LastParPx_9;
  LastParPx_9.setString("7131563");
  msg.set(LastParPx_9);
  ExecutionReport_0.insert(LastParPx_9.getString());
  FIX::LastPx LastPx_10;
  LastPx_10.setString("12597175");
  msg.set(LastPx_10);
  ExecutionReport_0.insert(LastPx_10.getString());
  FIX::LastQty LastQty_10;
  LastQty_10.setString("3806617");
  msg.set(LastQty_10);
  ExecutionReport_0.insert(LastQty_10.getString());
  FIX::LastRptRequested LastRptRequested_2(false);
  msg.set(LastRptRequested_2);
  ExecutionReport_0.insert(LastRptRequested_2.getString());
  FIX::LastSpotRate LastSpotRate_0;
  LastSpotRate_0.setString("3026178");
  msg.set(LastSpotRate_0);
  ExecutionReport_0.insert(LastSpotRate_0.getString());
  FIX::LastSwapPoints LastSwapPoints_0;
  LastSwapPoints_0.setString("19233552");
  msg.set(LastSwapPoints_0);
  ExecutionReport_0.insert(LastSwapPoints_0.getString());
  FIX::LeavesQty LeavesQty_0;
  LeavesQty_0.setString("15996319");
  msg.set(LeavesQty_0);
  ExecutionReport_0.insert(LeavesQty_0.getString());
  FIX::ListID ListID_12("STRING_1675779955");
  msg.set(ListID_12);
  ExecutionReport_0.insert(ListID_12.getString());
  FIX::LotType LotType_9('1');
  msg.set(LotType_9);
  ExecutionReport_0.insert(LotType_9.getString());
  FIX::ManualOrderIndicator ManualOrderIndicator_0(false);
  msg.set(ManualOrderIndicator_0);
  ExecutionReport_0.insert(ManualOrderIndicator_0.getString());
  FIX::MassStatusReqID MassStatusReqID_0("STRING_518641105");
  msg.set(MassStatusReqID_0);
  ExecutionReport_0.insert(MassStatusReqID_0.getString());
  FIX::MatchIncrement MatchIncrement_1;
  MatchIncrement_1.setString("3264279");
  msg.set(MatchIncrement_1);
  ExecutionReport_0.insert(MatchIncrement_1.getString());
  FIX::MatchType MatchType_28("STRING_M4");
  msg.set(MatchType_28);
  ExecutionReport_0.insert(MatchType_28.getString());
  FIX::MaxFloor MaxFloor_1;
  MaxFloor_1.setString("17799603");
  msg.set(MaxFloor_1);
  ExecutionReport_0.insert(MaxFloor_1.getString());
  FIX::MaxPriceLevels MaxPriceLevels_1(609977256);
  msg.set(MaxPriceLevels_1);
  ExecutionReport_0.insert(MaxPriceLevels_1.getString());
  FIX::MaxShow MaxShow_1;
  MaxShow_1.setString("798564");
  msg.set(MaxShow_1);
  ExecutionReport_0.insert(MaxShow_1.getString());
  FIX::MinQty MinQty_1;
  MinQty_1.setString("15921563");
  msg.set(MinQty_1);
  ExecutionReport_0.insert(MinQty_1.getString());
  FIX::MoneyLaunderingStatus MoneyLaunderingStatus_1('2');
  msg.set(MoneyLaunderingStatus_1);
  ExecutionReport_0.insert(MoneyLaunderingStatus_1.getString());
  FIX::MultiLegReportingType MultiLegReportingType_3('1');
  msg.set(MultiLegReportingType_3);
  ExecutionReport_0.insert(MultiLegReportingType_3.getString());
  FIX::NetMoney NetMoney_4;
  NetMoney_4.setString("19209227");
  msg.set(NetMoney_4);
  ExecutionReport_0.insert(NetMoney_4.getString());
  FIX::NumDaysInterest NumDaysInterest_4(134778041);
  msg.set(NumDaysInterest_4);
  ExecutionReport_0.insert(NumDaysInterest_4.getString());
  FIX::OrdRejReason OrdRejReason_0(11);
  msg.set(OrdRejReason_0);
  ExecutionReport_0.insert(OrdRejReason_0.getString());
  FIX::OrdStatus OrdStatus_0('E');
  msg.set(OrdStatus_0);
  ExecutionReport_0.insert(OrdStatus_0.getString());
  FIX::OrdStatusReqID OrdStatusReqID_0("STRING_1112299240");
  msg.set(OrdStatusReqID_0);
  ExecutionReport_0.insert(OrdStatusReqID_0.getString());
  FIX::OrdType OrdType_25('B');
  msg.set(OrdType_25);
  ExecutionReport_0.insert(OrdType_25.getString());
  FIX::OrderCapacity OrderCapacity_6('P');
  msg.set(OrderCapacity_6);
  ExecutionReport_0.insert(OrderCapacity_6.getString());
  FIX::OrderCategory OrderCategory_0('9');
  msg.set(OrderCategory_0);
  ExecutionReport_0.insert(OrderCategory_0.getString());
  FIX::OrderHandlingInstSource OrderHandlingInstSource_0(1);
  msg.set(OrderHandlingInstSource_0);
  ExecutionReport_0.insert(OrderHandlingInstSource_0.getString());
  FIX::OrderID OrderID_20("STRING_268887095");
  msg.set(OrderID_20);
  ExecutionReport_0.insert(OrderID_20.getString());
  FIX::OrderQty2 OrderQty2_0;
  OrderQty2_0.setString("10274650");
  msg.set(OrderQty2_0);
  ExecutionReport_0.insert(OrderQty2_0.getString());
  FIX::OrderRestrictions OrderRestrictions_6("MULTIPLECHARVALUE_B");
  msg.set(OrderRestrictions_6);
  ExecutionReport_0.insert(OrderRestrictions_6.getString());
  FIX::OrigClOrdID OrigClOrdID_5("STRING_982043422");
  msg.set(OrigClOrdID_5);
  ExecutionReport_0.insert(OrigClOrdID_5.getString());
  FIX::OrigCrossID OrigCrossID_2("STRING_139698978");
  msg.set(OrigCrossID_2);
  ExecutionReport_0.insert(OrigCrossID_2.getString());
  FIX::ParticipationRate ParticipationRate_1;
  ParticipationRate_1.setString("73.230000");
  msg.set(ParticipationRate_1);
  ExecutionReport_0.insert(ParticipationRate_1.getString());
  FIX::PeggedPrice PeggedPrice_0;
  PeggedPrice_0.setString("21187518");
  msg.set(PeggedPrice_0);
  ExecutionReport_0.insert(PeggedPrice_0.getString());
  FIX::PeggedRefPrice PeggedRefPrice_0;
  PeggedRefPrice_0.setString("4423167");
  msg.set(PeggedRefPrice_0);
  ExecutionReport_0.insert(PeggedRefPrice_0.getString());
  FIX::PositionEffect PositionEffect_6('D');
  msg.set(PositionEffect_6);
  ExecutionReport_0.insert(PositionEffect_6.getString());
  FIX::PreTradeAnonymity PreTradeAnonymity_3(true);
  msg.set(PreTradeAnonymity_3);
  ExecutionReport_0.insert(PreTradeAnonymity_3.getString());
  FIX::PreallocMethod PreallocMethod_3('1');
  msg.set(PreallocMethod_3);
  ExecutionReport_0.insert(PreallocMethod_3.getString());
  FIX::Price Price_8;
  Price_8.setString("21436413");
  msg.set(Price_8);
  ExecutionReport_0.insert(Price_8.getString());
  FIX::PriceDelta PriceDelta_0;
  PriceDelta_0.setString("916476");
  msg.set(PriceDelta_0);
  ExecutionReport_0.insert(PriceDelta_0.getString());
  FIX::PriceImprovement PriceImprovement_0;
  PriceImprovement_0.setString("4892541");
  msg.set(PriceImprovement_0);
  ExecutionReport_0.insert(PriceImprovement_0.getString());
  FIX::PriceProtectionScope PriceProtectionScope_1('1');
  msg.set(PriceProtectionScope_1);
  ExecutionReport_0.insert(PriceProtectionScope_1.getString());
  FIX::PriceType PriceType_17(11);
  msg.set(PriceType_17);
  ExecutionReport_0.insert(PriceType_17.getString());
  FIX::PriorityIndicator PriorityIndicator_0(1);
  msg.set(PriorityIndicator_0);
  ExecutionReport_0.insert(PriorityIndicator_0.getString());
  FIX::QtyType QtyType_14(2);
  msg.set(QtyType_14);
  ExecutionReport_0.insert(QtyType_14.getString());
  FIX::QuoteRespID QuoteRespID_0("STRING_1537386002");
  msg.set(QuoteRespID_0);
  ExecutionReport_0.insert(QuoteRespID_0.getString());
  FIX::ReceivedDeptID ReceivedDeptID_0("STRING_1713887208");
  msg.set(ReceivedDeptID_0);
  ExecutionReport_0.insert(ReceivedDeptID_0.getString());
  FIX::RegistID RegistID_1("STRING_731434419");
  msg.set(RegistID_1);
  ExecutionReport_0.insert(RegistID_1.getString());
  FIX::ReportToExch ReportToExch_0(false);
  msg.set(ReportToExch_0);
  ExecutionReport_0.insert(ReportToExch_0.getString());
  FIX::RiskFreeRate RiskFreeRate_0;
  RiskFreeRate_0.setString("14873263");
  msg.set(RiskFreeRate_0);
  ExecutionReport_0.insert(RiskFreeRate_0.getString());
  FIX::SecondaryClOrdID SecondaryClOrdID_20("STRING_866212461");
  msg.set(SecondaryClOrdID_20);
  ExecutionReport_0.insert(SecondaryClOrdID_20.getString());
  FIX::SecondaryExecID SecondaryExecID_8("STRING_859652000");
  msg.set(SecondaryExecID_8);
  ExecutionReport_0.insert(SecondaryExecID_8.getString());
  FIX::SecondaryOrderID SecondaryOrderID_17("STRING_2100353936");
  msg.set(SecondaryOrderID_17);
  ExecutionReport_0.insert(SecondaryOrderID_17.getString());
  FIX::SettlCurrAmt SettlCurrAmt_6;
  SettlCurrAmt_6.setString("19785117");
  msg.set(SettlCurrAmt_6);
  ExecutionReport_0.insert(SettlCurrAmt_6.getString());
  FIX::SettlCurrFxRate SettlCurrFxRate_6;
  SettlCurrFxRate_6.setString("14349856");
  msg.set(SettlCurrFxRate_6);
  ExecutionReport_0.insert(SettlCurrFxRate_6.getString());
  FIX::SettlCurrFxRateCalc SettlCurrFxRateCalc_6('D');
  msg.set(SettlCurrFxRateCalc_6);
  ExecutionReport_0.insert(SettlCurrFxRateCalc_6.getString());
  FIX::SettlCurrency SettlCurrency_9("JPY");
  msg.set(SettlCurrency_9);
  ExecutionReport_0.insert(SettlCurrency_9.getString());
  FIX::SettlDate SettlDate_14("LOCALMKTDATE_38937246");
  msg.set(SettlDate_14);
  ExecutionReport_0.insert(SettlDate_14.getString());
  FIX::SettlDate2 SettlDate2_0("LOCALMKTDATE_1965822927");
  msg.set(SettlDate2_0);
  ExecutionReport_0.insert(SettlDate2_0.getString());
  FIX::SettlType SettlType_8("STRING_0");
  msg.set(SettlType_8);
  ExecutionReport_0.insert(SettlType_8.getString());
  FIX::Side Side_19('D');
  msg.set(Side_19);
  ExecutionReport_0.insert(Side_19.getString());
  FIX::SolicitedFlag SolicitedFlag_3(true);
  msg.set(SolicitedFlag_3);
  ExecutionReport_0.insert(SolicitedFlag_3.getString());
  FIX::StartCash StartCash_9;
  StartCash_9.setString("17382771");
  msg.set(StartCash_9);
  ExecutionReport_0.insert(StartCash_9.getString());
  FIX::StopPx StopPx_1;
  StopPx_1.setString("9922488");
  msg.set(StopPx_1);
  ExecutionReport_0.insert(StopPx_1.getString());
  FIX::TargetStrategy TargetStrategy_1(3);
  msg.set(TargetStrategy_1);
  ExecutionReport_0.insert(TargetStrategy_1.getString());
  FIX::TargetStrategyParameters TargetStrategyParameters_1("STRING_1029042430");
  msg.set(TargetStrategyParameters_1);
  ExecutionReport_0.insert(TargetStrategyParameters_1.getString());
  FIX::TargetStrategyPerformance TargetStrategyPerformance_0;
  TargetStrategyPerformance_0.setString("4156653");
  msg.set(TargetStrategyPerformance_0);
  ExecutionReport_0.insert(TargetStrategyPerformance_0.getString());
  FIX::Text Text_36("STRING_370968122");
  msg.set(Text_36);
  ExecutionReport_0.insert(Text_36.getString());
  FIX::TimeBracket TimeBracket_0("STRING_1025200089");
  msg.set(TimeBracket_0);
  ExecutionReport_0.insert(TimeBracket_0.getString());
  FIX::TimeInForce TimeInForce_27('6');
  msg.set(TimeInForce_27);
  ExecutionReport_0.insert(TimeInForce_27.getString());
  FIX::TimeToExpiration TimeToExpiration_0;
  TimeToExpiration_0.setString("8602223");
  msg.set(TimeToExpiration_0);
  ExecutionReport_0.insert(TimeToExpiration_0.getString());
  FIX::TotNoFills TotNoFills_0(1347785746);
  msg.set(TotNoFills_0);
  ExecutionReport_0.insert(TotNoFills_0.getString());
  FIX::TotNumReports TotNumReports_2(1964842591);
  msg.set(TotNumReports_2);
  ExecutionReport_0.insert(TotNumReports_2.getString());
  FIX::TotalTakedown TotalTakedown_4;
  TotalTakedown_4.setString("9819531");
  msg.set(TotalTakedown_4);
  ExecutionReport_0.insert(TotalTakedown_4.getString());
  FIX::TradeDate TradeDate_14("LOCALMKTDATE_132865012");
  msg.set(TradeDate_14);
  ExecutionReport_0.insert(TradeDate_14.getString());
  FIX::TradeOriginationDate TradeOriginationDate_8("LOCALMKTDATE_1354744945");
  msg.set(TradeOriginationDate_8);
  ExecutionReport_0.insert(TradeOriginationDate_8.getString());
  FIX::TradedFlatSwitch TradedFlatSwitch_0(true);
  msg.set(TradedFlatSwitch_0);
  ExecutionReport_0.insert(TradedFlatSwitch_0.getString());
  FIX::TradingSessionID TradingSessionID_25("STRING_3");
  msg.set(TradingSessionID_25);
  ExecutionReport_0.insert(TradingSessionID_25.getString());
  FIX::TradingSessionSubID TradingSessionSubID_25("STRING_3");
  msg.set(TradingSessionSubID_25);
  ExecutionReport_0.insert(TradingSessionSubID_25.getString());
  FIX::TransBkdTime TransBkdTime_1(FIX::UTCTIMESTAMP(5, 55, 51, 22, 62011));
  msg.set(TransBkdTime_1);
  ExecutionReport_0.insert(TransBkdTime_1.getString());
  FIX::TransactTime TransactTime_18(FIX::UTCTIMESTAMP(15, 29, 25, 11, 32009));
  msg.set(TransactTime_18);
  ExecutionReport_0.insert(TransactTime_18.getString());
  FIX::TrdMatchID TrdMatchID_0("STRING_1524389882");
  msg.set(TrdMatchID_0);
  ExecutionReport_0.insert(TrdMatchID_0.getString());
  FIX::UnderlyingLastPx UnderlyingLastPx_0;
  UnderlyingLastPx_0.setString("16632866");
  msg.set(UnderlyingLastPx_0);
  ExecutionReport_0.insert(UnderlyingLastPx_0.getString());
  FIX::UnderlyingLastQty UnderlyingLastQty_0;
  UnderlyingLastQty_0.setString("5291467");
  msg.set(UnderlyingLastQty_0);
  ExecutionReport_0.insert(UnderlyingLastQty_0.getString());
  FIX::Volatility Volatility_0;
  Volatility_0.setString("4059486");
  msg.set(Volatility_0);
  ExecutionReport_0.insert(Volatility_0.getString());
  FIX::WorkingIndicator WorkingIndicator_0(false);
  msg.set(WorkingIndicator_0);
  ExecutionReport_0.insert(WorkingIndicator_0.getString());
  all_values.push_back(ExecutionReport_0);

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_4;
  FIX::ApplID ApplID_4("STRING_900114842");
  msg.set(ApplID_4);
  ApplicationSequenceControl_4.insert(ApplID_4.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_4(1431148753);
  msg.set(ApplLastSeqNum_4);
  ApplicationSequenceControl_4.insert(ApplLastSeqNum_4.getString());
  FIX::ApplResendFlag ApplResendFlag_4(false);
  msg.set(ApplResendFlag_4);
  ApplicationSequenceControl_4.insert(ApplResendFlag_4.getString());
  FIX::ApplSeqNum ApplSeqNum_4(1760337155);
  msg.set(ApplSeqNum_4);
  ApplicationSequenceControl_4.insert(ApplSeqNum_4.getString());
  all_values.push_back(ApplicationSequenceControl_4);

  // CommissionData
  multiset<string> CommissionData_10;
  FIX::CommCurrency CommCurrency_10("USD");
  msg.set(CommCurrency_10);
  CommissionData_10.insert(CommCurrency_10.getString());
  FIX::CommType CommType_10('2');
  msg.set(CommType_10);
  CommissionData_10.insert(CommType_10.getString());
  FIX::Commission Commission_10;
  Commission_10.setString("7643158");
  msg.set(Commission_10);
  CommissionData_10.insert(Commission_10.getString());
  FIX::FundRenewWaiv FundRenewWaiv_10('Y');
  msg.set(FundRenewWaiv_10);
  CommissionData_10.insert(FundRenewWaiv_10.getString());
  all_values.push_back(CommissionData_10);

  // ContAmtGrp
  // Group ContAmtGrp.NoContAmts
  {
    FIX50SP2::ExecutionReport::NoContAmts noContAmts_0_0;
    // ContAmtGrp.NoContAmts
    multiset<string> ContAmtGrp_NoContAmts_0;
    FIX::ContAmtCurr ContAmtCurr_0("JPY");
    noContAmts_0_0.set(ContAmtCurr_0);
    ContAmtGrp_NoContAmts_0.insert(ContAmtCurr_0.getString());
    FIX::ContAmtType ContAmtType_0(8);
    noContAmts_0_0.set(ContAmtType_0);
    ContAmtGrp_NoContAmts_0.insert(ContAmtType_0.getString());
    FIX::ContAmtValue ContAmtValue_0;
    ContAmtValue_0.setString("12116435");
    noContAmts_0_0.set(ContAmtValue_0);
    ContAmtGrp_NoContAmts_0.insert(ContAmtValue_0.getString());
    all_values.push_back(ContAmtGrp_NoContAmts_0);

    msg.addGroup(noContAmts_0_0);
  }
  // ContraGrp
  // Group ContraGrp.NoContraBrokers
  {
    FIX50SP2::ExecutionReport::NoContraBrokers noContraBrokers_0_0;
    // ContraGrp.NoContraBrokers
    multiset<string> ContraGrp_NoContraBrokers_0;
    FIX::ContraBroker ContraBroker_0("STRING_872432526");
    noContraBrokers_0_0.set(ContraBroker_0);
    ContraGrp_NoContraBrokers_0.insert(ContraBroker_0.getString());
    FIX::ContraLegRefID ContraLegRefID_0("STRING_625699839");
    noContraBrokers_0_0.set(ContraLegRefID_0);
    ContraGrp_NoContraBrokers_0.insert(ContraLegRefID_0.getString());
    FIX::ContraTradeQty ContraTradeQty_0;
    ContraTradeQty_0.setString("6293479");
    noContraBrokers_0_0.set(ContraTradeQty_0);
    ContraGrp_NoContraBrokers_0.insert(ContraTradeQty_0.getString());
    FIX::ContraTradeTime ContraTradeTime_0(FIX::UTCTIMESTAMP(9, 16, 42, 27, 122002));
    noContraBrokers_0_0.set(ContraTradeTime_0);
    ContraGrp_NoContraBrokers_0.insert(ContraTradeTime_0.getString());
    FIX::ContraTrader ContraTrader_0("STRING_1277659094");
    noContraBrokers_0_0.set(ContraTrader_0);
    ContraGrp_NoContraBrokers_0.insert(ContraTrader_0.getString());
    all_values.push_back(ContraGrp_NoContraBrokers_0);

    msg.addGroup(noContraBrokers_0_0);
  }
  {
    FIX50SP2::ExecutionReport::NoContraBrokers noContraBrokers_0_1;
    // ContraGrp.NoContraBrokers
    multiset<string> ContraGrp_NoContraBrokers_1;
    FIX::ContraBroker ContraBroker_1("STRING_1650063446");
    noContraBrokers_0_1.set(ContraBroker_1);
    ContraGrp_NoContraBrokers_1.insert(ContraBroker_1.getString());
    FIX::ContraLegRefID ContraLegRefID_1("STRING_320450232");
    noContraBrokers_0_1.set(ContraLegRefID_1);
    ContraGrp_NoContraBrokers_1.insert(ContraLegRefID_1.getString());
    FIX::ContraTradeQty ContraTradeQty_1;
    ContraTradeQty_1.setString("18068058");
    noContraBrokers_0_1.set(ContraTradeQty_1);
    ContraGrp_NoContraBrokers_1.insert(ContraTradeQty_1.getString());
    FIX::ContraTradeTime ContraTradeTime_1(FIX::UTCTIMESTAMP(23, 8, 36, 0, 122016));
    noContraBrokers_0_1.set(ContraTradeTime_1);
    ContraGrp_NoContraBrokers_1.insert(ContraTradeTime_1.getString());
    FIX::ContraTrader ContraTrader_1("STRING_946840345");
    noContraBrokers_0_1.set(ContraTrader_1);
    ContraGrp_NoContraBrokers_1.insert(ContraTrader_1.getString());
    all_values.push_back(ContraGrp_NoContraBrokers_1);

    msg.addGroup(noContraBrokers_0_1);
  }
  {
    FIX50SP2::ExecutionReport::NoContraBrokers noContraBrokers_0_2;
    // ContraGrp.NoContraBrokers
    multiset<string> ContraGrp_NoContraBrokers_2;
    FIX::ContraBroker ContraBroker_2("STRING_767097192");
    noContraBrokers_0_2.set(ContraBroker_2);
    ContraGrp_NoContraBrokers_2.insert(ContraBroker_2.getString());
    FIX::ContraLegRefID ContraLegRefID_2("STRING_587960284");
    noContraBrokers_0_2.set(ContraLegRefID_2);
    ContraGrp_NoContraBrokers_2.insert(ContraLegRefID_2.getString());
    FIX::ContraTradeQty ContraTradeQty_2;
    ContraTradeQty_2.setString("4102419");
    noContraBrokers_0_2.set(ContraTradeQty_2);
    ContraGrp_NoContraBrokers_2.insert(ContraTradeQty_2.getString());
    FIX::ContraTradeTime ContraTradeTime_2(FIX::UTCTIMESTAMP(13, 10, 54, 18, 22000));
    noContraBrokers_0_2.set(ContraTradeTime_2);
    ContraGrp_NoContraBrokers_2.insert(ContraTradeTime_2.getString());
    FIX::ContraTrader ContraTrader_2("STRING_1906435314");
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
  FIX::DiscretionLimitType DiscretionLimitType_1(1);
  msg.set(DiscretionLimitType_1);
  DiscretionInstructions_1.insert(DiscretionLimitType_1.getString());
  FIX::DiscretionMoveType DiscretionMoveType_1(1);
  msg.set(DiscretionMoveType_1);
  DiscretionInstructions_1.insert(DiscretionMoveType_1.getString());
  FIX::DiscretionOffsetType DiscretionOffsetType_1(2);
  msg.set(DiscretionOffsetType_1);
  DiscretionInstructions_1.insert(DiscretionOffsetType_1.getString());
  FIX::DiscretionOffsetValue DiscretionOffsetValue_1;
  DiscretionOffsetValue_1.setString("1362505");
  msg.set(DiscretionOffsetValue_1);
  DiscretionInstructions_1.insert(DiscretionOffsetValue_1.getString());
  FIX::DiscretionRoundDirection DiscretionRoundDirection_1(1);
  msg.set(DiscretionRoundDirection_1);
  DiscretionInstructions_1.insert(DiscretionRoundDirection_1.getString());
  FIX::DiscretionScope DiscretionScope_1(2);
  msg.set(DiscretionScope_1);
  DiscretionInstructions_1.insert(DiscretionScope_1.getString());
  all_values.push_back(DiscretionInstructions_1);

  // DisplayInstruction
  multiset<string> DisplayInstruction_1;
  FIX::DisplayHighQty DisplayHighQty_1;
  DisplayHighQty_1.setString("9408977");
  msg.set(DisplayHighQty_1);
  DisplayInstruction_1.insert(DisplayHighQty_1.getString());
  FIX::DisplayLowQty DisplayLowQty_1;
  DisplayLowQty_1.setString("10161085");
  msg.set(DisplayLowQty_1);
  DisplayInstruction_1.insert(DisplayLowQty_1.getString());
  FIX::DisplayMethod DisplayMethod_1('4');
  msg.set(DisplayMethod_1);
  DisplayInstruction_1.insert(DisplayMethod_1.getString());
  FIX::DisplayMinIncr DisplayMinIncr_1;
  DisplayMinIncr_1.setString("12613480");
  msg.set(DisplayMinIncr_1);
  DisplayInstruction_1.insert(DisplayMinIncr_1.getString());
  FIX::DisplayQty DisplayQty_1;
  DisplayQty_1.setString("6754306");
  msg.set(DisplayQty_1);
  DisplayInstruction_1.insert(DisplayQty_1.getString());
  FIX::DisplayWhen DisplayWhen_1('1');
  msg.set(DisplayWhen_1);
  DisplayInstruction_1.insert(DisplayWhen_1.getString());
  FIX::RefreshQty RefreshQty_1;
  RefreshQty_1.setString("15132665");
  msg.set(RefreshQty_1);
  DisplayInstruction_1.insert(RefreshQty_1.getString());
  FIX::SecondaryDisplayQty SecondaryDisplayQty_1;
  SecondaryDisplayQty_1.setString("12348676");
  msg.set(SecondaryDisplayQty_1);
  DisplayInstruction_1.insert(SecondaryDisplayQty_1.getString());
  all_values.push_back(DisplayInstruction_1);

  // FillsGrp
  // Group FillsGrp.NoFills
  {
    FIX50SP2::ExecutionReport::NoFills noFills_0_0;
    // FillsGrp.NoFills
    multiset<string> FillsGrp_NoFills_0;
    FIX::FillExecID FillExecID_0("STRING_56482940");
    noFills_0_0.set(FillExecID_0);
    FillsGrp_NoFills_0.insert(FillExecID_0.getString());
    FIX::FillLiquidityInd FillLiquidityInd_0(1407158199);
    noFills_0_0.set(FillLiquidityInd_0);
    FillsGrp_NoFills_0.insert(FillLiquidityInd_0.getString());
    FIX::FillPx FillPx_0;
    FillPx_0.setString("20248498");
    noFills_0_0.set(FillPx_0);
    FillsGrp_NoFills_0.insert(FillPx_0.getString());
    FIX::FillQty FillQty_0;
    FillQty_0.setString("10033232");
    noFills_0_0.set(FillQty_0);
    FillsGrp_NoFills_0.insert(FillQty_0.getString());
    all_values.push_back(FillsGrp_NoFills_0);

    // NestedParties4
    // Group NestedParties4.NoNested4PartyIDs
    {
      FIX50SP2::ExecutionReport::NoFills::NoNested4PartyIDs noNested4PartyIDs_0_1_0;
      // NestedParties4.NoNested4PartyIDs
      multiset<string> NestedParties4_NoNested4PartyIDs_0;
      FIX::Nested4PartyID Nested4PartyID_0("STRING_465326470");
      noNested4PartyIDs_0_1_0.set(Nested4PartyID_0);
      NestedParties4_NoNested4PartyIDs_0.insert(Nested4PartyID_0.getString());
      FIX::Nested4PartyIDSource Nested4PartyIDSource_0('1');
      noNested4PartyIDs_0_1_0.set(Nested4PartyIDSource_0);
      NestedParties4_NoNested4PartyIDs_0.insert(Nested4PartyIDSource_0.getString());
      FIX::Nested4PartyRole Nested4PartyRole_0(1937032344);
      noNested4PartyIDs_0_1_0.set(Nested4PartyRole_0);
      NestedParties4_NoNested4PartyIDs_0.insert(Nested4PartyRole_0.getString());
      all_values.push_back(NestedParties4_NoNested4PartyIDs_0);

      // NstdPtys4SubGrp
      // Group NstdPtys4SubGrp.NoNested4PartySubIDs
      {
        FIX50SP2::ExecutionReport::NoFills::NoNested4PartyIDs::NoNested4PartySubIDs noNested4PartySubIDs_0_0_2_0;
        // NstdPtys4SubGrp.NoNested4PartySubIDs
        multiset<string> NstdPtys4SubGrp_NoNested4PartySubIDs_0;
        FIX::Nested4PartySubID Nested4PartySubID_0("STRING_2056083566");
        noNested4PartySubIDs_0_0_2_0.set(Nested4PartySubID_0);
        NstdPtys4SubGrp_NoNested4PartySubIDs_0.insert(Nested4PartySubID_0.getString());
        FIX::Nested4PartySubIDType Nested4PartySubIDType_0(583688470);
        noNested4PartySubIDs_0_0_2_0.set(Nested4PartySubIDType_0);
        NstdPtys4SubGrp_NoNested4PartySubIDs_0.insert(Nested4PartySubIDType_0.getString());
        all_values.push_back(NstdPtys4SubGrp_NoNested4PartySubIDs_0);

        noNested4PartyIDs_0_1_0.addGroup(noNested4PartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoFills::NoNested4PartyIDs::NoNested4PartySubIDs noNested4PartySubIDs_0_0_2_1;
        // NstdPtys4SubGrp.NoNested4PartySubIDs
        multiset<string> NstdPtys4SubGrp_NoNested4PartySubIDs_1;
        FIX::Nested4PartySubID Nested4PartySubID_1("STRING_1815153878");
        noNested4PartySubIDs_0_0_2_1.set(Nested4PartySubID_1);
        NstdPtys4SubGrp_NoNested4PartySubIDs_1.insert(Nested4PartySubID_1.getString());
        FIX::Nested4PartySubIDType Nested4PartySubIDType_1(264437515);
        noNested4PartySubIDs_0_0_2_1.set(Nested4PartySubIDType_1);
        NstdPtys4SubGrp_NoNested4PartySubIDs_1.insert(Nested4PartySubIDType_1.getString());
        all_values.push_back(NstdPtys4SubGrp_NoNested4PartySubIDs_1);

        noNested4PartyIDs_0_1_0.addGroup(noNested4PartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::ExecutionReport::NoFills::NoNested4PartyIDs::NoNested4PartySubIDs noNested4PartySubIDs_0_0_2_2;
        // NstdPtys4SubGrp.NoNested4PartySubIDs
        multiset<string> NstdPtys4SubGrp_NoNested4PartySubIDs_2;
        FIX::Nested4PartySubID Nested4PartySubID_2("STRING_102777123");
        noNested4PartySubIDs_0_0_2_2.set(Nested4PartySubID_2);
        NstdPtys4SubGrp_NoNested4PartySubIDs_2.insert(Nested4PartySubID_2.getString());
        FIX::Nested4PartySubIDType Nested4PartySubIDType_2(1574105544);
        noNested4PartySubIDs_0_0_2_2.set(Nested4PartySubIDType_2);
        NstdPtys4SubGrp_NoNested4PartySubIDs_2.insert(Nested4PartySubIDType_2.getString());
        all_values.push_back(NstdPtys4SubGrp_NoNested4PartySubIDs_2);

        noNested4PartyIDs_0_1_0.addGroup(noNested4PartySubIDs_0_0_2_2);
      }
      noFills_0_0.addGroup(noNested4PartyIDs_0_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoFills::NoNested4PartyIDs noNested4PartyIDs_0_1_1;
      // NestedParties4.NoNested4PartyIDs
      multiset<string> NestedParties4_NoNested4PartyIDs_1;
      FIX::Nested4PartyID Nested4PartyID_1("STRING_1249623053");
      noNested4PartyIDs_0_1_1.set(Nested4PartyID_1);
      NestedParties4_NoNested4PartyIDs_1.insert(Nested4PartyID_1.getString());
      FIX::Nested4PartyIDSource Nested4PartyIDSource_1('1');
      noNested4PartyIDs_0_1_1.set(Nested4PartyIDSource_1);
      NestedParties4_NoNested4PartyIDs_1.insert(Nested4PartyIDSource_1.getString());
      FIX::Nested4PartyRole Nested4PartyRole_1(163687547);
      noNested4PartyIDs_0_1_1.set(Nested4PartyRole_1);
      NestedParties4_NoNested4PartyIDs_1.insert(Nested4PartyRole_1.getString());
      all_values.push_back(NestedParties4_NoNested4PartyIDs_1);

      // NstdPtys4SubGrp
      // Group NstdPtys4SubGrp.NoNested4PartySubIDs
      {
        FIX50SP2::ExecutionReport::NoFills::NoNested4PartyIDs::NoNested4PartySubIDs noNested4PartySubIDs_0_1_2_0;
        // NstdPtys4SubGrp.NoNested4PartySubIDs
        multiset<string> NstdPtys4SubGrp_NoNested4PartySubIDs_3;
        FIX::Nested4PartySubID Nested4PartySubID_3("STRING_241668672");
        noNested4PartySubIDs_0_1_2_0.set(Nested4PartySubID_3);
        NstdPtys4SubGrp_NoNested4PartySubIDs_3.insert(Nested4PartySubID_3.getString());
        FIX::Nested4PartySubIDType Nested4PartySubIDType_3(2049620610);
        noNested4PartySubIDs_0_1_2_0.set(Nested4PartySubIDType_3);
        NstdPtys4SubGrp_NoNested4PartySubIDs_3.insert(Nested4PartySubIDType_3.getString());
        all_values.push_back(NstdPtys4SubGrp_NoNested4PartySubIDs_3);

        noNested4PartyIDs_0_1_1.addGroup(noNested4PartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoFills::NoNested4PartyIDs::NoNested4PartySubIDs noNested4PartySubIDs_0_1_2_1;
        // NstdPtys4SubGrp.NoNested4PartySubIDs
        multiset<string> NstdPtys4SubGrp_NoNested4PartySubIDs_4;
        FIX::Nested4PartySubID Nested4PartySubID_4("STRING_1877305717");
        noNested4PartySubIDs_0_1_2_1.set(Nested4PartySubID_4);
        NstdPtys4SubGrp_NoNested4PartySubIDs_4.insert(Nested4PartySubID_4.getString());
        FIX::Nested4PartySubIDType Nested4PartySubIDType_4(1182566441);
        noNested4PartySubIDs_0_1_2_1.set(Nested4PartySubIDType_4);
        NstdPtys4SubGrp_NoNested4PartySubIDs_4.insert(Nested4PartySubIDType_4.getString());
        all_values.push_back(NstdPtys4SubGrp_NoNested4PartySubIDs_4);

        noNested4PartyIDs_0_1_1.addGroup(noNested4PartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::ExecutionReport::NoFills::NoNested4PartyIDs::NoNested4PartySubIDs noNested4PartySubIDs_0_1_2_2;
        // NstdPtys4SubGrp.NoNested4PartySubIDs
        multiset<string> NstdPtys4SubGrp_NoNested4PartySubIDs_5;
        FIX::Nested4PartySubID Nested4PartySubID_5("STRING_918245471");
        noNested4PartySubIDs_0_1_2_2.set(Nested4PartySubID_5);
        NstdPtys4SubGrp_NoNested4PartySubIDs_5.insert(Nested4PartySubID_5.getString());
        FIX::Nested4PartySubIDType Nested4PartySubIDType_5(682821804);
        noNested4PartySubIDs_0_1_2_2.set(Nested4PartySubIDType_5);
        NstdPtys4SubGrp_NoNested4PartySubIDs_5.insert(Nested4PartySubIDType_5.getString());
        all_values.push_back(NstdPtys4SubGrp_NoNested4PartySubIDs_5);

        noNested4PartyIDs_0_1_1.addGroup(noNested4PartySubIDs_0_1_2_2);
      }
      noFills_0_0.addGroup(noNested4PartyIDs_0_1_1);
    }
    {
      FIX50SP2::ExecutionReport::NoFills::NoNested4PartyIDs noNested4PartyIDs_0_1_2;
      // NestedParties4.NoNested4PartyIDs
      multiset<string> NestedParties4_NoNested4PartyIDs_2;
      FIX::Nested4PartyID Nested4PartyID_2("STRING_296430793");
      noNested4PartyIDs_0_1_2.set(Nested4PartyID_2);
      NestedParties4_NoNested4PartyIDs_2.insert(Nested4PartyID_2.getString());
      FIX::Nested4PartyIDSource Nested4PartyIDSource_2('1');
      noNested4PartyIDs_0_1_2.set(Nested4PartyIDSource_2);
      NestedParties4_NoNested4PartyIDs_2.insert(Nested4PartyIDSource_2.getString());
      FIX::Nested4PartyRole Nested4PartyRole_2(1544350002);
      noNested4PartyIDs_0_1_2.set(Nested4PartyRole_2);
      NestedParties4_NoNested4PartyIDs_2.insert(Nested4PartyRole_2.getString());
      all_values.push_back(NestedParties4_NoNested4PartyIDs_2);

      // NstdPtys4SubGrp
      // Group NstdPtys4SubGrp.NoNested4PartySubIDs
      {
        FIX50SP2::ExecutionReport::NoFills::NoNested4PartyIDs::NoNested4PartySubIDs noNested4PartySubIDs_0_2_2_0;
        // NstdPtys4SubGrp.NoNested4PartySubIDs
        multiset<string> NstdPtys4SubGrp_NoNested4PartySubIDs_6;
        FIX::Nested4PartySubID Nested4PartySubID_6("STRING_681060182");
        noNested4PartySubIDs_0_2_2_0.set(Nested4PartySubID_6);
        NstdPtys4SubGrp_NoNested4PartySubIDs_6.insert(Nested4PartySubID_6.getString());
        FIX::Nested4PartySubIDType Nested4PartySubIDType_6(1598071768);
        noNested4PartySubIDs_0_2_2_0.set(Nested4PartySubIDType_6);
        NstdPtys4SubGrp_NoNested4PartySubIDs_6.insert(Nested4PartySubIDType_6.getString());
        all_values.push_back(NstdPtys4SubGrp_NoNested4PartySubIDs_6);

        noNested4PartyIDs_0_1_2.addGroup(noNested4PartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoFills::NoNested4PartyIDs::NoNested4PartySubIDs noNested4PartySubIDs_0_2_2_1;
        // NstdPtys4SubGrp.NoNested4PartySubIDs
        multiset<string> NstdPtys4SubGrp_NoNested4PartySubIDs_7;
        FIX::Nested4PartySubID Nested4PartySubID_7("STRING_1866180325");
        noNested4PartySubIDs_0_2_2_1.set(Nested4PartySubID_7);
        NstdPtys4SubGrp_NoNested4PartySubIDs_7.insert(Nested4PartySubID_7.getString());
        FIX::Nested4PartySubIDType Nested4PartySubIDType_7(2088218382);
        noNested4PartySubIDs_0_2_2_1.set(Nested4PartySubIDType_7);
        NstdPtys4SubGrp_NoNested4PartySubIDs_7.insert(Nested4PartySubIDType_7.getString());
        all_values.push_back(NstdPtys4SubGrp_NoNested4PartySubIDs_7);

        noNested4PartyIDs_0_1_2.addGroup(noNested4PartySubIDs_0_2_2_1);
      }
      {
        FIX50SP2::ExecutionReport::NoFills::NoNested4PartyIDs::NoNested4PartySubIDs noNested4PartySubIDs_0_2_2_2;
        // NstdPtys4SubGrp.NoNested4PartySubIDs
        multiset<string> NstdPtys4SubGrp_NoNested4PartySubIDs_8;
        FIX::Nested4PartySubID Nested4PartySubID_8("STRING_1475437954");
        noNested4PartySubIDs_0_2_2_2.set(Nested4PartySubID_8);
        NstdPtys4SubGrp_NoNested4PartySubIDs_8.insert(Nested4PartySubID_8.getString());
        FIX::Nested4PartySubIDType Nested4PartySubIDType_8(722019962);
        noNested4PartySubIDs_0_2_2_2.set(Nested4PartySubIDType_8);
        NstdPtys4SubGrp_NoNested4PartySubIDs_8.insert(Nested4PartySubIDType_8.getString());
        all_values.push_back(NstdPtys4SubGrp_NoNested4PartySubIDs_8);

        noNested4PartyIDs_0_1_2.addGroup(noNested4PartySubIDs_0_2_2_2);
      }
      noFills_0_0.addGroup(noNested4PartyIDs_0_1_2);
    }
    msg.addGroup(noFills_0_0);
  }
  {
    FIX50SP2::ExecutionReport::NoFills noFills_0_1;
    // FillsGrp.NoFills
    multiset<string> FillsGrp_NoFills_1;
    FIX::FillExecID FillExecID_1("STRING_2114990126");
    noFills_0_1.set(FillExecID_1);
    FillsGrp_NoFills_1.insert(FillExecID_1.getString());
    FIX::FillLiquidityInd FillLiquidityInd_1(1940764425);
    noFills_0_1.set(FillLiquidityInd_1);
    FillsGrp_NoFills_1.insert(FillLiquidityInd_1.getString());
    FIX::FillPx FillPx_1;
    FillPx_1.setString("21355852");
    noFills_0_1.set(FillPx_1);
    FillsGrp_NoFills_1.insert(FillPx_1.getString());
    FIX::FillQty FillQty_1;
    FillQty_1.setString("19045388");
    noFills_0_1.set(FillQty_1);
    FillsGrp_NoFills_1.insert(FillQty_1.getString());
    all_values.push_back(FillsGrp_NoFills_1);

    // NestedParties4
    // Group NestedParties4.NoNested4PartyIDs
    {
      FIX50SP2::ExecutionReport::NoFills::NoNested4PartyIDs noNested4PartyIDs_1_1_0;
      // NestedParties4.NoNested4PartyIDs
      multiset<string> NestedParties4_NoNested4PartyIDs_3;
      FIX::Nested4PartyID Nested4PartyID_3("STRING_2044185155");
      noNested4PartyIDs_1_1_0.set(Nested4PartyID_3);
      NestedParties4_NoNested4PartyIDs_3.insert(Nested4PartyID_3.getString());
      FIX::Nested4PartyIDSource Nested4PartyIDSource_3('3');
      noNested4PartyIDs_1_1_0.set(Nested4PartyIDSource_3);
      NestedParties4_NoNested4PartyIDs_3.insert(Nested4PartyIDSource_3.getString());
      FIX::Nested4PartyRole Nested4PartyRole_3(2142853058);
      noNested4PartyIDs_1_1_0.set(Nested4PartyRole_3);
      NestedParties4_NoNested4PartyIDs_3.insert(Nested4PartyRole_3.getString());
      all_values.push_back(NestedParties4_NoNested4PartyIDs_3);

      // NstdPtys4SubGrp
      // Group NstdPtys4SubGrp.NoNested4PartySubIDs
      {
        FIX50SP2::ExecutionReport::NoFills::NoNested4PartyIDs::NoNested4PartySubIDs noNested4PartySubIDs_1_0_2_0;
        // NstdPtys4SubGrp.NoNested4PartySubIDs
        multiset<string> NstdPtys4SubGrp_NoNested4PartySubIDs_9;
        FIX::Nested4PartySubID Nested4PartySubID_9("STRING_443520767");
        noNested4PartySubIDs_1_0_2_0.set(Nested4PartySubID_9);
        NstdPtys4SubGrp_NoNested4PartySubIDs_9.insert(Nested4PartySubID_9.getString());
        FIX::Nested4PartySubIDType Nested4PartySubIDType_9(1569474954);
        noNested4PartySubIDs_1_0_2_0.set(Nested4PartySubIDType_9);
        NstdPtys4SubGrp_NoNested4PartySubIDs_9.insert(Nested4PartySubIDType_9.getString());
        all_values.push_back(NstdPtys4SubGrp_NoNested4PartySubIDs_9);

        noNested4PartyIDs_1_1_0.addGroup(noNested4PartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoFills::NoNested4PartyIDs::NoNested4PartySubIDs noNested4PartySubIDs_1_0_2_1;
        // NstdPtys4SubGrp.NoNested4PartySubIDs
        multiset<string> NstdPtys4SubGrp_NoNested4PartySubIDs_10;
        FIX::Nested4PartySubID Nested4PartySubID_10("STRING_1410762076");
        noNested4PartySubIDs_1_0_2_1.set(Nested4PartySubID_10);
        NstdPtys4SubGrp_NoNested4PartySubIDs_10.insert(Nested4PartySubID_10.getString());
        FIX::Nested4PartySubIDType Nested4PartySubIDType_10(548938924);
        noNested4PartySubIDs_1_0_2_1.set(Nested4PartySubIDType_10);
        NstdPtys4SubGrp_NoNested4PartySubIDs_10.insert(Nested4PartySubIDType_10.getString());
        all_values.push_back(NstdPtys4SubGrp_NoNested4PartySubIDs_10);

        noNested4PartyIDs_1_1_0.addGroup(noNested4PartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::ExecutionReport::NoFills::NoNested4PartyIDs::NoNested4PartySubIDs noNested4PartySubIDs_1_0_2_2;
        // NstdPtys4SubGrp.NoNested4PartySubIDs
        multiset<string> NstdPtys4SubGrp_NoNested4PartySubIDs_11;
        FIX::Nested4PartySubID Nested4PartySubID_11("STRING_1733162502");
        noNested4PartySubIDs_1_0_2_2.set(Nested4PartySubID_11);
        NstdPtys4SubGrp_NoNested4PartySubIDs_11.insert(Nested4PartySubID_11.getString());
        FIX::Nested4PartySubIDType Nested4PartySubIDType_11(1837647856);
        noNested4PartySubIDs_1_0_2_2.set(Nested4PartySubIDType_11);
        NstdPtys4SubGrp_NoNested4PartySubIDs_11.insert(Nested4PartySubIDType_11.getString());
        all_values.push_back(NstdPtys4SubGrp_NoNested4PartySubIDs_11);

        noNested4PartyIDs_1_1_0.addGroup(noNested4PartySubIDs_1_0_2_2);
      }
      noFills_0_1.addGroup(noNested4PartyIDs_1_1_0);
    }
    msg.addGroup(noFills_0_1);
  }
  // FinancingDetails
  multiset<string> FinancingDetails_10;
  FIX::AgreementCurrency AgreementCurrency_10("JPY");
  msg.set(AgreementCurrency_10);
  FinancingDetails_10.insert(AgreementCurrency_10.getString());
  FIX::AgreementDate AgreementDate_10("LOCALMKTDATE_1567469925");
  msg.set(AgreementDate_10);
  FinancingDetails_10.insert(AgreementDate_10.getString());
  FIX::AgreementDesc AgreementDesc_10("STRING_1973174037");
  msg.set(AgreementDesc_10);
  FinancingDetails_10.insert(AgreementDesc_10.getString());
  FIX::AgreementID AgreementID_10("STRING_406061287");
  msg.set(AgreementID_10);
  FinancingDetails_10.insert(AgreementID_10.getString());
  FIX::DeliveryType DeliveryType_10(1);
  msg.set(DeliveryType_10);
  FinancingDetails_10.insert(DeliveryType_10.getString());
  FIX::EndDate EndDate_10("LOCALMKTDATE_122121183");
  msg.set(EndDate_10);
  FinancingDetails_10.insert(EndDate_10.getString());
  FIX::MarginRatio MarginRatio_10;
  MarginRatio_10.setString("74.330000");
  msg.set(MarginRatio_10);
  FinancingDetails_10.insert(MarginRatio_10.getString());
  FIX::StartDate StartDate_10("LOCALMKTDATE_1647158084");
  msg.set(StartDate_10);
  FinancingDetails_10.insert(StartDate_10.getString());
  FIX::TerminationType TerminationType_10(1);
  msg.set(TerminationType_10);
  FinancingDetails_10.insert(TerminationType_10.getString());
  all_values.push_back(FinancingDetails_10);

  // InstrmtLegExecGrp
  // Group InstrmtLegExecGrp.NoLegs
  {
    FIX50SP2::ExecutionReport::NoLegs noLegs_0_0;
    // InstrmtLegExecGrp.NoLegs
    multiset<string> InstrmtLegExecGrp_NoLegs_0;
    FIX::LegAllocID LegAllocID_0("STRING_1097746204");
    noLegs_0_0.set(LegAllocID_0);
    InstrmtLegExecGrp_NoLegs_0.insert(LegAllocID_0.getString());
    FIX::LegCalculatedCcyLastQty LegCalculatedCcyLastQty_0;
    LegCalculatedCcyLastQty_0.setString("16505152");
    noLegs_0_0.set(LegCalculatedCcyLastQty_0);
    InstrmtLegExecGrp_NoLegs_0.insert(LegCalculatedCcyLastQty_0.getString());
    FIX::LegCoveredOrUncovered LegCoveredOrUncovered_0(474048702);
    noLegs_0_0.set(LegCoveredOrUncovered_0);
    InstrmtLegExecGrp_NoLegs_0.insert(LegCoveredOrUncovered_0.getString());
    FIX::LegCurrencyRatio LegCurrencyRatio_0;
    LegCurrencyRatio_0.setString("4257005");
    noLegs_0_0.set(LegCurrencyRatio_0);
    InstrmtLegExecGrp_NoLegs_0.insert(LegCurrencyRatio_0.getString());
    FIX::LegDividendYield LegDividendYield_0;
    LegDividendYield_0.setString("15.590000");
    noLegs_0_0.set(LegDividendYield_0);
    InstrmtLegExecGrp_NoLegs_0.insert(LegDividendYield_0.getString());
    FIX::LegExecInst LegExecInst_0("MULTIPLECHARVALUE_441555180");
    noLegs_0_0.set(LegExecInst_0);
    InstrmtLegExecGrp_NoLegs_0.insert(LegExecInst_0.getString());
    FIX::LegGrossTradeAmt LegGrossTradeAmt_0;
    LegGrossTradeAmt_0.setString("2189812");
    noLegs_0_0.set(LegGrossTradeAmt_0);
    InstrmtLegExecGrp_NoLegs_0.insert(LegGrossTradeAmt_0.getString());
    FIX::LegLastForwardPoints LegLastForwardPoints_0;
    LegLastForwardPoints_0.setString("2131531");
    noLegs_0_0.set(LegLastForwardPoints_0);
    InstrmtLegExecGrp_NoLegs_0.insert(LegLastForwardPoints_0.getString());
    FIX::LegLastPx LegLastPx_0;
    LegLastPx_0.setString("1986103");
    noLegs_0_0.set(LegLastPx_0);
    InstrmtLegExecGrp_NoLegs_0.insert(LegLastPx_0.getString());
    FIX::LegLastQty LegLastQty_0;
    LegLastQty_0.setString("5466804");
    noLegs_0_0.set(LegLastQty_0);
    InstrmtLegExecGrp_NoLegs_0.insert(LegLastQty_0.getString());
    FIX::LegOrderQty LegOrderQty_0;
    LegOrderQty_0.setString("1098546");
    noLegs_0_0.set(LegOrderQty_0);
    InstrmtLegExecGrp_NoLegs_0.insert(LegOrderQty_0.getString());
    FIX::LegPositionEffect LegPositionEffect_0('5');
    noLegs_0_0.set(LegPositionEffect_0);
    InstrmtLegExecGrp_NoLegs_0.insert(LegPositionEffect_0.getString());
    FIX::LegQty LegQty_0;
    LegQty_0.setString("5420498");
    noLegs_0_0.set(LegQty_0);
    InstrmtLegExecGrp_NoLegs_0.insert(LegQty_0.getString());
    FIX::LegRefID LegRefID_0("STRING_270993679");
    noLegs_0_0.set(LegRefID_0);
    InstrmtLegExecGrp_NoLegs_0.insert(LegRefID_0.getString());
    FIX::LegSettlCurrency LegSettlCurrency_0("CHF");
    noLegs_0_0.set(LegSettlCurrency_0);
    InstrmtLegExecGrp_NoLegs_0.insert(LegSettlCurrency_0.getString());
    FIX::LegSettlDate LegSettlDate_0("LOCALMKTDATE_1681755755");
    noLegs_0_0.set(LegSettlDate_0);
    InstrmtLegExecGrp_NoLegs_0.insert(LegSettlDate_0.getString());
    FIX::LegSettlType LegSettlType_0('1');
    noLegs_0_0.set(LegSettlType_0);
    InstrmtLegExecGrp_NoLegs_0.insert(LegSettlType_0.getString());
    FIX::LegSwapType LegSwapType_0(5);
    noLegs_0_0.set(LegSwapType_0);
    InstrmtLegExecGrp_NoLegs_0.insert(LegSwapType_0.getString());
    FIX::LegVolatility LegVolatility_0;
    LegVolatility_0.setString("13719199");
    noLegs_0_0.set(LegVolatility_0);
    InstrmtLegExecGrp_NoLegs_0.insert(LegVolatility_0.getString());
    all_values.push_back(InstrmtLegExecGrp_NoLegs_0);

    // InstrumentLeg
    multiset<string> InstrumentLeg_41;
    FIX::EncodedLegIssuer EncodedLegIssuer_41("DATA_174937638");
    noLegs_0_0.set(EncodedLegIssuer_41);
    InstrumentLeg_41.insert(EncodedLegIssuer_41.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_41(1185019503);
    noLegs_0_0.set(EncodedLegIssuerLen_41);
    InstrumentLeg_41.insert(EncodedLegIssuerLen_41.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_41("DATA_791906240");
    noLegs_0_0.set(EncodedLegSecurityDesc_41);
    InstrumentLeg_41.insert(EncodedLegSecurityDesc_41.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_41(628028);
    noLegs_0_0.set(EncodedLegSecurityDescLen_41);
    InstrumentLeg_41.insert(EncodedLegSecurityDescLen_41.getString());
    FIX::LegCFICode LegCFICode_41("STRING_1591080790");
    noLegs_0_0.set(LegCFICode_41);
    InstrumentLeg_41.insert(LegCFICode_41.getString());
    FIX::LegContractMultiplier LegContractMultiplier_41;
    LegContractMultiplier_41.setString("8947143");
    noLegs_0_0.set(LegContractMultiplier_41);
    InstrumentLeg_41.insert(LegContractMultiplier_41.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_41(122749211);
    noLegs_0_0.set(LegContractMultiplierUnit_41);
    InstrumentLeg_41.insert(LegContractMultiplierUnit_41.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_41("MONTHYEAR_1443334576");
    noLegs_0_0.set(LegContractSettlMonth_41);
    InstrumentLeg_41.insert(LegContractSettlMonth_41.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_41("COUNTRY_394388758");
    noLegs_0_0.set(LegCountryOfIssue_41);
    InstrumentLeg_41.insert(LegCountryOfIssue_41.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_41("LOCALMKTDATE_2054567779");
    noLegs_0_0.set(LegCouponPaymentDate_41);
    InstrumentLeg_41.insert(LegCouponPaymentDate_41.getString());
    FIX::LegCouponRate LegCouponRate_41;
    LegCouponRate_41.setString("85.440000");
    noLegs_0_0.set(LegCouponRate_41);
    InstrumentLeg_41.insert(LegCouponRate_41.getString());
    FIX::LegCreditRating LegCreditRating_41("STRING_1492134962");
    noLegs_0_0.set(LegCreditRating_41);
    InstrumentLeg_41.insert(LegCreditRating_41.getString());
    FIX::LegCurrency LegCurrency_41("JPY");
    noLegs_0_0.set(LegCurrency_41);
    InstrumentLeg_41.insert(LegCurrency_41.getString());
    FIX::LegDatedDate LegDatedDate_41("LOCALMKTDATE_1917835473");
    noLegs_0_0.set(LegDatedDate_41);
    InstrumentLeg_41.insert(LegDatedDate_41.getString());
    FIX::LegExerciseStyle LegExerciseStyle_41(1782650935);
    noLegs_0_0.set(LegExerciseStyle_41);
    InstrumentLeg_41.insert(LegExerciseStyle_41.getString());
    FIX::LegFactor LegFactor_41;
    LegFactor_41.setString("7447687");
    noLegs_0_0.set(LegFactor_41);
    InstrumentLeg_41.insert(LegFactor_41.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_41(2136816761);
    noLegs_0_0.set(LegFlowScheduleType_41);
    InstrumentLeg_41.insert(LegFlowScheduleType_41.getString());
    FIX::LegInstrRegistry LegInstrRegistry_41("STRING_1995804083");
    noLegs_0_0.set(LegInstrRegistry_41);
    InstrumentLeg_41.insert(LegInstrRegistry_41.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_41("LOCALMKTDATE_943379132");
    noLegs_0_0.set(LegInterestAccrualDate_41);
    InstrumentLeg_41.insert(LegInterestAccrualDate_41.getString());
    FIX::LegIssueDate LegIssueDate_41("LOCALMKTDATE_536013582");
    noLegs_0_0.set(LegIssueDate_41);
    InstrumentLeg_41.insert(LegIssueDate_41.getString());
    FIX::LegIssuer LegIssuer_41("STRING_2105658739");
    noLegs_0_0.set(LegIssuer_41);
    InstrumentLeg_41.insert(LegIssuer_41.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_41("STRING_1482733130");
    noLegs_0_0.set(LegLocaleOfIssue_41);
    InstrumentLeg_41.insert(LegLocaleOfIssue_41.getString());
    FIX::LegMaturityDate LegMaturityDate_41("LOCALMKTDATE_1078063461");
    noLegs_0_0.set(LegMaturityDate_41);
    InstrumentLeg_41.insert(LegMaturityDate_41.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_41("MONTHYEAR_229168770");
    noLegs_0_0.set(LegMaturityMonthYear_41);
    InstrumentLeg_41.insert(LegMaturityMonthYear_41.getString());
    FIX::LegMaturityTime LegMaturityTime_41("TZTIMEONLY_318124248");
    noLegs_0_0.set(LegMaturityTime_41);
    InstrumentLeg_41.insert(LegMaturityTime_41.getString());
    FIX::LegOptAttribute LegOptAttribute_41('1');
    noLegs_0_0.set(LegOptAttribute_41);
    InstrumentLeg_41.insert(LegOptAttribute_41.getString());
    FIX::LegOptionRatio LegOptionRatio_41;
    LegOptionRatio_41.setString("19109245");
    noLegs_0_0.set(LegOptionRatio_41);
    InstrumentLeg_41.insert(LegOptionRatio_41.getString());
    FIX::LegPool LegPool_41("STRING_1849937938");
    noLegs_0_0.set(LegPool_41);
    InstrumentLeg_41.insert(LegPool_41.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_41("STRING_591824686");
    noLegs_0_0.set(LegPriceUnitOfMeasure_41);
    InstrumentLeg_41.insert(LegPriceUnitOfMeasure_41.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_41;
    LegPriceUnitOfMeasureQty_41.setString("11353608");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_41);
    InstrumentLeg_41.insert(LegPriceUnitOfMeasureQty_41.getString());
    FIX::LegProduct LegProduct_41(2024875577);
    noLegs_0_0.set(LegProduct_41);
    InstrumentLeg_41.insert(LegProduct_41.getString());
    FIX::LegPutOrCall LegPutOrCall_41(1776844189);
    noLegs_0_0.set(LegPutOrCall_41);
    InstrumentLeg_41.insert(LegPutOrCall_41.getString());
    FIX::LegRatioQty LegRatioQty_41;
    LegRatioQty_41.setString("19272670");
    noLegs_0_0.set(LegRatioQty_41);
    InstrumentLeg_41.insert(LegRatioQty_41.getString());
    FIX::LegRedemptionDate LegRedemptionDate_41("LOCALMKTDATE_2025503605");
    noLegs_0_0.set(LegRedemptionDate_41);
    InstrumentLeg_41.insert(LegRedemptionDate_41.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_41("STRING_1220441332");
    noLegs_0_0.set(LegRepoCollateralSecurityType_41);
    InstrumentLeg_41.insert(LegRepoCollateralSecurityType_41.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_41;
    LegRepurchaseRate_41.setString("77.560000");
    noLegs_0_0.set(LegRepurchaseRate_41);
    InstrumentLeg_41.insert(LegRepurchaseRate_41.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_41(769168);
    noLegs_0_0.set(LegRepurchaseTerm_41);
    InstrumentLeg_41.insert(LegRepurchaseTerm_41.getString());
    FIX::LegSecurityDesc LegSecurityDesc_41("STRING_516292260");
    noLegs_0_0.set(LegSecurityDesc_41);
    InstrumentLeg_41.insert(LegSecurityDesc_41.getString());
    FIX::LegSecurityExchange LegSecurityExchange_41("EXCHANGE_1068886514");
    noLegs_0_0.set(LegSecurityExchange_41);
    InstrumentLeg_41.insert(LegSecurityExchange_41.getString());
    FIX::LegSecurityID LegSecurityID_41("STRING_2055336947");
    noLegs_0_0.set(LegSecurityID_41);
    InstrumentLeg_41.insert(LegSecurityID_41.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_41("STRING_345457156");
    noLegs_0_0.set(LegSecurityIDSource_41);
    InstrumentLeg_41.insert(LegSecurityIDSource_41.getString());
    FIX::LegSecuritySubType LegSecuritySubType_41("STRING_413537828");
    noLegs_0_0.set(LegSecuritySubType_41);
    InstrumentLeg_41.insert(LegSecuritySubType_41.getString());
    FIX::LegSecurityType LegSecurityType_41("STRING_1465452675");
    noLegs_0_0.set(LegSecurityType_41);
    InstrumentLeg_41.insert(LegSecurityType_41.getString());
    FIX::LegSide LegSide_41('6');
    noLegs_0_0.set(LegSide_41);
    InstrumentLeg_41.insert(LegSide_41.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_41("STRING_183889654");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_41);
    InstrumentLeg_41.insert(LegStateOrProvinceOfIssue_41.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_41("USD");
    noLegs_0_0.set(LegStrikeCurrency_41);
    InstrumentLeg_41.insert(LegStrikeCurrency_41.getString());
    FIX::LegStrikePrice LegStrikePrice_41;
    LegStrikePrice_41.setString("1732227");
    noLegs_0_0.set(LegStrikePrice_41);
    InstrumentLeg_41.insert(LegStrikePrice_41.getString());
    FIX::LegSymbol LegSymbol_41("STRING_948940397");
    noLegs_0_0.set(LegSymbol_41);
    InstrumentLeg_41.insert(LegSymbol_41.getString());
    FIX::LegSymbolSfx LegSymbolSfx_41("STRING_189335016");
    noLegs_0_0.set(LegSymbolSfx_41);
    InstrumentLeg_41.insert(LegSymbolSfx_41.getString());
    FIX::LegTimeUnit LegTimeUnit_41("STRING_709236349");
    noLegs_0_0.set(LegTimeUnit_41);
    InstrumentLeg_41.insert(LegTimeUnit_41.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_41("STRING_907115489");
    noLegs_0_0.set(LegUnitOfMeasure_41);
    InstrumentLeg_41.insert(LegUnitOfMeasure_41.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_41;
    LegUnitOfMeasureQty_41.setString("16720681");
    noLegs_0_0.set(LegUnitOfMeasureQty_41);
    InstrumentLeg_41.insert(LegUnitOfMeasureQty_41.getString());
    all_values.push_back(InstrumentLeg_41);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::ExecutionReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_72;
      FIX::LegSecurityAltID LegSecurityAltID_72("STRING_1136284259");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_72);
      LegSecAltIDGrp_NoLegSecurityAltID_72.insert(LegSecurityAltID_72.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_72("STRING_1990192395");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_72);
      LegSecAltIDGrp_NoLegSecurityAltID_72.insert(LegSecurityAltIDSource_72.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_72);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_73;
      FIX::LegSecurityAltID LegSecurityAltID_73("STRING_681920809");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_73);
      LegSecAltIDGrp_NoLegSecurityAltID_73.insert(LegSecurityAltID_73.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_73("STRING_899725137");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_73);
      LegSecAltIDGrp_NoLegSecurityAltID_73.insert(LegSecurityAltIDSource_73.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_73);

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    // LegPreAllocGrp
    // Group LegPreAllocGrp.NoLegAllocs
    {
      FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs noLegAllocs_0_1_0;
      // LegPreAllocGrp.NoLegAllocs
      multiset<string> LegPreAllocGrp_NoLegAllocs_0;
      FIX::LegAllocAccount LegAllocAccount_0("STRING_1273745495");
      noLegAllocs_0_1_0.set(LegAllocAccount_0);
      LegPreAllocGrp_NoLegAllocs_0.insert(LegAllocAccount_0.getString());
      FIX::LegAllocAcctIDSource LegAllocAcctIDSource_0("STRING_2035085979");
      noLegAllocs_0_1_0.set(LegAllocAcctIDSource_0);
      LegPreAllocGrp_NoLegAllocs_0.insert(LegAllocAcctIDSource_0.getString());
      FIX::LegAllocQty LegAllocQty_0;
      LegAllocQty_0.setString("15700386");
      noLegAllocs_0_1_0.set(LegAllocQty_0);
      LegPreAllocGrp_NoLegAllocs_0.insert(LegAllocQty_0.getString());
      FIX::LegAllocSettlCurrency LegAllocSettlCurrency_0("CHF");
      noLegAllocs_0_1_0.set(LegAllocSettlCurrency_0);
      LegPreAllocGrp_NoLegAllocs_0.insert(LegAllocSettlCurrency_0.getString());
      FIX::LegIndividualAllocID LegIndividualAllocID_0("STRING_1448058571");
      noLegAllocs_0_1_0.set(LegIndividualAllocID_0);
      LegPreAllocGrp_NoLegAllocs_0.insert(LegIndividualAllocID_0.getString());
      all_values.push_back(LegPreAllocGrp_NoLegAllocs_0);

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_0_0_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_21;
        FIX::Nested2PartyID Nested2PartyID_21("STRING_341883521");
        noNested2PartyIDs_0_0_2_0.set(Nested2PartyID_21);
        NestedParties2_NoNested2PartyIDs_21.insert(Nested2PartyID_21.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_21('1');
        noNested2PartyIDs_0_0_2_0.set(Nested2PartyIDSource_21);
        NestedParties2_NoNested2PartyIDs_21.insert(Nested2PartyIDSource_21.getString());
        FIX::Nested2PartyRole Nested2PartyRole_21(492355980);
        noNested2PartyIDs_0_0_2_0.set(Nested2PartyRole_21);
        NestedParties2_NoNested2PartyIDs_21.insert(Nested2PartyRole_21.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_21);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_41;
          FIX::Nested2PartySubID Nested2PartySubID_41("STRING_1356681038");
          noNested2PartySubIDs_0_0_0_3_0.set(Nested2PartySubID_41);
          NstdPtys2SubGrp_NoNested2PartySubIDs_41.insert(Nested2PartySubID_41.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_41(837813136);
          noNested2PartySubIDs_0_0_0_3_0.set(Nested2PartySubIDType_41);
          NstdPtys2SubGrp_NoNested2PartySubIDs_41.insert(Nested2PartySubIDType_41.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_41);

          noNested2PartyIDs_0_0_2_0.addGroup(noNested2PartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_0_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_42;
          FIX::Nested2PartySubID Nested2PartySubID_42("STRING_1824307863");
          noNested2PartySubIDs_0_0_0_3_1.set(Nested2PartySubID_42);
          NstdPtys2SubGrp_NoNested2PartySubIDs_42.insert(Nested2PartySubID_42.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_42(674650065);
          noNested2PartySubIDs_0_0_0_3_1.set(Nested2PartySubIDType_42);
          NstdPtys2SubGrp_NoNested2PartySubIDs_42.insert(Nested2PartySubIDType_42.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_42);

          noNested2PartyIDs_0_0_2_0.addGroup(noNested2PartySubIDs_0_0_0_3_1);
        }
        noLegAllocs_0_1_0.addGroup(noNested2PartyIDs_0_0_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_0_0_2_1;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_22;
        FIX::Nested2PartyID Nested2PartyID_22("STRING_1486483890");
        noNested2PartyIDs_0_0_2_1.set(Nested2PartyID_22);
        NestedParties2_NoNested2PartyIDs_22.insert(Nested2PartyID_22.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_22('2');
        noNested2PartyIDs_0_0_2_1.set(Nested2PartyIDSource_22);
        NestedParties2_NoNested2PartyIDs_22.insert(Nested2PartyIDSource_22.getString());
        FIX::Nested2PartyRole Nested2PartyRole_22(1775270027);
        noNested2PartyIDs_0_0_2_1.set(Nested2PartyRole_22);
        NestedParties2_NoNested2PartyIDs_22.insert(Nested2PartyRole_22.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_22);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_1_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_43;
          FIX::Nested2PartySubID Nested2PartySubID_43("STRING_33936637");
          noNested2PartySubIDs_0_0_1_3_0.set(Nested2PartySubID_43);
          NstdPtys2SubGrp_NoNested2PartySubIDs_43.insert(Nested2PartySubID_43.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_43(576726777);
          noNested2PartySubIDs_0_0_1_3_0.set(Nested2PartySubIDType_43);
          NstdPtys2SubGrp_NoNested2PartySubIDs_43.insert(Nested2PartySubIDType_43.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_43);

          noNested2PartyIDs_0_0_2_1.addGroup(noNested2PartySubIDs_0_0_1_3_0);
        }
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_1_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_44;
          FIX::Nested2PartySubID Nested2PartySubID_44("STRING_921774790");
          noNested2PartySubIDs_0_0_1_3_1.set(Nested2PartySubID_44);
          NstdPtys2SubGrp_NoNested2PartySubIDs_44.insert(Nested2PartySubID_44.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_44(743172986);
          noNested2PartySubIDs_0_0_1_3_1.set(Nested2PartySubIDType_44);
          NstdPtys2SubGrp_NoNested2PartySubIDs_44.insert(Nested2PartySubIDType_44.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_44);

          noNested2PartyIDs_0_0_2_1.addGroup(noNested2PartySubIDs_0_0_1_3_1);
        }
        noLegAllocs_0_1_0.addGroup(noNested2PartyIDs_0_0_2_1);
      }
      {
        FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_0_0_2_2;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_23;
        FIX::Nested2PartyID Nested2PartyID_23("STRING_1483842266");
        noNested2PartyIDs_0_0_2_2.set(Nested2PartyID_23);
        NestedParties2_NoNested2PartyIDs_23.insert(Nested2PartyID_23.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_23('4');
        noNested2PartyIDs_0_0_2_2.set(Nested2PartyIDSource_23);
        NestedParties2_NoNested2PartyIDs_23.insert(Nested2PartyIDSource_23.getString());
        FIX::Nested2PartyRole Nested2PartyRole_23(382989149);
        noNested2PartyIDs_0_0_2_2.set(Nested2PartyRole_23);
        NestedParties2_NoNested2PartyIDs_23.insert(Nested2PartyRole_23.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_23);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_2_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_45;
          FIX::Nested2PartySubID Nested2PartySubID_45("STRING_289068036");
          noNested2PartySubIDs_0_0_2_3_0.set(Nested2PartySubID_45);
          NstdPtys2SubGrp_NoNested2PartySubIDs_45.insert(Nested2PartySubID_45.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_45(1064909958);
          noNested2PartySubIDs_0_0_2_3_0.set(Nested2PartySubIDType_45);
          NstdPtys2SubGrp_NoNested2PartySubIDs_45.insert(Nested2PartySubIDType_45.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_45);

          noNested2PartyIDs_0_0_2_2.addGroup(noNested2PartySubIDs_0_0_2_3_0);
        }
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_2_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_46;
          FIX::Nested2PartySubID Nested2PartySubID_46("STRING_1372368015");
          noNested2PartySubIDs_0_0_2_3_1.set(Nested2PartySubID_46);
          NstdPtys2SubGrp_NoNested2PartySubIDs_46.insert(Nested2PartySubID_46.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_46(1981714721);
          noNested2PartySubIDs_0_0_2_3_1.set(Nested2PartySubIDType_46);
          NstdPtys2SubGrp_NoNested2PartySubIDs_46.insert(Nested2PartySubIDType_46.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_46);

          noNested2PartyIDs_0_0_2_2.addGroup(noNested2PartySubIDs_0_0_2_3_1);
        }
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_2_3_2;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_47;
          FIX::Nested2PartySubID Nested2PartySubID_47("STRING_191171805");
          noNested2PartySubIDs_0_0_2_3_2.set(Nested2PartySubID_47);
          NstdPtys2SubGrp_NoNested2PartySubIDs_47.insert(Nested2PartySubID_47.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_47(1259970346);
          noNested2PartySubIDs_0_0_2_3_2.set(Nested2PartySubIDType_47);
          NstdPtys2SubGrp_NoNested2PartySubIDs_47.insert(Nested2PartySubIDType_47.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_47);

          noNested2PartyIDs_0_0_2_2.addGroup(noNested2PartySubIDs_0_0_2_3_2);
        }
        noLegAllocs_0_1_0.addGroup(noNested2PartyIDs_0_0_2_2);
      }
      noLegs_0_0.addGroup(noLegAllocs_0_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs noLegAllocs_0_1_1;
      // LegPreAllocGrp.NoLegAllocs
      multiset<string> LegPreAllocGrp_NoLegAllocs_1;
      FIX::LegAllocAccount LegAllocAccount_1("STRING_1404269688");
      noLegAllocs_0_1_1.set(LegAllocAccount_1);
      LegPreAllocGrp_NoLegAllocs_1.insert(LegAllocAccount_1.getString());
      FIX::LegAllocAcctIDSource LegAllocAcctIDSource_1("STRING_1094277841");
      noLegAllocs_0_1_1.set(LegAllocAcctIDSource_1);
      LegPreAllocGrp_NoLegAllocs_1.insert(LegAllocAcctIDSource_1.getString());
      FIX::LegAllocQty LegAllocQty_1;
      LegAllocQty_1.setString("9273561");
      noLegAllocs_0_1_1.set(LegAllocQty_1);
      LegPreAllocGrp_NoLegAllocs_1.insert(LegAllocQty_1.getString());
      FIX::LegAllocSettlCurrency LegAllocSettlCurrency_1("GBP");
      noLegAllocs_0_1_1.set(LegAllocSettlCurrency_1);
      LegPreAllocGrp_NoLegAllocs_1.insert(LegAllocSettlCurrency_1.getString());
      FIX::LegIndividualAllocID LegIndividualAllocID_1("STRING_1269239632");
      noLegAllocs_0_1_1.set(LegIndividualAllocID_1);
      LegPreAllocGrp_NoLegAllocs_1.insert(LegIndividualAllocID_1.getString());
      all_values.push_back(LegPreAllocGrp_NoLegAllocs_1);

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_0_1_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_24;
        FIX::Nested2PartyID Nested2PartyID_24("STRING_1562697542");
        noNested2PartyIDs_0_1_2_0.set(Nested2PartyID_24);
        NestedParties2_NoNested2PartyIDs_24.insert(Nested2PartyID_24.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_24('5');
        noNested2PartyIDs_0_1_2_0.set(Nested2PartyIDSource_24);
        NestedParties2_NoNested2PartyIDs_24.insert(Nested2PartyIDSource_24.getString());
        FIX::Nested2PartyRole Nested2PartyRole_24(1362869741);
        noNested2PartyIDs_0_1_2_0.set(Nested2PartyRole_24);
        NestedParties2_NoNested2PartyIDs_24.insert(Nested2PartyRole_24.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_24);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_48;
          FIX::Nested2PartySubID Nested2PartySubID_48("STRING_209350234");
          noNested2PartySubIDs_0_1_0_3_0.set(Nested2PartySubID_48);
          NstdPtys2SubGrp_NoNested2PartySubIDs_48.insert(Nested2PartySubID_48.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_48(2037519807);
          noNested2PartySubIDs_0_1_0_3_0.set(Nested2PartySubIDType_48);
          NstdPtys2SubGrp_NoNested2PartySubIDs_48.insert(Nested2PartySubIDType_48.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_48);

          noNested2PartyIDs_0_1_2_0.addGroup(noNested2PartySubIDs_0_1_0_3_0);
        }
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_0_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_49;
          FIX::Nested2PartySubID Nested2PartySubID_49("STRING_1739510921");
          noNested2PartySubIDs_0_1_0_3_1.set(Nested2PartySubID_49);
          NstdPtys2SubGrp_NoNested2PartySubIDs_49.insert(Nested2PartySubID_49.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_49(70064104);
          noNested2PartySubIDs_0_1_0_3_1.set(Nested2PartySubIDType_49);
          NstdPtys2SubGrp_NoNested2PartySubIDs_49.insert(Nested2PartySubIDType_49.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_49);

          noNested2PartyIDs_0_1_2_0.addGroup(noNested2PartySubIDs_0_1_0_3_1);
        }
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_0_3_2;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_50;
          FIX::Nested2PartySubID Nested2PartySubID_50("STRING_1665306186");
          noNested2PartySubIDs_0_1_0_3_2.set(Nested2PartySubID_50);
          NstdPtys2SubGrp_NoNested2PartySubIDs_50.insert(Nested2PartySubID_50.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_50(324467048);
          noNested2PartySubIDs_0_1_0_3_2.set(Nested2PartySubIDType_50);
          NstdPtys2SubGrp_NoNested2PartySubIDs_50.insert(Nested2PartySubIDType_50.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_50);

          noNested2PartyIDs_0_1_2_0.addGroup(noNested2PartySubIDs_0_1_0_3_2);
        }
        noLegAllocs_0_1_1.addGroup(noNested2PartyIDs_0_1_2_0);
      }
      noLegs_0_0.addGroup(noLegAllocs_0_1_1);
    }
    {
      FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs noLegAllocs_0_1_2;
      // LegPreAllocGrp.NoLegAllocs
      multiset<string> LegPreAllocGrp_NoLegAllocs_2;
      FIX::LegAllocAccount LegAllocAccount_2("STRING_104000741");
      noLegAllocs_0_1_2.set(LegAllocAccount_2);
      LegPreAllocGrp_NoLegAllocs_2.insert(LegAllocAccount_2.getString());
      FIX::LegAllocAcctIDSource LegAllocAcctIDSource_2("STRING_94549315");
      noLegAllocs_0_1_2.set(LegAllocAcctIDSource_2);
      LegPreAllocGrp_NoLegAllocs_2.insert(LegAllocAcctIDSource_2.getString());
      FIX::LegAllocQty LegAllocQty_2;
      LegAllocQty_2.setString("12462418");
      noLegAllocs_0_1_2.set(LegAllocQty_2);
      LegPreAllocGrp_NoLegAllocs_2.insert(LegAllocQty_2.getString());
      FIX::LegAllocSettlCurrency LegAllocSettlCurrency_2("CHF");
      noLegAllocs_0_1_2.set(LegAllocSettlCurrency_2);
      LegPreAllocGrp_NoLegAllocs_2.insert(LegAllocSettlCurrency_2.getString());
      FIX::LegIndividualAllocID LegIndividualAllocID_2("STRING_1692601127");
      noLegAllocs_0_1_2.set(LegIndividualAllocID_2);
      LegPreAllocGrp_NoLegAllocs_2.insert(LegIndividualAllocID_2.getString());
      all_values.push_back(LegPreAllocGrp_NoLegAllocs_2);

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_0_2_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_25;
        FIX::Nested2PartyID Nested2PartyID_25("STRING_2051034459");
        noNested2PartyIDs_0_2_2_0.set(Nested2PartyID_25);
        NestedParties2_NoNested2PartyIDs_25.insert(Nested2PartyID_25.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_25('1');
        noNested2PartyIDs_0_2_2_0.set(Nested2PartyIDSource_25);
        NestedParties2_NoNested2PartyIDs_25.insert(Nested2PartyIDSource_25.getString());
        FIX::Nested2PartyRole Nested2PartyRole_25(147589186);
        noNested2PartyIDs_0_2_2_0.set(Nested2PartyRole_25);
        NestedParties2_NoNested2PartyIDs_25.insert(Nested2PartyRole_25.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_25);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_2_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_51;
          FIX::Nested2PartySubID Nested2PartySubID_51("STRING_1815900237");
          noNested2PartySubIDs_0_2_0_3_0.set(Nested2PartySubID_51);
          NstdPtys2SubGrp_NoNested2PartySubIDs_51.insert(Nested2PartySubID_51.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_51(338760991);
          noNested2PartySubIDs_0_2_0_3_0.set(Nested2PartySubIDType_51);
          NstdPtys2SubGrp_NoNested2PartySubIDs_51.insert(Nested2PartySubIDType_51.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_51);

          noNested2PartyIDs_0_2_2_0.addGroup(noNested2PartySubIDs_0_2_0_3_0);
        }
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_2_0_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_52;
          FIX::Nested2PartySubID Nested2PartySubID_52("STRING_388405524");
          noNested2PartySubIDs_0_2_0_3_1.set(Nested2PartySubID_52);
          NstdPtys2SubGrp_NoNested2PartySubIDs_52.insert(Nested2PartySubID_52.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_52(1072686277);
          noNested2PartySubIDs_0_2_0_3_1.set(Nested2PartySubIDType_52);
          NstdPtys2SubGrp_NoNested2PartySubIDs_52.insert(Nested2PartySubIDType_52.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_52);

          noNested2PartyIDs_0_2_2_0.addGroup(noNested2PartySubIDs_0_2_0_3_1);
        }
        noLegAllocs_0_1_2.addGroup(noNested2PartyIDs_0_2_2_0);
      }
      noLegs_0_0.addGroup(noLegAllocs_0_1_2);
    }
    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::ExecutionReport::NoLegs::NoLegStipulations noLegStipulations_0_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_0;
      FIX::LegStipulationType LegStipulationType_0("STRING_1315761635");
      noLegStipulations_0_1_0.set(LegStipulationType_0);
      LegStipulations_NoLegStipulations_0.insert(LegStipulationType_0.getString());
      FIX::LegStipulationValue LegStipulationValue_0("STRING_1777530888");
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
      FIX::Nested3PartyID Nested3PartyID_0("STRING_437517619");
      noNested3PartyIDs_0_1_0.set(Nested3PartyID_0);
      NestedParties3_NoNested3PartyIDs_0.insert(Nested3PartyID_0.getString());
      FIX::Nested3PartyIDSource Nested3PartyIDSource_0('1');
      noNested3PartyIDs_0_1_0.set(Nested3PartyIDSource_0);
      NestedParties3_NoNested3PartyIDs_0.insert(Nested3PartyIDSource_0.getString());
      FIX::Nested3PartyRole Nested3PartyRole_0(1918594289);
      noNested3PartyIDs_0_1_0.set(Nested3PartyRole_0);
      NestedParties3_NoNested3PartyIDs_0.insert(Nested3PartyRole_0.getString());
      all_values.push_back(NestedParties3_NoNested3PartyIDs_0);

      // NstdPtys3SubGrp
      // Group NstdPtys3SubGrp.NoNested3PartySubIDs
      {
        FIX50SP2::ExecutionReport::NoLegs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_0_0_2_0;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_0;
        FIX::Nested3PartySubID Nested3PartySubID_0("STRING_999105685");
        noNested3PartySubIDs_0_0_2_0.set(Nested3PartySubID_0);
        NstdPtys3SubGrp_NoNested3PartySubIDs_0.insert(Nested3PartySubID_0.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_0(24137672);
        noNested3PartySubIDs_0_0_2_0.set(Nested3PartySubIDType_0);
        NstdPtys3SubGrp_NoNested3PartySubIDs_0.insert(Nested3PartySubIDType_0.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_0);

        noNested3PartyIDs_0_1_0.addGroup(noNested3PartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoLegs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_0_0_2_1;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_1;
        FIX::Nested3PartySubID Nested3PartySubID_1("STRING_1179393872");
        noNested3PartySubIDs_0_0_2_1.set(Nested3PartySubID_1);
        NstdPtys3SubGrp_NoNested3PartySubIDs_1.insert(Nested3PartySubID_1.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_1(889141844);
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
    FIX::LegAllocID LegAllocID_1("STRING_1763648594");
    noLegs_0_1.set(LegAllocID_1);
    InstrmtLegExecGrp_NoLegs_1.insert(LegAllocID_1.getString());
    FIX::LegCalculatedCcyLastQty LegCalculatedCcyLastQty_1;
    LegCalculatedCcyLastQty_1.setString("12494579");
    noLegs_0_1.set(LegCalculatedCcyLastQty_1);
    InstrmtLegExecGrp_NoLegs_1.insert(LegCalculatedCcyLastQty_1.getString());
    FIX::LegCoveredOrUncovered LegCoveredOrUncovered_1(406964382);
    noLegs_0_1.set(LegCoveredOrUncovered_1);
    InstrmtLegExecGrp_NoLegs_1.insert(LegCoveredOrUncovered_1.getString());
    FIX::LegCurrencyRatio LegCurrencyRatio_1;
    LegCurrencyRatio_1.setString("20881156");
    noLegs_0_1.set(LegCurrencyRatio_1);
    InstrmtLegExecGrp_NoLegs_1.insert(LegCurrencyRatio_1.getString());
    FIX::LegDividendYield LegDividendYield_1;
    LegDividendYield_1.setString("87.170000");
    noLegs_0_1.set(LegDividendYield_1);
    InstrmtLegExecGrp_NoLegs_1.insert(LegDividendYield_1.getString());
    FIX::LegExecInst LegExecInst_1("MULTIPLECHARVALUE_501513698");
    noLegs_0_1.set(LegExecInst_1);
    InstrmtLegExecGrp_NoLegs_1.insert(LegExecInst_1.getString());
    FIX::LegGrossTradeAmt LegGrossTradeAmt_1;
    LegGrossTradeAmt_1.setString("11868738");
    noLegs_0_1.set(LegGrossTradeAmt_1);
    InstrmtLegExecGrp_NoLegs_1.insert(LegGrossTradeAmt_1.getString());
    FIX::LegLastForwardPoints LegLastForwardPoints_1;
    LegLastForwardPoints_1.setString("531487");
    noLegs_0_1.set(LegLastForwardPoints_1);
    InstrmtLegExecGrp_NoLegs_1.insert(LegLastForwardPoints_1.getString());
    FIX::LegLastPx LegLastPx_1;
    LegLastPx_1.setString("20799052");
    noLegs_0_1.set(LegLastPx_1);
    InstrmtLegExecGrp_NoLegs_1.insert(LegLastPx_1.getString());
    FIX::LegLastQty LegLastQty_1;
    LegLastQty_1.setString("7319913");
    noLegs_0_1.set(LegLastQty_1);
    InstrmtLegExecGrp_NoLegs_1.insert(LegLastQty_1.getString());
    FIX::LegOrderQty LegOrderQty_1;
    LegOrderQty_1.setString("12833116");
    noLegs_0_1.set(LegOrderQty_1);
    InstrmtLegExecGrp_NoLegs_1.insert(LegOrderQty_1.getString());
    FIX::LegPositionEffect LegPositionEffect_1('1');
    noLegs_0_1.set(LegPositionEffect_1);
    InstrmtLegExecGrp_NoLegs_1.insert(LegPositionEffect_1.getString());
    FIX::LegQty LegQty_1;
    LegQty_1.setString("5661768");
    noLegs_0_1.set(LegQty_1);
    InstrmtLegExecGrp_NoLegs_1.insert(LegQty_1.getString());
    FIX::LegRefID LegRefID_1("STRING_1430900860");
    noLegs_0_1.set(LegRefID_1);
    InstrmtLegExecGrp_NoLegs_1.insert(LegRefID_1.getString());
    FIX::LegSettlCurrency LegSettlCurrency_1("JPY");
    noLegs_0_1.set(LegSettlCurrency_1);
    InstrmtLegExecGrp_NoLegs_1.insert(LegSettlCurrency_1.getString());
    FIX::LegSettlDate LegSettlDate_1("LOCALMKTDATE_1769661851");
    noLegs_0_1.set(LegSettlDate_1);
    InstrmtLegExecGrp_NoLegs_1.insert(LegSettlDate_1.getString());
    FIX::LegSettlType LegSettlType_1('1');
    noLegs_0_1.set(LegSettlType_1);
    InstrmtLegExecGrp_NoLegs_1.insert(LegSettlType_1.getString());
    FIX::LegSwapType LegSwapType_1(2);
    noLegs_0_1.set(LegSwapType_1);
    InstrmtLegExecGrp_NoLegs_1.insert(LegSwapType_1.getString());
    FIX::LegVolatility LegVolatility_1;
    LegVolatility_1.setString("10552170");
    noLegs_0_1.set(LegVolatility_1);
    InstrmtLegExecGrp_NoLegs_1.insert(LegVolatility_1.getString());
    all_values.push_back(InstrmtLegExecGrp_NoLegs_1);

    // InstrumentLeg
    multiset<string> InstrumentLeg_42;
    FIX::EncodedLegIssuer EncodedLegIssuer_42("DATA_668574779");
    noLegs_0_1.set(EncodedLegIssuer_42);
    InstrumentLeg_42.insert(EncodedLegIssuer_42.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_42(937326934);
    noLegs_0_1.set(EncodedLegIssuerLen_42);
    InstrumentLeg_42.insert(EncodedLegIssuerLen_42.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_42("DATA_1411113783");
    noLegs_0_1.set(EncodedLegSecurityDesc_42);
    InstrumentLeg_42.insert(EncodedLegSecurityDesc_42.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_42(1106092398);
    noLegs_0_1.set(EncodedLegSecurityDescLen_42);
    InstrumentLeg_42.insert(EncodedLegSecurityDescLen_42.getString());
    FIX::LegCFICode LegCFICode_42("STRING_573562877");
    noLegs_0_1.set(LegCFICode_42);
    InstrumentLeg_42.insert(LegCFICode_42.getString());
    FIX::LegContractMultiplier LegContractMultiplier_42;
    LegContractMultiplier_42.setString("11822244");
    noLegs_0_1.set(LegContractMultiplier_42);
    InstrumentLeg_42.insert(LegContractMultiplier_42.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_42(2076136036);
    noLegs_0_1.set(LegContractMultiplierUnit_42);
    InstrumentLeg_42.insert(LegContractMultiplierUnit_42.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_42("MONTHYEAR_1572668562");
    noLegs_0_1.set(LegContractSettlMonth_42);
    InstrumentLeg_42.insert(LegContractSettlMonth_42.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_42("COUNTRY_1206362097");
    noLegs_0_1.set(LegCountryOfIssue_42);
    InstrumentLeg_42.insert(LegCountryOfIssue_42.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_42("LOCALMKTDATE_1108046261");
    noLegs_0_1.set(LegCouponPaymentDate_42);
    InstrumentLeg_42.insert(LegCouponPaymentDate_42.getString());
    FIX::LegCouponRate LegCouponRate_42;
    LegCouponRate_42.setString("67.580000");
    noLegs_0_1.set(LegCouponRate_42);
    InstrumentLeg_42.insert(LegCouponRate_42.getString());
    FIX::LegCreditRating LegCreditRating_42("STRING_822527043");
    noLegs_0_1.set(LegCreditRating_42);
    InstrumentLeg_42.insert(LegCreditRating_42.getString());
    FIX::LegCurrency LegCurrency_42("EUR");
    noLegs_0_1.set(LegCurrency_42);
    InstrumentLeg_42.insert(LegCurrency_42.getString());
    FIX::LegDatedDate LegDatedDate_42("LOCALMKTDATE_763159037");
    noLegs_0_1.set(LegDatedDate_42);
    InstrumentLeg_42.insert(LegDatedDate_42.getString());
    FIX::LegExerciseStyle LegExerciseStyle_42(1563479307);
    noLegs_0_1.set(LegExerciseStyle_42);
    InstrumentLeg_42.insert(LegExerciseStyle_42.getString());
    FIX::LegFactor LegFactor_42;
    LegFactor_42.setString("12228048");
    noLegs_0_1.set(LegFactor_42);
    InstrumentLeg_42.insert(LegFactor_42.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_42(1950032870);
    noLegs_0_1.set(LegFlowScheduleType_42);
    InstrumentLeg_42.insert(LegFlowScheduleType_42.getString());
    FIX::LegInstrRegistry LegInstrRegistry_42("STRING_1616628104");
    noLegs_0_1.set(LegInstrRegistry_42);
    InstrumentLeg_42.insert(LegInstrRegistry_42.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_42("LOCALMKTDATE_1155226470");
    noLegs_0_1.set(LegInterestAccrualDate_42);
    InstrumentLeg_42.insert(LegInterestAccrualDate_42.getString());
    FIX::LegIssueDate LegIssueDate_42("LOCALMKTDATE_534540534");
    noLegs_0_1.set(LegIssueDate_42);
    InstrumentLeg_42.insert(LegIssueDate_42.getString());
    FIX::LegIssuer LegIssuer_42("STRING_752456129");
    noLegs_0_1.set(LegIssuer_42);
    InstrumentLeg_42.insert(LegIssuer_42.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_42("STRING_991198913");
    noLegs_0_1.set(LegLocaleOfIssue_42);
    InstrumentLeg_42.insert(LegLocaleOfIssue_42.getString());
    FIX::LegMaturityDate LegMaturityDate_42("LOCALMKTDATE_1100717361");
    noLegs_0_1.set(LegMaturityDate_42);
    InstrumentLeg_42.insert(LegMaturityDate_42.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_42("MONTHYEAR_35873341");
    noLegs_0_1.set(LegMaturityMonthYear_42);
    InstrumentLeg_42.insert(LegMaturityMonthYear_42.getString());
    FIX::LegMaturityTime LegMaturityTime_42("TZTIMEONLY_2103090181");
    noLegs_0_1.set(LegMaturityTime_42);
    InstrumentLeg_42.insert(LegMaturityTime_42.getString());
    FIX::LegOptAttribute LegOptAttribute_42('1');
    noLegs_0_1.set(LegOptAttribute_42);
    InstrumentLeg_42.insert(LegOptAttribute_42.getString());
    FIX::LegOptionRatio LegOptionRatio_42;
    LegOptionRatio_42.setString("18055351");
    noLegs_0_1.set(LegOptionRatio_42);
    InstrumentLeg_42.insert(LegOptionRatio_42.getString());
    FIX::LegPool LegPool_42("STRING_1455903326");
    noLegs_0_1.set(LegPool_42);
    InstrumentLeg_42.insert(LegPool_42.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_42("STRING_495106823");
    noLegs_0_1.set(LegPriceUnitOfMeasure_42);
    InstrumentLeg_42.insert(LegPriceUnitOfMeasure_42.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_42;
    LegPriceUnitOfMeasureQty_42.setString("7132685");
    noLegs_0_1.set(LegPriceUnitOfMeasureQty_42);
    InstrumentLeg_42.insert(LegPriceUnitOfMeasureQty_42.getString());
    FIX::LegProduct LegProduct_42(2124478105);
    noLegs_0_1.set(LegProduct_42);
    InstrumentLeg_42.insert(LegProduct_42.getString());
    FIX::LegPutOrCall LegPutOrCall_42(1432433757);
    noLegs_0_1.set(LegPutOrCall_42);
    InstrumentLeg_42.insert(LegPutOrCall_42.getString());
    FIX::LegRatioQty LegRatioQty_42;
    LegRatioQty_42.setString("21243823");
    noLegs_0_1.set(LegRatioQty_42);
    InstrumentLeg_42.insert(LegRatioQty_42.getString());
    FIX::LegRedemptionDate LegRedemptionDate_42("LOCALMKTDATE_1083086856");
    noLegs_0_1.set(LegRedemptionDate_42);
    InstrumentLeg_42.insert(LegRedemptionDate_42.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_42("STRING_2005996635");
    noLegs_0_1.set(LegRepoCollateralSecurityType_42);
    InstrumentLeg_42.insert(LegRepoCollateralSecurityType_42.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_42;
    LegRepurchaseRate_42.setString("31.420000");
    noLegs_0_1.set(LegRepurchaseRate_42);
    InstrumentLeg_42.insert(LegRepurchaseRate_42.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_42(1011739244);
    noLegs_0_1.set(LegRepurchaseTerm_42);
    InstrumentLeg_42.insert(LegRepurchaseTerm_42.getString());
    FIX::LegSecurityDesc LegSecurityDesc_42("STRING_1431181549");
    noLegs_0_1.set(LegSecurityDesc_42);
    InstrumentLeg_42.insert(LegSecurityDesc_42.getString());
    FIX::LegSecurityExchange LegSecurityExchange_42("EXCHANGE_218001591");
    noLegs_0_1.set(LegSecurityExchange_42);
    InstrumentLeg_42.insert(LegSecurityExchange_42.getString());
    FIX::LegSecurityID LegSecurityID_42("STRING_2119785505");
    noLegs_0_1.set(LegSecurityID_42);
    InstrumentLeg_42.insert(LegSecurityID_42.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_42("STRING_1745508308");
    noLegs_0_1.set(LegSecurityIDSource_42);
    InstrumentLeg_42.insert(LegSecurityIDSource_42.getString());
    FIX::LegSecuritySubType LegSecuritySubType_42("STRING_1040528635");
    noLegs_0_1.set(LegSecuritySubType_42);
    InstrumentLeg_42.insert(LegSecuritySubType_42.getString());
    FIX::LegSecurityType LegSecurityType_42("STRING_182322447");
    noLegs_0_1.set(LegSecurityType_42);
    InstrumentLeg_42.insert(LegSecurityType_42.getString());
    FIX::LegSide LegSide_42('3');
    noLegs_0_1.set(LegSide_42);
    InstrumentLeg_42.insert(LegSide_42.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_42("STRING_1803687672");
    noLegs_0_1.set(LegStateOrProvinceOfIssue_42);
    InstrumentLeg_42.insert(LegStateOrProvinceOfIssue_42.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_42("JPY");
    noLegs_0_1.set(LegStrikeCurrency_42);
    InstrumentLeg_42.insert(LegStrikeCurrency_42.getString());
    FIX::LegStrikePrice LegStrikePrice_42;
    LegStrikePrice_42.setString("16062368");
    noLegs_0_1.set(LegStrikePrice_42);
    InstrumentLeg_42.insert(LegStrikePrice_42.getString());
    FIX::LegSymbol LegSymbol_42("STRING_1214946210");
    noLegs_0_1.set(LegSymbol_42);
    InstrumentLeg_42.insert(LegSymbol_42.getString());
    FIX::LegSymbolSfx LegSymbolSfx_42("STRING_549863462");
    noLegs_0_1.set(LegSymbolSfx_42);
    InstrumentLeg_42.insert(LegSymbolSfx_42.getString());
    FIX::LegTimeUnit LegTimeUnit_42("STRING_2140777428");
    noLegs_0_1.set(LegTimeUnit_42);
    InstrumentLeg_42.insert(LegTimeUnit_42.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_42("STRING_1967402339");
    noLegs_0_1.set(LegUnitOfMeasure_42);
    InstrumentLeg_42.insert(LegUnitOfMeasure_42.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_42;
    LegUnitOfMeasureQty_42.setString("15410623");
    noLegs_0_1.set(LegUnitOfMeasureQty_42);
    InstrumentLeg_42.insert(LegUnitOfMeasureQty_42.getString());
    all_values.push_back(InstrumentLeg_42);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::ExecutionReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_74;
      FIX::LegSecurityAltID LegSecurityAltID_74("STRING_2003275681");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltID_74);
      LegSecAltIDGrp_NoLegSecurityAltID_74.insert(LegSecurityAltID_74.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_74("STRING_1496668909");
      noLegSecurityAltID_1_1_0.set(LegSecurityAltIDSource_74);
      LegSecAltIDGrp_NoLegSecurityAltID_74.insert(LegSecurityAltIDSource_74.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_74);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_75;
      FIX::LegSecurityAltID LegSecurityAltID_75("STRING_281838272");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltID_75);
      LegSecAltIDGrp_NoLegSecurityAltID_75.insert(LegSecurityAltID_75.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_75("STRING_1661327226");
      noLegSecurityAltID_1_1_1.set(LegSecurityAltIDSource_75);
      LegSecAltIDGrp_NoLegSecurityAltID_75.insert(LegSecurityAltIDSource_75.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_75);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::ExecutionReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_76;
      FIX::LegSecurityAltID LegSecurityAltID_76("STRING_805088587");
      noLegSecurityAltID_1_1_2.set(LegSecurityAltID_76);
      LegSecAltIDGrp_NoLegSecurityAltID_76.insert(LegSecurityAltID_76.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_76("STRING_776945095");
      noLegSecurityAltID_1_1_2.set(LegSecurityAltIDSource_76);
      LegSecAltIDGrp_NoLegSecurityAltID_76.insert(LegSecurityAltIDSource_76.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_76);

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_2);
    }
    // LegPreAllocGrp
    // Group LegPreAllocGrp.NoLegAllocs
    {
      FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs noLegAllocs_1_1_0;
      // LegPreAllocGrp.NoLegAllocs
      multiset<string> LegPreAllocGrp_NoLegAllocs_3;
      FIX::LegAllocAccount LegAllocAccount_3("STRING_782083044");
      noLegAllocs_1_1_0.set(LegAllocAccount_3);
      LegPreAllocGrp_NoLegAllocs_3.insert(LegAllocAccount_3.getString());
      FIX::LegAllocAcctIDSource LegAllocAcctIDSource_3("STRING_61895205");
      noLegAllocs_1_1_0.set(LegAllocAcctIDSource_3);
      LegPreAllocGrp_NoLegAllocs_3.insert(LegAllocAcctIDSource_3.getString());
      FIX::LegAllocQty LegAllocQty_3;
      LegAllocQty_3.setString("2040108");
      noLegAllocs_1_1_0.set(LegAllocQty_3);
      LegPreAllocGrp_NoLegAllocs_3.insert(LegAllocQty_3.getString());
      FIX::LegAllocSettlCurrency LegAllocSettlCurrency_3("USD");
      noLegAllocs_1_1_0.set(LegAllocSettlCurrency_3);
      LegPreAllocGrp_NoLegAllocs_3.insert(LegAllocSettlCurrency_3.getString());
      FIX::LegIndividualAllocID LegIndividualAllocID_3("STRING_1363134018");
      noLegAllocs_1_1_0.set(LegIndividualAllocID_3);
      LegPreAllocGrp_NoLegAllocs_3.insert(LegIndividualAllocID_3.getString());
      all_values.push_back(LegPreAllocGrp_NoLegAllocs_3);

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_1_0_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_26;
        FIX::Nested2PartyID Nested2PartyID_26("STRING_1351589741");
        noNested2PartyIDs_1_0_2_0.set(Nested2PartyID_26);
        NestedParties2_NoNested2PartyIDs_26.insert(Nested2PartyID_26.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_26('1');
        noNested2PartyIDs_1_0_2_0.set(Nested2PartyIDSource_26);
        NestedParties2_NoNested2PartyIDs_26.insert(Nested2PartyIDSource_26.getString());
        FIX::Nested2PartyRole Nested2PartyRole_26(701727354);
        noNested2PartyIDs_1_0_2_0.set(Nested2PartyRole_26);
        NestedParties2_NoNested2PartyIDs_26.insert(Nested2PartyRole_26.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_26);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_53;
          FIX::Nested2PartySubID Nested2PartySubID_53("STRING_474180597");
          noNested2PartySubIDs_1_0_0_3_0.set(Nested2PartySubID_53);
          NstdPtys2SubGrp_NoNested2PartySubIDs_53.insert(Nested2PartySubID_53.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_53(884049801);
          noNested2PartySubIDs_1_0_0_3_0.set(Nested2PartySubIDType_53);
          NstdPtys2SubGrp_NoNested2PartySubIDs_53.insert(Nested2PartySubIDType_53.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_53);

          noNested2PartyIDs_1_0_2_0.addGroup(noNested2PartySubIDs_1_0_0_3_0);
        }
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_0_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_54;
          FIX::Nested2PartySubID Nested2PartySubID_54("STRING_1268930202");
          noNested2PartySubIDs_1_0_0_3_1.set(Nested2PartySubID_54);
          NstdPtys2SubGrp_NoNested2PartySubIDs_54.insert(Nested2PartySubID_54.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_54(130384621);
          noNested2PartySubIDs_1_0_0_3_1.set(Nested2PartySubIDType_54);
          NstdPtys2SubGrp_NoNested2PartySubIDs_54.insert(Nested2PartySubIDType_54.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_54);

          noNested2PartyIDs_1_0_2_0.addGroup(noNested2PartySubIDs_1_0_0_3_1);
        }
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_0_3_2;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_55;
          FIX::Nested2PartySubID Nested2PartySubID_55("STRING_482367907");
          noNested2PartySubIDs_1_0_0_3_2.set(Nested2PartySubID_55);
          NstdPtys2SubGrp_NoNested2PartySubIDs_55.insert(Nested2PartySubID_55.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_55(663567194);
          noNested2PartySubIDs_1_0_0_3_2.set(Nested2PartySubIDType_55);
          NstdPtys2SubGrp_NoNested2PartySubIDs_55.insert(Nested2PartySubIDType_55.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_55);

          noNested2PartyIDs_1_0_2_0.addGroup(noNested2PartySubIDs_1_0_0_3_2);
        }
        noLegAllocs_1_1_0.addGroup(noNested2PartyIDs_1_0_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_1_0_2_1;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_27;
        FIX::Nested2PartyID Nested2PartyID_27("STRING_1736621516");
        noNested2PartyIDs_1_0_2_1.set(Nested2PartyID_27);
        NestedParties2_NoNested2PartyIDs_27.insert(Nested2PartyID_27.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_27('1');
        noNested2PartyIDs_1_0_2_1.set(Nested2PartyIDSource_27);
        NestedParties2_NoNested2PartyIDs_27.insert(Nested2PartyIDSource_27.getString());
        FIX::Nested2PartyRole Nested2PartyRole_27(1213430657);
        noNested2PartyIDs_1_0_2_1.set(Nested2PartyRole_27);
        NestedParties2_NoNested2PartyIDs_27.insert(Nested2PartyRole_27.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_27);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_1_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_56;
          FIX::Nested2PartySubID Nested2PartySubID_56("STRING_1517232809");
          noNested2PartySubIDs_1_0_1_3_0.set(Nested2PartySubID_56);
          NstdPtys2SubGrp_NoNested2PartySubIDs_56.insert(Nested2PartySubID_56.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_56(607009384);
          noNested2PartySubIDs_1_0_1_3_0.set(Nested2PartySubIDType_56);
          NstdPtys2SubGrp_NoNested2PartySubIDs_56.insert(Nested2PartySubIDType_56.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_56);

          noNested2PartyIDs_1_0_2_1.addGroup(noNested2PartySubIDs_1_0_1_3_0);
        }
        noLegAllocs_1_1_0.addGroup(noNested2PartyIDs_1_0_2_1);
      }
      noLegs_0_1.addGroup(noLegAllocs_1_1_0);
    }
    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::ExecutionReport::NoLegs::NoLegStipulations noLegStipulations_1_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_1;
      FIX::LegStipulationType LegStipulationType_1("STRING_1373024842");
      noLegStipulations_1_1_0.set(LegStipulationType_1);
      LegStipulations_NoLegStipulations_1.insert(LegStipulationType_1.getString());
      FIX::LegStipulationValue LegStipulationValue_1("STRING_2103678293");
      noLegStipulations_1_1_0.set(LegStipulationValue_1);
      LegStipulations_NoLegStipulations_1.insert(LegStipulationValue_1.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_1);

      noLegs_0_1.addGroup(noLegStipulations_1_1_0);
    }
    // NestedParties3
    // Group NestedParties3.NoNested3PartyIDs
    {
      FIX50SP2::ExecutionReport::NoLegs::NoNested3PartyIDs noNested3PartyIDs_1_1_0;
      // NestedParties3.NoNested3PartyIDs
      multiset<string> NestedParties3_NoNested3PartyIDs_1;
      FIX::Nested3PartyID Nested3PartyID_1("STRING_886868420");
      noNested3PartyIDs_1_1_0.set(Nested3PartyID_1);
      NestedParties3_NoNested3PartyIDs_1.insert(Nested3PartyID_1.getString());
      FIX::Nested3PartyIDSource Nested3PartyIDSource_1('7');
      noNested3PartyIDs_1_1_0.set(Nested3PartyIDSource_1);
      NestedParties3_NoNested3PartyIDs_1.insert(Nested3PartyIDSource_1.getString());
      FIX::Nested3PartyRole Nested3PartyRole_1(1735226158);
      noNested3PartyIDs_1_1_0.set(Nested3PartyRole_1);
      NestedParties3_NoNested3PartyIDs_1.insert(Nested3PartyRole_1.getString());
      all_values.push_back(NestedParties3_NoNested3PartyIDs_1);

      // NstdPtys3SubGrp
      // Group NstdPtys3SubGrp.NoNested3PartySubIDs
      {
        FIX50SP2::ExecutionReport::NoLegs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_1_0_2_0;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_2;
        FIX::Nested3PartySubID Nested3PartySubID_2("STRING_1543366277");
        noNested3PartySubIDs_1_0_2_0.set(Nested3PartySubID_2);
        NstdPtys3SubGrp_NoNested3PartySubIDs_2.insert(Nested3PartySubID_2.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_2(1797121363);
        noNested3PartySubIDs_1_0_2_0.set(Nested3PartySubIDType_2);
        NstdPtys3SubGrp_NoNested3PartySubIDs_2.insert(Nested3PartySubIDType_2.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_2);

        noNested3PartyIDs_1_1_0.addGroup(noNested3PartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoLegs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_1_0_2_1;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_3;
        FIX::Nested3PartySubID Nested3PartySubID_3("STRING_1317991456");
        noNested3PartySubIDs_1_0_2_1.set(Nested3PartySubID_3);
        NstdPtys3SubGrp_NoNested3PartySubIDs_3.insert(Nested3PartySubID_3.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_3(1261052529);
        noNested3PartySubIDs_1_0_2_1.set(Nested3PartySubIDType_3);
        NstdPtys3SubGrp_NoNested3PartySubIDs_3.insert(Nested3PartySubIDType_3.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_3);

        noNested3PartyIDs_1_1_0.addGroup(noNested3PartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::ExecutionReport::NoLegs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_1_0_2_2;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_4;
        FIX::Nested3PartySubID Nested3PartySubID_4("STRING_1717529555");
        noNested3PartySubIDs_1_0_2_2.set(Nested3PartySubID_4);
        NstdPtys3SubGrp_NoNested3PartySubIDs_4.insert(Nested3PartySubID_4.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_4(533641826);
        noNested3PartySubIDs_1_0_2_2.set(Nested3PartySubIDType_4);
        NstdPtys3SubGrp_NoNested3PartySubIDs_4.insert(Nested3PartySubIDType_4.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_4);

        noNested3PartyIDs_1_1_0.addGroup(noNested3PartySubIDs_1_0_2_2);
      }
      noLegs_0_1.addGroup(noNested3PartyIDs_1_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoLegs::NoNested3PartyIDs noNested3PartyIDs_1_1_1;
      // NestedParties3.NoNested3PartyIDs
      multiset<string> NestedParties3_NoNested3PartyIDs_2;
      FIX::Nested3PartyID Nested3PartyID_2("STRING_1990478026");
      noNested3PartyIDs_1_1_1.set(Nested3PartyID_2);
      NestedParties3_NoNested3PartyIDs_2.insert(Nested3PartyID_2.getString());
      FIX::Nested3PartyIDSource Nested3PartyIDSource_2('9');
      noNested3PartyIDs_1_1_1.set(Nested3PartyIDSource_2);
      NestedParties3_NoNested3PartyIDs_2.insert(Nested3PartyIDSource_2.getString());
      FIX::Nested3PartyRole Nested3PartyRole_2(2114777436);
      noNested3PartyIDs_1_1_1.set(Nested3PartyRole_2);
      NestedParties3_NoNested3PartyIDs_2.insert(Nested3PartyRole_2.getString());
      all_values.push_back(NestedParties3_NoNested3PartyIDs_2);

      // NstdPtys3SubGrp
      // Group NstdPtys3SubGrp.NoNested3PartySubIDs
      {
        FIX50SP2::ExecutionReport::NoLegs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_1_1_2_0;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_5;
        FIX::Nested3PartySubID Nested3PartySubID_5("STRING_1871250050");
        noNested3PartySubIDs_1_1_2_0.set(Nested3PartySubID_5);
        NstdPtys3SubGrp_NoNested3PartySubIDs_5.insert(Nested3PartySubID_5.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_5(441474385);
        noNested3PartySubIDs_1_1_2_0.set(Nested3PartySubIDType_5);
        NstdPtys3SubGrp_NoNested3PartySubIDs_5.insert(Nested3PartySubIDType_5.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_5);

        noNested3PartyIDs_1_1_1.addGroup(noNested3PartySubIDs_1_1_2_0);
      }
      noLegs_0_1.addGroup(noNested3PartyIDs_1_1_1);
    }
    {
      FIX50SP2::ExecutionReport::NoLegs::NoNested3PartyIDs noNested3PartyIDs_1_1_2;
      // NestedParties3.NoNested3PartyIDs
      multiset<string> NestedParties3_NoNested3PartyIDs_3;
      FIX::Nested3PartyID Nested3PartyID_3("STRING_1428771534");
      noNested3PartyIDs_1_1_2.set(Nested3PartyID_3);
      NestedParties3_NoNested3PartyIDs_3.insert(Nested3PartyID_3.getString());
      FIX::Nested3PartyIDSource Nested3PartyIDSource_3('9');
      noNested3PartyIDs_1_1_2.set(Nested3PartyIDSource_3);
      NestedParties3_NoNested3PartyIDs_3.insert(Nested3PartyIDSource_3.getString());
      FIX::Nested3PartyRole Nested3PartyRole_3(571859007);
      noNested3PartyIDs_1_1_2.set(Nested3PartyRole_3);
      NestedParties3_NoNested3PartyIDs_3.insert(Nested3PartyRole_3.getString());
      all_values.push_back(NestedParties3_NoNested3PartyIDs_3);

      // NstdPtys3SubGrp
      // Group NstdPtys3SubGrp.NoNested3PartySubIDs
      {
        FIX50SP2::ExecutionReport::NoLegs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_1_2_2_0;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_6;
        FIX::Nested3PartySubID Nested3PartySubID_6("STRING_1656263799");
        noNested3PartySubIDs_1_2_2_0.set(Nested3PartySubID_6);
        NstdPtys3SubGrp_NoNested3PartySubIDs_6.insert(Nested3PartySubID_6.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_6(160996875);
        noNested3PartySubIDs_1_2_2_0.set(Nested3PartySubIDType_6);
        NstdPtys3SubGrp_NoNested3PartySubIDs_6.insert(Nested3PartySubIDType_6.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_6);

        noNested3PartyIDs_1_1_2.addGroup(noNested3PartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoLegs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_1_2_2_1;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_7;
        FIX::Nested3PartySubID Nested3PartySubID_7("STRING_1460969911");
        noNested3PartySubIDs_1_2_2_1.set(Nested3PartySubID_7);
        NstdPtys3SubGrp_NoNested3PartySubIDs_7.insert(Nested3PartySubID_7.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_7(722210808);
        noNested3PartySubIDs_1_2_2_1.set(Nested3PartySubIDType_7);
        NstdPtys3SubGrp_NoNested3PartySubIDs_7.insert(Nested3PartySubIDType_7.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_7);

        noNested3PartyIDs_1_1_2.addGroup(noNested3PartySubIDs_1_2_2_1);
      }
      {
        FIX50SP2::ExecutionReport::NoLegs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_1_2_2_2;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_8;
        FIX::Nested3PartySubID Nested3PartySubID_8("STRING_1890912171");
        noNested3PartySubIDs_1_2_2_2.set(Nested3PartySubID_8);
        NstdPtys3SubGrp_NoNested3PartySubIDs_8.insert(Nested3PartySubID_8.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_8(830719072);
        noNested3PartySubIDs_1_2_2_2.set(Nested3PartySubIDType_8);
        NstdPtys3SubGrp_NoNested3PartySubIDs_8.insert(Nested3PartySubIDType_8.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_8);

        noNested3PartyIDs_1_1_2.addGroup(noNested3PartySubIDs_1_2_2_2);
      }
      noLegs_0_1.addGroup(noNested3PartyIDs_1_1_2);
    }
    msg.addGroup(noLegs_0_1);
  }
  {
    FIX50SP2::ExecutionReport::NoLegs noLegs_0_2;
    // InstrmtLegExecGrp.NoLegs
    multiset<string> InstrmtLegExecGrp_NoLegs_2;
    FIX::LegAllocID LegAllocID_2("STRING_1329220192");
    noLegs_0_2.set(LegAllocID_2);
    InstrmtLegExecGrp_NoLegs_2.insert(LegAllocID_2.getString());
    FIX::LegCalculatedCcyLastQty LegCalculatedCcyLastQty_2;
    LegCalculatedCcyLastQty_2.setString("4198713");
    noLegs_0_2.set(LegCalculatedCcyLastQty_2);
    InstrmtLegExecGrp_NoLegs_2.insert(LegCalculatedCcyLastQty_2.getString());
    FIX::LegCoveredOrUncovered LegCoveredOrUncovered_2(56260266);
    noLegs_0_2.set(LegCoveredOrUncovered_2);
    InstrmtLegExecGrp_NoLegs_2.insert(LegCoveredOrUncovered_2.getString());
    FIX::LegCurrencyRatio LegCurrencyRatio_2;
    LegCurrencyRatio_2.setString("12854148");
    noLegs_0_2.set(LegCurrencyRatio_2);
    InstrmtLegExecGrp_NoLegs_2.insert(LegCurrencyRatio_2.getString());
    FIX::LegDividendYield LegDividendYield_2;
    LegDividendYield_2.setString("23.760000");
    noLegs_0_2.set(LegDividendYield_2);
    InstrmtLegExecGrp_NoLegs_2.insert(LegDividendYield_2.getString());
    FIX::LegExecInst LegExecInst_2("MULTIPLECHARVALUE_943128686");
    noLegs_0_2.set(LegExecInst_2);
    InstrmtLegExecGrp_NoLegs_2.insert(LegExecInst_2.getString());
    FIX::LegGrossTradeAmt LegGrossTradeAmt_2;
    LegGrossTradeAmt_2.setString("20466980");
    noLegs_0_2.set(LegGrossTradeAmt_2);
    InstrmtLegExecGrp_NoLegs_2.insert(LegGrossTradeAmt_2.getString());
    FIX::LegLastForwardPoints LegLastForwardPoints_2;
    LegLastForwardPoints_2.setString("9658948");
    noLegs_0_2.set(LegLastForwardPoints_2);
    InstrmtLegExecGrp_NoLegs_2.insert(LegLastForwardPoints_2.getString());
    FIX::LegLastPx LegLastPx_2;
    LegLastPx_2.setString("20571092");
    noLegs_0_2.set(LegLastPx_2);
    InstrmtLegExecGrp_NoLegs_2.insert(LegLastPx_2.getString());
    FIX::LegLastQty LegLastQty_2;
    LegLastQty_2.setString("14425806");
    noLegs_0_2.set(LegLastQty_2);
    InstrmtLegExecGrp_NoLegs_2.insert(LegLastQty_2.getString());
    FIX::LegOrderQty LegOrderQty_2;
    LegOrderQty_2.setString("6155326");
    noLegs_0_2.set(LegOrderQty_2);
    InstrmtLegExecGrp_NoLegs_2.insert(LegOrderQty_2.getString());
    FIX::LegPositionEffect LegPositionEffect_2('1');
    noLegs_0_2.set(LegPositionEffect_2);
    InstrmtLegExecGrp_NoLegs_2.insert(LegPositionEffect_2.getString());
    FIX::LegQty LegQty_2;
    LegQty_2.setString("5561495");
    noLegs_0_2.set(LegQty_2);
    InstrmtLegExecGrp_NoLegs_2.insert(LegQty_2.getString());
    FIX::LegRefID LegRefID_2("STRING_185578508");
    noLegs_0_2.set(LegRefID_2);
    InstrmtLegExecGrp_NoLegs_2.insert(LegRefID_2.getString());
    FIX::LegSettlCurrency LegSettlCurrency_2("EUR");
    noLegs_0_2.set(LegSettlCurrency_2);
    InstrmtLegExecGrp_NoLegs_2.insert(LegSettlCurrency_2.getString());
    FIX::LegSettlDate LegSettlDate_2("LOCALMKTDATE_1107214157");
    noLegs_0_2.set(LegSettlDate_2);
    InstrmtLegExecGrp_NoLegs_2.insert(LegSettlDate_2.getString());
    FIX::LegSettlType LegSettlType_2('1');
    noLegs_0_2.set(LegSettlType_2);
    InstrmtLegExecGrp_NoLegs_2.insert(LegSettlType_2.getString());
    FIX::LegSwapType LegSwapType_2(1);
    noLegs_0_2.set(LegSwapType_2);
    InstrmtLegExecGrp_NoLegs_2.insert(LegSwapType_2.getString());
    FIX::LegVolatility LegVolatility_2;
    LegVolatility_2.setString("8309805");
    noLegs_0_2.set(LegVolatility_2);
    InstrmtLegExecGrp_NoLegs_2.insert(LegVolatility_2.getString());
    all_values.push_back(InstrmtLegExecGrp_NoLegs_2);

    // InstrumentLeg
    multiset<string> InstrumentLeg_43;
    FIX::EncodedLegIssuer EncodedLegIssuer_43("DATA_22543426");
    noLegs_0_2.set(EncodedLegIssuer_43);
    InstrumentLeg_43.insert(EncodedLegIssuer_43.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_43(225153579);
    noLegs_0_2.set(EncodedLegIssuerLen_43);
    InstrumentLeg_43.insert(EncodedLegIssuerLen_43.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_43("DATA_1823677163");
    noLegs_0_2.set(EncodedLegSecurityDesc_43);
    InstrumentLeg_43.insert(EncodedLegSecurityDesc_43.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_43(594402433);
    noLegs_0_2.set(EncodedLegSecurityDescLen_43);
    InstrumentLeg_43.insert(EncodedLegSecurityDescLen_43.getString());
    FIX::LegCFICode LegCFICode_43("STRING_2136293021");
    noLegs_0_2.set(LegCFICode_43);
    InstrumentLeg_43.insert(LegCFICode_43.getString());
    FIX::LegContractMultiplier LegContractMultiplier_43;
    LegContractMultiplier_43.setString("13324573");
    noLegs_0_2.set(LegContractMultiplier_43);
    InstrumentLeg_43.insert(LegContractMultiplier_43.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_43(755399308);
    noLegs_0_2.set(LegContractMultiplierUnit_43);
    InstrumentLeg_43.insert(LegContractMultiplierUnit_43.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_43("MONTHYEAR_1449779284");
    noLegs_0_2.set(LegContractSettlMonth_43);
    InstrumentLeg_43.insert(LegContractSettlMonth_43.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_43("COUNTRY_2054668122");
    noLegs_0_2.set(LegCountryOfIssue_43);
    InstrumentLeg_43.insert(LegCountryOfIssue_43.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_43("LOCALMKTDATE_498827832");
    noLegs_0_2.set(LegCouponPaymentDate_43);
    InstrumentLeg_43.insert(LegCouponPaymentDate_43.getString());
    FIX::LegCouponRate LegCouponRate_43;
    LegCouponRate_43.setString("47.090000");
    noLegs_0_2.set(LegCouponRate_43);
    InstrumentLeg_43.insert(LegCouponRate_43.getString());
    FIX::LegCreditRating LegCreditRating_43("STRING_1236404667");
    noLegs_0_2.set(LegCreditRating_43);
    InstrumentLeg_43.insert(LegCreditRating_43.getString());
    FIX::LegCurrency LegCurrency_43("EUR");
    noLegs_0_2.set(LegCurrency_43);
    InstrumentLeg_43.insert(LegCurrency_43.getString());
    FIX::LegDatedDate LegDatedDate_43("LOCALMKTDATE_374335857");
    noLegs_0_2.set(LegDatedDate_43);
    InstrumentLeg_43.insert(LegDatedDate_43.getString());
    FIX::LegExerciseStyle LegExerciseStyle_43(149367874);
    noLegs_0_2.set(LegExerciseStyle_43);
    InstrumentLeg_43.insert(LegExerciseStyle_43.getString());
    FIX::LegFactor LegFactor_43;
    LegFactor_43.setString("11324036");
    noLegs_0_2.set(LegFactor_43);
    InstrumentLeg_43.insert(LegFactor_43.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_43(273550279);
    noLegs_0_2.set(LegFlowScheduleType_43);
    InstrumentLeg_43.insert(LegFlowScheduleType_43.getString());
    FIX::LegInstrRegistry LegInstrRegistry_43("STRING_1115262761");
    noLegs_0_2.set(LegInstrRegistry_43);
    InstrumentLeg_43.insert(LegInstrRegistry_43.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_43("LOCALMKTDATE_1042029280");
    noLegs_0_2.set(LegInterestAccrualDate_43);
    InstrumentLeg_43.insert(LegInterestAccrualDate_43.getString());
    FIX::LegIssueDate LegIssueDate_43("LOCALMKTDATE_1716130979");
    noLegs_0_2.set(LegIssueDate_43);
    InstrumentLeg_43.insert(LegIssueDate_43.getString());
    FIX::LegIssuer LegIssuer_43("STRING_1730795362");
    noLegs_0_2.set(LegIssuer_43);
    InstrumentLeg_43.insert(LegIssuer_43.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_43("STRING_122162706");
    noLegs_0_2.set(LegLocaleOfIssue_43);
    InstrumentLeg_43.insert(LegLocaleOfIssue_43.getString());
    FIX::LegMaturityDate LegMaturityDate_43("LOCALMKTDATE_124796912");
    noLegs_0_2.set(LegMaturityDate_43);
    InstrumentLeg_43.insert(LegMaturityDate_43.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_43("MONTHYEAR_1916373871");
    noLegs_0_2.set(LegMaturityMonthYear_43);
    InstrumentLeg_43.insert(LegMaturityMonthYear_43.getString());
    FIX::LegMaturityTime LegMaturityTime_43("TZTIMEONLY_1883421606");
    noLegs_0_2.set(LegMaturityTime_43);
    InstrumentLeg_43.insert(LegMaturityTime_43.getString());
    FIX::LegOptAttribute LegOptAttribute_43('5');
    noLegs_0_2.set(LegOptAttribute_43);
    InstrumentLeg_43.insert(LegOptAttribute_43.getString());
    FIX::LegOptionRatio LegOptionRatio_43;
    LegOptionRatio_43.setString("8761043");
    noLegs_0_2.set(LegOptionRatio_43);
    InstrumentLeg_43.insert(LegOptionRatio_43.getString());
    FIX::LegPool LegPool_43("STRING_1464490647");
    noLegs_0_2.set(LegPool_43);
    InstrumentLeg_43.insert(LegPool_43.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_43("STRING_1467806564");
    noLegs_0_2.set(LegPriceUnitOfMeasure_43);
    InstrumentLeg_43.insert(LegPriceUnitOfMeasure_43.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_43;
    LegPriceUnitOfMeasureQty_43.setString("17070849");
    noLegs_0_2.set(LegPriceUnitOfMeasureQty_43);
    InstrumentLeg_43.insert(LegPriceUnitOfMeasureQty_43.getString());
    FIX::LegProduct LegProduct_43(1487034074);
    noLegs_0_2.set(LegProduct_43);
    InstrumentLeg_43.insert(LegProduct_43.getString());
    FIX::LegPutOrCall LegPutOrCall_43(1692960143);
    noLegs_0_2.set(LegPutOrCall_43);
    InstrumentLeg_43.insert(LegPutOrCall_43.getString());
    FIX::LegRatioQty LegRatioQty_43;
    LegRatioQty_43.setString("13832784");
    noLegs_0_2.set(LegRatioQty_43);
    InstrumentLeg_43.insert(LegRatioQty_43.getString());
    FIX::LegRedemptionDate LegRedemptionDate_43("LOCALMKTDATE_2081436507");
    noLegs_0_2.set(LegRedemptionDate_43);
    InstrumentLeg_43.insert(LegRedemptionDate_43.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_43("STRING_1681769516");
    noLegs_0_2.set(LegRepoCollateralSecurityType_43);
    InstrumentLeg_43.insert(LegRepoCollateralSecurityType_43.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_43;
    LegRepurchaseRate_43.setString("21.210000");
    noLegs_0_2.set(LegRepurchaseRate_43);
    InstrumentLeg_43.insert(LegRepurchaseRate_43.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_43(689352168);
    noLegs_0_2.set(LegRepurchaseTerm_43);
    InstrumentLeg_43.insert(LegRepurchaseTerm_43.getString());
    FIX::LegSecurityDesc LegSecurityDesc_43("STRING_984065152");
    noLegs_0_2.set(LegSecurityDesc_43);
    InstrumentLeg_43.insert(LegSecurityDesc_43.getString());
    FIX::LegSecurityExchange LegSecurityExchange_43("EXCHANGE_475436595");
    noLegs_0_2.set(LegSecurityExchange_43);
    InstrumentLeg_43.insert(LegSecurityExchange_43.getString());
    FIX::LegSecurityID LegSecurityID_43("STRING_1188180000");
    noLegs_0_2.set(LegSecurityID_43);
    InstrumentLeg_43.insert(LegSecurityID_43.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_43("STRING_1117079861");
    noLegs_0_2.set(LegSecurityIDSource_43);
    InstrumentLeg_43.insert(LegSecurityIDSource_43.getString());
    FIX::LegSecuritySubType LegSecuritySubType_43("STRING_1711841262");
    noLegs_0_2.set(LegSecuritySubType_43);
    InstrumentLeg_43.insert(LegSecuritySubType_43.getString());
    FIX::LegSecurityType LegSecurityType_43("STRING_2106879146");
    noLegs_0_2.set(LegSecurityType_43);
    InstrumentLeg_43.insert(LegSecurityType_43.getString());
    FIX::LegSide LegSide_43('1');
    noLegs_0_2.set(LegSide_43);
    InstrumentLeg_43.insert(LegSide_43.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_43("STRING_2086177119");
    noLegs_0_2.set(LegStateOrProvinceOfIssue_43);
    InstrumentLeg_43.insert(LegStateOrProvinceOfIssue_43.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_43("CHF");
    noLegs_0_2.set(LegStrikeCurrency_43);
    InstrumentLeg_43.insert(LegStrikeCurrency_43.getString());
    FIX::LegStrikePrice LegStrikePrice_43;
    LegStrikePrice_43.setString("2122437");
    noLegs_0_2.set(LegStrikePrice_43);
    InstrumentLeg_43.insert(LegStrikePrice_43.getString());
    FIX::LegSymbol LegSymbol_43("STRING_1224026133");
    noLegs_0_2.set(LegSymbol_43);
    InstrumentLeg_43.insert(LegSymbol_43.getString());
    FIX::LegSymbolSfx LegSymbolSfx_43("STRING_1333304131");
    noLegs_0_2.set(LegSymbolSfx_43);
    InstrumentLeg_43.insert(LegSymbolSfx_43.getString());
    FIX::LegTimeUnit LegTimeUnit_43("STRING_1928374730");
    noLegs_0_2.set(LegTimeUnit_43);
    InstrumentLeg_43.insert(LegTimeUnit_43.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_43("STRING_807337848");
    noLegs_0_2.set(LegUnitOfMeasure_43);
    InstrumentLeg_43.insert(LegUnitOfMeasure_43.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_43;
    LegUnitOfMeasureQty_43.setString("14554668");
    noLegs_0_2.set(LegUnitOfMeasureQty_43);
    InstrumentLeg_43.insert(LegUnitOfMeasureQty_43.getString());
    all_values.push_back(InstrumentLeg_43);

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::ExecutionReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_77;
      FIX::LegSecurityAltID LegSecurityAltID_77("STRING_576228071");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltID_77);
      LegSecAltIDGrp_NoLegSecurityAltID_77.insert(LegSecurityAltID_77.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_77("STRING_1191404795");
      noLegSecurityAltID_2_1_0.set(LegSecurityAltIDSource_77);
      LegSecAltIDGrp_NoLegSecurityAltID_77.insert(LegSecurityAltIDSource_77.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_77);

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_78;
      FIX::LegSecurityAltID LegSecurityAltID_78("STRING_429628865");
      noLegSecurityAltID_2_1_1.set(LegSecurityAltID_78);
      LegSecAltIDGrp_NoLegSecurityAltID_78.insert(LegSecurityAltID_78.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_78("STRING_1452332451");
      noLegSecurityAltID_2_1_1.set(LegSecurityAltIDSource_78);
      LegSecAltIDGrp_NoLegSecurityAltID_78.insert(LegSecurityAltIDSource_78.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_78);

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_1);
    }
    // LegPreAllocGrp
    // Group LegPreAllocGrp.NoLegAllocs
    {
      FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs noLegAllocs_2_1_0;
      // LegPreAllocGrp.NoLegAllocs
      multiset<string> LegPreAllocGrp_NoLegAllocs_4;
      FIX::LegAllocAccount LegAllocAccount_4("STRING_1897435429");
      noLegAllocs_2_1_0.set(LegAllocAccount_4);
      LegPreAllocGrp_NoLegAllocs_4.insert(LegAllocAccount_4.getString());
      FIX::LegAllocAcctIDSource LegAllocAcctIDSource_4("STRING_1011933742");
      noLegAllocs_2_1_0.set(LegAllocAcctIDSource_4);
      LegPreAllocGrp_NoLegAllocs_4.insert(LegAllocAcctIDSource_4.getString());
      FIX::LegAllocQty LegAllocQty_4;
      LegAllocQty_4.setString("19954458");
      noLegAllocs_2_1_0.set(LegAllocQty_4);
      LegPreAllocGrp_NoLegAllocs_4.insert(LegAllocQty_4.getString());
      FIX::LegAllocSettlCurrency LegAllocSettlCurrency_4("GBP");
      noLegAllocs_2_1_0.set(LegAllocSettlCurrency_4);
      LegPreAllocGrp_NoLegAllocs_4.insert(LegAllocSettlCurrency_4.getString());
      FIX::LegIndividualAllocID LegIndividualAllocID_4("STRING_1929398728");
      noLegAllocs_2_1_0.set(LegIndividualAllocID_4);
      LegPreAllocGrp_NoLegAllocs_4.insert(LegIndividualAllocID_4.getString());
      all_values.push_back(LegPreAllocGrp_NoLegAllocs_4);

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_2_0_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_28;
        FIX::Nested2PartyID Nested2PartyID_28("STRING_815980669");
        noNested2PartyIDs_2_0_2_0.set(Nested2PartyID_28);
        NestedParties2_NoNested2PartyIDs_28.insert(Nested2PartyID_28.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_28('4');
        noNested2PartyIDs_2_0_2_0.set(Nested2PartyIDSource_28);
        NestedParties2_NoNested2PartyIDs_28.insert(Nested2PartyIDSource_28.getString());
        FIX::Nested2PartyRole Nested2PartyRole_28(1961262945);
        noNested2PartyIDs_2_0_2_0.set(Nested2PartyRole_28);
        NestedParties2_NoNested2PartyIDs_28.insert(Nested2PartyRole_28.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_28);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_0_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_57;
          FIX::Nested2PartySubID Nested2PartySubID_57("STRING_1659447248");
          noNested2PartySubIDs_2_0_0_3_0.set(Nested2PartySubID_57);
          NstdPtys2SubGrp_NoNested2PartySubIDs_57.insert(Nested2PartySubID_57.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_57(930859158);
          noNested2PartySubIDs_2_0_0_3_0.set(Nested2PartySubIDType_57);
          NstdPtys2SubGrp_NoNested2PartySubIDs_57.insert(Nested2PartySubIDType_57.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_57);

          noNested2PartyIDs_2_0_2_0.addGroup(noNested2PartySubIDs_2_0_0_3_0);
        }
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_0_0_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_58;
          FIX::Nested2PartySubID Nested2PartySubID_58("STRING_855774879");
          noNested2PartySubIDs_2_0_0_3_1.set(Nested2PartySubID_58);
          NstdPtys2SubGrp_NoNested2PartySubIDs_58.insert(Nested2PartySubID_58.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_58(1618842746);
          noNested2PartySubIDs_2_0_0_3_1.set(Nested2PartySubIDType_58);
          NstdPtys2SubGrp_NoNested2PartySubIDs_58.insert(Nested2PartySubIDType_58.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_58);

          noNested2PartyIDs_2_0_2_0.addGroup(noNested2PartySubIDs_2_0_0_3_1);
        }
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_0_0_3_2;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_59;
          FIX::Nested2PartySubID Nested2PartySubID_59("STRING_89730347");
          noNested2PartySubIDs_2_0_0_3_2.set(Nested2PartySubID_59);
          NstdPtys2SubGrp_NoNested2PartySubIDs_59.insert(Nested2PartySubID_59.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_59(794468351);
          noNested2PartySubIDs_2_0_0_3_2.set(Nested2PartySubIDType_59);
          NstdPtys2SubGrp_NoNested2PartySubIDs_59.insert(Nested2PartySubIDType_59.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_59);

          noNested2PartyIDs_2_0_2_0.addGroup(noNested2PartySubIDs_2_0_0_3_2);
        }
        noLegAllocs_2_1_0.addGroup(noNested2PartyIDs_2_0_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_2_0_2_1;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_29;
        FIX::Nested2PartyID Nested2PartyID_29("STRING_1727606119");
        noNested2PartyIDs_2_0_2_1.set(Nested2PartyID_29);
        NestedParties2_NoNested2PartyIDs_29.insert(Nested2PartyID_29.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_29('3');
        noNested2PartyIDs_2_0_2_1.set(Nested2PartyIDSource_29);
        NestedParties2_NoNested2PartyIDs_29.insert(Nested2PartyIDSource_29.getString());
        FIX::Nested2PartyRole Nested2PartyRole_29(1006712102);
        noNested2PartyIDs_2_0_2_1.set(Nested2PartyRole_29);
        NestedParties2_NoNested2PartyIDs_29.insert(Nested2PartyRole_29.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_29);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_0_1_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_60;
          FIX::Nested2PartySubID Nested2PartySubID_60("STRING_1714309329");
          noNested2PartySubIDs_2_0_1_3_0.set(Nested2PartySubID_60);
          NstdPtys2SubGrp_NoNested2PartySubIDs_60.insert(Nested2PartySubID_60.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_60(787603184);
          noNested2PartySubIDs_2_0_1_3_0.set(Nested2PartySubIDType_60);
          NstdPtys2SubGrp_NoNested2PartySubIDs_60.insert(Nested2PartySubIDType_60.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_60);

          noNested2PartyIDs_2_0_2_1.addGroup(noNested2PartySubIDs_2_0_1_3_0);
        }
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_0_1_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_61;
          FIX::Nested2PartySubID Nested2PartySubID_61("STRING_1611486452");
          noNested2PartySubIDs_2_0_1_3_1.set(Nested2PartySubID_61);
          NstdPtys2SubGrp_NoNested2PartySubIDs_61.insert(Nested2PartySubID_61.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_61(1022292518);
          noNested2PartySubIDs_2_0_1_3_1.set(Nested2PartySubIDType_61);
          NstdPtys2SubGrp_NoNested2PartySubIDs_61.insert(Nested2PartySubIDType_61.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_61);

          noNested2PartyIDs_2_0_2_1.addGroup(noNested2PartySubIDs_2_0_1_3_1);
        }
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_0_1_3_2;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_62;
          FIX::Nested2PartySubID Nested2PartySubID_62("STRING_693291178");
          noNested2PartySubIDs_2_0_1_3_2.set(Nested2PartySubID_62);
          NstdPtys2SubGrp_NoNested2PartySubIDs_62.insert(Nested2PartySubID_62.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_62(40230875);
          noNested2PartySubIDs_2_0_1_3_2.set(Nested2PartySubIDType_62);
          NstdPtys2SubGrp_NoNested2PartySubIDs_62.insert(Nested2PartySubIDType_62.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_62);

          noNested2PartyIDs_2_0_2_1.addGroup(noNested2PartySubIDs_2_0_1_3_2);
        }
        noLegAllocs_2_1_0.addGroup(noNested2PartyIDs_2_0_2_1);
      }
      noLegs_0_2.addGroup(noLegAllocs_2_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs noLegAllocs_2_1_1;
      // LegPreAllocGrp.NoLegAllocs
      multiset<string> LegPreAllocGrp_NoLegAllocs_5;
      FIX::LegAllocAccount LegAllocAccount_5("STRING_66213666");
      noLegAllocs_2_1_1.set(LegAllocAccount_5);
      LegPreAllocGrp_NoLegAllocs_5.insert(LegAllocAccount_5.getString());
      FIX::LegAllocAcctIDSource LegAllocAcctIDSource_5("STRING_1122920043");
      noLegAllocs_2_1_1.set(LegAllocAcctIDSource_5);
      LegPreAllocGrp_NoLegAllocs_5.insert(LegAllocAcctIDSource_5.getString());
      FIX::LegAllocQty LegAllocQty_5;
      LegAllocQty_5.setString("14925633");
      noLegAllocs_2_1_1.set(LegAllocQty_5);
      LegPreAllocGrp_NoLegAllocs_5.insert(LegAllocQty_5.getString());
      FIX::LegAllocSettlCurrency LegAllocSettlCurrency_5("CHF");
      noLegAllocs_2_1_1.set(LegAllocSettlCurrency_5);
      LegPreAllocGrp_NoLegAllocs_5.insert(LegAllocSettlCurrency_5.getString());
      FIX::LegIndividualAllocID LegIndividualAllocID_5("STRING_357013420");
      noLegAllocs_2_1_1.set(LegIndividualAllocID_5);
      LegPreAllocGrp_NoLegAllocs_5.insert(LegIndividualAllocID_5.getString());
      all_values.push_back(LegPreAllocGrp_NoLegAllocs_5);

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_2_1_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_30;
        FIX::Nested2PartyID Nested2PartyID_30("STRING_168300101");
        noNested2PartyIDs_2_1_2_0.set(Nested2PartyID_30);
        NestedParties2_NoNested2PartyIDs_30.insert(Nested2PartyID_30.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_30('6');
        noNested2PartyIDs_2_1_2_0.set(Nested2PartyIDSource_30);
        NestedParties2_NoNested2PartyIDs_30.insert(Nested2PartyIDSource_30.getString());
        FIX::Nested2PartyRole Nested2PartyRole_30(204502762);
        noNested2PartyIDs_2_1_2_0.set(Nested2PartyRole_30);
        NestedParties2_NoNested2PartyIDs_30.insert(Nested2PartyRole_30.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_30);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_1_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_63;
          FIX::Nested2PartySubID Nested2PartySubID_63("STRING_1420722638");
          noNested2PartySubIDs_2_1_0_3_0.set(Nested2PartySubID_63);
          NstdPtys2SubGrp_NoNested2PartySubIDs_63.insert(Nested2PartySubID_63.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_63(675770011);
          noNested2PartySubIDs_2_1_0_3_0.set(Nested2PartySubIDType_63);
          NstdPtys2SubGrp_NoNested2PartySubIDs_63.insert(Nested2PartySubIDType_63.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_63);

          noNested2PartyIDs_2_1_2_0.addGroup(noNested2PartySubIDs_2_1_0_3_0);
        }
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_1_0_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_64;
          FIX::Nested2PartySubID Nested2PartySubID_64("STRING_959277191");
          noNested2PartySubIDs_2_1_0_3_1.set(Nested2PartySubID_64);
          NstdPtys2SubGrp_NoNested2PartySubIDs_64.insert(Nested2PartySubID_64.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_64(564656255);
          noNested2PartySubIDs_2_1_0_3_1.set(Nested2PartySubIDType_64);
          NstdPtys2SubGrp_NoNested2PartySubIDs_64.insert(Nested2PartySubIDType_64.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_64);

          noNested2PartyIDs_2_1_2_0.addGroup(noNested2PartySubIDs_2_1_0_3_1);
        }
        noLegAllocs_2_1_1.addGroup(noNested2PartyIDs_2_1_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_2_1_2_1;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_31;
        FIX::Nested2PartyID Nested2PartyID_31("STRING_187733611");
        noNested2PartyIDs_2_1_2_1.set(Nested2PartyID_31);
        NestedParties2_NoNested2PartyIDs_31.insert(Nested2PartyID_31.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_31('1');
        noNested2PartyIDs_2_1_2_1.set(Nested2PartyIDSource_31);
        NestedParties2_NoNested2PartyIDs_31.insert(Nested2PartyIDSource_31.getString());
        FIX::Nested2PartyRole Nested2PartyRole_31(1420431135);
        noNested2PartyIDs_2_1_2_1.set(Nested2PartyRole_31);
        NestedParties2_NoNested2PartyIDs_31.insert(Nested2PartyRole_31.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_31);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_1_1_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_65;
          FIX::Nested2PartySubID Nested2PartySubID_65("STRING_1979866697");
          noNested2PartySubIDs_2_1_1_3_0.set(Nested2PartySubID_65);
          NstdPtys2SubGrp_NoNested2PartySubIDs_65.insert(Nested2PartySubID_65.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_65(67415838);
          noNested2PartySubIDs_2_1_1_3_0.set(Nested2PartySubIDType_65);
          NstdPtys2SubGrp_NoNested2PartySubIDs_65.insert(Nested2PartySubIDType_65.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_65);

          noNested2PartyIDs_2_1_2_1.addGroup(noNested2PartySubIDs_2_1_1_3_0);
        }
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_1_1_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_66;
          FIX::Nested2PartySubID Nested2PartySubID_66("STRING_1386698829");
          noNested2PartySubIDs_2_1_1_3_1.set(Nested2PartySubID_66);
          NstdPtys2SubGrp_NoNested2PartySubIDs_66.insert(Nested2PartySubID_66.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_66(213388247);
          noNested2PartySubIDs_2_1_1_3_1.set(Nested2PartySubIDType_66);
          NstdPtys2SubGrp_NoNested2PartySubIDs_66.insert(Nested2PartySubIDType_66.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_66);

          noNested2PartyIDs_2_1_2_1.addGroup(noNested2PartySubIDs_2_1_1_3_1);
        }
        noLegAllocs_2_1_1.addGroup(noNested2PartyIDs_2_1_2_1);
      }
      {
        FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_2_1_2_2;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_32;
        FIX::Nested2PartyID Nested2PartyID_32("STRING_1074127940");
        noNested2PartyIDs_2_1_2_2.set(Nested2PartyID_32);
        NestedParties2_NoNested2PartyIDs_32.insert(Nested2PartyID_32.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_32('4');
        noNested2PartyIDs_2_1_2_2.set(Nested2PartyIDSource_32);
        NestedParties2_NoNested2PartyIDs_32.insert(Nested2PartyIDSource_32.getString());
        FIX::Nested2PartyRole Nested2PartyRole_32(1927697577);
        noNested2PartyIDs_2_1_2_2.set(Nested2PartyRole_32);
        NestedParties2_NoNested2PartyIDs_32.insert(Nested2PartyRole_32.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_32);

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_1_2_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_67;
          FIX::Nested2PartySubID Nested2PartySubID_67("STRING_1654850238");
          noNested2PartySubIDs_2_1_2_3_0.set(Nested2PartySubID_67);
          NstdPtys2SubGrp_NoNested2PartySubIDs_67.insert(Nested2PartySubID_67.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_67(802506447);
          noNested2PartySubIDs_2_1_2_3_0.set(Nested2PartySubIDType_67);
          NstdPtys2SubGrp_NoNested2PartySubIDs_67.insert(Nested2PartySubIDType_67.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_67);

          noNested2PartyIDs_2_1_2_2.addGroup(noNested2PartySubIDs_2_1_2_3_0);
        }
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_1_2_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_68;
          FIX::Nested2PartySubID Nested2PartySubID_68("STRING_407538654");
          noNested2PartySubIDs_2_1_2_3_1.set(Nested2PartySubID_68);
          NstdPtys2SubGrp_NoNested2PartySubIDs_68.insert(Nested2PartySubID_68.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_68(1695081113);
          noNested2PartySubIDs_2_1_2_3_1.set(Nested2PartySubIDType_68);
          NstdPtys2SubGrp_NoNested2PartySubIDs_68.insert(Nested2PartySubIDType_68.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_68);

          noNested2PartyIDs_2_1_2_2.addGroup(noNested2PartySubIDs_2_1_2_3_1);
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
      multiset<string> LegStipulations_NoLegStipulations_2;
      FIX::LegStipulationType LegStipulationType_2("STRING_1530458697");
      noLegStipulations_2_1_0.set(LegStipulationType_2);
      LegStipulations_NoLegStipulations_2.insert(LegStipulationType_2.getString());
      FIX::LegStipulationValue LegStipulationValue_2("STRING_1040160792");
      noLegStipulations_2_1_0.set(LegStipulationValue_2);
      LegStipulations_NoLegStipulations_2.insert(LegStipulationValue_2.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_2);

      noLegs_0_2.addGroup(noLegStipulations_2_1_0);
    }
    // NestedParties3
    // Group NestedParties3.NoNested3PartyIDs
    {
      FIX50SP2::ExecutionReport::NoLegs::NoNested3PartyIDs noNested3PartyIDs_2_1_0;
      // NestedParties3.NoNested3PartyIDs
      multiset<string> NestedParties3_NoNested3PartyIDs_4;
      FIX::Nested3PartyID Nested3PartyID_4("STRING_255846874");
      noNested3PartyIDs_2_1_0.set(Nested3PartyID_4);
      NestedParties3_NoNested3PartyIDs_4.insert(Nested3PartyID_4.getString());
      FIX::Nested3PartyIDSource Nested3PartyIDSource_4('1');
      noNested3PartyIDs_2_1_0.set(Nested3PartyIDSource_4);
      NestedParties3_NoNested3PartyIDs_4.insert(Nested3PartyIDSource_4.getString());
      FIX::Nested3PartyRole Nested3PartyRole_4(1865933256);
      noNested3PartyIDs_2_1_0.set(Nested3PartyRole_4);
      NestedParties3_NoNested3PartyIDs_4.insert(Nested3PartyRole_4.getString());
      all_values.push_back(NestedParties3_NoNested3PartyIDs_4);

      // NstdPtys3SubGrp
      // Group NstdPtys3SubGrp.NoNested3PartySubIDs
      {
        FIX50SP2::ExecutionReport::NoLegs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_2_0_2_0;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_9;
        FIX::Nested3PartySubID Nested3PartySubID_9("STRING_2001916181");
        noNested3PartySubIDs_2_0_2_0.set(Nested3PartySubID_9);
        NstdPtys3SubGrp_NoNested3PartySubIDs_9.insert(Nested3PartySubID_9.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_9(2070436019);
        noNested3PartySubIDs_2_0_2_0.set(Nested3PartySubIDType_9);
        NstdPtys3SubGrp_NoNested3PartySubIDs_9.insert(Nested3PartySubIDType_9.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_9);

        noNested3PartyIDs_2_1_0.addGroup(noNested3PartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoLegs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_2_0_2_1;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_10;
        FIX::Nested3PartySubID Nested3PartySubID_10("STRING_1569644870");
        noNested3PartySubIDs_2_0_2_1.set(Nested3PartySubID_10);
        NstdPtys3SubGrp_NoNested3PartySubIDs_10.insert(Nested3PartySubID_10.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_10(1275155172);
        noNested3PartySubIDs_2_0_2_1.set(Nested3PartySubIDType_10);
        NstdPtys3SubGrp_NoNested3PartySubIDs_10.insert(Nested3PartySubIDType_10.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_10);

        noNested3PartyIDs_2_1_0.addGroup(noNested3PartySubIDs_2_0_2_1);
      }
      noLegs_0_2.addGroup(noNested3PartyIDs_2_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoLegs::NoNested3PartyIDs noNested3PartyIDs_2_1_1;
      // NestedParties3.NoNested3PartyIDs
      multiset<string> NestedParties3_NoNested3PartyIDs_5;
      FIX::Nested3PartyID Nested3PartyID_5("STRING_598722382");
      noNested3PartyIDs_2_1_1.set(Nested3PartyID_5);
      NestedParties3_NoNested3PartyIDs_5.insert(Nested3PartyID_5.getString());
      FIX::Nested3PartyIDSource Nested3PartyIDSource_5('3');
      noNested3PartyIDs_2_1_1.set(Nested3PartyIDSource_5);
      NestedParties3_NoNested3PartyIDs_5.insert(Nested3PartyIDSource_5.getString());
      FIX::Nested3PartyRole Nested3PartyRole_5(1839811427);
      noNested3PartyIDs_2_1_1.set(Nested3PartyRole_5);
      NestedParties3_NoNested3PartyIDs_5.insert(Nested3PartyRole_5.getString());
      all_values.push_back(NestedParties3_NoNested3PartyIDs_5);

      // NstdPtys3SubGrp
      // Group NstdPtys3SubGrp.NoNested3PartySubIDs
      {
        FIX50SP2::ExecutionReport::NoLegs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_2_1_2_0;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_11;
        FIX::Nested3PartySubID Nested3PartySubID_11("STRING_124091114");
        noNested3PartySubIDs_2_1_2_0.set(Nested3PartySubID_11);
        NstdPtys3SubGrp_NoNested3PartySubIDs_11.insert(Nested3PartySubID_11.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_11(1112758914);
        noNested3PartySubIDs_2_1_2_0.set(Nested3PartySubIDType_11);
        NstdPtys3SubGrp_NoNested3PartySubIDs_11.insert(Nested3PartySubIDType_11.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_11);

        noNested3PartyIDs_2_1_1.addGroup(noNested3PartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoLegs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_2_1_2_1;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_12;
        FIX::Nested3PartySubID Nested3PartySubID_12("STRING_445548703");
        noNested3PartySubIDs_2_1_2_1.set(Nested3PartySubID_12);
        NstdPtys3SubGrp_NoNested3PartySubIDs_12.insert(Nested3PartySubID_12.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_12(2103957811);
        noNested3PartySubIDs_2_1_2_1.set(Nested3PartySubIDType_12);
        NstdPtys3SubGrp_NoNested3PartySubIDs_12.insert(Nested3PartySubIDType_12.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_12);

        noNested3PartyIDs_2_1_1.addGroup(noNested3PartySubIDs_2_1_2_1);
      }
      {
        FIX50SP2::ExecutionReport::NoLegs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_2_1_2_2;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_13;
        FIX::Nested3PartySubID Nested3PartySubID_13("STRING_1180174752");
        noNested3PartySubIDs_2_1_2_2.set(Nested3PartySubID_13);
        NstdPtys3SubGrp_NoNested3PartySubIDs_13.insert(Nested3PartySubID_13.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_13(1832247532);
        noNested3PartySubIDs_2_1_2_2.set(Nested3PartySubIDType_13);
        NstdPtys3SubGrp_NoNested3PartySubIDs_13.insert(Nested3PartySubIDType_13.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_13);

        noNested3PartyIDs_2_1_1.addGroup(noNested3PartySubIDs_2_1_2_2);
      }
      noLegs_0_2.addGroup(noNested3PartyIDs_2_1_1);
    }
    msg.addGroup(noLegs_0_2);
  }
  // Instrument
  multiset<string> Instrument_24;
  FIX::AttachmentPoint AttachmentPoint_24;
  AttachmentPoint_24.setString("24.110000");
  msg.set(AttachmentPoint_24);
  Instrument_24.insert(AttachmentPoint_24.getString());
  FIX::CFICode CFICode_24("STRING_106819044");
  msg.set(CFICode_24);
  Instrument_24.insert(CFICode_24.getString());
  FIX::CPProgram CPProgram_24(99);
  msg.set(CPProgram_24);
  Instrument_24.insert(CPProgram_24.getString());
  FIX::CPRegType CPRegType_24("STRING_2097559988");
  msg.set(CPRegType_24);
  Instrument_24.insert(CPRegType_24.getString());
  FIX::CapPrice CapPrice_24;
  CapPrice_24.setString("19685501");
  msg.set(CapPrice_24);
  Instrument_24.insert(CapPrice_24.getString());
  FIX::ContractMultiplier ContractMultiplier_24;
  ContractMultiplier_24.setString("13829779");
  msg.set(ContractMultiplier_24);
  Instrument_24.insert(ContractMultiplier_24.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_24(0);
  msg.set(ContractMultiplierUnit_24);
  Instrument_24.insert(ContractMultiplierUnit_24.getString());
  FIX::ContractSettlMonth ContractSettlMonth_24("MONTHYEAR_228605174");
  msg.set(ContractSettlMonth_24);
  Instrument_24.insert(ContractSettlMonth_24.getString());
  FIX::CountryOfIssue CountryOfIssue_24("COUNTRY_930575373");
  msg.set(CountryOfIssue_24);
  Instrument_24.insert(CountryOfIssue_24.getString());
  FIX::CouponPaymentDate CouponPaymentDate_24("LOCALMKTDATE_1621302901");
  msg.set(CouponPaymentDate_24);
  Instrument_24.insert(CouponPaymentDate_24.getString());
  FIX::CouponRate CouponRate_24;
  CouponRate_24.setString("38.720000");
  msg.set(CouponRate_24);
  Instrument_24.insert(CouponRate_24.getString());
  FIX::CreditRating CreditRating_24("STRING_1970736165");
  msg.set(CreditRating_24);
  Instrument_24.insert(CreditRating_24.getString());
  FIX::DatedDate DatedDate_24("LOCALMKTDATE_917164827");
  msg.set(DatedDate_24);
  Instrument_24.insert(DatedDate_24.getString());
  FIX::DetachmentPoint DetachmentPoint_24;
  DetachmentPoint_24.setString("7.460000");
  msg.set(DetachmentPoint_24);
  Instrument_24.insert(DetachmentPoint_24.getString());
  FIX::EncodedIssuer EncodedIssuer_24("DATA_1220426730");
  msg.set(EncodedIssuer_24);
  Instrument_24.insert(EncodedIssuer_24.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_24(635614436);
  msg.set(EncodedIssuerLen_24);
  Instrument_24.insert(EncodedIssuerLen_24.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_24("DATA_291574074");
  msg.set(EncodedSecurityDesc_24);
  Instrument_24.insert(EncodedSecurityDesc_24.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_24(1074859263);
  msg.set(EncodedSecurityDescLen_24);
  Instrument_24.insert(EncodedSecurityDescLen_24.getString());
  FIX::ExerciseStyle ExerciseStyle_24(2);
  msg.set(ExerciseStyle_24);
  Instrument_24.insert(ExerciseStyle_24.getString());
  FIX::Factor Factor_24;
  Factor_24.setString("18612189");
  msg.set(Factor_24);
  Instrument_24.insert(Factor_24.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_24(false);
  msg.set(FlexProductEligibilityIndicator_24);
  Instrument_24.insert(FlexProductEligibilityIndicator_24.getString());
  FIX::FlexibleIndicator FlexibleIndicator_24(false);
  msg.set(FlexibleIndicator_24);
  Instrument_24.insert(FlexibleIndicator_24.getString());
  FIX::FloorPrice FloorPrice_24;
  FloorPrice_24.setString("951737");
  msg.set(FloorPrice_24);
  Instrument_24.insert(FloorPrice_24.getString());
  FIX::FlowScheduleType FlowScheduleType_24(0);
  msg.set(FlowScheduleType_24);
  Instrument_24.insert(FlowScheduleType_24.getString());
  FIX::InstrRegistry InstrRegistry_24("STRING_1943745182");
  msg.set(InstrRegistry_24);
  Instrument_24.insert(InstrRegistry_24.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_24('2');
  msg.set(InstrmtAssignmentMethod_24);
  Instrument_24.insert(InstrmtAssignmentMethod_24.getString());
  FIX::InterestAccrualDate InterestAccrualDate_24("LOCALMKTDATE_1007617481");
  msg.set(InterestAccrualDate_24);
  Instrument_24.insert(InterestAccrualDate_24.getString());
  FIX::IssueDate IssueDate_24("LOCALMKTDATE_241810238");
  msg.set(IssueDate_24);
  Instrument_24.insert(IssueDate_24.getString());
  FIX::Issuer Issuer_24("STRING_175738987");
  msg.set(Issuer_24);
  Instrument_24.insert(Issuer_24.getString());
  FIX::ListMethod ListMethod_24(0);
  msg.set(ListMethod_24);
  Instrument_24.insert(ListMethod_24.getString());
  FIX::LocaleOfIssue LocaleOfIssue_24("STRING_2074057770");
  msg.set(LocaleOfIssue_24);
  Instrument_24.insert(LocaleOfIssue_24.getString());
  FIX::MaturityDate MaturityDate_24("LOCALMKTDATE_345601398");
  msg.set(MaturityDate_24);
  Instrument_24.insert(MaturityDate_24.getString());
  FIX::MaturityMonthYear MaturityMonthYear_24("MONTHYEAR_147127630");
  msg.set(MaturityMonthYear_24);
  Instrument_24.insert(MaturityMonthYear_24.getString());
  FIX::MaturityTime MaturityTime_24("TZTIMEONLY_1802185440");
  msg.set(MaturityTime_24);
  Instrument_24.insert(MaturityTime_24.getString());
  FIX::MinPriceIncrement MinPriceIncrement_24;
  MinPriceIncrement_24.setString("2956777");
  msg.set(MinPriceIncrement_24);
  Instrument_24.insert(MinPriceIncrement_24.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_24;
  MinPriceIncrementAmount_24.setString("21156777");
  msg.set(MinPriceIncrementAmount_24);
  Instrument_24.insert(MinPriceIncrementAmount_24.getString());
  FIX::NTPositionLimit NTPositionLimit_24(1037679700);
  msg.set(NTPositionLimit_24);
  Instrument_24.insert(NTPositionLimit_24.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_24;
  NotionalPercentageOutstanding_24.setString("5.260000");
  msg.set(NotionalPercentageOutstanding_24);
  Instrument_24.insert(NotionalPercentageOutstanding_24.getString());
  FIX::OptAttribute OptAttribute_24('1');
  msg.set(OptAttribute_24);
  Instrument_24.insert(OptAttribute_24.getString());
  FIX::OptPayoutAmount OptPayoutAmount_24;
  OptPayoutAmount_24.setString("19682550");
  msg.set(OptPayoutAmount_24);
  Instrument_24.insert(OptPayoutAmount_24.getString());
  FIX::OptPayoutType OptPayoutType_24(1);
  msg.set(OptPayoutType_24);
  Instrument_24.insert(OptPayoutType_24.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_24;
  OriginalNotionalPercentageOutstanding_24.setString("31.970000");
  msg.set(OriginalNotionalPercentageOutstanding_24);
  Instrument_24.insert(OriginalNotionalPercentageOutstanding_24.getString());
  FIX::Pool Pool_24("STRING_1791507591");
  msg.set(Pool_24);
  Instrument_24.insert(Pool_24.getString());
  FIX::PositionLimit PositionLimit_24(1439244606);
  msg.set(PositionLimit_24);
  Instrument_24.insert(PositionLimit_24.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_24("STRING_STD");
  msg.set(PriceQuoteMethod_24);
  Instrument_24.insert(PriceQuoteMethod_24.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_24("STRING_864450673");
  msg.set(PriceUnitOfMeasure_24);
  Instrument_24.insert(PriceUnitOfMeasure_24.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_24;
  PriceUnitOfMeasureQty_24.setString("20748590");
  msg.set(PriceUnitOfMeasureQty_24);
  Instrument_24.insert(PriceUnitOfMeasureQty_24.getString());
  FIX::Product Product_26(9);
  msg.set(Product_26);
  Instrument_24.insert(Product_26.getString());
  FIX::ProductComplex ProductComplex_24("STRING_1939309937");
  msg.set(ProductComplex_24);
  Instrument_24.insert(ProductComplex_24.getString());
  FIX::PutOrCall PutOrCall_24(1);
  msg.set(PutOrCall_24);
  Instrument_24.insert(PutOrCall_24.getString());
  FIX::RedemptionDate RedemptionDate_24("LOCALMKTDATE_1828599667");
  msg.set(RedemptionDate_24);
  Instrument_24.insert(RedemptionDate_24.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_24("STRING_2141840724");
  msg.set(RepoCollateralSecurityType_24);
  Instrument_24.insert(RepoCollateralSecurityType_24.getString());
  FIX::RepurchaseRate RepurchaseRate_24;
  RepurchaseRate_24.setString("13.900000");
  msg.set(RepurchaseRate_24);
  Instrument_24.insert(RepurchaseRate_24.getString());
  FIX::RepurchaseTerm RepurchaseTerm_24(1923773376);
  msg.set(RepurchaseTerm_24);
  Instrument_24.insert(RepurchaseTerm_24.getString());
  FIX::RestructuringType RestructuringType_24("STRING_XR");
  msg.set(RestructuringType_24);
  Instrument_24.insert(RestructuringType_24.getString());
  FIX::SecurityDesc SecurityDesc_24("STRING_1439492925");
  msg.set(SecurityDesc_24);
  Instrument_24.insert(SecurityDesc_24.getString());
  FIX::SecurityExchange SecurityExchange_24("EXCHANGE_2143038200");
  msg.set(SecurityExchange_24);
  Instrument_24.insert(SecurityExchange_24.getString());
  FIX::SecurityGroup SecurityGroup_24("STRING_896833125");
  msg.set(SecurityGroup_24);
  Instrument_24.insert(SecurityGroup_24.getString());
  FIX::SecurityID SecurityID_24("STRING_1681303163");
  msg.set(SecurityID_24);
  Instrument_24.insert(SecurityID_24.getString());
  FIX::SecurityIDSource SecurityIDSource_24("STRING_1");
  msg.set(SecurityIDSource_24);
  Instrument_24.insert(SecurityIDSource_24.getString());
  FIX::SecurityStatus SecurityStatus_24("STRING_2");
  msg.set(SecurityStatus_24);
  Instrument_24.insert(SecurityStatus_24.getString());
  FIX::SecuritySubType SecuritySubType_25("STRING_1607877285");
  msg.set(SecuritySubType_25);
  Instrument_24.insert(SecuritySubType_25.getString());
  FIX::SecurityType SecurityType_26("STRING_EUCP");
  msg.set(SecurityType_26);
  Instrument_24.insert(SecurityType_26.getString());
  FIX::Seniority Seniority_24("STRING_SB");
  msg.set(Seniority_24);
  Instrument_24.insert(Seniority_24.getString());
  FIX::SettlMethod SettlMethod_24('C');
  msg.set(SettlMethod_24);
  Instrument_24.insert(SettlMethod_24.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_24("STRING_812572677");
  msg.set(SettleOnOpenFlag_24);
  Instrument_24.insert(SettleOnOpenFlag_24.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_24("STRING_1052463492");
  msg.set(StateOrProvinceOfIssue_24);
  Instrument_24.insert(StateOrProvinceOfIssue_24.getString());
  FIX::StrikeCurrency StrikeCurrency_24("EUR");
  msg.set(StrikeCurrency_24);
  Instrument_24.insert(StrikeCurrency_24.getString());
  FIX::StrikeMultiplier StrikeMultiplier_24;
  StrikeMultiplier_24.setString("12492628");
  msg.set(StrikeMultiplier_24);
  Instrument_24.insert(StrikeMultiplier_24.getString());
  FIX::StrikePrice StrikePrice_24;
  StrikePrice_24.setString("21210302");
  msg.set(StrikePrice_24);
  Instrument_24.insert(StrikePrice_24.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_24(5);
  msg.set(StrikePriceBoundaryMethod_24);
  Instrument_24.insert(StrikePriceBoundaryMethod_24.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_24;
  StrikePriceBoundaryPrecision_24.setString("23.670000");
  msg.set(StrikePriceBoundaryPrecision_24);
  Instrument_24.insert(StrikePriceBoundaryPrecision_24.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_24(1);
  msg.set(StrikePriceDeterminationMethod_24);
  Instrument_24.insert(StrikePriceDeterminationMethod_24.getString());
  FIX::StrikeValue StrikeValue_24;
  StrikeValue_24.setString("16746739");
  msg.set(StrikeValue_24);
  Instrument_24.insert(StrikeValue_24.getString());
  FIX::Symbol Symbol_24("STRING_733449015");
  msg.set(Symbol_24);
  Instrument_24.insert(Symbol_24.getString());
  FIX::SymbolSfx SymbolSfx_24("STRING_WI");
  msg.set(SymbolSfx_24);
  Instrument_24.insert(SymbolSfx_24.getString());
  FIX::TimeUnit TimeUnit_24("STRING_Mo");
  msg.set(TimeUnit_24);
  Instrument_24.insert(TimeUnit_24.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_24(3);
  msg.set(UnderlyingPriceDeterminationMethod_24);
  Instrument_24.insert(UnderlyingPriceDeterminationMethod_24.getString());
  FIX::UnitOfMeasure UnitOfMeasure_24("STRING_Bu");
  msg.set(UnitOfMeasure_24);
  Instrument_24.insert(UnitOfMeasure_24.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_24;
  UnitOfMeasureQty_24.setString("20879915");
  msg.set(UnitOfMeasureQty_24);
  Instrument_24.insert(UnitOfMeasureQty_24.getString());
  FIX::ValuationMethod ValuationMethod_24("STRING_FUTDA");
  msg.set(ValuationMethod_24);
  Instrument_24.insert(ValuationMethod_24.getString());
  all_values.push_back(Instrument_24);

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::ExecutionReport::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_49;
    FIX::ComplexEventCondition ComplexEventCondition_49(2);
    noComplexEvents_0_0.set(ComplexEventCondition_49);
    ComplexEvents_NoComplexEvents_49.insert(ComplexEventCondition_49.getString());
    FIX::ComplexEventPrice ComplexEventPrice_49;
    ComplexEventPrice_49.setString("1582354");
    noComplexEvents_0_0.set(ComplexEventPrice_49);
    ComplexEvents_NoComplexEvents_49.insert(ComplexEventPrice_49.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_49(3);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_49);
    ComplexEvents_NoComplexEvents_49.insert(ComplexEventPriceBoundaryMethod_49.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_49;
    ComplexEventPriceBoundaryPrecision_49.setString("85.560000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_49);
    ComplexEvents_NoComplexEvents_49.insert(ComplexEventPriceBoundaryPrecision_49.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_49(1);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_49);
    ComplexEvents_NoComplexEvents_49.insert(ComplexEventPriceTimeType_49.getString());
    FIX::ComplexEventType ComplexEventType_49(4);
    noComplexEvents_0_0.set(ComplexEventType_49);
    ComplexEvents_NoComplexEvents_49.insert(ComplexEventType_49.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_49;
    ComplexOptPayoutAmount_49.setString("4095680");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_49);
    ComplexEvents_NoComplexEvents_49.insert(ComplexOptPayoutAmount_49.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_49);

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::ExecutionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_104;
      FIX::ComplexEventEndDate ComplexEventEndDate_104(FIX::UTCTIMESTAMP(4, 16, 32, 6, 22002));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_104);
      ComplexEventDates_NoComplexEventDates_104.insert(ComplexEventEndDate_104.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_104(FIX::UTCTIMESTAMP(12, 34, 13, 18, 112013));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_104);
      ComplexEventDates_NoComplexEventDates_104.insert(ComplexEventStartDate_104.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_104);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::ExecutionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_214;
        FIX::ComplexEventEndTime ComplexEventEndTime_214(FIX::UTCTIMEONLY(3, 22, 7));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_214);
        ComplexEventTimes_NoComplexEventTimes_214.insert(ComplexEventEndTime_214.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_214(FIX::UTCTIMEONLY(22, 44, 28));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_214);
        ComplexEventTimes_NoComplexEventTimes_214.insert(ComplexEventStartTime_214.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_214);

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_105;
      FIX::ComplexEventEndDate ComplexEventEndDate_105(FIX::UTCTIMESTAMP(2, 11, 57, 16, 72010));
      noComplexEventDates_0_1_1.set(ComplexEventEndDate_105);
      ComplexEventDates_NoComplexEventDates_105.insert(ComplexEventEndDate_105.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_105(FIX::UTCTIMESTAMP(9, 37, 54, 13, 42012));
      noComplexEventDates_0_1_1.set(ComplexEventStartDate_105);
      ComplexEventDates_NoComplexEventDates_105.insert(ComplexEventStartDate_105.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_105);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::ExecutionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_215;
        FIX::ComplexEventEndTime ComplexEventEndTime_215(FIX::UTCTIMEONLY(12, 56, 18));
        noComplexEventTimes_0_1_2_0.set(ComplexEventEndTime_215);
        ComplexEventTimes_NoComplexEventTimes_215.insert(ComplexEventEndTime_215.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_215(FIX::UTCTIMEONLY(10, 31, 50));
        noComplexEventTimes_0_1_2_0.set(ComplexEventStartTime_215);
        ComplexEventTimes_NoComplexEventTimes_215.insert(ComplexEventStartTime_215.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_215);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_216;
        FIX::ComplexEventEndTime ComplexEventEndTime_216(FIX::UTCTIMEONLY(14, 12, 39));
        noComplexEventTimes_0_1_2_1.set(ComplexEventEndTime_216);
        ComplexEventTimes_NoComplexEventTimes_216.insert(ComplexEventEndTime_216.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_216(FIX::UTCTIMEONLY(10, 15, 0));
        noComplexEventTimes_0_1_2_1.set(ComplexEventStartTime_216);
        ComplexEventTimes_NoComplexEventTimes_216.insert(ComplexEventStartTime_216.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_216);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      {
        FIX50SP2::ExecutionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_217;
        FIX::ComplexEventEndTime ComplexEventEndTime_217(FIX::UTCTIMEONLY(5, 3, 53));
        noComplexEventTimes_0_1_2_2.set(ComplexEventEndTime_217);
        ComplexEventTimes_NoComplexEventTimes_217.insert(ComplexEventEndTime_217.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_217(FIX::UTCTIMEONLY(14, 22, 35));
        noComplexEventTimes_0_1_2_2.set(ComplexEventStartTime_217);
        ComplexEventTimes_NoComplexEventTimes_217.insert(ComplexEventStartTime_217.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_217);

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::ExecutionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_106;
      FIX::ComplexEventEndDate ComplexEventEndDate_106(FIX::UTCTIMESTAMP(15, 30, 32, 14, 72017));
      noComplexEventDates_0_1_2.set(ComplexEventEndDate_106);
      ComplexEventDates_NoComplexEventDates_106.insert(ComplexEventEndDate_106.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_106(FIX::UTCTIMESTAMP(10, 49, 29, 13, 122006));
      noComplexEventDates_0_1_2.set(ComplexEventStartDate_106);
      ComplexEventDates_NoComplexEventDates_106.insert(ComplexEventStartDate_106.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_106);

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::ExecutionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_218;
        FIX::ComplexEventEndTime ComplexEventEndTime_218(FIX::UTCTIMEONLY(19, 39, 10));
        noComplexEventTimes_0_2_2_0.set(ComplexEventEndTime_218);
        ComplexEventTimes_NoComplexEventTimes_218.insert(ComplexEventEndTime_218.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_218(FIX::UTCTIMEONLY(14, 25, 15));
        noComplexEventTimes_0_2_2_0.set(ComplexEventStartTime_218);
        ComplexEventTimes_NoComplexEventTimes_218.insert(ComplexEventStartTime_218.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_218);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_219;
        FIX::ComplexEventEndTime ComplexEventEndTime_219(FIX::UTCTIMEONLY(11, 11, 51));
        noComplexEventTimes_0_2_2_1.set(ComplexEventEndTime_219);
        ComplexEventTimes_NoComplexEventTimes_219.insert(ComplexEventEndTime_219.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_219(FIX::UTCTIMEONLY(5, 5, 56));
        noComplexEventTimes_0_2_2_1.set(ComplexEventStartTime_219);
        ComplexEventTimes_NoComplexEventTimes_219.insert(ComplexEventStartTime_219.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_219);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_1);
      }
      {
        FIX50SP2::ExecutionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_220;
        FIX::ComplexEventEndTime ComplexEventEndTime_220(FIX::UTCTIMEONLY(8, 18, 40));
        noComplexEventTimes_0_2_2_2.set(ComplexEventEndTime_220);
        ComplexEventTimes_NoComplexEventTimes_220.insert(ComplexEventEndTime_220.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_220(FIX::UTCTIMEONLY(4, 33, 14));
        noComplexEventTimes_0_2_2_2.set(ComplexEventStartTime_220);
        ComplexEventTimes_NoComplexEventTimes_220.insert(ComplexEventStartTime_220.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_220);

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::ExecutionReport::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_54;
    FIX::EventDate EventDate_54("LOCALMKTDATE_272208315");
    noEvents_0_0.set(EventDate_54);
    EvntGrp_NoEvents_54.insert(EventDate_54.getString());
    FIX::EventPx EventPx_54;
    EventPx_54.setString("20792735");
    noEvents_0_0.set(EventPx_54);
    EvntGrp_NoEvents_54.insert(EventPx_54.getString());
    FIX::EventText EventText_54("STRING_1604826448");
    noEvents_0_0.set(EventText_54);
    EvntGrp_NoEvents_54.insert(EventText_54.getString());
    FIX::EventTime EventTime_54(FIX::UTCTIMESTAMP(23, 55, 37, 22, 122005));
    noEvents_0_0.set(EventTime_54);
    EvntGrp_NoEvents_54.insert(EventTime_54.getString());
    FIX::EventType EventType_54(14);
    noEvents_0_0.set(EventType_54);
    EvntGrp_NoEvents_54.insert(EventType_54.getString());
    all_values.push_back(EvntGrp_NoEvents_54);

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::ExecutionReport::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_45;
    FIX::InstrumentPartyID InstrumentPartyID_45("STRING_463245905");
    noInstrumentParties_0_0.set(InstrumentPartyID_45);
    InstrumentParties_NoInstrumentParties_45.insert(InstrumentPartyID_45.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_45('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_45);
    InstrumentParties_NoInstrumentParties_45.insert(InstrumentPartyIDSource_45.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_45(1104474079);
    noInstrumentParties_0_0.set(InstrumentPartyRole_45);
    InstrumentParties_NoInstrumentParties_45.insert(InstrumentPartyRole_45.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_45);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::ExecutionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_90;
      FIX::InstrumentPartySubID InstrumentPartySubID_90("STRING_1533663644");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_90);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_90.insert(InstrumentPartySubID_90.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_90(699339302);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_90);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_90.insert(InstrumentPartySubIDType_90.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_90);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_91;
      FIX::InstrumentPartySubID InstrumentPartySubID_91("STRING_770583940");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_91);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_91.insert(InstrumentPartySubID_91.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_91(1951628593);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_91);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_91.insert(InstrumentPartySubIDType_91.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_91);

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::ExecutionReport::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_46;
    FIX::InstrumentPartyID InstrumentPartyID_46("STRING_1758276848");
    noInstrumentParties_0_1.set(InstrumentPartyID_46);
    InstrumentParties_NoInstrumentParties_46.insert(InstrumentPartyID_46.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_46('8');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_46);
    InstrumentParties_NoInstrumentParties_46.insert(InstrumentPartyIDSource_46.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_46(1729979661);
    noInstrumentParties_0_1.set(InstrumentPartyRole_46);
    InstrumentParties_NoInstrumentParties_46.insert(InstrumentPartyRole_46.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_46);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::ExecutionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_92;
      FIX::InstrumentPartySubID InstrumentPartySubID_92("STRING_794579626");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_92);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_92.insert(InstrumentPartySubID_92.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_92(458021273);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_92);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_92.insert(InstrumentPartySubIDType_92.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_92);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_93;
      FIX::InstrumentPartySubID InstrumentPartySubID_93("STRING_984519471");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_93);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_93.insert(InstrumentPartySubID_93.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_93(1400498846);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_93);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_93.insert(InstrumentPartySubIDType_93.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_93);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::ExecutionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_94;
      FIX::InstrumentPartySubID InstrumentPartySubID_94("STRING_1853185706");
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubID_94);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_94.insert(InstrumentPartySubID_94.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_94(641510577);
      noInstrumentPartySubIDs_1_1_2.set(InstrumentPartySubIDType_94);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_94.insert(InstrumentPartySubIDType_94.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_94);

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_2);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::ExecutionReport::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_47;
    FIX::InstrumentPartyID InstrumentPartyID_47("STRING_1770259029");
    noInstrumentParties_0_2.set(InstrumentPartyID_47);
    InstrumentParties_NoInstrumentParties_47.insert(InstrumentPartyID_47.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_47('2');
    noInstrumentParties_0_2.set(InstrumentPartyIDSource_47);
    InstrumentParties_NoInstrumentParties_47.insert(InstrumentPartyIDSource_47.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_47(573300452);
    noInstrumentParties_0_2.set(InstrumentPartyRole_47);
    InstrumentParties_NoInstrumentParties_47.insert(InstrumentPartyRole_47.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_47);

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::ExecutionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_95;
      FIX::InstrumentPartySubID InstrumentPartySubID_95("STRING_1772116668");
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubID_95);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_95.insert(InstrumentPartySubID_95.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_95(7718220);
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubIDType_95);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_95.insert(InstrumentPartySubIDType_95.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_95);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_96;
      FIX::InstrumentPartySubID InstrumentPartySubID_96("STRING_226789276");
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubID_96);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_96.insert(InstrumentPartySubID_96.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_96(2016855205);
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubIDType_96);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_96.insert(InstrumentPartySubIDType_96.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_96);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_1);
    }
    {
      FIX50SP2::ExecutionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_97;
      FIX::InstrumentPartySubID InstrumentPartySubID_97("STRING_1678530798");
      noInstrumentPartySubIDs_2_1_2.set(InstrumentPartySubID_97);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_97.insert(InstrumentPartySubID_97.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_97(1954653111);
      noInstrumentPartySubIDs_2_1_2.set(InstrumentPartySubIDType_97);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_97.insert(InstrumentPartySubIDType_97.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_97);

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_2);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::ExecutionReport::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_51;
    FIX::SecurityAltID SecurityAltID_51("STRING_1361872124");
    noSecurityAltID_0_0.set(SecurityAltID_51);
    SecAltIDGrp_NoSecurityAltID_51.insert(SecurityAltID_51.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_51("STRING_1533684432");
    noSecurityAltID_0_0.set(SecurityAltIDSource_51);
    SecAltIDGrp_NoSecurityAltID_51.insert(SecurityAltIDSource_51.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_51);

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::ExecutionReport::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_52;
    FIX::SecurityAltID SecurityAltID_52("STRING_1678250650");
    noSecurityAltID_0_1.set(SecurityAltID_52);
    SecAltIDGrp_NoSecurityAltID_52.insert(SecurityAltID_52.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_52("STRING_1029349577");
    noSecurityAltID_0_1.set(SecurityAltIDSource_52);
    SecAltIDGrp_NoSecurityAltID_52.insert(SecurityAltIDSource_52.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_52);

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::ExecutionReport::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_53;
    FIX::SecurityAltID SecurityAltID_53("STRING_490674863");
    noSecurityAltID_0_2.set(SecurityAltID_53);
    SecAltIDGrp_NoSecurityAltID_53.insert(SecurityAltID_53.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_53("STRING_1242869430");
    noSecurityAltID_0_2.set(SecurityAltIDSource_53);
    SecAltIDGrp_NoSecurityAltID_53.insert(SecurityAltIDSource_53.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_53);

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_48;
  FIX::SecurityXML SecurityXML_49("XMLDATA_415529573");
  msg.set(SecurityXML_49);
  FIX::SecurityXMLLen SecurityXMLLen_24(1190014166);
  msg.set(SecurityXMLLen_24);
  FIX::SecurityXMLSchema SecurityXMLSchema_24("STRING_2013453370");
  msg.set(SecurityXMLSchema_24);
  SecurityXML_48.insert(SecurityXMLSchema_24.getString());
  all_values.push_back(SecurityXML_48);

  // MiscFeesGrp
  // Group MiscFeesGrp.NoMiscFees
  {
    FIX50SP2::ExecutionReport::NoMiscFees noMiscFees_0_0;
    // MiscFeesGrp.NoMiscFees
    multiset<string> MiscFeesGrp_NoMiscFees_17;
    FIX::MiscFeeAmt MiscFeeAmt_17;
    MiscFeeAmt_17.setString("8008073");
    noMiscFees_0_0.set(MiscFeeAmt_17);
    MiscFeesGrp_NoMiscFees_17.insert(MiscFeeAmt_17.getString());
    FIX::MiscFeeBasis MiscFeeBasis_17(0);
    noMiscFees_0_0.set(MiscFeeBasis_17);
    MiscFeesGrp_NoMiscFees_17.insert(MiscFeeBasis_17.getString());
    FIX::MiscFeeCurr MiscFeeCurr_17("JPY");
    noMiscFees_0_0.set(MiscFeeCurr_17);
    MiscFeesGrp_NoMiscFees_17.insert(MiscFeeCurr_17.getString());
    FIX::MiscFeeType MiscFeeType_17("STRING_10");
    noMiscFees_0_0.set(MiscFeeType_17);
    MiscFeesGrp_NoMiscFees_17.insert(MiscFeeType_17.getString());
    all_values.push_back(MiscFeesGrp_NoMiscFees_17);

    msg.addGroup(noMiscFees_0_0);
  }
  {
    FIX50SP2::ExecutionReport::NoMiscFees noMiscFees_0_1;
    // MiscFeesGrp.NoMiscFees
    multiset<string> MiscFeesGrp_NoMiscFees_18;
    FIX::MiscFeeAmt MiscFeeAmt_18;
    MiscFeeAmt_18.setString("2601918");
    noMiscFees_0_1.set(MiscFeeAmt_18);
    MiscFeesGrp_NoMiscFees_18.insert(MiscFeeAmt_18.getString());
    FIX::MiscFeeBasis MiscFeeBasis_18(0);
    noMiscFees_0_1.set(MiscFeeBasis_18);
    MiscFeesGrp_NoMiscFees_18.insert(MiscFeeBasis_18.getString());
    FIX::MiscFeeCurr MiscFeeCurr_18("USD");
    noMiscFees_0_1.set(MiscFeeCurr_18);
    MiscFeesGrp_NoMiscFees_18.insert(MiscFeeCurr_18.getString());
    FIX::MiscFeeType MiscFeeType_18("STRING_6");
    noMiscFees_0_1.set(MiscFeeType_18);
    MiscFeesGrp_NoMiscFees_18.insert(MiscFeeType_18.getString());
    all_values.push_back(MiscFeesGrp_NoMiscFees_18);

    msg.addGroup(noMiscFees_0_1);
  }
  // OrderQtyData
  multiset<string> OrderQtyData_7;
  FIX::CashOrderQty CashOrderQty_7;
  CashOrderQty_7.setString("17684297");
  msg.set(CashOrderQty_7);
  OrderQtyData_7.insert(CashOrderQty_7.getString());
  FIX::OrderPercent OrderPercent_7;
  OrderPercent_7.setString("78.840000");
  msg.set(OrderPercent_7);
  OrderQtyData_7.insert(OrderPercent_7.getString());
  FIX::OrderQty OrderQty_16;
  OrderQty_16.setString("19561015");
  msg.set(OrderQty_16);
  OrderQtyData_7.insert(OrderQty_16.getString());
  FIX::RoundingDirection RoundingDirection_7('0');
  msg.set(RoundingDirection_7);
  OrderQtyData_7.insert(RoundingDirection_7.getString());
  FIX::RoundingModulus RoundingModulus_7;
  RoundingModulus_7.setString("17159209");
  msg.set(RoundingModulus_7);
  OrderQtyData_7.insert(RoundingModulus_7.getString());
  all_values.push_back(OrderQtyData_7);

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::ExecutionReport::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_46;
    FIX::PartyID PartyID_46("STRING_1075337182");
    noPartyIDs_0_0.set(PartyID_46);
    Parties_NoPartyIDs_46.insert(PartyID_46.getString());
    FIX::PartyIDSource PartyIDSource_46('3');
    noPartyIDs_0_0.set(PartyIDSource_46);
    Parties_NoPartyIDs_46.insert(PartyIDSource_46.getString());
    FIX::PartyRole PartyRole_46(72);
    noPartyIDs_0_0.set(PartyRole_46);
    Parties_NoPartyIDs_46.insert(PartyRole_46.getString());
    all_values.push_back(Parties_NoPartyIDs_46);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::ExecutionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_94;
      FIX::PartySubID PartySubID_94("STRING_652813558");
      noPartySubIDs_0_1_0.set(PartySubID_94);
      PtysSubGrp_NoPartySubIDs_94.insert(PartySubID_94.getString());
      FIX::PartySubIDType PartySubIDType_94(32);
      noPartySubIDs_0_1_0.set(PartySubIDType_94);
      PtysSubGrp_NoPartySubIDs_94.insert(PartySubIDType_94.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_94);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  // PegInstructions
  multiset<string> PegInstructions_1;
  FIX::PegLimitType PegLimitType_1(1);
  msg.set(PegLimitType_1);
  PegInstructions_1.insert(PegLimitType_1.getString());
  FIX::PegMoveType PegMoveType_1(0);
  msg.set(PegMoveType_1);
  PegInstructions_1.insert(PegMoveType_1.getString());
  FIX::PegOffsetType PegOffsetType_1(3);
  msg.set(PegOffsetType_1);
  PegInstructions_1.insert(PegOffsetType_1.getString());
  FIX::PegOffsetValue PegOffsetValue_1;
  PegOffsetValue_1.setString("7593822");
  msg.set(PegOffsetValue_1);
  PegInstructions_1.insert(PegOffsetValue_1.getString());
  FIX::PegPriceType PegPriceType_1(8);
  msg.set(PegPriceType_1);
  PegInstructions_1.insert(PegPriceType_1.getString());
  FIX::PegRoundDirection PegRoundDirection_1(1);
  msg.set(PegRoundDirection_1);
  PegInstructions_1.insert(PegRoundDirection_1.getString());
  FIX::PegScope PegScope_1(1);
  msg.set(PegScope_1);
  PegInstructions_1.insert(PegScope_1.getString());
  FIX::PegSecurityDesc PegSecurityDesc_1("STRING_1292419713");
  msg.set(PegSecurityDesc_1);
  PegInstructions_1.insert(PegSecurityDesc_1.getString());
  FIX::PegSecurityID PegSecurityID_1("STRING_226325422");
  msg.set(PegSecurityID_1);
  PegInstructions_1.insert(PegSecurityID_1.getString());
  FIX::PegSecurityIDSource PegSecurityIDSource_1("STRING_602720178");
  msg.set(PegSecurityIDSource_1);
  PegInstructions_1.insert(PegSecurityIDSource_1.getString());
  FIX::PegSymbol PegSymbol_1("STRING_1242995584");
  msg.set(PegSymbol_1);
  PegInstructions_1.insert(PegSymbol_1.getString());
  all_values.push_back(PegInstructions_1);

  // PreAllocGrp
  // Group PreAllocGrp.NoAllocs
  {
    FIX50SP2::ExecutionReport::NoAllocs noAllocs_0_0;
    // PreAllocGrp.NoAllocs
    multiset<string> PreAllocGrp_NoAllocs_7;
    FIX::AllocAccount AllocAccount_17("STRING_359491232");
    noAllocs_0_0.set(AllocAccount_17);
    PreAllocGrp_NoAllocs_7.insert(AllocAccount_17.getString());
    FIX::AllocAcctIDSource AllocAcctIDSource_17(1988151081);
    noAllocs_0_0.set(AllocAcctIDSource_17);
    PreAllocGrp_NoAllocs_7.insert(AllocAcctIDSource_17.getString());
    FIX::AllocQty AllocQty_16;
    AllocQty_16.setString("2886877");
    noAllocs_0_0.set(AllocQty_16);
    PreAllocGrp_NoAllocs_7.insert(AllocQty_16.getString());
    FIX::AllocSettlCurrency AllocSettlCurrency_12("CHF");
    noAllocs_0_0.set(AllocSettlCurrency_12);
    PreAllocGrp_NoAllocs_7.insert(AllocSettlCurrency_12.getString());
    FIX::IndividualAllocID IndividualAllocID_17("STRING_254581620");
    noAllocs_0_0.set(IndividualAllocID_17);
    PreAllocGrp_NoAllocs_7.insert(IndividualAllocID_17.getString());
    all_values.push_back(PreAllocGrp_NoAllocs_7);

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::ExecutionReport::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_55;
      FIX::NestedPartyID NestedPartyID_55("STRING_1607267854");
      noNestedPartyIDs_0_1_0.set(NestedPartyID_55);
      NestedParties_NoNestedPartyIDs_55.insert(NestedPartyID_55.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_55('1');
      noNestedPartyIDs_0_1_0.set(NestedPartyIDSource_55);
      NestedParties_NoNestedPartyIDs_55.insert(NestedPartyIDSource_55.getString());
      FIX::NestedPartyRole NestedPartyRole_55(144717122);
      noNestedPartyIDs_0_1_0.set(NestedPartyRole_55);
      NestedParties_NoNestedPartyIDs_55.insert(NestedPartyRole_55.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_55);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::ExecutionReport::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_104;
        FIX::NestedPartySubID NestedPartySubID_104("STRING_1914306760");
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubID_104);
        NstdPtysSubGrp_NoNestedPartySubIDs_104.insert(NestedPartySubID_104.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_104(2108536898);
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubIDType_104);
        NstdPtysSubGrp_NoNestedPartySubIDs_104.insert(NestedPartySubIDType_104.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_104);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_105;
        FIX::NestedPartySubID NestedPartySubID_105("STRING_1383669295");
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubID_105);
        NstdPtysSubGrp_NoNestedPartySubIDs_105.insert(NestedPartySubID_105.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_105(1352115573);
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubIDType_105);
        NstdPtysSubGrp_NoNestedPartySubIDs_105.insert(NestedPartySubIDType_105.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_105);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::ExecutionReport::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_106;
        FIX::NestedPartySubID NestedPartySubID_106("STRING_1455920176");
        noNestedPartySubIDs_0_0_2_2.set(NestedPartySubID_106);
        NstdPtysSubGrp_NoNestedPartySubIDs_106.insert(NestedPartySubID_106.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_106(118692293);
        noNestedPartySubIDs_0_0_2_2.set(NestedPartySubIDType_106);
        NstdPtysSubGrp_NoNestedPartySubIDs_106.insert(NestedPartySubIDType_106.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_106);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_2);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_56;
      FIX::NestedPartyID NestedPartyID_56("STRING_2004929132");
      noNestedPartyIDs_0_1_1.set(NestedPartyID_56);
      NestedParties_NoNestedPartyIDs_56.insert(NestedPartyID_56.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_56('1');
      noNestedPartyIDs_0_1_1.set(NestedPartyIDSource_56);
      NestedParties_NoNestedPartyIDs_56.insert(NestedPartyIDSource_56.getString());
      FIX::NestedPartyRole NestedPartyRole_56(387399723);
      noNestedPartyIDs_0_1_1.set(NestedPartyRole_56);
      NestedParties_NoNestedPartyIDs_56.insert(NestedPartyRole_56.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_56);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::ExecutionReport::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_107;
        FIX::NestedPartySubID NestedPartySubID_107("STRING_1756296910");
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubID_107);
        NstdPtysSubGrp_NoNestedPartySubIDs_107.insert(NestedPartySubID_107.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_107(1146782017);
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubIDType_107);
        NstdPtysSubGrp_NoNestedPartySubIDs_107.insert(NestedPartySubIDType_107.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_107);

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_1);
    }
    msg.addGroup(noAllocs_0_0);
  }
  // RateSource
  // Group RateSource.NoRateSources
  {
    FIX50SP2::ExecutionReport::NoRateSources noRateSources_0_0;
    // RateSource.NoRateSources
    multiset<string> RateSource_NoRateSources_6;
    FIX::RateSource RateSource_9(99);
    noRateSources_0_0.set(RateSource_9);
    RateSource_NoRateSources_6.insert(RateSource_9.getString());
    FIX::RateSourceType RateSourceType_6(1);
    noRateSources_0_0.set(RateSourceType_6);
    RateSource_NoRateSources_6.insert(RateSourceType_6.getString());
    FIX::ReferencePage ReferencePage_6("STRING_612412100");
    noRateSources_0_0.set(ReferencePage_6);
    RateSource_NoRateSources_6.insert(ReferencePage_6.getString());
    all_values.push_back(RateSource_NoRateSources_6);

    msg.addGroup(noRateSources_0_0);
  }
  {
    FIX50SP2::ExecutionReport::NoRateSources noRateSources_0_1;
    // RateSource.NoRateSources
    multiset<string> RateSource_NoRateSources_7;
    FIX::RateSource RateSource_10(1);
    noRateSources_0_1.set(RateSource_10);
    RateSource_NoRateSources_7.insert(RateSource_10.getString());
    FIX::RateSourceType RateSourceType_7(1);
    noRateSources_0_1.set(RateSourceType_7);
    RateSource_NoRateSources_7.insert(RateSourceType_7.getString());
    FIX::ReferencePage ReferencePage_7("STRING_1855407684");
    noRateSources_0_1.set(ReferencePage_7);
    RateSource_NoRateSources_7.insert(ReferencePage_7.getString());
    all_values.push_back(RateSource_NoRateSources_7);

    msg.addGroup(noRateSources_0_1);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_10;
  FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_10("GBP");
  msg.set(BenchmarkCurveCurrency_10);
  SpreadOrBenchmarkCurveData_10.insert(BenchmarkCurveCurrency_10.getString());
  FIX::BenchmarkCurveName BenchmarkCurveName_10("STRING_EUREPO");
  msg.set(BenchmarkCurveName_10);
  SpreadOrBenchmarkCurveData_10.insert(BenchmarkCurveName_10.getString());
  FIX::BenchmarkCurvePoint BenchmarkCurvePoint_10("STRING_158973300");
  msg.set(BenchmarkCurvePoint_10);
  SpreadOrBenchmarkCurveData_10.insert(BenchmarkCurvePoint_10.getString());
  FIX::BenchmarkPrice BenchmarkPrice_10;
  BenchmarkPrice_10.setString("8642043");
  msg.set(BenchmarkPrice_10);
  SpreadOrBenchmarkCurveData_10.insert(BenchmarkPrice_10.getString());
  FIX::BenchmarkPriceType BenchmarkPriceType_10(1534913247);
  msg.set(BenchmarkPriceType_10);
  SpreadOrBenchmarkCurveData_10.insert(BenchmarkPriceType_10.getString());
  FIX::BenchmarkSecurityID BenchmarkSecurityID_10("STRING_413554920");
  msg.set(BenchmarkSecurityID_10);
  SpreadOrBenchmarkCurveData_10.insert(BenchmarkSecurityID_10.getString());
  FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_10("STRING_1200303564");
  msg.set(BenchmarkSecurityIDSource_10);
  SpreadOrBenchmarkCurveData_10.insert(BenchmarkSecurityIDSource_10.getString());
  FIX::Spread Spread_10;
  Spread_10.setString("9946974");
  msg.set(Spread_10);
  SpreadOrBenchmarkCurveData_10.insert(Spread_10.getString());
  all_values.push_back(SpreadOrBenchmarkCurveData_10);

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::ExecutionReport::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_19;
    FIX::StipulationType StipulationType_19("STRING_WALA");
    noStipulations_0_0.set(StipulationType_19);
    Stipulations_NoStipulations_19.insert(StipulationType_19.getString());
    FIX::StipulationValue StipulationValue_19("STRING_1303029566");
    noStipulations_0_0.set(StipulationValue_19);
    Stipulations_NoStipulations_19.insert(StipulationValue_19.getString());
    all_values.push_back(Stipulations_NoStipulations_19);

    msg.addGroup(noStipulations_0_0);
  }
  {
    FIX50SP2::ExecutionReport::NoStipulations noStipulations_0_1;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_20;
    FIX::StipulationType StipulationType_20("STRING_WHOLE");
    noStipulations_0_1.set(StipulationType_20);
    Stipulations_NoStipulations_20.insert(StipulationType_20.getString());
    FIX::StipulationValue StipulationValue_20("STRING_1306073936");
    noStipulations_0_1.set(StipulationValue_20);
    Stipulations_NoStipulations_20.insert(StipulationValue_20.getString());
    all_values.push_back(Stipulations_NoStipulations_20);

    msg.addGroup(noStipulations_0_1);
  }
  {
    FIX50SP2::ExecutionReport::NoStipulations noStipulations_0_2;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_21;
    FIX::StipulationType StipulationType_21("STRING_LOOKBACK");
    noStipulations_0_2.set(StipulationType_21);
    Stipulations_NoStipulations_21.insert(StipulationType_21.getString());
    FIX::StipulationValue StipulationValue_21("STRING_1730879462");
    noStipulations_0_2.set(StipulationValue_21);
    Stipulations_NoStipulations_21.insert(StipulationValue_21.getString());
    all_values.push_back(Stipulations_NoStipulations_21);

    msg.addGroup(noStipulations_0_2);
  }
  // StrategyParametersGrp
  // Group StrategyParametersGrp.NoStrategyParameters
  {
    FIX50SP2::ExecutionReport::NoStrategyParameters noStrategyParameters_0_0;
    // StrategyParametersGrp.NoStrategyParameters
    multiset<string> StrategyParametersGrp_NoStrategyParameters_3;
    FIX::StrategyParameterName StrategyParameterName_3("STRING_657907506");
    noStrategyParameters_0_0.set(StrategyParameterName_3);
    StrategyParametersGrp_NoStrategyParameters_3.insert(StrategyParameterName_3.getString());
    FIX::StrategyParameterType StrategyParameterType_3(22);
    noStrategyParameters_0_0.set(StrategyParameterType_3);
    StrategyParametersGrp_NoStrategyParameters_3.insert(StrategyParameterType_3.getString());
    FIX::StrategyParameterValue StrategyParameterValue_3("STRING_632202396");
    noStrategyParameters_0_0.set(StrategyParameterValue_3);
    StrategyParametersGrp_NoStrategyParameters_3.insert(StrategyParameterValue_3.getString());
    all_values.push_back(StrategyParametersGrp_NoStrategyParameters_3);

    msg.addGroup(noStrategyParameters_0_0);
  }
  {
    FIX50SP2::ExecutionReport::NoStrategyParameters noStrategyParameters_0_1;
    // StrategyParametersGrp.NoStrategyParameters
    multiset<string> StrategyParametersGrp_NoStrategyParameters_4;
    FIX::StrategyParameterName StrategyParameterName_4("STRING_1045307229");
    noStrategyParameters_0_1.set(StrategyParameterName_4);
    StrategyParametersGrp_NoStrategyParameters_4.insert(StrategyParameterName_4.getString());
    FIX::StrategyParameterType StrategyParameterType_4(27);
    noStrategyParameters_0_1.set(StrategyParameterType_4);
    StrategyParametersGrp_NoStrategyParameters_4.insert(StrategyParameterType_4.getString());
    FIX::StrategyParameterValue StrategyParameterValue_4("STRING_241015658");
    noStrategyParameters_0_1.set(StrategyParameterValue_4);
    StrategyParametersGrp_NoStrategyParameters_4.insert(StrategyParameterValue_4.getString());
    all_values.push_back(StrategyParametersGrp_NoStrategyParameters_4);

    msg.addGroup(noStrategyParameters_0_1);
  }
  {
    FIX50SP2::ExecutionReport::NoStrategyParameters noStrategyParameters_0_2;
    // StrategyParametersGrp.NoStrategyParameters
    multiset<string> StrategyParametersGrp_NoStrategyParameters_5;
    FIX::StrategyParameterName StrategyParameterName_5("STRING_44605599");
    noStrategyParameters_0_2.set(StrategyParameterName_5);
    StrategyParametersGrp_NoStrategyParameters_5.insert(StrategyParameterName_5.getString());
    FIX::StrategyParameterType StrategyParameterType_5(16);
    noStrategyParameters_0_2.set(StrategyParameterType_5);
    StrategyParametersGrp_NoStrategyParameters_5.insert(StrategyParameterType_5.getString());
    FIX::StrategyParameterValue StrategyParameterValue_5("STRING_2003963473");
    noStrategyParameters_0_2.set(StrategyParameterValue_5);
    StrategyParametersGrp_NoStrategyParameters_5.insert(StrategyParameterValue_5.getString());
    all_values.push_back(StrategyParametersGrp_NoStrategyParameters_5);

    msg.addGroup(noStrategyParameters_0_2);
  }
  // TrdRegTimestamps
  // Group TrdRegTimestamps.NoTrdRegTimestamps
  {
    FIX50SP2::ExecutionReport::NoTrdRegTimestamps noTrdRegTimestamps_0_0;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_12;
    FIX::DeskOrderHandlingInst DeskOrderHandlingInst_12("MULTIPLESTRINGVALUE_TMO");
    noTrdRegTimestamps_0_0.set(DeskOrderHandlingInst_12);
    TrdRegTimestamps_NoTrdRegTimestamps_12.insert(DeskOrderHandlingInst_12.getString());
    FIX::DeskType DeskType_12("STRING_A");
    noTrdRegTimestamps_0_0.set(DeskType_12);
    TrdRegTimestamps_NoTrdRegTimestamps_12.insert(DeskType_12.getString());
    FIX::DeskTypeSource DeskTypeSource_12(1);
    noTrdRegTimestamps_0_0.set(DeskTypeSource_12);
    TrdRegTimestamps_NoTrdRegTimestamps_12.insert(DeskTypeSource_12.getString());
    FIX::TrdRegTimestamp TrdRegTimestamp_12(FIX::UTCTIMESTAMP(14, 0, 43, 26, 32002));
    noTrdRegTimestamps_0_0.set(TrdRegTimestamp_12);
    TrdRegTimestamps_NoTrdRegTimestamps_12.insert(TrdRegTimestamp_12.getString());
    FIX::TrdRegTimestampOrigin TrdRegTimestampOrigin_12("STRING_141083179");
    noTrdRegTimestamps_0_0.set(TrdRegTimestampOrigin_12);
    TrdRegTimestamps_NoTrdRegTimestamps_12.insert(TrdRegTimestampOrigin_12.getString());
    FIX::TrdRegTimestampType TrdRegTimestampType_12(5);
    noTrdRegTimestamps_0_0.set(TrdRegTimestampType_12);
    TrdRegTimestamps_NoTrdRegTimestamps_12.insert(TrdRegTimestampType_12.getString());
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_12);

    msg.addGroup(noTrdRegTimestamps_0_0);
  }
  {
    FIX50SP2::ExecutionReport::NoTrdRegTimestamps noTrdRegTimestamps_0_1;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_13;
    FIX::DeskOrderHandlingInst DeskOrderHandlingInst_13("MULTIPLESTRINGVALUE_S.W");
    noTrdRegTimestamps_0_1.set(DeskOrderHandlingInst_13);
    TrdRegTimestamps_NoTrdRegTimestamps_13.insert(DeskOrderHandlingInst_13.getString());
    FIX::DeskType DeskType_13("STRING_D");
    noTrdRegTimestamps_0_1.set(DeskType_13);
    TrdRegTimestamps_NoTrdRegTimestamps_13.insert(DeskType_13.getString());
    FIX::DeskTypeSource DeskTypeSource_13(1);
    noTrdRegTimestamps_0_1.set(DeskTypeSource_13);
    TrdRegTimestamps_NoTrdRegTimestamps_13.insert(DeskTypeSource_13.getString());
    FIX::TrdRegTimestamp TrdRegTimestamp_13(FIX::UTCTIMESTAMP(20, 22, 26, 14, 42014));
    noTrdRegTimestamps_0_1.set(TrdRegTimestamp_13);
    TrdRegTimestamps_NoTrdRegTimestamps_13.insert(TrdRegTimestamp_13.getString());
    FIX::TrdRegTimestampOrigin TrdRegTimestampOrigin_13("STRING_156024956");
    noTrdRegTimestamps_0_1.set(TrdRegTimestampOrigin_13);
    TrdRegTimestamps_NoTrdRegTimestamps_13.insert(TrdRegTimestampOrigin_13.getString());
    FIX::TrdRegTimestampType TrdRegTimestampType_13(7);
    noTrdRegTimestamps_0_1.set(TrdRegTimestampType_13);
    TrdRegTimestamps_NoTrdRegTimestamps_13.insert(TrdRegTimestampType_13.getString());
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_13);

    msg.addGroup(noTrdRegTimestamps_0_1);
  }
  {
    FIX50SP2::ExecutionReport::NoTrdRegTimestamps noTrdRegTimestamps_0_2;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_14;
    FIX::DeskOrderHandlingInst DeskOrderHandlingInst_14("MULTIPLESTRINGVALUE_TS");
    noTrdRegTimestamps_0_2.set(DeskOrderHandlingInst_14);
    TrdRegTimestamps_NoTrdRegTimestamps_14.insert(DeskOrderHandlingInst_14.getString());
    FIX::DeskType DeskType_14("STRING_D");
    noTrdRegTimestamps_0_2.set(DeskType_14);
    TrdRegTimestamps_NoTrdRegTimestamps_14.insert(DeskType_14.getString());
    FIX::DeskTypeSource DeskTypeSource_14(1);
    noTrdRegTimestamps_0_2.set(DeskTypeSource_14);
    TrdRegTimestamps_NoTrdRegTimestamps_14.insert(DeskTypeSource_14.getString());
    FIX::TrdRegTimestamp TrdRegTimestamp_14(FIX::UTCTIMESTAMP(4, 47, 21, 13, 72003));
    noTrdRegTimestamps_0_2.set(TrdRegTimestamp_14);
    TrdRegTimestamps_NoTrdRegTimestamps_14.insert(TrdRegTimestamp_14.getString());
    FIX::TrdRegTimestampOrigin TrdRegTimestampOrigin_14("STRING_1271187019");
    noTrdRegTimestamps_0_2.set(TrdRegTimestampOrigin_14);
    TrdRegTimestamps_NoTrdRegTimestamps_14.insert(TrdRegTimestampOrigin_14.getString());
    FIX::TrdRegTimestampType TrdRegTimestampType_14(7);
    noTrdRegTimestamps_0_2.set(TrdRegTimestampType_14);
    TrdRegTimestamps_NoTrdRegTimestamps_14.insert(TrdRegTimestampType_14.getString());
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_14);

    msg.addGroup(noTrdRegTimestamps_0_2);
  }
  // TriggeringInstruction
  multiset<string> TriggeringInstruction_1;
  FIX::TriggerAction TriggerAction_1('1');
  msg.set(TriggerAction_1);
  TriggeringInstruction_1.insert(TriggerAction_1.getString());
  FIX::TriggerNewPrice TriggerNewPrice_1;
  TriggerNewPrice_1.setString("20894580");
  msg.set(TriggerNewPrice_1);
  TriggeringInstruction_1.insert(TriggerNewPrice_1.getString());
  FIX::TriggerNewQty TriggerNewQty_1;
  TriggerNewQty_1.setString("9198505");
  msg.set(TriggerNewQty_1);
  TriggeringInstruction_1.insert(TriggerNewQty_1.getString());
  FIX::TriggerOrderType TriggerOrderType_1('1');
  msg.set(TriggerOrderType_1);
  TriggeringInstruction_1.insert(TriggerOrderType_1.getString());
  FIX::TriggerPrice TriggerPrice_1;
  TriggerPrice_1.setString("1476749");
  msg.set(TriggerPrice_1);
  TriggeringInstruction_1.insert(TriggerPrice_1.getString());
  FIX::TriggerPriceDirection TriggerPriceDirection_1('D');
  msg.set(TriggerPriceDirection_1);
  TriggeringInstruction_1.insert(TriggerPriceDirection_1.getString());
  FIX::TriggerPriceType TriggerPriceType_1('6');
  msg.set(TriggerPriceType_1);
  TriggeringInstruction_1.insert(TriggerPriceType_1.getString());
  FIX::TriggerPriceTypeScope TriggerPriceTypeScope_1('3');
  msg.set(TriggerPriceTypeScope_1);
  TriggeringInstruction_1.insert(TriggerPriceTypeScope_1.getString());
  FIX::TriggerSecurityDesc TriggerSecurityDesc_1("STRING_1813957733");
  msg.set(TriggerSecurityDesc_1);
  TriggeringInstruction_1.insert(TriggerSecurityDesc_1.getString());
  FIX::TriggerSecurityID TriggerSecurityID_1("STRING_276951864");
  msg.set(TriggerSecurityID_1);
  TriggeringInstruction_1.insert(TriggerSecurityID_1.getString());
  FIX::TriggerSecurityIDSource TriggerSecurityIDSource_1("STRING_1704016925");
  msg.set(TriggerSecurityIDSource_1);
  TriggeringInstruction_1.insert(TriggerSecurityIDSource_1.getString());
  FIX::TriggerSymbol TriggerSymbol_1("STRING_798261929");
  msg.set(TriggerSymbol_1);
  TriggeringInstruction_1.insert(TriggerSymbol_1.getString());
  FIX::TriggerTradingSessionID TriggerTradingSessionID_1("STRING_858241486");
  msg.set(TriggerTradingSessionID_1);
  TriggeringInstruction_1.insert(TriggerTradingSessionID_1.getString());
  FIX::TriggerTradingSessionSubID TriggerTradingSessionSubID_1("STRING_451692443");
  msg.set(TriggerTradingSessionSubID_1);
  TriggeringInstruction_1.insert(TriggerTradingSessionSubID_1.getString());
  FIX::TriggerType TriggerType_1('4');
  msg.set(TriggerType_1);
  TriggeringInstruction_1.insert(TriggerType_1.getString());
  all_values.push_back(TriggeringInstruction_1);

  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::ExecutionReport::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_35;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_35("DATA_2004759116");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_35);
    UnderlyingInstrument_35.insert(EncodedUnderlyingIssuer_35.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_35(1669470543);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_35);
    UnderlyingInstrument_35.insert(EncodedUnderlyingIssuerLen_35.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_35("DATA_1734560408");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_35);
    UnderlyingInstrument_35.insert(EncodedUnderlyingSecurityDesc_35.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_35(308165722);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_35);
    UnderlyingInstrument_35.insert(EncodedUnderlyingSecurityDescLen_35.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_35;
    UnderlyingAdjustedQuantity_35.setString("13073628");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_35);
    UnderlyingInstrument_35.insert(UnderlyingAdjustedQuantity_35.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_35;
    UnderlyingAllocationPercent_35.setString("49.020000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_35);
    UnderlyingInstrument_35.insert(UnderlyingAllocationPercent_35.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_35;
    UnderlyingAttachmentPoint_35.setString("15.750000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_35);
    UnderlyingInstrument_35.insert(UnderlyingAttachmentPoint_35.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_35("STRING_1894598517");
    noUnderlyings_0_0.set(UnderlyingCFICode_35);
    UnderlyingInstrument_35.insert(UnderlyingCFICode_35.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_35("STRING_1434109221");
    noUnderlyings_0_0.set(UnderlyingCPProgram_35);
    UnderlyingInstrument_35.insert(UnderlyingCPProgram_35.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_35("STRING_144974208");
    noUnderlyings_0_0.set(UnderlyingCPRegType_35);
    UnderlyingInstrument_35.insert(UnderlyingCPRegType_35.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_35;
    UnderlyingCapValue_35.setString("18961060");
    noUnderlyings_0_0.set(UnderlyingCapValue_35);
    UnderlyingInstrument_35.insert(UnderlyingCapValue_35.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_35;
    UnderlyingCashAmount_35.setString("9103929");
    noUnderlyings_0_0.set(UnderlyingCashAmount_35);
    UnderlyingInstrument_35.insert(UnderlyingCashAmount_35.getString());
    FIX::UnderlyingCashType UnderlyingCashType_35("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_35);
    UnderlyingInstrument_35.insert(UnderlyingCashType_35.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_35;
    UnderlyingContractMultiplier_35.setString("10198093");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_35);
    UnderlyingInstrument_35.insert(UnderlyingContractMultiplier_35.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_35(2102715295);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_35);
    UnderlyingInstrument_35.insert(UnderlyingContractMultiplierUnit_35.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_35("COUNTRY_1930201079");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_35);
    UnderlyingInstrument_35.insert(UnderlyingCountryOfIssue_35.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_35("LOCALMKTDATE_961783748");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_35);
    UnderlyingInstrument_35.insert(UnderlyingCouponPaymentDate_35.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_35;
    UnderlyingCouponRate_35.setString("22.450000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_35);
    UnderlyingInstrument_35.insert(UnderlyingCouponRate_35.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_35("STRING_706774963");
    noUnderlyings_0_0.set(UnderlyingCreditRating_35);
    UnderlyingInstrument_35.insert(UnderlyingCreditRating_35.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_35("EUR");
    noUnderlyings_0_0.set(UnderlyingCurrency_35);
    UnderlyingInstrument_35.insert(UnderlyingCurrency_35.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_35;
    UnderlyingCurrentValue_35.setString("17085111");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_35);
    UnderlyingInstrument_35.insert(UnderlyingCurrentValue_35.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_35;
    UnderlyingDetachmentPoint_35.setString("80.070000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_35);
    UnderlyingInstrument_35.insert(UnderlyingDetachmentPoint_35.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_35;
    UnderlyingDirtyPrice_35.setString("16024901");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_35);
    UnderlyingInstrument_35.insert(UnderlyingDirtyPrice_35.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_35;
    UnderlyingEndPrice_35.setString("19854630");
    noUnderlyings_0_0.set(UnderlyingEndPrice_35);
    UnderlyingInstrument_35.insert(UnderlyingEndPrice_35.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_35;
    UnderlyingEndValue_35.setString("20140649");
    noUnderlyings_0_0.set(UnderlyingEndValue_35);
    UnderlyingInstrument_35.insert(UnderlyingEndValue_35.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_35(253268389);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_35);
    UnderlyingInstrument_35.insert(UnderlyingExerciseStyle_35.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_35;
    UnderlyingFXRate_35.setString("6962208");
    noUnderlyings_0_0.set(UnderlyingFXRate_35);
    UnderlyingInstrument_35.insert(UnderlyingFXRate_35.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_35('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_35);
    UnderlyingInstrument_35.insert(UnderlyingFXRateCalc_35.getString());
    FIX::UnderlyingFactor UnderlyingFactor_35;
    UnderlyingFactor_35.setString("17667139");
    noUnderlyings_0_0.set(UnderlyingFactor_35);
    UnderlyingInstrument_35.insert(UnderlyingFactor_35.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_35(602778771);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_35);
    UnderlyingInstrument_35.insert(UnderlyingFlowScheduleType_35.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_35("STRING_175549196");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_35);
    UnderlyingInstrument_35.insert(UnderlyingInstrRegistry_35.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_35("LOCALMKTDATE_1288700871");
    noUnderlyings_0_0.set(UnderlyingIssueDate_35);
    UnderlyingInstrument_35.insert(UnderlyingIssueDate_35.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_35("STRING_189855531");
    noUnderlyings_0_0.set(UnderlyingIssuer_35);
    UnderlyingInstrument_35.insert(UnderlyingIssuer_35.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_35("STRING_483714918");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_35);
    UnderlyingInstrument_35.insert(UnderlyingLocaleOfIssue_35.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_35("LOCALMKTDATE_448580064");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_35);
    UnderlyingInstrument_35.insert(UnderlyingMaturityDate_35.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_35("MONTHYEAR_1845950433");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_35);
    UnderlyingInstrument_35.insert(UnderlyingMaturityMonthYear_35.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_35("TZTIMEONLY_1287376493");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_35);
    UnderlyingInstrument_35.insert(UnderlyingMaturityTime_35.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_35;
    UnderlyingNotionalPercentageOutstanding_35.setString("49.340000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_35);
    UnderlyingInstrument_35.insert(UnderlyingNotionalPercentageOutstanding_35.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_35('1');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_35);
    UnderlyingInstrument_35.insert(UnderlyingOptAttribute_35.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_35;
    UnderlyingOriginalNotionalPercentageOutstanding_35.setString("7.010000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_35);
    UnderlyingInstrument_35.insert(UnderlyingOriginalNotionalPercentageOutstanding_35.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_35("STRING_2091800957");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_35);
    UnderlyingInstrument_35.insert(UnderlyingPriceUnitOfMeasure_35.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_35;
    UnderlyingPriceUnitOfMeasureQty_35.setString("20429689");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_35);
    UnderlyingInstrument_35.insert(UnderlyingPriceUnitOfMeasureQty_35.getString());
    FIX::UnderlyingProduct UnderlyingProduct_35(1315869331);
    noUnderlyings_0_0.set(UnderlyingProduct_35);
    UnderlyingInstrument_35.insert(UnderlyingProduct_35.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_35(964126703);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_35);
    UnderlyingInstrument_35.insert(UnderlyingPutOrCall_35.getString());
    FIX::UnderlyingPx UnderlyingPx_35;
    UnderlyingPx_35.setString("19982006");
    noUnderlyings_0_0.set(UnderlyingPx_35);
    UnderlyingInstrument_35.insert(UnderlyingPx_35.getString());
    FIX::UnderlyingQty UnderlyingQty_35;
    UnderlyingQty_35.setString("10985867");
    noUnderlyings_0_0.set(UnderlyingQty_35);
    UnderlyingInstrument_35.insert(UnderlyingQty_35.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_35("LOCALMKTDATE_1925910451");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_35);
    UnderlyingInstrument_35.insert(UnderlyingRedemptionDate_35.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_35("STRING_725799206");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_35);
    UnderlyingInstrument_35.insert(UnderlyingRepoCollateralSecurityType_35.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_35;
    UnderlyingRepurchaseRate_35.setString("17.260000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_35);
    UnderlyingInstrument_35.insert(UnderlyingRepurchaseRate_35.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_35(887885487);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_35);
    UnderlyingInstrument_35.insert(UnderlyingRepurchaseTerm_35.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_35("STRING_514331581");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_35);
    UnderlyingInstrument_35.insert(UnderlyingRestructuringType_35.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_35("STRING_1366389221");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_35);
    UnderlyingInstrument_35.insert(UnderlyingSecurityDesc_35.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_35("EXCHANGE_1197933494");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_35);
    UnderlyingInstrument_35.insert(UnderlyingSecurityExchange_35.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_35("STRING_2116821689");
    noUnderlyings_0_0.set(UnderlyingSecurityID_35);
    UnderlyingInstrument_35.insert(UnderlyingSecurityID_35.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_35("STRING_1204368580");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_35);
    UnderlyingInstrument_35.insert(UnderlyingSecurityIDSource_35.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_35("STRING_1064514779");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_35);
    UnderlyingInstrument_35.insert(UnderlyingSecuritySubType_35.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_35("STRING_222606430");
    noUnderlyings_0_0.set(UnderlyingSecurityType_35);
    UnderlyingInstrument_35.insert(UnderlyingSecurityType_35.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_35("STRING_1900589425");
    noUnderlyings_0_0.set(UnderlyingSeniority_35);
    UnderlyingInstrument_35.insert(UnderlyingSeniority_35.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_35("STRING_1382788507");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_35);
    UnderlyingInstrument_35.insert(UnderlyingSettlMethod_35.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_35(2);
    noUnderlyings_0_0.set(UnderlyingSettlementType_35);
    UnderlyingInstrument_35.insert(UnderlyingSettlementType_35.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_35;
    UnderlyingStartValue_35.setString("3558845");
    noUnderlyings_0_0.set(UnderlyingStartValue_35);
    UnderlyingInstrument_35.insert(UnderlyingStartValue_35.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_35("STRING_1558337703");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_35);
    UnderlyingInstrument_35.insert(UnderlyingStateOrProvinceOfIssue_35.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_35("USD");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_35);
    UnderlyingInstrument_35.insert(UnderlyingStrikeCurrency_35.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_35;
    UnderlyingStrikePrice_35.setString("20420526");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_35);
    UnderlyingInstrument_35.insert(UnderlyingStrikePrice_35.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_35("STRING_1579117693");
    noUnderlyings_0_0.set(UnderlyingSymbol_35);
    UnderlyingInstrument_35.insert(UnderlyingSymbol_35.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_35("STRING_244206865");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_35);
    UnderlyingInstrument_35.insert(UnderlyingSymbolSfx_35.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_35("STRING_1181945466");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_35);
    UnderlyingInstrument_35.insert(UnderlyingTimeUnit_35.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_35("STRING_1774812627");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_35);
    UnderlyingInstrument_35.insert(UnderlyingUnitOfMeasure_35.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_35;
    UnderlyingUnitOfMeasureQty_35.setString("13767828");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_35);
    UnderlyingInstrument_35.insert(UnderlyingUnitOfMeasureQty_35.getString());
    all_values.push_back(UnderlyingInstrument_35);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::ExecutionReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_70;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_70("STRING_1719129936");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_70);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_70.insert(UnderlyingSecurityAltID_70.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_70("STRING_1272268185");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_70);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_70.insert(UnderlyingSecurityAltIDSource_70.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_70);

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::ExecutionReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_69;
      FIX::UnderlyingStipType UnderlyingStipType_69("STRING_535772991");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_69);
      UnderlyingStipulations_NoUnderlyingStips_69.insert(UnderlyingStipType_69.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_69("STRING_1122985146");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_69);
      UnderlyingStipulations_NoUnderlyingStips_69.insert(UnderlyingStipValue_69.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_69);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_70;
      FIX::UnderlyingStipType UnderlyingStipType_70("STRING_733784966");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_70);
      UnderlyingStipulations_NoUnderlyingStips_70.insert(UnderlyingStipType_70.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_70("STRING_314199794");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_70);
      UnderlyingStipulations_NoUnderlyingStips_70.insert(UnderlyingStipValue_70.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_70);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    {
      FIX50SP2::ExecutionReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_71;
      FIX::UnderlyingStipType UnderlyingStipType_71("STRING_1848784352");
      noUnderlyingStips_0_1_2.set(UnderlyingStipType_71);
      UnderlyingStipulations_NoUnderlyingStips_71.insert(UnderlyingStipType_71.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_71("STRING_391663044");
      noUnderlyingStips_0_1_2.set(UnderlyingStipValue_71);
      UnderlyingStipulations_NoUnderlyingStips_71.insert(UnderlyingStipValue_71.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_71);

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::ExecutionReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_66;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_66("STRING_215632285");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_66);
      UndlyInstrumentParties_NoUndlyInstrumentParties_66.insert(UnderlyingInstrumentPartyID_66.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_66('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_66);
      UndlyInstrumentParties_NoUndlyInstrumentParties_66.insert(UnderlyingInstrumentPartyIDSource_66.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_66(252535128);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_66);
      UndlyInstrumentParties_NoUndlyInstrumentParties_66.insert(UnderlyingInstrumentPartyRole_66.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_66);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::ExecutionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_128;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_128("STRING_814937197");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_128);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_128.insert(UnderlyingInstrumentPartySubID_128.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_128(1317049907);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_128);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_128.insert(UnderlyingInstrumentPartySubIDType_128.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_128);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_129;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_129("STRING_407576756");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_129);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_129.insert(UnderlyingInstrumentPartySubID_129.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_129(568042975);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_129);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_129.insert(UnderlyingInstrumentPartySubIDType_129.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_129);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_67;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_67("STRING_552354766");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_67);
      UndlyInstrumentParties_NoUndlyInstrumentParties_67.insert(UnderlyingInstrumentPartyID_67.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_67('2');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_67);
      UndlyInstrumentParties_NoUndlyInstrumentParties_67.insert(UnderlyingInstrumentPartyIDSource_67.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_67(923927523);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_67);
      UndlyInstrumentParties_NoUndlyInstrumentParties_67.insert(UnderlyingInstrumentPartyRole_67.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_67);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::ExecutionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_130;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_130("STRING_1379951143");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_130);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_130.insert(UnderlyingInstrumentPartySubID_130.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_130(1469667603);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_130);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_130.insert(UnderlyingInstrumentPartySubIDType_130.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_130);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_131;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_131("STRING_2005261442");
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubID_131);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_131.insert(UnderlyingInstrumentPartySubID_131.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_131(811585188);
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubIDType_131);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_131.insert(UnderlyingInstrumentPartySubIDType_131.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_131);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::ExecutionReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_68;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_68("STRING_1713874469");
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyID_68);
      UndlyInstrumentParties_NoUndlyInstrumentParties_68.insert(UnderlyingInstrumentPartyID_68.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_68('1');
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyIDSource_68);
      UndlyInstrumentParties_NoUndlyInstrumentParties_68.insert(UnderlyingInstrumentPartyIDSource_68.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_68(438914168);
      noUndlyInstrumentParties_0_1_2.set(UnderlyingInstrumentPartyRole_68);
      UndlyInstrumentParties_NoUndlyInstrumentParties_68.insert(UnderlyingInstrumentPartyRole_68.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_68);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::ExecutionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_132;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_132("STRING_1506535779");
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubID_132);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_132.insert(UnderlyingInstrumentPartySubID_132.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_132(10560456);
        noUndlyInstrumentPartySubIDs_0_2_2_0.set(UnderlyingInstrumentPartySubIDType_132);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_132.insert(UnderlyingInstrumentPartySubIDType_132.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_132);

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::ExecutionReport::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_36;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_36("DATA_67958230");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_36);
    UnderlyingInstrument_36.insert(EncodedUnderlyingIssuer_36.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_36(1141733982);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_36);
    UnderlyingInstrument_36.insert(EncodedUnderlyingIssuerLen_36.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_36("DATA_546333448");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_36);
    UnderlyingInstrument_36.insert(EncodedUnderlyingSecurityDesc_36.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_36(1190943376);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_36);
    UnderlyingInstrument_36.insert(EncodedUnderlyingSecurityDescLen_36.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_36;
    UnderlyingAdjustedQuantity_36.setString("18755189");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_36);
    UnderlyingInstrument_36.insert(UnderlyingAdjustedQuantity_36.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_36;
    UnderlyingAllocationPercent_36.setString("32.420000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_36);
    UnderlyingInstrument_36.insert(UnderlyingAllocationPercent_36.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_36;
    UnderlyingAttachmentPoint_36.setString("40.800000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_36);
    UnderlyingInstrument_36.insert(UnderlyingAttachmentPoint_36.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_36("STRING_119698345");
    noUnderlyings_0_1.set(UnderlyingCFICode_36);
    UnderlyingInstrument_36.insert(UnderlyingCFICode_36.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_36("STRING_2062618524");
    noUnderlyings_0_1.set(UnderlyingCPProgram_36);
    UnderlyingInstrument_36.insert(UnderlyingCPProgram_36.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_36("STRING_1107876365");
    noUnderlyings_0_1.set(UnderlyingCPRegType_36);
    UnderlyingInstrument_36.insert(UnderlyingCPRegType_36.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_36;
    UnderlyingCapValue_36.setString("18777506");
    noUnderlyings_0_1.set(UnderlyingCapValue_36);
    UnderlyingInstrument_36.insert(UnderlyingCapValue_36.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_36;
    UnderlyingCashAmount_36.setString("1676700");
    noUnderlyings_0_1.set(UnderlyingCashAmount_36);
    UnderlyingInstrument_36.insert(UnderlyingCashAmount_36.getString());
    FIX::UnderlyingCashType UnderlyingCashType_36("STRING_DIFF");
    noUnderlyings_0_1.set(UnderlyingCashType_36);
    UnderlyingInstrument_36.insert(UnderlyingCashType_36.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_36;
    UnderlyingContractMultiplier_36.setString("5452041");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_36);
    UnderlyingInstrument_36.insert(UnderlyingContractMultiplier_36.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_36(1484719911);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_36);
    UnderlyingInstrument_36.insert(UnderlyingContractMultiplierUnit_36.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_36("COUNTRY_1700423447");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_36);
    UnderlyingInstrument_36.insert(UnderlyingCountryOfIssue_36.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_36("LOCALMKTDATE_1113247135");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_36);
    UnderlyingInstrument_36.insert(UnderlyingCouponPaymentDate_36.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_36;
    UnderlyingCouponRate_36.setString("46.770000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_36);
    UnderlyingInstrument_36.insert(UnderlyingCouponRate_36.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_36("STRING_1949836961");
    noUnderlyings_0_1.set(UnderlyingCreditRating_36);
    UnderlyingInstrument_36.insert(UnderlyingCreditRating_36.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_36("USD");
    noUnderlyings_0_1.set(UnderlyingCurrency_36);
    UnderlyingInstrument_36.insert(UnderlyingCurrency_36.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_36;
    UnderlyingCurrentValue_36.setString("11823044");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_36);
    UnderlyingInstrument_36.insert(UnderlyingCurrentValue_36.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_36;
    UnderlyingDetachmentPoint_36.setString("86.140000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_36);
    UnderlyingInstrument_36.insert(UnderlyingDetachmentPoint_36.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_36;
    UnderlyingDirtyPrice_36.setString("18580612");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_36);
    UnderlyingInstrument_36.insert(UnderlyingDirtyPrice_36.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_36;
    UnderlyingEndPrice_36.setString("19938896");
    noUnderlyings_0_1.set(UnderlyingEndPrice_36);
    UnderlyingInstrument_36.insert(UnderlyingEndPrice_36.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_36;
    UnderlyingEndValue_36.setString("9257494");
    noUnderlyings_0_1.set(UnderlyingEndValue_36);
    UnderlyingInstrument_36.insert(UnderlyingEndValue_36.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_36(750300904);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_36);
    UnderlyingInstrument_36.insert(UnderlyingExerciseStyle_36.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_36;
    UnderlyingFXRate_36.setString("2853201");
    noUnderlyings_0_1.set(UnderlyingFXRate_36);
    UnderlyingInstrument_36.insert(UnderlyingFXRate_36.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_36('D');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_36);
    UnderlyingInstrument_36.insert(UnderlyingFXRateCalc_36.getString());
    FIX::UnderlyingFactor UnderlyingFactor_36;
    UnderlyingFactor_36.setString("1093530");
    noUnderlyings_0_1.set(UnderlyingFactor_36);
    UnderlyingInstrument_36.insert(UnderlyingFactor_36.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_36(295880621);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_36);
    UnderlyingInstrument_36.insert(UnderlyingFlowScheduleType_36.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_36("STRING_1936881358");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_36);
    UnderlyingInstrument_36.insert(UnderlyingInstrRegistry_36.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_36("LOCALMKTDATE_1251087018");
    noUnderlyings_0_1.set(UnderlyingIssueDate_36);
    UnderlyingInstrument_36.insert(UnderlyingIssueDate_36.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_36("STRING_842214069");
    noUnderlyings_0_1.set(UnderlyingIssuer_36);
    UnderlyingInstrument_36.insert(UnderlyingIssuer_36.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_36("STRING_980341087");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_36);
    UnderlyingInstrument_36.insert(UnderlyingLocaleOfIssue_36.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_36("LOCALMKTDATE_979122318");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_36);
    UnderlyingInstrument_36.insert(UnderlyingMaturityDate_36.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_36("MONTHYEAR_1702747312");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_36);
    UnderlyingInstrument_36.insert(UnderlyingMaturityMonthYear_36.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_36("TZTIMEONLY_1872585167");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_36);
    UnderlyingInstrument_36.insert(UnderlyingMaturityTime_36.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_36;
    UnderlyingNotionalPercentageOutstanding_36.setString("6.630000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_36);
    UnderlyingInstrument_36.insert(UnderlyingNotionalPercentageOutstanding_36.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_36('1');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_36);
    UnderlyingInstrument_36.insert(UnderlyingOptAttribute_36.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_36;
    UnderlyingOriginalNotionalPercentageOutstanding_36.setString("78.850000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_36);
    UnderlyingInstrument_36.insert(UnderlyingOriginalNotionalPercentageOutstanding_36.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_36("STRING_829087626");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_36);
    UnderlyingInstrument_36.insert(UnderlyingPriceUnitOfMeasure_36.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_36;
    UnderlyingPriceUnitOfMeasureQty_36.setString("17855521");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_36);
    UnderlyingInstrument_36.insert(UnderlyingPriceUnitOfMeasureQty_36.getString());
    FIX::UnderlyingProduct UnderlyingProduct_36(2125824576);
    noUnderlyings_0_1.set(UnderlyingProduct_36);
    UnderlyingInstrument_36.insert(UnderlyingProduct_36.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_36(1374291786);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_36);
    UnderlyingInstrument_36.insert(UnderlyingPutOrCall_36.getString());
    FIX::UnderlyingPx UnderlyingPx_36;
    UnderlyingPx_36.setString("11227884");
    noUnderlyings_0_1.set(UnderlyingPx_36);
    UnderlyingInstrument_36.insert(UnderlyingPx_36.getString());
    FIX::UnderlyingQty UnderlyingQty_36;
    UnderlyingQty_36.setString("16787643");
    noUnderlyings_0_1.set(UnderlyingQty_36);
    UnderlyingInstrument_36.insert(UnderlyingQty_36.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_36("LOCALMKTDATE_340055273");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_36);
    UnderlyingInstrument_36.insert(UnderlyingRedemptionDate_36.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_36("STRING_1012379484");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_36);
    UnderlyingInstrument_36.insert(UnderlyingRepoCollateralSecurityType_36.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_36;
    UnderlyingRepurchaseRate_36.setString("76.890000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_36);
    UnderlyingInstrument_36.insert(UnderlyingRepurchaseRate_36.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_36(229746283);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_36);
    UnderlyingInstrument_36.insert(UnderlyingRepurchaseTerm_36.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_36("STRING_865179334");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_36);
    UnderlyingInstrument_36.insert(UnderlyingRestructuringType_36.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_36("STRING_515938498");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_36);
    UnderlyingInstrument_36.insert(UnderlyingSecurityDesc_36.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_36("EXCHANGE_1589104897");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_36);
    UnderlyingInstrument_36.insert(UnderlyingSecurityExchange_36.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_36("STRING_575756978");
    noUnderlyings_0_1.set(UnderlyingSecurityID_36);
    UnderlyingInstrument_36.insert(UnderlyingSecurityID_36.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_36("STRING_362344495");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_36);
    UnderlyingInstrument_36.insert(UnderlyingSecurityIDSource_36.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_36("STRING_367370684");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_36);
    UnderlyingInstrument_36.insert(UnderlyingSecuritySubType_36.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_36("STRING_1326057882");
    noUnderlyings_0_1.set(UnderlyingSecurityType_36);
    UnderlyingInstrument_36.insert(UnderlyingSecurityType_36.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_36("STRING_647664660");
    noUnderlyings_0_1.set(UnderlyingSeniority_36);
    UnderlyingInstrument_36.insert(UnderlyingSeniority_36.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_36("STRING_88810164");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_36);
    UnderlyingInstrument_36.insert(UnderlyingSettlMethod_36.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_36(5);
    noUnderlyings_0_1.set(UnderlyingSettlementType_36);
    UnderlyingInstrument_36.insert(UnderlyingSettlementType_36.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_36;
    UnderlyingStartValue_36.setString("9435452");
    noUnderlyings_0_1.set(UnderlyingStartValue_36);
    UnderlyingInstrument_36.insert(UnderlyingStartValue_36.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_36("STRING_2025691523");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_36);
    UnderlyingInstrument_36.insert(UnderlyingStateOrProvinceOfIssue_36.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_36("CHF");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_36);
    UnderlyingInstrument_36.insert(UnderlyingStrikeCurrency_36.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_36;
    UnderlyingStrikePrice_36.setString("8585489");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_36);
    UnderlyingInstrument_36.insert(UnderlyingStrikePrice_36.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_36("STRING_1518136606");
    noUnderlyings_0_1.set(UnderlyingSymbol_36);
    UnderlyingInstrument_36.insert(UnderlyingSymbol_36.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_36("STRING_1341023015");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_36);
    UnderlyingInstrument_36.insert(UnderlyingSymbolSfx_36.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_36("STRING_583650481");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_36);
    UnderlyingInstrument_36.insert(UnderlyingTimeUnit_36.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_36("STRING_469473621");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_36);
    UnderlyingInstrument_36.insert(UnderlyingUnitOfMeasure_36.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_36;
    UnderlyingUnitOfMeasureQty_36.setString("8114215");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_36);
    UnderlyingInstrument_36.insert(UnderlyingUnitOfMeasureQty_36.getString());
    all_values.push_back(UnderlyingInstrument_36);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::ExecutionReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_71;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_71("STRING_1298561247");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_71);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_71.insert(UnderlyingSecurityAltID_71.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_71("STRING_449490099");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_71);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_71.insert(UnderlyingSecurityAltIDSource_71.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_71);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_72;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_72("STRING_1394969295");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_72);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_72.insert(UnderlyingSecurityAltID_72.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_72("STRING_525369385");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_72);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_72.insert(UnderlyingSecurityAltIDSource_72.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_72);

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::ExecutionReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_72;
      FIX::UnderlyingStipType UnderlyingStipType_72("STRING_926250023");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_72);
      UnderlyingStipulations_NoUnderlyingStips_72.insert(UnderlyingStipType_72.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_72("STRING_865424658");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_72);
      UnderlyingStipulations_NoUnderlyingStips_72.insert(UnderlyingStipValue_72.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_72);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_73;
      FIX::UnderlyingStipType UnderlyingStipType_73("STRING_437174390");
      noUnderlyingStips_1_1_1.set(UnderlyingStipType_73);
      UnderlyingStipulations_NoUnderlyingStips_73.insert(UnderlyingStipType_73.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_73("STRING_259884064");
      noUnderlyingStips_1_1_1.set(UnderlyingStipValue_73);
      UnderlyingStipulations_NoUnderlyingStips_73.insert(UnderlyingStipValue_73.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_73);

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::ExecutionReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_69;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_69("STRING_1302353724");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_69);
      UndlyInstrumentParties_NoUndlyInstrumentParties_69.insert(UnderlyingInstrumentPartyID_69.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_69('7');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_69);
      UndlyInstrumentParties_NoUndlyInstrumentParties_69.insert(UnderlyingInstrumentPartyIDSource_69.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_69(536792191);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_69);
      UndlyInstrumentParties_NoUndlyInstrumentParties_69.insert(UnderlyingInstrumentPartyRole_69.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_69);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::ExecutionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_133;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_133("STRING_1138167057");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_133);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_133.insert(UnderlyingInstrumentPartySubID_133.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_133(904162876);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_133);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_133.insert(UnderlyingInstrumentPartySubIDType_133.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_133);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_134;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_134("STRING_1056684936");
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubID_134);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_134.insert(UnderlyingInstrumentPartySubID_134.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_134(1785831717);
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubIDType_134);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_134.insert(UnderlyingInstrumentPartySubIDType_134.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_134);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::ExecutionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_135;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_135("STRING_992973040");
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubID_135);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_135.insert(UnderlyingInstrumentPartySubID_135.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_135(344612205);
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubIDType_135);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_135.insert(UnderlyingInstrumentPartySubIDType_135.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_135);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_70;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_70("STRING_581893351");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_70);
      UndlyInstrumentParties_NoUndlyInstrumentParties_70.insert(UnderlyingInstrumentPartyID_70.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_70('8');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_70);
      UndlyInstrumentParties_NoUndlyInstrumentParties_70.insert(UnderlyingInstrumentPartyIDSource_70.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_70(883626493);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_70);
      UndlyInstrumentParties_NoUndlyInstrumentParties_70.insert(UnderlyingInstrumentPartyRole_70.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_70);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::ExecutionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_136;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_136("STRING_1729729877");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_136);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_136.insert(UnderlyingInstrumentPartySubID_136.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_136(254279451);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_136);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_136.insert(UnderlyingInstrumentPartySubIDType_136.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_136);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_137;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_137("STRING_1561192069");
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubID_137);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_137.insert(UnderlyingInstrumentPartySubID_137.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_137(165896711);
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubIDType_137);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_137.insert(UnderlyingInstrumentPartySubIDType_137.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_137);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::ExecutionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_138;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_138("STRING_723753072");
        noUndlyInstrumentPartySubIDs_1_1_2_2.set(UnderlyingInstrumentPartySubID_138);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_138.insert(UnderlyingInstrumentPartySubID_138.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_138(225129976);
        noUndlyInstrumentPartySubIDs_1_1_2_2.set(UnderlyingInstrumentPartySubIDType_138);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_138.insert(UnderlyingInstrumentPartySubIDType_138.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_138);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    {
      FIX50SP2::ExecutionReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_71;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_71("STRING_1582525077");
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyID_71);
      UndlyInstrumentParties_NoUndlyInstrumentParties_71.insert(UnderlyingInstrumentPartyID_71.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_71('2');
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyIDSource_71);
      UndlyInstrumentParties_NoUndlyInstrumentParties_71.insert(UnderlyingInstrumentPartyIDSource_71.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_71(674620075);
      noUndlyInstrumentParties_1_1_2.set(UnderlyingInstrumentPartyRole_71);
      UndlyInstrumentParties_NoUndlyInstrumentParties_71.insert(UnderlyingInstrumentPartyRole_71.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_71);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::ExecutionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_139;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_139("STRING_400200057");
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubID_139);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_139.insert(UnderlyingInstrumentPartySubID_139.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_139(99414981);
        noUndlyInstrumentPartySubIDs_1_2_2_0.set(UnderlyingInstrumentPartySubIDType_139);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_139.insert(UnderlyingInstrumentPartySubIDType_139.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_139);

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_140;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_140("STRING_1756260747");
        noUndlyInstrumentPartySubIDs_1_2_2_1.set(UnderlyingInstrumentPartySubID_140);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_140.insert(UnderlyingInstrumentPartySubID_140.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_140(1265624716);
        noUndlyInstrumentPartySubIDs_1_2_2_1.set(UnderlyingInstrumentPartySubIDType_140);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_140.insert(UnderlyingInstrumentPartySubIDType_140.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_140);

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_2);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  // YieldData
  multiset<string> YieldData_5;
  FIX::Yield Yield_5;
  Yield_5.setString("93.710000");
  msg.set(Yield_5);
  YieldData_5.insert(Yield_5.getString());
  FIX::YieldCalcDate YieldCalcDate_5("LOCALMKTDATE_2016144812");
  msg.set(YieldCalcDate_5);
  YieldData_5.insert(YieldCalcDate_5.getString());
  FIX::YieldRedemptionDate YieldRedemptionDate_5("LOCALMKTDATE_213312010");
  msg.set(YieldRedemptionDate_5);
  YieldData_5.insert(YieldRedemptionDate_5.getString());
  FIX::YieldRedemptionPrice YieldRedemptionPrice_5;
  YieldRedemptionPrice_5.setString("18389430");
  msg.set(YieldRedemptionPrice_5);
  YieldData_5.insert(YieldRedemptionPrice_5.getString());
  FIX::YieldRedemptionPriceType YieldRedemptionPriceType_5(644483726);
  msg.set(YieldRedemptionPriceType_5);
  YieldData_5.insert(YieldRedemptionPriceType_5.getString());
  FIX::YieldType YieldType_5("STRING_CURRENT");
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
