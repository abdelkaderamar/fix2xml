#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
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
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::TradeCaptureReport msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> TradeCaptureReport_0;
  set_field(msg, FIX::AsOfIndicator{'0'}, TradeCaptureReport_0);
  FIX::AvgPx AvgPx_7;
  AvgPx_7.setString("7952472");
set_field(msg, AvgPx_7, TradeCaptureReport_0);
  set_field(msg, FIX::AvgPxIndicator{2}, TradeCaptureReport_0);
  FIX::CalculatedCcyLastQty CalculatedCcyLastQty_1;
  CalculatedCcyLastQty_1.setString("9539294");
set_field(msg, CalculatedCcyLastQty_1, TradeCaptureReport_0);
  set_field(msg, FIX::ClearingBusinessDate{"LOCALMKTDATE_1007955780"}, TradeCaptureReport_0);
  set_field(msg, FIX::CopyMsgIndicator{true}, TradeCaptureReport_0);
  set_field(msg, FIX::Currency{"JPY"}, TradeCaptureReport_0);
  FIX::CurrencyRatio CurrencyRatio_0;
  CurrencyRatio_0.setString("10434344");
set_field(msg, CurrencyRatio_0, TradeCaptureReport_0);
  FIX::DividendYield DividendYield_1;
  DividendYield_1.setString("94.270000");
set_field(msg, DividendYield_1, TradeCaptureReport_0);
  set_field(msg, FIX::ExecID{"STRING_1044374960"}, TradeCaptureReport_0);
  set_field(msg, FIX::ExecRestatementReason{1}, TradeCaptureReport_0);
  set_field(msg, FIX::ExecType{'3'}, TradeCaptureReport_0);
  FIX::FeeMultiplier FeeMultiplier_0;
  FeeMultiplier_0.setString("1828619");
set_field(msg, FeeMultiplier_0, TradeCaptureReport_0);
  set_field(msg, FIX::FirmTradeID{"STRING_822186745"}, TradeCaptureReport_0);
  FIX::GrossTradeAmt GrossTradeAmt_5;
  GrossTradeAmt_5.setString("985888");
set_field(msg, GrossTradeAmt_5, TradeCaptureReport_0);
  FIX::LastForwardPoints LastForwardPoints_1;
  LastForwardPoints_1.setString("21248262");
set_field(msg, LastForwardPoints_1, TradeCaptureReport_0);
  set_field(msg, FIX::LastMkt{"EXCHANGE_374992170"}, TradeCaptureReport_0);
  FIX::LastParPx LastParPx_9;
  LastParPx_9.setString("15100818");
set_field(msg, LastParPx_9, TradeCaptureReport_0);
  FIX::LastPx LastPx_17;
  LastPx_17.setString("13914077");
set_field(msg, LastPx_17, TradeCaptureReport_0);
  FIX::LastQty LastQty_10;
  LastQty_10.setString("3382181");
set_field(msg, LastQty_10, TradeCaptureReport_0);
  set_field(msg, FIX::LastRptRequested{false}, TradeCaptureReport_0);
  FIX::LastSpotRate LastSpotRate_1;
  LastSpotRate_1.setString("18991374");
set_field(msg, LastSpotRate_1, TradeCaptureReport_0);
  FIX::LastSwapPoints LastSwapPoints_1;
  LastSwapPoints_1.setString("10210726");
set_field(msg, LastSwapPoints_1, TradeCaptureReport_0);
  set_field(msg, FIX::LastUpdateTime{FIX::UTCTIMESTAMP(3, 58, 57, 9, 6, 2014)}, TradeCaptureReport_0);
  set_field(msg, FIX::MarketID{"EXCHANGE_1977227170"}, TradeCaptureReport_0);
  set_field(msg, FIX::MarketSegmentID{"STRING_1293730669"}, TradeCaptureReport_0);
  set_field(msg, FIX::MatchStatus{'2'}, TradeCaptureReport_0);
  set_field(msg, FIX::MatchType{"STRING_AQ"}, TradeCaptureReport_0);
  set_field(msg, FIX::MessageEventSource{"STRING_154202802"}, TradeCaptureReport_0);
  set_field(msg, FIX::MultiLegReportingType{'3'}, TradeCaptureReport_0);
  set_field(msg, FIX::OrigSecondaryTradeID{"STRING_1441921821"}, TradeCaptureReport_0);
  set_field(msg, FIX::OrigTradeDate{"LOCALMKTDATE_845059558"}, TradeCaptureReport_0);
  set_field(msg, FIX::OrigTradeHandlingInstr{'1'}, TradeCaptureReport_0);
  set_field(msg, FIX::OrigTradeID{"STRING_1218717600"}, TradeCaptureReport_0);
  set_field(msg, FIX::PreviouslyReported{true}, TradeCaptureReport_0);
  set_field(msg, FIX::PriceType{17}, TradeCaptureReport_0);
  set_field(msg, FIX::PublishTrdIndicator{false}, TradeCaptureReport_0);
  set_field(msg, FIX::QtyType{0}, TradeCaptureReport_0);
  set_field(msg, FIX::RejectText{"STRING_1614860968"}, TradeCaptureReport_0);
  set_field(msg, FIX::ReportedPxDiff{false}, TradeCaptureReport_0);
  FIX::RiskFreeRate RiskFreeRate_3;
  RiskFreeRate_3.setString("20496390");
set_field(msg, RiskFreeRate_3, TradeCaptureReport_0);
  FIX::RndPx RndPx_3;
  RndPx_3.setString("19898531");
set_field(msg, RndPx_3, TradeCaptureReport_0);
  set_field(msg, FIX::SecondaryExecID{"STRING_333344411"}, TradeCaptureReport_0);
  set_field(msg, FIX::SecondaryFirmTradeID{"STRING_1293563224"}, TradeCaptureReport_0);
  set_field(msg, FIX::SecondaryTradeID{"STRING_180587611"}, TradeCaptureReport_0);
  set_field(msg, FIX::SecondaryTradeReportID{"STRING_873686528"}, TradeCaptureReport_0);
  set_field(msg, FIX::SecondaryTradeReportRefID{"STRING_1045217026"}, TradeCaptureReport_0);
  set_field(msg, FIX::SecondaryTrdType{1201660300}, TradeCaptureReport_0);
  set_field(msg, FIX::SettlCurrency{"USD"}, TradeCaptureReport_0);
  set_field(msg, FIX::SettlDate{"LOCALMKTDATE_1087885290"}, TradeCaptureReport_0);
  set_field(msg, FIX::SettlSessID{"STRING_RTH"}, TradeCaptureReport_0);
  set_field(msg, FIX::SettlSessSubID{"STRING_180708467"}, TradeCaptureReport_0);
  set_field(msg, FIX::SettlType{"STRING_0"}, TradeCaptureReport_0);
  set_field(msg, FIX::ShortSaleReason{1}, TradeCaptureReport_0);
  set_field(msg, FIX::SubscriptionRequestType{'1'}, TradeCaptureReport_0);
  set_field(msg, FIX::TZTransactTime{"TZTIMESTAMP_732615713"}, TradeCaptureReport_0);
  set_field(msg, FIX::TierCode{"STRING_1517442282"}, TradeCaptureReport_0);
  set_field(msg, FIX::TotNumTradeReports{794124922}, TradeCaptureReport_0);
  set_field(msg, FIX::TradeDate{"LOCALMKTDATE_886818515"}, TradeCaptureReport_0);
  set_field(msg, FIX::TradeHandlingInstr{'4'}, TradeCaptureReport_0);
  set_field(msg, FIX::TradeID{"STRING_88563095"}, TradeCaptureReport_0);
  set_field(msg, FIX::TradeLegRefID{"STRING_1731878073"}, TradeCaptureReport_0);
  set_field(msg, FIX::TradeLinkID{"STRING_494420291"}, TradeCaptureReport_0);
  set_field(msg, FIX::TradePublishIndicator{2}, TradeCaptureReport_0);
  set_field(msg, FIX::TradeReportID{"STRING_1473828943"}, TradeCaptureReport_0);
  set_field(msg, FIX::TradeReportRefID{"STRING_1287094514"}, TradeCaptureReport_0);
  set_field(msg, FIX::TradeReportTransType{3}, TradeCaptureReport_0);
  set_field(msg, FIX::TradeReportType{15}, TradeCaptureReport_0);
  set_field(msg, FIX::TradeRequestID{"STRING_754471835"}, TradeCaptureReport_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(4, 26, 33, 16, 10, 2003)}, TradeCaptureReport_0);
  set_field(msg, FIX::TransferReason{"STRING_1492093823"}, TradeCaptureReport_0);
  set_field(msg, FIX::TrdMatchID{"STRING_1979089237"}, TradeCaptureReport_0);
  set_field(msg, FIX::TrdRptStatus{1}, TradeCaptureReport_0);
  set_field(msg, FIX::TrdSubType{1}, TradeCaptureReport_0);
  set_field(msg, FIX::TrdType{47}, TradeCaptureReport_0);
  set_field(msg, FIX::UnderlyingSettlementDate{"LOCALMKTDATE_508210543"}, TradeCaptureReport_0);
  set_field(msg, FIX::UnderlyingTradingSessionID{"STRING_159411992"}, TradeCaptureReport_0);
  set_field(msg, FIX::UnderlyingTradingSessionSubID{"STRING_358375923"}, TradeCaptureReport_0);
  set_field(msg, FIX::UnsolicitedIndicator{true}, TradeCaptureReport_0);
  set_field(msg, FIX::VenueType{'P'}, TradeCaptureReport_0);
  FIX::Volatility Volatility_1;
  Volatility_1.setString("10909916");
set_field(msg, Volatility_1, TradeCaptureReport_0);
  all_values.push_back(TradeCaptureReport_0);

  all_compo_names.insert("TradeCaptureReport");

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_19;
  set_field(msg, FIX::ApplID{"STRING_1130043061"}, ApplicationSequenceControl_19);
  set_field(msg, FIX::ApplLastSeqNum{963988904}, ApplicationSequenceControl_19);
  set_field(msg, FIX::ApplResendFlag{true}, ApplicationSequenceControl_19);
  set_field(msg, FIX::ApplSeqNum{1614257141}, ApplicationSequenceControl_19);
  all_values.push_back(ApplicationSequenceControl_19);
  all_compo_names.insert(".");

  // FinancingDetails
  multiset<string> FinancingDetails_30;
  set_field(msg, FIX::AgreementCurrency{"JPY"}, FinancingDetails_30);
  set_field(msg, FIX::AgreementDate{"LOCALMKTDATE_2108677432"}, FinancingDetails_30);
  set_field(msg, FIX::AgreementDesc{"STRING_212349047"}, FinancingDetails_30);
  set_field(msg, FIX::AgreementID{"STRING_888549873"}, FinancingDetails_30);
  set_field(msg, FIX::DeliveryType{2}, FinancingDetails_30);
  set_field(msg, FIX::EndDate{"LOCALMKTDATE_244303448"}, FinancingDetails_30);
  FIX::MarginRatio MarginRatio_30;
  MarginRatio_30.setString("80.000000");
set_field(msg, MarginRatio_30, FinancingDetails_30);
  set_field(msg, FIX::StartDate{"LOCALMKTDATE_2002760133"}, FinancingDetails_30);
  set_field(msg, FIX::TerminationType{3}, FinancingDetails_30);
  all_values.push_back(FinancingDetails_30);
  all_compo_names.insert(".");

  // Instrument
  multiset<string> Instrument_97;
  FIX::AttachmentPoint AttachmentPoint_97;
  AttachmentPoint_97.setString("52.210000");
set_field(msg, AttachmentPoint_97, Instrument_97);
  set_field(msg, FIX::CFICode{"STRING_452117811"}, Instrument_97);
  set_field(msg, FIX::CPProgram{2}, Instrument_97);
  set_field(msg, FIX::CPRegType{"STRING_1887382017"}, Instrument_97);
  FIX::CapPrice CapPrice_97;
  CapPrice_97.setString("12295467");
set_field(msg, CapPrice_97, Instrument_97);
  FIX::ContractMultiplier ContractMultiplier_97;
  ContractMultiplier_97.setString("4978132");
set_field(msg, ContractMultiplier_97, Instrument_97);
  set_field(msg, FIX::ContractMultiplierUnit{0}, Instrument_97);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_1061152337"}, Instrument_97);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_889846962"}, Instrument_97);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_1210695717"}, Instrument_97);
  FIX::CouponRate CouponRate_97;
  CouponRate_97.setString("32.170000");
set_field(msg, CouponRate_97, Instrument_97);
  set_field(msg, FIX::CreditRating{"STRING_1398057505"}, Instrument_97);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_1370107710"}, Instrument_97);
  FIX::DetachmentPoint DetachmentPoint_97;
  DetachmentPoint_97.setString("54.920000");
set_field(msg, DetachmentPoint_97, Instrument_97);
  set_field(msg, FIX::EncodedIssuer{"DATA_1010658283"}, Instrument_97);
  set_field(msg, FIX::EncodedIssuerLen{1539971692}, Instrument_97);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_1282527129"}, Instrument_97);
  set_field(msg, FIX::EncodedSecurityDescLen{2140701344}, Instrument_97);
  set_field(msg, FIX::ExerciseStyle{1}, Instrument_97);
  FIX::Factor Factor_97;
  Factor_97.setString("11128536");
set_field(msg, Factor_97, Instrument_97);
  set_field(msg, FIX::FlexProductEligibilityIndicator{false}, Instrument_97);
  set_field(msg, FIX::FlexibleIndicator{true}, Instrument_97);
  FIX::FloorPrice FloorPrice_97;
  FloorPrice_97.setString("5275745");
set_field(msg, FloorPrice_97, Instrument_97);
  set_field(msg, FIX::FlowScheduleType{1}, Instrument_97);
  set_field(msg, FIX::InstrRegistry{"STRING_1621377996"}, Instrument_97);
  set_field(msg, FIX::InstrmtAssignmentMethod{'1'}, Instrument_97);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_669473272"}, Instrument_97);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_1865681444"}, Instrument_97);
  set_field(msg, FIX::Issuer{"STRING_1555832438"}, Instrument_97);
  set_field(msg, FIX::ListMethod{1}, Instrument_97);
  set_field(msg, FIX::LocaleOfIssue{"STRING_965201827"}, Instrument_97);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_848854011"}, Instrument_97);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_976867569"}, Instrument_97);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_1400767202"}, Instrument_97);
  FIX::MinPriceIncrement MinPriceIncrement_97;
  MinPriceIncrement_97.setString("5887523");
set_field(msg, MinPriceIncrement_97, Instrument_97);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_97;
  MinPriceIncrementAmount_97.setString("589306");
set_field(msg, MinPriceIncrementAmount_97, Instrument_97);
  set_field(msg, FIX::NTPositionLimit{1898580451}, Instrument_97);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_97;
  NotionalPercentageOutstanding_97.setString("45.730000");
set_field(msg, NotionalPercentageOutstanding_97, Instrument_97);
  set_field(msg, FIX::OptAttribute{'1'}, Instrument_97);
  FIX::OptPayoutAmount OptPayoutAmount_97;
  OptPayoutAmount_97.setString("6409437");
set_field(msg, OptPayoutAmount_97, Instrument_97);
  set_field(msg, FIX::OptPayoutType{1}, Instrument_97);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_97;
  OriginalNotionalPercentageOutstanding_97.setString("25.760000");
set_field(msg, OriginalNotionalPercentageOutstanding_97, Instrument_97);
  set_field(msg, FIX::Pool{"STRING_2039001270"}, Instrument_97);
  set_field(msg, FIX::PositionLimit{106580704}, Instrument_97);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_STD"}, Instrument_97);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_902175905"}, Instrument_97);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_97;
  PriceUnitOfMeasureQty_97.setString("16465523");
set_field(msg, PriceUnitOfMeasureQty_97, Instrument_97);
  set_field(msg, FIX::Product{9}, Instrument_97);
  set_field(msg, FIX::ProductComplex{"STRING_895393602"}, Instrument_97);
  set_field(msg, FIX::PutOrCall{1}, Instrument_97);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_1392675184"}, Instrument_97);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_355384791"}, Instrument_97);
  FIX::RepurchaseRate RepurchaseRate_97;
  RepurchaseRate_97.setString("46.450000");
set_field(msg, RepurchaseRate_97, Instrument_97);
  set_field(msg, FIX::RepurchaseTerm{1920249748}, Instrument_97);
  set_field(msg, FIX::RestructuringType{"STRING_MR"}, Instrument_97);
  set_field(msg, FIX::SecurityDesc{"STRING_738468993"}, Instrument_97);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_1188890537"}, Instrument_97);
  set_field(msg, FIX::SecurityGroup{"STRING_446043037"}, Instrument_97);
  set_field(msg, FIX::SecurityID{"STRING_456666790"}, Instrument_97);
  set_field(msg, FIX::SecurityIDSource{"STRING_4"}, Instrument_97);
  set_field(msg, FIX::SecurityStatus{"STRING_1"}, Instrument_97);
  set_field(msg, FIX::SecuritySubType{"STRING_1421868617"}, Instrument_97);
  set_field(msg, FIX::SecurityType{"STRING_CTB"}, Instrument_97);
  set_field(msg, FIX::Seniority{"STRING_SD"}, Instrument_97);
  set_field(msg, FIX::SettlMethod{'P'}, Instrument_97);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_2034845719"}, Instrument_97);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_2006591033"}, Instrument_97);
  set_field(msg, FIX::StrikeCurrency{"JPY"}, Instrument_97);
  FIX::StrikeMultiplier StrikeMultiplier_97;
  StrikeMultiplier_97.setString("9791903");
set_field(msg, StrikeMultiplier_97, Instrument_97);
  FIX::StrikePrice StrikePrice_97;
  StrikePrice_97.setString("10671927");
set_field(msg, StrikePrice_97, Instrument_97);
  set_field(msg, FIX::StrikePriceBoundaryMethod{4}, Instrument_97);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_97;
  StrikePriceBoundaryPrecision_97.setString("29.680000");
set_field(msg, StrikePriceBoundaryPrecision_97, Instrument_97);
  set_field(msg, FIX::StrikePriceDeterminationMethod{2}, Instrument_97);
  FIX::StrikeValue StrikeValue_97;
  StrikeValue_97.setString("5511603");
set_field(msg, StrikeValue_97, Instrument_97);
  set_field(msg, FIX::Symbol{"STRING_929727388"}, Instrument_97);
  set_field(msg, FIX::SymbolSfx{"STRING_WI"}, Instrument_97);
  set_field(msg, FIX::TimeUnit{"STRING_D"}, Instrument_97);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{3}, Instrument_97);
  set_field(msg, FIX::UnitOfMeasure{"STRING_Gal"}, Instrument_97);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_97;
  UnitOfMeasureQty_97.setString("20532584");
set_field(msg, UnitOfMeasureQty_97, Instrument_97);
  set_field(msg, FIX::ValuationMethod{"STRING_CDSD"}, Instrument_97);
  all_values.push_back(Instrument_97);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::TradeCaptureReport::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_197;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_197);
    FIX::ComplexEventPrice ComplexEventPrice_197;
    ComplexEventPrice_197.setString("2275065");
set_field(noComplexEvents_0_0, ComplexEventPrice_197, ComplexEvents_NoComplexEvents_197);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{3}, ComplexEvents_NoComplexEvents_197);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_197;
    ComplexEventPriceBoundaryPrecision_197.setString("84.270000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_197, ComplexEvents_NoComplexEvents_197);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_197);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{4}, ComplexEvents_NoComplexEvents_197);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_197;
    ComplexOptPayoutAmount_197.setString("2180015");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_197, ComplexEvents_NoComplexEvents_197);
    all_values.push_back(ComplexEvents_NoComplexEvents_197);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::TradeCaptureReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_401;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(10, 50, 44, 10, 2, 2011)}, ComplexEventDates_NoComplexEventDates_401);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(21, 13, 4, 11, 2, 2015)}, ComplexEventDates_NoComplexEventDates_401);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_401);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradeCaptureReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_806;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(20, 50, 32)}, ComplexEventTimes_NoComplexEventTimes_806);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(2, 27, 10)}, ComplexEventTimes_NoComplexEventTimes_806);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_806);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_402;
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(5, 19, 44, 1, 3, 2013)}, ComplexEventDates_NoComplexEventDates_402);
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(7, 52, 7, 3, 7, 2006)}, ComplexEventDates_NoComplexEventDates_402);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_402);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradeCaptureReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_807;
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(21, 6, 2)}, ComplexEventTimes_NoComplexEventTimes_807);
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(20, 0, 35)}, ComplexEventTimes_NoComplexEventTimes_807);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_807);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_808;
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(20, 25, 26)}, ComplexEventTimes_NoComplexEventTimes_808);
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(19, 45, 36)}, ComplexEventTimes_NoComplexEventTimes_808);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_808);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      {
        FIX50SP2::TradeCaptureReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_809;
        set_field(noComplexEventTimes_0_1_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(15, 55, 56)}, ComplexEventTimes_NoComplexEventTimes_809);
        set_field(noComplexEventTimes_0_1_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(1, 9, 41)}, ComplexEventTimes_NoComplexEventTimes_809);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_809);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::TradeCaptureReport::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_198;
    set_field(noComplexEvents_0_1, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_198);
    FIX::ComplexEventPrice ComplexEventPrice_198;
    ComplexEventPrice_198.setString("14080147");
set_field(noComplexEvents_0_1, ComplexEventPrice_198, ComplexEvents_NoComplexEvents_198);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceBoundaryMethod{4}, ComplexEvents_NoComplexEvents_198);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_198;
    ComplexEventPriceBoundaryPrecision_198.setString("93.400000");
set_field(noComplexEvents_0_1, ComplexEventPriceBoundaryPrecision_198, ComplexEvents_NoComplexEvents_198);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_198);
    set_field(noComplexEvents_0_1, FIX::ComplexEventType{5}, ComplexEvents_NoComplexEvents_198);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_198;
    ComplexOptPayoutAmount_198.setString("9289633");
set_field(noComplexEvents_0_1, ComplexOptPayoutAmount_198, ComplexEvents_NoComplexEvents_198);
    all_values.push_back(ComplexEvents_NoComplexEvents_198);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::TradeCaptureReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_403;
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(3, 44, 2, 23, 9, 2007)}, ComplexEventDates_NoComplexEventDates_403);
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(9, 54, 28, 19, 6, 2007)}, ComplexEventDates_NoComplexEventDates_403);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_403);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradeCaptureReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_810;
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(8, 22, 49)}, ComplexEventTimes_NoComplexEventTimes_810);
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(16, 51, 38)}, ComplexEventTimes_NoComplexEventTimes_810);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_810);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::TradeCaptureReport::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_199;
    set_field(noComplexEvents_0_2, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_199);
    FIX::ComplexEventPrice ComplexEventPrice_199;
    ComplexEventPrice_199.setString("17910058");
set_field(noComplexEvents_0_2, ComplexEventPrice_199, ComplexEvents_NoComplexEvents_199);
    set_field(noComplexEvents_0_2, FIX::ComplexEventPriceBoundaryMethod{5}, ComplexEvents_NoComplexEvents_199);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_199;
    ComplexEventPriceBoundaryPrecision_199.setString("99.560000");
set_field(noComplexEvents_0_2, ComplexEventPriceBoundaryPrecision_199, ComplexEvents_NoComplexEvents_199);
    set_field(noComplexEvents_0_2, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_199);
    set_field(noComplexEvents_0_2, FIX::ComplexEventType{3}, ComplexEvents_NoComplexEvents_199);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_199;
    ComplexOptPayoutAmount_199.setString("6204196");
set_field(noComplexEvents_0_2, ComplexOptPayoutAmount_199, ComplexEvents_NoComplexEvents_199);
    all_values.push_back(ComplexEvents_NoComplexEvents_199);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::TradeCaptureReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_404;
      set_field(noComplexEventDates_2_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(5, 46, 31, 16, 12, 2000)}, ComplexEventDates_NoComplexEventDates_404);
      set_field(noComplexEventDates_2_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(20, 46, 54, 11, 4, 2013)}, ComplexEventDates_NoComplexEventDates_404);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_404);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradeCaptureReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_811;
        set_field(noComplexEventTimes_2_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(20, 28, 2)}, ComplexEventTimes_NoComplexEventTimes_811);
        set_field(noComplexEventTimes_2_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(20, 45, 59)}, ComplexEventTimes_NoComplexEventTimes_811);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_811);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_812;
        set_field(noComplexEventTimes_2_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(2, 18, 49)}, ComplexEventTimes_NoComplexEventTimes_812);
        set_field(noComplexEventTimes_2_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(22, 3, 0)}, ComplexEventTimes_NoComplexEventTimes_812);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_812);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_1);
      }
      {
        FIX50SP2::TradeCaptureReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_813;
        set_field(noComplexEventTimes_2_0_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(0, 46, 2)}, ComplexEventTimes_NoComplexEventTimes_813);
        set_field(noComplexEventTimes_2_0_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(1, 2, 10)}, ComplexEventTimes_NoComplexEventTimes_813);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_813);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_2);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_405;
      set_field(noComplexEventDates_2_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(16, 4, 36, 19, 5, 2014)}, ComplexEventDates_NoComplexEventDates_405);
      set_field(noComplexEventDates_2_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(16, 11, 7, 21, 12, 2016)}, ComplexEventDates_NoComplexEventDates_405);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_405);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradeCaptureReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_814;
        set_field(noComplexEventTimes_2_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(10, 51, 10)}, ComplexEventTimes_NoComplexEventTimes_814);
        set_field(noComplexEventTimes_2_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(13, 5, 12)}, ComplexEventTimes_NoComplexEventTimes_814);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_814);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_815;
        set_field(noComplexEventTimes_2_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(9, 51, 42)}, ComplexEventTimes_NoComplexEventTimes_815);
        set_field(noComplexEventTimes_2_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(8, 36, 56)}, ComplexEventTimes_NoComplexEventTimes_815);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_815);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_1);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_1);
    }
    msg.addGroup(noComplexEvents_0_2);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::TradeCaptureReport::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_189;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_359587448"}, EvntGrp_NoEvents_189);
    FIX::EventPx EventPx_189;
    EventPx_189.setString("15876524");
set_field(noEvents_0_0, EventPx_189, EvntGrp_NoEvents_189);
    set_field(noEvents_0_0, FIX::EventText{"STRING_1685296390"}, EvntGrp_NoEvents_189);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(0, 53, 12, 4, 5, 2007)}, EvntGrp_NoEvents_189);
    set_field(noEvents_0_0, FIX::EventType{18}, EvntGrp_NoEvents_189);
    all_values.push_back(EvntGrp_NoEvents_189);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::TradeCaptureReport::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_190;
    set_field(noEvents_0_1, FIX::EventDate{"LOCALMKTDATE_2119404471"}, EvntGrp_NoEvents_190);
    FIX::EventPx EventPx_190;
    EventPx_190.setString("5240199");
set_field(noEvents_0_1, EventPx_190, EvntGrp_NoEvents_190);
    set_field(noEvents_0_1, FIX::EventText{"STRING_1422270458"}, EvntGrp_NoEvents_190);
    set_field(noEvents_0_1, FIX::EventTime{FIX::UTCTIMESTAMP(14, 29, 14, 26, 11, 2011)}, EvntGrp_NoEvents_190);
    set_field(noEvents_0_1, FIX::EventType{4}, EvntGrp_NoEvents_190);
    all_values.push_back(EvntGrp_NoEvents_190);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::TradeCaptureReport::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_185;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_483693860"}, InstrumentParties_NoInstrumentParties_185);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'4'}, InstrumentParties_NoInstrumentParties_185);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{1419396036}, InstrumentParties_NoInstrumentParties_185);
    all_values.push_back(InstrumentParties_NoInstrumentParties_185);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::TradeCaptureReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_371;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_465324310"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_371);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{872219884}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_371);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_371);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_372;
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubID{"STRING_806545373"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_372);
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubIDType{1049302604}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_372);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_372);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_373;
      set_field(noInstrumentPartySubIDs_0_1_2, FIX::InstrumentPartySubID{"STRING_1231807332"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_373);
      set_field(noInstrumentPartySubIDs_0_1_2, FIX::InstrumentPartySubIDType{246714218}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_373);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_373);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::TradeCaptureReport::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_186;
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyID{"STRING_587115347"}, InstrumentParties_NoInstrumentParties_186);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_186);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyRole{1449072026}, InstrumentParties_NoInstrumentParties_186);
    all_values.push_back(InstrumentParties_NoInstrumentParties_186);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::TradeCaptureReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_374;
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubID{"STRING_359749823"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_374);
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubIDType{1392861035}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_374);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_374);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_375;
      set_field(noInstrumentPartySubIDs_1_1_1, FIX::InstrumentPartySubID{"STRING_1690525776"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_375);
      set_field(noInstrumentPartySubIDs_1_1_1, FIX::InstrumentPartySubIDType{1711475202}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_375);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_375);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::TradeCaptureReport::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_187;
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyID{"STRING_305950644"}, InstrumentParties_NoInstrumentParties_187);
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_187);
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyRole{88011518}, InstrumentParties_NoInstrumentParties_187);
    all_values.push_back(InstrumentParties_NoInstrumentParties_187);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::TradeCaptureReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_376;
      set_field(noInstrumentPartySubIDs_2_1_0, FIX::InstrumentPartySubID{"STRING_1525062083"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_376);
      set_field(noInstrumentPartySubIDs_2_1_0, FIX::InstrumentPartySubIDType{1767036244}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_376);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_376);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_377;
      set_field(noInstrumentPartySubIDs_2_1_1, FIX::InstrumentPartySubID{"STRING_1244924183"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_377);
      set_field(noInstrumentPartySubIDs_2_1_1, FIX::InstrumentPartySubIDType{588598469}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_377);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_377);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_1);
    }
    {
      FIX50SP2::TradeCaptureReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_378;
      set_field(noInstrumentPartySubIDs_2_1_2, FIX::InstrumentPartySubID{"STRING_1566964354"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_378);
      set_field(noInstrumentPartySubIDs_2_1_2, FIX::InstrumentPartySubIDType{1596851085}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_378);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_378);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_2);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::TradeCaptureReport::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_195;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_629341209"}, SecAltIDGrp_NoSecurityAltID_195);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_1240447539"}, SecAltIDGrp_NoSecurityAltID_195);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_195);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::TradeCaptureReport::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_196;
    set_field(noSecurityAltID_0_1, FIX::SecurityAltID{"STRING_1414879140"}, SecAltIDGrp_NoSecurityAltID_196);
    set_field(noSecurityAltID_0_1, FIX::SecurityAltIDSource{"STRING_1060302215"}, SecAltIDGrp_NoSecurityAltID_196);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_196);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_194;
  set_field(msg, FIX::SecurityXML{"XMLDATA_512359927"}, SecurityXML_194);
  set_field(msg, FIX::SecurityXMLLen{254660398}, SecurityXML_194);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_1525626526"}, SecurityXML_194);
  all_values.push_back(SecurityXML_194);
  all_compo_names.insert("..");

  // PositionAmountData
  // Group PositionAmountData.NoPosAmt
  {
    FIX50SP2::TradeCaptureReport::NoPosAmt noPosAmt_0_0;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_15;
    FIX::PosAmt PosAmt_15;
    PosAmt_15.setString("10612057");
set_field(noPosAmt_0_0, PosAmt_15, PositionAmountData_NoPosAmt_15);
    set_field(noPosAmt_0_0, FIX::PosAmtType{"STRING_PREM"}, PositionAmountData_NoPosAmt_15);
    set_field(noPosAmt_0_0, FIX::PositionCurrency{"STRING_468903495"}, PositionAmountData_NoPosAmt_15);
    all_values.push_back(PositionAmountData_NoPosAmt_15);
    all_compo_names.insert("...NoPosAmt");

    msg.addGroup(noPosAmt_0_0);
  }
  {
    FIX50SP2::TradeCaptureReport::NoPosAmt noPosAmt_0_1;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_16;
    FIX::PosAmt PosAmt_16;
    PosAmt_16.setString("13079199");
set_field(noPosAmt_0_1, PosAmt_16, PositionAmountData_NoPosAmt_16);
    set_field(noPosAmt_0_1, FIX::PosAmtType{"STRING_ICPN"}, PositionAmountData_NoPosAmt_16);
    set_field(noPosAmt_0_1, FIX::PositionCurrency{"STRING_605001807"}, PositionAmountData_NoPosAmt_16);
    all_values.push_back(PositionAmountData_NoPosAmt_16);
    all_compo_names.insert("...NoPosAmt");

    msg.addGroup(noPosAmt_0_1);
  }
  {
    FIX50SP2::TradeCaptureReport::NoPosAmt noPosAmt_0_2;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_17;
    FIX::PosAmt PosAmt_17;
    PosAmt_17.setString("6095083");
set_field(noPosAmt_0_2, PosAmt_17, PositionAmountData_NoPosAmt_17);
    set_field(noPosAmt_0_2, FIX::PosAmtType{"STRING_CPN"}, PositionAmountData_NoPosAmt_17);
    set_field(noPosAmt_0_2, FIX::PositionCurrency{"STRING_964751630"}, PositionAmountData_NoPosAmt_17);
    all_values.push_back(PositionAmountData_NoPosAmt_17);
    all_compo_names.insert("...NoPosAmt");

    msg.addGroup(noPosAmt_0_2);
  }
  // RootParties
  // Group RootParties.NoRootPartyIDs
  {
    FIX50SP2::TradeCaptureReport::NoRootPartyIDs noRootPartyIDs_0_0;
    // RootParties.NoRootPartyIDs
    multiset<string> RootParties_NoRootPartyIDs_10;
    set_field(noRootPartyIDs_0_0, FIX::RootPartyID{"STRING_400648989"}, RootParties_NoRootPartyIDs_10);
    set_field(noRootPartyIDs_0_0, FIX::RootPartyIDSource{'5'}, RootParties_NoRootPartyIDs_10);
    set_field(noRootPartyIDs_0_0, FIX::RootPartyRole{160836399}, RootParties_NoRootPartyIDs_10);
    all_values.push_back(RootParties_NoRootPartyIDs_10);
    all_compo_names.insert("...NoRootPartyIDs");

    // RootSubParties
    // Group RootSubParties.NoRootPartySubIDs
    {
      FIX50SP2::TradeCaptureReport::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_0;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_18;
      set_field(noRootPartySubIDs_0_1_0, FIX::RootPartySubID{"STRING_616754703"}, RootSubParties_NoRootPartySubIDs_18);
      set_field(noRootPartySubIDs_0_1_0, FIX::RootPartySubIDType{1889057502}, RootSubParties_NoRootPartySubIDs_18);
      all_values.push_back(RootSubParties_NoRootPartySubIDs_18);
      all_compo_names.insert("...NoRootPartyIDs...NoRootPartySubIDs");

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_1;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_19;
      set_field(noRootPartySubIDs_0_1_1, FIX::RootPartySubID{"STRING_1440674024"}, RootSubParties_NoRootPartySubIDs_19);
      set_field(noRootPartySubIDs_0_1_1, FIX::RootPartySubIDType{236307299}, RootSubParties_NoRootPartySubIDs_19);
      all_values.push_back(RootSubParties_NoRootPartySubIDs_19);
      all_compo_names.insert("...NoRootPartyIDs...NoRootPartySubIDs");

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReport::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_2;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_20;
      set_field(noRootPartySubIDs_0_1_2, FIX::RootPartySubID{"STRING_986498037"}, RootSubParties_NoRootPartySubIDs_20);
      set_field(noRootPartySubIDs_0_1_2, FIX::RootPartySubIDType{2029272494}, RootSubParties_NoRootPartySubIDs_20);
      all_values.push_back(RootSubParties_NoRootPartySubIDs_20);
      all_compo_names.insert("...NoRootPartyIDs...NoRootPartySubIDs");

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_2);
    }
    msg.addGroup(noRootPartyIDs_0_0);
  }
  {
    FIX50SP2::TradeCaptureReport::NoRootPartyIDs noRootPartyIDs_0_1;
    // RootParties.NoRootPartyIDs
    multiset<string> RootParties_NoRootPartyIDs_11;
    set_field(noRootPartyIDs_0_1, FIX::RootPartyID{"STRING_1803271653"}, RootParties_NoRootPartyIDs_11);
    set_field(noRootPartyIDs_0_1, FIX::RootPartyIDSource{'4'}, RootParties_NoRootPartyIDs_11);
    set_field(noRootPartyIDs_0_1, FIX::RootPartyRole{812974126}, RootParties_NoRootPartyIDs_11);
    all_values.push_back(RootParties_NoRootPartyIDs_11);
    all_compo_names.insert("...NoRootPartyIDs");

    // RootSubParties
    // Group RootSubParties.NoRootPartySubIDs
    {
      FIX50SP2::TradeCaptureReport::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_1_1_0;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_21;
      set_field(noRootPartySubIDs_1_1_0, FIX::RootPartySubID{"STRING_1676313014"}, RootSubParties_NoRootPartySubIDs_21);
      set_field(noRootPartySubIDs_1_1_0, FIX::RootPartySubIDType{80369619}, RootSubParties_NoRootPartySubIDs_21);
      all_values.push_back(RootSubParties_NoRootPartySubIDs_21);
      all_compo_names.insert("...NoRootPartyIDs...NoRootPartySubIDs");

      noRootPartyIDs_0_1.addGroup(noRootPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_1_1_1;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_22;
      set_field(noRootPartySubIDs_1_1_1, FIX::RootPartySubID{"STRING_1345431430"}, RootSubParties_NoRootPartySubIDs_22);
      set_field(noRootPartySubIDs_1_1_1, FIX::RootPartySubIDType{41189294}, RootSubParties_NoRootPartySubIDs_22);
      all_values.push_back(RootSubParties_NoRootPartySubIDs_22);
      all_compo_names.insert("...NoRootPartyIDs...NoRootPartySubIDs");

      noRootPartyIDs_0_1.addGroup(noRootPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::TradeCaptureReport::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_1_1_2;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_23;
      set_field(noRootPartySubIDs_1_1_2, FIX::RootPartySubID{"STRING_335030017"}, RootSubParties_NoRootPartySubIDs_23);
      set_field(noRootPartySubIDs_1_1_2, FIX::RootPartySubIDType{723574308}, RootSubParties_NoRootPartySubIDs_23);
      all_values.push_back(RootSubParties_NoRootPartySubIDs_23);
      all_compo_names.insert("...NoRootPartyIDs...NoRootPartySubIDs");

      noRootPartyIDs_0_1.addGroup(noRootPartySubIDs_1_1_2);
    }
    msg.addGroup(noRootPartyIDs_0_1);
  }
  {
    FIX50SP2::TradeCaptureReport::NoRootPartyIDs noRootPartyIDs_0_2;
    // RootParties.NoRootPartyIDs
    multiset<string> RootParties_NoRootPartyIDs_12;
    set_field(noRootPartyIDs_0_2, FIX::RootPartyID{"STRING_1425769105"}, RootParties_NoRootPartyIDs_12);
    set_field(noRootPartyIDs_0_2, FIX::RootPartyIDSource{'1'}, RootParties_NoRootPartyIDs_12);
    set_field(noRootPartyIDs_0_2, FIX::RootPartyRole{1151019791}, RootParties_NoRootPartyIDs_12);
    all_values.push_back(RootParties_NoRootPartyIDs_12);
    all_compo_names.insert("...NoRootPartyIDs");

    // RootSubParties
    // Group RootSubParties.NoRootPartySubIDs
    {
      FIX50SP2::TradeCaptureReport::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_2_1_0;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_24;
      set_field(noRootPartySubIDs_2_1_0, FIX::RootPartySubID{"STRING_556672130"}, RootSubParties_NoRootPartySubIDs_24);
      set_field(noRootPartySubIDs_2_1_0, FIX::RootPartySubIDType{18096972}, RootSubParties_NoRootPartySubIDs_24);
      all_values.push_back(RootSubParties_NoRootPartySubIDs_24);
      all_compo_names.insert("...NoRootPartyIDs...NoRootPartySubIDs");

      noRootPartyIDs_0_2.addGroup(noRootPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_2_1_1;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_25;
      set_field(noRootPartySubIDs_2_1_1, FIX::RootPartySubID{"STRING_352190760"}, RootSubParties_NoRootPartySubIDs_25);
      set_field(noRootPartySubIDs_2_1_1, FIX::RootPartySubIDType{1166180498}, RootSubParties_NoRootPartySubIDs_25);
      all_values.push_back(RootSubParties_NoRootPartySubIDs_25);
      all_compo_names.insert("...NoRootPartyIDs...NoRootPartySubIDs");

      noRootPartyIDs_0_2.addGroup(noRootPartySubIDs_2_1_1);
    }
    {
      FIX50SP2::TradeCaptureReport::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_2_1_2;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_26;
      set_field(noRootPartySubIDs_2_1_2, FIX::RootPartySubID{"STRING_875703834"}, RootSubParties_NoRootPartySubIDs_26);
      set_field(noRootPartySubIDs_2_1_2, FIX::RootPartySubIDType{1316942390}, RootSubParties_NoRootPartySubIDs_26);
      all_values.push_back(RootSubParties_NoRootPartySubIDs_26);
      all_compo_names.insert("...NoRootPartyIDs...NoRootPartySubIDs");

      noRootPartyIDs_0_2.addGroup(noRootPartySubIDs_2_1_2);
    }
    msg.addGroup(noRootPartyIDs_0_2);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_37;
  set_field(msg, FIX::BenchmarkCurveCurrency{"CHF"}, SpreadOrBenchmarkCurveData_37);
  set_field(msg, FIX::BenchmarkCurveName{"STRING_FutureSWAP"}, SpreadOrBenchmarkCurveData_37);
  set_field(msg, FIX::BenchmarkCurvePoint{"STRING_1181902652"}, SpreadOrBenchmarkCurveData_37);
  FIX::BenchmarkPrice BenchmarkPrice_37;
  BenchmarkPrice_37.setString("11919647");
set_field(msg, BenchmarkPrice_37, SpreadOrBenchmarkCurveData_37);
  set_field(msg, FIX::BenchmarkPriceType{314956630}, SpreadOrBenchmarkCurveData_37);
  set_field(msg, FIX::BenchmarkSecurityID{"STRING_923476506"}, SpreadOrBenchmarkCurveData_37);
  set_field(msg, FIX::BenchmarkSecurityIDSource{"STRING_485155141"}, SpreadOrBenchmarkCurveData_37);
  FIX::Spread Spread_37;
  Spread_37.setString("5512639");
set_field(msg, Spread_37, SpreadOrBenchmarkCurveData_37);
  all_values.push_back(SpreadOrBenchmarkCurveData_37);
  all_compo_names.insert(".");

  // TrdCapRptSideGrp
  // Group TrdCapRptSideGrp.NoSides
  {
    FIX50SP2::TradeCaptureReport::NoSides noSides_0_0;
    // TrdCapRptSideGrp.NoSides
    multiset<string> TrdCapRptSideGrp_NoSides_0;
    set_field(noSides_0_0, FIX::Account{"STRING_366943987"}, TrdCapRptSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::AccountType{8}, TrdCapRptSideGrp_NoSides_0);
    FIX::AccruedInterestAmt AccruedInterestAmt_10;
    AccruedInterestAmt_10.setString("1983563");
set_field(noSides_0_0, AccruedInterestAmt_10, TrdCapRptSideGrp_NoSides_0);
    FIX::AccruedInterestRate AccruedInterestRate_5;
    AccruedInterestRate_5.setString("81.130000");
set_field(noSides_0_0, AccruedInterestRate_5, TrdCapRptSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::AcctIDSource{5}, TrdCapRptSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::AggressorIndicator{false}, TrdCapRptSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::AllocID{"STRING_1260287732"}, TrdCapRptSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::ComplianceID{"STRING_1837612580"}, TrdCapRptSideGrp_NoSides_0);
    FIX::Concession Concession_5;
    Concession_5.setString("19158586");
set_field(noSides_0_0, Concession_5, TrdCapRptSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::CustOrderCapacity{2}, TrdCapRptSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::EncodedText{"DATA_413703241"}, TrdCapRptSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::EncodedTextLen{1194144137}, TrdCapRptSideGrp_NoSides_0);
    FIX::EndAccruedInterestAmt EndAccruedInterestAmt_10;
    EndAccruedInterestAmt_10.setString("8440698");
set_field(noSides_0_0, EndAccruedInterestAmt_10, TrdCapRptSideGrp_NoSides_0);
    FIX::EndCash EndCash_10;
    EndCash_10.setString("15647230");
set_field(noSides_0_0, EndCash_10, TrdCapRptSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::ExDate{"LOCALMKTDATE_941333090"}, TrdCapRptSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::ExchangeRule{"STRING_1400742020"}, TrdCapRptSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::ExchangeSpecialInstructions{"STRING_1582820004"}, TrdCapRptSideGrp_NoSides_0);
    FIX::InterestAtMaturity InterestAtMaturity_5;
    InterestAtMaturity_5.setString("12935238");
set_field(noSides_0_0, InterestAtMaturity_5, TrdCapRptSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::NetGrossInd{1}, TrdCapRptSideGrp_NoSides_0);
    FIX::NetMoney NetMoney_5;
    NetMoney_5.setString("3110401");
set_field(noSides_0_0, NetMoney_5, TrdCapRptSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::NumDaysInterest{462982592}, TrdCapRptSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::OddLot{false}, TrdCapRptSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::OrderCategory{'6'}, TrdCapRptSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::OrderDelay{161184520}, TrdCapRptSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::OrderDelayUnit{11}, TrdCapRptSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::PositionEffect{'C'}, TrdCapRptSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::PreallocMethod{'0'}, TrdCapRptSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::ProcessCode{'1'}, TrdCapRptSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::RptSeq{1117029271}, TrdCapRptSideGrp_NoSides_0);
    FIX::SettlCurrAmt SettlCurrAmt_13;
    SettlCurrAmt_13.setString("10274050");
set_field(noSides_0_0, SettlCurrAmt_13, TrdCapRptSideGrp_NoSides_0);
    FIX::SettlCurrFxRate SettlCurrFxRate_13;
    SettlCurrFxRate_13.setString("11608915");
set_field(noSides_0_0, SettlCurrFxRate_13, TrdCapRptSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::SettlCurrFxRateCalc{'M'}, TrdCapRptSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::Side{'8'}, TrdCapRptSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::SideCurrency{"USD"}, TrdCapRptSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::SideExecID{"STRING_1726638165"}, TrdCapRptSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::SideFillStationCd{"STRING_1086433638"}, TrdCapRptSideGrp_NoSides_0);
    FIX::SideGrossTradeAmt SideGrossTradeAmt_0;
    SideGrossTradeAmt_0.setString("17766954");
set_field(noSides_0_0, SideGrossTradeAmt_0, TrdCapRptSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::SideLastQty{1416767097}, TrdCapRptSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::SideLiquidityInd{854808670}, TrdCapRptSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::SideMultiLegReportingType{2}, TrdCapRptSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::SideReasonCd{"STRING_1830470338"}, TrdCapRptSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::SideSettlCurrency{"JPY"}, TrdCapRptSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::SideTradeReportID{"STRING_1247709722"}, TrdCapRptSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::SideTrdSubTyp{842802249}, TrdCapRptSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::SolicitedFlag{true}, TrdCapRptSideGrp_NoSides_0);
    FIX::StartCash StartCash_10;
    StartCash_10.setString("6830460");
set_field(noSides_0_0, StartCash_10, TrdCapRptSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::Text{"STRING_2136326099"}, TrdCapRptSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::TimeBracket{"STRING_1741296690"}, TrdCapRptSideGrp_NoSides_0);
    FIX::TotalTakedown TotalTakedown_5;
    TotalTakedown_5.setString("9940862");
set_field(noSides_0_0, TotalTakedown_5, TrdCapRptSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::TradeAllocIndicator{5}, TrdCapRptSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::TradeInputDevice{"STRING_1034318165"}, TrdCapRptSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::TradeInputSource{"STRING_433995635"}, TrdCapRptSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::TradingSessionID{"STRING_4"}, TrdCapRptSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::TradingSessionSubID{"STRING_6"}, TrdCapRptSideGrp_NoSides_0);
    all_values.push_back(TrdCapRptSideGrp_NoSides_0);
    all_compo_names.insert("...NoSides");

    // ClrInstGrp
    // Group ClrInstGrp.NoClearingInstructions
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoClearingInstructions noClearingInstructions_0_1_0;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_17;
      set_field(noClearingInstructions_0_1_0, FIX::ClearingInstruction{8}, ClrInstGrp_NoClearingInstructions_17);
      all_values.push_back(ClrInstGrp_NoClearingInstructions_17);
      all_compo_names.insert("...NoSides...NoClearingInstructions");

      noSides_0_0.addGroup(noClearingInstructions_0_1_0);
    }
    // CommissionData
    multiset<string> CommissionData_24;
    set_field(noSides_0_0, FIX::CommCurrency{"CAN"}, CommissionData_24);
    set_field(noSides_0_0, FIX::CommType{'1'}, CommissionData_24);
    FIX::Commission Commission_27;
    Commission_27.setString("19210508");
set_field(noSides_0_0, Commission_27, CommissionData_24);
    set_field(noSides_0_0, FIX::FundRenewWaiv{'N'}, CommissionData_24);
    all_values.push_back(CommissionData_24);
    all_compo_names.insert("...NoSides.");

    // ContAmtGrp
    // Group ContAmtGrp.NoContAmts
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoContAmts noContAmts_0_1_0;
      // ContAmtGrp.NoContAmts
      multiset<string> ContAmtGrp_NoContAmts_1;
      set_field(noContAmts_0_1_0, FIX::ContAmtCurr{"GBP"}, ContAmtGrp_NoContAmts_1);
      set_field(noContAmts_0_1_0, FIX::ContAmtType{14}, ContAmtGrp_NoContAmts_1);
      FIX::ContAmtValue ContAmtValue_1;
      ContAmtValue_1.setString("717650");
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
      multiset<string> MiscFeesGrp_NoMiscFees_30;
      FIX::MiscFeeAmt MiscFeeAmt_30;
      MiscFeeAmt_30.setString("519671");
set_field(noMiscFees_0_1_0, MiscFeeAmt_30, MiscFeesGrp_NoMiscFees_30);
      set_field(noMiscFees_0_1_0, FIX::MiscFeeBasis{1}, MiscFeesGrp_NoMiscFees_30);
      set_field(noMiscFees_0_1_0, FIX::MiscFeeCurr{"JPY"}, MiscFeesGrp_NoMiscFees_30);
      set_field(noMiscFees_0_1_0, FIX::MiscFeeType{"STRING_2"}, MiscFeesGrp_NoMiscFees_30);
      all_values.push_back(MiscFeesGrp_NoMiscFees_30);
      all_compo_names.insert("...NoSides...NoMiscFees");

      noSides_0_0.addGroup(noMiscFees_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoMiscFees noMiscFees_0_1_1;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_31;
      FIX::MiscFeeAmt MiscFeeAmt_31;
      MiscFeeAmt_31.setString("6631698");
set_field(noMiscFees_0_1_1, MiscFeeAmt_31, MiscFeesGrp_NoMiscFees_31);
      set_field(noMiscFees_0_1_1, FIX::MiscFeeBasis{1}, MiscFeesGrp_NoMiscFees_31);
      set_field(noMiscFees_0_1_1, FIX::MiscFeeCurr{"JPY"}, MiscFeesGrp_NoMiscFees_31);
      set_field(noMiscFees_0_1_1, FIX::MiscFeeType{"STRING_8"}, MiscFeesGrp_NoMiscFees_31);
      all_values.push_back(MiscFeesGrp_NoMiscFees_31);
      all_compo_names.insert("...NoSides...NoMiscFees");

      noSides_0_0.addGroup(noMiscFees_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoMiscFees noMiscFees_0_1_2;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_32;
      FIX::MiscFeeAmt MiscFeeAmt_32;
      MiscFeeAmt_32.setString("16596875");
set_field(noMiscFees_0_1_2, MiscFeeAmt_32, MiscFeesGrp_NoMiscFees_32);
      set_field(noMiscFees_0_1_2, FIX::MiscFeeBasis{2}, MiscFeesGrp_NoMiscFees_32);
      set_field(noMiscFees_0_1_2, FIX::MiscFeeCurr{"JPY"}, MiscFeesGrp_NoMiscFees_32);
      set_field(noMiscFees_0_1_2, FIX::MiscFeeType{"STRING_4"}, MiscFeesGrp_NoMiscFees_32);
      all_values.push_back(MiscFeesGrp_NoMiscFees_32);
      all_compo_names.insert("...NoSides...NoMiscFees");

      noSides_0_0.addGroup(noMiscFees_0_1_2);
    }
    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoPartyIDs noPartyIDs_0_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_149;
      set_field(noPartyIDs_0_1_0, FIX::PartyID{"STRING_577038540"}, Parties_NoPartyIDs_149);
      set_field(noPartyIDs_0_1_0, FIX::PartyIDSource{'2'}, Parties_NoPartyIDs_149);
      set_field(noPartyIDs_0_1_0, FIX::PartyRole{64}, Parties_NoPartyIDs_149);
      all_values.push_back(Parties_NoPartyIDs_149);
      all_compo_names.insert("...NoSides...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_296;
        set_field(noPartySubIDs_0_0_2_0, FIX::PartySubID{"STRING_587593192"}, PtysSubGrp_NoPartySubIDs_296);
        set_field(noPartySubIDs_0_0_2_0, FIX::PartySubIDType{24}, PtysSubGrp_NoPartySubIDs_296);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_296);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_0);
      }
      noSides_0_0.addGroup(noPartyIDs_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoPartyIDs noPartyIDs_0_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_150;
      set_field(noPartyIDs_0_1_1, FIX::PartyID{"STRING_1635261400"}, Parties_NoPartyIDs_150);
      set_field(noPartyIDs_0_1_1, FIX::PartyIDSource{'7'}, Parties_NoPartyIDs_150);
      set_field(noPartyIDs_0_1_1, FIX::PartyRole{9}, Parties_NoPartyIDs_150);
      all_values.push_back(Parties_NoPartyIDs_150);
      all_compo_names.insert("...NoSides...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_297;
        set_field(noPartySubIDs_0_1_2_0, FIX::PartySubID{"STRING_1493975414"}, PtysSubGrp_NoPartySubIDs_297);
        set_field(noPartySubIDs_0_1_2_0, FIX::PartySubIDType{33}, PtysSubGrp_NoPartySubIDs_297);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_297);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_298;
        set_field(noPartySubIDs_0_1_2_1, FIX::PartySubID{"STRING_1473990591"}, PtysSubGrp_NoPartySubIDs_298);
        set_field(noPartySubIDs_0_1_2_1, FIX::PartySubIDType{27}, PtysSubGrp_NoPartySubIDs_298);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_298);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_299;
        set_field(noPartySubIDs_0_1_2_2, FIX::PartySubID{"STRING_825335288"}, PtysSubGrp_NoPartySubIDs_299);
        set_field(noPartySubIDs_0_1_2_2, FIX::PartySubIDType{33}, PtysSubGrp_NoPartySubIDs_299);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_299);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_2);
      }
      noSides_0_0.addGroup(noPartyIDs_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoPartyIDs noPartyIDs_0_1_2;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_151;
      set_field(noPartyIDs_0_1_2, FIX::PartyID{"STRING_344830540"}, Parties_NoPartyIDs_151);
      set_field(noPartyIDs_0_1_2, FIX::PartyIDSource{'D'}, Parties_NoPartyIDs_151);
      set_field(noPartyIDs_0_1_2, FIX::PartyRole{54}, Parties_NoPartyIDs_151);
      all_values.push_back(Parties_NoPartyIDs_151);
      all_compo_names.insert("...NoSides...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_2_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_300;
        set_field(noPartySubIDs_0_2_2_0, FIX::PartySubID{"STRING_83075621"}, PtysSubGrp_NoPartySubIDs_300);
        set_field(noPartySubIDs_0_2_2_0, FIX::PartySubIDType{17}, PtysSubGrp_NoPartySubIDs_300);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_300);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_2.addGroup(noPartySubIDs_0_2_2_0);
      }
      noSides_0_0.addGroup(noPartyIDs_0_1_2);
    }
    // SettlDetails
    // Group SettlDetails.NoSettlDetails
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails noSettlDetails_0_1_0;
      // SettlDetails.NoSettlDetails
      multiset<string> SettlDetails_NoSettlDetails_7;
      set_field(noSettlDetails_0_1_0, FIX::SettlObligSource{'2'}, SettlDetails_NoSettlDetails_7);
      all_values.push_back(SettlDetails_NoSettlDetails_7);
      all_compo_names.insert("...NoSides...NoSettlDetails");

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_0_0_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_51;
        set_field(noSettlPartyIDs_0_0_2_0, FIX::SettlPartyID{"STRING_208438836"}, SettlParties_NoSettlPartyIDs_51);
        set_field(noSettlPartyIDs_0_0_2_0, FIX::SettlPartyIDSource{'1'}, SettlParties_NoSettlPartyIDs_51);
        set_field(noSettlPartyIDs_0_0_2_0, FIX::SettlPartyRole{126629641}, SettlParties_NoSettlPartyIDs_51);
        all_values.push_back(SettlParties_NoSettlPartyIDs_51);
        all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_102;
          set_field(noSettlPartySubIDs_0_0_0_3_0, FIX::SettlPartySubID{"STRING_1965135706"}, SettlPtysSubGrp_NoSettlPartySubIDs_102);
          set_field(noSettlPartySubIDs_0_0_0_3_0, FIX::SettlPartySubIDType{1072937518}, SettlPtysSubGrp_NoSettlPartySubIDs_102);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_102);
          all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_0_2_0.addGroup(noSettlPartySubIDs_0_0_0_3_0);
        }
        noSettlDetails_0_1_0.addGroup(noSettlPartyIDs_0_0_2_0);
      }
      noSides_0_0.addGroup(noSettlDetails_0_1_0);
    }
    // SideTrdRegTS
    // Group SideTrdRegTS.NoSideTrdRegTS
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoSideTrdRegTS noSideTrdRegTS_0_1_0;
      // SideTrdRegTS.NoSideTrdRegTS
      multiset<string> SideTrdRegTS_NoSideTrdRegTS_0;
      set_field(noSideTrdRegTS_0_1_0, FIX::SideTrdRegTimestamp{FIX::UTCTIMESTAMP(16, 19, 4, 20, 12, 2005)}, SideTrdRegTS_NoSideTrdRegTS_0);
      set_field(noSideTrdRegTS_0_1_0, FIX::SideTrdRegTimestampSrc{"STRING_109755280"}, SideTrdRegTS_NoSideTrdRegTS_0);
      set_field(noSideTrdRegTS_0_1_0, FIX::SideTrdRegTimestampType{447296624}, SideTrdRegTS_NoSideTrdRegTS_0);
      all_values.push_back(SideTrdRegTS_NoSideTrdRegTS_0);
      all_compo_names.insert("...NoSides...NoSideTrdRegTS");

      noSides_0_0.addGroup(noSideTrdRegTS_0_1_0);
    }
    // Stipulations
    // Group Stipulations.NoStipulations
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoStipulations noStipulations_0_1_0;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_68;
      set_field(noStipulations_0_1_0, FIX::StipulationType{"STRING_RESTRICTED"}, Stipulations_NoStipulations_68);
      set_field(noStipulations_0_1_0, FIX::StipulationValue{"STRING_1921287215"}, Stipulations_NoStipulations_68);
      all_values.push_back(Stipulations_NoStipulations_68);
      all_compo_names.insert("...NoSides...NoStipulations");

      noSides_0_0.addGroup(noStipulations_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoStipulations noStipulations_0_1_1;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_69;
      set_field(noStipulations_0_1_1, FIX::StipulationType{"STRING_ABS"}, Stipulations_NoStipulations_69);
      set_field(noStipulations_0_1_1, FIX::StipulationValue{"STRING_95417677"}, Stipulations_NoStipulations_69);
      all_values.push_back(Stipulations_NoStipulations_69);
      all_compo_names.insert("...NoSides...NoStipulations");

      noSides_0_0.addGroup(noStipulations_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoStipulations noStipulations_0_1_2;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_70;
      set_field(noStipulations_0_1_2, FIX::StipulationType{"STRING_CURRENCY"}, Stipulations_NoStipulations_70);
      set_field(noStipulations_0_1_2, FIX::StipulationValue{"STRING_1850902291"}, Stipulations_NoStipulations_70);
      all_values.push_back(Stipulations_NoStipulations_70);
      all_compo_names.insert("...NoSides...NoStipulations");

      noSides_0_0.addGroup(noStipulations_0_1_2);
    }
    // TradeReportOrderDetail
    multiset<string> TradeReportOrderDetail_0;
    set_field(noSides_0_0, FIX::BookingType{2}, TradeReportOrderDetail_0);
    set_field(noSides_0_0, FIX::ClOrdID{"STRING_413189174"}, TradeReportOrderDetail_0);
    FIX::CumQty CumQty_3;
    CumQty_3.setString("8762920");
set_field(noSides_0_0, CumQty_3, TradeReportOrderDetail_0);
    set_field(noSides_0_0, FIX::ExecInst{"MULTIPLECHARVALUE_L"}, TradeReportOrderDetail_0);
    set_field(noSides_0_0, FIX::ExpireTime{FIX::UTCTIMESTAMP(0, 21, 43, 16, 7, 2015)}, TradeReportOrderDetail_0);
    FIX::LeavesQty LeavesQty_2;
    LeavesQty_2.setString("19534336");
set_field(noSides_0_0, LeavesQty_2, TradeReportOrderDetail_0);
    set_field(noSides_0_0, FIX::ListID{"STRING_836131208"}, TradeReportOrderDetail_0);
    set_field(noSides_0_0, FIX::LotType{'4'}, TradeReportOrderDetail_0);
    set_field(noSides_0_0, FIX::OrdStatus{'7'}, TradeReportOrderDetail_0);
    set_field(noSides_0_0, FIX::OrdType{'L'}, TradeReportOrderDetail_0);
    set_field(noSides_0_0, FIX::OrderCapacity{'P'}, TradeReportOrderDetail_0);
    set_field(noSides_0_0, FIX::OrderID{"STRING_823668281"}, TradeReportOrderDetail_0);
    set_field(noSides_0_0, FIX::OrderInputDevice{"STRING_713896344"}, TradeReportOrderDetail_0);
    set_field(noSides_0_0, FIX::OrderRestrictions{"MULTIPLECHARVALUE_F"}, TradeReportOrderDetail_0);
    set_field(noSides_0_0, FIX::OrigCustOrderCapacity{1}, TradeReportOrderDetail_0);
    set_field(noSides_0_0, FIX::OrigOrdModTime{FIX::UTCTIMESTAMP(12, 16, 6, 25, 8, 2006)}, TradeReportOrderDetail_0);
    FIX::Price Price_25;
    Price_25.setString("4263092");
set_field(noSides_0_0, Price_25, TradeReportOrderDetail_0);
    set_field(noSides_0_0, FIX::RefOrdIDReason{1}, TradeReportOrderDetail_0);
    set_field(noSides_0_0, FIX::RefOrderID{"STRING_310073891"}, TradeReportOrderDetail_0);
    set_field(noSides_0_0, FIX::RefOrderIDSource{'1'}, TradeReportOrderDetail_0);
    set_field(noSides_0_0, FIX::SecondaryClOrdID{"STRING_366224995"}, TradeReportOrderDetail_0);
    set_field(noSides_0_0, FIX::SecondaryOrderID{"STRING_1186365956"}, TradeReportOrderDetail_0);
    FIX::StopPx StopPx_9;
    StopPx_9.setString("16875153");
set_field(noSides_0_0, StopPx_9, TradeReportOrderDetail_0);
    set_field(noSides_0_0, FIX::TimeInForce{'8'}, TradeReportOrderDetail_0);
    set_field(noSides_0_0, FIX::TransBkdTime{FIX::UTCTIMESTAMP(21, 41, 52, 7, 3, 2006)}, TradeReportOrderDetail_0);
    all_values.push_back(TradeReportOrderDetail_0);
    all_compo_names.insert("...NoSides.");

    // DisplayInstruction
    multiset<string> DisplayInstruction_9;
    FIX::DisplayHighQty DisplayHighQty_9;
    DisplayHighQty_9.setString("9136607");
set_field(noSides_0_0, DisplayHighQty_9, DisplayInstruction_9);
    FIX::DisplayLowQty DisplayLowQty_9;
    DisplayLowQty_9.setString("4250127");
set_field(noSides_0_0, DisplayLowQty_9, DisplayInstruction_9);
    set_field(noSides_0_0, FIX::DisplayMethod{'1'}, DisplayInstruction_9);
    FIX::DisplayMinIncr DisplayMinIncr_9;
    DisplayMinIncr_9.setString("13948779");
set_field(noSides_0_0, DisplayMinIncr_9, DisplayInstruction_9);
    FIX::DisplayQty DisplayQty_9;
    DisplayQty_9.setString("5383257");
set_field(noSides_0_0, DisplayQty_9, DisplayInstruction_9);
    set_field(noSides_0_0, FIX::DisplayWhen{'1'}, DisplayInstruction_9);
    FIX::RefreshQty RefreshQty_9;
    RefreshQty_9.setString("21087743");
set_field(noSides_0_0, RefreshQty_9, DisplayInstruction_9);
    FIX::SecondaryDisplayQty SecondaryDisplayQty_9;
    SecondaryDisplayQty_9.setString("14893797");
set_field(noSides_0_0, SecondaryDisplayQty_9, DisplayInstruction_9);
    all_values.push_back(DisplayInstruction_9);
    all_compo_names.insert("...NoSides..");

    // OrderQtyData
    multiset<string> OrderQtyData_27;
    FIX::CashOrderQty CashOrderQty_27;
    CashOrderQty_27.setString("20096239");
set_field(noSides_0_0, CashOrderQty_27, OrderQtyData_27);
    FIX::OrderPercent OrderPercent_27;
    OrderPercent_27.setString("65.170000");
set_field(noSides_0_0, OrderPercent_27, OrderQtyData_27);
    FIX::OrderQty OrderQty_36;
    OrderQty_36.setString("4027052");
set_field(noSides_0_0, OrderQty_36, OrderQtyData_27);
    set_field(noSides_0_0, FIX::RoundingDirection{'0'}, OrderQtyData_27);
    FIX::RoundingModulus RoundingModulus_27;
    RoundingModulus_27.setString("3696100");
set_field(noSides_0_0, RoundingModulus_27, OrderQtyData_27);
    all_values.push_back(OrderQtyData_27);
    all_compo_names.insert("...NoSides..");

    // TrdAllocGrp
    // Group TrdAllocGrp.NoAllocs
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoAllocs noAllocs_0_1_0;
      // TrdAllocGrp.NoAllocs
      multiset<string> TrdAllocGrp_NoAllocs_0;
      set_field(noAllocs_0_1_0, FIX::AllocAccount{"STRING_1689853150"}, TrdAllocGrp_NoAllocs_0);
      set_field(noAllocs_0_1_0, FIX::AllocAcctIDSource{976265264}, TrdAllocGrp_NoAllocs_0);
      set_field(noAllocs_0_1_0, FIX::AllocClearingFeeIndicator{"STRING_1159906132"}, TrdAllocGrp_NoAllocs_0);
      set_field(noAllocs_0_1_0, FIX::AllocCustomerCapacity{"STRING_1642888971"}, TrdAllocGrp_NoAllocs_0);
      set_field(noAllocs_0_1_0, FIX::AllocMethod{2}, TrdAllocGrp_NoAllocs_0);
      FIX::AllocQty AllocQty_44;
      AllocQty_44.setString("11015388");
set_field(noAllocs_0_1_0, AllocQty_44, TrdAllocGrp_NoAllocs_0);
      set_field(noAllocs_0_1_0, FIX::AllocSettlCurrency{"EUR"}, TrdAllocGrp_NoAllocs_0);
      set_field(noAllocs_0_1_0, FIX::IndividualAllocID{"STRING_641570518"}, TrdAllocGrp_NoAllocs_0);
      set_field(noAllocs_0_1_0, FIX::SecondaryIndividualAllocID{"STRING_737135916"}, TrdAllocGrp_NoAllocs_0);
      all_values.push_back(TrdAllocGrp_NoAllocs_0);
      all_compo_names.insert("...NoSides...NoAllocs");

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs noNested2PartyIDs_0_0_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_43;
        set_field(noNested2PartyIDs_0_0_2_0, FIX::Nested2PartyID{"STRING_1848104587"}, NestedParties2_NoNested2PartyIDs_43);
        set_field(noNested2PartyIDs_0_0_2_0, FIX::Nested2PartyIDSource{'1'}, NestedParties2_NoNested2PartyIDs_43);
        set_field(noNested2PartyIDs_0_0_2_0, FIX::Nested2PartyRole{1181522172}, NestedParties2_NoNested2PartyIDs_43);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_43);
        all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_83;
          set_field(noNested2PartySubIDs_0_0_0_3_0, FIX::Nested2PartySubID{"STRING_838087116"}, NstdPtys2SubGrp_NoNested2PartySubIDs_83);
          set_field(noNested2PartySubIDs_0_0_0_3_0, FIX::Nested2PartySubIDType{1232363574}, NstdPtys2SubGrp_NoNested2PartySubIDs_83);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_83);
          all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_0_2_0.addGroup(noNested2PartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_0_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_84;
          set_field(noNested2PartySubIDs_0_0_0_3_1, FIX::Nested2PartySubID{"STRING_691811289"}, NstdPtys2SubGrp_NoNested2PartySubIDs_84);
          set_field(noNested2PartySubIDs_0_0_0_3_1, FIX::Nested2PartySubIDType{1263099878}, NstdPtys2SubGrp_NoNested2PartySubIDs_84);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_84);
          all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_0_2_0.addGroup(noNested2PartySubIDs_0_0_0_3_1);
        }
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_0_3_2;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_85;
          set_field(noNested2PartySubIDs_0_0_0_3_2, FIX::Nested2PartySubID{"STRING_1838661298"}, NstdPtys2SubGrp_NoNested2PartySubIDs_85);
          set_field(noNested2PartySubIDs_0_0_0_3_2, FIX::Nested2PartySubIDType{2086689248}, NstdPtys2SubGrp_NoNested2PartySubIDs_85);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_85);
          all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_0_2_0.addGroup(noNested2PartySubIDs_0_0_0_3_2);
        }
        noAllocs_0_1_0.addGroup(noNested2PartyIDs_0_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs noNested2PartyIDs_0_0_2_1;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_44;
        set_field(noNested2PartyIDs_0_0_2_1, FIX::Nested2PartyID{"STRING_1801425667"}, NestedParties2_NoNested2PartyIDs_44);
        set_field(noNested2PartyIDs_0_0_2_1, FIX::Nested2PartyIDSource{'1'}, NestedParties2_NoNested2PartyIDs_44);
        set_field(noNested2PartyIDs_0_0_2_1, FIX::Nested2PartyRole{2047979903}, NestedParties2_NoNested2PartyIDs_44);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_44);
        all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_1_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_86;
          set_field(noNested2PartySubIDs_0_0_1_3_0, FIX::Nested2PartySubID{"STRING_983284007"}, NstdPtys2SubGrp_NoNested2PartySubIDs_86);
          set_field(noNested2PartySubIDs_0_0_1_3_0, FIX::Nested2PartySubIDType{1169522773}, NstdPtys2SubGrp_NoNested2PartySubIDs_86);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_86);
          all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_0_2_1.addGroup(noNested2PartySubIDs_0_0_1_3_0);
        }
        noAllocs_0_1_0.addGroup(noNested2PartyIDs_0_0_2_1);
      }
      noSides_0_0.addGroup(noAllocs_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoAllocs noAllocs_0_1_1;
      // TrdAllocGrp.NoAllocs
      multiset<string> TrdAllocGrp_NoAllocs_1;
      set_field(noAllocs_0_1_1, FIX::AllocAccount{"STRING_1546027001"}, TrdAllocGrp_NoAllocs_1);
      set_field(noAllocs_0_1_1, FIX::AllocAcctIDSource{1872378974}, TrdAllocGrp_NoAllocs_1);
      set_field(noAllocs_0_1_1, FIX::AllocClearingFeeIndicator{"STRING_1539132788"}, TrdAllocGrp_NoAllocs_1);
      set_field(noAllocs_0_1_1, FIX::AllocCustomerCapacity{"STRING_132140216"}, TrdAllocGrp_NoAllocs_1);
      set_field(noAllocs_0_1_1, FIX::AllocMethod{2}, TrdAllocGrp_NoAllocs_1);
      FIX::AllocQty AllocQty_45;
      AllocQty_45.setString("3679144");
set_field(noAllocs_0_1_1, AllocQty_45, TrdAllocGrp_NoAllocs_1);
      set_field(noAllocs_0_1_1, FIX::AllocSettlCurrency{"USD"}, TrdAllocGrp_NoAllocs_1);
      set_field(noAllocs_0_1_1, FIX::IndividualAllocID{"STRING_1654253560"}, TrdAllocGrp_NoAllocs_1);
      set_field(noAllocs_0_1_1, FIX::SecondaryIndividualAllocID{"STRING_246101511"}, TrdAllocGrp_NoAllocs_1);
      all_values.push_back(TrdAllocGrp_NoAllocs_1);
      all_compo_names.insert("...NoSides...NoAllocs");

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs noNested2PartyIDs_0_1_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_45;
        set_field(noNested2PartyIDs_0_1_2_0, FIX::Nested2PartyID{"STRING_1979475023"}, NestedParties2_NoNested2PartyIDs_45);
        set_field(noNested2PartyIDs_0_1_2_0, FIX::Nested2PartyIDSource{'8'}, NestedParties2_NoNested2PartyIDs_45);
        set_field(noNested2PartyIDs_0_1_2_0, FIX::Nested2PartyRole{1508920035}, NestedParties2_NoNested2PartyIDs_45);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_45);
        all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_87;
          set_field(noNested2PartySubIDs_0_1_0_3_0, FIX::Nested2PartySubID{"STRING_588292968"}, NstdPtys2SubGrp_NoNested2PartySubIDs_87);
          set_field(noNested2PartySubIDs_0_1_0_3_0, FIX::Nested2PartySubIDType{1097675905}, NstdPtys2SubGrp_NoNested2PartySubIDs_87);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_87);
          all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_1_2_0.addGroup(noNested2PartySubIDs_0_1_0_3_0);
        }
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_0_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_88;
          set_field(noNested2PartySubIDs_0_1_0_3_1, FIX::Nested2PartySubID{"STRING_1950144287"}, NstdPtys2SubGrp_NoNested2PartySubIDs_88);
          set_field(noNested2PartySubIDs_0_1_0_3_1, FIX::Nested2PartySubIDType{366443478}, NstdPtys2SubGrp_NoNested2PartySubIDs_88);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_88);
          all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_1_2_0.addGroup(noNested2PartySubIDs_0_1_0_3_1);
        }
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_0_3_2;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_89;
          set_field(noNested2PartySubIDs_0_1_0_3_2, FIX::Nested2PartySubID{"STRING_1935763021"}, NstdPtys2SubGrp_NoNested2PartySubIDs_89);
          set_field(noNested2PartySubIDs_0_1_0_3_2, FIX::Nested2PartySubIDType{1035024213}, NstdPtys2SubGrp_NoNested2PartySubIDs_89);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_89);
          all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_1_2_0.addGroup(noNested2PartySubIDs_0_1_0_3_2);
        }
        noAllocs_0_1_1.addGroup(noNested2PartyIDs_0_1_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs noNested2PartyIDs_0_1_2_1;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_46;
        set_field(noNested2PartyIDs_0_1_2_1, FIX::Nested2PartyID{"STRING_1058254767"}, NestedParties2_NoNested2PartyIDs_46);
        set_field(noNested2PartyIDs_0_1_2_1, FIX::Nested2PartyIDSource{'1'}, NestedParties2_NoNested2PartyIDs_46);
        set_field(noNested2PartyIDs_0_1_2_1, FIX::Nested2PartyRole{726201863}, NestedParties2_NoNested2PartyIDs_46);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_46);
        all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_1_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_90;
          set_field(noNested2PartySubIDs_0_1_1_3_0, FIX::Nested2PartySubID{"STRING_705321270"}, NstdPtys2SubGrp_NoNested2PartySubIDs_90);
          set_field(noNested2PartySubIDs_0_1_1_3_0, FIX::Nested2PartySubIDType{1847345520}, NstdPtys2SubGrp_NoNested2PartySubIDs_90);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_90);
          all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_1_2_1.addGroup(noNested2PartySubIDs_0_1_1_3_0);
        }
        noAllocs_0_1_1.addGroup(noNested2PartyIDs_0_1_2_1);
      }
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs noNested2PartyIDs_0_1_2_2;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_47;
        set_field(noNested2PartyIDs_0_1_2_2, FIX::Nested2PartyID{"STRING_897956622"}, NestedParties2_NoNested2PartyIDs_47);
        set_field(noNested2PartyIDs_0_1_2_2, FIX::Nested2PartyIDSource{'1'}, NestedParties2_NoNested2PartyIDs_47);
        set_field(noNested2PartyIDs_0_1_2_2, FIX::Nested2PartyRole{683145879}, NestedParties2_NoNested2PartyIDs_47);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_47);
        all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_2_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_91;
          set_field(noNested2PartySubIDs_0_1_2_3_0, FIX::Nested2PartySubID{"STRING_1247186356"}, NstdPtys2SubGrp_NoNested2PartySubIDs_91);
          set_field(noNested2PartySubIDs_0_1_2_3_0, FIX::Nested2PartySubIDType{408041205}, NstdPtys2SubGrp_NoNested2PartySubIDs_91);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_91);
          all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_1_2_2.addGroup(noNested2PartySubIDs_0_1_2_3_0);
        }
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_2_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_92;
          set_field(noNested2PartySubIDs_0_1_2_3_1, FIX::Nested2PartySubID{"STRING_1459128536"}, NstdPtys2SubGrp_NoNested2PartySubIDs_92);
          set_field(noNested2PartySubIDs_0_1_2_3_1, FIX::Nested2PartySubIDType{1379326572}, NstdPtys2SubGrp_NoNested2PartySubIDs_92);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_92);
          all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_1_2_2.addGroup(noNested2PartySubIDs_0_1_2_3_1);
        }
        noAllocs_0_1_1.addGroup(noNested2PartyIDs_0_1_2_2);
      }
      noSides_0_0.addGroup(noAllocs_0_1_1);
    }
    msg.addGroup(noSides_0_0);
  }
  {
    FIX50SP2::TradeCaptureReport::NoSides noSides_0_1;
    // TrdCapRptSideGrp.NoSides
    multiset<string> TrdCapRptSideGrp_NoSides_1;
    set_field(noSides_0_1, FIX::Account{"STRING_1822789681"}, TrdCapRptSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::AccountType{3}, TrdCapRptSideGrp_NoSides_1);
    FIX::AccruedInterestAmt AccruedInterestAmt_11;
    AccruedInterestAmt_11.setString("5238892");
set_field(noSides_0_1, AccruedInterestAmt_11, TrdCapRptSideGrp_NoSides_1);
    FIX::AccruedInterestRate AccruedInterestRate_6;
    AccruedInterestRate_6.setString("98.330000");
set_field(noSides_0_1, AccruedInterestRate_6, TrdCapRptSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::AcctIDSource{1}, TrdCapRptSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::AggressorIndicator{false}, TrdCapRptSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::AllocID{"STRING_1357243952"}, TrdCapRptSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::ComplianceID{"STRING_1165804228"}, TrdCapRptSideGrp_NoSides_1);
    FIX::Concession Concession_6;
    Concession_6.setString("16576628");
set_field(noSides_0_1, Concession_6, TrdCapRptSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::CustOrderCapacity{4}, TrdCapRptSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::EncodedText{"DATA_1934426343"}, TrdCapRptSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::EncodedTextLen{98472132}, TrdCapRptSideGrp_NoSides_1);
    FIX::EndAccruedInterestAmt EndAccruedInterestAmt_11;
    EndAccruedInterestAmt_11.setString("18163562");
set_field(noSides_0_1, EndAccruedInterestAmt_11, TrdCapRptSideGrp_NoSides_1);
    FIX::EndCash EndCash_11;
    EndCash_11.setString("17370869");
set_field(noSides_0_1, EndCash_11, TrdCapRptSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::ExDate{"LOCALMKTDATE_464915610"}, TrdCapRptSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::ExchangeRule{"STRING_1604635617"}, TrdCapRptSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::ExchangeSpecialInstructions{"STRING_624627547"}, TrdCapRptSideGrp_NoSides_1);
    FIX::InterestAtMaturity InterestAtMaturity_6;
    InterestAtMaturity_6.setString("15231703");
set_field(noSides_0_1, InterestAtMaturity_6, TrdCapRptSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::NetGrossInd{2}, TrdCapRptSideGrp_NoSides_1);
    FIX::NetMoney NetMoney_6;
    NetMoney_6.setString("13508294");
set_field(noSides_0_1, NetMoney_6, TrdCapRptSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::NumDaysInterest{373147096}, TrdCapRptSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::OddLot{false}, TrdCapRptSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::OrderCategory{'8'}, TrdCapRptSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::OrderDelay{1271103719}, TrdCapRptSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::OrderDelayUnit{2}, TrdCapRptSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::PositionEffect{'F'}, TrdCapRptSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::PreallocMethod{'0'}, TrdCapRptSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::ProcessCode{'1'}, TrdCapRptSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::RptSeq{2141878366}, TrdCapRptSideGrp_NoSides_1);
    FIX::SettlCurrAmt SettlCurrAmt_14;
    SettlCurrAmt_14.setString("5027443");
set_field(noSides_0_1, SettlCurrAmt_14, TrdCapRptSideGrp_NoSides_1);
    FIX::SettlCurrFxRate SettlCurrFxRate_14;
    SettlCurrFxRate_14.setString("13940411");
set_field(noSides_0_1, SettlCurrFxRate_14, TrdCapRptSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::SettlCurrFxRateCalc{'M'}, TrdCapRptSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::Side{'G'}, TrdCapRptSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::SideCurrency{"EUR"}, TrdCapRptSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::SideExecID{"STRING_1516116499"}, TrdCapRptSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::SideFillStationCd{"STRING_540437534"}, TrdCapRptSideGrp_NoSides_1);
    FIX::SideGrossTradeAmt SideGrossTradeAmt_1;
    SideGrossTradeAmt_1.setString("16124045");
set_field(noSides_0_1, SideGrossTradeAmt_1, TrdCapRptSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::SideLastQty{534437079}, TrdCapRptSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::SideLiquidityInd{50616698}, TrdCapRptSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::SideMultiLegReportingType{2}, TrdCapRptSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::SideReasonCd{"STRING_321379774"}, TrdCapRptSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::SideSettlCurrency{"GBP"}, TrdCapRptSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::SideTradeReportID{"STRING_2058466756"}, TrdCapRptSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::SideTrdSubTyp{614004441}, TrdCapRptSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::SolicitedFlag{true}, TrdCapRptSideGrp_NoSides_1);
    FIX::StartCash StartCash_11;
    StartCash_11.setString("5356106");
set_field(noSides_0_1, StartCash_11, TrdCapRptSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::Text{"STRING_2137174819"}, TrdCapRptSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::TimeBracket{"STRING_1965640663"}, TrdCapRptSideGrp_NoSides_1);
    FIX::TotalTakedown TotalTakedown_6;
    TotalTakedown_6.setString("18864400");
set_field(noSides_0_1, TotalTakedown_6, TrdCapRptSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::TradeAllocIndicator{3}, TrdCapRptSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::TradeInputDevice{"STRING_1032009506"}, TrdCapRptSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::TradeInputSource{"STRING_789647700"}, TrdCapRptSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::TradingSessionID{"STRING_3"}, TrdCapRptSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::TradingSessionSubID{"STRING_4"}, TrdCapRptSideGrp_NoSides_1);
    all_values.push_back(TrdCapRptSideGrp_NoSides_1);
    all_compo_names.insert("...NoSides");

    // ClrInstGrp
    // Group ClrInstGrp.NoClearingInstructions
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoClearingInstructions noClearingInstructions_1_1_0;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_18;
      set_field(noClearingInstructions_1_1_0, FIX::ClearingInstruction{1}, ClrInstGrp_NoClearingInstructions_18);
      all_values.push_back(ClrInstGrp_NoClearingInstructions_18);
      all_compo_names.insert("...NoSides...NoClearingInstructions");

      noSides_0_1.addGroup(noClearingInstructions_1_1_0);
    }
    // CommissionData
    multiset<string> CommissionData_25;
    set_field(noSides_0_1, FIX::CommCurrency{"GBP"}, CommissionData_25);
    set_field(noSides_0_1, FIX::CommType{'4'}, CommissionData_25);
    FIX::Commission Commission_28;
    Commission_28.setString("12082933");
set_field(noSides_0_1, Commission_28, CommissionData_25);
    set_field(noSides_0_1, FIX::FundRenewWaiv{'N'}, CommissionData_25);
    all_values.push_back(CommissionData_25);
    all_compo_names.insert("...NoSides.");

    // ContAmtGrp
    // Group ContAmtGrp.NoContAmts
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoContAmts noContAmts_1_1_0;
      // ContAmtGrp.NoContAmts
      multiset<string> ContAmtGrp_NoContAmts_2;
      set_field(noContAmts_1_1_0, FIX::ContAmtCurr{"USD"}, ContAmtGrp_NoContAmts_2);
      set_field(noContAmts_1_1_0, FIX::ContAmtType{14}, ContAmtGrp_NoContAmts_2);
      FIX::ContAmtValue ContAmtValue_2;
      ContAmtValue_2.setString("15191776");
set_field(noContAmts_1_1_0, ContAmtValue_2, ContAmtGrp_NoContAmts_2);
      all_values.push_back(ContAmtGrp_NoContAmts_2);
      all_compo_names.insert("...NoSides...NoContAmts");

      noSides_0_1.addGroup(noContAmts_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoContAmts noContAmts_1_1_1;
      // ContAmtGrp.NoContAmts
      multiset<string> ContAmtGrp_NoContAmts_3;
      set_field(noContAmts_1_1_1, FIX::ContAmtCurr{"EUR"}, ContAmtGrp_NoContAmts_3);
      set_field(noContAmts_1_1_1, FIX::ContAmtType{13}, ContAmtGrp_NoContAmts_3);
      FIX::ContAmtValue ContAmtValue_3;
      ContAmtValue_3.setString("20912630");
set_field(noContAmts_1_1_1, ContAmtValue_3, ContAmtGrp_NoContAmts_3);
      all_values.push_back(ContAmtGrp_NoContAmts_3);
      all_compo_names.insert("...NoSides...NoContAmts");

      noSides_0_1.addGroup(noContAmts_1_1_1);
    }
    // MiscFeesGrp
    // Group MiscFeesGrp.NoMiscFees
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoMiscFees noMiscFees_1_1_0;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_33;
      FIX::MiscFeeAmt MiscFeeAmt_33;
      MiscFeeAmt_33.setString("17188831");
set_field(noMiscFees_1_1_0, MiscFeeAmt_33, MiscFeesGrp_NoMiscFees_33);
      set_field(noMiscFees_1_1_0, FIX::MiscFeeBasis{2}, MiscFeesGrp_NoMiscFees_33);
      set_field(noMiscFees_1_1_0, FIX::MiscFeeCurr{"GBP"}, MiscFeesGrp_NoMiscFees_33);
      set_field(noMiscFees_1_1_0, FIX::MiscFeeType{"STRING_13"}, MiscFeesGrp_NoMiscFees_33);
      all_values.push_back(MiscFeesGrp_NoMiscFees_33);
      all_compo_names.insert("...NoSides...NoMiscFees");

      noSides_0_1.addGroup(noMiscFees_1_1_0);
    }
    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoPartyIDs noPartyIDs_1_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_152;
      set_field(noPartyIDs_1_1_0, FIX::PartyID{"STRING_175095163"}, Parties_NoPartyIDs_152);
      set_field(noPartyIDs_1_1_0, FIX::PartyIDSource{'5'}, Parties_NoPartyIDs_152);
      set_field(noPartyIDs_1_1_0, FIX::PartyRole{64}, Parties_NoPartyIDs_152);
      all_values.push_back(Parties_NoPartyIDs_152);
      all_compo_names.insert("...NoSides...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_301;
        set_field(noPartySubIDs_1_0_2_0, FIX::PartySubID{"STRING_2103529176"}, PtysSubGrp_NoPartySubIDs_301);
        set_field(noPartySubIDs_1_0_2_0, FIX::PartySubIDType{7}, PtysSubGrp_NoPartySubIDs_301);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_301);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_302;
        set_field(noPartySubIDs_1_0_2_1, FIX::PartySubID{"STRING_24391769"}, PtysSubGrp_NoPartySubIDs_302);
        set_field(noPartySubIDs_1_0_2_1, FIX::PartySubIDType{12}, PtysSubGrp_NoPartySubIDs_302);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_302);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_1);
      }
      noSides_0_1.addGroup(noPartyIDs_1_1_0);
    }
    // SettlDetails
    // Group SettlDetails.NoSettlDetails
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails noSettlDetails_1_1_0;
      // SettlDetails.NoSettlDetails
      multiset<string> SettlDetails_NoSettlDetails_8;
      set_field(noSettlDetails_1_1_0, FIX::SettlObligSource{'2'}, SettlDetails_NoSettlDetails_8);
      all_values.push_back(SettlDetails_NoSettlDetails_8);
      all_compo_names.insert("...NoSides...NoSettlDetails");

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_1_0_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_52;
        set_field(noSettlPartyIDs_1_0_2_0, FIX::SettlPartyID{"STRING_1161166893"}, SettlParties_NoSettlPartyIDs_52);
        set_field(noSettlPartyIDs_1_0_2_0, FIX::SettlPartyIDSource{'1'}, SettlParties_NoSettlPartyIDs_52);
        set_field(noSettlPartyIDs_1_0_2_0, FIX::SettlPartyRole{778128875}, SettlParties_NoSettlPartyIDs_52);
        all_values.push_back(SettlParties_NoSettlPartyIDs_52);
        all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_103;
          set_field(noSettlPartySubIDs_1_0_0_3_0, FIX::SettlPartySubID{"STRING_1097373892"}, SettlPtysSubGrp_NoSettlPartySubIDs_103);
          set_field(noSettlPartySubIDs_1_0_0_3_0, FIX::SettlPartySubIDType{1756869010}, SettlPtysSubGrp_NoSettlPartySubIDs_103);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_103);
          all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_1_0_2_0.addGroup(noSettlPartySubIDs_1_0_0_3_0);
        }
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_104;
          set_field(noSettlPartySubIDs_1_0_0_3_1, FIX::SettlPartySubID{"STRING_1496520847"}, SettlPtysSubGrp_NoSettlPartySubIDs_104);
          set_field(noSettlPartySubIDs_1_0_0_3_1, FIX::SettlPartySubIDType{1828612550}, SettlPtysSubGrp_NoSettlPartySubIDs_104);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_104);
          all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_1_0_2_0.addGroup(noSettlPartySubIDs_1_0_0_3_1);
        }
        noSettlDetails_1_1_0.addGroup(noSettlPartyIDs_1_0_2_0);
      }
      noSides_0_1.addGroup(noSettlDetails_1_1_0);
    }
    // SideTrdRegTS
    // Group SideTrdRegTS.NoSideTrdRegTS
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoSideTrdRegTS noSideTrdRegTS_1_1_0;
      // SideTrdRegTS.NoSideTrdRegTS
      multiset<string> SideTrdRegTS_NoSideTrdRegTS_1;
      set_field(noSideTrdRegTS_1_1_0, FIX::SideTrdRegTimestamp{FIX::UTCTIMESTAMP(7, 11, 15, 23, 10, 2003)}, SideTrdRegTS_NoSideTrdRegTS_1);
      set_field(noSideTrdRegTS_1_1_0, FIX::SideTrdRegTimestampSrc{"STRING_1884415124"}, SideTrdRegTS_NoSideTrdRegTS_1);
      set_field(noSideTrdRegTS_1_1_0, FIX::SideTrdRegTimestampType{307677293}, SideTrdRegTS_NoSideTrdRegTS_1);
      all_values.push_back(SideTrdRegTS_NoSideTrdRegTS_1);
      all_compo_names.insert("...NoSides...NoSideTrdRegTS");

      noSides_0_1.addGroup(noSideTrdRegTS_1_1_0);
    }
    // Stipulations
    // Group Stipulations.NoStipulations
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoStipulations noStipulations_1_1_0;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_71;
      set_field(noStipulations_1_1_0, FIX::StipulationType{"STRING_PURPOSE"}, Stipulations_NoStipulations_71);
      set_field(noStipulations_1_1_0, FIX::StipulationValue{"STRING_482772456"}, Stipulations_NoStipulations_71);
      all_values.push_back(Stipulations_NoStipulations_71);
      all_compo_names.insert("...NoSides...NoStipulations");

      noSides_0_1.addGroup(noStipulations_1_1_0);
    }
    // TradeReportOrderDetail
    multiset<string> TradeReportOrderDetail_1;
    set_field(noSides_0_1, FIX::BookingType{0}, TradeReportOrderDetail_1);
    set_field(noSides_0_1, FIX::ClOrdID{"STRING_1395702798"}, TradeReportOrderDetail_1);
    FIX::CumQty CumQty_4;
    CumQty_4.setString("10207058");
set_field(noSides_0_1, CumQty_4, TradeReportOrderDetail_1);
    set_field(noSides_0_1, FIX::ExecInst{"MULTIPLECHARVALUE_p"}, TradeReportOrderDetail_1);
    set_field(noSides_0_1, FIX::ExpireTime{FIX::UTCTIMESTAMP(16, 44, 17, 26, 4, 2014)}, TradeReportOrderDetail_1);
    FIX::LeavesQty LeavesQty_3;
    LeavesQty_3.setString("14818153");
set_field(noSides_0_1, LeavesQty_3, TradeReportOrderDetail_1);
    set_field(noSides_0_1, FIX::ListID{"STRING_1233723410"}, TradeReportOrderDetail_1);
    set_field(noSides_0_1, FIX::LotType{'4'}, TradeReportOrderDetail_1);
    set_field(noSides_0_1, FIX::OrdStatus{'9'}, TradeReportOrderDetail_1);
    set_field(noSides_0_1, FIX::OrdType{'6'}, TradeReportOrderDetail_1);
    set_field(noSides_0_1, FIX::OrderCapacity{'G'}, TradeReportOrderDetail_1);
    set_field(noSides_0_1, FIX::OrderID{"STRING_112834461"}, TradeReportOrderDetail_1);
    set_field(noSides_0_1, FIX::OrderInputDevice{"STRING_1971671804"}, TradeReportOrderDetail_1);
    set_field(noSides_0_1, FIX::OrderRestrictions{"MULTIPLECHARVALUE_2"}, TradeReportOrderDetail_1);
    set_field(noSides_0_1, FIX::OrigCustOrderCapacity{2}, TradeReportOrderDetail_1);
    set_field(noSides_0_1, FIX::OrigOrdModTime{FIX::UTCTIMESTAMP(17, 4, 9, 16, 5, 2014)}, TradeReportOrderDetail_1);
    FIX::Price Price_26;
    Price_26.setString("14267798");
set_field(noSides_0_1, Price_26, TradeReportOrderDetail_1);
    set_field(noSides_0_1, FIX::RefOrdIDReason{2}, TradeReportOrderDetail_1);
    set_field(noSides_0_1, FIX::RefOrderID{"STRING_1287784959"}, TradeReportOrderDetail_1);
    set_field(noSides_0_1, FIX::RefOrderIDSource{'0'}, TradeReportOrderDetail_1);
    set_field(noSides_0_1, FIX::SecondaryClOrdID{"STRING_54263334"}, TradeReportOrderDetail_1);
    set_field(noSides_0_1, FIX::SecondaryOrderID{"STRING_161007198"}, TradeReportOrderDetail_1);
    FIX::StopPx StopPx_10;
    StopPx_10.setString("15836023");
set_field(noSides_0_1, StopPx_10, TradeReportOrderDetail_1);
    set_field(noSides_0_1, FIX::TimeInForce{'9'}, TradeReportOrderDetail_1);
    set_field(noSides_0_1, FIX::TransBkdTime{FIX::UTCTIMESTAMP(17, 28, 16, 12, 7, 2009)}, TradeReportOrderDetail_1);
    all_values.push_back(TradeReportOrderDetail_1);
    all_compo_names.insert("...NoSides.");

    // DisplayInstruction
    multiset<string> DisplayInstruction_10;
    FIX::DisplayHighQty DisplayHighQty_10;
    DisplayHighQty_10.setString("20111956");
set_field(noSides_0_1, DisplayHighQty_10, DisplayInstruction_10);
    FIX::DisplayLowQty DisplayLowQty_10;
    DisplayLowQty_10.setString("3071618");
set_field(noSides_0_1, DisplayLowQty_10, DisplayInstruction_10);
    set_field(noSides_0_1, FIX::DisplayMethod{'4'}, DisplayInstruction_10);
    FIX::DisplayMinIncr DisplayMinIncr_10;
    DisplayMinIncr_10.setString("7068207");
set_field(noSides_0_1, DisplayMinIncr_10, DisplayInstruction_10);
    FIX::DisplayQty DisplayQty_10;
    DisplayQty_10.setString("3249057");
set_field(noSides_0_1, DisplayQty_10, DisplayInstruction_10);
    set_field(noSides_0_1, FIX::DisplayWhen{'1'}, DisplayInstruction_10);
    FIX::RefreshQty RefreshQty_10;
    RefreshQty_10.setString("5310089");
set_field(noSides_0_1, RefreshQty_10, DisplayInstruction_10);
    FIX::SecondaryDisplayQty SecondaryDisplayQty_10;
    SecondaryDisplayQty_10.setString("15993486");
set_field(noSides_0_1, SecondaryDisplayQty_10, DisplayInstruction_10);
    all_values.push_back(DisplayInstruction_10);
    all_compo_names.insert("...NoSides..");

    // OrderQtyData
    multiset<string> OrderQtyData_28;
    FIX::CashOrderQty CashOrderQty_28;
    CashOrderQty_28.setString("17441792");
set_field(noSides_0_1, CashOrderQty_28, OrderQtyData_28);
    FIX::OrderPercent OrderPercent_28;
    OrderPercent_28.setString("8.320000");
set_field(noSides_0_1, OrderPercent_28, OrderQtyData_28);
    FIX::OrderQty OrderQty_37;
    OrderQty_37.setString("19267862");
set_field(noSides_0_1, OrderQty_37, OrderQtyData_28);
    set_field(noSides_0_1, FIX::RoundingDirection{'0'}, OrderQtyData_28);
    FIX::RoundingModulus RoundingModulus_28;
    RoundingModulus_28.setString("14034060");
set_field(noSides_0_1, RoundingModulus_28, OrderQtyData_28);
    all_values.push_back(OrderQtyData_28);
    all_compo_names.insert("...NoSides..");

    // TrdAllocGrp
    // Group TrdAllocGrp.NoAllocs
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoAllocs noAllocs_1_1_0;
      // TrdAllocGrp.NoAllocs
      multiset<string> TrdAllocGrp_NoAllocs_2;
      set_field(noAllocs_1_1_0, FIX::AllocAccount{"STRING_78174614"}, TrdAllocGrp_NoAllocs_2);
      set_field(noAllocs_1_1_0, FIX::AllocAcctIDSource{60934895}, TrdAllocGrp_NoAllocs_2);
      set_field(noAllocs_1_1_0, FIX::AllocClearingFeeIndicator{"STRING_382768066"}, TrdAllocGrp_NoAllocs_2);
      set_field(noAllocs_1_1_0, FIX::AllocCustomerCapacity{"STRING_884218799"}, TrdAllocGrp_NoAllocs_2);
      set_field(noAllocs_1_1_0, FIX::AllocMethod{3}, TrdAllocGrp_NoAllocs_2);
      FIX::AllocQty AllocQty_46;
      AllocQty_46.setString("8361945");
set_field(noAllocs_1_1_0, AllocQty_46, TrdAllocGrp_NoAllocs_2);
      set_field(noAllocs_1_1_0, FIX::AllocSettlCurrency{"GBP"}, TrdAllocGrp_NoAllocs_2);
      set_field(noAllocs_1_1_0, FIX::IndividualAllocID{"STRING_272313210"}, TrdAllocGrp_NoAllocs_2);
      set_field(noAllocs_1_1_0, FIX::SecondaryIndividualAllocID{"STRING_655734364"}, TrdAllocGrp_NoAllocs_2);
      all_values.push_back(TrdAllocGrp_NoAllocs_2);
      all_compo_names.insert("...NoSides...NoAllocs");

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs noNested2PartyIDs_1_0_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_48;
        set_field(noNested2PartyIDs_1_0_2_0, FIX::Nested2PartyID{"STRING_594190907"}, NestedParties2_NoNested2PartyIDs_48);
        set_field(noNested2PartyIDs_1_0_2_0, FIX::Nested2PartyIDSource{'8'}, NestedParties2_NoNested2PartyIDs_48);
        set_field(noNested2PartyIDs_1_0_2_0, FIX::Nested2PartyRole{1374016694}, NestedParties2_NoNested2PartyIDs_48);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_48);
        all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_93;
          set_field(noNested2PartySubIDs_1_0_0_3_0, FIX::Nested2PartySubID{"STRING_465201642"}, NstdPtys2SubGrp_NoNested2PartySubIDs_93);
          set_field(noNested2PartySubIDs_1_0_0_3_0, FIX::Nested2PartySubIDType{1514016798}, NstdPtys2SubGrp_NoNested2PartySubIDs_93);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_93);
          all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_1_0_2_0.addGroup(noNested2PartySubIDs_1_0_0_3_0);
        }
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_0_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_94;
          set_field(noNested2PartySubIDs_1_0_0_3_1, FIX::Nested2PartySubID{"STRING_1235375135"}, NstdPtys2SubGrp_NoNested2PartySubIDs_94);
          set_field(noNested2PartySubIDs_1_0_0_3_1, FIX::Nested2PartySubIDType{772363512}, NstdPtys2SubGrp_NoNested2PartySubIDs_94);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_94);
          all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_1_0_2_0.addGroup(noNested2PartySubIDs_1_0_0_3_1);
        }
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_0_3_2;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_95;
          set_field(noNested2PartySubIDs_1_0_0_3_2, FIX::Nested2PartySubID{"STRING_2085722461"}, NstdPtys2SubGrp_NoNested2PartySubIDs_95);
          set_field(noNested2PartySubIDs_1_0_0_3_2, FIX::Nested2PartySubIDType{1942195903}, NstdPtys2SubGrp_NoNested2PartySubIDs_95);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_95);
          all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_1_0_2_0.addGroup(noNested2PartySubIDs_1_0_0_3_2);
        }
        noAllocs_1_1_0.addGroup(noNested2PartyIDs_1_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs noNested2PartyIDs_1_0_2_1;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_49;
        set_field(noNested2PartyIDs_1_0_2_1, FIX::Nested2PartyID{"STRING_1097269260"}, NestedParties2_NoNested2PartyIDs_49);
        set_field(noNested2PartyIDs_1_0_2_1, FIX::Nested2PartyIDSource{'6'}, NestedParties2_NoNested2PartyIDs_49);
        set_field(noNested2PartyIDs_1_0_2_1, FIX::Nested2PartyRole{325721179}, NestedParties2_NoNested2PartyIDs_49);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_49);
        all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_1_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_96;
          set_field(noNested2PartySubIDs_1_0_1_3_0, FIX::Nested2PartySubID{"STRING_219474515"}, NstdPtys2SubGrp_NoNested2PartySubIDs_96);
          set_field(noNested2PartySubIDs_1_0_1_3_0, FIX::Nested2PartySubIDType{1231792011}, NstdPtys2SubGrp_NoNested2PartySubIDs_96);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_96);
          all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_1_0_2_1.addGroup(noNested2PartySubIDs_1_0_1_3_0);
        }
        noAllocs_1_1_0.addGroup(noNested2PartyIDs_1_0_2_1);
      }
      noSides_0_1.addGroup(noAllocs_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoSides::NoAllocs noAllocs_1_1_1;
      // TrdAllocGrp.NoAllocs
      multiset<string> TrdAllocGrp_NoAllocs_3;
      set_field(noAllocs_1_1_1, FIX::AllocAccount{"STRING_328436866"}, TrdAllocGrp_NoAllocs_3);
      set_field(noAllocs_1_1_1, FIX::AllocAcctIDSource{1262185697}, TrdAllocGrp_NoAllocs_3);
      set_field(noAllocs_1_1_1, FIX::AllocClearingFeeIndicator{"STRING_487714404"}, TrdAllocGrp_NoAllocs_3);
      set_field(noAllocs_1_1_1, FIX::AllocCustomerCapacity{"STRING_1431908726"}, TrdAllocGrp_NoAllocs_3);
      set_field(noAllocs_1_1_1, FIX::AllocMethod{2}, TrdAllocGrp_NoAllocs_3);
      FIX::AllocQty AllocQty_47;
      AllocQty_47.setString("5486493");
set_field(noAllocs_1_1_1, AllocQty_47, TrdAllocGrp_NoAllocs_3);
      set_field(noAllocs_1_1_1, FIX::AllocSettlCurrency{"JPY"}, TrdAllocGrp_NoAllocs_3);
      set_field(noAllocs_1_1_1, FIX::IndividualAllocID{"STRING_1897369154"}, TrdAllocGrp_NoAllocs_3);
      set_field(noAllocs_1_1_1, FIX::SecondaryIndividualAllocID{"STRING_503387701"}, TrdAllocGrp_NoAllocs_3);
      all_values.push_back(TrdAllocGrp_NoAllocs_3);
      all_compo_names.insert("...NoSides...NoAllocs");

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs noNested2PartyIDs_1_1_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_50;
        set_field(noNested2PartyIDs_1_1_2_0, FIX::Nested2PartyID{"STRING_1259612559"}, NestedParties2_NoNested2PartyIDs_50);
        set_field(noNested2PartyIDs_1_1_2_0, FIX::Nested2PartyIDSource{'7'}, NestedParties2_NoNested2PartyIDs_50);
        set_field(noNested2PartyIDs_1_1_2_0, FIX::Nested2PartyRole{1671311960}, NestedParties2_NoNested2PartyIDs_50);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_50);
        all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_1_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_97;
          set_field(noNested2PartySubIDs_1_1_0_3_0, FIX::Nested2PartySubID{"STRING_1369891819"}, NstdPtys2SubGrp_NoNested2PartySubIDs_97);
          set_field(noNested2PartySubIDs_1_1_0_3_0, FIX::Nested2PartySubIDType{350574765}, NstdPtys2SubGrp_NoNested2PartySubIDs_97);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_97);
          all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_1_1_2_0.addGroup(noNested2PartySubIDs_1_1_0_3_0);
        }
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_1_0_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_98;
          set_field(noNested2PartySubIDs_1_1_0_3_1, FIX::Nested2PartySubID{"STRING_1054493864"}, NstdPtys2SubGrp_NoNested2PartySubIDs_98);
          set_field(noNested2PartySubIDs_1_1_0_3_1, FIX::Nested2PartySubIDType{594071311}, NstdPtys2SubGrp_NoNested2PartySubIDs_98);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_98);
          all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_1_1_2_0.addGroup(noNested2PartySubIDs_1_1_0_3_1);
        }
        noAllocs_1_1_1.addGroup(noNested2PartyIDs_1_1_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs noNested2PartyIDs_1_1_2_1;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_51;
        set_field(noNested2PartyIDs_1_1_2_1, FIX::Nested2PartyID{"STRING_815776407"}, NestedParties2_NoNested2PartyIDs_51);
        set_field(noNested2PartyIDs_1_1_2_1, FIX::Nested2PartyIDSource{'4'}, NestedParties2_NoNested2PartyIDs_51);
        set_field(noNested2PartyIDs_1_1_2_1, FIX::Nested2PartyRole{1829446446}, NestedParties2_NoNested2PartyIDs_51);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_51);
        all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::TradeCaptureReport::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_1_1_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_99;
          set_field(noNested2PartySubIDs_1_1_1_3_0, FIX::Nested2PartySubID{"STRING_359265827"}, NstdPtys2SubGrp_NoNested2PartySubIDs_99);
          set_field(noNested2PartySubIDs_1_1_1_3_0, FIX::Nested2PartySubIDType{1624158701}, NstdPtys2SubGrp_NoNested2PartySubIDs_99);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_99);
          all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_1_1_2_1.addGroup(noNested2PartySubIDs_1_1_1_3_0);
        }
        noAllocs_1_1_1.addGroup(noNested2PartyIDs_1_1_2_1);
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
    FIX::LegCalculatedCcyLastQty LegCalculatedCcyLastQty_2;
    LegCalculatedCcyLastQty_2.setString("9820447");
set_field(noLegs_0_0, LegCalculatedCcyLastQty_2, TrdInstrmtLegGrp_NoLegs_0);
    set_field(noLegs_0_0, FIX::LegCoveredOrUncovered{1949879880}, TrdInstrmtLegGrp_NoLegs_0);
    FIX::LegCurrencyRatio LegCurrencyRatio_6;
    LegCurrencyRatio_6.setString("10870597");
set_field(noLegs_0_0, LegCurrencyRatio_6, TrdInstrmtLegGrp_NoLegs_0);
    FIX::LegDividendYield LegDividendYield_6;
    LegDividendYield_6.setString("92.790000");
set_field(noLegs_0_0, LegDividendYield_6, TrdInstrmtLegGrp_NoLegs_0);
    set_field(noLegs_0_0, FIX::LegExecInst{"MULTIPLECHARVALUE_1034188244"}, TrdInstrmtLegGrp_NoLegs_0);
    FIX::LegGrossTradeAmt LegGrossTradeAmt_2;
    LegGrossTradeAmt_2.setString("14154966");
set_field(noLegs_0_0, LegGrossTradeAmt_2, TrdInstrmtLegGrp_NoLegs_0);
    FIX::LegLastForwardPoints LegLastForwardPoints_2;
    LegLastForwardPoints_2.setString("3162213");
set_field(noLegs_0_0, LegLastForwardPoints_2, TrdInstrmtLegGrp_NoLegs_0);
    FIX::LegLastPx LegLastPx_2;
    LegLastPx_2.setString("15219026");
set_field(noLegs_0_0, LegLastPx_2, TrdInstrmtLegGrp_NoLegs_0);
    FIX::LegLastQty LegLastQty_2;
    LegLastQty_2.setString("6999217");
set_field(noLegs_0_0, LegLastQty_2, TrdInstrmtLegGrp_NoLegs_0);
    set_field(noLegs_0_0, FIX::LegNumber{1656581640}, TrdInstrmtLegGrp_NoLegs_0);
    set_field(noLegs_0_0, FIX::LegPositionEffect{'2'}, TrdInstrmtLegGrp_NoLegs_0);
    FIX::LegQty LegQty_21;
    LegQty_21.setString("3671148");
set_field(noLegs_0_0, LegQty_21, TrdInstrmtLegGrp_NoLegs_0);
    set_field(noLegs_0_0, FIX::LegRefID{"STRING_1733677102"}, TrdInstrmtLegGrp_NoLegs_0);
    set_field(noLegs_0_0, FIX::LegReportID{"STRING_1820437455"}, TrdInstrmtLegGrp_NoLegs_0);
    set_field(noLegs_0_0, FIX::LegSettlCurrency{"USD"}, TrdInstrmtLegGrp_NoLegs_0);
    set_field(noLegs_0_0, FIX::LegSettlDate{"LOCALMKTDATE_932566366"}, TrdInstrmtLegGrp_NoLegs_0);
    set_field(noLegs_0_0, FIX::LegSettlType{'1'}, TrdInstrmtLegGrp_NoLegs_0);
    set_field(noLegs_0_0, FIX::LegSwapType{5}, TrdInstrmtLegGrp_NoLegs_0);
    FIX::LegVolatility LegVolatility_6;
    LegVolatility_6.setString("6130435");
set_field(noLegs_0_0, LegVolatility_6, TrdInstrmtLegGrp_NoLegs_0);
    all_values.push_back(TrdInstrmtLegGrp_NoLegs_0);
    all_compo_names.insert("...NoLegs");

    // InstrumentLeg
    multiset<string> InstrumentLeg_137;
    set_field(noLegs_0_0, FIX::EncodedLegIssuer{"DATA_868611653"}, InstrumentLeg_137);
    set_field(noLegs_0_0, FIX::EncodedLegIssuerLen{476174128}, InstrumentLeg_137);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDesc{"DATA_1667537399"}, InstrumentLeg_137);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDescLen{1462682964}, InstrumentLeg_137);
    set_field(noLegs_0_0, FIX::LegCFICode{"STRING_1291950535"}, InstrumentLeg_137);
    FIX::LegContractMultiplier LegContractMultiplier_137;
    LegContractMultiplier_137.setString("20885644");
set_field(noLegs_0_0, LegContractMultiplier_137, InstrumentLeg_137);
    set_field(noLegs_0_0, FIX::LegContractMultiplierUnit{1144645762}, InstrumentLeg_137);
    set_field(noLegs_0_0, FIX::LegContractSettlMonth{"MONTHYEAR_732606807"}, InstrumentLeg_137);
    set_field(noLegs_0_0, FIX::LegCountryOfIssue{"COUNTRY_300346592"}, InstrumentLeg_137);
    set_field(noLegs_0_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_621320815"}, InstrumentLeg_137);
    FIX::LegCouponRate LegCouponRate_137;
    LegCouponRate_137.setString("23.390000");
set_field(noLegs_0_0, LegCouponRate_137, InstrumentLeg_137);
    set_field(noLegs_0_0, FIX::LegCreditRating{"STRING_1282391357"}, InstrumentLeg_137);
    set_field(noLegs_0_0, FIX::LegCurrency{"GBP"}, InstrumentLeg_137);
    set_field(noLegs_0_0, FIX::LegDatedDate{"LOCALMKTDATE_336426988"}, InstrumentLeg_137);
    set_field(noLegs_0_0, FIX::LegExerciseStyle{1457905291}, InstrumentLeg_137);
    FIX::LegFactor LegFactor_137;
    LegFactor_137.setString("16256051");
set_field(noLegs_0_0, LegFactor_137, InstrumentLeg_137);
    set_field(noLegs_0_0, FIX::LegFlowScheduleType{652648317}, InstrumentLeg_137);
    set_field(noLegs_0_0, FIX::LegInstrRegistry{"STRING_832324292"}, InstrumentLeg_137);
    set_field(noLegs_0_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_178043191"}, InstrumentLeg_137);
    set_field(noLegs_0_0, FIX::LegIssueDate{"LOCALMKTDATE_161746309"}, InstrumentLeg_137);
    set_field(noLegs_0_0, FIX::LegIssuer{"STRING_755392592"}, InstrumentLeg_137);
    set_field(noLegs_0_0, FIX::LegLocaleOfIssue{"STRING_545158060"}, InstrumentLeg_137);
    set_field(noLegs_0_0, FIX::LegMaturityDate{"LOCALMKTDATE_1895423411"}, InstrumentLeg_137);
    set_field(noLegs_0_0, FIX::LegMaturityMonthYear{"MONTHYEAR_428346399"}, InstrumentLeg_137);
    set_field(noLegs_0_0, FIX::LegMaturityTime{"TZTIMEONLY_1415660631"}, InstrumentLeg_137);
    set_field(noLegs_0_0, FIX::LegOptAttribute{'3'}, InstrumentLeg_137);
    FIX::LegOptionRatio LegOptionRatio_137;
    LegOptionRatio_137.setString("13609127");
set_field(noLegs_0_0, LegOptionRatio_137, InstrumentLeg_137);
    set_field(noLegs_0_0, FIX::LegPool{"STRING_914380465"}, InstrumentLeg_137);
    set_field(noLegs_0_0, FIX::LegPriceUnitOfMeasure{"STRING_475310177"}, InstrumentLeg_137);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_137;
    LegPriceUnitOfMeasureQty_137.setString("19739563");
set_field(noLegs_0_0, LegPriceUnitOfMeasureQty_137, InstrumentLeg_137);
    set_field(noLegs_0_0, FIX::LegProduct{1782992118}, InstrumentLeg_137);
    set_field(noLegs_0_0, FIX::LegPutOrCall{951484305}, InstrumentLeg_137);
    FIX::LegRatioQty LegRatioQty_137;
    LegRatioQty_137.setString("14940100");
set_field(noLegs_0_0, LegRatioQty_137, InstrumentLeg_137);
    set_field(noLegs_0_0, FIX::LegRedemptionDate{"LOCALMKTDATE_1098191434"}, InstrumentLeg_137);
    set_field(noLegs_0_0, FIX::LegRepoCollateralSecurityType{"STRING_95951192"}, InstrumentLeg_137);
    FIX::LegRepurchaseRate LegRepurchaseRate_137;
    LegRepurchaseRate_137.setString("8.180000");
set_field(noLegs_0_0, LegRepurchaseRate_137, InstrumentLeg_137);
    set_field(noLegs_0_0, FIX::LegRepurchaseTerm{95353548}, InstrumentLeg_137);
    set_field(noLegs_0_0, FIX::LegSecurityDesc{"STRING_828557999"}, InstrumentLeg_137);
    set_field(noLegs_0_0, FIX::LegSecurityExchange{"EXCHANGE_1735437410"}, InstrumentLeg_137);
    set_field(noLegs_0_0, FIX::LegSecurityID{"STRING_716674363"}, InstrumentLeg_137);
    set_field(noLegs_0_0, FIX::LegSecurityIDSource{"STRING_2099090338"}, InstrumentLeg_137);
    set_field(noLegs_0_0, FIX::LegSecuritySubType{"STRING_870345119"}, InstrumentLeg_137);
    set_field(noLegs_0_0, FIX::LegSecurityType{"STRING_1140391410"}, InstrumentLeg_137);
    set_field(noLegs_0_0, FIX::LegSide{'1'}, InstrumentLeg_137);
    set_field(noLegs_0_0, FIX::LegStateOrProvinceOfIssue{"STRING_1206772108"}, InstrumentLeg_137);
    set_field(noLegs_0_0, FIX::LegStrikeCurrency{"JPY"}, InstrumentLeg_137);
    FIX::LegStrikePrice LegStrikePrice_137;
    LegStrikePrice_137.setString("18594204");
set_field(noLegs_0_0, LegStrikePrice_137, InstrumentLeg_137);
    set_field(noLegs_0_0, FIX::LegSymbol{"STRING_1283137346"}, InstrumentLeg_137);
    set_field(noLegs_0_0, FIX::LegSymbolSfx{"STRING_1965363467"}, InstrumentLeg_137);
    set_field(noLegs_0_0, FIX::LegTimeUnit{"STRING_2021166734"}, InstrumentLeg_137);
    set_field(noLegs_0_0, FIX::LegUnitOfMeasure{"STRING_2038529938"}, InstrumentLeg_137);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_137;
    LegUnitOfMeasureQty_137.setString("3630378");
set_field(noLegs_0_0, LegUnitOfMeasureQty_137, InstrumentLeg_137);
    all_values.push_back(InstrumentLeg_137);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_273;
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltID{"STRING_319392690"}, LegSecAltIDGrp_NoLegSecurityAltID_273);
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltIDSource{"STRING_1778698511"}, LegSecAltIDGrp_NoLegSecurityAltID_273);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_273);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_274;
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltID{"STRING_2118817311"}, LegSecAltIDGrp_NoLegSecurityAltID_274);
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltIDSource{"STRING_1680305455"}, LegSecAltIDGrp_NoLegSecurityAltID_274);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_274);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_275;
      set_field(noLegSecurityAltID_0_1_2, FIX::LegSecurityAltID{"STRING_545595328"}, LegSecAltIDGrp_NoLegSecurityAltID_275);
      set_field(noLegSecurityAltID_0_1_2, FIX::LegSecurityAltIDSource{"STRING_446643840"}, LegSecAltIDGrp_NoLegSecurityAltID_275);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_275);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_2);
    }
    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoLegStipulations noLegStipulations_0_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_63;
      set_field(noLegStipulations_0_1_0, FIX::LegStipulationType{"STRING_181103798"}, LegStipulations_NoLegStipulations_63);
      set_field(noLegStipulations_0_1_0, FIX::LegStipulationValue{"STRING_1398128145"}, LegStipulations_NoLegStipulations_63);
      all_values.push_back(LegStipulations_NoLegStipulations_63);
      all_compo_names.insert("...NoLegs...NoLegStipulations");

      noLegs_0_0.addGroup(noLegStipulations_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoLegStipulations noLegStipulations_0_1_1;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_64;
      set_field(noLegStipulations_0_1_1, FIX::LegStipulationType{"STRING_853304513"}, LegStipulations_NoLegStipulations_64);
      set_field(noLegStipulations_0_1_1, FIX::LegStipulationValue{"STRING_1279295232"}, LegStipulations_NoLegStipulations_64);
      all_values.push_back(LegStipulations_NoLegStipulations_64);
      all_compo_names.insert("...NoLegs...NoLegStipulations");

      noLegs_0_0.addGroup(noLegStipulations_0_1_1);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_154;
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyID{"STRING_140911683"}, NestedParties_NoNestedPartyIDs_154);
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_154);
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyRole{175153689}, NestedParties_NoNestedPartyIDs_154);
      all_values.push_back(NestedParties_NoNestedPartyIDs_154);
      all_compo_names.insert("...NoLegs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_317;
        set_field(noNestedPartySubIDs_0_0_2_0, FIX::NestedPartySubID{"STRING_2091323143"}, NstdPtysSubGrp_NoNestedPartySubIDs_317);
        set_field(noNestedPartySubIDs_0_0_2_0, FIX::NestedPartySubIDType{126760380}, NstdPtysSubGrp_NoNestedPartySubIDs_317);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_317);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_318;
        set_field(noNestedPartySubIDs_0_0_2_1, FIX::NestedPartySubID{"STRING_599210565"}, NstdPtysSubGrp_NoNestedPartySubIDs_318);
        set_field(noNestedPartySubIDs_0_0_2_1, FIX::NestedPartySubIDType{1084230905}, NstdPtysSubGrp_NoNestedPartySubIDs_318);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_318);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_319;
        set_field(noNestedPartySubIDs_0_0_2_2, FIX::NestedPartySubID{"STRING_288475540"}, NstdPtysSubGrp_NoNestedPartySubIDs_319);
        set_field(noNestedPartySubIDs_0_0_2_2, FIX::NestedPartySubIDType{1805982673}, NstdPtysSubGrp_NoNestedPartySubIDs_319);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_319);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_2);
      }
      noLegs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    // TradeCapLegUnderlyingsGrp
    // Group TradeCapLegUnderlyingsGrp.NoOfLegUnderlyings
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoOfLegUnderlyings noOfLegUnderlyings_0_1_0;
      // TradeCapLegUnderlyingsGrp.NoOfLegUnderlyings
      // UnderlyingLegInstrument
      multiset<string> UnderlyingLegInstrument_0;
      set_field(noOfLegUnderlyings_0_1_0, FIX::UnderlyingLegCFICode{"STRING_2075795816"}, UnderlyingLegInstrument_0);
      set_field(noOfLegUnderlyings_0_1_0, FIX::UnderlyingLegMaturityDate{"LOCALMKTDATE_1517919450"}, UnderlyingLegInstrument_0);
      set_field(noOfLegUnderlyings_0_1_0, FIX::UnderlyingLegMaturityMonthYear{"MONTHYEAR_670697657"}, UnderlyingLegInstrument_0);
      set_field(noOfLegUnderlyings_0_1_0, FIX::UnderlyingLegMaturityTime{"TZTIMEONLY_1893675636"}, UnderlyingLegInstrument_0);
      set_field(noOfLegUnderlyings_0_1_0, FIX::UnderlyingLegOptAttribute{'1'}, UnderlyingLegInstrument_0);
      set_field(noOfLegUnderlyings_0_1_0, FIX::UnderlyingLegPutOrCall{561743948}, UnderlyingLegInstrument_0);
      set_field(noOfLegUnderlyings_0_1_0, FIX::UnderlyingLegSecurityDesc{"STRING_109229868"}, UnderlyingLegInstrument_0);
      set_field(noOfLegUnderlyings_0_1_0, FIX::UnderlyingLegSecurityExchange{"STRING_1013225385"}, UnderlyingLegInstrument_0);
      set_field(noOfLegUnderlyings_0_1_0, FIX::UnderlyingLegSecurityID{"STRING_881136638"}, UnderlyingLegInstrument_0);
      set_field(noOfLegUnderlyings_0_1_0, FIX::UnderlyingLegSecurityIDSource{"STRING_1887928379"}, UnderlyingLegInstrument_0);
      set_field(noOfLegUnderlyings_0_1_0, FIX::UnderlyingLegSecuritySubType{"STRING_984559049"}, UnderlyingLegInstrument_0);
      set_field(noOfLegUnderlyings_0_1_0, FIX::UnderlyingLegSecurityType{"STRING_413958445"}, UnderlyingLegInstrument_0);
      FIX::UnderlyingLegStrikePrice UnderlyingLegStrikePrice_0;
      UnderlyingLegStrikePrice_0.setString("2860400");
set_field(noOfLegUnderlyings_0_1_0, UnderlyingLegStrikePrice_0, UnderlyingLegInstrument_0);
      set_field(noOfLegUnderlyings_0_1_0, FIX::UnderlyingLegSymbol{"STRING_1431202889"}, UnderlyingLegInstrument_0);
      set_field(noOfLegUnderlyings_0_1_0, FIX::UnderlyingLegSymbolSfx{"STRING_1920736554"}, UnderlyingLegInstrument_0);
      all_values.push_back(UnderlyingLegInstrument_0);
      all_compo_names.insert("...NoLegs...NoOfLegUnderlyings.");

      // UnderlyingLegSecurityAltIDGrp
      // Group UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoOfLegUnderlyings::NoUnderlyingLegSecurityAltID noUnderlyingLegSecurityAltID_0_0_2_0;
        // UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
        multiset<string> UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_0;
        set_field(noUnderlyingLegSecurityAltID_0_0_2_0, FIX::UnderlyingLegSecurityAltID{"STRING_681847387"}, UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_0);
        set_field(noUnderlyingLegSecurityAltID_0_0_2_0, FIX::UnderlyingLegSecurityAltIDSource{"STRING_626557419"}, UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_0);
        all_values.push_back(UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_0);
        all_compo_names.insert("...NoLegs...NoOfLegUnderlyings....NoUnderlyingLegSecurityAltID");

        noOfLegUnderlyings_0_1_0.addGroup(noUnderlyingLegSecurityAltID_0_0_2_0);
      }
      noLegs_0_0.addGroup(noOfLegUnderlyings_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoOfLegUnderlyings noOfLegUnderlyings_0_1_1;
      // TradeCapLegUnderlyingsGrp.NoOfLegUnderlyings
      // UnderlyingLegInstrument
      multiset<string> UnderlyingLegInstrument_1;
      set_field(noOfLegUnderlyings_0_1_1, FIX::UnderlyingLegCFICode{"STRING_1746439089"}, UnderlyingLegInstrument_1);
      set_field(noOfLegUnderlyings_0_1_1, FIX::UnderlyingLegMaturityDate{"LOCALMKTDATE_28443077"}, UnderlyingLegInstrument_1);
      set_field(noOfLegUnderlyings_0_1_1, FIX::UnderlyingLegMaturityMonthYear{"MONTHYEAR_767469102"}, UnderlyingLegInstrument_1);
      set_field(noOfLegUnderlyings_0_1_1, FIX::UnderlyingLegMaturityTime{"TZTIMEONLY_973604221"}, UnderlyingLegInstrument_1);
      set_field(noOfLegUnderlyings_0_1_1, FIX::UnderlyingLegOptAttribute{'2'}, UnderlyingLegInstrument_1);
      set_field(noOfLegUnderlyings_0_1_1, FIX::UnderlyingLegPutOrCall{496334547}, UnderlyingLegInstrument_1);
      set_field(noOfLegUnderlyings_0_1_1, FIX::UnderlyingLegSecurityDesc{"STRING_917443716"}, UnderlyingLegInstrument_1);
      set_field(noOfLegUnderlyings_0_1_1, FIX::UnderlyingLegSecurityExchange{"STRING_330357146"}, UnderlyingLegInstrument_1);
      set_field(noOfLegUnderlyings_0_1_1, FIX::UnderlyingLegSecurityID{"STRING_1095545112"}, UnderlyingLegInstrument_1);
      set_field(noOfLegUnderlyings_0_1_1, FIX::UnderlyingLegSecurityIDSource{"STRING_2001674621"}, UnderlyingLegInstrument_1);
      set_field(noOfLegUnderlyings_0_1_1, FIX::UnderlyingLegSecuritySubType{"STRING_618832687"}, UnderlyingLegInstrument_1);
      set_field(noOfLegUnderlyings_0_1_1, FIX::UnderlyingLegSecurityType{"STRING_754044137"}, UnderlyingLegInstrument_1);
      FIX::UnderlyingLegStrikePrice UnderlyingLegStrikePrice_1;
      UnderlyingLegStrikePrice_1.setString("13892349");
set_field(noOfLegUnderlyings_0_1_1, UnderlyingLegStrikePrice_1, UnderlyingLegInstrument_1);
      set_field(noOfLegUnderlyings_0_1_1, FIX::UnderlyingLegSymbol{"STRING_547144855"}, UnderlyingLegInstrument_1);
      set_field(noOfLegUnderlyings_0_1_1, FIX::UnderlyingLegSymbolSfx{"STRING_124479939"}, UnderlyingLegInstrument_1);
      all_values.push_back(UnderlyingLegInstrument_1);
      all_compo_names.insert("...NoLegs...NoOfLegUnderlyings.");

      // UnderlyingLegSecurityAltIDGrp
      // Group UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoOfLegUnderlyings::NoUnderlyingLegSecurityAltID noUnderlyingLegSecurityAltID_0_1_2_0;
        // UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
        multiset<string> UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_1;
        set_field(noUnderlyingLegSecurityAltID_0_1_2_0, FIX::UnderlyingLegSecurityAltID{"STRING_293336843"}, UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_1);
        set_field(noUnderlyingLegSecurityAltID_0_1_2_0, FIX::UnderlyingLegSecurityAltIDSource{"STRING_1516082475"}, UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_1);
        all_values.push_back(UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_1);
        all_compo_names.insert("...NoLegs...NoOfLegUnderlyings....NoUnderlyingLegSecurityAltID");

        noOfLegUnderlyings_0_1_1.addGroup(noUnderlyingLegSecurityAltID_0_1_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoOfLegUnderlyings::NoUnderlyingLegSecurityAltID noUnderlyingLegSecurityAltID_0_1_2_1;
        // UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
        multiset<string> UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_2;
        set_field(noUnderlyingLegSecurityAltID_0_1_2_1, FIX::UnderlyingLegSecurityAltID{"STRING_474192890"}, UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_2);
        set_field(noUnderlyingLegSecurityAltID_0_1_2_1, FIX::UnderlyingLegSecurityAltIDSource{"STRING_402566711"}, UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_2);
        all_values.push_back(UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_2);
        all_compo_names.insert("...NoLegs...NoOfLegUnderlyings....NoUnderlyingLegSecurityAltID");

        noOfLegUnderlyings_0_1_1.addGroup(noUnderlyingLegSecurityAltID_0_1_2_1);
      }
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoOfLegUnderlyings::NoUnderlyingLegSecurityAltID noUnderlyingLegSecurityAltID_0_1_2_2;
        // UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
        multiset<string> UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_3;
        set_field(noUnderlyingLegSecurityAltID_0_1_2_2, FIX::UnderlyingLegSecurityAltID{"STRING_381824213"}, UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_3);
        set_field(noUnderlyingLegSecurityAltID_0_1_2_2, FIX::UnderlyingLegSecurityAltIDSource{"STRING_1355329528"}, UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_3);
        all_values.push_back(UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_3);
        all_compo_names.insert("...NoLegs...NoOfLegUnderlyings....NoUnderlyingLegSecurityAltID");

        noOfLegUnderlyings_0_1_1.addGroup(noUnderlyingLegSecurityAltID_0_1_2_2);
      }
      noLegs_0_0.addGroup(noOfLegUnderlyings_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoOfLegUnderlyings noOfLegUnderlyings_0_1_2;
      // TradeCapLegUnderlyingsGrp.NoOfLegUnderlyings
      // UnderlyingLegInstrument
      multiset<string> UnderlyingLegInstrument_2;
      set_field(noOfLegUnderlyings_0_1_2, FIX::UnderlyingLegCFICode{"STRING_143011442"}, UnderlyingLegInstrument_2);
      set_field(noOfLegUnderlyings_0_1_2, FIX::UnderlyingLegMaturityDate{"LOCALMKTDATE_1366383262"}, UnderlyingLegInstrument_2);
      set_field(noOfLegUnderlyings_0_1_2, FIX::UnderlyingLegMaturityMonthYear{"MONTHYEAR_1769287974"}, UnderlyingLegInstrument_2);
      set_field(noOfLegUnderlyings_0_1_2, FIX::UnderlyingLegMaturityTime{"TZTIMEONLY_429051501"}, UnderlyingLegInstrument_2);
      set_field(noOfLegUnderlyings_0_1_2, FIX::UnderlyingLegOptAttribute{'6'}, UnderlyingLegInstrument_2);
      set_field(noOfLegUnderlyings_0_1_2, FIX::UnderlyingLegPutOrCall{1542540880}, UnderlyingLegInstrument_2);
      set_field(noOfLegUnderlyings_0_1_2, FIX::UnderlyingLegSecurityDesc{"STRING_896195358"}, UnderlyingLegInstrument_2);
      set_field(noOfLegUnderlyings_0_1_2, FIX::UnderlyingLegSecurityExchange{"STRING_1331949890"}, UnderlyingLegInstrument_2);
      set_field(noOfLegUnderlyings_0_1_2, FIX::UnderlyingLegSecurityID{"STRING_21614651"}, UnderlyingLegInstrument_2);
      set_field(noOfLegUnderlyings_0_1_2, FIX::UnderlyingLegSecurityIDSource{"STRING_495150799"}, UnderlyingLegInstrument_2);
      set_field(noOfLegUnderlyings_0_1_2, FIX::UnderlyingLegSecuritySubType{"STRING_1360392967"}, UnderlyingLegInstrument_2);
      set_field(noOfLegUnderlyings_0_1_2, FIX::UnderlyingLegSecurityType{"STRING_789083753"}, UnderlyingLegInstrument_2);
      FIX::UnderlyingLegStrikePrice UnderlyingLegStrikePrice_2;
      UnderlyingLegStrikePrice_2.setString("14687550");
set_field(noOfLegUnderlyings_0_1_2, UnderlyingLegStrikePrice_2, UnderlyingLegInstrument_2);
      set_field(noOfLegUnderlyings_0_1_2, FIX::UnderlyingLegSymbol{"STRING_1563989734"}, UnderlyingLegInstrument_2);
      set_field(noOfLegUnderlyings_0_1_2, FIX::UnderlyingLegSymbolSfx{"STRING_1285418300"}, UnderlyingLegInstrument_2);
      all_values.push_back(UnderlyingLegInstrument_2);
      all_compo_names.insert("...NoLegs...NoOfLegUnderlyings.");

      // UnderlyingLegSecurityAltIDGrp
      // Group UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoOfLegUnderlyings::NoUnderlyingLegSecurityAltID noUnderlyingLegSecurityAltID_0_2_2_0;
        // UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
        multiset<string> UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_4;
        set_field(noUnderlyingLegSecurityAltID_0_2_2_0, FIX::UnderlyingLegSecurityAltID{"STRING_1894346880"}, UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_4);
        set_field(noUnderlyingLegSecurityAltID_0_2_2_0, FIX::UnderlyingLegSecurityAltIDSource{"STRING_233479765"}, UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_4);
        all_values.push_back(UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_4);
        all_compo_names.insert("...NoLegs...NoOfLegUnderlyings....NoUnderlyingLegSecurityAltID");

        noOfLegUnderlyings_0_1_2.addGroup(noUnderlyingLegSecurityAltID_0_2_2_0);
      }
      noLegs_0_0.addGroup(noOfLegUnderlyings_0_1_2);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::TradeCaptureReport::NoLegs noLegs_0_1;
    // TrdInstrmtLegGrp.NoLegs
    multiset<string> TrdInstrmtLegGrp_NoLegs_1;
    FIX::LegCalculatedCcyLastQty LegCalculatedCcyLastQty_3;
    LegCalculatedCcyLastQty_3.setString("929060");
set_field(noLegs_0_1, LegCalculatedCcyLastQty_3, TrdInstrmtLegGrp_NoLegs_1);
    set_field(noLegs_0_1, FIX::LegCoveredOrUncovered{365695919}, TrdInstrmtLegGrp_NoLegs_1);
    FIX::LegCurrencyRatio LegCurrencyRatio_7;
    LegCurrencyRatio_7.setString("9875239");
set_field(noLegs_0_1, LegCurrencyRatio_7, TrdInstrmtLegGrp_NoLegs_1);
    FIX::LegDividendYield LegDividendYield_7;
    LegDividendYield_7.setString("9.950000");
set_field(noLegs_0_1, LegDividendYield_7, TrdInstrmtLegGrp_NoLegs_1);
    set_field(noLegs_0_1, FIX::LegExecInst{"MULTIPLECHARVALUE_912840775"}, TrdInstrmtLegGrp_NoLegs_1);
    FIX::LegGrossTradeAmt LegGrossTradeAmt_3;
    LegGrossTradeAmt_3.setString("11120038");
set_field(noLegs_0_1, LegGrossTradeAmt_3, TrdInstrmtLegGrp_NoLegs_1);
    FIX::LegLastForwardPoints LegLastForwardPoints_3;
    LegLastForwardPoints_3.setString("13945899");
set_field(noLegs_0_1, LegLastForwardPoints_3, TrdInstrmtLegGrp_NoLegs_1);
    FIX::LegLastPx LegLastPx_3;
    LegLastPx_3.setString("12061776");
set_field(noLegs_0_1, LegLastPx_3, TrdInstrmtLegGrp_NoLegs_1);
    FIX::LegLastQty LegLastQty_3;
    LegLastQty_3.setString("4806026");
set_field(noLegs_0_1, LegLastQty_3, TrdInstrmtLegGrp_NoLegs_1);
    set_field(noLegs_0_1, FIX::LegNumber{1868782828}, TrdInstrmtLegGrp_NoLegs_1);
    set_field(noLegs_0_1, FIX::LegPositionEffect{'1'}, TrdInstrmtLegGrp_NoLegs_1);
    FIX::LegQty LegQty_22;
    LegQty_22.setString("8624268");
set_field(noLegs_0_1, LegQty_22, TrdInstrmtLegGrp_NoLegs_1);
    set_field(noLegs_0_1, FIX::LegRefID{"STRING_1076628708"}, TrdInstrmtLegGrp_NoLegs_1);
    set_field(noLegs_0_1, FIX::LegReportID{"STRING_1751755772"}, TrdInstrmtLegGrp_NoLegs_1);
    set_field(noLegs_0_1, FIX::LegSettlCurrency{"JPY"}, TrdInstrmtLegGrp_NoLegs_1);
    set_field(noLegs_0_1, FIX::LegSettlDate{"LOCALMKTDATE_33323626"}, TrdInstrmtLegGrp_NoLegs_1);
    set_field(noLegs_0_1, FIX::LegSettlType{'7'}, TrdInstrmtLegGrp_NoLegs_1);
    set_field(noLegs_0_1, FIX::LegSwapType{4}, TrdInstrmtLegGrp_NoLegs_1);
    FIX::LegVolatility LegVolatility_7;
    LegVolatility_7.setString("9295189");
set_field(noLegs_0_1, LegVolatility_7, TrdInstrmtLegGrp_NoLegs_1);
    all_values.push_back(TrdInstrmtLegGrp_NoLegs_1);
    all_compo_names.insert("...NoLegs");

    // InstrumentLeg
    multiset<string> InstrumentLeg_138;
    set_field(noLegs_0_1, FIX::EncodedLegIssuer{"DATA_2063378890"}, InstrumentLeg_138);
    set_field(noLegs_0_1, FIX::EncodedLegIssuerLen{115104917}, InstrumentLeg_138);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDesc{"DATA_1424669784"}, InstrumentLeg_138);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDescLen{1276288210}, InstrumentLeg_138);
    set_field(noLegs_0_1, FIX::LegCFICode{"STRING_904188670"}, InstrumentLeg_138);
    FIX::LegContractMultiplier LegContractMultiplier_138;
    LegContractMultiplier_138.setString("7459411");
set_field(noLegs_0_1, LegContractMultiplier_138, InstrumentLeg_138);
    set_field(noLegs_0_1, FIX::LegContractMultiplierUnit{692794296}, InstrumentLeg_138);
    set_field(noLegs_0_1, FIX::LegContractSettlMonth{"MONTHYEAR_42123323"}, InstrumentLeg_138);
    set_field(noLegs_0_1, FIX::LegCountryOfIssue{"COUNTRY_984656245"}, InstrumentLeg_138);
    set_field(noLegs_0_1, FIX::LegCouponPaymentDate{"LOCALMKTDATE_439657528"}, InstrumentLeg_138);
    FIX::LegCouponRate LegCouponRate_138;
    LegCouponRate_138.setString("30.880000");
set_field(noLegs_0_1, LegCouponRate_138, InstrumentLeg_138);
    set_field(noLegs_0_1, FIX::LegCreditRating{"STRING_1077562307"}, InstrumentLeg_138);
    set_field(noLegs_0_1, FIX::LegCurrency{"USD"}, InstrumentLeg_138);
    set_field(noLegs_0_1, FIX::LegDatedDate{"LOCALMKTDATE_412219654"}, InstrumentLeg_138);
    set_field(noLegs_0_1, FIX::LegExerciseStyle{1718194223}, InstrumentLeg_138);
    FIX::LegFactor LegFactor_138;
    LegFactor_138.setString("2276471");
set_field(noLegs_0_1, LegFactor_138, InstrumentLeg_138);
    set_field(noLegs_0_1, FIX::LegFlowScheduleType{1806809591}, InstrumentLeg_138);
    set_field(noLegs_0_1, FIX::LegInstrRegistry{"STRING_776888193"}, InstrumentLeg_138);
    set_field(noLegs_0_1, FIX::LegInterestAccrualDate{"LOCALMKTDATE_708249854"}, InstrumentLeg_138);
    set_field(noLegs_0_1, FIX::LegIssueDate{"LOCALMKTDATE_1528108771"}, InstrumentLeg_138);
    set_field(noLegs_0_1, FIX::LegIssuer{"STRING_238148875"}, InstrumentLeg_138);
    set_field(noLegs_0_1, FIX::LegLocaleOfIssue{"STRING_1570676736"}, InstrumentLeg_138);
    set_field(noLegs_0_1, FIX::LegMaturityDate{"LOCALMKTDATE_457253832"}, InstrumentLeg_138);
    set_field(noLegs_0_1, FIX::LegMaturityMonthYear{"MONTHYEAR_1989904648"}, InstrumentLeg_138);
    set_field(noLegs_0_1, FIX::LegMaturityTime{"TZTIMEONLY_1652003233"}, InstrumentLeg_138);
    set_field(noLegs_0_1, FIX::LegOptAttribute{'1'}, InstrumentLeg_138);
    FIX::LegOptionRatio LegOptionRatio_138;
    LegOptionRatio_138.setString("20232282");
set_field(noLegs_0_1, LegOptionRatio_138, InstrumentLeg_138);
    set_field(noLegs_0_1, FIX::LegPool{"STRING_235948585"}, InstrumentLeg_138);
    set_field(noLegs_0_1, FIX::LegPriceUnitOfMeasure{"STRING_1249177133"}, InstrumentLeg_138);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_138;
    LegPriceUnitOfMeasureQty_138.setString("8052636");
set_field(noLegs_0_1, LegPriceUnitOfMeasureQty_138, InstrumentLeg_138);
    set_field(noLegs_0_1, FIX::LegProduct{151843827}, InstrumentLeg_138);
    set_field(noLegs_0_1, FIX::LegPutOrCall{1364282050}, InstrumentLeg_138);
    FIX::LegRatioQty LegRatioQty_138;
    LegRatioQty_138.setString("824497");
set_field(noLegs_0_1, LegRatioQty_138, InstrumentLeg_138);
    set_field(noLegs_0_1, FIX::LegRedemptionDate{"LOCALMKTDATE_1428132037"}, InstrumentLeg_138);
    set_field(noLegs_0_1, FIX::LegRepoCollateralSecurityType{"STRING_120987073"}, InstrumentLeg_138);
    FIX::LegRepurchaseRate LegRepurchaseRate_138;
    LegRepurchaseRate_138.setString("9.030000");
set_field(noLegs_0_1, LegRepurchaseRate_138, InstrumentLeg_138);
    set_field(noLegs_0_1, FIX::LegRepurchaseTerm{2120926333}, InstrumentLeg_138);
    set_field(noLegs_0_1, FIX::LegSecurityDesc{"STRING_163110396"}, InstrumentLeg_138);
    set_field(noLegs_0_1, FIX::LegSecurityExchange{"EXCHANGE_1813047148"}, InstrumentLeg_138);
    set_field(noLegs_0_1, FIX::LegSecurityID{"STRING_413100214"}, InstrumentLeg_138);
    set_field(noLegs_0_1, FIX::LegSecurityIDSource{"STRING_438713484"}, InstrumentLeg_138);
    set_field(noLegs_0_1, FIX::LegSecuritySubType{"STRING_743125807"}, InstrumentLeg_138);
    set_field(noLegs_0_1, FIX::LegSecurityType{"STRING_1218453662"}, InstrumentLeg_138);
    set_field(noLegs_0_1, FIX::LegSide{'1'}, InstrumentLeg_138);
    set_field(noLegs_0_1, FIX::LegStateOrProvinceOfIssue{"STRING_1155345461"}, InstrumentLeg_138);
    set_field(noLegs_0_1, FIX::LegStrikeCurrency{"CHF"}, InstrumentLeg_138);
    FIX::LegStrikePrice LegStrikePrice_138;
    LegStrikePrice_138.setString("8146714");
set_field(noLegs_0_1, LegStrikePrice_138, InstrumentLeg_138);
    set_field(noLegs_0_1, FIX::LegSymbol{"STRING_1566052430"}, InstrumentLeg_138);
    set_field(noLegs_0_1, FIX::LegSymbolSfx{"STRING_490253865"}, InstrumentLeg_138);
    set_field(noLegs_0_1, FIX::LegTimeUnit{"STRING_195296528"}, InstrumentLeg_138);
    set_field(noLegs_0_1, FIX::LegUnitOfMeasure{"STRING_1804201306"}, InstrumentLeg_138);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_138;
    LegUnitOfMeasureQty_138.setString("20609306");
set_field(noLegs_0_1, LegUnitOfMeasureQty_138, InstrumentLeg_138);
    all_values.push_back(InstrumentLeg_138);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_276;
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltID{"STRING_1646622306"}, LegSecAltIDGrp_NoLegSecurityAltID_276);
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltIDSource{"STRING_1565450186"}, LegSecAltIDGrp_NoLegSecurityAltID_276);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_276);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_277;
      set_field(noLegSecurityAltID_1_1_1, FIX::LegSecurityAltID{"STRING_1808237226"}, LegSecAltIDGrp_NoLegSecurityAltID_277);
      set_field(noLegSecurityAltID_1_1_1, FIX::LegSecurityAltIDSource{"STRING_1522366932"}, LegSecAltIDGrp_NoLegSecurityAltID_277);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_277);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_278;
      set_field(noLegSecurityAltID_1_1_2, FIX::LegSecurityAltID{"STRING_1801398771"}, LegSecAltIDGrp_NoLegSecurityAltID_278);
      set_field(noLegSecurityAltID_1_1_2, FIX::LegSecurityAltIDSource{"STRING_909930711"}, LegSecAltIDGrp_NoLegSecurityAltID_278);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_278);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_2);
    }
    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoLegStipulations noLegStipulations_1_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_65;
      set_field(noLegStipulations_1_1_0, FIX::LegStipulationType{"STRING_1953242599"}, LegStipulations_NoLegStipulations_65);
      set_field(noLegStipulations_1_1_0, FIX::LegStipulationValue{"STRING_126729114"}, LegStipulations_NoLegStipulations_65);
      all_values.push_back(LegStipulations_NoLegStipulations_65);
      all_compo_names.insert("...NoLegs...NoLegStipulations");

      noLegs_0_1.addGroup(noLegStipulations_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoLegStipulations noLegStipulations_1_1_1;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_66;
      set_field(noLegStipulations_1_1_1, FIX::LegStipulationType{"STRING_262596641"}, LegStipulations_NoLegStipulations_66);
      set_field(noLegStipulations_1_1_1, FIX::LegStipulationValue{"STRING_1233890988"}, LegStipulations_NoLegStipulations_66);
      all_values.push_back(LegStipulations_NoLegStipulations_66);
      all_compo_names.insert("...NoLegs...NoLegStipulations");

      noLegs_0_1.addGroup(noLegStipulations_1_1_1);
    }
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoLegStipulations noLegStipulations_1_1_2;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_67;
      set_field(noLegStipulations_1_1_2, FIX::LegStipulationType{"STRING_247716187"}, LegStipulations_NoLegStipulations_67);
      set_field(noLegStipulations_1_1_2, FIX::LegStipulationValue{"STRING_1090987544"}, LegStipulations_NoLegStipulations_67);
      all_values.push_back(LegStipulations_NoLegStipulations_67);
      all_compo_names.insert("...NoLegs...NoLegStipulations");

      noLegs_0_1.addGroup(noLegStipulations_1_1_2);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoNestedPartyIDs noNestedPartyIDs_1_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_155;
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyID{"STRING_410826583"}, NestedParties_NoNestedPartyIDs_155);
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyIDSource{'7'}, NestedParties_NoNestedPartyIDs_155);
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyRole{1620433888}, NestedParties_NoNestedPartyIDs_155);
      all_values.push_back(NestedParties_NoNestedPartyIDs_155);
      all_compo_names.insert("...NoLegs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_320;
        set_field(noNestedPartySubIDs_1_0_2_0, FIX::NestedPartySubID{"STRING_1499676851"}, NstdPtysSubGrp_NoNestedPartySubIDs_320);
        set_field(noNestedPartySubIDs_1_0_2_0, FIX::NestedPartySubIDType{691403902}, NstdPtysSubGrp_NoNestedPartySubIDs_320);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_320);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_321;
        set_field(noNestedPartySubIDs_1_0_2_1, FIX::NestedPartySubID{"STRING_403896893"}, NstdPtysSubGrp_NoNestedPartySubIDs_321);
        set_field(noNestedPartySubIDs_1_0_2_1, FIX::NestedPartySubIDType{507538664}, NstdPtysSubGrp_NoNestedPartySubIDs_321);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_321);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_1);
      }
      noLegs_0_1.addGroup(noNestedPartyIDs_1_1_0);
    }
    // TradeCapLegUnderlyingsGrp
    // Group TradeCapLegUnderlyingsGrp.NoOfLegUnderlyings
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoOfLegUnderlyings noOfLegUnderlyings_1_1_0;
      // TradeCapLegUnderlyingsGrp.NoOfLegUnderlyings
      // UnderlyingLegInstrument
      multiset<string> UnderlyingLegInstrument_3;
      set_field(noOfLegUnderlyings_1_1_0, FIX::UnderlyingLegCFICode{"STRING_185900904"}, UnderlyingLegInstrument_3);
      set_field(noOfLegUnderlyings_1_1_0, FIX::UnderlyingLegMaturityDate{"LOCALMKTDATE_1322210068"}, UnderlyingLegInstrument_3);
      set_field(noOfLegUnderlyings_1_1_0, FIX::UnderlyingLegMaturityMonthYear{"MONTHYEAR_899136921"}, UnderlyingLegInstrument_3);
      set_field(noOfLegUnderlyings_1_1_0, FIX::UnderlyingLegMaturityTime{"TZTIMEONLY_676154769"}, UnderlyingLegInstrument_3);
      set_field(noOfLegUnderlyings_1_1_0, FIX::UnderlyingLegOptAttribute{'1'}, UnderlyingLegInstrument_3);
      set_field(noOfLegUnderlyings_1_1_0, FIX::UnderlyingLegPutOrCall{555854579}, UnderlyingLegInstrument_3);
      set_field(noOfLegUnderlyings_1_1_0, FIX::UnderlyingLegSecurityDesc{"STRING_589601723"}, UnderlyingLegInstrument_3);
      set_field(noOfLegUnderlyings_1_1_0, FIX::UnderlyingLegSecurityExchange{"STRING_22573308"}, UnderlyingLegInstrument_3);
      set_field(noOfLegUnderlyings_1_1_0, FIX::UnderlyingLegSecurityID{"STRING_54993237"}, UnderlyingLegInstrument_3);
      set_field(noOfLegUnderlyings_1_1_0, FIX::UnderlyingLegSecurityIDSource{"STRING_7568261"}, UnderlyingLegInstrument_3);
      set_field(noOfLegUnderlyings_1_1_0, FIX::UnderlyingLegSecuritySubType{"STRING_1830810535"}, UnderlyingLegInstrument_3);
      set_field(noOfLegUnderlyings_1_1_0, FIX::UnderlyingLegSecurityType{"STRING_1577360169"}, UnderlyingLegInstrument_3);
      FIX::UnderlyingLegStrikePrice UnderlyingLegStrikePrice_3;
      UnderlyingLegStrikePrice_3.setString("18089670");
set_field(noOfLegUnderlyings_1_1_0, UnderlyingLegStrikePrice_3, UnderlyingLegInstrument_3);
      set_field(noOfLegUnderlyings_1_1_0, FIX::UnderlyingLegSymbol{"STRING_593257598"}, UnderlyingLegInstrument_3);
      set_field(noOfLegUnderlyings_1_1_0, FIX::UnderlyingLegSymbolSfx{"STRING_1757507064"}, UnderlyingLegInstrument_3);
      all_values.push_back(UnderlyingLegInstrument_3);
      all_compo_names.insert("...NoLegs...NoOfLegUnderlyings.");

      // UnderlyingLegSecurityAltIDGrp
      // Group UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoOfLegUnderlyings::NoUnderlyingLegSecurityAltID noUnderlyingLegSecurityAltID_1_0_2_0;
        // UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
        multiset<string> UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_5;
        set_field(noUnderlyingLegSecurityAltID_1_0_2_0, FIX::UnderlyingLegSecurityAltID{"STRING_719986712"}, UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_5);
        set_field(noUnderlyingLegSecurityAltID_1_0_2_0, FIX::UnderlyingLegSecurityAltIDSource{"STRING_2020103705"}, UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_5);
        all_values.push_back(UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_5);
        all_compo_names.insert("...NoLegs...NoOfLegUnderlyings....NoUnderlyingLegSecurityAltID");

        noOfLegUnderlyings_1_1_0.addGroup(noUnderlyingLegSecurityAltID_1_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoOfLegUnderlyings::NoUnderlyingLegSecurityAltID noUnderlyingLegSecurityAltID_1_0_2_1;
        // UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
        multiset<string> UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_6;
        set_field(noUnderlyingLegSecurityAltID_1_0_2_1, FIX::UnderlyingLegSecurityAltID{"STRING_701133324"}, UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_6);
        set_field(noUnderlyingLegSecurityAltID_1_0_2_1, FIX::UnderlyingLegSecurityAltIDSource{"STRING_967702899"}, UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_6);
        all_values.push_back(UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_6);
        all_compo_names.insert("...NoLegs...NoOfLegUnderlyings....NoUnderlyingLegSecurityAltID");

        noOfLegUnderlyings_1_1_0.addGroup(noUnderlyingLegSecurityAltID_1_0_2_1);
      }
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoOfLegUnderlyings::NoUnderlyingLegSecurityAltID noUnderlyingLegSecurityAltID_1_0_2_2;
        // UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
        multiset<string> UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_7;
        set_field(noUnderlyingLegSecurityAltID_1_0_2_2, FIX::UnderlyingLegSecurityAltID{"STRING_963607601"}, UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_7);
        set_field(noUnderlyingLegSecurityAltID_1_0_2_2, FIX::UnderlyingLegSecurityAltIDSource{"STRING_1908466998"}, UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_7);
        all_values.push_back(UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_7);
        all_compo_names.insert("...NoLegs...NoOfLegUnderlyings....NoUnderlyingLegSecurityAltID");

        noOfLegUnderlyings_1_1_0.addGroup(noUnderlyingLegSecurityAltID_1_0_2_2);
      }
      noLegs_0_1.addGroup(noOfLegUnderlyings_1_1_0);
    }
    msg.addGroup(noLegs_0_1);
  }
  {
    FIX50SP2::TradeCaptureReport::NoLegs noLegs_0_2;
    // TrdInstrmtLegGrp.NoLegs
    multiset<string> TrdInstrmtLegGrp_NoLegs_2;
    FIX::LegCalculatedCcyLastQty LegCalculatedCcyLastQty_4;
    LegCalculatedCcyLastQty_4.setString("13785294");
set_field(noLegs_0_2, LegCalculatedCcyLastQty_4, TrdInstrmtLegGrp_NoLegs_2);
    set_field(noLegs_0_2, FIX::LegCoveredOrUncovered{1720158645}, TrdInstrmtLegGrp_NoLegs_2);
    FIX::LegCurrencyRatio LegCurrencyRatio_8;
    LegCurrencyRatio_8.setString("13814172");
set_field(noLegs_0_2, LegCurrencyRatio_8, TrdInstrmtLegGrp_NoLegs_2);
    FIX::LegDividendYield LegDividendYield_8;
    LegDividendYield_8.setString("59.010000");
set_field(noLegs_0_2, LegDividendYield_8, TrdInstrmtLegGrp_NoLegs_2);
    set_field(noLegs_0_2, FIX::LegExecInst{"MULTIPLECHARVALUE_1072351848"}, TrdInstrmtLegGrp_NoLegs_2);
    FIX::LegGrossTradeAmt LegGrossTradeAmt_4;
    LegGrossTradeAmt_4.setString("20728211");
set_field(noLegs_0_2, LegGrossTradeAmt_4, TrdInstrmtLegGrp_NoLegs_2);
    FIX::LegLastForwardPoints LegLastForwardPoints_4;
    LegLastForwardPoints_4.setString("4844827");
set_field(noLegs_0_2, LegLastForwardPoints_4, TrdInstrmtLegGrp_NoLegs_2);
    FIX::LegLastPx LegLastPx_4;
    LegLastPx_4.setString("15798905");
set_field(noLegs_0_2, LegLastPx_4, TrdInstrmtLegGrp_NoLegs_2);
    FIX::LegLastQty LegLastQty_4;
    LegLastQty_4.setString("14059056");
set_field(noLegs_0_2, LegLastQty_4, TrdInstrmtLegGrp_NoLegs_2);
    set_field(noLegs_0_2, FIX::LegNumber{670383699}, TrdInstrmtLegGrp_NoLegs_2);
    set_field(noLegs_0_2, FIX::LegPositionEffect{'7'}, TrdInstrmtLegGrp_NoLegs_2);
    FIX::LegQty LegQty_23;
    LegQty_23.setString("1575589");
set_field(noLegs_0_2, LegQty_23, TrdInstrmtLegGrp_NoLegs_2);
    set_field(noLegs_0_2, FIX::LegRefID{"STRING_1346538469"}, TrdInstrmtLegGrp_NoLegs_2);
    set_field(noLegs_0_2, FIX::LegReportID{"STRING_124639881"}, TrdInstrmtLegGrp_NoLegs_2);
    set_field(noLegs_0_2, FIX::LegSettlCurrency{"USD"}, TrdInstrmtLegGrp_NoLegs_2);
    set_field(noLegs_0_2, FIX::LegSettlDate{"LOCALMKTDATE_147213189"}, TrdInstrmtLegGrp_NoLegs_2);
    set_field(noLegs_0_2, FIX::LegSettlType{'7'}, TrdInstrmtLegGrp_NoLegs_2);
    set_field(noLegs_0_2, FIX::LegSwapType{2}, TrdInstrmtLegGrp_NoLegs_2);
    FIX::LegVolatility LegVolatility_8;
    LegVolatility_8.setString("19780237");
set_field(noLegs_0_2, LegVolatility_8, TrdInstrmtLegGrp_NoLegs_2);
    all_values.push_back(TrdInstrmtLegGrp_NoLegs_2);
    all_compo_names.insert("...NoLegs");

    // InstrumentLeg
    multiset<string> InstrumentLeg_139;
    set_field(noLegs_0_2, FIX::EncodedLegIssuer{"DATA_198283243"}, InstrumentLeg_139);
    set_field(noLegs_0_2, FIX::EncodedLegIssuerLen{1605191838}, InstrumentLeg_139);
    set_field(noLegs_0_2, FIX::EncodedLegSecurityDesc{"DATA_423797675"}, InstrumentLeg_139);
    set_field(noLegs_0_2, FIX::EncodedLegSecurityDescLen{1955790307}, InstrumentLeg_139);
    set_field(noLegs_0_2, FIX::LegCFICode{"STRING_1072434174"}, InstrumentLeg_139);
    FIX::LegContractMultiplier LegContractMultiplier_139;
    LegContractMultiplier_139.setString("11437843");
set_field(noLegs_0_2, LegContractMultiplier_139, InstrumentLeg_139);
    set_field(noLegs_0_2, FIX::LegContractMultiplierUnit{1828410364}, InstrumentLeg_139);
    set_field(noLegs_0_2, FIX::LegContractSettlMonth{"MONTHYEAR_1773567499"}, InstrumentLeg_139);
    set_field(noLegs_0_2, FIX::LegCountryOfIssue{"COUNTRY_2111487287"}, InstrumentLeg_139);
    set_field(noLegs_0_2, FIX::LegCouponPaymentDate{"LOCALMKTDATE_644534317"}, InstrumentLeg_139);
    FIX::LegCouponRate LegCouponRate_139;
    LegCouponRate_139.setString("8.490000");
set_field(noLegs_0_2, LegCouponRate_139, InstrumentLeg_139);
    set_field(noLegs_0_2, FIX::LegCreditRating{"STRING_1342533121"}, InstrumentLeg_139);
    set_field(noLegs_0_2, FIX::LegCurrency{"USD"}, InstrumentLeg_139);
    set_field(noLegs_0_2, FIX::LegDatedDate{"LOCALMKTDATE_1423119023"}, InstrumentLeg_139);
    set_field(noLegs_0_2, FIX::LegExerciseStyle{1289561162}, InstrumentLeg_139);
    FIX::LegFactor LegFactor_139;
    LegFactor_139.setString("6938219");
set_field(noLegs_0_2, LegFactor_139, InstrumentLeg_139);
    set_field(noLegs_0_2, FIX::LegFlowScheduleType{1907601818}, InstrumentLeg_139);
    set_field(noLegs_0_2, FIX::LegInstrRegistry{"STRING_721968026"}, InstrumentLeg_139);
    set_field(noLegs_0_2, FIX::LegInterestAccrualDate{"LOCALMKTDATE_2099727564"}, InstrumentLeg_139);
    set_field(noLegs_0_2, FIX::LegIssueDate{"LOCALMKTDATE_430501869"}, InstrumentLeg_139);
    set_field(noLegs_0_2, FIX::LegIssuer{"STRING_1476584959"}, InstrumentLeg_139);
    set_field(noLegs_0_2, FIX::LegLocaleOfIssue{"STRING_109802821"}, InstrumentLeg_139);
    set_field(noLegs_0_2, FIX::LegMaturityDate{"LOCALMKTDATE_1777040338"}, InstrumentLeg_139);
    set_field(noLegs_0_2, FIX::LegMaturityMonthYear{"MONTHYEAR_1601224840"}, InstrumentLeg_139);
    set_field(noLegs_0_2, FIX::LegMaturityTime{"TZTIMEONLY_823216305"}, InstrumentLeg_139);
    set_field(noLegs_0_2, FIX::LegOptAttribute{'1'}, InstrumentLeg_139);
    FIX::LegOptionRatio LegOptionRatio_139;
    LegOptionRatio_139.setString("17484380");
set_field(noLegs_0_2, LegOptionRatio_139, InstrumentLeg_139);
    set_field(noLegs_0_2, FIX::LegPool{"STRING_1591623027"}, InstrumentLeg_139);
    set_field(noLegs_0_2, FIX::LegPriceUnitOfMeasure{"STRING_1361921688"}, InstrumentLeg_139);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_139;
    LegPriceUnitOfMeasureQty_139.setString("15789781");
set_field(noLegs_0_2, LegPriceUnitOfMeasureQty_139, InstrumentLeg_139);
    set_field(noLegs_0_2, FIX::LegProduct{1789906271}, InstrumentLeg_139);
    set_field(noLegs_0_2, FIX::LegPutOrCall{819629878}, InstrumentLeg_139);
    FIX::LegRatioQty LegRatioQty_139;
    LegRatioQty_139.setString("20027757");
set_field(noLegs_0_2, LegRatioQty_139, InstrumentLeg_139);
    set_field(noLegs_0_2, FIX::LegRedemptionDate{"LOCALMKTDATE_1598212930"}, InstrumentLeg_139);
    set_field(noLegs_0_2, FIX::LegRepoCollateralSecurityType{"STRING_1892064053"}, InstrumentLeg_139);
    FIX::LegRepurchaseRate LegRepurchaseRate_139;
    LegRepurchaseRate_139.setString("65.200000");
set_field(noLegs_0_2, LegRepurchaseRate_139, InstrumentLeg_139);
    set_field(noLegs_0_2, FIX::LegRepurchaseTerm{1279139647}, InstrumentLeg_139);
    set_field(noLegs_0_2, FIX::LegSecurityDesc{"STRING_1518147904"}, InstrumentLeg_139);
    set_field(noLegs_0_2, FIX::LegSecurityExchange{"EXCHANGE_963080159"}, InstrumentLeg_139);
    set_field(noLegs_0_2, FIX::LegSecurityID{"STRING_1923673964"}, InstrumentLeg_139);
    set_field(noLegs_0_2, FIX::LegSecurityIDSource{"STRING_905215105"}, InstrumentLeg_139);
    set_field(noLegs_0_2, FIX::LegSecuritySubType{"STRING_158129633"}, InstrumentLeg_139);
    set_field(noLegs_0_2, FIX::LegSecurityType{"STRING_2140883279"}, InstrumentLeg_139);
    set_field(noLegs_0_2, FIX::LegSide{'1'}, InstrumentLeg_139);
    set_field(noLegs_0_2, FIX::LegStateOrProvinceOfIssue{"STRING_1581248656"}, InstrumentLeg_139);
    set_field(noLegs_0_2, FIX::LegStrikeCurrency{"JPY"}, InstrumentLeg_139);
    FIX::LegStrikePrice LegStrikePrice_139;
    LegStrikePrice_139.setString("13413668");
set_field(noLegs_0_2, LegStrikePrice_139, InstrumentLeg_139);
    set_field(noLegs_0_2, FIX::LegSymbol{"STRING_2004928820"}, InstrumentLeg_139);
    set_field(noLegs_0_2, FIX::LegSymbolSfx{"STRING_172281746"}, InstrumentLeg_139);
    set_field(noLegs_0_2, FIX::LegTimeUnit{"STRING_1771868695"}, InstrumentLeg_139);
    set_field(noLegs_0_2, FIX::LegUnitOfMeasure{"STRING_1334030131"}, InstrumentLeg_139);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_139;
    LegUnitOfMeasureQty_139.setString("2820845");
set_field(noLegs_0_2, LegUnitOfMeasureQty_139, InstrumentLeg_139);
    all_values.push_back(InstrumentLeg_139);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_279;
      set_field(noLegSecurityAltID_2_1_0, FIX::LegSecurityAltID{"STRING_787771323"}, LegSecAltIDGrp_NoLegSecurityAltID_279);
      set_field(noLegSecurityAltID_2_1_0, FIX::LegSecurityAltIDSource{"STRING_1105300872"}, LegSecAltIDGrp_NoLegSecurityAltID_279);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_279);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_280;
      set_field(noLegSecurityAltID_2_1_1, FIX::LegSecurityAltID{"STRING_819638620"}, LegSecAltIDGrp_NoLegSecurityAltID_280);
      set_field(noLegSecurityAltID_2_1_1, FIX::LegSecurityAltIDSource{"STRING_388725704"}, LegSecAltIDGrp_NoLegSecurityAltID_280);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_280);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_1);
    }
    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoLegStipulations noLegStipulations_2_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_68;
      set_field(noLegStipulations_2_1_0, FIX::LegStipulationType{"STRING_34076660"}, LegStipulations_NoLegStipulations_68);
      set_field(noLegStipulations_2_1_0, FIX::LegStipulationValue{"STRING_1967703810"}, LegStipulations_NoLegStipulations_68);
      all_values.push_back(LegStipulations_NoLegStipulations_68);
      all_compo_names.insert("...NoLegs...NoLegStipulations");

      noLegs_0_2.addGroup(noLegStipulations_2_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoLegStipulations noLegStipulations_2_1_1;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_69;
      set_field(noLegStipulations_2_1_1, FIX::LegStipulationType{"STRING_191862875"}, LegStipulations_NoLegStipulations_69);
      set_field(noLegStipulations_2_1_1, FIX::LegStipulationValue{"STRING_853706539"}, LegStipulations_NoLegStipulations_69);
      all_values.push_back(LegStipulations_NoLegStipulations_69);
      all_compo_names.insert("...NoLegs...NoLegStipulations");

      noLegs_0_2.addGroup(noLegStipulations_2_1_1);
    }
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoLegStipulations noLegStipulations_2_1_2;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_70;
      set_field(noLegStipulations_2_1_2, FIX::LegStipulationType{"STRING_1822995943"}, LegStipulations_NoLegStipulations_70);
      set_field(noLegStipulations_2_1_2, FIX::LegStipulationValue{"STRING_1790075805"}, LegStipulations_NoLegStipulations_70);
      all_values.push_back(LegStipulations_NoLegStipulations_70);
      all_compo_names.insert("...NoLegs...NoLegStipulations");

      noLegs_0_2.addGroup(noLegStipulations_2_1_2);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoNestedPartyIDs noNestedPartyIDs_2_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_156;
      set_field(noNestedPartyIDs_2_1_0, FIX::NestedPartyID{"STRING_674588816"}, NestedParties_NoNestedPartyIDs_156);
      set_field(noNestedPartyIDs_2_1_0, FIX::NestedPartyIDSource{'9'}, NestedParties_NoNestedPartyIDs_156);
      set_field(noNestedPartyIDs_2_1_0, FIX::NestedPartyRole{2116434848}, NestedParties_NoNestedPartyIDs_156);
      all_values.push_back(NestedParties_NoNestedPartyIDs_156);
      all_compo_names.insert("...NoLegs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_322;
        set_field(noNestedPartySubIDs_2_0_2_0, FIX::NestedPartySubID{"STRING_697922121"}, NstdPtysSubGrp_NoNestedPartySubIDs_322);
        set_field(noNestedPartySubIDs_2_0_2_0, FIX::NestedPartySubIDType{874166305}, NstdPtysSubGrp_NoNestedPartySubIDs_322);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_322);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_0.addGroup(noNestedPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_323;
        set_field(noNestedPartySubIDs_2_0_2_1, FIX::NestedPartySubID{"STRING_1795798608"}, NstdPtysSubGrp_NoNestedPartySubIDs_323);
        set_field(noNestedPartySubIDs_2_0_2_1, FIX::NestedPartySubIDType{691321752}, NstdPtysSubGrp_NoNestedPartySubIDs_323);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_323);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_0.addGroup(noNestedPartySubIDs_2_0_2_1);
      }
      noLegs_0_2.addGroup(noNestedPartyIDs_2_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoNestedPartyIDs noNestedPartyIDs_2_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_157;
      set_field(noNestedPartyIDs_2_1_1, FIX::NestedPartyID{"STRING_400382203"}, NestedParties_NoNestedPartyIDs_157);
      set_field(noNestedPartyIDs_2_1_1, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_157);
      set_field(noNestedPartyIDs_2_1_1, FIX::NestedPartyRole{1974282545}, NestedParties_NoNestedPartyIDs_157);
      all_values.push_back(NestedParties_NoNestedPartyIDs_157);
      all_compo_names.insert("...NoLegs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_324;
        set_field(noNestedPartySubIDs_2_1_2_0, FIX::NestedPartySubID{"STRING_423446794"}, NstdPtysSubGrp_NoNestedPartySubIDs_324);
        set_field(noNestedPartySubIDs_2_1_2_0, FIX::NestedPartySubIDType{1831727717}, NstdPtysSubGrp_NoNestedPartySubIDs_324);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_324);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_1.addGroup(noNestedPartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_325;
        set_field(noNestedPartySubIDs_2_1_2_1, FIX::NestedPartySubID{"STRING_792701779"}, NstdPtysSubGrp_NoNestedPartySubIDs_325);
        set_field(noNestedPartySubIDs_2_1_2_1, FIX::NestedPartySubIDType{47831842}, NstdPtysSubGrp_NoNestedPartySubIDs_325);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_325);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_1.addGroup(noNestedPartySubIDs_2_1_2_1);
      }
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_326;
        set_field(noNestedPartySubIDs_2_1_2_2, FIX::NestedPartySubID{"STRING_1018274200"}, NstdPtysSubGrp_NoNestedPartySubIDs_326);
        set_field(noNestedPartySubIDs_2_1_2_2, FIX::NestedPartySubIDType{1074786346}, NstdPtysSubGrp_NoNestedPartySubIDs_326);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_326);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_1.addGroup(noNestedPartySubIDs_2_1_2_2);
      }
      noLegs_0_2.addGroup(noNestedPartyIDs_2_1_1);
    }
    // TradeCapLegUnderlyingsGrp
    // Group TradeCapLegUnderlyingsGrp.NoOfLegUnderlyings
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoOfLegUnderlyings noOfLegUnderlyings_2_1_0;
      // TradeCapLegUnderlyingsGrp.NoOfLegUnderlyings
      // UnderlyingLegInstrument
      multiset<string> UnderlyingLegInstrument_4;
      set_field(noOfLegUnderlyings_2_1_0, FIX::UnderlyingLegCFICode{"STRING_1806045523"}, UnderlyingLegInstrument_4);
      set_field(noOfLegUnderlyings_2_1_0, FIX::UnderlyingLegMaturityDate{"LOCALMKTDATE_32603570"}, UnderlyingLegInstrument_4);
      set_field(noOfLegUnderlyings_2_1_0, FIX::UnderlyingLegMaturityMonthYear{"MONTHYEAR_121412200"}, UnderlyingLegInstrument_4);
      set_field(noOfLegUnderlyings_2_1_0, FIX::UnderlyingLegMaturityTime{"TZTIMEONLY_47287580"}, UnderlyingLegInstrument_4);
      set_field(noOfLegUnderlyings_2_1_0, FIX::UnderlyingLegOptAttribute{'5'}, UnderlyingLegInstrument_4);
      set_field(noOfLegUnderlyings_2_1_0, FIX::UnderlyingLegPutOrCall{155488861}, UnderlyingLegInstrument_4);
      set_field(noOfLegUnderlyings_2_1_0, FIX::UnderlyingLegSecurityDesc{"STRING_2014991390"}, UnderlyingLegInstrument_4);
      set_field(noOfLegUnderlyings_2_1_0, FIX::UnderlyingLegSecurityExchange{"STRING_773906697"}, UnderlyingLegInstrument_4);
      set_field(noOfLegUnderlyings_2_1_0, FIX::UnderlyingLegSecurityID{"STRING_1009195400"}, UnderlyingLegInstrument_4);
      set_field(noOfLegUnderlyings_2_1_0, FIX::UnderlyingLegSecurityIDSource{"STRING_1690503686"}, UnderlyingLegInstrument_4);
      set_field(noOfLegUnderlyings_2_1_0, FIX::UnderlyingLegSecuritySubType{"STRING_416498855"}, UnderlyingLegInstrument_4);
      set_field(noOfLegUnderlyings_2_1_0, FIX::UnderlyingLegSecurityType{"STRING_1607482344"}, UnderlyingLegInstrument_4);
      FIX::UnderlyingLegStrikePrice UnderlyingLegStrikePrice_4;
      UnderlyingLegStrikePrice_4.setString("2176088");
set_field(noOfLegUnderlyings_2_1_0, UnderlyingLegStrikePrice_4, UnderlyingLegInstrument_4);
      set_field(noOfLegUnderlyings_2_1_0, FIX::UnderlyingLegSymbol{"STRING_1338230659"}, UnderlyingLegInstrument_4);
      set_field(noOfLegUnderlyings_2_1_0, FIX::UnderlyingLegSymbolSfx{"STRING_1576433544"}, UnderlyingLegInstrument_4);
      all_values.push_back(UnderlyingLegInstrument_4);
      all_compo_names.insert("...NoLegs...NoOfLegUnderlyings.");

      // UnderlyingLegSecurityAltIDGrp
      // Group UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoOfLegUnderlyings::NoUnderlyingLegSecurityAltID noUnderlyingLegSecurityAltID_2_0_2_0;
        // UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
        multiset<string> UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_8;
        set_field(noUnderlyingLegSecurityAltID_2_0_2_0, FIX::UnderlyingLegSecurityAltID{"STRING_2036152780"}, UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_8);
        set_field(noUnderlyingLegSecurityAltID_2_0_2_0, FIX::UnderlyingLegSecurityAltIDSource{"STRING_303116201"}, UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_8);
        all_values.push_back(UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_8);
        all_compo_names.insert("...NoLegs...NoOfLegUnderlyings....NoUnderlyingLegSecurityAltID");

        noOfLegUnderlyings_2_1_0.addGroup(noUnderlyingLegSecurityAltID_2_0_2_0);
      }
      noLegs_0_2.addGroup(noOfLegUnderlyings_2_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoOfLegUnderlyings noOfLegUnderlyings_2_1_1;
      // TradeCapLegUnderlyingsGrp.NoOfLegUnderlyings
      // UnderlyingLegInstrument
      multiset<string> UnderlyingLegInstrument_5;
      set_field(noOfLegUnderlyings_2_1_1, FIX::UnderlyingLegCFICode{"STRING_1503592790"}, UnderlyingLegInstrument_5);
      set_field(noOfLegUnderlyings_2_1_1, FIX::UnderlyingLegMaturityDate{"LOCALMKTDATE_579990884"}, UnderlyingLegInstrument_5);
      set_field(noOfLegUnderlyings_2_1_1, FIX::UnderlyingLegMaturityMonthYear{"MONTHYEAR_703498404"}, UnderlyingLegInstrument_5);
      set_field(noOfLegUnderlyings_2_1_1, FIX::UnderlyingLegMaturityTime{"TZTIMEONLY_585672758"}, UnderlyingLegInstrument_5);
      set_field(noOfLegUnderlyings_2_1_1, FIX::UnderlyingLegOptAttribute{'4'}, UnderlyingLegInstrument_5);
      set_field(noOfLegUnderlyings_2_1_1, FIX::UnderlyingLegPutOrCall{1323918437}, UnderlyingLegInstrument_5);
      set_field(noOfLegUnderlyings_2_1_1, FIX::UnderlyingLegSecurityDesc{"STRING_1009119553"}, UnderlyingLegInstrument_5);
      set_field(noOfLegUnderlyings_2_1_1, FIX::UnderlyingLegSecurityExchange{"STRING_91033851"}, UnderlyingLegInstrument_5);
      set_field(noOfLegUnderlyings_2_1_1, FIX::UnderlyingLegSecurityID{"STRING_2116620216"}, UnderlyingLegInstrument_5);
      set_field(noOfLegUnderlyings_2_1_1, FIX::UnderlyingLegSecurityIDSource{"STRING_1056951395"}, UnderlyingLegInstrument_5);
      set_field(noOfLegUnderlyings_2_1_1, FIX::UnderlyingLegSecuritySubType{"STRING_1109308052"}, UnderlyingLegInstrument_5);
      set_field(noOfLegUnderlyings_2_1_1, FIX::UnderlyingLegSecurityType{"STRING_1043922914"}, UnderlyingLegInstrument_5);
      FIX::UnderlyingLegStrikePrice UnderlyingLegStrikePrice_5;
      UnderlyingLegStrikePrice_5.setString("3587249");
set_field(noOfLegUnderlyings_2_1_1, UnderlyingLegStrikePrice_5, UnderlyingLegInstrument_5);
      set_field(noOfLegUnderlyings_2_1_1, FIX::UnderlyingLegSymbol{"STRING_767869927"}, UnderlyingLegInstrument_5);
      set_field(noOfLegUnderlyings_2_1_1, FIX::UnderlyingLegSymbolSfx{"STRING_1076526485"}, UnderlyingLegInstrument_5);
      all_values.push_back(UnderlyingLegInstrument_5);
      all_compo_names.insert("...NoLegs...NoOfLegUnderlyings.");

      // UnderlyingLegSecurityAltIDGrp
      // Group UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoOfLegUnderlyings::NoUnderlyingLegSecurityAltID noUnderlyingLegSecurityAltID_2_1_2_0;
        // UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
        multiset<string> UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_9;
        set_field(noUnderlyingLegSecurityAltID_2_1_2_0, FIX::UnderlyingLegSecurityAltID{"STRING_815157507"}, UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_9);
        set_field(noUnderlyingLegSecurityAltID_2_1_2_0, FIX::UnderlyingLegSecurityAltIDSource{"STRING_1658570307"}, UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_9);
        all_values.push_back(UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_9);
        all_compo_names.insert("...NoLegs...NoOfLegUnderlyings....NoUnderlyingLegSecurityAltID");

        noOfLegUnderlyings_2_1_1.addGroup(noUnderlyingLegSecurityAltID_2_1_2_0);
      }
      noLegs_0_2.addGroup(noOfLegUnderlyings_2_1_1);
    }
    {
      FIX50SP2::TradeCaptureReport::NoLegs::NoOfLegUnderlyings noOfLegUnderlyings_2_1_2;
      // TradeCapLegUnderlyingsGrp.NoOfLegUnderlyings
      // UnderlyingLegInstrument
      multiset<string> UnderlyingLegInstrument_6;
      set_field(noOfLegUnderlyings_2_1_2, FIX::UnderlyingLegCFICode{"STRING_635626036"}, UnderlyingLegInstrument_6);
      set_field(noOfLegUnderlyings_2_1_2, FIX::UnderlyingLegMaturityDate{"LOCALMKTDATE_682665250"}, UnderlyingLegInstrument_6);
      set_field(noOfLegUnderlyings_2_1_2, FIX::UnderlyingLegMaturityMonthYear{"MONTHYEAR_284993357"}, UnderlyingLegInstrument_6);
      set_field(noOfLegUnderlyings_2_1_2, FIX::UnderlyingLegMaturityTime{"TZTIMEONLY_1644821436"}, UnderlyingLegInstrument_6);
      set_field(noOfLegUnderlyings_2_1_2, FIX::UnderlyingLegOptAttribute{'2'}, UnderlyingLegInstrument_6);
      set_field(noOfLegUnderlyings_2_1_2, FIX::UnderlyingLegPutOrCall{701492212}, UnderlyingLegInstrument_6);
      set_field(noOfLegUnderlyings_2_1_2, FIX::UnderlyingLegSecurityDesc{"STRING_1104820132"}, UnderlyingLegInstrument_6);
      set_field(noOfLegUnderlyings_2_1_2, FIX::UnderlyingLegSecurityExchange{"STRING_443294142"}, UnderlyingLegInstrument_6);
      set_field(noOfLegUnderlyings_2_1_2, FIX::UnderlyingLegSecurityID{"STRING_2039722871"}, UnderlyingLegInstrument_6);
      set_field(noOfLegUnderlyings_2_1_2, FIX::UnderlyingLegSecurityIDSource{"STRING_533770028"}, UnderlyingLegInstrument_6);
      set_field(noOfLegUnderlyings_2_1_2, FIX::UnderlyingLegSecuritySubType{"STRING_151088323"}, UnderlyingLegInstrument_6);
      set_field(noOfLegUnderlyings_2_1_2, FIX::UnderlyingLegSecurityType{"STRING_1928392004"}, UnderlyingLegInstrument_6);
      FIX::UnderlyingLegStrikePrice UnderlyingLegStrikePrice_6;
      UnderlyingLegStrikePrice_6.setString("8368862");
set_field(noOfLegUnderlyings_2_1_2, UnderlyingLegStrikePrice_6, UnderlyingLegInstrument_6);
      set_field(noOfLegUnderlyings_2_1_2, FIX::UnderlyingLegSymbol{"STRING_1654681113"}, UnderlyingLegInstrument_6);
      set_field(noOfLegUnderlyings_2_1_2, FIX::UnderlyingLegSymbolSfx{"STRING_360899240"}, UnderlyingLegInstrument_6);
      all_values.push_back(UnderlyingLegInstrument_6);
      all_compo_names.insert("...NoLegs...NoOfLegUnderlyings.");

      // UnderlyingLegSecurityAltIDGrp
      // Group UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoOfLegUnderlyings::NoUnderlyingLegSecurityAltID noUnderlyingLegSecurityAltID_2_2_2_0;
        // UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
        multiset<string> UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_10;
        set_field(noUnderlyingLegSecurityAltID_2_2_2_0, FIX::UnderlyingLegSecurityAltID{"STRING_92870224"}, UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_10);
        set_field(noUnderlyingLegSecurityAltID_2_2_2_0, FIX::UnderlyingLegSecurityAltIDSource{"STRING_767689022"}, UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_10);
        all_values.push_back(UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_10);
        all_compo_names.insert("...NoLegs...NoOfLegUnderlyings....NoUnderlyingLegSecurityAltID");

        noOfLegUnderlyings_2_1_2.addGroup(noUnderlyingLegSecurityAltID_2_2_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoOfLegUnderlyings::NoUnderlyingLegSecurityAltID noUnderlyingLegSecurityAltID_2_2_2_1;
        // UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
        multiset<string> UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_11;
        set_field(noUnderlyingLegSecurityAltID_2_2_2_1, FIX::UnderlyingLegSecurityAltID{"STRING_716819424"}, UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_11);
        set_field(noUnderlyingLegSecurityAltID_2_2_2_1, FIX::UnderlyingLegSecurityAltIDSource{"STRING_1101989777"}, UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_11);
        all_values.push_back(UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_11);
        all_compo_names.insert("...NoLegs...NoOfLegUnderlyings....NoUnderlyingLegSecurityAltID");

        noOfLegUnderlyings_2_1_2.addGroup(noUnderlyingLegSecurityAltID_2_2_2_1);
      }
      {
        FIX50SP2::TradeCaptureReport::NoLegs::NoOfLegUnderlyings::NoUnderlyingLegSecurityAltID noUnderlyingLegSecurityAltID_2_2_2_2;
        // UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
        multiset<string> UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_12;
        set_field(noUnderlyingLegSecurityAltID_2_2_2_2, FIX::UnderlyingLegSecurityAltID{"STRING_858722874"}, UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_12);
        set_field(noUnderlyingLegSecurityAltID_2_2_2_2, FIX::UnderlyingLegSecurityAltIDSource{"STRING_685955992"}, UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_12);
        all_values.push_back(UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_12);
        all_compo_names.insert("...NoLegs...NoOfLegUnderlyings....NoUnderlyingLegSecurityAltID");

        noOfLegUnderlyings_2_1_2.addGroup(noUnderlyingLegSecurityAltID_2_2_2_2);
      }
      noLegs_0_2.addGroup(noOfLegUnderlyings_2_1_2);
    }
    msg.addGroup(noLegs_0_2);
  }
  // TrdRegTimestamps
  // Group TrdRegTimestamps.NoTrdRegTimestamps
  {
    FIX50SP2::TradeCaptureReport::NoTrdRegTimestamps noTrdRegTimestamps_0_0;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_18;
    set_field(noTrdRegTimestamps_0_0, FIX::DeskOrderHandlingInst{"MULTIPLESTRINGVALUE_MQT"}, TrdRegTimestamps_NoTrdRegTimestamps_18);
    set_field(noTrdRegTimestamps_0_0, FIX::DeskType{"STRING_S"}, TrdRegTimestamps_NoTrdRegTimestamps_18);
    set_field(noTrdRegTimestamps_0_0, FIX::DeskTypeSource{1}, TrdRegTimestamps_NoTrdRegTimestamps_18);
    set_field(noTrdRegTimestamps_0_0, FIX::TrdRegTimestamp{FIX::UTCTIMESTAMP(16, 34, 53, 19, 4, 2003)}, TrdRegTimestamps_NoTrdRegTimestamps_18);
    set_field(noTrdRegTimestamps_0_0, FIX::TrdRegTimestampOrigin{"STRING_455001760"}, TrdRegTimestamps_NoTrdRegTimestamps_18);
    set_field(noTrdRegTimestamps_0_0, FIX::TrdRegTimestampType{3}, TrdRegTimestamps_NoTrdRegTimestamps_18);
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_18);
    all_compo_names.insert("...NoTrdRegTimestamps");

    msg.addGroup(noTrdRegTimestamps_0_0);
  }
  {
    FIX50SP2::TradeCaptureReport::NoTrdRegTimestamps noTrdRegTimestamps_0_1;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_19;
    set_field(noTrdRegTimestamps_0_1, FIX::DeskOrderHandlingInst{"MULTIPLESTRINGVALUE_MAC"}, TrdRegTimestamps_NoTrdRegTimestamps_19);
    set_field(noTrdRegTimestamps_0_1, FIX::DeskType{"STRING_PR"}, TrdRegTimestamps_NoTrdRegTimestamps_19);
    set_field(noTrdRegTimestamps_0_1, FIX::DeskTypeSource{1}, TrdRegTimestamps_NoTrdRegTimestamps_19);
    set_field(noTrdRegTimestamps_0_1, FIX::TrdRegTimestamp{FIX::UTCTIMESTAMP(12, 12, 48, 12, 3, 2002)}, TrdRegTimestamps_NoTrdRegTimestamps_19);
    set_field(noTrdRegTimestamps_0_1, FIX::TrdRegTimestampOrigin{"STRING_1190540792"}, TrdRegTimestamps_NoTrdRegTimestamps_19);
    set_field(noTrdRegTimestamps_0_1, FIX::TrdRegTimestampType{1}, TrdRegTimestamps_NoTrdRegTimestamps_19);
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_19);
    all_compo_names.insert("...NoTrdRegTimestamps");

    msg.addGroup(noTrdRegTimestamps_0_1);
  }
  {
    FIX50SP2::TradeCaptureReport::NoTrdRegTimestamps noTrdRegTimestamps_0_2;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_20;
    set_field(noTrdRegTimestamps_0_2, FIX::DeskOrderHandlingInst{"MULTIPLESTRINGVALUE_IO"}, TrdRegTimestamps_NoTrdRegTimestamps_20);
    set_field(noTrdRegTimestamps_0_2, FIX::DeskType{"STRING_IN"}, TrdRegTimestamps_NoTrdRegTimestamps_20);
    set_field(noTrdRegTimestamps_0_2, FIX::DeskTypeSource{1}, TrdRegTimestamps_NoTrdRegTimestamps_20);
    set_field(noTrdRegTimestamps_0_2, FIX::TrdRegTimestamp{FIX::UTCTIMESTAMP(9, 25, 19, 23, 1, 2014)}, TrdRegTimestamps_NoTrdRegTimestamps_20);
    set_field(noTrdRegTimestamps_0_2, FIX::TrdRegTimestampOrigin{"STRING_1078433524"}, TrdRegTimestamps_NoTrdRegTimestamps_20);
    set_field(noTrdRegTimestamps_0_2, FIX::TrdRegTimestampType{3}, TrdRegTimestamps_NoTrdRegTimestamps_20);
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_20);
    all_compo_names.insert("...NoTrdRegTimestamps");

    msg.addGroup(noTrdRegTimestamps_0_2);
  }
  // TrdRepIndicatorsGrp
  // Group TrdRepIndicatorsGrp.NoTrdRepIndicators
  {
    FIX50SP2::TradeCaptureReport::NoTrdRepIndicators noTrdRepIndicators_0_0;
    // TrdRepIndicatorsGrp.NoTrdRepIndicators
    multiset<string> TrdRepIndicatorsGrp_NoTrdRepIndicators_0;
    set_field(noTrdRepIndicators_0_0, FIX::TrdRepIndicator{false}, TrdRepIndicatorsGrp_NoTrdRepIndicators_0);
    set_field(noTrdRepIndicators_0_0, FIX::TrdRepPartyRole{370794404}, TrdRepIndicatorsGrp_NoTrdRepIndicators_0);
    all_values.push_back(TrdRepIndicatorsGrp_NoTrdRepIndicators_0);
    all_compo_names.insert("...NoTrdRepIndicators");

    msg.addGroup(noTrdRepIndicators_0_0);
  }
  {
    FIX50SP2::TradeCaptureReport::NoTrdRepIndicators noTrdRepIndicators_0_1;
    // TrdRepIndicatorsGrp.NoTrdRepIndicators
    multiset<string> TrdRepIndicatorsGrp_NoTrdRepIndicators_1;
    set_field(noTrdRepIndicators_0_1, FIX::TrdRepIndicator{false}, TrdRepIndicatorsGrp_NoTrdRepIndicators_1);
    set_field(noTrdRepIndicators_0_1, FIX::TrdRepPartyRole{273280904}, TrdRepIndicatorsGrp_NoTrdRepIndicators_1);
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
    multiset<string> UnderlyingInstrument_138;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_867103147"}, UnderlyingInstrument_138);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{437722507}, UnderlyingInstrument_138);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_1982290137"}, UnderlyingInstrument_138);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{807723131}, UnderlyingInstrument_138);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_138;
    UnderlyingAdjustedQuantity_138.setString("10454582");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_138, UnderlyingInstrument_138);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_138;
    UnderlyingAllocationPercent_138.setString("96.850000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_138, UnderlyingInstrument_138);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_138;
    UnderlyingAttachmentPoint_138.setString("31.430000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_138, UnderlyingInstrument_138);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_1804282321"}, UnderlyingInstrument_138);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_1713181237"}, UnderlyingInstrument_138);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_445905738"}, UnderlyingInstrument_138);
    FIX::UnderlyingCapValue UnderlyingCapValue_138;
    UnderlyingCapValue_138.setString("20703038");
set_field(noUnderlyings_0_0, UnderlyingCapValue_138, UnderlyingInstrument_138);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_138;
    UnderlyingCashAmount_138.setString("7562383");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_138, UnderlyingInstrument_138);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_138);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_138;
    UnderlyingContractMultiplier_138.setString("2817119");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_138, UnderlyingInstrument_138);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{566984548}, UnderlyingInstrument_138);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_423595972"}, UnderlyingInstrument_138);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1742593500"}, UnderlyingInstrument_138);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_138;
    UnderlyingCouponRate_138.setString("35.890000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_138, UnderlyingInstrument_138);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_383064969"}, UnderlyingInstrument_138);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"JPY"}, UnderlyingInstrument_138);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_138;
    UnderlyingCurrentValue_138.setString("20724128");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_138, UnderlyingInstrument_138);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_138;
    UnderlyingDetachmentPoint_138.setString("68.210000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_138, UnderlyingInstrument_138);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_138;
    UnderlyingDirtyPrice_138.setString("6574197");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_138, UnderlyingInstrument_138);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_138;
    UnderlyingEndPrice_138.setString("1257152");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_138, UnderlyingInstrument_138);
    FIX::UnderlyingEndValue UnderlyingEndValue_138;
    UnderlyingEndValue_138.setString("13078444");
set_field(noUnderlyings_0_0, UnderlyingEndValue_138, UnderlyingInstrument_138);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{991944374}, UnderlyingInstrument_138);
    FIX::UnderlyingFXRate UnderlyingFXRate_138;
    UnderlyingFXRate_138.setString("4965096");
set_field(noUnderlyings_0_0, UnderlyingFXRate_138, UnderlyingInstrument_138);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_138);
    FIX::UnderlyingFactor UnderlyingFactor_138;
    UnderlyingFactor_138.setString("12652252");
set_field(noUnderlyings_0_0, UnderlyingFactor_138, UnderlyingInstrument_138);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{1322305795}, UnderlyingInstrument_138);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_2058767200"}, UnderlyingInstrument_138);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1702947786"}, UnderlyingInstrument_138);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_1157112284"}, UnderlyingInstrument_138);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_719006683"}, UnderlyingInstrument_138);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_600922391"}, UnderlyingInstrument_138);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_2040651969"}, UnderlyingInstrument_138);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_2001119826"}, UnderlyingInstrument_138);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_138;
    UnderlyingNotionalPercentageOutstanding_138.setString("10.640000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_138, UnderlyingInstrument_138);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_138);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_138;
    UnderlyingOriginalNotionalPercentageOutstanding_138.setString("19.160000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_138, UnderlyingInstrument_138);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_180541271"}, UnderlyingInstrument_138);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_138;
    UnderlyingPriceUnitOfMeasureQty_138.setString("2151042");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_138, UnderlyingInstrument_138);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{1449624883}, UnderlyingInstrument_138);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{462253236}, UnderlyingInstrument_138);
    FIX::UnderlyingPx UnderlyingPx_138;
    UnderlyingPx_138.setString("7820888");
set_field(noUnderlyings_0_0, UnderlyingPx_138, UnderlyingInstrument_138);
    FIX::UnderlyingQty UnderlyingQty_138;
    UnderlyingQty_138.setString("18732208");
set_field(noUnderlyings_0_0, UnderlyingQty_138, UnderlyingInstrument_138);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_57363088"}, UnderlyingInstrument_138);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_2018542429"}, UnderlyingInstrument_138);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_138;
    UnderlyingRepurchaseRate_138.setString("21.770000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_138, UnderlyingInstrument_138);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{1124811999}, UnderlyingInstrument_138);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_1597528690"}, UnderlyingInstrument_138);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_33731403"}, UnderlyingInstrument_138);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_1887298820"}, UnderlyingInstrument_138);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_107464827"}, UnderlyingInstrument_138);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_159446629"}, UnderlyingInstrument_138);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_1047659577"}, UnderlyingInstrument_138);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_1099409201"}, UnderlyingInstrument_138);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_655956260"}, UnderlyingInstrument_138);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_91839982"}, UnderlyingInstrument_138);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{5}, UnderlyingInstrument_138);
    FIX::UnderlyingStartValue UnderlyingStartValue_138;
    UnderlyingStartValue_138.setString("19782620");
set_field(noUnderlyings_0_0, UnderlyingStartValue_138, UnderlyingInstrument_138);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_3123534"}, UnderlyingInstrument_138);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"CHF"}, UnderlyingInstrument_138);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_138;
    UnderlyingStrikePrice_138.setString("7221302");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_138, UnderlyingInstrument_138);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_373537362"}, UnderlyingInstrument_138);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_881059012"}, UnderlyingInstrument_138);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_575766396"}, UnderlyingInstrument_138);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_631258426"}, UnderlyingInstrument_138);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_138;
    UnderlyingUnitOfMeasureQty_138.setString("3399249");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_138, UnderlyingInstrument_138);
    all_values.push_back(UnderlyingInstrument_138);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_287;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_811799697"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_287);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_555029213"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_287);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_287);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_288;
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltID{"STRING_177449548"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_288);
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1274052933"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_288);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_288);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_279;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_2050670403"}, UnderlyingStipulations_NoUnderlyingStips_279);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_1331416021"}, UnderlyingStipulations_NoUnderlyingStips_279);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_279);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_280;
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipType{"STRING_1208176835"}, UnderlyingStipulations_NoUnderlyingStips_280);
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipValue{"STRING_11988932"}, UnderlyingStipulations_NoUnderlyingStips_280);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_280);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_281;
      set_field(noUnderlyingStips_0_1_2, FIX::UnderlyingStipType{"STRING_308744372"}, UnderlyingStipulations_NoUnderlyingStips_281);
      set_field(noUnderlyingStips_0_1_2, FIX::UnderlyingStipValue{"STRING_658221877"}, UnderlyingStipulations_NoUnderlyingStips_281);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_281);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_288;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_48559544"}, UndlyInstrumentParties_NoUndlyInstrumentParties_288);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'7'}, UndlyInstrumentParties_NoUndlyInstrumentParties_288);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{205166965}, UndlyInstrumentParties_NoUndlyInstrumentParties_288);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_288);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_579;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1865095905"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_579);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{861123225}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_579);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_579);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_580;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1188059104"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_580);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{2082246738}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_580);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_580);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_581;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_691901632"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_581);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_2, FIX::UnderlyingInstrumentPartySubIDType{1191182638}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_581);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_581);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_289;
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_1854861709"}, UndlyInstrumentParties_NoUndlyInstrumentParties_289);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_289);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyRole{1913312856}, UndlyInstrumentParties_NoUndlyInstrumentParties_289);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_289);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_582;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_413367687"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_582);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{341595604}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_582);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_582);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_583;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_712173849"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_583);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubIDType{753292609}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_583);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_583);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_584;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_1216903916"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_584);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_2, FIX::UnderlyingInstrumentPartySubIDType{1523973546}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_584);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_584);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_290;
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyID{"STRING_1308321822"}, UndlyInstrumentParties_NoUndlyInstrumentParties_290);
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_290);
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyRole{650542831}, UndlyInstrumentParties_NoUndlyInstrumentParties_290);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_290);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_585;
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1297540220"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_585);
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_0, FIX::UnderlyingInstrumentPartySubIDType{1981958852}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_585);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_585);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::TradeCaptureReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_586;
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1706133063"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_586);
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_1, FIX::UnderlyingInstrumentPartySubIDType{1309529152}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_586);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_586);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  // YieldData
  multiset<string> YieldData_32;
  FIX::Yield Yield_32;
  Yield_32.setString("95.760000");
set_field(msg, Yield_32, YieldData_32);
  set_field(msg, FIX::YieldCalcDate{"LOCALMKTDATE_216871292"}, YieldData_32);
  set_field(msg, FIX::YieldRedemptionDate{"LOCALMKTDATE_1355249488"}, YieldData_32);
  FIX::YieldRedemptionPrice YieldRedemptionPrice_32;
  YieldRedemptionPrice_32.setString("1917791");
set_field(msg, YieldRedemptionPrice_32, YieldData_32);
  set_field(msg, FIX::YieldRedemptionPriceType{982557996}, YieldData_32);
  set_field(msg, FIX::YieldType{"STRING_MARK"}, YieldData_32);
  all_values.push_back(YieldData_32);
  all_compo_names.insert(".");

  // header
  multiset<string> header_96;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_1"}, header_96);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_700170253"}, header_96);
  set_header_field(msg.getHeader(), FIX::BodyLength{274056030}, header_96);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_328573697"}, header_96);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_634933343"}, header_96);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_965957662"}, header_96);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_1519756336"}, header_96);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{342311404}, header_96);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_EUC-JP"}, header_96);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{1285585544}, header_96);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_423226827"}, header_96);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_911634024"}, header_96);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_1627181148"}, header_96);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(1, 36, 34, 7, 2, 2011)}, header_96);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{false}, header_96);
  set_header_field(msg.getHeader(), FIX::PossResend{false}, header_96);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_996908609"}, header_96);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{882370450}, header_96);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_403056957"}, header_96);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_1140128185"}, header_96);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_1099241742"}, header_96);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(17, 18, 10, 19, 1, 2004)}, header_96);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_800995596"}, header_96);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_1269419687"}, header_96);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_263769294"}, header_96);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_173268284"}, header_96);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{1611731092}, header_96);
  all_values.push_back(header_96);
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
