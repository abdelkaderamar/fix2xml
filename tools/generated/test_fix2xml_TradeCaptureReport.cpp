#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/TradeCaptureReport.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( TradeCaptureReport, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::TradeCaptureReport msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> TradeCaptureReport_0;
  set_field(msg, FIX::AsOfIndicator{'1'}, TradeCaptureReport_0);
  FIX::AvgPx AvgPx_7;
  AvgPx_7.setString("8610752");
set_field(msg, AvgPx_7, TradeCaptureReport_0);
  set_field(msg, FIX::AvgPxIndicator{1}, TradeCaptureReport_0);
  FIX::CalculatedCcyLastQty CalculatedCcyLastQty_1;
  CalculatedCcyLastQty_1.setString("319481");
set_field(msg, CalculatedCcyLastQty_1, TradeCaptureReport_0);
  set_field(msg, FIX::ClearingBusinessDate{"LOCALMKTDATE_935078650"}, TradeCaptureReport_0);
  set_field(msg, FIX::CopyMsgIndicator{true}, TradeCaptureReport_0);
  set_field(msg, FIX::Currency{"GBP"}, TradeCaptureReport_0);
  FIX::CurrencyRatio CurrencyRatio_0;
  CurrencyRatio_0.setString("13365301");
set_field(msg, CurrencyRatio_0, TradeCaptureReport_0);
  FIX::DividendYield DividendYield_1;
  DividendYield_1.setString("57.820000");
set_field(msg, DividendYield_1, TradeCaptureReport_0);
  set_field(msg, FIX::ExecID{"STRING_1796252279"}, TradeCaptureReport_0);
  set_field(msg, FIX::ExecRestatementReason{11}, TradeCaptureReport_0);
  set_field(msg, FIX::ExecType{'E'}, TradeCaptureReport_0);
  FIX::FeeMultiplier FeeMultiplier_0;
  FeeMultiplier_0.setString("12597137");
set_field(msg, FeeMultiplier_0, TradeCaptureReport_0);
  set_field(msg, FIX::FirmTradeID{"STRING_1514331806"}, TradeCaptureReport_0);
  FIX::GrossTradeAmt GrossTradeAmt_5;
  GrossTradeAmt_5.setString("6714523");
set_field(msg, GrossTradeAmt_5, TradeCaptureReport_0);
  FIX::LastForwardPoints LastForwardPoints_1;
  LastForwardPoints_1.setString("15066405");
set_field(msg, LastForwardPoints_1, TradeCaptureReport_0);
  set_field(msg, FIX::LastMkt{"EXCHANGE_872436375"}, TradeCaptureReport_0);
  FIX::LastParPx LastParPx_9;
  LastParPx_9.setString("12572068");
set_field(msg, LastParPx_9, TradeCaptureReport_0);
  FIX::LastPx LastPx_15;
  LastPx_15.setString("2845844");
set_field(msg, LastPx_15, TradeCaptureReport_0);
  FIX::LastQty LastQty_10;
  LastQty_10.setString("16880253");
set_field(msg, LastQty_10, TradeCaptureReport_0);
  set_field(msg, FIX::LastRptRequested{true}, TradeCaptureReport_0);
  FIX::LastSpotRate LastSpotRate_1;
  LastSpotRate_1.setString("2737934");
set_field(msg, LastSpotRate_1, TradeCaptureReport_0);
  FIX::LastSwapPoints LastSwapPoints_1;
  LastSwapPoints_1.setString("10043038");
set_field(msg, LastSwapPoints_1, TradeCaptureReport_0);
  set_field(msg, FIX::LastUpdateTime{FIX::UTCTIMESTAMP(22, 17, 50, 1, 3, 2011)}, TradeCaptureReport_0);
  set_field(msg, FIX::MarketID{"EXCHANGE_1666039337"}, TradeCaptureReport_0);
  set_field(msg, FIX::MarketSegmentID{"STRING_217098698"}, TradeCaptureReport_0);
  set_field(msg, FIX::MatchStatus{'1'}, TradeCaptureReport_0);
  set_field(msg, FIX::MatchType{"STRING_S5"}, TradeCaptureReport_0);
  set_field(msg, FIX::MessageEventSource{"STRING_1152177348"}, TradeCaptureReport_0);
  set_field(msg, FIX::MultiLegReportingType{'3'}, TradeCaptureReport_0);
  set_field(msg, FIX::OrigSecondaryTradeID{"STRING_1135200333"}, TradeCaptureReport_0);
  set_field(msg, FIX::OrigTradeDate{"LOCALMKTDATE_2036426385"}, TradeCaptureReport_0);
  set_field(msg, FIX::OrigTradeHandlingInstr{'1'}, TradeCaptureReport_0);
  set_field(msg, FIX::OrigTradeID{"STRING_1987946115"}, TradeCaptureReport_0);
  set_field(msg, FIX::PreviouslyReported{true}, TradeCaptureReport_0);
  set_field(msg, FIX::PriceType{19}, TradeCaptureReport_0);
  set_field(msg, FIX::PublishTrdIndicator{false}, TradeCaptureReport_0);
  set_field(msg, FIX::QtyType{1}, TradeCaptureReport_0);
  set_field(msg, FIX::RejectText{"STRING_750698382"}, TradeCaptureReport_0);
  set_field(msg, FIX::ReportedPxDiff{true}, TradeCaptureReport_0);
  FIX::RiskFreeRate RiskFreeRate_3;
  RiskFreeRate_3.setString("1565819");
set_field(msg, RiskFreeRate_3, TradeCaptureReport_0);
  FIX::RndPx RndPx_3;
  RndPx_3.setString("16231347");
set_field(msg, RndPx_3, TradeCaptureReport_0);
  set_field(msg, FIX::SecondaryExecID{"STRING_236125678"}, TradeCaptureReport_0);
  set_field(msg, FIX::SecondaryFirmTradeID{"STRING_441166427"}, TradeCaptureReport_0);
  set_field(msg, FIX::SecondaryTradeID{"STRING_1163676439"}, TradeCaptureReport_0);
  set_field(msg, FIX::SecondaryTradeReportID{"STRING_1778169172"}, TradeCaptureReport_0);
  set_field(msg, FIX::SecondaryTradeReportRefID{"STRING_714959878"}, TradeCaptureReport_0);
  set_field(msg, FIX::SecondaryTrdType{20496661}, TradeCaptureReport_0);
  set_field(msg, FIX::SettlCurrency{"GBP"}, TradeCaptureReport_0);
  set_field(msg, FIX::SettlDate{"LOCALMKTDATE_32098218"}, TradeCaptureReport_0);
  set_field(msg, FIX::SettlSessID{"STRING_EOD"}, TradeCaptureReport_0);
  set_field(msg, FIX::SettlSessSubID{"STRING_1784227013"}, TradeCaptureReport_0);
  set_field(msg, FIX::SettlType{"STRING_8"}, TradeCaptureReport_0);
  set_field(msg, FIX::ShortSaleReason{2}, TradeCaptureReport_0);
  set_field(msg, FIX::SubscriptionRequestType{'2'}, TradeCaptureReport_0);
  set_field(msg, FIX::TZTransactTime{"TZTIMESTAMP_1752704002"}, TradeCaptureReport_0);
  set_field(msg, FIX::TierCode{"STRING_1554038772"}, TradeCaptureReport_0);
  set_field(msg, FIX::TotNumTradeReports{853286537}, TradeCaptureReport_0);
  set_field(msg, FIX::TradeDate{"LOCALMKTDATE_757397702"}, TradeCaptureReport_0);
  set_field(msg, FIX::TradeHandlingInstr{'3'}, TradeCaptureReport_0);
  set_field(msg, FIX::TradeID{"STRING_1988486870"}, TradeCaptureReport_0);
  set_field(msg, FIX::TradeLegRefID{"STRING_646340439"}, TradeCaptureReport_0);
  set_field(msg, FIX::TradeLinkID{"STRING_1342726096"}, TradeCaptureReport_0);
  set_field(msg, FIX::TradePublishIndicator{0}, TradeCaptureReport_0);
  set_field(msg, FIX::TradeReportID{"STRING_184051808"}, TradeCaptureReport_0);
  set_field(msg, FIX::TradeReportRefID{"STRING_579092671"}, TradeCaptureReport_0);
  set_field(msg, FIX::TradeReportTransType{3}, TradeCaptureReport_0);
  set_field(msg, FIX::TradeReportType{1}, TradeCaptureReport_0);
  set_field(msg, FIX::TradeRequestID{"STRING_1329791053"}, TradeCaptureReport_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(5, 2, 13, 24, 10, 2009)}, TradeCaptureReport_0);
  set_field(msg, FIX::TransferReason{"STRING_146701566"}, TradeCaptureReport_0);
  set_field(msg, FIX::TrdMatchID{"STRING_1989615262"}, TradeCaptureReport_0);
  set_field(msg, FIX::TrdRptStatus{0}, TradeCaptureReport_0);
  set_field(msg, FIX::TrdSubType{33}, TradeCaptureReport_0);
  set_field(msg, FIX::TrdType{43}, TradeCaptureReport_0);
  set_field(msg, FIX::UnderlyingSettlementDate{"LOCALMKTDATE_1605263946"}, TradeCaptureReport_0);
  set_field(msg, FIX::UnderlyingTradingSessionID{"STRING_1728952128"}, TradeCaptureReport_0);
  set_field(msg, FIX::UnderlyingTradingSessionSubID{"STRING_1409835136"}, TradeCaptureReport_0);
  set_field(msg, FIX::UnsolicitedIndicator{true}, TradeCaptureReport_0);
  set_field(msg, FIX::VenueType{'E'}, TradeCaptureReport_0);
  FIX::Volatility Volatility_1;
  Volatility_1.setString("10150554");
set_field(msg, Volatility_1, TradeCaptureReport_0);
  all_values.push_back(TradeCaptureReport_0);

  all_compo_names.insert("TradeCaptureReport");

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_19;
  set_field(msg, FIX::ApplID{"STRING_1343835241"}, ApplicationSequenceControl_19);
  set_field(msg, FIX::ApplLastSeqNum{1737537719}, ApplicationSequenceControl_19);
  set_field(msg, FIX::ApplResendFlag{false}, ApplicationSequenceControl_19);
  set_field(msg, FIX::ApplSeqNum{1050210788}, ApplicationSequenceControl_19);
  all_values.push_back(ApplicationSequenceControl_19);
  all_compo_names.insert(".");

  // FinancingDetails
  multiset<string> FinancingDetails_29;
  set_field(msg, FIX::AgreementCurrency{"JPY"}, FinancingDetails_29);
  set_field(msg, FIX::AgreementDate{"LOCALMKTDATE_245453236"}, FinancingDetails_29);
  set_field(msg, FIX::AgreementDesc{"STRING_1260006631"}, FinancingDetails_29);
  set_field(msg, FIX::AgreementID{"STRING_455361792"}, FinancingDetails_29);
  set_field(msg, FIX::DeliveryType{3}, FinancingDetails_29);
  set_field(msg, FIX::EndDate{"LOCALMKTDATE_1396422460"}, FinancingDetails_29);
  FIX::MarginRatio MarginRatio_29;
  MarginRatio_29.setString("87.060000");
set_field(msg, MarginRatio_29, FinancingDetails_29);
  set_field(msg, FIX::StartDate{"LOCALMKTDATE_6853313"}, FinancingDetails_29);
  set_field(msg, FIX::TerminationType{4}, FinancingDetails_29);
  all_values.push_back(FinancingDetails_29);
  all_compo_names.insert(".");

  // Instrument
  multiset<string> Instrument_82;
  FIX::AttachmentPoint AttachmentPoint_82;
  AttachmentPoint_82.setString("39.670000");
set_field(msg, AttachmentPoint_82, Instrument_82);
  set_field(msg, FIX::CFICode{"STRING_812295475"}, Instrument_82);
  set_field(msg, FIX::CPProgram{1}, Instrument_82);
  set_field(msg, FIX::CPRegType{"STRING_2006639303"}, Instrument_82);
  FIX::CapPrice CapPrice_82;
  CapPrice_82.setString("6339304");
set_field(msg, CapPrice_82, Instrument_82);
  FIX::ContractMultiplier ContractMultiplier_82;
  ContractMultiplier_82.setString("9928470");
set_field(msg, ContractMultiplier_82, Instrument_82);
  set_field(msg, FIX::ContractMultiplierUnit{1}, Instrument_82);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_476062043"}, Instrument_82);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_1502276156"}, Instrument_82);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_2098065984"}, Instrument_82);
  FIX::CouponRate CouponRate_82;
  CouponRate_82.setString("18.760000");
set_field(msg, CouponRate_82, Instrument_82);
  set_field(msg, FIX::CreditRating{"STRING_960056454"}, Instrument_82);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_1679534464"}, Instrument_82);
  FIX::DetachmentPoint DetachmentPoint_82;
  DetachmentPoint_82.setString("70.120000");
set_field(msg, DetachmentPoint_82, Instrument_82);
  set_field(msg, FIX::EncodedIssuer{"DATA_749852922"}, Instrument_82);
  set_field(msg, FIX::EncodedIssuerLen{416301999}, Instrument_82);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_627698855"}, Instrument_82);
  set_field(msg, FIX::EncodedSecurityDescLen{2093688163}, Instrument_82);
  set_field(msg, FIX::ExerciseStyle{0}, Instrument_82);
  FIX::Factor Factor_82;
  Factor_82.setString("2526684");
set_field(msg, Factor_82, Instrument_82);
  set_field(msg, FIX::FlexProductEligibilityIndicator{false}, Instrument_82);
  set_field(msg, FIX::FlexibleIndicator{true}, Instrument_82);
  FIX::FloorPrice FloorPrice_82;
  FloorPrice_82.setString("5239783");
set_field(msg, FloorPrice_82, Instrument_82);
  set_field(msg, FIX::FlowScheduleType{4}, Instrument_82);
  set_field(msg, FIX::InstrRegistry{"STRING_697419995"}, Instrument_82);
  set_field(msg, FIX::InstrmtAssignmentMethod{'9'}, Instrument_82);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_2066414447"}, Instrument_82);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_2093842455"}, Instrument_82);
  set_field(msg, FIX::Issuer{"STRING_268695235"}, Instrument_82);
  set_field(msg, FIX::ListMethod{0}, Instrument_82);
  set_field(msg, FIX::LocaleOfIssue{"STRING_458115954"}, Instrument_82);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_696109202"}, Instrument_82);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_738079587"}, Instrument_82);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_321333466"}, Instrument_82);
  FIX::MinPriceIncrement MinPriceIncrement_82;
  MinPriceIncrement_82.setString("5552648");
set_field(msg, MinPriceIncrement_82, Instrument_82);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_82;
  MinPriceIncrementAmount_82.setString("13720100");
set_field(msg, MinPriceIncrementAmount_82, Instrument_82);
  set_field(msg, FIX::NTPositionLimit{1314180515}, Instrument_82);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_82;
  NotionalPercentageOutstanding_82.setString("20.790000");
set_field(msg, NotionalPercentageOutstanding_82, Instrument_82);
  set_field(msg, FIX::OptAttribute{'1'}, Instrument_82);
  FIX::OptPayoutAmount OptPayoutAmount_82;
  OptPayoutAmount_82.setString("6689730");
set_field(msg, OptPayoutAmount_82, Instrument_82);
  set_field(msg, FIX::OptPayoutType{3}, Instrument_82);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_82;
  OriginalNotionalPercentageOutstanding_82.setString("2.880000");
set_field(msg, OriginalNotionalPercentageOutstanding_82, Instrument_82);
  set_field(msg, FIX::Pool{"STRING_1629029477"}, Instrument_82);
  set_field(msg, FIX::PositionLimit{43755232}, Instrument_82);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_STD"}, Instrument_82);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_231398752"}, Instrument_82);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_82;
  PriceUnitOfMeasureQty_82.setString("4600572");
set_field(msg, PriceUnitOfMeasureQty_82, Instrument_82);
  set_field(msg, FIX::Product{5}, Instrument_82);
  set_field(msg, FIX::ProductComplex{"STRING_177603267"}, Instrument_82);
  set_field(msg, FIX::PutOrCall{0}, Instrument_82);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_543890907"}, Instrument_82);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_1174018571"}, Instrument_82);
  FIX::RepurchaseRate RepurchaseRate_82;
  RepurchaseRate_82.setString("3.140000");
set_field(msg, RepurchaseRate_82, Instrument_82);
  set_field(msg, FIX::RepurchaseTerm{1067869292}, Instrument_82);
  set_field(msg, FIX::RestructuringType{"STRING_MM"}, Instrument_82);
  set_field(msg, FIX::SecurityDesc{"STRING_601246661"}, Instrument_82);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_2047209469"}, Instrument_82);
  set_field(msg, FIX::SecurityGroup{"STRING_187334261"}, Instrument_82);
  set_field(msg, FIX::SecurityID{"STRING_547605468"}, Instrument_82);
  set_field(msg, FIX::SecurityIDSource{"STRING_D"}, Instrument_82);
  set_field(msg, FIX::SecurityStatus{"STRING_2"}, Instrument_82);
  set_field(msg, FIX::SecuritySubType{"STRING_1005721422"}, Instrument_82);
  set_field(msg, FIX::SecurityType{"STRING_PN"}, Instrument_82);
  set_field(msg, FIX::Seniority{"STRING_SB"}, Instrument_82);
  set_field(msg, FIX::SettlMethod{'C'}, Instrument_82);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_1419795115"}, Instrument_82);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_75724329"}, Instrument_82);
  set_field(msg, FIX::StrikeCurrency{"CAN"}, Instrument_82);
  FIX::StrikeMultiplier StrikeMultiplier_82;
  StrikeMultiplier_82.setString("19237963");
set_field(msg, StrikeMultiplier_82, Instrument_82);
  FIX::StrikePrice StrikePrice_82;
  StrikePrice_82.setString("11627247");
set_field(msg, StrikePrice_82, Instrument_82);
  set_field(msg, FIX::StrikePriceBoundaryMethod{4}, Instrument_82);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_82;
  StrikePriceBoundaryPrecision_82.setString("66.770000");
set_field(msg, StrikePriceBoundaryPrecision_82, Instrument_82);
  set_field(msg, FIX::StrikePriceDeterminationMethod{1}, Instrument_82);
  FIX::StrikeValue StrikeValue_82;
  StrikeValue_82.setString("3888931");
set_field(msg, StrikeValue_82, Instrument_82);
  set_field(msg, FIX::Symbol{"STRING_1638200330"}, Instrument_82);
  set_field(msg, FIX::SymbolSfx{"STRING_CD"}, Instrument_82);
  set_field(msg, FIX::TimeUnit{"STRING_D"}, Instrument_82);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{2}, Instrument_82);
  set_field(msg, FIX::UnitOfMeasure{"STRING_Bu"}, Instrument_82);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_82;
  UnitOfMeasureQty_82.setString("13153637");
set_field(msg, UnitOfMeasureQty_82, Instrument_82);
  set_field(msg, FIX::ValuationMethod{"STRING_FUTDA"}, Instrument_82);
  all_values.push_back(Instrument_82);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::TradeCaptureReport::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_166;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_166);
    FIX::ComplexEventPrice ComplexEventPrice_166;
    ComplexEventPrice_166.setString("13936993");
set_field(noComplexEvents_0_0, ComplexEventPrice_166, ComplexEvents_NoComplexEvents_166);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{4}, ComplexEvents_NoComplexEvents_166);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_166;
    ComplexEventPriceBoundaryPrecision_166.setString("70.560000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_166, ComplexEvents_NoComplexEvents_166);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_166);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{6}, ComplexEvents_NoComplexEvents_166);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_166;
    ComplexOptPayoutAmount_166.setString("2205588");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_166, ComplexEvents_NoComplexEvents_166);
    all_values.push_back(ComplexEvents_NoComplexEvents_166);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::TradeCaptureReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_344;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(10, 56, 29, 22, 4, 2003)}, ComplexEventDates_NoComplexEventDates_344);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(18, 40, 32, 17, 7, 2005)}, ComplexEventDates_NoComplexEventDates_344);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_344);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradeCaptureReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_701;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(1, 36, 21)}, ComplexEventTimes_NoComplexEventTimes_701);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(5, 58, 44)}, ComplexEventTimes_NoComplexEventTimes_701);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_701);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_702;
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(11, 38, 40)}, ComplexEventTimes_NoComplexEventTimes_702);
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(13, 56, 7)}, ComplexEventTimes_NoComplexEventTimes_702);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_702);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_345;
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(22, 3, 23, 24, 12, 2012)}, ComplexEventDates_NoComplexEventDates_345);
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(5, 34, 42, 11, 9, 2011)}, ComplexEventDates_NoComplexEventDates_345);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_345);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradeCaptureReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_703;
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(16, 56, 22)}, ComplexEventTimes_NoComplexEventTimes_703);
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(13, 20, 18)}, ComplexEventTimes_NoComplexEventTimes_703);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_703);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_704;
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(8, 48, 57)}, ComplexEventTimes_NoComplexEventTimes_704);
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(1, 53, 9)}, ComplexEventTimes_NoComplexEventTimes_704);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_704);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_346;
      set_field(noComplexEventDates_0_1_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(15, 12, 10, 7, 12, 2010)}, ComplexEventDates_NoComplexEventDates_346);
      set_field(noComplexEventDates_0_1_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(9, 30, 26, 12, 8, 2017)}, ComplexEventDates_NoComplexEventDates_346);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_346);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradeCaptureReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_705;
        set_field(noComplexEventTimes_0_2_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(10, 52, 41)}, ComplexEventTimes_NoComplexEventTimes_705);
        set_field(noComplexEventTimes_0_2_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(5, 2, 10)}, ComplexEventTimes_NoComplexEventTimes_705);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_705);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_706;
        set_field(noComplexEventTimes_0_2_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(22, 59, 19)}, ComplexEventTimes_NoComplexEventTimes_706);
        set_field(noComplexEventTimes_0_2_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(16, 4, 24)}, ComplexEventTimes_NoComplexEventTimes_706);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_706);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_1);
      }
      {
        FIX50SP2::TradeCaptureReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_707;
        set_field(noComplexEventTimes_0_2_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(7, 29, 41)}, ComplexEventTimes_NoComplexEventTimes_707);
        set_field(noComplexEventTimes_0_2_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(4, 45, 2)}, ComplexEventTimes_NoComplexEventTimes_707);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_707);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::TradeCaptureReport::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_168;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_1456221008"}, EvntGrp_NoEvents_168);
    FIX::EventPx EventPx_168;
    EventPx_168.setString("194589");
set_field(noEvents_0_0, EventPx_168, EvntGrp_NoEvents_168);
    set_field(noEvents_0_0, FIX::EventText{"STRING_1456759185"}, EvntGrp_NoEvents_168);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(14, 33, 38, 0, 6, 2002)}, EvntGrp_NoEvents_168);
    set_field(noEvents_0_0, FIX::EventType{1}, EvntGrp_NoEvents_168);
    all_values.push_back(EvntGrp_NoEvents_168);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::TradeCaptureReport::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_169;
    set_field(noEvents_0_1, FIX::EventDate{"LOCALMKTDATE_728010734"}, EvntGrp_NoEvents_169);
    FIX::EventPx EventPx_169;
    EventPx_169.setString("16090637");
set_field(noEvents_0_1, EventPx_169, EvntGrp_NoEvents_169);
    set_field(noEvents_0_1, FIX::EventText{"STRING_1224407683"}, EvntGrp_NoEvents_169);
    set_field(noEvents_0_1, FIX::EventTime{FIX::UTCTIMESTAMP(12, 34, 47, 19, 7, 2015)}, EvntGrp_NoEvents_169);
    set_field(noEvents_0_1, FIX::EventType{9}, EvntGrp_NoEvents_169);
    all_values.push_back(EvntGrp_NoEvents_169);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::TradeCaptureReport::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_170;
    set_field(noEvents_0_2, FIX::EventDate{"LOCALMKTDATE_228486890"}, EvntGrp_NoEvents_170);
    FIX::EventPx EventPx_170;
    EventPx_170.setString("13888662");
set_field(noEvents_0_2, EventPx_170, EvntGrp_NoEvents_170);
    set_field(noEvents_0_2, FIX::EventText{"STRING_96575257"}, EvntGrp_NoEvents_170);
    set_field(noEvents_0_2, FIX::EventTime{FIX::UTCTIMESTAMP(12, 5, 9, 23, 4, 2005)}, EvntGrp_NoEvents_170);
    set_field(noEvents_0_2, FIX::EventType{13}, EvntGrp_NoEvents_170);
    all_values.push_back(EvntGrp_NoEvents_170);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::TradeCaptureReport::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_159;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_1732564536"}, InstrumentParties_NoInstrumentParties_159);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_159);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{1170764486}, InstrumentParties_NoInstrumentParties_159);
    all_values.push_back(InstrumentParties_NoInstrumentParties_159);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::TradeCaptureReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_325;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_1656478187"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_325);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{2055644263}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_325);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_325);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_326;
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubID{"STRING_126791486"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_326);
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubIDType{1508688139}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_326);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_326);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_327;
      set_field(noInstrumentPartySubIDs_0_1_2, FIX::InstrumentPartySubID{"STRING_636171350"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_327);
      set_field(noInstrumentPartySubIDs_0_1_2, FIX::InstrumentPartySubIDType{1735855188}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_327);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_327);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::TradeCaptureReport::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_160;
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyID{"STRING_585612174"}, InstrumentParties_NoInstrumentParties_160);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyIDSource{'4'}, InstrumentParties_NoInstrumentParties_160);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyRole{1123801096}, InstrumentParties_NoInstrumentParties_160);
    all_values.push_back(InstrumentParties_NoInstrumentParties_160);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::TradeCaptureReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_328;
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubID{"STRING_1517059086"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_328);
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubIDType{500079120}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_328);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_328);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_329;
      set_field(noInstrumentPartySubIDs_1_1_1, FIX::InstrumentPartySubID{"STRING_420845739"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_329);
      set_field(noInstrumentPartySubIDs_1_1_1, FIX::InstrumentPartySubIDType{936114589}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_329);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_329);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::TradeCaptureReport::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_161;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_649332629"}, SecAltIDGrp_NoSecurityAltID_161);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_177497228"}, SecAltIDGrp_NoSecurityAltID_161);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_161);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::TradeCaptureReport::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_162;
    set_field(noSecurityAltID_0_1, FIX::SecurityAltID{"STRING_654812025"}, SecAltIDGrp_NoSecurityAltID_162);
    set_field(noSecurityAltID_0_1, FIX::SecurityAltIDSource{"STRING_1191413580"}, SecAltIDGrp_NoSecurityAltID_162);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_162);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::TradeCaptureReport::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_163;
    set_field(noSecurityAltID_0_2, FIX::SecurityAltID{"STRING_1381988504"}, SecAltIDGrp_NoSecurityAltID_163);
    set_field(noSecurityAltID_0_2, FIX::SecurityAltIDSource{"STRING_408021342"}, SecAltIDGrp_NoSecurityAltID_163);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_163);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_164;
  set_field(msg, FIX::SecurityXML{"XMLDATA_1575812169"}, SecurityXML_164);
  set_field(msg, FIX::SecurityXMLLen{1780372695}, SecurityXML_164);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_1129881177"}, SecurityXML_164);
  all_values.push_back(SecurityXML_164);
  all_compo_names.insert("..");

  // PositionAmountData
  // Group PositionAmountData.NoPosAmt
  {
    FIX50SP2::TradeCaptureReport::NoPosAmt noPosAmt_0_0;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_12;
    FIX::PosAmt PosAmt_12;
    PosAmt_12.setString("507322");
set_field(noPosAmt_0_0, PosAmt_12, PositionAmountData_NoPosAmt_12);
    set_field(noPosAmt_0_0, FIX::PosAmtType{"STRING_SETL"}, PositionAmountData_NoPosAmt_12);
    set_field(noPosAmt_0_0, FIX::PositionCurrency{"STRING_854029006"}, PositionAmountData_NoPosAmt_12);
    all_values.push_back(PositionAmountData_NoPosAmt_12);
    all_compo_names.insert("...NoPosAmt");

    msg.addGroup(noPosAmt_0_0);
  }
  // RootParties
  // Group RootParties.NoRootPartyIDs
  {
    FIX50SP2::TradeCaptureReport::NoRootPartyIDs noRootPartyIDs_0_0;
    // RootParties.NoRootPartyIDs
    multiset<string> RootParties_NoRootPartyIDs_11;
    set_field(noRootPartyIDs_0_0, FIX::RootPartyID{"STRING_184297388"}, RootParties_NoRootPartyIDs_11);
    set_field(noRootPartyIDs_0_0, FIX::RootPartyIDSource{'5'}, RootParties_NoRootPartyIDs_11);
    set_field(noRootPartyIDs_0_0, FIX::RootPartyRole{681524505}, RootParties_NoRootPartyIDs_11);
    all_values.push_back(RootParties_NoRootPartyIDs_11);
    all_compo_names.insert("...NoRootPartyIDs");

    // RootSubParties
    // Group RootSubParties.NoRootPartySubIDs
    {
      FIX50SP2::TradeCaptureReport::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_0;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_23;
      set_field(noRootPartySubIDs_0_1_0, FIX::RootPartySubID{"STRING_680166499"}, RootSubParties_NoRootPartySubIDs_23);
      set_field(noRootPartySubIDs_0_1_0, FIX::RootPartySubIDType{42728996}, RootSubParties_NoRootPartySubIDs_23);
      all_values.push_back(RootSubParties_NoRootPartySubIDs_23);
      all_compo_names.insert("...NoRootPartyIDs...NoRootPartySubIDs");

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_1;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_24;
      set_field(noRootPartySubIDs_0_1_1, FIX::RootPartySubID{"STRING_728629353"}, RootSubParties_NoRootPartySubIDs_24);
      set_field(noRootPartySubIDs_0_1_1, FIX::RootPartySubIDType{268538040}, RootSubParties_NoRootPartySubIDs_24);
      all_values.push_back(RootSubParties_NoRootPartySubIDs_24);
      all_compo_names.insert("...NoRootPartyIDs...NoRootPartySubIDs");

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_1);
    }
    msg.addGroup(noRootPartyIDs_0_0);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_32;
  set_field(msg, FIX::BenchmarkCurveCurrency{"JPY"}, SpreadOrBenchmarkCurveData_32);
  set_field(msg, FIX::BenchmarkCurveName{"STRING_LIBID"}, SpreadOrBenchmarkCurveData_32);
  set_field(msg, FIX::BenchmarkCurvePoint{"STRING_191367971"}, SpreadOrBenchmarkCurveData_32);
  FIX::BenchmarkPrice BenchmarkPrice_32;
  BenchmarkPrice_32.setString("5106044");
set_field(msg, BenchmarkPrice_32, SpreadOrBenchmarkCurveData_32);
  set_field(msg, FIX::BenchmarkPriceType{1892418256}, SpreadOrBenchmarkCurveData_32);
  set_field(msg, FIX::BenchmarkSecurityID{"STRING_612213710"}, SpreadOrBenchmarkCurveData_32);
  set_field(msg, FIX::BenchmarkSecurityIDSource{"STRING_1446719019"}, SpreadOrBenchmarkCurveData_32);
  FIX::Spread Spread_32;
  Spread_32.setString("3031713");
set_field(msg, Spread_32, SpreadOrBenchmarkCurveData_32);
  all_values.push_back(SpreadOrBenchmarkCurveData_32);
  all_compo_names.insert(".");

  // TrdCapRptSideGrp
  // Group TrdCapRptSideGrp.NoSides
  {
    FIX50SP2::TradeCaptureReport::NoSides noSides_0_0;
    // TrdCapRptSideGrp.NoSides
    multiset<string> TrdCapRptSideGrp_NoSides_0;
    set_field(noSides_0_0, FIX::Account{"STRING_1624216247"}, TrdCapRptSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::AccountType{6}, TrdCapRptSideGrp_NoSides_0);
    FIX::AccruedInterestAmt AccruedInterestAmt_10;
    AccruedInterestAmt_10.setString("3054762");
set_field(noSides_0_0, AccruedInterestAmt_10, TrdCapRptSideGrp_NoSides_0);
    FIX::AccruedInterestRate AccruedInterestRate_5;
    AccruedInterestRate_5.setString("11.040000");
set_field(noSides_0_0, AccruedInterestRate_5, TrdCapRptSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::AcctIDSource{3}, TrdCapRptSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::AggressorIndicator{false}, TrdCapRptSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::AllocID{"STRING_491610151"}, TrdCapRptSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::ComplianceID{"STRING_348402273"}, TrdCapRptSideGrp_NoSides_0);
    FIX::Concession Concession_5;
    Concession_5.setString("10027529");
set_field(noSides_0_0, Concession_5, TrdCapRptSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::CustOrderCapacity{4}, TrdCapRptSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::EncodedText{"DATA_1509418823"}, TrdCapRptSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::EncodedTextLen{1856781918}, TrdCapRptSideGrp_NoSides_0);
    FIX::EndAccruedInterestAmt EndAccruedInterestAmt_10;
    EndAccruedInterestAmt_10.setString("17148723");
set_field(noSides_0_0, EndAccruedInterestAmt_10, TrdCapRptSideGrp_NoSides_0);
    FIX::EndCash EndCash_10;
    EndCash_10.setString("16937162");
set_field(noSides_0_0, EndCash_10, TrdCapRptSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::ExDate{"LOCALMKTDATE_262673283"}, TrdCapRptSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::ExchangeRule{"STRING_248913194"}, TrdCapRptSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::ExchangeSpecialInstructions{"STRING_1786174215"}, TrdCapRptSideGrp_NoSides_0);
    FIX::InterestAtMaturity InterestAtMaturity_5;
    InterestAtMaturity_5.setString("9428397");
set_field(noSides_0_0, InterestAtMaturity_5, TrdCapRptSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::NetGrossInd{1}, TrdCapRptSideGrp_NoSides_0);
    FIX::NetMoney NetMoney_5;
    NetMoney_5.setString("3673199");
set_field(noSides_0_0, NetMoney_5, TrdCapRptSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::NumDaysInterest{1211377823}, TrdCapRptSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::OddLot{false}, TrdCapRptSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::OrderCategory{'6'}, TrdCapRptSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::OrderDelay{456233311}, TrdCapRptSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::OrderDelayUnit{1}, TrdCapRptSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::PositionEffect{'N'}, TrdCapRptSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::PreallocMethod{'0'}, TrdCapRptSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::ProcessCode{'4'}, TrdCapRptSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::RptSeq{1318188714}, TrdCapRptSideGrp_NoSides_0);
    FIX::SettlCurrAmt SettlCurrAmt_9;
    SettlCurrAmt_9.setString("5043392");
set_field(noSides_0_0, SettlCurrAmt_9, TrdCapRptSideGrp_NoSides_0);
    FIX::SettlCurrFxRate SettlCurrFxRate_9;
    SettlCurrFxRate_9.setString("8376277");
set_field(noSides_0_0, SettlCurrFxRate_9, TrdCapRptSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::SettlCurrFxRateCalc{'D'}, TrdCapRptSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::Side{'B'}, TrdCapRptSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::SideCurrency{"CHF"}, TrdCapRptSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::SideExecID{"STRING_680843794"}, TrdCapRptSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::SideFillStationCd{"STRING_876908800"}, TrdCapRptSideGrp_NoSides_0);
    FIX::SideGrossTradeAmt SideGrossTradeAmt_0;
    SideGrossTradeAmt_0.setString("21452525");
set_field(noSides_0_0, SideGrossTradeAmt_0, TrdCapRptSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::SideLastQty{1029246067}, TrdCapRptSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::SideLiquidityInd{1879661712}, TrdCapRptSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::SideMultiLegReportingType{2}, TrdCapRptSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::SideReasonCd{"STRING_391181243"}, TrdCapRptSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::SideSettlCurrency{"CHF"}, TrdCapRptSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::SideTradeReportID{"STRING_2084897454"}, TrdCapRptSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::SideTrdSubTyp{1851633266}, TrdCapRptSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::SolicitedFlag{false}, TrdCapRptSideGrp_NoSides_0);
    FIX::StartCash StartCash_10;
    StartCash_10.setString("17235880");
set_field(noSides_0_0, StartCash_10, TrdCapRptSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::Text{"STRING_646989401"}, TrdCapRptSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::TimeBracket{"STRING_648055365"}, TrdCapRptSideGrp_NoSides_0);
    FIX::TotalTakedown TotalTakedown_5;
    TotalTakedown_5.setString("20909079");
set_field(noSides_0_0, TotalTakedown_5, TrdCapRptSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::TradeAllocIndicator{4}, TrdCapRptSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::TradeInputDevice{"STRING_1568038727"}, TrdCapRptSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::TradeInputSource{"STRING_1451773206"}, TrdCapRptSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::TradingSessionID{"STRING_5"}, TrdCapRptSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::TradingSessionSubID{"STRING_3"}, TrdCapRptSideGrp_NoSides_0);
    all_values.push_back(TrdCapRptSideGrp_NoSides_0);
    all_compo_names.insert("...NoSides");

    // ClrInstGrp
    // Group ClrInstGrp.NoClearingInstructions
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoClearingInstructions noClearingInstructions_0_1_0;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_10;
      set_field(noClearingInstructions_0_1_0, FIX::ClearingInstruction{10}, ClrInstGrp_NoClearingInstructions_10);
      all_values.push_back(ClrInstGrp_NoClearingInstructions_10);
      all_compo_names.insert("...NoSides...NoClearingInstructions");

      noSides_0_0.addGroup(noClearingInstructions_0_1_0);
    }
    // CommissionData
    multiset<string> CommissionData_18;
    set_field(noSides_0_0, FIX::CommCurrency{"EUR"}, CommissionData_18);
    set_field(noSides_0_0, FIX::CommType{'5'}, CommissionData_18);
    FIX::Commission Commission_21;
    Commission_21.setString("9456155");
set_field(noSides_0_0, Commission_21, CommissionData_18);
    set_field(noSides_0_0, FIX::FundRenewWaiv{'N'}, CommissionData_18);
    all_values.push_back(CommissionData_18);
    all_compo_names.insert("...NoSides.");

    // ContAmtGrp
    // Group ContAmtGrp.NoContAmts
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoContAmts noContAmts_0_1_0;
      // ContAmtGrp.NoContAmts
      multiset<string> ContAmtGrp_NoContAmts_1;
      set_field(noContAmts_0_1_0, FIX::ContAmtCurr{"USD"}, ContAmtGrp_NoContAmts_1);
      set_field(noContAmts_0_1_0, FIX::ContAmtType{14}, ContAmtGrp_NoContAmts_1);
      FIX::ContAmtValue ContAmtValue_1;
      ContAmtValue_1.setString("8181447");
set_field(noContAmts_0_1_0, ContAmtValue_1, ContAmtGrp_NoContAmts_1);
      all_values.push_back(ContAmtGrp_NoContAmts_1);
      all_compo_names.insert("...NoSides...NoContAmts");

      noSides_0_0.addGroup(noContAmts_0_1_0);
    }
    // MiscFeesGrp
    // Group MiscFeesGrp.NoMiscFees
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoMiscFees noMiscFees_0_1_0;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_20;
      FIX::MiscFeeAmt MiscFeeAmt_20;
      MiscFeeAmt_20.setString("18975530");
set_field(noMiscFees_0_1_0, MiscFeeAmt_20, MiscFeesGrp_NoMiscFees_20);
      set_field(noMiscFees_0_1_0, FIX::MiscFeeBasis{0}, MiscFeesGrp_NoMiscFees_20);
      set_field(noMiscFees_0_1_0, FIX::MiscFeeCurr{"CHF"}, MiscFeesGrp_NoMiscFees_20);
      set_field(noMiscFees_0_1_0, FIX::MiscFeeType{"STRING_10"}, MiscFeesGrp_NoMiscFees_20);
      all_values.push_back(MiscFeesGrp_NoMiscFees_20);
      all_compo_names.insert("...NoSides...NoMiscFees");

      noSides_0_0.addGroup(noMiscFees_0_1_0);
    }
    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoPartyIDs noPartyIDs_0_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_137;
      set_field(noPartyIDs_0_1_0, FIX::PartyID{"STRING_78664417"}, Parties_NoPartyIDs_137);
      set_field(noPartyIDs_0_1_0, FIX::PartyIDSource{'2'}, Parties_NoPartyIDs_137);
      set_field(noPartyIDs_0_1_0, FIX::PartyRole{16}, Parties_NoPartyIDs_137);
      all_values.push_back(Parties_NoPartyIDs_137);
      all_compo_names.insert("...NoSides...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_283;
        set_field(noPartySubIDs_0_0_2_0, FIX::PartySubID{"STRING_342938121"}, PtysSubGrp_NoPartySubIDs_283);
        set_field(noPartySubIDs_0_0_2_0, FIX::PartySubIDType{8}, PtysSubGrp_NoPartySubIDs_283);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_283);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_0);
      }
      noSides_0_0.addGroup(noPartyIDs_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoPartyIDs noPartyIDs_0_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_138;
      set_field(noPartyIDs_0_1_1, FIX::PartyID{"STRING_1745676733"}, Parties_NoPartyIDs_138);
      set_field(noPartyIDs_0_1_1, FIX::PartyIDSource{'2'}, Parties_NoPartyIDs_138);
      set_field(noPartyIDs_0_1_1, FIX::PartyRole{16}, Parties_NoPartyIDs_138);
      all_values.push_back(Parties_NoPartyIDs_138);
      all_compo_names.insert("...NoSides...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_284;
        set_field(noPartySubIDs_0_1_2_0, FIX::PartySubID{"STRING_220938586"}, PtysSubGrp_NoPartySubIDs_284);
        set_field(noPartySubIDs_0_1_2_0, FIX::PartySubIDType{12}, PtysSubGrp_NoPartySubIDs_284);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_284);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_285;
        set_field(noPartySubIDs_0_1_2_1, FIX::PartySubID{"STRING_225725544"}, PtysSubGrp_NoPartySubIDs_285);
        set_field(noPartySubIDs_0_1_2_1, FIX::PartySubIDType{13}, PtysSubGrp_NoPartySubIDs_285);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_285);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_286;
        set_field(noPartySubIDs_0_1_2_2, FIX::PartySubID{"STRING_357842435"}, PtysSubGrp_NoPartySubIDs_286);
        set_field(noPartySubIDs_0_1_2_2, FIX::PartySubIDType{8}, PtysSubGrp_NoPartySubIDs_286);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_286);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_2);
      }
      noSides_0_0.addGroup(noPartyIDs_0_1_1);
    }
    // SettlDetails
    // Group SettlDetails.NoSettlDetails
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails noSettlDetails_0_1_0;
      // SettlDetails.NoSettlDetails
      multiset<string> SettlDetails_NoSettlDetails_5;
      set_field(noSettlDetails_0_1_0, FIX::SettlObligSource{'2'}, SettlDetails_NoSettlDetails_5);
      all_values.push_back(SettlDetails_NoSettlDetails_5);
      all_compo_names.insert("...NoSides...NoSettlDetails");

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_0_0_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_51;
        set_field(noSettlPartyIDs_0_0_2_0, FIX::SettlPartyID{"STRING_1649310653"}, SettlParties_NoSettlPartyIDs_51);
        set_field(noSettlPartyIDs_0_0_2_0, FIX::SettlPartyIDSource{'1'}, SettlParties_NoSettlPartyIDs_51);
        set_field(noSettlPartyIDs_0_0_2_0, FIX::SettlPartyRole{656087194}, SettlParties_NoSettlPartyIDs_51);
        all_values.push_back(SettlParties_NoSettlPartyIDs_51);
        all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_105;
          set_field(noSettlPartySubIDs_0_0_0_3_0, FIX::SettlPartySubID{"STRING_2062838581"}, SettlPtysSubGrp_NoSettlPartySubIDs_105);
          set_field(noSettlPartySubIDs_0_0_0_3_0, FIX::SettlPartySubIDType{1448884165}, SettlPtysSubGrp_NoSettlPartySubIDs_105);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_105);
          all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_0_2_0.addGroup(noSettlPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_106;
          set_field(noSettlPartySubIDs_0_0_0_3_1, FIX::SettlPartySubID{"STRING_120203321"}, SettlPtysSubGrp_NoSettlPartySubIDs_106);
          set_field(noSettlPartySubIDs_0_0_0_3_1, FIX::SettlPartySubIDType{465677699}, SettlPtysSubGrp_NoSettlPartySubIDs_106);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_106);
          all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_0_2_0.addGroup(noSettlPartySubIDs_0_0_0_3_1);
        }
        noSettlDetails_0_1_0.addGroup(noSettlPartyIDs_0_0_2_0);
      }
      noSides_0_0.addGroup(noSettlDetails_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails noSettlDetails_0_1_1;
      // SettlDetails.NoSettlDetails
      multiset<string> SettlDetails_NoSettlDetails_6;
      set_field(noSettlDetails_0_1_1, FIX::SettlObligSource{'1'}, SettlDetails_NoSettlDetails_6);
      all_values.push_back(SettlDetails_NoSettlDetails_6);
      all_compo_names.insert("...NoSides...NoSettlDetails");

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_0_1_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_52;
        set_field(noSettlPartyIDs_0_1_2_0, FIX::SettlPartyID{"STRING_457476801"}, SettlParties_NoSettlPartyIDs_52);
        set_field(noSettlPartyIDs_0_1_2_0, FIX::SettlPartyIDSource{'2'}, SettlParties_NoSettlPartyIDs_52);
        set_field(noSettlPartyIDs_0_1_2_0, FIX::SettlPartyRole{340118350}, SettlParties_NoSettlPartyIDs_52);
        all_values.push_back(SettlParties_NoSettlPartyIDs_52);
        all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_107;
          set_field(noSettlPartySubIDs_0_1_0_3_0, FIX::SettlPartySubID{"STRING_1724054795"}, SettlPtysSubGrp_NoSettlPartySubIDs_107);
          set_field(noSettlPartySubIDs_0_1_0_3_0, FIX::SettlPartySubIDType{2142370789}, SettlPtysSubGrp_NoSettlPartySubIDs_107);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_107);
          all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_1_2_0.addGroup(noSettlPartySubIDs_0_1_0_3_0);
        }
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_108;
          set_field(noSettlPartySubIDs_0_1_0_3_1, FIX::SettlPartySubID{"STRING_496363642"}, SettlPtysSubGrp_NoSettlPartySubIDs_108);
          set_field(noSettlPartySubIDs_0_1_0_3_1, FIX::SettlPartySubIDType{2021447931}, SettlPtysSubGrp_NoSettlPartySubIDs_108);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_108);
          all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_1_2_0.addGroup(noSettlPartySubIDs_0_1_0_3_1);
        }
        noSettlDetails_0_1_1.addGroup(noSettlPartyIDs_0_1_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_0_1_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_53;
        set_field(noSettlPartyIDs_0_1_2_1, FIX::SettlPartyID{"STRING_1740563874"}, SettlParties_NoSettlPartyIDs_53);
        set_field(noSettlPartyIDs_0_1_2_1, FIX::SettlPartyIDSource{'5'}, SettlParties_NoSettlPartyIDs_53);
        set_field(noSettlPartyIDs_0_1_2_1, FIX::SettlPartyRole{1739396147}, SettlParties_NoSettlPartyIDs_53);
        all_values.push_back(SettlParties_NoSettlPartyIDs_53);
        all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_109;
          set_field(noSettlPartySubIDs_0_1_1_3_0, FIX::SettlPartySubID{"STRING_771123926"}, SettlPtysSubGrp_NoSettlPartySubIDs_109);
          set_field(noSettlPartySubIDs_0_1_1_3_0, FIX::SettlPartySubIDType{1989250774}, SettlPtysSubGrp_NoSettlPartySubIDs_109);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_109);
          all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_1_2_1.addGroup(noSettlPartySubIDs_0_1_1_3_0);
        }
        noSettlDetails_0_1_1.addGroup(noSettlPartyIDs_0_1_2_1);
      }
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_0_1_2_2;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_54;
        set_field(noSettlPartyIDs_0_1_2_2, FIX::SettlPartyID{"STRING_868772062"}, SettlParties_NoSettlPartyIDs_54);
        set_field(noSettlPartyIDs_0_1_2_2, FIX::SettlPartyIDSource{'1'}, SettlParties_NoSettlPartyIDs_54);
        set_field(noSettlPartyIDs_0_1_2_2, FIX::SettlPartyRole{199609561}, SettlParties_NoSettlPartyIDs_54);
        all_values.push_back(SettlParties_NoSettlPartyIDs_54);
        all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_2_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_110;
          set_field(noSettlPartySubIDs_0_1_2_3_0, FIX::SettlPartySubID{"STRING_674711171"}, SettlPtysSubGrp_NoSettlPartySubIDs_110);
          set_field(noSettlPartySubIDs_0_1_2_3_0, FIX::SettlPartySubIDType{1503067539}, SettlPtysSubGrp_NoSettlPartySubIDs_110);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_110);
          all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_1_2_2.addGroup(noSettlPartySubIDs_0_1_2_3_0);
        }
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_2_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_111;
          set_field(noSettlPartySubIDs_0_1_2_3_1, FIX::SettlPartySubID{"STRING_1449504717"}, SettlPtysSubGrp_NoSettlPartySubIDs_111);
          set_field(noSettlPartySubIDs_0_1_2_3_1, FIX::SettlPartySubIDType{176538176}, SettlPtysSubGrp_NoSettlPartySubIDs_111);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_111);
          all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_1_2_2.addGroup(noSettlPartySubIDs_0_1_2_3_1);
        }
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_2_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_112;
          set_field(noSettlPartySubIDs_0_1_2_3_2, FIX::SettlPartySubID{"STRING_600277770"}, SettlPtysSubGrp_NoSettlPartySubIDs_112);
          set_field(noSettlPartySubIDs_0_1_2_3_2, FIX::SettlPartySubIDType{2105591911}, SettlPtysSubGrp_NoSettlPartySubIDs_112);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_112);
          all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_1_2_2.addGroup(noSettlPartySubIDs_0_1_2_3_2);
        }
        noSettlDetails_0_1_1.addGroup(noSettlPartyIDs_0_1_2_2);
      }
      noSides_0_0.addGroup(noSettlDetails_0_1_1);
    }
    // SideTrdRegTS
    // Group SideTrdRegTS.NoSideTrdRegTS
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoSideTrdRegTS noSideTrdRegTS_0_1_0;
      // SideTrdRegTS.NoSideTrdRegTS
      multiset<string> SideTrdRegTS_NoSideTrdRegTS_0;
      set_field(noSideTrdRegTS_0_1_0, FIX::SideTrdRegTimestamp{FIX::UTCTIMESTAMP(12, 51, 22, 16, 12, 2007)}, SideTrdRegTS_NoSideTrdRegTS_0);
      set_field(noSideTrdRegTS_0_1_0, FIX::SideTrdRegTimestampSrc{"STRING_1968534584"}, SideTrdRegTS_NoSideTrdRegTS_0);
      set_field(noSideTrdRegTS_0_1_0, FIX::SideTrdRegTimestampType{1268447733}, SideTrdRegTS_NoSideTrdRegTS_0);
      all_values.push_back(SideTrdRegTS_NoSideTrdRegTS_0);
      all_compo_names.insert("...NoSides...NoSideTrdRegTS");

      noSides_0_0.addGroup(noSideTrdRegTS_0_1_0);
    }
    // Stipulations
    // Group Stipulations.NoStipulations
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoStipulations noStipulations_0_1_0;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_51;
      set_field(noStipulations_0_1_0, FIX::StipulationType{"STRING_AVSIZE"}, Stipulations_NoStipulations_51);
      set_field(noStipulations_0_1_0, FIX::StipulationValue{"STRING_1263334874"}, Stipulations_NoStipulations_51);
      all_values.push_back(Stipulations_NoStipulations_51);
      all_compo_names.insert("...NoSides...NoStipulations");

      noSides_0_0.addGroup(noStipulations_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoStipulations noStipulations_0_1_1;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_52;
      set_field(noStipulations_0_1_1, FIX::StipulationType{"STRING_WAM"}, Stipulations_NoStipulations_52);
      set_field(noStipulations_0_1_1, FIX::StipulationValue{"STRING_1419070015"}, Stipulations_NoStipulations_52);
      all_values.push_back(Stipulations_NoStipulations_52);
      all_compo_names.insert("...NoSides...NoStipulations");

      noSides_0_0.addGroup(noStipulations_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoStipulations noStipulations_0_1_2;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_53;
      set_field(noStipulations_0_1_2, FIX::StipulationType{"STRING_INTERNALPX"}, Stipulations_NoStipulations_53);
      set_field(noStipulations_0_1_2, FIX::StipulationValue{"STRING_491278059"}, Stipulations_NoStipulations_53);
      all_values.push_back(Stipulations_NoStipulations_53);
      all_compo_names.insert("...NoSides...NoStipulations");

      noSides_0_0.addGroup(noStipulations_0_1_2);
    }
    // TradeReportOrderDetail
    multiset<string> TradeReportOrderDetail_0;
    set_field(noSides_0_0, FIX::BookingType{1}, TradeReportOrderDetail_0);
    set_field(noSides_0_0, FIX::ClOrdID{"STRING_1499461618"}, TradeReportOrderDetail_0);
    FIX::CumQty CumQty_3;
    CumQty_3.setString("12624019");
set_field(noSides_0_0, CumQty_3, TradeReportOrderDetail_0);
    set_field(noSides_0_0, FIX::ExecInst{"MULTIPLECHARVALUE_8"}, TradeReportOrderDetail_0);
    set_field(noSides_0_0, FIX::ExpireTime{FIX::UTCTIMESTAMP(18, 2, 5, 1, 10, 2013)}, TradeReportOrderDetail_0);
    FIX::LeavesQty LeavesQty_2;
    LeavesQty_2.setString("13265150");
set_field(noSides_0_0, LeavesQty_2, TradeReportOrderDetail_0);
    set_field(noSides_0_0, FIX::ListID{"STRING_1008220863"}, TradeReportOrderDetail_0);
    set_field(noSides_0_0, FIX::LotType{'3'}, TradeReportOrderDetail_0);
    set_field(noSides_0_0, FIX::OrdStatus{'5'}, TradeReportOrderDetail_0);
    set_field(noSides_0_0, FIX::OrdType{'F'}, TradeReportOrderDetail_0);
    set_field(noSides_0_0, FIX::OrderCapacity{'W'}, TradeReportOrderDetail_0);
    set_field(noSides_0_0, FIX::OrderID{"STRING_392578938"}, TradeReportOrderDetail_0);
    set_field(noSides_0_0, FIX::OrderInputDevice{"STRING_357680320"}, TradeReportOrderDetail_0);
    set_field(noSides_0_0, FIX::OrderRestrictions{"MULTIPLECHARVALUE_A"}, TradeReportOrderDetail_0);
    set_field(noSides_0_0, FIX::OrigCustOrderCapacity{2}, TradeReportOrderDetail_0);
    set_field(noSides_0_0, FIX::OrigOrdModTime{FIX::UTCTIMESTAMP(16, 7, 0, 27, 10, 2017)}, TradeReportOrderDetail_0);
    FIX::Price Price_23;
    Price_23.setString("8603943");
set_field(noSides_0_0, Price_23, TradeReportOrderDetail_0);
    set_field(noSides_0_0, FIX::RefOrdIDReason{2}, TradeReportOrderDetail_0);
    set_field(noSides_0_0, FIX::RefOrderID{"STRING_1673567379"}, TradeReportOrderDetail_0);
    set_field(noSides_0_0, FIX::RefOrderIDSource{'3'}, TradeReportOrderDetail_0);
    set_field(noSides_0_0, FIX::SecondaryClOrdID{"STRING_1913600352"}, TradeReportOrderDetail_0);
    set_field(noSides_0_0, FIX::SecondaryOrderID{"STRING_788485717"}, TradeReportOrderDetail_0);
    FIX::StopPx StopPx_8;
    StopPx_8.setString("5766428");
set_field(noSides_0_0, StopPx_8, TradeReportOrderDetail_0);
    set_field(noSides_0_0, FIX::TimeInForce{'4'}, TradeReportOrderDetail_0);
    set_field(noSides_0_0, FIX::TransBkdTime{FIX::UTCTIMESTAMP(7, 21, 17, 24, 9, 2006)}, TradeReportOrderDetail_0);
    all_values.push_back(TradeReportOrderDetail_0);
    all_compo_names.insert("...NoSides.");

    // DisplayInstruction
    multiset<string> DisplayInstruction_8;
    FIX::DisplayHighQty DisplayHighQty_8;
    DisplayHighQty_8.setString("8976823");
set_field(noSides_0_0, DisplayHighQty_8, DisplayInstruction_8);
    FIX::DisplayLowQty DisplayLowQty_8;
    DisplayLowQty_8.setString("18291203");
set_field(noSides_0_0, DisplayLowQty_8, DisplayInstruction_8);
    set_field(noSides_0_0, FIX::DisplayMethod{'2'}, DisplayInstruction_8);
    FIX::DisplayMinIncr DisplayMinIncr_8;
    DisplayMinIncr_8.setString("2740522");
set_field(noSides_0_0, DisplayMinIncr_8, DisplayInstruction_8);
    FIX::DisplayQty DisplayQty_8;
    DisplayQty_8.setString("104703");
set_field(noSides_0_0, DisplayQty_8, DisplayInstruction_8);
    set_field(noSides_0_0, FIX::DisplayWhen{'2'}, DisplayInstruction_8);
    FIX::RefreshQty RefreshQty_8;
    RefreshQty_8.setString("6317325");
set_field(noSides_0_0, RefreshQty_8, DisplayInstruction_8);
    FIX::SecondaryDisplayQty SecondaryDisplayQty_8;
    SecondaryDisplayQty_8.setString("2331216");
set_field(noSides_0_0, SecondaryDisplayQty_8, DisplayInstruction_8);
    all_values.push_back(DisplayInstruction_8);
    all_compo_names.insert("...NoSides..");

    // OrderQtyData
    multiset<string> OrderQtyData_22;
    FIX::CashOrderQty CashOrderQty_22;
    CashOrderQty_22.setString("8844666");
set_field(noSides_0_0, CashOrderQty_22, OrderQtyData_22);
    FIX::OrderPercent OrderPercent_22;
    OrderPercent_22.setString("64.450000");
set_field(noSides_0_0, OrderPercent_22, OrderQtyData_22);
    FIX::OrderQty OrderQty_30;
    OrderQty_30.setString("2768238");
set_field(noSides_0_0, OrderQty_30, OrderQtyData_22);
    set_field(noSides_0_0, FIX::RoundingDirection{'2'}, OrderQtyData_22);
    FIX::RoundingModulus RoundingModulus_22;
    RoundingModulus_22.setString("15219130");
set_field(noSides_0_0, RoundingModulus_22, OrderQtyData_22);
    all_values.push_back(OrderQtyData_22);
    all_compo_names.insert("...NoSides..");

    // TrdAllocGrp
    // Group TrdAllocGrp.NoAllocs
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoAllocs noAllocs_0_1_0;
      // TrdAllocGrp.NoAllocs
      multiset<string> TrdAllocGrp_NoAllocs_0;
      set_field(noAllocs_0_1_0, FIX::AllocAccount{"STRING_884062701"}, TrdAllocGrp_NoAllocs_0);
      set_field(noAllocs_0_1_0, FIX::AllocAcctIDSource{556718717}, TrdAllocGrp_NoAllocs_0);
      set_field(noAllocs_0_1_0, FIX::AllocClearingFeeIndicator{"STRING_578542487"}, TrdAllocGrp_NoAllocs_0);
      set_field(noAllocs_0_1_0, FIX::AllocCustomerCapacity{"STRING_1298201435"}, TrdAllocGrp_NoAllocs_0);
      set_field(noAllocs_0_1_0, FIX::AllocMethod{1}, TrdAllocGrp_NoAllocs_0);
      FIX::AllocQty AllocQty_33;
      AllocQty_33.setString("3024356");
set_field(noAllocs_0_1_0, AllocQty_33, TrdAllocGrp_NoAllocs_0);
      set_field(noAllocs_0_1_0, FIX::AllocSettlCurrency{"EUR"}, TrdAllocGrp_NoAllocs_0);
      set_field(noAllocs_0_1_0, FIX::IndividualAllocID{"STRING_879078489"}, TrdAllocGrp_NoAllocs_0);
      set_field(noAllocs_0_1_0, FIX::SecondaryIndividualAllocID{"STRING_1051184875"}, TrdAllocGrp_NoAllocs_0);
      all_values.push_back(TrdAllocGrp_NoAllocs_0);
      all_compo_names.insert("...NoSides...NoAllocs");

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs noNested2PartyIDs_0_0_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_48;
        set_field(noNested2PartyIDs_0_0_2_0, FIX::Nested2PartyID{"STRING_360596864"}, NestedParties2_NoNested2PartyIDs_48);
        set_field(noNested2PartyIDs_0_0_2_0, FIX::Nested2PartyIDSource{'6'}, NestedParties2_NoNested2PartyIDs_48);
        set_field(noNested2PartyIDs_0_0_2_0, FIX::Nested2PartyRole{253800450}, NestedParties2_NoNested2PartyIDs_48);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_48);
        all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_105;
          set_field(noNested2PartySubIDs_0_0_0_3_0, FIX::Nested2PartySubID{"STRING_1459558937"}, NstdPtys2SubGrp_NoNested2PartySubIDs_105);
          set_field(noNested2PartySubIDs_0_0_0_3_0, FIX::Nested2PartySubIDType{1846560012}, NstdPtys2SubGrp_NoNested2PartySubIDs_105);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_105);
          all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_0_2_0.addGroup(noNested2PartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_0_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_106;
          set_field(noNested2PartySubIDs_0_0_0_3_1, FIX::Nested2PartySubID{"STRING_1147740663"}, NstdPtys2SubGrp_NoNested2PartySubIDs_106);
          set_field(noNested2PartySubIDs_0_0_0_3_1, FIX::Nested2PartySubIDType{1141195596}, NstdPtys2SubGrp_NoNested2PartySubIDs_106);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_106);
          all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_0_2_0.addGroup(noNested2PartySubIDs_0_0_0_3_1);
        }
        noAllocs_0_1_0.addGroup(noNested2PartyIDs_0_0_2_0);
      }
      noSides_0_0.addGroup(noAllocs_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoAllocs noAllocs_0_1_1;
      // TrdAllocGrp.NoAllocs
      multiset<string> TrdAllocGrp_NoAllocs_1;
      set_field(noAllocs_0_1_1, FIX::AllocAccount{"STRING_1017539414"}, TrdAllocGrp_NoAllocs_1);
      set_field(noAllocs_0_1_1, FIX::AllocAcctIDSource{1421792912}, TrdAllocGrp_NoAllocs_1);
      set_field(noAllocs_0_1_1, FIX::AllocClearingFeeIndicator{"STRING_1151665974"}, TrdAllocGrp_NoAllocs_1);
      set_field(noAllocs_0_1_1, FIX::AllocCustomerCapacity{"STRING_581097753"}, TrdAllocGrp_NoAllocs_1);
      set_field(noAllocs_0_1_1, FIX::AllocMethod{3}, TrdAllocGrp_NoAllocs_1);
      FIX::AllocQty AllocQty_34;
      AllocQty_34.setString("13847876");
set_field(noAllocs_0_1_1, AllocQty_34, TrdAllocGrp_NoAllocs_1);
      set_field(noAllocs_0_1_1, FIX::AllocSettlCurrency{"CAN"}, TrdAllocGrp_NoAllocs_1);
      set_field(noAllocs_0_1_1, FIX::IndividualAllocID{"STRING_1661611505"}, TrdAllocGrp_NoAllocs_1);
      set_field(noAllocs_0_1_1, FIX::SecondaryIndividualAllocID{"STRING_644419834"}, TrdAllocGrp_NoAllocs_1);
      all_values.push_back(TrdAllocGrp_NoAllocs_1);
      all_compo_names.insert("...NoSides...NoAllocs");

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs noNested2PartyIDs_0_1_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_49;
        set_field(noNested2PartyIDs_0_1_2_0, FIX::Nested2PartyID{"STRING_1379759678"}, NestedParties2_NoNested2PartyIDs_49);
        set_field(noNested2PartyIDs_0_1_2_0, FIX::Nested2PartyIDSource{'1'}, NestedParties2_NoNested2PartyIDs_49);
        set_field(noNested2PartyIDs_0_1_2_0, FIX::Nested2PartyRole{117906394}, NestedParties2_NoNested2PartyIDs_49);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_49);
        all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_107;
          set_field(noNested2PartySubIDs_0_1_0_3_0, FIX::Nested2PartySubID{"STRING_679200323"}, NstdPtys2SubGrp_NoNested2PartySubIDs_107);
          set_field(noNested2PartySubIDs_0_1_0_3_0, FIX::Nested2PartySubIDType{200708843}, NstdPtys2SubGrp_NoNested2PartySubIDs_107);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_107);
          all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_1_2_0.addGroup(noNested2PartySubIDs_0_1_0_3_0);
        }
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_0_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_108;
          set_field(noNested2PartySubIDs_0_1_0_3_1, FIX::Nested2PartySubID{"STRING_113254186"}, NstdPtys2SubGrp_NoNested2PartySubIDs_108);
          set_field(noNested2PartySubIDs_0_1_0_3_1, FIX::Nested2PartySubIDType{1743518463}, NstdPtys2SubGrp_NoNested2PartySubIDs_108);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_108);
          all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_1_2_0.addGroup(noNested2PartySubIDs_0_1_0_3_1);
        }
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_0_3_2;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_109;
          set_field(noNested2PartySubIDs_0_1_0_3_2, FIX::Nested2PartySubID{"STRING_1071997008"}, NstdPtys2SubGrp_NoNested2PartySubIDs_109);
          set_field(noNested2PartySubIDs_0_1_0_3_2, FIX::Nested2PartySubIDType{992332675}, NstdPtys2SubGrp_NoNested2PartySubIDs_109);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_109);
          all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_1_2_0.addGroup(noNested2PartySubIDs_0_1_0_3_2);
        }
        noAllocs_0_1_1.addGroup(noNested2PartyIDs_0_1_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs noNested2PartyIDs_0_1_2_1;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_50;
        set_field(noNested2PartyIDs_0_1_2_1, FIX::Nested2PartyID{"STRING_647219690"}, NestedParties2_NoNested2PartyIDs_50);
        set_field(noNested2PartyIDs_0_1_2_1, FIX::Nested2PartyIDSource{'1'}, NestedParties2_NoNested2PartyIDs_50);
        set_field(noNested2PartyIDs_0_1_2_1, FIX::Nested2PartyRole{1352929539}, NestedParties2_NoNested2PartyIDs_50);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_50);
        all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_1_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_110;
          set_field(noNested2PartySubIDs_0_1_1_3_0, FIX::Nested2PartySubID{"STRING_1313353351"}, NstdPtys2SubGrp_NoNested2PartySubIDs_110);
          set_field(noNested2PartySubIDs_0_1_1_3_0, FIX::Nested2PartySubIDType{1602987871}, NstdPtys2SubGrp_NoNested2PartySubIDs_110);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_110);
          all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_1_2_1.addGroup(noNested2PartySubIDs_0_1_1_3_0);
        }
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_1_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_111;
          set_field(noNested2PartySubIDs_0_1_1_3_1, FIX::Nested2PartySubID{"STRING_659058549"}, NstdPtys2SubGrp_NoNested2PartySubIDs_111);
          set_field(noNested2PartySubIDs_0_1_1_3_1, FIX::Nested2PartySubIDType{1012429716}, NstdPtys2SubGrp_NoNested2PartySubIDs_111);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_111);
          all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_1_2_1.addGroup(noNested2PartySubIDs_0_1_1_3_1);
        }
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_1_3_2;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_112;
          set_field(noNested2PartySubIDs_0_1_1_3_2, FIX::Nested2PartySubID{"STRING_603244886"}, NstdPtys2SubGrp_NoNested2PartySubIDs_112);
          set_field(noNested2PartySubIDs_0_1_1_3_2, FIX::Nested2PartySubIDType{1800254145}, NstdPtys2SubGrp_NoNested2PartySubIDs_112);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_112);
          all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_1_2_1.addGroup(noNested2PartySubIDs_0_1_1_3_2);
        }
        noAllocs_0_1_1.addGroup(noNested2PartyIDs_0_1_2_1);
      }
      noSides_0_0.addGroup(noAllocs_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoAllocs noAllocs_0_1_2;
      // TrdAllocGrp.NoAllocs
      multiset<string> TrdAllocGrp_NoAllocs_2;
      set_field(noAllocs_0_1_2, FIX::AllocAccount{"STRING_2029969130"}, TrdAllocGrp_NoAllocs_2);
      set_field(noAllocs_0_1_2, FIX::AllocAcctIDSource{2025037798}, TrdAllocGrp_NoAllocs_2);
      set_field(noAllocs_0_1_2, FIX::AllocClearingFeeIndicator{"STRING_804436472"}, TrdAllocGrp_NoAllocs_2);
      set_field(noAllocs_0_1_2, FIX::AllocCustomerCapacity{"STRING_463583235"}, TrdAllocGrp_NoAllocs_2);
      set_field(noAllocs_0_1_2, FIX::AllocMethod{2}, TrdAllocGrp_NoAllocs_2);
      FIX::AllocQty AllocQty_35;
      AllocQty_35.setString("417404");
set_field(noAllocs_0_1_2, AllocQty_35, TrdAllocGrp_NoAllocs_2);
      set_field(noAllocs_0_1_2, FIX::AllocSettlCurrency{"USD"}, TrdAllocGrp_NoAllocs_2);
      set_field(noAllocs_0_1_2, FIX::IndividualAllocID{"STRING_1703351961"}, TrdAllocGrp_NoAllocs_2);
      set_field(noAllocs_0_1_2, FIX::SecondaryIndividualAllocID{"STRING_426083836"}, TrdAllocGrp_NoAllocs_2);
      all_values.push_back(TrdAllocGrp_NoAllocs_2);
      all_compo_names.insert("...NoSides...NoAllocs");

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs noNested2PartyIDs_0_2_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_51;
        set_field(noNested2PartyIDs_0_2_2_0, FIX::Nested2PartyID{"STRING_935627992"}, NestedParties2_NoNested2PartyIDs_51);
        set_field(noNested2PartyIDs_0_2_2_0, FIX::Nested2PartyIDSource{'1'}, NestedParties2_NoNested2PartyIDs_51);
        set_field(noNested2PartyIDs_0_2_2_0, FIX::Nested2PartyRole{1796931982}, NestedParties2_NoNested2PartyIDs_51);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_51);
        all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_2_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_113;
          set_field(noNested2PartySubIDs_0_2_0_3_0, FIX::Nested2PartySubID{"STRING_486283048"}, NstdPtys2SubGrp_NoNested2PartySubIDs_113);
          set_field(noNested2PartySubIDs_0_2_0_3_0, FIX::Nested2PartySubIDType{1997640825}, NstdPtys2SubGrp_NoNested2PartySubIDs_113);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_113);
          all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_2_2_0.addGroup(noNested2PartySubIDs_0_2_0_3_0);
        }
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_2_0_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_114;
          set_field(noNested2PartySubIDs_0_2_0_3_1, FIX::Nested2PartySubID{"STRING_859700696"}, NstdPtys2SubGrp_NoNested2PartySubIDs_114);
          set_field(noNested2PartySubIDs_0_2_0_3_1, FIX::Nested2PartySubIDType{82317863}, NstdPtys2SubGrp_NoNested2PartySubIDs_114);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_114);
          all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_2_2_0.addGroup(noNested2PartySubIDs_0_2_0_3_1);
        }
        noAllocs_0_1_2.addGroup(noNested2PartyIDs_0_2_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs noNested2PartyIDs_0_2_2_1;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_52;
        set_field(noNested2PartyIDs_0_2_2_1, FIX::Nested2PartyID{"STRING_922154185"}, NestedParties2_NoNested2PartyIDs_52);
        set_field(noNested2PartyIDs_0_2_2_1, FIX::Nested2PartyIDSource{'1'}, NestedParties2_NoNested2PartyIDs_52);
        set_field(noNested2PartyIDs_0_2_2_1, FIX::Nested2PartyRole{729537553}, NestedParties2_NoNested2PartyIDs_52);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_52);
        all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_2_1_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_115;
          set_field(noNested2PartySubIDs_0_2_1_3_0, FIX::Nested2PartySubID{"STRING_1057479262"}, NstdPtys2SubGrp_NoNested2PartySubIDs_115);
          set_field(noNested2PartySubIDs_0_2_1_3_0, FIX::Nested2PartySubIDType{2076520813}, NstdPtys2SubGrp_NoNested2PartySubIDs_115);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_115);
          all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_2_2_1.addGroup(noNested2PartySubIDs_0_2_1_3_0);
        }
        noAllocs_0_1_2.addGroup(noNested2PartyIDs_0_2_2_1);
      }
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs noNested2PartyIDs_0_2_2_2;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_53;
        set_field(noNested2PartyIDs_0_2_2_2, FIX::Nested2PartyID{"STRING_1147576790"}, NestedParties2_NoNested2PartyIDs_53);
        set_field(noNested2PartyIDs_0_2_2_2, FIX::Nested2PartyIDSource{'5'}, NestedParties2_NoNested2PartyIDs_53);
        set_field(noNested2PartyIDs_0_2_2_2, FIX::Nested2PartyRole{588095714}, NestedParties2_NoNested2PartyIDs_53);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_53);
        all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_2_2_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_116;
          set_field(noNested2PartySubIDs_0_2_2_3_0, FIX::Nested2PartySubID{"STRING_1116228371"}, NstdPtys2SubGrp_NoNested2PartySubIDs_116);
          set_field(noNested2PartySubIDs_0_2_2_3_0, FIX::Nested2PartySubIDType{240866211}, NstdPtys2SubGrp_NoNested2PartySubIDs_116);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_116);
          all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_2_2_2.addGroup(noNested2PartySubIDs_0_2_2_3_0);
        }
        noAllocs_0_1_2.addGroup(noNested2PartyIDs_0_2_2_2);
      }
      noSides_0_0.addGroup(noAllocs_0_1_2);
    }
    msg.addGroup(noSides_0_0);
  }
  {
    FIX50SP2::TradeCaptureReport::NoSides noSides_0_1;
    // TrdCapRptSideGrp.NoSides
    multiset<string> TrdCapRptSideGrp_NoSides_1;
    set_field(noSides_0_1, FIX::Account{"STRING_2042491988"}, TrdCapRptSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::AccountType{6}, TrdCapRptSideGrp_NoSides_1);
    FIX::AccruedInterestAmt AccruedInterestAmt_11;
    AccruedInterestAmt_11.setString("10453026");
set_field(noSides_0_1, AccruedInterestAmt_11, TrdCapRptSideGrp_NoSides_1);
    FIX::AccruedInterestRate AccruedInterestRate_6;
    AccruedInterestRate_6.setString("15.760000");
set_field(noSides_0_1, AccruedInterestRate_6, TrdCapRptSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::AcctIDSource{1}, TrdCapRptSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::AggressorIndicator{false}, TrdCapRptSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::AllocID{"STRING_140255578"}, TrdCapRptSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::ComplianceID{"STRING_747732767"}, TrdCapRptSideGrp_NoSides_1);
    FIX::Concession Concession_6;
    Concession_6.setString("6429114");
set_field(noSides_0_1, Concession_6, TrdCapRptSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::CustOrderCapacity{3}, TrdCapRptSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::EncodedText{"DATA_279274706"}, TrdCapRptSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::EncodedTextLen{1578539445}, TrdCapRptSideGrp_NoSides_1);
    FIX::EndAccruedInterestAmt EndAccruedInterestAmt_11;
    EndAccruedInterestAmt_11.setString("3734221");
set_field(noSides_0_1, EndAccruedInterestAmt_11, TrdCapRptSideGrp_NoSides_1);
    FIX::EndCash EndCash_11;
    EndCash_11.setString("20762066");
set_field(noSides_0_1, EndCash_11, TrdCapRptSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::ExDate{"LOCALMKTDATE_177502307"}, TrdCapRptSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::ExchangeRule{"STRING_859705187"}, TrdCapRptSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::ExchangeSpecialInstructions{"STRING_1926363865"}, TrdCapRptSideGrp_NoSides_1);
    FIX::InterestAtMaturity InterestAtMaturity_6;
    InterestAtMaturity_6.setString("10372030");
set_field(noSides_0_1, InterestAtMaturity_6, TrdCapRptSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::NetGrossInd{1}, TrdCapRptSideGrp_NoSides_1);
    FIX::NetMoney NetMoney_6;
    NetMoney_6.setString("7010344");
set_field(noSides_0_1, NetMoney_6, TrdCapRptSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::NumDaysInterest{741752726}, TrdCapRptSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::OddLot{false}, TrdCapRptSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::OrderCategory{'6'}, TrdCapRptSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::OrderDelay{1799231988}, TrdCapRptSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::OrderDelayUnit{4}, TrdCapRptSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::PositionEffect{'N'}, TrdCapRptSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::PreallocMethod{'1'}, TrdCapRptSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::ProcessCode{'1'}, TrdCapRptSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::RptSeq{1695357491}, TrdCapRptSideGrp_NoSides_1);
    FIX::SettlCurrAmt SettlCurrAmt_10;
    SettlCurrAmt_10.setString("12809601");
set_field(noSides_0_1, SettlCurrAmt_10, TrdCapRptSideGrp_NoSides_1);
    FIX::SettlCurrFxRate SettlCurrFxRate_10;
    SettlCurrFxRate_10.setString("2820760");
set_field(noSides_0_1, SettlCurrFxRate_10, TrdCapRptSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::SettlCurrFxRateCalc{'D'}, TrdCapRptSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::Side{'E'}, TrdCapRptSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::SideCurrency{"CHF"}, TrdCapRptSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::SideExecID{"STRING_904637573"}, TrdCapRptSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::SideFillStationCd{"STRING_266938221"}, TrdCapRptSideGrp_NoSides_1);
    FIX::SideGrossTradeAmt SideGrossTradeAmt_1;
    SideGrossTradeAmt_1.setString("20892129");
set_field(noSides_0_1, SideGrossTradeAmt_1, TrdCapRptSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::SideLastQty{1652370340}, TrdCapRptSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::SideLiquidityInd{909849674}, TrdCapRptSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::SideMultiLegReportingType{3}, TrdCapRptSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::SideReasonCd{"STRING_1931645047"}, TrdCapRptSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::SideSettlCurrency{"CHF"}, TrdCapRptSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::SideTradeReportID{"STRING_1860368087"}, TrdCapRptSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::SideTrdSubTyp{518407778}, TrdCapRptSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::SolicitedFlag{true}, TrdCapRptSideGrp_NoSides_1);
    FIX::StartCash StartCash_11;
    StartCash_11.setString("16392483");
set_field(noSides_0_1, StartCash_11, TrdCapRptSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::Text{"STRING_1555610781"}, TrdCapRptSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::TimeBracket{"STRING_535735480"}, TrdCapRptSideGrp_NoSides_1);
    FIX::TotalTakedown TotalTakedown_6;
    TotalTakedown_6.setString("1927990");
set_field(noSides_0_1, TotalTakedown_6, TrdCapRptSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::TradeAllocIndicator{3}, TrdCapRptSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::TradeInputDevice{"STRING_59812435"}, TrdCapRptSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::TradeInputSource{"STRING_728056902"}, TrdCapRptSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::TradingSessionID{"STRING_4"}, TrdCapRptSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::TradingSessionSubID{"STRING_6"}, TrdCapRptSideGrp_NoSides_1);
    all_values.push_back(TrdCapRptSideGrp_NoSides_1);
    all_compo_names.insert("...NoSides");

    // ClrInstGrp
    // Group ClrInstGrp.NoClearingInstructions
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoClearingInstructions noClearingInstructions_1_1_0;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_11;
      set_field(noClearingInstructions_1_1_0, FIX::ClearingInstruction{10}, ClrInstGrp_NoClearingInstructions_11);
      all_values.push_back(ClrInstGrp_NoClearingInstructions_11);
      all_compo_names.insert("...NoSides...NoClearingInstructions");

      noSides_0_1.addGroup(noClearingInstructions_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoClearingInstructions noClearingInstructions_1_1_1;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_12;
      set_field(noClearingInstructions_1_1_1, FIX::ClearingInstruction{6}, ClrInstGrp_NoClearingInstructions_12);
      all_values.push_back(ClrInstGrp_NoClearingInstructions_12);
      all_compo_names.insert("...NoSides...NoClearingInstructions");

      noSides_0_1.addGroup(noClearingInstructions_1_1_1);
    }
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoClearingInstructions noClearingInstructions_1_1_2;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_13;
      set_field(noClearingInstructions_1_1_2, FIX::ClearingInstruction{9}, ClrInstGrp_NoClearingInstructions_13);
      all_values.push_back(ClrInstGrp_NoClearingInstructions_13);
      all_compo_names.insert("...NoSides...NoClearingInstructions");

      noSides_0_1.addGroup(noClearingInstructions_1_1_2);
    }
    // CommissionData
    multiset<string> CommissionData_19;
    set_field(noSides_0_1, FIX::CommCurrency{"USD"}, CommissionData_19);
    set_field(noSides_0_1, FIX::CommType{'6'}, CommissionData_19);
    FIX::Commission Commission_22;
    Commission_22.setString("13745792");
set_field(noSides_0_1, Commission_22, CommissionData_19);
    set_field(noSides_0_1, FIX::FundRenewWaiv{'N'}, CommissionData_19);
    all_values.push_back(CommissionData_19);
    all_compo_names.insert("...NoSides.");

    // ContAmtGrp
    // Group ContAmtGrp.NoContAmts
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoContAmts noContAmts_1_1_0;
      // ContAmtGrp.NoContAmts
      multiset<string> ContAmtGrp_NoContAmts_2;
      set_field(noContAmts_1_1_0, FIX::ContAmtCurr{"CHF"}, ContAmtGrp_NoContAmts_2);
      set_field(noContAmts_1_1_0, FIX::ContAmtType{4}, ContAmtGrp_NoContAmts_2);
      FIX::ContAmtValue ContAmtValue_2;
      ContAmtValue_2.setString("17841035");
set_field(noContAmts_1_1_0, ContAmtValue_2, ContAmtGrp_NoContAmts_2);
      all_values.push_back(ContAmtGrp_NoContAmts_2);
      all_compo_names.insert("...NoSides...NoContAmts");

      noSides_0_1.addGroup(noContAmts_1_1_0);
    }
    // MiscFeesGrp
    // Group MiscFeesGrp.NoMiscFees
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoMiscFees noMiscFees_1_1_0;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_21;
      FIX::MiscFeeAmt MiscFeeAmt_21;
      MiscFeeAmt_21.setString("16529194");
set_field(noMiscFees_1_1_0, MiscFeeAmt_21, MiscFeesGrp_NoMiscFees_21);
      set_field(noMiscFees_1_1_0, FIX::MiscFeeBasis{2}, MiscFeesGrp_NoMiscFees_21);
      set_field(noMiscFees_1_1_0, FIX::MiscFeeCurr{"CHF"}, MiscFeesGrp_NoMiscFees_21);
      set_field(noMiscFees_1_1_0, FIX::MiscFeeType{"STRING_14"}, MiscFeesGrp_NoMiscFees_21);
      all_values.push_back(MiscFeesGrp_NoMiscFees_21);
      all_compo_names.insert("...NoSides...NoMiscFees");

      noSides_0_1.addGroup(noMiscFees_1_1_0);
    }
    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoPartyIDs noPartyIDs_1_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_139;
      set_field(noPartyIDs_1_1_0, FIX::PartyID{"STRING_2128122731"}, Parties_NoPartyIDs_139);
      set_field(noPartyIDs_1_1_0, FIX::PartyIDSource{'4'}, Parties_NoPartyIDs_139);
      set_field(noPartyIDs_1_1_0, FIX::PartyRole{4}, Parties_NoPartyIDs_139);
      all_values.push_back(Parties_NoPartyIDs_139);
      all_compo_names.insert("...NoSides...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_287;
        set_field(noPartySubIDs_1_0_2_0, FIX::PartySubID{"STRING_965713110"}, PtysSubGrp_NoPartySubIDs_287);
        set_field(noPartySubIDs_1_0_2_0, FIX::PartySubIDType{16}, PtysSubGrp_NoPartySubIDs_287);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_287);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_288;
        set_field(noPartySubIDs_1_0_2_1, FIX::PartySubID{"STRING_576186998"}, PtysSubGrp_NoPartySubIDs_288);
        set_field(noPartySubIDs_1_0_2_1, FIX::PartySubIDType{1}, PtysSubGrp_NoPartySubIDs_288);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_288);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_1);
      }
      noSides_0_1.addGroup(noPartyIDs_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoPartyIDs noPartyIDs_1_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_140;
      set_field(noPartyIDs_1_1_1, FIX::PartyID{"STRING_411843853"}, Parties_NoPartyIDs_140);
      set_field(noPartyIDs_1_1_1, FIX::PartyIDSource{'6'}, Parties_NoPartyIDs_140);
      set_field(noPartyIDs_1_1_1, FIX::PartyRole{77}, Parties_NoPartyIDs_140);
      all_values.push_back(Parties_NoPartyIDs_140);
      all_compo_names.insert("...NoSides...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_289;
        set_field(noPartySubIDs_1_1_2_0, FIX::PartySubID{"STRING_1790733593"}, PtysSubGrp_NoPartySubIDs_289);
        set_field(noPartySubIDs_1_1_2_0, FIX::PartySubIDType{24}, PtysSubGrp_NoPartySubIDs_289);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_289);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_1_1_1.addGroup(noPartySubIDs_1_1_2_0);
      }
      noSides_0_1.addGroup(noPartyIDs_1_1_1);
    }
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoPartyIDs noPartyIDs_1_1_2;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_141;
      set_field(noPartyIDs_1_1_2, FIX::PartyID{"STRING_1625524097"}, Parties_NoPartyIDs_141);
      set_field(noPartyIDs_1_1_2, FIX::PartyIDSource{'5'}, Parties_NoPartyIDs_141);
      set_field(noPartyIDs_1_1_2, FIX::PartyRole{67}, Parties_NoPartyIDs_141);
      all_values.push_back(Parties_NoPartyIDs_141);
      all_compo_names.insert("...NoSides...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_2_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_290;
        set_field(noPartySubIDs_1_2_2_0, FIX::PartySubID{"STRING_643053547"}, PtysSubGrp_NoPartySubIDs_290);
        set_field(noPartySubIDs_1_2_2_0, FIX::PartySubIDType{32}, PtysSubGrp_NoPartySubIDs_290);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_290);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_1_1_2.addGroup(noPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_2_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_291;
        set_field(noPartySubIDs_1_2_2_1, FIX::PartySubID{"STRING_984352952"}, PtysSubGrp_NoPartySubIDs_291);
        set_field(noPartySubIDs_1_2_2_1, FIX::PartySubIDType{17}, PtysSubGrp_NoPartySubIDs_291);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_291);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_1_1_2.addGroup(noPartySubIDs_1_2_2_1);
      }
      noSides_0_1.addGroup(noPartyIDs_1_1_2);
    }
    // SettlDetails
    // Group SettlDetails.NoSettlDetails
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails noSettlDetails_1_1_0;
      // SettlDetails.NoSettlDetails
      multiset<string> SettlDetails_NoSettlDetails_7;
      set_field(noSettlDetails_1_1_0, FIX::SettlObligSource{'1'}, SettlDetails_NoSettlDetails_7);
      all_values.push_back(SettlDetails_NoSettlDetails_7);
      all_compo_names.insert("...NoSides...NoSettlDetails");

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_1_0_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_55;
        set_field(noSettlPartyIDs_1_0_2_0, FIX::SettlPartyID{"STRING_728547634"}, SettlParties_NoSettlPartyIDs_55);
        set_field(noSettlPartyIDs_1_0_2_0, FIX::SettlPartyIDSource{'4'}, SettlParties_NoSettlPartyIDs_55);
        set_field(noSettlPartyIDs_1_0_2_0, FIX::SettlPartyRole{652795583}, SettlParties_NoSettlPartyIDs_55);
        all_values.push_back(SettlParties_NoSettlPartyIDs_55);
        all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_113;
          set_field(noSettlPartySubIDs_1_0_0_3_0, FIX::SettlPartySubID{"STRING_1322903559"}, SettlPtysSubGrp_NoSettlPartySubIDs_113);
          set_field(noSettlPartySubIDs_1_0_0_3_0, FIX::SettlPartySubIDType{1705004245}, SettlPtysSubGrp_NoSettlPartySubIDs_113);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_113);
          all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_1_0_2_0.addGroup(noSettlPartySubIDs_1_0_0_3_0);
        }
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_114;
          set_field(noSettlPartySubIDs_1_0_0_3_1, FIX::SettlPartySubID{"STRING_1096113370"}, SettlPtysSubGrp_NoSettlPartySubIDs_114);
          set_field(noSettlPartySubIDs_1_0_0_3_1, FIX::SettlPartySubIDType{2095817609}, SettlPtysSubGrp_NoSettlPartySubIDs_114);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_114);
          all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_1_0_2_0.addGroup(noSettlPartySubIDs_1_0_0_3_1);
        }
        noSettlDetails_1_1_0.addGroup(noSettlPartyIDs_1_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_1_0_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_56;
        set_field(noSettlPartyIDs_1_0_2_1, FIX::SettlPartyID{"STRING_17856392"}, SettlParties_NoSettlPartyIDs_56);
        set_field(noSettlPartyIDs_1_0_2_1, FIX::SettlPartyIDSource{'1'}, SettlParties_NoSettlPartyIDs_56);
        set_field(noSettlPartyIDs_1_0_2_1, FIX::SettlPartyRole{914047072}, SettlParties_NoSettlPartyIDs_56);
        all_values.push_back(SettlParties_NoSettlPartyIDs_56);
        all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_115;
          set_field(noSettlPartySubIDs_1_0_1_3_0, FIX::SettlPartySubID{"STRING_41191283"}, SettlPtysSubGrp_NoSettlPartySubIDs_115);
          set_field(noSettlPartySubIDs_1_0_1_3_0, FIX::SettlPartySubIDType{460333436}, SettlPtysSubGrp_NoSettlPartySubIDs_115);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_115);
          all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_1_0_2_1.addGroup(noSettlPartySubIDs_1_0_1_3_0);
        }
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_1_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_116;
          set_field(noSettlPartySubIDs_1_0_1_3_1, FIX::SettlPartySubID{"STRING_1039915899"}, SettlPtysSubGrp_NoSettlPartySubIDs_116);
          set_field(noSettlPartySubIDs_1_0_1_3_1, FIX::SettlPartySubIDType{130304838}, SettlPtysSubGrp_NoSettlPartySubIDs_116);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_116);
          all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_1_0_2_1.addGroup(noSettlPartySubIDs_1_0_1_3_1);
        }
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_1_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_117;
          set_field(noSettlPartySubIDs_1_0_1_3_2, FIX::SettlPartySubID{"STRING_270027687"}, SettlPtysSubGrp_NoSettlPartySubIDs_117);
          set_field(noSettlPartySubIDs_1_0_1_3_2, FIX::SettlPartySubIDType{1418119776}, SettlPtysSubGrp_NoSettlPartySubIDs_117);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_117);
          all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_1_0_2_1.addGroup(noSettlPartySubIDs_1_0_1_3_2);
        }
        noSettlDetails_1_1_0.addGroup(noSettlPartyIDs_1_0_2_1);
      }
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_1_0_2_2;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_57;
        set_field(noSettlPartyIDs_1_0_2_2, FIX::SettlPartyID{"STRING_1921038431"}, SettlParties_NoSettlPartyIDs_57);
        set_field(noSettlPartyIDs_1_0_2_2, FIX::SettlPartyIDSource{'2'}, SettlParties_NoSettlPartyIDs_57);
        set_field(noSettlPartyIDs_1_0_2_2, FIX::SettlPartyRole{896160225}, SettlParties_NoSettlPartyIDs_57);
        all_values.push_back(SettlParties_NoSettlPartyIDs_57);
        all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_2_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_118;
          set_field(noSettlPartySubIDs_1_0_2_3_0, FIX::SettlPartySubID{"STRING_913627209"}, SettlPtysSubGrp_NoSettlPartySubIDs_118);
          set_field(noSettlPartySubIDs_1_0_2_3_0, FIX::SettlPartySubIDType{1748779963}, SettlPtysSubGrp_NoSettlPartySubIDs_118);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_118);
          all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_1_0_2_2.addGroup(noSettlPartySubIDs_1_0_2_3_0);
        }
        noSettlDetails_1_1_0.addGroup(noSettlPartyIDs_1_0_2_2);
      }
      noSides_0_1.addGroup(noSettlDetails_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails noSettlDetails_1_1_1;
      // SettlDetails.NoSettlDetails
      multiset<string> SettlDetails_NoSettlDetails_8;
      set_field(noSettlDetails_1_1_1, FIX::SettlObligSource{'3'}, SettlDetails_NoSettlDetails_8);
      all_values.push_back(SettlDetails_NoSettlDetails_8);
      all_compo_names.insert("...NoSides...NoSettlDetails");

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_1_1_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_58;
        set_field(noSettlPartyIDs_1_1_2_0, FIX::SettlPartyID{"STRING_585649268"}, SettlParties_NoSettlPartyIDs_58);
        set_field(noSettlPartyIDs_1_1_2_0, FIX::SettlPartyIDSource{'1'}, SettlParties_NoSettlPartyIDs_58);
        set_field(noSettlPartyIDs_1_1_2_0, FIX::SettlPartyRole{67516647}, SettlParties_NoSettlPartyIDs_58);
        all_values.push_back(SettlParties_NoSettlPartyIDs_58);
        all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_1_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_119;
          set_field(noSettlPartySubIDs_1_1_0_3_0, FIX::SettlPartySubID{"STRING_2088648346"}, SettlPtysSubGrp_NoSettlPartySubIDs_119);
          set_field(noSettlPartySubIDs_1_1_0_3_0, FIX::SettlPartySubIDType{796064281}, SettlPtysSubGrp_NoSettlPartySubIDs_119);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_119);
          all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_1_1_2_0.addGroup(noSettlPartySubIDs_1_1_0_3_0);
        }
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_1_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_120;
          set_field(noSettlPartySubIDs_1_1_0_3_1, FIX::SettlPartySubID{"STRING_1248376293"}, SettlPtysSubGrp_NoSettlPartySubIDs_120);
          set_field(noSettlPartySubIDs_1_1_0_3_1, FIX::SettlPartySubIDType{593960281}, SettlPtysSubGrp_NoSettlPartySubIDs_120);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_120);
          all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_1_1_2_0.addGroup(noSettlPartySubIDs_1_1_0_3_1);
        }
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_1_0_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_121;
          set_field(noSettlPartySubIDs_1_1_0_3_2, FIX::SettlPartySubID{"STRING_1911538568"}, SettlPtysSubGrp_NoSettlPartySubIDs_121);
          set_field(noSettlPartySubIDs_1_1_0_3_2, FIX::SettlPartySubIDType{423796204}, SettlPtysSubGrp_NoSettlPartySubIDs_121);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_121);
          all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_1_1_2_0.addGroup(noSettlPartySubIDs_1_1_0_3_2);
        }
        noSettlDetails_1_1_1.addGroup(noSettlPartyIDs_1_1_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_1_1_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_59;
        set_field(noSettlPartyIDs_1_1_2_1, FIX::SettlPartyID{"STRING_151480879"}, SettlParties_NoSettlPartyIDs_59);
        set_field(noSettlPartyIDs_1_1_2_1, FIX::SettlPartyIDSource{'8'}, SettlParties_NoSettlPartyIDs_59);
        set_field(noSettlPartyIDs_1_1_2_1, FIX::SettlPartyRole{372130165}, SettlParties_NoSettlPartyIDs_59);
        all_values.push_back(SettlParties_NoSettlPartyIDs_59);
        all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_1_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_122;
          set_field(noSettlPartySubIDs_1_1_1_3_0, FIX::SettlPartySubID{"STRING_325172575"}, SettlPtysSubGrp_NoSettlPartySubIDs_122);
          set_field(noSettlPartySubIDs_1_1_1_3_0, FIX::SettlPartySubIDType{1286177237}, SettlPtysSubGrp_NoSettlPartySubIDs_122);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_122);
          all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_1_1_2_1.addGroup(noSettlPartySubIDs_1_1_1_3_0);
        }
        noSettlDetails_1_1_1.addGroup(noSettlPartyIDs_1_1_2_1);
      }
      noSides_0_1.addGroup(noSettlDetails_1_1_1);
    }
    // SideTrdRegTS
    // Group SideTrdRegTS.NoSideTrdRegTS
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoSideTrdRegTS noSideTrdRegTS_1_1_0;
      // SideTrdRegTS.NoSideTrdRegTS
      multiset<string> SideTrdRegTS_NoSideTrdRegTS_1;
      set_field(noSideTrdRegTS_1_1_0, FIX::SideTrdRegTimestamp{FIX::UTCTIMESTAMP(2, 57, 37, 5, 3, 2010)}, SideTrdRegTS_NoSideTrdRegTS_1);
      set_field(noSideTrdRegTS_1_1_0, FIX::SideTrdRegTimestampSrc{"STRING_1907542029"}, SideTrdRegTS_NoSideTrdRegTS_1);
      set_field(noSideTrdRegTS_1_1_0, FIX::SideTrdRegTimestampType{2004121571}, SideTrdRegTS_NoSideTrdRegTS_1);
      all_values.push_back(SideTrdRegTS_NoSideTrdRegTS_1);
      all_compo_names.insert("...NoSides...NoSideTrdRegTS");

      noSides_0_1.addGroup(noSideTrdRegTS_1_1_0);
    }
    // Stipulations
    // Group Stipulations.NoStipulations
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoStipulations noStipulations_1_1_0;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_54;
      set_field(noStipulations_1_1_0, FIX::StipulationType{"STRING_CPP"}, Stipulations_NoStipulations_54);
      set_field(noStipulations_1_1_0, FIX::StipulationValue{"STRING_1605417887"}, Stipulations_NoStipulations_54);
      all_values.push_back(Stipulations_NoStipulations_54);
      all_compo_names.insert("...NoSides...NoStipulations");

      noSides_0_1.addGroup(noStipulations_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoStipulations noStipulations_1_1_1;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_55;
      set_field(noStipulations_1_1_1, FIX::StipulationType{"STRING_WAC"}, Stipulations_NoStipulations_55);
      set_field(noStipulations_1_1_1, FIX::StipulationValue{"STRING_1665574014"}, Stipulations_NoStipulations_55);
      all_values.push_back(Stipulations_NoStipulations_55);
      all_compo_names.insert("...NoSides...NoStipulations");

      noSides_0_1.addGroup(noStipulations_1_1_1);
    }
    // TradeReportOrderDetail
    multiset<string> TradeReportOrderDetail_1;
    set_field(noSides_0_1, FIX::BookingType{2}, TradeReportOrderDetail_1);
    set_field(noSides_0_1, FIX::ClOrdID{"STRING_1388965003"}, TradeReportOrderDetail_1);
    FIX::CumQty CumQty_4;
    CumQty_4.setString("17330906");
set_field(noSides_0_1, CumQty_4, TradeReportOrderDetail_1);
    set_field(noSides_0_1, FIX::ExecInst{"MULTIPLECHARVALUE_Y"}, TradeReportOrderDetail_1);
    set_field(noSides_0_1, FIX::ExpireTime{FIX::UTCTIMESTAMP(15, 59, 22, 20, 4, 2005)}, TradeReportOrderDetail_1);
    FIX::LeavesQty LeavesQty_3;
    LeavesQty_3.setString("10058945");
set_field(noSides_0_1, LeavesQty_3, TradeReportOrderDetail_1);
    set_field(noSides_0_1, FIX::ListID{"STRING_1147024649"}, TradeReportOrderDetail_1);
    set_field(noSides_0_1, FIX::LotType{'2'}, TradeReportOrderDetail_1);
    set_field(noSides_0_1, FIX::OrdStatus{'7'}, TradeReportOrderDetail_1);
    set_field(noSides_0_1, FIX::OrdType{'F'}, TradeReportOrderDetail_1);
    set_field(noSides_0_1, FIX::OrderCapacity{'G'}, TradeReportOrderDetail_1);
    set_field(noSides_0_1, FIX::OrderID{"STRING_1697430941"}, TradeReportOrderDetail_1);
    set_field(noSides_0_1, FIX::OrderInputDevice{"STRING_2032228912"}, TradeReportOrderDetail_1);
    set_field(noSides_0_1, FIX::OrderRestrictions{"MULTIPLECHARVALUE_3"}, TradeReportOrderDetail_1);
    set_field(noSides_0_1, FIX::OrigCustOrderCapacity{3}, TradeReportOrderDetail_1);
    set_field(noSides_0_1, FIX::OrigOrdModTime{FIX::UTCTIMESTAMP(22, 50, 27, 6, 7, 2006)}, TradeReportOrderDetail_1);
    FIX::Price Price_24;
    Price_24.setString("10072088");
set_field(noSides_0_1, Price_24, TradeReportOrderDetail_1);
    set_field(noSides_0_1, FIX::RefOrdIDReason{0}, TradeReportOrderDetail_1);
    set_field(noSides_0_1, FIX::RefOrderID{"STRING_1853117965"}, TradeReportOrderDetail_1);
    set_field(noSides_0_1, FIX::RefOrderIDSource{'3'}, TradeReportOrderDetail_1);
    set_field(noSides_0_1, FIX::SecondaryClOrdID{"STRING_648356474"}, TradeReportOrderDetail_1);
    set_field(noSides_0_1, FIX::SecondaryOrderID{"STRING_1438724979"}, TradeReportOrderDetail_1);
    FIX::StopPx StopPx_9;
    StopPx_9.setString("1535143");
set_field(noSides_0_1, StopPx_9, TradeReportOrderDetail_1);
    set_field(noSides_0_1, FIX::TimeInForce{'5'}, TradeReportOrderDetail_1);
    set_field(noSides_0_1, FIX::TransBkdTime{FIX::UTCTIMESTAMP(6, 49, 10, 13, 12, 2005)}, TradeReportOrderDetail_1);
    all_values.push_back(TradeReportOrderDetail_1);
    all_compo_names.insert("...NoSides.");

    // DisplayInstruction
    multiset<string> DisplayInstruction_9;
    FIX::DisplayHighQty DisplayHighQty_9;
    DisplayHighQty_9.setString("2790481");
set_field(noSides_0_1, DisplayHighQty_9, DisplayInstruction_9);
    FIX::DisplayLowQty DisplayLowQty_9;
    DisplayLowQty_9.setString("17806042");
set_field(noSides_0_1, DisplayLowQty_9, DisplayInstruction_9);
    set_field(noSides_0_1, FIX::DisplayMethod{'4'}, DisplayInstruction_9);
    FIX::DisplayMinIncr DisplayMinIncr_9;
    DisplayMinIncr_9.setString("5647663");
set_field(noSides_0_1, DisplayMinIncr_9, DisplayInstruction_9);
    FIX::DisplayQty DisplayQty_9;
    DisplayQty_9.setString("5279543");
set_field(noSides_0_1, DisplayQty_9, DisplayInstruction_9);
    set_field(noSides_0_1, FIX::DisplayWhen{'1'}, DisplayInstruction_9);
    FIX::RefreshQty RefreshQty_9;
    RefreshQty_9.setString("4495116");
set_field(noSides_0_1, RefreshQty_9, DisplayInstruction_9);
    FIX::SecondaryDisplayQty SecondaryDisplayQty_9;
    SecondaryDisplayQty_9.setString("11126297");
set_field(noSides_0_1, SecondaryDisplayQty_9, DisplayInstruction_9);
    all_values.push_back(DisplayInstruction_9);
    all_compo_names.insert("...NoSides..");

    // OrderQtyData
    multiset<string> OrderQtyData_23;
    FIX::CashOrderQty CashOrderQty_23;
    CashOrderQty_23.setString("17521637");
set_field(noSides_0_1, CashOrderQty_23, OrderQtyData_23);
    FIX::OrderPercent OrderPercent_23;
    OrderPercent_23.setString("16.190000");
set_field(noSides_0_1, OrderPercent_23, OrderQtyData_23);
    FIX::OrderQty OrderQty_31;
    OrderQty_31.setString("6577828");
set_field(noSides_0_1, OrderQty_31, OrderQtyData_23);
    set_field(noSides_0_1, FIX::RoundingDirection{'0'}, OrderQtyData_23);
    FIX::RoundingModulus RoundingModulus_23;
    RoundingModulus_23.setString("18646536");
set_field(noSides_0_1, RoundingModulus_23, OrderQtyData_23);
    all_values.push_back(OrderQtyData_23);
    all_compo_names.insert("...NoSides..");

    // TrdAllocGrp
    // Group TrdAllocGrp.NoAllocs
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoAllocs noAllocs_1_1_0;
      // TrdAllocGrp.NoAllocs
      multiset<string> TrdAllocGrp_NoAllocs_3;
      set_field(noAllocs_1_1_0, FIX::AllocAccount{"STRING_1909083298"}, TrdAllocGrp_NoAllocs_3);
      set_field(noAllocs_1_1_0, FIX::AllocAcctIDSource{2052197577}, TrdAllocGrp_NoAllocs_3);
      set_field(noAllocs_1_1_0, FIX::AllocClearingFeeIndicator{"STRING_1066782681"}, TrdAllocGrp_NoAllocs_3);
      set_field(noAllocs_1_1_0, FIX::AllocCustomerCapacity{"STRING_1168474769"}, TrdAllocGrp_NoAllocs_3);
      set_field(noAllocs_1_1_0, FIX::AllocMethod{3}, TrdAllocGrp_NoAllocs_3);
      FIX::AllocQty AllocQty_36;
      AllocQty_36.setString("21175750");
set_field(noAllocs_1_1_0, AllocQty_36, TrdAllocGrp_NoAllocs_3);
      set_field(noAllocs_1_1_0, FIX::AllocSettlCurrency{"CHF"}, TrdAllocGrp_NoAllocs_3);
      set_field(noAllocs_1_1_0, FIX::IndividualAllocID{"STRING_123605795"}, TrdAllocGrp_NoAllocs_3);
      set_field(noAllocs_1_1_0, FIX::SecondaryIndividualAllocID{"STRING_1647833770"}, TrdAllocGrp_NoAllocs_3);
      all_values.push_back(TrdAllocGrp_NoAllocs_3);
      all_compo_names.insert("...NoSides...NoAllocs");

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs noNested2PartyIDs_1_0_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_54;
        set_field(noNested2PartyIDs_1_0_2_0, FIX::Nested2PartyID{"STRING_628218449"}, NestedParties2_NoNested2PartyIDs_54);
        set_field(noNested2PartyIDs_1_0_2_0, FIX::Nested2PartyIDSource{'1'}, NestedParties2_NoNested2PartyIDs_54);
        set_field(noNested2PartyIDs_1_0_2_0, FIX::Nested2PartyRole{540624694}, NestedParties2_NoNested2PartyIDs_54);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_54);
        all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_117;
          set_field(noNested2PartySubIDs_1_0_0_3_0, FIX::Nested2PartySubID{"STRING_791138707"}, NstdPtys2SubGrp_NoNested2PartySubIDs_117);
          set_field(noNested2PartySubIDs_1_0_0_3_0, FIX::Nested2PartySubIDType{1365158043}, NstdPtys2SubGrp_NoNested2PartySubIDs_117);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_117);
          all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_1_0_2_0.addGroup(noNested2PartySubIDs_1_0_0_3_0);
        }
        noAllocs_1_1_0.addGroup(noNested2PartyIDs_1_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs noNested2PartyIDs_1_0_2_1;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_55;
        set_field(noNested2PartyIDs_1_0_2_1, FIX::Nested2PartyID{"STRING_39290077"}, NestedParties2_NoNested2PartyIDs_55);
        set_field(noNested2PartyIDs_1_0_2_1, FIX::Nested2PartyIDSource{'4'}, NestedParties2_NoNested2PartyIDs_55);
        set_field(noNested2PartyIDs_1_0_2_1, FIX::Nested2PartyRole{1373274826}, NestedParties2_NoNested2PartyIDs_55);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_55);
        all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_1_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_118;
          set_field(noNested2PartySubIDs_1_0_1_3_0, FIX::Nested2PartySubID{"STRING_952213630"}, NstdPtys2SubGrp_NoNested2PartySubIDs_118);
          set_field(noNested2PartySubIDs_1_0_1_3_0, FIX::Nested2PartySubIDType{931338902}, NstdPtys2SubGrp_NoNested2PartySubIDs_118);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_118);
          all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_1_0_2_1.addGroup(noNested2PartySubIDs_1_0_1_3_0);
        }
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_1_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_119;
          set_field(noNested2PartySubIDs_1_0_1_3_1, FIX::Nested2PartySubID{"STRING_1053568096"}, NstdPtys2SubGrp_NoNested2PartySubIDs_119);
          set_field(noNested2PartySubIDs_1_0_1_3_1, FIX::Nested2PartySubIDType{2064843365}, NstdPtys2SubGrp_NoNested2PartySubIDs_119);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_119);
          all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_1_0_2_1.addGroup(noNested2PartySubIDs_1_0_1_3_1);
        }
        noAllocs_1_1_0.addGroup(noNested2PartyIDs_1_0_2_1);
      }
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs noNested2PartyIDs_1_0_2_2;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_56;
        set_field(noNested2PartyIDs_1_0_2_2, FIX::Nested2PartyID{"STRING_536018968"}, NestedParties2_NoNested2PartyIDs_56);
        set_field(noNested2PartyIDs_1_0_2_2, FIX::Nested2PartyIDSource{'1'}, NestedParties2_NoNested2PartyIDs_56);
        set_field(noNested2PartyIDs_1_0_2_2, FIX::Nested2PartyRole{575142523}, NestedParties2_NoNested2PartyIDs_56);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_56);
        all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_2_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_120;
          set_field(noNested2PartySubIDs_1_0_2_3_0, FIX::Nested2PartySubID{"STRING_974049694"}, NstdPtys2SubGrp_NoNested2PartySubIDs_120);
          set_field(noNested2PartySubIDs_1_0_2_3_0, FIX::Nested2PartySubIDType{634716323}, NstdPtys2SubGrp_NoNested2PartySubIDs_120);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_120);
          all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_1_0_2_2.addGroup(noNested2PartySubIDs_1_0_2_3_0);
        }
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_2_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_121;
          set_field(noNested2PartySubIDs_1_0_2_3_1, FIX::Nested2PartySubID{"STRING_219138155"}, NstdPtys2SubGrp_NoNested2PartySubIDs_121);
          set_field(noNested2PartySubIDs_1_0_2_3_1, FIX::Nested2PartySubIDType{878763624}, NstdPtys2SubGrp_NoNested2PartySubIDs_121);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_121);
          all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_1_0_2_2.addGroup(noNested2PartySubIDs_1_0_2_3_1);
        }
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_2_3_2;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_122;
          set_field(noNested2PartySubIDs_1_0_2_3_2, FIX::Nested2PartySubID{"STRING_1701499004"}, NstdPtys2SubGrp_NoNested2PartySubIDs_122);
          set_field(noNested2PartySubIDs_1_0_2_3_2, FIX::Nested2PartySubIDType{1387612924}, NstdPtys2SubGrp_NoNested2PartySubIDs_122);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_122);
          all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_1_0_2_2.addGroup(noNested2PartySubIDs_1_0_2_3_2);
        }
        noAllocs_1_1_0.addGroup(noNested2PartyIDs_1_0_2_2);
      }
      noSides_0_1.addGroup(noAllocs_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoAllocs noAllocs_1_1_1;
      // TrdAllocGrp.NoAllocs
      multiset<string> TrdAllocGrp_NoAllocs_4;
      set_field(noAllocs_1_1_1, FIX::AllocAccount{"STRING_489111870"}, TrdAllocGrp_NoAllocs_4);
      set_field(noAllocs_1_1_1, FIX::AllocAcctIDSource{1671590425}, TrdAllocGrp_NoAllocs_4);
      set_field(noAllocs_1_1_1, FIX::AllocClearingFeeIndicator{"STRING_1056960520"}, TrdAllocGrp_NoAllocs_4);
      set_field(noAllocs_1_1_1, FIX::AllocCustomerCapacity{"STRING_1538185096"}, TrdAllocGrp_NoAllocs_4);
      set_field(noAllocs_1_1_1, FIX::AllocMethod{2}, TrdAllocGrp_NoAllocs_4);
      FIX::AllocQty AllocQty_37;
      AllocQty_37.setString("5573106");
set_field(noAllocs_1_1_1, AllocQty_37, TrdAllocGrp_NoAllocs_4);
      set_field(noAllocs_1_1_1, FIX::AllocSettlCurrency{"JPY"}, TrdAllocGrp_NoAllocs_4);
      set_field(noAllocs_1_1_1, FIX::IndividualAllocID{"STRING_1812753274"}, TrdAllocGrp_NoAllocs_4);
      set_field(noAllocs_1_1_1, FIX::SecondaryIndividualAllocID{"STRING_653311994"}, TrdAllocGrp_NoAllocs_4);
      all_values.push_back(TrdAllocGrp_NoAllocs_4);
      all_compo_names.insert("...NoSides...NoAllocs");

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs noNested2PartyIDs_1_1_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_57;
        set_field(noNested2PartyIDs_1_1_2_0, FIX::Nested2PartyID{"STRING_456408333"}, NestedParties2_NoNested2PartyIDs_57);
        set_field(noNested2PartyIDs_1_1_2_0, FIX::Nested2PartyIDSource{'2'}, NestedParties2_NoNested2PartyIDs_57);
        set_field(noNested2PartyIDs_1_1_2_0, FIX::Nested2PartyRole{75463039}, NestedParties2_NoNested2PartyIDs_57);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_57);
        all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_1_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_123;
          set_field(noNested2PartySubIDs_1_1_0_3_0, FIX::Nested2PartySubID{"STRING_1244261216"}, NstdPtys2SubGrp_NoNested2PartySubIDs_123);
          set_field(noNested2PartySubIDs_1_1_0_3_0, FIX::Nested2PartySubIDType{679519493}, NstdPtys2SubGrp_NoNested2PartySubIDs_123);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_123);
          all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_1_1_2_0.addGroup(noNested2PartySubIDs_1_1_0_3_0);
        }
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_1_0_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_124;
          set_field(noNested2PartySubIDs_1_1_0_3_1, FIX::Nested2PartySubID{"STRING_1832881230"}, NstdPtys2SubGrp_NoNested2PartySubIDs_124);
          set_field(noNested2PartySubIDs_1_1_0_3_1, FIX::Nested2PartySubIDType{28116471}, NstdPtys2SubGrp_NoNested2PartySubIDs_124);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_124);
          all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_1_1_2_0.addGroup(noNested2PartySubIDs_1_1_0_3_1);
        }
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_1_0_3_2;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_125;
          set_field(noNested2PartySubIDs_1_1_0_3_2, FIX::Nested2PartySubID{"STRING_1733087589"}, NstdPtys2SubGrp_NoNested2PartySubIDs_125);
          set_field(noNested2PartySubIDs_1_1_0_3_2, FIX::Nested2PartySubIDType{1750240948}, NstdPtys2SubGrp_NoNested2PartySubIDs_125);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_125);
          all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_1_1_2_0.addGroup(noNested2PartySubIDs_1_1_0_3_2);
        }
        noAllocs_1_1_1.addGroup(noNested2PartyIDs_1_1_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs noNested2PartyIDs_1_1_2_1;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_58;
        set_field(noNested2PartyIDs_1_1_2_1, FIX::Nested2PartyID{"STRING_564135439"}, NestedParties2_NoNested2PartyIDs_58);
        set_field(noNested2PartyIDs_1_1_2_1, FIX::Nested2PartyIDSource{'8'}, NestedParties2_NoNested2PartyIDs_58);
        set_field(noNested2PartyIDs_1_1_2_1, FIX::Nested2PartyRole{177899823}, NestedParties2_NoNested2PartyIDs_58);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_58);
        all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_1_1_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_126;
          set_field(noNested2PartySubIDs_1_1_1_3_0, FIX::Nested2PartySubID{"STRING_1816533351"}, NstdPtys2SubGrp_NoNested2PartySubIDs_126);
          set_field(noNested2PartySubIDs_1_1_1_3_0, FIX::Nested2PartySubIDType{812616147}, NstdPtys2SubGrp_NoNested2PartySubIDs_126);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_126);
          all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_1_1_2_1.addGroup(noNested2PartySubIDs_1_1_1_3_0);
        }
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_1_1_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_127;
          set_field(noNested2PartySubIDs_1_1_1_3_1, FIX::Nested2PartySubID{"STRING_1240812099"}, NstdPtys2SubGrp_NoNested2PartySubIDs_127);
          set_field(noNested2PartySubIDs_1_1_1_3_1, FIX::Nested2PartySubIDType{547813327}, NstdPtys2SubGrp_NoNested2PartySubIDs_127);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_127);
          all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_1_1_2_1.addGroup(noNested2PartySubIDs_1_1_1_3_1);
        }
        noAllocs_1_1_1.addGroup(noNested2PartyIDs_1_1_2_1);
      }
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs noNested2PartyIDs_1_1_2_2;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_59;
        set_field(noNested2PartyIDs_1_1_2_2, FIX::Nested2PartyID{"STRING_366631503"}, NestedParties2_NoNested2PartyIDs_59);
        set_field(noNested2PartyIDs_1_1_2_2, FIX::Nested2PartyIDSource{'4'}, NestedParties2_NoNested2PartyIDs_59);
        set_field(noNested2PartyIDs_1_1_2_2, FIX::Nested2PartyRole{1036925198}, NestedParties2_NoNested2PartyIDs_59);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_59);
        all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_1_2_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_128;
          set_field(noNested2PartySubIDs_1_1_2_3_0, FIX::Nested2PartySubID{"STRING_1537901895"}, NstdPtys2SubGrp_NoNested2PartySubIDs_128);
          set_field(noNested2PartySubIDs_1_1_2_3_0, FIX::Nested2PartySubIDType{427626646}, NstdPtys2SubGrp_NoNested2PartySubIDs_128);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_128);
          all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_1_1_2_2.addGroup(noNested2PartySubIDs_1_1_2_3_0);
        }
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_1_2_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_129;
          set_field(noNested2PartySubIDs_1_1_2_3_1, FIX::Nested2PartySubID{"STRING_1685934502"}, NstdPtys2SubGrp_NoNested2PartySubIDs_129);
          set_field(noNested2PartySubIDs_1_1_2_3_1, FIX::Nested2PartySubIDType{2095212538}, NstdPtys2SubGrp_NoNested2PartySubIDs_129);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_129);
          all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_1_1_2_2.addGroup(noNested2PartySubIDs_1_1_2_3_1);
        }
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_1_2_3_2;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_130;
          set_field(noNested2PartySubIDs_1_1_2_3_2, FIX::Nested2PartySubID{"STRING_540313946"}, NstdPtys2SubGrp_NoNested2PartySubIDs_130);
          set_field(noNested2PartySubIDs_1_1_2_3_2, FIX::Nested2PartySubIDType{1961865524}, NstdPtys2SubGrp_NoNested2PartySubIDs_130);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_130);
          all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_1_1_2_2.addGroup(noNested2PartySubIDs_1_1_2_3_2);
        }
        noAllocs_1_1_1.addGroup(noNested2PartyIDs_1_1_2_2);
      }
      noSides_0_1.addGroup(noAllocs_1_1_1);
    }
    msg.addGroup(noSides_0_1);
  }
  // TrdInstrmtLegGrp
  // Group TrdInstrmtLegGrp.NoLegs
  {
    FIX50SP2::TradeCaptureReport::NoLegs noLegs_0_0;
    // TrdInstrmtLegGrp.NoLegs
    multiset<string> TrdInstrmtLegGrp_NoLegs_0;
    FIX::LegCalculatedCcyLastQty LegCalculatedCcyLastQty_1;
    LegCalculatedCcyLastQty_1.setString("11936259");
set_field(noLegs_0_0, LegCalculatedCcyLastQty_1, TrdInstrmtLegGrp_NoLegs_0);
    set_field(noLegs_0_0, FIX::LegCoveredOrUncovered{1998038486}, TrdInstrmtLegGrp_NoLegs_0);
    FIX::LegCurrencyRatio LegCurrencyRatio_5;
    LegCurrencyRatio_5.setString("694068");
set_field(noLegs_0_0, LegCurrencyRatio_5, TrdInstrmtLegGrp_NoLegs_0);
    FIX::LegDividendYield LegDividendYield_5;
    LegDividendYield_5.setString("23.300000");
set_field(noLegs_0_0, LegDividendYield_5, TrdInstrmtLegGrp_NoLegs_0);
    set_field(noLegs_0_0, FIX::LegExecInst{"MULTIPLECHARVALUE_2073501525"}, TrdInstrmtLegGrp_NoLegs_0);
    FIX::LegGrossTradeAmt LegGrossTradeAmt_1;
    LegGrossTradeAmt_1.setString("9500744");
set_field(noLegs_0_0, LegGrossTradeAmt_1, TrdInstrmtLegGrp_NoLegs_0);
    FIX::LegLastForwardPoints LegLastForwardPoints_1;
    LegLastForwardPoints_1.setString("1613898");
set_field(noLegs_0_0, LegLastForwardPoints_1, TrdInstrmtLegGrp_NoLegs_0);
    FIX::LegLastPx LegLastPx_1;
    LegLastPx_1.setString("6055373");
set_field(noLegs_0_0, LegLastPx_1, TrdInstrmtLegGrp_NoLegs_0);
    FIX::LegLastQty LegLastQty_1;
    LegLastQty_1.setString("6354720");
set_field(noLegs_0_0, LegLastQty_1, TrdInstrmtLegGrp_NoLegs_0);
    set_field(noLegs_0_0, FIX::LegNumber{189506370}, TrdInstrmtLegGrp_NoLegs_0);
    set_field(noLegs_0_0, FIX::LegPositionEffect{'1'}, TrdInstrmtLegGrp_NoLegs_0);
    FIX::LegQty LegQty_16;
    LegQty_16.setString("2382293");
set_field(noLegs_0_0, LegQty_16, TrdInstrmtLegGrp_NoLegs_0);
    set_field(noLegs_0_0, FIX::LegRefID{"STRING_753641809"}, TrdInstrmtLegGrp_NoLegs_0);
    set_field(noLegs_0_0, FIX::LegReportID{"STRING_1033624969"}, TrdInstrmtLegGrp_NoLegs_0);
    set_field(noLegs_0_0, FIX::LegSettlCurrency{"CAN"}, TrdInstrmtLegGrp_NoLegs_0);
    set_field(noLegs_0_0, FIX::LegSettlDate{"LOCALMKTDATE_702674672"}, TrdInstrmtLegGrp_NoLegs_0);
    set_field(noLegs_0_0, FIX::LegSettlType{'1'}, TrdInstrmtLegGrp_NoLegs_0);
    set_field(noLegs_0_0, FIX::LegSwapType{1}, TrdInstrmtLegGrp_NoLegs_0);
    FIX::LegVolatility LegVolatility_5;
    LegVolatility_5.setString("12504880");
set_field(noLegs_0_0, LegVolatility_5, TrdInstrmtLegGrp_NoLegs_0);
    all_values.push_back(TrdInstrmtLegGrp_NoLegs_0);
    all_compo_names.insert("...NoLegs");

    // InstrumentLeg
    multiset<string> InstrumentLeg_114;
    set_field(noLegs_0_0, FIX::EncodedLegIssuer{"DATA_1595376807"}, InstrumentLeg_114);
    set_field(noLegs_0_0, FIX::EncodedLegIssuerLen{1349585580}, InstrumentLeg_114);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDesc{"DATA_139929550"}, InstrumentLeg_114);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDescLen{1486115088}, InstrumentLeg_114);
    set_field(noLegs_0_0, FIX::LegCFICode{"STRING_740003827"}, InstrumentLeg_114);
    FIX::LegContractMultiplier LegContractMultiplier_114;
    LegContractMultiplier_114.setString("5675561");
set_field(noLegs_0_0, LegContractMultiplier_114, InstrumentLeg_114);
    set_field(noLegs_0_0, FIX::LegContractMultiplierUnit{1024565942}, InstrumentLeg_114);
    set_field(noLegs_0_0, FIX::LegContractSettlMonth{"MONTHYEAR_687732717"}, InstrumentLeg_114);
    set_field(noLegs_0_0, FIX::LegCountryOfIssue{"COUNTRY_1107870142"}, InstrumentLeg_114);
    set_field(noLegs_0_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_838947818"}, InstrumentLeg_114);
    FIX::LegCouponRate LegCouponRate_114;
    LegCouponRate_114.setString("12.340000");
set_field(noLegs_0_0, LegCouponRate_114, InstrumentLeg_114);
    set_field(noLegs_0_0, FIX::LegCreditRating{"STRING_154012434"}, InstrumentLeg_114);
    set_field(noLegs_0_0, FIX::LegCurrency{"JPY"}, InstrumentLeg_114);
    set_field(noLegs_0_0, FIX::LegDatedDate{"LOCALMKTDATE_1218624765"}, InstrumentLeg_114);
    set_field(noLegs_0_0, FIX::LegExerciseStyle{615520533}, InstrumentLeg_114);
    FIX::LegFactor LegFactor_114;
    LegFactor_114.setString("13202125");
set_field(noLegs_0_0, LegFactor_114, InstrumentLeg_114);
    set_field(noLegs_0_0, FIX::LegFlowScheduleType{1380014664}, InstrumentLeg_114);
    set_field(noLegs_0_0, FIX::LegInstrRegistry{"STRING_1221057904"}, InstrumentLeg_114);
    set_field(noLegs_0_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1955684567"}, InstrumentLeg_114);
    set_field(noLegs_0_0, FIX::LegIssueDate{"LOCALMKTDATE_1569521034"}, InstrumentLeg_114);
    set_field(noLegs_0_0, FIX::LegIssuer{"STRING_1412199216"}, InstrumentLeg_114);
    set_field(noLegs_0_0, FIX::LegLocaleOfIssue{"STRING_46430252"}, InstrumentLeg_114);
    set_field(noLegs_0_0, FIX::LegMaturityDate{"LOCALMKTDATE_175679195"}, InstrumentLeg_114);
    set_field(noLegs_0_0, FIX::LegMaturityMonthYear{"MONTHYEAR_298340537"}, InstrumentLeg_114);
    set_field(noLegs_0_0, FIX::LegMaturityTime{"TZTIMEONLY_462559409"}, InstrumentLeg_114);
    set_field(noLegs_0_0, FIX::LegOptAttribute{'1'}, InstrumentLeg_114);
    FIX::LegOptionRatio LegOptionRatio_114;
    LegOptionRatio_114.setString("10010152");
set_field(noLegs_0_0, LegOptionRatio_114, InstrumentLeg_114);
    set_field(noLegs_0_0, FIX::LegPool{"STRING_1691304712"}, InstrumentLeg_114);
    set_field(noLegs_0_0, FIX::LegPriceUnitOfMeasure{"STRING_672155505"}, InstrumentLeg_114);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_114;
    LegPriceUnitOfMeasureQty_114.setString("1040195");
set_field(noLegs_0_0, LegPriceUnitOfMeasureQty_114, InstrumentLeg_114);
    set_field(noLegs_0_0, FIX::LegProduct{1139197871}, InstrumentLeg_114);
    set_field(noLegs_0_0, FIX::LegPutOrCall{2021741085}, InstrumentLeg_114);
    FIX::LegRatioQty LegRatioQty_114;
    LegRatioQty_114.setString("2439491");
set_field(noLegs_0_0, LegRatioQty_114, InstrumentLeg_114);
    set_field(noLegs_0_0, FIX::LegRedemptionDate{"LOCALMKTDATE_477829311"}, InstrumentLeg_114);
    set_field(noLegs_0_0, FIX::LegRepoCollateralSecurityType{"STRING_614261265"}, InstrumentLeg_114);
    FIX::LegRepurchaseRate LegRepurchaseRate_114;
    LegRepurchaseRate_114.setString("53.070000");
set_field(noLegs_0_0, LegRepurchaseRate_114, InstrumentLeg_114);
    set_field(noLegs_0_0, FIX::LegRepurchaseTerm{1502395253}, InstrumentLeg_114);
    set_field(noLegs_0_0, FIX::LegSecurityDesc{"STRING_1301993982"}, InstrumentLeg_114);
    set_field(noLegs_0_0, FIX::LegSecurityExchange{"EXCHANGE_1919375449"}, InstrumentLeg_114);
    set_field(noLegs_0_0, FIX::LegSecurityID{"STRING_193859424"}, InstrumentLeg_114);
    set_field(noLegs_0_0, FIX::LegSecurityIDSource{"STRING_1602725216"}, InstrumentLeg_114);
    set_field(noLegs_0_0, FIX::LegSecuritySubType{"STRING_2073387884"}, InstrumentLeg_114);
    set_field(noLegs_0_0, FIX::LegSecurityType{"STRING_883362080"}, InstrumentLeg_114);
    set_field(noLegs_0_0, FIX::LegSide{'1'}, InstrumentLeg_114);
    set_field(noLegs_0_0, FIX::LegStateOrProvinceOfIssue{"STRING_1144529001"}, InstrumentLeg_114);
    set_field(noLegs_0_0, FIX::LegStrikeCurrency{"EUR"}, InstrumentLeg_114);
    FIX::LegStrikePrice LegStrikePrice_114;
    LegStrikePrice_114.setString("3770600");
set_field(noLegs_0_0, LegStrikePrice_114, InstrumentLeg_114);
    set_field(noLegs_0_0, FIX::LegSymbol{"STRING_572456870"}, InstrumentLeg_114);
    set_field(noLegs_0_0, FIX::LegSymbolSfx{"STRING_953793106"}, InstrumentLeg_114);
    set_field(noLegs_0_0, FIX::LegTimeUnit{"STRING_1946581051"}, InstrumentLeg_114);
    set_field(noLegs_0_0, FIX::LegUnitOfMeasure{"STRING_1984656086"}, InstrumentLeg_114);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_114;
    LegUnitOfMeasureQty_114.setString("10002233");
set_field(noLegs_0_0, LegUnitOfMeasureQty_114, InstrumentLeg_114);
    all_values.push_back(InstrumentLeg_114);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_239;
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltID{"STRING_135512975"}, LegSecAltIDGrp_NoLegSecurityAltID_239);
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltIDSource{"STRING_1462782768"}, LegSecAltIDGrp_NoLegSecurityAltID_239);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_239);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoLegStipulations noLegStipulations_0_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_49;
      set_field(noLegStipulations_0_1_0, FIX::LegStipulationType{"STRING_1136528184"}, LegStipulations_NoLegStipulations_49);
      set_field(noLegStipulations_0_1_0, FIX::LegStipulationValue{"STRING_1006603832"}, LegStipulations_NoLegStipulations_49);
      all_values.push_back(LegStipulations_NoLegStipulations_49);
      all_compo_names.insert("...NoLegs...NoLegStipulations");

      noLegs_0_0.addGroup(noLegStipulations_0_1_0);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_129;
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyID{"STRING_1240547746"}, NestedParties_NoNestedPartyIDs_129);
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyIDSource{'2'}, NestedParties_NoNestedPartyIDs_129);
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyRole{324700842}, NestedParties_NoNestedPartyIDs_129);
      all_values.push_back(NestedParties_NoNestedPartyIDs_129);
      all_compo_names.insert("...NoLegs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_260;
        set_field(noNestedPartySubIDs_0_0_2_0, FIX::NestedPartySubID{"STRING_476147367"}, NstdPtysSubGrp_NoNestedPartySubIDs_260);
        set_field(noNestedPartySubIDs_0_0_2_0, FIX::NestedPartySubIDType{938962107}, NstdPtysSubGrp_NoNestedPartySubIDs_260);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_260);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_261;
        set_field(noNestedPartySubIDs_0_0_2_1, FIX::NestedPartySubID{"STRING_148518517"}, NstdPtysSubGrp_NoNestedPartySubIDs_261);
        set_field(noNestedPartySubIDs_0_0_2_1, FIX::NestedPartySubIDType{1978542621}, NstdPtysSubGrp_NoNestedPartySubIDs_261);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_261);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_262;
        set_field(noNestedPartySubIDs_0_0_2_2, FIX::NestedPartySubID{"STRING_93472442"}, NstdPtysSubGrp_NoNestedPartySubIDs_262);
        set_field(noNestedPartySubIDs_0_0_2_2, FIX::NestedPartySubIDType{2067893966}, NstdPtysSubGrp_NoNestedPartySubIDs_262);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_262);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_2);
      }
      noLegs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_130;
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyID{"STRING_24918397"}, NestedParties_NoNestedPartyIDs_130);
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_130);
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyRole{1993798202}, NestedParties_NoNestedPartyIDs_130);
      all_values.push_back(NestedParties_NoNestedPartyIDs_130);
      all_compo_names.insert("...NoLegs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_263;
        set_field(noNestedPartySubIDs_0_1_2_0, FIX::NestedPartySubID{"STRING_1521577311"}, NstdPtysSubGrp_NoNestedPartySubIDs_263);
        set_field(noNestedPartySubIDs_0_1_2_0, FIX::NestedPartySubIDType{990843555}, NstdPtysSubGrp_NoNestedPartySubIDs_263);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_263);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      noLegs_0_0.addGroup(noNestedPartyIDs_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_131;
      set_field(noNestedPartyIDs_0_1_2, FIX::NestedPartyID{"STRING_259679443"}, NestedParties_NoNestedPartyIDs_131);
      set_field(noNestedPartyIDs_0_1_2, FIX::NestedPartyIDSource{'5'}, NestedParties_NoNestedPartyIDs_131);
      set_field(noNestedPartyIDs_0_1_2, FIX::NestedPartyRole{1367903572}, NestedParties_NoNestedPartyIDs_131);
      all_values.push_back(NestedParties_NoNestedPartyIDs_131);
      all_compo_names.insert("...NoLegs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_264;
        set_field(noNestedPartySubIDs_0_2_2_0, FIX::NestedPartySubID{"STRING_1473478956"}, NstdPtysSubGrp_NoNestedPartySubIDs_264);
        set_field(noNestedPartySubIDs_0_2_2_0, FIX::NestedPartySubIDType{1167000975}, NstdPtysSubGrp_NoNestedPartySubIDs_264);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_264);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_2.addGroup(noNestedPartySubIDs_0_2_2_0);
      }
      noLegs_0_0.addGroup(noNestedPartyIDs_0_1_2);
    }
    // TradeCapLegUnderlyingsGrp
    // Group TradeCapLegUnderlyingsGrp.NoOfLegUnderlyings
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoOfLegUnderlyings noOfLegUnderlyings_0_1_0;
      // TradeCapLegUnderlyingsGrp.NoOfLegUnderlyings
      // UnderlyingLegInstrument
      multiset<string> UnderlyingLegInstrument_0;
      set_field(noOfLegUnderlyings_0_1_0, FIX::UnderlyingLegCFICode{"STRING_326218667"}, UnderlyingLegInstrument_0);
      set_field(noOfLegUnderlyings_0_1_0, FIX::UnderlyingLegMaturityDate{"LOCALMKTDATE_1141777574"}, UnderlyingLegInstrument_0);
      set_field(noOfLegUnderlyings_0_1_0, FIX::UnderlyingLegMaturityMonthYear{"MONTHYEAR_804821726"}, UnderlyingLegInstrument_0);
      set_field(noOfLegUnderlyings_0_1_0, FIX::UnderlyingLegMaturityTime{"TZTIMEONLY_1789001435"}, UnderlyingLegInstrument_0);
      set_field(noOfLegUnderlyings_0_1_0, FIX::UnderlyingLegOptAttribute{'9'}, UnderlyingLegInstrument_0);
      set_field(noOfLegUnderlyings_0_1_0, FIX::UnderlyingLegPutOrCall{1941349911}, UnderlyingLegInstrument_0);
      set_field(noOfLegUnderlyings_0_1_0, FIX::UnderlyingLegSecurityDesc{"STRING_648121620"}, UnderlyingLegInstrument_0);
      set_field(noOfLegUnderlyings_0_1_0, FIX::UnderlyingLegSecurityExchange{"STRING_1370508878"}, UnderlyingLegInstrument_0);
      set_field(noOfLegUnderlyings_0_1_0, FIX::UnderlyingLegSecurityID{"STRING_1034414009"}, UnderlyingLegInstrument_0);
      set_field(noOfLegUnderlyings_0_1_0, FIX::UnderlyingLegSecurityIDSource{"STRING_646439676"}, UnderlyingLegInstrument_0);
      set_field(noOfLegUnderlyings_0_1_0, FIX::UnderlyingLegSecuritySubType{"STRING_1695209721"}, UnderlyingLegInstrument_0);
      set_field(noOfLegUnderlyings_0_1_0, FIX::UnderlyingLegSecurityType{"STRING_371427218"}, UnderlyingLegInstrument_0);
      FIX::UnderlyingLegStrikePrice UnderlyingLegStrikePrice_0;
      UnderlyingLegStrikePrice_0.setString("11225870");
set_field(noOfLegUnderlyings_0_1_0, UnderlyingLegStrikePrice_0, UnderlyingLegInstrument_0);
      set_field(noOfLegUnderlyings_0_1_0, FIX::UnderlyingLegSymbol{"STRING_486688180"}, UnderlyingLegInstrument_0);
      set_field(noOfLegUnderlyings_0_1_0, FIX::UnderlyingLegSymbolSfx{"STRING_519945735"}, UnderlyingLegInstrument_0);
      all_values.push_back(UnderlyingLegInstrument_0);
      all_compo_names.insert("...NoLegs...NoOfLegUnderlyings.");

      // UnderlyingLegSecurityAltIDGrp
      // Group UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoOfLegUnderlyings::NoUnderlyingLegSecurityAltID noUnderlyingLegSecurityAltID_0_0_2_0;
        // UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
        multiset<string> UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_0;
        set_field(noUnderlyingLegSecurityAltID_0_0_2_0, FIX::UnderlyingLegSecurityAltID{"STRING_580160622"}, UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_0);
        set_field(noUnderlyingLegSecurityAltID_0_0_2_0, FIX::UnderlyingLegSecurityAltIDSource{"STRING_440356054"}, UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_0);
        all_values.push_back(UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_0);
        all_compo_names.insert("...NoLegs...NoOfLegUnderlyings....NoUnderlyingLegSecurityAltID");

        noOfLegUnderlyings_0_1_0.addGroup(noUnderlyingLegSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoOfLegUnderlyings::NoUnderlyingLegSecurityAltID noUnderlyingLegSecurityAltID_0_0_2_1;
        // UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
        multiset<string> UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_1;
        set_field(noUnderlyingLegSecurityAltID_0_0_2_1, FIX::UnderlyingLegSecurityAltID{"STRING_978564413"}, UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_1);
        set_field(noUnderlyingLegSecurityAltID_0_0_2_1, FIX::UnderlyingLegSecurityAltIDSource{"STRING_128874633"}, UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_1);
        all_values.push_back(UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_1);
        all_compo_names.insert("...NoLegs...NoOfLegUnderlyings....NoUnderlyingLegSecurityAltID");

        noOfLegUnderlyings_0_1_0.addGroup(noUnderlyingLegSecurityAltID_0_0_2_1);
      }
      noLegs_0_0.addGroup(noOfLegUnderlyings_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  // TrdRegTimestamps
  // Group TrdRegTimestamps.NoTrdRegTimestamps
  {
    FIX50SP2::TradeCaptureReport::NoTrdRegTimestamps noTrdRegTimestamps_0_0;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_22;
    set_field(noTrdRegTimestamps_0_0, FIX::DeskOrderHandlingInst{"MULTIPLESTRINGVALUE_DIR"}, TrdRegTimestamps_NoTrdRegTimestamps_22);
    set_field(noTrdRegTimestamps_0_0, FIX::DeskType{"STRING_S"}, TrdRegTimestamps_NoTrdRegTimestamps_22);
    set_field(noTrdRegTimestamps_0_0, FIX::DeskTypeSource{1}, TrdRegTimestamps_NoTrdRegTimestamps_22);
    set_field(noTrdRegTimestamps_0_0, FIX::TrdRegTimestamp{FIX::UTCTIMESTAMP(18, 28, 0, 2, 9, 2009)}, TrdRegTimestamps_NoTrdRegTimestamps_22);
    set_field(noTrdRegTimestamps_0_0, FIX::TrdRegTimestampOrigin{"STRING_1822351770"}, TrdRegTimestamps_NoTrdRegTimestamps_22);
    set_field(noTrdRegTimestamps_0_0, FIX::TrdRegTimestampType{1}, TrdRegTimestamps_NoTrdRegTimestamps_22);
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_22);
    all_compo_names.insert("...NoTrdRegTimestamps");

    msg.addGroup(noTrdRegTimestamps_0_0);
  }
  {
    FIX50SP2::TradeCaptureReport::NoTrdRegTimestamps noTrdRegTimestamps_0_1;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_23;
    set_field(noTrdRegTimestamps_0_1, FIX::DeskOrderHandlingInst{"MULTIPLESTRINGVALUE_TS"}, TrdRegTimestamps_NoTrdRegTimestamps_23);
    set_field(noTrdRegTimestamps_0_1, FIX::DeskType{"STRING_PR"}, TrdRegTimestamps_NoTrdRegTimestamps_23);
    set_field(noTrdRegTimestamps_0_1, FIX::DeskTypeSource{1}, TrdRegTimestamps_NoTrdRegTimestamps_23);
    set_field(noTrdRegTimestamps_0_1, FIX::TrdRegTimestamp{FIX::UTCTIMESTAMP(9, 54, 22, 1, 8, 2012)}, TrdRegTimestamps_NoTrdRegTimestamps_23);
    set_field(noTrdRegTimestamps_0_1, FIX::TrdRegTimestampOrigin{"STRING_1733534249"}, TrdRegTimestamps_NoTrdRegTimestamps_23);
    set_field(noTrdRegTimestamps_0_1, FIX::TrdRegTimestampType{1}, TrdRegTimestamps_NoTrdRegTimestamps_23);
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_23);
    all_compo_names.insert("...NoTrdRegTimestamps");

    msg.addGroup(noTrdRegTimestamps_0_1);
  }
  // TrdRepIndicatorsGrp
  // Group TrdRepIndicatorsGrp.NoTrdRepIndicators
  {
    FIX50SP2::TradeCaptureReport::NoTrdRepIndicators noTrdRepIndicators_0_0;
    // TrdRepIndicatorsGrp.NoTrdRepIndicators
    multiset<string> TrdRepIndicatorsGrp_NoTrdRepIndicators_0;
    set_field(noTrdRepIndicators_0_0, FIX::TrdRepIndicator{false}, TrdRepIndicatorsGrp_NoTrdRepIndicators_0);
    set_field(noTrdRepIndicators_0_0, FIX::TrdRepPartyRole{1416894570}, TrdRepIndicatorsGrp_NoTrdRepIndicators_0);
    all_values.push_back(TrdRepIndicatorsGrp_NoTrdRepIndicators_0);
    all_compo_names.insert("...NoTrdRepIndicators");

    msg.addGroup(noTrdRepIndicators_0_0);
  }
  {
    FIX50SP2::TradeCaptureReport::NoTrdRepIndicators noTrdRepIndicators_0_1;
    // TrdRepIndicatorsGrp.NoTrdRepIndicators
    multiset<string> TrdRepIndicatorsGrp_NoTrdRepIndicators_1;
    set_field(noTrdRepIndicators_0_1, FIX::TrdRepIndicator{true}, TrdRepIndicatorsGrp_NoTrdRepIndicators_1);
    set_field(noTrdRepIndicators_0_1, FIX::TrdRepPartyRole{1518261031}, TrdRepIndicatorsGrp_NoTrdRepIndicators_1);
    all_values.push_back(TrdRepIndicatorsGrp_NoTrdRepIndicators_1);
    all_compo_names.insert("...NoTrdRepIndicators");

    msg.addGroup(noTrdRepIndicators_0_1);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::TradeCaptureReport::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_134;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_457020070"}, UnderlyingInstrument_134);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{1257622274}, UnderlyingInstrument_134);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_1048737499"}, UnderlyingInstrument_134);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{1734534234}, UnderlyingInstrument_134);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_134;
    UnderlyingAdjustedQuantity_134.setString("12566629");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_134, UnderlyingInstrument_134);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_134;
    UnderlyingAllocationPercent_134.setString("16.450000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_134, UnderlyingInstrument_134);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_134;
    UnderlyingAttachmentPoint_134.setString("46.750000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_134, UnderlyingInstrument_134);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_2087839960"}, UnderlyingInstrument_134);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_420041099"}, UnderlyingInstrument_134);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_1749919739"}, UnderlyingInstrument_134);
    FIX::UnderlyingCapValue UnderlyingCapValue_134;
    UnderlyingCapValue_134.setString("14408420");
set_field(noUnderlyings_0_0, UnderlyingCapValue_134, UnderlyingInstrument_134);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_134;
    UnderlyingCashAmount_134.setString("949092");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_134, UnderlyingInstrument_134);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_134);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_134;
    UnderlyingContractMultiplier_134.setString("15986658");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_134, UnderlyingInstrument_134);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{1558778779}, UnderlyingInstrument_134);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_1840959544"}, UnderlyingInstrument_134);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1550355987"}, UnderlyingInstrument_134);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_134;
    UnderlyingCouponRate_134.setString("63.080000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_134, UnderlyingInstrument_134);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_495795590"}, UnderlyingInstrument_134);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"JPY"}, UnderlyingInstrument_134);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_134;
    UnderlyingCurrentValue_134.setString("8458413");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_134, UnderlyingInstrument_134);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_134;
    UnderlyingDetachmentPoint_134.setString("77.610000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_134, UnderlyingInstrument_134);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_134;
    UnderlyingDirtyPrice_134.setString("17202841");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_134, UnderlyingInstrument_134);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_134;
    UnderlyingEndPrice_134.setString("16825753");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_134, UnderlyingInstrument_134);
    FIX::UnderlyingEndValue UnderlyingEndValue_134;
    UnderlyingEndValue_134.setString("14765011");
set_field(noUnderlyings_0_0, UnderlyingEndValue_134, UnderlyingInstrument_134);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{112497084}, UnderlyingInstrument_134);
    FIX::UnderlyingFXRate UnderlyingFXRate_134;
    UnderlyingFXRate_134.setString("9519862");
set_field(noUnderlyings_0_0, UnderlyingFXRate_134, UnderlyingInstrument_134);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_134);
    FIX::UnderlyingFactor UnderlyingFactor_134;
    UnderlyingFactor_134.setString("16307581");
set_field(noUnderlyings_0_0, UnderlyingFactor_134, UnderlyingInstrument_134);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{350271782}, UnderlyingInstrument_134);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_2103870702"}, UnderlyingInstrument_134);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_740896741"}, UnderlyingInstrument_134);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_1399009281"}, UnderlyingInstrument_134);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_1690921288"}, UnderlyingInstrument_134);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1997559702"}, UnderlyingInstrument_134);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_322917278"}, UnderlyingInstrument_134);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1775905963"}, UnderlyingInstrument_134);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_134;
    UnderlyingNotionalPercentageOutstanding_134.setString("60.140000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_134, UnderlyingInstrument_134);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'7'}, UnderlyingInstrument_134);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_134;
    UnderlyingOriginalNotionalPercentageOutstanding_134.setString("20.540000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_134, UnderlyingInstrument_134);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1231274430"}, UnderlyingInstrument_134);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_134;
    UnderlyingPriceUnitOfMeasureQty_134.setString("8378675");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_134, UnderlyingInstrument_134);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{1640007135}, UnderlyingInstrument_134);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{682456676}, UnderlyingInstrument_134);
    FIX::UnderlyingPx UnderlyingPx_134;
    UnderlyingPx_134.setString("2491627");
set_field(noUnderlyings_0_0, UnderlyingPx_134, UnderlyingInstrument_134);
    FIX::UnderlyingQty UnderlyingQty_134;
    UnderlyingQty_134.setString("13334830");
set_field(noUnderlyings_0_0, UnderlyingQty_134, UnderlyingInstrument_134);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_85329015"}, UnderlyingInstrument_134);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1772449038"}, UnderlyingInstrument_134);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_134;
    UnderlyingRepurchaseRate_134.setString("86.220000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_134, UnderlyingInstrument_134);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{474305456}, UnderlyingInstrument_134);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_1759198904"}, UnderlyingInstrument_134);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_527636332"}, UnderlyingInstrument_134);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_73329570"}, UnderlyingInstrument_134);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_1331999371"}, UnderlyingInstrument_134);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_62727989"}, UnderlyingInstrument_134);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_1549830739"}, UnderlyingInstrument_134);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_1444496456"}, UnderlyingInstrument_134);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_1014714216"}, UnderlyingInstrument_134);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_1049197723"}, UnderlyingInstrument_134);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_134);
    FIX::UnderlyingStartValue UnderlyingStartValue_134;
    UnderlyingStartValue_134.setString("13649859");
set_field(noUnderlyings_0_0, UnderlyingStartValue_134, UnderlyingInstrument_134);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1005584777"}, UnderlyingInstrument_134);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"CHF"}, UnderlyingInstrument_134);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_134;
    UnderlyingStrikePrice_134.setString("5490224");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_134, UnderlyingInstrument_134);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_1518743719"}, UnderlyingInstrument_134);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_939428909"}, UnderlyingInstrument_134);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_177444733"}, UnderlyingInstrument_134);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_1309176085"}, UnderlyingInstrument_134);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_134;
    UnderlyingUnitOfMeasureQty_134.setString("16823872");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_134, UnderlyingInstrument_134);
    all_values.push_back(UnderlyingInstrument_134);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_275;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_392966868"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_275);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_372771237"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_275);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_275);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_276;
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltID{"STRING_1048310275"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_276);
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1075423544"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_276);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_276);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_277;
      set_field(noUnderlyingSecurityAltID_0_1_2, FIX::UnderlyingSecurityAltID{"STRING_621933967"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_277);
      set_field(noUnderlyingSecurityAltID_0_1_2, FIX::UnderlyingSecurityAltIDSource{"STRING_234309659"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_277);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_277);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_275;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_246899358"}, UnderlyingStipulations_NoUnderlyingStips_275);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_2063588281"}, UnderlyingStipulations_NoUnderlyingStips_275);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_275);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_276;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_2006098262"}, UndlyInstrumentParties_NoUndlyInstrumentParties_276);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'4'}, UndlyInstrumentParties_NoUndlyInstrumentParties_276);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{1708387586}, UndlyInstrumentParties_NoUndlyInstrumentParties_276);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_276);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_552;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_506468954"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_552);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{1110734678}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_552);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_552);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_553;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_487626794"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_553);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{1521183170}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_553);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_553);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_554;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_12448753"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_554);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_2, FIX::UnderlyingInstrumentPartySubIDType{1415397717}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_554);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_554);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_277;
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_738685520"}, UndlyInstrumentParties_NoUndlyInstrumentParties_277);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_277);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyRole{936581734}, UndlyInstrumentParties_NoUndlyInstrumentParties_277);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_277);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_555;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1567055947"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_555);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{307841805}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_555);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_555);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_556;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_147142412"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_556);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubIDType{1744500680}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_556);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_556);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_557;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_1617017891"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_557);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_2, FIX::UnderlyingInstrumentPartySubIDType{1829529699}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_557);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_557);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_278;
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyID{"STRING_1152803820"}, UndlyInstrumentParties_NoUndlyInstrumentParties_278);
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyIDSource{'2'}, UndlyInstrumentParties_NoUndlyInstrumentParties_278);
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyRole{54817288}, UndlyInstrumentParties_NoUndlyInstrumentParties_278);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_278);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_558;
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_937924655"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_558);
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_0, FIX::UnderlyingInstrumentPartySubIDType{676751256}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_558);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_558);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_559;
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_287940106"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_559);
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_1, FIX::UnderlyingInstrumentPartySubIDType{2098677215}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_559);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_559);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_1);
      }
      {
        FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_560;
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_923650614"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_560);
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_2, FIX::UnderlyingInstrumentPartySubIDType{204044739}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_560);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_560);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  // YieldData
  multiset<string> YieldData_27;
  FIX::Yield Yield_27;
  Yield_27.setString("15.840000");
set_field(msg, Yield_27, YieldData_27);
  set_field(msg, FIX::YieldCalcDate{"LOCALMKTDATE_782265228"}, YieldData_27);
  set_field(msg, FIX::YieldRedemptionDate{"LOCALMKTDATE_647785705"}, YieldData_27);
  FIX::YieldRedemptionPrice YieldRedemptionPrice_27;
  YieldRedemptionPrice_27.setString("11471555");
set_field(msg, YieldRedemptionPrice_27, YieldData_27);
  set_field(msg, FIX::YieldRedemptionPriceType{1972879214}, YieldData_27);
  set_field(msg, FIX::YieldType{"STRING_LASTMONTH"}, YieldData_27);
  all_values.push_back(YieldData_27);
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
