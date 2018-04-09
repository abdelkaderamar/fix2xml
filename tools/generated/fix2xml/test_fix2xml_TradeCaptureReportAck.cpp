#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
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
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::TradeCaptureReportAck msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> TradeCaptureReportAck_0;
  set_field(msg, FIX::AsOfIndicator{'1'}, TradeCaptureReportAck_0);
  FIX::AvgPx AvgPx_8;
  AvgPx_8.setString("14588538");
set_field(msg, AvgPx_8, TradeCaptureReportAck_0);
  set_field(msg, FIX::AvgPxIndicator{1}, TradeCaptureReportAck_0);
  FIX::CalculatedCcyLastQty CalculatedCcyLastQty_2;
  CalculatedCcyLastQty_2.setString("16736696");
set_field(msg, CalculatedCcyLastQty_2, TradeCaptureReportAck_0);
  set_field(msg, FIX::ClearingBusinessDate{"LOCALMKTDATE_938551328"}, TradeCaptureReportAck_0);
  set_field(msg, FIX::ClearingFeeIndicator{"STRING_5"}, TradeCaptureReportAck_0);
  set_field(msg, FIX::CopyMsgIndicator{true}, TradeCaptureReportAck_0);
  set_field(msg, FIX::Currency{"JPY"}, TradeCaptureReportAck_0);
  set_field(msg, FIX::EncodedText{"DATA_2016877448"}, TradeCaptureReportAck_0);
  set_field(msg, FIX::EncodedTextLen{1578623978}, TradeCaptureReportAck_0);
  set_field(msg, FIX::ExecID{"STRING_549715280"}, TradeCaptureReportAck_0);
  set_field(msg, FIX::ExecRestatementReason{3}, TradeCaptureReportAck_0);
  set_field(msg, FIX::ExecType{'5'}, TradeCaptureReportAck_0);
  FIX::FeeMultiplier FeeMultiplier_1;
  FeeMultiplier_1.setString("15466238");
set_field(msg, FeeMultiplier_1, TradeCaptureReportAck_0);
  set_field(msg, FIX::FirmTradeID{"STRING_2075485286"}, TradeCaptureReportAck_0);
  FIX::GrossTradeAmt GrossTradeAmt_6;
  GrossTradeAmt_6.setString("10752087");
set_field(msg, GrossTradeAmt_6, TradeCaptureReportAck_0);
  FIX::LastForwardPoints LastForwardPoints_2;
  LastForwardPoints_2.setString("5392684");
set_field(msg, LastForwardPoints_2, TradeCaptureReportAck_0);
  set_field(msg, FIX::LastMkt{"EXCHANGE_1027243380"}, TradeCaptureReportAck_0);
  FIX::LastParPx LastParPx_10;
  LastParPx_10.setString("6860315");
set_field(msg, LastParPx_10, TradeCaptureReportAck_0);
  FIX::LastPx LastPx_18;
  LastPx_18.setString("18711757");
set_field(msg, LastPx_18, TradeCaptureReportAck_0);
  FIX::LastQty LastQty_11;
  LastQty_11.setString("9615594");
set_field(msg, LastQty_11, TradeCaptureReportAck_0);
  FIX::LastSpotRate LastSpotRate_2;
  LastSpotRate_2.setString("18572707");
set_field(msg, LastSpotRate_2, TradeCaptureReportAck_0);
  FIX::LastSwapPoints LastSwapPoints_2;
  LastSwapPoints_2.setString("1961139");
set_field(msg, LastSwapPoints_2, TradeCaptureReportAck_0);
  set_field(msg, FIX::LastUpdateTime{FIX::UTCTIMESTAMP(5, 0, 14, 15, 9, 2016)}, TradeCaptureReportAck_0);
  set_field(msg, FIX::MarketID{"EXCHANGE_33403699"}, TradeCaptureReportAck_0);
  set_field(msg, FIX::MarketSegmentID{"STRING_481748045"}, TradeCaptureReportAck_0);
  set_field(msg, FIX::MatchStatus{'1'}, TradeCaptureReportAck_0);
  set_field(msg, FIX::MatchType{"STRING_A1"}, TradeCaptureReportAck_0);
  set_field(msg, FIX::MessageEventSource{"STRING_1420299373"}, TradeCaptureReportAck_0);
  set_field(msg, FIX::MultiLegReportingType{'2'}, TradeCaptureReportAck_0);
  set_field(msg, FIX::OrigSecondaryTradeID{"STRING_750702347"}, TradeCaptureReportAck_0);
  set_field(msg, FIX::OrigTradeDate{"LOCALMKTDATE_907968470"}, TradeCaptureReportAck_0);
  set_field(msg, FIX::OrigTradeHandlingInstr{'4'}, TradeCaptureReportAck_0);
  set_field(msg, FIX::OrigTradeID{"STRING_620096147"}, TradeCaptureReportAck_0);
  set_field(msg, FIX::PreviouslyReported{true}, TradeCaptureReportAck_0);
  set_field(msg, FIX::PriceType{9}, TradeCaptureReportAck_0);
  set_field(msg, FIX::PublishTrdIndicator{true}, TradeCaptureReportAck_0);
  set_field(msg, FIX::QtyType{0}, TradeCaptureReportAck_0);
  set_field(msg, FIX::ResponseDestination{"STRING_428715914"}, TradeCaptureReportAck_0);
  set_field(msg, FIX::ResponseTransportType{0}, TradeCaptureReportAck_0);
  FIX::RndPx RndPx_4;
  RndPx_4.setString("20864693");
set_field(msg, RndPx_4, TradeCaptureReportAck_0);
  set_field(msg, FIX::RptSys{"STRING_967984341"}, TradeCaptureReportAck_0);
  set_field(msg, FIX::SecondaryExecID{"STRING_620972353"}, TradeCaptureReportAck_0);
  set_field(msg, FIX::SecondaryFirmTradeID{"STRING_625017214"}, TradeCaptureReportAck_0);
  set_field(msg, FIX::SecondaryTradeID{"STRING_691676425"}, TradeCaptureReportAck_0);
  set_field(msg, FIX::SecondaryTradeReportID{"STRING_1582531824"}, TradeCaptureReportAck_0);
  set_field(msg, FIX::SecondaryTradeReportRefID{"STRING_334804354"}, TradeCaptureReportAck_0);
  set_field(msg, FIX::SecondaryTrdType{887790409}, TradeCaptureReportAck_0);
  set_field(msg, FIX::SettlCurrency{"CHF"}, TradeCaptureReportAck_0);
  set_field(msg, FIX::SettlDate{"LOCALMKTDATE_1884899989"}, TradeCaptureReportAck_0);
  set_field(msg, FIX::SettlSessID{"STRING_RTH"}, TradeCaptureReportAck_0);
  set_field(msg, FIX::SettlSessSubID{"STRING_761254843"}, TradeCaptureReportAck_0);
  set_field(msg, FIX::SettlType{"STRING_1"}, TradeCaptureReportAck_0);
  set_field(msg, FIX::ShortSaleReason{4}, TradeCaptureReportAck_0);
  set_field(msg, FIX::SubscriptionRequestType{'2'}, TradeCaptureReportAck_0);
  set_field(msg, FIX::Text{"STRING_1389542250"}, TradeCaptureReportAck_0);
  set_field(msg, FIX::TierCode{"STRING_2001008714"}, TradeCaptureReportAck_0);
  set_field(msg, FIX::TradeDate{"LOCALMKTDATE_354248248"}, TradeCaptureReportAck_0);
  set_field(msg, FIX::TradeHandlingInstr{'0'}, TradeCaptureReportAck_0);
  set_field(msg, FIX::TradeID{"STRING_946103584"}, TradeCaptureReportAck_0);
  set_field(msg, FIX::TradeLegRefID{"STRING_1104950595"}, TradeCaptureReportAck_0);
  set_field(msg, FIX::TradeLinkID{"STRING_1570326446"}, TradeCaptureReportAck_0);
  set_field(msg, FIX::TradePublishIndicator{1}, TradeCaptureReportAck_0);
  set_field(msg, FIX::TradeReportID{"STRING_1725046742"}, TradeCaptureReportAck_0);
  set_field(msg, FIX::TradeReportRefID{"STRING_1909435247"}, TradeCaptureReportAck_0);
  set_field(msg, FIX::TradeReportRejectReason{99}, TradeCaptureReportAck_0);
  set_field(msg, FIX::TradeReportTransType{3}, TradeCaptureReportAck_0);
  set_field(msg, FIX::TradeReportType{6}, TradeCaptureReportAck_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(9, 18, 16, 6, 5, 2015)}, TradeCaptureReportAck_0);
  set_field(msg, FIX::TransferReason{"STRING_1040523578"}, TradeCaptureReportAck_0);
  set_field(msg, FIX::TrdMatchID{"STRING_1672019427"}, TradeCaptureReportAck_0);
  set_field(msg, FIX::TrdRptStatus{1}, TradeCaptureReportAck_0);
  set_field(msg, FIX::TrdSubType{29}, TradeCaptureReportAck_0);
  set_field(msg, FIX::TrdType{49}, TradeCaptureReportAck_0);
  set_field(msg, FIX::UnderlyingTradingSessionID{"STRING_874155783"}, TradeCaptureReportAck_0);
  set_field(msg, FIX::UnderlyingTradingSessionSubID{"STRING_1673209767"}, TradeCaptureReportAck_0);
  set_field(msg, FIX::VenueType{'X'}, TradeCaptureReportAck_0);
  all_values.push_back(TradeCaptureReportAck_0);

  all_compo_names.insert("TradeCaptureReportAck");

  // Instrument
  multiset<string> Instrument_98;
  FIX::AttachmentPoint AttachmentPoint_98;
  AttachmentPoint_98.setString("99.890000");
set_field(msg, AttachmentPoint_98, Instrument_98);
  set_field(msg, FIX::CFICode{"STRING_1457031263"}, Instrument_98);
  set_field(msg, FIX::CPProgram{99}, Instrument_98);
  set_field(msg, FIX::CPRegType{"STRING_1024008591"}, Instrument_98);
  FIX::CapPrice CapPrice_98;
  CapPrice_98.setString("13105563");
set_field(msg, CapPrice_98, Instrument_98);
  FIX::ContractMultiplier ContractMultiplier_98;
  ContractMultiplier_98.setString("7771005");
set_field(msg, ContractMultiplier_98, Instrument_98);
  set_field(msg, FIX::ContractMultiplierUnit{0}, Instrument_98);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_109176265"}, Instrument_98);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_1882051135"}, Instrument_98);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_1109209366"}, Instrument_98);
  FIX::CouponRate CouponRate_98;
  CouponRate_98.setString("2.410000");
set_field(msg, CouponRate_98, Instrument_98);
  set_field(msg, FIX::CreditRating{"STRING_1459614230"}, Instrument_98);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_871160965"}, Instrument_98);
  FIX::DetachmentPoint DetachmentPoint_98;
  DetachmentPoint_98.setString("62.420000");
set_field(msg, DetachmentPoint_98, Instrument_98);
  set_field(msg, FIX::EncodedIssuer{"DATA_702904659"}, Instrument_98);
  set_field(msg, FIX::EncodedIssuerLen{1644373147}, Instrument_98);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_432484509"}, Instrument_98);
  set_field(msg, FIX::EncodedSecurityDescLen{1687407708}, Instrument_98);
  set_field(msg, FIX::ExerciseStyle{0}, Instrument_98);
  FIX::Factor Factor_98;
  Factor_98.setString("21372407");
set_field(msg, Factor_98, Instrument_98);
  set_field(msg, FIX::FlexProductEligibilityIndicator{false}, Instrument_98);
  set_field(msg, FIX::FlexibleIndicator{true}, Instrument_98);
  FIX::FloorPrice FloorPrice_98;
  FloorPrice_98.setString("2387061");
set_field(msg, FloorPrice_98, Instrument_98);
  set_field(msg, FIX::FlowScheduleType{3}, Instrument_98);
  set_field(msg, FIX::InstrRegistry{"STRING_1070838209"}, Instrument_98);
  set_field(msg, FIX::InstrmtAssignmentMethod{'1'}, Instrument_98);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_2110056963"}, Instrument_98);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_2085260764"}, Instrument_98);
  set_field(msg, FIX::Issuer{"STRING_102117729"}, Instrument_98);
  set_field(msg, FIX::ListMethod{0}, Instrument_98);
  set_field(msg, FIX::LocaleOfIssue{"STRING_1713454513"}, Instrument_98);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_1884067718"}, Instrument_98);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_945330697"}, Instrument_98);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_2136306805"}, Instrument_98);
  FIX::MinPriceIncrement MinPriceIncrement_98;
  MinPriceIncrement_98.setString("7605926");
set_field(msg, MinPriceIncrement_98, Instrument_98);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_98;
  MinPriceIncrementAmount_98.setString("1084033");
set_field(msg, MinPriceIncrementAmount_98, Instrument_98);
  set_field(msg, FIX::NTPositionLimit{765923697}, Instrument_98);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_98;
  NotionalPercentageOutstanding_98.setString("55.810000");
set_field(msg, NotionalPercentageOutstanding_98, Instrument_98);
  set_field(msg, FIX::OptAttribute{'2'}, Instrument_98);
  FIX::OptPayoutAmount OptPayoutAmount_98;
  OptPayoutAmount_98.setString("5004911");
set_field(msg, OptPayoutAmount_98, Instrument_98);
  set_field(msg, FIX::OptPayoutType{1}, Instrument_98);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_98;
  OriginalNotionalPercentageOutstanding_98.setString("98.840000");
set_field(msg, OriginalNotionalPercentageOutstanding_98, Instrument_98);
  set_field(msg, FIX::Pool{"STRING_1960105414"}, Instrument_98);
  set_field(msg, FIX::PositionLimit{132362264}, Instrument_98);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_PCTPAR"}, Instrument_98);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_515526425"}, Instrument_98);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_98;
  PriceUnitOfMeasureQty_98.setString("17767354");
set_field(msg, PriceUnitOfMeasureQty_98, Instrument_98);
  set_field(msg, FIX::Product{3}, Instrument_98);
  set_field(msg, FIX::ProductComplex{"STRING_55450486"}, Instrument_98);
  set_field(msg, FIX::PutOrCall{1}, Instrument_98);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_1870674106"}, Instrument_98);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_1200849949"}, Instrument_98);
  FIX::RepurchaseRate RepurchaseRate_98;
  RepurchaseRate_98.setString("15.520000");
set_field(msg, RepurchaseRate_98, Instrument_98);
  set_field(msg, FIX::RepurchaseTerm{2109380257}, Instrument_98);
  set_field(msg, FIX::RestructuringType{"STRING_MM"}, Instrument_98);
  set_field(msg, FIX::SecurityDesc{"STRING_307996113"}, Instrument_98);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_1337342202"}, Instrument_98);
  set_field(msg, FIX::SecurityGroup{"STRING_1201862657"}, Instrument_98);
  set_field(msg, FIX::SecurityID{"STRING_245773229"}, Instrument_98);
  set_field(msg, FIX::SecurityIDSource{"STRING_K"}, Instrument_98);
  set_field(msg, FIX::SecurityStatus{"STRING_2"}, Instrument_98);
  set_field(msg, FIX::SecuritySubType{"STRING_1959227743"}, Instrument_98);
  set_field(msg, FIX::SecurityType{"STRING_LQN"}, Instrument_98);
  set_field(msg, FIX::Seniority{"STRING_SB"}, Instrument_98);
  set_field(msg, FIX::SettlMethod{'C'}, Instrument_98);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_1936636663"}, Instrument_98);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_1743896166"}, Instrument_98);
  set_field(msg, FIX::StrikeCurrency{"JPY"}, Instrument_98);
  FIX::StrikeMultiplier StrikeMultiplier_98;
  StrikeMultiplier_98.setString("19614758");
set_field(msg, StrikeMultiplier_98, Instrument_98);
  FIX::StrikePrice StrikePrice_98;
  StrikePrice_98.setString("10669821");
set_field(msg, StrikePrice_98, Instrument_98);
  set_field(msg, FIX::StrikePriceBoundaryMethod{4}, Instrument_98);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_98;
  StrikePriceBoundaryPrecision_98.setString("20.460000");
set_field(msg, StrikePriceBoundaryPrecision_98, Instrument_98);
  set_field(msg, FIX::StrikePriceDeterminationMethod{1}, Instrument_98);
  FIX::StrikeValue StrikeValue_98;
  StrikeValue_98.setString("16296758");
set_field(msg, StrikeValue_98, Instrument_98);
  set_field(msg, FIX::Symbol{"STRING_867660877"}, Instrument_98);
  set_field(msg, FIX::SymbolSfx{"STRING_WI"}, Instrument_98);
  set_field(msg, FIX::TimeUnit{"STRING_Mo"}, Instrument_98);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{2}, Instrument_98);
  set_field(msg, FIX::UnitOfMeasure{"STRING_Bbl"}, Instrument_98);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_98;
  UnitOfMeasureQty_98.setString("10972666");
set_field(msg, UnitOfMeasureQty_98, Instrument_98);
  set_field(msg, FIX::ValuationMethod{"STRING_EQTY"}, Instrument_98);
  all_values.push_back(Instrument_98);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::TradeCaptureReportAck::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_200;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_200);
    FIX::ComplexEventPrice ComplexEventPrice_200;
    ComplexEventPrice_200.setString("2861812");
set_field(noComplexEvents_0_0, ComplexEventPrice_200, ComplexEvents_NoComplexEvents_200);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{1}, ComplexEvents_NoComplexEvents_200);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_200;
    ComplexEventPriceBoundaryPrecision_200.setString("7.090000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_200, ComplexEvents_NoComplexEvents_200);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_200);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{5}, ComplexEvents_NoComplexEvents_200);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_200;
    ComplexOptPayoutAmount_200.setString("8881939");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_200, ComplexEvents_NoComplexEvents_200);
    all_values.push_back(ComplexEvents_NoComplexEvents_200);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::TradeCaptureReportAck::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_406;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(18, 52, 36, 22, 4, 2005)}, ComplexEventDates_NoComplexEventDates_406);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(7, 56, 8, 14, 11, 2000)}, ComplexEventDates_NoComplexEventDates_406);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_406);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradeCaptureReportAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_816;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(10, 47, 49)}, ComplexEventTimes_NoComplexEventTimes_816);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(3, 24, 22)}, ComplexEventTimes_NoComplexEventTimes_816);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_816);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_817;
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(5, 9, 57)}, ComplexEventTimes_NoComplexEventTimes_817);
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(5, 8, 30)}, ComplexEventTimes_NoComplexEventTimes_817);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_817);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportAck::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_201;
    set_field(noComplexEvents_0_1, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_201);
    FIX::ComplexEventPrice ComplexEventPrice_201;
    ComplexEventPrice_201.setString("14275516");
set_field(noComplexEvents_0_1, ComplexEventPrice_201, ComplexEvents_NoComplexEvents_201);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceBoundaryMethod{5}, ComplexEvents_NoComplexEvents_201);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_201;
    ComplexEventPriceBoundaryPrecision_201.setString("84.500000");
set_field(noComplexEvents_0_1, ComplexEventPriceBoundaryPrecision_201, ComplexEvents_NoComplexEvents_201);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_201);
    set_field(noComplexEvents_0_1, FIX::ComplexEventType{3}, ComplexEvents_NoComplexEvents_201);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_201;
    ComplexOptPayoutAmount_201.setString("12024376");
set_field(noComplexEvents_0_1, ComplexOptPayoutAmount_201, ComplexEvents_NoComplexEvents_201);
    all_values.push_back(ComplexEvents_NoComplexEvents_201);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::TradeCaptureReportAck::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_407;
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(17, 15, 26, 20, 5, 2009)}, ComplexEventDates_NoComplexEventDates_407);
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(2, 43, 28, 15, 3, 2009)}, ComplexEventDates_NoComplexEventDates_407);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_407);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradeCaptureReportAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_818;
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(6, 10, 23)}, ComplexEventTimes_NoComplexEventTimes_818);
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(16, 23, 44)}, ComplexEventTimes_NoComplexEventTimes_818);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_818);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::TradeCaptureReportAck::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_202;
    set_field(noComplexEvents_0_2, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_202);
    FIX::ComplexEventPrice ComplexEventPrice_202;
    ComplexEventPrice_202.setString("17152643");
set_field(noComplexEvents_0_2, ComplexEventPrice_202, ComplexEvents_NoComplexEvents_202);
    set_field(noComplexEvents_0_2, FIX::ComplexEventPriceBoundaryMethod{5}, ComplexEvents_NoComplexEvents_202);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_202;
    ComplexEventPriceBoundaryPrecision_202.setString("6.590000");
set_field(noComplexEvents_0_2, ComplexEventPriceBoundaryPrecision_202, ComplexEvents_NoComplexEvents_202);
    set_field(noComplexEvents_0_2, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_202);
    set_field(noComplexEvents_0_2, FIX::ComplexEventType{3}, ComplexEvents_NoComplexEvents_202);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_202;
    ComplexOptPayoutAmount_202.setString("3218846");
set_field(noComplexEvents_0_2, ComplexOptPayoutAmount_202, ComplexEvents_NoComplexEvents_202);
    all_values.push_back(ComplexEvents_NoComplexEvents_202);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::TradeCaptureReportAck::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_408;
      set_field(noComplexEventDates_2_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(6, 27, 59, 26, 12, 2003)}, ComplexEventDates_NoComplexEventDates_408);
      set_field(noComplexEventDates_2_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(17, 38, 6, 5, 5, 2003)}, ComplexEventDates_NoComplexEventDates_408);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_408);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradeCaptureReportAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_819;
        set_field(noComplexEventTimes_2_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(9, 49, 45)}, ComplexEventTimes_NoComplexEventTimes_819);
        set_field(noComplexEventTimes_2_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(17, 8, 39)}, ComplexEventTimes_NoComplexEventTimes_819);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_819);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_820;
        set_field(noComplexEventTimes_2_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(1, 30, 46)}, ComplexEventTimes_NoComplexEventTimes_820);
        set_field(noComplexEventTimes_2_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(15, 14, 34)}, ComplexEventTimes_NoComplexEventTimes_820);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_820);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_1);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_821;
        set_field(noComplexEventTimes_2_0_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(8, 2, 35)}, ComplexEventTimes_NoComplexEventTimes_821);
        set_field(noComplexEventTimes_2_0_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(5, 30, 16)}, ComplexEventTimes_NoComplexEventTimes_821);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_821);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_2);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_0);
    }
    msg.addGroup(noComplexEvents_0_2);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::TradeCaptureReportAck::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_191;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_493203600"}, EvntGrp_NoEvents_191);
    FIX::EventPx EventPx_191;
    EventPx_191.setString("371739");
set_field(noEvents_0_0, EventPx_191, EvntGrp_NoEvents_191);
    set_field(noEvents_0_0, FIX::EventText{"STRING_1837624488"}, EvntGrp_NoEvents_191);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(5, 18, 27, 10, 8, 2011)}, EvntGrp_NoEvents_191);
    set_field(noEvents_0_0, FIX::EventType{18}, EvntGrp_NoEvents_191);
    all_values.push_back(EvntGrp_NoEvents_191);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportAck::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_192;
    set_field(noEvents_0_1, FIX::EventDate{"LOCALMKTDATE_1312759384"}, EvntGrp_NoEvents_192);
    FIX::EventPx EventPx_192;
    EventPx_192.setString("4725825");
set_field(noEvents_0_1, EventPx_192, EvntGrp_NoEvents_192);
    set_field(noEvents_0_1, FIX::EventText{"STRING_1021134036"}, EvntGrp_NoEvents_192);
    set_field(noEvents_0_1, FIX::EventTime{FIX::UTCTIMESTAMP(7, 7, 29, 13, 3, 2013)}, EvntGrp_NoEvents_192);
    set_field(noEvents_0_1, FIX::EventType{1}, EvntGrp_NoEvents_192);
    all_values.push_back(EvntGrp_NoEvents_192);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::TradeCaptureReportAck::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_193;
    set_field(noEvents_0_2, FIX::EventDate{"LOCALMKTDATE_252914310"}, EvntGrp_NoEvents_193);
    FIX::EventPx EventPx_193;
    EventPx_193.setString("15716217");
set_field(noEvents_0_2, EventPx_193, EvntGrp_NoEvents_193);
    set_field(noEvents_0_2, FIX::EventText{"STRING_41479694"}, EvntGrp_NoEvents_193);
    set_field(noEvents_0_2, FIX::EventTime{FIX::UTCTIMESTAMP(18, 43, 28, 22, 7, 2016)}, EvntGrp_NoEvents_193);
    set_field(noEvents_0_2, FIX::EventType{13}, EvntGrp_NoEvents_193);
    all_values.push_back(EvntGrp_NoEvents_193);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::TradeCaptureReportAck::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_188;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_1531934605"}, InstrumentParties_NoInstrumentParties_188);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_188);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{372133073}, InstrumentParties_NoInstrumentParties_188);
    all_values.push_back(InstrumentParties_NoInstrumentParties_188);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::TradeCaptureReportAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_379;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_972688191"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_379);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{1698154200}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_379);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_379);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportAck::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_189;
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyID{"STRING_317912262"}, InstrumentParties_NoInstrumentParties_189);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_189);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyRole{863429937}, InstrumentParties_NoInstrumentParties_189);
    all_values.push_back(InstrumentParties_NoInstrumentParties_189);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::TradeCaptureReportAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_380;
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubID{"STRING_398662157"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_380);
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubIDType{652136140}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_380);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_380);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_381;
      set_field(noInstrumentPartySubIDs_1_1_1, FIX::InstrumentPartySubID{"STRING_214835650"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_381);
      set_field(noInstrumentPartySubIDs_1_1_1, FIX::InstrumentPartySubIDType{1685211144}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_381);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_381);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_382;
      set_field(noInstrumentPartySubIDs_1_1_2, FIX::InstrumentPartySubID{"STRING_183719821"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_382);
      set_field(noInstrumentPartySubIDs_1_1_2, FIX::InstrumentPartySubIDType{86772356}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_382);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_382);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_2);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::TradeCaptureReportAck::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_197;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_1927549304"}, SecAltIDGrp_NoSecurityAltID_197);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_602228476"}, SecAltIDGrp_NoSecurityAltID_197);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_197);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_196;
  set_field(msg, FIX::SecurityXML{"XMLDATA_945180288"}, SecurityXML_196);
  set_field(msg, FIX::SecurityXMLLen{1351687364}, SecurityXML_196);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_643708170"}, SecurityXML_196);
  all_values.push_back(SecurityXML_196);
  all_compo_names.insert("..");

  // PositionAmountData
  // Group PositionAmountData.NoPosAmt
  {
    FIX50SP2::TradeCaptureReportAck::NoPosAmt noPosAmt_0_0;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_18;
    FIX::PosAmt PosAmt_18;
    PosAmt_18.setString("17606965");
set_field(noPosAmt_0_0, PosAmt_18, PositionAmountData_NoPosAmt_18);
    set_field(noPosAmt_0_0, FIX::PosAmtType{"STRING_CMTM"}, PositionAmountData_NoPosAmt_18);
    set_field(noPosAmt_0_0, FIX::PositionCurrency{"STRING_1203864493"}, PositionAmountData_NoPosAmt_18);
    all_values.push_back(PositionAmountData_NoPosAmt_18);
    all_compo_names.insert("...NoPosAmt");

    msg.addGroup(noPosAmt_0_0);
  }
  // RootParties
  // Group RootParties.NoRootPartyIDs
  {
    FIX50SP2::TradeCaptureReportAck::NoRootPartyIDs noRootPartyIDs_0_0;
    // RootParties.NoRootPartyIDs
    multiset<string> RootParties_NoRootPartyIDs_13;
    set_field(noRootPartyIDs_0_0, FIX::RootPartyID{"STRING_1301831048"}, RootParties_NoRootPartyIDs_13);
    set_field(noRootPartyIDs_0_0, FIX::RootPartyIDSource{'2'}, RootParties_NoRootPartyIDs_13);
    set_field(noRootPartyIDs_0_0, FIX::RootPartyRole{296629478}, RootParties_NoRootPartyIDs_13);
    all_values.push_back(RootParties_NoRootPartyIDs_13);
    all_compo_names.insert("...NoRootPartyIDs");

    // RootSubParties
    // Group RootSubParties.NoRootPartySubIDs
    {
      FIX50SP2::TradeCaptureReportAck::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_0;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_27;
      set_field(noRootPartySubIDs_0_1_0, FIX::RootPartySubID{"STRING_1811559719"}, RootSubParties_NoRootPartySubIDs_27);
      set_field(noRootPartySubIDs_0_1_0, FIX::RootPartySubIDType{1461956975}, RootSubParties_NoRootPartySubIDs_27);
      all_values.push_back(RootSubParties_NoRootPartySubIDs_27);
      all_compo_names.insert("...NoRootPartyIDs...NoRootPartySubIDs");

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_0);
    }
    msg.addGroup(noRootPartyIDs_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportAck::NoRootPartyIDs noRootPartyIDs_0_1;
    // RootParties.NoRootPartyIDs
    multiset<string> RootParties_NoRootPartyIDs_14;
    set_field(noRootPartyIDs_0_1, FIX::RootPartyID{"STRING_1872057515"}, RootParties_NoRootPartyIDs_14);
    set_field(noRootPartyIDs_0_1, FIX::RootPartyIDSource{'1'}, RootParties_NoRootPartyIDs_14);
    set_field(noRootPartyIDs_0_1, FIX::RootPartyRole{287161519}, RootParties_NoRootPartyIDs_14);
    all_values.push_back(RootParties_NoRootPartyIDs_14);
    all_compo_names.insert("...NoRootPartyIDs");

    // RootSubParties
    // Group RootSubParties.NoRootPartySubIDs
    {
      FIX50SP2::TradeCaptureReportAck::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_1_1_0;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_28;
      set_field(noRootPartySubIDs_1_1_0, FIX::RootPartySubID{"STRING_1358779278"}, RootSubParties_NoRootPartySubIDs_28);
      set_field(noRootPartySubIDs_1_1_0, FIX::RootPartySubIDType{1812173287}, RootSubParties_NoRootPartySubIDs_28);
      all_values.push_back(RootSubParties_NoRootPartySubIDs_28);
      all_compo_names.insert("...NoRootPartyIDs...NoRootPartySubIDs");

      noRootPartyIDs_0_1.addGroup(noRootPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_1_1_1;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_29;
      set_field(noRootPartySubIDs_1_1_1, FIX::RootPartySubID{"STRING_138674357"}, RootSubParties_NoRootPartySubIDs_29);
      set_field(noRootPartySubIDs_1_1_1, FIX::RootPartySubIDType{1790458}, RootSubParties_NoRootPartySubIDs_29);
      all_values.push_back(RootSubParties_NoRootPartySubIDs_29);
      all_compo_names.insert("...NoRootPartyIDs...NoRootPartySubIDs");

      noRootPartyIDs_0_1.addGroup(noRootPartySubIDs_1_1_1);
    }
    msg.addGroup(noRootPartyIDs_0_1);
  }
  {
    FIX50SP2::TradeCaptureReportAck::NoRootPartyIDs noRootPartyIDs_0_2;
    // RootParties.NoRootPartyIDs
    multiset<string> RootParties_NoRootPartyIDs_15;
    set_field(noRootPartyIDs_0_2, FIX::RootPartyID{"STRING_63351796"}, RootParties_NoRootPartyIDs_15);
    set_field(noRootPartyIDs_0_2, FIX::RootPartyIDSource{'7'}, RootParties_NoRootPartyIDs_15);
    set_field(noRootPartyIDs_0_2, FIX::RootPartyRole{216626108}, RootParties_NoRootPartyIDs_15);
    all_values.push_back(RootParties_NoRootPartyIDs_15);
    all_compo_names.insert("...NoRootPartyIDs");

    // RootSubParties
    // Group RootSubParties.NoRootPartySubIDs
    {
      FIX50SP2::TradeCaptureReportAck::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_2_1_0;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_30;
      set_field(noRootPartySubIDs_2_1_0, FIX::RootPartySubID{"STRING_974530318"}, RootSubParties_NoRootPartySubIDs_30);
      set_field(noRootPartySubIDs_2_1_0, FIX::RootPartySubIDType{303398464}, RootSubParties_NoRootPartySubIDs_30);
      all_values.push_back(RootSubParties_NoRootPartySubIDs_30);
      all_compo_names.insert("...NoRootPartyIDs...NoRootPartySubIDs");

      noRootPartyIDs_0_2.addGroup(noRootPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_2_1_1;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_31;
      set_field(noRootPartySubIDs_2_1_1, FIX::RootPartySubID{"STRING_293345270"}, RootSubParties_NoRootPartySubIDs_31);
      set_field(noRootPartySubIDs_2_1_1, FIX::RootPartySubIDType{754595974}, RootSubParties_NoRootPartySubIDs_31);
      all_values.push_back(RootSubParties_NoRootPartySubIDs_31);
      all_compo_names.insert("...NoRootPartyIDs...NoRootPartySubIDs");

      noRootPartyIDs_0_2.addGroup(noRootPartySubIDs_2_1_1);
    }
    msg.addGroup(noRootPartyIDs_0_2);
  }
  // TrdCapRptAckSideGrp
  // Group TrdCapRptAckSideGrp.NoSides
  {
    FIX50SP2::TradeCaptureReportAck::NoSides noSides_0_0;
    // TrdCapRptAckSideGrp.NoSides
    multiset<string> TrdCapRptAckSideGrp_NoSides_0;
    set_field(noSides_0_0, FIX::Account{"STRING_1238525558"}, TrdCapRptAckSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::AccountType{8}, TrdCapRptAckSideGrp_NoSides_0);
    FIX::AccruedInterestAmt AccruedInterestAmt_12;
    AccruedInterestAmt_12.setString("15493351");
set_field(noSides_0_0, AccruedInterestAmt_12, TrdCapRptAckSideGrp_NoSides_0);
    FIX::AccruedInterestRate AccruedInterestRate_7;
    AccruedInterestRate_7.setString("93.840000");
set_field(noSides_0_0, AccruedInterestRate_7, TrdCapRptAckSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::AcctIDSource{3}, TrdCapRptAckSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::AggressorIndicator{true}, TrdCapRptAckSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::AllocID{"STRING_768730229"}, TrdCapRptAckSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::ComplianceID{"STRING_1655830451"}, TrdCapRptAckSideGrp_NoSides_0);
    FIX::Concession Concession_7;
    Concession_7.setString("14975610");
set_field(noSides_0_0, Concession_7, TrdCapRptAckSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::CustOrderCapacity{4}, TrdCapRptAckSideGrp_NoSides_0);
    FIX::EndAccruedInterestAmt EndAccruedInterestAmt_12;
    EndAccruedInterestAmt_12.setString("19524599");
set_field(noSides_0_0, EndAccruedInterestAmt_12, TrdCapRptAckSideGrp_NoSides_0);
    FIX::EndCash EndCash_12;
    EndCash_12.setString("8500017");
set_field(noSides_0_0, EndCash_12, TrdCapRptAckSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::ExDate{"LOCALMKTDATE_712431415"}, TrdCapRptAckSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::ExchangeRule{"STRING_1266933257"}, TrdCapRptAckSideGrp_NoSides_0);
    FIX::InterestAtMaturity InterestAtMaturity_7;
    InterestAtMaturity_7.setString("5745756");
set_field(noSides_0_0, InterestAtMaturity_7, TrdCapRptAckSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::NetGrossInd{2}, TrdCapRptAckSideGrp_NoSides_0);
    FIX::NetMoney NetMoney_7;
    NetMoney_7.setString("15540947");
set_field(noSides_0_0, NetMoney_7, TrdCapRptAckSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::NumDaysInterest{1997303734}, TrdCapRptAckSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::OddLot{true}, TrdCapRptAckSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::OrderCategory{'6'}, TrdCapRptAckSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::OrderDelay{2135978091}, TrdCapRptAckSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::OrderDelayUnit{4}, TrdCapRptAckSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::PositionEffect{'N'}, TrdCapRptAckSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::PreallocMethod{'0'}, TrdCapRptAckSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::ProcessCode{'2'}, TrdCapRptAckSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::RptSeq{883215504}, TrdCapRptAckSideGrp_NoSides_0);
    FIX::SettlCurrAmt SettlCurrAmt_15;
    SettlCurrAmt_15.setString("17538352");
set_field(noSides_0_0, SettlCurrAmt_15, TrdCapRptAckSideGrp_NoSides_0);
    FIX::SettlCurrFxRate SettlCurrFxRate_15;
    SettlCurrFxRate_15.setString("14864090");
set_field(noSides_0_0, SettlCurrFxRate_15, TrdCapRptAckSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::SettlCurrFxRateCalc{'D'}, TrdCapRptAckSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::Side{'1'}, TrdCapRptAckSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::SideCurrency{"CHF"}, TrdCapRptAckSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::SideExecID{"STRING_319747275"}, TrdCapRptAckSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::SideFillStationCd{"STRING_1793887496"}, TrdCapRptAckSideGrp_NoSides_0);
    FIX::SideGrossTradeAmt SideGrossTradeAmt_2;
    SideGrossTradeAmt_2.setString("19799520");
set_field(noSides_0_0, SideGrossTradeAmt_2, TrdCapRptAckSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::SideLastQty{2039243501}, TrdCapRptAckSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::SideMultiLegReportingType{2}, TrdCapRptAckSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::SideReasonCd{"STRING_601198651"}, TrdCapRptAckSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::SideSettlCurrency{"USD"}, TrdCapRptAckSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::SideTradeReportID{"STRING_1649553994"}, TrdCapRptAckSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::SideTrdSubTyp{1352566586}, TrdCapRptAckSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::SolicitedFlag{true}, TrdCapRptAckSideGrp_NoSides_0);
    FIX::StartCash StartCash_12;
    StartCash_12.setString("2145017");
set_field(noSides_0_0, StartCash_12, TrdCapRptAckSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::TimeBracket{"STRING_472016195"}, TrdCapRptAckSideGrp_NoSides_0);
    FIX::TotalTakedown TotalTakedown_7;
    TotalTakedown_7.setString("6167886");
set_field(noSides_0_0, TotalTakedown_7, TrdCapRptAckSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::TradeAllocIndicator{5}, TrdCapRptAckSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::TradeInputDevice{"STRING_2026110971"}, TrdCapRptAckSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::TradeInputSource{"STRING_466608710"}, TrdCapRptAckSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::TradingSessionID{"STRING_4"}, TrdCapRptAckSideGrp_NoSides_0);
    set_field(noSides_0_0, FIX::TradingSessionSubID{"STRING_5"}, TrdCapRptAckSideGrp_NoSides_0);
    all_values.push_back(TrdCapRptAckSideGrp_NoSides_0);
    all_compo_names.insert("...NoSides");

    // ClrInstGrp
    // Group ClrInstGrp.NoClearingInstructions
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoClearingInstructions noClearingInstructions_0_1_0;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_19;
      set_field(noClearingInstructions_0_1_0, FIX::ClearingInstruction{1}, ClrInstGrp_NoClearingInstructions_19);
      all_values.push_back(ClrInstGrp_NoClearingInstructions_19);
      all_compo_names.insert("...NoSides...NoClearingInstructions");

      noSides_0_0.addGroup(noClearingInstructions_0_1_0);
    }
    // CommissionData
    multiset<string> CommissionData_26;
    set_field(noSides_0_0, FIX::CommCurrency{"EUR"}, CommissionData_26);
    set_field(noSides_0_0, FIX::CommType{'6'}, CommissionData_26);
    FIX::Commission Commission_29;
    Commission_29.setString("11152798");
set_field(noSides_0_0, Commission_29, CommissionData_26);
    set_field(noSides_0_0, FIX::FundRenewWaiv{'Y'}, CommissionData_26);
    all_values.push_back(CommissionData_26);
    all_compo_names.insert("...NoSides.");

    // ContAmtGrp
    // Group ContAmtGrp.NoContAmts
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoContAmts noContAmts_0_1_0;
      // ContAmtGrp.NoContAmts
      multiset<string> ContAmtGrp_NoContAmts_4;
      set_field(noContAmts_0_1_0, FIX::ContAmtCurr{"USD"}, ContAmtGrp_NoContAmts_4);
      set_field(noContAmts_0_1_0, FIX::ContAmtType{9}, ContAmtGrp_NoContAmts_4);
      FIX::ContAmtValue ContAmtValue_4;
      ContAmtValue_4.setString("4119596");
set_field(noContAmts_0_1_0, ContAmtValue_4, ContAmtGrp_NoContAmts_4);
      all_values.push_back(ContAmtGrp_NoContAmts_4);
      all_compo_names.insert("...NoSides...NoContAmts");

      noSides_0_0.addGroup(noContAmts_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoContAmts noContAmts_0_1_1;
      // ContAmtGrp.NoContAmts
      multiset<string> ContAmtGrp_NoContAmts_5;
      set_field(noContAmts_0_1_1, FIX::ContAmtCurr{"GBP"}, ContAmtGrp_NoContAmts_5);
      set_field(noContAmts_0_1_1, FIX::ContAmtType{12}, ContAmtGrp_NoContAmts_5);
      FIX::ContAmtValue ContAmtValue_5;
      ContAmtValue_5.setString("14132144");
set_field(noContAmts_0_1_1, ContAmtValue_5, ContAmtGrp_NoContAmts_5);
      all_values.push_back(ContAmtGrp_NoContAmts_5);
      all_compo_names.insert("...NoSides...NoContAmts");

      noSides_0_0.addGroup(noContAmts_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoContAmts noContAmts_0_1_2;
      // ContAmtGrp.NoContAmts
      multiset<string> ContAmtGrp_NoContAmts_6;
      set_field(noContAmts_0_1_2, FIX::ContAmtCurr{"USD"}, ContAmtGrp_NoContAmts_6);
      set_field(noContAmts_0_1_2, FIX::ContAmtType{15}, ContAmtGrp_NoContAmts_6);
      FIX::ContAmtValue ContAmtValue_6;
      ContAmtValue_6.setString("11985323");
set_field(noContAmts_0_1_2, ContAmtValue_6, ContAmtGrp_NoContAmts_6);
      all_values.push_back(ContAmtGrp_NoContAmts_6);
      all_compo_names.insert("...NoSides...NoContAmts");

      noSides_0_0.addGroup(noContAmts_0_1_2);
    }
    // MiscFeesGrp
    // Group MiscFeesGrp.NoMiscFees
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoMiscFees noMiscFees_0_1_0;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_34;
      FIX::MiscFeeAmt MiscFeeAmt_34;
      MiscFeeAmt_34.setString("184040");
set_field(noMiscFees_0_1_0, MiscFeeAmt_34, MiscFeesGrp_NoMiscFees_34);
      set_field(noMiscFees_0_1_0, FIX::MiscFeeBasis{1}, MiscFeesGrp_NoMiscFees_34);
      set_field(noMiscFees_0_1_0, FIX::MiscFeeCurr{"GBP"}, MiscFeesGrp_NoMiscFees_34);
      set_field(noMiscFees_0_1_0, FIX::MiscFeeType{"STRING_10"}, MiscFeesGrp_NoMiscFees_34);
      all_values.push_back(MiscFeesGrp_NoMiscFees_34);
      all_compo_names.insert("...NoSides...NoMiscFees");

      noSides_0_0.addGroup(noMiscFees_0_1_0);
    }
    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoPartyIDs noPartyIDs_0_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_153;
      set_field(noPartyIDs_0_1_0, FIX::PartyID{"STRING_369047531"}, Parties_NoPartyIDs_153);
      set_field(noPartyIDs_0_1_0, FIX::PartyIDSource{'1'}, Parties_NoPartyIDs_153);
      set_field(noPartyIDs_0_1_0, FIX::PartyRole{1}, Parties_NoPartyIDs_153);
      all_values.push_back(Parties_NoPartyIDs_153);
      all_compo_names.insert("...NoSides...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_303;
        set_field(noPartySubIDs_0_0_2_0, FIX::PartySubID{"STRING_631762197"}, PtysSubGrp_NoPartySubIDs_303);
        set_field(noPartySubIDs_0_0_2_0, FIX::PartySubIDType{9}, PtysSubGrp_NoPartySubIDs_303);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_303);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_304;
        set_field(noPartySubIDs_0_0_2_1, FIX::PartySubID{"STRING_1698523573"}, PtysSubGrp_NoPartySubIDs_304);
        set_field(noPartySubIDs_0_0_2_1, FIX::PartySubIDType{29}, PtysSubGrp_NoPartySubIDs_304);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_304);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_305;
        set_field(noPartySubIDs_0_0_2_2, FIX::PartySubID{"STRING_1558059539"}, PtysSubGrp_NoPartySubIDs_305);
        set_field(noPartySubIDs_0_0_2_2, FIX::PartySubIDType{3}, PtysSubGrp_NoPartySubIDs_305);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_305);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_2);
      }
      noSides_0_0.addGroup(noPartyIDs_0_1_0);
    }
    // SettlDetails
    // Group SettlDetails.NoSettlDetails
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails noSettlDetails_0_1_0;
      // SettlDetails.NoSettlDetails
      multiset<string> SettlDetails_NoSettlDetails_9;
      set_field(noSettlDetails_0_1_0, FIX::SettlObligSource{'2'}, SettlDetails_NoSettlDetails_9);
      all_values.push_back(SettlDetails_NoSettlDetails_9);
      all_compo_names.insert("...NoSides...NoSettlDetails");

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_0_0_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_53;
        set_field(noSettlPartyIDs_0_0_2_0, FIX::SettlPartyID{"STRING_1761153634"}, SettlParties_NoSettlPartyIDs_53);
        set_field(noSettlPartyIDs_0_0_2_0, FIX::SettlPartyIDSource{'2'}, SettlParties_NoSettlPartyIDs_53);
        set_field(noSettlPartyIDs_0_0_2_0, FIX::SettlPartyRole{1222636287}, SettlParties_NoSettlPartyIDs_53);
        all_values.push_back(SettlParties_NoSettlPartyIDs_53);
        all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_105;
          set_field(noSettlPartySubIDs_0_0_0_3_0, FIX::SettlPartySubID{"STRING_2070810815"}, SettlPtysSubGrp_NoSettlPartySubIDs_105);
          set_field(noSettlPartySubIDs_0_0_0_3_0, FIX::SettlPartySubIDType{1467064329}, SettlPtysSubGrp_NoSettlPartySubIDs_105);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_105);
          all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_0_2_0.addGroup(noSettlPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_106;
          set_field(noSettlPartySubIDs_0_0_0_3_1, FIX::SettlPartySubID{"STRING_400855318"}, SettlPtysSubGrp_NoSettlPartySubIDs_106);
          set_field(noSettlPartySubIDs_0_0_0_3_1, FIX::SettlPartySubIDType{1929648405}, SettlPtysSubGrp_NoSettlPartySubIDs_106);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_106);
          all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_0_2_0.addGroup(noSettlPartySubIDs_0_0_0_3_1);
        }
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_0_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_107;
          set_field(noSettlPartySubIDs_0_0_0_3_2, FIX::SettlPartySubID{"STRING_165207373"}, SettlPtysSubGrp_NoSettlPartySubIDs_107);
          set_field(noSettlPartySubIDs_0_0_0_3_2, FIX::SettlPartySubIDType{1214176392}, SettlPtysSubGrp_NoSettlPartySubIDs_107);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_107);
          all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_0_2_0.addGroup(noSettlPartySubIDs_0_0_0_3_2);
        }
        noSettlDetails_0_1_0.addGroup(noSettlPartyIDs_0_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_0_0_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_54;
        set_field(noSettlPartyIDs_0_0_2_1, FIX::SettlPartyID{"STRING_980697155"}, SettlParties_NoSettlPartyIDs_54);
        set_field(noSettlPartyIDs_0_0_2_1, FIX::SettlPartyIDSource{'5'}, SettlParties_NoSettlPartyIDs_54);
        set_field(noSettlPartyIDs_0_0_2_1, FIX::SettlPartyRole{1232580405}, SettlParties_NoSettlPartyIDs_54);
        all_values.push_back(SettlParties_NoSettlPartyIDs_54);
        all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_108;
          set_field(noSettlPartySubIDs_0_0_1_3_0, FIX::SettlPartySubID{"STRING_1075103213"}, SettlPtysSubGrp_NoSettlPartySubIDs_108);
          set_field(noSettlPartySubIDs_0_0_1_3_0, FIX::SettlPartySubIDType{1723000613}, SettlPtysSubGrp_NoSettlPartySubIDs_108);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_108);
          all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_0_2_1.addGroup(noSettlPartySubIDs_0_0_1_3_0);
        }
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_1_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_109;
          set_field(noSettlPartySubIDs_0_0_1_3_1, FIX::SettlPartySubID{"STRING_1931492845"}, SettlPtysSubGrp_NoSettlPartySubIDs_109);
          set_field(noSettlPartySubIDs_0_0_1_3_1, FIX::SettlPartySubIDType{1457618558}, SettlPtysSubGrp_NoSettlPartySubIDs_109);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_109);
          all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_0_2_1.addGroup(noSettlPartySubIDs_0_0_1_3_1);
        }
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_1_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_110;
          set_field(noSettlPartySubIDs_0_0_1_3_2, FIX::SettlPartySubID{"STRING_2092048144"}, SettlPtysSubGrp_NoSettlPartySubIDs_110);
          set_field(noSettlPartySubIDs_0_0_1_3_2, FIX::SettlPartySubIDType{2108151888}, SettlPtysSubGrp_NoSettlPartySubIDs_110);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_110);
          all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_0_2_1.addGroup(noSettlPartySubIDs_0_0_1_3_2);
        }
        noSettlDetails_0_1_0.addGroup(noSettlPartyIDs_0_0_2_1);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_0_0_2_2;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_55;
        set_field(noSettlPartyIDs_0_0_2_2, FIX::SettlPartyID{"STRING_477560863"}, SettlParties_NoSettlPartyIDs_55);
        set_field(noSettlPartyIDs_0_0_2_2, FIX::SettlPartyIDSource{'1'}, SettlParties_NoSettlPartyIDs_55);
        set_field(noSettlPartyIDs_0_0_2_2, FIX::SettlPartyRole{592430437}, SettlParties_NoSettlPartyIDs_55);
        all_values.push_back(SettlParties_NoSettlPartyIDs_55);
        all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_2_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_111;
          set_field(noSettlPartySubIDs_0_0_2_3_0, FIX::SettlPartySubID{"STRING_962063692"}, SettlPtysSubGrp_NoSettlPartySubIDs_111);
          set_field(noSettlPartySubIDs_0_0_2_3_0, FIX::SettlPartySubIDType{311117080}, SettlPtysSubGrp_NoSettlPartySubIDs_111);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_111);
          all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_0_2_2.addGroup(noSettlPartySubIDs_0_0_2_3_0);
        }
        noSettlDetails_0_1_0.addGroup(noSettlPartyIDs_0_0_2_2);
      }
      noSides_0_0.addGroup(noSettlDetails_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails noSettlDetails_0_1_1;
      // SettlDetails.NoSettlDetails
      multiset<string> SettlDetails_NoSettlDetails_10;
      set_field(noSettlDetails_0_1_1, FIX::SettlObligSource{'1'}, SettlDetails_NoSettlDetails_10);
      all_values.push_back(SettlDetails_NoSettlDetails_10);
      all_compo_names.insert("...NoSides...NoSettlDetails");

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_0_1_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_56;
        set_field(noSettlPartyIDs_0_1_2_0, FIX::SettlPartyID{"STRING_870563426"}, SettlParties_NoSettlPartyIDs_56);
        set_field(noSettlPartyIDs_0_1_2_0, FIX::SettlPartyIDSource{'1'}, SettlParties_NoSettlPartyIDs_56);
        set_field(noSettlPartyIDs_0_1_2_0, FIX::SettlPartyRole{291576445}, SettlParties_NoSettlPartyIDs_56);
        all_values.push_back(SettlParties_NoSettlPartyIDs_56);
        all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_112;
          set_field(noSettlPartySubIDs_0_1_0_3_0, FIX::SettlPartySubID{"STRING_102321010"}, SettlPtysSubGrp_NoSettlPartySubIDs_112);
          set_field(noSettlPartySubIDs_0_1_0_3_0, FIX::SettlPartySubIDType{1514212732}, SettlPtysSubGrp_NoSettlPartySubIDs_112);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_112);
          all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_1_2_0.addGroup(noSettlPartySubIDs_0_1_0_3_0);
        }
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_113;
          set_field(noSettlPartySubIDs_0_1_0_3_1, FIX::SettlPartySubID{"STRING_1619357961"}, SettlPtysSubGrp_NoSettlPartySubIDs_113);
          set_field(noSettlPartySubIDs_0_1_0_3_1, FIX::SettlPartySubIDType{25648178}, SettlPtysSubGrp_NoSettlPartySubIDs_113);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_113);
          all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_1_2_0.addGroup(noSettlPartySubIDs_0_1_0_3_1);
        }
        noSettlDetails_0_1_1.addGroup(noSettlPartyIDs_0_1_2_0);
      }
      noSides_0_0.addGroup(noSettlDetails_0_1_1);
    }
    // SideTrdRegTS
    // Group SideTrdRegTS.NoSideTrdRegTS
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoSideTrdRegTS noSideTrdRegTS_0_1_0;
      // SideTrdRegTS.NoSideTrdRegTS
      multiset<string> SideTrdRegTS_NoSideTrdRegTS_2;
      set_field(noSideTrdRegTS_0_1_0, FIX::SideTrdRegTimestamp{FIX::UTCTIMESTAMP(23, 7, 24, 19, 12, 2001)}, SideTrdRegTS_NoSideTrdRegTS_2);
      set_field(noSideTrdRegTS_0_1_0, FIX::SideTrdRegTimestampSrc{"STRING_862468955"}, SideTrdRegTS_NoSideTrdRegTS_2);
      set_field(noSideTrdRegTS_0_1_0, FIX::SideTrdRegTimestampType{439524764}, SideTrdRegTS_NoSideTrdRegTS_2);
      all_values.push_back(SideTrdRegTS_NoSideTrdRegTS_2);
      all_compo_names.insert("...NoSides...NoSideTrdRegTS");

      noSides_0_0.addGroup(noSideTrdRegTS_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoSideTrdRegTS noSideTrdRegTS_0_1_1;
      // SideTrdRegTS.NoSideTrdRegTS
      multiset<string> SideTrdRegTS_NoSideTrdRegTS_3;
      set_field(noSideTrdRegTS_0_1_1, FIX::SideTrdRegTimestamp{FIX::UTCTIMESTAMP(16, 23, 51, 20, 11, 2006)}, SideTrdRegTS_NoSideTrdRegTS_3);
      set_field(noSideTrdRegTS_0_1_1, FIX::SideTrdRegTimestampSrc{"STRING_1199576830"}, SideTrdRegTS_NoSideTrdRegTS_3);
      set_field(noSideTrdRegTS_0_1_1, FIX::SideTrdRegTimestampType{1476018832}, SideTrdRegTS_NoSideTrdRegTS_3);
      all_values.push_back(SideTrdRegTS_NoSideTrdRegTS_3);
      all_compo_names.insert("...NoSides...NoSideTrdRegTS");

      noSides_0_0.addGroup(noSideTrdRegTS_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoSideTrdRegTS noSideTrdRegTS_0_1_2;
      // SideTrdRegTS.NoSideTrdRegTS
      multiset<string> SideTrdRegTS_NoSideTrdRegTS_4;
      set_field(noSideTrdRegTS_0_1_2, FIX::SideTrdRegTimestamp{FIX::UTCTIMESTAMP(14, 38, 0, 8, 4, 2007)}, SideTrdRegTS_NoSideTrdRegTS_4);
      set_field(noSideTrdRegTS_0_1_2, FIX::SideTrdRegTimestampSrc{"STRING_718007100"}, SideTrdRegTS_NoSideTrdRegTS_4);
      set_field(noSideTrdRegTS_0_1_2, FIX::SideTrdRegTimestampType{285928009}, SideTrdRegTS_NoSideTrdRegTS_4);
      all_values.push_back(SideTrdRegTS_NoSideTrdRegTS_4);
      all_compo_names.insert("...NoSides...NoSideTrdRegTS");

      noSides_0_0.addGroup(noSideTrdRegTS_0_1_2);
    }
    // Stipulations
    // Group Stipulations.NoStipulations
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoStipulations noStipulations_0_1_0;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_72;
      set_field(noStipulations_0_1_0, FIX::StipulationType{"STRING_POOL"}, Stipulations_NoStipulations_72);
      set_field(noStipulations_0_1_0, FIX::StipulationValue{"STRING_311576187"}, Stipulations_NoStipulations_72);
      all_values.push_back(Stipulations_NoStipulations_72);
      all_compo_names.insert("...NoSides...NoStipulations");

      noSides_0_0.addGroup(noStipulations_0_1_0);
    }
    // TradeReportOrderDetail
    multiset<string> TradeReportOrderDetail_2;
    set_field(noSides_0_0, FIX::BookingType{0}, TradeReportOrderDetail_2);
    set_field(noSides_0_0, FIX::ClOrdID{"STRING_62611045"}, TradeReportOrderDetail_2);
    FIX::CumQty CumQty_5;
    CumQty_5.setString("1193891");
set_field(noSides_0_0, CumQty_5, TradeReportOrderDetail_2);
    set_field(noSides_0_0, FIX::ExecInst{"MULTIPLECHARVALUE_o"}, TradeReportOrderDetail_2);
    set_field(noSides_0_0, FIX::ExpireTime{FIX::UTCTIMESTAMP(22, 53, 51, 17, 3, 2014)}, TradeReportOrderDetail_2);
    FIX::LeavesQty LeavesQty_4;
    LeavesQty_4.setString("2693626");
set_field(noSides_0_0, LeavesQty_4, TradeReportOrderDetail_2);
    set_field(noSides_0_0, FIX::ListID{"STRING_443293553"}, TradeReportOrderDetail_2);
    set_field(noSides_0_0, FIX::LotType{'2'}, TradeReportOrderDetail_2);
    set_field(noSides_0_0, FIX::OrdStatus{'A'}, TradeReportOrderDetail_2);
    set_field(noSides_0_0, FIX::OrdType{'4'}, TradeReportOrderDetail_2);
    set_field(noSides_0_0, FIX::OrderCapacity{'P'}, TradeReportOrderDetail_2);
    set_field(noSides_0_0, FIX::OrderID{"STRING_2076085895"}, TradeReportOrderDetail_2);
    set_field(noSides_0_0, FIX::OrderInputDevice{"STRING_2146532923"}, TradeReportOrderDetail_2);
    set_field(noSides_0_0, FIX::OrderRestrictions{"MULTIPLECHARVALUE_6"}, TradeReportOrderDetail_2);
    set_field(noSides_0_0, FIX::OrigCustOrderCapacity{2}, TradeReportOrderDetail_2);
    set_field(noSides_0_0, FIX::OrigOrdModTime{FIX::UTCTIMESTAMP(9, 25, 44, 2, 6, 2010)}, TradeReportOrderDetail_2);
    FIX::Price Price_27;
    Price_27.setString("20750490");
set_field(noSides_0_0, Price_27, TradeReportOrderDetail_2);
    set_field(noSides_0_0, FIX::RefOrdIDReason{1}, TradeReportOrderDetail_2);
    set_field(noSides_0_0, FIX::RefOrderID{"STRING_768069841"}, TradeReportOrderDetail_2);
    set_field(noSides_0_0, FIX::RefOrderIDSource{'4'}, TradeReportOrderDetail_2);
    set_field(noSides_0_0, FIX::SecondaryClOrdID{"STRING_496085756"}, TradeReportOrderDetail_2);
    set_field(noSides_0_0, FIX::SecondaryOrderID{"STRING_887458964"}, TradeReportOrderDetail_2);
    FIX::StopPx StopPx_11;
    StopPx_11.setString("7079397");
set_field(noSides_0_0, StopPx_11, TradeReportOrderDetail_2);
    set_field(noSides_0_0, FIX::TimeInForce{'6'}, TradeReportOrderDetail_2);
    set_field(noSides_0_0, FIX::TransBkdTime{FIX::UTCTIMESTAMP(18, 30, 19, 4, 9, 2000)}, TradeReportOrderDetail_2);
    all_values.push_back(TradeReportOrderDetail_2);
    all_compo_names.insert("...NoSides.");

    // DisplayInstruction
    multiset<string> DisplayInstruction_11;
    FIX::DisplayHighQty DisplayHighQty_11;
    DisplayHighQty_11.setString("20989762");
set_field(noSides_0_0, DisplayHighQty_11, DisplayInstruction_11);
    FIX::DisplayLowQty DisplayLowQty_11;
    DisplayLowQty_11.setString("5023188");
set_field(noSides_0_0, DisplayLowQty_11, DisplayInstruction_11);
    set_field(noSides_0_0, FIX::DisplayMethod{'3'}, DisplayInstruction_11);
    FIX::DisplayMinIncr DisplayMinIncr_11;
    DisplayMinIncr_11.setString("6220067");
set_field(noSides_0_0, DisplayMinIncr_11, DisplayInstruction_11);
    FIX::DisplayQty DisplayQty_11;
    DisplayQty_11.setString("2190670");
set_field(noSides_0_0, DisplayQty_11, DisplayInstruction_11);
    set_field(noSides_0_0, FIX::DisplayWhen{'2'}, DisplayInstruction_11);
    FIX::RefreshQty RefreshQty_11;
    RefreshQty_11.setString("6210559");
set_field(noSides_0_0, RefreshQty_11, DisplayInstruction_11);
    FIX::SecondaryDisplayQty SecondaryDisplayQty_11;
    SecondaryDisplayQty_11.setString("20009869");
set_field(noSides_0_0, SecondaryDisplayQty_11, DisplayInstruction_11);
    all_values.push_back(DisplayInstruction_11);
    all_compo_names.insert("...NoSides..");

    // OrderQtyData
    multiset<string> OrderQtyData_29;
    FIX::CashOrderQty CashOrderQty_29;
    CashOrderQty_29.setString("17845291");
set_field(noSides_0_0, CashOrderQty_29, OrderQtyData_29);
    FIX::OrderPercent OrderPercent_29;
    OrderPercent_29.setString("46.210000");
set_field(noSides_0_0, OrderPercent_29, OrderQtyData_29);
    FIX::OrderQty OrderQty_38;
    OrderQty_38.setString("10340110");
set_field(noSides_0_0, OrderQty_38, OrderQtyData_29);
    set_field(noSides_0_0, FIX::RoundingDirection{'2'}, OrderQtyData_29);
    FIX::RoundingModulus RoundingModulus_29;
    RoundingModulus_29.setString("7785802");
set_field(noSides_0_0, RoundingModulus_29, OrderQtyData_29);
    all_values.push_back(OrderQtyData_29);
    all_compo_names.insert("...NoSides..");

    // TrdAllocGrp
    // Group TrdAllocGrp.NoAllocs
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs noAllocs_0_1_0;
      // TrdAllocGrp.NoAllocs
      multiset<string> TrdAllocGrp_NoAllocs_4;
      set_field(noAllocs_0_1_0, FIX::AllocAccount{"STRING_1553708690"}, TrdAllocGrp_NoAllocs_4);
      set_field(noAllocs_0_1_0, FIX::AllocAcctIDSource{1235073920}, TrdAllocGrp_NoAllocs_4);
      set_field(noAllocs_0_1_0, FIX::AllocClearingFeeIndicator{"STRING_1832248409"}, TrdAllocGrp_NoAllocs_4);
      set_field(noAllocs_0_1_0, FIX::AllocCustomerCapacity{"STRING_1987183401"}, TrdAllocGrp_NoAllocs_4);
      set_field(noAllocs_0_1_0, FIX::AllocMethod{1}, TrdAllocGrp_NoAllocs_4);
      FIX::AllocQty AllocQty_48;
      AllocQty_48.setString("16505005");
set_field(noAllocs_0_1_0, AllocQty_48, TrdAllocGrp_NoAllocs_4);
      set_field(noAllocs_0_1_0, FIX::AllocSettlCurrency{"JPY"}, TrdAllocGrp_NoAllocs_4);
      set_field(noAllocs_0_1_0, FIX::IndividualAllocID{"STRING_210956625"}, TrdAllocGrp_NoAllocs_4);
      set_field(noAllocs_0_1_0, FIX::SecondaryIndividualAllocID{"STRING_1981388336"}, TrdAllocGrp_NoAllocs_4);
      all_values.push_back(TrdAllocGrp_NoAllocs_4);
      all_compo_names.insert("...NoSides...NoAllocs");

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs noNested2PartyIDs_0_0_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_52;
        set_field(noNested2PartyIDs_0_0_2_0, FIX::Nested2PartyID{"STRING_1173005452"}, NestedParties2_NoNested2PartyIDs_52);
        set_field(noNested2PartyIDs_0_0_2_0, FIX::Nested2PartyIDSource{'6'}, NestedParties2_NoNested2PartyIDs_52);
        set_field(noNested2PartyIDs_0_0_2_0, FIX::Nested2PartyRole{1809236308}, NestedParties2_NoNested2PartyIDs_52);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_52);
        all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_100;
          set_field(noNested2PartySubIDs_0_0_0_3_0, FIX::Nested2PartySubID{"STRING_394738698"}, NstdPtys2SubGrp_NoNested2PartySubIDs_100);
          set_field(noNested2PartySubIDs_0_0_0_3_0, FIX::Nested2PartySubIDType{1349358032}, NstdPtys2SubGrp_NoNested2PartySubIDs_100);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_100);
          all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_0_2_0.addGroup(noNested2PartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_0_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_101;
          set_field(noNested2PartySubIDs_0_0_0_3_1, FIX::Nested2PartySubID{"STRING_632697118"}, NstdPtys2SubGrp_NoNested2PartySubIDs_101);
          set_field(noNested2PartySubIDs_0_0_0_3_1, FIX::Nested2PartySubIDType{897057519}, NstdPtys2SubGrp_NoNested2PartySubIDs_101);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_101);
          all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_0_2_0.addGroup(noNested2PartySubIDs_0_0_0_3_1);
        }
        noAllocs_0_1_0.addGroup(noNested2PartyIDs_0_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs noNested2PartyIDs_0_0_2_1;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_53;
        set_field(noNested2PartyIDs_0_0_2_1, FIX::Nested2PartyID{"STRING_1765988822"}, NestedParties2_NoNested2PartyIDs_53);
        set_field(noNested2PartyIDs_0_0_2_1, FIX::Nested2PartyIDSource{'1'}, NestedParties2_NoNested2PartyIDs_53);
        set_field(noNested2PartyIDs_0_0_2_1, FIX::Nested2PartyRole{1116124543}, NestedParties2_NoNested2PartyIDs_53);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_53);
        all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_1_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_102;
          set_field(noNested2PartySubIDs_0_0_1_3_0, FIX::Nested2PartySubID{"STRING_1875759794"}, NstdPtys2SubGrp_NoNested2PartySubIDs_102);
          set_field(noNested2PartySubIDs_0_0_1_3_0, FIX::Nested2PartySubIDType{969627824}, NstdPtys2SubGrp_NoNested2PartySubIDs_102);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_102);
          all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_0_2_1.addGroup(noNested2PartySubIDs_0_0_1_3_0);
        }
        noAllocs_0_1_0.addGroup(noNested2PartyIDs_0_0_2_1);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs noNested2PartyIDs_0_0_2_2;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_54;
        set_field(noNested2PartyIDs_0_0_2_2, FIX::Nested2PartyID{"STRING_1748267407"}, NestedParties2_NoNested2PartyIDs_54);
        set_field(noNested2PartyIDs_0_0_2_2, FIX::Nested2PartyIDSource{'3'}, NestedParties2_NoNested2PartyIDs_54);
        set_field(noNested2PartyIDs_0_0_2_2, FIX::Nested2PartyRole{2003638843}, NestedParties2_NoNested2PartyIDs_54);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_54);
        all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_2_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_103;
          set_field(noNested2PartySubIDs_0_0_2_3_0, FIX::Nested2PartySubID{"STRING_1114871034"}, NstdPtys2SubGrp_NoNested2PartySubIDs_103);
          set_field(noNested2PartySubIDs_0_0_2_3_0, FIX::Nested2PartySubIDType{1760838229}, NstdPtys2SubGrp_NoNested2PartySubIDs_103);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_103);
          all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_0_2_2.addGroup(noNested2PartySubIDs_0_0_2_3_0);
        }
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_2_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_104;
          set_field(noNested2PartySubIDs_0_0_2_3_1, FIX::Nested2PartySubID{"STRING_317124193"}, NstdPtys2SubGrp_NoNested2PartySubIDs_104);
          set_field(noNested2PartySubIDs_0_0_2_3_1, FIX::Nested2PartySubIDType{202461306}, NstdPtys2SubGrp_NoNested2PartySubIDs_104);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_104);
          all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_0_2_2.addGroup(noNested2PartySubIDs_0_0_2_3_1);
        }
        noAllocs_0_1_0.addGroup(noNested2PartyIDs_0_0_2_2);
      }
      noSides_0_0.addGroup(noAllocs_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs noAllocs_0_1_1;
      // TrdAllocGrp.NoAllocs
      multiset<string> TrdAllocGrp_NoAllocs_5;
      set_field(noAllocs_0_1_1, FIX::AllocAccount{"STRING_1445602990"}, TrdAllocGrp_NoAllocs_5);
      set_field(noAllocs_0_1_1, FIX::AllocAcctIDSource{156823946}, TrdAllocGrp_NoAllocs_5);
      set_field(noAllocs_0_1_1, FIX::AllocClearingFeeIndicator{"STRING_58121419"}, TrdAllocGrp_NoAllocs_5);
      set_field(noAllocs_0_1_1, FIX::AllocCustomerCapacity{"STRING_948619903"}, TrdAllocGrp_NoAllocs_5);
      set_field(noAllocs_0_1_1, FIX::AllocMethod{1}, TrdAllocGrp_NoAllocs_5);
      FIX::AllocQty AllocQty_49;
      AllocQty_49.setString("8012404");
set_field(noAllocs_0_1_1, AllocQty_49, TrdAllocGrp_NoAllocs_5);
      set_field(noAllocs_0_1_1, FIX::AllocSettlCurrency{"USD"}, TrdAllocGrp_NoAllocs_5);
      set_field(noAllocs_0_1_1, FIX::IndividualAllocID{"STRING_1192234106"}, TrdAllocGrp_NoAllocs_5);
      set_field(noAllocs_0_1_1, FIX::SecondaryIndividualAllocID{"STRING_185098332"}, TrdAllocGrp_NoAllocs_5);
      all_values.push_back(TrdAllocGrp_NoAllocs_5);
      all_compo_names.insert("...NoSides...NoAllocs");

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs noNested2PartyIDs_0_1_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_55;
        set_field(noNested2PartyIDs_0_1_2_0, FIX::Nested2PartyID{"STRING_853986766"}, NestedParties2_NoNested2PartyIDs_55);
        set_field(noNested2PartyIDs_0_1_2_0, FIX::Nested2PartyIDSource{'8'}, NestedParties2_NoNested2PartyIDs_55);
        set_field(noNested2PartyIDs_0_1_2_0, FIX::Nested2PartyRole{1374796560}, NestedParties2_NoNested2PartyIDs_55);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_55);
        all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_105;
          set_field(noNested2PartySubIDs_0_1_0_3_0, FIX::Nested2PartySubID{"STRING_1498999959"}, NstdPtys2SubGrp_NoNested2PartySubIDs_105);
          set_field(noNested2PartySubIDs_0_1_0_3_0, FIX::Nested2PartySubIDType{124370431}, NstdPtys2SubGrp_NoNested2PartySubIDs_105);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_105);
          all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_1_2_0.addGroup(noNested2PartySubIDs_0_1_0_3_0);
        }
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_0_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_106;
          set_field(noNested2PartySubIDs_0_1_0_3_1, FIX::Nested2PartySubID{"STRING_1821849973"}, NstdPtys2SubGrp_NoNested2PartySubIDs_106);
          set_field(noNested2PartySubIDs_0_1_0_3_1, FIX::Nested2PartySubIDType{606220129}, NstdPtys2SubGrp_NoNested2PartySubIDs_106);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_106);
          all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_1_2_0.addGroup(noNested2PartySubIDs_0_1_0_3_1);
        }
        noAllocs_0_1_1.addGroup(noNested2PartyIDs_0_1_2_0);
      }
      noSides_0_0.addGroup(noAllocs_0_1_1);
    }
    msg.addGroup(noSides_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportAck::NoSides noSides_0_1;
    // TrdCapRptAckSideGrp.NoSides
    multiset<string> TrdCapRptAckSideGrp_NoSides_1;
    set_field(noSides_0_1, FIX::Account{"STRING_1240494974"}, TrdCapRptAckSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::AccountType{4}, TrdCapRptAckSideGrp_NoSides_1);
    FIX::AccruedInterestAmt AccruedInterestAmt_13;
    AccruedInterestAmt_13.setString("3344962");
set_field(noSides_0_1, AccruedInterestAmt_13, TrdCapRptAckSideGrp_NoSides_1);
    FIX::AccruedInterestRate AccruedInterestRate_8;
    AccruedInterestRate_8.setString("91.500000");
set_field(noSides_0_1, AccruedInterestRate_8, TrdCapRptAckSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::AcctIDSource{5}, TrdCapRptAckSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::AggressorIndicator{true}, TrdCapRptAckSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::AllocID{"STRING_2066277994"}, TrdCapRptAckSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::ComplianceID{"STRING_149787447"}, TrdCapRptAckSideGrp_NoSides_1);
    FIX::Concession Concession_8;
    Concession_8.setString("17856580");
set_field(noSides_0_1, Concession_8, TrdCapRptAckSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::CustOrderCapacity{4}, TrdCapRptAckSideGrp_NoSides_1);
    FIX::EndAccruedInterestAmt EndAccruedInterestAmt_13;
    EndAccruedInterestAmt_13.setString("4669116");
set_field(noSides_0_1, EndAccruedInterestAmt_13, TrdCapRptAckSideGrp_NoSides_1);
    FIX::EndCash EndCash_13;
    EndCash_13.setString("19881193");
set_field(noSides_0_1, EndCash_13, TrdCapRptAckSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::ExDate{"LOCALMKTDATE_977751917"}, TrdCapRptAckSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::ExchangeRule{"STRING_623735587"}, TrdCapRptAckSideGrp_NoSides_1);
    FIX::InterestAtMaturity InterestAtMaturity_8;
    InterestAtMaturity_8.setString("20462408");
set_field(noSides_0_1, InterestAtMaturity_8, TrdCapRptAckSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::NetGrossInd{1}, TrdCapRptAckSideGrp_NoSides_1);
    FIX::NetMoney NetMoney_8;
    NetMoney_8.setString("11163450");
set_field(noSides_0_1, NetMoney_8, TrdCapRptAckSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::NumDaysInterest{699997653}, TrdCapRptAckSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::OddLot{false}, TrdCapRptAckSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::OrderCategory{'5'}, TrdCapRptAckSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::OrderDelay{1892231759}, TrdCapRptAckSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::OrderDelayUnit{13}, TrdCapRptAckSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::PositionEffect{'D'}, TrdCapRptAckSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::PreallocMethod{'1'}, TrdCapRptAckSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::ProcessCode{'3'}, TrdCapRptAckSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::RptSeq{1650229961}, TrdCapRptAckSideGrp_NoSides_1);
    FIX::SettlCurrAmt SettlCurrAmt_16;
    SettlCurrAmt_16.setString("6545960");
set_field(noSides_0_1, SettlCurrAmt_16, TrdCapRptAckSideGrp_NoSides_1);
    FIX::SettlCurrFxRate SettlCurrFxRate_16;
    SettlCurrFxRate_16.setString("13413821");
set_field(noSides_0_1, SettlCurrFxRate_16, TrdCapRptAckSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::SettlCurrFxRateCalc{'M'}, TrdCapRptAckSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::Side{'1'}, TrdCapRptAckSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::SideCurrency{"USD"}, TrdCapRptAckSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::SideExecID{"STRING_2114550537"}, TrdCapRptAckSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::SideFillStationCd{"STRING_134614943"}, TrdCapRptAckSideGrp_NoSides_1);
    FIX::SideGrossTradeAmt SideGrossTradeAmt_3;
    SideGrossTradeAmt_3.setString("9302508");
set_field(noSides_0_1, SideGrossTradeAmt_3, TrdCapRptAckSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::SideLastQty{1353438833}, TrdCapRptAckSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::SideMultiLegReportingType{1}, TrdCapRptAckSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::SideReasonCd{"STRING_849045215"}, TrdCapRptAckSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::SideSettlCurrency{"CAN"}, TrdCapRptAckSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::SideTradeReportID{"STRING_381194142"}, TrdCapRptAckSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::SideTrdSubTyp{1970137922}, TrdCapRptAckSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::SolicitedFlag{false}, TrdCapRptAckSideGrp_NoSides_1);
    FIX::StartCash StartCash_13;
    StartCash_13.setString("13589460");
set_field(noSides_0_1, StartCash_13, TrdCapRptAckSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::TimeBracket{"STRING_446389861"}, TrdCapRptAckSideGrp_NoSides_1);
    FIX::TotalTakedown TotalTakedown_8;
    TotalTakedown_8.setString("1829693");
set_field(noSides_0_1, TotalTakedown_8, TrdCapRptAckSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::TradeAllocIndicator{4}, TrdCapRptAckSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::TradeInputDevice{"STRING_1562734905"}, TrdCapRptAckSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::TradeInputSource{"STRING_882966961"}, TrdCapRptAckSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::TradingSessionID{"STRING_2"}, TrdCapRptAckSideGrp_NoSides_1);
    set_field(noSides_0_1, FIX::TradingSessionSubID{"STRING_3"}, TrdCapRptAckSideGrp_NoSides_1);
    all_values.push_back(TrdCapRptAckSideGrp_NoSides_1);
    all_compo_names.insert("...NoSides");

    // ClrInstGrp
    // Group ClrInstGrp.NoClearingInstructions
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoClearingInstructions noClearingInstructions_1_1_0;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_20;
      set_field(noClearingInstructions_1_1_0, FIX::ClearingInstruction{12}, ClrInstGrp_NoClearingInstructions_20);
      all_values.push_back(ClrInstGrp_NoClearingInstructions_20);
      all_compo_names.insert("...NoSides...NoClearingInstructions");

      noSides_0_1.addGroup(noClearingInstructions_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoClearingInstructions noClearingInstructions_1_1_1;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_21;
      set_field(noClearingInstructions_1_1_1, FIX::ClearingInstruction{8}, ClrInstGrp_NoClearingInstructions_21);
      all_values.push_back(ClrInstGrp_NoClearingInstructions_21);
      all_compo_names.insert("...NoSides...NoClearingInstructions");

      noSides_0_1.addGroup(noClearingInstructions_1_1_1);
    }
    // CommissionData
    multiset<string> CommissionData_27;
    set_field(noSides_0_1, FIX::CommCurrency{"CHF"}, CommissionData_27);
    set_field(noSides_0_1, FIX::CommType{'6'}, CommissionData_27);
    FIX::Commission Commission_30;
    Commission_30.setString("18810459");
set_field(noSides_0_1, Commission_30, CommissionData_27);
    set_field(noSides_0_1, FIX::FundRenewWaiv{'N'}, CommissionData_27);
    all_values.push_back(CommissionData_27);
    all_compo_names.insert("...NoSides.");

    // ContAmtGrp
    // Group ContAmtGrp.NoContAmts
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoContAmts noContAmts_1_1_0;
      // ContAmtGrp.NoContAmts
      multiset<string> ContAmtGrp_NoContAmts_7;
      set_field(noContAmts_1_1_0, FIX::ContAmtCurr{"CHF"}, ContAmtGrp_NoContAmts_7);
      set_field(noContAmts_1_1_0, FIX::ContAmtType{8}, ContAmtGrp_NoContAmts_7);
      FIX::ContAmtValue ContAmtValue_7;
      ContAmtValue_7.setString("295915");
set_field(noContAmts_1_1_0, ContAmtValue_7, ContAmtGrp_NoContAmts_7);
      all_values.push_back(ContAmtGrp_NoContAmts_7);
      all_compo_names.insert("...NoSides...NoContAmts");

      noSides_0_1.addGroup(noContAmts_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoContAmts noContAmts_1_1_1;
      // ContAmtGrp.NoContAmts
      multiset<string> ContAmtGrp_NoContAmts_8;
      set_field(noContAmts_1_1_1, FIX::ContAmtCurr{"EUR"}, ContAmtGrp_NoContAmts_8);
      set_field(noContAmts_1_1_1, FIX::ContAmtType{15}, ContAmtGrp_NoContAmts_8);
      FIX::ContAmtValue ContAmtValue_8;
      ContAmtValue_8.setString("8287946");
set_field(noContAmts_1_1_1, ContAmtValue_8, ContAmtGrp_NoContAmts_8);
      all_values.push_back(ContAmtGrp_NoContAmts_8);
      all_compo_names.insert("...NoSides...NoContAmts");

      noSides_0_1.addGroup(noContAmts_1_1_1);
    }
    // MiscFeesGrp
    // Group MiscFeesGrp.NoMiscFees
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoMiscFees noMiscFees_1_1_0;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_35;
      FIX::MiscFeeAmt MiscFeeAmt_35;
      MiscFeeAmt_35.setString("7387730");
set_field(noMiscFees_1_1_0, MiscFeeAmt_35, MiscFeesGrp_NoMiscFees_35);
      set_field(noMiscFees_1_1_0, FIX::MiscFeeBasis{2}, MiscFeesGrp_NoMiscFees_35);
      set_field(noMiscFees_1_1_0, FIX::MiscFeeCurr{"CHF"}, MiscFeesGrp_NoMiscFees_35);
      set_field(noMiscFees_1_1_0, FIX::MiscFeeType{"STRING_12"}, MiscFeesGrp_NoMiscFees_35);
      all_values.push_back(MiscFeesGrp_NoMiscFees_35);
      all_compo_names.insert("...NoSides...NoMiscFees");

      noSides_0_1.addGroup(noMiscFees_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoMiscFees noMiscFees_1_1_1;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_36;
      FIX::MiscFeeAmt MiscFeeAmt_36;
      MiscFeeAmt_36.setString("3554876");
set_field(noMiscFees_1_1_1, MiscFeeAmt_36, MiscFeesGrp_NoMiscFees_36);
      set_field(noMiscFees_1_1_1, FIX::MiscFeeBasis{2}, MiscFeesGrp_NoMiscFees_36);
      set_field(noMiscFees_1_1_1, FIX::MiscFeeCurr{"USD"}, MiscFeesGrp_NoMiscFees_36);
      set_field(noMiscFees_1_1_1, FIX::MiscFeeType{"STRING_9"}, MiscFeesGrp_NoMiscFees_36);
      all_values.push_back(MiscFeesGrp_NoMiscFees_36);
      all_compo_names.insert("...NoSides...NoMiscFees");

      noSides_0_1.addGroup(noMiscFees_1_1_1);
    }
    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoPartyIDs noPartyIDs_1_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_154;
      set_field(noPartyIDs_1_1_0, FIX::PartyID{"STRING_1422137129"}, Parties_NoPartyIDs_154);
      set_field(noPartyIDs_1_1_0, FIX::PartyIDSource{'8'}, Parties_NoPartyIDs_154);
      set_field(noPartyIDs_1_1_0, FIX::PartyRole{38}, Parties_NoPartyIDs_154);
      all_values.push_back(Parties_NoPartyIDs_154);
      all_compo_names.insert("...NoSides...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_306;
        set_field(noPartySubIDs_1_0_2_0, FIX::PartySubID{"STRING_267239072"}, PtysSubGrp_NoPartySubIDs_306);
        set_field(noPartySubIDs_1_0_2_0, FIX::PartySubIDType{7}, PtysSubGrp_NoPartySubIDs_306);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_306);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_307;
        set_field(noPartySubIDs_1_0_2_1, FIX::PartySubID{"STRING_1221792344"}, PtysSubGrp_NoPartySubIDs_307);
        set_field(noPartySubIDs_1_0_2_1, FIX::PartySubIDType{24}, PtysSubGrp_NoPartySubIDs_307);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_307);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_308;
        set_field(noPartySubIDs_1_0_2_2, FIX::PartySubID{"STRING_2062763222"}, PtysSubGrp_NoPartySubIDs_308);
        set_field(noPartySubIDs_1_0_2_2, FIX::PartySubIDType{11}, PtysSubGrp_NoPartySubIDs_308);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_308);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_2);
      }
      noSides_0_1.addGroup(noPartyIDs_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoPartyIDs noPartyIDs_1_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_155;
      set_field(noPartyIDs_1_1_1, FIX::PartyID{"STRING_1166936136"}, Parties_NoPartyIDs_155);
      set_field(noPartyIDs_1_1_1, FIX::PartyIDSource{'A'}, Parties_NoPartyIDs_155);
      set_field(noPartyIDs_1_1_1, FIX::PartyRole{70}, Parties_NoPartyIDs_155);
      all_values.push_back(Parties_NoPartyIDs_155);
      all_compo_names.insert("...NoSides...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_309;
        set_field(noPartySubIDs_1_1_2_0, FIX::PartySubID{"STRING_7395827"}, PtysSubGrp_NoPartySubIDs_309);
        set_field(noPartySubIDs_1_1_2_0, FIX::PartySubIDType{19}, PtysSubGrp_NoPartySubIDs_309);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_309);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_1_1_1.addGroup(noPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_310;
        set_field(noPartySubIDs_1_1_2_1, FIX::PartySubID{"STRING_64256954"}, PtysSubGrp_NoPartySubIDs_310);
        set_field(noPartySubIDs_1_1_2_1, FIX::PartySubIDType{8}, PtysSubGrp_NoPartySubIDs_310);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_310);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_1_1_1.addGroup(noPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_311;
        set_field(noPartySubIDs_1_1_2_2, FIX::PartySubID{"STRING_2051416548"}, PtysSubGrp_NoPartySubIDs_311);
        set_field(noPartySubIDs_1_1_2_2, FIX::PartySubIDType{4}, PtysSubGrp_NoPartySubIDs_311);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_311);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_1_1_1.addGroup(noPartySubIDs_1_1_2_2);
      }
      noSides_0_1.addGroup(noPartyIDs_1_1_1);
    }
    // SettlDetails
    // Group SettlDetails.NoSettlDetails
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails noSettlDetails_1_1_0;
      // SettlDetails.NoSettlDetails
      multiset<string> SettlDetails_NoSettlDetails_11;
      set_field(noSettlDetails_1_1_0, FIX::SettlObligSource{'2'}, SettlDetails_NoSettlDetails_11);
      all_values.push_back(SettlDetails_NoSettlDetails_11);
      all_compo_names.insert("...NoSides...NoSettlDetails");

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_1_0_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_57;
        set_field(noSettlPartyIDs_1_0_2_0, FIX::SettlPartyID{"STRING_543142932"}, SettlParties_NoSettlPartyIDs_57);
        set_field(noSettlPartyIDs_1_0_2_0, FIX::SettlPartyIDSource{'5'}, SettlParties_NoSettlPartyIDs_57);
        set_field(noSettlPartyIDs_1_0_2_0, FIX::SettlPartyRole{179117177}, SettlParties_NoSettlPartyIDs_57);
        all_values.push_back(SettlParties_NoSettlPartyIDs_57);
        all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_114;
          set_field(noSettlPartySubIDs_1_0_0_3_0, FIX::SettlPartySubID{"STRING_177472508"}, SettlPtysSubGrp_NoSettlPartySubIDs_114);
          set_field(noSettlPartySubIDs_1_0_0_3_0, FIX::SettlPartySubIDType{1672439021}, SettlPtysSubGrp_NoSettlPartySubIDs_114);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_114);
          all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_1_0_2_0.addGroup(noSettlPartySubIDs_1_0_0_3_0);
        }
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_115;
          set_field(noSettlPartySubIDs_1_0_0_3_1, FIX::SettlPartySubID{"STRING_1974028535"}, SettlPtysSubGrp_NoSettlPartySubIDs_115);
          set_field(noSettlPartySubIDs_1_0_0_3_1, FIX::SettlPartySubIDType{652508380}, SettlPtysSubGrp_NoSettlPartySubIDs_115);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_115);
          all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_1_0_2_0.addGroup(noSettlPartySubIDs_1_0_0_3_1);
        }
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_0_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_116;
          set_field(noSettlPartySubIDs_1_0_0_3_2, FIX::SettlPartySubID{"STRING_947092502"}, SettlPtysSubGrp_NoSettlPartySubIDs_116);
          set_field(noSettlPartySubIDs_1_0_0_3_2, FIX::SettlPartySubIDType{1107723762}, SettlPtysSubGrp_NoSettlPartySubIDs_116);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_116);
          all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_1_0_2_0.addGroup(noSettlPartySubIDs_1_0_0_3_2);
        }
        noSettlDetails_1_1_0.addGroup(noSettlPartyIDs_1_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_1_0_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_58;
        set_field(noSettlPartyIDs_1_0_2_1, FIX::SettlPartyID{"STRING_1755259324"}, SettlParties_NoSettlPartyIDs_58);
        set_field(noSettlPartyIDs_1_0_2_1, FIX::SettlPartyIDSource{'1'}, SettlParties_NoSettlPartyIDs_58);
        set_field(noSettlPartyIDs_1_0_2_1, FIX::SettlPartyRole{1374962834}, SettlParties_NoSettlPartyIDs_58);
        all_values.push_back(SettlParties_NoSettlPartyIDs_58);
        all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_117;
          set_field(noSettlPartySubIDs_1_0_1_3_0, FIX::SettlPartySubID{"STRING_348432998"}, SettlPtysSubGrp_NoSettlPartySubIDs_117);
          set_field(noSettlPartySubIDs_1_0_1_3_0, FIX::SettlPartySubIDType{131008418}, SettlPtysSubGrp_NoSettlPartySubIDs_117);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_117);
          all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_1_0_2_1.addGroup(noSettlPartySubIDs_1_0_1_3_0);
        }
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_1_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_118;
          set_field(noSettlPartySubIDs_1_0_1_3_1, FIX::SettlPartySubID{"STRING_1852256144"}, SettlPtysSubGrp_NoSettlPartySubIDs_118);
          set_field(noSettlPartySubIDs_1_0_1_3_1, FIX::SettlPartySubIDType{1658884425}, SettlPtysSubGrp_NoSettlPartySubIDs_118);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_118);
          all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_1_0_2_1.addGroup(noSettlPartySubIDs_1_0_1_3_1);
        }
        noSettlDetails_1_1_0.addGroup(noSettlPartyIDs_1_0_2_1);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_1_0_2_2;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_59;
        set_field(noSettlPartyIDs_1_0_2_2, FIX::SettlPartyID{"STRING_1297944554"}, SettlParties_NoSettlPartyIDs_59);
        set_field(noSettlPartyIDs_1_0_2_2, FIX::SettlPartyIDSource{'1'}, SettlParties_NoSettlPartyIDs_59);
        set_field(noSettlPartyIDs_1_0_2_2, FIX::SettlPartyRole{710629953}, SettlParties_NoSettlPartyIDs_59);
        all_values.push_back(SettlParties_NoSettlPartyIDs_59);
        all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_2_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_119;
          set_field(noSettlPartySubIDs_1_0_2_3_0, FIX::SettlPartySubID{"STRING_1837456227"}, SettlPtysSubGrp_NoSettlPartySubIDs_119);
          set_field(noSettlPartySubIDs_1_0_2_3_0, FIX::SettlPartySubIDType{1933251822}, SettlPtysSubGrp_NoSettlPartySubIDs_119);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_119);
          all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_1_0_2_2.addGroup(noSettlPartySubIDs_1_0_2_3_0);
        }
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_2_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_120;
          set_field(noSettlPartySubIDs_1_0_2_3_1, FIX::SettlPartySubID{"STRING_1512672619"}, SettlPtysSubGrp_NoSettlPartySubIDs_120);
          set_field(noSettlPartySubIDs_1_0_2_3_1, FIX::SettlPartySubIDType{1080398810}, SettlPtysSubGrp_NoSettlPartySubIDs_120);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_120);
          all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_1_0_2_2.addGroup(noSettlPartySubIDs_1_0_2_3_1);
        }
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_2_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_121;
          set_field(noSettlPartySubIDs_1_0_2_3_2, FIX::SettlPartySubID{"STRING_1837184723"}, SettlPtysSubGrp_NoSettlPartySubIDs_121);
          set_field(noSettlPartySubIDs_1_0_2_3_2, FIX::SettlPartySubIDType{192276983}, SettlPtysSubGrp_NoSettlPartySubIDs_121);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_121);
          all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_1_0_2_2.addGroup(noSettlPartySubIDs_1_0_2_3_2);
        }
        noSettlDetails_1_1_0.addGroup(noSettlPartyIDs_1_0_2_2);
      }
      noSides_0_1.addGroup(noSettlDetails_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails noSettlDetails_1_1_1;
      // SettlDetails.NoSettlDetails
      multiset<string> SettlDetails_NoSettlDetails_12;
      set_field(noSettlDetails_1_1_1, FIX::SettlObligSource{'3'}, SettlDetails_NoSettlDetails_12);
      all_values.push_back(SettlDetails_NoSettlDetails_12);
      all_compo_names.insert("...NoSides...NoSettlDetails");

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_1_1_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_60;
        set_field(noSettlPartyIDs_1_1_2_0, FIX::SettlPartyID{"STRING_15906548"}, SettlParties_NoSettlPartyIDs_60);
        set_field(noSettlPartyIDs_1_1_2_0, FIX::SettlPartyIDSource{'1'}, SettlParties_NoSettlPartyIDs_60);
        set_field(noSettlPartyIDs_1_1_2_0, FIX::SettlPartyRole{1451408670}, SettlParties_NoSettlPartyIDs_60);
        all_values.push_back(SettlParties_NoSettlPartyIDs_60);
        all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_1_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_122;
          set_field(noSettlPartySubIDs_1_1_0_3_0, FIX::SettlPartySubID{"STRING_1008733821"}, SettlPtysSubGrp_NoSettlPartySubIDs_122);
          set_field(noSettlPartySubIDs_1_1_0_3_0, FIX::SettlPartySubIDType{1628881179}, SettlPtysSubGrp_NoSettlPartySubIDs_122);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_122);
          all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_1_1_2_0.addGroup(noSettlPartySubIDs_1_1_0_3_0);
        }
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_1_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_123;
          set_field(noSettlPartySubIDs_1_1_0_3_1, FIX::SettlPartySubID{"STRING_1867462746"}, SettlPtysSubGrp_NoSettlPartySubIDs_123);
          set_field(noSettlPartySubIDs_1_1_0_3_1, FIX::SettlPartySubIDType{835278709}, SettlPtysSubGrp_NoSettlPartySubIDs_123);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_123);
          all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_1_1_2_0.addGroup(noSettlPartySubIDs_1_1_0_3_1);
        }
        noSettlDetails_1_1_1.addGroup(noSettlPartyIDs_1_1_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_1_1_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_61;
        set_field(noSettlPartyIDs_1_1_2_1, FIX::SettlPartyID{"STRING_133905911"}, SettlParties_NoSettlPartyIDs_61);
        set_field(noSettlPartyIDs_1_1_2_1, FIX::SettlPartyIDSource{'6'}, SettlParties_NoSettlPartyIDs_61);
        set_field(noSettlPartyIDs_1_1_2_1, FIX::SettlPartyRole{1943002471}, SettlParties_NoSettlPartyIDs_61);
        all_values.push_back(SettlParties_NoSettlPartyIDs_61);
        all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_1_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_124;
          set_field(noSettlPartySubIDs_1_1_1_3_0, FIX::SettlPartySubID{"STRING_1941195902"}, SettlPtysSubGrp_NoSettlPartySubIDs_124);
          set_field(noSettlPartySubIDs_1_1_1_3_0, FIX::SettlPartySubIDType{1170481657}, SettlPtysSubGrp_NoSettlPartySubIDs_124);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_124);
          all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_1_1_2_1.addGroup(noSettlPartySubIDs_1_1_1_3_0);
        }
        noSettlDetails_1_1_1.addGroup(noSettlPartyIDs_1_1_2_1);
      }
      noSides_0_1.addGroup(noSettlDetails_1_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails noSettlDetails_1_1_2;
      // SettlDetails.NoSettlDetails
      multiset<string> SettlDetails_NoSettlDetails_13;
      set_field(noSettlDetails_1_1_2, FIX::SettlObligSource{'3'}, SettlDetails_NoSettlDetails_13);
      all_values.push_back(SettlDetails_NoSettlDetails_13);
      all_compo_names.insert("...NoSides...NoSettlDetails");

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_1_2_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_62;
        set_field(noSettlPartyIDs_1_2_2_0, FIX::SettlPartyID{"STRING_1301490076"}, SettlParties_NoSettlPartyIDs_62);
        set_field(noSettlPartyIDs_1_2_2_0, FIX::SettlPartyIDSource{'1'}, SettlParties_NoSettlPartyIDs_62);
        set_field(noSettlPartyIDs_1_2_2_0, FIX::SettlPartyRole{1801029677}, SettlParties_NoSettlPartyIDs_62);
        all_values.push_back(SettlParties_NoSettlPartyIDs_62);
        all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_2_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_125;
          set_field(noSettlPartySubIDs_1_2_0_3_0, FIX::SettlPartySubID{"STRING_1066007404"}, SettlPtysSubGrp_NoSettlPartySubIDs_125);
          set_field(noSettlPartySubIDs_1_2_0_3_0, FIX::SettlPartySubIDType{364175982}, SettlPtysSubGrp_NoSettlPartySubIDs_125);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_125);
          all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_1_2_2_0.addGroup(noSettlPartySubIDs_1_2_0_3_0);
        }
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_2_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_126;
          set_field(noSettlPartySubIDs_1_2_0_3_1, FIX::SettlPartySubID{"STRING_1900366647"}, SettlPtysSubGrp_NoSettlPartySubIDs_126);
          set_field(noSettlPartySubIDs_1_2_0_3_1, FIX::SettlPartySubIDType{755979983}, SettlPtysSubGrp_NoSettlPartySubIDs_126);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_126);
          all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_1_2_2_0.addGroup(noSettlPartySubIDs_1_2_0_3_1);
        }
        noSettlDetails_1_1_2.addGroup(noSettlPartyIDs_1_2_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_1_2_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_63;
        set_field(noSettlPartyIDs_1_2_2_1, FIX::SettlPartyID{"STRING_149944157"}, SettlParties_NoSettlPartyIDs_63);
        set_field(noSettlPartyIDs_1_2_2_1, FIX::SettlPartyIDSource{'1'}, SettlParties_NoSettlPartyIDs_63);
        set_field(noSettlPartyIDs_1_2_2_1, FIX::SettlPartyRole{1836378794}, SettlParties_NoSettlPartyIDs_63);
        all_values.push_back(SettlParties_NoSettlPartyIDs_63);
        all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_2_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_127;
          set_field(noSettlPartySubIDs_1_2_1_3_0, FIX::SettlPartySubID{"STRING_1457832602"}, SettlPtysSubGrp_NoSettlPartySubIDs_127);
          set_field(noSettlPartySubIDs_1_2_1_3_0, FIX::SettlPartySubIDType{751009577}, SettlPtysSubGrp_NoSettlPartySubIDs_127);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_127);
          all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_1_2_2_1.addGroup(noSettlPartySubIDs_1_2_1_3_0);
        }
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_2_1_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_128;
          set_field(noSettlPartySubIDs_1_2_1_3_1, FIX::SettlPartySubID{"STRING_705650304"}, SettlPtysSubGrp_NoSettlPartySubIDs_128);
          set_field(noSettlPartySubIDs_1_2_1_3_1, FIX::SettlPartySubIDType{1473739150}, SettlPtysSubGrp_NoSettlPartySubIDs_128);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_128);
          all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_1_2_2_1.addGroup(noSettlPartySubIDs_1_2_1_3_1);
        }
        noSettlDetails_1_1_2.addGroup(noSettlPartyIDs_1_2_2_1);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_1_2_2_2;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_64;
        set_field(noSettlPartyIDs_1_2_2_2, FIX::SettlPartyID{"STRING_208783293"}, SettlParties_NoSettlPartyIDs_64);
        set_field(noSettlPartyIDs_1_2_2_2, FIX::SettlPartyIDSource{'9'}, SettlParties_NoSettlPartyIDs_64);
        set_field(noSettlPartyIDs_1_2_2_2, FIX::SettlPartyRole{1668762876}, SettlParties_NoSettlPartyIDs_64);
        all_values.push_back(SettlParties_NoSettlPartyIDs_64);
        all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_2_2_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_129;
          set_field(noSettlPartySubIDs_1_2_2_3_0, FIX::SettlPartySubID{"STRING_1638456505"}, SettlPtysSubGrp_NoSettlPartySubIDs_129);
          set_field(noSettlPartySubIDs_1_2_2_3_0, FIX::SettlPartySubIDType{1388741974}, SettlPtysSubGrp_NoSettlPartySubIDs_129);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_129);
          all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_1_2_2_2.addGroup(noSettlPartySubIDs_1_2_2_3_0);
        }
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_2_2_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_130;
          set_field(noSettlPartySubIDs_1_2_2_3_1, FIX::SettlPartySubID{"STRING_2052795824"}, SettlPtysSubGrp_NoSettlPartySubIDs_130);
          set_field(noSettlPartySubIDs_1_2_2_3_1, FIX::SettlPartySubIDType{1772362416}, SettlPtysSubGrp_NoSettlPartySubIDs_130);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_130);
          all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_1_2_2_2.addGroup(noSettlPartySubIDs_1_2_2_3_1);
        }
        noSettlDetails_1_1_2.addGroup(noSettlPartyIDs_1_2_2_2);
      }
      noSides_0_1.addGroup(noSettlDetails_1_1_2);
    }
    // SideTrdRegTS
    // Group SideTrdRegTS.NoSideTrdRegTS
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoSideTrdRegTS noSideTrdRegTS_1_1_0;
      // SideTrdRegTS.NoSideTrdRegTS
      multiset<string> SideTrdRegTS_NoSideTrdRegTS_5;
      set_field(noSideTrdRegTS_1_1_0, FIX::SideTrdRegTimestamp{FIX::UTCTIMESTAMP(19, 29, 36, 16, 2, 2014)}, SideTrdRegTS_NoSideTrdRegTS_5);
      set_field(noSideTrdRegTS_1_1_0, FIX::SideTrdRegTimestampSrc{"STRING_281165516"}, SideTrdRegTS_NoSideTrdRegTS_5);
      set_field(noSideTrdRegTS_1_1_0, FIX::SideTrdRegTimestampType{1645217110}, SideTrdRegTS_NoSideTrdRegTS_5);
      all_values.push_back(SideTrdRegTS_NoSideTrdRegTS_5);
      all_compo_names.insert("...NoSides...NoSideTrdRegTS");

      noSides_0_1.addGroup(noSideTrdRegTS_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoSideTrdRegTS noSideTrdRegTS_1_1_1;
      // SideTrdRegTS.NoSideTrdRegTS
      multiset<string> SideTrdRegTS_NoSideTrdRegTS_6;
      set_field(noSideTrdRegTS_1_1_1, FIX::SideTrdRegTimestamp{FIX::UTCTIMESTAMP(1, 52, 26, 20, 2, 2017)}, SideTrdRegTS_NoSideTrdRegTS_6);
      set_field(noSideTrdRegTS_1_1_1, FIX::SideTrdRegTimestampSrc{"STRING_1792048050"}, SideTrdRegTS_NoSideTrdRegTS_6);
      set_field(noSideTrdRegTS_1_1_1, FIX::SideTrdRegTimestampType{1998982481}, SideTrdRegTS_NoSideTrdRegTS_6);
      all_values.push_back(SideTrdRegTS_NoSideTrdRegTS_6);
      all_compo_names.insert("...NoSides...NoSideTrdRegTS");

      noSides_0_1.addGroup(noSideTrdRegTS_1_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoSideTrdRegTS noSideTrdRegTS_1_1_2;
      // SideTrdRegTS.NoSideTrdRegTS
      multiset<string> SideTrdRegTS_NoSideTrdRegTS_7;
      set_field(noSideTrdRegTS_1_1_2, FIX::SideTrdRegTimestamp{FIX::UTCTIMESTAMP(4, 57, 1, 9, 9, 2013)}, SideTrdRegTS_NoSideTrdRegTS_7);
      set_field(noSideTrdRegTS_1_1_2, FIX::SideTrdRegTimestampSrc{"STRING_1821874388"}, SideTrdRegTS_NoSideTrdRegTS_7);
      set_field(noSideTrdRegTS_1_1_2, FIX::SideTrdRegTimestampType{57697321}, SideTrdRegTS_NoSideTrdRegTS_7);
      all_values.push_back(SideTrdRegTS_NoSideTrdRegTS_7);
      all_compo_names.insert("...NoSides...NoSideTrdRegTS");

      noSides_0_1.addGroup(noSideTrdRegTS_1_1_2);
    }
    // Stipulations
    // Group Stipulations.NoStipulations
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoStipulations noStipulations_1_1_0;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_73;
      set_field(noStipulations_1_1_0, FIX::StipulationType{"STRING_COUPON"}, Stipulations_NoStipulations_73);
      set_field(noStipulations_1_1_0, FIX::StipulationValue{"STRING_1830059738"}, Stipulations_NoStipulations_73);
      all_values.push_back(Stipulations_NoStipulations_73);
      all_compo_names.insert("...NoSides...NoStipulations");

      noSides_0_1.addGroup(noStipulations_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoStipulations noStipulations_1_1_1;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_74;
      set_field(noStipulations_1_1_1, FIX::StipulationType{"STRING_PROTECT"}, Stipulations_NoStipulations_74);
      set_field(noStipulations_1_1_1, FIX::StipulationValue{"STRING_1428017563"}, Stipulations_NoStipulations_74);
      all_values.push_back(Stipulations_NoStipulations_74);
      all_compo_names.insert("...NoSides...NoStipulations");

      noSides_0_1.addGroup(noStipulations_1_1_1);
    }
    // TradeReportOrderDetail
    multiset<string> TradeReportOrderDetail_3;
    set_field(noSides_0_1, FIX::BookingType{1}, TradeReportOrderDetail_3);
    set_field(noSides_0_1, FIX::ClOrdID{"STRING_652706452"}, TradeReportOrderDetail_3);
    FIX::CumQty CumQty_6;
    CumQty_6.setString("1518465");
set_field(noSides_0_1, CumQty_6, TradeReportOrderDetail_3);
    set_field(noSides_0_1, FIX::ExecInst{"MULTIPLECHARVALUE_r"}, TradeReportOrderDetail_3);
    set_field(noSides_0_1, FIX::ExpireTime{FIX::UTCTIMESTAMP(8, 34, 55, 11, 12, 2015)}, TradeReportOrderDetail_3);
    FIX::LeavesQty LeavesQty_5;
    LeavesQty_5.setString("8845887");
set_field(noSides_0_1, LeavesQty_5, TradeReportOrderDetail_3);
    set_field(noSides_0_1, FIX::ListID{"STRING_1678362651"}, TradeReportOrderDetail_3);
    set_field(noSides_0_1, FIX::LotType{'2'}, TradeReportOrderDetail_3);
    set_field(noSides_0_1, FIX::OrdStatus{'C'}, TradeReportOrderDetail_3);
    set_field(noSides_0_1, FIX::OrdType{'F'}, TradeReportOrderDetail_3);
    set_field(noSides_0_1, FIX::OrderCapacity{'I'}, TradeReportOrderDetail_3);
    set_field(noSides_0_1, FIX::OrderID{"STRING_1038871466"}, TradeReportOrderDetail_3);
    set_field(noSides_0_1, FIX::OrderInputDevice{"STRING_1718501034"}, TradeReportOrderDetail_3);
    set_field(noSides_0_1, FIX::OrderRestrictions{"MULTIPLECHARVALUE_5"}, TradeReportOrderDetail_3);
    set_field(noSides_0_1, FIX::OrigCustOrderCapacity{4}, TradeReportOrderDetail_3);
    set_field(noSides_0_1, FIX::OrigOrdModTime{FIX::UTCTIMESTAMP(12, 57, 8, 9, 2, 2008)}, TradeReportOrderDetail_3);
    FIX::Price Price_28;
    Price_28.setString("5840362");
set_field(noSides_0_1, Price_28, TradeReportOrderDetail_3);
    set_field(noSides_0_1, FIX::RefOrdIDReason{0}, TradeReportOrderDetail_3);
    set_field(noSides_0_1, FIX::RefOrderID{"STRING_857485880"}, TradeReportOrderDetail_3);
    set_field(noSides_0_1, FIX::RefOrderIDSource{'3'}, TradeReportOrderDetail_3);
    set_field(noSides_0_1, FIX::SecondaryClOrdID{"STRING_1322998396"}, TradeReportOrderDetail_3);
    set_field(noSides_0_1, FIX::SecondaryOrderID{"STRING_1009332452"}, TradeReportOrderDetail_3);
    FIX::StopPx StopPx_12;
    StopPx_12.setString("18750112");
set_field(noSides_0_1, StopPx_12, TradeReportOrderDetail_3);
    set_field(noSides_0_1, FIX::TimeInForce{'1'}, TradeReportOrderDetail_3);
    set_field(noSides_0_1, FIX::TransBkdTime{FIX::UTCTIMESTAMP(12, 48, 32, 27, 8, 2006)}, TradeReportOrderDetail_3);
    all_values.push_back(TradeReportOrderDetail_3);
    all_compo_names.insert("...NoSides.");

    // DisplayInstruction
    multiset<string> DisplayInstruction_12;
    FIX::DisplayHighQty DisplayHighQty_12;
    DisplayHighQty_12.setString("13566205");
set_field(noSides_0_1, DisplayHighQty_12, DisplayInstruction_12);
    FIX::DisplayLowQty DisplayLowQty_12;
    DisplayLowQty_12.setString("15394468");
set_field(noSides_0_1, DisplayLowQty_12, DisplayInstruction_12);
    set_field(noSides_0_1, FIX::DisplayMethod{'2'}, DisplayInstruction_12);
    FIX::DisplayMinIncr DisplayMinIncr_12;
    DisplayMinIncr_12.setString("5320639");
set_field(noSides_0_1, DisplayMinIncr_12, DisplayInstruction_12);
    FIX::DisplayQty DisplayQty_12;
    DisplayQty_12.setString("12593360");
set_field(noSides_0_1, DisplayQty_12, DisplayInstruction_12);
    set_field(noSides_0_1, FIX::DisplayWhen{'2'}, DisplayInstruction_12);
    FIX::RefreshQty RefreshQty_12;
    RefreshQty_12.setString("1030813");
set_field(noSides_0_1, RefreshQty_12, DisplayInstruction_12);
    FIX::SecondaryDisplayQty SecondaryDisplayQty_12;
    SecondaryDisplayQty_12.setString("15363744");
set_field(noSides_0_1, SecondaryDisplayQty_12, DisplayInstruction_12);
    all_values.push_back(DisplayInstruction_12);
    all_compo_names.insert("...NoSides..");

    // OrderQtyData
    multiset<string> OrderQtyData_30;
    FIX::CashOrderQty CashOrderQty_30;
    CashOrderQty_30.setString("8734252");
set_field(noSides_0_1, CashOrderQty_30, OrderQtyData_30);
    FIX::OrderPercent OrderPercent_30;
    OrderPercent_30.setString("59.660000");
set_field(noSides_0_1, OrderPercent_30, OrderQtyData_30);
    FIX::OrderQty OrderQty_39;
    OrderQty_39.setString("2326535");
set_field(noSides_0_1, OrderQty_39, OrderQtyData_30);
    set_field(noSides_0_1, FIX::RoundingDirection{'0'}, OrderQtyData_30);
    FIX::RoundingModulus RoundingModulus_30;
    RoundingModulus_30.setString("1282213");
set_field(noSides_0_1, RoundingModulus_30, OrderQtyData_30);
    all_values.push_back(OrderQtyData_30);
    all_compo_names.insert("...NoSides..");

    // TrdAllocGrp
    // Group TrdAllocGrp.NoAllocs
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs noAllocs_1_1_0;
      // TrdAllocGrp.NoAllocs
      multiset<string> TrdAllocGrp_NoAllocs_6;
      set_field(noAllocs_1_1_0, FIX::AllocAccount{"STRING_1417829876"}, TrdAllocGrp_NoAllocs_6);
      set_field(noAllocs_1_1_0, FIX::AllocAcctIDSource{1705173331}, TrdAllocGrp_NoAllocs_6);
      set_field(noAllocs_1_1_0, FIX::AllocClearingFeeIndicator{"STRING_1718149972"}, TrdAllocGrp_NoAllocs_6);
      set_field(noAllocs_1_1_0, FIX::AllocCustomerCapacity{"STRING_2088121820"}, TrdAllocGrp_NoAllocs_6);
      set_field(noAllocs_1_1_0, FIX::AllocMethod{2}, TrdAllocGrp_NoAllocs_6);
      FIX::AllocQty AllocQty_50;
      AllocQty_50.setString("13513226");
set_field(noAllocs_1_1_0, AllocQty_50, TrdAllocGrp_NoAllocs_6);
      set_field(noAllocs_1_1_0, FIX::AllocSettlCurrency{"CHF"}, TrdAllocGrp_NoAllocs_6);
      set_field(noAllocs_1_1_0, FIX::IndividualAllocID{"STRING_1078850299"}, TrdAllocGrp_NoAllocs_6);
      set_field(noAllocs_1_1_0, FIX::SecondaryIndividualAllocID{"STRING_936045201"}, TrdAllocGrp_NoAllocs_6);
      all_values.push_back(TrdAllocGrp_NoAllocs_6);
      all_compo_names.insert("...NoSides...NoAllocs");

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs noNested2PartyIDs_1_0_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_56;
        set_field(noNested2PartyIDs_1_0_2_0, FIX::Nested2PartyID{"STRING_1181898416"}, NestedParties2_NoNested2PartyIDs_56);
        set_field(noNested2PartyIDs_1_0_2_0, FIX::Nested2PartyIDSource{'6'}, NestedParties2_NoNested2PartyIDs_56);
        set_field(noNested2PartyIDs_1_0_2_0, FIX::Nested2PartyRole{156972659}, NestedParties2_NoNested2PartyIDs_56);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_56);
        all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_107;
          set_field(noNested2PartySubIDs_1_0_0_3_0, FIX::Nested2PartySubID{"STRING_126653953"}, NstdPtys2SubGrp_NoNested2PartySubIDs_107);
          set_field(noNested2PartySubIDs_1_0_0_3_0, FIX::Nested2PartySubIDType{735011633}, NstdPtys2SubGrp_NoNested2PartySubIDs_107);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_107);
          all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_1_0_2_0.addGroup(noNested2PartySubIDs_1_0_0_3_0);
        }
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_0_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_108;
          set_field(noNested2PartySubIDs_1_0_0_3_1, FIX::Nested2PartySubID{"STRING_69293146"}, NstdPtys2SubGrp_NoNested2PartySubIDs_108);
          set_field(noNested2PartySubIDs_1_0_0_3_1, FIX::Nested2PartySubIDType{1666100765}, NstdPtys2SubGrp_NoNested2PartySubIDs_108);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_108);
          all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_1_0_2_0.addGroup(noNested2PartySubIDs_1_0_0_3_1);
        }
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_0_3_2;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_109;
          set_field(noNested2PartySubIDs_1_0_0_3_2, FIX::Nested2PartySubID{"STRING_1545864434"}, NstdPtys2SubGrp_NoNested2PartySubIDs_109);
          set_field(noNested2PartySubIDs_1_0_0_3_2, FIX::Nested2PartySubIDType{601357067}, NstdPtys2SubGrp_NoNested2PartySubIDs_109);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_109);
          all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_1_0_2_0.addGroup(noNested2PartySubIDs_1_0_0_3_2);
        }
        noAllocs_1_1_0.addGroup(noNested2PartyIDs_1_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs noNested2PartyIDs_1_0_2_1;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_57;
        set_field(noNested2PartyIDs_1_0_2_1, FIX::Nested2PartyID{"STRING_777953156"}, NestedParties2_NoNested2PartyIDs_57);
        set_field(noNested2PartyIDs_1_0_2_1, FIX::Nested2PartyIDSource{'1'}, NestedParties2_NoNested2PartyIDs_57);
        set_field(noNested2PartyIDs_1_0_2_1, FIX::Nested2PartyRole{704438374}, NestedParties2_NoNested2PartyIDs_57);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_57);
        all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_1_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_110;
          set_field(noNested2PartySubIDs_1_0_1_3_0, FIX::Nested2PartySubID{"STRING_2121530280"}, NstdPtys2SubGrp_NoNested2PartySubIDs_110);
          set_field(noNested2PartySubIDs_1_0_1_3_0, FIX::Nested2PartySubIDType{982894341}, NstdPtys2SubGrp_NoNested2PartySubIDs_110);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_110);
          all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_1_0_2_1.addGroup(noNested2PartySubIDs_1_0_1_3_0);
        }
        noAllocs_1_1_0.addGroup(noNested2PartyIDs_1_0_2_1);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs noNested2PartyIDs_1_0_2_2;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_58;
        set_field(noNested2PartyIDs_1_0_2_2, FIX::Nested2PartyID{"STRING_399497494"}, NestedParties2_NoNested2PartyIDs_58);
        set_field(noNested2PartyIDs_1_0_2_2, FIX::Nested2PartyIDSource{'1'}, NestedParties2_NoNested2PartyIDs_58);
        set_field(noNested2PartyIDs_1_0_2_2, FIX::Nested2PartyRole{1111115707}, NestedParties2_NoNested2PartyIDs_58);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_58);
        all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_2_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_111;
          set_field(noNested2PartySubIDs_1_0_2_3_0, FIX::Nested2PartySubID{"STRING_942595064"}, NstdPtys2SubGrp_NoNested2PartySubIDs_111);
          set_field(noNested2PartySubIDs_1_0_2_3_0, FIX::Nested2PartySubIDType{668805390}, NstdPtys2SubGrp_NoNested2PartySubIDs_111);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_111);
          all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_1_0_2_2.addGroup(noNested2PartySubIDs_1_0_2_3_0);
        }
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_2_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_112;
          set_field(noNested2PartySubIDs_1_0_2_3_1, FIX::Nested2PartySubID{"STRING_1104277551"}, NstdPtys2SubGrp_NoNested2PartySubIDs_112);
          set_field(noNested2PartySubIDs_1_0_2_3_1, FIX::Nested2PartySubIDType{883233236}, NstdPtys2SubGrp_NoNested2PartySubIDs_112);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_112);
          all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_1_0_2_2.addGroup(noNested2PartySubIDs_1_0_2_3_1);
        }
        noAllocs_1_1_0.addGroup(noNested2PartyIDs_1_0_2_2);
      }
      noSides_0_1.addGroup(noAllocs_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs noAllocs_1_1_1;
      // TrdAllocGrp.NoAllocs
      multiset<string> TrdAllocGrp_NoAllocs_7;
      set_field(noAllocs_1_1_1, FIX::AllocAccount{"STRING_1083980953"}, TrdAllocGrp_NoAllocs_7);
      set_field(noAllocs_1_1_1, FIX::AllocAcctIDSource{308116560}, TrdAllocGrp_NoAllocs_7);
      set_field(noAllocs_1_1_1, FIX::AllocClearingFeeIndicator{"STRING_2146869805"}, TrdAllocGrp_NoAllocs_7);
      set_field(noAllocs_1_1_1, FIX::AllocCustomerCapacity{"STRING_361005320"}, TrdAllocGrp_NoAllocs_7);
      set_field(noAllocs_1_1_1, FIX::AllocMethod{2}, TrdAllocGrp_NoAllocs_7);
      FIX::AllocQty AllocQty_51;
      AllocQty_51.setString("9354313");
set_field(noAllocs_1_1_1, AllocQty_51, TrdAllocGrp_NoAllocs_7);
      set_field(noAllocs_1_1_1, FIX::AllocSettlCurrency{"EUR"}, TrdAllocGrp_NoAllocs_7);
      set_field(noAllocs_1_1_1, FIX::IndividualAllocID{"STRING_1538512540"}, TrdAllocGrp_NoAllocs_7);
      set_field(noAllocs_1_1_1, FIX::SecondaryIndividualAllocID{"STRING_981500455"}, TrdAllocGrp_NoAllocs_7);
      all_values.push_back(TrdAllocGrp_NoAllocs_7);
      all_compo_names.insert("...NoSides...NoAllocs");

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs noNested2PartyIDs_1_1_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_59;
        set_field(noNested2PartyIDs_1_1_2_0, FIX::Nested2PartyID{"STRING_1665166493"}, NestedParties2_NoNested2PartyIDs_59);
        set_field(noNested2PartyIDs_1_1_2_0, FIX::Nested2PartyIDSource{'1'}, NestedParties2_NoNested2PartyIDs_59);
        set_field(noNested2PartyIDs_1_1_2_0, FIX::Nested2PartyRole{1350831053}, NestedParties2_NoNested2PartyIDs_59);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_59);
        all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_1_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_113;
          set_field(noNested2PartySubIDs_1_1_0_3_0, FIX::Nested2PartySubID{"STRING_1114892875"}, NstdPtys2SubGrp_NoNested2PartySubIDs_113);
          set_field(noNested2PartySubIDs_1_1_0_3_0, FIX::Nested2PartySubIDType{1952188121}, NstdPtys2SubGrp_NoNested2PartySubIDs_113);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_113);
          all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_1_1_2_0.addGroup(noNested2PartySubIDs_1_1_0_3_0);
        }
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_1_0_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_114;
          set_field(noNested2PartySubIDs_1_1_0_3_1, FIX::Nested2PartySubID{"STRING_1961736767"}, NstdPtys2SubGrp_NoNested2PartySubIDs_114);
          set_field(noNested2PartySubIDs_1_1_0_3_1, FIX::Nested2PartySubIDType{215514281}, NstdPtys2SubGrp_NoNested2PartySubIDs_114);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_114);
          all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_1_1_2_0.addGroup(noNested2PartySubIDs_1_1_0_3_1);
        }
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_1_0_3_2;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_115;
          set_field(noNested2PartySubIDs_1_1_0_3_2, FIX::Nested2PartySubID{"STRING_509142847"}, NstdPtys2SubGrp_NoNested2PartySubIDs_115);
          set_field(noNested2PartySubIDs_1_1_0_3_2, FIX::Nested2PartySubIDType{2128580678}, NstdPtys2SubGrp_NoNested2PartySubIDs_115);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_115);
          all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_1_1_2_0.addGroup(noNested2PartySubIDs_1_1_0_3_2);
        }
        noAllocs_1_1_1.addGroup(noNested2PartyIDs_1_1_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs noNested2PartyIDs_1_1_2_1;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_60;
        set_field(noNested2PartyIDs_1_1_2_1, FIX::Nested2PartyID{"STRING_189560913"}, NestedParties2_NoNested2PartyIDs_60);
        set_field(noNested2PartyIDs_1_1_2_1, FIX::Nested2PartyIDSource{'1'}, NestedParties2_NoNested2PartyIDs_60);
        set_field(noNested2PartyIDs_1_1_2_1, FIX::Nested2PartyRole{380594525}, NestedParties2_NoNested2PartyIDs_60);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_60);
        all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_1_1_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_116;
          set_field(noNested2PartySubIDs_1_1_1_3_0, FIX::Nested2PartySubID{"STRING_455669248"}, NstdPtys2SubGrp_NoNested2PartySubIDs_116);
          set_field(noNested2PartySubIDs_1_1_1_3_0, FIX::Nested2PartySubIDType{1914205752}, NstdPtys2SubGrp_NoNested2PartySubIDs_116);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_116);
          all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_1_1_2_1.addGroup(noNested2PartySubIDs_1_1_1_3_0);
        }
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_1_1_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_117;
          set_field(noNested2PartySubIDs_1_1_1_3_1, FIX::Nested2PartySubID{"STRING_656921164"}, NstdPtys2SubGrp_NoNested2PartySubIDs_117);
          set_field(noNested2PartySubIDs_1_1_1_3_1, FIX::Nested2PartySubIDType{1124474638}, NstdPtys2SubGrp_NoNested2PartySubIDs_117);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_117);
          all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_1_1_2_1.addGroup(noNested2PartySubIDs_1_1_1_3_1);
        }
        noAllocs_1_1_1.addGroup(noNested2PartyIDs_1_1_2_1);
      }
      noSides_0_1.addGroup(noAllocs_1_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs noAllocs_1_1_2;
      // TrdAllocGrp.NoAllocs
      multiset<string> TrdAllocGrp_NoAllocs_8;
      set_field(noAllocs_1_1_2, FIX::AllocAccount{"STRING_870999655"}, TrdAllocGrp_NoAllocs_8);
      set_field(noAllocs_1_1_2, FIX::AllocAcctIDSource{1540154401}, TrdAllocGrp_NoAllocs_8);
      set_field(noAllocs_1_1_2, FIX::AllocClearingFeeIndicator{"STRING_60971944"}, TrdAllocGrp_NoAllocs_8);
      set_field(noAllocs_1_1_2, FIX::AllocCustomerCapacity{"STRING_1179116215"}, TrdAllocGrp_NoAllocs_8);
      set_field(noAllocs_1_1_2, FIX::AllocMethod{1}, TrdAllocGrp_NoAllocs_8);
      FIX::AllocQty AllocQty_52;
      AllocQty_52.setString("4219772");
set_field(noAllocs_1_1_2, AllocQty_52, TrdAllocGrp_NoAllocs_8);
      set_field(noAllocs_1_1_2, FIX::AllocSettlCurrency{"USD"}, TrdAllocGrp_NoAllocs_8);
      set_field(noAllocs_1_1_2, FIX::IndividualAllocID{"STRING_1246505060"}, TrdAllocGrp_NoAllocs_8);
      set_field(noAllocs_1_1_2, FIX::SecondaryIndividualAllocID{"STRING_839981054"}, TrdAllocGrp_NoAllocs_8);
      all_values.push_back(TrdAllocGrp_NoAllocs_8);
      all_compo_names.insert("...NoSides...NoAllocs");

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs noNested2PartyIDs_1_2_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_61;
        set_field(noNested2PartyIDs_1_2_2_0, FIX::Nested2PartyID{"STRING_80521868"}, NestedParties2_NoNested2PartyIDs_61);
        set_field(noNested2PartyIDs_1_2_2_0, FIX::Nested2PartyIDSource{'2'}, NestedParties2_NoNested2PartyIDs_61);
        set_field(noNested2PartyIDs_1_2_2_0, FIX::Nested2PartyRole{1383683653}, NestedParties2_NoNested2PartyIDs_61);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_61);
        all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_2_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_118;
          set_field(noNested2PartySubIDs_1_2_0_3_0, FIX::Nested2PartySubID{"STRING_1324866366"}, NstdPtys2SubGrp_NoNested2PartySubIDs_118);
          set_field(noNested2PartySubIDs_1_2_0_3_0, FIX::Nested2PartySubIDType{419983616}, NstdPtys2SubGrp_NoNested2PartySubIDs_118);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_118);
          all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_1_2_2_0.addGroup(noNested2PartySubIDs_1_2_0_3_0);
        }
        noAllocs_1_1_2.addGroup(noNested2PartyIDs_1_2_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs noNested2PartyIDs_1_2_2_1;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_62;
        set_field(noNested2PartyIDs_1_2_2_1, FIX::Nested2PartyID{"STRING_764443184"}, NestedParties2_NoNested2PartyIDs_62);
        set_field(noNested2PartyIDs_1_2_2_1, FIX::Nested2PartyIDSource{'1'}, NestedParties2_NoNested2PartyIDs_62);
        set_field(noNested2PartyIDs_1_2_2_1, FIX::Nested2PartyRole{234236735}, NestedParties2_NoNested2PartyIDs_62);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_62);
        all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_2_1_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_119;
          set_field(noNested2PartySubIDs_1_2_1_3_0, FIX::Nested2PartySubID{"STRING_1638713687"}, NstdPtys2SubGrp_NoNested2PartySubIDs_119);
          set_field(noNested2PartySubIDs_1_2_1_3_0, FIX::Nested2PartySubIDType{215333765}, NstdPtys2SubGrp_NoNested2PartySubIDs_119);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_119);
          all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_1_2_2_1.addGroup(noNested2PartySubIDs_1_2_1_3_0);
        }
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_2_1_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_120;
          set_field(noNested2PartySubIDs_1_2_1_3_1, FIX::Nested2PartySubID{"STRING_1169518378"}, NstdPtys2SubGrp_NoNested2PartySubIDs_120);
          set_field(noNested2PartySubIDs_1_2_1_3_1, FIX::Nested2PartySubIDType{983267227}, NstdPtys2SubGrp_NoNested2PartySubIDs_120);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_120);
          all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_1_2_2_1.addGroup(noNested2PartySubIDs_1_2_1_3_1);
        }
        noAllocs_1_1_2.addGroup(noNested2PartyIDs_1_2_2_1);
      }
      noSides_0_1.addGroup(noAllocs_1_1_2);
    }
    msg.addGroup(noSides_0_1);
  }
  {
    FIX50SP2::TradeCaptureReportAck::NoSides noSides_0_2;
    // TrdCapRptAckSideGrp.NoSides
    multiset<string> TrdCapRptAckSideGrp_NoSides_2;
    set_field(noSides_0_2, FIX::Account{"STRING_595928290"}, TrdCapRptAckSideGrp_NoSides_2);
    set_field(noSides_0_2, FIX::AccountType{1}, TrdCapRptAckSideGrp_NoSides_2);
    FIX::AccruedInterestAmt AccruedInterestAmt_14;
    AccruedInterestAmt_14.setString("14389364");
set_field(noSides_0_2, AccruedInterestAmt_14, TrdCapRptAckSideGrp_NoSides_2);
    FIX::AccruedInterestRate AccruedInterestRate_9;
    AccruedInterestRate_9.setString("3.940000");
set_field(noSides_0_2, AccruedInterestRate_9, TrdCapRptAckSideGrp_NoSides_2);
    set_field(noSides_0_2, FIX::AcctIDSource{99}, TrdCapRptAckSideGrp_NoSides_2);
    set_field(noSides_0_2, FIX::AggressorIndicator{true}, TrdCapRptAckSideGrp_NoSides_2);
    set_field(noSides_0_2, FIX::AllocID{"STRING_1233650049"}, TrdCapRptAckSideGrp_NoSides_2);
    set_field(noSides_0_2, FIX::ComplianceID{"STRING_933436396"}, TrdCapRptAckSideGrp_NoSides_2);
    FIX::Concession Concession_9;
    Concession_9.setString("4768994");
set_field(noSides_0_2, Concession_9, TrdCapRptAckSideGrp_NoSides_2);
    set_field(noSides_0_2, FIX::CustOrderCapacity{1}, TrdCapRptAckSideGrp_NoSides_2);
    FIX::EndAccruedInterestAmt EndAccruedInterestAmt_14;
    EndAccruedInterestAmt_14.setString("3254933");
set_field(noSides_0_2, EndAccruedInterestAmt_14, TrdCapRptAckSideGrp_NoSides_2);
    FIX::EndCash EndCash_14;
    EndCash_14.setString("8988766");
set_field(noSides_0_2, EndCash_14, TrdCapRptAckSideGrp_NoSides_2);
    set_field(noSides_0_2, FIX::ExDate{"LOCALMKTDATE_683882043"}, TrdCapRptAckSideGrp_NoSides_2);
    set_field(noSides_0_2, FIX::ExchangeRule{"STRING_652981575"}, TrdCapRptAckSideGrp_NoSides_2);
    FIX::InterestAtMaturity InterestAtMaturity_9;
    InterestAtMaturity_9.setString("21453817");
set_field(noSides_0_2, InterestAtMaturity_9, TrdCapRptAckSideGrp_NoSides_2);
    set_field(noSides_0_2, FIX::NetGrossInd{2}, TrdCapRptAckSideGrp_NoSides_2);
    FIX::NetMoney NetMoney_9;
    NetMoney_9.setString("3714987");
set_field(noSides_0_2, NetMoney_9, TrdCapRptAckSideGrp_NoSides_2);
    set_field(noSides_0_2, FIX::NumDaysInterest{78419955}, TrdCapRptAckSideGrp_NoSides_2);
    set_field(noSides_0_2, FIX::OddLot{true}, TrdCapRptAckSideGrp_NoSides_2);
    set_field(noSides_0_2, FIX::OrderCategory{'5'}, TrdCapRptAckSideGrp_NoSides_2);
    set_field(noSides_0_2, FIX::OrderDelay{1875453912}, TrdCapRptAckSideGrp_NoSides_2);
    set_field(noSides_0_2, FIX::OrderDelayUnit{4}, TrdCapRptAckSideGrp_NoSides_2);
    set_field(noSides_0_2, FIX::PositionEffect{'F'}, TrdCapRptAckSideGrp_NoSides_2);
    set_field(noSides_0_2, FIX::PreallocMethod{'0'}, TrdCapRptAckSideGrp_NoSides_2);
    set_field(noSides_0_2, FIX::ProcessCode{'3'}, TrdCapRptAckSideGrp_NoSides_2);
    set_field(noSides_0_2, FIX::RptSeq{261919092}, TrdCapRptAckSideGrp_NoSides_2);
    FIX::SettlCurrAmt SettlCurrAmt_17;
    SettlCurrAmt_17.setString("14723709");
set_field(noSides_0_2, SettlCurrAmt_17, TrdCapRptAckSideGrp_NoSides_2);
    FIX::SettlCurrFxRate SettlCurrFxRate_17;
    SettlCurrFxRate_17.setString("12960820");
set_field(noSides_0_2, SettlCurrFxRate_17, TrdCapRptAckSideGrp_NoSides_2);
    set_field(noSides_0_2, FIX::SettlCurrFxRateCalc{'D'}, TrdCapRptAckSideGrp_NoSides_2);
    set_field(noSides_0_2, FIX::Side{'D'}, TrdCapRptAckSideGrp_NoSides_2);
    set_field(noSides_0_2, FIX::SideCurrency{"JPY"}, TrdCapRptAckSideGrp_NoSides_2);
    set_field(noSides_0_2, FIX::SideExecID{"STRING_1378250123"}, TrdCapRptAckSideGrp_NoSides_2);
    set_field(noSides_0_2, FIX::SideFillStationCd{"STRING_1570802062"}, TrdCapRptAckSideGrp_NoSides_2);
    FIX::SideGrossTradeAmt SideGrossTradeAmt_4;
    SideGrossTradeAmt_4.setString("14358315");
set_field(noSides_0_2, SideGrossTradeAmt_4, TrdCapRptAckSideGrp_NoSides_2);
    set_field(noSides_0_2, FIX::SideLastQty{771532119}, TrdCapRptAckSideGrp_NoSides_2);
    set_field(noSides_0_2, FIX::SideMultiLegReportingType{1}, TrdCapRptAckSideGrp_NoSides_2);
    set_field(noSides_0_2, FIX::SideReasonCd{"STRING_521997944"}, TrdCapRptAckSideGrp_NoSides_2);
    set_field(noSides_0_2, FIX::SideSettlCurrency{"JPY"}, TrdCapRptAckSideGrp_NoSides_2);
    set_field(noSides_0_2, FIX::SideTradeReportID{"STRING_787280560"}, TrdCapRptAckSideGrp_NoSides_2);
    set_field(noSides_0_2, FIX::SideTrdSubTyp{2030461822}, TrdCapRptAckSideGrp_NoSides_2);
    set_field(noSides_0_2, FIX::SolicitedFlag{true}, TrdCapRptAckSideGrp_NoSides_2);
    FIX::StartCash StartCash_14;
    StartCash_14.setString("14711626");
set_field(noSides_0_2, StartCash_14, TrdCapRptAckSideGrp_NoSides_2);
    set_field(noSides_0_2, FIX::TimeBracket{"STRING_535959749"}, TrdCapRptAckSideGrp_NoSides_2);
    FIX::TotalTakedown TotalTakedown_9;
    TotalTakedown_9.setString("12129200");
set_field(noSides_0_2, TotalTakedown_9, TrdCapRptAckSideGrp_NoSides_2);
    set_field(noSides_0_2, FIX::TradeAllocIndicator{4}, TrdCapRptAckSideGrp_NoSides_2);
    set_field(noSides_0_2, FIX::TradeInputDevice{"STRING_907458484"}, TrdCapRptAckSideGrp_NoSides_2);
    set_field(noSides_0_2, FIX::TradeInputSource{"STRING_1291340006"}, TrdCapRptAckSideGrp_NoSides_2);
    set_field(noSides_0_2, FIX::TradingSessionID{"STRING_3"}, TrdCapRptAckSideGrp_NoSides_2);
    set_field(noSides_0_2, FIX::TradingSessionSubID{"STRING_3"}, TrdCapRptAckSideGrp_NoSides_2);
    all_values.push_back(TrdCapRptAckSideGrp_NoSides_2);
    all_compo_names.insert("...NoSides");

    // ClrInstGrp
    // Group ClrInstGrp.NoClearingInstructions
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoClearingInstructions noClearingInstructions_2_1_0;
      // ClrInstGrp.NoClearingInstructions
      multiset<string> ClrInstGrp_NoClearingInstructions_22;
      set_field(noClearingInstructions_2_1_0, FIX::ClearingInstruction{11}, ClrInstGrp_NoClearingInstructions_22);
      all_values.push_back(ClrInstGrp_NoClearingInstructions_22);
      all_compo_names.insert("...NoSides...NoClearingInstructions");

      noSides_0_2.addGroup(noClearingInstructions_2_1_0);
    }
    // CommissionData
    multiset<string> CommissionData_28;
    set_field(noSides_0_2, FIX::CommCurrency{"EUR"}, CommissionData_28);
    set_field(noSides_0_2, FIX::CommType{'2'}, CommissionData_28);
    FIX::Commission Commission_31;
    Commission_31.setString("8047586");
set_field(noSides_0_2, Commission_31, CommissionData_28);
    set_field(noSides_0_2, FIX::FundRenewWaiv{'Y'}, CommissionData_28);
    all_values.push_back(CommissionData_28);
    all_compo_names.insert("...NoSides.");

    // ContAmtGrp
    // Group ContAmtGrp.NoContAmts
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoContAmts noContAmts_2_1_0;
      // ContAmtGrp.NoContAmts
      multiset<string> ContAmtGrp_NoContAmts_9;
      set_field(noContAmts_2_1_0, FIX::ContAmtCurr{"CAN"}, ContAmtGrp_NoContAmts_9);
      set_field(noContAmts_2_1_0, FIX::ContAmtType{2}, ContAmtGrp_NoContAmts_9);
      FIX::ContAmtValue ContAmtValue_9;
      ContAmtValue_9.setString("2077090");
set_field(noContAmts_2_1_0, ContAmtValue_9, ContAmtGrp_NoContAmts_9);
      all_values.push_back(ContAmtGrp_NoContAmts_9);
      all_compo_names.insert("...NoSides...NoContAmts");

      noSides_0_2.addGroup(noContAmts_2_1_0);
    }
    // MiscFeesGrp
    // Group MiscFeesGrp.NoMiscFees
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoMiscFees noMiscFees_2_1_0;
      // MiscFeesGrp.NoMiscFees
      multiset<string> MiscFeesGrp_NoMiscFees_37;
      FIX::MiscFeeAmt MiscFeeAmt_37;
      MiscFeeAmt_37.setString("13818722");
set_field(noMiscFees_2_1_0, MiscFeeAmt_37, MiscFeesGrp_NoMiscFees_37);
      set_field(noMiscFees_2_1_0, FIX::MiscFeeBasis{0}, MiscFeesGrp_NoMiscFees_37);
      set_field(noMiscFees_2_1_0, FIX::MiscFeeCurr{"JPY"}, MiscFeesGrp_NoMiscFees_37);
      set_field(noMiscFees_2_1_0, FIX::MiscFeeType{"STRING_9"}, MiscFeesGrp_NoMiscFees_37);
      all_values.push_back(MiscFeesGrp_NoMiscFees_37);
      all_compo_names.insert("...NoSides...NoMiscFees");

      noSides_0_2.addGroup(noMiscFees_2_1_0);
    }
    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoPartyIDs noPartyIDs_2_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_156;
      set_field(noPartyIDs_2_1_0, FIX::PartyID{"STRING_1537263440"}, Parties_NoPartyIDs_156);
      set_field(noPartyIDs_2_1_0, FIX::PartyIDSource{'1'}, Parties_NoPartyIDs_156);
      set_field(noPartyIDs_2_1_0, FIX::PartyRole{2}, Parties_NoPartyIDs_156);
      all_values.push_back(Parties_NoPartyIDs_156);
      all_compo_names.insert("...NoSides...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_312;
        set_field(noPartySubIDs_2_0_2_0, FIX::PartySubID{"STRING_129014386"}, PtysSubGrp_NoPartySubIDs_312);
        set_field(noPartySubIDs_2_0_2_0, FIX::PartySubIDType{25}, PtysSubGrp_NoPartySubIDs_312);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_312);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_2_1_0.addGroup(noPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_313;
        set_field(noPartySubIDs_2_0_2_1, FIX::PartySubID{"STRING_1817721808"}, PtysSubGrp_NoPartySubIDs_313);
        set_field(noPartySubIDs_2_0_2_1, FIX::PartySubIDType{13}, PtysSubGrp_NoPartySubIDs_313);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_313);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_2_1_0.addGroup(noPartySubIDs_2_0_2_1);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_0_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_314;
        set_field(noPartySubIDs_2_0_2_2, FIX::PartySubID{"STRING_69712851"}, PtysSubGrp_NoPartySubIDs_314);
        set_field(noPartySubIDs_2_0_2_2, FIX::PartySubIDType{12}, PtysSubGrp_NoPartySubIDs_314);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_314);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_2_1_0.addGroup(noPartySubIDs_2_0_2_2);
      }
      noSides_0_2.addGroup(noPartyIDs_2_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoPartyIDs noPartyIDs_2_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_157;
      set_field(noPartyIDs_2_1_1, FIX::PartyID{"STRING_1174513253"}, Parties_NoPartyIDs_157);
      set_field(noPartyIDs_2_1_1, FIX::PartyIDSource{'6'}, Parties_NoPartyIDs_157);
      set_field(noPartyIDs_2_1_1, FIX::PartyRole{18}, Parties_NoPartyIDs_157);
      all_values.push_back(Parties_NoPartyIDs_157);
      all_compo_names.insert("...NoSides...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_315;
        set_field(noPartySubIDs_2_1_2_0, FIX::PartySubID{"STRING_1127709659"}, PtysSubGrp_NoPartySubIDs_315);
        set_field(noPartySubIDs_2_1_2_0, FIX::PartySubIDType{32}, PtysSubGrp_NoPartySubIDs_315);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_315);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_2_1_1.addGroup(noPartySubIDs_2_1_2_0);
      }
      noSides_0_2.addGroup(noPartyIDs_2_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoPartyIDs noPartyIDs_2_1_2;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_158;
      set_field(noPartyIDs_2_1_2, FIX::PartyID{"STRING_430873811"}, Parties_NoPartyIDs_158);
      set_field(noPartyIDs_2_1_2, FIX::PartyIDSource{'F'}, Parties_NoPartyIDs_158);
      set_field(noPartyIDs_2_1_2, FIX::PartyRole{59}, Parties_NoPartyIDs_158);
      all_values.push_back(Parties_NoPartyIDs_158);
      all_compo_names.insert("...NoSides...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_2_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_316;
        set_field(noPartySubIDs_2_2_2_0, FIX::PartySubID{"STRING_1066996217"}, PtysSubGrp_NoPartySubIDs_316);
        set_field(noPartySubIDs_2_2_2_0, FIX::PartySubIDType{7}, PtysSubGrp_NoPartySubIDs_316);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_316);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_2_1_2.addGroup(noPartySubIDs_2_2_2_0);
      }
      noSides_0_2.addGroup(noPartyIDs_2_1_2);
    }
    // SettlDetails
    // Group SettlDetails.NoSettlDetails
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails noSettlDetails_2_1_0;
      // SettlDetails.NoSettlDetails
      multiset<string> SettlDetails_NoSettlDetails_14;
      set_field(noSettlDetails_2_1_0, FIX::SettlObligSource{'3'}, SettlDetails_NoSettlDetails_14);
      all_values.push_back(SettlDetails_NoSettlDetails_14);
      all_compo_names.insert("...NoSides...NoSettlDetails");

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_2_0_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_65;
        set_field(noSettlPartyIDs_2_0_2_0, FIX::SettlPartyID{"STRING_1303020912"}, SettlParties_NoSettlPartyIDs_65);
        set_field(noSettlPartyIDs_2_0_2_0, FIX::SettlPartyIDSource{'7'}, SettlParties_NoSettlPartyIDs_65);
        set_field(noSettlPartyIDs_2_0_2_0, FIX::SettlPartyRole{1112887156}, SettlParties_NoSettlPartyIDs_65);
        all_values.push_back(SettlParties_NoSettlPartyIDs_65);
        all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_0_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_131;
          set_field(noSettlPartySubIDs_2_0_0_3_0, FIX::SettlPartySubID{"STRING_788817046"}, SettlPtysSubGrp_NoSettlPartySubIDs_131);
          set_field(noSettlPartySubIDs_2_0_0_3_0, FIX::SettlPartySubIDType{2003687247}, SettlPtysSubGrp_NoSettlPartySubIDs_131);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_131);
          all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_2_0_2_0.addGroup(noSettlPartySubIDs_2_0_0_3_0);
        }
        noSettlDetails_2_1_0.addGroup(noSettlPartyIDs_2_0_2_0);
      }
      noSides_0_2.addGroup(noSettlDetails_2_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails noSettlDetails_2_1_1;
      // SettlDetails.NoSettlDetails
      multiset<string> SettlDetails_NoSettlDetails_15;
      set_field(noSettlDetails_2_1_1, FIX::SettlObligSource{'3'}, SettlDetails_NoSettlDetails_15);
      all_values.push_back(SettlDetails_NoSettlDetails_15);
      all_compo_names.insert("...NoSides...NoSettlDetails");

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_2_1_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_66;
        set_field(noSettlPartyIDs_2_1_2_0, FIX::SettlPartyID{"STRING_629981865"}, SettlParties_NoSettlPartyIDs_66);
        set_field(noSettlPartyIDs_2_1_2_0, FIX::SettlPartyIDSource{'3'}, SettlParties_NoSettlPartyIDs_66);
        set_field(noSettlPartyIDs_2_1_2_0, FIX::SettlPartyRole{1723166864}, SettlParties_NoSettlPartyIDs_66);
        all_values.push_back(SettlParties_NoSettlPartyIDs_66);
        all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_1_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_132;
          set_field(noSettlPartySubIDs_2_1_0_3_0, FIX::SettlPartySubID{"STRING_41475125"}, SettlPtysSubGrp_NoSettlPartySubIDs_132);
          set_field(noSettlPartySubIDs_2_1_0_3_0, FIX::SettlPartySubIDType{552239655}, SettlPtysSubGrp_NoSettlPartySubIDs_132);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_132);
          all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_2_1_2_0.addGroup(noSettlPartySubIDs_2_1_0_3_0);
        }
        noSettlDetails_2_1_1.addGroup(noSettlPartyIDs_2_1_2_0);
      }
      noSides_0_2.addGroup(noSettlDetails_2_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails noSettlDetails_2_1_2;
      // SettlDetails.NoSettlDetails
      multiset<string> SettlDetails_NoSettlDetails_16;
      set_field(noSettlDetails_2_1_2, FIX::SettlObligSource{'1'}, SettlDetails_NoSettlDetails_16);
      all_values.push_back(SettlDetails_NoSettlDetails_16);
      all_compo_names.insert("...NoSides...NoSettlDetails");

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_2_2_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_67;
        set_field(noSettlPartyIDs_2_2_2_0, FIX::SettlPartyID{"STRING_1726752908"}, SettlParties_NoSettlPartyIDs_67);
        set_field(noSettlPartyIDs_2_2_2_0, FIX::SettlPartyIDSource{'4'}, SettlParties_NoSettlPartyIDs_67);
        set_field(noSettlPartyIDs_2_2_2_0, FIX::SettlPartyRole{836458081}, SettlParties_NoSettlPartyIDs_67);
        all_values.push_back(SettlParties_NoSettlPartyIDs_67);
        all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_2_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_133;
          set_field(noSettlPartySubIDs_2_2_0_3_0, FIX::SettlPartySubID{"STRING_1574528818"}, SettlPtysSubGrp_NoSettlPartySubIDs_133);
          set_field(noSettlPartySubIDs_2_2_0_3_0, FIX::SettlPartySubIDType{34102942}, SettlPtysSubGrp_NoSettlPartySubIDs_133);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_133);
          all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_2_2_2_0.addGroup(noSettlPartySubIDs_2_2_0_3_0);
        }
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_2_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_134;
          set_field(noSettlPartySubIDs_2_2_0_3_1, FIX::SettlPartySubID{"STRING_2057894268"}, SettlPtysSubGrp_NoSettlPartySubIDs_134);
          set_field(noSettlPartySubIDs_2_2_0_3_1, FIX::SettlPartySubIDType{1359513503}, SettlPtysSubGrp_NoSettlPartySubIDs_134);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_134);
          all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_2_2_2_0.addGroup(noSettlPartySubIDs_2_2_0_3_1);
        }
        noSettlDetails_2_1_2.addGroup(noSettlPartyIDs_2_2_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_2_2_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_68;
        set_field(noSettlPartyIDs_2_2_2_1, FIX::SettlPartyID{"STRING_68358787"}, SettlParties_NoSettlPartyIDs_68);
        set_field(noSettlPartyIDs_2_2_2_1, FIX::SettlPartyIDSource{'2'}, SettlParties_NoSettlPartyIDs_68);
        set_field(noSettlPartyIDs_2_2_2_1, FIX::SettlPartyRole{279026073}, SettlParties_NoSettlPartyIDs_68);
        all_values.push_back(SettlParties_NoSettlPartyIDs_68);
        all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_2_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_135;
          set_field(noSettlPartySubIDs_2_2_1_3_0, FIX::SettlPartySubID{"STRING_2089121344"}, SettlPtysSubGrp_NoSettlPartySubIDs_135);
          set_field(noSettlPartySubIDs_2_2_1_3_0, FIX::SettlPartySubIDType{1553731322}, SettlPtysSubGrp_NoSettlPartySubIDs_135);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_135);
          all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_2_2_2_1.addGroup(noSettlPartySubIDs_2_2_1_3_0);
        }
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_2_1_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_136;
          set_field(noSettlPartySubIDs_2_2_1_3_1, FIX::SettlPartySubID{"STRING_1213203194"}, SettlPtysSubGrp_NoSettlPartySubIDs_136);
          set_field(noSettlPartySubIDs_2_2_1_3_1, FIX::SettlPartySubIDType{1244658608}, SettlPtysSubGrp_NoSettlPartySubIDs_136);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_136);
          all_compo_names.insert("...NoSides...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_2_2_2_1.addGroup(noSettlPartySubIDs_2_2_1_3_1);
        }
        noSettlDetails_2_1_2.addGroup(noSettlPartyIDs_2_2_2_1);
      }
      noSides_0_2.addGroup(noSettlDetails_2_1_2);
    }
    // SideTrdRegTS
    // Group SideTrdRegTS.NoSideTrdRegTS
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoSideTrdRegTS noSideTrdRegTS_2_1_0;
      // SideTrdRegTS.NoSideTrdRegTS
      multiset<string> SideTrdRegTS_NoSideTrdRegTS_8;
      set_field(noSideTrdRegTS_2_1_0, FIX::SideTrdRegTimestamp{FIX::UTCTIMESTAMP(23, 57, 42, 15, 11, 2003)}, SideTrdRegTS_NoSideTrdRegTS_8);
      set_field(noSideTrdRegTS_2_1_0, FIX::SideTrdRegTimestampSrc{"STRING_1758986195"}, SideTrdRegTS_NoSideTrdRegTS_8);
      set_field(noSideTrdRegTS_2_1_0, FIX::SideTrdRegTimestampType{2135662590}, SideTrdRegTS_NoSideTrdRegTS_8);
      all_values.push_back(SideTrdRegTS_NoSideTrdRegTS_8);
      all_compo_names.insert("...NoSides...NoSideTrdRegTS");

      noSides_0_2.addGroup(noSideTrdRegTS_2_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoSideTrdRegTS noSideTrdRegTS_2_1_1;
      // SideTrdRegTS.NoSideTrdRegTS
      multiset<string> SideTrdRegTS_NoSideTrdRegTS_9;
      set_field(noSideTrdRegTS_2_1_1, FIX::SideTrdRegTimestamp{FIX::UTCTIMESTAMP(16, 37, 21, 8, 3, 2014)}, SideTrdRegTS_NoSideTrdRegTS_9);
      set_field(noSideTrdRegTS_2_1_1, FIX::SideTrdRegTimestampSrc{"STRING_1492489046"}, SideTrdRegTS_NoSideTrdRegTS_9);
      set_field(noSideTrdRegTS_2_1_1, FIX::SideTrdRegTimestampType{1746708315}, SideTrdRegTS_NoSideTrdRegTS_9);
      all_values.push_back(SideTrdRegTS_NoSideTrdRegTS_9);
      all_compo_names.insert("...NoSides...NoSideTrdRegTS");

      noSides_0_2.addGroup(noSideTrdRegTS_2_1_1);
    }
    // Stipulations
    // Group Stipulations.NoStipulations
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoStipulations noStipulations_2_1_0;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_75;
      set_field(noStipulations_2_1_0, FIX::StipulationType{"STRING_DISCOUNT"}, Stipulations_NoStipulations_75);
      set_field(noStipulations_2_1_0, FIX::StipulationValue{"STRING_1657118935"}, Stipulations_NoStipulations_75);
      all_values.push_back(Stipulations_NoStipulations_75);
      all_compo_names.insert("...NoSides...NoStipulations");

      noSides_0_2.addGroup(noStipulations_2_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoStipulations noStipulations_2_1_1;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_76;
      set_field(noStipulations_2_1_1, FIX::StipulationType{"STRING_PXSOURCE"}, Stipulations_NoStipulations_76);
      set_field(noStipulations_2_1_1, FIX::StipulationValue{"STRING_1594950775"}, Stipulations_NoStipulations_76);
      all_values.push_back(Stipulations_NoStipulations_76);
      all_compo_names.insert("...NoSides...NoStipulations");

      noSides_0_2.addGroup(noStipulations_2_1_1);
    }
    // TradeReportOrderDetail
    multiset<string> TradeReportOrderDetail_4;
    set_field(noSides_0_2, FIX::BookingType{0}, TradeReportOrderDetail_4);
    set_field(noSides_0_2, FIX::ClOrdID{"STRING_1831381386"}, TradeReportOrderDetail_4);
    FIX::CumQty CumQty_7;
    CumQty_7.setString("8810983");
set_field(noSides_0_2, CumQty_7, TradeReportOrderDetail_4);
    set_field(noSides_0_2, FIX::ExecInst{"MULTIPLECHARVALUE_T"}, TradeReportOrderDetail_4);
    set_field(noSides_0_2, FIX::ExpireTime{FIX::UTCTIMESTAMP(0, 6, 11, 11, 10, 2006)}, TradeReportOrderDetail_4);
    FIX::LeavesQty LeavesQty_6;
    LeavesQty_6.setString("1602349");
set_field(noSides_0_2, LeavesQty_6, TradeReportOrderDetail_4);
    set_field(noSides_0_2, FIX::ListID{"STRING_1578000252"}, TradeReportOrderDetail_4);
    set_field(noSides_0_2, FIX::LotType{'4'}, TradeReportOrderDetail_4);
    set_field(noSides_0_2, FIX::OrdStatus{'3'}, TradeReportOrderDetail_4);
    set_field(noSides_0_2, FIX::OrdType{'H'}, TradeReportOrderDetail_4);
    set_field(noSides_0_2, FIX::OrderCapacity{'P'}, TradeReportOrderDetail_4);
    set_field(noSides_0_2, FIX::OrderID{"STRING_1282055506"}, TradeReportOrderDetail_4);
    set_field(noSides_0_2, FIX::OrderInputDevice{"STRING_842480472"}, TradeReportOrderDetail_4);
    set_field(noSides_0_2, FIX::OrderRestrictions{"MULTIPLECHARVALUE_3"}, TradeReportOrderDetail_4);
    set_field(noSides_0_2, FIX::OrigCustOrderCapacity{4}, TradeReportOrderDetail_4);
    set_field(noSides_0_2, FIX::OrigOrdModTime{FIX::UTCTIMESTAMP(13, 19, 55, 24, 6, 2005)}, TradeReportOrderDetail_4);
    FIX::Price Price_29;
    Price_29.setString("4026232");
set_field(noSides_0_2, Price_29, TradeReportOrderDetail_4);
    set_field(noSides_0_2, FIX::RefOrdIDReason{0}, TradeReportOrderDetail_4);
    set_field(noSides_0_2, FIX::RefOrderID{"STRING_1817575950"}, TradeReportOrderDetail_4);
    set_field(noSides_0_2, FIX::RefOrderIDSource{'4'}, TradeReportOrderDetail_4);
    set_field(noSides_0_2, FIX::SecondaryClOrdID{"STRING_1648440841"}, TradeReportOrderDetail_4);
    set_field(noSides_0_2, FIX::SecondaryOrderID{"STRING_551190692"}, TradeReportOrderDetail_4);
    FIX::StopPx StopPx_13;
    StopPx_13.setString("15519932");
set_field(noSides_0_2, StopPx_13, TradeReportOrderDetail_4);
    set_field(noSides_0_2, FIX::TimeInForce{'4'}, TradeReportOrderDetail_4);
    set_field(noSides_0_2, FIX::TransBkdTime{FIX::UTCTIMESTAMP(0, 58, 28, 10, 11, 2013)}, TradeReportOrderDetail_4);
    all_values.push_back(TradeReportOrderDetail_4);
    all_compo_names.insert("...NoSides.");

    // DisplayInstruction
    multiset<string> DisplayInstruction_13;
    FIX::DisplayHighQty DisplayHighQty_13;
    DisplayHighQty_13.setString("18891815");
set_field(noSides_0_2, DisplayHighQty_13, DisplayInstruction_13);
    FIX::DisplayLowQty DisplayLowQty_13;
    DisplayLowQty_13.setString("8842015");
set_field(noSides_0_2, DisplayLowQty_13, DisplayInstruction_13);
    set_field(noSides_0_2, FIX::DisplayMethod{'2'}, DisplayInstruction_13);
    FIX::DisplayMinIncr DisplayMinIncr_13;
    DisplayMinIncr_13.setString("9312006");
set_field(noSides_0_2, DisplayMinIncr_13, DisplayInstruction_13);
    FIX::DisplayQty DisplayQty_13;
    DisplayQty_13.setString("15178583");
set_field(noSides_0_2, DisplayQty_13, DisplayInstruction_13);
    set_field(noSides_0_2, FIX::DisplayWhen{'2'}, DisplayInstruction_13);
    FIX::RefreshQty RefreshQty_13;
    RefreshQty_13.setString("17736811");
set_field(noSides_0_2, RefreshQty_13, DisplayInstruction_13);
    FIX::SecondaryDisplayQty SecondaryDisplayQty_13;
    SecondaryDisplayQty_13.setString("5444501");
set_field(noSides_0_2, SecondaryDisplayQty_13, DisplayInstruction_13);
    all_values.push_back(DisplayInstruction_13);
    all_compo_names.insert("...NoSides..");

    // OrderQtyData
    multiset<string> OrderQtyData_31;
    FIX::CashOrderQty CashOrderQty_31;
    CashOrderQty_31.setString("1968165");
set_field(noSides_0_2, CashOrderQty_31, OrderQtyData_31);
    FIX::OrderPercent OrderPercent_31;
    OrderPercent_31.setString("89.520000");
set_field(noSides_0_2, OrderPercent_31, OrderQtyData_31);
    FIX::OrderQty OrderQty_40;
    OrderQty_40.setString("18382134");
set_field(noSides_0_2, OrderQty_40, OrderQtyData_31);
    set_field(noSides_0_2, FIX::RoundingDirection{'1'}, OrderQtyData_31);
    FIX::RoundingModulus RoundingModulus_31;
    RoundingModulus_31.setString("19682257");
set_field(noSides_0_2, RoundingModulus_31, OrderQtyData_31);
    all_values.push_back(OrderQtyData_31);
    all_compo_names.insert("...NoSides..");

    // TrdAllocGrp
    // Group TrdAllocGrp.NoAllocs
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs noAllocs_2_1_0;
      // TrdAllocGrp.NoAllocs
      multiset<string> TrdAllocGrp_NoAllocs_9;
      set_field(noAllocs_2_1_0, FIX::AllocAccount{"STRING_828350284"}, TrdAllocGrp_NoAllocs_9);
      set_field(noAllocs_2_1_0, FIX::AllocAcctIDSource{43367314}, TrdAllocGrp_NoAllocs_9);
      set_field(noAllocs_2_1_0, FIX::AllocClearingFeeIndicator{"STRING_986341002"}, TrdAllocGrp_NoAllocs_9);
      set_field(noAllocs_2_1_0, FIX::AllocCustomerCapacity{"STRING_645409739"}, TrdAllocGrp_NoAllocs_9);
      set_field(noAllocs_2_1_0, FIX::AllocMethod{2}, TrdAllocGrp_NoAllocs_9);
      FIX::AllocQty AllocQty_53;
      AllocQty_53.setString("9190885");
set_field(noAllocs_2_1_0, AllocQty_53, TrdAllocGrp_NoAllocs_9);
      set_field(noAllocs_2_1_0, FIX::AllocSettlCurrency{"CAN"}, TrdAllocGrp_NoAllocs_9);
      set_field(noAllocs_2_1_0, FIX::IndividualAllocID{"STRING_323598202"}, TrdAllocGrp_NoAllocs_9);
      set_field(noAllocs_2_1_0, FIX::SecondaryIndividualAllocID{"STRING_884953187"}, TrdAllocGrp_NoAllocs_9);
      all_values.push_back(TrdAllocGrp_NoAllocs_9);
      all_compo_names.insert("...NoSides...NoAllocs");

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs noNested2PartyIDs_2_0_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_63;
        set_field(noNested2PartyIDs_2_0_2_0, FIX::Nested2PartyID{"STRING_444528466"}, NestedParties2_NoNested2PartyIDs_63);
        set_field(noNested2PartyIDs_2_0_2_0, FIX::Nested2PartyIDSource{'8'}, NestedParties2_NoNested2PartyIDs_63);
        set_field(noNested2PartyIDs_2_0_2_0, FIX::Nested2PartyRole{1386092206}, NestedParties2_NoNested2PartyIDs_63);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_63);
        all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_0_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_121;
          set_field(noNested2PartySubIDs_2_0_0_3_0, FIX::Nested2PartySubID{"STRING_1129418383"}, NstdPtys2SubGrp_NoNested2PartySubIDs_121);
          set_field(noNested2PartySubIDs_2_0_0_3_0, FIX::Nested2PartySubIDType{22276767}, NstdPtys2SubGrp_NoNested2PartySubIDs_121);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_121);
          all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_2_0_2_0.addGroup(noNested2PartySubIDs_2_0_0_3_0);
        }
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_0_0_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_122;
          set_field(noNested2PartySubIDs_2_0_0_3_1, FIX::Nested2PartySubID{"STRING_497407643"}, NstdPtys2SubGrp_NoNested2PartySubIDs_122);
          set_field(noNested2PartySubIDs_2_0_0_3_1, FIX::Nested2PartySubIDType{2013619949}, NstdPtys2SubGrp_NoNested2PartySubIDs_122);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_122);
          all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_2_0_2_0.addGroup(noNested2PartySubIDs_2_0_0_3_1);
        }
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_0_0_3_2;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_123;
          set_field(noNested2PartySubIDs_2_0_0_3_2, FIX::Nested2PartySubID{"STRING_1630972084"}, NstdPtys2SubGrp_NoNested2PartySubIDs_123);
          set_field(noNested2PartySubIDs_2_0_0_3_2, FIX::Nested2PartySubIDType{1428608333}, NstdPtys2SubGrp_NoNested2PartySubIDs_123);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_123);
          all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_2_0_2_0.addGroup(noNested2PartySubIDs_2_0_0_3_2);
        }
        noAllocs_2_1_0.addGroup(noNested2PartyIDs_2_0_2_0);
      }
      noSides_0_2.addGroup(noAllocs_2_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs noAllocs_2_1_1;
      // TrdAllocGrp.NoAllocs
      multiset<string> TrdAllocGrp_NoAllocs_10;
      set_field(noAllocs_2_1_1, FIX::AllocAccount{"STRING_1383994696"}, TrdAllocGrp_NoAllocs_10);
      set_field(noAllocs_2_1_1, FIX::AllocAcctIDSource{226755611}, TrdAllocGrp_NoAllocs_10);
      set_field(noAllocs_2_1_1, FIX::AllocClearingFeeIndicator{"STRING_1054805848"}, TrdAllocGrp_NoAllocs_10);
      set_field(noAllocs_2_1_1, FIX::AllocCustomerCapacity{"STRING_1928444870"}, TrdAllocGrp_NoAllocs_10);
      set_field(noAllocs_2_1_1, FIX::AllocMethod{3}, TrdAllocGrp_NoAllocs_10);
      FIX::AllocQty AllocQty_54;
      AllocQty_54.setString("320311");
set_field(noAllocs_2_1_1, AllocQty_54, TrdAllocGrp_NoAllocs_10);
      set_field(noAllocs_2_1_1, FIX::AllocSettlCurrency{"EUR"}, TrdAllocGrp_NoAllocs_10);
      set_field(noAllocs_2_1_1, FIX::IndividualAllocID{"STRING_2000256939"}, TrdAllocGrp_NoAllocs_10);
      set_field(noAllocs_2_1_1, FIX::SecondaryIndividualAllocID{"STRING_55408796"}, TrdAllocGrp_NoAllocs_10);
      all_values.push_back(TrdAllocGrp_NoAllocs_10);
      all_compo_names.insert("...NoSides...NoAllocs");

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs noNested2PartyIDs_2_1_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_64;
        set_field(noNested2PartyIDs_2_1_2_0, FIX::Nested2PartyID{"STRING_2043624253"}, NestedParties2_NoNested2PartyIDs_64);
        set_field(noNested2PartyIDs_2_1_2_0, FIX::Nested2PartyIDSource{'1'}, NestedParties2_NoNested2PartyIDs_64);
        set_field(noNested2PartyIDs_2_1_2_0, FIX::Nested2PartyRole{166010996}, NestedParties2_NoNested2PartyIDs_64);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_64);
        all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_1_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_124;
          set_field(noNested2PartySubIDs_2_1_0_3_0, FIX::Nested2PartySubID{"STRING_1960838382"}, NstdPtys2SubGrp_NoNested2PartySubIDs_124);
          set_field(noNested2PartySubIDs_2_1_0_3_0, FIX::Nested2PartySubIDType{312377928}, NstdPtys2SubGrp_NoNested2PartySubIDs_124);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_124);
          all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_2_1_2_0.addGroup(noNested2PartySubIDs_2_1_0_3_0);
        }
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_1_0_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_125;
          set_field(noNested2PartySubIDs_2_1_0_3_1, FIX::Nested2PartySubID{"STRING_2021734179"}, NstdPtys2SubGrp_NoNested2PartySubIDs_125);
          set_field(noNested2PartySubIDs_2_1_0_3_1, FIX::Nested2PartySubIDType{136952936}, NstdPtys2SubGrp_NoNested2PartySubIDs_125);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_125);
          all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_2_1_2_0.addGroup(noNested2PartySubIDs_2_1_0_3_1);
        }
        noAllocs_2_1_1.addGroup(noNested2PartyIDs_2_1_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs noNested2PartyIDs_2_1_2_1;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_65;
        set_field(noNested2PartyIDs_2_1_2_1, FIX::Nested2PartyID{"STRING_1197331115"}, NestedParties2_NoNested2PartyIDs_65);
        set_field(noNested2PartyIDs_2_1_2_1, FIX::Nested2PartyIDSource{'6'}, NestedParties2_NoNested2PartyIDs_65);
        set_field(noNested2PartyIDs_2_1_2_1, FIX::Nested2PartyRole{581481402}, NestedParties2_NoNested2PartyIDs_65);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_65);
        all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_1_1_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_126;
          set_field(noNested2PartySubIDs_2_1_1_3_0, FIX::Nested2PartySubID{"STRING_2023001675"}, NstdPtys2SubGrp_NoNested2PartySubIDs_126);
          set_field(noNested2PartySubIDs_2_1_1_3_0, FIX::Nested2PartySubIDType{1337191155}, NstdPtys2SubGrp_NoNested2PartySubIDs_126);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_126);
          all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_2_1_2_1.addGroup(noNested2PartySubIDs_2_1_1_3_0);
        }
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_1_1_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_127;
          set_field(noNested2PartySubIDs_2_1_1_3_1, FIX::Nested2PartySubID{"STRING_1069960556"}, NstdPtys2SubGrp_NoNested2PartySubIDs_127);
          set_field(noNested2PartySubIDs_2_1_1_3_1, FIX::Nested2PartySubIDType{2045278442}, NstdPtys2SubGrp_NoNested2PartySubIDs_127);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_127);
          all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_2_1_2_1.addGroup(noNested2PartySubIDs_2_1_1_3_1);
        }
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_1_1_3_2;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_128;
          set_field(noNested2PartySubIDs_2_1_1_3_2, FIX::Nested2PartySubID{"STRING_1834598798"}, NstdPtys2SubGrp_NoNested2PartySubIDs_128);
          set_field(noNested2PartySubIDs_2_1_1_3_2, FIX::Nested2PartySubIDType{936096857}, NstdPtys2SubGrp_NoNested2PartySubIDs_128);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_128);
          all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_2_1_2_1.addGroup(noNested2PartySubIDs_2_1_1_3_2);
        }
        noAllocs_2_1_1.addGroup(noNested2PartyIDs_2_1_2_1);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs noNested2PartyIDs_2_1_2_2;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_66;
        set_field(noNested2PartyIDs_2_1_2_2, FIX::Nested2PartyID{"STRING_1528766878"}, NestedParties2_NoNested2PartyIDs_66);
        set_field(noNested2PartyIDs_2_1_2_2, FIX::Nested2PartyIDSource{'1'}, NestedParties2_NoNested2PartyIDs_66);
        set_field(noNested2PartyIDs_2_1_2_2, FIX::Nested2PartyRole{172607905}, NestedParties2_NoNested2PartyIDs_66);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_66);
        all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_1_2_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_129;
          set_field(noNested2PartySubIDs_2_1_2_3_0, FIX::Nested2PartySubID{"STRING_23045684"}, NstdPtys2SubGrp_NoNested2PartySubIDs_129);
          set_field(noNested2PartySubIDs_2_1_2_3_0, FIX::Nested2PartySubIDType{2101052775}, NstdPtys2SubGrp_NoNested2PartySubIDs_129);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_129);
          all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_2_1_2_2.addGroup(noNested2PartySubIDs_2_1_2_3_0);
        }
        noAllocs_2_1_1.addGroup(noNested2PartyIDs_2_1_2_2);
      }
      noSides_0_2.addGroup(noAllocs_2_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs noAllocs_2_1_2;
      // TrdAllocGrp.NoAllocs
      multiset<string> TrdAllocGrp_NoAllocs_11;
      set_field(noAllocs_2_1_2, FIX::AllocAccount{"STRING_31610968"}, TrdAllocGrp_NoAllocs_11);
      set_field(noAllocs_2_1_2, FIX::AllocAcctIDSource{55076836}, TrdAllocGrp_NoAllocs_11);
      set_field(noAllocs_2_1_2, FIX::AllocClearingFeeIndicator{"STRING_1572743808"}, TrdAllocGrp_NoAllocs_11);
      set_field(noAllocs_2_1_2, FIX::AllocCustomerCapacity{"STRING_871345589"}, TrdAllocGrp_NoAllocs_11);
      set_field(noAllocs_2_1_2, FIX::AllocMethod{3}, TrdAllocGrp_NoAllocs_11);
      FIX::AllocQty AllocQty_55;
      AllocQty_55.setString("16281526");
set_field(noAllocs_2_1_2, AllocQty_55, TrdAllocGrp_NoAllocs_11);
      set_field(noAllocs_2_1_2, FIX::AllocSettlCurrency{"EUR"}, TrdAllocGrp_NoAllocs_11);
      set_field(noAllocs_2_1_2, FIX::IndividualAllocID{"STRING_522418754"}, TrdAllocGrp_NoAllocs_11);
      set_field(noAllocs_2_1_2, FIX::SecondaryIndividualAllocID{"STRING_557957842"}, TrdAllocGrp_NoAllocs_11);
      all_values.push_back(TrdAllocGrp_NoAllocs_11);
      all_compo_names.insert("...NoSides...NoAllocs");

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs noNested2PartyIDs_2_2_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_67;
        set_field(noNested2PartyIDs_2_2_2_0, FIX::Nested2PartyID{"STRING_335773488"}, NestedParties2_NoNested2PartyIDs_67);
        set_field(noNested2PartyIDs_2_2_2_0, FIX::Nested2PartyIDSource{'8'}, NestedParties2_NoNested2PartyIDs_67);
        set_field(noNested2PartyIDs_2_2_2_0, FIX::Nested2PartyRole{1435325134}, NestedParties2_NoNested2PartyIDs_67);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_67);
        all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_2_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_130;
          set_field(noNested2PartySubIDs_2_2_0_3_0, FIX::Nested2PartySubID{"STRING_2067666886"}, NstdPtys2SubGrp_NoNested2PartySubIDs_130);
          set_field(noNested2PartySubIDs_2_2_0_3_0, FIX::Nested2PartySubIDType{2072234603}, NstdPtys2SubGrp_NoNested2PartySubIDs_130);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_130);
          all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_2_2_2_0.addGroup(noNested2PartySubIDs_2_2_0_3_0);
        }
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_2_0_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_131;
          set_field(noNested2PartySubIDs_2_2_0_3_1, FIX::Nested2PartySubID{"STRING_1054207827"}, NstdPtys2SubGrp_NoNested2PartySubIDs_131);
          set_field(noNested2PartySubIDs_2_2_0_3_1, FIX::Nested2PartySubIDType{2008209058}, NstdPtys2SubGrp_NoNested2PartySubIDs_131);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_131);
          all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_2_2_2_0.addGroup(noNested2PartySubIDs_2_2_0_3_1);
        }
        {
          FIX50SP2::TradeCaptureReportAck::NoSides::NoAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_2_0_3_2;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_132;
          set_field(noNested2PartySubIDs_2_2_0_3_2, FIX::Nested2PartySubID{"STRING_1947752630"}, NstdPtys2SubGrp_NoNested2PartySubIDs_132);
          set_field(noNested2PartySubIDs_2_2_0_3_2, FIX::Nested2PartySubIDType{243915334}, NstdPtys2SubGrp_NoNested2PartySubIDs_132);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_132);
          all_compo_names.insert("...NoSides...NoAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_2_2_2_0.addGroup(noNested2PartySubIDs_2_2_0_3_2);
        }
        noAllocs_2_1_2.addGroup(noNested2PartyIDs_2_2_2_0);
      }
      noSides_0_2.addGroup(noAllocs_2_1_2);
    }
    msg.addGroup(noSides_0_2);
  }
  // TrdInstrmtLegGrp
  // Group TrdInstrmtLegGrp.NoLegs
  {
    FIX50SP2::TradeCaptureReportAck::NoLegs noLegs_0_0;
    // TrdInstrmtLegGrp.NoLegs
    multiset<string> TrdInstrmtLegGrp_NoLegs_3;
    FIX::LegCalculatedCcyLastQty LegCalculatedCcyLastQty_5;
    LegCalculatedCcyLastQty_5.setString("18455474");
set_field(noLegs_0_0, LegCalculatedCcyLastQty_5, TrdInstrmtLegGrp_NoLegs_3);
    set_field(noLegs_0_0, FIX::LegCoveredOrUncovered{2078514132}, TrdInstrmtLegGrp_NoLegs_3);
    FIX::LegCurrencyRatio LegCurrencyRatio_9;
    LegCurrencyRatio_9.setString("18667828");
set_field(noLegs_0_0, LegCurrencyRatio_9, TrdInstrmtLegGrp_NoLegs_3);
    FIX::LegDividendYield LegDividendYield_9;
    LegDividendYield_9.setString("6.540000");
set_field(noLegs_0_0, LegDividendYield_9, TrdInstrmtLegGrp_NoLegs_3);
    set_field(noLegs_0_0, FIX::LegExecInst{"MULTIPLECHARVALUE_1046753967"}, TrdInstrmtLegGrp_NoLegs_3);
    FIX::LegGrossTradeAmt LegGrossTradeAmt_5;
    LegGrossTradeAmt_5.setString("20393907");
set_field(noLegs_0_0, LegGrossTradeAmt_5, TrdInstrmtLegGrp_NoLegs_3);
    FIX::LegLastForwardPoints LegLastForwardPoints_5;
    LegLastForwardPoints_5.setString("8348694");
set_field(noLegs_0_0, LegLastForwardPoints_5, TrdInstrmtLegGrp_NoLegs_3);
    FIX::LegLastPx LegLastPx_5;
    LegLastPx_5.setString("10697996");
set_field(noLegs_0_0, LegLastPx_5, TrdInstrmtLegGrp_NoLegs_3);
    FIX::LegLastQty LegLastQty_5;
    LegLastQty_5.setString("19929598");
set_field(noLegs_0_0, LegLastQty_5, TrdInstrmtLegGrp_NoLegs_3);
    set_field(noLegs_0_0, FIX::LegNumber{866480464}, TrdInstrmtLegGrp_NoLegs_3);
    set_field(noLegs_0_0, FIX::LegPositionEffect{'1'}, TrdInstrmtLegGrp_NoLegs_3);
    FIX::LegQty LegQty_24;
    LegQty_24.setString("14182200");
set_field(noLegs_0_0, LegQty_24, TrdInstrmtLegGrp_NoLegs_3);
    set_field(noLegs_0_0, FIX::LegRefID{"STRING_1737826053"}, TrdInstrmtLegGrp_NoLegs_3);
    set_field(noLegs_0_0, FIX::LegReportID{"STRING_1032726616"}, TrdInstrmtLegGrp_NoLegs_3);
    set_field(noLegs_0_0, FIX::LegSettlCurrency{"CAN"}, TrdInstrmtLegGrp_NoLegs_3);
    set_field(noLegs_0_0, FIX::LegSettlDate{"LOCALMKTDATE_836717349"}, TrdInstrmtLegGrp_NoLegs_3);
    set_field(noLegs_0_0, FIX::LegSettlType{'1'}, TrdInstrmtLegGrp_NoLegs_3);
    set_field(noLegs_0_0, FIX::LegSwapType{2}, TrdInstrmtLegGrp_NoLegs_3);
    FIX::LegVolatility LegVolatility_9;
    LegVolatility_9.setString("2503083");
set_field(noLegs_0_0, LegVolatility_9, TrdInstrmtLegGrp_NoLegs_3);
    all_values.push_back(TrdInstrmtLegGrp_NoLegs_3);
    all_compo_names.insert("...NoLegs");

    // InstrumentLeg
    multiset<string> InstrumentLeg_140;
    set_field(noLegs_0_0, FIX::EncodedLegIssuer{"DATA_1757081214"}, InstrumentLeg_140);
    set_field(noLegs_0_0, FIX::EncodedLegIssuerLen{1410582863}, InstrumentLeg_140);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDesc{"DATA_1685633439"}, InstrumentLeg_140);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDescLen{82323991}, InstrumentLeg_140);
    set_field(noLegs_0_0, FIX::LegCFICode{"STRING_1330766101"}, InstrumentLeg_140);
    FIX::LegContractMultiplier LegContractMultiplier_140;
    LegContractMultiplier_140.setString("16103843");
set_field(noLegs_0_0, LegContractMultiplier_140, InstrumentLeg_140);
    set_field(noLegs_0_0, FIX::LegContractMultiplierUnit{1136531818}, InstrumentLeg_140);
    set_field(noLegs_0_0, FIX::LegContractSettlMonth{"MONTHYEAR_1191491512"}, InstrumentLeg_140);
    set_field(noLegs_0_0, FIX::LegCountryOfIssue{"COUNTRY_1410653377"}, InstrumentLeg_140);
    set_field(noLegs_0_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1380447152"}, InstrumentLeg_140);
    FIX::LegCouponRate LegCouponRate_140;
    LegCouponRate_140.setString("74.780000");
set_field(noLegs_0_0, LegCouponRate_140, InstrumentLeg_140);
    set_field(noLegs_0_0, FIX::LegCreditRating{"STRING_1108717154"}, InstrumentLeg_140);
    set_field(noLegs_0_0, FIX::LegCurrency{"JPY"}, InstrumentLeg_140);
    set_field(noLegs_0_0, FIX::LegDatedDate{"LOCALMKTDATE_188064160"}, InstrumentLeg_140);
    set_field(noLegs_0_0, FIX::LegExerciseStyle{210747955}, InstrumentLeg_140);
    FIX::LegFactor LegFactor_140;
    LegFactor_140.setString("17333837");
set_field(noLegs_0_0, LegFactor_140, InstrumentLeg_140);
    set_field(noLegs_0_0, FIX::LegFlowScheduleType{1022933656}, InstrumentLeg_140);
    set_field(noLegs_0_0, FIX::LegInstrRegistry{"STRING_1280547607"}, InstrumentLeg_140);
    set_field(noLegs_0_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1578859942"}, InstrumentLeg_140);
    set_field(noLegs_0_0, FIX::LegIssueDate{"LOCALMKTDATE_1889414120"}, InstrumentLeg_140);
    set_field(noLegs_0_0, FIX::LegIssuer{"STRING_257940447"}, InstrumentLeg_140);
    set_field(noLegs_0_0, FIX::LegLocaleOfIssue{"STRING_849596309"}, InstrumentLeg_140);
    set_field(noLegs_0_0, FIX::LegMaturityDate{"LOCALMKTDATE_1479756525"}, InstrumentLeg_140);
    set_field(noLegs_0_0, FIX::LegMaturityMonthYear{"MONTHYEAR_1290667063"}, InstrumentLeg_140);
    set_field(noLegs_0_0, FIX::LegMaturityTime{"TZTIMEONLY_1748485281"}, InstrumentLeg_140);
    set_field(noLegs_0_0, FIX::LegOptAttribute{'1'}, InstrumentLeg_140);
    FIX::LegOptionRatio LegOptionRatio_140;
    LegOptionRatio_140.setString("21273844");
set_field(noLegs_0_0, LegOptionRatio_140, InstrumentLeg_140);
    set_field(noLegs_0_0, FIX::LegPool{"STRING_1022309359"}, InstrumentLeg_140);
    set_field(noLegs_0_0, FIX::LegPriceUnitOfMeasure{"STRING_2002292869"}, InstrumentLeg_140);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_140;
    LegPriceUnitOfMeasureQty_140.setString("2302090");
set_field(noLegs_0_0, LegPriceUnitOfMeasureQty_140, InstrumentLeg_140);
    set_field(noLegs_0_0, FIX::LegProduct{631906925}, InstrumentLeg_140);
    set_field(noLegs_0_0, FIX::LegPutOrCall{1265392085}, InstrumentLeg_140);
    FIX::LegRatioQty LegRatioQty_140;
    LegRatioQty_140.setString("19158425");
set_field(noLegs_0_0, LegRatioQty_140, InstrumentLeg_140);
    set_field(noLegs_0_0, FIX::LegRedemptionDate{"LOCALMKTDATE_714230916"}, InstrumentLeg_140);
    set_field(noLegs_0_0, FIX::LegRepoCollateralSecurityType{"STRING_448674538"}, InstrumentLeg_140);
    FIX::LegRepurchaseRate LegRepurchaseRate_140;
    LegRepurchaseRate_140.setString("32.560000");
set_field(noLegs_0_0, LegRepurchaseRate_140, InstrumentLeg_140);
    set_field(noLegs_0_0, FIX::LegRepurchaseTerm{1850762734}, InstrumentLeg_140);
    set_field(noLegs_0_0, FIX::LegSecurityDesc{"STRING_1640166050"}, InstrumentLeg_140);
    set_field(noLegs_0_0, FIX::LegSecurityExchange{"EXCHANGE_641912985"}, InstrumentLeg_140);
    set_field(noLegs_0_0, FIX::LegSecurityID{"STRING_1083726238"}, InstrumentLeg_140);
    set_field(noLegs_0_0, FIX::LegSecurityIDSource{"STRING_1614859881"}, InstrumentLeg_140);
    set_field(noLegs_0_0, FIX::LegSecuritySubType{"STRING_1750630139"}, InstrumentLeg_140);
    set_field(noLegs_0_0, FIX::LegSecurityType{"STRING_247720226"}, InstrumentLeg_140);
    set_field(noLegs_0_0, FIX::LegSide{'1'}, InstrumentLeg_140);
    set_field(noLegs_0_0, FIX::LegStateOrProvinceOfIssue{"STRING_1938694300"}, InstrumentLeg_140);
    set_field(noLegs_0_0, FIX::LegStrikeCurrency{"CHF"}, InstrumentLeg_140);
    FIX::LegStrikePrice LegStrikePrice_140;
    LegStrikePrice_140.setString("8141443");
set_field(noLegs_0_0, LegStrikePrice_140, InstrumentLeg_140);
    set_field(noLegs_0_0, FIX::LegSymbol{"STRING_1739015789"}, InstrumentLeg_140);
    set_field(noLegs_0_0, FIX::LegSymbolSfx{"STRING_326129267"}, InstrumentLeg_140);
    set_field(noLegs_0_0, FIX::LegTimeUnit{"STRING_556074781"}, InstrumentLeg_140);
    set_field(noLegs_0_0, FIX::LegUnitOfMeasure{"STRING_1996956236"}, InstrumentLeg_140);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_140;
    LegUnitOfMeasureQty_140.setString("11757255");
set_field(noLegs_0_0, LegUnitOfMeasureQty_140, InstrumentLeg_140);
    all_values.push_back(InstrumentLeg_140);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::TradeCaptureReportAck::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_281;
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltID{"STRING_1140139651"}, LegSecAltIDGrp_NoLegSecurityAltID_281);
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltIDSource{"STRING_776727210"}, LegSecAltIDGrp_NoLegSecurityAltID_281);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_281);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_282;
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltID{"STRING_1350393435"}, LegSecAltIDGrp_NoLegSecurityAltID_282);
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltIDSource{"STRING_1120040415"}, LegSecAltIDGrp_NoLegSecurityAltID_282);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_282);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::TradeCaptureReportAck::NoLegs::NoLegStipulations noLegStipulations_0_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_71;
      set_field(noLegStipulations_0_1_0, FIX::LegStipulationType{"STRING_1205202656"}, LegStipulations_NoLegStipulations_71);
      set_field(noLegStipulations_0_1_0, FIX::LegStipulationValue{"STRING_1350249485"}, LegStipulations_NoLegStipulations_71);
      all_values.push_back(LegStipulations_NoLegStipulations_71);
      all_compo_names.insert("...NoLegs...NoLegStipulations");

      noLegs_0_0.addGroup(noLegStipulations_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoLegs::NoLegStipulations noLegStipulations_0_1_1;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_72;
      set_field(noLegStipulations_0_1_1, FIX::LegStipulationType{"STRING_283459846"}, LegStipulations_NoLegStipulations_72);
      set_field(noLegStipulations_0_1_1, FIX::LegStipulationValue{"STRING_323111093"}, LegStipulations_NoLegStipulations_72);
      all_values.push_back(LegStipulations_NoLegStipulations_72);
      all_compo_names.insert("...NoLegs...NoLegStipulations");

      noLegs_0_0.addGroup(noLegStipulations_0_1_1);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::TradeCaptureReportAck::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_158;
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyID{"STRING_997690763"}, NestedParties_NoNestedPartyIDs_158);
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyIDSource{'7'}, NestedParties_NoNestedPartyIDs_158);
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyRole{349867954}, NestedParties_NoNestedPartyIDs_158);
      all_values.push_back(NestedParties_NoNestedPartyIDs_158);
      all_compo_names.insert("...NoLegs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_327;
        set_field(noNestedPartySubIDs_0_0_2_0, FIX::NestedPartySubID{"STRING_264468034"}, NstdPtysSubGrp_NoNestedPartySubIDs_327);
        set_field(noNestedPartySubIDs_0_0_2_0, FIX::NestedPartySubIDType{991780939}, NstdPtysSubGrp_NoNestedPartySubIDs_327);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_327);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_328;
        set_field(noNestedPartySubIDs_0_0_2_1, FIX::NestedPartySubID{"STRING_1784696088"}, NstdPtysSubGrp_NoNestedPartySubIDs_328);
        set_field(noNestedPartySubIDs_0_0_2_1, FIX::NestedPartySubIDType{1879327915}, NstdPtysSubGrp_NoNestedPartySubIDs_328);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_328);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_1);
      }
      noLegs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_159;
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyID{"STRING_594927431"}, NestedParties_NoNestedPartyIDs_159);
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyIDSource{'2'}, NestedParties_NoNestedPartyIDs_159);
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyRole{1040697154}, NestedParties_NoNestedPartyIDs_159);
      all_values.push_back(NestedParties_NoNestedPartyIDs_159);
      all_compo_names.insert("...NoLegs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_329;
        set_field(noNestedPartySubIDs_0_1_2_0, FIX::NestedPartySubID{"STRING_343400848"}, NstdPtysSubGrp_NoNestedPartySubIDs_329);
        set_field(noNestedPartySubIDs_0_1_2_0, FIX::NestedPartySubIDType{1935450128}, NstdPtysSubGrp_NoNestedPartySubIDs_329);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_329);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_330;
        set_field(noNestedPartySubIDs_0_1_2_1, FIX::NestedPartySubID{"STRING_1200282391"}, NstdPtysSubGrp_NoNestedPartySubIDs_330);
        set_field(noNestedPartySubIDs_0_1_2_1, FIX::NestedPartySubIDType{2082416637}, NstdPtysSubGrp_NoNestedPartySubIDs_330);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_330);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_1);
      }
      noLegs_0_0.addGroup(noNestedPartyIDs_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_160;
      set_field(noNestedPartyIDs_0_1_2, FIX::NestedPartyID{"STRING_114095747"}, NestedParties_NoNestedPartyIDs_160);
      set_field(noNestedPartyIDs_0_1_2, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_160);
      set_field(noNestedPartyIDs_0_1_2, FIX::NestedPartyRole{1931889225}, NestedParties_NoNestedPartyIDs_160);
      all_values.push_back(NestedParties_NoNestedPartyIDs_160);
      all_compo_names.insert("...NoLegs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_331;
        set_field(noNestedPartySubIDs_0_2_2_0, FIX::NestedPartySubID{"STRING_1644704831"}, NstdPtysSubGrp_NoNestedPartySubIDs_331);
        set_field(noNestedPartySubIDs_0_2_2_0, FIX::NestedPartySubIDType{924545228}, NstdPtysSubGrp_NoNestedPartySubIDs_331);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_331);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_2.addGroup(noNestedPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_332;
        set_field(noNestedPartySubIDs_0_2_2_1, FIX::NestedPartySubID{"STRING_2066548534"}, NstdPtysSubGrp_NoNestedPartySubIDs_332);
        set_field(noNestedPartySubIDs_0_2_2_1, FIX::NestedPartySubIDType{847614618}, NstdPtysSubGrp_NoNestedPartySubIDs_332);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_332);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_2.addGroup(noNestedPartySubIDs_0_2_2_1);
      }
      noLegs_0_0.addGroup(noNestedPartyIDs_0_1_2);
    }
    // TradeCapLegUnderlyingsGrp
    // Group TradeCapLegUnderlyingsGrp.NoOfLegUnderlyings
    {
      FIX50SP2::TradeCaptureReportAck::NoLegs::NoOfLegUnderlyings noOfLegUnderlyings_0_1_0;
      // TradeCapLegUnderlyingsGrp.NoOfLegUnderlyings
      // UnderlyingLegInstrument
      multiset<string> UnderlyingLegInstrument_7;
      set_field(noOfLegUnderlyings_0_1_0, FIX::UnderlyingLegCFICode{"STRING_1718101455"}, UnderlyingLegInstrument_7);
      set_field(noOfLegUnderlyings_0_1_0, FIX::UnderlyingLegMaturityDate{"LOCALMKTDATE_2052817274"}, UnderlyingLegInstrument_7);
      set_field(noOfLegUnderlyings_0_1_0, FIX::UnderlyingLegMaturityMonthYear{"MONTHYEAR_1247351481"}, UnderlyingLegInstrument_7);
      set_field(noOfLegUnderlyings_0_1_0, FIX::UnderlyingLegMaturityTime{"TZTIMEONLY_2001561302"}, UnderlyingLegInstrument_7);
      set_field(noOfLegUnderlyings_0_1_0, FIX::UnderlyingLegOptAttribute{'2'}, UnderlyingLegInstrument_7);
      set_field(noOfLegUnderlyings_0_1_0, FIX::UnderlyingLegPutOrCall{218476179}, UnderlyingLegInstrument_7);
      set_field(noOfLegUnderlyings_0_1_0, FIX::UnderlyingLegSecurityDesc{"STRING_851768417"}, UnderlyingLegInstrument_7);
      set_field(noOfLegUnderlyings_0_1_0, FIX::UnderlyingLegSecurityExchange{"STRING_1000230352"}, UnderlyingLegInstrument_7);
      set_field(noOfLegUnderlyings_0_1_0, FIX::UnderlyingLegSecurityID{"STRING_568344133"}, UnderlyingLegInstrument_7);
      set_field(noOfLegUnderlyings_0_1_0, FIX::UnderlyingLegSecurityIDSource{"STRING_1552738266"}, UnderlyingLegInstrument_7);
      set_field(noOfLegUnderlyings_0_1_0, FIX::UnderlyingLegSecuritySubType{"STRING_1264698386"}, UnderlyingLegInstrument_7);
      set_field(noOfLegUnderlyings_0_1_0, FIX::UnderlyingLegSecurityType{"STRING_1560125072"}, UnderlyingLegInstrument_7);
      FIX::UnderlyingLegStrikePrice UnderlyingLegStrikePrice_7;
      UnderlyingLegStrikePrice_7.setString("11899507");
set_field(noOfLegUnderlyings_0_1_0, UnderlyingLegStrikePrice_7, UnderlyingLegInstrument_7);
      set_field(noOfLegUnderlyings_0_1_0, FIX::UnderlyingLegSymbol{"STRING_996542654"}, UnderlyingLegInstrument_7);
      set_field(noOfLegUnderlyings_0_1_0, FIX::UnderlyingLegSymbolSfx{"STRING_7568855"}, UnderlyingLegInstrument_7);
      all_values.push_back(UnderlyingLegInstrument_7);
      all_compo_names.insert("...NoLegs...NoOfLegUnderlyings.");

      // UnderlyingLegSecurityAltIDGrp
      // Group UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
      {
        FIX50SP2::TradeCaptureReportAck::NoLegs::NoOfLegUnderlyings::NoUnderlyingLegSecurityAltID noUnderlyingLegSecurityAltID_0_0_2_0;
        // UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
        multiset<string> UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_13;
        set_field(noUnderlyingLegSecurityAltID_0_0_2_0, FIX::UnderlyingLegSecurityAltID{"STRING_2037239808"}, UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_13);
        set_field(noUnderlyingLegSecurityAltID_0_0_2_0, FIX::UnderlyingLegSecurityAltIDSource{"STRING_393706938"}, UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_13);
        all_values.push_back(UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_13);
        all_compo_names.insert("...NoLegs...NoOfLegUnderlyings....NoUnderlyingLegSecurityAltID");

        noOfLegUnderlyings_0_1_0.addGroup(noUnderlyingLegSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoLegs::NoOfLegUnderlyings::NoUnderlyingLegSecurityAltID noUnderlyingLegSecurityAltID_0_0_2_1;
        // UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
        multiset<string> UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_14;
        set_field(noUnderlyingLegSecurityAltID_0_0_2_1, FIX::UnderlyingLegSecurityAltID{"STRING_1418284221"}, UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_14);
        set_field(noUnderlyingLegSecurityAltID_0_0_2_1, FIX::UnderlyingLegSecurityAltIDSource{"STRING_1825206288"}, UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_14);
        all_values.push_back(UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_14);
        all_compo_names.insert("...NoLegs...NoOfLegUnderlyings....NoUnderlyingLegSecurityAltID");

        noOfLegUnderlyings_0_1_0.addGroup(noUnderlyingLegSecurityAltID_0_0_2_1);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoLegs::NoOfLegUnderlyings::NoUnderlyingLegSecurityAltID noUnderlyingLegSecurityAltID_0_0_2_2;
        // UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
        multiset<string> UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_15;
        set_field(noUnderlyingLegSecurityAltID_0_0_2_2, FIX::UnderlyingLegSecurityAltID{"STRING_1593989330"}, UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_15);
        set_field(noUnderlyingLegSecurityAltID_0_0_2_2, FIX::UnderlyingLegSecurityAltIDSource{"STRING_1353217211"}, UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_15);
        all_values.push_back(UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_15);
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
    multiset<string> TrdInstrmtLegGrp_NoLegs_4;
    FIX::LegCalculatedCcyLastQty LegCalculatedCcyLastQty_6;
    LegCalculatedCcyLastQty_6.setString("19393020");
set_field(noLegs_0_1, LegCalculatedCcyLastQty_6, TrdInstrmtLegGrp_NoLegs_4);
    set_field(noLegs_0_1, FIX::LegCoveredOrUncovered{1202862854}, TrdInstrmtLegGrp_NoLegs_4);
    FIX::LegCurrencyRatio LegCurrencyRatio_10;
    LegCurrencyRatio_10.setString("11376227");
set_field(noLegs_0_1, LegCurrencyRatio_10, TrdInstrmtLegGrp_NoLegs_4);
    FIX::LegDividendYield LegDividendYield_10;
    LegDividendYield_10.setString("97.120000");
set_field(noLegs_0_1, LegDividendYield_10, TrdInstrmtLegGrp_NoLegs_4);
    set_field(noLegs_0_1, FIX::LegExecInst{"MULTIPLECHARVALUE_700084037"}, TrdInstrmtLegGrp_NoLegs_4);
    FIX::LegGrossTradeAmt LegGrossTradeAmt_6;
    LegGrossTradeAmt_6.setString("20621680");
set_field(noLegs_0_1, LegGrossTradeAmt_6, TrdInstrmtLegGrp_NoLegs_4);
    FIX::LegLastForwardPoints LegLastForwardPoints_6;
    LegLastForwardPoints_6.setString("10007045");
set_field(noLegs_0_1, LegLastForwardPoints_6, TrdInstrmtLegGrp_NoLegs_4);
    FIX::LegLastPx LegLastPx_6;
    LegLastPx_6.setString("15476986");
set_field(noLegs_0_1, LegLastPx_6, TrdInstrmtLegGrp_NoLegs_4);
    FIX::LegLastQty LegLastQty_6;
    LegLastQty_6.setString("19592700");
set_field(noLegs_0_1, LegLastQty_6, TrdInstrmtLegGrp_NoLegs_4);
    set_field(noLegs_0_1, FIX::LegNumber{571322406}, TrdInstrmtLegGrp_NoLegs_4);
    set_field(noLegs_0_1, FIX::LegPositionEffect{'1'}, TrdInstrmtLegGrp_NoLegs_4);
    FIX::LegQty LegQty_25;
    LegQty_25.setString("10591378");
set_field(noLegs_0_1, LegQty_25, TrdInstrmtLegGrp_NoLegs_4);
    set_field(noLegs_0_1, FIX::LegRefID{"STRING_425400060"}, TrdInstrmtLegGrp_NoLegs_4);
    set_field(noLegs_0_1, FIX::LegReportID{"STRING_1681477002"}, TrdInstrmtLegGrp_NoLegs_4);
    set_field(noLegs_0_1, FIX::LegSettlCurrency{"CAN"}, TrdInstrmtLegGrp_NoLegs_4);
    set_field(noLegs_0_1, FIX::LegSettlDate{"LOCALMKTDATE_534223706"}, TrdInstrmtLegGrp_NoLegs_4);
    set_field(noLegs_0_1, FIX::LegSettlType{'1'}, TrdInstrmtLegGrp_NoLegs_4);
    set_field(noLegs_0_1, FIX::LegSwapType{1}, TrdInstrmtLegGrp_NoLegs_4);
    FIX::LegVolatility LegVolatility_10;
    LegVolatility_10.setString("17989220");
set_field(noLegs_0_1, LegVolatility_10, TrdInstrmtLegGrp_NoLegs_4);
    all_values.push_back(TrdInstrmtLegGrp_NoLegs_4);
    all_compo_names.insert("...NoLegs");

    // InstrumentLeg
    multiset<string> InstrumentLeg_141;
    set_field(noLegs_0_1, FIX::EncodedLegIssuer{"DATA_1258599582"}, InstrumentLeg_141);
    set_field(noLegs_0_1, FIX::EncodedLegIssuerLen{1872373802}, InstrumentLeg_141);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDesc{"DATA_647981098"}, InstrumentLeg_141);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDescLen{1266168438}, InstrumentLeg_141);
    set_field(noLegs_0_1, FIX::LegCFICode{"STRING_799773527"}, InstrumentLeg_141);
    FIX::LegContractMultiplier LegContractMultiplier_141;
    LegContractMultiplier_141.setString("5377372");
set_field(noLegs_0_1, LegContractMultiplier_141, InstrumentLeg_141);
    set_field(noLegs_0_1, FIX::LegContractMultiplierUnit{1659875376}, InstrumentLeg_141);
    set_field(noLegs_0_1, FIX::LegContractSettlMonth{"MONTHYEAR_70574101"}, InstrumentLeg_141);
    set_field(noLegs_0_1, FIX::LegCountryOfIssue{"COUNTRY_215459899"}, InstrumentLeg_141);
    set_field(noLegs_0_1, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1106381058"}, InstrumentLeg_141);
    FIX::LegCouponRate LegCouponRate_141;
    LegCouponRate_141.setString("13.120000");
set_field(noLegs_0_1, LegCouponRate_141, InstrumentLeg_141);
    set_field(noLegs_0_1, FIX::LegCreditRating{"STRING_7278287"}, InstrumentLeg_141);
    set_field(noLegs_0_1, FIX::LegCurrency{"JPY"}, InstrumentLeg_141);
    set_field(noLegs_0_1, FIX::LegDatedDate{"LOCALMKTDATE_1088918000"}, InstrumentLeg_141);
    set_field(noLegs_0_1, FIX::LegExerciseStyle{861844302}, InstrumentLeg_141);
    FIX::LegFactor LegFactor_141;
    LegFactor_141.setString("3286148");
set_field(noLegs_0_1, LegFactor_141, InstrumentLeg_141);
    set_field(noLegs_0_1, FIX::LegFlowScheduleType{2089622599}, InstrumentLeg_141);
    set_field(noLegs_0_1, FIX::LegInstrRegistry{"STRING_262059310"}, InstrumentLeg_141);
    set_field(noLegs_0_1, FIX::LegInterestAccrualDate{"LOCALMKTDATE_140401186"}, InstrumentLeg_141);
    set_field(noLegs_0_1, FIX::LegIssueDate{"LOCALMKTDATE_513461357"}, InstrumentLeg_141);
    set_field(noLegs_0_1, FIX::LegIssuer{"STRING_1715091592"}, InstrumentLeg_141);
    set_field(noLegs_0_1, FIX::LegLocaleOfIssue{"STRING_1199539032"}, InstrumentLeg_141);
    set_field(noLegs_0_1, FIX::LegMaturityDate{"LOCALMKTDATE_938861418"}, InstrumentLeg_141);
    set_field(noLegs_0_1, FIX::LegMaturityMonthYear{"MONTHYEAR_1249084946"}, InstrumentLeg_141);
    set_field(noLegs_0_1, FIX::LegMaturityTime{"TZTIMEONLY_329669409"}, InstrumentLeg_141);
    set_field(noLegs_0_1, FIX::LegOptAttribute{'6'}, InstrumentLeg_141);
    FIX::LegOptionRatio LegOptionRatio_141;
    LegOptionRatio_141.setString("17833086");
set_field(noLegs_0_1, LegOptionRatio_141, InstrumentLeg_141);
    set_field(noLegs_0_1, FIX::LegPool{"STRING_28143919"}, InstrumentLeg_141);
    set_field(noLegs_0_1, FIX::LegPriceUnitOfMeasure{"STRING_750969343"}, InstrumentLeg_141);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_141;
    LegPriceUnitOfMeasureQty_141.setString("14347470");
set_field(noLegs_0_1, LegPriceUnitOfMeasureQty_141, InstrumentLeg_141);
    set_field(noLegs_0_1, FIX::LegProduct{1286743502}, InstrumentLeg_141);
    set_field(noLegs_0_1, FIX::LegPutOrCall{475859498}, InstrumentLeg_141);
    FIX::LegRatioQty LegRatioQty_141;
    LegRatioQty_141.setString("20827281");
set_field(noLegs_0_1, LegRatioQty_141, InstrumentLeg_141);
    set_field(noLegs_0_1, FIX::LegRedemptionDate{"LOCALMKTDATE_405428292"}, InstrumentLeg_141);
    set_field(noLegs_0_1, FIX::LegRepoCollateralSecurityType{"STRING_1275633025"}, InstrumentLeg_141);
    FIX::LegRepurchaseRate LegRepurchaseRate_141;
    LegRepurchaseRate_141.setString("18.060000");
set_field(noLegs_0_1, LegRepurchaseRate_141, InstrumentLeg_141);
    set_field(noLegs_0_1, FIX::LegRepurchaseTerm{2065303668}, InstrumentLeg_141);
    set_field(noLegs_0_1, FIX::LegSecurityDesc{"STRING_1346207126"}, InstrumentLeg_141);
    set_field(noLegs_0_1, FIX::LegSecurityExchange{"EXCHANGE_688441705"}, InstrumentLeg_141);
    set_field(noLegs_0_1, FIX::LegSecurityID{"STRING_1024201079"}, InstrumentLeg_141);
    set_field(noLegs_0_1, FIX::LegSecurityIDSource{"STRING_622514790"}, InstrumentLeg_141);
    set_field(noLegs_0_1, FIX::LegSecuritySubType{"STRING_695719993"}, InstrumentLeg_141);
    set_field(noLegs_0_1, FIX::LegSecurityType{"STRING_1185961344"}, InstrumentLeg_141);
    set_field(noLegs_0_1, FIX::LegSide{'1'}, InstrumentLeg_141);
    set_field(noLegs_0_1, FIX::LegStateOrProvinceOfIssue{"STRING_1784637993"}, InstrumentLeg_141);
    set_field(noLegs_0_1, FIX::LegStrikeCurrency{"JPY"}, InstrumentLeg_141);
    FIX::LegStrikePrice LegStrikePrice_141;
    LegStrikePrice_141.setString("17267769");
set_field(noLegs_0_1, LegStrikePrice_141, InstrumentLeg_141);
    set_field(noLegs_0_1, FIX::LegSymbol{"STRING_162381308"}, InstrumentLeg_141);
    set_field(noLegs_0_1, FIX::LegSymbolSfx{"STRING_1505461251"}, InstrumentLeg_141);
    set_field(noLegs_0_1, FIX::LegTimeUnit{"STRING_92754653"}, InstrumentLeg_141);
    set_field(noLegs_0_1, FIX::LegUnitOfMeasure{"STRING_1877472900"}, InstrumentLeg_141);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_141;
    LegUnitOfMeasureQty_141.setString("5575166");
set_field(noLegs_0_1, LegUnitOfMeasureQty_141, InstrumentLeg_141);
    all_values.push_back(InstrumentLeg_141);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::TradeCaptureReportAck::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_283;
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltID{"STRING_979074198"}, LegSecAltIDGrp_NoLegSecurityAltID_283);
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltIDSource{"STRING_887186045"}, LegSecAltIDGrp_NoLegSecurityAltID_283);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_283);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_284;
      set_field(noLegSecurityAltID_1_1_1, FIX::LegSecurityAltID{"STRING_1100162319"}, LegSecAltIDGrp_NoLegSecurityAltID_284);
      set_field(noLegSecurityAltID_1_1_1, FIX::LegSecurityAltIDSource{"STRING_614899202"}, LegSecAltIDGrp_NoLegSecurityAltID_284);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_284);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_285;
      set_field(noLegSecurityAltID_1_1_2, FIX::LegSecurityAltID{"STRING_915329964"}, LegSecAltIDGrp_NoLegSecurityAltID_285);
      set_field(noLegSecurityAltID_1_1_2, FIX::LegSecurityAltIDSource{"STRING_1851131662"}, LegSecAltIDGrp_NoLegSecurityAltID_285);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_285);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_2);
    }
    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::TradeCaptureReportAck::NoLegs::NoLegStipulations noLegStipulations_1_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_73;
      set_field(noLegStipulations_1_1_0, FIX::LegStipulationType{"STRING_54589818"}, LegStipulations_NoLegStipulations_73);
      set_field(noLegStipulations_1_1_0, FIX::LegStipulationValue{"STRING_179507512"}, LegStipulations_NoLegStipulations_73);
      all_values.push_back(LegStipulations_NoLegStipulations_73);
      all_compo_names.insert("...NoLegs...NoLegStipulations");

      noLegs_0_1.addGroup(noLegStipulations_1_1_0);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::TradeCaptureReportAck::NoLegs::NoNestedPartyIDs noNestedPartyIDs_1_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_161;
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyID{"STRING_460018110"}, NestedParties_NoNestedPartyIDs_161);
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_161);
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyRole{310389004}, NestedParties_NoNestedPartyIDs_161);
      all_values.push_back(NestedParties_NoNestedPartyIDs_161);
      all_compo_names.insert("...NoLegs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_333;
        set_field(noNestedPartySubIDs_1_0_2_0, FIX::NestedPartySubID{"STRING_653864016"}, NstdPtysSubGrp_NoNestedPartySubIDs_333);
        set_field(noNestedPartySubIDs_1_0_2_0, FIX::NestedPartySubIDType{998830709}, NstdPtysSubGrp_NoNestedPartySubIDs_333);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_333);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_334;
        set_field(noNestedPartySubIDs_1_0_2_1, FIX::NestedPartySubID{"STRING_1402039210"}, NstdPtysSubGrp_NoNestedPartySubIDs_334);
        set_field(noNestedPartySubIDs_1_0_2_1, FIX::NestedPartySubIDType{1276378807}, NstdPtysSubGrp_NoNestedPartySubIDs_334);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_334);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_335;
        set_field(noNestedPartySubIDs_1_0_2_2, FIX::NestedPartySubID{"STRING_1694550702"}, NstdPtysSubGrp_NoNestedPartySubIDs_335);
        set_field(noNestedPartySubIDs_1_0_2_2, FIX::NestedPartySubIDType{440516906}, NstdPtysSubGrp_NoNestedPartySubIDs_335);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_335);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_2);
      }
      noLegs_0_1.addGroup(noNestedPartyIDs_1_1_0);
    }
    // TradeCapLegUnderlyingsGrp
    // Group TradeCapLegUnderlyingsGrp.NoOfLegUnderlyings
    {
      FIX50SP2::TradeCaptureReportAck::NoLegs::NoOfLegUnderlyings noOfLegUnderlyings_1_1_0;
      // TradeCapLegUnderlyingsGrp.NoOfLegUnderlyings
      // UnderlyingLegInstrument
      multiset<string> UnderlyingLegInstrument_8;
      set_field(noOfLegUnderlyings_1_1_0, FIX::UnderlyingLegCFICode{"STRING_1331705047"}, UnderlyingLegInstrument_8);
      set_field(noOfLegUnderlyings_1_1_0, FIX::UnderlyingLegMaturityDate{"LOCALMKTDATE_340838904"}, UnderlyingLegInstrument_8);
      set_field(noOfLegUnderlyings_1_1_0, FIX::UnderlyingLegMaturityMonthYear{"MONTHYEAR_1530400466"}, UnderlyingLegInstrument_8);
      set_field(noOfLegUnderlyings_1_1_0, FIX::UnderlyingLegMaturityTime{"TZTIMEONLY_910998343"}, UnderlyingLegInstrument_8);
      set_field(noOfLegUnderlyings_1_1_0, FIX::UnderlyingLegOptAttribute{'5'}, UnderlyingLegInstrument_8);
      set_field(noOfLegUnderlyings_1_1_0, FIX::UnderlyingLegPutOrCall{888378069}, UnderlyingLegInstrument_8);
      set_field(noOfLegUnderlyings_1_1_0, FIX::UnderlyingLegSecurityDesc{"STRING_1003752997"}, UnderlyingLegInstrument_8);
      set_field(noOfLegUnderlyings_1_1_0, FIX::UnderlyingLegSecurityExchange{"STRING_233209465"}, UnderlyingLegInstrument_8);
      set_field(noOfLegUnderlyings_1_1_0, FIX::UnderlyingLegSecurityID{"STRING_1445894705"}, UnderlyingLegInstrument_8);
      set_field(noOfLegUnderlyings_1_1_0, FIX::UnderlyingLegSecurityIDSource{"STRING_2035369068"}, UnderlyingLegInstrument_8);
      set_field(noOfLegUnderlyings_1_1_0, FIX::UnderlyingLegSecuritySubType{"STRING_1212283664"}, UnderlyingLegInstrument_8);
      set_field(noOfLegUnderlyings_1_1_0, FIX::UnderlyingLegSecurityType{"STRING_185597102"}, UnderlyingLegInstrument_8);
      FIX::UnderlyingLegStrikePrice UnderlyingLegStrikePrice_8;
      UnderlyingLegStrikePrice_8.setString("9880477");
set_field(noOfLegUnderlyings_1_1_0, UnderlyingLegStrikePrice_8, UnderlyingLegInstrument_8);
      set_field(noOfLegUnderlyings_1_1_0, FIX::UnderlyingLegSymbol{"STRING_1827182866"}, UnderlyingLegInstrument_8);
      set_field(noOfLegUnderlyings_1_1_0, FIX::UnderlyingLegSymbolSfx{"STRING_1100927066"}, UnderlyingLegInstrument_8);
      all_values.push_back(UnderlyingLegInstrument_8);
      all_compo_names.insert("...NoLegs...NoOfLegUnderlyings.");

      // UnderlyingLegSecurityAltIDGrp
      // Group UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
      {
        FIX50SP2::TradeCaptureReportAck::NoLegs::NoOfLegUnderlyings::NoUnderlyingLegSecurityAltID noUnderlyingLegSecurityAltID_1_0_2_0;
        // UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
        multiset<string> UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_16;
        set_field(noUnderlyingLegSecurityAltID_1_0_2_0, FIX::UnderlyingLegSecurityAltID{"STRING_1729345517"}, UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_16);
        set_field(noUnderlyingLegSecurityAltID_1_0_2_0, FIX::UnderlyingLegSecurityAltIDSource{"STRING_1155516885"}, UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_16);
        all_values.push_back(UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_16);
        all_compo_names.insert("...NoLegs...NoOfLegUnderlyings....NoUnderlyingLegSecurityAltID");

        noOfLegUnderlyings_1_1_0.addGroup(noUnderlyingLegSecurityAltID_1_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoLegs::NoOfLegUnderlyings::NoUnderlyingLegSecurityAltID noUnderlyingLegSecurityAltID_1_0_2_1;
        // UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
        multiset<string> UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_17;
        set_field(noUnderlyingLegSecurityAltID_1_0_2_1, FIX::UnderlyingLegSecurityAltID{"STRING_871203266"}, UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_17);
        set_field(noUnderlyingLegSecurityAltID_1_0_2_1, FIX::UnderlyingLegSecurityAltIDSource{"STRING_1566752715"}, UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_17);
        all_values.push_back(UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_17);
        all_compo_names.insert("...NoLegs...NoOfLegUnderlyings....NoUnderlyingLegSecurityAltID");

        noOfLegUnderlyings_1_1_0.addGroup(noUnderlyingLegSecurityAltID_1_0_2_1);
      }
      noLegs_0_1.addGroup(noOfLegUnderlyings_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoLegs::NoOfLegUnderlyings noOfLegUnderlyings_1_1_1;
      // TradeCapLegUnderlyingsGrp.NoOfLegUnderlyings
      // UnderlyingLegInstrument
      multiset<string> UnderlyingLegInstrument_9;
      set_field(noOfLegUnderlyings_1_1_1, FIX::UnderlyingLegCFICode{"STRING_1615534995"}, UnderlyingLegInstrument_9);
      set_field(noOfLegUnderlyings_1_1_1, FIX::UnderlyingLegMaturityDate{"LOCALMKTDATE_178860156"}, UnderlyingLegInstrument_9);
      set_field(noOfLegUnderlyings_1_1_1, FIX::UnderlyingLegMaturityMonthYear{"MONTHYEAR_1877141719"}, UnderlyingLegInstrument_9);
      set_field(noOfLegUnderlyings_1_1_1, FIX::UnderlyingLegMaturityTime{"TZTIMEONLY_1993373126"}, UnderlyingLegInstrument_9);
      set_field(noOfLegUnderlyings_1_1_1, FIX::UnderlyingLegOptAttribute{'8'}, UnderlyingLegInstrument_9);
      set_field(noOfLegUnderlyings_1_1_1, FIX::UnderlyingLegPutOrCall{728488781}, UnderlyingLegInstrument_9);
      set_field(noOfLegUnderlyings_1_1_1, FIX::UnderlyingLegSecurityDesc{"STRING_1247928688"}, UnderlyingLegInstrument_9);
      set_field(noOfLegUnderlyings_1_1_1, FIX::UnderlyingLegSecurityExchange{"STRING_2109102980"}, UnderlyingLegInstrument_9);
      set_field(noOfLegUnderlyings_1_1_1, FIX::UnderlyingLegSecurityID{"STRING_275555835"}, UnderlyingLegInstrument_9);
      set_field(noOfLegUnderlyings_1_1_1, FIX::UnderlyingLegSecurityIDSource{"STRING_1688445594"}, UnderlyingLegInstrument_9);
      set_field(noOfLegUnderlyings_1_1_1, FIX::UnderlyingLegSecuritySubType{"STRING_126959734"}, UnderlyingLegInstrument_9);
      set_field(noOfLegUnderlyings_1_1_1, FIX::UnderlyingLegSecurityType{"STRING_1607260883"}, UnderlyingLegInstrument_9);
      FIX::UnderlyingLegStrikePrice UnderlyingLegStrikePrice_9;
      UnderlyingLegStrikePrice_9.setString("20292844");
set_field(noOfLegUnderlyings_1_1_1, UnderlyingLegStrikePrice_9, UnderlyingLegInstrument_9);
      set_field(noOfLegUnderlyings_1_1_1, FIX::UnderlyingLegSymbol{"STRING_1657360200"}, UnderlyingLegInstrument_9);
      set_field(noOfLegUnderlyings_1_1_1, FIX::UnderlyingLegSymbolSfx{"STRING_370775578"}, UnderlyingLegInstrument_9);
      all_values.push_back(UnderlyingLegInstrument_9);
      all_compo_names.insert("...NoLegs...NoOfLegUnderlyings.");

      // UnderlyingLegSecurityAltIDGrp
      // Group UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
      {
        FIX50SP2::TradeCaptureReportAck::NoLegs::NoOfLegUnderlyings::NoUnderlyingLegSecurityAltID noUnderlyingLegSecurityAltID_1_1_2_0;
        // UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
        multiset<string> UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_18;
        set_field(noUnderlyingLegSecurityAltID_1_1_2_0, FIX::UnderlyingLegSecurityAltID{"STRING_398254622"}, UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_18);
        set_field(noUnderlyingLegSecurityAltID_1_1_2_0, FIX::UnderlyingLegSecurityAltIDSource{"STRING_1374528575"}, UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_18);
        all_values.push_back(UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_18);
        all_compo_names.insert("...NoLegs...NoOfLegUnderlyings....NoUnderlyingLegSecurityAltID");

        noOfLegUnderlyings_1_1_1.addGroup(noUnderlyingLegSecurityAltID_1_1_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoLegs::NoOfLegUnderlyings::NoUnderlyingLegSecurityAltID noUnderlyingLegSecurityAltID_1_1_2_1;
        // UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
        multiset<string> UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_19;
        set_field(noUnderlyingLegSecurityAltID_1_1_2_1, FIX::UnderlyingLegSecurityAltID{"STRING_618230529"}, UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_19);
        set_field(noUnderlyingLegSecurityAltID_1_1_2_1, FIX::UnderlyingLegSecurityAltIDSource{"STRING_1844149327"}, UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_19);
        all_values.push_back(UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_19);
        all_compo_names.insert("...NoLegs...NoOfLegUnderlyings....NoUnderlyingLegSecurityAltID");

        noOfLegUnderlyings_1_1_1.addGroup(noUnderlyingLegSecurityAltID_1_1_2_1);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoLegs::NoOfLegUnderlyings::NoUnderlyingLegSecurityAltID noUnderlyingLegSecurityAltID_1_1_2_2;
        // UnderlyingLegSecurityAltIDGrp.NoUnderlyingLegSecurityAltID
        multiset<string> UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_20;
        set_field(noUnderlyingLegSecurityAltID_1_1_2_2, FIX::UnderlyingLegSecurityAltID{"STRING_1262413996"}, UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_20);
        set_field(noUnderlyingLegSecurityAltID_1_1_2_2, FIX::UnderlyingLegSecurityAltIDSource{"STRING_1830514193"}, UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_20);
        all_values.push_back(UnderlyingLegSecurityAltIDGrp_NoUnderlyingLegSecurityAltID_20);
        all_compo_names.insert("...NoLegs...NoOfLegUnderlyings....NoUnderlyingLegSecurityAltID");

        noOfLegUnderlyings_1_1_1.addGroup(noUnderlyingLegSecurityAltID_1_1_2_2);
      }
      noLegs_0_1.addGroup(noOfLegUnderlyings_1_1_1);
    }
    msg.addGroup(noLegs_0_1);
  }
  // TrdRegTimestamps
  // Group TrdRegTimestamps.NoTrdRegTimestamps
  {
    FIX50SP2::TradeCaptureReportAck::NoTrdRegTimestamps noTrdRegTimestamps_0_0;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_21;
    set_field(noTrdRegTimestamps_0_0, FIX::DeskOrderHandlingInst{"MULTIPLESTRINGVALUE_NH"}, TrdRegTimestamps_NoTrdRegTimestamps_21);
    set_field(noTrdRegTimestamps_0_0, FIX::DeskType{"STRING_IS"}, TrdRegTimestamps_NoTrdRegTimestamps_21);
    set_field(noTrdRegTimestamps_0_0, FIX::DeskTypeSource{1}, TrdRegTimestamps_NoTrdRegTimestamps_21);
    set_field(noTrdRegTimestamps_0_0, FIX::TrdRegTimestamp{FIX::UTCTIMESTAMP(17, 12, 28, 5, 9, 2010)}, TrdRegTimestamps_NoTrdRegTimestamps_21);
    set_field(noTrdRegTimestamps_0_0, FIX::TrdRegTimestampOrigin{"STRING_241002420"}, TrdRegTimestamps_NoTrdRegTimestamps_21);
    set_field(noTrdRegTimestamps_0_0, FIX::TrdRegTimestampType{6}, TrdRegTimestamps_NoTrdRegTimestamps_21);
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_21);
    all_compo_names.insert("...NoTrdRegTimestamps");

    msg.addGroup(noTrdRegTimestamps_0_0);
  }
  // TrdRepIndicatorsGrp
  // Group TrdRepIndicatorsGrp.NoTrdRepIndicators
  {
    FIX50SP2::TradeCaptureReportAck::NoTrdRepIndicators noTrdRepIndicators_0_0;
    // TrdRepIndicatorsGrp.NoTrdRepIndicators
    multiset<string> TrdRepIndicatorsGrp_NoTrdRepIndicators_2;
    set_field(noTrdRepIndicators_0_0, FIX::TrdRepIndicator{false}, TrdRepIndicatorsGrp_NoTrdRepIndicators_2);
    set_field(noTrdRepIndicators_0_0, FIX::TrdRepPartyRole{553092599}, TrdRepIndicatorsGrp_NoTrdRepIndicators_2);
    all_values.push_back(TrdRepIndicatorsGrp_NoTrdRepIndicators_2);
    all_compo_names.insert("...NoTrdRepIndicators");

    msg.addGroup(noTrdRepIndicators_0_0);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::TradeCaptureReportAck::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_139;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_1245047037"}, UnderlyingInstrument_139);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{94054545}, UnderlyingInstrument_139);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_618556855"}, UnderlyingInstrument_139);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{704824272}, UnderlyingInstrument_139);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_139;
    UnderlyingAdjustedQuantity_139.setString("21233390");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_139, UnderlyingInstrument_139);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_139;
    UnderlyingAllocationPercent_139.setString("34.080000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_139, UnderlyingInstrument_139);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_139;
    UnderlyingAttachmentPoint_139.setString("98.500000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_139, UnderlyingInstrument_139);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_360876460"}, UnderlyingInstrument_139);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_526688030"}, UnderlyingInstrument_139);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_302644778"}, UnderlyingInstrument_139);
    FIX::UnderlyingCapValue UnderlyingCapValue_139;
    UnderlyingCapValue_139.setString("9791069");
set_field(noUnderlyings_0_0, UnderlyingCapValue_139, UnderlyingInstrument_139);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_139;
    UnderlyingCashAmount_139.setString("2233537");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_139, UnderlyingInstrument_139);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_139);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_139;
    UnderlyingContractMultiplier_139.setString("6621375");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_139, UnderlyingInstrument_139);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{105616490}, UnderlyingInstrument_139);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_1668036861"}, UnderlyingInstrument_139);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_24867299"}, UnderlyingInstrument_139);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_139;
    UnderlyingCouponRate_139.setString("63.370000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_139, UnderlyingInstrument_139);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_315227055"}, UnderlyingInstrument_139);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"JPY"}, UnderlyingInstrument_139);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_139;
    UnderlyingCurrentValue_139.setString("19811041");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_139, UnderlyingInstrument_139);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_139;
    UnderlyingDetachmentPoint_139.setString("69.300000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_139, UnderlyingInstrument_139);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_139;
    UnderlyingDirtyPrice_139.setString("5393038");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_139, UnderlyingInstrument_139);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_139;
    UnderlyingEndPrice_139.setString("16783577");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_139, UnderlyingInstrument_139);
    FIX::UnderlyingEndValue UnderlyingEndValue_139;
    UnderlyingEndValue_139.setString("18692893");
set_field(noUnderlyings_0_0, UnderlyingEndValue_139, UnderlyingInstrument_139);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{1991951412}, UnderlyingInstrument_139);
    FIX::UnderlyingFXRate UnderlyingFXRate_139;
    UnderlyingFXRate_139.setString("608519");
set_field(noUnderlyings_0_0, UnderlyingFXRate_139, UnderlyingInstrument_139);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_139);
    FIX::UnderlyingFactor UnderlyingFactor_139;
    UnderlyingFactor_139.setString("3975603");
set_field(noUnderlyings_0_0, UnderlyingFactor_139, UnderlyingInstrument_139);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{552449042}, UnderlyingInstrument_139);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_1936343941"}, UnderlyingInstrument_139);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_491614909"}, UnderlyingInstrument_139);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_1171005898"}, UnderlyingInstrument_139);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_493684565"}, UnderlyingInstrument_139);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_467470305"}, UnderlyingInstrument_139);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1299439306"}, UnderlyingInstrument_139);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1569284415"}, UnderlyingInstrument_139);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_139;
    UnderlyingNotionalPercentageOutstanding_139.setString("67.660000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_139, UnderlyingInstrument_139);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_139);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_139;
    UnderlyingOriginalNotionalPercentageOutstanding_139.setString("91.930000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_139, UnderlyingInstrument_139);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1807453756"}, UnderlyingInstrument_139);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_139;
    UnderlyingPriceUnitOfMeasureQty_139.setString("20494810");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_139, UnderlyingInstrument_139);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{1289504319}, UnderlyingInstrument_139);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{322107643}, UnderlyingInstrument_139);
    FIX::UnderlyingPx UnderlyingPx_139;
    UnderlyingPx_139.setString("76138");
set_field(noUnderlyings_0_0, UnderlyingPx_139, UnderlyingInstrument_139);
    FIX::UnderlyingQty UnderlyingQty_139;
    UnderlyingQty_139.setString("8100575");
set_field(noUnderlyings_0_0, UnderlyingQty_139, UnderlyingInstrument_139);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_346974943"}, UnderlyingInstrument_139);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1096420224"}, UnderlyingInstrument_139);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_139;
    UnderlyingRepurchaseRate_139.setString("45.880000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_139, UnderlyingInstrument_139);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{1463917524}, UnderlyingInstrument_139);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_28965998"}, UnderlyingInstrument_139);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_958905103"}, UnderlyingInstrument_139);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_944720806"}, UnderlyingInstrument_139);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_568269852"}, UnderlyingInstrument_139);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_489779234"}, UnderlyingInstrument_139);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_666526508"}, UnderlyingInstrument_139);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_412737617"}, UnderlyingInstrument_139);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_550631155"}, UnderlyingInstrument_139);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_1357823412"}, UnderlyingInstrument_139);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{5}, UnderlyingInstrument_139);
    FIX::UnderlyingStartValue UnderlyingStartValue_139;
    UnderlyingStartValue_139.setString("11030801");
set_field(noUnderlyings_0_0, UnderlyingStartValue_139, UnderlyingInstrument_139);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1146683705"}, UnderlyingInstrument_139);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"USD"}, UnderlyingInstrument_139);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_139;
    UnderlyingStrikePrice_139.setString("16403682");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_139, UnderlyingInstrument_139);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_1769383195"}, UnderlyingInstrument_139);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_1426041754"}, UnderlyingInstrument_139);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_1062169038"}, UnderlyingInstrument_139);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_450246313"}, UnderlyingInstrument_139);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_139;
    UnderlyingUnitOfMeasureQty_139.setString("11046854");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_139, UnderlyingInstrument_139);
    all_values.push_back(UnderlyingInstrument_139);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_289;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_110216421"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_289);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1006682839"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_289);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_289);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_282;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_432324064"}, UnderlyingStipulations_NoUnderlyingStips_282);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_1014296726"}, UnderlyingStipulations_NoUnderlyingStips_282);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_282);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_283;
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipType{"STRING_738692788"}, UnderlyingStipulations_NoUnderlyingStips_283);
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipValue{"STRING_779299007"}, UnderlyingStipulations_NoUnderlyingStips_283);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_283);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_291;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_1863977376"}, UndlyInstrumentParties_NoUndlyInstrumentParties_291);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'9'}, UndlyInstrumentParties_NoUndlyInstrumentParties_291);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{2139682949}, UndlyInstrumentParties_NoUndlyInstrumentParties_291);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_291);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_587;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1040453689"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_587);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{560469153}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_587);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_587);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_588;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1165178065"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_588);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{1706980198}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_588);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_588);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_589;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_973206770"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_589);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_2, FIX::UnderlyingInstrumentPartySubIDType{1715809221}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_589);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_589);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_292;
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_917319962"}, UndlyInstrumentParties_NoUndlyInstrumentParties_292);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_292);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyRole{671405771}, UndlyInstrumentParties_NoUndlyInstrumentParties_292);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_292);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_590;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_937933992"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_590);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{798008219}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_590);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_590);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_591;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1556888290"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_591);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubIDType{559833539}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_591);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_591);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_592;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_76566325"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_592);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_2, FIX::UnderlyingInstrumentPartySubIDType{471573680}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_592);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_592);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_293;
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyID{"STRING_1010079852"}, UndlyInstrumentParties_NoUndlyInstrumentParties_293);
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_293);
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyRole{1258188264}, UndlyInstrumentParties_NoUndlyInstrumentParties_293);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_293);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::TradeCaptureReportAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_593;
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_40450958"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_593);
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_0, FIX::UnderlyingInstrumentPartySubIDType{1186823519}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_593);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_593);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  // header
  multiset<string> header_97;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_8"}, header_97);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_1054747684"}, header_97);
  set_header_field(msg.getHeader(), FIX::BodyLength{1925516307}, header_97);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_184435697"}, header_97);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_1017980986"}, header_97);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_1642010035"}, header_97);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_280168581"}, header_97);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{1010180287}, header_97);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_SHIFT_JIS"}, header_97);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{1320622270}, header_97);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_1570649441"}, header_97);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_1335103283"}, header_97);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_880118820"}, header_97);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(0, 3, 26, 23, 4, 2003)}, header_97);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{true}, header_97);
  set_header_field(msg.getHeader(), FIX::PossResend{false}, header_97);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_1530161198"}, header_97);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{301925523}, header_97);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_1594937126"}, header_97);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_392757403"}, header_97);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_1483177290"}, header_97);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(4, 8, 41, 2, 5, 2000)}, header_97);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_1102626064"}, header_97);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_1448873271"}, header_97);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_1165024307"}, header_97);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_1382794645"}, header_97);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{311569910}, header_97);
  all_values.push_back(header_97);
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
