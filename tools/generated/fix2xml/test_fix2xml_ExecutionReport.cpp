#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
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
  FIX50SP2::ExecutionReport msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> ExecutionReport_0;
  set_field(msg, FIX::Account{"STRING_976452706"}, ExecutionReport_0);
  set_field(msg, FIX::AccountType{3}, ExecutionReport_0);
  FIX::AccruedInterestAmt AccruedInterestAmt_9;
  AccruedInterestAmt_9.setString("17544312");
set_field(msg, AccruedInterestAmt_9, ExecutionReport_0);
  FIX::AccruedInterestRate AccruedInterestRate_4;
  AccruedInterestRate_4.setString("29.550000");
set_field(msg, AccruedInterestRate_4, ExecutionReport_0);
  set_field(msg, FIX::AcctIDSource{2}, ExecutionReport_0);
  set_field(msg, FIX::AggressorIndicator{false}, ExecutionReport_0);
  set_field(msg, FIX::AllocID{"STRING_1665374156"}, ExecutionReport_0);
  FIX::AvgPx AvgPx_5;
  AvgPx_5.setString("15174015");
set_field(msg, AvgPx_5, ExecutionReport_0);
  set_field(msg, FIX::BasisFeatureDate{"LOCALMKTDATE_1904679233"}, ExecutionReport_0);
  FIX::BasisFeaturePrice BasisFeaturePrice_0;
  BasisFeaturePrice_0.setString("3473228");
set_field(msg, BasisFeaturePrice_0, ExecutionReport_0);
  set_field(msg, FIX::BookingType{1}, ExecutionReport_0);
  set_field(msg, FIX::BookingUnit{'0'}, ExecutionReport_0);
  FIX::CalculatedCcyLastQty CalculatedCcyLastQty_0;
  CalculatedCcyLastQty_0.setString("18171701");
set_field(msg, CalculatedCcyLastQty_0, ExecutionReport_0);
  set_field(msg, FIX::CancellationRights{'O'}, ExecutionReport_0);
  set_field(msg, FIX::CashMargin{'3'}, ExecutionReport_0);
  set_field(msg, FIX::ClOrdID{"STRING_1954542874"}, ExecutionReport_0);
  set_field(msg, FIX::ClOrdLinkID{"STRING_1356650059"}, ExecutionReport_0);
  set_field(msg, FIX::ClearingFeeIndicator{"STRING_B"}, ExecutionReport_0);
  set_field(msg, FIX::ComplianceID{"STRING_598972262"}, ExecutionReport_0);
  FIX::Concession Concession_4;
  Concession_4.setString("12251039");
set_field(msg, Concession_4, ExecutionReport_0);
  set_field(msg, FIX::CopyMsgIndicator{false}, ExecutionReport_0);
  set_field(msg, FIX::CrossID{"STRING_999548148"}, ExecutionReport_0);
  set_field(msg, FIX::CrossType{3}, ExecutionReport_0);
  FIX::CumQty CumQty_1;
  CumQty_1.setString("17537861");
set_field(msg, CumQty_1, ExecutionReport_0);
  set_field(msg, FIX::Currency{"GBP"}, ExecutionReport_0);
  set_field(msg, FIX::CustDirectedOrder{false}, ExecutionReport_0);
  set_field(msg, FIX::CustOrderCapacity{3}, ExecutionReport_0);
  set_field(msg, FIX::CustOrderHandlingInst{"MULTIPLESTRINGVALUE_OVD"}, ExecutionReport_0);
  FIX::DayAvgPx DayAvgPx_0;
  DayAvgPx_0.setString("10165148");
set_field(msg, DayAvgPx_0, ExecutionReport_0);
  set_field(msg, FIX::DayBookingInst{'0'}, ExecutionReport_0);
  FIX::DayCumQty DayCumQty_0;
  DayCumQty_0.setString("11727833");
set_field(msg, DayCumQty_0, ExecutionReport_0);
  FIX::DayOrderQty DayOrderQty_0;
  DayOrderQty_0.setString("17684548");
set_field(msg, DayOrderQty_0, ExecutionReport_0);
  set_field(msg, FIX::Designation{"STRING_368790706"}, ExecutionReport_0);
  FIX::DiscretionPrice DiscretionPrice_0;
  DiscretionPrice_0.setString("8830526");
set_field(msg, DiscretionPrice_0, ExecutionReport_0);
  FIX::DividendYield DividendYield_0;
  DividendYield_0.setString("24.910000");
set_field(msg, DividendYield_0, ExecutionReport_0);
  set_field(msg, FIX::EffectiveTime{FIX::UTCTIMESTAMP(9, 13, 24, 6, 9, 2015)}, ExecutionReport_0);
  set_field(msg, FIX::EncodedText{"DATA_417952501"}, ExecutionReport_0);
  set_field(msg, FIX::EncodedTextLen{601229215}, ExecutionReport_0);
  FIX::EndAccruedInterestAmt EndAccruedInterestAmt_9;
  EndAccruedInterestAmt_9.setString("20246480");
set_field(msg, EndAccruedInterestAmt_9, ExecutionReport_0);
  FIX::EndCash EndCash_9;
  EndCash_9.setString("2250117");
set_field(msg, EndCash_9, ExecutionReport_0);
  set_field(msg, FIX::ExDate{"LOCALMKTDATE_1957879275"}, ExecutionReport_0);
  set_field(msg, FIX::ExecID{"STRING_1443773112"}, ExecutionReport_0);
  set_field(msg, FIX::ExecInst{"MULTIPLECHARVALUE_j"}, ExecutionReport_0);
  FIX::ExecPriceAdjustment ExecPriceAdjustment_0;
  ExecPriceAdjustment_0.setString("10354996");
set_field(msg, ExecPriceAdjustment_0, ExecutionReport_0);
  set_field(msg, FIX::ExecPriceType{'B'}, ExecutionReport_0);
  set_field(msg, FIX::ExecRefID{"STRING_1823532137"}, ExecutionReport_0);
  set_field(msg, FIX::ExecRestatementReason{10}, ExecutionReport_0);
  set_field(msg, FIX::ExecType{'E'}, ExecutionReport_0);
  set_field(msg, FIX::ExecValuationPoint{FIX::UTCTIMESTAMP(9, 11, 1, 17, 5, 2017)}, ExecutionReport_0);
  set_field(msg, FIX::ExpireDate{"LOCALMKTDATE_1344581684"}, ExecutionReport_0);
  set_field(msg, FIX::ExpireTime{FIX::UTCTIMESTAMP(10, 57, 11, 1, 8, 2000)}, ExecutionReport_0);
  set_field(msg, FIX::GTBookingInst{2}, ExecutionReport_0);
  FIX::GrossTradeAmt GrossTradeAmt_4;
  GrossTradeAmt_4.setString("12293598");
set_field(msg, GrossTradeAmt_4, ExecutionReport_0);
  set_field(msg, FIX::HandlInst{'1'}, ExecutionReport_0);
  set_field(msg, FIX::HostCrossID{"STRING_627606291"}, ExecutionReport_0);
  FIX::InterestAtMaturity InterestAtMaturity_4;
  InterestAtMaturity_4.setString("16473123");
set_field(msg, InterestAtMaturity_4, ExecutionReport_0);
  set_field(msg, FIX::LastCapacity{'1'}, ExecutionReport_0);
  FIX::LastForwardPoints LastForwardPoints_0;
  LastForwardPoints_0.setString("5047706");
set_field(msg, LastForwardPoints_0, ExecutionReport_0);
  FIX::LastForwardPoints2 LastForwardPoints2_0;
  LastForwardPoints2_0.setString("18723241");
set_field(msg, LastForwardPoints2_0, ExecutionReport_0);
  set_field(msg, FIX::LastFragment{false}, ExecutionReport_0);
  set_field(msg, FIX::LastLiquidityInd{3}, ExecutionReport_0);
  set_field(msg, FIX::LastMkt{"EXCHANGE_548824451"}, ExecutionReport_0);
  FIX::LastParPx LastParPx_8;
  LastParPx_8.setString("14959202");
set_field(msg, LastParPx_8, ExecutionReport_0);
  FIX::LastPx LastPx_9;
  LastPx_9.setString("8691944");
set_field(msg, LastPx_9, ExecutionReport_0);
  FIX::LastQty LastQty_9;
  LastQty_9.setString("2248729");
set_field(msg, LastQty_9, ExecutionReport_0);
  set_field(msg, FIX::LastRptRequested{true}, ExecutionReport_0);
  FIX::LastSpotRate LastSpotRate_0;
  LastSpotRate_0.setString("15436313");
set_field(msg, LastSpotRate_0, ExecutionReport_0);
  FIX::LastSwapPoints LastSwapPoints_0;
  LastSwapPoints_0.setString("20242551");
set_field(msg, LastSwapPoints_0, ExecutionReport_0);
  FIX::LeavesQty LeavesQty_0;
  LeavesQty_0.setString("19414858");
set_field(msg, LeavesQty_0, ExecutionReport_0);
  set_field(msg, FIX::ListID{"STRING_334228757"}, ExecutionReport_0);
  set_field(msg, FIX::LotType{'2'}, ExecutionReport_0);
  set_field(msg, FIX::ManualOrderIndicator{false}, ExecutionReport_0);
  set_field(msg, FIX::MassStatusReqID{"STRING_141341054"}, ExecutionReport_0);
  FIX::MatchIncrement MatchIncrement_1;
  MatchIncrement_1.setString("19802069");
set_field(msg, MatchIncrement_1, ExecutionReport_0);
  set_field(msg, FIX::MatchType{"STRING_4"}, ExecutionReport_0);
  FIX::MaxFloor MaxFloor_1;
  MaxFloor_1.setString("17169081");
set_field(msg, MaxFloor_1, ExecutionReport_0);
  set_field(msg, FIX::MaxPriceLevels{560411503}, ExecutionReport_0);
  FIX::MaxShow MaxShow_1;
  MaxShow_1.setString("13905329");
set_field(msg, MaxShow_1, ExecutionReport_0);
  FIX::MinQty MinQty_1;
  MinQty_1.setString("19481941");
set_field(msg, MinQty_1, ExecutionReport_0);
  set_field(msg, FIX::MoneyLaunderingStatus{'1'}, ExecutionReport_0);
  set_field(msg, FIX::MultiLegReportingType{'1'}, ExecutionReport_0);
  FIX::NetMoney NetMoney_4;
  NetMoney_4.setString("2051168");
set_field(msg, NetMoney_4, ExecutionReport_0);
  set_field(msg, FIX::NumDaysInterest{1389215678}, ExecutionReport_0);
  set_field(msg, FIX::OrdRejReason{12}, ExecutionReport_0);
  set_field(msg, FIX::OrdStatus{'3'}, ExecutionReport_0);
  set_field(msg, FIX::OrdStatusReqID{"STRING_2016821970"}, ExecutionReport_0);
  set_field(msg, FIX::OrdType{'2'}, ExecutionReport_0);
  set_field(msg, FIX::OrderCapacity{'W'}, ExecutionReport_0);
  set_field(msg, FIX::OrderCategory{'9'}, ExecutionReport_0);
  set_field(msg, FIX::OrderHandlingInstSource{1}, ExecutionReport_0);
  set_field(msg, FIX::OrderID{"STRING_1364358266"}, ExecutionReport_0);
  FIX::OrderQty2 OrderQty2_0;
  OrderQty2_0.setString("1751691");
set_field(msg, OrderQty2_0, ExecutionReport_0);
  set_field(msg, FIX::OrderRestrictions{"MULTIPLECHARVALUE_1"}, ExecutionReport_0);
  set_field(msg, FIX::OrigClOrdID{"STRING_712794879"}, ExecutionReport_0);
  set_field(msg, FIX::OrigCrossID{"STRING_1044363647"}, ExecutionReport_0);
  FIX::ParticipationRate ParticipationRate_1;
  ParticipationRate_1.setString("96.310000");
set_field(msg, ParticipationRate_1, ExecutionReport_0);
  FIX::PeggedPrice PeggedPrice_0;
  PeggedPrice_0.setString("5313294");
set_field(msg, PeggedPrice_0, ExecutionReport_0);
  FIX::PeggedRefPrice PeggedRefPrice_0;
  PeggedRefPrice_0.setString("4405113");
set_field(msg, PeggedRefPrice_0, ExecutionReport_0);
  set_field(msg, FIX::PositionEffect{'F'}, ExecutionReport_0);
  set_field(msg, FIX::PreTradeAnonymity{false}, ExecutionReport_0);
  set_field(msg, FIX::PreallocMethod{'1'}, ExecutionReport_0);
  FIX::Price Price_9;
  Price_9.setString("3024670");
set_field(msg, Price_9, ExecutionReport_0);
  FIX::PriceDelta PriceDelta_0;
  PriceDelta_0.setString("2911322");
set_field(msg, PriceDelta_0, ExecutionReport_0);
  FIX::PriceImprovement PriceImprovement_0;
  PriceImprovement_0.setString("9160811");
set_field(msg, PriceImprovement_0, ExecutionReport_0);
  set_field(msg, FIX::PriceProtectionScope{'2'}, ExecutionReport_0);
  set_field(msg, FIX::PriceType{19}, ExecutionReport_0);
  set_field(msg, FIX::PriorityIndicator{1}, ExecutionReport_0);
  set_field(msg, FIX::QtyType{0}, ExecutionReport_0);
  set_field(msg, FIX::QuoteRespID{"STRING_844563762"}, ExecutionReport_0);
  set_field(msg, FIX::ReceivedDeptID{"STRING_286216205"}, ExecutionReport_0);
  set_field(msg, FIX::RegistID{"STRING_424123197"}, ExecutionReport_0);
  set_field(msg, FIX::ReportToExch{false}, ExecutionReport_0);
  FIX::RiskFreeRate RiskFreeRate_0;
  RiskFreeRate_0.setString("4913330");
set_field(msg, RiskFreeRate_0, ExecutionReport_0);
  set_field(msg, FIX::SecondaryClOrdID{"STRING_1813338876"}, ExecutionReport_0);
  set_field(msg, FIX::SecondaryExecID{"STRING_1522209966"}, ExecutionReport_0);
  set_field(msg, FIX::SecondaryOrderID{"STRING_745245659"}, ExecutionReport_0);
  FIX::SettlCurrAmt SettlCurrAmt_6;
  SettlCurrAmt_6.setString("16826771");
set_field(msg, SettlCurrAmt_6, ExecutionReport_0);
  FIX::SettlCurrFxRate SettlCurrFxRate_6;
  SettlCurrFxRate_6.setString("19755417");
set_field(msg, SettlCurrFxRate_6, ExecutionReport_0);
  set_field(msg, FIX::SettlCurrFxRateCalc{'M'}, ExecutionReport_0);
  set_field(msg, FIX::SettlCurrency{"USD"}, ExecutionReport_0);
  set_field(msg, FIX::SettlDate{"LOCALMKTDATE_866057908"}, ExecutionReport_0);
  set_field(msg, FIX::SettlDate2{"LOCALMKTDATE_84471727"}, ExecutionReport_0);
  set_field(msg, FIX::SettlType{"STRING_0"}, ExecutionReport_0);
  set_field(msg, FIX::Side{'4'}, ExecutionReport_0);
  set_field(msg, FIX::SolicitedFlag{true}, ExecutionReport_0);
  FIX::StartCash StartCash_9;
  StartCash_9.setString("16850966");
set_field(msg, StartCash_9, ExecutionReport_0);
  FIX::StopPx StopPx_1;
  StopPx_1.setString("21101822");
set_field(msg, StopPx_1, ExecutionReport_0);
  set_field(msg, FIX::TargetStrategy{1}, ExecutionReport_0);
  set_field(msg, FIX::TargetStrategyParameters{"STRING_366254175"}, ExecutionReport_0);
  FIX::TargetStrategyPerformance TargetStrategyPerformance_0;
  TargetStrategyPerformance_0.setString("2880302");
set_field(msg, TargetStrategyPerformance_0, ExecutionReport_0);
  set_field(msg, FIX::Text{"STRING_196603191"}, ExecutionReport_0);
  set_field(msg, FIX::TimeBracket{"STRING_668721212"}, ExecutionReport_0);
  set_field(msg, FIX::TimeInForce{'3'}, ExecutionReport_0);
  FIX::TimeToExpiration TimeToExpiration_0;
  TimeToExpiration_0.setString("11126843");
set_field(msg, TimeToExpiration_0, ExecutionReport_0);
  set_field(msg, FIX::TotNoFills{803911582}, ExecutionReport_0);
  set_field(msg, FIX::TotNumReports{33193273}, ExecutionReport_0);
  FIX::TotalTakedown TotalTakedown_4;
  TotalTakedown_4.setString("15981900");
set_field(msg, TotalTakedown_4, ExecutionReport_0);
  set_field(msg, FIX::TradeDate{"LOCALMKTDATE_1499513455"}, ExecutionReport_0);
  set_field(msg, FIX::TradeOriginationDate{"LOCALMKTDATE_877757035"}, ExecutionReport_0);
  set_field(msg, FIX::TradedFlatSwitch{false}, ExecutionReport_0);
  set_field(msg, FIX::TradingSessionID{"STRING_6"}, ExecutionReport_0);
  set_field(msg, FIX::TradingSessionSubID{"STRING_3"}, ExecutionReport_0);
  set_field(msg, FIX::TransBkdTime{FIX::UTCTIMESTAMP(9, 36, 48, 23, 12, 2014)}, ExecutionReport_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(17, 18, 19, 6, 6, 2006)}, ExecutionReport_0);
  set_field(msg, FIX::TrdMatchID{"STRING_926318738"}, ExecutionReport_0);
  FIX::UnderlyingLastPx UnderlyingLastPx_0;
  UnderlyingLastPx_0.setString("7353265");
set_field(msg, UnderlyingLastPx_0, ExecutionReport_0);
  FIX::UnderlyingLastQty UnderlyingLastQty_0;
  UnderlyingLastQty_0.setString("16691581");
set_field(msg, UnderlyingLastQty_0, ExecutionReport_0);
  FIX::Volatility Volatility_0;
  Volatility_0.setString("12925729");
set_field(msg, Volatility_0, ExecutionReport_0);
  set_field(msg, FIX::WorkingIndicator{true}, ExecutionReport_0);
  all_values.push_back(ExecutionReport_0);

  all_compo_names.insert("ExecutionReport");

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_4;
  set_field(msg, FIX::ApplID{"STRING_1865761365"}, ApplicationSequenceControl_4);
  set_field(msg, FIX::ApplLastSeqNum{1961294126}, ApplicationSequenceControl_4);
  set_field(msg, FIX::ApplResendFlag{false}, ApplicationSequenceControl_4);
  set_field(msg, FIX::ApplSeqNum{830962073}, ApplicationSequenceControl_4);
  all_values.push_back(ApplicationSequenceControl_4);
  all_compo_names.insert(".");

  // CommissionData
  multiset<string> CommissionData_9;
  set_field(msg, FIX::CommCurrency{"USD"}, CommissionData_9);
  set_field(msg, FIX::CommType{'5'}, CommissionData_9);
  FIX::Commission Commission_9;
  Commission_9.setString("21172355");
set_field(msg, Commission_9, CommissionData_9);
  set_field(msg, FIX::FundRenewWaiv{'Y'}, CommissionData_9);
  all_values.push_back(CommissionData_9);
  all_compo_names.insert(".");

  // ContAmtGrp
  // Group ContAmtGrp.NoContAmts
  {
    FIX50SP2::ExecutionReport::NoContAmts noContAmts_0_0;
    // ContAmtGrp.NoContAmts
    multiset<string> ContAmtGrp_NoContAmts_0;
    set_field(noContAmts_0_0, FIX::ContAmtCurr{"GBP"}, ContAmtGrp_NoContAmts_0);
    set_field(noContAmts_0_0, FIX::ContAmtType{8}, ContAmtGrp_NoContAmts_0);
    FIX::ContAmtValue ContAmtValue_0;
    ContAmtValue_0.setString("13353967");
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
    set_field(noContraBrokers_0_0, FIX::ContraBroker{"STRING_1220348050"}, ContraGrp_NoContraBrokers_0);
    set_field(noContraBrokers_0_0, FIX::ContraLegRefID{"STRING_312598537"}, ContraGrp_NoContraBrokers_0);
    FIX::ContraTradeQty ContraTradeQty_0;
    ContraTradeQty_0.setString("11354048");
set_field(noContraBrokers_0_0, ContraTradeQty_0, ContraGrp_NoContraBrokers_0);
    set_field(noContraBrokers_0_0, FIX::ContraTradeTime{FIX::UTCTIMESTAMP(1, 35, 10, 13, 10, 2004)}, ContraGrp_NoContraBrokers_0);
    set_field(noContraBrokers_0_0, FIX::ContraTrader{"STRING_417374047"}, ContraGrp_NoContraBrokers_0);
    all_values.push_back(ContraGrp_NoContraBrokers_0);
    all_compo_names.insert("...NoContraBrokers");

    msg.addGroup(noContraBrokers_0_0);
  }
  // DiscretionInstructions
  multiset<string> DiscretionInstructions_1;
  set_field(msg, FIX::DiscretionInst{'3'}, DiscretionInstructions_1);
  set_field(msg, FIX::DiscretionLimitType{1}, DiscretionInstructions_1);
  set_field(msg, FIX::DiscretionMoveType{1}, DiscretionInstructions_1);
  set_field(msg, FIX::DiscretionOffsetType{1}, DiscretionInstructions_1);
  FIX::DiscretionOffsetValue DiscretionOffsetValue_1;
  DiscretionOffsetValue_1.setString("12731519");
set_field(msg, DiscretionOffsetValue_1, DiscretionInstructions_1);
  set_field(msg, FIX::DiscretionRoundDirection{1}, DiscretionInstructions_1);
  set_field(msg, FIX::DiscretionScope{4}, DiscretionInstructions_1);
  all_values.push_back(DiscretionInstructions_1);
  all_compo_names.insert(".");

  // DisplayInstruction
  multiset<string> DisplayInstruction_1;
  FIX::DisplayHighQty DisplayHighQty_1;
  DisplayHighQty_1.setString("7281875");
set_field(msg, DisplayHighQty_1, DisplayInstruction_1);
  FIX::DisplayLowQty DisplayLowQty_1;
  DisplayLowQty_1.setString("4882883");
set_field(msg, DisplayLowQty_1, DisplayInstruction_1);
  set_field(msg, FIX::DisplayMethod{'4'}, DisplayInstruction_1);
  FIX::DisplayMinIncr DisplayMinIncr_1;
  DisplayMinIncr_1.setString("2164164");
set_field(msg, DisplayMinIncr_1, DisplayInstruction_1);
  FIX::DisplayQty DisplayQty_1;
  DisplayQty_1.setString("7699568");
set_field(msg, DisplayQty_1, DisplayInstruction_1);
  set_field(msg, FIX::DisplayWhen{'2'}, DisplayInstruction_1);
  FIX::RefreshQty RefreshQty_1;
  RefreshQty_1.setString("5824023");
set_field(msg, RefreshQty_1, DisplayInstruction_1);
  FIX::SecondaryDisplayQty SecondaryDisplayQty_1;
  SecondaryDisplayQty_1.setString("7885479");
set_field(msg, SecondaryDisplayQty_1, DisplayInstruction_1);
  all_values.push_back(DisplayInstruction_1);
  all_compo_names.insert(".");

  // FillsGrp
  // Group FillsGrp.NoFills
  {
    FIX50SP2::ExecutionReport::NoFills noFills_0_0;
    // FillsGrp.NoFills
    multiset<string> FillsGrp_NoFills_0;
    set_field(noFills_0_0, FIX::FillExecID{"STRING_247368538"}, FillsGrp_NoFills_0);
    set_field(noFills_0_0, FIX::FillLiquidityInd{1035394679}, FillsGrp_NoFills_0);
    FIX::FillPx FillPx_0;
    FillPx_0.setString("4386160");
set_field(noFills_0_0, FillPx_0, FillsGrp_NoFills_0);
    FIX::FillQty FillQty_0;
    FillQty_0.setString("7335250");
set_field(noFills_0_0, FillQty_0, FillsGrp_NoFills_0);
    all_values.push_back(FillsGrp_NoFills_0);
    all_compo_names.insert("...NoFills");

    // NestedParties4
    // Group NestedParties4.NoNested4PartyIDs
    {
      FIX50SP2::ExecutionReport::NoFills::NoNested4PartyIDs noNested4PartyIDs_0_1_0;
      // NestedParties4.NoNested4PartyIDs
      multiset<string> NestedParties4_NoNested4PartyIDs_0;
      set_field(noNested4PartyIDs_0_1_0, FIX::Nested4PartyID{"STRING_751214583"}, NestedParties4_NoNested4PartyIDs_0);
      set_field(noNested4PartyIDs_0_1_0, FIX::Nested4PartyIDSource{'1'}, NestedParties4_NoNested4PartyIDs_0);
      set_field(noNested4PartyIDs_0_1_0, FIX::Nested4PartyRole{1803808082}, NestedParties4_NoNested4PartyIDs_0);
      all_values.push_back(NestedParties4_NoNested4PartyIDs_0);
      all_compo_names.insert("...NoFills...NoNested4PartyIDs");

      // NstdPtys4SubGrp
      // Group NstdPtys4SubGrp.NoNested4PartySubIDs
      {
        FIX50SP2::ExecutionReport::NoFills::NoNested4PartyIDs::NoNested4PartySubIDs noNested4PartySubIDs_0_0_2_0;
        // NstdPtys4SubGrp.NoNested4PartySubIDs
        multiset<string> NstdPtys4SubGrp_NoNested4PartySubIDs_0;
        set_field(noNested4PartySubIDs_0_0_2_0, FIX::Nested4PartySubID{"STRING_1512329834"}, NstdPtys4SubGrp_NoNested4PartySubIDs_0);
        set_field(noNested4PartySubIDs_0_0_2_0, FIX::Nested4PartySubIDType{545648645}, NstdPtys4SubGrp_NoNested4PartySubIDs_0);
        all_values.push_back(NstdPtys4SubGrp_NoNested4PartySubIDs_0);
        all_compo_names.insert("...NoFills...NoNested4PartyIDs...NoNested4PartySubIDs");

        noNested4PartyIDs_0_1_0.addGroup(noNested4PartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoFills::NoNested4PartyIDs::NoNested4PartySubIDs noNested4PartySubIDs_0_0_2_1;
        // NstdPtys4SubGrp.NoNested4PartySubIDs
        multiset<string> NstdPtys4SubGrp_NoNested4PartySubIDs_1;
        set_field(noNested4PartySubIDs_0_0_2_1, FIX::Nested4PartySubID{"STRING_267880066"}, NstdPtys4SubGrp_NoNested4PartySubIDs_1);
        set_field(noNested4PartySubIDs_0_0_2_1, FIX::Nested4PartySubIDType{396951844}, NstdPtys4SubGrp_NoNested4PartySubIDs_1);
        all_values.push_back(NstdPtys4SubGrp_NoNested4PartySubIDs_1);
        all_compo_names.insert("...NoFills...NoNested4PartyIDs...NoNested4PartySubIDs");

        noNested4PartyIDs_0_1_0.addGroup(noNested4PartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::ExecutionReport::NoFills::NoNested4PartyIDs::NoNested4PartySubIDs noNested4PartySubIDs_0_0_2_2;
        // NstdPtys4SubGrp.NoNested4PartySubIDs
        multiset<string> NstdPtys4SubGrp_NoNested4PartySubIDs_2;
        set_field(noNested4PartySubIDs_0_0_2_2, FIX::Nested4PartySubID{"STRING_60117205"}, NstdPtys4SubGrp_NoNested4PartySubIDs_2);
        set_field(noNested4PartySubIDs_0_0_2_2, FIX::Nested4PartySubIDType{685254113}, NstdPtys4SubGrp_NoNested4PartySubIDs_2);
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
      set_field(noNested4PartyIDs_0_1_1, FIX::Nested4PartyID{"STRING_207892591"}, NestedParties4_NoNested4PartyIDs_1);
      set_field(noNested4PartyIDs_0_1_1, FIX::Nested4PartyIDSource{'3'}, NestedParties4_NoNested4PartyIDs_1);
      set_field(noNested4PartyIDs_0_1_1, FIX::Nested4PartyRole{624302686}, NestedParties4_NoNested4PartyIDs_1);
      all_values.push_back(NestedParties4_NoNested4PartyIDs_1);
      all_compo_names.insert("...NoFills...NoNested4PartyIDs");

      // NstdPtys4SubGrp
      // Group NstdPtys4SubGrp.NoNested4PartySubIDs
      {
        FIX50SP2::ExecutionReport::NoFills::NoNested4PartyIDs::NoNested4PartySubIDs noNested4PartySubIDs_0_1_2_0;
        // NstdPtys4SubGrp.NoNested4PartySubIDs
        multiset<string> NstdPtys4SubGrp_NoNested4PartySubIDs_3;
        set_field(noNested4PartySubIDs_0_1_2_0, FIX::Nested4PartySubID{"STRING_1583064257"}, NstdPtys4SubGrp_NoNested4PartySubIDs_3);
        set_field(noNested4PartySubIDs_0_1_2_0, FIX::Nested4PartySubIDType{281628976}, NstdPtys4SubGrp_NoNested4PartySubIDs_3);
        all_values.push_back(NstdPtys4SubGrp_NoNested4PartySubIDs_3);
        all_compo_names.insert("...NoFills...NoNested4PartyIDs...NoNested4PartySubIDs");

        noNested4PartyIDs_0_1_1.addGroup(noNested4PartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoFills::NoNested4PartyIDs::NoNested4PartySubIDs noNested4PartySubIDs_0_1_2_1;
        // NstdPtys4SubGrp.NoNested4PartySubIDs
        multiset<string> NstdPtys4SubGrp_NoNested4PartySubIDs_4;
        set_field(noNested4PartySubIDs_0_1_2_1, FIX::Nested4PartySubID{"STRING_81246743"}, NstdPtys4SubGrp_NoNested4PartySubIDs_4);
        set_field(noNested4PartySubIDs_0_1_2_1, FIX::Nested4PartySubIDType{163768137}, NstdPtys4SubGrp_NoNested4PartySubIDs_4);
        all_values.push_back(NstdPtys4SubGrp_NoNested4PartySubIDs_4);
        all_compo_names.insert("...NoFills...NoNested4PartyIDs...NoNested4PartySubIDs");

        noNested4PartyIDs_0_1_1.addGroup(noNested4PartySubIDs_0_1_2_1);
      }
      noFills_0_0.addGroup(noNested4PartyIDs_0_1_1);
    }
    {
      FIX50SP2::ExecutionReport::NoFills::NoNested4PartyIDs noNested4PartyIDs_0_1_2;
      // NestedParties4.NoNested4PartyIDs
      multiset<string> NestedParties4_NoNested4PartyIDs_2;
      set_field(noNested4PartyIDs_0_1_2, FIX::Nested4PartyID{"STRING_769917339"}, NestedParties4_NoNested4PartyIDs_2);
      set_field(noNested4PartyIDs_0_1_2, FIX::Nested4PartyIDSource{'1'}, NestedParties4_NoNested4PartyIDs_2);
      set_field(noNested4PartyIDs_0_1_2, FIX::Nested4PartyRole{380184542}, NestedParties4_NoNested4PartyIDs_2);
      all_values.push_back(NestedParties4_NoNested4PartyIDs_2);
      all_compo_names.insert("...NoFills...NoNested4PartyIDs");

      // NstdPtys4SubGrp
      // Group NstdPtys4SubGrp.NoNested4PartySubIDs
      {
        FIX50SP2::ExecutionReport::NoFills::NoNested4PartyIDs::NoNested4PartySubIDs noNested4PartySubIDs_0_2_2_0;
        // NstdPtys4SubGrp.NoNested4PartySubIDs
        multiset<string> NstdPtys4SubGrp_NoNested4PartySubIDs_5;
        set_field(noNested4PartySubIDs_0_2_2_0, FIX::Nested4PartySubID{"STRING_973607362"}, NstdPtys4SubGrp_NoNested4PartySubIDs_5);
        set_field(noNested4PartySubIDs_0_2_2_0, FIX::Nested4PartySubIDType{962586859}, NstdPtys4SubGrp_NoNested4PartySubIDs_5);
        all_values.push_back(NstdPtys4SubGrp_NoNested4PartySubIDs_5);
        all_compo_names.insert("...NoFills...NoNested4PartyIDs...NoNested4PartySubIDs");

        noNested4PartyIDs_0_1_2.addGroup(noNested4PartySubIDs_0_2_2_0);
      }
      noFills_0_0.addGroup(noNested4PartyIDs_0_1_2);
    }
    msg.addGroup(noFills_0_0);
  }
  // FinancingDetails
  multiset<string> FinancingDetails_10;
  set_field(msg, FIX::AgreementCurrency{"CHF"}, FinancingDetails_10);
  set_field(msg, FIX::AgreementDate{"LOCALMKTDATE_1209955397"}, FinancingDetails_10);
  set_field(msg, FIX::AgreementDesc{"STRING_1216333151"}, FinancingDetails_10);
  set_field(msg, FIX::AgreementID{"STRING_515442701"}, FinancingDetails_10);
  set_field(msg, FIX::DeliveryType{2}, FinancingDetails_10);
  set_field(msg, FIX::EndDate{"LOCALMKTDATE_1324592233"}, FinancingDetails_10);
  FIX::MarginRatio MarginRatio_10;
  MarginRatio_10.setString("72.850000");
set_field(msg, MarginRatio_10, FinancingDetails_10);
  set_field(msg, FIX::StartDate{"LOCALMKTDATE_1664926693"}, FinancingDetails_10);
  set_field(msg, FIX::TerminationType{4}, FinancingDetails_10);
  all_values.push_back(FinancingDetails_10);
  all_compo_names.insert(".");

  // InstrmtLegExecGrp
  // Group InstrmtLegExecGrp.NoLegs
  {
    FIX50SP2::ExecutionReport::NoLegs noLegs_0_0;
    // InstrmtLegExecGrp.NoLegs
    multiset<string> InstrmtLegExecGrp_NoLegs_0;
    set_field(noLegs_0_0, FIX::LegAllocID{"STRING_1029772880"}, InstrmtLegExecGrp_NoLegs_0);
    FIX::LegCalculatedCcyLastQty LegCalculatedCcyLastQty_0;
    LegCalculatedCcyLastQty_0.setString("15265653");
set_field(noLegs_0_0, LegCalculatedCcyLastQty_0, InstrmtLegExecGrp_NoLegs_0);
    set_field(noLegs_0_0, FIX::LegCoveredOrUncovered{1484854816}, InstrmtLegExecGrp_NoLegs_0);
    FIX::LegCurrencyRatio LegCurrencyRatio_0;
    LegCurrencyRatio_0.setString("14267247");
set_field(noLegs_0_0, LegCurrencyRatio_0, InstrmtLegExecGrp_NoLegs_0);
    FIX::LegDividendYield LegDividendYield_0;
    LegDividendYield_0.setString("25.170000");
set_field(noLegs_0_0, LegDividendYield_0, InstrmtLegExecGrp_NoLegs_0);
    set_field(noLegs_0_0, FIX::LegExecInst{"MULTIPLECHARVALUE_22625281"}, InstrmtLegExecGrp_NoLegs_0);
    FIX::LegGrossTradeAmt LegGrossTradeAmt_0;
    LegGrossTradeAmt_0.setString("16346173");
set_field(noLegs_0_0, LegGrossTradeAmt_0, InstrmtLegExecGrp_NoLegs_0);
    FIX::LegLastForwardPoints LegLastForwardPoints_0;
    LegLastForwardPoints_0.setString("18965948");
set_field(noLegs_0_0, LegLastForwardPoints_0, InstrmtLegExecGrp_NoLegs_0);
    FIX::LegLastPx LegLastPx_0;
    LegLastPx_0.setString("6469279");
set_field(noLegs_0_0, LegLastPx_0, InstrmtLegExecGrp_NoLegs_0);
    FIX::LegLastQty LegLastQty_0;
    LegLastQty_0.setString("7985399");
set_field(noLegs_0_0, LegLastQty_0, InstrmtLegExecGrp_NoLegs_0);
    FIX::LegOrderQty LegOrderQty_0;
    LegOrderQty_0.setString("13321754");
set_field(noLegs_0_0, LegOrderQty_0, InstrmtLegExecGrp_NoLegs_0);
    set_field(noLegs_0_0, FIX::LegPositionEffect{'9'}, InstrmtLegExecGrp_NoLegs_0);
    FIX::LegQty LegQty_0;
    LegQty_0.setString("8797866");
set_field(noLegs_0_0, LegQty_0, InstrmtLegExecGrp_NoLegs_0);
    set_field(noLegs_0_0, FIX::LegRefID{"STRING_1495943596"}, InstrmtLegExecGrp_NoLegs_0);
    set_field(noLegs_0_0, FIX::LegSettlCurrency{"GBP"}, InstrmtLegExecGrp_NoLegs_0);
    set_field(noLegs_0_0, FIX::LegSettlDate{"LOCALMKTDATE_1876128138"}, InstrmtLegExecGrp_NoLegs_0);
    set_field(noLegs_0_0, FIX::LegSettlType{'1'}, InstrmtLegExecGrp_NoLegs_0);
    set_field(noLegs_0_0, FIX::LegSwapType{2}, InstrmtLegExecGrp_NoLegs_0);
    FIX::LegVolatility LegVolatility_0;
    LegVolatility_0.setString("6912313");
set_field(noLegs_0_0, LegVolatility_0, InstrmtLegExecGrp_NoLegs_0);
    all_values.push_back(InstrmtLegExecGrp_NoLegs_0);
    all_compo_names.insert("...NoLegs");

    // InstrumentLeg
    multiset<string> InstrumentLeg_39;
    set_field(noLegs_0_0, FIX::EncodedLegIssuer{"DATA_1271803288"}, InstrumentLeg_39);
    set_field(noLegs_0_0, FIX::EncodedLegIssuerLen{1399029976}, InstrumentLeg_39);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDesc{"DATA_1901186747"}, InstrumentLeg_39);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDescLen{340652791}, InstrumentLeg_39);
    set_field(noLegs_0_0, FIX::LegCFICode{"STRING_1914472677"}, InstrumentLeg_39);
    FIX::LegContractMultiplier LegContractMultiplier_39;
    LegContractMultiplier_39.setString("16971835");
set_field(noLegs_0_0, LegContractMultiplier_39, InstrumentLeg_39);
    set_field(noLegs_0_0, FIX::LegContractMultiplierUnit{1665245024}, InstrumentLeg_39);
    set_field(noLegs_0_0, FIX::LegContractSettlMonth{"MONTHYEAR_1033646314"}, InstrumentLeg_39);
    set_field(noLegs_0_0, FIX::LegCountryOfIssue{"COUNTRY_1214626579"}, InstrumentLeg_39);
    set_field(noLegs_0_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_498678043"}, InstrumentLeg_39);
    FIX::LegCouponRate LegCouponRate_39;
    LegCouponRate_39.setString("74.160000");
set_field(noLegs_0_0, LegCouponRate_39, InstrumentLeg_39);
    set_field(noLegs_0_0, FIX::LegCreditRating{"STRING_96915811"}, InstrumentLeg_39);
    set_field(noLegs_0_0, FIX::LegCurrency{"USD"}, InstrumentLeg_39);
    set_field(noLegs_0_0, FIX::LegDatedDate{"LOCALMKTDATE_1523640535"}, InstrumentLeg_39);
    set_field(noLegs_0_0, FIX::LegExerciseStyle{1464442225}, InstrumentLeg_39);
    FIX::LegFactor LegFactor_39;
    LegFactor_39.setString("16106175");
set_field(noLegs_0_0, LegFactor_39, InstrumentLeg_39);
    set_field(noLegs_0_0, FIX::LegFlowScheduleType{1010774202}, InstrumentLeg_39);
    set_field(noLegs_0_0, FIX::LegInstrRegistry{"STRING_1213553427"}, InstrumentLeg_39);
    set_field(noLegs_0_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_110061832"}, InstrumentLeg_39);
    set_field(noLegs_0_0, FIX::LegIssueDate{"LOCALMKTDATE_1809314122"}, InstrumentLeg_39);
    set_field(noLegs_0_0, FIX::LegIssuer{"STRING_398245237"}, InstrumentLeg_39);
    set_field(noLegs_0_0, FIX::LegLocaleOfIssue{"STRING_1038618775"}, InstrumentLeg_39);
    set_field(noLegs_0_0, FIX::LegMaturityDate{"LOCALMKTDATE_541617138"}, InstrumentLeg_39);
    set_field(noLegs_0_0, FIX::LegMaturityMonthYear{"MONTHYEAR_1894188833"}, InstrumentLeg_39);
    set_field(noLegs_0_0, FIX::LegMaturityTime{"TZTIMEONLY_589609409"}, InstrumentLeg_39);
    set_field(noLegs_0_0, FIX::LegOptAttribute{'8'}, InstrumentLeg_39);
    FIX::LegOptionRatio LegOptionRatio_39;
    LegOptionRatio_39.setString("16228333");
set_field(noLegs_0_0, LegOptionRatio_39, InstrumentLeg_39);
    set_field(noLegs_0_0, FIX::LegPool{"STRING_1680474226"}, InstrumentLeg_39);
    set_field(noLegs_0_0, FIX::LegPriceUnitOfMeasure{"STRING_64932769"}, InstrumentLeg_39);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_39;
    LegPriceUnitOfMeasureQty_39.setString("1665810");
set_field(noLegs_0_0, LegPriceUnitOfMeasureQty_39, InstrumentLeg_39);
    set_field(noLegs_0_0, FIX::LegProduct{804793866}, InstrumentLeg_39);
    set_field(noLegs_0_0, FIX::LegPutOrCall{1463962745}, InstrumentLeg_39);
    FIX::LegRatioQty LegRatioQty_39;
    LegRatioQty_39.setString("20677677");
set_field(noLegs_0_0, LegRatioQty_39, InstrumentLeg_39);
    set_field(noLegs_0_0, FIX::LegRedemptionDate{"LOCALMKTDATE_1145446657"}, InstrumentLeg_39);
    set_field(noLegs_0_0, FIX::LegRepoCollateralSecurityType{"STRING_1230951775"}, InstrumentLeg_39);
    FIX::LegRepurchaseRate LegRepurchaseRate_39;
    LegRepurchaseRate_39.setString("76.580000");
set_field(noLegs_0_0, LegRepurchaseRate_39, InstrumentLeg_39);
    set_field(noLegs_0_0, FIX::LegRepurchaseTerm{663208033}, InstrumentLeg_39);
    set_field(noLegs_0_0, FIX::LegSecurityDesc{"STRING_117114441"}, InstrumentLeg_39);
    set_field(noLegs_0_0, FIX::LegSecurityExchange{"EXCHANGE_684610589"}, InstrumentLeg_39);
    set_field(noLegs_0_0, FIX::LegSecurityID{"STRING_1161886076"}, InstrumentLeg_39);
    set_field(noLegs_0_0, FIX::LegSecurityIDSource{"STRING_220251858"}, InstrumentLeg_39);
    set_field(noLegs_0_0, FIX::LegSecuritySubType{"STRING_781526400"}, InstrumentLeg_39);
    set_field(noLegs_0_0, FIX::LegSecurityType{"STRING_1039645784"}, InstrumentLeg_39);
    set_field(noLegs_0_0, FIX::LegSide{'1'}, InstrumentLeg_39);
    set_field(noLegs_0_0, FIX::LegStateOrProvinceOfIssue{"STRING_157683287"}, InstrumentLeg_39);
    set_field(noLegs_0_0, FIX::LegStrikeCurrency{"USD"}, InstrumentLeg_39);
    FIX::LegStrikePrice LegStrikePrice_39;
    LegStrikePrice_39.setString("11684574");
set_field(noLegs_0_0, LegStrikePrice_39, InstrumentLeg_39);
    set_field(noLegs_0_0, FIX::LegSymbol{"STRING_1570157789"}, InstrumentLeg_39);
    set_field(noLegs_0_0, FIX::LegSymbolSfx{"STRING_1381439788"}, InstrumentLeg_39);
    set_field(noLegs_0_0, FIX::LegTimeUnit{"STRING_830287964"}, InstrumentLeg_39);
    set_field(noLegs_0_0, FIX::LegUnitOfMeasure{"STRING_1968403026"}, InstrumentLeg_39);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_39;
    LegUnitOfMeasureQty_39.setString("2725749");
set_field(noLegs_0_0, LegUnitOfMeasureQty_39, InstrumentLeg_39);
    all_values.push_back(InstrumentLeg_39);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::ExecutionReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_81;
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltID{"STRING_1715108212"}, LegSecAltIDGrp_NoLegSecurityAltID_81);
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltIDSource{"STRING_862184325"}, LegSecAltIDGrp_NoLegSecurityAltID_81);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_81);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_82;
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltID{"STRING_114634550"}, LegSecAltIDGrp_NoLegSecurityAltID_82);
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltIDSource{"STRING_1190457888"}, LegSecAltIDGrp_NoLegSecurityAltID_82);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_82);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::ExecutionReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_83;
      set_field(noLegSecurityAltID_0_1_2, FIX::LegSecurityAltID{"STRING_395174903"}, LegSecAltIDGrp_NoLegSecurityAltID_83);
      set_field(noLegSecurityAltID_0_1_2, FIX::LegSecurityAltIDSource{"STRING_179567320"}, LegSecAltIDGrp_NoLegSecurityAltID_83);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_83);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_2);
    }
    // LegPreAllocGrp
    // Group LegPreAllocGrp.NoLegAllocs
    {
      FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs noLegAllocs_0_1_0;
      // LegPreAllocGrp.NoLegAllocs
      multiset<string> LegPreAllocGrp_NoLegAllocs_0;
      set_field(noLegAllocs_0_1_0, FIX::LegAllocAccount{"STRING_1199968769"}, LegPreAllocGrp_NoLegAllocs_0);
      set_field(noLegAllocs_0_1_0, FIX::LegAllocAcctIDSource{"STRING_1643530065"}, LegPreAllocGrp_NoLegAllocs_0);
      FIX::LegAllocQty LegAllocQty_0;
      LegAllocQty_0.setString("12773230");
set_field(noLegAllocs_0_1_0, LegAllocQty_0, LegPreAllocGrp_NoLegAllocs_0);
      set_field(noLegAllocs_0_1_0, FIX::LegAllocSettlCurrency{"GBP"}, LegPreAllocGrp_NoLegAllocs_0);
      set_field(noLegAllocs_0_1_0, FIX::LegIndividualAllocID{"STRING_747307048"}, LegPreAllocGrp_NoLegAllocs_0);
      all_values.push_back(LegPreAllocGrp_NoLegAllocs_0);
      all_compo_names.insert("...NoLegs...NoLegAllocs");

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_0_0_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_17;
        set_field(noNested2PartyIDs_0_0_2_0, FIX::Nested2PartyID{"STRING_844112634"}, NestedParties2_NoNested2PartyIDs_17);
        set_field(noNested2PartyIDs_0_0_2_0, FIX::Nested2PartyIDSource{'1'}, NestedParties2_NoNested2PartyIDs_17);
        set_field(noNested2PartyIDs_0_0_2_0, FIX::Nested2PartyRole{2023025888}, NestedParties2_NoNested2PartyIDs_17);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_17);
        all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_36;
          set_field(noNested2PartySubIDs_0_0_0_3_0, FIX::Nested2PartySubID{"STRING_65960389"}, NstdPtys2SubGrp_NoNested2PartySubIDs_36);
          set_field(noNested2PartySubIDs_0_0_0_3_0, FIX::Nested2PartySubIDType{915188024}, NstdPtys2SubGrp_NoNested2PartySubIDs_36);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_36);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_0_2_0.addGroup(noNested2PartySubIDs_0_0_0_3_0);
        }
        noLegAllocs_0_1_0.addGroup(noNested2PartyIDs_0_0_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_0_0_2_1;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_18;
        set_field(noNested2PartyIDs_0_0_2_1, FIX::Nested2PartyID{"STRING_725124934"}, NestedParties2_NoNested2PartyIDs_18);
        set_field(noNested2PartyIDs_0_0_2_1, FIX::Nested2PartyIDSource{'2'}, NestedParties2_NoNested2PartyIDs_18);
        set_field(noNested2PartyIDs_0_0_2_1, FIX::Nested2PartyRole{1271792386}, NestedParties2_NoNested2PartyIDs_18);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_18);
        all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_1_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_37;
          set_field(noNested2PartySubIDs_0_0_1_3_0, FIX::Nested2PartySubID{"STRING_1392101165"}, NstdPtys2SubGrp_NoNested2PartySubIDs_37);
          set_field(noNested2PartySubIDs_0_0_1_3_0, FIX::Nested2PartySubIDType{694466527}, NstdPtys2SubGrp_NoNested2PartySubIDs_37);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_37);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_0_2_1.addGroup(noNested2PartySubIDs_0_0_1_3_0);
        }
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_1_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_38;
          set_field(noNested2PartySubIDs_0_0_1_3_1, FIX::Nested2PartySubID{"STRING_1230459031"}, NstdPtys2SubGrp_NoNested2PartySubIDs_38);
          set_field(noNested2PartySubIDs_0_0_1_3_1, FIX::Nested2PartySubIDType{74905481}, NstdPtys2SubGrp_NoNested2PartySubIDs_38);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_38);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_0_2_1.addGroup(noNested2PartySubIDs_0_0_1_3_1);
        }
        noLegAllocs_0_1_0.addGroup(noNested2PartyIDs_0_0_2_1);
      }
      {
        FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_0_0_2_2;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_19;
        set_field(noNested2PartyIDs_0_0_2_2, FIX::Nested2PartyID{"STRING_515385906"}, NestedParties2_NoNested2PartyIDs_19);
        set_field(noNested2PartyIDs_0_0_2_2, FIX::Nested2PartyIDSource{'1'}, NestedParties2_NoNested2PartyIDs_19);
        set_field(noNested2PartyIDs_0_0_2_2, FIX::Nested2PartyRole{1446810583}, NestedParties2_NoNested2PartyIDs_19);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_19);
        all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_2_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_39;
          set_field(noNested2PartySubIDs_0_0_2_3_0, FIX::Nested2PartySubID{"STRING_217734624"}, NstdPtys2SubGrp_NoNested2PartySubIDs_39);
          set_field(noNested2PartySubIDs_0_0_2_3_0, FIX::Nested2PartySubIDType{1561445134}, NstdPtys2SubGrp_NoNested2PartySubIDs_39);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_39);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_0_2_2.addGroup(noNested2PartySubIDs_0_0_2_3_0);
        }
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_2_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_40;
          set_field(noNested2PartySubIDs_0_0_2_3_1, FIX::Nested2PartySubID{"STRING_1273468358"}, NstdPtys2SubGrp_NoNested2PartySubIDs_40);
          set_field(noNested2PartySubIDs_0_0_2_3_1, FIX::Nested2PartySubIDType{612909528}, NstdPtys2SubGrp_NoNested2PartySubIDs_40);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_40);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_0_2_2.addGroup(noNested2PartySubIDs_0_0_2_3_1);
        }
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_2_3_2;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_41;
          set_field(noNested2PartySubIDs_0_0_2_3_2, FIX::Nested2PartySubID{"STRING_1741012454"}, NstdPtys2SubGrp_NoNested2PartySubIDs_41);
          set_field(noNested2PartySubIDs_0_0_2_3_2, FIX::Nested2PartySubIDType{483023623}, NstdPtys2SubGrp_NoNested2PartySubIDs_41);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_41);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

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
      set_field(noLegAllocs_0_1_1, FIX::LegAllocAccount{"STRING_1812878297"}, LegPreAllocGrp_NoLegAllocs_1);
      set_field(noLegAllocs_0_1_1, FIX::LegAllocAcctIDSource{"STRING_1237058871"}, LegPreAllocGrp_NoLegAllocs_1);
      FIX::LegAllocQty LegAllocQty_1;
      LegAllocQty_1.setString("17603466");
set_field(noLegAllocs_0_1_1, LegAllocQty_1, LegPreAllocGrp_NoLegAllocs_1);
      set_field(noLegAllocs_0_1_1, FIX::LegAllocSettlCurrency{"USD"}, LegPreAllocGrp_NoLegAllocs_1);
      set_field(noLegAllocs_0_1_1, FIX::LegIndividualAllocID{"STRING_360170061"}, LegPreAllocGrp_NoLegAllocs_1);
      all_values.push_back(LegPreAllocGrp_NoLegAllocs_1);
      all_compo_names.insert("...NoLegs...NoLegAllocs");

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_0_1_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_20;
        set_field(noNested2PartyIDs_0_1_2_0, FIX::Nested2PartyID{"STRING_660686050"}, NestedParties2_NoNested2PartyIDs_20);
        set_field(noNested2PartyIDs_0_1_2_0, FIX::Nested2PartyIDSource{'1'}, NestedParties2_NoNested2PartyIDs_20);
        set_field(noNested2PartyIDs_0_1_2_0, FIX::Nested2PartyRole{600008479}, NestedParties2_NoNested2PartyIDs_20);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_20);
        all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_42;
          set_field(noNested2PartySubIDs_0_1_0_3_0, FIX::Nested2PartySubID{"STRING_1858048087"}, NstdPtys2SubGrp_NoNested2PartySubIDs_42);
          set_field(noNested2PartySubIDs_0_1_0_3_0, FIX::Nested2PartySubIDType{1515196504}, NstdPtys2SubGrp_NoNested2PartySubIDs_42);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_42);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_1_2_0.addGroup(noNested2PartySubIDs_0_1_0_3_0);
        }
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_0_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_43;
          set_field(noNested2PartySubIDs_0_1_0_3_1, FIX::Nested2PartySubID{"STRING_302691828"}, NstdPtys2SubGrp_NoNested2PartySubIDs_43);
          set_field(noNested2PartySubIDs_0_1_0_3_1, FIX::Nested2PartySubIDType{2081691763}, NstdPtys2SubGrp_NoNested2PartySubIDs_43);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_43);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_1_2_0.addGroup(noNested2PartySubIDs_0_1_0_3_1);
        }
        noLegAllocs_0_1_1.addGroup(noNested2PartyIDs_0_1_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_0_1_2_1;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_21;
        set_field(noNested2PartyIDs_0_1_2_1, FIX::Nested2PartyID{"STRING_639505242"}, NestedParties2_NoNested2PartyIDs_21);
        set_field(noNested2PartyIDs_0_1_2_1, FIX::Nested2PartyIDSource{'1'}, NestedParties2_NoNested2PartyIDs_21);
        set_field(noNested2PartyIDs_0_1_2_1, FIX::Nested2PartyRole{1326309281}, NestedParties2_NoNested2PartyIDs_21);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_21);
        all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_1_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_44;
          set_field(noNested2PartySubIDs_0_1_1_3_0, FIX::Nested2PartySubID{"STRING_1382170102"}, NstdPtys2SubGrp_NoNested2PartySubIDs_44);
          set_field(noNested2PartySubIDs_0_1_1_3_0, FIX::Nested2PartySubIDType{1401214762}, NstdPtys2SubGrp_NoNested2PartySubIDs_44);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_44);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_1_2_1.addGroup(noNested2PartySubIDs_0_1_1_3_0);
        }
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_1_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_45;
          set_field(noNested2PartySubIDs_0_1_1_3_1, FIX::Nested2PartySubID{"STRING_1849357676"}, NstdPtys2SubGrp_NoNested2PartySubIDs_45);
          set_field(noNested2PartySubIDs_0_1_1_3_1, FIX::Nested2PartySubIDType{737720401}, NstdPtys2SubGrp_NoNested2PartySubIDs_45);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_45);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_1_2_1.addGroup(noNested2PartySubIDs_0_1_1_3_1);
        }
        {
          FIX50SP2::ExecutionReport::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_1_3_2;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_46;
          set_field(noNested2PartySubIDs_0_1_1_3_2, FIX::Nested2PartySubID{"STRING_700541698"}, NstdPtys2SubGrp_NoNested2PartySubIDs_46);
          set_field(noNested2PartySubIDs_0_1_1_3_2, FIX::Nested2PartySubIDType{1932368146}, NstdPtys2SubGrp_NoNested2PartySubIDs_46);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_46);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_1_2_1.addGroup(noNested2PartySubIDs_0_1_1_3_2);
        }
        noLegAllocs_0_1_1.addGroup(noNested2PartyIDs_0_1_2_1);
      }
      noLegs_0_0.addGroup(noLegAllocs_0_1_1);
    }
    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::ExecutionReport::NoLegs::NoLegStipulations noLegStipulations_0_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_0;
      set_field(noLegStipulations_0_1_0, FIX::LegStipulationType{"STRING_114503184"}, LegStipulations_NoLegStipulations_0);
      set_field(noLegStipulations_0_1_0, FIX::LegStipulationValue{"STRING_1058352856"}, LegStipulations_NoLegStipulations_0);
      all_values.push_back(LegStipulations_NoLegStipulations_0);
      all_compo_names.insert("...NoLegs...NoLegStipulations");

      noLegs_0_0.addGroup(noLegStipulations_0_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoLegs::NoLegStipulations noLegStipulations_0_1_1;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_1;
      set_field(noLegStipulations_0_1_1, FIX::LegStipulationType{"STRING_1568364553"}, LegStipulations_NoLegStipulations_1);
      set_field(noLegStipulations_0_1_1, FIX::LegStipulationValue{"STRING_1855515638"}, LegStipulations_NoLegStipulations_1);
      all_values.push_back(LegStipulations_NoLegStipulations_1);
      all_compo_names.insert("...NoLegs...NoLegStipulations");

      noLegs_0_0.addGroup(noLegStipulations_0_1_1);
    }
    // NestedParties3
    // Group NestedParties3.NoNested3PartyIDs
    {
      FIX50SP2::ExecutionReport::NoLegs::NoNested3PartyIDs noNested3PartyIDs_0_1_0;
      // NestedParties3.NoNested3PartyIDs
      multiset<string> NestedParties3_NoNested3PartyIDs_0;
      set_field(noNested3PartyIDs_0_1_0, FIX::Nested3PartyID{"STRING_1233759203"}, NestedParties3_NoNested3PartyIDs_0);
      set_field(noNested3PartyIDs_0_1_0, FIX::Nested3PartyIDSource{'9'}, NestedParties3_NoNested3PartyIDs_0);
      set_field(noNested3PartyIDs_0_1_0, FIX::Nested3PartyRole{1154239493}, NestedParties3_NoNested3PartyIDs_0);
      all_values.push_back(NestedParties3_NoNested3PartyIDs_0);
      all_compo_names.insert("...NoLegs...NoNested3PartyIDs");

      // NstdPtys3SubGrp
      // Group NstdPtys3SubGrp.NoNested3PartySubIDs
      {
        FIX50SP2::ExecutionReport::NoLegs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_0_0_2_0;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_0;
        set_field(noNested3PartySubIDs_0_0_2_0, FIX::Nested3PartySubID{"STRING_761664277"}, NstdPtys3SubGrp_NoNested3PartySubIDs_0);
        set_field(noNested3PartySubIDs_0_0_2_0, FIX::Nested3PartySubIDType{1514409554}, NstdPtys3SubGrp_NoNested3PartySubIDs_0);
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_0);
        all_compo_names.insert("...NoLegs...NoNested3PartyIDs...NoNested3PartySubIDs");

        noNested3PartyIDs_0_1_0.addGroup(noNested3PartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoLegs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_0_0_2_1;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_1;
        set_field(noNested3PartySubIDs_0_0_2_1, FIX::Nested3PartySubID{"STRING_1821551870"}, NstdPtys3SubGrp_NoNested3PartySubIDs_1);
        set_field(noNested3PartySubIDs_0_0_2_1, FIX::Nested3PartySubIDType{1422350327}, NstdPtys3SubGrp_NoNested3PartySubIDs_1);
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_1);
        all_compo_names.insert("...NoLegs...NoNested3PartyIDs...NoNested3PartySubIDs");

        noNested3PartyIDs_0_1_0.addGroup(noNested3PartySubIDs_0_0_2_1);
      }
      noLegs_0_0.addGroup(noNested3PartyIDs_0_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoLegs::NoNested3PartyIDs noNested3PartyIDs_0_1_1;
      // NestedParties3.NoNested3PartyIDs
      multiset<string> NestedParties3_NoNested3PartyIDs_1;
      set_field(noNested3PartyIDs_0_1_1, FIX::Nested3PartyID{"STRING_1159013605"}, NestedParties3_NoNested3PartyIDs_1);
      set_field(noNested3PartyIDs_0_1_1, FIX::Nested3PartyIDSource{'2'}, NestedParties3_NoNested3PartyIDs_1);
      set_field(noNested3PartyIDs_0_1_1, FIX::Nested3PartyRole{999917221}, NestedParties3_NoNested3PartyIDs_1);
      all_values.push_back(NestedParties3_NoNested3PartyIDs_1);
      all_compo_names.insert("...NoLegs...NoNested3PartyIDs");

      // NstdPtys3SubGrp
      // Group NstdPtys3SubGrp.NoNested3PartySubIDs
      {
        FIX50SP2::ExecutionReport::NoLegs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_0_1_2_0;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_2;
        set_field(noNested3PartySubIDs_0_1_2_0, FIX::Nested3PartySubID{"STRING_1789273206"}, NstdPtys3SubGrp_NoNested3PartySubIDs_2);
        set_field(noNested3PartySubIDs_0_1_2_0, FIX::Nested3PartySubIDType{1302609050}, NstdPtys3SubGrp_NoNested3PartySubIDs_2);
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_2);
        all_compo_names.insert("...NoLegs...NoNested3PartyIDs...NoNested3PartySubIDs");

        noNested3PartyIDs_0_1_1.addGroup(noNested3PartySubIDs_0_1_2_0);
      }
      noLegs_0_0.addGroup(noNested3PartyIDs_0_1_1);
    }
    {
      FIX50SP2::ExecutionReport::NoLegs::NoNested3PartyIDs noNested3PartyIDs_0_1_2;
      // NestedParties3.NoNested3PartyIDs
      multiset<string> NestedParties3_NoNested3PartyIDs_2;
      set_field(noNested3PartyIDs_0_1_2, FIX::Nested3PartyID{"STRING_803786160"}, NestedParties3_NoNested3PartyIDs_2);
      set_field(noNested3PartyIDs_0_1_2, FIX::Nested3PartyIDSource{'2'}, NestedParties3_NoNested3PartyIDs_2);
      set_field(noNested3PartyIDs_0_1_2, FIX::Nested3PartyRole{1454320121}, NestedParties3_NoNested3PartyIDs_2);
      all_values.push_back(NestedParties3_NoNested3PartyIDs_2);
      all_compo_names.insert("...NoLegs...NoNested3PartyIDs");

      // NstdPtys3SubGrp
      // Group NstdPtys3SubGrp.NoNested3PartySubIDs
      {
        FIX50SP2::ExecutionReport::NoLegs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_0_2_2_0;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_3;
        set_field(noNested3PartySubIDs_0_2_2_0, FIX::Nested3PartySubID{"STRING_1615266570"}, NstdPtys3SubGrp_NoNested3PartySubIDs_3);
        set_field(noNested3PartySubIDs_0_2_2_0, FIX::Nested3PartySubIDType{689006575}, NstdPtys3SubGrp_NoNested3PartySubIDs_3);
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_3);
        all_compo_names.insert("...NoLegs...NoNested3PartyIDs...NoNested3PartySubIDs");

        noNested3PartyIDs_0_1_2.addGroup(noNested3PartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoLegs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_0_2_2_1;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_4;
        set_field(noNested3PartySubIDs_0_2_2_1, FIX::Nested3PartySubID{"STRING_1383826555"}, NstdPtys3SubGrp_NoNested3PartySubIDs_4);
        set_field(noNested3PartySubIDs_0_2_2_1, FIX::Nested3PartySubIDType{1317140598}, NstdPtys3SubGrp_NoNested3PartySubIDs_4);
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_4);
        all_compo_names.insert("...NoLegs...NoNested3PartyIDs...NoNested3PartySubIDs");

        noNested3PartyIDs_0_1_2.addGroup(noNested3PartySubIDs_0_2_2_1);
      }
      {
        FIX50SP2::ExecutionReport::NoLegs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_0_2_2_2;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_5;
        set_field(noNested3PartySubIDs_0_2_2_2, FIX::Nested3PartySubID{"STRING_1426726976"}, NstdPtys3SubGrp_NoNested3PartySubIDs_5);
        set_field(noNested3PartySubIDs_0_2_2_2, FIX::Nested3PartySubIDType{2084368253}, NstdPtys3SubGrp_NoNested3PartySubIDs_5);
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_5);
        all_compo_names.insert("...NoLegs...NoNested3PartyIDs...NoNested3PartySubIDs");

        noNested3PartyIDs_0_1_2.addGroup(noNested3PartySubIDs_0_2_2_2);
      }
      noLegs_0_0.addGroup(noNested3PartyIDs_0_1_2);
    }
    msg.addGroup(noLegs_0_0);
  }
  // Instrument
  multiset<string> Instrument_25;
  FIX::AttachmentPoint AttachmentPoint_25;
  AttachmentPoint_25.setString("50.960000");
set_field(msg, AttachmentPoint_25, Instrument_25);
  set_field(msg, FIX::CFICode{"STRING_234698353"}, Instrument_25);
  set_field(msg, FIX::CPProgram{1}, Instrument_25);
  set_field(msg, FIX::CPRegType{"STRING_12894304"}, Instrument_25);
  FIX::CapPrice CapPrice_25;
  CapPrice_25.setString("18030629");
set_field(msg, CapPrice_25, Instrument_25);
  FIX::ContractMultiplier ContractMultiplier_25;
  ContractMultiplier_25.setString("19069034");
set_field(msg, ContractMultiplier_25, Instrument_25);
  set_field(msg, FIX::ContractMultiplierUnit{1}, Instrument_25);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_889338462"}, Instrument_25);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_704510641"}, Instrument_25);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_561026629"}, Instrument_25);
  FIX::CouponRate CouponRate_25;
  CouponRate_25.setString("40.930000");
set_field(msg, CouponRate_25, Instrument_25);
  set_field(msg, FIX::CreditRating{"STRING_1466174918"}, Instrument_25);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_2075436183"}, Instrument_25);
  FIX::DetachmentPoint DetachmentPoint_25;
  DetachmentPoint_25.setString("23.150000");
set_field(msg, DetachmentPoint_25, Instrument_25);
  set_field(msg, FIX::EncodedIssuer{"DATA_741041598"}, Instrument_25);
  set_field(msg, FIX::EncodedIssuerLen{1086966140}, Instrument_25);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_1934569017"}, Instrument_25);
  set_field(msg, FIX::EncodedSecurityDescLen{1740958819}, Instrument_25);
  set_field(msg, FIX::ExerciseStyle{0}, Instrument_25);
  FIX::Factor Factor_25;
  Factor_25.setString("15763585");
set_field(msg, Factor_25, Instrument_25);
  set_field(msg, FIX::FlexProductEligibilityIndicator{false}, Instrument_25);
  set_field(msg, FIX::FlexibleIndicator{false}, Instrument_25);
  FIX::FloorPrice FloorPrice_25;
  FloorPrice_25.setString("18576533");
set_field(msg, FloorPrice_25, Instrument_25);
  set_field(msg, FIX::FlowScheduleType{4}, Instrument_25);
  set_field(msg, FIX::InstrRegistry{"STRING_595458490"}, Instrument_25);
  set_field(msg, FIX::InstrmtAssignmentMethod{'1'}, Instrument_25);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_891927269"}, Instrument_25);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_1979285045"}, Instrument_25);
  set_field(msg, FIX::Issuer{"STRING_495093249"}, Instrument_25);
  set_field(msg, FIX::ListMethod{1}, Instrument_25);
  set_field(msg, FIX::LocaleOfIssue{"STRING_1916169651"}, Instrument_25);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_1597118345"}, Instrument_25);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_405868951"}, Instrument_25);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_1967557440"}, Instrument_25);
  FIX::MinPriceIncrement MinPriceIncrement_25;
  MinPriceIncrement_25.setString("16100126");
set_field(msg, MinPriceIncrement_25, Instrument_25);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_25;
  MinPriceIncrementAmount_25.setString("614482");
set_field(msg, MinPriceIncrementAmount_25, Instrument_25);
  set_field(msg, FIX::NTPositionLimit{1726977220}, Instrument_25);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_25;
  NotionalPercentageOutstanding_25.setString("97.860000");
set_field(msg, NotionalPercentageOutstanding_25, Instrument_25);
  set_field(msg, FIX::OptAttribute{'9'}, Instrument_25);
  FIX::OptPayoutAmount OptPayoutAmount_25;
  OptPayoutAmount_25.setString("2840042");
set_field(msg, OptPayoutAmount_25, Instrument_25);
  set_field(msg, FIX::OptPayoutType{2}, Instrument_25);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_25;
  OriginalNotionalPercentageOutstanding_25.setString("71.170000");
set_field(msg, OriginalNotionalPercentageOutstanding_25, Instrument_25);
  set_field(msg, FIX::Pool{"STRING_1750179131"}, Instrument_25);
  set_field(msg, FIX::PositionLimit{1505778950}, Instrument_25);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_STD"}, Instrument_25);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_343737081"}, Instrument_25);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_25;
  PriceUnitOfMeasureQty_25.setString("4452614");
set_field(msg, PriceUnitOfMeasureQty_25, Instrument_25);
  set_field(msg, FIX::Product{8}, Instrument_25);
  set_field(msg, FIX::ProductComplex{"STRING_2084695901"}, Instrument_25);
  set_field(msg, FIX::PutOrCall{0}, Instrument_25);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_1666179729"}, Instrument_25);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_833296474"}, Instrument_25);
  FIX::RepurchaseRate RepurchaseRate_25;
  RepurchaseRate_25.setString("86.770000");
set_field(msg, RepurchaseRate_25, Instrument_25);
  set_field(msg, FIX::RepurchaseTerm{1376349457}, Instrument_25);
  set_field(msg, FIX::RestructuringType{"STRING_MR"}, Instrument_25);
  set_field(msg, FIX::SecurityDesc{"STRING_1462627167"}, Instrument_25);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_554302108"}, Instrument_25);
  set_field(msg, FIX::SecurityGroup{"STRING_1928144438"}, Instrument_25);
  set_field(msg, FIX::SecurityID{"STRING_1294428564"}, Instrument_25);
  set_field(msg, FIX::SecurityIDSource{"STRING_M"}, Instrument_25);
  set_field(msg, FIX::SecurityStatus{"STRING_1"}, Instrument_25);
  set_field(msg, FIX::SecuritySubType{"STRING_1063114567"}, Instrument_25);
  set_field(msg, FIX::SecurityType{"STRING_SECLOAN"}, Instrument_25);
  set_field(msg, FIX::Seniority{"STRING_SR"}, Instrument_25);
  set_field(msg, FIX::SettlMethod{'C'}, Instrument_25);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_2109042704"}, Instrument_25);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_419148549"}, Instrument_25);
  set_field(msg, FIX::StrikeCurrency{"USD"}, Instrument_25);
  FIX::StrikeMultiplier StrikeMultiplier_25;
  StrikeMultiplier_25.setString("13699352");
set_field(msg, StrikeMultiplier_25, Instrument_25);
  FIX::StrikePrice StrikePrice_25;
  StrikePrice_25.setString("7466861");
set_field(msg, StrikePrice_25, Instrument_25);
  set_field(msg, FIX::StrikePriceBoundaryMethod{5}, Instrument_25);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_25;
  StrikePriceBoundaryPrecision_25.setString("86.900000");
set_field(msg, StrikePriceBoundaryPrecision_25, Instrument_25);
  set_field(msg, FIX::StrikePriceDeterminationMethod{1}, Instrument_25);
  FIX::StrikeValue StrikeValue_25;
  StrikeValue_25.setString("19144805");
set_field(msg, StrikeValue_25, Instrument_25);
  set_field(msg, FIX::Symbol{"STRING_314914474"}, Instrument_25);
  set_field(msg, FIX::SymbolSfx{"STRING_CD"}, Instrument_25);
  set_field(msg, FIX::TimeUnit{"STRING_Min"}, Instrument_25);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{1}, Instrument_25);
  set_field(msg, FIX::UnitOfMeasure{"STRING_MMBtu"}, Instrument_25);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_25;
  UnitOfMeasureQty_25.setString("4665803");
set_field(msg, UnitOfMeasureQty_25, Instrument_25);
  set_field(msg, FIX::ValuationMethod{"STRING_CDS"}, Instrument_25);
  all_values.push_back(Instrument_25);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::ExecutionReport::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_51;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_51);
    FIX::ComplexEventPrice ComplexEventPrice_51;
    ComplexEventPrice_51.setString("12997811");
set_field(noComplexEvents_0_0, ComplexEventPrice_51, ComplexEvents_NoComplexEvents_51);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{4}, ComplexEvents_NoComplexEvents_51);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_51;
    ComplexEventPriceBoundaryPrecision_51.setString("25.310000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_51, ComplexEvents_NoComplexEvents_51);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_51);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{4}, ComplexEvents_NoComplexEvents_51);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_51;
    ComplexOptPayoutAmount_51.setString("19433210");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_51, ComplexEvents_NoComplexEvents_51);
    all_values.push_back(ComplexEvents_NoComplexEvents_51);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::ExecutionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_107;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(7, 59, 16, 3, 12, 2013)}, ComplexEventDates_NoComplexEventDates_107);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(10, 58, 24, 19, 9, 2002)}, ComplexEventDates_NoComplexEventDates_107);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_107);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::ExecutionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_212;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(14, 6, 31)}, ComplexEventTimes_NoComplexEventTimes_212);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(13, 21, 35)}, ComplexEventTimes_NoComplexEventTimes_212);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_212);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::ExecutionReport::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_52;
    set_field(noComplexEvents_0_1, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_52);
    FIX::ComplexEventPrice ComplexEventPrice_52;
    ComplexEventPrice_52.setString("20391952");
set_field(noComplexEvents_0_1, ComplexEventPrice_52, ComplexEvents_NoComplexEvents_52);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceBoundaryMethod{4}, ComplexEvents_NoComplexEvents_52);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_52;
    ComplexEventPriceBoundaryPrecision_52.setString("43.960000");
set_field(noComplexEvents_0_1, ComplexEventPriceBoundaryPrecision_52, ComplexEvents_NoComplexEvents_52);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_52);
    set_field(noComplexEvents_0_1, FIX::ComplexEventType{3}, ComplexEvents_NoComplexEvents_52);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_52;
    ComplexOptPayoutAmount_52.setString("5329918");
set_field(noComplexEvents_0_1, ComplexOptPayoutAmount_52, ComplexEvents_NoComplexEvents_52);
    all_values.push_back(ComplexEvents_NoComplexEvents_52);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::ExecutionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_108;
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(19, 51, 27, 6, 8, 2004)}, ComplexEventDates_NoComplexEventDates_108);
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(17, 50, 49, 16, 11, 2007)}, ComplexEventDates_NoComplexEventDates_108);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_108);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::ExecutionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_213;
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(8, 6, 4)}, ComplexEventTimes_NoComplexEventTimes_213);
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(12, 25, 32)}, ComplexEventTimes_NoComplexEventTimes_213);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_213);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_109;
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(17, 38, 42, 13, 5, 2006)}, ComplexEventDates_NoComplexEventDates_109);
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(4, 17, 9, 23, 4, 2016)}, ComplexEventDates_NoComplexEventDates_109);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_109);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::ExecutionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_214;
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(1, 58, 21)}, ComplexEventTimes_NoComplexEventTimes_214);
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(9, 34, 50)}, ComplexEventTimes_NoComplexEventTimes_214);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_214);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_215;
        set_field(noComplexEventTimes_1_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(10, 48, 26)}, ComplexEventTimes_NoComplexEventTimes_215);
        set_field(noComplexEventTimes_1_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(0, 43, 12)}, ComplexEventTimes_NoComplexEventTimes_215);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_215);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
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
    multiset<string> EvntGrp_NoEvents_56;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_1440891888"}, EvntGrp_NoEvents_56);
    FIX::EventPx EventPx_56;
    EventPx_56.setString("19766872");
set_field(noEvents_0_0, EventPx_56, EvntGrp_NoEvents_56);
    set_field(noEvents_0_0, FIX::EventText{"STRING_767199808"}, EvntGrp_NoEvents_56);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(11, 26, 40, 23, 8, 2011)}, EvntGrp_NoEvents_56);
    set_field(noEvents_0_0, FIX::EventType{3}, EvntGrp_NoEvents_56);
    all_values.push_back(EvntGrp_NoEvents_56);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::ExecutionReport::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_47;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_1849674070"}, InstrumentParties_NoInstrumentParties_47);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_47);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{741973650}, InstrumentParties_NoInstrumentParties_47);
    all_values.push_back(InstrumentParties_NoInstrumentParties_47);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::ExecutionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_94;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_2004336377"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_94);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{1523517291}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_94);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_94);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_95;
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubID{"STRING_1049580109"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_95);
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubIDType{1917198546}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_95);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_95);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::ExecutionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_96;
      set_field(noInstrumentPartySubIDs_0_1_2, FIX::InstrumentPartySubID{"STRING_1011464117"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_96);
      set_field(noInstrumentPartySubIDs_0_1_2, FIX::InstrumentPartySubIDType{1572026979}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_96);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_96);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::ExecutionReport::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_48;
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyID{"STRING_1794317308"}, InstrumentParties_NoInstrumentParties_48);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_48);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyRole{1787616088}, InstrumentParties_NoInstrumentParties_48);
    all_values.push_back(InstrumentParties_NoInstrumentParties_48);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::ExecutionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_97;
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubID{"STRING_1975515212"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_97);
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubIDType{450860288}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_97);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_97);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_98;
      set_field(noInstrumentPartySubIDs_1_1_1, FIX::InstrumentPartySubID{"STRING_333718589"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_98);
      set_field(noInstrumentPartySubIDs_1_1_1, FIX::InstrumentPartySubIDType{1279024536}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_98);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_98);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::ExecutionReport::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_47;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_1774610477"}, SecAltIDGrp_NoSecurityAltID_47);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_1108228099"}, SecAltIDGrp_NoSecurityAltID_47);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_47);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::ExecutionReport::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_48;
    set_field(noSecurityAltID_0_1, FIX::SecurityAltID{"STRING_564704902"}, SecAltIDGrp_NoSecurityAltID_48);
    set_field(noSecurityAltID_0_1, FIX::SecurityAltIDSource{"STRING_2077694671"}, SecAltIDGrp_NoSecurityAltID_48);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_48);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::ExecutionReport::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_49;
    set_field(noSecurityAltID_0_2, FIX::SecurityAltID{"STRING_1594024854"}, SecAltIDGrp_NoSecurityAltID_49);
    set_field(noSecurityAltID_0_2, FIX::SecurityAltIDSource{"STRING_1137967908"}, SecAltIDGrp_NoSecurityAltID_49);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_49);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_50;
  set_field(msg, FIX::SecurityXML{"XMLDATA_1597277403"}, SecurityXML_50);
  set_field(msg, FIX::SecurityXMLLen{804683245}, SecurityXML_50);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_761754323"}, SecurityXML_50);
  all_values.push_back(SecurityXML_50);
  all_compo_names.insert("..");

  // MiscFeesGrp
  // Group MiscFeesGrp.NoMiscFees
  {
    FIX50SP2::ExecutionReport::NoMiscFees noMiscFees_0_0;
    // MiscFeesGrp.NoMiscFees
    multiset<string> MiscFeesGrp_NoMiscFees_19;
    FIX::MiscFeeAmt MiscFeeAmt_19;
    MiscFeeAmt_19.setString("15459924");
set_field(noMiscFees_0_0, MiscFeeAmt_19, MiscFeesGrp_NoMiscFees_19);
    set_field(noMiscFees_0_0, FIX::MiscFeeBasis{1}, MiscFeesGrp_NoMiscFees_19);
    set_field(noMiscFees_0_0, FIX::MiscFeeCurr{"GBP"}, MiscFeesGrp_NoMiscFees_19);
    set_field(noMiscFees_0_0, FIX::MiscFeeType{"STRING_14"}, MiscFeesGrp_NoMiscFees_19);
    all_values.push_back(MiscFeesGrp_NoMiscFees_19);
    all_compo_names.insert("...NoMiscFees");

    msg.addGroup(noMiscFees_0_0);
  }
  // OrderQtyData
  multiset<string> OrderQtyData_5;
  FIX::CashOrderQty CashOrderQty_5;
  CashOrderQty_5.setString("14297396");
set_field(msg, CashOrderQty_5, OrderQtyData_5);
  FIX::OrderPercent OrderPercent_5;
  OrderPercent_5.setString("56.070000");
set_field(msg, OrderPercent_5, OrderQtyData_5);
  FIX::OrderQty OrderQty_13;
  OrderQty_13.setString("5406720");
set_field(msg, OrderQty_13, OrderQtyData_5);
  set_field(msg, FIX::RoundingDirection{'2'}, OrderQtyData_5);
  FIX::RoundingModulus RoundingModulus_5;
  RoundingModulus_5.setString("6695605");
set_field(msg, RoundingModulus_5, OrderQtyData_5);
  all_values.push_back(OrderQtyData_5);
  all_compo_names.insert(".");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::ExecutionReport::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_45;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_1903863119"}, Parties_NoPartyIDs_45);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'B'}, Parties_NoPartyIDs_45);
    set_field(noPartyIDs_0_0, FIX::PartyRole{17}, Parties_NoPartyIDs_45);
    all_values.push_back(Parties_NoPartyIDs_45);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::ExecutionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_95;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_620585571"}, PtysSubGrp_NoPartySubIDs_95);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{23}, PtysSubGrp_NoPartySubIDs_95);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_95);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_96;
      set_field(noPartySubIDs_0_1_1, FIX::PartySubID{"STRING_1994855848"}, PtysSubGrp_NoPartySubIDs_96);
      set_field(noPartySubIDs_0_1_1, FIX::PartySubIDType{30}, PtysSubGrp_NoPartySubIDs_96);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_96);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::ExecutionReport::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_46;
    set_field(noPartyIDs_0_1, FIX::PartyID{"STRING_1564047868"}, Parties_NoPartyIDs_46);
    set_field(noPartyIDs_0_1, FIX::PartyIDSource{'G'}, Parties_NoPartyIDs_46);
    set_field(noPartyIDs_0_1, FIX::PartyRole{43}, Parties_NoPartyIDs_46);
    all_values.push_back(Parties_NoPartyIDs_46);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::ExecutionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_97;
      set_field(noPartySubIDs_1_1_0, FIX::PartySubID{"STRING_209582197"}, PtysSubGrp_NoPartySubIDs_97);
      set_field(noPartySubIDs_1_1_0, FIX::PartySubIDType{15}, PtysSubGrp_NoPartySubIDs_97);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_97);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::ExecutionReport::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_47;
    set_field(noPartyIDs_0_2, FIX::PartyID{"STRING_2118817173"}, Parties_NoPartyIDs_47);
    set_field(noPartyIDs_0_2, FIX::PartyIDSource{'D'}, Parties_NoPartyIDs_47);
    set_field(noPartyIDs_0_2, FIX::PartyRole{46}, Parties_NoPartyIDs_47);
    all_values.push_back(Parties_NoPartyIDs_47);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::ExecutionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_98;
      set_field(noPartySubIDs_2_1_0, FIX::PartySubID{"STRING_2109304429"}, PtysSubGrp_NoPartySubIDs_98);
      set_field(noPartySubIDs_2_1_0, FIX::PartySubIDType{7}, PtysSubGrp_NoPartySubIDs_98);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_98);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_99;
      set_field(noPartySubIDs_2_1_1, FIX::PartySubID{"STRING_174525610"}, PtysSubGrp_NoPartySubIDs_99);
      set_field(noPartySubIDs_2_1_1, FIX::PartySubIDType{7}, PtysSubGrp_NoPartySubIDs_99);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_99);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_1);
    }
    {
      FIX50SP2::ExecutionReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_100;
      set_field(noPartySubIDs_2_1_2, FIX::PartySubID{"STRING_1401522432"}, PtysSubGrp_NoPartySubIDs_100);
      set_field(noPartySubIDs_2_1_2, FIX::PartySubIDType{22}, PtysSubGrp_NoPartySubIDs_100);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_100);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_2);
    }
    msg.addGroup(noPartyIDs_0_2);
  }
  // PegInstructions
  multiset<string> PegInstructions_1;
  set_field(msg, FIX::PegLimitType{2}, PegInstructions_1);
  set_field(msg, FIX::PegMoveType{1}, PegInstructions_1);
  set_field(msg, FIX::PegOffsetType{3}, PegInstructions_1);
  FIX::PegOffsetValue PegOffsetValue_1;
  PegOffsetValue_1.setString("20897959");
set_field(msg, PegOffsetValue_1, PegInstructions_1);
  set_field(msg, FIX::PegPriceType{4}, PegInstructions_1);
  set_field(msg, FIX::PegRoundDirection{1}, PegInstructions_1);
  set_field(msg, FIX::PegScope{1}, PegInstructions_1);
  set_field(msg, FIX::PegSecurityDesc{"STRING_771994074"}, PegInstructions_1);
  set_field(msg, FIX::PegSecurityID{"STRING_955835117"}, PegInstructions_1);
  set_field(msg, FIX::PegSecurityIDSource{"STRING_1951440188"}, PegInstructions_1);
  set_field(msg, FIX::PegSymbol{"STRING_168505986"}, PegInstructions_1);
  all_values.push_back(PegInstructions_1);
  all_compo_names.insert(".");

  // PreAllocGrp
  // Group PreAllocGrp.NoAllocs
  {
    FIX50SP2::ExecutionReport::NoAllocs noAllocs_0_0;
    // PreAllocGrp.NoAllocs
    multiset<string> PreAllocGrp_NoAllocs_3;
    set_field(noAllocs_0_0, FIX::AllocAccount{"STRING_88979872"}, PreAllocGrp_NoAllocs_3);
    set_field(noAllocs_0_0, FIX::AllocAcctIDSource{15878186}, PreAllocGrp_NoAllocs_3);
    FIX::AllocQty AllocQty_14;
    AllocQty_14.setString("3832412");
set_field(noAllocs_0_0, AllocQty_14, PreAllocGrp_NoAllocs_3);
    set_field(noAllocs_0_0, FIX::AllocSettlCurrency{"USD"}, PreAllocGrp_NoAllocs_3);
    set_field(noAllocs_0_0, FIX::IndividualAllocID{"STRING_964672189"}, PreAllocGrp_NoAllocs_3);
    all_values.push_back(PreAllocGrp_NoAllocs_3);
    all_compo_names.insert("...NoAllocs");

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::ExecutionReport::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_49;
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyID{"STRING_2017821325"}, NestedParties_NoNestedPartyIDs_49);
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_49);
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyRole{1669938}, NestedParties_NoNestedPartyIDs_49);
      all_values.push_back(NestedParties_NoNestedPartyIDs_49);
      all_compo_names.insert("...NoAllocs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::ExecutionReport::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_107;
        set_field(noNestedPartySubIDs_0_0_2_0, FIX::NestedPartySubID{"STRING_1437749971"}, NstdPtysSubGrp_NoNestedPartySubIDs_107);
        set_field(noNestedPartySubIDs_0_0_2_0, FIX::NestedPartySubIDType{777686708}, NstdPtysSubGrp_NoNestedPartySubIDs_107);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_107);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_108;
        set_field(noNestedPartySubIDs_0_0_2_1, FIX::NestedPartySubID{"STRING_1179708564"}, NstdPtysSubGrp_NoNestedPartySubIDs_108);
        set_field(noNestedPartySubIDs_0_0_2_1, FIX::NestedPartySubIDType{1194392036}, NstdPtysSubGrp_NoNestedPartySubIDs_108);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_108);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_1);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_50;
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyID{"STRING_952212318"}, NestedParties_NoNestedPartyIDs_50);
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_50);
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyRole{448430821}, NestedParties_NoNestedPartyIDs_50);
      all_values.push_back(NestedParties_NoNestedPartyIDs_50);
      all_compo_names.insert("...NoAllocs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::ExecutionReport::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_109;
        set_field(noNestedPartySubIDs_0_1_2_0, FIX::NestedPartySubID{"STRING_965834328"}, NstdPtysSubGrp_NoNestedPartySubIDs_109);
        set_field(noNestedPartySubIDs_0_1_2_0, FIX::NestedPartySubIDType{1132209284}, NstdPtysSubGrp_NoNestedPartySubIDs_109);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_109);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_110;
        set_field(noNestedPartySubIDs_0_1_2_1, FIX::NestedPartySubID{"STRING_2139611253"}, NstdPtysSubGrp_NoNestedPartySubIDs_110);
        set_field(noNestedPartySubIDs_0_1_2_1, FIX::NestedPartySubIDType{908146605}, NstdPtysSubGrp_NoNestedPartySubIDs_110);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_110);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_1);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_1);
    }
    msg.addGroup(noAllocs_0_0);
  }
  {
    FIX50SP2::ExecutionReport::NoAllocs noAllocs_0_1;
    // PreAllocGrp.NoAllocs
    multiset<string> PreAllocGrp_NoAllocs_4;
    set_field(noAllocs_0_1, FIX::AllocAccount{"STRING_340239"}, PreAllocGrp_NoAllocs_4);
    set_field(noAllocs_0_1, FIX::AllocAcctIDSource{631568557}, PreAllocGrp_NoAllocs_4);
    FIX::AllocQty AllocQty_15;
    AllocQty_15.setString("2551113");
set_field(noAllocs_0_1, AllocQty_15, PreAllocGrp_NoAllocs_4);
    set_field(noAllocs_0_1, FIX::AllocSettlCurrency{"USD"}, PreAllocGrp_NoAllocs_4);
    set_field(noAllocs_0_1, FIX::IndividualAllocID{"STRING_59067918"}, PreAllocGrp_NoAllocs_4);
    all_values.push_back(PreAllocGrp_NoAllocs_4);
    all_compo_names.insert("...NoAllocs");

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::ExecutionReport::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_51;
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyID{"STRING_1016340714"}, NestedParties_NoNestedPartyIDs_51);
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_51);
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyRole{956718485}, NestedParties_NoNestedPartyIDs_51);
      all_values.push_back(NestedParties_NoNestedPartyIDs_51);
      all_compo_names.insert("...NoAllocs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::ExecutionReport::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_111;
        set_field(noNestedPartySubIDs_1_0_2_0, FIX::NestedPartySubID{"STRING_1801075531"}, NstdPtysSubGrp_NoNestedPartySubIDs_111);
        set_field(noNestedPartySubIDs_1_0_2_0, FIX::NestedPartySubIDType{617473966}, NstdPtysSubGrp_NoNestedPartySubIDs_111);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_111);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_112;
        set_field(noNestedPartySubIDs_1_0_2_1, FIX::NestedPartySubID{"STRING_216770456"}, NstdPtysSubGrp_NoNestedPartySubIDs_112);
        set_field(noNestedPartySubIDs_1_0_2_1, FIX::NestedPartySubIDType{1831411944}, NstdPtysSubGrp_NoNestedPartySubIDs_112);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_112);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::ExecutionReport::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_113;
        set_field(noNestedPartySubIDs_1_0_2_2, FIX::NestedPartySubID{"STRING_487811643"}, NstdPtysSubGrp_NoNestedPartySubIDs_113);
        set_field(noNestedPartySubIDs_1_0_2_2, FIX::NestedPartySubIDType{1693084658}, NstdPtysSubGrp_NoNestedPartySubIDs_113);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_113);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_2);
      }
      noAllocs_0_1.addGroup(noNestedPartyIDs_1_1_0);
    }
    msg.addGroup(noAllocs_0_1);
  }
  {
    FIX50SP2::ExecutionReport::NoAllocs noAllocs_0_2;
    // PreAllocGrp.NoAllocs
    multiset<string> PreAllocGrp_NoAllocs_5;
    set_field(noAllocs_0_2, FIX::AllocAccount{"STRING_1833081882"}, PreAllocGrp_NoAllocs_5);
    set_field(noAllocs_0_2, FIX::AllocAcctIDSource{1705699426}, PreAllocGrp_NoAllocs_5);
    FIX::AllocQty AllocQty_16;
    AllocQty_16.setString("9833509");
set_field(noAllocs_0_2, AllocQty_16, PreAllocGrp_NoAllocs_5);
    set_field(noAllocs_0_2, FIX::AllocSettlCurrency{"GBP"}, PreAllocGrp_NoAllocs_5);
    set_field(noAllocs_0_2, FIX::IndividualAllocID{"STRING_30259370"}, PreAllocGrp_NoAllocs_5);
    all_values.push_back(PreAllocGrp_NoAllocs_5);
    all_compo_names.insert("...NoAllocs");

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::ExecutionReport::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_2_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_52;
      set_field(noNestedPartyIDs_2_1_0, FIX::NestedPartyID{"STRING_154634773"}, NestedParties_NoNestedPartyIDs_52);
      set_field(noNestedPartyIDs_2_1_0, FIX::NestedPartyIDSource{'4'}, NestedParties_NoNestedPartyIDs_52);
      set_field(noNestedPartyIDs_2_1_0, FIX::NestedPartyRole{1437744419}, NestedParties_NoNestedPartyIDs_52);
      all_values.push_back(NestedParties_NoNestedPartyIDs_52);
      all_compo_names.insert("...NoAllocs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::ExecutionReport::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_114;
        set_field(noNestedPartySubIDs_2_0_2_0, FIX::NestedPartySubID{"STRING_1610899475"}, NstdPtysSubGrp_NoNestedPartySubIDs_114);
        set_field(noNestedPartySubIDs_2_0_2_0, FIX::NestedPartySubIDType{1429872025}, NstdPtysSubGrp_NoNestedPartySubIDs_114);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_114);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_0.addGroup(noNestedPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_115;
        set_field(noNestedPartySubIDs_2_0_2_1, FIX::NestedPartySubID{"STRING_2028615706"}, NstdPtysSubGrp_NoNestedPartySubIDs_115);
        set_field(noNestedPartySubIDs_2_0_2_1, FIX::NestedPartySubIDType{1611239714}, NstdPtysSubGrp_NoNestedPartySubIDs_115);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_115);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_0.addGroup(noNestedPartySubIDs_2_0_2_1);
      }
      noAllocs_0_2.addGroup(noNestedPartyIDs_2_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_2_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_53;
      set_field(noNestedPartyIDs_2_1_1, FIX::NestedPartyID{"STRING_2061440582"}, NestedParties_NoNestedPartyIDs_53);
      set_field(noNestedPartyIDs_2_1_1, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_53);
      set_field(noNestedPartyIDs_2_1_1, FIX::NestedPartyRole{236090379}, NestedParties_NoNestedPartyIDs_53);
      all_values.push_back(NestedParties_NoNestedPartyIDs_53);
      all_compo_names.insert("...NoAllocs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::ExecutionReport::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_116;
        set_field(noNestedPartySubIDs_2_1_2_0, FIX::NestedPartySubID{"STRING_195311354"}, NstdPtysSubGrp_NoNestedPartySubIDs_116);
        set_field(noNestedPartySubIDs_2_1_2_0, FIX::NestedPartySubIDType{1176930679}, NstdPtysSubGrp_NoNestedPartySubIDs_116);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_116);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_1.addGroup(noNestedPartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_117;
        set_field(noNestedPartySubIDs_2_1_2_1, FIX::NestedPartySubID{"STRING_370217675"}, NstdPtysSubGrp_NoNestedPartySubIDs_117);
        set_field(noNestedPartySubIDs_2_1_2_1, FIX::NestedPartySubIDType{343359144}, NstdPtysSubGrp_NoNestedPartySubIDs_117);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_117);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_1.addGroup(noNestedPartySubIDs_2_1_2_1);
      }
      noAllocs_0_2.addGroup(noNestedPartyIDs_2_1_1);
    }
    msg.addGroup(noAllocs_0_2);
  }
  // RateSource
  // Group RateSource.NoRateSources
  {
    FIX50SP2::ExecutionReport::NoRateSources noRateSources_0_0;
    // RateSource.NoRateSources
    multiset<string> RateSource_NoRateSources_5;
    set_field(noRateSources_0_0, FIX::RateSource{2}, RateSource_NoRateSources_5);
    set_field(noRateSources_0_0, FIX::RateSourceType{0}, RateSource_NoRateSources_5);
    set_field(noRateSources_0_0, FIX::ReferencePage{"STRING_603639482"}, RateSource_NoRateSources_5);
    all_values.push_back(RateSource_NoRateSources_5);
    all_compo_names.insert("...NoRateSources");

    msg.addGroup(noRateSources_0_0);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_10;
  set_field(msg, FIX::BenchmarkCurveCurrency{"USD"}, SpreadOrBenchmarkCurveData_10);
  set_field(msg, FIX::BenchmarkCurveName{"STRING_MuniAAA"}, SpreadOrBenchmarkCurveData_10);
  set_field(msg, FIX::BenchmarkCurvePoint{"STRING_1532171056"}, SpreadOrBenchmarkCurveData_10);
  FIX::BenchmarkPrice BenchmarkPrice_10;
  BenchmarkPrice_10.setString("15139612");
set_field(msg, BenchmarkPrice_10, SpreadOrBenchmarkCurveData_10);
  set_field(msg, FIX::BenchmarkPriceType{649666904}, SpreadOrBenchmarkCurveData_10);
  set_field(msg, FIX::BenchmarkSecurityID{"STRING_368038390"}, SpreadOrBenchmarkCurveData_10);
  set_field(msg, FIX::BenchmarkSecurityIDSource{"STRING_1977246148"}, SpreadOrBenchmarkCurveData_10);
  FIX::Spread Spread_10;
  Spread_10.setString("13875912");
set_field(msg, Spread_10, SpreadOrBenchmarkCurveData_10);
  all_values.push_back(SpreadOrBenchmarkCurveData_10);
  all_compo_names.insert(".");

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::ExecutionReport::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_22;
    set_field(noStipulations_0_0, FIX::StipulationType{"STRING_AUTOREINV"}, Stipulations_NoStipulations_22);
    set_field(noStipulations_0_0, FIX::StipulationValue{"STRING_1542226020"}, Stipulations_NoStipulations_22);
    all_values.push_back(Stipulations_NoStipulations_22);
    all_compo_names.insert("...NoStipulations");

    msg.addGroup(noStipulations_0_0);
  }
  // StrategyParametersGrp
  // Group StrategyParametersGrp.NoStrategyParameters
  {
    FIX50SP2::ExecutionReport::NoStrategyParameters noStrategyParameters_0_0;
    // StrategyParametersGrp.NoStrategyParameters
    multiset<string> StrategyParametersGrp_NoStrategyParameters_1;
    set_field(noStrategyParameters_0_0, FIX::StrategyParameterName{"STRING_535520533"}, StrategyParametersGrp_NoStrategyParameters_1);
    set_field(noStrategyParameters_0_0, FIX::StrategyParameterType{26}, StrategyParametersGrp_NoStrategyParameters_1);
    set_field(noStrategyParameters_0_0, FIX::StrategyParameterValue{"STRING_340403778"}, StrategyParametersGrp_NoStrategyParameters_1);
    all_values.push_back(StrategyParametersGrp_NoStrategyParameters_1);
    all_compo_names.insert("...NoStrategyParameters");

    msg.addGroup(noStrategyParameters_0_0);
  }
  // TrdRegTimestamps
  // Group TrdRegTimestamps.NoTrdRegTimestamps
  {
    FIX50SP2::ExecutionReport::NoTrdRegTimestamps noTrdRegTimestamps_0_0;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_15;
    set_field(noTrdRegTimestamps_0_0, FIX::DeskOrderHandlingInst{"MULTIPLESTRINGVALUE_SCL"}, TrdRegTimestamps_NoTrdRegTimestamps_15);
    set_field(noTrdRegTimestamps_0_0, FIX::DeskType{"STRING_PR"}, TrdRegTimestamps_NoTrdRegTimestamps_15);
    set_field(noTrdRegTimestamps_0_0, FIX::DeskTypeSource{1}, TrdRegTimestamps_NoTrdRegTimestamps_15);
    set_field(noTrdRegTimestamps_0_0, FIX::TrdRegTimestamp{FIX::UTCTIMESTAMP(15, 13, 42, 14, 2, 2012)}, TrdRegTimestamps_NoTrdRegTimestamps_15);
    set_field(noTrdRegTimestamps_0_0, FIX::TrdRegTimestampOrigin{"STRING_1203346419"}, TrdRegTimestamps_NoTrdRegTimestamps_15);
    set_field(noTrdRegTimestamps_0_0, FIX::TrdRegTimestampType{5}, TrdRegTimestamps_NoTrdRegTimestamps_15);
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_15);
    all_compo_names.insert("...NoTrdRegTimestamps");

    msg.addGroup(noTrdRegTimestamps_0_0);
  }
  {
    FIX50SP2::ExecutionReport::NoTrdRegTimestamps noTrdRegTimestamps_0_1;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_16;
    set_field(noTrdRegTimestamps_0_1, FIX::DeskOrderHandlingInst{"MULTIPLESTRINGVALUE_IO"}, TrdRegTimestamps_NoTrdRegTimestamps_16);
    set_field(noTrdRegTimestamps_0_1, FIX::DeskType{"STRING_PF"}, TrdRegTimestamps_NoTrdRegTimestamps_16);
    set_field(noTrdRegTimestamps_0_1, FIX::DeskTypeSource{1}, TrdRegTimestamps_NoTrdRegTimestamps_16);
    set_field(noTrdRegTimestamps_0_1, FIX::TrdRegTimestamp{FIX::UTCTIMESTAMP(3, 17, 36, 0, 4, 2017)}, TrdRegTimestamps_NoTrdRegTimestamps_16);
    set_field(noTrdRegTimestamps_0_1, FIX::TrdRegTimestampOrigin{"STRING_640727883"}, TrdRegTimestamps_NoTrdRegTimestamps_16);
    set_field(noTrdRegTimestamps_0_1, FIX::TrdRegTimestampType{2}, TrdRegTimestamps_NoTrdRegTimestamps_16);
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_16);
    all_compo_names.insert("...NoTrdRegTimestamps");

    msg.addGroup(noTrdRegTimestamps_0_1);
  }
  {
    FIX50SP2::ExecutionReport::NoTrdRegTimestamps noTrdRegTimestamps_0_2;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_17;
    set_field(noTrdRegTimestamps_0_2, FIX::DeskOrderHandlingInst{"MULTIPLESTRINGVALUE_IO"}, TrdRegTimestamps_NoTrdRegTimestamps_17);
    set_field(noTrdRegTimestamps_0_2, FIX::DeskType{"STRING_PR"}, TrdRegTimestamps_NoTrdRegTimestamps_17);
    set_field(noTrdRegTimestamps_0_2, FIX::DeskTypeSource{1}, TrdRegTimestamps_NoTrdRegTimestamps_17);
    set_field(noTrdRegTimestamps_0_2, FIX::TrdRegTimestamp{FIX::UTCTIMESTAMP(0, 28, 1, 20, 5, 2014)}, TrdRegTimestamps_NoTrdRegTimestamps_17);
    set_field(noTrdRegTimestamps_0_2, FIX::TrdRegTimestampOrigin{"STRING_1479612228"}, TrdRegTimestamps_NoTrdRegTimestamps_17);
    set_field(noTrdRegTimestamps_0_2, FIX::TrdRegTimestampType{7}, TrdRegTimestamps_NoTrdRegTimestamps_17);
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_17);
    all_compo_names.insert("...NoTrdRegTimestamps");

    msg.addGroup(noTrdRegTimestamps_0_2);
  }
  // TriggeringInstruction
  multiset<string> TriggeringInstruction_1;
  set_field(msg, FIX::TriggerAction{'2'}, TriggeringInstruction_1);
  FIX::TriggerNewPrice TriggerNewPrice_1;
  TriggerNewPrice_1.setString("600269");
set_field(msg, TriggerNewPrice_1, TriggeringInstruction_1);
  FIX::TriggerNewQty TriggerNewQty_1;
  TriggerNewQty_1.setString("13473690");
set_field(msg, TriggerNewQty_1, TriggeringInstruction_1);
  set_field(msg, FIX::TriggerOrderType{'1'}, TriggeringInstruction_1);
  FIX::TriggerPrice TriggerPrice_1;
  TriggerPrice_1.setString("11312843");
set_field(msg, TriggerPrice_1, TriggeringInstruction_1);
  set_field(msg, FIX::TriggerPriceDirection{'D'}, TriggeringInstruction_1);
  set_field(msg, FIX::TriggerPriceType{'2'}, TriggeringInstruction_1);
  set_field(msg, FIX::TriggerPriceTypeScope{'3'}, TriggeringInstruction_1);
  set_field(msg, FIX::TriggerSecurityDesc{"STRING_62734103"}, TriggeringInstruction_1);
  set_field(msg, FIX::TriggerSecurityID{"STRING_2108192752"}, TriggeringInstruction_1);
  set_field(msg, FIX::TriggerSecurityIDSource{"STRING_801097034"}, TriggeringInstruction_1);
  set_field(msg, FIX::TriggerSymbol{"STRING_813687482"}, TriggeringInstruction_1);
  set_field(msg, FIX::TriggerTradingSessionID{"STRING_410242982"}, TriggeringInstruction_1);
  set_field(msg, FIX::TriggerTradingSessionSubID{"STRING_916662410"}, TriggeringInstruction_1);
  set_field(msg, FIX::TriggerType{'3'}, TriggeringInstruction_1);
  all_values.push_back(TriggeringInstruction_1);
  all_compo_names.insert(".");

  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::ExecutionReport::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_43;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_861990287"}, UnderlyingInstrument_43);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{707552001}, UnderlyingInstrument_43);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_296201629"}, UnderlyingInstrument_43);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{2052577926}, UnderlyingInstrument_43);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_43;
    UnderlyingAdjustedQuantity_43.setString("7430222");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_43, UnderlyingInstrument_43);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_43;
    UnderlyingAllocationPercent_43.setString("59.590000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_43, UnderlyingInstrument_43);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_43;
    UnderlyingAttachmentPoint_43.setString("24.490000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_43, UnderlyingInstrument_43);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_1293703985"}, UnderlyingInstrument_43);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_527354068"}, UnderlyingInstrument_43);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_1027735883"}, UnderlyingInstrument_43);
    FIX::UnderlyingCapValue UnderlyingCapValue_43;
    UnderlyingCapValue_43.setString("932455");
set_field(noUnderlyings_0_0, UnderlyingCapValue_43, UnderlyingInstrument_43);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_43;
    UnderlyingCashAmount_43.setString("6172920");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_43, UnderlyingInstrument_43);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_43);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_43;
    UnderlyingContractMultiplier_43.setString("15728578");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_43, UnderlyingInstrument_43);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{747480196}, UnderlyingInstrument_43);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_517760892"}, UnderlyingInstrument_43);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1632884728"}, UnderlyingInstrument_43);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_43;
    UnderlyingCouponRate_43.setString("92.750000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_43, UnderlyingInstrument_43);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_335347105"}, UnderlyingInstrument_43);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"JPY"}, UnderlyingInstrument_43);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_43;
    UnderlyingCurrentValue_43.setString("13786933");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_43, UnderlyingInstrument_43);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_43;
    UnderlyingDetachmentPoint_43.setString("46.650000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_43, UnderlyingInstrument_43);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_43;
    UnderlyingDirtyPrice_43.setString("4133315");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_43, UnderlyingInstrument_43);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_43;
    UnderlyingEndPrice_43.setString("13394024");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_43, UnderlyingInstrument_43);
    FIX::UnderlyingEndValue UnderlyingEndValue_43;
    UnderlyingEndValue_43.setString("14697916");
set_field(noUnderlyings_0_0, UnderlyingEndValue_43, UnderlyingInstrument_43);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{1227019062}, UnderlyingInstrument_43);
    FIX::UnderlyingFXRate UnderlyingFXRate_43;
    UnderlyingFXRate_43.setString("17496454");
set_field(noUnderlyings_0_0, UnderlyingFXRate_43, UnderlyingInstrument_43);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_43);
    FIX::UnderlyingFactor UnderlyingFactor_43;
    UnderlyingFactor_43.setString("12938431");
set_field(noUnderlyings_0_0, UnderlyingFactor_43, UnderlyingInstrument_43);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{829977076}, UnderlyingInstrument_43);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_1100960749"}, UnderlyingInstrument_43);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_2001395182"}, UnderlyingInstrument_43);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_1126178705"}, UnderlyingInstrument_43);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_1006055027"}, UnderlyingInstrument_43);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_596933790"}, UnderlyingInstrument_43);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1367754665"}, UnderlyingInstrument_43);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_489773828"}, UnderlyingInstrument_43);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_43;
    UnderlyingNotionalPercentageOutstanding_43.setString("77.750000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_43, UnderlyingInstrument_43);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_43);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_43;
    UnderlyingOriginalNotionalPercentageOutstanding_43.setString("97.110000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_43, UnderlyingInstrument_43);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1983883373"}, UnderlyingInstrument_43);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_43;
    UnderlyingPriceUnitOfMeasureQty_43.setString("3649171");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_43, UnderlyingInstrument_43);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{1673644872}, UnderlyingInstrument_43);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{1409257551}, UnderlyingInstrument_43);
    FIX::UnderlyingPx UnderlyingPx_43;
    UnderlyingPx_43.setString("11123973");
set_field(noUnderlyings_0_0, UnderlyingPx_43, UnderlyingInstrument_43);
    FIX::UnderlyingQty UnderlyingQty_43;
    UnderlyingQty_43.setString("439221");
set_field(noUnderlyings_0_0, UnderlyingQty_43, UnderlyingInstrument_43);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_894658631"}, UnderlyingInstrument_43);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1059762929"}, UnderlyingInstrument_43);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_43;
    UnderlyingRepurchaseRate_43.setString("92.220000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_43, UnderlyingInstrument_43);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{1511344081}, UnderlyingInstrument_43);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_1410360405"}, UnderlyingInstrument_43);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_1757962610"}, UnderlyingInstrument_43);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_32555098"}, UnderlyingInstrument_43);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_1823691985"}, UnderlyingInstrument_43);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_949881455"}, UnderlyingInstrument_43);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_1502346797"}, UnderlyingInstrument_43);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_903227399"}, UnderlyingInstrument_43);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_552043282"}, UnderlyingInstrument_43);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_1741317258"}, UnderlyingInstrument_43);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{2}, UnderlyingInstrument_43);
    FIX::UnderlyingStartValue UnderlyingStartValue_43;
    UnderlyingStartValue_43.setString("13820203");
set_field(noUnderlyings_0_0, UnderlyingStartValue_43, UnderlyingInstrument_43);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_694794359"}, UnderlyingInstrument_43);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"USD"}, UnderlyingInstrument_43);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_43;
    UnderlyingStrikePrice_43.setString("17008493");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_43, UnderlyingInstrument_43);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_500432256"}, UnderlyingInstrument_43);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_1728470081"}, UnderlyingInstrument_43);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_43139567"}, UnderlyingInstrument_43);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_243586383"}, UnderlyingInstrument_43);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_43;
    UnderlyingUnitOfMeasureQty_43.setString("14760951");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_43, UnderlyingInstrument_43);
    all_values.push_back(UnderlyingInstrument_43);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::ExecutionReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_90;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_79986108"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_90);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1841012272"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_90);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_90);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::ExecutionReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_87;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_1489243659"}, UnderlyingStipulations_NoUnderlyingStips_87);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_805925926"}, UnderlyingStipulations_NoUnderlyingStips_87);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_87);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_88;
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipType{"STRING_1130732620"}, UnderlyingStipulations_NoUnderlyingStips_88);
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipValue{"STRING_236418643"}, UnderlyingStipulations_NoUnderlyingStips_88);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_88);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    {
      FIX50SP2::ExecutionReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_89;
      set_field(noUnderlyingStips_0_1_2, FIX::UnderlyingStipType{"STRING_1865688855"}, UnderlyingStipulations_NoUnderlyingStips_89);
      set_field(noUnderlyingStips_0_1_2, FIX::UnderlyingStipValue{"STRING_1510001842"}, UnderlyingStipulations_NoUnderlyingStips_89);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_89);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::ExecutionReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_87;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_1128565612"}, UndlyInstrumentParties_NoUndlyInstrumentParties_87);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_87);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{1780317822}, UndlyInstrumentParties_NoUndlyInstrumentParties_87);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_87);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::ExecutionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_170;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_2070362260"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_170);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{1135180971}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_170);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_170);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_88;
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_1708001348"}, UndlyInstrumentParties_NoUndlyInstrumentParties_88);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyIDSource{'4'}, UndlyInstrumentParties_NoUndlyInstrumentParties_88);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyRole{729014581}, UndlyInstrumentParties_NoUndlyInstrumentParties_88);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_88);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::ExecutionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_171;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1856942253"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_171);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{1423808941}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_171);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_171);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::ExecutionReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_89;
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyID{"STRING_1661086745"}, UndlyInstrumentParties_NoUndlyInstrumentParties_89);
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyIDSource{'7'}, UndlyInstrumentParties_NoUndlyInstrumentParties_89);
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyRole{977174679}, UndlyInstrumentParties_NoUndlyInstrumentParties_89);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_89);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::ExecutionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_172;
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1798644103"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_172);
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_0, FIX::UnderlyingInstrumentPartySubIDType{1020314246}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_172);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_172);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

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
    multiset<string> UnderlyingInstrument_44;
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuer{"DATA_257621737"}, UnderlyingInstrument_44);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuerLen{1127255622}, UnderlyingInstrument_44);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDesc{"DATA_433479877"}, UnderlyingInstrument_44);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDescLen{337607845}, UnderlyingInstrument_44);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_44;
    UnderlyingAdjustedQuantity_44.setString("8207842");
set_field(noUnderlyings_0_1, UnderlyingAdjustedQuantity_44, UnderlyingInstrument_44);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_44;
    UnderlyingAllocationPercent_44.setString("3.800000");
set_field(noUnderlyings_0_1, UnderlyingAllocationPercent_44, UnderlyingInstrument_44);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_44;
    UnderlyingAttachmentPoint_44.setString("15.050000");
set_field(noUnderlyings_0_1, UnderlyingAttachmentPoint_44, UnderlyingInstrument_44);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCFICode{"STRING_1626710172"}, UnderlyingInstrument_44);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPProgram{"STRING_503539352"}, UnderlyingInstrument_44);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPRegType{"STRING_2063270148"}, UnderlyingInstrument_44);
    FIX::UnderlyingCapValue UnderlyingCapValue_44;
    UnderlyingCapValue_44.setString("13449153");
set_field(noUnderlyings_0_1, UnderlyingCapValue_44, UnderlyingInstrument_44);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_44;
    UnderlyingCashAmount_44.setString("20135411");
set_field(noUnderlyings_0_1, UnderlyingCashAmount_44, UnderlyingInstrument_44);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_44);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_44;
    UnderlyingContractMultiplier_44.setString("3259973");
set_field(noUnderlyings_0_1, UnderlyingContractMultiplier_44, UnderlyingInstrument_44);
    set_field(noUnderlyings_0_1, FIX::UnderlyingContractMultiplierUnit{986538350}, UnderlyingInstrument_44);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCountryOfIssue{"COUNTRY_1296383398"}, UnderlyingInstrument_44);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1130771293"}, UnderlyingInstrument_44);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_44;
    UnderlyingCouponRate_44.setString("69.620000");
set_field(noUnderlyings_0_1, UnderlyingCouponRate_44, UnderlyingInstrument_44);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCreditRating{"STRING_284080721"}, UnderlyingInstrument_44);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCurrency{"CAN"}, UnderlyingInstrument_44);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_44;
    UnderlyingCurrentValue_44.setString("10130953");
set_field(noUnderlyings_0_1, UnderlyingCurrentValue_44, UnderlyingInstrument_44);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_44;
    UnderlyingDetachmentPoint_44.setString("36.250000");
set_field(noUnderlyings_0_1, UnderlyingDetachmentPoint_44, UnderlyingInstrument_44);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_44;
    UnderlyingDirtyPrice_44.setString("10937974");
set_field(noUnderlyings_0_1, UnderlyingDirtyPrice_44, UnderlyingInstrument_44);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_44;
    UnderlyingEndPrice_44.setString("2894205");
set_field(noUnderlyings_0_1, UnderlyingEndPrice_44, UnderlyingInstrument_44);
    FIX::UnderlyingEndValue UnderlyingEndValue_44;
    UnderlyingEndValue_44.setString("19624803");
set_field(noUnderlyings_0_1, UnderlyingEndValue_44, UnderlyingInstrument_44);
    set_field(noUnderlyings_0_1, FIX::UnderlyingExerciseStyle{1163971484}, UnderlyingInstrument_44);
    FIX::UnderlyingFXRate UnderlyingFXRate_44;
    UnderlyingFXRate_44.setString("12665952");
set_field(noUnderlyings_0_1, UnderlyingFXRate_44, UnderlyingInstrument_44);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_44);
    FIX::UnderlyingFactor UnderlyingFactor_44;
    UnderlyingFactor_44.setString("8151319");
set_field(noUnderlyings_0_1, UnderlyingFactor_44, UnderlyingInstrument_44);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFlowScheduleType{139425873}, UnderlyingInstrument_44);
    set_field(noUnderlyings_0_1, FIX::UnderlyingInstrRegistry{"STRING_86653813"}, UnderlyingInstrument_44);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1942387562"}, UnderlyingInstrument_44);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssuer{"STRING_572905750"}, UnderlyingInstrument_44);
    set_field(noUnderlyings_0_1, FIX::UnderlyingLocaleOfIssue{"STRING_424261659"}, UnderlyingInstrument_44);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_615688160"}, UnderlyingInstrument_44);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_2093196130"}, UnderlyingInstrument_44);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityTime{"TZTIMEONLY_103629516"}, UnderlyingInstrument_44);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_44;
    UnderlyingNotionalPercentageOutstanding_44.setString("46.840000");
set_field(noUnderlyings_0_1, UnderlyingNotionalPercentageOutstanding_44, UnderlyingInstrument_44);
    set_field(noUnderlyings_0_1, FIX::UnderlyingOptAttribute{'4'}, UnderlyingInstrument_44);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_44;
    UnderlyingOriginalNotionalPercentageOutstanding_44.setString("60.160000");
set_field(noUnderlyings_0_1, UnderlyingOriginalNotionalPercentageOutstanding_44, UnderlyingInstrument_44);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1439830063"}, UnderlyingInstrument_44);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_44;
    UnderlyingPriceUnitOfMeasureQty_44.setString("3153093");
set_field(noUnderlyings_0_1, UnderlyingPriceUnitOfMeasureQty_44, UnderlyingInstrument_44);
    set_field(noUnderlyings_0_1, FIX::UnderlyingProduct{1682965240}, UnderlyingInstrument_44);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPutOrCall{1765827406}, UnderlyingInstrument_44);
    FIX::UnderlyingPx UnderlyingPx_44;
    UnderlyingPx_44.setString("13018477");
set_field(noUnderlyings_0_1, UnderlyingPx_44, UnderlyingInstrument_44);
    FIX::UnderlyingQty UnderlyingQty_44;
    UnderlyingQty_44.setString("8318649");
set_field(noUnderlyings_0_1, UnderlyingQty_44, UnderlyingInstrument_44);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_749115051"}, UnderlyingInstrument_44);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepoCollateralSecurityType{"STRING_63781045"}, UnderlyingInstrument_44);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_44;
    UnderlyingRepurchaseRate_44.setString("57.110000");
set_field(noUnderlyings_0_1, UnderlyingRepurchaseRate_44, UnderlyingInstrument_44);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepurchaseTerm{1440404045}, UnderlyingInstrument_44);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRestructuringType{"STRING_1448119902"}, UnderlyingInstrument_44);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityDesc{"STRING_2129041013"}, UnderlyingInstrument_44);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityExchange{"EXCHANGE_1741797670"}, UnderlyingInstrument_44);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityID{"STRING_394433717"}, UnderlyingInstrument_44);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityIDSource{"STRING_270977961"}, UnderlyingInstrument_44);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecuritySubType{"STRING_1556794393"}, UnderlyingInstrument_44);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityType{"STRING_1558405201"}, UnderlyingInstrument_44);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSeniority{"STRING_1537573236"}, UnderlyingInstrument_44);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlMethod{"STRING_1385826470"}, UnderlyingInstrument_44);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_44);
    FIX::UnderlyingStartValue UnderlyingStartValue_44;
    UnderlyingStartValue_44.setString("16769991");
set_field(noUnderlyings_0_1, UnderlyingStartValue_44, UnderlyingInstrument_44);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1472480283"}, UnderlyingInstrument_44);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStrikeCurrency{"USD"}, UnderlyingInstrument_44);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_44;
    UnderlyingStrikePrice_44.setString("18967419");
set_field(noUnderlyings_0_1, UnderlyingStrikePrice_44, UnderlyingInstrument_44);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbol{"STRING_636645567"}, UnderlyingInstrument_44);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbolSfx{"STRING_48133694"}, UnderlyingInstrument_44);
    set_field(noUnderlyings_0_1, FIX::UnderlyingTimeUnit{"STRING_2000371458"}, UnderlyingInstrument_44);
    set_field(noUnderlyings_0_1, FIX::UnderlyingUnitOfMeasure{"STRING_731560251"}, UnderlyingInstrument_44);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_44;
    UnderlyingUnitOfMeasureQty_44.setString("4973855");
set_field(noUnderlyings_0_1, UnderlyingUnitOfMeasureQty_44, UnderlyingInstrument_44);
    all_values.push_back(UnderlyingInstrument_44);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::ExecutionReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_91;
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltID{"STRING_23906666"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_91);
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_812694909"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_91);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_91);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_92;
      set_field(noUnderlyingSecurityAltID_1_1_1, FIX::UnderlyingSecurityAltID{"STRING_1555269066"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_92);
      set_field(noUnderlyingSecurityAltID_1_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1789734073"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_92);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_92);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::ExecutionReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_90;
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipType{"STRING_239650408"}, UnderlyingStipulations_NoUnderlyingStips_90);
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipValue{"STRING_391365476"}, UnderlyingStipulations_NoUnderlyingStips_90);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_90);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_91;
      set_field(noUnderlyingStips_1_1_1, FIX::UnderlyingStipType{"STRING_30840038"}, UnderlyingStipulations_NoUnderlyingStips_91);
      set_field(noUnderlyingStips_1_1_1, FIX::UnderlyingStipValue{"STRING_1355596119"}, UnderlyingStipulations_NoUnderlyingStips_91);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_91);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    {
      FIX50SP2::ExecutionReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_92;
      set_field(noUnderlyingStips_1_1_2, FIX::UnderlyingStipType{"STRING_1831769521"}, UnderlyingStipulations_NoUnderlyingStips_92);
      set_field(noUnderlyingStips_1_1_2, FIX::UnderlyingStipValue{"STRING_1478959940"}, UnderlyingStipulations_NoUnderlyingStips_92);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_92);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::ExecutionReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_90;
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_1426083544"}, UndlyInstrumentParties_NoUndlyInstrumentParties_90);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_90);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyRole{1608131446}, UndlyInstrumentParties_NoUndlyInstrumentParties_90);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_90);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::ExecutionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_173;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1284315211"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_173);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{998221034}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_173);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_173);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_91;
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_73737111"}, UndlyInstrumentParties_NoUndlyInstrumentParties_91);
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_91);
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyRole{527736495}, UndlyInstrumentParties_NoUndlyInstrumentParties_91);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_91);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::ExecutionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_174;
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1531326112"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_174);
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{630157707}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_174);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_174);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_175;
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1295475689"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_175);
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_1, FIX::UnderlyingInstrumentPartySubIDType{20488031}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_175);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_175);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

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
    multiset<string> UnderlyingInstrument_45;
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingIssuer{"DATA_678291402"}, UnderlyingInstrument_45);
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingIssuerLen{1148363500}, UnderlyingInstrument_45);
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingSecurityDesc{"DATA_752048283"}, UnderlyingInstrument_45);
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingSecurityDescLen{1175676931}, UnderlyingInstrument_45);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_45;
    UnderlyingAdjustedQuantity_45.setString("10206673");
set_field(noUnderlyings_0_2, UnderlyingAdjustedQuantity_45, UnderlyingInstrument_45);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_45;
    UnderlyingAllocationPercent_45.setString("49.490000");
set_field(noUnderlyings_0_2, UnderlyingAllocationPercent_45, UnderlyingInstrument_45);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_45;
    UnderlyingAttachmentPoint_45.setString("18.400000");
set_field(noUnderlyings_0_2, UnderlyingAttachmentPoint_45, UnderlyingInstrument_45);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCFICode{"STRING_428452745"}, UnderlyingInstrument_45);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCPProgram{"STRING_418205374"}, UnderlyingInstrument_45);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCPRegType{"STRING_1955430833"}, UnderlyingInstrument_45);
    FIX::UnderlyingCapValue UnderlyingCapValue_45;
    UnderlyingCapValue_45.setString("6681031");
set_field(noUnderlyings_0_2, UnderlyingCapValue_45, UnderlyingInstrument_45);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_45;
    UnderlyingCashAmount_45.setString("8095708");
set_field(noUnderlyings_0_2, UnderlyingCashAmount_45, UnderlyingInstrument_45);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_45);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_45;
    UnderlyingContractMultiplier_45.setString("20236992");
set_field(noUnderlyings_0_2, UnderlyingContractMultiplier_45, UnderlyingInstrument_45);
    set_field(noUnderlyings_0_2, FIX::UnderlyingContractMultiplierUnit{493856724}, UnderlyingInstrument_45);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCountryOfIssue{"COUNTRY_1317747163"}, UnderlyingInstrument_45);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1213369110"}, UnderlyingInstrument_45);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_45;
    UnderlyingCouponRate_45.setString("2.680000");
set_field(noUnderlyings_0_2, UnderlyingCouponRate_45, UnderlyingInstrument_45);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCreditRating{"STRING_1043657173"}, UnderlyingInstrument_45);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCurrency{"USD"}, UnderlyingInstrument_45);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_45;
    UnderlyingCurrentValue_45.setString("1804887");
set_field(noUnderlyings_0_2, UnderlyingCurrentValue_45, UnderlyingInstrument_45);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_45;
    UnderlyingDetachmentPoint_45.setString("79.420000");
set_field(noUnderlyings_0_2, UnderlyingDetachmentPoint_45, UnderlyingInstrument_45);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_45;
    UnderlyingDirtyPrice_45.setString("6815880");
set_field(noUnderlyings_0_2, UnderlyingDirtyPrice_45, UnderlyingInstrument_45);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_45;
    UnderlyingEndPrice_45.setString("16908574");
set_field(noUnderlyings_0_2, UnderlyingEndPrice_45, UnderlyingInstrument_45);
    FIX::UnderlyingEndValue UnderlyingEndValue_45;
    UnderlyingEndValue_45.setString("524907");
set_field(noUnderlyings_0_2, UnderlyingEndValue_45, UnderlyingInstrument_45);
    set_field(noUnderlyings_0_2, FIX::UnderlyingExerciseStyle{80321768}, UnderlyingInstrument_45);
    FIX::UnderlyingFXRate UnderlyingFXRate_45;
    UnderlyingFXRate_45.setString("10746999");
set_field(noUnderlyings_0_2, UnderlyingFXRate_45, UnderlyingInstrument_45);
    set_field(noUnderlyings_0_2, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_45);
    FIX::UnderlyingFactor UnderlyingFactor_45;
    UnderlyingFactor_45.setString("13757974");
set_field(noUnderlyings_0_2, UnderlyingFactor_45, UnderlyingInstrument_45);
    set_field(noUnderlyings_0_2, FIX::UnderlyingFlowScheduleType{1095187936}, UnderlyingInstrument_45);
    set_field(noUnderlyings_0_2, FIX::UnderlyingInstrRegistry{"STRING_1360939899"}, UnderlyingInstrument_45);
    set_field(noUnderlyings_0_2, FIX::UnderlyingIssueDate{"LOCALMKTDATE_376677310"}, UnderlyingInstrument_45);
    set_field(noUnderlyings_0_2, FIX::UnderlyingIssuer{"STRING_1847236219"}, UnderlyingInstrument_45);
    set_field(noUnderlyings_0_2, FIX::UnderlyingLocaleOfIssue{"STRING_389133182"}, UnderlyingInstrument_45);
    set_field(noUnderlyings_0_2, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1397344636"}, UnderlyingInstrument_45);
    set_field(noUnderlyings_0_2, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_475707520"}, UnderlyingInstrument_45);
    set_field(noUnderlyings_0_2, FIX::UnderlyingMaturityTime{"TZTIMEONLY_230021374"}, UnderlyingInstrument_45);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_45;
    UnderlyingNotionalPercentageOutstanding_45.setString("73.810000");
set_field(noUnderlyings_0_2, UnderlyingNotionalPercentageOutstanding_45, UnderlyingInstrument_45);
    set_field(noUnderlyings_0_2, FIX::UnderlyingOptAttribute{'8'}, UnderlyingInstrument_45);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_45;
    UnderlyingOriginalNotionalPercentageOutstanding_45.setString("85.590000");
set_field(noUnderlyings_0_2, UnderlyingOriginalNotionalPercentageOutstanding_45, UnderlyingInstrument_45);
    set_field(noUnderlyings_0_2, FIX::UnderlyingPriceUnitOfMeasure{"STRING_346416887"}, UnderlyingInstrument_45);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_45;
    UnderlyingPriceUnitOfMeasureQty_45.setString("17034837");
set_field(noUnderlyings_0_2, UnderlyingPriceUnitOfMeasureQty_45, UnderlyingInstrument_45);
    set_field(noUnderlyings_0_2, FIX::UnderlyingProduct{2024239430}, UnderlyingInstrument_45);
    set_field(noUnderlyings_0_2, FIX::UnderlyingPutOrCall{222632512}, UnderlyingInstrument_45);
    FIX::UnderlyingPx UnderlyingPx_45;
    UnderlyingPx_45.setString("498568");
set_field(noUnderlyings_0_2, UnderlyingPx_45, UnderlyingInstrument_45);
    FIX::UnderlyingQty UnderlyingQty_45;
    UnderlyingQty_45.setString("11945029");
set_field(noUnderlyings_0_2, UnderlyingQty_45, UnderlyingInstrument_45);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1436001622"}, UnderlyingInstrument_45);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1969797091"}, UnderlyingInstrument_45);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_45;
    UnderlyingRepurchaseRate_45.setString("64.710000");
set_field(noUnderlyings_0_2, UnderlyingRepurchaseRate_45, UnderlyingInstrument_45);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRepurchaseTerm{2110018530}, UnderlyingInstrument_45);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRestructuringType{"STRING_430164353"}, UnderlyingInstrument_45);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityDesc{"STRING_271165207"}, UnderlyingInstrument_45);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityExchange{"EXCHANGE_1634772824"}, UnderlyingInstrument_45);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityID{"STRING_1111752374"}, UnderlyingInstrument_45);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityIDSource{"STRING_1962022647"}, UnderlyingInstrument_45);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecuritySubType{"STRING_1687263613"}, UnderlyingInstrument_45);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityType{"STRING_1192074143"}, UnderlyingInstrument_45);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSeniority{"STRING_889238904"}, UnderlyingInstrument_45);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSettlMethod{"STRING_222428462"}, UnderlyingInstrument_45);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSettlementType{5}, UnderlyingInstrument_45);
    FIX::UnderlyingStartValue UnderlyingStartValue_45;
    UnderlyingStartValue_45.setString("19844268");
set_field(noUnderlyings_0_2, UnderlyingStartValue_45, UnderlyingInstrument_45);
    set_field(noUnderlyings_0_2, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1583368361"}, UnderlyingInstrument_45);
    set_field(noUnderlyings_0_2, FIX::UnderlyingStrikeCurrency{"CHF"}, UnderlyingInstrument_45);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_45;
    UnderlyingStrikePrice_45.setString("19725015");
set_field(noUnderlyings_0_2, UnderlyingStrikePrice_45, UnderlyingInstrument_45);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSymbol{"STRING_46926251"}, UnderlyingInstrument_45);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSymbolSfx{"STRING_12403283"}, UnderlyingInstrument_45);
    set_field(noUnderlyings_0_2, FIX::UnderlyingTimeUnit{"STRING_55039270"}, UnderlyingInstrument_45);
    set_field(noUnderlyings_0_2, FIX::UnderlyingUnitOfMeasure{"STRING_1872723633"}, UnderlyingInstrument_45);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_45;
    UnderlyingUnitOfMeasureQty_45.setString("9063161");
set_field(noUnderlyings_0_2, UnderlyingUnitOfMeasureQty_45, UnderlyingInstrument_45);
    all_values.push_back(UnderlyingInstrument_45);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::ExecutionReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_93;
      set_field(noUnderlyingSecurityAltID_2_1_0, FIX::UnderlyingSecurityAltID{"STRING_71656872"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_93);
      set_field(noUnderlyingSecurityAltID_2_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_462316276"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_93);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_93);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_94;
      set_field(noUnderlyingSecurityAltID_2_1_1, FIX::UnderlyingSecurityAltID{"STRING_2117247260"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_94);
      set_field(noUnderlyingSecurityAltID_2_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_294289384"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_94);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_94);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_1);
    }
    {
      FIX50SP2::ExecutionReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_95;
      set_field(noUnderlyingSecurityAltID_2_1_2, FIX::UnderlyingSecurityAltID{"STRING_512173099"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_95);
      set_field(noUnderlyingSecurityAltID_2_1_2, FIX::UnderlyingSecurityAltIDSource{"STRING_1164266558"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_95);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_95);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::ExecutionReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_93;
      set_field(noUnderlyingStips_2_1_0, FIX::UnderlyingStipType{"STRING_334486542"}, UnderlyingStipulations_NoUnderlyingStips_93);
      set_field(noUnderlyingStips_2_1_0, FIX::UnderlyingStipValue{"STRING_1254943029"}, UnderlyingStipulations_NoUnderlyingStips_93);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_93);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_94;
      set_field(noUnderlyingStips_2_1_1, FIX::UnderlyingStipType{"STRING_1692825888"}, UnderlyingStipulations_NoUnderlyingStips_94);
      set_field(noUnderlyingStips_2_1_1, FIX::UnderlyingStipValue{"STRING_764650895"}, UnderlyingStipulations_NoUnderlyingStips_94);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_94);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_1);
    }
    {
      FIX50SP2::ExecutionReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_95;
      set_field(noUnderlyingStips_2_1_2, FIX::UnderlyingStipType{"STRING_1526108236"}, UnderlyingStipulations_NoUnderlyingStips_95);
      set_field(noUnderlyingStips_2_1_2, FIX::UnderlyingStipValue{"STRING_1180115064"}, UnderlyingStipulations_NoUnderlyingStips_95);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_95);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::ExecutionReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_92;
      set_field(noUndlyInstrumentParties_2_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_1340647235"}, UndlyInstrumentParties_NoUndlyInstrumentParties_92);
      set_field(noUndlyInstrumentParties_2_1_0, FIX::UnderlyingInstrumentPartyIDSource{'7'}, UndlyInstrumentParties_NoUndlyInstrumentParties_92);
      set_field(noUndlyInstrumentParties_2_1_0, FIX::UnderlyingInstrumentPartyRole{920993764}, UndlyInstrumentParties_NoUndlyInstrumentParties_92);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_92);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::ExecutionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_176;
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_942323492"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_176);
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{1341381717}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_176);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_176);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_0);
    }
    {
      FIX50SP2::ExecutionReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_93;
      set_field(noUndlyInstrumentParties_2_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_2066829331"}, UndlyInstrumentParties_NoUndlyInstrumentParties_93);
      set_field(noUndlyInstrumentParties_2_1_1, FIX::UnderlyingInstrumentPartyIDSource{'3'}, UndlyInstrumentParties_NoUndlyInstrumentParties_93);
      set_field(noUndlyInstrumentParties_2_1_1, FIX::UnderlyingInstrumentPartyRole{2138446980}, UndlyInstrumentParties_NoUndlyInstrumentParties_93);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_93);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::ExecutionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_177;
        set_field(noUndlyInstrumentPartySubIDs_2_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_203226101"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_177);
        set_field(noUndlyInstrumentPartySubIDs_2_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{37889584}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_177);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_177);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::ExecutionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_178;
        set_field(noUndlyInstrumentPartySubIDs_2_1_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1615928378"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_178);
        set_field(noUndlyInstrumentPartySubIDs_2_1_2_1, FIX::UnderlyingInstrumentPartySubIDType{258265371}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_178);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_178);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_1);
      }
      {
        FIX50SP2::ExecutionReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_179;
        set_field(noUndlyInstrumentPartySubIDs_2_1_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_1910613217"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_179);
        set_field(noUndlyInstrumentPartySubIDs_2_1_2_2, FIX::UnderlyingInstrumentPartySubIDType{374760908}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_179);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_179);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_2);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_1);
    }
    msg.addGroup(noUnderlyings_0_2);
  }
  // YieldData
  multiset<string> YieldData_5;
  FIX::Yield Yield_5;
  Yield_5.setString("32.000000");
set_field(msg, Yield_5, YieldData_5);
  set_field(msg, FIX::YieldCalcDate{"LOCALMKTDATE_1982270089"}, YieldData_5);
  set_field(msg, FIX::YieldRedemptionDate{"LOCALMKTDATE_837077185"}, YieldData_5);
  FIX::YieldRedemptionPrice YieldRedemptionPrice_5;
  YieldRedemptionPrice_5.setString("3210368");
set_field(msg, YieldRedemptionPrice_5, YieldData_5);
  set_field(msg, FIX::YieldRedemptionPriceType{129075825}, YieldData_5);
  set_field(msg, FIX::YieldType{"STRING_TENDER"}, YieldData_5);
  all_values.push_back(YieldData_5);
  all_compo_names.insert(".");


  xml_element elt;
  converter.fix2fixml(msg, elt);
  BOOST_LOG_TRIVIAL(debug) << "The resulting XML is";
cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
cout << "////////////////////////////////////////////" << endl << endl;

  BOOST_LOG_TRIVIAL(debug) << "Quickfix XML representation is";cout << "////////////////////////////////////////////" << endl;
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
