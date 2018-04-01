#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/TradeCaptureReportAck.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( TradeCaptureReportAck, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::TradeCaptureReportAck msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> TradeCaptureReportAck_0;
  set_field(msg, FIX::AsOfIndicator{'0'}, TradeCaptureReportAck_0);
  FIX::AvgPx AvgPx_8;
  AvgPx_8.setString("3130223");
set_field(msg, AvgPx_8, TradeCaptureReportAck_0);
  set_field(msg, FIX::AvgPxIndicator{1}, TradeCaptureReportAck_0);
  FIX::CalculatedCcyLastQty CalculatedCcyLastQty_2;
  CalculatedCcyLastQty_2.setString("1228553");
set_field(msg, CalculatedCcyLastQty_2, TradeCaptureReportAck_0);
  set_field(msg, FIX::ClearingBusinessDate{"LOCALMKTDATE_1728420078"}, TradeCaptureReportAck_0);
  set_field(msg, FIX::ClearingFeeIndicator{"STRING_B"}, TradeCaptureReportAck_0);
  set_field(msg, FIX::CopyMsgIndicator{false}, TradeCaptureReportAck_0);
  set_field(msg, FIX::Currency{"JPY"}, TradeCaptureReportAck_0);
  set_field(msg, FIX::EncodedText{"DATA_560461135"}, TradeCaptureReportAck_0);
  set_field(msg, FIX::EncodedTextLen{825359970}, TradeCaptureReportAck_0);
  set_field(msg, FIX::ExecID{"STRING_621495618"}, TradeCaptureReportAck_0);
  set_field(msg, FIX::ExecRestatementReason{2}, TradeCaptureReportAck_0);
  set_field(msg, FIX::ExecType{'F'}, TradeCaptureReportAck_0);
  FIX::FeeMultiplier FeeMultiplier_1;
  FeeMultiplier_1.setString("3035416");
set_field(msg, FeeMultiplier_1, TradeCaptureReportAck_0);
  set_field(msg, FIX::FirmTradeID{"STRING_1310281987"}, TradeCaptureReportAck_0);
  FIX::GrossTradeAmt GrossTradeAmt_6;
  GrossTradeAmt_6.setString("1573953");
set_field(msg, GrossTradeAmt_6, TradeCaptureReportAck_0);
  FIX::LastForwardPoints LastForwardPoints_2;
  LastForwardPoints_2.setString("3583589");
set_field(msg, LastForwardPoints_2, TradeCaptureReportAck_0);
  set_field(msg, FIX::LastMkt{"EXCHANGE_1363912434"}, TradeCaptureReportAck_0);
  FIX::LastParPx LastParPx_10;
  LastParPx_10.setString("10953199");
set_field(msg, LastParPx_10, TradeCaptureReportAck_0);
  FIX::LastPx LastPx_16;
  LastPx_16.setString("10351102");
set_field(msg, LastPx_16, TradeCaptureReportAck_0);
  FIX::LastQty LastQty_11;
  LastQty_11.setString("16518525");
set_field(msg, LastQty_11, TradeCaptureReportAck_0);
  FIX::LastSpotRate LastSpotRate_2;
  LastSpotRate_2.setString("10465135");
set_field(msg, LastSpotRate_2, TradeCaptureReportAck_0);
  FIX::LastSwapPoints LastSwapPoints_2;
  LastSwapPoints_2.setString("19587608");
set_field(msg, LastSwapPoints_2, TradeCaptureReportAck_0);
  set_field(msg, FIX::LastUpdateTime{FIX::UTCTIMESTAMP(19, 28, 37, 17, 12, 2016)}, TradeCaptureReportAck_0);
  set_field(msg, FIX::MarketID{"EXCHANGE_1742843558"}, TradeCaptureReportAck_0);
  set_field(msg, FIX::MarketSegmentID{"STRING_731960335"}, TradeCaptureReportAck_0);
  set_field(msg, FIX::MatchStatus{'2'}, TradeCaptureReportAck_0);
  set_field(msg, FIX::MatchType{"STRING_A4"}, TradeCaptureReportAck_0);
  set_field(msg, FIX::MessageEventSource{"STRING_312896765"}, TradeCaptureReportAck_0);
  set_field(msg, FIX::MultiLegReportingType{'2'}, TradeCaptureReportAck_0);
  set_field(msg, FIX::OrigSecondaryTradeID{"STRING_859104051"}, TradeCaptureReportAck_0);
  set_field(msg, FIX::OrigTradeDate{"LOCALMKTDATE_830414930"}, TradeCaptureReportAck_0);
  set_field(msg, FIX::OrigTradeHandlingInstr{'1'}, TradeCaptureReportAck_0);
  set_field(msg, FIX::OrigTradeID{"STRING_1419565186"}, TradeCaptureReportAck_0);
  set_field(msg, FIX::PreviouslyReported{true}, TradeCaptureReportAck_0);
  set_field(msg, FIX::PriceType{4}, TradeCaptureReportAck_0);
  set_field(msg, FIX::PublishTrdIndicator{false}, TradeCaptureReportAck_0);
  set_field(msg, FIX::QtyType{2}, TradeCaptureReportAck_0);
  set_field(msg, FIX::ResponseDestination{"STRING_409471079"}, TradeCaptureReportAck_0);
  set_field(msg, FIX::ResponseTransportType{1}, TradeCaptureReportAck_0);
  FIX::RndPx RndPx_4;
  RndPx_4.setString("21080644");
set_field(msg, RndPx_4, TradeCaptureReportAck_0);
  set_field(msg, FIX::RptSys{"STRING_767830037"}, TradeCaptureReportAck_0);
  set_field(msg, FIX::SecondaryExecID{"STRING_2103754127"}, TradeCaptureReportAck_0);
  set_field(msg, FIX::SecondaryFirmTradeID{"STRING_1055900768"}, TradeCaptureReportAck_0);
  set_field(msg, FIX::SecondaryTradeID{"STRING_1802940251"}, TradeCaptureReportAck_0);
  set_field(msg, FIX::SecondaryTradeReportID{"STRING_1608123020"}, TradeCaptureReportAck_0);
  set_field(msg, FIX::SecondaryTradeReportRefID{"STRING_2102414315"}, TradeCaptureReportAck_0);
  set_field(msg, FIX::SecondaryTrdType{1614217431}, TradeCaptureReportAck_0);
  set_field(msg, FIX::SettlCurrency{"JPY"}, TradeCaptureReportAck_0);
  set_field(msg, FIX::SettlDate{"LOCALMKTDATE_60276191"}, TradeCaptureReportAck_0);
  set_field(msg, FIX::SettlSessID{"STRING_RTH"}, TradeCaptureReportAck_0);
  set_field(msg, FIX::SettlSessSubID{"STRING_2072649156"}, TradeCaptureReportAck_0);
  set_field(msg, FIX::SettlType{"STRING_B"}, TradeCaptureReportAck_0);
  set_field(msg, FIX::ShortSaleReason{5}, TradeCaptureReportAck_0);
  set_field(msg, FIX::SubscriptionRequestType{'0'}, TradeCaptureReportAck_0);
  set_field(msg, FIX::Text{"STRING_1211174502"}, TradeCaptureReportAck_0);
  set_field(msg, FIX::TierCode{"STRING_926630868"}, TradeCaptureReportAck_0);
  set_field(msg, FIX::TradeDate{"LOCALMKTDATE_1386224281"}, TradeCaptureReportAck_0);
  set_field(msg, FIX::TradeHandlingInstr{'5'}, TradeCaptureReportAck_0);
  set_field(msg, FIX::TradeID{"STRING_2084195101"}, TradeCaptureReportAck_0);
  set_field(msg, FIX::TradeLegRefID{"STRING_97844684"}, TradeCaptureReportAck_0);
  set_field(msg, FIX::TradeLinkID{"STRING_207002549"}, TradeCaptureReportAck_0);
  set_field(msg, FIX::TradePublishIndicator{1}, TradeCaptureReportAck_0);
  set_field(msg, FIX::TradeReportID{"STRING_1517409870"}, TradeCaptureReportAck_0);
  set_field(msg, FIX::TradeReportRefID{"STRING_1862777449"}, TradeCaptureReportAck_0);
  set_field(msg, FIX::TradeReportRejectReason{1}, TradeCaptureReportAck_0);
  set_field(msg, FIX::TradeReportTransType{4}, TradeCaptureReportAck_0);
  set_field(msg, FIX::TradeReportType{2}, TradeCaptureReportAck_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(21, 43, 9, 0, 9, 2006)}, TradeCaptureReportAck_0);
  set_field(msg, FIX::TransferReason{"STRING_1103721120"}, TradeCaptureReportAck_0);
  set_field(msg, FIX::TrdMatchID{"STRING_489891491"}, TradeCaptureReportAck_0);
  set_field(msg, FIX::TrdRptStatus{0}, TradeCaptureReportAck_0);
  set_field(msg, FIX::TrdSubType{14}, TradeCaptureReportAck_0);
  set_field(msg, FIX::TrdType{17}, TradeCaptureReportAck_0);
  set_field(msg, FIX::UnderlyingTradingSessionID{"STRING_2034325995"}, TradeCaptureReportAck_0);
  set_field(msg, FIX::UnderlyingTradingSessionSubID{"STRING_1945510113"}, TradeCaptureReportAck_0);
  set_field(msg, FIX::VenueType{'X'}, TradeCaptureReportAck_0);
  all_values.push_back(TradeCaptureReportAck_0);

  all_compo_names.insert("TradeCaptureReportAck");

  // Instrument
  multiset<string> Instrument_83;
  FIX::AttachmentPoint AttachmentPoint_83;
  AttachmentPoint_83.setString("65.130000");
set_field(msg, AttachmentPoint_83, Instrument_83);
  set_field(msg, FIX::CFICode{"STRING_833732803"}, Instrument_83);
  set_field(msg, FIX::CPProgram{1}, Instrument_83);
  set_field(msg, FIX::CPRegType{"STRING_1577231015"}, Instrument_83);
  FIX::CapPrice CapPrice_83;
  CapPrice_83.setString("17603636");
set_field(msg, CapPrice_83, Instrument_83);
  FIX::ContractMultiplier ContractMultiplier_83;
  ContractMultiplier_83.setString("17620188");
set_field(msg, ContractMultiplier_83, Instrument_83);
  set_field(msg, FIX::ContractMultiplierUnit{0}, Instrument_83);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_1697075124"}, Instrument_83);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_1859863534"}, Instrument_83);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_1160821184"}, Instrument_83);
  FIX::CouponRate CouponRate_83;
  CouponRate_83.setString("3.680000");
set_field(msg, CouponRate_83, Instrument_83);
  set_field(msg, FIX::CreditRating{"STRING_1229789756"}, Instrument_83);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_876114986"}, Instrument_83);
  FIX::DetachmentPoint DetachmentPoint_83;
  DetachmentPoint_83.setString("50.210000");
set_field(msg, DetachmentPoint_83, Instrument_83);
  set_field(msg, FIX::EncodedIssuer{"DATA_29275684"}, Instrument_83);
  set_field(msg, FIX::EncodedIssuerLen{394594252}, Instrument_83);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_581840754"}, Instrument_83);
  set_field(msg, FIX::EncodedSecurityDescLen{1716086953}, Instrument_83);
  set_field(msg, FIX::ExerciseStyle{0}, Instrument_83);
  FIX::Factor Factor_83;
  Factor_83.setString("12862165");
set_field(msg, Factor_83, Instrument_83);
  set_field(msg, FIX::FlexProductEligibilityIndicator{true}, Instrument_83);
  set_field(msg, FIX::FlexibleIndicator{true}, Instrument_83);
  FIX::FloorPrice FloorPrice_83;
  FloorPrice_83.setString("16460488");
set_field(msg, FloorPrice_83, Instrument_83);
  set_field(msg, FIX::FlowScheduleType{1}, Instrument_83);
  set_field(msg, FIX::InstrRegistry{"STRING_898506623"}, Instrument_83);
  set_field(msg, FIX::InstrmtAssignmentMethod{'1'}, Instrument_83);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_440696651"}, Instrument_83);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_1828610265"}, Instrument_83);
  set_field(msg, FIX::Issuer{"STRING_1359457398"}, Instrument_83);
  set_field(msg, FIX::ListMethod{0}, Instrument_83);
  set_field(msg, FIX::LocaleOfIssue{"STRING_536395767"}, Instrument_83);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_1725513912"}, Instrument_83);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_1072455919"}, Instrument_83);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_912190335"}, Instrument_83);
  FIX::MinPriceIncrement MinPriceIncrement_83;
  MinPriceIncrement_83.setString("11552612");
set_field(msg, MinPriceIncrement_83, Instrument_83);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_83;
  MinPriceIncrementAmount_83.setString("6853359");
set_field(msg, MinPriceIncrementAmount_83, Instrument_83);
  set_field(msg, FIX::NTPositionLimit{526725537}, Instrument_83);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_83;
  NotionalPercentageOutstanding_83.setString("99.140000");
set_field(msg, NotionalPercentageOutstanding_83, Instrument_83);
  set_field(msg, FIX::OptAttribute{'2'}, Instrument_83);
  FIX::OptPayoutAmount OptPayoutAmount_83;
  OptPayoutAmount_83.setString("2391054");
set_field(msg, OptPayoutAmount_83, Instrument_83);
  set_field(msg, FIX::OptPayoutType{2}, Instrument_83);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_83;
  OriginalNotionalPercentageOutstanding_83.setString("77.860000");
set_field(msg, OriginalNotionalPercentageOutstanding_83, Instrument_83);
  set_field(msg, FIX::Pool{"STRING_1468895179"}, Instrument_83);
  set_field(msg, FIX::PositionLimit{1998532437}, Instrument_83);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_STD"}, Instrument_83);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_1498170864"}, Instrument_83);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_83;
  PriceUnitOfMeasureQty_83.setString("2456430");
set_field(msg, PriceUnitOfMeasureQty_83, Instrument_83);
  set_field(msg, FIX::Product{2}, Instrument_83);
  set_field(msg, FIX::ProductComplex{"STRING_1066774169"}, Instrument_83);
  set_field(msg, FIX::PutOrCall{1}, Instrument_83);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_1719016437"}, Instrument_83);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_130975575"}, Instrument_83);
  FIX::RepurchaseRate RepurchaseRate_83;
  RepurchaseRate_83.setString("24.810000");
set_field(msg, RepurchaseRate_83, Instrument_83);
  set_field(msg, FIX::RepurchaseTerm{1217581685}, Instrument_83);
  set_field(msg, FIX::RestructuringType{"STRING_MM"}, Instrument_83);
  set_field(msg, FIX::SecurityDesc{"STRING_1426419105"}, Instrument_83);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_542713089"}, Instrument_83);
  set_field(msg, FIX::SecurityGroup{"STRING_739594753"}, Instrument_83);
  set_field(msg, FIX::SecurityID{"STRING_1107545722"}, Instrument_83);
  set_field(msg, FIX::SecurityIDSource{"STRING_K"}, Instrument_83);
  set_field(msg, FIX::SecurityStatus{"STRING_2"}, Instrument_83);
  set_field(msg, FIX::SecuritySubType{"STRING_1643941490"}, Instrument_83);
  set_field(msg, FIX::SecurityType{"STRING_FUT"}, Instrument_83);
  set_field(msg, FIX::Seniority{"STRING_SD"}, Instrument_83);
  set_field(msg, FIX::SettlMethod{'P'}, Instrument_83);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_487978383"}, Instrument_83);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_588626083"}, Instrument_83);
  set_field(msg, FIX::StrikeCurrency{"EUR"}, Instrument_83);
  FIX::StrikeMultiplier StrikeMultiplier_83;
  StrikeMultiplier_83.setString("8235535");
set_field(msg, StrikeMultiplier_83, Instrument_83);
  FIX::StrikePrice StrikePrice_83;
  StrikePrice_83.setString("11744791");
set_field(msg, StrikePrice_83, Instrument_83);
  set_field(msg, FIX::StrikePriceBoundaryMethod{1}, Instrument_83);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_83;
  StrikePriceBoundaryPrecision_83.setString("76.400000");
set_field(msg, StrikePriceBoundaryPrecision_83, Instrument_83);
  set_field(msg, FIX::StrikePriceDeterminationMethod{2}, Instrument_83);
  FIX::StrikeValue StrikeValue_83;
  StrikeValue_83.setString("14230408");
set_field(msg, StrikeValue_83, Instrument_83);
  set_field(msg, FIX::Symbol{"STRING_2027660448"}, Instrument_83);
  set_field(msg, FIX::SymbolSfx{"STRING_WI"}, Instrument_83);
  set_field(msg, FIX::TimeUnit{"STRING_Mo"}, Instrument_83);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{3}, Instrument_83);
  set_field(msg, FIX::UnitOfMeasure{"STRING_Bbl"}, Instrument_83);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_83;
  UnitOfMeasureQty_83.setString("17879812");
set_field(msg, UnitOfMeasureQty_83, Instrument_83);
  set_field(msg, FIX::ValuationMethod{"STRING_FUTDA"}, Instrument_83);
  all_values.push_back(Instrument_83);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::TradeCaptureReportAck::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_167;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_167);
    FIX::ComplexEventPrice ComplexEventPrice_167;
    ComplexEventPrice_167.setString("11020911");
set_field(noComplexEvents_0_0, ComplexEventPrice_167, ComplexEvents_NoComplexEvents_167);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{3}, ComplexEvents_NoComplexEvents_167);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_167;
    ComplexEventPriceBoundaryPrecision_167.setString("92.190000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_167, ComplexEvents_NoComplexEvents_167);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_167);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{4}, ComplexEvents_NoComplexEvents_167);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_167;
    ComplexOptPayoutAmount_167.setString("5548912");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_167, ComplexEvents_NoComplexEvents_167);
    all_values.push_back(ComplexEvents_NoComplexEvents_167);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::TradeCaptureReportAck::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_347;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(7, 21, 27, 13, 1, 2017)}, ComplexEventDates_NoComplexEventDates_347);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(14, 45, 57, 26, 2, 2002)}, ComplexEventDates_NoComplexEventDates_347);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_347);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradeCaptureReportAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_708;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(23, 19, 40)}, ComplexEventTimes_NoComplexEventTimes_708);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(23, 4, 47)}, ComplexEventTimes_NoComplexEventTimes_708);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_708);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_709;
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(10, 19, 16)}, ComplexEventTimes_NoComplexEventTimes_709);
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(20, 30, 54)}, ComplexEventTimes_NoComplexEventTimes_709);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_709);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_348;
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(1, 16, 42, 6, 5, 2015)}, ComplexEventDates_NoComplexEventDates_348);
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(22, 30, 55, 21, 9, 2007)}, ComplexEventDates_NoComplexEventDates_348);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_348);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradeCaptureReportAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_710;
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(12, 44, 42)}, ComplexEventTimes_NoComplexEventTimes_710);
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(11, 47, 29)}, ComplexEventTimes_NoComplexEventTimes_710);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_710);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::TradeCaptureReportAck::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_171;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_513993673"}, EvntGrp_NoEvents_171);
    FIX::EventPx EventPx_171;
    EventPx_171.setString("14433722");
set_field(noEvents_0_0, EventPx_171, EvntGrp_NoEvents_171);
    set_field(noEvents_0_0, FIX::EventText{"STRING_1248477441"}, EvntGrp_NoEvents_171);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(17, 43, 12, 8, 2, 2004)}, EvntGrp_NoEvents_171);
    set_field(noEvents_0_0, FIX::EventType{19}, EvntGrp_NoEvents_171);
    all_values.push_back(EvntGrp_NoEvents_171);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportAck::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_172;
    set_field(noEvents_0_1, FIX::EventDate{"LOCALMKTDATE_917688551"}, EvntGrp_NoEvents_172);
    FIX::EventPx EventPx_172;
    EventPx_172.setString("19588685");
set_field(noEvents_0_1, EventPx_172, EvntGrp_NoEvents_172);
    set_field(noEvents_0_1, FIX::EventText{"STRING_1753269784"}, EvntGrp_NoEvents_172);
    set_field(noEvents_0_1, FIX::EventTime{FIX::UTCTIMESTAMP(3, 26, 48, 8, 11, 2013)}, EvntGrp_NoEvents_172);
    set_field(noEvents_0_1, FIX::EventType{10}, EvntGrp_NoEvents_172);
    all_values.push_back(EvntGrp_NoEvents_172);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::TradeCaptureReportAck::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_161;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_484276577"}, InstrumentParties_NoInstrumentParties_161);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_161);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{1182710759}, InstrumentParties_NoInstrumentParties_161);
    all_values.push_back(InstrumentParties_NoInstrumentParties_161);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::TradeCaptureReportAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_330;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_1447171480"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_330);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{406091798}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_330);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_330);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_331;
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubID{"STRING_1106959880"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_331);
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubIDType{1400884725}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_331);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_331);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_332;
      set_field(noInstrumentPartySubIDs_0_1_2, FIX::InstrumentPartySubID{"STRING_920085471"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_332);
      set_field(noInstrumentPartySubIDs_0_1_2, FIX::InstrumentPartySubIDType{402848452}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_332);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_332);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportAck::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_162;
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyID{"STRING_501878519"}, InstrumentParties_NoInstrumentParties_162);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyIDSource{'7'}, InstrumentParties_NoInstrumentParties_162);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyRole{1552330701}, InstrumentParties_NoInstrumentParties_162);
    all_values.push_back(InstrumentParties_NoInstrumentParties_162);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::TradeCaptureReportAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_333;
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubID{"STRING_1416396432"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_333);
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubIDType{1174094037}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_333);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_333);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::TradeCaptureReportAck::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_164;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_1382929412"}, SecAltIDGrp_NoSecurityAltID_164);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_85083308"}, SecAltIDGrp_NoSecurityAltID_164);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_164);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportAck::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_165;
    set_field(noSecurityAltID_0_1, FIX::SecurityAltID{"STRING_926902967"}, SecAltIDGrp_NoSecurityAltID_165);
    set_field(noSecurityAltID_0_1, FIX::SecurityAltIDSource{"STRING_1194314305"}, SecAltIDGrp_NoSecurityAltID_165);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_165);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::TradeCaptureReportAck::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_166;
    set_field(noSecurityAltID_0_2, FIX::SecurityAltID{"STRING_1838353092"}, SecAltIDGrp_NoSecurityAltID_166);
    set_field(noSecurityAltID_0_2, FIX::SecurityAltIDSource{"STRING_1305997188"}, SecAltIDGrp_NoSecurityAltID_166);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_166);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_166;
  set_field(msg, FIX::SecurityXML{"XMLDATA_372828716"}, SecurityXML_166);
  set_field(msg, FIX::SecurityXMLLen{73093230}, SecurityXML_166);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_1568863597"}, SecurityXML_166);
  all_values.push_back(SecurityXML_166);
  all_compo_names.insert("..");

  // PositionAmountData
  // Group PositionAmountData.NoPosAmt
  {
    FIX50SP2::TradeCaptureReportAck::NoPosAmt noPosAmt_0_0;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_13;
    FIX::PosAmt PosAmt_13;
    PosAmt_13.setString("13426130");
set_field(noPosAmt_0_0, PosAmt_13, PositionAmountData_NoPosAmt_13);
    set_field(noPosAmt_0_0, FIX::PosAmtType{"STRING_TVAR"}, PositionAmountData_NoPosAmt_13);
    set_field(noPosAmt_0_0, FIX::PositionCurrency{"STRING_483882161"}, PositionAmountData_NoPosAmt_13);
    all_values.push_back(PositionAmountData_NoPosAmt_13);
    all_compo_names.insert("...NoPosAmt");

    msg.addGroup(noPosAmt_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportAck::NoPosAmt noPosAmt_0_1;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_14;
    FIX::PosAmt PosAmt_14;
    PosAmt_14.setString("13429806");
set_field(noPosAmt_0_1, PosAmt_14, PositionAmountData_NoPosAmt_14);
    set_field(noPosAmt_0_1, FIX::PosAmtType{"STRING_IACPN"}, PositionAmountData_NoPosAmt_14);
    set_field(noPosAmt_0_1, FIX::PositionCurrency{"STRING_1677275374"}, PositionAmountData_NoPosAmt_14);
    all_values.push_back(PositionAmountData_NoPosAmt_14);
    all_compo_names.insert("...NoPosAmt");

    msg.addGroup(noPosAmt_0_1);
  }
  {
    FIX50SP2::TradeCaptureReportAck::NoPosAmt noPosAmt_0_2;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_15;
    FIX::PosAmt PosAmt_15;
    PosAmt_15.setString("3782077");
set_field(noPosAmt_0_2, PosAmt_15, PositionAmountData_NoPosAmt_15);
    set_field(noPosAmt_0_2, FIX::PosAmtType{"STRING_ICPN"}, PositionAmountData_NoPosAmt_15);
    set_field(noPosAmt_0_2, FIX::PositionCurrency{"STRING_976963206"}, PositionAmountData_NoPosAmt_15);
    all_values.push_back(PositionAmountData_NoPosAmt_15);
    all_compo_names.insert("...NoPosAmt");

    msg.addGroup(noPosAmt_0_2);
  }
  // RootParties
  // Group RootParties.NoRootPartyIDs
  {
    FIX50SP2::TradeCaptureReportAck::NoRootPartyIDs noRootPartyIDs_0_0;
    // RootParties.NoRootPartyIDs
    multiset<string> RootParties_NoRootPartyIDs_12;
    set_field(noRootPartyIDs_0_0, FIX::RootPartyID{"STRING_1511873039"}, RootParties_NoRootPartyIDs_12);
    set_field(noRootPartyIDs_0_0, FIX::RootPartyIDSource{'2'}, RootParties_NoRootPartyIDs_12);
    set_field(noRootPartyIDs_0_0, FIX::RootPartyRole{1704384989}, RootParties_NoRootPartyIDs_12);
    all_values.push_back(RootParties_NoRootPartyIDs_12);
    all_compo_names.insert("...NoRootPartyIDs");

    // RootSubParties
    // Group RootSubParties.NoRootPartySubIDs
    {
      FIX50SP2::TradeCaptureReportAck::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_0;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_25;
      set_field(noRootPartySubIDs_0_1_0, FIX::RootPartySubID{"STRING_732242803"}, RootSubParties_NoRootPartySubIDs_25);
      set_field(noRootPartySubIDs_0_1_0, FIX::RootPartySubIDType{1778913750}, RootSubParties_NoRootPartySubIDs_25);
      all_values.push_back(RootSubParties_NoRootPartySubIDs_25);
      all_compo_names.insert("...NoRootPartyIDs...NoRootPartySubIDs");

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_0);
    }
    msg.addGroup(noRootPartyIDs_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportAck::NoRootPartyIDs noRootPartyIDs_0_1;
    // RootParties.NoRootPartyIDs
    multiset<string> RootParties_NoRootPartyIDs_13;
    set_field(noRootPartyIDs_0_1, FIX::RootPartyID{"STRING_1319568545"}, RootParties_NoRootPartyIDs_13);
    set_field(noRootPartyIDs_0_1, FIX::RootPartyIDSource{'3'}, RootParties_NoRootPartyIDs_13);
    set_field(noRootPartyIDs_0_1, FIX::RootPartyRole{1047826534}, RootParties_NoRootPartyIDs_13);
    all_values.push_back(RootParties_NoRootPartyIDs_13);
    all_compo_names.insert("...NoRootPartyIDs");

    // RootSubParties
    // Group RootSubParties.NoRootPartySubIDs
    {
      FIX50SP2::TradeCaptureReportAck::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_1_1_0;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_26;
      set_field(noRootPartySubIDs_1_1_0, FIX::RootPartySubID{"STRING_46501373"}, RootSubParties_NoRootPartySubIDs_26);
      set_field(noRootPartySubIDs_1_1_0, FIX::RootPartySubIDType{283272299}, RootSubParties_NoRootPartySubIDs_26);
      all_values.push_back(RootSubParties_NoRootPartySubIDs_26);
      all_compo_names.insert("...NoRootPartyIDs...NoRootPartySubIDs");

      noRootPartyIDs_0_1.addGroup(noRootPartySubIDs_1_1_0);
    }
    msg.addGroup(noRootPartyIDs_0_1);
  }
  {
    FIX50SP2::TradeCaptureReportAck::NoRootPartyIDs noRootPartyIDs_0_2;
    // RootParties.NoRootPartyIDs
    multiset<string> RootParties_NoRootPartyIDs_14;
    set_field(noRootPartyIDs_0_2, FIX::RootPartyID{"STRING_431262242"}, RootParties_NoRootPartyIDs_14);
    set_field(noRootPartyIDs_0_2, FIX::RootPartyIDSource{'9'}, RootParties_NoRootPartyIDs_14);
    set_field(noRootPartyIDs_0_2, FIX::RootPartyRole{1477586604}, RootParties_NoRootPartyIDs_14);
    all_values.push_back(RootParties_NoRootPartyIDs_14);
    all_compo_names.insert("...NoRootPartyIDs");

    // RootSubParties
    // Group RootSubParties.NoRootPartySubIDs
    {
      FIX50SP2::TradeCaptureReportAck::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_2_1_0;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_27;
      set_field(noRootPartySubIDs_2_1_0, FIX::RootPartySubID{"STRING_131917880"}, RootSubParties_NoRootPartySubIDs_27);
      set_field(noRootPartySubIDs_2_1_0, FIX::RootPartySubIDType{1850415320}, RootSubParties_NoRootPartySubIDs_27);
      all_values.push_back(RootSubParties_NoRootPartySubIDs_27);
      all_compo_names.insert("...NoRootPartyIDs...NoRootPartySubIDs");

      noRootPartyIDs_0_2.addGroup(noRootPartySubIDs_2_1_0);
    }
    msg.addGroup(noRootPartyIDs_0_2);
  }
  // TrdCapRptAckSideGrp
  // Group TrdCapRptAckSideGrp.NoSides
  {
    FIX50SP2::TradeCaptureReportAck::NoSides noSides_0_0;
    // TrdCapRptAckSideGrp.NoSides
    multiset<string> TrdCapRptAckSideGrp_NoSides_0;
    set_field(noSides_0_0, FIX::Account{"STRING_1700781477"}, TrdCapRptAckSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::AccountType{7}, TrdCapRptAckSideGrp_NoSides_0);
    FIX::AccruedInterestAmt AccruedInterestAmt_12;
    AccruedInterestAmt_12.setString("15378380");
set_field(noSides_0_0, AccruedInterestAmt_12, TrdCapRptAckSideGrp_NoSides_0);
    FIX::AccruedInterestRate AccruedInterestRate_7;
    AccruedInterestRate_7.setString("35.600000");
set_field(noSides_0_0, AccruedInterestRate_7, TrdCapRptAckSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::AcctIDSource{2}, TrdCapRptAckSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::AggressorIndicator{false}, TrdCapRptAckSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::AllocID{"STRING_1010125868"}, TrdCapRptAckSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::ComplianceID{"STRING_1876831559"}, TrdCapRptAckSideGrp_NoSides_0);
    FIX::Concession Concession_7;
    Concession_7.setString("11115426");
set_field(noSides_0_0, Concession_7, TrdCapRptAckSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::CustOrderCapacity{4}, TrdCapRptAckSideGrp_NoSides_0);
    FIX::EndAccruedInterestAmt EndAccruedInterestAmt_12;
    EndAccruedInterestAmt_12.setString("7063111");
set_field(noSides_0_0, EndAccruedInterestAmt_12, TrdCapRptAckSideGrp_NoSides_0);
    FIX::EndCash EndCash_12;
    EndCash_12.setString("18958422");
set_field(noSides_0_0, EndCash_12, TrdCapRptAckSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::ExDate{"LOCALMKTDATE_779428418"}, TrdCapRptAckSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::ExchangeRule{"STRING_936675401"}, TrdCapRptAckSideGrp_NoSides_0);
    FIX::InterestAtMaturity InterestAtMaturity_7;
    InterestAtMaturity_7.setString("14527435");
set_field(noSides_0_0, InterestAtMaturity_7, TrdCapRptAckSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::NetGrossInd{2}, TrdCapRptAckSideGrp_NoSides_0);
    FIX::NetMoney NetMoney_7;
    NetMoney_7.setString("16689182");
set_field(noSides_0_0, NetMoney_7, TrdCapRptAckSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::NumDaysInterest{1084173654}, TrdCapRptAckSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::OddLot{true}, TrdCapRptAckSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::OrderCategory{'4'}, TrdCapRptAckSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::OrderDelay{2132000188}, TrdCapRptAckSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::OrderDelayUnit{1}, TrdCapRptAckSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::PositionEffect{'D'}, TrdCapRptAckSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::PreallocMethod{'1'}, TrdCapRptAckSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::ProcessCode{'2'}, TrdCapRptAckSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::RptSeq{578627227}, TrdCapRptAckSideGrp_NoSides_0);
    FIX::SettlCurrAmt SettlCurrAmt_11;
    SettlCurrAmt_11.setString("17453754");
set_field(noSides_0_0, SettlCurrAmt_11, TrdCapRptAckSideGrp_NoSides_0);
    FIX::SettlCurrFxRate SettlCurrFxRate_11;
    SettlCurrFxRate_11.setString("6183240");
set_field(noSides_0_0, SettlCurrFxRate_11, TrdCapRptAckSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::SettlCurrFxRateCalc{'D'}, TrdCapRptAckSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::Side{'C'}, TrdCapRptAckSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::SideCurrency{"CAN"}, TrdCapRptAckSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::SideExecID{"STRING_1163981139"}, TrdCapRptAckSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::SideFillStationCd{"STRING_203903301"}, TrdCapRptAckSideGrp_NoSides_0);
    FIX::SideGrossTradeAmt SideGrossTradeAmt_2;
    SideGrossTradeAmt_2.setString("3034164");
set_field(noSides_0_0, SideGrossTradeAmt_2, TrdCapRptAckSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::SideLastQty{1363537324}, TrdCapRptAckSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::SideMultiLegReportingType{2}, TrdCapRptAckSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::SideReasonCd{"STRING_1313542365"}, TrdCapRptAckSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::SideSettlCurrency{"USD"}, TrdCapRptAckSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::SideTradeReportID{"STRING_581097744"}, TrdCapRptAckSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::SideTrdSubTyp{1799196353}, TrdCapRptAckSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::SolicitedFlag{false}, TrdCapRptAckSideGrp_NoSides_0);
    FIX::StartCash StartCash_12;
    StartCash_12.setString("13605261");
set_field(noSides_0_0, StartCash_12, TrdCapRptAckSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::TimeBracket{"STRING_588388106"}, TrdCapRptAckSideGrp_NoSides_0);
    FIX::TotalTakedown TotalTakedown_7;
    TotalTakedown_7.setString("11023994");
set_field(noSides_0_0, TotalTakedown_7, TrdCapRptAckSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::TradeAllocIndicator{5}, TrdCapRptAckSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::TradeInputDevice{"STRING_109822663"}, TrdCapRptAckSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::TradeInputSource{"STRING_39089437"}, TrdCapRptAckSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::TradingSessionID{"STRING_1"}, TrdCapRptAckSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::TradingSessionSubID{"STRING_4"}, TrdCapRptAckSideGrp_NoSides_0);
    all_values.push_back(TrdCapRptAckSideGrp_NoSides_0);
    all_compo_names.insert("...NoSides");

    // ClrInstGrp
    // Group ClrInstGrp.NoClearingInstructions
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoClearingInstructions noClearingInstructions_0_1_0;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_14;
      set_field(noClearingInstructions_0_1_0, FIX::ClearingInstruction{1}, ClrInstGrp_NoClearingInstructions_14);
      all_values.push_back(ClrInstGrp_NoClearingInstructions_14);
      all_compo_names.insert("...NoSides...NoClearingInstructions");

      noSides_0_0.addGroup(noClearingInstructions_0_1_0);
    }
    // CommissionData
    multiset<string> CommissionData_20;
    set_field(noSides_0_0, FIX::CommCurrency{"CAN"}, CommissionData_20);
    set_field(noSides_0_0, FIX::CommType{'3'}, CommissionData_20);
    FIX::Commission Commission_23;
    Commission_23.setString("19998779");
set_field(noSides_0_0, Commission_23, CommissionData_20);
    set_field(noSides_0_0, FIX::FundRenewWaiv{'N'}, CommissionData_20);
    all_values.push_back(CommissionData_20);
    all_compo_names.insert("...NoSides.");

    // ContAmtGrp
    // Group ContAmtGrp.NoContAmts
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoContAmts noContAmts_0_1_0;
      // ContAmtGrp.NoContAmts
      multiset<string> ContAmtGrp_NoContAmts_3;
      set_field(noContAmts_0_1_0, FIX::ContAmtCurr{"USD"}, ContAmtGrp_NoContAmts_3);
      set_field(noContAmts_0_1_0, FIX::ContAmtType{9}, ContAmtGrp_NoContAmts_3);
      FIX::ContAmtValue ContAmtValue_3;
      ContAmtValue_3.setString("8267823");
set_field(noContAmts_0_1_0, ContAmtValue_3, ContAmtGrp_NoContAmts_3);
      all_values.push_back(ContAmtGrp_NoContAmts_3);
      all_compo_names.insert("...NoSides...NoContAmts");

      noSides_0_0.addGroup(noContAmts_0_1_0);
    }
    // MiscFeesGrp
    // Group MiscFeesGrp.NoMiscFees
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoMiscFees noMiscFees_0_1_0;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_22;
      FIX::MiscFeeAmt MiscFeeAmt_22;
      MiscFeeAmt_22.setString("16753586");
set_field(noMiscFees_0_1_0, MiscFeeAmt_22, MiscFeesGrp_NoMiscFees_22);
      set_field(noMiscFees_0_1_0, FIX::MiscFeeBasis{0}, MiscFeesGrp_NoMiscFees_22);
      set_field(noMiscFees_0_1_0, FIX::MiscFeeCurr{"CAN"}, MiscFeesGrp_NoMiscFees_22);
      set_field(noMiscFees_0_1_0, FIX::MiscFeeType{"STRING_8"}, MiscFeesGrp_NoMiscFees_22);
      all_values.push_back(MiscFeesGrp_NoMiscFees_22);
      all_compo_names.insert("...NoSides...NoMiscFees");

      noSides_0_0.addGroup(noMiscFees_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoMiscFees noMiscFees_0_1_1;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_23;
      FIX::MiscFeeAmt MiscFeeAmt_23;
      MiscFeeAmt_23.setString("6630301");
set_field(noMiscFees_0_1_1, MiscFeeAmt_23, MiscFeesGrp_NoMiscFees_23);
      set_field(noMiscFees_0_1_1, FIX::MiscFeeBasis{0}, MiscFeesGrp_NoMiscFees_23);
      set_field(noMiscFees_0_1_1, FIX::MiscFeeCurr{"GBP"}, MiscFeesGrp_NoMiscFees_23);
      set_field(noMiscFees_0_1_1, FIX::MiscFeeType{"STRING_3"}, MiscFeesGrp_NoMiscFees_23);
      all_values.push_back(MiscFeesGrp_NoMiscFees_23);
      all_compo_names.insert("...NoSides...NoMiscFees");

      noSides_0_0.addGroup(noMiscFees_0_1_1);
    }
    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoPartyIDs noPartyIDs_0_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_142;
      set_field(noPartyIDs_0_1_0, FIX::PartyID{"STRING_903130943"}, Parties_NoPartyIDs_142);
      set_field(noPartyIDs_0_1_0, FIX::PartyIDSource{'7'}, Parties_NoPartyIDs_142);
      set_field(noPartyIDs_0_1_0, FIX::PartyRole{8}, Parties_NoPartyIDs_142);
      all_values.push_back(Parties_NoPartyIDs_142);
      all_compo_names.insert("...NoSides...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_292;
        set_field(noPartySubIDs_0_0_2_0, FIX::PartySubID{"STRING_1157555312"}, PtysSubGrp_NoPartySubIDs_292);
        set_field(noPartySubIDs_0_0_2_0, FIX::PartySubIDType{30}, PtysSubGrp_NoPartySubIDs_292);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_292);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_0);
      }
      noSides_0_0.addGroup(noPartyIDs_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoPartyIDs noPartyIDs_0_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_143;
      set_field(noPartyIDs_0_1_1, FIX::PartyID{"STRING_681497783"}, Parties_NoPartyIDs_143);
      set_field(noPartyIDs_0_1_1, FIX::PartyIDSource{'C'}, Parties_NoPartyIDs_143);
      set_field(noPartyIDs_0_1_1, FIX::PartyRole{66}, Parties_NoPartyIDs_143);
      all_values.push_back(Parties_NoPartyIDs_143);
      all_compo_names.insert("...NoSides...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_293;
        set_field(noPartySubIDs_0_1_2_0, FIX::PartySubID{"STRING_1472556107"}, PtysSubGrp_NoPartySubIDs_293);
        set_field(noPartySubIDs_0_1_2_0, FIX::PartySubIDType{19}, PtysSubGrp_NoPartySubIDs_293);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_293);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_0);
      }
      noSides_0_0.addGroup(noPartyIDs_0_1_1);
    }
    // SettlDetails
    // Group SettlDetails.NoSettlDetails
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails noSettlDetails_0_1_0;
      // SettlDetails.NoSettlDetails
      multiset<string> SettlDetails_NoSettlDetails_9;
      set_field(noSettlDetails_0_1_0, FIX::SettlObligSource{'1'}, SettlDetails_NoSettlDetails_9);
      all_values.push_back(SettlDetails_NoSettlDetails_9);
      all_compo_names.insert("...NoSides...NoSettlDetails");

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_0_0_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_60;
        set_field(noSettlPartyIDs_0_0_2_0, FIX::SettlPartyID{"STRING_370598536"}, SettlParties_NoSettlPartyIDs_60);
        set_field(noSettlPartyIDs_0_0_2_0, FIX::SettlPartyIDSource{'5'}, SettlParties_NoSettlPartyIDs_60);
        set_field(noSettlPartyIDs_0_0_2_0, FIX::SettlPartyRole{1040900614}, SettlParties_NoSettlPartyIDs_60);
        all_values.push_back(SettlParties_NoSettlPartyIDs_60);
        all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_123;
          set_field(noSettlPartySubIDs_0_0_0_3_0, FIX::SettlPartySubID{"STRING_906044019"}, SettlPtysSubGrp_NoSettlPartySubIDs_123);
          set_field(noSettlPartySubIDs_0_0_0_3_0, FIX::SettlPartySubIDType{568775591}, SettlPtysSubGrp_NoSettlPartySubIDs_123);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_123);
          all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_0_2_0.addGroup(noSettlPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_124;
          set_field(noSettlPartySubIDs_0_0_0_3_1, FIX::SettlPartySubID{"STRING_180096056"}, SettlPtysSubGrp_NoSettlPartySubIDs_124);
          set_field(noSettlPartySubIDs_0_0_0_3_1, FIX::SettlPartySubIDType{476188915}, SettlPtysSubGrp_NoSettlPartySubIDs_124);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_124);
          all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_0_2_0.addGroup(noSettlPartySubIDs_0_0_0_3_1);
        }
        noSettlDetails_0_1_0.addGroup(noSettlPartyIDs_0_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_0_0_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_61;
        set_field(noSettlPartyIDs_0_0_2_1, FIX::SettlPartyID{"STRING_1033888840"}, SettlParties_NoSettlPartyIDs_61);
        set_field(noSettlPartyIDs_0_0_2_1, FIX::SettlPartyIDSource{'4'}, SettlParties_NoSettlPartyIDs_61);
        set_field(noSettlPartyIDs_0_0_2_1, FIX::SettlPartyRole{1139219046}, SettlParties_NoSettlPartyIDs_61);
        all_values.push_back(SettlParties_NoSettlPartyIDs_61);
        all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_125;
          set_field(noSettlPartySubIDs_0_0_1_3_0, FIX::SettlPartySubID{"STRING_1353708899"}, SettlPtysSubGrp_NoSettlPartySubIDs_125);
          set_field(noSettlPartySubIDs_0_0_1_3_0, FIX::SettlPartySubIDType{1453961883}, SettlPtysSubGrp_NoSettlPartySubIDs_125);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_125);
          all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_0_2_1.addGroup(noSettlPartySubIDs_0_0_1_3_0);
        }
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_1_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_126;
          set_field(noSettlPartySubIDs_0_0_1_3_1, FIX::SettlPartySubID{"STRING_1416365850"}, SettlPtysSubGrp_NoSettlPartySubIDs_126);
          set_field(noSettlPartySubIDs_0_0_1_3_1, FIX::SettlPartySubIDType{1444106707}, SettlPtysSubGrp_NoSettlPartySubIDs_126);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_126);
          all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_0_2_1.addGroup(noSettlPartySubIDs_0_0_1_3_1);
        }
        noSettlDetails_0_1_0.addGroup(noSettlPartyIDs_0_0_2_1);
      }
      noSides_0_0.addGroup(noSettlDetails_0_1_0);
    }
    // SideTrdRegTS
    // Group SideTrdRegTS.NoSideTrdRegTS
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoSideTrdRegTS noSideTrdRegTS_0_1_0;
      // SideTrdRegTS.NoSideTrdRegTS
      multiset<string> SideTrdRegTS_NoSideTrdRegTS_2;
      set_field(noSideTrdRegTS_0_1_0, FIX::SideTrdRegTimestamp{FIX::UTCTIMESTAMP(18, 24, 50, 27, 12, 2012)}, SideTrdRegTS_NoSideTrdRegTS_2);
      set_field(noSideTrdRegTS_0_1_0, FIX::SideTrdRegTimestampSrc{"STRING_1642219999"}, SideTrdRegTS_NoSideTrdRegTS_2);
      set_field(noSideTrdRegTS_0_1_0, FIX::SideTrdRegTimestampType{1859325414}, SideTrdRegTS_NoSideTrdRegTS_2);
      all_values.push_back(SideTrdRegTS_NoSideTrdRegTS_2);
      all_compo_names.insert("...NoSides...NoSideTrdRegTS");

      noSides_0_0.addGroup(noSideTrdRegTS_0_1_0);
    }
    // Stipulations
    // Group Stipulations.NoStipulations
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoStipulations noStipulations_0_1_0;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_56;
      set_field(noStipulations_0_1_0, FIX::StipulationType{"STRING_PPL"}, Stipulations_NoStipulations_56);
      set_field(noStipulations_0_1_0, FIX::StipulationValue{"STRING_1666984552"}, Stipulations_NoStipulations_56);
      all_values.push_back(Stipulations_NoStipulations_56);
      all_compo_names.insert("...NoSides...NoStipulations");

      noSides_0_0.addGroup(noStipulations_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoStipulations noStipulations_0_1_1;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_57;
      set_field(noStipulations_0_1_1, FIX::StipulationType{"STRING_AVFICO"}, Stipulations_NoStipulations_57);
      set_field(noStipulations_0_1_1, FIX::StipulationValue{"STRING_123204196"}, Stipulations_NoStipulations_57);
      all_values.push_back(Stipulations_NoStipulations_57);
      all_compo_names.insert("...NoSides...NoStipulations");

      noSides_0_0.addGroup(noStipulations_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoStipulations noStipulations_0_1_2;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_58;
      set_field(noStipulations_0_1_2, FIX::StipulationType{"STRING_WHOLE"}, Stipulations_NoStipulations_58);
      set_field(noStipulations_0_1_2, FIX::StipulationValue{"STRING_1817449010"}, Stipulations_NoStipulations_58);
      all_values.push_back(Stipulations_NoStipulations_58);
      all_compo_names.insert("...NoSides...NoStipulations");

      noSides_0_0.addGroup(noStipulations_0_1_2);
    }
    // TradeReportOrderDetail
    multiset<string> TradeReportOrderDetail_2;
    set_field(noSides_0_0, FIX::BookingType{0}, TradeReportOrderDetail_2);
    set_field(noSides_0_0, FIX::ClOrdID{"STRING_1087480312"}, TradeReportOrderDetail_2);
    FIX::CumQty CumQty_5;
    CumQty_5.setString("5760093");
set_field(noSides_0_0, CumQty_5, TradeReportOrderDetail_2);
    set_field(noSides_0_0, FIX::ExecInst{"MULTIPLECHARVALUE_o"}, TradeReportOrderDetail_2);
    set_field(noSides_0_0, FIX::ExpireTime{FIX::UTCTIMESTAMP(16, 34, 35, 14, 12, 2008)}, TradeReportOrderDetail_2);
    FIX::LeavesQty LeavesQty_4;
    LeavesQty_4.setString("14978955");
set_field(noSides_0_0, LeavesQty_4, TradeReportOrderDetail_2);
    set_field(noSides_0_0, FIX::ListID{"STRING_1288467201"}, TradeReportOrderDetail_2);
    set_field(noSides_0_0, FIX::LotType{'2'}, TradeReportOrderDetail_2);
    set_field(noSides_0_0, FIX::OrdStatus{'5'}, TradeReportOrderDetail_2);
    set_field(noSides_0_0, FIX::OrdType{'G'}, TradeReportOrderDetail_2);
    set_field(noSides_0_0, FIX::OrderCapacity{'G'}, TradeReportOrderDetail_2);
    set_field(noSides_0_0, FIX::OrderID{"STRING_782583891"}, TradeReportOrderDetail_2);
    set_field(noSides_0_0, FIX::OrderInputDevice{"STRING_1073235021"}, TradeReportOrderDetail_2);
    set_field(noSides_0_0, FIX::OrderRestrictions{"MULTIPLECHARVALUE_F"}, TradeReportOrderDetail_2);
    set_field(noSides_0_0, FIX::OrigCustOrderCapacity{3}, TradeReportOrderDetail_2);
    set_field(noSides_0_0, FIX::OrigOrdModTime{FIX::UTCTIMESTAMP(21, 16, 24, 7, 9, 2010)}, TradeReportOrderDetail_2);
    FIX::Price Price_25;
    Price_25.setString("1879871");
set_field(noSides_0_0, Price_25, TradeReportOrderDetail_2);
    set_field(noSides_0_0, FIX::RefOrdIDReason{0}, TradeReportOrderDetail_2);
    set_field(noSides_0_0, FIX::RefOrderID{"STRING_343447468"}, TradeReportOrderDetail_2);
    set_field(noSides_0_0, FIX::RefOrderIDSource{'3'}, TradeReportOrderDetail_2);
    set_field(noSides_0_0, FIX::SecondaryClOrdID{"STRING_748083233"}, TradeReportOrderDetail_2);
    set_field(noSides_0_0, FIX::SecondaryOrderID{"STRING_919456849"}, TradeReportOrderDetail_2);
    FIX::StopPx StopPx_10;
    StopPx_10.setString("9374887");
set_field(noSides_0_0, StopPx_10, TradeReportOrderDetail_2);
    set_field(noSides_0_0, FIX::TimeInForce{'2'}, TradeReportOrderDetail_2);
    set_field(noSides_0_0, FIX::TransBkdTime{FIX::UTCTIMESTAMP(18, 9, 20, 26, 5, 2011)}, TradeReportOrderDetail_2);
    all_values.push_back(TradeReportOrderDetail_2);
    all_compo_names.insert("...NoSides.");

    // DisplayInstruction
    multiset<string> DisplayInstruction_10;
    FIX::DisplayHighQty DisplayHighQty_10;
    DisplayHighQty_10.setString("5698592");
set_field(noSides_0_0, DisplayHighQty_10, DisplayInstruction_10);
    FIX::DisplayLowQty DisplayLowQty_10;
    DisplayLowQty_10.setString("6615557");
set_field(noSides_0_0, DisplayLowQty_10, DisplayInstruction_10);
    set_field(noSides_0_0, FIX::DisplayMethod{'2'}, DisplayInstruction_10);
    FIX::DisplayMinIncr DisplayMinIncr_10;
    DisplayMinIncr_10.setString("981908");
set_field(noSides_0_0, DisplayMinIncr_10, DisplayInstruction_10);
    FIX::DisplayQty DisplayQty_10;
    DisplayQty_10.setString("550637");
set_field(noSides_0_0, DisplayQty_10, DisplayInstruction_10);
    set_field(noSides_0_0, FIX::DisplayWhen{'1'}, DisplayInstruction_10);
    FIX::RefreshQty RefreshQty_10;
    RefreshQty_10.setString("11714259");
set_field(noSides_0_0, RefreshQty_10, DisplayInstruction_10);
    FIX::SecondaryDisplayQty SecondaryDisplayQty_10;
    SecondaryDisplayQty_10.setString("713514");
set_field(noSides_0_0, SecondaryDisplayQty_10, DisplayInstruction_10);
    all_values.push_back(DisplayInstruction_10);
    all_compo_names.insert("...NoSides..");

    // OrderQtyData
    multiset<string> OrderQtyData_24;
    FIX::CashOrderQty CashOrderQty_24;
    CashOrderQty_24.setString("1002829");
set_field(noSides_0_0, CashOrderQty_24, OrderQtyData_24);
    FIX::OrderPercent OrderPercent_24;
    OrderPercent_24.setString("83.080000");
set_field(noSides_0_0, OrderPercent_24, OrderQtyData_24);
    FIX::OrderQty OrderQty_32;
    OrderQty_32.setString("17298591");
set_field(noSides_0_0, OrderQty_32, OrderQtyData_24);
    set_field(noSides_0_0, FIX::RoundingDirection{'0'}, OrderQtyData_24);
    FIX::RoundingModulus RoundingModulus_24;
    RoundingModulus_24.setString("837442");
set_field(noSides_0_0, RoundingModulus_24, OrderQtyData_24);
    all_values.push_back(OrderQtyData_24);
    all_compo_names.insert("...NoSides..");

    // TrdAllocGrp
    // Group TrdAllocGrp.NoAllocs
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs noAllocs_0_1_0;
      // TrdAllocGrp.NoAllocs
      multiset<string> TrdAllocGrp_NoAllocs_5;
      set_field(noAllocs_0_1_0, FIX::AllocAccount{"STRING_121788988"}, TrdAllocGrp_NoAllocs_5);
      set_field(noAllocs_0_1_0, FIX::AllocAcctIDSource{757226311}, TrdAllocGrp_NoAllocs_5);
      set_field(noAllocs_0_1_0, FIX::AllocClearingFeeIndicator{"STRING_1982629367"}, TrdAllocGrp_NoAllocs_5);
      set_field(noAllocs_0_1_0, FIX::AllocCustomerCapacity{"STRING_1929875557"}, TrdAllocGrp_NoAllocs_5);
      set_field(noAllocs_0_1_0, FIX::AllocMethod{3}, TrdAllocGrp_NoAllocs_5);
      FIX::AllocQty AllocQty_38;
      AllocQty_38.setString("11872377");
set_field(noAllocs_0_1_0, AllocQty_38, TrdAllocGrp_NoAllocs_5);
      set_field(noAllocs_0_1_0, FIX::AllocSettlCurrency{"EUR"}, TrdAllocGrp_NoAllocs_5);
      set_field(noAllocs_0_1_0, FIX::IndividualAllocID{"STRING_2124726470"}, TrdAllocGrp_NoAllocs_5);
      set_field(noAllocs_0_1_0, FIX::SecondaryIndividualAllocID{"STRING_398651097"}, TrdAllocGrp_NoAllocs_5);
      all_values.push_back(TrdAllocGrp_NoAllocs_5);
      all_compo_names.insert("...NoSides...NoAllocs");

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs noNested2PartyIDs_0_0_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_60;
        set_field(noNested2PartyIDs_0_0_2_0, FIX::Nested2PartyID{"STRING_1534017169"}, NestedParties2_NoNested2PartyIDs_60);
        set_field(noNested2PartyIDs_0_0_2_0, FIX::Nested2PartyIDSource{'2'}, NestedParties2_NoNested2PartyIDs_60);
        set_field(noNested2PartyIDs_0_0_2_0, FIX::Nested2PartyRole{1712407318}, NestedParties2_NoNested2PartyIDs_60);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_60);
        all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_131;
          set_field(noNested2PartySubIDs_0_0_0_3_0, FIX::Nested2PartySubID{"STRING_278050886"}, NstdPtys2SubGrp_NoNested2PartySubIDs_131);
          set_field(noNested2PartySubIDs_0_0_0_3_0, FIX::Nested2PartySubIDType{930924440}, NstdPtys2SubGrp_NoNested2PartySubIDs_131);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_131);
          all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_0_2_0.addGroup(noNested2PartySubIDs_0_0_0_3_0);
        }
        noAllocs_0_1_0.addGroup(noNested2PartyIDs_0_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs noNested2PartyIDs_0_0_2_1;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_61;
        set_field(noNested2PartyIDs_0_0_2_1, FIX::Nested2PartyID{"STRING_1385268470"}, NestedParties2_NoNested2PartyIDs_61);
        set_field(noNested2PartyIDs_0_0_2_1, FIX::Nested2PartyIDSource{'9'}, NestedParties2_NoNested2PartyIDs_61);
        set_field(noNested2PartyIDs_0_0_2_1, FIX::Nested2PartyRole{1856946317}, NestedParties2_NoNested2PartyIDs_61);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_61);
        all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_1_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_132;
          set_field(noNested2PartySubIDs_0_0_1_3_0, FIX::Nested2PartySubID{"STRING_994670401"}, NstdPtys2SubGrp_NoNested2PartySubIDs_132);
          set_field(noNested2PartySubIDs_0_0_1_3_0, FIX::Nested2PartySubIDType{1418068437}, NstdPtys2SubGrp_NoNested2PartySubIDs_132);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_132);
          all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_0_2_1.addGroup(noNested2PartySubIDs_0_0_1_3_0);
        }
        noAllocs_0_1_0.addGroup(noNested2PartyIDs_0_0_2_1);
      }
      noSides_0_0.addGroup(noAllocs_0_1_0);
    }
    msg.addGroup(noSides_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportAck::NoSides noSides_0_1;
    // TrdCapRptAckSideGrp.NoSides
    multiset<string> TrdCapRptAckSideGrp_NoSides_1;
    set_field(noSides_0_1, FIX::Account{"STRING_507401608"}, TrdCapRptAckSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::AccountType{6}, TrdCapRptAckSideGrp_NoSides_1);
    FIX::AccruedInterestAmt AccruedInterestAmt_13;
    AccruedInterestAmt_13.setString("15183513");
set_field(noSides_0_1, AccruedInterestAmt_13, TrdCapRptAckSideGrp_NoSides_1);
    FIX::AccruedInterestRate AccruedInterestRate_8;
    AccruedInterestRate_8.setString("99.170000");
set_field(noSides_0_1, AccruedInterestRate_8, TrdCapRptAckSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::AcctIDSource{99}, TrdCapRptAckSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::AggressorIndicator{true}, TrdCapRptAckSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::AllocID{"STRING_1266904121"}, TrdCapRptAckSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::ComplianceID{"STRING_295555929"}, TrdCapRptAckSideGrp_NoSides_1);
    FIX::Concession Concession_8;
    Concession_8.setString("19914258");
set_field(noSides_0_1, Concession_8, TrdCapRptAckSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::CustOrderCapacity{1}, TrdCapRptAckSideGrp_NoSides_1);
    FIX::EndAccruedInterestAmt EndAccruedInterestAmt_13;
    EndAccruedInterestAmt_13.setString("1307016");
set_field(noSides_0_1, EndAccruedInterestAmt_13, TrdCapRptAckSideGrp_NoSides_1);
    FIX::EndCash EndCash_13;
    EndCash_13.setString("17738177");
set_field(noSides_0_1, EndCash_13, TrdCapRptAckSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::ExDate{"LOCALMKTDATE_977320564"}, TrdCapRptAckSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::ExchangeRule{"STRING_1317939367"}, TrdCapRptAckSideGrp_NoSides_1);
    FIX::InterestAtMaturity InterestAtMaturity_8;
    InterestAtMaturity_8.setString("1568092");
set_field(noSides_0_1, InterestAtMaturity_8, TrdCapRptAckSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::NetGrossInd{2}, TrdCapRptAckSideGrp_NoSides_1);
    FIX::NetMoney NetMoney_8;
    NetMoney_8.setString("12951821");
set_field(noSides_0_1, NetMoney_8, TrdCapRptAckSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::NumDaysInterest{555460364}, TrdCapRptAckSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::OddLot{false}, TrdCapRptAckSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::OrderCategory{'1'}, TrdCapRptAckSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::OrderDelay{418733743}, TrdCapRptAckSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::OrderDelayUnit{2}, TrdCapRptAckSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::PositionEffect{'R'}, TrdCapRptAckSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::PreallocMethod{'1'}, TrdCapRptAckSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::ProcessCode{'3'}, TrdCapRptAckSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::RptSeq{734909752}, TrdCapRptAckSideGrp_NoSides_1);
    FIX::SettlCurrAmt SettlCurrAmt_12;
    SettlCurrAmt_12.setString("16363913");
set_field(noSides_0_1, SettlCurrAmt_12, TrdCapRptAckSideGrp_NoSides_1);
    FIX::SettlCurrFxRate SettlCurrFxRate_12;
    SettlCurrFxRate_12.setString("7520968");
set_field(noSides_0_1, SettlCurrFxRate_12, TrdCapRptAckSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::SettlCurrFxRateCalc{'D'}, TrdCapRptAckSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::Side{'F'}, TrdCapRptAckSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::SideCurrency{"CHF"}, TrdCapRptAckSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::SideExecID{"STRING_1549599919"}, TrdCapRptAckSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::SideFillStationCd{"STRING_1541032961"}, TrdCapRptAckSideGrp_NoSides_1);
    FIX::SideGrossTradeAmt SideGrossTradeAmt_3;
    SideGrossTradeAmt_3.setString("17614469");
set_field(noSides_0_1, SideGrossTradeAmt_3, TrdCapRptAckSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::SideLastQty{50513668}, TrdCapRptAckSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::SideMultiLegReportingType{1}, TrdCapRptAckSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::SideReasonCd{"STRING_880867456"}, TrdCapRptAckSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::SideSettlCurrency{"CAN"}, TrdCapRptAckSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::SideTradeReportID{"STRING_757514240"}, TrdCapRptAckSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::SideTrdSubTyp{476771247}, TrdCapRptAckSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::SolicitedFlag{true}, TrdCapRptAckSideGrp_NoSides_1);
    FIX::StartCash StartCash_13;
    StartCash_13.setString("17348348");
set_field(noSides_0_1, StartCash_13, TrdCapRptAckSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::TimeBracket{"STRING_1794710614"}, TrdCapRptAckSideGrp_NoSides_1);
    FIX::TotalTakedown TotalTakedown_8;
    TotalTakedown_8.setString("8902717");
set_field(noSides_0_1, TotalTakedown_8, TrdCapRptAckSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::TradeAllocIndicator{1}, TrdCapRptAckSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::TradeInputDevice{"STRING_942409155"}, TrdCapRptAckSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::TradeInputSource{"STRING_1445732162"}, TrdCapRptAckSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::TradingSessionID{"STRING_2"}, TrdCapRptAckSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::TradingSessionSubID{"STRING_1"}, TrdCapRptAckSideGrp_NoSides_1);
    all_values.push_back(TrdCapRptAckSideGrp_NoSides_1);
    all_compo_names.insert("...NoSides");

    // ClrInstGrp
    // Group ClrInstGrp.NoClearingInstructions
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoClearingInstructions noClearingInstructions_1_1_0;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_15;
      set_field(noClearingInstructions_1_1_0, FIX::ClearingInstruction{7}, ClrInstGrp_NoClearingInstructions_15);
      all_values.push_back(ClrInstGrp_NoClearingInstructions_15);
      all_compo_names.insert("...NoSides...NoClearingInstructions");

      noSides_0_1.addGroup(noClearingInstructions_1_1_0);
    }
    // CommissionData
    multiset<string> CommissionData_21;
    set_field(noSides_0_1, FIX::CommCurrency{"JPY"}, CommissionData_21);
    set_field(noSides_0_1, FIX::CommType{'2'}, CommissionData_21);
    FIX::Commission Commission_24;
    Commission_24.setString("17086758");
set_field(noSides_0_1, Commission_24, CommissionData_21);
    set_field(noSides_0_1, FIX::FundRenewWaiv{'N'}, CommissionData_21);
    all_values.push_back(CommissionData_21);
    all_compo_names.insert("...NoSides.");

    // ContAmtGrp
    // Group ContAmtGrp.NoContAmts
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoContAmts noContAmts_1_1_0;
      // ContAmtGrp.NoContAmts
      multiset<string> ContAmtGrp_NoContAmts_4;
      set_field(noContAmts_1_1_0, FIX::ContAmtCurr{"USD"}, ContAmtGrp_NoContAmts_4);
      set_field(noContAmts_1_1_0, FIX::ContAmtType{6}, ContAmtGrp_NoContAmts_4);
      FIX::ContAmtValue ContAmtValue_4;
      ContAmtValue_4.setString("2103647");
set_field(noContAmts_1_1_0, ContAmtValue_4, ContAmtGrp_NoContAmts_4);
      all_values.push_back(ContAmtGrp_NoContAmts_4);
      all_compo_names.insert("...NoSides...NoContAmts");

      noSides_0_1.addGroup(noContAmts_1_1_0);
    }
    // MiscFeesGrp
    // Group MiscFeesGrp.NoMiscFees
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoMiscFees noMiscFees_1_1_0;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_24;
      FIX::MiscFeeAmt MiscFeeAmt_24;
      MiscFeeAmt_24.setString("1592926");
set_field(noMiscFees_1_1_0, MiscFeeAmt_24, MiscFeesGrp_NoMiscFees_24);
      set_field(noMiscFees_1_1_0, FIX::MiscFeeBasis{1}, MiscFeesGrp_NoMiscFees_24);
      set_field(noMiscFees_1_1_0, FIX::MiscFeeCurr{"GBP"}, MiscFeesGrp_NoMiscFees_24);
      set_field(noMiscFees_1_1_0, FIX::MiscFeeType{"STRING_11"}, MiscFeesGrp_NoMiscFees_24);
      all_values.push_back(MiscFeesGrp_NoMiscFees_24);
      all_compo_names.insert("...NoSides...NoMiscFees");

      noSides_0_1.addGroup(noMiscFees_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoMiscFees noMiscFees_1_1_1;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_25;
      FIX::MiscFeeAmt MiscFeeAmt_25;
      MiscFeeAmt_25.setString("1849521");
set_field(noMiscFees_1_1_1, MiscFeeAmt_25, MiscFeesGrp_NoMiscFees_25);
      set_field(noMiscFees_1_1_1, FIX::MiscFeeBasis{2}, MiscFeesGrp_NoMiscFees_25);
      set_field(noMiscFees_1_1_1, FIX::MiscFeeCurr{"CHF"}, MiscFeesGrp_NoMiscFees_25);
      set_field(noMiscFees_1_1_1, FIX::MiscFeeType{"STRING_10"}, MiscFeesGrp_NoMiscFees_25);
      all_values.push_back(MiscFeesGrp_NoMiscFees_25);
      all_compo_names.insert("...NoSides...NoMiscFees");

      noSides_0_1.addGroup(noMiscFees_1_1_1);
    }
    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoPartyIDs noPartyIDs_1_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_144;
      set_field(noPartyIDs_1_1_0, FIX::PartyID{"STRING_308950361"}, Parties_NoPartyIDs_144);
      set_field(noPartyIDs_1_1_0, FIX::PartyIDSource{'1'}, Parties_NoPartyIDs_144);
      set_field(noPartyIDs_1_1_0, FIX::PartyRole{65}, Parties_NoPartyIDs_144);
      all_values.push_back(Parties_NoPartyIDs_144);
      all_compo_names.insert("...NoSides...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_294;
        set_field(noPartySubIDs_1_0_2_0, FIX::PartySubID{"STRING_1304106401"}, PtysSubGrp_NoPartySubIDs_294);
        set_field(noPartySubIDs_1_0_2_0, FIX::PartySubIDType{9}, PtysSubGrp_NoPartySubIDs_294);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_294);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_295;
        set_field(noPartySubIDs_1_0_2_1, FIX::PartySubID{"STRING_728000734"}, PtysSubGrp_NoPartySubIDs_295);
        set_field(noPartySubIDs_1_0_2_1, FIX::PartySubIDType{19}, PtysSubGrp_NoPartySubIDs_295);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_295);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_296;
        set_field(noPartySubIDs_1_0_2_2, FIX::PartySubID{"STRING_1419815159"}, PtysSubGrp_NoPartySubIDs_296);
        set_field(noPartySubIDs_1_0_2_2, FIX::PartySubIDType{14}, PtysSubGrp_NoPartySubIDs_296);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_296);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_2);
      }
      noSides_0_1.addGroup(noPartyIDs_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoPartyIDs noPartyIDs_1_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_145;
      set_field(noPartyIDs_1_1_1, FIX::PartyID{"STRING_1434855544"}, Parties_NoPartyIDs_145);
      set_field(noPartyIDs_1_1_1, FIX::PartyIDSource{'A'}, Parties_NoPartyIDs_145);
      set_field(noPartyIDs_1_1_1, FIX::PartyRole{67}, Parties_NoPartyIDs_145);
      all_values.push_back(Parties_NoPartyIDs_145);
      all_compo_names.insert("...NoSides...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_297;
        set_field(noPartySubIDs_1_1_2_0, FIX::PartySubID{"STRING_6358124"}, PtysSubGrp_NoPartySubIDs_297);
        set_field(noPartySubIDs_1_1_2_0, FIX::PartySubIDType{19}, PtysSubGrp_NoPartySubIDs_297);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_297);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_1_1_1.addGroup(noPartySubIDs_1_1_2_0);
      }
      noSides_0_1.addGroup(noPartyIDs_1_1_1);
    }
    // SettlDetails
    // Group SettlDetails.NoSettlDetails
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails noSettlDetails_1_1_0;
      // SettlDetails.NoSettlDetails
      multiset<string> SettlDetails_NoSettlDetails_10;
      set_field(noSettlDetails_1_1_0, FIX::SettlObligSource{'2'}, SettlDetails_NoSettlDetails_10);
      all_values.push_back(SettlDetails_NoSettlDetails_10);
      all_compo_names.insert("...NoSides...NoSettlDetails");

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_1_0_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_62;
        set_field(noSettlPartyIDs_1_0_2_0, FIX::SettlPartyID{"STRING_1512151584"}, SettlParties_NoSettlPartyIDs_62);
        set_field(noSettlPartyIDs_1_0_2_0, FIX::SettlPartyIDSource{'9'}, SettlParties_NoSettlPartyIDs_62);
        set_field(noSettlPartyIDs_1_0_2_0, FIX::SettlPartyRole{929729724}, SettlParties_NoSettlPartyIDs_62);
        all_values.push_back(SettlParties_NoSettlPartyIDs_62);
        all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_127;
          set_field(noSettlPartySubIDs_1_0_0_3_0, FIX::SettlPartySubID{"STRING_206389192"}, SettlPtysSubGrp_NoSettlPartySubIDs_127);
          set_field(noSettlPartySubIDs_1_0_0_3_0, FIX::SettlPartySubIDType{1634925289}, SettlPtysSubGrp_NoSettlPartySubIDs_127);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_127);
          all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_1_0_2_0.addGroup(noSettlPartySubIDs_1_0_0_3_0);
        }
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_128;
          set_field(noSettlPartySubIDs_1_0_0_3_1, FIX::SettlPartySubID{"STRING_1535986282"}, SettlPtysSubGrp_NoSettlPartySubIDs_128);
          set_field(noSettlPartySubIDs_1_0_0_3_1, FIX::SettlPartySubIDType{588512752}, SettlPtysSubGrp_NoSettlPartySubIDs_128);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_128);
          all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_1_0_2_0.addGroup(noSettlPartySubIDs_1_0_0_3_1);
        }
        noSettlDetails_1_1_0.addGroup(noSettlPartyIDs_1_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_1_0_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_63;
        set_field(noSettlPartyIDs_1_0_2_1, FIX::SettlPartyID{"STRING_950151446"}, SettlParties_NoSettlPartyIDs_63);
        set_field(noSettlPartyIDs_1_0_2_1, FIX::SettlPartyIDSource{'5'}, SettlParties_NoSettlPartyIDs_63);
        set_field(noSettlPartyIDs_1_0_2_1, FIX::SettlPartyRole{1704098841}, SettlParties_NoSettlPartyIDs_63);
        all_values.push_back(SettlParties_NoSettlPartyIDs_63);
        all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_129;
          set_field(noSettlPartySubIDs_1_0_1_3_0, FIX::SettlPartySubID{"STRING_359176390"}, SettlPtysSubGrp_NoSettlPartySubIDs_129);
          set_field(noSettlPartySubIDs_1_0_1_3_0, FIX::SettlPartySubIDType{1562473080}, SettlPtysSubGrp_NoSettlPartySubIDs_129);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_129);
          all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_1_0_2_1.addGroup(noSettlPartySubIDs_1_0_1_3_0);
        }
        noSettlDetails_1_1_0.addGroup(noSettlPartyIDs_1_0_2_1);
      }
      noSides_0_1.addGroup(noSettlDetails_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails noSettlDetails_1_1_1;
      // SettlDetails.NoSettlDetails
      multiset<string> SettlDetails_NoSettlDetails_11;
      set_field(noSettlDetails_1_1_1, FIX::SettlObligSource{'2'}, SettlDetails_NoSettlDetails_11);
      all_values.push_back(SettlDetails_NoSettlDetails_11);
      all_compo_names.insert("...NoSides...NoSettlDetails");

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_1_1_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_64;
        set_field(noSettlPartyIDs_1_1_2_0, FIX::SettlPartyID{"STRING_719095833"}, SettlParties_NoSettlPartyIDs_64);
        set_field(noSettlPartyIDs_1_1_2_0, FIX::SettlPartyIDSource{'1'}, SettlParties_NoSettlPartyIDs_64);
        set_field(noSettlPartyIDs_1_1_2_0, FIX::SettlPartyRole{191052993}, SettlParties_NoSettlPartyIDs_64);
        all_values.push_back(SettlParties_NoSettlPartyIDs_64);
        all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_1_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_130;
          set_field(noSettlPartySubIDs_1_1_0_3_0, FIX::SettlPartySubID{"STRING_936440673"}, SettlPtysSubGrp_NoSettlPartySubIDs_130);
          set_field(noSettlPartySubIDs_1_1_0_3_0, FIX::SettlPartySubIDType{1892819875}, SettlPtysSubGrp_NoSettlPartySubIDs_130);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_130);
          all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_1_1_2_0.addGroup(noSettlPartySubIDs_1_1_0_3_0);
        }
        noSettlDetails_1_1_1.addGroup(noSettlPartyIDs_1_1_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_1_1_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_65;
        set_field(noSettlPartyIDs_1_1_2_1, FIX::SettlPartyID{"STRING_1027556388"}, SettlParties_NoSettlPartyIDs_65);
        set_field(noSettlPartyIDs_1_1_2_1, FIX::SettlPartyIDSource{'1'}, SettlParties_NoSettlPartyIDs_65);
        set_field(noSettlPartyIDs_1_1_2_1, FIX::SettlPartyRole{1008295361}, SettlParties_NoSettlPartyIDs_65);
        all_values.push_back(SettlParties_NoSettlPartyIDs_65);
        all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_1_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_131;
          set_field(noSettlPartySubIDs_1_1_1_3_0, FIX::SettlPartySubID{"STRING_206095213"}, SettlPtysSubGrp_NoSettlPartySubIDs_131);
          set_field(noSettlPartySubIDs_1_1_1_3_0, FIX::SettlPartySubIDType{1903332203}, SettlPtysSubGrp_NoSettlPartySubIDs_131);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_131);
          all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_1_1_2_1.addGroup(noSettlPartySubIDs_1_1_1_3_0);
        }
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_1_1_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_132;
          set_field(noSettlPartySubIDs_1_1_1_3_1, FIX::SettlPartySubID{"STRING_1941385535"}, SettlPtysSubGrp_NoSettlPartySubIDs_132);
          set_field(noSettlPartySubIDs_1_1_1_3_1, FIX::SettlPartySubIDType{978196638}, SettlPtysSubGrp_NoSettlPartySubIDs_132);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_132);
          all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_1_1_2_1.addGroup(noSettlPartySubIDs_1_1_1_3_1);
        }
        noSettlDetails_1_1_1.addGroup(noSettlPartyIDs_1_1_2_1);
      }
      noSides_0_1.addGroup(noSettlDetails_1_1_1);
    }
    // SideTrdRegTS
    // Group SideTrdRegTS.NoSideTrdRegTS
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoSideTrdRegTS noSideTrdRegTS_1_1_0;
      // SideTrdRegTS.NoSideTrdRegTS
      multiset<string> SideTrdRegTS_NoSideTrdRegTS_3;
      set_field(noSideTrdRegTS_1_1_0, FIX::SideTrdRegTimestamp{FIX::UTCTIMESTAMP(4, 55, 18, 16, 1, 2005)}, SideTrdRegTS_NoSideTrdRegTS_3);
      set_field(noSideTrdRegTS_1_1_0, FIX::SideTrdRegTimestampSrc{"STRING_557008972"}, SideTrdRegTS_NoSideTrdRegTS_3);
      set_field(noSideTrdRegTS_1_1_0, FIX::SideTrdRegTimestampType{81089334}, SideTrdRegTS_NoSideTrdRegTS_3);
      all_values.push_back(SideTrdRegTS_NoSideTrdRegTS_3);
      all_compo_names.insert("...NoSides...NoSideTrdRegTS");

      noSides_0_1.addGroup(noSideTrdRegTS_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoSideTrdRegTS noSideTrdRegTS_1_1_1;
      // SideTrdRegTS.NoSideTrdRegTS
      multiset<string> SideTrdRegTS_NoSideTrdRegTS_4;
      set_field(noSideTrdRegTS_1_1_1, FIX::SideTrdRegTimestamp{FIX::UTCTIMESTAMP(6, 22, 13, 26, 1, 2002)}, SideTrdRegTS_NoSideTrdRegTS_4);
      set_field(noSideTrdRegTS_1_1_1, FIX::SideTrdRegTimestampSrc{"STRING_247709432"}, SideTrdRegTS_NoSideTrdRegTS_4);
      set_field(noSideTrdRegTS_1_1_1, FIX::SideTrdRegTimestampType{790552031}, SideTrdRegTS_NoSideTrdRegTS_4);
      all_values.push_back(SideTrdRegTS_NoSideTrdRegTS_4);
      all_compo_names.insert("...NoSides...NoSideTrdRegTS");

      noSides_0_1.addGroup(noSideTrdRegTS_1_1_1);
    }
    // Stipulations
    // Group Stipulations.NoStipulations
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoStipulations noStipulations_1_1_0;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_59;
      set_field(noStipulations_1_1_0, FIX::StipulationType{"STRING_BGNCON"}, Stipulations_NoStipulations_59);
      set_field(noStipulations_1_1_0, FIX::StipulationValue{"STRING_1726992704"}, Stipulations_NoStipulations_59);
      all_values.push_back(Stipulations_NoStipulations_59);
      all_compo_names.insert("...NoSides...NoStipulations");

      noSides_0_1.addGroup(noStipulations_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoStipulations noStipulations_1_1_1;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_60;
      set_field(noStipulations_1_1_1, FIX::StipulationType{"STRING_INTERNALQTY"}, Stipulations_NoStipulations_60);
      set_field(noStipulations_1_1_1, FIX::StipulationValue{"STRING_867966663"}, Stipulations_NoStipulations_60);
      all_values.push_back(Stipulations_NoStipulations_60);
      all_compo_names.insert("...NoSides...NoStipulations");

      noSides_0_1.addGroup(noStipulations_1_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoStipulations noStipulations_1_1_2;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_61;
      set_field(noStipulations_1_1_2, FIX::StipulationType{"STRING_RATING"}, Stipulations_NoStipulations_61);
      set_field(noStipulations_1_1_2, FIX::StipulationValue{"STRING_715245854"}, Stipulations_NoStipulations_61);
      all_values.push_back(Stipulations_NoStipulations_61);
      all_compo_names.insert("...NoSides...NoStipulations");

      noSides_0_1.addGroup(noStipulations_1_1_2);
    }
    // TradeReportOrderDetail
    multiset<string> TradeReportOrderDetail_3;
    set_field(noSides_0_1, FIX::BookingType{2}, TradeReportOrderDetail_3);
    set_field(noSides_0_1, FIX::ClOrdID{"STRING_2132825007"}, TradeReportOrderDetail_3);
    FIX::CumQty CumQty_6;
    CumQty_6.setString("4710944");
set_field(noSides_0_1, CumQty_6, TradeReportOrderDetail_3);
    set_field(noSides_0_1, FIX::ExecInst{"MULTIPLECHARVALUE_7"}, TradeReportOrderDetail_3);
    set_field(noSides_0_1, FIX::ExpireTime{FIX::UTCTIMESTAMP(12, 7, 45, 3, 3, 2010)}, TradeReportOrderDetail_3);
    FIX::LeavesQty LeavesQty_5;
    LeavesQty_5.setString("1067787");
set_field(noSides_0_1, LeavesQty_5, TradeReportOrderDetail_3);
    set_field(noSides_0_1, FIX::ListID{"STRING_445751759"}, TradeReportOrderDetail_3);
    set_field(noSides_0_1, FIX::LotType{'3'}, TradeReportOrderDetail_3);
    set_field(noSides_0_1, FIX::OrdStatus{'A'}, TradeReportOrderDetail_3);
    set_field(noSides_0_1, FIX::OrdType{'E'}, TradeReportOrderDetail_3);
    set_field(noSides_0_1, FIX::OrderCapacity{'I'}, TradeReportOrderDetail_3);
    set_field(noSides_0_1, FIX::OrderID{"STRING_121686144"}, TradeReportOrderDetail_3);
    set_field(noSides_0_1, FIX::OrderInputDevice{"STRING_701593394"}, TradeReportOrderDetail_3);
    set_field(noSides_0_1, FIX::OrderRestrictions{"MULTIPLECHARVALUE_E"}, TradeReportOrderDetail_3);
    set_field(noSides_0_1, FIX::OrigCustOrderCapacity{2}, TradeReportOrderDetail_3);
    set_field(noSides_0_1, FIX::OrigOrdModTime{FIX::UTCTIMESTAMP(15, 4, 12, 2, 1, 2015)}, TradeReportOrderDetail_3);
    FIX::Price Price_26;
    Price_26.setString("18494743");
set_field(noSides_0_1, Price_26, TradeReportOrderDetail_3);
    set_field(noSides_0_1, FIX::RefOrdIDReason{0}, TradeReportOrderDetail_3);
    set_field(noSides_0_1, FIX::RefOrderID{"STRING_855965279"}, TradeReportOrderDetail_3);
    set_field(noSides_0_1, FIX::RefOrderIDSource{'2'}, TradeReportOrderDetail_3);
    set_field(noSides_0_1, FIX::SecondaryClOrdID{"STRING_1530261254"}, TradeReportOrderDetail_3);
    set_field(noSides_0_1, FIX::SecondaryOrderID{"STRING_1327059688"}, TradeReportOrderDetail_3);
    FIX::StopPx StopPx_11;
    StopPx_11.setString("16670315");
set_field(noSides_0_1, StopPx_11, TradeReportOrderDetail_3);
    set_field(noSides_0_1, FIX::TimeInForce{'3'}, TradeReportOrderDetail_3);
    set_field(noSides_0_1, FIX::TransBkdTime{FIX::UTCTIMESTAMP(17, 29, 7, 7, 4, 2011)}, TradeReportOrderDetail_3);
    all_values.push_back(TradeReportOrderDetail_3);
    all_compo_names.insert("...NoSides.");

    // DisplayInstruction
    multiset<string> DisplayInstruction_11;
    FIX::DisplayHighQty DisplayHighQty_11;
    DisplayHighQty_11.setString("5509860");
set_field(noSides_0_1, DisplayHighQty_11, DisplayInstruction_11);
    FIX::DisplayLowQty DisplayLowQty_11;
    DisplayLowQty_11.setString("8697684");
set_field(noSides_0_1, DisplayLowQty_11, DisplayInstruction_11);
    set_field(noSides_0_1, FIX::DisplayMethod{'3'}, DisplayInstruction_11);
    FIX::DisplayMinIncr DisplayMinIncr_11;
    DisplayMinIncr_11.setString("9450704");
set_field(noSides_0_1, DisplayMinIncr_11, DisplayInstruction_11);
    FIX::DisplayQty DisplayQty_11;
    DisplayQty_11.setString("870591");
set_field(noSides_0_1, DisplayQty_11, DisplayInstruction_11);
    set_field(noSides_0_1, FIX::DisplayWhen{'1'}, DisplayInstruction_11);
    FIX::RefreshQty RefreshQty_11;
    RefreshQty_11.setString("16466638");
set_field(noSides_0_1, RefreshQty_11, DisplayInstruction_11);
    FIX::SecondaryDisplayQty SecondaryDisplayQty_11;
    SecondaryDisplayQty_11.setString("9804471");
set_field(noSides_0_1, SecondaryDisplayQty_11, DisplayInstruction_11);
    all_values.push_back(DisplayInstruction_11);
    all_compo_names.insert("...NoSides..");

    // OrderQtyData
    multiset<string> OrderQtyData_25;
    FIX::CashOrderQty CashOrderQty_25;
    CashOrderQty_25.setString("11522233");
set_field(noSides_0_1, CashOrderQty_25, OrderQtyData_25);
    FIX::OrderPercent OrderPercent_25;
    OrderPercent_25.setString("85.120000");
set_field(noSides_0_1, OrderPercent_25, OrderQtyData_25);
    FIX::OrderQty OrderQty_33;
    OrderQty_33.setString("21215445");
set_field(noSides_0_1, OrderQty_33, OrderQtyData_25);
    set_field(noSides_0_1, FIX::RoundingDirection{'1'}, OrderQtyData_25);
    FIX::RoundingModulus RoundingModulus_25;
    RoundingModulus_25.setString("4051037");
set_field(noSides_0_1, RoundingModulus_25, OrderQtyData_25);
    all_values.push_back(OrderQtyData_25);
    all_compo_names.insert("...NoSides..");

    // TrdAllocGrp
    // Group TrdAllocGrp.NoAllocs
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs noAllocs_1_1_0;
      // TrdAllocGrp.NoAllocs
      multiset<string> TrdAllocGrp_NoAllocs_6;
      set_field(noAllocs_1_1_0, FIX::AllocAccount{"STRING_809094516"}, TrdAllocGrp_NoAllocs_6);
      set_field(noAllocs_1_1_0, FIX::AllocAcctIDSource{545823221}, TrdAllocGrp_NoAllocs_6);
      set_field(noAllocs_1_1_0, FIX::AllocClearingFeeIndicator{"STRING_657559328"}, TrdAllocGrp_NoAllocs_6);
      set_field(noAllocs_1_1_0, FIX::AllocCustomerCapacity{"STRING_206530762"}, TrdAllocGrp_NoAllocs_6);
      set_field(noAllocs_1_1_0, FIX::AllocMethod{2}, TrdAllocGrp_NoAllocs_6);
      FIX::AllocQty AllocQty_39;
      AllocQty_39.setString("14451195");
set_field(noAllocs_1_1_0, AllocQty_39, TrdAllocGrp_NoAllocs_6);
      set_field(noAllocs_1_1_0, FIX::AllocSettlCurrency{"USD"}, TrdAllocGrp_NoAllocs_6);
      set_field(noAllocs_1_1_0, FIX::IndividualAllocID{"STRING_964667468"}, TrdAllocGrp_NoAllocs_6);
      set_field(noAllocs_1_1_0, FIX::SecondaryIndividualAllocID{"STRING_2083107620"}, TrdAllocGrp_NoAllocs_6);
      all_values.push_back(TrdAllocGrp_NoAllocs_6);
      all_compo_names.insert("...NoSides...NoAllocs");

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs noNested2PartyIDs_1_0_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_62;
        set_field(noNested2PartyIDs_1_0_2_0, FIX::Nested2PartyID{"STRING_522256613"}, NestedParties2_NoNested2PartyIDs_62);
        set_field(noNested2PartyIDs_1_0_2_0, FIX::Nested2PartyIDSource{'1'}, NestedParties2_NoNested2PartyIDs_62);
        set_field(noNested2PartyIDs_1_0_2_0, FIX::Nested2PartyRole{433562960}, NestedParties2_NoNested2PartyIDs_62);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_62);
        all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_133;
          set_field(noNested2PartySubIDs_1_0_0_3_0, FIX::Nested2PartySubID{"STRING_626202828"}, NstdPtys2SubGrp_NoNested2PartySubIDs_133);
          set_field(noNested2PartySubIDs_1_0_0_3_0, FIX::Nested2PartySubIDType{2028103123}, NstdPtys2SubGrp_NoNested2PartySubIDs_133);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_133);
          all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_1_0_2_0.addGroup(noNested2PartySubIDs_1_0_0_3_0);
        }
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_0_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_134;
          set_field(noNested2PartySubIDs_1_0_0_3_1, FIX::Nested2PartySubID{"STRING_1178476994"}, NstdPtys2SubGrp_NoNested2PartySubIDs_134);
          set_field(noNested2PartySubIDs_1_0_0_3_1, FIX::Nested2PartySubIDType{1495971273}, NstdPtys2SubGrp_NoNested2PartySubIDs_134);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_134);
          all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_1_0_2_0.addGroup(noNested2PartySubIDs_1_0_0_3_1);
        }
        noAllocs_1_1_0.addGroup(noNested2PartyIDs_1_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs noNested2PartyIDs_1_0_2_1;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_63;
        set_field(noNested2PartyIDs_1_0_2_1, FIX::Nested2PartyID{"STRING_1663027689"}, NestedParties2_NoNested2PartyIDs_63);
        set_field(noNested2PartyIDs_1_0_2_1, FIX::Nested2PartyIDSource{'2'}, NestedParties2_NoNested2PartyIDs_63);
        set_field(noNested2PartyIDs_1_0_2_1, FIX::Nested2PartyRole{1583030455}, NestedParties2_NoNested2PartyIDs_63);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_63);
        all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_1_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_135;
          set_field(noNested2PartySubIDs_1_0_1_3_0, FIX::Nested2PartySubID{"STRING_1622727643"}, NstdPtys2SubGrp_NoNested2PartySubIDs_135);
          set_field(noNested2PartySubIDs_1_0_1_3_0, FIX::Nested2PartySubIDType{415993972}, NstdPtys2SubGrp_NoNested2PartySubIDs_135);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_135);
          all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_1_0_2_1.addGroup(noNested2PartySubIDs_1_0_1_3_0);
        }
        noAllocs_1_1_0.addGroup(noNested2PartyIDs_1_0_2_1);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs noNested2PartyIDs_1_0_2_2;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_64;
        set_field(noNested2PartyIDs_1_0_2_2, FIX::Nested2PartyID{"STRING_424378123"}, NestedParties2_NoNested2PartyIDs_64);
        set_field(noNested2PartyIDs_1_0_2_2, FIX::Nested2PartyIDSource{'1'}, NestedParties2_NoNested2PartyIDs_64);
        set_field(noNested2PartyIDs_1_0_2_2, FIX::Nested2PartyRole{390054904}, NestedParties2_NoNested2PartyIDs_64);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_64);
        all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_2_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_136;
          set_field(noNested2PartySubIDs_1_0_2_3_0, FIX::Nested2PartySubID{"STRING_1999166304"}, NstdPtys2SubGrp_NoNested2PartySubIDs_136);
          set_field(noNested2PartySubIDs_1_0_2_3_0, FIX::Nested2PartySubIDType{1345623527}, NstdPtys2SubGrp_NoNested2PartySubIDs_136);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_136);
          all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_1_0_2_2.addGroup(noNested2PartySubIDs_1_0_2_3_0);
        }
        noAllocs_1_1_0.addGroup(noNested2PartyIDs_1_0_2_2);
      }
      noSides_0_1.addGroup(noAllocs_1_1_0);
    }
    msg.addGroup(noSides_0_1);
  }
  // TrdInstrmtLegGrp
  // Group TrdInstrmtLegGrp.NoLegs
  {
    FIX50SP2::TradeCaptureReportAck::NoLegs noLegs_0_0;
    // TrdInstrmtLegGrp.NoLegs
    multiset<string> TrdInstrmtLegGrp_NoLegs_1;
    FIX::LegCalculatedCcyLastQty LegCalculatedCcyLastQty_2;
    LegCalculatedCcyLastQty_2.setString("3975058");
set_field(noLegs_0_0, LegCalculatedCcyLastQty_2, TrdInstrmtLegGrp_NoLegs_1);
    set_field(noLegs_0_0, FIX::LegCoveredOrUncovered{2003182855}, TrdInstrmtLegGrp_NoLegs_1);
    FIX::LegCurrencyRatio LegCurrencyRatio_6;
    LegCurrencyRatio_6.setString("4834241");
set_field(noLegs_0_0, LegCurrencyRatio_6, TrdInstrmtLegGrp_NoLegs_1);
    FIX::LegDividendYield LegDividendYield_6;
    LegDividendYield_6.setString("43.780000");
set_field(noLegs_0_0, LegDividendYield_6, TrdInstrmtLegGrp_NoLegs_1);
    set_field(noLegs_0_0, FIX::LegExecInst{"MULTIPLECHARVALUE_1300818738"}, TrdInstrmtLegGrp_NoLegs_1);
    FIX::LegGrossTradeAmt LegGrossTradeAmt_2;
    LegGrossTradeAmt_2.setString("727325");
set_field(noLegs_0_0, LegGrossTradeAmt_2, TrdInstrmtLegGrp_NoLegs_1);
    FIX::LegLastForwardPoints LegLastForwardPoints_2;
    LegLastForwardPoints_2.setString("2331752");
set_field(noLegs_0_0, LegLastForwardPoints_2, TrdInstrmtLegGrp_NoLegs_1);
    FIX::LegLastPx LegLastPx_2;
    LegLastPx_2.setString("1180025");
set_field(noLegs_0_0, LegLastPx_2, TrdInstrmtLegGrp_NoLegs_1);
    FIX::LegLastQty LegLastQty_2;
    LegLastQty_2.setString("83565");
set_field(noLegs_0_0, LegLastQty_2, TrdInstrmtLegGrp_NoLegs_1);
    set_field(noLegs_0_0, FIX::LegNumber{1326460431}, TrdInstrmtLegGrp_NoLegs_1);
    set_field(noLegs_0_0, FIX::LegPositionEffect{'6'}, TrdInstrmtLegGrp_NoLegs_1);
    FIX::LegQty LegQty_17;
    LegQty_17.setString("10159411");
set_field(noLegs_0_0, LegQty_17, TrdInstrmtLegGrp_NoLegs_1);
    set_field(noLegs_0_0, FIX::LegRefID{"STRING_1760023391"}, TrdInstrmtLegGrp_NoLegs_1);
    set_field(noLegs_0_0, FIX::LegReportID{"STRING_1267750095"}, TrdInstrmtLegGrp_NoLegs_1);
    set_field(noLegs_0_0, FIX::LegSettlCurrency{"CAN"}, TrdInstrmtLegGrp_NoLegs_1);
    set_field(noLegs_0_0, FIX::LegSettlDate{"LOCALMKTDATE_298743441"}, TrdInstrmtLegGrp_NoLegs_1);
    set_field(noLegs_0_0, FIX::LegSettlType{'9'}, TrdInstrmtLegGrp_NoLegs_1);
    set_field(noLegs_0_0, FIX::LegSwapType{1}, TrdInstrmtLegGrp_NoLegs_1);
    FIX::LegVolatility LegVolatility_6;
    LegVolatility_6.setString("2748072");
set_field(noLegs_0_0, LegVolatility_6, TrdInstrmtLegGrp_NoLegs_1);
    all_values.push_back(TrdInstrmtLegGrp_NoLegs_1);
    all_compo_names.insert("...NoLegs");

    // InstrumentLeg
    multiset<string> InstrumentLeg_115;
    set_field(noLegs_0_0, FIX::EncodedLegIssuer{"DATA_426178372"}, InstrumentLeg_115);
    set_field(noLegs_0_0, FIX::EncodedLegIssuerLen{428341660}, InstrumentLeg_115);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDesc{"DATA_1897534882"}, InstrumentLeg_115);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDescLen{842172344}, InstrumentLeg_115);
    set_field(noLegs_0_0, FIX::LegCFICode{"STRING_852719784"}, InstrumentLeg_115);
    FIX::LegContractMultiplier LegContractMultiplier_115;
    LegContractMultiplier_115.setString("13441137");
set_field(noLegs_0_0, LegContractMultiplier_115, InstrumentLeg_115);
    set_field(noLegs_0_0, FIX::LegContractMultiplierUnit{1232227249}, InstrumentLeg_115);
    set_field(noLegs_0_0, FIX::LegContractSettlMonth{"MONTHYEAR_320518675"}, InstrumentLeg_115);
    set_field(noLegs_0_0, FIX::LegCountryOfIssue{"COUNTRY_1195796398"}, InstrumentLeg_115);
    set_field(noLegs_0_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_430367128"}, InstrumentLeg_115);
    FIX::LegCouponRate LegCouponRate_115;
    LegCouponRate_115.setString("20.820000");
set_field(noLegs_0_0, LegCouponRate_115, InstrumentLeg_115);
    set_field(noLegs_0_0, FIX::LegCreditRating{"STRING_1593302276"}, InstrumentLeg_115);
    set_field(noLegs_0_0, FIX::LegCurrency{"EUR"}, InstrumentLeg_115);
    set_field(noLegs_0_0, FIX::LegDatedDate{"LOCALMKTDATE_1245113007"}, InstrumentLeg_115);
    set_field(noLegs_0_0, FIX::LegExerciseStyle{1586885073}, InstrumentLeg_115);
    FIX::LegFactor LegFactor_115;
    LegFactor_115.setString("11535687");
set_field(noLegs_0_0, LegFactor_115, InstrumentLeg_115);
    set_field(noLegs_0_0, FIX::LegFlowScheduleType{1478288278}, InstrumentLeg_115);
    set_field(noLegs_0_0, FIX::LegInstrRegistry{"STRING_1704887631"}, InstrumentLeg_115);
    set_field(noLegs_0_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1161925299"}, InstrumentLeg_115);
    set_field(noLegs_0_0, FIX::LegIssueDate{"LOCALMKTDATE_657265061"}, InstrumentLeg_115);
    set_field(noLegs_0_0, FIX::LegIssuer{"STRING_197663154"}, InstrumentLeg_115);
    set_field(noLegs_0_0, FIX::LegLocaleOfIssue{"STRING_30382762"}, InstrumentLeg_115);
    set_field(noLegs_0_0, FIX::LegMaturityDate{"LOCALMKTDATE_269804805"}, InstrumentLeg_115);
    set_field(noLegs_0_0, FIX::LegMaturityMonthYear{"MONTHYEAR_1465413249"}, InstrumentLeg_115);
    set_field(noLegs_0_0, FIX::LegMaturityTime{"TZTIMEONLY_1672526701"}, InstrumentLeg_115);
    set_field(noLegs_0_0, FIX::LegOptAttribute{'1'}, InstrumentLeg_115);
    FIX::LegOptionRatio LegOptionRatio_115;
    LegOptionRatio_115.setString("17641566");
set_field(noLegs_0_0, LegOptionRatio_115, InstrumentLeg_115);
    set_field(noLegs_0_0, FIX::LegPool{"STRING_515674618"}, InstrumentLeg_115);
    set_field(noLegs_0_0, FIX::LegPriceUnitOfMeasure{"STRING_919150932"}, InstrumentLeg_115);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_115;
    LegPriceUnitOfMeasureQty_115.setString("20389639");
set_field(noLegs_0_0, LegPriceUnitOfMeasureQty_115, InstrumentLeg_115);
    set_field(noLegs_0_0, FIX::LegProduct{941852990}, InstrumentLeg_115);
    set_field(noLegs_0_0, FIX::LegPutOrCall{1347492593}, InstrumentLeg_115);
    FIX::LegRatioQty LegRatioQty_115;
    LegRatioQty_115.setString("17890151");
set_field(noLegs_0_0, LegRatioQty_115, InstrumentLeg_115);
    set_field(noLegs_0_0, FIX::LegRedemptionDate{"LOCALMKTDATE_1784025334"}, InstrumentLeg_115);
    set_field(noLegs_0_0, FIX::LegRepoCollateralSecurityType{"STRING_52728729"}, InstrumentLeg_115);
    FIX::LegRepurchaseRate LegRepurchaseRate_115;
    LegRepurchaseRate_115.setString("52.570000");
set_field(noLegs_0_0, LegRepurchaseRate_115, InstrumentLeg_115);
    set_field(noLegs_0_0, FIX::LegRepurchaseTerm{868768935}, InstrumentLeg_115);
    set_field(noLegs_0_0, FIX::LegSecurityDesc{"STRING_373247404"}, InstrumentLeg_115);
    set_field(noLegs_0_0, FIX::LegSecurityExchange{"EXCHANGE_33958007"}, InstrumentLeg_115);
    set_field(noLegs_0_0, FIX::LegSecurityID{"STRING_1299136063"}, InstrumentLeg_115);
    set_field(noLegs_0_0, FIX::LegSecurityIDSource{"STRING_970659486"}, InstrumentLeg_115);
    set_field(noLegs_0_0, FIX::LegSecuritySubType{"STRING_1627260284"}, InstrumentLeg_115);
    set_field(noLegs_0_0, FIX::LegSecurityType{"STRING_1585202399"}, InstrumentLeg_115);
    set_field(noLegs_0_0, FIX::LegSide{'2'}, InstrumentLeg_115);
    set_field(noLegs_0_0, FIX::LegStateOrProvinceOfIssue{"STRING_724889643"}, InstrumentLeg_115);
    set_field(noLegs_0_0, FIX::LegStrikeCurrency{"CAN"}, InstrumentLeg_115);
    FIX::LegStrikePrice LegStrikePrice_115;
    LegStrikePrice_115.setString("556942");
set_field(noLegs_0_0, LegStrikePrice_115, InstrumentLeg_115);
    set_field(noLegs_0_0, FIX::LegSymbol{"STRING_582007808"}, InstrumentLeg_115);
    set_field(noLegs_0_0, FIX::LegSymbolSfx{"STRING_72022530"}, InstrumentLeg_115);
    set_field(noLegs_0_0, FIX::LegTimeUnit{"STRING_712959334"}, InstrumentLeg_115);
    set_field(noLegs_0_0, FIX::LegUnitOfMeasure{"STRING_779670962"}, InstrumentLeg_115);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_115;
    LegUnitOfMeasureQty_115.setString("1024052");
set_field(noLegs_0_0, LegUnitOfMeasureQty_115, InstrumentLeg_115);
    all_values.push_back(InstrumentLeg_115);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::TradeCaptureReportAck::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_240;
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltID{"STRING_97600564"}, LegSecAltIDGrp_NoLegSecurityAltID_240);
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltIDSource{"STRING_1774931994"}, LegSecAltIDGrp_NoLegSecurityAltID_240);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_240);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_241;
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltID{"STRING_745728163"}, LegSecAltIDGrp_NoLegSecurityAltID_241);
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltIDSource{"STRING_1861757254"}, LegSecAltIDGrp_NoLegSecurityAltID_241);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_241);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::TradeCaptureReportAck::NoLegs::NoLegStipulations noLegStipulations_0_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_50;
      set_field(noLegStipulations_0_1_0, FIX::LegStipulationType{"STRING_1664879096"}, LegStipulations_NoLegStipulations_50);
      set_field(noLegStipulations_0_1_0, FIX::LegStipulationValue{"STRING_1753237535"}, LegStipulations_NoLegStipulations_50);
      all_values.push_back(LegStipulations_NoLegStipulations_50);
      all_compo_names.insert("...NoLegs...NoLegStipulations");

      noLegs_0_0.addGroup(noLegStipulations_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoLegs::NoLegStipulations noLegStipulations_0_1_1;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_51;
      set_field(noLegStipulations_0_1_1, FIX::LegStipulationType{"STRING_1084975954"}, LegStipulations_NoLegStipulations_51);
      set_field(noLegStipulations_0_1_1, FIX::LegStipulationValue{"STRING_864888041"}, LegStipulations_NoLegStipulations_51);
      all_values.push_back(LegStipulations_NoLegStipulations_51);
      all_compo_names.insert("...NoLegs...NoLegStipulations");

      noLegs_0_0.addGroup(noLegStipulations_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoLegs::NoLegStipulations noLegStipulations_0_1_2;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_52;
      set_field(noLegStipulations_0_1_2, FIX::LegStipulationType{"STRING_1394769050"}, LegStipulations_NoLegStipulations_52);
      set_field(noLegStipulations_0_1_2, FIX::LegStipulationValue{"STRING_721517641"}, LegStipulations_NoLegStipulations_52);
      all_values.push_back(LegStipulations_NoLegStipulations_52);
      all_compo_names.insert("...NoLegs...NoLegStipulations");

      noLegs_0_0.addGroup(noLegStipulations_0_1_2);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::TradeCaptureReportAck::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_132;
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyID{"STRING_232930659"}, NestedParties_NoNestedPartyIDs_132);
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_132);
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyRole{1290864174}, NestedParties_NoNestedPartyIDs_132);
      all_values.push_back(NestedParties_NoNestedPartyIDs_132);
      all_compo_names.insert("...NoLegs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_265;
        set_field(noNestedPartySubIDs_0_0_2_0, FIX::NestedPartySubID{"STRING_741938992"}, NstdPtysSubGrp_NoNestedPartySubIDs_265);
        set_field(noNestedPartySubIDs_0_0_2_0, FIX::NestedPartySubIDType{114040012}, NstdPtysSubGrp_NoNestedPartySubIDs_265);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_265);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      noLegs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_133;
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyID{"STRING_1894148951"}, NestedParties_NoNestedPartyIDs_133);
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_133);
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyRole{18052101}, NestedParties_NoNestedPartyIDs_133);
      all_values.push_back(NestedParties_NoNestedPartyIDs_133);
      all_compo_names.insert("...NoLegs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_266;
        set_field(noNestedPartySubIDs_0_1_2_0, FIX::NestedPartySubID{"STRING_1204261567"}, NstdPtysSubGrp_NoNestedPartySubIDs_266);
        set_field(noNestedPartySubIDs_0_1_2_0, FIX::NestedPartySubIDType{1075632980}, NstdPtysSubGrp_NoNestedPartySubIDs_266);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_266);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      noLegs_0_0.addGroup(noNestedPartyIDs_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_134;
      set_field(noNestedPartyIDs_0_1_2, FIX::NestedPartyID{"STRING_527249219"}, NestedParties_NoNestedPartyIDs_134);
      set_field(noNestedPartyIDs_0_1_2, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_134);
      set_field(noNestedPartyIDs_0_1_2, FIX::NestedPartyRole{1147655511}, NestedParties_NoNestedPartyIDs_134);
      all_values.push_back(NestedParties_NoNestedPartyIDs_134);
      all_compo_names.insert("...NoLegs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_267;
        set_field(noNestedPartySubIDs_0_2_2_0, FIX::NestedPartySubID{"STRING_418456690"}, NstdPtysSubGrp_NoNestedPartySubIDs_267);
        set_field(noNestedPartySubIDs_0_2_2_0, FIX::NestedPartySubIDType{1250060804}, NstdPtysSubGrp_NoNestedPartySubIDs_267);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_267);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_2.addGroup(noNestedPartySubIDs_0_2_2_0);
      }
      noLegs_0_0.addGroup(noNestedPartyIDs_0_1_2);
    }
    // TradeCapLegUnderlyingsGrp
    // Group TradeCapLegUnderlyingsGrp.NoOfLegUnderlyings
    {
      FIX50SP2::TradeCaptureReportAck::NoLegs::NoOfLegUnderlyings noOfLegUnderlyings_0_1_0;
      // TradeCapLegUnderlyingsGrp.NoOfLegUnderlyings
      // UnderlyingLegInstrument
      multiset<string> UnderlyingLegInstrument_1;
      set_field(noOfLegUnderlyings_0_1_0, FIX::UnderlyingLegCFICode{"STRING_516057254"}, UnderlyingLegInstrument_1);
      set_field(noOfLegUnderlyings_0_1_0, FIX::UnderlyingLegMaturityDate{"LOCALMKTDATE_877509150"}, UnderlyingLegInstrument_1);
      set_field(noOfLegUnderlyings_0_1_0, FIX::UnderlyingLegMaturityMonthYear{"MONTHYEAR_821217208"}, UnderlyingLegInstrument_1);
      set_field(noOfLegUnderlyings_0_1_0, FIX::UnderlyingLegMaturityTime{"TZTIMEONLY_230330860"}, UnderlyingLegInstrument_1);
      set_field(noOfLegUnderlyings_0_1_0, FIX::UnderlyingLegOptAttribute{'1'}, UnderlyingLegInstrument_1);
      set_field(noOfLegUnderlyings_0_1_0, FIX::UnderlyingLegPutOrCall{338612656}, UnderlyingLegInstrument_1);
      set_field(noOfLegUnderlyings_0_1_0, FIX::UnderlyingLegSecurityDesc{"STRING_1983568396"}, UnderlyingLegInstrument_1);
      set_field(noOfLegUnderlyings_0_1_0, FIX::UnderlyingLegSecurityExchange{"STRING_2105608069"}, UnderlyingLegInstrument_1);
      set_field(noOfLegUnderlyings_0_1_0, FIX::UnderlyingLegSecurityID{"STRING_1203500697"}, UnderlyingLegInstrument_1);
      set_field(noOfLegUnderlyings_0_1_0, FIX::UnderlyingLegSecurityIDSource{"STRING_1230853798"}, UnderlyingLegInstrument_1);
      set_field(noOfLegUnderlyings_0_1_0, FIX::UnderlyingLegSecuritySubType{"STRING_679642062"}, UnderlyingLegInstrument_1);
      set_field(noOfLegUnderlyings_0_1_0, FIX::UnderlyingLegSecurityType{"STRING_2121117467"}, UnderlyingLegInstrument_1);
      FIX::UnderlyingLegStrikePrice UnderlyingLegStrikePrice_1;
      UnderlyingLegStrikePrice_1.setString("14637844");
set_field(noOfLegUnderlyings_0_1_0, UnderlyingLegStrikePrice_1, UnderlyingLegInstrument_1);
      set_field(noOfLegUnderlyings_0_1_0, FIX::UnderlyingLegSymbol{"STRING_122444991"}, UnderlyingLegInstrument_1);
      set_field(noOfLegUnderlyings_0_1_0, FIX::UnderlyingLegSymbolSfx{"STRING_1264497993"}, UnderlyingLegInstrument_1);
      all_values.push_back(UnderlyingLegInstrument_1);
      all_compo_names.insert("...NoLegs...NoOfLegUnderlyings.");

      // UnderlyingLegSecurityAltIDGrp
      // Group UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
      {
        FIX50SP2::TradeCaptureReportAck::NoLegs::NoOfLegUnderlyings::NoUnderlyingLegSecurityAltID noUnderlyingLegSecurityAltID_0_0_2_0;
        // UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
        multiset<string> UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_2;
        set_field(noUnderlyingLegSecurityAltID_0_0_2_0, FIX::UnderlyingLegSecurityAltID{"STRING_864383983"}, UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_2);
        set_field(noUnderlyingLegSecurityAltID_0_0_2_0, FIX::UnderlyingLegSecurityAltIDSource{"STRING_1378538005"}, UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_2);
        all_values.push_back(UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_2);
        all_compo_names.insert("...NoLegs...NoOfLegUnderlyings....NoUnderlyingLegSecurityAltID");

        noOfLegUnderlyings_0_1_0.addGroup(noUnderlyingLegSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoLegs::NoOfLegUnderlyings::NoUnderlyingLegSecurityAltID noUnderlyingLegSecurityAltID_0_0_2_1;
        // UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
        multiset<string> UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_3;
        set_field(noUnderlyingLegSecurityAltID_0_0_2_1, FIX::UnderlyingLegSecurityAltID{"STRING_1477338428"}, UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_3);
        set_field(noUnderlyingLegSecurityAltID_0_0_2_1, FIX::UnderlyingLegSecurityAltIDSource{"STRING_1044041726"}, UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_3);
        all_values.push_back(UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_3);
        all_compo_names.insert("...NoLegs...NoOfLegUnderlyings....NoUnderlyingLegSecurityAltID");

        noOfLegUnderlyings_0_1_0.addGroup(noUnderlyingLegSecurityAltID_0_0_2_1);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoLegs::NoOfLegUnderlyings::NoUnderlyingLegSecurityAltID noUnderlyingLegSecurityAltID_0_0_2_2;
        // UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
        multiset<string> UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_4;
        set_field(noUnderlyingLegSecurityAltID_0_0_2_2, FIX::UnderlyingLegSecurityAltID{"STRING_1396590107"}, UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_4);
        set_field(noUnderlyingLegSecurityAltID_0_0_2_2, FIX::UnderlyingLegSecurityAltIDSource{"STRING_1948893374"}, UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_4);
        all_values.push_back(UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_4);
        all_compo_names.insert("...NoLegs...NoOfLegUnderlyings....NoUnderlyingLegSecurityAltID");

        noOfLegUnderlyings_0_1_0.addGroup(noUnderlyingLegSecurityAltID_0_0_2_2);
      }
      noLegs_0_0.addGroup(noOfLegUnderlyings_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportAck::NoLegs noLegs_0_1;
    // TrdInstrmtLegGrp.NoLegs
    multiset<string> TrdInstrmtLegGrp_NoLegs_2;
    FIX::LegCalculatedCcyLastQty LegCalculatedCcyLastQty_3;
    LegCalculatedCcyLastQty_3.setString("1008196");
set_field(noLegs_0_1, LegCalculatedCcyLastQty_3, TrdInstrmtLegGrp_NoLegs_2);
    set_field(noLegs_0_1, FIX::LegCoveredOrUncovered{324739439}, TrdInstrmtLegGrp_NoLegs_2);
    FIX::LegCurrencyRatio LegCurrencyRatio_7;
    LegCurrencyRatio_7.setString("3286589");
set_field(noLegs_0_1, LegCurrencyRatio_7, TrdInstrmtLegGrp_NoLegs_2);
    FIX::LegDividendYield LegDividendYield_7;
    LegDividendYield_7.setString("90.210000");
set_field(noLegs_0_1, LegDividendYield_7, TrdInstrmtLegGrp_NoLegs_2);
    set_field(noLegs_0_1, FIX::LegExecInst{"MULTIPLECHARVALUE_1472394950"}, TrdInstrmtLegGrp_NoLegs_2);
    FIX::LegGrossTradeAmt LegGrossTradeAmt_3;
    LegGrossTradeAmt_3.setString("15688674");
set_field(noLegs_0_1, LegGrossTradeAmt_3, TrdInstrmtLegGrp_NoLegs_2);
    FIX::LegLastForwardPoints LegLastForwardPoints_3;
    LegLastForwardPoints_3.setString("1580620");
set_field(noLegs_0_1, LegLastForwardPoints_3, TrdInstrmtLegGrp_NoLegs_2);
    FIX::LegLastPx LegLastPx_3;
    LegLastPx_3.setString("5749721");
set_field(noLegs_0_1, LegLastPx_3, TrdInstrmtLegGrp_NoLegs_2);
    FIX::LegLastQty LegLastQty_3;
    LegLastQty_3.setString("16443565");
set_field(noLegs_0_1, LegLastQty_3, TrdInstrmtLegGrp_NoLegs_2);
    set_field(noLegs_0_1, FIX::LegNumber{674119317}, TrdInstrmtLegGrp_NoLegs_2);
    set_field(noLegs_0_1, FIX::LegPositionEffect{'1'}, TrdInstrmtLegGrp_NoLegs_2);
    FIX::LegQty LegQty_18;
    LegQty_18.setString("3180901");
set_field(noLegs_0_1, LegQty_18, TrdInstrmtLegGrp_NoLegs_2);
    set_field(noLegs_0_1, FIX::LegRefID{"STRING_904450177"}, TrdInstrmtLegGrp_NoLegs_2);
    set_field(noLegs_0_1, FIX::LegReportID{"STRING_325629724"}, TrdInstrmtLegGrp_NoLegs_2);
    set_field(noLegs_0_1, FIX::LegSettlCurrency{"CHF"}, TrdInstrmtLegGrp_NoLegs_2);
    set_field(noLegs_0_1, FIX::LegSettlDate{"LOCALMKTDATE_283754145"}, TrdInstrmtLegGrp_NoLegs_2);
    set_field(noLegs_0_1, FIX::LegSettlType{'1'}, TrdInstrmtLegGrp_NoLegs_2);
    set_field(noLegs_0_1, FIX::LegSwapType{1}, TrdInstrmtLegGrp_NoLegs_2);
    FIX::LegVolatility LegVolatility_7;
    LegVolatility_7.setString("9633962");
set_field(noLegs_0_1, LegVolatility_7, TrdInstrmtLegGrp_NoLegs_2);
    all_values.push_back(TrdInstrmtLegGrp_NoLegs_2);
    all_compo_names.insert("...NoLegs");

    // InstrumentLeg
    multiset<string> InstrumentLeg_116;
    set_field(noLegs_0_1, FIX::EncodedLegIssuer{"DATA_1833837277"}, InstrumentLeg_116);
    set_field(noLegs_0_1, FIX::EncodedLegIssuerLen{1287689534}, InstrumentLeg_116);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDesc{"DATA_1085841199"}, InstrumentLeg_116);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDescLen{950851623}, InstrumentLeg_116);
    set_field(noLegs_0_1, FIX::LegCFICode{"STRING_870879011"}, InstrumentLeg_116);
    FIX::LegContractMultiplier LegContractMultiplier_116;
    LegContractMultiplier_116.setString("19502251");
set_field(noLegs_0_1, LegContractMultiplier_116, InstrumentLeg_116);
    set_field(noLegs_0_1, FIX::LegContractMultiplierUnit{181905980}, InstrumentLeg_116);
    set_field(noLegs_0_1, FIX::LegContractSettlMonth{"MONTHYEAR_200733791"}, InstrumentLeg_116);
    set_field(noLegs_0_1, FIX::LegCountryOfIssue{"COUNTRY_846783260"}, InstrumentLeg_116);
    set_field(noLegs_0_1, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1578496087"}, InstrumentLeg_116);
    FIX::LegCouponRate LegCouponRate_116;
    LegCouponRate_116.setString("35.170000");
set_field(noLegs_0_1, LegCouponRate_116, InstrumentLeg_116);
    set_field(noLegs_0_1, FIX::LegCreditRating{"STRING_947602905"}, InstrumentLeg_116);
    set_field(noLegs_0_1, FIX::LegCurrency{"JPY"}, InstrumentLeg_116);
    set_field(noLegs_0_1, FIX::LegDatedDate{"LOCALMKTDATE_687208278"}, InstrumentLeg_116);
    set_field(noLegs_0_1, FIX::LegExerciseStyle{1228146829}, InstrumentLeg_116);
    FIX::LegFactor LegFactor_116;
    LegFactor_116.setString("18996699");
set_field(noLegs_0_1, LegFactor_116, InstrumentLeg_116);
    set_field(noLegs_0_1, FIX::LegFlowScheduleType{845270341}, InstrumentLeg_116);
    set_field(noLegs_0_1, FIX::LegInstrRegistry{"STRING_1803118936"}, InstrumentLeg_116);
    set_field(noLegs_0_1, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1396542856"}, InstrumentLeg_116);
    set_field(noLegs_0_1, FIX::LegIssueDate{"LOCALMKTDATE_1519389658"}, InstrumentLeg_116);
    set_field(noLegs_0_1, FIX::LegIssuer{"STRING_1108116545"}, InstrumentLeg_116);
    set_field(noLegs_0_1, FIX::LegLocaleOfIssue{"STRING_1714632960"}, InstrumentLeg_116);
    set_field(noLegs_0_1, FIX::LegMaturityDate{"LOCALMKTDATE_276356188"}, InstrumentLeg_116);
    set_field(noLegs_0_1, FIX::LegMaturityMonthYear{"MONTHYEAR_1433746269"}, InstrumentLeg_116);
    set_field(noLegs_0_1, FIX::LegMaturityTime{"TZTIMEONLY_223852072"}, InstrumentLeg_116);
    set_field(noLegs_0_1, FIX::LegOptAttribute{'1'}, InstrumentLeg_116);
    FIX::LegOptionRatio LegOptionRatio_116;
    LegOptionRatio_116.setString("17175004");
set_field(noLegs_0_1, LegOptionRatio_116, InstrumentLeg_116);
    set_field(noLegs_0_1, FIX::LegPool{"STRING_2084055530"}, InstrumentLeg_116);
    set_field(noLegs_0_1, FIX::LegPriceUnitOfMeasure{"STRING_840796189"}, InstrumentLeg_116);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_116;
    LegPriceUnitOfMeasureQty_116.setString("5334129");
set_field(noLegs_0_1, LegPriceUnitOfMeasureQty_116, InstrumentLeg_116);
    set_field(noLegs_0_1, FIX::LegProduct{1770409160}, InstrumentLeg_116);
    set_field(noLegs_0_1, FIX::LegPutOrCall{2128485723}, InstrumentLeg_116);
    FIX::LegRatioQty LegRatioQty_116;
    LegRatioQty_116.setString("16192541");
set_field(noLegs_0_1, LegRatioQty_116, InstrumentLeg_116);
    set_field(noLegs_0_1, FIX::LegRedemptionDate{"LOCALMKTDATE_573777135"}, InstrumentLeg_116);
    set_field(noLegs_0_1, FIX::LegRepoCollateralSecurityType{"STRING_851881086"}, InstrumentLeg_116);
    FIX::LegRepurchaseRate LegRepurchaseRate_116;
    LegRepurchaseRate_116.setString("57.070000");
set_field(noLegs_0_1, LegRepurchaseRate_116, InstrumentLeg_116);
    set_field(noLegs_0_1, FIX::LegRepurchaseTerm{755683115}, InstrumentLeg_116);
    set_field(noLegs_0_1, FIX::LegSecurityDesc{"STRING_1052614877"}, InstrumentLeg_116);
    set_field(noLegs_0_1, FIX::LegSecurityExchange{"EXCHANGE_121295319"}, InstrumentLeg_116);
    set_field(noLegs_0_1, FIX::LegSecurityID{"STRING_186695555"}, InstrumentLeg_116);
    set_field(noLegs_0_1, FIX::LegSecurityIDSource{"STRING_1054758394"}, InstrumentLeg_116);
    set_field(noLegs_0_1, FIX::LegSecuritySubType{"STRING_1068898225"}, InstrumentLeg_116);
    set_field(noLegs_0_1, FIX::LegSecurityType{"STRING_2089931082"}, InstrumentLeg_116);
    set_field(noLegs_0_1, FIX::LegSide{'1'}, InstrumentLeg_116);
    set_field(noLegs_0_1, FIX::LegStateOrProvinceOfIssue{"STRING_1756106503"}, InstrumentLeg_116);
    set_field(noLegs_0_1, FIX::LegStrikeCurrency{"EUR"}, InstrumentLeg_116);
    FIX::LegStrikePrice LegStrikePrice_116;
    LegStrikePrice_116.setString("4538931");
set_field(noLegs_0_1, LegStrikePrice_116, InstrumentLeg_116);
    set_field(noLegs_0_1, FIX::LegSymbol{"STRING_826229551"}, InstrumentLeg_116);
    set_field(noLegs_0_1, FIX::LegSymbolSfx{"STRING_386806377"}, InstrumentLeg_116);
    set_field(noLegs_0_1, FIX::LegTimeUnit{"STRING_1973282855"}, InstrumentLeg_116);
    set_field(noLegs_0_1, FIX::LegUnitOfMeasure{"STRING_1934346096"}, InstrumentLeg_116);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_116;
    LegUnitOfMeasureQty_116.setString("21014393");
set_field(noLegs_0_1, LegUnitOfMeasureQty_116, InstrumentLeg_116);
    all_values.push_back(InstrumentLeg_116);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::TradeCaptureReportAck::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_242;
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltID{"STRING_1220608717"}, LegSecAltIDGrp_NoLegSecurityAltID_242);
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltIDSource{"STRING_177807761"}, LegSecAltIDGrp_NoLegSecurityAltID_242);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_242);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_243;
      set_field(noLegSecurityAltID_1_1_1, FIX::LegSecurityAltID{"STRING_1119046509"}, LegSecAltIDGrp_NoLegSecurityAltID_243);
      set_field(noLegSecurityAltID_1_1_1, FIX::LegSecurityAltIDSource{"STRING_790625484"}, LegSecAltIDGrp_NoLegSecurityAltID_243);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_243);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::TradeCaptureReportAck::NoLegs::NoLegStipulations noLegStipulations_1_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_53;
      set_field(noLegStipulations_1_1_0, FIX::LegStipulationType{"STRING_1959842698"}, LegStipulations_NoLegStipulations_53);
      set_field(noLegStipulations_1_1_0, FIX::LegStipulationValue{"STRING_1324038458"}, LegStipulations_NoLegStipulations_53);
      all_values.push_back(LegStipulations_NoLegStipulations_53);
      all_compo_names.insert("...NoLegs...NoLegStipulations");

      noLegs_0_1.addGroup(noLegStipulations_1_1_0);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::TradeCaptureReportAck::NoLegs::NoNestedPartyIDs noNestedPartyIDs_1_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_135;
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyID{"STRING_1940844774"}, NestedParties_NoNestedPartyIDs_135);
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyIDSource{'7'}, NestedParties_NoNestedPartyIDs_135);
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyRole{311082291}, NestedParties_NoNestedPartyIDs_135);
      all_values.push_back(NestedParties_NoNestedPartyIDs_135);
      all_compo_names.insert("...NoLegs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_268;
        set_field(noNestedPartySubIDs_1_0_2_0, FIX::NestedPartySubID{"STRING_70321043"}, NstdPtysSubGrp_NoNestedPartySubIDs_268);
        set_field(noNestedPartySubIDs_1_0_2_0, FIX::NestedPartySubIDType{1066765406}, NstdPtysSubGrp_NoNestedPartySubIDs_268);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_268);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_269;
        set_field(noNestedPartySubIDs_1_0_2_1, FIX::NestedPartySubID{"STRING_1697857090"}, NstdPtysSubGrp_NoNestedPartySubIDs_269);
        set_field(noNestedPartySubIDs_1_0_2_1, FIX::NestedPartySubIDType{191616363}, NstdPtysSubGrp_NoNestedPartySubIDs_269);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_269);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_1);
      }
      noLegs_0_1.addGroup(noNestedPartyIDs_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoLegs::NoNestedPartyIDs noNestedPartyIDs_1_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_136;
      set_field(noNestedPartyIDs_1_1_1, FIX::NestedPartyID{"STRING_1253460961"}, NestedParties_NoNestedPartyIDs_136);
      set_field(noNestedPartyIDs_1_1_1, FIX::NestedPartyIDSource{'6'}, NestedParties_NoNestedPartyIDs_136);
      set_field(noNestedPartyIDs_1_1_1, FIX::NestedPartyRole{1260514588}, NestedParties_NoNestedPartyIDs_136);
      all_values.push_back(NestedParties_NoNestedPartyIDs_136);
      all_compo_names.insert("...NoLegs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_270;
        set_field(noNestedPartySubIDs_1_1_2_0, FIX::NestedPartySubID{"STRING_1990692693"}, NstdPtysSubGrp_NoNestedPartySubIDs_270);
        set_field(noNestedPartySubIDs_1_1_2_0, FIX::NestedPartySubIDType{869137443}, NstdPtysSubGrp_NoNestedPartySubIDs_270);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_270);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_271;
        set_field(noNestedPartySubIDs_1_1_2_1, FIX::NestedPartySubID{"STRING_219019011"}, NstdPtysSubGrp_NoNestedPartySubIDs_271);
        set_field(noNestedPartySubIDs_1_1_2_1, FIX::NestedPartySubIDType{980956214}, NstdPtysSubGrp_NoNestedPartySubIDs_271);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_271);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_272;
        set_field(noNestedPartySubIDs_1_1_2_2, FIX::NestedPartySubID{"STRING_1323030640"}, NstdPtysSubGrp_NoNestedPartySubIDs_272);
        set_field(noNestedPartySubIDs_1_1_2_2, FIX::NestedPartySubIDType{1045248562}, NstdPtysSubGrp_NoNestedPartySubIDs_272);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_272);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_2);
      }
      noLegs_0_1.addGroup(noNestedPartyIDs_1_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoLegs::NoNestedPartyIDs noNestedPartyIDs_1_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_137;
      set_field(noNestedPartyIDs_1_1_2, FIX::NestedPartyID{"STRING_1367762591"}, NestedParties_NoNestedPartyIDs_137);
      set_field(noNestedPartyIDs_1_1_2, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_137);
      set_field(noNestedPartyIDs_1_1_2, FIX::NestedPartyRole{832111011}, NestedParties_NoNestedPartyIDs_137);
      all_values.push_back(NestedParties_NoNestedPartyIDs_137);
      all_compo_names.insert("...NoLegs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_273;
        set_field(noNestedPartySubIDs_1_2_2_0, FIX::NestedPartySubID{"STRING_1250985243"}, NstdPtysSubGrp_NoNestedPartySubIDs_273);
        set_field(noNestedPartySubIDs_1_2_2_0, FIX::NestedPartySubIDType{2052719728}, NstdPtysSubGrp_NoNestedPartySubIDs_273);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_273);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_2.addGroup(noNestedPartySubIDs_1_2_2_0);
      }
      noLegs_0_1.addGroup(noNestedPartyIDs_1_1_2);
    }
    // TradeCapLegUnderlyingsGrp
    // Group TradeCapLegUnderlyingsGrp.NoOfLegUnderlyings
    {
      FIX50SP2::TradeCaptureReportAck::NoLegs::NoOfLegUnderlyings noOfLegUnderlyings_1_1_0;
      // TradeCapLegUnderlyingsGrp.NoOfLegUnderlyings
      // UnderlyingLegInstrument
      multiset<string> UnderlyingLegInstrument_2;
      set_field(noOfLegUnderlyings_1_1_0, FIX::UnderlyingLegCFICode{"STRING_222548104"}, UnderlyingLegInstrument_2);
      set_field(noOfLegUnderlyings_1_1_0, FIX::UnderlyingLegMaturityDate{"LOCALMKTDATE_695861564"}, UnderlyingLegInstrument_2);
      set_field(noOfLegUnderlyings_1_1_0, FIX::UnderlyingLegMaturityMonthYear{"MONTHYEAR_1613905685"}, UnderlyingLegInstrument_2);
      set_field(noOfLegUnderlyings_1_1_0, FIX::UnderlyingLegMaturityTime{"TZTIMEONLY_34907155"}, UnderlyingLegInstrument_2);
      set_field(noOfLegUnderlyings_1_1_0, FIX::UnderlyingLegOptAttribute{'2'}, UnderlyingLegInstrument_2);
      set_field(noOfLegUnderlyings_1_1_0, FIX::UnderlyingLegPutOrCall{1351210841}, UnderlyingLegInstrument_2);
      set_field(noOfLegUnderlyings_1_1_0, FIX::UnderlyingLegSecurityDesc{"STRING_1975751929"}, UnderlyingLegInstrument_2);
      set_field(noOfLegUnderlyings_1_1_0, FIX::UnderlyingLegSecurityExchange{"STRING_668225359"}, UnderlyingLegInstrument_2);
      set_field(noOfLegUnderlyings_1_1_0, FIX::UnderlyingLegSecurityID{"STRING_1662293132"}, UnderlyingLegInstrument_2);
      set_field(noOfLegUnderlyings_1_1_0, FIX::UnderlyingLegSecurityIDSource{"STRING_473510493"}, UnderlyingLegInstrument_2);
      set_field(noOfLegUnderlyings_1_1_0, FIX::UnderlyingLegSecuritySubType{"STRING_738546402"}, UnderlyingLegInstrument_2);
      set_field(noOfLegUnderlyings_1_1_0, FIX::UnderlyingLegSecurityType{"STRING_581574891"}, UnderlyingLegInstrument_2);
      FIX::UnderlyingLegStrikePrice UnderlyingLegStrikePrice_2;
      UnderlyingLegStrikePrice_2.setString("238839");
set_field(noOfLegUnderlyings_1_1_0, UnderlyingLegStrikePrice_2, UnderlyingLegInstrument_2);
      set_field(noOfLegUnderlyings_1_1_0, FIX::UnderlyingLegSymbol{"STRING_930162765"}, UnderlyingLegInstrument_2);
      set_field(noOfLegUnderlyings_1_1_0, FIX::UnderlyingLegSymbolSfx{"STRING_1835035852"}, UnderlyingLegInstrument_2);
      all_values.push_back(UnderlyingLegInstrument_2);
      all_compo_names.insert("...NoLegs...NoOfLegUnderlyings.");

      // UnderlyingLegSecurityAltIDGrp
      // Group UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
      {
        FIX50SP2::TradeCaptureReportAck::NoLegs::NoOfLegUnderlyings::NoUnderlyingLegSecurityAltID noUnderlyingLegSecurityAltID_1_0_2_0;
        // UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
        multiset<string> UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_5;
        set_field(noUnderlyingLegSecurityAltID_1_0_2_0, FIX::UnderlyingLegSecurityAltID{"STRING_43193705"}, UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_5);
        set_field(noUnderlyingLegSecurityAltID_1_0_2_0, FIX::UnderlyingLegSecurityAltIDSource{"STRING_883460600"}, UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_5);
        all_values.push_back(UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_5);
        all_compo_names.insert("...NoLegs...NoOfLegUnderlyings....NoUnderlyingLegSecurityAltID");

        noOfLegUnderlyings_1_1_0.addGroup(noUnderlyingLegSecurityAltID_1_0_2_0);
      }
      noLegs_0_1.addGroup(noOfLegUnderlyings_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoLegs::NoOfLegUnderlyings noOfLegUnderlyings_1_1_1;
      // TradeCapLegUnderlyingsGrp.NoOfLegUnderlyings
      // UnderlyingLegInstrument
      multiset<string> UnderlyingLegInstrument_3;
      set_field(noOfLegUnderlyings_1_1_1, FIX::UnderlyingLegCFICode{"STRING_472224817"}, UnderlyingLegInstrument_3);
      set_field(noOfLegUnderlyings_1_1_1, FIX::UnderlyingLegMaturityDate{"LOCALMKTDATE_912331149"}, UnderlyingLegInstrument_3);
      set_field(noOfLegUnderlyings_1_1_1, FIX::UnderlyingLegMaturityMonthYear{"MONTHYEAR_1102479611"}, UnderlyingLegInstrument_3);
      set_field(noOfLegUnderlyings_1_1_1, FIX::UnderlyingLegMaturityTime{"TZTIMEONLY_1453181031"}, UnderlyingLegInstrument_3);
      set_field(noOfLegUnderlyings_1_1_1, FIX::UnderlyingLegOptAttribute{'8'}, UnderlyingLegInstrument_3);
      set_field(noOfLegUnderlyings_1_1_1, FIX::UnderlyingLegPutOrCall{244525}, UnderlyingLegInstrument_3);
      set_field(noOfLegUnderlyings_1_1_1, FIX::UnderlyingLegSecurityDesc{"STRING_673459974"}, UnderlyingLegInstrument_3);
      set_field(noOfLegUnderlyings_1_1_1, FIX::UnderlyingLegSecurityExchange{"STRING_1236707989"}, UnderlyingLegInstrument_3);
      set_field(noOfLegUnderlyings_1_1_1, FIX::UnderlyingLegSecurityID{"STRING_832355536"}, UnderlyingLegInstrument_3);
      set_field(noOfLegUnderlyings_1_1_1, FIX::UnderlyingLegSecurityIDSource{"STRING_1995178254"}, UnderlyingLegInstrument_3);
      set_field(noOfLegUnderlyings_1_1_1, FIX::UnderlyingLegSecuritySubType{"STRING_340209585"}, UnderlyingLegInstrument_3);
      set_field(noOfLegUnderlyings_1_1_1, FIX::UnderlyingLegSecurityType{"STRING_737591617"}, UnderlyingLegInstrument_3);
      FIX::UnderlyingLegStrikePrice UnderlyingLegStrikePrice_3;
      UnderlyingLegStrikePrice_3.setString("13472206");
set_field(noOfLegUnderlyings_1_1_1, UnderlyingLegStrikePrice_3, UnderlyingLegInstrument_3);
      set_field(noOfLegUnderlyings_1_1_1, FIX::UnderlyingLegSymbol{"STRING_562757689"}, UnderlyingLegInstrument_3);
      set_field(noOfLegUnderlyings_1_1_1, FIX::UnderlyingLegSymbolSfx{"STRING_1433453181"}, UnderlyingLegInstrument_3);
      all_values.push_back(UnderlyingLegInstrument_3);
      all_compo_names.insert("...NoLegs...NoOfLegUnderlyings.");

      // UnderlyingLegSecurityAltIDGrp
      // Group UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
      {
        FIX50SP2::TradeCaptureReportAck::NoLegs::NoOfLegUnderlyings::NoUnderlyingLegSecurityAltID noUnderlyingLegSecurityAltID_1_1_2_0;
        // UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
        multiset<string> UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_6;
        set_field(noUnderlyingLegSecurityAltID_1_1_2_0, FIX::UnderlyingLegSecurityAltID{"STRING_597664844"}, UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_6);
        set_field(noUnderlyingLegSecurityAltID_1_1_2_0, FIX::UnderlyingLegSecurityAltIDSource{"STRING_1305869556"}, UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_6);
        all_values.push_back(UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_6);
        all_compo_names.insert("...NoLegs...NoOfLegUnderlyings....NoUnderlyingLegSecurityAltID");

        noOfLegUnderlyings_1_1_1.addGroup(noUnderlyingLegSecurityAltID_1_1_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoLegs::NoOfLegUnderlyings::NoUnderlyingLegSecurityAltID noUnderlyingLegSecurityAltID_1_1_2_1;
        // UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
        multiset<string> UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_7;
        set_field(noUnderlyingLegSecurityAltID_1_1_2_1, FIX::UnderlyingLegSecurityAltID{"STRING_17369878"}, UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_7);
        set_field(noUnderlyingLegSecurityAltID_1_1_2_1, FIX::UnderlyingLegSecurityAltIDSource{"STRING_425933125"}, UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_7);
        all_values.push_back(UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_7);
        all_compo_names.insert("...NoLegs...NoOfLegUnderlyings....NoUnderlyingLegSecurityAltID");

        noOfLegUnderlyings_1_1_1.addGroup(noUnderlyingLegSecurityAltID_1_1_2_1);
      }
      noLegs_0_1.addGroup(noOfLegUnderlyings_1_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoLegs::NoOfLegUnderlyings noOfLegUnderlyings_1_1_2;
      // TradeCapLegUnderlyingsGrp.NoOfLegUnderlyings
      // UnderlyingLegInstrument
      multiset<string> UnderlyingLegInstrument_4;
      set_field(noOfLegUnderlyings_1_1_2, FIX::UnderlyingLegCFICode{"STRING_1974094915"}, UnderlyingLegInstrument_4);
      set_field(noOfLegUnderlyings_1_1_2, FIX::UnderlyingLegMaturityDate{"LOCALMKTDATE_1679663011"}, UnderlyingLegInstrument_4);
      set_field(noOfLegUnderlyings_1_1_2, FIX::UnderlyingLegMaturityMonthYear{"MONTHYEAR_899443619"}, UnderlyingLegInstrument_4);
      set_field(noOfLegUnderlyings_1_1_2, FIX::UnderlyingLegMaturityTime{"TZTIMEONLY_565157670"}, UnderlyingLegInstrument_4);
      set_field(noOfLegUnderlyings_1_1_2, FIX::UnderlyingLegOptAttribute{'1'}, UnderlyingLegInstrument_4);
      set_field(noOfLegUnderlyings_1_1_2, FIX::UnderlyingLegPutOrCall{923327554}, UnderlyingLegInstrument_4);
      set_field(noOfLegUnderlyings_1_1_2, FIX::UnderlyingLegSecurityDesc{"STRING_1495320435"}, UnderlyingLegInstrument_4);
      set_field(noOfLegUnderlyings_1_1_2, FIX::UnderlyingLegSecurityExchange{"STRING_1948790106"}, UnderlyingLegInstrument_4);
      set_field(noOfLegUnderlyings_1_1_2, FIX::UnderlyingLegSecurityID{"STRING_1552343326"}, UnderlyingLegInstrument_4);
      set_field(noOfLegUnderlyings_1_1_2, FIX::UnderlyingLegSecurityIDSource{"STRING_1538514141"}, UnderlyingLegInstrument_4);
      set_field(noOfLegUnderlyings_1_1_2, FIX::UnderlyingLegSecuritySubType{"STRING_684767058"}, UnderlyingLegInstrument_4);
      set_field(noOfLegUnderlyings_1_1_2, FIX::UnderlyingLegSecurityType{"STRING_2024568143"}, UnderlyingLegInstrument_4);
      FIX::UnderlyingLegStrikePrice UnderlyingLegStrikePrice_4;
      UnderlyingLegStrikePrice_4.setString("3033616");
set_field(noOfLegUnderlyings_1_1_2, UnderlyingLegStrikePrice_4, UnderlyingLegInstrument_4);
      set_field(noOfLegUnderlyings_1_1_2, FIX::UnderlyingLegSymbol{"STRING_1787246669"}, UnderlyingLegInstrument_4);
      set_field(noOfLegUnderlyings_1_1_2, FIX::UnderlyingLegSymbolSfx{"STRING_1330265526"}, UnderlyingLegInstrument_4);
      all_values.push_back(UnderlyingLegInstrument_4);
      all_compo_names.insert("...NoLegs...NoOfLegUnderlyings.");

      // UnderlyingLegSecurityAltIDGrp
      // Group UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
      {
        FIX50SP2::TradeCaptureReportAck::NoLegs::NoOfLegUnderlyings::NoUnderlyingLegSecurityAltID noUnderlyingLegSecurityAltID_1_2_2_0;
        // UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
        multiset<string> UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_8;
        set_field(noUnderlyingLegSecurityAltID_1_2_2_0, FIX::UnderlyingLegSecurityAltID{"STRING_1787491195"}, UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_8);
        set_field(noUnderlyingLegSecurityAltID_1_2_2_0, FIX::UnderlyingLegSecurityAltIDSource{"STRING_2003725500"}, UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_8);
        all_values.push_back(UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_8);
        all_compo_names.insert("...NoLegs...NoOfLegUnderlyings....NoUnderlyingLegSecurityAltID");

        noOfLegUnderlyings_1_1_2.addGroup(noUnderlyingLegSecurityAltID_1_2_2_0);
      }
      noLegs_0_1.addGroup(noOfLegUnderlyings_1_1_2);
    }
    msg.addGroup(noLegs_0_1);
  }
  // TrdRegTimestamps
  // Group TrdRegTimestamps.NoTrdRegTimestamps
  {
    FIX50SP2::TradeCaptureReportAck::NoTrdRegTimestamps noTrdRegTimestamps_0_0;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_24;
    set_field(noTrdRegTimestamps_0_0, FIX::DeskOrderHandlingInst{"MULTIPLESTRINGVALUE_DIR"}, TrdRegTimestamps_NoTrdRegTimestamps_24);
    set_field(noTrdRegTimestamps_0_0, FIX::DeskType{"STRING_PT"}, TrdRegTimestamps_NoTrdRegTimestamps_24);
    set_field(noTrdRegTimestamps_0_0, FIX::DeskTypeSource{1}, TrdRegTimestamps_NoTrdRegTimestamps_24);
    set_field(noTrdRegTimestamps_0_0, FIX::TrdRegTimestamp{FIX::UTCTIMESTAMP(18, 19, 54, 15, 5, 2000)}, TrdRegTimestamps_NoTrdRegTimestamps_24);
    set_field(noTrdRegTimestamps_0_0, FIX::TrdRegTimestampOrigin{"STRING_1882169669"}, TrdRegTimestamps_NoTrdRegTimestamps_24);
    set_field(noTrdRegTimestamps_0_0, FIX::TrdRegTimestampType{5}, TrdRegTimestamps_NoTrdRegTimestamps_24);
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_24);
    all_compo_names.insert("...NoTrdRegTimestamps");

    msg.addGroup(noTrdRegTimestamps_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportAck::NoTrdRegTimestamps noTrdRegTimestamps_0_1;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_25;
    set_field(noTrdRegTimestamps_0_1, FIX::DeskOrderHandlingInst{"MULTIPLESTRINGVALUE_RSV"}, TrdRegTimestamps_NoTrdRegTimestamps_25);
    set_field(noTrdRegTimestamps_0_1, FIX::DeskType{"STRING_PT"}, TrdRegTimestamps_NoTrdRegTimestamps_25);
    set_field(noTrdRegTimestamps_0_1, FIX::DeskTypeSource{1}, TrdRegTimestamps_NoTrdRegTimestamps_25);
    set_field(noTrdRegTimestamps_0_1, FIX::TrdRegTimestamp{FIX::UTCTIMESTAMP(6, 55, 55, 13, 10, 2002)}, TrdRegTimestamps_NoTrdRegTimestamps_25);
    set_field(noTrdRegTimestamps_0_1, FIX::TrdRegTimestampOrigin{"STRING_2014176803"}, TrdRegTimestamps_NoTrdRegTimestamps_25);
    set_field(noTrdRegTimestamps_0_1, FIX::TrdRegTimestampType{5}, TrdRegTimestamps_NoTrdRegTimestamps_25);
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_25);
    all_compo_names.insert("...NoTrdRegTimestamps");

    msg.addGroup(noTrdRegTimestamps_0_1);
  }
  {
    FIX50SP2::TradeCaptureReportAck::NoTrdRegTimestamps noTrdRegTimestamps_0_2;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_26;
    set_field(noTrdRegTimestamps_0_2, FIX::DeskOrderHandlingInst{"MULTIPLESTRINGVALUE_RSV"}, TrdRegTimestamps_NoTrdRegTimestamps_26);
    set_field(noTrdRegTimestamps_0_2, FIX::DeskType{"STRING_T"}, TrdRegTimestamps_NoTrdRegTimestamps_26);
    set_field(noTrdRegTimestamps_0_2, FIX::DeskTypeSource{1}, TrdRegTimestamps_NoTrdRegTimestamps_26);
    set_field(noTrdRegTimestamps_0_2, FIX::TrdRegTimestamp{FIX::UTCTIMESTAMP(20, 48, 19, 7, 3, 2007)}, TrdRegTimestamps_NoTrdRegTimestamps_26);
    set_field(noTrdRegTimestamps_0_2, FIX::TrdRegTimestampOrigin{"STRING_828781508"}, TrdRegTimestamps_NoTrdRegTimestamps_26);
    set_field(noTrdRegTimestamps_0_2, FIX::TrdRegTimestampType{5}, TrdRegTimestamps_NoTrdRegTimestamps_26);
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_26);
    all_compo_names.insert("...NoTrdRegTimestamps");

    msg.addGroup(noTrdRegTimestamps_0_2);
  }
  // TrdRepIndicatorsGrp
  // Group TrdRepIndicatorsGrp.NoTrdRepIndicators
  {
    FIX50SP2::TradeCaptureReportAck::NoTrdRepIndicators noTrdRepIndicators_0_0;
    // TrdRepIndicatorsGrp.NoTrdRepIndicators
    multiset<string> TrdRepIndicatorsGrp_NoTrdRepIndicators_2;
    set_field(noTrdRepIndicators_0_0, FIX::TrdRepIndicator{true}, TrdRepIndicatorsGrp_NoTrdRepIndicators_2);
    set_field(noTrdRepIndicators_0_0, FIX::TrdRepPartyRole{2023178155}, TrdRepIndicatorsGrp_NoTrdRepIndicators_2);
    all_values.push_back(TrdRepIndicatorsGrp_NoTrdRepIndicators_2);
    all_compo_names.insert("...NoTrdRepIndicators");

    msg.addGroup(noTrdRepIndicators_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportAck::NoTrdRepIndicators noTrdRepIndicators_0_1;
    // TrdRepIndicatorsGrp.NoTrdRepIndicators
    multiset<string> TrdRepIndicatorsGrp_NoTrdRepIndicators_3;
    set_field(noTrdRepIndicators_0_1, FIX::TrdRepIndicator{true}, TrdRepIndicatorsGrp_NoTrdRepIndicators_3);
    set_field(noTrdRepIndicators_0_1, FIX::TrdRepPartyRole{979015884}, TrdRepIndicatorsGrp_NoTrdRepIndicators_3);
    all_values.push_back(TrdRepIndicatorsGrp_NoTrdRepIndicators_3);
    all_compo_names.insert("...NoTrdRepIndicators");

    msg.addGroup(noTrdRepIndicators_0_1);
  }
  {
    FIX50SP2::TradeCaptureReportAck::NoTrdRepIndicators noTrdRepIndicators_0_2;
    // TrdRepIndicatorsGrp.NoTrdRepIndicators
    multiset<string> TrdRepIndicatorsGrp_NoTrdRepIndicators_4;
    set_field(noTrdRepIndicators_0_2, FIX::TrdRepIndicator{false}, TrdRepIndicatorsGrp_NoTrdRepIndicators_4);
    set_field(noTrdRepIndicators_0_2, FIX::TrdRepPartyRole{1552242634}, TrdRepIndicatorsGrp_NoTrdRepIndicators_4);
    all_values.push_back(TrdRepIndicatorsGrp_NoTrdRepIndicators_4);
    all_compo_names.insert("...NoTrdRepIndicators");

    msg.addGroup(noTrdRepIndicators_0_2);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::TradeCaptureReportAck::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_135;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_1024729561"}, UnderlyingInstrument_135);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{1711231974}, UnderlyingInstrument_135);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_506016374"}, UnderlyingInstrument_135);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{405349200}, UnderlyingInstrument_135);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_135;
    UnderlyingAdjustedQuantity_135.setString("6460652");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_135, UnderlyingInstrument_135);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_135;
    UnderlyingAllocationPercent_135.setString("58.900000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_135, UnderlyingInstrument_135);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_135;
    UnderlyingAttachmentPoint_135.setString("89.450000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_135, UnderlyingInstrument_135);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_1133241795"}, UnderlyingInstrument_135);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_832362250"}, UnderlyingInstrument_135);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_1601452100"}, UnderlyingInstrument_135);
    FIX::UnderlyingCapValue UnderlyingCapValue_135;
    UnderlyingCapValue_135.setString("14975028");
set_field(noUnderlyings_0_0, UnderlyingCapValue_135, UnderlyingInstrument_135);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_135;
    UnderlyingCashAmount_135.setString("20681539");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_135, UnderlyingInstrument_135);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_135);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_135;
    UnderlyingContractMultiplier_135.setString("10445458");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_135, UnderlyingInstrument_135);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{1547701687}, UnderlyingInstrument_135);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_254372001"}, UnderlyingInstrument_135);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_447830611"}, UnderlyingInstrument_135);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_135;
    UnderlyingCouponRate_135.setString("35.980000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_135, UnderlyingInstrument_135);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_2020682457"}, UnderlyingInstrument_135);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"EUR"}, UnderlyingInstrument_135);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_135;
    UnderlyingCurrentValue_135.setString("7019803");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_135, UnderlyingInstrument_135);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_135;
    UnderlyingDetachmentPoint_135.setString("38.820000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_135, UnderlyingInstrument_135);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_135;
    UnderlyingDirtyPrice_135.setString("5999998");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_135, UnderlyingInstrument_135);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_135;
    UnderlyingEndPrice_135.setString("20266860");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_135, UnderlyingInstrument_135);
    FIX::UnderlyingEndValue UnderlyingEndValue_135;
    UnderlyingEndValue_135.setString("17366083");
set_field(noUnderlyings_0_0, UnderlyingEndValue_135, UnderlyingInstrument_135);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{745213152}, UnderlyingInstrument_135);
    FIX::UnderlyingFXRate UnderlyingFXRate_135;
    UnderlyingFXRate_135.setString("8582182");
set_field(noUnderlyings_0_0, UnderlyingFXRate_135, UnderlyingInstrument_135);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_135);
    FIX::UnderlyingFactor UnderlyingFactor_135;
    UnderlyingFactor_135.setString("1499721");
set_field(noUnderlyings_0_0, UnderlyingFactor_135, UnderlyingInstrument_135);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{1318155590}, UnderlyingInstrument_135);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_224234832"}, UnderlyingInstrument_135);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1861204112"}, UnderlyingInstrument_135);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_1824171964"}, UnderlyingInstrument_135);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_629584032"}, UnderlyingInstrument_135);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_359785686"}, UnderlyingInstrument_135);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1724104206"}, UnderlyingInstrument_135);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_216859329"}, UnderlyingInstrument_135);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_135;
    UnderlyingNotionalPercentageOutstanding_135.setString("74.810000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_135, UnderlyingInstrument_135);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'4'}, UnderlyingInstrument_135);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_135;
    UnderlyingOriginalNotionalPercentageOutstanding_135.setString("14.300000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_135, UnderlyingInstrument_135);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_843046697"}, UnderlyingInstrument_135);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_135;
    UnderlyingPriceUnitOfMeasureQty_135.setString("3296530");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_135, UnderlyingInstrument_135);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{778736059}, UnderlyingInstrument_135);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{1887592508}, UnderlyingInstrument_135);
    FIX::UnderlyingPx UnderlyingPx_135;
    UnderlyingPx_135.setString("18773547");
set_field(noUnderlyings_0_0, UnderlyingPx_135, UnderlyingInstrument_135);
    FIX::UnderlyingQty UnderlyingQty_135;
    UnderlyingQty_135.setString("10331080");
set_field(noUnderlyings_0_0, UnderlyingQty_135, UnderlyingInstrument_135);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_187939472"}, UnderlyingInstrument_135);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_237584699"}, UnderlyingInstrument_135);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_135;
    UnderlyingRepurchaseRate_135.setString("68.700000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_135, UnderlyingInstrument_135);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{1890474990}, UnderlyingInstrument_135);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_1673467566"}, UnderlyingInstrument_135);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_1608287187"}, UnderlyingInstrument_135);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_1603905224"}, UnderlyingInstrument_135);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_125983805"}, UnderlyingInstrument_135);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_1487489598"}, UnderlyingInstrument_135);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_1193029966"}, UnderlyingInstrument_135);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_871196957"}, UnderlyingInstrument_135);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_198224245"}, UnderlyingInstrument_135);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_392535237"}, UnderlyingInstrument_135);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_135);
    FIX::UnderlyingStartValue UnderlyingStartValue_135;
    UnderlyingStartValue_135.setString("15163798");
set_field(noUnderlyings_0_0, UnderlyingStartValue_135, UnderlyingInstrument_135);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_616770070"}, UnderlyingInstrument_135);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"USD"}, UnderlyingInstrument_135);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_135;
    UnderlyingStrikePrice_135.setString("12463541");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_135, UnderlyingInstrument_135);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_1094675246"}, UnderlyingInstrument_135);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_769688710"}, UnderlyingInstrument_135);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_1463213432"}, UnderlyingInstrument_135);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_440219079"}, UnderlyingInstrument_135);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_135;
    UnderlyingUnitOfMeasureQty_135.setString("11786715");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_135, UnderlyingInstrument_135);
    all_values.push_back(UnderlyingInstrument_135);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_278;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_1283265776"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_278);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1508324581"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_278);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_278);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_276;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_1023374636"}, UnderlyingStipulations_NoUnderlyingStips_276);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_1238195682"}, UnderlyingStipulations_NoUnderlyingStips_276);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_276);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_277;
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipType{"STRING_798401686"}, UnderlyingStipulations_NoUnderlyingStips_277);
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipValue{"STRING_1211314108"}, UnderlyingStipulations_NoUnderlyingStips_277);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_277);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_279;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_1704708556"}, UndlyInstrumentParties_NoUndlyInstrumentParties_279);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'9'}, UndlyInstrumentParties_NoUndlyInstrumentParties_279);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{1001764299}, UndlyInstrumentParties_NoUndlyInstrumentParties_279);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_279);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_561;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_410727027"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_561);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{1127748105}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_561);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_561);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_562;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_505518045"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_562);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{1603756993}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_562);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_562);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_563;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_1998945062"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_563);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_2, FIX::UnderlyingInstrumentPartySubIDType{703742291}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_563);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_563);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_280;
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_1996292231"}, UndlyInstrumentParties_NoUndlyInstrumentParties_280);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyIDSource{'8'}, UndlyInstrumentParties_NoUndlyInstrumentParties_280);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyRole{72638478}, UndlyInstrumentParties_NoUndlyInstrumentParties_280);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_280);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_564;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1607520070"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_564);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{1265706630}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_564);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_564);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_565;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1711932755"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_565);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubIDType{554711668}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_565);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_565);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_281;
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyID{"STRING_2035395341"}, UndlyInstrumentParties_NoUndlyInstrumentParties_281);
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_281);
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyRole{994930747}, UndlyInstrumentParties_NoUndlyInstrumentParties_281);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_281);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_566;
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_14220105"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_566);
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_0, FIX::UnderlyingInstrumentPartySubIDType{130712875}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_566);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_566);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_567;
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_427424146"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_567);
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_1, FIX::UnderlyingInstrumentPartySubIDType{1926997379}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_567);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_567);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportAck::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_136;
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuer{"DATA_1154087511"}, UnderlyingInstrument_136);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuerLen{1665619828}, UnderlyingInstrument_136);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDesc{"DATA_577915417"}, UnderlyingInstrument_136);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDescLen{217917972}, UnderlyingInstrument_136);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_136;
    UnderlyingAdjustedQuantity_136.setString("9939165");
set_field(noUnderlyings_0_1, UnderlyingAdjustedQuantity_136, UnderlyingInstrument_136);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_136;
    UnderlyingAllocationPercent_136.setString("3.260000");
set_field(noUnderlyings_0_1, UnderlyingAllocationPercent_136, UnderlyingInstrument_136);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_136;
    UnderlyingAttachmentPoint_136.setString("34.220000");
set_field(noUnderlyings_0_1, UnderlyingAttachmentPoint_136, UnderlyingInstrument_136);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCFICode{"STRING_1995680861"}, UnderlyingInstrument_136);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPProgram{"STRING_1300652421"}, UnderlyingInstrument_136);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPRegType{"STRING_1582950449"}, UnderlyingInstrument_136);
    FIX::UnderlyingCapValue UnderlyingCapValue_136;
    UnderlyingCapValue_136.setString("9759453");
set_field(noUnderlyings_0_1, UnderlyingCapValue_136, UnderlyingInstrument_136);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_136;
    UnderlyingCashAmount_136.setString("18061704");
set_field(noUnderlyings_0_1, UnderlyingCashAmount_136, UnderlyingInstrument_136);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_136);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_136;
    UnderlyingContractMultiplier_136.setString("8274067");
set_field(noUnderlyings_0_1, UnderlyingContractMultiplier_136, UnderlyingInstrument_136);
    set_field(noUnderlyings_0_1, FIX::UnderlyingContractMultiplierUnit{362429110}, UnderlyingInstrument_136);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCountryOfIssue{"COUNTRY_888032378"}, UnderlyingInstrument_136);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1700037243"}, UnderlyingInstrument_136);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_136;
    UnderlyingCouponRate_136.setString("75.880000");
set_field(noUnderlyings_0_1, UnderlyingCouponRate_136, UnderlyingInstrument_136);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCreditRating{"STRING_1353611031"}, UnderlyingInstrument_136);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCurrency{"CAN"}, UnderlyingInstrument_136);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_136;
    UnderlyingCurrentValue_136.setString("9180601");
set_field(noUnderlyings_0_1, UnderlyingCurrentValue_136, UnderlyingInstrument_136);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_136;
    UnderlyingDetachmentPoint_136.setString("53.330000");
set_field(noUnderlyings_0_1, UnderlyingDetachmentPoint_136, UnderlyingInstrument_136);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_136;
    UnderlyingDirtyPrice_136.setString("15886859");
set_field(noUnderlyings_0_1, UnderlyingDirtyPrice_136, UnderlyingInstrument_136);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_136;
    UnderlyingEndPrice_136.setString("19457226");
set_field(noUnderlyings_0_1, UnderlyingEndPrice_136, UnderlyingInstrument_136);
    FIX::UnderlyingEndValue UnderlyingEndValue_136;
    UnderlyingEndValue_136.setString("5622324");
set_field(noUnderlyings_0_1, UnderlyingEndValue_136, UnderlyingInstrument_136);
    set_field(noUnderlyings_0_1, FIX::UnderlyingExerciseStyle{507785476}, UnderlyingInstrument_136);
    FIX::UnderlyingFXRate UnderlyingFXRate_136;
    UnderlyingFXRate_136.setString("19599427");
set_field(noUnderlyings_0_1, UnderlyingFXRate_136, UnderlyingInstrument_136);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_136);
    FIX::UnderlyingFactor UnderlyingFactor_136;
    UnderlyingFactor_136.setString("9352096");
set_field(noUnderlyings_0_1, UnderlyingFactor_136, UnderlyingInstrument_136);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFlowScheduleType{1739456514}, UnderlyingInstrument_136);
    set_field(noUnderlyings_0_1, FIX::UnderlyingInstrRegistry{"STRING_1847032818"}, UnderlyingInstrument_136);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssueDate{"LOCALMKTDATE_453345803"}, UnderlyingInstrument_136);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssuer{"STRING_169888284"}, UnderlyingInstrument_136);
    set_field(noUnderlyings_0_1, FIX::UnderlyingLocaleOfIssue{"STRING_2064950790"}, UnderlyingInstrument_136);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1447262365"}, UnderlyingInstrument_136);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_305028610"}, UnderlyingInstrument_136);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1089690565"}, UnderlyingInstrument_136);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_136;
    UnderlyingNotionalPercentageOutstanding_136.setString("95.780000");
set_field(noUnderlyings_0_1, UnderlyingNotionalPercentageOutstanding_136, UnderlyingInstrument_136);
    set_field(noUnderlyings_0_1, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_136);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_136;
    UnderlyingOriginalNotionalPercentageOutstanding_136.setString("73.660000");
set_field(noUnderlyings_0_1, UnderlyingOriginalNotionalPercentageOutstanding_136, UnderlyingInstrument_136);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPriceUnitOfMeasure{"STRING_123921249"}, UnderlyingInstrument_136);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_136;
    UnderlyingPriceUnitOfMeasureQty_136.setString("12643678");
set_field(noUnderlyings_0_1, UnderlyingPriceUnitOfMeasureQty_136, UnderlyingInstrument_136);
    set_field(noUnderlyings_0_1, FIX::UnderlyingProduct{1564381161}, UnderlyingInstrument_136);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPutOrCall{951327982}, UnderlyingInstrument_136);
    FIX::UnderlyingPx UnderlyingPx_136;
    UnderlyingPx_136.setString("16267969");
set_field(noUnderlyings_0_1, UnderlyingPx_136, UnderlyingInstrument_136);
    FIX::UnderlyingQty UnderlyingQty_136;
    UnderlyingQty_136.setString("3049298");
set_field(noUnderlyings_0_1, UnderlyingQty_136, UnderlyingInstrument_136);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_503881577"}, UnderlyingInstrument_136);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepoCollateralSecurityType{"STRING_2061864549"}, UnderlyingInstrument_136);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_136;
    UnderlyingRepurchaseRate_136.setString("9.220000");
set_field(noUnderlyings_0_1, UnderlyingRepurchaseRate_136, UnderlyingInstrument_136);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepurchaseTerm{1663955242}, UnderlyingInstrument_136);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRestructuringType{"STRING_1615155120"}, UnderlyingInstrument_136);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityDesc{"STRING_429117413"}, UnderlyingInstrument_136);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityExchange{"EXCHANGE_1231256927"}, UnderlyingInstrument_136);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityID{"STRING_1056357384"}, UnderlyingInstrument_136);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityIDSource{"STRING_227356443"}, UnderlyingInstrument_136);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecuritySubType{"STRING_1793489359"}, UnderlyingInstrument_136);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityType{"STRING_1564142860"}, UnderlyingInstrument_136);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSeniority{"STRING_39815578"}, UnderlyingInstrument_136);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlMethod{"STRING_338951018"}, UnderlyingInstrument_136);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlementType{5}, UnderlyingInstrument_136);
    FIX::UnderlyingStartValue UnderlyingStartValue_136;
    UnderlyingStartValue_136.setString("17792720");
set_field(noUnderlyings_0_1, UnderlyingStartValue_136, UnderlyingInstrument_136);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_38500188"}, UnderlyingInstrument_136);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStrikeCurrency{"CAN"}, UnderlyingInstrument_136);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_136;
    UnderlyingStrikePrice_136.setString("21034509");
set_field(noUnderlyings_0_1, UnderlyingStrikePrice_136, UnderlyingInstrument_136);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbol{"STRING_104993355"}, UnderlyingInstrument_136);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbolSfx{"STRING_106705339"}, UnderlyingInstrument_136);
    set_field(noUnderlyings_0_1, FIX::UnderlyingTimeUnit{"STRING_1045657896"}, UnderlyingInstrument_136);
    set_field(noUnderlyings_0_1, FIX::UnderlyingUnitOfMeasure{"STRING_1400452933"}, UnderlyingInstrument_136);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_136;
    UnderlyingUnitOfMeasureQty_136.setString("17123863");
set_field(noUnderlyings_0_1, UnderlyingUnitOfMeasureQty_136, UnderlyingInstrument_136);
    all_values.push_back(UnderlyingInstrument_136);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_279;
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltID{"STRING_1524374182"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_279);
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_829270573"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_279);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_279);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_280;
      set_field(noUnderlyingSecurityAltID_1_1_1, FIX::UnderlyingSecurityAltID{"STRING_987712776"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_280);
      set_field(noUnderlyingSecurityAltID_1_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_328218516"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_280);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_280);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_278;
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipType{"STRING_1292642667"}, UnderlyingStipulations_NoUnderlyingStips_278);
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipValue{"STRING_832100093"}, UnderlyingStipulations_NoUnderlyingStips_278);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_278);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_282;
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_803699942"}, UndlyInstrumentParties_NoUndlyInstrumentParties_282);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyIDSource{'3'}, UndlyInstrumentParties_NoUndlyInstrumentParties_282);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyRole{1838119906}, UndlyInstrumentParties_NoUndlyInstrumentParties_282);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_282);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_568;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1579828614"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_568);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{746993642}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_568);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_568);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_569;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1460173798"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_569);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{1225834325}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_569);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_569);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_283;
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_163652855"}, UndlyInstrumentParties_NoUndlyInstrumentParties_283);
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_283);
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyRole{1564785343}, UndlyInstrumentParties_NoUndlyInstrumentParties_283);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_283);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_570;
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1131777821"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_570);
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{1603285532}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_570);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_570);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_571;
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1320736328"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_571);
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_1, FIX::UnderlyingInstrumentPartySubIDType{933454550}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_571);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_571);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    msg.addGroup(noUnderlyings_0_1);
  }

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
