#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

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
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::ExecutionReport msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> ExecutionReport_0;
  set_field(msg, FIX::Account{"STRING_346712702"}, ExecutionReport_0);
  set_field(msg, FIX::AccountType{7}, ExecutionReport_0);
  FIX::AccruedInterestAmt AccruedInterestAmt_9;
  AccruedInterestAmt_9.setString("20716945");
set_field(msg, AccruedInterestAmt_9, ExecutionReport_0);
  FIX::AccruedInterestRate AccruedInterestRate_4;
  AccruedInterestRate_4.setString("3.140000");
set_field(msg, AccruedInterestRate_4, ExecutionReport_0);
  set_field(msg, FIX::AcctIDSource{2}, ExecutionReport_0);
  set_field(msg, FIX::AggressorIndicator{false}, ExecutionReport_0);
  set_field(msg, FIX::AllocID{"STRING_576399261"}, ExecutionReport_0);
  FIX::AvgPx AvgPx_5;
  AvgPx_5.setString("10430592");
set_field(msg, AvgPx_5, ExecutionReport_0);
  set_field(msg, FIX::BasisFeatureDate{"LOCALMKTDATE_1247714145"}, ExecutionReport_0);
  FIX::BasisFeaturePrice BasisFeaturePrice_0;
  BasisFeaturePrice_0.setString("693540");
set_field(msg, BasisFeaturePrice_0, ExecutionReport_0);
  set_field(msg, FIX::BookingType{0}, ExecutionReport_0);
  set_field(msg, FIX::BookingUnit{'0'}, ExecutionReport_0);
  FIX::CalculatedCcyLastQty CalculatedCcyLastQty_0;
  CalculatedCcyLastQty_0.setString("581123");
set_field(msg, CalculatedCcyLastQty_0, ExecutionReport_0);
  set_field(msg, FIX::CancellationRights{'M'}, ExecutionReport_0);
  set_field(msg, FIX::CashMargin{'3'}, ExecutionReport_0);
  set_field(msg, FIX::ClOrdID{"STRING_1421625609"}, ExecutionReport_0);
  set_field(msg, FIX::ClOrdLinkID{"STRING_979424151"}, ExecutionReport_0);
  set_field(msg, FIX::ClearingFeeIndicator{"STRING_H"}, ExecutionReport_0);
  set_field(msg, FIX::ComplianceID{"STRING_1125509105"}, ExecutionReport_0);
  FIX::Concession Concession_4;
  Concession_4.setString("1921134");
set_field(msg, Concession_4, ExecutionReport_0);
  set_field(msg, FIX::CopyMsgIndicator{true}, ExecutionReport_0);
  set_field(msg, FIX::CrossID{"STRING_2022592331"}, ExecutionReport_0);
  set_field(msg, FIX::CrossType{3}, ExecutionReport_0);
  FIX::CumQty CumQty_1;
  CumQty_1.setString("5635108");
set_field(msg, CumQty_1, ExecutionReport_0);
  set_field(msg, FIX::Currency{"EUR"}, ExecutionReport_0);
  set_field(msg, FIX::CustDirectedOrder{false}, ExecutionReport_0);
  set_field(msg, FIX::CustOrderCapacity{3}, ExecutionReport_0);
  set_field(msg, FIX::CustOrderHandlingInst{"MULTIPLESTRINGVALUE_MOO"}, ExecutionReport_0);
  FIX::DayAvgPx DayAvgPx_0;
  DayAvgPx_0.setString("20142677");
set_field(msg, DayAvgPx_0, ExecutionReport_0);
  set_field(msg, FIX::DayBookingInst{'1'}, ExecutionReport_0);
  FIX::DayCumQty DayCumQty_0;
  DayCumQty_0.setString("8228070");
set_field(msg, DayCumQty_0, ExecutionReport_0);
  FIX::DayOrderQty DayOrderQty_0;
  DayOrderQty_0.setString("16025359");
set_field(msg, DayOrderQty_0, ExecutionReport_0);
  set_field(msg, FIX::Designation{"STRING_2026571388"}, ExecutionReport_0);
  FIX::DiscretionPrice DiscretionPrice_0;
  DiscretionPrice_0.setString("10816573");
set_field(msg, DiscretionPrice_0, ExecutionReport_0);
  FIX::DividendYield DividendYield_0;
  DividendYield_0.setString("59.770000");
set_field(msg, DividendYield_0, ExecutionReport_0);
  set_field(msg, FIX::EffectiveTime{FIX::UTCTIMESTAMP(18, 55, 37, 14, 6, 2004)}, ExecutionReport_0);
  set_field(msg, FIX::EncodedText{"DATA_1785523095"}, ExecutionReport_0);
  set_field(msg, FIX::EncodedTextLen{1449731995}, ExecutionReport_0);
  FIX::EndAccruedInterestAmt EndAccruedInterestAmt_9;
  EndAccruedInterestAmt_9.setString("14246290");
set_field(msg, EndAccruedInterestAmt_9, ExecutionReport_0);
  FIX::EndCash EndCash_9;
  EndCash_9.setString("10596650");
set_field(msg, EndCash_9, ExecutionReport_0);
  set_field(msg, FIX::ExDate{"LOCALMKTDATE_281672498"}, ExecutionReport_0);
  set_field(msg, FIX::ExecID{"STRING_1843634116"}, ExecutionReport_0);
  set_field(msg, FIX::ExecInst{"MULTIPLECHARVALUE_n"}, ExecutionReport_0);
  FIX::ExecPriceAdjustment ExecPriceAdjustment_0;
  ExecPriceAdjustment_0.setString("4737859");
set_field(msg, ExecPriceAdjustment_0, ExecutionReport_0);
  set_field(msg, FIX::ExecPriceType{'D'}, ExecutionReport_0);
  set_field(msg, FIX::ExecRefID{"STRING_2060282845"}, ExecutionReport_0);
  set_field(msg, FIX::ExecRestatementReason{11}, ExecutionReport_0);
  set_field(msg, FIX::ExecType{'G'}, ExecutionReport_0);
  set_field(msg, FIX::ExecValuationPoint{FIX::UTCTIMESTAMP(8, 41, 21, 4, 6, 2011)}, ExecutionReport_0);
  set_field(msg, FIX::ExpireDate{"LOCALMKTDATE_1379390662"}, ExecutionReport_0);
  set_field(msg, FIX::ExpireTime{FIX::UTCTIMESTAMP(9, 59, 39, 13, 6, 2004)}, ExecutionReport_0);
  set_field(msg, FIX::GTBookingInst{0}, ExecutionReport_0);
  FIX::GrossTradeAmt GrossTradeAmt_4;
  GrossTradeAmt_4.setString("15515480");
set_field(msg, GrossTradeAmt_4, ExecutionReport_0);
  set_field(msg, FIX::HandlInst{'3'}, ExecutionReport_0);
  set_field(msg, FIX::HostCrossID{"STRING_2015935145"}, ExecutionReport_0);
  FIX::InterestAtMaturity InterestAtMaturity_4;
  InterestAtMaturity_4.setString("11895875");
set_field(msg, InterestAtMaturity_4, ExecutionReport_0);
  set_field(msg, FIX::LastCapacity{'4'}, ExecutionReport_0);
  FIX::LastForwardPoints LastForwardPoints_0;
  LastForwardPoints_0.setString("12930805");
set_field(msg, LastForwardPoints_0, ExecutionReport_0);
  FIX::LastForwardPoints2 LastForwardPoints2_0;
  LastForwardPoints2_0.setString("1017689");
set_field(msg, LastForwardPoints2_0, ExecutionReport_0);
  set_field(msg, FIX::LastFragment{true}, ExecutionReport_0);
  set_field(msg, FIX::LastLiquidityInd{4}, ExecutionReport_0);
  set_field(msg, FIX::LastMkt{"EXCHANGE_139459433"}, ExecutionReport_0);
  FIX::LastParPx LastParPx_8;
  LastParPx_8.setString("5459923");
set_field(msg, LastParPx_8, ExecutionReport_0);
  FIX::LastPx LastPx_9;
  LastPx_9.setString("12289434");
set_field(msg, LastPx_9, ExecutionReport_0);
  FIX::LastQty LastQty_9;
  LastQty_9.setString("522586");
set_field(msg, LastQty_9, ExecutionReport_0);
  set_field(msg, FIX::LastRptRequested{false}, ExecutionReport_0);
  FIX::LastSpotRate LastSpotRate_0;
  LastSpotRate_0.setString("20321666");
set_field(msg, LastSpotRate_0, ExecutionReport_0);
  FIX::LastSwapPoints LastSwapPoints_0;
  LastSwapPoints_0.setString("2297256");
set_field(msg, LastSwapPoints_0, ExecutionReport_0);
  FIX::LeavesQty LeavesQty_0;
  LeavesQty_0.setString("10233635");
set_field(msg, LeavesQty_0, ExecutionReport_0);
  set_field(msg, FIX::ListID{"STRING_1709706557"}, ExecutionReport_0);
  set_field(msg, FIX::LotType{'3'}, ExecutionReport_0);
  set_field(msg, FIX::ManualOrderIndicator{false}, ExecutionReport_0);
  set_field(msg, FIX::MassStatusReqID{"STRING_1254030554"}, ExecutionReport_0);
  FIX::MatchIncrement MatchIncrement_1;
  MatchIncrement_1.setString("5235635");
set_field(msg, MatchIncrement_1, ExecutionReport_0);
  set_field(msg, FIX::MatchType{"STRING_3"}, ExecutionReport_0);
  FIX::MaxFloor MaxFloor_1;
  MaxFloor_1.setString("2534068");
set_field(msg, MaxFloor_1, ExecutionReport_0);
  set_field(msg, FIX::MaxPriceLevels{1600750428}, ExecutionReport_0);
  FIX::MaxShow MaxShow_1;
  MaxShow_1.setString("11254185");
set_field(msg, MaxShow_1, ExecutionReport_0);
  FIX::MinQty MinQty_1;
  MinQty_1.setString("13255192");
set_field(msg, MinQty_1, ExecutionReport_0);
  set_field(msg, FIX::MoneyLaunderingStatus{'3'}, ExecutionReport_0);
  set_field(msg, FIX::MultiLegReportingType{'2'}, ExecutionReport_0);
  FIX::NetMoney NetMoney_4;
  NetMoney_4.setString("12184595");
set_field(msg, NetMoney_4, ExecutionReport_0);
  set_field(msg, FIX::NumDaysInterest{381528937}, ExecutionReport_0);
  set_field(msg, FIX::OrdRejReason{3}, ExecutionReport_0);
  set_field(msg, FIX::OrdStatus{'B'}, ExecutionReport_0);
  set_field(msg, FIX::OrdStatusReqID{"STRING_249980434"}, ExecutionReport_0);
  set_field(msg, FIX::OrdType{'1'}, ExecutionReport_0);
  set_field(msg, FIX::OrderCapacity{'G'}, ExecutionReport_0);
  set_field(msg, FIX::OrderCategory{'1'}, ExecutionReport_0);
  set_field(msg, FIX::OrderHandlingInstSource{1}, ExecutionReport_0);
  set_field(msg, FIX::OrderID{"STRING_1569485495"}, ExecutionReport_0);
  FIX::OrderQty2 OrderQty2_0;
  OrderQty2_0.setString("3848083");
set_field(msg, OrderQty2_0, ExecutionReport_0);
  set_field(msg, FIX::OrderRestrictions{"MULTIPLECHARVALUE_5"}, ExecutionReport_0);
  set_field(msg, FIX::OrigClOrdID{"STRING_2115477893"}, ExecutionReport_0);
  set_field(msg, FIX::OrigCrossID{"STRING_1613751774"}, ExecutionReport_0);
  FIX::ParticipationRate ParticipationRate_1;
  ParticipationRate_1.setString("47.840000");
set_field(msg, ParticipationRate_1, ExecutionReport_0);
  FIX::PeggedPrice PeggedPrice_0;
  PeggedPrice_0.setString("9108684");
set_field(msg, PeggedPrice_0, ExecutionReport_0);
  FIX::PeggedRefPrice PeggedRefPrice_0;
  PeggedRefPrice_0.setString("14984348");
set_field(msg, PeggedRefPrice_0, ExecutionReport_0);
  set_field(msg, FIX::PositionEffect{'D'}, ExecutionReport_0);
  set_field(msg, FIX::PreTradeAnonymity{true}, ExecutionReport_0);
  set_field(msg, FIX::PreallocMethod{'1'}, ExecutionReport_0);
  FIX::Price Price_9;
  Price_9.setString("13918847");
set_field(msg, Price_9, ExecutionReport_0);
  FIX::PriceDelta PriceDelta_0;
  PriceDelta_0.setString("13666954");
set_field(msg, PriceDelta_0, ExecutionReport_0);
  FIX::PriceImprovement PriceImprovement_0;
  PriceImprovement_0.setString("1672046");
set_field(msg, PriceImprovement_0, ExecutionReport_0);
  set_field(msg, FIX::PriceProtectionScope{'2'}, ExecutionReport_0);
  set_field(msg, FIX::PriceType{16}, ExecutionReport_0);
  set_field(msg, FIX::PriorityIndicator{0}, ExecutionReport_0);
  set_field(msg, FIX::QtyType{2}, ExecutionReport_0);
  set_field(msg, FIX::QuoteRespID{"STRING_1156484477"}, ExecutionReport_0);
  set_field(msg, FIX::ReceivedDeptID{"STRING_1746130737"}, ExecutionReport_0);
  set_field(msg, FIX::RegistID{"STRING_1790388005"}, ExecutionReport_0);
  set_field(msg, FIX::ReportToExch{true}, ExecutionReport_0);
  FIX::RiskFreeRate RiskFreeRate_0;
  RiskFreeRate_0.setString("8171065");
set_field(msg, RiskFreeRate_0, ExecutionReport_0);
  set_field(msg, FIX::SecondaryClOrdID{"STRING_24433294"}, ExecutionReport_0);
  set_field(msg, FIX::SecondaryExecID{"STRING_312176991"}, ExecutionReport_0);
  set_field(msg, FIX::SecondaryOrderID{"STRING_376368044"}, ExecutionReport_0);
  FIX::SettlCurrAmt SettlCurrAmt_9;
  SettlCurrAmt_9.setString("2744137");
set_field(msg, SettlCurrAmt_9, ExecutionReport_0);
  FIX::SettlCurrFxRate SettlCurrFxRate_9;
  SettlCurrFxRate_9.setString("18553847");
set_field(msg, SettlCurrFxRate_9, ExecutionReport_0);
  set_field(msg, FIX::SettlCurrFxRateCalc{'D'}, ExecutionReport_0);
  set_field(msg, FIX::SettlCurrency{"USD"}, ExecutionReport_0);
  set_field(msg, FIX::SettlDate{"LOCALMKTDATE_1295648940"}, ExecutionReport_0);
  set_field(msg, FIX::SettlDate2{"LOCALMKTDATE_54799434"}, ExecutionReport_0);
  set_field(msg, FIX::SettlType{"STRING_2"}, ExecutionReport_0);
  set_field(msg, FIX::Side{'2'}, ExecutionReport_0);
  set_field(msg, FIX::SolicitedFlag{true}, ExecutionReport_0);
  FIX::StartCash StartCash_9;
  StartCash_9.setString("6790415");
set_field(msg, StartCash_9, ExecutionReport_0);
  FIX::StopPx StopPx_1;
  StopPx_1.setString("270280");
set_field(msg, StopPx_1, ExecutionReport_0);
  set_field(msg, FIX::TargetStrategy{2}, ExecutionReport_0);
  set_field(msg, FIX::TargetStrategyParameters{"STRING_597978276"}, ExecutionReport_0);
  FIX::TargetStrategyPerformance TargetStrategyPerformance_0;
  TargetStrategyPerformance_0.setString("19612600");
set_field(msg, TargetStrategyPerformance_0, ExecutionReport_0);
  set_field(msg, FIX::Text{"STRING_2080160090"}, ExecutionReport_0);
  set_field(msg, FIX::TimeBracket{"STRING_1989863020"}, ExecutionReport_0);
  set_field(msg, FIX::TimeInForce{'5'}, ExecutionReport_0);
  FIX::TimeToExpiration TimeToExpiration_0;
  TimeToExpiration_0.setString("998810");
set_field(msg, TimeToExpiration_0, ExecutionReport_0);
  set_field(msg, FIX::TotNoFills{1757827622}, ExecutionReport_0);
  set_field(msg, FIX::TotNumReports{1211537817}, ExecutionReport_0);
  FIX::TotalTakedown TotalTakedown_4;
  TotalTakedown_4.setString("5204925");
set_field(msg, TotalTakedown_4, ExecutionReport_0);
  set_field(msg, FIX::TradeDate{"LOCALMKTDATE_979059005"}, ExecutionReport_0);
  set_field(msg, FIX::TradeOriginationDate{"LOCALMKTDATE_220538646"}, ExecutionReport_0);
  set_field(msg, FIX::TradedFlatSwitch{false}, ExecutionReport_0);
  set_field(msg, FIX::TradingSessionID{"STRING_3"}, ExecutionReport_0);
  set_field(msg, FIX::TradingSessionSubID{"STRING_7"}, ExecutionReport_0);
  set_field(msg, FIX::TransBkdTime{FIX::UTCTIMESTAMP(0, 20, 13, 5, 5, 2008)}, ExecutionReport_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(5, 30, 49, 11, 5, 2006)}, ExecutionReport_0);
  set_field(msg, FIX::TrdMatchID{"STRING_1073439578"}, ExecutionReport_0);
  FIX::UnderlyingLastPx UnderlyingLastPx_0;
  UnderlyingLastPx_0.setString("14776142");
set_field(msg, UnderlyingLastPx_0, ExecutionReport_0);
  FIX::UnderlyingLastQty UnderlyingLastQty_0;
  UnderlyingLastQty_0.setString("11861708");
set_field(msg, UnderlyingLastQty_0, ExecutionReport_0);
  FIX::Volatility Volatility_0;
  Volatility_0.setString("16714178");
set_field(msg, Volatility_0, ExecutionReport_0);
  set_field(msg, FIX::WorkingIndicator{false}, ExecutionReport_0);
  all_values.push_back(ExecutionReport_0);

  all_compo_names.insert("ExecutionReport");

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_4;
  set_field(msg, FIX::ApplID{"STRING_1118847262"}, ApplicationSequenceControl_4);
  set_field(msg, FIX::ApplLastSeqNum{1513797227}, ApplicationSequenceControl_4);
  set_field(msg, FIX::ApplResendFlag{true}, ApplicationSequenceControl_4);
  set_field(msg, FIX::ApplSeqNum{1218728330}, ApplicationSequenceControl_4);
  all_values.push_back(ApplicationSequenceControl_4);
  all_compo_names.insert(".");

  // CommissionData
  multiset<string> CommissionData_14;
  set_field(msg, FIX::CommCurrency{"CHF"}, CommissionData_14);
  set_field(msg, FIX::CommType{'3'}, CommissionData_14);
  FIX::Commission Commission_14;
  Commission_14.setString("21032002");
set_field(msg, Commission_14, CommissionData_14);
  set_field(msg, FIX::FundRenewWaiv{'N'}, CommissionData_14);
  all_values.push_back(CommissionData_14);
  all_compo_names.insert(".");

  // ContAmtGrp
  // Group ContAmtGrp.NoContAmts
  {
    FIX50SP2::ExecutionReport::NoContAmts noContAmts_0_0;
    // ContAmtGrp.NoContAmts
    multiset<string> ContAmtGrp_NoContAmts_0;
    set_field(noContAmts_0_0, FIX::ContAmtCurr{"CHF"}, ContAmtGrp_NoContAmts_0);
    set_field(noContAmts_0_0, FIX::ContAmtType{2}, ContAmtGrp_NoContAmts_0);
    FIX::ContAmtValue ContAmtValue_0;
    ContAmtValue_0.setString("12240765");
set_field(noContAmts_0_0, ContAmtValue_0, ContAmtGrp_NoContAmts_0);
    all_values.push_back(ContAmtGrp_NoContAmts_0);
    all_compo_names.insert("...NoContAmts");

    msg.addGroup(noContAmts_0_0);
  }
  // ContraGrp
  // Group ContraGrp.NoContraBrokers
  {
    FIX50SP2::ExecutionReport::NoContraBrokers noContraBrokers_0_0;
    // ContraGrp.NoContraBrokers
    multiset<string> ContraGrp_NoContraBrokers_0;
    set_field(noContraBrokers_0_0, FIX::ContraBroker{"STRING_1959737534"}, ContraGrp_NoContraBrokers_0);
    set_field(noContraBrokers_0_0, FIX::ContraLegRefID{"STRING_2144886963"}, ContraGrp_NoContraBrokers_0);
    FIX::ContraTradeQty ContraTradeQty_0;
    ContraTradeQty_0.setString("4785128");
set_field(noContraBrokers_0_0, ContraTradeQty_0, ContraGrp_NoContraBrokers_0);
    set_field(noContraBrokers_0_0, FIX::ContraTradeTime{FIX::UTCTIMESTAMP(2, 31, 15, 23, 11, 2017)}, ContraGrp_NoContraBrokers_0);
    set_field(noContraBrokers_0_0, FIX::ContraTrader{"STRING_1400474109"}, ContraGrp_NoContraBrokers_0);
    all_values.push_back(ContraGrp_NoContraBrokers_0);
    all_compo_names.insert("...NoContraBrokers");

    msg.addGroup(noContraBrokers_0_0);
  }
  // DiscretionInstructions
  multiset<string> DiscretionInstructions_1;
  set_field(msg, FIX::DiscretionInst{'1'}, DiscretionInstructions_1);
  set_field(msg, FIX::DiscretionLimitType{0}, DiscretionInstructions_1);
  set_field(msg, FIX::DiscretionMoveType{0}, DiscretionInstructions_1);
  set_field(msg, FIX::DiscretionOffsetType{0}, DiscretionInstructions_1);
  FIX::DiscretionOffsetValue DiscretionOffsetValue_1;
  DiscretionOffsetValue_1.setString("9625985");
set_field(msg, DiscretionOffsetValue_1, DiscretionInstructions_1);
  set_field(msg, FIX::DiscretionRoundDirection{1}, DiscretionInstructions_1);
  set_field(msg, FIX::DiscretionScope{4}, DiscretionInstructions_1);
  all_values.push_back(DiscretionInstructions_1);
  all_compo_names.insert(".");

  // DisplayInstruction
  multiset<string> DisplayInstruction_1;
  FIX::DisplayHighQty DisplayHighQty_1;
  DisplayHighQty_1.setString("12869773");
set_field(msg, DisplayHighQty_1, DisplayInstruction_1);
  FIX::DisplayLowQty DisplayLowQty_1;
  DisplayLowQty_1.setString("6292532");
set_field(msg, DisplayLowQty_1, DisplayInstruction_1);
  set_field(msg, FIX::DisplayMethod{'1'}, DisplayInstruction_1);
  FIX::DisplayMinIncr DisplayMinIncr_1;
  DisplayMinIncr_1.setString("6754104");
set_field(msg, DisplayMinIncr_1, DisplayInstruction_1);
  FIX::DisplayQty DisplayQty_1;
  DisplayQty_1.setString("2209904");
set_field(msg, DisplayQty_1, DisplayInstruction_1);
  set_field(msg, FIX::DisplayWhen{'2'}, DisplayInstruction_1);
  FIX::RefreshQty RefreshQty_1;
  RefreshQty_1.setString("2843820");
set_field(msg, RefreshQty_1, DisplayInstruction_1);
  FIX::SecondaryDisplayQty SecondaryDisplayQty_1;
  SecondaryDisplayQty_1.setString("20793510");
set_field(msg, SecondaryDisplayQty_1, DisplayInstruction_1);
  all_values.push_back(DisplayInstruction_1);
  all_compo_names.insert(".");

  // FillsGrp
  // Group FillsGrp.NoFills
  {
    FIX50SP2::ExecutionReport::NoFills noFills_0_0;
    // FillsGrp.NoFills
    multiset<string> FillsGrp_NoFills_0;
    set_field(noFills_0_0, FIX::FillExecID{"STRING_72449104"}, FillsGrp_NoFills_0);
    set_field(noFills_0_0, FIX::FillLiquidityInd{578990672}, FillsGrp_NoFills_0);
    FIX::FillPx FillPx_0;
    FillPx_0.setString("9752965");
set_field(noFills_0_0, FillPx_0, FillsGrp_NoFills_0);
    FIX::FillQty FillQty_0;
    FillQty_0.setString("3517884");
set_field(noFills_0_0, FillQty_0, FillsGrp_NoFills_0);
    all_values.push_back(FillsGrp_NoFills_0);
    all_compo_names.insert("...NoFills");

    // NestedParties4
    // Group NestedParties4.NoNested4PartyIDs
    {
      FIX50SP2::ExecutionReport::NoFills::NoNested4PartyIDs noNested4PartyIDs_0_1_0;
      // NestedParties4.NoNested4PartyIDs
      multiset<string> NestedParties4_NoNested4PartyIDs_0;
      set_field(noNested4PartyIDs_0_1_0, FIX::Nested4PartyID{"STRING_972699906"}, NestedParties4_NoNested4PartyIDs_0);
      set_field(noNested4PartyIDs_0_1_0, FIX::Nested4PartyIDSource{'8'}, NestedParties4_NoNested4PartyIDs_0);
      set_field(noNested4PartyIDs_0_1_0, FIX::Nested4PartyRole{1242276203}, NestedParties4_NoNested4PartyIDs_0);
      all_values.push_back(NestedParties4_NoNested4PartyIDs_0);
      all_compo_names.insert("...NoFills...NoNested4PartyIDs");

      // NstdPtys4SubGrp
      // Group NstdPtys4SubGrp.NoNested4PartySubIDs
      {
        FIX50SP2::ExecutionReport::NoFills::NoNested4PartyIDs::NoNested4PartySubIDs noNested4PartySubIDs_0_0_2_0;
        // NstdPtys4SubGrp.NoNested4PartySubIDs
        multiset<string> NstdPtys4SubGrp_NoNested4PartySubIDs_0;
        set_field(noNested4PartySubIDs_0_0_2_0, FIX::Nested4PartySubID{"STRING_713381847"}, NstdPtys4SubGrp_NoNested4PartySubIDs_0);
        set_field(noNested4PartySubIDs_0_0_2_0, FIX::Nested4PartySubIDType{132767251}, NstdPtys4SubGrp_NoNested4PartySubIDs_0);
        all_values.push_back(NstdPtys4SubGrp_NoNested4PartySubIDs_0);
        all_compo_names.insert("...NoFills...NoNested4PartyIDs...NoNested4PartySubIDs");

        noNested4PartyIDs_0_1_0.addGroup(noNested4PartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoFills::NoNested4PartyIDs::NoNested4PartySubIDs noNested4PartySubIDs_0_0_2_1;
        // NstdPtys4SubGrp.NoNested4PartySubIDs
        multiset<string> NstdPtys4SubGrp_NoNested4PartySubIDs_1;
        set_field(noNested4PartySubIDs_0_0_2_1, FIX::Nested4PartySubID{"STRING_647226687"}, NstdPtys4SubGrp_NoNested4PartySubIDs_1);
        set_field(noNested4PartySubIDs_0_0_2_1, FIX::Nested4PartySubIDType{990860461}, NstdPtys4SubGrp_NoNested4PartySubIDs_1);
        all_values.push_back(NstdPtys4SubGrp_NoNested4PartySubIDs_1);
        all_compo_names.insert("...NoFills...NoNested4PartyIDs...NoNested4PartySubIDs");

        noNested4PartyIDs_0_1_0.addGroup(noNested4PartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::ExecutionReport::NoFills::NoNested4PartyIDs::NoNested4PartySubIDs noNested4PartySubIDs_0_0_2_2;
        // NstdPtys4SubGrp.NoNested4PartySubIDs
        multiset<string> NstdPtys4SubGrp_NoNested4PartySubIDs_2;
        set_field(noNested4PartySubIDs_0_0_2_2, FIX::Nested4PartySubID{"STRING_473844534"}, NstdPtys4SubGrp_NoNested4PartySubIDs_2);
        set_field(noNested4PartySubIDs_0_0_2_2, FIX::Nested4PartySubIDType{2047700797}, NstdPtys4SubGrp_NoNested4PartySubIDs_2);
        all_values.push_back(NstdPtys4SubGrp_NoNested4PartySubIDs_2);
        all_compo_names.insert("...NoFills...NoNested4PartyIDs...NoNested4PartySubIDs");

        noNested4PartyIDs_0_1_0.addGroup(noNested4PartySubIDs_0_0_2_2);
      }
      noFills_0_0.addGroup(noNested4PartyIDs_0_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoFills::NoNested4PartyIDs noNested4PartyIDs_0_1_1;
      // NestedParties4.NoNested4PartyIDs
      multiset<string> NestedParties4_NoNested4PartyIDs_1;
      set_field(noNested4PartyIDs_0_1_1, FIX::Nested4PartyID{"STRING_194295006"}, NestedParties4_NoNested4PartyIDs_1);
      set_field(noNested4PartyIDs_0_1_1, FIX::Nested4PartyIDSource{'1'}, NestedParties4_NoNested4PartyIDs_1);
      set_field(noNested4PartyIDs_0_1_1, FIX::Nested4PartyRole{339378431}, NestedParties4_NoNested4PartyIDs_1);
      all_values.push_back(NestedParties4_NoNested4PartyIDs_1);
      all_compo_names.insert("...NoFills...NoNested4PartyIDs");

      // NstdPtys4SubGrp
      // Group NstdPtys4SubGrp.NoNested4PartySubIDs
      {
        FIX50SP2::ExecutionReport::NoFills::NoNested4PartyIDs::NoNested4PartySubIDs noNested4PartySubIDs_0_1_2_0;
        // NstdPtys4SubGrp.NoNested4PartySubIDs
        multiset<string> NstdPtys4SubGrp_NoNested4PartySubIDs_3;
        set_field(noNested4PartySubIDs_0_1_2_0, FIX::Nested4PartySubID{"STRING_1107650980"}, NstdPtys4SubGrp_NoNested4PartySubIDs_3);
        set_field(noNested4PartySubIDs_0_1_2_0, FIX::Nested4PartySubIDType{1897386975}, NstdPtys4SubGrp_NoNested4PartySubIDs_3);
        all_values.push_back(NstdPtys4SubGrp_NoNested4PartySubIDs_3);
        all_compo_names.insert("...NoFills...NoNested4PartyIDs...NoNested4PartySubIDs");

        noNested4PartyIDs_0_1_1.addGroup(noNested4PartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoFills::NoNested4PartyIDs::NoNested4PartySubIDs noNested4PartySubIDs_0_1_2_1;
        // NstdPtys4SubGrp.NoNested4PartySubIDs
        multiset<string> NstdPtys4SubGrp_NoNested4PartySubIDs_4;
        set_field(noNested4PartySubIDs_0_1_2_1, FIX::Nested4PartySubID{"STRING_1310313385"}, NstdPtys4SubGrp_NoNested4PartySubIDs_4);
        set_field(noNested4PartySubIDs_0_1_2_1, FIX::Nested4PartySubIDType{247144730}, NstdPtys4SubGrp_NoNested4PartySubIDs_4);
        all_values.push_back(NstdPtys4SubGrp_NoNested4PartySubIDs_4);
        all_compo_names.insert("...NoFills...NoNested4PartyIDs...NoNested4PartySubIDs");

        noNested4PartyIDs_0_1_1.addGroup(noNested4PartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::ExecutionReport::NoFills::NoNested4PartyIDs::NoNested4PartySubIDs noNested4PartySubIDs_0_1_2_2;
        // NstdPtys4SubGrp.NoNested4PartySubIDs
        multiset<string> NstdPtys4SubGrp_NoNested4PartySubIDs_5;
        set_field(noNested4PartySubIDs_0_1_2_2, FIX::Nested4PartySubID{"STRING_379156554"}, NstdPtys4SubGrp_NoNested4PartySubIDs_5);
        set_field(noNested4PartySubIDs_0_1_2_2, FIX::Nested4PartySubIDType{528136918}, NstdPtys4SubGrp_NoNested4PartySubIDs_5);
        all_values.push_back(NstdPtys4SubGrp_NoNested4PartySubIDs_5);
        all_compo_names.insert("...NoFills...NoNested4PartyIDs...NoNested4PartySubIDs");

        noNested4PartyIDs_0_1_1.addGroup(noNested4PartySubIDs_0_1_2_2);
      }
      noFills_0_0.addGroup(noNested4PartyIDs_0_1_1);
    }
    {
      FIX50SP2::ExecutionReport::NoFills::NoNested4PartyIDs noNested4PartyIDs_0_1_2;
      // NestedParties4.NoNested4PartyIDs
      multiset<string> NestedParties4_NoNested4PartyIDs_2;
      set_field(noNested4PartyIDs_0_1_2, FIX::Nested4PartyID{"STRING_922555149"}, NestedParties4_NoNested4PartyIDs_2);
      set_field(noNested4PartyIDs_0_1_2, FIX::Nested4PartyIDSource{'6'}, NestedParties4_NoNested4PartyIDs_2);
      set_field(noNested4PartyIDs_0_1_2, FIX::Nested4PartyRole{1849160657}, NestedParties4_NoNested4PartyIDs_2);
      all_values.push_back(NestedParties4_NoNested4PartyIDs_2);
      all_compo_names.insert("...NoFills...NoNested4PartyIDs");

      // NstdPtys4SubGrp
      // Group NstdPtys4SubGrp.NoNested4PartySubIDs
      {
        FIX50SP2::ExecutionReport::NoFills::NoNested4PartyIDs::NoNested4PartySubIDs noNested4PartySubIDs_0_2_2_0;
        // NstdPtys4SubGrp.NoNested4PartySubIDs
        multiset<string> NstdPtys4SubGrp_NoNested4PartySubIDs_6;
        set_field(noNested4PartySubIDs_0_2_2_0, FIX::Nested4PartySubID{"STRING_532014505"}, NstdPtys4SubGrp_NoNested4PartySubIDs_6);
        set_field(noNested4PartySubIDs_0_2_2_0, FIX::Nested4PartySubIDType{1600380670}, NstdPtys4SubGrp_NoNested4PartySubIDs_6);
        all_values.push_back(NstdPtys4SubGrp_NoNested4PartySubIDs_6);
        all_compo_names.insert("...NoFills...NoNested4PartyIDs...NoNested4PartySubIDs");

        noNested4PartyIDs_0_1_2.addGroup(noNested4PartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoFills::NoNested4PartyIDs::NoNested4PartySubIDs noNested4PartySubIDs_0_2_2_1;
        // NstdPtys4SubGrp.NoNested4PartySubIDs
        multiset<string> NstdPtys4SubGrp_NoNested4PartySubIDs_7;
        set_field(noNested4PartySubIDs_0_2_2_1, FIX::Nested4PartySubID{"STRING_1279386341"}, NstdPtys4SubGrp_NoNested4PartySubIDs_7);
        set_field(noNested4PartySubIDs_0_2_2_1, FIX::Nested4PartySubIDType{1111005177}, NstdPtys4SubGrp_NoNested4PartySubIDs_7);
        all_values.push_back(NstdPtys4SubGrp_NoNested4PartySubIDs_7);
        all_compo_names.insert("...NoFills...NoNested4PartyIDs...NoNested4PartySubIDs");

        noNested4PartyIDs_0_1_2.addGroup(noNested4PartySubIDs_0_2_2_1);
      }
      noFills_0_0.addGroup(noNested4PartyIDs_0_1_2);
    }
    msg.addGroup(noFills_0_0);
  }
  {
    FIX50SP2::ExecutionReport::NoFills noFills_0_1;
    // FillsGrp.NoFills
    multiset<string> FillsGrp_NoFills_1;
    set_field(noFills_0_1, FIX::FillExecID{"STRING_428193613"}, FillsGrp_NoFills_1);
    set_field(noFills_0_1, FIX::FillLiquidityInd{1631174803}, FillsGrp_NoFills_1);
    FIX::FillPx FillPx_1;
    FillPx_1.setString("15022497");
set_field(noFills_0_1, FillPx_1, FillsGrp_NoFills_1);
    FIX::FillQty FillQty_1;
    FillQty_1.setString("14008935");
set_field(noFills_0_1, FillQty_1, FillsGrp_NoFills_1);
    all_values.push_back(FillsGrp_NoFills_1);
    all_compo_names.insert("...NoFills");

    // NestedParties4
    // Group NestedParties4.NoNested4PartyIDs
    {
      FIX50SP2::ExecutionReport::NoFills::NoNested4PartyIDs noNested4PartyIDs_1_1_0;
      // NestedParties4.NoNested4PartyIDs
      multiset<string> NestedParties4_NoNested4PartyIDs_3;
      set_field(noNested4PartyIDs_1_1_0, FIX::Nested4PartyID{"STRING_597042291"}, NestedParties4_NoNested4PartyIDs_3);
      set_field(noNested4PartyIDs_1_1_0, FIX::Nested4PartyIDSource{'8'}, NestedParties4_NoNested4PartyIDs_3);
      set_field(noNested4PartyIDs_1_1_0, FIX::Nested4PartyRole{1027374306}, NestedParties4_NoNested4PartyIDs_3);
      all_values.push_back(NestedParties4_NoNested4PartyIDs_3);
      all_compo_names.insert("...NoFills...NoNested4PartyIDs");

      // NstdPtys4SubGrp
      // Group NstdPtys4SubGrp.NoNested4PartySubIDs
      {
        FIX50SP2::ExecutionReport::NoFills::NoNested4PartyIDs::NoNested4PartySubIDs noNested4PartySubIDs_1_0_2_0;
        // NstdPtys4SubGrp.NoNested4PartySubIDs
        multiset<string> NstdPtys4SubGrp_NoNested4PartySubIDs_8;
        set_field(noNested4PartySubIDs_1_0_2_0, FIX::Nested4PartySubID{"STRING_1461541235"}, NstdPtys4SubGrp_NoNested4PartySubIDs_8);
        set_field(noNested4PartySubIDs_1_0_2_0, FIX::Nested4PartySubIDType{2018234768}, NstdPtys4SubGrp_NoNested4PartySubIDs_8);
        all_values.push_back(NstdPtys4SubGrp_NoNested4PartySubIDs_8);
        all_compo_names.insert("...NoFills...NoNested4PartyIDs...NoNested4PartySubIDs");

        noNested4PartyIDs_1_1_0.addGroup(noNested4PartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoFills::NoNested4PartyIDs::NoNested4PartySubIDs noNested4PartySubIDs_1_0_2_1;
        // NstdPtys4SubGrp.NoNested4PartySubIDs
        multiset<string> NstdPtys4SubGrp_NoNested4PartySubIDs_9;
        set_field(noNested4PartySubIDs_1_0_2_1, FIX::Nested4PartySubID{"STRING_1203654076"}, NstdPtys4SubGrp_NoNested4PartySubIDs_9);
        set_field(noNested4PartySubIDs_1_0_2_1, FIX::Nested4PartySubIDType{1361758384}, NstdPtys4SubGrp_NoNested4PartySubIDs_9);
        all_values.push_back(NstdPtys4SubGrp_NoNested4PartySubIDs_9);
        all_compo_names.insert("...NoFills...NoNested4PartyIDs...NoNested4PartySubIDs");

        noNested4PartyIDs_1_1_0.addGroup(noNested4PartySubIDs_1_0_2_1);
      }
      noFills_0_1.addGroup(noNested4PartyIDs_1_1_0);
    }
    msg.addGroup(noFills_0_1);
  }
  // FinancingDetails
  multiset<string> FinancingDetails_10;
  set_field(msg, FIX::AgreementCurrency{"CHF"}, FinancingDetails_10);
  set_field(msg, FIX::AgreementDate{"LOCALMKTDATE_1701136815"}, FinancingDetails_10);
  set_field(msg, FIX::AgreementDesc{"STRING_1134193533"}, FinancingDetails_10);
  set_field(msg, FIX::AgreementID{"STRING_308873843"}, FinancingDetails_10);
  set_field(msg, FIX::DeliveryType{2}, FinancingDetails_10);
  set_field(msg, FIX::EndDate{"LOCALMKTDATE_297023270"}, FinancingDetails_10);
  FIX::MarginRatio MarginRatio_10;
  MarginRatio_10.setString("85.730000");
set_field(msg, MarginRatio_10, FinancingDetails_10);
  set_field(msg, FIX::StartDate{"LOCALMKTDATE_1830196697"}, FinancingDetails_10);
  set_field(msg, FIX::TerminationType{1}, FinancingDetails_10);
  all_values.push_back(FinancingDetails_10);
  all_compo_names.insert(".");

  // InstrmtLegExecGrp
  // Group InstrmtLegExecGrp.NoLegs
  {
    FIX50SP2::ExecutionReport::NoLegs noLegs_0_0;
    // InstrmtLegExecGrp.NoLegs
    multiset<string> InstrmtLegExecGrp_NoLegs_0;
    set_field(noLegs_0_0, FIX::LegAllocID{"STRING_282860103"}, InstrmtLegExecGrp_NoLegs_0);
    FIX::LegCalculatedCcyLastQty LegCalculatedCcyLastQty_0;
    LegCalculatedCcyLastQty_0.setString("5268371");
set_field(noLegs_0_0, LegCalculatedCcyLastQty_0, InstrmtLegExecGrp_NoLegs_0);
    set_field(noLegs_0_0, FIX::LegCoveredOrUncovered{538027311}, InstrmtLegExecGrp_NoLegs_0);
    FIX::LegCurrencyRatio LegCurrencyRatio_0;
    LegCurrencyRatio_0.setString("8148746");
set_field(noLegs_0_0, LegCurrencyRatio_0, InstrmtLegExecGrp_NoLegs_0);
    FIX::LegDividendYield LegDividendYield_0;
    LegDividendYield_0.setString("78.680000");
set_field(noLegs_0_0, LegDividendYield_0, InstrmtLegExecGrp_NoLegs_0);
    set_field(noLegs_0_0, FIX::LegExecInst{"MULTIPLECHARVALUE_1817413653"}, InstrmtLegExecGrp_NoLegs_0);
    FIX::LegGrossTradeAmt LegGrossTradeAmt_0;
    LegGrossTradeAmt_0.setString("19258797");
set_field(noLegs_0_0, LegGrossTradeAmt_0, InstrmtLegExecGrp_NoLegs_0);
    FIX::LegLastForwardPoints LegLastForwardPoints_0;
    LegLastForwardPoints_0.setString("4079278");
set_field(noLegs_0_0, LegLastForwardPoints_0, InstrmtLegExecGrp_NoLegs_0);
    FIX::LegLastPx LegLastPx_0;
    LegLastPx_0.setString("13011048");
set_field(noLegs_0_0, LegLastPx_0, InstrmtLegExecGrp_NoLegs_0);
    FIX::LegLastQty LegLastQty_0;
    LegLastQty_0.setString("12806458");
set_field(noLegs_0_0, LegLastQty_0, InstrmtLegExecGrp_NoLegs_0);
    FIX::LegOrderQty LegOrderQty_0;
    LegOrderQty_0.setString("18088213");
set_field(noLegs_0_0, LegOrderQty_0, InstrmtLegExecGrp_NoLegs_0);
    set_field(noLegs_0_0, FIX::LegPositionEffect{'1'}, InstrmtLegExecGrp_NoLegs_0);
    FIX::LegQty LegQty_0;
    LegQty_0.setString("18776881");
set_field(noLegs_0_0, LegQty_0, InstrmtLegExecGrp_NoLegs_0);
    set_field(noLegs_0_0, FIX::LegRefID{"STRING_475652253"}, InstrmtLegExecGrp_NoLegs_0);
    set_field(noLegs_0_0, FIX::LegSettlCurrency{"CHF"}, InstrmtLegExecGrp_NoLegs_0);
    set_field(noLegs_0_0, FIX::LegSettlDate{"LOCALMKTDATE_1937193488"}, InstrmtLegExecGrp_NoLegs_0);
    set_field(noLegs_0_0, FIX::LegSettlType{'3'}, InstrmtLegExecGrp_NoLegs_0);
    set_field(noLegs_0_0, FIX::LegSwapType{4}, InstrmtLegExecGrp_NoLegs_0);
    FIX::LegVolatility LegVolatility_0;
    LegVolatility_0.setString("11514682");
set_field(noLegs_0_0, LegVolatility_0, InstrmtLegExecGrp_NoLegs_0);
    all_values.push_back(InstrmtLegExecGrp_NoLegs_0);
    all_compo_names.insert("...NoLegs");

    // InstrumentLeg
    multiset<string> InstrumentLeg_40;
    set_field(noLegs_0_0, FIX::EncodedLegIssuer{"DATA_430785173"}, InstrumentLeg_40);
    set_field(noLegs_0_0, FIX::EncodedLegIssuerLen{864890997}, InstrumentLeg_40);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDesc{"DATA_705121391"}, InstrumentLeg_40);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDescLen{1564978706}, InstrumentLeg_40);
    set_field(noLegs_0_0, FIX::LegCFICode{"STRING_1173764840"}, InstrumentLeg_40);
    FIX::LegContractMultiplier LegContractMultiplier_40;
    LegContractMultiplier_40.setString("86778");
set_field(noLegs_0_0, LegContractMultiplier_40, InstrumentLeg_40);
    set_field(noLegs_0_0, FIX::LegContractMultiplierUnit{1862001976}, InstrumentLeg_40);
    set_field(noLegs_0_0, FIX::LegContractSettlMonth{"MONTHYEAR_1729783413"}, InstrumentLeg_40);
    set_field(noLegs_0_0, FIX::LegCountryOfIssue{"COUNTRY_1838874582"}, InstrumentLeg_40);
    set_field(noLegs_0_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_539678517"}, InstrumentLeg_40);
    FIX::LegCouponRate LegCouponRate_40;
    LegCouponRate_40.setString("34.870000");
set_field(noLegs_0_0, LegCouponRate_40, InstrumentLeg_40);
    set_field(noLegs_0_0, FIX::LegCreditRating{"STRING_2121734685"}, InstrumentLeg_40);
    set_field(noLegs_0_0, FIX::LegCurrency{"CHF"}, InstrumentLeg_40);
    set_field(noLegs_0_0, FIX::LegDatedDate{"LOCALMKTDATE_789125645"}, InstrumentLeg_40);
    set_field(noLegs_0_0, FIX::LegExerciseStyle{1046249935}, InstrumentLeg_40);
    FIX::LegFactor LegFactor_40;
    LegFactor_40.setString("12688308");
set_field(noLegs_0_0, LegFactor_40, InstrumentLeg_40);
    set_field(noLegs_0_0, FIX::LegFlowScheduleType{567521782}, InstrumentLeg_40);
    set_field(noLegs_0_0, FIX::LegInstrRegistry{"STRING_1454177769"}, InstrumentLeg_40);
    set_field(noLegs_0_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_422451964"}, InstrumentLeg_40);
    set_field(noLegs_0_0, FIX::LegIssueDate{"LOCALMKTDATE_1848167655"}, InstrumentLeg_40);
    set_field(noLegs_0_0, FIX::LegIssuer{"STRING_1115515475"}, InstrumentLeg_40);
    set_field(noLegs_0_0, FIX::LegLocaleOfIssue{"STRING_2037549232"}, InstrumentLeg_40);
    set_field(noLegs_0_0, FIX::LegMaturityDate{"LOCALMKTDATE_1578372170"}, InstrumentLeg_40);
    set_field(noLegs_0_0, FIX::LegMaturityMonthYear{"MONTHYEAR_1591167728"}, InstrumentLeg_40);
    set_field(noLegs_0_0, FIX::LegMaturityTime{"TZTIMEONLY_385053511"}, InstrumentLeg_40);
    set_field(noLegs_0_0, FIX::LegOptAttribute{'2'}, InstrumentLeg_40);
    FIX::LegOptionRatio LegOptionRatio_40;
    LegOptionRatio_40.setString("13808775");
set_field(noLegs_0_0, LegOptionRatio_40, InstrumentLeg_40);
    set_field(noLegs_0_0, FIX::LegPool{"STRING_750792557"}, InstrumentLeg_40);
    set_field(noLegs_0_0, FIX::LegPriceUnitOfMeasure{"STRING_1554570714"}, InstrumentLeg_40);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_40;
    LegPriceUnitOfMeasureQty_40.setString("3848621");
set_field(noLegs_0_0, LegPriceUnitOfMeasureQty_40, InstrumentLeg_40);
    set_field(noLegs_0_0, FIX::LegProduct{1181577730}, InstrumentLeg_40);
    set_field(noLegs_0_0, FIX::LegPutOrCall{271978063}, InstrumentLeg_40);
    FIX::LegRatioQty LegRatioQty_40;
    LegRatioQty_40.setString("10899835");
set_field(noLegs_0_0, LegRatioQty_40, InstrumentLeg_40);
    set_field(noLegs_0_0, FIX::LegRedemptionDate{"LOCALMKTDATE_599072788"}, InstrumentLeg_40);
    set_field(noLegs_0_0, FIX::LegRepoCollateralSecurityType{"STRING_1445742903"}, InstrumentLeg_40);
    FIX::LegRepurchaseRate LegRepurchaseRate_40;
    LegRepurchaseRate_40.setString("14.200000");
set_field(noLegs_0_0, LegRepurchaseRate_40, InstrumentLeg_40);
    set_field(noLegs_0_0, FIX::LegRepurchaseTerm{313591117}, InstrumentLeg_40);
    set_field(noLegs_0_0, FIX::LegSecurityDesc{"STRING_1028042668"}, InstrumentLeg_40);
    set_field(noLegs_0_0, FIX::LegSecurityExchange{"EXCHANGE_790052355"}, InstrumentLeg_40);
    set_field(noLegs_0_0, FIX::LegSecurityID{"STRING_853269634"}, InstrumentLeg_40);
    set_field(noLegs_0_0, FIX::LegSecurityIDSource{"STRING_2088916155"}, InstrumentLeg_40);
    set_field(noLegs_0_0, FIX::LegSecuritySubType{"STRING_764303392"}, InstrumentLeg_40);
    set_field(noLegs_0_0, FIX::LegSecurityType{"STRING_1919785349"}, InstrumentLeg_40);
    set_field(noLegs_0_0, FIX::LegSide{'1'}, InstrumentLeg_40);
    set_field(noLegs_0_0, FIX::LegStateOrProvinceOfIssue{"STRING_1553429038"}, InstrumentLeg_40);
    set_field(noLegs_0_0, FIX::LegStrikeCurrency{"USD"}, InstrumentLeg_40);
    FIX::LegStrikePrice LegStrikePrice_40;
    LegStrikePrice_40.setString("21209508");
set_field(noLegs_0_0, LegStrikePrice_40, InstrumentLeg_40);
    set_field(noLegs_0_0, FIX::LegSymbol{"STRING_125245758"}, InstrumentLeg_40);
    set_field(noLegs_0_0, FIX::LegSymbolSfx{"STRING_1084132427"}, InstrumentLeg_40);
    set_field(noLegs_0_0, FIX::LegTimeUnit{"STRING_1821634827"}, InstrumentLeg_40);
    set_field(noLegs_0_0, FIX::LegUnitOfMeasure{"STRING_1240761233"}, InstrumentLeg_40);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_40;
    LegUnitOfMeasureQty_40.setString("9741980");
set_field(noLegs_0_0, LegUnitOfMeasureQty_40, InstrumentLeg_40);
    all_values.push_back(InstrumentLeg_40);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::ExecutionReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_82;
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltID{"STRING_684445313"}, LegSecAltIDGrp_NoLegSecurityAltID_82);
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltIDSource{"STRING_1359251522"}, LegSecAltIDGrp_NoLegSecurityAltID_82);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_82);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_83;
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltID{"STRING_1143425930"}, LegSecAltIDGrp_NoLegSecurityAltID_83);
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltIDSource{"STRING_2065322881"}, LegSecAltIDGrp_NoLegSecurityAltID_83);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_83);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    // LegPreAllocGrp
    // Group LegPreAllocGrp.NoLegAllocs
    {
      FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs noLegAllocs_0_1_0;
      // LegPreAllocGrp.NoLegAllocs
      multiset<string> LegPreAllocGrp_NoLegAllocs_0;
      set_field(noLegAllocs_0_1_0, FIX::LegAllocAccount{"STRING_550512996"}, LegPreAllocGrp_NoLegAllocs_0);
      set_field(noLegAllocs_0_1_0, FIX::LegAllocAcctIDSource{"STRING_302701377"}, LegPreAllocGrp_NoLegAllocs_0);
      FIX::LegAllocQty LegAllocQty_0;
      LegAllocQty_0.setString("11441381");
set_field(noLegAllocs_0_1_0, LegAllocQty_0, LegPreAllocGrp_NoLegAllocs_0);
      set_field(noLegAllocs_0_1_0, FIX::LegAllocSettlCurrency{"USD"}, LegPreAllocGrp_NoLegAllocs_0);
      set_field(noLegAllocs_0_1_0, FIX::LegIndividualAllocID{"STRING_1743210951"}, LegPreAllocGrp_NoLegAllocs_0);
      all_values.push_back(LegPreAllocGrp_NoLegAllocs_0);
      all_compo_names.insert("...NoLegs...NoLegAllocs");

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_0_0_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_18;
        set_field(noNested2PartyIDs_0_0_2_0, FIX::Nested2PartyID{"STRING_343862684"}, NestedParties2_NoNested2PartyIDs_18);
        set_field(noNested2PartyIDs_0_0_2_0, FIX::Nested2PartyIDSource{'2'}, NestedParties2_NoNested2PartyIDs_18);
        set_field(noNested2PartyIDs_0_0_2_0, FIX::Nested2PartyRole{1148792982}, NestedParties2_NoNested2PartyIDs_18);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_18);
        all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_35;
          set_field(noNested2PartySubIDs_0_0_0_3_0, FIX::Nested2PartySubID{"STRING_762588054"}, NstdPtys2SubGrp_NoNested2PartySubIDs_35);
          set_field(noNested2PartySubIDs_0_0_0_3_0, FIX::Nested2PartySubIDType{1090225489}, NstdPtys2SubGrp_NoNested2PartySubIDs_35);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_35);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_0_2_0.addGroup(noNested2PartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_0_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_36;
          set_field(noNested2PartySubIDs_0_0_0_3_1, FIX::Nested2PartySubID{"STRING_1898218432"}, NstdPtys2SubGrp_NoNested2PartySubIDs_36);
          set_field(noNested2PartySubIDs_0_0_0_3_1, FIX::Nested2PartySubIDType{534889755}, NstdPtys2SubGrp_NoNested2PartySubIDs_36);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_36);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_0_2_0.addGroup(noNested2PartySubIDs_0_0_0_3_1);
        }
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_0_3_2;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_37;
          set_field(noNested2PartySubIDs_0_0_0_3_2, FIX::Nested2PartySubID{"STRING_483075148"}, NstdPtys2SubGrp_NoNested2PartySubIDs_37);
          set_field(noNested2PartySubIDs_0_0_0_3_2, FIX::Nested2PartySubIDType{1304163822}, NstdPtys2SubGrp_NoNested2PartySubIDs_37);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_37);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_0_2_0.addGroup(noNested2PartySubIDs_0_0_0_3_2);
        }
        noLegAllocs_0_1_0.addGroup(noNested2PartyIDs_0_0_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_0_0_2_1;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_19;
        set_field(noNested2PartyIDs_0_0_2_1, FIX::Nested2PartyID{"STRING_1353441391"}, NestedParties2_NoNested2PartyIDs_19);
        set_field(noNested2PartyIDs_0_0_2_1, FIX::Nested2PartyIDSource{'1'}, NestedParties2_NoNested2PartyIDs_19);
        set_field(noNested2PartyIDs_0_0_2_1, FIX::Nested2PartyRole{1277630994}, NestedParties2_NoNested2PartyIDs_19);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_19);
        all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_1_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_38;
          set_field(noNested2PartySubIDs_0_0_1_3_0, FIX::Nested2PartySubID{"STRING_81404389"}, NstdPtys2SubGrp_NoNested2PartySubIDs_38);
          set_field(noNested2PartySubIDs_0_0_1_3_0, FIX::Nested2PartySubIDType{951782174}, NstdPtys2SubGrp_NoNested2PartySubIDs_38);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_38);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_0_2_1.addGroup(noNested2PartySubIDs_0_0_1_3_0);
        }
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_1_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_39;
          set_field(noNested2PartySubIDs_0_0_1_3_1, FIX::Nested2PartySubID{"STRING_571964734"}, NstdPtys2SubGrp_NoNested2PartySubIDs_39);
          set_field(noNested2PartySubIDs_0_0_1_3_1, FIX::Nested2PartySubIDType{1055602401}, NstdPtys2SubGrp_NoNested2PartySubIDs_39);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_39);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_0_2_1.addGroup(noNested2PartySubIDs_0_0_1_3_1);
        }
        noLegAllocs_0_1_0.addGroup(noNested2PartyIDs_0_0_2_1);
      }
      {
        FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_0_0_2_2;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_20;
        set_field(noNested2PartyIDs_0_0_2_2, FIX::Nested2PartyID{"STRING_56821876"}, NestedParties2_NoNested2PartyIDs_20);
        set_field(noNested2PartyIDs_0_0_2_2, FIX::Nested2PartyIDSource{'1'}, NestedParties2_NoNested2PartyIDs_20);
        set_field(noNested2PartyIDs_0_0_2_2, FIX::Nested2PartyRole{267370275}, NestedParties2_NoNested2PartyIDs_20);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_20);
        all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_2_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_40;
          set_field(noNested2PartySubIDs_0_0_2_3_0, FIX::Nested2PartySubID{"STRING_1174249280"}, NstdPtys2SubGrp_NoNested2PartySubIDs_40);
          set_field(noNested2PartySubIDs_0_0_2_3_0, FIX::Nested2PartySubIDType{229930707}, NstdPtys2SubGrp_NoNested2PartySubIDs_40);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_40);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_0_2_2.addGroup(noNested2PartySubIDs_0_0_2_3_0);
        }
        noLegAllocs_0_1_0.addGroup(noNested2PartyIDs_0_0_2_2);
      }
      noLegs_0_0.addGroup(noLegAllocs_0_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs noLegAllocs_0_1_1;
      // LegPreAllocGrp.NoLegAllocs
      multiset<string> LegPreAllocGrp_NoLegAllocs_1;
      set_field(noLegAllocs_0_1_1, FIX::LegAllocAccount{"STRING_1750760802"}, LegPreAllocGrp_NoLegAllocs_1);
      set_field(noLegAllocs_0_1_1, FIX::LegAllocAcctIDSource{"STRING_1476950657"}, LegPreAllocGrp_NoLegAllocs_1);
      FIX::LegAllocQty LegAllocQty_1;
      LegAllocQty_1.setString("13740688");
set_field(noLegAllocs_0_1_1, LegAllocQty_1, LegPreAllocGrp_NoLegAllocs_1);
      set_field(noLegAllocs_0_1_1, FIX::LegAllocSettlCurrency{"CHF"}, LegPreAllocGrp_NoLegAllocs_1);
      set_field(noLegAllocs_0_1_1, FIX::LegIndividualAllocID{"STRING_969796173"}, LegPreAllocGrp_NoLegAllocs_1);
      all_values.push_back(LegPreAllocGrp_NoLegAllocs_1);
      all_compo_names.insert("...NoLegs...NoLegAllocs");

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_0_1_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_21;
        set_field(noNested2PartyIDs_0_1_2_0, FIX::Nested2PartyID{"STRING_1066014606"}, NestedParties2_NoNested2PartyIDs_21);
        set_field(noNested2PartyIDs_0_1_2_0, FIX::Nested2PartyIDSource{'8'}, NestedParties2_NoNested2PartyIDs_21);
        set_field(noNested2PartyIDs_0_1_2_0, FIX::Nested2PartyRole{1695311509}, NestedParties2_NoNested2PartyIDs_21);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_21);
        all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_41;
          set_field(noNested2PartySubIDs_0_1_0_3_0, FIX::Nested2PartySubID{"STRING_1641702647"}, NstdPtys2SubGrp_NoNested2PartySubIDs_41);
          set_field(noNested2PartySubIDs_0_1_0_3_0, FIX::Nested2PartySubIDType{638053350}, NstdPtys2SubGrp_NoNested2PartySubIDs_41);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_41);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_1_2_0.addGroup(noNested2PartySubIDs_0_1_0_3_0);
        }
        noLegAllocs_0_1_1.addGroup(noNested2PartyIDs_0_1_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_0_1_2_1;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_22;
        set_field(noNested2PartyIDs_0_1_2_1, FIX::Nested2PartyID{"STRING_1950664429"}, NestedParties2_NoNested2PartyIDs_22);
        set_field(noNested2PartyIDs_0_1_2_1, FIX::Nested2PartyIDSource{'2'}, NestedParties2_NoNested2PartyIDs_22);
        set_field(noNested2PartyIDs_0_1_2_1, FIX::Nested2PartyRole{1121128498}, NestedParties2_NoNested2PartyIDs_22);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_22);
        all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_1_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_42;
          set_field(noNested2PartySubIDs_0_1_1_3_0, FIX::Nested2PartySubID{"STRING_1382550145"}, NstdPtys2SubGrp_NoNested2PartySubIDs_42);
          set_field(noNested2PartySubIDs_0_1_1_3_0, FIX::Nested2PartySubIDType{118400461}, NstdPtys2SubGrp_NoNested2PartySubIDs_42);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_42);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_1_2_1.addGroup(noNested2PartySubIDs_0_1_1_3_0);
        }
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_1_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_43;
          set_field(noNested2PartySubIDs_0_1_1_3_1, FIX::Nested2PartySubID{"STRING_237491950"}, NstdPtys2SubGrp_NoNested2PartySubIDs_43);
          set_field(noNested2PartySubIDs_0_1_1_3_1, FIX::Nested2PartySubIDType{713753647}, NstdPtys2SubGrp_NoNested2PartySubIDs_43);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_43);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_1_2_1.addGroup(noNested2PartySubIDs_0_1_1_3_1);
        }
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_1_3_2;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_44;
          set_field(noNested2PartySubIDs_0_1_1_3_2, FIX::Nested2PartySubID{"STRING_199804850"}, NstdPtys2SubGrp_NoNested2PartySubIDs_44);
          set_field(noNested2PartySubIDs_0_1_1_3_2, FIX::Nested2PartySubIDType{1189274124}, NstdPtys2SubGrp_NoNested2PartySubIDs_44);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_44);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_1_2_1.addGroup(noNested2PartySubIDs_0_1_1_3_2);
        }
        noLegAllocs_0_1_1.addGroup(noNested2PartyIDs_0_1_2_1);
      }
      noLegs_0_0.addGroup(noLegAllocs_0_1_1);
    }
    {
      FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs noLegAllocs_0_1_2;
      // LegPreAllocGrp.NoLegAllocs
      multiset<string> LegPreAllocGrp_NoLegAllocs_2;
      set_field(noLegAllocs_0_1_2, FIX::LegAllocAccount{"STRING_1285718381"}, LegPreAllocGrp_NoLegAllocs_2);
      set_field(noLegAllocs_0_1_2, FIX::LegAllocAcctIDSource{"STRING_1255407251"}, LegPreAllocGrp_NoLegAllocs_2);
      FIX::LegAllocQty LegAllocQty_2;
      LegAllocQty_2.setString("12460960");
set_field(noLegAllocs_0_1_2, LegAllocQty_2, LegPreAllocGrp_NoLegAllocs_2);
      set_field(noLegAllocs_0_1_2, FIX::LegAllocSettlCurrency{"CHF"}, LegPreAllocGrp_NoLegAllocs_2);
      set_field(noLegAllocs_0_1_2, FIX::LegIndividualAllocID{"STRING_298860158"}, LegPreAllocGrp_NoLegAllocs_2);
      all_values.push_back(LegPreAllocGrp_NoLegAllocs_2);
      all_compo_names.insert("...NoLegs...NoLegAllocs");

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_0_2_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_23;
        set_field(noNested2PartyIDs_0_2_2_0, FIX::Nested2PartyID{"STRING_1752708234"}, NestedParties2_NoNested2PartyIDs_23);
        set_field(noNested2PartyIDs_0_2_2_0, FIX::Nested2PartyIDSource{'2'}, NestedParties2_NoNested2PartyIDs_23);
        set_field(noNested2PartyIDs_0_2_2_0, FIX::Nested2PartyRole{898361071}, NestedParties2_NoNested2PartyIDs_23);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_23);
        all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_2_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_45;
          set_field(noNested2PartySubIDs_0_2_0_3_0, FIX::Nested2PartySubID{"STRING_327905525"}, NstdPtys2SubGrp_NoNested2PartySubIDs_45);
          set_field(noNested2PartySubIDs_0_2_0_3_0, FIX::Nested2PartySubIDType{1620512992}, NstdPtys2SubGrp_NoNested2PartySubIDs_45);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_45);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_2_2_0.addGroup(noNested2PartySubIDs_0_2_0_3_0);
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
      set_field(noLegStipulations_0_1_0, FIX::LegStipulationType{"STRING_874424052"}, LegStipulations_NoLegStipulations_0);
      set_field(noLegStipulations_0_1_0, FIX::LegStipulationValue{"STRING_539043950"}, LegStipulations_NoLegStipulations_0);
      all_values.push_back(LegStipulations_NoLegStipulations_0);
      all_compo_names.insert("...NoLegs...NoLegStipulations");

      noLegs_0_0.addGroup(noLegStipulations_0_1_0);
    }
    // NestedParties3
    // Group NestedParties3.NoNested3PartyIDs
    {
      FIX50SP2::ExecutionReport::NoLegs::NoNested3PartyIDs noNested3PartyIDs_0_1_0;
      // NestedParties3.NoNested3PartyIDs
      multiset<string> NestedParties3_NoNested3PartyIDs_0;
      set_field(noNested3PartyIDs_0_1_0, FIX::Nested3PartyID{"STRING_422251913"}, NestedParties3_NoNested3PartyIDs_0);
      set_field(noNested3PartyIDs_0_1_0, FIX::Nested3PartyIDSource{'5'}, NestedParties3_NoNested3PartyIDs_0);
      set_field(noNested3PartyIDs_0_1_0, FIX::Nested3PartyRole{174939573}, NestedParties3_NoNested3PartyIDs_0);
      all_values.push_back(NestedParties3_NoNested3PartyIDs_0);
      all_compo_names.insert("...NoLegs...NoNested3PartyIDs");

      // NstdPtys3SubGrp
      // Group NstdPtys3SubGrp.NoNested3PartySubIDs
      {
        FIX50SP2::ExecutionReport::NoLegs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_0_0_2_0;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_0;
        set_field(noNested3PartySubIDs_0_0_2_0, FIX::Nested3PartySubID{"STRING_394670729"}, NstdPtys3SubGrp_NoNested3PartySubIDs_0);
        set_field(noNested3PartySubIDs_0_0_2_0, FIX::Nested3PartySubIDType{204048327}, NstdPtys3SubGrp_NoNested3PartySubIDs_0);
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_0);
        all_compo_names.insert("...NoLegs...NoNested3PartyIDs...NoNested3PartySubIDs");

        noNested3PartyIDs_0_1_0.addGroup(noNested3PartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoLegs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_0_0_2_1;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_1;
        set_field(noNested3PartySubIDs_0_0_2_1, FIX::Nested3PartySubID{"STRING_33950114"}, NstdPtys3SubGrp_NoNested3PartySubIDs_1);
        set_field(noNested3PartySubIDs_0_0_2_1, FIX::Nested3PartySubIDType{1502015333}, NstdPtys3SubGrp_NoNested3PartySubIDs_1);
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_1);
        all_compo_names.insert("...NoLegs...NoNested3PartyIDs...NoNested3PartySubIDs");

        noNested3PartyIDs_0_1_0.addGroup(noNested3PartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::ExecutionReport::NoLegs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_0_0_2_2;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_2;
        set_field(noNested3PartySubIDs_0_0_2_2, FIX::Nested3PartySubID{"STRING_1586598473"}, NstdPtys3SubGrp_NoNested3PartySubIDs_2);
        set_field(noNested3PartySubIDs_0_0_2_2, FIX::Nested3PartySubIDType{152350575}, NstdPtys3SubGrp_NoNested3PartySubIDs_2);
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_2);
        all_compo_names.insert("...NoLegs...NoNested3PartyIDs...NoNested3PartySubIDs");

        noNested3PartyIDs_0_1_0.addGroup(noNested3PartySubIDs_0_0_2_2);
      }
      noLegs_0_0.addGroup(noNested3PartyIDs_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::ExecutionReport::NoLegs noLegs_0_1;
    // InstrmtLegExecGrp.NoLegs
    multiset<string> InstrmtLegExecGrp_NoLegs_1;
    set_field(noLegs_0_1, FIX::LegAllocID{"STRING_1739507283"}, InstrmtLegExecGrp_NoLegs_1);
    FIX::LegCalculatedCcyLastQty LegCalculatedCcyLastQty_1;
    LegCalculatedCcyLastQty_1.setString("1528684");
set_field(noLegs_0_1, LegCalculatedCcyLastQty_1, InstrmtLegExecGrp_NoLegs_1);
    set_field(noLegs_0_1, FIX::LegCoveredOrUncovered{352155425}, InstrmtLegExecGrp_NoLegs_1);
    FIX::LegCurrencyRatio LegCurrencyRatio_1;
    LegCurrencyRatio_1.setString("7812977");
set_field(noLegs_0_1, LegCurrencyRatio_1, InstrmtLegExecGrp_NoLegs_1);
    FIX::LegDividendYield LegDividendYield_1;
    LegDividendYield_1.setString("68.530000");
set_field(noLegs_0_1, LegDividendYield_1, InstrmtLegExecGrp_NoLegs_1);
    set_field(noLegs_0_1, FIX::LegExecInst{"MULTIPLECHARVALUE_1607562677"}, InstrmtLegExecGrp_NoLegs_1);
    FIX::LegGrossTradeAmt LegGrossTradeAmt_1;
    LegGrossTradeAmt_1.setString("20273937");
set_field(noLegs_0_1, LegGrossTradeAmt_1, InstrmtLegExecGrp_NoLegs_1);
    FIX::LegLastForwardPoints LegLastForwardPoints_1;
    LegLastForwardPoints_1.setString("18332316");
set_field(noLegs_0_1, LegLastForwardPoints_1, InstrmtLegExecGrp_NoLegs_1);
    FIX::LegLastPx LegLastPx_1;
    LegLastPx_1.setString("9828565");
set_field(noLegs_0_1, LegLastPx_1, InstrmtLegExecGrp_NoLegs_1);
    FIX::LegLastQty LegLastQty_1;
    LegLastQty_1.setString("1787702");
set_field(noLegs_0_1, LegLastQty_1, InstrmtLegExecGrp_NoLegs_1);
    FIX::LegOrderQty LegOrderQty_1;
    LegOrderQty_1.setString("12546420");
set_field(noLegs_0_1, LegOrderQty_1, InstrmtLegExecGrp_NoLegs_1);
    set_field(noLegs_0_1, FIX::LegPositionEffect{'5'}, InstrmtLegExecGrp_NoLegs_1);
    FIX::LegQty LegQty_1;
    LegQty_1.setString("809075");
set_field(noLegs_0_1, LegQty_1, InstrmtLegExecGrp_NoLegs_1);
    set_field(noLegs_0_1, FIX::LegRefID{"STRING_5519471"}, InstrmtLegExecGrp_NoLegs_1);
    set_field(noLegs_0_1, FIX::LegSettlCurrency{"JPY"}, InstrmtLegExecGrp_NoLegs_1);
    set_field(noLegs_0_1, FIX::LegSettlDate{"LOCALMKTDATE_1626032463"}, InstrmtLegExecGrp_NoLegs_1);
    set_field(noLegs_0_1, FIX::LegSettlType{'1'}, InstrmtLegExecGrp_NoLegs_1);
    set_field(noLegs_0_1, FIX::LegSwapType{4}, InstrmtLegExecGrp_NoLegs_1);
    FIX::LegVolatility LegVolatility_1;
    LegVolatility_1.setString("175927");
set_field(noLegs_0_1, LegVolatility_1, InstrmtLegExecGrp_NoLegs_1);
    all_values.push_back(InstrmtLegExecGrp_NoLegs_1);
    all_compo_names.insert("...NoLegs");

    // InstrumentLeg
    multiset<string> InstrumentLeg_41;
    set_field(noLegs_0_1, FIX::EncodedLegIssuer{"DATA_2049701155"}, InstrumentLeg_41);
    set_field(noLegs_0_1, FIX::EncodedLegIssuerLen{1705489071}, InstrumentLeg_41);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDesc{"DATA_609082714"}, InstrumentLeg_41);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDescLen{77157080}, InstrumentLeg_41);
    set_field(noLegs_0_1, FIX::LegCFICode{"STRING_618310686"}, InstrumentLeg_41);
    FIX::LegContractMultiplier LegContractMultiplier_41;
    LegContractMultiplier_41.setString("10037534");
set_field(noLegs_0_1, LegContractMultiplier_41, InstrumentLeg_41);
    set_field(noLegs_0_1, FIX::LegContractMultiplierUnit{281205408}, InstrumentLeg_41);
    set_field(noLegs_0_1, FIX::LegContractSettlMonth{"MONTHYEAR_652260800"}, InstrumentLeg_41);
    set_field(noLegs_0_1, FIX::LegCountryOfIssue{"COUNTRY_358285128"}, InstrumentLeg_41);
    set_field(noLegs_0_1, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1867803881"}, InstrumentLeg_41);
    FIX::LegCouponRate LegCouponRate_41;
    LegCouponRate_41.setString("13.750000");
set_field(noLegs_0_1, LegCouponRate_41, InstrumentLeg_41);
    set_field(noLegs_0_1, FIX::LegCreditRating{"STRING_2097792411"}, InstrumentLeg_41);
    set_field(noLegs_0_1, FIX::LegCurrency{"CAN"}, InstrumentLeg_41);
    set_field(noLegs_0_1, FIX::LegDatedDate{"LOCALMKTDATE_731606522"}, InstrumentLeg_41);
    set_field(noLegs_0_1, FIX::LegExerciseStyle{1311775558}, InstrumentLeg_41);
    FIX::LegFactor LegFactor_41;
    LegFactor_41.setString("6168458");
set_field(noLegs_0_1, LegFactor_41, InstrumentLeg_41);
    set_field(noLegs_0_1, FIX::LegFlowScheduleType{611516633}, InstrumentLeg_41);
    set_field(noLegs_0_1, FIX::LegInstrRegistry{"STRING_997523545"}, InstrumentLeg_41);
    set_field(noLegs_0_1, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1599702386"}, InstrumentLeg_41);
    set_field(noLegs_0_1, FIX::LegIssueDate{"LOCALMKTDATE_790286902"}, InstrumentLeg_41);
    set_field(noLegs_0_1, FIX::LegIssuer{"STRING_104681945"}, InstrumentLeg_41);
    set_field(noLegs_0_1, FIX::LegLocaleOfIssue{"STRING_40299880"}, InstrumentLeg_41);
    set_field(noLegs_0_1, FIX::LegMaturityDate{"LOCALMKTDATE_871194483"}, InstrumentLeg_41);
    set_field(noLegs_0_1, FIX::LegMaturityMonthYear{"MONTHYEAR_110201416"}, InstrumentLeg_41);
    set_field(noLegs_0_1, FIX::LegMaturityTime{"TZTIMEONLY_1607674479"}, InstrumentLeg_41);
    set_field(noLegs_0_1, FIX::LegOptAttribute{'1'}, InstrumentLeg_41);
    FIX::LegOptionRatio LegOptionRatio_41;
    LegOptionRatio_41.setString("17362338");
set_field(noLegs_0_1, LegOptionRatio_41, InstrumentLeg_41);
    set_field(noLegs_0_1, FIX::LegPool{"STRING_829171412"}, InstrumentLeg_41);
    set_field(noLegs_0_1, FIX::LegPriceUnitOfMeasure{"STRING_415761099"}, InstrumentLeg_41);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_41;
    LegPriceUnitOfMeasureQty_41.setString("17538266");
set_field(noLegs_0_1, LegPriceUnitOfMeasureQty_41, InstrumentLeg_41);
    set_field(noLegs_0_1, FIX::LegProduct{731388919}, InstrumentLeg_41);
    set_field(noLegs_0_1, FIX::LegPutOrCall{2121250170}, InstrumentLeg_41);
    FIX::LegRatioQty LegRatioQty_41;
    LegRatioQty_41.setString("2154257");
set_field(noLegs_0_1, LegRatioQty_41, InstrumentLeg_41);
    set_field(noLegs_0_1, FIX::LegRedemptionDate{"LOCALMKTDATE_808545999"}, InstrumentLeg_41);
    set_field(noLegs_0_1, FIX::LegRepoCollateralSecurityType{"STRING_592077209"}, InstrumentLeg_41);
    FIX::LegRepurchaseRate LegRepurchaseRate_41;
    LegRepurchaseRate_41.setString("91.550000");
set_field(noLegs_0_1, LegRepurchaseRate_41, InstrumentLeg_41);
    set_field(noLegs_0_1, FIX::LegRepurchaseTerm{1089751407}, InstrumentLeg_41);
    set_field(noLegs_0_1, FIX::LegSecurityDesc{"STRING_1244338009"}, InstrumentLeg_41);
    set_field(noLegs_0_1, FIX::LegSecurityExchange{"EXCHANGE_1577464283"}, InstrumentLeg_41);
    set_field(noLegs_0_1, FIX::LegSecurityID{"STRING_810071640"}, InstrumentLeg_41);
    set_field(noLegs_0_1, FIX::LegSecurityIDSource{"STRING_2048949385"}, InstrumentLeg_41);
    set_field(noLegs_0_1, FIX::LegSecuritySubType{"STRING_1527773047"}, InstrumentLeg_41);
    set_field(noLegs_0_1, FIX::LegSecurityType{"STRING_683260345"}, InstrumentLeg_41);
    set_field(noLegs_0_1, FIX::LegSide{'1'}, InstrumentLeg_41);
    set_field(noLegs_0_1, FIX::LegStateOrProvinceOfIssue{"STRING_111895921"}, InstrumentLeg_41);
    set_field(noLegs_0_1, FIX::LegStrikeCurrency{"USD"}, InstrumentLeg_41);
    FIX::LegStrikePrice LegStrikePrice_41;
    LegStrikePrice_41.setString("7234125");
set_field(noLegs_0_1, LegStrikePrice_41, InstrumentLeg_41);
    set_field(noLegs_0_1, FIX::LegSymbol{"STRING_845075801"}, InstrumentLeg_41);
    set_field(noLegs_0_1, FIX::LegSymbolSfx{"STRING_1127297106"}, InstrumentLeg_41);
    set_field(noLegs_0_1, FIX::LegTimeUnit{"STRING_1513699457"}, InstrumentLeg_41);
    set_field(noLegs_0_1, FIX::LegUnitOfMeasure{"STRING_949757746"}, InstrumentLeg_41);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_41;
    LegUnitOfMeasureQty_41.setString("11675969");
set_field(noLegs_0_1, LegUnitOfMeasureQty_41, InstrumentLeg_41);
    all_values.push_back(InstrumentLeg_41);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::ExecutionReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_84;
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltID{"STRING_1059959162"}, LegSecAltIDGrp_NoLegSecurityAltID_84);
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltIDSource{"STRING_627787818"}, LegSecAltIDGrp_NoLegSecurityAltID_84);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_84);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_85;
      set_field(noLegSecurityAltID_1_1_1, FIX::LegSecurityAltID{"STRING_1517417882"}, LegSecAltIDGrp_NoLegSecurityAltID_85);
      set_field(noLegSecurityAltID_1_1_1, FIX::LegSecurityAltIDSource{"STRING_648709393"}, LegSecAltIDGrp_NoLegSecurityAltID_85);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_85);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    // LegPreAllocGrp
    // Group LegPreAllocGrp.NoLegAllocs
    {
      FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs noLegAllocs_1_1_0;
      // LegPreAllocGrp.NoLegAllocs
      multiset<string> LegPreAllocGrp_NoLegAllocs_3;
      set_field(noLegAllocs_1_1_0, FIX::LegAllocAccount{"STRING_1933178982"}, LegPreAllocGrp_NoLegAllocs_3);
      set_field(noLegAllocs_1_1_0, FIX::LegAllocAcctIDSource{"STRING_255052391"}, LegPreAllocGrp_NoLegAllocs_3);
      FIX::LegAllocQty LegAllocQty_3;
      LegAllocQty_3.setString("408645");
set_field(noLegAllocs_1_1_0, LegAllocQty_3, LegPreAllocGrp_NoLegAllocs_3);
      set_field(noLegAllocs_1_1_0, FIX::LegAllocSettlCurrency{"USD"}, LegPreAllocGrp_NoLegAllocs_3);
      set_field(noLegAllocs_1_1_0, FIX::LegIndividualAllocID{"STRING_849410500"}, LegPreAllocGrp_NoLegAllocs_3);
      all_values.push_back(LegPreAllocGrp_NoLegAllocs_3);
      all_compo_names.insert("...NoLegs...NoLegAllocs");

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_1_0_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_24;
        set_field(noNested2PartyIDs_1_0_2_0, FIX::Nested2PartyID{"STRING_1689657257"}, NestedParties2_NoNested2PartyIDs_24);
        set_field(noNested2PartyIDs_1_0_2_0, FIX::Nested2PartyIDSource{'1'}, NestedParties2_NoNested2PartyIDs_24);
        set_field(noNested2PartyIDs_1_0_2_0, FIX::Nested2PartyRole{1595877075}, NestedParties2_NoNested2PartyIDs_24);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_24);
        all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_46;
          set_field(noNested2PartySubIDs_1_0_0_3_0, FIX::Nested2PartySubID{"STRING_601749900"}, NstdPtys2SubGrp_NoNested2PartySubIDs_46);
          set_field(noNested2PartySubIDs_1_0_0_3_0, FIX::Nested2PartySubIDType{1497342812}, NstdPtys2SubGrp_NoNested2PartySubIDs_46);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_46);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_1_0_2_0.addGroup(noNested2PartySubIDs_1_0_0_3_0);
        }
        noLegAllocs_1_1_0.addGroup(noNested2PartyIDs_1_0_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_1_0_2_1;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_25;
        set_field(noNested2PartyIDs_1_0_2_1, FIX::Nested2PartyID{"STRING_499927292"}, NestedParties2_NoNested2PartyIDs_25);
        set_field(noNested2PartyIDs_1_0_2_1, FIX::Nested2PartyIDSource{'1'}, NestedParties2_NoNested2PartyIDs_25);
        set_field(noNested2PartyIDs_1_0_2_1, FIX::Nested2PartyRole{408091702}, NestedParties2_NoNested2PartyIDs_25);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_25);
        all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_1_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_47;
          set_field(noNested2PartySubIDs_1_0_1_3_0, FIX::Nested2PartySubID{"STRING_1132562502"}, NstdPtys2SubGrp_NoNested2PartySubIDs_47);
          set_field(noNested2PartySubIDs_1_0_1_3_0, FIX::Nested2PartySubIDType{2083170070}, NstdPtys2SubGrp_NoNested2PartySubIDs_47);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_47);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_1_0_2_1.addGroup(noNested2PartySubIDs_1_0_1_3_0);
        }
        noLegAllocs_1_1_0.addGroup(noNested2PartyIDs_1_0_2_1);
      }
      noLegs_0_1.addGroup(noLegAllocs_1_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs noLegAllocs_1_1_1;
      // LegPreAllocGrp.NoLegAllocs
      multiset<string> LegPreAllocGrp_NoLegAllocs_4;
      set_field(noLegAllocs_1_1_1, FIX::LegAllocAccount{"STRING_1335235768"}, LegPreAllocGrp_NoLegAllocs_4);
      set_field(noLegAllocs_1_1_1, FIX::LegAllocAcctIDSource{"STRING_1977638303"}, LegPreAllocGrp_NoLegAllocs_4);
      FIX::LegAllocQty LegAllocQty_4;
      LegAllocQty_4.setString("10629835");
set_field(noLegAllocs_1_1_1, LegAllocQty_4, LegPreAllocGrp_NoLegAllocs_4);
      set_field(noLegAllocs_1_1_1, FIX::LegAllocSettlCurrency{"EUR"}, LegPreAllocGrp_NoLegAllocs_4);
      set_field(noLegAllocs_1_1_1, FIX::LegIndividualAllocID{"STRING_83096866"}, LegPreAllocGrp_NoLegAllocs_4);
      all_values.push_back(LegPreAllocGrp_NoLegAllocs_4);
      all_compo_names.insert("...NoLegs...NoLegAllocs");

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_1_1_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_26;
        set_field(noNested2PartyIDs_1_1_2_0, FIX::Nested2PartyID{"STRING_1839871563"}, NestedParties2_NoNested2PartyIDs_26);
        set_field(noNested2PartyIDs_1_1_2_0, FIX::Nested2PartyIDSource{'7'}, NestedParties2_NoNested2PartyIDs_26);
        set_field(noNested2PartyIDs_1_1_2_0, FIX::Nested2PartyRole{308796105}, NestedParties2_NoNested2PartyIDs_26);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_26);
        all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_1_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_48;
          set_field(noNested2PartySubIDs_1_1_0_3_0, FIX::Nested2PartySubID{"STRING_20360266"}, NstdPtys2SubGrp_NoNested2PartySubIDs_48);
          set_field(noNested2PartySubIDs_1_1_0_3_0, FIX::Nested2PartySubIDType{94491439}, NstdPtys2SubGrp_NoNested2PartySubIDs_48);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_48);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_1_1_2_0.addGroup(noNested2PartySubIDs_1_1_0_3_0);
        }
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_1_0_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_49;
          set_field(noNested2PartySubIDs_1_1_0_3_1, FIX::Nested2PartySubID{"STRING_596149699"}, NstdPtys2SubGrp_NoNested2PartySubIDs_49);
          set_field(noNested2PartySubIDs_1_1_0_3_1, FIX::Nested2PartySubIDType{61224767}, NstdPtys2SubGrp_NoNested2PartySubIDs_49);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_49);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_1_1_2_0.addGroup(noNested2PartySubIDs_1_1_0_3_1);
        }
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_1_0_3_2;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_50;
          set_field(noNested2PartySubIDs_1_1_0_3_2, FIX::Nested2PartySubID{"STRING_2001436944"}, NstdPtys2SubGrp_NoNested2PartySubIDs_50);
          set_field(noNested2PartySubIDs_1_1_0_3_2, FIX::Nested2PartySubIDType{1066627802}, NstdPtys2SubGrp_NoNested2PartySubIDs_50);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_50);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_1_1_2_0.addGroup(noNested2PartySubIDs_1_1_0_3_2);
        }
        noLegAllocs_1_1_1.addGroup(noNested2PartyIDs_1_1_2_0);
      }
      noLegs_0_1.addGroup(noLegAllocs_1_1_1);
    }
    {
      FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs noLegAllocs_1_1_2;
      // LegPreAllocGrp.NoLegAllocs
      multiset<string> LegPreAllocGrp_NoLegAllocs_5;
      set_field(noLegAllocs_1_1_2, FIX::LegAllocAccount{"STRING_910635268"}, LegPreAllocGrp_NoLegAllocs_5);
      set_field(noLegAllocs_1_1_2, FIX::LegAllocAcctIDSource{"STRING_205492361"}, LegPreAllocGrp_NoLegAllocs_5);
      FIX::LegAllocQty LegAllocQty_5;
      LegAllocQty_5.setString("6088014");
set_field(noLegAllocs_1_1_2, LegAllocQty_5, LegPreAllocGrp_NoLegAllocs_5);
      set_field(noLegAllocs_1_1_2, FIX::LegAllocSettlCurrency{"GBP"}, LegPreAllocGrp_NoLegAllocs_5);
      set_field(noLegAllocs_1_1_2, FIX::LegIndividualAllocID{"STRING_1728439304"}, LegPreAllocGrp_NoLegAllocs_5);
      all_values.push_back(LegPreAllocGrp_NoLegAllocs_5);
      all_compo_names.insert("...NoLegs...NoLegAllocs");

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_1_2_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_27;
        set_field(noNested2PartyIDs_1_2_2_0, FIX::Nested2PartyID{"STRING_1151228600"}, NestedParties2_NoNested2PartyIDs_27);
        set_field(noNested2PartyIDs_1_2_2_0, FIX::Nested2PartyIDSource{'8'}, NestedParties2_NoNested2PartyIDs_27);
        set_field(noNested2PartyIDs_1_2_2_0, FIX::Nested2PartyRole{441590026}, NestedParties2_NoNested2PartyIDs_27);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_27);
        all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_2_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_51;
          set_field(noNested2PartySubIDs_1_2_0_3_0, FIX::Nested2PartySubID{"STRING_692706162"}, NstdPtys2SubGrp_NoNested2PartySubIDs_51);
          set_field(noNested2PartySubIDs_1_2_0_3_0, FIX::Nested2PartySubIDType{1574152528}, NstdPtys2SubGrp_NoNested2PartySubIDs_51);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_51);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_1_2_2_0.addGroup(noNested2PartySubIDs_1_2_0_3_0);
        }
        noLegAllocs_1_1_2.addGroup(noNested2PartyIDs_1_2_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_1_2_2_1;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_28;
        set_field(noNested2PartyIDs_1_2_2_1, FIX::Nested2PartyID{"STRING_1495006724"}, NestedParties2_NoNested2PartyIDs_28);
        set_field(noNested2PartyIDs_1_2_2_1, FIX::Nested2PartyIDSource{'2'}, NestedParties2_NoNested2PartyIDs_28);
        set_field(noNested2PartyIDs_1_2_2_1, FIX::Nested2PartyRole{1404307183}, NestedParties2_NoNested2PartyIDs_28);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_28);
        all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_2_1_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_52;
          set_field(noNested2PartySubIDs_1_2_1_3_0, FIX::Nested2PartySubID{"STRING_581909860"}, NstdPtys2SubGrp_NoNested2PartySubIDs_52);
          set_field(noNested2PartySubIDs_1_2_1_3_0, FIX::Nested2PartySubIDType{36735936}, NstdPtys2SubGrp_NoNested2PartySubIDs_52);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_52);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_1_2_2_1.addGroup(noNested2PartySubIDs_1_2_1_3_0);
        }
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_2_1_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_53;
          set_field(noNested2PartySubIDs_1_2_1_3_1, FIX::Nested2PartySubID{"STRING_493603471"}, NstdPtys2SubGrp_NoNested2PartySubIDs_53);
          set_field(noNested2PartySubIDs_1_2_1_3_1, FIX::Nested2PartySubIDType{1520771731}, NstdPtys2SubGrp_NoNested2PartySubIDs_53);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_53);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_1_2_2_1.addGroup(noNested2PartySubIDs_1_2_1_3_1);
        }
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_2_1_3_2;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_54;
          set_field(noNested2PartySubIDs_1_2_1_3_2, FIX::Nested2PartySubID{"STRING_1876607499"}, NstdPtys2SubGrp_NoNested2PartySubIDs_54);
          set_field(noNested2PartySubIDs_1_2_1_3_2, FIX::Nested2PartySubIDType{1204488155}, NstdPtys2SubGrp_NoNested2PartySubIDs_54);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_54);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_1_2_2_1.addGroup(noNested2PartySubIDs_1_2_1_3_2);
        }
        noLegAllocs_1_1_2.addGroup(noNested2PartyIDs_1_2_2_1);
      }
      noLegs_0_1.addGroup(noLegAllocs_1_1_2);
    }
    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::ExecutionReport::NoLegs::NoLegStipulations noLegStipulations_1_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_1;
      set_field(noLegStipulations_1_1_0, FIX::LegStipulationType{"STRING_70221160"}, LegStipulations_NoLegStipulations_1);
      set_field(noLegStipulations_1_1_0, FIX::LegStipulationValue{"STRING_1224848422"}, LegStipulations_NoLegStipulations_1);
      all_values.push_back(LegStipulations_NoLegStipulations_1);
      all_compo_names.insert("...NoLegs...NoLegStipulations");

      noLegs_0_1.addGroup(noLegStipulations_1_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoLegs::NoLegStipulations noLegStipulations_1_1_1;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_2;
      set_field(noLegStipulations_1_1_1, FIX::LegStipulationType{"STRING_1924059276"}, LegStipulations_NoLegStipulations_2);
      set_field(noLegStipulations_1_1_1, FIX::LegStipulationValue{"STRING_666370859"}, LegStipulations_NoLegStipulations_2);
      all_values.push_back(LegStipulations_NoLegStipulations_2);
      all_compo_names.insert("...NoLegs...NoLegStipulations");

      noLegs_0_1.addGroup(noLegStipulations_1_1_1);
    }
    {
      FIX50SP2::ExecutionReport::NoLegs::NoLegStipulations noLegStipulations_1_1_2;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_3;
      set_field(noLegStipulations_1_1_2, FIX::LegStipulationType{"STRING_1286073189"}, LegStipulations_NoLegStipulations_3);
      set_field(noLegStipulations_1_1_2, FIX::LegStipulationValue{"STRING_1778012572"}, LegStipulations_NoLegStipulations_3);
      all_values.push_back(LegStipulations_NoLegStipulations_3);
      all_compo_names.insert("...NoLegs...NoLegStipulations");

      noLegs_0_1.addGroup(noLegStipulations_1_1_2);
    }
    // NestedParties3
    // Group NestedParties3.NoNested3PartyIDs
    {
      FIX50SP2::ExecutionReport::NoLegs::NoNested3PartyIDs noNested3PartyIDs_1_1_0;
      // NestedParties3.NoNested3PartyIDs
      multiset<string> NestedParties3_NoNested3PartyIDs_1;
      set_field(noNested3PartyIDs_1_1_0, FIX::Nested3PartyID{"STRING_49224809"}, NestedParties3_NoNested3PartyIDs_1);
      set_field(noNested3PartyIDs_1_1_0, FIX::Nested3PartyIDSource{'1'}, NestedParties3_NoNested3PartyIDs_1);
      set_field(noNested3PartyIDs_1_1_0, FIX::Nested3PartyRole{194316425}, NestedParties3_NoNested3PartyIDs_1);
      all_values.push_back(NestedParties3_NoNested3PartyIDs_1);
      all_compo_names.insert("...NoLegs...NoNested3PartyIDs");

      // NstdPtys3SubGrp
      // Group NstdPtys3SubGrp.NoNested3PartySubIDs
      {
        FIX50SP2::ExecutionReport::NoLegs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_1_0_2_0;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_3;
        set_field(noNested3PartySubIDs_1_0_2_0, FIX::Nested3PartySubID{"STRING_1637390722"}, NstdPtys3SubGrp_NoNested3PartySubIDs_3);
        set_field(noNested3PartySubIDs_1_0_2_0, FIX::Nested3PartySubIDType{1922755729}, NstdPtys3SubGrp_NoNested3PartySubIDs_3);
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_3);
        all_compo_names.insert("...NoLegs...NoNested3PartyIDs...NoNested3PartySubIDs");

        noNested3PartyIDs_1_1_0.addGroup(noNested3PartySubIDs_1_0_2_0);
      }
      noLegs_0_1.addGroup(noNested3PartyIDs_1_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoLegs::NoNested3PartyIDs noNested3PartyIDs_1_1_1;
      // NestedParties3.NoNested3PartyIDs
      multiset<string> NestedParties3_NoNested3PartyIDs_2;
      set_field(noNested3PartyIDs_1_1_1, FIX::Nested3PartyID{"STRING_2055601766"}, NestedParties3_NoNested3PartyIDs_2);
      set_field(noNested3PartyIDs_1_1_1, FIX::Nested3PartyIDSource{'6'}, NestedParties3_NoNested3PartyIDs_2);
      set_field(noNested3PartyIDs_1_1_1, FIX::Nested3PartyRole{2003638678}, NestedParties3_NoNested3PartyIDs_2);
      all_values.push_back(NestedParties3_NoNested3PartyIDs_2);
      all_compo_names.insert("...NoLegs...NoNested3PartyIDs");

      // NstdPtys3SubGrp
      // Group NstdPtys3SubGrp.NoNested3PartySubIDs
      {
        FIX50SP2::ExecutionReport::NoLegs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_1_1_2_0;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_4;
        set_field(noNested3PartySubIDs_1_1_2_0, FIX::Nested3PartySubID{"STRING_52972329"}, NstdPtys3SubGrp_NoNested3PartySubIDs_4);
        set_field(noNested3PartySubIDs_1_1_2_0, FIX::Nested3PartySubIDType{548861192}, NstdPtys3SubGrp_NoNested3PartySubIDs_4);
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_4);
        all_compo_names.insert("...NoLegs...NoNested3PartyIDs...NoNested3PartySubIDs");

        noNested3PartyIDs_1_1_1.addGroup(noNested3PartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoLegs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_1_1_2_1;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_5;
        set_field(noNested3PartySubIDs_1_1_2_1, FIX::Nested3PartySubID{"STRING_1923860673"}, NstdPtys3SubGrp_NoNested3PartySubIDs_5);
        set_field(noNested3PartySubIDs_1_1_2_1, FIX::Nested3PartySubIDType{1547979054}, NstdPtys3SubGrp_NoNested3PartySubIDs_5);
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_5);
        all_compo_names.insert("...NoLegs...NoNested3PartyIDs...NoNested3PartySubIDs");

        noNested3PartyIDs_1_1_1.addGroup(noNested3PartySubIDs_1_1_2_1);
      }
      noLegs_0_1.addGroup(noNested3PartyIDs_1_1_1);
    }
    msg.addGroup(noLegs_0_1);
  }
  // Instrument
  multiset<string> Instrument_26;
  FIX::AttachmentPoint AttachmentPoint_26;
  AttachmentPoint_26.setString("94.740000");
set_field(msg, AttachmentPoint_26, Instrument_26);
  set_field(msg, FIX::CFICode{"STRING_1180684208"}, Instrument_26);
  set_field(msg, FIX::CPProgram{99}, Instrument_26);
  set_field(msg, FIX::CPRegType{"STRING_1011229335"}, Instrument_26);
  FIX::CapPrice CapPrice_26;
  CapPrice_26.setString("12174201");
set_field(msg, CapPrice_26, Instrument_26);
  FIX::ContractMultiplier ContractMultiplier_26;
  ContractMultiplier_26.setString("3046054");
set_field(msg, ContractMultiplier_26, Instrument_26);
  set_field(msg, FIX::ContractMultiplierUnit{2}, Instrument_26);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_946543996"}, Instrument_26);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_1509093637"}, Instrument_26);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_66601607"}, Instrument_26);
  FIX::CouponRate CouponRate_26;
  CouponRate_26.setString("51.560000");
set_field(msg, CouponRate_26, Instrument_26);
  set_field(msg, FIX::CreditRating{"STRING_586458411"}, Instrument_26);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_1990660884"}, Instrument_26);
  FIX::DetachmentPoint DetachmentPoint_26;
  DetachmentPoint_26.setString("60.160000");
set_field(msg, DetachmentPoint_26, Instrument_26);
  set_field(msg, FIX::EncodedIssuer{"DATA_1872531600"}, Instrument_26);
  set_field(msg, FIX::EncodedIssuerLen{1621189808}, Instrument_26);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_1268651029"}, Instrument_26);
  set_field(msg, FIX::EncodedSecurityDescLen{1921756410}, Instrument_26);
  set_field(msg, FIX::ExerciseStyle{1}, Instrument_26);
  FIX::Factor Factor_26;
  Factor_26.setString("14629674");
set_field(msg, Factor_26, Instrument_26);
  set_field(msg, FIX::FlexProductEligibilityIndicator{false}, Instrument_26);
  set_field(msg, FIX::FlexibleIndicator{false}, Instrument_26);
  FIX::FloorPrice FloorPrice_26;
  FloorPrice_26.setString("12382395");
set_field(msg, FloorPrice_26, Instrument_26);
  set_field(msg, FIX::FlowScheduleType{2}, Instrument_26);
  set_field(msg, FIX::InstrRegistry{"STRING_1588253844"}, Instrument_26);
  set_field(msg, FIX::InstrmtAssignmentMethod{'1'}, Instrument_26);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_783637362"}, Instrument_26);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_1641226173"}, Instrument_26);
  set_field(msg, FIX::Issuer{"STRING_1643255758"}, Instrument_26);
  set_field(msg, FIX::ListMethod{1}, Instrument_26);
  set_field(msg, FIX::LocaleOfIssue{"STRING_1041721579"}, Instrument_26);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_2072575232"}, Instrument_26);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_1740698595"}, Instrument_26);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_852723590"}, Instrument_26);
  FIX::MinPriceIncrement MinPriceIncrement_26;
  MinPriceIncrement_26.setString("9363209");
set_field(msg, MinPriceIncrement_26, Instrument_26);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_26;
  MinPriceIncrementAmount_26.setString("8106350");
set_field(msg, MinPriceIncrementAmount_26, Instrument_26);
  set_field(msg, FIX::NTPositionLimit{1157329071}, Instrument_26);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_26;
  NotionalPercentageOutstanding_26.setString("83.380000");
set_field(msg, NotionalPercentageOutstanding_26, Instrument_26);
  set_field(msg, FIX::OptAttribute{'1'}, Instrument_26);
  FIX::OptPayoutAmount OptPayoutAmount_26;
  OptPayoutAmount_26.setString("5189390");
set_field(msg, OptPayoutAmount_26, Instrument_26);
  set_field(msg, FIX::OptPayoutType{3}, Instrument_26);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_26;
  OriginalNotionalPercentageOutstanding_26.setString("5.970000");
set_field(msg, OriginalNotionalPercentageOutstanding_26, Instrument_26);
  set_field(msg, FIX::Pool{"STRING_1105397471"}, Instrument_26);
  set_field(msg, FIX::PositionLimit{1230617181}, Instrument_26);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_INX"}, Instrument_26);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_830445424"}, Instrument_26);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_26;
  PriceUnitOfMeasureQty_26.setString("7043233");
set_field(msg, PriceUnitOfMeasureQty_26, Instrument_26);
  set_field(msg, FIX::Product{12}, Instrument_26);
  set_field(msg, FIX::ProductComplex{"STRING_604718186"}, Instrument_26);
  set_field(msg, FIX::PutOrCall{0}, Instrument_26);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_746247801"}, Instrument_26);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_1130529285"}, Instrument_26);
  FIX::RepurchaseRate RepurchaseRate_26;
  RepurchaseRate_26.setString("89.570000");
set_field(msg, RepurchaseRate_26, Instrument_26);
  set_field(msg, FIX::RepurchaseTerm{1984487337}, Instrument_26);
  set_field(msg, FIX::RestructuringType{"STRING_XR"}, Instrument_26);
  set_field(msg, FIX::SecurityDesc{"STRING_401939153"}, Instrument_26);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_931398255"}, Instrument_26);
  set_field(msg, FIX::SecurityGroup{"STRING_200612217"}, Instrument_26);
  set_field(msg, FIX::SecurityID{"STRING_2043165327"}, Instrument_26);
  set_field(msg, FIX::SecurityIDSource{"STRING_I"}, Instrument_26);
  set_field(msg, FIX::SecurityStatus{"STRING_1"}, Instrument_26);
  set_field(msg, FIX::SecuritySubType{"STRING_937403258"}, Instrument_26);
  set_field(msg, FIX::SecurityType{"STRING_PFAND"}, Instrument_26);
  set_field(msg, FIX::Seniority{"STRING_SB"}, Instrument_26);
  set_field(msg, FIX::SettlMethod{'C'}, Instrument_26);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_1288582869"}, Instrument_26);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_1164476644"}, Instrument_26);
  set_field(msg, FIX::StrikeCurrency{"EUR"}, Instrument_26);
  FIX::StrikeMultiplier StrikeMultiplier_26;
  StrikeMultiplier_26.setString("7741720");
set_field(msg, StrikeMultiplier_26, Instrument_26);
  FIX::StrikePrice StrikePrice_26;
  StrikePrice_26.setString("13189113");
set_field(msg, StrikePrice_26, Instrument_26);
  set_field(msg, FIX::StrikePriceBoundaryMethod{1}, Instrument_26);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_26;
  StrikePriceBoundaryPrecision_26.setString("26.820000");
set_field(msg, StrikePriceBoundaryPrecision_26, Instrument_26);
  set_field(msg, FIX::StrikePriceDeterminationMethod{1}, Instrument_26);
  FIX::StrikeValue StrikeValue_26;
  StrikeValue_26.setString("9325110");
set_field(msg, StrikeValue_26, Instrument_26);
  set_field(msg, FIX::Symbol{"STRING_1562745648"}, Instrument_26);
  set_field(msg, FIX::SymbolSfx{"STRING_CD"}, Instrument_26);
  set_field(msg, FIX::TimeUnit{"STRING_Yr"}, Instrument_26);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{4}, Instrument_26);
  set_field(msg, FIX::UnitOfMeasure{"STRING_Gal"}, Instrument_26);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_26;
  UnitOfMeasureQty_26.setString("16508851");
set_field(msg, UnitOfMeasureQty_26, Instrument_26);
  set_field(msg, FIX::ValuationMethod{"STRING_FUT"}, Instrument_26);
  all_values.push_back(Instrument_26);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::ExecutionReport::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_48;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_48);
    FIX::ComplexEventPrice ComplexEventPrice_48;
    ComplexEventPrice_48.setString("14292774");
set_field(noComplexEvents_0_0, ComplexEventPrice_48, ComplexEvents_NoComplexEvents_48);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{4}, ComplexEvents_NoComplexEvents_48);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_48;
    ComplexEventPriceBoundaryPrecision_48.setString("96.320000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_48, ComplexEvents_NoComplexEvents_48);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_48);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{5}, ComplexEvents_NoComplexEvents_48);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_48;
    ComplexOptPayoutAmount_48.setString("7621913");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_48, ComplexEvents_NoComplexEvents_48);
    all_values.push_back(ComplexEvents_NoComplexEvents_48);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::ExecutionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_95;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(9, 9, 11, 6, 11, 2001)}, ComplexEventDates_NoComplexEventDates_95);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(6, 12, 6, 27, 7, 2000)}, ComplexEventDates_NoComplexEventDates_95);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_95);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::ExecutionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_203;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(14, 18, 1)}, ComplexEventTimes_NoComplexEventTimes_203);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(11, 30, 56)}, ComplexEventTimes_NoComplexEventTimes_203);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_203);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_204;
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(8, 54, 29)}, ComplexEventTimes_NoComplexEventTimes_204);
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(14, 52, 0)}, ComplexEventTimes_NoComplexEventTimes_204);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_204);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::ExecutionReport::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_49;
    set_field(noComplexEvents_0_1, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_49);
    FIX::ComplexEventPrice ComplexEventPrice_49;
    ComplexEventPrice_49.setString("18682006");
set_field(noComplexEvents_0_1, ComplexEventPrice_49, ComplexEvents_NoComplexEvents_49);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceBoundaryMethod{5}, ComplexEvents_NoComplexEvents_49);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_49;
    ComplexEventPriceBoundaryPrecision_49.setString("41.320000");
set_field(noComplexEvents_0_1, ComplexEventPriceBoundaryPrecision_49, ComplexEvents_NoComplexEvents_49);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_49);
    set_field(noComplexEvents_0_1, FIX::ComplexEventType{3}, ComplexEvents_NoComplexEvents_49);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_49;
    ComplexOptPayoutAmount_49.setString("20313567");
set_field(noComplexEvents_0_1, ComplexOptPayoutAmount_49, ComplexEvents_NoComplexEvents_49);
    all_values.push_back(ComplexEvents_NoComplexEvents_49);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::ExecutionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_96;
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(15, 56, 29, 2, 4, 2000)}, ComplexEventDates_NoComplexEventDates_96);
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(21, 12, 50, 22, 4, 2014)}, ComplexEventDates_NoComplexEventDates_96);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_96);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::ExecutionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_205;
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(4, 48, 42)}, ComplexEventTimes_NoComplexEventTimes_205);
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(18, 35, 38)}, ComplexEventTimes_NoComplexEventTimes_205);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_205);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_97;
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(5, 39, 56, 21, 4, 2012)}, ComplexEventDates_NoComplexEventDates_97);
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(9, 51, 39, 22, 6, 2016)}, ComplexEventDates_NoComplexEventDates_97);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_97);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::ExecutionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_206;
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(8, 1, 32)}, ComplexEventTimes_NoComplexEventTimes_206);
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(5, 52, 48)}, ComplexEventTimes_NoComplexEventTimes_206);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_206);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::ExecutionReport::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_58;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_425536860"}, EvntGrp_NoEvents_58);
    FIX::EventPx EventPx_58;
    EventPx_58.setString("16630731");
set_field(noEvents_0_0, EventPx_58, EvntGrp_NoEvents_58);
    set_field(noEvents_0_0, FIX::EventText{"STRING_1001658720"}, EvntGrp_NoEvents_58);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(3, 35, 7, 3, 5, 2003)}, EvntGrp_NoEvents_58);
    set_field(noEvents_0_0, FIX::EventType{12}, EvntGrp_NoEvents_58);
    all_values.push_back(EvntGrp_NoEvents_58);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::ExecutionReport::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_49;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_685155150"}, InstrumentParties_NoInstrumentParties_49);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_49);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{940986272}, InstrumentParties_NoInstrumentParties_49);
    all_values.push_back(InstrumentParties_NoInstrumentParties_49);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::ExecutionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_100;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_802323743"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_100);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{1330829172}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_100);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_100);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_101;
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubID{"STRING_1173998766"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_101);
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubIDType{1964691196}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_101);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_101);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::ExecutionReport::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_50;
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyID{"STRING_1387486582"}, InstrumentParties_NoInstrumentParties_50);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyIDSource{'7'}, InstrumentParties_NoInstrumentParties_50);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyRole{292288670}, InstrumentParties_NoInstrumentParties_50);
    all_values.push_back(InstrumentParties_NoInstrumentParties_50);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::ExecutionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_102;
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubID{"STRING_369650149"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_102);
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubIDType{812775202}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_102);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_102);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::ExecutionReport::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_54;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_170659426"}, SecAltIDGrp_NoSecurityAltID_54);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_1556149034"}, SecAltIDGrp_NoSecurityAltID_54);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_54);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::ExecutionReport::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_55;
    set_field(noSecurityAltID_0_1, FIX::SecurityAltID{"STRING_1866415252"}, SecAltIDGrp_NoSecurityAltID_55);
    set_field(noSecurityAltID_0_1, FIX::SecurityAltIDSource{"STRING_868786024"}, SecAltIDGrp_NoSecurityAltID_55);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_55);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_52;
  set_field(msg, FIX::SecurityXML{"XMLDATA_1981685894"}, SecurityXML_52);
  set_field(msg, FIX::SecurityXMLLen{1382004733}, SecurityXML_52);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_1870444744"}, SecurityXML_52);
  all_values.push_back(SecurityXML_52);
  all_compo_names.insert("..");

  // MiscFeesGrp
  // Group MiscFeesGrp.NoMiscFees
  {
    FIX50SP2::ExecutionReport::NoMiscFees noMiscFees_0_0;
    // MiscFeesGrp.NoMiscFees
    multiset<string> MiscFeesGrp_NoMiscFees_27;
    FIX::MiscFeeAmt MiscFeeAmt_27;
    MiscFeeAmt_27.setString("20479378");
set_field(noMiscFees_0_0, MiscFeeAmt_27, MiscFeesGrp_NoMiscFees_27);
    set_field(noMiscFees_0_0, FIX::MiscFeeBasis{2}, MiscFeesGrp_NoMiscFees_27);
    set_field(noMiscFees_0_0, FIX::MiscFeeCurr{"CAN"}, MiscFeesGrp_NoMiscFees_27);
    set_field(noMiscFees_0_0, FIX::MiscFeeType{"STRING_5"}, MiscFeesGrp_NoMiscFees_27);
    all_values.push_back(MiscFeesGrp_NoMiscFees_27);
    all_compo_names.insert("...NoMiscFees");

    msg.addGroup(noMiscFees_0_0);
  }
  {
    FIX50SP2::ExecutionReport::NoMiscFees noMiscFees_0_1;
    // MiscFeesGrp.NoMiscFees
    multiset<string> MiscFeesGrp_NoMiscFees_28;
    FIX::MiscFeeAmt MiscFeeAmt_28;
    MiscFeeAmt_28.setString("16300271");
set_field(noMiscFees_0_1, MiscFeeAmt_28, MiscFeesGrp_NoMiscFees_28);
    set_field(noMiscFees_0_1, FIX::MiscFeeBasis{0}, MiscFeesGrp_NoMiscFees_28);
    set_field(noMiscFees_0_1, FIX::MiscFeeCurr{"CHF"}, MiscFeesGrp_NoMiscFees_28);
    set_field(noMiscFees_0_1, FIX::MiscFeeType{"STRING_13"}, MiscFeesGrp_NoMiscFees_28);
    all_values.push_back(MiscFeesGrp_NoMiscFees_28);
    all_compo_names.insert("...NoMiscFees");

    msg.addGroup(noMiscFees_0_1);
  }
  {
    FIX50SP2::ExecutionReport::NoMiscFees noMiscFees_0_2;
    // MiscFeesGrp.NoMiscFees
    multiset<string> MiscFeesGrp_NoMiscFees_29;
    FIX::MiscFeeAmt MiscFeeAmt_29;
    MiscFeeAmt_29.setString("2844079");
set_field(noMiscFees_0_2, MiscFeeAmt_29, MiscFeesGrp_NoMiscFees_29);
    set_field(noMiscFees_0_2, FIX::MiscFeeBasis{1}, MiscFeesGrp_NoMiscFees_29);
    set_field(noMiscFees_0_2, FIX::MiscFeeCurr{"USD"}, MiscFeesGrp_NoMiscFees_29);
    set_field(noMiscFees_0_2, FIX::MiscFeeType{"STRING_8"}, MiscFeesGrp_NoMiscFees_29);
    all_values.push_back(MiscFeesGrp_NoMiscFees_29);
    all_compo_names.insert("...NoMiscFees");

    msg.addGroup(noMiscFees_0_2);
  }
  // OrderQtyData
  multiset<string> OrderQtyData_8;
  FIX::CashOrderQty CashOrderQty_8;
  CashOrderQty_8.setString("21417470");
set_field(msg, CashOrderQty_8, OrderQtyData_8);
  FIX::OrderPercent OrderPercent_8;
  OrderPercent_8.setString("0.090000");
set_field(msg, OrderPercent_8, OrderQtyData_8);
  FIX::OrderQty OrderQty_17;
  OrderQty_17.setString("8097046");
set_field(msg, OrderQty_17, OrderQtyData_8);
  set_field(msg, FIX::RoundingDirection{'0'}, OrderQtyData_8);
  FIX::RoundingModulus RoundingModulus_8;
  RoundingModulus_8.setString("3689646");
set_field(msg, RoundingModulus_8, OrderQtyData_8);
  all_values.push_back(OrderQtyData_8);
  all_compo_names.insert(".");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::ExecutionReport::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_46;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_1099327258"}, Parties_NoPartyIDs_46);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'6'}, Parties_NoPartyIDs_46);
    set_field(noPartyIDs_0_0, FIX::PartyRole{32}, Parties_NoPartyIDs_46);
    all_values.push_back(Parties_NoPartyIDs_46);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::ExecutionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_100;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_207161948"}, PtysSubGrp_NoPartySubIDs_100);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{24}, PtysSubGrp_NoPartySubIDs_100);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_100);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_101;
      set_field(noPartySubIDs_0_1_1, FIX::PartySubID{"STRING_342194891"}, PtysSubGrp_NoPartySubIDs_101);
      set_field(noPartySubIDs_0_1_1, FIX::PartySubIDType{4}, PtysSubGrp_NoPartySubIDs_101);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_101);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::ExecutionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_102;
      set_field(noPartySubIDs_0_1_2, FIX::PartySubID{"STRING_1941761298"}, PtysSubGrp_NoPartySubIDs_102);
      set_field(noPartySubIDs_0_1_2, FIX::PartySubIDType{11}, PtysSubGrp_NoPartySubIDs_102);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_102);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::ExecutionReport::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_47;
    set_field(noPartyIDs_0_1, FIX::PartyID{"STRING_1489620857"}, Parties_NoPartyIDs_47);
    set_field(noPartyIDs_0_1, FIX::PartyIDSource{'6'}, Parties_NoPartyIDs_47);
    set_field(noPartyIDs_0_1, FIX::PartyRole{33}, Parties_NoPartyIDs_47);
    all_values.push_back(Parties_NoPartyIDs_47);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::ExecutionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_103;
      set_field(noPartySubIDs_1_1_0, FIX::PartySubID{"STRING_1706962331"}, PtysSubGrp_NoPartySubIDs_103);
      set_field(noPartySubIDs_1_1_0, FIX::PartySubIDType{1}, PtysSubGrp_NoPartySubIDs_103);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_103);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_104;
      set_field(noPartySubIDs_1_1_1, FIX::PartySubID{"STRING_1527780471"}, PtysSubGrp_NoPartySubIDs_104);
      set_field(noPartySubIDs_1_1_1, FIX::PartySubIDType{1}, PtysSubGrp_NoPartySubIDs_104);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_104);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::ExecutionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_105;
      set_field(noPartySubIDs_1_1_2, FIX::PartySubID{"STRING_816289350"}, PtysSubGrp_NoPartySubIDs_105);
      set_field(noPartySubIDs_1_1_2, FIX::PartySubIDType{21}, PtysSubGrp_NoPartySubIDs_105);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_105);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_2);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::ExecutionReport::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_48;
    set_field(noPartyIDs_0_2, FIX::PartyID{"STRING_1334791863"}, Parties_NoPartyIDs_48);
    set_field(noPartyIDs_0_2, FIX::PartyIDSource{'D'}, Parties_NoPartyIDs_48);
    set_field(noPartyIDs_0_2, FIX::PartyRole{68}, Parties_NoPartyIDs_48);
    all_values.push_back(Parties_NoPartyIDs_48);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::ExecutionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_106;
      set_field(noPartySubIDs_2_1_0, FIX::PartySubID{"STRING_1852444687"}, PtysSubGrp_NoPartySubIDs_106);
      set_field(noPartySubIDs_2_1_0, FIX::PartySubIDType{7}, PtysSubGrp_NoPartySubIDs_106);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_106);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_107;
      set_field(noPartySubIDs_2_1_1, FIX::PartySubID{"STRING_1657785299"}, PtysSubGrp_NoPartySubIDs_107);
      set_field(noPartySubIDs_2_1_1, FIX::PartySubIDType{19}, PtysSubGrp_NoPartySubIDs_107);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_107);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_1);
    }
    {
      FIX50SP2::ExecutionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_108;
      set_field(noPartySubIDs_2_1_2, FIX::PartySubID{"STRING_1360383843"}, PtysSubGrp_NoPartySubIDs_108);
      set_field(noPartySubIDs_2_1_2, FIX::PartySubIDType{1}, PtysSubGrp_NoPartySubIDs_108);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_108);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_2);
    }
    msg.addGroup(noPartyIDs_0_2);
  }
  // PegInstructions
  multiset<string> PegInstructions_1;
  set_field(msg, FIX::PegLimitType{2}, PegInstructions_1);
  set_field(msg, FIX::PegMoveType{0}, PegInstructions_1);
  set_field(msg, FIX::PegOffsetType{2}, PegInstructions_1);
  FIX::PegOffsetValue PegOffsetValue_1;
  PegOffsetValue_1.setString("8965509");
set_field(msg, PegOffsetValue_1, PegInstructions_1);
  set_field(msg, FIX::PegPriceType{4}, PegInstructions_1);
  set_field(msg, FIX::PegRoundDirection{2}, PegInstructions_1);
  set_field(msg, FIX::PegScope{3}, PegInstructions_1);
  set_field(msg, FIX::PegSecurityDesc{"STRING_1162414990"}, PegInstructions_1);
  set_field(msg, FIX::PegSecurityID{"STRING_16341656"}, PegInstructions_1);
  set_field(msg, FIX::PegSecurityIDSource{"STRING_762145128"}, PegInstructions_1);
  set_field(msg, FIX::PegSymbol{"STRING_1118979838"}, PegInstructions_1);
  all_values.push_back(PegInstructions_1);
  all_compo_names.insert(".");

  // PreAllocGrp
  // Group PreAllocGrp.NoAllocs
  {
    FIX50SP2::ExecutionReport::NoAllocs noAllocs_0_0;
    // PreAllocGrp.NoAllocs
    multiset<string> PreAllocGrp_NoAllocs_9;
    set_field(noAllocs_0_0, FIX::AllocAccount{"STRING_1753180831"}, PreAllocGrp_NoAllocs_9);
    set_field(noAllocs_0_0, FIX::AllocAcctIDSource{137543481}, PreAllocGrp_NoAllocs_9);
    FIX::AllocQty AllocQty_23;
    AllocQty_23.setString("5775314");
set_field(noAllocs_0_0, AllocQty_23, PreAllocGrp_NoAllocs_9);
    set_field(noAllocs_0_0, FIX::AllocSettlCurrency{"USD"}, PreAllocGrp_NoAllocs_9);
    set_field(noAllocs_0_0, FIX::IndividualAllocID{"STRING_2105311925"}, PreAllocGrp_NoAllocs_9);
    all_values.push_back(PreAllocGrp_NoAllocs_9);
    all_compo_names.insert("...NoAllocs");

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::ExecutionReport::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_61;
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyID{"STRING_1602423577"}, NestedParties_NoNestedPartyIDs_61);
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyIDSource{'8'}, NestedParties_NoNestedPartyIDs_61);
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyRole{1550351690}, NestedParties_NoNestedPartyIDs_61);
      all_values.push_back(NestedParties_NoNestedPartyIDs_61);
      all_compo_names.insert("...NoAllocs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::ExecutionReport::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_127;
        set_field(noNestedPartySubIDs_0_0_2_0, FIX::NestedPartySubID{"STRING_1939909244"}, NstdPtysSubGrp_NoNestedPartySubIDs_127);
        set_field(noNestedPartySubIDs_0_0_2_0, FIX::NestedPartySubIDType{205413332}, NstdPtysSubGrp_NoNestedPartySubIDs_127);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_127);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_62;
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyID{"STRING_981010427"}, NestedParties_NoNestedPartyIDs_62);
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyIDSource{'8'}, NestedParties_NoNestedPartyIDs_62);
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyRole{1863198631}, NestedParties_NoNestedPartyIDs_62);
      all_values.push_back(NestedParties_NoNestedPartyIDs_62);
      all_compo_names.insert("...NoAllocs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::ExecutionReport::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_128;
        set_field(noNestedPartySubIDs_0_1_2_0, FIX::NestedPartySubID{"STRING_79157579"}, NstdPtysSubGrp_NoNestedPartySubIDs_128);
        set_field(noNestedPartySubIDs_0_1_2_0, FIX::NestedPartySubIDType{1742464962}, NstdPtysSubGrp_NoNestedPartySubIDs_128);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_128);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_129;
        set_field(noNestedPartySubIDs_0_1_2_1, FIX::NestedPartySubID{"STRING_1042212815"}, NstdPtysSubGrp_NoNestedPartySubIDs_129);
        set_field(noNestedPartySubIDs_0_1_2_1, FIX::NestedPartySubIDType{391385033}, NstdPtysSubGrp_NoNestedPartySubIDs_129);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_129);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::ExecutionReport::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_130;
        set_field(noNestedPartySubIDs_0_1_2_2, FIX::NestedPartySubID{"STRING_2109961636"}, NstdPtysSubGrp_NoNestedPartySubIDs_130);
        set_field(noNestedPartySubIDs_0_1_2_2, FIX::NestedPartySubIDType{1938763739}, NstdPtysSubGrp_NoNestedPartySubIDs_130);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_130);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_2);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_1);
    }
    {
      FIX50SP2::ExecutionReport::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_63;
      set_field(noNestedPartyIDs_0_1_2, FIX::NestedPartyID{"STRING_1211605132"}, NestedParties_NoNestedPartyIDs_63);
      set_field(noNestedPartyIDs_0_1_2, FIX::NestedPartyIDSource{'5'}, NestedParties_NoNestedPartyIDs_63);
      set_field(noNestedPartyIDs_0_1_2, FIX::NestedPartyRole{759147569}, NestedParties_NoNestedPartyIDs_63);
      all_values.push_back(NestedParties_NoNestedPartyIDs_63);
      all_compo_names.insert("...NoAllocs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::ExecutionReport::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_131;
        set_field(noNestedPartySubIDs_0_2_2_0, FIX::NestedPartySubID{"STRING_553478268"}, NstdPtysSubGrp_NoNestedPartySubIDs_131);
        set_field(noNestedPartySubIDs_0_2_2_0, FIX::NestedPartySubIDType{1521292698}, NstdPtysSubGrp_NoNestedPartySubIDs_131);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_131);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_2.addGroup(noNestedPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_132;
        set_field(noNestedPartySubIDs_0_2_2_1, FIX::NestedPartySubID{"STRING_1345516313"}, NstdPtysSubGrp_NoNestedPartySubIDs_132);
        set_field(noNestedPartySubIDs_0_2_2_1, FIX::NestedPartySubIDType{2059440782}, NstdPtysSubGrp_NoNestedPartySubIDs_132);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_132);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_2.addGroup(noNestedPartySubIDs_0_2_2_1);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_2);
    }
    msg.addGroup(noAllocs_0_0);
  }
  {
    FIX50SP2::ExecutionReport::NoAllocs noAllocs_0_1;
    // PreAllocGrp.NoAllocs
    multiset<string> PreAllocGrp_NoAllocs_10;
    set_field(noAllocs_0_1, FIX::AllocAccount{"STRING_1126989881"}, PreAllocGrp_NoAllocs_10);
    set_field(noAllocs_0_1, FIX::AllocAcctIDSource{1483059794}, PreAllocGrp_NoAllocs_10);
    FIX::AllocQty AllocQty_24;
    AllocQty_24.setString("4894885");
set_field(noAllocs_0_1, AllocQty_24, PreAllocGrp_NoAllocs_10);
    set_field(noAllocs_0_1, FIX::AllocSettlCurrency{"USD"}, PreAllocGrp_NoAllocs_10);
    set_field(noAllocs_0_1, FIX::IndividualAllocID{"STRING_447316866"}, PreAllocGrp_NoAllocs_10);
    all_values.push_back(PreAllocGrp_NoAllocs_10);
    all_compo_names.insert("...NoAllocs");

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::ExecutionReport::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_64;
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyID{"STRING_1724133949"}, NestedParties_NoNestedPartyIDs_64);
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_64);
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyRole{2058077264}, NestedParties_NoNestedPartyIDs_64);
      all_values.push_back(NestedParties_NoNestedPartyIDs_64);
      all_compo_names.insert("...NoAllocs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::ExecutionReport::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_133;
        set_field(noNestedPartySubIDs_1_0_2_0, FIX::NestedPartySubID{"STRING_1100083305"}, NstdPtysSubGrp_NoNestedPartySubIDs_133);
        set_field(noNestedPartySubIDs_1_0_2_0, FIX::NestedPartySubIDType{116006949}, NstdPtysSubGrp_NoNestedPartySubIDs_133);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_133);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_0);
      }
      noAllocs_0_1.addGroup(noNestedPartyIDs_1_1_0);
    }
    msg.addGroup(noAllocs_0_1);
  }
  {
    FIX50SP2::ExecutionReport::NoAllocs noAllocs_0_2;
    // PreAllocGrp.NoAllocs
    multiset<string> PreAllocGrp_NoAllocs_11;
    set_field(noAllocs_0_2, FIX::AllocAccount{"STRING_1833710117"}, PreAllocGrp_NoAllocs_11);
    set_field(noAllocs_0_2, FIX::AllocAcctIDSource{1966340689}, PreAllocGrp_NoAllocs_11);
    FIX::AllocQty AllocQty_25;
    AllocQty_25.setString("19792055");
set_field(noAllocs_0_2, AllocQty_25, PreAllocGrp_NoAllocs_11);
    set_field(noAllocs_0_2, FIX::AllocSettlCurrency{"USD"}, PreAllocGrp_NoAllocs_11);
    set_field(noAllocs_0_2, FIX::IndividualAllocID{"STRING_1574186894"}, PreAllocGrp_NoAllocs_11);
    all_values.push_back(PreAllocGrp_NoAllocs_11);
    all_compo_names.insert("...NoAllocs");

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::ExecutionReport::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_2_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_65;
      set_field(noNestedPartyIDs_2_1_0, FIX::NestedPartyID{"STRING_289399654"}, NestedParties_NoNestedPartyIDs_65);
      set_field(noNestedPartyIDs_2_1_0, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_65);
      set_field(noNestedPartyIDs_2_1_0, FIX::NestedPartyRole{2015395446}, NestedParties_NoNestedPartyIDs_65);
      all_values.push_back(NestedParties_NoNestedPartyIDs_65);
      all_compo_names.insert("...NoAllocs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::ExecutionReport::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_134;
        set_field(noNestedPartySubIDs_2_0_2_0, FIX::NestedPartySubID{"STRING_2073801494"}, NstdPtysSubGrp_NoNestedPartySubIDs_134);
        set_field(noNestedPartySubIDs_2_0_2_0, FIX::NestedPartySubIDType{627059367}, NstdPtysSubGrp_NoNestedPartySubIDs_134);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_134);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_0.addGroup(noNestedPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_135;
        set_field(noNestedPartySubIDs_2_0_2_1, FIX::NestedPartySubID{"STRING_1727541261"}, NstdPtysSubGrp_NoNestedPartySubIDs_135);
        set_field(noNestedPartySubIDs_2_0_2_1, FIX::NestedPartySubIDType{479796114}, NstdPtysSubGrp_NoNestedPartySubIDs_135);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_135);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_0.addGroup(noNestedPartySubIDs_2_0_2_1);
      }
      {
        FIX50SP2::ExecutionReport::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_136;
        set_field(noNestedPartySubIDs_2_0_2_2, FIX::NestedPartySubID{"STRING_868417"}, NstdPtysSubGrp_NoNestedPartySubIDs_136);
        set_field(noNestedPartySubIDs_2_0_2_2, FIX::NestedPartySubIDType{925573926}, NstdPtysSubGrp_NoNestedPartySubIDs_136);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_136);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_0.addGroup(noNestedPartySubIDs_2_0_2_2);
      }
      noAllocs_0_2.addGroup(noNestedPartyIDs_2_1_0);
    }
    msg.addGroup(noAllocs_0_2);
  }
  // RateSource
  // Group RateSource.NoRateSources
  {
    FIX50SP2::ExecutionReport::NoRateSources noRateSources_0_0;
    // RateSource.NoRateSources
    multiset<string> RateSource_NoRateSources_4;
    set_field(noRateSources_0_0, FIX::RateSource{2}, RateSource_NoRateSources_4);
    set_field(noRateSources_0_0, FIX::RateSourceType{0}, RateSource_NoRateSources_4);
    set_field(noRateSources_0_0, FIX::ReferencePage{"STRING_881241837"}, RateSource_NoRateSources_4);
    all_values.push_back(RateSource_NoRateSources_4);
    all_compo_names.insert("...NoRateSources");

    msg.addGroup(noRateSources_0_0);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_10;
  set_field(msg, FIX::BenchmarkCurveCurrency{"EUR"}, SpreadOrBenchmarkCurveData_10);
  set_field(msg, FIX::BenchmarkCurveName{"STRING_FutureSWAP"}, SpreadOrBenchmarkCurveData_10);
  set_field(msg, FIX::BenchmarkCurvePoint{"STRING_1927749619"}, SpreadOrBenchmarkCurveData_10);
  FIX::BenchmarkPrice BenchmarkPrice_10;
  BenchmarkPrice_10.setString("21069943");
set_field(msg, BenchmarkPrice_10, SpreadOrBenchmarkCurveData_10);
  set_field(msg, FIX::BenchmarkPriceType{488732763}, SpreadOrBenchmarkCurveData_10);
  set_field(msg, FIX::BenchmarkSecurityID{"STRING_1838343236"}, SpreadOrBenchmarkCurveData_10);
  set_field(msg, FIX::BenchmarkSecurityIDSource{"STRING_812210436"}, SpreadOrBenchmarkCurveData_10);
  FIX::Spread Spread_10;
  Spread_10.setString("15888160");
set_field(msg, Spread_10, SpreadOrBenchmarkCurveData_10);
  all_values.push_back(SpreadOrBenchmarkCurveData_10);
  all_compo_names.insert(".");

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::ExecutionReport::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_24;
    set_field(noStipulations_0_0, FIX::StipulationType{"STRING_PPM"}, Stipulations_NoStipulations_24);
    set_field(noStipulations_0_0, FIX::StipulationValue{"STRING_1407673109"}, Stipulations_NoStipulations_24);
    all_values.push_back(Stipulations_NoStipulations_24);
    all_compo_names.insert("...NoStipulations");

    msg.addGroup(noStipulations_0_0);
  }
  {
    FIX50SP2::ExecutionReport::NoStipulations noStipulations_0_1;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_25;
    set_field(noStipulations_0_1, FIX::StipulationType{"STRING_SECTOR"}, Stipulations_NoStipulations_25);
    set_field(noStipulations_0_1, FIX::StipulationValue{"STRING_1680339445"}, Stipulations_NoStipulations_25);
    all_values.push_back(Stipulations_NoStipulations_25);
    all_compo_names.insert("...NoStipulations");

    msg.addGroup(noStipulations_0_1);
  }
  {
    FIX50SP2::ExecutionReport::NoStipulations noStipulations_0_2;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_26;
    set_field(noStipulations_0_2, FIX::StipulationType{"STRING_AVFICO"}, Stipulations_NoStipulations_26);
    set_field(noStipulations_0_2, FIX::StipulationValue{"STRING_1212775364"}, Stipulations_NoStipulations_26);
    all_values.push_back(Stipulations_NoStipulations_26);
    all_compo_names.insert("...NoStipulations");

    msg.addGroup(noStipulations_0_2);
  }
  // StrategyParametersGrp
  // Group StrategyParametersGrp.NoStrategyParameters
  {
    FIX50SP2::ExecutionReport::NoStrategyParameters noStrategyParameters_0_0;
    // StrategyParametersGrp.NoStrategyParameters
    multiset<string> StrategyParametersGrp_NoStrategyParameters_3;
    set_field(noStrategyParameters_0_0, FIX::StrategyParameterName{"STRING_1595087384"}, StrategyParametersGrp_NoStrategyParameters_3);
    set_field(noStrategyParameters_0_0, FIX::StrategyParameterType{4}, StrategyParametersGrp_NoStrategyParameters_3);
    set_field(noStrategyParameters_0_0, FIX::StrategyParameterValue{"STRING_1624882949"}, StrategyParametersGrp_NoStrategyParameters_3);
    all_values.push_back(StrategyParametersGrp_NoStrategyParameters_3);
    all_compo_names.insert("...NoStrategyParameters");

    msg.addGroup(noStrategyParameters_0_0);
  }
  {
    FIX50SP2::ExecutionReport::NoStrategyParameters noStrategyParameters_0_1;
    // StrategyParametersGrp.NoStrategyParameters
    multiset<string> StrategyParametersGrp_NoStrategyParameters_4;
    set_field(noStrategyParameters_0_1, FIX::StrategyParameterName{"STRING_948608522"}, StrategyParametersGrp_NoStrategyParameters_4);
    set_field(noStrategyParameters_0_1, FIX::StrategyParameterType{6}, StrategyParametersGrp_NoStrategyParameters_4);
    set_field(noStrategyParameters_0_1, FIX::StrategyParameterValue{"STRING_104458669"}, StrategyParametersGrp_NoStrategyParameters_4);
    all_values.push_back(StrategyParametersGrp_NoStrategyParameters_4);
    all_compo_names.insert("...NoStrategyParameters");

    msg.addGroup(noStrategyParameters_0_1);
  }
  // TrdRegTimestamps
  // Group TrdRegTimestamps.NoTrdRegTimestamps
  {
    FIX50SP2::ExecutionReport::NoTrdRegTimestamps noTrdRegTimestamps_0_0;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_14;
    set_field(noTrdRegTimestamps_0_0, FIX::DeskOrderHandlingInst{"MULTIPLESTRINGVALUE_ADD"}, TrdRegTimestamps_NoTrdRegTimestamps_14);
    set_field(noTrdRegTimestamps_0_0, FIX::DeskType{"STRING_PR"}, TrdRegTimestamps_NoTrdRegTimestamps_14);
    set_field(noTrdRegTimestamps_0_0, FIX::DeskTypeSource{1}, TrdRegTimestamps_NoTrdRegTimestamps_14);
    set_field(noTrdRegTimestamps_0_0, FIX::TrdRegTimestamp{FIX::UTCTIMESTAMP(9, 35, 37, 2, 1, 2016)}, TrdRegTimestamps_NoTrdRegTimestamps_14);
    set_field(noTrdRegTimestamps_0_0, FIX::TrdRegTimestampOrigin{"STRING_285991754"}, TrdRegTimestamps_NoTrdRegTimestamps_14);
    set_field(noTrdRegTimestamps_0_0, FIX::TrdRegTimestampType{6}, TrdRegTimestamps_NoTrdRegTimestamps_14);
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_14);
    all_compo_names.insert("...NoTrdRegTimestamps");

    msg.addGroup(noTrdRegTimestamps_0_0);
  }
  {
    FIX50SP2::ExecutionReport::NoTrdRegTimestamps noTrdRegTimestamps_0_1;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_15;
    set_field(noTrdRegTimestamps_0_1, FIX::DeskOrderHandlingInst{"MULTIPLESTRINGVALUE_LOO"}, TrdRegTimestamps_NoTrdRegTimestamps_15);
    set_field(noTrdRegTimestamps_0_1, FIX::DeskType{"STRING_PT"}, TrdRegTimestamps_NoTrdRegTimestamps_15);
    set_field(noTrdRegTimestamps_0_1, FIX::DeskTypeSource{1}, TrdRegTimestamps_NoTrdRegTimestamps_15);
    set_field(noTrdRegTimestamps_0_1, FIX::TrdRegTimestamp{FIX::UTCTIMESTAMP(7, 21, 46, 12, 3, 2002)}, TrdRegTimestamps_NoTrdRegTimestamps_15);
    set_field(noTrdRegTimestamps_0_1, FIX::TrdRegTimestampOrigin{"STRING_635081712"}, TrdRegTimestamps_NoTrdRegTimestamps_15);
    set_field(noTrdRegTimestamps_0_1, FIX::TrdRegTimestampType{4}, TrdRegTimestamps_NoTrdRegTimestamps_15);
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_15);
    all_compo_names.insert("...NoTrdRegTimestamps");

    msg.addGroup(noTrdRegTimestamps_0_1);
  }
  // TriggeringInstruction
  multiset<string> TriggeringInstruction_1;
  set_field(msg, FIX::TriggerAction{'3'}, TriggeringInstruction_1);
  FIX::TriggerNewPrice TriggerNewPrice_1;
  TriggerNewPrice_1.setString("12370383");
set_field(msg, TriggerNewPrice_1, TriggeringInstruction_1);
  FIX::TriggerNewQty TriggerNewQty_1;
  TriggerNewQty_1.setString("19881512");
set_field(msg, TriggerNewQty_1, TriggeringInstruction_1);
  set_field(msg, FIX::TriggerOrderType{'1'}, TriggeringInstruction_1);
  FIX::TriggerPrice TriggerPrice_1;
  TriggerPrice_1.setString("17653127");
set_field(msg, TriggerPrice_1, TriggeringInstruction_1);
  set_field(msg, FIX::TriggerPriceDirection{'U'}, TriggeringInstruction_1);
  set_field(msg, FIX::TriggerPriceType{'1'}, TriggeringInstruction_1);
  set_field(msg, FIX::TriggerPriceTypeScope{'1'}, TriggeringInstruction_1);
  set_field(msg, FIX::TriggerSecurityDesc{"STRING_50453378"}, TriggeringInstruction_1);
  set_field(msg, FIX::TriggerSecurityID{"STRING_42234237"}, TriggeringInstruction_1);
  set_field(msg, FIX::TriggerSecurityIDSource{"STRING_2025723477"}, TriggeringInstruction_1);
  set_field(msg, FIX::TriggerSymbol{"STRING_1283638763"}, TriggeringInstruction_1);
  set_field(msg, FIX::TriggerTradingSessionID{"STRING_1757624372"}, TriggeringInstruction_1);
  set_field(msg, FIX::TriggerTradingSessionSubID{"STRING_11821827"}, TriggeringInstruction_1);
  set_field(msg, FIX::TriggerType{'3'}, TriggeringInstruction_1);
  all_values.push_back(TriggeringInstruction_1);
  all_compo_names.insert(".");

  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::ExecutionReport::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_35;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_1473962527"}, UnderlyingInstrument_35);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{2075356300}, UnderlyingInstrument_35);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_1618668982"}, UnderlyingInstrument_35);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{1277352343}, UnderlyingInstrument_35);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_35;
    UnderlyingAdjustedQuantity_35.setString("20522076");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_35, UnderlyingInstrument_35);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_35;
    UnderlyingAllocationPercent_35.setString("34.490000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_35, UnderlyingInstrument_35);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_35;
    UnderlyingAttachmentPoint_35.setString("45.800000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_35, UnderlyingInstrument_35);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_1835925521"}, UnderlyingInstrument_35);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_1414598470"}, UnderlyingInstrument_35);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_1174469926"}, UnderlyingInstrument_35);
    FIX::UnderlyingCapValue UnderlyingCapValue_35;
    UnderlyingCapValue_35.setString("12582318");
set_field(noUnderlyings_0_0, UnderlyingCapValue_35, UnderlyingInstrument_35);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_35;
    UnderlyingCashAmount_35.setString("208956");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_35, UnderlyingInstrument_35);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_35);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_35;
    UnderlyingContractMultiplier_35.setString("18933135");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_35, UnderlyingInstrument_35);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{384163962}, UnderlyingInstrument_35);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_243272518"}, UnderlyingInstrument_35);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_982868245"}, UnderlyingInstrument_35);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_35;
    UnderlyingCouponRate_35.setString("15.850000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_35, UnderlyingInstrument_35);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_450084204"}, UnderlyingInstrument_35);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"CAN"}, UnderlyingInstrument_35);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_35;
    UnderlyingCurrentValue_35.setString("11855620");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_35, UnderlyingInstrument_35);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_35;
    UnderlyingDetachmentPoint_35.setString("70.230000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_35, UnderlyingInstrument_35);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_35;
    UnderlyingDirtyPrice_35.setString("2204112");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_35, UnderlyingInstrument_35);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_35;
    UnderlyingEndPrice_35.setString("12277962");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_35, UnderlyingInstrument_35);
    FIX::UnderlyingEndValue UnderlyingEndValue_35;
    UnderlyingEndValue_35.setString("11048368");
set_field(noUnderlyings_0_0, UnderlyingEndValue_35, UnderlyingInstrument_35);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{1504050019}, UnderlyingInstrument_35);
    FIX::UnderlyingFXRate UnderlyingFXRate_35;
    UnderlyingFXRate_35.setString("8379369");
set_field(noUnderlyings_0_0, UnderlyingFXRate_35, UnderlyingInstrument_35);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_35);
    FIX::UnderlyingFactor UnderlyingFactor_35;
    UnderlyingFactor_35.setString("11459309");
set_field(noUnderlyings_0_0, UnderlyingFactor_35, UnderlyingInstrument_35);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{398844644}, UnderlyingInstrument_35);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_443137559"}, UnderlyingInstrument_35);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1073803569"}, UnderlyingInstrument_35);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_2017513626"}, UnderlyingInstrument_35);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_1720489903"}, UnderlyingInstrument_35);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_978527563"}, UnderlyingInstrument_35);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_63703428"}, UnderlyingInstrument_35);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_95080835"}, UnderlyingInstrument_35);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_35;
    UnderlyingNotionalPercentageOutstanding_35.setString("94.360000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_35, UnderlyingInstrument_35);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_35);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_35;
    UnderlyingOriginalNotionalPercentageOutstanding_35.setString("7.610000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_35, UnderlyingInstrument_35);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1925201305"}, UnderlyingInstrument_35);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_35;
    UnderlyingPriceUnitOfMeasureQty_35.setString("14991975");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_35, UnderlyingInstrument_35);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{107136467}, UnderlyingInstrument_35);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{1671031239}, UnderlyingInstrument_35);
    FIX::UnderlyingPx UnderlyingPx_35;
    UnderlyingPx_35.setString("18833615");
set_field(noUnderlyings_0_0, UnderlyingPx_35, UnderlyingInstrument_35);
    FIX::UnderlyingQty UnderlyingQty_35;
    UnderlyingQty_35.setString("3504089");
set_field(noUnderlyings_0_0, UnderlyingQty_35, UnderlyingInstrument_35);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_506415837"}, UnderlyingInstrument_35);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_2108193086"}, UnderlyingInstrument_35);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_35;
    UnderlyingRepurchaseRate_35.setString("31.890000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_35, UnderlyingInstrument_35);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{1107113191}, UnderlyingInstrument_35);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_130667315"}, UnderlyingInstrument_35);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_1986055216"}, UnderlyingInstrument_35);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_186226567"}, UnderlyingInstrument_35);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_351078570"}, UnderlyingInstrument_35);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_1066367832"}, UnderlyingInstrument_35);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_1291063420"}, UnderlyingInstrument_35);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_1855128589"}, UnderlyingInstrument_35);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_1904304820"}, UnderlyingInstrument_35);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_260238452"}, UnderlyingInstrument_35);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{2}, UnderlyingInstrument_35);
    FIX::UnderlyingStartValue UnderlyingStartValue_35;
    UnderlyingStartValue_35.setString("1556658");
set_field(noUnderlyings_0_0, UnderlyingStartValue_35, UnderlyingInstrument_35);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_703376011"}, UnderlyingInstrument_35);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"CHF"}, UnderlyingInstrument_35);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_35;
    UnderlyingStrikePrice_35.setString("2763822");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_35, UnderlyingInstrument_35);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_758423342"}, UnderlyingInstrument_35);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_89399223"}, UnderlyingInstrument_35);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_371463101"}, UnderlyingInstrument_35);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_1425392778"}, UnderlyingInstrument_35);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_35;
    UnderlyingUnitOfMeasureQty_35.setString("15677011");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_35, UnderlyingInstrument_35);
    all_values.push_back(UnderlyingInstrument_35);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::ExecutionReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_69;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_1203110436"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_69);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_919415012"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_69);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_69);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_70;
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltID{"STRING_1748150329"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_70);
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_726658027"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_70);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_70);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::ExecutionReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_71;
      set_field(noUnderlyingSecurityAltID_0_1_2, FIX::UnderlyingSecurityAltID{"STRING_655292865"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_71);
      set_field(noUnderlyingSecurityAltID_0_1_2, FIX::UnderlyingSecurityAltIDSource{"STRING_2098559314"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_71);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_71);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::ExecutionReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_64;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_616002303"}, UnderlyingStipulations_NoUnderlyingStips_64);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_751568856"}, UnderlyingStipulations_NoUnderlyingStips_64);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_64);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_65;
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipType{"STRING_192703408"}, UnderlyingStipulations_NoUnderlyingStips_65);
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipValue{"STRING_746669618"}, UnderlyingStipulations_NoUnderlyingStips_65);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_65);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::ExecutionReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_75;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_378929975"}, UndlyInstrumentParties_NoUndlyInstrumentParties_75);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_75);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{1656508257}, UndlyInstrumentParties_NoUndlyInstrumentParties_75);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_75);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::ExecutionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_143;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_805393130"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_143);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{1413329429}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_143);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_143);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_76;
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_1930231847"}, UndlyInstrumentParties_NoUndlyInstrumentParties_76);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_76);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyRole{1568995246}, UndlyInstrumentParties_NoUndlyInstrumentParties_76);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_76);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::ExecutionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_144;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1438864768"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_144);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{1594691041}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_144);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_144);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_145;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_762506477"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_145);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubIDType{49804463}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_145);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_145);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::ExecutionReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_77;
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyID{"STRING_1684090264"}, UndlyInstrumentParties_NoUndlyInstrumentParties_77);
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_77);
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyRole{1475197241}, UndlyInstrumentParties_NoUndlyInstrumentParties_77);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_77);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::ExecutionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_146;
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_627499793"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_146);
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_0, FIX::UnderlyingInstrumentPartySubIDType{530824029}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_146);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_146);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  // YieldData
  multiset<string> YieldData_5;
  FIX::Yield Yield_5;
  Yield_5.setString("27.500000");
set_field(msg, Yield_5, YieldData_5);
  set_field(msg, FIX::YieldCalcDate{"LOCALMKTDATE_228166474"}, YieldData_5);
  set_field(msg, FIX::YieldRedemptionDate{"LOCALMKTDATE_1257482057"}, YieldData_5);
  FIX::YieldRedemptionPrice YieldRedemptionPrice_5;
  YieldRedemptionPrice_5.setString("5315319");
set_field(msg, YieldRedemptionPrice_5, YieldData_5);
  set_field(msg, FIX::YieldRedemptionPriceType{179242141}, YieldData_5);
  set_field(msg, FIX::YieldType{"STRING_WORST"}, YieldData_5);
  all_values.push_back(YieldData_5);
  all_compo_names.insert(".");

  // header
  multiset<string> header_32;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_1"}, header_32);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_930810997"}, header_32);
  set_header_field(msg.getHeader(), FIX::BodyLength{535775681}, header_32);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_1894203889"}, header_32);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_1520951421"}, header_32);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_914705656"}, header_32);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_844468430"}, header_32);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{1029976030}, header_32);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_UTF-8"}, header_32);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{1649861561}, header_32);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_295821812"}, header_32);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_219963602"}, header_32);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_1161346902"}, header_32);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(13, 2, 11, 2, 2, 2007)}, header_32);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{true}, header_32);
  set_header_field(msg.getHeader(), FIX::PossResend{false}, header_32);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_1952938804"}, header_32);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{1082580013}, header_32);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_361070108"}, header_32);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_1829177906"}, header_32);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_1310746488"}, header_32);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(2, 49, 39, 5, 7, 2000)}, header_32);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_1107480738"}, header_32);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_1794267399"}, header_32);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_1264622129"}, header_32);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_1951949169"}, header_32);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{676759782}, header_32);
  all_values.push_back(header_32);
  all_compo_names.insert(".header");


  xml_element elt;
  converter.fix2fixml(msg, elt);
  BOOST_LOG_TRIVIAL(debug) << "The resulting XML is";
  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

  BOOST_LOG_TRIVIAL(debug) << "Quickfix XML representation is";
  cout << "////////////////////////////////////////////" << endl;
  cout << msg.toXML() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;
  list<multiset<string>> elt_lists;
  elt.to_list(elt_lists);
  EXPECT_EQ(elt_lists.size(), all_values.size());

  if (elt_lists.size() != all_values.size())  {
    multiset<string> elt_compo_name;
    elt.all_components(elt_compo_name);
    BOOST_LOG_TRIVIAL(debug) << "XML Elements are:";
    cout << "	[";
    copy(elt_compo_name.begin(), elt_compo_name.end(), ostream_iterator<string>(cout, " "));    cout << "]" << endl;

    BOOST_LOG_TRIVIAL(debug) << "FIX Components are:"; 
    cout << "	[";
    copy(all_compo_names.begin(), all_compo_names.end(), ostream_iterator<string>(cout, " "));    cout << "]" << endl;

  }
  BOOST_LOG_TRIVIAL(debug) << "All FIX components";
  for (const auto& l : all_values) {
    cout << "	[";
    copy(l.begin(), l.end(), ostream_iterator<string>(cout, " "));
    cout << "]" << endl;
  }
  BOOST_LOG_TRIVIAL(debug) << "All XML components";
  for (const auto& l : elt_lists) {
    cout << "	[";
    copy(l.begin(), l.end(), ostream_iterator<string>(cout, " "));
    cout << "]" << endl;

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
      BOOST_LOG_TRIVIAL(debug) << "[TO CHECK] This XML component was not found in FIX message";
      cout << "	 ---> [";
      copy(xml_l.begin(), xml_l.end(), ostream_iterator<string>(cout, " "));      cout << "]" << endl << endl;
    } // end if ! found
  } // end for elt_lists
}
