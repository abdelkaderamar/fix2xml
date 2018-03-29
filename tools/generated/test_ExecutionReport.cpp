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
  multiset<string> all_compo_names;
  multiset<string> ExecutionReport_0;
  FIX::Account Account_13("STRING_491421822");
  msg.set(Account_13);
  ExecutionReport_0.insert(Account_13.getString());
  FIX::AccountType AccountType_10(8);
  msg.set(AccountType_10);
  ExecutionReport_0.insert(AccountType_10.getString());
  FIX::AccruedInterestAmt AccruedInterestAmt_9;
  AccruedInterestAmt_9.setString("4933629");
  msg.set(AccruedInterestAmt_9);
  ExecutionReport_0.insert(AccruedInterestAmt_9.getString());
  FIX::AccruedInterestRate AccruedInterestRate_4;
  AccruedInterestRate_4.setString("63.550000");
  msg.set(AccruedInterestRate_4);
  ExecutionReport_0.insert(AccruedInterestRate_4.getString());
  FIX::AcctIDSource AcctIDSource_6(99);
  msg.set(AcctIDSource_6);
  ExecutionReport_0.insert(AcctIDSource_6.getString());
  FIX::AggressorIndicator AggressorIndicator_0(true);
  msg.set(AggressorIndicator_0);
  ExecutionReport_0.insert(AggressorIndicator_0.getString());
  FIX::AllocID AllocID_10("STRING_868766560");
  msg.set(AllocID_10);
  ExecutionReport_0.insert(AllocID_10.getString());
  FIX::AvgPx AvgPx_5;
  AvgPx_5.setString("15707228");
  msg.set(AvgPx_5);
  ExecutionReport_0.insert(AvgPx_5.getString());
  FIX::BasisFeatureDate BasisFeatureDate_0("LOCALMKTDATE_1771330591");
  msg.set(BasisFeatureDate_0);
  ExecutionReport_0.insert(BasisFeatureDate_0.getString());
  FIX::BasisFeaturePrice BasisFeaturePrice_0;
  BasisFeaturePrice_0.setString("15454322");
  msg.set(BasisFeaturePrice_0);
  ExecutionReport_0.insert(BasisFeaturePrice_0.getString());
  FIX::BookingType BookingType_6(1);
  msg.set(BookingType_6);
  ExecutionReport_0.insert(BookingType_6.getString());
  FIX::BookingUnit BookingUnit_3('0');
  msg.set(BookingUnit_3);
  ExecutionReport_0.insert(BookingUnit_3.getString());
  FIX::CalculatedCcyLastQty CalculatedCcyLastQty_0;
  CalculatedCcyLastQty_0.setString("20315039");
  msg.set(CalculatedCcyLastQty_0);
  ExecutionReport_0.insert(CalculatedCcyLastQty_0.getString());
  FIX::CancellationRights CancellationRights_1('N');
  msg.set(CancellationRights_1);
  ExecutionReport_0.insert(CancellationRights_1.getString());
  FIX::CashMargin CashMargin_3('3');
  msg.set(CashMargin_3);
  ExecutionReport_0.insert(CashMargin_3.getString());
  FIX::ClOrdID ClOrdID_22("STRING_2082918849");
  msg.set(ClOrdID_22);
  ExecutionReport_0.insert(ClOrdID_22.getString());
  FIX::ClOrdLinkID ClOrdLinkID_4("STRING_20576435");
  msg.set(ClOrdLinkID_4);
  ExecutionReport_0.insert(ClOrdLinkID_4.getString());
  FIX::ClearingFeeIndicator ClearingFeeIndicator_7("STRING_H");
  msg.set(ClearingFeeIndicator_7);
  ExecutionReport_0.insert(ClearingFeeIndicator_7.getString());
  FIX::ComplianceID ComplianceID_2("STRING_702823409");
  msg.set(ComplianceID_2);
  ExecutionReport_0.insert(ComplianceID_2.getString());
  FIX::Concession Concession_4;
  Concession_4.setString("2307496");
  msg.set(Concession_4);
  ExecutionReport_0.insert(Concession_4.getString());
  FIX::CopyMsgIndicator CopyMsgIndicator_1(true);
  msg.set(CopyMsgIndicator_1);
  ExecutionReport_0.insert(CopyMsgIndicator_1.getString());
  FIX::CrossID CrossID_2("STRING_632361763");
  msg.set(CrossID_2);
  ExecutionReport_0.insert(CrossID_2.getString());
  FIX::CrossType CrossType_2(1);
  msg.set(CrossType_2);
  ExecutionReport_0.insert(CrossType_2.getString());
  FIX::CumQty CumQty_1;
  CumQty_1.setString("19771966");
  msg.set(CumQty_1);
  ExecutionReport_0.insert(CumQty_1.getString());
  FIX::Currency Currency_20("CAN");
  msg.set(Currency_20);
  ExecutionReport_0.insert(Currency_20.getString());
  FIX::CustDirectedOrder CustDirectedOrder_0(true);
  msg.set(CustDirectedOrder_0);
  ExecutionReport_0.insert(CustDirectedOrder_0.getString());
  FIX::CustOrderCapacity CustOrderCapacity_6(1);
  msg.set(CustOrderCapacity_6);
  ExecutionReport_0.insert(CustOrderCapacity_6.getString());
  FIX::CustOrderHandlingInst CustOrderHandlingInst_0("MULTIPLESTRINGVALUE_FOK");
  msg.set(CustOrderHandlingInst_0);
  ExecutionReport_0.insert(CustOrderHandlingInst_0.getString());
  FIX::DayAvgPx DayAvgPx_0;
  DayAvgPx_0.setString("8006748");
  msg.set(DayAvgPx_0);
  ExecutionReport_0.insert(DayAvgPx_0.getString());
  FIX::DayBookingInst DayBookingInst_3('0');
  msg.set(DayBookingInst_3);
  ExecutionReport_0.insert(DayBookingInst_3.getString());
  FIX::DayCumQty DayCumQty_0;
  DayCumQty_0.setString("932334");
  msg.set(DayCumQty_0);
  ExecutionReport_0.insert(DayCumQty_0.getString());
  FIX::DayOrderQty DayOrderQty_0;
  DayOrderQty_0.setString("20737124");
  msg.set(DayOrderQty_0);
  ExecutionReport_0.insert(DayOrderQty_0.getString());
  FIX::Designation Designation_1("STRING_852604563");
  msg.set(Designation_1);
  ExecutionReport_0.insert(Designation_1.getString());
  FIX::DiscretionPrice DiscretionPrice_0;
  DiscretionPrice_0.setString("4161598");
  msg.set(DiscretionPrice_0);
  ExecutionReport_0.insert(DiscretionPrice_0.getString());
  FIX::DividendYield DividendYield_0;
  DividendYield_0.setString("46.390000");
  msg.set(DividendYield_0);
  ExecutionReport_0.insert(DividendYield_0.getString());
  FIX::EffectiveTime EffectiveTime_1(FIX::UTCTIMESTAMP(15, 41, 59, 8, 4, 2017));
  msg.set(EffectiveTime_1);
  ExecutionReport_0.insert(EffectiveTime_1.getString());
  FIX::EncodedText EncodedText_39("DATA_566895217");
  msg.set(EncodedText_39);
  ExecutionReport_0.insert(EncodedText_39.getString());
  FIX::EncodedTextLen EncodedTextLen_39(223459601);
  msg.set(EncodedTextLen_39);
  ExecutionReport_0.insert(EncodedTextLen_39.getString());
  FIX::EndAccruedInterestAmt EndAccruedInterestAmt_9;
  EndAccruedInterestAmt_9.setString("14340461");
  msg.set(EndAccruedInterestAmt_9);
  ExecutionReport_0.insert(EndAccruedInterestAmt_9.getString());
  FIX::EndCash EndCash_9;
  EndCash_9.setString("5023304");
  msg.set(EndCash_9);
  ExecutionReport_0.insert(EndCash_9.getString());
  FIX::ExDate ExDate_1("LOCALMKTDATE_244036036");
  msg.set(ExDate_1);
  ExecutionReport_0.insert(ExDate_1.getString());
  FIX::ExecID ExecID_23("STRING_792484818");
  msg.set(ExecID_23);
  ExecutionReport_0.insert(ExecID_23.getString());
  FIX::ExecInst ExecInst_1("MULTIPLECHARVALUE_3");
  msg.set(ExecInst_1);
  ExecutionReport_0.insert(ExecInst_1.getString());
  FIX::ExecPriceAdjustment ExecPriceAdjustment_0;
  ExecPriceAdjustment_0.setString("4747856");
  msg.set(ExecPriceAdjustment_0);
  ExecutionReport_0.insert(ExecPriceAdjustment_0.getString());
  FIX::ExecPriceType ExecPriceType_0('B');
  msg.set(ExecPriceType_0);
  ExecutionReport_0.insert(ExecPriceType_0.getString());
  FIX::ExecRefID ExecRefID_0("STRING_1837515590");
  msg.set(ExecRefID_0);
  ExecutionReport_0.insert(ExecRefID_0.getString());
  FIX::ExecRestatementReason ExecRestatementReason_0(2);
  msg.set(ExecRestatementReason_0);
  ExecutionReport_0.insert(ExecRestatementReason_0.getString());
  FIX::ExecType ExecType_0('F');
  msg.set(ExecType_0);
  ExecutionReport_0.insert(ExecType_0.getString());
  FIX::ExecValuationPoint ExecValuationPoint_0(FIX::UTCTIMESTAMP(2, 14, 5, 4, 7, 2005));
  msg.set(ExecValuationPoint_0);
  ExecutionReport_0.insert(ExecValuationPoint_0.getString());
  FIX::ExpireDate ExpireDate_2("LOCALMKTDATE_870687027");
  msg.set(ExpireDate_2);
  ExecutionReport_0.insert(ExpireDate_2.getString());
  FIX::ExpireTime ExpireTime_3(FIX::UTCTIMESTAMP(8, 14, 22, 4, 10, 2003));
  msg.set(ExpireTime_3);
  ExecutionReport_0.insert(ExpireTime_3.getString());
  FIX::GTBookingInst GTBookingInst_1(2);
  msg.set(GTBookingInst_1);
  ExecutionReport_0.insert(GTBookingInst_1.getString());
  FIX::GrossTradeAmt GrossTradeAmt_4;
  GrossTradeAmt_4.setString("11071645");
  msg.set(GrossTradeAmt_4);
  ExecutionReport_0.insert(GrossTradeAmt_4.getString());
  FIX::HandlInst HandlInst_1('2');
  msg.set(HandlInst_1);
  ExecutionReport_0.insert(HandlInst_1.getString());
  FIX::HostCrossID HostCrossID_2("STRING_1735651186");
  msg.set(HostCrossID_2);
  ExecutionReport_0.insert(HostCrossID_2.getString());
  FIX::InterestAtMaturity InterestAtMaturity_4;
  InterestAtMaturity_4.setString("16740597");
  msg.set(InterestAtMaturity_4);
  ExecutionReport_0.insert(InterestAtMaturity_4.getString());
  FIX::LastCapacity LastCapacity_6('1');
  msg.set(LastCapacity_6);
  ExecutionReport_0.insert(LastCapacity_6.getString());
  FIX::LastForwardPoints LastForwardPoints_0;
  LastForwardPoints_0.setString("10222137");
  msg.set(LastForwardPoints_0);
  ExecutionReport_0.insert(LastForwardPoints_0.getString());
  FIX::LastForwardPoints2 LastForwardPoints2_0;
  LastForwardPoints2_0.setString("289064");
  msg.set(LastForwardPoints2_0);
  ExecutionReport_0.insert(LastForwardPoints2_0.getString());
  FIX::LastFragment LastFragment_5(true);
  msg.set(LastFragment_5);
  ExecutionReport_0.insert(LastFragment_5.getString());
  FIX::LastLiquidityInd LastLiquidityInd_0(3);
  msg.set(LastLiquidityInd_0);
  ExecutionReport_0.insert(LastLiquidityInd_0.getString());
  FIX::LastMkt LastMkt_5("EXCHANGE_1234060325");
  msg.set(LastMkt_5);
  ExecutionReport_0.insert(LastMkt_5.getString());
  FIX::LastParPx LastParPx_7;
  LastParPx_7.setString("7414130");
  msg.set(LastParPx_7);
  ExecutionReport_0.insert(LastParPx_7.getString());
  FIX::LastPx LastPx_8;
  LastPx_8.setString("16843586");
  msg.set(LastPx_8);
  ExecutionReport_0.insert(LastPx_8.getString());
  FIX::LastQty LastQty_8;
  LastQty_8.setString("9240922");
  msg.set(LastQty_8);
  ExecutionReport_0.insert(LastQty_8.getString());
  FIX::LastRptRequested LastRptRequested_2(false);
  msg.set(LastRptRequested_2);
  ExecutionReport_0.insert(LastRptRequested_2.getString());
  FIX::LastSpotRate LastSpotRate_0;
  LastSpotRate_0.setString("13837316");
  msg.set(LastSpotRate_0);
  ExecutionReport_0.insert(LastSpotRate_0.getString());
  FIX::LastSwapPoints LastSwapPoints_0;
  LastSwapPoints_0.setString("17822762");
  msg.set(LastSwapPoints_0);
  ExecutionReport_0.insert(LastSwapPoints_0.getString());
  FIX::LeavesQty LeavesQty_0;
  LeavesQty_0.setString("8059885");
  msg.set(LeavesQty_0);
  ExecutionReport_0.insert(LeavesQty_0.getString());
  FIX::ListID ListID_16("STRING_1678340014");
  msg.set(ListID_16);
  ExecutionReport_0.insert(ListID_16.getString());
  FIX::LotType LotType_10('3');
  msg.set(LotType_10);
  ExecutionReport_0.insert(LotType_10.getString());
  FIX::ManualOrderIndicator ManualOrderIndicator_0(true);
  msg.set(ManualOrderIndicator_0);
  ExecutionReport_0.insert(ManualOrderIndicator_0.getString());
  FIX::MassStatusReqID MassStatusReqID_0("STRING_626139536");
  msg.set(MassStatusReqID_0);
  ExecutionReport_0.insert(MassStatusReqID_0.getString());
  FIX::MatchIncrement MatchIncrement_1;
  MatchIncrement_1.setString("2824045");
  msg.set(MatchIncrement_1);
  ExecutionReport_0.insert(MatchIncrement_1.getString());
  FIX::MatchType MatchType_33("STRING_M4");
  msg.set(MatchType_33);
  ExecutionReport_0.insert(MatchType_33.getString());
  FIX::MaxFloor MaxFloor_1;
  MaxFloor_1.setString("16476515");
  msg.set(MaxFloor_1);
  ExecutionReport_0.insert(MaxFloor_1.getString());
  FIX::MaxPriceLevels MaxPriceLevels_1(1638435951);
  msg.set(MaxPriceLevels_1);
  ExecutionReport_0.insert(MaxPriceLevels_1.getString());
  FIX::MaxShow MaxShow_1;
  MaxShow_1.setString("15934923");
  msg.set(MaxShow_1);
  ExecutionReport_0.insert(MaxShow_1.getString());
  FIX::MinQty MinQty_1;
  MinQty_1.setString("17681044");
  msg.set(MinQty_1);
  ExecutionReport_0.insert(MinQty_1.getString());
  FIX::MoneyLaunderingStatus MoneyLaunderingStatus_1('Y');
  msg.set(MoneyLaunderingStatus_1);
  ExecutionReport_0.insert(MoneyLaunderingStatus_1.getString());
  FIX::MultiLegReportingType MultiLegReportingType_3('1');
  msg.set(MultiLegReportingType_3);
  ExecutionReport_0.insert(MultiLegReportingType_3.getString());
  FIX::NetMoney NetMoney_4;
  NetMoney_4.setString("4107376");
  msg.set(NetMoney_4);
  ExecutionReport_0.insert(NetMoney_4.getString());
  FIX::NumDaysInterest NumDaysInterest_4(1941763718);
  msg.set(NumDaysInterest_4);
  ExecutionReport_0.insert(NumDaysInterest_4.getString());
  FIX::OrdRejReason OrdRejReason_0(1);
  msg.set(OrdRejReason_0);
  ExecutionReport_0.insert(OrdRejReason_0.getString());
  FIX::OrdStatus OrdStatus_0('1');
  msg.set(OrdStatus_0);
  ExecutionReport_0.insert(OrdStatus_0.getString());
  FIX::OrdStatusReqID OrdStatusReqID_0("STRING_1529931257");
  msg.set(OrdStatusReqID_0);
  ExecutionReport_0.insert(OrdStatusReqID_0.getString());
  FIX::OrdType OrdType_25('C');
  msg.set(OrdType_25);
  ExecutionReport_0.insert(OrdType_25.getString());
  FIX::OrderCapacity OrderCapacity_4('W');
  msg.set(OrderCapacity_4);
  ExecutionReport_0.insert(OrderCapacity_4.getString());
  FIX::OrderCategory OrderCategory_0('5');
  msg.set(OrderCategory_0);
  ExecutionReport_0.insert(OrderCategory_0.getString());
  FIX::OrderHandlingInstSource OrderHandlingInstSource_0(1);
  msg.set(OrderHandlingInstSource_0);
  ExecutionReport_0.insert(OrderHandlingInstSource_0.getString());
  FIX::OrderID OrderID_21("STRING_499088143");
  msg.set(OrderID_21);
  ExecutionReport_0.insert(OrderID_21.getString());
  FIX::OrderQty2 OrderQty2_0;
  OrderQty2_0.setString("718762");
  msg.set(OrderQty2_0);
  ExecutionReport_0.insert(OrderQty2_0.getString());
  FIX::OrderRestrictions OrderRestrictions_4("MULTIPLECHARVALUE_9");
  msg.set(OrderRestrictions_4);
  ExecutionReport_0.insert(OrderRestrictions_4.getString());
  FIX::OrigClOrdID OrigClOrdID_4("STRING_1240501217");
  msg.set(OrigClOrdID_4);
  ExecutionReport_0.insert(OrigClOrdID_4.getString());
  FIX::OrigCrossID OrigCrossID_2("STRING_1756234826");
  msg.set(OrigCrossID_2);
  ExecutionReport_0.insert(OrigCrossID_2.getString());
  FIX::ParticipationRate ParticipationRate_1;
  ParticipationRate_1.setString("42.380000");
  msg.set(ParticipationRate_1);
  ExecutionReport_0.insert(ParticipationRate_1.getString());
  FIX::PeggedPrice PeggedPrice_0;
  PeggedPrice_0.setString("8708477");
  msg.set(PeggedPrice_0);
  ExecutionReport_0.insert(PeggedPrice_0.getString());
  FIX::PeggedRefPrice PeggedRefPrice_0;
  PeggedRefPrice_0.setString("9924828");
  msg.set(PeggedRefPrice_0);
  ExecutionReport_0.insert(PeggedRefPrice_0.getString());
  FIX::PositionEffect PositionEffect_6('R');
  msg.set(PositionEffect_6);
  ExecutionReport_0.insert(PositionEffect_6.getString());
  FIX::PreTradeAnonymity PreTradeAnonymity_3(false);
  msg.set(PreTradeAnonymity_3);
  ExecutionReport_0.insert(PreTradeAnonymity_3.getString());
  FIX::PreallocMethod PreallocMethod_3('0');
  msg.set(PreallocMethod_3);
  ExecutionReport_0.insert(PreallocMethod_3.getString());
  FIX::Price Price_10;
  Price_10.setString("21048682");
  msg.set(Price_10);
  ExecutionReport_0.insert(Price_10.getString());
  FIX::PriceDelta PriceDelta_0;
  PriceDelta_0.setString("11127947");
  msg.set(PriceDelta_0);
  ExecutionReport_0.insert(PriceDelta_0.getString());
  FIX::PriceImprovement PriceImprovement_0;
  PriceImprovement_0.setString("11494787");
  msg.set(PriceImprovement_0);
  ExecutionReport_0.insert(PriceImprovement_0.getString());
  FIX::PriceProtectionScope PriceProtectionScope_1('0');
  msg.set(PriceProtectionScope_1);
  ExecutionReport_0.insert(PriceProtectionScope_1.getString());
  FIX::PriceType PriceType_20(11);
  msg.set(PriceType_20);
  ExecutionReport_0.insert(PriceType_20.getString());
  FIX::PriorityIndicator PriorityIndicator_0(1);
  msg.set(PriorityIndicator_0);
  ExecutionReport_0.insert(PriorityIndicator_0.getString());
  FIX::QtyType QtyType_14(1);
  msg.set(QtyType_14);
  ExecutionReport_0.insert(QtyType_14.getString());
  FIX::QuoteRespID QuoteRespID_0("STRING_865448846");
  msg.set(QuoteRespID_0);
  ExecutionReport_0.insert(QuoteRespID_0.getString());
  FIX::ReceivedDeptID ReceivedDeptID_0("STRING_270267419");
  msg.set(ReceivedDeptID_0);
  ExecutionReport_0.insert(ReceivedDeptID_0.getString());
  FIX::RegistID RegistID_1("STRING_1331853611");
  msg.set(RegistID_1);
  ExecutionReport_0.insert(RegistID_1.getString());
  FIX::ReportToExch ReportToExch_0(true);
  msg.set(ReportToExch_0);
  ExecutionReport_0.insert(ReportToExch_0.getString());
  FIX::RiskFreeRate RiskFreeRate_0;
  RiskFreeRate_0.setString("6810050");
  msg.set(RiskFreeRate_0);
  ExecutionReport_0.insert(RiskFreeRate_0.getString());
  FIX::SecondaryClOrdID SecondaryClOrdID_20("STRING_1126133682");
  msg.set(SecondaryClOrdID_20);
  ExecutionReport_0.insert(SecondaryClOrdID_20.getString());
  FIX::SecondaryExecID SecondaryExecID_6("STRING_1713209767");
  msg.set(SecondaryExecID_6);
  ExecutionReport_0.insert(SecondaryExecID_6.getString());
  FIX::SecondaryOrderID SecondaryOrderID_18("STRING_890874494");
  msg.set(SecondaryOrderID_18);
  ExecutionReport_0.insert(SecondaryOrderID_18.getString());
  FIX::SettlCurrAmt SettlCurrAmt_5;
  SettlCurrAmt_5.setString("5085812");
  msg.set(SettlCurrAmt_5);
  ExecutionReport_0.insert(SettlCurrAmt_5.getString());
  FIX::SettlCurrFxRate SettlCurrFxRate_5;
  SettlCurrFxRate_5.setString("697649");
  msg.set(SettlCurrFxRate_5);
  ExecutionReport_0.insert(SettlCurrFxRate_5.getString());
  FIX::SettlCurrFxRateCalc SettlCurrFxRateCalc_5('D');
  msg.set(SettlCurrFxRateCalc_5);
  ExecutionReport_0.insert(SettlCurrFxRateCalc_5.getString());
  FIX::SettlCurrency SettlCurrency_8("EUR");
  msg.set(SettlCurrency_8);
  ExecutionReport_0.insert(SettlCurrency_8.getString());
  FIX::SettlDate SettlDate_17("LOCALMKTDATE_1622423397");
  msg.set(SettlDate_17);
  ExecutionReport_0.insert(SettlDate_17.getString());
  FIX::SettlDate2 SettlDate2_0("LOCALMKTDATE_985118828");
  msg.set(SettlDate2_0);
  ExecutionReport_0.insert(SettlDate2_0.getString());
  FIX::SettlType SettlType_11("STRING_2");
  msg.set(SettlType_11);
  ExecutionReport_0.insert(SettlType_11.getString());
  FIX::Side Side_21('7');
  msg.set(Side_21);
  ExecutionReport_0.insert(Side_21.getString());
  FIX::SolicitedFlag SolicitedFlag_3(false);
  msg.set(SolicitedFlag_3);
  ExecutionReport_0.insert(SolicitedFlag_3.getString());
  FIX::StartCash StartCash_9;
  StartCash_9.setString("7658464");
  msg.set(StartCash_9);
  ExecutionReport_0.insert(StartCash_9.getString());
  FIX::StopPx StopPx_1;
  StopPx_1.setString("15862887");
  msg.set(StopPx_1);
  ExecutionReport_0.insert(StopPx_1.getString());
  FIX::TargetStrategy TargetStrategy_1(3);
  msg.set(TargetStrategy_1);
  ExecutionReport_0.insert(TargetStrategy_1.getString());
  FIX::TargetStrategyParameters TargetStrategyParameters_1("STRING_944253252");
  msg.set(TargetStrategyParameters_1);
  ExecutionReport_0.insert(TargetStrategyParameters_1.getString());
  FIX::TargetStrategyPerformance TargetStrategyPerformance_0;
  TargetStrategyPerformance_0.setString("11156413");
  msg.set(TargetStrategyPerformance_0);
  ExecutionReport_0.insert(TargetStrategyPerformance_0.getString());
  FIX::Text Text_39("STRING_2109692050");
  msg.set(Text_39);
  ExecutionReport_0.insert(Text_39.getString());
  FIX::TimeBracket TimeBracket_0("STRING_901637849");
  msg.set(TimeBracket_0);
  ExecutionReport_0.insert(TimeBracket_0.getString());
  FIX::TimeInForce TimeInForce_24('1');
  msg.set(TimeInForce_24);
  ExecutionReport_0.insert(TimeInForce_24.getString());
  FIX::TimeToExpiration TimeToExpiration_0;
  TimeToExpiration_0.setString("11116871");
  msg.set(TimeToExpiration_0);
  ExecutionReport_0.insert(TimeToExpiration_0.getString());
  FIX::TotNoFills TotNoFills_0(1141427022);
  msg.set(TotNoFills_0);
  ExecutionReport_0.insert(TotNoFills_0.getString());
  FIX::TotNumReports TotNumReports_2(1500392666);
  msg.set(TotNumReports_2);
  ExecutionReport_0.insert(TotNumReports_2.getString());
  FIX::TotalTakedown TotalTakedown_4;
  TotalTakedown_4.setString("17613337");
  msg.set(TotalTakedown_4);
  ExecutionReport_0.insert(TotalTakedown_4.getString());
  FIX::TradeDate TradeDate_13("LOCALMKTDATE_872168498");
  msg.set(TradeDate_13);
  ExecutionReport_0.insert(TradeDate_13.getString());
  FIX::TradeOriginationDate TradeOriginationDate_7("LOCALMKTDATE_218357864");
  msg.set(TradeOriginationDate_7);
  ExecutionReport_0.insert(TradeOriginationDate_7.getString());
  FIX::TradedFlatSwitch TradedFlatSwitch_0(false);
  msg.set(TradedFlatSwitch_0);
  ExecutionReport_0.insert(TradedFlatSwitch_0.getString());
  FIX::TradingSessionID TradingSessionID_31("STRING_6");
  msg.set(TradingSessionID_31);
  ExecutionReport_0.insert(TradingSessionID_31.getString());
  FIX::TradingSessionSubID TradingSessionSubID_31("STRING_3");
  msg.set(TradingSessionSubID_31);
  ExecutionReport_0.insert(TradingSessionSubID_31.getString());
  FIX::TransBkdTime TransBkdTime_1(FIX::UTCTIMESTAMP(23, 36, 11, 10, 11, 2004));
  msg.set(TransBkdTime_1);
  ExecutionReport_0.insert(TransBkdTime_1.getString());
  FIX::TransactTime TransactTime_18(FIX::UTCTIMESTAMP(6, 13, 31, 8, 1, 2016));
  msg.set(TransactTime_18);
  ExecutionReport_0.insert(TransactTime_18.getString());
  FIX::TrdMatchID TrdMatchID_0("STRING_32901104");
  msg.set(TrdMatchID_0);
  ExecutionReport_0.insert(TrdMatchID_0.getString());
  FIX::UnderlyingLastPx UnderlyingLastPx_0;
  UnderlyingLastPx_0.setString("610345");
  msg.set(UnderlyingLastPx_0);
  ExecutionReport_0.insert(UnderlyingLastPx_0.getString());
  FIX::UnderlyingLastQty UnderlyingLastQty_0;
  UnderlyingLastQty_0.setString("14748704");
  msg.set(UnderlyingLastQty_0);
  ExecutionReport_0.insert(UnderlyingLastQty_0.getString());
  FIX::Volatility Volatility_0;
  Volatility_0.setString("9771543");
  msg.set(Volatility_0);
  ExecutionReport_0.insert(Volatility_0.getString());
  FIX::WorkingIndicator WorkingIndicator_0(true);
  msg.set(WorkingIndicator_0);
  ExecutionReport_0.insert(WorkingIndicator_0.getString());
  all_values.push_back(ExecutionReport_0);

  all_compo_names.insert("ExecutionReport");

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_4;
  FIX::ApplID ApplID_4("STRING_1437078838");
  msg.set(ApplID_4);
  ApplicationSequenceControl_4.insert(ApplID_4.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_4(1878792206);
  msg.set(ApplLastSeqNum_4);
  ApplicationSequenceControl_4.insert(ApplLastSeqNum_4.getString());
  FIX::ApplResendFlag ApplResendFlag_4(false);
  msg.set(ApplResendFlag_4);
  ApplicationSequenceControl_4.insert(ApplResendFlag_4.getString());
  FIX::ApplSeqNum ApplSeqNum_4(401282332);
  msg.set(ApplSeqNum_4);
  ApplicationSequenceControl_4.insert(ApplSeqNum_4.getString());
  all_values.push_back(ApplicationSequenceControl_4);
  all_compo_names.insert("ApplicationSequenceControl");

  // CommissionData
  multiset<string> CommissionData_11;
  FIX::CommCurrency CommCurrency_11("CAN");
  msg.set(CommCurrency_11);
  CommissionData_11.insert(CommCurrency_11.getString());
  FIX::CommType CommType_11('1');
  msg.set(CommType_11);
  CommissionData_11.insert(CommType_11.getString());
  FIX::Commission Commission_11;
  Commission_11.setString("17449040");
  msg.set(Commission_11);
  CommissionData_11.insert(Commission_11.getString());
  FIX::FundRenewWaiv FundRenewWaiv_11('N');
  msg.set(FundRenewWaiv_11);
  CommissionData_11.insert(FundRenewWaiv_11.getString());
  all_values.push_back(CommissionData_11);
  all_compo_names.insert("CommissionData");

  // ContAmtGrp
  // Group ContAmtGrp.NoContAmts
  {
    FIX50SP2::ExecutionReport::NoContAmts noContAmts_0_0;
    // ContAmtGrp.NoContAmts
    multiset<string> ContAmtGrp_NoContAmts_0;
    FIX::ContAmtCurr ContAmtCurr_0("GBP");
    noContAmts_0_0.set(ContAmtCurr_0);
    ContAmtGrp_NoContAmts_0.insert(ContAmtCurr_0.getString());
    FIX::ContAmtType ContAmtType_0(1);
    noContAmts_0_0.set(ContAmtType_0);
    ContAmtGrp_NoContAmts_0.insert(ContAmtType_0.getString());
    FIX::ContAmtValue ContAmtValue_0;
    ContAmtValue_0.setString("8366310");
    noContAmts_0_0.set(ContAmtValue_0);
    ContAmtGrp_NoContAmts_0.insert(ContAmtValue_0.getString());
    all_values.push_back(ContAmtGrp_NoContAmts_0);
    all_compo_names.insert("ContAmtGrp.NoContAmts");

    msg.addGroup(noContAmts_0_0);
  }
  // ContraGrp
  // Group ContraGrp.NoContraBrokers
  {
    FIX50SP2::ExecutionReport::NoContraBrokers noContraBrokers_0_0;
    // ContraGrp.NoContraBrokers
    multiset<string> ContraGrp_NoContraBrokers_0;
    FIX::ContraBroker ContraBroker_0("STRING_1920369626");
    noContraBrokers_0_0.set(ContraBroker_0);
    ContraGrp_NoContraBrokers_0.insert(ContraBroker_0.getString());
    FIX::ContraLegRefID ContraLegRefID_0("STRING_380400821");
    noContraBrokers_0_0.set(ContraLegRefID_0);
    ContraGrp_NoContraBrokers_0.insert(ContraLegRefID_0.getString());
    FIX::ContraTradeQty ContraTradeQty_0;
    ContraTradeQty_0.setString("7449435");
    noContraBrokers_0_0.set(ContraTradeQty_0);
    ContraGrp_NoContraBrokers_0.insert(ContraTradeQty_0.getString());
    FIX::ContraTradeTime ContraTradeTime_0(FIX::UTCTIMESTAMP(16, 29, 40, 12, 6, 2010));
    noContraBrokers_0_0.set(ContraTradeTime_0);
    ContraGrp_NoContraBrokers_0.insert(ContraTradeTime_0.getString());
    FIX::ContraTrader ContraTrader_0("STRING_20578398");
    noContraBrokers_0_0.set(ContraTrader_0);
    ContraGrp_NoContraBrokers_0.insert(ContraTrader_0.getString());
    all_values.push_back(ContraGrp_NoContraBrokers_0);
    all_compo_names.insert("ContraGrp.NoContraBrokers");

    msg.addGroup(noContraBrokers_0_0);
  }
  // DiscretionInstructions
  multiset<string> DiscretionInstructions_1;
  FIX::DiscretionInst DiscretionInst_1('5');
  msg.set(DiscretionInst_1);
  DiscretionInstructions_1.insert(DiscretionInst_1.getString());
  FIX::DiscretionLimitType DiscretionLimitType_1(2);
  msg.set(DiscretionLimitType_1);
  DiscretionInstructions_1.insert(DiscretionLimitType_1.getString());
  FIX::DiscretionMoveType DiscretionMoveType_1(0);
  msg.set(DiscretionMoveType_1);
  DiscretionInstructions_1.insert(DiscretionMoveType_1.getString());
  FIX::DiscretionOffsetType DiscretionOffsetType_1(2);
  msg.set(DiscretionOffsetType_1);
  DiscretionInstructions_1.insert(DiscretionOffsetType_1.getString());
  FIX::DiscretionOffsetValue DiscretionOffsetValue_1;
  DiscretionOffsetValue_1.setString("19714629");
  msg.set(DiscretionOffsetValue_1);
  DiscretionInstructions_1.insert(DiscretionOffsetValue_1.getString());
  FIX::DiscretionRoundDirection DiscretionRoundDirection_1(1);
  msg.set(DiscretionRoundDirection_1);
  DiscretionInstructions_1.insert(DiscretionRoundDirection_1.getString());
  FIX::DiscretionScope DiscretionScope_1(1);
  msg.set(DiscretionScope_1);
  DiscretionInstructions_1.insert(DiscretionScope_1.getString());
  all_values.push_back(DiscretionInstructions_1);
  all_compo_names.insert("DiscretionInstructions");

  // DisplayInstruction
  multiset<string> DisplayInstruction_1;
  FIX::DisplayHighQty DisplayHighQty_1;
  DisplayHighQty_1.setString("10816076");
  msg.set(DisplayHighQty_1);
  DisplayInstruction_1.insert(DisplayHighQty_1.getString());
  FIX::DisplayLowQty DisplayLowQty_1;
  DisplayLowQty_1.setString("11863263");
  msg.set(DisplayLowQty_1);
  DisplayInstruction_1.insert(DisplayLowQty_1.getString());
  FIX::DisplayMethod DisplayMethod_1('1');
  msg.set(DisplayMethod_1);
  DisplayInstruction_1.insert(DisplayMethod_1.getString());
  FIX::DisplayMinIncr DisplayMinIncr_1;
  DisplayMinIncr_1.setString("16921450");
  msg.set(DisplayMinIncr_1);
  DisplayInstruction_1.insert(DisplayMinIncr_1.getString());
  FIX::DisplayQty DisplayQty_1;
  DisplayQty_1.setString("12014587");
  msg.set(DisplayQty_1);
  DisplayInstruction_1.insert(DisplayQty_1.getString());
  FIX::DisplayWhen DisplayWhen_1('1');
  msg.set(DisplayWhen_1);
  DisplayInstruction_1.insert(DisplayWhen_1.getString());
  FIX::RefreshQty RefreshQty_1;
  RefreshQty_1.setString("3735566");
  msg.set(RefreshQty_1);
  DisplayInstruction_1.insert(RefreshQty_1.getString());
  FIX::SecondaryDisplayQty SecondaryDisplayQty_1;
  SecondaryDisplayQty_1.setString("11007087");
  msg.set(SecondaryDisplayQty_1);
  DisplayInstruction_1.insert(SecondaryDisplayQty_1.getString());
  all_values.push_back(DisplayInstruction_1);
  all_compo_names.insert("DisplayInstruction");

  // FillsGrp
  // Group FillsGrp.NoFills
  {
    FIX50SP2::ExecutionReport::NoFills noFills_0_0;
    // FillsGrp.NoFills
    multiset<string> FillsGrp_NoFills_0;
    FIX::FillExecID FillExecID_0("STRING_9073195");
    noFills_0_0.set(FillExecID_0);
    FillsGrp_NoFills_0.insert(FillExecID_0.getString());
    FIX::FillLiquidityInd FillLiquidityInd_0(1565081257);
    noFills_0_0.set(FillLiquidityInd_0);
    FillsGrp_NoFills_0.insert(FillLiquidityInd_0.getString());
    FIX::FillPx FillPx_0;
    FillPx_0.setString("7589306");
    noFills_0_0.set(FillPx_0);
    FillsGrp_NoFills_0.insert(FillPx_0.getString());
    FIX::FillQty FillQty_0;
    FillQty_0.setString("1644207");
    noFills_0_0.set(FillQty_0);
    FillsGrp_NoFills_0.insert(FillQty_0.getString());
    all_values.push_back(FillsGrp_NoFills_0);
    all_compo_names.insert("FillsGrp.NoFills");

    // NestedParties4
    // Group NestedParties4.NoNested4PartyIDs
    {
      FIX50SP2::ExecutionReport::NoFills::NoNested4PartyIDs noNested4PartyIDs_0_1_0;
      // NestedParties4.NoNested4PartyIDs
      multiset<string> NestedParties4_NoNested4PartyIDs_0;
      FIX::Nested4PartyID Nested4PartyID_0("STRING_1139331486");
      noNested4PartyIDs_0_1_0.set(Nested4PartyID_0);
      NestedParties4_NoNested4PartyIDs_0.insert(Nested4PartyID_0.getString());
      FIX::Nested4PartyIDSource Nested4PartyIDSource_0('9');
      noNested4PartyIDs_0_1_0.set(Nested4PartyIDSource_0);
      NestedParties4_NoNested4PartyIDs_0.insert(Nested4PartyIDSource_0.getString());
      FIX::Nested4PartyRole Nested4PartyRole_0(1542701911);
      noNested4PartyIDs_0_1_0.set(Nested4PartyRole_0);
      NestedParties4_NoNested4PartyIDs_0.insert(Nested4PartyRole_0.getString());
      all_values.push_back(NestedParties4_NoNested4PartyIDs_0);
      all_compo_names.insert("NestedParties4.NoNested4PartyIDs");

      // NstdPtys4SubGrp
      // Group NstdPtys4SubGrp.NoNested4PartySubIDs
      {
        FIX50SP2::ExecutionReport::NoFills::NoNested4PartyIDs::NoNested4PartySubIDs noNested4PartySubIDs_0_0_2_0;
        // NstdPtys4SubGrp.NoNested4PartySubIDs
        multiset<string> NstdPtys4SubGrp_NoNested4PartySubIDs_0;
        FIX::Nested4PartySubID Nested4PartySubID_0("STRING_699130288");
        noNested4PartySubIDs_0_0_2_0.set(Nested4PartySubID_0);
        NstdPtys4SubGrp_NoNested4PartySubIDs_0.insert(Nested4PartySubID_0.getString());
        FIX::Nested4PartySubIDType Nested4PartySubIDType_0(1654225031);
        noNested4PartySubIDs_0_0_2_0.set(Nested4PartySubIDType_0);
        NstdPtys4SubGrp_NoNested4PartySubIDs_0.insert(Nested4PartySubIDType_0.getString());
        all_values.push_back(NstdPtys4SubGrp_NoNested4PartySubIDs_0);
        all_compo_names.insert("NstdPtys4SubGrp.NoNested4PartySubIDs");

        noNested4PartyIDs_0_1_0.addGroup(noNested4PartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoFills::NoNested4PartyIDs::NoNested4PartySubIDs noNested4PartySubIDs_0_0_2_1;
        // NstdPtys4SubGrp.NoNested4PartySubIDs
        multiset<string> NstdPtys4SubGrp_NoNested4PartySubIDs_1;
        FIX::Nested4PartySubID Nested4PartySubID_1("STRING_2108805518");
        noNested4PartySubIDs_0_0_2_1.set(Nested4PartySubID_1);
        NstdPtys4SubGrp_NoNested4PartySubIDs_1.insert(Nested4PartySubID_1.getString());
        FIX::Nested4PartySubIDType Nested4PartySubIDType_1(1903434645);
        noNested4PartySubIDs_0_0_2_1.set(Nested4PartySubIDType_1);
        NstdPtys4SubGrp_NoNested4PartySubIDs_1.insert(Nested4PartySubIDType_1.getString());
        all_values.push_back(NstdPtys4SubGrp_NoNested4PartySubIDs_1);
        all_compo_names.insert("NstdPtys4SubGrp.NoNested4PartySubIDs");

        noNested4PartyIDs_0_1_0.addGroup(noNested4PartySubIDs_0_0_2_1);
      }
      noFills_0_0.addGroup(noNested4PartyIDs_0_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoFills::NoNested4PartyIDs noNested4PartyIDs_0_1_1;
      // NestedParties4.NoNested4PartyIDs
      multiset<string> NestedParties4_NoNested4PartyIDs_1;
      FIX::Nested4PartyID Nested4PartyID_1("STRING_240493916");
      noNested4PartyIDs_0_1_1.set(Nested4PartyID_1);
      NestedParties4_NoNested4PartyIDs_1.insert(Nested4PartyID_1.getString());
      FIX::Nested4PartyIDSource Nested4PartyIDSource_1('2');
      noNested4PartyIDs_0_1_1.set(Nested4PartyIDSource_1);
      NestedParties4_NoNested4PartyIDs_1.insert(Nested4PartyIDSource_1.getString());
      FIX::Nested4PartyRole Nested4PartyRole_1(993156458);
      noNested4PartyIDs_0_1_1.set(Nested4PartyRole_1);
      NestedParties4_NoNested4PartyIDs_1.insert(Nested4PartyRole_1.getString());
      all_values.push_back(NestedParties4_NoNested4PartyIDs_1);
      all_compo_names.insert("NestedParties4.NoNested4PartyIDs");

      // NstdPtys4SubGrp
      // Group NstdPtys4SubGrp.NoNested4PartySubIDs
      {
        FIX50SP2::ExecutionReport::NoFills::NoNested4PartyIDs::NoNested4PartySubIDs noNested4PartySubIDs_0_1_2_0;
        // NstdPtys4SubGrp.NoNested4PartySubIDs
        multiset<string> NstdPtys4SubGrp_NoNested4PartySubIDs_2;
        FIX::Nested4PartySubID Nested4PartySubID_2("STRING_1477349103");
        noNested4PartySubIDs_0_1_2_0.set(Nested4PartySubID_2);
        NstdPtys4SubGrp_NoNested4PartySubIDs_2.insert(Nested4PartySubID_2.getString());
        FIX::Nested4PartySubIDType Nested4PartySubIDType_2(1060032628);
        noNested4PartySubIDs_0_1_2_0.set(Nested4PartySubIDType_2);
        NstdPtys4SubGrp_NoNested4PartySubIDs_2.insert(Nested4PartySubIDType_2.getString());
        all_values.push_back(NstdPtys4SubGrp_NoNested4PartySubIDs_2);
        all_compo_names.insert("NstdPtys4SubGrp.NoNested4PartySubIDs");

        noNested4PartyIDs_0_1_1.addGroup(noNested4PartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoFills::NoNested4PartyIDs::NoNested4PartySubIDs noNested4PartySubIDs_0_1_2_1;
        // NstdPtys4SubGrp.NoNested4PartySubIDs
        multiset<string> NstdPtys4SubGrp_NoNested4PartySubIDs_3;
        FIX::Nested4PartySubID Nested4PartySubID_3("STRING_859260258");
        noNested4PartySubIDs_0_1_2_1.set(Nested4PartySubID_3);
        NstdPtys4SubGrp_NoNested4PartySubIDs_3.insert(Nested4PartySubID_3.getString());
        FIX::Nested4PartySubIDType Nested4PartySubIDType_3(114909480);
        noNested4PartySubIDs_0_1_2_1.set(Nested4PartySubIDType_3);
        NstdPtys4SubGrp_NoNested4PartySubIDs_3.insert(Nested4PartySubIDType_3.getString());
        all_values.push_back(NstdPtys4SubGrp_NoNested4PartySubIDs_3);
        all_compo_names.insert("NstdPtys4SubGrp.NoNested4PartySubIDs");

        noNested4PartyIDs_0_1_1.addGroup(noNested4PartySubIDs_0_1_2_1);
      }
      noFills_0_0.addGroup(noNested4PartyIDs_0_1_1);
    }
    {
      FIX50SP2::ExecutionReport::NoFills::NoNested4PartyIDs noNested4PartyIDs_0_1_2;
      // NestedParties4.NoNested4PartyIDs
      multiset<string> NestedParties4_NoNested4PartyIDs_2;
      FIX::Nested4PartyID Nested4PartyID_2("STRING_858217356");
      noNested4PartyIDs_0_1_2.set(Nested4PartyID_2);
      NestedParties4_NoNested4PartyIDs_2.insert(Nested4PartyID_2.getString());
      FIX::Nested4PartyIDSource Nested4PartyIDSource_2('1');
      noNested4PartyIDs_0_1_2.set(Nested4PartyIDSource_2);
      NestedParties4_NoNested4PartyIDs_2.insert(Nested4PartyIDSource_2.getString());
      FIX::Nested4PartyRole Nested4PartyRole_2(1301235837);
      noNested4PartyIDs_0_1_2.set(Nested4PartyRole_2);
      NestedParties4_NoNested4PartyIDs_2.insert(Nested4PartyRole_2.getString());
      all_values.push_back(NestedParties4_NoNested4PartyIDs_2);
      all_compo_names.insert("NestedParties4.NoNested4PartyIDs");

      // NstdPtys4SubGrp
      // Group NstdPtys4SubGrp.NoNested4PartySubIDs
      {
        FIX50SP2::ExecutionReport::NoFills::NoNested4PartyIDs::NoNested4PartySubIDs noNested4PartySubIDs_0_2_2_0;
        // NstdPtys4SubGrp.NoNested4PartySubIDs
        multiset<string> NstdPtys4SubGrp_NoNested4PartySubIDs_4;
        FIX::Nested4PartySubID Nested4PartySubID_4("STRING_1485529344");
        noNested4PartySubIDs_0_2_2_0.set(Nested4PartySubID_4);
        NstdPtys4SubGrp_NoNested4PartySubIDs_4.insert(Nested4PartySubID_4.getString());
        FIX::Nested4PartySubIDType Nested4PartySubIDType_4(355210972);
        noNested4PartySubIDs_0_2_2_0.set(Nested4PartySubIDType_4);
        NstdPtys4SubGrp_NoNested4PartySubIDs_4.insert(Nested4PartySubIDType_4.getString());
        all_values.push_back(NstdPtys4SubGrp_NoNested4PartySubIDs_4);
        all_compo_names.insert("NstdPtys4SubGrp.NoNested4PartySubIDs");

        noNested4PartyIDs_0_1_2.addGroup(noNested4PartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoFills::NoNested4PartyIDs::NoNested4PartySubIDs noNested4PartySubIDs_0_2_2_1;
        // NstdPtys4SubGrp.NoNested4PartySubIDs
        multiset<string> NstdPtys4SubGrp_NoNested4PartySubIDs_5;
        FIX::Nested4PartySubID Nested4PartySubID_5("STRING_1797478402");
        noNested4PartySubIDs_0_2_2_1.set(Nested4PartySubID_5);
        NstdPtys4SubGrp_NoNested4PartySubIDs_5.insert(Nested4PartySubID_5.getString());
        FIX::Nested4PartySubIDType Nested4PartySubIDType_5(1859086015);
        noNested4PartySubIDs_0_2_2_1.set(Nested4PartySubIDType_5);
        NstdPtys4SubGrp_NoNested4PartySubIDs_5.insert(Nested4PartySubIDType_5.getString());
        all_values.push_back(NstdPtys4SubGrp_NoNested4PartySubIDs_5);
        all_compo_names.insert("NstdPtys4SubGrp.NoNested4PartySubIDs");

        noNested4PartyIDs_0_1_2.addGroup(noNested4PartySubIDs_0_2_2_1);
      }
      {
        FIX50SP2::ExecutionReport::NoFills::NoNested4PartyIDs::NoNested4PartySubIDs noNested4PartySubIDs_0_2_2_2;
        // NstdPtys4SubGrp.NoNested4PartySubIDs
        multiset<string> NstdPtys4SubGrp_NoNested4PartySubIDs_6;
        FIX::Nested4PartySubID Nested4PartySubID_6("STRING_1455919694");
        noNested4PartySubIDs_0_2_2_2.set(Nested4PartySubID_6);
        NstdPtys4SubGrp_NoNested4PartySubIDs_6.insert(Nested4PartySubID_6.getString());
        FIX::Nested4PartySubIDType Nested4PartySubIDType_6(1719778032);
        noNested4PartySubIDs_0_2_2_2.set(Nested4PartySubIDType_6);
        NstdPtys4SubGrp_NoNested4PartySubIDs_6.insert(Nested4PartySubIDType_6.getString());
        all_values.push_back(NstdPtys4SubGrp_NoNested4PartySubIDs_6);
        all_compo_names.insert("NstdPtys4SubGrp.NoNested4PartySubIDs");

        noNested4PartyIDs_0_1_2.addGroup(noNested4PartySubIDs_0_2_2_2);
      }
      noFills_0_0.addGroup(noNested4PartyIDs_0_1_2);
    }
    msg.addGroup(noFills_0_0);
  }
  // FinancingDetails
  multiset<string> FinancingDetails_10;
  FIX::AgreementCurrency AgreementCurrency_10("EUR");
  msg.set(AgreementCurrency_10);
  FinancingDetails_10.insert(AgreementCurrency_10.getString());
  FIX::AgreementDate AgreementDate_10("LOCALMKTDATE_331225048");
  msg.set(AgreementDate_10);
  FinancingDetails_10.insert(AgreementDate_10.getString());
  FIX::AgreementDesc AgreementDesc_10("STRING_2032579967");
  msg.set(AgreementDesc_10);
  FinancingDetails_10.insert(AgreementDesc_10.getString());
  FIX::AgreementID AgreementID_10("STRING_64000891");
  msg.set(AgreementID_10);
  FinancingDetails_10.insert(AgreementID_10.getString());
  FIX::DeliveryType DeliveryType_10(2);
  msg.set(DeliveryType_10);
  FinancingDetails_10.insert(DeliveryType_10.getString());
  FIX::EndDate EndDate_10("LOCALMKTDATE_794460586");
  msg.set(EndDate_10);
  FinancingDetails_10.insert(EndDate_10.getString());
  FIX::MarginRatio MarginRatio_10;
  MarginRatio_10.setString("28.020000");
  msg.set(MarginRatio_10);
  FinancingDetails_10.insert(MarginRatio_10.getString());
  FIX::StartDate StartDate_10("LOCALMKTDATE_1299817597");
  msg.set(StartDate_10);
  FinancingDetails_10.insert(StartDate_10.getString());
  FIX::TerminationType TerminationType_10(3);
  msg.set(TerminationType_10);
  FinancingDetails_10.insert(TerminationType_10.getString());
  all_values.push_back(FinancingDetails_10);
  all_compo_names.insert("FinancingDetails");

  // InstrmtLegExecGrp
  // Group InstrmtLegExecGrp.NoLegs
  {
    FIX50SP2::ExecutionReport::NoLegs noLegs_0_0;
    // InstrmtLegExecGrp.NoLegs
    multiset<string> InstrmtLegExecGrp_NoLegs_0;
    FIX::LegAllocID LegAllocID_0("STRING_1261139467");
    noLegs_0_0.set(LegAllocID_0);
    InstrmtLegExecGrp_NoLegs_0.insert(LegAllocID_0.getString());
    FIX::LegCalculatedCcyLastQty LegCalculatedCcyLastQty_0;
    LegCalculatedCcyLastQty_0.setString("12495418");
    noLegs_0_0.set(LegCalculatedCcyLastQty_0);
    InstrmtLegExecGrp_NoLegs_0.insert(LegCalculatedCcyLastQty_0.getString());
    FIX::LegCoveredOrUncovered LegCoveredOrUncovered_0(1353938102);
    noLegs_0_0.set(LegCoveredOrUncovered_0);
    InstrmtLegExecGrp_NoLegs_0.insert(LegCoveredOrUncovered_0.getString());
    FIX::LegCurrencyRatio LegCurrencyRatio_0;
    LegCurrencyRatio_0.setString("12430397");
    noLegs_0_0.set(LegCurrencyRatio_0);
    InstrmtLegExecGrp_NoLegs_0.insert(LegCurrencyRatio_0.getString());
    FIX::LegDividendYield LegDividendYield_0;
    LegDividendYield_0.setString("46.810000");
    noLegs_0_0.set(LegDividendYield_0);
    InstrmtLegExecGrp_NoLegs_0.insert(LegDividendYield_0.getString());
    FIX::LegExecInst LegExecInst_0("MULTIPLECHARVALUE_241735414");
    noLegs_0_0.set(LegExecInst_0);
    InstrmtLegExecGrp_NoLegs_0.insert(LegExecInst_0.getString());
    FIX::LegGrossTradeAmt LegGrossTradeAmt_0;
    LegGrossTradeAmt_0.setString("5729051");
    noLegs_0_0.set(LegGrossTradeAmt_0);
    InstrmtLegExecGrp_NoLegs_0.insert(LegGrossTradeAmt_0.getString());
    FIX::LegLastForwardPoints LegLastForwardPoints_0;
    LegLastForwardPoints_0.setString("11552473");
    noLegs_0_0.set(LegLastForwardPoints_0);
    InstrmtLegExecGrp_NoLegs_0.insert(LegLastForwardPoints_0.getString());
    FIX::LegLastPx LegLastPx_0;
    LegLastPx_0.setString("11009956");
    noLegs_0_0.set(LegLastPx_0);
    InstrmtLegExecGrp_NoLegs_0.insert(LegLastPx_0.getString());
    FIX::LegLastQty LegLastQty_0;
    LegLastQty_0.setString("6878146");
    noLegs_0_0.set(LegLastQty_0);
    InstrmtLegExecGrp_NoLegs_0.insert(LegLastQty_0.getString());
    FIX::LegOrderQty LegOrderQty_0;
    LegOrderQty_0.setString("20134646");
    noLegs_0_0.set(LegOrderQty_0);
    InstrmtLegExecGrp_NoLegs_0.insert(LegOrderQty_0.getString());
    FIX::LegPositionEffect LegPositionEffect_0('8');
    noLegs_0_0.set(LegPositionEffect_0);
    InstrmtLegExecGrp_NoLegs_0.insert(LegPositionEffect_0.getString());
    FIX::LegQty LegQty_0;
    LegQty_0.setString("19890505");
    noLegs_0_0.set(LegQty_0);
    InstrmtLegExecGrp_NoLegs_0.insert(LegQty_0.getString());
    FIX::LegRefID LegRefID_0("STRING_1395118683");
    noLegs_0_0.set(LegRefID_0);
    InstrmtLegExecGrp_NoLegs_0.insert(LegRefID_0.getString());
    FIX::LegSettlCurrency LegSettlCurrency_0("CHF");
    noLegs_0_0.set(LegSettlCurrency_0);
    InstrmtLegExecGrp_NoLegs_0.insert(LegSettlCurrency_0.getString());
    FIX::LegSettlDate LegSettlDate_0("LOCALMKTDATE_1045113437");
    noLegs_0_0.set(LegSettlDate_0);
    InstrmtLegExecGrp_NoLegs_0.insert(LegSettlDate_0.getString());
    FIX::LegSettlType LegSettlType_0('2');
    noLegs_0_0.set(LegSettlType_0);
    InstrmtLegExecGrp_NoLegs_0.insert(LegSettlType_0.getString());
    FIX::LegSwapType LegSwapType_0(5);
    noLegs_0_0.set(LegSwapType_0);
    InstrmtLegExecGrp_NoLegs_0.insert(LegSwapType_0.getString());
    FIX::LegVolatility LegVolatility_0;
    LegVolatility_0.setString("6174078");
    noLegs_0_0.set(LegVolatility_0);
    InstrmtLegExecGrp_NoLegs_0.insert(LegVolatility_0.getString());
    all_values.push_back(InstrmtLegExecGrp_NoLegs_0);
    all_compo_names.insert("InstrmtLegExecGrp.NoLegs");

    // InstrumentLeg
    multiset<string> InstrumentLeg_45;
    FIX::EncodedLegIssuer EncodedLegIssuer_45("DATA_1812187228");
    noLegs_0_0.set(EncodedLegIssuer_45);
    InstrumentLeg_45.insert(EncodedLegIssuer_45.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_45(378731182);
    noLegs_0_0.set(EncodedLegIssuerLen_45);
    InstrumentLeg_45.insert(EncodedLegIssuerLen_45.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_45("DATA_948632870");
    noLegs_0_0.set(EncodedLegSecurityDesc_45);
    InstrumentLeg_45.insert(EncodedLegSecurityDesc_45.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_45(1697283547);
    noLegs_0_0.set(EncodedLegSecurityDescLen_45);
    InstrumentLeg_45.insert(EncodedLegSecurityDescLen_45.getString());
    FIX::LegCFICode LegCFICode_45("STRING_442732074");
    noLegs_0_0.set(LegCFICode_45);
    InstrumentLeg_45.insert(LegCFICode_45.getString());
    FIX::LegContractMultiplier LegContractMultiplier_45;
    LegContractMultiplier_45.setString("2717057");
    noLegs_0_0.set(LegContractMultiplier_45);
    InstrumentLeg_45.insert(LegContractMultiplier_45.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_45(344260485);
    noLegs_0_0.set(LegContractMultiplierUnit_45);
    InstrumentLeg_45.insert(LegContractMultiplierUnit_45.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_45("MONTHYEAR_2049434876");
    noLegs_0_0.set(LegContractSettlMonth_45);
    InstrumentLeg_45.insert(LegContractSettlMonth_45.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_45("COUNTRY_1571523353");
    noLegs_0_0.set(LegCountryOfIssue_45);
    InstrumentLeg_45.insert(LegCountryOfIssue_45.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_45("LOCALMKTDATE_1837851359");
    noLegs_0_0.set(LegCouponPaymentDate_45);
    InstrumentLeg_45.insert(LegCouponPaymentDate_45.getString());
    FIX::LegCouponRate LegCouponRate_45;
    LegCouponRate_45.setString("54.140000");
    noLegs_0_0.set(LegCouponRate_45);
    InstrumentLeg_45.insert(LegCouponRate_45.getString());
    FIX::LegCreditRating LegCreditRating_45("STRING_685179173");
    noLegs_0_0.set(LegCreditRating_45);
    InstrumentLeg_45.insert(LegCreditRating_45.getString());
    FIX::LegCurrency LegCurrency_45("USD");
    noLegs_0_0.set(LegCurrency_45);
    InstrumentLeg_45.insert(LegCurrency_45.getString());
    FIX::LegDatedDate LegDatedDate_45("LOCALMKTDATE_1928218909");
    noLegs_0_0.set(LegDatedDate_45);
    InstrumentLeg_45.insert(LegDatedDate_45.getString());
    FIX::LegExerciseStyle LegExerciseStyle_45(1035124264);
    noLegs_0_0.set(LegExerciseStyle_45);
    InstrumentLeg_45.insert(LegExerciseStyle_45.getString());
    FIX::LegFactor LegFactor_45;
    LegFactor_45.setString("4635852");
    noLegs_0_0.set(LegFactor_45);
    InstrumentLeg_45.insert(LegFactor_45.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_45(353640453);
    noLegs_0_0.set(LegFlowScheduleType_45);
    InstrumentLeg_45.insert(LegFlowScheduleType_45.getString());
    FIX::LegInstrRegistry LegInstrRegistry_45("STRING_42887926");
    noLegs_0_0.set(LegInstrRegistry_45);
    InstrumentLeg_45.insert(LegInstrRegistry_45.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_45("LOCALMKTDATE_1564580954");
    noLegs_0_0.set(LegInterestAccrualDate_45);
    InstrumentLeg_45.insert(LegInterestAccrualDate_45.getString());
    FIX::LegIssueDate LegIssueDate_45("LOCALMKTDATE_1041455125");
    noLegs_0_0.set(LegIssueDate_45);
    InstrumentLeg_45.insert(LegIssueDate_45.getString());
    FIX::LegIssuer LegIssuer_45("STRING_2056352592");
    noLegs_0_0.set(LegIssuer_45);
    InstrumentLeg_45.insert(LegIssuer_45.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_45("STRING_311477260");
    noLegs_0_0.set(LegLocaleOfIssue_45);
    InstrumentLeg_45.insert(LegLocaleOfIssue_45.getString());
    FIX::LegMaturityDate LegMaturityDate_45("LOCALMKTDATE_883021986");
    noLegs_0_0.set(LegMaturityDate_45);
    InstrumentLeg_45.insert(LegMaturityDate_45.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_45("MONTHYEAR_1303987627");
    noLegs_0_0.set(LegMaturityMonthYear_45);
    InstrumentLeg_45.insert(LegMaturityMonthYear_45.getString());
    FIX::LegMaturityTime LegMaturityTime_45("TZTIMEONLY_543902910");
    noLegs_0_0.set(LegMaturityTime_45);
    InstrumentLeg_45.insert(LegMaturityTime_45.getString());
    FIX::LegOptAttribute LegOptAttribute_45('1');
    noLegs_0_0.set(LegOptAttribute_45);
    InstrumentLeg_45.insert(LegOptAttribute_45.getString());
    FIX::LegOptionRatio LegOptionRatio_45;
    LegOptionRatio_45.setString("2016174");
    noLegs_0_0.set(LegOptionRatio_45);
    InstrumentLeg_45.insert(LegOptionRatio_45.getString());
    FIX::LegPool LegPool_45("STRING_487930927");
    noLegs_0_0.set(LegPool_45);
    InstrumentLeg_45.insert(LegPool_45.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_45("STRING_585013698");
    noLegs_0_0.set(LegPriceUnitOfMeasure_45);
    InstrumentLeg_45.insert(LegPriceUnitOfMeasure_45.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_45;
    LegPriceUnitOfMeasureQty_45.setString("8190252");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_45);
    InstrumentLeg_45.insert(LegPriceUnitOfMeasureQty_45.getString());
    FIX::LegProduct LegProduct_45(152634508);
    noLegs_0_0.set(LegProduct_45);
    InstrumentLeg_45.insert(LegProduct_45.getString());
    FIX::LegPutOrCall LegPutOrCall_45(963744881);
    noLegs_0_0.set(LegPutOrCall_45);
    InstrumentLeg_45.insert(LegPutOrCall_45.getString());
    FIX::LegRatioQty LegRatioQty_45;
    LegRatioQty_45.setString("17676581");
    noLegs_0_0.set(LegRatioQty_45);
    InstrumentLeg_45.insert(LegRatioQty_45.getString());
    FIX::LegRedemptionDate LegRedemptionDate_45("LOCALMKTDATE_1849918055");
    noLegs_0_0.set(LegRedemptionDate_45);
    InstrumentLeg_45.insert(LegRedemptionDate_45.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_45("STRING_1406476955");
    noLegs_0_0.set(LegRepoCollateralSecurityType_45);
    InstrumentLeg_45.insert(LegRepoCollateralSecurityType_45.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_45;
    LegRepurchaseRate_45.setString("38.650000");
    noLegs_0_0.set(LegRepurchaseRate_45);
    InstrumentLeg_45.insert(LegRepurchaseRate_45.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_45(46694893);
    noLegs_0_0.set(LegRepurchaseTerm_45);
    InstrumentLeg_45.insert(LegRepurchaseTerm_45.getString());
    FIX::LegSecurityDesc LegSecurityDesc_45("STRING_1308428183");
    noLegs_0_0.set(LegSecurityDesc_45);
    InstrumentLeg_45.insert(LegSecurityDesc_45.getString());
    FIX::LegSecurityExchange LegSecurityExchange_45("EXCHANGE_1463403570");
    noLegs_0_0.set(LegSecurityExchange_45);
    InstrumentLeg_45.insert(LegSecurityExchange_45.getString());
    FIX::LegSecurityID LegSecurityID_45("STRING_1884546252");
    noLegs_0_0.set(LegSecurityID_45);
    InstrumentLeg_45.insert(LegSecurityID_45.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_45("STRING_176339950");
    noLegs_0_0.set(LegSecurityIDSource_45);
    InstrumentLeg_45.insert(LegSecurityIDSource_45.getString());
    FIX::LegSecuritySubType LegSecuritySubType_45("STRING_1099095");
    noLegs_0_0.set(LegSecuritySubType_45);
    InstrumentLeg_45.insert(LegSecuritySubType_45.getString());
    FIX::LegSecurityType LegSecurityType_45("STRING_676972187");
    noLegs_0_0.set(LegSecurityType_45);
    InstrumentLeg_45.insert(LegSecurityType_45.getString());
    FIX::LegSide LegSide_45('3');
    noLegs_0_0.set(LegSide_45);
    InstrumentLeg_45.insert(LegSide_45.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_45("STRING_1929318005");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_45);
    InstrumentLeg_45.insert(LegStateOrProvinceOfIssue_45.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_45("CHF");
    noLegs_0_0.set(LegStrikeCurrency_45);
    InstrumentLeg_45.insert(LegStrikeCurrency_45.getString());
    FIX::LegStrikePrice LegStrikePrice_45;
    LegStrikePrice_45.setString("1354748");
    noLegs_0_0.set(LegStrikePrice_45);
    InstrumentLeg_45.insert(LegStrikePrice_45.getString());
    FIX::LegSymbol LegSymbol_45("STRING_1754984377");
    noLegs_0_0.set(LegSymbol_45);
    InstrumentLeg_45.insert(LegSymbol_45.getString());
    FIX::LegSymbolSfx LegSymbolSfx_45("STRING_278872407");
    noLegs_0_0.set(LegSymbolSfx_45);
    InstrumentLeg_45.insert(LegSymbolSfx_45.getString());
    FIX::LegTimeUnit LegTimeUnit_45("STRING_1176929936");
    noLegs_0_0.set(LegTimeUnit_45);
    InstrumentLeg_45.insert(LegTimeUnit_45.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_45("STRING_1663853321");
    noLegs_0_0.set(LegUnitOfMeasure_45);
    InstrumentLeg_45.insert(LegUnitOfMeasure_45.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_45;
    LegUnitOfMeasureQty_45.setString("5903496");
    noLegs_0_0.set(LegUnitOfMeasureQty_45);
    InstrumentLeg_45.insert(LegUnitOfMeasureQty_45.getString());
    all_values.push_back(InstrumentLeg_45);
    all_compo_names.insert("InstrumentLeg");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::ExecutionReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_86;
      FIX::LegSecurityAltID LegSecurityAltID_86("STRING_820357301");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_86);
      LegSecAltIDGrp_NoLegSecurityAltID_86.insert(LegSecurityAltID_86.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_86("STRING_1134252577");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_86);
      LegSecAltIDGrp_NoLegSecurityAltID_86.insert(LegSecurityAltIDSource_86.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_86);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_87;
      FIX::LegSecurityAltID LegSecurityAltID_87("STRING_992268094");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltID_87);
      LegSecAltIDGrp_NoLegSecurityAltID_87.insert(LegSecurityAltID_87.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_87("STRING_1021974718");
      noLegSecurityAltID_0_1_1.set(LegSecurityAltIDSource_87);
      LegSecAltIDGrp_NoLegSecurityAltID_87.insert(LegSecurityAltIDSource_87.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_87);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::ExecutionReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_88;
      FIX::LegSecurityAltID LegSecurityAltID_88("STRING_1622183505");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltID_88);
      LegSecAltIDGrp_NoLegSecurityAltID_88.insert(LegSecurityAltID_88.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_88("STRING_1577281792");
      noLegSecurityAltID_0_1_2.set(LegSecurityAltIDSource_88);
      LegSecAltIDGrp_NoLegSecurityAltID_88.insert(LegSecurityAltIDSource_88.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_88);
      all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_2);
    }
    // LegPreAllocGrp
    // Group LegPreAllocGrp.NoLegAllocs
    {
      FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs noLegAllocs_0_1_0;
      // LegPreAllocGrp.NoLegAllocs
      multiset<string> LegPreAllocGrp_NoLegAllocs_0;
      FIX::LegAllocAccount LegAllocAccount_0("STRING_1774818013");
      noLegAllocs_0_1_0.set(LegAllocAccount_0);
      LegPreAllocGrp_NoLegAllocs_0.insert(LegAllocAccount_0.getString());
      FIX::LegAllocAcctIDSource LegAllocAcctIDSource_0("STRING_393543025");
      noLegAllocs_0_1_0.set(LegAllocAcctIDSource_0);
      LegPreAllocGrp_NoLegAllocs_0.insert(LegAllocAcctIDSource_0.getString());
      FIX::LegAllocQty LegAllocQty_0;
      LegAllocQty_0.setString("14611744");
      noLegAllocs_0_1_0.set(LegAllocQty_0);
      LegPreAllocGrp_NoLegAllocs_0.insert(LegAllocQty_0.getString());
      FIX::LegAllocSettlCurrency LegAllocSettlCurrency_0("USD");
      noLegAllocs_0_1_0.set(LegAllocSettlCurrency_0);
      LegPreAllocGrp_NoLegAllocs_0.insert(LegAllocSettlCurrency_0.getString());
      FIX::LegIndividualAllocID LegIndividualAllocID_0("STRING_1353054634");
      noLegAllocs_0_1_0.set(LegIndividualAllocID_0);
      LegPreAllocGrp_NoLegAllocs_0.insert(LegIndividualAllocID_0.getString());
      all_values.push_back(LegPreAllocGrp_NoLegAllocs_0);
      all_compo_names.insert("LegPreAllocGrp.NoLegAllocs");

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_0_0_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_22;
        FIX::Nested2PartyID Nested2PartyID_22("STRING_960964516");
        noNested2PartyIDs_0_0_2_0.set(Nested2PartyID_22);
        NestedParties2_NoNested2PartyIDs_22.insert(Nested2PartyID_22.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_22('6');
        noNested2PartyIDs_0_0_2_0.set(Nested2PartyIDSource_22);
        NestedParties2_NoNested2PartyIDs_22.insert(Nested2PartyIDSource_22.getString());
        FIX::Nested2PartyRole Nested2PartyRole_22(1261009918);
        noNested2PartyIDs_0_0_2_0.set(Nested2PartyRole_22);
        NestedParties2_NoNested2PartyIDs_22.insert(Nested2PartyRole_22.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_22);
        all_compo_names.insert("NestedParties2.NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_48;
          FIX::Nested2PartySubID Nested2PartySubID_48("STRING_670073652");
          noNested2PartySubIDs_0_0_0_3_0.set(Nested2PartySubID_48);
          NstdPtys2SubGrp_NoNested2PartySubIDs_48.insert(Nested2PartySubID_48.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_48(1937982105);
          noNested2PartySubIDs_0_0_0_3_0.set(Nested2PartySubIDType_48);
          NstdPtys2SubGrp_NoNested2PartySubIDs_48.insert(Nested2PartySubIDType_48.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_48);
          all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

          noNested2PartyIDs_0_0_2_0.addGroup(noNested2PartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_0_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_49;
          FIX::Nested2PartySubID Nested2PartySubID_49("STRING_1535494284");
          noNested2PartySubIDs_0_0_0_3_1.set(Nested2PartySubID_49);
          NstdPtys2SubGrp_NoNested2PartySubIDs_49.insert(Nested2PartySubID_49.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_49(451908009);
          noNested2PartySubIDs_0_0_0_3_1.set(Nested2PartySubIDType_49);
          NstdPtys2SubGrp_NoNested2PartySubIDs_49.insert(Nested2PartySubIDType_49.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_49);
          all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

          noNested2PartyIDs_0_0_2_0.addGroup(noNested2PartySubIDs_0_0_0_3_1);
        }
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_0_3_2;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_50;
          FIX::Nested2PartySubID Nested2PartySubID_50("STRING_1502594908");
          noNested2PartySubIDs_0_0_0_3_2.set(Nested2PartySubID_50);
          NstdPtys2SubGrp_NoNested2PartySubIDs_50.insert(Nested2PartySubID_50.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_50(249785737);
          noNested2PartySubIDs_0_0_0_3_2.set(Nested2PartySubIDType_50);
          NstdPtys2SubGrp_NoNested2PartySubIDs_50.insert(Nested2PartySubIDType_50.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_50);
          all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

          noNested2PartyIDs_0_0_2_0.addGroup(noNested2PartySubIDs_0_0_0_3_2);
        }
        noLegAllocs_0_1_0.addGroup(noNested2PartyIDs_0_0_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_0_0_2_1;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_23;
        FIX::Nested2PartyID Nested2PartyID_23("STRING_587382819");
        noNested2PartyIDs_0_0_2_1.set(Nested2PartyID_23);
        NestedParties2_NoNested2PartyIDs_23.insert(Nested2PartyID_23.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_23('1');
        noNested2PartyIDs_0_0_2_1.set(Nested2PartyIDSource_23);
        NestedParties2_NoNested2PartyIDs_23.insert(Nested2PartyIDSource_23.getString());
        FIX::Nested2PartyRole Nested2PartyRole_23(528658145);
        noNested2PartyIDs_0_0_2_1.set(Nested2PartyRole_23);
        NestedParties2_NoNested2PartyIDs_23.insert(Nested2PartyRole_23.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_23);
        all_compo_names.insert("NestedParties2.NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_1_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_51;
          FIX::Nested2PartySubID Nested2PartySubID_51("STRING_626465310");
          noNested2PartySubIDs_0_0_1_3_0.set(Nested2PartySubID_51);
          NstdPtys2SubGrp_NoNested2PartySubIDs_51.insert(Nested2PartySubID_51.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_51(1119007812);
          noNested2PartySubIDs_0_0_1_3_0.set(Nested2PartySubIDType_51);
          NstdPtys2SubGrp_NoNested2PartySubIDs_51.insert(Nested2PartySubIDType_51.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_51);
          all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

          noNested2PartyIDs_0_0_2_1.addGroup(noNested2PartySubIDs_0_0_1_3_0);
        }
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_1_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_52;
          FIX::Nested2PartySubID Nested2PartySubID_52("STRING_1676781030");
          noNested2PartySubIDs_0_0_1_3_1.set(Nested2PartySubID_52);
          NstdPtys2SubGrp_NoNested2PartySubIDs_52.insert(Nested2PartySubID_52.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_52(1446822611);
          noNested2PartySubIDs_0_0_1_3_1.set(Nested2PartySubIDType_52);
          NstdPtys2SubGrp_NoNested2PartySubIDs_52.insert(Nested2PartySubIDType_52.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_52);
          all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

          noNested2PartyIDs_0_0_2_1.addGroup(noNested2PartySubIDs_0_0_1_3_1);
        }
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_1_3_2;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_53;
          FIX::Nested2PartySubID Nested2PartySubID_53("STRING_105776742");
          noNested2PartySubIDs_0_0_1_3_2.set(Nested2PartySubID_53);
          NstdPtys2SubGrp_NoNested2PartySubIDs_53.insert(Nested2PartySubID_53.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_53(521565476);
          noNested2PartySubIDs_0_0_1_3_2.set(Nested2PartySubIDType_53);
          NstdPtys2SubGrp_NoNested2PartySubIDs_53.insert(Nested2PartySubIDType_53.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_53);
          all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

          noNested2PartyIDs_0_0_2_1.addGroup(noNested2PartySubIDs_0_0_1_3_2);
        }
        noLegAllocs_0_1_0.addGroup(noNested2PartyIDs_0_0_2_1);
      }
      {
        FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_0_0_2_2;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_24;
        FIX::Nested2PartyID Nested2PartyID_24("STRING_321313681");
        noNested2PartyIDs_0_0_2_2.set(Nested2PartyID_24);
        NestedParties2_NoNested2PartyIDs_24.insert(Nested2PartyID_24.getString());
        FIX::Nested2PartyIDSource Nested2PartyIDSource_24('1');
        noNested2PartyIDs_0_0_2_2.set(Nested2PartyIDSource_24);
        NestedParties2_NoNested2PartyIDs_24.insert(Nested2PartyIDSource_24.getString());
        FIX::Nested2PartyRole Nested2PartyRole_24(2098847268);
        noNested2PartyIDs_0_0_2_2.set(Nested2PartyRole_24);
        NestedParties2_NoNested2PartyIDs_24.insert(Nested2PartyRole_24.getString());
        all_values.push_back(NestedParties2_NoNested2PartyIDs_24);
        all_compo_names.insert("NestedParties2.NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_2_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_54;
          FIX::Nested2PartySubID Nested2PartySubID_54("STRING_1355294612");
          noNested2PartySubIDs_0_0_2_3_0.set(Nested2PartySubID_54);
          NstdPtys2SubGrp_NoNested2PartySubIDs_54.insert(Nested2PartySubID_54.getString());
          FIX::Nested2PartySubIDType Nested2PartySubIDType_54(344906646);
          noNested2PartySubIDs_0_0_2_3_0.set(Nested2PartySubIDType_54);
          NstdPtys2SubGrp_NoNested2PartySubIDs_54.insert(Nested2PartySubIDType_54.getString());
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_54);
          all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

          noNested2PartyIDs_0_0_2_2.addGroup(noNested2PartySubIDs_0_0_2_3_0);
        }
        noLegAllocs_0_1_0.addGroup(noNested2PartyIDs_0_0_2_2);
      }
      noLegs_0_0.addGroup(noLegAllocs_0_1_0);
    }
    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::ExecutionReport::NoLegs::NoLegStipulations noLegStipulations_0_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_0;
      FIX::LegStipulationType LegStipulationType_0("STRING_685063384");
      noLegStipulations_0_1_0.set(LegStipulationType_0);
      LegStipulations_NoLegStipulations_0.insert(LegStipulationType_0.getString());
      FIX::LegStipulationValue LegStipulationValue_0("STRING_2144926626");
      noLegStipulations_0_1_0.set(LegStipulationValue_0);
      LegStipulations_NoLegStipulations_0.insert(LegStipulationValue_0.getString());
      all_values.push_back(LegStipulations_NoLegStipulations_0);
      all_compo_names.insert("LegStipulations.NoLegStipulations");

      noLegs_0_0.addGroup(noLegStipulations_0_1_0);
    }
    // NestedParties3
    // Group NestedParties3.NoNested3PartyIDs
    {
      FIX50SP2::ExecutionReport::NoLegs::NoNested3PartyIDs noNested3PartyIDs_0_1_0;
      // NestedParties3.NoNested3PartyIDs
      multiset<string> NestedParties3_NoNested3PartyIDs_0;
      FIX::Nested3PartyID Nested3PartyID_0("STRING_61527050");
      noNested3PartyIDs_0_1_0.set(Nested3PartyID_0);
      NestedParties3_NoNested3PartyIDs_0.insert(Nested3PartyID_0.getString());
      FIX::Nested3PartyIDSource Nested3PartyIDSource_0('9');
      noNested3PartyIDs_0_1_0.set(Nested3PartyIDSource_0);
      NestedParties3_NoNested3PartyIDs_0.insert(Nested3PartyIDSource_0.getString());
      FIX::Nested3PartyRole Nested3PartyRole_0(1350549949);
      noNested3PartyIDs_0_1_0.set(Nested3PartyRole_0);
      NestedParties3_NoNested3PartyIDs_0.insert(Nested3PartyRole_0.getString());
      all_values.push_back(NestedParties3_NoNested3PartyIDs_0);
      all_compo_names.insert("NestedParties3.NoNested3PartyIDs");

      // NstdPtys3SubGrp
      // Group NstdPtys3SubGrp.NoNested3PartySubIDs
      {
        FIX50SP2::ExecutionReport::NoLegs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_0_0_2_0;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_0;
        FIX::Nested3PartySubID Nested3PartySubID_0("STRING_2095711960");
        noNested3PartySubIDs_0_0_2_0.set(Nested3PartySubID_0);
        NstdPtys3SubGrp_NoNested3PartySubIDs_0.insert(Nested3PartySubID_0.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_0(2020623601);
        noNested3PartySubIDs_0_0_2_0.set(Nested3PartySubIDType_0);
        NstdPtys3SubGrp_NoNested3PartySubIDs_0.insert(Nested3PartySubIDType_0.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_0);
        all_compo_names.insert("NstdPtys3SubGrp.NoNested3PartySubIDs");

        noNested3PartyIDs_0_1_0.addGroup(noNested3PartySubIDs_0_0_2_0);
      }
      noLegs_0_0.addGroup(noNested3PartyIDs_0_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoLegs::NoNested3PartyIDs noNested3PartyIDs_0_1_1;
      // NestedParties3.NoNested3PartyIDs
      multiset<string> NestedParties3_NoNested3PartyIDs_1;
      FIX::Nested3PartyID Nested3PartyID_1("STRING_1113035425");
      noNested3PartyIDs_0_1_1.set(Nested3PartyID_1);
      NestedParties3_NoNested3PartyIDs_1.insert(Nested3PartyID_1.getString());
      FIX::Nested3PartyIDSource Nested3PartyIDSource_1('1');
      noNested3PartyIDs_0_1_1.set(Nested3PartyIDSource_1);
      NestedParties3_NoNested3PartyIDs_1.insert(Nested3PartyIDSource_1.getString());
      FIX::Nested3PartyRole Nested3PartyRole_1(325047962);
      noNested3PartyIDs_0_1_1.set(Nested3PartyRole_1);
      NestedParties3_NoNested3PartyIDs_1.insert(Nested3PartyRole_1.getString());
      all_values.push_back(NestedParties3_NoNested3PartyIDs_1);
      all_compo_names.insert("NestedParties3.NoNested3PartyIDs");

      // NstdPtys3SubGrp
      // Group NstdPtys3SubGrp.NoNested3PartySubIDs
      {
        FIX50SP2::ExecutionReport::NoLegs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_0_1_2_0;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_1;
        FIX::Nested3PartySubID Nested3PartySubID_1("STRING_1733508334");
        noNested3PartySubIDs_0_1_2_0.set(Nested3PartySubID_1);
        NstdPtys3SubGrp_NoNested3PartySubIDs_1.insert(Nested3PartySubID_1.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_1(912430782);
        noNested3PartySubIDs_0_1_2_0.set(Nested3PartySubIDType_1);
        NstdPtys3SubGrp_NoNested3PartySubIDs_1.insert(Nested3PartySubIDType_1.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_1);
        all_compo_names.insert("NstdPtys3SubGrp.NoNested3PartySubIDs");

        noNested3PartyIDs_0_1_1.addGroup(noNested3PartySubIDs_0_1_2_0);
      }
      noLegs_0_0.addGroup(noNested3PartyIDs_0_1_1);
    }
    {
      FIX50SP2::ExecutionReport::NoLegs::NoNested3PartyIDs noNested3PartyIDs_0_1_2;
      // NestedParties3.NoNested3PartyIDs
      multiset<string> NestedParties3_NoNested3PartyIDs_2;
      FIX::Nested3PartyID Nested3PartyID_2("STRING_1578242322");
      noNested3PartyIDs_0_1_2.set(Nested3PartyID_2);
      NestedParties3_NoNested3PartyIDs_2.insert(Nested3PartyID_2.getString());
      FIX::Nested3PartyIDSource Nested3PartyIDSource_2('1');
      noNested3PartyIDs_0_1_2.set(Nested3PartyIDSource_2);
      NestedParties3_NoNested3PartyIDs_2.insert(Nested3PartyIDSource_2.getString());
      FIX::Nested3PartyRole Nested3PartyRole_2(529259889);
      noNested3PartyIDs_0_1_2.set(Nested3PartyRole_2);
      NestedParties3_NoNested3PartyIDs_2.insert(Nested3PartyRole_2.getString());
      all_values.push_back(NestedParties3_NoNested3PartyIDs_2);
      all_compo_names.insert("NestedParties3.NoNested3PartyIDs");

      // NstdPtys3SubGrp
      // Group NstdPtys3SubGrp.NoNested3PartySubIDs
      {
        FIX50SP2::ExecutionReport::NoLegs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_0_2_2_0;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_2;
        FIX::Nested3PartySubID Nested3PartySubID_2("STRING_1233690644");
        noNested3PartySubIDs_0_2_2_0.set(Nested3PartySubID_2);
        NstdPtys3SubGrp_NoNested3PartySubIDs_2.insert(Nested3PartySubID_2.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_2(58557271);
        noNested3PartySubIDs_0_2_2_0.set(Nested3PartySubIDType_2);
        NstdPtys3SubGrp_NoNested3PartySubIDs_2.insert(Nested3PartySubIDType_2.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_2);
        all_compo_names.insert("NstdPtys3SubGrp.NoNested3PartySubIDs");

        noNested3PartyIDs_0_1_2.addGroup(noNested3PartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoLegs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_0_2_2_1;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_3;
        FIX::Nested3PartySubID Nested3PartySubID_3("STRING_1504046596");
        noNested3PartySubIDs_0_2_2_1.set(Nested3PartySubID_3);
        NstdPtys3SubGrp_NoNested3PartySubIDs_3.insert(Nested3PartySubID_3.getString());
        FIX::Nested3PartySubIDType Nested3PartySubIDType_3(1339467386);
        noNested3PartySubIDs_0_2_2_1.set(Nested3PartySubIDType_3);
        NstdPtys3SubGrp_NoNested3PartySubIDs_3.insert(Nested3PartySubIDType_3.getString());
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_3);
        all_compo_names.insert("NstdPtys3SubGrp.NoNested3PartySubIDs");

        noNested3PartyIDs_0_1_2.addGroup(noNested3PartySubIDs_0_2_2_1);
      }
      noLegs_0_0.addGroup(noNested3PartyIDs_0_1_2);
    }
    msg.addGroup(noLegs_0_0);
  }
  // Instrument
  multiset<string> Instrument_25;
  FIX::AttachmentPoint AttachmentPoint_25;
  AttachmentPoint_25.setString("27.470000");
  msg.set(AttachmentPoint_25);
  Instrument_25.insert(AttachmentPoint_25.getString());
  FIX::CFICode CFICode_25("STRING_1825360277");
  msg.set(CFICode_25);
  Instrument_25.insert(CFICode_25.getString());
  FIX::CPProgram CPProgram_25(1);
  msg.set(CPProgram_25);
  Instrument_25.insert(CPProgram_25.getString());
  FIX::CPRegType CPRegType_25("STRING_531486368");
  msg.set(CPRegType_25);
  Instrument_25.insert(CPRegType_25.getString());
  FIX::CapPrice CapPrice_25;
  CapPrice_25.setString("18401902");
  msg.set(CapPrice_25);
  Instrument_25.insert(CapPrice_25.getString());
  FIX::ContractMultiplier ContractMultiplier_25;
  ContractMultiplier_25.setString("1277549");
  msg.set(ContractMultiplier_25);
  Instrument_25.insert(ContractMultiplier_25.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_25(2);
  msg.set(ContractMultiplierUnit_25);
  Instrument_25.insert(ContractMultiplierUnit_25.getString());
  FIX::ContractSettlMonth ContractSettlMonth_25("MONTHYEAR_1168711026");
  msg.set(ContractSettlMonth_25);
  Instrument_25.insert(ContractSettlMonth_25.getString());
  FIX::CountryOfIssue CountryOfIssue_25("COUNTRY_812818333");
  msg.set(CountryOfIssue_25);
  Instrument_25.insert(CountryOfIssue_25.getString());
  FIX::CouponPaymentDate CouponPaymentDate_25("LOCALMKTDATE_873835992");
  msg.set(CouponPaymentDate_25);
  Instrument_25.insert(CouponPaymentDate_25.getString());
  FIX::CouponRate CouponRate_25;
  CouponRate_25.setString("64.190000");
  msg.set(CouponRate_25);
  Instrument_25.insert(CouponRate_25.getString());
  FIX::CreditRating CreditRating_25("STRING_874345383");
  msg.set(CreditRating_25);
  Instrument_25.insert(CreditRating_25.getString());
  FIX::DatedDate DatedDate_25("LOCALMKTDATE_1832243487");
  msg.set(DatedDate_25);
  Instrument_25.insert(DatedDate_25.getString());
  FIX::DetachmentPoint DetachmentPoint_25;
  DetachmentPoint_25.setString("27.210000");
  msg.set(DetachmentPoint_25);
  Instrument_25.insert(DetachmentPoint_25.getString());
  FIX::EncodedIssuer EncodedIssuer_25("DATA_49398703");
  msg.set(EncodedIssuer_25);
  Instrument_25.insert(EncodedIssuer_25.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_25(1780471799);
  msg.set(EncodedIssuerLen_25);
  Instrument_25.insert(EncodedIssuerLen_25.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_25("DATA_926492674");
  msg.set(EncodedSecurityDesc_25);
  Instrument_25.insert(EncodedSecurityDesc_25.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_25(1162434128);
  msg.set(EncodedSecurityDescLen_25);
  Instrument_25.insert(EncodedSecurityDescLen_25.getString());
  FIX::ExerciseStyle ExerciseStyle_25(0);
  msg.set(ExerciseStyle_25);
  Instrument_25.insert(ExerciseStyle_25.getString());
  FIX::Factor Factor_25;
  Factor_25.setString("12515406");
  msg.set(Factor_25);
  Instrument_25.insert(Factor_25.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_25(false);
  msg.set(FlexProductEligibilityIndicator_25);
  Instrument_25.insert(FlexProductEligibilityIndicator_25.getString());
  FIX::FlexibleIndicator FlexibleIndicator_25(false);
  msg.set(FlexibleIndicator_25);
  Instrument_25.insert(FlexibleIndicator_25.getString());
  FIX::FloorPrice FloorPrice_25;
  FloorPrice_25.setString("164877");
  msg.set(FloorPrice_25);
  Instrument_25.insert(FloorPrice_25.getString());
  FIX::FlowScheduleType FlowScheduleType_25(2);
  msg.set(FlowScheduleType_25);
  Instrument_25.insert(FlowScheduleType_25.getString());
  FIX::InstrRegistry InstrRegistry_25("STRING_817418266");
  msg.set(InstrRegistry_25);
  Instrument_25.insert(InstrRegistry_25.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_25('5');
  msg.set(InstrmtAssignmentMethod_25);
  Instrument_25.insert(InstrmtAssignmentMethod_25.getString());
  FIX::InterestAccrualDate InterestAccrualDate_25("LOCALMKTDATE_1118563472");
  msg.set(InterestAccrualDate_25);
  Instrument_25.insert(InterestAccrualDate_25.getString());
  FIX::IssueDate IssueDate_25("LOCALMKTDATE_2051108910");
  msg.set(IssueDate_25);
  Instrument_25.insert(IssueDate_25.getString());
  FIX::Issuer Issuer_25("STRING_604304932");
  msg.set(Issuer_25);
  Instrument_25.insert(Issuer_25.getString());
  FIX::ListMethod ListMethod_25(0);
  msg.set(ListMethod_25);
  Instrument_25.insert(ListMethod_25.getString());
  FIX::LocaleOfIssue LocaleOfIssue_25("STRING_1243092648");
  msg.set(LocaleOfIssue_25);
  Instrument_25.insert(LocaleOfIssue_25.getString());
  FIX::MaturityDate MaturityDate_25("LOCALMKTDATE_1184427679");
  msg.set(MaturityDate_25);
  Instrument_25.insert(MaturityDate_25.getString());
  FIX::MaturityMonthYear MaturityMonthYear_25("MONTHYEAR_153003049");
  msg.set(MaturityMonthYear_25);
  Instrument_25.insert(MaturityMonthYear_25.getString());
  FIX::MaturityTime MaturityTime_25("TZTIMEONLY_15552985");
  msg.set(MaturityTime_25);
  Instrument_25.insert(MaturityTime_25.getString());
  FIX::MinPriceIncrement MinPriceIncrement_25;
  MinPriceIncrement_25.setString("17159140");
  msg.set(MinPriceIncrement_25);
  Instrument_25.insert(MinPriceIncrement_25.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_25;
  MinPriceIncrementAmount_25.setString("19931933");
  msg.set(MinPriceIncrementAmount_25);
  Instrument_25.insert(MinPriceIncrementAmount_25.getString());
  FIX::NTPositionLimit NTPositionLimit_25(143307934);
  msg.set(NTPositionLimit_25);
  Instrument_25.insert(NTPositionLimit_25.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_25;
  NotionalPercentageOutstanding_25.setString("34.130000");
  msg.set(NotionalPercentageOutstanding_25);
  Instrument_25.insert(NotionalPercentageOutstanding_25.getString());
  FIX::OptAttribute OptAttribute_25('1');
  msg.set(OptAttribute_25);
  Instrument_25.insert(OptAttribute_25.getString());
  FIX::OptPayoutAmount OptPayoutAmount_25;
  OptPayoutAmount_25.setString("9561262");
  msg.set(OptPayoutAmount_25);
  Instrument_25.insert(OptPayoutAmount_25.getString());
  FIX::OptPayoutType OptPayoutType_25(2);
  msg.set(OptPayoutType_25);
  Instrument_25.insert(OptPayoutType_25.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_25;
  OriginalNotionalPercentageOutstanding_25.setString("34.670000");
  msg.set(OriginalNotionalPercentageOutstanding_25);
  Instrument_25.insert(OriginalNotionalPercentageOutstanding_25.getString());
  FIX::Pool Pool_25("STRING_1830471651");
  msg.set(Pool_25);
  Instrument_25.insert(Pool_25.getString());
  FIX::PositionLimit PositionLimit_25(1003419245);
  msg.set(PositionLimit_25);
  Instrument_25.insert(PositionLimit_25.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_25("STRING_STD");
  msg.set(PriceQuoteMethod_25);
  Instrument_25.insert(PriceQuoteMethod_25.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_25("STRING_1879870355");
  msg.set(PriceUnitOfMeasure_25);
  Instrument_25.insert(PriceUnitOfMeasure_25.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_25;
  PriceUnitOfMeasureQty_25.setString("6364073");
  msg.set(PriceUnitOfMeasureQty_25);
  Instrument_25.insert(PriceUnitOfMeasureQty_25.getString());
  FIX::Product Product_27(10);
  msg.set(Product_27);
  Instrument_25.insert(Product_27.getString());
  FIX::ProductComplex ProductComplex_25("STRING_894820835");
  msg.set(ProductComplex_25);
  Instrument_25.insert(ProductComplex_25.getString());
  FIX::PutOrCall PutOrCall_25(1);
  msg.set(PutOrCall_25);
  Instrument_25.insert(PutOrCall_25.getString());
  FIX::RedemptionDate RedemptionDate_25("LOCALMKTDATE_1801125851");
  msg.set(RedemptionDate_25);
  Instrument_25.insert(RedemptionDate_25.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_25("STRING_377918001");
  msg.set(RepoCollateralSecurityType_25);
  Instrument_25.insert(RepoCollateralSecurityType_25.getString());
  FIX::RepurchaseRate RepurchaseRate_25;
  RepurchaseRate_25.setString("99.320000");
  msg.set(RepurchaseRate_25);
  Instrument_25.insert(RepurchaseRate_25.getString());
  FIX::RepurchaseTerm RepurchaseTerm_25(1817613622);
  msg.set(RepurchaseTerm_25);
  Instrument_25.insert(RepurchaseTerm_25.getString());
  FIX::RestructuringType RestructuringType_25("STRING_FR");
  msg.set(RestructuringType_25);
  Instrument_25.insert(RestructuringType_25.getString());
  FIX::SecurityDesc SecurityDesc_25("STRING_1125788198");
  msg.set(SecurityDesc_25);
  Instrument_25.insert(SecurityDesc_25.getString());
  FIX::SecurityExchange SecurityExchange_25("EXCHANGE_215877635");
  msg.set(SecurityExchange_25);
  Instrument_25.insert(SecurityExchange_25.getString());
  FIX::SecurityGroup SecurityGroup_25("STRING_410337312");
  msg.set(SecurityGroup_25);
  Instrument_25.insert(SecurityGroup_25.getString());
  FIX::SecurityID SecurityID_25("STRING_1029413461");
  msg.set(SecurityID_25);
  Instrument_25.insert(SecurityID_25.getString());
  FIX::SecurityIDSource SecurityIDSource_25("STRING_I");
  msg.set(SecurityIDSource_25);
  Instrument_25.insert(SecurityIDSource_25.getString());
  FIX::SecurityStatus SecurityStatus_25("STRING_1");
  msg.set(SecurityStatus_25);
  Instrument_25.insert(SecurityStatus_25.getString());
  FIX::SecuritySubType SecuritySubType_26("STRING_125022461");
  msg.set(SecuritySubType_26);
  Instrument_25.insert(SecuritySubType_26.getString());
  FIX::SecurityType SecurityType_27("STRING_SWING");
  msg.set(SecurityType_27);
  Instrument_25.insert(SecurityType_27.getString());
  FIX::Seniority Seniority_25("STRING_SD");
  msg.set(Seniority_25);
  Instrument_25.insert(Seniority_25.getString());
  FIX::SettlMethod SettlMethod_25('P');
  msg.set(SettlMethod_25);
  Instrument_25.insert(SettlMethod_25.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_25("STRING_1573040646");
  msg.set(SettleOnOpenFlag_25);
  Instrument_25.insert(SettleOnOpenFlag_25.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_25("STRING_884176451");
  msg.set(StateOrProvinceOfIssue_25);
  Instrument_25.insert(StateOrProvinceOfIssue_25.getString());
  FIX::StrikeCurrency StrikeCurrency_25("CHF");
  msg.set(StrikeCurrency_25);
  Instrument_25.insert(StrikeCurrency_25.getString());
  FIX::StrikeMultiplier StrikeMultiplier_25;
  StrikeMultiplier_25.setString("18985971");
  msg.set(StrikeMultiplier_25);
  Instrument_25.insert(StrikeMultiplier_25.getString());
  FIX::StrikePrice StrikePrice_25;
  StrikePrice_25.setString("12400096");
  msg.set(StrikePrice_25);
  Instrument_25.insert(StrikePrice_25.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_25(3);
  msg.set(StrikePriceBoundaryMethod_25);
  Instrument_25.insert(StrikePriceBoundaryMethod_25.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_25;
  StrikePriceBoundaryPrecision_25.setString("69.650000");
  msg.set(StrikePriceBoundaryPrecision_25);
  Instrument_25.insert(StrikePriceBoundaryPrecision_25.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_25(2);
  msg.set(StrikePriceDeterminationMethod_25);
  Instrument_25.insert(StrikePriceDeterminationMethod_25.getString());
  FIX::StrikeValue StrikeValue_25;
  StrikeValue_25.setString("449754");
  msg.set(StrikeValue_25);
  Instrument_25.insert(StrikeValue_25.getString());
  FIX::Symbol Symbol_25("STRING_91429505");
  msg.set(Symbol_25);
  Instrument_25.insert(Symbol_25.getString());
  FIX::SymbolSfx SymbolSfx_25("STRING_CD");
  msg.set(SymbolSfx_25);
  Instrument_25.insert(SymbolSfx_25.getString());
  FIX::TimeUnit TimeUnit_25("STRING_Wk");
  msg.set(TimeUnit_25);
  Instrument_25.insert(TimeUnit_25.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_25(1);
  msg.set(UnderlyingPriceDeterminationMethod_25);
  Instrument_25.insert(UnderlyingPriceDeterminationMethod_25.getString());
  FIX::UnitOfMeasure UnitOfMeasure_25("STRING_lbs");
  msg.set(UnitOfMeasure_25);
  Instrument_25.insert(UnitOfMeasure_25.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_25;
  UnitOfMeasureQty_25.setString("2870173");
  msg.set(UnitOfMeasureQty_25);
  Instrument_25.insert(UnitOfMeasureQty_25.getString());
  FIX::ValuationMethod ValuationMethod_25("STRING_CDS");
  msg.set(ValuationMethod_25);
  Instrument_25.insert(ValuationMethod_25.getString());
  all_values.push_back(Instrument_25);
  all_compo_names.insert("Instrument");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::ExecutionReport::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_52;
    FIX::ComplexEventCondition ComplexEventCondition_52(1);
    noComplexEvents_0_0.set(ComplexEventCondition_52);
    ComplexEvents_NoComplexEvents_52.insert(ComplexEventCondition_52.getString());
    FIX::ComplexEventPrice ComplexEventPrice_52;
    ComplexEventPrice_52.setString("21122705");
    noComplexEvents_0_0.set(ComplexEventPrice_52);
    ComplexEvents_NoComplexEvents_52.insert(ComplexEventPrice_52.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_52(3);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_52);
    ComplexEvents_NoComplexEvents_52.insert(ComplexEventPriceBoundaryMethod_52.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_52;
    ComplexEventPriceBoundaryPrecision_52.setString("54.380000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_52);
    ComplexEvents_NoComplexEvents_52.insert(ComplexEventPriceBoundaryPrecision_52.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_52(1);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_52);
    ComplexEvents_NoComplexEvents_52.insert(ComplexEventPriceTimeType_52.getString());
    FIX::ComplexEventType ComplexEventType_52(9);
    noComplexEvents_0_0.set(ComplexEventType_52);
    ComplexEvents_NoComplexEvents_52.insert(ComplexEventType_52.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_52;
    ComplexOptPayoutAmount_52.setString("6031052");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_52);
    ComplexEvents_NoComplexEvents_52.insert(ComplexOptPayoutAmount_52.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_52);
    all_compo_names.insert("ComplexEvents.NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::ExecutionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_106;
      FIX::ComplexEventEndDate ComplexEventEndDate_106(FIX::UTCTIMESTAMP(17, 38, 56, 24, 1, 2005));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_106);
      ComplexEventDates_NoComplexEventDates_106.insert(ComplexEventEndDate_106.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_106(FIX::UTCTIMESTAMP(20, 45, 3, 1, 8, 2016));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_106);
      ComplexEventDates_NoComplexEventDates_106.insert(ComplexEventStartDate_106.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_106);
      all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::ExecutionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_219;
        FIX::ComplexEventEndTime ComplexEventEndTime_219(FIX::UTCTIMEONLY(20, 51, 28));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_219);
        ComplexEventTimes_NoComplexEventTimes_219.insert(ComplexEventEndTime_219.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_219(FIX::UTCTIMEONLY(19, 12, 32));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_219);
        ComplexEventTimes_NoComplexEventTimes_219.insert(ComplexEventStartTime_219.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_219);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_220;
        FIX::ComplexEventEndTime ComplexEventEndTime_220(FIX::UTCTIMEONLY(10, 41, 21));
        noComplexEventTimes_0_0_2_1.set(ComplexEventEndTime_220);
        ComplexEventTimes_NoComplexEventTimes_220.insert(ComplexEventEndTime_220.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_220(FIX::UTCTIMEONLY(22, 33, 35));
        noComplexEventTimes_0_0_2_1.set(ComplexEventStartTime_220);
        ComplexEventTimes_NoComplexEventTimes_220.insert(ComplexEventStartTime_220.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_220);
        all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
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
    multiset<string> EvntGrp_NoEvents_50;
    FIX::EventDate EventDate_50("LOCALMKTDATE_1709154806");
    noEvents_0_0.set(EventDate_50);
    EvntGrp_NoEvents_50.insert(EventDate_50.getString());
    FIX::EventPx EventPx_50;
    EventPx_50.setString("12467142");
    noEvents_0_0.set(EventPx_50);
    EvntGrp_NoEvents_50.insert(EventPx_50.getString());
    FIX::EventText EventText_50("STRING_1336915392");
    noEvents_0_0.set(EventText_50);
    EvntGrp_NoEvents_50.insert(EventText_50.getString());
    FIX::EventTime EventTime_50(FIX::UTCTIMESTAMP(14, 11, 59, 6, 2, 2008));
    noEvents_0_0.set(EventTime_50);
    EvntGrp_NoEvents_50.insert(EventTime_50.getString());
    FIX::EventType EventType_50(16);
    noEvents_0_0.set(EventType_50);
    EvntGrp_NoEvents_50.insert(EventType_50.getString());
    all_values.push_back(EvntGrp_NoEvents_50);
    all_compo_names.insert("EvntGrp.NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::ExecutionReport::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_45;
    FIX::InstrumentPartyID InstrumentPartyID_45("STRING_848699950");
    noInstrumentParties_0_0.set(InstrumentPartyID_45);
    InstrumentParties_NoInstrumentParties_45.insert(InstrumentPartyID_45.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_45('1');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_45);
    InstrumentParties_NoInstrumentParties_45.insert(InstrumentPartyIDSource_45.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_45(44371752);
    noInstrumentParties_0_0.set(InstrumentPartyRole_45);
    InstrumentParties_NoInstrumentParties_45.insert(InstrumentPartyRole_45.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_45);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::ExecutionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_91;
      FIX::InstrumentPartySubID InstrumentPartySubID_91("STRING_41891490");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_91);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_91.insert(InstrumentPartySubID_91.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_91(1139640461);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_91);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_91.insert(InstrumentPartySubIDType_91.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_91);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_92;
      FIX::InstrumentPartySubID InstrumentPartySubID_92("STRING_1750926962");
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubID_92);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_92.insert(InstrumentPartySubID_92.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_92(250734301);
      noInstrumentPartySubIDs_0_1_1.set(InstrumentPartySubIDType_92);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_92.insert(InstrumentPartySubIDType_92.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_92);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::ExecutionReport::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_46;
    FIX::InstrumentPartyID InstrumentPartyID_46("STRING_382082445");
    noInstrumentParties_0_1.set(InstrumentPartyID_46);
    InstrumentParties_NoInstrumentParties_46.insert(InstrumentPartyID_46.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_46('6');
    noInstrumentParties_0_1.set(InstrumentPartyIDSource_46);
    InstrumentParties_NoInstrumentParties_46.insert(InstrumentPartyIDSource_46.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_46(1054964352);
    noInstrumentParties_0_1.set(InstrumentPartyRole_46);
    InstrumentParties_NoInstrumentParties_46.insert(InstrumentPartyRole_46.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_46);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::ExecutionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_93;
      FIX::InstrumentPartySubID InstrumentPartySubID_93("STRING_689568007");
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubID_93);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_93.insert(InstrumentPartySubID_93.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_93(1432886194);
      noInstrumentPartySubIDs_1_1_0.set(InstrumentPartySubIDType_93);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_93.insert(InstrumentPartySubIDType_93.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_93);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_94;
      FIX::InstrumentPartySubID InstrumentPartySubID_94("STRING_1124688390");
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubID_94);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_94.insert(InstrumentPartySubID_94.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_94(251587749);
      noInstrumentPartySubIDs_1_1_1.set(InstrumentPartySubIDType_94);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_94.insert(InstrumentPartySubIDType_94.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_94);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::ExecutionReport::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_47;
    FIX::InstrumentPartyID InstrumentPartyID_47("STRING_266429639");
    noInstrumentParties_0_2.set(InstrumentPartyID_47);
    InstrumentParties_NoInstrumentParties_47.insert(InstrumentPartyID_47.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_47('1');
    noInstrumentParties_0_2.set(InstrumentPartyIDSource_47);
    InstrumentParties_NoInstrumentParties_47.insert(InstrumentPartyIDSource_47.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_47(181821926);
    noInstrumentParties_0_2.set(InstrumentPartyRole_47);
    InstrumentParties_NoInstrumentParties_47.insert(InstrumentPartyRole_47.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_47);
    all_compo_names.insert("InstrumentParties.NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::ExecutionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_95;
      FIX::InstrumentPartySubID InstrumentPartySubID_95("STRING_612659470");
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubID_95);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_95.insert(InstrumentPartySubID_95.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_95(1518737318);
      noInstrumentPartySubIDs_2_1_0.set(InstrumentPartySubIDType_95);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_95.insert(InstrumentPartySubIDType_95.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_95);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_96;
      FIX::InstrumentPartySubID InstrumentPartySubID_96("STRING_258475115");
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubID_96);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_96.insert(InstrumentPartySubID_96.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_96(2142904380);
      noInstrumentPartySubIDs_2_1_1.set(InstrumentPartySubIDType_96);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_96.insert(InstrumentPartySubIDType_96.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_96);
      all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_1);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::ExecutionReport::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_44;
    FIX::SecurityAltID SecurityAltID_44("STRING_1841435974");
    noSecurityAltID_0_0.set(SecurityAltID_44);
    SecAltIDGrp_NoSecurityAltID_44.insert(SecurityAltID_44.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_44("STRING_1679576750");
    noSecurityAltID_0_0.set(SecurityAltIDSource_44);
    SecAltIDGrp_NoSecurityAltID_44.insert(SecurityAltIDSource_44.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_44);
    all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_50;
  FIX::SecurityXML SecurityXML_51("XMLDATA_78836363");
  msg.set(SecurityXML_51);
  FIX::SecurityXMLLen SecurityXMLLen_25(1522025729);
  msg.set(SecurityXMLLen_25);
  FIX::SecurityXMLSchema SecurityXMLSchema_25("STRING_411716398");
  msg.set(SecurityXMLSchema_25);
  SecurityXML_50.insert(SecurityXMLSchema_25.getString());
  all_values.push_back(SecurityXML_50);
  all_compo_names.insert("SecurityXML");

  // MiscFeesGrp
  // Group MiscFeesGrp.NoMiscFees
  {
    FIX50SP2::ExecutionReport::NoMiscFees noMiscFees_0_0;
    // MiscFeesGrp.NoMiscFees
    multiset<string> MiscFeesGrp_NoMiscFees_19;
    FIX::MiscFeeAmt MiscFeeAmt_19;
    MiscFeeAmt_19.setString("2232420");
    noMiscFees_0_0.set(MiscFeeAmt_19);
    MiscFeesGrp_NoMiscFees_19.insert(MiscFeeAmt_19.getString());
    FIX::MiscFeeBasis MiscFeeBasis_19(0);
    noMiscFees_0_0.set(MiscFeeBasis_19);
    MiscFeesGrp_NoMiscFees_19.insert(MiscFeeBasis_19.getString());
    FIX::MiscFeeCurr MiscFeeCurr_19("USD");
    noMiscFees_0_0.set(MiscFeeCurr_19);
    MiscFeesGrp_NoMiscFees_19.insert(MiscFeeCurr_19.getString());
    FIX::MiscFeeType MiscFeeType_19("STRING_7");
    noMiscFees_0_0.set(MiscFeeType_19);
    MiscFeesGrp_NoMiscFees_19.insert(MiscFeeType_19.getString());
    all_values.push_back(MiscFeesGrp_NoMiscFees_19);
    all_compo_names.insert("MiscFeesGrp.NoMiscFees");

    msg.addGroup(noMiscFees_0_0);
  }
  {
    FIX50SP2::ExecutionReport::NoMiscFees noMiscFees_0_1;
    // MiscFeesGrp.NoMiscFees
    multiset<string> MiscFeesGrp_NoMiscFees_20;
    FIX::MiscFeeAmt MiscFeeAmt_20;
    MiscFeeAmt_20.setString("8529663");
    noMiscFees_0_1.set(MiscFeeAmt_20);
    MiscFeesGrp_NoMiscFees_20.insert(MiscFeeAmt_20.getString());
    FIX::MiscFeeBasis MiscFeeBasis_20(0);
    noMiscFees_0_1.set(MiscFeeBasis_20);
    MiscFeesGrp_NoMiscFees_20.insert(MiscFeeBasis_20.getString());
    FIX::MiscFeeCurr MiscFeeCurr_20("EUR");
    noMiscFees_0_1.set(MiscFeeCurr_20);
    MiscFeesGrp_NoMiscFees_20.insert(MiscFeeCurr_20.getString());
    FIX::MiscFeeType MiscFeeType_20("STRING_3");
    noMiscFees_0_1.set(MiscFeeType_20);
    MiscFeesGrp_NoMiscFees_20.insert(MiscFeeType_20.getString());
    all_values.push_back(MiscFeesGrp_NoMiscFees_20);
    all_compo_names.insert("MiscFeesGrp.NoMiscFees");

    msg.addGroup(noMiscFees_0_1);
  }
  // OrderQtyData
  multiset<string> OrderQtyData_6;
  FIX::CashOrderQty CashOrderQty_6;
  CashOrderQty_6.setString("18793725");
  msg.set(CashOrderQty_6);
  OrderQtyData_6.insert(CashOrderQty_6.getString());
  FIX::OrderPercent OrderPercent_6;
  OrderPercent_6.setString("1.120000");
  msg.set(OrderPercent_6);
  OrderQtyData_6.insert(OrderPercent_6.getString());
  FIX::OrderQty OrderQty_16;
  OrderQty_16.setString("16512631");
  msg.set(OrderQty_16);
  OrderQtyData_6.insert(OrderQty_16.getString());
  FIX::RoundingDirection RoundingDirection_6('2');
  msg.set(RoundingDirection_6);
  OrderQtyData_6.insert(RoundingDirection_6.getString());
  FIX::RoundingModulus RoundingModulus_6;
  RoundingModulus_6.setString("19490485");
  msg.set(RoundingModulus_6);
  OrderQtyData_6.insert(RoundingModulus_6.getString());
  all_values.push_back(OrderQtyData_6);
  all_compo_names.insert("OrderQtyData");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::ExecutionReport::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_38;
    FIX::PartyID PartyID_38("STRING_1431204715");
    noPartyIDs_0_0.set(PartyID_38);
    Parties_NoPartyIDs_38.insert(PartyID_38.getString());
    FIX::PartyIDSource PartyIDSource_38('F');
    noPartyIDs_0_0.set(PartyIDSource_38);
    Parties_NoPartyIDs_38.insert(PartyIDSource_38.getString());
    FIX::PartyRole PartyRole_38(82);
    noPartyIDs_0_0.set(PartyRole_38);
    Parties_NoPartyIDs_38.insert(PartyRole_38.getString());
    all_values.push_back(Parties_NoPartyIDs_38);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::ExecutionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_83;
      FIX::PartySubID PartySubID_83("STRING_1927653230");
      noPartySubIDs_0_1_0.set(PartySubID_83);
      PtysSubGrp_NoPartySubIDs_83.insert(PartySubID_83.getString());
      FIX::PartySubIDType PartySubIDType_83(19);
      noPartySubIDs_0_1_0.set(PartySubIDType_83);
      PtysSubGrp_NoPartySubIDs_83.insert(PartySubIDType_83.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_83);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  // PegInstructions
  multiset<string> PegInstructions_1;
  FIX::PegLimitType PegLimitType_1(2);
  msg.set(PegLimitType_1);
  PegInstructions_1.insert(PegLimitType_1.getString());
  FIX::PegMoveType PegMoveType_1(0);
  msg.set(PegMoveType_1);
  PegInstructions_1.insert(PegMoveType_1.getString());
  FIX::PegOffsetType PegOffsetType_1(1);
  msg.set(PegOffsetType_1);
  PegInstructions_1.insert(PegOffsetType_1.getString());
  FIX::PegOffsetValue PegOffsetValue_1;
  PegOffsetValue_1.setString("12117329");
  msg.set(PegOffsetValue_1);
  PegInstructions_1.insert(PegOffsetValue_1.getString());
  FIX::PegPriceType PegPriceType_1(2);
  msg.set(PegPriceType_1);
  PegInstructions_1.insert(PegPriceType_1.getString());
  FIX::PegRoundDirection PegRoundDirection_1(1);
  msg.set(PegRoundDirection_1);
  PegInstructions_1.insert(PegRoundDirection_1.getString());
  FIX::PegScope PegScope_1(3);
  msg.set(PegScope_1);
  PegInstructions_1.insert(PegScope_1.getString());
  FIX::PegSecurityDesc PegSecurityDesc_1("STRING_1866883463");
  msg.set(PegSecurityDesc_1);
  PegInstructions_1.insert(PegSecurityDesc_1.getString());
  FIX::PegSecurityID PegSecurityID_1("STRING_2055260095");
  msg.set(PegSecurityID_1);
  PegInstructions_1.insert(PegSecurityID_1.getString());
  FIX::PegSecurityIDSource PegSecurityIDSource_1("STRING_809517066");
  msg.set(PegSecurityIDSource_1);
  PegInstructions_1.insert(PegSecurityIDSource_1.getString());
  FIX::PegSymbol PegSymbol_1("STRING_251182200");
  msg.set(PegSymbol_1);
  PegInstructions_1.insert(PegSymbol_1.getString());
  all_values.push_back(PegInstructions_1);
  all_compo_names.insert("PegInstructions");

  // PreAllocGrp
  // Group PreAllocGrp.NoAllocs
  {
    FIX50SP2::ExecutionReport::NoAllocs noAllocs_0_0;
    // PreAllocGrp.NoAllocs
    multiset<string> PreAllocGrp_NoAllocs_7;
    FIX::AllocAccount AllocAccount_16("STRING_1557469956");
    noAllocs_0_0.set(AllocAccount_16);
    PreAllocGrp_NoAllocs_7.insert(AllocAccount_16.getString());
    FIX::AllocAcctIDSource AllocAcctIDSource_16(824856076);
    noAllocs_0_0.set(AllocAcctIDSource_16);
    PreAllocGrp_NoAllocs_7.insert(AllocAcctIDSource_16.getString());
    FIX::AllocQty AllocQty_15;
    AllocQty_15.setString("4740686");
    noAllocs_0_0.set(AllocQty_15);
    PreAllocGrp_NoAllocs_7.insert(AllocQty_15.getString());
    FIX::AllocSettlCurrency AllocSettlCurrency_11("JPY");
    noAllocs_0_0.set(AllocSettlCurrency_11);
    PreAllocGrp_NoAllocs_7.insert(AllocSettlCurrency_11.getString());
    FIX::IndividualAllocID IndividualAllocID_16("STRING_1709117452");
    noAllocs_0_0.set(IndividualAllocID_16);
    PreAllocGrp_NoAllocs_7.insert(IndividualAllocID_16.getString());
    all_values.push_back(PreAllocGrp_NoAllocs_7);
    all_compo_names.insert("PreAllocGrp.NoAllocs");

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::ExecutionReport::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_42;
      FIX::NestedPartyID NestedPartyID_42("STRING_1381153136");
      noNestedPartyIDs_0_1_0.set(NestedPartyID_42);
      NestedParties_NoNestedPartyIDs_42.insert(NestedPartyID_42.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_42('3');
      noNestedPartyIDs_0_1_0.set(NestedPartyIDSource_42);
      NestedParties_NoNestedPartyIDs_42.insert(NestedPartyIDSource_42.getString());
      FIX::NestedPartyRole NestedPartyRole_42(226857211);
      noNestedPartyIDs_0_1_0.set(NestedPartyRole_42);
      NestedParties_NoNestedPartyIDs_42.insert(NestedPartyRole_42.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_42);
      all_compo_names.insert("NestedParties.NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::ExecutionReport::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_87;
        FIX::NestedPartySubID NestedPartySubID_87("STRING_187558771");
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubID_87);
        NstdPtysSubGrp_NoNestedPartySubIDs_87.insert(NestedPartySubID_87.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_87(2129708137);
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubIDType_87);
        NstdPtysSubGrp_NoNestedPartySubIDs_87.insert(NestedPartySubIDType_87.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_87);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_88;
        FIX::NestedPartySubID NestedPartySubID_88("STRING_1829649279");
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubID_88);
        NstdPtysSubGrp_NoNestedPartySubIDs_88.insert(NestedPartySubID_88.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_88(1502552531);
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubIDType_88);
        NstdPtysSubGrp_NoNestedPartySubIDs_88.insert(NestedPartySubIDType_88.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_88);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::ExecutionReport::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_89;
        FIX::NestedPartySubID NestedPartySubID_89("STRING_2066897342");
        noNestedPartySubIDs_0_0_2_2.set(NestedPartySubID_89);
        NstdPtysSubGrp_NoNestedPartySubIDs_89.insert(NestedPartySubID_89.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_89(941471143);
        noNestedPartySubIDs_0_0_2_2.set(NestedPartySubIDType_89);
        NstdPtysSubGrp_NoNestedPartySubIDs_89.insert(NestedPartySubIDType_89.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_89);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_2);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    msg.addGroup(noAllocs_0_0);
  }
  // RateSource
  // Group RateSource.NoRateSources
  {
    FIX50SP2::ExecutionReport::NoRateSources noRateSources_0_0;
    // RateSource.NoRateSources
    multiset<string> RateSource_NoRateSources_5;
    FIX::RateSource RateSource_8(1);
    noRateSources_0_0.set(RateSource_8);
    RateSource_NoRateSources_5.insert(RateSource_8.getString());
    FIX::RateSourceType RateSourceType_5(0);
    noRateSources_0_0.set(RateSourceType_5);
    RateSource_NoRateSources_5.insert(RateSourceType_5.getString());
    FIX::ReferencePage ReferencePage_5("STRING_1058312427");
    noRateSources_0_0.set(ReferencePage_5);
    RateSource_NoRateSources_5.insert(ReferencePage_5.getString());
    all_values.push_back(RateSource_NoRateSources_5);
    all_compo_names.insert("RateSource.NoRateSources");

    msg.addGroup(noRateSources_0_0);
  }
  {
    FIX50SP2::ExecutionReport::NoRateSources noRateSources_0_1;
    // RateSource.NoRateSources
    multiset<string> RateSource_NoRateSources_6;
    FIX::RateSource RateSource_9(2);
    noRateSources_0_1.set(RateSource_9);
    RateSource_NoRateSources_6.insert(RateSource_9.getString());
    FIX::RateSourceType RateSourceType_6(1);
    noRateSources_0_1.set(RateSourceType_6);
    RateSource_NoRateSources_6.insert(RateSourceType_6.getString());
    FIX::ReferencePage ReferencePage_6("STRING_365995844");
    noRateSources_0_1.set(ReferencePage_6);
    RateSource_NoRateSources_6.insert(ReferencePage_6.getString());
    all_values.push_back(RateSource_NoRateSources_6);
    all_compo_names.insert("RateSource.NoRateSources");

    msg.addGroup(noRateSources_0_1);
  }
  {
    FIX50SP2::ExecutionReport::NoRateSources noRateSources_0_2;
    // RateSource.NoRateSources
    multiset<string> RateSource_NoRateSources_7;
    FIX::RateSource RateSource_10(2);
    noRateSources_0_2.set(RateSource_10);
    RateSource_NoRateSources_7.insert(RateSource_10.getString());
    FIX::RateSourceType RateSourceType_7(0);
    noRateSources_0_2.set(RateSourceType_7);
    RateSource_NoRateSources_7.insert(RateSourceType_7.getString());
    FIX::ReferencePage ReferencePage_7("STRING_85395659");
    noRateSources_0_2.set(ReferencePage_7);
    RateSource_NoRateSources_7.insert(ReferencePage_7.getString());
    all_values.push_back(RateSource_NoRateSources_7);
    all_compo_names.insert("RateSource.NoRateSources");

    msg.addGroup(noRateSources_0_2);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_10;
  FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_10("GBP");
  msg.set(BenchmarkCurveCurrency_10);
  SpreadOrBenchmarkCurveData_10.insert(BenchmarkCurveCurrency_10.getString());
  FIX::BenchmarkCurveName BenchmarkCurveName_10("STRING_EONIA");
  msg.set(BenchmarkCurveName_10);
  SpreadOrBenchmarkCurveData_10.insert(BenchmarkCurveName_10.getString());
  FIX::BenchmarkCurvePoint BenchmarkCurvePoint_10("STRING_1303027267");
  msg.set(BenchmarkCurvePoint_10);
  SpreadOrBenchmarkCurveData_10.insert(BenchmarkCurvePoint_10.getString());
  FIX::BenchmarkPrice BenchmarkPrice_10;
  BenchmarkPrice_10.setString("1817958");
  msg.set(BenchmarkPrice_10);
  SpreadOrBenchmarkCurveData_10.insert(BenchmarkPrice_10.getString());
  FIX::BenchmarkPriceType BenchmarkPriceType_10(1161433936);
  msg.set(BenchmarkPriceType_10);
  SpreadOrBenchmarkCurveData_10.insert(BenchmarkPriceType_10.getString());
  FIX::BenchmarkSecurityID BenchmarkSecurityID_10("STRING_1777095934");
  msg.set(BenchmarkSecurityID_10);
  SpreadOrBenchmarkCurveData_10.insert(BenchmarkSecurityID_10.getString());
  FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_10("STRING_2090661996");
  msg.set(BenchmarkSecurityIDSource_10);
  SpreadOrBenchmarkCurveData_10.insert(BenchmarkSecurityIDSource_10.getString());
  FIX::Spread Spread_10;
  Spread_10.setString("6632145");
  msg.set(Spread_10);
  SpreadOrBenchmarkCurveData_10.insert(Spread_10.getString());
  all_values.push_back(SpreadOrBenchmarkCurveData_10);
  all_compo_names.insert("SpreadOrBenchmarkCurveData");

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::ExecutionReport::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_20;
    FIX::StipulationType StipulationType_20("STRING_PROD");
    noStipulations_0_0.set(StipulationType_20);
    Stipulations_NoStipulations_20.insert(StipulationType_20.getString());
    FIX::StipulationValue StipulationValue_20("STRING_2044367678");
    noStipulations_0_0.set(StipulationValue_20);
    Stipulations_NoStipulations_20.insert(StipulationValue_20.getString());
    all_values.push_back(Stipulations_NoStipulations_20);
    all_compo_names.insert("Stipulations.NoStipulations");

    msg.addGroup(noStipulations_0_0);
  }
  {
    FIX50SP2::ExecutionReport::NoStipulations noStipulations_0_1;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_21;
    FIX::StipulationType StipulationType_21("STRING_REFPRIN");
    noStipulations_0_1.set(StipulationType_21);
    Stipulations_NoStipulations_21.insert(StipulationType_21.getString());
    FIX::StipulationValue StipulationValue_21("STRING_893113241");
    noStipulations_0_1.set(StipulationValue_21);
    Stipulations_NoStipulations_21.insert(StipulationValue_21.getString());
    all_values.push_back(Stipulations_NoStipulations_21);
    all_compo_names.insert("Stipulations.NoStipulations");

    msg.addGroup(noStipulations_0_1);
  }
  // StrategyParametersGrp
  // Group StrategyParametersGrp.NoStrategyParameters
  {
    FIX50SP2::ExecutionReport::NoStrategyParameters noStrategyParameters_0_0;
    // StrategyParametersGrp.NoStrategyParameters
    multiset<string> StrategyParametersGrp_NoStrategyParameters_1;
    FIX::StrategyParameterName StrategyParameterName_1("STRING_1912282427");
    noStrategyParameters_0_0.set(StrategyParameterName_1);
    StrategyParametersGrp_NoStrategyParameters_1.insert(StrategyParameterName_1.getString());
    FIX::StrategyParameterType StrategyParameterType_1(20);
    noStrategyParameters_0_0.set(StrategyParameterType_1);
    StrategyParametersGrp_NoStrategyParameters_1.insert(StrategyParameterType_1.getString());
    FIX::StrategyParameterValue StrategyParameterValue_1("STRING_2124977873");
    noStrategyParameters_0_0.set(StrategyParameterValue_1);
    StrategyParametersGrp_NoStrategyParameters_1.insert(StrategyParameterValue_1.getString());
    all_values.push_back(StrategyParametersGrp_NoStrategyParameters_1);
    all_compo_names.insert("StrategyParametersGrp.NoStrategyParameters");

    msg.addGroup(noStrategyParameters_0_0);
  }
  {
    FIX50SP2::ExecutionReport::NoStrategyParameters noStrategyParameters_0_1;
    // StrategyParametersGrp.NoStrategyParameters
    multiset<string> StrategyParametersGrp_NoStrategyParameters_2;
    FIX::StrategyParameterName StrategyParameterName_2("STRING_1267351310");
    noStrategyParameters_0_1.set(StrategyParameterName_2);
    StrategyParametersGrp_NoStrategyParameters_2.insert(StrategyParameterName_2.getString());
    FIX::StrategyParameterType StrategyParameterType_2(16);
    noStrategyParameters_0_1.set(StrategyParameterType_2);
    StrategyParametersGrp_NoStrategyParameters_2.insert(StrategyParameterType_2.getString());
    FIX::StrategyParameterValue StrategyParameterValue_2("STRING_918965368");
    noStrategyParameters_0_1.set(StrategyParameterValue_2);
    StrategyParametersGrp_NoStrategyParameters_2.insert(StrategyParameterValue_2.getString());
    all_values.push_back(StrategyParametersGrp_NoStrategyParameters_2);
    all_compo_names.insert("StrategyParametersGrp.NoStrategyParameters");

    msg.addGroup(noStrategyParameters_0_1);
  }
  {
    FIX50SP2::ExecutionReport::NoStrategyParameters noStrategyParameters_0_2;
    // StrategyParametersGrp.NoStrategyParameters
    multiset<string> StrategyParametersGrp_NoStrategyParameters_3;
    FIX::StrategyParameterName StrategyParameterName_3("STRING_402589775");
    noStrategyParameters_0_2.set(StrategyParameterName_3);
    StrategyParametersGrp_NoStrategyParameters_3.insert(StrategyParameterName_3.getString());
    FIX::StrategyParameterType StrategyParameterType_3(29);
    noStrategyParameters_0_2.set(StrategyParameterType_3);
    StrategyParametersGrp_NoStrategyParameters_3.insert(StrategyParameterType_3.getString());
    FIX::StrategyParameterValue StrategyParameterValue_3("STRING_1230733490");
    noStrategyParameters_0_2.set(StrategyParameterValue_3);
    StrategyParametersGrp_NoStrategyParameters_3.insert(StrategyParameterValue_3.getString());
    all_values.push_back(StrategyParametersGrp_NoStrategyParameters_3);
    all_compo_names.insert("StrategyParametersGrp.NoStrategyParameters");

    msg.addGroup(noStrategyParameters_0_2);
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
    FIX::DeskType DeskType_10("STRING_IS");
    noTrdRegTimestamps_0_0.set(DeskType_10);
    TrdRegTimestamps_NoTrdRegTimestamps_10.insert(DeskType_10.getString());
    FIX::DeskTypeSource DeskTypeSource_10(1);
    noTrdRegTimestamps_0_0.set(DeskTypeSource_10);
    TrdRegTimestamps_NoTrdRegTimestamps_10.insert(DeskTypeSource_10.getString());
    FIX::TrdRegTimestamp TrdRegTimestamp_10(FIX::UTCTIMESTAMP(20, 47, 6, 24, 4, 2008));
    noTrdRegTimestamps_0_0.set(TrdRegTimestamp_10);
    TrdRegTimestamps_NoTrdRegTimestamps_10.insert(TrdRegTimestamp_10.getString());
    FIX::TrdRegTimestampOrigin TrdRegTimestampOrigin_10("STRING_1522648744");
    noTrdRegTimestamps_0_0.set(TrdRegTimestampOrigin_10);
    TrdRegTimestamps_NoTrdRegTimestamps_10.insert(TrdRegTimestampOrigin_10.getString());
    FIX::TrdRegTimestampType TrdRegTimestampType_10(2);
    noTrdRegTimestamps_0_0.set(TrdRegTimestampType_10);
    TrdRegTimestamps_NoTrdRegTimestamps_10.insert(TrdRegTimestampType_10.getString());
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_10);
    all_compo_names.insert("TrdRegTimestamps.NoTrdRegTimestamps");

    msg.addGroup(noTrdRegTimestamps_0_0);
  }
  // TriggeringInstruction
  multiset<string> TriggeringInstruction_1;
  FIX::TriggerAction TriggerAction_1('2');
  msg.set(TriggerAction_1);
  TriggeringInstruction_1.insert(TriggerAction_1.getString());
  FIX::TriggerNewPrice TriggerNewPrice_1;
  TriggerNewPrice_1.setString("14658270");
  msg.set(TriggerNewPrice_1);
  TriggeringInstruction_1.insert(TriggerNewPrice_1.getString());
  FIX::TriggerNewQty TriggerNewQty_1;
  TriggerNewQty_1.setString("19260363");
  msg.set(TriggerNewQty_1);
  TriggeringInstruction_1.insert(TriggerNewQty_1.getString());
  FIX::TriggerOrderType TriggerOrderType_1('2');
  msg.set(TriggerOrderType_1);
  TriggeringInstruction_1.insert(TriggerOrderType_1.getString());
  FIX::TriggerPrice TriggerPrice_1;
  TriggerPrice_1.setString("21320831");
  msg.set(TriggerPrice_1);
  TriggeringInstruction_1.insert(TriggerPrice_1.getString());
  FIX::TriggerPriceDirection TriggerPriceDirection_1('U');
  msg.set(TriggerPriceDirection_1);
  TriggeringInstruction_1.insert(TriggerPriceDirection_1.getString());
  FIX::TriggerPriceType TriggerPriceType_1('6');
  msg.set(TriggerPriceType_1);
  TriggeringInstruction_1.insert(TriggerPriceType_1.getString());
  FIX::TriggerPriceTypeScope TriggerPriceTypeScope_1('3');
  msg.set(TriggerPriceTypeScope_1);
  TriggeringInstruction_1.insert(TriggerPriceTypeScope_1.getString());
  FIX::TriggerSecurityDesc TriggerSecurityDesc_1("STRING_2118249023");
  msg.set(TriggerSecurityDesc_1);
  TriggeringInstruction_1.insert(TriggerSecurityDesc_1.getString());
  FIX::TriggerSecurityID TriggerSecurityID_1("STRING_184964739");
  msg.set(TriggerSecurityID_1);
  TriggeringInstruction_1.insert(TriggerSecurityID_1.getString());
  FIX::TriggerSecurityIDSource TriggerSecurityIDSource_1("STRING_1753050445");
  msg.set(TriggerSecurityIDSource_1);
  TriggeringInstruction_1.insert(TriggerSecurityIDSource_1.getString());
  FIX::TriggerSymbol TriggerSymbol_1("STRING_2095743248");
  msg.set(TriggerSymbol_1);
  TriggeringInstruction_1.insert(TriggerSymbol_1.getString());
  FIX::TriggerTradingSessionID TriggerTradingSessionID_1("STRING_1452316049");
  msg.set(TriggerTradingSessionID_1);
  TriggeringInstruction_1.insert(TriggerTradingSessionID_1.getString());
  FIX::TriggerTradingSessionSubID TriggerTradingSessionSubID_1("STRING_400318222");
  msg.set(TriggerTradingSessionSubID_1);
  TriggeringInstruction_1.insert(TriggerTradingSessionSubID_1.getString());
  FIX::TriggerType TriggerType_1('2');
  msg.set(TriggerType_1);
  TriggeringInstruction_1.insert(TriggerType_1.getString());
  all_values.push_back(TriggeringInstruction_1);
  all_compo_names.insert("TriggeringInstruction");

  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::ExecutionReport::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_41;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_41("DATA_422926215");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_41);
    UnderlyingInstrument_41.insert(EncodedUnderlyingIssuer_41.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_41(2097958459);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_41);
    UnderlyingInstrument_41.insert(EncodedUnderlyingIssuerLen_41.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_41("DATA_1168324380");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_41);
    UnderlyingInstrument_41.insert(EncodedUnderlyingSecurityDesc_41.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_41(1980860383);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_41);
    UnderlyingInstrument_41.insert(EncodedUnderlyingSecurityDescLen_41.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_41;
    UnderlyingAdjustedQuantity_41.setString("5572257");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_41);
    UnderlyingInstrument_41.insert(UnderlyingAdjustedQuantity_41.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_41;
    UnderlyingAllocationPercent_41.setString("87.790000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_41);
    UnderlyingInstrument_41.insert(UnderlyingAllocationPercent_41.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_41;
    UnderlyingAttachmentPoint_41.setString("57.480000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_41);
    UnderlyingInstrument_41.insert(UnderlyingAttachmentPoint_41.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_41("STRING_1126269109");
    noUnderlyings_0_0.set(UnderlyingCFICode_41);
    UnderlyingInstrument_41.insert(UnderlyingCFICode_41.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_41("STRING_612548838");
    noUnderlyings_0_0.set(UnderlyingCPProgram_41);
    UnderlyingInstrument_41.insert(UnderlyingCPProgram_41.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_41("STRING_1737016055");
    noUnderlyings_0_0.set(UnderlyingCPRegType_41);
    UnderlyingInstrument_41.insert(UnderlyingCPRegType_41.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_41;
    UnderlyingCapValue_41.setString("3196383");
    noUnderlyings_0_0.set(UnderlyingCapValue_41);
    UnderlyingInstrument_41.insert(UnderlyingCapValue_41.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_41;
    UnderlyingCashAmount_41.setString("7139367");
    noUnderlyings_0_0.set(UnderlyingCashAmount_41);
    UnderlyingInstrument_41.insert(UnderlyingCashAmount_41.getString());
    FIX::UnderlyingCashType UnderlyingCashType_41("STRING_DIFF");
    noUnderlyings_0_0.set(UnderlyingCashType_41);
    UnderlyingInstrument_41.insert(UnderlyingCashType_41.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_41;
    UnderlyingContractMultiplier_41.setString("18422871");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_41);
    UnderlyingInstrument_41.insert(UnderlyingContractMultiplier_41.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_41(1976758613);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_41);
    UnderlyingInstrument_41.insert(UnderlyingContractMultiplierUnit_41.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_41("COUNTRY_1115796193");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_41);
    UnderlyingInstrument_41.insert(UnderlyingCountryOfIssue_41.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_41("LOCALMKTDATE_1160630557");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_41);
    UnderlyingInstrument_41.insert(UnderlyingCouponPaymentDate_41.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_41;
    UnderlyingCouponRate_41.setString("13.630000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_41);
    UnderlyingInstrument_41.insert(UnderlyingCouponRate_41.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_41("STRING_1958722145");
    noUnderlyings_0_0.set(UnderlyingCreditRating_41);
    UnderlyingInstrument_41.insert(UnderlyingCreditRating_41.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_41("CAN");
    noUnderlyings_0_0.set(UnderlyingCurrency_41);
    UnderlyingInstrument_41.insert(UnderlyingCurrency_41.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_41;
    UnderlyingCurrentValue_41.setString("2314044");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_41);
    UnderlyingInstrument_41.insert(UnderlyingCurrentValue_41.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_41;
    UnderlyingDetachmentPoint_41.setString("27.460000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_41);
    UnderlyingInstrument_41.insert(UnderlyingDetachmentPoint_41.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_41;
    UnderlyingDirtyPrice_41.setString("14015135");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_41);
    UnderlyingInstrument_41.insert(UnderlyingDirtyPrice_41.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_41;
    UnderlyingEndPrice_41.setString("4163691");
    noUnderlyings_0_0.set(UnderlyingEndPrice_41);
    UnderlyingInstrument_41.insert(UnderlyingEndPrice_41.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_41;
    UnderlyingEndValue_41.setString("16285095");
    noUnderlyings_0_0.set(UnderlyingEndValue_41);
    UnderlyingInstrument_41.insert(UnderlyingEndValue_41.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_41(1349773119);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_41);
    UnderlyingInstrument_41.insert(UnderlyingExerciseStyle_41.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_41;
    UnderlyingFXRate_41.setString("18686852");
    noUnderlyings_0_0.set(UnderlyingFXRate_41);
    UnderlyingInstrument_41.insert(UnderlyingFXRate_41.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_41('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_41);
    UnderlyingInstrument_41.insert(UnderlyingFXRateCalc_41.getString());
    FIX::UnderlyingFactor UnderlyingFactor_41;
    UnderlyingFactor_41.setString("695144");
    noUnderlyings_0_0.set(UnderlyingFactor_41);
    UnderlyingInstrument_41.insert(UnderlyingFactor_41.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_41(1576107422);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_41);
    UnderlyingInstrument_41.insert(UnderlyingFlowScheduleType_41.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_41("STRING_304270333");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_41);
    UnderlyingInstrument_41.insert(UnderlyingInstrRegistry_41.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_41("LOCALMKTDATE_19989251");
    noUnderlyings_0_0.set(UnderlyingIssueDate_41);
    UnderlyingInstrument_41.insert(UnderlyingIssueDate_41.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_41("STRING_596948154");
    noUnderlyings_0_0.set(UnderlyingIssuer_41);
    UnderlyingInstrument_41.insert(UnderlyingIssuer_41.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_41("STRING_137647068");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_41);
    UnderlyingInstrument_41.insert(UnderlyingLocaleOfIssue_41.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_41("LOCALMKTDATE_577214981");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_41);
    UnderlyingInstrument_41.insert(UnderlyingMaturityDate_41.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_41("MONTHYEAR_1444686933");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_41);
    UnderlyingInstrument_41.insert(UnderlyingMaturityMonthYear_41.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_41("TZTIMEONLY_1155622817");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_41);
    UnderlyingInstrument_41.insert(UnderlyingMaturityTime_41.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_41;
    UnderlyingNotionalPercentageOutstanding_41.setString("40.900000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_41);
    UnderlyingInstrument_41.insert(UnderlyingNotionalPercentageOutstanding_41.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_41('2');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_41);
    UnderlyingInstrument_41.insert(UnderlyingOptAttribute_41.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_41;
    UnderlyingOriginalNotionalPercentageOutstanding_41.setString("52.240000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_41);
    UnderlyingInstrument_41.insert(UnderlyingOriginalNotionalPercentageOutstanding_41.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_41("STRING_2023122460");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_41);
    UnderlyingInstrument_41.insert(UnderlyingPriceUnitOfMeasure_41.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_41;
    UnderlyingPriceUnitOfMeasureQty_41.setString("6236888");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_41);
    UnderlyingInstrument_41.insert(UnderlyingPriceUnitOfMeasureQty_41.getString());
    FIX::UnderlyingProduct UnderlyingProduct_41(209271557);
    noUnderlyings_0_0.set(UnderlyingProduct_41);
    UnderlyingInstrument_41.insert(UnderlyingProduct_41.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_41(1717925925);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_41);
    UnderlyingInstrument_41.insert(UnderlyingPutOrCall_41.getString());
    FIX::UnderlyingPx UnderlyingPx_41;
    UnderlyingPx_41.setString("4529638");
    noUnderlyings_0_0.set(UnderlyingPx_41);
    UnderlyingInstrument_41.insert(UnderlyingPx_41.getString());
    FIX::UnderlyingQty UnderlyingQty_41;
    UnderlyingQty_41.setString("13250677");
    noUnderlyings_0_0.set(UnderlyingQty_41);
    UnderlyingInstrument_41.insert(UnderlyingQty_41.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_41("LOCALMKTDATE_731072835");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_41);
    UnderlyingInstrument_41.insert(UnderlyingRedemptionDate_41.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_41("STRING_60791561");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_41);
    UnderlyingInstrument_41.insert(UnderlyingRepoCollateralSecurityType_41.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_41;
    UnderlyingRepurchaseRate_41.setString("62.470000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_41);
    UnderlyingInstrument_41.insert(UnderlyingRepurchaseRate_41.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_41(1876302866);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_41);
    UnderlyingInstrument_41.insert(UnderlyingRepurchaseTerm_41.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_41("STRING_1491539705");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_41);
    UnderlyingInstrument_41.insert(UnderlyingRestructuringType_41.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_41("STRING_1367710704");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_41);
    UnderlyingInstrument_41.insert(UnderlyingSecurityDesc_41.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_41("EXCHANGE_1751761965");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_41);
    UnderlyingInstrument_41.insert(UnderlyingSecurityExchange_41.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_41("STRING_745569575");
    noUnderlyings_0_0.set(UnderlyingSecurityID_41);
    UnderlyingInstrument_41.insert(UnderlyingSecurityID_41.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_41("STRING_1784079899");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_41);
    UnderlyingInstrument_41.insert(UnderlyingSecurityIDSource_41.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_41("STRING_1232787861");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_41);
    UnderlyingInstrument_41.insert(UnderlyingSecuritySubType_41.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_41("STRING_2095342694");
    noUnderlyings_0_0.set(UnderlyingSecurityType_41);
    UnderlyingInstrument_41.insert(UnderlyingSecurityType_41.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_41("STRING_1505281496");
    noUnderlyings_0_0.set(UnderlyingSeniority_41);
    UnderlyingInstrument_41.insert(UnderlyingSeniority_41.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_41("STRING_1114131979");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_41);
    UnderlyingInstrument_41.insert(UnderlyingSettlMethod_41.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_41(2);
    noUnderlyings_0_0.set(UnderlyingSettlementType_41);
    UnderlyingInstrument_41.insert(UnderlyingSettlementType_41.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_41;
    UnderlyingStartValue_41.setString("9339052");
    noUnderlyings_0_0.set(UnderlyingStartValue_41);
    UnderlyingInstrument_41.insert(UnderlyingStartValue_41.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_41("STRING_1418402312");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_41);
    UnderlyingInstrument_41.insert(UnderlyingStateOrProvinceOfIssue_41.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_41("GBP");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_41);
    UnderlyingInstrument_41.insert(UnderlyingStrikeCurrency_41.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_41;
    UnderlyingStrikePrice_41.setString("15560493");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_41);
    UnderlyingInstrument_41.insert(UnderlyingStrikePrice_41.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_41("STRING_614577719");
    noUnderlyings_0_0.set(UnderlyingSymbol_41);
    UnderlyingInstrument_41.insert(UnderlyingSymbol_41.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_41("STRING_828056710");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_41);
    UnderlyingInstrument_41.insert(UnderlyingSymbolSfx_41.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_41("STRING_564188550");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_41);
    UnderlyingInstrument_41.insert(UnderlyingTimeUnit_41.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_41("STRING_170578161");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_41);
    UnderlyingInstrument_41.insert(UnderlyingUnitOfMeasure_41.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_41;
    UnderlyingUnitOfMeasureQty_41.setString("7378088");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_41);
    UnderlyingInstrument_41.insert(UnderlyingUnitOfMeasureQty_41.getString());
    all_values.push_back(UnderlyingInstrument_41);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::ExecutionReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_88;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_88("STRING_46216973");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_88);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_88.insert(UnderlyingSecurityAltID_88.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_88("STRING_1361497715");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_88);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_88.insert(UnderlyingSecurityAltIDSource_88.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_88);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_89;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_89("STRING_1518615331");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_89);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_89.insert(UnderlyingSecurityAltID_89.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_89("STRING_1764142899");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_89);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_89.insert(UnderlyingSecurityAltIDSource_89.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_89);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::ExecutionReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_90;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_90("STRING_1814461562");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltID_90);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_90.insert(UnderlyingSecurityAltID_90.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_90("STRING_696199433");
      noUnderlyingSecurityAltID_0_1_2.set(UnderlyingSecurityAltIDSource_90);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_90.insert(UnderlyingSecurityAltIDSource_90.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_90);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::ExecutionReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_82;
      FIX::UnderlyingStipType UnderlyingStipType_82("STRING_1875253123");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_82);
      UnderlyingStipulations_NoUnderlyingStips_82.insert(UnderlyingStipType_82.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_82("STRING_1832505681");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_82);
      UnderlyingStipulations_NoUnderlyingStips_82.insert(UnderlyingStipValue_82.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_82);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_83;
      FIX::UnderlyingStipType UnderlyingStipType_83("STRING_76551304");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_83);
      UnderlyingStipulations_NoUnderlyingStips_83.insert(UnderlyingStipType_83.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_83("STRING_1219309180");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_83);
      UnderlyingStipulations_NoUnderlyingStips_83.insert(UnderlyingStipValue_83.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_83);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::ExecutionReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_77;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_77("STRING_1828313269");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_77);
      UndlyInstrumentParties_NoUndlyInstrumentParties_77.insert(UnderlyingInstrumentPartyID_77.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_77('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_77);
      UndlyInstrumentParties_NoUndlyInstrumentParties_77.insert(UnderlyingInstrumentPartyIDSource_77.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_77(689328988);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_77);
      UndlyInstrumentParties_NoUndlyInstrumentParties_77.insert(UnderlyingInstrumentPartyRole_77.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_77);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::ExecutionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_150;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_150("STRING_1912737802");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_150);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_150.insert(UnderlyingInstrumentPartySubID_150.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_150(47126837);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_150);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_150.insert(UnderlyingInstrumentPartySubIDType_150.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_150);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_151;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_151("STRING_2027749461");
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubID_151);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_151.insert(UnderlyingInstrumentPartySubID_151.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_151(1930111289);
        noUndlyInstrumentPartySubIDs_0_0_2_1.set(UnderlyingInstrumentPartySubIDType_151);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_151.insert(UnderlyingInstrumentPartySubIDType_151.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_151);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::ExecutionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_152;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_152("STRING_981032107");
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubID_152);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_152.insert(UnderlyingInstrumentPartySubID_152.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_152(1298668126);
        noUndlyInstrumentPartySubIDs_0_0_2_2.set(UnderlyingInstrumentPartySubIDType_152);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_152.insert(UnderlyingInstrumentPartySubIDType_152.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_152);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_78;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_78("STRING_1967474027");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_78);
      UndlyInstrumentParties_NoUndlyInstrumentParties_78.insert(UnderlyingInstrumentPartyID_78.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_78('3');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_78);
      UndlyInstrumentParties_NoUndlyInstrumentParties_78.insert(UnderlyingInstrumentPartyIDSource_78.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_78(707233859);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_78);
      UndlyInstrumentParties_NoUndlyInstrumentParties_78.insert(UnderlyingInstrumentPartyRole_78.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_78);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::ExecutionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_153;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_153("STRING_1192458594");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_153);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_153.insert(UnderlyingInstrumentPartySubID_153.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_153(1271422409);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_153);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_153.insert(UnderlyingInstrumentPartySubIDType_153.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_153);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_154;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_154("STRING_605146259");
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubID_154);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_154.insert(UnderlyingInstrumentPartySubID_154.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_154(1930267428);
        noUndlyInstrumentPartySubIDs_0_1_2_1.set(UnderlyingInstrumentPartySubIDType_154);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_154.insert(UnderlyingInstrumentPartySubIDType_154.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_154);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::ExecutionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_155;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_155("STRING_433282535");
        noUndlyInstrumentPartySubIDs_0_1_2_2.set(UnderlyingInstrumentPartySubID_155);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_155.insert(UnderlyingInstrumentPartySubID_155.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_155(651363233);
        noUndlyInstrumentPartySubIDs_0_1_2_2.set(UnderlyingInstrumentPartySubIDType_155);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_155.insert(UnderlyingInstrumentPartySubIDType_155.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_155);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

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
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_42("DATA_1144281495");
    noUnderlyings_0_1.set(EncodedUnderlyingIssuer_42);
    UnderlyingInstrument_42.insert(EncodedUnderlyingIssuer_42.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_42(1951897866);
    noUnderlyings_0_1.set(EncodedUnderlyingIssuerLen_42);
    UnderlyingInstrument_42.insert(EncodedUnderlyingIssuerLen_42.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_42("DATA_268022484");
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDesc_42);
    UnderlyingInstrument_42.insert(EncodedUnderlyingSecurityDesc_42.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_42(811259409);
    noUnderlyings_0_1.set(EncodedUnderlyingSecurityDescLen_42);
    UnderlyingInstrument_42.insert(EncodedUnderlyingSecurityDescLen_42.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_42;
    UnderlyingAdjustedQuantity_42.setString("5006136");
    noUnderlyings_0_1.set(UnderlyingAdjustedQuantity_42);
    UnderlyingInstrument_42.insert(UnderlyingAdjustedQuantity_42.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_42;
    UnderlyingAllocationPercent_42.setString("45.700000");
    noUnderlyings_0_1.set(UnderlyingAllocationPercent_42);
    UnderlyingInstrument_42.insert(UnderlyingAllocationPercent_42.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_42;
    UnderlyingAttachmentPoint_42.setString("88.850000");
    noUnderlyings_0_1.set(UnderlyingAttachmentPoint_42);
    UnderlyingInstrument_42.insert(UnderlyingAttachmentPoint_42.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_42("STRING_185635684");
    noUnderlyings_0_1.set(UnderlyingCFICode_42);
    UnderlyingInstrument_42.insert(UnderlyingCFICode_42.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_42("STRING_692305874");
    noUnderlyings_0_1.set(UnderlyingCPProgram_42);
    UnderlyingInstrument_42.insert(UnderlyingCPProgram_42.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_42("STRING_1758338065");
    noUnderlyings_0_1.set(UnderlyingCPRegType_42);
    UnderlyingInstrument_42.insert(UnderlyingCPRegType_42.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_42;
    UnderlyingCapValue_42.setString("12383684");
    noUnderlyings_0_1.set(UnderlyingCapValue_42);
    UnderlyingInstrument_42.insert(UnderlyingCapValue_42.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_42;
    UnderlyingCashAmount_42.setString("3731354");
    noUnderlyings_0_1.set(UnderlyingCashAmount_42);
    UnderlyingInstrument_42.insert(UnderlyingCashAmount_42.getString());
    FIX::UnderlyingCashType UnderlyingCashType_42("STRING_DIFF");
    noUnderlyings_0_1.set(UnderlyingCashType_42);
    UnderlyingInstrument_42.insert(UnderlyingCashType_42.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_42;
    UnderlyingContractMultiplier_42.setString("19276974");
    noUnderlyings_0_1.set(UnderlyingContractMultiplier_42);
    UnderlyingInstrument_42.insert(UnderlyingContractMultiplier_42.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_42(1286752978);
    noUnderlyings_0_1.set(UnderlyingContractMultiplierUnit_42);
    UnderlyingInstrument_42.insert(UnderlyingContractMultiplierUnit_42.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_42("COUNTRY_1340987328");
    noUnderlyings_0_1.set(UnderlyingCountryOfIssue_42);
    UnderlyingInstrument_42.insert(UnderlyingCountryOfIssue_42.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_42("LOCALMKTDATE_1974824247");
    noUnderlyings_0_1.set(UnderlyingCouponPaymentDate_42);
    UnderlyingInstrument_42.insert(UnderlyingCouponPaymentDate_42.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_42;
    UnderlyingCouponRate_42.setString("87.920000");
    noUnderlyings_0_1.set(UnderlyingCouponRate_42);
    UnderlyingInstrument_42.insert(UnderlyingCouponRate_42.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_42("STRING_1123614969");
    noUnderlyings_0_1.set(UnderlyingCreditRating_42);
    UnderlyingInstrument_42.insert(UnderlyingCreditRating_42.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_42("GBP");
    noUnderlyings_0_1.set(UnderlyingCurrency_42);
    UnderlyingInstrument_42.insert(UnderlyingCurrency_42.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_42;
    UnderlyingCurrentValue_42.setString("9436053");
    noUnderlyings_0_1.set(UnderlyingCurrentValue_42);
    UnderlyingInstrument_42.insert(UnderlyingCurrentValue_42.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_42;
    UnderlyingDetachmentPoint_42.setString("45.900000");
    noUnderlyings_0_1.set(UnderlyingDetachmentPoint_42);
    UnderlyingInstrument_42.insert(UnderlyingDetachmentPoint_42.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_42;
    UnderlyingDirtyPrice_42.setString("10254371");
    noUnderlyings_0_1.set(UnderlyingDirtyPrice_42);
    UnderlyingInstrument_42.insert(UnderlyingDirtyPrice_42.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_42;
    UnderlyingEndPrice_42.setString("13781734");
    noUnderlyings_0_1.set(UnderlyingEndPrice_42);
    UnderlyingInstrument_42.insert(UnderlyingEndPrice_42.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_42;
    UnderlyingEndValue_42.setString("2177495");
    noUnderlyings_0_1.set(UnderlyingEndValue_42);
    UnderlyingInstrument_42.insert(UnderlyingEndValue_42.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_42(149375890);
    noUnderlyings_0_1.set(UnderlyingExerciseStyle_42);
    UnderlyingInstrument_42.insert(UnderlyingExerciseStyle_42.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_42;
    UnderlyingFXRate_42.setString("19833197");
    noUnderlyings_0_1.set(UnderlyingFXRate_42);
    UnderlyingInstrument_42.insert(UnderlyingFXRate_42.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_42('D');
    noUnderlyings_0_1.set(UnderlyingFXRateCalc_42);
    UnderlyingInstrument_42.insert(UnderlyingFXRateCalc_42.getString());
    FIX::UnderlyingFactor UnderlyingFactor_42;
    UnderlyingFactor_42.setString("5826584");
    noUnderlyings_0_1.set(UnderlyingFactor_42);
    UnderlyingInstrument_42.insert(UnderlyingFactor_42.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_42(487199290);
    noUnderlyings_0_1.set(UnderlyingFlowScheduleType_42);
    UnderlyingInstrument_42.insert(UnderlyingFlowScheduleType_42.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_42("STRING_1144814812");
    noUnderlyings_0_1.set(UnderlyingInstrRegistry_42);
    UnderlyingInstrument_42.insert(UnderlyingInstrRegistry_42.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_42("LOCALMKTDATE_387072643");
    noUnderlyings_0_1.set(UnderlyingIssueDate_42);
    UnderlyingInstrument_42.insert(UnderlyingIssueDate_42.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_42("STRING_755221774");
    noUnderlyings_0_1.set(UnderlyingIssuer_42);
    UnderlyingInstrument_42.insert(UnderlyingIssuer_42.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_42("STRING_1956074221");
    noUnderlyings_0_1.set(UnderlyingLocaleOfIssue_42);
    UnderlyingInstrument_42.insert(UnderlyingLocaleOfIssue_42.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_42("LOCALMKTDATE_887686294");
    noUnderlyings_0_1.set(UnderlyingMaturityDate_42);
    UnderlyingInstrument_42.insert(UnderlyingMaturityDate_42.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_42("MONTHYEAR_1370976344");
    noUnderlyings_0_1.set(UnderlyingMaturityMonthYear_42);
    UnderlyingInstrument_42.insert(UnderlyingMaturityMonthYear_42.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_42("TZTIMEONLY_347619458");
    noUnderlyings_0_1.set(UnderlyingMaturityTime_42);
    UnderlyingInstrument_42.insert(UnderlyingMaturityTime_42.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_42;
    UnderlyingNotionalPercentageOutstanding_42.setString("19.790000");
    noUnderlyings_0_1.set(UnderlyingNotionalPercentageOutstanding_42);
    UnderlyingInstrument_42.insert(UnderlyingNotionalPercentageOutstanding_42.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_42('2');
    noUnderlyings_0_1.set(UnderlyingOptAttribute_42);
    UnderlyingInstrument_42.insert(UnderlyingOptAttribute_42.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_42;
    UnderlyingOriginalNotionalPercentageOutstanding_42.setString("75.240000");
    noUnderlyings_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_42);
    UnderlyingInstrument_42.insert(UnderlyingOriginalNotionalPercentageOutstanding_42.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_42("STRING_164206752");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasure_42);
    UnderlyingInstrument_42.insert(UnderlyingPriceUnitOfMeasure_42.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_42;
    UnderlyingPriceUnitOfMeasureQty_42.setString("2889340");
    noUnderlyings_0_1.set(UnderlyingPriceUnitOfMeasureQty_42);
    UnderlyingInstrument_42.insert(UnderlyingPriceUnitOfMeasureQty_42.getString());
    FIX::UnderlyingProduct UnderlyingProduct_42(1534207049);
    noUnderlyings_0_1.set(UnderlyingProduct_42);
    UnderlyingInstrument_42.insert(UnderlyingProduct_42.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_42(2091904162);
    noUnderlyings_0_1.set(UnderlyingPutOrCall_42);
    UnderlyingInstrument_42.insert(UnderlyingPutOrCall_42.getString());
    FIX::UnderlyingPx UnderlyingPx_42;
    UnderlyingPx_42.setString("15756870");
    noUnderlyings_0_1.set(UnderlyingPx_42);
    UnderlyingInstrument_42.insert(UnderlyingPx_42.getString());
    FIX::UnderlyingQty UnderlyingQty_42;
    UnderlyingQty_42.setString("7277107");
    noUnderlyings_0_1.set(UnderlyingQty_42);
    UnderlyingInstrument_42.insert(UnderlyingQty_42.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_42("LOCALMKTDATE_1919244761");
    noUnderlyings_0_1.set(UnderlyingRedemptionDate_42);
    UnderlyingInstrument_42.insert(UnderlyingRedemptionDate_42.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_42("STRING_595222189");
    noUnderlyings_0_1.set(UnderlyingRepoCollateralSecurityType_42);
    UnderlyingInstrument_42.insert(UnderlyingRepoCollateralSecurityType_42.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_42;
    UnderlyingRepurchaseRate_42.setString("56.980000");
    noUnderlyings_0_1.set(UnderlyingRepurchaseRate_42);
    UnderlyingInstrument_42.insert(UnderlyingRepurchaseRate_42.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_42(580133820);
    noUnderlyings_0_1.set(UnderlyingRepurchaseTerm_42);
    UnderlyingInstrument_42.insert(UnderlyingRepurchaseTerm_42.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_42("STRING_913425459");
    noUnderlyings_0_1.set(UnderlyingRestructuringType_42);
    UnderlyingInstrument_42.insert(UnderlyingRestructuringType_42.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_42("STRING_647447398");
    noUnderlyings_0_1.set(UnderlyingSecurityDesc_42);
    UnderlyingInstrument_42.insert(UnderlyingSecurityDesc_42.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_42("EXCHANGE_1752908410");
    noUnderlyings_0_1.set(UnderlyingSecurityExchange_42);
    UnderlyingInstrument_42.insert(UnderlyingSecurityExchange_42.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_42("STRING_1938862588");
    noUnderlyings_0_1.set(UnderlyingSecurityID_42);
    UnderlyingInstrument_42.insert(UnderlyingSecurityID_42.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_42("STRING_2025620844");
    noUnderlyings_0_1.set(UnderlyingSecurityIDSource_42);
    UnderlyingInstrument_42.insert(UnderlyingSecurityIDSource_42.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_42("STRING_1970657947");
    noUnderlyings_0_1.set(UnderlyingSecuritySubType_42);
    UnderlyingInstrument_42.insert(UnderlyingSecuritySubType_42.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_42("STRING_2088238478");
    noUnderlyings_0_1.set(UnderlyingSecurityType_42);
    UnderlyingInstrument_42.insert(UnderlyingSecurityType_42.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_42("STRING_1861456902");
    noUnderlyings_0_1.set(UnderlyingSeniority_42);
    UnderlyingInstrument_42.insert(UnderlyingSeniority_42.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_42("STRING_1971191263");
    noUnderlyings_0_1.set(UnderlyingSettlMethod_42);
    UnderlyingInstrument_42.insert(UnderlyingSettlMethod_42.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_42(2);
    noUnderlyings_0_1.set(UnderlyingSettlementType_42);
    UnderlyingInstrument_42.insert(UnderlyingSettlementType_42.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_42;
    UnderlyingStartValue_42.setString("2011725");
    noUnderlyings_0_1.set(UnderlyingStartValue_42);
    UnderlyingInstrument_42.insert(UnderlyingStartValue_42.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_42("STRING_968522427");
    noUnderlyings_0_1.set(UnderlyingStateOrProvinceOfIssue_42);
    UnderlyingInstrument_42.insert(UnderlyingStateOrProvinceOfIssue_42.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_42("EUR");
    noUnderlyings_0_1.set(UnderlyingStrikeCurrency_42);
    UnderlyingInstrument_42.insert(UnderlyingStrikeCurrency_42.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_42;
    UnderlyingStrikePrice_42.setString("7771130");
    noUnderlyings_0_1.set(UnderlyingStrikePrice_42);
    UnderlyingInstrument_42.insert(UnderlyingStrikePrice_42.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_42("STRING_1798172193");
    noUnderlyings_0_1.set(UnderlyingSymbol_42);
    UnderlyingInstrument_42.insert(UnderlyingSymbol_42.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_42("STRING_179887015");
    noUnderlyings_0_1.set(UnderlyingSymbolSfx_42);
    UnderlyingInstrument_42.insert(UnderlyingSymbolSfx_42.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_42("STRING_1124732459");
    noUnderlyings_0_1.set(UnderlyingTimeUnit_42);
    UnderlyingInstrument_42.insert(UnderlyingTimeUnit_42.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_42("STRING_724010524");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasure_42);
    UnderlyingInstrument_42.insert(UnderlyingUnitOfMeasure_42.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_42;
    UnderlyingUnitOfMeasureQty_42.setString("956855");
    noUnderlyings_0_1.set(UnderlyingUnitOfMeasureQty_42);
    UnderlyingInstrument_42.insert(UnderlyingUnitOfMeasureQty_42.getString());
    all_values.push_back(UnderlyingInstrument_42);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::ExecutionReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_91;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_91("STRING_888217276");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_91);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_91.insert(UnderlyingSecurityAltID_91.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_91("STRING_384619653");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_91);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_91.insert(UnderlyingSecurityAltIDSource_91.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_91);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_92;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_92("STRING_469929737");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_92);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_92.insert(UnderlyingSecurityAltID_92.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_92("STRING_832637791");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_92);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_92.insert(UnderlyingSecurityAltIDSource_92.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_92);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::ExecutionReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_84;
      FIX::UnderlyingStipType UnderlyingStipType_84("STRING_1197640466");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_84);
      UnderlyingStipulations_NoUnderlyingStips_84.insert(UnderlyingStipType_84.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_84("STRING_604398904");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_84);
      UnderlyingStipulations_NoUnderlyingStips_84.insert(UnderlyingStipValue_84.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_84);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_85;
      FIX::UnderlyingStipType UnderlyingStipType_85("STRING_408045240");
      noUnderlyingStips_1_1_1.set(UnderlyingStipType_85);
      UnderlyingStipulations_NoUnderlyingStips_85.insert(UnderlyingStipType_85.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_85("STRING_901482517");
      noUnderlyingStips_1_1_1.set(UnderlyingStipValue_85);
      UnderlyingStipulations_NoUnderlyingStips_85.insert(UnderlyingStipValue_85.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_85);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::ExecutionReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_79;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_79("STRING_1321470700");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_79);
      UndlyInstrumentParties_NoUndlyInstrumentParties_79.insert(UnderlyingInstrumentPartyID_79.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_79('1');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_79);
      UndlyInstrumentParties_NoUndlyInstrumentParties_79.insert(UnderlyingInstrumentPartyIDSource_79.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_79(789957487);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_79);
      UndlyInstrumentParties_NoUndlyInstrumentParties_79.insert(UnderlyingInstrumentPartyRole_79.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_79);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::ExecutionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_156;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_156("STRING_1427067112");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_156);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_156.insert(UnderlyingInstrumentPartySubID_156.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_156(613131786);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_156);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_156.insert(UnderlyingInstrumentPartySubIDType_156.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_156);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_80;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_80("STRING_1053604471");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_80);
      UndlyInstrumentParties_NoUndlyInstrumentParties_80.insert(UnderlyingInstrumentPartyID_80.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_80('1');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_80);
      UndlyInstrumentParties_NoUndlyInstrumentParties_80.insert(UnderlyingInstrumentPartyIDSource_80.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_80(436839401);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_80);
      UndlyInstrumentParties_NoUndlyInstrumentParties_80.insert(UnderlyingInstrumentPartyRole_80.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_80);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::ExecutionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_157;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_157("STRING_1342212910");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_157);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_157.insert(UnderlyingInstrumentPartySubID_157.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_157(1405361829);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_157);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_157.insert(UnderlyingInstrumentPartySubIDType_157.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_157);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_158;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_158("STRING_340019977");
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubID_158);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_158.insert(UnderlyingInstrumentPartySubID_158.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_158(151123581);
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubIDType_158);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_158.insert(UnderlyingInstrumentPartySubIDType_158.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_158);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  {
    FIX50SP2::ExecutionReport::NoUnderlyings noUnderlyings_0_2;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_43;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_43("DATA_34991182");
    noUnderlyings_0_2.set(EncodedUnderlyingIssuer_43);
    UnderlyingInstrument_43.insert(EncodedUnderlyingIssuer_43.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_43(2138192170);
    noUnderlyings_0_2.set(EncodedUnderlyingIssuerLen_43);
    UnderlyingInstrument_43.insert(EncodedUnderlyingIssuerLen_43.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_43("DATA_331010597");
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDesc_43);
    UnderlyingInstrument_43.insert(EncodedUnderlyingSecurityDesc_43.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_43(1159723641);
    noUnderlyings_0_2.set(EncodedUnderlyingSecurityDescLen_43);
    UnderlyingInstrument_43.insert(EncodedUnderlyingSecurityDescLen_43.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_43;
    UnderlyingAdjustedQuantity_43.setString("7147190");
    noUnderlyings_0_2.set(UnderlyingAdjustedQuantity_43);
    UnderlyingInstrument_43.insert(UnderlyingAdjustedQuantity_43.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_43;
    UnderlyingAllocationPercent_43.setString("61.830000");
    noUnderlyings_0_2.set(UnderlyingAllocationPercent_43);
    UnderlyingInstrument_43.insert(UnderlyingAllocationPercent_43.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_43;
    UnderlyingAttachmentPoint_43.setString("63.290000");
    noUnderlyings_0_2.set(UnderlyingAttachmentPoint_43);
    UnderlyingInstrument_43.insert(UnderlyingAttachmentPoint_43.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_43("STRING_1602936322");
    noUnderlyings_0_2.set(UnderlyingCFICode_43);
    UnderlyingInstrument_43.insert(UnderlyingCFICode_43.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_43("STRING_811315837");
    noUnderlyings_0_2.set(UnderlyingCPProgram_43);
    UnderlyingInstrument_43.insert(UnderlyingCPProgram_43.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_43("STRING_565376066");
    noUnderlyings_0_2.set(UnderlyingCPRegType_43);
    UnderlyingInstrument_43.insert(UnderlyingCPRegType_43.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_43;
    UnderlyingCapValue_43.setString("2880904");
    noUnderlyings_0_2.set(UnderlyingCapValue_43);
    UnderlyingInstrument_43.insert(UnderlyingCapValue_43.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_43;
    UnderlyingCashAmount_43.setString("6241388");
    noUnderlyings_0_2.set(UnderlyingCashAmount_43);
    UnderlyingInstrument_43.insert(UnderlyingCashAmount_43.getString());
    FIX::UnderlyingCashType UnderlyingCashType_43("STRING_FIXED");
    noUnderlyings_0_2.set(UnderlyingCashType_43);
    UnderlyingInstrument_43.insert(UnderlyingCashType_43.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_43;
    UnderlyingContractMultiplier_43.setString("8924893");
    noUnderlyings_0_2.set(UnderlyingContractMultiplier_43);
    UnderlyingInstrument_43.insert(UnderlyingContractMultiplier_43.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_43(1032184128);
    noUnderlyings_0_2.set(UnderlyingContractMultiplierUnit_43);
    UnderlyingInstrument_43.insert(UnderlyingContractMultiplierUnit_43.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_43("COUNTRY_517015401");
    noUnderlyings_0_2.set(UnderlyingCountryOfIssue_43);
    UnderlyingInstrument_43.insert(UnderlyingCountryOfIssue_43.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_43("LOCALMKTDATE_2077022094");
    noUnderlyings_0_2.set(UnderlyingCouponPaymentDate_43);
    UnderlyingInstrument_43.insert(UnderlyingCouponPaymentDate_43.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_43;
    UnderlyingCouponRate_43.setString("11.800000");
    noUnderlyings_0_2.set(UnderlyingCouponRate_43);
    UnderlyingInstrument_43.insert(UnderlyingCouponRate_43.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_43("STRING_2065945317");
    noUnderlyings_0_2.set(UnderlyingCreditRating_43);
    UnderlyingInstrument_43.insert(UnderlyingCreditRating_43.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_43("CHF");
    noUnderlyings_0_2.set(UnderlyingCurrency_43);
    UnderlyingInstrument_43.insert(UnderlyingCurrency_43.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_43;
    UnderlyingCurrentValue_43.setString("13455287");
    noUnderlyings_0_2.set(UnderlyingCurrentValue_43);
    UnderlyingInstrument_43.insert(UnderlyingCurrentValue_43.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_43;
    UnderlyingDetachmentPoint_43.setString("77.190000");
    noUnderlyings_0_2.set(UnderlyingDetachmentPoint_43);
    UnderlyingInstrument_43.insert(UnderlyingDetachmentPoint_43.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_43;
    UnderlyingDirtyPrice_43.setString("2251416");
    noUnderlyings_0_2.set(UnderlyingDirtyPrice_43);
    UnderlyingInstrument_43.insert(UnderlyingDirtyPrice_43.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_43;
    UnderlyingEndPrice_43.setString("3390854");
    noUnderlyings_0_2.set(UnderlyingEndPrice_43);
    UnderlyingInstrument_43.insert(UnderlyingEndPrice_43.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_43;
    UnderlyingEndValue_43.setString("17694671");
    noUnderlyings_0_2.set(UnderlyingEndValue_43);
    UnderlyingInstrument_43.insert(UnderlyingEndValue_43.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_43(1802159370);
    noUnderlyings_0_2.set(UnderlyingExerciseStyle_43);
    UnderlyingInstrument_43.insert(UnderlyingExerciseStyle_43.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_43;
    UnderlyingFXRate_43.setString("16812984");
    noUnderlyings_0_2.set(UnderlyingFXRate_43);
    UnderlyingInstrument_43.insert(UnderlyingFXRate_43.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_43('D');
    noUnderlyings_0_2.set(UnderlyingFXRateCalc_43);
    UnderlyingInstrument_43.insert(UnderlyingFXRateCalc_43.getString());
    FIX::UnderlyingFactor UnderlyingFactor_43;
    UnderlyingFactor_43.setString("21421793");
    noUnderlyings_0_2.set(UnderlyingFactor_43);
    UnderlyingInstrument_43.insert(UnderlyingFactor_43.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_43(1832421991);
    noUnderlyings_0_2.set(UnderlyingFlowScheduleType_43);
    UnderlyingInstrument_43.insert(UnderlyingFlowScheduleType_43.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_43("STRING_1062336484");
    noUnderlyings_0_2.set(UnderlyingInstrRegistry_43);
    UnderlyingInstrument_43.insert(UnderlyingInstrRegistry_43.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_43("LOCALMKTDATE_2132887869");
    noUnderlyings_0_2.set(UnderlyingIssueDate_43);
    UnderlyingInstrument_43.insert(UnderlyingIssueDate_43.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_43("STRING_15948940");
    noUnderlyings_0_2.set(UnderlyingIssuer_43);
    UnderlyingInstrument_43.insert(UnderlyingIssuer_43.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_43("STRING_74576477");
    noUnderlyings_0_2.set(UnderlyingLocaleOfIssue_43);
    UnderlyingInstrument_43.insert(UnderlyingLocaleOfIssue_43.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_43("LOCALMKTDATE_700123267");
    noUnderlyings_0_2.set(UnderlyingMaturityDate_43);
    UnderlyingInstrument_43.insert(UnderlyingMaturityDate_43.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_43("MONTHYEAR_442645123");
    noUnderlyings_0_2.set(UnderlyingMaturityMonthYear_43);
    UnderlyingInstrument_43.insert(UnderlyingMaturityMonthYear_43.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_43("TZTIMEONLY_170022806");
    noUnderlyings_0_2.set(UnderlyingMaturityTime_43);
    UnderlyingInstrument_43.insert(UnderlyingMaturityTime_43.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_43;
    UnderlyingNotionalPercentageOutstanding_43.setString("59.420000");
    noUnderlyings_0_2.set(UnderlyingNotionalPercentageOutstanding_43);
    UnderlyingInstrument_43.insert(UnderlyingNotionalPercentageOutstanding_43.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_43('1');
    noUnderlyings_0_2.set(UnderlyingOptAttribute_43);
    UnderlyingInstrument_43.insert(UnderlyingOptAttribute_43.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_43;
    UnderlyingOriginalNotionalPercentageOutstanding_43.setString("88.720000");
    noUnderlyings_0_2.set(UnderlyingOriginalNotionalPercentageOutstanding_43);
    UnderlyingInstrument_43.insert(UnderlyingOriginalNotionalPercentageOutstanding_43.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_43("STRING_443666407");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasure_43);
    UnderlyingInstrument_43.insert(UnderlyingPriceUnitOfMeasure_43.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_43;
    UnderlyingPriceUnitOfMeasureQty_43.setString("18780998");
    noUnderlyings_0_2.set(UnderlyingPriceUnitOfMeasureQty_43);
    UnderlyingInstrument_43.insert(UnderlyingPriceUnitOfMeasureQty_43.getString());
    FIX::UnderlyingProduct UnderlyingProduct_43(350931757);
    noUnderlyings_0_2.set(UnderlyingProduct_43);
    UnderlyingInstrument_43.insert(UnderlyingProduct_43.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_43(1336155777);
    noUnderlyings_0_2.set(UnderlyingPutOrCall_43);
    UnderlyingInstrument_43.insert(UnderlyingPutOrCall_43.getString());
    FIX::UnderlyingPx UnderlyingPx_43;
    UnderlyingPx_43.setString("7628003");
    noUnderlyings_0_2.set(UnderlyingPx_43);
    UnderlyingInstrument_43.insert(UnderlyingPx_43.getString());
    FIX::UnderlyingQty UnderlyingQty_43;
    UnderlyingQty_43.setString("8679471");
    noUnderlyings_0_2.set(UnderlyingQty_43);
    UnderlyingInstrument_43.insert(UnderlyingQty_43.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_43("LOCALMKTDATE_1265694224");
    noUnderlyings_0_2.set(UnderlyingRedemptionDate_43);
    UnderlyingInstrument_43.insert(UnderlyingRedemptionDate_43.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_43("STRING_968971509");
    noUnderlyings_0_2.set(UnderlyingRepoCollateralSecurityType_43);
    UnderlyingInstrument_43.insert(UnderlyingRepoCollateralSecurityType_43.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_43;
    UnderlyingRepurchaseRate_43.setString("88.270000");
    noUnderlyings_0_2.set(UnderlyingRepurchaseRate_43);
    UnderlyingInstrument_43.insert(UnderlyingRepurchaseRate_43.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_43(1985190157);
    noUnderlyings_0_2.set(UnderlyingRepurchaseTerm_43);
    UnderlyingInstrument_43.insert(UnderlyingRepurchaseTerm_43.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_43("STRING_140508682");
    noUnderlyings_0_2.set(UnderlyingRestructuringType_43);
    UnderlyingInstrument_43.insert(UnderlyingRestructuringType_43.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_43("STRING_2131937608");
    noUnderlyings_0_2.set(UnderlyingSecurityDesc_43);
    UnderlyingInstrument_43.insert(UnderlyingSecurityDesc_43.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_43("EXCHANGE_1170334229");
    noUnderlyings_0_2.set(UnderlyingSecurityExchange_43);
    UnderlyingInstrument_43.insert(UnderlyingSecurityExchange_43.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_43("STRING_365650326");
    noUnderlyings_0_2.set(UnderlyingSecurityID_43);
    UnderlyingInstrument_43.insert(UnderlyingSecurityID_43.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_43("STRING_323539459");
    noUnderlyings_0_2.set(UnderlyingSecurityIDSource_43);
    UnderlyingInstrument_43.insert(UnderlyingSecurityIDSource_43.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_43("STRING_792317702");
    noUnderlyings_0_2.set(UnderlyingSecuritySubType_43);
    UnderlyingInstrument_43.insert(UnderlyingSecuritySubType_43.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_43("STRING_20326049");
    noUnderlyings_0_2.set(UnderlyingSecurityType_43);
    UnderlyingInstrument_43.insert(UnderlyingSecurityType_43.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_43("STRING_2004837869");
    noUnderlyings_0_2.set(UnderlyingSeniority_43);
    UnderlyingInstrument_43.insert(UnderlyingSeniority_43.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_43("STRING_1819663004");
    noUnderlyings_0_2.set(UnderlyingSettlMethod_43);
    UnderlyingInstrument_43.insert(UnderlyingSettlMethod_43.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_43(4);
    noUnderlyings_0_2.set(UnderlyingSettlementType_43);
    UnderlyingInstrument_43.insert(UnderlyingSettlementType_43.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_43;
    UnderlyingStartValue_43.setString("16897762");
    noUnderlyings_0_2.set(UnderlyingStartValue_43);
    UnderlyingInstrument_43.insert(UnderlyingStartValue_43.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_43("STRING_734515840");
    noUnderlyings_0_2.set(UnderlyingStateOrProvinceOfIssue_43);
    UnderlyingInstrument_43.insert(UnderlyingStateOrProvinceOfIssue_43.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_43("GBP");
    noUnderlyings_0_2.set(UnderlyingStrikeCurrency_43);
    UnderlyingInstrument_43.insert(UnderlyingStrikeCurrency_43.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_43;
    UnderlyingStrikePrice_43.setString("8090923");
    noUnderlyings_0_2.set(UnderlyingStrikePrice_43);
    UnderlyingInstrument_43.insert(UnderlyingStrikePrice_43.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_43("STRING_700549237");
    noUnderlyings_0_2.set(UnderlyingSymbol_43);
    UnderlyingInstrument_43.insert(UnderlyingSymbol_43.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_43("STRING_886627");
    noUnderlyings_0_2.set(UnderlyingSymbolSfx_43);
    UnderlyingInstrument_43.insert(UnderlyingSymbolSfx_43.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_43("STRING_979115124");
    noUnderlyings_0_2.set(UnderlyingTimeUnit_43);
    UnderlyingInstrument_43.insert(UnderlyingTimeUnit_43.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_43("STRING_856125179");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasure_43);
    UnderlyingInstrument_43.insert(UnderlyingUnitOfMeasure_43.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_43;
    UnderlyingUnitOfMeasureQty_43.setString("12548475");
    noUnderlyings_0_2.set(UnderlyingUnitOfMeasureQty_43);
    UnderlyingInstrument_43.insert(UnderlyingUnitOfMeasureQty_43.getString());
    all_values.push_back(UnderlyingInstrument_43);
    all_compo_names.insert("UnderlyingInstrument");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::ExecutionReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_93;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_93("STRING_1299791587");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltID_93);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_93.insert(UnderlyingSecurityAltID_93.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_93("STRING_985463788");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltIDSource_93);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_93.insert(UnderlyingSecurityAltIDSource_93.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_93);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_94;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_94("STRING_2065445753");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltID_94);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_94.insert(UnderlyingSecurityAltID_94.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_94("STRING_488463716");
      noUnderlyingSecurityAltID_2_1_1.set(UnderlyingSecurityAltIDSource_94);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_94.insert(UnderlyingSecurityAltIDSource_94.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_94);
      all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::ExecutionReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_86;
      FIX::UnderlyingStipType UnderlyingStipType_86("STRING_785909264");
      noUnderlyingStips_2_1_0.set(UnderlyingStipType_86);
      UnderlyingStipulations_NoUnderlyingStips_86.insert(UnderlyingStipType_86.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_86("STRING_1754157940");
      noUnderlyingStips_2_1_0.set(UnderlyingStipValue_86);
      UnderlyingStipulations_NoUnderlyingStips_86.insert(UnderlyingStipValue_86.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_86);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_87;
      FIX::UnderlyingStipType UnderlyingStipType_87("STRING_569751979");
      noUnderlyingStips_2_1_1.set(UnderlyingStipType_87);
      UnderlyingStipulations_NoUnderlyingStips_87.insert(UnderlyingStipType_87.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_87("STRING_1572318091");
      noUnderlyingStips_2_1_1.set(UnderlyingStipValue_87);
      UnderlyingStipulations_NoUnderlyingStips_87.insert(UnderlyingStipValue_87.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_87);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_1);
    }
    {
      FIX50SP2::ExecutionReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_88;
      FIX::UnderlyingStipType UnderlyingStipType_88("STRING_1591864450");
      noUnderlyingStips_2_1_2.set(UnderlyingStipType_88);
      UnderlyingStipulations_NoUnderlyingStips_88.insert(UnderlyingStipType_88.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_88("STRING_710260661");
      noUnderlyingStips_2_1_2.set(UnderlyingStipValue_88);
      UnderlyingStipulations_NoUnderlyingStips_88.insert(UnderlyingStipValue_88.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_88);
      all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::ExecutionReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_81;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_81("STRING_614715031");
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyID_81);
      UndlyInstrumentParties_NoUndlyInstrumentParties_81.insert(UnderlyingInstrumentPartyID_81.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_81('1');
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyIDSource_81);
      UndlyInstrumentParties_NoUndlyInstrumentParties_81.insert(UnderlyingInstrumentPartyIDSource_81.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_81(1880311511);
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyRole_81);
      UndlyInstrumentParties_NoUndlyInstrumentParties_81.insert(UnderlyingInstrumentPartyRole_81.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_81);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::ExecutionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_159;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_159("STRING_1096237037");
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubID_159);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_159.insert(UnderlyingInstrumentPartySubID_159.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_159(1737665732);
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubIDType_159);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_159.insert(UnderlyingInstrumentPartySubIDType_159.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_159);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_82;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_82("STRING_1079212089");
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyID_82);
      UndlyInstrumentParties_NoUndlyInstrumentParties_82.insert(UnderlyingInstrumentPartyID_82.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_82('1');
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyIDSource_82);
      UndlyInstrumentParties_NoUndlyInstrumentParties_82.insert(UnderlyingInstrumentPartyIDSource_82.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_82(1279958296);
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyRole_82);
      UndlyInstrumentParties_NoUndlyInstrumentParties_82.insert(UnderlyingInstrumentPartyRole_82.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_82);
      all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::ExecutionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_160;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_160("STRING_1111684755");
        noUndlyInstrumentPartySubIDs_2_1_2_0.set(UnderlyingInstrumentPartySubID_160);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_160.insert(UnderlyingInstrumentPartySubID_160.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_160(838199800);
        noUndlyInstrumentPartySubIDs_2_1_2_0.set(UnderlyingInstrumentPartySubIDType_160);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_160.insert(UnderlyingInstrumentPartySubIDType_160.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_160);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_161;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_161("STRING_475336598");
        noUndlyInstrumentPartySubIDs_2_1_2_1.set(UnderlyingInstrumentPartySubID_161);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_161.insert(UnderlyingInstrumentPartySubID_161.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_161(1812233993);
        noUndlyInstrumentPartySubIDs_2_1_2_1.set(UnderlyingInstrumentPartySubIDType_161);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_161.insert(UnderlyingInstrumentPartySubIDType_161.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_161);
        all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_1);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_1);
    }
    msg.addGroup(noUnderlyings_0_2);
  }
  // YieldData
  multiset<string> YieldData_5;
  FIX::Yield Yield_5;
  Yield_5.setString("64.280000");
  msg.set(Yield_5);
  YieldData_5.insert(Yield_5.getString());
  FIX::YieldCalcDate YieldCalcDate_5("LOCALMKTDATE_1454451722");
  msg.set(YieldCalcDate_5);
  YieldData_5.insert(YieldCalcDate_5.getString());
  FIX::YieldRedemptionDate YieldRedemptionDate_5("LOCALMKTDATE_520875524");
  msg.set(YieldRedemptionDate_5);
  YieldData_5.insert(YieldRedemptionDate_5.getString());
  FIX::YieldRedemptionPrice YieldRedemptionPrice_5;
  YieldRedemptionPrice_5.setString("20939340");
  msg.set(YieldRedemptionPrice_5);
  YieldData_5.insert(YieldRedemptionPrice_5.getString());
  FIX::YieldRedemptionPriceType YieldRedemptionPriceType_5(1021482071);
  msg.set(YieldRedemptionPriceType_5);
  YieldData_5.insert(YieldRedemptionPriceType_5.getString());
  FIX::YieldType YieldType_5("STRING_PREVCLOSE");
  msg.set(YieldType_5);
  YieldData_5.insert(YieldType_5.getString());
  all_values.push_back(YieldData_5);
  all_compo_names.insert("YieldData");


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
